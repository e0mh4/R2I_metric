#include "decompile_retdec.h"
// Address range: 0x401780 - 0x401785
int64_t function_401780(void) {
    // 0x401780
    abort();
    // UNREACHABLE
}
// Address range: 0x401785 - 0x40178a
int64_t function_401785(void) {
    // 0x401785
    abort();
    // UNREACHABLE
}
// Address range: 0x40178a - 0x40178f
int64_t function_40178a(void) {
    // 0x40178a
    abort();
    // UNREACHABLE
}
// Address range: 0x40178f - 0x401794
int64_t function_40178f(void) {
    // 0x40178f
    abort();
    // UNREACHABLE
}
// Address range: 0x401794 - 0x401799
int64_t function_401794(void) {
    // 0x401794
    abort();
    // UNREACHABLE
}
// Address range: 0x401799 - 0x40179e
int64_t function_401799(void) {
    // 0x401799
    abort();
    // UNREACHABLE
}
// Address range: 0x4017a0 - 0x4028a8
int64_t function_4017a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4017a0
    int64_t v1; // 0x4017a0
    int64_t v2 = v1;
    function_4036d0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407800(0x4034c0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g35 = 0;
    g37 = 0;
    *(char *)&g36 = 10;
    int32_t v3 = 1; // 0x40180a
    int32_t v4 = 10; // 0x40180a
    int64_t v5 = 0; // 0x40180a
    int64_t v6 = a2; // 0x40180a
    int64_t v7 = a1; // 0x40180a
    int64_t v8; // 0x4017a0
    int64_t v9; // 0x4017a0
    int64_t v10; // 0x4017a0
    int64_t v11; // 0x4017a0
    int64_t v12; // 0x4017a0
    int64_t v13; // 0x4017a0
    int64_t v14; // 0x4017a0
    int64_t v15; // 0x4017a0
    int64_t v16; // 0x4017a0
    int64_t v17; // 0x4017a0
    int64_t v18; // 0x4017a0
    int64_t v19; // 0x4017a0
    int64_t v20; // 0x4017a0
    int64_t v21; // 0x4017a0
    int64_t v22; // 0x4017a0
    int64_t v23; // 0x4017a0
    int64_t v24; // 0x4017a0
    int64_t v25; // 0x4017a0
    int64_t v26; // 0x4017a0
    int64_t v27; // 0x4017a0
    int32_t v28; // 0x4017a0
    char * format; // 0x4017a0
    int64_t v29; // 0x40180c
    int64_t * v30; // 0x40180c
    int64_t v31; // 0x4019c8
    int64_t v32; // 0x4019e0
    char * v33; // 0x4017a0
    if ((int32_t)a1 < 2) {
        goto lab_0x401829;
    } else {
        // 0x40180c
        v29 = a2 + 8;
        v30 = (int64_t *)v29;
        int64_t v34 = *v30; // 0x40180c
        v3 = 1;
        v4 = 10;
        v5 = 0;
        v6 = a2;
        v7 = a1;
        if (*(char *)v34 == 45) {
            // 0x4019c8
            v31 = v34 + 1;
            char v35 = *(char *)v31; // 0x4019c8
            v3 = 1;
            v4 = 10;
            v5 = 0;
            v6 = a2;
            v7 = a1;
            if (v35 == 57 || (int32_t)v35 < 57) {
                v23 = v31;
                v32 = v23 + 1;
                v33 = (char *)v32;
                char v36 = *v33; // 0x4019e4
                while (v36 == 57 || (int32_t)v36 < 57) {
                    // 0x4019e0
                    v23 = v32;
                    v32 = v23 + 1;
                    v33 = (char *)v32;
                    v36 = *v33;
                }
                // 0x4019f2
                v28 = 1;
                v27 = a3;
                v22 = 0;
                v15 = a5;
                if (v36 != 0) {
                    // 0x401a18
                    v26 = v32;
                    v19 = 0;
                    v24 = 0;
                    v12 = 0;
                    v16 = 10;
                    v8 = 1;
                    v10 = (int64_t)v36 & 0xffffffff;
                    while (true) {
                      lab_0x401a18:
                        // 0x401a18
                        v11 = v10;
                        int64_t v37 = v8;
                        v17 = v16;
                        v13 = v12;
                        int64_t v38 = v24;
                        v20 = v19;
                        uint64_t v39 = v11 + 0xffffff9e; // 0x401a18
                        g52 = v39 % 256;
                        v21 = v20;
                        v25 = v38;
                        v14 = 1;
                        v18 = 0;
                        v9 = v37;
                        switch ((char)v39) {
                            case 0: {
                                goto lab_0x401aab;
                            }
                            case 1: {
                                // 0x401aa4
                                v21 = v20;
                                v25 = 0;
                                v14 = v13;
                                v18 = v17;
                                v9 = 0;
                                goto lab_0x401a40;
                            }
                            case 9: {
                                goto lab_0x401aab;
                            }
                            case 10: {
                                // 0x401a9c
                                v21 = v20;
                                v25 = v38;
                                v14 = v13;
                                v18 = v17;
                                v9 = 1;
                                goto lab_0x401a40;
                            }
                            case 11: {
                                goto lab_0x401aab;
                            }
                            case 15: {
                                // 0x401a95
                                v21 = 2;
                                v25 = v38;
                                v14 = v13;
                                v18 = v17;
                                v9 = v37;
                                goto lab_0x401a40;
                            }
                            case 20: {
                                // 0x401a8e
                                v21 = 1;
                                v25 = v38;
                                v14 = v13;
                                v18 = v17;
                                v9 = v37;
                                goto lab_0x401a40;
                            }
                            case 24: {
                                goto lab_0x401a40;
                            }
                            default: {
                                goto lab_0x40238d;
                            }
                        }
                    }
                  lab_0x40238d:
                    if ((char)v13 != 0) {
                        // 0x402392
                        *(char *)&g36 = (char)v17;
                    }
                    // 0x402399
                    format = dcgettext(NULL, "invalid trailing option -- %c", 5);
                  lab_0x40237a:
                    // 0x40237a
                    error(0, 0, format);
                    // 0x4018f3
                    function_4030d0(1);
                    // UNREACHABLE
                }
                goto lab_0x401a6a;
            } else {
                goto lab_0x401829;
            }
        } else {
            goto lab_0x401829;
        }
    }
  lab_0x402576_4:;
    // 0x402576
    char * v40; // 0x4017a0
    free((int64_t *)v40);
    int32_t v41; // 0x4017a0
    int32_t v42 = v41; // 0x402585
    char * v43; // 0x4017a0
    char * v44 = v43; // 0x402585
    int64_t v45; // 0x4017a0
    int64_t v46 = v45; // 0x402585
    int32_t v47; // 0x4017a0
    int32_t v48 = v47; // 0x402585
    int64_t v49; // 0x4017a0
    int64_t v50 = v49; // 0x402585
    int64_t v51; // 0x4017a0
    int64_t v52 = v51; // 0x402585
    int64_t v53; // 0x4017a0
    int64_t v54 = v53; // 0x402585
    int64_t v55; // 0x4017a0
    int64_t v56 = v55; // 0x402585
    int64_t v57; // 0x4017a0
    int64_t v58 = v57; // 0x402585
    int64_t v59; // 0x4017a0
    int64_t v60 = v59; // 0x402585
    int64_t v61; // 0x4017a0
    int64_t v62 = v61; // 0x402585
    int32_t v63; // 0x4017a0
    int32_t v64 = v63; // 0x402585
    int32_t v65; // 0x4017a0
    int32_t v66 = v65; // 0x402585
    int64_t v67; // 0x4017a0
    int32_t v68 = v67; // 0x402585
    int64_t v69; // 0x4017a0
    int64_t v70 = v69; // 0x402585
    int64_t v71; // 0x4017a0
    int64_t v72 = v71; // 0x402585
    int64_t v73; // 0x4017a0
    int64_t v74 = v73; // 0x402585
    goto lab_0x4024b7;
  lab_0x402609:;
    // 0x402609
    int64_t v229; // 0x4017a0
    int64_t v230; // 0x4017a0
    int64_t v212; // 0x402532
    function_402a90(*(int64_t *)(v229 + v212) + 0x2000, v230);
    int64_t v227; // 0x4017a0
    int64_t v570 = v227; // 0x40261b
    int64_t v228; // 0x4017a0
    int64_t v571 = v228; // 0x40261b
    int64_t v238 = v227; // 0x40261b
    int64_t v239 = v228; // 0x40261b
    uint64_t v221; // 0x40253d
    uint64_t v208; // 0x4024fc
    if (v221 > v208) {
        goto lab_0x402636;
    } else {
        goto lab_0x40261d;
    }
  lab_0x402641:;
    // 0x402641
    int64_t v226; // 0x4017a0
    int64_t v220; // 0x402532
    function_402a90(v220, v226);
    int64_t v224; // 0x4017a0
    v570 = v224;
    int64_t v225; // 0x4017a0
    v571 = v225;
    goto lab_0x40261d;
  lab_0x402636:;
    int64_t v581 = v221 - v208; // 0x402636
    int64_t v582 = v238 + v581; // 0x402639
    v570 = v582;
    v571 = v239;
    v224 = v582;
    v225 = v239;
    v226 = v581;
    if (v581 == 0) {
        goto lab_0x40261d;
    } else {
        goto lab_0x402641;
    }
  lab_0x40261d:;
    // 0x40261d
    int32_t v204; // 0x4017a0
    v41 = v204;
    char * v202; // 0x4017a0
    v43 = v202;
    int64_t v200; // 0x4017a0
    v45 = v200;
    int32_t v198; // 0x4017a0
    v47 = v198;
    int64_t v196; // 0x4017a0
    v49 = v196;
    int64_t v194; // 0x4017a0
    v51 = v194;
    int64_t v192; // 0x4017a0
    v53 = v192;
    int64_t v190; // 0x4017a0
    v55 = v190;
    int64_t v188; // 0x4017a0
    v57 = v188;
    int64_t v186; // 0x4017a0
    v59 = v186;
    int64_t v184; // 0x4017a0
    v61 = v184;
    int32_t v182; // 0x4017a0
    v63 = v182;
    int32_t v181; // 0x4017a0
    v65 = v181;
    char * v209; // 0x402506
    v40 = v209;
    v69 = v571;
    v67 = v570;
    int64_t v210; // 0x402520
    v71 = v210;
    int64_t v177; // 0x4017a0
    v73 = v177;
    int64_t v232 = v570; // 0x402622
    int64_t v217; // 0x4017a0
    int64_t v233 = v217 ^ 1; // 0x402622
    if ((char)v571 != 0) {
        goto lab_0x402576_4;
    }
    goto lab_0x4025b3;
  lab_0x4025b3:;
    int64_t v213 = 0; // 0x4025b8
    int64_t v214 = v233; // 0x4025b8
    int64_t v215 = v232; // 0x4025b8
    goto lab_0x402525;
  lab_0x401de7:;
    // 0x401de7
    int64_t v274; // 0x4017a0
    int64_t v572 = v274;
    int64_t v273; // 0x4017a0
    int64_t v573 = v273;
    char * v271; // 0x4017a0
    char * v559 = v271;
    int32_t v270; // 0x4017a0
    int32_t v574 = v270;
    int64_t v258; // 0x4017a0
    int64_t v556 = (v258 + 1) % v186;
    int64_t v272; // 0x4017a0
    int64_t v557; // 0x4017a0
    int64_t v283; // 0x4017a0
    char * v282; // 0x4017a0
    int32_t v281; // 0x4017a0
    int64_t v251; // 0x401d81
    uint64_t v560; // 0x402421
    int32_t v558; // 0x40244f
    if ((char)v573 != 0) {
        // 0x40241b
        v557 = v272;
        if ((char)v572 == 0) {
            int64_t v575 = v573 & 0xffffffff; // 0x40241e
            v281 = v574;
            v282 = v559;
            v283 = v575;
            if (v188 != v258) {
                goto lab_0x40248f;
            } else {
                int64_t v576 = v557 - v196; // 0x4026c3
                int32_t v577 = v574 + (int32_t)v576; // 0x4026cb
                v281 = v577;
                v282 = v559;
                v283 = v575;
                if (v576 == 0) {
                    goto lab_0x40248f;
                } else {
                    // 0x4026d9
                    function_402a90(*(int64_t *)(8 * v556 + v251), v576);
                    v281 = v577;
                    v282 = v559;
                    v283 = v575;
                    goto lab_0x40248f;
                }
            }
        } else {
            // 0x40243b
            v560 = 0x100000000000000 * v572 >> 56;
            uint64_t v578 = 0x2000 - v557; // 0x40244c
            v558 = v574 + (int32_t)v194;
            int64_t v579 = *(int64_t *)(8 * v258 + v251) + v557; // 0x402454
            if (v194 < v578) {
                // 0x40281b
                function_402a90(v579, v194);
                v281 = v558;
                v282 = v559;
                v283 = v560 % 256;
                goto lab_0x40248f;
            } else {
                if (v578 == 0) {
                    // 0x402460
                    goto lab_0x4027fd;
                } else {
                    // 0x40246d
                    function_402a90(v579, v578);
                    v281 = v558;
                    v282 = v559;
                    v283 = v560 % 256;
                    if (v557 != v196) {
                        goto lab_0x4027fd;
                    } else {
                        goto lab_0x40248f;
                    }
                }
            }
        }
    }
    int32_t v241 = v574; // 0x401e06
    char * v242 = v559; // 0x401e06
    int64_t v243 = v556; // 0x401e06
    int64_t v250; // 0x4017a0
    int64_t v244 = v250; // 0x401e06
    int64_t v245 = v251; // 0x401e06
    int64_t v246 = v572; // 0x401e06
    int32_t v252 = v574; // 0x401e06
    char * v253 = v559; // 0x401e06
    int64_t v254 = v258; // 0x401e06
    int64_t v255 = v556; // 0x401e06
    int64_t v256 = v572; // 0x401e06
    if (v250 == v258) {
        goto lab_0x401d58;
    } else {
        goto lab_0x401d94;
    }
  lab_0x401dd3:;
    // 0x401dd3
    int64_t v268; // 0x4017a0
    int32_t v260; // 0x4017a0
    int32_t v580 = v260 + (int32_t)v268; // 0x401dd3
    v270 = v580;
    char * v267; // 0x4017a0
    v271 = v267;
    v272 = v268;
    int64_t v269; // 0x4017a0
    v273 = v269;
    int64_t v240; // 0x4017a0
    v274 = v240;
    int32_t v277 = v580; // 0x401de1
    char * v278 = v267; // 0x401de1
    int64_t v279 = v268; // 0x401de1
    int64_t v280 = v269; // 0x401de1
    if (v268 != 0) {
        goto lab_0x401ea3;
    } else {
        goto lab_0x401de7;
    }
  lab_0x401ea3:
    // 0x401ea3
    function_402a90(*(int64_t *)(8 * v258 + v251), v279);
    v270 = v277;
    v271 = v278;
    v272 = v279;
    v273 = v280;
    v274 = v240;
    goto lab_0x401de7;
  lab_0x401838_4:;
    // 0x401838
    int32_t v454; // 0x4017a0
    int32_t v457 = v454; // 0x4017a0
    int64_t v455; // 0x4017a0
    int32_t v458 = v455; // 0x4017a0
    bool v456; // 0x4017a0
    int32_t v459 = v456; // 0x4017a0
    int64_t v460; // 0x4017a0
    int64_t v461 = v460; // 0x4017a0
    goto lab_0x401838_5;
  lab_0x401aab:
    // 0x401aab
    v21 = v20;
    v25 = v11;
    v14 = v13;
    v18 = v17;
    v9 = 0;
    goto lab_0x401a40;
  lab_0x401a40:;
    int64_t v476 = v9;
    int64_t v477 = v18;
    int64_t v478 = v14;
    int64_t v479 = v25;
    int64_t v480 = v21;
    int64_t v481 = v26 + 1; // 0x401a40
    unsigned char v482 = *(char *)v481; // 0x401a44
    v26 = v481;
    v19 = v480;
    v24 = v479;
    v12 = v478;
    v16 = v477;
    v8 = v476;
    v10 = v482;
    if (v482 == 0) {
        if ((char)v478 == 0) {
            goto lab_0x401a5e;
        } else {
            // 0x401a57
            *(char *)&g36 = (char)v477;
            goto lab_0x401a5e;
        }
    }
    goto lab_0x401a18;
  lab_0x401829:;
    int64_t v483 = v7;
    int64_t v484; // 0x4017a0
    int64_t v453 = v484;
    int64_t v467 = v6;
    int64_t v466 = v483 & 0xffffffff;
    v457 = v3;
    v458 = v4;
    v459 = 0;
    v461 = v5;
    int32_t v463; // 0x4017a0
    int32_t v462; // 0x4017a0
    int32_t v206; // 0x4017a0
    char v452; // 0x40189f
    char * v451; // 0x4018b0
    while (true) {
      lab_0x401838_5:
        // 0x401838
        v462 = v459;
        v206 = v458;
        v463 = v457;
        int64_t v464 = v461; // 0x4017a0
        while (true) {
          lab_0x401838_3:
            // 0x401838
            v460 = v464;
            while (true) {
              lab_0x401838:;
                int64_t v465 = function_406e30(v466, v467, "c:n:qvz0123456789", &g3, 0, v453); // 0x40184b
                uint32_t v468 = (int32_t)v465;
                switch (v468) {
                    case -1: {
                        goto lab_0x401ab3;
                    }
                    case 110: {
                        goto lab_0x401948;
                    }
                    default: {
                        if (v468 <= 110) {
                            if (v468 == -130) {
                                // 0x402839
                                function_4030d0(0);
                                // UNREACHABLE
                            }
                            if (v468 != 99) {
                                if (v468 == -131) {
                                    // 0x401990
                                    function_4057d0((int64_t)g30, "head", "GNU coreutils", (int64_t)g19, "David MacKenzie", "Jim Meyering");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                if (v468 < 58) {
                                    // 0x402366
                                    format = dcgettext(NULL, "invalid trailing option -- %c", 5);
                                    goto lab_0x40237a;
                                } else {
                                    goto lab_0x4018f3;
                                }
                            } else {
                                char * v469 = g51; // 0x401898
                                v452 = *v469;
                                v451 = v469;
                                if (v452 != 45) {
                                    goto lab_0x4018b7;
                                } else {
                                    // 0x4018ac
                                    v451 = (char *)((int64_t)v469 + 1);
                                    g51 = v451;
                                    goto lab_0x4018b7;
                                }
                            }
                        }
                        // 0x401864
                        if (v468 == 118) {
                            // break -> 0x401838
                            break;
                        }
                        if (v468 <= 118) {
                            // 0x401920
                            if (v468 != 113) {
                                goto lab_0x4018f3;
                            } else {
                                // 0x401838
                                v464 = 2;
                                goto lab_0x401838_3;
                            }
                        }
                        if (v468 != 122) {
                            if (v468 != 128) {
                                // 0x4018f3
                                function_4030d0(1);
                                // UNREACHABLE
                            }
                            // 0x40190b
                            *(char *)&g38 = 1;
                        } else {
                            // 0x40187c
                            *(char *)&g36 = 0;
                        }
                        goto lab_0x401838;
                    }
                }
            }
            // 0x401838
            int64_t v470; // 0x4017a0
            int64_t v471 = v470;
            v464 = v471;
            goto lab_0x401838_3;
        }
      lab_0x401948:;
        char * v472 = g51; // 0x401948
        char v473 = *v472; // 0x40194f
        char * v474 = v472; // 0x40195a
        if (v473 == 45) {
            // 0x40195c
            v474 = (char *)((int64_t)v472 + 1);
            g51 = v474;
        }
        int64_t v475 = function_402990(1, (int64_t)v474, v473, (int64_t)&g3, 0, v453); // 0x401973
        v454 = 1;
        v455 = v475;
        v456 = v473 == 45;
        goto lab_0x401838_4;
    }
  lab_0x401ab3:;
    int32_t v485 = v460; // 0x401ab3
    if (v485 == 1) {
        // 0x401cac
        g37 = 1;
        goto lab_0x401ad1;
    } else {
        if (v485 != 0) {
            goto lab_0x401ad1;
        } else {
            // 0x401ac0
            if ((int32_t)v483 - 1 > *(int32_t *)0x60b27c) {
                // 0x401cac
                g37 = 1;
                goto lab_0x401ad1;
            } else {
                goto lab_0x401ad1;
            }
        }
    }
  lab_0x401ad1:;
    int64_t v486; // bp-200, 0x4017a0
    int128_t v487; // 0x4017a0
    if ((char)v463 != 0) {
        goto lab_0x401aeb;
    } else {
        if (v206 < 0 == (v462 != 0)) {
            int64_t v488 = function_403680((int64_t)v206, &v486); // 0x40284d
            error(1, EOVERFLOW, "%s: %s", dcgettext(NULL, "invalid number of bytes", 5), (char *)function_4052f0(v488));
            v41 = v462;
            v59 = v487;
            v69 = v462;
            v67 = &g56;
            char * v489; // 0x4017a0
            v71 = (int64_t)v489;
            v73 = (int64_t)v489;
            goto lab_0x402576_4;
        } else {
            goto lab_0x401aeb;
        }
    }
  lab_0x401aeb:;
    int64_t v490 = g28; // 0x401aeb
    int64_t v491 = (int64_t)&g2; // 0x401af5
    int64_t v492 = (int64_t)"-"; // 0x401af5
    int64_t v172; // 0x4017a0
    int32_t v166; // 0x4017a0
    int32_t v163; // 0x4017a0
    if (v466 > v490) {
        int64_t v493 = 8 * v490 + v467; // 0x401afb
        int64_t v494 = *(int64_t *)v493; // 0x401b00
        v491 = v493;
        v492 = v494;
        v163 = v462;
        v166 = 1;
        v172 = v487;
        if (v494 == 0) {
            goto lab_0x401ecc;
        } else {
            goto lab_0x401b15;
        }
    } else {
        goto lab_0x401b15;
    }
  lab_0x401a6a:;
    // 0x401a6a
    int64_t v495; // 0x4017a0
    int64_t v496 = function_402990(v28 % 256, v31, (char)v27, v32, v15, v495); // 0x401a77
    *v30 = *(int64_t *)a2;
    v3 = v28;
    v4 = v496;
    v5 = v22;
    v6 = v29;
    v484 = v495;
    v7 = a1 + 0xffffffff;
    goto lab_0x401829;
  lab_0x401b15:;
    int64_t v497 = v206; // 0x401b15
    int64_t v498 = v206 % 0x2000; // 0x401b33
    int64_t v499 = 0x2000 - v498; // 0x401b39
    int64_t v500 = v497 + 0x2000; // 0x401b52
    int64_t v501 = (v499 + v497) / 0x2000; // 0x401b64
    int64_t v502 = v501 + 1; // 0x401b6d
    int32_t v151 = v462; // 0x401b83
    char * v152 = "-"; // 0x401b83
    int64_t v153 = v491 + 8; // 0x401b83
    int32_t v154 = 1; // 0x401b83
    int64_t v155 = v498; // 0x401b83
    int64_t v156 = v499; // 0x401b83
    int64_t v157 = v500; // 0x401b83
    int64_t v158 = 2 * v500; // 0x401b83
    int64_t v159 = v501; // 0x401b83
    int64_t v160 = v502; // 0x401b83
    int64_t v161 = v502 / 2; // 0x401b83
    int64_t v162 = v492; // 0x401b83
    goto lab_0x401c32;
  lab_0x401ecc:;
    uint32_t v555 = v166;
    if (g35 == 0 || close(0) >= 0) {
        // 0x401ed9
        return v555 % 256 ^ 1;
    }
    // 0x4022a4
    error(1, *__errno_location(), "-");
    int32_t v543 = v163; // 0x4022b7
    char * v164; // 0x4017a0
    char * v542 = v164; // 0x4022b7
    int64_t v165; // 0x4017a0
    int64_t v541 = v165; // 0x4022b7
    int32_t v540 = v555; // 0x4022b7
    int64_t v167; // 0x4017a0
    int64_t v539 = v167; // 0x4022b7
    int64_t v168; // 0x4017a0
    int64_t v538 = v168; // 0x4022b7
    int64_t v169; // 0x4017a0
    int64_t v537 = v169; // 0x4022b7
    int64_t v170; // 0x4017a0
    int64_t v536 = v170; // 0x4022b7
    int64_t v171; // 0x4017a0
    int64_t v535 = v171; // 0x4022b7
    int64_t v534 = v172; // 0x4022b7
    int64_t v173; // 0x4017a0
    int64_t v533 = v173; // 0x4022b7
    int32_t v174; // 0x4017a0
    int32_t v532 = v174; // 0x4022b7
    int64_t v175; // 0x4017a0
    int64_t v531 = v175; // 0x4022b7
    int64_t v176; // 0x4017a0
    int64_t v530 = v176; // 0x4022b7
    goto lab_0x4022bc;
  lab_0x401c32:;
    int64_t path = v162;
    int64_t v503 = v161;
    int64_t v504 = v160;
    int64_t v505 = v159;
    int64_t v506 = v158;
    int64_t v507 = v157;
    int64_t v508 = v156;
    int64_t v509 = v155;
    int32_t v510 = v154;
    int64_t v511 = v153;
    char * v512 = v152;
    int32_t v513 = v151;
    bool v514; // 0x4017a0
    int64_t v515 = v514 ? -1 : 1; // 0x401c3f
    int64_t v516 = 2; // 0x4017a0
    int64_t v517 = path;
    int64_t v518 = (int64_t)v512;
    unsigned char v519 = *(char *)v517; // 0x401c3f
    char v520 = *(char *)v518; // 0x401c3f
    char v521 = v520; // 0x401c3f
    bool v522 = false; // 0x401c3f
    while (v519 == v520) {
        int64_t v523 = v516 - 1; // 0x401c3f
        int64_t v524 = v518 + v515; // 0x401c3f
        int64_t v525 = v517 + v515; // 0x401c3f
        v516 = v523;
        v521 = v519;
        v522 = true;
        if (v523 == 0) {
            // break -> 
            break;
        }
        v517 = v525;
        v518 = v524;
        v519 = *(char *)v517;
        v520 = *(char *)v518;
        v521 = v520;
        v522 = false;
    }
    unsigned char v526 = v521;
    int64_t v527 = (int64_t)!((v519 < v526 | v522)) - (int64_t)(v519 < v526); // 0x401c44
    int64_t v146; // 0x4017a0
    int64_t v528; // 0x4017a0
    int64_t v138; // 0x4017a0
    int64_t v139; // 0x4017a0
    int64_t v141; // 0x4017a0
    int64_t v144; // 0x4017a0
    int64_t v142; // 0x4017a0
    int64_t v140; // 0x4017a0
    int64_t v143; // 0x4017a0
    char * v135; // 0x4017a0
    int32_t v137; // 0x4017a0
    int32_t v134; // 0x4017a0
    int32_t v529; // 0x4017a0
    int32_t v145; // 0x4017a0
    int64_t v136; // 0x4017a0
    int64_t v147; // 0x4017a0
    if ((int32_t)v527 == 0) {
        // 0x401b88
        g35 = 1;
        v529 = 0;
        v528 = (int64_t)dcgettext(NULL, "standard input", 5);
        goto lab_0x401bab;
    } else {
        int32_t fd = open((char *)path, O_RDONLY); // 0x401c5a
        v529 = fd;
        v528 = path;
        if (fd >= 0) {
            goto lab_0x401bab;
        } else {
            // 0x401c6b
            function_4050a0(4, path);
            v134 = v513;
            v135 = v512;
            v136 = v511;
            v137 = v510;
            v138 = v509;
            v139 = v508;
            v140 = v507;
            v141 = v506;
            v142 = v505;
            v143 = v504;
            v144 = v503;
            v145 = fd;
            v146 = v527;
            v147 = (int64_t)"cannot open %s for reading";
            goto lab_0x401c85;
        }
    }
  lab_0x4022bc:;
    int64_t v429 = v530;
    int64_t v428 = v531;
    int32_t v427 = v532;
    int64_t v426 = v533;
    int64_t v425 = v534;
    int64_t v424 = v535;
    int64_t v423 = v536;
    int64_t v422 = v537;
    int64_t v421 = v538;
    int64_t v420 = v539;
    int32_t v419 = v540;
    int64_t v418 = v541;
    char * v417 = v542;
    int32_t v416 = v543;
    int64_t v544 = function_4029f0(v427, 0, 1, v429); // 0x4022ca
    int32_t v434 = v416; // 0x4022d7
    char * v435 = v417; // 0x4022d7
    int64_t v436 = v418; // 0x4022d7
    int32_t v437 = v419; // 0x4022d7
    int64_t v438 = v420; // 0x4022d7
    int64_t v439 = v421; // 0x4022d7
    int64_t v440 = v422; // 0x4022d7
    int64_t v441 = v423; // 0x4022d7
    int64_t v442 = v424; // 0x4022d7
    int64_t v443 = v425; // 0x4022d7
    int64_t v444 = v426; // 0x4022d7
    int32_t v445 = v427; // 0x4022d7
    int64_t v446 = v428; // 0x4022d7
    int64_t v447 = v429; // 0x4022d7
    int64_t v431; // 0x4017a0
    int64_t v103; // 0x4017a0
    int64_t v180; // 0x4017a0
    int64_t v104; // 0x4017a0
    int64_t v178; // 0x4017a0
    int64_t v285; // 0x4017a0
    int64_t v102; // 0x4017a0
    int64_t v94; // 0x4017a0
    int64_t v197; // 0x4017a0
    int64_t v301; // 0x4017a0
    int64_t v95; // 0x4017a0
    int64_t v195; // 0x4017a0
    int64_t v299; // 0x4017a0
    int64_t v97; // 0x4017a0
    int64_t v191; // 0x4017a0
    int64_t v295; // 0x4017a0
    int64_t v100; // 0x4017a0
    int64_t v185; // 0x4017a0
    int64_t v289; // 0x4017a0
    int64_t v98; // 0x4017a0
    int64_t v189; // 0x4017a0
    int64_t v293; // 0x4017a0
    int32_t v311; // 0x4017a0
    int64_t v96; // 0x4017a0
    int64_t v193; // 0x4017a0
    int64_t v297; // 0x4017a0
    int64_t v99; // 0x4017a0
    int64_t v187; // 0x4017a0
    int64_t v291; // 0x4017a0
    char * v91; // 0x4017a0
    char * v203; // 0x4017a0
    char * v307; // 0x4017a0
    int32_t v93; // 0x4017a0
    int32_t v199; // 0x4017a0
    int32_t v303; // 0x4017a0
    int32_t v90; // 0x4017a0
    int32_t v309; // 0x4017a0
    int32_t v205; // 0x4017a0
    int32_t v101; // 0x4017a0
    int32_t v183; // 0x4017a0
    int32_t v287; // 0x4017a0
    int64_t v92; // 0x4017a0
    int64_t v201; // 0x4017a0
    int64_t v305; // 0x4017a0
    if (v544 < 0) {
        goto lab_0x402234;
    } else {
        int32_t v545 = v544; // 0x4022cf
        if ((char)v463 == 0) {
            // 0x4023b0
            v205 = v416;
            v203 = v417;
            v201 = v418;
            v199 = v419;
            v197 = v420;
            v195 = v421;
            v193 = v422;
            v191 = v423;
            v189 = v424;
            v187 = v425;
            v185 = v426;
            v183 = v427;
            v180 = v428;
            v178 = v429;
            unsigned char v546; // 0x4022ea
            if (v546 != 0) {
                goto lab_0x401d16;
            } else {
                int64_t v547 = v2 < 0x2000000000000001 ? v2 : 512; // 0x4023d6
                v205 = v416;
                v203 = v417;
                v201 = v418;
                v199 = v419;
                v197 = v420;
                v195 = v421;
                v193 = v422;
                v191 = v423;
                v189 = v424;
                v187 = v425;
                v185 = v426;
                v183 = v427;
                v180 = v428;
                v178 = v429;
                int64_t v548; // 0x4017a0
                if (v548 > v547) {
                    int64_t v549 = v548 - (0x100000000 * v544 >> 32); // 0x4023e3
                    uint64_t v550 = v549 > 0 ? v549 : 0; // 0x4023ed
                    uint64_t v551 = (int64_t)v206; // 0x4023f1
                    if (v550 <= v551) {
                        goto lab_0x402411;
                    } else {
                        int64_t v552 = function_402b10(v427, v550 - v551); // 0x402404
                        if ((int32_t)v552 != 0) {
                            // 0x4027ee
                            function_402e00(v552 & 0xffffffff, v429);
                            v90 = v416;
                            v91 = v417;
                            v92 = v418;
                            v93 = v419;
                            v94 = v420;
                            v95 = v421;
                            v96 = v422;
                            v97 = v423;
                            v98 = v424;
                            v99 = v425;
                            v100 = v426;
                            v101 = v427;
                            v102 = v546;
                            v103 = v428;
                            v104 = v429;
                            goto lab_0x401c0d;
                        } else {
                            goto lab_0x402411;
                        }
                    }
                } else {
                    goto lab_0x401d16;
                }
            }
        } else {
            // 0x4022f7
            v309 = v416;
            v307 = v417;
            v305 = v418;
            v303 = v419;
            v301 = v420;
            v299 = v421;
            v297 = v422;
            v295 = v423;
            v293 = v424;
            v291 = v425;
            v289 = v426;
            v287 = v427;
            v311 = v545;
            v431 = v428;
            v285 = v429;
            if (*(char *)&g38 != 0) {
                goto lab_0x401f0e;
            } else {
                // 0x4022ff
                v309 = v416;
                v307 = v417;
                v305 = v418;
                v303 = v419;
                v301 = v420;
                v299 = v421;
                v297 = v422;
                v295 = v423;
                v293 = v424;
                v291 = v425;
                v289 = v426;
                v287 = v427;
                v311 = v545;
                v431 = v428;
                v285 = v429;
                if ((v2 < 0x2000000000000001 ? v2 : 512) < v1) {
                    int64_t v553 = 0x100000000 * v544 >> 32; // 0x40232f
                    int64_t v554 = 1; // 0x402334
                    if (v1 > v553) {
                        // 0x40272d
                        v554 = function_402e80(v429, v427, (int64_t)v206, v553, v1) % 256;
                    }
                    // 0x40233a
                    v90 = v416;
                    v91 = v417;
                    v92 = v418;
                    v93 = v419;
                    v94 = v420;
                    v95 = v421;
                    v96 = v422;
                    v97 = v423;
                    v98 = v424;
                    v99 = v425;
                    v100 = v426;
                    v101 = v427;
                    v102 = v554 % 2;
                    v103 = v428;
                    v104 = v429;
                    goto lab_0x401c0d;
                } else {
                    goto lab_0x401f0e;
                }
            }
        }
    }
  lab_0x4024b7:;
    int64_t v75 = v74;
    int64_t v76 = v70;
    int32_t v77 = v64;
    int64_t v78 = v62;
    int64_t v79 = v60;
    int64_t v80 = v58;
    int64_t v81 = v56;
    int64_t v82 = v54;
    int64_t v83 = v52;
    int64_t v84 = v50;
    int32_t v85 = v48;
    int64_t v86 = v46;
    char * v87 = v44;
    int32_t v88 = v42;
    int64_t v89 = v72 & 0xffffffff;
    v90 = v88;
    v91 = v87;
    v92 = v86;
    v93 = v85;
    v94 = v84;
    v95 = v83;
    v96 = v82;
    v97 = v81;
    v98 = v80;
    v99 = v79;
    v100 = v78;
    v101 = v77;
    v102 = v76;
    v103 = v89;
    v104 = v75;
    if (v66 != -1) {
        int64_t v105 = function_4029f0(v77, (int64_t)v68, 0, v75) >= 0 ? v76 : 0;
        v90 = v88;
        v91 = v87;
        v92 = v86;
        v93 = v85;
        v94 = v84;
        v95 = v83;
        v96 = v82;
        v97 = v81;
        v98 = v80;
        v99 = v79;
        v100 = v78;
        v101 = v77;
        v102 = v105;
        v103 = v89;
        v104 = v75;
    }
    goto lab_0x401c0d;
  lab_0x402234:
    // 0x402234
    v90 = v434;
    v91 = v435;
    v92 = v436;
    v93 = v437;
    v94 = v438;
    v95 = v439;
    v96 = v440;
    v97 = v441;
    v98 = v442;
    v99 = v443;
    v100 = v444;
    v101 = v445;
    v102 = 0;
    v103 = v446;
    v104 = v447;
    goto lab_0x401c0d;
  lab_0x401bab:;
    int64_t v563 = v528;
    int32_t v564 = v529;
    if (g37 != 0) {
        char * v565 = g18 == 0 ? (char *)&g10 : (char *)&g11; // 0x401bd8
        __printf_chk(1, "%s==> %s <==\n", v565, (char *)v563);
        g18 = 0;
    }
    if (v513 != 0) {
        // 0x401cc4
        if (__fxstat(1, v564, (struct stat *)&v486) != 0) {
            // 0x402254
            function_4050a0(4, v563);
            error(0, *__errno_location(), dcgettext(NULL, "cannot fstat %s", 5));
            v90 = v513;
            v91 = v512;
            v92 = v511;
            v93 = v510;
            v94 = v509;
            v95 = v508;
            v96 = v507;
            v97 = v506;
            v98 = v505;
            v99 = v504;
            v100 = v503;
            v101 = v564;
            v102 = 0;
            v103 = v527;
            v104 = v563;
            goto lab_0x401c0d;
        } else {
            // 0x401ce2
            v543 = v513;
            v542 = v512;
            v541 = v511;
            v540 = v510;
            v539 = v509;
            v538 = v508;
            v537 = v507;
            v536 = v506;
            v535 = v505;
            v534 = v504;
            v533 = v503;
            v532 = v564;
            v531 = v527;
            v530 = v563;
            int32_t v566; // 0x4017a0
            if ((v566 & 0xd000) == 0x8000 == *(char *)&g38 == 0) {
                goto lab_0x4022bc;
            } else {
                // 0x401d02
                v205 = v513;
                v203 = v512;
                v201 = v511;
                v199 = v510;
                v197 = v509;
                v195 = v508;
                v193 = v507;
                v191 = v506;
                v189 = v505;
                v187 = v504;
                v185 = v503;
                v183 = v564;
                v180 = v527;
                v178 = v563;
                v309 = v513;
                v307 = v512;
                v305 = v511;
                v303 = v510;
                v301 = v509;
                v299 = v508;
                v297 = v507;
                v295 = v506;
                v293 = v505;
                v291 = v504;
                v289 = v503;
                v287 = v564;
                v311 = -1;
                v431 = v527;
                v285 = v563;
                if ((char)v463 != 0) {
                    goto lab_0x401f0e;
                } else {
                    goto lab_0x401d16;
                }
            }
        }
    } else {
        int64_t v567 = v206; // 0x401bf4
        if ((char)v463 == 0) {
            int64_t v568 = function_402d30(v563, v564, v567); // 0x401cb8
            v90 = v513;
            v91 = v512;
            v92 = v511;
            v93 = v510;
            v94 = v509;
            v95 = v508;
            v96 = v507;
            v97 = v506;
            v98 = v505;
            v99 = v504;
            v100 = v503;
            v101 = v564;
            v102 = v568 & 0xffffffff;
            v103 = v527;
            v104 = v563;
        } else {
            int64_t v569 = function_402bc0(v563, v564, v567); // 0x401c06
            v90 = v513;
            v91 = v512;
            v92 = v511;
            v93 = v510;
            v94 = v509;
            v95 = v508;
            v96 = v507;
            v97 = v506;
            v98 = v505;
            v99 = v504;
            v100 = v503;
            v101 = v564;
            v102 = v569 & 0xffffffff;
            v103 = v527;
            v104 = v563;
        }
        goto lab_0x401c0d;
    }
  lab_0x401c0d:;
    int64_t v106 = v103;
    int64_t v107 = v102;
    int32_t fd2 = v101;
    int64_t v108 = v100;
    int64_t v109 = v99;
    int64_t v110 = v98;
    int64_t v111 = v97;
    int64_t v112 = v96;
    int64_t v113 = v95;
    int64_t v114 = v94;
    int32_t v115 = v93;
    int64_t v116 = v92;
    char * v117 = v91;
    int32_t v118 = v90;
    int32_t v119 = v118; // 0x401c10
    char * v120 = v117; // 0x401c10
    int64_t v121 = v116; // 0x401c10
    int32_t v122 = v115; // 0x401c10
    int64_t v123 = v114; // 0x401c10
    int64_t v124 = v113; // 0x401c10
    int64_t v125 = v112; // 0x401c10
    int64_t v126 = v111; // 0x401c10
    int64_t v127 = v110; // 0x401c10
    int64_t v128 = v109; // 0x401c10
    int64_t v129 = v108; // 0x401c10
    int32_t v130 = fd2; // 0x401c10
    int64_t v131 = v107; // 0x401c10
    int64_t v132 = v106; // 0x401c10
    if ((int32_t)v106 != 0) {
        int32_t v133 = close(fd2); // 0x401e15
        v119 = v118;
        v120 = v117;
        v121 = v116;
        v122 = v115;
        v123 = v114;
        v124 = v113;
        v125 = v112;
        v126 = v111;
        v127 = v110;
        v128 = v109;
        v129 = v108;
        v130 = fd2;
        v131 = v107;
        v132 = v106;
        if (v133 == 0) {
            goto lab_0x401c16;
        } else {
            // 0x401e22
            function_4050a0(4, v104);
            v134 = v118;
            v135 = v117;
            v136 = v116;
            v137 = v115;
            v138 = v114;
            v139 = v113;
            v140 = v112;
            v141 = v111;
            v142 = v110;
            v143 = v109;
            v144 = v108;
            v145 = fd2;
            v146 = v106;
            v147 = (int64_t)"failed to close %s";
            goto lab_0x401c85;
        }
    } else {
        goto lab_0x401c16;
    }
  lab_0x401c85:
    // 0x401c85
    error(0, *__errno_location(), dcgettext(NULL, (char *)v147, 5));
    v119 = v134;
    v120 = v135;
    v121 = v136;
    v122 = v137;
    v123 = v138;
    v124 = v139;
    v125 = v140;
    v126 = v141;
    v127 = v142;
    v128 = v143;
    v129 = v144;
    v130 = v145;
    v131 = 0;
    v132 = v146;
    goto lab_0x401c16;
  lab_0x401c16:;
    int64_t v148 = v121 + 8; // 0x401c16
    int32_t v149 = 0x1000000 * (v122 & (int32_t)v131) >> 24; // 0x401c21
    int64_t v150 = *(int64_t *)v121; // 0x401c25
    v151 = v119;
    v152 = v120;
    v153 = v148;
    v154 = v149;
    v155 = v123;
    v156 = v124;
    v157 = v125;
    v158 = v126;
    v159 = v127;
    v160 = v128;
    v161 = v129;
    v162 = v150;
    v163 = v119;
    v164 = v120;
    v165 = v148;
    v166 = v149;
    v167 = v123;
    v168 = v124;
    v169 = v125;
    v170 = v126;
    v171 = v127;
    v172 = v128;
    v173 = v129;
    v174 = v130;
    v175 = v132;
    v176 = 0;
    if (v150 == 0) {
        goto lab_0x401ecc;
    } else {
        goto lab_0x401c32;
    }
  lab_0x401d16:
    // 0x401d16
    v177 = v178;
    int64_t v179 = v180;
    v181 = -1;
    v182 = v183;
    v184 = v185;
    v186 = v187;
    v188 = v189;
    v190 = v191;
    v192 = v193;
    v194 = v195;
    v196 = v197;
    v198 = v199;
    v200 = v201;
    v202 = v203;
    v204 = v205;
    if (v206 < 0x100001) {
        int64_t v207 = v204; // 0x4024f7
        v208 = (int64_t)v206;
        v209 = (char *)(function_405910(v190) & 0xffffffff);
        v210 = 0x100000000 * v179 >> 32;
        int64_t v211; // bp-360, 0x4017a0
        v212 = (int64_t)&v211 + 144;
        v213 = v207;
        v214 = 0;
        v215 = v181;
        int64_t v216; // 0x4017a0
        int32_t * err_num; // 0x40254c
        while (true) {
          lab_0x402525:
            // 0x402525
            v216 = v215;
            v217 = v214;
            int64_t v218 = v213;
            int64_t v219 = 8 * v217 & 2040; // 0x402532
            v220 = *(int64_t *)(v219 + v212);
            v221 = function_403560(v182, v220, v192);
            if (v192 > v221) {
                // 0x40254c
                err_num = __errno_location();
                if (*err_num != 0) {
                    // break -> 0x402798
                    break;
                }
                if (v221 > v208) {
                    if ((char)v218 != 0) {
                        int64_t v222 = v221 - v208; // 0x402658
                        int64_t v223 = v222 + v216; // 0x40265b
                        v41 = v204;
                        v43 = v202;
                        v45 = v200;
                        v47 = v198;
                        v49 = v196;
                        v51 = v194;
                        v53 = v192;
                        v55 = v190;
                        v57 = v188;
                        v59 = v186;
                        v61 = v184;
                        v63 = v182;
                        v65 = v181;
                        v40 = v209;
                        v69 = v218;
                        v67 = v223;
                        v71 = v210;
                        v73 = v177;
                        v224 = v223;
                        v225 = v218;
                        v226 = v222;
                        if (v222 == 0) {
                            goto lab_0x402576_4;
                        }
                        goto lab_0x402641;
                    } else {
                        if (v206 == 0) {
                            // 0x4026ae
                            v224 = v221 + v216;
                            v225 = v207;
                            v226 = v221;
                            goto lab_0x402641;
                        } else {
                            // 0x4025fa
                            v227 = v216 + v208;
                            v228 = v207;
                            v229 = v219 ^ 8;
                            v230 = v208;
                            goto lab_0x402609;
                        }
                    }
                } else {
                    // 0x40255f
                    v41 = v204;
                    v43 = v202;
                    v45 = v200;
                    v47 = v198;
                    v49 = v196;
                    v51 = v194;
                    v53 = v192;
                    v55 = v190;
                    v57 = v188;
                    v59 = v186;
                    v61 = v184;
                    v63 = v182;
                    v65 = v181;
                    v40 = v209;
                    v69 = v207;
                    v67 = v216;
                    v71 = v210;
                    v73 = v177;
                    if ((char)v218 != 0) {
                        goto lab_0x402576_4;
                    }
                    int64_t v231 = v221 + v216; // 0x402665
                    v41 = v204;
                    v43 = v202;
                    v45 = v200;
                    v47 = v198;
                    v49 = v196;
                    v51 = v194;
                    v53 = v192;
                    v55 = v190;
                    v57 = v188;
                    v59 = v186;
                    v61 = v184;
                    v63 = v182;
                    v65 = v181;
                    v40 = v209;
                    v69 = v207;
                    v67 = v231;
                    v71 = v210;
                    v73 = v177;
                    if (v221 == 0) {
                        goto lab_0x402576_4;
                    }
                    // 0x40267f
                    v227 = v231;
                    v228 = v207;
                    v229 = v219 ^ 8;
                    v230 = v221;
                    goto lab_0x402609;
                }
            } else {
                if ((char)v218 != 0) {
                    if (v221 <= v208) {
                        // 0x402696
                        v232 = v216;
                        v233 = v217 ^ 1;
                        goto lab_0x4025b3;
                    } else {
                        int64_t v234 = v221 - v208; // 0x4025c6
                        int64_t v235 = v234 + v216; // 0x4025c9
                        v224 = v235;
                        v225 = 0;
                        v226 = v234;
                        if (v234 != 0) {
                            goto lab_0x402641;
                        } else {
                            // 0x4025d4
                            v232 = v235;
                            v233 = v217 ^ 1;
                            goto lab_0x4025b3;
                        }
                    }
                } else {
                    int64_t v236 = v216 + v208; // 0x402590
                    int64_t v237 = v217 ^ 1; // 0x402594
                    v227 = v236;
                    v228 = v218;
                    v229 = 8 * v237 & 2040;
                    v230 = v208;
                    if (v206 != 0) {
                        goto lab_0x402609;
                    } else {
                        // 0x4025a8
                        v232 = v236;
                        v233 = v237;
                        v238 = v236;
                        v239 = v218;
                        if (v221 > v208) {
                            goto lab_0x402636;
                        } else {
                            goto lab_0x4025b3;
                        }
                    }
                }
            }
        }
        // 0x402798
        function_4050a0(4, v177);
        error(0, *err_num, dcgettext(NULL, "error reading %s", 5));
        v41 = v204;
        v43 = v202;
        v45 = v200;
        v47 = v198;
        v49 = v196;
        v51 = v194;
        v53 = v192;
        v55 = v190;
        v57 = v188;
        v59 = v186;
        v61 = v184;
        v63 = v182;
        v65 = v181;
        v40 = v209;
        v69 = 0;
        v67 = v216;
        v71 = v210;
        v73 = v177;
        goto lab_0x402576_4;
    } else {
        // 0x401d58
        v240 = v204;
        v241 = v181;
        v242 = NULL;
        v243 = 1;
        v244 = 0;
        v245 = 0;
        v246 = 0;
        int32_t * err_num2; // 0x4017a0
        char * v247; // 0x4017a0
        while (true) {
          lab_0x401d58:;
            int64_t v248 = v244;
            int64_t v249 = v186 < 16 ? v186 : 16; // 0x401d5b
            if (v248 != 0) {
                // 0x401ef6
                v249 = v184 < v248 ? v186 : 2 * v248;
            }
            // 0x401d73
            v250 = v249;
            v251 = function_405970(v245, 8 * v250);
            v252 = v241;
            v253 = v242;
            v254 = v248;
            v255 = v243;
            v256 = v246;
            while (true) {
              lab_0x401d94:;
                int64_t v257 = v256;
                v258 = v255;
                int64_t v259 = v254;
                v260 = v252;
                int64_t v261 = 8 * v259 + v251; // 0x401d94
                if ((char)v257 == 0) {
                    int64_t v262 = function_405910(0x2000); // 0x401e49
                    *(int64_t *)v261 = v262;
                    char * v263 = (char *)(v259 + 1);
                    int64_t v264 = function_403560(v182, v262, 0x2000); // 0x401e67
                    int64_t v265 = 0; // 0x401e75
                    if (v264 < 0x2000) {
                        int32_t * v266 = __errno_location(); // 0x401e77
                        v265 = v240;
                        v247 = v263;
                        err_num2 = v266;
                        if (*v266 != 0) {
                            // break (via goto) -> 0x4026e7
                            goto lab_0x4026e7_2;
                        }
                    }
                    // 0x401e8b
                    v267 = v263;
                    v268 = v264;
                    v269 = v265;
                    v270 = v260;
                    v271 = v263;
                    v272 = v264;
                    v273 = v265;
                    v274 = v257;
                    if (v188 != v259) {
                        goto lab_0x401de7;
                    } else {
                        goto lab_0x401dd3;
                    }
                } else {
                    char * v275 = v253;
                    int64_t v276 = function_403560(v182, *(int64_t *)v261, 0x2000); // 0x401dae
                    if (v276 < 0x2000) {
                        // 0x401dc2
                        if (*__errno_location() != 0) {
                            // break (via goto) -> 0x4026e7
                            goto lab_0x4026e7_2;
                        }
                        // 0x401dd0
                        v267 = v275;
                        v268 = v276;
                        v269 = v257 & 0xffffffff;
                        goto lab_0x401dd3;
                    } else {
                        // 0x401e9b
                        v277 = v260 + (int32_t)v276;
                        v278 = v275;
                        v279 = v276;
                        v280 = 0;
                        goto lab_0x401ea3;
                    }
                }
            }
        }
      lab_0x4026e7_2:
        // 0x4026e7
        function_4050a0(4, v177);
        error(0, *err_num2, dcgettext(NULL, "error reading %s", 5));
        v281 = v260;
        v282 = v247;
        v283 = 0;
        goto lab_0x40248f;
    }
  lab_0x401f0e:;
    int64_t v284 = v285;
    int32_t v286 = v287;
    int64_t v288 = v289;
    int64_t v290 = v291;
    int64_t v292 = v293;
    int64_t v294 = v295;
    int64_t v296 = v297;
    int64_t v298 = v299;
    int64_t v300 = v301;
    int32_t v302 = v303;
    int64_t v304 = v305;
    char * v306 = v307;
    int32_t v308 = v309;
    char * v310 = (char *)(int64_t)v311; // 0x401f18
    int64_t v312 = function_405910(0x2018); // 0x401f1d
    *(int64_t *)(v312 + 0x2008) = 0;
    *(int64_t *)(v312 + 0x2000) = 0;
    *(int64_t *)(v312 + 0x2010) = 0;
    int32_t v313 = v312; // 0x401f4b
    int64_t v314 = function_405910(0x2018); // 0x401f50
    int64_t v315 = function_405310(v286, v314, 0x2000); // 0x401f7c
    int64_t v316 = v312; // 0x401f8c
    int32_t v317 = v313; // 0x401f8c
    int64_t v318 = v314; // 0x401f8c
    char * v319 = v310; // 0x401f8c
    int64_t v320 = 0; // 0x401f8c
    int64_t v321 = v315; // 0x401f8c
    int64_t v322; // 0x4017a0
    int64_t * v323; // 0x4017a0
    int64_t v324; // 0x4017a0
    char * v325; // 0x4017a0
    int32_t v326; // 0x4017a0
    int64_t v327; // 0x4017a0
    if (v315 < 0xffffffffffffffff) {
        uint64_t v328 = (int64_t)v206;
        int64_t v329 = v315; // 0x401f7c
        int64_t v330 = v312; // 0x402064
        int64_t v331 = v314; // 0x4017a0
        int64_t v332 = 0;
        char * v333 = v310;
        int32_t v334 = v313;
        while (true) {
            int64_t v335 = v330;
            int64_t * v336 = (int64_t *)(v335 + 0x2008);
            int64_t v337 = v329; // 0x401f7c
            int64_t v338 = v331; // 0x4020bf
            int64_t v339 = v332; // 0x4017a0
            char * v340 = v333; // 0x4017a0
            int32_t v341 = v334;
            int64_t v342; // 0x4017a0
            char * v343; // 0x4017a0
            int64_t v344; // 0x401ff9
            int64_t v345; // 0x4017a0
            while (true) {
                int32_t v346 = v341;
                int64_t v347 = v339;
                v342 = v338;
                int64_t * v348 = (int64_t *)(v342 + 0x2000);
                int64_t * v349 = (int64_t *)(v342 + 0x2008);
                int64_t * v350 = (int64_t *)(v342 + 0x2010);
                int64_t v351 = v346;
                int64_t * v352 = (int64_t *)(v351 + 0x2000);
                int64_t * v353 = (int64_t *)v342;
                int64_t * v354 = (int64_t *)(v351 + 0x2008);
                int64_t v355 = v337; // 0x401f7c
                char * v356 = v340;
                while (true) {
                    // 0x401f92
                    v343 = v356;
                    int64_t v357 = v355;
                    int64_t v358 = v357; // 0x401f7c
                    int64_t v359 = v347; // 0x4017a0
                    while (v206 != 0) {
                        int64_t v360 = v358;
                        *v348 = v360;
                        int64_t v361 = v360 + v342; // 0x401fa5
                        *v349 = 0;
                        *v350 = 0;
                        int64_t v362 = (int64_t)*(char *)&g36 & 0xffffffff; // 0x401fe1
                        int64_t v363 = function_406f30(v342, v362, v360); // 0x401fe6
                        int64_t v364 = v363; // 0x401ff2
                        int64_t v365 = 0; // 0x401ff2
                        if (v363 != 0) {
                            int64_t v366 = v364;
                            int64_t v367 = 1;
                            *v349 = v367;
                            int64_t v368 = function_406f30(v366 + 1, v362, v361 + -1 - v366); // 0x401fe6
                            int64_t v369 = v367 + 1; // 0x401ff2
                            v365 = v367;
                            while (v368 != 0) {
                                // 0x401fd0
                                v366 = v368;
                                v367 = v369;
                                *v349 = v367;
                                v368 = function_406f30(v366 + 1, v362, v361 + -1 - v366);
                                v369 = v367 + 1;
                                v365 = v367;
                            }
                        }
                        // 0x401ff4
                        v344 = v365 + v359;
                        int64_t v370 = *v352; // 0x401ffe
                        if (v370 + v360 >= 0x2000) {
                            // break (via goto) -> 0x402011
                            goto lab_0x402011;
                        }
                        // 0x402086
                        memcpy((int64_t *)(v370 + v351), v353, (int32_t)v360);
                        *v352 = *v352 + *v348;
                        *v354 = *v354 + *v349;
                        v358 = function_405310(v286, v342, 0x2000);
                        v359 = v344;
                        v323 = v353;
                        v324 = v335;
                        v326 = v346;
                        v325 = v343;
                        v327 = v344;
                        v322 = v358;
                        if (v358 >= 0xffffffffffffffff) {
                            // break (via goto) -> 0x4020d1
                            goto lab_0x4020d1_2;
                        }
                    }
                    // 0x402071
                    v356 = (char *)(v357 + (int64_t)v343);
                    function_402a90(v342, v357);
                    v355 = function_405310(v286, v342, 0x2000);
                    v323 = v353;
                    v324 = v335;
                    v326 = v346;
                    v325 = v356;
                    v327 = v347;
                    v322 = v355;
                    if (v355 >= 0xffffffffffffffff) {
                        // break (via goto) -> 0x4020d1
                        goto lab_0x4020d1_2;
                    }
                }
              lab_0x402011:
                // 0x402011
                *(int64_t *)(v351 + 0x2010) = v342;
                v345 = v344 - *v336;
                if (v345 > v328) {
                    // break -> 0x402035
                    break;
                }
                // 0x4020ba
                v338 = function_405910(0x2018);
                v341 = v342;
                v337 = function_405310(v286, v338, 0x2000);
                v339 = v344;
                v340 = v343;
                v316 = v335;
                v317 = v341;
                v318 = v338;
                v319 = v343;
                v320 = v344;
                v321 = v337;
                if (v337 >= 0xffffffffffffffff) {
                    goto lab_0x401f70_2;
                }
            }
            int64_t v371 = *(int64_t *)(v335 + 0x2000); // 0x402035
            int64_t v372 = v345; // 0x402045
            if (v371 != 0) {
                // 0x402047
                function_402a90(v335, v371);
                v372 = v344 - *v336;
            }
            // 0x40204f
            v333 = (char *)(v371 + (int64_t)v343);
            v332 = v372;
            v334 = v342;
            v330 = *(int64_t *)(v335 + 0x2010);
            v329 = function_405310(v286, v335, 0x2000);
            v331 = v335;
            v316 = v330;
            v317 = v334;
            v318 = v335;
            v319 = v333;
            v320 = v332;
            v321 = v329;
            if (v329 >= 0xffffffffffffffff) {
                goto lab_0x401f70_2;
            }
        }
    } else {
      lab_0x401f70_2:
        // 0x401f70
        v323 = (int64_t *)v318;
        v324 = v316;
        v326 = v317;
        v325 = v319;
        v327 = v320;
        v322 = v321;
    }
  lab_0x4020d1_2:;
    char * v373 = v325;
    int64_t v374 = v324;
    free(v323);
    int64_t v375; // 0x4017a0
    int64_t v376; // 0x4017a0
    int64_t v377; // 0x4017a0
    char * v378; // 0x4017a0
    char * v379; // 0x4017a0
    if (v322 == -1) {
        // 0x40274b
        function_4050a0(4, v284);
        error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
        v378 = v373;
        v375 = 0;
        v377 = v374;
        v379 = v373;
        v376 = 0;
        if (v374 == 0) {
            goto lab_0x40220c;
        } else {
            goto lab_0x4021f8;
        }
    } else {
        int64_t v380 = v327;
        int64_t v381 = v326; // 0x4020f0
        int64_t v382 = *(int64_t *)(v381 + 0x2000); // 0x4020f5
        int64_t v383 = v380; // 0x4020ff
        if (v382 != 0) {
            // 0x402342
            v383 = v380;
            if (*(char *)(v381 - 1 + v382) != *(char *)&g36) {
                int64_t * v384 = (int64_t *)(v381 + 0x2008); // 0x402353
                *v384 = *v384 + 1;
                v383 = v380 + 1;
            }
        }
        int64_t v385 = v383;
        uint64_t v386 = (int64_t)v206; // 0x402115
        char * v387 = v373; // 0x40211a
        int64_t v388 = v385; // 0x40211a
        int64_t v389 = v374; // 0x40211a
        int64_t v390 = v374; // 0x40211a
        if (v385 - *(int64_t *)(v374 + 0x2008) > v386) {
            int64_t v391 = v374;
            int64_t v392 = *(int64_t *)(v391 + 0x2000); // 0x402130
            if (v392 != 0) {
                // 0x40213f
                function_402a90(v391, v392);
            }
            int64_t v393 = v392 + (int64_t)v373; // 0x402137
            int64_t v394 = v385 - *(int64_t *)(v391 + 0x2008); // 0x402147
            int64_t v395 = *(int64_t *)(v391 + 0x2010); // 0x40214e
            int64_t v396 = v394; // 0x402162
            int64_t v397 = v393; // 0x402162
            while (v394 - *(int64_t *)(v395 + 0x2008) > v386) {
                // 0x402130
                v391 = v395;
                v392 = *(int64_t *)(v391 + 0x2000);
                if (v392 != 0) {
                    // 0x40213f
                    function_402a90(v391, v392);
                }
                // 0x402147
                v393 = v392 + v397;
                v394 = v396 - *(int64_t *)(v391 + 0x2008);
                v395 = *(int64_t *)(v391 + 0x2010);
                v396 = v394;
                v397 = v393;
            }
            // 0x402164
            v387 = (char *)v393;
            v388 = v394;
            v389 = 0x100000000 * v374 >> 32;
            v390 = v395;
        }
        uint64_t v398 = v388;
        char * v399 = v387;
        char * v400 = v399; // 0x402180
        if (v398 > v386) {
            int64_t v401 = v390;
            int64_t v402 = *(int64_t *)(v401 + 0x2000) + v401; // 0x40219b
            int64_t v403 = (int64_t)*(char *)&g36 & 0xffffffff; // 0x40219e
            int64_t * v404 = (int64_t *)(v401 + 0x2008);
            int64_t v405 = v398 - v386; // 0x4021a1
            int64_t v406 = v401;
            int64_t v407 = function_406f30(v406, v403, v402 - v406); // 0x4021b0
            int64_t v408 = 0; // 0x4021b8
            while (v407 != 0) {
                int64_t v409 = v407 + 1; // 0x4021ba
                *v404 = *v404 + 1;
                v405--;
                v408 = v409;
                if (v405 == 0) {
                    // break -> 0x4021cc
                    break;
                }
                v406 = v409;
                v407 = function_406f30(v406, v403, v402 - v406);
                v408 = 0;
            }
            int64_t v410 = v408 - v401; // 0x4021cc
            char * v411 = (char *)(v410 + (int64_t)v399); // 0x4021d4
            v400 = v411;
            if (v410 != 0) {
                // 0x4021de
                function_402a90(v401, v410);
                v400 = v411;
            }
        }
        // 0x4021e9
        v378 = v400;
        v375 = v308;
        v377 = v389;
        goto lab_0x4021f8;
    }
  lab_0x40248f:;
    int64_t v412 = 8 * (int64_t)v282; // 0x402497
    int64_t v413 = v412 + v251; // 0x402497
    int64_t v414 = v251; // 0x4024ad
    if (v412 != 0) {
        int64_t v415 = v414 + 8; // 0x4024a1
        free((int64_t *)*(int64_t *)v414);
        v414 = v415;
        while (v415 != v413) {
            // 0x40249d
            v415 = v414 + 8;
            free((int64_t *)*(int64_t *)v414);
            v414 = v415;
        }
    }
    // 0x4024af
    free((int64_t *)v251);
    v42 = v204;
    v44 = v202;
    v46 = v200;
    v48 = v198;
    v50 = v196;
    v52 = v194;
    v54 = v192;
    v56 = v190;
    v58 = v188;
    v60 = v186;
    v62 = v184;
    v64 = v182;
    v66 = v181;
    v68 = v281;
    v70 = v283;
    v72 = v179;
    v74 = v177;
    goto lab_0x4024b7;
  lab_0x402411:
    // 0x402411
    v90 = v416;
    v91 = v417;
    v92 = v418;
    v93 = v419;
    v94 = v420;
    v95 = v421;
    v96 = v422;
    v97 = v423;
    v98 = v424;
    v99 = v425;
    v100 = v426;
    v101 = v427;
    v102 = v416;
    v103 = v428;
    v104 = v429;
    goto lab_0x401c0d;
  lab_0x40220c:;
    int64_t v430 = v431 & 0xffffffff;
    int64_t v432 = v376;
    v90 = v308;
    v91 = v306;
    v92 = v304;
    v93 = v302;
    v94 = v300;
    v95 = v298;
    v96 = v296;
    v97 = v294;
    v98 = v292;
    v99 = v290;
    v100 = v288;
    v101 = v286;
    v102 = v432;
    v103 = v430;
    v104 = v284;
    if (v311 == -1) {
        goto lab_0x401c0d;
    } else {
        int64_t v433 = function_4029f0(v286, (int64_t)v379, 0, v284); // 0x402226
        v90 = v308;
        v91 = v306;
        v92 = v304;
        v93 = v302;
        v94 = v300;
        v95 = v298;
        v96 = v296;
        v97 = v294;
        v98 = v292;
        v99 = v290;
        v100 = v288;
        v101 = v286;
        v102 = v432;
        v103 = v430;
        v104 = v284;
        v434 = v308;
        v435 = v306;
        v436 = v304;
        v437 = v302;
        v438 = v300;
        v439 = v298;
        v440 = v296;
        v441 = v294;
        v442 = v292;
        v443 = v290;
        v444 = v288;
        v445 = v286;
        v446 = v430;
        v447 = v284;
        if (v433 >= 0) {
            goto lab_0x401c0d;
        } else {
            goto lab_0x402234;
        }
    }
  lab_0x4021f8:;
    int64_t v448 = *(int64_t *)(v377 + 0x2010); // 0x4021f8
    free((int64_t *)v377);
    int64_t v449 = v448; // 0x40220a
    v379 = v378;
    v376 = v375;
    while (v448 != 0) {
        // 0x4021f8
        v448 = *(int64_t *)(v449 + 0x2010);
        free((int64_t *)v449);
        v449 = v448;
        v379 = v378;
        v376 = v375;
    }
    goto lab_0x40220c;
  lab_0x4018b7:;
    int64_t v450 = function_402990(0, (int64_t)v451, v452, (int64_t)&g3, 0, v453); // 0x4018c0
    v454 = 0;
    v455 = v450;
    v456 = v452 == 45;
    goto lab_0x401838_4;
  lab_0x4027fd:
    // 0x4027fd
    function_402a90(*(int64_t *)(8 * v556 + v251), v557 - v196);
    v281 = v558;
    v282 = v559;
    v283 = v560 % 256;
    goto lab_0x40248f;
  lab_0x401a5e:;
    int32_t v561 = 0x1000000 * (int32_t)v476 >> 24; // 0x401a4d
    char v562 = v479; // 0x401a5e
    *v33 = v562;
    v28 = v561;
    v27 = v481;
    v22 = v480;
    v15 = v478;
    v495 = v477;
    if (v562 == 0) {
        goto lab_0x401a6a;
    } else {
        // 0x401a66
        *(char *)(v23 + 2) = 0;
        v28 = v561;
        v27 = v481;
        v22 = v480;
        v15 = v478;
        v495 = v477;
        goto lab_0x401a6a;
    }
}
// Address range: 0x4028b0 - 0x4028db
// Address range: 0x4028db - 0x4028fa
int64_t function_4028db(void) {
    // 0x4028db
    return &g29;
}
// Address range: 0x4028fa - 0x402931
int64_t function_4028fa(void) {
    // 0x4028fa
    return 0;
}
// Address range: 0x402931 - 0x402988
int64_t function_402931(void) {
    // 0x402931
    if (g33 != 0) {
        // 0x402987
        int64_t result; // 0x402931
        return result;
    }
    int64_t v1 = g34; // 0x402964
    int64_t result2; // 0x402976
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402976
        result2 = function_4028db();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402966
        v1++;
    }
    // 0x40295a
    g34 = v1;
    // 0x402976
    result2 = function_4028db();
    g33 = 1;
    return result2;
}
// Address range: 0x402988 - 0x40298d
int64_t function_402988(void) {
    // 0x402988
    return function_4028fa();
}
// Address range: 0x402990 - 0x4029e1
int64_t function_402990(int32_t a1, int64_t a2, char a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1; // 0x402990
    if ((char)a1 == 0) {
        // 0x4029d0
        v1 = dcgettext(NULL, "invalid number of bytes", 5);
    } else {
        // 0x40299e
        v1 = dcgettext(NULL, "invalid number of lines", 5);
    }
    // 0x4029ad
    return function_405c70(a2, 0, -1, "bkKmMGTPEZY0", (int64_t)v1, 0);
}
// Address range: 0x4029f0 - 0x402a86
int64_t function_4029f0(int32_t fd, int64_t offset, int32_t whence, int64_t a4) {
    int32_t v1 = lseek(fd, (int32_t)offset, whence); // 0x402a02
    int64_t result = v1; // 0x402a02
    if (v1 >= 0) {
        // 0x402a0f
        return result;
    }
    // 0x402a20
    int64_t v2; // bp-72, 0x4029f0
    function_4035e0(offset, &v2);
    function_405170(0, 3, a4);
    char * v3 = whence != 0 ? "%s: cannot seek to relative offset %s" : "%s: cannot seek to offset %s"; // 0x402a57
    error(0, *__errno_location(), dcgettext(NULL, v3, 5));
    return result;
}
// Address range: 0x402a90 - 0x402b10
int64_t function_402a90(int64_t data, uint64_t n) {
    uint64_t result = (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g30); // 0x402aa8
    if (result >= n) {
        // 0x402ab2
        return result;
    }
    // 0x402ab9
    clearerr_unlocked(g30);
    function_4050a0(4, (int64_t)"standard output");
    error(1, *__errno_location(), dcgettext(NULL, "error writing %s", 5));
    return &g56;
}
// Address range: 0x402b10 - 0x402bb4
int64_t function_402b10(int32_t a1, int64_t a2) {
    // 0x402b10
    if (a2 == 0) {
        // 0x402b78
        return 0;
    }
    // 0x402b5a
    int64_t v1; // bp-8216, 0x402b10
    int64_t v2 = &v1; // 0x402b64
    uint64_t v3 = a2;
    int64_t v4 = function_405310(a1, v2, v3 < 0x2000 ? v3 : 0x2000); // 0x402b6d
    int64_t result = 1; // 0x402b76
    while (v4 != -1) {
        int64_t v5 = v3 - v4; // 0x402b38
        result = 2;
        if (v4 == 0 == (v5 != 0)) {
            // break -> 0x402b78
            break;
        }
        if (v4 != 0) {
            // 0x402b4a
            function_402a90(v2, v4);
        }
        // 0x402b55
        result = 0;
        if (v5 == 0) {
            // break -> 0x402b78
            break;
        }
        v3 = v5;
        v4 = function_405310(a1, v2, v3 < 0x2000 ? v3 : 0x2000);
        result = 1;
    }
    // 0x402b78
    return result;
}
// Address range: 0x402bc0 - 0x402d21
int64_t function_402bc0(int64_t a1, int32_t fd, int64_t a3) {
    // 0x402bc0
    if (a3 == 0) {
        // 0x402d08
        return 1;
    }
    // 0x402bc9
    int64_t v1; // bp-8232, 0x402bc0
    int64_t v2 = &v1;
    int64_t v3 = a3; // 0x402bdf
    while (true) {
        int64_t v4 = function_405310(fd, v2, 0x2000); // 0x402bf0
        switch (v4) {
            case -1: {
                // 0x402cbe
                function_4050a0(4, a1);
                error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
                return (int32_t)&g56 ^ (int32_t)&g56;
            }
            case 0: {
                // 0x402d08
                return 1;
            }
        }
        char v5 = *(char *)&g36; // 0x402c08
        int64_t v6 = v3;
        int64_t v7 = 1; // 0x402c1d
        v3 = v6;
        int64_t v8; // bp-8376, 0x402bc0
        int64_t offset; // 0x402c3b
        int32_t v9; // 0x402bc0
        if (*(char *)((int64_t)&v8 + 143 + v7) == v5) {
            // 0x402c2a
            v3 = v6 - 1;
            if (v3 == 0) {
                // 0x402c30
                offset = v7 - v4;
                if (lseek(fd, (int32_t)offset, SEEK_CUR) >= 0) {
                    // 0x402c4b
                    function_402a90(v2, v7);
                    return 1;
                }
                // 0x402c85
                if (__fxstat(1, fd, (struct stat *)&v8) != 0) {
                    // 0x402ca9
                    function_4029f0(fd, offset, 1, a1);
                    // 0x402c4b
                    function_402a90(v2, v7);
                    return 1;
                }
                if ((v9 & 0xf000) != 0x8000) {
                    // 0x402c4b
                    function_402a90(v2, v7);
                    return 1;
                }
                // 0x402ca9
                function_4029f0(fd, offset, 1, a1);
                // 0x402c4b
                function_402a90(v2, v7);
                return 1;
            }
        }
        int64_t v10 = v7; // 0x402c1b
        while (v7 != v4) {
            // 0x402c1d
            v6 = v3;
            v7 = v10 + 1;
            v3 = v6;
            if (*(char *)((int64_t)&v8 + 143 + v7) == v5) {
                // 0x402c2a
                v3 = v6 - 1;
                if (v3 == 0) {
                    // 0x402c30
                    offset = v7 - v4;
                    if (lseek(fd, (int32_t)offset, SEEK_CUR) >= 0) {
                        // 0x402c4b
                        function_402a90(v2, v7);
                        return 1;
                    }
                    // 0x402c85
                    if (__fxstat(1, fd, (struct stat *)&v8) != 0) {
                        // 0x402ca9
                        function_4029f0(fd, offset, 1, a1);
                        // 0x402c4b
                        function_402a90(v2, v7);
                        return 1;
                    }
                    if ((v9 & 0xf000) != 0x8000) {
                        // 0x402c4b
                        function_402a90(v2, v7);
                        return 1;
                    }
                    // 0x402ca9
                    function_4029f0(fd, offset, 1, a1);
                    // 0x402c4b
                    function_402a90(v2, v7);
                    return 1;
                }
            }
            // 0x402c18
            v10 = v7;
        }
        // 0x402c70
        function_402a90(v2, v4);
    }
    // 0x402cbe
    function_4050a0(4, a1);
    error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
    return (int32_t)&g56 ^ (int32_t)&g56;
}
// Address range: 0x402d30 - 0x402dfb
int64_t function_402d30(int64_t a1, int32_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x402de0
        return 1;
    }
    // 0x402d75
    int64_t v1; // bp-8232, 0x402d30
    int64_t v2 = &v1; // 0x402d78
    uint64_t v3 = 0x2000;
    uint64_t v4 = a3;
    int64_t v5 = v3 > v4 ? v4 : v3; // 0x402d7e
    int64_t v6 = function_405310(a2, v2, v5); // 0x402d85
    while (v6 != -1) {
        if (v6 == 0) {
            // 0x402de0
            return 1;
        }
        // 0x402d65
        function_402a90(v2, v6);
        int64_t v7 = v4 - v6; // 0x402d70
        if (v7 == 0) {
            // 0x402de0
            return 1;
        }
        v3 = v5;
        v4 = v7;
        v5 = v3 > v4 ? v4 : v3;
        v6 = function_405310(a2, v2, v5);
    }
    // 0x402d93
    function_4050a0(4, a1);
    error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
    return (int32_t)&g56 ^ (int32_t)&g56;
}
// Address range: 0x402e00 - 0x402e78
int64_t function_402e00(int64_t a1, int64_t a2) {
    int32_t v1 = a1; // 0x402e06
    int64_t v2; // 0x402e00
    if (v1 != 1) {
        if (v1 != 2) {
            // 0x402e73
            abort();
            // UNREACHABLE
        }
        // 0x402e55
        function_405170(0, 3, a2);
        v2 = (int64_t)"%s: file has shrunk too much";
    } else {
        // 0x402e0b
        function_4050a0(4, a2);
        v2 = (int64_t)"error reading %s";
    }
    // 0x402e22
    error(0, *__errno_location(), dcgettext(NULL, (char *)v2, 5));
    return &g56;
}
// Address range: 0x402e80 - 0x4030c1
int64_t function_402e80(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 - a4; // 0x402e99
    uint64_t v2 = (v1 >> 63) / 0x8000000000000; // 0x402eaa
    int64_t v3 = a1; // bp-8264, 0x402eae
    int64_t v4 = (v2 + v1) % 0x2000 - v2; // 0x402ec6
    int64_t v5 = v4 != 0 ? v4 : 0x2000; // 0x402ec9
    int64_t v6 = a5 - v5; // 0x402ecf
    if (function_4029f0(a2, v6, 0, a1) < 0) {
        // 0x403002
        return 0;
    }
    // 0x402ee6
    int64_t v7; // bp-8248, 0x402e80
    int64_t v8 = &v7; // 0x402ee6
    int64_t v9 = function_405310(a2, v8, v5); // 0x402ef4
    if (v9 == -1) {
      lab_0x40306d:
        // 0x40306d
        function_4050a0(4, v3);
        error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
        // 0x403002
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t v10 = a3; // 0x402f09
    if (a3 != 0 && v9 != 0) {
        char v11 = *(char *)((int64_t)&v3 + 15 + v9); // 0x402f1f
        v10 = a3 - (int64_t)(v11 != *(char *)&g36);
    }
    int64_t v12 = v6;
    int64_t v13 = v10; // 0x402f33
    int64_t v14; // 0x402e80
    int64_t v15; // 0x402e80
    int64_t v16; // 0x402e80
    int64_t v17; // 0x402e80
    int64_t v18; // 0x402e80
    int64_t v19; // 0x402e80
    int32_t v20; // 0x402e80
    int64_t v21; // 0x402f48
    int64_t * v22; // 0x402f6f
    int64_t v23; // 0x402f7d
    if (v9 != 0) {
        // 0x402f39
        v20 = (int32_t)*(char *)&g36;
        if (a3 == 0) {
            // 0x402f48
            v21 = v9 - 1;
            v15 = v21;
            v18 = v21;
            if (v10 == 0) {
                goto lab_0x402f8c_2;
            }
        } else {
            // 0x402f66
            v22 = memrchr(&v7, v20, (int32_t)v9);
            if (v22 == NULL) {
                // break -> 0x403020
                break;
            }
            // 0x402f7d
            v23 = (int64_t)v22 - v8;
            v15 = v23;
            v18 = v23;
            if (v10 == 0) {
                goto lab_0x402f8c_2;
            }
        }
        // 0x402f55
        v16 = v15;
        v19 = v10 - 1;
        v13 = v19;
        while (v16 != 0) {
            // 0x402f61
            v14 = v19;
            v17 = v16;
            if (a3 == 0) {
                // 0x402f48
                v21 = v17 - 1;
                v15 = v21;
                v18 = v21;
                if (v14 == 0) {
                    goto lab_0x402f8c_2;
                }
            } else {
                // 0x402f66
                v22 = memrchr(&v7, v20, (int32_t)v17);
                v13 = v14;
                if (v22 == NULL) {
                    // break -> 0x403020
                    break;
                }
                // 0x402f7d
                v23 = (int64_t)v22 - v8;
                v15 = v23;
                v18 = v23;
                if (v14 == 0) {
                    goto lab_0x402f8c_2;
                }
            }
            // 0x402f55
            v16 = v15;
            v19 = v14 - 1;
            v13 = v19;
        }
    }
    int64_t result = 1; // 0x403025
    while (v12 != a4) {
        int64_t v24 = v12 - 0x2000; // 0x403027
        result = 0;
        if (function_4029f0(a2, v24, 0, v3) < 0) {
            // break -> 0x403002
            break;
        }
        int64_t v25 = function_405310(a2, v8, 0x2000); // 0x40304f
        if (v25 == -1) {
            goto lab_0x40306d;
        }
        // 0x40305d
        result = 1;
        if (v25 == 0) {
            // break -> 0x403002
            break;
        }
        int64_t v26 = v13;
        v12 = v24;
        int64_t v27 = v25;
        v13 = v26;
        if (v27 != 0) {
            // 0x402f39
            v20 = (int32_t)*(char *)&g36;
            v14 = v26;
            v17 = v27;
            if (a3 == 0) {
                // 0x402f48
                v21 = v17 - 1;
                v15 = v21;
                v18 = v21;
                if (v14 == 0) {
                    goto lab_0x402f8c_2;
                }
            } else {
                // 0x402f66
                v22 = memrchr(&v7, v20, (int32_t)v17);
                if (v22 == NULL) {
                    // break -> 0x403020
                    break;
                }
                // 0x402f7d
                v23 = (int64_t)v22 - v8;
                v15 = v23;
                v18 = v23;
                if (v14 == 0) {
                    goto lab_0x402f8c_2;
                }
            }
            // 0x402f55
            v16 = v15;
            v19 = v14 - 1;
            v13 = v19;
            while (v16 != 0) {
                // 0x402f61
                v14 = v19;
                v17 = v16;
                if (a3 == 0) {
                    // 0x402f48
                    v21 = v17 - 1;
                    v15 = v21;
                    v18 = v21;
                    if (v14 == 0) {
                        goto lab_0x402f8c_2;
                    }
                } else {
                    // 0x402f66
                    v22 = memrchr(&v7, v20, (int32_t)v17);
                    v13 = v14;
                    if (v22 == NULL) {
                        // break -> 0x403020
                        break;
                    }
                    // 0x402f7d
                    v23 = (int64_t)v22 - v8;
                    v15 = v23;
                    v18 = v23;
                    if (v14 == 0) {
                        goto lab_0x402f8c_2;
                    }
                }
                // 0x402f55
                v16 = v15;
                v19 = v14 - 1;
                v13 = v19;
            }
        }
        // 0x403020
        result = 1;
    }
    // 0x403002
    return result;
  lab_0x402f8c_2:
    // 0x402f8c
    if (v12 > a4) {
        // 0x402f96
        result = 0;
        if (function_4029f0(a2, a4, 0, v3) < 0) {
            return result;
        } else {
            int64_t v28 = function_402b10(a2, v12 - a4); // 0x402fba
            if ((int32_t)v28 != 0) {
                // 0x4030af
                function_402e00(v28 & 0xffffffff, v3);
                result = 0;
                return result;
            } else {
                goto lab_0x402fcc;
            }
        }
    } else {
        goto lab_0x402fcc;
    }
  lab_0x402fcc:;
    int64_t v29 = v18 + 1; // 0x402fcf
    if (v29 == 0) {
        goto lab_0x402fe0;
    } else {
        // 0x402fd5
        function_402a90(v8, v29);
        goto lab_0x402fe0;
    }
  lab_0x402fe0:
    // 0x402fe0
    result = function_4029f0(a2, v29 + v12, 0, v3) >> 63 ^ 1;
    return result;
}
// Address range: 0x4030d0 - 0x403495
int64_t function_4030d0(int64_t a1) {
    int32_t status = a1; // 0x4030e6
    if (status != 0) {
        // 0x4030ea
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40310f
        exit(status);
        // UNREACHABLE
    }
    // 0x403116
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    __printf_chk(1, dcgettext(NULL, "Print the first %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "  -c, --bytes=[-]NUM       print the first NUM bytes of each file;\n                             with the leading '-', print all but the last\n                             NUM bytes of each file\n  -n, --lines=[-]NUM       print the first NUM lines instead of the first %d;\n                             with the leading '-', print all but the last\n                             NUM lines of each file\n", 5));
    fputs_unlocked(dcgettext(NULL, "  -q, --quiet, --silent    never print headers giving file names\n  -v, --verbose            always print headers giving file names\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x403273
    bool v2; // 0x4030d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4032f8
    int64_t v6 = *(int64_t *)v5; // 0x4032fc
    int64_t v7 = 5; // 0x403302
    while (v6 != 0) {
        int64_t v8 = (int64_t)"head";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x40330e
        char v11 = *(char *)v9; // 0x40330e
        char v12 = v11; // 0x40330e
        bool v13 = false; // 0x40330e
        while (v10 == v11) {
            // 0x403304
            v7--;
            int64_t v14 = v9 + v3; // 0x40330e
            int64_t v15 = v8 + v3; // 0x40330e
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
            // break -> 0x40331a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x40331a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40342c;
        } else {
            // 0x403416
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40346b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40337c;
            } else {
                goto lab_0x40342c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40337c;
        } else {
            // 0x403362
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40346b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40337c;
            } else {
                goto lab_0x40337c;
            }
        }
    }
  lab_0x40342c:
    // 0x40342c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4033bc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40310f
    exit(status);
    // UNREACHABLE
  lab_0x40337c:
    // 0x40337c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4033bc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40310f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4034a0 - 0x4034a8
int64_t function_4034a0(int64_t a1) {
    // 0x4034a0
    g40 = a1;
    int64_t result; // 0x4034a0
    return result;
}
// Address range: 0x4034b0 - 0x4034b8
int64_t function_4034b0(int64_t a1) {
    // 0x4034b0
    g39 = a1;
    int64_t result; // 0x4034b0
    return result;
}
// Address range: 0x4034c0 - 0x40355e
int64_t function_4034c0(void) {
    // 0x4034c0
    int32_t * err_num; // 0x4034d6
    if ((int32_t)function_407040((int64_t)g30) == 0) {
        goto lab_0x4034ec;
    } else {
        // 0x4034d6
        err_num = __errno_location();
        if (g39 == 0) {
            goto lab_0x403503;
        } else {
            // 0x4034e7
            if (*err_num != 32) {
                goto lab_0x403503;
            } else {
                goto lab_0x4034ec;
            }
        }
    }
  lab_0x4034ec:;
    int64_t result = function_407040((int64_t)g32); // 0x4034f3
    if ((int32_t)result == 0) {
        // 0x4034fc
        return result;
    }
    // 0x40353e
    _exit(g20);
    // UNREACHABLE
  lab_0x403503:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40350f
    if (g40 == 0) {
        // 0x403549
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403523
        error(0, *err_num, "%s: %s", (char *)function_405140((int64_t)g40), v1);
    }
    // 0x40353e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x403560 - 0x4035d6
int64_t function_403560(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3; // 0x40356d
    int64_t v2 = a2; // 0x40356d
    if (a3 == 0) {
        // 0x4035a4
        return 0;
    }
    int64_t result = 0;
    int64_t v3 = function_405310(a1, v2, v1); // 0x403599
    int64_t result2 = result; // 0x4035a2
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x4035b8
            *__errno_location() = 0;
            return result;
        }
        int64_t v4 = v3 + result; // 0x403585
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x4035a4
            break;
        }
        result = v4;
        v3 = function_405310(a1, v2, v1);
        result2 = result;
    }
    // 0x4035a4
    return result2;
}
// Address range: 0x4035e0 - 0x40367c
int64_t function_4035e0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x4035e0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403605
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x403636
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x403658
    int64_t v4 = v2 - 1; // 0x403668
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x403670
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x403680 - 0x4036c8
int64_t function_403680(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x403680
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403692
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40369b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x4036c4
    return result;
}
// Address range: 0x4036d0 - 0x403769
int64_t function_4036d0(int64_t str) {
    // 0x4036d0
    if (str == 0) {
        // 0x403749
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4036de
    int64_t result = (int64_t)found_char_pos; // 0x4036de
    if (found_char_pos == NULL) {
        // 0x403739
        g41 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4036e8
    if (v1 - str < 7) {
        // 0x403739
        g41 = str;
        g31 = str;
        return result;
    }
    // 0x4036f8
    bool v2; // 0x4036d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4036d0
    int64_t v5 = result - 6; // 0x4036d0
    int64_t v6 = 7; // 0x403706
    unsigned char v7 = *(char *)v5; // 0x403706
    char v8 = *(char *)v4; // 0x403706
    char v9 = v8; // 0x403706
    bool v10 = false; // 0x403706
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
    int64_t v12 = (int64_t)"lt-"; // 0x403710
    int64_t v13 = v1; // 0x403710
    int64_t v14 = 3; // 0x403710
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403739
        g41 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403722
    char v16 = *(char *)v12; // 0x403722
    char v17 = v16; // 0x403722
    bool v18 = false; // 0x403722
    while (v15 == v16) {
        // 0x403712
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
    int64_t v20 = v1; // 0x40372c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40372e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x403739
    g41 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x403770 - 0x403862
int64_t function_403770(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403784
    int64_t result = (int64_t)v1; // 0x403784
    if (result != a1) {
        // 0x403791
        return result;
    }
    int64_t v2 = function_407100(); // 0x4037a0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403856
    if (v3 == 85) {
        // 0x4037b0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403848
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x4037de
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x4037eb
        // 0x403791
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403848
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40382d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40383a
    // 0x403791
    return result4;
}
// Address range: 0x403870 - 0x4038c7
int64_t function_403870(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403870
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4038b8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4038c7 - 0x404a91
int64_t function_4038c7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403911
    int64_t v3 = 0; // 0x403911
    int64_t v4; // 0x4038c7
    int64_t v5; // 0x4038c7
    int64_t v6; // 0x4038c7
    int64_t v7; // 0x4038c7
    int64_t v8; // 0x4038c7
    int64_t v9; // 0x4038c7
    int64_t v10; // 0x4038c7
    int64_t v11; // 0x4038c7
    int64_t v12; // 0x4038c7
    int64_t v13; // 0x4038c7
    int64_t v14; // 0x4038c7
    int64_t v15; // 0x4038c7
    int64_t v16; // 0x4038c7
    int64_t v17; // 0x4038c7
    int64_t v18; // 0x4038c7
    int64_t result; // 0x4038c7
    int64_t v19; // 0x4038c7
    int32_t wc; // bp+132, 0x4038c7
    int64_t ps; // bp+136, 0x4038c7
    char v20; // 0x403e80
    int64_t v21; // 0x403e80
    int64_t v22; // 0x404228
    int64_t v23; // 0x4038c7
    int64_t v24; // 0x404247
    int32_t v25; // 0x4038c7
    while (true) {
      lab_0x403918_2:
        // 0x403918
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4038c7
        int64_t v27; // 0x40394c
        while (true) {
          lab_0x403918:
            // 0x403918
            v5 = v26;
            bool v28 = v15 == v5; // 0x403923
            if (v15 == -1) {
                // 0x403925
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403933
            if (v28) {
                // break (via goto) -> 0x404098
                goto lab_0x404098;
            }
            // 0x40393c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g55 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403f2b
                    if (v25 % 2 == 0) {
                        goto lab_0x403a71;
                    }
                    // 0x40434d
                    v26 = v5 + 1;
                    goto lab_0x403918;
                }
                case 7: {
                    goto lab_0x403a71;
                }
                case 8: {
                    goto lab_0x403a71;
                }
                case 9: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403a71;
                }
                case 12: {
                    goto lab_0x403a71;
                }
                case 13: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x403a3d;
                }
                case 36: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403a71;
                }
                case 38: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403a71;
                }
                case 44: {
                    goto lab_0x403a71;
                }
                case 45: {
                    goto lab_0x403a71;
                }
                case 46: {
                    goto lab_0x403a71;
                }
                case 47: {
                    goto lab_0x403a71;
                }
                case 48: {
                    goto lab_0x403a71;
                }
                case 49: {
                    goto lab_0x403a71;
                }
                case 50: {
                    goto lab_0x403a71;
                }
                case 51: {
                    goto lab_0x403a71;
                }
                case 52: {
                    goto lab_0x403a71;
                }
                case 53: {
                    goto lab_0x403a71;
                }
                case 54: {
                    goto lab_0x403a71;
                }
                case 55: {
                    goto lab_0x403a71;
                }
                case 56: {
                    goto lab_0x403a71;
                }
                case 57: {
                    goto lab_0x403a71;
                }
                case 58: {
                    goto lab_0x403a71;
                }
                case 59: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403a71;
                }
                case 66: {
                    goto lab_0x403a71;
                }
                case 67: {
                    goto lab_0x403a71;
                }
                case 68: {
                    goto lab_0x403a71;
                }
                case 69: {
                    goto lab_0x403a71;
                }
                case 70: {
                    goto lab_0x403a71;
                }
                case 71: {
                    goto lab_0x403a71;
                }
                case 72: {
                    goto lab_0x403a71;
                }
                case 73: {
                    goto lab_0x403a71;
                }
                case 74: {
                    goto lab_0x403a71;
                }
                case 75: {
                    goto lab_0x403a71;
                }
                case 76: {
                    goto lab_0x403a71;
                }
                case 77: {
                    goto lab_0x403a71;
                }
                case 78: {
                    goto lab_0x403a71;
                }
                case 79: {
                    goto lab_0x403a71;
                }
                case 80: {
                    goto lab_0x403a71;
                }
                case 81: {
                    goto lab_0x403a71;
                }
                case 82: {
                    goto lab_0x403a71;
                }
                case 83: {
                    goto lab_0x403a71;
                }
                case 84: {
                    goto lab_0x403a71;
                }
                case 85: {
                    goto lab_0x403a71;
                }
                case 86: {
                    goto lab_0x403a71;
                }
                case 87: {
                    goto lab_0x403a71;
                }
                case 88: {
                    goto lab_0x403a71;
                }
                case 89: {
                    goto lab_0x403a71;
                }
                case 90: {
                    goto lab_0x403a71;
                }
                case 91: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403a71;
                }
                case 94: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403a71;
                }
                case 96: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403a71;
                }
                case 98: {
                    goto lab_0x403a71;
                }
                case 99: {
                    goto lab_0x403a71;
                }
                case 100: {
                    goto lab_0x403a71;
                }
                case 101: {
                    goto lab_0x403a71;
                }
                case 102: {
                    goto lab_0x403a71;
                }
                case 103: {
                    goto lab_0x403a71;
                }
                case 104: {
                    goto lab_0x403a71;
                }
                case 105: {
                    goto lab_0x403a71;
                }
                case 106: {
                    goto lab_0x403a71;
                }
                case 107: {
                    goto lab_0x403a71;
                }
                case 108: {
                    goto lab_0x403a71;
                }
                case 109: {
                    goto lab_0x403a71;
                }
                case 110: {
                    goto lab_0x403a71;
                }
                case 111: {
                    goto lab_0x403a71;
                }
                case 112: {
                    goto lab_0x403a71;
                }
                case 113: {
                    goto lab_0x403a71;
                }
                case 114: {
                    goto lab_0x403a71;
                }
                case 115: {
                    goto lab_0x403a71;
                }
                case 116: {
                    goto lab_0x403a71;
                }
                case 117: {
                    goto lab_0x403a71;
                }
                case 118: {
                    goto lab_0x403a71;
                }
                case 119: {
                    goto lab_0x403a71;
                }
                case 120: {
                    goto lab_0x403a71;
                }
                case 121: {
                    goto lab_0x403a71;
                }
                case 122: {
                    goto lab_0x403a71;
                }
                case 123: {
                    goto lab_0x403a15;
                }
                case 124: {
                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403a15;
                }
                case 126: {
                    goto lab_0x403a3d;
                }
                default: {
                    goto lab_0x403e15;
                }
            }
        }
      lab_0x403e15:
        if (v23 != 1) {
            // 0x404180
            ps = 0;
            int64_t len = v15; // 0x404190
            if (v15 == -1) {
                // 0x404192
                len = strlen((char *)str);
            }
            // 0x4041be
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40421f:
                // 0x40421f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404224
                int64_t v30 = v29 + str;
                v24 = function_406eb0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40479a_2;
                    }
                    case -1: {
                        goto lab_0x40479a_2;
                    }
                    case -2: {
                        // 0x40487d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4048b7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4048ba
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4048c7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4048c0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40479a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40479a_2;
                    }
                    case 1: {
                        goto lab_0x4041f0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40429c
                        char v34 = *(char *)v33; // 0x4042ad
                        unsigned char v35; // 0x4038c7
                        if (v34 < 125) {
                            // 0x4042b8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4042cf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403870(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4042a0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4042ad
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4042b8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4042cf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403870(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4042a0
                            v33++;
                        }
                        goto lab_0x4041f0;
                    }
                }
            }
            goto lab_0x40479a_2;
        } else {
            // 0x403e64
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403a71;
        }
    }
  lab_0x404098:
    // 0x404098
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40499a
        if (v8 > result) {
            // 0x4049a3
            *(char *)(v12 + result) = 0;
        }
        // 0x403cc7
        return result;
    }
    return function_403870(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403a71:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403a80
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x403c8a_2;
        }
    }
    int64_t v39 = result; // 0x403b81
    char v40 = v20; // 0x403b81
    int64_t v41 = v38; // 0x403b81
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403b81
    int64_t v43 = v36; // 0x403b81
    goto lab_0x403afd;
  lab_0x403c8a_2:
    // 0x403cc7
    return function_403870(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40479a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403a71;
    } else {
        uint64_t v49 = v46 + v5; // 0x40436e
        int64_t v50 = v5 + 1; // 0x404451
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404458
        char v52 = v20; // 0x404458
        int64_t v53 = result; // 0x404458
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404421
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404425
            int64_t v56 = v54 + 1; // 0x40442a
            int64_t v57 = v51 + 1; // 0x404451
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40441c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404421
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404425
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
        goto lab_0x403afd;
    }
  lab_0x4041f0:
    // 0x4041f0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40420f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404212
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40479a
        goto lab_0x40479a_2;
    }
    goto lab_0x40421f;
  lab_0x403a3d:
    // 0x403a3d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x403c8a_2;
    }
    goto lab_0x403a71;
  lab_0x403a15:;
    bool v60 = v15 == 1; // 0x403a20
    if (v15 == -1) {
        // 0x403a22
        v60 = *(char *)v1 == 0;
    }
    // 0x403a2e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403a71;
    } else {
        goto lab_0x403a3d;
    }
  lab_0x403afd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403b02
        *(char *)(v44 + v45) = v40;
    }
    // 0x403b06
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403918_2;
}
// Address range: 0x404aa0 - 0x404c3e
int64_t function_404aa0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404aa2
    int32_t * v3 = __errno_location(); // 0x404abc
    int64_t v4 = (int64_t)g22; // 0x404ac1
    int32_t v5 = *v3; // 0x404acb
    int64_t v6 = v4; // 0x404ae1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404c39
            function_405b60(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404af0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404af7
        int64_t v9; // 0x404aa0
        if (g22 == &g23) {
            int64_t v10 = function_405970(0, v8); // 0x404c1a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g23); // 0x404c1f
            *(int64_t *)&g22 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405970(v4, v8); // 0x404b0b
            *(int64_t *)&g22 = v12;
            v9 = v12;
        }
        // 0x404b1a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g25; // 0x404b1a
        int32_t v14 = v7; // 0x404b21
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g25 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404b51
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x404b5b
    int64_t * v17 = (int64_t *)v15; // 0x404b5e
    uint64_t v18 = *v17; // 0x404b5e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404b61
    int64_t result = *v19; // 0x404b61
    int64_t v20; // 0x404aa0
    uint64_t v21 = function_403870(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404b84
    if (v18 > v21) {
        // 0x404bfb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404b97
    *v17 = v22;
    if (result != (int64_t)&g42) {
        // 0x404ba7
        free((int64_t *)result);
    }
    int64_t result2 = function_405910(v22); // 0x404bc1
    *v19 = result2;
    int64_t v23; // 0x404aa0
    function_403870(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x404bfb
    *v3 = v5;
    return result2;
}
// Address range: 0x404c40 - 0x404c74
int64_t function_404c40(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404c47
    int64_t result = function_405b10(a1 == 0 ? (int64_t)&g43 : a1, 56); // 0x404c66
    return result;
}
// Address range: 0x404c80 - 0x404c8f
int64_t function_404c80(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g43 : a1); // 0x404c8c
    return result;
}
// Address range: 0x404c90 - 0x404c9f
int64_t function_404c90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x404c98
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g43;
}
// Address range: 0x404ca0 - 0x404cd3
int64_t function_404ca0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 + 8 : a1 + 8; // 0x404cb9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x404cbe
    uint32_t v3 = *v2; // 0x404cbe
    uint32_t v4 = (int32_t)a2 % 32; // 0x404cc2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404ce0 - 0x404cf3
int64_t function_404ce0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g43 + 4 : a1 + 4); // 0x404cec
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404d00 - 0x404d2b
int64_t function_404d00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x404d08
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404d25
        abort();
        // UNREACHABLE
    }
    // 0x404d1c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g43;
}
// Address range: 0x404d30 - 0x404da2
int64_t function_404d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g43 : a5; // 0x404d52
    int32_t * v2 = __errno_location(); // 0x404d5b
    uint32_t v3 = *(int32_t *)v1; // 0x404d7b
    int64_t result = function_403870(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404d8a
    return result;
}
// Address range: 0x404db0 - 0x404e91
int64_t function_404db0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g43 : a4; // 0x404dd2
    int32_t * v2 = __errno_location(); // 0x404dd8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404df7
    int32_t * v4 = (int32_t *)v1; // 0x404dfa
    int64_t v5 = function_403870(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404e15
    int64_t v6 = v5 + 1; // 0x404e1a
    int64_t result = function_405910(v6); // 0x404e2f
    function_403870(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404e74
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404e7d
    return result;
}
// Address range: 0x404ea0 - 0x404eaa
int64_t function_404ea0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ea0
    return function_404db0(a1, a2, 0, a3);
}
// Address range: 0x404eb0 - 0x404f45
int64_t function_404eb0(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x404eb0
    int64_t v2 = v1; // 0x404eb0
    int64_t v3 = v2; // 0x404ec4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x404ee3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g56;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404ee0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g56;
        }
    }
    int64_t v6 = v3; // 0x404efd
    if (g23 != 0x60b2e0) {
        // 0x404eff
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g42;
        v6 = &g56;
    }
    int64_t result = v6; // 0x404f21
    if (g22 != &g23) {
        // 0x404f23
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g56;
    }
    // 0x404f36
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x404f50 - 0x404f61
int64_t function_404f50(void) {
    // 0x404f50
    int64_t v1; // 0x404f50
    return function_404aa0(v1, v1, -1, (int64_t *)&g43);
}
// Address range: 0x404f70 - 0x404f7a
int64_t function_404f70(void) {
    // 0x404f70
    int64_t v1; // 0x404f70
    return function_404aa0(v1, v1, v1, (int64_t *)&g43);
}
// Address range: 0x404f80 - 0x404f96
int64_t function_404f80(int64_t a1) {
    // 0x404f80
    return function_404aa0(0, a1, -1, (int64_t *)&g43);
}
// Address range: 0x404fa0 - 0x404fb2
int64_t function_404fa0(int64_t a1, int64_t a2) {
    // 0x404fa0
    return function_404aa0(0, a1, a2, (int64_t *)&g43);
}
// Address range: 0x404fc0 - 0x405028
int64_t function_404fc0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404fd0
    return function_404aa0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405030 - 0x405094
