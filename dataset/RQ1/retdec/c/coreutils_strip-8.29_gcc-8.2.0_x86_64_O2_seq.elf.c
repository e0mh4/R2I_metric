// Address range: 0x401980 - 0x401985
int64_t function_401980(void) {
    // 0x401980
    abort();
    // UNREACHABLE
}
// Address range: 0x401985 - 0x40198a
int64_t function_401985(void) {
    // 0x401985
    abort();
    // UNREACHABLE
}
// Address range: 0x40198a - 0x40198f
int64_t function_40198a(void) {
    // 0x40198a
    abort();
    // UNREACHABLE
}
// Address range: 0x40198f - 0x401994
int64_t function_40198f(void) {
    // 0x40198f
    abort();
    // UNREACHABLE
}
// Address range: 0x401994 - 0x401999
int64_t function_401994(void) {
    // 0x401994
    abort();
    // UNREACHABLE
}
// Address range: 0x401999 - 0x40199e
int64_t function_401999(void) {
    // 0x401999
    abort();
    // UNREACHABLE
}
// Address range: 0x40199e - 0x4019a3
int64_t function_40199e(void) {
    // 0x40199e
    abort();
    // UNREACHABLE
}
// Address range: 0x4019b0 - 0x402517
int64_t function_4019b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4019b0
    int128_t v1; // 0x4019b0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = v1;
    int128_t v5 = v1;
    uint64_t v6 = a1 & 0xffffffff; // 0x4019b8
    function_403220(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_409880(0x403180, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g36 = 0;
    g35 = (char *)&g10;
    int64_t v7 = (int64_t)*(int32_t *)0x60d27c; // 0x401a15
    int64_t v8 = v7; // 0x401a1f
    int64_t v9 = a5; // 0x401a1f
    int64_t v10 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"; // 0x401a1f
    int64_t v11 = 0; // 0x401a1f
    int64_t v12 = a4; // 0x401a1f
    int64_t v13 = 0; // 0x401a1f
    int64_t v14 = a4; // 0x401a1f
    int64_t v15 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"; // 0x401a1f
    int64_t v16 = a5; // 0x401a1f
    int64_t v17 = v7; // 0x401a1f
    if (v6 > v7) {
        int64_t v18; // 0x4019b0
        while (true) {
            // 0x401a21
            v18 = v11;
            while (true) {
                int64_t v19 = v12; // 0x4019b0
                int64_t v20 = v10; // 0x4019b0
                int64_t v21 = v9; // 0x4019b0
                int64_t v22 = v8; // 0x4019b0
                while (true) {
                  lab_0x401a21:;
                    int64_t v23 = v22;
                    int64_t v24 = *(int64_t *)((0x100000000 * v23 >> 29) + a2); // 0x401a24
                    if (*(char *)v24 == 45) {
                        char v25 = *(char *)(v24 + 1); // 0x401a2e
                        v13 = v18;
                        v14 = v19;
                        v15 = v20;
                        v16 = v21;
                        v17 = v23;
                        if (v25 == 46) {
                            goto lab_0x401a91_5;
                        }
                        // 0x401a36
                        v13 = v18;
                        v14 = v19;
                        v15 = v20;
                        v16 = v21;
                        v17 = v23;
                        if ((int32_t)v25 < 58) {
                            goto lab_0x401a91_5;
                        }
                    }
                    uint32_t v26 = (int32_t)function_406510(v6, a2, "+f:s:w", &g3, 0, a6);
                    switch (v26) {
                        case -1: {
                            goto lab_0x401f7b;
                        }
                        case 102: {
                            goto lab_0x401b70;
                        }
                        default: {
                            if (v26 <= 102) {
                                if (v26 == -131) {
                                    // 0x401b07
                                    function_4052c0((int64_t)g29, "seq", "GNU coreutils", (int64_t)g17, "Ulrich Drepper", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                if (v26 == -130) {
                                    // 0x401b60
                                    function_402a40(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x40232d;
                            }
                            if (v26 != 115) {
                                // break -> 0x401b40
                                break;
                            }
                            int64_t v27 = g26; // 0x401a7e
                            *(int64_t *)&g35 = (int64_t)g50;
                            v19 = (int64_t)&g3;
                            v20 = a2;
                            v21 = 0;
                            v22 = v27;
                            v13 = v18;
                            v14 = (int64_t)&g3;
                            v15 = a2;
                            v16 = 0;
                            v17 = v27;
                            if (v6 <= v27) {
                                goto lab_0x401a91_5;
                            }
                            goto lab_0x401a21;
                        }
                    }
                }
            }
          lab_0x401b70:
            // 0x401b70
            v11 = (int64_t)g50;
            v8 = (int64_t)*(int32_t *)0x60d27c;
            v9 = 0;
            v10 = a2;
            v12 = (int64_t)&g3;
            v13 = v11;
            v14 = (int64_t)&g3;
            v15 = a2;
            v16 = 0;
            v17 = v8;
            if (v6 <= v8) {
                goto lab_0x401a91_5;
            }
        }
      lab_0x401f7b:
        // 0x401f7b
        v13 = v18;
        v14 = (int64_t)&g3;
        v15 = a2;
        v16 = 0;
        v17 = g26;
    }
  lab_0x401a91_5:;
    int32_t v28 = (int32_t)a1 - (int32_t)v17; // 0x401a94
    int32_t v29 = v28; // bp-248, 0x401a97
    if (v28 == 0) {
      lab_0x40239c:
        // 0x40239c
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x40232d
        function_402a40(1);
        // UNREACHABLE
    }
    if (v28 >= 4) {
        // 0x4023c0
        function_404e40(*(int64_t *)(a2 + 24 + (0x100000000 * v17 >> 29)));
        // 0x402315
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"extra operand %s", 5));
      lab_0x40232d:
        // 0x40232d
        function_402a40(1);
        // UNREACHABLE
    }
    int64_t v30 = &v29; // 0x4019c2
    int64_t v31 = 0; // 0x401aad
    int64_t v32 = 1; // 0x401aad
    int64_t v33 = v14; // 0x401aad
    int64_t v34 = 0; // 0x401aad
    int64_t v35 = v15; // 0x401aad
    int64_t v36 = v16; // 0x401aad
    int64_t v37 = 0; // 0x401aad
    int64_t v38 = 0; // 0x401aad
    int64_t v39 = v17; // 0x401aad
    char v40; // 0x4019b0
    int64_t v41; // 0x4019b0
    int64_t v42; // 0x4019b0
    int64_t v43; // 0x4019b0
    int64_t v44; // 0x4019b0
    int64_t v45; // 0x4019b0
    int64_t v46; // 0x4019b0
    int64_t v47; // 0x4019b0
    int64_t v48; // 0x4019b0
    int64_t v49; // 0x4019b0
    unsigned char v50; // 0x401ad4
    if (v13 == 0) {
        goto lab_0x401b82;
    } else {
        int64_t v51; // 0x4019b0
        while (true) {
            // 0x401ad4
            v49 = v32;
            int64_t v52 = v31;
            v50 = *(char *)(v52 + v13);
            int64_t v53; // 0x4019b0
            int64_t v54; // 0x4019b0
            int64_t v55; // 0x4019b0
            if (v50 != 37) {
                // 0x401ac0
                v51 = v54;
                v53 = v51;
                v55 = 1;
                if (v50 == 0) {
                    // break -> 0x4022c8
                    break;
                }
            } else {
                int64_t v56 = v52 + 1; // 0x401ae1
                char * str = (char *)(v56 + v13);
                v53 = v56;
                v55 = 2;
                if (*str != 37) {
                    int64_t v57 = v56 + (int64_t)strspn(str, "-+#0 '"); // 0x401e8f
                    int64_t v58 = v57 + (int64_t)strspn((char *)(v57 + v13), "0123456789"); // 0x401e9b
                    char v59 = *(char *)(v58 + v13); // 0x401ea0
                    v40 = v59;
                    v44 = v58;
                    if (v59 != 46) {
                        goto lab_0x401ebc;
                    } else {
                        int64_t v60 = v58 + 1; // 0x401ea7
                        int64_t v61 = v60 + (int64_t)strspn((char *)(v60 + v13), "0123456789"); // 0x401eb9
                        v40 = *(char *)(v61 + v13);
                        v44 = v61;
                        goto lab_0x401ebc;
                    }
                }
            }
            // 0x401acd
            v31 = v55 + v52;
            v32 = v49 + 1;
            v54 = v53;
        }
        // 0x4022c8
        v48 = v13;
        v47 = a2;
        v45 = v16;
        v46 = a6;
        v41 = v51;
        v42 = v49 - 1;
        v43 = v17;
        goto lab_0x4022c8;
    }
  lab_0x4022c3_2:
    // 0x4022c3
    function_402640();
    int64_t v62; // 0x4019b0
    v48 = v62;
    int64_t v63; // 0x4019b0
    v47 = v63;
    int64_t v64; // 0x4019b0
    v45 = v64;
    int64_t v65; // 0x4019b0
    v46 = v65;
    int64_t v66; // 0x4019b0
    v41 = v66;
    int64_t v67; // 0x4019b0
    v42 = v67;
    int64_t v68; // 0x4019b0
    v43 = v68;
    goto lab_0x4022c8;
  lab_0x402248_2:;
    // 0x402248
    int64_t * str3; // 0x4019b0
    free((int64_t *)*str3);
    int64_t v288; // 0x401d3f
    int64_t v264 = v288; // 0x402250
    int64_t v263; // 0x4019b0
    int64_t v265 = v263; // 0x402250
    goto lab_0x402255;
  lab_0x401b82:;
    int64_t v334 = v39;
    int64_t v362 = v38;
    int64_t v361 = v37;
    int64_t v360 = v36;
    int64_t v335 = v34;
    int64_t v332 = v33;
    int64_t v366 = 0x100000000 * v334 >> 29;
    int64_t v367 = v366 + a2;
    int64_t * v330 = (int64_t *)v367;
    int64_t v341 = *v330; // 0x401b8d
    int64_t v368 = function_402600(v341, v35, v366, v332); // 0x401b9f
    int64_t * v329 = v330; // 0x401ba6
    int64_t v331 = v332; // 0x401ba6
    int64_t v333 = v334; // 0x401ba6
    if ((char)v368 == 0) {
        goto lab_0x401c01;
    } else {
        // 0x401ba8
        if (v29 == 1) {
            goto lab_0x4020d8;
        } else {
            int64_t str5 = *(int64_t *)(v367 + 8); // 0x401bb7
            if ((char)function_402600(str5, str5, v366, v332) == 0) {
                goto lab_0x401c01;
            } else {
                // 0x401bcd
                if (v29 != 3) {
                    goto lab_0x4020d8;
                } else {
                    // 0x401bd7
                    v329 = v330;
                    v331 = v332;
                    v333 = v334;
                    if (strcmp("1", (char *)str5) != 0) {
                        goto lab_0x401c01;
                    } else {
                        int64_t v369 = function_402600(*(int64_t *)(v367 + 16), str5, v366, v332); // 0x401bf4
                        v329 = v330;
                        v331 = v332;
                        v333 = v334;
                        if ((char)v369 != 0) {
                            goto lab_0x4020d8;
                        } else {
                            goto lab_0x401c01;
                        }
                    }
                }
            }
        }
    }
  lab_0x401c01:
    // 0x401c01
    g26 = (int32_t)v333 + 1;
    float80_t v344; // bp-88, 0x4019b0
    function_402dc0((int64_t *)&v344, *v329);
    int3_t v84; // 0x4019b0
    int3_t v345 = v84 - 1;
    __frontend_reg_store_fpr(v345, v344);
    int64_t v346 = g26; // 0x401c27
    int32_t v347; // 0x4019b0
    int64_t v348 = v347; // 0x401c2e
    int64_t v349 = v347; // 0x401c36
    float80_t v350 = __frontend_reg_load_fpr(v345); // 0x401c3e
    int3_t v83; // 0x4019b0
    int3_t v99; // 0x4019b0
    int3_t v98; // 0x4019b0
    int3_t v144; // 0x4019b0
    int3_t v143; // 0x4019b0
    int3_t v85; // 0x4019b0
    int64_t v150; // 0x4019b0
    int64_t v79; // 0x4019b0
    int64_t v135; // 0x4019b0
    int64_t v106; // 0x4019b0
    int64_t v93; // 0x4019b0
    int64_t v80; // 0x4019b0
    int64_t v136; // 0x4019b0
    int64_t v107; // 0x4019b0
    int64_t v94; // 0x4019b0
    int64_t v151; // 0x4019b0
    int64_t v95; // 0x4019b0
    int64_t v152; // 0x4019b0
    int64_t v81; // 0x4019b0
    int64_t v137; // 0x4019b0
    int64_t v108; // 0x4019b0
    int64_t v104; // 0x4019b0
    int64_t v91; // 0x4019b0
    int64_t v149; // 0x4019b0
    int64_t v77; // 0x4019b0
    int64_t v134; // 0x4019b0
    int64_t v105; // 0x4019b0
    int64_t v92; // 0x4019b0
    int64_t v78; // 0x4019b0
    int64_t v133; // 0x4019b0
    int64_t v148; // 0x4019b0
    int64_t v74; // 0x4019b0
    int64_t v103; // 0x4019b0
    int64_t v89; // 0x4019b0
    int64_t v132; // 0x4019b0
    int64_t v102; // 0x4019b0
    int64_t v88; // 0x4019b0
    int64_t v147; // 0x4019b0
    int64_t v73; // 0x4019b0
    int64_t v86; // 0x4019b0
    int64_t v145; // 0x4019b0
    int64_t v71; // 0x4019b0
    int64_t v130; // 0x4019b0
    int64_t v100; // 0x4019b0
    int64_t v76; // 0x4019b0
    int64_t v146; // 0x4019b0
    int64_t v72; // 0x4019b0
    int64_t v131; // 0x4019b0
    int64_t v101; // 0x4019b0
    int64_t v87; // 0x4019b0
    int64_t v90; // 0x4019b0
    int64_t v75; // 0x4019b0
    bool v70; // 0x4019b0
    if (v6 > v346) {
        // 0x401f87
        g26 = &g27;
        function_402dc0((int64_t *)&v344, *(int64_t *)(8 * v346 + a2));
        int32_t v351 = g26; // 0x401fa6
        int64_t v352 = v351; // 0x401fa6
        __frontend_reg_store_fpr(v345, v344);
        int64_t v353 = v29; // 0x401fbe
        int3_t v354 = v84 - 2;
        __frontend_reg_store_fpr(v354, __frontend_reg_load_fpr(v345));
        float80_t v355 = __frontend_reg_load_fpr(v354); // 0x401fc4
        if (v6 > v352) {
            // 0x40213e
            __frontend_reg_store_fpr(v345, __frontend_reg_load_fpr(v345));
            __frontend_reg_store_fpr(v345, 0.0L);
            int64_t v356 = v351; // 0x402142
            int128_t v357 = __asm_pxor(v3, v3); // 0x402145
            __frontend_reg_store_fpr(v354, v355);
            __asm_movss(v357);
            float80_t v358 = __frontend_reg_load_fpr(v354); // 0x40215b
            float80_t v359 = __frontend_reg_load_fpr(v345); // 0x40215b
            __frontend_reg_store_fpr(v345, __frontend_reg_load_fpr(v345));
            v83 = v354;
            v85 = v345;
            v86 = v352;
            v87 = v353;
            v88 = v335;
            v89 = a2;
            v90 = v356;
            v91 = v360;
            v92 = v349;
            v93 = v361;
            v94 = v362;
            v95 = v349;
            v70 = v358 == v359;
            v71 = v352;
            v72 = v353;
            v73 = v335;
            v74 = a2;
            v75 = v356;
            v76 = 0x100000000 * v352 >> 29;
            v77 = v360;
            v78 = v349;
            v79 = v361;
            v80 = v362;
            v81 = v349;
            if (v358 == v358 && v359 == v359) {
                goto lab_0x4022f8;
            } else {
                goto lab_0x402165;
            }
        } else {
            int128_t v363 = __asm_pxor(v4, v4); // 0x401fce
            __frontend_reg_load_fpr(v345);
            __asm_movss(v363);
            __frontend_reg_store_fpr(v345, 1.0L);
            __frontend_reg_load_fpr(v345);
            v98 = v354;
            v99 = v345;
            v100 = v349;
            v101 = v353;
            v102 = v335;
            v103 = v348;
            v104 = v360;
            v105 = 0;
            v106 = v361;
            v107 = v362;
            v108 = v349;
            goto lab_0x401ff0;
        }
    } else {
        // 0x401c4b
        __frontend_reg_store_fpr(v345, v350);
        if (v347 == 0) {
            // 0x4021b1
            __asm_movss(__asm_pxor(v2, v2));
            __frontend_reg_load_fpr(v345);
            __frontend_reg_store_fpr(v345, 1.0L);
            int3_t v364 = v84 - 2;
            __frontend_reg_store_fpr(v364, __frontend_reg_load_fpr(v345));
            __frontend_reg_load_fpr(v364);
            __frontend_reg_load_fpr(v345);
            v143 = v364;
            v144 = v345;
            v145 = v331;
            v146 = 1;
            v147 = v335;
            v148 = v348;
            v149 = v360;
            v150 = v361;
            v151 = v362;
            v152 = 0;
            goto lab_0x4021d7;
        } else {
            // 0x401c54
            __asm_movss(__asm_pxor(v5, v5));
            __frontend_reg_load_fpr(v345);
            __frontend_reg_store_fpr(v345, 1.0L);
            int3_t v365 = v84 - 2; // 0x401c79
            __frontend_reg_store_fpr(v365, __frontend_reg_load_fpr(v345));
            __frontend_reg_load_fpr(v365);
            __frontend_reg_load_fpr(v345);
            v130 = v349;
            v131 = 1;
            v132 = v335;
            v133 = v348;
            v134 = 0;
            v135 = v361;
            v136 = v362;
            v137 = 0;
            goto lab_0x401c8f;
        }
    }
  lab_0x4022c8:;
    int64_t v69 = function_404e40(v48); // 0x4022cb
    char * format = dcgettext(NULL, "format %s has no %% directive", 5); // 0x4022df
    error(1, (int32_t)"format %s has no %% directive" ^ (int32_t)"format %s has no %% directive", format);
    v70 = true;
    v71 = v69;
    v72 = (int64_t)format;
    v73 = v69;
    v74 = v47;
    v75 = (int32_t)"format %s has no %% directive" ^ (int32_t)"format %s has no %% directive";
    v76 = 1;
    v77 = v45;
    v78 = v46;
    v79 = v41;
    v80 = v42;
    v81 = v43;
    goto lab_0x4022f8;
  lab_0x4020d8:
    // 0x4020d8
    v329 = v330;
    v331 = v332;
    v333 = v334;
    bool v186; // 0x4019b0
    if (v335 == 0 && g36 != 1) {
        int64_t v336 = (int64_t)g35; // 0x4020fb
        int64_t v337 = -1; // 0x4019b0
        v329 = v330;
        v331 = 0;
        v333 = v334;
        while (v337 != 0) {
            int64_t v338 = v336;
            int64_t v339 = v337 - 1; // 0x4020fb
            v337 = v339;
            v336 = v338 + (v186 ? -1 : 1);
            if (*(char *)v338 == 0) {
                v329 = v330;
                v331 = v339;
                v333 = v334;
                if (v339 != -3) {
                    goto lab_0x401c01;
                } else {
                    int64_t v340 = v29 != 1 ? v341 : (int64_t)"1"; // 0x402112
                    int64_t v342 = *(int64_t *)((8 * (v334 + 0xffffffff + (int64_t)v29) & 0x7fffffff8) + a2); // 0x402120
                    if ((char)function_402680(v340, v342) != 0) {
                        goto lab_0x40226b;
                    } else {
                        int64_t v343 = g26; // 0x402132
                        v329 = (int64_t *)((0x100000000 * v343 >> 29) + a2);
                        v331 = v339;
                        v333 = v343;
                        goto lab_0x401c01;
                    }
                }
            }
            v329 = v330;
            v331 = 0;
            v333 = v334;
        }
    }
    goto lab_0x401c01;
  lab_0x4022f8:;
    int64_t v82 = v74;
    if (v70) {
        // 0x4022fe
        function_404e40(*(int64_t *)(v82 - 8 + v76));
        // 0x402315
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"invalid Zero increment value: %s", 5));
        // 0x40232d
        function_402a40(1);
        // UNREACHABLE
    }
    // 0x4022f8
    v83 = v84 - 2;
    v85 = v84 - 1;
    v86 = v71;
    v87 = v72;
    v88 = v73;
    v89 = v82;
    v90 = v75;
    v91 = v77;
    v92 = v78;
    v93 = v79;
    v94 = v80;
    v95 = v81;
    goto lab_0x402165;
  lab_0x402165:;
    int64_t * v96 = (int64_t *)(v30 + 16); // 0x40216d
    *v96 = v87;
    int64_t v97 = v30 + 160; // 0x402172
    v29 = v92;
    g26 = (int32_t)v86 + 1;
    function_402dc0((int64_t *)v97, *(int64_t *)(8 * v90 + v89));
    __frontend_reg_store_fpr(v85, *(float80_t *)v97);
    *(float80_t *)(v30 + 48) = __frontend_reg_load_fpr(v85);
    v98 = v83;
    v99 = v85;
    v100 = (int64_t)*(int32_t *)(v30 + 184);
    v101 = *v96;
    v102 = v88;
    v103 = *(int64_t *)(v30 + 176);
    v104 = v91;
    v105 = v29;
    v106 = v93;
    v107 = v94;
    v108 = v95;
    goto lab_0x401ff0;
  lab_0x401ff0:;
    int64_t v109 = v108;
    int64_t v110 = v107;
    int64_t v111 = v106;
    int64_t v112 = v105;
    int64_t v113 = v103;
    int64_t v114 = v102;
    int64_t v115 = v101;
    int64_t v116 = v100;
    int3_t v117 = v99;
    int3_t v118 = v98;
    __frontend_reg_store_fpr(v117, 0.0L);
    float80_t * v119 = (float80_t *)(v30 + 64); // 0x401ff2
    __frontend_reg_store_fpr(v118, *v119);
    float80_t v120 = __frontend_reg_load_fpr(v118); // 0x401ff6
    __frontend_reg_store_fpr(v118, v120 * __frontend_reg_load_fpr(v117));
    float80_t v121 = __frontend_reg_load_fpr(v118); // 0x401ff8
    float80_t v122 = __frontend_reg_load_fpr(v117); // 0x401ff8
    int64_t v123; // 0x4019b0
    int64_t v124; // 0x4019b0
    int64_t v125; // 0x4019b0
    int64_t v126; // 0x4019b0
    int64_t v127; // 0x4019b0
    int64_t v128; // 0x4019b0
    int64_t v129; // 0x4019b0
    if (v121 != v122 == v121 == v122) {
        // 0x401c85
        __frontend_reg_store_fpr(v117, __frontend_reg_load_fpr(v117));
        v130 = v116;
        v131 = v115;
        v132 = v114;
        v133 = v113;
        v134 = v112;
        v135 = v111;
        v136 = v110;
        v137 = v109;
        goto lab_0x401c8f;
    } else {
        if (v121 != v122) {
            // 0x401c89
            __frontend_reg_store_fpr(v117, __frontend_reg_load_fpr(v117));
            v130 = v116;
            v131 = v115;
            v132 = v114;
            v133 = v113;
            v134 = v112;
            v135 = v111;
            v136 = v110;
            v137 = v109;
            goto lab_0x401c8f;
        } else {
            if ((int32_t)(v112 || v116 || v109) != 0) {
                // 0x401c8d
                __frontend_reg_store_fpr(v117, __frontend_reg_load_fpr(v117));
                v130 = v116;
                v131 = v115;
                v132 = v114;
                v133 = v113;
                v134 = v112;
                v135 = v111;
                v136 = v110;
                v137 = v109;
                goto lab_0x401c8f;
            } else {
                // 0x402014
                __frontend_reg_store_fpr(v118, 1.0L);
                int3_t v138 = v84 - 3; // 0x40201b
                __frontend_reg_store_fpr(v138, *(float80_t *)(v30 + 96));
                float80_t v139 = __frontend_reg_load_fpr(v138); // 0x40201f
                float80_t v140 = __frontend_reg_load_fpr(v118); // 0x40201f
                __frontend_reg_store_fpr(v118, __frontend_reg_load_fpr(v118));
                if (v139 == v140 != (v139 == v139 && v140 == v140)) {
                    // 0x40203d
                    __frontend_reg_store_fpr(v117, __frontend_reg_load_fpr(v117));
                    v128 = 0;
                    v129 = v115;
                    v127 = v114;
                    v126 = v113;
                    v123 = v111;
                    v124 = v110;
                    v125 = v109;
                    goto lab_0x40203f;
                } else {
                    // 0x40202d
                    __frontend_reg_store_fpr(v118, *v119);
                    float80_t v141 = __frontend_reg_load_fpr(v118); // 0x402031
                    float80_t v142 = __frontend_reg_load_fpr(v117); // 0x402031
                    __frontend_reg_store_fpr(v117, __frontend_reg_load_fpr(v117));
                    v128 = 0;
                    v129 = v115;
                    v127 = v114;
                    v126 = v113;
                    v123 = v111;
                    v124 = v110;
                    v125 = v109;
                    v143 = v118;
                    v144 = v117;
                    v145 = 0;
                    v146 = v115;
                    v147 = v114;
                    v148 = v113;
                    v149 = v104;
                    v150 = v111;
                    v151 = v110;
                    v152 = v109;
                    if (v141 >= v142) {
                        goto lab_0x4021d7;
                    } else {
                        goto lab_0x40203f;
                    }
                }
            }
        }
    }
  lab_0x4021d7:;
    int64_t v153 = v152;
    int64_t v154 = v151;
    int64_t v155 = v150;
    int64_t v156 = v148;
    int64_t v157 = v147;
    int64_t v158 = v146;
    int64_t v159 = v145;
    int3_t v160 = v144;
    int3_t v161 = v143;
    __frontend_reg_store_fpr(v160, 0.0L);
    int64_t v162 = v30 + 48; // 0x4021d9
    float80_t * v163 = (float80_t *)v162; // 0x4021d9
    __frontend_reg_store_fpr(v161, *v163);
    float80_t v164 = __frontend_reg_load_fpr(v161); // 0x4021dd
    float80_t v165 = __frontend_reg_load_fpr(v160); // 0x4021dd
    __frontend_reg_store_fpr(v160, __frontend_reg_load_fpr(v160));
    v128 = v159;
    v129 = v158;
    v127 = v157;
    v126 = v156;
    v123 = v155;
    v124 = v154;
    v125 = v153;
    int64_t * v166; // 0x4019b0
    int64_t v167; // 0x4019b0
    int64_t v168; // 0x4019b0
    int64_t v169; // 0x4019b0
    int64_t v170; // 0x4019b0
    int64_t v171; // 0x4019b0
    int64_t v172; // 0x4019b0
    int64_t v173; // 0x4019b0
    int64_t v174; // 0x4019b0
    int64_t v175; // 0x4019b0
    int64_t v176; // 0x4019b0
    int64_t v177; // 0x4019b0
    int64_t v178; // 0x4019b0
    int64_t v179; // 0x4019b0
    int64_t v180; // 0x4023f0
    if (v164 < v165) {
        goto lab_0x40203f;
    } else {
        // 0x4021e7
        v128 = v159;
        v129 = v158;
        v127 = v157;
        v126 = v156;
        v123 = v155;
        v124 = v154;
        v125 = v153;
        if (g36 != 0) {
            goto lab_0x40203f;
        } else {
            // 0x4021f4
            v177 = v159;
            v179 = v158;
            v176 = v157;
            v175 = v156;
            v168 = v155;
            v169 = v154;
            v172 = v153;
            if (v157 != 0) {
                goto lab_0x401c98;
            } else {
                int64_t v181 = v149;
                int64_t v182 = (int64_t)g35; // 0x40220d
                int64_t v183 = -1; // 0x4019b0
                v174 = v156;
                v173 = 0;
                v167 = v155;
                v170 = v154;
                v171 = v153;
                while (v183 != 0) {
                    int64_t v184 = v182;
                    int64_t v185 = v183 - 1; // 0x40220d
                    v183 = v185;
                    v182 = v184 + (v186 ? -1 : 1);
                    if (*(char *)v184 == 0) {
                        v174 = v156;
                        v173 = 0;
                        v167 = v155;
                        v170 = v154;
                        v171 = v153;
                        if (v185 == -3) {
                            // 0x4023df
                            *(int64_t *)&v29 = v158;
                            int64_t * v187 = (int64_t *)(v30 - 8); // 0x4023e8
                            *v187 = *(int64_t *)(v30 + 72);
                            int64_t * v188 = (int64_t *)(v30 - 16); // 0x4023ec
                            *v188 = *(int64_t *)(v30 + 64);
                            v180 = v30 + 112;
                            int64_t v189 = function_405730(v180, (int64_t)"%0.Lf", v158, -3, v181, 0); // 0x4023f8
                            int64_t v190 = *(int64_t *)&v29; // 0x402402
                            __frontend_reg_store_fpr(v160, 0.0L);
                            if ((int32_t)v189 < 0) {
                                // 0x402365
                                __frontend_reg_store_fpr(v160, __frontend_reg_load_fpr(v160));
                                v178 = v180;
                                goto lab_0x402367;
                            } else {
                                // 0x40240e
                                __frontend_reg_store_fpr(v161, *v163);
                                *(int64_t *)&v29 = v190;
                                float80_t v191 = __frontend_reg_load_fpr(v161); // 0x402416
                                __frontend_reg_store_fpr(v161, v191 * __frontend_reg_load_fpr(v160));
                                float80_t v192 = __frontend_reg_load_fpr(v161); // 0x402418
                                float80_t v193 = __frontend_reg_load_fpr(v160); // 0x402418
                                __frontend_reg_store_fpr(v160, __frontend_reg_load_fpr(v160));
                                if (v192 != v193) {
                                    int64_t v194 = function_405630("inf"); // 0x402429
                                    int64_t * v195 = (int64_t *)(v30 + 120);
                                    *v195 = v194;
                                    v166 = v195;
                                    goto lab_0x402437;
                                } else {
                                    // 0x402337
                                    *v187 = *(int64_t *)(v30 + 56);
                                    *v188 = *(int64_t *)v162;
                                    int64_t v196 = v30 + 120;
                                    int64_t v197 = function_405730(v196, (int64_t)"%0.Lf", v190, -3, v181, 0); // 0x40234e
                                    v178 = v196;
                                    if ((int32_t)v197 >= 0) {
                                        // 0x402337
                                        v166 = (int64_t *)v196;
                                        goto lab_0x402437;
                                    } else {
                                        goto lab_0x402367;
                                    }
                                }
                            }
                        } else {
                            goto lab_0x402219;
                        }
                    }
                    v174 = v156;
                    v173 = 0;
                    v167 = v155;
                    v170 = v154;
                    v171 = v153;
                }
                goto lab_0x402219;
            }
        }
    }
  lab_0x401c8f:;
    int64_t v198 = v137;
    int64_t v199 = v136;
    int64_t v200 = v135;
    int64_t v201 = v133;
    int64_t v202 = v131;
    int64_t v203 = v130;
    v177 = v203;
    v179 = v202;
    v176 = v132;
    v175 = v201;
    v168 = v200;
    v169 = v199;
    v172 = v198;
    int64_t v204; // 0x4019b0
    int64_t v205; // 0x4019b0
    int64_t v206; // 0x4019b0
    int64_t v207; // 0x4019b0
    int64_t v208; // 0x4019b0
    int64_t v209; // 0x4019b0
    int64_t v210; // 0x4019b0
    if (v132 == 0) {
        // 0x402294
        v177 = v203;
        v179 = v202;
        v176 = (int64_t)"%Lg";
        v175 = v201;
        v168 = v200;
        v169 = v199;
        v172 = v198;
        if ((int32_t)v203 == 0x7fffffff) {
            goto lab_0x401c98;
        } else {
            int64_t v211 = v134;
            int32_t v212 = v198; // 0x402294
            int32_t v213 = v212 - (int32_t)v211; // 0x402294
            int64_t v214 = v213 < 0 == ((v213 ^ v212) & (int32_t)(v198 ^ v211)) < 0 ? v198 : v211;
            v177 = v203;
            v179 = v202;
            v176 = (int64_t)"%Lg";
            v175 = v201;
            v168 = v200;
            v169 = v199;
            v172 = v198;
            v209 = v203;
            v210 = v202;
            v208 = v201;
            v207 = v214 & 0xffffffff;
            v204 = v200;
            v205 = v199;
            v206 = v198;
            if ((int32_t)v214 != 0x7fffffff) {
                goto lab_0x402050;
            } else {
                goto lab_0x401c98;
            }
        }
    } else {
        goto lab_0x401c98;
    }
  lab_0x40203f:
    // 0x40203f
    v177 = v128;
    v179 = v129;
    v176 = v127;
    v175 = v126;
    v168 = v123;
    v169 = v124;
    v172 = v125;
    v209 = 0;
    v210 = v129;
    v208 = v126;
    v207 = 0;
    v204 = v123;
    v205 = v124;
    v206 = 0;
    if (v127 != 0) {
        goto lab_0x401c98;
    } else {
        goto lab_0x402050;
    }
  lab_0x401c98:;
    int64_t v215 = v172;
    v67 = v169;
    v66 = v168;
    int64_t v216 = v175;
    v62 = v176;
    int64_t v217 = v179;
    int64_t v218 = v177;
    float80_t * v219 = (float80_t *)(v30 + 96); // 0x401c98
    int3_t v220 = v84 - 1; // 0x401c98
    __frontend_reg_store_fpr(v220, *v219);
    int3_t v221 = v84 - 2; // 0x401c9c
    __frontend_reg_store_fpr(v221, 0.0L);
    float80_t v222 = __frontend_reg_load_fpr(v221); // 0x401c9e
    float80_t v223 = __frontend_reg_load_fpr(v220); // 0x401c9e
    bool v224 = false; // 0x401c9e
    bool v225 = false; // 0x401c9e
    if (v222 <= v223) {
        v224 = true;
        v225 = false;
        if (v222 >= v223) {
            v224 = v222 != v223;
            v225 = true;
        }
    }
    __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
    bool v226; // 0x4019b0
    if (v224 || v225) {
        // 0x401ca8
        __frontend_reg_store_fpr(v220, *(float80_t *)(v30 + 48));
        __frontend_reg_store_fpr(v221, *(float80_t *)(v30 + 64));
        float80_t v227 = __frontend_reg_load_fpr(v221); // 0x401cb0
        float80_t v228 = __frontend_reg_load_fpr(v220); // 0x401cb0
        bool v229 = false; // 0x401cb0
        bool v230 = false; // 0x401cb0
        if (v227 <= v228) {
            v229 = true;
            v230 = false;
            if (v227 >= v228) {
                v229 = v227 != v228;
                v230 = true;
            }
        }
        __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
        v226 = v229 | v230;
    } else {
        // 0x40227f
        __frontend_reg_store_fpr(v220, *(float80_t *)(v30 + 64));
        __frontend_reg_store_fpr(v221, *(float80_t *)(v30 + 48));
        float80_t v231 = __frontend_reg_load_fpr(v221); // 0x402287
        float80_t v232 = __frontend_reg_load_fpr(v220); // 0x402287
        bool v233 = false; // 0x402287
        bool v234 = false; // 0x402287
        if (v231 <= v232) {
            v233 = true;
            v234 = false;
            if (v231 >= v232) {
                v233 = v231 != v232;
                v234 = true;
            }
        }
        __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
        v226 = v233 | v234;
    }
    bool v235 = v226;
    if (!v235) {
        // 0x40226b
        return 0;
    }
    float80_t * v236 = (float80_t *)(v30 + 64); // 0x401cc1
    __frontend_reg_store_fpr(v220, *v236);
    float80_t v237 = __frontend_reg_load_fpr(v220); // 0x401cc5
    int64_t v238 = v30 + 32; // 0x401cc5
    float80_t * v239 = (float80_t *)v238; // 0x401cc5
    *v239 = v237;
    __frontend_reg_store_fpr(v220, 1.0L);
    float80_t v240 = __frontend_reg_load_fpr(v220); // 0x401ccb
    float80_t * v241 = (float80_t *)(v30 + 16); // 0x401ccb
    *v241 = v240;
    int64_t * v242 = (int64_t *)(v30 + 40); // 0x401e2a
    int64_t * v243 = (int64_t *)(v30 - 8); // 0x401e2a
    *v243 = *v242;
    int64_t * v244 = (int64_t *)v238; // 0x401e2e
    int64_t * v245 = (int64_t *)(v30 - 16); // 0x401e2e
    *v245 = *v244;
    char * v246 = (char *)v62; // 0x401e32
    int32_t v247 = __printf_chk(1, v246); // 0x401e32
    int64_t v248 = *v245; // 0x401e37
    int64_t v249 = *v243; // 0x401e39
    v64 = v248;
    v65 = v249;
    v63 = v216;
    v68 = v215;
    int64_t v250; // 0x4019b0
    int64_t v251; // 0x4019b0
    if (v247 < 0) {
        goto lab_0x4022c3_2;
    } else {
        int3_t v252 = v84 - 3;
        float80_t * v253 = (float80_t *)(v30 + 48);
        int64_t v254 = v30 + 128;
        str3 = (int64_t *)v254;
        int64_t v255 = v30 + 144;
        float80_t * v256 = (float80_t *)v255;
        int64_t v257 = v30 + 136;
        int64_t * v258 = (int64_t *)v257;
        bool v259 = !v235; // 0x4019b0
        int64_t v260 = v217; // 0x4019b0
        int64_t v261 = v218; // 0x4019b0
        int64_t v262 = v216;
        v263 = v215;
        v251 = v248;
        v250 = v249;
        v264 = v262;
        v265 = v263;
        while (!v259) {
            int64_t v266 = v261;
            int64_t v267 = v260;
            __frontend_reg_store_fpr(v220, *v241);
            __frontend_reg_store_fpr(v221, *v219);
            __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220) * __frontend_reg_load_fpr(v221));
            __frontend_reg_store_fpr(v252, *v236);
            __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v252) + __frontend_reg_load_fpr(v220));
            float80_t v268 = __frontend_reg_load_fpr(v221); // 0x401e5c
            __frontend_reg_store_fpr(v221, __frontend_reg_load_fpr(v220));
            __frontend_reg_store_fpr(v220, v268);
            __frontend_reg_store_fpr(v252, __frontend_reg_load_fpr(v221));
            *(float80_t *)&v29 = __frontend_reg_load_fpr(v252);
            __frontend_reg_store_fpr(v252, 0.0L);
            float80_t v269 = __frontend_reg_load_fpr(v252); // 0x401e65
            float80_t v270 = __frontend_reg_load_fpr(v220); // 0x401e65
            bool v271 = false; // 0x401e65
            bool v272 = false; // 0x401e65
            if (v269 <= v270) {
                v271 = true;
                v272 = false;
                if (v269 >= v270) {
                    v271 = v269 != v270;
                    v272 = true;
                }
            }
            __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v221));
            bool v273; // 0x4019b0
            if (v271 || v272) {
                // 0x401cd8
                __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
                __frontend_reg_store_fpr(v220, *v253);
                __frontend_reg_store_fpr(v221, *(float80_t *)&v29);
                float80_t v274 = __frontend_reg_load_fpr(v221); // 0x401ce1
                float80_t v275 = __frontend_reg_load_fpr(v220); // 0x401ce1
                bool v276 = false; // 0x401ce1
                bool v277 = false; // 0x401ce1
                if (v274 <= v275) {
                    v276 = true;
                    v277 = false;
                    if (v274 >= v275) {
                        v276 = v274 != v275;
                        v277 = true;
                    }
                }
                __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
                v273 = v276 | v277;
            } else {
                // 0x401e6f
                __frontend_reg_store_fpr(v221, *v253);
                float80_t v278 = __frontend_reg_load_fpr(v221); // 0x401e73
                float80_t v279 = __frontend_reg_load_fpr(v220); // 0x401e73
                bool v280 = false; // 0x401e73
                bool v281 = false; // 0x401e73
                if (v278 <= v279) {
                    v280 = true;
                    v281 = false;
                    if (v278 >= v279) {
                        v280 = v278 != v279;
                        v281 = true;
                    }
                }
                __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
                v273 = v280 | v281;
            }
            bool v282 = v273;
            int64_t v283 = v266; // 0x401cec
            int64_t v284 = v267; // 0x401cec
            int64_t v285 = v262; // 0x401cec
            int64_t v286 = v263; // 0x401cec
            if (!v282) {
                // 0x401cf2
                setlocale(LC_NUMERIC, "C");
                *v243 = *(int64_t *)(v30 | 8);
                *v245 = *(int64_t *)&v29;
                int64_t v287 = 0x100000000 * function_405730(v254, v62, v267, v266, v251, v250) >> 32; // 0x401d25
                setlocale(LC_NUMERIC, (char *)&g11);
                v178 = *v243;
                if ((int32_t)v287 < 0) {
                    // 0x402367
                    function_405650(v178);
                    // UNREACHABLE
                }
                // 0x401d37
                v288 = v287 - v66;
                *(char *)(*str3 + v288) = 0;
                if ((char)function_405690(*str3 + v67, 0, v255, 0x4030e0) == 0) {
                    goto lab_0x402248_2;
                }
                // 0x401d6d
                __frontend_reg_store_fpr(v220, *v253);
                __frontend_reg_store_fpr(v221, *v256);
                float80_t v289 = __frontend_reg_load_fpr(v221); // 0x401d78
                float80_t v290 = __frontend_reg_load_fpr(v220); // 0x401d78
                __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v220));
                if (v289 != v290) {
                    goto lab_0x402248_2;
                }
                // 0x401d88
                *v258 = 0;
                *v243 = *v242;
                *v245 = *v244;
                int64_t v291 = function_405730(v257, v62, v255, 0x4030e0, v251, v250); // 0x401da9
                v178 = v257;
                if ((int32_t)v291 < 0) {
                    // 0x402367
                    function_405650(v178);
                    // UNREACHABLE
                }
                int64_t str2 = *v258; // 0x401db8
                uint32_t strcmp_rc = strcmp((char *)str2, (char *)*str3); // 0x401dcb
                free((int64_t *)str2);
                free((int64_t *)*str3);
                v283 = *v243;
                v284 = *v245;
                v285 = str2;
                v286 = strcmp_rc;
                v264 = str2;
                v265 = 0;
                if (strcmp_rc == 0) {
                    // break -> 0x402255
                    break;
                }
            }
            int64_t v292 = v286;
            int64_t v293 = v285;
            v64 = v251;
            v65 = v250;
            v63 = v293;
            v68 = v292;
            if (fputs_unlocked(g35, g29) == -1) {
                goto lab_0x4022c3_2;
            }
            // 0x401e0d
            __frontend_reg_store_fpr(v220, 1.0L);
            __frontend_reg_store_fpr(v221, *v241);
            __frontend_reg_store_fpr(v220, __frontend_reg_load_fpr(v221) + __frontend_reg_load_fpr(v220));
            *v241 = __frontend_reg_load_fpr(v220);
            __frontend_reg_store_fpr(v220, *(float80_t *)&v29);
            *v239 = __frontend_reg_load_fpr(v220);
            *v243 = *v242;
            *v245 = *v244;
            int32_t v294 = __printf_chk(1, v246); // 0x401e32
            int64_t v295 = *v245; // 0x401e37
            int64_t v296 = *v243; // 0x401e39
            v259 = !v282;
            v260 = v284;
            v261 = v283;
            v64 = v295;
            v65 = v296;
            v63 = v293;
            v68 = v292;
            if (v294 < 0) {
                goto lab_0x4022c3_2;
            }
            v262 = v293;
            v263 = v292;
            v251 = v295;
            v250 = v296;
            v264 = v262;
            v265 = v263;
        }
        goto lab_0x402255;
    }
  lab_0x402050:;
    int64_t v297 = v206;
    int64_t v298 = v205;
    int64_t v299 = v204;
    int64_t v300 = v207;
    int64_t v301 = v208;
    v174 = v301;
    v173 = v300;
    v167 = v299;
    v170 = v298;
    v171 = v297;
    if (g36 == 0) {
        goto lab_0x402219;
    } else {
        int64_t v302 = (0x100000000 * (v300 - v297) >> 32) + v210; // 0x402065
        int64_t v303 = (0x100000000 * (v300 - v209) >> 32) + v301; // 0x40206f
        if ((int32_t)v209 != 0 == v300 == 0) {
            int64_t v304 = v302; // 0x4022be
            int64_t v305 = v303 - 1; // 0x4022be
        }
        uint64_t v306 = v303 + (int64_t)((int32_t)v209 == 0 == (v300 != 0));
        int64_t v307 = v302 + (int64_t)(v300 != 0 == (int32_t)v297 == 0);
        int64_t v308 = v306 < v307 ? v307 : v306; // 0x40209f
        v177 = v209;
        v179 = v307;
        v176 = (int64_t)"%Lg";
        v175 = v308;
        v168 = v299;
        v169 = v298;
        v172 = v297;
        if (v308 < 0x80000000) {
            // 0x4020b0
            __sprintf_chk((char *)&g34, 1, 28, "%%0%d.%dLf", v308 & 0xffffffff, v300);
            v177 = (int64_t)"%%0%d.%dLf";
            v179 = 28;
            v176 = (int64_t)&g34;
            v175 = v308;
            v168 = v299;
            v169 = v298;
            v172 = v297;
        }
        goto lab_0x401c98;
    }
  lab_0x402219:
    // 0x402219
    __sprintf_chk((char *)&g34, 1, 28, "%%.%dLf", v173 & 0xffffffff);
    v177 = (int64_t)"%%.%dLf";
    v179 = 28;
    v176 = (int64_t)&g34;
    v175 = v174;
    v168 = v167;
    v169 = v170;
    v172 = v171;
    goto lab_0x401c98;
  lab_0x402255:
    // 0x402255
    v64 = v251;
    v65 = v250;
    v63 = v264;
    v68 = v265;
    if (fputs_unlocked("\n", g29) != -1) {
      lab_0x40226b:
        // 0x40226b
        return 0;
    }
    goto lab_0x4022c3_2;
  lab_0x401ebc:;
    int64_t v309 = v44 + (int64_t)(v40 == 76); // 0x401ec7
    int64_t v310 = v309 + v13; // 0x401ecb
    char * str4 = (char *)v310; // 0x401ecf
    char c = *str4; // 0x401ed4
    int64_t v311 = v13; // 0x401ed9
    int64_t v312; // 0x4019b0
    int64_t v313; // 0x4019b0
    if (c == 0) {
        goto lab_0x4024be;
    } else {
        // 0x401edf
        if (strchr("efgaEFGA", (int32_t)c) != NULL) {
            // 0x401f10
            v313 = v309 + 1;
            v312 = 0;
            goto lab_0x401f10_2;
        } else {
            int64_t v314 = function_404e40(v13); // 0x40248c
            error(1, (int32_t)"format %s has unknown %%%c directive" ^ (int32_t)"format %s has unknown %%%c directive", dcgettext(NULL, "format %s has unknown %%%c directive", 5));
            v311 = v314;
            goto lab_0x4024be;
        }
    }
  lab_0x4024be:
    // 0x4024be
    function_404e40(v311);
    error(1, (int32_t)"format %s ends in %%" ^ (int32_t)"format %s ends in %%", dcgettext(NULL, "format %s ends in %%", 5));
    goto lab_0x4024ee;
  lab_0x4024ee:
    // 0x4024ee
    error(0, (int32_t)"format string may not be specified when printing equal width strings" ^ (int32_t)"format string may not be specified when printing equal width strings", dcgettext(NULL, "format string may not be specified when printing equal width strings", 5));
    function_402a40(1);
    // UNREACHABLE
  lab_0x401f10_2:;
    int64_t v315 = v312;
    int64_t v316 = v313;
    int64_t v317 = v316 + v13;
    char v318 = *(char *)v317; // 0x401f10
    int64_t v319; // 0x4019b0
    if (v318 != 37) {
        // 0x401f00
        v319 = 1;
        if (v318 == 0) {
            int64_t v320 = function_405400(v316 + 2); // 0x401f2e
            int64_t dest_mem = (int64_t)memcpy((int64_t *)v320, (int64_t *)v13, (int32_t)v44); // 0x401f3c
            int64_t v321 = v44 + dest_mem;
            *(char *)v321 = 76;
            strcpy((char *)(v321 + 1), str4);
            if (g36 != 0) {
                goto lab_0x4024ee;
            } else {
                // 0x401f67
                v33 = v50;
                v34 = dest_mem;
                v35 = v310;
                v36 = dest_mem;
                v37 = v315;
                v38 = v49 - 1;
                v39 = g26;
                goto lab_0x401b82;
            }
        } else {
            goto lab_0x401f09;
        }
    } else {
        // 0x401f18
        v319 = 2;
        if (*(char *)(v317 + 1) != 37) {
            // 0x40236c
            function_404e40(v13);
            error(1, (int32_t)"format %s has too many %% directives" ^ (int32_t)"format %s has too many %% directives", dcgettext(NULL, "format %s has too many %% directives", 5));
            goto lab_0x40239c;
        } else {
            goto lab_0x401f09;
        }
    }
  lab_0x401f09:
    // 0x401f09
    v313 = v319 + v316;
    v312 = v315 + 1;
    goto lab_0x401f10_2;
  lab_0x402437:;
    int64_t v322 = *(int64_t *)&v29;
    int64_t * v323 = v166;
    int64_t * v324 = (int64_t *)v180; // 0x402437
    int64_t v325 = *v324; // 0x402437
    int64_t v326 = v322; // 0x40243f
    int64_t v327 = v325; // 0x40243f
    if (*(char *)v325 == 45) {
        goto lab_0x402465;
    } else {
        int64_t v328 = *v323; // 0x402441
        v326 = v322;
        v327 = v325;
        if (*(char *)v328 == 45) {
            goto lab_0x402465;
        } else {
            // 0x40244b
            *(int64_t *)&v29 = v322;
            if ((char)function_402680(v325, v328) != 0) {
                goto lab_0x40226b;
            } else {
                // 0x40245c
                v326 = *(int64_t *)&v29;
                v327 = *v324;
                goto lab_0x402465;
            }
        }
    }
  lab_0x402465:
    // 0x402465
    *(int64_t *)&v29 = v326;
    free((int64_t *)v327);
    free((int64_t *)*v323);
    v209 = 0;
    v210 = *(int64_t *)&v29;
    v208 = v156;
    v207 = 0;
    v204 = v155;
    v205 = v154;
    v206 = 0;
    goto lab_0x402050;
}
// Address range: 0x402520 - 0x40254b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402520
    int64_t v1; // 0x402520
    __libc_start_main(0x4019b0, (int32_t)a4, (char **)&v1, (void (*)())0x409810, (void (*)())0x409870, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40254b - 0x40256a
int64_t function_40254b(void) {
    // 0x40254b
    return &g28;
}
// Address range: 0x40256a - 0x4025a1
int64_t function_40256a(void) {
    // 0x40256a
    return 0;
}
// Address range: 0x4025a1 - 0x4025f8
int64_t function_4025a1(void) {
    // 0x4025a1
    if (g32 != 0) {
        // 0x4025f7
        int64_t result; // 0x4025a1
        return result;
    }
    int64_t v1 = g33; // 0x4025d4
    int64_t result2; // 0x4025e6
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4025e6
        result2 = function_40254b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x4025d6
        v1++;
    }
    // 0x4025ca
    g33 = v1;
    // 0x4025e6
    result2 = function_40254b();
    g32 = 1;
    return result2;
}
// Address range: 0x4025f8 - 0x4025fd
int64_t function_4025f8(void) {
    // 0x4025f8
    return function_40256a();
}
// Address range: 0x402600 - 0x402637
int64_t function_402600(int64_t str, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = str;
    if (v1 != 57 && (int32_t)v1 >= 57) {
        // 0x402636
        return 0;
    }
    int64_t v2 = str; // 0x402615
    int64_t v3 = -1; // 0x402615
    int64_t v4 = 0; // 0x402615
    while (v3 != 0) {
        int64_t v5 = v2;
        v3--;
        bool v6; // 0x402600
        v2 = v5 + (v6 ? -1 : 1);
        v4 = v3;
        if (*(char *)v5 == 0) {
            // break -> 
            break;
        }
        v4 = 0;
    }
    int64_t ini_seg_bytes = strspn((char *)str, "0123456789"); // 0x402629
    return ini_seg_bytes & -256 | (int64_t)(v4 + 2 == -ini_seg_bytes);
}
// Address range: 0x402640 - 0x402680
int64_t function_402640(void) {
    // 0x402640
    clearerr_unlocked(g29);
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    return &g55;
}
// Address range: 0x402680 - 0x402a40
int64_t function_402680(int64_t a1, int64_t a2) {
    // 0x402680
    bool v1; // 0x402680
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)"inf"; // 0x4026a1
    int64_t v4 = a2; // 0x4026a1
    int64_t v5 = 4; // 0x4026a1
    unsigned char v6 = *(char *)v4; // 0x4026a1
    char v7 = *(char *)v3; // 0x4026a1
    v3 += v2;
    v4 += v2;
    char v8 = v7; // 0x4026a1
    bool v9 = false; // 0x4026a1
    while (v6 == v7) {
        v5--;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v3 += v2;
        v4 += v2;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t str = a1; // 0x4026b3
    if ((char)v3 == 48) {
        int64_t v11 = a1;
        int64_t v12 = v11 + 1; // 0x4026c3
        char v13 = *(char *)v12; // 0x4026c3
        while (v13 == 48) {
            // 0x4026c3
            v11 = v12;
            v12 = v11 + 1;
            v13 = *(char *)v12;
        }
        // 0x4026d0
        str = v12 == a1 | v13 != 0 ? v12 : v11;
    }
    int64_t v14 = a2; // 0x4026e8
    if ((char)v4 == 48) {
        int64_t v15 = a2;
        int64_t v16 = v15 + 1; // 0x4026f3
        char v17 = *(char *)v16; // 0x4026f3
        while (v17 == 48) {
            // 0x4026f3
            v15 = v16;
            v16 = v15 + 1;
            v17 = *(char *)v16;
        }
        // 0x402700
        v14 = v16 == a2 | v17 != 0 ? v16 : v15;
    }
    int32_t len = strlen((char *)str); // 0x40271e
    uint64_t v18 = (int64_t)len; // 0x40271e
    uint64_t v19 = v18 + 1; // 0x402723
    int64_t v20 = v19 >= 31 ? v19 : 31; // 0x402731
    int64_t v21 = v14; // 0x402738
    int64_t v22 = -1; // 0x402738
    int64_t v23; // 0x402680
    int64_t v24; // 0x402680
    int64_t v25; // 0x402680
    int64_t v26; // 0x402680
    int64_t str3; // 0x402680
    int64_t v27; // 0x402680
    int64_t v28; // 0x402680
    int64_t v29; // 0x402680
    int64_t v30; // 0x402680
    int64_t result; // 0x402680
    if ((v6 >= v10 && !v9) == v6 < v10) {
        int64_t v31 = v20 + 1; // 0x40282d
        int64_t v32 = function_405400(v31); // 0x402839
        int64_t * dest_mem = memcpy((int64_t *)(v20 - v18 + v32), (int64_t *)str, (int32_t)v19); // 0x402854
        v28 = 0;
        str3 = 0;
        v30 = v32;
        v26 = 0;
        v25 = v20;
        v23 = v31;
        v24 = (int64_t)dest_mem;
        goto lab_0x402877;
    } else {
        int64_t v33 = 0; // 0x402756
        while (v22 != 0) {
            int64_t v34 = v21;
            v22--;
            v21 = v34 + v2;
            v33 = v22;
            if (*(char *)v34 == 0) {
                // break -> 
                break;
            }
            v33 = 0;
        }
        uint64_t v35 = -2 - v33; // 0x40275b
        int64_t v36 = v20 < v35 ? v35 : v20; // 0x40276c
        int64_t v37 = v36 + 1; // 0x402770
        int64_t v38 = function_405400(v37); // 0x402777
        int64_t * dest_mem2 = memcpy((int64_t *)(v38 - v18 + v36), (int64_t *)str, (int32_t)v19); // 0x402792
        int64_t v39 = (int64_t)dest_mem2; // 0x402792
        int64_t v40 = function_405400(v37); // 0x4027a2
        int64_t * dest_mem3 = memcpy((int64_t *)(v36 - v35 + v40), (int64_t *)v14, -1 - (int32_t)v33); // 0x4027c7
        int64_t v41 = (int64_t)dest_mem3; // 0x4027c7
        v28 = v40;
        str3 = v41;
        v30 = v38;
        v26 = v35;
        v25 = v36;
        v23 = v37;
        v24 = v39;
        if (v35 > v18) {
            goto lab_0x402877;
        } else {
            // 0x4027dc
            v27 = v40;
            v29 = v38;
            result = 0;
            if (v35 < v18) {
                goto lab_0x4027f8;
            } else {
                // 0x4027de
                v27 = v40;
                v29 = v38;
                result = 0;
                v28 = v40;
                str3 = v41;
                v30 = v38;
                v26 = v35;
                v25 = v36;
                v23 = v37;
                v24 = v39;
                if (strcmp((char *)dest_mem2, (char *)dest_mem3) < 1) {
                    goto lab_0x402877;
                } else {
                    goto lab_0x4027f8;
                }
            }
        }
    }
  lab_0x402992:;
    // 0x402992
    int64_t v42; // 0x402680
    int64_t v43 = v42;
    int64_t v44; // 0x402680
    int64_t v45 = 2 * v44; // 0x402992
    int64_t v46 = v45 | 1; // 0x40299a
    int64_t v47; // 0x402680
    int64_t v48 = function_405460(v47, v46); // 0x4029a6
    int64_t dest_mem4 = (int64_t)memmove((int64_t *)(v48 + v43), (int64_t *)v48, (int32_t)v43 + 1); // 0x4029bb
    int64_t v49 = 2 * v46; // 0x4029c8
    int64_t v50; // 0x402680
    int64_t v51 = v50; // 0x4029d0
    int64_t v52 = v48; // 0x4029d0
    int64_t v53; // 0x402680
    int64_t v54 = v53; // 0x4029d0
    int64_t v55 = v45; // 0x4029d0
    int64_t v56 = v43; // 0x4029d0
    int64_t data2; // 0x402680
    int64_t v57 = data2; // 0x4029d0
    int64_t v58; // 0x4028fe
    int64_t v59 = v58; // 0x4029d0
    int64_t v60 = dest_mem4; // 0x4029d0
    if (v49 > v53) {
        int64_t v61 = function_405460(data2, v49); // 0x4029e4
        v51 = v61 + v49;
        v52 = v48;
        v54 = v49;
        v55 = v45;
        v56 = v43;
        v57 = v61;
        v59 = v58 - data2 + v61;
        v60 = dest_mem4;
    }
    goto lab_0x40292f;
  lab_0x40292f:;
    int64_t data = v57;
    int64_t v62 = (int64_t)mempcpy((int64_t *)v59, (int64_t *)v60, (int32_t)v56); // 0x402938
    int64_t v63 = v62; // 0x40294e
    if (v51 + -1 - v56 < v62) {
        int32_t v64 = fwrite_unlocked((int64_t *)data, (int32_t)(v62 - data), 1, g29); // 0x402969
        v63 = data;
        if (v64 != 1) {
            // 0x402a35
            return function_402640();
        }
    }
    int64_t v65 = v51; // 0x402680
    int64_t v66 = v52; // 0x402680
    int64_t v67 = v54; // 0x402680
    int64_t v68 = v63; // 0x402680
    int64_t v69 = v55; // 0x402680
    int64_t v70 = v56; // 0x402680
    int64_t v71 = data; // 0x402680
    int64_t v72 = v60; // 0x402680
    goto lab_0x4028c0;
  lab_0x402877:;
    uint64_t v81 = 2 * v23; // 0x402877
    int64_t v82 = v81 >= 0x2000 ? v81 : 0x2000; // 0x402886
    int64_t v83 = function_405400(v82); // 0x402892
    int64_t * v84 = mempcpy((int64_t *)v83, (int64_t *)v24, len); // 0x4028b0
    v65 = v82 + v83;
    v66 = v30;
    v67 = v82;
    v68 = (int64_t)v84;
    v69 = v25;
    v70 = v18;
    v71 = v83;
    v72 = v24;
    int64_t v74; // 0x402680
    while (true) {
      lab_0x4028c0:;
        int64_t str2 = v72;
        data2 = v71;
        uint64_t v73 = v70;
        v44 = v69;
        v74 = v68;
        v53 = v67;
        v47 = v66;
        v50 = v65;
        if ((v6 >= v10 && !v9) != v6 < v10 && v73 >= v26) {
            if (v73 > v26) {
                // break -> 0x402a07
                break;
            }
            // 0x4028d8
            if (strcmp((char *)str2, (char *)str3) >= 0) {
                // break -> 0x402a07
                break;
            }
        }
        // 0x4028f7
        v58 = v74 + 1;
        *(char *)v74 = *g35;
        int64_t v75 = str2 - 1; // 0x402907
        int64_t v76 = v75 + v73;
        char * v77 = (char *)v76;
        unsigned char v78 = *v77; // 0x40291d
        while (v78 > 56) {
            int64_t v79 = v76 - 1; // 0x402910
            *v77 = 48;
            if (v79 < str2) {
                int64_t v80 = v73 + 1; // 0x402980
                *(char *)v75 = 49;
                v51 = v50;
                v52 = v47;
                v54 = v53;
                v55 = v44;
                v56 = v80;
                v57 = data2;
                v59 = v58;
                v60 = v75;
                v42 = v80;
                if (v44 != v80) {
                    goto lab_0x40292f;
                } else {
                    goto lab_0x402992;
                }
            }
            v76 = v79;
            v77 = (char *)v76;
            v78 = *v77;
        }
        // 0x402925
        *v77 = v78 + 1;
        v51 = v50;
        v52 = v47;
        v54 = v53;
        v55 = v44;
        v56 = v73;
        v57 = data2;
        v59 = v58;
        v60 = str2;
        v42 = v44;
        if (v44 == v73) {
            goto lab_0x402992;
        } else {
            goto lab_0x40292f;
        }
    }
    // 0x402a07
    *(char *)v74 = 10;
    v27 = v28;
    v29 = v47;
    result = 1;
    if (fwrite_unlocked((int64_t *)data2, (int32_t)(v74 + 1 - data2), 1, g29) != 1) {
        // 0x402a35
        return function_402640();
    }
    goto lab_0x4027f8;
  lab_0x4027f8:
    // 0x4027f8
    free((int64_t *)v29);
    free((int64_t *)v27);
    return result;
}
// Address range: 0x402a40 - 0x402dbd
int64_t function_402a40(int32_t status) {
    // 0x402a40
    if (status != 0) {
        // 0x402a5a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402a7f
        exit(status);
        // UNREACHABLE
    }
    // 0x402a86
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... LAST\n  or:  %s [OPTION]... FIRST LAST\n  or:  %s [OPTION]... FIRST INCREMENT LAST\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print numbers from FIRST to LAST, in steps of INCREMENT.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -f, --format=FORMAT      use printf style floating-point FORMAT\n  -s, --separator=STRING   use STRING to separate numbers (default: \\n)\n  -w, --equal-width        equalize width by padding with leading zeroes\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nIf FIRST or INCREMENT is omitted, it defaults to 1.  That is, an\nomitted INCREMENT defaults to 1 even when LAST is smaller than FIRST.\nThe sequence of numbers ends when the sum of the current number and\nINCREMENT would become greater than LAST.\nFIRST, INCREMENT, and LAST are interpreted as floating point values.\nINCREMENT is usually positive if FIRST is smaller than LAST, and\nINCREMENT is usually negative if FIRST is greater than LAST.\nINCREMENT must not be 0; none of FIRST, INCREMENT and LAST may be NaN.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "FORMAT must be suitable for printing one argument of type 'double';\nit defaults to %.PRECf if FIRST, INCREMENT, and LAST are all fixed point\ndecimal numbers with maximum precision PREC, and to %g otherwise.\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402b9f
    bool v2; // 0x402a40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402c20
    int64_t v6 = *(int64_t *)v5; // 0x402c24
    int64_t v7 = 4; // 0x402c2a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"seq";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402c36
        char v11 = *(char *)v9; // 0x402c36
        char v12 = v11; // 0x402c36
        bool v13 = false; // 0x402c36
        while (v10 == v11) {
            // 0x402c2c
            v7--;
            int64_t v14 = v9 + v3; // 0x402c36
            int64_t v15 = v8 + v3; // 0x402c36
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
            // break -> 0x402c42
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x402c42
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402d54;
        } else {
            // 0x402d3e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ca4;
            } else {
                goto lab_0x402d54;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402ca4;
        } else {
            // 0x402c8a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d93
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ca4;
            } else {
                goto lab_0x402ca4;
            }
        }
    }
  lab_0x402d54:
    // 0x402d54
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402ce4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402a7f
    exit(status);
    // UNREACHABLE
  lab_0x402ca4:
    // 0x402ca4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402ce4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402a7f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402dc0 - 0x4030d8
