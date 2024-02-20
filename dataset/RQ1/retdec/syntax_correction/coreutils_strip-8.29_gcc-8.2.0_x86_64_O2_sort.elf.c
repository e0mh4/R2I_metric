#include "decompile_retdec.h"
// Address range: 0x402f00 - 0x402f05
int64_t function_402f00(void) {
    // 0x402f00
    abort();
    // UNREACHABLE
}
// Address range: 0x402f05 - 0x402f0a
int64_t function_402f05(void) {
    // 0x402f05
    abort();
    // UNREACHABLE
}
// Address range: 0x402f0a - 0x402f0f
int64_t function_402f0a(void) {
    // 0x402f0a
    return abort();
}
// Address range: 0x402f0f - 0x402f14
int64_t function_402f0f(void) {
    // 0x402f0f
    abort();
    // UNREACHABLE
}
// Address range: 0x402f14 - 0x402f19
int64_t function_402f14(void) {
    // 0x402f14
    abort();
    // UNREACHABLE
}
// Address range: 0x402f19 - 0x402f1e
int64_t function_402f19(void) {
    // 0x402f19
    abort();
    // UNREACHABLE
}
// Address range: 0x402f1e - 0x402f23
int64_t function_402f1e(void) {
    // 0x402f1e
    abort();
    // UNREACHABLE
}
// Address range: 0x402f23 - 0x402f28
int64_t function_402f23(void) {
    // 0x402f23
    abort();
    // UNREACHABLE
}
// Address range: 0x402f28 - 0x402f2d
int64_t function_402f28(void) {
    // 0x402f28
    abort();
    // UNREACHABLE
}
// Address range: 0x402f2d - 0x402f32
int64_t function_402f2d(void) {
    // 0x402f2d
    abort();
    // UNREACHABLE
}
// Address range: 0x402f32 - 0x402f37
int64_t function_402f32(void) {
    // 0x402f32
    abort();
    // UNREACHABLE
}
// Address range: 0x402f37 - 0x402f3c
int64_t function_402f37(void) {
    // 0x402f37
    return abort();
}
// Address range: 0x402f3c - 0x402f41
int64_t function_402f3c(void) {
    // 0x402f3c
    abort();
    // UNREACHABLE
}
// Address range: 0x402f50 - 0x405830
int64_t function_402f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x402f50
    int128_t v1; // 0x402f50
    int128_t v2 = v1;
    char * env_val = getenv("POSIXLY_CORRECT"); // 0x402f6b
    int64_t v3 = function_40dbe0(); // 0x402f7c
    function_40dc60(a2);
    char * locale = setlocale(LC_ALL, (char *)&g7); // 0x402fa3
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g41 = 2;
    g103 = function_40bd10(3, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    char v4 = function_40bd10(2, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"); // 0x402fed
    *(char *)&g102 = v4;
    struct lconv * locale_info = localeconv(); // 0x402ff3
    int64_t v5 = *(int64_t *)locale_info; // 0x402ff8
    unsigned char v6 = *(char *)v5; // 0x402ffb
    g105 = v6;
    if (v6 == 0) {
        // 0x403120
        g105 = 46;
        goto lab_0x403017;
    } else {
        // 0x40300d
        if (*(char *)(v5 + 1) != 0) {
            // 0x403120
            g105 = 46;
            goto lab_0x403017;
        } else {
            goto lab_0x403017;
        }
    }
  lab_0x405524_2:
    // 0x405524
    function_405d30((int64_t)g120, "field number is zero");
    int64_t v7; // 0x402f50
    int64_t v8 = v7; // 0x405530
    int64_t v9; // 0x402f50
    int64_t v10 = v9; // 0x405530
    goto lab_0x405535;
  lab_0x4052df_2:;
    // 0x4052df
    int64_t v342; // 0x402f50
    function_40f630(4, *(int64_t *)v342);
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    __fprintf_chk(g55, 1, "%s\n", dcgettext(NULL, "file operands cannot be combined with --files0-from", 5));
    goto lab_0x40533e;
  lab_0x405535:
    // 0x405535
    function_405d00((int64_t *)"cC");
    int64_t * v11 = (int64_t *)(v8 + 32); // 0x40553a
    int64_t v12 = v8; // 0x40553a
    int64_t v13 = v10; // 0x40553a
    goto lab_0x40553f;
  lab_0x4054e4:
    // 0x4054e4
    error(2, (int32_t)"multiple output files specified" ^ (int32_t)"multiple output files specified", dcgettext(NULL, "multiple output files specified", 5));
    int64_t v36; // 0x402f50
    int64_t v38 = v36; // 0x405501
    int64_t v37; // 0x402f50
    int64_t v39 = v37; // 0x405501
    goto lab_0x405506;
  lab_0x4054c2:
    // 0x4054c2
    error(2, (int32_t)"multiple compress programs specified" ^ (int32_t)"multiple compress programs specified", dcgettext(NULL, "multiple compress programs specified", 5));
    int64_t v34; // 0x402f50
    v36 = v34;
    int64_t v35; // 0x402f50
    v37 = v35;
    goto lab_0x4054e4;
  lab_0x4054a0:
    // 0x4054a0
    error(2, (int32_t)"multiple random sources specified" ^ (int32_t)"multiple random sources specified", dcgettext(NULL, "multiple random sources specified", 5));
    int64_t v32; // 0x402f50
    v34 = v32;
    int64_t v33; // 0x402f50
    v35 = v33;
    goto lab_0x4054c2;
  lab_0x4036df:;
    // 0x4036df
    int64_t v43; // 0x402f50
    int64_t v44 = v43; // 0x4036e6
    int64_t v45; // 0x402f50
    int64_t v46 = v45; // 0x4036e6
    int64_t v47; // 0x402f50
    int64_t v48 = v47; // 0x4036e6
    int64_t v49; // 0x402f50
    int64_t v50 = v49; // 0x4036e6
    int64_t v51; // 0x402f50
    int64_t v52 = v51; // 0x4036e6
    int32_t v53; // 0x402f50
    int32_t v54 = v53; // 0x4036e6
    char * v55; // 0x402f50
    char * v56 = v55; // 0x4036e6
    int32_t v57; // 0x402f50
    int32_t v58 = v57; // 0x4036e6
    int64_t v59; // 0x402f50
    int64_t v60 = v59; // 0x4036e6
    int64_t v61; // 0x402f50
    int64_t v62 = v61; // 0x4036e6
    int64_t v63 = v43; // 0x4036e6
    int64_t v64; // 0x402f50
    int64_t v65 = v64; // 0x4036e6
    int64_t v66; // 0x402f50
    int64_t v67 = v66; // 0x4036e6
    if (g81 == 0) {
        goto lab_0x40408c;
    } else {
        goto lab_0x4036ec;
    }
  lab_0x405506:;
    char * v40 = (char *)v38; // 0x405506
    char v41 = *v40; // 0x405506
    char v42 = v41; // 0x40550a
    if (v41 != 0) {
        goto lab_0x405510;
    } else {
        // 0x40550c
        *v40 = 111;
        v42 = 111;
        goto lab_0x405510;
    }
  lab_0x40543a:;
    char * v26 = dcgettext(NULL, (char *)(int64_t)"close failed", 5); // 0x40543c
    int64_t v24; // 0x402f50
    function_405dd0((int64_t)v26, (int64_t *)*(int64_t *)(v24 + 24));
    int64_t v27 = 5; // 0x405449
    int64_t v28 = v24; // 0x405449
    int64_t v25; // 0x402f50
    int64_t v29 = v25; // 0x405449
    goto lab_0x40544e_2;
  lab_0x405430:
    // 0x405430
    goto lab_0x40543a;
  lab_0x404653:;
    // 0x404653
    int64_t v92; // 0x402f50
    int64_t v83 = v92;
    int64_t v89 = *(int64_t *)v83; // 0x404653
    int64_t v73 = (int64_t)&g19; // 0x402f50
    int64_t v71 = v89; // 0x402f50
    int64_t v79 = 2; // 0x402f50
    goto lab_dec_label_pc_unknown;
  lab_0x403a2b:;
    int64_t v188; // 0x402f50
    int64_t v189; // 0x402f50
    int64_t v190; // 0x402f50
    int64_t v191; // 0x402f50
    int64_t v192; // 0x402f50
    int32_t v193; // 0x402f50
    int64_t v194; // 0x403a18
    int64_t v195; // 0x403a18
    if ((char)v189 != 0) {
        // 0x404570
        v191 = v195;
        v192 = v195;
        if ((char)v188 != 0) {
            goto lab_0x4037f0;
        } else {
            goto lab_0x4037c3;
        }
    } else {
        // 0x403a33
        v191 = v195;
        if (g32 != 128) {
            goto lab_0x4037c3;
        } else {
            // 0x403a43
            if (*(char *)v194 != 0) {
                goto lab_0x403a54;
            } else {
                if (v193 == 0) {
                    goto lab_0x403a69;
                } else {
                    // 0x403a4d
                    if (*(int64_t *)(v190 + 8) != 0) {
                        goto lab_0x403a69;
                    } else {
                        goto lab_0x403a54;
                    }
                }
            }
        }
    }
  lab_0x4037c3:
    // 0x4037c3
    v192 = 0;
    int64_t * v196; // 0x4038b1
    int64_t * v197; // 0x4038b4
    if (v191 == 0) {
        goto lab_0x4037f0;
    } else {
        int64_t v198 = *v197 + 1; // 0x4037cc
        if (v198 == 0) {
            goto lab_0x404615;
        } else {
            int64_t v199 = *v196 + 1; // 0x4037d3
            v192 = v198;
            if (v198 > (v199 != 0 ? v199 : 1)) {
                goto lab_0x404615;
            } else {
                goto lab_0x4037f0;
            }
        }
    }
  lab_0x4037f0:;
    int64_t v200 = v192;
    int64_t v201 = 0; // 0x4037fb
    int64_t v202; // 0x402f50
    if (v202 != 0) {
        int64_t v203 = *(int64_t *)(v190 + 32); // 0x4037fd
        v201 = v202 == v203 ? 0 : v202;
    }
    int64_t v204 = v201;
    int64_t v205 = 0; // 0x403812
    int64_t v206; // 0x402f50
    if (v206 != 0) {
        int64_t v207 = *(int64_t *)(v190 + 40); // 0x403814
        v205 = v206 == v207 ? 0 : v206;
    }
    int64_t v208 = v205;
    int64_t v209; // 0x402f50
    int64_t v210 = v209 + 1; // 0x403822
    char v211 = *(char *)(v190 + 55); // 0x403892
    int64_t v212 = *(int64_t *)(v190 + 64); // 0x403896
    int32_t v213; // 0x402f50
    int32_t v214 = (v211 ^ 1) & (char)v213; // 0x40389d
    int64_t v215 = v204; // 0x4038a7
    int64_t v216 = v208; // 0x4038a7
    int32_t v217 = v214; // 0x4038a7
    int64_t v218 = v212; // 0x4038a7
    int64_t v219 = v210; // 0x4038a7
    int64_t v220; // 0x402f50
    int64_t v221 = v220; // 0x4038a7
    if (v212 == 0) {
        // break -> 0x403fb1
        goto lab_0x403fb1;
    }
    goto lab_0x4038ad;
  lab_0x403a54:
    // 0x403a54
    v191 = v195;
    if (*(char *)(v190 + 49) != 0) {
        goto lab_0x4037c3;
    } else {
        // 0x403a5e
        v191 = v195;
        if (*(int64_t *)(v190 + 24) == 0) {
            goto lab_0x4037c3;
        } else {
            goto lab_0x403a69;
        }
    }
  lab_0x404615:;
    char * format2 = dcgettext(NULL, "key %lu is numeric and spans multiple fields", 5); // 0x404621
    error(0, (int32_t)"key %lu is numeric and spans multiple fields" ^ (int32_t)"key %lu is numeric and spans multiple fields", format2);
    v192 = (int64_t)format2;
    goto lab_0x4037f0;
  lab_0x403a69:
    // 0x403a69
    error(0, (int32_t)"leading blanks are significant in key %lu; consider also specifying 'b'" ^ (int32_t)"leading blanks are significant in key %lu; consider also specifying 'b'", dcgettext(NULL, "leading blanks are significant in key %lu; consider also specifying 'b'", 5));
    int64_t * v240; // 0x403a18
    v191 = *v240 & 0xffff00ff0000;
    goto lab_0x4037c3;
  lab_0x403650:;
    // 0x403650
    int64_t v242; // 0x402f50
    int64_t v243 = *(int64_t *)(v242 + 64); // 0x403654
    int64_t v244; // 0x402f50
    int64_t v245 = v244 | (int64_t)*(char *)(v242 + 51); // 0x40365d
    int64_t v246 = v243; // 0x40365d
    if (v243 == 0) {
        // break -> 0x403662
        goto lab_0x403662_2;
    }
    goto lab_0x403640;
  lab_0x403640:;
    int64_t v247 = v245; // 0x402f50
    int64_t v248 = v246; // 0x402f50
    goto lab_0x403640_2;
  lab_0x40547e:
    // 0x40547e
    error(2, (int32_t)"incompatible tabs" ^ (int32_t)"incompatible tabs", dcgettext(NULL, "incompatible tabs", 5));
    int64_t v30; // 0x402f50
    v32 = v30;
    int64_t v31; // 0x402f50
    v33 = v31;
    goto lab_0x4054a0;
  lab_0x4057af:;
    // 0x4057af
    int64_t v68; // 0x402f50
    function_40f630(4, v68);
    error(2, (int32_t)"cannot read file names from %s" ^ (int32_t)"cannot read file names from %s", dcgettext(NULL, "cannot read file names from %s", 5));
    int64_t v69 = 2; // 0x4057dc
    goto lab_0x4057e1;
  lab_0x405562:;
    // 0x405562
    int64_t v20; // 0x402f50
    function_40f880(v20);
    error(0, (int32_t)"invalid --%s argument %s" ^ (int32_t)"invalid --%s argument %s", dcgettext(NULL, "invalid --%s argument %s", 5));
    int64_t v21 = function_40f880((int64_t)&g10); // 0x4055a7
    char * format = dcgettext((char *)((int32_t)&g10 ^ (int32_t)&g10), "minimum --%s argument is %s", 5); // 0x4055bb
    error(2, (int32_t)"minimum --%s argument is %s" ^ (int32_t)"minimum --%s argument is %s", format);
    char * v22 = dcgettext(NULL, "open failed", 5); // 0x4055e3
    int64_t v19; // 0x402f50
    function_405dd0((int64_t)v22, (int64_t *)*(int64_t *)(v19 + 32));
    goto lab_0x40541e;
  lab_0x405778:;
    // 0x405778
    int64_t v257; // 0x402f50
    function_40f630(4, v257);
    error(2, (int32_t)"no input from %s" ^ (int32_t)"no input from %s", dcgettext(NULL, "no input from %s", 5));
    v68 = (int32_t)"no input from %s" ^ (int32_t)"no input from %s";
    goto lab_0x4057af;
  lab_0x405549:;
    // 0x405549
    int64_t v14; // 0x402f50
    function_405d30(*(int64_t *)(v14 + 72), "stray character in field spec");
    int64_t * v16 = (int64_t *)(v14 + 8); // 0x405553
    int64_t v17 = v14; // 0x405553
    int64_t v15; // 0x402f50
    int64_t v18 = v15; // 0x405553
    goto lab_0x405558;
  lab_0x405732:
    // 0x405732
    function_40f700(0, 3, v257);
    error(2, (int32_t)"%s:%lu: invalid zero-length file name" ^ (int32_t)"%s:%lu: invalid zero-length file name", dcgettext(NULL, "%s:%lu: invalid zero-length file name", 5));
    // 0x40576e
    function_407dd0(v257);
    goto lab_0x405778;
  lab_0x403460:;
    int64_t v258 = g49; // 0x403467
    int64_t v259; // 0x402f50
    int64_t v260 = v259; // 0x403467
    int64_t v261; // 0x402f50
    int64_t v262 = v261; // 0x403467
    goto lab_0x403430;
  lab_0x403488:;
    // 0x403488
    int64_t v311; // 0x402f50
    int64_t v281; // 0x402f50
    int64_t v287; // 0x402f50
    int32_t v124; // bp-760, 0x402f50
    int64_t v645 = function_412f30(v287 & 0xffffffff, v281, "-bcCdfghik:mMno:rRsS:t:T:uVy:z", &g5, &v124, v311); // 0x40349f
    int64_t v379 = v645 & 0xffffffff; // 0x4034a4
    v259 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
    v261 = v379;
    int64_t v147; // 0x402f50
    int64_t v312; // 0x402f50
    int64_t v88; // 0x402f50
    int64_t v412; // 0x402f50
    int64_t v611; // 0x402f50
    int64_t v313; // 0x402f50
    int64_t v314; // 0x402f50
    int64_t v425; // 0x402f50
    int64_t v315; // 0x402f50
    int64_t v283; // 0x402f50
    int64_t v423; // 0x402f50
    int64_t v421; // 0x402f50
    int64_t v316; // 0x402f50
    int64_t v643; // 0x402f50
    int64_t v639; // 0x402f50
    int64_t v317; // 0x402f50
    int64_t v286; // 0x402f50
    int64_t v419; // 0x402f50
    int64_t v310; // 0x402f50
    int64_t v642; // 0x402f50
    int64_t v411; // 0x402f50
    int64_t v482; // 0x402f50
    int64_t v483; // 0x402f50
    int64_t v485; // 0x402f50
    int64_t v417; // 0x402f50
    int64_t v309; // 0x402f50
    int64_t v410; // 0x402f50
    int64_t v427; // 0x402f50
    int64_t v134; // 0x402f50
    int64_t v308; // 0x402f50
    int64_t v409; // 0x402f50
    int64_t v429; // 0x402f50
    int64_t v416; // 0x402f50
    int64_t v408; // 0x402f50
    int64_t v307; // 0x402f50
    int64_t v641; // 0x402f50
    char * oact; // bp-344, 0x402f50
    int32_t v299; // 0x402f50
    int32_t v272; // 0x402f50
    int32_t v440; // 0x402f50
    int64_t v298; // 0x402f50
    int64_t v270; // 0x402f50
    int64_t v442; // 0x402f50
    int64_t v297; // 0x402f50
    int64_t v268; // 0x402f50
    int64_t v444; // 0x402f50
    int64_t v96; // bp-488, 0x402f50
    int64_t v451; // bp-624, 0x402f50
    int64_t v453; // bp-632, 0x402f50
    int64_t v455; // bp-648, 0x402f50
    int64_t v97; // bp-712, 0x402f50
    int32_t v292; // 0x402f50
    int32_t v293; // 0x402f50
    int32_t v414; // 0x402f50
    char v489; // 0x402f50
    int64_t v290; // 0x402f50
    int64_t v266; // 0x402f50
    int64_t v446; // 0x402f50
    int64_t v302; // 0x402f50
    int64_t v278; // 0x402f50
    int64_t v434; // 0x402f50
    char v295; // 0x402f50
    char v296; // 0x402f50
    char * v300; // 0x402f50
    char * v274; // 0x402f50
    char * v438; // 0x402f50
    char * v294; // 0x402f50
    char * str5; // 0x402f50
    char * v291; // 0x402f50
    char * str3; // 0x402f50
    int32_t v301; // 0x402f50
    int32_t v276; // 0x402f50
    int32_t v436; // 0x402f50
    int64_t v612; // 0x402f50
    int32_t v614; // 0x403b5b
    int64_t v644; // 0x4034d4
    int64_t v616; // 0x403ba1
    int64_t v85; // 0x402f64
    int32_t v604; // 0x402f50
    int128_t v303; // 0x402f50
    int128_t v304; // 0x402f50
    int128_t v432; // 0x402f50
    int128_t v305; // 0x402f50
    int128_t v306; // 0x402f50
    if ((int32_t)v645 == -1) {
        goto lab_0x403460;
    } else {
        int64_t v646 = v645 + 131; // 0x4034ac
        g123 = v646 & 0xffffffff;
        v290 = v266;
        v291 = str3;
        v292 = v293;
        v294 = str5;
        v295 = 1;
        v297 = v268;
        v298 = v270;
        v299 = v272;
        v300 = v274;
        v301 = v276;
        v302 = v278;
        v303 = v304;
        v305 = v306;
        v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
        v308 = v287;
        v309 = v281;
        v310 = v311;
        v312 = v88;
        v313 = v314;
        v315 = v283;
        v316 = v379;
        v317 = v286;
        v644 = v311;
        v643 = v379;
        v641 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
        v642 = v311;
        v639 = v379;
        v414 = v293;
        v408 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
        v409 = v287;
        v410 = v281;
        v411 = v311;
        v412 = v88;
        int32_t v647; // bp-640, 0x402f50
        switch ((int32_t)v646) {
            case 0: {
                // 0x403eb2
                function_4110d0((int64_t)g52, "sort", "GNU coreutils", (int64_t)g39, "Mike Haertel", "Paul Eggert");
                exit(0);
                // UNREACHABLE
            }
            case 1: {
                // 0x405192
                function_40a0d0(0);
                // UNREACHABLE
            }
            case 132: {
                // 0x403ee7
                if (*g120 == 43) {
                    int32_t v648 = g49; // 0x4043dc
                    char v649 = 0; // 0x4043e5
                    if (v648 != (int32_t)v287) {
                        int64_t v650 = *(int64_t *)(8 * (int64_t)v648 + v281); // 0x4043eb
                        char v651 = *(char *)v650; // 0x4043f8
                        v649 = 0;
                        if (v651 == 45) {
                            char v652 = *(char *)(v650 + 1); // 0x405155
                            v649 = (int32_t)v652 < 58;
                        }
                    }
                    // 0x404401
                    v489 = v649;
                    char v653 = v489 & (char)(v278 == 0) | (char)v276; // 0x40440e
                    if (v653 == 0) {
                        goto lab_0x403ef7;
                    } else {
                        // 0x404418
                        __asm_rep_stosd_memset((char *)&v455, 0, 18);
                        v453 = -1;
                        int64_t v654; // 0x403ee7
                        int64_t v655 = function_407c00(v654 + 1, &v455, 0); // 0x404443
                        if (v655 == 0) {
                            int64_t v656 = v455; // 0x40521a
                            int32_t v657 = v647; // 0x405222
                            if ((v656 || (int64_t)v657) == 0) {
                                // 0x405237
                                v455 = -1;
                            }
                            goto lab_0x403ef7;
                        } else {
                            char v658 = *(char *)v655; // 0x404458
                            if (v658 == 46) {
                                int64_t v659 = function_407c00(v655 + 1, (int64_t *)&v647, 0); // 0x4052bf
                                int64_t v660 = v455; // 0x4052c4
                                int32_t v661 = v647; // 0x4052cc
                                v482 = v659;
                                v483 = v659;
                                if ((v660 || (int64_t)v661) == 0) {
                                    goto lab_0x404473;
                                } else {
                                    goto lab_0x40447f;
                                }
                            } else {
                                int64_t v662 = v455; // 0x404461
                                int32_t v663 = v647; // 0x404469
                                v482 = v655;
                                v485 = v655;
                                if ((v662 || (int64_t)v663) != 0) {
                                    goto lab_0x404488;
                                } else {
                                    goto lab_0x404473;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x403ef7;
                }
            }
            case 198: {
                goto lab_0x40355e;
            }
            case 208: {
                goto lab_0x4034f4;
            }
            case 213: {
                goto lab_0x4034f4;
            }
            case 214: {
                int64_t v664 = (int64_t)g120;
                uint32_t v665 = v124; // 0x403f0c
                int64_t v666 = function_411b40(v664, v604, 10, &v96, (int32_t)"EgGkKmMPtTYZ", v311); // 0x403f37
                if ((int32_t)v666 != 0) {
                    int64_t v667 = v666; // 0x40436e
                    int64_t v668; // 0x402f50
                    int32_t v669; // 0x403f3c
                    if (v669 != 2) {
                        // 0x40438e
                        v668 = v667;
                        function_411ab0(v668 & 0xffffffff, (int64_t)v665, 83, &g5, (char)v664);
                        // UNREACHABLE
                    }
                    char * v670 = oact; // 0x404370
                    int64_t v671 = (int64_t)v670; // 0x404370
                    char v672 = *(char *)(v671 - 1); // 0x404378
                    v667 = v666;
                    if (v672 != 57 && (int32_t)v672 >= 57) {
                        // 0x40438e
                        v668 = v667;
                        function_411ab0(v668 & 0xffffffff, (int64_t)v665, 83, &g5, (char)v664);
                        // UNREACHABLE
                    }
                    char v673 = *(char *)(v671 + 1); // 0x404384
                    v667 = v666;
                    if (v673 != 0) {
                        // 0x40438e
                        v668 = v667;
                        function_411ab0(v668 & 0xffffffff, (int64_t)v665, 83, &g5, (char)v664);
                        // UNREACHABLE
                    }
                    char v674 = *v670; // 0x405204
                    v446 = v266;
                    v444 = v268;
                    v442 = v270;
                    v440 = v272;
                    v438 = v274;
                    v436 = v276;
                    v434 = v278;
                    v432 = v304;
                    v429 = v287;
                    v427 = v281;
                    v425 = v314;
                    v423 = v283;
                    v421 = v379;
                    v419 = v286;
                    v667 = v666;
                    switch (v674) {
                        case 37: {
                            // 0x405250
                            function_40d840();
                            int64_t v675 = v96; // 0x405255
                            int128_t v676; // 0x402f50
                            int64_t v677; // 0x402f50
                            if (v675 < 0) {
                                // 0x405396
                                __asm_pxor(v306, v306);
                                int64_t v678 = v675 / 2 | v675 % 2; // 0x4053a3
                                int128_t v679 = __asm_cvtsi2sd(v678); // 0x4053a6
                                v677 = v678;
                                v676 = __asm_addsd(v679, v679);
                            } else {
                                // 0x405266
                                __asm_pxor(v306, v306);
                                int128_t v680 = __asm_cvtsi2sd(v675); // 0x40526a
                                v677 = v675;
                                v676 = v680;
                            }
                            int128_t v681 = v676;
                            int64_t v682 = v677;
                            int128_t v683 = __asm_mulsd(v304, v681); // 0x40526f
                            int128_t v684 = __asm_movsd_3(0x43f0000000000000); // 0x405273
                            int128_t v685 = __asm_divsd(v683, 0x4059000000000000); // 0x40527b
                            __asm_comisd(v684, v685);
                            v667 = 1;
                            if (v682 == 0) {
                              lab_0x40438e:
                                // 0x40438e
                                v668 = v667;
                                function_411ab0(v668 & 0xffffffff, (int64_t)v665, 83, &g5, (char)v664);
                                // UNREACHABLE
                            }
                            // 0x40528d
                            __asm_comisd(v685, __asm_movsd_3(0x43e0000000000000));
                            goto lab_0x40536f;
                        }
                        case 98: {
                            goto lab_0x403f7f;
                        }
                        default: {
                            goto lab_0x40438e;
                        }
                    }
                } else {
                    char v686 = *(char *)((int64_t)oact - 1); // 0x403f4c
                    v446 = v266;
                    v444 = v268;
                    v442 = v270;
                    v440 = v272;
                    v438 = v274;
                    v436 = v276;
                    v434 = v278;
                    v432 = v304;
                    v429 = v287;
                    v427 = v281;
                    v425 = v314;
                    v423 = v283;
                    v421 = v379;
                    v419 = v286;
                    if (v686 == 57 || (int32_t)v686 < 57) {
                        // 0x403f58
                        if (v96 >= 0x40000000000000) {
                            // 0x40438e
                            function_411ab0(1, (int64_t)v665, 83, &g5, (char)v664);
                            // UNREACHABLE
                        }
                        // 0x403f73
                        v96 *= 1024;
                        v446 = v266;
                        v444 = v268;
                        v442 = v270;
                        v440 = v272;
                        v438 = v274;
                        v436 = v276;
                        v434 = v278;
                        v432 = v304;
                        v429 = v287;
                        v427 = v281;
                        v425 = v314;
                        v423 = v283;
                        v421 = v379;
                        v419 = v286;
                    }
                    goto lab_0x403f7f;
                }
            }
            case 215: {
                // 0x403ea1
                function_40a010((int64_t)g120);
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 217: {
                goto lab_0x4034f4;
            }
            case 229: {
                goto lab_0x4034f4;
            }
            case 230: {
                goto lab_0x40355e;
            }
            case 231: {
                goto lab_0x4034f4;
            }
            case 233: {
                goto lab_0x4034f4;
            }
            case 234: {
                goto lab_0x4034f4;
            }
            case 235: {
                goto lab_0x4034f4;
            }
            case 236: {
                goto lab_0x4034f4;
            }
            case 238: {
                // 0x403d8d
                __asm_rep_stosd_memset((char *)&v455, 0, 18);
                v453 = -1;
                int64_t v687 = function_407c00((int64_t)g120, &v455, (int64_t)"invalid number at field start"); // 0x403dbe
                int64_t v688 = v455; // 0x403dc3
                int64_t v689 = v688 - 1; // 0x403dcb
                v455 = v689;
                v7 = v85;
                v9 = v88;
                if (v688 == 0) {
                    goto lab_0x405524_2;
                }
                // 0x403de0
                int32_t v690; // 0x402f50
                int64_t v691; // 0x402f50
                int64_t v692; // 0x402f50
                if (*(char *)v687 == 46) {
                    int64_t v693 = function_407c00(v687 + 1, (int64_t *)&v647, (int64_t)"invalid number after '.'"); // 0x405097
                    int32_t v694 = v647; // 0x40509c
                    int32_t v695 = v694 - 1; // 0x4050a4
                    v647 = v695;
                    if (v694 == 0) {
                        // 0x4050b9
                        function_405d30((int64_t)g120, "character offset is zero");
                        uint64_t v696 = __asm_cvttsd2si(v306);
                        uint64_t v697 = 34 * (int64_t)*(int32_t *)&g30; // 0x404dc9
                        int64_t v698 = v697 < v696 ? v696 : v697; // 0x404dd0
                        g58 = v698;
                        // 0x404bd4
                        v147 = v88;
                        uint64_t v699 = v314 * v281 + 1; // 0x404be4
                        v134 = v698;
                        if (v314 != v699 / v281) {
                            goto lab_0x404f99;
                        } else {
                            // 0x404bf7
                            v134 = v698;
                            if (v699 >= v698 - v287) {
                                goto lab_0x404f99;
                            } else {
                                // 0x404c06
                                v134 = v699 + v287;
                                if (v286 + 1 >= v283) {
                                    goto lab_0x404f99;
                                }
                            }
                        }
                    }
                    // 0x405086
                    v690 = v695;
                    v691 = v455;
                    v692 = v693;
                } else {
                    // 0x403de0
                    v690 = v647;
                    v691 = v689;
                    v692 = v687;
                }
                // 0x403de9
                if ((v691 || (int64_t)v690) == 0) {
                    // 0x4043cb
                    v455 = -1;
                }
                int64_t v700 = function_405c00((int64_t *)v692, &v455, 0); // 0x403e0c
                char * v701 = (char *)v700;
                char * v702; // 0x402f50
                if (*v701 == 44) {
                    int64_t v703 = function_407c00(v700 + 1, (int64_t *)v266, (int64_t)"invalid number after ','"); // 0x405041
                    int64_t v704 = v453; // 0x405046
                    v453 = v704 - 1;
                    v7 = v85;
                    v9 = v88;
                    if (v704 == 0) {
                        goto lab_0x405524_2;
                    }
                    int64_t v705 = v703; // 0x405066
                    if (*(char *)v703 == 46) {
                        // 0x405177
                        v705 = function_407c00(v703 + 1, &v451, (int64_t)"invalid number after '.'");
                    }
                    // 0x40506c
                    v702 = (char *)function_405c00((int64_t *)v705, &v455, 1);
                } else {
                    // 0x403e1a
                    v453 = -1;
                    v451 = 0;
                    v702 = v701;
                }
                // 0x403e32
                if (*v702 != 0) {
                  lab_0x40581c:
                    // 0x40581c
                    return function_405d30((int64_t)g120, "stray character in field spec");
                }
                int64_t v706 = function_411410(&v455, 72); // 0x403e48
                v417 = v706;
                v416 = &g83;
                if (g83 != 0) {
                    int64_t v707 = g83 + 64; // 0x403e62
                    int64_t v708 = *(int64_t *)v707;
                    v417 = v706;
                    v416 = v707;
                    while (v708 != 0) {
                        // 0x403e62
                        v707 = v708 + 64;
                        v708 = *(int64_t *)v707;
                        v417 = v706;
                        v416 = v707;
                    }
                }
                goto lab_0x4042f4;
            }
            case 240: {
                goto lab_0x40344f;
            }
            case 241: {
                goto lab_0x4034f4;
            }
            case 242: {
                int64_t v709 = (int64_t)g120; // 0x403e71
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = g120;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = v709;
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                if (str5 != NULL) {
                    int32_t strcmp_rc2 = strcmp(str5, g120); // 0x403e85
                    v290 = v266;
                    v291 = str3;
                    v292 = v293;
                    v294 = g120;
                    v295 = v296;
                    v297 = v268;
                    v298 = v270;
                    v299 = v272;
                    v300 = v274;
                    v301 = v276;
                    v302 = v278;
                    v303 = v304;
                    v305 = v306;
                    v307 = v709;
                    v308 = v287;
                    v309 = v281;
                    v310 = v311;
                    v312 = v88;
                    v313 = v314;
                    v315 = v283;
                    v316 = v379;
                    v317 = v286;
                    v36 = v85;
                    v37 = v88;
                    if (strcmp_rc2 != 0) {
                        goto lab_0x4054e4;
                    }
                }
                goto lab_0x40344f;
            }
            case 245: {
                goto lab_0x4034f4;
            }
            case 246: {
                // 0x403d77
                g86 = 1;
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 247: {
                char v710 = *g120; // 0x403d24
                if (v710 == 0) {
                    // 0x4053b4
                    error(2, (int32_t)"empty tab" ^ (int32_t)"empty tab", dcgettext(NULL, "empty tab", 5));
                    goto lab_0x4053d6;
                } else {
                    int64_t v711 = (int64_t)g120;
                    int32_t v712 = v710; // 0x403d33
                    if (*(char *)(v711 + 1) != 0) {
                        // 0x403d35
                        v712 = 0;
                        if (strcmp(g120, "\\0") != 0) {
                            // 0x40544e
                            v27 = 0x100000000000000 * v711 >> 56;
                            v28 = v85;
                            v29 = v88;
                            goto lab_0x40544e_2;
                        }
                    }
                    uint32_t v713 = g32; // 0x403d56
                    v30 = v85;
                    v31 = v88;
                    if (v713 != 128 == (v713 != v712)) {
                        goto lab_0x40547e;
                    }
                    // 0x403d6c
                    g32 = v712;
                    v290 = v266;
                    v291 = str3;
                    v292 = v293;
                    v294 = str5;
                    v295 = v296;
                    v297 = v268;
                    v298 = v270;
                    v299 = v272;
                    v300 = v274;
                    v301 = v276;
                    v302 = v278;
                    v303 = v304;
                    v305 = v306;
                    v307 = v713;
                    v308 = v287;
                    v309 = v281;
                    v310 = v311;
                    v312 = v88;
                    v313 = v314;
                    v315 = v283;
                    v316 = v379;
                    v317 = v286;
                    goto lab_0x40344f;
                }
            }
            case 248: {
                // 0x403d11
                *(char *)&g85 = 1;
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 252: {
                int32_t v714 = g49; // 0x403ccf
                int64_t v715 = (int64_t)g120; // 0x403cd6
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = v715;
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                int64_t v716 = v715; // 0x403ce5
                if (*(int64_t *)(v281 - 8 + 8 * (int64_t)v714) == v715) {
                    char v717 = *(char *)v716; // 0x403ceb
                    v716++;
                    while (v717 == 57 || (int32_t)v717 < 57) {
                        // 0x403ceb
                        v717 = *(char *)v716;
                        v716++;
                    }
                    // 0x403cfc
                    g49 = v714 - (int32_t)(v717 != 0);
                    v290 = v266;
                    v291 = str3;
                    v292 = v293;
                    v294 = str5;
                    v295 = v296;
                    v297 = v268;
                    v298 = v270;
                    v299 = v272;
                    v300 = v274;
                    v301 = v276;
                    v302 = v278;
                    v303 = v304;
                    v305 = v306;
                    v307 = v717 != 0;
                    v308 = v287;
                    v309 = v281;
                    v310 = v311;
                    v312 = v88;
                    v313 = v314;
                    v315 = v283;
                    v316 = v379;
                    v317 = v286;
                }
                goto lab_0x40344f;
            }
            case 253: {
                // 0x403cc3
                *(char *)&g38 = 0;
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 259: {
                // 0x403523
                v641 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v642 = v311;
                v639 = 99;
                if (g120 != NULL) {
                    int64_t v718 = g40; // 0x403545
                    int64_t v719 = function_40a910("--check", (int64_t)g120, g4, "CCc", 1, v718); // 0x403551
                    v641 = (int64_t)&g4;
                    v642 = v718;
                    v639 = (int64_t)*(char *)(v719 + (int64_t)"CCc");
                }
                goto lab_0x40355e;
            }
            case 260: {
                char * str6 = g82; // 0x403c7e
                int64_t v720 = (int64_t)g120; // 0x403c85
                int64_t v721 = v720; // 0x403c8f
                if (str6 != NULL) {
                    // 0x403c91
                    v721 = 0x100000000000000 * v720 >> 56;
                    v34 = v85;
                    v35 = v88;
                    if (strcmp(str6, g120) != 0) {
                        goto lab_0x4054c2;
                    }
                }
                // 0x403cab
                g82 = (char *)v721;
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = v721;
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 261: {
                // 0x403cb7
                g81 = 1;
                v290 = v266;
                v291 = str3;
                v292 = v293;
                v294 = str5;
                v295 = v296;
                v297 = v268;
                v298 = v270;
                v299 = v272;
                v300 = v274;
                v301 = v276;
                v302 = v278;
                v303 = v304;
                v305 = v306;
                v307 = (int64_t)"-bcCdfghik:mMno:rRsS:t:T:uVy:z";
                v308 = v287;
                v309 = v281;
                v310 = v311;
                v312 = v88;
                v313 = v314;
                v315 = v283;
                v316 = v379;
                v317 = v286;
                goto lab_0x40344f;
            }
            case 262: {
                goto lab_0x403c6d;
            }
            case 263: {
                // 0x403b54
                v612 = (int64_t)g120;
                v614 = v124;
                int64_t v722 = function_411b40(v612, 0, 10, &v97, 0, v311); // 0x403b80
                int32_t v723 = getrlimit(7, (struct rlimit *)&oact); // 0x403b96
                int64_t v724 = 17; // 0x403bad
                if (v723 == 0) {
                    // 0x403baf
                    v724 = (int64_t)oact + 0xfffffffd & 0xffffffff;
                }
                int32_t v725 = 0x1000000 * (int32_t)v722;
                v616 = v725 >> 24;
                v611 = v724;
                if (v725 != 0) {
                    if (v725 != 0x1000000) {
                        // 0x4043b2
                        function_411ab0(v616, (int64_t)v614, 0xffffff84, &g5, (char)v612);
                        // UNREACHABLE
                    }
                    goto lab_0x403bea;
                } else {
                    uint32_t v726 = (int32_t)v97; // 0x403bcd
                    *(int32_t *)&g30 = v726;
                    if (v97 >= 0x100000000) {
                        goto lab_0x403bea;
                    } else {
                        // 0x403bd8
                        v19 = v85;
                        v20 = v612;
                        if (v726 < 2) {
                            goto lab_0x405562;
                        }
                        // 0x403be1
                        v290 = v266;
                        v291 = str3;
                        v292 = v293;
                        v294 = str5;
                        v295 = v296;
                        v297 = v268;
                        v298 = v270;
                        v299 = v272;
                        v300 = v274;
                        v301 = v276;
                        v302 = v278;
                        v303 = v304;
                        v305 = v306;
                        v307 = v97 & 0xffffffff;
                        v308 = v287;
                        v309 = v281;
                        v310 = v616;
                        v312 = v612;
                        v313 = v314;
                        v315 = v283;
                        v316 = v379;
                        v317 = v286;
                        if (v726 > (int32_t)v611) {
                            goto lab_0x403bea;
                        } else {
                            goto lab_0x40344f;
                        }
                    }
                }
            }
            case 264: {
                goto lab_0x403b1f;
            }
            case 265: {
                // 0x4034c4
                v644 = g40;
                int64_t v727 = function_40a910("--sort", (int64_t)g120, g3, "ghMnRV", 1, v644); // 0x4034e7
                v643 = (int64_t)*(char *)(v727 + (int64_t)"ghMnRV");
                goto lab_0x4034f4;
            }
            case 266: {
                int64_t v728 = (int64_t)g120;
                uint32_t v729 = v124; // 0x403aac
                int64_t v730 = function_411680(v728, 0, 10, (int64_t *)&oact, (int64_t *)&g7, v311); // 0x403ad1
                int32_t v731 = v730; // 0x403ad6
                if (v731 == 1) {
                    goto lab_0x40344f;
                } else {
                    if (v731 != 0) {
                        // 0x4057e6
                        function_411ab0(v730 & 0xffffffff, (int64_t)v729, 0xffffff87, &g5, (char)v728);
                        // UNREACHABLE
                    }
                    int32_t v732 = (int64_t)oact; // 0x403aef
                    v290 = v266;
                    v291 = str3;
                    v292 = v732;
                    v294 = str5;
                    v295 = v296;
                    v297 = v268;
                    v298 = v270;
                    v299 = v272;
                    v300 = v274;
                    v301 = v276;
                    v302 = v278;
                    v303 = v304;
                    v305 = v306;
                    v307 = 10;
                    v308 = v287;
                    v309 = v281;
                    v310 = v311;
                    v312 = v88;
                    v313 = v314;
                    v315 = v283;
                    v316 = v379;
                    v317 = v286;
                    if (oact != NULL) {
                        goto lab_0x40344f;
                    } else {
                        // 0x403afd
                        error(2, (int32_t)"number in parallel must be nonzero" ^ (int32_t)"number in parallel must be nonzero", dcgettext(NULL, "number in parallel must be nonzero", 5));
                        v414 = v732;
                        goto lab_0x403b1f;
                    }
                }
            }
            default: {
                goto lab_0x40533e;
            }
        }
    }
  lab_0x403430:;
    int64_t v263 = v262;
    int64_t v264 = v258;
    int64_t v265 = v266; // 0x403432
    int64_t v267 = v268; // 0x403432
    int64_t v269 = v270; // 0x403432
    int32_t v271 = v272; // 0x403432
    char * v273 = v274; // 0x403432
    int32_t v275 = v276; // 0x403432
    int64_t v277 = v278; // 0x403432
    int64_t v279 = v260; // 0x403432
    int64_t v280 = v281; // 0x403432
    int64_t v282 = v283; // 0x403432
    int64_t v284 = v263; // 0x403432
    int64_t v285 = v286; // 0x403432
    if (v287 > v264) {
        int64_t v288 = v264 + 1; // 0x403438
        int64_t v289 = *(int64_t *)(8 * v264 + v281); // 0x40343b
        g49 = v288;
        *(int64_t *)(8 * v286 + v283) = v289;
        v290 = v266;
        v291 = str3;
        v292 = v293;
        v294 = str5;
        v295 = v296;
        v297 = v268;
        v298 = v270;
        v299 = v272;
        v300 = v274;
        v301 = v276;
        v302 = v278;
        v303 = v304;
        v305 = v306;
        v307 = v288 & 0xffffffff;
        v308 = v287;
        v309 = v281;
        v310 = v311;
        v312 = v88;
        v313 = v314;
        v315 = v283;
        v316 = v263;
        v317 = v286 + 1;
        goto lab_0x40344f;
    } else {
        goto lab_0x405643;
    }
  lab_0x405643:;
    int64_t v318 = v285;
    int64_t v319 = v284;
    int64_t v320 = v282;
    int64_t v321 = v280;
    int64_t v322 = v277;
    int32_t v323 = v275;
    char * v324 = v273;
    int32_t v325 = v271;
    int64_t v326 = v269;
    int64_t v327 = v267;
    int64_t v328 = v265;
    char * v122; // bp-888, 0x402f50
    char * v329 = v122; // 0x405643
    int64_t v330 = v328; // 0x405649
    int64_t v331 = v327; // 0x405649
    int64_t v332 = v326; // 0x405649
    int32_t v333 = v325; // 0x405649
    char * v334 = v324; // 0x405649
    int32_t v335 = v323; // 0x405649
    int64_t v336 = v322; // 0x405649
    int64_t v337 = v321; // 0x405649
    int64_t v338 = v320; // 0x405649
    int64_t v339 = v319; // 0x405649
    int64_t v340 = v318; // 0x405649
    int64_t v341; // 0x402f50
    int64_t v80; // 0x402f50
    if (v329 != NULL) {
        // 0x40564f
        v342 = v320;
        if (v318 != 0) {
            goto lab_0x4052df_2;
        }
        // 0x405658
        v257 = (int64_t)v329;
        int64_t v343 = function_407cd0(v257, (int64_t *)"r"); // 0x405662
        if (v343 == 0) {
            // 0x40576e
            function_407dd0(v257);
            goto lab_0x405778;
        }
        // 0x405673
        function_4103a0((int64_t *)&oact, (int64_t)"r", v279);
        int64_t v344 = function_410440(v343, (int64_t *)&oact); // 0x40568b
        v68 = v257;
        if ((char)v344 == 0) {
            goto lab_0x4057af;
        }
        // 0x40569d
        function_407df0(v343, v257);
        if (oact == NULL) {
            goto lab_0x405778;
        }
        int64_t v345 = (int64_t)oact; // 0x4056a5
        free((int64_t *)v320);
        int64_t v346 = v318;
        int64_t v347 = *(int64_t *)(8 * v346 + v341); // 0x4056e2
        int64_t v348 = 2; // 0x4056f2
        int64_t v349 = v347;
        int64_t v350 = (int64_t)&g19;
        unsigned char v351 = *(char *)v349; // 0x4056f2
        char v352 = *(char *)v350; // 0x4056f2
        char v353 = v352; // 0x4056f2
        bool v354 = false; // 0x4056f2
        int64_t v355; // 0x402f50
        int64_t v356; // 0x402f50
        while (v351 == v352) {
            v348--;
            v355 = v350 + v80;
            v356 = v349 + v80;
            v353 = v351;
            v354 = true;
            if (v348 == 0) {
                // break -> 
                break;
            }
            v349 = v356;
            v350 = v355;
            v351 = *(char *)v349;
            v352 = *(char *)v350;
            v353 = v352;
            v354 = false;
        }
        unsigned char v357 = v353;
        if ((v351 >= v357 && !v354) == v351 < v357) {
            // 0x4056fd
            function_40f630(4, v347);
            error(2, (int32_t)"when reading file names from stdin, no file name of %s allowed" ^ (int32_t)"when reading file names from stdin, no file name of %s allowed", dcgettext(NULL, "when reading file names from stdin, no file name of %s allowed", 5));
            goto lab_0x405732;
        }
        // 0x4056d0
        if (*(char *)v347 == 0) {
            goto lab_0x405732;
        }
        int64_t v358 = v346 + 1; // 0x4056d0
        v330 = v328;
        v331 = v327;
        v332 = v326;
        v333 = v325;
        v334 = v324;
        v335 = v323;
        v336 = v322;
        v337 = v321;
        v338 = v341;
        v339 = v319;
        v340 = v345;
        while (v358 != v345) {
            // 0x4056e2
            v346 = v358;
            v347 = *(int64_t *)(8 * v346 + v341);
            v351 = *(char *)v347;
            v352 = *(char *)(int64_t)&g19;
            while (v351 == v352) {
                v348--;
                v355 = v350 + v80;
                v356 = v349 + v80;
                v353 = v351;
                v354 = true;
                if (v348 == 0) {
                    // break -> 
                    break;
                }
                v349 = v356;
                v350 = v355;
                v351 = *(char *)v349;
                v352 = *(char *)v350;
                v353 = v352;
                v354 = false;
            }
            v357 = v352;
            if ((v351 >= v357 && true) == v351 < v357) {
                // 0x4056fd
                function_40f630(4, v347);
                error(2, (int32_t)"when reading file names from stdin, no file name of %s allowed" ^ (int32_t)"when reading file names from stdin, no file name of %s allowed", dcgettext(NULL, "when reading file names from stdin, no file name of %s allowed", 5));
                goto lab_0x405732;
            }
            // 0x4056d0
            if (*(char *)v347 == 0) {
                goto lab_0x405732;
            }
            // 0x4056d9
            v358 = v346 + 1;
            v330 = v328;
            v331 = v327;
            v332 = v326;
            v333 = v325;
            v334 = v324;
            v335 = v323;
            v336 = v322;
            v337 = v321;
            v338 = v341;
            v339 = v319;
            v340 = v345;
        }
    }
    goto lab_0x403590;
  lab_0x40355e:;
    int64_t v638 = v639;
    int64_t v123; // bp-904, 0x402f50
    int64_t v640 = 0x100000000000000 * v123 >> 56; // 0x40355e
    if ((char)v640 != 0) {
        // 0x403566
        v8 = v85;
        v10 = v88;
        if ((int32_t)v640 != (int32_t)v638) {
            goto lab_0x405535;
        }
    }
    // 0x40356f
    v123 = 0x100000000000000 * v638 >> 56;
    v290 = v266;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = v641;
    v308 = v287;
    v309 = v281;
    v310 = v642;
    v312 = v88;
    v313 = v314;
    v315 = v283;
    v316 = v638;
    v317 = v286;
    goto lab_0x40344f;
  lab_0x4034f4:
    // 0x4034f4
    oact = (char *)(0x100000000000000 * v643 >> 56);
    int64_t v373; // bp-568, 0x402f50
    function_405c00((int64_t *)&oact, &v373, 2);
    v290 = v266;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = 2;
    v308 = v287;
    v309 = v281;
    v310 = v644;
    v312 = v88;
    v313 = v314;
    v315 = v283;
    v316 = v643;
    v317 = v286;
    goto lab_0x40344f;
  lab_0x40344f:;
    int64_t v380 = v290; // 0x402f50
    char * v381 = v291; // 0x402f50
    int32_t v382 = v292; // 0x402f50
    char * v383 = v294; // 0x402f50
    char v384 = v295; // 0x402f50
    int64_t v385 = v297; // 0x402f50
    int64_t v386 = v298; // 0x402f50
    int32_t v387 = v299; // 0x402f50
    char * v388 = v300; // 0x402f50
    int32_t v389 = v301; // 0x402f50
    int64_t v390 = v302; // 0x402f50
    int128_t v391 = v303; // 0x402f50
    int128_t v392 = v305; // 0x402f50
    int64_t v393 = v307; // 0x402f50
    int64_t v394 = v308; // 0x402f50
    int64_t v395 = v309; // 0x402f50
    int64_t v396 = v310; // 0x402f50
    int64_t v397 = v312; // 0x402f50
    int64_t v398 = v313; // 0x402f50
    int64_t v399 = v315; // 0x402f50
    int64_t v400 = v316; // 0x402f50
    int64_t v401 = v317; // 0x402f50
    goto lab_0x40344f_2;
  lab_0x403c6d:
    // 0x403c6d
    *(int64_t *)&v122 = (int64_t)g120;
    v290 = v266;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = v408;
    v308 = v409;
    v309 = v410;
    v310 = v411;
    v312 = v412;
    v313 = v314;
    v315 = v283;
    v316 = v379;
    v317 = v286;
    goto lab_0x40344f;
  lab_0x403b1f:;
    int32_t v413 = v414;
    int64_t v415 = (int64_t)g120; // 0x403b24
    v290 = v266;
    v291 = g120;
    v292 = v413;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = v415;
    v308 = v287;
    v309 = v281;
    v310 = v311;
    v312 = v88;
    v313 = v314;
    v315 = v283;
    v316 = v379;
    v317 = v286;
    if (str3 != NULL) {
        int32_t strcmp_rc = strcmp(str3, g120); // 0x403b38
        v290 = v266;
        v291 = g120;
        v292 = v413;
        v294 = str5;
        v295 = v296;
        v297 = v268;
        v298 = v270;
        v299 = v272;
        v300 = v274;
        v301 = v276;
        v302 = v278;
        v303 = v304;
        v305 = v306;
        v307 = v415;
        v308 = v287;
        v309 = v281;
        v310 = v311;
        v312 = v88;
        v313 = v314;
        v315 = v283;
        v316 = v379;
        v317 = v286;
        v32 = v85;
        v33 = v88;
        if (strcmp_rc != 0) {
            goto lab_0x4054a0;
        }
    }
    goto lab_0x40344f;
  lab_0x403590:;
    int64_t v359 = v340;
    v66 = v339;
    int64_t v360 = v338;
    v64 = v337;
    v59 = v336;
    v57 = v335;
    v55 = v334;
    v53 = v333;
    v51 = v332;
    v49 = v331;
    v47 = v330;
    int64_t v254 = g83; // 0x403590
    v247 = 0;
    v248 = v254;
    int64_t v256; // 0x402f50
    int64_t v361; // 0x402f50
    int64_t v362; // 0x402f50
    int64_t v255; // 0x402f50
    int64_t v253; // 0x402f50
    int32_t v363; // 0x402f50
    int64_t v364; // 0x402f50
    int64_t v365; // 0x402f50
    int64_t v366; // 0x402f50
    int64_t v367; // 0x402f50
    char * v368; // 0x402f50
    int32_t v369; // 0x402f50
    int32_t v249; // 0x402f50
    int64_t v370; // 0x402f50
    int64_t v371; // 0x402f50
    uint32_t v252; // 0x402f50
    if (v254 == 0) {
        // 0x404a0a
        if ((char)function_405af0(v370) == 0) {
            int64_t v372 = function_411410(&v373, 72); // 0x404fdb
            if (g83 != 0) {
                int64_t v374; // 0x402f50
                int64_t v375 = v374;
                int64_t v376 = v375 + 64; // 0x404ff1
                int64_t v377 = *(int64_t *)v376;
                v374 = v377;
                while (v377 != 0) {
                    // 0x404ff1
                    v375 = v374;
                    v376 = v375 + 64;
                    v377 = *(int64_t *)v376;
                    v374 = v377;
                }
            }
            // 0x404ffb
            *(int64_t *)(int64_t)&g83 = v372;
            *(int64_t *)(v372 + 64) = 0;
            v253 = g83;
            v255 = v371;
            v256 = 1;
            v61 = 0;
            v43 = v371;
            v45 = 1;
            if (g83 != 0) {
                goto lab_0x403662_2;
            } else {
                goto lab_0x4036df;
            }
        } else {
            // 0x404a1f
            v44 = 0;
            v46 = 0;
            if (g81 == 0) {
                // 0x404fbb
                v366 = v47;
                v365 = v49;
                v364 = v51;
                v363 = v53;
                v368 = v55;
                v369 = v57;
                v367 = v59;
                v362 = v64;
                v361 = v66;
                goto lab_0x4040a2;
            } else {
                goto lab_0x4036ec;
            }
        }
    } else {
        while (true) {
          lab_0x403640_2:
            // 0x403640
            v242 = v248;
            v244 = v247;
            if ((char)function_405af0(v242) != 0) {
                // 0x4035b0
                if (*(char *)(v242 + 55) != 0) {
                    goto lab_0x403650;
                } else {
                    // 0x4035ba
                    *(int64_t *)(v242 + 40) = (int64_t)v1;
                    *(char *)(v242 + 56) = (char)v1;
                    *(char *)(v242 + 51) = (char)v249;
                    int64_t v250 = *(int64_t *)(v242 + 64); // 0x403635
                    int64_t v251 = v252 | (int32_t)v244; // 0x403639
                    v245 = v251;
                    v246 = v250;
                    v253 = v254;
                    v255 = v251;
                    v256 = 0;
                    if (v250 == 0) {
                        // break -> 0x403662
                        break;
                    }
                    goto lab_0x403640;
                }
            } else {
                goto lab_0x403650;
            }
        }
        goto lab_0x403662_2;
    }
  lab_0x403ef7:;
    int64_t v378 = (int64_t)g120;
    *(int64_t *)(8 * v286 + v283) = v378;
    v290 = v266;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = v378;
    v308 = v287;
    v309 = v281;
    v310 = v311;
    v312 = v88;
    v313 = v314;
    v315 = v283;
    v316 = v379;
    v317 = v286 + 1;
    goto lab_0x40344f;
  lab_0x4042f4:
    // 0x4042f4
    *(int64_t *)v416 = v417;
    *(int64_t *)(v417 + 64) = 0;
    v290 = v266;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v268;
    v298 = v270;
    v299 = v272;
    v300 = v274;
    v301 = v276;
    v302 = v278;
    v303 = v304;
    v305 = v306;
    v307 = 0;
    v308 = v287;
    v309 = v281;
    v310 = v311;
    v312 = v88;
    v313 = v314;
    v315 = v283;
    v316 = v379;
    v317 = v286;
    goto lab_0x40344f;
  lab_0x403f7f:;
    int64_t v418 = v419;
    int64_t v420 = v421;
    int64_t v422 = v423;
    int64_t v424 = v425;
    int64_t v426 = v427;
    int64_t v428 = v429;
    int128_t v430 = v306;
    int128_t v431 = v432;
    int64_t v433 = v434;
    int32_t v435 = v436;
    char * v437 = v438;
    int32_t v439 = v440;
    int64_t v441 = v442;
    int64_t v443 = v444;
    int64_t v445 = v446;
    int64_t v447 = v96; // 0x403f7f
    v290 = v445;
    v291 = str3;
    v292 = v293;
    v294 = str5;
    v295 = v296;
    v297 = v443;
    v298 = v441;
    v299 = v439;
    v300 = v437;
    v301 = v435;
    v302 = v433;
    v303 = v431;
    v305 = v430;
    v307 = v447;
    v308 = v428;
    v309 = v426;
    v310 = v311;
    v312 = v88;
    v313 = v424;
    v315 = v422;
    v316 = v420;
    v317 = v418;
    if (v447 >= (int64_t)g91) {
        uint64_t v448 = 34 * (int64_t)*(int32_t *)&g30; // 0x403f9a
        g91 = (int128_t)(v448 < v447 ? v447 : v448);
        v290 = v445;
        v291 = str3;
        v292 = v293;
        v294 = str5;
        v295 = v296;
        v297 = v443;
        v298 = v441;
        v299 = v439;
        v300 = v437;
        v301 = v435;
        v302 = v433;
        v303 = v431;
        v305 = v430;
        v307 = v447;
        v308 = v428;
        v309 = v426;
        v310 = v311;
        v312 = v88;
        v313 = v424;
        v315 = v422;
        v316 = v420;
        v317 = v418;
    }
    goto lab_0x40344f;
  lab_0x4053d6:;
    int64_t v449 = &g122;
    int64_t v450 = function_407c00(v449 + 1, &v451, (int64_t)"invalid number after '.'"); // 0x4053e7
    goto lab_0x4044ed;
  lab_0x403bea:
    // 0x403bea
    v123 = 0x100000000 * v611 >> 32;
    function_40f880(v612);
    int64_t v613 = *(int64_t *)(32 * (int64_t)v614 + (int64_t)&g5); // 0x403c0e
    error(0, (int32_t)"--%s argument %s too large" ^ (int32_t)"--%s argument %s too large", dcgettext(NULL, "--%s argument %s too large", 5));
    int64_t v615 = function_40d330(v123 & 0xffffffff, &v96); // 0x403c3d
    char * format9 = dcgettext(NULL, "maximum --%s argument with current rlimit is %s", 5); // 0x403c51
    error(2, (int32_t)"maximum --%s argument with current rlimit is %s" ^ (int32_t)"maximum --%s argument with current rlimit is %s", format9);
    v408 = (int64_t)format9;
    v409 = v613;
    v410 = v615;
    v411 = v616;
    v412 = v612;
    goto lab_0x403c6d;
  lab_0x403662_2:;
    int64_t v610 = v256;
    int64_t v609 = v255;
    int64_t v617 = v253;
    unsigned char v618 = *(char *)(v617 + 52); // 0x403662
    unsigned char v619 = *(char *)(v617 + 50); // 0x403666
    unsigned char v620 = *(char *)(v617 + 53); // 0x40366c
    unsigned char v621 = *(char *)(v617 + 54); // 0x403672
    unsigned char v622 = *(char *)(v617 + 51); // 0x403678
    uint32_t v623 = *(int32_t *)(v617 + 56); // 0x40367c
    int64_t v624 = *(int64_t *)(v617 + 32); // 0x40367f
    uint32_t v625 = v623 % 256 | (int32_t)v622 | (int32_t)(v624 != 0);
    int64_t v607 = v617; // 0x403692
    if ((int32_t)v619 + (int32_t)v618 + (int32_t)v620 + (int32_t)v621 + v625 < 2) {
        int64_t v626 = *(int64_t *)(v617 + 64); // 0x4036d6
        int64_t v627 = v626; // 0x4036dd
        v61 = v625;
        v43 = v609;
        v45 = v610;
        if (v626 != 0) {
            int64_t v628 = v627;
            unsigned char v629 = *(char *)(v628 + 52); // 0x4036a0
            unsigned char v630 = *(char *)(v628 + 50); // 0x4036a4
            unsigned char v631 = *(char *)(v628 + 53); // 0x4036aa
            unsigned char v632 = *(char *)(v628 + 54); // 0x4036b0
            int64_t v633 = (int64_t)v630 + (int64_t)v629 + (int64_t)v631 + (int64_t)v632; // 0x4036b4
            char v634 = *(char *)(v628 + 56); // 0x4036b6
            char v635 = *(char *)(v628 + 51); // 0x4036ba
            int64_t v636 = *(int64_t *)(v628 + 32); // 0x4036bd
            v607 = v628;
            while ((int32_t)(v633 + (int64_t)(v635 | v634 || (char)(v636 != 0))) <= 1) {
                int64_t v637 = *(int64_t *)(v628 + 64); // 0x4036d6
                v627 = v637;
                v61 = v633;
                v43 = v609;
                v45 = v610;
                if (v637 == 0) {
                    goto lab_0x4036df;
                }
                v628 = v627;
                v629 = *(char *)(v628 + 52);
                v630 = *(char *)(v628 + 50);
                v631 = *(char *)(v628 + 53);
                v632 = *(char *)(v628 + 54);
                v633 = (int64_t)v630 + (int64_t)v629 + (int64_t)v631 + (int64_t)v632;
                v634 = *(char *)(v628 + 56);
                v635 = *(char *)(v628 + 51);
                v636 = *(int64_t *)(v628 + 32);
                v607 = v628;
            }
            goto lab_0x405348;
        } else {
            goto lab_0x4036df;
        }
    } else {
        goto lab_0x405348;
    }
  lab_0x40536f:;
    int128_t v608 = __asm_subsd(v304, v306); // 0x40536f
    v96 = __asm_cvttsd2si(v608) ^ -0x8000000000000000;
    v446 = v47;
    v444 = v49;
    v442 = v51;
    v440 = v53;
    v438 = v55;
    v436 = v57;
    v434 = v59;
    v432 = v608;
    v429 = v609;
    v427 = v64;
    v425 = v610;
    v423 = v360;
    v421 = v66;
    v419 = v359;
    goto lab_0x403f7f;
  lab_0x4044ed:
    // 0x4044ed
    if (v451 == 0) {
        int64_t v452 = v453; // 0x4044f8
        if (v452 != 0) {
            // 0x404505
            v453 = v452 - 1;
        }
    }
    char v454 = *(char *)function_405c00((int64_t *)v450, &v455, 1); // 0x404526
    v14 = v85;
    v15 = v88;
    if (v454 != 0) {
        goto lab_0x405549;
    }
    goto lab_0x40452f;
  lab_0x4036ec:
    // 0x4036ec
    v38 = v85;
    v39 = v88;
    if (str5 == NULL != ((char)v123 == 0)) {
        goto lab_0x405506;
    }
    // 0x403702
    v188 = v46;
    int64_t v508 = v44;
    char * v606; // 0x40434e
    if (v55 == NULL) {
        // 0x404342
        v606 = dcgettext(NULL, "failed to set locale", 5);
        error(0, (int32_t)"failed to set locale" ^ (int32_t)"failed to set locale", "%s", v606);
        goto lab_0x403726;
    } else {
        // 0x40370e
        if (setlocale(LC_COLLATE, (char *)&g7) == NULL) {
            // 0x404342
            v606 = dcgettext(NULL, "failed to set locale", 5);
            error(0, (int32_t)"failed to set locale" ^ (int32_t)"failed to set locale", "%s", v606);
            goto lab_0x403726;
        } else {
            goto lab_0x403726;
        }
    }
  lab_0x405348:
    // 0x405348
    *(char *)(v607 + 55) = 0;
    *(int16_t *)(v607 + 48) = 0;
    function_405b50((char)v607, &v96);
    function_405d00(&v96);
    goto lab_0x40536f;
  lab_0x40452f:
    // 0x40452f
    v417 = function_411410(&v455, 72);
    v416 = &g83;
    if (g83 != 0) {
        int64_t v456; // 0x402f50
        int64_t v457 = v456 + 64; // 0x40455e
        int64_t v458 = *(int64_t *)v457;
        int64_t v459; // 0x404544
        v417 = v459;
        v416 = v457;
        v456 = v458;
        while (v458 != 0) {
            // 0x40455e
            v457 = v456 + 64;
            v458 = *(int64_t *)v457;
            v417 = v459;
            v416 = v457;
            v456 = v458;
        }
    }
    goto lab_0x4042f4;
  lab_0x40408c:;
    int64_t v460 = v67;
    int64_t v461 = v65;
    int64_t v462 = v60;
    char * v463 = v56;
    int32_t v464 = v54;
    int64_t v465 = v52;
    int64_t v466 = v50;
    int64_t v467 = v48;
    v366 = v467;
    v365 = v466;
    v364 = v465;
    v363 = v464;
    v368 = v463;
    v369 = v58;
    v367 = v462;
    v362 = v461;
    v361 = v460;
    int32_t v468; // 0x402f50
    char v469; // 0x402f50
    if ((char)v63 != 0) {
        int64_t v470 = function_40f900((int64_t)str3, 16, v62); // 0x4045aa
        if (v470 == 0) {
            goto lab_0x40543a;
        }
        // 0x4045c5
        function_40fc10(v470, &v96, 16);
        v24 = v85;
        v25 = v88;
        if ((int32_t)function_40fd70(v470) != 0) {
            goto lab_0x405430;
        }
        // 0x4045f2
        function_40aa90(&g60);
        function_40b360(v469, 16, &g60);
        v366 = v467;
        v365 = v466;
        v364 = v465;
        v363 = v464;
        v368 = v463;
        v369 = v468;
        v367 = v462;
        v362 = v461;
        v361 = v460;
    }
    goto lab_0x4040a2;
  lab_0x4040a2:
    // 0x4040a2
    if (g89 == 0) {
        char * env_val2 = getenv("TMPDIR"); // 0x4049ef
        function_40a010(env_val2 == NULL ? (int64_t)"/tmp" : (int64_t)env_val2);
    }
    int64_t v471 = v360; // 0x4040b3
    int64_t v472 = v359; // 0x4040b3
    if (v359 == 0) {
        // 0x4049c3
        free((int64_t *)v360);
        int64_t v473 = function_411210(8); // 0x4049d6
        *(int64_t *)v473 = (int64_t)&g19;
        v471 = v473;
        v472 = 1;
    }
    int64_t v474 = v471;
    uint64_t v475 = (int64_t)g91; // 0x4040b9
    if (v475 != 0) {
        uint64_t v476 = 34 * (int64_t)*(int32_t *)&g30; // 0x4040cb
        g91 = v476 < v475 ? v475 : v476;
    }
    char v477 = v123;
    if (v477 == 0) {
        goto lab_0x404653;
    }
    char * v101; // 0x402f50
    int64_t v99; // 0x402f50
    int64_t result; // 0x402f50
    int64_t v478; // 0x402f50
    int64_t v103; // 0x402f50
    int64_t v95; // 0x4040fd
    int64_t v94; // 0x404109
    char v129; // 0x40417e
    int64_t v111; // 0x40414b
    int64_t v108; // 0x4041ae
    if (v472 < 2) {
        if (str5 != NULL) {
            // 0x405800
            *(char *)&g27 = v477;
            function_405d00(&g27);
            // 0x405814
            function_407dd0(v474);
            goto lab_0x40581c;
        } else {
            // 0x4040fd
            v95 = *(int64_t *)v474;
            v94 = function_407cd0(v95, (int64_t *)"r");
            if (v94 == 0) {
                // 0x405814
                function_407dd0(v95);
                goto lab_0x40581c;
            } else {
                uint64_t v479 = g33; // 0x404135
                uint64_t v480 = (int64_t)g91; // 0x40413c
                function_405e30(&v96, 32, v479 <= v480 ? v480 : v479);
                v97 = 0;
                v122 = NULL;
                v129 = v478;
                result = 0;
                if ((char)function_4074d0(v129, v94, v95) == 0) {
                    goto lab_0x4042b7;
                } else {
                    // 0x404196
                    v111 = (int64_t)(*(char *)&g85 ^ 1);
                    v108 = 32 * v103;
                    v101 = NULL;
                    v99 = 0;
                    goto lab_0x404196_2;
                }
            }
        }
    }
    // 0x405608
    function_40f630(4, *(int64_t *)(v474 + 8));
    char * format3 = dcgettext(NULL, "extra operand %s not allowed with -%c", 5); // 0x405625
    error(2, (int32_t)"extra operand %s not allowed with -%c" ^ (int32_t)"extra operand %s not allowed with -%c", format3);
    v265 = v366;
    v267 = v365;
    v269 = v364;
    v271 = v363;
    v273 = v368;
    v275 = v369;
    v277 = v367;
    v279 = (int64_t)format3;
    v280 = v362;
    v282 = v474;
    v284 = v361;
    v285 = v472;
    goto lab_0x405643;
  lab_0x404473:;
    int64_t v481 = v482;
    v455 = -1;
    v483 = v481;
    goto lab_0x40447f;
  lab_0x40447f:;
    int64_t v484 = v483;
    v485 = v484;
    if (v484 == 0) {
        goto lab_0x405244;
    } else {
        goto lab_0x404488;
    }
  lab_0x404488:;
    int64_t v486 = v485;
    int64_t v487 = function_405c00((int64_t *)v486, &v455, 0); // 0x404495
    char v488 = *(char *)v487; // 0x40449a
    int64_t v87; // 0x402f50
    int64_t v82; // 0x402f50
    int64_t v86; // 0x402f50
    int64_t v84; // 0x402f50
    if (v488 != 0) {
        goto lab_0x405244;
    } else {
        // 0x4044a3
        if (v489 == 0) {
            goto lab_0x40452f;
        } else {
            int32_t v490 = g49; // 0x4044ae
            int64_t v491 = *(int64_t *)(8 * (int64_t)v490 + v281); // 0x4044bd
            g49 = &g50;
            int64_t v492 = function_407c00(v491 + 1, (int64_t *)v266, (int64_t)"invalid number after '-'"); // 0x4044d6
            if (v492 == 0) {
                // 0x4053f1
                __assert_fail("s", "src/sort.c", 0x110d, "main");
                int64_t v493 = v88; // 0x405405
                int64_t v494 = v286; // 0x405405
                int64_t v495 = v494;
                int64_t v496 = v493;
                int64_t v497 = *(int64_t *)(v85 + 96); // 0x40540a
                v82 = v497 + 8 * v495;
                v84 = v85;
                v86 = (int64_t)"stat failed";
                v87 = v496;
                goto lab_0x40541e;
            }
            char v498 = *(char *)v492; // 0x4044e4
            if (v498 == 46) {
                goto lab_0x4053d6;
            } else {
                goto lab_0x4044ed;
            }
        }
    }
  lab_0x403726:;
    // 0x403726
    int64_t v499; // 0x402f50
    if (g103 != 0) {
        // 0x404304
        function_40f880((int64_t)setlocale(LC_COLLATE, NULL));
        char * format4 = dcgettext(NULL, "using %s sorting rules", 5); // 0x404327
        error(0, (int32_t)"using %s sorting rules" ^ (int32_t)"using %s sorting rules", format4);
        v499 = (int64_t)format4;
    } else {
        // 0x403733
        error(0, (int32_t)"using simple byte comparison" ^ (int32_t)"using simple byte comparison", "%s", dcgettext(NULL, "using simple byte comparison", 5));
        v499 = (int64_t)"%s";
    }
    // 0x403757
    __asm_rep_movsd_memcpy((char *)&v96, (char *)&v373, 18);
    int64_t v500 = v47; // 0x403782
    int64_t v501 = v49; // 0x403782
    int64_t v502 = v51; // 0x403782
    int32_t v503 = v53; // 0x403782
    char * v504 = v55; // 0x403782
    int64_t v505 = v59; // 0x403782
    int64_t v506 = v499; // 0x403782
    int64_t v507 = v508; // 0x403782
    int64_t v509 = 1; // 0x403782
    int64_t v510 = 0; // 0x403782
    if (g83 != 0) {
        // 0x403788
        v215 = v49;
        v216 = v51;
        v217 = v53;
        v218 = g83;
        v219 = 1;
        v221 = g83;
        int64_t v231; // bp-759, 0x402f50
        while (true) {
          lab_0x4038ad:
            // 0x4038ad
            v209 = v219;
            v190 = v218;
            v213 = v217;
            v206 = v216;
            v202 = v215;
            v196 = (int64_t *)v190;
            int64_t v222 = *v196; // 0x4038b1
            v197 = (int64_t *)(v190 + 16);
            int64_t v223 = *v197; // 0x4038b4
            int64_t v224 = v223; // 0x4038b8
            int64_t v225 = v221; // 0x4038b8
            int64_t v226 = v222; // 0x4038b8
            if (*(char *)(v190 + 57) != 0) {
                int64_t v227 = v222 == -1 ? 0 : v222; // 0x4038cc
                int64_t v228; // bp-792, 0x402f50
                int64_t v229 = function_40d370(v227, &v228); // 0x4038d3
                v124 = 43;
                int64_t * v230 = __stpcpy_chk((char *)&v231, (char *)v229, 45); // 0x4038ed
                int64_t v232 = function_40d370(v227 + 1, &v228); // 0x403906
                v97 = 0x206b2d;
                int64_t v233; // bp-709, 0x402f50
                int64_t * v234 = __stpcpy_chk((char *)&v233, (char *)v232, 44); // 0x403922
                v122 = (char *)v234;
                if (*v197 != -1) {
                    int64_t v235 = v223 + 1; // 0x403933
                    int64_t str = function_40d370(v235, &v228); // 0x40393f
                    *(int16_t *)v230 = 0x2d20;
                    strcpy((char *)((int64_t)v230 + 2), (char *)str);
                    int64_t v236 = *(int64_t *)(v190 + 24); // 0x403958
                    int64_t str2 = function_40d370(v235 + (int64_t)(v236 == -1), &v228); // 0x403969
                    *(char *)v234 = 44;
                    strcpy((char *)((int64_t)v234 + 1), (char *)str2);
                }
                // 0x403982
                v225 = function_40f860(1, &v97);
                function_40f860(0, (int64_t *)&v124);
                error(0, (int32_t)"obsolescent key %s used; consider %s instead" ^ (int32_t)"obsolescent key %s used; consider %s instead", dcgettext(NULL, "obsolescent key %s used; consider %s instead", 5));
                v226 = *v196;
                v224 = *v197;
            }
            uint64_t v237 = v226;
            v220 = v225;
            int64_t v238 = v188 & 0xffffffff; // 0x4039d7
            int64_t v239 = v224; // 0x4039d7
            if (v237 != -1 && v224 < v237) {
                // 0x4039de
                error(0, (int32_t)"key %lu has zero width and will be ignored" ^ (int32_t)"key %lu has zero width and will be ignored", dcgettext(NULL, "key %lu has zero width and will be ignored", 5));
                v239 = *v197;
                v238 = 1;
            }
            // 0x403a09
            v189 = v238;
            v194 = v190 + 48;
            v240 = (int64_t *)v194;
            v195 = *v240 & 0xffff00ff0000;
            int32_t v241 = 1; // 0x403a1c
            if (v195 == 0) {
                // 0x403a1e
                v241 = (int32_t)*(char *)(v190 + 54);
            }
            // 0x403a22
            v193 = v241;
            if (v239 == 0) {
                // 0x4037b0
                if (*(int64_t *)(v190 + 24) == 0) {
                    goto lab_0x403a2b;
                } else {
                    // 0x4037bb
                    v191 = v195;
                    v192 = v195;
                    if ((char)v189 == 0 || (char)v188 == 0) {
                        goto lab_0x4037c3;
                    } else {
                        goto lab_0x4037f0;
                    }
                }
            } else {
                goto lab_0x403a2b;
            }
        }
      lab_0x403fb1:
        // 0x403fb1
        v500 = v360;
        v501 = v204;
        v502 = v208;
        v503 = v214;
        v504 = (char *)&v231;
        v505 = v359;
        v506 = v200;
        v507 = v508 % 256;
        v509 = v210;
        v510 = v220;
    }
    int64_t v511 = v510;
    int64_t v512 = v507;
    int64_t v513 = v505;
    char * v514 = v504;
    int32_t v515 = v503;
    int64_t v516 = v502;
    int64_t v517 = v501;
    int64_t v518 = v500;
    char v519; // 0x402f50
    int64_t v520; // 0x402f50
    int64_t v521; // 0x402f50
    int64_t v522; // 0x402f50
    int32_t v523; // 0x402f50
    int32_t v524; // 0x402f50
    int64_t v110; // 0x402f50
    if ((char)function_405af0(0x100000000000000 * (int64_t)v468 >> 56) != 0) {
        int64_t v525 = v509;
        int64_t v526 = v506;
        v48 = v518;
        v50 = v517;
        v52 = v516;
        v54 = v515;
        v56 = v514;
        v58 = v468;
        v60 = v513;
        v62 = v526;
        v63 = v512;
        v65 = v525;
        v67 = v511;
        if ((char)v515 == 0) {
            goto lab_0x40408c;
        } else {
            // 0x404a3f
            if (g86 != 0) {
                // 0x4050de
                v48 = v518;
                v50 = v517;
                v52 = v516;
                v54 = v515;
                v56 = v514;
                v58 = v468;
                v60 = v513;
                v62 = v526;
                v63 = v512;
                v65 = v525;
                v67 = v511;
                if (g83 == 0) {
                    goto lab_0x40408c;
                } else {
                    // 0x4050ec
                    function_405b50(v469, &v97);
                    int64_t v527 = v110; // 0x40510a
                    int64_t v528 = -1; // 0x40510a
                    int64_t v529 = 0; // 0x40510a
                    while (v528 != 0) {
                        int64_t v530 = v527;
                        v528--;
                        v527 = v530 + v80;
                        v529 = v528;
                        if (*(char *)v530 == 0) {
                            // break -> 
                            break;
                        }
                        v529 = 0;
                    }
                    char * format5 = dcngettext(NULL, "option '-%s' is ignored", "options '-%s' are ignored", -2 - (int32_t)v529, 5); // 0x405128
                    error(0, (int32_t)"option '-%s' is ignored" ^ (int32_t)"option '-%s' is ignored", format5);
                    v523 = 1;
                    v521 = (int64_t)format5;
                    goto lab_0x404051;
                }
            } else {
                char v531 = *(char *)&g85; // 0x404a4c
                v519 = v531;
                v524 = v515;
                v522 = v526;
                v520 = v525;
                if (v531 == 0 || g83 == 0) {
                    goto lab_0x40405a;
                } else {
                    // 0x404a67
                    function_405b50(v469, &v97);
                    int64_t v532 = v110; // 0x404a85
                    int64_t v533 = -1; // 0x404a85
                    int64_t v534 = 0; // 0x404a85
                    while (v533 != 0) {
                        int64_t v535 = v532;
                        v533--;
                        v532 = v535 + v80;
                        v534 = v533;
                        if (*(char *)v535 == 0) {
                            // break -> 
                            break;
                        }
                        v534 = 0;
                    }
                    char * format6 = dcngettext(NULL, "option '-%s' is ignored", "options '-%s' are ignored", -2 - (int32_t)v534, 5); // 0x404aa3
                    error(0, (int32_t)"option '-%s' is ignored" ^ (int32_t)"option '-%s' is ignored", format6);
                    v523 = 0x1000000 * v515 >> 24;
                    v521 = (int64_t)format6;
                    goto lab_0x404051;
                }
            }
        }
    } else {
        // 0x403fdb
        function_405b50(v469, &v97);
        int64_t v536 = v110; // 0x404013
        int64_t v537 = -1; // 0x404013
        int64_t v538 = 0; // 0x404013
        while (v537 != 0) {
            int64_t v539 = v536;
            v537--;
            v536 = v539 + v80;
            v538 = v537;
            if (*(char *)v539 == 0) {
                // break -> 
                break;
            }
            v538 = 0;
        }
        char * format7 = dcngettext(NULL, "option '-%s' is ignored", "options '-%s' are ignored", -2 - (int32_t)v538, 5); // 0x40402e
        int64_t v540 = (int64_t)format7; // 0x40402e
        error(0, (int32_t)"option '-%s' is ignored" ^ (int32_t)"option '-%s' is ignored", format7);
        int32_t v541 = 0x1000000 * v515 >> 24; // 0x404044
        v523 = v541;
        v521 = v540;
        v48 = v518;
        v50 = v517;
        v52 = v516;
        v54 = v541;
        v56 = v514;
        v58 = v468;
        v60 = v513;
        v62 = v540;
        v63 = v512;
        v65 = v110;
        v67 = v511;
        if ((char)v515 == 0) {
            goto lab_0x40408c;
        } else {
            goto lab_0x404051;
        }
    }
  lab_0x405244:
    // 0x405244
    goto lab_0x403ef7;
  lab_0x404051:;
    int64_t v542 = v521;
    int32_t v543 = v523;
    v48 = v518;
    v50 = v517;
    v52 = v516;
    v54 = v543;
    v56 = v514;
    v58 = v468;
    v60 = v513;
    v62 = v542;
    v63 = v512;
    v65 = v110;
    v67 = v511;
    if (g86 != 0) {
        goto lab_0x40408c;
    } else {
        // 0x404051
        v519 = *(char *)&g85;
        v524 = v543;
        v522 = v542;
        v520 = v110;
        goto lab_0x40405a;
    }
  lab_0x40405a:;
    int64_t v544 = v520;
    int32_t v545 = v524;
    v48 = v518;
    v50 = v517;
    v52 = v516;
    v54 = v545;
    v56 = v514;
    v58 = v468;
    v60 = v513;
    v62 = v522;
    v63 = v512;
    v65 = v544;
    v67 = v511;
    if (g83 != 0 && v519 == 0) {
        char * format8 = dcgettext(NULL, "option '-r' only applies to last-resort comparison", 5); // 0x404079
        error(0, (int32_t)"option '-r' only applies to last-resort comparison" ^ (int32_t)"option '-r' only applies to last-resort comparison", format8);
        v48 = v518;
        v50 = v517;
        v52 = v516;
        v54 = v545;
        v56 = v514;
        v58 = v468;
        v60 = v513;
        v62 = (int64_t)format8;
        v63 = v512;
        v65 = v544;
        v67 = v511;
    }
    goto lab_0x40408c;
  lab_0x403062:;
    // 0x403062
    uint16_t v546; // 0x4030c6
    uint64_t v547 = (int64_t)v546; // 0x4030c6
    int64_t v548; // 0x402f50
    *(char *)(v548 + (int64_t)&g98) = 1;
    *(char *)(v548 + (int64_t)&g96) = (char)(v546 / 0x4000) % 2 ^ 1;
    int64_t v549 = 0; // 0x403089
    if ((v547 & 8) == 0) {
        // 0x40308b
        v549 = (v547 % 2 | (int64_t)(v548 == 10)) ^ 1;
    }
    // 0x40309d
    *(char *)(v548 + (int64_t)&g94) = (char)v549;
    int32_t ** v550; // 0x403045
    int32_t v551 = *(int32_t *)(4 * v548 + (int64_t)*v550); // 0x4030ab
    *(char *)(v548 + 0x61c780) = (char)v551;
    if (v548 == 255) {
        // break -> 0x403130
        goto lab_0x403130;
    }
    int64_t v552 = v548 + 1; // 0x402f50
    goto lab_0x4030bd_2;
  lab_0x403017:;
    int64_t v557 = *(int64_t *)((int64_t)locale_info + 8); // 0x403017
    unsigned char v558 = *(char *)v557; // 0x40301b
    g104 = v558;
    if (v558 == 0) {
        // 0x403110
        g104 = -1;
        goto lab_0x403036;
    } else {
        // 0x40302c
        if (*(char *)(v557 + 1) != 0) {
            // 0x403110
            g104 = -1;
            goto lab_0x403036;
        } else {
            goto lab_0x403036;
        }
    }
  lab_0x403036:
    // 0x403036
    v85 = &v123;
    g84 = 0;
    int16_t ** v554 = __ctype_b_loc(); // 0x40303d
    v550 = __ctype_toupper_loc();
    v552 = 0;
    while (true) {
      lab_0x4030bd_2:
        // 0x4030bd
        v548 = v552;
        int64_t v553 = (int64_t)*v554;
        v546 = *(int16_t *)(2 * v548 + v553);
        if (v546 % 2 != 0) {
            goto lab_0x403062;
        } else {
            // 0x4030cf
            if (v548 != 10) {
                goto lab_0x403062;
            } else {
                uint16_t v555 = *(int16_t *)(v553 + 20); // 0x4030d5
                *(char *)&g99 = 1;
                *(char *)&g95 = 0;
                *(char *)&g97 = (char)(v555 / 0x4000) % 2 ^ 1;
                int32_t v556 = *(int32_t *)((int64_t)*v550 + 40); // 0x4030fa
                *(char *)&g93 = (char)v556;
                // 0x4030bd
                v552 = 11;
                goto lab_0x4030bd_2;
            }
        }
    }
  lab_0x403130:;
    int64_t v559 = a1; // 0x403133
    int64_t v560 = 1; // 0x403133
    int64_t v561; // 0x402f50
    if (v4 != 0) {
        // 0x403139
        v123 = 0x100000000 * a1 >> 32;
        int64_t v562 = 1; // 0x403142
        int32_t v563 = v562;
        char * str4 = nl_langinfo(v563 + 0x2000d); // 0x40314f
        int32_t len = strlen(str4); // 0x40315a
        int64_t v564 = len; // 0x40315a
        int64_t v565 = function_411210(v564 + 1); // 0x403166
        int64_t v566 = 16 * v562; // 0x40316e
        *(int64_t *)(v566 + (int64_t)&g34) = v565;
        *(int32_t *)(v566 + (int64_t)&g35) = v563;
        int64_t v567 = v565; // 0x403183
        int64_t v568; // 0x402f50
        int64_t v569 = v568; // 0x403183
        int64_t v570; // 0x402f50
        int64_t v571; // 0x402f50
        int64_t v572; // 0x402f50
        int64_t v573; // 0x402f50
        int64_t v574; // 0x40314f
        int64_t v575; // 0x403190
        int64_t v576; // 0x4031a0
        int64_t v577; // 0x4031c1
        char v578; // 0x4031ad
        int64_t v579; // 0x4031b4
        if (len != 0) {
            // 0x403189
            v574 = (int64_t)str4;
            v575 = v564 + v574;
            v577 = v574;
            v570 = 0;
            v571 = v565;
            v576 = (int64_t)*(char *)v577;
            v572 = v571;
            v579 = v570;
            if (*(char *)(2 * v576 + (int64_t)*v554) % 2 == 0) {
                // 0x4031ad
                v578 = *(char *)(v576 + (int64_t)&g92);
                v579 = v570 + 1;
                *(char *)v571 = v578;
                v572 = v579 + v565;
            }
            // 0x4031c1
            v573 = v572;
            v577++;
            v567 = v573;
            v569 = v575;
            while (v575 != v577) {
                // 0x4031a0
                v570 = v579;
                v571 = v573;
                v576 = (int64_t)*(char *)v577;
                v572 = v571;
                v579 = v570;
                if (*(char *)(2 * v576 + (int64_t)*v554) % 2 == 0) {
                    // 0x4031ad
                    v578 = *(char *)(v576 + (int64_t)&g92);
                    v579 = v570 + 1;
                    *(char *)v571 = v578;
                    v572 = v579 + v565;
                }
                // 0x4031c1
                v573 = v572;
                v577++;
                v567 = v573;
                v569 = v575;
            }
        }
        int64_t v580 = v569;
        int64_t v581 = v567;
        v562++;
        *(char *)v581 = 0;
        v568 = v580;
        while (v562 != 13) {
            // 0x403148
            v563 = v562;
            str4 = nl_langinfo(v563 + 0x2000d);
            len = strlen(str4);
            v564 = len;
            v565 = function_411210(v564 + 1);
            v566 = 16 * v562;
            *(int64_t *)(v566 + (int64_t)&g34) = v565;
            *(int32_t *)(v566 + (int64_t)&g35) = v563;
            v567 = v565;
            v569 = v568;
            if (len != 0) {
                // 0x403189
                v574 = (int64_t)str4;
                v575 = v564 + v574;
                v577 = v574;
                v570 = 0;
                v571 = v565;
                v576 = (int64_t)*(char *)v577;
                v572 = v571;
                v579 = v570;
                if (*(char *)(2 * v576 + (int64_t)*v554) % 2 == 0) {
                    // 0x4031ad
                    v578 = *(char *)(v576 + (int64_t)&g92);
                    v579 = v570 + 1;
                    *(char *)v571 = v578;
                    v572 = v579 + v565;
                }
                // 0x4031c1
                v573 = v572;
                v577++;
                v567 = v573;
                v569 = v575;
                while (v575 != v577) {
                    // 0x4031a0
                    v570 = v579;
                    v571 = v573;
                    v576 = (int64_t)*(char *)v577;
                    v572 = v571;
                    v579 = v570;
                    if (*(char *)(2 * v576 + (int64_t)*v554) % 2 == 0) {
                        // 0x4031ad
                        v578 = *(char *)(v576 + (int64_t)&g92);
                        v579 = v570 + 1;
                        *(char *)v571 = v578;
                        v572 = v579 + v565;
                    }
                    // 0x4031c1
                    v573 = v572;
                    v577++;
                    v567 = v573;
                    v569 = v575;
                }
            }
            // 0x4031ca
            v580 = v569;
            v581 = v567;
            v562++;
            *(char *)v581 = 0;
            v568 = v580;
        }
        // 0x4031dc
        qsort((int64_t *)&g36, 12, 16, (int32_t (*)(int64_t *, int64_t *))0x405cf0);
        v559 = v123;
        v560 = v581;
        v561 = v580;
    }
    // 0x4031f8
    sigemptyset((struct _TYPEDEF_sigset_t *)&g73);
    int32_t sig_num = 14;
    int64_t v582 = 0;
    sigaction(sig_num, NULL, (struct sigaction *)&oact);
    if (oact != (char *)1) {
        // 0x403235
        sigaddset((struct _TYPEDEF_sigset_t *)&g73, sig_num);
    }
    while (v582 != 10) {
        int64_t v583 = v582 + 1; // 0x403242
        sig_num = *(int32_t *)(4 * v583 + (int64_t)&g1);
        v582 = v583;
        sigaction(sig_num, NULL, (struct sigaction *)&oact);
        if (oact != (char *)1) {
            // 0x403235
            sigaddset((struct _TYPEDEF_sigset_t *)&g73, sig_num);
        }
    }
    int64_t v584 = (int64_t)&oact; // 0x40321a
    int128_t v585 = __asm_movdqa(*(int128_t *)&g73); // 0x40324c
    int128_t v586 = __asm_movdqa(g74); // 0x403254
    oact = (char *)0x405d80;
    int128_t v587 = __asm_movdqa(g75); // 0x40326e
    int128_t v588 = __asm_movdqa(g76); // 0x403276
    __asm_movups(v1, v585);
    int128_t v589 = __asm_movdqa(g77); // 0x403294
    int128_t v590 = __asm_movdqa(g78); // 0x40329c
    int128_t v591 = __asm_movdqa(g79); // 0x4032a4
    int128_t v592 = __asm_movdqa(g80); // 0x4032ac
    __asm_movups(v1, v586);
    __asm_movups(v1, v587);
    __asm_movups(v1, v588);
    __asm_movups(v1, v589);
    __asm_movups(v1, v590);
    __asm_movups(v1, v591);
    __asm_movups(v1, v592);
    int64_t v593 = v584; // 0x4032ec
    int64_t v594 = 0; // 0x4032ec
    int32_t v595 = 14; // 0x4032ec
    int64_t v596; // 0x402f50
    while (true) {
        int32_t sig_num2 = v595;
        int64_t v597 = v594;
        int64_t v598; // 0x402f50
        if (sigismember((struct _TYPEDEF_sigset_t *)&g73, sig_num2) == 0) {
            // 0x4032f0
            v598 = v593;
            v596 = v593;
            if (v597 == 10) {
                // break -> 0x40332f
                break;
            }
        } else {
            // 0x403313
            sigaction(sig_num2, (struct sigaction *)&oact, NULL);
            v598 = 0;
            v596 = 0;
            if (v597 == 10) {
                // break -> 0x40332f
                break;
            }
        }
        int64_t v599 = v597 + 1;
        v593 = v598;
        v594 = v599;
        v595 = *(int32_t *)(4 * v599 + (int64_t)&g1);
    }
    // 0x40332f
    signal(SIGSTOP, SIG_DFL);
    function_413f20(0x407890, 0, v596);
    int128_t v600 = __asm_pxor(v2, v2); // 0x403345
    int64_t v601 = 0x100000000 * v559;
    __asm_movups(v1, v600);
    v373 = -1;
    __asm_movups(v1, v600);
    int64_t v602 = v601 >> 29; // 0x40337d
    __asm_movups(v1, v600);
    __asm_movups(v1, v600);
    v69 = v602;
    if (v601 < 0) {
      lab_0x4057e1:
        // 0x4057e1
        function_411460(v69);
        // UNREACHABLE
    }
    int64_t v603 = function_411210(v602); // 0x4033a3
    v123 = 0;
    v122 = NULL;
    v604 = v584;
    v341 = v1;
    bool v605; // 0x402f50
    v80 = v605 ? -1 : 1;
    v252 = v249 % 256;
    v370 = &v373;
    v371 = v252;
    v478 = &v96;
    v468 = 0x1000000 * (int32_t)v478 >> 24;
    v110 = &v97;
    v469 = v468;
    v380 = &v453;
    v381 = NULL;
    v382 = 0;
    v383 = NULL;
    v384 = 0;
    v388 = locale;
    v389 = (int32_t)v3 >= 0x31069;
    v390 = (int64_t)env_val;
    v391 = v600;
    v392 = v591;
    v393 = v596;
    v394 = v559 & 0xffffffff;
    v395 = a2;
    v396 = v560;
    v397 = v561;
    v398 = v103 & -256 | (int64_t)(env_val != NULL);
    v399 = v603;
    v400 = 0;
    v401 = 0;
    while (true) {
      lab_0x40344f_2:
        // 0x40344f
        v286 = v401;
        int64_t v402 = v400;
        v283 = v399;
        v314 = v398;
        v88 = v397;
        v311 = v396;
        v281 = v395;
        v287 = v394;
        int64_t v403 = v393;
        v306 = v392;
        v304 = v391;
        v278 = v390;
        v276 = v389;
        v274 = v388;
        v272 = v387;
        v270 = v386;
        v268 = v385;
        v296 = v384;
        str5 = v383;
        v293 = v382;
        str3 = v381;
        v266 = v380;
        v124 = -1;
        v259 = v403;
        v261 = v402;
        if ((int32_t)v402 != -1) {
            if ((char)v314 == 0 || v286 == 0) {
                goto lab_0x403488;
            } else {
                int32_t v404 = g49; // 0x403407
                int64_t v405 = v404; // 0x403407
                v258 = v405;
                v260 = v403;
                v262 = v402;
                if ((char)v276 != 1) {
                    goto lab_0x403430;
                } else {
                    // 0x403410
                    v258 = v405;
                    v260 = v403;
                    v262 = v402;
                    if ((char)v123 != 0) {
                        goto lab_0x403430;
                    } else {
                        int32_t v406 = v287; // 0x403416
                        if (v404 == v406) {
                            // 0x403580
                            v342 = v283;
                            if (v122 != NULL) {
                                goto lab_0x4052df_2;
                            }
                            // 0x40358c
                            v123 = 0;
                            v330 = v266;
                            v331 = v268;
                            v332 = v270;
                            v333 = v272;
                            v334 = v274;
                            v335 = v276;
                            v336 = v278;
                            v337 = v281;
                            v338 = v283;
                            v339 = v402;
                            v340 = v286;
                            goto lab_0x403590;
                        } else {
                            int64_t v407 = *(int64_t *)(8 * v405 + v281); // 0x403421
                            v258 = v405;
                            v260 = v407;
                            v262 = v402;
                            if (*(char *)v407 == 45) {
                                // 0x403470
                                v258 = v405;
                                v260 = v407;
                                v262 = v402;
                                if (*(char *)(v407 + 1) != 111) {
                                    goto lab_0x403430;
                                } else {
                                    // 0x403476
                                    v258 = v405;
                                    v260 = &g50;
                                    v262 = v402;
                                    if (v406 == (int32_t)&g50 == *(char *)(v407 + 2) == 0) {
                                        goto lab_0x403430;
                                    } else {
                                        goto lab_0x403488;
                                    }
                                }
                            } else {
                                goto lab_0x403430;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x403460;
        }
    }
  lab_0x40533e:
    // 0x40533e
    function_40a0d0(2);
    // UNREACHABLE
  lab_0x40553f:
    // 0x40553f
    function_407dd0(*v11);
    v14 = v12;
    v15 = v13;
    goto lab_0x405549;
  lab_0x405558:
    // 0x405558
    function_407dd0(*v16);
    v19 = v17;
    v20 = v18;
    goto lab_0x405562;
  lab_0x40541e:;
    int64_t v23 = *(int64_t *)v21;
    function_405dd0((int64_t)dcgettext(NULL, (char *)(int64_t)"cannot read", 5), (int64_t *)v23);
    v24 = v19;
    v25 = v20;
    goto lab_0x405430;
  lab_0x405510:
    // 0x405510
    g28[0] = v42;
    function_405d00((int64_t *)&g28);
    v7 = v38;
    v9 = v39;
    goto lab_0x405524_2;
  lab_0x40544e_2:
    // 0x40544e
    function_40f880(v27);
    error(2, (int32_t)"multi-character tab %s" ^ (int32_t)"multi-character tab %s", dcgettext(NULL, "multi-character tab %s", 5));
    v30 = v28;
    v31 = v29;
    goto lab_0x40547e;
  lab_dec_label_pc_unknown:;
    int64_t v70 = v71;
    int64_t v72 = v73;
    unsigned char v74 = *(char *)v70; // 0x404662
    char v75 = *(char *)v72; // 0x404662
    char v76 = v75; // 0x404662
    bool v77 = false; // 0x404662
    if (v74 == v75) {
        int64_t v78 = v79 - 1; // 0x404662
        v73 = v72 + v80;
        v71 = v70 + v80;
        v79 = v78;
        v76 = v74;
        v77 = true;
        if (v78 == 0) {
            goto lab_dec_label_pc_unknown_3;
        } else {
            goto lab_dec_label_pc_unknown;
        }
    } else {
        goto lab_dec_label_pc_unknown_3;
    }
  lab_dec_label_pc_unknown_3:;
    unsigned char v81 = v76;
    if ((v74 >= v81 && !v77) == v74 < v81) {
        goto lab_0x404682;
    } else {
        // 0x40466d
        v82 = v83;
        v84 = v85;
        v86 = (int64_t)"cannot read";
        v87 = v88;
        if (euidaccess((char *)v89, 4) != 0) {
            goto lab_0x40541e;
        } else {
            goto lab_0x404682;
        }
    }
  lab_0x404682:;
    // 0x404682
    int64_t v90; // 0x402f50
    int64_t v91 = v90 + 1; // 0x404682
    v92 = v83 + 8;
    v90 = v91;
    int64_t v93; // 0x402f50
    if (v93 != v91) {
        goto lab_0x404653;
    }
  lab_0x4042b7:
    // 0x4042b7
    function_407df0(v94, v95);
    free((int64_t *)v96);
    free((int64_t *)v97);
    // 0x4042e2
    return result;
  lab_0x404196_2:;
    int64_t v98 = v99;
    char * v100 = v101; // 0x404e5e
    int64_t v102 = v96 + v103; // 0x4041a6
    int64_t v104 = v102 - 32; // 0x4041b5
    int64_t v105; // 0x402f50
    int64_t v106; // 0x402f50
    int64_t v107; // 0x4041b9
    if (v98 == 0) {
        // 0x4041e4
        v107 = v102 - v108;
        v105 = v104;
        goto lab_0x4041e4_2;
    } else {
        int64_t v109 = function_4082a0(v110, v104); // 0x40429e
        v106 = v104;
        if (v109 < v111) {
            // 0x4041e4
            v107 = v102 - v108;
            v105 = v104;
            goto lab_0x4041e4_2;
        } else {
            goto lab_0x4042ab;
        }
    }
  lab_0x4041e4_2:;
    uint64_t v112 = v105;
    int64_t v113; // 0x402f50
    int64_t v114; // 0x402f50
    int64_t v115; // 0x402f50
    int64_t v116; // 0x402f50
    int64_t * v117; // 0x4041ec
    uint64_t v118; // 0x4041ec
    char * v119; // 0x4041f8
    if (v107 < v112) {
        int64_t v120 = v112 - 32; // 0x4041d0
        int64_t v121 = function_4082a0(v112, v120); // 0x4041d7
        v105 = v120;
        v106 = v120;
        if (v121 < v111) {
            goto lab_0x4041e4_2;
        } else {
            goto lab_0x4042ab;
        }
    } else {
        // 0x4041ec
        v117 = (int64_t *)(v112 + 8);
        v118 = *v117;
        v119 = (char *)(v103 + (int64_t)v100);
        v122 = v119;
        v115 = v98;
        if (v98 < v118) {
            goto lab_0x404265;
        } else {
            // 0x4041ec
            v113 = v97;
            v116 = v118;
            v114 = v98;
            goto lab_0x404202;
        }
    }
  lab_0x4042ab:
    // 0x4042ab
    result = 1;
    if ((char)v123 == 99) {
        // 0x404e3f
        function_40d370((v103 - v106 + v96 >> 5) + (int64_t)v100, (int64_t *)&v124);
        __fprintf_chk(g55, 1, dcgettext(NULL, "%s: %s:%s: disorder: ", 5));
        function_407e70(v106, (int64_t)g55, (int64_t)dcgettext(NULL, "standard error", 5));
        result = 1;
        goto lab_0x4042b7;
    } else {
        goto lab_0x4042b7;
    }
  lab_0x404265:;
    int64_t v125 = 2 * v115; // 0x404265
    int64_t v126 = v118; // 0x404268
    if (v125 != 0) {
        // 0x404260
        v115 = v125;
        v126 = v125;
        if (v118 > v125) {
            goto lab_0x404265;
        } else {
            goto lab_0x40426d;
        }
    } else {
        goto lab_0x40426d;
    }
  lab_0x40426d:
    // 0x40426d
    free((int64_t *)v97);
    int64_t v127 = function_411210(v126); // 0x40427d
    v97 = v127;
    v113 = v127;
    v116 = *v117;
    v114 = v126;
    goto lab_0x404202;
  lab_0x404202:;
    int64_t v128 = *(int64_t *)v112; // 0x404202
    memcpy((int64_t *)v113, (int64_t *)v128, (int32_t)v116);
    v101 = v119;
    v99 = v114;
    result = 0;
    if ((char)function_4074d0(v129, v94, v95) == 0) {
        goto lab_0x4042b7;
    } else {
        goto lab_0x404196_2;
    }
  lab_0x404f99:;
    int64_t * v130 = (int64_t *)(v85 + 24);
    int64_t v131 = v85 + 192;
    int64_t * v132 = (int64_t *)(v85 + 88);
    *v130 = v131;
    int64_t * v133 = (int64_t *)v131;
    function_405e30(v133, *v132, v134);
    char * v135 = (char *)(v85 + 240); // 0x40478c
    *v135 = 0;
    int64_t * v136 = (int64_t *)(v85 + 48); // 0x404794
    *v136 = *v136 - 1;
    int64_t * v137 = (int64_t *)(v85 + 8);
    int64_t * v138 = (int64_t *)(v85 + 208);
    int64_t * v139 = (int64_t *)(v85 + 224);
    int64_t * v140 = (int64_t *)(v85 + 32);
    int64_t v141 = v85 + 144;
    int64_t * v142 = (int64_t *)v141;
    int64_t v143 = v85 + 416;
    int64_t * v144 = (int64_t *)(v85 + 16);
    int64_t * v145 = (int64_t *)(v85 - 16);
    int64_t v146 = v147; // 0x40479a
    int64_t v148 = *v130; // 0x40479a
    goto lab_0x4048a7;
  lab_0x4048a7:;
    int64_t v149 = v148;
    int64_t v150 = v146;
    char v151; // 0x402f50
    int64_t v152; // 0x402f50
    int64_t v153; // 0x402f50
    int64_t v154; // 0x402f50
    int64_t v155; // 0x402f50
    int64_t v156; // 0x402f50
    int64_t v157; // 0x402f50
    int64_t v158; // 0x4048cb
    int64_t v159; // 0x404f4c
    if ((char)function_4074d0((char)*v130, v123, *v137) == 0) {
        // 0x404ac6
        function_407df0(v123, *v137);
        if (*v136 == 0) {
            // 0x404f0e
            int64_t * v160; // 0x402f50
            int64_t v161 = *v160; // 0x404f0e
            free((int64_t *)v161);
            v69 = v161;
            if (v149 % 0x800000000000001 == 0) {
                // 0x404f3c
                v69 = v161;
                if (v149 > 0xfffffffffffffff) {
                    goto lab_0x4057e1;
                } else {
                    int64_t v162 = g72; // 0x404f20
                    v159 = function_411210(16 * v149);
                    v156 = v162;
                    v157 = v159;
                    if (v162 != 0) {
                        goto lab_0x404f59;
                    } else {
                        goto lab_0x404f71;
                    }
                }
            } else {
                goto lab_0x4057e1;
            }
        } else {
            goto lab_0x404ae0;
        }
    } else {
        char v163 = *v135; // 0x4048c2
        v158 = *(int64_t *)(v85 + 216);
        if (v163 == 0) {
            goto lab_0x404910;
        } else {
            // 0x4048d8
            if (*v136 == 0) {
                int64_t v164 = *v133 + v158; // 0x404968
                g100 = 0;
                v154 = v164;
                if ((*v139 || v149) != 0) {
                    goto lab_0x404923;
                } else {
                    // 0x404988
                    function_407df0(v123, *v137);
                    int64_t v165 = function_407cd0(*v140, (int64_t *)"w"); // 0x4049a0
                    v11 = v140;
                    v12 = v85;
                    v13 = v150;
                    if (v165 == 0) {
                        goto lab_0x40553f;
                    } else {
                        // 0x4049ae
                        *v142 = v165;
                        v155 = v164;
                        v153 = *v140;
                        v151 = v163;
                        v152 = 0;
                        goto lab_0x40493d;
                    }
                }
            } else {
                int64_t v166 = *v132; // 0x4048e4
                int64_t v167 = *(int64_t *)(v85 + 200); // 0x4048e9
                if (v166 + 1 < v158 - v167 + -1 * *v138 * v166) {
                    // 0x4051df
                    *v139 = v167;
                    function_407df0(v123, *v137);
                    goto lab_0x404ae0;
                } else {
                    goto lab_0x404910;
                }
            }
        }
    }
  lab_0x404ae0:;
    int64_t * v168 = (int64_t *)(v85 + 96); // 0x404ae0
    *v168 = *v168 + 8;
    int64_t v169 = *(int64_t *)*(int64_t *)(v85 + 96); // 0x40473c
    int64_t * v170 = (int64_t *)(v85 + 8);
    *v170 = v169;
    int64_t v171 = function_407cd0(v169, (int64_t *)"r"); // 0x404747
    v123 = v171;
    v16 = v170;
    v17 = v85;
    v18 = v150;
    if (v171 == 0) {
        goto lab_0x405558;
    } else {
        // 0x404759
        *(int64_t *)(v85 + 88) = 48;
        if (*(int64_t *)(v85 + 80) < 2) {
            // 0x40476e
            *(int64_t *)(v85 + 24) = v85 + 192;
        }
    }
  lab_0x404910:
    // 0x404910
    g100 = 0;
    v154 = *v133 + v158;
    goto lab_0x404923;
  lab_0x404923:
    // 0x404923
    v155 = v154;
    v153 = function_4090c0(v141, 0) + 13;
    v151 = 0;
    v152 = v149 + 1;
    goto lab_0x40493d;
  lab_0x40493d:;
    int64_t v172 = v153;
    int64_t v173 = v155;
    int64_t v174; // 0x402f50
    int64_t v175; // 0x402f50
    if (*v138 < 2) {
        // 0x40494c
        function_4085d0(v173 - 32, *v142, v172);
        v175 = v172;
        v174 = v150;
        goto lab_0x40488e;
    } else {
        // 0x4047a0
        *(int64_t *)v143 = function_40cfd0(0x407850, *(int64_t *)(v85 + 64));
        pthread_mutex_init((int64_t *)*(int64_t *)(v85 + 72), NULL);
        pthread_cond_init((int64_t *)(v85 + 464), NULL);
        int64_t v176 = *v138; // 0x4047d7
        int64_t v177 = function_411210(*(int64_t *)(v85 + 56)); // 0x4047df
        *(int64_t *)(v177 + 48) = v176;
        *(int64_t *)(v177 + 40) = v176;
        *(int64_t *)(v177 + 24) = 0;
        *(int64_t *)(v177 + 16) = 0;
        *(int64_t *)(v177 + 8) = 0;
        *(int64_t *)v177 = 0;
        *(int64_t *)(v177 + 32) = 0;
        *(int64_t *)(v177 + 56) = 0;
        *(int32_t *)(v177 + 80) = 0;
        *(char *)(v177 + 84) = 0;
        pthread_mutex_init((int64_t *)(v177 + 88), NULL);
        int64_t v178 = *(int64_t *)(v85 + 40); // 0x404837
        int64_t v179 = v177 + 128; // 0x40483f
        *v144 = v179;
        function_4061f0(v177, v179, v173, v178, v176, 0);
        *v145 = v172;
        int64_t v180 = *v144; // 0x404867
        function_409880(v173, v178, *v138, v180, v143, *v142, (int64_t)&g122);
        v175 = *v145;
        v174 = v180;
        goto lab_0x40488e;
    }
  lab_0x404f59:;
    int64_t v181 = v157;
    int64_t v182 = v156;
    *(int64_t *)(v181 + 8) = v182;
    int64_t v183 = *(int64_t *)v182; // 0x404f61
    *(int64_t *)v181 = v182 + 13;
    v156 = v183;
    v157 = v181 + 16;
    if (v183 != 0) {
        goto lab_0x404f59;
    } else {
        goto lab_0x404f71;
    }
  lab_0x404f71:;
    int64_t v184 = *v140; // 0x404f71
    function_409330(v159, (int32_t)v149, v149, v184);
    free((int64_t *)v159);
    goto lab_0x404af8;
  lab_0x404af8:;
    int64_t v185 = v172;
    int64_t v186 = v175;
    if (g69 < 1) {
        // 0x404b19
    } else {
        goto lab_0x404b08;
    }
  lab_0x40488e:
    // 0x40488e
    function_407df0(*v142, v172);
    v146 = v174;
    v148 = v152;
    if (v151 != 0) {
        // 0x404aeb
        free((int64_t *)*v133);
        goto lab_0x404af8;
    } else {
        goto lab_0x4048a7;
    }
  lab_0x404b08:
    // 0x404b08
    function_405fb0(0xffffffff, v185, v186);
    int32_t v187 = g69; // 0x404b0f
    if (v187 >= 0 == (v187 != 0)) {
        goto lab_0x404b08;
    }
}
// Address range: 0x405830 - 0x40585b
// Address range: 0x40585b - 0x40587a
int64_t function_40585b(void) {
    // 0x40585b
    return 0x61c588;
}
// Address range: 0x40587a - 0x4058b1
int64_t function_40587a(void) {
    // 0x40587a
    return 0;
}
// Address range: 0x4058b1 - 0x405908
int64_t function_4058b1(void) {
    // 0x4058b1
    if (g56 != 0) {
        // 0x405907
        int64_t result; // 0x4058b1
        return result;
    }
    int64_t v1 = g57; // 0x4058e4
    int64_t result2; // 0x4058f6
    if (g57 >= ((int64_t)&g24 - (int64_t)&g23 >> 3) - 1) {
        // 0x4058f6
        result2 = function_40585b();
        g56 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g24 - (int64_t)&g23 >> 3) - 1) {
        // 0x4058e6
        v1++;
    }
    // 0x4058da
    g57 = v1;
    // 0x4058f6
    result2 = function_40585b();
    g56 = 1;
    return result2;
}
// Address range: 0x405908 - 0x40590d
int64_t function_405908(void) {
    // 0x405908
    return function_40587a();
}
// Address range: 0x405910 - 0x40591d
int64_t function_405910(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x405910
    return (int64_t)*(int32_t *)(a1 + 8) % a2;
}
// Address range: 0x405920 - 0x40592a
int64_t function_405920(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a2 + 8); // 0x405920
    return (int64_t)(*(int32_t *)(a1 + 8) == v1) | (int64_t)(v1 & -256);
}
// Address range: 0x405930 - 0x4059e8
int64_t function_405930(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = v1 + 1; // 0x405972
    int32_t v3 = (int32_t)v1 % 256;
    int32_t v4 = v3; // 0x40597e
    int64_t v5 = v2; // 0x40597e
    int64_t v6 = v1; // 0x40597e
    int64_t result = 0; // 0x40597e
    if (v3 < 58) {
        int64_t v7 = 0;
        int64_t v8 = v1 % 256;
        char v9 = *(char *)v2; // 0x405948
        int64_t v10 = (int64_t)v9 & 0xffffffff; // 0x40595b
        int64_t v11 = v2; // 0x40595b
        char v12 = 0; // 0x40595b
        if (g104 == (int32_t)v9) {
            // 0x40595d
            v11 = v1 + 2;
            v10 = (int64_t)*(char *)v11;
            v12 = 1;
        }
        int64_t v13 = (char)v7 < (char)v8 ? v8 : v7;
        result = v13 & 0xffffffff;
        v6 = v11;
        int64_t v14 = v10;
        v5 = v6 + 1;
        v4 = (int32_t)v14 % 256;
        int64_t v15 = v5; // 0x40597e
        while (v4 < 58) {
            // 0x405948
            v7 = result;
            v8 = v14;
            v9 = *(char *)v15;
            v10 = (int64_t)v9 & 0xffffffff;
            v11 = v15;
            v12 = 0;
            if (g104 == (int32_t)v9) {
                // 0x40595d
                v11 = v6 + 2;
                v10 = (int64_t)*(char *)v11;
                v12 = 1;
            }
            // 0x40596b
            v13 = (char)v7 < (char)v8 ? v8 : v7;
            result = v13 & 0xffffffff;
            v6 = v11;
            v14 = v10;
            v5 = v6 + 1;
            v4 = (int32_t)v14 % 256;
            v15 = v5;
        }
        // 0x405980
        if (v12 != 0) {
            // 0x4059e0
            *a1 = v6 - 1;
            return result;
        }
    }
    // 0x405985
    if (g105 != v4) {
        // 0x40598e
        *a1 = v6;
        return result;
    }
    unsigned char v16 = *(char *)v5; // 0x405998
    if (v16 != 57 && (int32_t)v16 >= 57) {
        // 0x40598e
        *a1 = v5;
        return result;
    }
    unsigned char v17 = v16;
    int64_t v18 = v6 + 2;
    int64_t v19 = result;
    unsigned char v20 = *(char *)v18; // 0x4059bf
    int64_t v21 = v17 > (char)v19 ? (int64_t)v17 : v19;
    int64_t result2 = v21 & 0xffffffff; // 0x4059c6
    int64_t v22 = v18 + 1; // 0x4059d1
    while (v20 == 57 || (int32_t)v20 < 57) {
        // 0x4059bb
        v17 = v20;
        v18 = v22;
        v19 = result2;
        v20 = *(char *)v18;
        v21 = v17 > (char)v19 ? (int64_t)v17 : v19;
        result2 = v21 & 0xffffffff;
        v22 = v18 + 1;
    }
    // 0x4059d3
    *a1 = v18;
    return result2;
}
// Address range: 0x4059f0 - 0x405a39
int64_t function_4059f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4059f0
    int64_t v1; // 0x4059f0
    char * v2 = (char *)((int64_t)((char)v1 == 45) + a1); // bp-16, 0x405a03
    int64_t v3 = function_405930((int64_t *)&v2); // 0x405a0d
    int64_t result = 0; // 0x405a16
    if ((char)v3 >= 49) {
        unsigned char v4 = *v2; // 0x405a1d
        char v5 = *(char *)((int64_t)v4 + (int64_t)&g2); // 0x405a20
        int64_t v6 = v5; // 0x405a27
        result = ((char)v1 == 45 ? -v6 : v6) & 0xffffffff;
    }
    // 0x405a31
    return result;
}
// Address range: 0x405a40 - 0x405ae3
int64_t function_405a40(int64_t a1, int32_t a2) {
    int64_t v1 = a1;
    int64_t v2 = (int64_t)*(char *)v1;
    int64_t v3 = v1 + 1; // 0x405a56
    while (*(char *)(v2 + (int64_t)&g98) != 0) {
        // 0x405a4c
        v1 = v3;
        v2 = (int64_t)*(char *)v1;
        v3 = v1 + 1;
    }
    int64_t v4 = 12;
    int64_t v5 = 0;
    int64_t v6 = (v4 + v5) / 2; // 0x405a65
    int64_t v7 = 16 * v6; // 0x405a6b
    int64_t v8 = *(int64_t *)(v7 + (int64_t)&g36); // 0x405a6f
    unsigned char v9 = *(char *)v8; // 0x405a76
    int64_t v10 = v1; // 0x405a7b
    while (v9 != 0) {
        unsigned char v11 = *(char *)(v2 + (int64_t)&g92); // 0x405a80
        int64_t v12 = v5; // 0x405a86
        int64_t v13 = v6; // 0x405a86
        if (v11 >= v9) {
            int64_t v14 = v8; // 0x405a88
            if (v11 > v9) {
                // 0x405ad8
                v12 = v6 + 1;
                v13 = v4;
            } else {
                int64_t v15 = v14 + 1; // 0x405a9f
                unsigned char v16 = *(char *)v15; // 0x405aa3
                int64_t v17 = v1 + 1; // 0x405aa6
                v10 = v17;
                if (v16 == 0) {
                    // break (via goto) -> 0x405aae
                    goto lab_0x405aae;
                }
                unsigned char v18 = *(char *)v17; // 0x405a90
                unsigned char v19 = *(char *)((int64_t)v18 + (int64_t)&g92); // 0x405a94
                v12 = v5;
                v13 = v6;
                while (v19 >= v16) {
                    // 0x405a9d
                    if (v19 > v16) {
                        goto lab_0x405ad8;
                    }
                    v15++;
                    v16 = *(char *)v15;
                    v17++;
                    v10 = v17;
                    if (v16 == 0) {
                        // break (via goto) -> 0x405aae
                        goto lab_0x405aae;
                    }
                    // 0x405a90
                    v18 = *(char *)v17;
                    v19 = *(char *)((int64_t)v18 + (int64_t)&g92);
                    v12 = v5;
                    v13 = v6;
                }
            }
        }
        // 0x405acb
        if (v12 >= v13) {
            // 0x405ad0
            return 0;
        }
        v4 = v13;
        v5 = v12;
        v6 = (v4 + v5) / 2;
        v7 = 16 * v6;
        v8 = *(int64_t *)(v7 + (int64_t)&g36);
        v9 = *(char *)v8;
        v10 = v1;
    }
  lab_0x405aae:
    if (a2 != 0) {
        // 0x405ab3
        *(int64_t *)(int64_t)a2 = v10;
    }
    // 0x405ab6
    return (int64_t)*(int32_t *)(v7 + (int64_t)&g37);
}
// Address range: 0x405af0 - 0x405b43
int64_t function_405af0(int64_t a1) {
    // 0x405af0
    if (*(int64_t *)(a1 + 32) != 0 || *(int64_t *)(a1 + 40) != 0) {
        // 0x405af9
        return 0;
    }
    int64_t v1 = a1 + 48; // 0x405b07
    unsigned char result = *(char *)v1; // 0x405b07
    if (result != 0) {
        // 0x405af9
        return 0;
    }
    // 0x405b0f
    if (*(char *)(a1 + 49) != 0 || (*(int64_t *)v1 & 0xffff00ff0000) != 0) {
        // 0x405af9
        return result;
    }
    unsigned char result2 = *(char *)(a1 + 54); // 0x405b25
    if (result2 != 0) {
        // 0x405af9
        return 0;
    }
    // 0x405b2d
    if (*(char *)(a1 + 56) != 0) {
        // 0x405af9
        return result2;
    }
    // 0x405b33
    return (int64_t)(*(char *)(a1 + 51) ^ 1);
}
// Address range: 0x405b50 - 0x405bf7
int64_t function_405b50(char a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = a1;
    int64_t v3 = v1; // 0x405b55
    if (*(int16_t *)(v2 + 48) != 0) {
        // 0x405b57
        *(char *)a2 = 98;
        v3 = v1 + 1;
    }
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x405b5e
    int64_t v5 = v3; // 0x405b66
    if (*v4 == (int64_t)&g94) {
        // 0x405be2
        *(char *)v3 = 100;
        v5 = v3 + 1;
    }
    int64_t v6 = v5; // 0x405b70
    if (*(int64_t *)(v2 + 40) != 0) {
        // 0x405b72
        *(char *)v5 = 102;
        v6 = v5 + 1;
    }
    int64_t v7 = v6; // 0x405b7d
    if (*(char *)(v2 + 52) != 0) {
        // 0x405b7f
        *(char *)v6 = 103;
        v7 = v6 + 1;
    }
    int64_t v8 = v7; // 0x405b8a
    if (*(char *)(v2 + 53) != 0) {
        // 0x405b8c
        *(char *)v7 = 104;
        v8 = v7 + 1;
    }
    int64_t v9 = v8; // 0x405b9b
    if (*v4 == (int64_t)&g96) {
        // 0x405bee
        *(char *)v8 = 105;
        v9 = v8 + 1;
    }
    int64_t v10 = v9; // 0x405ba1
    if (*(char *)(v2 + 54) != 0) {
        // 0x405ba3
        *(char *)v9 = 77;
        v10 = v9 + 1;
    }
    int64_t v11 = v10; // 0x405bae
    if (*(char *)(v2 + 50) != 0) {
        // 0x405bb0
        *(char *)v10 = 110;
        v11 = v10 + 1;
    }
    int64_t v12 = v11; // 0x405bbb
    if (*(char *)(v2 + 51) != 0) {
        // 0x405bbd
        *(char *)v11 = 82;
        v12 = v11 + 1;
    }
    int64_t v13 = v12; // 0x405bc8
    if (*(char *)(v2 + 55) != 0) {
        // 0x405bca
        *(char *)v12 = 114;
        v13 = v12 + 1;
    }
    int64_t result = v13; // 0x405bd5
    if (*(char *)(v2 + 56) != 0) {
        // 0x405bd7
        *(char *)v13 = 86;
        result = v13 + 1;
    }
    // 0x405bde
    *(char *)result = 0;
    return result;
}
// Address range: 0x405c00 - 0x405ce9
int64_t function_405c00(int64_t * a1, int64_t * a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    char v1 = result;
    if (v1 == 0) {
        // 0x405c3b
        return result;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(v2 + 32);
    int64_t result2 = result; // 0x405c30
    g124 = v1 - 77;
    switch (v1) {
        case 77: {
            // 0x405cd0
            *(char *)(v2 + 54) = 1;
            // break -> 0x405c30
            break;
        }
        case 82: {
            // 0x405ce0
            *(char *)(v2 + 51) = 1;
            // break -> 0x405c30
            break;
        }
        case 86: {
            // 0x405cc0
            *(char *)(v2 + 56) = 1;
            // break -> 0x405c30
            break;
        }
        case 98: {
            if ((a3 & 0xfffffffd) == 0) {
                // 0x405ca4
                *(char *)(v2 + 48) = 1;
            }
            if ((int32_t)a3 < 3) {
                // 0x405cad
                *(char *)(v2 + 49) = 1;
            }
            // break -> 0x405c30
            break;
        }
        case 100: {
            // 0x405c90
            *v3 = (int64_t)&g94;
            // break -> 0x405c30
            break;
        }
        case 102: {
            // 0x405c80
            *(int64_t *)(v2 + 40) = (int64_t)&g92;
            // break -> 0x405c30
            break;
        }
        case 103: {
            // 0x405c70
            *(char *)(v2 + 52) = 1;
            // break -> 0x405c30
            break;
        }
        case 104: {
            // 0x405c68
            *(char *)(v2 + 53) = 1;
            // break -> 0x405c30
            break;
        }
        case 105: {
            // 0x405c50
            if (*v3 == 0) {
                // 0x405c57
                *v3 = (int64_t)&g96;
            }
            // break -> 0x405c30
            break;
        }
        case 110: {
            // 0x405c40
            *(char *)(v2 + 50) = 1;
            // break -> 0x405c30
            break;
        }
        case 114: {
            // 0x405c28
            *(char *)(v2 + 55) = 1;
            // break -> 0x405c30
            break;
        }
        default: {
            // 0x405c3b
            return result2;
        }
    }
    // 0x405c30
    result2++;
    char v4 = *(char *)result2; // 0x405c34
    while (v4 != 0) {
        // 0x405c10
        g124 = v4 - 77;
        switch (v4) {
            case 77: {
                // 0x405cd0
                *(char *)(v2 + 54) = 1;
                // break -> 0x405c30
                break;
            }
            case 82: {
                // 0x405ce0
                *(char *)(v2 + 51) = 1;
                // break -> 0x405c30
                break;
            }
            case 86: {
                // 0x405cc0
                *(char *)(v2 + 56) = 1;
                // break -> 0x405c30
                break;
            }
            case 98: {
                if ((a3 & 0xfffffffd) == 0) {
                    // 0x405ca4
                    *(char *)(v2 + 48) = 1;
                }
                if ((int32_t)a3 < 3) {
                    // 0x405cad
                    *(char *)(v2 + 49) = 1;
                }
                // break -> 0x405c30
                break;
            }
            case 100: {
                // 0x405c90
                *v3 = (int64_t)&g94;
                // break -> 0x405c30
                break;
            }
            case 102: {
                // 0x405c80
                *(int64_t *)(v2 + 40) = (int64_t)&g92;
                // break -> 0x405c30
                break;
            }
            case 103: {
                // 0x405c70
                *(char *)(v2 + 52) = 1;
                // break -> 0x405c30
                break;
            }
            case 104: {
                // 0x405c68
                *(char *)(v2 + 53) = 1;
                // break -> 0x405c30
                break;
            }
            case 105: {
                // 0x405c50
                if (*v3 == 0) {
                    // 0x405c57
                    *v3 = (int64_t)&g96;
                }
                // break -> 0x405c30
                break;
            }
            case 110: {
                // 0x405c40
                *(char *)(v2 + 50) = 1;
                // break -> 0x405c30
                break;
            }
            case 114: {
                // 0x405c28
                *(char *)(v2 + 55) = 1;
                // break -> 0x405c30
                break;
            }
            default: {
                // 0x405c3b
                return result2;
            }
        }
        // 0x405c30
        result2++;
        v4 = *(char *)result2;
    }
    // 0x405c3b
    return result2;
}
// Address range: 0x405cf0 - 0x405cfb
int64_t function_405cf0(int64_t str, int64_t str2) {
    // 0x405cf0
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x405d00 - 0x405d30
int64_t function_405d00(int64_t * a1) {
    // 0x405d00
    error(2, (int32_t)"options '-%s' are incompatible" ^ (int32_t)"options '-%s' are incompatible", dcgettext(NULL, "options '-%s' are incompatible", 5));
    return &g122;
}
// Address range: 0x405d30 - 0x405dca
int64_t function_405d30(int64_t a1, char * a2) {
    // 0x405d30
    function_40f880(a1);
    dcgettext(NULL, a2, 5);
    error(2, (int32_t)"%s: invalid field specification %s" ^ (int32_t)"%s: invalid field specification %s", dcgettext(NULL, "%s: invalid field specification %s", 5));
    int64_t v1 = g72; // 0x405d92
    if (g72 == 0) {
        // 0x405da9
        g72 = 0;
        signal(SIGINT, SIG_DFL);
        return raise(2);
    }
    unlink((char *)(v1 + 13));
    v1 = *(int64_t *)v1;
    while (v1 != 0) {
        // 0x405d98
        unlink((char *)(v1 + 13));
        v1 = *(int64_t *)v1;
    }
    // 0x405da9
    g72 = 0;
    signal(SIGINT, SIG_DFL);
    return raise(2);
}
// Address range: 0x405dd0 - 0x405e24
int64_t function_405dd0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2; // 0x405ddf
    if (a2 == NULL) {
        // 0x405e0e
        v1 = (int64_t)dcgettext(NULL, "standard output", 5);
        goto lab_0x405de1;
    } else {
        goto lab_0x405de1;
    }
  lab_0x405de1:;
    int64_t v2 = function_40f700(0, 3, v1); // 0x405de8
    error(2, *__errno_location(), "%s: %s", (char *)a1, (char *)v2);
    // 0x405e0e
    v1 = (int64_t)dcgettext(NULL, "standard output", 5);
    goto lab_0x405de1;
}
// Address range: 0x405e30 - 0x405ea5
int64_t function_405e30(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    uint64_t size = a3 + 32 & -32; // 0x405e5c
    int64_t * mem = malloc((int32_t)size); // 0x405e63
    int64_t result = (int64_t)mem;
    *a1 = result;
    while (mem == NULL) {
        uint64_t v2 = size / 2; // 0x405e50
        if (a2 + 1 >= v2) {
            // 0x405ea0
            function_411460(size);
            // UNREACHABLE
        }
        size = v2 + 32 & -32;
        mem = malloc((int32_t)size);
        result = (int64_t)mem;
        *a1 = result;
    }
    // 0x405e71
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 24) = size;
    *(int64_t *)(v1 + 16) = 0;
    *(int64_t *)(v1 + 32) = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(char *)(v1 + 48) = 0;
    return result;
}
// Address range: 0x405eb0 - 0x405eec
int64_t function_405eb0(uint64_t a1, uint64_t a2, int64_t a3) {
    int64_t result = 0x100000000 * function_40d3c0(a1, a2 - a1, 0) >> 32; // 0x405ec6
    int64_t result2 = result; // 0x405ecb
    if (a2 <= a1) {
        // 0x405ee5
        return result;
    }
    int64_t v1 = a1 + 1; // 0x405ed0
    result2 += (int64_t)(*(char *)a1 == 9);
    while (v1 != a2) {
        int64_t v2 = v1;
        v1 = v2 + 1;
        result2 += (int64_t)(*(char *)v2 == 9);
    }
    // 0x405ee5
    return result2;
}
// Address range: 0x405ef0 - 0x405fb0
int64_t function_405ef0(int64_t str, int64_t str2, int64_t n) {
    int32_t * err_num = __errno_location(); // 0x405f03
    *err_num = 0;
    int32_t req_bytes = strxfrm((char *)str, (char *)str2, (int32_t)n); // 0x405f1a
    if (*err_num == 0) {
        // 0x405f25
        return req_bytes;
    }
    // 0x405f30
    error(0, *err_num, dcgettext(NULL, "string transformation failed", 5));
    error(0, (int32_t)"set LC_ALL='C' to work around the problem" ^ (int32_t)"set LC_ALL='C' to work around the problem", dcgettext(NULL, "set LC_ALL='C' to work around the problem", 5));
    function_40f550(0, 8, str2);
    error(2, (int32_t)"the untransformed string was %s" ^ (int32_t)"the untransformed string was %s", dcgettext(NULL, "the untransformed string was %s", 5));
    return &g122;
}
// Address range: 0x405fb0 - 0x4060d0
int64_t function_405fb0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a1; // 0x405fba
    int32_t stat_loc; // bp-44, 0x405fb0
    uint32_t v2 = waitpid(v1 != 0 ? v1 : -1, &stat_loc, (int32_t)(v1 == 0)); // 0x405fcc
    if (v2 >= 0) {
        // 0x405fd9
        if (v2 == 0) {
            // 0x405ff6
            return 0;
        }
        int64_t result = v2;
        if (v1 < 1) {
            int64_t v3 = function_40cde0(g71); // 0x406010
            if (v3 == 0) {
                // 0x405ff6
                return result;
            }
            // 0x40601a
            *(char *)(v3 + 12) = 2;
        }
        uint32_t v4 = stat_loc; // 0x405fe1
        if ((v4 / 256 % 256 || v4 % 128) == 0) {
            // 0x405fef
            g69--;
            // 0x405ff6
            return result;
        }
        // 0x406020
        function_40f630(4, (int64_t)g82);
        error(2, (int32_t)"%s [-d] terminated abnormally" ^ (int32_t)"%s [-d] terminated abnormally", dcgettext(NULL, "%s [-d] terminated abnormally", 5));
    }
    // 0x406059
    function_40f630(4, (int64_t)g82);
    char * format = dcgettext(NULL, "waiting for %s [-d]", 5); // 0x406079
    error(2, *__errno_location(), format);
    int64_t v5 = function_40cde0(g71); // 0x4060b5
    int64_t result2 = 0; // 0x4060bd
    if (v5 != 0) {
        // 0x4060bf
        *(char *)(v5 + 12) = 2;
        int64_t v6; // bp-80, 0x405fb0
        result2 = function_405fb0(2, (int64_t)&v6, (int64_t)format);
    }
    // 0x405ff6
    return result2;
}
// Address range: 0x4060d0 - 0x406185
int64_t function_4060d0(uint32_t a1, char * buf) {
    int64_t v1 = (int64_t)buf;
    int64_t v2 = v1;
    int32_t v3 = *(int32_t *)v2; // 0x4060da
    int64_t v4 = v2 + 4; // 0x4060dc
    int32_t v5 = v3 - 0x1010101 & (v3 ^ -0x7f7f7f80); // 0x4060e8
    uint32_t v6 = v5 & -0x7f7f7f80; // 0x4060ea
    while (v6 == 0) {
        // 0x4060da
        v2 = v4;
        v3 = *(int32_t *)v2;
        v4 = v2 + 4;
        v5 = v3 - 0x1010101 & (v3 ^ -0x7f7f7f80);
        v6 = v5 & -0x7f7f7f80;
    }
    int64_t v7 = (v5 & 0x8080) == 0 ? v2 + 6 : v4; // 0x406102
    unsigned char v8 = (char)((v5 & 0x8080) == 0 ? v6 / 0x10000 : v6); // 0x406108
    int64_t v9 = -1 - v8 < v8 ? 0xfffffffc : 0xfffffffd; // 0x406110
    write(2, (int64_t *)buf, (int32_t)(v7 - v1 + v9));
    if (a1 == 0) {
        // 0x406120
        write(2, &g6, 1);
        _exit(2);
        // UNREACHABLE
    }
    // 0x40613e
    int64_t v10; // bp-20, 0x4060d0
    int64_t buf2 = function_40d2b0((int64_t)a1, &v10); // 0x406145
    write(2, (int64_t *)": errno ", 8);
    int64_t v11 = -1; // 0x40616a
    int64_t v12 = buf2; // 0x40616a
    int64_t v13 = 0; // 0x40616a
    while (v11 != 0) {
        int64_t v14 = v12;
        v11--;
        bool v15; // 0x4060d0
        v12 = v14 + (v15 ? -1 : 1);
        v13 = v11;
        if (*(char *)v14 == 0) {
            // break -> 
            break;
        }
        v13 = 0;
    }
    write(2, (int64_t *)buf2, -2 - (int32_t)v13);
    // 0x406120
    write(2, &g6, 1);
    _exit(2);
    // UNREACHABLE
}
// Address range: 0x406190 - 0x4061e5
int64_t function_406190(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = g71; // 0x40619e
    if (g71 == 0) {
        // 0x4061b8
        v1 = function_40c600(47, 0, 0x405910, 0x405920, 0);
        g71 = v1;
        if (v1 == 0) {
            // 0x4061e0
            function_411460(v1);
            // UNREACHABLE
        }
    }
    // 0x4061a0
    *(char *)(a1 + 12) = 1;
    int64_t result = function_40cda0(v1, a1); // 0x4061a7
    if (result != 0) {
        // 0x4061b1
        return result;
    }
    // 0x4061e0
    function_411460(v1);
    // UNREACHABLE
}
// Address range: 0x4061f0 - 0x40631d
int64_t function_4061f0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, int32_t a6) {
    int64_t v1; // 0x4061f0
    int64_t v2; // 0x4061f0
    if ((char)a6 == 0) {
        // 0x4062a8
        v1 = *(int64_t *)(a1 + 48) % 2;
        v2 = a1 + 24;
    } else {
        // 0x40621d
        v1 = *(int64_t *)(a1 + 40) % 2;
        v2 = a1 + 16;
    }
    int64_t v3 = a3 - 32 * a5; // 0x4061fd
    int64_t v4 = 0;
    int64_t v5 = v3 - 32 * v4;
    *(int64_t *)(a2 + 48) = v1;
    int64_t result = a2 + 128; // 0x406244
    *(int64_t *)(a2 + 56) = a1;
    *(int64_t *)(a2 + 16) = v3;
    *(int64_t *)a2 = v3;
    *(int64_t *)(a2 + 24) = v5;
    *(int64_t *)(a2 + 8) = v5;
    *(int64_t *)(a2 + 32) = v2;
    *(int64_t *)(a2 + 40) = v4;
    *(int32_t *)(a2 + 80) = *(int32_t *)(a1 + 80) + 1;
    *(char *)(a2 + 84) = 0;
    pthread_mutex_init((int64_t *)(a2 + 88), NULL);
    int64_t * v6 = (int64_t *)(a2 + 64);
    if (a4 < 2) {
        // 0x40627f
        *v6 = 0;
        *(int64_t *)(a2 + 72) = 0;
        return result;
    }
    // 0x4062d0
    *v6 = result;
    int64_t v7 = function_4061f0(a2, result, v3, 0, a5, 1); // 0x4062ef
    *(int64_t *)(a2 + 72) = v7;
    return function_4061f0(a2, v7, v5, a4 % 2, a5, 0);
}
// Address range: 0x406320 - 0x40635c
int64_t function_406320(int64_t a1, int64_t a2) {
    int64_t v1 = a1 + 8; // 0x406326
    int64_t * mutex = (int64_t *)v1; // 0x406331
    pthread_mutex_lock(mutex);
    function_40d070(v1, a2);
    *(char *)(a2 + 84) = 1;
    pthread_cond_signal((int64_t *)(a1 + 48));
    return pthread_mutex_unlock(mutex);
}
// Address range: 0x406360 - 0x40646f
int64_t function_406360(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = a1 - 1 + a2; // 0x406360
    int64_t v2 = *(int64_t *)(a3 + 8); // 0x40636e
    int64_t v3; // 0x406360
    int64_t v4; // 0x406360
    uint64_t v5; // 0x4063a0
    if (g32 == 128) {
        // 0x4063f0
        if (v1 <= a1) {
            // 0x4063a0
            v5 = a1 + v2;
            return v1 > v5 ? v5 : v1;
        }
        // 0x4063f5
        v4 = a1;
        if (a3 != 0) {
            int64_t v6 = a3 - 1; // 0x406360
            int64_t v7 = a1; // 0x406360
            while (true) {
                unsigned char v8 = *(char *)v7; // 0x406400
                char v9 = *(char *)((int64_t)v8 + (int64_t)&g98); // 0x406403
                int64_t v10 = v7;
                int64_t v11 = v6;
                while (v9 == 0) {
                    // 0x406428
                    v3 = v10;
                    if (v1 <= v10) {
                        // break (via goto) -> 0x4063a0
                        goto lab_0x4063a0_3;
                    }
                    int64_t v12 = v10 + 1; // 0x406446
                    v3 = v1;
                    if (v1 == v12) {
                        // break (via goto) -> 0x4063a0
                        goto lab_0x4063a0_3;
                    }
                    unsigned char v13 = *(char *)v12; // 0x406438
                    char v14 = *(char *)((int64_t)v13 + (int64_t)&g98); // 0x40643b
                    int64_t v15 = v12; // 0x406444
                    while (v14 == 0) {
                        // 0x406446
                        v12 = v15 + 1;
                        v3 = v1;
                        if (v1 == v12) {
                            // break (via goto) -> 0x4063a0
                            goto lab_0x4063a0_3;
                        }
                        // 0x406438
                        v13 = *(char *)v12;
                        v14 = *(char *)((int64_t)v13 + (int64_t)&g98);
                        v15 = v12;
                    }
                    // 0x406460
                    v4 = v12;
                    v9 = v14;
                    if (v11 == 0) {
                        goto lab_0x4063c8_2;
                    }
                    v10 = v12;
                    v11--;
                }
                int64_t v16 = v10 + 1; // 0x40640e
                v6 = v11;
                v7 = v16;
                if (v1 <= v16) {
                    uint64_t v17 = v16 + v2; // 0x406417
                    return v1 > v17 ? v17 : v1;
                }
            }
        }
    } else {
        // 0x40637a
        if (v1 <= a1) {
            // 0x4063a0
            v5 = a1 + v2;
            return v1 > v5 ? v5 : v1;
        }
        // 0x40637f
        v4 = a1;
        if (a3 != 0) {
            int64_t v18 = a3 - 1;
            int64_t v19 = a1;
            int64_t v20; // 0x406397
            while (g32 != (int32_t)*(char *)v19) {
                // 0x406397
                v20 = v19 + 1;
                v3 = v20;
                if (v1 <= v20) {
                    // break (via goto) -> 0x4063a0
                    goto lab_0x4063a0_3;
                }
                v19 = v20;
            }
            // 0x4063b0
            v3 = v19;
            while (v1 > v19) {
                int64_t v21 = v19 + 1; // 0x4063b5
                v3 = v21;
                if (v1 <= v21) {
                    // break -> 0x4063a0
                    break;
                }
                // 0x4063be
                v4 = v21;
                if (v18 == 0) {
                    goto lab_0x4063c8_2;
                }
                v18--;
                v19 = v21;
                while (g32 != (int32_t)*(char *)v19) {
                    // 0x406397
                    v20 = v19 + 1;
                    v3 = v20;
                    if (v1 <= v20) {
                        // break (via goto) -> 0x4063a0
                        goto lab_0x4063a0_3;
                    }
                    v19 = v20;
                }
                // 0x4063b0
                v3 = v19;
            }
          lab_0x4063a0_3:
            // 0x4063a0
            v5 = v3 + v2;
            return v1 > v5 ? v5 : v1;
        }
    }
  lab_0x4063c8_2:
    // 0x4063c8
    if (*(char *)(a3 + 48) == 0) {
        // 0x4063a0
        v5 = v4 + v2;
        return v1 > v5 ? v5 : v1;
    }
    int64_t v22 = v4;
    unsigned char v23 = *(char *)v22; // 0x4063d9
    while (*(char *)((int64_t)v23 + (int64_t)&g98) != 0) {
        int64_t v24 = v22 + 1; // 0x4063d0
        v3 = v24;
        if (v1 <= v24) {
            // 0x4063a0
            v5 = v3 + v2;
            return v1 > v5 ? v5 : v1;
        }
        v22 = v24;
        v23 = *(char *)v22;
    }
    uint64_t v25 = v22 + v2; // 0x4063e5
    return v1 > v25 ? v25 : v1;
}
// Address range: 0x406470 - 0x4065ad
int64_t function_406470(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a3 + 24); // 0x406470
    uint64_t v2 = a1 - 1 + a2; // 0x406474
    int64_t v3 = *(int64_t *)(a3 + 16) + (int64_t)(v1 == 0); // 0x40648a
    bool v4 = v2 <= a1 | v3 == 0;
    int64_t result2; // 0x406470
    if (g32 == 128) {
        // 0x406529
        result2 = a1;
        if (!v4) {
            unsigned char v5 = *(char *)a1; // 0x406540
            char v6 = *(char *)((int64_t)v5 + (int64_t)&g98); // 0x406543
            int64_t v7 = v3 - 1;
            int64_t v8 = a1;
            int64_t v9; // 0x406470
            int64_t v10; // 0x40657f
            unsigned char v11; // 0x406570
            char v12; // 0x406573
            while (v6 == 0) {
                // 0x406560
                result2 = v8;
                if (v2 <= v8) {
                    // break (via goto) -> 0x4064c0
                    goto lab_0x4064c0_4;
                }
                v10 = v8 + 1;
                result2 = v2;
                if (v2 == v10) {
                    // break (via goto) -> 0x4064c0
                    goto lab_0x4064c0_4;
                }
                // 0x406570
                v11 = *(char *)v10;
                v12 = *(char *)((int64_t)v11 + (int64_t)&g98);
                v9 = v10;
                while (v12 == 0) {
                    // 0x40657f
                    v10 = v9 + 1;
                    result2 = v2;
                    if (v2 == v10) {
                        // break (via goto) -> 0x4064c0
                        goto lab_0x4064c0_4;
                    }
                    // 0x406570
                    v11 = *(char *)v10;
                    v12 = *(char *)((int64_t)v11 + (int64_t)&g98);
                    v9 = v10;
                }
                // 0x406590
                result2 = v10;
                v6 = v12;
                if (v7 == 0) {
                    // break (via goto) -> 0x4064c0
                    goto lab_0x4064c0_4;
                }
                v7--;
                v8 = v10;
            }
            int64_t v13 = v8 + 1; // 0x40654f
            result2 = v13;
            while (v2 > v13) {
                // 0x406540
                v5 = *(char *)v13;
                v6 = *(char *)((int64_t)v5 + (int64_t)&g98);
                v8 = v13;
                while (v6 == 0) {
                    // 0x406560
                    result2 = v8;
                    if (v2 <= v8) {
                        // break (via goto) -> 0x4064c0
                        goto lab_0x4064c0_4;
                    }
                    v10 = v8 + 1;
                    result2 = v2;
                    if (v2 == v10) {
                        // break (via goto) -> 0x4064c0
                        goto lab_0x4064c0_4;
                    }
                    // 0x406570
                    v11 = *(char *)v10;
                    v12 = *(char *)((int64_t)v11 + (int64_t)&g98);
                    v9 = v10;
                    while (v12 == 0) {
                        // 0x40657f
                        v10 = v9 + 1;
                        result2 = v2;
                        if (v2 == v10) {
                            // break (via goto) -> 0x4064c0
                            goto lab_0x4064c0_4;
                        }
                        // 0x406570
                        v11 = *(char *)v10;
                        v12 = *(char *)((int64_t)v11 + (int64_t)&g98);
                        v9 = v10;
                    }
                    // 0x406590
                    result2 = v10;
                    v6 = v12;
                    if (v7 == 0) {
                        // break (via goto) -> 0x4064c0
                        goto lab_0x4064c0_4;
                    }
                    v7--;
                    v8 = v10;
                }
                // 0x40654f
                v13 = v8 + 1;
                result2 = v13;
            }
        }
    } else {
        // 0x40649a
        result2 = a1;
        if (!v4) {
            int64_t v14 = v3 - 1;
            int64_t v15 = a1;
            int64_t v16; // 0x4064b7
            while (g32 != (int32_t)*(char *)v15) {
                // 0x4064b7
                v16 = v15 + 1;
                result2 = v16;
                if (v2 <= v16) {
                    // break (via goto) -> 0x4064c0
                    goto lab_0x4064c0_4;
                }
                v15 = v16;
            }
            // 0x406500
            result2 = v15;
            while (v2 > v15) {
                int64_t result = v15; // 0x40650b
                if ((v14 || v1) == 0) {
                    // 0x406528
                    return result;
                }
                int64_t v17 = v15 + 1; // 0x40650d
                result2 = v17;
                if (v14 != 0 != v2 > v17) {
                    // break -> 0x4064c0
                    break;
                }
                v14--;
                v15 = v17;
                while (g32 != (int32_t)*(char *)v15) {
                    // 0x4064b7
                    v16 = v15 + 1;
                    result2 = v16;
                    if (v2 <= v16) {
                        // break (via goto) -> 0x4064c0
                        goto lab_0x4064c0_4;
                    }
                    v15 = v16;
                }
                // 0x406500
                result2 = v15;
            }
        }
    }
  lab_0x4064c0_4:
    // 0x4064c0
    if (v1 == 0) {
        // 0x406528
        return result2;
    }
    int64_t v18 = result2; // 0x4064c9
    int64_t v19 = result2; // 0x4064c9
    if (v2 > result2 == (*(char *)(a3 + 49) != 0)) {
        unsigned char v20 = *(char *)v18; // 0x4064e5
        v19 = v18;
        while (*(char *)((int64_t)v20 + (int64_t)&g98) != 0) {
            int64_t v21 = v18 + 1; // 0x4064d8
            v18 = v21;
            if (v2 == v21) {
                uint64_t v22 = v1 + v2; // 0x4065a2
                return v2 < v22 ? v2 : v22;
            }
            v20 = *(char *)v18;
            v19 = v18;
        }
    }
    uint64_t v23 = v19 + v1; // 0x4064f1
    return v2 > v23 ? v23 : v2;
}
// Address range: 0x4065b0 - 0x4074c8
int64_t function_4065b0(int64_t a1, int64_t a2) {
    // 0x4065b0
    int64_t v1; // bp-8056, 0x4065b0
    int64_t v2 = &v1;
    int64_t str17; // bp-4056, 0x4065b0
    int64_t v3 = &str17;
    int128_t str16; // bp-8376, 0x4065b0
    int64_t v4 = &str16;
    int128_t v5; // bp-8220, 0x4065b0
    int64_t v6 = &v5;
    int64_t str13; // bp-8392, 0x4065b0
    int64_t v7 = &str13;
    int64_t endptr2; // bp-8408, 0x4065b0
    int64_t v8 = &endptr2;
    int64_t v9 = *(int64_t *)(a1 + 24); // 0x4065f5
    int64_t v10 = a2; // 0x4065f5
    int64_t v11 = a1; // 0x4065f5
    int64_t v12 = *(int64_t *)(a2 + 24); // 0x4065f5
    int64_t v13 = g83; // 0x4065f5
    int64_t v14 = *(int64_t *)(a1 + 16); // 0x4065f5
    int64_t v15 = *(int64_t *)(a2 + 16); // 0x4065f5
    int3_t v16; // 0x4065b0
    int3_t v17; // 0x4065b0
    int3_t v18; // 0x4065b0
    int64_t v19; // 0x4065b0
    int64_t str; // 0x4065b0
    int64_t str2; // 0x4065b0
    int64_t v20; // 0x4065b0
    int64_t v21; // 0x4065b0
    int64_t v22; // 0x4065b0
    int64_t v23; // 0x4065b0
    int64_t v24; // 0x4065b0
    int64_t v25; // 0x4065b0
    int64_t v26; // 0x4065b0
    int64_t v27; // 0x4065b0
    int64_t v28; // 0x4065b0
    int64_t v29; // 0x4065b0
    int64_t v30; // 0x4065b0
    int64_t v31; // 0x4065b0
    int64_t v32; // 0x4065b0
    int64_t v33; // 0x4065b0
    int64_t v34; // 0x4065b0
    int64_t v35; // 0x4065b0
    int64_t v36; // 0x4065b0
    int64_t v37; // 0x4065b0
    int64_t v38; // 0x4065b0
    int64_t v39; // 0x4065b0
    int32_t v40; // 0x4065b0
    int64_t v41; // 0x4065b0
    int64_t v42; // 0x4065b0
    int64_t v43; // 0x4065b0
    int64_t v44; // 0x4065b0
    int64_t v45; // 0x4065b0
    int64_t v46; // 0x4065b0
    int64_t v47; // 0x4065b0
    int64_t v48; // 0x4065b0
    int64_t v49; // 0x4065b0
    int64_t v50; // 0x4065b0
    char v51; // 0x4065b0
    char v52; // 0x4065b0
    char v53; // 0x4065b0
    char v54; // 0x4065b0
    char v55; // 0x4065b0
    char v56; // 0x4065b0
    float80_t v57; // 0x4065b0
    float80_t v58; // 0x4065b0
    float80_t v59; // 0x4065b0
    int64_t v60; // 0x4065fe
    int64_t v61; // 0x406603
    uint64_t v62; // 0x406608
    uint64_t v63; // 0x40660f
    int64_t v64; // 0x406619
    int64_t v65; // 0x40661c
    while (true) {
      lab_0x4065f8_2:
        // 0x4065f8
        str2 = v15;
        str = v14;
        v19 = v13;
        uint64_t v66 = v12;
        v28 = v27;
        v36 = v11;
        v42 = v10;
        uint64_t v67 = v9;
        v39 = v38;
        v17 = v16;
        v55 = v54;
        v52 = v51;
        v49 = v48;
        v60 = *(int64_t *)(v19 + 40);
        v61 = *(int64_t *)(v19 + 32);
        v62 = str >= v67 ? str : v67;
        v63 = str2 >= v66 ? str2 : v66;
        v64 = v62 - str;
        v65 = v63 - str2;
        if (g103 != 0) {
            goto lab_0x40663d;
        } else {
            // 0x406628
            if ((*(int64_t *)(v19 + 48) & 0xffffffffff0000) == 0) {
                // 0x406ae0
                if (*(char *)(v19 + 56) != 0) {
                    goto lab_0x40663d;
                } else {
                    if (v61 == 0) {
                        if (v64 == 0) {
                            // 0x407474
                            v50 = v49;
                            v53 = v52;
                            v56 = v55;
                            v58 = (int80_t)(v65 != 0);
                            v18 = v17;
                            v41 = v39;
                            v47 = v42;
                            v37 = v36;
                            v29 = v28;
                        } else {
                            // 0x4073c3
                            if (v65 == 0) {
                                // break -> 0x40738a
                                break;
                            }
                            int64_t v68; // 0x4065b0
                            int64_t v69; // 0x4065b0
                            int64_t v70; // 0x4065b0
                            if (v60 != 0) {
                                int64_t v71 = str2; // 0x407353
                                int64_t v72 = str; // 0x407353
                                v69 = v39;
                                v70 = v42;
                                v68 = v36;
                                if (v62 > str == v63 > str2) {
                                    unsigned char v73 = *(char *)(v60 + (int64_t)*(char *)v72); // 0x407374
                                    unsigned char v74 = *(char *)(v60 + (int64_t)*(char *)v71); // 0x40737a
                                    int32_t v75 = (int32_t)v73 - (int32_t)v74; // 0x407380
                                    v40 = v75;
                                    if (v75 != 0) {
                                        // 0x407384
                                        v57 = (int80_t)v40;
                                        goto lab_0x40738a;
                                    }
                                    int64_t v76 = v72 + 1; // 0x407362
                                    int64_t v77 = v71 + 1; // 0x407366
                                    v71 = v77;
                                    v72 = v76;
                                    v69 = 0;
                                    v70 = v42;
                                    v68 = v36;
                                    while (v77 < v63 == v76 < v62) {
                                        // 0x407362
                                        v73 = *(char *)(v60 + (int64_t)*(char *)v72);
                                        v74 = *(char *)(v60 + (int64_t)*(char *)v71);
                                        v75 = (int32_t)v73 - (int32_t)v74;
                                        v40 = v75;
                                        if (v75 != 0) {
                                            // 0x407384
                                            v57 = (int80_t)v40;
                                            goto lab_0x40738a;
                                        }
                                        // 0x407350
                                        v76 = v72 + 1;
                                        v77 = v71 + 1;
                                        v71 = v77;
                                        v72 = v76;
                                        v69 = 0;
                                        v70 = v42;
                                        v68 = v36;
                                    }
                                }
                            } else {
                                int64_t n = v64 > v65 ? v65 : v64; // 0x4073e1
                                int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x4073ef
                                v69 = n;
                                v70 = str2;
                                v68 = str;
                                if (memcmp_rc != 0) {
                                    // 0x40680d
                                    v59 = (int80_t)memcmp_rc;
                                    goto lab_0x40680d_2;
                                }
                            }
                            // 0x407409
                            v57 = -NAN;
                            if (v64 < v65) {
                                // break -> 0x40738a
                                break;
                            }
                            // 0x40740e
                            v50 = v49;
                            v53 = v52;
                            v56 = v55;
                            v58 = (int80_t)(v64 != v65);
                            v18 = v17;
                            v41 = v69;
                            v47 = v70;
                            v37 = v68;
                            v29 = v28;
                        }
                    } else {
                        // 0x406af5
                        v34 = str;
                        v43 = v42;
                        v21 = str2;
                        v31 = str;
                        v25 = str2;
                        if (v60 == 0) {
                            while (true) {
                              lab_0x406baa:
                                // 0x406baa
                                v26 = v25;
                                v32 = v31;
                                if (v32 >= v62) {
                                    goto lab_0x406bba;
                                } else {
                                    // 0x406baf
                                    v24 = v26;
                                    if (*(char *)(v61 + (int64_t)*(char *)v32) != 0) {
                                        goto lab_0x406ba6;
                                    } else {
                                        goto lab_0x406bba;
                                    }
                                }
                            }
                        } else {
                            while (true) {
                              lab_0x406b08:
                                // 0x406b08
                                v22 = v21;
                                v44 = v43;
                                v35 = v34;
                                if (v35 >= v62) {
                                    goto lab_0x406b17;
                                } else {
                                    // 0x406b0d
                                    v45 = v44;
                                    v23 = v22;
                                    if (*(char *)(v61 + (int64_t)*(char *)v35) != 0) {
                                        goto lab_0x406b71;
                                    } else {
                                        goto lab_0x406b17;
                                    }
                                }
                            }
                        }
                      lab_0x406bee_6:;
                        int64_t v78 = (int64_t)(v30 < v62) - (int64_t)(v63 > v20); // 0x406bfd
                        v50 = v49;
                        v53 = v52;
                        v56 = v55;
                        v58 = (int80_t)v78;
                        v18 = v17;
                        v41 = v78 & 0xffffffff;
                        v47 = v46;
                        v37 = v36;
                        v29 = v33;
                    }
                    goto lab_0x4066f6;
                }
            } else {
                goto lab_0x40663d;
            }
        }
    }
    goto lab_0x40738a;
  lab_0x40680d_2:;
    float80_t v80 = v59; // 0x406815
    float80_t v79 = v59; // 0x406815
    if (*(char *)(v19 + 55) != 0) {
        goto lab_0x407395;
    } else {
        goto lab_0x40681b;
    }
  lab_0x406f13:;
    // 0x406f13
    int64_t v81; // 0x4065b0
    uint64_t v82 = 3 * v81 / 2; // 0x406f29
    uint64_t v83; // 0x406deb
    int64_t size = v83 >= v82 ? v83 : v82; // 0x406f2f
    int64_t v84; // 0x4065b0
    free((int64_t *)v84);
    int64_t * mem = malloc((int32_t)size); // 0x406f3e
    int64_t v85 = (int64_t)mem; // 0x406f3e
    int64_t v86 = mem == NULL ? 4000 : size; // 0x406f53
    int64_t v87 = mem != NULL ? v85 : v3; // 0x406f57
    int64_t v88; // 0x4065b0
    int64_t v89 = v88; // 0x406f60
    float80_t v90; // 0x4065b0
    float80_t v91 = v90; // 0x406f60
    int64_t v92 = v85; // 0x406f60
    int64_t v93; // 0x4065b0
    int64_t v94 = v93; // 0x406f60
    int64_t v95 = v87; // 0x406f60
    int64_t v96 = v86; // 0x406f60
    int64_t v97 = v88; // 0x406f60
    float80_t v98 = v90; // 0x406f60
    int64_t v99 = v85; // 0x406f60
    int64_t v100 = v93; // 0x406f60
    int64_t v101 = v87; // 0x406f60
    int64_t v102 = v86; // 0x406f60
    uint64_t v103; // 0x406dc3
    if (v103 > v93) {
        goto lab_0x406f66;
    } else {
        goto lab_0x406e46;
    }
  lab_0x406e3b:;
    // 0x406e3b
    int64_t v104; // 0x4065b0
    v89 = v104;
    float80_t v105; // 0x4065b0
    v91 = v105;
    int64_t v106; // 0x4065b0
    v92 = v106;
    int64_t v107; // 0x4065b0
    v94 = v107;
    int64_t v108; // 0x4065b0
    v95 = v108;
    int64_t v109; // 0x4065b0
    v96 = v109;
    v97 = v104;
    v98 = v105;
    v99 = v106;
    v100 = v107;
    v101 = v108;
    v102 = v109;
    if (v103 > v107) {
        goto lab_0x406f66;
    } else {
        goto lab_0x406e46;
    }
  lab_0x406f66:;
    int64_t v110 = v102;
    int64_t v111 = v101;
    int64_t v112 = v100;
    int64_t v113 = v99;
    float80_t v114 = v98;
    int64_t v115 = v97;
    int64_t v116 = function_405ef0(v111, v112, v110) + 1; // 0x406f79
    int64_t v117; // 0x4065b0
    int64_t v118; // 0x4065b0
    int64_t v119; // 0x4065b0
    int64_t v120; // 0x4065b0
    int64_t v121; // 0x4065b0
    int64_t v122; // 0x4065b0
    int64_t v123; // 0x4065b0
    int64_t v124; // 0x4065b0
    int64_t v125; // 0x4065b0
    int64_t v126; // 0x4065b0
    int64_t v127; // 0x4065b0
    int64_t v128; // 0x4065b0
    int64_t v129; // 0x4065b0
    int64_t v130; // 0x4065b0
    int64_t v131; // 0x4065b0
    int64_t v132; // 0x4065b0
    int64_t v133; // 0x4065b0
    int64_t v134; // 0x4065b0
    int64_t v135; // 0x4065b0
    int64_t v136; // 0x4065b0
    int64_t v137; // 0x4065b0
    int64_t v138; // 0x4065b0
    float80_t v139; // 0x4065b0
    float80_t v140; // 0x4065b0
    float80_t v141; // 0x4065b0
    uint64_t v142; // 0x406dde
    if (v142 > v115) {
        // 0x406f88
        v137 = v115;
        v139 = v114;
        v134 = v113;
        v132 = 0;
        v129 = v116;
        v127 = v112;
        v131 = 0;
        v120 = v111;
        v123 = v110;
        if (v110 >= v116) {
            // 0x4074b8
            v137 = v115;
            v139 = v114;
            v134 = v113;
            v132 = v110 - v116;
            v129 = v116;
            v127 = v112;
            v131 = v116 + v111;
            v120 = v111;
            v123 = v110;
        }
        goto lab_0x406f95;
    } else {
        // 0x40739d
        v138 = v115;
        v140 = v114;
        v135 = v113;
        v130 = v116;
        v125 = v112;
        v118 = 0;
        v122 = v116;
        v136 = v115;
        v141 = v114;
        v133 = v113;
        v128 = v116;
        v126 = v112;
        v117 = 0;
        v119 = v111;
        v121 = v116;
        v124 = v110;
        if (v110 < v116) {
            goto lab_0x406fb0;
        } else {
            goto lab_0x4073ac;
        }
    }
  lab_0x406e46:;
    int64_t v143 = v89; // 0x406e50
    float80_t v144 = v91; // 0x406e50
    int64_t v145 = v92; // 0x406e50
    int64_t v146 = 0; // 0x406e50
    int64_t v147 = v94; // 0x406e50
    int64_t v148 = 0; // 0x406e50
    int64_t v149 = v95; // 0x406e50
    int64_t v150 = v96; // 0x406e50
    v137 = v89;
    v139 = v91;
    v134 = v92;
    v132 = v96;
    v129 = 0;
    v127 = v94;
    v131 = v95;
    v120 = v95;
    v123 = v96;
    if (v142 > v89) {
        goto lab_0x406f95;
    } else {
        goto lab_0x406e5b;
    }
  lab_0x406f95:;
    int64_t v151 = function_405ef0(v131, v137, v132) + 1; // 0x406f9f
    int64_t v152 = v151 + v129; // 0x406fa3
    v138 = v137;
    v140 = v139;
    v135 = v134;
    v130 = v129;
    v125 = v127;
    v118 = v151;
    v122 = v152;
    v136 = v137;
    v141 = v139;
    v133 = v134;
    v128 = v129;
    v126 = v127;
    v117 = v151;
    v119 = v120;
    v121 = v152;
    v124 = v123;
    if (v123 >= v129) {
        goto lab_0x4073ac;
    } else {
        goto lab_0x406fb0;
    }
  lab_0x406e5b:;
    int64_t v153 = v150;
    int64_t v154 = v149;
    int64_t v155 = v148;
    int64_t str3 = v147;
    int64_t v156 = v146;
    int64_t v157 = v145;
    float80_t v158 = v144;
    int64_t v159 = v143;
    int64_t v160 = v154 + v156; // 0x406e5b
    int64_t v161; // 0x4065b0
    int64_t v162; // 0x4065b0
    int64_t v163; // 0x4065b0
    int64_t v164; // 0x4065b0
    int64_t v165; // 0x4065b0
    int64_t v166; // 0x4065b0
    int64_t v167; // 0x4065b0
    int64_t v168; // 0x4065b0
    int64_t v169; // 0x4065b0
    int64_t v170; // 0x4065b0
    int64_t v171; // 0x4065b0
    int64_t v172; // 0x4065b0
    int64_t v173; // 0x4065b0
    int64_t v174; // 0x4065b0
    int64_t v175; // 0x4065b0
    int64_t v176; // 0x4065b0
    int64_t v177; // 0x4065b0
    int64_t v178; // 0x4065b0
    int64_t v179; // 0x4065b0
    int64_t v180; // 0x4065b0
    int64_t v181; // 0x4065b0
    int64_t v182; // 0x4065b0
    float80_t v183; // 0x4065b0
    float80_t v184; // 0x4065b0
    float80_t v185; // 0x4065b0
    if (v103 > str3) {
        int64_t v186 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406e7d
        v181 = v159;
        v185 = v158;
        v178 = v157;
        v174 = v160;
        v171 = v156;
        v169 = v186;
        v161 = v155;
        v163 = v154;
        v166 = v153;
        v180 = v159;
        v184 = v158;
        v177 = v157;
        v176 = v160;
        v170 = v156;
        v168 = v186;
        v162 = v155;
        v165 = v154;
        v167 = v153;
        if (v142 > v159) {
            goto lab_0x4070fa;
        } else {
            goto lab_0x406e90;
        }
    } else {
        // 0x407120
        v182 = v155;
        v183 = v158;
        v179 = v157;
        v175 = v160;
        v173 = v159;
        v172 = v156;
        v164 = v154;
        v180 = v159;
        v184 = v158;
        v177 = v157;
        v176 = v160;
        v170 = v156;
        v168 = str3;
        v162 = v155;
        v165 = v154;
        v167 = v153;
        if (v142 <= v159) {
            // break -> 0x40703a
            goto lab_0x40703a_3;
        }
        goto lab_0x4070fa;
    }
  lab_0x406fb0:;
    uint64_t v187 = v122;
    int64_t n3 = v118;
    uint64_t str5 = v125;
    int64_t n2 = v130;
    float80_t v188 = v140;
    int64_t str7 = v138;
    int64_t v189 = v187 < 0x5555555555555555 ? 3 * v187 / 2 : v187;
    free((int64_t *)v135);
    int64_t str4 = function_411210(v189); // 0x406fd3
    if (v103 > str5) {
        // 0x407190
        strxfrm((char *)str4, (char *)str5, (int32_t)n2);
    }
    int64_t str6 = str4 + n2; // 0x406fe6
    if (v142 > str7) {
        // 0x4070d0
        strxfrm((char *)str6, (char *)str7, (int32_t)n3);
        int64_t v190 = str5; // 0x4070e3
        if (v103 > str5) {
            // 0x4070e5
            v190 = str5 + 1 + (int64_t)strlen((char *)str5);
        }
        // 0x4070f2
        v180 = str7;
        v184 = v188;
        v177 = str4;
        v176 = str6;
        v170 = n2;
        v168 = v190;
        v162 = n3;
        v165 = str4;
        v167 = v189;
        goto lab_0x4070fa;
    } else {
        // 0x407000
        v182 = n3;
        v183 = v188;
        v179 = str4;
        v175 = str6;
        v173 = str7;
        v172 = n2;
        v164 = str4;
        if (v103 <= str5) {
            // break -> 0x40703a
            goto lab_0x40703a_3;
        }
        // 0x407160
        v181 = str7;
        v185 = v188;
        v178 = str4;
        v174 = str6;
        v171 = n2;
        v169 = str5 + 1 + (int64_t)strlen((char *)str5);
        v161 = n3;
        v163 = str4;
        v166 = v189;
        goto lab_0x406e90;
    }
  lab_0x4073ac:
    // 0x4073ac
    v143 = v136;
    v144 = v141;
    v145 = v133;
    v146 = v128;
    v147 = v126;
    v148 = v117;
    v149 = v119;
    v150 = v124;
    v138 = v136;
    v140 = v141;
    v135 = v133;
    v130 = v128;
    v125 = v126;
    v118 = v117;
    v122 = v121;
    if (v124 < v121) {
        goto lab_0x406fb0;
    } else {
        goto lab_0x406e5b;
    }
  lab_0x4070fa:;
    int64_t str8 = v180;
    v181 = str8 + 1 + (int64_t)strlen((char *)str8);
    v185 = v184;
    v178 = v177;
    v174 = v176;
    v171 = v170;
    v169 = v168;
    v161 = v162;
    v163 = v165;
    v166 = v167;
    goto lab_0x406e90;
  lab_0x406e90:;
    int64_t str9 = v163;
    uint64_t v191 = v161;
    int64_t v192 = v169;
    uint64_t v193 = v171;
    int64_t str10 = v174;
    int64_t v194 = v178;
    float80_t v195 = v185;
    int64_t v196 = v181;
    v182 = v191;
    v183 = v195;
    v179 = v194;
    v175 = str10;
    v173 = v196;
    v172 = v193;
    v164 = str9;
    if (v142 <= v196 && v103 <= v192) {
        // break -> 0x40703a
        goto lab_0x40703a_3;
    }
    int64_t v197 = v166;
    function_40b360((char)str9, v193, (int64_t *)&str16);
    function_40b360((char)str10, v191, (int64_t *)&v5);
    float80_t v198 = v195; // 0x406ed4
    if ((int32_t)(int64_t)(float64_t)v195 != 0) {
        goto lab_0x406e30;
    } else {
        int64_t n4 = v193 > v191 ? v191 : v193; // 0x406ee6
        int32_t memcmp_rc2 = memcmp((int64_t *)str9, (int64_t *)str10, (int32_t)n4); // 0x406eea
        v198 = (int80_t)memcmp_rc2;
        if (memcmp_rc2 != 0) {
            goto lab_0x406e30;
        } else {
            // 0x406efa
            v104 = v196;
            v105 = (int80_t)((int64_t)(v193 > v191) - (int64_t)(v193 < v191));
            v106 = v194;
            v107 = v192;
            v108 = str9;
            v109 = v197;
            v88 = v196;
            v90 = (int80_t)((int64_t)(v193 > v191) - (int64_t)(v193 < v191));
            v84 = v194;
            v93 = v192;
            v81 = v197;
            if (v83 > v197) {
                goto lab_0x406f13;
            } else {
                goto lab_0x406e3b;
            }
        }
    }
  lab_0x406e30:;
    int64_t v199 = v196; // 0x4065b0
    float80_t v200 = v198; // 0x4065b0
    int64_t v201 = v194; // 0x4065b0
    int64_t v202 = v192; // 0x4065b0
    int64_t v203 = str9; // 0x4065b0
    int64_t v204 = v197; // 0x4065b0
    goto lab_0x406e30_2;
  lab_0x40694c:;
    // 0x40694c
    int64_t v205; // 0x4065b0
    int64_t v206 = v205;
    int64_t v207; // 0x4065b0
    int64_t v208 = v207 + 1; // 0x40694c
    int64_t v209 = v206; // 0x406953
    v207 = v208;
    if (v63 == v208) {
        // break -> 0x406970
        goto lab_0x406970;
    }
    goto lab_0x406955;
  lab_0x406944:;
    // 0x406944
    int64_t v210; // 0x4065b0
    char v213; // 0x4065b0
    int64_t v215; // 0x4065b0
    *(char *)(v210 + v215) = v213;
    v205 = v210 + 1;
    goto lab_0x40694c;
  lab_0x4068f4:;
    // 0x4068f4
    int64_t v216; // 0x4065b0
    int64_t v217 = v216 + 1; // 0x4068f4
    int64_t v218 = v217; // 0x4068fb
    int64_t v219; // 0x4065b0
    int64_t v220 = v219; // 0x4068fb
    int64_t v221; // 0x4068d1
    if (v221 == v217) {
        // break -> 0x406918
        goto lab_0x406918;
    }
    goto lab_0x4068fd;
  lab_0x4068ec:;
    // 0x4068ec
    int64_t v222; // 0x4065b0
    char v226; // 0x4065b0
    int64_t v228; // 0x4065b0
    *(char *)(v222 + v228) = v226;
    v219 = v222 + 1;
    goto lab_0x4068f4;
  lab_0x406bba:;
    int64_t v229 = v26; // 0x406bbd
    v46 = v42;
    v33 = v32;
    v20 = v26;
    v30 = v32;
    if (v26 >= v63) {
        // break -> 0x406bee
        goto lab_0x406bee_6;
    }
    int64_t v230 = v229;
    unsigned char v231 = *(char *)v230; // 0x406bd5
    while (*(char *)(v61 + (int64_t)v231) != 0) {
        int64_t v232 = v230 + 1; // 0x406bc8
        v229 = v232;
        v46 = v42;
        v33 = v32;
        v20 = v63;
        v30 = v32;
        if (v63 == v232) {
            // break (via goto) -> 0x406bee
            goto lab_0x406bee_6;
        }
        v230 = v229;
        v231 = *(char *)v230;
    }
    // 0x406be0
    v46 = v42;
    v33 = v32;
    v20 = v230;
    v30 = v32;
    if (v32 < v62 != v63 > v230) {
        // break -> 0x406bee
        goto lab_0x406bee_6;
    }
    int32_t v233 = (int32_t)*(char *)v32 - (int32_t)v231; // 0x406b9a
    v40 = v233;
    if (v233 != 0) {
        // 0x407384
        v57 = (int80_t)v40;
        goto lab_0x40738a;
    }
    // 0x406ba2
    v24 = v230 + 1;
    goto lab_0x406ba6;
  lab_0x406ba6:
    // 0x406ba6
    v31 = v32 + 1;
    v25 = v24;
    goto lab_0x406baa;
  lab_0x406b17:
    // 0x406b17
    if (v22 >= v63) {
        // break -> 0x406bee
        goto lab_0x406bee_6;
    }
    int64_t v234 = v22;
    int64_t v235 = (int64_t)*(char *)v234; // 0x406b35
    while (*(char *)(v61 + v235) != 0) {
        int64_t v236 = v234 + 1; // 0x406b28
        int64_t v237 = v236; // 0x406b2f
        v46 = v44;
        v33 = str;
        v20 = v63;
        v30 = v35;
        if (v63 == v236) {
            // break (via goto) -> 0x406bee
            goto lab_0x406bee_6;
        }
        v234 = v237;
        v235 = (int64_t)*(char *)v234;
    }
    // 0x406b40
    v46 = v44;
    v33 = str;
    v20 = v234;
    v30 = v35;
    if (v35 < v62 != v63 > v234) {
        // break -> 0x406bee
        goto lab_0x406bee_6;
    }
    unsigned char v238 = *(char *)(v60 + (int64_t)*(char *)v35); // 0x406b59
    unsigned char v239 = *(char *)(v60 + v235); // 0x406b5f
    int32_t v240 = (int32_t)v238 - (int32_t)v239; // 0x406b65
    v40 = v240;
    if (v240 != 0) {
        // 0x407384
        v57 = (int80_t)v40;
        goto lab_0x40738a;
    }
    // 0x406b6d
    v45 = v239;
    v23 = v234 + 1;
    goto lab_0x406b71;
  lab_0x406b71:
    // 0x406b71
    v34 = v35 + 1;
    v43 = v45;
    v21 = v23;
    goto lab_0x406b08;
  lab_0x40663d:;
    int64_t v241; // 0x4065b0
    int64_t v242; // 0x4065b0
    int64_t v243; // 0x4065b0
    int64_t v244; // 0x4065b0
    int64_t v245; // 0x4065b0
    int64_t v246; // 0x4065b0
    int64_t v247; // 0x4065b0
    int64_t v248; // 0x4065b0
    int64_t v249; // 0x4065b0
    int64_t v250; // 0x4065b0
    int64_t v251; // 0x4065b0
    int64_t v252; // 0x4065b0
    int64_t v253; // 0x4065b0
    int64_t v254; // 0x4065b0
    int64_t v255; // 0x4065b0
    int64_t v256; // 0x4065b0
    char v257; // 0x4065b0
    char v258; // 0x4065b0
    int64_t v259; // 0x4068a0
    if ((v61 || v60) != 0) {
        // 0x4068a0
        v259 = v64 + 2 + v65;
        if (v259 < 4001) {
            // 0x4068b2
            v249 = v2;
            v243 = v64;
            v256 = 0;
            v250 = v2;
            v253 = v64 + (v2 | 1);
            v244 = 0;
            if (v64 == 0) {
                goto lab_0x406c75;
            } else {
                goto lab_0x4068d1;
            }
        } else {
            int64_t v260 = function_411210(v259); // 0x406c51
            int64_t v261 = (int64_t)(float64_t)(float80_t)(int80_t)v64 + 1 + v260; // 0x406c67
            v249 = v260;
            v243 = (float64_t)(float80_t)(int80_t)v64;
            v256 = v260;
            v250 = v260;
            v253 = v261;
            v244 = (float64_t)(float80_t)(int80_t)v64;
            if ((int64_t)(float64_t)(float80_t)(int80_t)v64 != 0) {
                goto lab_0x4068d1;
            } else {
                goto lab_0x406c75;
            }
        }
    } else {
        char * v262 = (char *)v62; // 0x40664e
        *v262 = 0;
        char * v263 = (char *)v63; // 0x406658
        unsigned char v264 = *v263; // 0x406658
        *v263 = 0;
        v255 = v49;
        v257 = v264;
        v258 = *v262;
        v248 = v264;
        v252 = v39;
        v254 = v42;
        v251 = v36;
        v247 = v28;
        v241 = v65;
        v242 = v64;
        v245 = str;
        v246 = str2;
        goto lab_0x406662;
    }
  lab_0x406662:;
    int64_t v265 = v246;
    int64_t v266 = v245;
    int64_t v267 = v242;
    int64_t v268 = v241;
    int64_t v269 = v247;
    char v270 = v258;
    char v271 = v257;
    int64_t v272 = v255;
    int3_t v273; // 0x4065b0
    int64_t v274; // 0x4065b0
    int64_t v275; // 0x4065b0
    int64_t v276; // 0x4065b0
    int64_t v277; // 0x4065b0
    int64_t str14; // 0x4065b0
    int64_t v278; // 0x4065b0
    int64_t v279; // 0x4065b0
    int64_t v280; // 0x4065b0
    int64_t v281; // 0x4065b0
    int64_t v282; // 0x4065b0
    int64_t v283; // 0x4065b0
    int64_t v284; // 0x4065b0
    int64_t v285; // 0x4065b0
    int64_t v286; // 0x4065b0
    int64_t v287; // 0x4065b0
    int64_t v288; // 0x4065b0
    int64_t v289; // 0x4065b0
    int64_t v290; // 0x4065b0
    int64_t v291; // 0x4065b0
    int64_t v292; // 0x4065b0
    float80_t v293; // 0x4065b0
    float80_t v294; // 0x4065b0
    char * str11; // 0x40699d
    char * str12; // 0x4069b0
    int3_t v295; // 0x4069da
    if (*(char *)(v19 + 50) != 0) {
        unsigned char v296 = *(char *)v266; // 0x406830
        int64_t v297 = v266; // 0x40683e
        int64_t v298 = v266; // 0x40683e
        if (*(char *)((int64_t)v296 + (int64_t)&g98) != 0) {
            int64_t v299 = v297 + 1; // 0x406840
            unsigned char v300 = *(char *)v299; // 0x406844
            v297 = v299;
            v298 = v299;
            while (*(char *)((int64_t)v300 + (int64_t)&g98) != 0) {
                // 0x406840
                v299 = v297 + 1;
                v300 = *(char *)v299;
                v297 = v299;
                v298 = v299;
            }
        }
        unsigned char v301 = *(char *)v265; // 0x406850
        int64_t v302 = v265; // 0x40685e
        int64_t v303 = v265; // 0x40685e
        if (*(char *)((int64_t)v301 + (int64_t)&g98) != 0) {
            int64_t v304 = v302 + 1; // 0x406860
            unsigned char v305 = *(char *)v304; // 0x406864
            v302 = v304;
            v303 = v304;
            while (*(char *)((int64_t)v305 + (int64_t)&g98) != 0) {
                // 0x406860
                v304 = v302 + 1;
                v305 = *(char *)v304;
                v302 = v304;
                v303 = v304;
            }
        }
        // 0x406870
        v293 = (int80_t)(0x100000000 * function_4106a0(v298, v303, g105, g104) >> 32);
        v273 = v17;
        v283 = g105;
        v287 = v303;
        v280 = v298;
        v277 = v268;
        goto lab_0x4066d8;
    } else {
        // 0x40666e
        v282 = v252;
        if (*(char *)(v19 + 52) != 0) {
            // 0x406988
            str11 = (char *)v266;
            int64_t endptr; // bp-8416, 0x4065b0
            strtold(str11, (char **)&endptr);
            float80_t v306 = __frontend_reg_load_fpr(v17); // 0x4069ad
            str12 = (char *)v265;
            strtold(str12, (char **)&endptr2);
            __frontend_reg_store_fpr(v17, v306);
            if (v266 == endptr) {
                // 0x4071c0
                __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v17));
                int3_t v307 = v17 + 1; // 0x4071c0
                __frontend_reg_store_fpr(v307, __frontend_reg_load_fpr(v307));
                v293 = (int80_t)(endptr2 != v265);
                v273 = v17 + 2;
                v283 = v282;
                v287 = v8;
                v280 = v265;
                v277 = v268;
                goto lab_0x4066d8;
            } else {
                // 0x4069d0
                if (v265 == endptr2) {
                    // 0x406a28
                    __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v17));
                    int3_t v308 = v17 + 1; // 0x406a28
                    __frontend_reg_store_fpr(v308, __frontend_reg_load_fpr(v308));
                    v293 = 3.64519953188247460253e-4951L;
                    v273 = v17 + 2;
                    v283 = v282;
                    v287 = v8;
                    v280 = v265;
                    v277 = v268;
                    goto lab_0x4066d8;
                } else {
                    // 0x4069da
                    v295 = v17 + 1;
                    float80_t v309 = __frontend_reg_load_fpr(v17); // 0x4069da
                    __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v295));
                    __frontend_reg_store_fpr(v295, v309);
                    float80_t v310 = __frontend_reg_load_fpr(v17); // 0x4069dc
                    float80_t v311 = __frontend_reg_load_fpr(v295); // 0x4069dc
                    float80_t v312 = __frontend_reg_load_fpr(v17);
                    if (v310 <= v311) {
                        // 0x4069e4
                        __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v295));
                        __frontend_reg_store_fpr(v295, v312);
                        float80_t v313 = __frontend_reg_load_fpr(v17); // 0x4069e6
                        float80_t v314 = __frontend_reg_load_fpr(v295); // 0x4069e6
                        float80_t v315 = __frontend_reg_load_fpr(v17);
                        if (v313 <= v314) {
                            float80_t v316 = __frontend_reg_load_fpr(v295); // 0x4069f5
                            float80_t v317 = __frontend_reg_load_fpr(v17);
                            if (v315 != v316 == v315 == v316) {
                                // 0x406a03
                                __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v295));
                                __frontend_reg_store_fpr(v295, v317);
                                goto lab_0x406a08;
                            } else {
                                if (v315 != v316) {
                                    // 0x4069ff
                                    __frontend_reg_store_fpr(v17, __frontend_reg_load_fpr(v295));
                                    __frontend_reg_store_fpr(v295, v317);
                                    goto lab_0x406a08;
                                } else {
                                    // 0x4071e0
                                    __frontend_reg_store_fpr(v17, v317);
                                    __frontend_reg_store_fpr(v295, __frontend_reg_load_fpr(v295));
                                    v293 = 0.0L;
                                    v273 = v17 + 2;
                                    v283 = v282;
                                    v287 = v8;
                                    v280 = v265;
                                    v277 = v268;
                                    goto lab_0x4066d8;
                                }
                            }
                        } else {
                            // 0x4066d0
                            __frontend_reg_store_fpr(v17, v315);
                            __frontend_reg_store_fpr(v295, __frontend_reg_load_fpr(v295));
                            v293 = 3.64519953188247460253e-4951L;
                            v273 = v17 + 2;
                            v283 = v282;
                            v287 = v8;
                            v280 = v265;
                            v277 = v268;
                            goto lab_0x4066d8;
                        }
                    } else {
                        // 0x407495
                        __frontend_reg_store_fpr(v17, v312);
                        __frontend_reg_store_fpr(v295, __frontend_reg_load_fpr(v295));
                        goto lab_0x40749d;
                    }
                }
            }
        } else {
            int64_t v318 = v254;
            if (*(char *)(v19 + 53) != 0) {
                unsigned char v319 = *(char *)v266; // 0x406a40
                int64_t v320 = v266; // 0x406a4e
                int64_t v321 = v266; // 0x406a4e
                if (*(char *)((int64_t)v319 + (int64_t)&g98) != 0) {
                    int64_t v322 = v320 + 1; // 0x406a50
                    unsigned char v323 = *(char *)v322; // 0x406a54
                    v320 = v322;
                    v321 = v322;
                    while (*(char *)((int64_t)v323 + (int64_t)&g98) != 0) {
                        // 0x406a50
                        v322 = v320 + 1;
                        v323 = *(char *)v322;
                        v320 = v322;
                        v321 = v322;
                    }
                }
                int64_t v324 = v321;
                unsigned char v325 = *(char *)v265; // 0x406a60
                int64_t v326 = v265; // 0x406a6e
                int64_t v327 = v265; // 0x406a6e
                if (*(char *)((int64_t)v325 + (int64_t)&g98) != 0) {
                    int64_t v328 = v326 + 1; // 0x406a70
                    unsigned char v329 = *(char *)v328; // 0x406a74
                    v326 = v328;
                    v327 = v328;
                    while (*(char *)((int64_t)v329 + (int64_t)&g98) != 0) {
                        // 0x406a70
                        v328 = v326 + 1;
                        v329 = *(char *)v328;
                        v326 = v328;
                        v327 = v328;
                    }
                }
                int64_t v330 = v327;
                int64_t v331 = function_4059f0(v324, v318, v282); // 0x406a8e
                int32_t v332 = (int32_t)v331 - (int32_t)function_4059f0(v330, v318, v282); // 0x406aa8
                v293 = (int80_t)v332;
                v273 = v17;
                v283 = v282;
                v287 = v318;
                v280 = v330;
                v277 = v268;
                if (v332 == 0) {
                    // 0x406ab5
                    v293 = (int80_t)(0x100000000 * function_4106a0(v324, v330, g105, g104) >> 32);
                    v273 = v17;
                    v283 = g105;
                    v287 = v330;
                    v280 = v324;
                    v277 = v268;
                }
                goto lab_0x4066d8;
            } else {
                // 0x406686
                if (*(char *)(v19 + 54) != 0) {
                    int64_t v333 = function_405a40(v266, 0); // 0x406c1f
                    v293 = (int80_t)(0x100000000 * (v333 - function_405a40(v265, 0)) >> 32);
                    v273 = v17;
                    v283 = v282;
                    v287 = 0;
                    v280 = v265;
                    v277 = v268;
                    goto lab_0x4066d8;
                } else {
                    // 0x406692
                    if (*(char *)(v19 + 51) != 0) {
                        int128_t v334 = __asm_movdqa(*(int128_t *)&g60); // 0x406cb0
                        int128_t v335 = __asm_movdqa(g61); // 0x406cb9
                        int128_t v336 = __asm_movdqa(g62); // 0x406cc1
                        int128_t v337 = __asm_movdqa(g63); // 0x406cc9
                        int128_t v338 = __asm_movdqa(g64); // 0x406cd1
                        int128_t v339 = __asm_movdqa(g65); // 0x406cd9
                        __asm_movups(0, v334);
                        int128_t v340 = __asm_movdqa(g66); // 0x406cea
                        int128_t v341 = __asm_movdqa(g67); // 0x406cf2
                        int128_t v342; // 0x4065b0
                        __asm_movups(v342, v335);
                        int128_t v343 = __asm_movdqa(g68); // 0x406d02
                        __asm_movups(v342, v336);
                        __asm_movups(v342, v337);
                        __asm_movups(v342, v338);
                        __asm_movups(v342, v339);
                        __asm_movups(v342, v340);
                        __asm_movups(v342, v341);
                        __asm_movups(v342, v343);
                        str16 = __asm_movaps(v334);
                        __asm_movaps(v335);
                        __asm_movaps(v336);
                        __asm_movaps(v337);
                        __asm_movaps(v338);
                        __asm_movaps(v339);
                        __asm_movaps(v340);
                        __asm_movaps(v341);
                        __asm_movaps(v343);
                        if (g103 == 0) {
                            // 0x407230
                            function_40b360((char)v266, v267, (int64_t *)&str16);
                            function_40b250(&str16, &endptr2, v4, v248, v269);
                            function_40b360((char)v265, (int64_t)(float64_t)(float80_t)(int80_t)v268, (int64_t *)&v5);
                            function_40b250(&v5, &str13, v6, v248, v269);
                            int32_t memcmp_rc3 = memcmp(&endptr2, &str13, 16); // 0x4072a0
                            v292 = (float64_t)(float80_t)(int80_t)v268;
                            v289 = 0;
                            v288 = v265;
                            v279 = v267;
                            v274 = (float64_t)(float80_t)(int80_t)v268;
                            str14 = v266;
                            if (memcmp_rc3 != 0) {
                                // 0x40733b
                                v294 = (int80_t)memcmp_rc3;
                                v291 = 0;
                                v281 = 16;
                                v286 = v7;
                                v276 = (float64_t)(float80_t)(int80_t)v268;
                                goto lab_0x407318;
                            } else {
                                goto lab_0x4072d3;
                            }
                        } else {
                            // 0x406dc3
                            v103 = v266 + v267;
                            v142 = v265 + v268;
                            int64_t v344 = v267 + v268; // 0x406de7
                            v83 = v344 + 2 + 2 * v344;
                            v199 = v265;
                            v200 = 0.0L;
                            v201 = 0;
                            v202 = v266;
                            v203 = v3;
                            v204 = 4000;
                            while (true) {
                              lab_0x406e30_2:
                                // 0x406e30
                                v104 = v199;
                                v105 = v200;
                                v106 = v201;
                                v107 = v202;
                                v108 = v203;
                                v109 = v204;
                                v88 = v199;
                                v90 = v200;
                                v84 = v201;
                                v93 = v202;
                                v81 = v204;
                                if (v83 > v204) {
                                    goto lab_0x406f13;
                                } else {
                                    goto lab_0x406e3b;
                                }
                            }
                          lab_0x40703a_3:;
                            int64_t v345 = v164;
                            int64_t v346 = v172;
                            int64_t v347 = v175;
                            int64_t v348 = v179;
                            int64_t v349 = v182;
                            function_40b360((char)v345, v346, (int64_t *)&str16);
                            function_40b250(&str16, &endptr2, v4, v173, v269);
                            function_40b360((char)v347, v349, (int64_t *)&v5);
                            function_40b250(&v5, &str13, v6, v173, v269);
                            int32_t memcmp_rc4 = memcmp(&endptr2, &str13, 16); // 0x4070a5
                            v290 = v348;
                            v278 = memcmp_rc4;
                            v284 = 16;
                            v285 = v7;
                            v275 = v268;
                            if (memcmp_rc4 != 0) {
                                goto lab_0x407315;
                            } else {
                                // 0x4070bc
                                v292 = v349;
                                v289 = v348;
                                v288 = v347;
                                v279 = v346;
                                v274 = v268;
                                str14 = v345;
                                v294 = v183;
                                v291 = v348;
                                v281 = (int64_t)(float64_t)v183 & 0xffffffff;
                                v286 = v7;
                                v276 = v268;
                                if ((int32_t)(int64_t)(float64_t)v183 != 0) {
                                    goto lab_0x407318;
                                } else {
                                    goto lab_0x4072d3;
                                }
                            }
                        }
                    } else {
                        // 0x40669e
                        if (*(char *)(v19 + 56) == 0) {
                            int64_t v350 = v251;
                            if (v267 != 0) {
                                // 0x4071f0
                                v293 = 3.64519953188247460253e-4951L;
                                v273 = v17;
                                v283 = v282;
                                v287 = v318;
                                v280 = v350;
                                v277 = 0;
                                if (v268 != 0) {
                                    int64_t v351 = v267 + 1; // 0x407204
                                    v293 = (int80_t)(0x100000000 * function_4115c0(v266, v351, v265, v268 + 1) >> 32);
                                    v273 = v17;
                                    v283 = v265;
                                    v287 = v351;
                                    v280 = v266;
                                    v277 = v268;
                                }
                            } else {
                                // 0x406c99
                                v293 = (int80_t)(v268 != 0);
                                v273 = v17;
                                v283 = v282;
                                v287 = v318;
                                v280 = v350;
                                v277 = v268;
                            }
                        } else {
                            // 0x4066aa
                            v293 = (int80_t)(0x100000000 * function_40b900(v266, v265) >> 32);
                            v273 = v17;
                            v283 = v282;
                            v287 = v265;
                            v280 = v266;
                            v277 = v268;
                        }
                        goto lab_0x4066d8;
                    }
                }
            }
        }
    }
  lab_0x406c75:
    // 0x406c75
    *(char *)v250 = 0;
    int64_t v352 = v256; // 0x406c7e
    int64_t v353 = v250; // 0x406c7e
    int64_t v354 = v253; // 0x406c7e
    int64_t v355 = v28; // 0x406c7e
    int64_t v356 = v244; // 0x406c7e
    int64_t v357 = v256; // 0x406c7e
    int64_t v358 = v250; // 0x406c7e
    int64_t v359 = v39; // 0x406c7e
    int64_t v360 = v253; // 0x406c7e
    int64_t v361 = v259; // 0x406c7e
    int64_t v362 = v28; // 0x406c7e
    int64_t v363 = v65; // 0x406c7e
    int64_t v364 = v244; // 0x406c7e
    int64_t v365 = v253; // 0x406c7e
    if (v65 != 0) {
        goto lab_0x406928;
    } else {
        goto lab_0x406974;
    }
  lab_0x4068d1:
    // 0x4068d1
    v228 = v249;
    v221 = v243 + str;
    v218 = str;
    v220 = 0;
    int64_t v224; // 0x4068fd
    while (true) {
      lab_0x4068fd:
        // 0x4068fd
        v222 = v220;
        v216 = v218;
        if (v61 != 0) {
            char v223 = *(char *)(v61 + v224); // 0x4068e0
            v219 = v222;
            if (v223 != 0) {
                goto lab_0x4068f4;
            } else {
                // 0x4068e7
                unsigned char v225; // 0x4068fd
                v226 = v225;
                if (v60 != 0) {
                    char v227 = *(char *)(v60 + v224); // 0x406909
                    v226 = v227;
                    goto lab_0x4068ec;
                } else {
                    goto lab_0x4068ec;
                }
            }
        } else {
            // 0x406909
            v226 = *(char *)(v60 + (int64_t)*(char *)v216);
            goto lab_0x4068ec;
        }
    }
  lab_0x406918:;
    // 0x406918
    int64_t v366; // 0x4065b0
    *(char *)(v366 + v228) = 0;
    int64_t v367; // 0x4065b0
    v352 = v367;
    v353 = v228;
    int64_t v368; // 0x4065b0
    v354 = v368;
    v355 = v221;
    v356 = v366;
    v357 = v367;
    v358 = v228;
    v359 = v224;
    v360 = v368;
    v361 = v221;
    v362 = v221;
    v363 = 0;
    v364 = v366;
    v365 = v368;
    if (v65 == 0) {
        goto lab_0x406974;
    } else {
        goto lab_0x406928;
    }
  lab_0x4066f6:;
    int64_t v369 = v50; // 0x4066fb
    char v370 = v53; // 0x4066fb
    char v371 = v56; // 0x4066fb
    float80_t v372 = v58; // 0x4066fb
    int3_t v373 = v18; // 0x4066fb
    int64_t v374 = v41; // 0x4066fb
    int64_t v375 = v47; // 0x4066fb
    int64_t v376 = v37; // 0x4066fb
    int64_t v377 = v29; // 0x4066fb
    v59 = v58;
    if ((int32_t)(int64_t)(float64_t)v58 != 0) {
        goto lab_0x40680d_2;
    }
    goto lab_0x406701;
  lab_0x406928:
    // 0x406928
    v215 = v354;
    v209 = 0;
    v207 = str2;
    int64_t v212; // 0x406955
    while (true) {
      lab_0x406955:
        // 0x406955
        v210 = v209;
        unsigned char v211 = *(char *)v207; // 0x406955
        v212 = v211;
        if (v61 != 0) {
            // 0x406938
            v205 = v210;
            if (*(char *)(v61 + v212) != 0) {
                goto lab_0x40694c;
            } else {
                // 0x40693f
                v213 = v211;
                if (v60 != 0) {
                    char v214 = *(char *)(v60 + v212); // 0x406961
                    v213 = v214;
                    goto lab_0x406944;
                } else {
                    goto lab_0x406944;
                }
            }
        } else {
            // 0x406961
            v213 = *(char *)(v60 + v212);
            goto lab_0x406944;
        }
    }
  lab_0x406970:
    // 0x406970
    v357 = v352;
    v358 = v353;
    v359 = v212;
    v360 = v215;
    v361 = v63;
    v362 = v355;
    v363 = v206;
    v364 = v356;
    v365 = v206 + v215;
    goto lab_0x406974;
  lab_0x406974:
    // 0x406974
    *(char *)v365 = 0;
    v255 = v357;
    v257 = v52;
    v258 = v55;
    v248 = v358;
    v252 = v359;
    v254 = v360;
    v251 = v361;
    v247 = v362;
    v241 = v363;
    v242 = v364;
    v245 = v358;
    v246 = v360;
    goto lab_0x406662;
  lab_0x4066d8:;
    int64_t v396 = v287;
    int64_t v397 = v283;
    int3_t v398 = v273;
    float80_t v399 = v293;
    if ((v61 || v60) != 0) {
        // 0x4067f8
        free((int64_t *)v272);
        v369 = v272;
        v370 = v271;
        v371 = v270;
        v372 = v399;
        v373 = v398;
        v374 = v397;
        v375 = v396;
        v376 = v272;
        v377 = v269;
        v59 = v399;
        if ((int32_t)(int64_t)(float64_t)v399 != 0) {
            goto lab_0x40680d_2;
        }
        goto lab_0x406701;
    } else {
        // 0x4066e4
        *(char *)(v266 + v267) = v270;
        *(char *)(v277 + v265) = v271;
        v50 = v272;
        v53 = v271;
        v56 = v270;
        v58 = v399;
        v18 = v398;
        v41 = v397;
        v47 = v396;
        v37 = v280;
        v29 = v269;
        goto lab_0x4066f6;
    }
  lab_0x406701:
    // 0x406701
    v13 = *(int64_t *)(v19 + 64);
    v80 = v372;
    if (v13 == 0) {
      lab_0x40681b:
        // 0x40681b
        return (int64_t)(float64_t)v80 & 0xffffffff;
    }
    int64_t v378 = v376;
    int64_t v379 = v375;
    int64_t v380 = *(int64_t *)(a1 + 8); // 0x40671d
    int64_t v381 = *(int64_t *)(a2 + 8); // 0x406729
    int64_t v382; // 0x4065b0
    int64_t v383; // 0x4065b0
    int64_t v384; // 0x4065b0
    int64_t v385; // 0x4065b0
    int64_t v386; // 0x4065b0
    int64_t v387; // 0x4065b0
    int64_t v388; // 0x4065b0
    if (*(int64_t *)(v13 + 16) == -1) {
        int64_t v389 = v378 - 1 + v380; // 0x406785
        int64_t v390 = v379 - 1 + v381; // 0x40678a
        v384 = v389;
        v382 = v390;
        v387 = v374;
        v385 = v389;
        v388 = v379;
        v386 = v378;
        v383 = v390;
        if (*(int64_t *)v13 != -1) {
            goto lab_0x406758;
        } else {
            goto lab_0x406791;
        }
    } else {
        int64_t v391 = function_406470(v378, v380, v13); // 0x406738
        int64_t v392 = function_406470(v379, v381, v13); // 0x406749
        v384 = v391;
        v382 = v392;
        v387 = v13;
        v385 = v391;
        v388 = v381;
        v386 = v379;
        v383 = v392;
        if (*(int64_t *)v13 == -1) {
            goto lab_0x406791;
        } else {
            goto lab_0x406758;
        }
    }
  lab_0x406758:;
    int64_t v393 = function_406360(v378, v380, v13); // 0x406761
    int64_t v394 = function_406360(v379, v381, v13); // 0x406772
    int64_t v395 = v13; // 0x40677a
    v9 = v384;
    v10 = v381;
    v11 = v379;
    v12 = v382;
    v14 = v393;
    v15 = v394;
    goto lab_0x4065f8;
  lab_0x406791:;
    int64_t v408 = v383;
    int64_t v409 = v386;
    int64_t v410 = v388;
    int64_t v411 = v385;
    int64_t v412 = v387;
    v395 = v412;
    v9 = v411;
    v10 = v410;
    v11 = v409;
    v12 = v408;
    v14 = v378;
    v15 = v379;
    if (*(char *)(v13 + 48) != 0) {
        int64_t v413 = v378; // 0x4067a0
        int64_t v414 = v378; // 0x4067a0
        if (v411 > v378) {
            int64_t v415 = v413;
            unsigned char v416 = *(char *)v415; // 0x4067b5
            v414 = v415;
            while (*(char *)((int64_t)v416 + (int64_t)&g98) != 0) {
                int64_t v417 = v415 + 1; // 0x4067a8
                v413 = v417;
                v414 = v411;
                if (v411 == v417) {
                    // break -> 0x4067c2
                    break;
                }
                v415 = v413;
                v416 = *(char *)v415;
                v414 = v415;
            }
        }
        int64_t v418 = v414;
        v395 = v412;
        v9 = v411;
        v10 = v410;
        v11 = v409;
        v12 = v408;
        v14 = v418;
        v15 = v379;
        int64_t v419 = v379; // 0x4067c5
        if (v408 > v379) {
            int64_t v420 = v419;
            unsigned char v421 = *(char *)v420; // 0x4067d0
            v395 = v412;
            v9 = v411;
            v10 = v410;
            v11 = v409;
            v12 = v408;
            v14 = v418;
            v15 = v420;
            while (*(char *)((int64_t)v421 + (int64_t)&g98) != 0) {
                int64_t v422 = v420 + 1; // 0x4067e1
                v395 = v412;
                v9 = v411;
                v10 = v410;
                v11 = v409;
                v12 = v408;
                v14 = v418;
                v15 = v408;
                v419 = v422;
                if (v408 == v422) {
                    // break -> 0x4065f8
                    break;
                }
                v420 = v419;
                v421 = *(char *)v420;
                v395 = v412;
                v9 = v411;
                v10 = v410;
                v11 = v409;
                v12 = v408;
                v14 = v418;
                v15 = v420;
            }
        }
    }
    goto lab_0x4065f8;
  lab_0x4065f8:
    // 0x4065f8
    v48 = v369;
    v51 = v370;
    v54 = v371;
    v16 = v373;
    v38 = v395;
    v27 = v377;
    goto lab_0x4065f8_2;
  lab_0x40749d:
    // 0x40749d
    v293 = -NAN;
    v273 = v17 + 2;
    v283 = v282;
    v287 = v8;
    v280 = v265;
    v277 = v268;
    goto lab_0x4066d8;
  lab_0x4072d3:;
    int64_t v400 = v274;
    uint64_t v401 = v279;
    int64_t str15 = v288;
    int64_t v402 = v289;
    uint64_t v403 = v292;
    int64_t n5 = v401 > v403 ? v403 : v401; // 0x4072f0
    int32_t memcmp_rc5 = memcmp((int64_t *)str14, (int64_t *)str15, (int32_t)n5); // 0x4072f4
    v294 = (int80_t)memcmp_rc5;
    v291 = v402;
    v281 = n5;
    v286 = str15;
    v276 = v400;
    if (memcmp_rc5 != 0) {
        goto lab_0x407318;
    } else {
        // 0x40730a
        v290 = v402;
        v278 = (int64_t)(v401 > v403) - (int64_t)(v401 < v403) & 0xffffffff;
        v284 = n5;
        v285 = str15;
        v275 = v400;
        goto lab_0x407315;
    }
  lab_0x407315:
    // 0x407315
    v294 = (int80_t)(0x100000000 * v278 >> 32);
    v291 = v290;
    v281 = v284;
    v286 = v285;
    v276 = v275;
    goto lab_0x407318;
  lab_0x406a08:;
    float80_t v404 = __frontend_reg_load_fpr(v17); // 0x406a08
    float80_t v405 = __frontend_reg_load_fpr(v17); // 0x406a08
    float80_t v406 = __frontend_reg_load_fpr(v295);
    if (v404 != v405) {
        int3_t v407 = v17 + 2; // 0x406a12
        v293 = 3.64519953188247460253e-4951L;
        v273 = v407;
        v283 = v282;
        v287 = v8;
        v280 = v265;
        v277 = v268;
        if (v406 != __frontend_reg_load_fpr(v295)) {
            // 0x40741c
            strtold(str11, NULL);
            str16 = (float32_t)__frontend_reg_load_fpr(v407);
            strtold(str12, NULL);
            str17 = (float64_t)__frontend_reg_load_fpr(v17 + 3);
            int32_t memcmp_rc6 = memcmp((int64_t *)&str16, &str17, 16); // 0x40745d
            v293 = (int80_t)memcmp_rc6;
            v273 = v17 ^ -4;
            v283 = 16;
            v287 = v3;
            v280 = v4;
            v277 = v268;
        }
        goto lab_0x4066d8;
    } else {
        // 0x40749b
        __frontend_reg_store_fpr(v295, v406);
        goto lab_0x40749d;
    }
  lab_0x407318:
    // 0x407318
    free((int64_t *)v291);
    v293 = v294;
    v273 = v17;
    v283 = v281;
    v287 = v286;
    v280 = v291;
    v277 = v276;
    goto lab_0x4066d8;
  lab_0x40738a:
    // 0x40738a
    v79 = v57;
    if (*(char *)(v19 + 55) == 0) {
        // 0x40681b
        return (int64_t)(float64_t)v57 & 0xffffffff;
    }
  lab_0x407395:
    // 0x407395
    v80 = (int80_t)(-((0x100000000 * (int64_t)(float64_t)v79)) >> 32);
    // 0x40681b
    return (int64_t)(float64_t)v80 & 0xffffffff;
}
// Address range: 0x4074d0 - 0x407847
int64_t function_4074d0(char a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2;
    int64_t v2 = a1;
    char * v3 = (char *)(v2 + 48); // 0x4074d0
    if (*v3 != 0) {
        // 0x4077df
        return 0;
    }
    int64_t * v4 = (int64_t *)(v2 + 8); // 0x4074e8
    int64_t v5 = *v4; // 0x4074e8
    char v6 = *(char *)&g38; // 0x407502
    int64_t * v7 = (int64_t *)(v2 + 32); // 0x40750e
    int64_t v8 = *v7; // 0x40750e
    int64_t v9 = *(int64_t *)(v2 + 40); // 0x40751c
    int64_t * v10; // 0x4074d0
    int64_t * v11; // 0x4074d0
    int64_t v12; // 0x4074d0
    int64_t v13; // 0x4074d0
    if (v5 != v8) {
        int64_t * v14 = (int64_t *)v2;
        memmove(v14, (int64_t *)(v5 + v2 - v8), (int32_t)v8);
        int64_t v15 = *v7; // 0x4076f0
        int64_t * v16 = (int64_t *)(v2 + 16);
        *v16 = 0;
        *v4 = v15;
        v11 = v14;
        v10 = v16;
        v12 = v15;
        v13 = 0;
    } else {
        int64_t * v17 = (int64_t *)(v2 + 16);
        v11 = (int64_t *)v2;
        v10 = v17;
        v12 = v5;
        v13 = *v17;
    }
    int32_t v18 = v6; // 0x407517
    uint64_t v19 = v9 + 1; // 0x407539
    int64_t * v20 = (int64_t *)(v2 + 24); // 0x407547
    int64_t v21 = g33 - 34; // 0x407550
    int64_t v22 = *v20; // 0x407550
    int64_t v23 = v2 + v22; // 0x407554
    int64_t v24 = v23 - 32 * v13; // 0x407565
    int64_t v25 = v2; // 0x407579
    if (v13 != 0) {
        // 0x40757f
        v25 = *(int64_t *)v24 + *(int64_t *)(v24 + 8);
    }
    int64_t v26 = v2 + v12; // 0x40755a
    int64_t v27 = v23 - v13 * v9 - v26; // 0x407573
    int64_t v28 = v26; // 0x407595
    int64_t v29 = v24; // 0x407595
    int64_t v30 = v25; // 0x407595
    int64_t v31 = v27; // 0x407595
    int64_t v32 = v21; // 0x407595
    int64_t v33 = v22; // 0x407595
    int64_t v34 = v21; // 0x407595
    int64_t v35 = v2; // 0x407595
    int64_t v36 = v25; // 0x407595
    int64_t v37 = v24; // 0x407595
    int64_t v38 = v26; // 0x407595
    int64_t v39; // 0x4074d0
    int64_t v40; // 0x4074d0
    int64_t v41; // 0x4074d0
    int64_t v42; // 0x4074d0
    int64_t v43; // 0x4074d0
    int64_t v44; // 0x4074d0
    int64_t v45; // 0x4074d0
    int64_t v46; // 0x4074d0
    int64_t v47; // 0x4074d0
    int64_t v48; // 0x4074d0
    int64_t v49; // 0x4074d0
    int64_t v50; // 0x4074d0
    int64_t v51; // 0x4074d0
    int64_t v52; // 0x4074d0
    int64_t v53; // 0x4074d0
    int64_t v54; // 0x4074d0
    uint64_t v55; // 0x4074d0
    int64_t v56; // 0x4074d0
    int64_t v57; // 0x4074d0
    int64_t v58; // 0x4074d0
    uint64_t v59; // 0x4074d0
    int64_t v60; // 0x4075bc
    int64_t v61; // 0x4075c6
    int64_t v62; // 0x4075ca
    int64_t v63; // 0x407662
    int32_t v64; // 0x4075e0
    int64_t v65; // 0x407670
    int64_t v66; // 0x407674
    uint64_t v67; // 0x407681
    int64_t v68; // 0x407830
    int64_t v69; // 0x40768b
    int64_t v70; // 0x40768f
    int64_t v71; // 0x407662
    unsigned char v72; // 0x4076cc
    if (v27 > v19) {
        v43 = v30;
        v52 = v28;
        v59 = (v31 - 1) / v19;
        v60 = fread_unlocked((int64_t *)v52, 1, (int32_t)v59, (struct _IO_FILE *)a2);
        v61 = v52 + v60;
        v58 = v61;
        if (v59 != v60) {
            // 0x4075db
            v64 = *(int32_t *)&v1;
            if ((v64 & 32) != 0) {
                // 0x407824
                v68 = (int64_t)dcgettext(NULL, "read failed", 5);
                function_405dd0(v68, (int64_t *)a3);
                v57 = v68;
                goto lab_0x407842;
            }
            // 0x4075ea
            v58 = v61;
            if ((v64 & 16) != 0) {
                // 0x4075f2
                *v3 = 1;
                if (v61 == v2) {
                    // 0x4077df
                    return 0;
                }
                // 0x40760c
                v58 = v43;
                if (v43 != v61) {
                    // 0x407615
                    v58 = v61;
                    if (*(char *)(v61 - 1) != v6) {
                        // 0x407624
                        *(char *)v61 = v6;
                        v58 = v61 + 1;
                    }
                }
            }
        }
        // 0x407655
        v62 = v31 - v60;
        v38 = v58;
        v63 = function_413030(v52, v18, v38 - v52);
        v39 = v63;
        v49 = v29;
        v44 = v43;
        v41 = v62;
        v54 = v32;
        v56 = v32;
        v35 = v52;
        v42 = v62;
        v46 = v43;
        v51 = v29;
        if (v63 != 0) {
            v55 = v54;
            v45 = v44;
            v50 = v49;
            v40 = v39;
            v65 = v40 + 1;
            v66 = v50 - 32;
            *(char *)v40 = 0;
            *(int64_t *)v66 = v45;
            v67 = v65 - v45;
            *(int64_t *)(v50 - 24) = v67;
            if (g83 != 0) {
                // 0x407698
                v53 = v40;
                if (*(int64_t *)(g83 + 16) != -1) {
                    // 0x40769f
                    v53 = function_406470(v45, v67, g83);
                }
                // 0x4076ad
                *(int64_t *)(v50 - 8) = v53;
                if (*(int64_t *)g83 != -1) {
                    // 0x407640
                    *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                } else {
                    // 0x4076b7
                    v47 = v45;
                    v48 = v45;
                    if (*(char *)(g83 + 48) != 0) {
                        v72 = *(char *)v48;
                        v47 = v48;
                        v48++;
                        while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                            // 0x4076cc
                            v72 = *(char *)v48;
                            v47 = v48;
                            v48++;
                        }
                    }
                    // 0x4076bd
                    *(int64_t *)(v50 - 16) = v47;
                }
            }
            // 0x407652
            v69 = v55 < v67 ? v67 : v55;
            v70 = v41 - v9;
            v71 = function_413030(v65, v18, v38 - v65);
            v41 = v70;
            v56 = v69;
            v35 = v65;
            v42 = v70;
            v46 = v65;
            v51 = v66;
            while (v71 != 0) {
                // 0x407670
                v55 = v69;
                v45 = v65;
                v50 = v66;
                v40 = v71;
                v65 = v40 + 1;
                v66 = v50 - 32;
                *(char *)v40 = 0;
                *(int64_t *)v66 = v45;
                v67 = v65 - v45;
                *(int64_t *)(v50 - 24) = v67;
                if (g83 != 0) {
                    // 0x407698
                    v53 = v40;
                    if (*(int64_t *)(g83 + 16) != -1) {
                        // 0x40769f
                        v53 = function_406470(v45, v67, g83);
                    }
                    // 0x4076ad
                    *(int64_t *)(v50 - 8) = v53;
                    if (*(int64_t *)g83 != -1) {
                        // 0x407640
                        *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                    } else {
                        // 0x4076b7
                        v47 = v45;
                        v48 = v45;
                        if (*(char *)(g83 + 48) != 0) {
                            v72 = *(char *)v48;
                            v47 = v48;
                            v48++;
                            while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                // 0x4076cc
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                            }
                        }
                        // 0x4076bd
                        *(int64_t *)(v50 - 16) = v47;
                    }
                }
                // 0x407652
                v69 = v55 < v67 ? v67 : v55;
                v70 = v41 - v9;
                v71 = function_413030(v65, v18, v38 - v65);
                v41 = v70;
                v56 = v69;
                v35 = v65;
                v42 = v70;
                v46 = v65;
                v51 = v66;
            }
        }
        // 0x407710
        v37 = v51;
        v36 = v46;
        v34 = v56;
        v29 = v37;
        v31 = v42;
        v32 = v34;
        while (v42 > v19 == *v3 == 0) {
            // 0x40759b
            v43 = v36;
            v52 = v38;
            v59 = (v31 - 1) / v19;
            v60 = fread_unlocked((int64_t *)v52, 1, (int32_t)v59, (struct _IO_FILE *)a2);
            v61 = v52 + v60;
            v58 = v61;
            if (v59 != v60) {
                // 0x4075db
                v64 = *(int32_t *)&v1;
                if ((v64 & 32) != 0) {
                    // 0x407824
                    v68 = (int64_t)dcgettext(NULL, "read failed", 5);
                    function_405dd0(v68, (int64_t *)a3);
                    v57 = v68;
                    goto lab_0x407842;
                }
                // 0x4075ea
                v58 = v61;
                if ((v64 & 16) != 0) {
                    // 0x4075f2
                    *v3 = 1;
                    if (v61 == v2) {
                        // 0x4077df
                        return 0;
                    }
                    // 0x40760c
                    v58 = v43;
                    if (v43 != v61) {
                        // 0x407615
                        v58 = v61;
                        if (*(char *)(v61 - 1) != v6) {
                            // 0x407624
                            *(char *)v61 = v6;
                            v58 = v61 + 1;
                        }
                    }
                }
            }
            // 0x407655
            v62 = v31 - v60;
            v38 = v58;
            v63 = function_413030(v52, v18, v38 - v52);
            v39 = v63;
            v49 = v29;
            v44 = v43;
            v41 = v62;
            v54 = v32;
            v56 = v32;
            v35 = v52;
            v42 = v62;
            v46 = v43;
            v51 = v29;
            if (v63 != 0) {
                v55 = v54;
                v45 = v44;
                v50 = v49;
                v40 = v39;
                v65 = v40 + 1;
                v66 = v50 - 32;
                *(char *)v40 = 0;
                *(int64_t *)v66 = v45;
                v67 = v65 - v45;
                *(int64_t *)(v50 - 24) = v67;
                if (g83 != 0) {
                    // 0x407698
                    v53 = v40;
                    if (*(int64_t *)(g83 + 16) != -1) {
                        // 0x40769f
                        v53 = function_406470(v45, v67, g83);
                    }
                    // 0x4076ad
                    *(int64_t *)(v50 - 8) = v53;
                    if (*(int64_t *)g83 != -1) {
                        // 0x407640
                        *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                    } else {
                        // 0x4076b7
                        v47 = v45;
                        v48 = v45;
                        if (*(char *)(g83 + 48) != 0) {
                            v72 = *(char *)v48;
                            v47 = v48;
                            v48++;
                            while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                // 0x4076cc
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                            }
                        }
                        // 0x4076bd
                        *(int64_t *)(v50 - 16) = v47;
                    }
                }
                // 0x407652
                v69 = v55 < v67 ? v67 : v55;
                v70 = v41 - v9;
                v71 = function_413030(v65, v18, v38 - v65);
                v41 = v70;
                v56 = v69;
                v35 = v65;
                v42 = v70;
                v46 = v65;
                v51 = v66;
                while (v71 != 0) {
                    // 0x407670
                    v55 = v69;
                    v45 = v65;
                    v50 = v66;
                    v40 = v71;
                    v65 = v40 + 1;
                    v66 = v50 - 32;
                    *(char *)v40 = 0;
                    *(int64_t *)v66 = v45;
                    v67 = v65 - v45;
                    *(int64_t *)(v50 - 24) = v67;
                    if (g83 != 0) {
                        // 0x407698
                        v53 = v40;
                        if (*(int64_t *)(g83 + 16) != -1) {
                            // 0x40769f
                            v53 = function_406470(v45, v67, g83);
                        }
                        // 0x4076ad
                        *(int64_t *)(v50 - 8) = v53;
                        if (*(int64_t *)g83 != -1) {
                            // 0x407640
                            *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                        } else {
                            // 0x4076b7
                            v47 = v45;
                            v48 = v45;
                            if (*(char *)(g83 + 48) != 0) {
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                                while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                    // 0x4076cc
                                    v72 = *(char *)v48;
                                    v47 = v48;
                                    v48++;
                                }
                            }
                            // 0x4076bd
                            *(int64_t *)(v50 - 16) = v47;
                        }
                    }
                    // 0x407652
                    v69 = v55 < v67 ? v67 : v55;
                    v70 = v41 - v9;
                    v71 = function_413030(v65, v18, v38 - v65);
                    v41 = v70;
                    v56 = v69;
                    v35 = v65;
                    v42 = v70;
                    v46 = v65;
                    v51 = v66;
                }
            }
            // 0x407710
            v37 = v51;
            v36 = v46;
            v34 = v56;
            v29 = v37;
            v31 = v42;
            v32 = v34;
        }
        // 0x407724
        v33 = *v20;
    }
    int64_t v73 = v38;
    int64_t v74 = v36;
    int64_t v75 = v35;
    v21 = v34;
    uint64_t v76 = v33; // 0x40773b
    *v4 = v73 - v75;
    int64_t v77 = (v75 - v37 + v76) / 32; // 0x40774d
    *v10 = v77;
    while (v77 == 0) {
        int64_t v78; // 0x4074d0
        if (v75 == 0) {
            // 0x4077ce
            v78 = 128;
            if (v76 >= 32) {
                int64_t v79 = v76 & -32; // 0x4077d4
                v78 = v79;
                v57 = 0;
                if (v79 < 0) {
                    // 0x407842
                    function_411460(v57);
                    // UNREACHABLE
                }
            }
        } else {
            // 0x407767
            v57 = v75;
            if (v76 >= 0x5555555555555540) {
                // 0x407842
                function_411460(v57);
                // UNREACHABLE
            }
            // 0x40777a
            v78 = 32 * (v76 / 32 + 1 + v76 / 64);
        }
        int64_t v80 = function_411270(v75, v78); // 0x40778a
        *v11 = v80;
        *v20 = v78;
        int64_t v81 = *v10; // 0x4077a2
        v23 = v80 + v78;
        v24 = v23 - 32 * v81;
        v25 = v80;
        if (v81 != 0) {
            // 0x40757f
            v25 = *(int64_t *)v24 + *(int64_t *)(v24 + 8);
        }
        // 0x407590
        v26 = v80 + *v4;
        v27 = v23 - v81 * v9 - v26;
        v28 = v26;
        v29 = v24;
        v30 = v25;
        v31 = v27;
        v32 = v21;
        v33 = v78;
        int64_t v82 = v21; // 0x407595
        int64_t v83 = v75; // 0x407595
        int64_t v84 = v25; // 0x407595
        int64_t v85 = v24; // 0x407595
        int64_t v86 = v26; // 0x407595
        if (v27 > v19) {
            v43 = v30;
            v52 = v28;
            v59 = (v31 - 1) / v19;
            v60 = fread_unlocked((int64_t *)v52, 1, (int32_t)v59, (struct _IO_FILE *)a2);
            v61 = v52 + v60;
            v58 = v61;
            if (v59 != v60) {
                // 0x4075db
                v64 = *(int32_t *)&v1;
                if ((v64 & 32) != 0) {
                    // 0x407824
                    v68 = (int64_t)dcgettext(NULL, "read failed", 5);
                    function_405dd0(v68, (int64_t *)a3);
                    v57 = v68;
                    goto lab_0x407842;
                }
                // 0x4075ea
                v58 = v61;
                if ((v64 & 16) != 0) {
                    // 0x4075f2
                    *v3 = 1;
                    if (v61 == v2) {
                        // 0x4077df
                        return 0;
                    }
                    // 0x40760c
                    v58 = v43;
                    if (v43 != v61) {
                        // 0x407615
                        v58 = v61;
                        if (*(char *)(v61 - 1) != v6) {
                            // 0x407624
                            *(char *)v61 = v6;
                            v58 = v61 + 1;
                        }
                    }
                }
            }
            // 0x407655
            v62 = v31 - v60;
            v38 = v58;
            v63 = function_413030(v52, v18, v38 - v52);
            v39 = v63;
            v49 = v29;
            v44 = v43;
            v41 = v62;
            v54 = v32;
            v56 = v32;
            v35 = v52;
            v42 = v62;
            v46 = v43;
            v51 = v29;
            if (v63 != 0) {
                v55 = v54;
                v45 = v44;
                v50 = v49;
                v40 = v39;
                v65 = v40 + 1;
                v66 = v50 - 32;
                *(char *)v40 = 0;
                *(int64_t *)v66 = v45;
                v67 = v65 - v45;
                *(int64_t *)(v50 - 24) = v67;
                if (g83 != 0) {
                    // 0x407698
                    v53 = v40;
                    if (*(int64_t *)(g83 + 16) != -1) {
                        // 0x40769f
                        v53 = function_406470(v45, v67, g83);
                    }
                    // 0x4076ad
                    *(int64_t *)(v50 - 8) = v53;
                    if (*(int64_t *)g83 != -1) {
                        // 0x407640
                        *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                    } else {
                        // 0x4076b7
                        v47 = v45;
                        v48 = v45;
                        if (*(char *)(g83 + 48) != 0) {
                            v72 = *(char *)v48;
                            v47 = v48;
                            v48++;
                            while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                // 0x4076cc
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                            }
                        }
                        // 0x4076bd
                        *(int64_t *)(v50 - 16) = v47;
                    }
                }
                // 0x407652
                v69 = v55 < v67 ? v67 : v55;
                v70 = v41 - v9;
                v71 = function_413030(v65, v18, v38 - v65);
                v41 = v70;
                v56 = v69;
                v35 = v65;
                v42 = v70;
                v46 = v65;
                v51 = v66;
                while (v71 != 0) {
                    // 0x407670
                    v55 = v69;
                    v45 = v65;
                    v50 = v66;
                    v40 = v71;
                    v65 = v40 + 1;
                    v66 = v50 - 32;
                    *(char *)v40 = 0;
                    *(int64_t *)v66 = v45;
                    v67 = v65 - v45;
                    *(int64_t *)(v50 - 24) = v67;
                    if (g83 != 0) {
                        // 0x407698
                        v53 = v40;
                        if (*(int64_t *)(g83 + 16) != -1) {
                            // 0x40769f
                            v53 = function_406470(v45, v67, g83);
                        }
                        // 0x4076ad
                        *(int64_t *)(v50 - 8) = v53;
                        if (*(int64_t *)g83 != -1) {
                            // 0x407640
                            *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                        } else {
                            // 0x4076b7
                            v47 = v45;
                            v48 = v45;
                            if (*(char *)(g83 + 48) != 0) {
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                                while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                    // 0x4076cc
                                    v72 = *(char *)v48;
                                    v47 = v48;
                                    v48++;
                                }
                            }
                            // 0x4076bd
                            *(int64_t *)(v50 - 16) = v47;
                        }
                    }
                    // 0x407652
                    v69 = v55 < v67 ? v67 : v55;
                    v70 = v41 - v9;
                    v71 = function_413030(v65, v18, v38 - v65);
                    v41 = v70;
                    v56 = v69;
                    v35 = v65;
                    v42 = v70;
                    v46 = v65;
                    v51 = v66;
                }
            }
            // 0x407710
            v37 = v51;
            v36 = v46;
            v34 = v56;
            v29 = v37;
            v31 = v42;
            v32 = v34;
            while (v42 > v19 == *v3 == 0) {
                // 0x40759b
                v43 = v36;
                v52 = v38;
                v59 = (v31 - 1) / v19;
                v60 = fread_unlocked((int64_t *)v52, 1, (int32_t)v59, (struct _IO_FILE *)a2);
                v61 = v52 + v60;
                v58 = v61;
                if (v59 != v60) {
                    // 0x4075db
                    v64 = *(int32_t *)&v1;
                    if ((v64 & 32) != 0) {
                        // 0x407824
                        v68 = (int64_t)dcgettext(NULL, "read failed", 5);
                        function_405dd0(v68, (int64_t *)a3);
                        v57 = v68;
                        goto lab_0x407842;
                    }
                    // 0x4075ea
                    v58 = v61;
                    if ((v64 & 16) != 0) {
                        // 0x4075f2
                        *v3 = 1;
                        if (v61 == v2) {
                            // 0x4077df
                            return 0;
                        }
                        // 0x40760c
                        v58 = v43;
                        if (v43 != v61) {
                            // 0x407615
                            v58 = v61;
                            if (*(char *)(v61 - 1) != v6) {
                                // 0x407624
                                *(char *)v61 = v6;
                                v58 = v61 + 1;
                            }
                        }
                    }
                }
                // 0x407655
                v62 = v31 - v60;
                v38 = v58;
                v63 = function_413030(v52, v18, v38 - v52);
                v39 = v63;
                v49 = v29;
                v44 = v43;
                v41 = v62;
                v54 = v32;
                v56 = v32;
                v35 = v52;
                v42 = v62;
                v46 = v43;
                v51 = v29;
                if (v63 != 0) {
                    v55 = v54;
                    v45 = v44;
                    v50 = v49;
                    v40 = v39;
                    v65 = v40 + 1;
                    v66 = v50 - 32;
                    *(char *)v40 = 0;
                    *(int64_t *)v66 = v45;
                    v67 = v65 - v45;
                    *(int64_t *)(v50 - 24) = v67;
                    if (g83 != 0) {
                        // 0x407698
                        v53 = v40;
                        if (*(int64_t *)(g83 + 16) != -1) {
                            // 0x40769f
                            v53 = function_406470(v45, v67, g83);
                        }
                        // 0x4076ad
                        *(int64_t *)(v50 - 8) = v53;
                        if (*(int64_t *)g83 != -1) {
                            // 0x407640
                            *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                        } else {
                            // 0x4076b7
                            v47 = v45;
                            v48 = v45;
                            if (*(char *)(g83 + 48) != 0) {
                                v72 = *(char *)v48;
                                v47 = v48;
                                v48++;
                                while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                    // 0x4076cc
                                    v72 = *(char *)v48;
                                    v47 = v48;
                                    v48++;
                                }
                            }
                            // 0x4076bd
                            *(int64_t *)(v50 - 16) = v47;
                        }
                    }
                    // 0x407652
                    v69 = v55 < v67 ? v67 : v55;
                    v70 = v41 - v9;
                    v71 = function_413030(v65, v18, v38 - v65);
                    v41 = v70;
                    v56 = v69;
                    v35 = v65;
                    v42 = v70;
                    v46 = v65;
                    v51 = v66;
                    while (v71 != 0) {
                        // 0x407670
                        v55 = v69;
                        v45 = v65;
                        v50 = v66;
                        v40 = v71;
                        v65 = v40 + 1;
                        v66 = v50 - 32;
                        *(char *)v40 = 0;
                        *(int64_t *)v66 = v45;
                        v67 = v65 - v45;
                        *(int64_t *)(v50 - 24) = v67;
                        if (g83 != 0) {
                            // 0x407698
                            v53 = v40;
                            if (*(int64_t *)(g83 + 16) != -1) {
                                // 0x40769f
                                v53 = function_406470(v45, v67, g83);
                            }
                            // 0x4076ad
                            *(int64_t *)(v50 - 8) = v53;
                            if (*(int64_t *)g83 != -1) {
                                // 0x407640
                                *(int64_t *)(v50 - 16) = function_406360(v45, v67, g83);
                            } else {
                                // 0x4076b7
                                v47 = v45;
                                v48 = v45;
                                if (*(char *)(g83 + 48) != 0) {
                                    v72 = *(char *)v48;
                                    v47 = v48;
                                    v48++;
                                    while (*(char *)((int64_t)v72 + (int64_t)&g98) != 0) {
                                        // 0x4076cc
                                        v72 = *(char *)v48;
                                        v47 = v48;
                                        v48++;
                                    }
                                }
                                // 0x4076bd
                                *(int64_t *)(v50 - 16) = v47;
                            }
                        }
                        // 0x407652
                        v69 = v55 < v67 ? v67 : v55;
                        v70 = v41 - v9;
                        v71 = function_413030(v65, v18, v38 - v65);
                        v41 = v70;
                        v56 = v69;
                        v35 = v65;
                        v42 = v70;
                        v46 = v65;
                        v51 = v66;
                    }
                }
                // 0x407710
                v37 = v51;
                v36 = v46;
                v34 = v56;
                v29 = v37;
                v31 = v42;
                v32 = v34;
            }
            // 0x407724
            v33 = *v20;
            v82 = v34;
            v83 = v35;
            v84 = v36;
            v85 = v37;
            v86 = v38;
        }
        // 0x407724
        v73 = v86;
        v74 = v84;
        v75 = v83;
        v21 = v82;
        v76 = v33;
        *v4 = v73 - v75;
        v77 = (v75 - v85 + v76) / 32;
        *v10 = v77;
    }
    // 0x4077fb
    g33 = v21 + 34;
    *v7 = v73 - v74;
    return 1;
}
// Address range: 0x407850 - 0x40787d
int64_t function_407850(int64_t a1, int64_t a2) {
    uint32_t v1 = *(int32_t *)(a2 + 80); // 0x407850
    uint32_t v2 = *(int32_t *)(a1 + 80); // 0x407853
    if (v2 != v1) {
        // 0x407858
        return v2 < v1;
    }
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x407864
    int64_t v4 = *(int64_t *)(a2 + 48); // 0x40786b
    int64_t v5 = *(int64_t *)(a2 + 40); // 0x40786f
    return v3 + *(int64_t *)(a1 + 48) < v5 + v4;
}
// Address range: 0x407880 - 0x407890
int64_t function_407880(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x407880
    return pthread_sigmask(SIG_SETMASK, (struct _TYPEDEF___sigset_t *)((int64_t)a1 + 8), NULL);
}
// Address range: 0x407890 - 0x40791e
int64_t function_407890(int64_t a1) {
    // 0x407890
    if (g72 == 0) {
        // 0x4078f4
        return function_40a9f0();
    }
    // 0x4078a4
    int64_t set; // bp-144, 0x407890
    int32_t v1 = pthread_sigmask(SIG_BLOCK, (struct _TYPEDEF___sigset_t *)&g73, (struct _TYPEDEF___sigset_t *)&set); // 0x4078b0
    char v2 = v1 == 0; // 0x4078be
    char v3 = v2; // bp-152, 0x4078c1
    int64_t v4 = g72; // 0x4078c7
    v3 = v2;
    if (g72 != 0) {
        unlink((char *)(v4 + 13));
        v4 = *(int64_t *)v4;
        while (v4 != 0) {
            // 0x4078d0
            unlink((char *)(v4 + 13));
            v4 = *(int64_t *)v4;
        }
    }
    // 0x4078e5
    g72 = 0;
    if (v3 == 0) {
        // 0x4078f4
        return function_40a9f0();
    }
    // 0x407908
    function_407880((int64_t *)&v3, (int64_t)&g73, (int64_t)&set);
    return function_40a9f0();
}
// Address range: 0x407920 - 0x407a2d
int64_t function_407920(int64_t path) {
    int64_t v1 = g72; // 0x407948
    int64_t v2 = &g72; // 0x407948
    if (g72 + 13 != path) {
        int64_t v3 = *(int64_t *)g72; // 0x40794a
        v1 = v3;
        v2 = g72;
        if (v3 + 13 != path) {
            int64_t v4 = *(int64_t *)v3; // 0x407959
            v1 = v4;
            v2 = v3;
            while (v4 + 13 != path) {
                int64_t v5 = v4;
                v4 = *(int64_t *)v5;
                v1 = v4;
                v2 = v5;
            }
        }
    }
    int64_t * v6 = (int64_t *)v1; // 0x407981
    int64_t v7 = *v6; // 0x407981
    int64_t set; // bp-192, 0x407920
    int32_t v8 = pthread_sigmask(SIG_BLOCK, (struct _TYPEDEF___sigset_t *)&g73, (struct _TYPEDEF___sigset_t *)&set); // 0x407984
    char v9 = v8 == 0; // bp-200, 0x40798e
    int32_t v10 = unlink((char *)path); // 0x407992
    int32_t err_num = *__errno_location(); // 0x4079a3
    *(int64_t *)v2 = v7;
    if (v8 == 0) {
        // 0x4079d0
        function_407880((int64_t *)&v9, (int64_t)&g73, (int64_t)&set);
        if (v10 == 0) {
            goto lab_0x4079b1;
        } else {
            goto lab_0x4079dd;
        }
    } else {
        if (v10 != 0) {
            goto lab_0x4079dd;
        } else {
            goto lab_0x4079b1;
        }
    }
  lab_0x4079b1:
    if (v7 != 0) {
        // 0x4079b6
        free(v6);
        return &g122;
    }
    // 0x407a17
    *(int64_t *)&g29 = v2;
    // 0x4079b6
    free(v6);
    return &g122;
  lab_0x4079dd:
    // 0x4079dd
    function_40f700(0, 3, path);
    error(0, err_num, dcgettext(NULL, "warning: cannot remove: %s", 5));
    if (v7 != 0) {
        // 0x4079b6
        free(v6);
        return &g122;
    }
    // 0x407a17
    *(int64_t *)&g29 = v2;
    // 0x4079b6
    free(v6);
    return &g122;
}
// Address range: 0x407a30 - 0x407bf4
int64_t function_407a30(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2; // 0x407a30
    if ((int32_t)function_40da00(v1, 0x80000, v2) < 0) {
        // 0x407b65
        return -1;
    }
    // 0x407a5b
    if (g69 > (int32_t)&g31) {
        // 0x407bc0
        function_405fb0(0xffffffff, 0x80000, v2);
        int32_t v3 = g69; // 0x407bca
        while (v3 >= 1) {
            // 0x407bd8
            if ((int32_t)function_405fb0(0, 0x80000, (int64_t)v3) == 0) {
                // break -> 0x407a70
                break;
            }
            v3 = g69;
        }
    }
    int32_t * v4 = __errno_location(); // 0x407a70
    int64_t v5 = __asm_movsd(__asm_movsd_3(0x3fd0000000000000)); // 0x407a89
    int64_t set; // bp-192, 0x407a30
    int64_t v6 = &set; // 0x407b04
    char v7; // bp-200, 0x407a30
    int64_t v8 = &v7;
    int64_t v9 = v5; // 0x407a8f
    int64_t v10 = a2; // 0x407a8f
    int64_t v11; // 0x407a30
    int32_t result; // 0x407b2a
    int32_t v12; // 0x407b2f
    while (true) {
      lab_0x407b02:;
        int32_t v13 = pthread_sigmask(SIG_BLOCK, (struct _TYPEDEF___sigset_t *)&g73, (struct _TYPEDEF___sigset_t *)&set); // 0x407b0c
        int64_t v14 = g72; // 0x407b11
        g72 = 0;
        v7 = v13 == 0;
        result = fork();
        v12 = *v4;
        char v15 = v7;
        if (result != 0) {
            // 0x407a98
            g72 = v14;
            v11 = 0;
            if (v15 != 0) {
                // 0x407b45
                function_407880((int64_t *)&v7, (int64_t)&g73, v6);
                v11 = v8;
                goto lab_0x407aaa;
            } else {
                goto lab_0x407aaa;
            }
        } else {
            if (v15 == 0) {
                // break -> 0x407ba0
                break;
            }
            // 0x407b45
            function_407880((int64_t *)&v7, (int64_t)&g73, v6);
            v11 = v8;
            goto lab_0x407aaa;
        }
    }
  lab_0x407ba0:
    // 0x407ba0
    close(0);
    close(1);
    // 0x407b65
    return 0;
  lab_0x407b84:;
    // 0x407b84
    int64_t fd; // 0x407a30
    close((int32_t)fd);
    close(*(int32_t *)(v1 + 4));
    int32_t v16; // 0x407a30
    *v4 = v16;
    return result;
  lab_0x407aaa:
    // 0x407aaa
    *v4 = v12;
    if (result >= 0) {
        if (result == 0) {
            goto lab_0x407ba0;
        } else {
            // 0x407b5e
            g69 = &g70;
            goto lab_0x407b65;
        }
    }
    // 0x407ab6
    fd = v11;
    v16 = v12;
    if (v12 != 11) {
        goto lab_0x407b84;
    }
    // 0x407ac0
    __asm_movsd_3(v9);
    function_411620(v11, (int64_t)&g73, v6);
    int128_t v17 = __asm_movsd_3(v9); // 0x407acb
    v9 = __asm_movsd(__asm_addsd(__asm_movapd(v17), v17));
    int64_t v18 = v11; // 0x407ae7
    if (g69 >= 1) {
        int64_t v19 = function_405fb0(0, (int64_t)&g73, v6); // 0x407aeb
        v18 = 0;
        while ((int32_t)v19 != 0 && g69 >= 1) {
            // 0x407ae9
            v19 = function_405fb0(0, (int64_t)&g73, v6);
            int32_t v20 = g69; // 0x407adf
            v18 = 0;
        }
    }
    // 0x407af4
    v10--;
    if (v10 == 0) {
        // 0x407b80
        fd = v18;
        v16 = *v4;
        goto lab_0x407b84;
    }
    goto lab_0x407b02;
}
// Address range: 0x407c00 - 0x407cd0
int64_t function_407c00(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x407c00
    int64_t v1; // bp-32, 0x407c00
    int64_t result; // bp-40, 0x407c00
    int64_t v2; // 0x407c00
    int64_t v3 = function_411b40(a1, (int32_t)(int64_t)&result, 10, &v1, (int32_t)&g7, v2); // 0x407c24
    g125 = v3 & 0xffffffff;
    switch ((int32_t)v3) {
        case 0: {
        }
        case 2: {
            // 0x407c40
            *a2 = v1;
            // 0x407c49
            return result;
        }
        case 1: {
        }
        case 3: {
            // 0x407c60
            *a2 = -1;
            // 0x407c49
            return result;
        }
        case 4: {
            if (a3 != 0) {
                // 0x407c80
                function_40f880(a1);
                dcgettext(NULL, (char *)a3, 5);
                error(2, (int32_t)"%s: invalid count at start of %s" ^ (int32_t)"%s: invalid count at start of %s", dcgettext(NULL, "%s: invalid count at start of %s", 5));
                return &g122;
            }
            // break -> 0x407c75
            break;
        }
        default: {
            // 0x407c49
            return result;
        }
    }
    // 0x407c75
    return 0;
}
// Address range: 0x407cd0 - 0x407dd0
int64_t function_407cd0(int64_t path, int64_t * mode) {
    char v1 = (int64_t)mode;
    if (v1 != 114) {
        if (v1 != 119) {
            // 0x407db3
            __assert_fail("!\"unexpected mode passed to stream_open\"", "src/sort.c", 972, "stream_open");
            return &g122;
        }
        if (path == 0 || ftruncate(1, 0) == 0) {
            // 0x407cfd
            return (int64_t)g52;
        }
        // 0x407d74
        function_40f700(0, 3, path);
        error(2, *__errno_location(), dcgettext(NULL, "%s: error truncating", 5));
        // 0x407db3
        __assert_fail("!\"unexpected mode passed to stream_open\"", "src/sort.c", 972, "stream_open");
        return &g122;
    }
    // 0x407d10
    bool v2; // 0x407cd0
    int64_t v3 = v2 ? -1 : 1; // 0x407d20
    int64_t v4 = path; // 0x407cd0
    int64_t v5 = (int64_t)&g19; // 0x407cd0
    int64_t v6 = 2; // 0x407d20
    unsigned char v7 = *(char *)v4; // 0x407d20
    char v8 = *(char *)v5; // 0x407d20
    char v9 = v8; // 0x407d20
    bool v10 = false; // 0x407d20
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
        v7 = *(char *)v4;
        v8 = *(char *)v5;
        v9 = v8;
        v10 = false;
    }
    unsigned char v11 = v9;
    int64_t v12; // 0x407cd0
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407d2b
        g84 = 1;
        int64_t result = g53;
        function_40b800(result, 2, v12);
        return result;
    }
    uint32_t fd = open((char *)path, O_CLOEXEC); // 0x407d5c
    int64_t result2 = 0; // 0x407d63
    if (fd >= 0) {
        // 0x407d65
        result2 = (int64_t)fdopen(fd, (char *)mode);
    }
    // 0x407d39
    function_40b800(result2, 2, v12);
    return result2;
}
// Address range: 0x407dd0 - 0x407df0
int64_t function_407dd0(int64_t a1) {
    // 0x407dd0
    return function_405dd0((int64_t)dcgettext(NULL, "open failed", 5), (int64_t *)a1);
}
// Address range: 0x407df0 - 0x407e70
int64_t function_407df0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407dfc
    int64_t result; // 0x407df0
    char * v1; // 0x407e5c
    switch (fileno(stream)) {
        case 0: {
            // 0x407e20
            result = 0;
            int64_t v2; // 0x407df0
            if ((v2 & 16) != 0) {
                // 0x407e25
                clearerr_unlocked(stream);
                return &g122;
            }
            // break -> 0x407e16
            break;
        }
        case 1: {
            // 0x407e38
            result = 0;
            if (fflush_unlocked(stream) != 0) {
                // 0x407e5a
                v1 = dcgettext(NULL, (char *)(int64_t)"fflush failed", 5);
                return function_405dd0((int64_t)v1, (int64_t *)a2);
            }
            // break -> 0x407e16
            break;
        }
        default: {
            int64_t v3 = function_411f80(a1, a2); // 0x407e0d
            result = v3;
            if ((int32_t)v3 != 0) {
                // 0x407e5a
                v1 = dcgettext(NULL, (char *)(int64_t)"close failed", 5);
                return function_405dd0((int64_t)v1, (int64_t *)a2);
            }
            // break -> 0x407e16
            break;
        }
    }
    // 0x407e16
    return result;
}
// Address range: 0x407e70 - 0x4082a0
int64_t function_407e70(int64_t data, int64_t stream, int64_t a3) {
    int64_t * v1 = (int64_t *)(data + 8); // 0x407e87
    int64_t n = *v1; // 0x407e87
    uint64_t v2 = n + data; // 0x407e8b
    if (a3 != 0 || g81 == 0) {
        char * v3 = (char *)(v2 - 1); // 0x407ea9
        *v3 = *(char *)&g38;
        int64_t result = fwrite_unlocked((int64_t *)data, 1, (int32_t)n, (struct _IO_FILE *)stream); // 0x407eae
        if (n != result) {
            // 0x40827b
            return function_405dd0((int64_t)dcgettext(NULL, "write failed", 5), (int64_t *)a3);
        }
        // 0x407ebc
        *v3 = 0;
        // 0x407ec2
        return result;
    }
    int64_t v4 = data; // 0x407ee7
    int64_t v5 = n; // 0x407ee7
    int64_t v6; // 0x407e70
    int64_t v7; // 0x407e70
    int64_t v8; // 0x407e70
    int64_t v9; // 0x407e70
    int64_t v10; // 0x407e70
    int64_t v11; // 0x407e70
    int64_t v12; // 0x407e70
    int64_t v13; // 0x407e70
    int64_t v14; // 0x407e70
    int64_t v15; // 0x407e70
    int32_t v16; // 0x407e70
    int32_t v17; // 0x407e70
    int64_t * v18; // 0x407e70
    int64_t * v19; // 0x407e70
    int64_t v20; // 0x407f11
    if (v2 > data) {
        // 0x407f11
        v18 = (int64_t *)(stream + 40);
        v19 = (int64_t *)(stream + 48);
        v10 = data;
        v13 = data;
        while (true) {
          lab_0x407f11:;
            int64_t v21 = v13;
            v20 = v10 + 1;
            unsigned char v22 = *(char *)v10; // 0x407f15
            if (v22 != 9) {
                // 0x407ef0
                v6 = v22;
                v16 = v22;
                v11 = v21;
                v14 = v21;
                if (v2 == v20) {
                    goto lab_0x407f60;
                } else {
                    goto lab_0x407ef8;
                }
            } else {
                uint64_t v23 = *v18; // 0x407f27
                v7 = 62;
                v15 = v23;
                v12 = v21;
                v17 = 62;
                if (*v19 > v23) {
                    goto lab_0x407f02;
                } else {
                    goto lab_0x407f31;
                }
            }
        }
      lab_0x407f70:
        // 0x407f70
        v5 = *v1;
        v9 = v8;
    }
    int64_t v24 = v4; // 0x407f87
    int64_t v25 = g83; // 0x407f87
    int64_t v26 = v4 - 1 + v5; // 0x407f87
    int64_t v27 = v5; // 0x407f87
    int64_t v28 = v9; // 0x407f87
    int64_t v29 = 0; // 0x407f87
    if (g83 == 0) {
        goto lab_0x4080a7_2;
    } else {
        goto lab_0x407f90;
    }
  lab_0x408100:;
    // 0x408100
    int64_t v30; // 0x407e70
    int64_t v31 = v30;
    int64_t v32 = (int64_t)g52; // 0x408100
    int64_t * v33 = (int64_t *)(v32 + 40); // 0x408107
    uint64_t v34 = *v33; // 0x408107
    if (v34 >= *(int64_t *)(v32 + 48)) {
        // 0x408190
        __overflow(g52, 95);
        goto lab_0x40811c;
    } else {
        // 0x408111
        *v33 = v34 + 1;
        *(char *)v34 = 95;
        goto lab_0x40811c;
    }
  lab_0x408122:;
    int64_t v35 = (int64_t)g52; // 0x408122
    int64_t * v36 = (int64_t *)(v35 + 40); // 0x408129
    uint64_t v37 = *v36; // 0x408129
    int64_t v38; // 0x407e70
    int64_t v39; // 0x407e70
    if (v37 >= *(int64_t *)(v35 + 48)) {
        // 0x408240
        v38 = __overflow(g52, 10);
        v39 = v35;
    } else {
        // 0x408137
        *v36 = v37 + 1;
        *(char *)v37 = 10;
        v38 = v37;
        v39 = v35;
    }
    goto lab_0x408142;
  lab_0x408142:;
    int64_t result2 = v38;
    int64_t v40; // 0x407e70
    if (v40 == 0) {
        // break -> 0x407ec2
        goto lab_0x407ec2_3;
    }
    // 0x40814b
    v25 = *(int64_t *)(v40 + 64);
    int3_t v41; // 0x407e70
    int3_t v42; // 0x407e70
    if (v25 != 0) {
        // 0x408159
        v24 = v39;
        v27 = *v1;
        v41 = v42;
        v26 = v24 - 1 + v27;
        goto lab_0x407f90;
    }
    // 0x4081d8
    if (*(char *)&g85 != 0) {
        // break -> 0x407ec2
        goto lab_0x407ec2_3;
    }
    // 0x4081e5
    if (g86 != 0) {
        // break -> 0x407ec2
        goto lab_0x407ec2_3;
    }
    int64_t v43 = *v1; // 0x408202
    int64_t v44 = 0; // 0x408202
    goto lab_0x4080a7;
  lab_0x407f60:
    // 0x407f60
    v6 = 10;
    v16 = 10;
    v11 = v14;
    goto lab_0x407ef8;
  lab_0x407ef8:;
    uint64_t v54 = *v18; // 0x407ef8
    v7 = v6;
    v15 = v54;
    v12 = v11;
    v17 = v16;
    if (*v19 > v54) {
        goto lab_0x407f02;
    } else {
        goto lab_0x407f31;
    }
  lab_0x407f02:
    // 0x407f02
    *v18 = v15 + 1;
    *(char *)v15 = (char)v7;
    v8 = v7;
    int64_t v55 = v12; // 0x407f0a
    goto lab_0x407f0c;
  lab_0x407f31:;
    int32_t v97 = __overflow((struct _IO_FILE *)stream, v17 % 256); // 0x407f38
    v8 = v97;
    v55 = stream;
    if (v97 != -1) {
        goto lab_0x407f0c;
    } else {
        int64_t v98 = (int64_t)dcgettext(NULL, "write failed", 5); // 0x407f4e
        function_405dd0(v98, (int64_t *)((int32_t)"write failed" ^ (int32_t)"write failed"));
        v14 = v98;
        goto lab_0x407f60;
    }
  lab_0x407f0c:
    // 0x407f0c
    v4 = v55;
    v10 = v20;
    v13 = v4;
    if (v2 == v20) {
        // break -> 0x407f70
        goto lab_0x407f70;
    }
    goto lab_0x407f11;
  lab_0x4080a7_2:;
    // 0x4080a7
    int3_t v56; // 0x407e70
    v42 = v56;
    v43 = v28;
    v44 = v29;
    while (true) {
      lab_0x4080a7:
        // 0x4080a7
        v40 = v44;
        if (v43 != 0) {
            while (true) {
                // 0x4080c8
                int64_t v45; // 0x407e70
                int64_t v46 = v45;
                struct _IO_FILE * v47 = g52; // 0x4080c8
                int64_t v48 = (int64_t)v47; // 0x4080c8
                int64_t * v49 = (int64_t *)(v48 + 40); // 0x4080cf
                uint64_t v50 = *v49; // 0x4080cf
                uint64_t v51 = *(int64_t *)(v48 + 48); // 0x4080d3
                if (v50 >= v51) {
                    // 0x408180
                    __overflow(v47, 32);
                } else {
                    // 0x4080dd
                    *v49 = v50 + 1;
                    *(char *)v50 = 32;
                }
                int64_t v52 = v46 - 1;
                v45 = v52;
                int64_t v53; // 0x407e70
                v30 = v53;
                if (v52 == 0) {
                    goto lab_0x408100;
                }
            }
            goto lab_0x408122;
        } else {
            // 0x4081b0
            v38 = __printf_chk(1, dcgettext(NULL, "^ no match for key\n", 5));
            v39 = 1;
            goto lab_0x408142;
        }
    }
  lab_0x407ec2_3:
    // 0x407ec2
    return result2;
  lab_0x407f90:;
    int64_t v57 = v27;
    int64_t v58 = v26;
    int64_t v59 = v25;
    int64_t v60 = v24;
    int3_t v61 = v41;
    int64_t v62 = *(int64_t *)v59; // 0x407f90
    int64_t v63 = *(int64_t *)(v59 + 16); // 0x407f94
    int64_t v64; // 0x407e70
    int64_t v65; // 0x407e70
    int64_t v66; // 0x407e70
    int64_t v67; // 0x407e70
    int64_t v68; // 0x407e70
    if (v62 == -1) {
        // 0x408210
        v66 = v60;
        v67 = v60;
        v64 = v58;
        if (v63 != -1) {
            goto lab_0x407fba;
        } else {
            goto lab_0x407fcb;
        }
    } else {
        int64_t v69 = function_406360(v60, v57, v59); // 0x407fac
        v66 = v69;
        v68 = v69;
        v65 = v58;
        if (v63 == -1) {
            goto lab_0x407fd9;
        } else {
            goto lab_0x407fba;
        }
    }
  lab_0x407fba:
    // 0x407fba
    v67 = v66;
    v64 = function_406470(v60, v57, v59);
    goto lab_0x407fcb;
  lab_0x407fcb:
    // 0x407fcb
    v68 = v67;
    v65 = v64;
    int64_t v70 = v67; // 0x407fd1
    int64_t v71 = v64; // 0x407fd1
    if (v62 == -1 == (*(char *)(v59 + 48) != 0)) {
        goto lab_0x407ff6;
    } else {
        goto lab_0x407fd9;
    }
  lab_0x407fd9:;
    int64_t v72 = v65;
    int64_t v73 = v68;
    v70 = v73;
    v71 = v72;
    if (*(char *)(v59 + 54) != 0) {
        goto lab_0x407ff6;
    } else {
        // 0x407fe1
        v70 = v73;
        v71 = v72;
        v56 = v61;
        v28 = 0xffff00ff0000;
        v29 = v59;
        if ((*(int64_t *)(v59 + 48) & 0xffff00ff0000) == 0) {
            goto lab_0x4080a7_2;
        } else {
            goto lab_0x407ff6;
        }
    }
  lab_0x407ff6:;
    uint64_t v74 = v71;
    char * v75 = (char *)v74; // 0x407ff6
    *v75 = 0;
    int64_t v76 = (int64_t)*(char *)v70; // 0x407ffe
    int64_t v77 = v70; // 0x408009
    int64_t v78 = v76; // 0x408009
    int64_t v79 = v70; // 0x408009
    if (*(char *)(v76 + (int64_t)&g98) != 0) {
        int64_t v80 = v77 + 1; // 0x408010
        int64_t v81 = (int64_t)*(char *)v80; // 0x408014
        v77 = v80;
        v78 = v81;
        v79 = v80;
        while (*(char *)(v81 + (int64_t)&g98) != 0) {
            // 0x408010
            v80 = v77 + 1;
            v81 = (int64_t)*(char *)v80;
            v77 = v80;
            v78 = v81;
            v79 = v80;
        }
    }
    uint64_t str = v79;
    struct _IO_FILE * v82 = (struct _IO_FILE *)str;
    struct _IO_FILE * endptr = v82; // bp-72, 0x408021
    int64_t v83 = v78; // 0x408028
    int3_t v84; // 0x407e70
    int64_t v85; // 0x407e70
    if (str > v74) {
        goto lab_0x4081a0;
    } else {
        // 0x40802e
        if (*(char *)(v59 + 54) != 0) {
            int64_t v86 = function_405a40(str, (int32_t)(int64_t)&endptr); // 0x40822e
            v84 = v61;
            v85 = v86;
            goto lab_0x4080a0;
        } else {
            // 0x40803a
            if (*(char *)(v59 + 52) != 0) {
                float80_t str_as_ld = strtold((char *)str, (char **)&endptr); // 0x408256
                __frontend_reg_store_fpr(v61, __frontend_reg_load_fpr(v61));
                v84 = v61 + 1;
                v85 = (float64_t)str_as_ld;
                goto lab_0x4080a0;
            } else {
                // 0x408046
                if ((*(int64_t *)(v59 + 48) & 0xff0000ff0000) == 0) {
                    goto lab_0x4081a0;
                } else {
                    struct _IO_FILE * v87 = v82; // 0x408061
                    if (str < v74) {
                        char v88 = *(char *)str; // 0x408065
                        v87 = (struct _IO_FILE *)(str + (int64_t)(v88 == 45));
                    }
                    struct _IO_FILE * v89 = v87; // bp-64, 0x408074
                    int64_t v90 = function_405930((int64_t *)&v89); // 0x408079
                    v84 = v61;
                    v85 = v90;
                    if ((char)v90 >= 48) {
                        struct _IO_FILE * v91 = v89; // 0x408088
                        int64_t v92 = (int64_t)v91; // 0x408088
                        int64_t v93 = v92; // 0x40808d
                        if (*(char *)(v59 + 53) != 0) {
                            unsigned char v94 = *(char *)v91; // 0x408268
                            char v95 = *(char *)((int64_t)v94 + (int64_t)&g2); // 0x40826b
                            v93 = (int64_t)(v95 != 0) + v92;
                        }
                        // 0x408093
                        endptr = (struct _IO_FILE *)v93;
                        v84 = v61;
                        v85 = v93;
                    }
                    goto lab_0x4080a0;
                }
            }
        }
    }
  lab_0x4081a0:
    // 0x4081a0
    endptr = (struct _IO_FILE *)v74;
    v84 = v61;
    v85 = v83;
    goto lab_0x4080a0;
  lab_0x4080a0:
    // 0x4080a0
    v56 = v84;
    v28 = v85;
    v29 = v59;
    goto lab_0x4080a7_2;
  lab_0x40811c:;
    int64_t v96 = v31 - 1; // 0x40811c
    v30 = v96;
    if (v96 != 0) {
        goto lab_0x408100;
    } else {
        goto lab_0x408122;
    }
}
// Address range: 0x4082a0 - 0x408370
int64_t function_4082a0(int64_t str, int64_t str2) {
    // 0x4082a0
    if (g83 != 0) {
        int64_t result = function_4065b0(str, str2); // 0x4082be
        if ((int32_t)result != 0 || *(char *)&g85 != 0 || g86 != 0) {
            // 0x408306
            return result;
        }
    }
    int64_t v1 = *(int64_t *)(str + 8); // 0x4082d9
    int64_t v2 = *(int64_t *)(str2 + 8); // 0x4082dd
    uint64_t v3 = v2 - 1; // 0x4082e4
    uint64_t v4 = v1 - 1; // 0x4082e8
    int64_t v5; // 0x4082a0
    if (v4 != 0) {
        // 0x408318
        v5 = 1;
        if (v3 != 0) {
            // 0x408322
            if (g103 != 0) {
                // 0x408360
                v5 = function_4115c0(str, v1, str2, v2);
            } else {
                int64_t n = v4 > v3 ? v3 : v4; // 0x408338
                int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x40833c
                v5 = memcmp_rc;
                if (memcmp_rc == 0) {
                    // 0x408345
                    v5 = 0xffffffff;
                    if (v4 >= v3) {
                        // 0x40834f
                        v5 = v1 != v2;
                    }
                }
            }
        }
    } else {
        // 0x4082ee
        v5 = v3 != 0 ? 0xffffffff : 0;
    }
    int64_t v6 = v5;
    // 0x408306
    return (g87 != 0 ? -v6 : v6) & 0xffffffff;
}
// Address range: 0x408370 - 0x4085c6
int64_t function_408370(int64_t a1, uint64_t a2, int64_t a3, int32_t a4) {
    if (a2 == 2) {
        int64_t v1 = a1 - 64; // 0x4084a8
        int64_t v2 = a1 - 32; // 0x4084ac
        int64_t result2 = function_4082a0(v2, v1); // 0x4084b4
        int32_t v3 = result2;
        if ((char)a4 != 0) {
            int64_t result = v3 >= 0 == (v3 != 0) ? -32 : -64; // 0x40854f
            int64_t v4 = (32 * (int64_t)(v3 >= 0 == (v3 != 0)) ^ -32) + a1; // 0x40855c
            int64_t v5 = result + a1; // 0x40855f
            int128_t v6 = __asm_movdqu(*(int128_t *)v4); // 0x408562
            int128_t v7 = __asm_movdqu(*(int128_t *)(v4 + 16)); // 0x408566
            __asm_movups(*(int128_t *)(a3 - 32), v6);
            int128_t v8 = __asm_movdqu(*(int128_t *)v5); // 0x40856f
            __asm_movups(*(int128_t *)(a3 - 16), v7);
            int128_t v9 = __asm_movdqu(*(int128_t *)(v5 + 16)); // 0x408578
            __asm_movups(*(int128_t *)(a3 - 64), v8);
            __asm_movups(*(int128_t *)(a3 - 48), v9);
            return result;
        }
        // 0x4084c1
        if (v3 >= 1) {
            int128_t * v10 = (int128_t *)v2; // 0x4084c5
            int128_t v11 = __asm_movdqu(*v10); // 0x4084c5
            int128_t * v12 = (int128_t *)(a1 - 16); // 0x4084ca
            int128_t v13 = __asm_movdqu(*v12); // 0x4084ca
            int128_t * v14 = (int128_t *)v1; // 0x4084cf
            int128_t v15 = __asm_movdqu(*v14); // 0x4084cf
            int128_t * v16 = (int128_t *)(a1 - 48); // 0x4084d4
            int128_t v17 = __asm_movdqu(*v16); // 0x4084d4
            __asm_movups(*(int128_t *)(a3 - 32), v11);
            __asm_movups(*(int128_t *)(a3 - 16), v13);
            __asm_movups(*v10, v15);
            __asm_movups(*v12, v17);
            __asm_movups(*v14, v11);
            __asm_movups(*v16, v13);
        }
        // 0x4084f1
        return result2;
    }
    int64_t v18 = (uint64_t)(a2 % 2); // 0x40839d
    int64_t v19 = 0; // 0x4083a0
    int64_t v20 = a1 - v19; // 0x4083a7
    int64_t v21; // 0x408370
    int64_t v22; // 0x408370
    int64_t v23; // 0x408370
    if ((char)a4 != 0) {
        int64_t v24 = a3 - v19; // 0x408448
        function_408370(v20, v18, v24, 1);
        v23 = a3;
        v22 = a1;
        v21 = v24;
        if (a2 >= 4) {
            // 0x408464
            function_408370(a1, 0, a3, 0);
            v23 = a3;
            v22 = a1;
            v21 = v24;
        }
    } else {
        // 0x4083b3
        function_408370(v20, v18, a3, 0);
        if (a2 < 4) {
            int128_t v25 = __asm_movdqu(*(int128_t *)(a1 - 32)); // 0x4083d4
            int128_t v26 = __asm_movdqu(*(int128_t *)(a1 - 16)); // 0x4083d9
            __asm_movups(*(int128_t *)(a3 - 32), v25);
            __asm_movups(*(int128_t *)(a3 - 16), v26);
            v23 = a1;
            v22 = a3;
            v21 = v20;
        } else {
            // 0x408598
            function_408370(a1, 0, a3, 1);
            v23 = a1;
            v22 = a3;
            v21 = v20;
        }
    }
    int64_t v27 = v21; // 0x4083fa
    int64_t v28 = v21 - 32; // 0x4083fa
    int64_t v29 = v18; // 0x4083fa
    int64_t v30 = 0;
    int64_t v31 = v22;
    int64_t v32 = v31 - 32;
    int64_t v33 = v23 - 32; // 0x40840b
    int64_t v34 = function_4082a0(v32, v28); // 0x40840f
    int64_t v35 = v33; // 0x40841b
    int64_t v36 = v29; // 0x40841b
    int64_t v37 = v28; // 0x40841b
    int64_t v38 = v27; // 0x40841b
    int64_t v39 = v23; // 0x40841b
    int64_t v40 = v33; // 0x40841b
    int64_t v41 = v34; // 0x40841b
    int64_t v42; // 0x408370
    int64_t v43; // 0x408370
    int64_t v44; // 0x408370
    int64_t v45; // 0x408370
    int64_t v46; // 0x408370
    int128_t v47; // 0x408426
    int64_t v48; // 0x40842c
    int64_t v49; // 0x408430
    int64_t v50; // 0x40843d
    int64_t v51; // 0x40840b
    int64_t v52; // 0x40840f
    if ((int32_t)v34 >= 1) {
        v42 = v35;
        __asm_movups(*(int128_t *)v42, __asm_movdqu(*(int128_t *)(v38 - 32)));
        v47 = __asm_movdqu(*(int128_t *)(v38 - 16));
        v48 = v23 - 16;
        __asm_movups(*(int128_t *)v48, v47);
        v49 = v36 - 1;
        v45 = -32;
        v43 = v30;
        if (v49 == 0) {
            goto lab_0x408510;
        }
        // 0x40843a
        v44 = v37;
        v50 = v44 - 32;
        v51 = v42 - 32;
        v52 = function_4082a0(v32, v50);
        v36 = v49;
        v37 = v50;
        v38 = v44;
        v46 = v42;
        v39 = v42;
        v27 = v44;
        v28 = v50;
        v29 = v49;
        v40 = v51;
        v41 = v52;
        while ((int32_t)v52 >= 1) {
            // 0x40841d
            v42 = v51;
            __asm_movups(*(int128_t *)v42, __asm_movdqu(*(int128_t *)(v38 - 32)));
            v47 = __asm_movdqu(*(int128_t *)(v38 - 16));
            v48 = v46 - 16;
            __asm_movups(*(int128_t *)v48, v47);
            v49 = v36 - 1;
            v45 = -32;
            v43 = v30;
            if (v49 == 0) {
                goto lab_0x408510;
            }
            // 0x40843a
            v44 = v37;
            v50 = v44 - 32;
            v51 = v42 - 32;
            v52 = function_4082a0(v32, v50);
            v36 = v49;
            v37 = v50;
            v38 = v44;
            v46 = v42;
            v39 = v42;
            v27 = v44;
            v28 = v50;
            v29 = v49;
            v40 = v51;
            v41 = v52;
        }
    }
    int64_t v53 = v40;
    __asm_movups(*(int128_t *)v53, __asm_movdqu(*(int128_t *)v32));
    int128_t v54 = __asm_movdqu(*(int128_t *)(v31 - 16)); // 0x408488
    __asm_movups(*(int128_t *)(v39 - 16), v54);
    int64_t v55 = v30 - 1; // 0x408491
    int64_t result3 = v41; // 0x408495
    while (v55 != 0) {
        // 0x408400
        v30 = v55;
        v31 = v32;
        v32 = v31 - 32;
        v33 = v53 - 32;
        v34 = function_4082a0(v32, v28);
        v35 = v33;
        v36 = v29;
        v37 = v28;
        v38 = v27;
        v46 = v53;
        v39 = v53;
        v40 = v33;
        v41 = v34;
        if ((int32_t)v34 >= 1) {
            v42 = v35;
            __asm_movups(*(int128_t *)v42, __asm_movdqu(*(int128_t *)(v38 - 32)));
            v47 = __asm_movdqu(*(int128_t *)(v38 - 16));
            v48 = v46 - 16;
            __asm_movups(*(int128_t *)v48, v47);
            v49 = v36 - 1;
            v45 = -32;
            v43 = v30;
            if (v49 == 0) {
                goto lab_0x408510;
            }
            // 0x40843a
            v44 = v37;
            v50 = v44 - 32;
            v51 = v42 - 32;
            v52 = function_4082a0(v32, v50);
            v36 = v49;
            v37 = v50;
            v38 = v44;
            v46 = v42;
            v39 = v42;
            v27 = v44;
            v28 = v50;
            v29 = v49;
            v40 = v51;
            v41 = v52;
            while ((int32_t)v52 >= 1) {
                // 0x40841d
                v42 = v51;
                __asm_movups(*(int128_t *)v42, __asm_movdqu(*(int128_t *)(v38 - 32)));
                v47 = __asm_movdqu(*(int128_t *)(v38 - 16));
                v48 = v46 - 16;
                __asm_movups(*(int128_t *)v48, v47);
                v49 = v36 - 1;
                v45 = -32;
                v43 = v30;
                if (v49 == 0) {
                    goto lab_0x408510;
                }
                // 0x40843a
                v44 = v37;
                v50 = v44 - 32;
                v51 = v42 - 32;
                v52 = function_4082a0(v32, v50);
                v36 = v49;
                v37 = v50;
                v38 = v44;
                v46 = v42;
                v39 = v42;
                v27 = v44;
                v28 = v50;
                v29 = v49;
                v40 = v51;
                v41 = v52;
            }
        }
        // 0x408480
        v53 = v40;
        __asm_movups(*(int128_t *)v53, __asm_movdqu(*(int128_t *)v32));
        v54 = __asm_movdqu(*(int128_t *)(v31 - 16));
        __asm_movups(*(int128_t *)(v39 - 16), v54);
        v55 = v30 - 1;
        result3 = v41;
    }
    // 0x4084f1
    return result3;
  lab_0x408510:;
    int64_t v56 = v45 + v31;
    __asm_movups(*(int128_t *)(v45 + v42), __asm_movdqu(*(int128_t *)v56));
    __asm_movups(*(int128_t *)(v45 + v48), __asm_movdqu(*(int128_t *)(v56 + 16)));
    int64_t v57 = v45 - 32; // 0x408525
    int64_t v58 = v43 - 1; // 0x408529
    result3 = v57;
    v45 = v57;
    v43 = v58;
    if (v58 != 0) {
        goto lab_0x408510;
    } else {
        return result3;
    }
}
// Address range: 0x4085d0 - 0x408637
int64_t function_4085d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1;
    if (*(char *)&g85 == 0) {
        // 0x40861e
        return function_407e70(a1, a2, a3);
    }
    // 0x4085e5
    if (g100 != 0) {
        int64_t result = function_4082a0(a1, (int64_t)&g100); // 0x4085f9
        if ((int32_t)result == 0) {
            // 0x408630
            return result;
        }
    }
    // 0x408607
    *(int128_t *)&g100 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)&v1));
    int64_t v2 = __asm_movaps(__asm_movdqu(*(int128_t *)(a1 + 16))); // 0x408617
    *(int128_t *)&g101 = (int128_t)v2;
    // 0x40861e
    return function_407e70(a1, a2, a3);
}
// Address range: 0x408640 - 0x408e08
int64_t function_408640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    uint128_t v1 = 56 * (int128_t)(uint64_t)a3; // 0x40866b
    if ((int64_t)v1 < 0 || v1 % 0x3f0000000000000001 != 0) {
        // 0x408e03
        function_411460(a3);
        // UNREACHABLE
    }
    int64_t v2 = 8 * a3; // 0x40869a
    int64_t v3 = 56 * a3; // 0x4086a8
    int64_t v4 = function_411210(v3); // 0x4086ac
    if (v2 < 0 || a3 >= 0x2000000000000000) {
        // 0x408e03
        function_411460(v3);
        // UNREACHABLE
    }
    int64_t v5 = function_411210(v2); // 0x4086db
    int64_t v6 = function_411210(v2); // 0x4086e6
    int64_t v7 = function_411210(v2); // 0x4086f3
    int64_t v8 = 0; // bp-88, 0x4086f8
    int64_t v9; // 0x408640
    int64_t v10; // 0x408640
    int64_t v11; // 0x408640
    int64_t v12; // 0x408640
    int64_t v13; // 0x408640
    int64_t v14; // 0x408640
    int64_t v15; // 0x408640
    int64_t v16; // 0x408640
    int64_t v17; // 0x408640
    int64_t * v18; // 0x408640
    int64_t v19; // 0x408640
    int64_t v20; // 0x4088a0
    int64_t v21; // 0x4088aa
    int64_t * v22; // 0x4088bb
    uint64_t v23; // 0x4088bb
    int64_t * v24; // 0x408640
    int64_t * v25; // 0x408640
    int64_t v26; // 0x408936
    if (a3 != 0) {
        int64_t v27 = a1 + 16;
        int64_t v28 = a3; // 0x408640
        int64_t v29 = a2; // 0x408640
        int64_t v30 = 0; // 0x408640
        int64_t v31; // 0x408640
        int64_t v32; // 0x408640
        while (true) {
          lab_0x408730:;
            int64_t v33 = v29;
            uint64_t v34 = v28;
            uint64_t v35 = v30;
            int64_t v36 = 8 * v35; // 0x40873f
            int64_t v37 = 56 * v35 + v4; // 0x408752
            uint64_t v38 = (int64_t)g91 / v34;
            uint64_t v39 = g33; // 0x408763
            int64_t * v40 = (int64_t *)v37;
            function_405e30(v40, 32, v39 <= v38 ? v38 : v39);
            int64_t * v41 = (int64_t *)(v36 + a6);
            int64_t * v42 = (int64_t *)(16 * v35 + a1);
            while ((char)function_4074d0((char)v37, *v41, *v42) != 0) {
                int64_t v43 = *v40 + *(int64_t *)(v37 + 24); // 0x4087ad
                *(int64_t *)(v36 + v5) = v43 - 32;
                *(int64_t *)(v36 + v6) = v43 - 32 * *(int64_t *)(v37 + 16);
                int64_t v44 = v35 + 1; // 0x4087cd
                v32 = v34;
                v31 = v33;
                if (v44 >= v34) {
                    // break (via goto) -> 0x4087e2
                    goto lab_0x4087e2;
                }
                v35 = v44;
                v36 = 8 * v35;
                v37 = 56 * v35 + v4;
                v38 = (int64_t)g91 / v34;
                v39 = g33;
                v40 = (int64_t *)v37;
                function_405e30(v40, 32, v39 <= v38 ? v38 : v39);
                v41 = (int64_t *)(v36 + a6);
                v42 = (int64_t *)(16 * v35 + a1);
            }
            // 0x408c70
            function_407df0(*v41, *v42);
            int64_t v45 = v33; // 0x408c81
            if (v33 > v35) {
                // 0x408dd6
                function_407920(*v42);
                v45 = v33 - 1;
            }
            // 0x408c87
            free((int64_t *)*v40);
            int64_t v46 = v34 - 1; // 0x408c95
            v32 = v46;
            v31 = v45;
            if (v46 <= v35) {
                // break -> 0x4087e2
                break;
            }
            int64_t v47 = v36; // 0x408caf
            while (true) {
              lab_0x408cb0:;
                int64_t v48 = 2 * v47; // 0x408cb0
                int128_t v49 = __asm_movdqu(*(int128_t *)(v48 + v27)); // 0x408cb0
                int64_t v50 = v47 + a6;
                __asm_movups(*(int128_t *)(v48 + a1), v49);
                *(int64_t *)v50 = *(int64_t *)(v50 + 8);
                v47 += 8;
                v28 = v46;
                v29 = v45;
                v30 = v35;
                if (8 * v34 - 8 != v47) {
                    goto lab_0x408cb0;
                } else {
                    goto lab_0x408730;
                }
            }
        }
      lab_0x4087e2:
        // 0x4087e2
        if (v32 != 0) {
            int64_t v51 = 0;
            *(int64_t *)(8 * v51 + v7) = v51;
            int64_t v52 = v51 + 1; // 0x4087fc
            while (v52 != v32) {
                // 0x4087f8
                v51 = v52;
                *(int64_t *)(8 * v51 + v7) = v51;
                v52 = v51 + 1;
            }
            // 0x408805
            v9 = v7 - 8;
            int64_t v53 = 1; // 0x40880b
            if (v32 != 1) {
                while (true) {
                    int64_t v54 = v53;
                    int64_t v55 = 8 * v54; // 0x408820
                    int64_t * v56 = (int64_t *)(v55 + v7); // 0x408837
                    int64_t v57 = *v56; // 0x408837
                    int64_t * v58 = (int64_t *)(v55 + v9); // 0x40883b
                    int64_t v59 = *v58; // 0x40883b
                    int64_t v60 = *(int64_t *)(8 * v59 + v5); // 0x408842
                    int64_t v61; // 0x408640
                    if ((int32_t)function_4082a0(v60, *(int64_t *)(8 * v57 + v5)) < 1) {
                        int64_t v62 = v54 + 1; // 0x408868
                        v61 = v62;
                        if (v62 >= v32) {
                            // break -> 0x408879
                            break;
                        }
                    } else {
                        // 0x408854
                        *v58 = v57;
                        *v56 = v59;
                        v61 = 1;
                    }
                    // 0x408820
                    v53 = v61;
                }
            }
            // 0x408879
            v18 = (int64_t *)v7;
            v19 = &v8;
            int64_t v63 = v32; // 0x408897
            int64_t v64 = v31; // 0x408897
            int64_t v65 = 0; // 0x408897
            int64_t v66 = 0; // 0x408897
            while (true) {
              lab_0x4088a0:;
                int64_t v67 = v64;
                v17 = v63;
                v14 = v65;
                v10 = v66;
                while (true) {
                  lab_0x4088a0_3:
                    // 0x4088a0
                    v11 = v10;
                    int64_t v68 = v14;
                    v20 = *v18;
                    v21 = 8 * v20;
                    v22 = (int64_t *)(v21 + v5);
                    v23 = *v22;
                    if (*(char *)&g85 == 0) {
                        // 0x408a58
                        function_407e70(v23, a4, a5);
                        v15 = v68;
                        v12 = v11;
                        goto lab_0x4088e6;
                    } else {
                        if (v68 == 0) {
                            goto lab_0x408a87;
                        } else {
                            int64_t v69 = function_4082a0(v68, v23); // 0x4088d9
                            v15 = v68;
                            v12 = v11;
                            if ((int32_t)v69 != 0) {
                                // 0x408a70
                                function_407e70(v19, a4, a5);
                                goto lab_0x408a87;
                            } else {
                                goto lab_0x4088e6;
                            }
                        }
                    }
                }
              lab_0x408b00:;
                int64_t v70 = 8 * v17; // 0x408b09
                int64_t v71 = v70 + v7; // 0x408b09
                int64_t v72 = v7 + 8; // 0x408b11
                int64_t v73 = v20; // 0x408b11
                int64_t * v74 = v25; // 0x408b11
                int64_t * v75 = v24; // 0x408b11
                int64_t v76 = v20; // 0x408b11
                int64_t v77 = v26; // 0x408b11
                if (v17 != 1) {
                    int64_t * v78 = (int64_t *)v72; // 0x408b20
                    uint64_t v79 = *v78; // 0x408b20
                    int64_t v80 = v73; // 0x408b26
                    if (v79 > v73) {
                        // 0x408b28
                        *v78 = v79 - 1;
                        v80 = *v18;
                    }
                    int64_t v81 = v80;
                    int64_t v82 = v72 + 8; // 0x408b32
                    v72 = v82;
                    v73 = v81;
                    while (v71 != v82) {
                        // 0x408b20
                        v78 = (int64_t *)v72;
                        v79 = *v78;
                        v80 = v73;
                        if (v79 > v73) {
                            // 0x408b28
                            *v78 = v79 - 1;
                            v80 = *v18;
                        }
                        // 0x408b32
                        v81 = v80;
                        v82 = v72 + 8;
                        v72 = v82;
                        v73 = v81;
                    }
                    // 0x408b3b
                    v74 = (int64_t *)(16 * v81 + a1);
                    v75 = (int64_t *)(8 * v81 + a6);
                    v76 = v81;
                    v77 = 56 * v81 + v4;
                }
                uint64_t v83 = v76;
                int64_t * v84 = v74;
                function_407df0(*v75, *v84);
                int64_t v85 = v67; // 0x408b8a
                if (v67 > v83) {
                    // 0x408dc2
                    function_407920(*v84);
                    v85 = v67 - 1;
                }
                int64_t v86 = v17 - 1; // 0x408b77
                free((int64_t *)*(int64_t *)v77);
                if (v86 > v83) {
                    int64_t v87 = 56 * v83 + v4;
                    int64_t v88 = 8 * v83;
                    int64_t v89 = v88 + 8;
                    int64_t v90 = 2 * v88; // 0x408be5
                    int128_t v91 = __asm_movdqu(*(int128_t *)(v90 + v27)); // 0x408be5
                    int64_t v92 = v87 + 56; // 0x408beb
                    int128_t v93 = __asm_movdqu(*(int128_t *)v92); // 0x408bef
                    int128_t v94 = __asm_movdqu(*(int128_t *)(v87 + 72)); // 0x408bf3
                    *(int64_t *)(v88 + a6) = *(int64_t *)(v89 + a6);
                    int128_t v95 = __asm_movdqu(*(int128_t *)(v87 + 88)); // 0x408c00
                    __asm_movups(*(int128_t *)(v90 + a1), v91);
                    *(int64_t *)(v87 + 48) = *(int64_t *)(v87 + 104);
                    __asm_movups(*(int128_t *)v87, v93);
                    *(int64_t *)(v88 + v5) = *(int64_t *)(v89 + v5);
                    __asm_movups(*(int128_t *)(v87 + 16), v94);
                    *(int64_t *)(v88 + v6) = *(int64_t *)(v89 + v6);
                    __asm_movups(*(int128_t *)(v87 + 32), v95);
                    while (v70 - 8 != v89) {
                        // 0x408be0
                        v87 = v92;
                        v88 = v89;
                        v89 = v88 + 8;
                        v90 = 2 * v88;
                        v91 = __asm_movdqu(*(int128_t *)(v90 + v27));
                        v92 = v87 + 56;
                        v93 = __asm_movdqu(*(int128_t *)v92);
                        v94 = __asm_movdqu(*(int128_t *)(v87 + 72));
                        *(int64_t *)(v88 + a6) = *(int64_t *)(v89 + a6);
                        v95 = __asm_movdqu(*(int128_t *)(v87 + 88));
                        __asm_movups(*(int128_t *)(v90 + a1), v91);
                        *(int64_t *)(v87 + 48) = *(int64_t *)(v87 + 104);
                        __asm_movups(*(int128_t *)v87, v93);
                        *(int64_t *)(v88 + v5) = *(int64_t *)(v89 + v5);
                        __asm_movups(*(int128_t *)(v87 + 16), v94);
                        *(int64_t *)(v88 + v6) = *(int64_t *)(v89 + v6);
                        __asm_movups(*(int128_t *)(v87 + 32), v95);
                    }
                }
                if (v86 == 0) {
                    // break -> 0x408cd8
                    break;
                }
                int64_t v96 = v7; // 0x408c4e
                while (true) {
                  lab_0x408c50:;
                    int64_t v97 = v96;
                    v96 = v97 + 8;
                    *(int64_t *)v97 = *(int64_t *)v96;
                    v63 = v86;
                    v64 = v85;
                    v65 = v16;
                    v66 = v13;
                    if (v70 + v9 != v96) {
                        goto lab_0x408c50;
                    } else {
                        goto lab_0x4088a0;
                    }
                }
            }
            // 0x408cd8
            if (!((v16 == 0 | *(char *)&g85 == 0))) {
                // 0x408cec
                function_407e70(v19, a4, a5);
                free((int64_t *)v8);
            }
        }
    }
    // 0x408d10
    function_407df0(a4, a5);
    free((int64_t *)a6);
    free((int64_t *)v4);
    free((int64_t *)v7);
    free((int64_t *)v6);
    free((int64_t *)v5);
    return &g122;
  lab_0x4088e6:
    // 0x4088e6
    v13 = v12;
    v16 = v15;
    int64_t * v98 = (int64_t *)(v21 + v6); // 0x4088ef
    int64_t v99; // 0x408640
    if (*v98 < v23) {
        int64_t v100 = v23 - 32; // 0x408a30
        *v22 = v100;
        v99 = v100;
        if (v17 != 1) {
            goto lab_0x408980;
        } else {
            // 0x408a47
            *v18 = v20;
            // 0x4088a0
            v14 = v16;
            v10 = v13;
            goto lab_0x4088a0_3;
        }
    } else {
        // 0x4088f8
        v24 = (int64_t *)(v21 + a6);
        v25 = (int64_t *)(16 * v20 + a1);
        v26 = 56 * v20 + v4;
        if ((char)function_4074d0((char)v26, *v24, *v25) == 0) {
            // break -> 0x408b00
            goto lab_0x408b00;
        }
        int64_t v101 = *(int64_t *)v26 + *(int64_t *)(v26 + 24); // 0x408958
        *v22 = v101 - 32;
        *v98 = v101 - 32 * *(int64_t *)(v26 + 16);
        if (v17 == 1) {
            // 0x408a47
            *v18 = v20;
            // 0x4088a0
            v14 = v16;
            v10 = v13;
            goto lab_0x4088a0_3;
        } else {
            // 0x408954
            v99 = *v22;
            goto lab_0x408980;
        }
    }
  lab_0x408a87:;
    int64_t * v102 = (int64_t *)(v23 + 8); // 0x408a87
    uint64_t v103 = *v102; // 0x408a87
    int64_t v104 = v11; // 0x408a98
    int64_t v105 = v103; // 0x408a98
    int64_t v106 = v8; // 0x408a98
    if (v103 > v11) {
        int64_t v107 = v103; // 0x408d68
        if (v11 != 0) {
            int64_t v108 = 2 * v11; // 0x408d6d
            int64_t v109 = v108; // 0x408d73
            v107 = v108;
            if (v103 > v108) {
                int64_t v110 = v109;
                v107 = v103;
                while (v110 != 0) {
                    int64_t v111 = 2 * v110; // 0x408d80
                    v109 = v111;
                    v107 = v111;
                    if (v103 <= v111) {
                        // break -> 0x408d8d
                        break;
                    }
                    v110 = v109;
                    v107 = v103;
                }
            }
        }
        // 0x408d8d
        free((int64_t *)v8);
        int64_t v112 = function_411210(v107); // 0x408d9f
        v8 = v112;
        v104 = v107;
        v105 = *v102;
        v106 = v112;
    }
    int64_t v113 = *(int64_t *)v23; // 0x408a9e
    memcpy((int64_t *)v106, (int64_t *)v113, (int32_t)v105);
    v15 = v19;
    v12 = v104;
    goto lab_0x4088e6;
  lab_0x408980:;
    int64_t v114 = 1;
    int64_t v115 = 1; // 0x408640
    int64_t v116 = v17; // 0x408640
    int64_t v117; // 0x408640
    int64_t v118; // 0x408640
    uint64_t v119; // 0x4089c4
    int32_t v120; // 0x4089d7
    while (true) {
        // 0x4089c4
        v117 = v115;
        v119 = *(int64_t *)(8 * v117 + v7);
        v120 = function_4082a0(v99, *(int64_t *)(8 * v119 + v5));
        if (v120 >= 0) {
            if (v20 < v119 != (v120 == 0)) {
                // break -> 0x4089b3
                break;
            }
        }
        // 0x4089db
        v115 = (v117 + v114) / 2;
        v116 = v117;
        v118 = v114;
        if (v114 >= v117) {
            // break (via goto) -> 0x4089ea
            goto lab_0x4089ea;
        }
    }
    int64_t v121 = v117 + 1; // 0x4089b3
    int64_t v122 = v116; // 0x4089c2
    v118 = v121;
    while (v121 < v116) {
        // 0x4089c4
        v114 = v121;
        v115 = (v116 + v121) / 2;
        v116 = v122;
        while (true) {
            // 0x4089c4
            v117 = v115;
            v119 = *(int64_t *)(8 * v117 + v7);
            v120 = function_4082a0(v99, *(int64_t *)(8 * v119 + v5));
            if (v120 >= 0) {
                if (v20 < v119 != (v120 == 0)) {
                    // break -> 0x4089b3
                    break;
                }
            }
            // 0x4089db
            v115 = (v117 + v114) / 2;
            v116 = v117;
            v118 = v114;
            if (v114 >= v117) {
                // break (via goto) -> 0x4089ea
                goto lab_0x4089ea;
            }
        }
        // 0x4089b3
        v121 = v117 + 1;
        v122 = v116;
        v118 = v121;
    }
  lab_0x4089ea:;
    int64_t v123 = v118;
    int64_t v124 = v123 - 1; // 0x4089f0
    if (v124 != 0) {
        int64_t v125 = v7 + 8; // 0x408a10
        *(int64_t *)v7 = *(int64_t *)v125;
        while (v125 != 8 * v123 + v9) {
            int64_t v126 = v125;
            v125 = v126 + 8;
            *(int64_t *)v126 = *(int64_t *)v125;
        }
    }
    // 0x408a21
    *(int64_t *)(8 * v124 + v7) = v20;
    // 0x4088a0
    v14 = v16;
    v10 = v13;
    goto lab_0x4088a0_3;
}
// Address range: 0x408e10 - 0x408e20
int64_t function_408e10(int64_t a1) {
    int32_t fd = a1; // 0x408e11
    int64_t fd2; // 0x408e10
    dup2(fd, (int32_t)fd2);
    return close(fd);
}
// Address range: 0x408e20 - 0x409030
int64_t function_408e20(int64_t a1, uint64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = 8 * a2; // 0x408e3e
    if (v1 < 0) {
        // 0x408ff0
        function_411460(v1);
        // UNREACHABLE
    }
    if (a2 >= 0x2000000000000000) {
        // 0x408ff0
        function_411460(v1);
        // UNREACHABLE
    }
    int64_t v2 = function_411210(v1); // 0x408e5a
    *a3 = v2;
    if (a2 == 0) {
        // 0x408f08
        return 0;
    }
    int64_t v3 = 0; // 0x408e8f
    int64_t v4 = a1; // 0x408e20
    int64_t v5; // 0x408e20
    int64_t result; // 0x408e20
    int32_t fd3; // 0x408e20
    while (true) {
      lab_0x408e9c:
        // 0x408e9c
        v5 = v4;
        result = v3;
        int64_t v6 = *(int64_t *)(v5 + 8); // 0x408e9c
        if (v6 == 0) {
            goto lab_0x408e78;
        } else {
            // 0x408ea5
            if (*(char *)(v6 + 12) == 0) {
                goto lab_0x408e78;
            } else {
                int32_t fd = open((char *)(v6 + 13), O_RDONLY); // 0x408ec0
                if (fd < 0) {
                    // 0x408f00
                    *(int64_t *)(8 * result + v2) = 0;
                    return result;
                }
                // 0x408ecc
                int32_t fd2; // bp-64, 0x408e20
                int32_t v7 = function_407a30((int64_t *)&fd2, 9); // 0x408edb
                if (v7 == -1) {
                    int32_t * err_num = __errno_location(); // 0x408ee0
                    if (*err_num != 24) {
                        // 0x408ff5
                        function_40f630(4, (int64_t)g82);
                        error(2, *err_num, dcgettext(NULL, "couldn't create process for %s -d", 5));
                        return &g122;
                    }
                    // 0x408ef1
                    close(fd);
                    *err_num = 24;
                    // 0x408f00
                    *(int64_t *)(8 * result + v2) = 0;
                    return result;
                }
                if (v7 == 0) {
                    // 0x408f9c
                    close(fd2);
                    if (fd == 0) {
                        goto lab_0x408fb4;
                    } else {
                        // 0x408faa
                        function_408e10((int64_t)fd);
                        goto lab_0x408fb4;
                    }
                }
                // 0x408f24
                *(int32_t *)(v6 + 8) = v7;
                int64_t v8; // 0x408e20
                function_406190(v6, 9, (int64_t)a3, a4, v8);
                close(fd);
                close(fd3);
                struct _IO_FILE * v9 = fdopen(fd2, "r"); // 0x408f4f
                if (v9 == NULL) {
                    int32_t * v10 = __errno_location(); // 0x408f77
                    close(fd2);
                    *(int64_t *)(8 * result + v2) = 0;
                    return result;
                }
                // 0x408f59
                *(int64_t *)(8 * result + v2) = (int64_t)v9;
                goto lab_0x408e8f;
            }
        }
    }
  lab_0x408f08_3:
    // 0x408f08
    return result;
  lab_0x408e78:;
    int64_t v11 = function_407cd0(*(int64_t *)v5, (int64_t *)"r"); // 0x408e81
    *(int64_t *)(8 * result + v2) = v11;
    if (v11 == 0) {
        return result2;
    }
    goto lab_0x408e8f;
  lab_0x408e8f:
    // 0x408e8f
    v3 = result + 1;
    v4 = v5 + 16;
    if (v3 == a2) {
        // break -> 0x408f08
        goto lab_0x408f08_3;
    }
    goto lab_0x408e9c;
  lab_0x408fb4:
    if (fd3 == 1) {
        goto lab_0x408fc7;
    } else {
        // 0x408fbd
        function_408e10((int64_t)fd3);
        goto lab_0x408fc7;
    }
  lab_0x408fc7:;
    char * file = g82; // 0x408fc7
    execlp(file, file);
    int32_t v12 = *__errno_location(); // 0x408fe9
    function_4060d0(v12, "couldn't execute compress program (with -d)");
    // UNREACHABLE
}
// Address range: 0x409030 - 0x4090c0
int64_t function_409030(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = (int64_t)a3;
    int64_t v2; // bp-64, 0x409030
    uint64_t result = function_408e20(a1, v1, &v2, a4); // 0x409055
    if (result < v1 != result < 2) {
        // 0x409068
        function_408640(a1, a2, result, a4, a5, v2);
        return result;
    }
    int64_t v3 = *(int64_t *)(16 * result + a1); // 0x4090a3
    return function_405dd0((int64_t)dcgettext(NULL, "open failed", 5), (int64_t *)v3);
}
// Address range: 0x4090c0 - 0x409330
int64_t function_4090c0(int64_t a1, int32_t a2) {
    int64_t str = *(int64_t *)(g90 + 8 * g59); // 0x4090e6
    int32_t len = strlen((char *)str); // 0x4090ed
    int64_t v1 = len; // 0x4090ed
    int64_t result = function_411210(v1 + 32 & -8); // 0x4090fd
    int64_t v2 = result + 13; // 0x409108
    int64_t * v3 = (int64_t *)v2; // 0x409112
    memcpy(v3, (int64_t *)str, len);
    *(int64_t *)(v2 + v1) = 0x58585874726f732f;
    *(int32_t *)(result + 21 + v1) = 0x585858;
    int64_t * v4 = (int64_t *)result; // 0x409135
    *v4 = 0;
    int64_t v5 = g59 + 1; // 0x40913c
    g59 = v5 != (int64_t)g89 ? v5 : 0;
    int64_t set; // bp-192, 0x4090c0
    int64_t v6 = &set; // 0x40915b
    int32_t v7 = pthread_sigmask(SIG_BLOCK, (struct _TYPEDEF___sigset_t *)&g73, (struct _TYPEDEF___sigset_t *)&set); // 0x409167
    int32_t v8 = v7 == 0; // bp-200, 0x409176
    int64_t v9 = function_410680(v2, 0x80000); // 0x40917b
    int32_t * err_num = __errno_location(); // 0x409183
    int32_t fd = v9; // 0x40918b
    int64_t v10; // 0x4090c0
    if (fd < 0) {
        int32_t v11 = *err_num; // 0x409235
        if (v7 == 0) {
            // 0x409278
            function_407880((int64_t *)&v8, 0x80000, v6);
            *err_num = v11;
        }
        // 0x409239
        v10 = str;
        if (v11 == 24) {
            // 0x409242
            v10 = str;
            if ((char)a2 == 1) {
                // 0x40924d
                free(v4);
                // 0x4091f3
                return 0;
            }
        }
    } else {
        // 0x409194
        *(int64_t *)&g29 = result;
        *g29 = result;
        int64_t v12 = str; // 0x4091aa
        if (v7 == 0) {
            uint32_t v13 = *err_num; // 0x409260
            function_407880((int64_t *)&v8, 0x80000, v6);
            *err_num = v13;
            v12 = v13;
        }
        int64_t v14 = v9 & 0xffffffff; // 0x409180
        *(char *)(result + 12) = 0;
        int64_t fd3 = v14; // 0x4091bc
        if (g82 != NULL) {
            int32_t v15 = function_407a30((int64_t *)&v8, 4); // 0x4091cd
            *(int32_t *)(result + 8) = v15;
            int32_t fd2; // 0x4090c0
            if (v15 >= 0 == (v15 != 0)) {
                // 0x409210
                close(fd);
                close(0x1000000 * v8 >> 24);
                int64_t v16; // 0x4090c0
                function_406190(result, 4, v6, v16, v16);
                fd3 = fd2;
            } else {
                // 0x4091d4
                fd3 = v14;
                if (v15 == 0) {
                    // 0x409287
                    close(fd2);
                    if (fd != 1) {
                        // 0x409296
                        function_408e10(v14);
                    }
                    int32_t v17 = 0x1000000 * v8;
                    if (v17 != 0) {
                        // 0x4092ab
                        function_408e10((int64_t)(v17 >> 24));
                    }
                    char * file = g82; // 0x4092b2
                    execlp(file, file);
                    function_4060d0(*err_num, "couldn't execute compress program");
                    // UNREACHABLE
                }
            }
        }
        struct _IO_FILE * v18 = fdopen((int32_t)fd3, "w"); // 0x4091e2
        *(int64_t *)a1 = (int64_t)v18;
        if (v18 != NULL) {
            // 0x4091f3
            return result;
        }
        // 0x4092d2
        function_405dd0((int64_t)dcgettext(NULL, "couldn't create temporary file", 5), v3);
        v10 = v12;
    }
    // 0x4092ee
    function_40f630(4, v10);
    error(2, *err_num, dcgettext(NULL, "cannot create temporary file in %s", 5));
    return &g122;
}
// Address range: 0x409330 - 0x409871
int64_t function_409330(int64_t a1, int32_t a2, int64_t a3, int64_t str) {
    int64_t v1 = a2;
    int64_t v2 = (int64_t)*(int32_t *)&g30; // 0x40934f
    int64_t v3 = a3; // 0x409358
    int64_t v4 = v2; // 0x409358
    int64_t v5 = v1; // 0x409358
    int64_t v6 = v2; // 0x409358
    int64_t v7 = v1; // 0x409358
    int64_t v8 = a3; // 0x409358
    if (v2 >= a3) {
        goto lab_0x40944a;
    } else {
        goto lab_0x409362;
    }
  lab_0x40964e:;
    // 0x40964e
    int64_t v9; // 0x409330
    int64_t v10; // 0x409330
    int64_t v11; // 0x409330
    int64_t v12; // 0x409330
    int64_t v13; // 0x409330
    int64_t v14; // 0x409330
    if (v11 == 0) {
        // 0x409774
        int64_t v15; // bp-352, 0x409330
        int64_t v16 = function_4090c0((int64_t)&v15, 0); // 0x40977b
        int64_t v17 = v16 + 13; // 0x40978a
        function_409030(v10, 0, 1, v15, v17);
        v13 = v15;
        v12 = v16;
        v14 = v17;
    } else {
        // 0x409657
        v13 = v9;
        v12 = v11;
        v14 = v11 + 13;
    }
    // 0x40965b
    int64_t * v18; // 0x409330
    *v18 = v14;
    *(int64_t *)(v10 + 8) = v12;
    int64_t v19 = v13; // 0x409662
    int64_t v20; // 0x409330
    int64_t v21 = v20; // 0x409662
    int64_t v22 = v12; // 0x409662
    goto lab_0x4094c3;
  lab_0x4094c3:;
    // 0x4094c3
    int64_t v23; // 0x409330
    int64_t v24 = v23 + 1; // 0x4094c3
    int64_t v25 = v24; // 0x4094cf
    int64_t v26 = v21; // 0x4094cf
    int64_t v27 = v10 + 16; // 0x4094cf
    int64_t v28 = v22; // 0x4094cf
    int64_t v29 = v19; // 0x4094cf
    int64_t v30 = v22; // 0x4094cf
    int64_t v31; // 0x409330
    if (v24 == v31) {
        goto lab_0x40954d_3;
    }
    goto lab_0x4094d1;
  lab_0x40944a:
    // 0x40944a
    v31 = v8;
    int64_t v55 = v7;
    int64_t v53; // 0x409330
    int64_t v56; // 0x409330
    int64_t v57; // 0x409330
    int64_t v58; // 0x409330
    int64_t v59; // 0x409330
    int64_t v60; // 0x409330
    int64_t v61; // 0x409330
    int64_t v62; // 0x409330
    int64_t v63; // 0x409330
    int64_t v52; // bp-200, 0x409330
    int64_t v49; // bp-344, 0x409330
    int64_t v64; // 0x409330
    int64_t v65; // 0x409330
    if (v31 > v55) {
        int64_t v66 = 16 * v55; // 0x409461
        bool v67; // 0x409330
        int64_t v44 = v67 ? -1 : 1; // 0x4094e1
        v25 = v55;
        v26 = 0;
        v27 = v66 + a1;
        v28 = 0;
        int64_t v40; // 0x4094e1
        uint64_t v48; // 0x4094e6
        while (true) {
          lab_0x4094d1:
            // 0x4094d1
            v11 = v28;
            int64_t v32 = v25; // 0x40953f
            int64_t v33 = v26; // 0x409330
            int64_t v34 = v27; // 0x409330
            int64_t v35; // 0x409330
            while (true) {
                // 0x4094d1
                v10 = v34;
                v35 = v33;
                v23 = v32;
                v18 = (int64_t *)v10;
                int64_t str2 = *v18; // 0x4094d1
                int64_t v36 = str2;
                int64_t v37 = (int64_t)&g19;
                unsigned char v38 = *(char *)v36; // 0x4094e1
                char v39 = *(char *)v37; // 0x4094e1
                v40 = 1;
                char v41 = v39; // 0x4094e1
                bool v42 = false; // 0x4094e1
                while (v38 == v39) {
                    int64_t v43 = v37 + v44; // 0x4094e1
                    int64_t v45 = v36 + v44; // 0x4094e1
                    int64_t v46 = v40; // 0x4094e1
                    v41 = v38;
                    v42 = true;
                    if (v40 == 0) {
                        // break -> 
                        break;
                    }
                    v36 = v45;
                    v37 = v43;
                    v38 = *(char *)v36;
                    v39 = *(char *)v37;
                    v40 = v46 - 1;
                    v41 = v39;
                    v42 = false;
                }
                unsigned char v47 = v41;
                v48 = (int64_t)!((v38 < v47 | v42)) - (int64_t)(v38 < v47);
                if (str != 0) {
                    // 0x4094f2
                    if ((int32_t)v48 != 0 == strcmp((char *)str, (char *)str2) == 0) {
                        // break -> 0x40964e
                        break;
                    }
                }
                if ((char)v35 == 0) {
                    // 0x409667
                    if (__fxstat(1, 1, (struct stat *)&v49) != 0) {
                        // break (via goto) -> 0x40954d
                        goto lab_0x40954d_2;
                    }
                }
                if ((int32_t)v48 == 0) {
                    int64_t v50 = v48 % 256 | v40 & -256; // 0x4094e6
                    int32_t v51 = __fxstat(1, 0, (struct stat *)&v52); // 0x4094a1
                    v19 = v50;
                    v21 = 1;
                    v22 = v11;
                    v53 = v50;
                    if (true == v51 == 0) {
                        goto lab_0x40963b;
                    } else {
                        goto lab_0x4094c3;
                    }
                }
                // 0x40951c
                if (__xstat(1, (char *)*v18, (struct stat *)&v52) == 0) {
                    int64_t v54 = v48 % 256 | v40 & -256; // 0x4094e6
                    v19 = v54;
                    v21 = 1;
                    v22 = v11;
                    v53 = v54;
                    goto lab_0x40963b;
                }
                // 0x40953f
                v32 = v23 + 1;
                v33 = 1;
                v34 = v10 + 16;
                if (v32 == v31) {
                    // break (via goto) -> 0x40954d
                    goto lab_0x40954d_2;
                }
            }
            // 0x40964e
            v9 = v48 % 256 | v40 & -256;
            v20 = v35;
            goto lab_0x40964e;
        }
      lab_0x40954d_2:
        // 0x40954d
        v29 = v48 % 256 | v40 & -256;
        v30 = v11;
      lab_0x40954d_3:
        // 0x40954d
        v65 = v31;
        v63 = v29;
        v62 = str;
        v60 = v66;
        v56 = 0x100000000 * v55 >> 32;
        v58 = v30;
    } else {
        // 0x4097ee
        v65 = v64;
        v63 = v6;
        v62 = v61;
        v60 = v59;
        v56 = v55;
        v58 = v57;
    }
    int64_t v68 = &v52;
    int64_t v69 = v65; // 0x409330
    int64_t v70 = v63; // 0x409330
    int64_t v71 = v62; // 0x409330
    int64_t v72 = v60; // 0x409330
    int64_t v73 = v56; // 0x409330
    int64_t v74 = v31; // 0x409330
    int64_t v75 = v58; // 0x409330
    int64_t v76; // 0x409330
    int64_t v77; // 0x409330
    int64_t v78; // 0x409330
    int64_t v79; // 0x409330
    int64_t v80; // 0x409330
    int64_t v81; // 0x409330
    int64_t v82; // 0x409330
    int64_t v83; // 0x409330
    int64_t v84; // 0x409330
    int64_t v85; // 0x409330
    int64_t v86; // 0x409330
    int64_t v87; // 0x409330
    int64_t v88; // 0x40969a
    while (true) {
        // 0x409560
        v79 = v74;
        v77 = v73;
        int64_t v89 = v70;
        int64_t v90 = function_408e20(a1, v79, (int64_t *)(struct stat *)&v49, v89); // 0x40956b
        if (v79 == v90) {
            // 0x409690
            v88 = function_407cd0(str, (int64_t *)"w");
            if (v88 != 0) {
                // break -> 0x4097c1
                break;
            }
            // 0x4096a8
            if (v79 < 3 | *__errno_location() != 24) {
                // 0x4096bc
                function_405dd0((int64_t)dcgettext(NULL, "open failed", 5), (int64_t *)str);
                v76 = v68;
                v87 = v69;
                v84 = v89;
                v85 = 5;
                v83 = v79;
                v82 = v71;
                v86 = str;
                v81 = v72;
                v78 = v77;
                v80 = v75;
                goto lab_0x4096e0;
            }
        } else {
            if (v90 < 3) {
                int64_t v91 = *(int64_t *)(16 * v90 + a1); // 0x40980d
                int64_t v92 = (int64_t)dcgettext(NULL, "open failed", 5); // 0x409811
                int64_t * v93 = (int64_t *)v91; // 0x40981c
                function_405dd0(v92, v93);
                int64_t v94 = *(int64_t *)(v91 + 8); // 0x409830
                int64_t result = *(int64_t *)(v91 + 24); // 0x409834
                if (*v93 == *(int64_t *)(v91 + 16)) {
                    if (v94 == result || *(int64_t *)(v91 + 40) != 0) {
                        // 0x409857
                        return result;
                    }
                    // 0x40986c
                    return function_406320(v92, v91);
                }
                if (v94 != result || *(int64_t *)(v91 + 48) == 0) {
                    // 0x409846
                    return function_406320(v92, v91);
                }
                // 0x409857
                return result;
            }
        }
        int64_t v95 = a1 - 16 + 16 * v90;
        uint64_t v96 = v90 - 1; // 0x40959d
        int64_t * v97 = (int64_t *)v95;
        function_407df0(*(int64_t *)(v49 + 8 * v96), *v97);
        int64_t v98 = function_4090c0(v68, (int32_t)(v96 >= 3)); // 0x4095c6
        int64_t v99 = v96; // 0x4095ce
        int64_t v100 = v95 - 16; // 0x4095ce
        while (v98 == 0) {
            // 0x409598
            v95 = v100;
            v96 = v99 - 1;
            v97 = (int64_t *)v95;
            function_407df0(*(int64_t *)(v49 + 8 * v96), *v97);
            v98 = function_4090c0(v68, (int32_t)(v96 >= 3));
            v99 = v96;
            v100 = v95 - 16;
        }
        int64_t v101 = v98 + 13; // 0x4095d6
        int64_t v102 = v77 > v96 ? v96 : v77; // 0x4095df
        int64_t v103 = v79 - v96; // 0x4095f9
        function_408640(a1, v102, v96, v52, v101, v49);
        *(int64_t *)a1 = v101;
        *(int64_t *)(a1 + 8) = v98;
        memmove((int64_t *)(a1 + 16), v97, 16 * (int32_t)v103);
        v69 = v101;
        v70 = v52;
        v71 = v95;
        v72 = v49;
        v73 = v77 + 1 - v102;
        v74 = v103 + 1;
        v75 = v102;
    }
    // 0x4097c1
    return function_408640(a1, v77, v79, v88, str, v49);
  lab_0x409362:;
    int64_t v104 = v5;
    int64_t v105 = v3;
    int64_t v106 = v4; // 0x40936a
    int64_t v107 = v4; // 0x40936a
    int64_t v108 = 0; // 0x40936a
    int64_t v109 = 0; // 0x40936a
    int64_t v110 = 0; // 0x40936a
    int64_t v111 = v105; // 0x40936a
    int64_t v112 = a1; // 0x40936a
    int64_t v113 = v104; // 0x40936a
    int64_t v114 = a1; // 0x40936a
    if (v4 <= v105) {
        int64_t v115 = 0; // 0x409330
        int64_t v116 = 0; // 0x409330
        uint64_t v117 = v104;
        int64_t v118 = function_4090c0((int64_t)&v52, 0); // 0x40937a
        uint32_t v119 = *(int32_t *)&g30; // 0x40937f
        uint64_t v120 = (int64_t)v119; // 0x40937f
        int64_t v121 = v118 + 13; // 0x40938b
        int64_t v122 = v117 < v120 ? v117 : v120; // 0x4093a0
        uint64_t v123 = function_409030(16 * v115 + a1, v122, v119, v52, v121); // 0x4093ab
        uint64_t v124 = (int64_t)*(int32_t *)&g30; // 0x4093b7
        int64_t v125 = v123 + v115; // 0x4093c4
        int64_t v126 = v105 - v125; // 0x4093c7
        int64_t v127 = v117 - (v123 > v117 ? v117 : v123); // 0x4093ca
        int64_t v128 = v116 + 1; // 0x4093d0
        int64_t v129 = 16 * v116; // 0x4093d4
        *(int64_t *)(v129 + a1) = v121;
        *(int64_t *)(a1 + 8 + v129) = v118;
        v115 = v125;
        v116 = v128;
        while (v126 >= v124) {
            // 0x409370
            v117 = v127;
            v118 = function_4090c0((int64_t)&v52, 0);
            v119 = *(int32_t *)&g30;
            v120 = (int64_t)v119;
            v121 = v118 + 13;
            v122 = v117 < v120 ? v117 : v120;
            v123 = function_409030(16 * v115 + a1, v122, v119, v52, v121);
            v124 = (int64_t)*(int32_t *)&g30;
            v125 = v123 + v115;
            v126 = v105 - v125;
            v127 = v117 - (v123 > v117 ? v117 : v123);
            v128 = v116 + 1;
            v129 = 16 * v116;
            *(int64_t *)(v129 + a1) = v121;
            *(int64_t *)(a1 + 8 + v129) = v118;
            v115 = v125;
            v116 = v128;
        }
        int64_t v130 = v128 % v124;
        v106 = v124 - v130;
        v107 = v124;
        v108 = v130;
        v109 = v125;
        v110 = v128;
        v111 = v126;
        v112 = 16 * v125 + a1;
        v113 = v127;
        v114 = 16 * v128 + a1;
    }
    int64_t v131 = v114;
    int64_t v132 = v113;
    int64_t v133 = v112;
    int64_t v134 = v111;
    int64_t v135 = v110;
    int64_t v136 = v109;
    int64_t v137 = v105; // 0x40940b
    int64_t v138 = v136; // 0x40940b
    int64_t v139 = v135; // 0x40940b
    int64_t v140 = v133; // 0x40940b
    int64_t v141 = v132; // 0x40940b
    int64_t v142 = v131; // 0x40940b
    if (v134 > v106) {
        // 0x409408
        v76 = &v52;
        v87 = v105;
        v84 = v107;
        v85 = v108;
        v83 = v136;
        v82 = v135;
        v86 = v134;
        v81 = v133;
        v78 = v132;
        v80 = v131;
        goto lab_0x4096e0;
    } else {
        goto lab_0x409411;
    }
  lab_0x409411:;
    int64_t v143 = v141 + v139; // 0x40941b
    int64_t v144 = v139 - v138; // 0x40941e
    int64_t v145 = v144 + v137; // 0x409424
    memmove((int64_t *)v142, (int64_t *)v140, 16 * (int32_t)(v137 - v138));
    int64_t v146 = (int64_t)*(int32_t *)&g30; // 0x409433
    v3 = v145;
    v4 = v146;
    v5 = v143;
    v64 = v145;
    v6 = v146;
    v61 = v144;
    v59 = v140;
    v7 = v143;
    v8 = v145;
    v57 = v142;
    if (v145 > v146) {
        goto lab_0x409362;
    } else {
        goto lab_0x40944a;
    }
  lab_0x4096e0:;
    uint64_t v147 = v78;
    uint64_t v148 = 1 - v84 + v85 + v86; // 0x4096f4
    int64_t v149 = function_4090c0(v76, 0); // 0x4096fc
    int64_t v150 = v149 + 13; // 0x40970e
    int64_t v151 = v148 > v147 ? v147 : v148; // 0x40972d
    uint64_t v152 = function_409030(v81, v151, (int32_t)v148, v52, v150); // 0x409731
    int64_t v153 = v82 + 1; // 0x40974a
    int64_t v154 = v152 + v83; // 0x40974e
    *(int64_t *)v80 = v150;
    *(int64_t *)(v80 + 8) = v149;
    v137 = v87;
    v138 = v154;
    v139 = v153;
    v140 = 16 * v154 + a1;
    v141 = v147 - (v152 > v147 ? v147 : v152);
    v142 = 16 * v153 + a1;
    goto lab_0x409411;
  lab_0x40963b:
    // 0x40963b
    v19 = v53;
    v21 = 1;
    v22 = v11;
    v9 = v53;
    v20 = 1;
    if (v52 != v49) {
        goto lab_0x4094c3;
    } else {
        goto lab_0x40964e;
    }
}
// Address range: 0x409880 - 0x409fdc
int64_t function_409880(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t result) {
    int64_t * v1 = (int64_t *)(a4 + 40); // 0x4098a3
    int64_t v2 = *v1; // 0x4098a3
    int64_t * v3 = (int64_t *)(a4 + 48); // 0x4098a7
    int64_t v4 = *v3; // 0x4098a7
    int64_t thread_func_arg = a1; // bp-120, 0x4098c1
    int64_t v5 = v4; // 0x4098ef
    int64_t v6 = v2; // 0x4098ef
    if (a2 >= 2 && v4 + v2 >= 0x20000) {
        // 0x409f08
        int32_t thread; // bp-128, 0x409880
        int32_t v7 = pthread_create(&thread, NULL, (int64_t * (*)(int64_t *))0x409fe0, &thread_func_arg); // 0x409f19
        v6 = *v1;
        if (v7 == 0) {
            // 0x409f70
            function_409880(a1 - 32 * v6, a2 % 2, a3, *(int64_t *)(a4 + 72), a5, a6, result);
            pthread_join(thread, NULL);
            // 0x409ed5
            return result;
        }
        // 0x409f27
        v5 = *v3;
    }
    int64_t v8 = 32 * v6; // 0x409909
    int64_t v9 = a1 - 32 * a3; // 0x409914
    int64_t v10 = a1 - v8; // 0x409917
    if (v5 >= 2) {
        // 0x409922
        function_408370(v10, v5, v9 - 32 * v6 / 2, 0);
    }
    if (v6 >= 2) {
        // 0x409970
        function_408370(a1, v6, v9, 0);
    }
    // 0x409994
    *(int64_t *)a4 = a1;
    *(int64_t *)(a4 + 8) = v10;
    *(int64_t *)(a4 + 16) = v10;
    *(int64_t *)(a4 + 24) = a1 - 32 * v5 - v8;
    function_406320(a5, a4);
    int64_t * mutex = (int64_t *)(a5 + 8); // 0x4099d5
    int64_t v11 = v6; // 0x4099ca
    int64_t v12; // 0x409880
    int64_t * v13; // 0x409880
    int64_t v14; // 0x409880
    int64_t v15; // 0x409880
    int64_t v16; // 0x409880
    int64_t v17; // 0x409880
    int64_t v18; // 0x409880
    int64_t v19; // 0x409880
    int64_t v20; // 0x409880
    int64_t v21; // 0x409880
    int64_t v22; // 0x409880
    int64_t v23; // 0x409880
    int64_t v24; // 0x409880
    int64_t v25; // 0x409880
    int64_t v26; // 0x409880
    int64_t v27; // 0x409880
    int64_t v28; // 0x409880
    int64_t v29; // 0x409880
    int64_t v30; // 0x409880
    int64_t v31; // 0x409880
    int64_t v32; // 0x409880
    int64_t v33; // 0x409880
    int64_t v34; // 0x409880
    int64_t v35; // 0x409880
    int64_t v36; // 0x409880
    int64_t v37; // 0x409880
    int64_t v38; // 0x409880
    int64_t v39; // 0x409880
    int64_t v40; // 0x409880
    int64_t v41; // 0x409880
    int64_t v42; // 0x409880
    int64_t v43; // 0x409880
    int64_t v44; // 0x409880
    int64_t v45; // 0x409880
    int64_t v46; // 0x409880
    int64_t * mutex2; // 0x409880
    int32_t * v47; // 0x409a1b
    int64_t * v48; // 0x409a33
    int64_t v49; // 0x409a33
    int64_t * v50; // 0x409a36
    int64_t v51; // 0x409a36
    int64_t * v52; // 0x409cb7
    int64_t * v53; // 0x409a4a
    int64_t * v54; // 0x409880
    int64_t v55; // 0x409cbd
    while (true) {
      lab_0x4099d0:
        // 0x4099d0
        v23 = v11;
        pthread_mutex_lock(mutex);
        int64_t v56 = function_40d190(v23); // 0x4099f3
        int64_t v57 = v56; // 0x4099fb
        if (v56 == 0) {
            pthread_cond_wait((int64_t *)(a5 + 48), mutex);
            int64_t v58 = function_40d190(v23); // 0x4099f3
            v57 = v58;
            while (v58 == 0) {
                // 0x4099e0
                pthread_cond_wait((int64_t *)(a5 + 48), mutex);
                v58 = function_40d190(v23);
                v57 = v58;
            }
        }
        // 0x4099fd
        v12 = v57;
        pthread_mutex_unlock(mutex);
        mutex2 = (int64_t *)(v12 + 88);
        pthread_mutex_lock(mutex2);
        v47 = (int32_t *)(v12 + 80);
        uint32_t v59 = *v47; // 0x409a1b
        *(char *)(v12 + 84) = 0;
        if (v59 == 0) {
            // break -> 0x409ec0
            break;
        }
        // 0x409a2a
        v48 = (int64_t *)v12;
        v49 = *v48;
        v50 = (int64_t *)(v12 + 8);
        v51 = *v50;
        int64_t v60 = (a3 >> (2 * (int64_t)v59 + 2 & 62)) + 1; // 0x409a3d
        if (v59 == 1) {
            // 0x409cb7
            v52 = (int64_t *)(v12 + 16);
            v46 = v51;
            v38 = v49;
            v21 = v60;
            if (*v52 == v49) {
                goto lab_0x409d00;
            } else {
                // 0x409cbd
                v54 = (int64_t *)(v12 + 24);
                v45 = v51;
                int64_t v61 = v49;
                int64_t v62 = v60;
                v55 = *v54;
                while (v55 != v45) {
                    if (v62 == 0) {
                        // 0x409e38
                        v35 = v49 - v61 >> 5;
                        v28 = v23;
                        v22 = -1;
                        if (*(int64_t *)(v12 + 48) != v51 - v45 >> 5) {
                            goto lab_0x409d61;
                        } else {
                            goto lab_0x409e7a;
                        }
                    }
                    int32_t v63 = function_4082a0(v61 - 32, v45 - 32); // 0x409cd9
                    if (v63 >= 0 == (v63 != 0)) {
                        int64_t v64 = *v50 - 32; // 0x409c9f
                        *v50 = v64;
                        function_4085d0(v64, a6, result);
                    } else {
                        int64_t v65 = *v48 - 32; // 0x409ceb
                        *v48 = v65;
                        function_4085d0(v65, a6, result);
                    }
                    int64_t v66 = *v48; // 0x409cac
                    int64_t v67 = *v50; // 0x409caf
                    int64_t v68 = v62 - 1; // 0x409cb3
                    v46 = v67;
                    v38 = v66;
                    v21 = v68;
                    if (*v52 == v66) {
                        goto lab_0x409d00;
                    }
                    v45 = v67;
                    v61 = v66;
                    v62 = v68;
                    v55 = *v54;
                }
                int64_t * v69 = (int64_t *)(v12 + 48);
                int64_t v70 = v51 - v45 >> 5; // 0x409d50
                int64_t v71 = v49 - v61 >> 5; // 0x409d54
                v35 = v71;
                v28 = v70;
                v22 = v62;
                if (v70 == *v69) {
                    // 0x409f38
                    if (v62 == 0) {
                        // 0x409fd0
                        v13 = v69;
                        v33 = v71;
                        v41 = v70;
                        v11 = -1;
                        v30 = v70;
                        v17 = *(int64_t *)(v12 + 40);
                        goto lab_0x409b77;
                    } else {
                        goto lab_0x409e7a;
                    }
                } else {
                    goto lab_0x409d61;
                }
            }
        } else {
            // 0x409a4a
            v53 = (int64_t *)(v12 + 32);
            int64_t v72 = *(int64_t *)*v53; // 0x409a54
            int64_t * v73 = (int64_t *)(v12 + 16); // 0x409a86
            int64_t v74 = *v73; // 0x409a86
            v43 = v51;
            v37 = v49;
            v26 = v72;
            v19 = v60;
            if (v74 == v49) {
                goto lab_0x409bb8;
            } else {
                int64_t v75 = v51;
                v36 = v49;
                v25 = v72;
                int64_t v76 = v60;
                v14 = v74;
                while (*(int64_t *)(v12 + 24) != v75) {
                    if (v76 == 0) {
                        int64_t v77 = *(int64_t *)(v12 + 48); // 0x409aee
                        int64_t v78 = *(int64_t *)(v12 + 40); // 0x409af2
                        int64_t v79 = v51 - v75 >> 5; // 0x409b03
                        v39 = v79;
                        v44 = -2;
                        v15 = v78;
                        v42 = v75;
                        v24 = v25;
                        v34 = v49 - v36 >> 5;
                        v31 = v77;
                        v18 = v78;
                        v20 = -1;
                        if (v77 != v79) {
                            goto lab_0x409bdd;
                        } else {
                            goto lab_0x409b1b;
                        }
                    }
                    int64_t v80 = v25 - 32; // 0x409ab9
                    int32_t v81 = function_4082a0(v36 - 32, v75 - 32); // 0x409abd
                    int64_t v82; // 0x409880
                    int64_t v83; // 0x409880
                    if (v81 >= 0 == (v81 != 0)) {
                        int64_t v84 = *v50; // 0x409a60
                        int64_t v85 = v84 - 32; // 0x409a67
                        int128_t v86 = __asm_movdqu(*(int128_t *)v85); // 0x409a67
                        *v50 = v85;
                        __asm_movups(*(int128_t *)v80, v86);
                        __asm_movups(*(int128_t *)(v25 - 16), __asm_movdqu(*(int128_t *)(v84 - 16)));
                        v83 = v85;
                        v82 = *v48;
                    } else {
                        int64_t v87 = *v48; // 0x409ac1
                        int64_t v88 = v87 - 32; // 0x409ac8
                        int128_t v89 = __asm_movdqu(*(int128_t *)v88); // 0x409ac8
                        *v48 = v88;
                        __asm_movups(*(int128_t *)v80, v89);
                        __asm_movups(*(int128_t *)(v25 - 16), __asm_movdqu(*(int128_t *)(v87 - 16)));
                        v83 = *v50;
                        v82 = v88;
                    }
                    int64_t v90 = v82;
                    int64_t v91 = v83;
                    int64_t v92 = v76 - 1; // 0x409a82
                    int64_t v93 = *v73; // 0x409a86
                    int64_t v94 = v80; // 0x409a8d
                    v43 = v91;
                    v37 = v90;
                    v26 = v80;
                    v19 = v92;
                    if (v93 == v90) {
                        goto lab_0x409bb8;
                    }
                    v75 = v91;
                    v36 = v90;
                    v25 = v94;
                    v76 = v92;
                    v14 = v93;
                }
                int64_t v95 = *(int64_t *)(v12 + 48); // 0x409c4e
                int64_t v96 = *(int64_t *)(v12 + 40); // 0x409c52
                int64_t v97 = v51 - v75 >> 5; // 0x409c5c
                int64_t v98 = v49 - v36 >> 5; // 0x409c60
                v42 = v75;
                v24 = v25;
                v34 = v98;
                v31 = v95;
                v18 = v96;
                v20 = v76;
                if (v95 != v97) {
                    goto lab_0x409bdd;
                } else {
                    // 0x409c6d
                    v39 = v97;
                    v44 = v76 - 1;
                    v15 = v96;
                    v32 = v98;
                    v40 = v97;
                    v27 = v25;
                    v29 = v95;
                    v16 = v96;
                    if (v76 != 0) {
                        goto lab_0x409b1b;
                    } else {
                        goto lab_0x409b70;
                    }
                }
            }
        }
    }
    // 0x409ec0
    pthread_mutex_unlock(mutex2);
    // 0x409ed5
    return function_406320(a5, v12);
  lab_0x409d00:;
    int64_t v99 = v46;
    int64_t * v100 = (int64_t *)(v12 + 48);
    int64_t v101 = *v100; // 0x409d03
    int64_t v102 = *(int64_t *)(v12 + 40); // 0x409d07
    int64_t v103 = v49 - v38 >> 5; // 0x409d14
    v13 = v100;
    v33 = v103;
    v41 = v101;
    v11 = v23;
    v30 = v101;
    v17 = v102;
    int64_t * v104; // 0x409880
    int64_t v105; // 0x409880
    int64_t v106; // 0x409880
    int64_t v107; // 0x409880
    int64_t v108; // 0x409880
    int64_t v109; // 0x409880
    int64_t v110; // 0x409880
    int64_t v111; // 0x409880
    int64_t v112; // 0x409880
    int64_t v113; // 0x409880
    int64_t v114; // 0x409880
    if (v51 - v99 >> 5 == v101) {
        goto lab_0x409b77;
    } else {
        // 0x409d25
        v114 = v99;
        v111 = v103;
        v109 = v23;
        v106 = v102;
        if (v103 == v102) {
            int64_t * v115 = (int64_t *)(v12 + 24); // 0x409d6a
            v105 = *v115;
            v104 = v115;
            v113 = v99;
            v112 = v102;
            v110 = v23;
            v107 = v102;
            v108 = v21;
            goto lab_0x409d6a;
        } else {
            goto lab_0x409d2a;
        }
    }
  lab_0x409bb8:;
    int64_t v116 = *(int64_t *)(v12 + 48); // 0x409bbe
    int64_t v117 = *(int64_t *)(v12 + 40); // 0x409bc2
    int64_t v118 = v49 - v37 >> 5; // 0x409bd0
    v32 = v118;
    v40 = v116;
    v27 = v26;
    v29 = v116;
    v16 = v117;
    v42 = v43;
    v24 = v26;
    v34 = v118;
    v31 = v116;
    v18 = v117;
    v20 = v19;
    if (v51 - v43 >> 5 == v116) {
        goto lab_0x409b70;
    } else {
        goto lab_0x409bdd;
    }
  lab_0x409b77:;
    int64_t v119 = v30 - v41; // 0x409b7a
    int64_t * v120 = (int64_t *)(v12 + 40); // 0x409b81
    *v120 = v17 - v33;
    *v13 = v119;
    if (*v47 < 2) {
        // 0x409b9c
        if (v119 == -*v120) {
            // 0x409bf8
            function_406320(a5, *(int64_t *)(v12 + 56));
        }
    } else {
        int64_t * v121 = (int64_t *)(v12 + 56); // 0x409c10
        pthread_mutex_lock((int64_t *)(*v121 + 88));
        pthread_mutex_unlock((int64_t *)(*v121 + 88));
    }
    // 0x409ba6
    pthread_mutex_unlock(mutex2);
    goto lab_0x4099d0;
  lab_0x409d61:;
    int64_t v122 = *(int64_t *)(v12 + 40); // 0x409d61
    v114 = v45;
    v111 = v35;
    v109 = v28;
    v106 = v122;
    v105 = v55;
    v104 = v54;
    v113 = v45;
    v112 = v35;
    v110 = v28;
    v107 = v122;
    v108 = v22;
    if (v35 != v122) {
        goto lab_0x409d2a;
    } else {
        goto lab_0x409d6a;
    }
  lab_0x409b70:
    // 0x409b70
    *(int64_t *)*v53 = v27;
    v13 = (int64_t *)(v12 + 48);
    v33 = v32;
    v41 = v40;
    v11 = v27;
    v30 = v29;
    v17 = v16;
    goto lab_0x409b77;
  lab_0x409bdd:;
    int64_t v123 = v18;
    int64_t v124 = v31;
    int64_t v125 = v34;
    int64_t v126 = v24;
    int64_t v127 = v42;
    if (v125 == v123) {
        int64_t v128 = *(int64_t *)(v12 + 24); // 0x409dd0
        int64_t v129 = v127; // 0x409dd7
        int64_t v130 = v20; // 0x409dd7
        int64_t v131 = v126; // 0x409dd7
        if (v20 != 0 == (v128 != v127)) {
            int64_t v132 = v130;
            int64_t v133 = v129 - 32;
            int128_t v134 = __asm_movdqu(*(int128_t *)v133); // 0x409e02
            int64_t v135 = v131 - 32; // 0x409e06
            *v50 = v133;
            __asm_movups(*(int128_t *)v135, v134);
            int128_t v136 = __asm_movdqu(*(int128_t *)(v129 - 16)); // 0x409e15
            __asm_movups(*(int128_t *)(v131 - 16), v136);
            while (v133 != v128) {
                int64_t v137 = v132 - 1;
                v129 = v133;
                v130 = v137;
                v131 = v135;
                if (v137 == 0) {
                    // 0x409f50
                    v32 = v125;
                    v40 = v51 - v133 >> 5;
                    v27 = v135;
                    v29 = v124;
                    v16 = v125;
                    goto lab_0x409b70;
                }
                v132 = v130;
                v133 = v129 - 32;
                v134 = __asm_movdqu(*(int128_t *)v133);
                v135 = v131 - 32;
                *v50 = v133;
                __asm_movups(*(int128_t *)v135, v134);
                v136 = __asm_movdqu(*(int128_t *)(v129 - 16));
                __asm_movups(*(int128_t *)(v131 - 16), v136);
            }
            // 0x409e24
            v32 = v125;
            v40 = v51 - v133 >> 5;
            v27 = v135;
            v29 = v124;
            v16 = v125;
            goto lab_0x409b70;
        } else {
            goto lab_0x409be6;
        }
    } else {
        goto lab_0x409be6;
    }
  lab_0x409d2a:;
    int64_t * v138 = (int64_t *)(v12 + 48);
    v13 = v138;
    v33 = v111;
    v41 = v51 - v114 >> 5;
    v11 = v109;
    v30 = *v138;
    v17 = v106;
    goto lab_0x409b77;
  lab_0x409e7a:;
    // 0x409e7a
    int64_t v139; // 0x409e91
    while (true) {
        // 0x409e7a
        int64_t v140; // 0x409880
        int64_t v141 = v140;
        int64_t v142; // 0x409880
        int64_t v143 = v142;
        int64_t v144 = v143 - 32; // 0x409e7a
        *v48 = v144;
        function_4085d0(v144, a6, result);
        v139 = *v48;
        int64_t v145 = *v52; // 0x409e94
        if (v139 == v145) {
            // break -> 0x409e9a
            break;
        }
        // 0x409e70
        v142 = v139;
        v140 = v141 - 1;
        if (v141 == 0) {
            // break -> 0x409e9a
            break;
        }
    }
    int64_t v146 = *v50; // 0x409e9d
    int64_t v147 = *(int64_t *)(v12 + 40); // 0x409ea1
    int64_t * v148 = (int64_t *)(v12 + 48);
    int64_t v149 = *v148; // 0x409eab
    v13 = v148;
    v33 = v49 - v139 >> 5;
    v41 = v51 - v146 >> 5;
    int64_t v150; // 0x409880
    v11 = v150;
    v30 = v149;
    v17 = v147;
    goto lab_0x409b77;
  lab_0x409d6a:;
    int64_t v151 = v107;
    int64_t v152 = v112;
    int64_t v153 = v113;
    v114 = v105;
    v111 = v152;
    v109 = v110;
    v106 = v151;
    if (v105 == v153) {
        goto lab_0x409d2a;
    } else {
        int64_t * v154 = v104;
        int64_t v155 = v108 - 1; // 0x409d70
        v114 = v153;
        v111 = v152;
        v109 = -1;
        v106 = v151;
        int64_t v156 = v153; // 0x409d77
        int64_t v157 = v155; // 0x409d77
        if (v108 == 0) {
            goto lab_0x409d2a;
        } else {
            int64_t v158 = v157;
            int64_t v159 = v156 - 32; // 0x409d8a
            *v50 = v159;
            function_4085d0(v159, a6, result);
            int64_t v160 = *v50; // 0x409da2
            while (v160 != *v154) {
                // 0x409d80
                v156 = v160;
                v157 = v158 - 1;
                if (v158 == 0) {
                    // break -> 0x409dac
                    break;
                }
                v158 = v157;
                v159 = v156 - 32;
                *v50 = v159;
                function_4085d0(v159, a6, result);
                v160 = *v50;
            }
            int64_t * v161 = (int64_t *)(v12 + 48);
            v13 = v161;
            v33 = v49 - *v48 >> 5;
            v41 = v51 - v160 >> 5;
            v11 = v155;
            v30 = *v161;
            v17 = *(int64_t *)(v12 + 40);
            goto lab_0x409b77;
        }
    }
  lab_0x409be6:
    // 0x409be6
    v32 = v125;
    v40 = v51 - v127 >> 5;
    v27 = v126;
    v29 = v124;
    v16 = v123;
    goto lab_0x409b70;
  lab_0x409b1b:;
    int64_t v162 = v15;
    int64_t v163 = v39;
    int64_t v164 = v44;
    int64_t v165 = v36 - 32;
    int128_t v166 = __asm_movdqu(*(int128_t *)v165); // 0x409b3a
    int64_t v167 = v25 - 32; // 0x409b3e
    *v48 = v165;
    __asm_movups(*(int128_t *)v167, v166);
    int128_t v168 = __asm_movdqu(*(int128_t *)(v36 - 16)); // 0x409b4c
    __asm_movups(*(int128_t *)(v25 - 16), v168);
    while (v14 != v165) {
        int64_t v169 = v164 - 1; // 0x409b34
        int64_t v170 = v165; // 0x409b34
        int64_t v171 = v167; // 0x409b34
        if (v164 == 0) {
            // 0x409ef0
            v32 = v49 - v165 >> 5;
            v40 = v163;
            v27 = v167;
            v29 = v163;
            v16 = v162;
            goto lab_0x409b70;
        }
        v164 = v169;
        v165 = v170 - 32;
        v166 = __asm_movdqu(*(int128_t *)v165);
        v167 = v171 - 32;
        *v48 = v165;
        __asm_movups(*(int128_t *)v167, v166);
        v168 = __asm_movdqu(*(int128_t *)(v170 - 16));
        __asm_movups(*(int128_t *)(v171 - 16), v168);
    }
    // 0x409b5b
    v32 = v49 - v14 >> 5;
    v40 = v163;
    v27 = v167;
    v29 = v163;
    v16 = v162;
    goto lab_0x409b70;
}
// Address range: 0x409fe0 - 0x40a00a
int64_t function_409fe0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x409fe8
    int64_t v2 = *(int64_t *)(a1 + 8); // 0x409fec
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x409ff0
    int64_t v4 = *(int64_t *)(a1 + 48); // 0x409ff4
    int64_t v5 = *(int64_t *)(a1 + 32); // 0x409ff7
    function_409880(a1, v2, v1, *(int64_t *)(a1 + 24), v5, v3, v4);
    return 0;
}
// Address range: 0x40a010 - 0x40a0c4
int64_t function_40a010(int64_t a1) {
    int32_t v1 = g89; // 0x40a010
    int64_t v2 = v1; // 0x40a010
    int64_t result = g90; // 0x40a022
    if (g88 != v2) {
        // 0x40a02e
        *(int64_t *)(8 * v2 + result) = a1;
        g89 = (int32_t)v2 + 1;
        return result;
    }
    int64_t v3; // 0x40a010
    int64_t v4; // 0x40a010
    if (result == 0) {
        // 0x40a090
        v3 = 16;
        v4 = 128;
        if (v1 != 0) {
            // 0x40a095
            v3 = v2;
            v4 = 8 * v2;
            if (v1 > -1 != v1 > -1) {
                // 0x40a0af
                function_411460(a1);
                // UNREACHABLE
            }
        }
    } else {
        if (v1 <= 0xffffffff) {
            // 0x40a0af
            function_411460(a1);
            // UNREACHABLE
        }
        int64_t v5 = v2 + 1 + v2 / 2; // 0x40a05a
        v3 = v5;
        v4 = 8 * v5;
    }
    // 0x40a067
    g88 = v3;
    int64_t result2 = function_411270(result, v4); // 0x40a071
    g90 = result2;
    int64_t v6 = g89;
    *(int64_t *)(8 * v6 + result2) = a1;
    g89 = (int32_t)v6 + 1;
    return result2;
}
// Address range: 0x40a0d0 - 0x40a63d
int64_t function_40a0d0(int32_t status) {
    // 0x40a0d0
    if (status != 0) {
        // 0x40a0ea
        __fprintf_chk(g55, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40a10f
        exit(status);
        // UNREACHABLE
    }
    // 0x40a116
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n", 5));
    fputs_unlocked(dcgettext(NULL, "Write sorted concatenation of all FILE(s) to standard output.\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "Ordering options:\n\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -b, --ignore-leading-blanks  ignore leading blanks\n  -d, --dictionary-order      consider only blanks and alphanumeric characters\n  -f, --ignore-case           fold lower case to upper case characters\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -g, --general-numeric-sort  compare according to general numerical value\n  -i, --ignore-nonprinting    consider only printable characters\n  -M, --month-sort            compare (unknown) < 'JAN' < ... < 'DEC'\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -h, --human-numeric-sort    compare human readable numbers (e.g., 2K 1G)\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -n, --numeric-sort          compare according to string numerical value\n  -R, --random-sort           shuffle, but group identical keys.  See shuf(1)\n      --random-source=FILE    get random bytes from FILE\n  -r, --reverse               reverse the result of comparisons\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "      --sort=WORD             sort according to WORD:\n                                general-numeric -g, human-numeric -h, month -M,\n                                numeric -n, random -R, version -V\n  -V, --version-sort          natural sort of (version) numbers within text\n\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "Other options:\n\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "      --batch-size=NMERGE   merge at most NMERGE inputs at once;\n                            for more use temp files\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -c, --check, --check=diagnose-first  check for sorted input; do not sort\n  -C, --check=quiet, --check=silent  like -c, but do not report first bad line\n      --compress-program=PROG  compress temporaries with PROG;\n                              decompress them with PROG -d\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "      --debug               annotate the part of the line used to sort,\n                              and warn about questionable usage to stderr\n      --files0-from=F       read input from the files specified by\n                            NUL-terminated names in file F;\n                            If F is - then read names from standard input\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -k, --key=KEYDEF          sort via a key; KEYDEF gives location and type\n  -m, --merge               merge already sorted files; do not sort\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "  -o, --output=FILE         write result to FILE instead of standard output\n  -s, --stable              stabilize sort by disabling last-resort comparison\n  -S, --buffer-size=SIZE    use SIZE for main memory buffer\n", 5), g52);
    __printf_chk(1, dcgettext(NULL, "  -t, --field-separator=SEP  use SEP instead of non-blank to blank transition\n  -T, --temporary-directory=DIR  use DIR for temporaries, not $TMPDIR or %s;\n                              multiple options specify multiple directories\n      --parallel=N          change the number of sorts run concurrently to N\n  -u, --unique              with -c, check for strict ordering;\n                              without -c, output only the first of an equal run\n", 5));
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "\nKEYDEF is F[.C][OPTS][,F[.C][OPTS]] for start and stop position, where F is a\nfield number and C a character position in the field; both are origin 1, and\nthe stop position defaults to the line's end.  If neither -t nor -b is in\neffect, characters in a field are counted from the beginning of the preceding\nwhitespace.  OPTS is one or more single-letter ordering options [bdfgiMhnRrV],\nwhich override global ordering options for that key.  If no key is given, use\nthe entire line as the key.  Use --debug to diagnose incorrect key usage.\n\nSIZE may be followed by the following multiplicative suffixes:\n", 5), g52);
    fputs_unlocked(dcgettext(NULL, "% 1% of memory, b 1, K 1024 (default), and so on for M, G, T, P, E, Z, Y.\n\n*** WARNING ***\nThe locale specified by the environment affects sort order.\nSet LC_ALL=C to get the traditional sort order that uses\nnative byte values.\n", 5), g52);
    int64_t v1 = &g8; // bp-136, 0x40a418
    bool v2; // 0x40a0d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x40a4a0
    int64_t v6 = *(int64_t *)v5; // 0x40a4a4
    int64_t v7 = 5; // 0x40a4aa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sort";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x40a4b6
        char v11 = *(char *)v9; // 0x40a4b6
        char v12 = v11; // 0x40a4b6
        bool v13 = false; // 0x40a4b6
        while (v10 == v11) {
            // 0x40a4ac
            v7--;
            int64_t v14 = v9 + v3; // 0x40a4b6
            int64_t v15 = v8 + v3; // 0x40a4b6
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
            // break -> 0x40a4c2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x40a4c2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40a5d4;
        } else {
            // 0x40a5be
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40a613
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40a524;
            } else {
                goto lab_0x40a5d4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40a524;
        } else {
            // 0x40a50a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40a613
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40a524;
            } else {
                goto lab_0x40a524;
            }
        }
    }
  lab_0x40a5d4:
    // 0x40a5d4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40a564
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40a10f
    exit(status);
    // UNREACHABLE
  lab_0x40a524:
    // 0x40a524
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40a564
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40a10f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x40a640 - 0x40a64a
int64_t function_40a640(void) {
    // 0x40a640
    return function_40a0d0(1);
}
// Address range: 0x40a650 - 0x40a766
int64_t function_40a650(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x40a671
    int32_t len = strlen(str); // 0x40a671
    if (a2 == 0) {
        // 0x40a73d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x40a6d7
    int64_t v4 = a3; // 0x40a650
    int64_t v5 = a2; // 0x40a6de
    int64_t str4; // 0x40a650
    int64_t v6; // 0x40a650
    int32_t v7; // 0x40a650
    int32_t v8; // 0x40a650
    int32_t v9; // 0x40a650
    int64_t v10; // 0x40a650
    int64_t result; // 0x40a650
    int32_t v11; // 0x40a6d3
    char * str2; // 0x40a6f2
    while (true) {
        // 0x40a6e7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x40a6fb
            result = v6;
            if (len == strlen(str2)) {
                // 0x40a73d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x40a70f
                break;
            }
            // 0x40a6a0
            v7 = 1;
            if (a3 != 0) {
                // 0x40a6ae
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x40a6d7
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
    int64_t v12 = v6 + 1; // 0x40a713
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x40a71a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x40a6e7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x40a6e7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x40a6fb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40a73d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x40a70f
                    break;
                }
                // 0x40a6a0
                v7 = 1;
                if (a3 != 0) {
                    // 0x40a6ae
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x40a6d7
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
        // 0x40a70f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x40a728:
    // 0x40a73d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x40a770 - 0x40a7e1
int64_t function_40a770(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x40a770
    if (a3 == -1) {
        // 0x40a7d0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x40a785
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x40a794
    function_40f860(1, (int64_t *)a1);
    function_40f550(0, 8, a2);
    error(0, 0, format);
    return &g122;
}
// Address range: 0x40a7f0 - 0x40a908
int64_t function_40a7f0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40a81d
    fputs_unlocked(v1, g55);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x40a890
        int64_t v5; // 0x40a897
        int64_t v6; // 0x40a8b7
        while (v3 != 0) {
            // 0x40a87b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x40a840
                break;
            }
            // 0x40a88d
            v4 = v3 + 1;
            v5 = function_40f880(v2);
            __fprintf_chk(g55, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x40a8c0
                goto lab_0x40a8c0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x40a843
        int64_t v8 = function_40f880(v2); // 0x40a84d
        __fprintf_chk(g55, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40a86d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40a87b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x40a840
                    break;
                }
                // 0x40a88d
                v4 = v3 + 1;
                v5 = function_40f880(v2);
                __fprintf_chk(g55, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x40a8c0
                    goto lab_0x40a8c0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x40a840
            v7 = v3 + 1;
            v8 = function_40f880(v2);
            __fprintf_chk(g55, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x40a8c0:;
    int64_t v10 = (int64_t)g55; // 0x40a8c0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x40a8c7
    uint64_t result = *v11; // 0x40a8c7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x40a8f0
        return __overflow(g55, 10);
    }
    // 0x40a8d1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x40a910 - 0x40a980
int64_t function_40a910(char * a1, int64_t a2, char ** a3, char * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_40a650(a2, v2, v1, a5); // 0x40a93c
    int64_t result = v3; // 0x40a944
    if (v3 < 0) {
        // 0x40a958
        function_40a770((int64_t)a1, a2, v3);
        function_40a7f0(v2, v1, a5);
        result = -1;
    }
    // 0x40a946
    return result;
}
// Address range: 0x40a980 - 0x40a9cd
int64_t function_40a980(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x40a980
    if (result == 0) {
        // 0x40a9c1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x40a9b8
    int32_t n = a4; // 0x40a9b8
    int64_t v1 = result; // 0x40a9bf
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x40a9c1
        return result;
    }
    int64_t str3 = str2; // 0x40a9bf
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x40a9a0
    int64_t result2 = 0; // 0x40a9ad
    while (v2 != 0) {
        // 0x40a9af
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x40a9c1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x40a9c1
    return result2;
}
// Address range: 0x40a9d0 - 0x40a9d8
int64_t function_40a9d0(int64_t a1) {
    // 0x40a9d0
    g107 = a1;
    int64_t result; // 0x40a9d0
    return result;
}
// Address range: 0x40a9e0 - 0x40a9e8
int64_t function_40a9e0(int64_t a1) {
    // 0x40a9e0
    g106 = a1;
    int64_t result; // 0x40a9e0
    return result;
}
// Address range: 0x40a9f0 - 0x40aa8e
int64_t function_40a9f0(void) {
    // 0x40a9f0
    int32_t * err_num; // 0x40aa06
    if ((int32_t)function_413520((int64_t)g52) == 0) {
        goto lab_0x40aa1c;
    } else {
        // 0x40aa06
        err_num = __errno_location();
        if (g106 == 0) {
            goto lab_0x40aa33;
        } else {
            // 0x40aa17
            if (*err_num != 32) {
                goto lab_0x40aa33;
            } else {
                goto lab_0x40aa1c;
            }
        }
    }
  lab_0x40aa1c:;
    int64_t result = function_413520((int64_t)g55); // 0x40aa23
    if ((int32_t)result == 0) {
        // 0x40aa2c
        return result;
    }
    // 0x40aa6e
    _exit(g41);
    // UNREACHABLE
  lab_0x40aa33:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40aa3f
    if (g107 == 0) {
        // 0x40aa79
        error(0, *err_num, "%s", v1);
    } else {
        // 0x40aa53
        error(0, *err_num, "%s: %s", (char *)function_40f6d0((int64_t)g107), v1);
    }
    // 0x40aa6e
    _exit(g41);
    // UNREACHABLE
}
// Address range: 0x40aa90 - 0x40aabb
int64_t function_40aa90(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    *(int64_t *)(v1 + 16) = 0;
    *a1 = -0x1032547698badcff;
    *(int64_t *)(v1 + 8) = 0x1032547698badcfe;
    *(int32_t *)(v1 + 24) = 0;
    return 0x1032547698badcfe;
}
// Address range: 0x40aac0 - 0x40aada
int64_t function_40aac0(int64_t a1, int64_t result) {
    // 0x40aac0
    int64_t v1; // 0x40aac0
    *(int32_t *)result = (int32_t)v1;
    *(int32_t *)(result + 4) = *(int32_t *)(a1 + 4);
    *(int32_t *)(result + 8) = *(int32_t *)(a1 + 8);
    *(int32_t *)(result + 12) = *(int32_t *)(a1 + 12);
    return result;
}
// Address range: 0x40aae0 - 0x40b24f
int64_t function_40aae0(uint64_t a1, uint64_t a2, int64_t result) {
    int32_t * v1 = (int32_t *)(result + 4); // 0x40aaf7
    int32_t v2 = *v1; // 0x40aaf7
    uint64_t v3 = (a2 & -4) + a1; // 0x40aafb
    int64_t v4; // 0x40aae0
    int32_t v5 = v4;
    int32_t * v6 = (int32_t *)(result + 8); // 0x40ab01
    int32_t v7 = *v6; // 0x40ab01
    int32_t * v8 = (int32_t *)(result + 12); // 0x40ab09
    int32_t v9 = *v8; // 0x40ab09
    uint32_t v10 = (int32_t)a2; // 0x40ab11
    int32_t * v11 = (int32_t *)(result + 16); // 0x40ab19
    uint32_t v12 = *v11 + v10; // 0x40ab19
    int32_t * v13 = (int32_t *)(result + 20); // 0x40ab23
    *v11 = v12;
    *v13 = *v13 + (int32_t)(a2 / 0x100000000) + (int32_t)(v12 < v10);
    int32_t v14 = v5; // 0x40ab36
    int64_t v15 = a1; // 0x40ab36
    int32_t v16 = v5; // 0x40ab36
    int32_t v17 = v9; // 0x40ab36
    int32_t v18 = v7; // 0x40ab36
    int32_t v19 = v2; // 0x40ab36
    if (v3 > a1) {
        int32_t v20 = v7;
        int32_t v21 = v2;
        int32_t v22 = v9;
        int32_t v23 = *(int32_t *)v15; // 0x40ab40
        int32_t v24 = *(int32_t *)(v15 + 4); // 0x40ab4b
        int32_t v25 = *(int32_t *)(v15 + 12); // 0x40ab4e
        int32_t v26 = *(int32_t *)(v15 + 20); // 0x40ab52
        int32_t v27 = *(int32_t *)(v15 + 24); // 0x40ab6e
        int32_t v28 = *(int32_t *)(v15 + 28); // 0x40ab71
        int32_t v29 = *(int32_t *)(v15 + 36); // 0x40ab7d
        int32_t v30 = *(int32_t *)(v15 + 44); // 0x40ab90
        uint32_t v31 = v14 - 0x28955b88 + v23 + ((v20 ^ v22) & v21 ^ v22); // 0x40ab94
        int32_t v32 = (v31 / 0x2000000 | 128 * v31) + v21; // 0x40aba9
        uint32_t v33 = v22 - 0x173848aa + v24 + (v32 & (v20 ^ v21) ^ v20); // 0x40abb7
        int32_t v34 = *(int32_t *)(v15 + 8); // 0x40abb9
        int32_t v35 = (v33 / 0x100000 | 0x1000 * v33) + v32; // 0x40abbf
        uint32_t v36 = v20 + 0x242070db + v34 + (v35 & (v32 ^ v21) ^ v21); // 0x40abdb
        int32_t v37 = *(int32_t *)(v15 + 16); // 0x40abe0
        int32_t v38 = (v36 / 0x8000 | 0x20000 * v36) + v35; // 0x40abe7
        uint32_t v39 = v21 - 0x3e423112 + v25 + (v38 & (v35 ^ v32) ^ v32); // 0x40abf2
        int32_t v40 = *(int32_t *)(v15 + 60); // 0x40abfe
        int32_t v41 = (v39 / 1024 | 0x400000 * v39) + v38; // 0x40ac07
        uint32_t v42 = v32 - 0xa83f051 + v37 + (v41 & (v38 ^ v35) ^ v35); // 0x40ac0d
        int32_t v43 = (v42 / 0x2000000 | 128 * v42) + v41; // 0x40ac26
        uint32_t v44 = v26 + 0x4787c62a + v35 + (v43 & (v41 ^ v38) ^ v38); // 0x40ac2c
        int32_t v45 = (v44 / 0x100000 | 0x1000 * v44) + v43; // 0x40ac3c
        uint32_t v46 = v27 - 0x57cfb9ed + v38 + (v45 & (v43 ^ v41) ^ v41); // 0x40ac48
        int32_t v47 = *(int32_t *)(v15 + 32); // 0x40ac54
        int32_t v48 = (v46 / 0x8000 | 0x20000 * v46) + v45; // 0x40ac5a
        uint32_t v49 = v28 - 0x2b96aff + v41 + (v48 & (v45 ^ v43) ^ v43); // 0x40ac64
        int32_t v50 = *(int32_t *)(v15 + 48); // 0x40ac6f
        int32_t v51 = (v49 / 1024 | 0x400000 * v49) + v48; // 0x40ac77
        uint32_t v52 = v47 + 0x698098d8 + v43 + (v51 & (v48 ^ v45) ^ v45); // 0x40ac7d
        int32_t v53 = *(int32_t *)(v15 + 56); // 0x40ac89
        int32_t v54 = (v52 / 0x2000000 | 128 * v52) + v51; // 0x40ac92
        uint32_t v55 = v29 - 0x74bb0851 + v45 + (v54 & (v51 ^ v48) ^ v48); // 0x40ac98
        int32_t v56 = *(int32_t *)(v15 + 40); // 0x40ac9a
        int32_t v57 = (v55 / 0x100000 | 0x1000 * v55) + v54; // 0x40acad
        uint32_t v58 = v56 - 0xa44f + v48 + (v57 & (v54 ^ v51) ^ v51); // 0x40acb5
        int32_t v59 = *(int32_t *)(v15 + 52); // 0x40acc1
        v15 += 64;
        int32_t v60 = (v58 / 0x8000 | 0x20000 * v58) + v57; // 0x40acce
        uint32_t v61 = v30 - 0x76a32842 + v51 + (v60 & (v57 ^ v54) ^ v54); // 0x40acd4
        int32_t v62 = (v61 / 1024 | 0x400000 * v61) + v60; // 0x40ace4
        uint32_t v63 = v50 + 0x6b901122 + v54 + (v62 & (v60 ^ v57) ^ v57); // 0x40acea
        int32_t v64 = (v63 / 0x2000000 | 128 * v63) + v62; // 0x40acfb
        uint32_t v65 = v59 - 0x2678e6d + v57 + (v64 & (v62 ^ v60) ^ v60); // 0x40ad01
        int32_t v66 = (v65 / 0x100000 | 0x1000 * v65) + v64; // 0x40ad12
        uint32_t v67 = v53 - 0x5986bc72 + v60 + (v66 & (v64 ^ v62) ^ v62); // 0x40ad18
        int32_t v68 = (v67 / 0x8000 | 0x20000 * v67) + v66; // 0x40ad29
        uint32_t v69 = v40 + 0x49b40821 + v62 + (v68 & (v66 ^ v64) ^ v64); // 0x40ad2f
        int32_t v70 = (v69 / 1024 | 0x400000 * v69) + v68; // 0x40ad38
        uint32_t v71 = v24 - 0x9e1da9e + v64 + ((v70 ^ v68) & v66 ^ v68); // 0x40ad49
        int32_t v72 = (v71 / 0x8000000 | 32 * v71) + v70; // 0x40ad58
        uint32_t v73 = v27 - 0x3fbf4cc0 + v66 + ((v72 ^ v70) & v68 ^ v70); // 0x40ad60
        int32_t v74 = (v73 / 0x800000 | 512 * v73) + v72; // 0x40ad69
        uint32_t v75 = v30 + 0x265e5a51 + v68 + ((v74 ^ v72) & v70 ^ v72); // 0x40ad7a
        int32_t v76 = (v75 / 0x40000 | 0x4000 * v75) + v74; // 0x40ad89
        uint32_t v77 = v23 - 0x16493856 + v70 + ((v76 ^ v74) & v72 ^ v74); // 0x40ad91
        int32_t v78 = (v77 / 0x1000 | 0x100000 * v77) + v76; // 0x40ad9a
        uint32_t v79 = v26 - 0x29d0efa3 + v72 + ((v78 ^ v76) & v74 ^ v76); // 0x40adab
        int32_t v80 = (v79 / 0x8000000 | 32 * v79) + v78; // 0x40adb4
        uint32_t v81 = v56 + 0x2441453 + v74 + ((v80 ^ v78) & v76 ^ v78); // 0x40adc5
        int32_t v82 = (v81 / 0x800000 | 512 * v81) + v80; // 0x40add4
        uint32_t v83 = v40 - 0x275e197f + v76 + ((v82 ^ v80) & v78 ^ v80); // 0x40addc
        int32_t v84 = (v83 / 0x40000 | 0x4000 * v83) + v82; // 0x40adea
        uint32_t v85 = v37 - 0x182c0438 + v78 + ((v84 ^ v82) & v80 ^ v82); // 0x40adfb
        int32_t v86 = (v85 / 0x1000 | 0x100000 * v85) + v84; // 0x40ae0f
        uint32_t v87 = v29 + 0x21e1cde6 + v80 + ((v86 ^ v84) & v82 ^ v84); // 0x40ae17
        int32_t v88 = (v87 / 0x8000000 | 32 * v87) + v86; // 0x40ae26
        uint32_t v89 = v53 - 0x3cc8f82a + v82 + ((v88 ^ v86) & v84 ^ v86); // 0x40ae2e
        int32_t v90 = (v89 / 0x800000 | 512 * v89) + v88; // 0x40ae37
        uint32_t v91 = v25 - 0xb2af279 + v84 + ((v90 ^ v88) & v86 ^ v88); // 0x40ae53
        int32_t v92 = (v91 / 0x40000 | 0x4000 * v91) + v90; // 0x40ae58
        uint32_t v93 = v47 + 0x455a14ed + v86 + ((v92 ^ v90) & v88 ^ v90); // 0x40ae64
        int32_t v94 = (v93 / 0x1000 | 0x100000 * v93) + v92; // 0x40ae73
        uint32_t v95 = v59 - 0x561c16fb + v88 + ((v94 ^ v92) & v90 ^ v92); // 0x40ae88
        int32_t v96 = (v95 / 0x8000000 | 32 * v95) + v94; // 0x40ae91
        uint32_t v97 = v34 - 0x3105c08 + v90 + ((v96 ^ v94) & v92 ^ v94); // 0x40aeaa
        int32_t v98 = (v97 / 0x800000 | 512 * v97) + v96; // 0x40aeb1
        uint32_t v99 = v28 + 0x676f02d9 + v92 + ((v98 ^ v96) & v94 ^ v96); // 0x40aeb9
        int32_t v100 = (v99 / 0x40000 | 0x4000 * v99) + v98; // 0x40aec0
        int32_t v101 = v100 ^ v98; // 0x40aec2
        uint32_t v102 = v50 - 0x72d5b376 + v94 + (v101 & v96 ^ v98); // 0x40aed4
        int32_t v103 = (v102 / 0x1000 | 0x100000 * v102) + v100; // 0x40aee3
        uint32_t v104 = v26 - 0x5c6be + v96 + (v103 ^ v101); // 0x40aee7
        int32_t v105 = (v104 / 0x10000000 | 16 * v104) + v103; // 0x40aef9
        int32_t v106 = v105 ^ v103;
        uint32_t v107 = v47 - 0x788e097f + v98 + (v106 ^ v100); // 0x40aeff
        int32_t v108 = (v107 / 0x200000 | 2048 * v107) + v105; // 0x40af11
        uint32_t v109 = v30 + 0x6d9d6122 + v100 + (v108 ^ v106); // 0x40af1f
        int32_t v110 = (v109 / 0x10000 | 0x10000 * v109) + v108; // 0x40af28
        int32_t v111 = v110 ^ v108;
        uint32_t v112 = v53 - 0x21ac7f4 + v103 + (v111 ^ v105); // 0x40af2f
        int32_t v113 = (v112 / 512 | 0x800000 * v112) + v110; // 0x40af41
        uint32_t v114 = v24 - 0x5b4115bc + v105 + (v111 ^ v113); // 0x40af52
        int32_t v115 = (v114 / 0x10000000 | 16 * v114) + v113; // 0x40af5b
        uint32_t v116 = v37 + 0x4bdecfa9 + v108 + (v113 ^ v110 ^ v115); // 0x40af69
        int32_t v117 = (v116 / 0x200000 | 2048 * v116) + v115; // 0x40af72
        uint32_t v118 = v28 - 0x944b4a0 + v110 + (v115 ^ v113 ^ v117); // 0x40af76
        int32_t v119 = (v118 / 0x10000 | 0x10000 * v118) + v117; // 0x40af88
        uint32_t v120 = v56 - 0x41404390 + v113 + (v117 ^ v115 ^ v119); // 0x40af8e
        int32_t v121 = (v120 / 512 | 0x800000 * v120) + v119; // 0x40afa7
        uint32_t v122 = v59 + 0x289b7ec6 + v115 + (v119 ^ v117 ^ v121); // 0x40afae
        int32_t v123 = (v122 / 0x10000000 | 16 * v122) + v121; // 0x40afb7
        uint32_t v124 = v23 - 0x155ed806 + v117 + (v121 ^ v119 ^ v123); // 0x40afbe
        int32_t v125 = (v124 / 0x200000 | 2048 * v124) + v123; // 0x40afc7
        uint32_t v126 = v25 - 0x2b10cf7b + v119 + (v123 ^ v121 ^ v125); // 0x40afd5
        int32_t v127 = (v126 / 0x10000 | 0x10000 * v126) + v125; // 0x40afe7
        uint32_t v128 = v27 + 0x4881d05 + v121 + (v125 ^ v123 ^ v127); // 0x40afed
        int32_t v129 = (v128 / 512 | 0x800000 * v128) + v127; // 0x40afff
        uint32_t v130 = v29 - 0x262b2fc7 + v123 + (v127 ^ v125 ^ v129); // 0x40b00f
        int32_t v131 = (v130 / 0x10000000 | 16 * v130) + v129; // 0x40b016
        uint32_t v132 = v50 - 0x1924661b + v125 + (v129 ^ v127 ^ v131); // 0x40b01f
        int32_t v133 = (v132 / 0x200000 | 2048 * v132) + v131; // 0x40b034
        uint32_t v134 = v40 + 0x1fa27cf8 + v127 + (v131 ^ v129 ^ v133); // 0x40b038
        int32_t v135 = (v134 / 0x10000 | 0x10000 * v134) + v133; // 0x40b04a
        uint32_t v136 = v34 - 0x3b53a99b + v129 + (v133 ^ v131 ^ v135); // 0x40b050
        int32_t v137 = (v136 / 512 | 0x800000 * v136) + v135; // 0x40b066
        uint32_t v138 = v23 - 0xbd6ddbc + v131 + ((v137 | -1 - v133) ^ v135); // 0x40b06c
        int32_t v139 = (v138 / 0x4000000 | 64 * v138) + v137; // 0x40b087
        uint32_t v140 = v28 + 0x432aff97 + v133 + ((v139 | -1 - v135) ^ v137); // 0x40b096
        int32_t v141 = (v140 / 0x400000 | 1024 * v140) + v139; // 0x40b09f
        uint32_t v142 = v53 - 0x546bdc59 + v135 + ((v141 | -1 - v137) ^ v139); // 0x40b0ab
        int32_t v143 = (v142 / 0x20000 | 0x8000 * v142) + v141; // 0x40b0c0
        uint32_t v144 = v26 - 0x36c5fc7 + v137 + ((v143 | -1 - v139) ^ v141); // 0x40b0c6
        int32_t v145 = (v144 / 2048 | 0x200000 * v144) + v143; // 0x40b0d9
        uint32_t v146 = v50 + 0x655b59c3 + v139 + ((v145 | -1 - v141) ^ v143); // 0x40b0df
        int32_t v147 = (v146 / 0x4000000 | 64 * v146) + v145; // 0x40b0ef
        uint32_t v148 = v25 - 0x70f3336e + v141 + ((v147 | -1 - v143) ^ v145); // 0x40b0fb
        int32_t v149 = (v148 / 0x400000 | 1024 * v148) + v147; // 0x40b10d
        uint32_t v150 = v56 - 0x100b83 + v143 + ((v149 | -1 - v145) ^ v147); // 0x40b115
        int32_t v151 = (v150 / 0x20000 | 0x8000 * v150) + v149; // 0x40b12b
        uint32_t v152 = v24 - 0x7a7ba22f + v145 + ((v151 | -1 - v147) ^ v149); // 0x40b133
        int32_t v153 = (v152 / 2048 | 0x200000 * v152) + v151; // 0x40b14b
        uint32_t v154 = v47 + 0x6fa87e4f + v147 + ((v153 | -1 - v149) ^ v151); // 0x40b151
        int32_t v155 = (v154 / 0x4000000 | 64 * v154) + v153; // 0x40b165
        uint32_t v156 = v40 - 0x1d31920 + v149 + ((v155 | -1 - v151) ^ v153); // 0x40b16b
        int32_t v157 = (v156 / 0x400000 | 1024 * v156) + v155; // 0x40b18c
        uint32_t v158 = v27 - 0x5cfebcec + v151 + ((v157 | -1 - v153) ^ v155); // 0x40b1a0
        int32_t v159 = (v158 / 0x20000 | 0x8000 * v158) + v157; // 0x40b1ab
        uint32_t v160 = v59 + 0x4e0811a1 + v153 + ((v159 | -1 - v155) ^ v157); // 0x40b1b9
        int32_t v161 = (v160 / 2048 | 0x200000 * v160) + v159; // 0x40b1c1
        uint32_t v162 = v37 - 0x8ac817e + v155 + ((v161 | -1 - v157) ^ v159); // 0x40b1c7
        int32_t v163 = (v162 / 0x4000000 | 64 * v162) + v161; // 0x40b1d0
        uint32_t v164 = v30 - 0x42c50dcb + v157 + ((v163 | -1 - v159) ^ v161); // 0x40b1d6
        int32_t v165 = (v164 / 0x400000 | 1024 * v164) + v163; // 0x40b1e8
        uint32_t v166 = v34 + 0x2ad7d2bb + v159 + ((v165 | -1 - v161) ^ v163); // 0x40b1f8
        int32_t v167 = (v166 / 0x20000 | 0x8000 * v166) + v165; // 0x40b201
        uint32_t v168 = v29 - 0x14792c6f + v161 + ((v167 | -1 - v163) ^ v165); // 0x40b207
        v14 += v163;
        int32_t v169 = v167 + v20; // 0x40b212
        int32_t v170 = v167 + v21 + (v168 / 2048 | 0x200000 * v168); // 0x40b215
        int32_t v171 = v165 + v22; // 0x40b218
        v16 = v14;
        v17 = v171;
        v18 = v169;
        v19 = v170;
        while (v3 > v15) {
            // 0x40ab40
            v20 = v169;
            v21 = v170;
            v22 = v171;
            v23 = *(int32_t *)v15;
            v24 = *(int32_t *)(v15 + 4);
            v25 = *(int32_t *)(v15 + 12);
            v26 = *(int32_t *)(v15 + 20);
            v27 = *(int32_t *)(v15 + 24);
            v28 = *(int32_t *)(v15 + 28);
            v29 = *(int32_t *)(v15 + 36);
            v30 = *(int32_t *)(v15 + 44);
            v31 = v14 - 0x28955b88 + v23 + ((v20 ^ v22) & v21 ^ v22);
            v32 = (v31 / 0x2000000 | 128 * v31) + v21;
            v33 = v22 - 0x173848aa + v24 + (v32 & (v20 ^ v21) ^ v20);
            v34 = *(int32_t *)(v15 + 8);
            v35 = (v33 / 0x100000 | 0x1000 * v33) + v32;
            v36 = v20 + 0x242070db + v34 + (v35 & (v32 ^ v21) ^ v21);
            v37 = *(int32_t *)(v15 + 16);
            v38 = (v36 / 0x8000 | 0x20000 * v36) + v35;
            v39 = v21 - 0x3e423112 + v25 + (v38 & (v35 ^ v32) ^ v32);
            v40 = *(int32_t *)(v15 + 60);
            v41 = (v39 / 1024 | 0x400000 * v39) + v38;
            v42 = v32 - 0xa83f051 + v37 + (v41 & (v38 ^ v35) ^ v35);
            v43 = (v42 / 0x2000000 | 128 * v42) + v41;
            v44 = v26 + 0x4787c62a + v35 + (v43 & (v41 ^ v38) ^ v38);
            v45 = (v44 / 0x100000 | 0x1000 * v44) + v43;
            v46 = v27 - 0x57cfb9ed + v38 + (v45 & (v43 ^ v41) ^ v41);
            v47 = *(int32_t *)(v15 + 32);
            v48 = (v46 / 0x8000 | 0x20000 * v46) + v45;
            v49 = v28 - 0x2b96aff + v41 + (v48 & (v45 ^ v43) ^ v43);
            v50 = *(int32_t *)(v15 + 48);
            v51 = (v49 / 1024 | 0x400000 * v49) + v48;
            v52 = v47 + 0x698098d8 + v43 + (v51 & (v48 ^ v45) ^ v45);
            v53 = *(int32_t *)(v15 + 56);
            v54 = (v52 / 0x2000000 | 128 * v52) + v51;
            v55 = v29 - 0x74bb0851 + v45 + (v54 & (v51 ^ v48) ^ v48);
            v56 = *(int32_t *)(v15 + 40);
            v57 = (v55 / 0x100000 | 0x1000 * v55) + v54;
            v58 = v56 - 0xa44f + v48 + (v57 & (v54 ^ v51) ^ v51);
            v59 = *(int32_t *)(v15 + 52);
            v15 += 64;
            v60 = (v58 / 0x8000 | 0x20000 * v58) + v57;
            v61 = v30 - 0x76a32842 + v51 + (v60 & (v57 ^ v54) ^ v54);
            v62 = (v61 / 1024 | 0x400000 * v61) + v60;
            v63 = v50 + 0x6b901122 + v54 + (v62 & (v60 ^ v57) ^ v57);
            v64 = (v63 / 0x2000000 | 128 * v63) + v62;
            v65 = v59 - 0x2678e6d + v57 + (v64 & (v62 ^ v60) ^ v60);
            v66 = (v65 / 0x100000 | 0x1000 * v65) + v64;
            v67 = v53 - 0x5986bc72 + v60 + (v66 & (v64 ^ v62) ^ v62);
            v68 = (v67 / 0x8000 | 0x20000 * v67) + v66;
            v69 = v40 + 0x49b40821 + v62 + (v68 & (v66 ^ v64) ^ v64);
            v70 = (v69 / 1024 | 0x400000 * v69) + v68;
            v71 = v24 - 0x9e1da9e + v64 + ((v70 ^ v68) & v66 ^ v68);
            v72 = (v71 / 0x8000000 | 32 * v71) + v70;
            v73 = v27 - 0x3fbf4cc0 + v66 + ((v72 ^ v70) & v68 ^ v70);
            v74 = (v73 / 0x800000 | 512 * v73) + v72;
            v75 = v30 + 0x265e5a51 + v68 + ((v74 ^ v72) & v70 ^ v72);
            v76 = (v75 / 0x40000 | 0x4000 * v75) + v74;
            v77 = v23 - 0x16493856 + v70 + ((v76 ^ v74) & v72 ^ v74);
            v78 = (v77 / 0x1000 | 0x100000 * v77) + v76;
            v79 = v26 - 0x29d0efa3 + v72 + ((v78 ^ v76) & v74 ^ v76);
            v80 = (v79 / 0x8000000 | 32 * v79) + v78;
            v81 = v56 + 0x2441453 + v74 + ((v80 ^ v78) & v76 ^ v78);
            v82 = (v81 / 0x800000 | 512 * v81) + v80;
            v83 = v40 - 0x275e197f + v76 + ((v82 ^ v80) & v78 ^ v80);
            v84 = (v83 / 0x40000 | 0x4000 * v83) + v82;
            v85 = v37 - 0x182c0438 + v78 + ((v84 ^ v82) & v80 ^ v82);
            v86 = (v85 / 0x1000 | 0x100000 * v85) + v84;
            v87 = v29 + 0x21e1cde6 + v80 + ((v86 ^ v84) & v82 ^ v84);
            v88 = (v87 / 0x8000000 | 32 * v87) + v86;
            v89 = v53 - 0x3cc8f82a + v82 + ((v88 ^ v86) & v84 ^ v86);
            v90 = (v89 / 0x800000 | 512 * v89) + v88;
            v91 = v25 - 0xb2af279 + v84 + ((v90 ^ v88) & v86 ^ v88);
            v92 = (v91 / 0x40000 | 0x4000 * v91) + v90;
            v93 = v47 + 0x455a14ed + v86 + ((v92 ^ v90) & v88 ^ v90);
            v94 = (v93 / 0x1000 | 0x100000 * v93) + v92;
            v95 = v59 - 0x561c16fb + v88 + ((v94 ^ v92) & v90 ^ v92);
            v96 = (v95 / 0x8000000 | 32 * v95) + v94;
            v97 = v34 - 0x3105c08 + v90 + ((v96 ^ v94) & v92 ^ v94);
            v98 = (v97 / 0x800000 | 512 * v97) + v96;
            v99 = v28 + 0x676f02d9 + v92 + ((v98 ^ v96) & v94 ^ v96);
            v100 = (v99 / 0x40000 | 0x4000 * v99) + v98;
            v101 = v100 ^ v98;
            v102 = v50 - 0x72d5b376 + v94 + (v101 & v96 ^ v98);
            v103 = (v102 / 0x1000 | 0x100000 * v102) + v100;
            v104 = v26 - 0x5c6be + v96 + (v103 ^ v101);
            v105 = (v104 / 0x10000000 | 16 * v104) + v103;
            v106 = v105 ^ v103;
            v107 = v47 - 0x788e097f + v98 + (v106 ^ v100);
            v108 = (v107 / 0x200000 | 2048 * v107) + v105;
            v109 = v30 + 0x6d9d6122 + v100 + (v108 ^ v106);
            v110 = (v109 / 0x10000 | 0x10000 * v109) + v108;
            v111 = v110 ^ v108;
            v112 = v53 - 0x21ac7f4 + v103 + (v111 ^ v105);
            v113 = (v112 / 512 | 0x800000 * v112) + v110;
            v114 = v24 - 0x5b4115bc + v105 + (v111 ^ v113);
            v115 = (v114 / 0x10000000 | 16 * v114) + v113;
            v116 = v37 + 0x4bdecfa9 + v108 + (v113 ^ v110 ^ v115);
            v117 = (v116 / 0x200000 | 2048 * v116) + v115;
            v118 = v28 - 0x944b4a0 + v110 + (v115 ^ v113 ^ v117);
            v119 = (v118 / 0x10000 | 0x10000 * v118) + v117;
            v120 = v56 - 0x41404390 + v113 + (v117 ^ v115 ^ v119);
            v121 = (v120 / 512 | 0x800000 * v120) + v119;
            v122 = v59 + 0x289b7ec6 + v115 + (v119 ^ v117 ^ v121);
            v123 = (v122 / 0x10000000 | 16 * v122) + v121;
            v124 = v23 - 0x155ed806 + v117 + (v121 ^ v119 ^ v123);
            v125 = (v124 / 0x200000 | 2048 * v124) + v123;
            v126 = v25 - 0x2b10cf7b + v119 + (v123 ^ v121 ^ v125);
            v127 = (v126 / 0x10000 | 0x10000 * v126) + v125;
            v128 = v27 + 0x4881d05 + v121 + (v125 ^ v123 ^ v127);
            v129 = (v128 / 512 | 0x800000 * v128) + v127;
            v130 = v29 - 0x262b2fc7 + v123 + (v127 ^ v125 ^ v129);
            v131 = (v130 / 0x10000000 | 16 * v130) + v129;
            v132 = v50 - 0x1924661b + v125 + (v129 ^ v127 ^ v131);
            v133 = (v132 / 0x200000 | 2048 * v132) + v131;
            v134 = v40 + 0x1fa27cf8 + v127 + (v131 ^ v129 ^ v133);
            v135 = (v134 / 0x10000 | 0x10000 * v134) + v133;
            v136 = v34 - 0x3b53a99b + v129 + (v133 ^ v131 ^ v135);
            v137 = (v136 / 512 | 0x800000 * v136) + v135;
            v138 = v23 - 0xbd6ddbc + v131 + ((v137 | -1 - v133) ^ v135);
            v139 = (v138 / 0x4000000 | 64 * v138) + v137;
            v140 = v28 + 0x432aff97 + v133 + ((v139 | -1 - v135) ^ v137);
            v141 = (v140 / 0x400000 | 1024 * v140) + v139;
            v142 = v53 - 0x546bdc59 + v135 + ((v141 | -1 - v137) ^ v139);
            v143 = (v142 / 0x20000 | 0x8000 * v142) + v141;
            v144 = v26 - 0x36c5fc7 + v137 + ((v143 | -1 - v139) ^ v141);
            v145 = (v144 / 2048 | 0x200000 * v144) + v143;
            v146 = v50 + 0x655b59c3 + v139 + ((v145 | -1 - v141) ^ v143);
            v147 = (v146 / 0x4000000 | 64 * v146) + v145;
            v148 = v25 - 0x70f3336e + v141 + ((v147 | -1 - v143) ^ v145);
            v149 = (v148 / 0x400000 | 1024 * v148) + v147;
            v150 = v56 - 0x100b83 + v143 + ((v149 | -1 - v145) ^ v147);
            v151 = (v150 / 0x20000 | 0x8000 * v150) + v149;
            v152 = v24 - 0x7a7ba22f + v145 + ((v151 | -1 - v147) ^ v149);
            v153 = (v152 / 2048 | 0x200000 * v152) + v151;
            v154 = v47 + 0x6fa87e4f + v147 + ((v153 | -1 - v149) ^ v151);
            v155 = (v154 / 0x4000000 | 64 * v154) + v153;
            v156 = v40 - 0x1d31920 + v149 + ((v155 | -1 - v151) ^ v153);
            v157 = (v156 / 0x400000 | 1024 * v156) + v155;
            v158 = v27 - 0x5cfebcec + v151 + ((v157 | -1 - v153) ^ v155);
            v159 = (v158 / 0x20000 | 0x8000 * v158) + v157;
            v160 = v59 + 0x4e0811a1 + v153 + ((v159 | -1 - v155) ^ v157);
            v161 = (v160 / 2048 | 0x200000 * v160) + v159;
            v162 = v37 - 0x8ac817e + v155 + ((v161 | -1 - v157) ^ v159);
            v163 = (v162 / 0x4000000 | 64 * v162) + v161;
            v164 = v30 - 0x42c50dcb + v157 + ((v163 | -1 - v159) ^ v161);
            v165 = (v164 / 0x400000 | 1024 * v164) + v163;
            v166 = v34 + 0x2ad7d2bb + v159 + ((v165 | -1 - v161) ^ v163);
            v167 = (v166 / 0x20000 | 0x8000 * v166) + v165;
            v168 = v29 - 0x14792c6f + v161 + ((v167 | -1 - v163) ^ v165);
            v14 += v163;
            v169 = v167 + v20;
            v170 = v167 + v21 + (v168 / 2048 | 0x200000 * v168);
            v171 = v165 + v22;
            v16 = v14;
            v17 = v171;
            v18 = v169;
            v19 = v170;
        }
    }
    // 0x40b22a
    *(int32_t *)result = v16;
    *v1 = v19;
    *v6 = v18;
    *v8 = v17;
    return result;
}
// Address range: 0x40b250 - 0x40b354
int64_t function_40b250(int128_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    uint32_t v2 = *(int32_t *)(v1 + 24); // 0x40b255
    int32_t * v3 = (int32_t *)(v1 + 20); // 0x40b25b
    int32_t v4 = *v3; // 0x40b25b
    int32_t * v5 = (int32_t *)(v1 + 16); // 0x40b28a
    uint32_t v6 = *v5 + v2; // 0x40b28a
    *v5 = v6;
    int32_t v7 = v4; // 0x40b290
    if (v6 < v2) {
        // 0x40b292
        v7 = v4 + 1;
        *v3 = v7;
    }
    int64_t v8 = v2; // 0x40b255
    int64_t v9 = v2 < 56 ? 64 : 128; // 0x40b26a
    int64_t v10 = v1 + 28; // 0x40b2a6
    *(int32_t *)((v2 < 56 ? 56 : 120) + v10) = 8 * v6;
    int64_t v11 = v9 - v8; // 0x40b2b4
    *(int32_t *)((v2 < 56 ? 60 : 124) + v10) = 8 * v7 | v6 / 0x20000000;
    int64_t v12 = v10 + v8; // 0x40b2bb
    uint64_t v13 = v11 - 8; // 0x40b2bf
    if (v13 >= 8) {
        int64_t v14 = v12 + 8 & -8; // 0x40b300
        *(int64_t *)v12 = 128;
        *(int64_t *)(v13 + v12 - 8) = *(int64_t *)(v11 + 0x416ad0);
        int64_t v15 = v12 - v14; // 0x40b313
        __asm_rep_movsq_memcpy((char *)v14, (char *)((int64_t)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" - v15), (v15 + v13) / 8);
        // 0x40b323
        function_40aae0(v10, v9, v1);
        return function_40aac0(v1, (int64_t)a2);
    }
    if ((v13 & 4) != 0) {
        // 0x40b340
        *(int32_t *)v12 = 128;
        *(int32_t *)(v13 + v12 - 4) = *(int32_t *)(v11 + 0x416ad4);
        // 0x40b323
        function_40aae0(v10, v9, v1);
        return function_40aac0(v1, (int64_t)a2);
    }
    if (v13 == 0) {
        // 0x40b323
        function_40aae0(v10, v9, v1);
        return function_40aac0(v1, (int64_t)a2);
    }
    // 0x40b2d3
    *(char *)v12 = -128;
    if ((v13 & 2) != 0) {
        // 0x40b2e1
        *(int16_t *)(v13 + v12 - 2) = *(int16_t *)(v11 + 0x416ad6);
    }
    // 0x40b323
    function_40aae0(v10, v9, v1);
    return function_40aac0(v1, (int64_t)a2);
}
// Address range: 0x40b360 - 0x40b65e
int64_t function_40b360(char a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = a1;
    int64_t v3 = v1 + 24; // 0x40b377
    int32_t * v4 = (int32_t *)v3; // 0x40b377
    uint32_t v5 = *v4; // 0x40b377
    int64_t v6 = v5; // 0x40b377
    int64_t v7 = v6; // 0x40b37c
    int64_t v8 = v2; // 0x40b37c
    int64_t v9 = a2; // 0x40b37c
    if (v5 != 0) {
        int64_t v10 = v1 + 28; // 0x40b4bf
        uint64_t v11 = 128 - v6; // 0x40b4c4
        int64_t v12 = v11 > a2 ? a2 : v11; // 0x40b4ce
        int32_t v13 = v12; // 0x40b4d8
        int64_t * dest_mem = memcpy((int64_t *)(v10 + v6), (int64_t *)v2, v13); // 0x40b4d8
        uint32_t v14 = *v4 + v13; // 0x40b4e2
        *v4 = v14;
        v7 = (int64_t)dest_mem;
        if (v14 >= 65) {
            // 0x40b550
            function_40aae0(v10, (int64_t)(v14 & -64), v1);
            uint32_t v15 = *v4; // 0x40b55e
            int64_t v16 = (v12 + v6 & -64) + v10; // 0x40b56e
            uint32_t v17 = v15 % 64; // 0x40b571
            int64_t v18 = v17; // 0x40b571
            *v4 = v17;
            if (v17 >= 8) {
                // 0x40b5b0
                *(int64_t *)v10 = *(int64_t *)v16;
                *(int64_t *)(v18 + v1 + 20) = *(int64_t *)(v16 + v18 - 8);
                int64_t v19 = v1 + 36 & -8; // 0x40b5c9
                int64_t v20 = v10 - v19; // 0x40b5cd
                int64_t v21 = v16 - v20; // 0x40b5d0
                uint32_t v22 = v17 + (int32_t)v20; // 0x40b5da
                v7 = v21;
                if (v22 >= 8) {
                    int64_t v23 = 0;
                    int64_t v24 = v23 + 8; // 0x40b5ec
                    *(int64_t *)(v23 + v19) = *(int64_t *)(v23 + v21);
                    v7 = v21;
                    while ((v22 & -8) > (int32_t)v24) {
                        // 0x40b5ea
                        v23 = v24 & 0xffffffff;
                        v24 = v23 + 8;
                        *(int64_t *)(v23 + v19) = *(int64_t *)(v23 + v21);
                        v7 = v21;
                    }
                }
            } else {
                int64_t v25 = v15; // 0x40b55e
                if ((v25 & 4) != 0) {
                    // 0x40b601
                    *(int32_t *)v10 = *(int32_t *)v16;
                    uint32_t v26 = *(int32_t *)(v16 + v18 - 4); // 0x40b608
                    *(int32_t *)(v3 + v18) = v26;
                    v7 = v26;
                } else {
                    // 0x40b583
                    v7 = v16;
                    if (v17 != 0) {
                        // 0x40b58b
                        *(char *)v10 = *(char *)v16;
                        v7 = v16;
                        if ((v25 & 2) != 0) {
                            uint16_t v27 = *(int16_t *)(v16 + v18 - 2); // 0x40b59c
                            *(int16_t *)(v18 + v1 + 26) = v27;
                            v7 = v27;
                        }
                    }
                }
            }
        }
        // 0x40b4ef
        v8 = v12 + v2;
        v9 = a2 - v12;
    }
    uint64_t v28 = v9;
    int64_t result = v7; // 0x40b386
    int64_t v29 = v8; // 0x40b386
    int64_t v30 = v28; // 0x40b386
    int64_t v31; // 0x40b360
    int64_t v32; // 0x40b360
    int64_t v33; // 0x40b360
    if (v28 < 64) {
        goto lab_0x40b49c;
    } else {
        if (v8 % 4 == 0) {
            int64_t v34 = v28 & -64; // 0x40b48d
            result = function_40aae0(v8, v34, v1);
            v29 = v34 + v8;
            v30 = v28 % 64;
            goto lab_0x40b49c;
        } else {
            int64_t v35 = v1 + 28; // 0x40b395
            v33 = v35;
            v31 = 64;
            v32 = v8;
            if (v28 != 64) {
                int64_t v36 = (v28 - 1 & -64) + v8; // 0x40b3b7
                int128_t v37 = __asm_movdqu(*(int128_t *)v8); // 0x40b3c0
                int64_t v38 = v8 + 64; // 0x40b3cf
                __asm_movups(*(int128_t *)v35, v37);
                __asm_movups(*(int128_t *)(v1 + 44), __asm_movdqu(*(int128_t *)(v8 + 16)));
                __asm_movups(*(int128_t *)(v1 + 60), __asm_movdqu(*(int128_t *)(v8 + 32)));
                __asm_movups(*(int128_t *)(v1 + 76), __asm_movdqu(*(int128_t *)(v8 + 48)));
                function_40aae0(v35, 64, v1);
                while (v38 != v36) {
                    int64_t v39 = v38;
                    v37 = __asm_movdqu(*(int128_t *)v39);
                    v38 = v39 + 64;
                    __asm_movups(*(int128_t *)v35, v37);
                    __asm_movups(*(int128_t *)(v1 + 44), __asm_movdqu(*(int128_t *)(v39 + 16)));
                    __asm_movups(*(int128_t *)(v1 + 60), __asm_movdqu(*(int128_t *)(v39 + 32)));
                    __asm_movups(*(int128_t *)(v1 + 76), __asm_movdqu(*(int128_t *)(v39 + 48)));
                    function_40aae0(v35, 64, v1);
                }
                // 0x40b3fc
                v33 = v35;
                v31 = v28 - 64 - (v28 - 65 & -64);
                v32 = v36;
            }
            goto lab_0x40b40b;
        }
    }
  lab_0x40b49c:
    // 0x40b49c
    if (v30 == 0) {
        // 0x40b4a5
        return result;
    }
    // 0x40b651
    v33 = v1 + 28;
    v31 = v30;
    v32 = v29;
    goto lab_0x40b40b;
  lab_0x40b40b:;
    int64_t v40 = (int64_t)*v4; // 0x40b40b
    int64_t v41 = v31 & 0xffffffff; // 0x40b410
    int64_t v42 = v33 + v40; // 0x40b413
    uint32_t v43 = (int32_t)v31; // 0x40b418
    int64_t v44; // 0x40b360
    if (v43 >= 8) {
        int64_t v45 = v42 + 8 & -8; // 0x40b50a
        *(int64_t *)v42 = *(int64_t *)v32;
        *(int64_t *)(v42 + v41 - 8) = *(int64_t *)(v41 + v32 - 8);
        int64_t v46 = v42 - v45; // 0x40b51e
        int64_t v47 = v46 + v31; // 0x40b524
        int64_t v48 = v47 & 0xfffffff8; // 0x40b527
        v44 = v48;
        if ((int32_t)v47 >= 8) {
            int64_t v49 = 0;
            int64_t v50 = v49 + 8; // 0x40b53a
            *(int64_t *)(v49 + v45) = *(int64_t *)(v32 - v46 + v49);
            v44 = v48;
            while ((int32_t)v50 < (int32_t)v48) {
                // 0x40b538
                v49 = v50 & 0xffffffff;
                v50 = v49 + 8;
                *(int64_t *)(v49 + v45) = *(int64_t *)(v32 - v46 + v49);
                v44 = v48;
            }
        }
    } else {
        if ((v31 & 4) != 0) {
            // 0x40b628
            *(int32_t *)v42 = *(int32_t *)v32;
            uint32_t v51 = *(int32_t *)(v41 + v32 - 4); // 0x40b630
            *(int32_t *)(v42 + v41 - 4) = v51;
            v44 = v51;
        } else {
            // 0x40b42c
            v44 = v41;
            if (v43 != 0) {
                // 0x40b431
                *(char *)v42 = *(char *)v32;
                v44 = v41;
                if ((v31 & 2) != 0) {
                    uint16_t v52 = *(int16_t *)(v41 + v32 - 2); // 0x40b641
                    *(int16_t *)(v42 + v41 - 2) = v52;
                    v44 = v52;
                }
            }
        }
    }
    uint64_t v53 = v31 + v40; // 0x40b43f
    int32_t v54; // 0x40b360
    int64_t result2; // 0x40b360
    if (v53 < 64) {
        // 0x40b43f
        v54 = v53;
        result2 = v44;
    } else {
        // 0x40b448
        function_40aae0(v33, 64, v1);
        int32_t v55 = (int32_t)v53 - 64;
        int64_t * dest_mem2 = memcpy((int64_t *)v33, (int64_t *)(v1 + 92), v55); // 0x40b467
        v54 = v55;
        result2 = (int64_t)dest_mem2;
    }
    // 0x40b46c
    *v4 = v54;
    return result2;
}
// Address range: 0x40b660 - 0x40b6b5
int64_t function_40b660(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = -0x1032547698badcff; // bp-168, 0x40b675
    function_40b360((char)a1, a2, &v1);
    int64_t v2; // 0x40b660
    int64_t result = function_40b250((int128_t *)&v1, (int64_t *)a3, (int64_t)&v1, v2, v2); // 0x40b6a7
    return result;
}
// Address range: 0x40b6c0 - 0x40b7e5
int64_t function_40b6c0(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x40b6da
    if (mem == NULL) {
        // 0x40b7d0
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x40b6da
    int64_t v2; // 0x40b6c0
    int32_t v3 = v2;
    int64_t v4 = -0x1032547698badcff; // bp-200, 0x40b6fd
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x40b6c0
    int64_t v8; // 0x40b74c
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x40b747
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x40b76a
                goto lab_0x40b76a;
            }
            // 0x40b730
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x40b76f;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x40b758
        function_40aae0(v1, 0x8000, v6);
    }
  lab_0x40b76a:;
    int32_t v11 = v3 & 32; // 0x40b76a
    v7 = v11;
    if (v11 != 0) {
        // 0x40b7b0
        free(mem);
        return 1;
    }
  lab_0x40b76f:;
    int64_t v12 = v7; // 0x40b772
    if (v8 != 0) {
        // 0x40b7a0
        function_40b360((char)v1, v8, &v4);
        v12 = v6;
    }
    // 0x40b774
    function_40b250((int128_t *)&v4, (int64_t *)a2, v12, a1, v2);
    free(mem);
    return (int32_t)&g122 ^ (int32_t)&g122;
}
// Address range: 0x40b7f0 - 0x40b7f5
int64_t function_40b7f0(void) {
    // 0x40b7f0
    int64_t fd; // 0x40b7f0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x40b800 - 0x40b821
int64_t function_40b800(int64_t stream, int64_t advice, int64_t a3) {
    // 0x40b800
    if (stream == 0) {
        // 0x40b820
        int64_t result; // 0x40b800
        return result;
    }
    // 0x40b805
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x40b830 - 0x40b8f3
int64_t function_40b830(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a1;
    char v2 = v1;
    int64_t v3 = 0; // 0x40b838
    int64_t v4 = 0; // 0x40b838
    char v5 = v2; // 0x40b838
    int64_t v6 = v1; // 0x40b838
    int64_t result = 0; // 0x40b838
    if (v2 == 0) {
      lab_0x40b8c1_2:
        // 0x40b8c1
        return result;
    }
    int64_t v7; // 0x40b830
    int64_t v8; // 0x40b830
    int64_t v9; // 0x40b830
    char v10; // 0x40b830
    int64_t v11; // 0x40b830
    int64_t v12; // 0x40b830
    while (true) {
      lab_0x40b88f:
        // 0x40b88f
        v12 = v6;
        v10 = v5;
        int64_t v13 = v4;
        v8 = v3;
        int64_t v14 = v8; // 0x40b8af
        char v15 = v10; // 0x40b8ba
        int64_t v16 = v12; // 0x40b8b3
        while ((char)v13 == 0) {
            int64_t v17 = v16;
            char v18 = v15;
            int64_t v19 = v14;
            if (v18 == 46) {
                // 0x40b8d8
                v11 = v17;
                v7 = v19 == 0 ? v17 : v19;
                v9 = 1;
                goto lab_0x40b881_2;
            }
            if (v18 > 90) {
                // 0x40b8c8
                if (v18 < 123) {
                    goto lab_0x40b881_2;
                }
            } else {
                // 0x40b89d
                v11 = v17;
                v7 = v19;
                v9 = v13;
                if (v18 > 64 || v18 < 58) {
                    goto lab_0x40b881_2;
                }
            }
            // 0x40b8ac
            v14 = v18 != 126 ? 0 : v19;
            v16 = v17 + 1;
            *a1 = v16;
            v15 = *(char *)v16;
            result = v14;
            if (v15 == 0) {
                return result;
            }
        }
        uint32_t v20 = (int32_t)v10 - 65; // 0x40b863
        if (v10 == 122 || v20 < 57) {
            uint32_t v21 = v20 % 64;
            v11 = v12;
            v7 = v8;
            v9 = 0;
            if (v21 != 0 != ((1 << (int64_t)v21) % 0x3ffffff04000000 == 0)) {
                goto lab_0x40b881_2;
            } else {
                goto lab_0x40b878;
            }
        } else {
            goto lab_0x40b878;
        }
    }
    // 0x40b8c1
    return result;
  lab_0x40b881_2:;
    int64_t v22 = v11 + 1; // 0x40b881
    *a1 = v22;
    char v23 = *(char *)v22; // 0x40b888
    v3 = v7;
    v4 = v9;
    v5 = v23;
    v6 = v22;
    result = v7;
    if (v23 == 0) {
        return result;
    }
    goto lab_0x40b88f;
  lab_0x40b878:
    // 0x40b878
    v11 = v12;
    v7 = v10 != 126 ? 0 : v8;
    v9 = 0;
    goto lab_0x40b881_2;
}
// Address range: 0x40b900 - 0x40bd0d
int64_t function_40b900(int64_t str, int64_t str2) {
    // 0x40b900
    int64_t v1; // 0x40b900
    uint64_t v2 = v1;
    uint32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x40b914
    if (strcmp_rc == 0) {
        // 0x40bb86
        return 0;
    }
    char v3 = v2;
    if (v3 == 0) {
        // 0x40bb86
        return 0xffffffff;
    }
    char v4 = v1;
    if (v4 == 0) {
        // 0x40bb86
        return 1;
    }
    int64_t result2 = strcmp_rc; // 0x40b919
    uint64_t v5 = v2 % 256; // 0x40b924
    uint64_t v6 = v1 % 256; // 0x40b931
    bool v7; // 0x40b900
    int64_t v8 = v7 ? -1 : 1;
    int64_t v9 = str; // 0x40b900
    int64_t v10 = (int64_t)&g12; // 0x40b900
    int64_t v11 = 2; // 0x40b94f
    unsigned char v12 = *(char *)v10; // 0x40b94f
    char v13 = *(char *)v9; // 0x40b94f
    char v14 = v13; // 0x40b94f
    bool v15 = false; // 0x40b94f
    while (v12 == v13) {
        v11--;
        v9 += v8;
        v10 += v8;
        v14 = v12;
        v15 = true;
        if (v11 == 0) {
            // break -> 
            break;
        }
        v12 = *(char *)v10;
        v13 = *(char *)v9;
        v14 = v13;
        v15 = false;
    }
    unsigned char v16 = v14;
    int64_t v17 = str2; // 0x40b958
    int64_t v18 = (int64_t)&g12; // 0x40b958
    if ((v12 >= v16 && !v15) == v12 < v16) {
        // 0x40bb86
        return 0xffffffff;
    }
    int64_t v19 = 2; // 0x40b958
    unsigned char v20 = *(char *)v18; // 0x40b969
    char v21 = *(char *)v17; // 0x40b969
    char v22 = v21; // 0x40b969
    bool v23 = false; // 0x40b969
    while (v20 == v21) {
        // 0x40b95e
        v19--;
        v17 += v8;
        v18 += v8;
        v22 = v20;
        v23 = true;
        if (v19 == 0) {
            // break -> 
            break;
        }
        v20 = *(char *)v18;
        v21 = *(char *)v17;
        v22 = v21;
        v23 = false;
    }
    unsigned char v24 = v22;
    int64_t v25 = str; // 0x40b972
    int64_t v26 = (int64_t)".."; // 0x40b972
    if ((v20 >= v24 && !v23) == v20 < v24) {
        // 0x40bb86
        return 1;
    }
    int64_t v27 = 3; // 0x40b972
    unsigned char v28 = *(char *)v26; // 0x40b988
    char v29 = *(char *)v25; // 0x40b988
    char v30 = v29; // 0x40b988
    bool v31 = false; // 0x40b988
    while (v28 == v29) {
        // 0x40b978
        v27--;
        v25 += v8;
        v26 += v8;
        v30 = v28;
        v31 = true;
        if (v27 == 0) {
            // break -> 
            break;
        }
        v28 = *(char *)v26;
        v29 = *(char *)v25;
        v30 = v29;
        v31 = false;
    }
    unsigned char v32 = v30;
    int64_t v33 = str2; // 0x40b991
    int64_t v34 = (int64_t)".."; // 0x40b991
    if ((v28 >= v32 && !v31) == v28 < v32) {
        // 0x40bb86
        return 0xffffffff;
    }
    int64_t v35 = 3; // 0x40b991
    unsigned char v36 = *(char *)v34; // 0x40b9a2
    char v37 = *(char *)v33; // 0x40b9a2
    v34 += v8;
    v35--;
    char v38 = v37; // 0x40b9a2
    bool v39 = false; // 0x40b9a2
    while (v36 == v37) {
        // 0x40b997
        v33 += v8;
        v38 = v36;
        v39 = true;
        if (v35 == 0) {
            // break -> 
            break;
        }
        v36 = *(char *)v34;
        v37 = *(char *)v33;
        v34 += v8;
        v35--;
        v38 = v37;
        v39 = false;
    }
    unsigned char v40 = v38;
    if ((v36 >= v40 && !v39) == v36 < v40) {
        // 0x40bb86
        return 1;
    }
    // 0x40b9b1
    if (v3 == 46 == (v4 != 46)) {
        // 0x40bb86
        return 0xffffffff;
    }
    int64_t str4; // 0x40b900
    int64_t str3; // 0x40b900
    if (v3 == 46) {
        // 0x40bbd0
        str3 = str;
        str4 = str2;
        if (v4 == 46) {
            // 0x40bbe0
            str3 = str + 1;
            str4 = str2 + 1;
        }
    } else {
        // 0x40b9d7
        str3 = str;
        str4 = str2;
        if (v4 == 46) {
            // 0x40bb86
            return 1;
        }
    }
    int64_t v41 = (int64_t)(v3 == 46) | (int64_t)".." & -256; // 0x40b9b5
    int64_t v42 = str3; // bp-72, 0x40b9e4
    int64_t v43 = str4; // bp-64, 0x40b9e9
    int64_t v44 = function_40b830(&v42, v34, v41, v35, v5, v6); // 0x40b9ee
    int64_t v45 = function_40b830(&v43, v34, v41, v35, v5, v6); // 0x40b9fb
    int64_t v46; // 0x40b900
    int64_t n; // 0x40b900
    int64_t v47; // 0x40b900
    if (v44 == 0) {
        int64_t v48 = v42 - str3; // 0x40bc7d
        n = v48;
        v46 = v45;
        v47 = v48;
        if (v45 != 0) {
            goto lab_0x40ba1b;
        } else {
            goto lab_0x40bc89;
        }
    } else {
        // 0x40ba09
        n = v44 - str3;
        v46 = v45 == 0 ? v43 : v45;
        goto lab_0x40ba1b;
    }
  lab_0x40ba51:;
    // 0x40ba51
    int64_t v49; // 0x40b900
    int64_t v50 = v49;
    int64_t v51; // 0x40b900
    int64_t v52 = v51;
    char v53 = *(char *)(v50 + str3); // 0x40ba51
    int64_t v54 = v52; // 0x40ba5e
    int64_t v55 = v50; // 0x40ba5e
    int32_t v56; // 0x40b900
    int64_t v57; // 0x40b900
    int64_t v58; // 0x40b900
    int64_t v59; // 0x40b900
    int64_t v60; // 0x40b900
    uint64_t v61; // 0x40b900
    char v62; // 0x40b900
    int64_t v63; // 0x40b900
    int64_t v64; // 0x40b900
    int64_t v65; // 0x40b900
    if (v53 == 57 || (int32_t)v53 < 57) {
        goto lab_0x40bad0;
    } else {
        int32_t v66 = v53;
        v56 = v66;
        v57 = v52;
        v62 = v53;
        v63 = v50;
        if (v66 < 58) {
            // 0x40bbb8
            v58 = v61;
            v64 = v50;
            if (v61 == v52) {
                goto lab_0x40bac3;
            } else {
                // 0x40bbc1
                v59 = v52;
                v60 = (int64_t)*(char *)(v52 + str4);
                v65 = v50;
                goto lab_0x40bb06;
            }
        } else {
            goto lab_0x40ba74;
        }
    }
  lab_0x40bad0:;
    int64_t v67 = v55;
    int64_t v68 = v54;
    char v69 = *(char *)(v68 + str4); // 0x40bad0
    uint64_t v70; // 0x40b900
    if (v61 > v68) {
        if (v69 == 57 || (int32_t)v69 < 57) {
            goto lab_0x40bb44;
        } else {
            int64_t v71 = v69; // 0x40bad0
            v59 = v68;
            v60 = v71;
            v65 = v70;
            if (v70 == v67) {
                goto lab_0x40bb06;
            } else {
                unsigned char v72 = *(char *)(v67 + str3); // 0x40baef
                int32_t v73 = v72;
                v56 = v73;
                v57 = v68;
                v62 = v72;
                v63 = v67;
                v59 = v68;
                v60 = v71;
                v65 = v67;
                if (v72 == 57 || v73 < 57) {
                    goto lab_0x40bb06;
                } else {
                    goto lab_0x40ba74;
                }
            }
        }
    } else {
        goto lab_0x40bb44;
    }
  lab_0x40bb44:;
    int64_t v74 = v67;
    char v75 = *(char *)(v74 + str3); // 0x40bb44
    int64_t v76 = v74 + 1; // 0x40bb4a
    while (v75 == 48) {
        // 0x40bb44
        v74 = v76;
        v75 = *(char *)(v74 + str3);
        v76 = v74 + 1;
    }
    int64_t v77 = v68; // 0x40bb50
    int64_t v78 = v68; // 0x40bb50
    char v79 = v69; // 0x40bb50
    if (v69 == 48) {
        int64_t v80 = v77 + 1; // 0x40bb58
        char v81 = *(char *)(v80 + str4); // 0x40bb5c
        v77 = v80;
        v78 = v80;
        v79 = v81;
        while (v81 == 48) {
            // 0x40bb58
            v80 = v77 + 1;
            v81 = *(char *)(v80 + str4);
            v77 = v80;
            v78 = v80;
            v79 = v81;
        }
    }
    char v82 = v79;
    int64_t v83 = v78;
    int64_t v84; // 0x40b900
    int64_t result; // 0x40b900
    int64_t v85; // 0x40b900
    if ((int32_t)v75 < 58) {
        // 0x40bb72
        result = 1;
        if ((int32_t)v82 >= 58) {
            return result;
        }
        int64_t v86 = 0;
        int64_t v87 = v86 == 0 ? (int64_t)v75 - (int64_t)v82 : v86; // 0x40bc04
        int64_t v88 = v87 & 0xffffffff; // 0x40bc04
        int64_t v89 = v74 + 1; // 0x40bc08
        char v90 = *(char *)(str4 - v74 + v83 + v89); // 0x40bc0f
        char v91 = *(char *)(v89 + str3); // 0x40bc23
        while (v91 == 57 || (int32_t)v91 < 57) {
            // 0x40bca0
            result = 1;
            if ((int32_t)v90 >= 58) {
                return result;
            }
            v86 = v88;
            v87 = v86 == 0 ? (int64_t)v91 - (int64_t)v90 : v86;
            v88 = v87 & 0xffffffff;
            v89++;
            v90 = *(char *)(str4 - v74 + v83 + v89);
            v91 = *(char *)(v89 + str3);
        }
        // 0x40bc36
        result = 0xffffffff;
        if ((int32_t)v90 < 58) {
            return result;
        }
        // 0x40bc41
        result = v88;
        v84 = v89 - v74 + v83;
        v85 = v89;
        if ((int32_t)v87 != 0) {
            return result;
        }
    } else {
        // 0x40bba0
        result = 0xffffffff;
        v84 = v83;
        v85 = v74;
        if ((int32_t)v82 < 58) {
            return result;
        }
    }
    int64_t v92 = v84; // 0x40ba3b
    bool v93 = v70 > v85; // 0x40ba3b
    int64_t v94 = v85; // 0x40ba3b
    result = result2;
    if (v61 <= v84 && v70 <= v85) {
        return result;
    }
    goto lab_0x40ba46;
  lab_0x40ba74:;
    // 0x40ba74
    int64_t v96; // 0x40b900
    int64_t v95; // 0x40b900
    int64_t v97 = v96 - v95; // 0x40ba49
    int64_t v98 = v63;
    unsigned char v99 = v62;
    int64_t v100 = v57; // 0x40baa7
    int64_t v101 = v99;
    int64_t v102; // 0x40b900
    int64_t v103; // 0x40b900
    int64_t v104; // 0x40b900
    int64_t v105; // 0x40b900
    if (v56 < 123) {
        if ((1 << (int64_t)((v99 + 63) % 64)) % 0x3ffffff04000000 != 0) {
            // 0x40bc60
            v102 = v100;
            v104 = 0;
            v105 = v98;
            v103 = v101;
            if (v61 != v98 + v97) {
                goto lab_0x40baa7;
            } else {
                goto lab_0x40baba;
            }
        } else {
            goto lab_0x40ba8b;
        }
    } else {
        goto lab_0x40ba8b;
    }
  lab_0x40bac3:;
    int64_t v106 = v64 + 1; // 0x40bac3
    int64_t v107 = v58 + 1; // 0x40bac7
    v51 = v107;
    v49 = v106;
    v54 = v107;
    v55 = v106;
    if (v70 > v106) {
        goto lab_0x40ba51;
    } else {
        goto lab_0x40bad0;
    }
  lab_0x40ba8b:;
    int64_t v108 = v99 == 126 ? 0xffffffff : v101 | 256;
    result = v108;
    if (v61 == v98 + v97) {
        // break -> 0x40bb86
        goto lab_0x40bb86_7;
    }
    goto lab_0x40baa7;
  lab_0x40bb06:
    // 0x40bb06
    v58 = v59;
    v64 = v65;
    int64_t v110 = v60; // 0x40bb13
    int64_t v111 = v59; // 0x40bb13
    int64_t v112 = v65; // 0x40bb13
    int64_t v113 = 0; // 0x40bb13
    if ((int32_t)v60 < 58) {
        goto lab_0x40bac3;
    } else {
        goto lab_0x40bb15;
    }
  lab_0x40baa7:;
    unsigned char v109 = *(char *)(v100 + str4); // 0x40baa7
    v102 = v100;
    v104 = 0;
    v105 = v98;
    v103 = v108;
    v110 = v109;
    v111 = v100;
    v112 = v98;
    v113 = v108;
    if (v109 == 57 || (int32_t)v109 < 57) {
        goto lab_0x40baba;
    } else {
        goto lab_0x40bb15;
    }
  lab_0x40bb15:;
    int64_t v114 = v113;
    int64_t v115 = v112;
    int64_t v116 = v111;
    int64_t v117 = v110;
    uint64_t v118 = v117 + 0xffffffbf; // 0x40bb19
    if ((int32_t)v118 < 58) {
        // 0x40bb21
        v102 = v116;
        v104 = v117;
        v105 = v115;
        v103 = v114;
        if ((1 << v118 % 64) % 0x3ffffff04000000 != 0) {
            goto lab_0x40baba;
        } else {
            goto lab_0x40bb2c;
        }
    } else {
        goto lab_0x40bb2c;
    }
  lab_0x40baba:;
    int64_t v119 = v103;
    int64_t v120 = v104;
    v58 = v102;
    v64 = v105;
    if ((int32_t)v120 != (int32_t)v119) {
        // 0x40bced
        result = v119 - v120 & 0xffffffff;
        goto lab_0x40bb86_7;
    }
    goto lab_0x40bac3;
  lab_0x40bb2c:
    // 0x40bb2c
    v102 = v116;
    v104 = (char)v117 == 126 ? 0xffffffff : v117 | 256;
    v105 = v115;
    v103 = v114;
    goto lab_0x40baba;
  lab_0x40ba1b:;
    int64_t v121 = v46 - str4;
    int64_t v122 = n; // 0x40ba1e
    int64_t v123 = v121; // 0x40ba1e
    if (n == v121) {
        int32_t strncmp_rc = strncmp((char *)str3, (char *)str4, (int32_t)n); // 0x40bcb9
        v122 = n;
        v123 = n;
        if (strncmp_rc != 0) {
            goto lab_0x40ba24;
        } else {
            // 0x40bcc6
            v47 = v42 - str3;
            goto lab_0x40bc89;
        }
    } else {
        goto lab_0x40ba24;
    }
  lab_0x40bc89:
    // 0x40bc89
    v122 = v47;
    v123 = v43 - str4;
    goto lab_0x40ba24;
  lab_0x40ba24:
    // 0x40ba24
    v61 = v123;
    v70 = v122;
    if ((v61 || v70) == 0) {
        // 0x40bb86
        return result2;
    }
    // 0x40ba46
    v92 = 0;
    v93 = v70 != 0;
    v94 = 0;
    while (true) {
      lab_0x40ba46:
        // 0x40ba46
        v95 = v94;
        v96 = v92;
        v51 = v96;
        v49 = v95;
        v54 = v96;
        v55 = v95;
        if (v93) {
            goto lab_0x40ba51;
        } else {
            goto lab_0x40bad0;
        }
    }
  lab_0x40bb86_7:
    // 0x40bb86
    return result;
}
// Address range: 0x40bd10 - 0x40bd6e
int64_t function_40bd10(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x40bd16
    if (locale == NULL) {
        // 0x40bd43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40bd16
    bool v2; // 0x40bd10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x40bd10
    int64_t v5 = v1; // 0x40bd10
    int64_t v6 = 2; // 0x40bd35
    unsigned char v7 = *(char *)v5; // 0x40bd35
    char v8 = *(char *)v4; // 0x40bd35
    char v9 = v8; // 0x40bd35
    bool v10 = false; // 0x40bd35
    while (v7 == v8) {
        // 0x40bd28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40bd41
    int64_t v13 = v1; // 0x40bd41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40bd43
        return 0;
    }
    int64_t v14 = 6; // 0x40bd41
    unsigned char v15 = *(char *)v13; // 0x40bd5d
    char v16 = *(char *)v12; // 0x40bd5d
    char v17 = v16; // 0x40bd5d
    bool v18 = false; // 0x40bd5d
    while (v15 == v16) {
        // 0x40bd50
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
// Address range: 0x40bd70 - 0x40be03
int64_t function_40bd70(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x40bd87
    if (v1 == -1) {
        // 0x40bdff
        return -1;
    }
    int64_t v2 = v1; // 0x40bd8f
    int64_t v3; // 0x40bd70
    while (true) {
      lab_0x40bd98:
        // 0x40bd98
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x40bdf0;
        } else {
            goto lab_0x40bdf5;
        }
    }
  lab_0x40bdff_2:;
    // 0x40bdff
    int64_t result; // 0x40bd70
    return result;
  lab_0x40bdf5:;
    int64_t v4 = v3 + 2; // 0x40bdf5
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40bdff
        goto lab_0x40bdff_2;
    }
    goto lab_0x40bd98;
  lab_0x40bdf0:
    // 0x40bdf0
    result = v3;
    goto lab_0x40bdf5;
}
// Address range: 0x40be10 - 0x40be20
int64_t function_40be10(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40be10
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x40be20 - 0x40be27
int64_t function_40be20(int64_t a1, int64_t a2) {
    // 0x40be20
    int64_t v1; // 0x40be20
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x40be30 - 0x40be51
int64_t function_40be30(int64_t a1, int64_t a2) {
    // 0x40be30
    int64_t v1; // 0x40be30
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x40be48
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x40be60 - 0x40bf79
int64_t function_40be60(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_40be30(a1, a2); // 0x40be74
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40be7c
    int64_t result2 = *v2; // 0x40be7c
    if (result2 == 0) {
        // 0x40bf0e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x40bea4
            if (v3 == 0) {
                // 0x40bf0e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x40beb1
            int64_t v5 = v3; // 0x40beb7
            int64_t v6 = v1; // 0x40beb7
            int64_t result = v4; // 0x40beb7
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40beec_2:
                // 0x40beec
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40bef1
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x40bf00
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40bf0e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x40bec4
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x40bed1
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40beec_2;
                }
                // 0x40bed9
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40beec_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40bf0e
            return 0;
        }
    }
    // 0x40bf23
    if ((char)a4 == 0) {
        // 0x40bf0e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x40bf28
    if (v12 == 0) {
        // 0x40bf70
        *v2 = 0;
        // 0x40bf0e
        return result2;
    }
    // 0x40bf31
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40bf3f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x40bf80 - 0x40bffe
int64_t function_40bf80(uint64_t a1) {
    if (a1 == (int64_t)&g13) {
        // 0x40bffd
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40bf8b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g13) {
        // 0x40bfea
        *(int64_t *)a1 = (int64_t)&g13;
        return 0;
    }
    // 0x40bf99
    __asm_comiss_5(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x40bfb4
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_6(v2, 0x3dcccccd); // 0x40bfc1
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x40bfc9
    __asm_comiss_5(v4, v3);
    __asm_comiss_5(__asm_movss(0x3f800000), v4);
    __asm_comiss_5(v1, v3);
    // 0x40bffd
    return 1;
}
// Address range: 0x40c000 - 0x40c14a
int64_t function_40c000(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40c01a
    uint64_t v2 = *v1; // 0x40c01a
    if (v2 <= a2) {
        // 0x40c104
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x40c000
    int64_t v8 = a2; // 0x40c000
    int64_t v9; // 0x40c000
    int64_t result; // 0x40c000
    int64_t v10; // 0x40c000
    while (true) {
      lab_0x40c036_2:
        // 0x40c036
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x40c036
        int64_t v12 = *v11; // 0x40c036
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x40c028;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40c03f
            int64_t v14 = *v13; // 0x40c03f
            int64_t v15 = v14; // 0x40c047
            int64_t v16 = v12; // 0x40c047
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x40c064
                    int64_t v19 = *v18; // 0x40c064
                    int64_t v20 = function_40be30(v3, v19); // 0x40c06d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x40c072
                    int64_t v22 = *v21; // 0x40c072
                    int64_t * v23 = (int64_t *)v20; // 0x40c076
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x40c050
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40c09f
                            break;
                        }
                    } else {
                        // 0x40c07c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40c09f
                            break;
                        }
                    }
                    // 0x40c064
                    v15 = v22;
                }
                // 0x40c09f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x40c0a3
                v9 = *v1;
                goto lab_0x40c028;
            } else {
                int64_t v26 = function_40be30(v3, v25); // 0x40c0bb
                int64_t * v27 = (int64_t *)v26; // 0x40c0c0
                if (*v27 == 0) {
                    // 0x40c120
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x40c0c9
                    int64_t * v29; // 0x40c000
                    int64_t v30; // 0x40c000
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40c12f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x40c104
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40c12f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40c0da
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x40c0e9
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x40c0f1
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40c0fa
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x40c104
                    break;
                }
                goto lab_0x40c036_2;
            }
        }
    }
    // 0x40c104
    return result;
  lab_0x40c028:;
    int64_t v36 = v10 + 16; // 0x40c028
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x40c036_2;
    // 0x40c036
    goto lab_0x40c036_2;
}
// Address range: 0x40c150 - 0x40c155
int64_t function_40c150(int64_t a1) {
    // 0x40c150
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x40c160 - 0x40c165
int64_t function_40c160(int64_t a1) {
    // 0x40c160
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x40c170 - 0x40c175
int64_t function_40c170(int64_t a1) {
    // 0x40c170
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x40c180 - 0x40c1cf
int64_t function_40c180(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c183
    int64_t result = 0; // 0x40c18c
    if (v1 <= a1) {
      lab_0x40c1cd:
        // 0x40c1cd
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x40c190
    while (*(int64_t *)v3 == 0) {
        // 0x40c190
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40c19f
    int64_t v6 = v5; // 0x40c1ab
    int64_t v7 = 1; // 0x40c1ab
    int64_t v8; // 0x40c180
    int64_t v9; // 0x40c1b0
    int64_t v10; // 0x40c1b4
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x40c1b0
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x40c1c0
    int64_t v12 = v3 + 16; // 0x40c1c4
    while (v12 < v1) {
        // 0x40c199
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x40c190
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40c19f
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
                // 0x40c1b0
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40c1bd
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40c1cd
    return result2;
}
// Address range: 0x40c1d0 - 0x40c237
int64_t function_40c1d0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c1d3
    int64_t v2 = a1; // 0x40c1df
    int64_t v3 = 0; // 0x40c1df
    int64_t v4 = 0; // 0x40c1df
    int64_t v5 = 0; // 0x40c1df
    int64_t v6 = 0; // 0x40c1df
    int64_t v7; // 0x40c1d0
    int64_t v8; // 0x40c1d0
    int64_t v9; // 0x40c1d0
    if (v1 > a1) {
        while (true) {
          lab_0x40c1f1_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x40c1e8;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x40c1f7
                int64_t v13 = v10 + 1; // 0x40c1fb
                int64_t v14 = v11 + 1; // 0x40c1ff
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x40c206
                int64_t v16 = v14; // 0x40c206
                if (v12 == 0) {
                    goto lab_0x40c1e8;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x40c210
                    int64_t v18 = v16 + 1; // 0x40c214
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x40c210
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40c21d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x40c226
                        break;
                    }
                    goto lab_0x40c1f1_2;
                }
            }
        }
    }
  lab_0x40c226:
    // 0x40c226
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40c22f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40c22e
    return 0;
  lab_0x40c1e8:;
    int64_t v20 = v8 + 16; // 0x40c1e8
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x40c226
        goto lab_0x40c226;
    }
    goto lab_0x40c1f1_2;
    // 0x40c1f1
    goto lab_0x40c1f1_2;
}
// Address range: 0x40c240 - 0x40c388
int64_t function_40c240(uint64_t a1, int64_t a2) {
    // 0x40c240
    int128_t v1; // 0x40c240
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40c253
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40c257
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40c25e
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40c270
            while (*(int64_t *)v7 == 0) {
                // 0x40c270
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40c2ad
                    goto lab_0x40c2ad;
                }
            }
        }
    }
  lab_0x40c2ad:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40c2bc
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40c240
    int128_t v10; // 0x40c240
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40c353
        int128_t v12 = __asm_mulsd_4(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40c35c
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40c2f3;
        } else {
            goto lab_0x40c369;
        }
    } else {
        int128_t v13 = __asm_mulsd_4(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40c2e6
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40c369;
        } else {
            goto lab_0x40c2f3;
        }
    }
  lab_0x40c2f3:
    // 0x40c2f3
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40c2f7
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40c2f7
    goto lab_0x40c2fc;
  lab_0x40c369:
    // 0x40c369
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40c37a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40c2fc;
  lab_0x40c2fc:
    // 0x40c2fc
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd_10(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40c390 - 0x40c3e3
int64_t function_40c390(int64_t a1, int64_t result) {
    int64_t v1 = function_40be30(a1, result); // 0x40c39a
    int64_t v2 = *(int64_t *)v1; // 0x40c39f
    if (v2 == 0) {
        // 0x40c3cd
        return 0;
    }
    // 0x40c3b3
    if (v2 == result) {
        // 0x40c3cd
        return result;
    }
    int64_t v3 = v1; // 0x40c3c4
    int64_t result2 = v2; // 0x40c3c2
    while ((char)v1 == 0) {
        // 0x40c3c4
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40c3cd
            break;
        }
        // 0x40c3b0
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40c3cd
            break;
        }
        result2 = v2;
    }
    // 0x40c3cd
    return result2;
}
// Address range: 0x40c3f0 - 0x40c438
int64_t function_40c3f0(uint64_t a1) {
    int64_t result = 0; // 0x40c3f5
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40c407
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c3fe
    if (v1 <= a1) {
        // 0x40c407
        return result;
    }
    int64_t v2 = a1; // 0x40c405
    int64_t v3 = *(int64_t *)v2; // 0x40c419
    result = v3;
    while (v3 == 0) {
        // 0x40c410
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40c407
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40c407
    return result;
}
// Address range: 0x40c440 - 0x40c4aa
int64_t function_40c440(int64_t a1, int64_t a2) {
    int64_t v1 = function_40be30(a1, a2); // 0x40c44c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40c468
    while (*(int64_t *)v2 != a2) {
        // 0x40c460
        if (v3 == 0) {
            goto lab_0x40c476;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40c4a0
        return *(int64_t *)v3;
    }
  lab_0x40c476:;
    int64_t v4 = v1 + 16; // 0x40c488
    int64_t result = 0; // 0x40c48f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40c480
        result = v5;
        if (v5 != 0) {
            // break -> 0x40c493
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40c493
    return result;
}
// Address range: 0x40c4b0 - 0x40c514
int64_t function_40c4b0(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40c4b6
    int64_t result = 0; // 0x40c4ba
    if (*v1 <= a1) {
      lab_0x40c4d1:
        // 0x40c4d1
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40c4bf
    int64_t v4 = v2; // 0x40c4c5
    int64_t v5; // 0x40c4b0
    int64_t v6; // 0x40c4b0
    int64_t v7; // 0x40c4f8
    int64_t v8; // 0x40c501
    int64_t v9; // 0x40c4e1
    int64_t v10; // 0x40c4e5
    if (v3 != 0) {
        // 0x40c4d8
        if (v2 >= a3) {
            // break -> 0x40c4d1
            break;
        }
        // 0x40c4dd
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
            // 0x40c4f5
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40c4f0
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40c4f5
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
    int64_t v12 = a1 + 16; // 0x40c4c7
    result = v11;
    while (*v1 > v12) {
        // 0x40c4bf
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40c4d8
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40c4d1
                break;
            }
            // 0x40c4dd
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
                // 0x40c4f5
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40c4f0
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40c4f5
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40c4c7
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40c4d1
    return result;
}
// Address range: 0x40c520 - 0x40c598
int64_t function_40c520(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40c531
    int64_t result = 0; // 0x40c535
    if (v1 <= a1) {
      lab_0x40c554:
        // 0x40c554
        return result;
    }
    int64_t v2 = a1; // 0x40c54a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40c548
    int64_t v5 = v2; // 0x40c548
    int64_t v6 = v3; // 0x40c548
    int64_t v7; // 0x40c520
    int64_t v8; // 0x40c578
    int64_t v9; // 0x40c57c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40c578
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40c588
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40c578
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
        // 0x40c542
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40c578
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40c588
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40c578
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40c54a
        result2 = v4;
        v2 += 16;
    }
    // 0x40c554
    return result2;
}
// Address range: 0x40c5a0 - 0x40c5d1
int64_t function_40c5a0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40c5a7
    if (v1 == 0) {
        // 0x40c5cd
        return 0;
    }
    int64_t result = 0; // 0x40c5a7
    v2++;
    char v3 = *(char *)v2; // 0x40c5c3
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40c5cd
    return result;
}
// Address range: 0x40c5e0 - 0x40c600
int64_t function_40c5e0(int64_t a1) {
    // 0x40c5e0
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40c600 - 0x40c78a
int64_t function_40c600(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x40c600
    int128_t v1; // 0x40c600
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40c63a
    int64_t result = (int64_t)mem; // 0x40c63a
    if (mem == NULL) {
        // 0x40c6ea
        return result;
    }
    int64_t v3 = result + 40; // 0x40c64b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40c600
    int128_t v6; // 0x40c600
    if (a2 == 0) {
        // 0x40c700
        *v4 = (int64_t)&g13;
        int64_t v7 = function_40bf80(v3); // 0x40c708
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40c70d
        if ((char)v7 == 0) {
            // 0x40c6e0
            free(mem);
            // 0x40c6ea
            return 0;
        }
        // 0x40c719
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40c763;
        } else {
            goto lab_0x40c71e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_40bf80(v3) == 0) {
            // 0x40c6e0
            free(mem);
            // 0x40c6ea
            return 0;
        }
        // 0x40c665
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_40bd70(a1); // 0x40c673
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40c6e0
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40c6e0
                free(mem);
                // 0x40c6ea
                return 0;
            }
            // 0x40c691
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40c6e0
                free(mem);
                // 0x40c6ea
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40c6a2
            int64_t v10 = (int64_t)mem2; // 0x40c6a2
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40c6e0
                free(mem);
                // 0x40c6ea
                return 0;
            }
            // 0x40c6af
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x40be10 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x40be20 : a4;
            *(int64_t *)(result + 64) = (int64_t)a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40c6ea
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40c758
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40c71e;
        } else {
            goto lab_0x40c763;
        }
    }
  lab_0x40c763:
    // 0x40c763
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40c773
    int128_t v13 = v6; // 0x40c77c
    int128_t v14 = __asm_addss(v12, v12); // 0x40c77c
    goto lab_0x40c727;
  lab_0x40c71e:
    // 0x40c71e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40c727;
  lab_0x40c727:
    // 0x40c727
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40c6e0
    free(mem);
    // 0x40c6ea
    return 0;
}
// Address range: 0x40c790 - 0x40c838
int64_t function_40c790(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40c79a
    uint64_t v2 = *v1; // 0x40c79a
    int64_t result; // 0x40c790
    if (v2 <= a1) {
      lab_0x40c823:
        // 0x40c823
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40c7a8
    while (*v6 == 0) {
        // 0x40c7a8
        v7 = v5 + 16;
        int64_t v8; // 0x40c790
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40c823
            goto lab_0x40c823;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40c7b9
    int64_t v10 = *v9; // 0x40c7b9
    int64_t v11 = *v3; // 0x40c7be
    int64_t v12 = v11; // 0x40c7c5
    int64_t v13 = v10; // 0x40c7c5
    int64_t result2 = v11; // 0x40c7c5
    int64_t * v14; // 0x40c7de
    int64_t v15; // 0x40c7de
    int64_t v16; // 0x40c7da
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40c7d5
            v16 = *v3;
        }
        // 0x40c7de
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40c7d0
            v16 = 0;
            if (v12 != 0) {
                // 0x40c7d5
                v16 = *v3;
            }
            // 0x40c7de
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
    // 0x40c7fd
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40c810
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40c81d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40c7ac
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40c7a8
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40c823
                goto lab_0x40c823;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40c7b9
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40c7d5
                v16 = *v3;
            }
            // 0x40c7de
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40c7d0
                v16 = 0;
                if (v12 != 0) {
                    // 0x40c7d5
                    v16 = *v3;
                }
                // 0x40c7de
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
        // 0x40c7fd
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40c823
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40c840 - 0x40c916
int64_t function_40c840(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40c84f
    uint64_t v2 = *v1; // 0x40c84f
    int64_t v3 = a1; // 0x40c853
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40c8a3;
    } else {
        // 0x40c855
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40c8a3;
        } else {
            // 0x40c85c
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40c871
                int64_t v6; // 0x40c868
                while (v5 == 0) {
                    // 0x40c868
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40c8a3
                        goto lab_0x40c8a3;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40c888
                int64_t v8 = v7; // 0x40c88f
                int64_t v9 = v5; // 0x40c88f
                int64_t v10; // 0x40c840
                int64_t v11; // 0x40c888
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40c880
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40c883
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40c896
                v3 = v9;
                while (v2 > v12) {
                    // 0x40c871
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40c868
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40c8a3
                            goto lab_0x40c8a3;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40c883
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40c880
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40c883
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40c891
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40c8a3;
            } else {
                goto lab_0x40c8dc;
            }
        }
    }
  lab_0x40c8a3:
    // 0x40c8a3
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40c8b0
        int64_t v14 = v13; // 0x40c8b7
        int64_t v15 = v2; // 0x40c8b7
        int64_t v16; // 0x40c8c0
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40c8c0
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40c8d1
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40c8d1
        int64_t v18 = v15; // 0x40c8da
        int64_t v19 = v17; // 0x40c8da
        while (v15 > v17) {
            // 0x40c8b0
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40c8c0
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40c8d1
                v15 = *v1;
            }
            // 0x40c8d1
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40c8dc;
  lab_0x40c8dc:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40c8dc
    if (v20 == 0) {
        // 0x40c901
        free(NULL);
        free((int64_t *)a1);
        return &g122;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40c8f0
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40c8ff
    while (v21 != 0) {
        // 0x40c8f0
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40c901
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g122;
}
// Address range: 0x40c920 - 0x40cb1a
int64_t function_40c920(int64_t a1, uint64_t a2) {
    // 0x40c920
    int128_t v1; // 0x40c920
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40c92b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40c920
        if (a2 < 0) {
            // 0x40caa0
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40cab0
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40c940
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40c949
        __asm_comiss(__asm_divss_9(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40ca92
        return 0;
    }
    uint64_t nmemb = function_40bd70(a2); // 0x40c983
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40ca92
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40c9bb
    if (*v6 == nmemb) {
        // 0x40ca92
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40c9cd
    int64_t v7 = (int64_t)mem; // 0x40c9cd
    int64_t v8 = v7; // bp-104, 0x40c9d2
    if (mem == NULL) {
        // 0x40ca92
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40ca2a
    int64_t v10 = *v9; // 0x40ca2a
    int64_t v11 = function_40c000(&v8, a1, 0); // 0x40ca33
    int64_t result = v11 & 0xffffffff; // 0x40ca38
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40c9f4
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40ca56
        function_40c000(v13, v12, 1);
        function_40c000(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40cae0
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40ca92
    return result;
}
// Address range: 0x40cb20 - 0x40cd94
int64_t function_40cb20(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40cb20
    int128_t v1; // 0x40cb20
    int128_t v2 = v1;
    int128_t v3 = v1;
    if (a2 == 0) {
        abort();
        // UNREACHABLE
    }
    // 0x40cb31
    int64_t v4; // bp-32, 0x40cb20
    int64_t v5 = function_40be60(a1, a2, &v4, 0); // 0x40cb41
    if (v5 != 0) {
        // 0x40cb4e
        if (a3 != NULL) {
            // 0x40cb55
            *a3 = v5;
        }
        // 0x40cb59
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40cb68
    uint64_t v7 = *v6; // 0x40cb68
    int64_t v8; // 0x40cb20
    int64_t v9; // 0x40cb20
    int64_t v10; // 0x40cb20
    int128_t v11; // 0x40cb20
    int128_t v12; // 0x40cb20
    int64_t v13; // 0x40cb20
    if (v7 < 0) {
        // 0x40cbf0
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40cc00
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40cc04
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40cc09
        int128_t v17 = __asm_addss(v15, v15); // 0x40cc0d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40cb8b;
        } else {
            goto lab_0x40cc1a;
        }
    } else {
        // 0x40cb71
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40cb75
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40cb79
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40cb7e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40cc1a;
        } else {
            goto lab_0x40cb8b;
        }
    }
  lab_0x40cb8b:
    // 0x40cb8b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40cb94
    __asm_comiss_5(v11, v21);
    int128_t v22 = v21; // 0x40cb9c
    int128_t v23 = v11; // 0x40cb9c
    if (v13 == 0) {
        goto lab_0x40cba2;
    } else {
        goto lab_0x40cc41;
    }
  lab_0x40cc1a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40cc27
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40cc2a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40cc33
    __asm_comiss_5(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40cba2;
    } else {
        goto lab_0x40cc41;
    }
  lab_0x40cba2:;
    int64_t * v28 = (int64_t *)v4; // 0x40cba7
    if (*v28 == 0) {
        // 0x40ccb8
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40ccc1
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40cbb2
    int64_t v31 = *v30; // 0x40cbb2
    int64_t * v32; // 0x40cb20
    int64_t v33; // 0x40cb20
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40ccdd
        if (mem == NULL) {
            // 0x40cb59
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40ccdd
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40cbc7
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40cbdd
    *v37 = *v37 + 1;
    return 1;
  lab_0x40cc41:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40cc41
    function_40bf80(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40cc4a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40cc4e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40cc52
    int128_t v44; // 0x40cb20
    if (v42 < 0) {
        // 0x40cd10
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40cd20
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40cc60
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40cc69
    int128_t v47; // 0x40cb20
    int64_t v48; // 0x40cb20
    if (v46 < 0) {
        // 0x40ccf0
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40ccfd
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40cd00
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40cc72
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40cc76
        v48 = v46;
        v47 = v51;
    }
    // 0x40cc7b
    __asm_comiss_5(v47, __asm_mulss_8(__asm_movaps_7(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40cc8b
        int128_t v53 = v52; // 0x40cc94
        if (*(char *)(v41 + 16) == 0) {
            // 0x40cd30
            v53 = __asm_mulss_8(v52, v43);
        }
        // 0x40cc9a
        __asm_comiss(v53, 0x5f800000);
        // 0x40cb59
        return 0xffffffff;
    }
    goto lab_0x40cba2;
}
// Address range: 0x40cda0 - 0x40cddb
int64_t function_40cda0(int64_t a1, int64_t a2) {
    // 0x40cda0
    int64_t v1; // bp-16, 0x40cda0
    int64_t v2; // 0x40cda0
    int32_t v3 = function_40cb20(a1, a2, &v1, v2); // 0x40cdb2
    if (v3 == -1) {
        // 0x40cdc0
        return 0;
    }
    // 0x40cdb7
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40cde0 - 0x40cfb7
int64_t function_40cde0(int64_t a1) {
    // 0x40cde0
    int128_t v1; // 0x40cde0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40cde0
    int64_t v5; // 0x40cde0
    int64_t result = function_40be60(a1, v5, &v4, 1); // 0x40cdf5
    if (result == 0) {
        // 0x40ce12
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40ce07
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40ce12
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40ce20
    uint64_t v8 = *v7 - 1; // 0x40ce24
    *v7 = v8;
    int64_t v9; // 0x40cde0
    int64_t v10; // 0x40cde0
    int64_t v11; // 0x40cde0
    int128_t v12; // 0x40cde0
    int128_t v13; // 0x40cde0
    int64_t v14; // 0x40cde0
    if (v8 < 0) {
        // 0x40cf10
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40cf20
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40cf24
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40cf29
        int128_t v18 = __asm_addss(v16, v16); // 0x40cf2d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40ce4c;
        } else {
            goto lab_0x40cf3a;
        }
    } else {
        // 0x40ce32
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40ce36
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40ce3a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40ce3f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40cf3a;
        } else {
            goto lab_0x40ce4c;
        }
    }
  lab_0x40ce4c:
    // 0x40ce4c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40ce50
    int64_t v23 = v14; // 0x40ce50
    int128_t v24 = v12; // 0x40ce50
    int64_t v25 = v10; // 0x40ce50
    int128_t v26 = v22; // 0x40ce50
    goto lab_0x40ce55;
  lab_0x40cf3a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40cf47
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40cf4a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40ce55;
  lab_0x40ce55:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40ce55
    __asm_comiss_5(v28, v27);
    if (v23 == 0) {
        // 0x40ce12
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40ce5e
    function_40bf80(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40ce67
    int64_t v31 = *(int64_t *)v29; // 0x40ce6b
    int128_t v32; // 0x40cde0
    if (v30 < 0) {
        // 0x40cf80
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40cf90
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40ce78
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40ce81
    int128_t v35; // 0x40cde0
    int64_t v36; // 0x40cde0
    if (v34 < 0) {
        // 0x40cf60
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40cf6d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40cf70
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40ce8e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40ce92
        v36 = v34;
        v35 = v39;
    }
    // 0x40ce97
    __asm_comiss_5(__asm_mulss_8(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40ce12
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40cea8
    int128_t v41 = v40; // 0x40ceb1
    if (*(char *)(v31 + 16) == 0) {
        // 0x40ceb3
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40ceb8
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40cfa8
    if ((char)function_40c920(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40ce12
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40ceda
    if (*v43 != 0) {
        int64_t v44; // 0x40cde0
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40cee8
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40cef9
    *v43 = 0;
    // 0x40ce12
    return result;
}
// Address range: 0x40cfc0 - 0x40cfc3
int64_t function_40cfc0(void) {
    // 0x40cfc0
    return 0;
}
// Address range: 0x40cfd0 - 0x40d04d
int64_t function_40cfd0(int64_t a1, uint64_t a2) {
    int64_t result = function_411210(32); // 0x40cfdf
    int64_t v1 = 1; // 0x40cfea
    int64_t v2 = 8; // 0x40cfea
    if (a2 != 0) {
        // 0x40cfec
        v2 = 8 * a2;
        v1 = a2;
        if (v2 > -1 != a2 < 0x2000000000000000) {
            // 0x40d007
            function_411460(v2);
            // UNREACHABLE
        }
    }
    int64_t v3 = function_411210(v2); // 0x40d01a
    *(int64_t *)(result + 8) = v1;
    *(int64_t *)v3 = 0;
    *(int64_t *)result = v3;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 24) = a1 == 0 ? 0x40cfc0 : a1;
    return result;
}
// Address range: 0x40d050 - 0x40d065
int64_t function_40d050(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40d057
    free(v1);
    free(v1);
    return &g122;
}
// Address range: 0x40d070 - 0x40d184
int64_t function_40d070(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8);
    uint64_t v2 = *v1; // 0x40d084
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x40d088
    uint64_t v4 = *v3; // 0x40d088
    int64_t v5 = a1; // 0x40d096
    int64_t v6 = v4; // 0x40d096
    if (v2 - 1 <= v4) {
        int64_t v7; // 0x40d070
        int64_t v8; // 0x40d070
        if (a1 == 0) {
            // 0x40d150
            v7 = 16;
            v8 = 128;
            if (v2 != 0) {
                int64_t v9 = 8 * v2; // 0x40d164
                v7 = v2;
                v8 = v9;
                if (v9 > -1 != v2 < 0x2000000000000000) {
                    // 0x40d16f
                    function_411460(v2 / 0x2000000000000000);
                    // UNREACHABLE
                }
            }
        } else {
            // 0x40d115
            if (v2 >= 0xaaaaaaaaaaaaaaa) {
                // 0x40d16f
                function_411460(a1);
                // UNREACHABLE
            }
            int64_t v10 = v2 + 1 + v2 / 2; // 0x40d12a
            v7 = v10;
            v8 = 8 * v10;
        }
        // 0x40d137
        *v1 = v7;
        v5 = function_411270(a1, v8);
        v6 = *v3;
        *(int64_t *)a1 = v5;
    }
    int64_t v11 = v6 + 1; // 0x40d098
    *v3 = v11;
    int64_t v12 = 8 * v11; // 0x40d0a0
    *(int64_t *)(v12 + v5) = a2;
    int64_t v13 = *(int64_t *)(v12 + a1); // 0x40d0ac
    int64_t v14 = v5; // 0x40d0b5
    if (v6 == 0) {
        // 0x40d0ee
        *v1 = v13;
        return 0;
    }
    uint64_t v15 = v11;
    int64_t v16 = 8 * v15 + a1; // 0x40d0e5
    while ((int32_t)v14 < 1) {
        int64_t v17 = v15 / 2; // 0x40d0d6
        v14 = *(int64_t *)(8 * v17 + a1);
        *(int64_t *)v16 = v14;
        if ((v15 & -2) == 2) {
            // 0x40d0ee
            *v1 = v13;
            return 0;
        }
        v15 = v17;
        v16 = 8 * v15 + a1;
    }
    // 0x40d0ee
    *(int64_t *)v16 = v13;
    return 0;
}
// Address range: 0x40d190 - 0x40d2ad
int64_t function_40d190(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x40d19e
    int64_t v2 = *v1; // 0x40d19e
    if (v2 == 0) {
        // 0x40d288
        return 0;
    }
    uint64_t v3 = v2 - 1; // 0x40d1b7
    int64_t v4 = *(int64_t *)(8 * v2 + a1); // 0x40d1bb
    int64_t * v5 = (int64_t *)(a1 + 8);
    int64_t result = *v5; // 0x40d1bf
    *v1 = v3;
    *v5 = v4;
    uint64_t v6 = v3 / 2; // 0x40d1e3
    if (v3 < 2) {
        // 0x40d280
        *v5 = v4;
      lab_0x40d288:
        // 0x40d288
        return result;
    }
    int64_t v7 = 1;
    int64_t v8 = 2 * v7; // 0x40d22d
    int32_t v9; // 0x40d190
    int64_t v10; // 0x40d190
    int64_t v11; // 0x40d190
    int32_t v12; // 0x40d190
    int64_t v13; // 0x40d239
    if (v3 > v8) {
        // 0x40d236
        v13 = v8 | 1;
        v12 = v6;
        v9 = v12;
        v10 = v12 < 0 ? 8 * v13 : 16 * v7;
        v11 = v12 < 0 ? v13 : v8;
    } else {
        // 0x40d200
        v9 = v6;
        v10 = 16 * v7;
        v11 = v8;
    }
    int64_t v14 = 8 * v7 + a1; // 0x40d215
    while (v9 >= 1) {
        int64_t * v15 = (int64_t *)(v10 + a1);
        int64_t v16 = *v15; // 0x40d21d
        *(int64_t *)v14 = v16;
        if (v11 > v6) {
            // 0x40d2a0
            *v15 = v4;
            return result;
        }
        v7 = v11;
        int64_t v17 = v16;
        v8 = 2 * v7;
        if (v3 > v8) {
            // 0x40d236
            v13 = v8 | 1;
            v12 = v17;
            v9 = v12;
            v10 = v12 < 0 ? 8 * v13 : 16 * v7;
            v11 = v12 < 0 ? v13 : v8;
        } else {
            // 0x40d200
            v9 = v17;
            v10 = 16 * v7;
            v11 = v8;
        }
        // 0x40d20a
        v14 = 8 * v7 + a1;
    }
    // 0x40d280
    *(int64_t *)v14 = v4;
    // 0x40d288
    return result;
}
// Address range: 0x40d2b0 - 0x40d32c
int64_t function_40d2b0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 11; // 0x40d2b0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x40d2cb
    if ((int32_t)a1 >= 0) {
        result--;
        uint64_t v2 = 0xcccccccd * (a1 & 0xffffffff); // 0x40d2d6
        int64_t v3 = v2 / 0x800000000; // 0x40d2d6
        *(char *)result = (char)a1 + 48 + -10 * (char)v3;
        while (v2 >= 0x800000000) {
            int64_t v4 = v3;
            result--;
            v2 = 0xcccccccd * (v4 & 0xffffffff);
            v3 = v2 / 0x800000000;
            *(char *)result = (char)v4 + 48 + -10 * (char)v3;
        }
        // 0x40d2ee
        return result;
    }
    int64_t v5 = a1;
    int64_t v6 = v1;
    uint32_t v7 = ((int32_t)(0x66666667 * (0x100000000 * v5 >> 32) / 0x100000000) >> 2) - ((int32_t)v5 >> 31); // 0x40d30c
    int64_t v8 = v6 - 1; // 0x40d319
    *(char *)v8 = 48 - (char)v5 + 10 * (char)v7;
    while (v7 != 0) {
        // 0x40d2fb
        v5 = v7;
        v6 = v8;
        v7 = ((int32_t)(0x66666667 * (0x100000000 * v5 >> 32) / 0x100000000) >> 2) - ((int32_t)v5 >> 31);
        v8 = v6 - 1;
        *(char *)v8 = 48 - (char)v5 + 10 * (char)v7;
    }
    int64_t result2 = v6 - 2; // 0x40d320
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x40d330 - 0x40d369
int64_t function_40d330(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 10; // 0x40d330
    *(char *)v1 = 0;
    int64_t result = v1; // 0x40d33d
    int64_t v2 = a1;
    result--;
    int64_t v3 = 0xcccccccd * (v2 & 0xffffffff) / 0x800000000; // 0x40d34b
    *(char *)result = (char)v2 + 48 + -10 * (char)v3;
    while ((int32_t)v2 >= 10) {
        // 0x40d342
        v2 = v3;
        result--;
        v3 = 0xcccccccd * (v2 & 0xffffffff) / 0x800000000;
        *(char *)result = (char)v2 + 48 + -10 * (char)v3;
    }
    // 0x40d365
    return result;
}
// Address range: 0x40d370 - 0x40d3b8
int64_t function_40d370(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x40d370
    *(char *)v1 = 0;
    int64_t result = v1; // 0x40d382
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40d38b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x40d3b4
    return result;
}
// Address range: 0x40d3c0 - 0x40d573
int64_t function_40d3c0(uint64_t a1, int64_t a2, uint32_t a3) {
    uint64_t v1 = a2 + a1; // 0x40d3c9
    int64_t v2; // 0x40d3c0
    int64_t v3; // 0x40d3c0
    int64_t v4; // 0x40d3c0
    int64_t v5; // 0x40d3c0
    int64_t v6; // 0x40d3c0
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x40d500
        if (v1 <= a1) {
            // 0x40d4e6
            return 0;
        }
        int16_t * v7 = *__ctype_b_loc(); // 0x40d514
        v6 = a1;
        v3 = 0;
        while (true) {
          lab_0x40d520:
            // 0x40d520
            v4 = v3;
            unsigned char v8 = *(char *)v6; // 0x40d524
            int16_t v9 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)v7); // 0x40d528
            if ((v9 & 0x4000) != 0) {
                goto lab_0x40d53a;
            } else {
                // 0x40d531
                v2 = 0xffffffff;
                if ((a3 & 2) != 0) {
                    // break -> 0x40d4e6
                    break;
                }
                // 0x40d536
                v5 = v4;
                if ((v9 & 2) != 0) {
                    goto lab_0x40d547;
                } else {
                    goto lab_0x40d53a;
                }
            }
        }
      lab_0x40d4e6_7:
        // 0x40d4e6
        return v2 & 0xffffffff;
    }
    // 0x40d3e7
    if (v1 <= a1) {
        // 0x40d4e6
        return 0;
    }
    uint64_t v10 = (int64_t)a3; // 0x40d3c2
    int64_t v11 = a1;
    int64_t v12 = 0; // 0x40d3c0
    int64_t v13; // 0x40d3c0
    int64_t v14; // 0x40d3c0
    int64_t v15; // 0x40d3c0
    int64_t v16; // 0x40d3c0
    while (true) {
      lab_0x40d41c:
        // 0x40d41c
        v14 = v12;
        v16 = v11;
        char v17 = *(char *)v16; // 0x40d41c
        if (v17 < 64) {
            // 0x40d400
            v15 = v16;
            v13 = v14;
            if (v17 > 36 || (v17 & -4) == 32) {
                goto lab_0x40d40b;
            } else {
                goto lab_0x40d432;
            }
        } else {
            if (v17 == 64) {
                goto lab_0x40d432;
            } else {
                // 0x40d427
                v15 = v16;
                v13 = v14;
                if (v17 < 96 || v17 < 127) {
                    goto lab_0x40d40b;
                } else {
                    goto lab_0x40d432;
                }
            }
        }
    }
  lab_0x40d4e6_7:
    // 0x40d4e6
    return v2 & 0xffffffff;
  lab_0x40d53a:
    // 0x40d53a
    v2 = v4;
    if ((int32_t)v4 == 0x7fffffff) {
        return v2 & 0xffffffff;
    }
    // 0x40d543
    v5 = v4 + 1 & 0xffffffff;
    goto lab_0x40d547;
  lab_0x40d547:;
    int64_t v18 = v6 + 1; // 0x40d520
    v2 = v5;
    v6 = v18;
    v3 = v5;
    if (v1 == v18) {
        // break -> 0x40d4e6
        goto lab_0x40d4e6_7;
    }
    goto lab_0x40d520;
  lab_0x40d40b:;
    int64_t v19 = v15 + 1; // 0x40d40f
    v12 = v13 + 1 & 0xffffffff;
  lab_0x40d413:
    // 0x40d413
    v11 = v19;
    if (v11 >= v1) {
        // break -> 0x40d4e6
        goto lab_0x40d4e6_7;
    }
    goto lab_0x40d41c;
  lab_0x40d432:;
    int64_t ps = 0; // bp-64, 0x40d432
    int64_t v20 = v16; // 0x40d43b
    int64_t v21 = v14; // 0x40d43b
    int64_t v22; // 0x40d3c0
    int64_t v23; // 0x40d3c0
    while (true) {
      lab_0x40d464:
        // 0x40d464
        v22 = v21;
        v23 = v20;
        int32_t wc; // bp-68, 0x40d3c0
        int64_t v24 = function_412fb0((int64_t *)&wc, v23, v1 - v23); // 0x40d477
        switch (v24) {
            case -1: {
                goto lab_0x40d4d0;
            }
            case -2: {
                // 0x40d550
                v2 = 0xffffffff;
                if (v10 % 2 == 0) {
                    // 0x40d413
                    v2 = v22 + 1 & 0xffffffff;
                }
                // 0x40d4e6
                return v2 & 0xffffffff;
            }
            default: {
                int32_t v25 = wcwidth(wc); // 0x40d49a
                int64_t v26; // 0x40d3c0
                if (v25 >= 0) {
                    int64_t v27 = v25; // 0x40d49a
                    v2 = 0x7fffffff;
                    if ((0x7fffffff - v22 & 0xffffffff) < v27) {
                        // break (via goto) -> 0x40d4e6
                        goto lab_0x40d4e6_7;
                    }
                    // 0x40d450
                    v26 = v22 + v27 & 0xffffffff;
                } else {
                    // 0x40d4a3
                    v2 = 0xffffffff;
                    if ((v10 & 2) != 0) {
                        // break (via goto) -> 0x40d4e6
                        goto lab_0x40d4e6_7;
                    }
                    // 0x40d4a9
                    v26 = v22;
                    if (iswcntrl(wc) == 0) {
                        // 0x40d4b6
                        v2 = 0x7fffffff;
                        if ((int32_t)v22 == 0x7fffffff) {
                            // break (via goto) -> 0x40d4e6
                            goto lab_0x40d4e6_7;
                        }
                        // 0x40d4c3
                        v26 = v22 + 1 & 0xffffffff;
                    }
                }
                int64_t v28 = (v24 == 0 ? 1 : v24) + v23; // 0x40d458
                int32_t v29 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40d45b
                v19 = v28;
                v12 = v26;
                v20 = v28;
                v21 = v26;
                if (v29 != 0) {
                    goto lab_0x40d413;
                }
                goto lab_0x40d464;
            }
        }
    }
  lab_0x40d4d0:
    // 0x40d4d0
    v15 = v23;
    v13 = v22;
    v2 = 0xffffffff;
    if (v10 % 2 != 0) {
        // break -> 0x40d4e6
        goto lab_0x40d4e6_7;
    }
    goto lab_0x40d40b;
}
// Address range: 0x40d580 - 0x40d5a3
int64_t function_40d580(int64_t str, int64_t a2) {
    // 0x40d580
    return function_40d3c0(str, (int64_t)strlen((char *)str), (int32_t)a2);
}
// Address range: 0x40d5b0 - 0x40d5f4
int64_t function_40d5b0(int64_t a1) {
    // 0x40d5b0
    int64_t v1; // bp-136, 0x40d5b0
    if (sched_getaffinity(0, 128, (struct _TYPEDEF_cpu_set_t *)&v1) != 0) {
        // 0x40d5ca
        return 0;
    }
    int32_t result = __sched_cpucount(128, (struct _TYPEDEF_cpu_set_t *)&v1); // 0x40d5e0
    if (result == 0) {
        // 0x40d5ca
        return 0;
    }
    // 0x40d5ec
    return result;
}
// Address range: 0x40d600 - 0x40d6eb
int64_t function_40d600(void) {
    // 0x40d600
    int64_t v1; // 0x40d600
    uint64_t v2 = v1;
    unsigned char v3 = (char)v2;
    if (v3 == 0) {
        // 0x40d6d7
        return 0;
    }
    int64_t v4 = 0x100000000000000 * v2 / 0x100000000000000; // 0x40d60b
    int64_t v5 = v4; // 0x40d611
    int64_t str; // 0x40d600
    if (v3 < 33) {
        // 0x40d613
        v5 = v4;
        if ((1 << v2 % 64 & 0x100003e00) != 0) {
            int64_t v6; // 0x40d600
            int64_t v7 = v6 + 1; // 0x40d628
            unsigned char v8 = *(char *)v7; // 0x40d62c
            while (v8 != 0) {
                if (v8 >= 33) {
                    // 0x40d650
                    str = v7;
                    v5 = v8;
                    goto lab_0x40d650_3;
                }
                unsigned char v9 = v8 % 64;
                if (v9 == 0 || (1 << (int64_t)v9 & 0x100003e00) == 0) {
                    // 0x40d650
                    str = v7;
                    v5 = v8;
                    goto lab_0x40d650_3;
                }
                v7++;
                v8 = *(char *)v7;
            }
            // 0x40d6d7
            return 0;
        }
    }
    goto lab_0x40d650_3;
  lab_0x40d650_3:
    // 0x40d650
    if ((int32_t)v5 >= 58) {
        // 0x40d6d7
        return 0;
    }
    char * endptr = NULL; // bp-16, 0x40d667
    int32_t str_as_ul = strtoul((char *)str, &endptr, 10); // 0x40d675
    if (endptr == NULL) {
        // 0x40d6d7
        return 0;
    }
    int64_t result = str_as_ul; // 0x40d675
    unsigned char v10 = *endptr; // 0x40d684
    if (v10 == 0) {
        // 0x40d6d7
        return result;
    }
    char v11 = v10; // 0x40d691
    if (v10 >= 33) {
      lab_0x40d6d0:
        // 0x40d6d0
        if (v11 == 44) {
            // 0x40d6d7
            return result;
        }
        // 0x40d6d7
        return 0;
    }
    // 0x40d693
    if ((1 << (int64_t)(v10 % 64) & 0x100003e00) == 0) {
        // 0x40d6d7
        return 0;
    }
    int64_t v12 = (int64_t)endptr + 1;
    char * v13 = (char *)v12; // 0x40d6ad
    endptr = v13;
    unsigned char v14 = *v13; // 0x40d6b2
    while (v14 != 0) {
        // 0x40d6b9
        v11 = v14;
        if (v14 >= 33) {
            goto lab_0x40d6d0;
        }
        unsigned char v15 = v14 % 64;
        if (v15 == 0 || (1 << (int64_t)v15 & 0x100003e00) == 0) {
            // 0x40d6d7
            return 0;
        }
        v12++;
        v13 = (char *)v12;
        endptr = v13;
        v14 = *v13;
    }
    // 0x40d6d7
    return result;
}
// Address range: 0x40d6f0 - 0x40d837
int64_t function_40d6f0(int64_t a1) {
    int64_t v1 = a1; // 0x40d6f0
    int64_t v2; // 0x40d6f0
    int64_t v3; // 0x40d6f0
    switch ((int32_t)a1) {
        case 2: {
            // 0x40d730
            if (getenv("OMP_NUM_THREADS") == NULL) {
                char * env_val = getenv("OMP_THREAD_LIMIT"); // 0x40d80d
                v1 = (int64_t)"OMP_THREAD_LIMIT";
                if (env_val == NULL) {
                    goto lab_0x40d82b;
                } else {
                    int64_t v4 = (int64_t)env_val; // 0x40d80d
                    int64_t v5 = function_40d600(); // 0x40d81a
                    v2 = v5;
                    v3 = v4;
                    v1 = v4;
                    if (v5 != 0) {
                        goto lab_0x40d782;
                    } else {
                        goto lab_0x40d82b;
                    }
                }
            } else {
                uint64_t v6 = function_40d600(); // 0x40d74d
                char * env_val2 = getenv("OMP_THREAD_LIMIT"); // 0x40d75a
                int64_t v7 = -1; // 0x40d762
                int64_t v8 = (int64_t)"OMP_THREAD_LIMIT"; // 0x40d762
                if (env_val2 != NULL) {
                    int64_t v9 = function_40d600(); // 0x40d767
                    v7 = v9 == 0 ? -1 : v9;
                    v8 = (int64_t)env_val2;
                }
                int64_t v10 = v7;
                v2 = v10;
                v3 = v8;
                if (v6 != 0) {
                    // 0x40d7f0
                    return v10 > v6 ? v6 : v10;
                }
                goto lab_0x40d782;
            }
        }
        case 1: {
            goto lab_0x40d82b;
        }
        default: {
            int32_t v11 = sysconf(_SC_THREAD_PROCESS_SHARED); // 0x40d709
            int64_t v12 = v11; // 0x40d712
            if (v11 == 1) {
                // 0x40d7d0
                v12 = function_40d5b0(83);
                if (v12 == 0) {
                    // 0x40d724
                    return 1;
                }
            }
            int64_t v13 = v12;
            // 0x40d724
            return v13 > 1 ? v13 : 1;
        }
    }
  lab_0x40d82b:
    // 0x40d82b
    v2 = -1;
    v3 = v1;
    goto lab_0x40d782;
  lab_0x40d782:;
    uint64_t v14 = v2;
    uint64_t v15 = function_40d5b0(v3); // 0x40d782
    if (v15 != 0) {
        // 0x40d78c
        return v15 > v14 ? v14 : v15;
    }
    int32_t v16 = sysconf(_SC_NPROCESSORS_CONF); // 0x40d7a5
    int64_t result = 1; // 0x40d7b5
    if (v16 >= 1) {
        uint64_t v17 = (int64_t)v16; // 0x40d7a5
        result = v14 < v17 ? v14 : v17;
    }
    // 0x40d724
    return result;
}
// Address range: 0x40d840 - 0x40d8fb
int64_t function_40d840(void) {
    // 0x40d840
    int128_t v1; // 0x40d840
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = v1;
    int32_t v5 = sysconf(_SC_NPROCESSORS_ONLN); // 0x40d84c
    __asm_pxor(v4, v4);
    int64_t v6 = __asm_movsd(__asm_cvtsi2sd((int64_t)v5)); // 0x40d85f
    int32_t v7 = sysconf(_SC_PAGESIZE); // 0x40d865
    int128_t v8 = __asm_movsd_3(v6); // 0x40d86a
    int128_t v9 = __asm_pxor(v2, v2); // 0x40d870
    __asm_comisd(v8, v9);
    int64_t v10; // 0x40d840
    if ((uint64_t)v10 >= 136) {
        int64_t result = v7; // 0x40d865
        __asm_pxor(v3, v3);
        int128_t v11 = __asm_cvtsi2sd(result); // 0x40d87e
        __asm_comisd(v11, v9);
        // 0x40d8d0
        __asm_mulsd(v8, v11);
        return result;
    }
    // 0x40d889
    int64_t v12; // bp-120, 0x40d840
    int32_t result2 = sysinfo((struct sysinfo *)&v12); // 0x40d88e
    int128_t v13 = __asm_movsd_3(0x4190000000000000); // 0x40d893
    if (result2 != 0) {
        // 0x40d89f
        return result2;
    }
    // 0x40d8b0
    int32_t v14; // 0x40d840
    uint64_t v15 = (int64_t)v14; // 0x40d8b0
    int128_t v16; // 0x40d840
    if (v14 < 0) {
        // 0x40d8e0
        __asm_pxor(v13, v13);
        int128_t v17 = __asm_cvtsi2sd(v15 / 2 | v15 % 2); // 0x40d8f0
        v16 = __asm_addsd(v17, v17);
    } else {
        // 0x40d8ba
        __asm_pxor(v13, v13);
        v16 = __asm_cvtsi2sd(v15);
    }
    int64_t result3 = v14; // 0x40d8c3
    __asm_pxor(v3, v3);
    // 0x40d8d0
    __asm_mulsd(v16, __asm_cvtsi2sd(result3));
    return result3;
}
// Address range: 0x40d900 - 0x40d9f6
int64_t function_40d900(void) {
    // 0x40d900
    int128_t v1; // 0x40d900
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = v1;
    int32_t v5 = sysconf(_SC_PHYS_PAGES); // 0x40d90c
    __asm_pxor(v4, v4);
    int64_t v6 = __asm_movsd(__asm_cvtsi2sd((int64_t)v5)); // 0x40d91f
    int32_t v7 = sysconf(_SC_PAGESIZE); // 0x40d925
    int128_t v8 = __asm_movsd_3(v6); // 0x40d92a
    int128_t v9 = __asm_pxor(v2, v2); // 0x40d930
    __asm_comisd(v8, v9);
    int64_t v10; // 0x40d900
    if ((uint64_t)v10 >= 136) {
        int64_t result = v7; // 0x40d925
        __asm_pxor(v3, v3);
        int128_t v11 = __asm_cvtsi2sd(result); // 0x40d93e
        __asm_comisd(v11, v9);
        // 0x40d98e
        __asm_mulsd(v8, v11);
        return result;
    }
    // 0x40d949
    int64_t v12; // bp-120, 0x40d900
    if (sysinfo((struct sysinfo *)&v12) != 0) {
        int64_t result2 = function_40d840(); // 0x40d9a0
        __asm_mulsd_4(v8, 0x3fd0000000000000);
        return result2;
    }
    // 0x40d957
    int32_t v13; // 0x40d900
    uint64_t v14 = (int64_t)v13; // 0x40d957
    int64_t v15; // 0x40d900
    int64_t v16; // 0x40d900
    int128_t v17; // 0x40d900
    int128_t v18; // 0x40d900
    if (v13 < 0) {
        // 0x40d9b8
        __asm_pxor(v8, v8);
        int64_t v19 = v13; // 0x40d9c8
        int128_t v20 = __asm_cvtsi2sd(v14 / 2 | v14 % 2); // 0x40d9cd
        int128_t v21 = __asm_addsd(v20, v20); // 0x40d9d2
        v17 = v21;
        v15 = v19;
        v18 = v21;
        v16 = v19;
        if (v13 >= 0) {
            goto lab_0x40d974;
        } else {
            goto lab_0x40d9db;
        }
    } else {
        // 0x40d961
        __asm_pxor(v8, v8);
        int128_t v22 = __asm_cvtsi2sd(v14); // 0x40d965
        int64_t v23 = v13; // 0x40d96a
        v17 = v22;
        v15 = v23;
        v18 = v22;
        v16 = v23;
        if (v13 < 0) {
            goto lab_0x40d9db;
        } else {
            goto lab_0x40d974;
        }
    }
  lab_0x40d974:
    // 0x40d974
    __asm_pxor(v3, v3);
    int128_t v24 = v17; // 0x40d978
    int128_t v25 = __asm_cvtsi2sd(v15); // 0x40d978
    goto lab_0x40d97d;
  lab_0x40d9db:;
    uint64_t v28 = v16;
    __asm_pxor(v3, v3);
    int128_t v29 = __asm_cvtsi2sd(v28 / 2 | v28 % 2); // 0x40d9eb
    v24 = v18;
    v25 = __asm_addsd(v29, v29);
    goto lab_0x40d97d;
  lab_0x40d97d:;
    int128_t v26 = v25;
    int64_t result3 = v13; // 0x40d97d
    int128_t v27 = __asm_addsd(v24, v26); // 0x40d981
    __asm_pxor(v26, v26);
    // 0x40d98e
    __asm_mulsd(v27, __asm_cvtsi2sd(result3));
    return result3;
}
// Address range: 0x40da00 - 0x40dbd1
int64_t function_40da00(int64_t a1, int64_t a2, int64_t a3) {
    int32_t fds[2]; // 0x40da33
    int32_t v1[2]; // 0x40db68
    int32_t fd = a1;
    int32_t v2; // 0x40da00
    if (g108 >= 0) {
        // 0x40db68
        v1[0] = fd;
        int32_t v3 = a2;
        uint32_t result = pipe2(v1, v3); // 0x40db68
        if (result >= 0 || *__errno_location() != 38) {
            // 0x40db7e
            g108 = 1;
            return result;
        }
        // 0x40dba0
        g108 = -1;
        v2 = v3;
    } else {
        // 0x40da00
        v2 = a2;
    }
    uint32_t v4 = v2 & -0x80801; // 0x40da23
    if (v4 != 0) {
        // 0x40dbb0
        *__errno_location() = 22;
        // 0x40da54
        return 0xffffffff;
    }
    // 0x40da30
    fds[0] = fd;
    if (pipe(fds) < 0) {
        // 0x40da54
        return 0xffffffff;
    }
    int32_t * fd2; // 0x40da00
    int64_t v5; // 0x40da00
    if ((a2 & 2048) != 0) {
        int32_t * v6 = (int32_t *)(a1 + 4);
        int32_t v7 = function_412000(*v6, 3, 0, v5);
        fd2 = v6;
        if (v7 < 0) {
            goto lab_0x40dac8;
        } else {
            // 0x40da7d
            fd2 = v6;
            if ((int32_t)function_412000(*v6, 4, v7 || 2048, v5) == -1) {
                goto lab_0x40dac8;
            } else {
                int32_t v8 = function_412000(fd, 3, 0, v5);
                fd2 = v6;
                if (v8 < 0) {
                    goto lab_0x40dac8;
                } else {
                    // 0x40daaa
                    fd2 = v6;
                    if ((int32_t)function_412000(fd, 4, v8 || 2048, v5) != -1) {
                        goto lab_0x40da48;
                    } else {
                        goto lab_0x40dac8;
                    }
                }
            }
        }
    } else {
        goto lab_0x40da48;
    }
  lab_0x40da48:;
    int64_t result2 = v4; // 0x40da23
    if ((a2 & 0x80000) == 0) {
        // 0x40da54
        return result2;
    }
    int32_t * v9 = (int32_t *)(a1 + 4);
    uint32_t v10 = (int32_t)function_412000(*v9, 1, 0, v5); // 0x40db09
    fd2 = v9;
    if (v10 >= 0) {
        // 0x40db0d
        fd2 = v9;
        if ((int32_t)function_412000(*v9, 2, v10 || 1, v5) != -1) {
            uint32_t v11 = (int32_t)function_412000(fd, 1, 0, v5); // 0x40db36
            fd2 = v9;
            if (v11 >= 0) {
                // 0x40db3a
                fd2 = v9;
                if ((int32_t)function_412000(fd, 2, v11 || 1, v5) != -1) {
                    // 0x40da54
                    return result2;
                }
            }
        }
    }
    goto lab_0x40dac8;
  lab_0x40dac8:;
    int32_t * v12 = __errno_location(); // 0x40dac8
    close(fd);
    close(*fd2);
    *(int64_t *)a1 = a1;
    // 0x40da54
    return 0xffffffff;
}
// Address range: 0x40dbe0 - 0x40dc52
int64_t function_40dbe0(void) {
    char * env_val = getenv("_POSIX2_VERSION"); // 0x40dbef
    if (env_val == NULL || *env_val == 0) {
        // 0x40dbfe
        return 0x31069;
    }
    // 0x40dc10
    char * endptr; // bp-16, 0x40dbe0
    int32_t str_as_l = strtol(env_val, &endptr, 10); // 0x40dc1d
    if (*endptr != 0) {
        // 0x40dbfe
        return 0x31069;
    }
    int64_t v1 = str_as_l; // 0x40dc1d
    int64_t v2 = v1 - 0x7fffffff; // 0x40dc34
    return v2 == 0 | v2 < 0 != (0x7ffffffe - v1 & v1) < 0 ? v1 & 0xffffffff : 0x7fffffff;
}
// Address range: 0x40dc60 - 0x40dcf9
int64_t function_40dc60(int64_t str) {
    // 0x40dc60
    if (str == 0) {
        // 0x40dcd9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g55);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40dc6e
    int64_t result = (int64_t)found_char_pos; // 0x40dc6e
    if (found_char_pos == NULL) {
        // 0x40dcc9
        g109 = str;
        g54 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x40dc78
    if (v1 - str < 7) {
        // 0x40dcc9
        g109 = str;
        g54 = str;
        return result;
    }
    // 0x40dc88
    bool v2; // 0x40dc60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x40dc60
    int64_t v5 = result - 6; // 0x40dc60
    int64_t v6 = 7; // 0x40dc96
    unsigned char v7 = *(char *)v5; // 0x40dc96
    char v8 = *(char *)v4; // 0x40dc96
    char v9 = v8; // 0x40dc96
    bool v10 = false; // 0x40dc96
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
    int64_t v12 = (int64_t)"lt-"; // 0x40dca0
    int64_t v13 = v1; // 0x40dca0
    int64_t v14 = 3; // 0x40dca0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x40dcc9
        g109 = str;
        g54 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x40dcb2
    char v16 = *(char *)v12; // 0x40dcb2
    char v17 = v16; // 0x40dcb2
    bool v18 = false; // 0x40dcb2
    while (v15 == v16) {
        // 0x40dca2
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
    int64_t v20 = v1; // 0x40dcbc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40dcbe
        v20 = result + 4;
        g51 = v20;
    }
    // 0x40dcc9
    g109 = v20;
    g54 = v20;
    return result;
}
// Address range: 0x40dd00 - 0x40ddf2
int64_t function_40dd00(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x40dd14
    int64_t result = (int64_t)v1; // 0x40dd14
    if (result != a1) {
        // 0x40dd21
        return result;
    }
    int64_t v2 = function_413750(); // 0x40dd30
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x40dde6
    if (v3 == 85) {
        // 0x40dd40
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x40ddd8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g14;
            return result2;
        }
        char v4 = *v1; // 0x40dd6e
        int64_t result3 = v4 != 96 ? (int64_t)&g15 : (int64_t)&g18; // 0x40dd7b
        // 0x40dd21
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x40ddd8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g14;
        return result2;
    }
    char v5 = *v1; // 0x40ddbd
    int64_t result4 = v5 != 96 ? (int64_t)&g16 : (int64_t)&g17; // 0x40ddca
    // 0x40dd21
    return result4;
}
// Address range: 0x40de00 - 0x40de57
int64_t function_40de00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x40de00
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x40de57 - 0x40f021
int64_t function_40de57(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x40dea1
    int64_t v3 = 0; // 0x40dea1
    int64_t v4; // 0x40de57
    int64_t v5; // 0x40de57
    int64_t v6; // 0x40de57
    int64_t v7; // 0x40de57
    int64_t v8; // 0x40de57
    int64_t v9; // 0x40de57
    int64_t v10; // 0x40de57
    int64_t v11; // 0x40de57
    int64_t v12; // 0x40de57
    int64_t v13; // 0x40de57
    int64_t v14; // 0x40de57
    int64_t v15; // 0x40de57
    int64_t v16; // 0x40de57
    int64_t v17; // 0x40de57
    int64_t v18; // 0x40de57
    int64_t result; // 0x40de57
    int64_t v19; // 0x40de57
    int32_t wc; // bp+132, 0x40de57
    int64_t ps; // bp+136, 0x40de57
    char v20; // 0x40e410
    int64_t v21; // 0x40e410
    int64_t v22; // 0x40e7b8
    int64_t v23; // 0x40de57
    int64_t v24; // 0x40e7d7
    int32_t v25; // 0x40de57
    while (true) {
      lab_0x40dea8_2:
        // 0x40dea8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x40de57
        int64_t v27; // 0x40dedc
        while (true) {
          lab_0x40dea8:
            // 0x40dea8
            v5 = v26;
            bool v28 = v15 == v5; // 0x40deb3
            if (v15 == -1) {
                // 0x40deb5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x40dec3
            if (v28) {
                // break (via goto) -> 0x40e628
                goto lab_0x40e628;
            }
            // 0x40decc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g121 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40e4bb
                    if (v25 % 2 == 0) {
                        goto lab_0x40e001;
                    }
                    // 0x40e8dd
                    v26 = v5 + 1;
                    goto lab_0x40dea8;
                }
                case 7: {
                    goto lab_0x40e001;
                }
                case 8: {
                    goto lab_0x40e001;
                }
                case 9: {
                    goto lab_0x40e21a_2;
                }
                case 10: {
                    goto lab_0x40e21a_2;
                }
                case 11: {
                    goto lab_0x40e001;
                }
                case 12: {
                    goto lab_0x40e001;
                }
                case 13: {
                    goto lab_0x40e21a_2;
                }
                case 32: {
                    goto lab_0x40e21a_2;
                }
                case 33: {
                    goto lab_0x40e21a_2;
                }
                case 34: {
                    goto lab_0x40e21a_2;
                }
                case 35: {
                    goto lab_0x40dfcd;
                }
                case 36: {
                    goto lab_0x40e21a_2;
                }
                case 37: {
                    goto lab_0x40e001;
                }
                case 38: {
                    goto lab_0x40e21a_2;
                }
                case 39: {
                    goto lab_0x40e21a_2;
                }
                case 40: {
                    goto lab_0x40e21a_2;
                }
                case 41: {
                    goto lab_0x40e21a_2;
                }
                case 42: {
                    goto lab_0x40e21a_2;
                }
                case 43: {
                    goto lab_0x40e001;
                }
                case 44: {
                    goto lab_0x40e001;
                }
                case 45: {
                    goto lab_0x40e001;
                }
                case 46: {
                    goto lab_0x40e001;
                }
                case 47: {
                    goto lab_0x40e001;
                }
                case 48: {
                    goto lab_0x40e001;
                }
                case 49: {
                    goto lab_0x40e001;
                }
                case 50: {
                    goto lab_0x40e001;
                }
                case 51: {
                    goto lab_0x40e001;
                }
                case 52: {
                    goto lab_0x40e001;
                }
                case 53: {
                    goto lab_0x40e001;
                }
                case 54: {
                    goto lab_0x40e001;
                }
                case 55: {
                    goto lab_0x40e001;
                }
                case 56: {
                    goto lab_0x40e001;
                }
                case 57: {
                    goto lab_0x40e001;
                }
                case 58: {
                    goto lab_0x40e001;
                }
                case 59: {
                    goto lab_0x40e21a_2;
                }
                case 60: {
                    goto lab_0x40e21a_2;
                }
                case 61: {
                    goto lab_0x40e21a_2;
                }
                case 62: {
                    goto lab_0x40e21a_2;
                }
                case 63: {
                    goto lab_0x40e21a_2;
                }
                case 65: {
                    goto lab_0x40e001;
                }
                case 66: {
                    goto lab_0x40e001;
                }
                case 67: {
                    goto lab_0x40e001;
                }
                case 68: {
                    goto lab_0x40e001;
                }
                case 69: {
                    goto lab_0x40e001;
                }
                case 70: {
                    goto lab_0x40e001;
                }
                case 71: {
                    goto lab_0x40e001;
                }
                case 72: {
                    goto lab_0x40e001;
                }
                case 73: {
                    goto lab_0x40e001;
                }
                case 74: {
                    goto lab_0x40e001;
                }
                case 75: {
                    goto lab_0x40e001;
                }
                case 76: {
                    goto lab_0x40e001;
                }
                case 77: {
                    goto lab_0x40e001;
                }
                case 78: {
                    goto lab_0x40e001;
                }
                case 79: {
                    goto lab_0x40e001;
                }
                case 80: {
                    goto lab_0x40e001;
                }
                case 81: {
                    goto lab_0x40e001;
                }
                case 82: {
                    goto lab_0x40e001;
                }
                case 83: {
                    goto lab_0x40e001;
                }
                case 84: {
                    goto lab_0x40e001;
                }
                case 85: {
                    goto lab_0x40e001;
                }
                case 86: {
                    goto lab_0x40e001;
                }
                case 87: {
                    goto lab_0x40e001;
                }
                case 88: {
                    goto lab_0x40e001;
                }
                case 89: {
                    goto lab_0x40e001;
                }
                case 90: {
                    goto lab_0x40e001;
                }
                case 91: {
                    goto lab_0x40e21a_2;
                }
                case 92: {
                    goto lab_0x40e21a_2;
                }
                case 93: {
                    goto lab_0x40e001;
                }
                case 94: {
                    goto lab_0x40e21a_2;
                }
                case 95: {
                    goto lab_0x40e001;
                }
                case 96: {
                    goto lab_0x40e21a_2;
                }
                case 97: {
                    goto lab_0x40e001;
                }
                case 98: {
                    goto lab_0x40e001;
                }
                case 99: {
                    goto lab_0x40e001;
                }
                case 100: {
                    goto lab_0x40e001;
                }
                case 101: {
                    goto lab_0x40e001;
                }
                case 102: {
                    goto lab_0x40e001;
                }
                case 103: {
                    goto lab_0x40e001;
                }
                case 104: {
                    goto lab_0x40e001;
                }
                case 105: {
                    goto lab_0x40e001;
                }
                case 106: {
                    goto lab_0x40e001;
                }
                case 107: {
                    goto lab_0x40e001;
                }
                case 108: {
                    goto lab_0x40e001;
                }
                case 109: {
                    goto lab_0x40e001;
                }
                case 110: {
                    goto lab_0x40e001;
                }
                case 111: {
                    goto lab_0x40e001;
                }
                case 112: {
                    goto lab_0x40e001;
                }
                case 113: {
                    goto lab_0x40e001;
                }
                case 114: {
                    goto lab_0x40e001;
                }
                case 115: {
                    goto lab_0x40e001;
                }
                case 116: {
                    goto lab_0x40e001;
                }
                case 117: {
                    goto lab_0x40e001;
                }
                case 118: {
                    goto lab_0x40e001;
                }
                case 119: {
                    goto lab_0x40e001;
                }
                case 120: {
                    goto lab_0x40e001;
                }
                case 121: {
                    goto lab_0x40e001;
                }
                case 122: {
                    goto lab_0x40e001;
                }
                case 123: {
                    goto lab_0x40dfa5;
                }
                case 124: {
                    goto lab_0x40e21a_2;
                }
                case 125: {
                    goto lab_0x40dfa5;
                }
                case 126: {
                    goto lab_0x40dfcd;
                }
                default: {
                    goto lab_0x40e3a5;
                }
            }
        }
      lab_0x40e3a5:
        if (v23 != 1) {
            // 0x40e710
            ps = 0;
            int64_t len = v15; // 0x40e720
            if (v15 == -1) {
                // 0x40e722
                len = strlen((char *)str);
            }
            // 0x40e74e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40e7af:
                // 0x40e7af
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x40e7b4
                int64_t v30 = v29 + str;
                v24 = function_412fb0((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40ed2a_2;
                    }
                    case -1: {
                        goto lab_0x40ed2a_2;
                    }
                    case -2: {
                        // 0x40ee0d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x40ee47
                            v19 = v18;
                            int64_t v31 = v18; // 0x40ee4a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x40ee57
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x40ee50
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40ed2a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40ed2a_2;
                    }
                    case 1: {
                        goto lab_0x40e780;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40e82c
                        char v34 = *(char *)v33; // 0x40e83d
                        unsigned char v35; // 0x40de57
                        if (v34 < 125) {
                            // 0x40e848
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40e85f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40e21a_2;
                            }
                        }
                        // 0x40e830
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40e83d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x40e848
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40e85f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40e21a_2;
                                }
                            }
                            // 0x40e830
                            v33++;
                        }
                        goto lab_0x40e780;
                    }
                }
            }
            goto lab_0x40ed2a_2;
        } else {
            // 0x40e3f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x40e001;
        }
    }
  lab_0x40e628:
    // 0x40e628
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40ef2a
        if (v8 > result) {
            // 0x40ef33
            *(char *)(v12 + result) = 0;
        }
        // 0x40e257
        return result;
    }
    goto lab_0x40e21a_2;
  lab_0x40e001:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x40e010
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40e21a_2;
        }
    }
    int64_t v42 = result; // 0x40e111
    char v43 = v20; // 0x40e111
    int64_t v44 = v58; // 0x40e111
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x40e111
    int64_t v46 = v56; // 0x40e111
    goto lab_0x40e08d;
  lab_0x40e21a_2:;
    // 0x40e257
    char * v36; // 0x40de57
    return function_40de00(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40ed2a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x40e001;
    } else {
        uint64_t v40 = v37 + v5; // 0x40e8fe
        int64_t v41 = v5 + 1; // 0x40e9e1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x40e9e8
        char v48 = v20; // 0x40e9e8
        int64_t v49 = result; // 0x40e9e8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x40e9b1
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x40e9b5
            int64_t v52 = v50 + 1; // 0x40e9ba
            int64_t v53 = v47 + 1; // 0x40e9e1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40e9ac
                v50 = v52;
                if (v38 > v50) {
                    // 0x40e9b1
                    *(char *)(v50 + v39) = v51;
                }
                // 0x40e9b5
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
        goto lab_0x40e08d;
    }
  lab_0x40e780:
    // 0x40e780
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40e79f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40e7a2
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40ed2a
        goto lab_0x40ed2a_2;
    }
    goto lab_0x40e7af;
  lab_0x40dfcd:
    // 0x40dfcd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40e21a_2;
    }
    goto lab_0x40e001;
  lab_0x40dfa5:;
    bool v61 = v15 == 1; // 0x40dfb0
    if (v15 == -1) {
        // 0x40dfb2
        v61 = *(char *)v1 == 0;
    }
    // 0x40dfbe
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x40e001;
    } else {
        goto lab_0x40dfcd;
    }
  lab_0x40e08d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x40e092
        *(char *)(v59 + v60) = v43;
    }
    // 0x40e096
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x40dea8_2;
}
// Address range: 0x40f030 - 0x40f1ce
int64_t function_40f030(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x40f032
    int32_t * v3 = __errno_location(); // 0x40f04c
    int64_t v4 = (int64_t)g43; // 0x40f051
    int32_t v5 = *v3; // 0x40f05b
    int64_t v6 = v4; // 0x40f071
    if (v2 >= (int64_t)*(int32_t *)&g46) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x40f1c9
            function_411460(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x40f080
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x40f087
        int64_t v9; // 0x40f030
        if (g43 == &g44) {
            int64_t v10 = function_411270(0, v8); // 0x40f1aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g44); // 0x40f1af
            *(int64_t *)&g43 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_411270(v4, v8); // 0x40f09b
            *(int64_t *)&g43 = v12;
            v9 = v12;
        }
        // 0x40f0aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g46; // 0x40f0aa
        int32_t v14 = v7; // 0x40f0b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g46 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x40f0e1
    int64_t v17 = v15 + 8; // 0x40f0e4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40f0eb
    int64_t * v19 = (int64_t *)v16; // 0x40f0ee
    uint64_t v20 = *v19; // 0x40f0ee
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x40f0f1
    int64_t result = *v21; // 0x40f0f1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40f0fc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x40f105
    int64_t v24; // 0x40f030
    uint64_t v25 = function_40de00(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x40f114
    if (v20 > v25) {
        // 0x40f18b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x40f127
    *v19 = v26;
    if (result != (int64_t)&g110) {
        // 0x40f137
        free((int64_t *)result);
    }
    int64_t result2 = function_411210(v26); // 0x40f151
    *v21 = result2;
    int64_t v27 = *v22; // 0x40f16b
    int64_t v28 = *v23; // 0x40f16e
    int64_t v29; // 0x40f030
    function_40de00(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40f18b
    *v3 = v5;
    return result2;
}
// Address range: 0x40f1d0 - 0x40f204
int64_t function_40f1d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40f1d7
    int64_t v2 = a1 == 0 ? (int64_t)&g111 : a1; // 0x40f1ef
    int64_t result = function_411410((int64_t *)v2, 56); // 0x40f1f6
    return result;
}
// Address range: 0x40f210 - 0x40f21f
int64_t function_40f210(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g111 : a1); // 0x40f21c
    return result;
}
// Address range: 0x40f220 - 0x40f22f
int64_t function_40f220(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g111 : a1; // 0x40f228
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g111;
}
// Address range: 0x40f230 - 0x40f263
int64_t function_40f230(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g111 + 8 : a1 + 8; // 0x40f249
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40f24e
    uint32_t v3 = *v2; // 0x40f24e
    uint32_t v4 = (int32_t)a2 % 32; // 0x40f252
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x40f270 - 0x40f283
int64_t function_40f270(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g111 + 4 : a1 + 4); // 0x40f27c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x40f290 - 0x40f2bb
int64_t function_40f290(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g111 : a1; // 0x40f298
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x40f2b5
        abort();
        // UNREACHABLE
    }
    // 0x40f2ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g111;
}
// Address range: 0x40f2c0 - 0x40f332
int64_t function_40f2c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g111 : a5; // 0x40f2e2
    int32_t * v2 = __errno_location(); // 0x40f2eb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x40f304
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x40f308
    uint32_t v5 = *(int32_t *)v1; // 0x40f30b
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x40f311
    int64_t result = function_40de00(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40f31a
    return result;
}
// Address range: 0x40f340 - 0x40f421
int64_t function_40f340(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g111 : a4; // 0x40f362
    int32_t * v2 = __errno_location(); // 0x40f368
    int64_t v3 = v1 + 8; // 0x40f37f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x40f387
    int32_t * v5 = (int32_t *)v1; // 0x40f38a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x40f398
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40f39b
    int64_t v8 = function_40de00(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x40f3a5
    int64_t v9 = v8 + 1; // 0x40f3aa
    int64_t result = function_411210(v9); // 0x40f3bf
    function_40de00(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x40f404
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40f40d
    return result;
}
// Address range: 0x40f430 - 0x40f43a
int64_t function_40f430(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40f430
    return function_40f340(a1, a2, 0, a3);
}
// Address range: 0x40f440 - 0x40f4d5
int64_t function_40f440(void) {
    uint32_t v1 = *(int32_t *)&g46; // 0x40f440
    int64_t v2 = v1; // 0x40f440
    int64_t v3 = v2; // 0x40f454
    if (v1 >= 2) {
        int64_t v4 = &g46;
        int64_t v5 = v4 + 16; // 0x40f473
        free((int64_t *)*(int64_t *)v4);
        v3 = &g122;
        while (v5 != (int64_t)g43 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x40f470
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g122;
        }
    }
    int64_t v6 = v3; // 0x40f48d
    if (g44 != 0x61cbe0) {
        // 0x40f48f
        free((int64_t *)g44);
        g44 = 256;
        *(int64_t *)&g45 = (int64_t)&g110;
        v6 = &g122;
    }
    int64_t result = v6; // 0x40f4b1
    if (g43 != &g44) {
        // 0x40f4b3
        free(g43);
        *(int64_t *)&g43 = (int64_t)&g44;
        result = &g122;
    }
    // 0x40f4c6
    *(int32_t *)&g46 = 1;
    return result;
}
// Address range: 0x40f4e0 - 0x40f4f1
int64_t function_40f4e0(void) {
    // 0x40f4e0
    int64_t v1; // 0x40f4e0
    return function_40f030(v1, v1, -1, (int64_t *)&g111);
}
// Address range: 0x40f500 - 0x40f50a
int64_t function_40f500(void) {
    // 0x40f500
    int64_t v1; // 0x40f500
    return function_40f030(v1, v1, v1, (int64_t *)&g111);
}
// Address range: 0x40f510 - 0x40f526
int64_t function_40f510(int64_t a1) {
    // 0x40f510
    return function_40f030(0, a1, -1, (int64_t *)&g111);
}
// Address range: 0x40f530 - 0x40f542
int64_t function_40f530(int64_t a1, int64_t a2) {
    // 0x40f530
    return function_40f030(0, a1, a2, (int64_t *)&g111);
}
// Address range: 0x40f550 - 0x40f5b8
int64_t function_40f550(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40f560
    return function_40f030((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40f5c0 - 0x40f624
int64_t function_40f5c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40f5d0
    return function_40f030((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x40f630 - 0x40f63c
int64_t function_40f630(int64_t a1, int64_t a2) {
    // 0x40f630
    return function_40f550(0, a1 & 0xffffffff, a2);
}
// Address range: 0x40f640 - 0x40f64f
int64_t function_40f640(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40f640
    return function_40f5c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x40f650 - 0x40f6c0
int64_t function_40f650(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g111); // 0x40f65d
    int128_t v2 = __asm_movdqa(g112); // 0x40f665
    int128_t v3 = __asm_movdqa(g113); // 0x40f66d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x40f682
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x40f698
    uint32_t v6 = *v5; // 0x40f698
    uint32_t v7 = (int32_t)a3 % 32; // 0x40f69d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_40f030(0, a1, a2, &v4);
}
// Address range: 0x40f6c0 - 0x40f6cd
int64_t function_40f6c0(int64_t a1, int64_t a2) {
    // 0x40f6c0
    return function_40f650(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x40f6d0 - 0x40f6e1
int64_t function_40f6d0(int64_t a1) {
    // 0x40f6d0
    return function_40f650(a1, -1, 58);
}
// Address range: 0x40f6f0 - 0x40f6fa
int64_t function_40f6f0(void) {
    // 0x40f6f0
    int64_t v1; // 0x40f6f0
    return function_40f650(v1, v1, 58);
}
// Address range: 0x40f700 - 0x40f76e
int64_t function_40f700(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40f71a
    return function_40f030((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40f770 - 0x40f7dc
int64_t function_40f770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g111); // 0x40f777
    int128_t v2 = __asm_movdqa(g112); // 0x40f77f
    int128_t v3 = __asm_movdqa(g113); // 0x40f787
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x40f7a9
    if (a2 == 0 || a3 == 0) {
        // 0x40f7d7
        abort();
        // UNREACHABLE
    }
    // 0x40f7ba
    return function_40f030(a1, a4, a5, &v4);
}
// Address range: 0x40f7e0 - 0x40f7e9
int64_t function_40f7e0(void) {
    // 0x40f7e0
    int64_t v1; // 0x40f7e0
    return function_40f770(v1, v1, v1, v1, -1);
}
// Address range: 0x40f7f0 - 0x40f807
int64_t function_40f7f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40f7f0
    return function_40f770(0, a1, a2, a3, -1);
}
// Address range: 0x40f810 - 0x40f823
int64_t function_40f810(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40f810
    return function_40f770(0, a1, a2, a3, a4);
}
// Address range: 0x40f830 - 0x40f83a
int64_t function_40f830(void) {
    // 0x40f830
    int64_t v1; // 0x40f830
    return function_40f030(v1, v1, v1, &g42);
}
// Address range: 0x40f840 - 0x40f852
int64_t function_40f840(int64_t a1, int64_t a2) {
    // 0x40f840
    return function_40f030(0, a1, a2, &g42);
}
// Address range: 0x40f860 - 0x40f871
int64_t function_40f860(int64_t a1, int64_t * a2) {
    // 0x40f860
    return function_40f030(a1, (int64_t)a2, -1, &g42);
}
// Address range: 0x40f880 - 0x40f896
int64_t function_40f880(int64_t a1) {
    // 0x40f880
    return function_40f030(0, a1, -1, &g42);
}
// Address range: 0x40f8a0 - 0x40f8fd
int64_t function_40f8a0(int64_t a1) {
    // 0x40f8a0
    function_40f880(a1);
    int32_t * err_num = __errno_location(); // 0x40f8b7
    char * format; // 0x40f8a0
    if (*err_num == 0) {
        // 0x40f8ef
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x40f8c9
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x40f8d5
    error(g41, *err_num, format);
    return &g122;
}
// Address range: 0x40f900 - 0x40fbef
int64_t function_40f900(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_411210(0x1038); // 0x40fa1d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x40f8a0;
        *(int64_t *)(result + 16) = 0;
        // 0x40f972
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_4136b0(a1, "rb"); // 0x40f927
        int64_t result2 = 0; // 0x40f932
        if (stream != 0) {
            // 0x40f938
            result2 = function_411210(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x40f954
            *(int64_t *)(result2 + 8) = 0x40f8a0;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x40f972
        return result2;
    }
    int64_t result3 = function_411210(0x1038); // 0x40f98d
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x40f9a3
    *(int64_t *)(result3 + 8) = 0x40f8a0;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x40f9c1
    int64_t v2; // 0x40f900
    int128_t pid2; // bp-72, 0x40f900
    if (fd < 0) {
        // 0x40fa48
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x40fa67
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x40f9eb
        close(fd);
        if (v3 >= 2048) {
            // 0x40fa08
            function_410070(v1);
            // 0x40f972
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x40fb76
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x40fb82
        uint64_t v7 = v6 + v4; // 0x40fb88
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x40fa08
            function_410070(v1);
            // 0x40f972
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x40fbb1
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x40fbbd
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x40fbd5
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x40fa08
            function_410070(v1);
            // 0x40f972
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x40fa7d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x40fa84
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x40faa0
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x40fa9e
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x40faaf
    if (v16 >= 2048) {
        // 0x40fa08
        function_410070(v1);
        // 0x40f972
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x40faca
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x40fad1
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x40faef
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x40faed
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x40fafe
    if (v21 >= 2048) {
        // 0x40fa08
        function_410070(v1);
        // 0x40f972
        return result3;
    }
    // 0x40fb0e
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x40fb26
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x40fb2d
    if (v23 == 0) {
        // 0x40fa08
        function_410070(v1);
        // 0x40f972
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x40fb3f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x40fb3d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x40fa08
    function_410070(v1);
    // 0x40f972
    return result3;
}
// Address range: 0x40fbf0 - 0x40fbf5
int64_t function_40fbf0(int64_t a1, int64_t a2) {
    // 0x40fbf0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x40fbf0
    return result;
}
// Address range: 0x40fc00 - 0x40fc05
int64_t function_40fc00(int64_t a1, int64_t a2) {
    // 0x40fc00
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x40fc00
    return result;
}
// Address range: 0x40fc10 - 0x40fd6c
int64_t function_40fc10(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x40fc2f
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x40fc6a
        int64_t v3 = a3 - result; // 0x40fc75
        if (v3 == 0) {
            // 0x40fc7a
            return result;
        }
        int64_t v4 = v3; // 0x40fc75
        int64_t v5 = result + v1; // 0x40fc72
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x40fc44
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x40fc6a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x40fc7a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x40fc90
    int64_t v9 = a3; // 0x40fca2
    int64_t * v10; // 0x40fc10
    int64_t v11; // 0x40fc10
    int64_t v12; // 0x40fc10
    int64_t v13; // 0x40fc10
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x40fcb3
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x40fcca
            function_40fdc0(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x40fd25;
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
            int64_t result3 = function_40fdc0(32, v17); // 0x40fcfd
            int64_t v19 = v18 - 2048; // 0x40fd02
            if (v19 == 0) {
                // 0x40fd48
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x40fd14
        function_40fdc0(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x40fd60
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x40fd25:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x40fd2e
    *(int64_t *)24 = v11 - v13;
    // 0x40fc7a
    return (int64_t)dest_mem;
}
// Address range: 0x40fd70 - 0x40fdb9
int64_t function_40fd70(int64_t a1) {
    // 0x40fd70
    __explicit_bzero_chk();
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x40fdb0
        return 0;
    }
    // 0x40fd9a
    return function_411f80(a1, 0x1038);
}
// Address range: 0x40fdc0 - 0x410065
int64_t function_40fdc0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x40fdc0
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x40fdc7
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x40fdd6
    int64_t v4 = *v1 + 1; // 0x40fde0
    *v1 = v4;
    int64_t v5 = a2; // 0x40fdf1
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x40fe02
    int64_t v9 = *v8; // 0x40fe02
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x40fe08
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x40fe23
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x40fe42
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x40fe48
    int64_t v14 = *v13; // 0x40fe48
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x40fe4c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x40fe70
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x40fe85
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x40fe8c
    int64_t v19 = *v18; // 0x40fe8c
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x40fe90
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x40feab
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x40febd
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x40fec8
    int64_t v24 = *v23; // 0x40fec8
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x40fed9
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x40fef0
    int64_t v27 = v7 + 32; // 0x40fef3
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x40ff0d
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x40fdf8
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
    int64_t v29 = a2 + 1024; // 0x40ff2b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x40ff3a
    int64_t v33 = *v32; // 0x40ff3a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x40ff40
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x40ff65
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x40ff76
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x40ff7d
    int64_t v38 = *v37; // 0x40ff7d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x40ff84
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x40ffa8
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x40ffbd
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x40ffc4
    int64_t v43 = *v42; // 0x40ffc4
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x40ffc8
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x40ffe3
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x40fff5
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x410000
    int64_t v48 = *v47; // 0x410000
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x410011
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x410028
    int64_t result = v31 + 32; // 0x41002b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x410045
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x40ff30
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
    // 0x410055
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x410070 - 0x4102a4
int64_t function_410070(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x4100b7
    int64_t v2 = a1; // 0x4100d3
    int64_t * v3 = (int64_t *)v2; // 0x4100d8
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x4100db
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x4100db
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x4100df
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x4100df
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x4100e3
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x4100ea
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x4100ee
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x4100fb
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x4100fe
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x410105
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x410112
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x410115
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x41011c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x410129
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x41012c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x410133
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x410140
    int64_t v21 = v5 - v20; // 0x410146
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x410150
    uint64_t v23 = v11 - v22; // 0x410159
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x410164
    int64_t v25 = v14 - v24; // 0x41016e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x41017d
    int64_t v27 = v23 + v25; // 0x410183
    int64_t v28 = v17 - v26; // 0x410186
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x410191
    int64_t v30 = v28 + v25; // 0x410194
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x4101aa
    while (v1 != v2) {
        // 0x4100d8
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
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x4101b0
    uint64_t v33 = *v32 + v28; // 0x4101b0
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x4101b4
    int64_t v35 = *v34 + v29; // 0x4101b4
    int64_t * v36 = (int64_t *)v31; // 0x4101b8
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x4101be
    int64_t v38 = *v36 + v20 - v35; // 0x4101c2
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x4101c9
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x4101cd
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x4101d1
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x4101d7
    uint64_t v43 = *v39 + v22 - v41; // 0x4101de
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x4101e5
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x4101e9
    int64_t v46 = *v42 + v24 - v45; // 0x4101f2
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x4101f9
    uint64_t v48 = *v44 + v26 - v47; // 0x410202
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x410209
    int64_t v50 = v35 - v49; // 0x410212
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x41021c
    uint64_t v52 = v41 - v51; // 0x410225
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x410230
    int64_t result = v52 + v50; // 0x410233
    int64_t v54 = v45 - v53; // 0x41023a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x410245
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x410249
    int64_t v57 = v54 + v52; // 0x41024f
    int64_t v58 = v47 - v56; // 0x410252
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x41025d
    int64_t v60 = v58 + v54; // 0x410260
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x4101b0
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
    // 0x41027c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x4102b0 - 0x410399
int64_t function_4102b0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 48); // 0x4102b4
    int64_t v2 = *v1; // 0x4102b4
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x4102bb
    int64_t v4 = *v3; // 0x4102bb
    if (v2 == v4) {
        char * v5 = (char *)(a1 + 104); // 0x410390
        *v5 = *v5 | 2;
    }
    int64_t v6 = *(int64_t *)(a1 + 72); // 0x4102d2
    int64_t v7 = *(int64_t *)(a1 + 56); // 0x4102dd
    int64_t v8 = v6 + v2 & -1 - v6; // 0x4102e1
    int64_t v9 = *(int64_t *)(a1 + 32); // 0x4102e4
    int64_t v10 = v7 - v9; // 0x4102f5
    int64_t v11 = v8 - v9 > v10 ? v7 : v8;
    *v1 = v11;
    *v3 = v11;
    int64_t * v12 = (int64_t *)(a1 + 136); // 0x410308
    int64_t v13 = *v12; // 0x410308
    int64_t v14 = v13; // 0x41031d
    int64_t v15 = v10; // 0x41031d
    if (*(int64_t *)(a1 + 144) - v13 < 8) {
        // 0x410358
        v15 = a1 + 112;
        _obstack_newchunk(v15, 8, v13, v9);
        v14 = *v12;
    }
    // 0x41031f
    *(int64_t *)v14 = v4;
    int64_t * v16 = (int64_t *)(a1 + 224); // 0x410322
    int64_t v17 = *v16; // 0x410322
    *v12 = *v12 + 8;
    int64_t v18 = *(int64_t *)(a1 + 232) - v17; // 0x410338
    int64_t result = v18; // 0x41033f
    int64_t v19 = v17; // 0x41033f
    int64_t v20 = v15; // 0x41033f
    if (v18 < 8) {
        // 0x410370
        v20 = a1 + 200;
        result = _obstack_newchunk(v20, 8, v17, v9);
        v19 = *v16;
    }
    // 0x410341
    *(int64_t *)v19 = v2 + -1 - v4;
    *v16 = *v16 + 8;
    *(int64_t *)a1 = v20 + 1;
    return result;
}
// Address range: 0x4103a0 - 0x410407
int64_t function_4103a0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)(v1 + 16) = 0;
    _obstack_begin(v1 + 24, 0, 0, 0x402c20, 0x4027e0);
    _obstack_begin(v1 + 112, 0, 0, 0x402c20, 0x4027e0);
    return _obstack_begin(v1 + 200, 0, 0, 0x402c20, 0x4027e0);
}
// Address range: 0x410410 - 0x410439
int64_t function_410410(int64_t a1, int64_t a2) {
    // 0x410410
    _obstack_free(a1 + 24, 0);
    _obstack_free(a1 + 112, 0);
    return _obstack_free(a1 + 200, 0);
}
// Address range: 0x410440 - 0x410653
int64_t function_410440(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1 + 24; // 0x410442
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x410469
    int32_t c = fgetc(stream); // 0x410469
    int64_t * v3 = (int64_t *)(v1 + 48);
    int64_t v4; // 0x410440
    int64_t v5; // 0x410440
    if (c != -1) {
        int32_t c2 = c; // 0x4104b3
        int64_t v6; // 0x410440
        int64_t v7 = v6; // 0x410440
        int32_t v8; // 0x410440
        int64_t v9; // 0x410440
        int64_t v10; // 0x410440
        int64_t v11; // 0x410440
        int64_t v12; // 0x410440
        int64_t v13; // 0x410473
        int64_t v14; // 0x410458
        int64_t v15; // 0x41048e
        int64_t v16; // 0x410496
        while (true) {
            // 0x410473
            v8 = c2;
            v13 = *v3;
            if (*(int64_t *)(v1 + 56) != v13) {
                // 0x410458
                v14 = v13 + 1;
                *v3 = v14;
                *(char *)v13 = (char)v8;
                v9 = v14;
                v11 = v13;
                v10 = v14;
                v12 = v13;
                if (v8 != 0) {
                    // break -> 0x410466
                    break;
                }
            } else {
                // 0x41047d
                _obstack_newchunk(v2, 1, v13, v7);
                v15 = *v3;
                v16 = v15 + 1;
                *v3 = v16;
                *(char *)v15 = (char)v8;
                v9 = v16;
                v11 = v15;
                v10 = v16;
                v12 = v15;
                if (v8 != 0) {
                    // break -> 0x410466
                    break;
                }
            }
            // 0x4104a8
            function_4102b0(v1);
            c2 = fgetc(stream);
            v7 = v10;
            v4 = v10;
            v5 = v12;
            if (c2 == -1) {
                // break (via goto) -> 0x4104c0
                goto lab_0x4104c0;
            }
        }
        int32_t c3 = fgetc(stream); // 0x410469
        v4 = v9;
        v5 = v11;
        while (c3 != -1) {
            // 0x410473
            c2 = c3;
            v7 = v9;
            while (true) {
                // 0x410473
                v8 = c2;
                v13 = *v3;
                if (*(int64_t *)(v1 + 56) != v13) {
                    // 0x410458
                    v14 = v13 + 1;
                    *v3 = v14;
                    *(char *)v13 = (char)v8;
                    v9 = v14;
                    v11 = v13;
                    v10 = v14;
                    v12 = v13;
                    if (v8 != 0) {
                        // break -> 0x410466
                        break;
                    }
                } else {
                    // 0x41047d
                    _obstack_newchunk(v2, 1, v13, v7);
                    v15 = *v3;
                    v16 = v15 + 1;
                    *v3 = v16;
                    *(char *)v15 = (char)v8;
                    v9 = v16;
                    v11 = v15;
                    v10 = v16;
                    v12 = v15;
                    if (v8 != 0) {
                        // break -> 0x410466
                        break;
                    }
                }
                // 0x4104a8
                function_4102b0(v1);
                c2 = fgetc(stream);
                v7 = v10;
                v4 = v10;
                v5 = v12;
                if (c2 == -1) {
                    // break (via goto) -> 0x4104c0
                    goto lab_0x4104c0;
                }
            }
            // 0x410466
            c3 = fgetc(stream);
            v4 = v9;
            v5 = v11;
        }
    }
  lab_0x4104c0:;
    int64_t v17 = *v3; // 0x4104c0
    if (v17 != *(int64_t *)(v1 + 40)) {
        int64_t v18 = v17; // 0x4104ce
        if (v17 == *(int64_t *)(v1 + 56)) {
            // 0x41063c
            _obstack_newchunk(v2, 1, v5, v4);
            v18 = *v3;
        }
        // 0x4104d4
        *v3 = v18 + 1;
        *(char *)v18 = 0;
        function_4102b0(v1);
    }
    int64_t * v19 = (int64_t *)(v1 + 136); // 0x4104e7
    int64_t v20 = *v19; // 0x4104e7
    int64_t * v21 = (int64_t *)(v1 + 144); // 0x4104ee
    int64_t v22 = v20; // 0x4104fc
    if (*v21 - v20 < 8) {
        // 0x410600
        _obstack_newchunk(v1 + 112, 8, v20, v4);
        v22 = *v19;
    }
    // 0x410502
    *(int64_t *)v22 = 0;
    int64_t * v23 = (int64_t *)(v1 + 128); // 0x410510
    int64_t v24 = *v23; // 0x410510
    int64_t v25 = *v19 + 8; // 0x410517
    *v19 = v25;
    if (v25 == v24) {
        char * v26 = (char *)(v1 + 192); // 0x410630
        *v26 = *v26 | 2;
    }
    int64_t v27 = *(int64_t *)(v1 + 160); // 0x41052b
    int64_t v28 = *(int64_t *)(v1 + 120); // 0x410539
    int64_t v29 = v27 + v25 & -1 - v27; // 0x41053d
    int64_t v30 = *v21; // 0x410540
    int64_t v31 = v29 - v28 > v30 - v28 ? v30 : v29;
    *v19 = v31;
    *(int64_t *)(v1 + 8) = v24;
    int64_t * v32 = (int64_t *)(v1 + 224); // 0x410567
    int64_t v33 = *v32; // 0x410567
    int64_t * v34 = (int64_t *)(v1 + 216); // 0x41056e
    int64_t v35 = *v34; // 0x41056e
    *v23 = v31;
    if (v33 == v35) {
        char * v36 = (char *)(v1 + 280); // 0x410620
        *v36 = *v36 | 2;
    }
    int64_t v37 = *(int64_t *)(v1 + 248); // 0x410585
    int64_t v38 = *(int64_t *)(v1 + 208); // 0x410593
    int64_t v39 = v37 + v33 & -1 - v37; // 0x41059a
    int64_t v40 = *(int64_t *)(v1 + 232); // 0x41059d
    int64_t v41 = v39 - v38 > v40 - v38 ? v40 : v39;
    *v32 = v41;
    *v34 = v41;
    *(int64_t *)(v1 + 16) = v35;
    int32_t is_ferror = ferror(stream); // 0x4105d4
    return (int64_t)(is_ferror & -256) | (int64_t)(is_ferror == 0);
}
// Address range: 0x410660 - 0x410674
int64_t function_410660(void) {
    // 0x410660
    int64_t template; // 0x410660
    return function_410c20((int64_t)mkstemp((char *)template));
}
// Address range: 0x410680 - 0x410692
int64_t function_410680(int64_t a1, int64_t a2) {
    uint32_t v1 = mkostemp((char *)a1, (int32_t)a2); // 0x410683
    return function_413640((int64_t)v1);
}
// Address range: 0x4106a0 - 0x410c1e
int64_t function_4106a0(int64_t a1, int64_t a2, int32_t a3, uint32_t a4) {
    int64_t v1 = a3;
    char v2 = a1;
    char v3 = a2;
    int64_t v4 = a2 % 256; // 0x4106a4
    int64_t v5 = a1; // 0x4106ac
    int64_t v6; // 0x4106a0
    int64_t v7; // 0x4106a0
    int64_t v8; // 0x4106a0
    int64_t v9; // 0x4106a0
    int64_t v10; // 0x4106a0
    int64_t v11; // 0x4106a0
    int64_t v12; // 0x4106a0
    int64_t v13; // 0x4106a0
    if (v2 == 45) {
        unsigned char v14; // 0x4106f4
        int32_t v15; // 0x4106ff
        while (true) {
            // 0x4106f0
            v5++;
            v14 = *(char *)v5;
            if (v14 != 48) {
                // 0x4106fb
                v15 = v14;
                if (v15 != a4) {
                    // break -> 0x410704
                    break;
                }
            }
        }
        int64_t v16 = v14; // 0x4106f4
        if (v3 != 45) {
            int64_t v17 = v16; // 0x410711
            if (v15 == a3) {
                int64_t v18 = v5 + 1; // 0x410868
                unsigned char v19 = *(char *)v18; // 0x41086c
                int64_t v20 = v18; // 0x410871
                while (v19 == 48) {
                    // 0x410868
                    v18 = v20 + 1;
                    v19 = *(char *)v18;
                    v20 = v18;
                }
                // 0x410873
                v17 = v19;
            }
            // 0x410717
            if ((int32_t)v17 < 58) {
                // 0x4106e8
                return 0xffffffff;
            }
            int64_t v21 = a4;
            int64_t v22 = a2; // 0x41073c
            int64_t v23 = v4; // 0x41073c
            if (v4 == 48 || v4 == v21) {
                int64_t v24 = a2 + 1; // 0x410730
                unsigned char v25 = *(char *)v24; // 0x410734
                int64_t v26 = v25; // 0x410734
                int64_t v27 = v24; // 0x41073c
                v22 = v24;
                v23 = v26;
                while (v25 == 48 || v26 == v21) {
                    // 0x410730
                    v24 = v27 + 1;
                    v25 = *(char *)v24;
                    v26 = v25;
                    v27 = v24;
                    v22 = v24;
                    v23 = v26;
                }
            }
            int32_t v28 = v23;
            if (v28 != a3) {
                // 0x410750
                return v28 < 58 ? 0xffffffff : 0;
            }
            int64_t v29 = v22; // 0x41074a
            v29++;
            unsigned char v30 = *(char *)v29; // 0x4108d4
            while (v30 == 48) {
                // 0x4108d0
                v29++;
                v30 = *(char *)v29;
            }
            // 0x410750
            return (int32_t)v30 < 58 ? 0xffffffff : 0;
        }
        int64_t v31 = a2 + 1; // 0x4107f8
        unsigned char v32 = *(char *)v31; // 0x4107fc
        int32_t v33 = v32;
        int64_t v34 = v31; // 0x410804
        while (v32 == 48 || v33 == a4) {
            // 0x4107f8
            v31 = v34 + 1;
            v32 = *(char *)v31;
            v33 = v32;
            v34 = v31;
        }
        // 0x410810
        v9 = v31;
        v10 = v5;
        char v35 = v32; // 0x410813
        int64_t v36 = v16; // 0x410813
        int64_t v37 = v32; // 0x410813
        if (v14 == v32 == v33 < 58) {
            int64_t v38 = v5 + 1; // 0x410830
            unsigned char v39 = *(char *)v38; // 0x410834
            int64_t v40 = v38; // 0x41083e
            while ((int32_t)v39 == a4) {
                // 0x410830
                v38 = v40 + 1;
                v39 = *(char *)v38;
                v40 = v38;
            }
            int64_t v41 = v39; // 0x410834
            int64_t v42 = v31; // 0x410840
            int64_t v43 = v42 + 1; // 0x410840
            unsigned char v44 = *(char *)v43; // 0x410844
            int64_t v45 = v43; // 0x41084e
            char v46 = v44; // 0x41084e
            int64_t v47; // 0x410850
            unsigned char v48; // 0x410854
            while ((int32_t)v44 == a4) {
                // 0x410850
                v47 = v42 + 2;
                v48 = *(char *)v47;
                v45 = v47;
                v46 = v48;
                if ((int32_t)v48 != a4) {
                    // break -> 0x410810
                    break;
                }
                v42 = v47;
                v43 = v42 + 1;
                v44 = *(char *)v43;
                v45 = v43;
                v46 = v44;
            }
            int64_t v49 = v46;
            v9 = v45;
            v10 = v38;
            v35 = v46;
            v36 = v41;
            v37 = v49;
            while (v39 == v46) {
                // 0x410819
                v9 = v45;
                v10 = v38;
                v35 = v46;
                v36 = v41;
                v37 = v49;
                if ((int32_t)v46 >= 58) {
                    // break -> 0x410978
                    break;
                }
                v38++;
                v39 = *(char *)v38;
                v40 = v38;
                while ((int32_t)v39 == a4) {
                    // 0x410830
                    v38 = v40 + 1;
                    v39 = *(char *)v38;
                    v40 = v38;
                }
                // 0x410840
                v41 = v39;
                v42 = v45;
                v43 = v42 + 1;
                v44 = *(char *)v43;
                v45 = v43;
                v46 = v44;
                while ((int32_t)v44 == a4) {
                    // 0x410850
                    v47 = v42 + 2;
                    v48 = *(char *)v47;
                    v45 = v47;
                    v46 = v48;
                    if ((int32_t)v48 != a4) {
                        // break -> 0x410810
                        break;
                    }
                    v42 = v47;
                    v43 = v42 + 1;
                    v44 = *(char *)v43;
                    v45 = v43;
                    v46 = v44;
                }
                // 0x410810
                v49 = v46;
                v9 = v45;
                v10 = v38;
                v35 = v46;
                v36 = v41;
                v37 = v49;
            }
        }
        int32_t v50 = v35;
        if ((int32_t)v36 != a3 || v50 < 58) {
            int64_t v51 = v36 + 0xffffffd0; // 0x410981
            if (v50 == a3) {
                if ((int32_t)v51 < 10) {
                    // 0x410b06
                    v11 = v1 + 0xffffffd0;
                    goto lab_0x4109a2;
                } else {
                    goto lab_0x410abd;
                }
            } else {
                int64_t v52 = v37 + 0xffffffd0; // 0x410991
                v11 = v52;
                if ((int32_t)v51 < 10) {
                    goto lab_0x4109a2;
                } else {
                    // 0x410b90
                    if ((int32_t)v52 >= 10) {
                        // 0x4106e8
                    }
                    goto lab_0x4109c9;
                }
            }
        } else {
            goto lab_0x410abd;
        }
    } else {
        int64_t v53 = a1 % 256; // 0x4106a0
        int64_t v54 = a2; // 0x4106b2
        if (v3 == 45) {
            int32_t v55; // 0x4106a0
            int64_t v56; // 0x4106c0
            while (true) {
                // 0x4106c0
                v56 = v54 + 1;
                unsigned char v57 = *(char *)v56; // 0x4106c4
                if (v57 != 48) {
                    // 0x4106cb
                    v55 = v57;
                    if (v55 != a4) {
                        // break -> 0x4106cf
                        break;
                    }
                }
                // 0x4106c0
                v54 = v56;
            }
            int32_t v58 = v55; // 0x4106d1
            int64_t v59 = v56; // 0x4106d1
            if (v55 == a3) {
                char v60 = *(char *)(v59 + 1); // 0x410884
                char v61 = v60; // 0x410889
                while (v60 == 48) {
                    int64_t v62 = v59 + 2; // 0x41088f
                    char v63 = *(char *)v62; // 0x410893
                    v61 = v63;
                    v59 = v62;
                    if (v63 != 48) {
                        // break -> 0x4106d7
                        break;
                    }
                    v60 = *(char *)(v59 + 1);
                    v61 = v60;
                }
                // 0x4106d7
                v58 = v61;
            }
            // 0x4106d7
            if (v58 < 58) {
                // 0x4106e8
                return 1;
            }
            int64_t v64 = a4;
            int64_t v65 = a1; // 0x4108ac
            int64_t v66 = v53; // 0x4108ac
            if (v53 == 48 || v53 == v64) {
                int64_t v67 = a1 + 1; // 0x4108a0
                unsigned char v68 = *(char *)v67; // 0x4108a4
                int64_t v69 = v68; // 0x4108a4
                int64_t v70 = v67; // 0x4108ac
                v65 = v67;
                v66 = v69;
                while (v68 == 48 || v69 == v64) {
                    // 0x4108a0
                    v67 = v70 + 1;
                    v68 = *(char *)v67;
                    v69 = v68;
                    v70 = v67;
                    v65 = v67;
                    v66 = v69;
                }
            }
            // 0x4108b6
            if ((int32_t)v66 != a3) {
                // 0x4108be
                return (int32_t)v66 < 58;
            }
            int64_t v71 = v65; // 0x4108b8
            v71++;
            unsigned char v72 = *(char *)v71; // 0x410a04
            while (v72 == 48) {
                // 0x410a00
                v71++;
                v72 = *(char *)v71;
            }
            // 0x4108be
            return (int32_t)(int64_t)v72 < 58;
        }
        // 0x410768
        v6 = a1;
        v13 = v53;
        if (v2 == 48 || (int32_t)a1 % 256 == a4) {
            int64_t v73 = a1 + 1; // 0x410760
            unsigned char v74 = *(char *)v73; // 0x410764
            int64_t v75 = v73; // 0x41076c
            while (v74 == 48 || (int32_t)v74 == a4) {
                // 0x410760
                v73 = v75 + 1;
                v74 = *(char *)v73;
                v75 = v73;
            }
            // 0x410768
            v6 = v73;
            v13 = v74;
        }
        // 0x410776
        v7 = a2;
        v8 = a2;
        v12 = v4;
        if (v3 != 48) {
            goto lab_0x41078e;
        } else {
            goto lab_0x410780;
        }
    }
  lab_0x410abd:;
    char v76 = *(char *)v10; // 0x410abd
    char v77 = a3; // 0x410ac0
    int64_t v78; // 0x4106a0
    char v79; // 0x4106a0
    int64_t v80; // 0x4106a0
    int64_t v81; // 0x4106a0
    char v82; // 0x4106a0
    int64_t v83; // 0x4106a0
    if (*(char *)v9 == v77) {
        // 0x410ba2
        v81 = v9;
        if (v76 == v77) {
            int64_t v84 = v9 + 1; // 0x410bca
            int64_t v85 = v10 + 1; // 0x410bce
            char v86 = *(char *)v84; // 0x410bd2
            char v87 = *(char *)v85; // 0x410bd5
            while (v86 == v87) {
                // 0x410bc0
                if ((int32_t)v86 >= 58) {
                    // 0x4106e8
                    return 0;
                }
                v84++;
                v85++;
                v86 = *(char *)v84;
                v87 = *(char *)v85;
            }
            if ((int32_t)v86 < 58) {
                // 0x410be9
                v82 = v86;
                v83 = v84;
                if ((int32_t)v87 < 58) {
                    // 0x410bee
                    return (int64_t)v86 - (int64_t)v87 & 0xffffffff;
                }
                goto lab_0x410bb4;
            } else {
                // 0x410c12
                v79 = v87;
                v80 = v85;
                if ((int32_t)v87 >= 58) {
                    // 0x4106e8
                    return 0;
                }
                goto lab_0x410adc;
            }
        } else {
            goto lab_0x410bb0;
        }
    } else {
        // 0x410ac8
        v78 = v10;
        if (v76 != v77) {
            // 0x4106e8
            return 0;
        }
        goto lab_0x410ad8;
    }
  lab_0x41078e:;
    int64_t v88 = v12;
    int64_t v89 = v8;
    int32_t v90 = v88;
    v7 = v89;
    int64_t v91; // 0x4106a0
    int64_t v92; // 0x4106a0
    int64_t v93; // 0x4106a0
    int64_t v94; // 0x4106a0
    int64_t v95; // 0x4106a0
    int64_t v96; // 0x4106a0
    if (v90 == a4) {
        goto lab_0x410780;
    } else {
        // 0x4107a0
        v91 = v6;
        v92 = v89;
        int64_t v97 = v13; // 0x4107a3
        int64_t v98 = v88; // 0x4107a3
        if ((char)v13 == (char)v88 == v90 < 58) {
            int64_t v99 = v6 + 1; // 0x4107c0
            unsigned char v100 = *(char *)v99; // 0x4107c4
            int64_t v101 = v99; // 0x4107cc
            while ((int32_t)v100 == a4) {
                // 0x4107c0
                v99 = v101 + 1;
                v100 = *(char *)v99;
                v101 = v99;
            }
            int64_t v102 = v100; // 0x4107c4
            int64_t v103 = v89; // 0x4107d0
            int64_t v104 = v103 + 1; // 0x4107d0
            unsigned char v105 = *(char *)v104; // 0x4107d4
            int64_t v106 = v104; // 0x4107de
            char v107 = v105; // 0x4107de
            int64_t v108; // 0x4107e0
            unsigned char v109; // 0x4107e4
            while ((int32_t)v105 == a4) {
                // 0x4107e0
                v108 = v103 + 2;
                v109 = *(char *)v108;
                v106 = v108;
                v107 = v109;
                if ((int32_t)v109 != a4) {
                    // break -> 0x4107a0
                    break;
                }
                v103 = v108;
                v104 = v103 + 1;
                v105 = *(char *)v104;
                v106 = v104;
                v107 = v105;
            }
            int64_t v110 = v107;
            v91 = v99;
            v92 = v106;
            v97 = v102;
            v98 = v110;
            while (v100 == v107) {
                // 0x4107a9
                v91 = v99;
                v92 = v106;
                v97 = v102;
                v98 = v110;
                if ((int32_t)v107 >= 58) {
                    // break -> 0x4108f0
                    break;
                }
                v99++;
                v100 = *(char *)v99;
                v101 = v99;
                while ((int32_t)v100 == a4) {
                    // 0x4107c0
                    v99 = v101 + 1;
                    v100 = *(char *)v99;
                    v101 = v99;
                }
                // 0x4107d0
                v102 = v100;
                v103 = v106;
                v104 = v103 + 1;
                v105 = *(char *)v104;
                v106 = v104;
                v107 = v105;
                while ((int32_t)v105 == a4) {
                    // 0x4107e0
                    v108 = v103 + 2;
                    v109 = *(char *)v108;
                    v106 = v108;
                    v107 = v109;
                    if ((int32_t)v109 != a4) {
                        // break -> 0x4107a0
                        break;
                    }
                    v103 = v108;
                    v104 = v103 + 1;
                    v105 = *(char *)v104;
                    v106 = v104;
                    v107 = v105;
                }
                // 0x4107a0
                v110 = v107;
                v91 = v99;
                v92 = v106;
                v97 = v102;
                v98 = v110;
            }
        }
        int32_t v111 = v98;
        if ((int32_t)v97 != a3 || v111 < 58) {
            int64_t v112 = v97 + 0xffffffd0; // 0x4108f8
            if (v111 == a3) {
                if ((int32_t)v112 < 10) {
                    // 0x410a76
                    v95 = v97 - v1 & 0xffffffff;
                    v93 = v1 + 0xffffffd0;
                    goto lab_0x410916;
                } else {
                    goto lab_0x410a2e;
                }
            } else {
                int64_t v113 = v97 - v98 & 0xffffffff; // 0x410905
                int64_t v114 = v98 + 0xffffffd0; // 0x410908
                v95 = v113;
                v93 = v114;
                if ((int32_t)v112 < 10) {
                    goto lab_0x410916;
                } else {
                    // 0x410af0
                    v96 = v113;
                    v94 = 0;
                    if ((int32_t)v114 >= 10) {
                        // 0x4106e8
                        return 0;
                    }
                    goto lab_0x410941;
                }
            }
        } else {
            goto lab_0x410a2e;
        }
    }
  lab_0x410780:;
    int64_t v115 = v7 + 1; // 0x410780
    unsigned char v116 = *(char *)v115; // 0x410784
    int64_t v117 = v115; // 0x41078c
    while (v116 == 48) {
        // 0x410780
        v115 = v117 + 1;
        v116 = *(char *)v115;
        v117 = v115;
    }
    // 0x41078e
    v8 = v115;
    v12 = v116;
    goto lab_0x41078e;
  lab_0x4109a2:;
    int64_t v118 = v10 + 1; // 0x4109a8
    int32_t v119 = (int32_t)*(char *)v118; // 0x4109af
    int64_t v120 = v118; // 0x4109b1
    while (v119 == a4) {
        // 0x4109a8
        v118 = v120 + 1;
        v119 = (int32_t)*(char *)v118;
        v120 = v118;
    }
    int64_t v121 = 1; // 0x4109b6
    int64_t v122 = v121; // 0x4109bd
    while (v119 < 58) {
        // 0x4109a8
        v118++;
        v119 = (int32_t)*(char *)v118;
        v120 = v118;
        while (v119 == a4) {
            // 0x4109a8
            v118 = v120 + 1;
            v119 = (int32_t)*(char *)v118;
            v120 = v118;
        }
        // 0x4109b3
        v121 = v122 + 1;
        v122 = v121;
    }
    // 0x4109bf
    if ((int32_t)v11 >= 10) {
        // 0x410aa1
        return v121 != 0 ? 0xffffffff : 0;
    }
    goto lab_0x4109c9;
  lab_0x410bb0:;
    int64_t v136 = v81 + 1; // 0x410bb0
    v82 = *(char *)v136;
    v83 = v136;
    goto lab_0x410bb4;
  lab_0x410ad8:;
    int64_t v137 = v78 + 1; // 0x410ad8
    v79 = *(char *)v137;
    v80 = v137;
    goto lab_0x410adc;
  lab_0x410a2e:;
    char v162 = *(char *)v92; // 0x410a2e
    char v163 = a3; // 0x410a32
    int64_t v153; // 0x4106a0
    int64_t v159; // 0x4106a0
    int64_t v151; // 0x4106a0
    char v156; // 0x4106a0
    if (*(char *)v91 == v163) {
        int64_t v164 = v91 + 1;
        char v165 = *(char *)v164; // 0x410b18
        int64_t v166 = v165; // 0x410b18
        v153 = v164;
        v151 = v166;
        if (v162 == v163) {
            int64_t v167 = v92 + 1; // 0x410b5a
            char v168 = *(char *)v167; // 0x410b5e
            int64_t v169 = v166 + 0xffffffd0; // 0x410b68
            int64_t v170 = v164; // 0x410b6e
            int64_t v171 = v167; // 0x410b6e
            int64_t v172 = v169; // 0x410b6e
            int64_t v173 = v91; // 0x410b6e
            int64_t v174 = v164; // 0x410b6e
            int64_t v175 = v167; // 0x410b6e
            int64_t v176 = v166; // 0x410b6e
            char v177 = v168; // 0x410b6e
            int64_t v178 = v169; // 0x410b6e
            if (v168 == v165) {
                while ((int32_t)v172 < 10) {
                    int64_t v179 = v170; // 0x410b64
                    char v180 = *(char *)(v173 + 2); // 0x410b56
                    int64_t v181 = v180; // 0x410b56
                    int64_t v182 = v171 + 1; // 0x410b5a
                    char v183 = *(char *)v182; // 0x410b5e
                    int64_t v184 = v179 + 1; // 0x410b64
                    int64_t v185 = v181 + 0xffffffd0; // 0x410b68
                    v170 = v184;
                    v171 = v182;
                    v172 = v185;
                    v173 = v179;
                    v174 = v184;
                    v175 = v182;
                    v176 = v181;
                    v177 = v183;
                    v178 = v185;
                    if (v183 != v180) {
                        goto lab_0x410b70;
                    }
                }
                // 0x4106e8
                return 0;
            }
          lab_0x410b70:
            // 0x410b70
            if ((int32_t)v178 < 10) {
                // 0x410b82
                v153 = v174;
                v151 = v176;
                if ((int32_t)v177 < 58) {
                    // 0x410b88
                    return v176 - (int64_t)v177 & 0xffffffff;
                }
                goto lab_0x410b37;
            } else {
                // 0x410bfe
                v159 = v175;
                v156 = v177;
                if ((int32_t)v177 >= 58) {
                    // 0x4106e8
                    return 0;
                }
                goto lab_0x410a57;
            }
        } else {
            goto lab_0x410b37;
        }
    } else {
        // 0x410a3a
        if (v162 != v163) {
            // 0x4106e8
            return 0;
        }
        int64_t v186 = v92 + 1; // 0x410a45
        v159 = v186;
        v156 = *(char *)v186;
        goto lab_0x410a57;
    }
  lab_0x4109c9:;
    int64_t v123 = 0; // 0x4109cb
    int64_t v124 = v9; // 0x4109cb
    int64_t v125; // 0x4109de
    while (true) {
        int64_t v126 = v124 + 1; // 0x4109d0
        if ((int32_t)*(char *)v126 != a4) {
            // 0x4109db
            int64_t v127; // 0x4109de
            v125 = v127 + 1;
            int32_t v128; // 0x4109d7
            if (v128 >= 58) {
                // break -> 0x4109e7
                break;
            }
        }
        // 0x4109d0
        v124 = v126;
    }
    int64_t v129 = v125; // 0x4109ea
    int64_t v130; // 0x4106a0
    int64_t v131 = v130; // 0x4109ea
    uint64_t v132; // 0x4106a0
    if (v125 != v132) {
        int64_t result = v132 < v125 ? 1 : 0xffffffff; // 0x410a90
        return result;
    }
    int64_t v133 = v131;
    int64_t v134 = v129; // 0x4109f0
    int64_t result2 = v134 == 0 ? 0 : v133 & 0xffffffff; // 0x4109f8
    return result2;
  lab_0x410bb4:;
    int64_t v135 = v82; // 0x410bb9
    v81 = v83;
    if (v82 != 48) {
        // 0x4108be
        return (int32_t)v135 < 58;
    }
    goto lab_0x410bb0;
  lab_0x410adc:;
    char v138 = v79; // 0x410ae1
    v78 = v80;
    if (v79 != 48) {
        // 0x410a5f
        return (int32_t)v138 < 58 ? 0xffffffff : 0;
    }
    goto lab_0x410ad8;
  lab_0x410916:;
    int64_t v139 = v91 + 1; // 0x410920
    int32_t v140 = (int32_t)*(char *)v139; // 0x410927
    int64_t v141 = v139; // 0x410929
    while (v140 == a4) {
        // 0x410920
        v139 = v141 + 1;
        v140 = (int32_t)*(char *)v139;
        v141 = v139;
    }
    int64_t v142 = 1; // 0x41092e
    int64_t v143 = v142; // 0x410935
    while (v140 < 58) {
        // 0x410920
        v139++;
        v140 = (int32_t)*(char *)v139;
        v141 = v139;
        while (v140 == a4) {
            // 0x410920
            v139 = v141 + 1;
            v140 = (int32_t)*(char *)v139;
            v141 = v139;
        }
        // 0x41092b
        v142 = v143 + 1;
        v143 = v142;
    }
    // 0x410937
    v96 = v95;
    v94 = v142;
    if ((int32_t)v93 >= 10) {
        // 0x410a98
        return v142 != 0;
    }
    goto lab_0x410941;
  lab_0x410b37:
    // 0x410b37
    if ((char)v151 != 48) {
        // 0x410b3c
        return (int32_t)v151 < 58;
    }
    int64_t v152 = v153 + 1; // 0x410b30
    char v154 = *(char *)v152; // 0x410b34
    int64_t v155 = v152; // 0x410b3a
    while (v154 == 48) {
        // 0x410b30
        v152 = v155 + 1;
        v154 = *(char *)v152;
        v155 = v152;
    }
    // 0x410b3c
    return (int32_t)(int64_t)v154 < 58;
  lab_0x410a57:
    // 0x410a57
    if (v156 != 48) {
        char v157 = v138;
        int64_t result3 = (int32_t)v157 < 58 ? 0xffffffff : 0; // 0x410a6b
        return result3;
    }
    int64_t v158 = v159 + 1; // 0x410a50
    char v160 = *(char *)v158; // 0x410a54
    int64_t v161 = v158; // 0x410a5a
    while (v160 == 48) {
        // 0x410a50
        v158 = v161 + 1;
        v160 = *(char *)v158;
        v161 = v158;
    }
    // 0x410a5f
    return (int32_t)v160 < 58 ? 0xffffffff : 0;
  lab_0x410941:;
    int64_t v144 = 0; // 0x410943
    int64_t v145 = v92; // 0x410943
    int64_t v146; // 0x410956
    while (true) {
        int64_t v147 = v144; // 0x410956
        int64_t v148 = v145 + 1; // 0x410948
        int32_t v149 = (int32_t)*(char *)v148; // 0x41094f
        int64_t v150 = v147; // 0x410951
        if (v149 != a4) {
            // 0x410953
            v146 = v147 + 1;
            v150 = v146;
            if (v149 >= 58) {
                // break -> 0x41095f
                break;
            }
        }
        // 0x410948
        v144 = v150;
        v145 = v148;
    }
    // 0x41095f
    if (v146 == v94) {
        // 0x4109f0
        return v94 == 0 ? 0 : v96 & 0xffffffff;
    }
    // 0x410968
    return v94 < v146 ? 0xffffffff : 1;
}
// Address range: 0x410c20 - 0x410c6e
int64_t function_410c20(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x410c2c
    if (fd >= 3) {
        // 0x410c31
        return a1 & 0xffffffff;
    }
    // 0x410c40
    int64_t v1; // 0x410c20
    int64_t v2 = function_413ea0(a1, v1); // 0x410c40
    int32_t * v3 = __errno_location(); // 0x410c48
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x410c70 - 0x41104d
int64_t function_410c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x410d08
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x410c8c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x410ca6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x410ceb
    if (a6 < 10) {
        // 0x410cfa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x410df2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x411050 - 0x411070
int64_t function_411050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x411050
    if (a5 == 0) {
        // 0x41106b
        return function_410c70(a1, a2, a3, a4, a5, 0, (int64_t)&g122);
    }
    int64_t v1 = 0; // 0x411057
    v1++;
    int64_t v2 = v1; // 0x411069
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x411060
        v1++;
        v2 = v1;
    }
    // 0x41106b
    return function_410c70(a1, a2, a3, a4, a5, v2, (int64_t)&g122);
}
// Address range: 0x411070 - 0x4110d0
int64_t function_411070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x411070
    int64_t v3 = &v2; // 0x411070
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4110a3
    int64_t v6; // 0x41108d
    int64_t * v7; // 0x4110ab
    int64_t v8; // 0x4110ab
    int64_t v9; // 0x4110b7
    if (v5 < 48) {
        // 0x411080
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4110c3
            break;
        }
    } else {
        // 0x4110ab
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4110c3
            break;
        }
    }
    int64_t v10 = 10; // 0x4110a1
    while (v4 != 9) {
        // 0x411099
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x411080
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4110c3
                break;
            }
        } else {
            // 0x4110ab
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4110c3
                break;
            }
        }
        // 0x411099
        v10 = 10;
    }
    // 0x4110c3
    return function_410c70(a1, a2, a3, a4, v3, v10, (int64_t)&g122);
}
// Address range: 0x4110d0 - 0x41118c
int64_t function_4110d0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4110d0
    int64_t v1; // bp-168, 0x4110d0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4110d0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4110d0
    int64_t v8; // 0x4110d0
    int64_t v9; // bp-56, 0x4110d0
    int64_t v10; // 0x411135
    int64_t v11; // 0x411159
    if ((int32_t)v6 < 48) {
        // 0x411120
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x411170
            break;
        }
    } else {
        // 0x411152
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x411170
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x41114a
    int64_t v13 = 10; // 0x41114a
    while (v5 != 9) {
        // 0x41114c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x411120
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x411170
                break;
            }
        } else {
            // 0x411152
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x411170
                break;
            }
        }
        // 0x411142
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x411170
    int64_t v14; // bp-136, 0x4110d0
    int64_t result = function_410c70(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g122); // 0x41117f
    return result;
}
// Address range: 0x411190 - 0x411204
int64_t function_411190(int64_t a1) {
    // 0x411190
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4111f3
    return fputs_unlocked(v1, g52);
}
// Address range: 0x411210 - 0x41122a
int64_t function_411210(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x411214
    if (size != 0 != (mem == NULL)) {
        // 0x411223
        return (int64_t)mem;
    }
    // 0x411225
    function_411460(size);
    // UNREACHABLE
}
// Address range: 0x411230 - 0x411251
int64_t function_411230(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x411233
    int64_t v2 = v1; // 0x411233
    if (v2 < 0) {
        // 0x41124b
        function_411460(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x411249
        return function_411210(v2);
    }
    // 0x41124b
    function_411460(v2);
    // UNREACHABLE
}
// Address range: 0x411260 - 0x411262
int64_t function_411260(void) {
    // 0x411260
    int64_t v1; // 0x411260
    return function_411210(v1);
}
// Address range: 0x411270 - 0x4112a6
int64_t function_411270(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x411298
        free(v1);
        return (int32_t)&g122 ^ (int32_t)&g122;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x411281
    if (a2 != 0 != (mem == NULL)) {
        // 0x411290
        return (int64_t)mem;
    }
    // 0x4112a1
    function_411460(a1);
    // UNREACHABLE
}
// Address range: 0x4112b0 - 0x4112d1
int64_t function_4112b0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4112b3
    int64_t v2 = v1; // 0x4112b3
    if (v2 < 0) {
        // 0x4112cb
        function_411460(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4112c9
        return function_411270(a1, v2);
    }
    // 0x4112cb
    function_411460(a1);
    // UNREACHABLE
}
// Address range: 0x4112e0 - 0x411366
int64_t function_4112e0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x41133b
            function_411460(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_411270(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x411323
    if (a2 == 0) {
        // 0x411348
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x411328
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x41133b
        function_411460(a1);
        // UNREACHABLE
    }
    // 0x41130a
    *(int64_t *)a2 = v2;
    return function_411270(a1, v2 * a3);
}
// Address range: 0x411370 - 0x4113c0
int64_t function_411370(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x411370
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4113ba
            function_411460(a1);
            // UNREACHABLE
        }
        // 0x411392
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_411270(a1, v1);
    }
    if (a2 == 0) {
        // 0x4113a5
        *(int64_t *)a2 = 128;
        return function_411270(0, 128);
    }
    // 0x4113b8
    if (a2 < 0) {
        // 0x4113ba
        function_411460(a1);
        // UNREACHABLE
    }
    // 0x411392
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_411270(a1, v1);
}
// Address range: 0x4113c0 - 0x4113d7
int64_t function_4113c0(int64_t a1, int64_t a2) {
    // 0x4113c0
    return (int64_t)memset((int64_t *)function_411210(a1), 0, (int32_t)a1);
}
// Address range: 0x4113e0 - 0x41140e
int64_t function_4113e0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4113e7
    if ((int64_t)v1 < 0) {
        // 0x411409
        function_411460(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x411409
        function_411460(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4113fa
    if (mem != NULL) {
        // 0x411404
        return (int64_t)mem;
    }
    // 0x411409
    function_411460(nmemb);
    // UNREACHABLE
}
// Address range: 0x411410 - 0x411438
int64_t function_411410(int64_t * a1, int64_t a2) {
    // 0x411410
    return (int64_t)memcpy((int64_t *)function_411210(a2), a1, (int32_t)a2);
}
// Address range: 0x411440 - 0x411453
int64_t function_411440(int64_t str) {
    // 0x411440
    return function_411410((int64_t *)str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x411460 - 0x411491
int64_t function_411460(int64_t a1) {
    // 0x411460
    error(g41, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4114a0 - 0x411554
int64_t function_4114a0(int64_t err_num, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4114a0
    error(0, (int32_t)err_num, dcgettext(NULL, "string comparison failed", 5));
    error(0, (int32_t)"Set LC_ALL='C' to work around the problem." ^ (int32_t)"Set LC_ALL='C' to work around the problem.", dcgettext(NULL, "Set LC_ALL='C' to work around the problem.", 5));
    function_40f5c0(1, 8, a4, a5);
    function_40f5c0(0, 8, a2, a3);
    error(g41, (int32_t)"The strings compared were %s and %s." ^ (int32_t)"The strings compared were %s and %s.", dcgettext(NULL, "The strings compared were %s and %s.", 5));
    return &g122;
}
// Address range: 0x411560 - 0x4115b5
int64_t function_411560(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_413d80(a1, a2, a3, a4); // 0x411574
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x4115c0 - 0x411617
int64_t function_4115c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_413e30(a1, a2, a3, a4); // 0x4115d4
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x411620 - 0x411673
int64_t function_411620(int64_t a1, int64_t a2, int64_t a3) {
    // 0x411620
    int64_t v1; // 0x411620
    int64_t v2 = function_413580(a1, a2, a3, v1); // bp-24, 0x41162a
    int32_t * v3 = __errno_location(); // 0x411633
    *v3 = 0;
    int64_t v4 = function_413140(&v2, 0); // 0x411653
    int64_t result = v4; // 0x41165a
    while ((int32_t)v4 != 0) {
        // 0x411640
        result = 0xffffffff;
        if ((*v3 & -5) != 0) {
            // break -> 0x41165c
            break;
        }
        *v3 = 0;
        v4 = function_413140(&v2, 0);
        result = v4;
    }
    // 0x41165c
    return result;
}
// Address range: 0x411680 - 0x411ab0
int64_t function_411680(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x41168e
    if (base >= 37) {
        // 0x411a8b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g122;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x4116b2
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x4116e2
    int64_t v3 = str; // 0x4116e7
    char v4 = c; // 0x4116e7
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x4116dc
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x4116d8
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x4116e9
    if (v4 == 45) {
        // 0x411723
        return 4;
    }
    // 0x4116ee
    int64_t v6; // bp-64, 0x411680
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x4116ae
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x4116f4
    int64_t * v7 = (int64_t *)endptr; // 0x4116f9
    int64_t v8 = *v7; // 0x4116f9
    char v9; // 0x411680
    int64_t v10; // 0x411680
    int64_t v11; // 0x411680
    int64_t v12; // 0x411680
    int64_t v13; // 0x411680
    int64_t v14; // 0x411680
    int64_t v15; // 0x411680
    if (v8 == str) {
        // 0x411750
        if (c == 0 || str2 == NULL) {
            // 0x411723
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x411771
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x411723
            return 4;
        }
        goto lab_0x41177f;
    } else {
        int32_t v16 = *v1; // 0x411704
        int64_t v17 = 0; // 0x41170a
        if (v16 != 0) {
            // 0x411738
            v17 = 1;
            if (v16 != 34) {
                // 0x411723
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x4116f4
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x411720;
        } else {
            char c2 = *(char *)v8; // 0x411713
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x411873
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x41177f;
                } else {
                    goto lab_0x411885;
                }
            } else {
                goto lab_0x411720;
            }
        }
    }
  lab_0x41177f:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x411787
    int64_t v21 = 1; // 0x411787
    int64_t v22; // 0x411680
    int64_t v23; // 0x411680
    int64_t v24; // 0x411680
    int64_t v25; // 0x411680
    int64_t v26; // 0x411680
    int64_t v27; // 0x411680
    int64_t v28; // 0x411680
    int64_t v29; // 0x411680
    int64_t v30; // 0x411680
    int64_t v31; // 0x411680
    int64_t v32; // 0x411680
    int64_t v33; // 0x411680
    int64_t v34; // 0x411680
    int64_t v35; // 0x411680
    int64_t v36; // 0x411680
    int64_t v37; // 0x411680
    int64_t v38; // 0x411680
    int64_t v39; // 0x411680
    int64_t v40; // 0x411680
    int64_t v41; // 0x411680
    if (v19 < 48) {
        // 0x411789
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4117ea;
        } else {
            // 0x41179c
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x4117ea;
            } else {
                // 0x4117b8
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x4117ea;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x411a19
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x4117ea;
                    }
                    default: {
                        // 0x4117cd
                        g126 = v19;
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
                                goto lab_0x41198b;
                            }
                            case 70: {
                                goto lab_0x411885;
                            }
                            case 71: {
                                goto lab_0x4119c3;
                            }
                            case 72: {
                                goto lab_0x411885;
                            }
                            case 73: {
                                goto lab_0x411885;
                            }
                            case 74: {
                                goto lab_0x411885;
                            }
                            case 75: {
                                goto lab_0x41184c;
                            }
                            case 76: {
                                goto lab_0x411885;
                            }
                            case 77: {
                                goto lab_0x41180e;
                            }
                            case 78: {
                                goto lab_0x411885;
                            }
                            case 79: {
                                goto lab_0x411885;
                            }
                            case 80: {
                                goto lab_0x411958;
                            }
                            case 81: {
                                goto lab_0x411885;
                            }
                            case 82: {
                                goto lab_0x411885;
                            }
                            case 83: {
                                goto lab_0x411885;
                            }
                            case 84: {
                                goto lab_0x411928;
                            }
                            case 85: {
                                goto lab_0x411885;
                            }
                            case 86: {
                                goto lab_0x411885;
                            }
                            case 87: {
                                goto lab_0x411885;
                            }
                            case 88: {
                                goto lab_0x411885;
                            }
                            case 89: {
                                goto lab_0x4118f6;
                            }
                            case 90: {
                                goto lab_0x4118bb;
                            }
                            case 91: {
                                goto lab_0x411885;
                            }
                            case 92: {
                                goto lab_0x411885;
                            }
                            case 93: {
                                goto lab_0x411885;
                            }
                            case 94: {
                                goto lab_0x411885;
                            }
                            case 95: {
                                goto lab_0x411885;
                            }
                            case 96: {
                                goto lab_0x411885;
                            }
                            case 97: {
                                goto lab_0x411885;
                            }
                            case 98: {
                                goto lab_0x41189f;
                            }
                            case 99: {
                                goto lab_0x411828;
                            }
                            case 100: {
                                goto lab_0x411885;
                            }
                            case 101: {
                                goto lab_0x411885;
                            }
                            case 102: {
                                goto lab_0x411885;
                            }
                            case 103: {
                                goto lab_0x4119c3;
                            }
                            case 104: {
                                goto lab_0x411885;
                            }
                            case 105: {
                                goto lab_0x411885;
                            }
                            case 106: {
                                goto lab_0x411885;
                            }
                            case 107: {
                                goto lab_0x41184c;
                            }
                            case 108: {
                                goto lab_0x411885;
                            }
                            case 109: {
                                goto lab_0x41180e;
                            }
                            case 110: {
                                goto lab_0x411885;
                            }
                            case 111: {
                                goto lab_0x411885;
                            }
                            case 112: {
                                goto lab_0x411885;
                            }
                            case 113: {
                                goto lab_0x411885;
                            }
                            case 114: {
                                goto lab_0x411885;
                            }
                            case 115: {
                                goto lab_0x411885;
                            }
                            case 116: {
                                goto lab_0x411928;
                            }
                            default: {
                                goto lab_0x4117ea;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4117ea;
    }
  lab_0x411720:
    // 0x411720
    *a4 = v13;
    // 0x411723
    return v10 & 0xffffffff;
  lab_0x4117ea:
    // 0x4117ea
    g127 = v9 - 66;
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
    int64_t v43; // 0x411680
    switch (v9) {
        case 66: {
            // 0x4119e4
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x411857;
            } else {
                // 0x4119f1
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x411828;
            }
        }
        case 69: {
            goto lab_0x41198b;
        }
        case 71: {
            goto lab_0x4119c3;
        }
        case 75: {
            goto lab_0x41184c;
        }
        case 77: {
            goto lab_0x41180e;
        }
        case 80: {
            goto lab_0x411958;
        }
        case 84: {
            goto lab_0x411928;
        }
        case 89: {
            goto lab_0x4118f6;
        }
        case 90: {
            goto lab_0x4118bb;
        }
        case 98: {
            goto lab_0x41189f;
        }
        case 99: {
            goto lab_0x411828;
        }
        case 103: {
            goto lab_0x4119c3;
        }
        case 107: {
            goto lab_0x41184c;
        }
        case 109: {
            goto lab_0x41180e;
        }
        case 116: {
            goto lab_0x411928;
        }
        case 119: {
            // 0x411890
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x411857;
            } else {
                // 0x411895
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x411828;
            }
        }
        default: {
            goto lab_0x411885;
        }
    }
  lab_0x41198b:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x4119a3
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x4119af
    int64_t v48 = v45; // 0x4119b2
    int64_t v49 = v34; // 0x4119b2
    int64_t v50 = v46; // 0x4119b2
    int32_t v51 = v47; // 0x4119b2
    int64_t v52 = v46; // 0x4119b2
    while (v47 != 0) {
        // 0x4119a0
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
    goto lab_0x4118e4;
  lab_0x4119c3:
    // 0x4119c3
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x4119ce
        int128_t v53; // 0x4119c9
        uint128_t v54; // 0x4119c9
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x4119ce
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x411680
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x4119d3
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x4119d8
                v23 = v57;
                int64_t v58; // 0x411680
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x411828;
  lab_0x41184c:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x41184f
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x411828;
    } else {
        goto lab_0x411857;
    }
  lab_0x41180e:;
    int128_t v62 = v24; // 0x411814
    uint128_t v63 = v62 * (int128_t)v14; // 0x411814
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x411857;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x411819
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x411857;
        } else {
            // 0x41181e
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x411828;
        }
    }
  lab_0x411958:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x41196b
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x411977
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x41197a
    int64_t v70 = v67; // 0x41197a
    while (v68 != 0) {
        // 0x411968
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
    goto lab_0x4118e4;
  lab_0x411928:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x41193b
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x411947
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x41194a
    int64_t v76 = v73; // 0x41194a
    while (v74 != 0) {
        // 0x411938
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
    goto lab_0x4118e4;
  lab_0x4118f6:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x41190b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x411917
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x41191a
    int64_t v82 = v79; // 0x41191a
    while (v80 != 0) {
        // 0x411908
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
    goto lab_0x4118e4;
  lab_0x4118bb:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x4118d3
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x4118df
    int32_t v87 = v86; // 0x4118e2
    int64_t v88 = v85; // 0x4118e2
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x4118d0
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
    goto lab_0x4118e4;
  lab_0x41189f:
    // 0x41189f
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x411857;
    } else {
        // 0x4118a8
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x411828;
    }
  lab_0x411828:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x41182d
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x411720;
  lab_0x411885:
    // 0x411885
    *a4 = v15;
    // 0x411723
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x411857:
    // 0x411857
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x411828;
  lab_0x4118e4:
    // 0x4118e4
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x411828;
}
// Address range: 0x411ab0 - 0x411b31
int64_t function_411ab0(int64_t a1, int64_t a2, int64_t a3, char (**a4)[22], char a5) {
    int64_t v1 = *(int64_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g20); // 0x411ad2
    error(g41, 0, dcgettext(NULL, (char *)v1, 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x411b40 - 0x411f80
int64_t function_411b40(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int32_t a5, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x411b4e
    if (v1 >= 37) {
        // 0x411f5b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g122;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x411b72
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x411ba2
    int64_t v4 = a1; // 0x411ba7
    char v5 = c; // 0x411ba7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x411b9c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x411b98
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x411ba9
    if (v5 == 45) {
        // 0x411be5
        return 4;
    }
    int64_t str = a5;
    int64_t v7; // bp-64, 0x411b40
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x411b6e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x411bb6
    int64_t * v10 = (int64_t *)v8; // 0x411bbb
    int64_t v11 = *v10; // 0x411bbb
    char v12; // 0x411b40
    int64_t v13; // 0x411b40
    int64_t v14; // 0x411b40
    int64_t v15; // 0x411b40
    int64_t v16; // 0x411b40
    int64_t v17; // 0x411b40
    int64_t v18; // 0x411b40
    if (v11 == a1) {
        // 0x411c18
        if (c == 0 || a5 == 0) {
            // 0x411be5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x411c39
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x411be5
            return 4;
        }
        goto lab_0x411c47;
    } else {
        int32_t v19 = *v2; // 0x411bc6
        int64_t v20 = 0; // 0x411bcc
        if (v19 != 0) {
            // 0x411c00
            v20 = 1;
            if (v19 != 34) {
                // 0x411be5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x411bb6
        v16 = v21;
        v13 = v20;
        if (a5 == 0) {
            goto lab_0x411be2;
        } else {
            char c2 = *(char *)v11; // 0x411bd5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x411d43
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x411c47;
                } else {
                    goto lab_0x411d55;
                }
            } else {
                goto lab_0x411be2;
            }
        }
    }
  lab_0x411c47:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x411c4f
    int64_t v24 = 1; // 0x411c4f
    int64_t v25; // 0x411b40
    int64_t v26; // 0x411b40
    int64_t v27; // 0x411b40
    int64_t v28; // 0x411b40
    int64_t v29; // 0x411b40
    int64_t v30; // 0x411b40
    int64_t v31; // 0x411b40
    int64_t v32; // 0x411b40
    int64_t v33; // 0x411b40
    int64_t v34; // 0x411b40
    int64_t v35; // 0x411b40
    int64_t v36; // 0x411b40
    int64_t v37; // 0x411b40
    int64_t v38; // 0x411b40
    int64_t v39; // 0x411b40
    int64_t v40; // 0x411b40
    int64_t v41; // 0x411b40
    int64_t v42; // 0x411b40
    int64_t v43; // 0x411b40
    int64_t v44; // 0x411b40
    if (v22 < 48) {
        // 0x411c51
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x411cba;
        } else {
            // 0x411c64
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x411cba;
            } else {
                // 0x411c80
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x411cba;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x411ee9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x411cba;
                    }
                    default: {
                        // 0x411c95
                        g128 = v22;
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
                                goto lab_0x411e5b;
                            }
                            case 70: {
                                goto lab_0x411d55;
                            }
                            case 71: {
                                goto lab_0x411e93;
                            }
                            case 72: {
                                goto lab_0x411d55;
                            }
                            case 73: {
                                goto lab_0x411d55;
                            }
                            case 74: {
                                goto lab_0x411d55;
                            }
                            case 75: {
                                goto lab_0x411d1c;
                            }
                            case 76: {
                                goto lab_0x411d55;
                            }
                            case 77: {
                                goto lab_0x411cde;
                            }
                            case 78: {
                                goto lab_0x411d55;
                            }
                            case 79: {
                                goto lab_0x411d55;
                            }
                            case 80: {
                                goto lab_0x411e28;
                            }
                            case 81: {
                                goto lab_0x411d55;
                            }
                            case 82: {
                                goto lab_0x411d55;
                            }
                            case 83: {
                                goto lab_0x411d55;
                            }
                            case 84: {
                                goto lab_0x411df8;
                            }
                            case 85: {
                                goto lab_0x411d55;
                            }
                            case 86: {
                                goto lab_0x411d55;
                            }
                            case 87: {
                                goto lab_0x411d55;
                            }
                            case 88: {
                                goto lab_0x411d55;
                            }
                            case 89: {
                                goto lab_0x411dc6;
                            }
                            case 90: {
                                goto lab_0x411d8b;
                            }
                            case 91: {
                                goto lab_0x411d55;
                            }
                            case 92: {
                                goto lab_0x411d55;
                            }
                            case 93: {
                                goto lab_0x411d55;
                            }
                            case 94: {
                                goto lab_0x411d55;
                            }
                            case 95: {
                                goto lab_0x411d55;
                            }
                            case 96: {
                                goto lab_0x411d55;
                            }
                            case 97: {
                                goto lab_0x411d55;
                            }
                            case 98: {
                                goto lab_0x411d6f;
                            }
                            case 99: {
                                goto lab_0x411cf8;
                            }
                            case 100: {
                                goto lab_0x411d55;
                            }
                            case 101: {
                                goto lab_0x411d55;
                            }
                            case 102: {
                                goto lab_0x411d55;
                            }
                            case 103: {
                                goto lab_0x411e93;
                            }
                            case 104: {
                                goto lab_0x411d55;
                            }
                            case 105: {
                                goto lab_0x411d55;
                            }
                            case 106: {
                                goto lab_0x411d55;
                            }
                            case 107: {
                                goto lab_0x411d1c;
                            }
                            case 108: {
                                goto lab_0x411d55;
                            }
                            case 109: {
                                goto lab_0x411cde;
                            }
                            case 110: {
                                goto lab_0x411d55;
                            }
                            case 111: {
                                goto lab_0x411d55;
                            }
                            case 112: {
                                goto lab_0x411d55;
                            }
                            case 113: {
                                goto lab_0x411d55;
                            }
                            case 114: {
                                goto lab_0x411d55;
                            }
                            case 115: {
                                goto lab_0x411d55;
                            }
                            case 116: {
                                goto lab_0x411df8;
                            }
                            default: {
                                goto lab_0x411cba;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x411cba;
    }
  lab_0x411be2:
    // 0x411be2
    *a4 = v16;
    // 0x411be5
    return v13 & 0xffffffff;
  lab_0x411cba:
    // 0x411cba
    g129 = v12 - 66;
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
    int64_t v46; // 0x411b40
    switch (v12) {
        case 66: {
            // 0x411eb4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x411d27;
            } else {
                // 0x411ec1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x411cf8;
            }
        }
        case 69: {
            goto lab_0x411e5b;
        }
        case 71: {
            goto lab_0x411e93;
        }
        case 75: {
            goto lab_0x411d1c;
        }
        case 77: {
            goto lab_0x411cde;
        }
        case 80: {
            goto lab_0x411e28;
        }
        case 84: {
            goto lab_0x411df8;
        }
        case 89: {
            goto lab_0x411dc6;
        }
        case 90: {
            goto lab_0x411d8b;
        }
        case 98: {
            goto lab_0x411d6f;
        }
        case 99: {
            goto lab_0x411cf8;
        }
        case 103: {
            goto lab_0x411e93;
        }
        case 107: {
            goto lab_0x411d1c;
        }
        case 109: {
            goto lab_0x411cde;
        }
        case 116: {
            goto lab_0x411df8;
        }
        case 119: {
            // 0x411d60
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x411d27;
            } else {
                // 0x411d65
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x411cf8;
            }
        }
        default: {
            goto lab_0x411d55;
        }
    }
  lab_0x411e5b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x411e73
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x411e7f
    int64_t v51 = v48; // 0x411e82
    int64_t v52 = v37; // 0x411e82
    int64_t v53 = v49; // 0x411e82
    int32_t v54 = v50; // 0x411e82
    int64_t v55 = v49; // 0x411e82
    while (v50 != 0) {
        // 0x411e70
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
    goto lab_0x411db4;
  lab_0x411e93:
    // 0x411e93
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x411e9e
        int128_t v56; // 0x411e99
        uint128_t v57; // 0x411e99
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x411e9e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x411b40
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x411ea3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x411ea8
                v26 = v60;
                int64_t v61; // 0x411b40
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x411cf8;
  lab_0x411d1c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x411d1f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x411cf8;
    } else {
        goto lab_0x411d27;
    }
  lab_0x411cde:;
    int128_t v65 = v27; // 0x411ce4
    uint128_t v66 = v65 * (int128_t)v17; // 0x411ce4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x411d27;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x411ce9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x411d27;
        } else {
            // 0x411cee
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x411cf8;
        }
    }
  lab_0x411e28:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x411e3b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x411e47
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x411e4a
    int64_t v73 = v70; // 0x411e4a
    while (v71 != 0) {
        // 0x411e38
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
    goto lab_0x411db4;
  lab_0x411df8:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x411e0b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x411e17
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x411e1a
    int64_t v79 = v76; // 0x411e1a
    while (v77 != 0) {
        // 0x411e08
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
    goto lab_0x411db4;
  lab_0x411dc6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x411ddb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x411de7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x411dea
    int64_t v85 = v82; // 0x411dea
    while (v83 != 0) {
        // 0x411dd8
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
    goto lab_0x411db4;
  lab_0x411d8b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x411da3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x411daf
    int32_t v90 = v89; // 0x411db2
    int64_t v91 = v88; // 0x411db2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x411da0
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
    goto lab_0x411db4;
  lab_0x411d6f:
    // 0x411d6f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x411d27;
    } else {
        // 0x411d78
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x411cf8;
    }
  lab_0x411cf8:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x411cfd
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x411be2;
  lab_0x411d55:
    // 0x411d55
    *a4 = v18;
    // 0x411be5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x411d27:
    // 0x411d27
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x411cf8;
  lab_0x411db4:
    // 0x411db4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x411cf8;
}
// Address range: 0x411f80 - 0x411ffb
int64_t function_411f80(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x411f87
    if (fileno(stream) < 0) {
        // 0x411fe7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x411f9a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x411fcb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x411fe7
            return fclose(stream);
        }
    }
    // 0x411f9c
    if ((int32_t)function_412140(a1, v1) == 0) {
        // 0x411fe7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x411fa8
    int32_t v3 = *v2; // 0x411fb0
    int64_t result = fclose(stream); // 0x411fbe
    if (v3 != 0) {
        // 0x411ff0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x411fc0
    return result;
}
// Address range: 0x412000 - 0x412135
int64_t function_412000(int32_t fd, int64_t a2, int32_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x412030
    if (cmd != 1030) {
        // 0x4120e0
        return fcntl(fd, cmd);
    }
    // 0x41203c
    int64_t v1; // 0x412000
    if (g114 < 0) {
        int64_t v2 = function_412000(fd, 0, a3, a4); // 0x412084
        int64_t v3 = v2 & 0xffffffff; // 0x412089
        if ((int32_t)v2 < 0) {
            // 0x412070
            return v3 & 0xffffffff;
        }
        // 0x41208f
        v1 = v3;
        if (g114 != -1) {
            // 0x412070
            return v3 & 0xffffffff;
        }
    } else {
        uint32_t v4 = fcntl(fd, cmd); // 0x412057
        if (v4 >= 0 || *__errno_location() != 22) {
            // 0x412066
            g114 = 1;
            // 0x412070
            return (int64_t)v4 & 0xffffffff;
        }
        int64_t v5 = function_412000(fd, 0, a3, a4); // 0x412117
        int64_t v6 = v5 & 0xffffffff; // 0x41211c
        if ((int32_t)v5 < 0) {
            // 0x412070
            return v6 & 0xffffffff;
        }
        // 0x412126
        g114 = -1;
        v1 = v6;
    }
    int32_t fd2 = v1; // 0x41209f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x4120aa
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x412070
            return v1 & 0xffffffff;
        }
    }
    int32_t * v7 = __errno_location(); // 0x4120c2
    close(fd2);
    // 0x412070
    return 0xffffffff;
}
// Address range: 0x412140 - 0x412180
int64_t function_412140(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x41215a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x41215a
        return fflush(stream);
    }
    // 0x412168
    function_412180(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x412180 - 0x4121d7
int64_t function_412180(int64_t stream, int32_t offset, int64_t whence) {
    // 0x412180
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x41218a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4121bb
    int64_t result = -1; // 0x4121c4
    if (v1 != -1) {
        // 0x4121c6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4121d2
    return result;
}
// Address range: 0x4121e0 - 0x4122bf
int64_t function_4121e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4121ec
    uint32_t v2 = *v1; // 0x4121ec
    int64_t v3 = a2 & 0xffffffff; // 0x4121f1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4121f4
    uint64_t v5 = (int64_t)*v4; // 0x4121f4
    int64_t v6; // 0x412262
    if (v3 <= v5) {
      lab_0x41225c_2:
        // 0x41225c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4121e2
    int64_t v8 = v2; // 0x4121e0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x41225c
        goto lab_0x41225c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x412218
    int64_t v17; // 0x412226
    int64_t * v18; // 0x412240
    int64_t * v19; // 0x412243
    int64_t v20; // 0x41224e
    int64_t v21; // 0x412226
    while ((v16 & 0xffffffff) > v10) {
        // 0x412223
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x412240
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x412257
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x41225c
            goto lab_0x41225c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x41225c
            goto lab_0x41225c_2;
        }
        // 0x412212
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x41229b
    int64_t * v23 = (int64_t *)v22; // 0x4122a0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4122a3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4122a0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4122b7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x41220d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x41225c
            goto lab_0x41225c_2;
        }
        // 0x412212
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x412223
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x412240
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x412257
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x41225c
                goto lab_0x41225c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x41225c
                goto lab_0x41225c_2;
            }
            // 0x412212
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x412280
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4122a0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4122b7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x41225c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4122c0 - 0x4128dc
int64_t function_4122c0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4122df
    int64_t v2 = *v1; // 0x4122df
    char * str2 = (char *)v2; // 0x4122ec
    char c = *str2; // 0x4122ec
    int64_t v3 = v2; // 0x412318
    int64_t v4 = 0; // 0x4122c0
    int32_t v5; // 0x4122c0
    int64_t v6; // 0x4122c0
    int64_t v7; // 0x4122c0
    int64_t v8; // 0x4122c0
    int64_t v9; // 0x4122c0
    int64_t v10; // 0x4122c0
    int64_t v11; // 0x4122c0
    int64_t v12; // 0x4122c0
    int64_t v13; // 0x4122c0
    int64_t str3; // 0x4122c0
    int64_t v14; // 0x4122c0
    int64_t v15; // 0x4122c0
    int64_t v16; // 0x4122c0
    int64_t v17; // 0x4122c0
    int32_t v18; // 0x4122c0
    int32_t v19; // 0x4122c0
    int32_t v20; // 0x4122c0
    int32_t v21; // 0x4122c0
    int32_t v22; // 0x4122c0
    int32_t v23; // 0x4122c0
    int32_t v24; // 0x4122c0
    int32_t v25; // 0x4122c0
    int32_t v26; // 0x4122c0
    int32_t v27; // 0x4122c0
    int32_t v28; // 0x4122c0
    int32_t v29; // 0x4122c0
    int64_t nmemb; // 0x4122c0
    int64_t v30; // 0x4122c0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x41231c
            while (v31 != 0 == (v31 != 61)) {
                // 0x412318
                v3++;
                v31 = *(char *)v3;
            }
            // 0x412328
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x41232e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4122f8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x41235c
                int64_t v34; // 0x4122c0
                int64_t v35; // 0x4122c0
                if (strncmp(str, str2, n) == 0) {
                    // 0x412365
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4124e0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x412376
                int64_t v37 = *(int64_t *)v36; // 0x41237a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x412350
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x412365
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4124e0;
                        }
                    }
                    // 0x412376
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
                  lab_0x4123c6:
                    // 0x4123c6
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
                        goto lab_0x412420;
                    } else {
                        if (v11 == 0) {
                            // 0x412590
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x412420;
                        } else {
                            if (v39 == 0) {
                                // 0x412540
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4123ea;
                                } else {
                                    // 0x41254c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4123ea;
                                    } else {
                                        // 0x41255a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4123ea;
                                        } else {
                                            goto lab_0x412420;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4123ea;
                            }
                        }
                    }
                }
              lab_0x412431:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x412606
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4127b2
                            flockfile(g55);
                            int64_t v41 = *v1; // 0x4127d2
                            __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x41281f
                            int64_t v43 = (int64_t)g55;
                            int64_t v44 = v43; // 0x412839
                            int64_t v45; // 0x41283b
                            if (*(char *)v42 != 0) {
                                // 0x41283b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g55;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x412833
                            while (v17 + nmemb != v42) {
                                // 0x412835
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x41283b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g55;
                                }
                                // 0x412828
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x412860
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g55);
                            v40 = *v1;
                        } else {
                            // 0x412614
                            __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x41276f
                        free((int64_t *)v17);
                    }
                    // 0x412669
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x412680
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x41252e
                    return 63;
                }
                // 0x412450
                v5 = v39;
                if (v13 != 0) {
                    // 0x4124d4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4124e0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4124f0
                    uint32_t v50 = *v49; // 0x4124f0
                    int64_t v51 = v50; // 0x4124f0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4124fa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x412503
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x41272f
                                __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4126da
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x41252e
                            return 63;
                        }
                        // 0x412578
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x41288f
                                    __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x41278d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4127a0
                                // 0x41252e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x41269e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4126b2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x41251b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x41251e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x412522
                    int64_t result = v59; // 0x412528
                    if (v58 != 0) {
                        // 0x41252a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x41252e
                    return result;
                }
            } else {
                // 0x41232e
                v5 = v32;
            }
            // break -> 0x412455
            break;
        }
    }
    // 0x412455
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x41246d
        if (*(char *)(v60 + 1) != 45) {
            // 0x412477
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x41252e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4125b9
        __fprintf_chk(g55, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4124a6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4124b6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x412420:
    // 0x412420
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x412420
    int64_t v63 = *(int64_t *)v62; // 0x412424
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x412431
        goto lab_0x412431;
    }
    goto lab_0x4123c6;
  lab_0x4123ea:
    // 0x4123ea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4122c0
    int32_t v65; // 0x4122c0
    int32_t v66; // 0x4122c0
    if (v27 != 0) {
        goto lab_0x412420;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4125a0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x412420;
            } else {
                goto lab_0x412411;
            }
        } else {
            // 0x412405
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4126fc
                int64_t v67 = (int64_t)mem; // 0x4126fc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x412420;
                } else {
                    // 0x41270f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x412411;
                }
            } else {
                goto lab_0x412411;
            }
        }
    }
  lab_0x412411:
    // 0x412411
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x412420;
}
// Address range: 0x4128e0 - 0x412ea6
int64_t function_4128e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x412901
    if (v3 < 1) {
        // 0x412abe
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4128fd
    int32_t v5 = *(int32_t *)a7; // 0x412909
    uint64_t v6 = a1 & 0xffffffff; // 0x41290b
    int64_t v7 = v2; // 0x412910
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x412913
    *v8 = 0;
    int64_t v9; // 0x4128e0
    int64_t v10; // 0x4128e0
    int64_t v11; // 0x4128e0
    int64_t v12; // 0x4128e0
    int64_t str; // 0x4128e0
    int64_t v13; // 0x4128e0
    int64_t v14; // 0x4128e0
    int64_t v15; // 0x4128e0
    int64_t v16; // 0x4128e0
    int64_t v17; // 0x4128e0
    int32_t v18; // 0x4128e0
    char v19; // 0x4128e0
    if (v5 == 0) {
        // 0x412af8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x41292a;
    } else {
        // 0x412923
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x412970
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x412973
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x412a38;
            } else {
                int64_t v22 = v7 + 1; // 0x412986
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x412996
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x412a4c;
                } else {
                    goto lab_0x4129a8;
                }
            }
        } else {
            goto lab_0x41292a;
        }
    }
  lab_0x41292a:
    // 0x41292a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x412930
    *v24 = 0;
    int64_t v25; // 0x4128e0
    int64_t v26; // 0x4128e0
    int64_t v27; // 0x4128e0
    switch (*(char *)&v2) {
        case 45: {
            // 0x412a20
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x412a2d;
        }
        case 43: {
            // 0x412d30
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x412a2d;
        }
        default: {
            // 0x41294c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x412caf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x412dc8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x412a2d;
                } else {
                    // 0x412cbd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x41295a;
                }
            } else {
                goto lab_0x41295a;
            }
        }
    }
  lab_0x412a38:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x412a3f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4129a8;
    } else {
        goto lab_0x412a4c;
    }
  lab_0x41295a:
    // 0x41295a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x412a2d;
  lab_0x412a2d:
    // 0x412a2d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x412a38;
  lab_0x4129a8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4129a8
    int64_t v31 = v30; // 0x4129a8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4129aa
    if ((int64_t)*v32 > v31) {
        // 0x4129af
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4129b2
    if (*v33 > v30) {
        // 0x4129b7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4129ba
    int64_t v35 = v31; // 0x4129be
    int64_t v36 = v15; // 0x4129be
    int64_t v37; // 0x4128e0
    int64_t v38; // 0x4128e0
    int64_t v39; // 0x4128e0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x412b28
        int64_t v41 = v40; // 0x412b28
        v2 = v41;
        int64_t v42; // 0x4128e0
        if (*v33 == v40) {
            // 0x412d10
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x412d18
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x412b34
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x412b38
                function_4121e0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x412b48
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x412b51
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x412b5a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x412b71
            int64_t v47 = v45 & 0xffffffff; // 0x412b75
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x412b7e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x412b84
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x412b86;
                }
            }
            int64_t v48 = v47 + 1; // 0x412b60
            int64_t v49 = v48 & 0xffffffff; // 0x412b60
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x412b71
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x412b7e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x412b84
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x412b86;
                    }
                }
                // 0x412b60
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x412d28
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x412b86;
    } else {
        goto lab_0x4129c4;
    }
  lab_0x412a4c:
    // 0x412a4c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x412a4f
    int64_t v51 = v12; // 0x412a4f
    int64_t v52 = v14; // 0x412a4f
    if (*(char *)v10 == 0) {
        goto lab_0x4129a8;
    } else {
        goto lab_0x412a55;
    }
  lab_0x4129c4:;
    int32_t v53 = v35; // 0x4129c4
    int64_t v54; // 0x4128e0
    int64_t v55; // 0x4128e0
    int64_t v56; // 0x4128e0
    int64_t v57; // 0x4128e0
    int64_t v58; // 0x4128e0
    int64_t v59; // 0x4128e0
    char * v60; // 0x4128e0
    int64_t v61; // 0x4128e0
    int64_t v62; // 0x4129d9
    int64_t v63; // 0x4128e0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x412b13
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x412b16;
    } else {
        // 0x4129cc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4128e0
        int64_t v66 = v65 ? -1 : 1; // 0x4129e0
        int64_t v67 = (int64_t)"--"; // 0x4128e0
        int64_t v68 = v62; // 0x4128e0
        int64_t v69 = 3; // 0x4129e0
        unsigned char v70 = *(char *)v68; // 0x4129e0
        char v71 = *(char *)v67; // 0x4129e0
        char v72 = v71; // 0x4129e0
        bool v73 = false; // 0x4129e0
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
            // 0x412ad0
            if (*(char *)v62 == 45) {
                // 0x412b90
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x412b90
                if (c == 0) {
                    goto lab_0x412ada;
                } else {
                    // 0x412b9d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x412c20;
                    } else {
                        if (c == 45) {
                            // 0x412e03
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x412c75;
                        } else {
                            // 0x412bae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x412c20;
                            } else {
                                // 0x412bb3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x412bd4;
                                } else {
                                    // 0x412bba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x412c20;
                                    } else {
                                        goto lab_0x412bd4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x412ada;
            }
        } else {
            uint32_t v75 = *v33; // 0x4129f0
            v2 = v75;
            int32_t v76 = *v32; // 0x4129f3
            int64_t v77 = v35 + 1; // 0x4129f6
            int32_t v78 = v77; // 0x4129f9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x412d60
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x412a07
                    function_4121e0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x412a15
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x412b16;
        }
    }
  lab_0x412a55:;
    // 0x412a55
    int64_t v79; // bp-104, 0x4128e0
    int64_t v80 = &v79; // 0x4128ea
    int64_t v81 = v50 + 1; // 0x412a55
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x412a5c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x412a61
    *v83 = v81;
    char v84 = *(char *)v2; // 0x412a65
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x412a69
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x412a71
    *v86 = v84;
    char * str2 = (char *)v52; // 0x412a76
    int32_t c2 = v84; // 0x412a76
    char * found_char_pos = strchr(str2, c2); // 0x412a76
    int64_t v87 = *v82; // 0x412a7b
    v2 = v87;
    int64_t v88 = *v85; // 0x412a85
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x412a90
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x412d80
            __fprintf_chk(g55, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x412d4d
        *(int32_t *)(v1 + 8) = c2;
        // 0x412abe
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x412a76
    char v91 = *(char *)(v90 + 1); // 0x412aab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x412a65
        if (v91 != 58) {
            // 0x412abe
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x412cd4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x412dd8
                *v8 = 0;
            } else {
                // 0x412dbc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x412cfe
            *v83 = 0;
            // 0x412abe
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x412cde
        if (v93 != 0) {
            // 0x412d70
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x412cfe
            *v83 = 0;
            // 0x412abe
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x412cf1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x412cfe
            *v83 = 0;
            // 0x412abe
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x412e3a
            __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x412dea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x412df1
        // 0x412cfe
        *v83 = 0;
        // 0x412abe
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x412c49
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x412c4b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x412e70
                __fprintf_chk(g55, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x412e21
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x412e28
            // 0x412abe
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x412c56
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x412c5a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x412c75;
  lab_0x412b86:
    // 0x412b86
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4129c4;
  lab_0x412c75:;
    int64_t v99 = function_4122c0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x412c93
    // 0x412abe
    return v99 & 0xffffffff;
  lab_0x412b16:;
    int32_t v100 = v55; // 0x412b16
    if (v100 != (int32_t)v59) {
        // 0x412b1a
        *(int32_t *)a7 = v100;
    }
    // 0x412abe
    return 0xffffffff;
  lab_0x412ada:
    // 0x412ada
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x412ae1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x412abe
    return v99 & 0xffffffff;
  lab_0x412c20:
    // 0x412c20
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x412a55;
  lab_0x412bd4:
    // 0x412bd4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4122c0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g19); // 0x412bfa
    if ((int32_t)v101 != -1) {
        // 0x412abe
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x412c0f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x412c20;
}
// Address range: 0x412eb0 - 0x412f06
int64_t function_412eb0(int64_t a1) {
    // 0x412eb0
    *(int32_t *)&g115 = g49;
    *(int32_t *)&g116 = g48;
    int64_t v1; // 0x412eb0
    int64_t result = function_4128e0(v1, v1, v1, v1, v1, v1, &g115, a1 & 0xffffffff); // 0x412ed6
    g49 = *(int32_t *)&g115;
    g120 = (char *)g118;
    *(int32_t *)&g47 = g117;
    return result;
}
// Address range: 0x412f10 - 0x412f28
int64_t function_412f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412f10
    return function_412eb0(1);
}
// Address range: 0x412f30 - 0x412f43
int64_t function_412f30(int64_t a1, int64_t a2, char * a3, char (**a4)[22], int32_t * a5, int64_t a6) {
    // 0x412f30
    return function_412eb0(0);
}
// Address range: 0x412f50 - 0x412f65
int64_t function_412f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412f50
    return function_4128e0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x412f70 - 0x412f86
int64_t function_412f70(void) {
    // 0x412f70
    return function_412eb0(0);
}
// Address range: 0x412f90 - 0x412fa8
int64_t function_412f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412f90
    return function_4128e0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x412fb0 - 0x41302a
int64_t function_412fb0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x412fbb
    int64_t v2 = (int64_t)&g7; // 0x412fbb
    int64_t * pwc; // 0x412fb0
    int64_t v3; // 0x412fb0
    int64_t n; // 0x412fb0
    if (a2 == 0) {
        goto lab_0x413002;
    } else {
        // 0x412fbd
        if (a3 == 0) {
            // 0x412fe8
            return -2;
        }
        // 0x412fc9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x413002;
        } else {
            goto lab_0x412fd4;
        }
    }
  lab_0x413002:
    // 0x413002
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x412fb0
    pwc = &v4;
    goto lab_0x412fd4;
  lab_0x412fd4:;
    char * wstr = (char *)v3; // 0x412fda
    int64_t ps; // 0x412fb0
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x412fda
    int64_t result = v5; // 0x412fda
    if (v5 < 0xfffffffe) {
        // 0x412fe8
        return result;
    }
    int64_t result2 = result; // 0x413019
    if ((char)function_40bd10(0, v3) == 0) {
        // 0x41301b
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x412fe8
    return result2;
}
// Address range: 0x413030 - 0x413134
int64_t function_413030(int64_t result, int32_t a2, int64_t a3) {
    // 0x413030
    if (a3 == 0) {
        // 0x413069
        return 0;
    }
    int64_t v1 = result; // 0x41303c
    int64_t v2 = a3; // 0x41303c
    int64_t result2; // 0x413030
    if (result % 8 != 0) {
        char v3 = a2; // 0x41303e
        int64_t v4 = result; // 0x413041
        if ((char)result == v3) {
            // 0x413069
            return result;
        }
        int64_t v5 = a3; // 0x413041
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x413050
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x413070;
            }
            // 0x413056
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x413069
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x413069
        return result2;
    }
  lab_0x413070:;
    int64_t result3 = v1; // 0x41309d
    int64_t v6 = v2; // 0x41309d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x41307f
        int64_t v9 = 0x10000 * v8 | v8; // 0x41308c
        int64_t v10 = 0x100000000 * v9 | v9; // 0x413096
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x4130b6
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x4130e5
            int64_t v13 = v1 + 8; // 0x4130e9
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x4130d3
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x4130fc;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x4130f3
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x413069
                return 0;
            }
        }
    }
  lab_0x4130fc:;
    char v15 = a2; // 0x4130fc
    if (*(char *)result3 == v15) {
        // 0x413069
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x413110
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x413069
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x413069
    return result2;
}
// Address range: 0x413140 - 0x4131e2
int64_t function_413140(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    if (*(int64_t *)(v1 + 8) >= 0x3b9aca00) {
        // 0x4131d0
        *__errno_location() = 22;
        // 0x4131c7
        return 0xffffffff;
    }
    int64_t v2 = a2;
    struct timespec * rmtp = (struct timespec *)v2;
    int64_t v3 = v1; // 0x413169
    int64_t v4 = v1; // 0x413169
    int64_t rqtp; // bp-40, 0x413140
    if (a1 <= (int64_t *)0x1fa400) {
      lab_0x4131b8:
        // 0x4131b8
        rqtp = v4;
        // 0x4131c7
        return nanosleep((struct timespec *)&rqtp, rmtp);
    }
    rqtp = 0x1fa400;
    v3 -= 0x1fa400;
    int32_t v5 = nanosleep((struct timespec *)&rqtp, rmtp); // 0x413197
    while (v5 == 0) {
        // 0x413170
        v4 = v3;
        if (v3 < 0x1fa401) {
            goto lab_0x4131b8;
        }
        rqtp = 0x1fa400;
        v3 -= 0x1fa400;
        v5 = nanosleep((struct timespec *)&rqtp, rmtp);
    }
    int64_t result = v5; // 0x413197
    if (a2 == 0) {
        // 0x4131c7
        return result;
    }
    // 0x4131a5
    *(int64_t *)v2 = v3 + v2;
    return result;
}
// Address range: 0x4131f0 - 0x41322b
int64_t function_4131f0(int64_t a1) {
    // 0x4131f0
    __fprintf_chk(g55, 1, "%s\n", dcgettext(NULL, "memory exhausted", 5));
    exit(g41);
    // UNREACHABLE
}
// Address range: 0x413230 - 0x413245
int64_t function_413230(int64_t a1, int64_t a2) {
    // 0x413230
    return *(int64_t *)(a1 + 56);
}
// Address range: 0x413250 - 0x413265
int64_t function_413250(int64_t a1, int64_t a2) {
    // 0x413250
    return *(int64_t *)(a1 + 64);
}
// Address range: 0x413270 - 0x4132f3
int64_t function_413270(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 == 0 ? 15 : a3 - 1;
    *(int64_t *)(a1 + 48) = v1;
    int64_t v2 = a2 == 0 ? 4064 : a2; // 0x413292
    *(int64_t *)a1 = v2;
    int64_t v3 = function_413230(a1, v2); // 0x413299
    *(int64_t *)(a1 + 8) = v3;
    if (v3 == 0) {
        // 0x4132ed
        function_4131f0(a1);
        // UNREACHABLE
    }
    int64_t v4 = v1 + 16 + v3 & (a3 == 0 ? -16 : -a3); // 0x4132af
    *(int64_t *)(a1 + 16) = v4;
    int64_t v5 = v3 + a1; // 0x4132b9
    *(int64_t *)(a1 + 24) = v4;
    *(int64_t *)v3 = v5;
    *(int64_t *)(a1 + 32) = v5;
    *(int64_t *)(v3 + 8) = 0;
    char * v6 = (char *)(a1 + 80); // 0x4132d4
    *v6 = *v6 & -7;
    return 1;
}
// Address range: 0x413300 - 0x413311
int64_t _obstack_begin(int64_t a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 80); // 0x413300
    *v1 = *v1 & -2;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    return function_413270(a1, (int64_t)a2, (int64_t)a3);
}
// Address range: 0x413320 - 0x413335
int64_t _obstack_begin_1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a1 + 80); // 0x413320
    *v1 = *v1 | 1;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    *(int64_t *)(a1 + 72) = a6;
    return function_413270(a1, a2, a3);
}
// Address range: 0x413340 - 0x41343b
int64_t _obstack_newchunk(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x41334a
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x41334e
    uint64_t v3 = *v1 - *v2; // 0x41334e
    uint64_t v4 = v3 + a2; // 0x413356
    if (v4 < a2) {
        // 0x413435
        function_4131f0(a1);
        // UNREACHABLE
    }
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x41335f
    uint64_t v6 = v4 + *v5; // 0x41335f
    if (v6 < v4) {
        // 0x413435
        function_4131f0(a1);
        // UNREACHABLE
    }
    int64_t * v7 = (int64_t *)(a1 + 8); // 0x413352
    int64_t v8 = *v7; // 0x413352
    uint64_t v9 = v3 / 8 + 100 + v6; // 0x41336d
    uint64_t v10 = v6 <= a1 ? a1 : v6; // 0x413372
    int64_t v11 = v10 >= v9 ? v10 : v9; // 0x413379
    int64_t v12 = function_413230(a1, v11); // 0x413398
    if (v12 == 0) {
        // 0x413435
        function_4131f0(a1);
        // UNREACHABLE
    }
    int64_t v13 = v12 + v11; // 0x4133a9
    *v7 = v12;
    int64_t * v14 = (int64_t *)(v12 + 8); // 0x4133b5
    *v14 = v8;
    *(int64_t *)(a1 + 32) = v13;
    *(int64_t *)v12 = v13;
    int64_t v15 = *v5; // 0x4133c1
    int64_t v16 = v12 + 16 + v15 & -1 - v15; // 0x4133d3
    int64_t * dest_mem = memcpy((int64_t *)v16, (int64_t *)*v2, (int32_t)v3); // 0x4133d9
    char * v17 = (char *)(a1 + 80); // 0x4133de
    int64_t result = (int64_t)dest_mem; // 0x4133e4
    if ((*v17 & 2) == 0) {
        int64_t v18 = *v5; // 0x4133e6
        int64_t v19 = v8 + 16 + v18 & -1 - v18; // 0x4133f3
        result = v19;
        if (*v2 == v19) {
            // 0x413420
            *v14 = *(int64_t *)(v8 + 8);
            result = function_413250(a1, v8);
        }
    }
    // 0x4133fd
    *v2 = v16;
    *v1 = v16 + v3;
    *v17 = *v17 & -3;
    return result;
}
// Address range: 0x413440 - 0x413477
int64_t _obstack_allocated_p(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x413440
    if (v1 == 0) {
        // 0x413463
        return 0;
    }
    if (v1 < a2) {
        // 0x413455
        if (*(int64_t *)v1 >= a2) {
            // break -> 0x413463
            break;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x41345a
    int64_t result = 0; // 0x413461
    while (v2 != 0) {
        uint64_t v3 = v2;
        if (v3 < a2) {
            // 0x413455
            result = 1;
            if (*(int64_t *)v3 >= a2) {
                // break -> 0x413463
                break;
            }
        }
        // 0x41345a
        v2 = *(int64_t *)(v3 + 8);
        result = 0;
    }
    // 0x413463
    return result;
}
// Address range: 0x413480 - 0x4134e5
int64_t _obstack_free(int64_t a1, int32_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x413487
    int64_t v2 = *v1; // 0x413487
    int64_t result2; // 0x413480
    if (v2 != 0) {
        uint64_t v3 = (int64_t)a2;
        char * v4 = (char *)(a1 + 80);
        uint64_t result; // 0x41349d
        if (v2 < v3) {
            // 0x41349d
            result = *(int64_t *)v2;
            if (result >= v3) {
                // 0x4134d0
                *(int64_t *)(a1 + 24) = v3;
                *(int64_t *)(a1 + 16) = v3;
                *(int64_t *)(a1 + 32) = result;
                *v1 = v2;
                return result;
            }
        }
        int64_t v5 = *(int64_t *)(v2 + 8); // 0x4134a5
        int64_t v6 = function_413250(a1, v2); // 0x4134ac
        *v4 = *v4 | 2;
        result2 = v6;
        while (v5 != 0) {
            uint64_t v7 = v5;
            if (v7 < v3) {
                // 0x41349d
                result = *(int64_t *)v7;
                if (result >= v3) {
                    // 0x4134d0
                    *(int64_t *)(a1 + 24) = v3;
                    *(int64_t *)(a1 + 16) = v3;
                    *(int64_t *)(a1 + 32) = result;
                    *v1 = v7;
                    return result;
                }
            }
            // 0x4134a5
            v5 = *(int64_t *)(v7 + 8);
            v6 = function_413250(a1, v7);
            *v4 = *v4 | 2;
            result2 = v6;
        }
    }
    if (a2 == 0) {
        // 0x4134c6
        return result2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4134f0 - 0x413519
int64_t _obstack_memory_used(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4134f0
    int64_t result = 0; // 0x4134f9
    if (v1 == 0) {
        // 0x413512
        return 0;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x413506
    result += *(int64_t *)v2 - v2;
    while (v3 != 0) {
        // 0x413500
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
        result += *(int64_t *)v2 - v2;
    }
    // 0x413512
    return result;
}
// Address range: 0x413520 - 0x41357d
int64_t function_413520(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x413527
    int64_t v2; // 0x413520
    int64_t result = function_411f80(a1, v2); // 0x413538
    if ((v2 & 32) != 0) {
        // 0x413560
        if ((int32_t)result == 0) {
            // 0x413564
            *__errno_location() = 0;
        }
        // 0x41355a
        return 0xffffffff;
    }
    // 0x413541
    if ((int32_t)result == 0) {
        // 0x41355a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x413548
    if (v1 == 0) {
        // 0x41354a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x41355a
    return result2;
}
// Address range: 0x413580 - 0x41363c
int64_t function_413580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x413580
    int128_t v1; // 0x413580
    __asm_comisd(v1, g21);
    bool v2; // 0x413580
    if (v2 || v2) {
        // 0x41359c
        return -0x8000000000000000;
    }
    int128_t v3 = __asm_movsd_3(0x43e0000000000000); // 0x41358e
    __asm_comisd(v3, v1);
    int64_t v4 = __asm_cvttsd2si(v1); // 0x4135b0
    __asm_pxor(v3, v3);
    int128_t v5 = __asm_cvtsi2sd(v4); // 0x4135bb
    int128_t v6 = __asm_mulsd_4(__asm_subsd(v1, v5), 0x41cdcd6500000000); // 0x4135c4
    __asm_pxor(v5, v5);
    int64_t v7 = __asm_cvttsd2si(v6); // 0x4135d0
    __asm_comisd(v6, __asm_cvtsi2sd(v7));
    int64_t result = (v7 >> 63) + v4; // 0x413602
    if ((v7 >> 63 & -0x3b9aca00) + v7 < 0) {
        // 0x413630
        return result - 1;
    }
    // 0x41359c
    return result;
}
// Address range: 0x413640 - 0x41368e
int64_t function_413640(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x41364c
    if (fd >= 3) {
        // 0x413651
        return a1 & 0xffffffff;
    }
    // 0x413660
    int64_t v1; // 0x413640
    int64_t v2 = function_413690(a1, v1); // 0x413660
    int32_t * v3 = __errno_location(); // 0x413668
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x413690 - 0x4136aa
int64_t function_413690(int64_t a1, int64_t a2) {
    uint32_t v1 = (int32_t)a2 & 0x80000; // 0x413690
    int64_t v2; // 0x413690
    return function_412000((int32_t)a1, v1 != 0 ? 1030 : (int64_t)v1, 3, v2);
}
// Address range: 0x4136b0 - 0x413743
int64_t function_4136b0(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x4136b7
    int64_t result = (int64_t)file; // 0x4136b7
    if (file == NULL) {
        // 0x4136d1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x4136c7
    if (v1 >= 3) {
        // 0x4136d1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_413ea0((int64_t)v1, v2); // 0x4136ea
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x413728
        function_411f80(result, v2);
        // 0x4136d1
        return 0;
    }
    // 0x4136ee
    if ((int32_t)function_411f80(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x413700
        if (v4 != NULL) {
            // 0x4136d1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x41370d
    close(fd);
    // 0x4136d1
    return 0;
}
// Address range: 0x413750 - 0x413cb2
int64_t function_413750(void) {
    char * v1 = nl_langinfo(14); // 0x413766
    char * v2 = g119; // 0x41376b
    char * v3; // 0x413750
    int64_t v4; // 0x413750
    int64_t v5; // 0x413750
    int64_t v6; // 0x413750
    int64_t v7; // 0x413750
    int32_t size; // 0x413750
    int32_t size2; // 0x413750
    int32_t len; // 0x413822
    int64_t v8; // 0x413822
    char * env_val; // 0x41380d
    if (v2 == NULL) {
        // 0x413808
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x413875;
        } else {
            // 0x41381a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x413875;
            } else {
                // 0x41381f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x41380d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x413ca5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x413875;
                    } else {
                        // 0x413c19
                        size2 = len + 14;
                        goto lab_0x41383b;
                    }
                } else {
                    goto lab_0x41383b;
                }
            }
        }
    } else {
        // 0x413750
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x41378a;
    }
  lab_0x413abc:;
    // 0x413abc
    struct _IO_FILE * stream; // 0x4138fb
    int32_t v10 = __uflow(stream); // 0x413abf
    int64_t v11; // 0x413750
    int64_t v12 = v11; // 0x413ac9
    int64_t v13; // 0x413750
    int64_t v14 = v13; // 0x413ac9
    int32_t v15 = v10; // 0x413ac9
    int64_t v16; // 0x413750
    int64_t v17 = v16; // 0x413ac9
    int64_t v18 = v11; // 0x413ac9
    int64_t v19 = v13; // 0x413ac9
    int64_t v20 = v16; // 0x413ac9
    if (v10 == -1) {
        // break -> 0x413acf
        goto lab_0x413acf;
    }
    goto lab_0x413949;
  lab_0x41393e:;
    // 0x41393e
    int64_t v90; // 0x413750
    int64_t * v32; // 0x413930
    *v32 = v90 + 1;
    int64_t v89; // 0x413750
    v12 = v89;
    int64_t v91; // 0x413750
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x413750
    v17 = v92;
    goto lab_0x413949;
  lab_0x413949:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x413750
    int32_t v25; // bp-120, 0x413750
    int32_t v26; // bp-184, 0x413750
    int64_t v27; // 0x4138fb
    int64_t v28; // 0x413918
    int64_t v29; // 0x41391d
    int64_t * v30; // 0x413934
    switch (c) {
        case 32: {
            goto lab_0x413930;
        }
        case 10: {
            goto lab_0x413930;
        }
        case 9: {
            goto lab_0x413930;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x413b21
            int32_t v33; // 0x413750
            char v34; // 0x413750
            int32_t v35; // 0x413b2e
            if (v31 < *v30) {
                // 0x413b00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x413b2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x413b21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x413b00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x413b2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x413b10
                v36 = v33;
            }
            // 0x413bff
            if (v36 == -1) {
                // break -> 0x413acf
                break;
            }
            goto lab_0x413930;
        }
        default: {
            // 0x41395f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x413acf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x413988
            int64_t v39 = v37 + 4; // 0x41398a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x413996
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x413998
            while (v41 == 0) {
                // 0x413988
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4139b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4139c2
            int64_t v45 = v43 + 4; // 0x4139c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4139d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4139d2
            while (v47 == 0) {
                // 0x4139c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4139bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4139e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4139f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4139fc
            int64_t v52 = v51 + v48; // 0x413a05
            int64_t * mem; // 0x413750
            int64_t v53; // 0x413750
            int64_t v54; // 0x413750
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x413b3b
                int64_t v56 = v55 + 3; // 0x413b47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x413a21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x413a30
            if (mem == NULL) {
                // 0x413c5c
                free((int64_t *)v21);
                function_411f80(v27, v53);
                v24 = (int64_t)&g7;
                goto lab_0x4138d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x413a48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x413a52
            uint32_t v62 = (int32_t)v59; // 0x413a55
            int64_t v63; // 0x413750
            if (v62 >= 8) {
                // 0x413b64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x413b7e
                int64_t v66 = v61 - v65; // 0x413b82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x413b8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x413b9e
                    int64_t v70 = v69 & 0xffffffff; // 0x413b9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x413b9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x413c2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x413a67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x413a6b
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
            int64_t v73 = v51 + 1; // 0x413a7b
            int64_t v74 = v60 - 1; // 0x413a7f
            uint32_t v75 = (int32_t)v73; // 0x413a84
            int64_t v76; // 0x413750
            if (v75 >= 8) {
                // 0x413bb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x413bbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x413bcc
                int64_t v80 = v74 - v79; // 0x413bd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x413bdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x413beb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x413be9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x413c46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x413c4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x413a96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x413a9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x413c93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x413aae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x41393e;
            } else {
                goto lab_0x413abc;
            }
        }
    }
  lab_0x413930:;
    int64_t v93 = v23; // 0x413750
    int64_t v94 = v22; // 0x413750
    int64_t v95 = v21; // 0x413750
    goto lab_0x413930_2;
  lab_0x413875:;
    int64_t * mem3 = malloc(size); // 0x413875
    int64_t v97 = (int64_t)&g7; // 0x413880
    int64_t v98; // 0x413750
    int64_t path; // 0x413750
    if (mem3 == NULL) {
        goto lab_0x413852;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x413875
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x413896;
    }
  lab_0x41378a:;
    int64_t str = v1 == NULL ? (int64_t)&g7 : (int64_t)v1; // 0x41377d
    char v100 = *v3; // 0x41378a
    int64_t v101; // 0x413750
    if (v100 == 0) {
        // 0x4137e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x413750
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x413750
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4137d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4137d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4137a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4137ad
        char v107 = *(char *)v106; // 0x4137b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4137e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4137bb
    v104 = v103 + 1;
  lab_0x4137d7:
    // 0x4137e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x413852:;
    char * v108 = (char *)v97;
    g119 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x41378a;
  lab_0x413896:;
    int64_t v109 = v98 + path; // 0x413896
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4138c2
    v24 = (int64_t)&g7;
    if (fd >= 0) {
        // 0x4138f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x413c22
            close(fd);
            v24 = (int64_t)&g7;
        } else {
            // 0x413915
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x413930_2:;
                uint64_t v96 = *v32; // 0x413930
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x413abc;
                } else {
                    goto lab_0x41393e;
                }
            }
          lab_0x413acf:
            // 0x413acf
            function_411f80(v27, v19);
            v24 = (int64_t)&g7;
            if (v18 != 0) {
                // 0x413aee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4138d4;
  lab_0x41383b:;
    int64_t * mem4 = malloc(size2); // 0x41383b
    v97 = (int64_t)&g7;
    if (mem4 != NULL) {
        // 0x4138e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x413896;
    } else {
        goto lab_0x413852;
    }
  lab_0x4138d4:
    // 0x4138d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x413852;
}
// Address range: 0x413cc0 - 0x413d74
int64_t function_413cc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x413cda
    int64_t v2 = a3; // 0x413ce2
    int64_t v3 = a1; // 0x413ce2
    int64_t v4 = a4; // 0x413ce2
    int64_t v5 = a2; // 0x413ce2
    *v1 = 0;
    char * str = (char *)v3; // 0x413d20
    char * str2 = (char *)v2; // 0x413d20
    int32_t strcoll_rc = strcoll(str, str2); // 0x413d20
    while (strcoll_rc == 0) {
        int64_t v6 = (int64_t)strlen(str) + 1; // 0x413cf3
        int64_t v7 = (int64_t)strlen(str2) + 1; // 0x413cff
        v4 -= v7;
        v5 -= v6;
        if (v5 == 0) {
            // 0x413d40
            return v4 != 0 ? 0xffffffff : 0;
        }
        // 0x413d0e
        v2 += v7;
        v3 += v6;
        if (v4 == 0) {
            // 0x413d60
            return 1;
        }
        *v1 = 0;
        str = (char *)v3;
        str2 = (char *)v2;
        strcoll_rc = strcoll(str, str2);
    }
    // 0x413d29
    return strcoll_rc;
}
// Address range: 0x413d80 - 0x413e21
int64_t function_413d80(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n == a4) {
        // 0x413d9f
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x413e10
            *__errno_location() = 0;
            // 0x413dfc
            return 0;
        }
    }
    char * v1 = (char *)(n + str); // 0x413dc1
    char * v2 = (char *)(a4 + str2); // 0x413dc5
    *v1 = 0;
    *v2 = 0;
    int64_t v3 = function_413cc0(str, n + 1, str2, a4 + 1); // 0x413de3
    // 0x413dfc
    return v3 & 0xffffffff;
}
// Address range: 0x413e30 - 0x413e93
int64_t function_413e30(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n != a4 || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x413e78
        return function_413cc0(str, n, str2, a4);
    }
    // 0x413e5a
    *__errno_location() = 0;
    return 0;
}
// Address range: 0x413ea0 - 0x413eae
int64_t function_413ea0(int64_t a1, int64_t a2) {
    // 0x413ea0
    int64_t v1; // 0x413ea0
    return function_412000((int32_t)a1, 0, 3, v1);
}
// Address range: 0x413eb0 - 0x413f0d
int64_t function_413eb0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x413eb0
    return function_402760();
}
// Address range: 0x413f10 - 0x413f11
int64_t function_413f10(void) {
    // 0x413f10
    int64_t result; // 0x413f10
    return result;
}
// Address range: 0x413f20 - 0x413f38
int64_t function_413f20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x413f20
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g26);
}
// Address range: 0x413f38 - 0x413f58
int64_t function_413f38(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g22; // 0x413f42
    while (*(int64_t *)v1 != -1) {
        // 0x413f43
        v1 -= 8;
    }
    // 0x413f54
    return result;
}