int64_t function_405030(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405040
    return function_404aa0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4050a0 - 0x4050ac
int64_t function_4050a0(int64_t a1, int64_t a2) {
    // 0x4050a0
    return function_404fc0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4050b0 - 0x4050bf
int64_t function_4050b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4050b0
    return function_405030(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4050c0 - 0x405130
int64_t function_4050c0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x4050cd
    int128_t v2 = __asm_movdqa(g44); // 0x4050d5
    int128_t v3 = __asm_movdqa(g45); // 0x4050dd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4050f2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405108
    uint32_t v6 = *v5; // 0x405108
    uint32_t v7 = (int32_t)a3 % 32; // 0x40510d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404aa0(0, a1, a2, &v4);
}
// Address range: 0x405130 - 0x40513d
int64_t function_405130(int64_t a1, int64_t a2) {
    // 0x405130
    return function_4050c0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405140 - 0x405151
int64_t function_405140(int64_t a1) {
    // 0x405140
    return function_4050c0(a1, -1, 58);
}
// Address range: 0x405160 - 0x40516a
int64_t function_405160(void) {
    // 0x405160
    int64_t v1; // 0x405160
    return function_4050c0(v1, v1, 58);
}
// Address range: 0x405170 - 0x4051de
int64_t function_405170(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40518a
    return function_404aa0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4051e0 - 0x40524c
int64_t function_4051e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x4051e7
    int128_t v2 = __asm_movdqa(g44); // 0x4051ef
    int128_t v3 = __asm_movdqa(g45); // 0x4051f7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405219
    if (a2 == 0 || a3 == 0) {
        // 0x405247
        abort();
        // UNREACHABLE
    }
    // 0x40522a
    return function_404aa0(a1, a4, a5, &v4);
}
// Address range: 0x405250 - 0x405259
int64_t function_405250(void) {
    // 0x405250
    int64_t v1; // 0x405250
    return function_4051e0(v1, v1, v1, v1, -1);
}
// Address range: 0x405260 - 0x405277
int64_t function_405260(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405260
    return function_4051e0(0, a1, a2, a3, -1);
}
// Address range: 0x405280 - 0x405293
int64_t function_405280(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405280
    return function_4051e0(0, a1, a2, a3, a4);
}
// Address range: 0x4052a0 - 0x4052aa
int64_t function_4052a0(void) {
    // 0x4052a0
    int64_t v1; // 0x4052a0
    return function_404aa0(v1, v1, v1, &g21);
}
// Address range: 0x4052b0 - 0x4052c2
int64_t function_4052b0(int64_t a1, int64_t a2) {
    // 0x4052b0
    return function_404aa0(0, a1, a2, &g21);
}
// Address range: 0x4052d0 - 0x4052e1
int64_t function_4052d0(void) {
    // 0x4052d0
    int64_t v1; // 0x4052d0
    return function_404aa0(v1, v1, -1, &g21);
}
// Address range: 0x4052f0 - 0x405306
int64_t function_4052f0(int64_t a1) {
    // 0x4052f0
    return function_404aa0(0, a1, -1, &g21);
}
// Address range: 0x405310 - 0x40536e
int64_t function_405310(int32_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read(fd, (int64_t *)buf, (int32_t)nbyte); // 0x405331
    while (result < 0) {
        // 0x40533e
        if (*__errno_location() != 4) {
            // break -> 0x40534a
            break;
        }
        result = read(fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x405370 - 0x40574d
int64_t function_405370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405408
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40538c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4053a6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4053eb
    if (a6 < 10) {
        // 0x4053fa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4054f2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405750 - 0x405770
int64_t function_405750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405750
    if (a5 == 0) {
        // 0x40576b
        return function_405370(a1, a2, a3, a4, a5, 0, (int64_t)&g56);
    }
    int64_t v1 = 0; // 0x405757
    v1++;
    int64_t v2 = v1; // 0x405769
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405760
        v1++;
        v2 = v1;
    }
    // 0x40576b
    return function_405370(a1, a2, a3, a4, a5, v2, (int64_t)&g56);
}
// Address range: 0x405770 - 0x4057d0
int64_t function_405770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405770
    int64_t v3 = &v2; // 0x405770
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4057a3
    int64_t v6; // 0x40578d
    int64_t * v7; // 0x4057ab
    int64_t v8; // 0x4057ab
    int64_t v9; // 0x4057b7
    if (v5 < 48) {
        // 0x405780
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4057c3
            break;
        }
    } else {
        // 0x4057ab
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4057c3
            break;
        }
    }
    int64_t v10 = 10; // 0x4057a1
    while (v4 != 9) {
        // 0x405799
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405780
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4057c3
                break;
            }
        } else {
            // 0x4057ab
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4057c3
                break;
            }
        }
        // 0x405799
        v10 = 10;
    }
    // 0x4057c3
    return function_405370(a1, a2, a3, a4, v3, v10, (int64_t)&g56);
}
// Address range: 0x4057d0 - 0x40588c
int64_t function_4057d0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4057d0
    int64_t v1; // bp-168, 0x4057d0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4057d0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4057d0
    int64_t v8; // 0x4057d0
    int64_t v9; // bp-56, 0x4057d0
    int64_t v10; // 0x405835
    int64_t v11; // 0x405859
    if ((int32_t)v6 < 48) {
        // 0x405820
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405870
            break;
        }
    } else {
        // 0x405852
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405870
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40584a
    int64_t v13 = 10; // 0x40584a
    while (v5 != 9) {
        // 0x40584c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405820
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405870
                break;
            }
        } else {
            // 0x405852
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405870
                break;
            }
        }
        // 0x405842
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405870
    int64_t v14; // bp-136, 0x4057d0
    int64_t result = function_405370(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g56); // 0x40587f
    return result;
}
// Address range: 0x405890 - 0x405904
int64_t function_405890(int64_t a1) {
    // 0x405890
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4058f3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x405910 - 0x40592a
int64_t function_405910(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405914
    if (size != 0 != (mem == NULL)) {
        // 0x405923
        return (int64_t)mem;
    }
    // 0x405925
    function_405b60(size);
    // UNREACHABLE
}
// Address range: 0x405930 - 0x405951
int64_t function_405930(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405933
    int64_t v2 = v1; // 0x405933
    if (v2 < 0) {
        // 0x40594b
        function_405b60(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405949
        return function_405910(v2);
    }
    // 0x40594b
    function_405b60(v2);
    // UNREACHABLE
}
// Address range: 0x405960 - 0x405962
int64_t function_405960(void) {
    // 0x405960
    int64_t v1; // 0x405960
    return function_405910(v1);
}
// Address range: 0x405970 - 0x4059a6
int64_t function_405970(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405998
        free(v1);
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405981
    if (a2 != 0 != (mem == NULL)) {
        // 0x405990
        return (int64_t)mem;
    }
    // 0x4059a1
    function_405b60(a1);
    // UNREACHABLE
}
// Address range: 0x4059b0 - 0x4059d1
int64_t function_4059b0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4059b3
    int64_t v2 = v1; // 0x4059b3
    if (v2 < 0) {
        // 0x4059cb
        function_405b60(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4059c9
        return function_405970(a1, v2);
    }
    // 0x4059cb
    function_405b60(a1);
    // UNREACHABLE
}
// Address range: 0x4059e0 - 0x405a66
int64_t function_4059e0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x405a3b
            function_405b60(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405970(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405a23
    if (a2 == 0) {
        // 0x405a48
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405a28
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x405a3b
        function_405b60(a1);
        // UNREACHABLE
    }
    // 0x405a0a
    *(int64_t *)a2 = v2;
    return function_405970(a1, v2 * a3);
}
// Address range: 0x405a70 - 0x405ac0
int64_t function_405a70(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405a70
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x405aba
            function_405b60(a1);
            // UNREACHABLE
        }
        // 0x405a92
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405970(a1, v1);
    }
    if (a2 == 0) {
        // 0x405aa5
        *(int64_t *)a2 = 128;
        return function_405970(0, 128);
    }
    // 0x405ab8
    if (a2 < 0) {
        // 0x405aba
        function_405b60(a1);
        // UNREACHABLE
    }
    // 0x405a92
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405970(a1, v1);
}
// Address range: 0x405ac0 - 0x405ad7
int64_t function_405ac0(int64_t a1, int64_t a2) {
    // 0x405ac0
    return (int64_t)memset((int64_t *)function_405910(a1), 0, (int32_t)a1);
}
// Address range: 0x405ae0 - 0x405b0e
int64_t function_405ae0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405ae7
    if ((int64_t)v1 < 0) {
        // 0x405b09
        function_405b60(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405b09
        function_405b60(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x405afa
    if (mem != NULL) {
        // 0x405b04
        return (int64_t)mem;
    }
    // 0x405b09
    function_405b60(nmemb);
    // UNREACHABLE
}
// Address range: 0x405b10 - 0x405b38
int64_t function_405b10(int64_t a1, int64_t a2) {
    int64_t v1 = function_405910(a2); // 0x405b1f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405b40 - 0x405b53
int64_t function_405b40(int64_t str) {
    // 0x405b40
    return function_405b10(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405b60 - 0x405b91
int64_t function_405b60(int64_t a1) {
    // 0x405b60
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405ba0 - 0x405c70
int64_t function_405ba0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x405ba0
    int64_t result2; // bp-64, 0x405ba0
    int32_t v1 = function_405ca0(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x405bcc
    int32_t * v2; // 0x405ba0
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x405c4a
        if (v1 == 1) {
            // 0x405c68
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x405c57
            v2 = v3;
            if (v1 == 3) {
                // 0x405c5c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x405bd0
        if (result >= a3 && result <= a4) {
            // 0x405c32
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x405bdf
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_4052f0(a1); // 0x405bfc
    int32_t v6 = *v2; // 0x405c01
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x405c17
    int32_t v7 = a7; // 0x405c1a
    error(v7 == 0 ? 1 : v7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x405c32
    return result2;
}
// Address range: 0x405c70 - 0x405c91
int64_t function_405c70(int64_t a1, int32_t a2, int64_t a3, char * a4, int64_t a5, int32_t a6) {
    // 0x405c70
    return function_405ba0(a1, 10, (int64_t)a2, a3, (int64_t)a4, a5, (int64_t)a6);
}
// Address range: 0x405ca0 - 0x4061bf
int64_t function_405ca0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x405cae
    if (v1 >= 37) {
        // 0x40615c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x405cd2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x405d02
    int64_t v4 = a1; // 0x405d07
    char v5 = c; // 0x405d07
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x405cfc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x405cf8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x405d09
    if (v5 == 45) {
        // 0x405d45
        return 4;
    }
    // 0x405d0e
    int64_t v7; // bp-64, 0x405ca0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x405cce
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x405d16
    int64_t * v10 = (int64_t *)v8; // 0x405d1b
    int64_t v11 = *v10; // 0x405d1b
    char v12; // 0x405ca0
    int64_t v13; // 0x405ca0
    int64_t v14; // 0x405ca0
    int64_t v15; // 0x405ca0
    int64_t v16; // 0x405ca0
    int64_t v17; // 0x405ca0
    int64_t v18; // 0x405ca0
    if (v11 == a1) {
        // 0x405d78
        if (c == 0 || str == 0) {
            // 0x405d45
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x405d99
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x405d45
            return 4;
        }
        goto lab_0x405da7;
    } else {
        int32_t v19 = *v2; // 0x405d26
        int64_t v20 = 0; // 0x405d2c
        if (v19 != 0) {
            // 0x405d60
            v20 = 1;
            if (v19 != 34) {
                // 0x405d45
                return 4;
            }
        }
        int64_t v21 = v9; // 0x405d16
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x405d42;
        } else {
            char c2 = *(char *)v11; // 0x405d35
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x405ea3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x405da7;
                } else {
                    goto lab_0x405eb5;
                }
            } else {
                goto lab_0x405d42;
            }
        }
    }
  lab_0x405da7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x405daf
    int64_t v24 = 1; // 0x405daf
    int64_t v25; // 0x405ca0
    int64_t v26; // 0x405ca0
    int64_t v27; // 0x405ca0
    int64_t v28; // 0x405ca0
    int64_t v29; // 0x405ca0
    int64_t v30; // 0x405ca0
    int64_t v31; // 0x405ca0
    int64_t v32; // 0x405ca0
    int64_t v33; // 0x405ca0
    int64_t v34; // 0x405ca0
    int64_t v35; // 0x405ca0
    int64_t v36; // 0x405ca0
    int64_t v37; // 0x405ca0
    int64_t v38; // 0x405ca0
    int64_t v39; // 0x405ca0
    int64_t v40; // 0x405ca0
    int64_t v41; // 0x405ca0
    int64_t v42; // 0x405ca0
    int64_t v43; // 0x405ca0
    int64_t v44; // 0x405ca0
    if (v22 < 48) {
        // 0x405db1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x405e1a;
        } else {
            // 0x405dc4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x405e1a;
            } else {
                // 0x405de0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x405e1a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x406049
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x405e1a;
                    }
                    default: {
                        // 0x405df5
                        g53 = v22;
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
                                goto lab_0x405fbb;
                            }
                            case 70: {
                                goto lab_0x405eb5;
                            }
                            case 71: {
                                goto lab_0x405ff3;
                            }
                            case 72: {
                                goto lab_0x405eb5;
                            }
                            case 73: {
                                goto lab_0x405eb5;
                            }
                            case 74: {
                                goto lab_0x405eb5;
                            }
                            case 75: {
                                goto lab_0x405e7c;
                            }
                            case 76: {
                                goto lab_0x405eb5;
                            }
                            case 77: {
                                goto lab_0x405e3e;
                            }
                            case 78: {
                                goto lab_0x405eb5;
                            }
                            case 79: {
                                goto lab_0x405eb5;
                            }
                            case 80: {
                                goto lab_0x405f88;
                            }
                            case 81: {
                                goto lab_0x405eb5;
                            }
                            case 82: {
                                goto lab_0x405eb5;
                            }
                            case 83: {
                                goto lab_0x405eb5;
                            }
                            case 84: {
                                goto lab_0x405f58;
                            }
                            case 85: {
                                goto lab_0x405eb5;
                            }
                            case 86: {
                                goto lab_0x405eb5;
                            }
                            case 87: {
                                goto lab_0x405eb5;
                            }
                            case 88: {
                                goto lab_0x405eb5;
                            }
                            case 89: {
                                goto lab_0x405f26;
                            }
                            case 90: {
                                goto lab_0x405eeb;
                            }
                            case 91: {
                                goto lab_0x405eb5;
                            }
                            case 92: {
                                goto lab_0x405eb5;
                            }
                            case 93: {
                                goto lab_0x405eb5;
                            }
                            case 94: {
                                goto lab_0x405eb5;
                            }
                            case 95: {
                                goto lab_0x405eb5;
                            }
                            case 96: {
                                goto lab_0x405eb5;
                            }
                            case 97: {
                                goto lab_0x405eb5;
                            }
                            case 98: {
                                goto lab_0x405ecf;
                            }
                            case 99: {
                                goto lab_0x405e58;
                            }
                            case 100: {
                                goto lab_0x405eb5;
                            }
                            case 101: {
                                goto lab_0x405eb5;
                            }
                            case 102: {
                                goto lab_0x405eb5;
                            }
                            case 103: {
                                goto lab_0x405ff3;
                            }
                            case 104: {
                                goto lab_0x405eb5;
                            }
                            case 105: {
                                goto lab_0x405eb5;
                            }
                            case 106: {
                                goto lab_0x405eb5;
                            }
                            case 107: {
                                goto lab_0x405e7c;
                            }
                            case 108: {
                                goto lab_0x405eb5;
                            }
                            case 109: {
                                goto lab_0x405e3e;
                            }
                            case 110: {
                                goto lab_0x405eb5;
                            }
                            case 111: {
                                goto lab_0x405eb5;
                            }
                            case 112: {
                                goto lab_0x405eb5;
                            }
                            case 113: {
                                goto lab_0x405eb5;
                            }
                            case 114: {
                                goto lab_0x405eb5;
                            }
                            case 115: {
                                goto lab_0x405eb5;
                            }
                            case 116: {
                                goto lab_0x405f58;
                            }
                            default: {
                                goto lab_0x405e1a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x405e1a;
    }
  lab_0x405d42:
    // 0x405d42
    *a4 = v16;
    // 0x405d45
    return v13 & 0xffffffff;
  lab_0x405e1a:
    // 0x405e1a
    g54 = v12 - 66;
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
    int64_t v46; // 0x405ca0
    switch (v12) {
        case 66: {
            // 0x406014
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x405e87;
            } else {
                // 0x406021
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405e58;
            }
        }
        case 69: {
            goto lab_0x405fbb;
        }
        case 71: {
            goto lab_0x405ff3;
        }
        case 75: {
            goto lab_0x405e7c;
        }
        case 77: {
            goto lab_0x405e3e;
        }
        case 80: {
            goto lab_0x405f88;
        }
        case 84: {
            goto lab_0x405f58;
        }
        case 89: {
            goto lab_0x405f26;
        }
        case 90: {
            goto lab_0x405eeb;
        }
        case 98: {
            goto lab_0x405ecf;
        }
        case 99: {
            goto lab_0x405e58;
        }
        case 103: {
            goto lab_0x405ff3;
        }
        case 107: {
            goto lab_0x405e7c;
        }
        case 109: {
            goto lab_0x405e3e;
        }
        case 116: {
            goto lab_0x405f58;
        }
        case 119: {
            // 0x405ec0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x405e87;
            } else {
                // 0x405ec5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405e58;
            }
        }
        default: {
            goto lab_0x405eb5;
        }
    }
  lab_0x405fbb:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x405fd3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x405fdf
    int64_t v51 = v48; // 0x405fe2
    int64_t v52 = v37; // 0x405fe2
    int64_t v53 = v49; // 0x405fe2
    int32_t v54 = v50; // 0x405fe2
    int64_t v55 = v49; // 0x405fe2
    while (v50 != 0) {
        // 0x405fd0
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
    goto lab_0x405f14;
  lab_0x405ff3:
    // 0x405ff3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x405ffe
        int128_t v56; // 0x405ff9
        uint128_t v57; // 0x405ff9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x405ffe
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x405ca0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x406003
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x406008
                v26 = v60;
                int64_t v61; // 0x405ca0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x405e58;
  lab_0x405e7c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x405e7f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x405e58;
    } else {
        goto lab_0x405e87;
    }
  lab_0x405e3e:;
    int128_t v65 = v27; // 0x405e44
    uint128_t v66 = v65 * (int128_t)v17; // 0x405e44
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x405e87;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x405e49
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x405e87;
        } else {
            // 0x405e4e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x405e58;
        }
    }
  lab_0x405f88:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x405f9b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x405fa7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x405faa
    int64_t v73 = v70; // 0x405faa
    while (v71 != 0) {
        // 0x405f98
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
    goto lab_0x405f14;
  lab_0x405f58:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x405f6b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x405f77
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x405f7a
    int64_t v79 = v76; // 0x405f7a
    while (v77 != 0) {
        // 0x405f68
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
    goto lab_0x405f14;
  lab_0x405f26:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x405f3b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x405f47
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x405f4a
    int64_t v85 = v82; // 0x405f4a
    while (v83 != 0) {
        // 0x405f38
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
    goto lab_0x405f14;
  lab_0x405eeb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x405f03
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x405f0f
    int32_t v90 = v89; // 0x405f12
    int64_t v91 = v88; // 0x405f12
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x405f00
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
    goto lab_0x405f14;
  lab_0x405ecf:
    // 0x405ecf
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x405e87;
    } else {
        // 0x405ed8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x405e58;
    }
  lab_0x405e58:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x405e5d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x405d42;
  lab_0x405eb5:
    // 0x405eb5
    *a4 = v18;
    // 0x405d45
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405e87:
    // 0x405e87
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x405e58;
  lab_0x405f14:
    // 0x405f14
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x405e58;
}
// Address range: 0x4061c0 - 0x4067dc
int64_t function_4061c0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4061df
    int64_t v2 = *v1; // 0x4061df
    char * str2 = (char *)v2; // 0x4061ec
    char c = *str2; // 0x4061ec
    int64_t v3 = v2; // 0x406218
    int64_t v4 = 0; // 0x4061c0
    int32_t v5; // 0x4061c0
    int64_t v6; // 0x4061c0
    int64_t v7; // 0x4061c0
    int64_t v8; // 0x4061c0
    int64_t v9; // 0x4061c0
    int64_t v10; // 0x4061c0
    int64_t v11; // 0x4061c0
    int64_t v12; // 0x4061c0
    int64_t v13; // 0x4061c0
    int64_t str3; // 0x4061c0
    int64_t v14; // 0x4061c0
    int64_t v15; // 0x4061c0
    int64_t v16; // 0x4061c0
    int64_t v17; // 0x4061c0
    int32_t v18; // 0x4061c0
    int32_t v19; // 0x4061c0
    int32_t v20; // 0x4061c0
    int32_t v21; // 0x4061c0
    int32_t v22; // 0x4061c0
    int32_t v23; // 0x4061c0
    int32_t v24; // 0x4061c0
    int32_t v25; // 0x4061c0
    int32_t v26; // 0x4061c0
    int32_t v27; // 0x4061c0
    int32_t v28; // 0x4061c0
    int32_t v29; // 0x4061c0
    int64_t nmemb; // 0x4061c0
    int64_t v30; // 0x4061c0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40621c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406218
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406228
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40622e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4061f8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40625c
                int64_t v34; // 0x4061c0
                int64_t v35; // 0x4061c0
                if (strncmp(str, str2, n) == 0) {
                    // 0x406265
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4063e0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x406276
                int64_t v37 = *(int64_t *)v36; // 0x40627a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x406250
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x406265
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4063e0;
                        }
                    }
                    // 0x406276
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
                  lab_0x4062c6:
                    // 0x4062c6
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
                        goto lab_0x406320;
                    } else {
                        if (v11 == 0) {
                            // 0x406490
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406320;
                        } else {
                            if (v39 == 0) {
                                // 0x406440
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4062ea;
                                } else {
                                    // 0x40644c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4062ea;
                                    } else {
                                        // 0x40645a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4062ea;
                                        } else {
                                            goto lab_0x406320;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4062ea;
                            }
                        }
                    }
                }
              lab_0x406331:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406506
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4066b2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x4066d2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40671f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x406739
                            int64_t v45; // 0x40673b
                            if (*(char *)v42 != 0) {
                                // 0x40673b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406733
                            while (v17 + nmemb != v42) {
                                // 0x406735
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40673b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x406728
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406760
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x406514
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40666f
                        free((int64_t *)v17);
                    }
                    // 0x406569
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406580
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40642e
                    return 63;
                }
                // 0x406350
                v5 = v39;
                if (v13 != 0) {
                    // 0x4063d4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4063e0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4063f0
                    uint32_t v50 = *v49; // 0x4063f0
                    int64_t v51 = v50; // 0x4063f0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4063fa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406403
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40662f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4065da
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40642e
                            return 63;
                        }
                        // 0x406478
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40678f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40668d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4066a0
                                // 0x40642e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40659e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4065b2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40641b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40641e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406422
                    int64_t result = v59; // 0x406428
                    if (v58 != 0) {
                        // 0x40642a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40642e
                    return result;
                }
            } else {
                // 0x40622e
                v5 = v32;
            }
            // break -> 0x406355
            break;
        }
    }
    // 0x406355
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40636d
        if (*(char *)(v60 + 1) != 45) {
            // 0x406377
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40642e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4064b9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4063a6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4063b6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406320:
    // 0x406320
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406320
    int64_t v63 = *(int64_t *)v62; // 0x406324
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406331
        goto lab_0x406331;
    }
    goto lab_0x4062c6;
  lab_0x4062ea:
    // 0x4062ea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4061c0
    int32_t v65; // 0x4061c0
    int32_t v66; // 0x4061c0
    if (v27 != 0) {
        goto lab_0x406320;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4064a0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406320;
            } else {
                goto lab_0x406311;
            }
        } else {
            // 0x406305
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4065fc
                int64_t v67 = (int64_t)mem; // 0x4065fc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406320;
                } else {
                    // 0x40660f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406311;
                }
            } else {
                goto lab_0x406311;
            }
        }
    }
  lab_0x406311:
    // 0x406311
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406320;
}
// Address range: 0x4067e0 - 0x406da6
int64_t function_4067e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406801
    if (v3 < 1) {
        // 0x4069be
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4067fd
    int32_t v5 = *(int32_t *)a7; // 0x406809
    uint64_t v6 = a1 & 0xffffffff; // 0x40680b
    int64_t v7 = v2; // 0x406810
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406813
    *v8 = 0;
    int64_t v9; // 0x4067e0
    int64_t v10; // 0x4067e0
    int64_t v11; // 0x4067e0
    int64_t v12; // 0x4067e0
    int64_t str; // 0x4067e0
    int64_t v13; // 0x4067e0
    int64_t v14; // 0x4067e0
    int64_t v15; // 0x4067e0
    int64_t v16; // 0x4067e0
    int64_t v17; // 0x4067e0
    int32_t v18; // 0x4067e0
    char v19; // 0x4067e0
    if (v5 == 0) {
        // 0x4069f8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40682a;
    } else {
        // 0x406823
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406870
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406873
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406938;
            } else {
                int64_t v22 = v7 + 1; // 0x406886
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406896
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40694c;
                } else {
                    goto lab_0x4068a8;
                }
            }
        } else {
            goto lab_0x40682a;
        }
    }
  lab_0x40682a:
    // 0x40682a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406830
    *v24 = 0;
    int64_t v25; // 0x4067e0
    int64_t v26; // 0x4067e0
    int64_t v27; // 0x4067e0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406920
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40692d;
        }
        case 43: {
            // 0x406c30
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40692d;
        }
        default: {
            // 0x40684c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x406baf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406cc8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40692d;
                } else {
                    // 0x406bbd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40685a;
                }
            } else {
                goto lab_0x40685a;
            }
        }
    }
  lab_0x406938:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40693f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4068a8;
    } else {
        goto lab_0x40694c;
    }
  lab_0x40685a:
    // 0x40685a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40692d;
  lab_0x40692d:
    // 0x40692d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406938;
  lab_0x4068a8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4068a8
    int64_t v31 = v30; // 0x4068a8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4068aa
    if ((int64_t)*v32 > v31) {
        // 0x4068af
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4068b2
    if (*v33 > v30) {
        // 0x4068b7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4068ba
    int64_t v35 = v31; // 0x4068be
    int64_t v36 = v15; // 0x4068be
    int64_t v37; // 0x4067e0
    int64_t v38; // 0x4067e0
    int64_t v39; // 0x4067e0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406a28
        int64_t v41 = v40; // 0x406a28
        v2 = v41;
        int64_t v42; // 0x4067e0
        if (*v33 == v40) {
            // 0x406c10
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406c18
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406a34
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406a48
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406a51
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x406a5a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406a71
            int64_t v47 = v45 & 0xffffffff; // 0x406a75
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x406a7e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406a84
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406a86;
                }
            }
            int64_t v48 = v47 + 1; // 0x406a60
            int64_t v49 = v48 & 0xffffffff; // 0x406a60
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406a71
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x406a7e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406a84
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406a86;
                    }
                }
                // 0x406a60
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406c28
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406a86;
    } else {
        goto lab_0x4068c4;
    }
  lab_0x40694c:
    // 0x40694c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40694f
    int64_t v51 = v12; // 0x40694f
    int64_t v52 = v14; // 0x40694f
    if (*(char *)v10 == 0) {
        goto lab_0x4068a8;
    } else {
        goto lab_0x406955;
    }
  lab_0x4068c4:;
    int32_t v53 = v35; // 0x4068c4
    int64_t v54; // 0x4067e0
    int64_t v55; // 0x4067e0
    int64_t v56; // 0x4067e0
    int64_t v57; // 0x4067e0
    int64_t v58; // 0x4067e0
    int64_t v59; // 0x4067e0
    char * v60; // 0x4067e0
    int64_t v61; // 0x4067e0
    int64_t v62; // 0x4068d9
    int64_t v63; // 0x4067e0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406a13
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406a16;
    } else {
        // 0x4068cc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4067e0
        int64_t v66 = v65 ? -1 : 1; // 0x4068e0
        int64_t v67 = (int64_t)"--"; // 0x4067e0
        int64_t v68 = v62; // 0x4067e0
        int64_t v69 = 3; // 0x4068e0
        unsigned char v70 = *(char *)v68; // 0x4068e0
        char v71 = *(char *)v67; // 0x4068e0
        char v72 = v71; // 0x4068e0
        bool v73 = false; // 0x4068e0
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
            // 0x4069d0
            if (*(char *)v62 == 45) {
                // 0x406a90
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406a90
                if (c == 0) {
                    goto lab_0x4069da;
                } else {
                    // 0x406a9d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406b20;
                    } else {
                        if (c == 45) {
                            // 0x406d03
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406b75;
                        } else {
                            // 0x406aae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406b20;
                            } else {
                                // 0x406ab3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406ad4;
                                } else {
                                    // 0x406aba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406b20;
                                    } else {
                                        goto lab_0x406ad4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4069da;
            }
        } else {
            uint32_t v75 = *v33; // 0x4068f0
            v2 = v75;
            int32_t v76 = *v32; // 0x4068f3
            int64_t v77 = v35 + 1; // 0x4068f6
            int32_t v78 = v77; // 0x4068f9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406c60
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406907
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406915
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406a16;
        }
    }
  lab_0x406955:;
    // 0x406955
    int64_t v79; // bp-104, 0x4067e0
    int64_t v80 = &v79; // 0x4067ea
    int64_t v81 = v50 + 1; // 0x406955
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40695c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406961
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406965
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406969
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406971
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406976
    int32_t c2 = v84; // 0x406976
    char * found_char_pos = strchr(str2, c2); // 0x406976
    int64_t v87 = *v82; // 0x40697b
    v2 = v87;
    int64_t v88 = *v85; // 0x406985
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406990
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406c80
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x406c4d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4069be
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406976
    char v91 = *(char *)(v90 + 1); // 0x4069ab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406965
        if (v91 != 58) {
            // 0x4069be
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406bd4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406cd8
                *v8 = 0;
            } else {
                // 0x406cbc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x406bfe
            *v83 = 0;
            // 0x4069be
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x406bde
        if (v93 != 0) {
            // 0x406c70
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x406bfe
            *v83 = 0;
            // 0x4069be
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406bf1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x406bfe
            *v83 = 0;
            // 0x4069be
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x406d3a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x406cea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406cf1
        // 0x406bfe
        *v83 = 0;
        // 0x4069be
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406b49
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x406b4b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406d70
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406d21
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406d28
            // 0x4069be
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406b56
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x406b5a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406b75;
  lab_0x406a86:
    // 0x406a86
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4068c4;
  lab_0x406b75:;
    int64_t v99 = function_4061c0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406b93
    // 0x4069be
    return v99 & 0xffffffff;
  lab_0x406a16:;
    int32_t v100 = v55; // 0x406a16
    if (v100 != (int32_t)v59) {
        // 0x406a1a
        *(int32_t *)a7 = v100;
    }
    // 0x4069be
    return 0xffffffff;
  lab_0x4069da:
    // 0x4069da
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4069e1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4069be
    return v99 & 0xffffffff;
  lab_0x406b20:
    // 0x406b20
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406955;
  lab_0x406ad4:
    // 0x406ad4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4061c0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x406afa
    if ((int32_t)v101 != -1) {
        // 0x4069be
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x406b0f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406b20;
}
// Address range: 0x406db0 - 0x406e06
int64_t function_406db0(int64_t a1) {
    // 0x406db0
    *(int32_t *)&g46 = g28;
    *(int32_t *)&g47 = g27;
    int64_t v1; // 0x406db0
    int64_t result = function_4067e0(v1, v1, v1, v1, v1, v1, &g46, a1 & 0xffffffff); // 0x406dd6
    g28 = *(int32_t *)&g46;
    g51 = (char *)g49;
    *(int32_t *)&g26 = g48;
    return result;
}
// Address range: 0x406e10 - 0x406e28
int64_t function_406e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406e10
    return function_406db0(1);
}
// Address range: 0x406e30 - 0x406e43
int64_t function_406e30(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x406e30
    return function_406db0(0);
}
// Address range: 0x406e50 - 0x406e65
int64_t function_406e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406e50
    return function_4067e0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406e70 - 0x406e86
int64_t function_406e70(void) {
    // 0x406e70
    return function_406db0(0);
}
// Address range: 0x406e90 - 0x406ea8
int64_t function_406e90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406e90
    return function_4067e0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406eb0 - 0x406f2a
int64_t function_406eb0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x406ebb
    int64_t v2 = (int64_t)&g11; // 0x406ebb
    int32_t * pwc; // 0x406eb0
    int64_t v3; // 0x406eb0
    int64_t n; // 0x406eb0
    if (a2 == 0) {
        goto lab_0x406f02;
    } else {
        // 0x406ebd
        if (a3 == 0) {
            // 0x406ee8
            return -2;
        }
        // 0x406ec9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406f02;
        } else {
            goto lab_0x406ed4;
        }
    }
  lab_0x406f02:
    // 0x406f02
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406eb0
    pwc = (int32_t *)&v4;
    goto lab_0x406ed4;
  lab_0x406ed4:;
    char * wstr = (char *)v3; // 0x406eda
    int64_t ps; // 0x406eb0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x406eda
    int64_t result = v5; // 0x406eda
    if (v5 < 0xfffffffe) {
        // 0x406ee8
        return result;
    }
    int64_t result2 = result; // 0x406f19
    if ((char)function_4070a0(0, v3) == 0) {
        // 0x406f1b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406ee8
    return result2;
}
// Address range: 0x406f30 - 0x407034
int64_t function_406f30(int64_t result, uint64_t a2, int64_t a3) {
    // 0x406f30
    if (a3 == 0) {
        // 0x406f69
        return 0;
    }
    int64_t v1 = result; // 0x406f3c
    int64_t v2 = a3; // 0x406f3c
    int64_t result2; // 0x406f30
    if (result % 8 != 0) {
        char v3 = a2; // 0x406f3e
        int64_t v4 = result; // 0x406f41
        if ((char)result == v3) {
            // 0x406f69
            return result;
        }
        int64_t v5 = a3; // 0x406f41
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x406f50
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x406f70;
            }
            // 0x406f56
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x406f69
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x406f69
        return result2;
    }
  lab_0x406f70:;
    int64_t result3 = v1; // 0x406f9d
    int64_t v6 = v2; // 0x406f9d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x406f7f
        int64_t v8 = 0x10000 * v7 | v7; // 0x406f8c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x406f96
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x406fb6
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x406fe5
            int64_t v12 = v1 + 8; // 0x406fe9
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x406fd3
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x406ffc;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x406ff3
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x406f69
                return 0;
            }
        }
    }
  lab_0x406ffc:;
    char v14 = a2; // 0x406ffc
    if (*(char *)result3 == v14) {
        // 0x406f69
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x407010
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x406f69
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x406f69
    return result2;
}
// Address range: 0x407040 - 0x40709d
int64_t function_407040(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407047
    int64_t v2; // 0x407040
    int64_t result = function_407670(a1, v2); // 0x407058
    if ((v2 & 32) != 0) {
        // 0x407080
        if ((int32_t)result == 0) {
            // 0x407084
            *__errno_location() = 0;
        }
        // 0x40707a
        return 0xffffffff;
    }
    // 0x407061
    if ((int32_t)result == 0) {
        // 0x40707a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407068
    if (v1 == 0) {
        // 0x40706a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40707a
    return result2;
}
// Address range: 0x4070a0 - 0x4070fe
int64_t function_4070a0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4070a6
    if (locale == NULL) {
        // 0x4070d3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4070a6
    bool v2; // 0x4070a0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x4070a0
    int64_t v5 = v1; // 0x4070a0
    int64_t v6 = 2; // 0x4070c5
    unsigned char v7 = *(char *)v5; // 0x4070c5
    char v8 = *(char *)v4; // 0x4070c5
    char v9 = v8; // 0x4070c5
    bool v10 = false; // 0x4070c5
    while (v7 == v8) {
        // 0x4070b8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4070d1
    int64_t v13 = v1; // 0x4070d1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4070d3
        return 0;
    }
    int64_t v14 = 6; // 0x4070d1
    unsigned char v15 = *(char *)v13; // 0x4070ed
    char v16 = *(char *)v12; // 0x4070ed
    char v17 = v16; // 0x4070ed
    bool v18 = false; // 0x4070ed
    while (v15 == v16) {
        // 0x4070e0
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
// Address range: 0x407100 - 0x407662
int64_t function_407100(void) {
    char * v1 = nl_langinfo(14); // 0x407116
    char * v2 = g50; // 0x40711b
    char * v3; // 0x407100
    int64_t v4; // 0x407100
    int64_t v5; // 0x407100
    int64_t v6; // 0x407100
    int64_t v7; // 0x407100
    int32_t size; // 0x407100
    int32_t size2; // 0x407100
    int32_t len; // 0x4071d2
    int64_t v8; // 0x4071d2
    char * env_val; // 0x4071bd
    if (v2 == NULL) {
        // 0x4071b8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407225;
        } else {
            // 0x4071ca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407225;
            } else {
                // 0x4071cf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4071bd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407655
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407225;
                    } else {
                        // 0x4075c9
                        size2 = len + 14;
                        goto lab_0x4071eb;
                    }
                } else {
                    goto lab_0x4071eb;
                }
            }
        }
    } else {
        // 0x407100
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40713a;
    }
  lab_0x40746c:;
    // 0x40746c
    struct _IO_FILE * stream; // 0x4072ab
    int32_t v10 = __uflow(stream); // 0x40746f
    int64_t v11; // 0x407100
    int64_t v12 = v11; // 0x407479
    int64_t v13; // 0x407100
    int64_t v14 = v13; // 0x407479
    int32_t v15 = v10; // 0x407479
    int64_t v16; // 0x407100
    int64_t v17 = v16; // 0x407479
    int64_t v18 = v11; // 0x407479
    int64_t v19 = v13; // 0x407479
    int64_t v20 = v16; // 0x407479
    if (v10 == -1) {
        // break -> 0x40747f
        goto lab_0x40747f;
    }
    goto lab_0x4072f9;
  lab_0x4072ee:;
    // 0x4072ee
    int64_t v90; // 0x407100
    int64_t * v32; // 0x4072e0
    *v32 = v90 + 1;
    int64_t v89; // 0x407100
    v12 = v89;
    int64_t v91; // 0x407100
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407100
    v17 = v92;
    goto lab_0x4072f9;
  lab_0x4072f9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407100
    int32_t v25; // bp-120, 0x407100
    int32_t v26; // bp-184, 0x407100
    int64_t v27; // 0x4072ab
    int64_t v28; // 0x4072c8
    int64_t v29; // 0x4072cd
    int64_t * v30; // 0x4072e4
    switch (c) {
        case 32: {
            goto lab_0x4072e0;
        }
        case 10: {
            goto lab_0x4072e0;
        }
        case 9: {
            goto lab_0x4072e0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4074d1
            int32_t v33; // 0x407100
            char v34; // 0x407100
            int32_t v35; // 0x4074de
            if (v31 < *v30) {
                // 0x4074b0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4074db
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4074d1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4074b0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4074db
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4074c0
                v36 = v33;
            }
            // 0x4075af
            if (v36 == -1) {
                // break -> 0x40747f
                break;
            }
            goto lab_0x4072e0;
        }
        default: {
            // 0x40730f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40747f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407338
            int64_t v39 = v37 + 4; // 0x40733a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407346
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407348
            while (v41 == 0) {
                // 0x407338
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407366
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407372
            int64_t v45 = v43 + 4; // 0x407374
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407380
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407382
            while (v47 == 0) {
                // 0x407372
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40736f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407398
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4073a8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4073ac
            int64_t v52 = v51 + v48; // 0x4073b5
            int64_t * mem; // 0x407100
            int64_t v53; // 0x407100
            int64_t v54; // 0x407100
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4074eb
                int64_t v56 = v55 + 3; // 0x4074f7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4073d1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4073e0
            if (mem == NULL) {
                // 0x40760c
                free((int64_t *)v21);
                function_407670(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x407284;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4073f8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407402
            uint32_t v62 = (int32_t)v59; // 0x407405
            int64_t v63; // 0x407100
            if (v62 >= 8) {
                // 0x407514
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40752e
                int64_t v66 = v61 - v65; // 0x407532
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40753d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40754e
                    int64_t v70 = v69 & 0xffffffff; // 0x40754e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40754b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4075df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407417
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40741b
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
            int64_t v73 = v51 + 1; // 0x40742b
            int64_t v74 = v60 - 1; // 0x40742f
            uint32_t v75 = (int32_t)v73; // 0x407434
            int64_t v76; // 0x407100
            if (v75 >= 8) {
                // 0x407562
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40756c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40757c
                int64_t v80 = v74 - v79; // 0x407580
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40758b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40759b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407599
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4075f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4075fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407446
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40744a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407643
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40745e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4072ee;
            } else {
                goto lab_0x40746c;
            }
        }
    }
  lab_0x4072e0:;
    int64_t v93 = v23; // 0x407100
    int64_t v94 = v22; // 0x407100
    int64_t v95 = v21; // 0x407100
    goto lab_0x4072e0_2;
  lab_0x407225:;
    int64_t * mem3 = malloc(size); // 0x407225
    int64_t v97 = (int64_t)&g11; // 0x407230
    int64_t v98; // 0x407100
    int64_t path; // 0x407100
    if (mem3 == NULL) {
        goto lab_0x407202;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407225
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407246;
    }
  lab_0x40713a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40712d
    char v100 = *v3; // 0x40713a
    int64_t v101; // 0x407100
    if (v100 == 0) {
        // 0x407194
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407100
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407100
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407180
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407187;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x407150
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40715d
        char v107 = *(char *)v106; // 0x407162
        v102 = v107;
        if (v107 == 0) {
            // 0x407194
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40716b
    v104 = v103 + 1;
  lab_0x407187:
    // 0x407194
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x407202:;
    char * v108 = (char *)v97;
    g50 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40713a;
  lab_0x407246:;
    int64_t v109 = v98 + path; // 0x407246
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407272
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x4072a1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4075d2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x4072c5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4072e0_2:;
                uint64_t v96 = *v32; // 0x4072e0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40746c;
                } else {
                    goto lab_0x4072ee;
                }
            }
          lab_0x40747f:
            // 0x40747f
            function_407670(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x40749e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407284;
  lab_0x4071eb:;
    int64_t * mem4 = malloc(size2); // 0x4071eb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x407291
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407246;
    } else {
        goto lab_0x407202;
    }
  lab_0x407284:
    // 0x407284
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x407202;
}
// Address range: 0x407670 - 0x4076eb
int64_t function_407670(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407677
    if (fileno(stream) < 0) {
        // 0x4076d7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40768a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4076bb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4076d7
            return fclose(stream);
        }
    }
    // 0x40768c
    if ((int32_t)function_4076f0(a1, v1) == 0) {
        // 0x4076d7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x407698
    int32_t v3 = *v2; // 0x4076a0
    int64_t result = fclose(stream); // 0x4076ae
    if (v3 != 0) {
        // 0x4076e0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4076b0
    return result;
}
// Address range: 0x4076f0 - 0x407730
int64_t function_4076f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40770a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40770a
        return fflush(stream);
    }
    // 0x407718
    function_407730(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407730 - 0x407787
int64_t function_407730(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407730
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40773a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40776b
    int64_t result = -1; // 0x407774
    if (v1 != -1) {
        // 0x407776
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407782
    return result;
}
// Address range: 0x407790 - 0x4077ed
int64_t function_407790(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407790
    return function_4013c0();
}
// Address range: 0x4077f0 - 0x4077f1
int64_t function_4077f0(void) {
    // 0x4077f0
    int64_t result; // 0x4077f0
    return result;
}
// Address range: 0x407800 - 0x407818
int64_t function_407800(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407800
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x407818 - 0x407838
int64_t function_407818(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x407822
    while (*(int64_t *)v1 != -1) {
        // 0x407823
        v1 -= 8;
    }
    // 0x407834
    return result;
}