int64_t function_402dc0(int64_t * a1, int64_t a2) {
    // 0x402dc0
    float80_t v1; // bp-88, 0x402dc0
    if ((char)function_405690(a2, 0, (int64_t)&v1, 0x4030e0) == 0) {
        // 0x4030a1
        function_404e40(a2);
        error(0, (int32_t)"invalid floating point argument: %s" ^ (int32_t)"invalid floating point argument: %s", dcgettext(NULL, "invalid floating point argument: %s", 5));
        function_402a40(1);
        // UNREACHABLE
    }
    // 0x402df0
    int3_t v2; // 0x402dc0
    int3_t v3 = v2 - 1; // 0x402df0
    __frontend_reg_store_fpr(v3, v1);
    int3_t v4 = v2 - 2; // 0x402df4
    __frontend_reg_store_fpr(v4, __frontend_reg_load_fpr(v3));
    float80_t v5 = __frontend_reg_load_fpr(v4); // 0x402df6
    if (__frontend_reg_load_fpr(v3) != __frontend_reg_load_fpr(v3)) {
        // 0x403053
        function_404e20(1, a2);
        function_404e20(0, (int64_t)"not-a-number");
        error(0, (int32_t)"invalid %s argument: %s" ^ (int32_t)"invalid %s argument: %s", dcgettext(NULL, "invalid %s argument: %s", 5));
        function_402a40(1);
        // UNREACHABLE
    }
    int64_t result = (int64_t)a1;
    int16_t * v6 = *__ctype_b_loc(); // 0x402e0c
    int64_t v7 = a2;
    char * str = (char *)v7;
    unsigned char v8 = *str; // 0x402e1c
    char v9 = *(char *)((int64_t)v6 + 1 + 2 * (int64_t)v8); // 0x402e1f
    int64_t v10 = v7 + 1; // 0x402e24
    while (v8 == 43 || (v9 & 32) != 0) {
        // 0x402e1c
        v7 = v10;
        str = (char *)v7;
        v8 = *str;
        v9 = *(char *)((int64_t)v6 + 1 + 2 * (int64_t)v8);
        v10 = v7 + 1;
    }
    char * found_char_pos = strchr(str, 46); // 0x402e44
    int32_t v11 = 0x7fffffff; // 0x402e4f
    if (found_char_pos == NULL) {
        // 0x402faa
        v11 = strchr(str, 112) != NULL ? 0x7fffffff : 0;
    }
    char v12 = *(char *)(v7 + (int64_t)strcspn(str, "xX")); // 0x402e62
    int128_t v13 = 0; // 0x402e66
    int64_t v14; // 0x402dc0
    int64_t v15; // 0x402dc0
    int32_t v16; // 0x402dc0
    int32_t v17; // 0x402dc0
    int32_t v18; // 0x402dc0
    int64_t v19; // 0x402dc0
    int64_t v20; // 0x402e44
    int64_t v21; // 0x402dc0
    int64_t v22; // 0x402e97
    int32_t ini_seg_bytes; // 0x402eb3
    if (v12 != 0) {
        goto lab_0x402f84;
    } else {
        // 0x402e6c
        __frontend_reg_store_fpr(v3, 0.0L);
        __frontend_reg_store_fpr(v4, v5);
        __frontend_reg_store_fpr(v4, __frontend_reg_load_fpr(v4) * __frontend_reg_load_fpr(v3));
        float80_t v23 = __frontend_reg_load_fpr(v4); // 0x402e73
        float80_t v24 = __frontend_reg_load_fpr(v3); // 0x402e73
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3));
        v13 = 0;
        if (v23 != v24) {
            goto lab_0x402f84;
        } else {
            // 0x402e83
            v20 = (int64_t)found_char_pos;
            bool v25; // 0x402dc0
            v21 = v25 ? -1 : 1;
            int64_t v26 = -1; // 0x402e8f
            int64_t v27 = v7; // 0x402dc0
            int64_t v28 = 0; // 0x402e8f
            while (v26 != 0) {
                int64_t v29 = v27;
                v26--;
                v27 = v29 + v21;
                v28 = v26;
                if (*(char *)v29 == 0) {
                    // break -> 
                    break;
                }
                v28 = 0;
            }
            v22 = -2 - v28;
            v19 = v22;
            v18 = v11;
            v14 = 0;
            if (found_char_pos == NULL) {
                goto lab_0x402eeb;
            } else {
                // 0x402ea9
                ini_seg_bytes = strcspn((char *)(v20 + 1), "eE");
                v16 = v11;
                if (ini_seg_bytes > -1) {
                    // 0x402fef
                    v16 = ini_seg_bytes;
                    v17 = 0;
                    v15 = -1;
                    if (ini_seg_bytes == 0) {
                        goto lab_0x402ee3;
                    } else {
                        goto lab_0x402ec7;
                    }
                } else {
                    goto lab_0x402ec7;
                }
            }
        }
    }
  lab_0x402f84:;
    int128_t v30 = __asm_movdqa((int128_t)(int64_t)(float64_t)v1); // 0x402f84
    int128_t v31 = __asm_movdqa(v13); // 0x402f8a
    *(int128_t *)a1 = (int128_t)__asm_movaps(v30);
    *(int128_t *)(result + 16) = (int128_t)__asm_movaps(v31);
    return result;
  lab_0x402eeb:;
    uint64_t v32 = v14;
    int32_t v33 = v18;
    char * found_char_pos2 = strchr(str, 101); // 0x402ef3
    char * v34 = found_char_pos2; // 0x402efe
    if (found_char_pos2 == NULL) {
        char * found_char_pos3 = strchr(str, 69); // 0x402fdd
        v34 = found_char_pos3;
        v13 = v19;
        if (found_char_pos3 == NULL) {
            goto lab_0x402f84;
        } else {
            goto lab_0x402f04;
        }
    } else {
        goto lab_0x402f04;
    }
  lab_0x402f04:;
    int64_t v35 = (int64_t)v34;
    int32_t str_as_l = strtol((char *)(v35 + 1), NULL, 10); // 0x402f0f
    uint64_t v36 = (int64_t)str_as_l; // 0x402f0f
    int64_t v37 = v35 - v7; // 0x402f1a
    int64_t v38 = -1; // 0x402f24
    int64_t v39 = v7; // 0x402f24
    int64_t v40; // 0x402dc0
    int64_t v41; // 0x402dc0
    if (str_as_l < 0) {
        int64_t v42 = 0; // 0x403015
        while (v38 != 0) {
            int64_t v43 = v39;
            int64_t v44 = v38 - 1; // 0x403015
            v38 = v44;
            v39 = v43 + v21;
            v42 = v44;
            if (*(char *)v43 == 0) {
                // break -> 
                break;
            }
            v42 = 0;
        }
        int64_t v45 = v19 + 2 + v37 + v42; // 0x403017
        int64_t v46; // 0x402dc0
        if (found_char_pos == NULL) {
            // 0x40303d
            v46 = v45 + 1;
        } else {
            // 0x403021
            v46 = v45 + (int64_t)(v20 + 1 == v35);
        }
        // 0x403035
        v40 = v46;
        v41 = -v36;
    } else {
        int64_t v47 = v33; // 0x402f2a
        int64_t v48 = v47 - v36; // 0x402f30
        int32_t v49 = v48 < 0 == ((v48 ^ v47) & (int64_t)(str_as_l ^ v33)) < 0 == (v48 != 0) ? str_as_l : v33; // 0x402f33
        int64_t v50 = -1; // 0x402f4a
        int64_t v51 = v7; // 0x402f4a
        int64_t v52 = 0; // 0x402f4a
        while (v50 != 0) {
            int64_t v53 = v51;
            v50--;
            v51 = v53 + v21;
            v52 = v50;
            if (*(char *)v53 == 0) {
                // break -> 0x402f75
                break;
            }
            v52 = 0;
        }
        // 0x402f75
        v40 = v19 + 2 + v37 + (int64_t)(!((found_char_pos == NULL | v32 == 0)) == v33 == v49) + v52;
        v41 = v36 - (v32 < v36 ? v32 : v36);
    }
    // 0x402f7f
    v13 = v41 + v40;
    goto lab_0x402f84;
  lab_0x402ec7:
    // 0x402ec7
    v17 = v16;
    v15 = 1;
    if (v7 != v20) {
        char v54 = *(char *)(v20 - 1); // 0x402ed0
        v17 = v16;
        v15 = !((v54 == 57 | (int32_t)v54 < 57));
    }
    goto lab_0x402ee3;
  lab_0x402ee3:
    // 0x402ee3
    v19 = v15 + v22;
    v18 = v17;
    v14 = ini_seg_bytes;
    goto lab_0x402eeb;
}
// Address range: 0x4030e0 - 0x403154
int64_t function_4030e0(int64_t a1, int64_t a2, int64_t a3) {
    struct __locale_struct * v1 = g37;
    float80_t v2; // 0x403110
    if (v1 != NULL) {
        // 0x403104
        v2 = strtold_l((char *)a1, (char **)a2, v1);
        return (float64_t)v2;
    }
    struct __locale_struct * v3 = newlocale(0x1fbf, "C", NULL); // 0x40313c
    g37 = v3;
    if (v3 != NULL) {
        // 0x403104
        v2 = strtold_l((char *)a1, (char **)a2, v3);
        return (float64_t)v2;
    }
    if (a2 != 0) {
        // 0x40311d
        *(int64_t *)a2 = a1;
    }
    // 0x403122
    return (int64_t)v3;
}
// Address range: 0x403160 - 0x403168
int64_t function_403160(int64_t a1) {
    // 0x403160
    g39 = a1;
    int64_t result; // 0x403160
    return result;
}
// Address range: 0x403170 - 0x403178
int64_t function_403170(int64_t a1) {
    // 0x403170
    g38 = a1;
    int64_t result; // 0x403170
    return result;
}
// Address range: 0x403180 - 0x40321e
int64_t function_403180(void) {
    // 0x403180
    int32_t * err_num; // 0x403196
    if ((int32_t)function_406670((int64_t)g29) == 0) {
        goto lab_0x4031ac;
    } else {
        // 0x403196
        err_num = __errno_location();
        if (g38 == 0) {
            goto lab_0x4031c3;
        } else {
            // 0x4031a7
            if (*err_num != 32) {
                goto lab_0x4031c3;
            } else {
                goto lab_0x4031ac;
            }
        }
    }
  lab_0x4031ac:;
    int64_t result = function_406670((int64_t)g31); // 0x4031b3
    if ((int32_t)result == 0) {
        // 0x4031bc
        return result;
    }
    // 0x4031fe
    _exit(g18);
    // UNREACHABLE
  lab_0x4031c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4031cf
    if (g39 == 0) {
        // 0x403209
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4031e3
        error(0, *err_num, "%s: %s", (char *)function_404c90((int64_t)g39), v1);
    }
    // 0x4031fe
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403220 - 0x4032b9
int64_t function_403220(int64_t str) {
    // 0x403220
    if (str == 0) {
        // 0x403299
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40322e
    int64_t result = (int64_t)found_char_pos; // 0x40322e
    if (found_char_pos == NULL) {
        // 0x403289
        g40 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403238
    if (v1 - str < 7) {
        // 0x403289
        g40 = str;
        g30 = str;
        return result;
    }
    // 0x403248
    bool v2; // 0x403220
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403220
    int64_t v5 = result - 6; // 0x403220
    int64_t v6 = 7; // 0x403256
    unsigned char v7 = *(char *)v5; // 0x403256
    char v8 = *(char *)v4; // 0x403256
    char v9 = v8; // 0x403256
    bool v10 = false; // 0x403256
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
    int64_t v12 = (int64_t)"lt-"; // 0x403260
    int64_t v13 = v1; // 0x403260
    int64_t v14 = 3; // 0x403260
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403289
        g40 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403272
    char v16 = *(char *)v12; // 0x403272
    char v17 = v16; // 0x403272
    bool v18 = false; // 0x403272
    while (v15 == v16) {
        // 0x403262
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
    int64_t v20 = v1; // 0x40327c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40327e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x403289
    g40 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x4032c0 - 0x4033b2
int64_t function_4032c0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4032d4
    int64_t result = (int64_t)v1; // 0x4032d4
    if (result != a1) {
        // 0x4032e1
        return result;
    }
    int64_t v2 = function_406730(); // 0x4032f0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4033a6
    if (v3 == 85) {
        // 0x403300
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403398
            result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x40332e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x40333b
        // 0x4032e1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403398
        result2 = (int32_t)a2 != 9 ? (int64_t)&g2 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40337d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40338a
    // 0x4032e1
    return result4;
}
// Address range: 0x4033c0 - 0x403417
int64_t function_4033c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4033c0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403408
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403417 - 0x4045e1
int64_t function_403417(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403461
    int64_t v3 = 0; // 0x403461
    int64_t v4; // 0x403417
    int64_t v5; // 0x403417
    int64_t v6; // 0x403417
    int64_t v7; // 0x403417
    int64_t v8; // 0x403417
    int64_t v9; // 0x403417
    int64_t v10; // 0x403417
    int64_t v11; // 0x403417
    int64_t v12; // 0x403417
    int64_t v13; // 0x403417
    int64_t v14; // 0x403417
    int64_t v15; // 0x403417
    int64_t v16; // 0x403417
    int64_t v17; // 0x403417
    int64_t v18; // 0x403417
    int64_t result; // 0x403417
    int64_t v19; // 0x403417
    int32_t wc; // bp+132, 0x403417
    int64_t ps; // bp+136, 0x403417
    char v20; // 0x4039d0
    int64_t v21; // 0x4039d0
    int64_t v22; // 0x403d78
    int64_t v23; // 0x403417
    int64_t v24; // 0x403d97
    int32_t v25; // 0x403417
    while (true) {
      lab_0x403468_2:
        // 0x403468
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403417
        int64_t v27; // 0x40349c
        while (true) {
          lab_0x403468:
            // 0x403468
            v5 = v26;
            bool v28 = v15 == v5; // 0x403473
            if (v15 == -1) {
                // 0x403475
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403483
            if (v28) {
                // break (via goto) -> 0x403be8
                goto lab_0x403be8;
            }
            // 0x40348c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g54 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403a7b
                    if (v25 % 2 == 0) {
                        goto lab_0x4035c1;
                    }
                    // 0x403e9d
                    v26 = v5 + 1;
                    goto lab_0x403468;
                }
                case 7: {
                    goto lab_0x4035c1;
                }
                case 8: {
                    goto lab_0x4035c1;
                }
                case 9: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4035c1;
                }
                case 12: {
                    goto lab_0x4035c1;
                }
                case 13: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40358d;
                }
                case 36: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4035c1;
                }
                case 38: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4035c1;
                }
                case 44: {
                    goto lab_0x4035c1;
                }
                case 45: {
                    goto lab_0x4035c1;
                }
                case 46: {
                    goto lab_0x4035c1;
                }
                case 47: {
                    goto lab_0x4035c1;
                }
                case 48: {
                    goto lab_0x4035c1;
                }
                case 49: {
                    goto lab_0x4035c1;
                }
                case 50: {
                    goto lab_0x4035c1;
                }
                case 51: {
                    goto lab_0x4035c1;
                }
                case 52: {
                    goto lab_0x4035c1;
                }
                case 53: {
                    goto lab_0x4035c1;
                }
                case 54: {
                    goto lab_0x4035c1;
                }
                case 55: {
                    goto lab_0x4035c1;
                }
                case 56: {
                    goto lab_0x4035c1;
                }
                case 57: {
                    goto lab_0x4035c1;
                }
                case 58: {
                    goto lab_0x4035c1;
                }
                case 59: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4035c1;
                }
                case 66: {
                    goto lab_0x4035c1;
                }
                case 67: {
                    goto lab_0x4035c1;
                }
                case 68: {
                    goto lab_0x4035c1;
                }
                case 69: {
                    goto lab_0x4035c1;
                }
                case 70: {
                    goto lab_0x4035c1;
                }
                case 71: {
                    goto lab_0x4035c1;
                }
                case 72: {
                    goto lab_0x4035c1;
                }
                case 73: {
                    goto lab_0x4035c1;
                }
                case 74: {
                    goto lab_0x4035c1;
                }
                case 75: {
                    goto lab_0x4035c1;
                }
                case 76: {
                    goto lab_0x4035c1;
                }
                case 77: {
                    goto lab_0x4035c1;
                }
                case 78: {
                    goto lab_0x4035c1;
                }
                case 79: {
                    goto lab_0x4035c1;
                }
                case 80: {
                    goto lab_0x4035c1;
                }
                case 81: {
                    goto lab_0x4035c1;
                }
                case 82: {
                    goto lab_0x4035c1;
                }
                case 83: {
                    goto lab_0x4035c1;
                }
                case 84: {
                    goto lab_0x4035c1;
                }
                case 85: {
                    goto lab_0x4035c1;
                }
                case 86: {
                    goto lab_0x4035c1;
                }
                case 87: {
                    goto lab_0x4035c1;
                }
                case 88: {
                    goto lab_0x4035c1;
                }
                case 89: {
                    goto lab_0x4035c1;
                }
                case 90: {
                    goto lab_0x4035c1;
                }
                case 91: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4035c1;
                }
                case 94: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4035c1;
                }
                case 96: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4035c1;
                }
                case 98: {
                    goto lab_0x4035c1;
                }
                case 99: {
                    goto lab_0x4035c1;
                }
                case 100: {
                    goto lab_0x4035c1;
                }
                case 101: {
                    goto lab_0x4035c1;
                }
                case 102: {
                    goto lab_0x4035c1;
                }
                case 103: {
                    goto lab_0x4035c1;
                }
                case 104: {
                    goto lab_0x4035c1;
                }
                case 105: {
                    goto lab_0x4035c1;
                }
                case 106: {
                    goto lab_0x4035c1;
                }
                case 107: {
                    goto lab_0x4035c1;
                }
                case 108: {
                    goto lab_0x4035c1;
                }
                case 109: {
                    goto lab_0x4035c1;
                }
                case 110: {
                    goto lab_0x4035c1;
                }
                case 111: {
                    goto lab_0x4035c1;
                }
                case 112: {
                    goto lab_0x4035c1;
                }
                case 113: {
                    goto lab_0x4035c1;
                }
                case 114: {
                    goto lab_0x4035c1;
                }
                case 115: {
                    goto lab_0x4035c1;
                }
                case 116: {
                    goto lab_0x4035c1;
                }
                case 117: {
                    goto lab_0x4035c1;
                }
                case 118: {
                    goto lab_0x4035c1;
                }
                case 119: {
                    goto lab_0x4035c1;
                }
                case 120: {
                    goto lab_0x4035c1;
                }
                case 121: {
                    goto lab_0x4035c1;
                }
                case 122: {
                    goto lab_0x4035c1;
                }
                case 123: {
                    goto lab_0x403565;
                }
                case 124: {
                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403565;
                }
                case 126: {
                    goto lab_0x40358d;
                }
                default: {
                    goto lab_0x403965;
                }
            }
        }
      lab_0x403965:
        if (v23 != 1) {
            // 0x403cd0
            ps = 0;
            int64_t len = v15; // 0x403ce0
            if (v15 == -1) {
                // 0x403ce2
                len = strlen((char *)str);
            }
            // 0x403d0e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403d6f:
                // 0x403d6f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403d74
                int64_t v30 = v29 + str;
                v24 = function_406590(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4042ea_2;
                    }
                    case -1: {
                        goto lab_0x4042ea_2;
                    }
                    case -2: {
                        // 0x4043cd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404407
                            v19 = v18;
                            int64_t v31 = v18; // 0x40440a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404417
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404410
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4042ea
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4042ea_2;
                    }
                    case 1: {
                        goto lab_0x403d40;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403dec
                        char v34 = *(char *)v33; // 0x403dfd
                        unsigned char v35; // 0x403417
                        if (v34 < 125) {
                            // 0x403e08
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403e1f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403df0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403dfd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403e08
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403e1f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403df0
                            v33++;
                        }
                        goto lab_0x403d40;
                    }
                }
            }
            goto lab_0x4042ea_2;
        } else {
            // 0x4039b4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4035c1;
        }
    }
  lab_0x403be8:
    // 0x403be8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4044ea
        if (v8 > result) {
            // 0x4044f3
            *(char *)(v12 + result) = 0;
        }
        // 0x403817
        return result;
    }
    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4035c1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4035d0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4037da_2;
        }
    }
    int64_t v39 = result; // 0x4036d1
    char v40 = v20; // 0x4036d1
    int64_t v41 = v38; // 0x4036d1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4036d1
    int64_t v43 = v36; // 0x4036d1
    goto lab_0x40364d;
  lab_0x4037da_2:
    // 0x403817
    return function_4033c0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4042ea_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4035c1;
    } else {
        uint64_t v49 = v46 + v5; // 0x403ebe
        int64_t v50 = v5 + 1; // 0x403fa1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403fa8
        char v52 = v20; // 0x403fa8
        int64_t v53 = result; // 0x403fa8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403f71
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403f75
            int64_t v56 = v54 + 1; // 0x403f7a
            int64_t v57 = v51 + 1; // 0x403fa1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403f6c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403f71
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403f75
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
        goto lab_0x40364d;
    }
  lab_0x403d40:
    // 0x403d40
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403d5f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403d62
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4042ea
        goto lab_0x4042ea_2;
    }
    goto lab_0x403d6f;
  lab_0x40358d:
    // 0x40358d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4037da_2;
    }
    goto lab_0x4035c1;
  lab_0x403565:;
    bool v60 = v15 == 1; // 0x403570
    if (v15 == -1) {
        // 0x403572
        v60 = *(char *)v1 == 0;
    }
    // 0x40357e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4035c1;
    } else {
        goto lab_0x40358d;
    }
  lab_0x40364d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403652
        *(char *)(v44 + v45) = v40;
    }
    // 0x403656
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403468_2;
}
// Address range: 0x4045f0 - 0x40478e
int64_t function_4045f0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4045f2
    int32_t * v3 = __errno_location(); // 0x40460c
    int64_t v4 = (int64_t)g20; // 0x404611
    int32_t v5 = *v3; // 0x40461b
    int64_t v6 = v4; // 0x404631
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404789
            function_405650(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404640
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404647
        int64_t v9; // 0x4045f0
        if (g20 == &g21) {
            int64_t v10 = function_405460(0, v8); // 0x40476a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40476f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405460(v4, v8); // 0x40465b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40466a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40466a
        int32_t v14 = v7; // 0x404671
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4046a1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4046ab
    int64_t * v17 = (int64_t *)v15; // 0x4046ae
    uint64_t v18 = *v17; // 0x4046ae
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4046b1
    int64_t result = *v19; // 0x4046b1
    int64_t v20; // 0x4045f0
    uint64_t v21 = function_4033c0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4046d4
    if (v18 > v21) {
        // 0x40474b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4046e7
    *v17 = v22;
    if (result != (int64_t)&g41) {
        // 0x4046f7
        free((int64_t *)result);
    }
    int64_t result2 = function_405400(v22); // 0x404711
    *v19 = result2;
    int64_t v23; // 0x4045f0
    function_4033c0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40474b
    *v3 = v5;
    return result2;
}
// Address range: 0x404790 - 0x4047c4
int64_t function_404790(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404797
    int64_t result = function_405600(a1 == 0 ? (int64_t)&g42 : a1, 56); // 0x4047b6
    return result;
}
// Address range: 0x4047d0 - 0x4047df
int64_t function_4047d0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g42 : a1); // 0x4047dc
    return result;
}
// Address range: 0x4047e0 - 0x4047ef
int64_t function_4047e0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x4047e8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g42;
}
// Address range: 0x4047f0 - 0x404823
int64_t function_4047f0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 + 8 : a1 + 8; // 0x404809
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40480e
    uint32_t v3 = *v2; // 0x40480e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404812
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404830 - 0x404843
int64_t function_404830(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g42 + 4 : a1 + 4); // 0x40483c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404850 - 0x40487b
int64_t function_404850(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g42 : a1; // 0x404858
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404875
        abort();
        // UNREACHABLE
    }
    // 0x40486c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g42;
}
// Address range: 0x404880 - 0x4048f2
int64_t function_404880(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g42 : a5; // 0x4048a2
    int32_t * v2 = __errno_location(); // 0x4048ab
    uint32_t v3 = *(int32_t *)v1; // 0x4048cb
    int64_t result = function_4033c0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4048da
    return result;
}
// Address range: 0x404900 - 0x4049e1
int64_t function_404900(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g42 : a4; // 0x404922
    int32_t * v2 = __errno_location(); // 0x404928
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404947
    int32_t * v4 = (int32_t *)v1; // 0x40494a
    int64_t v5 = function_4033c0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404965
    int64_t v6 = v5 + 1; // 0x40496a
    int64_t result = function_405400(v6); // 0x40497f
    function_4033c0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4049c4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4049cd
    return result;
}
// Address range: 0x4049f0 - 0x4049fa
int64_t function_4049f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4049f0
    return function_404900(a1, a2, 0, a3);
}
// Address range: 0x404a00 - 0x404a95
int64_t function_404a00(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404a00
    int64_t v2 = v1; // 0x404a00
    int64_t v3 = v2; // 0x404a14
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404a33
        free((int64_t *)*(int64_t *)v4);
        v3 = &g55;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404a30
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g55;
        }
    }
    int64_t v6 = v3; // 0x404a4d
    if (g21 != 0x60d320) {
        // 0x404a4f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g41;
        v6 = &g55;
    }
    int64_t result = v6; // 0x404a71
    if (g20 != &g21) {
        // 0x404a73
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g55;
    }
    // 0x404a86
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x404aa0 - 0x404ab1
int64_t function_404aa0(void) {
    // 0x404aa0
    int64_t v1; // 0x404aa0
    return function_4045f0(v1, v1, -1, (int64_t *)&g42);
}
// Address range: 0x404ac0 - 0x404aca
int64_t function_404ac0(void) {
    // 0x404ac0
    int64_t v1; // 0x404ac0
    return function_4045f0(v1, v1, v1, (int64_t *)&g42);
}
// Address range: 0x404ad0 - 0x404ae6
int64_t function_404ad0(int64_t a1) {
    // 0x404ad0
    return function_4045f0(0, a1, -1, (int64_t *)&g42);
}
// Address range: 0x404af0 - 0x404b02
int64_t function_404af0(int64_t a1, int64_t a2) {
    // 0x404af0
    return function_4045f0(0, a1, a2, (int64_t *)&g42);
}
// Address range: 0x404b10 - 0x404b78
int64_t function_404b10(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b20
    return function_4045f0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404b80 - 0x404be4
int64_t function_404b80(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b90
    return function_4045f0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404bf0 - 0x404bfc
int64_t function_404bf0(int64_t a1, int64_t a2) {
    // 0x404bf0
    return function_404b10(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404c00 - 0x404c0f
int64_t function_404c00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c00
    return function_404b80(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404c10 - 0x404c80
int64_t function_404c10(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x404c1d
    int128_t v2 = __asm_movdqa(g43); // 0x404c25
    int128_t v3 = __asm_movdqa(g44); // 0x404c2d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404c42
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404c58
    uint32_t v6 = *v5; // 0x404c58
    uint32_t v7 = (int32_t)a3 % 32; // 0x404c5d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4045f0(0, a1, a2, &v4);
}
// Address range: 0x404c80 - 0x404c8d
int64_t function_404c80(int64_t a1, int64_t a2) {
    // 0x404c80
    return function_404c10(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404c90 - 0x404ca1
int64_t function_404c90(int64_t a1) {
    // 0x404c90
    return function_404c10(a1, -1, 58);
}
// Address range: 0x404cb0 - 0x404cba
int64_t function_404cb0(void) {
    // 0x404cb0
    int64_t v1; // 0x404cb0
    return function_404c10(v1, v1, 58);
}
// Address range: 0x404cc0 - 0x404d2e
int64_t function_404cc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404cda
    return function_4045f0(a1, a3, -1, &v1);
}
// Address range: 0x404d30 - 0x404d9c
int64_t function_404d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g42); // 0x404d37
    int128_t v2 = __asm_movdqa(g43); // 0x404d3f
    int128_t v3 = __asm_movdqa(g44); // 0x404d47
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404d69
    if (a2 == 0 || a3 == 0) {
        // 0x404d97
        abort();
        // UNREACHABLE
    }
    // 0x404d7a
    return function_4045f0(a1, a4, a5, &v4);
}
// Address range: 0x404da0 - 0x404da9
int64_t function_404da0(void) {
    // 0x404da0
    int64_t v1; // 0x404da0
    return function_404d30(v1, v1, v1, v1, -1);
}
// Address range: 0x404db0 - 0x404dc7
int64_t function_404db0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404db0
    return function_404d30(0, a1, a2, a3, -1);
}
// Address range: 0x404dd0 - 0x404de3
int64_t function_404dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404dd0
    return function_404d30(0, a1, a2, a3, a4);
}
// Address range: 0x404df0 - 0x404dfa
int64_t function_404df0(void) {
    // 0x404df0
    int64_t v1; // 0x404df0
    return function_4045f0(v1, v1, v1, &g19);
}
// Address range: 0x404e00 - 0x404e12
int64_t function_404e00(int64_t a1, int64_t a2) {
    // 0x404e00
    return function_4045f0(0, a1, a2, &g19);
}
// Address range: 0x404e20 - 0x404e31
int64_t function_404e20(int64_t a1, int64_t a2) {
    // 0x404e20
    return function_4045f0(a1, a2, -1, &g19);
}
// Address range: 0x404e40 - 0x404e56
int64_t function_404e40(int64_t a1) {
    // 0x404e40
    return function_4045f0(0, a1, -1, &g19);
}
// Address range: 0x404e60 - 0x40523d
int64_t function_404e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404ef8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404e7c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404e96
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404edb
    if (a6 < 10) {
        // 0x404eea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404fe2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405240 - 0x405260
int64_t function_405240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405240
    if (a5 == 0) {
        // 0x40525b
        return function_404e60(a1, a2, a3, a4, a5, 0, (int64_t)&g55);
    }
    int64_t v1 = 0; // 0x405247
    v1++;
    int64_t v2 = v1; // 0x405259
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405250
        v1++;
        v2 = v1;
    }
    // 0x40525b
    return function_404e60(a1, a2, a3, a4, a5, v2, (int64_t)&g55);
}
// Address range: 0x405260 - 0x4052c0
int64_t function_405260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405260
    int64_t v3 = &v2; // 0x405260
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405293
    int64_t v6; // 0x40527d
    int64_t * v7; // 0x40529b
    int64_t v8; // 0x40529b
    int64_t v9; // 0x4052a7
    if (v5 < 48) {
        // 0x405270
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4052b3
            break;
        }
    } else {
        // 0x40529b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4052b3
            break;
        }
    }
    int64_t v10 = 10; // 0x405291
    while (v4 != 9) {
        // 0x405289
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405270
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4052b3
                break;
            }
        } else {
            // 0x40529b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4052b3
                break;
            }
        }
        // 0x405289
        v10 = 10;
    }
    // 0x4052b3
    return function_404e60(a1, a2, a3, a4, v3, v10, (int64_t)&g55);
}
// Address range: 0x4052c0 - 0x40537c
int64_t function_4052c0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4052c0
    int64_t v1; // bp-168, 0x4052c0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4052c0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4052c0
    int64_t v8; // 0x4052c0
    int64_t v9; // bp-56, 0x4052c0
    int64_t v10; // 0x405325
    int64_t v11; // 0x405349
    if ((int32_t)v6 < 48) {
        // 0x405310
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405360
            break;
        }
    } else {
        // 0x405342
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405360
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40533a
    int64_t v13 = 10; // 0x40533a
    while (v5 != 9) {
        // 0x40533c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405310
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405360
                break;
            }
        } else {
            // 0x405342
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405360
                break;
            }
        }
        // 0x405332
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405360
    int64_t v14; // bp-136, 0x4052c0
    int64_t result = function_404e60(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g55); // 0x40536f
    return result;
}
// Address range: 0x405380 - 0x4053f4
int64_t function_405380(int64_t a1) {
    // 0x405380
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4053e3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x405400 - 0x40541a
int64_t function_405400(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405404
    if (size != 0 != (mem == NULL)) {
        // 0x405413
        return (int64_t)mem;
    }
    // 0x405415
    function_405650(size);
    // UNREACHABLE
}
// Address range: 0x405420 - 0x405441
int64_t function_405420(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405423
    int64_t v2 = v1; // 0x405423
    if (v2 < 0) {
        // 0x40543b
        function_405650(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405439
        return function_405400(v2);
    }
    // 0x40543b
    function_405650(v2);
    // UNREACHABLE
}
// Address range: 0x405450 - 0x405452
int64_t function_405450(void) {
    // 0x405450
    int64_t v1; // 0x405450
    return function_405400(v1);
}
// Address range: 0x405460 - 0x405496
int64_t function_405460(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405488
        free(v1);
        return (int32_t)&g55 ^ (int32_t)&g55;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405471
    if (a2 != 0 != (mem == NULL)) {
        // 0x405480
        return (int64_t)mem;
    }
    // 0x405491
    function_405650(a1);
    // UNREACHABLE
}
// Address range: 0x4054a0 - 0x4054c1
int64_t function_4054a0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4054a3
    int64_t v2 = v1; // 0x4054a3
    if (v2 < 0) {
        // 0x4054bb
        function_405650(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4054b9
        return function_405460(a1, v2);
    }
    // 0x4054bb
    function_405650(a1);
    // UNREACHABLE
}
// Address range: 0x4054d0 - 0x405556
int64_t function_4054d0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40552b
            function_405650(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405460(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405513
    if (a2 == 0) {
        // 0x405538
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405518
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40552b
        function_405650(a1);
        // UNREACHABLE
    }
    // 0x4054fa
    *(int64_t *)a2 = v2;
    return function_405460(a1, v2 * a3);
}
// Address range: 0x405560 - 0x4055b0
int64_t function_405560(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405560
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4055aa
            function_405650(a1);
            // UNREACHABLE
        }
        // 0x405582
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405460(a1, v1);
    }
    if (a2 == 0) {
        // 0x405595
        *(int64_t *)a2 = 128;
        return function_405460(0, 128);
    }
    // 0x4055a8
    if (a2 < 0) {
        // 0x4055aa
        function_405650(a1);
        // UNREACHABLE
    }
    // 0x405582
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405460(a1, v1);
}
// Address range: 0x4055b0 - 0x4055c7
int64_t function_4055b0(int64_t a1, int64_t a2) {
    // 0x4055b0
    return (int64_t)memset((int64_t *)function_405400(a1), 0, (int32_t)a1);
}
// Address range: 0x4055d0 - 0x4055fe
int64_t function_4055d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4055d7
    if ((int64_t)v1 < 0) {
        // 0x4055f9
        function_405650(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4055f9
        function_405650(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4055ea
    if (mem != NULL) {
        // 0x4055f4
        return (int64_t)mem;
    }
    // 0x4055f9
    function_405650(nmemb);
    // UNREACHABLE
}
// Address range: 0x405600 - 0x405628
int64_t function_405600(int64_t a1, int64_t a2) {
    int64_t v1 = function_405400(a2); // 0x40560f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405630 - 0x405643
int64_t function_405630(char * str) {
    // 0x405630
    return function_405600((int64_t)str, (int64_t)strlen(str) + 1);
}
// Address range: 0x405650 - 0x405681
int64_t function_405650(int64_t a1) {
    // 0x405650
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405690 - 0x40572c
int64_t function_405690(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x405690
    float80_t v1; // 0x405690
    float80_t v2 = v1;
    int32_t * v3 = __errno_location(); // 0x4056a8
    *v3 = 0;
    char * v4; // 0x405690
    int64_t v5 = (int64_t)v4; // 0x4056c1
    int64_t result = 0; // 0x4056c9
    int64_t result2; // 0x405690
    if (v5 == a1) {
        goto lab_0x4056e9;
    } else {
        if (a2 == 0) {
            // 0x405708
            if (*v4 != 0) {
                // 0x4056f2
                return 0;
            }
            // 0x40570f
            if (v2 == 0.0L) {
                // 0x4056f2
                return 1;
            }
            // 0x4056e1
            result = 1;
            goto lab_0x4056e9;
        } else {
            // 0x4056d0
            result2 = 1;
            if (v2 != 0.0L) {
                // 0x4056e1
                result = (v2 != v2 || 0.0L != 0.0L ? (int64_t)v3 : 1) & -256 | 1;
                goto lab_0x4056e9;
            } else {
                goto lab_0x4056ee;
            }
        }
    }
  lab_0x4056e9:
    // 0x4056e9
    result2 = result;
    if (a2 == 0) {
        // 0x4056f2
        return result;
    }
    goto lab_0x4056ee;
  lab_0x4056ee:
    // 0x4056ee
    *(int64_t *)(int64_t)a2 = v5;
    // 0x4056f2
    return result2;
}
// Address range: 0x405730 - 0x4057bf
int64_t function_405730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405730
    int64_t v1; // 0x405730
    if ((char)v1 != 0) {
        // 0x40574f
        int128_t v2; // 0x405730
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 16; // bp-208, 0x405793
    return function_406610(a1, a2, &v3);
}
// Address range: 0x4057c0 - 0x40589f
int64_t function_4057c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4057cc
    uint32_t v2 = *v1; // 0x4057cc
    int64_t v3 = a2 & 0xffffffff; // 0x4057d1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4057d4
    uint64_t v5 = (int64_t)*v4; // 0x4057d4
    int64_t v6; // 0x405842
    if (v3 <= v5) {
      lab_0x40583c_2:
        // 0x40583c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4057c2
    int64_t v8 = v2; // 0x4057c0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40583c
        goto lab_0x40583c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4057f8
    int64_t v17; // 0x405806
    int64_t * v18; // 0x405820
    int64_t * v19; // 0x405823
    int64_t v20; // 0x40582e
    int64_t v21; // 0x405806
    while ((v16 & 0xffffffff) > v10) {
        // 0x405803
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405820
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405837
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40583c
            goto lab_0x40583c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40583c
            goto lab_0x40583c_2;
        }
        // 0x4057f2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40587b
    int64_t * v23 = (int64_t *)v22; // 0x405880
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405883
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405880
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405897
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4057ed
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40583c
            goto lab_0x40583c_2;
        }
        // 0x4057f2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405803
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405820
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405837
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40583c
                goto lab_0x40583c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40583c
                goto lab_0x40583c_2;
            }
            // 0x4057f2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405860
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405880
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405897
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40583c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4058a0 - 0x405ebc
int64_t function_4058a0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4058bf
    int64_t v2 = *v1; // 0x4058bf
    char * str2 = (char *)v2; // 0x4058cc
    char c = *str2; // 0x4058cc
    int64_t v3 = v2; // 0x4058f8
    int64_t v4 = 0; // 0x4058a0
    int32_t v5; // 0x4058a0
    int64_t v6; // 0x4058a0
    int64_t v7; // 0x4058a0
    int64_t v8; // 0x4058a0
    int64_t v9; // 0x4058a0
    int64_t v10; // 0x4058a0
    int64_t v11; // 0x4058a0
    int64_t v12; // 0x4058a0
    int64_t v13; // 0x4058a0
    int64_t str3; // 0x4058a0
    int64_t v14; // 0x4058a0
    int64_t v15; // 0x4058a0
    int64_t v16; // 0x4058a0
    int64_t v17; // 0x4058a0
    int32_t v18; // 0x4058a0
    int32_t v19; // 0x4058a0
    int32_t v20; // 0x4058a0
    int32_t v21; // 0x4058a0
    int32_t v22; // 0x4058a0
    int32_t v23; // 0x4058a0
    int32_t v24; // 0x4058a0
    int32_t v25; // 0x4058a0
    int32_t v26; // 0x4058a0
    int32_t v27; // 0x4058a0
    int32_t v28; // 0x4058a0
    int32_t v29; // 0x4058a0
    int64_t nmemb; // 0x4058a0
    int64_t v30; // 0x4058a0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4058fc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4058f8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405908
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40590e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4058d8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40593c
                int64_t v34; // 0x4058a0
                int64_t v35; // 0x4058a0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405945
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405ac0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405956
                int64_t v37 = *(int64_t *)v36; // 0x40595a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405930
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405945
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405ac0;
                        }
                    }
                    // 0x405956
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
                  lab_0x4059a6:
                    // 0x4059a6
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
                        goto lab_0x405a00;
                    } else {
                        if (v11 == 0) {
                            // 0x405b70
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405a00;
                        } else {
                            if (v39 == 0) {
                                // 0x405b20
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4059ca;
                                } else {
                                    // 0x405b2c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4059ca;
                                    } else {
                                        // 0x405b3a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4059ca;
                                        } else {
                                            goto lab_0x405a00;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4059ca;
                            }
                        }
                    }
                }
              lab_0x405a11:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405be6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405d92
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405db2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405dff
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405e19
                            int64_t v45; // 0x405e1b
                            if (*(char *)v42 != 0) {
                                // 0x405e1b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405e13
                            while (v17 + nmemb != v42) {
                                // 0x405e15
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405e1b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405e08
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405e40
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405bf4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405d4f
                        free((int64_t *)v17);
                    }
                    // 0x405c49
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405c60
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405b0e
                    return 63;
                }
                // 0x405a30
                v5 = v39;
                if (v13 != 0) {
                    // 0x405ab4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405ac0:;
                    int32_t * v49 = (int32_t *)a7; // 0x405ad0
                    uint32_t v50 = *v49; // 0x405ad0
                    int64_t v51 = v50; // 0x405ad0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405ada
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405ae3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405d0f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405cba
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405b0e
                            return 63;
                        }
                        // 0x405b58
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405e6f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405d6d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405d80
                                // 0x405b0e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405c7e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405c92
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405afb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405afe
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405b02
                    int64_t result = v59; // 0x405b08
                    if (v58 != 0) {
                        // 0x405b0a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405b0e
                    return result;
                }
            } else {
                // 0x40590e
                v5 = v32;
            }
            // break -> 0x405a35
            break;
        }
    }
    // 0x405a35
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405a4d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405a57
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405b0e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405b99
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405a86
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405a96
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405a00:
    // 0x405a00
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405a00
    int64_t v63 = *(int64_t *)v62; // 0x405a04
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405a11
        goto lab_0x405a11;
    }
    goto lab_0x4059a6;
  lab_0x4059ca:
    // 0x4059ca
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4058a0
    int32_t v65; // 0x4058a0
    int32_t v66; // 0x4058a0
    if (v27 != 0) {
        goto lab_0x405a00;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405b80
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405a00;
            } else {
                goto lab_0x4059f1;
            }
        } else {
            // 0x4059e5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405cdc
                int64_t v67 = (int64_t)mem; // 0x405cdc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405a00;
                } else {
                    // 0x405cef
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4059f1;
                }
            } else {
                goto lab_0x4059f1;
            }
        }
    }
  lab_0x4059f1:
    // 0x4059f1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405a00;
}
// Address range: 0x405ec0 - 0x406486
int64_t function_405ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405ee1
    if (v3 < 1) {
        // 0x40609e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405edd
    int32_t v5 = *(int32_t *)a7; // 0x405ee9
    uint64_t v6 = a1 & 0xffffffff; // 0x405eeb
    int64_t v7 = v2; // 0x405ef0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405ef3
    *v8 = 0;
    int64_t v9; // 0x405ec0
    int64_t v10; // 0x405ec0
    int64_t v11; // 0x405ec0
    int64_t v12; // 0x405ec0
    int64_t str; // 0x405ec0
    int64_t v13; // 0x405ec0
    int64_t v14; // 0x405ec0
    int64_t v15; // 0x405ec0
    int64_t v16; // 0x405ec0
    int64_t v17; // 0x405ec0
    int32_t v18; // 0x405ec0
    char v19; // 0x405ec0
    if (v5 == 0) {
        // 0x4060d8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405f0a;
    } else {
        // 0x405f03
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405f50
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405f53
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406018;
            } else {
                int64_t v22 = v7 + 1; // 0x405f66
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405f76
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40602c;
                } else {
                    goto lab_0x405f88;
                }
            }
        } else {
            goto lab_0x405f0a;
        }
    }
  lab_0x405f0a:
    // 0x405f0a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405f10
    *v24 = 0;
    int64_t v25; // 0x405ec0
    int64_t v26; // 0x405ec0
    int64_t v27; // 0x405ec0
    switch (*(char *)&v2) {
        case 45: {
            // 0x406000
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40600d;
        }
        case 43: {
            // 0x406310
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40600d;
        }
        default: {
            // 0x405f2c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40628f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4063a8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40600d;
                } else {
                    // 0x40629d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405f3a;
                }
            } else {
                goto lab_0x405f3a;
            }
        }
    }
  lab_0x406018:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40601f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405f88;
    } else {
        goto lab_0x40602c;
    }
  lab_0x405f3a:
    // 0x405f3a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40600d;
  lab_0x40600d:
    // 0x40600d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406018;
  lab_0x405f88:;
    uint32_t v30 = *(int32_t *)a7; // 0x405f88
    int64_t v31 = v30; // 0x405f88
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405f8a
    if ((int64_t)*v32 > v31) {
        // 0x405f8f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405f92
    if (*v33 > v30) {
        // 0x405f97
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405f9a
    int64_t v35 = v31; // 0x405f9e
    int64_t v36 = v15; // 0x405f9e
    int64_t v37; // 0x405ec0
    int64_t v38; // 0x405ec0
    int64_t v39; // 0x405ec0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406108
        int64_t v41 = v40; // 0x406108
        v2 = v41;
        int64_t v42; // 0x405ec0
        if (*v33 == v40) {
            // 0x4062f0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4062f8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406114
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406118
                function_4057c0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406128
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406131
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40613a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406151
            int64_t v47 = v45 & 0xffffffff; // 0x406155
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40615e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406164
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406166;
                }
            }
            int64_t v48 = v47 + 1; // 0x406140
            int64_t v49 = v48 & 0xffffffff; // 0x406140
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406151
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40615e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406164
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406166;
                    }
                }
                // 0x406140
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406308
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406166;
    } else {
        goto lab_0x405fa4;
    }
  lab_0x40602c:
    // 0x40602c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40602f
    int64_t v51 = v12; // 0x40602f
    int64_t v52 = v14; // 0x40602f
    if (*(char *)v10 == 0) {
        goto lab_0x405f88;
    } else {
        goto lab_0x406035;
    }
  lab_0x405fa4:;
    int32_t v53 = v35; // 0x405fa4
    int64_t v54; // 0x405ec0
    int64_t v55; // 0x405ec0
    int64_t v56; // 0x405ec0
    int64_t v57; // 0x405ec0
    int64_t v58; // 0x405ec0
    int64_t v59; // 0x405ec0
    char * v60; // 0x405ec0
    int64_t v61; // 0x405ec0
    int64_t v62; // 0x405fb9
    int64_t v63; // 0x405ec0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4060f3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4060f6;
    } else {
        // 0x405fac
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405ec0
        int64_t v66 = v65 ? -1 : 1; // 0x405fc0
        int64_t v67 = (int64_t)"--"; // 0x405ec0
        int64_t v68 = v62; // 0x405ec0
        int64_t v69 = 3; // 0x405fc0
        unsigned char v70 = *(char *)v68; // 0x405fc0
        char v71 = *(char *)v67; // 0x405fc0
        char v72 = v71; // 0x405fc0
        bool v73 = false; // 0x405fc0
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
            // 0x4060b0
            if (*(char *)v62 == 45) {
                // 0x406170
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406170
                if (c == 0) {
                    goto lab_0x4060ba;
                } else {
                    // 0x40617d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406200;
                    } else {
                        if (c == 45) {
                            // 0x4063e3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406255;
                        } else {
                            // 0x40618e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406200;
                            } else {
                                // 0x406193
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4061b4;
                                } else {
                                    // 0x40619a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406200;
                                    } else {
                                        goto lab_0x4061b4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4060ba;
            }
        } else {
            uint32_t v75 = *v33; // 0x405fd0
            v2 = v75;
            int32_t v76 = *v32; // 0x405fd3
            int64_t v77 = v35 + 1; // 0x405fd6
            int32_t v78 = v77; // 0x405fd9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406340
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405fe7
                    function_4057c0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405ff5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4060f6;
        }
    }
  lab_0x406035:;
    // 0x406035
    int64_t v79; // bp-104, 0x405ec0
    int64_t v80 = &v79; // 0x405eca
    int64_t v81 = v50 + 1; // 0x406035
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40603c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406041
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406045
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406049
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406051
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406056
    int32_t c2 = v84; // 0x406056
    char * found_char_pos = strchr(str2, c2); // 0x406056
    int64_t v87 = *v82; // 0x40605b
    v2 = v87;
    int64_t v88 = *v85; // 0x406065
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406070
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406360
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40632d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40609e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406056
    char v91 = *(char *)(v90 + 1); // 0x40608b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406045
        if (v91 != 58) {
            // 0x40609e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4062b4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4063b8
                *v8 = 0;
            } else {
                // 0x40639c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4062de
            *v83 = 0;
            // 0x40609e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4062be
        if (v93 != 0) {
            // 0x406350
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4062de
            *v83 = 0;
            // 0x40609e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4062d1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4062de
            *v83 = 0;
            // 0x40609e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40641a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4063ca
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4063d1
        // 0x4062de
        *v83 = 0;
        // 0x40609e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406229
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40622b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406450
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406401
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406408
            // 0x40609e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406236
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40623a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406255;
  lab_0x406166:
    // 0x406166
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405fa4;
  lab_0x406255:;
    int64_t v99 = function_4058a0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406273
    // 0x40609e
    return v99 & 0xffffffff;
  lab_0x4060f6:;
    int32_t v100 = v55; // 0x4060f6
    if (v100 != (int32_t)v59) {
        // 0x4060fa
        *(int32_t *)a7 = v100;
    }
    // 0x40609e
    return 0xffffffff;
  lab_0x4060ba:
    // 0x4060ba
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4060c1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40609e
    return v99 & 0xffffffff;
  lab_0x406200:
    // 0x406200
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406035;
  lab_0x4061b4:
    // 0x4061b4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4058a0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x4061da
    if ((int32_t)v101 != -1) {
        // 0x40609e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4061ef
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406200;
}
// Address range: 0x406490 - 0x4064e6
int64_t function_406490(int64_t a1) {
    // 0x406490
    *(int32_t *)&g45 = g26;
    *(int32_t *)&g46 = g25;
    int64_t v1; // 0x406490
    int64_t result = function_405ec0(v1, v1, v1, v1, v1, v1, &g45, a1 & 0xffffffff); // 0x4064b6
    g26 = *(int32_t *)&g45;
    g50 = (char *)g48;
    *(int32_t *)&g24 = g47;
    return result;
}
// Address range: 0x4064f0 - 0x406508
int64_t function_4064f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4064f0
    return function_406490(1);
}
// Address range: 0x406510 - 0x406523
int64_t function_406510(int64_t a1, int64_t a2, char * a3, char (**a4)[12], int32_t a5, int64_t a6) {
    // 0x406510
    return function_406490(0);
}
// Address range: 0x406530 - 0x406545
int64_t function_406530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406530
    return function_405ec0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406550 - 0x406566
int64_t function_406550(void) {
    // 0x406550
    return function_406490(0);
}
// Address range: 0x406570 - 0x406588
int64_t function_406570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406570
    return function_405ec0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406590 - 0x40660a
int64_t function_406590(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40659b
    int64_t v2 = (int64_t)&g11; // 0x40659b
    int32_t * pwc; // 0x406590
    int64_t v3; // 0x406590
    int64_t n; // 0x406590
    if (a2 == 0) {
        goto lab_0x4065e2;
    } else {
        // 0x40659d
        if (a3 == 0) {
            // 0x4065c8
            return -2;
        }
        // 0x4065a9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4065e2;
        } else {
            goto lab_0x4065b4;
        }
    }
  lab_0x4065e2:
    // 0x4065e2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406590
    pwc = (int32_t *)&v4;
    goto lab_0x4065b4;
  lab_0x4065b4:;
    char * wstr = (char *)v3; // 0x4065ba
    int64_t ps; // 0x406590
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4065ba
    int64_t result = v5; // 0x4065ba
    if (v5 < 0xfffffffe) {
        // 0x4065c8
        return result;
    }
    int64_t result2 = result; // 0x4065f9
    if ((char)function_4066d0(0, v3) == 0) {
        // 0x4065fb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4065c8
    return result2;
}
// Address range: 0x406610 - 0x406669
int64_t function_406610(int64_t a1, int64_t a2, int64_t * a3) {
    // 0x406610
    int32_t v1; // bp-16, 0x406610
    int64_t v2; // 0x406610
    int64_t v3 = function_406dc0(0, (int64_t *)&v1, a2, (int64_t)a3, v2, v2, v2, (int64_t)&g55); // 0x406625
    if (v3 == 0) {
        // 0x406642
        return 0xffffffff;
    }
    // 0x40662f
    int64_t result; // 0x406610
    if (v1 > -1) {
        // 0x40663d
        *(int64_t *)a1 = v3;
        result = v1;
    } else {
        // 0x406648
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x406642
    return result;
}
// Address range: 0x406670 - 0x4066cd
int64_t function_406670(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406677
    int64_t v2; // 0x406670
    int64_t result = function_406ca0(a1, v2); // 0x406688
    if ((v2 & 32) != 0) {
        // 0x4066b0
        if ((int32_t)result == 0) {
            // 0x4066b4
            *__errno_location() = 0;
        }
        // 0x4066aa
        return 0xffffffff;
    }
    // 0x406691
    if ((int32_t)result == 0) {
        // 0x4066aa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406698
    if (v1 == 0) {
        // 0x40669a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4066aa
    return result2;
}
// Address range: 0x4066d0 - 0x40672e
int64_t function_4066d0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4066d6
    if (locale == NULL) {
        // 0x406703
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4066d6
    bool v2; // 0x4066d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x4066d0
    int64_t v5 = v1; // 0x4066d0
    int64_t v6 = 2; // 0x4066f5
    unsigned char v7 = *(char *)v5; // 0x4066f5
    char v8 = *(char *)v4; // 0x4066f5
    char v9 = v8; // 0x4066f5
    bool v10 = false; // 0x4066f5
    while (v7 == v8) {
        // 0x4066e8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406701
    int64_t v13 = v1; // 0x406701
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406703
        return 0;
    }
    int64_t v14 = 6; // 0x406701
    unsigned char v15 = *(char *)v13; // 0x40671d
    char v16 = *(char *)v12; // 0x40671d
    char v17 = v16; // 0x40671d
    bool v18 = false; // 0x40671d
    while (v15 == v16) {
        // 0x406710
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
// Address range: 0x406730 - 0x406c92
int64_t function_406730(void) {
    char * v1 = nl_langinfo(14); // 0x406746
    char * v2 = g49; // 0x40674b
    char * v3; // 0x406730
    int64_t v4; // 0x406730
    int64_t v5; // 0x406730
    int64_t v6; // 0x406730
    int64_t v7; // 0x406730
    int32_t size; // 0x406730
    int32_t size2; // 0x406730
    int32_t len; // 0x406802
    int64_t v8; // 0x406802
    char * env_val; // 0x4067ed
    if (v2 == NULL) {
        // 0x4067e8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406855;
        } else {
            // 0x4067fa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406855;
            } else {
                // 0x4067ff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4067ed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406c85
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406855;
                    } else {
                        // 0x406bf9
                        size2 = len + 14;
                        goto lab_0x40681b;
                    }
                } else {
                    goto lab_0x40681b;
                }
            }
        }
    } else {
        // 0x406730
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40676a;
    }
  lab_0x406a9c:;
    // 0x406a9c
    struct _IO_FILE * stream; // 0x4068db
    int32_t v10 = __uflow(stream); // 0x406a9f
    int64_t v11; // 0x406730
    int64_t v12 = v11; // 0x406aa9
    int64_t v13; // 0x406730
    int64_t v14 = v13; // 0x406aa9
    int32_t v15 = v10; // 0x406aa9
    int64_t v16; // 0x406730
    int64_t v17 = v16; // 0x406aa9
    int64_t v18 = v11; // 0x406aa9
    int64_t v19 = v13; // 0x406aa9
    int64_t v20 = v16; // 0x406aa9
    if (v10 == -1) {
        // break -> 0x406aaf
        goto lab_0x406aaf;
    }
    goto lab_0x406929;
  lab_0x40691e:;
    // 0x40691e
    int64_t v90; // 0x406730
    int64_t * v32; // 0x406910
    *v32 = v90 + 1;
    int64_t v89; // 0x406730
    v12 = v89;
    int64_t v91; // 0x406730
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406730
    v17 = v92;
    goto lab_0x406929;
  lab_0x406929:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406730
    int32_t v25; // bp-120, 0x406730
    int32_t v26; // bp-184, 0x406730
    int64_t v27; // 0x4068db
    int64_t v28; // 0x4068f8
    int64_t v29; // 0x4068fd
    int64_t * v30; // 0x406914
    switch (c) {
        case 32: {
            goto lab_0x406910;
        }
        case 10: {
            goto lab_0x406910;
        }
        case 9: {
            goto lab_0x406910;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406b01
            int32_t v33; // 0x406730
            char v34; // 0x406730
            int32_t v35; // 0x406b0e
            if (v31 < *v30) {
                // 0x406ae0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406b0b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406b01
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406ae0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406b0b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406af0
                v36 = v33;
            }
            // 0x406bdf
            if (v36 == -1) {
                // break -> 0x406aaf
                break;
            }
            goto lab_0x406910;
        }
        default: {
            // 0x40693f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406aaf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406968
            int64_t v39 = v37 + 4; // 0x40696a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406976
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406978
            while (v41 == 0) {
                // 0x406968
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406996
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4069a2
            int64_t v45 = v43 + 4; // 0x4069a4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4069b0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4069b2
            while (v47 == 0) {
                // 0x4069a2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40699f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4069c8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4069d8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4069dc
            int64_t v52 = v51 + v48; // 0x4069e5
            int64_t * mem; // 0x406730
            int64_t v53; // 0x406730
            int64_t v54; // 0x406730
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406b1b
                int64_t v56 = v55 + 3; // 0x406b27
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406a01
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406a10
            if (mem == NULL) {
                // 0x406c3c
                free((int64_t *)v21);
                function_406ca0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x4068b4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406a28
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406a32
            uint32_t v62 = (int32_t)v59; // 0x406a35
            int64_t v63; // 0x406730
            if (v62 >= 8) {
                // 0x406b44
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406b5e
                int64_t v66 = v61 - v65; // 0x406b62
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406b6d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406b7e
                    int64_t v70 = v69 & 0xffffffff; // 0x406b7e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406b7b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406c0f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406a47
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406a4b
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
            int64_t v73 = v51 + 1; // 0x406a5b
            int64_t v74 = v60 - 1; // 0x406a5f
            uint32_t v75 = (int32_t)v73; // 0x406a64
            int64_t v76; // 0x406730
            if (v75 >= 8) {
                // 0x406b92
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406b9c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406bac
                int64_t v80 = v74 - v79; // 0x406bb0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406bbb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406bcb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406bc9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406c26
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406c2e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406a76
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406a7a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406c73
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406a8e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40691e;
            } else {
                goto lab_0x406a9c;
            }
        }
    }
  lab_0x406910:;
    int64_t v93 = v23; // 0x406730
    int64_t v94 = v22; // 0x406730
    int64_t v95 = v21; // 0x406730
    goto lab_0x406910_2;
  lab_0x406855:;
    int64_t * mem3 = malloc(size); // 0x406855
    int64_t v97 = (int64_t)&g11; // 0x406860
    int64_t v98; // 0x406730
    int64_t path; // 0x406730
    if (mem3 == NULL) {
        goto lab_0x406832;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406855
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406876;
    }
  lab_0x40676a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40675d
    char v100 = *v3; // 0x40676a
    int64_t v101; // 0x406730
    if (v100 == 0) {
        // 0x4067c4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406730
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406730
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4067b0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4067b7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406780
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40678d
        char v107 = *(char *)v106; // 0x406792
        v102 = v107;
        if (v107 == 0) {
            // 0x4067c4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40679b
    v104 = v103 + 1;
  lab_0x4067b7:
    // 0x4067c4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406832:;
    char * v108 = (char *)v97;
    g49 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40676a;
  lab_0x406876:;
    int64_t v109 = v98 + path; // 0x406876
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4068a2
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x4068d1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406c02
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x4068f5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406910_2:;
                uint64_t v96 = *v32; // 0x406910
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406a9c;
                } else {
                    goto lab_0x40691e;
                }
            }
          lab_0x406aaf:
            // 0x406aaf
            function_406ca0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x406ace
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4068b4;
  lab_0x40681b:;
    int64_t * mem4 = malloc(size2); // 0x40681b
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x4068c1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406876;
    } else {
        goto lab_0x406832;
    }
  lab_0x4068b4:
    // 0x4068b4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406832;
}
// Address range: 0x406ca0 - 0x406d1b
int64_t function_406ca0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406ca7
    if (fileno(stream) < 0) {
        // 0x406d07
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406cba
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406ceb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406d07
            return fclose(stream);
        }
    }
    // 0x406cbc
    if ((int32_t)function_406d20(a1, v1) == 0) {
        // 0x406d07
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406cc8
    int32_t v3 = *v2; // 0x406cd0
    int64_t result = fclose(stream); // 0x406cde
    if (v3 != 0) {
        // 0x406d10
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406ce0
    return result;
}
// Address range: 0x406d20 - 0x406d60
int64_t function_406d20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x406d3a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x406d3a
        return fflush(stream);
    }
    // 0x406d48
    function_406d60(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406d60 - 0x406db7
int64_t function_406d60(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406d60
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406d6a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x406d9b
    int64_t result = -1; // 0x406da4
    if (v1 != -1) {
        // 0x406da6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406db2
    return result;
}
// Address range: 0x406dc0 - 0x4088d9
int64_t function_406dc0(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x406dc0
    int64_t v1; // bp-1416, 0x406dc0
    int64_t v2; // bp-1656, 0x406dc0
    if ((int32_t)function_408b00(a3, &v1, &v2) < 0) {
        // 0x407430
        return 0;
    }
    int64_t v3 = &v2; // 0x406dcb
    int64_t v4; // bp-1384, 0x406dc0
    int64_t v5; // bp-1640, 0x406dc0
    int64_t v6; // 0x406dc0
    if ((int32_t)function_4088e0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x407d17
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x407d33
            free((int64_t *)v6);
        }
        // 0x407d38
        *__errno_location() = 22;
        // 0x407430
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x406e2b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x406e33
    uint64_t v9 = v8 + v6; // 0x406e37
    int64_t v10; // 0x406dc0
    char * v11; // 0x406dc0
    int64_t v12; // 0x406dc0
    if (v9 < v8) {
        // 0x4074e0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4073e9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x4074e0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x4073e9;
        } else {
            uint64_t size = v9 + 6; // 0x406e47
            if (size < 4000) {
                // 0x406f90
                v12 = 0;
                int64_t v13; // bp-1784, 0x406dc0
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x406e84;
            } else {
                if (size == -1) {
                    // 0x4074e0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x4073e9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x406e68
                    if (mem == NULL) {
                        // 0x4074e0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x4073e9;
                    } else {
                        // 0x406e7d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x406e84;
                    }
                }
            }
        }
    }
  lab_0x4073b0_2:;
    // 0x4073b0
    int64_t v14; // 0x406dc0
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x4073b8
    int64_t v17 = v16; // 0x4073c6
    int64_t v18 = v16; // 0x4073c6
    int64_t v19 = v15; // 0x4073c6
    int64_t v20; // 0x406ea8
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x4075d8;
    } else {
        goto lab_0x4073d1;
    }
  lab_0x4073e9:
    // 0x4073e9
    if (v6 != (int64_t)&v4) {
        // 0x407400
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40741c
        free((int64_t *)v6);
    }
    // 0x407421
    *(int32_t *)v10 = 12;
    // 0x407430
    return 0;
  lab_0x406e84:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x406ebd
    int64_t v23 = *v22; // 0x406ebd
    int64_t v24 = 0; // 0x406ec3
    int64_t v25 = v20; // 0x406ec3
    int64_t v26 = v21; // 0x406ec3
    int64_t v27 = 0; // 0x406ec3
    int64_t v28; // 0x406dc0
    int64_t v29; // 0x406dc0
    int64_t v30; // 0x406dc0
    int64_t v31; // 0x406dc0
    int64_t v32; // 0x406dc0
    int64_t v33; // 0x406dc0
    int64_t v34; // 0x406dc0
    if (v23 == a3) {
        goto lab_0x4074d3;
    } else {
        int64_t v35 = v23 - a3; // 0x406ec9
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x406edb;
    }
  lab_0x4074d3:;
    int64_t v36 = v24; // 0x4074d6
    float80_t v37; // 0x406dc0
    float80_t v38 = v37; // 0x4074d6
    float80_t v39; // 0x406dc0
    float80_t v40 = v39; // 0x4074d6
    int64_t v41 = v25; // 0x4074d6
    int64_t v42 = v26; // 0x4074d6
    int64_t v43 = v27; // 0x4074d6
    int64_t v44; // 0x406dc0
    int64_t v45 = v44; // 0x4074d6
    goto lab_0x407038;
  lab_0x407038:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x406dc0
    int64_t v51; // 0x406dc0
    int64_t v52; // 0x406dc0
    int64_t v53; // 0x406dc0
    int64_t v54; // 0x406dc0
    int64_t v55; // 0x406dc0
    int64_t v56; // 0x406dc0
    int64_t v57; // 0x406dc0
    int64_t dest_mem2; // 0x406dc0
    int64_t dest_mem3; // 0x406dc0
    int64_t v58; // 0x406dc0
    float80_t v59; // 0x406dc0
    float80_t v60; // 0x406dc0
    float80_t v61; // 0x406dc0
    float80_t v62; // 0x406dc0
    float80_t v63; // 0x406dc0
    uint64_t v64; // 0x408166
    char * v65; // 0x40704c
    char v66; // 0x40704c
    int64_t v67; // 0x407074
    uint32_t v68; // 0x407078
    int64_t v69; // 0x407455
    char v70; // 0x406dc0
    if (v1 == v49) {
        // 0x408160
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x4088ca
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x4081c2;
            } else {
                goto lab_0x4073b0_2;
            }
        } else {
            // 0x408170
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x4081c2;
            } else {
                if (v47 != 0) {
                    // 0x40878d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x4073b0_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x408793
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40818e;
                        } else {
                            goto lab_0x40879f;
                        }
                    }
                } else {
                    // 0x40817e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40818e;
                    } else {
                        goto lab_0x40879f;
                    }
                }
            }
        }
    } else {
        // 0x40704c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x407051
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x407c20
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x4073b0_2;
                } else {
                    goto lab_0x4074b2;
                }
            } else {
                // 0x407462
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x4074b2;
                } else {
                    if (v47 != 0) {
                        // 0x407d50
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x4073b0_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x407d56
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x407480;
                            } else {
                                goto lab_0x407d62;
                            }
                        }
                    } else {
                        // 0x407470
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x407480;
                        } else {
                            goto lab_0x407d62;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            // 0x407069
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g51 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x4079e0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4074b7;
                }
                case 19: {
                    // 0x4079d0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4074b7;
                }
                case 20: {
                    // 0x4079b8
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x4074b7;
                }
                case 21: {
                    goto lab_0x4075a0;
                }
                case 22: {
                    goto lab_0x4075a0;
                }
                default: {
                    // 0x40708a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x407530
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40754d;
                        } else {
                            // 0x407537
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x4070c0;
                            } else {
                                goto lab_0x40754d;
                            }
                        }
                    } else {
                        goto lab_0x4070c0;
                    }
                }
            }
        }
    }
  lab_0x406edb:;
    int64_t v75 = v34;
    float80_t v76; // 0x406dc0
    float80_t v77 = v76;
    float80_t v78; // 0x406dc0
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x406dc0
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x406ede
    int64_t v89 = v85; // 0x406ede
    int64_t v90 = v84; // 0x406ede
    float80_t v91 = v79; // 0x406ede
    float80_t v92 = v77; // 0x406ede
    int64_t v93 = v75; // 0x406ede
    int64_t v94 = v80; // 0x406ede
    int64_t v95 = v81; // 0x406ede
    int64_t v96 = v82; // 0x406ede
    int64_t v97 = v87; // 0x406ede
    int64_t v98; // 0x406dc0
    int64_t v99; // 0x406dc0
    int64_t v100; // 0x406dc0
    int64_t v101; // 0x406dc0
    int64_t v102; // 0x406dc0
    if (v82 >= v87) {
        goto lab_0x407029;
    } else {
        if (v82 != 0) {
            // 0x406fc0
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x4073b0_2;
            } else {
                int64_t v103 = 2 * v82; // 0x406fc6
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x406fdb;
                } else {
                    goto lab_0x406fce;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x406f04
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x406fee;
                } else {
                    goto lab_0x406f10;
                }
            } else {
                goto lab_0x406fce;
            }
        }
    }
  lab_0x407029:
    // 0x407029
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x407038;
  lab_0x4081c2:
    // 0x4081c2
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x4081ca
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x4081db
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x4081e7
    if (v12 != 0) {
        // 0x4081f3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x408212
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40822e
        free((int64_t *)v6);
    }
    // 0x408233
    *a2 = v46;
    // 0x407430
    return result;
  lab_0x4075a0:
    // 0x4075a0
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x4074b7;
  lab_0x406fce:
    // 0x406fce
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x4073b0_2;
    } else {
        goto lab_0x406fdb;
    }
  lab_0x4075d8:
    // 0x4075d8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x4073d1;
  lab_0x4073d1:
    if (v12 == 0) {
        // 0x4074e0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4073e9;
    } else {
        // 0x4073e1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x4073e9;
    }
  lab_0x4074b2:
    // 0x4074b2
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x4074b7;
  lab_0x4070c0:;
    int64_t v273 = (int64_t)v11; // 0x4070c0
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x4070c7
    int64_t v275 = v273 + 1; // 0x4070cb
    *v11 = 37;
    int64_t v276 = v275; // 0x4070d4
    if (v274 % 2 != 0) {
        // 0x4070d6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x4070c7
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x4070e7
    if ((v277 & 2) != 0) {
        // 0x4070e9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4070f3
    if ((v277 & 4) != 0) {
        // 0x4070f5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4070ff
    if ((v277 & 8) != 0) {
        // 0x407101
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40710b
    if ((v277 & 16) != 0) {
        // 0x40710d
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x407117
    if ((v277 & 64) != 0) {
        // 0x407119
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x407123
    if ((v277 & 32) != 0) {
        // 0x407125
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40712d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x407131
    int64_t v293 = v290; // 0x407138
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x407147
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40716a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40716e
    int64_t v298 = v295; // 0x407175
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x407184
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40707a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x4071b0
    int64_t v272; // 0x406dc0
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x4071b9
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x4075b8;
        } else {
            if (v301 == 12) {
                // 0x407d78
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x4071e0;
            } else {
                // 0x4071d0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x4075b0
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x4075b8;
                } else {
                    goto lab_0x4071e0;
                }
            }
        }
    } else {
        goto lab_0x4071e0;
    }
  lab_0x4074b7:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x4074b7
    int64_t v111 = v55 + 88; // 0x4074bb
    int64_t v112 = *(int64_t *)v111; // 0x4074bf
    int64_t v113 = v49 + 1; // 0x4074c2
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x406ec9
        int64_t v115 = v114 + v105; // 0x406ecf
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
            // 0x4074f8
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
                goto lab_0x4073b0_2;
            } else {
                goto lab_0x407029;
            }
        } else {
            goto lab_0x406edb;
        }
    } else {
        goto lab_0x4074d3;
    }
  lab_0x406fdb:;
    int64_t v116 = v80 == v20; // 0x406fe2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x406f10;
    } else {
        goto lab_0x406fee;
    }
  lab_0x406fee:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x406dc0
    if (v102 != 0) {
        goto lab_0x406f10;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40700a
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x4075c5;
        } else {
            // 0x407018
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
            goto lab_0x407029;
        }
    }
  lab_0x406f10:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x406f27
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x4073b0_2;
    } else {
        // 0x406f4d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x406f75
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
        goto lab_0x407029;
    }
  lab_0x40818e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x408754
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x4073b0_2;
        } else {
            // 0x408765
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40877a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x4081c2;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x4081b1
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x4075c5;
        } else {
            // 0x4081bf
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x4081c2;
        }
    }
  lab_0x40879f:
    // 0x40879f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x4073b0_2;
    } else {
        goto lab_0x40818e;
    }
  lab_0x40754d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40754d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x407551
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x407555
    int64_t v123 = 0; // 0x40755c
    int64_t v124 = v122; // 0x40755c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x407562
        int64_t v126 = v120; // 0x40756a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x4084f1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x408509
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40851b
            int64_t v131 = v128; // 0x408524
            int64_t v132 = v130; // 0x408524
            int64_t v133; // 0x406dc0
            int64_t v134; // 0x408536
            if (v130 < v129) {
                // 0x408526
                if (v121 == v128) {
                    // break -> 0x407340
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40732b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x407340
                        goto lab_0x407340;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x4084e8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x4084f1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x408526
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x407340
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40732b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x407340
                            goto lab_0x407340;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x4084e8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x407574
            if (*(int32_t *)v135 != 5) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x407580
            int64_t v137 = v136; // 0x407580
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40758d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x407340:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x407340
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x407344
    int64_t v142; // 0x406dc0
    int64_t v143; // 0x406dc0
    int64_t v144; // 0x406dc0
    if (v140 == v141) {
        goto lab_0x4079f0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x407351
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x408554
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40855d
            if (v141 == v146) {
                goto lab_0x407a0e;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x408583
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40858a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x4085a3
                int64_t v152 = v151; // 0x4085ac
                int64_t v153 = v149; // 0x4085ac
                int64_t v154; // 0x406dc0
                int64_t v155; // 0x4085b7
                if (v151 < v150) {
                    // 0x4085ae
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x4073b0_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x4085ca
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x4073b0_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x408570
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x408579
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x4085ae
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x4073b0_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x4085ca
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x4073b0_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x408570
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40737c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x407363
            if (*(int32_t *)v156 != 5) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x407370
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x4079f0;
            } else {
                goto lab_0x40737c;
            }
        }
    }
  lab_0x4071e0:
    // 0x4071e0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x4071ed
    int64_t v160 = 0; // 0x4071f5
    if (v159 != -1) {
        // 0x4071fb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x407aec
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40721e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40722c
        if (*(int32_t *)v162 != 5) {
            // 0x407aec
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40723f
        int64_t v164; // bp-8, 0x406dc0
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x406dc0
    uint64_t v165; // 0x407256
    if (v46 > 0xfffffffffffffffd) {
        // 0x407c88
        v14 = v48;
        if (v47 == -1) {
            // 0x4072b4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x4073b0_2;
    } else {
        // 0x407260
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x4072b4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x407990
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x4073b0_2;
            } else {
                int64_t v167 = 2 * v47; // 0x407996
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x407282;
                } else {
                    goto lab_0x4079a2;
                }
            }
        } else {
            // 0x407272
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x407282;
            } else {
                goto lab_0x4079a2;
            }
        }
    }
  lab_0x407480:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x407ca9
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x4073b0_2;
        } else {
            // 0x407cc1
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x407cd2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x4074b2;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x4074a1
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x4075c5;
        } else {
            // 0x4074af
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x4074b2;
        }
    }
  lab_0x407d62:
    // 0x407d62
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x4073b0_2;
    } else {
        goto lab_0x407480;
    }
  lab_0x4079f0:
    // 0x4079f0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x407a0e;
  lab_0x4075b8:
    // 0x4075b8
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x4071e0;
  lab_0x4075c5:
    // 0x4075c5
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x4075d8;
  lab_0x407a0e:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x407a14
    v14 = v48;
    int64_t v170; // 0x406dc0
    int64_t v171; // 0x406dc0
    int64_t * v172; // 0x406dc0
    int64_t v173; // 0x406dc0
    int64_t v174; // bp-760, 0x406dc0
    uint64_t size5; // 0x407a18
    if (v169 == -1) {
        goto lab_0x4073b0_2;
    } else {
        // 0x407a29
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x407a89;
        } else {
            // 0x407a35
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x4073b0_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x407a5d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x4073b0_2;
                } else {
                    goto lab_0x407a89;
                }
            }
        }
    }
  lab_0x40737c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x407a0e;
    } else {
        // 0x407385
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x407a0e;
        } else {
            goto lab_0x4073b0_2;
        }
    }
  lab_0x407282:
    // 0x407282
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x407c49
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x407c64
            if (v48 == v20 && v46 != 0) {
                // 0x407c72
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x4072b4
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x4072a3
        v14 = v48;
        if (mem11 != NULL) {
            // 0x4072b4
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x4073b0_2;
  lab_0x4079a2:
    // 0x4079a2
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x4073b0_2;
    } else {
        goto lab_0x407282;
    }
  lab_0x407a89:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x406dc0
    int64_t v181; // 0x406dc0
    int64_t v182; // 0x406dc0
    int64_t v183; // 0x406dc0
    int64_t v184; // 0x406dc0
    int64_t v185; // 0x406dc0
    int64_t v186; // 0x406dc0
    int64_t v187; // 0x406dc0
    int64_t v188; // 0x406dc0
    int64_t v189; // 0x406dc0
    int64_t v190; // 0x406dc0
    int64_t v191; // 0x406dc0
    int64_t v192; // 0x406dc0
    int64_t v193; // 0x406dc0
    float80_t v194; // 0x406dc0
    float80_t v195; // 0x406dc0
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x408602
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x408610
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
            // 0x40873d
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
        goto lab_0x407f49;
    } else {
        // 0x407a91
        int64_t v198; // 0x406dc0
        float80_t v199; // 0x406dc0
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x408251
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40825e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x4080ba
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x407abf
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x407ac8
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x407aec
                            abort();
                            // UNREACHABLE
                        }
                        // 0x408636
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x408636
                            v181 = v187 + 3;
                            goto lab_0x4087b1;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x4087b1;
                            } else {
                                goto lab_0x408672;
                            }
                        }
                    } else {
                        // 0x408343
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x407f37;
                        } else {
                            int64_t v202 = v187 + 2; // 0x408351
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40889a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x408398
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x4083ab
                                int64_t v207 = v176 & 0xffffffff; // 0x4083ae
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x4083bc
                                int64_t v209 = v187 + 1; // 0x4083d9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x4083ee
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x4083fb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x407f49;
                        }
                    }
                } else {
                    // 0x4080e8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x4080e8
                        v180 = v187 + 1;
                        goto lab_0x408697;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x408697;
                        } else {
                            goto lab_0x408108;
                        }
                    }
                }
            } else {
                // 0x407f20
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x407f37;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40846c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40847d
                    char v215 = *v213; // 0x408484
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x4084c0
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x4084cd
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x408495
                        v182 = v218;
                        int64_t v219; // 0x408487
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x407f49;
                }
            }
        } else {
            float80_t v220; // 0x406dc0
            if (v220 != 0.0L) {
                // 0x407aec
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40813b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40814a
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
                // 0x408423
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
            goto lab_0x407f49;
        }
    }
  lab_0x407f49:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x407f4c
    int64_t v229 = v228; // 0x407f52
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x407f54
        int64_t v232 = v231 + v224; // 0x407f57
        int64_t v233 = v232 - v225; // 0x407f5e
        if ((v230 & 2) != 0) {
            // 0x408403
            v229 = v233;
            int64_t v234 = v224; // 0x408406
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x408410
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x408410
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x408275
                int64_t v238 = v224; // 0x40827b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x408289
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x408280
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x408295
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x4082a8
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
                int64_t v243 = v224; // 0x407f81
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x407fa1
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x407f98
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x407faa
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x407fb8
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
        // 0x407aec
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x407fe8
    int64_t dest_mem5 = v48; // 0x407ff5
    int64_t v250 = v248; // 0x407ff5
    int64_t v251 = v47; // 0x407ff5
    int64_t v252; // 0x406dc0
    if (v47 - v46 > v248) {
        goto lab_0x408070;
    } else {
        if (v249 < v46) {
            // 0x408242
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x4073b0_2;
            } else {
                goto lab_0x408070;
            }
        } else {
            // 0x408000
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x408070;
            } else {
                if (v47 != 0) {
                    // 0x4085d8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x4073b0_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x4085de
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40801e;
                        } else {
                            goto lab_0x4085ea;
                        }
                    }
                } else {
                    // 0x40800e
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40801e;
                    } else {
                        goto lab_0x4085ea;
                    }
                }
            }
        }
    }
  lab_0x408070:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x408081
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40809d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x4074b7;
  lab_0x407f37:
    // 0x407f37
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x407f49;
  lab_0x408697:;
    char * v257 = nl_langinfo(0x10000); // 0x4086ca
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x4086db
    char v259 = *v257; // 0x4086e2
    int64_t v260 = v176 & 0xffffffff; // 0x4086e5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x4086f3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x408720
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40872d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x408108;
  lab_0x408108:
    // 0x408108
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
    goto lab_0x407f49;
  lab_0x40801e:
    // 0x40801e
    if (v48 == 0 || v48 == v20) {
        // 0x4082bb
        int64_t size7; // 0x406dc0
        int64_t * mem12 = malloc((int32_t)size7); // 0x4082d2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x4073b0_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x4082de
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x408309
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x408070;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40804d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x4073b0_2;
        } else {
            // 0x40805b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x408070;
        }
    }
  lab_0x4085ea:
    // 0x4085ea
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x4073b0_2;
    } else {
        goto lab_0x40801e;
    }
  lab_0x4087b1:;
    int64_t v265 = v187 + 4; // 0x4087b1
    char v266 = *nl_langinfo(0x10000); // 0x4087fc
    int64_t v267 = v176 & 0xffffffff; // 0x4087ff
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x408806
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40882d
        int64_t v270 = v265 + 1; // 0x408835
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
    goto lab_0x408672;
  lab_0x408672:
    // 0x408672
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x407f49;
}
// Address range: 0x4088e0 - 0x408af9
int64_t function_4088e0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x408943
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x4088f8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x408909
    g52 = v5;
    int64_t v6; // 0x4088e0
    int64_t v7; // 0x4088e0
    int64_t v8; // 0x4088e0
    int64_t v9; // 0x4088e0
    int64_t v10; // 0x4088e0
    int64_t v11; // 0x4088e0
    int64_t v12; // 0x4088e0
    uint32_t v13; // 0x408a00
    int64_t * v14; // 0x408a30
    int64_t v15; // 0x408a38
    uint32_t v16; // 0x408a80
    uint32_t v17; // 0x408a50
    int64_t * v18; // 0x4089e0
    int64_t v19; // 0x4089e0
    int64_t * v20; // 0x4089f0
    int64_t v21; // 0x4089f0
    int64_t * v22; // 0x4089c8
    int64_t v23; // 0x4089c8
    int64_t * v24; // 0x4089b0
    int64_t v25; // 0x4089b0
    int64_t * v26; // 0x408ad0
    uint32_t v27; // 0x408990
    int64_t v28; // 0x408ad0
    int64_t * v29; // 0x408ac0
    int64_t v30; // 0x408ac0
    uint32_t v31; // 0x408970
    int64_t * v32; // 0x408ae8
    int64_t v33; // 0x408ae8
    int64_t v34; // 0x408a93
    uint32_t v35; // 0x408950
    int64_t v36; // 0x408a67
    uint32_t v37; // 0x408918
    int32_t * v38; // 0x408a00
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x408990
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x408997
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x4089e0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x4089a3
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x408936
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x408970
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x408977
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x4089f0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x408983
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x408936
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x408950
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x408957
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x4089c8
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x408963
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x408936
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
            // 0x408918
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x408923
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x4089b0
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40892f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x408936
            break;
        }
        case 11: {
            // 0x408a00
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x408a0f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x408ad0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x408a1c
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x408936
            break;
        }
        case 12: {
            // 0x408a30
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x408936
            break;
        }
        case 15: {
            // 0x408a80
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x408a87
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x408ac0
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x408a93
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x408936
            break;
        }
        case 16: {
            // 0x408a50
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x408a5b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x408ae8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x408a67
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x408936
            break;
        }
        default: {
            // 0x408943
            return 0xffffffff;
        }
    }
    // 0x408936
    v3++;
    int64_t v39 = v4 + 32; // 0x408941
    while (v3 < v2) {
        // 0x408900
        v4 = v39;
        v5 = *(int32_t *)v4;
        g52 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x408990
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x408997
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x4089e0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x4089a3
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x408936
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x408970
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x408977
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x4089f0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x408983
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x408936
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x408950
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x408957
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x4089c8
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x408963
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x408936
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
                // 0x408918
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x408923
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x4089b0
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40892f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x408936
                break;
            }
            case 11: {
                // 0x408a00
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x408a0f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x408ad0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x408a1c
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x408936
                break;
            }
            case 12: {
                // 0x408a30
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x408936
                break;
            }
            case 15: {
                // 0x408a80
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x408a87
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x408ac0
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x408a93
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x408936
                break;
            }
            case 16: {
                // 0x408a50
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x408a5b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x408ae8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x408a67
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x408936
                break;
            }
            default: {
                // 0x408943
                return 0xffffffff;
            }
        }
        // 0x408936
        v3++;
        v39 = v4 + 32;
    }
    // 0x408943
    return 0;
}
// Address range: 0x408b00 - 0x409809
int64_t function_408b00(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x408b02
    int64_t v4 = v1 + 16; // 0x408b06
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x408b39
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x408b4e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x408b7b
    int32_t v8 = 0; // 0x408b80
    int64_t v9 = 0; // 0x408b80
    int64_t v10 = v3; // 0x408b80
    int64_t v11 = a1; // 0x408b80
    int64_t v12 = 0; // 0x408b80
    char v13; // 0x408b00
    int64_t v14; // 0x408b00
    int64_t v15; // 0x408b00
    int64_t v16; // 0x408b00
    int64_t v17; // 0x408b00
    int64_t v18; // 0x408b00
    int64_t v19; // 0x408b00
    int64_t v20; // 0x408b00
    int64_t v21; // 0x408b00
    int64_t v22; // 0x408b00
    int64_t v23; // 0x408b00
    int64_t v24; // 0x408b00
    int64_t v25; // 0x408b00
    int64_t v26; // 0x408b00
    int64_t v27; // 0x408b00
    int64_t v28; // 0x408b00
    int64_t v29; // 0x408b00
    int64_t v30; // 0x408b00
    int32_t v31; // 0x408b00
    int64_t v32; // 0x408b00
    int64_t v33; // 0x408b70
    int64_t v34; // 0x408bc0
    int64_t * v35; // 0x408be3
    int64_t v36; // 0x408c46
    if (v7 != 0) {
        // 0x408b70
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x408b00
        int64_t v38 = 7; // 0x408b00
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x408b00
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x408b70:
            // 0x408b70
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x408bb3
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x408bc8
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x408c04
                int64_t v43 = v42; // 0x408c04
                int64_t v44 = v43; // 0x408c0d
                int64_t v45 = v33; // 0x408c0d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x408fa0
                    char v47 = *(char *)v46; // 0x408fa4
                    int64_t v48 = v46; // 0x408fad
                    while (v47 < 58) {
                        // 0x408fa0
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x408faf
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x409645
                        char v52 = *(char *)v51; // 0x409645
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x409649
                        int64_t v54 = v33; // 0x40965d
                        int64_t v55 = v51; // 0x40965d
                        char v56 = v52; // 0x40965d
                        int64_t v57 = v53; // 0x40965d
                        bool v58 = v52 < 58; // 0x40965d
                        bool v59 = v52 < 58; // 0x40965d
                        char v60 = v52; // 0x40965d
                        int64_t v61 = v51; // 0x40965d
                        int64_t v62; // 0x409672
                        int64_t v63; // 0x409645
                        char v64; // 0x409645
                        int64_t v65; // 0x409649
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x4092c8_9;
                            }
                            // 0x409643
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
                                // 0x40965f
                                if (v64 >= 58) {
                                    goto lab_0x4092c8_9;
                                }
                                // 0x409643
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
                        int64_t v67 = v55; // 0x409618
                        while (v58) {
                            // 0x40961e
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
                                    goto lab_0x4092c8_9;
                                }
                                // 0x409643
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
                                    // 0x40965f
                                    if (v64 >= 58) {
                                        goto lab_0x4092c8_9;
                                    }
                                    // 0x409643
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
                            // 0x409614
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x40971d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x4092c8_9;
                        }
                        int64_t v68 = v54 + 2; // 0x40972e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x408b00
                v36 = v45;
                char v70; // 0x408b00
                while (true) {
                    // 0x408c46
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x408c60
                                *v41 = *v41 | 2;
                                // break -> 0x408c40
                                break;
                            }
                            case 43: {
                                // 0x408c70
                                *v41 = *v41 | 4;
                                // break -> 0x408c40
                                break;
                            }
                            case 32: {
                                // 0x408c80
                                *v41 = *v41 | 8;
                                // break -> 0x408c40
                                break;
                            }
                            case 35: {
                                // 0x408c90
                                *v41 = *v41 | 16;
                                // break -> 0x408c40
                                break;
                            }
                            case 48: {
                                // 0x408ca0
                                *v41 = *v41 | 32;
                                // break -> 0x408c40
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x408ca8
                                    break;
                                }
                                // 0x408c36
                                *v41 = *v41 | 64;
                                // break -> 0x408c40
                                break;
                            }
                        }
                    } else {
                        // 0x408c4f
                        *v41 = *v41 | 1;
                    }
                    // 0x408c40
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x408b00
                int64_t * v72; // 0x408bd1
                int64_t * v73; // 0x408bda
                if (v70 == 42) {
                    // 0x408d1d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x408d3d
                    int64_t v75 = v74; // 0x408d3d
                    int64_t v76 = v75 + 0xffffffd0; // 0x408d41
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x408d47
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40911d
                        char v80 = *(char *)v79; // 0x409121
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40911d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40912d
                        v26 = v79;
                        int64_t v81 = v75; // 0x409131
                        int64_t v82 = v36; // 0x409131
                        int64_t v83 = 0; // 0x409131
                        if (v80 != 36) {
                            goto lab_0x408d4d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x409162
                            int64_t v89 = v85; // 0x409162
                            int64_t v90 = v87; // 0x409162
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x409167
                            int64_t v95 = v92 + 1; // 0x40916a
                            char v96 = *(char *)v95; // 0x40916a
                            int64_t v97 = v96; // 0x40916a
                            while (v94 < v91) {
                                // 0x409181
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x4092c8_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40913b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x409144
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
                                    // 0x409181
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x4092c8_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40913b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x4097bb
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x4092c8_9;
                            }
                            // 0x4097c9
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x408d5c;
                        }
                    } else {
                        goto lab_0x408d4d;
                    }
                } else {
                    // 0x408cad
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x408b00
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x4093cb
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x4093d0
                        int64_t v102 = v71; // 0x4093d9
                        char * v103 = v100; // 0x4093d9
                        int64_t v104 = v36; // 0x4093d9
                        int64_t v105 = v71; // 0x4093d9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x4093e3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x4093e3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x4093e3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x4093f2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x409415
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x408cb8;
                }
            } else {
                goto lab_0x408b78;
            }
        }
    }
  lab_0x408b82:
    // 0x408b82
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x408ba4
    return 0;
  lab_0x4092c8_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x4092d3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x4092e5
    if (v3 != v115) {
        // 0x4092f0
        free((int64_t *)v115);
    }
    // 0x4092f5
    *__errno_location() = 22;
    // 0x408ba4
    return 0xffffffff;
  lab_0x4094a0_5:;
    // 0x4094a0
    int64_t v116; // 0x408b00
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x4094a5
    int64_t v119; // 0x408b00
    if (v4 == v117) {
        goto lab_0x4094b9_3;
    } else {
        // 0x4094a7
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x4094b9_3;
    }
  lab_0x4094b9_3:;
    int64_t v120 = *v5; // 0x4094b9
    int32_t * v121; // 0x4094c9
    if (v3 == v120) {
        // 0x4094c9
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x4094c4
    free((int64_t *)v120);
    // 0x4094c9
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x408b78:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x408b7b
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
        // break -> 0x408b82
        goto lab_0x408b82;
    }
    goto lab_0x408b70;
  lab_0x408d4d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x408d4d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4090f3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x4092c8_9;
        }
        // 0x40910b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x408d5c;
  lab_0x408cb8:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x408cbb
    int64_t v147 = v339; // 0x408cbb
    int64_t v145 = v338; // 0x408cbb
    int64_t v143 = v337; // 0x408cbb
    int64_t v186; // 0x408b00
    int64_t v190; // 0x408b00
    int64_t v189; // 0x408b00
    int64_t v188; // 0x408b00
    int64_t v187; // 0x408b00
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x408dc0;
    } else {
        goto lab_0x408cc1;
    }
  lab_0x408d5c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x408d5c
    int64_t v132 = v128; // 0x408d63
    int64_t v133 = v16; // 0x408d63
    int64_t v134 = v131; // 0x408d63
    int64_t v135; // 0x408b00
    int64_t v136; // 0x408b00
    int64_t v137; // 0x408b00
    int64_t v138; // 0x40900f
    if (v16 > v127) {
        goto lab_0x408d6c;
    } else {
        uint64_t v139 = 2 * v16; // 0x409005
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x4094a0_5;
        }
        int64_t size = 32 * v138; // 0x40902e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40958c
            if (mem == NULL) {
                goto lab_0x4094b9_3;
            }
            // 0x4095ae
            v135 = (int64_t)mem;
            goto lab_0x4095b9;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40904f
            int64_t v140 = *v6; // 0x409054
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x4094a0_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40904f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x4095b9;
            } else {
                goto lab_0x40908d;
            }
        }
    }
  lab_0x408cc1:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x408cc8
    int64_t v151 = v146; // 0x408cc8
    int64_t v152 = v144; // 0x408cc8
    uint64_t v153; // 0x408b00
    int64_t v154; // 0x408b00
    int64_t v155; // 0x408d07
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x408d0b
        int64_t v158; // 0x408b00
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x408e70
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x408d03
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x408e78
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x408d00
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x408d03
                    break;
                }
            }
        } else {
            // 0x408d10
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x408d03
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x408e78
    int64_t v162 = v161 % 256; // 0x408e84
    g53 = v162;
    int64_t v163 = 17; // 0x408e87
    int64_t v164 = v154; // 0x408e87
    int64_t v165 = v154; // 0x408e87
    switch ((char)v161) {
        case 0: {
            goto lab_0x408ef1;
        }
        case 28: {
            goto lab_0x409242;
        }
        case 30: {
            // 0x40926e
            v163 = 14;
            v164 = 99;
            goto lab_0x408e99;
        }
        case 32: {
            goto lab_0x409242;
        }
        case 33: {
            goto lab_0x409242;
        }
        case 34: {
            goto lab_0x409242;
        }
        case 46: {
            // 0x40925f
            v163 = 16;
            v164 = 115;
            goto lab_0x408e99;
        }
        case 51: {
            goto lab_0x40927d;
        }
        case 60: {
            goto lab_0x409242;
        }
        case 62: {
            int32_t v166 = v153; // 0x409199
            int32_t v167 = v166 - 7; // 0x409199
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40919f
            v163 = v168;
            v164 = v154;
            goto lab_0x408e99;
        }
        case 63: {
            goto lab_0x4091f0;
        }
        case 64: {
            goto lab_0x409242;
        }
        case 65: {
            goto lab_0x409242;
        }
        case 66: {
            goto lab_0x409242;
        }
        case 68: {
            goto lab_0x4091f0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x4091af
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x4091b5
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x4091bd
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x4091cb
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x4091df
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x408e99;
        }
        case 74: {
            goto lab_0x40927d;
        }
        case 75: {
            goto lab_0x408e99;
        }
        case 78: {
            int32_t v171 = v153; // 0x408e90
            int32_t v172 = v171 - 7; // 0x408e90
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x408e96
            v163 = v173;
            v164 = v154;
            goto lab_0x408e99;
        }
        case 80: {
            goto lab_0x40927d;
        }
        case 83: {
            goto lab_0x40927d;
        }
        default: {
            goto lab_0x4092c8_9;
        }
    }
  lab_0x408d6c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x408d83
        int64_t v178 = v176; // 0x408b00
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x408d78
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x408d78
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x408d91
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x408d9d
    int32_t v182 = *v181; // 0x408d9d
    if (v182 != 0) {
        // 0x40941e
        if (v182 != 5) {
            goto lab_0x4092c8_9;
        }
        unsigned char v183 = *(char *)v129; // 0x409427
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x408cb8;
    } else {
        // 0x408da7
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x408dad
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
            goto lab_0x408cc1;
        } else {
            goto lab_0x408dc0;
        }
    }
  lab_0x408dc0:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x408dc0
    char v197 = *v196; // 0x408dc0
    int64_t * v198; // 0x408be8
    *v198 = v192;
    int64_t v199; // 0x408b00
    int64_t v200; // 0x408b00
    int64_t v201; // 0x408b00
    int64_t v202; // 0x408b00
    int64_t v203; // 0x408b00
    int64_t * v204; // 0x408bf1
    int64_t * v205; // 0x408bfa
    int64_t v206; // 0x408dd9
    if (v197 != 42) {
        char v207 = *v196; // 0x408fc0
        int64_t v208 = v193; // 0x408fc9
        char * v209; // 0x408b00
        int64_t v210; // 0x408b00
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x408fd0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x408fd4
            v208 = v212;
            while (v214 < 58) {
                // 0x408fd0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x408fde
            v209 = v213;
            v210 = v212;
        } else {
            // 0x408fc0
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x408ff1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x408cc1;
    } else {
        // 0x408dcf
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x408def
        int64_t v219 = v218; // 0x408def
        int64_t v220 = v219 + 0xffffffd0; // 0x408df3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x408df9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x4096a4
            char v224 = *(char *)v223; // 0x4096a8
            v221 = v223;
            while (v224 < 58) {
                // 0x4096a4
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x4096b4
            v201 = v223;
            int64_t v225 = v219; // 0x4096b8
            int64_t v226 = v206; // 0x4096b8
            int64_t v227 = 0; // 0x4096b8
            if (v224 != 36) {
                goto lab_0x408dff;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x4096e9
                int64_t v233 = v229; // 0x4096e9
                int64_t v234 = v231; // 0x4096e9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x4096ee
                int64_t v239 = v236 + 1; // 0x4096f5
                char v240 = *(char *)v239; // 0x4096f9
                int64_t v241 = v240; // 0x4096f9
                while (v238 < v235) {
                    // 0x409707
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x4092c8_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x4096c2
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x4096cb
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
                        // 0x409707
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x4092c8_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x4096c2
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x4097d7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x4092c8_9;
                }
                // 0x4097e5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x408e0e;
            }
        } else {
            goto lab_0x408dff;
        }
    }
  lab_0x408ef1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x408ef6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x408efe
    *a2 = v245;
    int64_t v246; // 0x408b00
    int64_t v247; // 0x408b00
    int64_t dest_mem; // 0x408b00
    int64_t v248; // 0x408b00
    int64_t v249; // 0x4097f3
    if (v246 > v245) {
        // 0x408f0a
        goto lab_0x408b78;
    } else {
        if (v246 < 0) {
            // 0x4097f3
            v249 = *v6;
            v116 = v249;
            goto lab_0x4094a0_5;
        }
        int64_t v250 = 2 * v246; // 0x408f26
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x4097f3
            v249 = *v6;
            v116 = v249;
            goto lab_0x4094a0_5;
        }
        int64_t v251 = *v5; // 0x408f37
        int64_t size2 = 176 * v246; // 0x408f49
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x409099
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x4095fc
                v118 = v252;
                if (v4 == v252) {
                    // 0x4094c9
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x4094a7
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x4094b9_3;
            }
            goto lab_0x4090b4;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x408f5b
            if (mem4 == NULL) {
                // 0x4097f3
                v249 = *v6;
                v116 = v249;
                goto lab_0x4094a0_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x408f5b
            int64_t v254 = *v5; // 0x408f7d
            int64_t v255 = *a2; // 0x408f81
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x4090b4;
            } else {
                goto lab_0x408f8f;
            }
        }
    }
  lab_0x409242:
    // 0x409242
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x409257
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x408e99;
  lab_0x40927d:;
    uint32_t v335 = (int32_t)v153; // 0x409285
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40928b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x409293
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x4092a1
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4092ae
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408e99;
  lab_0x4091f0:;
    uint32_t v336 = (int32_t)v153; // 0x4091f8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4091fe
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x409206
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x409214
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x409221
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x408e99;
  lab_0x408e99:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x408b00
    int64_t v260; // 0x408b00
    int64_t * v261; // 0x408bff
    if (v259 == -1) {
        // 0x4093a4
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x4092c8_9;
        }
        // 0x4093bc
        v260 = v148;
    } else {
        // 0x408ea3
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x408ea8
    int64_t v264 = v258; // 0x408eaf
    int64_t v265 = v162; // 0x408eaf
    int64_t v266 = v263; // 0x408eaf
    int64_t v267; // 0x408b00
    int64_t v268; // 0x408b00
    int64_t v269; // 0x408b00
    int64_t v270; // 0x408b00
    int64_t v271; // 0x408b00
    if (v142 > v262) {
        goto lab_0x408eb5;
    } else {
        uint64_t v272 = 2 * v142; // 0x409318
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x409322
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x4094a0_5;
        }
        int64_t size3 = 32 * v273; // 0x409341
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x409354
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x409439
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x4094b9_3;
            }
            goto lab_0x409456;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x409361
            if (mem6 == NULL) {
                // 0x4097f3
                v249 = *v6;
                v116 = v249;
                goto lab_0x4094a0_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x409361
            int64_t v276 = v274 & 0xffffffff; // 0x409366
            int64_t v277 = *v6; // 0x409391
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x409456;
            } else {
                goto lab_0x40939b;
            }
        }
    }
  lab_0x408eb5:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x408ecb
        int64_t v282 = v279; // 0x408b00
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x408ec0
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x408ec0
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x408ed9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x408ee5
    int32_t v286 = *v285; // 0x408ee5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40930a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x4092c8_9;
        }
    } else {
        // 0x408eef
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x408ef1;
  lab_0x4095b9:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x4095b9
    int64_t * v290; // 0x408b00
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40908d;
  lab_0x40908d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x408d6c;
  lab_0x408dff:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x408dff
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40967a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x4092c8_9;
        }
        // 0x409692
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x408e0e;
  lab_0x408e0e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x408e0e
    int64_t v300 = v296; // 0x408e15
    int64_t v301 = v191; // 0x408e15
    int64_t v302 = v299; // 0x408e15
    int64_t v303; // 0x408b00
    int64_t v304; // 0x408b00
    int64_t v305; // 0x408b00
    int64_t v306; // 0x4094f2
    if (v191 > v295) {
        goto lab_0x408e1e;
    } else {
        uint64_t v307 = 2 * v191; // 0x4094e8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x4094a0_5;
        }
        int64_t size4 = 32 * v306; // 0x40950d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40973e
            if (mem7 == NULL) {
                goto lab_0x4094b9_3;
            }
            // 0x409760
            v304 = (int64_t)mem7;
            goto lab_0x40976b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x40952e
            int64_t v308 = *v6; // 0x409533
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x4094a0_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x40952e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40976b;
            } else {
                goto lab_0x40956c;
            }
        }
    }
  lab_0x4090b4:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x408b00
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x408f8f;
  lab_0x408f8f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x408b78;
  lab_0x409456:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40946c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40939b;
  lab_0x40939b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x408eb5;
  lab_0x408e1e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x408e33
        int64_t v324 = v322; // 0x408b00
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x408e28
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x408e28
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x408e41
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x408e4e
    int32_t v328 = *v327; // 0x408e4e
    if (v328 != 0) {
        // 0x409575
        if (v328 != 5) {
            goto lab_0x4092c8_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40957e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x408e58
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x408e61
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x408cc1;
  lab_0x40976b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40976b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40956c;
  lab_0x40956c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x408e1e;
}
// Address range: 0x409810 - 0x40986d
int64_t function_409810(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409810
    return function_401570();
}
// Address range: 0x409870 - 0x409871
int64_t function_409870(void) {
    // 0x409870
    int64_t result; // 0x409870
    return result;
}
// Address range: 0x409880 - 0x409898
int64_t function_409880(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409880
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x409898 - 0x4098b8
int64_t function_409898(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x4098a2
    while (*(int64_t *)v1 != -1) {
        // 0x4098a3
        v1 -= 8;
    }
    // 0x4098b4
    return result;
}
