// Address range: 0x401d10 - 0x401d15
int64_t function_401d10(void) {
    // 0x401d10
    abort();
    // UNREACHABLE
}
// Address range: 0x401d15 - 0x401d1a
int64_t function_401d15(void) {
    // 0x401d15
    abort();
    // UNREACHABLE
}
// Address range: 0x401d1a - 0x401d1f
int64_t function_401d1a(void) {
    // 0x401d1a
    abort();
    // UNREACHABLE
}
// Address range: 0x401d1f - 0x401d24
int64_t function_401d1f(void) {
    // 0x401d1f
    abort();
    // UNREACHABLE
}
// Address range: 0x401d24 - 0x401d29
int64_t function_401d24(void) {
    // 0x401d24
    abort();
    // UNREACHABLE
}
// Address range: 0x401d29 - 0x401d2e
int64_t function_401d29(void) {
    // 0x401d29
    abort();
    // UNREACHABLE
}
// Address range: 0x401d2e - 0x401d33
int64_t function_401d2e(void) {
    // 0x401d2e
    abort();
    // UNREACHABLE
}
// Address range: 0x401d40 - 0x4025d0
int64_t function_401d40(int64_t a1, int64_t a2) {
    int64_t v1 = 0; // bp-64, 0x401d59
    function_407110(a2);
    setlocale(LC_ALL, (char *)&g2);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401d40
    function_40cd90(0x4053d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    int32_t v3 = a1; // 0x401d9c
    int64_t v4 = 0; // 0x401d9c
    if (v3 >= 2) {
        // 0x401d9e
        v4 = function_409300(0x100000000 * a1 - 0x100000000 >> 29);
    }
    uint64_t v5 = a1 & 0xffffffff; // 0x401d4f
    int32_t v6; // bp-68, 0x401d40
    int64_t v7 = &v6; // 0x401dd5
    v6 = -1;
    int64_t v8 = function_40b9d0(v5, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &g4, (int64_t *)&v6, v2); // 0x401dec
    int32_t v9 = v8; // 0x401df3
    int32_t v10 = v9; // 0x401df6
    int64_t v11 = v8; // 0x401df6
    int64_t v12 = 0; // 0x401df6
    int64_t v13 = 0; // 0x401df6
    int64_t v14 = 0; // 0x401df6
    int32_t v15 = 0; // 0x401df6
    int32_t v16 = 0; // 0x401df6
    char v17 = 0; // 0x401df6
    int64_t v18; // 0x401d40
    int64_t v19; // 0x401d40
    int64_t v20; // 0x401d40
    int64_t v21; // 0x401d40
    int64_t v22; // 0x401d40
    int64_t v23; // 0x401d40
    int64_t v24; // 0x401d40
    int64_t v25; // 0x401d40
    int64_t v26; // 0x401d40
    char v27; // 0x401d40
    char v28; // 0x401d40
    int32_t v29; // 0x401d40
    int32_t v30; // 0x401d40
    int32_t v31; // 0x401d40
    int32_t v32; // 0x401d40
    if (v9 != -1) {
        while (true) {
          lab_0x401dfc:
            // 0x401dfc
            v27 = v17;
            v29 = v16;
            v31 = v15;
            v23 = v22;
            v18 = v13;
            v20 = v12;
            int64_t v33 = v11;
            if (v10 < 58) {
                int64_t v34 = v14 + 1; // 0x402220
                int64_t v35 = v34; // 0x402229
                int64_t v36 = v18; // 0x402229
                if (v34 >= v1) {
                    // 0x402240
                    v36 = function_409460(v18, &v1);
                    v35 = 0x100000000 * v34 >> 32;
                }
                // 0x40222b
                *(char *)(v36 + v14) = (char)v33;
                *(char *)(v36 + v35) = 0;
                v28 = v27;
                v30 = v29;
                v32 = v31;
                v26 = v35;
                v24 = v23;
                v19 = v36;
                v21 = v20;
                goto lab_0x401dd0;
            } else {
                int64_t v37 = v33 + 131; // 0x401e08
                g142 = v37 & 0xffffffff;
                switch ((int32_t)v37) {
                    case 0: {
                        // 0x40211b
                        function_4091c0((int64_t)g53, "pr", "GNU coreutils", (int64_t)g42, "Pete TerMaat", "Roland Huebner");
                        exit(0);
                        // UNREACHABLE
                    }
                    case 1: {
                        // 0x402523
                        function_404de0(0);
                        // UNREACHABLE
                    }
                    case 132: {
                        int64_t v38 = (int64_t)g138; // 0x4020fc
                        v25 = v38;
                        if (g87 == 0) {
                            // 0x402262
                            v25 = v38;
                            if (*g138 != 43) {
                                goto lab_0x402109;
                            } else {
                                // 0x40226b
                                v28 = v27;
                                v30 = v29;
                                v32 = v31;
                                v26 = 0;
                                v24 = v23;
                                v19 = v18;
                                v21 = v20;
                                if ((char)function_402820(0xfffffffe, 43, v38 + 1) != 0) {
                                    goto lab_0x401dd0;
                                } else {
                                    // 0x402286
                                    v25 = (int64_t)g138;
                                    goto lab_0x402109;
                                }
                            }
                        } else {
                            goto lab_0x402109;
                        }
                    }
                    case 199: {
                        // 0x4020df
                        *(int64_t *)&g66 = (int64_t)g138;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 201: {
                        goto lab_0x4020d1;
                    }
                    case 205: {
                        // 0x4020c3
                        g101 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 209: {
                        // 0x40207b
                        g26 = 0;
                        char * v39 = dcgettext(NULL, "'-N NUMBER' invalid starting line number", 5); // 0x402090
                        int64_t v40 = function_409680((int64_t)g138, -0x80000000, 0x7fffffff, (int64_t *)&g2, (int64_t)v39, 0); // 0x4020b3
                        g25 = v40;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = 0;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 214: {
                        // 0x40203e
                        g73 = 1;
                        *(int64_t *)&g21 = (int64_t)&g2;
                        g72 = 0;
                        v28 = 0;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        if (g138 != NULL) {
                            // 0x40206f
                            function_402920((int64_t)g138);
                            v28 = 0;
                            v30 = v29;
                            v32 = v31;
                            v26 = 0;
                            v24 = v23;
                            v19 = v18;
                            v21 = v20;
                        }
                        goto lab_0x401dd0;
                    }
                    case 215: {
                        // 0x4021be
                        g41 = 0;
                        g110 = 0;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 218: {
                        // 0x402173
                        *(char *)&g102 = 1;
                        char * v41 = dcgettext(NULL, "'-W PAGE_WIDTH' invalid number of characters", 5); // 0x402188
                        int64_t v42 = function_409680((int64_t)g138, 1, 0x7fffffff, (int64_t *)&g2, (int64_t)v41, 0); // 0x4021a9
                        g38 = v42;
                        v28 = v27;
                        v30 = 0;
                        v32 = v31;
                        v26 = 0;
                        v24 = 0;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 228: {
                        // 0x40215e
                        g105 = 1;
                        *(char *)&g40 = 0;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 229: {
                        // 0x402150
                        g104 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 230: {
                        // 0x4021e1
                        g78 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 231: {
                        // 0x4021d3
                        g77 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 232: {
                        // 0x4021ef
                        if (g138 != NULL) {
                            // 0x4021fb
                            function_4052e0((int64_t)g138, 101, &g37, &g35);
                        }
                        // 0x40220f
                        g98 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 233: {
                        goto lab_0x4020d1;
                    }
                    case 235: {
                        // 0x402029
                        *(int64_t *)&g67 = (int64_t)g138;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 236: {
                        // 0x401ffb
                        if (g138 != NULL) {
                            // 0x402007
                            function_4052e0((int64_t)g138, 105, (int64_t *)&g34, &g33);
                        }
                        // 0x40201b
                        g97 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 239: {
                        char * v43 = dcgettext(NULL, "'-l PAGE_LENGTH' invalid number of lines", 5); // 0x401fca
                        int64_t v44 = function_409680((int64_t)g138, 1, 0x7fffffff, (int64_t *)&g2, (int64_t)v43, 0); // 0x401feb
                        g39 = v44;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = 0;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 240: {
                        // 0x401fa7
                        *(char *)&g115 = 1;
                        *(char *)&g40 = 0;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 241: {
                        // 0x401f75
                        *(char *)&g82 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        if (g138 != NULL) {
                            // 0x401f8c
                            function_4052e0((int64_t)g138, 110, &g29, &g23);
                            v28 = v27;
                            v30 = v29;
                            v32 = v31;
                            v26 = 0;
                            v24 = v23;
                            v19 = v18;
                            v21 = v20;
                        }
                        goto lab_0x401dd0;
                    }
                    case 242: {
                        char * v45 = dcgettext(NULL, "'-o MARGIN' invalid line offset", 5); // 0x401f47
                        int64_t v46 = function_409680((int64_t)g138, (int64_t)((int32_t)"'-o MARGIN' invalid line offset" ^ (int32_t)"'-o MARGIN' invalid line offset"), 0x7fffffff, (int64_t *)&g2, (int64_t)v45, 0); // 0x401f65
                        g94 = v46;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = 0;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 245: {
                        // 0x401f2b
                        *(char *)&g74 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 246: {
                        // 0x401eee
                        v28 = g73;
                        v30 = v29;
                        v32 = g73;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        if (g73 == 0) {
                            // 0x401f05
                            v28 = 1;
                            v30 = v29;
                            v32 = 1;
                            v26 = 0;
                            v24 = v23;
                            v19 = v18;
                            v21 = v20;
                            if (g138 != NULL) {
                                // 0x401f15
                                char * v47; // 0x401f05
                                function_402920((int64_t)v47);
                                v28 = 1;
                                v30 = v29;
                                v32 = 1;
                                v26 = 0;
                                v24 = v23;
                                v19 = v18;
                                v21 = v20;
                            }
                        }
                        goto lab_0x401dd0;
                    }
                    case 247: {
                        // 0x401ed9
                        g41 = 0;
                        g110 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 249: {
                        // 0x401ecb
                        g79 = 1;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 250: {
                        char * v48 = dcgettext(NULL, "'-w PAGE_WIDTH' invalid number of characters", 5); // 0x401e7b
                        int64_t v49 = function_409680((int64_t)g138, 1, 0x7fffffff, (int64_t *)&g2, (int64_t)v48, 0); // 0x401e9c
                        char v50 = *(char *)&g102; // 0x401ea1
                        int32_t v51 = v50; // 0x401ea8
                        v28 = v27;
                        v30 = v51;
                        v32 = v51;
                        v26 = 0;
                        v24 = 0;
                        v19 = v18;
                        v21 = v20;
                        if (v50 == 0) {
                            // 0x401eb4
                            g38 = v49;
                            v28 = v27;
                            v30 = 1;
                            v32 = 1;
                            v26 = 0;
                            v24 = 0;
                            v19 = v18;
                            v21 = v20;
                        }
                        goto lab_0x401dd0;
                    }
                    case 259: {
                        // 0x401e48
                        function_402950((int64_t)g138, a2, 259, (int64_t)&g4, v7, v23);
                        free((int64_t *)v18);
                        v1 = 0;
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = 0;
                        v21 = v20;
                        goto lab_0x401dd0;
                    }
                    case 260: {
                        // 0x401e21
                        char * format; // 0x402574
                        if (g138 == NULL) {
                            // 0x402568
                            format = dcgettext(NULL, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", 5);
                            error(1, (int32_t)"'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument" ^ (int32_t)"'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", format);
                            goto lab_0x40258a;
                        }
                        // 0x401e31
                        v28 = v27;
                        v30 = v29;
                        v32 = v31;
                        v26 = 0;
                        v24 = v23;
                        v19 = v18;
                        v21 = v20;
                        if ((char)function_402820((int64_t)v6, 0, (int64_t)g138) == 0) {
                            // 0x402534
                            function_408d30((int64_t)g138);
                            error(1, (int32_t)"invalid page range %s" ^ (int32_t)"invalid page range %s", dcgettext(NULL, "invalid page range %s", 5));
                            // 0x402568
                            format = dcgettext(NULL, "'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", 5);
                            error(1, (int32_t)"'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument" ^ (int32_t)"'--pages=FIRST_PAGE[:LAST_PAGE]' missing argument", format);
                            goto lab_0x40258a;
                        }
                        goto lab_0x401dd0;
                    }
                    default: {
                        goto lab_0x40252a;
                    }
                }
            }
        }
      lab_0x40252a:
        // 0x40252a
        function_404de0(1);
        // UNREACHABLE
    }
    int64_t v52 = v8 & 0xffffffff; // 0x401d40
    int64_t v53 = 0; // 0x401d40
    int32_t v54 = 0; // 0x401d40
    int32_t v55 = 0; // 0x401d40
    char v56 = 0; // 0x401d40
    goto lab_0x4022a7;
  lab_0x401dd0:
    // 0x401dd0
    v12 = v21;
    v13 = v19;
    int64_t v82 = v24;
    v15 = v32;
    v16 = v30;
    v17 = v28;
    v6 = -1;
    v11 = function_40b9d0(v5, a2, "-0123456789D:FJN:S::TW:abcde::fh:i::l:mn::o:rs::tvw:", &g4, (int64_t *)&v6, v82);
    v10 = v11;
    v22 = v82;
    v14 = v26;
    if (v10 == -1) {
        int64_t v83 = v11 & 0xffffffff;
        v52 = v83;
        v53 = v12;
        v54 = v15;
        v55 = v16;
        v56 = v17;
        if (v13 == 0) {
            goto lab_0x4022a7;
        } else {
            // 0x402297
            function_402950(v13, a2, -1, (int64_t)&g4, v7, v82);
            free((int64_t *)v13);
            v52 = v83;
            v53 = v12;
            v54 = v15;
            v55 = v16;
            v56 = v17;
            goto lab_0x4022a7;
        }
    }
    goto lab_0x401dfc;
  lab_0x4020d1:
    // 0x4020d1
    g107 = 1;
    v28 = v27;
    v30 = v29;
    v32 = v31;
    v26 = 0;
    v24 = v23;
    v19 = v18;
    v21 = v20;
    goto lab_0x401dd0;
  lab_0x402109:
    // 0x402109
    *(int64_t *)(8 * v20 + v4) = v25;
    v28 = v27;
    v30 = v29;
    v32 = v31;
    v26 = 0;
    v24 = v23;
    v19 = v18;
    v21 = v20 + 1 & 0xffffffff;
    goto lab_0x401dd0;
  lab_0x4022a7:;
    int64_t v57 = v52; // 0x4022af
    int64_t v58 = a2; // 0x4022af
    int64_t v59 = v53; // 0x4022af
    int64_t v60 = v4; // 0x4022af
    int64_t v61 = v52; // 0x4022af
    int64_t v62 = a2; // 0x4022af
    int64_t v63 = v53; // 0x4022af
    int64_t v64 = v4; // 0x4022af
    if (g66 == NULL) {
        goto lab_0x4024e2;
    } else {
        goto lab_0x4022b5;
    }
  lab_0x4024e2:;
    int64_t v65 = v62;
    int64_t v66; // 0x401d40
    if (getenv("POSIXLY_CORRECT") == NULL) {
        // 0x402506
        v66 = (int64_t)"%Y-%m-%d %H:%M";
        goto lab_0x40250b;
    } else {
        // 0x4024f1
        v66 = (int64_t)"%b %e %H:%M %Y";
        if ((char)function_405590(2, v65) != 0) {
            // 0x402506
            v66 = (int64_t)"%Y-%m-%d %H:%M";
            goto lab_0x40250b;
        } else {
            goto lab_0x40250b;
        }
    }
  lab_0x4022b5:;
    int64_t v67 = v60;
    int64_t v68 = v59;
    g65 = function_40bba0((int64_t)getenv("TZ"), v58, v57);
    if (g87 == 0) {
        // 0x4022d8
        g87 = 1;
    }
    char v69 = *(char *)&g115; // 0x4022e3
    if (v69 != 0) {
        // 0x4022ef
        char * format2; // 0x4025b8
        if (g111 != 0) {
          lab_0x40258a:
            // 0x40258a
            error(1, (int32_t)"cannot specify number of columns when printing in parallel" ^ (int32_t)"cannot specify number of columns when printing in parallel", dcgettext(NULL, "cannot specify number of columns when printing in parallel", 5));
            // 0x4025ac
            format2 = dcgettext(NULL, "cannot specify both printing across and printing in parallel", 5);
            error(1, (int32_t)"cannot specify both printing across and printing in parallel" ^ (int32_t)"cannot specify both printing across and printing in parallel", format2);
            return &g141;
        }
        // 0x4022fc
        if (g105 != 0) {
            // 0x4025ac
            format2 = dcgettext(NULL, "cannot specify both printing across and printing in parallel", 5);
            error(1, (int32_t)"cannot specify both printing across and printing in parallel" ^ (int32_t)"cannot specify both printing across and printing in parallel", format2);
            return &g141;
        }
    }
    if ((char)v54 == 0) {
        goto lab_0x40233f;
    } else {
        if ((char)v55 == 0) {
            // 0x402432
            if (v56 == 0 || g73 == 1) {
                goto lab_0x40233f;
            } else {
                // 0x40244a
                if ((g111 || v69) == 0) {
                    goto lab_0x40233f;
                } else {
                    // 0x40245c
                    if (*(char *)&g102 != 0) {
                        // 0x402479
                        g73 = 1;
                        goto lab_0x40233f;
                    } else {
                        // 0x402465
                        g101 = 1;
                        if (g72 < 1) {
                            goto lab_0x40233f;
                        } else {
                            // 0x402479
                            g73 = 1;
                            goto lab_0x40233f;
                        }
                    }
                }
            }
        } else {
            // 0x40231b
            if ((g111 || v69) == 0) {
                // 0x402517
                g101 = 1;
                goto lab_0x40233f;
            } else {
                // 0x40232d
                *(char *)&g102 = 1;
                if (v56 != 0) {
                    // 0x402479
                    g73 = 1;
                    goto lab_0x40233f;
                } else {
                    goto lab_0x40233f;
                }
            }
        }
    }
  lab_0x40233f:;
    uint32_t v70 = *(int32_t *)0x61433c; // 0x40233f
    uint64_t v71 = (int64_t)v70; // 0x40233f
    int64_t v72 = v68; // 0x402347
    if (v5 > v71) {
        int64_t v73 = 0x100000000 * v71 / 0x20000000 + a2; // 0x402357
        int64_t v74 = v68 + 1; // 0x402366
        int64_t v75 = v74 & 0xffffffff; // 0x402366
        *(int64_t *)((8 * v68 & 0x7fffffff8) + v67) = *(int64_t *)v73;
        v73 += 8;
        int64_t v76 = v75; // 0x402375
        while ((int32_t)(v68 + a1) - v70 != (int32_t)v74) {
            // 0x402360
            v74 = v76 + 1;
            v75 = v74 & 0xffffffff;
            *(int64_t *)((8 * v76 & 0x7fffffff8) + v67) = *(int64_t *)v73;
            v73 += 8;
            v76 = v75;
        }
        // 0x402377
        g51 = v3;
        v72 = v75;
    }
    int64_t v77 = v72;
    int64_t v78; // 0x401d40
    int64_t v79; // 0x401d40
    if ((int32_t)v77 == 0) {
        // 0x402495
        function_403e40(0, 0);
        v79 = 0;
        v78 = v67;
    } else {
        if (v69 != 0) {
            // 0x402485
            function_403e40(v77 & 0xffffffff, v67);
            v79 = v67;
            v78 = v67;
        } else {
            int64_t v80 = v67 + 8; // 0x4023a8
            function_403e40(1, v67);
            v79 = v67;
            v78 = v80;
            while (v67 + 8 + (8 * v77 + 0x7fffffff8 & 0x7fffffff8) != v80) {
                int64_t v81 = v80;
                v80 = v81 + 8;
                function_403e40(1, v81);
                v79 = v81;
                v78 = v80;
            }
        }
    }
    // 0x4023b6
    free((int64_t *)g80);
    free((int64_t *)g61);
    free((int64_t *)g122);
    free((int64_t *)g117);
    free((int64_t *)g116);
    free((int64_t *)g121);
    if (g106 == 0 || (int32_t)function_40aa20((int64_t)g54, v79) != -1) {
        // 0x40240b
        return g88;
    }
    char * format3 = dcgettext(NULL, "standard input", 5); // 0x4024c4
    uint32_t err_num = *__errno_location(); // 0x4024d9
    error(1, err_num, format3);
    v61 = (int64_t)format3;
    v62 = err_num;
    v63 = v77;
    v64 = v78;
    goto lab_0x4024e2;
  lab_0x40250b:
    // 0x40250b
    g66 = (char *)v66;
    v57 = v61;
    v58 = v65;
    v59 = v63;
    v60 = v64;
    goto lab_0x4022b5;
}
// Address range: 0x4025d0 - 0x4025fb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4025d0
    int64_t v1; // 0x4025d0
    __libc_start_main(0x401d40, (int32_t)a4, (char **)&v1, (void (*)())0x40cd20, (void (*)())0x40cd80, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4025fb - 0x40261a
int64_t function_4025fb(void) {
    // 0x4025fb
    return &g52;
}
// Address range: 0x40261a - 0x402651
int64_t function_40261a(void) {
    // 0x40261a
    return 0;
}
// Address range: 0x402651 - 0x4026a8
int64_t function_402651(void) {
    // 0x402651
    if (g57 != 0) {
        // 0x4026a7
        int64_t result; // 0x402651
        return result;
    }
    int64_t v1 = g58; // 0x402684
    int64_t result2; // 0x402696
    if (g58 >= ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x402696
        result2 = function_4025fb();
        g57 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g18 - (int64_t)&g17 >> 3) - 1) {
        // 0x402686
        v1++;
    }
    // 0x40267a
    g58 = v1;
    // 0x402696
    result2 = function_4025fb();
    g57 = 1;
    return result2;
}
// Address range: 0x4026a8 - 0x4026ad
int64_t function_4026a8(void) {
    // 0x4026a8
    return function_40261a();
}
// Address range: 0x4026b0 - 0x402708
int64_t function_4026b0(void) {
    // 0x4026b0
    if (g32 == 0) {
        // 0x402707
        return 0;
    }
    int64_t v1 = 0; // 0x4026d8
    int64_t v2 = g122; // 0x4026d8
    int64_t v3; // 0x4026b0
    int64_t v4; // 0x4026b0
    while (true) {
      lab_0x4026e0:
        // 0x4026e0
        v4 = v2;
        int64_t v5 = v1;
        if (*(int32_t *)(v4 + 16) < 2) {
            // 0x4026fb
            v3 = v5 + 1 & 0xffffffff;
            goto lab_0x4026fe;
        } else {
            // 0x4026e6
            v3 = v5;
            if (*(char *)&g40 == 0) {
                goto lab_0x4026fe;
            } else {
                // 0x4026eb
                v3 = v5;
                if (*(int32_t *)(v4 + 44) < 1) {
                    goto lab_0x4026fe;
                } else {
                    // 0x4026f4
                    v3 = v5;
                    if (*(int32_t *)(v4 + 48) < 1) {
                        goto lab_0x4026fe;
                    } else {
                        // 0x4026fb
                        v3 = v5 + 1 & 0xffffffff;
                        goto lab_0x4026fe;
                    }
                }
            }
        }
    }
  lab_0x402707:;
    // 0x402707
    int64_t result; // 0x4026b0
    return result;
  lab_0x4026fe:
    // 0x4026fe
    v1 = v3;
    v2 = v4 + 64;
    result = v1;
    if (v2 == g122 + 64 * (int64_t)&g32) {
        // break -> 0x402707
        goto lab_0x402707;
    }
    goto lab_0x4026e0;
}
// Address range: 0x402710 - 0x402782
int64_t function_402710(int64_t a1, int64_t a2) {
    int64_t v1 = 0; // 0x40271f
    if (g32 != 0) {
        int64_t v2 = g86;
        int32_t * v3 = (int32_t *)(g122 + 16); // 0x402740
        int64_t v4 = v2; // 0x402744
        int64_t v5 = 0; // 0x402744
        if (*v3 == 2) {
            // 0x402746
            *v3 = 0;
            v4 = v2 + 1 & 0xffffffff;
            v5 = 1;
        }
        int64_t v6 = v5;
        int64_t v7 = v4;
        int64_t v8 = g122 + 64; // 0x402755
        int64_t v9 = v8; // 0x40275c
        while (v8 != g122 + 64 * (int64_t)&g32) {
            // 0x402740
            v2 = v7;
            v3 = (int32_t *)(v9 + 16);
            v4 = v2;
            v5 = v6;
            if (*v3 == 2) {
                // 0x402746
                *v3 = 0;
                v4 = v2 + 1 & 0xffffffff;
                v5 = 1;
            }
            // 0x402755
            v6 = v5;
            v7 = v4;
            v8 = v9 + 64;
            v9 = v8;
        }
        // 0x40275e
        v1 = v8;
        if ((char)v6 != 0) {
            // 0x402763
            g86 = v7;
            v1 = v8;
        }
    }
    int64_t result = v1; // 0x402770
    if (*(char *)&g40 != 0) {
        int32_t v10 = *(int32_t *)(g122 + 16); // 0x402774
        g86 = v10 != 3;
        result = v10 != 3;
    }
    // 0x402781
    return result;
}
// Address range: 0x402790 - 0x4027eb
int64_t function_402790(int64_t a1) {
    uint64_t v1 = (int64_t)(uint32_t)g119; // 0x402790
    int64_t result = g121; // 0x4027a0
    if (g118 > v1) {
        // 0x4027ac
        *(char *)(result + v1) = (char)a1;
        g119 = &g120;
        return result;
    }
    int64_t result2 = function_409460(result, &g118); // 0x4027c8
    g121 = result2;
    *(char *)(result2 + (int64_t)g119) = (char)a1;
    g119 = &g120;
    return result2;
}
// Address range: 0x4027f0 - 0x402820
int64_t function_4027f0(int64_t a1) {
    // 0x4027f0
    error(1, (int32_t)"integer overflow" ^ (int32_t)"integer overflow", dcgettext(NULL, "integer overflow", 5));
    return &g141;
}
// Address range: 0x402820 - 0x402919
int64_t function_402820(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = -1; // bp-48, 0x40284b
    int64_t v2; // bp-56, 0x402820
    char * v3; // bp-64, 0x402820
    int64_t v4; // 0x402820
    int64_t v5 = function_40a5e0(a3, (int64_t *)&v3, 10, &v2, (int64_t *)&g2, v4); // 0x402854
    if ((v5 & 0xfffffffd) != 0) {
        // 0x402903
        function_40a550(v5 & 0xffffffff, a1 & 0xffffffff, 0x100000000000000 * (int64_t)a2 >> 56, &g4, a3);
        // UNREACHABLE
    }
    int64_t v6 = (int64_t)v3; // 0x402864
    if (v6 == a3 || v2 == 0) {
        // 0x4028b0
        return 0;
    }
    char v7 = *v3; // 0x402876
    int64_t v8 = -1; // 0x40287b
    char v9 = v7; // 0x40287b
    if (v7 == 58) {
        int64_t v10 = v6 + 1; // 0x4028c0
        int64_t v11 = function_40a5e0(v10, (int64_t *)&v3, 10, &v1, (int64_t *)&g2, v4); // 0x4028dc
        if ((int32_t)v11 != 0) {
            // 0x402903
            function_40a550(v11 & 0xffffffff, a1 & 0xffffffff, 0x100000000000000 * (int64_t)a2 >> 56, &g4, a3);
            // UNREACHABLE
        }
        // 0x4028e5
        if (v10 == (int64_t)v3) {
            // 0x4028b0
            return 0;
        }
        // 0x4028ef
        v8 = v1;
        if (v8 < v2) {
            // 0x4028b0
            return 0;
        }
        // 0x4028fb
        v9 = *v3;
    }
    // 0x40287d
    if (v9 != 0) {
        // 0x4028b0
        return 0;
    }
    // 0x402881
    g87 = v2;
    g30 = v8;
    return 1;
}
// Address range: 0x402920 - 0x402950
int64_t function_402920(int64_t str) {
    int32_t len = strlen((char *)str); // 0x402924
    if (len <= -1) {
        // 0x402940
        return function_4027f0(str);
    }
    // 0x402931
    *(int64_t *)&g21 = str;
    g72 = len;
    return len;
}
// Address range: 0x402950 - 0x402991
int64_t function_402950(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = dcgettext(NULL, "invalid number of columns", 5); // 0x402960
    int64_t result = function_409680(a1, 1, 0x7fffffff, (int64_t *)&g2, (int64_t)v1, 0); // 0x40297d
    g111 = 1;
    g32 = result;
    return result;
}
// Address range: 0x4029a0 - 0x402ab0
int64_t function_4029a0(int64_t stream) {
    int32_t * v1 = (int32_t *)(stream + 16);
    if (*v1 == 3) {
        // 0x402a80
        int64_t result; // 0x4029a0
        return result;
    }
    if ((stream & 32) != 0) {
        int64_t v2 = function_408bb0(0, 3, *(int64_t *)(stream + 8)); // 0x402a8c
        error(1, *__errno_location(), "%s", (char *)v2);
        return &g141;
    }
    int32_t v3 = fileno((struct _IO_FILE *)stream); // 0x4029ba
    int64_t result2 = v3; // 0x4029c1
    if (v3 != 0) {
        // 0x402a40
        int64_t v4; // 0x4029a0
        result2 = function_40aa20(stream, v4);
        if ((int32_t)result2 != 0) {
            int64_t v5 = function_408bb0(0, 3, *(int64_t *)(stream + 8)); // 0x402a5b
            error(1, *__errno_location(), "%s", (char *)v5);
            // 0x402a80
            return &g141;
        }
    }
    // 0x4029c3
    if (*(char *)&g115 != 0) {
        // 0x402a20
        *v1 = 3;
        *(int32_t *)(stream + 48) = 0;
        // 0x402a2e
        g86--;
        return result2;
    }
    // 0x4029cc
    if (g32 == 0) {
        // 0x402a2e
        g86--;
        return g122;
    }
    // 0x4029dd
    *(int32_t *)(g122 + 16) = 3;
    if (*(int32_t *)(g122 + 44) == 0) {
        // 0x4029fe
        *(int32_t *)(g122 + 48) = 0;
    }
    int64_t result3 = g122 + 64; // 0x402a05
    while (result3 != g122 + 64 + (64 * (int64_t)g32 + 0x3fffffffc0 & 0x3fffffffc0)) {
        int64_t v6 = result3;
        *(int32_t *)(v6 + 16) = 3;
        if (*(int32_t *)(v6 + 44) == 0) {
            // 0x4029fe
            *(int32_t *)(v6 + 48) = 0;
        }
        // 0x402a05
        result3 = v6 + 64;
    }
    // 0x402a0e
    g86--;
    return result3;
}
// Address range: 0x402ab0 - 0x402c97
int64_t function_402ab0(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    int64_t v2 = a2 & 0xffffffff; // 0x402abb
    bool v3; // 0x402ab0
    int64_t v4 = v3 ? -1 : 1; // 0x402ad2
    int64_t v5 = (int64_t)&g11; // 0x402ab0
    int64_t v6 = v1; // 0x402ab0
    int64_t v7 = 2; // 0x402ad2
    unsigned char v8 = *(char *)v6; // 0x402ad2
    char v9 = *(char *)v5; // 0x402ad2
    char v10 = v9; // 0x402ad2
    bool v11 = false; // 0x402ad2
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
    int64_t v13; // 0x402ab0
    int64_t v14; // 0x402ab0
    int64_t v15; // 0x402ab0
    int64_t v16; // 0x402ab0
    if ((v8 >= v12 && !v11) == v8 < v12) {
        // 0x402be0
        v13 = 0xffffffff;
        v15 = 0xffffffff;
        if (g59 != 0) {
            goto lab_0x402af8;
        } else {
            goto lab_0x402bf4;
        }
    } else {
        int32_t v17 = a2; // 0x402ae1
        if (v17 >= 0) {
            // 0x402c08
            int64_t v18; // bp-184, 0x402ab0
            if (__fxstat(1, v17, (struct stat *)&v18) != 0) {
                goto lab_0x402aea;
            } else {
                // 0x402c22
                v14 = v2;
                int32_t v19; // 0x402ab0
                v16 = v19;
                goto lab_0x402b09;
            }
        } else {
            goto lab_0x402aea;
        }
    }
  lab_0x402af8:;
    int64_t v20 = __asm_movaps(__asm_movdqa(*(int128_t *)&g59)); // 0x402b04
    v14 = v13;
    goto lab_0x402b09;
  lab_0x402bf4:
    // 0x402bf4
    function_405550(&g59);
    v13 = v15;
    goto lab_0x402af8;
  lab_0x402aea:
    // 0x402aea
    v13 = v2;
    v15 = v2;
    if (g59 == 0) {
        goto lab_0x402bf4;
    } else {
        goto lab_0x402af8;
    }
  lab_0x402b09:;
    int64_t v21 = v20;
    char * v22; // 0x402ab0
    int64_t v23; // 0x402ab0
    int64_t v24; // bp-248, 0x402ab0
    if (function_40be80((int64_t)g65, &v21, &v24) == 0) {
        int64_t v25 = function_409300(33); // 0x402c5d
        int64_t v26; // bp-280, 0x402ab0
        int64_t v27 = function_4055f0(v21, &v26); // 0x402c6e
        char * v28 = (char *)v25;
        __sprintf_chk(v28, 1, 33, "%s.%09d", (char *)v27, v16 & 0xffffffff);
        v22 = v28;
        v23 = v25;
    } else {
        int64_t v29 = v16 & 0xffffffff; // 0x402b2d
        int64_t v30 = function_4070f0(0, -1, (int64_t)g66, &v24, (int64_t)g65, v29); // 0x402b45
        int64_t v31 = v30 + 1; // 0x402b4a
        int64_t v32 = function_409300(v31); // 0x402b51
        function_4070f0((int32_t)v32, v31, (int64_t)g66, &v24, (int64_t)g65, v29);
        v22 = (char *)v32;
        v23 = v32;
    }
    // 0x402b7a
    free((int64_t *)g64);
    g64 = v22;
    int64_t v33 = (int64_t)g67; // 0x402b97
    if (g67 == NULL) {
        // 0x402c40
        v33 = (int32_t)v14 >= 0 ? v1 : (int64_t)&g2;
    }
    // 0x402b9d
    g63 = (char *)v33;
    int64_t v34 = function_405850(v23, 0); // 0x402baf
    int64_t result = function_405850((int64_t)g63, 0); // 0x402bbf
    g62 = g38 - (int32_t)v34 - (int32_t)result;
    return result;
}
// Address range: 0x402ca0 - 0x402d0c
int64_t function_402ca0(uint32_t a1) {
    int32_t v1 = g92; // 0x402caf
    if (g97 != 0) {
        // 0x402cb7
        g95 = a1 - v1;
        int64_t result; // 0x402ca0
        return result;
    }
    uint32_t v2 = v1 + 1;
    if (v2 > a1) {
        // 0x402cf3
        g92 = a1;
        int64_t result2; // 0x402ca0
        return result2;
    }
    int64_t v3 = v2; // 0x402cec
    int64_t v4 = (int64_t)g53; // 0x402cd0
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x402cd7
    uint64_t v6 = *v5; // 0x402cd7
    int64_t result3; // 0x402ca0
    if (v6 >= *(int64_t *)(v4 + 48)) {
        // 0x402d00
        result3 = __overflow(g53, 32);
    } else {
        // 0x402ce1
        *v5 = v6 + 1;
        *(char *)v6 = 32;
        result3 = v6;
    }
    // 0x402cec
    v3 = v3 + 1 & 0xffffffff;
    while (v3 <= (int64_t)a1) {
        // 0x402cd0
        v4 = (int64_t)g53;
        v5 = (int64_t *)(v4 + 40);
        v6 = *v5;
        if (v6 >= *(int64_t *)(v4 + 48)) {
            // 0x402d00
            result3 = __overflow(g53, 32);
        } else {
            // 0x402ce1
            *v5 = v6 + 1;
            *(char *)v6 = 32;
            result3 = v6;
        }
        // 0x402cec
        v3 = v3 + 1 & 0xffffffff;
    }
    // 0x402cf3
    g92 = a1;
    return result3;
}
// Address range: 0x402d10 - 0x402dcc
int64_t function_402d10(void) {
    int64_t v1 = g92; // 0x402d1a
    int32_t v2 = g92 + g95; // 0x402d21
    uint64_t v3 = (int64_t)v2; // 0x402d21
    int64_t v4 = v3 - v1; // 0x402d2b
    int64_t v5 = v1; // 0x402d30
    int64_t v6 = v4; // 0x402d30
    if ((int32_t)v4 >= 2) {
        int64_t v7 = v1;
        uint32_t v8 = *(int32_t *)&g33; // 0x402d32
        int32_t v9 = v7; // 0x402d3a
        int64_t v10 = 0x100000000 * (int64_t)(v9 >> 31) | v7; // 0x402d3b
        int64_t v11 = v8; // 0x402d3b
        uint32_t v12 = v8 - (int32_t)(v10 % v11) + v9; // 0x402d3f
        while (v2 >= v12) {
            int64_t v13 = (int64_t)g53; // 0x402d47
            unsigned char v14 = *(char *)&g34; // 0x402d4e
            int64_t * v15 = (int64_t *)(v13 + 40); // 0x402d55
            uint64_t v16 = *v15; // 0x402d55
            if (v16 >= *(int64_t *)(v13 + 48)) {
                // 0x402db0
                __overflow(g53, (int32_t)v14);
            } else {
                // 0x402d5f
                *v15 = v16 + 1;
                *(char *)v16 = v14;
            }
            int64_t v17 = v12; // 0x402d3f
            int64_t v18 = v3 - v17; // 0x402d2b
            v5 = v17;
            v6 = v18;
            if ((int32_t)v18 < 2) {
                goto lab_0x402d8c;
            }
            v7 = v17;
            v8 = *(int32_t *)&g33;
            v9 = v7;
            v10 = 0x100000000 * (int64_t)(v9 >> 31) | v7;
            v11 = v8;
            v12 = v8 - (int32_t)(v10 % v11) + v9;
        }
        // 0x402d32
        v5 = v7;
        v6 = v10 / v11;
    }
  lab_0x402d8c:;
    int64_t v19 = v5 + 1 & 0xffffffff; // 0x402d8c
    if (v19 > v3) {
        // 0x402d94
        g92 = v2;
        g95 = 0;
        return v6 & 0xffffffff;
    }
    int64_t v20 = (int64_t)g53; // 0x402d70
    int64_t * v21 = (int64_t *)(v20 + 40); // 0x402d77
    uint64_t v22 = *v21; // 0x402d77
    int64_t result; // 0x402d10
    if (v22 >= *(int64_t *)(v20 + 48)) {
        // 0x402dc0
        result = __overflow(g53, 32);
    } else {
        // 0x402d81
        *v21 = v22 + 1;
        *(char *)v22 = 32;
        result = v22;
    }
    int64_t v23 = v19 + 1 & 0xffffffff; // 0x402d8c
    int64_t v24 = v23; // 0x402d92
    while (v23 <= v3) {
        // 0x402d70
        v20 = (int64_t)g53;
        v21 = (int64_t *)(v20 + 40);
        v22 = *v21;
        if (v22 >= *(int64_t *)(v20 + 48)) {
            // 0x402dc0
            result = __overflow(g53, 32);
        } else {
            // 0x402d81
            *v21 = v22 + 1;
            *(char *)v22 = 32;
            result = v22;
        }
        // 0x402d8c
        v23 = v24 + 1 & 0xffffffff;
        v24 = v23;
    }
    // 0x402d94
    g92 = v2;
    g95 = 0;
    return result;
}
// Address range: 0x402dd0 - 0x402ed3
int64_t function_402dd0(void) {
    int32_t v1 = g95; // 0x402dd6
    int64_t result = v1; // 0x402dd6
    if (g70 < 1) {
        if (v1 >= 0 == (v1 != 0)) {
            // 0x402ece
            return function_402d10();
        }
        // 0x402ecd
        return result;
    }
    int64_t v2 = result; // 0x402dfc
    int64_t v3 = g72; // 0x402dfc
    int64_t v4 = (int64_t)g21; // 0x402dfc
    int32_t result2; // 0x402e83
    while (true) {
        int64_t v5 = v4 + v3; // 0x402e03
        int32_t v6 = v3;
        int64_t v7 = v4; // 0x402e0f
        int64_t v8 = v2; // 0x402e0f
        int64_t v9 = v2; // 0x402e0f
        if (v6 >= 1) {
            int64_t v10 = v8;
            char * v11 = (char *)v7; // 0x402e11
            char v12 = *v11; // 0x402e11
            int64_t v13 = v7 + 1; // 0x402e14
            int64_t v14; // 0x402dd0
            unsigned char v15; // 0x402dd0
            int64_t v16; // 0x402e2f
            int64_t * v17; // 0x402e36
            uint64_t v18; // 0x402e36
            char v19; // 0x402e2b
            int64_t v20; // 0x402e55
            int32_t v21; // 0x402e5d
            while (v12 != 32) {
                // 0x402e22
                v19 = v12;
                if ((int32_t)v10 >= 1) {
                    // 0x402e26
                    function_402d10();
                    v19 = *v11;
                }
                // 0x402e2f
                v15 = v19;
                v16 = (int64_t)g53;
                v17 = (int64_t *)(v16 + 40);
                v18 = *v17;
                if (v18 >= *(int64_t *)(v16 + 48)) {
                    // 0x402eb0
                    __overflow(g53, (int32_t)v15);
                } else {
                    // 0x402e40
                    *v17 = v18 + 1;
                    *(char *)v18 = v15;
                }
                // 0x402e4b
                g92 = &g93;
                v20 = g95;
                v21 = v5 - v13;
                v14 = v13;
                v9 = v20;
                if (v21 >= 0 != v21 != 0) {
                    // break (via goto) -> 0x402e61
                    goto lab_0x402e61;
                }
                v10 = v20;
                v11 = (char *)v14;
                v12 = *v11;
                v13 = v14 + 1;
            }
            int64_t v22 = v10 + 1; // 0x402ea0
            int64_t v23 = v22 & 0xffffffff; // 0x402ea0
            g95 = v22;
            v9 = v23;
            while ((int32_t)(v5 - v13) >= 1) {
                // 0x402e11
                v10 = v23;
                v11 = (char *)v13;
                v12 = *v11;
                v13++;
                while (v12 != 32) {
                    // 0x402e22
                    v19 = v12;
                    if ((int32_t)v10 >= 1) {
                        // 0x402e26
                        function_402d10();
                        v19 = *v11;
                    }
                    // 0x402e2f
                    v15 = v19;
                    v16 = (int64_t)g53;
                    v17 = (int64_t *)(v16 + 40);
                    v18 = *v17;
                    if (v18 >= *(int64_t *)(v16 + 48)) {
                        // 0x402eb0
                        __overflow(g53, (int32_t)v15);
                    } else {
                        // 0x402e40
                        *v17 = v18 + 1;
                        *(char *)v18 = v15;
                    }
                    // 0x402e4b
                    g92 = &g93;
                    v20 = g95;
                    v21 = v5 - v13;
                    v14 = v13;
                    v9 = v20;
                    if (v21 >= 0 != v21 != 0) {
                        // break (via goto) -> 0x402e61
                        goto lab_0x402e61;
                    }
                    v10 = v20;
                    v11 = (char *)v14;
                    v12 = *v11;
                    v13 = v14 + 1;
                }
                // 0x402ea0
                v22 = v10 + 1;
                v23 = v22 & 0xffffffff;
                g95 = v22;
                v9 = v23;
            }
        }
      lab_0x402e61:
        // 0x402e61
        if ((int32_t)v9 >= 1) {
            // 0x402e78
            function_402d10();
        }
        // 0x402e7d
        result2 = g70 - 1;
        g70 = result2;
        if (result2 < 1) {
            // break -> 0x402ec0
            break;
        }
        int64_t v24 = v6 >= 0 ? v3 : 0;
        v2 = g95;
        v3 = (v24 ^ 0xffffffff) + v3 & 0xffffffff;
        v4 += (0x100000000 * v24 >> 32);
    }
    // 0x402ec0
    return result2;
}
// Address range: 0x402ee0 - 0x402fe0
int64_t function_402ee0(void) {
    // 0x402ee0
    g92 = 0;
    function_402ca0(g94);
    function_402d10();
    if (g85 == 0) {
        // 0x402fb6
        error(1, (int32_t)"page number overflow" ^ (int32_t)"page number overflow", dcgettext(NULL, "page number overflow", 5));
        return &g141;
    }
    // 0x402f13
    int64_t v1; // bp-312, 0x402ee0
    __sprintf_chk((char *)&v1, 1, 276, dcgettext(NULL, "Page %lu", 5));
    int64_t v2 = function_405850((int64_t)&v1, 0); // 0x402f4c
    int32_t v3 = g62 - (int32_t)v2; // 0x402f63
    uint32_t v4 = v3 > 0 ? v3 : 0; // 0x402f74
    int32_t result = __printf_chk(1, "\n\n%*s%s%*s%s%*s%s\n\n\n", (int64_t)g94, (char *)&g2, g64, (int64_t)0, (char *)&g14, g63, (int64_t)(v4 % 2), (char *)&g14, &v1); // 0x402f96
    g108 = 0;
    g92 = 0;
    return result;
}
// Address range: 0x402fe0 - 0x4031d7
int64_t function_402fe0(int64_t a1) {
    unsigned char v1 = (char)a1; // 0x402fe8
    int64_t v2; // 0x402fe0
    int64_t v3; // 0x403060
    int64_t v4; // 0x403076
    if (*(char *)&g37 == v1) {
        int64_t v5 = g89; // 0x4030d0
        uint32_t v6 = *(int32_t *)&g35; // 0x4030d6
        uint32_t v7 = v6 - (int32_t)((0x100000000 * (int64_t)(g89 >> 31) | v5) % (int64_t)v6); // 0x4030e1
        int64_t v8 = v7; // 0x4030e1
        v4 = v8;
        v3 = v5;
        if (g98 == 0) {
            goto lab_0x403084;
        } else {
            // 0x4030ee
            v2 = v8;
            if (v7 == 0) {
                // 0x403092
                g89 = v5;
                return 0;
            }
            goto lab_0x4030f8;
        }
    } else {
        if (v1 == 9) {
            // 0x403060
            v3 = g89;
            uint32_t v9 = (g89 >> 31) / 0x20000000; // 0x40306b
            v4 = (v9 | 8) - (v9 + g89) % 8;
            v2 = v4;
            if (g98 != 0) {
                goto lab_0x4030f8;
            } else {
                goto lab_0x403084;
            }
        } else {
            // 0x403002
            if ((*(char *)((2 * a1 & 510 | 1) + (int64_t)*__ctype_b_loc()) & 64) != 0) {
                // 0x403118
                *(char *)g61 = v1;
                // 0x403092
                g89 = &g90;
                return 1;
            }
            // 0x40301c
            if (g79 != 0) {
                goto lab_0x403148;
            } else {
                // 0x403029
                if (g78 == 0) {
                    // 0x403198
                } else {
                    if (v1 >= 0) {
                        // 0x40303f
                        *(char *)g61 = 94;
                        *(char *)(g61 + 1) = v1 ^ 64;
                        // 0x403092
                        g89 = &g91;
                        return 2;
                    }
                    goto lab_0x403148;
                }
            }
        }
    }
  lab_0x403084:
    // 0x403084
    *(char *)g61 = v1;
    goto lab_0x40308c;
  lab_0x40308c:;
    int64_t v10 = 1;
    int64_t result = v10; // 0x40308e
    int64_t v11 = v4; // 0x40308e
    int64_t v12 = v3; // 0x40308e
    int64_t result2; // 0x402fe0
    int64_t v13; // 0x402fe0
    int64_t v14; // 0x402fe0
    int64_t v15; // 0x402fe0
    if ((int32_t)v4 < 0) {
        if ((int32_t)v3 == 0) {
            // 0x403130
            g89 = 0;
            return 0;
        }
        // 0x4030b0
        result2 = v10;
        v13 = -v4 & 0xffffffff;
        v14 = v4;
        v15 = v3;
        goto lab_0x4030b4;
    } else {
        goto lab_0x403090;
    }
  lab_0x4030f8:;
    int64_t v16 = g61 + 1; // 0x403100
    *(char *)g61 = 32;
    int64_t v17 = v16; // 0x40310b
    while (v16 != g61 + 1 + (v2 + 0xffffffff & 0xffffffff)) {
        // 0x403100
        v16 = v17 + 1;
        *(char *)v17 = 32;
        v17 = v16;
    }
    goto lab_0x40308c;
  lab_0x403148:
    // 0x403148
    *(char *)g61 = 92;
    char v18; // bp-28, 0x402fe0
    __sprintf_chk(&v18, 1, 4, "%03o", (int32_t)a1 % 256);
    *(char *)(g61 + 1) = v18;
    // 0x403092
    g89 = &g92;
    return 4;
  lab_0x403090:
    // 0x403092
    g89 = v12 + v11 & 0xffffffff;
    return result;
  lab_0x4030b4:
    // 0x4030b4
    result = result2;
    v11 = v14;
    v12 = v15;
    if (v13 >= v15) {
        // 0x4030b8
        g89 = 0;
        return result2;
    }
    goto lab_0x403090;
}
// Address range: 0x4031e0 - 0x40327e
int64_t function_4031e0(unsigned char a1) {
    // 0x4031e0
    if (g97 != 0) {
        if (a1 == 32) {
            // 0x403260
            g95 = &g96;
            return &g96;
        }
        // 0x4031fd
        if (g95 >= 1) {
            // 0x403205
            function_402d10();
        }
        int16_t ** v1 = __ctype_b_loc(); // 0x40320a
        char v2 = *(char *)((2 * (int64_t)a1 & 510 | 1) + (int64_t)*v1); // 0x403212
        if ((v2 & 64) != 0) {
            // 0x403250
            g92 = &g93;
        } else {
            if (a1 == 8) {
                // 0x40321e
                g92--;
            }
        }
    }
    int64_t v3 = (int64_t)g53; // 0x403228
    int64_t * v4 = (int64_t *)(v3 + 40); // 0x40322f
    uint64_t result = *v4; // 0x40322f
    if (result >= *(int64_t *)(v3 + 48)) {
        // 0x403270
        return __overflow(g53, (int32_t)a1);
    }
    // 0x403239
    *v4 = result + 1;
    *(char *)result = a1;
    return result;
}
// Address range: 0x403280 - 0x403408
int64_t function_403280(int64_t a1) {
    int32_t * v1 = (int32_t *)(a1 + 40); // 0x40328d
    int32_t v2 = *v1; // 0x40328d
    *(char *)&g68 = 1;
    *v1 = v2 + 1;
    int64_t v3 = 4 * (int64_t)v2; // 0x4032ae
    int64_t v4 = g117 + v3;
    if (g108 != 0) {
        // 0x4033b8
        function_402ee0();
    }
    // 0x4032ca
    if (*(int32_t *)(a1 + 16) == 1) {
        // 0x403360
        if (g32 >= 1) {
            int64_t v5 = g122; // 0x403382
            *(int32_t *)(v5 + 16) = 2;
            v5 += 64;
            while (v5 != g122 + 64 * (int64_t)&g32) {
                // 0x403388
                *(int32_t *)(v5 + 16) = 2;
                v5 += 64;
            }
        }
        int32_t v6 = *(int32_t *)(g122 + 48); // 0x403398
        if (v6 >= 0 != v6 != 0) {
            // 0x4033a3
            if (g41 == 0) {
                // 0x4033ac
                *(char *)&g68 = 0;
            }
            // 0x403349
            return 1;
        }
    }
    uint32_t v7 = *(int32_t *)&g69; // 0x4032db
    if (v7 > g72) {
        // 0x4033d8
        function_402ca0(v7 - g72);
        *(int32_t *)&g69 = 0;
    }
    // 0x4032e9
    if (g73 != 0) {
        // 0x4033c8
        function_402dd0();
    }
    int64_t v8 = g121 + (int64_t)*(int32_t *)v4; // 0x4032b7
    int64_t v9 = g121 + (int64_t)*(int32_t *)(v4 + 4); // 0x4032ba
    if (v8 != v9) {
        int64_t v10 = v8 + 1; // 0x403300
        function_4031e0(*(char *)v8);
        while (v9 != v10) {
            int64_t v11 = v10;
            v10 = v11 + 1;
            function_4031e0(*(char *)v11);
        }
    }
    // 0x403312
    if (g95 != 0) {
        // 0x403349
        return 1;
    }
    int32_t v12 = *(int32_t *)(a1 + 52); // 0x403323
    int32_t v13 = *(int32_t *)(g116 + v3) + v12; // 0x403331
    g92 = v13;
    if (v12 - g72 != g94) {
        // 0x403349
        return 1;
    }
    // 0x4033f0
    g92 = v13 - g72;
    return 1;
}
// Address range: 0x403410 - 0x403484
int64_t function_403410(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403410
    if (*(char *)&g115 != 0) {
        // 0x403470
        *(int32_t *)a1 = 2;
        g86--;
        *(int32_t *)a2 = 0;
        int64_t result; // 0x403410
        return result;
    }
    // 0x403419
    if (g32 == 0) {
        // 0x40345c
        *(int32_t *)a2 = 0;
        g86--;
        return g122;
    }
    char v1 = *(char *)&g40; // 0x40342a
    int32_t v2 = (int32_t)((a4 ^ 0xffffffff) + a4 + (int64_t)(v1 == 0)) + 2; // 0x403450
    int64_t result2 = g122; // 0x403446
    *(int32_t *)(result2 + 16) = v2;
    result2 += 64;
    while (result2 != g122 + 64 + (64 * (int64_t)g32 + 0x3fffffffc0 & 0x3fffffffc0)) {
        // 0x403450
        *(int32_t *)(result2 + 16) = v2;
        result2 += 64;
    }
    // 0x40345c
    *(int32_t *)a2 = 0;
    g86--;
    return result2;
}
// Address range: 0x403490 - 0x4036b4
int64_t function_403490(int64_t stream, int64_t a2) {
    int64_t * v1 = (int64_t *)(stream + 8); // 0x4034a3
    uint64_t v2 = *v1; // 0x4034a3
    int64_t v3 = stream + 16; // 0x4034a7
    int64_t * v4 = (int64_t *)v3; // 0x4034a7
    int64_t v5; // 0x403490
    int64_t v6; // 0x403490
    if (v2 >= *v4) {
        // 0x403650
        v6 = __uflow((struct _IO_FILE *)stream);
    } else {
        int64_t v7 = v2 + 1; // 0x4034b1
        *v1 = v7;
        v5 = v7;
        v6 = (int64_t)*(char *)v2;
    }
    char * v8 = (char *)(stream + 57);
    int64_t v9; // 0x403490
    int64_t v10; // 0x403490
    int64_t v11; // 0x403490
    int64_t v12; // 0x403490
    int64_t v13; // 0x403490
    int64_t v14; // 0x403490
    int64_t v15; // 0x403490
    if ((int32_t)v6 == 12) {
        // 0x403540
        if (*v8 == 0) {
            unsigned char v16 = *(char *)&g60; // 0x403610
            v14 = v5;
            v11 = 1;
            if (v16 == 0) {
                goto lab_0x4035dd;
            } else {
                // 0x403597
                *v8 = 1;
                v10 = v16;
                v13 = v5;
                goto lab_0x40359b;
            }
        } else {
            uint64_t v17 = *v1; // 0x40354b
            int64_t v18; // 0x403490
            int64_t v19; // 0x403490
            if (v17 >= *v4) {
                // 0x40369a
                v18 = v5;
                v19 = __uflow((struct _IO_FILE *)stream);
            } else {
                int64_t v20 = v17 + 1; // 0x403559
                *v1 = v20;
                v18 = v20;
                v19 = (int64_t)*(char *)v17;
            }
            int64_t v21 = v19; // 0x403567
            int64_t v22 = v18; // 0x403567
            if ((int32_t)v19 == 10) {
                uint64_t v23 = *v1; // 0x403671
                if (v23 >= *v4) {
                    // branch -> 0x40356d
                } else {
                    int64_t v24 = v23 + 1; // 0x40367b
                    *v1 = v24;
                    v21 = (int64_t)*(char *)v23;
                    v22 = v24;
                }
            }
            // 0x40356d
            v12 = v22;
            v9 = v21;
            *v8 = 0;
            v15 = (int32_t)v9 == 12;
            goto lab_0x4034c8;
        }
    } else {
        // 0x4034c1
        *v8 = 0;
        v9 = v6;
        v12 = v5;
        v15 = 0;
        goto lab_0x4034c8;
    }
  lab_0x4034c8:;
    int64_t v25 = v15;
    int64_t v26 = v9; // 0x4034cf
    int64_t v27 = v12; // 0x4034cf
    int64_t result; // 0x403490
    int64_t v28; // 0x403490
    int64_t v29; // 0x403490
    if (*(char *)&g60 == 0) {
        goto lab_0x40351b;
    } else {
        // 0x4034d1
        *v8 = 1;
        result = v9;
        v28 = v25;
        v29 = v12;
        if ((int32_t)v9 != 10) {
            goto lab_0x403520;
        } else {
            goto lab_0x4034e0;
        }
    }
  lab_0x4035dd:;
    uint64_t v30 = *v1; // 0x4035dd
    int64_t v31; // 0x403490
    int64_t c; // 0x403490
    if (v30 >= *v4) {
        // 0x40368b
        v31 = v14;
        c = __uflow((struct _IO_FILE *)stream);
    } else {
        int64_t v32 = v30 + 1; // 0x4035eb
        *v1 = v32;
        v31 = v32;
        c = (int64_t)*(char *)v30;
    }
    // 0x4035f6
    int64_t v33; // 0x403490
    if (c != 10) {
        // 0x403630
        ungetc((int32_t)c, (struct _IO_FILE *)stream);
        result = function_403410(v3, stream + 48, v31, v33);
        v28 = v11;
    } else {
        // 0x4035fb
        result = function_403410(v3, stream + 48, v31, v33);
        v28 = v11;
    }
    goto lab_0x4034e0;
  lab_0x40351b:
    // 0x40351b
    result = v26;
    v28 = v25;
    v29 = v27;
    if ((int32_t)v26 == 10) {
        goto lab_0x4034e0;
    } else {
        goto lab_0x403520;
    }
  lab_0x4034e0:
    // 0x4034e0
    if (g26 == 0) {
        // 0x403504
        return result;
    }
    // 0x4034e9
    if (*(char *)&g115 == 1) {
        if ((int32_t)a2 != 1) {
            // 0x403504
            return result;
        }
    }
    if ((char)v28 == 0) {
        // 0x4034fd
        g27 = &g28;
    }
    // 0x403504
    return result;
  lab_0x40359b:;
    int64_t v34 = v10;
    if (*(char *)&g115 != 0) {
        // 0x403667
        *v8 = 0;
        v14 = v13;
        v11 = v34;
    } else {
        // 0x4035a8
        v14 = 0;
        v11 = v34;
        if (g32 != 0) {
            int64_t v35 = g122 + 64 + (64 * (int64_t)g32 + 0x3fffffffc0 & 0x3fffffffc0); // 0x4035c4
            int64_t v36 = g122; // 0x4035c7
            *(char *)(v36 + 57) = 0;
            v36 += 64;
            v14 = v35;
            v11 = v34;
            while (v36 != v35) {
                // 0x4035d0
                *(char *)(v36 + 57) = 0;
                v36 += 64;
                v14 = v35;
                v11 = v34;
            }
        }
    }
    goto lab_0x4035dd;
  lab_0x403520:;
    int64_t v37 = v29;
    int64_t v38; // 0x403490
    switch ((int32_t)v38) {
        case 12: {
            // 0x403597
            v10 = v25;
            v13 = v37;
            v14 = v37;
            v11 = v25;
            if (*(char *)&g60 == 0) {
                goto lab_0x4035dd;
            } else {
                goto lab_0x40359b;
            }
        }
        case -1: {
            // 0x403580
            result = function_4029a0(stream);
            v28 = v25;
            goto lab_0x4034e0;
        }
        default: {
            uint64_t v39 = *v1; // 0x40352a
            if (v39 < *v4) {
                int64_t v40 = v39 + 1; // 0x403510
                *v1 = v40;
                v26 = (int64_t)*(char *)v39;
                v27 = v40;
            } else {
                // 0x403534
                v26 = __uflow((struct _IO_FILE *)stream);
                v27 = v37;
            }
            goto lab_0x40351b;
        }
    }
}
// Address range: 0x4036c0 - 0x4037dd
int64_t function_4036c0(int64_t a1) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4036d1
    int32_t v2 = __sprintf_chk(g80, 1, -1, "%*d", (int64_t)v1, (int64_t)(uint32_t)g83); // 0x4036ef
    uint32_t v3 = *(int32_t *)&g23; // 0x4036f4
    g83 = &g84;
    int64_t v4 = (int64_t)g80 + (int64_t)(v2 - v3); // 0x403709
    int64_t v5 = v4; // 0x403717
    if (v3 >= 1) {
        v5++;
        while (v5 != v4 + (int64_t)&g22 + 1) {
            // 0x403720
            v5++;
        }
    }
    char v6 = *(char *)&g29;
    int64_t result; // 0x4036c0
    if (g32 < 2) {
        // 0x4037b0
        result = &g22;
        if (v6 == 9) {
            int32_t v7 = g92; // 0x4037bc
            uint32_t v8 = *(int32_t *)&g33; // 0x4037c2
            int32_t v9 = v8 - (int32_t)((0x100000000 * (int64_t)(v7 >> 31) | (int64_t)v7) % (int64_t)v8) + v7; // 0x4037cf
            g92 = v9;
            result = v9;
        }
    } else {
        // 0x403740
        result = &g22;
        if (v6 == 9) {
            uint32_t v10 = g81 - v3; // 0x403776
            int64_t v11 = v10; // 0x403776
            result = v11;
            if (v10 >= 1) {
                int64_t v12 = (int64_t)(v10 - 1) + 0xffffffff; // 0x403788
                result = v11;
                while ((int32_t)v12 != -1) {
                    int64_t v13 = (v12 & 0xffffffff) + 0xffffffff; // 0x403798
                    result = v11;
                    if ((int32_t)v13 == -1) {
                        // break -> 0x403749
                        break;
                    }
                    v12 = (v13 & 0xffffffff) + 0xffffffff;
                    result = v11;
                }
            }
        }
    }
    // 0x403749
    if (*(char *)&g102 == 0) {
        // 0x403767
        return result;
    }
    int64_t result2 = result; // 0x403759
    if (*(char *)&g115 == 0) {
        // 0x40375b
        g89 += g81;
        result2 = g81;
    }
    // 0x403767
    return result2;
}
// Address range: 0x4037e0 - 0x40383f
int64_t function_4037e0(int64_t a1) {
    uint32_t v1 = g72; // 0x4037e1
    uint32_t v2 = *(int32_t *)(a1 + 52); // 0x4037ea
    *(int32_t *)&g69 = v2;
    int64_t result; // 0x4037e0
    if (v2 > v1) {
        int64_t v3 = function_402ca0(v2 - v1); // 0x403812
        *(int32_t *)&g69 = 0;
        result = v3;
        if (g73 == 0) {
            goto lab_0x403800;
        } else {
            goto lab_0x40382a;
        }
    } else {
        // 0x4037f7
        result = v1;
        if (g73 != 0) {
            goto lab_0x40382a;
        } else {
            goto lab_0x403800;
        }
    }
  lab_0x403800:
    // 0x403800
    if (*(char *)(a1 + 56) != 0) {
        // 0x403835
        return function_4036c0(a1 + 32);
    }
    // 0x403806
    return result;
  lab_0x40382a:;
    int64_t result2 = function_402dd0(); // 0x40382a
    if (*(char *)(a1 + 56) != 0) {
        // 0x403835
        return function_4036c0(a1 + 32);
    }
    // 0x403806
    return result2;
}
// Address range: 0x403840 - 0x403c7f
int64_t function_403840(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40384e
    uint64_t v2 = *v1; // 0x40384e
    int64_t v3 = a1 + 16; // 0x403852
    int64_t * v4 = (int64_t *)v3; // 0x403852
    int64_t v5; // 0x403840
    int64_t v6; // 0x403840
    if (v2 >= *v4) {
        // 0x403c10
        v6 = __uflow((struct _IO_FILE *)a1);
    } else {
        int64_t v7 = v2 + 1; // 0x40385c
        *v1 = v7;
        v5 = v7;
        v6 = (int64_t)*(char *)v2;
    }
    int32_t v8 = g89; // 0x403867
    char * v9 = (char *)(a1 + 57);
    int64_t v10 = v5; // 0x403871
    int64_t v11 = v6; // 0x403871
    int64_t v12; // 0x403840
    int64_t v13; // 0x403840
    if (v6 == 12) {
        uint64_t v14 = *v1; // 0x403a80
        int64_t v15 = *v4; // 0x403a84
        v12 = v14;
        v13 = v15;
        if (*v9 == 0) {
            goto lab_0x403adc;
        } else {
            int64_t v16; // 0x403840
            int64_t v17; // 0x403840
            if (v14 >= v15) {
                // 0x403c5e
                v16 = v15;
                v17 = __uflow((struct _IO_FILE *)a1);
            } else {
                int64_t v18 = v14 + 1; // 0x403a93
                *v1 = v18;
                v16 = v18;
                v17 = (int64_t)*(char *)v14;
            }
            // 0x403a9e
            v10 = v16;
            v11 = v17;
            if (v17 == 10) {
                uint64_t v19 = *v1; // 0x403aab
                if (v19 >= *v4) {
                    // 0x403c73
                    v10 = v16;
                    v11 = __uflow((struct _IO_FILE *)a1);
                } else {
                    int64_t v20 = v19 + 1; // 0x403ab9
                    *v1 = v20;
                    v10 = v20;
                    v11 = (int64_t)*(char *)v19;
                }
            }
            goto lab_0x403877;
        }
    } else {
        goto lab_0x403877;
    }
  lab_0x403978:
    // 0x403978
    function_4029a0(a1);
    // 0x403985
    return 1;
  lab_0x403877:
    // 0x403877
    *v9 = 0;
    int32_t v21 = v11; // 0x40387b
    int64_t v22 = a1; // 0x403840
    int64_t v23; // 0x403840
    switch (v21) {
        case 10: {
            goto lab_0x40389d;
        }
        case 12: {
            // 0x403ad0
            v12 = *v1;
            v13 = *v4;
            goto lab_0x403adc;
        }
        case -1: {
            goto lab_0x403978;
        }
        default: {
            int64_t v24 = 0x100000000000000 * v11 >> 56; // 0x403892
            int64_t v25 = function_402fe0(v24); // 0x403895
            v22 = v24;
            v23 = v25 & 0xffffffff;
            goto lab_0x40389d;
        }
    }
  lab_0x403adc:;
    // 0x403adc
    int64_t v26; // 0x403840
    int64_t v27; // 0x403840
    if (v13 > v12) {
        int64_t v28 = v12 + 1; // 0x403ae5
        *v1 = v28;
        v26 = v28;
        v27 = (int64_t)*(char *)v12;
    } else {
        // 0x403c52
        v26 = v13;
        v27 = __uflow((struct _IO_FILE *)a1);
    }
    int64_t c = v27;
    int64_t v29; // 0x403840
    if (c != 10) {
        // 0x403b40
        ungetc((int32_t)c, (struct _IO_FILE *)c);
        g112 = 1;
        v29 = v26;
        if (g108 == 0) {
            goto lab_0x403b12;
        } else {
            goto lab_0x403b05;
        }
    } else {
        // 0x403af5
        g112 = 1;
        v29 = v26;
        if (g108 == 0) {
            goto lab_0x403b12;
        } else {
            goto lab_0x403b05;
        }
    }
  lab_0x40389d:
    // 0x40389d
    if (*(char *)&g102 != 0) {
        // 0x4038a6
        if ((int64_t)g89 > (int64_t)g99) {
            // 0x403b90
            g89 = v8;
            // 0x403985
            return 0;
        }
    }
    int64_t v30 = a1 + 32; // 0x4038b8
    int64_t v31 = v22; // 0x4038c0
    if (*(int64_t *)v30 != 0x402790) {
        // 0x4038c6
        *(char *)&g68 = 1;
        if (g108 != 0 == *(char *)&g40 == 0) {
            // 0x403c20
            function_402ee0();
        }
        // 0x4038e3
        int32_t v32; // 0x403840
        if (*(char *)&g115 == 0 || g114 == 0) {
            // 0x403990
            v32 = *(int32_t *)&g69;
        } else {
            uint32_t v33 = g70; // 0x4038fd
            g70 = 0;
            if (v33 >= 1) {
                int64_t v34 = g122 + 64 * (int64_t)&g70; // 0x403924
                int64_t v35 = g122 + 64; // 0x403933
                function_4037e0(g122);
                g70 = &g71;
                while (v34 != v35) {
                    int64_t v36 = v35;
                    v35 = v36 + 64;
                    function_4037e0(v36);
                    g70 = &g71;
                }
            }
            int32_t v37 = *(int32_t *)(a1 + 52); // 0x403948
            g114 = 0;
            *(int32_t *)&g69 = v37;
            g95 = *(char *)&g102 != 0 ? g99 : 0;
            v32 = v37;
        }
        int64_t v38 = v32;
        int64_t v39 = v38; // 0x40399e
        if (v32 > g72) {
            int64_t v40 = v38 - (int64_t)g72; // 0x403b60
            function_402ca0((int32_t)v40);
            *(int32_t *)&g69 = 0;
            v39 = v40 & 0xffffffff;
        }
        // 0x4039a4
        v31 = v39;
        if (g73 != 0) {
            // 0x403b80
            function_402dd0();
            v31 = v39;
        }
    }
    int64_t v41 = v31; // 0x4039b5
    if (*(char *)(a1 + 56) != 0) {
        // 0x403bc0
        function_4036c0(v30);
        v41 = v30;
    }
    // 0x4039bb
    g113 = 0;
    if (v21 == 10) {
        // 0x403985
        return 1;
    }
    int64_t v42 = v41; // 0x4039e0
    if ((int32_t)v23 != 0) {
        int64_t v43 = g61;
        int64_t v44 = v43 + 1; // 0x4039e8
        while ((v23 + 0xffffffff & 0xffffffff) + 1 + g61 != v44) {
            // 0x4039e8
            v43 = v44;
            v44 = v43 + 1;
        }
        // 0x4039f8
        v42 = (int64_t)*(char *)v43;
    }
    int64_t v45 = v10; // 0x403840
    int64_t v46 = v42; // 0x403840
    int64_t result; // 0x403840
    int64_t v47; // 0x403840
    while (true) {
      lab_0x4039f8:;
        int64_t v48 = v46;
        int64_t v49; // 0x403840
        int64_t v50 = v49;
        int64_t * v51 = (int64_t *)(v48 + 8);
        uint64_t v52 = *v51; // 0x4039fc
        int64_t * v53 = (int64_t *)(v48 + 16);
        int64_t v54; // 0x403840
        int64_t v55; // 0x403840
        if (v52 >= *v53) {
            // 0x403c48
            v54 = v45;
            v55 = __uflow((struct _IO_FILE *)v48);
        } else {
            int64_t v56 = v52 + 1; // 0x403a0a
            *v51 = v56;
            v54 = v56;
            v55 = (int64_t)*(char *)v52;
        }
        // 0x403a15
        result = 1;
        int64_t v57; // 0x403840
        switch ((int32_t)v57) {
            case 10: {
                return result;
            }
            case 12: {
                uint64_t v58 = *v51; // 0x403be4
                int64_t v59; // 0x403840
                int64_t v60; // 0x403840
                if (v58 >= *v53) {
                    // 0x403c6a
                    v59 = v54;
                    v60 = __uflow((struct _IO_FILE *)v48);
                } else {
                    int64_t v61 = v58 + 1; // 0x403bee
                    *v51 = v61;
                    v59 = v61;
                    v60 = (int64_t)*(char *)v58;
                }
                int64_t c2 = v60;
                v47 = v50;
                v29 = v59;
                if (c2 != 10) {
                    // 0x403c02
                    ungetc((int32_t)c2, (struct _IO_FILE *)c2);
                    v47 = v50;
                    v29 = v59;
                }
                goto lab_0x403b12;
            }
            case -1: {
                goto lab_0x403978;
            }
            default: {
                int64_t v62 = 0x100000000000000 * v55 >> 56; // 0x403a30
                int64_t v63 = function_402fe0(v62); // 0x403a39
                int64_t v64 = v50; // 0x403a45
                if (*(char *)&g102 != 0) {
                    // 0x403ba0
                    v64 = g99;
                    if ((int64_t)g89 > v64) {
                        // 0x403bb2
                        result = 0;
                        return result;
                    }
                }
                int64_t v65 = v63 + 0xffffffff & 0xffffffff; // 0x403a52
                int64_t v66 = v65 + 1 + g61; // 0x403a55
                int64_t v67 = v62; // 0x403a5c
                if ((int32_t)v63 != 0) {
                    int64_t v68 = g61;
                    int64_t v69 = v68 + 1; // 0x403a60
                    while (v69 != v66) {
                        // 0x403a60
                        v68 = v69;
                        v69 = v68 + 1;
                    }
                    // 0x4039f8
                    v67 = (int64_t)*(char *)v68;
                }
                // 0x4039f8
                v49 = v64;
                v45 = v65;
                v46 = v67;
                goto lab_0x4039f8;
            }
        }
    }
    // 0x403985
    return result;
  lab_0x403b12:
    // 0x403b12
    if (g110 != 0) {
        // 0x403b1b
        g109 = 1;
    }
    // 0x403b22
    function_403410(v3, a1 + 48, v29, v47);
    return 1;
  lab_0x403b05:
    // 0x403b05
    v29 = v26;
    if (*(char *)&g40 == 0) {
        // 0x403c30
        *(char *)&g68 = 1;
        function_402ee0();
        // 0x403b22
        int64_t v70; // 0x403840
        function_403410(v3, a1 + 48, v26, v70);
        return 1;
    }
    goto lab_0x403b12;
}
// Address range: 0x403c80 - 0x403d71
int64_t function_403c80(int64_t a1, int64_t a2) {
    // 0x403c80
    bool v1; // 0x403c80
    int64_t v2 = v1 ? -1 : 1; // 0x403c99
    int64_t v3 = (int64_t)&g11; // 0x403c80
    int64_t v4 = a1; // 0x403c80
    int64_t v5 = 2; // 0x403c99
    unsigned char v6 = *(char *)v4; // 0x403c99
    char v7 = *(char *)v3; // 0x403c99
    char v8 = v7; // 0x403c99
    bool v9 = false; // 0x403c99
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    int64_t v11; // 0x403c80
    int64_t v12; // 0x403c80
    int64_t v13; // 0x403c80
    if ((v6 >= v10 && !v9) != v6 < v10) {
        // 0x403d00
        *(int64_t *)(a2 + 8) = a1;
        int64_t v14 = function_4054b0(a1, (int64_t *)"r"); // 0x403d0c
        *(int64_t *)a2 = v14;
        v11 = v14;
        v12 = v14;
        if (v14 != 0) {
            goto lab_0x403ccf;
        } else {
            goto lab_0x403d1c;
        }
    } else {
        char * v15 = dcgettext(NULL, "standard input", 5); // 0x403cb0
        int64_t v16 = g54; // 0x403cb5
        g106 = 1;
        *(int64_t *)(a2 + 8) = (int64_t)v15;
        *(int64_t *)a2 = v16;
        v13 = 5;
        v11 = v16;
        v12 = 0;
        if (g54 == 0) {
            goto lab_0x403d1c;
        } else {
            goto lab_0x403ccf;
        }
    }
  lab_0x403ccf:
    // 0x403ccf
    function_405480(v11, 2, v13);
    *(int32_t *)(a2 + 16) = 0;
    *(char *)(a2 + 57) = 0;
    g75 = &g76;
    return 1;
  lab_0x403d1c:
    // 0x403d1c
    g88 = 1;
    if (*(char *)&g74 != 0) {
        // 0x403d2e
        return 0;
    }
    int64_t v17 = function_408bb0((int32_t)v12, 3, a1); // 0x403d48
    error(0, *__errno_location(), "%s", (char *)v17);
    return 0;
}
// Address range: 0x403d80 - 0x403e3f
int64_t function_403d80(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8);
    int64_t v2 = a1 + 16; // 0x403dae
    int64_t * v3 = (int64_t *)v2;
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    int64_t result; // 0x403d80
    while (true) {
      lab_0x403daa:;
        uint64_t v4 = *v1; // 0x403daa
        int32_t v5; // 0x403d80
        int64_t v6; // 0x403d80
        int64_t v7; // 0x403d80
        if (v4 < *v3) {
            int64_t v8 = v4 + 1; // 0x403d90
            *v1 = v8;
            unsigned char v9 = *(char *)v4; // 0x403d98
            v5 = v9;
            v6 = v8;
            result = 10;
            if (v9 == 10) {
                // break -> 0x403dc1
                break;
            }
        } else {
            int32_t v10 = __uflow(stream); // 0x403db7
            v5 = v10;
            v6 = v7;
            if (v10 == 10) {
                // 0x403dc1
                result = v10;
                return result;
            }
        }
        int64_t v11 = v6;
        v7 = v11;
        switch (v5) {
            case 12: {
                uint64_t v12 = *v1; // 0x403dd0
                int64_t v13; // 0x403d80
                int64_t c; // 0x403d80
                if (v12 >= *v3) {
                    // 0x403e33
                    v13 = v11;
                    c = __uflow(stream);
                } else {
                    int64_t v14 = v12 + 1; // 0x403dda
                    *v1 = v14;
                    v13 = v14;
                    c = (int64_t)*(char *)v12;
                }
                // 0x403de5
                int64_t v15; // 0x403d80
                if (c == 10) {
                    // 0x403dea
                    if (g110 == 0) {
                        // 0x403dfa
                        return function_403410(v2, a1 + 48, v13, v15);
                    }
                    // 0x403df3
                    g109 = 1;
                    // 0x403dfa
                    return function_403410(v2, a1 + 48, v13, v15);
                }
                // 0x403e20
                ungetc((int32_t)c, stream);
                if (g110 == 0) {
                    // 0x403dfa
                    return function_403410(v2, a1 + 48, v13, v15);
                }
                // 0x403df3
                g109 = 1;
                // 0x403dfa
                return function_403410(v2, a1 + 48, v13, v15);
            }
            case -1: {
                // 0x403e10
                return function_4029a0(a1);
            }
            default: {
                goto lab_0x403daa;
            }
        }
    }
    // 0x403dc1
    return result;
}
// Address range: 0x403e40 - 0x404ddb
int64_t function_403e40(int64_t a1, int64_t a2) {
    // 0x403e40
    g103 = &g36;
    int32_t v1; // 0x403e40
    if (((int32_t)&g36 & (int32_t)&g36) == 0 || ((int32_t)&g36 & (int32_t)&g36) < 0) {
        // 0x4041b0
        g41 = 0;
        g110 = 1;
        // 0x4041be
        g103 = g39;
        v1 = g39;
        goto lab_0x403e78;
    } else {
        // 0x403e6b
        v1 = &g36;
        if (g41 == 0) {
            // 0x4041be
            g103 = g39;
            v1 = g39;
            goto lab_0x403e78;
        } else {
            goto lab_0x403e78;
        }
    }
  lab_0x404548:;
    // 0x404548
    int64_t v2; // 0x403e40
    int64_t v3 = v2;
    int64_t v4; // 0x403e40
    int64_t v5 = v4;
    int64_t v6; // 0x403e40
    char v7 = v6; // 0x404548
    *(char *)&g68 = v7;
    int64_t v8 = v5; // 0x404552
    int64_t v9 = v3; // 0x404552
    int64_t v10; // 0x403e40
    int64_t v11; // 0x403e40
    int64_t v12; // 0x403e40
    if (v7 == 0) {
        goto lab_0x404561;
    } else {
        // 0x404554
        v8 = v5;
        v9 = v3;
        if (g41 != 0) {
            // 0x4048b0
            if (g107 != 0) {
                int64_t v13 = (int64_t)g53; // 0x404970
                int64_t * v14 = (int64_t *)(v13 + 40); // 0x404977
                uint64_t v15 = *v14; // 0x404977
                if (v15 >= *(int64_t *)(v13 + 48)) {
                    // 0x404d81
                    __overflow(g53, 12);
                    v12 = 12;
                    v11 = v13;
                } else {
                    // 0x404985
                    *v14 = v15 + 1;
                    *(char *)v15 = 12;
                    v12 = v5;
                    v11 = v13;
                }
            } else {
                int32_t v16 = (int32_t)v10 + 5; // 0x4048bd
                v12 = v5;
                v11 = v3;
                int32_t v17 = v16; // 0x4048c0
                int64_t v18 = v5; // 0x4048c0
                if (v16 != 0) {
                    int64_t v19 = (int64_t)g53;
                    int64_t * v20 = (int64_t *)(v19 + 40); // 0x4048eb
                    uint64_t v21 = *v20; // 0x4048eb
                    int64_t v22; // 0x403e40
                    if (v21 < *(int64_t *)(v19 + 48)) {
                        // 0x4048d0
                        *v20 = v21 + 1;
                        *(char *)v21 = 10;
                        v22 = v18;
                    } else {
                        // 0x4048f5
                        __overflow(g53, 10);
                        v22 = 10;
                    }
                    int32_t v23 = v17 - 1; // 0x4048db
                    v12 = v22;
                    v11 = v19;
                    v17 = v23;
                    v18 = v22;
                    while (v23 != 0) {
                        // 0x4048e4
                        v19 = (int64_t)g53;
                        v20 = (int64_t *)(v19 + 40);
                        v21 = *v20;
                        if (v21 < *(int64_t *)(v19 + 48)) {
                            // 0x4048d0
                            *v20 = v21 + 1;
                            *(char *)v21 = 10;
                            v22 = v18;
                        } else {
                            // 0x4048f5
                            __overflow(g53, 10);
                            v22 = 10;
                        }
                        // 0x4048db
                        v23 = v17 - 1;
                        v12 = v22;
                        v11 = v19;
                        v17 = v23;
                        v18 = v22;
                    }
                }
            }
            goto lab_0x40459a;
        } else {
            goto lab_0x404561;
        }
    }
  lab_0x4043d0:;
    // 0x4043d0
    int64_t v24; // 0x403e40
    int32_t v25 = *(int32_t *)(v24 + 52); // 0x4043d0
    g112 = 0;
    *(int32_t *)&g69 = v25;
    if ((char)v25 == 0) {
        // 0x404760
        function_403d80(v24);
    }
    unsigned char v26 = *(char *)&g68; // 0x4043f1
    int32_t * v27; // 0x404459
    int32_t v28 = *v27 - 1; // 0x4043f9
    int64_t v29; // 0x403e40
    int64_t v30 = v29 & 0xffffffff | (int64_t)v26; // 0x4043fc
    *v27 = v28;
    if (v28 < 1) {
        // 0x404730
        if ((int32_t)function_4026b0() == 0) {
            // break -> 0x40473d
            goto lab_0x40473d;
        }
    }
    int64_t v31 = v24; // 0x404411
    int64_t v32 = v30; // 0x404411
    int64_t v33; // 0x403e40
    int64_t v34; // 0x403e40
    int64_t v35; // 0x403e40
    if (*(char *)&g115 == 0) {
        goto lab_0x404438;
    } else {
        int32_t v36 = *(int32_t *)(v24 + 16); // 0x404413
        v31 = v24;
        v32 = v30;
        if (v36 == 0) {
            goto lab_0x404438;
        } else {
            // 0x40441a
            v35 = v24;
            v34 = v30;
            if (g113 != 0) {
                goto lab_0x40448b;
            } else {
                // 0x404423
                v33 = v30;
                if (v36 == 3) {
                    goto lab_0x404780;
                } else {
                    // 0x40442c
                    v33 = v30;
                    if (v36 != 2 || g112 == 0) {
                        goto lab_0x404438;
                    } else {
                        goto lab_0x404780;
                    }
                }
            }
        }
    }
  lab_0x404438:;
    int64_t v37 = v32;
    int64_t v38 = v31;
    if (g73 != 0) {
        // 0x404441
        g70 = &g71;
    }
    // 0x404448
    int64_t v39; // 0x403e40
    int64_t v40 = v39 + 1; // 0x404448
    int64_t v41 = v24 + 64; // 0x404457
    int64_t v42 = v38; // 0x404457
    int64_t v43 = v37; // 0x404457
    int64_t v44 = v40 & 0xffffffff; // 0x404457
    int64_t v45; // 0x403e40
    int64_t v46; // 0x403e40
    int64_t v47; // 0x403e40
    int64_t v48; // 0x403e40
    int64_t v49; // 0x403e40
    int64_t v50; // 0x403e40
    int64_t v51; // 0x40437d
    if (g32 < (int32_t)v40) {
        // 0x404498
        v45 = v37;
        v48 = v47;
        v50 = v51;
        v49 = v38;
        v46 = v37;
        if (*(char *)&g68 == 0) {
            goto lab_0x4044c4;
        } else {
            goto lab_0x4044a1;
        }
    }
    goto lab_0x404459;
  lab_0x40448b:
    // 0x40448b
    g114 = 1;
    v31 = v35;
    v32 = v34;
    goto lab_0x404438;
  lab_0x404780:
    // 0x404780
    function_4037e0(v24);
    v31 = v24;
    v32 = v33;
    goto lab_0x404438;
  lab_0x4044c4:;
    int64_t v54 = v48; // 0x4044cb
    int64_t v55 = v50; // 0x4044cb
    int64_t v56 = v49; // 0x4044cb
    int64_t v57 = v46; // 0x4044cb
    int64_t v58 = v48; // 0x4044cb
    int64_t v59 = v50; // 0x4044cb
    int64_t v60 = v49; // 0x4044cb
    int64_t v61 = v46; // 0x4044cb
    if ((int32_t)function_4026b0() == 0) {
        goto lab_0x404746;
    } else {
        goto lab_0x4044d1;
    }
  lab_0x404746:;
    int64_t v62 = v61;
    int64_t v63 = v60;
    int64_t v64 = v59;
    int64_t v65 = v58;
    v54 = v65;
    v55 = v64;
    v56 = v63;
    v57 = v62;
    if (g41 == 0) {
        // break -> 0x404746
        goto lab_0x404746_2;
    }
    goto lab_0x4044d1;
  lab_0x4044d1:;
    int64_t v66 = v57;
    int64_t v67 = v55;
    int64_t v68 = v54;
    int64_t v69 = v68; // 0x4044d8
    int64_t v70 = v67; // 0x4044d8
    int64_t v71 = v56; // 0x4044d8
    if (g77 != 0 && (char)v66 != 0) {
        int64_t v72 = (int64_t)g53; // 0x4044df
        int64_t * v73 = (int64_t *)(v72 + 40); // 0x4044e6
        uint64_t v74 = *v73; // 0x4044e6
        int64_t v75; // 0x403e40
        if (v74 >= *(int64_t *)(v72 + 48)) {
            // 0x404880
            __overflow(g53, 10);
            v75 = 10;
        } else {
            // 0x4044f4
            *v73 = v74 + 1;
            *(char *)v74 = 10;
            v75 = v67;
        }
        // 0x4044ff
        v69 = v68 + 0xffffffff & 0xffffffff;
        v70 = v75;
        v71 = v72;
    }
    int64_t v76 = v71;
    int64_t v77 = v70;
    int64_t v78 = v69;
    int32_t v79 = v78;
    int32_t v80 = v79; // 0x404504
    int64_t v81 = v78; // 0x404504
    int64_t v82 = v77; // 0x404504
    int64_t v83 = v76; // 0x404504
    int64_t v84 = v66; // 0x404504
    if (v79 >= 0 != v79 != 0) {
        goto lab_0x40450a;
    }
    int64_t v85 = v66; // 0x404377
    int64_t v86 = v76; // 0x404377
    int64_t v87 = v78; // 0x404377
    v10 = v78;
    v4 = v77;
    v2 = v76;
    v6 = v66;
    if ((int32_t)function_4026b0() == 0) {
        goto lab_0x404548;
    }
    goto lab_0x40437d;
  lab_0x4044a1:;
    int64_t v88 = (int64_t)g53; // 0x4044a1
    int64_t * v89 = (int64_t *)(v88 + 40); // 0x4044a8
    uint64_t v90 = *v89; // 0x4044a8
    if (v90 >= *(int64_t *)(v88 + 48)) {
        // 0x404790
        struct _IO_FILE * v91; // 0x4044a1
        __overflow(v91, 10);
    } else {
        // 0x4044b6
        *v89 = v90 + 1;
        *(char *)v90 = 10;
    }
    // 0x4044c1
    v48 = v47 + 0xffffffff & 0xffffffff;
    v50 = v51;
    v49 = v88;
    v46 = v45;
    goto lab_0x4044c4;
  lab_0x403e78:
    // 0x403e78
    if (g77 != 0) {
        int32_t v92 = v1; // 0x403e81
        g103 = v92 + (int32_t)(v92 < 0) >> 1;
    }
    int64_t v93 = a1 & 0xffffffff; // 0x403e48
    int32_t v94 = a1; // 0x403e96
    char v95; // 0x403e40
    int64_t v96; // 0x403e40
    if (v94 != 0) {
        char v97 = *(char *)&g115; // 0x404220
        if (v97 == 0) {
            // 0x404dd0
            v95 = 0;
            v96 = g32;
        } else {
            // 0x40422d
            g32 = v94;
            v95 = v97;
            v96 = v93;
        }
    } else {
        // 0x403e9f
        *(char *)&g115 = 0;
        v95 = 0;
        v96 = g32;
    }
    int64_t v98 = v96;
    char v99 = v95; // 0x403f64
    if (*(char *)&g40 != 0) {
        // 0x403eb5
        g104 = 1;
    }
    // 0x403ebc
    int64_t v100; // 0x403e40
    if ((int32_t)v98 < 2) {
        // 0x404918
        *(char *)&g40 = 0;
        v100 = g72;
    } else {
        // 0x403ecc
        int64_t v101; // 0x403e40
        if (g73 != 0) {
            // 0x4041d0
            v101 = g72;
            if (g101 == 0 == g72 == 1) {
                // 0x4041e7
                v101 = 1;
                if (*(char *)&g21 == 9) {
                    // 0x4041f7
                    *(int64_t *)&g21 = (int64_t)&g14;
                    v101 = 1;
                }
            }
        } else {
            // 0x403ed9
            g72 = 1;
            int64_t v102 = g101 != 0 ? (int64_t)&g1 : (int64_t)&g14; // 0x403eef
            g73 = 1;
            *(int64_t *)&g21 = v102;
            v101 = 1;
        }
        // 0x403f06
        *(char *)&g102 = 1;
        g97 = 1;
        v100 = v101;
    }
    // 0x403f14
    if (g101 != 0) {
        // 0x403f18
        *(char *)&g102 = 0;
    }
    unsigned char v103 = *(char *)&g82; // 0x403f1f
    int64_t v104; // 0x403e40
    if (v103 == 0) {
        // 0x404210
        v104 = 0;
        goto lab_0x403f77;
    } else {
        // 0x403f2f
        g27 = g25;
        int64_t v105 = &g24; // 0x403f4b
        if (*(char *)&g29 == 9) {
            int32_t v106 = *(int32_t *)&g23; // 0x403f42
            uint32_t v107 = (v106 >> 31) / 0x20000000 + v106;
            v105 = v107 + 8 - v107 % 8;
        }
        // 0x403f64
        g81 = v105;
        v104 = v105;
        if (v99 == 0) {
            // 0x404210
            v104 = 0;
            goto lab_0x403f77;
        } else {
            goto lab_0x403f77;
        }
    }
  lab_0x403f77:;
    int64_t v108 = (0x100000000 * v100 >> 32) * (0x100000000 * v98 - 0x100000000 >> 32); // 0x403f7a
    int32_t v109 = g38 - (int32_t)v104; // 0x403f89
    int32_t v110 = v108 > 0x7fffffff ? 0x7fffffff : v108; // 0x403f8b
    int32_t v111 = v109 - v110; // 0x403f8b
    int64_t result; // 0x403e40
    int64_t v112; // 0x403e40
    int64_t v113; // 0x403e40
    int64_t v114; // 0x403e40
    if (((v111 ^ v109) & (v109 ^ v110)) < 0) {
        // 0x404d95
        g99 = 0;
        goto lab_0x404d9f;
    } else {
        int32_t v115 = (0x100000000 * (int64_t)(v111 >> 31) | (int64_t)v111) / v98; // 0x403f96
        g99 = v115;
        if (v115 < 1) {
            goto lab_0x404d9f;
        } else {
            if (v103 != 0) {
                // 0x404930
                free((int64_t *)g80);
                int64_t v116 = *(int32_t *)&g23 < 12 ? 12 : (int64_t)&g24; // 0x404952
                g80 = (char *)function_409300(v116);
            }
            // 0x403fad
            free((int64_t *)g61);
            int32_t v117 = *(int32_t *)&g35; // 0x403fb9
            int64_t v118 = function_409300(v117 < 8 == (7 - v117 & v117) < 0 ? (int64_t)v117 : 8); // 0x403fcf
            g75 = 0;
            g61 = v118;
            free((int64_t *)g122);
            int64_t v119 = 64 * (int64_t)g32; // 0x404002
            int64_t v120 = v119; // 0x404009
            if (g32 < 0) {
                // 0x404dc1
                function_409550(v120);
                // UNREACHABLE
            }
            int64_t v121 = function_409300(v119); // 0x404018
            g122 = v121;
            int64_t v122; // 0x403e40
            int64_t v123; // 0x403e40
            if (*(char *)&g115 == 0) {
                int64_t * v124; // 0x403e40
                int64_t * v125; // 0x403e40
                int64_t v126; // 0x403e40
                if (v94 < 1) {
                    char * v127 = dcgettext(NULL, "standard input", 5); // 0x404c0c
                    *(char *)(v121 + 57) = 0;
                    int64_t * v128 = (int64_t *)(v121 + 8);
                    *v128 = (int64_t)v127;
                    *(int32_t *)(v121 + 16) = 0;
                    int64_t * v129 = (int64_t *)v121;
                    *v129 = (int64_t)g54;
                    g106 = 1;
                    g75 = &g76;
                    function_402ab0((int64_t *)&g2, 0xffffffff);
                    *(int32_t *)(v121 + 44) = 0;
                    v125 = v129;
                    v124 = v128;
                    v126 = (int64_t)&g2;
                } else {
                    int64_t v130 = function_403c80((int64_t)v103, v121); // 0x40424f
                    result = v130;
                    if ((char)v130 == 0) {
                        // 0x40425c
                        return result;
                    }
                    int64_t * stream = (int64_t *)v121;
                    function_402ab0(stream, (int64_t)fileno((struct _IO_FILE *)*stream));
                    *(int32_t *)(v121 + 44) = 0;
                    v125 = stream;
                    v124 = (int64_t *)(v121 + 8);
                    v126 = v121;
                }
                int64_t v131 = v126;
                uint32_t v132 = g32; // 0x404c4f
                int64_t v133 = *v125; // 0x404c5d
                v122 = v133;
                v114 = 1;
                v123 = v131;
                if (v132 != 1) {
                    int64_t v134 = (64 * (int64_t)v132 + 0x3fffffff80 & 0x3fffffffc0) + 128; // 0x404c71
                    int64_t v135 = v121 + 64;
                    *(int64_t *)(v135 + 8) = *v124;
                    int64_t v136 = v135 + 64; // 0x404c84
                    *(int64_t *)v135 = v133;
                    *(int32_t *)(v135 + 16) = 0;
                    *(char *)(v135 + 57) = 0;
                    *(int32_t *)(v135 + 44) = 0;
                    v122 = v133;
                    v114 = v134;
                    v123 = v131;
                    while (v136 != v134 + v121) {
                        // 0x404c80
                        v135 = v136;
                        *(int64_t *)(v135 + 8) = *v124;
                        v136 = v135 + 64;
                        *(int64_t *)v135 = v133;
                        *(int32_t *)(v135 + 16) = 0;
                        *(char *)(v135 + 57) = 0;
                        *(int32_t *)(v135 + 44) = 0;
                        v122 = v133;
                        v114 = v134;
                        v123 = v131;
                    }
                }
            } else {
                int32_t v137; // 0x403e40
                if (v94 != 0) {
                    int64_t v138 = a2 + 8 + (8 * v93 + 0x7fffffff8 & 0x7fffffff8); // 0x40403e
                    int64_t v139 = v121;
                    int64_t v140 = a2; // 0x403e40
                    int64_t v141 = v140 + 8;
                    int32_t v142; // 0x404068
                    while ((char)function_403c80(*(int64_t *)v140, v139) == 0) {
                        // 0x404064
                        v142 = g32 - 1;
                        g32 = v142;
                        v140 = v141;
                        v137 = v142;
                        if (v141 == v138) {
                            goto lab_0x404074;
                        }
                        v141 = v140 + 8;
                    }
                    int64_t v143 = v139 + 64; // 0x404053
                    while (v141 != v138) {
                        // 0x404055
                        v139 = v143;
                        v140 = v141;
                        v141 = v140 + 8;
                        while ((char)function_403c80(*(int64_t *)v140, v139) == 0) {
                            // 0x404064
                            v142 = g32 - 1;
                            g32 = v142;
                            v140 = v141;
                            v137 = v142;
                            if (v141 == v138) {
                                goto lab_0x404074;
                            }
                            v141 = v140 + 8;
                        }
                        // 0x404048
                        v143 = v139 + 64;
                    }
                }
                // 0x404074
                v137 = g32;
              lab_0x404074:
                // 0x404074
                if (v137 == 0) {
                    // 0x40425c
                    return 0;
                }
                // 0x404082
                function_402ab0((int64_t *)&g2, 0xffffffff);
                v122 = v98;
                v114 = 0xffffffff;
                v123 = (int64_t)&g2;
            }
            int64_t v144 = v123;
            v112 = v122;
            g86 = g75;
            v113 = v144;
            if (*(char *)&g40 != 0) {
                int64_t v145 = (int64_t)g32 * (int64_t)g103; // 0x404af6
                if (v145 > 0x7fffffff) {
                    // 0x404d90
                    function_4027f0(v144);
                    // 0x404d95
                    g99 = 0;
                    goto lab_0x404d9f;
                } else {
                    int32_t v146 = v145; // 0x404b03
                    int32_t v147 = v146 + 1; // 0x404b06
                    if ((v147 & (v146 ^ -0x80000000)) < 0) {
                        // 0x404d90
                        function_4027f0(v144);
                        // 0x404d95
                        g99 = 0;
                        goto lab_0x404d9f;
                    } else {
                        int32_t v148 = g99; // 0x404b10
                        if ((v148 + 1 & (v148 ^ -0x80000000)) < 0) {
                            // 0x404d90
                            function_4027f0(v144);
                            // 0x404d95
                            g99 = 0;
                            goto lab_0x404d9f;
                        } else {
                            int64_t v149 = 0x100000000 * v145;
                            uint64_t v150 = v149 >> 32; // 0x404b1f
                            if (v150 * 0x100000000 * (int64_t)&g100 / 0x100000000 > 0x7fffffff) {
                                // 0x404d90
                                function_4027f0(v144);
                                // 0x404d95
                                g99 = 0;
                                goto lab_0x404d9f;
                            } else {
                                // 0x404b28
                                free((int64_t *)g117);
                                int64_t v151 = 0x100000000 * (int64_t)v147;
                                int64_t v152 = v151 >> 30; // 0x404b41
                                v120 = v152;
                                if (v151 < 0) {
                                    // 0x404dc1
                                    function_409550(v120);
                                    // UNREACHABLE
                                }
                                // 0x404b4e
                                v120 = v152;
                                if (v147 <= -1) {
                                    // 0x404dc1
                                    function_409550(v120);
                                    // UNREACHABLE
                                }
                                // 0x404b57
                                g117 = function_409300(v152);
                                free((int64_t *)g116);
                                int64_t v153 = v149 >> 30; // 0x404b7c
                                v120 = v153;
                                if (v149 < 0) {
                                    // 0x404dc1
                                    function_409550(v120);
                                    // UNREACHABLE
                                }
                                // 0x404b89
                                v120 = v153;
                                if (v150 >= 0x4000000000000000) {
                                    // 0x404dc1
                                    function_409550(v120);
                                    // UNREACHABLE
                                }
                                int64_t v154 = function_409300(v153); // 0x404b92
                                uint64_t v155 = v150 * 0x100000000 * 0x100000000 * (int64_t)&g100 / 0x100000000 / 0x100000000 & -4; // 0x404b9e
                                g116 = v154;
                                free((int64_t *)g121);
                                uint128_t v156 = (int128_t)v155 * (int128_t)(int64_t)&g74; // 0x404bbb
                                int64_t v157 = v156; // 0x404bbb
                                if (v157 < 0 || v156 > 0xffffffffffffffff) {
                                    // 0x404dc1
                                    function_409550((int64_t)&g74);
                                    // UNREACHABLE
                                }
                                // 0x404bd6
                                g121 = function_409300(v157);
                                g118 = v155 * (int64_t)&g74;
                                v113 = v157;
                                goto lab_0x4040aa;
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4040aa;
            }
        }
    }
  lab_0x404d9f:
    // 0x404d9f
    error(1, (int32_t)"page width too narrow" ^ (int32_t)"page width too narrow", dcgettext(NULL, "page width too narrow", 5));
    // 0x404dc1
    function_409550(1);
    // UNREACHABLE
  lab_0x4040aa:;
    int64_t v158 = g87; // 0x4040aa
    int64_t v159 = v112; // 0x4040b5
    int32_t v160 = 1; // 0x4040b5
    int64_t v161 = v114; // 0x4040b5
    int64_t v162 = v113; // 0x4040b5
    if (g87 >= 2) {
        int64_t v163 = 1; // 0x404ac8
        int64_t v164 = g32; // 0x4049c4
        int32_t v165 = g103; // 0x4049cb
        int64_t v166 = g122; // 0x4049cb
        int64_t v167 = v161; // 0x4049cb
        int64_t v168 = v162; // 0x4049cb
        int64_t v169 = v164; // 0x4049cb
        int64_t v170 = g122; // 0x4049cb
        int64_t v171 = v161; // 0x4049cb
        int64_t v172 = v162; // 0x4049cb
        int64_t v173 = v164; // 0x4049cb
        int32_t v174; // 0x403e40
        int64_t v175; // 0x403e40
        int64_t v176; // 0x403e40
        int64_t v177; // 0x403e40
        int64_t v178; // 0x403e40
        int64_t v179; // 0x403e40
        int64_t v180; // 0x403e40
        int64_t v181; // 0x403e40
        int64_t v182; // 0x403e40
        int64_t v183; // 0x403e40
        int64_t v184; // 0x403e40
        int64_t v185; // 0x403e40
        int64_t v186; // 0x404a04
        int64_t v187; // 0x404a10
        int64_t v188; // 0x404a17
        if (g103 >= 2) {
            v180 = v166;
            v176 = v169;
            v174 = v165;
            v187 = v166;
            v183 = v167;
            v182 = v168;
            v178 = v169;
            if ((int32_t)v169 >= 1) {
                v177 = v176;
                v179 = 1;
                v181 = v180;
                v184 = v179 + 1 & 0xffffffff;
                v185 = v181 + 64;
                while (*(int32_t *)(v181 + 16) != 0) {
                    // 0x4049e0
                    if (v184 > v177) {
                        // break (via goto) -> 0x404a10
                        goto lab_0x404a10;
                    }
                    v179 = v184;
                    v181 = v185;
                    v184 = v179 + 1 & 0xffffffff;
                    v185 = v181 + 64;
                }
                // 0x4049f3
                function_403490(v181, v179);
                v186 = g32;
                while (v184 <= v186) {
                    // 0x4049ec
                    v177 = v186;
                    v179 = v184;
                    v181 = v185;
                    v184 = v179 + 1 & 0xffffffff;
                    v185 = v181 + 64;
                    while (*(int32_t *)(v181 + 16) != 0) {
                        // 0x4049e0
                        if (v184 > v177) {
                            // break (via goto) -> 0x404a10
                            goto lab_0x404a10;
                        }
                        v179 = v184;
                        v181 = v185;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                    }
                    // 0x4049f3
                    function_403490(v181, v179);
                    v186 = g32;
                }
                // 0x404a10
                v187 = g122;
                v174 = g103;
                v183 = v179;
                v182 = v181;
                v178 = v186;
            }
            // 0x404a17
            v188 = 2;
            v165 = v174;
            v166 = v187;
            v167 = v183;
            v168 = v182;
            v169 = v178;
            v175 = v188 & 0xffffffff;
            v170 = v187;
            v171 = v183;
            v172 = v182;
            v173 = v178;
            while (v174 > (int32_t)v188) {
                // 0x4049d0
                v180 = v166;
                v176 = v169;
                v174 = v165;
                v187 = v166;
                v183 = v167;
                v182 = v168;
                v178 = v169;
                if ((int32_t)v169 >= 1) {
                    v177 = v176;
                    v179 = 1;
                    v181 = v180;
                    v184 = v179 + 1 & 0xffffffff;
                    v185 = v181 + 64;
                    while (*(int32_t *)(v181 + 16) != 0) {
                        // 0x4049e0
                        if (v184 > v177) {
                            // break (via goto) -> 0x404a10
                            goto lab_0x404a10;
                        }
                        v179 = v184;
                        v181 = v185;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                    }
                    // 0x4049f3
                    function_403490(v181, v179);
                    v186 = g32;
                    while (v184 <= v186) {
                        // 0x4049ec
                        v177 = v186;
                        v179 = v184;
                        v181 = v185;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                        while (*(int32_t *)(v181 + 16) != 0) {
                            // 0x4049e0
                            if (v184 > v177) {
                                // break (via goto) -> 0x404a10
                                goto lab_0x404a10;
                            }
                            v179 = v184;
                            v181 = v185;
                            v184 = v179 + 1 & 0xffffffff;
                            v185 = v181 + 64;
                        }
                        // 0x4049f3
                        function_403490(v181, v179);
                        v186 = g32;
                    }
                    // 0x404a10
                    v187 = g122;
                    v174 = g103;
                    v183 = v179;
                    v182 = v181;
                    v178 = v186;
                }
                // 0x404a17
                v188 = v175 + 1;
                v165 = v174;
                v166 = v187;
                v167 = v183;
                v168 = v182;
                v169 = v178;
                v175 = v188 & 0xffffffff;
                v170 = v187;
                v171 = v183;
                v172 = v182;
                v173 = v178;
            }
        }
        // 0x404a24
        *(char *)&g60 = 1;
        int64_t v189 = v170; // 0x404a2e
        int64_t v190 = v173; // 0x404a2e
        int64_t v191 = v171; // 0x404a2e
        int64_t v192 = v172; // 0x404a2e
        int64_t v193; // 0x403e40
        int64_t v194; // 0x403e40
        int64_t v195; // 0x403e40
        int64_t v196; // 0x403e40
        int64_t v197; // 0x403e40
        int64_t v198; // 0x403e40
        int64_t v199; // 0x403e40
        int64_t v200; // 0x403e40
        int64_t v201; // 0x404a64
        int32_t * v202; // 0x404a98
        int64_t v203; // 0x404aa5
        if ((int32_t)v173 >= 1) {
            v193 = v190;
            v195 = 1;
            v196 = v189;
            v199 = v195 + 1 & 0xffffffff;
            v200 = v196 + 64;
            while (*(int32_t *)(v196 + 16) != 0) {
                // 0x404a40
                v194 = v193;
                if (v199 > v193) {
                    // break (via goto) -> 0x404a70
                    goto lab_0x404a70;
                }
                v195 = v199;
                v196 = v200;
                v199 = v195 + 1 & 0xffffffff;
                v200 = v196 + 64;
            }
            // 0x404a53
            function_403490(v196, v195);
            v201 = g32;
            v194 = v201;
            while (v199 <= v201) {
                // 0x404a4c
                v193 = v201;
                v195 = v199;
                v196 = v200;
                v199 = v195 + 1 & 0xffffffff;
                v200 = v196 + 64;
                while (*(int32_t *)(v196 + 16) != 0) {
                    // 0x404a40
                    v194 = v193;
                    if (v199 > v193) {
                        // break (via goto) -> 0x404a70
                        goto lab_0x404a70;
                    }
                    v195 = v199;
                    v196 = v200;
                    v199 = v195 + 1 & 0xffffffff;
                    v200 = v196 + 64;
                }
                // 0x404a53
                function_403490(v196, v195);
                v201 = g32;
                v194 = v201;
            }
            // 0x404a70
            v197 = v196;
            v198 = v195;
            v191 = v198;
            v192 = v197;
            if (*(char *)&g40 != 0) {
                // 0x404a79
                v191 = v198;
                v192 = v197;
                if ((int32_t)v194 >= 1) {
                    // 0x404a85
                    v203 = g122;
                    v202 = (int32_t *)(v203 + 16);
                    if (*v202 != 3) {
                        // 0x404a9e
                        *v202 = 2;
                    }
                    // 0x404aa5
                    v203 += 64;
                    v191 = v198;
                    v192 = v197;
                    while (v203 != g122 + 64 * (int64_t)&g32) {
                        // 0x404a98
                        v202 = (int32_t *)(v203 + 16);
                        if (*v202 != 3) {
                            // 0x404a9e
                            *v202 = 2;
                        }
                        // 0x404aa5
                        v203 += 64;
                        v191 = v198;
                        v192 = v197;
                    }
                }
            }
        }
        int64_t v204 = v192;
        int64_t v205 = v191;
        function_402710(v204, v205);
        *(char *)&g60 = 0;
        int64_t v206; // 0x403e40
        while (g86 >= 1) {
            // 0x404ac8
            v163++;
            v161 = v205;
            v162 = v204;
            v206 = v112;
            if (v163 == v158) {
                goto lab_0x404ad5;
            }
            v164 = g32;
            v165 = g103;
            v166 = g122;
            v167 = v161;
            v168 = v162;
            v169 = v164;
            v170 = g122;
            v171 = v161;
            v172 = v162;
            v173 = v164;
            if (g103 >= 2) {
                v180 = v166;
                v176 = v169;
                v174 = v165;
                v187 = v166;
                v183 = v167;
                v182 = v168;
                v178 = v169;
                if ((int32_t)v169 >= 1) {
                    v177 = v176;
                    v179 = 1;
                    v181 = v180;
                    v184 = v179 + 1 & 0xffffffff;
                    v185 = v181 + 64;
                    while (*(int32_t *)(v181 + 16) != 0) {
                        // 0x4049e0
                        if (v184 > v177) {
                            // break (via goto) -> 0x404a10
                            goto lab_0x404a10;
                        }
                        v179 = v184;
                        v181 = v185;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                    }
                    // 0x4049f3
                    function_403490(v181, v179);
                    v186 = g32;
                    while (v184 <= v186) {
                        // 0x4049ec
                        v177 = v186;
                        v179 = v184;
                        v181 = v185;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                        while (*(int32_t *)(v181 + 16) != 0) {
                            // 0x4049e0
                            if (v184 > v177) {
                                // break (via goto) -> 0x404a10
                                goto lab_0x404a10;
                            }
                            v179 = v184;
                            v181 = v185;
                            v184 = v179 + 1 & 0xffffffff;
                            v185 = v181 + 64;
                        }
                        // 0x4049f3
                        function_403490(v181, v179);
                        v186 = g32;
                    }
                    // 0x404a10
                    v187 = g122;
                    v174 = g103;
                    v183 = v179;
                    v182 = v181;
                    v178 = v186;
                }
                // 0x404a17
                v188 = 2;
                v165 = v174;
                v166 = v187;
                v167 = v183;
                v168 = v182;
                v169 = v178;
                v175 = v188 & 0xffffffff;
                v170 = v187;
                v171 = v183;
                v172 = v182;
                v173 = v178;
                while (v174 > (int32_t)v188) {
                    // 0x4049d0
                    v180 = v166;
                    v176 = v169;
                    v174 = v165;
                    v187 = v166;
                    v183 = v167;
                    v182 = v168;
                    v178 = v169;
                    if ((int32_t)v169 >= 1) {
                        v177 = v176;
                        v179 = 1;
                        v181 = v180;
                        v184 = v179 + 1 & 0xffffffff;
                        v185 = v181 + 64;
                        while (*(int32_t *)(v181 + 16) != 0) {
                            // 0x4049e0
                            if (v184 > v177) {
                                // break (via goto) -> 0x404a10
                                goto lab_0x404a10;
                            }
                            v179 = v184;
                            v181 = v185;
                            v184 = v179 + 1 & 0xffffffff;
                            v185 = v181 + 64;
                        }
                        // 0x4049f3
                        function_403490(v181, v179);
                        v186 = g32;
                        while (v184 <= v186) {
                            // 0x4049ec
                            v177 = v186;
                            v179 = v184;
                            v181 = v185;
                            v184 = v179 + 1 & 0xffffffff;
                            v185 = v181 + 64;
                            while (*(int32_t *)(v181 + 16) != 0) {
                                // 0x4049e0
                                if (v184 > v177) {
                                    // break (via goto) -> 0x404a10
                                    goto lab_0x404a10;
                                }
                                v179 = v184;
                                v181 = v185;
                                v184 = v179 + 1 & 0xffffffff;
                                v185 = v181 + 64;
                            }
                            // 0x4049f3
                            function_403490(v181, v179);
                            v186 = g32;
                        }
                        // 0x404a10
                        v187 = g122;
                        v174 = g103;
                        v183 = v179;
                        v182 = v181;
                        v178 = v186;
                    }
                    // 0x404a17
                    v188 = v175 + 1;
                    v165 = v174;
                    v166 = v187;
                    v167 = v183;
                    v168 = v182;
                    v169 = v178;
                    v175 = v188 & 0xffffffff;
                    v170 = v187;
                    v171 = v183;
                    v172 = v182;
                    v173 = v178;
                }
            }
            // 0x404a24
            *(char *)&g60 = 1;
            v189 = v170;
            v190 = v173;
            v191 = v171;
            v192 = v172;
            if ((int32_t)v173 >= 1) {
                v193 = v190;
                v195 = 1;
                v196 = v189;
                v199 = v195 + 1 & 0xffffffff;
                v200 = v196 + 64;
                while (*(int32_t *)(v196 + 16) != 0) {
                    // 0x404a40
                    v194 = v193;
                    if (v199 > v193) {
                        // break (via goto) -> 0x404a70
                        goto lab_0x404a70;
                    }
                    v195 = v199;
                    v196 = v200;
                    v199 = v195 + 1 & 0xffffffff;
                    v200 = v196 + 64;
                }
                // 0x404a53
                function_403490(v196, v195);
                v201 = g32;
                v194 = v201;
                while (v199 <= v201) {
                    // 0x404a4c
                    v193 = v201;
                    v195 = v199;
                    v196 = v200;
                    v199 = v195 + 1 & 0xffffffff;
                    v200 = v196 + 64;
                    while (*(int32_t *)(v196 + 16) != 0) {
                        // 0x404a40
                        v194 = v193;
                        if (v199 > v193) {
                            // break (via goto) -> 0x404a70
                            goto lab_0x404a70;
                        }
                        v195 = v199;
                        v196 = v200;
                        v199 = v195 + 1 & 0xffffffff;
                        v200 = v196 + 64;
                    }
                    // 0x404a53
                    function_403490(v196, v195);
                    v201 = g32;
                    v194 = v201;
                }
                // 0x404a70
                v197 = v196;
                v198 = v195;
                v191 = v198;
                v192 = v197;
                if (*(char *)&g40 != 0) {
                    // 0x404a79
                    v191 = v198;
                    v192 = v197;
                    if ((int32_t)v194 >= 1) {
                        // 0x404a85
                        v203 = g122;
                        v202 = (int32_t *)(v203 + 16);
                        if (*v202 != 3) {
                            // 0x404a9e
                            *v202 = 2;
                        }
                        // 0x404aa5
                        v203 += 64;
                        v191 = v198;
                        v192 = v197;
                        while (v203 != g122 + 64 * (int64_t)&g32) {
                            // 0x404a98
                            v202 = (int32_t *)(v203 + 16);
                            if (*v202 != 3) {
                                // 0x404a9e
                                *v202 = 2;
                            }
                            // 0x404aa5
                            v203 += 64;
                            v191 = v198;
                            v192 = v197;
                        }
                    }
                }
            }
            // 0x404aae
            v204 = v192;
            v205 = v191;
            function_402710(v204, v205);
            *(char *)&g60 = 0;
        }
        // 0x404d08
        error(0, (int32_t)"starting page number %lu exceeds page count %lu" ^ (int32_t)"starting page number %lu exceeds page count %lu", dcgettext(NULL, "starting page number %lu exceeds page count %lu", 5));
        result = g86;
        v206 = v158;
        if (g86 < 1) {
            // 0x40425c
            return result;
        }
      lab_0x404ad5:
        // 0x404ad5
        v159 = v206;
        v160 = g87;
    }
    int64_t v207 = v159;
    g85 = v160;
    char v208 = *(char *)&g102; // 0x4040c6
    int32_t v209 = 0; // 0x4040d9
    if (v208 != 0) {
        int32_t v210 = g99 + g94; // 0x4040e2
        v209 = v210;
        if (!((*(char *)&g115 == 0 | *(char *)&g82 == 0))) {
            // 0x404cdd
            v209 = g81 + v210;
        }
    }
    uint32_t v211 = g72; // 0x4040f2
    int64_t v212 = g122; // 0x4040f9
    int32_t v213 = g32; // 0x404100
    char v214 = *(char *)&g40; // 0x404107
    int64_t v215 = v211 + g94; // 0x40410f
    int32_t v216; // 0x403e40
    int64_t v217; // 0x403e40
    char v218; // 0x403e40
    int64_t v219; // 0x403e40
    int64_t v220; // 0x403e40
    if (v213 < 2) {
        // 0x404d70
        v217 = v207;
        v219 = v212;
        v216 = 1;
        v220 = v215;
        v218 = *(char *)&g82;
    } else {
        int64_t v221 = v211; // 0x4040f2
        char v222 = *(char *)&g82; // 0x40412d
        int64_t v223 = g99; // 0x40413c
        int64_t v224 = (int64_t)(*(char *)&g115 ^ 1); // 0x404143
        int64_t v225 = v212; // 0x404147
        int64_t v226 = 1; // 0x404147
        int64_t v227 = v215; // 0x404147
        int64_t v228 = v209; // 0x404147
        int64_t v229; // 0x403e40
        int64_t v230; // 0x403e40
        while (true) {
            int64_t v231 = v228;
            int64_t v232 = v226;
            int64_t v233 = v225;
            int64_t * v234 = (int64_t *)(v233 + 32);
            if (v214 != 0) {
                // 0x404150
                *v234 = 0x402790;
                *(int64_t *)(v233 + 24) = 0x403280;
            } else {
                // 0x40419c
                *v234 = 0x4031e0;
                *(int64_t *)(v233 + 24) = 0x403840;
            }
            // 0x404160
            v229 = v222 == 0 ? 0 : (int64_t)(v232 == 1) | v224;
            *(char *)(v233 + 56) = (char)v229;
            *(int32_t *)(v233 + 52) = (int32_t)v227;
            int64_t v235; // 0x403e40
            int64_t v236; // 0x403e40
            int64_t v237; // 0x403e40
            if (v208 == 0) {
                int64_t v238 = v232 + 1; // 0x404270
                v236 = v238;
                v237 = 0;
                v235 = 0;
                v230 = 0;
                if (v213 == (int32_t)v238) {
                    // break -> 0x404285
                    break;
                }
            } else {
                int64_t v239 = v231 + v221; // 0x40417f
                int64_t v240 = v239 & 0xffffffff; // 0x40417f
                int64_t v241 = v232 + 1; // 0x404183
                v236 = v241;
                v237 = v240;
                v235 = v239 + v223 & 0xffffffff;
                v230 = v240;
                if (v213 == (int32_t)v241) {
                    // break -> 0x404285
                    break;
                }
            }
            // 0x404197
            v225 = v233 + 64;
            v226 = v236 & 0xffffffff;
            v227 = v237;
            v228 = v235;
        }
        // 0x404285
        v217 = v229;
        v219 = v212 + 64 * (int64_t)&g31;
        v216 = v213;
        v220 = v230;
        v218 = v222;
    }
    int32_t v242 = v216;
    int64_t v243 = v219;
    int64_t v244 = v217;
    if (v214 == 0) {
        // 0x4042a9
        *(int64_t *)(v243 + 32) = 0x4031e0;
        *(int64_t *)(v243 + 24) = 0x403840;
        goto lab_0x4042b9;
    } else {
        // 0x40429c
        if (g104 != 0) {
            // 0x404cf0
            *(int64_t *)(v243 + 32) = 0x402790;
            *(int64_t *)(v243 + 24) = 0x403280;
            goto lab_0x4042b9;
        } else {
            // 0x4042a9
            *(int64_t *)(v243 + 32) = 0x4031e0;
            *(int64_t *)(v243 + 24) = 0x403840;
            goto lab_0x4042b9;
        }
    }
  lab_0x4042b9:;
    int64_t v245 = 0; // 0x4042bc
    if (v218 != 0) {
        char v246 = *(char *)&g115; // 0x4042be
        v245 = v244 & 0xffffff00 | (int64_t)(v242 == 1) | (int64_t)(v246 ^ 1);
    }
    int64_t v247 = v213; // 0x404100
    *(char *)(v243 + 56) = (char)v245;
    *(int32_t *)(v243 + 52) = (int32_t)v220;
    g83 = g27;
    int64_t v248 = v212; // 0x4042eb
    int64_t v249 = v220; // 0x4042eb
    int64_t v250 = v245; // 0x4042eb
    int64_t v251 = v247; // 0x4042eb
    int64_t v252 = v212; // 0x4042eb
    int64_t v253 = v245; // 0x4042eb
    int64_t v254 = v247; // 0x4042eb
    if (v214 != 0) {
        goto lab_0x4045de;
    } else {
        goto lab_0x4042f1;
    }
  lab_0x4045de:;
    int64_t v255 = v252;
    g119 = 0;
    int64_t v256 = v254 - (int64_t)(g104 == 0); // 0x4045f4
    int64_t v257 = v253; // 0x4045fd
    char v258 = g104; // 0x4045fd
    int64_t v259 = v254; // 0x4045fd
    if ((int32_t)v256 >= 1) {
        int64_t v260 = v255; // 0x404614
        *(int32_t *)(v260 + 44) = 0;
        v260 += 64;
        while (v260 != v255 + 64 + (64 * v256 + 0x3fffffffc0 & 0x3fffffffc0)) {
            // 0x404618
            *(int32_t *)(v260 + 44) = 0;
            v260 += 64;
        }
        // 0x404628
        int64_t v261; // 0x403e40
        v257 = v261;
        char v262; // 0x4045de
        v258 = v262;
        int64_t v263; // 0x403e40
        v259 = v263;
        if (g86 != 0) {
            // 0x404650
            int64_t v264; // 0x403e40
            int64_t v265; // 0x403e40
            while (true) {
                // 0x404650
                int64_t v266; // 0x403e40
                int64_t v267 = v266;
                int64_t v268; // 0x403e40
                int64_t v269 = v268;
                int64_t v270; // 0x403e40
                int64_t v271 = v270;
                int64_t v272; // 0x403e40
                int64_t v273 = v272;
                int64_t v274; // 0x403e40
                int64_t v275 = v274;
                int32_t v276; // 0x403e40
                int32_t v277 = v276;
                int32_t v278 = g103; // 0x404650
                *(int32_t *)(v275 + 40) = (int32_t)v273;
                int64_t v279 = v273; // 0x40465d
                int64_t v280 = v271; // 0x40465d
                int64_t v281 = v269; // 0x40465d
                int64_t v282 = v267; // 0x40465d
                if (v278 != 0) {
                    int32_t * v283 = (int32_t *)(v275 + 16);
                    int32_t * v284 = (int32_t *)(v275 + 44);
                    int64_t v285 = v273; // 0x403e40
                    int64_t v286 = v271; // 0x403e40
                    int64_t v287 = v269; // 0x403e40
                    int32_t v288 = v278; // 0x403e40
                    int64_t v289 = v267; // 0x403e40
                    int64_t v290 = v289;
                    int32_t v291 = v288;
                    int64_t v292 = v287;
                    int64_t v293 = v286;
                    int64_t v294 = v285;
                    int32_t v295 = v292;
                    int64_t v296 = v293; // 0x403e40
                    int32_t v297 = v291; // 0x403e40
                    int32_t v298; // 0x403e40
                    int64_t v299; // 0x403e40
                    int64_t v300; // 0x403e40
                    int64_t v301; // 0x403e40
                    int32_t v302; // 0x40466e
                    int64_t v303; // 0x4047b0
                    uint32_t v304; // 0x4047b7
                    char v305; // 0x4047c9
                    int32_t v306; // 0x40467c
                    int32_t v307; // 0x404668
                    int32_t v308; // 0x40469c
                    uint32_t v309; // 0x4046a0
                    while (true) {
                        // 0x40466e
                        v301 = v296;
                        v302 = g86;
                        if (v302 == 0) {
                            // 0x4047b0
                            v303 = g122;
                            v304 = g32;
                            v305 = g104;
                            v264 = v303;
                            v257 = v301;
                            v258 = v305;
                            v259 = v304;
                            goto lab_0x4047d4;
                        }
                        // 0x40467c
                        v298 = v297;
                        v306 = *v283;
                        v299 = v301;
                        if (v306 == 0) {
                            // 0x404685
                            g89 = 0;
                            if ((char)function_403840(v275) == 0) {
                                // 0x4047a0
                                function_403d80(v275);
                            }
                            // 0x40469c
                            v308 = *v283;
                            v309 = g119;
                            v299 = v275;
                            if (v308 != 0 != (v309 == v295)) {
                                // break -> 0x4046b0
                                break;
                            }
                        }
                        // 0x404668
                        v300 = v299;
                        v307 = v298 - 1;
                        v296 = v300;
                        v297 = v307;
                        v279 = v294;
                        v280 = v300;
                        v281 = v292;
                        v282 = v290;
                        if (v307 == 0) {
                            // break (via goto) -> 0x4046df
                            goto lab_0x4046df;
                        }
                    }
                    int64_t v310 = v309; // 0x4046a0
                    int64_t v311 = g117; // 0x4046b0
                    int32_t v312 = *v284; // 0x4046b7
                    *v284 = v312 + 1;
                    int64_t v313 = v294 + 1 & 0xffffffff; // 0x4046bb
                    int64_t v314 = g116; // 0x4046be
                    int64_t v315 = 4 * v290; // 0x4046c5
                    *(int32_t *)(v311 + v315) = v295;
                    int32_t v316 = g89; // 0x4046c9
                    *(int32_t *)(v314 + v315) = v316;
                    int32_t v317 = v298 - 1; // 0x4046d9
                    v285 = v313;
                    v286 = v275;
                    v287 = v310;
                    v288 = v317;
                    v289 = v313;
                    v279 = v313;
                    v280 = v275;
                    v281 = v310;
                    v282 = v313;
                    while (v317 != 0) {
                        // 0x40466e
                        v290 = v289;
                        v291 = v288;
                        v292 = v287;
                        v293 = v286;
                        v294 = v285;
                        v295 = v292;
                        v296 = v293;
                        v297 = v291;
                        while (true) {
                            // 0x40466e
                            v301 = v296;
                            v302 = g86;
                            if (v302 == 0) {
                                // 0x4047b0
                                v303 = g122;
                                v304 = g32;
                                v305 = g104;
                                v264 = v303;
                                v257 = v301;
                                v258 = v305;
                                v259 = v304;
                                goto lab_0x4047d4;
                            }
                            // 0x40467c
                            v298 = v297;
                            v306 = *v283;
                            v299 = v301;
                            if (v306 == 0) {
                                // 0x404685
                                g89 = 0;
                                if ((char)function_403840(v275) == 0) {
                                    // 0x4047a0
                                    function_403d80(v275);
                                }
                                // 0x40469c
                                v308 = *v283;
                                v309 = g119;
                                v299 = v275;
                                if (v308 != 0 != (v309 == v295)) {
                                    // break -> 0x4046b0
                                    break;
                                }
                            }
                            // 0x404668
                            v300 = v299;
                            v307 = v298 - 1;
                            v296 = v300;
                            v297 = v307;
                            v279 = v294;
                            v280 = v300;
                            v281 = v292;
                            v282 = v290;
                            if (v307 == 0) {
                                // break (via goto) -> 0x4046df
                                goto lab_0x4046df;
                            }
                        }
                        // 0x4046b0
                        v310 = v309;
                        v311 = g117;
                        v312 = *v284;
                        *v284 = v312 + 1;
                        v313 = v294 + 1 & 0xffffffff;
                        v314 = g116;
                        v315 = 4 * v290;
                        *(int32_t *)(v311 + v315) = v295;
                        v316 = g89;
                        *(int32_t *)(v314 + v315) = v316;
                        v317 = v298 - 1;
                        v285 = v313;
                        v286 = v275;
                        v287 = v310;
                        v288 = v317;
                        v289 = v313;
                        v279 = v313;
                        v280 = v275;
                        v281 = v310;
                        v282 = v313;
                    }
                }
              lab_0x4046df:;
                int64_t v318 = v282;
                int64_t v319 = v281;
                v265 = v280;
                int64_t v320 = v279;
                int32_t v321 = v277 + 1; // 0x4046df
                int64_t v322; // 0x403e40
                if (v322 < (int64_t)v321) {
                    // break -> 0x40470d
                    break;
                }
                int32_t v323 = g86; // 0x4046fd
                v276 = v321;
                v274 = v275 + 64;
                v272 = v320;
                v270 = v265;
                v268 = v319;
                v266 = v318;
                if (v323 == 0) {
                    // break -> 0x40470d
                    break;
                }
            }
            int64_t v324 = g122; // 0x40470d
            uint32_t v325 = g32; // 0x404714
            char v326 = g104; // 0x40471b
            v264 = v324;
            v257 = v265;
            v258 = v326;
            v259 = v325;
        }
    }
    goto lab_0x4047d4;
  lab_0x4042f1:;
    int64_t v394 = v251;
    int64_t v395 = v249;
    int64_t v396 = v248;
    int64_t v365 = v395; // 0x4042f4
    int64_t v363 = v250; // 0x4042f4
    int64_t v361 = 0; // 0x4042f4
    int64_t v359 = v396; // 0x4042f4
    if (v394 != 0) {
        uint32_t v397 = *(int32_t *)(v396 + 16); // 0x404310
        int64_t v398 = v396 + 64; // 0x40431b
        *(int32_t *)(v396 + 48) = v397 == 0 ? g103 : 0;
        while (v396 + 64 + (64 * v394 + 0x3fffffffc0 & 0x3fffffffc0) != v398) {
            int64_t v399 = v398;
            v397 = *(int32_t *)(v399 + 16);
            v398 = v399 + 64;
            *(int32_t *)(v399 + 48) = v397 == 0 ? g103 : 0;
        }
        // 0x404327
        v365 = v395;
        v363 = v397;
        v361 = v394;
        v359 = v396;
    }
    goto lab_0x404327;
  lab_0x4047d4:;
    int64_t v327 = v259;
    char v328 = v258;
    int64_t v329 = v257;
    int64_t v330 = 0;
    int64_t v331 = 0;
    int64_t v332 = v255;
    int64_t v333 = v327 + 0xffffffff; // 0x4047db
    *(int32_t *)(g117 + v330) = (int32_t)0;
    int64_t v334; // 0x403e40
    int64_t v335; // 0x403e40
    int64_t v336; // 0x403e40
    int64_t v337; // 0x403e40
    int64_t v338; // 0x403e40
    int64_t v339; // 0x403e40
    int64_t v340; // 0x403e40
    int64_t v341; // 0x403e40
    if (v328 == 0) {
        // 0x404890
        v339 = v330;
        v336 = v329;
        v335 = v332;
        v341 = v330;
        v338 = v329;
        if ((int32_t)v333 != 0) {
            goto lab_0x404834;
        } else {
            goto lab_0x404898;
        }
    } else {
        uint32_t v342 = (int32_t)v327; // 0x4047eb
        int64_t v343 = v330; // 0x4047ee
        int64_t v344 = v329; // 0x4047ee
        if (v342 >= 1) {
            int64_t v345 = 0x100000000 * (int64_t)((int32_t)v331 >> 31) | v331 & 0xffffffff; // 0x404801
            int64_t v346 = v327 & 0xffffffff; // 0x404801
            int64_t v347 = v345 / v346; // 0x404801
            int64_t v348 = v345 % v346; // 0x404801
            int32_t v349 = v348; // 0x404810
            int64_t v350 = 1; // 0x404808
            int64_t v351 = 0; // 0x404808
            int32_t v352 = v349 - (int32_t)v350; // 0x404810
            *(int32_t *)(v332 + 40) = (int32_t)v351;
            int64_t v353 = v347 + (int64_t)(v352 < 0 == ((v352 ^ v349) & (int32_t)(v350 ^ v348)) < 0);
            int64_t v354 = v350 + 1; // 0x40481c
            int64_t v355 = v332 + 64; // 0x40481f
            *(int32_t *)(v332 + 44) = (int32_t)v353;
            v351 = v353 + v351 & 0xffffffff;
            v350 = v354 & 0xffffffff;
            v343 = v355;
            v344 = v351;
            while (v342 + 1 != (int32_t)v354) {
                int64_t v356 = v355;
                v352 = v349 - (int32_t)v350;
                *(int32_t *)(v356 + 40) = (int32_t)v351;
                v353 = v347 + (int64_t)(v352 < 0 == ((v352 ^ v349) & (int32_t)(v350 ^ v348)) < 0);
                v354 = v350 + 1;
                v355 = v356 + 64;
                *(int32_t *)(v356 + 44) = (int32_t)v353;
                v351 = v353 + v351 & 0xffffffff;
                v350 = v354 & 0xffffffff;
                v343 = v355;
                v344 = v351;
            }
        }
        // 0x40482f
        v339 = v343;
        v336 = v344;
        v334 = v332;
        v340 = v343;
        v337 = v344;
        if ((int32_t)v333 == 0) {
            goto lab_0x40486f;
        } else {
            goto lab_0x404834;
        }
    }
  lab_0x404327:;
    int64_t v357 = function_4026b0(); // 0x404327
    result = v357;
    if ((int32_t)v357 == 0) {
        // 0x40425c
        return result;
    }
    int64_t v358 = v359;
    int64_t v360 = v361;
    int64_t v362 = v363;
    int64_t v364 = v365;
    if (g41 != 0) {
        // 0x40433d
        g108 = 1;
    }
    // 0x404344
    *(char *)&g68 = 0;
    int32_t v366 = g103 << (int32_t)(g77 != 0); // 0x40435c
    int64_t v367; // 0x403e40
    int64_t v368; // 0x403e40
    int64_t v369; // 0x403e40
    int64_t v370; // 0x403e40
    int64_t v371; // 0x403e40
    if (v366 < 1) {
        // 0x404d40
        v8 = v364;
        v9 = v362;
        if (v366 != 0) {
            goto lab_0x404561;
        } else {
            int32_t v372 = v360; // 0x404d46
            v371 = v364;
            v370 = v362;
            v369 = v360;
            v367 = v358;
            v368 = 0;
            v8 = v364;
            v9 = v362;
            if (v372 >= 0 == (v372 != 0)) {
                goto lab_0x404521;
            } else {
                goto lab_0x404561;
            }
        }
    } else {
        // 0x404370
        if ((int32_t)function_4026b0() == 0) {
            // 0x404548
            *(char *)&g68 = 0;
            v8 = v364;
            v9 = v362;
            goto lab_0x404561;
        } else {
            // 0x40437d
            v85 = 0;
            v86 = v362;
            v87 = v366;
            while (true) {
              lab_0x40437d:
                // 0x40437d
                v47 = v87;
                v51 = g32;
                g92 = 0;
                g95 = 0;
                g70 = 0;
                *(char *)&g68 = 0;
                g114 = 0;
                g113 = 1;
                v41 = g122;
                v42 = v86;
                v43 = v85;
                v44 = 1;
                v48 = v47;
                v50 = v51;
                v49 = v86;
                v46 = v85;
                if (g32 < 1) {
                    goto lab_0x4044c4;
                } else {
                    while (true) {
                      lab_0x404459:
                        // 0x404459
                        v39 = v44;
                        v29 = v43;
                        v24 = v41;
                        v27 = (int32_t *)(v24 + 48);
                        int32_t v52 = *v27; // 0x404459
                        g89 = 0;
                        if (v52 >= 0 == (v52 != 0)) {
                            goto lab_0x4043d0;
                        } else {
                            // 0x40446b
                            if (*(int32_t *)(v24 + 16) == 1) {
                                goto lab_0x4043d0;
                            } else {
                                int64_t v53 = v42;
                                v31 = v53;
                                v32 = v29;
                                if (*(char *)&g115 == 0) {
                                    goto lab_0x404438;
                                } else {
                                    // 0x40447e
                                    v35 = v53;
                                    v34 = v29;
                                    v33 = v29;
                                    if (g113 == 0) {
                                        goto lab_0x404780;
                                    } else {
                                        goto lab_0x40448b;
                                    }
                                }
                            }
                        }
                    }
                  lab_0x40473d:
                    // 0x40473d
                    v45 = v30;
                    v58 = v47;
                    v59 = v51;
                    v60 = v24;
                    v61 = v30;
                    if (v26 != 0) {
                        goto lab_0x4044a1;
                    } else {
                        goto lab_0x404746;
                    }
                }
            }
          lab_0x404746_2:
            // 0x404746
            v80 = v65;
            v81 = v65;
            v82 = v64;
            v83 = v63;
            v84 = v62;
          lab_0x40450a:;
            int64_t v373 = v84;
            int64_t v374 = v83;
            int64_t v375 = v82;
            int64_t v376 = v81;
            v10 = v376;
            v4 = v375;
            v2 = v374;
            v6 = v373;
            if (v80 != 0) {
                goto lab_0x404548;
            } else {
                // 0x40450e
                v371 = v375;
                v370 = v374;
                v369 = g32;
                v367 = g122;
                v368 = v373;
                v10 = v376;
                v4 = v375;
                v2 = v374;
                v6 = v373;
                if (g32 < 1) {
                    goto lab_0x404548;
                } else {
                    goto lab_0x404521;
                }
            }
        }
    }
  lab_0x404834:;
    int64_t v377 = v332 + 64 + (64 * v327 + 0x3fffffff80 & 0x3fffffffc0); // 0x404846
    int64_t v378 = v332;
    int64_t v379 = v378 + 64; // 0x404853
    *(int32_t *)(v378 + 48) = *(int32_t *)(v378 + 44);
    while (v379 != v377) {
        // 0x404850
        v378 = v379;
        v379 = v378 + 64;
        *(int32_t *)(v378 + 48) = *(int32_t *)(v378 + 44);
    }
    // 0x40485f
    v334 = v377;
    v340 = v339;
    v337 = v336;
    v335 = v377;
    v341 = v339;
    v338 = v336;
    if (v328 == 0) {
        goto lab_0x404898;
    } else {
        goto lab_0x40486f;
    }
  lab_0x404898:;
    int64_t v380 = v338;
    int64_t v381 = v341;
    int64_t v382 = v335;
    if (*(int32_t *)(v382 + 16) != 0) {
        // 0x404908
        *(int32_t *)(v382 + 48) = 0;
        v365 = v381;
        v363 = v380;
        v361 = v327;
        v359 = v332;
    } else {
        // 0x4048a1
        *(int32_t *)(v382 + 48) = g103;
        v365 = v381;
        v363 = v380;
        v361 = v327;
        v359 = v332;
    }
    goto lab_0x404327;
  lab_0x40486f:;
    int64_t v383 = v334;
    *(int32_t *)(v383 + 48) = *(int32_t *)(v383 + 44);
    v365 = v340;
    v363 = v337;
    v361 = v327;
    v359 = v332;
    goto lab_0x404327;
  lab_0x404561:;
    int64_t v384 = v8;
    v12 = v384;
    v11 = v9;
    if (g110 != 0 && g109 != 0) {
        int64_t v385 = (int64_t)g53; // 0x404573
        int64_t * v386 = (int64_t *)(v385 + 40); // 0x40457a
        uint64_t v387 = *v386; // 0x40457a
        int64_t v388; // 0x403e40
        if (v387 >= *(int64_t *)(v385 + 48)) {
            // 0x404d58
            __overflow(g53, 12);
            v388 = 12;
        } else {
            // 0x404588
            *v386 = v387 + 1;
            *(char *)v387 = 12;
            v388 = v384;
        }
        // 0x404593
        g109 = 0;
        v12 = v388;
        v11 = v385;
    }
    goto lab_0x40459a;
  lab_0x40459a:;
    int64_t v389 = (int64_t)g85 + 1; // 0x4045a1
    g85 = v389;
    result = v389;
    if (v389 > g30) {
        // 0x40425c
        return result;
    }
    // 0x4045b9
    function_402710(v11, v12);
    int64_t v390 = g32; // 0x4045cc
    v248 = g122;
    v249 = v12;
    v250 = v11;
    v251 = v390;
    v252 = g122;
    v253 = v11;
    v254 = v390;
    if (*(char *)&g40 == 0) {
        goto lab_0x4042f1;
    } else {
        goto lab_0x4045de;
    }
  lab_0x404521:;
    // 0x404521
    int64_t v391; // 0x403e40
    if (*(int32_t *)(v367 + 16) == 0) {
        // 0x404538
        *(char *)(v391 + 57) = 1;
    }
    int64_t v392 = v367 + 64; // 0x40453d
    int64_t v393 = v392; // 0x404544
    v10 = 0;
    v4 = v371;
    v2 = v370;
    v6 = v368;
    while (v392 != v367 + 64 + (64 * v369 + 0x3fffffffc0 & 0x3fffffffc0)) {
        // 0x404530
        if (*(int32_t *)(v393 + 16) == 0) {
            // 0x404538
            *(char *)(v391 + 57) = 1;
        }
        // 0x40453d
        v392 = v393 + 64;
        v393 = v392;
        v10 = 0;
        v4 = v371;
        v2 = v370;
        v6 = v368;
    }
    goto lab_0x404548;
}
// Address range: 0x404de0 - 0x4052dd
int64_t function_404de0(int32_t status) {
    // 0x404de0
    if (status != 0) {
        // 0x404dfa
        __fprintf_chk(g56, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x404e1f
        exit(status);
        // UNREACHABLE
    }
    // 0x404e26
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Paginate or columnate FILE(s) for printing.\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  +FIRST_PAGE[:LAST_PAGE], --pages=FIRST_PAGE[:LAST_PAGE]\n                    begin [stop] printing with page FIRST_[LAST_]PAGE\n  -COLUMN, --columns=COLUMN\n                    output COLUMN columns and print columns down,\n                    unless -a is used. Balance number of lines in the\n                    columns on each page\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -a, --across      print columns across rather than down, used together\n                    with -COLUMN\n  -c, --show-control-chars\n                    use hat notation (^G) and octal backslash notation\n  -d, --double-space\n                    double space the output\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -D, --date-format=FORMAT\n                    use FORMAT for the header date\n  -e[CHAR[WIDTH]], --expand-tabs[=CHAR[WIDTH]]\n                    expand input CHARs (TABs) to tab WIDTH (8)\n  -F, -f, --form-feed\n                    use form feeds instead of newlines to separate pages\n                    (by a 3-line page header with -F or a 5-line header\n                    and trailer without -F)\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -h, --header=HEADER\n                    use a centered HEADER instead of filename in page header,\n                    -h \"\" prints a blank line, don't use -h\"\"\n  -i[CHAR[WIDTH]], --output-tabs[=CHAR[WIDTH]]\n                    replace spaces with CHARs (TABs) to tab WIDTH (8)\n  -J, --join-lines  merge full lines, turns off -W line truncation, no column\n                    alignment, --sep-string[=STRING] sets separators\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -l, --length=PAGE_LENGTH\n                    set the page length to PAGE_LENGTH (66) lines\n                    (default number of lines of text 56, and with -F 63).\n                    implies -t if PAGE_LENGTH <= 10\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -m, --merge       print all files in parallel, one in each column,\n                    truncate lines, but join lines of full length with -J\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -n[SEP[DIGITS]], --number-lines[=SEP[DIGITS]]\n                    number lines, use DIGITS (5) digits, then SEP (TAB),\n                    default counting starts with 1st line of input file\n  -N, --first-line-number=NUMBER\n                    start counting with NUMBER at 1st line of first\n                    page printed (see +FIRST_PAGE)\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -o, --indent=MARGIN\n                    offset each line with MARGIN (zero) spaces, do not\n                    affect -w or -W, MARGIN will be added to PAGE_WIDTH\n  -r, --no-file-warnings\n                    omit warning when a file cannot be opened\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -s[CHAR], --separator[=CHAR]\n                    separate columns by a single character, default for CHAR\n                    is the <TAB> character without -w and 'no char' with -w.\n                    -s[CHAR] turns off line truncation of all 3 column\n                    options (-COLUMN|-a -COLUMN|-m) except -w is set\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -S[STRING], --sep-string[=STRING]\n                    separate columns by STRING,\n                    without -S: Default separator <TAB> with -J and <space>\n                    otherwise (same as -S\" \"), no effect on column options\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -t, --omit-header  omit page headers and trailers;\n                     implied if PAGE_LENGTH <= 10\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -T, --omit-pagination\n                    omit page headers and trailers, eliminate any pagination\n                    by form feeds set in input files\n  -v, --show-nonprinting\n                    use octal backslash notation\n  -w, --width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters for\n                    multiple text-column output only, -s[char] turns off (72)\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "  -W, --page-width=PAGE_WIDTH\n                    set page width to PAGE_WIDTH (72) characters always,\n                    truncate lines, except -J option is set, no interference\n                    with -S or -s\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g53);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g53);
    int64_t v1 = &g3; // bp-136, 0x4050ba
    bool v2; // 0x404de0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x405140
    int64_t v6 = *(int64_t *)v5; // 0x405144
    int64_t v7 = 3; // 0x40514a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"pr";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x405156
        char v11 = *(char *)v9; // 0x405156
        char v12 = v11; // 0x405156
        bool v13 = false; // 0x405156
        while (v10 == v11) {
            // 0x40514c
            v7--;
            int64_t v14 = v9 + v3; // 0x405156
            int64_t v15 = v8 + v3; // 0x405156
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
            // break -> 0x405162
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x405162
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x405274;
        } else {
            // 0x40525e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4052b3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4051c4;
            } else {
                goto lab_0x405274;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4051c4;
        } else {
            // 0x4051aa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4052b3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4051c4;
            } else {
                goto lab_0x4051c4;
            }
        }
    }
  lab_0x405274:
    // 0x405274
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x405204
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x404e1f
    exit(status);
    // UNREACHABLE
  lab_0x4051c4:
    // 0x4051c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x405204
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x404e1f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4052e0 - 0x4053aa
int64_t function_4052e0(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4) {
    char v1 = a1;
    int64_t result = 0x100000000000000 * a1 >> 56 & 0xffffffff; // 0x4052fc
    int64_t v2 = a1; // 0x4052fc
    if ((int32_t)v1 >= 58) {
        // 0x4052fe
        *(char *)a3 = v1;
        v2 = a1 + 1;
        result = (int64_t)*(char *)v2;
    }
    // 0x405308
    if ((char)result == 0) {
        // 0x40530c
        return result;
    }
    // 0x405318
    int32_t v3; // bp-32, 0x4052e0
    int64_t v4 = function_409e00(v2, 0, 10, (int64_t *)&v3, (int64_t *)&g2); // 0x40532d
    if ((int32_t)v4 == 0) {
        int64_t result2 = v3; // 0x405336
        if (v3 == 0x7fffffff || result2 < 0x7fffffff) {
            // 0x405348
            *(int32_t *)a4 = v3;
            return result2;
        }
    }
    // 0x405354
    function_408d30(v2);
    error(0, *__errno_location(), dcgettext(NULL, "'-%c' extra characters or invalid number in the argument: %s", 5));
    function_404de0(1);
    // UNREACHABLE
}
// Address range: 0x4053b0 - 0x4053b8
int64_t function_4053b0(int64_t a1) {
    // 0x4053b0
    g124 = a1;
    int64_t result; // 0x4053b0
    return result;
}
// Address range: 0x4053c0 - 0x4053c8
int64_t function_4053c0(int64_t a1) {
    // 0x4053c0
    g123 = a1;
    int64_t result; // 0x4053c0
    return result;
}
// Address range: 0x4053d0 - 0x40546e
int64_t function_4053d0(void) {
    // 0x4053d0
    int32_t * err_num; // 0x4053e6
    if ((int32_t)function_40c070((int64_t)g53) == 0) {
        goto lab_0x4053fc;
    } else {
        // 0x4053e6
        err_num = __errno_location();
        if (g123 == 0) {
            goto lab_0x405413;
        } else {
            // 0x4053f7
            if (*err_num != 32) {
                goto lab_0x405413;
            } else {
                goto lab_0x4053fc;
            }
        }
    }
  lab_0x4053fc:;
    int64_t result = function_40c070((int64_t)g56); // 0x405403
    if ((int32_t)result == 0) {
        // 0x40540c
        return result;
    }
    // 0x40544e
    _exit(g43);
    // UNREACHABLE
  lab_0x405413:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40541f
    if (g124 == 0) {
        // 0x405459
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405433
        error(0, *err_num, "%s: %s", (char *)function_408b80((int64_t)g124), v1);
    }
    // 0x40544e
    _exit(g43);
    // UNREACHABLE
}
// Address range: 0x405470 - 0x405475
int64_t function_405470(void) {
    // 0x405470
    int64_t fd; // 0x405470
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x405480 - 0x4054a1
int64_t function_405480(int64_t stream, int64_t advice, int64_t a3) {
    // 0x405480
    if (stream == 0) {
        // 0x4054a0
        int64_t result; // 0x405480
        return result;
    }
    // 0x405485
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4054b0 - 0x405543
int64_t function_4054b0(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x4054b7
    int64_t result = (int64_t)file; // 0x4054b7
    if (file == NULL) {
        // 0x4054d1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x4054c7
    if (v1 >= 3) {
        // 0x4054d1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_408d50((int64_t)v1, v2); // 0x4054ea
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x405528
        function_40aa20(result, v2);
        // 0x4054d1
        return 0;
    }
    // 0x4054ee
    if ((int32_t)function_40aa20(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x405500
        if (v4 != NULL) {
            // 0x4054d1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x40550d
    close(fd);
    // 0x4054d1
    return 0;
}
// Address range: 0x405550 - 0x40558a
int64_t function_405550(int64_t * tp) {
    int64_t result = 0; // 0x405564
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x405566
        int64_t tp2; // bp-24, 0x405550
        gettimeofday((struct timeval *)&tp2, NULL);
        *tp = tp2;
        int128_t v1; // 0x405550
        result = 1000 * (int64_t)v1;
        *(int64_t *)((int64_t)tp + 8) = result;
    }
    // 0x405584
    return result;
}
// Address range: 0x405590 - 0x4055ee
int64_t function_405590(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x405596
    if (locale == NULL) {
        // 0x4055c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405596
    bool v2; // 0x405590
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x405590
    int64_t v5 = v1; // 0x405590
    int64_t v6 = 2; // 0x4055b5
    unsigned char v7 = *(char *)v5; // 0x4055b5
    char v8 = *(char *)v4; // 0x4055b5
    char v9 = v8; // 0x4055b5
    bool v10 = false; // 0x4055b5
    while (v7 == v8) {
        // 0x4055a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4055c1
    int64_t v13 = v1; // 0x4055c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4055c3
        return 0;
    }
    int64_t v14 = 6; // 0x4055c1
    unsigned char v15 = *(char *)v13; // 0x4055dd
    char v16 = *(char *)v12; // 0x4055dd
    char v17 = v16; // 0x4055dd
    bool v18 = false; // 0x4055dd
    while (v15 == v16) {
        // 0x4055d0
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
// Address range: 0x4055f0 - 0x40568c
int64_t function_4055f0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x4055f0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x405615
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x405646
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x405668
    int64_t v4 = v2 - 1; // 0x405678
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x405680
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x405690 - 0x405843
int64_t function_405690(uint64_t a1, int64_t a2, uint64_t a3) {
    uint64_t v1 = a2 + a1; // 0x405699
    int64_t v2; // 0x405690
    int64_t v3; // 0x405690
    int64_t v4; // 0x405690
    int64_t v5; // 0x405690
    int64_t v6; // 0x405690
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x4057d0
        if (v1 <= a1) {
            // 0x4057b6
            return 0;
        }
        int16_t * v7 = *__ctype_b_loc(); // 0x4057e4
        v6 = a1;
        v3 = 0;
        while (true) {
          lab_0x4057f0:
            // 0x4057f0
            v4 = v3;
            unsigned char v8 = *(char *)v6; // 0x4057f4
            int16_t v9 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)v7); // 0x4057f8
            if ((v9 & 0x4000) != 0) {
                goto lab_0x40580a;
            } else {
                // 0x405801
                v2 = 0xffffffff;
                if ((a3 & 2) != 0) {
                    // break -> 0x4057b6
                    break;
                }
                // 0x405806
                v5 = v4;
                if ((v9 & 2) != 0) {
                    goto lab_0x405817;
                } else {
                    goto lab_0x40580a;
                }
            }
        }
      lab_0x4057b6_7:
        // 0x4057b6
        return v2 & 0xffffffff;
    }
    // 0x4056b7
    if (v1 <= a1) {
        // 0x4057b6
        return 0;
    }
    int64_t v10 = a1;
    int64_t v11 = 0; // 0x405690
    int64_t v12; // 0x405690
    int64_t v13; // 0x405690
    int64_t v14; // 0x405690
    int64_t v15; // 0x405690
    while (true) {
      lab_0x4056ec:
        // 0x4056ec
        v13 = v11;
        v15 = v10;
        char v16 = *(char *)v15; // 0x4056ec
        if (v16 < 64) {
            // 0x4056d0
            v14 = v15;
            v12 = v13;
            if (v16 > 36 || (v16 & -4) == 32) {
                goto lab_0x4056db;
            } else {
                goto lab_0x405702;
            }
        } else {
            if (v16 == 64) {
                goto lab_0x405702;
            } else {
                // 0x4056f7
                v14 = v15;
                v12 = v13;
                if (v16 < 96 || v16 < 127) {
                    goto lab_0x4056db;
                } else {
                    goto lab_0x405702;
                }
            }
        }
    }
  lab_0x4057b6_7:
    // 0x4057b6
    return v2 & 0xffffffff;
  lab_0x40580a:
    // 0x40580a
    v2 = v4;
    if ((int32_t)v4 == 0x7fffffff) {
        return v2 & 0xffffffff;
    }
    // 0x405813
    v5 = v4 + 1 & 0xffffffff;
    goto lab_0x405817;
  lab_0x405817:;
    int64_t v17 = v6 + 1; // 0x4057f0
    v2 = v5;
    v6 = v17;
    v3 = v5;
    if (v1 == v17) {
        // break -> 0x4057b6
        goto lab_0x4057b6_7;
    }
    goto lab_0x4057f0;
  lab_0x4056db:;
    int64_t v18 = v14 + 1; // 0x4056df
    v11 = v12 + 1 & 0xffffffff;
  lab_0x4056e3:
    // 0x4056e3
    v10 = v18;
    if (v10 >= v1) {
        // break -> 0x4057b6
        goto lab_0x4057b6_7;
    }
    goto lab_0x4056ec;
  lab_0x405702:;
    int64_t ps = 0; // bp-64, 0x405702
    int64_t v19 = v15; // 0x40570b
    int64_t v20 = v13; // 0x40570b
    int64_t v21; // 0x405690
    int64_t v22; // 0x405690
    while (true) {
      lab_0x405734:
        // 0x405734
        v21 = v20;
        v22 = v19;
        int32_t wc; // bp-68, 0x405690
        int64_t v23 = function_40ba50((int64_t *)&wc, v22, v1 - v22); // 0x405747
        switch (v23) {
            case -1: {
                goto lab_0x4057a0;
            }
            case -2: {
                // 0x405820
                v2 = 0xffffffff;
                if (a3 % 2 == 0) {
                    // 0x4056e3
                    v2 = v21 + 1 & 0xffffffff;
                }
                // 0x4057b6
                return v2 & 0xffffffff;
            }
            default: {
                int32_t v24 = wcwidth(wc); // 0x40576a
                int64_t v25; // 0x405690
                if (v24 >= 0) {
                    int64_t v26 = v24; // 0x40576a
                    v2 = 0x7fffffff;
                    if ((0x7fffffff - v21 & 0xffffffff) < v26) {
                        // break (via goto) -> 0x4057b6
                        goto lab_0x4057b6_7;
                    }
                    // 0x405720
                    v25 = v21 + v26 & 0xffffffff;
                } else {
                    // 0x405773
                    v2 = 0xffffffff;
                    if ((a3 & 2) != 0) {
                        // break (via goto) -> 0x4057b6
                        goto lab_0x4057b6_7;
                    }
                    // 0x405779
                    v25 = v21;
                    if (iswcntrl(wc) == 0) {
                        // 0x405786
                        v2 = 0x7fffffff;
                        if ((int32_t)v21 == 0x7fffffff) {
                            // break (via goto) -> 0x4057b6
                            goto lab_0x4057b6_7;
                        }
                        // 0x405793
                        v25 = v21 + 1 & 0xffffffff;
                    }
                }
                int64_t v27 = (v23 == 0 ? 1 : v23) + v22; // 0x405728
                int32_t v28 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40572b
                v18 = v27;
                v11 = v25;
                v19 = v27;
                v20 = v25;
                if (v28 != 0) {
                    goto lab_0x4056e3;
                }
                goto lab_0x405734;
            }
        }
    }
  lab_0x4057a0:
    // 0x4057a0
    v14 = v22;
    v12 = v21;
    v2 = 0xffffffff;
    if (a3 % 2 != 0) {
        // break -> 0x4057b6
        goto lab_0x4057b6_7;
    }
    goto lab_0x4056db;
}
// Address range: 0x405850 - 0x405873
int64_t function_405850(int64_t str, uint32_t a2) {
    // 0x405850
    return function_405690(str, (int64_t)strlen((char *)str), (int64_t)a2);
}
// Address range: 0x405880 - 0x4058c1
int64_t function_405880(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x4058b9
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x405893
    int64_t v2 = a3; // 0x405898
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x4058a0
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x4058a8
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x4058a0
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x4058b9
    return result;
}
// Address range: 0x4058d0 - 0x405911
int64_t function_4058d0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x405909
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x4058e3
    int64_t v2 = a3; // 0x4058e8
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x4058f0
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x4058f8
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x4058f0
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x405909
    return result;
}
// Address range: 0x405920 - 0x4070e5
int64_t function_405920(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3 = a2; // bp-1224, 0x405944
    char v4 = *(char *)&v1; // 0x40596c
    v3 = a2;
    int64_t result = 0; // 0x405974
    int64_t v5 = v2; // 0x405974
    char v6; // 0x405920
    char v7; // 0x405920
    char v8; // 0x405920
    char v9; // 0x405920
    char v10; // 0x405920
    char v11; // 0x405920
    char v12; // 0x405920
    char v13; // 0x405920
    char v14; // 0x405920
    char v15; // 0x405920
    int64_t v16; // 0x405920
    int64_t v17; // 0x405920
    int64_t v18; // 0x405920
    int64_t v19; // 0x405920
    int64_t v20; // 0x405920
    int64_t v21; // 0x405920
    int64_t v22; // 0x405920
    int64_t v23; // 0x405920
    int64_t v24; // 0x405920
    int64_t v25; // 0x405920
    int64_t v26; // 0x405920
    int64_t v27; // 0x405920
    int64_t v28; // 0x405920
    int64_t v29; // 0x405920
    char v30; // 0x405920
    int64_t v31; // 0x405920
    int64_t v32; // 0x405920
    int64_t v33; // 0x405920
    int64_t v34; // 0x405920
    int64_t v35; // 0x405920
    int64_t v36; // 0x405920
    int64_t v37; // 0x405920
    int64_t v38; // 0x405920
    char * v39; // 0x405920
    int64_t v40; // 0x405920
    char * v41; // 0x405920
    int64_t v42; // 0x405920
    int64_t * str; // 0x405920
    char * v43; // 0x405920
    int64_t * v44; // 0x405920
    int64_t format; // 0x405920
    int16_t * v45; // 0x405920
    int64_t * v46; // 0x405920
    int32_t * v47; // 0x405920
    int32_t * v48; // 0x405920
    int64_t v49; // 0x405935
    int64_t * v50; // 0x405920
    int64_t * v51; // 0x405920
    int64_t * v52; // 0x405920
    int64_t * v53; // 0x405920
    int64_t * v54; // 0x405920
    int64_t * v55; // 0x405920
    int32_t * v56; // 0x405920
    int64_t v57; // 0x405920
    char * v58; // 0x405920
    int64_t * v59; // 0x405920
    int32_t * v60; // 0x405920
    int64_t * v61; // 0x405920
    int64_t * v62; // 0x405920
    int64_t * tm; // 0x405920
    int64_t v63; // 0x405920
    int32_t * v64; // 0x405920
    int64_t * v65; // 0x405920
    int64_t str2; // 0x405920
    if (v4 != 0) {
        // 0x40598a
        v49 = &v3;
        tm = (int64_t *)(v49 + 8);
        v63 = v49 + 48;
        v64 = (int32_t *)v63;
        v65 = (int64_t *)(v49 + 1232);
        str2 = v49 + 144;
        int64_t v66 = v49 + 64;
        v39 = (char *)v66;
        v40 = v49 + 135;
        v41 = (char *)v63;
        v42 = v49 + 44;
        str = (int64_t *)(v49 + 32);
        int64_t v67 = v49 + 72;
        v43 = (char *)v67;
        v44 = (int64_t *)v63;
        format = v49 + 112;
        v45 = (int16_t *)format;
        v46 = (int64_t *)(v49 + 16);
        v47 = (int32_t *)(v49 + 1240);
        v48 = (int32_t *)v66;
        v50 = (int64_t *)(v49 - 8);
        v51 = (int64_t *)(v49 - 16);
        v52 = (int64_t *)(v49 + 24);
        v53 = (int64_t *)v66;
        int64_t v68 = v49 + 80;
        v54 = (int64_t *)v68;
        v55 = (int64_t *)v67;
        v56 = (int32_t *)v67;
        v57 = v49 + 145;
        int64_t v69 = v49 + 88;
        v58 = (char *)v69;
        v59 = (int64_t *)v69;
        v60 = (int32_t *)v68;
        v61 = (int64_t *)(v49 + 104);
        v62 = (int64_t *)(v49 + 96);
        v30 = v4;
        v33 = a3;
        v19 = 0;
        v22 = v2;
        while (true) {
          lab_0x40598a:
            // 0x40598a
            v23 = v22;
            v20 = v19;
            int64_t v70 = v33;
            char v71 = v30;
            char v72 = v7;
            char v73 = v6;
            if (v71 == 37) {
                char v74 = v73; // 0x405a14
                char v75 = v72; // 0x405a14
                int64_t v76 = v70; // 0x405a14
                int64_t v77 = 0; // 0x405a14
                int64_t v78 = (int64_t)*(char *)(v49 + 43); // 0x405a14
                int64_t v79 = 0; // 0x405a14
                int64_t v80; // 0x405920
                while (true) {
                  lab_0x405a18_2:
                    // 0x405a18
                    v16 = v78;
                    v10 = v74;
                    v11 = v75;
                    v34 = v76;
                    v26 = v77;
                    v17 = v79;
                    while (true) {
                      lab_0x405a18:;
                        int64_t v81 = v26;
                        char v82 = v11;
                        char v83 = v10;
                        int64_t v84 = v34 + 1; // 0x405a18
                        char v85 = *(char *)v84; // 0x405a1c
                        v14 = v83;
                        v15 = v82;
                        v31 = 48;
                        v36 = v84;
                        v28 = v81;
                        if (v85 == 48) {
                            goto lab_0x405a48;
                        } else {
                            // 0x405a28
                            v18 = v17;
                            v27 = v81;
                            v35 = v84;
                            v80 = v85;
                            v13 = v82;
                            v12 = v83;
                            while (v12 <= v13) {
                                if (v80 != 35) {
                                    // 0x405a50
                                    v14 = v12;
                                    v15 = v13;
                                    v31 = v80;
                                    v36 = v35;
                                    v28 = v27;
                                    if ((char)v80 == 45) {
                                        goto lab_0x405a48;
                                    } else {
                                        int64_t v86 = v80 & 0xffffffff;
                                        v38 = v86;
                                        v37 = v35;
                                        v32 = 0xffffffff;
                                        v29 = v86;
                                        if ((int32_t)v80 < 58) {
                                            goto lab_0x405ab1;
                                        } else {
                                            goto lab_0x405a68_2;
                                        }
                                    }
                                }
                                int64_t v87 = v35 + 1; // 0x405a2e
                                char v88 = *(char *)v87; // 0x405a32
                                int64_t v89 = v88; // 0x405a32
                                v14 = v88;
                                v15 = 48;
                                v31 = v89;
                                v36 = v87;
                                v28 = 1;
                                if (v88 == 48) {
                                    goto lab_0x405a48;
                                }
                                v27 = 1;
                                v35 = v87;
                                v80 = v89;
                                v13 = 48;
                                v12 = v88;
                            }
                            char v90 = v80;
                            v74 = v12;
                            v75 = v13;
                            v76 = v35;
                            v77 = v27;
                            v78 = 1;
                            v79 = v18;
                            if (v90 != 94) {
                                // 0x405aa0
                                v14 = v12;
                                v15 = v13;
                                v31 = v80;
                                v36 = v35;
                                v28 = v27;
                                if (v90 != 95) {
                                    // break (via goto) -> 0x405aa4
                                    goto lab_0x405aa4;
                                }
                                goto lab_0x405a48;
                            } else {
                                goto lab_0x405a18_2;
                            }
                        }
                    }
                }
              lab_0x405aa4:;
                int64_t v91 = v80 & 0xffffffff;
                v38 = v91;
                v37 = v35;
                v32 = 0xffffffff;
                v29 = v91;
                if ((int32_t)v80 < 58) {
                    goto lab_0x405ab1;
                } else {
                    goto lab_0x405a68_2;
                }
            } else {
                int64_t v92 = v3 - v20; // 0x405992
                v1 = v92;
                if (v92 < 2) {
                    // break -> 0x4059d3
                    break;
                }
                int64_t v93 = 0; // 0x40599e
                if (v23 != 0) {
                    // 0x4059a0
                    *(char *)v23 = v71;
                    v93 = v23 + 1;
                }
                // 0x4059a7
                v8 = v73;
                v9 = v72;
                v25 = v70;
                v21 = v20 + 1;
                v24 = v93;
                goto lab_0x4059ae;
            }
        }
      lab_0x4059d3_11:
        // 0x4059d3
        return 0;
    }
    goto lab_0x4059bb_2;
  lab_0x405a48:
    // 0x405a48
    v10 = v14;
    v11 = v15;
    v34 = v36;
    v26 = v28;
    v17 = v31 & 0xffffffff;
    goto lab_0x405a18;
  lab_0x405afe:;
    // 0x405afe
    int64_t v94; // 0x405abb
    v38 = v94;
    int64_t v95; // 0x405ab3
    v37 = v95;
    v32 = 0x7fffffff;
    v29 = v94;
    int64_t v96; // 0x405abd
    if ((int32_t)v96 >= 10) {
        // break -> 0x405a68
        goto lab_0x405a68_2;
    }
    // 0x405b03
    int64_t v97; // 0x405920
    int64_t v98 = v97 + 2; // 0x405b03
    int64_t v99 = (int64_t)*(char *)v98; // 0x405b03
    int64_t v100 = v99 + 0xffffffd0 & 0xffffffff; // 0x405b12
    v1 = v100;
    int64_t v101 = v100; // 0x405b15
    int64_t v102 = v99; // 0x405b15
    int64_t v103 = v99 & 0xffffffff; // 0x405b15
    int64_t v104 = v98; // 0x405b15
    int64_t v105 = 0x7fffffff; // 0x405b15
    goto lab_0x405ada;
  lab_0x405ada:;
    int64_t v106 = v105;
    int64_t v107 = v104;
    int64_t v108 = v107; // 0x405add
    int64_t v109 = v106; // 0x405add
    if ((int32_t)v101 >= 10) {
        // 0x405adf
        v38 = v103;
        v37 = v107;
        v32 = v106;
        v29 = v102 & 0xffffffff;
        goto lab_0x405a68_2;
    }
    goto lab_0x405ab3;
  lab_0x405ab1:
    // 0x405ab1
    v108 = v35;
    v109 = 0;
    while (true) {
      lab_0x405ab3:;
        int64_t v110 = v109;
        v97 = v108;
        v95 = v97 + 1;
        int64_t v111 = (int64_t)*(char *)v95; // 0x405ab3
        v94 = v111 & 0xffffffff;
        v96 = v111 + 0xffffffd0;
        int64_t v112 = v96 & 0xffffffff; // 0x405abd
        v1 = v112;
        int32_t v113 = v110; // 0x405ac0
        if (v113 > 0xccccccc) {
            goto lab_0x405afe;
        } else {
            char v114 = *(char *)v97; // 0x405ac8
            if (v113 != 0xccccccc || v114 < 56) {
                // 0x405acd
                v101 = v112;
                v102 = v111;
                v103 = v94;
                v104 = v95;
                v105 = 10 * v110 + 0xffffffd0 + (int64_t)v114 & 0xffffffff;
                goto lab_0x405ada;
            } else {
                goto lab_0x405afe;
            }
        }
    }
    goto lab_0x405a68_2;
  lab_0x405a68_2:;
    int64_t v115 = v32;
    int64_t v116 = v37;
    int64_t v117 = v38; // 0x405920
    int64_t v118 = v116; // 0x405920
    int64_t v119 = 0; // 0x405920
    int64_t v120; // 0x405920
    switch ((char)v120) {
        case 69: {
        }
        case 79: {
            int64_t v121 = v116 + 1; // 0x405ae8
            v117 = (int64_t)*(char *)v121;
            v118 = v121;
            v119 = v29;
            // break -> 0x405a7e
            break;
        }
    }
    int64_t v122 = v119;
    int64_t v123 = v118;
    int64_t v124 = v117;
    g143 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v124; // 0x405a81
    int64_t v127 = v16; // 0x405a81
    int64_t v128 = 0; // 0x405a81
    int64_t v129 = 1; // 0x405a81
    int64_t v130 = v123; // 0x405a81
    int64_t v131 = v16; // 0x405a81
    int64_t v132 = v123; // 0x405a81
    int64_t v133 = 0; // 0x405a81
    int64_t v134; // 0x405920
    int64_t v135; // 0x405920
    int64_t v136; // 0x405920
    int64_t v137; // 0x405920
    int64_t v138; // 0x405920
    int64_t v139; // 0x405920
    int64_t v140; // 0x405920
    int64_t v141; // 0x405920
    int64_t v142; // 0x405920
    int64_t v143; // 0x405920
    int64_t v144; // 0x405920
    int64_t v145; // 0x405920
    int64_t v146; // 0x405920
    int64_t v147; // 0x405920
    int64_t v148; // 0x405920
    int64_t v149; // 0x405920
    int64_t v150; // 0x405920
    int64_t v151; // 0x405920
    int64_t v152; // 0x405920
    int64_t v153; // 0x405920
    int64_t v154; // 0x405920
    int64_t v155; // 0x405920
    int64_t v156; // 0x405920
    int64_t v157; // 0x405920
    int64_t v158; // 0x405920
    int64_t v159; // 0x405920
    int64_t v160; // 0x405920
    int64_t v161; // 0x405920
    int64_t v162; // 0x405920
    int64_t v163; // 0x405920
    int64_t v164; // 0x405920
    int64_t v165; // 0x405920
    int64_t v166; // 0x405920
    int64_t v167; // 0x405920
    int64_t v168; // 0x405920
    int64_t v169; // 0x405920
    int64_t v170; // 0x405920
    int64_t v171; // 0x405920
    int64_t v172; // 0x405920
    int64_t v173; // 0x405920
    int64_t v174; // 0x405920
    int64_t v175; // 0x405920
    int64_t v176; // 0x405920
    int64_t v177; // 0x405920
    int64_t v178; // 0x405920
    int64_t v179; // 0x405920
    int64_t v180; // 0x405920
    int64_t v181; // 0x405920
    int64_t v182; // 0x405920
    int64_t v183; // 0x405920
    int64_t v184; // 0x405920
    int64_t v185; // 0x405920
    int32_t v186; // 0x405920
    switch (v125) {
        case 0: {
            // 0x406a03
            v177 = v123 - 1;
            goto lab_0x4068f7;
        }
        case 37: {
            int64_t v187 = v3 - v20; // 0x40699e
            v1 = v187;
            int32_t v188 = v115; // 0x4069a1
            int64_t v189 = 0x100000000 * v115 >> 32;
            int64_t v190 = v188 >= 0 ? v189 : 0; // 0x4069a6
            int64_t v191 = v190 != 0 ? v190 : 1; // 0x4069ab
            v134 = v187;
            v162 = v190;
            v176 = 1;
            v160 = v123;
            v161 = v123;
            v142 = v16;
            v152 = v191;
            if ((int32_t)v122 != 0) {
                goto lab_0x4067a3;
            } else {
                // 0x4069b8
                if (v191 >= v187) {
                    // break -> 0x4059d3
                    break;
                }
                // 0x4069c1
                v155 = v191;
                v156 = 0;
                if (v23 != 0) {
                    int64_t v192 = v124; // 0x4069cd
                    int64_t v193 = v23; // 0x4069cd
                    if (v188 >= 2) {
                        int64_t v194 = v189 - 1; // 0x4069d2
                        v1 = v194;
                        int64_t v195 = v194 + v23; // 0x4069d6
                        int64_t * v196 = (int64_t *)v23;
                        int32_t v197 = v194;
                        if (v18 == 48) {
                            // 0x407066
                            memset(v196, 48, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        } else {
                            // 0x4069e4
                            memset(v196, 32, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        }
                    }
                    // 0x4069f7
                    *(char *)v193 = (char)v192;
                    v155 = v191;
                    v156 = v193 + 1;
                }
                goto lab_0x406346;
            }
        }
        case 58: {
            int64_t v198 = v123 + 1; // 0x406a5f
            char v199 = *(char *)v198; // 0x406a5f
            v1 = v198;
            int64_t v200 = v198; // 0x406a6f
            char v201 = v199; // 0x406a6f
            int64_t v202 = 1; // 0x406a6f
            if (v199 == 58) {
                int64_t v203 = 2; // 0x406a97
                int64_t v204 = v203 + v123; // 0x406a9b
                char v205 = *(char *)v204; // 0x406a9b
                v1 = v204;
                v200 = v204;
                v201 = v205;
                v202 = v203;
                int64_t v206 = v203; // 0x406aa6
                while (v205 == 58) {
                    // 0x406a97
                    v203 = v206 + 1;
                    v204 = v203 + v123;
                    v205 = *(char *)v204;
                    v1 = v204;
                    v200 = v204;
                    v201 = v205;
                    v202 = v203;
                    v206 = v203;
                }
            }
            // 0x406a71
            v130 = v123;
            v131 = v16;
            v132 = v200;
            v133 = v202;
            if (v201 != 122) {
                goto lab_0x406768;
            } else {
                goto lab_0x406840;
            }
        }
        case 65: {
            goto lab_0x405b30;
        }
        case 66: {
            goto lab_0x405b30;
        }
        case 67: {
            // 0x406693
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x4060d2;
            } else {
                // 0x40669d
                *v41 = 0;
                int32_t v207 = *(int32_t *)(*tm + 20); // 0x4066b2
                int32_t v208 = v207 / 100; // 0x4066c3
                int32_t v209 = v208 + 19; // 0x4066c7
                int32_t v210 = v207 + 1900; // 0x4066db
                v171 = v123;
                v168 = v115;
                v182 = v209 - (int32_t)(-100 * v208 + v207 < 0 == v209 >= 0 == (v209 != 0));
                v178 = 0;
                v157 = v210 < 0 != ((v210 ^ v207) & (v207 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x4060bf;
            }
        }
        case 68: {
            // 0x405e27
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x406768;
            } else {
                // 0x405e30
                *v44 = (int64_t)"%m/%d/%y";
                goto lab_0x405e39;
            }
        }
        case 70: {
            // 0x405f29
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x406768;
            } else {
                // 0x405f32
                *v44 = (int64_t)"%Y-%m-%d";
                goto lab_0x405e39;
            }
        }
        case 71: {
            goto lab_0x405f40;
        }
        case 72: {
            // 0x4061d2
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x4061dc
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 8);
                v138 = 2;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 73: {
            // 0x4061ef
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x4061f9
                v167 = v115;
                v181 = (int64_t)*(int32_t *)v42;
                v138 = 2;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 77: {
            // 0x406208
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x406212
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 4);
                v138 = 2;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 78: {
            // 0x406225
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                uint32_t v211 = (int32_t)v115; // 0x40622f
                if (v211 != -1) {
                    int64_t v212 = (int64_t)*v47;
                    int64_t v213 = v212; // 0x406ec1
                    int64_t v214 = v115; // 0x406ec1
                    int64_t v215 = v212; // 0x406ec1
                    if (v211 <= 8) {
                        int64_t v216 = v213;
                        int64_t v217 = (v214 & 0xffffffff) + 1; // 0x406ee5
                        int64_t v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31); // 0x406ef0
                        v214 = v217;
                        v215 = v218;
                        while ((int32_t)v217 != 9) {
                            // 0x406ee0
                            v216 = v218;
                            v217 = (v214 & 0xffffffff) + 1;
                            v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31);
                            v214 = v217;
                            v215 = v218;
                        }
                    }
                    // 0x406ef7
                    v167 = v115;
                    v181 = v215;
                    v138 = v115 & 0xffffffff;
                    v148 = v18;
                } else {
                    // 0x406238
                    v167 = 9;
                    v181 = (int64_t)*v47;
                    v138 = 9;
                    v148 = v18;
                }
                goto lab_0x4060b0;
            }
        }
        case 80: {
            goto lab_0x406255;
        }
        case 82: {
            // 0x4061c4
            *v44 = (int64_t)"%H:%M";
            goto lab_0x405e39;
        }
        case 83: {
            // 0x406640
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x40664a
                v167 = v115;
                v181 = (int64_t)*(int32_t *)*tm;
                v138 = 2;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 84: {
            // 0x406a89
            *v44 = (int64_t)"%H:%M:%S";
            goto lab_0x405e39;
        }
        case 85: {
            // 0x40665c
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                int64_t v219 = *tm; // 0x406666
                v186 = *(int32_t *)(v219 + 28) + 7 - *(int32_t *)(v219 + 24);
                goto lab_0x40667d;
            }
        }
        case 86: {
            goto lab_0x405f40;
        }
        case 87: {
            // 0x4066ee
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                int64_t v220 = *tm; // 0x4066f4
                int32_t v221 = *(int32_t *)(v220 + 24); // 0x4066fe
                int32_t v222 = v221 + 6; // 0x406702
                *v64 = v221;
                int32_t v223 = *(int32_t *)(v220 + 28); // 0x406725
                v186 = 1 - v221 + v223 + 7 * ((v222 + (int32_t)(-0x6db6db6d * (int64_t)v222 / 0x100000000) >> 2) - (v222 >> 31));
                goto lab_0x40667d;
            }
        }
        case 88: {
            goto lab_0x405c70;
        }
        case 89: {
            // 0x4065ed
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            v130 = v123;
            v131 = v16;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x4060d2;
                }
                case 79: {
                    goto lab_0x406768;
                }
                default: {
                    // 0x406601
                    *v41 = 0;
                    int32_t v224 = *(int32_t *)(*tm + 20); // 0x406611
                    int32_t v225 = v224 + 1900; // 0x406614
                    v174 = v123;
                    v164 = v115;
                    v185 = v225;
                    v180 = 0;
                    v159 = v225 < 0 != ((v225 ^ v224) & (v224 ^ -0x80000000)) < 0;
                    v136 = 4;
                    v145 = v18;
                    goto lab_0x406630;
                }
            }
        }
        case 90: {
            char v226 = v27; // 0x4060f4
            *v43 = v226;
            *v39 = v226 != 0 ? 0 : (char)v16;
            int32_t len = strlen((char *)*str); // 0x40610f
            uint64_t v227 = (int64_t)len; // 0x40610f
            int64_t v228 = 0x100000000 * v115 >> 32;
            uint64_t v229 = (int32_t)v115 >= 0 ? v228 : 0; // 0x406125
            int64_t v230 = v229 <= v227 ? v227 : v229; // 0x40612d
            int64_t v231 = v3 - v20; // 0x406131
            v1 = v231;
            *v44 = v230;
            if (v231 <= v230) {
                // break -> 0x4059d3
                break;
            }
            int64_t v232 = v230; // 0x406145
            int64_t v233 = 0; // 0x406145
            if (v23 != 0) {
                char v234 = *v39; // 0x40614a
                char v235 = *v43; // 0x406150
                char v236 = v235; // 0x406156
                char v237 = v234; // 0x406156
                int64_t v238 = v23; // 0x406156
                if (v229 > v227) {
                    int64_t v239 = v228 - v227; // 0x40615b
                    v1 = v239;
                    int64_t v240 = v239 + v23; // 0x40615e
                    if (v18 == 48) {
                        // 0x40707e
                        memset((int64_t *)v23, 48, (int32_t)v239);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    } else {
                        // 0x40616c
                        *v43 = v235;
                        *v39 = v234;
                        memset((int64_t *)v23, 32, (int32_t)v1);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    }
                }
                int64_t v241 = v238;
                v1 = v227;
                int64_t v242 = *str; // 0x406195
                if (v236 != 0) {
                    // 0x406fbc
                    function_405880(v241, v242, v227);
                } else {
                    // 0x4061a6
                    if (v237 == 0) {
                        // 0x406fb2
                        memcpy((int64_t *)v241, (int64_t *)v242, len);
                    } else {
                        // 0x4061af
                        function_4058d0(v241, v242, v227);
                    }
                }
                // 0x4061b4
                v232 = *v44;
                v233 = v241 + v227;
            }
            // 0x4061b7
            v8 = v12;
            v9 = v13;
            v25 = v123;
            v21 = v232 + v20;
            v24 = v233;
            goto lab_0x4059ae;
        }
        case 97: {
            goto lab_0x405b30;
        }
        case 98: {
            goto lab_0x406751;
        }
        case 99: {
            goto lab_0x405c70;
        }
        case 100: {
            // 0x40692d
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x406937
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 12);
                v138 = 2;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 101: {
            // 0x40694a
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x406954
                v183 = *tm + 12;
                goto lab_0x406281;
            }
        }
        case 103: {
            goto lab_0x405f40;
        }
        case 104: {
            goto lab_0x406751;
        }
        case 106: {
            // 0x406961
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x40696b
                *v41 = 0;
                int32_t v243 = *(int32_t *)(*tm + 28); // 0x40697b
                int32_t v244 = v243 + 1; // 0x40697e
                v171 = v123;
                v168 = v115;
                v182 = v244;
                v178 = 0;
                v157 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v139 = 3;
                v149 = v18;
                goto lab_0x4060bf;
            }
        }
        case 107: {
            // 0x40626f
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x406279
                v183 = *tm + 8;
                goto lab_0x406281;
            }
        }
        case 108: {
            // 0x4062a6
            v183 = v42;
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                goto lab_0x406281;
            }
        }
        case 109: {
            // 0x4062b6
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x4062c0
                *v41 = 0;
                int32_t v245 = *(int32_t *)(*tm + 16); // 0x4062d0
                int32_t v246 = v245 + 1; // 0x4062d3
                v171 = v123;
                v168 = v115;
                v182 = v246;
                v178 = 0;
                v157 = v246 < 0 != (v246 & (v245 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x4060bf;
            }
        }
        case 110: {
            int32_t v247 = v115; // 0x4062e4
            int64_t v248 = 0x100000000 * v115 >> 32;
            int64_t v249 = v247 >= 0 ? v248 : 0; // 0x4062f5
            int64_t v250 = v249 == 0 ? 1 : v249; // 0x4062fb
            if (v3 - v20 <= v250) {
                // break -> 0x4059d3
                break;
            }
            // 0x40630f
            v155 = v250;
            v156 = 0;
            if (v23 != 0) {
                int64_t v251 = v23; // 0x406317
                if (v247 >= 2) {
                    int64_t v252 = v248 - 1; // 0x40631c
                    v1 = v252;
                    int64_t v253 = v252 + v23; // 0x406320
                    int64_t * v254 = (int64_t *)v23;
                    int32_t v255 = v252;
                    if (v18 == 48) {
                        // 0x40700b
                        memset(v254, 48, v255);
                        v251 = v253;
                    } else {
                        // 0x40632e
                        memset(v254, 32, v255);
                        v251 = v253;
                    }
                }
                // 0x40633e
                *(char *)v251 = 10;
                v155 = v250;
                v156 = v251 + 1;
            }
            goto lab_0x406346;
        }
        case 112: {
            // 0x406a81
            v129 = 0;
            goto lab_0x406255;
        }
        case 113: {
            // 0x406351
            v172 = v123;
            v169 = v115;
            v140 = 1;
            v150 = v18;
            if ((int32_t)v122 == 79) {
                goto lab_0x4060d2;
            } else {
                // 0x406369
                *v41 = 0;
                v173 = v123;
                v163 = v115;
                v184 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v179 = 0;
                v158 = 0;
                v141 = 1;
                v151 = v18;
                goto lab_0x406380;
            }
        }
        case 114: {
            goto lab_0x405c7d;
        }
        case 115: {
            int64_t v256 = *tm; // 0x405c9d
            *v39 = (char)v16;
            int128_t v257 = __asm_movdqu(*(int128_t *)(v256 + 32)); // 0x405cbf
            int128_t v258 = __asm_movdqu(*(int128_t *)v256); // 0x405cc4
            int128_t v259 = __asm_movdqu(*(int128_t *)(v256 + 16)); // 0x405cc8
            *(int128_t *)str2 = (int128_t)__asm_movaps(v258);
            *(int128_t *)(v49 + 160) = (int128_t)__asm_movaps(v259);
            *(int128_t *)v63 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v49 + 176) = (int128_t)__asm_movaps(v257);
            *(int64_t *)(v49 + 192) = *(int64_t *)(v256 + 48);
            int64_t v260 = function_40bf30(*v65, str2, v1, v124); // 0x405cf6
            int64_t v261 = v260;
            int64_t v262 = v261 >> 63; // 0x405d28
            int64_t v263 = (v261 >> 63 & -10) + v261; // 0x405d35
            int64_t v264 = (v260 < 0 ? -v263 : v263) + 48; // 0x405d48
            v1 = v264 & 0xffffffff;
            int64_t v265 = v40 - 1; // 0x405d4b
            *(char *)v265 = (char)v264;
            int64_t v266 = v265; // 0x405d56
            while (v262 != 0) {
                // 0x405d10
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & -10) + v261;
                v264 = (v260 < 0 ? -v263 : v263) + 48;
                v1 = v264 & 0xffffffff;
                v265 = v266 - 1;
                *(char *)v265 = (char)v264;
                v266 = v265;
            }
            int64_t v267 = (int64_t)*v39; // 0x405cfb
            int32_t v268 = v115; // 0x405d58
            int64_t v269 = v268 >= 0 == (v268 != 0) ? v115 & 0xffffffff : 1; // 0x405d60
            v170 = v123;
            v166 = v115;
            v135 = v269;
            v144 = v267;
            v147 = v18;
            v154 = v265;
            v175 = v123;
            v165 = v115;
            v137 = v269;
            v143 = v267;
            v146 = v18;
            v153 = v265;
            if (v260 < 0) {
                goto lab_0x406ac8;
            } else {
                goto lab_0x405d6d;
            }
        }
        case 116: {
            int32_t v270 = v115; // 0x406544
            int64_t v271 = 0x100000000 * v115 >> 32;
            int64_t v272 = v270 >= 0 ? v271 : 0; // 0x406555
            int64_t v273 = v272 == 0 ? 1 : v272; // 0x40655b
            if (v3 - v20 <= v273) {
                // break -> 0x4059d3
                break;
            }
            // 0x40656f
            v155 = v273;
            v156 = 0;
            if (v23 != 0) {
                int64_t v274 = v23; // 0x40657b
                if (v270 >= 2) {
                    int64_t v275 = v271 - 1; // 0x406580
                    v1 = v275;
                    int64_t v276 = v275 + v23; // 0x406584
                    int64_t * v277 = (int64_t *)v23;
                    int32_t v278 = v275;
                    if (v18 == 48) {
                        // 0x407020
                        memset(v277, 48, v278);
                        v274 = v276;
                    } else {
                        // 0x406592
                        memset(v277, 32, v278);
                        v274 = v276;
                    }
                }
                // 0x4065a2
                *(char *)v274 = 9;
                v155 = v273;
                v156 = v274 + 1;
            }
            goto lab_0x406346;
        }
        case 117: {
            int32_t v279 = *(int32_t *)(*tm + 24); // 0x4065bf
            int32_t v280 = v279 + 6; // 0x4065c2
            *v64 = v279;
            v167 = v115;
            v181 = v279 + 7 + -7 * ((v280 + (int32_t)(-0x6db6db6d * (int64_t)v280 / 0x100000000) >> 2) - (v280 >> 31));
            v138 = 1;
            v148 = v18;
            goto lab_0x4060b0;
        }
        case 119: {
            // 0x406738
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x406768;
            } else {
                // 0x40673e
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 24);
                v138 = 1;
                v148 = v18;
                goto lab_0x4060b0;
            }
        }
        case 120: {
            goto lab_0x405c70;
        }
        case 121: {
            // 0x406a10
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x4060d2;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x406a2a
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x406a42
                v167 = v115;
                v181 = v283;
                v138 = 2;
                v148 = v18;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x406a51
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x406a57
                    v167 = v115;
                    v181 = v285 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
                goto lab_0x4060b0;
            }
        }
        case 122: {
            goto lab_0x406840;
        }
        default: {
            goto lab_0x406768;
        }
    }
  lab_0x4059ae:
    // 0x4059ae
    v5 = v24;
    result = v21;
    int64_t v286 = v25 + 1; // 0x4059ae
    char v287 = *(char *)v286; // 0x4059ae
    v6 = v8;
    v7 = v9;
    v30 = v287;
    v33 = v286;
    v19 = result;
    v22 = v5;
    if (v287 == 0) {
        // 0x4059bb
        goto lab_0x4059bb_2;
    }
    goto lab_0x40598a;
  lab_0x405b30:
    // 0x405b30
    v130 = v123;
    v131 = v16;
    int64_t v288; // 0x405920
    if ((int32_t)v122 != 0) {
        goto lab_0x406768;
    } else {
        // 0x405b39
        v288 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff;
        goto lab_0x405b40;
    }
  lab_0x405f40:
    // 0x405f40
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 69) {
        goto lab_0x406768;
    } else {
        int64_t v289 = *tm; // 0x405f4a
        int32_t v290 = *(int32_t *)(v289 + 20); // 0x405f4f
        uint32_t v291 = *(int32_t *)(v289 + 28); // 0x405f52
        uint32_t v292 = *(int32_t *)(v289 + 24); // 0x405f56
        *v64 = v290;
        int32_t v293 = v290 - 100 + (v290 >> 31 & 400); // 0x405f6d
        int32_t v294 = v291 - v292; // 0x405f74
        int32_t v295 = v294 + 382; // 0x405f77
        int32_t v296 = v291 - 379 - v294 + 7 * ((v295 + (int32_t)(-0x6db6db6d * (int64_t)v295 / 0x100000000) >> 2) - (v295 >> 31)); // 0x405f9e
        int32_t v297; // 0x405920
        int32_t v298; // 0x406029
        if (v296 < 0) {
            // 0x406e37
            v1 = 365;
            int64_t v299 = 365; // 0x406e43
            if ((v293 + 3) % 4 == 0) {
                int32_t v300 = v293 - 1;
                v1 = 366;
                v299 = 366;
                if (v300 % 100 - v300 == 1 - v293) {
                    uint32_t v301 = v300 % 400;
                    int64_t v302 = v301; // 0x406e6e
                    int64_t v303 = v302 + 366 + (v302 ^ 0xffffffff) + (int64_t)(v301 == 0) & 0xffffffff; // 0x406e77
                    v1 = v303;
                    v299 = v303;
                }
            }
            int64_t v304 = v299; // 0x406e7d
            int64_t v305; // 0x405f52
            int64_t v306 = v304 + v305; // 0x406e7d
            int64_t v307; // 0x405f56
            int64_t v308 = v306 - v307 + 382; // 0x406e91
            v297 = (int32_t)(v306 - v308) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v308 >> 32) / 0x100000000 + v308) >> 2) - ((int32_t)v308 >> 31));
        } else {
            int64_t v309 = 365; // 0x405fb5
            if (v293 % 4 == 0) {
                // 0x405fb7
                v309 = 366;
                if (v293 % 100 == 0) {
                    // 0x405fdc
                    v309 = v293 == 0 ? 366 : 365;
                }
            }
            int64_t v310 = (int64_t)v291 - v309; // 0x406000
            int64_t v311 = v310 - (int64_t)v292 + 382; // 0x406007
            v298 = (int32_t)(v310 - v311) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v311 >> 32) / 0x100000000 + v311) >> 2) - ((int32_t)v311 >> 31));
            v297 = v298 >= 0 ? v298 : v296;
        }
        int64_t v312 = (v298 >> 31) + 1;
        if (v125 == 71) {
            uint32_t v313 = *v64; // 0x406f25
            *v41 = 0;
            int32_t v314 = -1900 - (int32_t)v312; // 0x406f39
            int32_t v315 = v313 - v314; // 0x406f3c
            v171 = v123;
            v168 = v115;
            v182 = v312 + 1900 + (int64_t)v313 & 0xffffffff;
            v178 = 0;
            v157 = v315 < 0 != ((v315 ^ v313) & (v313 ^ v314)) < 0;
            v139 = 4;
            v149 = v18;
            goto lab_0x4060bf;
        } else {
            if (v125 != 103) {
                int32_t v316 = v297;
                int32_t v317 = v316 < 0 ? 2 : 1; // 0x406f1a
                v167 = v115;
                v181 = v317 + (v316 + (int32_t)(-0x6db6db6d * (int64_t)v316 / 0x100000000) >> 2);
                v138 = 2;
                v148 = v18;
            } else {
                int32_t v318 = *v64; // 0x40604f
                int32_t v319 = v312; // 0x40607a
                int32_t v320 = (v318 % 100 + v319) % 100;
                int64_t v321 = v320; // 0x406090
                v167 = v115;
                v181 = v321;
                v138 = 2;
                v148 = v18;
                if (v320 < 0) {
                    int32_t v322 = -1900 - v319; // 0x4060a0
                    int32_t v323 = v318 - v322; // 0x4060a5
                    int64_t v324 = v323 < 0 == ((v323 ^ v318) & (v318 ^ v322)) < 0 ? v321 + 100 : -v321; // 0x4060a8
                    v167 = v115;
                    v181 = v324 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
            }
            goto lab_0x4060b0;
        }
    }
  lab_0x406255:
    // 0x406255
    v126 = 112;
    v127 = (char)v27 != 0 ? 0 : v16;
    v128 = ((char)v27 != 0 ? v27 : v129) & 0xffffffff;
    goto lab_0x405c7d;
  lab_0x405c70:
    // 0x405c70
    v126 = v124;
    v127 = v16;
    v128 = 0;
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 79) {
        goto lab_0x406768;
    } else {
        goto lab_0x405c7d;
    }
  lab_0x406751:;
    int64_t v660 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff; // 0x406754
    v288 = v660;
    v130 = v123;
    v131 = v660;
    if ((int32_t)v122 == 0) {
        goto lab_0x405b40;
    } else {
        goto lab_0x406768;
    }
  lab_0x405c7d:;
    int64_t v325 = v128;
    int64_t v326 = v127;
    int64_t v327 = v126;
    *v45 = 0x2520;
    int64_t v328 = v327; // 0x405c8a
    int64_t v329 = v123; // 0x405c8a
    int64_t v330 = v115; // 0x405c8a
    int64_t v331 = 0; // 0x405c8a
    int64_t v332 = v326; // 0x405c8a
    int64_t v333 = v18; // 0x405c8a
    int64_t v334 = v325; // 0x405c8a
    int64_t v335; // 0x405920
    int64_t v336; // 0x405920
    int64_t v337; // 0x405920
    int64_t v338; // 0x405920
    int64_t v339; // 0x405920
    int64_t v340; // 0x405920
    int64_t v341; // 0x405920
    int64_t v342; // 0x405920
    if ((int32_t)v122 != 0) {
        goto lab_0x4060df;
    } else {
        // 0x405c90
        v340 = *v46;
        v342 = v327;
        v341 = v115;
        v338 = v123;
        v339 = v122;
        v335 = v326;
        v336 = v18;
        v337 = v325;
        goto lab_0x405b60;
    }
  lab_0x406840:;
    int64_t v343 = v132;
    int64_t v344 = *tm; // 0x406840
    v8 = v12;
    v9 = v13;
    v25 = v343;
    v21 = v20;
    v24 = v23;
    int64_t v345; // 0x405920
    uint32_t v346; // 0x40688e
    uint32_t v347; // 0x4068c3
    int32_t v348; // 0x4068c7
    if (*(int32_t *)(v344 + 32) < 0) {
        goto lab_0x4059ae;
    } else {
        int64_t v349 = *(int64_t *)(v344 + 40); // 0x406850
        int32_t v350 = v349; // 0x40685a
        int64_t v351 = 1; // 0x40685c
        if (v350 >= 0) {
            // 0x40685e
            v351 = 0;
            if (v350 == 0) {
                // 0x406866
                v351 = *(char *)*str == 45;
            }
        }
        // 0x406872
        v345 = v351;
        int64_t v352 = 0x100000000 * v349 >> 32; // 0x40687e
        int32_t v353 = v350 >> 31; // 0x406882
        *v48 = v353;
        v346 = ((int32_t)(-0x6e5d4c3b * v352 / 0x100000000) + v350 >> 11) - v353;
        *v64 = v346;
        int32_t v354 = ((int32_t)(-0x77777777 * v352 / 0x100000000 + v349) >> 5) - *v48; // 0x4068a0
        v347 = -60 * ((v354 + (int32_t)(-0x77777777 * (int64_t)v354 / 0x100000000) >> 5) - (v354 >> 31)) + v354;
        v348 = -60 * v354 + v350;
        v177 = v343;
        switch (v133) {
            case 1: {
                goto lab_0x406f96;
            }
            case 0: {
                // 0x406fc6
                *v41 = 1;
                v171 = v343;
                v168 = v115;
                v182 = v347 + 100 * v346;
                v178 = 0;
                v157 = v345;
                v139 = 5;
                v149 = v18;
                goto lab_0x4060bf;
            }
            case 2: {
                goto lab_0x406f72;
            }
            case 3: {
                if (v348 != 0) {
                    goto lab_0x406f72;
                } else {
                    if (v347 != 0) {
                        goto lab_0x406f96;
                    } else {
                        // 0x406fe7
                        *v41 = 1;
                        v171 = v343;
                        v168 = v115;
                        v182 = v346;
                        v178 = v347;
                        v157 = v345;
                        v139 = 3;
                        v149 = v18;
                        goto lab_0x4060bf;
                    }
                }
            }
            default: {
                goto lab_0x4068f7;
            }
        }
    }
  lab_0x406768:;
    int64_t v355 = v130 + 1; // 0x40676c
    v1 = v355 & 0xffffffff;
    int64_t v356 = v130 - 1;
    int64_t v357 = v356; // 0x40677e
    while (*(char *)v356 != 37) {
        // 0x40676f
        v356 = v357 - 1;
        v357 = v356;
    }
    int64_t v358 = 0x100000000 * (v355 - v356) >> 32; // 0x406789
    int64_t v359 = v3 - v20; // 0x40678f
    v1 = v359;
    int64_t v360 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x406797
    v134 = v359;
    v162 = v360;
    v176 = v358;
    v160 = v130;
    v161 = v356;
    v142 = v131;
    v152 = v358 >= v360 ? v358 : v360;
    goto lab_0x4067a3;
  lab_0x4067a3:
    // 0x4067a3
    if (v134 <= v152) {
        // break -> 0x4059d3
        goto lab_0x4059d3_11;
    }
    int64_t v361 = v160;
    int64_t v362 = v361; // 0x4067af
    int64_t v363 = 0; // 0x4067af
    if (v23 != 0) {
        int64_t v364 = v142;
        int64_t v365 = v161;
        int64_t v366 = v176;
        int64_t v367 = v366; // 0x4067b8
        int64_t v368 = v361; // 0x4067b8
        int64_t v369 = v365; // 0x4067b8
        int64_t v370 = v364; // 0x4067b8
        int64_t v371 = v23; // 0x4067b8
        if (v366 < v162) {
            // 0x4067ba
            *v54 = v366;
            int64_t v372 = (0x100000000 * v115 >> 32) - v366; // 0x4067c2
            v1 = v372;
            *v55 = v361;
            int64_t v373 = v372 + v23; // 0x4067ca
            *v53 = v365;
            *v41 = (char)v364;
            int64_t * v374 = (int64_t *)v23;
            int32_t v375 = v1;
            if (v18 == 48) {
                // 0x406d44
                memset(v374, 48, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            } else {
                // 0x4067e2
                memset(v374, 32, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            }
        }
        int64_t v376 = v371;
        int64_t v377 = v369;
        *v53 = v368;
        v1 = v367;
        *v44 = v367;
        if ((char)v370 == 0) {
            // 0x406b8e
            memcpy((int64_t *)v376, (int64_t *)v377, (int32_t)v1);
        } else {
            // 0x406823
            function_4058d0(v376, v377, v1);
        }
        // 0x406832
        v362 = *v53;
        v363 = *v44 + v376;
    }
    // 0x406835
    v8 = v12;
    v9 = v13;
    v25 = v362;
    v21 = v152 + v20;
    v24 = v363;
    goto lab_0x4059ae;
  lab_0x4068f7:;
    int64_t v378 = v177;
    int64_t v379 = v3 - v20; // 0x406900
    v1 = v379;
    v130 = v378;
    v131 = v16;
    if (*(char *)v378 != 37) {
        goto lab_0x406768;
    } else {
        int64_t v380 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x406908
        v134 = v379;
        v162 = v380;
        v176 = 1;
        v160 = v378;
        v161 = v378;
        v142 = v16;
        v152 = v380 != 0 ? v380 : 1;
        goto lab_0x4067a3;
    }
  lab_0x4060d2:
    // 0x4060d2
    *v45 = 0x2520;
    v328 = v124;
    v329 = v172;
    v330 = v169;
    v331 = v140;
    v332 = v16;
    v333 = v150;
    v334 = 0;
    goto lab_0x4060df;
  lab_0x405e39:
    // 0x405e39
    *v50 = (int64_t)*v47;
    *v51 = *v65;
    int64_t v643 = *v44; // 0x405e62
    v1 = v643;
    uint64_t v644 = function_405920(0, -1, v643, *tm, v16, *v52); // 0x405e67
    int64_t v645 = 0x100000000 * v115 >> 32;
    uint64_t v646 = (int32_t)v115 >= 0 ? v645 : 0; // 0x405e80
    int64_t v647 = v644 >= v646 ? v644 : v646; // 0x405e88
    int64_t v648 = v3 - v20; // 0x405e8c
    *v53 = v647;
    if (v648 <= v647) {
        // break -> 0x4059d3
        goto lab_0x4059d3_11;
    }
    int64_t v649 = v647; // 0x405ea0
    int64_t v650 = 0; // 0x405ea0
    if (v23 != 0) {
        int64_t v651 = v644; // 0x405ea5
        int64_t v652 = v648; // 0x405ea5
        int64_t v653 = v23; // 0x405ea5
        if (v644 < v646) {
            // 0x405ea7
            *v54 = v644;
            int64_t v654 = v645 - v644; // 0x405eaf
            v1 = v654;
            *v55 = v648;
            int64_t v655 = v654 + v23; // 0x405eb7
            int64_t * v656 = (int64_t *)v23;
            int32_t v657 = v1;
            if (v18 == 48) {
                // 0x406e18
                memset(v656, 48, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            } else {
                // 0x405ec5
                memset(v656, 32, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            }
        }
        // 0x405edf
        *v55 = v651;
        *v50 = (int64_t)*v47;
        *v51 = *v65;
        int64_t v658 = *v44; // 0x405f06
        v1 = v658;
        function_405920((int32_t)v653, v652, v658, *tm, v16, *v52);
        v649 = *v53;
        v650 = *v55 + v653;
    }
    // 0x405f1c
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v649 + v20;
    v24 = v650;
    goto lab_0x4059ae;
  lab_0x405b40:
    // 0x405b40
    *v45 = 0x2520;
    v340 = *v46;
    v342 = v124;
    v341 = v115;
    v338 = v123;
    v339 = 0;
    v335 = v288;
    v336 = v18;
    v337 = 0;
    goto lab_0x405b60;
  lab_0x406281:;
    int64_t v659 = (int64_t)*(int32_t *)v183;
    v167 = v115;
    v181 = v659;
    v138 = 2;
    v148 = v18;
    switch ((int32_t)v18) {
        case 48: {
            goto lab_0x4060b0;
        }
        case 45: {
            goto lab_0x4060b0;
        }
        default: {
            // 0x40629b
            v167 = v115;
            v181 = v659;
            v138 = 2;
            v148 = 95;
            goto lab_0x4060b0;
        }
    }
  lab_0x406346:
    // 0x406346
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v155 + v20;
    v24 = v156;
    goto lab_0x4059ae;
  lab_0x4060df:
    // 0x4060df
    *(char *)(v49 + 114) = (char)v122;
    v340 = v49 + 115;
    v342 = v328;
    v341 = v330;
    v338 = v329;
    v339 = v331 & 0xffffffff;
    v335 = v332;
    v336 = v333;
    v337 = v334;
    goto lab_0x405b60;
  lab_0x406ac8:;
    int64_t v630 = v153;
    int64_t v631 = v143;
    int64_t v632 = v137;
    int64_t v633 = v165;
    int64_t v634 = v175;
    *v41 = 45;
    char v436 = 45; // 0x406ad6
    int64_t v437 = v634; // 0x406ad6
    int64_t v438 = v633; // 0x406ad6
    int64_t v439 = v632; // 0x406ad6
    int64_t v440 = v631; // 0x406ad6
    int64_t v441 = v146; // 0x406ad6
    int64_t v442 = v630; // 0x406ad6
    int32_t v429; // 0x405920
    int64_t v433; // 0x405920
    int64_t v434; // 0x405920
    int64_t v435; // 0x405920
    int64_t v432; // 0x405920
    int64_t v431; // 0x405920
    int64_t v430; // 0x405920
    if ((int32_t)v146 != 45) {
        goto lab_0x406410;
    } else {
        // 0x406ac8
        v429 = v633;
        v430 = 45;
        v431 = v634;
        v432 = v633;
        v433 = v632;
        v434 = v631;
        v435 = v630;
        goto lab_0x406adc;
    }
  lab_0x405d6d:;
    int64_t v524 = v135;
    int64_t v523 = v166;
    int64_t v522 = v40 - v154; // 0x405d79
    char v505; // 0x405920
    int64_t v510; // 0x405920
    int64_t v511; // 0x405920
    int64_t v512; // 0x405920
    int64_t v509; // 0x405920
    int64_t v506; // 0x405920
    int64_t v508; // 0x405920
    int64_t v507; // 0x405920
    if ((int32_t)v147 == 45) {
        goto lab_0x405d94;
    } else {
        int32_t v635 = v524 - v522; // 0x405d8b
        if (v635 >= 0 == (v635 != 0)) {
            int64_t v636; // 0x405d7c
            int32_t v637; // 0x405d7f
            if (v637 == 95) {
                // 0x406c8e
                *v41 = 0;
                v505 = 0;
                v506 = v636;
                int64_t v638; // 0x405920
                v507 = v638;
                v508 = v523;
                int64_t v639; // 0x405d88
                v509 = v639;
                v510 = v524;
                int64_t v640; // 0x405920
                v511 = v640;
                int64_t v641; // 0x405920
                v512 = v641;
                goto lab_0x406c93;
            } else {
                int64_t v642 = 0x100000000 * v524 >> 32; // 0x406f5b
                v1 = v642;
                if (v642 >= v636) {
                    // break -> 0x4059d3
                    goto lab_0x4059d3_11;
                }
                // 0x406f67
                goto lab_0x4064e5;
            }
        } else {
            goto lab_0x405d94;
        }
    }
  lab_0x4060b0:
    // 0x4060b0
    *v41 = 0;
    v171 = v123;
    v168 = v167;
    v182 = v181;
    v178 = 0;
    v157 = 0;
    v139 = v138;
    v149 = v148;
    goto lab_0x4060bf;
  lab_0x4060bf:;
    int64_t v596 = v149;
    int64_t v597 = v139;
    int64_t v598 = v157;
    int64_t v599 = v178;
    int64_t v600 = v182;
    int64_t v601 = v168;
    int64_t v602 = v171;
    v174 = v602;
    v164 = v601;
    v185 = v600;
    v180 = v599;
    v159 = v598;
    v136 = v597;
    v145 = v596;
    int64_t v603; // 0x405920
    int64_t v604; // 0x405920
    int64_t v605; // 0x405920
    int64_t v606; // 0x405920
    int64_t v607; // 0x405920
    int64_t v608; // 0x405920
    int64_t v609; // 0x405920
    if ((int32_t)v122 != 79) {
        goto lab_0x406630;
    } else {
        // 0x4060c9
        v172 = v602;
        v169 = v601;
        v140 = v597;
        v150 = v596;
        v607 = v602;
        v606 = v601;
        v609 = v600;
        v608 = v599;
        v605 = v598;
        v603 = v597;
        v604 = v596;
        if ((char)v598 != 0) {
            goto lab_0x406639;
        } else {
            goto lab_0x4060d2;
        }
    }
  lab_0x40667d:;
    int32_t v610 = v186;
    int64_t v611 = -0x6db6db6d * (int64_t)v610 / 0x100000000;
    v1 = v611;
    v167 = v115;
    v181 = (v610 + (int32_t)v611 >> 2) - (v610 >> 31);
    v138 = 2;
    v148 = v18;
    goto lab_0x4060b0;
  lab_0x406630:
    // 0x406630
    v173 = v174;
    v163 = v164;
    v184 = v185;
    v179 = v180;
    v158 = v159;
    v141 = v136;
    v151 = v145;
    v607 = v174;
    v606 = v164;
    v609 = v185;
    v608 = v180;
    v605 = v159;
    v603 = v136;
    v604 = v145;
    if ((char)v159 == 0) {
        goto lab_0x406380;
    } else {
        goto lab_0x406639;
    }
  lab_0x405b60:;
    int64_t v381 = v337;
    int64_t v382 = v336;
    int64_t v383 = v341;
    *(char *)v340 = (char)v342;
    v1 = format;
    *(char *)(v340 + 1) = 0;
    *v44 = v338;
    *v56 = (int32_t)v339;
    *v39 = (char)v335;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x405b8c
    int64_t v384 = *v44; // 0x405b91
    v8 = v12;
    v9 = v13;
    v25 = v384;
    v21 = v20;
    v24 = v23;
    int64_t v385; // 0x405920
    int64_t v386; // 0x405920
    int64_t v387; // 0x405920
    int64_t v388; // 0x405920
    int64_t v389; // 0x405920
    int64_t v390; // 0x405920
    int64_t v391; // 0x405920
    int64_t v392; // 0x405920
    int64_t v393; // 0x405920
    int64_t v394; // 0x405920
    int64_t v395; // 0x405920
    int64_t v396; // 0x405920
    if (copied_chars == 0) {
        goto lab_0x4059ae;
    } else {
        uint64_t v397 = (int64_t)copied_chars - 1; // 0x405b9f
        int64_t v398 = 0x100000000 * v383 >> 32;
        uint64_t v399 = (int32_t)v383 >= 0 ? v398 : 0; // 0x405bb1
        int64_t v400 = v397 >= v399 ? v397 : v399; // 0x405bb9
        int64_t v401 = v3 - v20; // 0x405bbd
        v1 = v401;
        if (v401 <= v400) {
            // break -> 0x4059d3
            goto lab_0x4059d3_11;
        }
        // 0x405bc9
        v392 = v400;
        v391 = v384;
        v388 = v20;
        v390 = 0;
        if (v23 == 0) {
            goto lab_0x405c66;
        } else {
            char v402 = *v39; // 0x405bd7
            int64_t v403 = v397; // 0x405be0
            int64_t v404 = v384; // 0x405be0
            char v405 = v402; // 0x405be0
            int64_t v406 = v23; // 0x405be0
            if (v397 < v399 == *v56 == 0) {
                // 0x405be7
                *v55 = v397;
                int64_t v407 = v398 - v397; // 0x405bef
                v1 = v407;
                *v53 = v384;
                int64_t v408 = v407 + v23; // 0x405bf7
                *v41 = v402;
                int64_t * v409 = (int64_t *)v23;
                int32_t v410 = v1;
                if ((int32_t)v382 == 48) {
                    // 0x406bb6
                    memset(v409, 48, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                } else {
                    // 0x405c0a
                    memset(v409, 32, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                }
            }
            int64_t v411 = v406;
            *v53 = v404;
            v1 = v403;
            *v44 = v403;
            v393 = v400;
            v396 = v57;
            v395 = v411;
            v385 = v405;
            v386 = v20;
            if ((char)v381 != 0) {
                // 0x406ba2
                function_405880(v411, v57, v1);
                v394 = v400;
                v387 = v20;
                v389 = v411;
                goto lab_0x405c63;
            } else {
                goto lab_0x405c4b;
            }
        }
    }
  lab_0x406380:;
    int64_t v412 = v151;
    int64_t v413 = v141;
    int64_t v414 = v163;
    int64_t v415 = v173;
    *v39 = (char)v158;
    int64_t v416 = v184; // 0x406393
    int64_t v417 = v40 - 1;
    int64_t v418 = v417; // 0x4063a0
    if (v179 % 2 != 0) {
        // 0x4063a2
        *(char *)v417 = 58;
        v418 = v40 - 2;
    }
    int64_t v419 = v418;
    uint32_t v420 = (int32_t)v179 >> 1; // 0x4063b5
    int64_t v421 = 0xcccccccd * v416 / 0x800000000; // 0x4063b7
    v1 = v421;
    *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    while (v416 < 10 != (v420 == 0)) {
        // 0x4063da
        v416 = v1 & 0xffffffff;
        int64_t v422 = v420; // 0x4063dc
        int64_t v423 = v419;
        v417 = v423 - 1;
        v418 = v417;
        if (v422 % 2 != 0) {
            // 0x4063a2
            *(char *)v417 = 58;
            v418 = v423 - 2;
        }
        // 0x4063b0
        v419 = v418;
        v420 = (int32_t)v422 >> 1;
        v421 = 0xcccccccd * v416 / 0x800000000;
        v1 = v421;
        *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    }
    int32_t v424 = v413; // 0x4063e6
    int32_t v425 = v414;
    int32_t v426 = v424 - v425; // 0x4063e6
    int64_t v427 = v426 < 0 == ((v426 ^ v424) & (int32_t)(v413 ^ v414)) < 0 ? v413 : v414;
    int64_t v428 = v427 & 0xffffffff; // 0x4063e9
    v175 = v415;
    v165 = v414;
    v137 = v428;
    v143 = v16;
    v146 = v412;
    v153 = v419;
    if (*v39 != 0) {
        goto lab_0x406ac8;
    } else {
        // 0x4063f6
        v170 = v415;
        v166 = v414;
        v135 = v428;
        v144 = v16;
        v147 = v412;
        v154 = v419;
        if (*v41 == 0) {
            goto lab_0x405d6d;
        } else {
            // 0x406401
            v429 = v425;
            v430 = 43;
            v431 = v415;
            v432 = v414;
            v433 = v428;
            v434 = v16;
            v435 = v419;
            if ((int32_t)v412 == 45) {
                goto lab_0x406adc;
            } else {
                // 0x40640b
                *v41 = 43;
                v436 = 43;
                v437 = v415;
                v438 = v414;
                v439 = v428;
                v440 = v16;
                v441 = v412;
                v442 = v419;
                goto lab_0x406410;
            }
        }
    }
  lab_0x406410:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    int64_t v448 = v437;
    int64_t v449 = v40 - v443; // 0x406420
    int64_t v450 = (v449 ^ 0xffffffff) + v446; // 0x406423
    uint64_t v451 = v3 - v20; // 0x406426
    int64_t v452; // 0x405920
    int64_t v453; // 0x405920
    int64_t v454; // 0x405920
    int64_t v455; // 0x405920
    int64_t v456; // 0x405920
    int64_t v457; // 0x405920
    int64_t v458; // 0x405920
    int64_t v459; // 0x405920
    int64_t v460; // 0x405920
    int64_t v461; // 0x405920
    int64_t v462; // 0x405920
    int64_t v463; // 0x405920
    int64_t v464; // 0x405920
    int64_t v465; // 0x405920
    int64_t v466; // 0x405920
    int64_t v467; // 0x405920
    int64_t v468; // 0x405920
    int64_t v469; // 0x405920
    int64_t v470; // 0x405920
    int64_t v471; // 0x405920
    int64_t v472; // 0x405920
    int64_t v473; // 0x405920
    int64_t v474; // 0x405920
    int64_t v475; // 0x405920
    int64_t v476; // 0x405920
    int64_t v477; // 0x40646a
    if ((int32_t)v450 < 1) {
        int64_t v478 = 0x100000000 * v447 >> 32;
        int64_t v479 = (int32_t)v447 >= 0 ? v478 : 0; // 0x406bed
        int64_t v480 = v479 != 0 ? v479 : 1; // 0x406bf3
        if (v480 >= v451) {
            // break -> 0x4059d3
            goto lab_0x4059d3_11;
        }
        int64_t v481 = v449; // 0x406c03
        int64_t v482 = v480; // 0x406c03
        int64_t v483 = v479; // 0x406c03
        int64_t v484 = v446; // 0x406c03
        int64_t v485 = v445; // 0x406c03
        int64_t v486 = 0; // 0x406c03
        if (v23 != 0) {
            int32_t v487 = v446; // 0x406c05
            int64_t v488 = v449; // 0x406c08
            int64_t v489 = v480; // 0x406c08
            int64_t v490 = v479; // 0x406c08
            int64_t v491 = v446; // 0x406c08
            int64_t v492 = v445; // 0x406c08
            int64_t v493 = v23; // 0x406c08
            if (v487 == 0 && v479 >= 2) {
                // 0x406c10
                *v61 = v449;
                int64_t v494 = v478 - 1; // 0x406c18
                v1 = v494;
                *v62 = v480;
                *v59 = v479;
                *v53 = v494 + v23;
                *v60 = v487;
                *v43 = (char)v445;
                if ((int32_t)v444 == 48) {
                    // 0x407035
                    int64_t * v495; // 0x405920
                    int32_t v496; // 0x405920
                    memset(v495, 48, v496);
                    int64_t v497 = *v53; // 0x407042
                    unsigned char v498 = *v43; // 0x407047
                    uint32_t v499 = *v60; // 0x40704d
                    int64_t v500 = *v59; // 0x407052
                    int64_t v501 = *v62; // 0x407057
                    int64_t v502 = *v61; // 0x40705c
                    v488 = v502;
                    v489 = v501;
                    v490 = v500;
                    v491 = v499;
                    v492 = v498;
                    v493 = v497;
                } else {
                    // 0x406c43
                    memset((int64_t *)v23, 32, (int32_t)v1);
                    v488 = *v61;
                    v489 = *v62;
                    v490 = *v59;
                    v491 = (int64_t)*v60;
                    v492 = (int64_t)*v43;
                    v493 = *v53;
                }
            }
            // 0x406c6f
            *(char *)v493 = *v41;
            v481 = v488;
            v482 = v489;
            v483 = v490;
            v484 = v491;
            v485 = v492;
            v486 = v493 + 1;
        }
        int64_t v503 = v482 + v20; // 0x406c80
        v472 = v3 - v503;
        v476 = v481;
        v473 = v447;
        v468 = v448;
        v469 = v483;
        v453 = v484;
        v457 = v485;
        v459 = v444;
        v461 = v443;
        v462 = v503;
        v466 = v486;
        goto lab_0x405da6;
    } else {
        int32_t v504 = v444; // 0x406432
        v505 = v436;
        v506 = v451;
        v507 = v448;
        v508 = v447;
        v509 = v450;
        v510 = v446;
        v511 = v445;
        v512 = v443;
        if (v504 == 95) {
            goto lab_0x406c93;
        } else {
            // 0x40643c
            if (0x100000000 * v446 >> 32 >= v451) {
                // break -> 0x4059d3
                goto lab_0x4059d3_11;
            }
            int64_t v513 = 0x100000000 * v447 >> 32;
            int64_t v514 = (int32_t)v447 >= 0 ? v513 : 0; // 0x406457
            v1 = v514;
            uint64_t v515 = v514 != 0 ? v514 : 1; // 0x40645d
            if (v515 >= v451) {
                // break -> 0x4059d3
                goto lab_0x4059d3_11;
            }
            // 0x40646a
            v477 = v515 + v20;
            int64_t v516 = 0x100000000 * v450 >> 32; // 0x40646d
            v475 = v449;
            v467 = v448;
            v471 = v516;
            v452 = v446;
            v456 = v445;
            v458 = v444;
            v460 = v443;
            v463 = v477;
            v465 = 0;
            if (v23 == 0) {
                goto lab_0x406530;
            } else {
                int32_t v517 = v446; // 0x40647c
                v474 = v449;
                v470 = v516;
                v454 = v446;
                v455 = v445;
                v464 = v23;
                if (v517 == 0 && v514 >= 2) {
                    // 0x406487
                    *v59 = v516;
                    int64_t v518 = v513 - 1; // 0x40648f
                    v1 = v518;
                    *v54 = v449;
                    int64_t v519 = v518 + v23; // 0x406498
                    *v56 = v517;
                    *v39 = (char)v445;
                    int64_t * v520 = (int64_t *)v23;
                    int32_t v521 = v1;
                    if (v504 == 48) {
                        // 0x40709f
                        memset(v520, 48, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    } else {
                        // 0x4064b0
                        memset(v520, 32, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    }
                }
                // 0x4064d5
                *(char *)v464 = *v41;
                goto lab_0x4064e5;
            }
        }
    }
  lab_0x405d94:
    // 0x405d94
    v472 = v3 - v20;
    v476 = v522;
    v473 = v523;
    v468 = v170;
    v469 = (int32_t)v523 >= 0 ? 0x100000000 * v523 >> 32 : 0;
    v453 = v524;
    v457 = v144;
    v459 = v147;
    v461 = v154;
    v462 = v20;
    v466 = v23;
    goto lab_0x405da6;
  lab_0x406f96:
    // 0x406f96
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v347 + 100 * v346;
    v178 = 4;
    v157 = v345;
    v139 = 6;
    v149 = v18;
    goto lab_0x4060bf;
  lab_0x406f72:
    // 0x406f72
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v348 + 0x2710 * v346 + 100 * v347;
    v178 = 20;
    v157 = v345;
    v139 = 9;
    v149 = v18;
    goto lab_0x4060bf;
  lab_0x406639:
    // 0x406639
    v173 = v607;
    v163 = v606;
    v184 = -v609 & 0xffffffff;
    v179 = v608;
    v158 = v605;
    v141 = v603;
    v151 = v604;
    goto lab_0x406380;
  lab_0x406adc:;
    int64_t v612 = 0x100000000 * v432 >> 32;
    int64_t v613 = v429 >= 0 ? v612 : 0; // 0x406af2
    uint64_t v614 = v613 != 0 ? v613 : 1; // 0x406af8
    if (v3 - v20 <= v614) {
        // break -> 0x4059d3
        goto lab_0x4059d3_11;
    }
    int64_t v615 = v434;
    int64_t v616 = v433;
    int64_t v617 = v613; // 0x406b0b
    int64_t v618 = v616; // 0x406b0b
    int64_t v619 = v615; // 0x406b0b
    int64_t v620 = 0; // 0x406b0b
    if (v23 != 0) {
        int64_t v621 = v430;
        int32_t v622 = v616; // 0x406b0d
        int64_t v623 = v621; // 0x406b10
        int64_t v624 = v613; // 0x406b10
        int64_t v625 = v616; // 0x406b10
        int64_t v626 = v615; // 0x406b10
        int64_t v627 = v23; // 0x406b10
        if (v622 == 0 && v613 >= 2) {
            // 0x406b18
            *v58 = (char)v621;
            int64_t v628 = v612 - 1; // 0x406b27
            *v54 = v613;
            v1 = v628;
            *v56 = v622;
            *v39 = (char)v615;
            *v44 = v628;
            memset((int64_t *)v23, 32, (int32_t)v628);
            v624 = *v54;
            v623 = (int64_t)*v58;
            v625 = (int64_t)*v56;
            v626 = (int64_t)*v39;
            v627 = *v44 + v23;
        }
        // 0x406b64
        *(char *)v627 = (char)v623;
        v617 = v624;
        v618 = v625;
        v619 = v626;
        v620 = v627 + 1;
    }
    int64_t v629 = v614 + v20; // 0x406b6f
    v472 = v3 - v629;
    v476 = v40 - v435;
    v473 = v432;
    v468 = v431;
    v469 = v617;
    v453 = v618;
    v457 = v619;
    v459 = 45;
    v461 = v435;
    v462 = v629;
    v466 = v620;
    goto lab_0x405da6;
  lab_0x405da6:;
    uint64_t v525 = v469;
    uint64_t v526 = v476;
    int64_t v527 = v526 >= v525 ? v526 : v525; // 0x405dac
    if (v527 >= v472) {
        // break -> 0x4059d3
        goto lab_0x4059d3_11;
    }
    int64_t v528 = v466;
    int64_t v529 = v462;
    int64_t v530 = v468;
    v392 = v527;
    v391 = v530;
    v388 = v529;
    v390 = 0;
    if (v528 == 0) {
        goto lab_0x405c66;
    } else {
        int64_t v531 = v457;
        int64_t v532 = v526; // 0x405dc5
        int64_t v533 = v530; // 0x405dc5
        int64_t v534 = v531; // 0x405dc5
        int64_t v535 = v528; // 0x405dc5
        if (v526 < v525 == (int32_t)v453 == 0) {
            // 0x405dcc
            *v55 = v526;
            int64_t v536 = (0x100000000 * v473 >> 32) - v526; // 0x405dd4
            v1 = v536;
            *v53 = v530;
            *v41 = (char)v531;
            if ((int32_t)v459 == 48) {
                // 0x406d17
                int64_t * v537; // 0x405920
                int32_t v538; // 0x405920
                memset(v537, 48, v538);
                unsigned char v539 = *v41; // 0x406d27
                int64_t v540 = *v53; // 0x406d2d
                int64_t v541 = *v55; // 0x406d32
                v532 = v541;
                v533 = v540;
                v534 = v539;
                int64_t v542; // 0x405ddc
                v535 = v542;
            } else {
                // 0x405def
                memset((int64_t *)v528, 32, (int32_t)v1);
                v532 = *v55;
                v533 = *v53;
                v534 = (int64_t)*v41;
                v535 = v528 + v536;
            }
        }
        // 0x405e0f
        *v53 = v533;
        v1 = v532;
        *v44 = v532;
        v393 = v527;
        v396 = v461;
        v395 = v535;
        v385 = v534;
        v386 = v529;
        goto lab_0x405c4b;
    }
  lab_0x405c66:
    // 0x405c66
    v8 = v12;
    v9 = v13;
    v25 = v391;
    v21 = v388 + v392;
    v24 = v390;
    goto lab_0x4059ae;
  lab_0x406c93:;
    int64_t v543 = v509;
    int64_t v544 = 0x100000000 * v543 >> 32; // 0x406c93
    if (v544 >= v506) {
        // break -> 0x4059d3
        goto lab_0x4059d3_11;
    }
    int64_t v545 = v512;
    int64_t v546 = v511;
    int64_t v547 = v510;
    int64_t v548 = v508;
    int64_t v549 = v507;
    char v550 = v505; // 0x406ca2
    int64_t v551 = v543 & 0xffffffff; // 0x406ca2
    int64_t v552 = v547; // 0x406ca2
    int64_t v553 = v546; // 0x406ca2
    int64_t v554 = 0; // 0x406ca2
    if (v23 != 0) {
        // 0x406ca4
        v1 = v544;
        *v60 = (int32_t)v543;
        *v56 = (int32_t)v547;
        *v39 = (char)v546;
        memset((int64_t *)v23, 32, (int32_t)v544);
        v550 = *v41;
        v551 = (int64_t)*v60;
        v552 = (int64_t)*v56;
        v553 = (int64_t)*v39;
        v554 = v544 + v23;
    }
    int64_t v555 = v554;
    int64_t v556 = v553;
    int64_t v557 = v552;
    int64_t v558 = v551;
    char v559 = v550; // 0x406cf0
    int64_t v560 = v544 + v20; // 0x406cd8
    int32_t v561 = v558; // 0x406cde
    int32_t v562 = v561 - (int32_t)v548; // 0x406cde
    int64_t v563 = v562 < 0 == ((v562 ^ v561) & (int32_t)(v558 ^ v548)) < 0 ? 0 : v548 - v558 & 0xffffffff; // 0x406ce6
    int64_t v564 = v3 - v560; // 0x406ced
    int64_t v565 = 0x100000000 * v563 >> 32;
    if (v559 != 0) {
        int64_t v566 = v563 != 0 ? v565 : 1; // 0x406d8b
        if (v566 >= v564) {
            // break -> 0x4059d3
            goto lab_0x4059d3_11;
        }
        int64_t v567 = v566; // 0x406d9b
        int64_t v568 = v565; // 0x406d9b
        int64_t v569 = v557; // 0x406d9b
        int64_t v570 = v556; // 0x406d9b
        int64_t v571 = 0; // 0x406d9b
        if (v555 != 0) {
            int32_t v572 = v557; // 0x406d9d
            char v573 = v559; // 0x406da0
            int64_t v574 = v566; // 0x406da0
            int64_t v575 = v565; // 0x406da0
            int64_t v576 = v557; // 0x406da0
            int64_t v577 = v556; // 0x406da0
            int64_t v578 = v555; // 0x406da0
            if (v572 == 0 && v565 >= 2) {
                int64_t v579 = v565 - 1; // 0x406da8
                *v59 = v566;
                v1 = v579;
                *v60 = v572;
                *v43 = (char)v556;
                *v53 = v565;
                memset((int64_t *)v555, 32, (int32_t)v579);
                v574 = *v59;
                v575 = *v53;
                v573 = *v41;
                v576 = (int64_t)*v60;
                v577 = (int64_t)*v43;
                v578 = v579 + v555;
            }
            // 0x406de8
            v568 = v575;
            v567 = v574;
            *(char *)v578 = v573;
            v569 = v576;
            v570 = v577;
            v571 = v578 + 1;
        }
        int64_t v580 = v567 + v560; // 0x406df9
        v472 = v3 - v580;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v568;
        v453 = v569;
        v457 = v570;
        v459 = 95;
        v461 = v545;
        v462 = v580;
        v466 = v571;
    } else {
        // 0x406cfb
        v472 = v564;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v565;
        v453 = v557;
        v457 = v556;
        v459 = 95;
        v461 = v545;
        v462 = v560;
        v466 = v555;
    }
    goto lab_0x405da6;
  lab_0x405c4b:;
    int64_t v581 = v386;
    int64_t v582 = v395;
    int64_t v583 = v396;
    int64_t v584 = v393;
    if ((char)v385 == 0) {
        // 0x406ab0
        memcpy((int64_t *)v582, (int64_t *)v583, (int32_t)v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    } else {
        // 0x405c54
        function_4058d0(v582, v583, v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    }
    goto lab_0x405c63;
  lab_0x406530:;
    int64_t v585 = v463 + v471; // 0x406534
    v472 = v3 - v585;
    v476 = v475;
    v473 = 0;
    v468 = v467;
    v469 = 0;
    v453 = v452;
    v457 = v456;
    v459 = v458;
    v461 = v460;
    v462 = v585;
    v466 = v465;
    goto lab_0x405da6;
  lab_0x4064e5:;
    int64_t v586 = v464 + 1;
    int64_t v587 = v477;
    int64_t v588 = v443;
    int64_t v589 = v444;
    int64_t v590 = v455;
    int64_t v591 = v454;
    int64_t v592 = v470;
    int64_t v593 = v448;
    int64_t v594 = v474;
    v475 = v594;
    v467 = v593;
    v471 = v592;
    v452 = v591;
    v456 = v590;
    v458 = v589;
    v460 = v588;
    v463 = v587;
    v465 = 0;
    if (v586 != 0) {
        // 0x4064ea
        v1 = v592;
        *v59 = v594;
        *v60 = (int32_t)v591;
        *v55 = v593;
        *v39 = (char)v590;
        *v44 = v592;
        memset((int64_t *)v586, 48, (int32_t)v592);
        int64_t v595 = *v44; // 0x406513
        v475 = *v59;
        v467 = *v55;
        v471 = v595;
        v452 = (int64_t)*v60;
        v456 = (int64_t)*v39;
        v458 = v589;
        v460 = v588;
        v463 = v587;
        v465 = v595 + v586;
    }
    goto lab_0x406530;
  lab_0x405c63:
    // 0x405c63
    v392 = v394;
    v391 = *v53;
    v388 = v387;
    v390 = *v44 + v389;
    goto lab_0x405c66;
  lab_0x4059bb_2:
    // 0x4059bb
    if (v3 != 0 && v5 != 0) {
        // 0x4059c7
        *(char *)v5 = 0;
    }
    // 0x4059d3
    return result;
}
// Address range: 0x4070f0 - 0x40710f
int64_t function_4070f0(int32_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int64_t a6) {
    char v1 = 0; // bp-9, 0x4070f4
    return function_405920(a1, a2, a3, (int64_t)a4, 0, (int64_t)&v1);
}
// Address range: 0x407110 - 0x4071a9
int64_t function_407110(int64_t str) {
    // 0x407110
    if (str == 0) {
        // 0x407189
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g56);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40711e
    int64_t result = (int64_t)found_char_pos; // 0x40711e
    if (found_char_pos == NULL) {
        // 0x407179
        g125 = str;
        g55 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x407128
    if (v1 - str < 7) {
        // 0x407179
        g125 = str;
        g55 = str;
        return result;
    }
    // 0x407138
    bool v2; // 0x407110
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x407110
    int64_t v5 = result - 6; // 0x407110
    int64_t v6 = 7; // 0x407146
    unsigned char v7 = *(char *)v5; // 0x407146
    char v8 = *(char *)v4; // 0x407146
    char v9 = v8; // 0x407146
    bool v10 = false; // 0x407146
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
    int64_t v12 = (int64_t)"lt-"; // 0x407150
    int64_t v13 = v1; // 0x407150
    int64_t v14 = 3; // 0x407150
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x407179
        g125 = str;
        g55 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x407162
    char v16 = *(char *)v12; // 0x407162
    char v17 = v16; // 0x407162
    bool v18 = false; // 0x407162
    while (v15 == v16) {
        // 0x407152
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
    int64_t v20 = v1; // 0x40716c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40716e
        v20 = result + 4;
        g52 = v20;
    }
    // 0x407179
    g125 = v20;
    g55 = v20;
    return result;
}
// Address range: 0x4071b0 - 0x4072a2
int64_t function_4071b0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4071c4
    int64_t result = (int64_t)v1; // 0x4071c4
    if (result != a1) {
        // 0x4071d1
        return result;
    }
    int64_t v2 = function_40c0d0(); // 0x4071e0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x407296
    if (v3 == 85) {
        // 0x4071f0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x407288
            result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x40721e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x40722b
        // 0x4071d1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x407288
        result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x40726d
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x40727a
    // 0x4071d1
    return result4;
}
// Address range: 0x4072b0 - 0x407307
int64_t function_4072b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4072b0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4072f8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x407307 - 0x4084d1
int64_t function_407307(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x407351
    int64_t v3 = 0; // 0x407351
    int64_t v4; // 0x407307
    int64_t v5; // 0x407307
    int64_t v6; // 0x407307
    int64_t v7; // 0x407307
    int64_t v8; // 0x407307
    int64_t v9; // 0x407307
    int64_t v10; // 0x407307
    int64_t v11; // 0x407307
    int64_t v12; // 0x407307
    int64_t v13; // 0x407307
    int64_t v14; // 0x407307
    int64_t v15; // 0x407307
    int64_t v16; // 0x407307
    int64_t v17; // 0x407307
    int64_t v18; // 0x407307
    int64_t result; // 0x407307
    int64_t v19; // 0x407307
    int32_t wc; // bp+132, 0x407307
    int64_t ps; // bp+136, 0x407307
    char v20; // 0x4078c0
    int64_t v21; // 0x4078c0
    int64_t v22; // 0x407c68
    int64_t v23; // 0x407307
    int64_t v24; // 0x407c87
    int32_t v25; // 0x407307
    while (true) {
      lab_0x407358_2:
        // 0x407358
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x407307
        int64_t v27; // 0x40738c
        while (true) {
          lab_0x407358:
            // 0x407358
            v5 = v26;
            bool v28 = v15 == v5; // 0x407363
            if (v15 == -1) {
                // 0x407365
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x407373
            if (v28) {
                // break (via goto) -> 0x407ad8
                goto lab_0x407ad8;
            }
            // 0x40737c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g140 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40796b
                    if (v25 % 2 == 0) {
                        goto lab_0x4074b1;
                    }
                    // 0x407d8d
                    v26 = v5 + 1;
                    goto lab_0x407358;
                }
                case 7: {
                    goto lab_0x4074b1;
                }
                case 8: {
                    goto lab_0x4074b1;
                }
                case 9: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4074b1;
                }
                case 12: {
                    goto lab_0x4074b1;
                }
                case 13: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40747d;
                }
                case 36: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4074b1;
                }
                case 38: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4074b1;
                }
                case 44: {
                    goto lab_0x4074b1;
                }
                case 45: {
                    goto lab_0x4074b1;
                }
                case 46: {
                    goto lab_0x4074b1;
                }
                case 47: {
                    goto lab_0x4074b1;
                }
                case 48: {
                    goto lab_0x4074b1;
                }
                case 49: {
                    goto lab_0x4074b1;
                }
                case 50: {
                    goto lab_0x4074b1;
                }
                case 51: {
                    goto lab_0x4074b1;
                }
                case 52: {
                    goto lab_0x4074b1;
                }
                case 53: {
                    goto lab_0x4074b1;
                }
                case 54: {
                    goto lab_0x4074b1;
                }
                case 55: {
                    goto lab_0x4074b1;
                }
                case 56: {
                    goto lab_0x4074b1;
                }
                case 57: {
                    goto lab_0x4074b1;
                }
                case 58: {
                    goto lab_0x4074b1;
                }
                case 59: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4074b1;
                }
                case 66: {
                    goto lab_0x4074b1;
                }
                case 67: {
                    goto lab_0x4074b1;
                }
                case 68: {
                    goto lab_0x4074b1;
                }
                case 69: {
                    goto lab_0x4074b1;
                }
                case 70: {
                    goto lab_0x4074b1;
                }
                case 71: {
                    goto lab_0x4074b1;
                }
                case 72: {
                    goto lab_0x4074b1;
                }
                case 73: {
                    goto lab_0x4074b1;
                }
                case 74: {
                    goto lab_0x4074b1;
                }
                case 75: {
                    goto lab_0x4074b1;
                }
                case 76: {
                    goto lab_0x4074b1;
                }
                case 77: {
                    goto lab_0x4074b1;
                }
                case 78: {
                    goto lab_0x4074b1;
                }
                case 79: {
                    goto lab_0x4074b1;
                }
                case 80: {
                    goto lab_0x4074b1;
                }
                case 81: {
                    goto lab_0x4074b1;
                }
                case 82: {
                    goto lab_0x4074b1;
                }
                case 83: {
                    goto lab_0x4074b1;
                }
                case 84: {
                    goto lab_0x4074b1;
                }
                case 85: {
                    goto lab_0x4074b1;
                }
                case 86: {
                    goto lab_0x4074b1;
                }
                case 87: {
                    goto lab_0x4074b1;
                }
                case 88: {
                    goto lab_0x4074b1;
                }
                case 89: {
                    goto lab_0x4074b1;
                }
                case 90: {
                    goto lab_0x4074b1;
                }
                case 91: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4074b1;
                }
                case 94: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4074b1;
                }
                case 96: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4074b1;
                }
                case 98: {
                    goto lab_0x4074b1;
                }
                case 99: {
                    goto lab_0x4074b1;
                }
                case 100: {
                    goto lab_0x4074b1;
                }
                case 101: {
                    goto lab_0x4074b1;
                }
                case 102: {
                    goto lab_0x4074b1;
                }
                case 103: {
                    goto lab_0x4074b1;
                }
                case 104: {
                    goto lab_0x4074b1;
                }
                case 105: {
                    goto lab_0x4074b1;
                }
                case 106: {
                    goto lab_0x4074b1;
                }
                case 107: {
                    goto lab_0x4074b1;
                }
                case 108: {
                    goto lab_0x4074b1;
                }
                case 109: {
                    goto lab_0x4074b1;
                }
                case 110: {
                    goto lab_0x4074b1;
                }
                case 111: {
                    goto lab_0x4074b1;
                }
                case 112: {
                    goto lab_0x4074b1;
                }
                case 113: {
                    goto lab_0x4074b1;
                }
                case 114: {
                    goto lab_0x4074b1;
                }
                case 115: {
                    goto lab_0x4074b1;
                }
                case 116: {
                    goto lab_0x4074b1;
                }
                case 117: {
                    goto lab_0x4074b1;
                }
                case 118: {
                    goto lab_0x4074b1;
                }
                case 119: {
                    goto lab_0x4074b1;
                }
                case 120: {
                    goto lab_0x4074b1;
                }
                case 121: {
                    goto lab_0x4074b1;
                }
                case 122: {
                    goto lab_0x4074b1;
                }
                case 123: {
                    goto lab_0x407455;
                }
                case 124: {
                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x407455;
                }
                case 126: {
                    goto lab_0x40747d;
                }
                default: {
                    goto lab_0x407855;
                }
            }
        }
      lab_0x407855:
        if (v23 != 1) {
            // 0x407bc0
            ps = 0;
            int64_t len = v15; // 0x407bd0
            if (v15 == -1) {
                // 0x407bd2
                len = strlen((char *)str);
            }
            // 0x407bfe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x407c5f:
                // 0x407c5f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x407c64
                int64_t v30 = v29 + str;
                v24 = function_40ba50((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4081da_2;
                    }
                    case -1: {
                        goto lab_0x4081da_2;
                    }
                    case -2: {
                        // 0x4082bd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4082f7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4082fa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x408307
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x408300
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4081da
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4081da_2;
                    }
                    case 1: {
                        goto lab_0x407c30;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x407cdc
                        char v34 = *(char *)v33; // 0x407ced
                        unsigned char v35; // 0x407307
                        if (v34 < 125) {
                            // 0x407cf8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x407d0f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x407ce0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x407ced
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x407cf8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x407d0f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x407ce0
                            v33++;
                        }
                        goto lab_0x407c30;
                    }
                }
            }
            goto lab_0x4081da_2;
        } else {
            // 0x4078a4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4074b1;
        }
    }
  lab_0x407ad8:
    // 0x407ad8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4083da
        if (v8 > result) {
            // 0x4083e3
            *(char *)(v12 + result) = 0;
        }
        // 0x407707
        return result;
    }
    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4074b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4074c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4076ca_2;
        }
    }
    int64_t v39 = result; // 0x4075c1
    char v40 = v20; // 0x4075c1
    int64_t v41 = v38; // 0x4075c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4075c1
    int64_t v43 = v36; // 0x4075c1
    goto lab_0x40753d;
  lab_0x4076ca_2:
    // 0x407707
    return function_4072b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4081da_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4074b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x407dae
        int64_t v50 = v5 + 1; // 0x407e91
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x407e98
        char v52 = v20; // 0x407e98
        int64_t v53 = result; // 0x407e98
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x407e61
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x407e65
            int64_t v56 = v54 + 1; // 0x407e6a
            int64_t v57 = v51 + 1; // 0x407e91
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x407e5c
                v54 = v56;
                if (v47 > v54) {
                    // 0x407e61
                    *(char *)(v54 + v48) = v55;
                }
                // 0x407e65
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
        goto lab_0x40753d;
    }
  lab_0x407c30:
    // 0x407c30
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x407c4f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x407c52
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4081da
        goto lab_0x4081da_2;
    }
    goto lab_0x407c5f;
  lab_0x40747d:
    // 0x40747d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4076ca_2;
    }
    goto lab_0x4074b1;
  lab_0x407455:;
    bool v60 = v15 == 1; // 0x407460
    if (v15 == -1) {
        // 0x407462
        v60 = *(char *)v1 == 0;
    }
    // 0x40746e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4074b1;
    } else {
        goto lab_0x40747d;
    }
  lab_0x40753d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x407542
        *(char *)(v44 + v45) = v40;
    }
    // 0x407546
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x407358_2;
}
// Address range: 0x4084e0 - 0x40867e
int64_t function_4084e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4084e2
    int32_t * v3 = __errno_location(); // 0x4084fc
    int64_t v4 = (int64_t)g45; // 0x408501
    int32_t v5 = *v3; // 0x40850b
    int64_t v6 = v4; // 0x408521
    if (v2 >= (int64_t)*(int32_t *)&g48) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x408679
            function_409550(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x408530
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x408537
        int64_t v9; // 0x4084e0
        if (g45 == &g46) {
            int64_t v10 = function_409360(0, v8); // 0x40865a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g46); // 0x40865f
            *(int64_t *)&g45 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_409360(v4, v8); // 0x40854b
            *(int64_t *)&g45 = v12;
            v9 = v12;
        }
        // 0x40855a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g48; // 0x40855a
        int32_t v14 = v7; // 0x408561
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g48 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x408591
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40859b
    int64_t * v17 = (int64_t *)v15; // 0x40859e
    uint64_t v18 = *v17; // 0x40859e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4085a1
    int64_t result = *v19; // 0x4085a1
    int64_t v20; // 0x4084e0
    uint64_t v21 = function_4072b0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4085c4
    if (v18 > v21) {
        // 0x40863b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4085d7
    *v17 = v22;
    if (result != (int64_t)&g126) {
        // 0x4085e7
        free((int64_t *)result);
    }
    int64_t result2 = function_409300(v22); // 0x408601
    *v19 = result2;
    int64_t v23; // 0x4084e0
    function_4072b0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40863b
    *v3 = v5;
    return result2;
}
// Address range: 0x408680 - 0x4086b4
int64_t function_408680(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x408687
    int64_t result = function_409500(a1 == 0 ? (int64_t)&g127 : a1, 56); // 0x4086a6
    return result;
}
// Address range: 0x4086c0 - 0x4086cf
int64_t function_4086c0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g127 : a1); // 0x4086cc
    return result;
}
// Address range: 0x4086d0 - 0x4086df
int64_t function_4086d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g127 : a1; // 0x4086d8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g127;
}
// Address range: 0x4086e0 - 0x408713
int64_t function_4086e0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g127 + 8 : a1 + 8; // 0x4086f9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4086fe
    uint32_t v3 = *v2; // 0x4086fe
    uint32_t v4 = (int32_t)a2 % 32; // 0x408702
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x408720 - 0x408733
int64_t function_408720(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g127 + 4 : a1 + 4); // 0x40872c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x408740 - 0x40876b
int64_t function_408740(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g127 : a1; // 0x408748
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x408765
        abort();
        // UNREACHABLE
    }
    // 0x40875c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g127;
}
// Address range: 0x408770 - 0x4087e2
int64_t function_408770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g127 : a5; // 0x408792
    int32_t * v2 = __errno_location(); // 0x40879b
    uint32_t v3 = *(int32_t *)v1; // 0x4087bb
    int64_t result = function_4072b0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4087ca
    return result;
}
// Address range: 0x4087f0 - 0x4088d1
int64_t function_4087f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g127 : a4; // 0x408812
    int32_t * v2 = __errno_location(); // 0x408818
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x408837
    int32_t * v4 = (int32_t *)v1; // 0x40883a
    int64_t v5 = function_4072b0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x408855
    int64_t v6 = v5 + 1; // 0x40885a
    int64_t result = function_409300(v6); // 0x40886f
    function_4072b0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4088b4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4088bd
    return result;
}
// Address range: 0x4088e0 - 0x4088ea
int64_t function_4088e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4088e0
    return function_4087f0(a1, a2, 0, a3);
}
// Address range: 0x4088f0 - 0x408985
int64_t function_4088f0(void) {
    uint32_t v1 = *(int32_t *)&g48; // 0x4088f0
    int64_t v2 = v1; // 0x4088f0
    int64_t v3 = v2; // 0x408904
    if (v1 >= 2) {
        int64_t v4 = &g48;
        int64_t v5 = v4 + 16; // 0x408923
        free((int64_t *)*(int64_t *)v4);
        v3 = &g141;
        while (v5 != (int64_t)g45 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x408920
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g141;
        }
    }
    int64_t v6 = v3; // 0x40893d
    if (g46 != 0x6144a0) {
        // 0x40893f
        free((int64_t *)g46);
        g46 = 256;
        *(int64_t *)&g47 = (int64_t)&g126;
        v6 = &g141;
    }
    int64_t result = v6; // 0x408961
    if (g45 != &g46) {
        // 0x408963
        free(g45);
        *(int64_t *)&g45 = (int64_t)&g46;
        result = &g141;
    }
    // 0x408976
    *(int32_t *)&g48 = 1;
    return result;
}
// Address range: 0x408990 - 0x4089a1
int64_t function_408990(void) {
    // 0x408990
    int64_t v1; // 0x408990
    return function_4084e0(v1, v1, -1, (int64_t *)&g127);
}
// Address range: 0x4089b0 - 0x4089ba
int64_t function_4089b0(void) {
    // 0x4089b0
    int64_t v1; // 0x4089b0
    return function_4084e0(v1, v1, v1, (int64_t *)&g127);
}
// Address range: 0x4089c0 - 0x4089d6
int64_t function_4089c0(int64_t a1) {
    // 0x4089c0
    return function_4084e0(0, a1, -1, (int64_t *)&g127);
}
// Address range: 0x4089e0 - 0x4089f2
int64_t function_4089e0(int64_t a1, int64_t a2) {
    // 0x4089e0
    return function_4084e0(0, a1, a2, (int64_t *)&g127);
}
// Address range: 0x408a00 - 0x408a68
int64_t function_408a00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408a10
    return function_4084e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408a70 - 0x408ad4
int64_t function_408a70(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408a80
    return function_4084e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x408ae0 - 0x408aec
int64_t function_408ae0(int64_t a1, int64_t a2) {
    // 0x408ae0
    return function_408a00(0, a1 & 0xffffffff, a2);
}
// Address range: 0x408af0 - 0x408aff
int64_t function_408af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408af0
    return function_408a70(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x408b00 - 0x408b70
int64_t function_408b00(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g127); // 0x408b0d
    int128_t v2 = __asm_movdqa(g128); // 0x408b15
    int128_t v3 = __asm_movdqa(g129); // 0x408b1d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x408b32
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x408b48
    uint32_t v6 = *v5; // 0x408b48
    uint32_t v7 = (int32_t)a3 % 32; // 0x408b4d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4084e0(0, a1, a2, &v4);
}
// Address range: 0x408b70 - 0x408b7d
int64_t function_408b70(int64_t a1, int64_t a2) {
    // 0x408b70
    return function_408b00(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x408b80 - 0x408b91
int64_t function_408b80(int64_t a1) {
    // 0x408b80
    return function_408b00(a1, -1, 58);
}
// Address range: 0x408ba0 - 0x408baa
int64_t function_408ba0(void) {
    // 0x408ba0
    int64_t v1; // 0x408ba0
    return function_408b00(v1, v1, 58);
}
// Address range: 0x408bb0 - 0x408c1e
int64_t function_408bb0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408bca
    return function_4084e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408c20 - 0x408c8c
int64_t function_408c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g127); // 0x408c27
    int128_t v2 = __asm_movdqa(g128); // 0x408c2f
    int128_t v3 = __asm_movdqa(g129); // 0x408c37
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x408c59
    if (a2 == 0 || a3 == 0) {
        // 0x408c87
        abort();
        // UNREACHABLE
    }
    // 0x408c6a
    return function_4084e0(a1, a4, a5, &v4);
}
// Address range: 0x408c90 - 0x408c99
int64_t function_408c90(void) {
    // 0x408c90
    int64_t v1; // 0x408c90
    return function_408c20(v1, v1, v1, v1, -1);
}
// Address range: 0x408ca0 - 0x408cb7
int64_t function_408ca0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408ca0
    return function_408c20(0, a1, a2, a3, -1);
}
// Address range: 0x408cc0 - 0x408cd3
int64_t function_408cc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x408cc0
    return function_408c20(0, a1, a2, a3, a4);
}
// Address range: 0x408ce0 - 0x408cea
int64_t function_408ce0(void) {
    // 0x408ce0
    int64_t v1; // 0x408ce0
    return function_4084e0(v1, v1, v1, &g44);
}
// Address range: 0x408cf0 - 0x408d02
int64_t function_408cf0(int64_t a1, int64_t a2) {
    // 0x408cf0
    return function_4084e0(0, a1, a2, &g44);
}
// Address range: 0x408d10 - 0x408d21
int64_t function_408d10(void) {
    // 0x408d10
    int64_t v1; // 0x408d10
    return function_4084e0(v1, v1, -1, &g44);
}
// Address range: 0x408d30 - 0x408d46
int64_t function_408d30(int64_t a1) {
    // 0x408d30
    return function_4084e0(0, a1, -1, &g44);
}
// Address range: 0x408d50 - 0x408d5e
int64_t function_408d50(int64_t a1, int64_t a2) {
    // 0x408d50
    int64_t v1; // 0x408d50
    return function_40aaa0(a1, 0, 3, v1);
}
// Address range: 0x408d60 - 0x40913d
int64_t function_408d60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x408df8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x408d7c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x408d96
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x408ddb
    if (a6 < 10) {
        // 0x408dea
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x408ee2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x409140 - 0x409160
int64_t function_409140(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409140
    if (a5 == 0) {
        // 0x40915b
        return function_408d60(a1, a2, a3, a4, a5, 0, (int64_t)&g141);
    }
    int64_t v1 = 0; // 0x409147
    v1++;
    int64_t v2 = v1; // 0x409159
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x409150
        v1++;
        v2 = v1;
    }
    // 0x40915b
    return function_408d60(a1, a2, a3, a4, a5, v2, (int64_t)&g141);
}
// Address range: 0x409160 - 0x4091c0
int64_t function_409160(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x409160
    int64_t v3 = &v2; // 0x409160
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x409193
    int64_t v6; // 0x40917d
    int64_t * v7; // 0x40919b
    int64_t v8; // 0x40919b
    int64_t v9; // 0x4091a7
    if (v5 < 48) {
        // 0x409170
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4091b3
            break;
        }
    } else {
        // 0x40919b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4091b3
            break;
        }
    }
    int64_t v10 = 10; // 0x409191
    while (v4 != 9) {
        // 0x409189
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x409170
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4091b3
                break;
            }
        } else {
            // 0x40919b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4091b3
                break;
            }
        }
        // 0x409189
        v10 = 10;
    }
    // 0x4091b3
    return function_408d60(a1, a2, a3, a4, v3, v10, (int64_t)&g141);
}
// Address range: 0x4091c0 - 0x40927c
int64_t function_4091c0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4091c0
    int64_t v1; // bp-168, 0x4091c0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4091c0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4091c0
    int64_t v8; // 0x4091c0
    int64_t v9; // bp-56, 0x4091c0
    int64_t v10; // 0x409225
    int64_t v11; // 0x409249
    if ((int32_t)v6 < 48) {
        // 0x409210
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x409260
            break;
        }
    } else {
        // 0x409242
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x409260
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40923a
    int64_t v13 = 10; // 0x40923a
    while (v5 != 9) {
        // 0x40923c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x409210
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x409260
                break;
            }
        } else {
            // 0x409242
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x409260
                break;
            }
        }
        // 0x409232
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x409260
    int64_t v14; // bp-136, 0x4091c0
    int64_t result = function_408d60(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g141); // 0x40926f
    return result;
}
// Address range: 0x409280 - 0x4092f4
int64_t function_409280(int64_t a1) {
    // 0x409280
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4092e3
    return fputs_unlocked(v1, g53);
}
// Address range: 0x409300 - 0x40931a
int64_t function_409300(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409304
    if (size != 0 != (mem == NULL)) {
        // 0x409313
        return (int64_t)mem;
    }
    // 0x409315
    function_409550(size);
    // UNREACHABLE
}
// Address range: 0x409320 - 0x409341
int64_t function_409320(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x409323
    int64_t v2 = v1; // 0x409323
    if (v2 < 0) {
        // 0x40933b
        function_409550(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409339
        return function_409300(v2);
    }
    // 0x40933b
    function_409550(v2);
    // UNREACHABLE
}
// Address range: 0x409350 - 0x409352
int64_t function_409350(void) {
    // 0x409350
    int64_t v1; // 0x409350
    return function_409300(v1);
}
// Address range: 0x409360 - 0x409396
int64_t function_409360(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x409388
        free(v1);
        return (int32_t)&g141 ^ (int32_t)&g141;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x409371
    if (a2 != 0 != (mem == NULL)) {
        // 0x409380
        return (int64_t)mem;
    }
    // 0x409391
    function_409550(a1);
    // UNREACHABLE
}
// Address range: 0x4093a0 - 0x4093c1
int64_t function_4093a0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4093a3
    int64_t v2 = v1; // 0x4093a3
    if (v2 < 0) {
        // 0x4093bb
        function_409550(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4093b9
        return function_409360(a1, v2);
    }
    // 0x4093bb
    function_409550(a1);
    // UNREACHABLE
}
// Address range: 0x4093d0 - 0x409456
int64_t function_4093d0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40942b
            function_409550(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_409360(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x409413
    if (a2 == 0) {
        // 0x409438
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x409418
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40942b
        function_409550(a1);
        // UNREACHABLE
    }
    // 0x4093fa
    *(int64_t *)a2 = v2;
    return function_409360(a1, v2 * a3);
}
// Address range: 0x409460 - 0x4094b0
int64_t function_409460(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (a2 >= (int64_t *)0x5555555555555554) {
            // 0x4094aa
            function_409550(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_409360(a1, v2);
    }
    if (a2 == NULL) {
        // 0x409495
        *a2 = 128;
        return function_409360(0, 128);
    }
    // 0x4094a8
    if (a2 < NULL) {
        // 0x4094aa
        function_409550(a1);
        // UNREACHABLE
    }
    // 0x409482
    *a2 = v1;
    return function_409360(a1, v1);
}
// Address range: 0x4094b0 - 0x4094c7
int64_t function_4094b0(int64_t a1, int64_t a2) {
    // 0x4094b0
    return (int64_t)memset((int64_t *)function_409300(a1), 0, (int32_t)a1);
}
// Address range: 0x4094d0 - 0x4094fe
int64_t function_4094d0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4094d7
    if ((int64_t)v1 < 0) {
        // 0x4094f9
        function_409550(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4094f9
        function_409550(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4094ea
    if (mem != NULL) {
        // 0x4094f4
        return (int64_t)mem;
    }
    // 0x4094f9
    function_409550(nmemb);
    // UNREACHABLE
}
// Address range: 0x409500 - 0x409528
int64_t function_409500(int64_t a1, int64_t a2) {
    int64_t v1 = function_409300(a2); // 0x40950f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x409530 - 0x409543
int64_t function_409530(int64_t str) {
    // 0x409530
    return function_409500(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x409550 - 0x409581
int64_t function_409550(int64_t a1) {
    // 0x409550
    error(g43, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x409590 - 0x409674
int64_t function_409590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x409590
    int64_t result2; // bp-64, 0x409590
    int32_t v1 = function_4096b0(a1, 0, a2 & 0xffffffff, &result2, a5); // 0x4095bc
    int32_t * v2; // 0x409590
    int32_t * v3; // 0x409590
    if (v1 != 0) {
        int32_t * v4 = __errno_location(); // 0x40963a
        v2 = v4;
        if (v1 == 1) {
            goto lab_0x4095e0;
        } else {
            // 0x409647
            v3 = v4;
            if (v1 == 3) {
                // 0x40964c
                *v4 = 0;
                v3 = v4;
            }
            goto lab_0x4095e7;
        }
    } else {
        int64_t result = result2; // 0x4095c0
        if (result >= a3 && result <= a4) {
            // 0x409620
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x4095cf
        v2 = v5;
        if (result < 0x40000000) {
            int64_t v6 = result + 0x40000001; // 0x409658
            *v5 = v6 == 0 | v6 < 0 != ((v6 ^ result) & (result ^ -0x8000000000000000)) < 0 ? 75 : 34;
            v3 = v5;
            goto lab_0x4095e7;
        } else {
            goto lab_0x4095e0;
        }
    }
  lab_0x4095e0:
    // 0x4095e0
    *v2 = 75;
    v3 = v2;
    goto lab_0x4095e7;
  lab_0x4095e7:;
    int64_t v7 = function_408d30(a1); // 0x4095ea
    int32_t v8 = *v3; // 0x4095ef
    int32_t status = a7 == 0 ? 1 : a7; // 0x40960f
    error(status, v8 == 22 ? 0 : v8, "%s: %s", (char *)a6, (char *)v7);
    // 0x409620
    return result2;
}
// Address range: 0x409680 - 0x4096a1
int64_t function_409680(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x409680
    int64_t result; // 0x409680
    return result;
}
// Address range: 0x4096b0 - 0x409e00
int64_t function_4096b0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str) {
    uint32_t v1 = (int32_t)a3; // 0x4096c2
    if (v1 >= 37) {
        // 0x409dd9
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        return &g141;
    }
    // 0x4096cb
    int64_t v2; // bp-64, 0x4096b0
    int64_t v3 = a2 == 0 ? (int64_t)&v2 : (int64_t)a2; // 0x4096d8
    int32_t * v4 = __errno_location(); // 0x4096e2
    *v4 = 0;
    char * v5 = (char *)a1;
    int32_t v6 = __strtol_internal(v5, (char **)v3, v1, 0); // 0x4096fa
    int64_t * v7 = (int64_t *)v3; // 0x4096ff
    int64_t v8 = *v7; // 0x4096ff
    int64_t v9; // 0x4096b0
    int64_t v10; // 0x4096b0
    int64_t v11; // 0x4096b0
    char v12; // 0x4096b0
    int64_t v13; // 0x4096b0
    int64_t v14; // 0x4096b0
    int64_t v15; // 0x4096b0
    if (v8 == a1) {
        // 0x409758
        if (str == 0) {
            // 0x40972e
            return 4;
        }
        char c = *v5; // 0x409761
        if (c == 0) {
            // 0x40972e
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40977f
        v14 = 1;
        v10 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x40972e
            return 4;
        }
        goto lab_0x40978d;
    } else {
        int32_t v16 = *v4; // 0x40970a
        int64_t v17 = 0; // 0x409710
        if (v16 != 0) {
            // 0x409740
            v17 = 1;
            if (v16 != 34) {
                // 0x40972e
                return 4;
            }
        }
        int64_t v18 = v6; // 0x4096fa
        v13 = v18;
        v9 = v17;
        if (str == 0) {
            goto lab_0x409727;
        } else {
            char c2 = *(char *)v8; // 0x40971a
            v13 = v18;
            v9 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x409827
                v14 = v18;
                v10 = v17;
                v12 = c2;
                v15 = v18;
                v11 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40978d;
                } else {
                    goto lab_0x409835;
                }
            } else {
                goto lab_0x409727;
            }
        }
    }
  lab_0x40978d:;
    int64_t v19 = v10;
    int64_t v20 = v14;
    unsigned char v21 = v12 - 69;
    int64_t v22 = 1024; // 0x409794
    int64_t v23 = 1; // 0x409794
    int64_t v24; // 0x4096b0
    int64_t v25; // 0x4096b0
    int64_t v26; // 0x4096b0
    int64_t v27; // 0x4096b0
    int64_t v28; // 0x4096b0
    int64_t v29; // 0x4096b0
    int64_t v30; // 0x4096b0
    int64_t v31; // 0x4096b0
    int64_t v32; // 0x4096b0
    int64_t v33; // 0x4096b0
    int64_t v34; // 0x4096b0
    int64_t v35; // 0x4096b0
    int64_t v36; // 0x4096b0
    int64_t v37; // 0x4096b0
    int64_t v38; // 0x4096b0
    int64_t v39; // 0x4096b0
    int64_t v40; // 0x4096b0
    int64_t v41; // 0x4096b0
    int64_t v42; // 0x4096b0
    if (v21 < 48) {
        // 0x4097c0
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4097a0;
        } else {
            // 0x4097d4
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4097a0;
            } else {
                // 0x4097e6
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x4097a0;
                    }
                    case 105: {
                        char v43 = *(char *)(v8 + 2); // 0x409dc2
                        v22 = 1024;
                        v23 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x4097a0;
                    }
                    default: {
                        // 0x4097fb
                        g145 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v15 = v20;
                        v11 = v19;
                        v25 = v20;
                        v32 = 1;
                        v24 = v19;
                        v26 = 1024;
                        v33 = 1;
                        v37 = -0x20000000000000;
                        v38 = 1;
                        v27 = 1024;
                        v34 = 1;
                        v40 = -0x20000000000000;
                        v28 = 1024;
                        v35 = 1;
                        v42 = -0x20000000000000;
                        v29 = 1024;
                        v36 = 1;
                        v41 = -0x20000000000000;
                        v30 = 1024;
                        v31 = 1;
                        v39 = -0x20000000000000;
                        switch (v12) {
                            case 69: {
                                goto lab_0x409a88;
                            }
                            case 70: {
                                goto lab_0x409835;
                            }
                            case 71: {
                                goto lab_0x409af0;
                            }
                            case 72: {
                                goto lab_0x409835;
                            }
                            case 73: {
                                goto lab_0x409835;
                            }
                            case 74: {
                                goto lab_0x409835;
                            }
                            case 75: {
                                goto lab_0x4098d5;
                            }
                            case 76: {
                                goto lab_0x409835;
                            }
                            case 77: {
                                goto lab_0x409918;
                            }
                            case 78: {
                                goto lab_0x409835;
                            }
                            case 79: {
                                goto lab_0x409835;
                            }
                            case 80: {
                                goto lab_0x4099b8;
                            }
                            case 81: {
                                goto lab_0x409835;
                            }
                            case 82: {
                                goto lab_0x409835;
                            }
                            case 83: {
                                goto lab_0x409835;
                            }
                            case 84: {
                                goto lab_0x409a20;
                            }
                            case 85: {
                                goto lab_0x409835;
                            }
                            case 86: {
                                goto lab_0x409835;
                            }
                            case 87: {
                                goto lab_0x409835;
                            }
                            case 88: {
                                goto lab_0x409835;
                            }
                            case 89: {
                                goto lab_0x409b58;
                            }
                            case 90: {
                                goto lab_0x409bc0;
                            }
                            case 91: {
                                goto lab_0x409835;
                            }
                            case 92: {
                                goto lab_0x409835;
                            }
                            case 93: {
                                goto lab_0x409835;
                            }
                            case 94: {
                                goto lab_0x409835;
                            }
                            case 95: {
                                goto lab_0x409835;
                            }
                            case 96: {
                                goto lab_0x409835;
                            }
                            case 97: {
                                goto lab_0x409835;
                            }
                            case 98: {
                                goto lab_0x409985;
                            }
                            case 99: {
                                goto lab_0x409878;
                            }
                            case 100: {
                                goto lab_0x409835;
                            }
                            case 101: {
                                goto lab_0x409835;
                            }
                            case 102: {
                                goto lab_0x409835;
                            }
                            case 103: {
                                goto lab_0x409af0;
                            }
                            case 104: {
                                goto lab_0x409835;
                            }
                            case 105: {
                                goto lab_0x409835;
                            }
                            case 106: {
                                goto lab_0x409835;
                            }
                            case 107: {
                                goto lab_0x4098d5;
                            }
                            case 108: {
                                goto lab_0x409835;
                            }
                            case 109: {
                                goto lab_0x409918;
                            }
                            case 110: {
                                goto lab_0x409835;
                            }
                            case 111: {
                                goto lab_0x409835;
                            }
                            case 112: {
                                goto lab_0x409835;
                            }
                            case 113: {
                                goto lab_0x409835;
                            }
                            case 114: {
                                goto lab_0x409835;
                            }
                            case 115: {
                                goto lab_0x409835;
                            }
                            case 116: {
                                goto lab_0x409a20;
                            }
                            default: {
                                goto lab_0x4097a0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4097a0;
    }
  lab_0x409727:
    // 0x409727
    *a4 = v13;
    // 0x40972e
    return v9 & 0xffffffff;
  lab_0x4097a0:
    // 0x4097a0
    g144 = v12 - 66;
    v15 = v20;
    v11 = v19;
    v25 = v20;
    v32 = v23;
    v24 = v19;
    v38 = v23;
    switch (v12) {
        case 66: {
            // 0x409871
            v25 = 1024 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x409878;
        }
        case 69: {
            // 0x409a70
            v29 = v22;
            v36 = v23;
            v41 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x409a88;
        }
        case 71: {
            goto lab_0x409af0;
        }
        case 75: {
            goto lab_0x4098d5;
        }
        case 77: {
            goto lab_0x409900;
        }
        case 80: {
            // 0x4099a0
            v27 = v22;
            v34 = v23;
            v40 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x4099b8;
        }
        case 84: {
            goto lab_0x409a08;
        }
        case 89: {
            // 0x409b40
            goto lab_0x409b58;
        }
        case 90: {
            // 0x409ba8
            v30 = v22;
            v31 = v23;
            v39 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x409bc0;
        }
        case 98: {
            goto lab_0x409985;
        }
        case 99: {
            goto lab_0x409878;
        }
        case 103: {
            goto lab_0x409af0;
        }
        case 107: {
            goto lab_0x4098d5;
        }
        case 109: {
            goto lab_0x409900;
        }
        case 116: {
            goto lab_0x409a08;
        }
        case 119: {
            // 0x4098b9
            v25 = 2 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x409878;
        }
        default: {
            goto lab_0x409835;
        }
    }
    // 0x409ad8
    goto lab_0x409af0;
    // 0x4098c0
    goto lab_0x4098d5;
  lab_0x409900:
    // 0x409900
    v26 = v22;
    v33 = v23;
    v37 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x409918;
  lab_0x409a08:
    // 0x409a08
    v28 = v22;
    v35 = v23;
    v42 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x409a20;
  lab_0x409985:
    // 0x409985
    v25 = 512 * v20;
    v32 = v38;
    v24 = v19;
    goto lab_0x409878;
  lab_0x409878:;
    int64_t v63 = v24;
    int64_t v64 = v32 + v8; // 0x409878
    *v7 = v64;
    v13 = v25;
    v9 = (*(char *)v64 != 0 ? v63 | 2 : v63) & 0xffffffff;
    goto lab_0x409727;
  lab_0x409835:
    // 0x409835
    *a4 = v15;
    // 0x40972e
    return (v11 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x409a88:;
    uint64_t v65 = v29;
    int64_t v66 = v20;
    int64_t v67 = -0x8000000000000000; // 0x409ac1
    int64_t v68 = 1; // 0x409ac1
    if (v66 >= v41) {
        // 0x409aa0
        v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
        v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : 0;
    }
    int32_t v69 = 5; // 0x409ab5
    int32_t v70 = v69; // 0x409ab8
    int64_t v71 = v68; // 0x409ab8
    int64_t v59 = v67; // 0x409ab8
    int64_t v61 = v36; // 0x409ab8
    int64_t v62 = v68; // 0x409ab8
    while (v69 != 0) {
        // 0x409abe
        v66 = v67;
        v67 = -0x8000000000000000;
        v68 = 1;
        if (v66 >= v41) {
            // 0x409aa0
            v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
            v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : v71;
        }
        // 0x409ab5
        v69 = v70 - 1;
        v70 = v69;
        v71 = v68;
        v59 = v67;
        v61 = v36;
        v62 = v68;
    }
    goto lab_0x409cf0;
  lab_0x409af0:
    // 0x409af0
    while (true) {
        // 0x409b26
        int32_t v44; // 0x4096b0
        int32_t v45 = v44;
        int64_t v46; // 0x4096b0
        int64_t v47 = v46;
        int64_t v48 = -0x8000000000000000; // 0x409b29
        int64_t v49 = 1; // 0x409b29
        int64_t v50; // 0x4096b0
        uint64_t v51; // 0x4096b0
        if (v47 >= v51) {
            int64_t v52 = v50;
            uint64_t v53; // 0x4096b0
            int64_t v54 = v47 > 0x7fffffffffffffff / v53 ? 0x7fffffffffffffff : v47 * v53;
            int64_t v55 = v47 > 0x7fffffffffffffff / v53 ? 1 : v52;
            v48 = v54;
            v49 = v55;
        }
        int64_t v56 = v49;
        int64_t v57 = v48;
        int32_t v58 = v45 - 1; // 0x409b1d
        v46 = v57;
        v44 = v58;
        v50 = v56;
        v59 = v57;
        int64_t v60; // 0x4096b0
        v61 = v60;
        v62 = v56;
        if (v58 == 0) {
            // break -> 0x409cf0
            break;
        }
    }
    goto lab_0x409cf0;
  lab_0x4098d5:;
    int64_t v76 = 1;
    v25 = -0x8000000000000000;
    v32 = v76;
    v24 = 1;
    int64_t v73; // 0x4096b0
    int64_t v74; // 0x4096b0
    int64_t v75; // 0x4096b0
    int64_t v72; // 0x4096b0
    if (v20 < -0x20000000000000) {
        goto lab_0x409878;
    } else {
        int64_t v77 = 1024;
        v73 = 0x7fffffffffffffff / v77;
        v75 = v77;
        v74 = v20;
        v72 = v76;
        goto lab_0x4098ec;
    }
  lab_0x409918:
    // 0x409918
    v25 = -0x8000000000000000;
    v32 = v33;
    v24 = 1;
    if (v20 < v37) {
        goto lab_0x409878;
    } else {
        int64_t v78 = 0x7fffffffffffffff / v26;
        v25 = 0x7fffffffffffffff;
        v32 = v33;
        v24 = 1;
        if (v20 > v78) {
            goto lab_0x409878;
        } else {
            int64_t v79 = v26 * v20; // 0x409938
            v25 = -0x8000000000000000;
            v32 = v33;
            v24 = 1;
            v73 = v78;
            v75 = v26;
            v74 = v79;
            v72 = v33;
            if (v79 < v37) {
                goto lab_0x409878;
            } else {
                goto lab_0x4098ec;
            }
        }
    }
  lab_0x4099b8:;
    uint64_t v80 = v27;
    int64_t v81 = v20;
    int64_t v82 = -0x8000000000000000; // 0x4099f1
    int64_t v83 = 1; // 0x4099f1
    if (v40 <= v81) {
        // 0x4099d0
        v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
        v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : 0;
    }
    int32_t v84 = 4; // 0x4099e5
    int32_t v85 = v84; // 0x4099e8
    int64_t v86 = v83; // 0x4099e8
    v59 = v82;
    v61 = v34;
    v62 = v83;
    while (v84 != 0) {
        // 0x4099ee
        v81 = v82;
        v82 = -0x8000000000000000;
        v83 = 1;
        if (v40 <= v81) {
            // 0x4099d0
            v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
            v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : v86;
        }
        // 0x4099e5
        v84 = v85 - 1;
        v85 = v84;
        v86 = v83;
        v59 = v82;
        v61 = v34;
        v62 = v83;
    }
    goto lab_0x409cf0;
  lab_0x409a20:;
    uint64_t v87 = v28;
    int64_t v88 = v20;
    int64_t v89 = -0x8000000000000000; // 0x409a59
    int64_t v90 = 1; // 0x409a59
    if (v42 <= v88) {
        // 0x409a38
        v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
        v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : 0;
    }
    int32_t v91 = 3; // 0x409a4d
    int32_t v92 = v91; // 0x409a50
    int64_t v93 = v90; // 0x409a50
    v59 = v89;
    v61 = v35;
    v62 = v90;
    while (v91 != 0) {
        // 0x409a56
        v88 = v89;
        v89 = -0x8000000000000000;
        v90 = 1;
        if (v42 <= v88) {
            // 0x409a38
            v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
            v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : v93;
        }
        // 0x409a4d
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v59 = v89;
        v61 = v35;
        v62 = v90;
    }
    goto lab_0x409cf0;
  lab_0x409b58:
    // 0x409b58
    while (true) {
        // 0x409b8e
        int32_t v94; // 0x4096b0
        int32_t v95 = v94;
        int64_t v96; // 0x4096b0
        int64_t v97 = v96;
        int64_t v98 = -0x8000000000000000; // 0x409b91
        int64_t v99 = 1; // 0x409b91
        int64_t v100; // 0x4096b0
        uint64_t v101; // 0x4096b0
        if (v101 <= v97) {
            int64_t v102 = v100;
            uint64_t v103; // 0x4096b0
            int64_t v104 = v97 > 0x7fffffffffffffff / v103 ? 0x7fffffffffffffff : v97 * v103;
            int64_t v105 = v97 > 0x7fffffffffffffff / v103 ? 1 : v102;
            v98 = v104;
            v99 = v105;
        }
        int64_t v106 = v99;
        int64_t v107 = v98;
        int32_t v108 = v95 - 1; // 0x409b85
        v96 = v107;
        v94 = v108;
        v100 = v106;
        v59 = v107;
        int64_t v109; // 0x4096b0
        v61 = v109;
        v62 = v106;
        if (v108 == 0) {
            // break -> 0x409cf0
            break;
        }
    }
    goto lab_0x409cf0;
  lab_0x409bc0:;
    uint64_t v110 = v30;
    int64_t v111 = v20;
    int64_t v112 = -0x8000000000000000; // 0x409bf9
    int64_t v113 = 1; // 0x409bf9
    if (v39 <= v111) {
        // 0x409bd8
        v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
        v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : 0;
    }
    int32_t v114 = 6; // 0x409bed
    int32_t v115 = v114; // 0x409bf0
    int64_t v116 = v113; // 0x409bf0
    v59 = v112;
    v61 = v31;
    v62 = v113;
    while (v114 != 0) {
        // 0x409bf6
        v111 = v112;
        v112 = -0x8000000000000000;
        v113 = 1;
        if (v39 <= v111) {
            // 0x409bd8
            v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
            v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : v116;
        }
        // 0x409bed
        v114 = v115 - 1;
        v115 = v114;
        v116 = v113;
        v59 = v112;
        v61 = v31;
        v62 = v113;
    }
    goto lab_0x409cf0;
  lab_0x409cf0:
    // 0x409cf0
    v25 = v59;
    v32 = v61;
    v24 = (v62 | v19) & 0xffffffff;
    goto lab_0x409878;
  lab_0x4098ec:
    // 0x4098ec
    v25 = 0x7fffffffffffffff;
    v32 = v72;
    v24 = 1;
    if (v73 >= v74) {
        // 0x4098f5
        v25 = v74 * v75;
        v32 = v72;
        v24 = v19;
    }
    goto lab_0x409878;
}
// Address range: 0x409e00 - 0x40a550
int64_t function_409e00(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2) {
    uint32_t base = (int32_t)a3; // 0x409e12
    if (base >= 37) {
        // 0x40a529
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtol");
        return &g141;
    }
    // 0x409e1b
    int64_t v1; // bp-64, 0x409e00
    int64_t endptr = a2 == 0 ? (int64_t)&v1 : (int64_t)a2; // 0x409e28
    int32_t * v2 = __errno_location(); // 0x409e32
    *v2 = 0;
    char * str = (char *)a1;
    int32_t str_as_l = strtol(str, (char **)endptr, base); // 0x409e48
    int64_t * v3 = (int64_t *)endptr; // 0x409e4d
    int64_t v4 = *v3; // 0x409e4d
    int64_t v5; // 0x409e00
    int64_t v6; // 0x409e00
    int64_t v7; // 0x409e00
    char v8; // 0x409e00
    int64_t v9; // 0x409e00
    int64_t v10; // 0x409e00
    int64_t v11; // 0x409e00
    if (v4 == a1) {
        // 0x409ea8
        if (str2 == NULL) {
            // 0x409e7c
            return 4;
        }
        char c = *str; // 0x409eb1
        if (c == 0) {
            // 0x409e7c
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x409ecf
        v10 = 1;
        v6 = 0;
        v8 = c;
        if (found_char_pos == NULL) {
            // 0x409e7c
            return 4;
        }
        goto lab_0x409edd;
    } else {
        int32_t v12 = *v2; // 0x409e58
        int64_t v13 = 0; // 0x409e5e
        if (v12 != 0) {
            // 0x409e90
            v13 = 1;
            if (v12 != 34) {
                // 0x409e7c
                return 4;
            }
        }
        int64_t v14 = str_as_l; // 0x409e48
        v9 = v14;
        v5 = v13;
        if (str2 == NULL) {
            goto lab_0x409e75;
        } else {
            char c2 = *(char *)v4; // 0x409e68
            v9 = v14;
            v5 = v13;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x409f77
                v10 = v14;
                v6 = v13;
                v8 = c2;
                v11 = v14;
                v7 = v13;
                if (found_char_pos2 != NULL) {
                    goto lab_0x409edd;
                } else {
                    goto lab_0x409f85;
                }
            } else {
                goto lab_0x409e75;
            }
        }
    }
  lab_0x409edd:;
    int64_t v15 = v6;
    int64_t v16 = v10;
    unsigned char v17 = v8 - 69;
    int64_t v18 = 1024; // 0x409ee4
    int64_t v19 = 1; // 0x409ee4
    int64_t v20; // 0x409e00
    int64_t v21; // 0x409e00
    int64_t v22; // 0x409e00
    int64_t v23; // 0x409e00
    int64_t v24; // 0x409e00
    int64_t v25; // 0x409e00
    int64_t v26; // 0x409e00
    int64_t v27; // 0x409e00
    int64_t v28; // 0x409e00
    int64_t v29; // 0x409e00
    int64_t v30; // 0x409e00
    int64_t v31; // 0x409e00
    int64_t v32; // 0x409e00
    int64_t v33; // 0x409e00
    int64_t v34; // 0x409e00
    int64_t v35; // 0x409e00
    int64_t v36; // 0x409e00
    int64_t v37; // 0x409e00
    int64_t v38; // 0x409e00
    if (v17 < 48) {
        // 0x409f10
        v18 = 1024;
        v19 = 1;
        if ((1 << (int64_t)((v8 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x409ef0;
        } else {
            // 0x409f24
            v18 = 1024;
            v19 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x409ef0;
            } else {
                // 0x409f36
                v18 = 1000;
                v19 = 2;
                switch (*(char *)(v4 + 1)) {
                    case 68: {
                        goto lab_0x409ef0;
                    }
                    case 105: {
                        char v39 = *(char *)(v4 + 2); // 0x40a512
                        v18 = 1024;
                        v19 = (v39 == 66 ? 2 : 1) + (int64_t)(v39 == 66);
                        goto lab_0x409ef0;
                    }
                    default: {
                        // 0x409f4b
                        g147 = v17;
                        v18 = 1000;
                        v19 = 2;
                        v11 = v16;
                        v7 = v15;
                        v21 = v16;
                        v28 = 1;
                        v20 = v15;
                        v22 = 1024;
                        v29 = 1;
                        v33 = -0x20000000000000;
                        v34 = 1;
                        v23 = 1024;
                        v30 = 1;
                        v36 = -0x20000000000000;
                        v24 = 1024;
                        v31 = 1;
                        v38 = -0x20000000000000;
                        v25 = 1024;
                        v32 = 1;
                        v37 = -0x20000000000000;
                        v26 = 1024;
                        v27 = 1;
                        v35 = -0x20000000000000;
                        switch (v8) {
                            case 69: {
                                goto lab_0x40a1d8;
                            }
                            case 70: {
                                goto lab_0x409f85;
                            }
                            case 71: {
                                goto lab_0x40a240;
                            }
                            case 72: {
                                goto lab_0x409f85;
                            }
                            case 73: {
                                goto lab_0x409f85;
                            }
                            case 74: {
                                goto lab_0x409f85;
                            }
                            case 75: {
                                goto lab_0x40a025;
                            }
                            case 76: {
                                goto lab_0x409f85;
                            }
                            case 77: {
                                goto lab_0x40a068;
                            }
                            case 78: {
                                goto lab_0x409f85;
                            }
                            case 79: {
                                goto lab_0x409f85;
                            }
                            case 80: {
                                goto lab_0x40a108;
                            }
                            case 81: {
                                goto lab_0x409f85;
                            }
                            case 82: {
                                goto lab_0x409f85;
                            }
                            case 83: {
                                goto lab_0x409f85;
                            }
                            case 84: {
                                goto lab_0x40a170;
                            }
                            case 85: {
                                goto lab_0x409f85;
                            }
                            case 86: {
                                goto lab_0x409f85;
                            }
                            case 87: {
                                goto lab_0x409f85;
                            }
                            case 88: {
                                goto lab_0x409f85;
                            }
                            case 89: {
                                goto lab_0x40a2a8;
                            }
                            case 90: {
                                goto lab_0x40a310;
                            }
                            case 91: {
                                goto lab_0x409f85;
                            }
                            case 92: {
                                goto lab_0x409f85;
                            }
                            case 93: {
                                goto lab_0x409f85;
                            }
                            case 94: {
                                goto lab_0x409f85;
                            }
                            case 95: {
                                goto lab_0x409f85;
                            }
                            case 96: {
                                goto lab_0x409f85;
                            }
                            case 97: {
                                goto lab_0x409f85;
                            }
                            case 98: {
                                goto lab_0x40a0d5;
                            }
                            case 99: {
                                goto lab_0x409fc8;
                            }
                            case 100: {
                                goto lab_0x409f85;
                            }
                            case 101: {
                                goto lab_0x409f85;
                            }
                            case 102: {
                                goto lab_0x409f85;
                            }
                            case 103: {
                                goto lab_0x40a240;
                            }
                            case 104: {
                                goto lab_0x409f85;
                            }
                            case 105: {
                                goto lab_0x409f85;
                            }
                            case 106: {
                                goto lab_0x409f85;
                            }
                            case 107: {
                                goto lab_0x40a025;
                            }
                            case 108: {
                                goto lab_0x409f85;
                            }
                            case 109: {
                                goto lab_0x40a068;
                            }
                            case 110: {
                                goto lab_0x409f85;
                            }
                            case 111: {
                                goto lab_0x409f85;
                            }
                            case 112: {
                                goto lab_0x409f85;
                            }
                            case 113: {
                                goto lab_0x409f85;
                            }
                            case 114: {
                                goto lab_0x409f85;
                            }
                            case 115: {
                                goto lab_0x409f85;
                            }
                            case 116: {
                                goto lab_0x40a170;
                            }
                            default: {
                                goto lab_0x409ef0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x409ef0;
    }
  lab_0x409e75:
    // 0x409e75
    *a4 = v9;
    // 0x409e7c
    return v5 & 0xffffffff;
  lab_0x409ef0:
    // 0x409ef0
    g146 = v8 - 66;
    v11 = v16;
    v7 = v15;
    v21 = v16;
    v28 = v19;
    v20 = v15;
    v34 = v19;
    switch (v8) {
        case 66: {
            // 0x409fc1
            v21 = 1024 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x409fc8;
        }
        case 69: {
            // 0x40a1c0
            v25 = v18;
            v32 = v19;
            v37 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x40a1d8;
        }
        case 71: {
            goto lab_0x40a240;
        }
        case 75: {
            goto lab_0x40a025;
        }
        case 77: {
            goto lab_0x40a050;
        }
        case 80: {
            // 0x40a0f0
            v23 = v18;
            v30 = v19;
            v36 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x40a108;
        }
        case 84: {
            goto lab_0x40a158;
        }
        case 89: {
            // 0x40a290
            goto lab_0x40a2a8;
        }
        case 90: {
            // 0x40a2f8
            v26 = v18;
            v27 = v19;
            v35 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x40a310;
        }
        case 98: {
            goto lab_0x40a0d5;
        }
        case 99: {
            goto lab_0x409fc8;
        }
        case 103: {
            goto lab_0x40a240;
        }
        case 107: {
            goto lab_0x40a025;
        }
        case 109: {
            goto lab_0x40a050;
        }
        case 116: {
            goto lab_0x40a158;
        }
        case 119: {
            // 0x40a009
            v21 = 2 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x409fc8;
        }
        default: {
            goto lab_0x409f85;
        }
    }
    // 0x40a228
    goto lab_0x40a240;
    // 0x40a010
    goto lab_0x40a025;
  lab_0x40a050:
    // 0x40a050
    v22 = v18;
    v29 = v19;
    v33 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x40a068;
  lab_0x40a158:
    // 0x40a158
    v24 = v18;
    v31 = v19;
    v38 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x40a170;
  lab_0x40a0d5:
    // 0x40a0d5
    v21 = 512 * v16;
    v28 = v34;
    v20 = v15;
    goto lab_0x409fc8;
  lab_0x409fc8:;
    int64_t v59 = v20;
    int64_t v60 = v28 + v4; // 0x409fc8
    *v3 = v60;
    v9 = v21;
    v5 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x409e75;
  lab_0x409f85:
    // 0x409f85
    *a4 = v11;
    // 0x409e7c
    return (v7 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x40a1d8:;
    uint64_t v61 = v25;
    int64_t v62 = v16;
    int64_t v63 = -0x8000000000000000; // 0x40a211
    int64_t v64 = 1; // 0x40a211
    if (v62 >= v37) {
        // 0x40a1f0
        v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
        v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : 0;
    }
    int32_t v65 = 5; // 0x40a205
    int32_t v66 = v65; // 0x40a208
    int64_t v67 = v64; // 0x40a208
    int64_t v55 = v63; // 0x40a208
    int64_t v57 = v32; // 0x40a208
    int64_t v58 = v64; // 0x40a208
    while (v65 != 0) {
        // 0x40a20e
        v62 = v63;
        v63 = -0x8000000000000000;
        v64 = 1;
        if (v62 >= v37) {
            // 0x40a1f0
            v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
            v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : v67;
        }
        // 0x40a205
        v65 = v66 - 1;
        v66 = v65;
        v67 = v64;
        v55 = v63;
        v57 = v32;
        v58 = v64;
    }
    goto lab_0x40a440;
  lab_0x40a240:
    // 0x40a240
    while (true) {
        // 0x40a276
        int32_t v40; // 0x409e00
        int32_t v41 = v40;
        int64_t v42; // 0x409e00
        int64_t v43 = v42;
        int64_t v44 = -0x8000000000000000; // 0x40a279
        int64_t v45 = 1; // 0x40a279
        int64_t v46; // 0x409e00
        uint64_t v47; // 0x409e00
        if (v43 >= v47) {
            int64_t v48 = v46;
            uint64_t v49; // 0x409e00
            int64_t v50 = v43 > 0x7fffffffffffffff / v49 ? 0x7fffffffffffffff : v43 * v49;
            int64_t v51 = v43 > 0x7fffffffffffffff / v49 ? 1 : v48;
            v44 = v50;
            v45 = v51;
        }
        int64_t v52 = v45;
        int64_t v53 = v44;
        int32_t v54 = v41 - 1; // 0x40a26d
        v42 = v53;
        v40 = v54;
        v46 = v52;
        v55 = v53;
        int64_t v56; // 0x409e00
        v57 = v56;
        v58 = v52;
        if (v54 == 0) {
            // break -> 0x40a440
            break;
        }
    }
    goto lab_0x40a440;
  lab_0x40a025:;
    int64_t v72 = 1;
    v21 = -0x8000000000000000;
    v28 = v72;
    v20 = 1;
    int64_t v69; // 0x409e00
    int64_t v70; // 0x409e00
    int64_t v71; // 0x409e00
    int64_t v68; // 0x409e00
    if (v16 < -0x20000000000000) {
        goto lab_0x409fc8;
    } else {
        int64_t v73 = 1024;
        v69 = 0x7fffffffffffffff / v73;
        v71 = v73;
        v70 = v16;
        v68 = v72;
        goto lab_0x40a03c;
    }
  lab_0x40a068:
    // 0x40a068
    v21 = -0x8000000000000000;
    v28 = v29;
    v20 = 1;
    if (v16 < v33) {
        goto lab_0x409fc8;
    } else {
        int64_t v74 = 0x7fffffffffffffff / v22;
        v21 = 0x7fffffffffffffff;
        v28 = v29;
        v20 = 1;
        if (v16 > v74) {
            goto lab_0x409fc8;
        } else {
            int64_t v75 = v22 * v16; // 0x40a088
            v21 = -0x8000000000000000;
            v28 = v29;
            v20 = 1;
            v69 = v74;
            v71 = v22;
            v70 = v75;
            v68 = v29;
            if (v75 < v33) {
                goto lab_0x409fc8;
            } else {
                goto lab_0x40a03c;
            }
        }
    }
  lab_0x40a108:;
    uint64_t v76 = v23;
    int64_t v77 = v16;
    int64_t v78 = -0x8000000000000000; // 0x40a141
    int64_t v79 = 1; // 0x40a141
    if (v36 <= v77) {
        // 0x40a120
        v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
        v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : 0;
    }
    int32_t v80 = 4; // 0x40a135
    int32_t v81 = v80; // 0x40a138
    int64_t v82 = v79; // 0x40a138
    v55 = v78;
    v57 = v30;
    v58 = v79;
    while (v80 != 0) {
        // 0x40a13e
        v77 = v78;
        v78 = -0x8000000000000000;
        v79 = 1;
        if (v36 <= v77) {
            // 0x40a120
            v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
            v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : v82;
        }
        // 0x40a135
        v80 = v81 - 1;
        v81 = v80;
        v82 = v79;
        v55 = v78;
        v57 = v30;
        v58 = v79;
    }
    goto lab_0x40a440;
  lab_0x40a170:;
    uint64_t v83 = v24;
    int64_t v84 = v16;
    int64_t v85 = -0x8000000000000000; // 0x40a1a9
    int64_t v86 = 1; // 0x40a1a9
    if (v38 <= v84) {
        // 0x40a188
        v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
        v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : 0;
    }
    int32_t v87 = 3; // 0x40a19d
    int32_t v88 = v87; // 0x40a1a0
    int64_t v89 = v86; // 0x40a1a0
    v55 = v85;
    v57 = v31;
    v58 = v86;
    while (v87 != 0) {
        // 0x40a1a6
        v84 = v85;
        v85 = -0x8000000000000000;
        v86 = 1;
        if (v38 <= v84) {
            // 0x40a188
            v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
            v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : v89;
        }
        // 0x40a19d
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v55 = v85;
        v57 = v31;
        v58 = v86;
    }
    goto lab_0x40a440;
  lab_0x40a2a8:
    // 0x40a2a8
    while (true) {
        // 0x40a2de
        int32_t v90; // 0x409e00
        int32_t v91 = v90;
        int64_t v92; // 0x409e00
        int64_t v93 = v92;
        int64_t v94 = -0x8000000000000000; // 0x40a2e1
        int64_t v95 = 1; // 0x40a2e1
        int64_t v96; // 0x409e00
        uint64_t v97; // 0x409e00
        if (v97 <= v93) {
            int64_t v98 = v96;
            uint64_t v99; // 0x409e00
            int64_t v100 = v93 > 0x7fffffffffffffff / v99 ? 0x7fffffffffffffff : v93 * v99;
            int64_t v101 = v93 > 0x7fffffffffffffff / v99 ? 1 : v98;
            v94 = v100;
            v95 = v101;
        }
        int64_t v102 = v95;
        int64_t v103 = v94;
        int32_t v104 = v91 - 1; // 0x40a2d5
        v92 = v103;
        v90 = v104;
        v96 = v102;
        v55 = v103;
        int64_t v105; // 0x409e00
        v57 = v105;
        v58 = v102;
        if (v104 == 0) {
            // break -> 0x40a440
            break;
        }
    }
    goto lab_0x40a440;
  lab_0x40a310:;
    uint64_t v106 = v26;
    int64_t v107 = v16;
    int64_t v108 = -0x8000000000000000; // 0x40a349
    int64_t v109 = 1; // 0x40a349
    if (v35 <= v107) {
        // 0x40a328
        v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
        v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : 0;
    }
    int32_t v110 = 6; // 0x40a33d
    int32_t v111 = v110; // 0x40a340
    int64_t v112 = v109; // 0x40a340
    v55 = v108;
    v57 = v27;
    v58 = v109;
    while (v110 != 0) {
        // 0x40a346
        v107 = v108;
        v108 = -0x8000000000000000;
        v109 = 1;
        if (v35 <= v107) {
            // 0x40a328
            v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
            v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : v112;
        }
        // 0x40a33d
        v110 = v111 - 1;
        v111 = v110;
        v112 = v109;
        v55 = v108;
        v57 = v27;
        v58 = v109;
    }
    goto lab_0x40a440;
  lab_0x40a440:
    // 0x40a440
    v21 = v55;
    v28 = v57;
    v20 = (v58 | v15) & 0xffffffff;
    goto lab_0x409fc8;
  lab_0x40a03c:
    // 0x40a03c
    v21 = 0x7fffffffffffffff;
    v28 = v68;
    v20 = 1;
    if (v69 >= v70) {
        // 0x40a045
        v21 = v70 * v71;
        v28 = v68;
        v20 = v15;
    }
    goto lab_0x409fc8;
}
// Address range: 0x40a550 - 0x40a5d1
int64_t function_40a550(int64_t a1, int64_t a2, int64_t a3, char (**a4)[6], int64_t a5) {
    int64_t v1 = *(int64_t *)((8 * a1 + 0x7fffffff8 & 0x7fffffff8) + (int64_t)&g13); // 0x40a572
    error(g43, 0, dcgettext(NULL, (char *)v1, 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40a5e0 - 0x40aa20
int64_t function_40a5e0(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40a5ee
    if (v1 >= 37) {
        // 0x40a9fb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g141;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x40a612
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x40a642
    int64_t v4 = a1; // 0x40a647
    char v5 = c; // 0x40a647
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x40a63c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x40a638
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x40a649
    if (v5 == 45) {
        // 0x40a685
        return 4;
    }
    // 0x40a64e
    int64_t v7; // bp-64, 0x40a5e0
    int64_t * v8 = a2 == NULL ? &v7 : a2;
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x40a656
    int64_t v10 = *v8; // 0x40a65b
    char v11; // 0x40a5e0
    int64_t v12; // 0x40a5e0
    int64_t v13; // 0x40a5e0
    int64_t v14; // 0x40a5e0
    int64_t v15; // 0x40a5e0
    int64_t v16; // 0x40a5e0
    int64_t v17; // 0x40a5e0
    if (v10 == a1) {
        // 0x40a6b8
        if (c == 0 || str == NULL) {
            // 0x40a685
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40a6d9
        v16 = 1;
        v13 = 0;
        v11 = c;
        if (found_char_pos == NULL) {
            // 0x40a685
            return 4;
        }
        goto lab_0x40a6e7;
    } else {
        int32_t v18 = *v2; // 0x40a666
        int64_t v19 = 0; // 0x40a66c
        if (v18 != 0) {
            // 0x40a6a0
            v19 = 1;
            if (v18 != 34) {
                // 0x40a685
                return 4;
            }
        }
        int64_t v20 = v9; // 0x40a656
        v15 = v20;
        v12 = v19;
        if (str == NULL) {
            goto lab_0x40a682;
        } else {
            char c2 = *(char *)v10; // 0x40a675
            v15 = v20;
            v12 = v19;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x40a7e3
                v16 = v20;
                v13 = v19;
                v11 = c2;
                v17 = v20;
                v14 = v19;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40a6e7;
                } else {
                    goto lab_0x40a7f5;
                }
            } else {
                goto lab_0x40a682;
            }
        }
    }
  lab_0x40a6e7:;
    unsigned char v21 = v11 - 69;
    int64_t v22 = 1024; // 0x40a6ef
    int64_t v23 = 1; // 0x40a6ef
    int64_t v24; // 0x40a5e0
    int64_t v25; // 0x40a5e0
    int64_t v26; // 0x40a5e0
    int64_t v27; // 0x40a5e0
    int64_t v28; // 0x40a5e0
    int64_t v29; // 0x40a5e0
    int64_t v30; // 0x40a5e0
    int64_t v31; // 0x40a5e0
    int64_t v32; // 0x40a5e0
    int64_t v33; // 0x40a5e0
    int64_t v34; // 0x40a5e0
    int64_t v35; // 0x40a5e0
    int64_t v36; // 0x40a5e0
    int64_t v37; // 0x40a5e0
    int64_t v38; // 0x40a5e0
    int64_t v39; // 0x40a5e0
    int64_t v40; // 0x40a5e0
    int64_t v41; // 0x40a5e0
    int64_t v42; // 0x40a5e0
    int64_t v43; // 0x40a5e0
    if (v21 < 48) {
        // 0x40a6f1
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v11 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40a75a;
        } else {
            // 0x40a704
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40a75a;
            } else {
                // 0x40a720
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v10 + 1)) {
                    case 68: {
                        goto lab_0x40a75a;
                    }
                    case 105: {
                        char v44 = *(char *)(v10 + 2); // 0x40a989
                        v22 = 1024;
                        v23 = (v44 == 66 ? 2 : 1) + (int64_t)(v44 == 66);
                        goto lab_0x40a75a;
                    }
                    default: {
                        // 0x40a735
                        g148 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v26 = 1024;
                        v38 = 1;
                        v25 = v16;
                        v24 = v13;
                        v39 = 1;
                        v27 = 1024;
                        v40 = 1;
                        v17 = v16;
                        v14 = v13;
                        v41 = 1;
                        v28 = 1024;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        switch (v11) {
                            case 69: {
                                goto lab_0x40a8fb;
                            }
                            case 70: {
                                goto lab_0x40a7f5;
                            }
                            case 71: {
                                goto lab_0x40a933;
                            }
                            case 72: {
                                goto lab_0x40a7f5;
                            }
                            case 73: {
                                goto lab_0x40a7f5;
                            }
                            case 74: {
                                goto lab_0x40a7f5;
                            }
                            case 75: {
                                goto lab_0x40a7bc;
                            }
                            case 76: {
                                goto lab_0x40a7f5;
                            }
                            case 77: {
                                goto lab_0x40a77e;
                            }
                            case 78: {
                                goto lab_0x40a7f5;
                            }
                            case 79: {
                                goto lab_0x40a7f5;
                            }
                            case 80: {
                                goto lab_0x40a8c8;
                            }
                            case 81: {
                                goto lab_0x40a7f5;
                            }
                            case 82: {
                                goto lab_0x40a7f5;
                            }
                            case 83: {
                                goto lab_0x40a7f5;
                            }
                            case 84: {
                                goto lab_0x40a898;
                            }
                            case 85: {
                                goto lab_0x40a7f5;
                            }
                            case 86: {
                                goto lab_0x40a7f5;
                            }
                            case 87: {
                                goto lab_0x40a7f5;
                            }
                            case 88: {
                                goto lab_0x40a7f5;
                            }
                            case 89: {
                                goto lab_0x40a866;
                            }
                            case 90: {
                                goto lab_0x40a82b;
                            }
                            case 91: {
                                goto lab_0x40a7f5;
                            }
                            case 92: {
                                goto lab_0x40a7f5;
                            }
                            case 93: {
                                goto lab_0x40a7f5;
                            }
                            case 94: {
                                goto lab_0x40a7f5;
                            }
                            case 95: {
                                goto lab_0x40a7f5;
                            }
                            case 96: {
                                goto lab_0x40a7f5;
                            }
                            case 97: {
                                goto lab_0x40a7f5;
                            }
                            case 98: {
                                goto lab_0x40a80f;
                            }
                            case 99: {
                                goto lab_0x40a798;
                            }
                            case 100: {
                                goto lab_0x40a7f5;
                            }
                            case 101: {
                                goto lab_0x40a7f5;
                            }
                            case 102: {
                                goto lab_0x40a7f5;
                            }
                            case 103: {
                                goto lab_0x40a933;
                            }
                            case 104: {
                                goto lab_0x40a7f5;
                            }
                            case 105: {
                                goto lab_0x40a7f5;
                            }
                            case 106: {
                                goto lab_0x40a7f5;
                            }
                            case 107: {
                                goto lab_0x40a7bc;
                            }
                            case 108: {
                                goto lab_0x40a7f5;
                            }
                            case 109: {
                                goto lab_0x40a77e;
                            }
                            case 110: {
                                goto lab_0x40a7f5;
                            }
                            case 111: {
                                goto lab_0x40a7f5;
                            }
                            case 112: {
                                goto lab_0x40a7f5;
                            }
                            case 113: {
                                goto lab_0x40a7f5;
                            }
                            case 114: {
                                goto lab_0x40a7f5;
                            }
                            case 115: {
                                goto lab_0x40a7f5;
                            }
                            case 116: {
                                goto lab_0x40a898;
                            }
                            default: {
                                goto lab_0x40a75a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40a75a;
    }
  lab_0x40a682:
    // 0x40a682
    *a4 = v15;
    // 0x40a685
    return v12 & 0xffffffff;
  lab_0x40a75a:
    // 0x40a75a
    g139 = v11 - 66;
    v26 = v22;
    v38 = v23;
    v25 = v16;
    v24 = v13;
    v39 = v23;
    v27 = v22;
    v40 = v23;
    v17 = v16;
    v14 = v13;
    v41 = v23;
    v28 = v22;
    v42 = v23;
    v29 = v22;
    v43 = v23;
    v30 = v22;
    v34 = v23;
    v31 = v22;
    v35 = v23;
    v32 = v22;
    v36 = v23;
    v33 = v22;
    v37 = v23;
    int64_t v45; // 0x40a5e0
    switch (v11) {
        case 66: {
            // 0x40a954
            v45 = v23;
            if (v16 >= 0x40000000000000) {
                goto lab_0x40a7c7;
            } else {
                // 0x40a961
                v25 = 1024 * v16;
                v24 = v13;
                v39 = v23;
                goto lab_0x40a798;
            }
        }
        case 69: {
            goto lab_0x40a8fb;
        }
        case 71: {
            goto lab_0x40a933;
        }
        case 75: {
            goto lab_0x40a7bc;
        }
        case 77: {
            goto lab_0x40a77e;
        }
        case 80: {
            goto lab_0x40a8c8;
        }
        case 84: {
            goto lab_0x40a898;
        }
        case 89: {
            goto lab_0x40a866;
        }
        case 90: {
            goto lab_0x40a82b;
        }
        case 98: {
            goto lab_0x40a80f;
        }
        case 99: {
            goto lab_0x40a798;
        }
        case 103: {
            goto lab_0x40a933;
        }
        case 107: {
            goto lab_0x40a7bc;
        }
        case 109: {
            goto lab_0x40a77e;
        }
        case 116: {
            goto lab_0x40a898;
        }
        case 119: {
            // 0x40a800
            v45 = v23;
            if (v16 < 0) {
                goto lab_0x40a7c7;
            } else {
                // 0x40a805
                v25 = 2 * v16;
                v24 = v13;
                v39 = v23;
                goto lab_0x40a798;
            }
        }
        default: {
            goto lab_0x40a7f5;
        }
    }
  lab_0x40a8fb:;
    uint128_t v46 = (int128_t)v16 * (int128_t)v32; // 0x40a913
    int64_t v47 = (int64_t)(v46 < 0xffffffffffffffff ? v46 : 0xffffffffffffffff);
    int64_t v48 = v46 > 0xffffffffffffffff ? 1 : 0;
    int32_t v49 = 5; // 0x40a91f
    int64_t v50 = v47; // 0x40a922
    int64_t v51 = v36; // 0x40a922
    int64_t v52 = v48; // 0x40a922
    int32_t v53 = v49; // 0x40a922
    int64_t v54 = v48; // 0x40a922
    while (v49 != 0) {
        // 0x40a910
        v46 = (int128_t)v47 * (int128_t)v32;
        v47 = (int64_t)(v46 < 0xffffffffffffffff ? v46 : 0xffffffffffffffff);
        v48 = v46 > 0xffffffffffffffff ? 1 : v54;
        v49 = v53 - 1;
        v50 = v47;
        v51 = v36;
        v52 = v48;
        v53 = v49;
        v54 = v48;
    }
    goto lab_0x40a854;
  lab_0x40a933:
    // 0x40a933
    v25 = -1;
    v24 = 1;
    v39 = v37;
    if ((int128_t)v33 * (int128_t)v16 <= 0xffffffffffffffff) {
        // 0x40a93e
        int128_t v55; // 0x40a939
        uint128_t v56; // 0x40a939
        uint128_t v57 = (v56 & 0xffffffffffffffff) * v55; // 0x40a93e
        v25 = -1;
        v24 = 1;
        int64_t v58; // 0x40a5e0
        v39 = v58;
        if (v57 <= 0xffffffffffffffff) {
            uint128_t v59 = (v57 & 0xffffffffffffffff) * v55; // 0x40a943
            v25 = -1;
            v24 = 1;
            v39 = v58;
            if (v59 <= 0xffffffffffffffff) {
                // 0x40a948
                v25 = v59;
                int64_t v60; // 0x40a5e0
                v24 = v60 & 0xffffffff;
                v39 = v58;
            }
        }
    }
    goto lab_0x40a798;
  lab_0x40a7bc:;
    uint128_t v63 = (int128_t)v27 * (int128_t)v16; // 0x40a7bf
    v25 = v63;
    v24 = v13;
    v39 = v40;
    v45 = v40;
    if (v63 <= 0xffffffffffffffff) {
        goto lab_0x40a798;
    } else {
        goto lab_0x40a7c7;
    }
  lab_0x40a77e:;
    int128_t v64 = v26; // 0x40a784
    uint128_t v65 = v64 * (int128_t)v16; // 0x40a784
    v45 = v38;
    if (v65 > 0xffffffffffffffff) {
        goto lab_0x40a7c7;
    } else {
        uint128_t v66 = (v65 & 0xffffffffffffffff) * v64; // 0x40a789
        v45 = v38;
        if (v66 > 0xffffffffffffffff) {
            goto lab_0x40a7c7;
        } else {
            // 0x40a78e
            v25 = v66;
            v24 = v13;
            v39 = v38;
            goto lab_0x40a798;
        }
    }
  lab_0x40a8c8:;
    uint128_t v67 = (int128_t)v16 * (int128_t)v31; // 0x40a8db
    int64_t v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
    int64_t v69 = v67 > 0xffffffffffffffff ? 1 : 0;
    int32_t v70 = 4; // 0x40a8e7
    v50 = v68;
    v51 = v35;
    v52 = v69;
    int32_t v71 = v70; // 0x40a8ea
    int64_t v72 = v69; // 0x40a8ea
    while (v70 != 0) {
        // 0x40a8d8
        v67 = (int128_t)v68 * (int128_t)v31;
        v68 = (int64_t)(v67 < 0xffffffffffffffff ? v67 : 0xffffffffffffffff);
        v69 = v67 > 0xffffffffffffffff ? 1 : v72;
        v70 = v71 - 1;
        v50 = v68;
        v51 = v35;
        v52 = v69;
        v71 = v70;
        v72 = v69;
    }
    goto lab_0x40a854;
  lab_0x40a898:;
    uint128_t v73 = (int128_t)v16 * (int128_t)v30; // 0x40a8ab
    int64_t v74 = (int64_t)(v73 < 0xffffffffffffffff ? v73 : 0xffffffffffffffff);
    int64_t v75 = v73 > 0xffffffffffffffff ? 1 : 0;
    int32_t v76 = 3; // 0x40a8b7
    v50 = v74;
    v51 = v34;
    v52 = v75;
    int32_t v77 = v76; // 0x40a8ba
    int64_t v78 = v75; // 0x40a8ba
    while (v76 != 0) {
        // 0x40a8a8
        v73 = (int128_t)v74 * (int128_t)v30;
        v74 = (int64_t)(v73 < 0xffffffffffffffff ? v73 : 0xffffffffffffffff);
        v75 = v73 > 0xffffffffffffffff ? 1 : v78;
        v76 = v77 - 1;
        v50 = v74;
        v51 = v34;
        v52 = v75;
        v77 = v76;
        v78 = v75;
    }
    goto lab_0x40a854;
  lab_0x40a866:;
    uint128_t v79 = (int128_t)v16 * (int128_t)v29; // 0x40a87b
    int64_t v80 = (int64_t)(v79 < 0xffffffffffffffff ? v79 : 0xffffffffffffffff);
    int64_t v81 = v79 > 0xffffffffffffffff ? 1 : 0;
    int32_t v82 = 7; // 0x40a887
    v50 = v80;
    v51 = v43;
    v52 = v81;
    int32_t v83 = v82; // 0x40a88a
    int64_t v84 = v81; // 0x40a88a
    while (v82 != 0) {
        // 0x40a878
        v79 = (int128_t)v80 * (int128_t)v29;
        v80 = (int64_t)(v79 < 0xffffffffffffffff ? v79 : 0xffffffffffffffff);
        v81 = v79 > 0xffffffffffffffff ? 1 : v84;
        v82 = v83 - 1;
        v50 = v80;
        v51 = v43;
        v52 = v81;
        v83 = v82;
        v84 = v81;
    }
    goto lab_0x40a854;
  lab_0x40a82b:;
    uint128_t v85 = (int128_t)v16 * (int128_t)v28; // 0x40a843
    int64_t v86 = (int64_t)(v85 < 0xffffffffffffffff ? v85 : 0xffffffffffffffff);
    int64_t v87 = v85 > 0xffffffffffffffff ? 1 : 0;
    int32_t v88 = 6; // 0x40a84f
    int32_t v89 = v88; // 0x40a852
    int64_t v90 = v87; // 0x40a852
    v50 = v86;
    v51 = v42;
    v52 = v87;
    while (v88 != 0) {
        // 0x40a840
        v85 = (int128_t)v86 * (int128_t)v28;
        v86 = (int64_t)(v85 < 0xffffffffffffffff ? v85 : 0xffffffffffffffff);
        v87 = v85 > 0xffffffffffffffff ? 1 : v90;
        v88 = v89 - 1;
        v89 = v88;
        v90 = v87;
        v50 = v86;
        v51 = v42;
        v52 = v87;
    }
    goto lab_0x40a854;
  lab_0x40a80f:
    // 0x40a80f
    v45 = v41;
    if (v16 >= 0x80000000000000) {
        goto lab_0x40a7c7;
    } else {
        // 0x40a818
        v25 = 512 * v16;
        v24 = v13;
        v39 = v41;
        goto lab_0x40a798;
    }
  lab_0x40a798:;
    int64_t v61 = v24;
    int64_t v62 = (0x100000000 * v39 >> 32) + v10; // 0x40a79d
    *v8 = v62;
    v15 = v25;
    v12 = (*(char *)v62 != 0 ? v61 | 2 : v61) & 0xffffffff;
    goto lab_0x40a682;
  lab_0x40a7f5:
    // 0x40a7f5
    *a4 = v17;
    // 0x40a685
    return (v14 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x40a7c7:
    // 0x40a7c7
    v25 = -1;
    v24 = 1;
    v39 = v45;
    goto lab_0x40a798;
  lab_0x40a854:
    // 0x40a854
    v25 = v50;
    v24 = (v52 | v13) & 0xffffffff;
    v39 = v51;
    goto lab_0x40a798;
}
// Address range: 0x40aa20 - 0x40aa9b
int64_t function_40aa20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40aa27
    if (fileno(stream) < 0) {
        // 0x40aa87
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40aa3a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40aa6b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40aa87
            return fclose(stream);
        }
    }
    // 0x40aa3c
    if ((int32_t)function_40abe0(a1, v1) == 0) {
        // 0x40aa87
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40aa48
    int32_t v3 = *v2; // 0x40aa50
    int64_t result = fclose(stream); // 0x40aa5e
    if (v3 != 0) {
        // 0x40aa90
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40aa60
    return result;
}
// Address range: 0x40aaa0 - 0x40abd5
int64_t function_40aaa0(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x40ab80
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40aadc
    int64_t v2; // 0x40aaa0
    if (g130 < 0) {
        int64_t v3 = function_40aaa0(fd, 0, v1, a4); // 0x40ab24
        int64_t v4 = v3 & 0xffffffff; // 0x40ab29
        if ((int32_t)v3 < 0) {
            // 0x40ab10
            return v4 & 0xffffffff;
        }
        // 0x40ab2f
        v2 = v4;
        if (g130 != -1) {
            // 0x40ab10
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40aaf7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40ab06
            g130 = 1;
            // 0x40ab10
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40aaa0(fd & 0xffffffff, 0, v1, a4); // 0x40abb7
        int64_t v7 = v6 & 0xffffffff; // 0x40abbc
        if ((int32_t)v6 < 0) {
            // 0x40ab10
            return v7 & 0xffffffff;
        }
        // 0x40abc6
        g130 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40ab3f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40ab4a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40ab10
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40ab62
    close(fd2);
    // 0x40ab10
    return 0xffffffff;
}
// Address range: 0x40abe0 - 0x40ac20
int64_t function_40abe0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40abfa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40abfa
        return fflush(stream);
    }
    // 0x40ac08
    function_40ac20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40ac20 - 0x40ac77
int64_t function_40ac20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40ac20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40ac2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40ac5b
    int64_t result = -1; // 0x40ac64
    if (v1 != -1) {
        // 0x40ac66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40ac72
    return result;
}
// Address range: 0x40ac80 - 0x40ad5f
int64_t function_40ac80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40ac8c
    uint32_t v2 = *v1; // 0x40ac8c
    int64_t v3 = a2 & 0xffffffff; // 0x40ac91
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40ac94
    uint64_t v5 = (int64_t)*v4; // 0x40ac94
    int64_t v6; // 0x40ad02
    if (v3 <= v5) {
      lab_0x40acfc_2:
        // 0x40acfc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40ac82
    int64_t v8 = v2; // 0x40ac80
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40acfc
        goto lab_0x40acfc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40acb8
    int64_t v17; // 0x40acc6
    int64_t * v18; // 0x40ace0
    int64_t * v19; // 0x40ace3
    int64_t v20; // 0x40acee
    int64_t v21; // 0x40acc6
    while ((v16 & 0xffffffff) > v10) {
        // 0x40acc3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40ace0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40acf7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40acfc
            goto lab_0x40acfc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40acfc
            goto lab_0x40acfc_2;
        }
        // 0x40acb2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40ad3b
    int64_t * v23 = (int64_t *)v22; // 0x40ad40
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40ad43
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40ad40
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40ad57
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40acad
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40acfc
            goto lab_0x40acfc_2;
        }
        // 0x40acb2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40acc3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40ace0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40acf7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40acfc
                goto lab_0x40acfc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40acfc
                goto lab_0x40acfc_2;
            }
            // 0x40acb2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40ad20
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40ad40
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40ad57
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40acfc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40ad60 - 0x40b37c
int64_t function_40ad60(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40ad7f
    int64_t v2 = *v1; // 0x40ad7f
    char * str2 = (char *)v2; // 0x40ad8c
    char c = *str2; // 0x40ad8c
    int64_t v3 = v2; // 0x40adb8
    int64_t v4 = 0; // 0x40ad60
    int32_t v5; // 0x40ad60
    int64_t v6; // 0x40ad60
    int64_t v7; // 0x40ad60
    int64_t v8; // 0x40ad60
    int64_t v9; // 0x40ad60
    int64_t v10; // 0x40ad60
    int64_t v11; // 0x40ad60
    int64_t v12; // 0x40ad60
    int64_t v13; // 0x40ad60
    int64_t str3; // 0x40ad60
    int64_t v14; // 0x40ad60
    int64_t v15; // 0x40ad60
    int64_t v16; // 0x40ad60
    int64_t v17; // 0x40ad60
    int32_t v18; // 0x40ad60
    int32_t v19; // 0x40ad60
    int32_t v20; // 0x40ad60
    int32_t v21; // 0x40ad60
    int32_t v22; // 0x40ad60
    int32_t v23; // 0x40ad60
    int32_t v24; // 0x40ad60
    int32_t v25; // 0x40ad60
    int32_t v26; // 0x40ad60
    int32_t v27; // 0x40ad60
    int32_t v28; // 0x40ad60
    int32_t v29; // 0x40ad60
    int64_t nmemb; // 0x40ad60
    int64_t v30; // 0x40ad60
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40adbc
            while (v31 != 0 == (v31 != 61)) {
                // 0x40adb8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40adc8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40adce
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40ad98
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40adfc
                int64_t v34; // 0x40ad60
                int64_t v35; // 0x40ad60
                if (strncmp(str, str2, n) == 0) {
                    // 0x40ae05
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40af80;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40ae16
                int64_t v37 = *(int64_t *)v36; // 0x40ae1a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40adf0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40ae05
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40af80;
                        }
                    }
                    // 0x40ae16
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
                  lab_0x40ae66:
                    // 0x40ae66
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
                        goto lab_0x40aec0;
                    } else {
                        if (v11 == 0) {
                            // 0x40b030
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40aec0;
                        } else {
                            if (v39 == 0) {
                                // 0x40afe0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40ae8a;
                                } else {
                                    // 0x40afec
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40ae8a;
                                    } else {
                                        // 0x40affa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40ae8a;
                                        } else {
                                            goto lab_0x40aec0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40ae8a;
                            }
                        }
                    }
                }
              lab_0x40aed1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40b0a6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40b252
                            flockfile(g56);
                            int64_t v41 = *v1; // 0x40b272
                            __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40b2bf
                            int64_t v43 = (int64_t)g56;
                            int64_t v44 = v43; // 0x40b2d9
                            int64_t v45; // 0x40b2db
                            if (*(char *)v42 != 0) {
                                // 0x40b2db
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g56;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40b2d3
                            while (v17 + nmemb != v42) {
                                // 0x40b2d5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40b2db
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g56;
                                }
                                // 0x40b2c8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40b300
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g56);
                            v40 = *v1;
                        } else {
                            // 0x40b0b4
                            __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40b20f
                        free((int64_t *)v17);
                    }
                    // 0x40b109
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40b120
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40afce
                    return 63;
                }
                // 0x40aef0
                v5 = v39;
                if (v13 != 0) {
                    // 0x40af74
                    v35 = v13;
                    v34 = v25;
                  lab_0x40af80:;
                    int32_t * v49 = (int32_t *)a7; // 0x40af90
                    uint32_t v50 = *v49; // 0x40af90
                    int64_t v51 = v50; // 0x40af90
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40af9a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40afa3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40b1cf
                                __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40b17a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40afce
                            return 63;
                        }
                        // 0x40b018
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40b32f
                                    __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40b22d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40b240
                                // 0x40afce
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40b13e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40b152
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40afbb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40afbe
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40afc2
                    int64_t result = v59; // 0x40afc8
                    if (v58 != 0) {
                        // 0x40afca
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40afce
                    return result;
                }
            } else {
                // 0x40adce
                v5 = v32;
            }
            // break -> 0x40aef5
            break;
        }
    }
    // 0x40aef5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40af0d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40af17
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40afce
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40b059
        __fprintf_chk(g56, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40af46
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40af56
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40aec0:
    // 0x40aec0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40aec0
    int64_t v63 = *(int64_t *)v62; // 0x40aec4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40aed1
        goto lab_0x40aed1;
    }
    goto lab_0x40ae66;
  lab_0x40ae8a:
    // 0x40ae8a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40ad60
    int32_t v65; // 0x40ad60
    int32_t v66; // 0x40ad60
    if (v27 != 0) {
        goto lab_0x40aec0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40b040
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40aec0;
            } else {
                goto lab_0x40aeb1;
            }
        } else {
            // 0x40aea5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40b19c
                int64_t v67 = (int64_t)mem; // 0x40b19c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40aec0;
                } else {
                    // 0x40b1af
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40aeb1;
                }
            } else {
                goto lab_0x40aeb1;
            }
        }
    }
  lab_0x40aeb1:
    // 0x40aeb1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40aec0;
}
// Address range: 0x40b380 - 0x40b946
int64_t function_40b380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40b3a1
    if (v3 < 1) {
        // 0x40b55e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40b39d
    int32_t v5 = *(int32_t *)a7; // 0x40b3a9
    uint64_t v6 = a1 & 0xffffffff; // 0x40b3ab
    int64_t v7 = v2; // 0x40b3b0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40b3b3
    *v8 = 0;
    int64_t v9; // 0x40b380
    int64_t v10; // 0x40b380
    int64_t v11; // 0x40b380
    int64_t v12; // 0x40b380
    int64_t str; // 0x40b380
    int64_t v13; // 0x40b380
    int64_t v14; // 0x40b380
    int64_t v15; // 0x40b380
    int64_t v16; // 0x40b380
    int64_t v17; // 0x40b380
    int32_t v18; // 0x40b380
    char v19; // 0x40b380
    if (v5 == 0) {
        // 0x40b598
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40b3ca;
    } else {
        // 0x40b3c3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40b410
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40b413
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40b4d8;
            } else {
                int64_t v22 = v7 + 1; // 0x40b426
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40b436
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40b4ec;
                } else {
                    goto lab_0x40b448;
                }
            }
        } else {
            goto lab_0x40b3ca;
        }
    }
  lab_0x40b3ca:
    // 0x40b3ca
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40b3d0
    *v24 = 0;
    int64_t v25; // 0x40b380
    int64_t v26; // 0x40b380
    int64_t v27; // 0x40b380
    switch (*(char *)&v2) {
        case 45: {
            // 0x40b4c0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b4cd;
        }
        case 43: {
            // 0x40b7d0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b4cd;
        }
        default: {
            // 0x40b3ec
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40b74f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40b868
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40b4cd;
                } else {
                    // 0x40b75d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40b3fa;
                }
            } else {
                goto lab_0x40b3fa;
            }
        }
    }
  lab_0x40b4d8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40b4df
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40b448;
    } else {
        goto lab_0x40b4ec;
    }
  lab_0x40b3fa:
    // 0x40b3fa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40b4cd;
  lab_0x40b4cd:
    // 0x40b4cd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40b4d8;
  lab_0x40b448:;
    uint32_t v30 = *(int32_t *)a7; // 0x40b448
    int64_t v31 = v30; // 0x40b448
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40b44a
    if ((int64_t)*v32 > v31) {
        // 0x40b44f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40b452
    if (*v33 > v30) {
        // 0x40b457
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40b45a
    int64_t v35 = v31; // 0x40b45e
    int64_t v36 = v15; // 0x40b45e
    int64_t v37; // 0x40b380
    int64_t v38; // 0x40b380
    int64_t v39; // 0x40b380
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40b5c8
        int64_t v41 = v40; // 0x40b5c8
        v2 = v41;
        int64_t v42; // 0x40b380
        if (*v33 == v40) {
            // 0x40b7b0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40b7b8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40b5d4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40b5d8
                function_40ac80(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40b5e8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40b5f1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40b5fa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40b611
            int64_t v47 = v45 & 0xffffffff; // 0x40b615
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40b61e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40b624
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40b626;
                }
            }
            int64_t v48 = v47 + 1; // 0x40b600
            int64_t v49 = v48 & 0xffffffff; // 0x40b600
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40b611
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40b61e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40b624
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40b626;
                    }
                }
                // 0x40b600
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40b7c8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40b626;
    } else {
        goto lab_0x40b464;
    }
  lab_0x40b4ec:
    // 0x40b4ec
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40b4ef
    int64_t v51 = v12; // 0x40b4ef
    int64_t v52 = v14; // 0x40b4ef
    if (*(char *)v10 == 0) {
        goto lab_0x40b448;
    } else {
        goto lab_0x40b4f5;
    }
  lab_0x40b464:;
    int32_t v53 = v35; // 0x40b464
    int64_t v54; // 0x40b380
    int64_t v55; // 0x40b380
    int64_t v56; // 0x40b380
    int64_t v57; // 0x40b380
    int64_t v58; // 0x40b380
    int64_t v59; // 0x40b380
    char * v60; // 0x40b380
    int64_t v61; // 0x40b380
    int64_t v62; // 0x40b479
    int64_t v63; // 0x40b380
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40b5b3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40b5b6;
    } else {
        // 0x40b46c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40b380
        int64_t v66 = v65 ? -1 : 1; // 0x40b480
        int64_t v67 = (int64_t)"--"; // 0x40b380
        int64_t v68 = v62; // 0x40b380
        int64_t v69 = 3; // 0x40b480
        unsigned char v70 = *(char *)v68; // 0x40b480
        char v71 = *(char *)v67; // 0x40b480
        char v72 = v71; // 0x40b480
        bool v73 = false; // 0x40b480
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
            // 0x40b570
            if (*(char *)v62 == 45) {
                // 0x40b630
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40b630
                if (c == 0) {
                    goto lab_0x40b57a;
                } else {
                    // 0x40b63d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40b6c0;
                    } else {
                        if (c == 45) {
                            // 0x40b8a3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40b715;
                        } else {
                            // 0x40b64e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40b6c0;
                            } else {
                                // 0x40b653
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40b674;
                                } else {
                                    // 0x40b65a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40b6c0;
                                    } else {
                                        goto lab_0x40b674;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40b57a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40b490
            v2 = v75;
            int32_t v76 = *v32; // 0x40b493
            int64_t v77 = v35 + 1; // 0x40b496
            int32_t v78 = v77; // 0x40b499
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40b800
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40b4a7
                    function_40ac80(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40b4b5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40b5b6;
        }
    }
  lab_0x40b4f5:;
    // 0x40b4f5
    int64_t v79; // bp-104, 0x40b380
    int64_t v80 = &v79; // 0x40b38a
    int64_t v81 = v50 + 1; // 0x40b4f5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40b4fc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40b501
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40b505
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40b509
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40b511
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40b516
    int32_t c2 = v84; // 0x40b516
    char * found_char_pos = strchr(str2, c2); // 0x40b516
    int64_t v87 = *v82; // 0x40b51b
    v2 = v87;
    int64_t v88 = *v85; // 0x40b525
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40b530
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40b820
            __fprintf_chk(g56, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40b7ed
        *(int32_t *)(v1 + 8) = c2;
        // 0x40b55e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40b516
    char v91 = *(char *)(v90 + 1); // 0x40b54b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40b505
        if (v91 != 58) {
            // 0x40b55e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40b774
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40b878
                *v8 = 0;
            } else {
                // 0x40b85c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40b79e
            *v83 = 0;
            // 0x40b55e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40b77e
        if (v93 != 0) {
            // 0x40b810
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40b79e
            *v83 = 0;
            // 0x40b55e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40b791
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40b79e
            *v83 = 0;
            // 0x40b55e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40b8da
            __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40b88a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40b891
        // 0x40b79e
        *v83 = 0;
        // 0x40b55e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40b6e9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40b6eb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40b910
                __fprintf_chk(g56, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40b8c1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40b8c8
            // 0x40b55e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40b6f6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40b6fa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40b715;
  lab_0x40b626:
    // 0x40b626
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40b464;
  lab_0x40b715:;
    int64_t v99 = function_40ad60(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40b733
    // 0x40b55e
    return v99 & 0xffffffff;
  lab_0x40b5b6:;
    int32_t v100 = v55; // 0x40b5b6
    if (v100 != (int32_t)v59) {
        // 0x40b5ba
        *(int32_t *)a7 = v100;
    }
    // 0x40b55e
    return 0xffffffff;
  lab_0x40b57a:
    // 0x40b57a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40b581
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40b55e
    return v99 & 0xffffffff;
  lab_0x40b6c0:
    // 0x40b6c0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40b4f5;
  lab_0x40b674:
    // 0x40b674
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40ad60(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g11); // 0x40b69a
    if ((int32_t)v101 != -1) {
        // 0x40b55e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40b6af
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40b6c0;
}
// Address range: 0x40b950 - 0x40b9a6
int64_t function_40b950(int64_t a1) {
    // 0x40b950
    *(int32_t *)&g131 = g51;
    *(int32_t *)&g132 = g50;
    int64_t v1; // 0x40b950
    int64_t result = function_40b380(v1, v1, v1, v1, v1, v1, &g131, a1 & 0xffffffff); // 0x40b976
    g51 = *(int32_t *)&g131;
    g138 = (char *)g134;
    *(int32_t *)&g49 = g133;
    return result;
}
// Address range: 0x40b9b0 - 0x40b9c8
int64_t function_40b9b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b9b0
    return function_40b950(1);
}
// Address range: 0x40b9d0 - 0x40b9e3
int64_t function_40b9d0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int64_t * a5, int64_t a6) {
    // 0x40b9d0
    return function_40b950(0);
}
// Address range: 0x40b9f0 - 0x40ba05
int64_t function_40b9f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b9f0
    return function_40b380(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40ba10 - 0x40ba26
int64_t function_40ba10(void) {
    // 0x40ba10
    return function_40b950(0);
}
// Address range: 0x40ba30 - 0x40ba48
int64_t function_40ba30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ba30
    return function_40b380(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40ba50 - 0x40baca
int64_t function_40ba50(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40ba5b
    int64_t v2 = (int64_t)&g2; // 0x40ba5b
    int64_t * pwc; // 0x40ba50
    int64_t v3; // 0x40ba50
    int64_t n; // 0x40ba50
    if (a2 == 0) {
        goto lab_0x40baa2;
    } else {
        // 0x40ba5d
        if (a3 == 0) {
            // 0x40ba88
            return -2;
        }
        // 0x40ba69
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40baa2;
        } else {
            goto lab_0x40ba74;
        }
    }
  lab_0x40baa2:
    // 0x40baa2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40ba50
    pwc = &v4;
    goto lab_0x40ba74;
  lab_0x40ba74:;
    char * wstr = (char *)v3; // 0x40ba7a
    int64_t ps; // 0x40ba50
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40ba7a
    int64_t result = v5; // 0x40ba7a
    if (v5 < 0xfffffffe) {
        // 0x40ba88
        return result;
    }
    int64_t result2 = result; // 0x40bab9
    if ((char)function_405590(0, v3) == 0) {
        // 0x40babb
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40ba88
    return result2;
}
// Address range: 0x40bad0 - 0x40bb15
int64_t function_40bad0(int64_t a1) {
    // 0x40bad0
    int32_t v1; // 0x40bad0
    if (*(char *)(a1 + 8) != 0) {
        // 0x40bb00
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x40bada
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x40bae8
    if (v1 == 0) {
        // 0x40baea
        tzset();
        result = 1;
    }
    // 0x40baf4
    return result;
}
// Address range: 0x40bb20 - 0x40bb49
int64_t function_40bb20(int64_t a1) {
    // 0x40bb20
    if (a1 == 0) {
        // 0x40bb40
        int64_t result; // 0x40bb20
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x40bb30
    int64_t v2 = *v1; // 0x40bb30
    free(v1);
    while (v2 != 0) {
        // 0x40bb30
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x40bb40
    return &g141;
}
// Address range: 0x40bb50 - 0x40bb91
int64_t function_40bb50(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40bb5d
    int64_t v2 = function_40bad0(a1); // 0x40bb6b
    int32_t v3 = *v1; // 0x40bb74
    if ((char)v2 == 0) {
        // 0x40bb76
        v3 = *v1;
    }
    // 0x40bb79
    function_40bb20(a1);
    *v1 = v3;
    return v2 & 0xffffffff;
}
// Address range: 0x40bba0 - 0x40bc2f
int64_t function_40bba0(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x40bba0
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x40bc0d
        int64_t result = (int64_t)mem; // 0x40bc0d
        result2 = result;
        if (mem != NULL) {
            // 0x40bc1a
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x40bbac
        uint64_t v1 = (int64_t)len + 1; // 0x40bbb6
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x40bbca
        int64_t v2 = (int64_t)mem2; // 0x40bbca
        result2 = v2;
        if (mem2 != NULL) {
            // 0x40bbd7
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x40bbe3
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x40bbfb
    return result2;
}
// Address range: 0x40bc30 - 0x40bda5
int64_t function_40bc30(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x40bc3e
    uint64_t v2 = *v1; // 0x40bc3e
    if (v2 == 0) {
        // 0x40bce1
        return 1;
    }
    int64_t v3; // 0x40bc30
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x40bc56
        v3 = v4;
        if (v2 < v4) {
            // 0x40bce1
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x40bc64
    if (*str2 == 0) {
        // 0x40bcd8
        *v1 = (int64_t)&g2;
        // 0x40bce1
        return 1;
    }
    int64_t str = a1 + 9; // 0x40bc69
    if (strcmp((char *)str, str2) == 0) {
        // 0x40bcd8
        *v1 = str;
        // 0x40bce1
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x40bc87
    int64_t v7; // 0x40bc30
    int64_t v8; // 0x40bc30
    int64_t v9; // 0x40bc30
    int64_t v10; // 0x40bc8c
    if (*str3 == 0) {
        // 0x40bc8c
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x40bd18
            goto lab_0x40bd18;
        }
        // 0x40bc99
        if (*(char *)(v5 + 8) == 0) {
            // 0x40bd48
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x40bd56;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x40bcab
    char * str5 = (char *)v11;
    int64_t v12; // 0x40bc30
    int64_t v13; // 0x40bcb5
    int64_t str4; // 0x40bcbe
    int32_t strcmp_rc; // 0x40bccb
    while (*str5 == 0) {
        // 0x40bcb5
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x40bc78
            break;
        }
        // 0x40bcbe
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x40bcd8
            *v1 = v12;
            // 0x40bce1
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40bc8c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40bd18
                goto lab_0x40bd18;
            }
            // 0x40bc99
            if (*(char *)(v5 + 8) == 0) {
                // 0x40bd48
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40bd56;
            }
        }
        // 0x40bca3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x40bcd8
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x40bc87
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40bc8c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40bd18
                goto lab_0x40bd18;
            }
            // 0x40bc99
            if (*(char *)(v5 + 8) == 0) {
                // 0x40bd48
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40bd56;
            }
        }
        // 0x40bca3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x40bcb5
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x40bc78
                break;
            }
            // 0x40bcbe
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x40bcd8
                *v1 = v12;
                // 0x40bce1
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x40bc8c
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x40bd18
                    goto lab_0x40bd18;
                }
                // 0x40bc99
                if (*(char *)(v5 + 8) == 0) {
                    // 0x40bd48
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x40bd56;
                }
            }
            // 0x40bca3
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x40bcd8
        *v1 = v11;
    }
    // 0x40bce1
    return 1;
  lab_0x40bd18:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x40bd20
    int64_t v15 = v6 - v10; // 0x40bd27
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x40bd35
        *__errno_location() = 12;
        // 0x40bce1
        return 0;
    }
    goto lab_0x40bd56;
  lab_0x40bd56:
    // 0x40bd56
    if (v7 + v8 < 119) {
        // 0x40bd5f
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x40bcd8
        *v1 = v6;
        // 0x40bce1
        return 1;
    }
    int64_t v17 = function_40bba0(v2, v2, v9); // 0x40bd83
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x40bce1
        return 0;
    }
    // 0x40bd91
    *(char *)(v17 + 8) = 0;
    // 0x40bcd8
    *v1 = v17 + 9;
    // 0x40bce1
    return 1;
}
// Address range: 0x40bdb0 - 0x40be5f
int64_t function_40bdb0(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x40bdbc
    int64_t v1 = (int64_t)env_val; // 0x40bdbc
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x40bdb0
    if (env_val == NULL) {
        // 0x40be20
        if (v2 == 0) {
            // 0x40bded
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x40bdf8
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x40bded
                return 1;
            }
        }
    }
    // 0x40bdd1
    int64_t v4; // 0x40bdb0
    int64_t result = function_40bba0(v1, v3, v4); // 0x40bdd4
    if (result == 0) {
        // 0x40bded
        return 0;
    }
    // 0x40bde1
    if ((char)function_40bad0(a1) != 0) {
        // 0x40bded
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x40be38
    if (result != 1) {
        // 0x40be49
        function_40bb20(result);
    }
    // 0x40be51
    return 0;
}
// Address range: 0x40be60 - 0x40be71
int64_t function_40be60(int64_t a1) {
    // 0x40be60
    if (a1 == 1) {
        // 0x40be70
        int64_t result; // 0x40be60
        return result;
    }
    // 0x40be66
    return function_40bb20(a1);
}
// Address range: 0x40be80 - 0x40bf25
int64_t function_40be80(int64_t a1, int64_t * timep, int64_t * time) {
    if (a1 == 0) {
        // 0x40bf10
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time);
    }
    int64_t v1 = function_40bdb0(a1); // 0x40be98
    if (v1 == 0) {
        // 0x40beca
        return 0;
    }
    // 0x40bea5
    if (localtime_r((int32_t *)timep, (struct tm *)time) != NULL) {
        int64_t result = (int64_t)time;
        if ((char)function_40bc30(a1, result) != 0) {
            // 0x40bec4
            if (v1 == 1 || (char)function_40bb50(v1) != 0) {
                // 0x40beca
                return result;
            }
            // 0x40beca
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x40bee6
        function_40bb50(v1);
    }
    // 0x40beca
    return 0;
}
// Address range: 0x40bf30 - 0x40c04c
int64_t function_40bf30(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40bf30
    int32_t v1; // 0x40bf30
    int32_t v2 = v1;
    if (a1 == 0) {
        // 0x40c028
        return function_40c050(a2);
    }
    int64_t v3 = function_40bdb0(a1); // 0x40bf47
    if (v3 == 0) {
        // 0x40bf9e
        return -1;
    }
    int64_t v4 = function_40cd00(a2); // 0x40bf5b
    int64_t timep = v4; // bp-96, 0x40bf60
    if (v4 == -1) {
        // 0x40bfb0
        int32_t time; // bp-88, 0x40bf30
        if (localtime_r((int32_t *)&timep, (struct tm *)&time) == NULL) {
            goto lab_0x40bf83;
        } else {
            int32_t v5 = *(int32_t *)(a2 + 32); // 0x40bfc4
            if (v2 >= 0 == v5 > -1 == (v5 == 0 != (v2 == 0))) {
                goto lab_0x40bf83;
            } else {
                int32_t v6 = *(int32_t *)(a2 + 16); // 0x40bfe3
                int32_t v7 = *(int32_t *)(a2 + 20); // 0x40bfe6
                int32_t v8 = *(int32_t *)(a2 + 12); // 0x40bff3
                int32_t v9 = *(int32_t *)(a2 + 8); // 0x40bffc
                int32_t v10 = *(int32_t *)(a2 + 4); // 0x40c005
                if ((v7 ^ v1 | v6 ^ v1 | v8 ^ v1 | v9 ^ v1 || v10 ^ v1 || time ^ (int32_t)(int64_t)&time) == 0) {
                    goto lab_0x40bf6b;
                } else {
                    goto lab_0x40bf83;
                }
            }
        }
    } else {
        goto lab_0x40bf6b;
    }
  lab_0x40bf6b:
    // 0x40bf6b
    if ((char)function_40bc30(a1, a2) == 0) {
        // 0x40bf7a
        timep = -1;
    }
    goto lab_0x40bf83;
  lab_0x40bf83:
    if (v3 != 1) {
        // 0x40bf89
        if ((char)function_40bb50(v3) == 0) {
            // 0x40bf9e
            return -1;
        }
    }
    // 0x40bf9e
    return timep;
}
// Address range: 0x40c050 - 0x40c066
int64_t function_40c050(int64_t a1) {
    // 0x40c050
    *(int32_t *)(a1 + 32) = 0;
    return function_40c8c0(a1, 0x401a40, &g135);
}
// Address range: 0x40c070 - 0x40c0cd
int64_t function_40c070(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40c077
    int64_t v2; // 0x40c070
    int64_t result = function_40aa20(a1, v2); // 0x40c088
    if ((v2 & 32) != 0) {
        // 0x40c0b0
        if ((int32_t)result == 0) {
            // 0x40c0b4
            *__errno_location() = 0;
        }
        // 0x40c0aa
        return 0xffffffff;
    }
    // 0x40c091
    if ((int32_t)result == 0) {
        // 0x40c0aa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40c098
    if (v1 == 0) {
        // 0x40c09a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40c0aa
    return result2;
}
// Address range: 0x40c0d0 - 0x40c632
int64_t function_40c0d0(void) {
    char * v1 = nl_langinfo(14); // 0x40c0e6
    char * v2 = g136; // 0x40c0eb
    char * v3; // 0x40c0d0
    int64_t v4; // 0x40c0d0
    int64_t v5; // 0x40c0d0
    int64_t v6; // 0x40c0d0
    int64_t v7; // 0x40c0d0
    int32_t size; // 0x40c0d0
    int32_t size2; // 0x40c0d0
    int32_t len; // 0x40c1a2
    int64_t v8; // 0x40c1a2
    char * env_val; // 0x40c18d
    if (v2 == NULL) {
        // 0x40c188
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40c1f5;
        } else {
            // 0x40c19a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40c1f5;
            } else {
                // 0x40c19f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40c18d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40c625
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40c1f5;
                    } else {
                        // 0x40c599
                        size2 = len + 14;
                        goto lab_0x40c1bb;
                    }
                } else {
                    goto lab_0x40c1bb;
                }
            }
        }
    } else {
        // 0x40c0d0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40c10a;
    }
  lab_0x40c43c:;
    // 0x40c43c
    struct _IO_FILE * stream; // 0x40c27b
    int32_t v10 = __uflow(stream); // 0x40c43f
    int64_t v11; // 0x40c0d0
    int64_t v12 = v11; // 0x40c449
    int64_t v13; // 0x40c0d0
    int64_t v14 = v13; // 0x40c449
    int32_t v15 = v10; // 0x40c449
    int64_t v16; // 0x40c0d0
    int64_t v17 = v16; // 0x40c449
    int64_t v18 = v11; // 0x40c449
    int64_t v19 = v13; // 0x40c449
    int64_t v20 = v16; // 0x40c449
    if (v10 == -1) {
        // break -> 0x40c44f
        goto lab_0x40c44f;
    }
    goto lab_0x40c2c9;
  lab_0x40c2be:;
    // 0x40c2be
    int64_t v90; // 0x40c0d0
    int64_t * v32; // 0x40c2b0
    *v32 = v90 + 1;
    int64_t v89; // 0x40c0d0
    v12 = v89;
    int64_t v91; // 0x40c0d0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40c0d0
    v17 = v92;
    goto lab_0x40c2c9;
  lab_0x40c2c9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40c0d0
    int32_t v25; // bp-120, 0x40c0d0
    int32_t v26; // bp-184, 0x40c0d0
    int64_t v27; // 0x40c27b
    int64_t v28; // 0x40c298
    int64_t v29; // 0x40c29d
    int64_t * v30; // 0x40c2b4
    switch (c) {
        case 32: {
            goto lab_0x40c2b0;
        }
        case 10: {
            goto lab_0x40c2b0;
        }
        case 9: {
            goto lab_0x40c2b0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40c4a1
            int32_t v33; // 0x40c0d0
            char v34; // 0x40c0d0
            int32_t v35; // 0x40c4ae
            if (v31 < *v30) {
                // 0x40c480
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40c4ab
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40c4a1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40c480
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40c4ab
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40c490
                v36 = v33;
            }
            // 0x40c57f
            if (v36 == -1) {
                // break -> 0x40c44f
                break;
            }
            goto lab_0x40c2b0;
        }
        default: {
            // 0x40c2df
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40c44f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40c308
            int64_t v39 = v37 + 4; // 0x40c30a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40c316
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40c318
            while (v41 == 0) {
                // 0x40c308
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40c336
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40c342
            int64_t v45 = v43 + 4; // 0x40c344
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40c350
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40c352
            while (v47 == 0) {
                // 0x40c342
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40c33f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40c368
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40c378
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40c37c
            int64_t v52 = v51 + v48; // 0x40c385
            int64_t * mem; // 0x40c0d0
            int64_t v53; // 0x40c0d0
            int64_t v54; // 0x40c0d0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40c4bb
                int64_t v56 = v55 + 3; // 0x40c4c7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40c3a1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40c3b0
            if (mem == NULL) {
                // 0x40c5dc
                free((int64_t *)v21);
                function_40aa20(v27, v53);
                v24 = (int64_t)&g2;
                goto lab_0x40c254;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40c3c8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40c3d2
            uint32_t v62 = (int32_t)v59; // 0x40c3d5
            int64_t v63; // 0x40c0d0
            if (v62 >= 8) {
                // 0x40c4e4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40c4fe
                int64_t v66 = v61 - v65; // 0x40c502
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40c50d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40c51e
                    int64_t v70 = v69 & 0xffffffff; // 0x40c51e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40c51b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40c5af
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40c3e7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40c3eb
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
            int64_t v73 = v51 + 1; // 0x40c3fb
            int64_t v74 = v60 - 1; // 0x40c3ff
            uint32_t v75 = (int32_t)v73; // 0x40c404
            int64_t v76; // 0x40c0d0
            if (v75 >= 8) {
                // 0x40c532
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40c53c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40c54c
                int64_t v80 = v74 - v79; // 0x40c550
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40c55b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40c56b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40c569
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40c5c6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40c5ce
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40c416
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40c41a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40c613
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40c42e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40c2be;
            } else {
                goto lab_0x40c43c;
            }
        }
    }
  lab_0x40c2b0:;
    int64_t v93 = v23; // 0x40c0d0
    int64_t v94 = v22; // 0x40c0d0
    int64_t v95 = v21; // 0x40c0d0
    goto lab_0x40c2b0_2;
  lab_0x40c1f5:;
    int64_t * mem3 = malloc(size); // 0x40c1f5
    int64_t v97 = (int64_t)&g2; // 0x40c200
    int64_t v98; // 0x40c0d0
    int64_t path; // 0x40c0d0
    if (mem3 == NULL) {
        goto lab_0x40c1d2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40c1f5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40c216;
    }
  lab_0x40c10a:;
    int64_t str = v1 == NULL ? (int64_t)&g2 : (int64_t)v1; // 0x40c0fd
    char v100 = *v3; // 0x40c10a
    int64_t v101; // 0x40c0d0
    if (v100 == 0) {
        // 0x40c164
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40c0d0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40c0d0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40c150
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40c157;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40c120
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40c12d
        char v107 = *(char *)v106; // 0x40c132
        v102 = v107;
        if (v107 == 0) {
            // 0x40c164
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40c13b
    v104 = v103 + 1;
  lab_0x40c157:
    // 0x40c164
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40c1d2:;
    char * v108 = (char *)v97;
    g136 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40c10a;
  lab_0x40c216:;
    int64_t v109 = v98 + path; // 0x40c216
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40c242
    v24 = (int64_t)&g2;
    if (fd >= 0) {
        // 0x40c271
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40c5a2
            close(fd);
            v24 = (int64_t)&g2;
        } else {
            // 0x40c295
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40c2b0_2:;
                uint64_t v96 = *v32; // 0x40c2b0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40c43c;
                } else {
                    goto lab_0x40c2be;
                }
            }
          lab_0x40c44f:
            // 0x40c44f
            function_40aa20(v27, v19);
            v24 = (int64_t)&g2;
            if (v18 != 0) {
                // 0x40c46e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40c254;
  lab_0x40c1bb:;
    int64_t * mem4 = malloc(size2); // 0x40c1bb
    v97 = (int64_t)&g2;
    if (mem4 != NULL) {
        // 0x40c261
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40c216;
    } else {
        goto lab_0x40c1d2;
    }
  lab_0x40c254:
    // 0x40c254
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40c1d2;
}
// Address range: 0x40c640 - 0x40c757
int64_t function_40c640(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x40c66e
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x40c68a
    int32_t v3 = v1; // 0x40c693
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x40c6a4
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x40c6b4
    int32_t v6 = v2 / 25; // 0x40c6c8
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x40c6d9
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x40c760 - 0x40c7f1
int64_t function_40c760(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x40c76e
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x40c773
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x40c779
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x40c77f
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x40c785
        int64_t v6 = function_40c640(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x40c789
        int64_t result = v6 + a6; // 0x40c792
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x40c797
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x40c7bd
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x40c7c1
        return result2;
    }
    // 0x40c7d0
    if (a6 > -0x7fffffffffffffff) {
        // 0x40c797
        return -0x8000000000000000;
    }
    // 0x40c7df
    return a6 + 1;
}
// Address range: 0x40c800 - 0x40c8bf
int64_t function_40c800(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x40c82d
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x40c86b
    if (v1 != 0 == (v1 != a3)) {
        // 0x40c82d
        return result;
    }
    int64_t v2 = v1; // 0x40c871
    while (v2 != 0) {
        // 0x40c878
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x40c82d
    return result;
}
// Address range: 0x40c8c0 - 0x40ccfa
int64_t function_40c8c0(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40c8db
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x40c8e3
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x40c8f4
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x40c8f7
    int32_t v5 = v4 / 12; // 0x40c915
    int32_t v6 = -12 * v5 + v4; // 0x40c91f
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x40c92a
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x40c931
    int64_t v9 = 0; // 0x40c937
    if (v8 % 4 == 0) {
        // 0x40c939
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x40cba0
            v9 = v8 < 0;
        }
    }
    // 0x40c975
    int64_t v10; // 0x40c8c0
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g15); // 0x40c9a7
    int32_t v14 = v11 - 59; // 0x40c9c0
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x40c9c3
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x40c9d7
    int64_t v17 = function_40c640(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x40ca00
    int64_t v18; // bp-280, 0x40c8c0
    int64_t v19 = &v18; // 0x40ca05
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x40ca53
    int64_t v22 = v19 + 80; // 0x40ca58
    int64_t * v23 = (int64_t *)v22;
    int64_t * v24 = (int64_t *)(v19 - 16);
    int32_t * v25 = (int32_t *)(v19 + 28);
    int32_t * v26 = (int32_t *)(v19 + 12);
    int32_t * v27 = (int32_t *)(v19 + 24);
    int64_t * v28 = (int64_t *)(v19 + 32);
    int64_t v29 = v19 + 128;
    int32_t * v30 = (int32_t *)v29;
    int64_t v31 = v19 + 40;
    int32_t * v32 = (int32_t *)v31;
    int32_t v33 = 6; // 0x40ca23
    int64_t v34 = v17; // 0x40ca23
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_40c800(*v20, v22, v21); // 0x40ca5d
    int64_t v38 = *v23; // 0x40ca62
    *v24 = v37;
    int64_t v39 = function_40c760(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g141); // 0x40ca84
    while (v38 != v39) {
        // 0x40ca94
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x40ca9e
            if (v40 < 0) {
                goto lab_0x40cac7_3;
            }
            int32_t v41 = *v32; // 0x40caab
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x40cac7_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x40cac7_3;
                }
            }
        }
        // 0x40ca28
        v33--;
        if (v33 == 0) {
            // 0x40cb87
            return -1;
        }
        // 0x40ca31
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_40c800(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_40c760(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g141);
    }
    int32_t v42 = *v32; // 0x40cbd0
    int32_t v43 = *v30; // 0x40cbd4
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x40cbdb
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x40cbf4
    int64_t v46 = v44; // 0x40cbf4
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x40cc10
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x40cc4b
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x40cc15
        int64_t v52 = 0x92c70; // 0x40cc15
        while (true) {
            int64_t v53 = -v52; // 0x40cc42
            int64_t v54 = v53 & 0xffffffff; // 0x40cc42
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x40cc45
            int64_t v56 = v55 + v51; // 0x40cc48
            *v49 = v56;
            int64_t v57 = v51; // 0x40cc50
            int32_t v58 = 2; // 0x40cc50
            int64_t v59 = v54; // 0x40cc50
            int32_t v60 = 2; // 0x40cc50
            int64_t v61 = v54; // 0x40cc50
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x40cc6e:
                // 0x40cc6e
                function_40c800(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x40cc85
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x40cc9a
                    break;
                }
                // 0x40ccf0
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x40cc37
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x40c8c0
            int64_t v66 = v59; // 0x40cc52
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x40cc52
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x40cc5b
                int64_t v69 = v68 + v64; // 0x40cc64
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x40cc6e;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x40cc20
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x40cad0;
            }
        }
        // 0x40cc9a
        *v24 = v50;
        int64_t v71 = function_40c760(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g141); // 0x40ccc6
        *v23 = v71;
        function_40c800(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x40cad0;
  lab_0x40cac7_3:
    // 0x40cac7
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x40cad0;
  lab_0x40cad0:;
    int64_t v72 = *(int64_t *)(v19 + 56); // 0x40cad8
    int32_t v73 = *(int32_t *)v21; // 0x40cae0
    int32_t v74 = *(int32_t *)(v19 + 64); // 0x40cae4
    int64_t v75 = *(int64_t *)(v19 + 48); // 0x40caeb
    *(int64_t *)v75 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v72;
    int64_t result = v45; // 0x40caf5
    if (v73 != v74) {
        int32_t v76 = *v25; // 0x40caf9
        int64_t v77 = (int64_t)(v73 == 60 == v74 < 1) - (int64_t)v76 + (int64_t)v74; // 0x40cb15
        int64_t v78 = v77 + v45; // 0x40cb18
        *v23 = v78;
        if (((v78 ^ v45) & (v78 ^ v77)) < 0) {
            // 0x40cb87
            return -1;
        }
        // 0x40cb22
        *(int64_t *)(v19 + 160) = v78;
        if (*v20 == 0) {
            // 0x40cb87
            return -1;
        }
        // 0x40cb43
        result = *v23;
    }
    int128_t v79 = __asm_movdqa(*(int128_t *)v21); // 0x40cb48
    int128_t v80 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x40cb4e
    int128_t v81 = __asm_movdqa(*(int128_t *)v29); // 0x40cb54
    __asm_movups(*(int128_t *)v46, v79);
    __asm_movups(*(int128_t *)(v46 + 16), v80);
    __asm_movups(*(int128_t *)(v46 + 32), v81);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x40cb87
    return result;
}
// Address range: 0x40cd00 - 0x40cd1c
int64_t function_40cd00(int64_t a1) {
    // 0x40cd00
    tzset();
    return function_40c8c0(a1, 0x401920, &g137);
}
// Address range: 0x40cd20 - 0x40cd7d
int64_t function_40cd20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40cd20
    return function_401860();
}
// Address range: 0x40cd80 - 0x40cd81
int64_t function_40cd80(void) {
    // 0x40cd80
    int64_t result; // 0x40cd80
    return result;
}
// Address range: 0x40cd90 - 0x40cda8
int64_t function_40cd90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40cd90
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g20);
}
// Address range: 0x40cda8 - 0x40cdc8
int64_t function_40cda8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g16; // 0x40cdb2
    while (*(int64_t *)v1 != -1) {
        // 0x40cdb3
        v1 -= 8;
    }
    // 0x40cdc4
    return result;
}
