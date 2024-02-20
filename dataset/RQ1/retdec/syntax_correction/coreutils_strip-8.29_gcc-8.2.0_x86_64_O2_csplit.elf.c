#include "decompile_retdec.h"
// Address range: 0x401ed0 - 0x401ed5
int64_t function_401ed0(void) {
    // 0x401ed0
    abort();
    // UNREACHABLE
}
// Address range: 0x401ed5 - 0x401eda
int64_t function_401ed5(void) {
    // 0x401ed5
    abort();
    // UNREACHABLE
}
// Address range: 0x401eda - 0x401edf
int64_t function_401eda(void) {
    // 0x401eda
    abort();
    // UNREACHABLE
}
// Address range: 0x401edf - 0x401ee4
int64_t function_401edf(void) {
    // 0x401edf
    abort();
    // UNREACHABLE
}
// Address range: 0x401ee4 - 0x401ee9
int64_t function_401ee4(void) {
    // 0x401ee4
    abort();
    // UNREACHABLE
}
// Address range: 0x401ee9 - 0x401eee
int64_t function_401ee9(void) {
    // 0x401ee9
    abort();
    // UNREACHABLE
}
// Address range: 0x401eee - 0x401ef3
int64_t function_401eee(void) {
    // 0x401eee
    abort();
    // UNREACHABLE
}
// Address range: 0x401ef3 - 0x401ef8
int64_t function_401ef3(void) {
    // 0x401ef3
    abort();
    // UNREACHABLE
}
// Address range: 0x401f00 - 0x402d70
int64_t function_401f00(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x401f14
    function_404260(a2);
    setlocale(LC_ALL, (char *)&g13);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v3; // 0x401f00
    function_416950(0x404060, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v3);
    g50 = 1;
    g52 = a2;
    g47 = 0;
    g46 = 0;
    g51 = 0;
    g48 = 0;
    g58 = "xx";
    int32_t v4 = v2;
    int64_t v5; // 0x401f00
    while (true) {
        // 0x401f90
        while (true) {
          lab_0x401f90_2:;
            int32_t v6 = function_408360(v4, a2, "f:b:kn:sqz", &g6, 0, v5);
            switch (v6) {
                case -1: {
                    goto lab_0x402104;
                }
                case 107: {
                    // 0x4020f8
                    g50 = 0;
                    goto lab_0x401f90_2;
                }
                default: {
                    if (v6 > 107) {
                        if (v6 == 115) {
                            // 0x4020e9
                            g51 = 1;
                            goto lab_0x401f90_2;
                        } else {
                            if (v6 > 115) {
                                if (v6 != 122) {
                                    if (v6 != 128) {
                                        // 0x402ac0
                                        function_403c80(1);
                                        // UNREACHABLE
                                    }
                                    // 0x40201b
                                    g48 = 1;
                                } else {
                                    // 0x401fcd
                                    g49 = 1;
                                }
                                goto lab_0x401f90_2;
                            } else {
                                if (v6 == 110) {
                                    // break -> 0x402039
                                    break;
                                }
                                if (v6 != 113) {
                                    // 0x402ac0
                                    function_403c80(1);
                                    // UNREACHABLE
                                }
                                // 0x4020e9
                                g51 = 1;
                                goto lab_0x401f90_2;
                            }
                        }
                    } else {
                        if (v6 == -130) {
                            // 0x402a90
                            function_403c80(0);
                            // UNREACHABLE
                        }
                        if (v6 <= 0xffffff7e) {
                            if (v6 == -131) {
                                // 0x4020a3
                                function_406370((int64_t)g37, "csplit", "GNU coreutils", (int64_t)g25, "Stuart Kemp", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            goto lab_0x402ac0;
                        }
                        if (v6 != 98) {
                            if (v6 != 102) {
                                // 0x402ac0
                                function_403c80(1);
                                // UNREACHABLE
                            }
                            // 0x402081
                            *(int64_t *)&g58 = (int64_t)g79;
                        } else {
                            // 0x401ffa
                            *(int64_t *)&g57 = (int64_t)g79;
                        }
                        goto lab_0x401f90_2;
                    }
                }
            }
        }
    }
  lab_0x402104:;
    int32_t v7 = *(int32_t *)0x61d33c; // 0x402104
    if (v4 - v7 < 2) {
        if (v7 < v4) {
            // 0x402ccc
            function_405e80(*(int64_t *)(a2 - 8 + (v1 >> 29)));
            error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
        } else {
            // 0x402aa1
            error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        }
      lab_0x402ac0:
        // 0x402ac0
        function_403c80(1);
        // UNREACHABLE
    }
    // 0x402119
    bool v8; // 0x401f00
    int64_t v9 = v8 ? -1 : 1;
    int64_t v10 = -1; // 0x402126
    int64_t v11 = (int64_t)g58;
    int64_t v12 = 0; // 0x402126
    int64_t v13 = v11; // 0x402126
    while (v10 != 0) {
        int64_t v14 = v11 + v9; // 0x402126
        int64_t v15 = v10 - 1; // 0x402126
        v10 = v15;
        v12 = v15;
        v13 = v14;
        if (*(char *)v11 == 0) {
            // break -> 
            break;
        }
        v11 = v14;
        v12 = 0;
        v13 = v11;
    }
    char * v16; // 0x401f00
    char v17; // 0x401f00
    char v18; // 0x402198
    int64_t v19; // 0x401f00
    int64_t v20; // 0x401f00
    int64_t v21; // 0x401f00
    int32_t v22; // 0x401f00
    int64_t v23; // 0x401f00
    int64_t v24; // 0x401f00
    int64_t v25; // 0x401f00
    char v26; // 0x401f00
    char v27; // 0x401f00
    int64_t v28; // 0x401f00
    int64_t v29; // 0x401f00
    int64_t v30; // 0x401f00
    int64_t v31; // 0x401f00
    int64_t v32; // 0x401f00
    int64_t v33; // 0x401f00
    int64_t v34; // 0x401f00
    int64_t v35; // 0x401f00
    int64_t v36; // 0x401f00
    int64_t v37; // 0x401f00
    int64_t v38; // 0x401f00
    int64_t v39; // 0x401f00
    int64_t v40; // 0x401f00
    int64_t v41; // 0x401f00
    int64_t v42; // 0x401f00
    int64_t v43; // 0x401f00
    int64_t v44; // 0x401f00
    if (g57 == NULL) {
        // 0x4022b4
        v42 = 10;
        v20 = v5;
        if (g24 >= 10) {
            int64_t v45 = g24; // 0x4022ca
            v42 = v45;
            v20 = v5;
            if (v12 < v45) {
                // 0x4022d9
                function_403510(v13);
                // UNREACHABLE
            }
        }
    } else {
        char v46 = *g57; // 0x402148
        char * format; // 0x402a7a
        if (v46 == 0) {
            // 0x402a6e
            format = dcgettext(NULL, "missing %% conversion specification in suffix", 5);
            error(1, (int32_t)"missing %% conversion specification in suffix" ^ (int32_t)"missing %% conversion specification in suffix", format);
            // 0x402a90
            function_403c80(0);
            // UNREACHABLE
        }
        // 0x40216d
        v27 = v46;
        v37 = (int64_t)g57;
        v30 = 0;
        while (true) {
          lab_0x40216d:;
            int64_t v47 = v30;
            int64_t v48 = v24;
            int64_t v49 = v37;
            int64_t v50 = v49 + 1; // 0x40216d
            char v51 = *(char *)v50; // 0x402171
            v21 = v50;
            v26 = v51;
            v23 = v48;
            v28 = v47;
            if (v27 != 37) {
                goto lab_0x402162;
            } else {
                if (v51 != 37) {
                    // 0x40218a
                    v17 = v51;
                    v38 = v50;
                    v31 = 0;
                    if ((char)v47 != 0) {
                        // 0x402c9b
                        error(1, (int32_t)"too many %% conversion specifications in suffix" ^ (int32_t)"too many %% conversion specifications in suffix", dcgettext(NULL, "too many %% conversion specifications in suffix", 5));
                        v25 = v48;
                        v19 = a2;
                        goto lab_0x402cbd;
                    }
                    while (true) {
                      lab_0x402198:
                        // 0x402198
                        v32 = v31;
                        v39 = v38;
                        v18 = v17;
                        v41 = v39;
                        v35 = v32;
                        if (v18 == 39) {
                            goto lab_0x40224e;
                        } else {
                            if (v18 > 39) {
                                // 0x4021b5
                                v40 = v39;
                                v33 = v32;
                                switch (v18) {
                                    case 45: {
                                        goto lab_0x4021af;
                                    }
                                    case 48: {
                                        goto lab_0x4021af;
                                    }
                                    default: {
                                        goto lab_0x4021bd;
                                    }
                                }
                            } else {
                                if (v18 != 35) {
                                    goto lab_0x4021bd;
                                } else {
                                    // 0x4021ac
                                    v40 = v39;
                                    v33 = v32 & 0xfffffffd | 2;
                                    goto lab_0x4021af;
                                }
                            }
                        }
                    }
                  lab_0x402262_2:
                    // 0x402262
                    *v16 = 117;
                    v22 = -2;
                    v44 = v43;
                    v36 = v34;
                    goto lab_0x40226a;
                } else {
                    int64_t v52 = v49 + 2; // 0x402180
                    v21 = v52;
                    v26 = *(char *)v52;
                    v23 = v48;
                    v28 = v47;
                    goto lab_0x402162;
                }
            }
        }
      lab_0x4022e5:
        if ((char)v29 == 0) {
            // 0x402a6e
            format = dcgettext(NULL, "missing %% conversion specification in suffix", 5);
            error(1, (int32_t)"missing %% conversion specification in suffix" ^ (int32_t)"missing %% conversion specification in suffix", format);
            // 0x402a90
            function_403c80(0);
            // UNREACHABLE
        }
        int32_t v53 = __snprintf_chk(NULL, 0, 1, -1, g57); // 0x402301
        v42 = v53;
        v20 = 0xffffffff;
        if (v53 < 0) {
            // 0x4022d9
            function_403510(0);
            // UNREACHABLE
        }
    }
    int64_t v54 = function_4064b0(v42 + -1 - v12); // 0x402312
    int32_t v55 = g34; // 0x402317
    g59 = (char *)v54;
    int64_t str = *(int64_t *)(8 * (int64_t)v55 + a2); // 0x40232c
    g34 = &g35;
    int32_t v56 = v55 + 1; // 0x402343
    if (strcmp((char *)str, "-") != 0) {
        int64_t v57 = function_404100(0, str, 0, 0); // 0x4029c9
        v56 = g34;
        if ((int32_t)v57 < 0) {
            // 0x4029dc
            function_405c30(4, str);
            error(1, *__errno_location(), dcgettext(NULL, "cannot open %s for reading", 5));
          lab_0x402a19:
            // 0x402a19
            function_403a40();
            function_403000();
            // 0x40276d
            exit(0);
            // UNREACHABLE
        }
    }
    // 0x402349
    int64_t * v58; // 0x401f00
    int64_t v59; // 0x401f00
    int64_t v60; // 0x401f00
    int64_t v61; // 0x401f00
    int64_t v62; // 0x401f00
    int64_t v63; // 0x401f00
    int64_t v64; // 0x401f00
    int64_t v65; // 0x401f00
    int64_t v66; // 0x401f00
    int64_t v67; // 0x401f00
    int64_t oact; // bp-216, 0x401f00
    int64_t v68; // bp-224, 0x401f00
    int32_t v69; // 0x401f00
    int32_t v70; // 0x401f00
    int32_t v71; // 0x401f00
    int32_t v72; // 0x401f00
    int32_t v73; // 0x401f00
    int32_t v74; // 0x401f00
    int32_t v75; // 0x401f00
    int64_t v76; // 0x401f00
    int64_t * v77; // 0x401f00
    if (v56 < v4) {
        int64_t v78 = v56;
        v74 = v56;
        v64 = v78;
        v62 = *(int64_t *)((0x100000000 * v78 >> 29) + a2);
        int64_t * v79; // 0x401f00
        int64_t v80; // 0x401f00
        int32_t v81; // 0x401f00
        int32_t v82; // 0x401f00
        while (true) {
          lab_0x402391:;
            int64_t v83 = v62;
            int64_t v84 = v64;
            v75 = v74;
            char c = *(char *)v83; // 0x402391
            if (c == 47 || c == 37) {
                int64_t str2 = v83 + 1; // 0x4024d0
                v82 = str2;
                char * found_char_pos = strrchr((char *)str2, (int32_t)c); // 0x4024e3
                if (found_char_pos == NULL) {
                    // break -> 0x402bbc
                    break;
                }
                int64_t v85 = (int64_t)found_char_pos; // 0x4024e3
                int64_t v86 = function_403540(); // 0x4024f4
                *(char *)(v86 + 29) = (char)(c == 37);
                *(int32_t *)(v86 + 24) = (int32_t)v84;
                *(char *)(v86 + 30) = 1;
                int64_t v87 = v86 + 32; // 0x40250c
                *(int64_t *)v87 = 0;
                *(int64_t *)(v86 + 40) = 0;
                int64_t v88 = function_4064b0(256); // 0x40251c
                *(int64_t *)(v86 + 72) = 0;
                *(int64_t *)(v86 + 64) = v88;
                g80 = 710;
                if (function_415890(0x100000000 * str2 >> 32, v85 + -1 - v83, v87) != 0) {
                  lab_0x402b87:
                    // 0x402b87
                    function_405e80(v83);
                    error(0, (int32_t)"%s: invalid regular expression: %s" ^ (int32_t)"%s: invalid regular expression: %s", dcgettext(NULL, "%s: invalid regular expression: %s", 5));
                    function_402fb0(0);
                    // UNREACHABLE
                }
                int64_t v89 = v85 + 1; // 0x40255c
                v71 = v82;
                v66 = v84;
                v60 = v86;
                if (*(char *)v89 == 0) {
                    goto lab_0x402416;
                } else {
                    int64_t v90 = function_406820(v89, 0, 10, v86, (int64_t *)&g13); // 0x40257a
                    v71 = v82;
                    v66 = v84;
                    v60 = v86;
                    if ((int32_t)v90 == 0) {
                        goto lab_0x402416;
                    } else {
                        int64_t v91 = function_405e80(v83); // 0x40258a
                        error(1, (int32_t)"%s: integer expected after delimiter" ^ (int32_t)"%s: integer expected after delimiter", dcgettext(NULL, "%s: integer expected after delimiter", 5));
                        v58 = (int64_t *)found_char_pos;
                        v72 = v82;
                        v67 = v91;
                        v61 = v86;
                        goto lab_0x4025b7;
                    }
                }
            } else {
                int64_t v92 = function_403540(); // 0x4023b9
                v77 = (int64_t *)(8 * (int64_t)v75 + a2);
                *(int32_t *)(v92 + 24) = (int32_t)v84;
                int64_t v93 = function_406f70(*v77, 0, 10, &v68, (int64_t *)&g13, v20); // 0x4023da
                if ((int32_t)v93 != 0) {
                    goto lab_0x402b56;
                }
                // 0x4023e7
                if (v68 == 0) {
                    // 0x402b2d
                    error(1, (int32_t)"%s: line number must be greater than zero" ^ (int32_t)"%s: line number must be greater than zero", dcgettext(NULL, "%s: line number must be greater than zero", 5));
                    goto lab_0x402b56;
                }
                // 0x4023f5
                v81 = v69;
                v79 = v77;
                v80 = g44;
                if (v68 < g44) {
                    goto lab_0x402be4;
                }
                // 0x402405
                v70 = v69;
                v63 = v68;
                v65 = v84;
                v59 = v92;
                v58 = v77;
                v72 = v69;
                v67 = v84;
                v61 = v92;
                if (v68 == g44) {
                    goto lab_0x4025b7;
                } else {
                    goto lab_0x40240b;
                }
            }
        }
        // 0x402bbc
        error(1, (int32_t)"%s: closing delimiter '%c' missing" ^ (int32_t)"%s: closing delimiter '%c' missing", dcgettext(NULL, "%s: closing delimiter '%c' missing", 5));
        v81 = v82;
        v79 = NULL;
        v80 = 1;
      lab_0x402be4:
        // 0x402be4
        function_404210(v80, &oact);
        function_405e80(*v79);
        error(1, (int32_t)"line number %s is smaller than preceding line number, %s" ^ (int32_t)"line number %s is smaller than preceding line number, %s", dcgettext(NULL, "line number %s is smaller than preceding line number, %s", 5));
        v73 = v81;
      lab_0x402c25:
        // 0x402c25
        v76 = 8 * (int64_t)v73 + g52;
        goto lab_0x402afe;
    } else {
        goto lab_0x402423_2;
    }
  lab_0x40226a:
    // 0x40226a
    if ((v22 & (int32_t)v36) != 0) {
        // 0x402c3a
        error(1, (int32_t)"invalid flags in conversion specification: %%%c%c" ^ (int32_t)"invalid flags in conversion specification: %%%c%c", dcgettext(NULL, "invalid flags in conversion specification: %%%c%c", 5));
        goto lab_0x402c6f;
    }
    int64_t v94 = v44 + 1; // 0x402274
    v21 = v94;
    v26 = *(char *)v94;
    int64_t v95; // 0x4021e9
    v23 = v95;
    v28 = 1;
    goto lab_0x402162;
  lab_0x40224e:
    // 0x40224e
    v40 = v41;
    v33 = v35 & 0xfffffffe | 1;
    goto lab_0x4021af;
  lab_0x4021af:;
    int64_t v97 = v40 + 1; // 0x4021af
    v17 = *(char *)v97;
    v38 = v97;
    v31 = v33;
    goto lab_0x402198;
  lab_0x4021bd:;
    int64_t v98 = v39; // 0x4021c6
    char v99 = v18; // 0x4021c6
    int64_t v100 = v39; // 0x4021c6
    if (v18 == 57 || (int32_t)v18 < 57) {
        int64_t v101 = v98 + 1; // 0x4021d0
        char v102 = *(char *)v101; // 0x4021d4
        v98 = v101;
        v99 = v102;
        v100 = v101;
        while (v102 == 57 || (int32_t)v102 < 57) {
            // 0x4021d0
            v101 = v98 + 1;
            v102 = *(char *)v101;
            v98 = v101;
            v99 = v102;
            v100 = v101;
        }
    }
    int64_t v103 = v100;
    char v104 = v99;
    int64_t v105 = v103; // 0x4021e3
    int64_t v106 = v32; // 0x4021e3
    char * v107; // 0x401f00
    char v108; // 0x401f00
    int64_t v109; // 0x401f00
    int64_t v110; // 0x401f00
    if (v104 == 46) {
        goto lab_0x4029ab;
    } else {
        // 0x4021e1
        v107 = (char *)v103;
        v108 = v104;
        v110 = v103;
        v109 = v32;
        goto lab_0x4021e9;
    }
  lab_0x4029ab:;
    int64_t v111 = v105 + 1; // 0x4029ab
    char * v112 = (char *)v111;
    char v113 = *v112; // 0x4029af
    v107 = v112;
    v108 = v113;
    v110 = v111;
    v109 = v106;
    int64_t v114 = v111; // 0x4029b8
    while (v113 == 57 || (int32_t)v113 < 57) {
        // 0x4029ab
        v111 = v114 + 1;
        v112 = (char *)v111;
        v113 = *v112;
        v107 = v112;
        v108 = v113;
        v110 = v111;
        v109 = v106;
        v114 = v111;
    }
    goto lab_0x4021e9;
  lab_0x4021e9:
    // 0x4021e9
    v34 = v109;
    v43 = v110;
    char v115 = v108; // 0x4021e9
    v16 = v107;
    v95 = v115;
    if (v115 == 105) {
        // break -> 0x402262
        goto lab_0x402262_2;
    }
    if (v115 > 105) {
        // 0x4021f8
        v22 = -3;
        v44 = v43;
        v36 = v34;
        switch (v115) {
            case 117: {
                // 0x4022de
                v22 = -2;
                v44 = v43;
                v36 = v34;
                goto lab_0x40226a;
            }
            case 120: {
                goto lab_0x40226a;
            }
            case 111: {
                goto lab_0x40226a;
            }
            default: {
                goto lab_0x402216;
            }
        }
    } else {
        // 0x402256
        v22 = -3;
        v44 = v43;
        v36 = v34;
        if (v115 == 88) {
            goto lab_0x40226a;
        }
        if (v115 == 100) {
            // break -> 0x402262
            goto lab_0x402262_2;
        }
        if (v115 == 0) {
            // 0x40228b
            error(1, (int32_t)"missing conversion specifier in suffix" ^ (int32_t)"missing conversion specifier in suffix", dcgettext(NULL, "missing conversion specifier in suffix", 5));
            v22 = -3;
            v44 = (int32_t)"missing conversion specifier in suffix" ^ (int32_t)"missing conversion specifier in suffix";
            v36 = 1;
            goto lab_0x40226a;
        }
        goto lab_0x402216;
    }
  lab_0x402216:
    // 0x402216
    if ((*(char *)((2 * v95 | 1) + (int64_t)*__ctype_b_loc()) & 64) == 0) {
        // 0x40298b
        error(1, (int32_t)"invalid conversion specifier in suffix: \\%.3o" ^ (int32_t)"invalid conversion specifier in suffix: \\%.3o", dcgettext(NULL, "invalid conversion specifier in suffix: \\%.3o", 5));
        v105 = (int32_t)"invalid conversion specifier in suffix: \\%.3o" ^ (int32_t)"invalid conversion specifier in suffix: \\%.3o";
        v106 = 1;
        goto lab_0x4029ab;
    } else {
        char * format2 = dcgettext(NULL, "invalid conversion specifier in suffix: %c", 5); // 0x402235
        error(1, (int32_t)"invalid conversion specifier in suffix: %c" ^ (int32_t)"invalid conversion specifier in suffix: %c", format2);
        v41 = (int64_t)format2;
        v35 = 1;
        goto lab_0x40224e;
    }
  lab_0x402b56:
    // 0x402b56
    function_405e80(*v77);
    error(1, (int32_t)"%s: invalid pattern" ^ (int32_t)"%s: invalid pattern", dcgettext(NULL, "%s: invalid pattern", 5));
    goto lab_0x402b87;
  lab_0x402423_2:
    // 0x402423
    sigemptyset((struct _TYPEDEF_sigset_t *)&g45);
    int64_t v116 = (int64_t)&g4; // 0x402438
    int32_t sig_num = *(int32_t *)v116; // 0x40243b
    sigaction(sig_num, NULL, (struct sigaction *)&oact);
    if (oact != 1) {
        // 0x402456
        sigaddset((struct _TYPEDEF_sigset_t *)&g45, sig_num);
    }
    int64_t v117 = v116 + 4; // 0x402463
    v116 = v117;
    while (v117 != (int64_t)&g5) {
        // 0x40243b
        sig_num = *(int32_t *)v116;
        sigaction(sig_num, NULL, (struct sigaction *)&oact);
        if (oact != 1) {
            // 0x402456
            sigaddset((struct _TYPEDEF_sigset_t *)&g45, sig_num);
        }
        // 0x402463
        v117 = v116 + 4;
        v116 = v117;
    }
    // 0x40246c
    oact = 0x403260;
    int64_t v118; // bp-208, 0x401f00
    __asm_rep_movsd_memcpy((char *)&v118, (char *)&g45, 32);
    int64_t v119 = (int64_t)&g4; // 0x402491
    int32_t sig_num2 = *(int32_t *)v119; // 0x4024a5
    if (sigismember((struct _TYPEDEF_sigset_t *)&g45, sig_num2) != 0) {
        // 0x4024b7
        sigaction(sig_num2, (struct sigaction *)&oact, NULL);
    }
    int64_t v120 = v119 + 4; // 0x402498
    v119 = v120;
    while (v120 != (int64_t)&g5) {
        // 0x4024a5
        sig_num2 = *(int32_t *)v119;
        if (sigismember((struct _TYPEDEF_sigset_t *)&g45, sig_num2) != 0) {
            // 0x4024b7
            sigaction(sig_num2, (struct sigaction *)&oact, NULL);
        }
        // 0x402498
        v120 = v119 + 4;
        v119 = v120;
    }
    // 0x40267d
    int64_t v121; // 0x401f00
    int64_t v122; // 0x401f00
    int64_t v123; // 0x401f00
    int64_t v124; // 0x4026ab
    char * v125; // 0x401f00
    unsigned char v126; // 0x4026be
    int64_t v127; // 0x4027ca
    if ((int64_t)g46 == 0) {
      lab_0x402a3c:
        // 0x402a3c
        function_403190();
        function_403a40();
        function_403000();
        if (close(0) == 0) {
            // 0x402a5a
            return 0;
        }
        goto lab_0x402c6f;
      lab_0x402416:;
        int64_t v128 = v66;
        int64_t v129 = v128 + 1 & 0xffffffff; // 0x402416
        if (v2 <= v129) {
            goto lab_0x402423_2;
        }
        int64_t v130 = v60;
        int64_t v131 = 8 * (int64_t)v75 + 8 + a2;
        int64_t v132 = *(int64_t *)v131; // 0x402371
        int64_t v133 = v129; // 0x402381
        int64_t v134 = v132; // 0x402381
        int64_t v135 = v132; // 0x402381
        int64_t v136; // 0x402610
        char * v137; // 0x402605
        if (*(char *)v132 == 123) {
            int64_t v138 = -1; // 0x4025f8
            int64_t v139 = 0; // 0x4025f8
            while (v138 != 0) {
                int64_t v140 = v135;
                v138--;
                v135 = v140 + v9;
                v139 = v138;
                if (*(char *)v140 == 0) {
                    // break -> 
                    break;
                }
                v139 = 0;
            }
            int64_t v141 = v132 - 2 + -1 - v139; // 0x402600
            v137 = (char *)v141;
            if (*v137 != 125) {
              lab_0x402d3d:
                // 0x402d3d
                function_405e80(v132);
                error(1, (int32_t)"%s: '}' is required in repeat count" ^ (int32_t)"%s: '}' is required in repeat count", dcgettext(NULL, "%s: '}' is required in repeat count", 5));
                return &g84;
            }
            // 0x402610
            v136 = v132 + 1;
            *v137 = 0;
            if (v136 == v141 - 1) {
                // 0x402666
                if (*(char *)v136 != 42) {
                    goto lab_0x402622;
                } else {
                    // 0x40266d
                    *(char *)(v130 + 28) = 1;
                    goto lab_0x40264a;
                }
            } else {
                goto lab_0x402622;
            }
        } else {
            goto lab_0x402389;
        }
      lab_0x4025b7:
        // 0x4025b7
        function_405e80(*v58);
        error(0, (int32_t)"warning: line number %s is the same as preceding line number" ^ (int32_t)"warning: line number %s is the same as preceding line number", dcgettext(NULL, "warning: line number %s is the same as preceding line number", 5));
        v70 = v72;
        v63 = v68;
        v65 = v67;
        v59 = v61;
        goto lab_0x40240b;
      lab_0x40240b:
        // 0x40240b
        g44 = v63;
        *(int64_t *)(v59 + 8) = v63;
        v71 = v70;
        v66 = v65;
        v60 = v59;
        goto lab_0x402416;
      lab_0x402389:
        // 0x402389
        v74 = v133;
        v69 = v71;
        v64 = v133;
        v62 = v134;
        goto lab_0x402391;
      lab_0x402622:;
        int64_t v142 = function_406f70(v136, 0, 10, &oact, (int64_t *)&g13, v20); // 0x402634
        if ((int32_t)v142 != 0) {
            // 0x402d05
            int64_t v143; // 0x402371
            function_405e80(*(int64_t *)(g52 + v143));
            error(1, (int32_t)"%s}: integer required between '{' and '}'" ^ (int32_t)"%s}: integer required between '{' and '}'", dcgettext(NULL, "%s}: integer required between '{' and '}'", 5));
            goto lab_0x402d3d;
        }
        // 0x402641
        *(int64_t *)(v130 + 16) = oact;
        goto lab_0x40264a;
      lab_0x40264a:
        // 0x40264a
        *v137 = 125;
        int64_t v144 = v128 + 2 & 0xffffffff; // 0x40264f
        if (v2 <= v144) {
            goto lab_0x402423_2;
        }
        // 0x40265c
        v133 = v144;
        v134 = *(int64_t *)(v131 + 8);
        goto lab_0x402389;
      lab_0x402790:
        // 0x402790
        if (function_403b30((int64_t)g61 + 1) == 0) {
            // 0x4028be
            if (g48 == 0) {
                // break (via goto) -> 0x4028b2
                goto lab_0x4028b2_3;
            }
        }
        // 0x4027a9
        v121 = g47;
        v123 = v127;
        goto lab_0x4027b3;
      lab_0x40275a_3:
        // 0x40275a
        v25 = v124;
        v19 = v126;
        int64_t v96 = v122; // 0x40275e
        if (*v125 == 0) {
            goto lab_0x402cbd;
        } else {
            if (v126 == 0) {
                goto lab_0x402a19;
            } else {
                goto lab_0x40276d;
            }
        }
      lab_0x402162:
        // 0x402162
        v29 = v28;
        v27 = v26;
        v37 = v21;
        v24 = v23;
        v30 = v29;
        if (v26 == 0) {
            // break -> 0x4022e5
            goto lab_0x4022e5;
        }
        goto lab_0x40216d;
      lab_0x402afe:
        // 0x402afe
        function_405e80(*(int64_t *)v76);
        error(0, (int32_t)"%s: line number out of range" ^ (int32_t)"%s: line number out of range", dcgettext(NULL, "%s: line number out of range", 5));
        function_402fb0(0);
        // UNREACHABLE
      lab_0x402c6f:
        // 0x402c6f
        error(0, *__errno_location(), dcgettext(NULL, "read error", 5));
        function_402fb0(0);
        // UNREACHABLE
      lab_0x402cbd:
        // 0x402cbd
        function_403a70(v25, v96, v19 % 256);
        // UNREACHABLE
    }
    int64_t v157 = g47;
    int64_t v158 = 0; // 0x4028cd
    uint64_t v145; // 0x401f00
    int64_t * v150; // 0x401f00
    while (true) {
        int64_t v148 = 96 * v158;
        int64_t v159 = v157; // 0x4026a5
        int64_t v160 = 0; // 0x4026a5
        v121 = v157;
        v123 = 0;
        int64_t v149; // 0x401f00
        if (*(char *)((v148 || 30) + v157) == 0) {
            while (true) {
              lab_0x4027b3:
                // 0x4027b3
                v145 = v123;
                int64_t v146 = v121;
                int64_t v147 = v146 + v148; // 0x4027b3
                if (*(char *)(v147 + 28) == 0) {
                    // 0x4027bc
                    v149 = v146;
                    if (v145 > *(int64_t *)(v147 + 16)) {
                        // break -> 0x4028cd
                        break;
                    }
                }
                // 0x4027c6
                v150 = (int64_t *)(v147 + 8);
                function_403190();
                int64_t v151 = (int64_t)g61 + 1; // 0x4027de
                if (function_403b30(v151) == 0 && g48 != 0) {
                    // break (via goto) -> 0x4028b2
                    goto lab_0x4028b2_3;
                }
                // 0x4027f0
                v127 = v145 + 1;
                uint64_t v152 = *v150 * v127; // 0x4027da
                int64_t v153 = function_403c10(v151); // 0x4027f0
                int64_t v154 = v153; // 0x4027fc
                if (v152 > v153) {
                    int64_t v155 = function_403960(); // 0x40280b
                    if (v155 == 0) {
                        // break (via goto) -> 0x4028b2
                        goto lab_0x4028b2_3;
                    }
                    int64_t v156 = v154 + 1;
                    function_403480(v155, v155 + 8);
                    v154 = v156;
                    while (v152 != v156) {
                        // 0x40280b
                        v155 = function_403960();
                        if (v155 == 0) {
                            // break (via goto) -> 0x4028b2
                            goto lab_0x4028b2_3;
                        }
                        // 0x402819
                        v156 = v154 + 1;
                        function_403480(v155, v155 + 8);
                        v154 = v156;
                    }
                    // 0x40282e
                    function_403000();
                    if (g48 == 0) {
                        goto lab_0x402790;
                    } else {
                        // 0x402840
                        function_403960();
                        goto lab_0x402790;
                    }
                } else {
                    // 0x4027fe
                    function_403000();
                    if (g48 != 0) {
                        // 0x402840
                        function_403960();
                        goto lab_0x402790;
                    } else {
                        goto lab_0x402790;
                    }
                }
            }
        } else {
            while (true) {
                // 0x4026ab
                v122 = v160;
                int64_t v161 = v159;
                v124 = v161 + v148;
                v125 = (char *)(v124 + 28);
                if (*v125 == 0) {
                    // 0x4026b4
                    v149 = v161;
                    if (v122 > *(int64_t *)(v124 + 16)) {
                        // break -> 0x4028cd
                        break;
                    }
                }
                // 0x4026be
                v126 = *(char *)(v124 + 29);
                if (v126 == 0) {
                    // 0x402966
                    function_403190();
                }
                // 0x4026cc
                if (g48 != 0) {
                    // 0x4026d5
                    if (g61 != 0) {
                        // 0x402a28
                        function_403960();
                    }
                }
                int64_t * v162 = (int64_t *)v124; // 0x4026e3
                int64_t v163 = v124 + 32; // 0x4026e8
                char * format3; // 0x402ad6
                if (*v162 >= 0) {
                    int64_t v164 = (int64_t)g61 + 1; // 0x402745
                    g61 = v164;
                    int64_t v165 = function_403b30(v164); // 0x402750
                    if (v165 == 0) {
                        goto lab_0x40275a_3;
                    }
                    int64_t v166 = *(int64_t *)v165; // 0x4026f8
                    int64_t v167 = *(int64_t *)(v165 + 8); // 0x4026fb
                    int64_t v168 = v166 + (int64_t)(*(char *)(v166 - 1 + v167) == 10); // 0x40270b
                    int64_t v169 = function_416210(v163, v167, v168, 0, v168, 0); // 0x402717
                    if (v169 == -2) {
                        // 0x402aca
                        format3 = dcgettext(NULL, "error in regular expression search", 5);
                        error(0, (int32_t)"error in regular expression search" ^ (int32_t)"error in regular expression search", format3);
                        function_402fb0(0);
                        // UNREACHABLE
                    }
                    while (v169 == -1) {
                        int64_t v170 = function_403960(); // 0x402730
                        if (v126 == 0) {
                            // 0x402970
                            function_403480(v170, v170 + 8);
                        }
                        int64_t v171 = (int64_t)g61 + 1; // 0x402745
                        g61 = v171;
                        int64_t v172 = function_403b30(v171); // 0x402750
                        if (v172 == 0) {
                            goto lab_0x40275a_3;
                        }
                        v166 = *(int64_t *)v172;
                        v167 = *(int64_t *)(v172 + 8);
                        v168 = v166 + (int64_t)(*(char *)(v166 - 1 + v167) == 10);
                        v169 = function_416210(v163, v167, v168, 0, v168, 0);
                        if (v169 == -2) {
                            // 0x402aca
                            format3 = dcgettext(NULL, "error in regular expression search", 5);
                            error(0, (int32_t)"error in regular expression search" ^ (int32_t)"error in regular expression search", format3);
                            function_402fb0(0);
                            // UNREACHABLE
                        }
                    }
                } else {
                    int64_t v173 = (int64_t)g61 + 1; // 0x40288b
                    g61 = v173;
                    int64_t v174 = function_403b30(v173); // 0x402896
                    if (v174 == 0) {
                        goto lab_0x40275a_3;
                    }
                    int64_t v175 = *(int64_t *)v174; // 0x402850
                    int64_t v176 = *(int64_t *)(v174 + 8); // 0x402853
                    int64_t v177 = v175 + (int64_t)(*(char *)(v175 - 1 + v176) == 10); // 0x402863
                    int64_t v178 = function_416210(v163, v176, v177, 0, v177, 0); // 0x40286f
                    if (v178 == -2) {
                        // 0x402aca
                        format3 = dcgettext(NULL, "error in regular expression search", 5);
                        error(0, (int32_t)"error in regular expression search" ^ (int32_t)"error in regular expression search", format3);
                        function_402fb0(0);
                        // UNREACHABLE
                    }
                    while (v178 == -1) {
                        // 0x402884
                        v173 = (int64_t)g61 + 1;
                        g61 = v173;
                        v174 = function_403b30(v173);
                        if (v174 == 0) {
                            goto lab_0x40275a_3;
                        }
                        // 0x402850
                        v175 = *(int64_t *)v174;
                        v176 = *(int64_t *)(v174 + 8);
                        v177 = v175 + (int64_t)(*(char *)(v175 - 1 + v176) == 10);
                        v178 = function_416210(v163, v176, v177, 0, v177, 0);
                        if (v178 == -2) {
                            // 0x402aca
                            format3 = dcgettext(NULL, "error in regular expression search", 5);
                            error(0, (int32_t)"error in regular expression search" ^ (int32_t)"error in regular expression search", format3);
                            function_402fb0(0);
                            // UNREACHABLE
                        }
                    }
                }
                uint64_t v179 = *v162 + (int64_t)g61; // 0x4028df
                int32_t v180 = *(int32_t *)(v124 + 24); // 0x4028eb
                uint64_t v181 = function_403c10(v163); // 0x4028f2
                v73 = v180;
                if (v179 < v181) {
                    goto lab_0x402c25;
                }
                int64_t v182 = 0x100000000 * v179 / 0x100000000 - v181; // 0x402907
                if (v182 != 0) {
                    int64_t v183 = 0; // 0x402910
                    int64_t v184 = function_403960(); // 0x402919
                    if (v184 == 0) {
                        // 0x402aee
                        v76 = g52 + 8 * (int64_t)v180;
                        goto lab_0x402afe;
                    }
                    // 0x402927
                    if (v126 == 0) {
                        // 0x40292c
                        function_403480(v184, v184 + 8);
                    }
                    while (v182 != v183 + 1) {
                        // 0x402910
                        v183++;
                        v184 = function_403960();
                        if (v184 == 0) {
                            // 0x402aee
                            v76 = g52 + 8 * (int64_t)v180;
                            goto lab_0x402afe;
                        }
                        // 0x402927
                        if (v126 == 0) {
                            // 0x40292c
                            function_403480(v184, v184 + 8);
                        }
                    }
                }
                if (v126 == 0) {
                    // 0x402a32
                    function_403000();
                }
                // 0x402943
                if (*v162 >= 1) {
                    // 0x40294a
                    g61 = v179;
                }
                // 0x402956
                v159 = g47;
                v160 = v122 + 1;
            }
        }
        // 0x4028cd
        v157 = v149;
        v158 = 0x100000000 * v158 + 0x100000000 >> 32;
        if (v158 >= (int64_t)g46) {
            goto lab_0x402a3c;
        }
    }
  lab_0x4028b2_3:
    // 0x4028b2
    function_403290(*v150, v145);
    // UNREACHABLE
}
// Address range: 0x402d70 - 0x402d9b
// Address range: 0x402d9b - 0x402dba
int64_t function_402d9b(void) {
    // 0x402d9b
    return &g36;
}
// Address range: 0x402dba - 0x402df1
int64_t function_402dba(void) {
    // 0x402dba
    return 0;
}
// Address range: 0x402df1 - 0x402e48
int64_t function_402df1(void) {
    // 0x402df1
    if (g40 != 0) {
        // 0x402e47
        int64_t result; // 0x402df1
        return result;
    }
    int64_t v1 = g41; // 0x402e24
    int64_t result2; // 0x402e36
    if (g41 >= ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x402e36
        result2 = function_402d9b();
        g40 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x402e26
        v1++;
    }
    // 0x402e1a
    g41 = v1;
    // 0x402e36
    result2 = function_402d9b();
    g40 = 1;
    return result2;
}
// Address range: 0x402e48 - 0x402e4d
int64_t function_402e48(void) {
    // 0x402e48
    return function_402dba();
}
// Address range: 0x402e50 - 0x402f08
int64_t function_402e50(int64_t a1) {
    // 0x402e50
    strcpy(g59, g58);
    if (g57 == NULL) {
        // 0x402ec0
        __sprintf_chk((char *)((int64_t)strlen(g58) + (int64_t)g59), 1, -1, "%0*u", (int64_t)g24, (int32_t)a1);
        return (int64_t)g59;
    }
    // 0x402e75
    __sprintf_chk((char *)((int64_t)strlen(g58) + (int64_t)g59), 1, -1, g57);
    return (int64_t)g59;
}
// Address range: 0x402f10 - 0x402fab
int64_t function_402f10(int32_t a1) {
    // 0x402f10
    if (g56 == 0) {
        // 0x402fa0
        g56 = 0;
        return 0;
    }
    int64_t v1 = 0; // 0x402f10
    int32_t result; // 0x402f10
    while (true) {
        int64_t v2 = v1;
        int64_t path = function_402e50(v2); // 0x402f3f
        int64_t v3; // 0x402f10
        if ((char)a1 != 0 | unlink((char *)path) == 0) {
            int64_t v4 = v2 + 1; // 0x402f36
            v3 = v4;
            result = g56;
            if (g56 <= (int32_t)v4) {
                // break -> 0x402f8f
                break;
            }
        } else {
            int64_t v5 = v2 + 1; // 0x402f62
            error(0, *__errno_location(), "%s", (char *)function_405d00(0, 3, path));
            v3 = v5;
            result = g56;
            if (g56 <= (int32_t)v5) {
                // break -> 0x402f8f
                break;
            }
        }
        // 0x402f3d
        v1 = v3 & 0xffffffff;
    }
    // 0x402f8f
    g56 = 0;
    return result;
}
// Address range: 0x402fb0 - 0x402ff6
int64_t function_402fb0(int64_t a1) {
    // 0x402fb0
    function_403000();
    int64_t oset; // bp-136, 0x402fb0
    sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&g45, (struct _TYPEDEF_sigset_t *)&oset);
    if (g50 != 0) {
        // 0x402fd6
        function_402f10(0);
    }
    // 0x402fdd
    sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&oset, NULL);
    exit(1);
    // UNREACHABLE
}
// Address range: 0x403000 - 0x40318e
int64_t function_403000(void) {
    struct _IO_FILE * v1 = g54; // 0x403000
    int64_t result; // 0x403000
    if (v1 == NULL) {
        // 0x403060
        return result;
    }
    // 0x40300c
    if ((*(char *)v1 & 32) != 0) {
        // 0x403148
        function_405c30(4, (int64_t)g53);
        error(0, (int32_t)"write error for %s" ^ (int32_t)"write error for %s", dcgettext(NULL, "write error for %s", 5));
        g54 = NULL;
        function_402fb0(0);
        // UNREACHABLE
    }
    int64_t v2 = function_4073b0((int64_t)v1, result); // 0x40301d
    if ((int32_t)v2 != 0) {
        int64_t v3 = function_405d00(0, 3, (int64_t)g53); // 0x403118
        error(0, *__errno_location(), "%s", (char *)v3);
        g54 = NULL;
        function_402fb0(0);
        // UNREACHABLE
    }
    // 0x40302a
    int64_t result2; // 0x403000
    int64_t oset; // bp-152, 0x403000
    if (g55 == 0) {
        // 0x403036
        if (g49 != 0) {
            // 0x403090
            sigprocmask(g55, (struct _TYPEDEF_sigset_t *)&g45, (struct _TYPEDEF_sigset_t *)&oset);
            int32_t v4 = unlink(g53); // 0x4030a7
            int32_t err_num = *__errno_location(); // 0x4030ba
            g56 -= (int32_t)(v4 == 0);
            result2 = sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&oset, NULL);
            if (v4 != 0) {
                // 0x4030e2
                error(0, err_num, "%s", (char *)function_405d00(0, 3, (int64_t)g53));
                result2 = &g84;
            }
            // 0x403048
            g54 = NULL;
            return result2;
        }
    }
    // 0x40303f
    result2 = v2;
    if (g51 == 0) {
        int64_t v5 = function_404210((int64_t)g55, &oset); // 0x40306b
        result2 = __fprintf_chk(g37, 1, "%s\n", (char *)v5);
    }
    // 0x403048
    g54 = NULL;
    return result2;
}
// Address range: 0x403190 - 0x403260
int64_t function_403190(void) {
    int64_t v1 = function_402e50((int64_t)(uint32_t)g56); // 0x4031a4
    g53 = (char *)v1;
    int64_t v2 = v1; // 0x4031bc
    int32_t err_num = 75; // 0x4031bc
    if (g56 != -1) {
        // 0x4031e8
        int64_t oset; // bp-152, 0x403190
        sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&g45, (struct _TYPEDEF_sigset_t *)&oset);
        int64_t v3 = function_404170(v1, &g1); // 0x4031ff
        g54 = (struct _IO_FILE *)v3;
        err_num = *__errno_location();
        g56 += (int32_t)(v3 != 0);
        int32_t result = sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&oset, NULL); // 0x403235
        if (v3 != 0) {
            // 0x40323f
            g55 = 0;
            return result;
        }
        // 0x403254
        v2 = (int64_t)g53;
    }
    // 0x4031be
    error(0, err_num, "%s", (char *)function_405d00(0, 3, v2));
    function_402fb0(0);
    // UNREACHABLE
}
// Address range: 0x403260 - 0x403289
int64_t function_403260(int64_t a1, int64_t a2) {
    // 0x403260
    if (g50 != 0) {
        // 0x40326e
        function_402f10(1);
    }
    int32_t sig_handler = a1; // 0x403278
    signal(sig_handler, SIG_DFL);
    return raise(sig_handler);
}
// Address range: 0x403290 - 0x403337
int64_t function_403290(int64_t a1, int64_t a2) {
    // 0x403290
    int64_t v1; // bp-56, 0x403290
    int64_t v2 = function_404210(a1, &v1); // 0x40329e
    function_405e80(v2);
    __fprintf_chk(g39, 1, dcgettext(NULL, "%s: %s: line number out of range", 5));
    int64_t v3; // 0x403290
    if (a2 == 0) {
        // 0x403324
        fputc(10, g39);
        v3 = 10;
    } else {
        // 0x4032e7
        function_404210(a2, &v1);
        __fprintf_chk(g39, 1, dcgettext(NULL, " on repetition %s\n", 5));
        v3 = (int64_t)g39;
    }
    // 0x40331f
    function_402fb0(v3);
    // UNREACHABLE
}
// Address range: 0x403340 - 0x40342b
int64_t function_403340(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    if (a1 == 0) {
        int64_t v1 = function_4064b0(1312); // 0x4033f8
        *(int64_t *)a2 = v1;
        *(int64_t *)(v1 + 1304) = 0;
        *(int64_t *)v1 = 0;
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 16) = 0;
        abort();
        // UNREACHABLE
    }
    int64_t v2 = a2; // 0x403368
    int64_t v3 = a2; // 0x403368
    if (a2 == 80) {
        // 0x4033a0
        v3 = function_4064b0(1312);
        *(int64_t *)(v3 + 1304) = 0;
        int64_t * v4 = (int64_t *)v3; // 0x4033b5
        *v4 = 0;
        *(int64_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        *(int64_t *)1384 = v3;
        *(int64_t *)80 = v3;
        v2 = *v4;
    }
    int64_t * v5 = (int64_t *)(v3 + 8); // 0x40336a
    int64_t v6 = *v5; // 0x40336a
    int64_t result = v2 + 1; // 0x40336e
    int64_t v7 = 16 * v6 + v3; // 0x40337d
    *(int64_t *)(v7 + 32) = a3;
    *(int64_t *)(v7 + 24) = a4;
    *(int64_t *)v3 = result;
    *v5 = v6 + 1;
    return result;
}
// Address range: 0x403430 - 0x40347a
int64_t function_403430(int64_t a1, int64_t a2) {
    // 0x403430
    if (a2 == 0) {
        // 0x40345c
        *(int64_t *)a2 = 0;
        free(NULL);
        *(int64_t *)a1 = 0;
        return &g84;
    }
    int64_t v1 = *(int64_t *)(a2 + 1304); // 0x403448
    free((int64_t *)a2);
    while (v1 != 0) {
        int64_t v2 = v1;
        v1 = *(int64_t *)(v2 + 1304);
        free((int64_t *)v2);
    }
    // 0x40345c
    *(int64_t *)a2 = 0;
    free((int64_t *)v1);
    *(int64_t *)a1 = 0;
    return &g84;
}
// Address range: 0x403480 - 0x403504
int64_t function_403480(int64_t n, int64_t a2) {
    int32_t result = fwrite_unlocked((int64_t *)1, 1, (int32_t)n, g54); // 0x40349e
    if (result == 1) {
        // 0x4034a8
        g55 += result;
        return result;
    }
    // 0x4034b6
    function_405c30(4, (int64_t)g53);
    error(0, *__errno_location(), dcgettext(NULL, "write error for %s", 5));
    g54 = NULL;
    function_402fb0(0);
    // UNREACHABLE
}
// Address range: 0x403510 - 0x40353d
int64_t function_403510(int64_t a1) {
    // 0x403510
    error(0, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    function_402fb0(0);
    // UNREACHABLE
}
// Address range: 0x403540 - 0x403624
int64_t function_403540(void) {
    int64_t v1 = g46; // 0x403544
    int128_t v2 = g43; // 0x40354b
    int64_t v3 = g47; // 0x403552
    int64_t v4 = v1; // 0x40355c
    int64_t v5 = v3; // 0x40355c
    int64_t v6; // 0x403540
    int64_t v7; // 0x403540
    int64_t v8; // 0x403540
    if (v1 == (int64_t)v2) {
        if (v3 == 0) {
            // 0x4035f0
            v7 = 1;
            v8 = 96;
            if (v1 == 0) {
                goto lab_0x4035c7;
            } else {
                uint128_t v9 = 96 * (v2 & 0xffffffffffffffff); // 0x4035fd
                if ((int64_t)v9 < 0) {
                    // 0x403610
                    function_403510(v3);
                }
                // 0x40360b
                v6 = v1;
                if (v9 % 0x7f0000000000000001 != 0) {
                    // 0x403610
                    function_403510(v3);
                    // UNREACHABLE
                }
                goto lab_0x4035bf;
            }
        } else {
            if (v1 >= 0xe38e38e38e38e3) {
                // 0x403610
                function_403510(v3);
                // UNREACHABLE
            }
            // 0x4035b4
            v6 = v1 + 1 + v1 / 2;
            goto lab_0x4035bf;
        }
    } else {
        goto lab_0x40355e;
    }
  lab_0x40355e:
    // 0x40355e
    g46 = v4 + 1;
    int64_t result = 96 * v4 + v5; // 0x403571
    *(char *)(result + 30) = 0;
    *(int64_t *)(result + 16) = 0;
    *(char *)(result + 28) = 0;
    *(int64_t *)(result + 8) = 0;
    *(int64_t *)result = 0;
    return result;
  lab_0x4035c7:
    // 0x4035c7
    g43 = v7;
    int64_t v10 = function_406510(v3, v8); // 0x4035ce
    g47 = v10;
    v4 = g46;
    v5 = v10;
    goto lab_0x40355e;
  lab_0x4035bf:
    // 0x4035bf
    v7 = v6;
    v8 = 96 * v6;
    goto lab_0x4035c7;
}
// Address range: 0x403630 - 0x403953
int64_t function_403630(void) {
    int32_t v1 = g63;
    int64_t v2 = v1 >= 0x1fff ? (int64_t)v1 : 0x1fff; // 0x40372c
    int64_t v3; // 0x403630
    int64_t v4; // 0x403630
    int64_t v5; // 0x403630
    int64_t v6; // 0x403630
    int64_t * v7; // 0x403630
    int64_t v8; // 0x4036b5
    int64_t * v9; // 0x403630
    int64_t * v10; // 0x4036bd
    int64_t * v11; // 0x4036c5
    int64_t * v12; // 0x4036cd
    int64_t * v13; // 0x4036d1
    int64_t * v14; // 0x403630
    int64_t v15; // 0x403681
    int64_t * v16; // 0x403630
    int64_t v17; // 0x40369e
    int64_t * v18; // 0x40369e
    int64_t v19; // 0x4036a9
    while (true) {
      lab_0x403756:;
        uint64_t v20 = v2;
        int64_t v21 = 0x2000; // 0x40375d
        int64_t v22 = 0x1fff; // 0x40375d
        if (v20 >= 0x2000) {
            int64_t v23 = v20 - 0x1800 & -2048; // 0x403667
            v21 = v23 + 0x2000;
            v22 = v23 + 0x1fff;
        }
        int64_t v24 = v22;
        v15 = function_4064b0(72);
        int64_t v25 = function_4064b0(v21); // 0x40368c
        int32_t v26 = g63; // 0x403691
        v16 = (int64_t *)v15;
        *v16 = v24;
        v17 = v15 + 40;
        v18 = (int64_t *)v17;
        *v18 = v25;
        v19 = v15 + 56;
        v7 = (int64_t *)v19;
        *v7 = 0;
        int64_t v27 = g62 + 1; // 0x4036b1
        v8 = v15 + 48;
        v9 = (int64_t *)v8;
        *v9 = 0;
        v10 = (int64_t *)(v15 + 32);
        *v10 = 0;
        v11 = (int64_t *)(v15 + 8);
        *v11 = 0;
        v12 = (int64_t *)(v15 + 24);
        *v12 = v27;
        v13 = (int64_t *)(v15 + 16);
        *v13 = v27;
        v14 = (int64_t *)(v15 + 64);
        *v14 = 0;
        v3 = v25;
        v5 = v24;
        if (v26 != 0) {
            int64_t v28 = v26; // 0x403691
            memcpy((int64_t *)v25, (int64_t *)g64, v26);
            *v11 = v28;
            g63 = 0;
            int64_t v29 = v24 - v28; // 0x403799
            v6 = v28;
            v4 = v25;
            if (v29 != 0) {
                // 0x40394b
                v3 = v25 + v28;
                v5 = v29;
                goto lab_0x4036e6;
            } else {
                goto lab_0x4037a2;
            }
        } else {
            goto lab_0x4036e6;
        }
    }
  lab_0x4038b2:
    // 0x4038b2
    error(0, *__errno_location(), dcgettext(NULL, "read error", 5));
    function_402fb0(0);
    // UNREACHABLE
  lab_0x4036e6:;
    int64_t v30 = function_405ea0(0, v3, v5); // 0x4036ee
    if (v30 != 0) {
        if (v30 == -1) {
            // break -> 0x4038b2
            goto lab_0x4038b2;
        }
    } else {
        // 0x4036fc
        g60 = 1;
    }
    int64_t v31 = *v11 + v30; // 0x403703
    *v11 = v31;
    int64_t v32 = 0; // 0x40370e
    if (v31 != 0) {
        // 0x403910
        v6 = v31;
        v4 = *v18;
        goto lab_0x4037a2;
    } else {
        goto lab_0x403714;
    }
  lab_0x4037a2:;
    int64_t v33 = function_408460(v4, 10, v6); // 0x4037e4
    int64_t v34 = v33; // 0x4037ef
    int64_t v35 = v4; // 0x4037ef
    int64_t v36 = v6; // 0x4037ef
    int64_t v37 = v6; // 0x4037ef
    int64_t v38 = v4; // 0x4037ef
    int64_t v39 = 0; // 0x4037ef
    if (v33 != 0) {
        int64_t v40 = 1; // 0x4037c2
        int64_t v41 = v34 + 1; // 0x4037c6
        int64_t v42 = v34 - v35 + 1; // 0x4037ca
        int64_t v43 = v36 - v42; // 0x4037d1
        function_403340(v8, v19, v35, v42);
        int64_t v44 = function_408460(v41, 10, v43); // 0x4037e4
        v34 = v44;
        int64_t v45 = v40; // 0x4037ef
        v35 = v41;
        v36 = v43;
        v37 = v43;
        v38 = v41;
        v39 = v40;
        while (v44 != 0) {
            // 0x4037b0
            v40 = v45 + 1;
            v41 = v34 + 1;
            v42 = v34 - v35 + 1;
            v43 = v36 - v42;
            function_403340(v8, v19, v35, v42);
            v44 = function_408460(v41, 10, v43);
            v34 = v44;
            v45 = v40;
            v35 = v41;
            v36 = v43;
            v37 = v43;
            v38 = v41;
            v39 = v40;
        }
    }
    int64_t v46 = v39;
    int64_t v47 = v38;
    int64_t v48 = v37;
    int64_t v49 = v47; // 0x4037f4
    int64_t v50 = v46; // 0x4037f4
    if (v48 != 0) {
        // 0x4037f6
        if (g60 == 0) {
            int64_t v51 = function_4066b0(v47, v48); // 0x4038e6
            int64_t v52 = g64; // 0x4038eb
            free((int64_t *)v52);
            g64 = v51;
            g63 = v48;
            v49 = v52;
            v50 = v46;
        } else {
            // 0x403803
            function_403340(v8, v19, v47, v48);
            v49 = v8;
            v50 = v46 + 1;
        }
    }
    // 0x40381a
    *v10 = v50;
    int64_t v53 = g62 + 1; // 0x403825
    *v13 = v53;
    *v12 = v53;
    g62 += v50;
    v32 = v49;
    int64_t v54; // 0x403630
    if (v50 != 0) {
        // 0x403844
        *v14 = 0;
        *v7 = *v9;
        v54 = g65;
        if (g65 == 0) {
            // 0x403860
            g65 = v15;
            return 1;
        }
        goto lab_0x403883;
    }
    goto lab_0x403714;
  lab_0x403714:
    // 0x403714
    if (g60 != 0) {
        // 0x403920
        function_403430(v17, v8);
        free(v16);
        return (int32_t)&g84 ^ (int32_t)&g84;
    }
    int64_t v55 = v32;
    int64_t v56 = *v16; // 0x403721
    v2 = 2 * v56;
    if (v2 < 0) {
        // 0x403946
        function_403510(v55);
        // UNREACHABLE
    }
    if (v56 < 0) {
        // 0x403946
        function_403510(v55);
        // UNREACHABLE
    }
    // 0x40373e
    function_403430(v17, v8);
    free(v16);
    goto lab_0x403756;
  lab_0x403883:;
    int64_t * v57 = (int64_t *)(v54 + 64);
    int64_t v58 = *v57; // 0x403883
    v54 = v58;
    if (v58 == 0) {
        // 0x40388c
        *v57 = v15;
        return 1;
    }
    goto lab_0x403883;
}
// Address range: 0x403960 - 0x403a34
int64_t function_403960(void) {
    int64_t v1 = g42; // 0x403961
    if (v1 != 0) {
        // 0x40396d
        function_403430(v1 + 40, v1 + 48);
        free((int64_t *)v1);
        g42 = 0;
    }
    int64_t v2 = g65; // 0x403997
    if (g65 == 0) {
        // 0x403a10
        if (g60 != 0 || (char)function_403630() == 0) {
            // 0x4039d6
            return 0;
        }
        // 0x403a22
        v2 = g65;
    }
    int64_t * v3 = (int64_t *)(v2 + 24); // 0x403999
    uint64_t v4 = *v3; // 0x403999
    if (v4 > (int64_t)g61) {
        // 0x4039a6
        g61 = v4;
    }
    int64_t * v5 = (int64_t *)(v2 + 56); // 0x4039ad
    int64_t v6 = *v5; // 0x4039ad
    *v3 = v4 + 1;
    int64_t * v7 = (int64_t *)(v6 + 16); // 0x4039b9
    int64_t v8 = *v7 + 1; // 0x4039bd
    *v7 = v8;
    int64_t result = v6 + 8 + 16 * v8; // 0x4039cc
    if (*(int64_t *)v6 != v8) {
        // 0x4039d6
        return result;
    }
    int64_t v9 = *(int64_t *)(v6 + 1304); // 0x4039e0
    *v5 = v9;
    if (v9 == 0) {
        // 0x4039f6
        g42 = v2;
        g65 = *(int64_t *)(v2 + 64);
        return result;
    }
    // 0x4039f0
    if (*(int64_t *)v9 != 0) {
        // 0x4039d6
        return result;
    }
    // 0x4039f6
    g42 = v2;
    g65 = *(int64_t *)(v2 + 64);
    return result;
}
// Address range: 0x403a40 - 0x403a6b
int64_t function_403a40(void) {
    int64_t result = function_403960(); // 0x403a5c
    if (result == 0) {
        // 0x403a66
        return result;
    }
    int64_t v1 = result;
    function_403480(v1, v1 + 8);
    int64_t result2 = function_403960(); // 0x403a5c
    while (result2 != 0) {
        // 0x403a50
        v1 = result2;
        function_403480(v1, v1 + 8);
        result2 = function_403960();
    }
    // 0x403a66
    return result2;
}
// Address range: 0x403a70 - 0x403b30
int64_t function_403a70(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(8 * (int64_t)*(int32_t *)(a1 + 24) + g52); // 0x403a8a
    function_405e80(v1);
    __fprintf_chk(g39, 1, dcgettext(NULL, "%s: %s: match not found", 5));
    int64_t v2; // 0x403a70
    if (a2 == 0) {
        // 0x403b11
        fputc(10, g39);
        v2 = 10;
    } else {
        // 0x403acf
        int64_t v3; // bp-72, 0x403a70
        function_404210(a2, &v3);
        __fprintf_chk(g39, 1, dcgettext(NULL, " on repetition %s\n", 5));
        v2 = (int64_t)g39;
    }
    // 0x403b07
    if ((char)a3 == 0) {
        // 0x403b24
        function_403a40();
        function_403000();
    }
    // 0x403b0c
    function_402fb0(v2);
    // UNREACHABLE
}
// Address range: 0x403b30 - 0x403c01
int64_t function_403b30(uint64_t a1) {
    int64_t v1 = g65; // 0x403b43
    if (g65 == 0) {
        goto lab_0x403ba0;
    } else {
        goto lab_0x403b45;
    }
  lab_0x403ba0:
    // 0x403ba0
    if (g60 != 0 || (char)function_403630() == 0) {
        // 0x403ba9
        return 0;
    }
    // 0x403bc1
    v1 = g65;
    goto lab_0x403b45;
  lab_0x403b45:;
    uint64_t v2 = *(int64_t *)(v1 + 16); // 0x403b45
    if (v2 > a1) {
        // 0x403ba9
        return 0;
    }
    int64_t v3 = v2; // 0x403b61
    int64_t v4 = v1; // 0x403b61
    if (*(int64_t *)(v1 + 32) + v2 <= a1) {
        int64_t * v5 = (int64_t *)(v1 + 64); // 0x403b63
        int64_t v6 = *v5; // 0x403b63
        int64_t v7 = v6; // 0x403b6a
        int64_t v8; // 0x403b7e
        if (v6 == 0) {
            // 0x403b6c
            if (g60 != 0 || (char)function_403630() == 0) {
                // 0x403ba9
                return 0;
            }
            // 0x403b7e
            v8 = *v5;
            v7 = v8;
            if (v8 == 0) {
                // 0x403b87
                __assert_fail("b", "src/csplit.c", 618, "find_line");
                goto lab_0x403ba0;
            }
        }
        int64_t v9 = *(int64_t *)(v7 + 16); // 0x403b50
        v3 = v9;
        v4 = v7;
        while (*(int64_t *)(v7 + 32) + v9 <= a1) {
            // 0x403b63
            v5 = (int64_t *)(v7 + 64);
            v6 = *v5;
            v7 = v6;
            if (v6 == 0) {
                // 0x403b6c
                if (g60 != 0 || (char)function_403630() == 0) {
                    // 0x403ba9
                    return 0;
                }
                // 0x403b7e
                v8 = *v5;
                v7 = v8;
                if (v8 == 0) {
                    // 0x403b87
                    __assert_fail("b", "src/csplit.c", 618, "find_line");
                    goto lab_0x403ba0;
                }
            }
            // 0x403b50
            v9 = *(int64_t *)(v7 + 16);
            v3 = v9;
            v4 = v7;
        }
    }
    int64_t v10 = a1 - v3; // 0x403bd0
    int64_t v11 = *(int64_t *)(v4 + 48); // 0x403bd3
    if (v10 < 80) {
        // 0x403bf1
        return v11 + 24 + 16 * v10;
    }
    int64_t v12 = v10 - 80; // 0x403be0
    int64_t v13 = *(int64_t *)(v11 + 1304); // 0x403be4
    int64_t v14 = v13; // 0x403bef
    int64_t v15 = v12; // 0x403bef
    while (v12 >= 80) {
        // 0x403be0
        v12 = v15 - 80;
        v13 = *(int64_t *)(v14 + 1304);
        v14 = v13;
        v15 = v12;
    }
    // 0x403bf1
    return v13 + 24 + 16 * v12;
}
// Address range: 0x403c10 - 0x403c80
int64_t function_403c10(int64_t a1) {
    // 0x403c10
    if (g65 != 0) {
        // 0x403c1c
        return *(int64_t *)(g65 + 24);
    }
    // 0x403c28
    if (g60 != 0) {
        // 0x403c50
        error(1, *__errno_location(), dcgettext(NULL, "input disappeared", 5));
        return &g84;
    }
    // 0x403c32
    if ((char)function_403630() != 0) {
        // 0x403c3b
        return *(int64_t *)(g65 + 24);
    }
    // 0x403c50
    error(1, *__errno_location(), dcgettext(NULL, "input disappeared", 5));
    return &g84;
}
// Address range: 0x403c80 - 0x40403d
int64_t function_403c80(int32_t status) {
    // 0x403c80
    if (status != 0) {
        // 0x403c9a
        __fprintf_chk(g39, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x403cbf
        exit(status);
        // UNREACHABLE
    }
    // 0x403cc6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE PATTERN...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Output pieces of FILE separated by PATTERN(s) to files 'xx00', 'xx01', ...,\nand output byte counts of each piece to standard output.\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "\nRead standard input if FILE is -\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "  -b, --suffix-format=FORMAT  use sprintf FORMAT instead of %02d\n  -f, --prefix=PREFIX        use PREFIX instead of 'xx'\n  -k, --keep-files           do not remove output files on errors\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "      --suppress-matched     suppress the lines matching PATTERN\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "  -n, --digits=DIGITS        use specified number of digits instead of 2\n  -s, --quiet, --silent      do not print counts of output file sizes\n  -z, --elide-empty-files    remove empty output files\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g37);
    fputs_unlocked(dcgettext(NULL, "\nEach PATTERN may be:\n  INTEGER            copy up to but not including specified line number\n  /REGEXP/[OFFSET]   copy up to but not including a matching line\n  %REGEXP%[OFFSET]   skip to, but not including a matching line\n  {INTEGER}          repeat the previous pattern specified number of times\n  {*}                repeat the previous pattern as many times as possible\n\nA line OFFSET is a required '+' or '-' followed by a positive integer.\n", 5), g37);
    int64_t v1 = &g2; // bp-136, 0x403e1f
    bool v2; // 0x403c80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403ea0
    int64_t v6 = *(int64_t *)v5; // 0x403ea4
    int64_t v7 = 7; // 0x403eaa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"csplit";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403eb6
        char v11 = *(char *)v9; // 0x403eb6
        char v12 = v11; // 0x403eb6
        bool v13 = false; // 0x403eb6
        while (v10 == v11) {
            // 0x403eac
            v7--;
            int64_t v14 = v9 + v3; // 0x403eb6
            int64_t v15 = v8 + v3; // 0x403eb6
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
            // break -> 0x403ec2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x403ec2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403fd4;
        } else {
            // 0x403fbe
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404013
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403f24;
            } else {
                goto lab_0x403fd4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403f24;
        } else {
            // 0x403f0a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404013
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403f24;
            } else {
                goto lab_0x403f24;
            }
        }
    }
  lab_0x403fd4:
    // 0x403fd4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403f64
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x403cbf
    exit(status);
    // UNREACHABLE
  lab_0x403f24:
    // 0x403f24
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403f64
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x403cbf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404040 - 0x404048
int64_t function_404040(int64_t a1) {
    // 0x404040
    g67 = a1;
    int64_t result; // 0x404040
    return result;
}
// Address range: 0x404050 - 0x404058
int64_t function_404050(int64_t a1) {
    // 0x404050
    g66 = a1;
    int64_t result; // 0x404050
    return result;
}
// Address range: 0x404060 - 0x4040fe
int64_t function_404060(void) {
    // 0x404060
    int32_t * err_num; // 0x404076
    if ((int32_t)function_4162b0((int64_t)g37) == 0) {
        goto lab_0x40408c;
    } else {
        // 0x404076
        err_num = __errno_location();
        if (g66 == 0) {
            goto lab_0x4040a3;
        } else {
            // 0x404087
            if (*err_num != 32) {
                goto lab_0x4040a3;
            } else {
                goto lab_0x40408c;
            }
        }
    }
  lab_0x40408c:;
    int64_t result = function_4162b0((int64_t)g39); // 0x404093
    if ((int32_t)result == 0) {
        // 0x40409c
        return result;
    }
    // 0x4040de
    _exit(g26);
    // UNREACHABLE
  lab_0x4040a3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4040af
    if (g67 == 0) {
        // 0x4040e9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4040c3
        error(0, *err_num, "%s: %s", (char *)function_405cd0((int64_t)g67), v1);
    }
    // 0x4040de
    _exit(g26);
    // UNREACHABLE
}
// Address range: 0x404100 - 0x40416a
int64_t function_404100(int32_t fd2, int64_t path, int32_t oflag, int32_t a4) {
    int32_t fd = open((char *)path, oflag); // 0x404115
    if (fd != fd2 != fd >= 0) {
        // 0x404124
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x40413c
    int32_t * v1 = __errno_location(); // 0x404144
    close(fd);
    return result;
}
// Address range: 0x404170 - 0x404203
int64_t function_404170(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x404177
    int64_t result = (int64_t)file; // 0x404177
    if (file == NULL) {
        // 0x404191
        return result;
    }
    uint32_t v1 = fileno(file); // 0x404187
    if (v1 >= 3) {
        // 0x404191
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_405f00((int64_t)v1, v2); // 0x4041aa
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4041e8
        function_4073b0(result, v2);
        // 0x404191
        return 0;
    }
    // 0x4041ae
    if ((int32_t)function_4073b0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x4041c0
        if (v4 != NULL) {
            // 0x404191
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4041cd
    close(fd);
    // 0x404191
    return 0;
}
// Address range: 0x404210 - 0x404258
int64_t function_404210(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x404210
    *(char *)v1 = 0;
    int64_t result = v1; // 0x404222
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40422b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x404254
    return result;
}
// Address range: 0x404260 - 0x4042f9
int64_t function_404260(int64_t str) {
    // 0x404260
    if (str == 0) {
        // 0x4042d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g39);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40426e
    int64_t result = (int64_t)found_char_pos; // 0x40426e
    if (found_char_pos == NULL) {
        // 0x4042c9
        g68 = str;
        g38 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x404278
    if (v1 - str < 7) {
        // 0x4042c9
        g68 = str;
        g38 = str;
        return result;
    }
    // 0x404288
    bool v2; // 0x404260
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x404260
    int64_t v5 = result - 6; // 0x404260
    int64_t v6 = 7; // 0x404296
    unsigned char v7 = *(char *)v5; // 0x404296
    char v8 = *(char *)v4; // 0x404296
    char v9 = v8; // 0x404296
    bool v10 = false; // 0x404296
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
    int64_t v12 = (int64_t)"lt-"; // 0x4042a0
    int64_t v13 = v1; // 0x4042a0
    int64_t v14 = 3; // 0x4042a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4042c9
        g68 = str;
        g38 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4042b2
    char v16 = *(char *)v12; // 0x4042b2
    char v17 = v16; // 0x4042b2
    bool v18 = false; // 0x4042b2
    while (v15 == v16) {
        // 0x4042a2
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
    int64_t v20 = v1; // 0x4042bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4042be
        v20 = result + 4;
        g36 = v20;
    }
    // 0x4042c9
    g68 = v20;
    g38 = v20;
    return result;
}
// Address range: 0x404300 - 0x4043f2
int64_t function_404300(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404314
    int64_t result = (int64_t)v1; // 0x404314
    if (result != a1) {
        // 0x404321
        return result;
    }
    int64_t v2 = function_416370(); // 0x404330
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4043e6
    if (v3 == 85) {
        // 0x404340
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4043d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
            return result2;
        }
        char v4 = *v1; // 0x40436e
        int64_t result3 = v4 != 96 ? (int64_t)&g8 : (int64_t)&g11; // 0x40437b
        // 0x404321
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4043d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
        return result2;
    }
    char v5 = *v1; // 0x4043bd
    int64_t result4 = v5 != 96 ? (int64_t)&g9 : (int64_t)&g10; // 0x4043ca
    // 0x404321
    return result4;
}
// Address range: 0x404400 - 0x404457
int64_t function_404400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x404400
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x404448
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x404457 - 0x405621
int64_t function_404457(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4044a1
    int64_t v3 = 0; // 0x4044a1
    int64_t v4; // 0x404457
    int64_t v5; // 0x404457
    int64_t v6; // 0x404457
    int64_t v7; // 0x404457
    int64_t v8; // 0x404457
    int64_t v9; // 0x404457
    int64_t v10; // 0x404457
    int64_t v11; // 0x404457
    int64_t v12; // 0x404457
    int64_t v13; // 0x404457
    int64_t v14; // 0x404457
    int64_t v15; // 0x404457
    int64_t v16; // 0x404457
    int64_t v17; // 0x404457
    int64_t v18; // 0x404457
    int64_t result; // 0x404457
    int64_t v19; // 0x404457
    int32_t wc; // bp+132, 0x404457
    int64_t ps; // bp+136, 0x404457
    char v20; // 0x404a10
    int64_t v21; // 0x404a10
    int64_t v22; // 0x404db8
    int64_t v23; // 0x404457
    int64_t v24; // 0x404dd7
    int32_t v25; // 0x404457
    while (true) {
      lab_0x4044a8_2:
        // 0x4044a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404457
        int64_t v27; // 0x4044dc
        while (true) {
          lab_0x4044a8:
            // 0x4044a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4044b3
            if (v15 == -1) {
                // 0x4044b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4044c3
            if (v28) {
                // break (via goto) -> 0x404c28
                goto lab_0x404c28;
            }
            // 0x4044cc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g82 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x404abb
                    if (v25 % 2 == 0) {
                        goto lab_0x404601;
                    }
                    // 0x404edd
                    v26 = v5 + 1;
                    goto lab_0x4044a8;
                }
                case 7: {
                    goto lab_0x404601;
                }
                case 8: {
                    goto lab_0x404601;
                }
                case 9: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404601;
                }
                case 12: {
                    goto lab_0x404601;
                }
                case 13: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4045cd;
                }
                case 36: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404601;
                }
                case 38: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404601;
                }
                case 44: {
                    goto lab_0x404601;
                }
                case 45: {
                    goto lab_0x404601;
                }
                case 46: {
                    goto lab_0x404601;
                }
                case 47: {
                    goto lab_0x404601;
                }
                case 48: {
                    goto lab_0x404601;
                }
                case 49: {
                    goto lab_0x404601;
                }
                case 50: {
                    goto lab_0x404601;
                }
                case 51: {
                    goto lab_0x404601;
                }
                case 52: {
                    goto lab_0x404601;
                }
                case 53: {
                    goto lab_0x404601;
                }
                case 54: {
                    goto lab_0x404601;
                }
                case 55: {
                    goto lab_0x404601;
                }
                case 56: {
                    goto lab_0x404601;
                }
                case 57: {
                    goto lab_0x404601;
                }
                case 58: {
                    goto lab_0x404601;
                }
                case 59: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404601;
                }
                case 66: {
                    goto lab_0x404601;
                }
                case 67: {
                    goto lab_0x404601;
                }
                case 68: {
                    goto lab_0x404601;
                }
                case 69: {
                    goto lab_0x404601;
                }
                case 70: {
                    goto lab_0x404601;
                }
                case 71: {
                    goto lab_0x404601;
                }
                case 72: {
                    goto lab_0x404601;
                }
                case 73: {
                    goto lab_0x404601;
                }
                case 74: {
                    goto lab_0x404601;
                }
                case 75: {
                    goto lab_0x404601;
                }
                case 76: {
                    goto lab_0x404601;
                }
                case 77: {
                    goto lab_0x404601;
                }
                case 78: {
                    goto lab_0x404601;
                }
                case 79: {
                    goto lab_0x404601;
                }
                case 80: {
                    goto lab_0x404601;
                }
                case 81: {
                    goto lab_0x404601;
                }
                case 82: {
                    goto lab_0x404601;
                }
                case 83: {
                    goto lab_0x404601;
                }
                case 84: {
                    goto lab_0x404601;
                }
                case 85: {
                    goto lab_0x404601;
                }
                case 86: {
                    goto lab_0x404601;
                }
                case 87: {
                    goto lab_0x404601;
                }
                case 88: {
                    goto lab_0x404601;
                }
                case 89: {
                    goto lab_0x404601;
                }
                case 90: {
                    goto lab_0x404601;
                }
                case 91: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404601;
                }
                case 94: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404601;
                }
                case 96: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404601;
                }
                case 98: {
                    goto lab_0x404601;
                }
                case 99: {
                    goto lab_0x404601;
                }
                case 100: {
                    goto lab_0x404601;
                }
                case 101: {
                    goto lab_0x404601;
                }
                case 102: {
                    goto lab_0x404601;
                }
                case 103: {
                    goto lab_0x404601;
                }
                case 104: {
                    goto lab_0x404601;
                }
                case 105: {
                    goto lab_0x404601;
                }
                case 106: {
                    goto lab_0x404601;
                }
                case 107: {
                    goto lab_0x404601;
                }
                case 108: {
                    goto lab_0x404601;
                }
                case 109: {
                    goto lab_0x404601;
                }
                case 110: {
                    goto lab_0x404601;
                }
                case 111: {
                    goto lab_0x404601;
                }
                case 112: {
                    goto lab_0x404601;
                }
                case 113: {
                    goto lab_0x404601;
                }
                case 114: {
                    goto lab_0x404601;
                }
                case 115: {
                    goto lab_0x404601;
                }
                case 116: {
                    goto lab_0x404601;
                }
                case 117: {
                    goto lab_0x404601;
                }
                case 118: {
                    goto lab_0x404601;
                }
                case 119: {
                    goto lab_0x404601;
                }
                case 120: {
                    goto lab_0x404601;
                }
                case 121: {
                    goto lab_0x404601;
                }
                case 122: {
                    goto lab_0x404601;
                }
                case 123: {
                    goto lab_0x4045a5;
                }
                case 124: {
                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4045a5;
                }
                case 126: {
                    goto lab_0x4045cd;
                }
                default: {
                    goto lab_0x4049a5;
                }
            }
        }
      lab_0x4049a5:
        if (v23 != 1) {
            // 0x404d10
            ps = 0;
            int64_t len = v15; // 0x404d20
            if (v15 == -1) {
                // 0x404d22
                len = strlen((char *)str);
            }
            // 0x404d4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x404daf:
                // 0x404daf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404db4
                int64_t v30 = v29 + str;
                v24 = function_4083e0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40532a_2;
                    }
                    case -1: {
                        goto lab_0x40532a_2;
                    }
                    case -2: {
                        // 0x40540d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405447
                            v19 = v18;
                            int64_t v31 = v18; // 0x40544a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405457
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405450
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40532a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40532a_2;
                    }
                    case 1: {
                        goto lab_0x404d80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x404e2c
                        char v34 = *(char *)v33; // 0x404e3d
                        unsigned char v35; // 0x404457
                        if (v34 < 125) {
                            // 0x404e48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x404e5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_404400(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404e30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x404e3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404e48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x404e5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_404400(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404e30
                            v33++;
                        }
                        goto lab_0x404d80;
                    }
                }
            }
            goto lab_0x40532a_2;
        } else {
            // 0x4049f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404601;
        }
    }
  lab_0x404c28:
    // 0x404c28
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40552a
        if (v8 > result) {
            // 0x405533
            *(char *)(v12 + result) = 0;
        }
        // 0x404857
        return result;
    }
    return function_404400(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404601:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404610
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40481a_2;
        }
    }
    int64_t v39 = result; // 0x404711
    char v40 = v20; // 0x404711
    int64_t v41 = v38; // 0x404711
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404711
    int64_t v43 = v36; // 0x404711
    goto lab_0x40468d;
  lab_0x40481a_2:
    // 0x404857
    return function_404400(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40532a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404601;
    } else {
        uint64_t v49 = v46 + v5; // 0x404efe
        int64_t v50 = v5 + 1; // 0x404fe1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404fe8
        char v52 = v20; // 0x404fe8
        int64_t v53 = result; // 0x404fe8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404fb1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404fb5
            int64_t v56 = v54 + 1; // 0x404fba
            int64_t v57 = v51 + 1; // 0x404fe1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404fac
                v54 = v56;
                if (v47 > v54) {
                    // 0x404fb1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404fb5
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
        goto lab_0x40468d;
    }
  lab_0x404d80:
    // 0x404d80
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x404d9f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404da2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40532a
        goto lab_0x40532a_2;
    }
    goto lab_0x404daf;
  lab_0x4045cd:
    // 0x4045cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40481a_2;
    }
    goto lab_0x404601;
  lab_0x4045a5:;
    bool v60 = v15 == 1; // 0x4045b0
    if (v15 == -1) {
        // 0x4045b2
        v60 = *(char *)v1 == 0;
    }
    // 0x4045be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404601;
    } else {
        goto lab_0x4045cd;
    }
  lab_0x40468d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404692
        *(char *)(v44 + v45) = v40;
    }
    // 0x404696
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4044a8_2;
}
// Address range: 0x405630 - 0x4057ce
int64_t function_405630(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405632
    int32_t * v3 = __errno_location(); // 0x40564c
    int64_t v4 = (int64_t)g28; // 0x405651
    int32_t v5 = *v3; // 0x40565b
    int64_t v6 = v4; // 0x405671
    if (v2 >= (int64_t)*(int32_t *)&g31) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4057c9
            function_403510(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405680
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405687
        int64_t v9; // 0x405630
        if (g28 == &g29) {
            int64_t v10 = function_406510(0, v8); // 0x4057aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g29); // 0x4057af
            *(int64_t *)&g28 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406510(v4, v8); // 0x40569b
            *(int64_t *)&g28 = v12;
            v9 = v12;
        }
        // 0x4056aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g31; // 0x4056aa
        int32_t v14 = v7; // 0x4056b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g31 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4056e1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4056eb
    int64_t * v17 = (int64_t *)v15; // 0x4056ee
    uint64_t v18 = *v17; // 0x4056ee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4056f1
    int64_t result = *v19; // 0x4056f1
    int64_t v20; // 0x405630
    uint64_t v21 = function_404400(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x405714
    if (v18 > v21) {
        // 0x40578b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x405727
    *v17 = v22;
    if (result != (int64_t)&g69) {
        // 0x405737
        free((int64_t *)result);
    }
    int64_t result2 = function_4064b0(v22); // 0x405751
    *v19 = result2;
    int64_t v23; // 0x405630
    function_404400(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40578b
    *v3 = v5;
    return result2;
}
// Address range: 0x4057d0 - 0x405804
int64_t function_4057d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4057d7
    int64_t result = function_4066b0(a1 == 0 ? (int64_t)&g70 : a1, 56); // 0x4057f6
    return result;
}
// Address range: 0x405810 - 0x40581f
int64_t function_405810(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g70 : a1); // 0x40581c
    return result;
}
// Address range: 0x405820 - 0x40582f
int64_t function_405820(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g70 : a1; // 0x405828
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g70;
}
// Address range: 0x405830 - 0x405863
int64_t function_405830(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g70 + 8 : a1 + 8; // 0x405849
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40584e
    uint32_t v3 = *v2; // 0x40584e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405852
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405870 - 0x405883
int64_t function_405870(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g70 + 4 : a1 + 4); // 0x40587c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405890 - 0x4058bb
int64_t function_405890(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g70 : a1; // 0x405898
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4058b5
        abort();
        // UNREACHABLE
    }
    // 0x4058ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g70;
}
// Address range: 0x4058c0 - 0x405932
int64_t function_4058c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g70 : a5; // 0x4058e2
    int32_t * v2 = __errno_location(); // 0x4058eb
    uint32_t v3 = *(int32_t *)v1; // 0x40590b
    int64_t result = function_404400(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40591a
    return result;
}
// Address range: 0x405940 - 0x405a21
int64_t function_405940(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g70 : a4; // 0x405962
    int32_t * v2 = __errno_location(); // 0x405968
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405987
    int32_t * v4 = (int32_t *)v1; // 0x40598a
    int64_t v5 = function_404400(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4059a5
    int64_t v6 = v5 + 1; // 0x4059aa
    int64_t result = function_4064b0(v6); // 0x4059bf
    function_404400(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405a04
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x405a0d
    return result;
}
// Address range: 0x405a30 - 0x405a3a
int64_t function_405a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405a30
    return function_405940(a1, a2, 0, a3);
}
// Address range: 0x405a40 - 0x405ad5
int64_t function_405a40(void) {
    uint32_t v1 = *(int32_t *)&g31; // 0x405a40
    int64_t v2 = v1; // 0x405a40
    int64_t v3 = v2; // 0x405a54
    if (v1 >= 2) {
        int64_t v4 = &g31;
        int64_t v5 = v4 + 16; // 0x405a73
        free((int64_t *)*(int64_t *)v4);
        v3 = &g84;
        while (v5 != (int64_t)g28 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405a70
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g84;
        }
    }
    int64_t v6 = v3; // 0x405a8d
    if (g29 != 0x61d4c0) {
        // 0x405a8f
        free((int64_t *)g29);
        g29 = 256;
        *(int64_t *)&g30 = (int64_t)&g69;
        v6 = &g84;
    }
    int64_t result = v6; // 0x405ab1
    if (g28 != &g29) {
        // 0x405ab3
        free(g28);
        *(int64_t *)&g28 = (int64_t)&g29;
        result = &g84;
    }
    // 0x405ac6
    *(int32_t *)&g31 = 1;
    return result;
}
// Address range: 0x405ae0 - 0x405af1
int64_t function_405ae0(void) {
    // 0x405ae0
    int64_t v1; // 0x405ae0
    return function_405630(v1, v1, -1, (int64_t *)&g70);
}
// Address range: 0x405b00 - 0x405b0a
int64_t function_405b00(void) {
    // 0x405b00
    int64_t v1; // 0x405b00
    return function_405630(v1, v1, v1, (int64_t *)&g70);
}
// Address range: 0x405b10 - 0x405b26
int64_t function_405b10(int64_t a1) {
    // 0x405b10
    return function_405630(0, a1, -1, (int64_t *)&g70);
}
// Address range: 0x405b30 - 0x405b42
int64_t function_405b30(int64_t a1, int64_t a2) {
    // 0x405b30
    return function_405630(0, a1, a2, (int64_t *)&g70);
}
// Address range: 0x405b50 - 0x405bb8
int64_t function_405b50(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405b60
    return function_405630((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405bc0 - 0x405c24
int64_t function_405bc0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405bd0
    return function_405630((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405c30 - 0x405c3c
int64_t function_405c30(int64_t a1, int64_t a2) {
    // 0x405c30
    return function_405b50(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405c40 - 0x405c4f
int64_t function_405c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405c40
    return function_405bc0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405c50 - 0x405cc0
int64_t function_405c50(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g70); // 0x405c5d
    int128_t v2 = __asm_movdqa(g71); // 0x405c65
    int128_t v3 = __asm_movdqa(g72); // 0x405c6d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x405c82
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405c98
    uint32_t v6 = *v5; // 0x405c98
    uint32_t v7 = (int32_t)a3 % 32; // 0x405c9d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405630(0, a1, a2, &v4);
}
// Address range: 0x405cc0 - 0x405ccd
int64_t function_405cc0(int64_t a1, int64_t a2) {
    // 0x405cc0
    return function_405c50(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405cd0 - 0x405ce1
int64_t function_405cd0(int64_t a1) {
    // 0x405cd0
    return function_405c50(a1, -1, 58);
}
// Address range: 0x405cf0 - 0x405cfa
int64_t function_405cf0(void) {
    // 0x405cf0
    int64_t v1; // 0x405cf0
    return function_405c50(v1, v1, 58);
}
// Address range: 0x405d00 - 0x405d6e
int64_t function_405d00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405d1a
    return function_405630((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405d70 - 0x405ddc
int64_t function_405d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g70); // 0x405d77
    int128_t v2 = __asm_movdqa(g71); // 0x405d7f
    int128_t v3 = __asm_movdqa(g72); // 0x405d87
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405da9
    if (a2 == 0 || a3 == 0) {
        // 0x405dd7
        abort();
        // UNREACHABLE
    }
    // 0x405dba
    return function_405630(a1, a4, a5, &v4);
}
// Address range: 0x405de0 - 0x405de9
int64_t function_405de0(void) {
    // 0x405de0
    int64_t v1; // 0x405de0
    return function_405d70(v1, v1, v1, v1, -1);
}
// Address range: 0x405df0 - 0x405e07
int64_t function_405df0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405df0
    return function_405d70(0, a1, a2, a3, -1);
}
// Address range: 0x405e10 - 0x405e23
int64_t function_405e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405e10
    return function_405d70(0, a1, a2, a3, a4);
}
// Address range: 0x405e30 - 0x405e3a
int64_t function_405e30(void) {
    // 0x405e30
    int64_t v1; // 0x405e30
    return function_405630(v1, v1, v1, &g27);
}
// Address range: 0x405e40 - 0x405e52
int64_t function_405e40(int64_t a1, int64_t a2) {
    // 0x405e40
    return function_405630(0, a1, a2, &g27);
}
// Address range: 0x405e60 - 0x405e71
int64_t function_405e60(void) {
    // 0x405e60
    int64_t v1; // 0x405e60
    return function_405630(v1, v1, -1, &g27);
}
// Address range: 0x405e80 - 0x405e96
int64_t function_405e80(int64_t a1) {
    // 0x405e80
    return function_405630(0, a1, -1, &g27);
}
// Address range: 0x405ea0 - 0x405efe
int64_t function_405ea0(int32_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read(fd, (int64_t *)buf, (int32_t)nbyte); // 0x405ec1
    while (result < 0) {
        // 0x405ece
        if (*__errno_location() != 4) {
            // break -> 0x405eda
            break;
        }
        result = read(fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x405f00 - 0x405f0e
int64_t function_405f00(int64_t a1, int64_t a2) {
    // 0x405f00
    int64_t v1; // 0x405f00
    return function_407430(a1, 0, 3, v1);
}
// Address range: 0x405f10 - 0x4062ed
int64_t function_405f10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405fa8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405f2c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405f46
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405f8b
    if (a6 < 10) {
        // 0x405f9a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x406092
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4062f0 - 0x406310
int64_t function_4062f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4062f0
    if (a5 == 0) {
        // 0x40630b
        return function_405f10(a1, a2, a3, a4, a5, 0, (int64_t)&g84);
    }
    int64_t v1 = 0; // 0x4062f7
    v1++;
    int64_t v2 = v1; // 0x406309
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406300
        v1++;
        v2 = v1;
    }
    // 0x40630b
    return function_405f10(a1, a2, a3, a4, a5, v2, (int64_t)&g84);
}
// Address range: 0x406310 - 0x406370
int64_t function_406310(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406310
    int64_t v3 = &v2; // 0x406310
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406343
    int64_t v6; // 0x40632d
    int64_t * v7; // 0x40634b
    int64_t v8; // 0x40634b
    int64_t v9; // 0x406357
    if (v5 < 48) {
        // 0x406320
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406363
            break;
        }
    } else {
        // 0x40634b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406363
            break;
        }
    }
    int64_t v10 = 10; // 0x406341
    while (v4 != 9) {
        // 0x406339
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406320
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406363
                break;
            }
        } else {
            // 0x40634b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406363
                break;
            }
        }
        // 0x406339
        v10 = 10;
    }
    // 0x406363
    return function_405f10(a1, a2, a3, a4, v3, v10, (int64_t)&g84);
}
// Address range: 0x406370 - 0x40642c
int64_t function_406370(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x406370
    int64_t v1; // bp-168, 0x406370
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406370
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406370
    int64_t v8; // 0x406370
    int64_t v9; // bp-56, 0x406370
    int64_t v10; // 0x4063d5
    int64_t v11; // 0x4063f9
    if ((int32_t)v6 < 48) {
        // 0x4063c0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406410
            break;
        }
    } else {
        // 0x4063f2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406410
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4063ea
    int64_t v13 = 10; // 0x4063ea
    while (v5 != 9) {
        // 0x4063ec
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4063c0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406410
                break;
            }
        } else {
            // 0x4063f2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406410
                break;
            }
        }
        // 0x4063e2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406410
    int64_t v14; // bp-136, 0x406370
    int64_t result = function_405f10(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g84); // 0x40641f
    return result;
}
// Address range: 0x406430 - 0x4064a4
int64_t function_406430(int64_t a1) {
    // 0x406430
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406493
    return fputs_unlocked(v1, g37);
}
// Address range: 0x4064b0 - 0x4064ca
int64_t function_4064b0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4064b4
    if (size != 0 != (mem == NULL)) {
        // 0x4064c3
        return (int64_t)mem;
    }
    // 0x4064c5
    function_403510(size);
    // UNREACHABLE
}
// Address range: 0x4064d0 - 0x4064f1
int64_t function_4064d0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4064d3
    int64_t v2 = v1; // 0x4064d3
    if (v2 < 0) {
        // 0x4064eb
        function_403510(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4064e9
        return function_4064b0(v2);
    }
    // 0x4064eb
    function_403510(v2);
    // UNREACHABLE
}
// Address range: 0x406500 - 0x406502
int64_t function_406500(void) {
    // 0x406500
    int64_t v1; // 0x406500
    return function_4064b0(v1);
}
// Address range: 0x406510 - 0x406546
int64_t function_406510(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406538
        free(v1);
        return (int32_t)&g84 ^ (int32_t)&g84;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406521
    if (a2 != 0 != (mem == NULL)) {
        // 0x406530
        return (int64_t)mem;
    }
    // 0x406541
    function_403510(a1);
    // UNREACHABLE
}
// Address range: 0x406550 - 0x406571
int64_t function_406550(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406553
    int64_t v2 = v1; // 0x406553
    if (v2 < 0) {
        // 0x40656b
        function_403510(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406569
        return function_406510(a1, v2);
    }
    // 0x40656b
    function_403510(a1);
    // UNREACHABLE
}
// Address range: 0x406580 - 0x406606
int64_t function_406580(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4065db
            function_403510(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406510(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4065c3
    if (a2 == 0) {
        // 0x4065e8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4065c8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4065db
        function_403510(a1);
        // UNREACHABLE
    }
    // 0x4065aa
    *(int64_t *)a2 = v2;
    return function_406510(a1, v2 * a3);
}
// Address range: 0x406610 - 0x406660
int64_t function_406610(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406610
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40665a
            function_403510(a1);
            // UNREACHABLE
        }
        // 0x406632
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406510(a1, v1);
    }
    if (a2 == 0) {
        // 0x406645
        *(int64_t *)a2 = 128;
        return function_406510(0, 128);
    }
    // 0x406658
    if (a2 < 0) {
        // 0x40665a
        function_403510(a1);
        // UNREACHABLE
    }
    // 0x406632
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406510(a1, v1);
}
// Address range: 0x406660 - 0x406677
int64_t function_406660(int64_t a1, int64_t a2) {
    // 0x406660
    return (int64_t)memset((int64_t *)function_4064b0(a1), 0, (int32_t)a1);
}
// Address range: 0x406680 - 0x4066ae
int64_t function_406680(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406687
    if ((int64_t)v1 < 0) {
        // 0x4066a9
        function_403510(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4066a9
        function_403510(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40669a
    if (mem != NULL) {
        // 0x4066a4
        return (int64_t)mem;
    }
    // 0x4066a9
    function_403510(nmemb);
    // UNREACHABLE
}
// Address range: 0x4066b0 - 0x4066d8
int64_t function_4066b0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4064b0(a2); // 0x4066bf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4066e0 - 0x4066f3
int64_t function_4066e0(int64_t str) {
    // 0x4066e0
    return function_4066b0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406700 - 0x4067e4
int64_t function_406700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x406700
    int64_t result2; // bp-64, 0x406700
    int64_t v1 = function_406820(a1, 0, a2 & 0xffffffff, (int64_t)&result2, (int64_t *)a5); // 0x406727
    int32_t v2 = v1; // 0x40672c
    int32_t * v3; // 0x406700
    int32_t * v4; // 0x406700
    if (v2 != 0) {
        int32_t * v5 = __errno_location(); // 0x4067aa
        v3 = v5;
        if (v2 == 1) {
            goto lab_0x406750;
        } else {
            // 0x4067b7
            v4 = v5;
            if (v2 == 3) {
                // 0x4067bc
                *v5 = 0;
                v4 = v5;
            }
            goto lab_0x406757;
        }
    } else {
        int64_t result = result2; // 0x406730
        if (result >= a3 && result <= a4) {
            // 0x406790
            return result;
        }
        int32_t * v6 = __errno_location(); // 0x40673f
        v3 = v6;
        if (result < 0x40000000) {
            int64_t v7 = result + 0x40000001; // 0x4067c8
            *v6 = v7 == 0 | v7 < 0 != ((v7 ^ result) & (result ^ -0x8000000000000000)) < 0 ? 75 : 34;
            v4 = v6;
            goto lab_0x406757;
        } else {
            goto lab_0x406750;
        }
    }
  lab_0x406750:
    // 0x406750
    *v3 = 75;
    v4 = v3;
    goto lab_0x406757;
  lab_0x406757:;
    int64_t v8 = function_405e80(a1); // 0x40675a
    int32_t v9 = *v4; // 0x40675f
    int32_t err_num = v9 == 22 ? 0 : v9; // 0x406775
    int32_t v10 = a7; // 0x406778
    error(v10 == 0 ? 1 : v10, err_num, "%s: %s", (char *)a6, (char *)v8);
    // 0x406790
    return result2;
}
// Address range: 0x4067f0 - 0x406811
int64_t function_4067f0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x4067f0
    return function_406700(a1, 10, (int64_t)a2, a3, (int64_t)a4, a5, (int64_t)a6);
}
// Address range: 0x406820 - 0x406f70
int64_t function_406820(int64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t * str) {
    uint32_t v1 = (int32_t)a3; // 0x406832
    if (v1 >= 37) {
        // 0x406f49
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        return &g84;
    }
    // 0x40683b
    int64_t v2; // bp-64, 0x406820
    int64_t v3 = a2 == 0 ? (int64_t)&v2 : (int64_t)a2; // 0x406848
    int32_t * v4 = __errno_location(); // 0x406852
    *v4 = 0;
    char * v5 = (char *)a1;
    int32_t v6 = __strtol_internal(v5, (char **)v3, v1, 0); // 0x40686a
    int64_t * v7 = (int64_t *)v3; // 0x40686f
    int64_t v8 = *v7; // 0x40686f
    int64_t v9; // 0x406820
    int64_t v10; // 0x406820
    int64_t v11; // 0x406820
    char v12; // 0x406820
    int64_t v13; // 0x406820
    int64_t v14; // 0x406820
    int64_t v15; // 0x406820
    if (v8 == a1) {
        // 0x4068c8
        if (str == NULL) {
            // 0x40689e
            return 4;
        }
        char c = *v5; // 0x4068d1
        if (c == 0) {
            // 0x40689e
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x4068ef
        v14 = 1;
        v10 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x40689e
            return 4;
        }
        goto lab_0x4068fd;
    } else {
        int32_t v16 = *v4; // 0x40687a
        int64_t v17 = 0; // 0x406880
        if (v16 != 0) {
            // 0x4068b0
            v17 = 1;
            if (v16 != 34) {
                // 0x40689e
                return 4;
            }
        }
        int64_t v18 = v6; // 0x40686a
        v13 = v18;
        v9 = v17;
        if (str == NULL) {
            goto lab_0x406897;
        } else {
            char c2 = *(char *)v8; // 0x40688a
            v13 = v18;
            v9 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x406997
                v14 = v18;
                v10 = v17;
                v12 = c2;
                v15 = v18;
                v11 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4068fd;
                } else {
                    goto lab_0x4069a5;
                }
            } else {
                goto lab_0x406897;
            }
        }
    }
  lab_0x4068fd:;
    int64_t v19 = v10;
    int64_t v20 = v14;
    unsigned char v21 = v12 - 69;
    int64_t v22 = 1024; // 0x406904
    int64_t v23 = 1; // 0x406904
    int64_t v24; // 0x406820
    int64_t v25; // 0x406820
    int64_t v26; // 0x406820
    int64_t v27; // 0x406820
    int64_t v28; // 0x406820
    int64_t v29; // 0x406820
    int64_t v30; // 0x406820
    int64_t v31; // 0x406820
    int64_t v32; // 0x406820
    int64_t v33; // 0x406820
    int64_t v34; // 0x406820
    int64_t v35; // 0x406820
    int64_t v36; // 0x406820
    int64_t v37; // 0x406820
    int64_t v38; // 0x406820
    int64_t v39; // 0x406820
    int64_t v40; // 0x406820
    int64_t v41; // 0x406820
    int64_t v42; // 0x406820
    if (v21 < 48) {
        // 0x406930
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x406910;
        } else {
            // 0x406944
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x406910;
            } else {
                // 0x406956
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x406910;
                    }
                    case 105: {
                        char v43 = *(char *)(v8 + 2); // 0x406f32
                        v22 = 1024;
                        v23 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x406910;
                    }
                    default: {
                        // 0x40696b
                        g85 = v21;
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
                                goto lab_0x406bf8;
                            }
                            case 70: {
                                goto lab_0x4069a5;
                            }
                            case 71: {
                                goto lab_0x406c60;
                            }
                            case 72: {
                                goto lab_0x4069a5;
                            }
                            case 73: {
                                goto lab_0x4069a5;
                            }
                            case 74: {
                                goto lab_0x4069a5;
                            }
                            case 75: {
                                goto lab_0x406a45;
                            }
                            case 76: {
                                goto lab_0x4069a5;
                            }
                            case 77: {
                                goto lab_0x406a88;
                            }
                            case 78: {
                                goto lab_0x4069a5;
                            }
                            case 79: {
                                goto lab_0x4069a5;
                            }
                            case 80: {
                                goto lab_0x406b28;
                            }
                            case 81: {
                                goto lab_0x4069a5;
                            }
                            case 82: {
                                goto lab_0x4069a5;
                            }
                            case 83: {
                                goto lab_0x4069a5;
                            }
                            case 84: {
                                goto lab_0x406b90;
                            }
                            case 85: {
                                goto lab_0x4069a5;
                            }
                            case 86: {
                                goto lab_0x4069a5;
                            }
                            case 87: {
                                goto lab_0x4069a5;
                            }
                            case 88: {
                                goto lab_0x4069a5;
                            }
                            case 89: {
                                goto lab_0x406cc8;
                            }
                            case 90: {
                                goto lab_0x406d30;
                            }
                            case 91: {
                                goto lab_0x4069a5;
                            }
                            case 92: {
                                goto lab_0x4069a5;
                            }
                            case 93: {
                                goto lab_0x4069a5;
                            }
                            case 94: {
                                goto lab_0x4069a5;
                            }
                            case 95: {
                                goto lab_0x4069a5;
                            }
                            case 96: {
                                goto lab_0x4069a5;
                            }
                            case 97: {
                                goto lab_0x4069a5;
                            }
                            case 98: {
                                goto lab_0x406af5;
                            }
                            case 99: {
                                goto lab_0x4069e8;
                            }
                            case 100: {
                                goto lab_0x4069a5;
                            }
                            case 101: {
                                goto lab_0x4069a5;
                            }
                            case 102: {
                                goto lab_0x4069a5;
                            }
                            case 103: {
                                goto lab_0x406c60;
                            }
                            case 104: {
                                goto lab_0x4069a5;
                            }
                            case 105: {
                                goto lab_0x4069a5;
                            }
                            case 106: {
                                goto lab_0x4069a5;
                            }
                            case 107: {
                                goto lab_0x406a45;
                            }
                            case 108: {
                                goto lab_0x4069a5;
                            }
                            case 109: {
                                goto lab_0x406a88;
                            }
                            case 110: {
                                goto lab_0x4069a5;
                            }
                            case 111: {
                                goto lab_0x4069a5;
                            }
                            case 112: {
                                goto lab_0x4069a5;
                            }
                            case 113: {
                                goto lab_0x4069a5;
                            }
                            case 114: {
                                goto lab_0x4069a5;
                            }
                            case 115: {
                                goto lab_0x4069a5;
                            }
                            case 116: {
                                goto lab_0x406b90;
                            }
                            default: {
                                goto lab_0x406910;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x406910;
    }
  lab_0x406897:
    // 0x406897
    *(int64_t *)a4 = v13;
    // 0x40689e
    return v9 & 0xffffffff;
  lab_0x406910:
    // 0x406910
    g81 = v12 - 66;
    v15 = v20;
    v11 = v19;
    v25 = v20;
    v32 = v23;
    v24 = v19;
    v38 = v23;
    switch (v12) {
        case 66: {
            // 0x4069e1
            v25 = 1024 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x4069e8;
        }
        case 69: {
            // 0x406be0
            v29 = v22;
            v36 = v23;
            v41 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406bf8;
        }
        case 71: {
            goto lab_0x406c60;
        }
        case 75: {
            goto lab_0x406a45;
        }
        case 77: {
            goto lab_0x406a70;
        }
        case 80: {
            // 0x406b10
            v27 = v22;
            v34 = v23;
            v40 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406b28;
        }
        case 84: {
            goto lab_0x406b78;
        }
        case 89: {
            // 0x406cb0
            goto lab_0x406cc8;
        }
        case 90: {
            // 0x406d18
            v30 = v22;
            v31 = v23;
            v39 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x406d30;
        }
        case 98: {
            goto lab_0x406af5;
        }
        case 99: {
            goto lab_0x4069e8;
        }
        case 103: {
            goto lab_0x406c60;
        }
        case 107: {
            goto lab_0x406a45;
        }
        case 109: {
            goto lab_0x406a70;
        }
        case 116: {
            goto lab_0x406b78;
        }
        case 119: {
            // 0x406a29
            v25 = 2 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x4069e8;
        }
        default: {
            goto lab_0x4069a5;
        }
    }
    // 0x406c48
    goto lab_0x406c60;
    // 0x406a30
    goto lab_0x406a45;
  lab_0x406a70:
    // 0x406a70
    v26 = v22;
    v33 = v23;
    v37 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x406a88;
  lab_0x406b78:
    // 0x406b78
    v28 = v22;
    v35 = v23;
    v42 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x406b90;
  lab_0x406af5:
    // 0x406af5
    v25 = 512 * v20;
    v32 = v38;
    v24 = v19;
    goto lab_0x4069e8;
  lab_0x4069e8:;
    int64_t v63 = v24;
    int64_t v64 = v32 + v8; // 0x4069e8
    *v7 = v64;
    v13 = v25;
    v9 = (*(char *)v64 != 0 ? v63 | 2 : v63) & 0xffffffff;
    goto lab_0x406897;
  lab_0x4069a5:
    // 0x4069a5
    *(int64_t *)a4 = v15;
    // 0x40689e
    return (v11 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x406bf8:;
    uint64_t v65 = v29;
    int64_t v66 = v20;
    int64_t v67 = -0x8000000000000000; // 0x406c31
    int64_t v68 = 1; // 0x406c31
    if (v66 >= v41) {
        // 0x406c10
        v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
        v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : 0;
    }
    int32_t v69 = 5; // 0x406c25
    int32_t v70 = v69; // 0x406c28
    int64_t v71 = v68; // 0x406c28
    int64_t v59 = v67; // 0x406c28
    int64_t v61 = v36; // 0x406c28
    int64_t v62 = v68; // 0x406c28
    while (v69 != 0) {
        // 0x406c2e
        v66 = v67;
        v67 = -0x8000000000000000;
        v68 = 1;
        if (v66 >= v41) {
            // 0x406c10
            v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
            v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : v71;
        }
        // 0x406c25
        v69 = v70 - 1;
        v70 = v69;
        v71 = v68;
        v59 = v67;
        v61 = v36;
        v62 = v68;
    }
    goto lab_0x406e60;
  lab_0x406c60:
    // 0x406c60
    while (true) {
        // 0x406c96
        int32_t v44; // 0x406820
        int32_t v45 = v44;
        int64_t v46; // 0x406820
        int64_t v47 = v46;
        int64_t v48 = -0x8000000000000000; // 0x406c99
        int64_t v49 = 1; // 0x406c99
        int64_t v50; // 0x406820
        uint64_t v51; // 0x406820
        if (v47 >= v51) {
            int64_t v52 = v50;
            uint64_t v53; // 0x406820
            int64_t v54 = v47 > 0x7fffffffffffffff / v53 ? 0x7fffffffffffffff : v47 * v53;
            int64_t v55 = v47 > 0x7fffffffffffffff / v53 ? 1 : v52;
            v48 = v54;
            v49 = v55;
        }
        int64_t v56 = v49;
        int64_t v57 = v48;
        int32_t v58 = v45 - 1; // 0x406c8d
        v46 = v57;
        v44 = v58;
        v50 = v56;
        v59 = v57;
        int64_t v60; // 0x406820
        v61 = v60;
        v62 = v56;
        if (v58 == 0) {
            // break -> 0x406e60
            break;
        }
    }
    goto lab_0x406e60;
  lab_0x406a45:;
    int64_t v76 = 1;
    v25 = -0x8000000000000000;
    v32 = v76;
    v24 = 1;
    int64_t v73; // 0x406820
    int64_t v74; // 0x406820
    int64_t v75; // 0x406820
    int64_t v72; // 0x406820
    if (v20 < -0x20000000000000) {
        goto lab_0x4069e8;
    } else {
        int64_t v77 = 1024;
        v73 = 0x7fffffffffffffff / v77;
        v75 = v77;
        v74 = v20;
        v72 = v76;
        goto lab_0x406a5c;
    }
  lab_0x406a88:
    // 0x406a88
    v25 = -0x8000000000000000;
    v32 = v33;
    v24 = 1;
    if (v20 < v37) {
        goto lab_0x4069e8;
    } else {
        int64_t v78 = 0x7fffffffffffffff / v26;
        v25 = 0x7fffffffffffffff;
        v32 = v33;
        v24 = 1;
        if (v20 > v78) {
            goto lab_0x4069e8;
        } else {
            int64_t v79 = v26 * v20; // 0x406aa8
            v25 = -0x8000000000000000;
            v32 = v33;
            v24 = 1;
            v73 = v78;
            v75 = v26;
            v74 = v79;
            v72 = v33;
            if (v79 < v37) {
                goto lab_0x4069e8;
            } else {
                goto lab_0x406a5c;
            }
        }
    }
  lab_0x406b28:;
    uint64_t v80 = v27;
    int64_t v81 = v20;
    int64_t v82 = -0x8000000000000000; // 0x406b61
    int64_t v83 = 1; // 0x406b61
    if (v40 <= v81) {
        // 0x406b40
        v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
        v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : 0;
    }
    int32_t v84 = 4; // 0x406b55
    int32_t v85 = v84; // 0x406b58
    int64_t v86 = v83; // 0x406b58
    v59 = v82;
    v61 = v34;
    v62 = v83;
    while (v84 != 0) {
        // 0x406b5e
        v81 = v82;
        v82 = -0x8000000000000000;
        v83 = 1;
        if (v40 <= v81) {
            // 0x406b40
            v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
            v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : v86;
        }
        // 0x406b55
        v84 = v85 - 1;
        v85 = v84;
        v86 = v83;
        v59 = v82;
        v61 = v34;
        v62 = v83;
    }
    goto lab_0x406e60;
  lab_0x406b90:;
    uint64_t v87 = v28;
    int64_t v88 = v20;
    int64_t v89 = -0x8000000000000000; // 0x406bc9
    int64_t v90 = 1; // 0x406bc9
    if (v42 <= v88) {
        // 0x406ba8
        v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
        v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : 0;
    }
    int32_t v91 = 3; // 0x406bbd
    int32_t v92 = v91; // 0x406bc0
    int64_t v93 = v90; // 0x406bc0
    v59 = v89;
    v61 = v35;
    v62 = v90;
    while (v91 != 0) {
        // 0x406bc6
        v88 = v89;
        v89 = -0x8000000000000000;
        v90 = 1;
        if (v42 <= v88) {
            // 0x406ba8
            v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
            v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : v93;
        }
        // 0x406bbd
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v59 = v89;
        v61 = v35;
        v62 = v90;
    }
    goto lab_0x406e60;
  lab_0x406cc8:
    // 0x406cc8
    while (true) {
        // 0x406cfe
        int32_t v94; // 0x406820
        int32_t v95 = v94;
        int64_t v96; // 0x406820
        int64_t v97 = v96;
        int64_t v98 = -0x8000000000000000; // 0x406d01
        int64_t v99 = 1; // 0x406d01
        int64_t v100; // 0x406820
        uint64_t v101; // 0x406820
        if (v101 <= v97) {
            int64_t v102 = v100;
            uint64_t v103; // 0x406820
            int64_t v104 = v97 > 0x7fffffffffffffff / v103 ? 0x7fffffffffffffff : v97 * v103;
            int64_t v105 = v97 > 0x7fffffffffffffff / v103 ? 1 : v102;
            v98 = v104;
            v99 = v105;
        }
        int64_t v106 = v99;
        int64_t v107 = v98;
        int32_t v108 = v95 - 1; // 0x406cf5
        v96 = v107;
        v94 = v108;
        v100 = v106;
        v59 = v107;
        int64_t v109; // 0x406820
        v61 = v109;
        v62 = v106;
        if (v108 == 0) {
            // break -> 0x406e60
            break;
        }
    }
    goto lab_0x406e60;
  lab_0x406d30:;
    uint64_t v110 = v30;
    int64_t v111 = v20;
    int64_t v112 = -0x8000000000000000; // 0x406d69
    int64_t v113 = 1; // 0x406d69
    if (v39 <= v111) {
        // 0x406d48
        v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
        v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : 0;
    }
    int32_t v114 = 6; // 0x406d5d
    int32_t v115 = v114; // 0x406d60
    int64_t v116 = v113; // 0x406d60
    v59 = v112;
    v61 = v31;
    v62 = v113;
    while (v114 != 0) {
        // 0x406d66
        v111 = v112;
        v112 = -0x8000000000000000;
        v113 = 1;
        if (v39 <= v111) {
            // 0x406d48
            v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
            v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : v116;
        }
        // 0x406d5d
        v114 = v115 - 1;
        v115 = v114;
        v116 = v113;
        v59 = v112;
        v61 = v31;
        v62 = v113;
    }
    goto lab_0x406e60;
  lab_0x406e60:
    // 0x406e60
    v25 = v59;
    v32 = v61;
    v24 = (v62 | v19) & 0xffffffff;
    goto lab_0x4069e8;
  lab_0x406a5c:
    // 0x406a5c
    v25 = 0x7fffffffffffffff;
    v32 = v72;
    v24 = 1;
    if (v73 >= v74) {
        // 0x406a65
        v25 = v74 * v75;
        v32 = v72;
        v24 = v19;
    }
    goto lab_0x4069e8;
}
// Address range: 0x406f70 - 0x4073b0
int64_t function_406f70(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x406f7e
    if (v1 >= 37) {
        // 0x40738b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g84;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x406fa2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x406fd2
    int64_t v4 = a1; // 0x406fd7
    char v5 = c; // 0x406fd7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x406fcc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x406fc8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x406fd9
    if (v5 == 45) {
        // 0x407015
        return 4;
    }
    // 0x406fde
    int64_t v7; // bp-64, 0x406f70
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x406f9e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x406fe6
    int64_t * v10 = (int64_t *)v8; // 0x406feb
    int64_t v11 = *v10; // 0x406feb
    char v12; // 0x406f70
    int64_t v13; // 0x406f70
    int64_t v14; // 0x406f70
    int64_t v15; // 0x406f70
    int64_t v16; // 0x406f70
    int64_t v17; // 0x406f70
    int64_t v18; // 0x406f70
    if (v11 == a1) {
        // 0x407048
        if (c == 0 || str == NULL) {
            // 0x407015
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x407069
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x407015
            return 4;
        }
        goto lab_0x407077;
    } else {
        int32_t v19 = *v2; // 0x406ff6
        int64_t v20 = 0; // 0x406ffc
        if (v19 != 0) {
            // 0x407030
            v20 = 1;
            if (v19 != 34) {
                // 0x407015
                return 4;
            }
        }
        int64_t v21 = v9; // 0x406fe6
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x407012;
        } else {
            char c2 = *(char *)v11; // 0x407005
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x407173
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407077;
                } else {
                    goto lab_0x407185;
                }
            } else {
                goto lab_0x407012;
            }
        }
    }
  lab_0x407077:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40707f
    int64_t v24 = 1; // 0x40707f
    int64_t v25; // 0x406f70
    int64_t v26; // 0x406f70
    int64_t v27; // 0x406f70
    int64_t v28; // 0x406f70
    int64_t v29; // 0x406f70
    int64_t v30; // 0x406f70
    int64_t v31; // 0x406f70
    int64_t v32; // 0x406f70
    int64_t v33; // 0x406f70
    int64_t v34; // 0x406f70
    int64_t v35; // 0x406f70
    int64_t v36; // 0x406f70
    int64_t v37; // 0x406f70
    int64_t v38; // 0x406f70
    int64_t v39; // 0x406f70
    int64_t v40; // 0x406f70
    int64_t v41; // 0x406f70
    int64_t v42; // 0x406f70
    int64_t v43; // 0x406f70
    int64_t v44; // 0x406f70
    if (v22 < 48) {
        // 0x407081
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4070ea;
        } else {
            // 0x407094
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4070ea;
            } else {
                // 0x4070b0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4070ea;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x407319
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4070ea;
                    }
                    default: {
                        // 0x4070c5
                        g86 = v22;
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
                                goto lab_0x40728b;
                            }
                            case 70: {
                                goto lab_0x407185;
                            }
                            case 71: {
                                goto lab_0x4072c3;
                            }
                            case 72: {
                                goto lab_0x407185;
                            }
                            case 73: {
                                goto lab_0x407185;
                            }
                            case 74: {
                                goto lab_0x407185;
                            }
                            case 75: {
                                goto lab_0x40714c;
                            }
                            case 76: {
                                goto lab_0x407185;
                            }
                            case 77: {
                                goto lab_0x40710e;
                            }
                            case 78: {
                                goto lab_0x407185;
                            }
                            case 79: {
                                goto lab_0x407185;
                            }
                            case 80: {
                                goto lab_0x407258;
                            }
                            case 81: {
                                goto lab_0x407185;
                            }
                            case 82: {
                                goto lab_0x407185;
                            }
                            case 83: {
                                goto lab_0x407185;
                            }
                            case 84: {
                                goto lab_0x407228;
                            }
                            case 85: {
                                goto lab_0x407185;
                            }
                            case 86: {
                                goto lab_0x407185;
                            }
                            case 87: {
                                goto lab_0x407185;
                            }
                            case 88: {
                                goto lab_0x407185;
                            }
                            case 89: {
                                goto lab_0x4071f6;
                            }
                            case 90: {
                                goto lab_0x4071bb;
                            }
                            case 91: {
                                goto lab_0x407185;
                            }
                            case 92: {
                                goto lab_0x407185;
                            }
                            case 93: {
                                goto lab_0x407185;
                            }
                            case 94: {
                                goto lab_0x407185;
                            }
                            case 95: {
                                goto lab_0x407185;
                            }
                            case 96: {
                                goto lab_0x407185;
                            }
                            case 97: {
                                goto lab_0x407185;
                            }
                            case 98: {
                                goto lab_0x40719f;
                            }
                            case 99: {
                                goto lab_0x407128;
                            }
                            case 100: {
                                goto lab_0x407185;
                            }
                            case 101: {
                                goto lab_0x407185;
                            }
                            case 102: {
                                goto lab_0x407185;
                            }
                            case 103: {
                                goto lab_0x4072c3;
                            }
                            case 104: {
                                goto lab_0x407185;
                            }
                            case 105: {
                                goto lab_0x407185;
                            }
                            case 106: {
                                goto lab_0x407185;
                            }
                            case 107: {
                                goto lab_0x40714c;
                            }
                            case 108: {
                                goto lab_0x407185;
                            }
                            case 109: {
                                goto lab_0x40710e;
                            }
                            case 110: {
                                goto lab_0x407185;
                            }
                            case 111: {
                                goto lab_0x407185;
                            }
                            case 112: {
                                goto lab_0x407185;
                            }
                            case 113: {
                                goto lab_0x407185;
                            }
                            case 114: {
                                goto lab_0x407185;
                            }
                            case 115: {
                                goto lab_0x407185;
                            }
                            case 116: {
                                goto lab_0x407228;
                            }
                            default: {
                                goto lab_0x4070ea;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4070ea;
    }
  lab_0x407012:
    // 0x407012
    *a4 = v16;
    // 0x407015
    return v13 & 0xffffffff;
  lab_0x4070ea:
    // 0x4070ea
    g87 = v12 - 66;
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
    int64_t v46; // 0x406f70
    switch (v12) {
        case 66: {
            // 0x4072e4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x407157;
            } else {
                // 0x4072f1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407128;
            }
        }
        case 69: {
            goto lab_0x40728b;
        }
        case 71: {
            goto lab_0x4072c3;
        }
        case 75: {
            goto lab_0x40714c;
        }
        case 77: {
            goto lab_0x40710e;
        }
        case 80: {
            goto lab_0x407258;
        }
        case 84: {
            goto lab_0x407228;
        }
        case 89: {
            goto lab_0x4071f6;
        }
        case 90: {
            goto lab_0x4071bb;
        }
        case 98: {
            goto lab_0x40719f;
        }
        case 99: {
            goto lab_0x407128;
        }
        case 103: {
            goto lab_0x4072c3;
        }
        case 107: {
            goto lab_0x40714c;
        }
        case 109: {
            goto lab_0x40710e;
        }
        case 116: {
            goto lab_0x407228;
        }
        case 119: {
            // 0x407190
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x407157;
            } else {
                // 0x407195
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407128;
            }
        }
        default: {
            goto lab_0x407185;
        }
    }
  lab_0x40728b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x4072a3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x4072af
    int64_t v51 = v48; // 0x4072b2
    int64_t v52 = v37; // 0x4072b2
    int64_t v53 = v49; // 0x4072b2
    int32_t v54 = v50; // 0x4072b2
    int64_t v55 = v49; // 0x4072b2
    while (v50 != 0) {
        // 0x4072a0
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
    goto lab_0x4071e4;
  lab_0x4072c3:
    // 0x4072c3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4072ce
        int128_t v56; // 0x4072c9
        uint128_t v57; // 0x4072c9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4072ce
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x406f70
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4072d3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4072d8
                v26 = v60;
                int64_t v61; // 0x406f70
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x407128;
  lab_0x40714c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40714f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x407128;
    } else {
        goto lab_0x407157;
    }
  lab_0x40710e:;
    int128_t v65 = v27; // 0x407114
    uint128_t v66 = v65 * (int128_t)v17; // 0x407114
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x407157;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x407119
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x407157;
        } else {
            // 0x40711e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x407128;
        }
    }
  lab_0x407258:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40726b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x407277
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40727a
    int64_t v73 = v70; // 0x40727a
    while (v71 != 0) {
        // 0x407268
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
    goto lab_0x4071e4;
  lab_0x407228:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40723b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x407247
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40724a
    int64_t v79 = v76; // 0x40724a
    while (v77 != 0) {
        // 0x407238
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
    goto lab_0x4071e4;
  lab_0x4071f6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40720b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x407217
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40721a
    int64_t v85 = v82; // 0x40721a
    while (v83 != 0) {
        // 0x407208
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
    goto lab_0x4071e4;
  lab_0x4071bb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4071d3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4071df
    int32_t v90 = v89; // 0x4071e2
    int64_t v91 = v88; // 0x4071e2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4071d0
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
    goto lab_0x4071e4;
  lab_0x40719f:
    // 0x40719f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x407157;
    } else {
        // 0x4071a8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x407128;
    }
  lab_0x407128:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40712d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x407012;
  lab_0x407185:
    // 0x407185
    *a4 = v18;
    // 0x407015
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407157:
    // 0x407157
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x407128;
  lab_0x4071e4:
    // 0x4071e4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x407128;
}
// Address range: 0x4073b0 - 0x40742b
int64_t function_4073b0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4073b7
    if (fileno(stream) < 0) {
        // 0x407417
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4073ca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4073fb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x407417
            return fclose(stream);
        }
    }
    // 0x4073cc
    if ((int32_t)function_407570(a1, v1) == 0) {
        // 0x407417
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4073d8
    int32_t v3 = *v2; // 0x4073e0
    int64_t result = fclose(stream); // 0x4073ee
    if (v3 != 0) {
        // 0x407420
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4073f0
    return result;
}
// Address range: 0x407430 - 0x407565
int64_t function_407430(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x407510
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40746c
    int64_t v2; // 0x407430
    if (g73 < 0) {
        int64_t v3 = function_407430(fd, 0, v1, a4); // 0x4074b4
        int64_t v4 = v3 & 0xffffffff; // 0x4074b9
        if ((int32_t)v3 < 0) {
            // 0x4074a0
            return v4 & 0xffffffff;
        }
        // 0x4074bf
        v2 = v4;
        if (g73 != -1) {
            // 0x4074a0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x407487
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x407496
            g73 = 1;
            // 0x4074a0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_407430(fd & 0xffffffff, 0, v1, a4); // 0x407547
        int64_t v7 = v6 & 0xffffffff; // 0x40754c
        if ((int32_t)v6 < 0) {
            // 0x4074a0
            return v7 & 0xffffffff;
        }
        // 0x407556
        g73 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4074cf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x4074da
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4074a0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x4074f2
    close(fd2);
    // 0x4074a0
    return 0xffffffff;
}
// Address range: 0x407570 - 0x4075b0
int64_t function_407570(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40758a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40758a
        return fflush(stream);
    }
    // 0x407598
    function_4075b0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4075b0 - 0x407607
int64_t function_4075b0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4075b0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4075ba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4075eb
    int64_t result = -1; // 0x4075f4
    if (v1 != -1) {
        // 0x4075f6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407602
    return result;
}
// Address range: 0x407610 - 0x4076ef
int64_t function_407610(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40761c
    uint32_t v2 = *v1; // 0x40761c
    int64_t v3 = a2 & 0xffffffff; // 0x407621
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407624
    uint64_t v5 = (int64_t)*v4; // 0x407624
    int64_t v6; // 0x407692
    if (v3 <= v5) {
      lab_0x40768c_2:
        // 0x40768c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407612
    int64_t v8 = v2; // 0x407610
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40768c
        goto lab_0x40768c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407648
    int64_t v17; // 0x407656
    int64_t * v18; // 0x407670
    int64_t * v19; // 0x407673
    int64_t v20; // 0x40767e
    int64_t v21; // 0x407656
    while ((v16 & 0xffffffff) > v10) {
        // 0x407653
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407670
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407687
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40768c
            goto lab_0x40768c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40768c
            goto lab_0x40768c_2;
        }
        // 0x407642
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4076cb
    int64_t * v23 = (int64_t *)v22; // 0x4076d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4076d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4076d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4076e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40763d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40768c
            goto lab_0x40768c_2;
        }
        // 0x407642
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407653
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407670
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407687
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40768c
                goto lab_0x40768c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40768c
                goto lab_0x40768c_2;
            }
            // 0x407642
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4076b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4076d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4076e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40768c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4076f0 - 0x407d0c
int64_t function_4076f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40770f
    int64_t v2 = *v1; // 0x40770f
    char * str2 = (char *)v2; // 0x40771c
    char c = *str2; // 0x40771c
    int64_t v3 = v2; // 0x407748
    int64_t v4 = 0; // 0x4076f0
    int32_t v5; // 0x4076f0
    int64_t v6; // 0x4076f0
    int64_t v7; // 0x4076f0
    int64_t v8; // 0x4076f0
    int64_t v9; // 0x4076f0
    int64_t v10; // 0x4076f0
    int64_t v11; // 0x4076f0
    int64_t v12; // 0x4076f0
    int64_t v13; // 0x4076f0
    int64_t str3; // 0x4076f0
    int64_t v14; // 0x4076f0
    int64_t v15; // 0x4076f0
    int64_t v16; // 0x4076f0
    int64_t v17; // 0x4076f0
    int32_t v18; // 0x4076f0
    int32_t v19; // 0x4076f0
    int32_t v20; // 0x4076f0
    int32_t v21; // 0x4076f0
    int32_t v22; // 0x4076f0
    int32_t v23; // 0x4076f0
    int32_t v24; // 0x4076f0
    int32_t v25; // 0x4076f0
    int32_t v26; // 0x4076f0
    int32_t v27; // 0x4076f0
    int32_t v28; // 0x4076f0
    int32_t v29; // 0x4076f0
    int64_t nmemb; // 0x4076f0
    int64_t v30; // 0x4076f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40774c
            while (v31 != 0 == (v31 != 61)) {
                // 0x407748
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407758
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40775e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407728
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40778c
                int64_t v34; // 0x4076f0
                int64_t v35; // 0x4076f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x407795
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x407910;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4077a6
                int64_t v37 = *(int64_t *)v36; // 0x4077aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407780
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407795
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x407910;
                        }
                    }
                    // 0x4077a6
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
                  lab_0x4077f6:
                    // 0x4077f6
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
                        goto lab_0x407850;
                    } else {
                        if (v11 == 0) {
                            // 0x4079c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407850;
                        } else {
                            if (v39 == 0) {
                                // 0x407970
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40781a;
                                } else {
                                    // 0x40797c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40781a;
                                    } else {
                                        // 0x40798a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40781a;
                                        } else {
                                            goto lab_0x407850;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40781a;
                            }
                        }
                    }
                }
              lab_0x407861:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x407a36
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407be2
                            flockfile(g39);
                            int64_t v41 = *v1; // 0x407c02
                            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x407c4f
                            int64_t v43 = (int64_t)g39;
                            int64_t v44 = v43; // 0x407c69
                            int64_t v45; // 0x407c6b
                            if (*(char *)v42 != 0) {
                                // 0x407c6b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g39;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x407c63
                            while (v17 + nmemb != v42) {
                                // 0x407c65
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x407c6b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g39;
                                }
                                // 0x407c58
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x407c90
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g39);
                            v40 = *v1;
                        } else {
                            // 0x407a44
                            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x407b9f
                        free((int64_t *)v17);
                    }
                    // 0x407a99
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x407ab0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40795e
                    return 63;
                }
                // 0x407880
                v5 = v39;
                if (v13 != 0) {
                    // 0x407904
                    v35 = v13;
                    v34 = v25;
                  lab_0x407910:;
                    int32_t * v49 = (int32_t *)a7; // 0x407920
                    uint32_t v50 = *v49; // 0x407920
                    int64_t v51 = v50; // 0x407920
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40792a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x407933
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x407b5f
                                __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x407b0a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40795e
                            return 63;
                        }
                        // 0x4079a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x407cbf
                                    __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x407bbd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407bd0
                                // 0x40795e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x407ace
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x407ae2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40794b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40794e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407952
                    int64_t result = v59; // 0x407958
                    if (v58 != 0) {
                        // 0x40795a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40795e
                    return result;
                }
            } else {
                // 0x40775e
                v5 = v32;
            }
            // break -> 0x407885
            break;
        }
    }
    // 0x407885
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40789d
        if (*(char *)(v60 + 1) != 45) {
            // 0x4078a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40795e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4079e9
        __fprintf_chk(g39, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4078d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4078e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407850:
    // 0x407850
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407850
    int64_t v63 = *(int64_t *)v62; // 0x407854
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407861
        goto lab_0x407861;
    }
    goto lab_0x4077f6;
  lab_0x40781a:
    // 0x40781a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4076f0
    int32_t v65; // 0x4076f0
    int32_t v66; // 0x4076f0
    if (v27 != 0) {
        goto lab_0x407850;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4079d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407850;
            } else {
                goto lab_0x407841;
            }
        } else {
            // 0x407835
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x407b2c
                int64_t v67 = (int64_t)mem; // 0x407b2c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407850;
                } else {
                    // 0x407b3f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407841;
                }
            } else {
                goto lab_0x407841;
            }
        }
    }
  lab_0x407841:
    // 0x407841
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407850;
}
// Address range: 0x407d10 - 0x4082d6
int64_t function_407d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407d31
    if (v3 < 1) {
        // 0x407eee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x407d2d
    int32_t v5 = *(int32_t *)a7; // 0x407d39
    uint64_t v6 = a1 & 0xffffffff; // 0x407d3b
    int64_t v7 = v2; // 0x407d40
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x407d43
    *v8 = 0;
    int64_t v9; // 0x407d10
    int64_t v10; // 0x407d10
    int64_t v11; // 0x407d10
    int64_t v12; // 0x407d10
    int64_t str; // 0x407d10
    int64_t v13; // 0x407d10
    int64_t v14; // 0x407d10
    int64_t v15; // 0x407d10
    int64_t v16; // 0x407d10
    int64_t v17; // 0x407d10
    int32_t v18; // 0x407d10
    char v19; // 0x407d10
    if (v5 == 0) {
        // 0x407f28
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x407d5a;
    } else {
        // 0x407d53
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407da0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407da3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407e68;
            } else {
                int64_t v22 = v7 + 1; // 0x407db6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407dc6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x407e7c;
                } else {
                    goto lab_0x407dd8;
                }
            }
        } else {
            goto lab_0x407d5a;
        }
    }
  lab_0x407d5a:
    // 0x407d5a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x407d60
    *v24 = 0;
    int64_t v25; // 0x407d10
    int64_t v26; // 0x407d10
    int64_t v27; // 0x407d10
    switch (*(char *)&v2) {
        case 45: {
            // 0x407e50
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407e5d;
        }
        case 43: {
            // 0x408160
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407e5d;
        }
        default: {
            // 0x407d7c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4080df
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4081f8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x407e5d;
                } else {
                    // 0x4080ed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x407d8a;
                }
            } else {
                goto lab_0x407d8a;
            }
        }
    }
  lab_0x407e68:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x407e6f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407dd8;
    } else {
        goto lab_0x407e7c;
    }
  lab_0x407d8a:
    // 0x407d8a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x407e5d;
  lab_0x407e5d:
    // 0x407e5d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407e68;
  lab_0x407dd8:;
    uint32_t v30 = *(int32_t *)a7; // 0x407dd8
    int64_t v31 = v30; // 0x407dd8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x407dda
    if ((int64_t)*v32 > v31) {
        // 0x407ddf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407de2
    if (*v33 > v30) {
        // 0x407de7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x407dea
    int64_t v35 = v31; // 0x407dee
    int64_t v36 = v15; // 0x407dee
    int64_t v37; // 0x407d10
    int64_t v38; // 0x407d10
    int64_t v39; // 0x407d10
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x407f58
        int64_t v41 = v40; // 0x407f58
        v2 = v41;
        int64_t v42; // 0x407d10
        if (*v33 == v40) {
            // 0x408140
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408148
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407f64
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407f68
                function_407610(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407f78
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407f81
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x407f8a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407fa1
            int64_t v47 = v45 & 0xffffffff; // 0x407fa5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x407fae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407fb4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407fb6;
                }
            }
            int64_t v48 = v47 + 1; // 0x407f90
            int64_t v49 = v48 & 0xffffffff; // 0x407f90
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407fa1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x407fae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407fb4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407fb6;
                    }
                }
                // 0x407f90
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408158
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407fb6;
    } else {
        goto lab_0x407df4;
    }
  lab_0x407e7c:
    // 0x407e7c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x407e7f
    int64_t v51 = v12; // 0x407e7f
    int64_t v52 = v14; // 0x407e7f
    if (*(char *)v10 == 0) {
        goto lab_0x407dd8;
    } else {
        goto lab_0x407e85;
    }
  lab_0x407df4:;
    int32_t v53 = v35; // 0x407df4
    int64_t v54; // 0x407d10
    int64_t v55; // 0x407d10
    int64_t v56; // 0x407d10
    int64_t v57; // 0x407d10
    int64_t v58; // 0x407d10
    int64_t v59; // 0x407d10
    char * v60; // 0x407d10
    int64_t v61; // 0x407d10
    int64_t v62; // 0x407e09
    int64_t v63; // 0x407d10
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407f43
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407f46;
    } else {
        // 0x407dfc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407d10
        int64_t v66 = v65 ? -1 : 1; // 0x407e10
        int64_t v67 = (int64_t)"--"; // 0x407d10
        int64_t v68 = v62; // 0x407d10
        int64_t v69 = 3; // 0x407e10
        unsigned char v70 = *(char *)v68; // 0x407e10
        char v71 = *(char *)v67; // 0x407e10
        char v72 = v71; // 0x407e10
        bool v73 = false; // 0x407e10
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
            // 0x407f00
            if (*(char *)v62 == 45) {
                // 0x407fc0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407fc0
                if (c == 0) {
                    goto lab_0x407f0a;
                } else {
                    // 0x407fcd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408050;
                    } else {
                        if (c == 45) {
                            // 0x408233
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4080a5;
                        } else {
                            // 0x407fde
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408050;
                            } else {
                                // 0x407fe3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408004;
                                } else {
                                    // 0x407fea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408050;
                                    } else {
                                        goto lab_0x408004;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x407f0a;
            }
        } else {
            uint32_t v75 = *v33; // 0x407e20
            v2 = v75;
            int32_t v76 = *v32; // 0x407e23
            int64_t v77 = v35 + 1; // 0x407e26
            int32_t v78 = v77; // 0x407e29
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408190
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407e37
                    function_407610(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407e45
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407f46;
        }
    }
  lab_0x407e85:;
    // 0x407e85
    int64_t v79; // bp-104, 0x407d10
    int64_t v80 = &v79; // 0x407d1a
    int64_t v81 = v50 + 1; // 0x407e85
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x407e8c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407e91
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407e95
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407e99
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407ea1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407ea6
    int32_t c2 = v84; // 0x407ea6
    char * found_char_pos = strchr(str2, c2); // 0x407ea6
    int64_t v87 = *v82; // 0x407eab
    v2 = v87;
    int64_t v88 = *v85; // 0x407eb5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407ec0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4081b0
            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40817d
        *(int32_t *)(v1 + 8) = c2;
        // 0x407eee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407ea6
    char v91 = *(char *)(v90 + 1); // 0x407edb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407e95
        if (v91 != 58) {
            // 0x407eee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408104
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408208
                *v8 = 0;
            } else {
                // 0x4081ec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40812e
            *v83 = 0;
            // 0x407eee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40810e
        if (v93 != 0) {
            // 0x4081a0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40812e
            *v83 = 0;
            // 0x407eee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408121
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40812e
            *v83 = 0;
            // 0x407eee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40826a
            __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40821a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408221
        // 0x40812e
        *v83 = 0;
        // 0x407eee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x408079
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40807b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4082a0
                __fprintf_chk(g39, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408251
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408258
            // 0x407eee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408086
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40808a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4080a5;
  lab_0x407fb6:
    // 0x407fb6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407df4;
  lab_0x4080a5:;
    int64_t v99 = function_4076f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4080c3
    // 0x407eee
    return v99 & 0xffffffff;
  lab_0x407f46:;
    int32_t v100 = v55; // 0x407f46
    if (v100 != (int32_t)v59) {
        // 0x407f4a
        *(int32_t *)a7 = v100;
    }
    // 0x407eee
    return 0xffffffff;
  lab_0x407f0a:
    // 0x407f0a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407f11
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x407eee
    return v99 & 0xffffffff;
  lab_0x408050:
    // 0x408050
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407e85;
  lab_0x408004:
    // 0x408004
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4076f0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40802a
    if ((int32_t)v101 != -1) {
        // 0x407eee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40803f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408050;
}
// Address range: 0x4082e0 - 0x408336
int64_t function_4082e0(int64_t a1) {
    // 0x4082e0
    *(int32_t *)&g74 = g34;
    *(int32_t *)&g75 = g33;
    int64_t v1; // 0x4082e0
    int64_t result = function_407d10(v1, v1, v1, v1, v1, v1, &g74, a1 & 0xffffffff); // 0x408306
    g34 = *(int32_t *)&g74;
    g79 = (char *)g77;
    *(int32_t *)&g32 = g76;
    return result;
}
// Address range: 0x408340 - 0x408358
int64_t function_408340(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408340
    return function_4082e0(1);
}
// Address range: 0x408360 - 0x408373
int64_t function_408360(int32_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x408360
    return function_4082e0(0);
}
// Address range: 0x408380 - 0x408395
int64_t function_408380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408380
    return function_407d10(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4083a0 - 0x4083b6
int64_t function_4083a0(void) {
    // 0x4083a0
    return function_4082e0(0);
}
// Address range: 0x4083c0 - 0x4083d8
int64_t function_4083c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4083c0
    return function_407d10(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4083e0 - 0x40845a
int64_t function_4083e0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4083eb
    int64_t v2 = (int64_t)&g13; // 0x4083eb
    int32_t * pwc; // 0x4083e0
    int64_t v3; // 0x4083e0
    int64_t n; // 0x4083e0
    if (a2 == 0) {
        goto lab_0x408432;
    } else {
        // 0x4083ed
        if (a3 == 0) {
            // 0x408418
            return -2;
        }
        // 0x4083f9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408432;
        } else {
            goto lab_0x408404;
        }
    }
  lab_0x408432:
    // 0x408432
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4083e0
    pwc = (int32_t *)&v4;
    goto lab_0x408404;
  lab_0x408404:;
    char * wstr = (char *)v3; // 0x40840a
    int64_t ps; // 0x4083e0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40840a
    int64_t result = v5; // 0x40840a
    if (v5 < 0xfffffffe) {
        // 0x408418
        return result;
    }
    int64_t result2 = result; // 0x408449
    if ((char)function_416310(0, v3) == 0) {
        // 0x40844b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408418
    return result2;
}
// Address range: 0x408460 - 0x408564
int64_t function_408460(int64_t result, uint64_t a2, int64_t a3) {
    // 0x408460
    if (a3 == 0) {
        // 0x408499
        return 0;
    }
    int64_t v1 = result; // 0x40846c
    int64_t v2 = a3; // 0x40846c
    int64_t result2; // 0x408460
    if (result % 8 != 0) {
        char v3 = a2; // 0x40846e
        int64_t v4 = result; // 0x408471
        if ((char)result == v3) {
            // 0x408499
            return result;
        }
        int64_t v5 = a3; // 0x408471
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x408480
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x4084a0;
            }
            // 0x408486
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x408499
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x408499
        return result2;
    }
  lab_0x4084a0:;
    int64_t result3 = v1; // 0x4084cd
    int64_t v6 = v2; // 0x4084cd
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x4084af
        int64_t v8 = 0x10000 * v7 | v7; // 0x4084bc
        int64_t v9 = 0x100000000 * v8 | v8; // 0x4084c6
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x4084e6
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x408515
            int64_t v12 = v1 + 8; // 0x408519
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x408503
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40852c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x408523
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x408499
                return 0;
            }
        }
    }
  lab_0x40852c:;
    char v14 = a2; // 0x40852c
    if (*(char *)result3 == v14) {
        // 0x408499
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x408540
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x408499
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x408499
    return result2;
}
// Address range: 0x408570 - 0x4085b3
int64_t function_408570(int64_t a1, int64_t a2, int64_t a3) {
    bool v1 = a1 == 0 | a2 == 0;
    if (v1) {
        // 0x40858a
        return 0;
    }
    // 0x408580
    int64_t v2; // 0x408570
    int64_t result = v2 & -256 | (int64_t)v1; // 0x40857c
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x408580
    if (v3 != *(int64_t *)(a2 + 8)) {
        // 0x40858a
        return result;
    }
    int64_t v4 = v3; // 0x4085a2
    v4--;
    int64_t result2 = 1; // 0x4085a6
    while (v4 >= 0) {
        int64_t v5 = 8 * v4; // 0x408598
        int64_t v6 = *(int64_t *)(*(int64_t *)(a1 + 16) + v5); // 0x40859c
        result2 = result;
        if (v6 != *(int64_t *)(*(int64_t *)(a2 + 16) + v5)) {
            // break -> 0x40858a
            break;
        }
        v4--;
        result2 = 1;
    }
    // 0x40858a
    return result2;
}
// Address range: 0x4085c0 - 0x40862b
int64_t function_4085c0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a1; // 0x4085cd
    int64_t result; // 0x4085c0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x4085d3
        v1 = v3;
        if (v3 == 0) {
            int64_t v4 = *(int64_t *)(v2 + 16); // 0x4085dc
            v1 = v4;
            if (v4 == 0) {
                // 0x4085e5
                result = v4;
                if ((int32_t)v4 != 0) {
                    // break -> 0x408626
                    break;
                }
                int64_t v5 = *(int64_t *)v2; // 0x4085f8
                result = v4;
                if (v5 == 0) {
                    // break -> 0x408626
                    break;
                }
                int64_t v6 = v2;
                int64_t v7 = v5;
                int64_t v8 = *(int64_t *)(v7 + 16); // 0x408600
                v1 = v8;
                while (v8 == 0 || v8 == v6) {
                    // 0x408619
                    result = v8;
                    if ((int32_t)v8 != 0) {
                        return result;
                    }
                    int64_t v9 = *(int64_t *)v7; // 0x4085f8
                    result = v8;
                    if (v9 == 0) {
                        return result;
                    }
                    v6 = v7;
                    v7 = v9;
                    v8 = *(int64_t *)(v7 + 16);
                    v1 = v8;
                }
            }
        }
    }
  lab_0x408626_2:
    // 0x408626
    return result;
}
// Address range: 0x408630 - 0x40875f
int64_t function_408630(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x408630
    uint64_t v3 = *v2; // 0x408630
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x4086c0
        *(char *)(v1 + 8) = 2;
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40863e
    char v5 = *(char *)(v4 + v3); // 0x408649
    *(char *)a1 = v5;
    if (*(int32_t *)(a2 + 144) >= 2) {
        // 0x408652
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x408658
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                // 0x408697
                *(char *)(v1 + 8) = 1;
                return 1;
            }
        }
    }
    switch (v5) {
        case 92: {
            if (a3 % 2 == 0) {
                // 0x408697
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            int64_t v6 = v3 + 1;
            if (v6 >= *(int64_t *)(a2 + 88)) {
                // 0x408697
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            // 0x408710
            *v2 = v6;
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = *(char *)(v4 + v6);
            return 1;
        }
        case 91: {
            uint64_t v7 = v3 + 1;
            if (v7 >= *(int64_t *)(a2 + 88)) {
                // 0x4086ee
                *(char *)(v1 + 8) = 1;
                *(char *)a1 = 91;
                return 1;
            }
            char v8 = *(char *)(v4 + v7); // 0x4086da
            *(char *)a1 = v8;
            switch (v8) {
                case 58: {
                    if ((a3 & 4) != 0) {
                        // 0x408755
                        *(char *)(v1 + 8) = 30;
                        return 2;
                    }
                    // 0x4086ee
                    *(char *)(v1 + 8) = 1;
                    *(char *)a1 = 91;
                    return 1;
                }
                case 61: {
                    // 0x408740
                    *(char *)(v1 + 8) = 28;
                    return 2;
                }
                case 46: {
                    // 0x408730
                    *(char *)(v1 + 8) = 26;
                    return 2;
                }
            }
            // 0x4086ee
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = 91;
            return 1;
        }
        case 93: {
            // 0x408700
            *(char *)(v1 + 8) = 21;
            return 1;
        }
    }
    if (v5 == 94) {
        // 0x40867b
        *(char *)(v1 + 8) = 25;
        return 1;
    }
    if (v5 == 45) {
        // 0x4086ad
        *(char *)(v1 + 8) = 22;
        return 1;
    }
    // 0x408697
    *(char *)(v1 + 8) = 1;
    return 1;
}
// Address range: 0x408760 - 0x40877d
int64_t function_408760(int64_t a1, int64_t a2) {
    // 0x408760
    if (*(char *)(a2 + 48) != 17 || *(int64_t *)(a2 + 40) != a1) {
        // 0x408766
        return 0;
    }
    char * v1 = (char *)(a2 + 50); // 0x408776
    *v1 = *v1 | 8;
    return 0;
}
// Address range: 0x408780 - 0x40898f
int64_t function_408780(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x408795
    uint64_t v2 = 0x100000000 * a2 >> 32; // 0x4087a5
    int64_t v3 = *(int64_t *)(v1 + 48) + 24 * a4; // 0x4087ad
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x4087b1
    int64_t v5 = *v4; // 0x4087b1
    if (v5 < 1) {
        // 0x40895d
        return (int32_t)v2 >> 1;
    }
    int64_t v6 = 1 << a3 % 64;
    int32_t v7 = v2;
    int64_t v8 = v5; // 0x4087fe
    int64_t v9 = 0; // 0x4087fe
    int64_t v10; // 0x408809
    int64_t v11; // 0x408780
    int64_t v12; // 0x408780
    int64_t v13; // 0x408780
    int64_t v14; // 0x408780
    while (true) {
      lab_0x408813_2:
        // 0x408813
        v13 = v9;
        v10 = v8;
        int64_t v15 = *(int64_t *)(*(int64_t *)(v3 + 16) + 8 * v13); // 0x408817
        int64_t v16 = 16 * v15 + *(int64_t *)v1; // 0x408822
        char v17 = *(char *)(v16 + 8); // 0x408825
        if (v17 == 8) {
            if (v7 % 2 != 0) {
                // 0x408860
                if (*(int64_t *)v16 == a3) {
                    // 0x408840
                    return 0xffffffff;
                }
            }
            goto lab_0x408805;
        } else {
            if (v17 != 9) {
                if (a5 == -1 || v17 != 4) {
                    goto lab_0x408805;
                } else {
                    // 0x40888a
                    v14 = 24 * v15 + 16;
                    v11 = *(int64_t *)(a1 + 216) + 40 * a5;
                    while (true) {
                      lab_0x4088c0:
                        // 0x4088c0
                        v12 = v11;
                        if (*(int64_t *)v12 != v15) {
                            goto lab_0x408930;
                        } else {
                            if (a3 > 63) {
                                goto lab_0x4088d9;
                            } else {
                                // 0x4088cc
                                if ((v6 & (int64_t)*(int16_t *)(v12 + 34)) == 0) {
                                    goto lab_0x408930;
                                } else {
                                    goto lab_0x4088d9;
                                }
                            }
                        }
                    }
                  lab_0x40893c:;
                    int64_t v18 = v13 + 1; // 0x40894f
                    uint64_t v19 = *v4; // 0x408953
                    v8 = v19;
                    v9 = v18;
                    if (v19 <= v18) {
                        // break -> 0x40895d
                        break;
                    }
                    goto lab_0x408813_2;
                }
            } else {
                if ((v7 & 2) != 0) {
                    // 0x40883b
                    if (*(int64_t *)v16 == a3) {
                        // 0x408840
                        return 0;
                    }
                }
                goto lab_0x408805;
            }
        }
    }
  lab_0x40895d:
    // 0x40895d
    return v7 >> 1;
  lab_0x408930:
    // 0x408930
    v11 = v12 + 40;
    if (*(char *)(v12 + 32) == 0) {
        // break -> 0x40893c
        goto lab_0x40893c;
    }
    goto lab_0x4088c0;
  lab_0x4088d9:;
    int64_t v20 = *(int64_t *)*(int64_t *)(v14 + *(int64_t *)(v1 + 40)); // 0x4088e2
    if (v20 == a4) {
        // 0x408978
        return -((v2 % 2)) & 0xffffffff;
    }
    int32_t v21 = function_408780(a1, v2 & 0xffffffff, a3, v20, a5); // 0x408903
    if (v21 == -1) {
        // 0x408840
        return 0xffffffff;
    }
    // 0x40890c
    if ((v7 & 2) != 0 == v21 == 0) {
        // 0x408840
        return 0;
    }
    if (a3 <= 63) {
        int16_t * v22 = (int16_t *)(v12 + 34); // 0x408927
        *v22 = *v22 & -1 - (int16_t)v6;
    }
    goto lab_0x408930;
  lab_0x408805:;
    int64_t v23 = v13 + 1; // 0x408805
    v8 = v10;
    v9 = v23;
    if (v10 <= v23) {
        // break -> 0x40895d
        goto lab_0x40895d;
    }
    goto lab_0x408813;
  lab_0x408813:
    // 0x408813
    goto lab_0x408813_2;
}
// Address range: 0x408990 - 0x4089f6
int64_t function_408990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a1 + 216) + 40 * a2; // 0x40899b
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x40899f
    if (v2 > a5) {
        // 0x4089c6
        return 0xffffffff;
    }
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x4089a8
    if (v3 < a5) {
        // 0x4089c6
        return 1;
    }
    if (v3 == a5) {
        // 0x4089d3
        return function_408780(a1, (int64_t)(v2 == a5) | 2, a3, a4, a6);
    }
    // 0x4089bf
    if (v2 == a5) {
        // 0x4089d3
        return function_408780(a1, 1, a3, a4, a6);
    }
    // 0x4089c6
    return 0;
}
// Address range: 0x408a00 - 0x408a9c
int64_t function_408a00(int64_t a1, uint64_t a2) {
    // 0x408a00
    if (*(int32_t *)(a1 + 144) >= 2) {
        if (a2 >= 0x2000000000000000) {
            // 0x408a90
            return 12;
        }
        int64_t * v1 = (int64_t *)(a1 + 16); // 0x408a24
        int32_t v2 = a2;
        int64_t * mem = realloc((int64_t *)*v1, 4 * v2); // 0x408a30
        if (mem == NULL) {
            // 0x408a90
            return 12;
        }
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x408a3a
        int64_t v4 = *v3; // 0x408a3a
        *v1 = (int64_t)mem;
        if (v4 != 0) {
            int64_t * mem2 = realloc((int64_t *)v4, 8 * v2); // 0x408a4f
            if (mem2 == NULL) {
                // 0x408a90
                return 12;
            }
            // 0x408a59
            *v3 = (int64_t)mem2;
        }
    }
    // 0x408a5d
    if (*(char *)(a1 + 139) == 0) {
        // 0x408a66
        *(int64_t *)(a1 + 64) = a2;
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x408a78
    int64_t * mem3 = realloc((int64_t *)*v5, (int32_t)a2); // 0x408a7f
    if (mem3 == NULL) {
        // 0x408a90
        return 12;
    }
    // 0x408a89
    *v5 = (int64_t)mem3;
    // 0x408a66
    *(int64_t *)(a1 + 64) = a2;
    return 0;
}
// Address range: 0x408aa0 - 0x408b04
int64_t function_408aa0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408aac
    int64_t v2 = *v1; // 0x408aac
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x408ab0
    int64_t v4 = *v3; // 0x408ab0
    int64_t v5 = v4; // 0x408ab7
    int64_t v6 = v2; // 0x408ab7
    if (v2 == a1) {
        int64_t v7 = a1 + 1; // 0x408ad8
        *(int64_t *)a1 = 2 * v7;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)v7); // 0x408aea
        if (mem == NULL) {
            // 0x408aca
            return 0;
        }
        // 0x408af4
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    // 0x408ab9
    *v1 = v6 + 1;
    *(int64_t *)(8 * v6 + v5) = a2;
    // 0x408aca
    return 1;
}
// Address range: 0x408b10 - 0x408c3c
int64_t function_408b10(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x408b48
        abort();
        // UNREACHABLE
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408b24
    int64_t v2 = *v1; // 0x408b24
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x408b28
    int64_t v4 = *v3; // 0x408b28
    if (v2 == 0) {
        // 0x408b31
        *(int64_t *)v4 = a2;
        *v1 = *v1 + 1;
        // 0x408b3e
        return 1;
    }
    int64_t v5 = v4; // 0x408b83
    int64_t v6 = v2; // 0x408b83
    if (v2 == a1) {
        // 0x408c10
        *(int64_t *)a1 = 2 * a1;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)a1); // 0x408c1e
        if (mem == NULL) {
            // 0x408b3e
            return 0;
        }
        // 0x408c28
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    int64_t v7 = 8 * v6; // 0x408b89
    int64_t v8; // 0x408b10
    if (*(int64_t *)v5 > a2) {
        // 0x408b96
        v8 = v7;
        if (v6 >= 1) {
            int64_t v9 = v7 + v5;
            int64_t v10 = v9 - 8; // 0x408ba0
            *(int64_t *)v9 = *(int64_t *)v10;
            v8 = 0;
            while (v10 != v5) {
                // 0x408ba0
                v9 = v10;
                v10 = v9 - 8;
                *(int64_t *)v9 = *(int64_t *)v10;
                v8 = 0;
            }
        }
    } else {
        int64_t v11 = v5 - 8; // 0x408bd0
        int64_t v12 = *(int64_t *)(v7 + v11); // 0x408bd0
        v8 = v7;
        if (v12 > a2) {
            *(int64_t *)(v7 + v5) = v12;
            int64_t v13 = v7 - 8; // 0x408be4
            uint64_t v14 = *(int64_t *)(v13 + v11); // 0x408be8
            v8 = v13;
            int64_t v15 = v13; // 0x408bf0
            while (v14 > a2) {
                // 0x408be0
                *(int64_t *)(v15 + v5) = v14;
                v13 = v15 - 8;
                v14 = *(int64_t *)(v13 + v11);
                v8 = v13;
                v15 = v13;
            }
        }
    }
    // 0x408bb3
    *(int64_t *)(v8 + v5) = a2;
    *v1 = *v1 + 1;
    // 0x408b3e
    return 1;
}
// Address range: 0x408c40 - 0x408d3b
int64_t function_408c40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 32; // 0x408c4e
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x408c5b
    int64_t v3 = *v2; // 0x408c5b
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)v1 = v3;
    int64_t size = 8 * v3; // 0x408c6e
    int64_t * mem = malloc((int32_t)size); // 0x408c76
    *(int64_t *)(a2 + 48) = (int64_t)mem;
    if (mem == NULL) {
        // 0x408cbe
        return 12;
    }
    if (v3 >= 0 == (v3 != 0)) {
        int64_t v4 = 0; // 0x408c90
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4); // 0x408c9e
        int64_t v6 = size; // 0x408cb0
        int64_t v7; // 0x408cb5
        if ((*(char *)(size + 8 + 16 * v5) & 8) == 0) {
            // 0x408cb2
            v7 = function_408aa0(v1, v5);
            v6 = v1;
            if ((char)v7 == 0) {
                // 0x408cbe
                return 12;
            }
        }
        // 0x408c90
        v4++;
        int64_t v8 = v6; // 0x408c98
        while (*v2 > v4) {
            // 0x408c9a
            v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4);
            v6 = v8;
            if ((*(char *)(v8 + 8 + 16 * v5) & 8) == 0) {
                // 0x408cb2
                v7 = function_408aa0(v1, v5);
                v6 = v1;
                if ((char)v7 == 0) {
                    // 0x408cbe
                    return 12;
                }
            }
            // 0x408c90
            v4++;
            v8 = v6;
        }
    }
    int64_t v9 = 24 * (*(int64_t *)(a1 + 136) & a3) + *(int64_t *)(a1 + 64); // 0x408ce8
    int64_t * v10 = (int64_t *)v9; // 0x408cec
    uint64_t v11 = *v10; // 0x408cec
    int64_t * v12 = (int64_t *)(v9 + 16); // 0x408cef
    int64_t v13 = *v12; // 0x408cef
    int64_t v14 = v11 + 1; // 0x408cf3
    int64_t * v15 = (int64_t *)(v9 + 8); // 0x408cf7
    int64_t v16 = v13; // 0x408cfb
    int64_t v17 = v11; // 0x408cfb
    int64_t v18 = v14; // 0x408cfb
    if (*v15 <= v11) {
        int64_t * mem2 = realloc((int64_t *)v13, 16 * (int32_t)v14); // 0x408d20
        if (mem2 == NULL) {
            // 0x408cbe
            return 12;
        }
        // 0x408d2a
        v16 = (int64_t)mem2;
        v17 = *v10;
        *v12 = v16;
        *v15 = 2 * v14;
        v18 = v17 + 1;
    }
    // 0x408cfd
    *v10 = v18;
    *(int64_t *)(8 * v17 + v16) = a2;
    return 0;
}
// Address range: 0x408d40 - 0x408d66
int64_t function_408d40(uint64_t a1, int64_t a2) {
    uint64_t wc = a1 % 256; // 0x408d45
    int32_t v1 = btowc((int32_t)wc); // 0x408d4f
    int64_t v2 = v1; // 0x408d4f
    int64_t result = v2; // 0x408d57
    if (v1 == -1) {
        // 0x408d59
        result = (a2 == 0 ? wc : v2) & 0xffffffff;
    }
    // 0x408d5f
    return result;
}
// Address range: 0x408d70 - 0x408df0
int64_t function_408d70(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x408d72
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x408d77
    int64_t v3 = v2 - v1; // 0x408d77
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v2 : v1; // 0x408d7f
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x408d84
    uint64_t v6 = *v5; // 0x408d84
    if (v4 <= v6) {
        // 0x408de0
        *(int64_t *)(a1 + 56) = v6;
        int64_t result; // 0x408d70
        return result;
    }
    int32_t ** v7 = __ctype_toupper_loc(); // 0x408d8d
    int64_t v8 = v6; // 0x408d92
    int64_t v9 = *(int64_t *)(a1 + 120); // 0x408d9c
    int64_t v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40)); // 0x408da7
    int64_t v11 = v10; // 0x408dad
    if (v9 != 0) {
        // 0x408dd8
        v11 = (int64_t)*(char *)(v9 + v10);
    }
    int32_t v12 = *(int32_t *)(4 * v11 + (int64_t)*v7); // 0x408db6
    *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
    v8++;
    while (v4 != v8) {
        // 0x408d98
        v9 = *(int64_t *)(a1 + 120);
        v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40));
        v11 = v10;
        if (v9 != 0) {
            // 0x408dd8
            v11 = (int64_t)*(char *)(v9 + v10);
        }
        // 0x408daf
        v12 = *(int32_t *)(4 * v11 + (int64_t)*v7);
        *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
        v8++;
    }
    // 0x408dc5
    *v5 = v4;
    *(int64_t *)(a1 + 56) = v4;
    return (int64_t)v7;
}
// Address range: 0x408df0 - 0x408f96
int64_t function_408df0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x408dff
    int64_t v2 = *v1; // 0x408dff
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x408e03
    int64_t v4 = *v3; // 0x408e03
    int64_t * v5 = (int64_t *)(a1 + 64); // 0x408e07
    int64_t v6 = *v5; // 0x408e07
    int64_t v7 = v6 - v2; // 0x408e07
    uint64_t v8 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0 ? v6 : v2; // 0x408e0b
    int64_t result; // 0x408df0
    if (v8 <= v4) {
        // 0x408ea8
        *v3 = v4;
        *(int64_t *)(a1 + 56) = v4;
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 120); // 0x408e20
    int64_t * v10 = (int64_t *)(a1 + 32);
    int64_t * v11 = (int64_t *)(a1 + 40);
    int32_t * v12 = (int32_t *)(a1 + 144);
    int64_t v13; // bp-104, 0x408df0
    int64_t v14 = &v13;
    int64_t v15 = v4; // 0x408df0
    int64_t v16; // 0x408df0
    int64_t v17; // 0x408df0
    int64_t v18; // 0x408df0
    int32_t v19; // bp-108, 0x408df0
    int64_t v20; // 0x408e27
    int64_t result2; // 0x408f68
    while (true) {
      lab_0x408e20:
        // 0x408e20
        v17 = v15;
        int64_t v21 = *v9; // 0x408e20
        v20 = *v10;
        int64_t v22 = v8 - v17; // 0x408e2b
        int64_t v23; // 0x408df0
        if (v21 != 0) {
            // 0x408f00
            v23 = v14;
            if (*v12 >= 1) {
                // 0x408f0e
                v23 = v14;
                int64_t v24 = 0; // 0x408f18
                int64_t v25 = v21; // 0x408f18
                if (v22 >= 0 == (v22 != 0)) {
                    int64_t v26 = v24 + v17;
                    unsigned char v27 = *(char *)(v26 + v25 + *v11); // 0x408f3e
                    char v28 = *(char *)(v25 + (int64_t)v27); // 0x408f41
                    *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                    *(char *)(v24 + v14) = v28;
                    int64_t v29 = v24 + 1; // 0x408f52
                    v23 = v14;
                    while (!((v22 == v29 | (v29 & 0xffffffff) >= (int64_t)*v12))) {
                        // 0x408f2d
                        v25 = *v9;
                        v26 = v29 + v17;
                        v27 = *(char *)(v26 + v25 + *v11);
                        v28 = *(char *)(v25 + (int64_t)v27);
                        *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                        *(char *)(v29 + v14) = v28;
                        v29++;
                        v23 = v14;
                    }
                }
            }
        } else {
            // 0x408e37
            v23 = v21 + v17 + *v11;
        }
        int64_t v30 = function_4083e0(&v19, v23, v22); // 0x408e49
        if (v30 < 0xffffffffffffffff) {
            // 0x408e58
            v16 = v30;
            v18 = v19;
            if (v30 == -2) {
                // 0x408f68
                result2 = *v1;
                if (*v5 < result2) {
                    // break -> 0x408f76
                    break;
                }
                goto lab_0x408ec0;
            } else {
                goto lab_0x408e66;
            }
        } else {
            goto lab_0x408ec0;
        }
    }
    // 0x408f76
    *v10 = v20;
    // 0x408ea8
    *v3 = v17;
    *(int64_t *)(a1 + 56) = v17;
    return result2;
  lab_0x408ec0:;
    int64_t v31 = *v9; // 0x408ec3
    unsigned char v32 = *(char *)(v17 + (int64_t)&v19 + *v11); // 0x408ece
    int64_t v33 = v32; // 0x408ece
    v19 = v32;
    int64_t v34 = v33; // 0x408ed8
    if (v31 != 0) {
        unsigned char v35 = *(char *)(v31 + v33); // 0x408f7f
        v19 = v35;
        v34 = v35;
    }
    // 0x408ede
    *v10 = v20;
    v16 = 1;
    v18 = v34;
    goto lab_0x408e66;
  lab_0x408e66:;
    int64_t v36 = v16;
    int64_t v37 = *(int64_t *)(a1 + 16); // 0x408e66
    int64_t v38 = v17 + 1; // 0x408e6a
    int64_t v39 = v37 + 4 * v17;
    *(int32_t *)v39 = (int32_t)v18;
    int64_t v40 = v36 + v17; // 0x408e79
    int64_t v41; // 0x408df0
    if (v38 < v40) {
        int64_t v42 = v39 + 4; // 0x408e8a
        *(int32_t *)v42 = -1;
        v42 += 4;
        while (v37 + 4 * v40 != v42) {
            // 0x408e90
            *(int32_t *)v42 = -1;
            v42 += 4;
        }
        // 0x408e9f
        v15 = v40;
        result = v36;
        v41 = v40;
        if (v40 >= v8) {
            // 0x408ea8
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    } else {
        // 0x408ef0
        v15 = v38;
        result = v36;
        v41 = v38;
        if (v38 >= v8) {
            // 0x408ea8
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    }
    // 0x408e20
    goto lab_0x408e20;
}
// Address range: 0x408fa0 - 0x40959d
int64_t function_408fa0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x408fb1
    int64_t v2 = *v1; // 0x408fb1
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x408fb5
    int64_t v4 = *v3; // 0x408fb5
    int64_t v5 = v4 - v2; // 0x408fb5
    int64_t v6 = v5 == 0 | v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0 ? v4 : v2; // 0x408fb9
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x408fc5
    int64_t v8 = *v7; // 0x408fc5
    int64_t * v9; // 0x408fa0
    int64_t * v10; // 0x408fa0
    int64_t v11; // 0x408fa0
    int64_t v12; // 0x408fa0
    int64_t v13; // 0x408fa0
    int64_t v14; // 0x408fa0
    int64_t v15; // 0x408fa0
    int64_t v16; // 0x408fa0
    int64_t v17; // 0x408fa0
    int64_t v18; // 0x408fa0
    int64_t v19; // 0x408fa0
    int64_t v20; // 0x408fa0
    int64_t wstr; // bp-120, 0x408fa0
    struct _TYPEDEF___mbstate_t * v21; // bp-132, 0x408fa0
    int32_t * v22; // 0x408fa0
    int64_t v23; // 0x408fa0
    int64_t * v24; // 0x409160
    int64_t * v25; // 0x408fa0
    int64_t * v26; // 0x408fa0
    int64_t * v27; // 0x408fa0
    int64_t v28; // 0x40916a
    int64_t v29; // 0x409197
    if (*(char *)(a1 + 138) != 0) {
        goto lab_0x408fd6;
    } else {
        int64_t * v30 = (int64_t *)(a1 + 120);
        if (*v30 == 0) {
            // 0x409140
            if (*(char *)(a1 + 140) != 0) {
                goto lab_0x408fd6;
            } else {
                // 0x40914d
                v16 = v8;
                if (v8 < v6) {
                    while (true) {
                      lab_0x409160:
                        // 0x409160
                        v14 = v13;
                        v28 = v14 + v19 + *v24;
                        unsigned char v31 = *(char *)v28; // 0x40916d
                        if (v31 <= -1) {
                            goto lab_0x409189;
                        } else {
                            // 0x409178
                            struct _TYPEDEF___mbstate_t * ps; // 0x40915a
                            if (mbsinit(ps) != 0) {
                                int32_t v32 = *(int32_t *)(4 * (int64_t)v31 + (int64_t)*__ctype_toupper_loc()); // 0x409294
                                *(char *)(*v25 + v14) = (char)v32;
                                unsigned char v33 = *(char *)(*v25 + v14); // 0x4092a4
                                *(int32_t *)(*v26 + 4 * v14) = (int32_t)v33;
                                int64_t v34; // 0x408fa0
                                v20 = v34;
                                v15 = v14 + 1;
                                goto lab_0x40924a;
                            } else {
                                goto lab_0x409189;
                            }
                        }
                    }
                  lab_0x409380:
                    // 0x409380
                    v10 = v30;
                    v9 = v27;
                    v22 = (int32_t *)&v21;
                    v23 = v29;
                    v17 = v6;
                    v18 = &wstr;
                    v11 = v14;
                    v12 = v14;
                    goto lab_0x409000;
                } else {
                    goto lab_0x409253;
                }
            }
        } else {
            goto lab_0x408fd6;
        }
    }
  lab_0x409253:
    // 0x409253
    *v7 = v16;
    *(int64_t *)(a1 + 56) = v16;
    // 0x40912a
    return 0;
  lab_0x408fda:;
    // 0x408fda
    int64_t v35; // 0x408fa0
    int64_t v36 = v35;
    int64_t v37; // 0x408fa0
    int64_t v38 = v37;
    int64_t v39; // 0x408fa0
    int64_t v40 = v39;
    int64_t v41 = v38; // 0x408fdd
    int64_t v42 = v36; // 0x408fdd
    int64_t v43; // 0x408fa0
    if (v40 > v36) {
        // 0x408fe3
        v10 = (int64_t *)(a1 + 120);
        v9 = (int64_t *)(a1 + 32);
        v22 = (int32_t *)&v21;
        v23 = v40 - v36;
        v17 = v40;
        v18 = v43;
        v11 = v38;
        v12 = v36;
        goto lab_0x409000;
    } else {
        goto lab_0x409120;
    }
  lab_0x409189:
    // 0x409189
    v29 = v6 - v14;
    int32_t ps2 = (int32_t)*v27; // bp-128, 0x40919a
    uint64_t v44 = function_4083e0((int32_t *)&v21, v28, v29); // 0x4091b1
    if (v44 < 0xfffffffffffffffe) {
        int32_t wc = (int64_t)v21; // 0x4091c7
        int32_t wc2 = towupper(wc); // 0x4091cd
        int64_t v45; // 0x409207
        if (wc2 == wc) {
            int64_t v46 = *v25; // 0x409268
            int64_t v47 = *v24; // 0x40926c
            int64_t v48 = v46 + v14; // 0x409276
            memcpy((int64_t *)v48, (int64_t *)(v47 + v14 + v48), (int32_t)v44);
        } else {
            int32_t v49 = wcrtomb((char *)&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x4091ed
            if (v44 != (int64_t)v49) {
                // break -> 0x409380
                goto lab_0x409380;
            }
            // 0x4091fb
            v45 = *v25 + v14;
            memcpy((int64_t *)v45, &wstr, (int32_t)v44);
        }
        int64_t v50 = v45;
        int64_t v51 = *v26; // 0x40920f
        int64_t v52 = v14 + 1; // 0x40921b
        int64_t v53 = v51 + 4 * v14;
        *(int32_t *)v53 = wc2;
        int64_t v54 = v44 + v14; // 0x409223
        v20 = v50;
        v15 = v52;
        if (v52 < v54) {
            int64_t v55 = v53 + 4; // 0x409234
            *(int32_t *)v55 = -1;
            v55 += 4;
            v20 = v50;
            v15 = v54;
            while (v51 + 4 * v54 != v55) {
                // 0x409238
                *(int32_t *)v55 = -1;
                v55 += 4;
                v20 = v50;
                v15 = v54;
            }
        }
    } else {
        int64_t v56; // 0x408fa0
        if (v44 != -2) {
            unsigned char v57 = *(char *)(v14 + v56 + *v24); // 0x4092ff
            *(char *)(*v25 + v14) = v57;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v57;
            *v27 = (int64_t)ps2;
            v20 = v56;
            v15 = v14 + 1;
        } else {
            // 0x4092be
            if (*v3 < *v1) {
                // 0x409537
                *v27 = (int64_t)ps2;
                v16 = v14;
                goto lab_0x409253;
            }
            unsigned char v58 = *(char *)(v14 + v56 + *v24); // 0x4092da
            *(char *)(*v25 + v14) = v58;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v58;
            v20 = v56;
            v15 = v14 + 1;
        }
    }
    goto lab_0x40924a;
  lab_0x40924a:
    // 0x40924a
    v19 = v20;
    v13 = v15;
    v16 = v15;
    if (v6 <= v15) {
        goto lab_0x409253;
    }
    goto lab_0x409160;
  lab_0x408fd6:
    // 0x408fd6
    v39 = v6;
    v43 = a1;
    v37 = *(int64_t *)(a1 + 56);
    v35 = v8;
    goto lab_0x408fda;
  lab_0x409120:
    // 0x409120
    *v7 = v42;
    *(int64_t *)(a1 + 56) = v41;
    // 0x40912a
    return 0;
  lab_0x409000:;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v17;
    int64_t v62 = v23;
    int64_t * v63 = v9;
    int64_t * v64 = v10;
    int64_t v65 = *v64; // 0x409004
    ps2 = (int32_t)*v63;
    int64_t v66; // 0x408fa0
    if (v65 != 0) {
        int32_t v67 = *(int32_t *)(a1 + 144); // 0x40931f
        if (v62 < 1 || v67 < 1) {
            // 0x40931f
            v66 = &wstr;
        } else {
            int64_t v68 = &wstr;
            int64_t v69 = 2 * (*(int64_t *)(a1 + 40) + v60); // 0x40934c
            int64_t v70 = 0;
            char v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69)); // 0x409360
            *(char *)(v70 + v68) = v71;
            v66 = v68;
            while (v70 != (int64_t)(v67 - 1)) {
                int64_t v72 = v70 + 1; // 0x409351
                v66 = v68;
                if (v62 == v72) {
                    // break -> 0x409025
                    break;
                }
                v70 = v72;
                v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69));
                *(char *)(v70 + v68) = v71;
                v66 = v68;
            }
        }
    } else {
        // 0x409016
        v66 = v60 + v18 + *(int64_t *)(a1 + 40);
    }
    int64_t v73 = v66;
    uint64_t v74 = function_4083e0(v22, v73, v62); // 0x409038
    int64_t v75; // 0x408fa0
    int32_t wc4; // 0x409053
    if (v74 < 0xfffffffffffffffe) {
        int32_t wc3 = (int64_t)v21; // 0x40904e
        wc4 = towupper(wc3);
        if (wc4 == wc3) {
            goto lab_0x409388;
        } else {
            int32_t v76 = wcrtomb((char *)&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x409081
            int64_t v77 = v76; // 0x409081
            if (v74 != v77) {
                if (v76 == -1) {
                    goto lab_0x409388;
                } else {
                    int64_t v78 = v59 + v77; // 0x40945b
                    uint64_t v79 = *v3; // 0x409466
                    if (v78 > v79) {
                        goto lab_0x40910f;
                    } else {
                        int64_t * v80 = (int64_t *)(a1 + 24); // 0x409473
                        int64_t v81 = *v80; // 0x409473
                        int64_t v82 = v81; // 0x409478
                        if (v81 == 0) {
                            int64_t * mem = malloc(8 * (int32_t)v79); // 0x409557
                            int64_t v83 = (int64_t)mem; // 0x409557
                            *v80 = v83;
                            v82 = v83;
                            if (mem == NULL) {
                                // 0x40912a
                                return 12;
                            }
                        }
                        char * v84 = (char *)(a1 + 140); // 0x40947e
                        if (*v84 == 0) {
                            int64_t v85 = v82; // 0x40948d
                            if (v59 != 0) {
                                int64_t v86 = 0;
                                *(int64_t *)(8 * v86 + v85) = v86;
                                int64_t v87 = v86 + 1; // 0x409497
                                while (v59 != v87) {
                                    // 0x409493
                                    v86 = v87;
                                    *(int64_t *)(8 * v86 + v85) = v86;
                                    v87 = v86 + 1;
                                }
                            }
                            // 0x4094a0
                            *v84 = 1;
                        }
                        // 0x4094a8
                        memcpy((int64_t *)(*(int64_t *)(a1 + 8) + v59), &wstr, v76);
                        int64_t v88 = v74 - 1; // 0x4094c8
                        int64_t v89 = *(int64_t *)(a1 + 16) + 4 * v59; // 0x4094cc
                        *(int32_t *)v89 = wc4;
                        int64_t v90 = *v80 + 8 * v59; // 0x4094d7
                        *(int64_t *)v90 = v60;
                        if (v76 >= 2) {
                            uint64_t v91 = 1;
                            int64_t v92 = v91 >= v74 ? v88 : v91; // 0x4094ef
                            *(int64_t *)(8 * v91 + v90) = v92 + v60;
                            *(int32_t *)(4 * v91 + v89) = -1;
                            int64_t v93 = v91 + 1; // 0x409501
                            while (v93 != v77) {
                                // 0x4094e9
                                v91 = v93;
                                v92 = v91 >= v74 ? v88 : v91;
                                *(int64_t *)(8 * v91 + v90) = v92 + v60;
                                *(int32_t *)(4 * v91 + v89) = -1;
                                v93 = v91 + 1;
                            }
                        }
                        int64_t v94 = v77 - v74; // 0x40950e
                        int64_t v95 = *v1 + v94; // 0x409511
                        *v1 = v95;
                        if (v60 < *(int64_t *)(a1 + 96)) {
                            int64_t * v96 = (int64_t *)(a1 + 104); // 0x40951e
                            *v96 = *v96 + v94;
                        }
                        int64_t v97 = *v3; // 0x409522
                        int64_t v98 = v97 - v95; // 0x409522
                        int64_t v99 = v98 == 0 | v98 < 0 != ((v98 ^ v97) & (v97 ^ v95)) < 0 ? v97 : v95; // 0x40952a
                        v39 = v99;
                        v43 = v88;
                        v37 = v74 + v60;
                        v35 = v78;
                        goto lab_0x408fda;
                    }
                }
            } else {
                int64_t v100 = *(int64_t *)(a1 + 8) + v59; // 0x4090a9
                memcpy((int64_t *)v100, &wstr, (int32_t)v74);
                v75 = v100;
                goto lab_0x4090b5;
            }
        }
    } else {
        if (v74 != -2) {
            goto lab_0x4093bd;
        } else {
            // 0x4093af
            if (*v3 < *v1) {
                goto lab_0x40910f;
            } else {
                goto lab_0x4093bd;
            }
        }
    }
  lab_0x409388:;
    int64_t v101 = *(int64_t *)(a1 + 8) + v59; // 0x409398
    memcpy((int64_t *)v101, (int64_t *)v73, (int32_t)v74);
    v75 = v101;
    goto lab_0x4090b5;
  lab_0x4093bd:;
    int64_t v114 = (int64_t)&v21; // 0x409033
    int64_t v115 = *v64; // 0x4093c0
    int64_t v116 = (int64_t)*(char *)(v60 + v114 + *(int64_t *)(a1 + 40)); // 0x4093cb
    int64_t v117 = v116; // 0x4093d1
    if (v115 != 0) {
        // 0x409594
        v117 = (int64_t)*(char *)(v115 + v116);
    }
    // 0x4093d7
    *(char *)(*(int64_t *)(a1 + 8) + v59) = (char)v117;
    if (*(char *)(a1 + 140) != 0) {
        // 0x409587
        *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v59) = v60;
    }
    int64_t v118 = *(int64_t *)(a1 + 16); // 0x4093f0
    int64_t v119 = v60 + 1; // 0x4093f4
    int64_t v120 = v59 + 1; // 0x4093f8
    *(int32_t *)(v118 + 4 * v59) = (int32_t)v117;
    v39 = v61;
    v43 = v114;
    v37 = v119;
    v35 = v120;
    if (v74 == -1) {
        // 0x409409
        *v63 = (int64_t)ps2;
        v39 = v61;
        v43 = v114;
        v37 = v119;
        v35 = v120;
    }
    goto lab_0x408fda;
  lab_0x4090b5:;
    int64_t v102 = v75;
    int64_t v103; // 0x408fa0
    if (*(char *)(a1 + 140) != 0) {
        // 0x409420
        v103 = v60;
        if (v74 != 0) {
            int64_t v104 = v74 + v60; // 0x409433
            int64_t v105 = v59 - v60; // 0x409438
            int64_t v106 = v60;
            *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
            int64_t v107 = v106 + 1; // 0x409443
            v103 = v104;
            while (v104 != v107) {
                // 0x40943f
                v106 = v107;
                *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
                v107 = v106 + 1;
                v103 = v104;
            }
        }
    } else {
        // 0x4090c3
        v103 = v74 + v60;
    }
    int64_t v108 = v103;
    int64_t v109 = *(int64_t *)(a1 + 16); // 0x4090ca
    int64_t v110 = v59 + 1; // 0x4090ce
    int64_t v111 = v74 + v59; // 0x4090d2
    int64_t v112 = v109 + 4 * v59;
    *(int32_t *)v112 = wc4;
    v39 = v61;
    v43 = v102;
    v37 = v108;
    v35 = v110;
    if (v110 < v111) {
        int64_t v113 = v112 + 4; // 0x4090f4
        while (true) {
            // 0x4090f8
            *(int32_t *)v113 = -1;
            v113 += 4;
            v39 = v61;
            v43 = v102;
            v37 = v108;
            v35 = v111;
            if (v109 + 4 * v111 == v113) {
                goto lab_0x408fda;
            }
        }
    }
    goto lab_0x408fda;
  lab_0x40910f:
    // 0x40910f
    *v63 = (int64_t)ps2;
    v41 = v60;
    v42 = v59;
    goto lab_0x409120;
}
// Address range: 0x4095a0 - 0x4096ee
int64_t function_4095a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x4095b0
    uint64_t v2 = *v1; // 0x4095b0
    if (v2 >= 0xfffffffffffffff) {
        // 0x40964b
        return 12;
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x4095bd
    int64_t v4 = *v3; // 0x4095bd
    int64_t v5 = 2 * v2; // 0x4095c1
    int64_t v6 = 0x100000000 * a2 >> 32; // 0x4095c4
    int64_t v7 = v5 - v4; // 0x4095ca
    int64_t v8 = v7 < 0 == ((v7 ^ v5) & (v4 ^ v5)) < 0 == (v7 != 0) ? v4 : v5; // 0x4095cd
    int64_t v9 = v8 - v6; // 0x4095d1
    int64_t v10 = function_408a00(a1, v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v8 : v6); // 0x4095d8
    int64_t result = v10 & 0xffffffff; // 0x4095dd
    if ((int32_t)v10 != 0) {
        // 0x40964b
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 184); // 0x4095e3
    int64_t v12 = *v11; // 0x4095e3
    if (v12 != 0) {
        int64_t * mem = realloc((int64_t *)v12, 8 * (int32_t)*v1 + 8); // 0x4095fb
        if (mem == NULL) {
            // 0x40964b
            return 12;
        }
        // 0x409609
        *v11 = (int64_t)mem;
    }
    int32_t v13 = *(int32_t *)(a1 + 144); // 0x409617
    if (*(char *)(a1 + 136) != 0) {
        if (v13 >= 2) {
            // 0x40962b
            return function_408fa0(a1);
        }
        // 0x4096c8
        function_408d70(a1);
        return result;
    }
    if (v13 > 1) {
        // 0x4096b0
        function_408df0(a1);
        return result;
    }
    int64_t * v14 = (int64_t *)(a1 + 120); // 0x40965d
    int64_t v15 = *v14; // 0x40965d
    if (v15 == 0) {
        // 0x40964b
        return result;
    }
    int64_t v16 = *v3; // 0x409666
    int64_t * v17 = (int64_t *)(a1 + 48); // 0x40966a
    uint64_t v18 = *v17; // 0x40966a
    int64_t v19 = *v1; // 0x40966e
    int64_t v20 = v19 - v16; // 0x40966e
    uint64_t v21 = v20 == 0 | v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0 ? v19 : v16; // 0x409672
    if (v21 <= v18) {
        // 0x40967c
        *(int64_t *)(a1 + 56) = v18;
        // 0x40964b
        return result;
    }
    int64_t * v22 = (int64_t *)(a1 + 40); // 0x40968a
    unsigned char v23 = *(char *)(v18 + v12 + *v22); // 0x40968e
    int64_t * v24 = (int64_t *)(a1 + 8); // 0x409695
    *(char *)(*v24 + v18) = *(char *)(v15 + (int64_t)v23);
    int64_t v25 = v18 + 1; // 0x40969c
    int64_t v26 = v25; // 0x4096a3
    if (v21 != v25) {
        unsigned char v27 = *(char *)(v26 + v12 + *v22); // 0x40968e
        *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
        v26++;
        while (v21 != v26) {
            // 0x409680
            v27 = *(char *)(v26 + v12 + *v22);
            *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
            v26++;
        }
    }
    // 0x4096a5
    *v17 = v21;
    *(int64_t *)(a1 + 56) = v21;
    // 0x40964b
    return result;
}
// Address range: 0x4096f0 - 0x409776
int64_t function_4096f0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x4096f7
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x4096fe
    int64_t v3 = *v2; // 0x4096fe
    if (v1 > a2) {
        goto lab_0x409730;
    } else {
        // 0x40970a
        if (v1 < *(int64_t *)(a1 + 88)) {
            int64_t result = function_4095a0(a1, a2 + 1 & 0xffffffff); // 0x409716
            if ((int32_t)result != 0) {
                // 0x409726
                return result;
            }
            goto lab_0x40971f;
        } else {
            goto lab_0x409730;
        }
    }
  lab_0x409730:;
    uint64_t v4 = *(int64_t *)(a1 + 48); // 0x409730
    if (v4 <= a2) {
        // 0x409739
        if (v4 < *(int64_t *)(a1 + 88)) {
            int64_t result2 = function_4095a0(a1, a2 + 1 & 0xffffffff); // 0x409745
            if ((int32_t)result2 != 0) {
                // 0x409726
                return result2;
            }
        }
    }
    goto lab_0x40971f;
  lab_0x40971f:
    // 0x40971f
    if (v3 < a2) {
        int64_t v5 = *(int64_t *)(a1 + 184); // 0x409750
        memset((int64_t *)(8 * v3 + 8 + v5), 0, 8 * (int32_t)(a2 - v3));
        *v2 = a2;
    }
    // 0x409726
    return 0;
}
// Address range: 0x409780 - 0x40979e
int64_t function_409780(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x409787
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g84;
}
// Address range: 0x4097a0 - 0x4097c8
int64_t function_4097a0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 + 8) & 0x400ff; // 0x4097a3
    switch (result) {
        case 6: {
            // 0x4097b8
            return function_409780(a1);
        }
        case 3: {
            // 0x4097c0
            free((int64_t *)a1);
            return &g84;
        }
    }
    // 0x4097b2
    return result;
}
// Address range: 0x4097d0 - 0x4097e4
int64_t function_4097d0(int64_t a1, int64_t a2) {
    // 0x4097d0
    function_4097a0(a2 + 40);
    return 0;
}
// Address range: 0x4097f0 - 0x4099be
int64_t function_4097f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4097f0
    int128_t v1; // 0x4097f0
    int128_t v2 = v1;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x409804
    uint64_t v4 = *v3; // 0x409804
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x409808
    uint64_t v6 = *v5; // 0x409808
    int64_t v7; // 0x4097f0
    int64_t v8; // 0x4097f0
    int64_t v9; // 0x4097f0
    if (v4 >= v6) {
        uint64_t v10 = 2 * v6; // 0x4098ca
        if (v10 >= 0xaaaaaaaaaaaaaab) {
            // 0x4098a8
            return -1;
        }
        int32_t v11 = v6;
        int64_t * mem = realloc((int64_t *)v4, 32 * v11); // 0x4098e7
        if (mem == NULL) {
            // 0x4098a8
            return -1;
        }
        // 0x4098f5
        *(int64_t *)a1 = (int64_t)mem;
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x4098fb
        int32_t v13 = 16 * v11; // 0x40990d
        int64_t * mem2 = realloc((int64_t *)*v12, v13); // 0x40990d
        int64_t * v14 = (int64_t *)(a1 + 32); // 0x409912
        int64_t * mem3 = realloc((int64_t *)*v14, v13); // 0x40991c
        int64_t * v15 = (int64_t *)(a1 + 40); // 0x409921
        int32_t v16 = 48 * v11; // 0x40992c
        int64_t * mem4 = realloc((int64_t *)*v15, v16); // 0x40992c
        int64_t * v17 = (int64_t *)(a1 + 48); // 0x409931
        int64_t * mem5 = realloc((int64_t *)*v17, v16); // 0x40993b
        if (mem2 == NULL | mem3 == NULL || mem4 == NULL || mem5 == NULL) {
            // 0x409980
            free(mem2);
            free(mem3);
            free(mem4);
            free(mem5);
            // 0x4098a8
            return -1;
        }
        int64_t v18 = (int64_t)mem2; // 0x40990d
        int64_t v19 = (int64_t)mem4; // 0x40992c
        *v12 = v18;
        *v14 = (int64_t)mem3;
        *v15 = v19;
        *v17 = (int64_t)mem5;
        *v5 = v10;
        v9 = *v3;
        v7 = v18;
        v8 = v19;
    } else {
        // 0x409815
        v9 = v4;
        v7 = *(int64_t *)(a1 + 24);
        v8 = *(int64_t *)(a1 + 40);
    }
    int64_t v20 = 17 * v9; // 0x40982c
    char v21 = a3; // 0x40982f
    int64_t v22 = v20 + 8; // 0x409832
    *(int64_t *)v22 = a3;
    *(int64_t *)v20 = a2;
    *(int32_t *)v22 = (int32_t)a3 & -0x3ff01;
    bool v23 = v21 == 6; // 0x409842
    if (v21 == 5) {
        int32_t v24 = *(int32_t *)(a1 + 180); // 0x409844
        int32_t v25 = v24 - 1; // 0x409844
        v23 = v25 < 0 == (v24 & -v24) < 0 == (v25 != 0);
    }
    char * v26 = (char *)(v20 + 10); // 0x40984e
    int128_t v27 = __asm_pxor(v2, v2); // 0x409855
    *v26 = 16 * (char)v23 | *v26 & -17;
    *(int64_t *)(v7 + 8 * v9) = -1;
    int64_t v28 = 24 * *v3 + v8; // 0x409871
    __asm_movups(*(int128_t *)v28, v27);
    *(int64_t *)(v28 + 16) = 0;
    int64_t v29 = *(int64_t *)(a1 + 48) + 24 * *v3; // 0x40988d
    __asm_movups(*(int128_t *)v29, v27);
    *(int64_t *)(v29 + 16) = 0;
    int64_t result = *v3; // 0x40989c
    *v3 = result + 1;
    // 0x4098a8
    return result;
}
// Address range: 0x4099c0 - 0x409a5f
int64_t function_4099c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 16 * a2; // 0x4099c7
    int64_t v2 = v1 + a1;
    int64_t result = function_4097f0(a1, *(int64_t *)v2, *(int64_t *)(v2 + 8)); // 0x4099e6
    if (result != -1) {
        int64_t v3 = a3 & 0xffffffff; // 0x4099cb
        int64_t v4 = 16 * result + v3; // 0x409a05
        int32_t v5 = 256 * (int32_t)a3; // 0x409a08
        int32_t * v6 = (int32_t *)(v4 + 8); // 0x409a13
        int32_t v7 = *v6 & -0x3ff01; // 0x409a16
        *v6 = v7 | v5 & 0x3ff00;
        uint32_t v8 = (*(int32_t *)((v1 | 8) + v3) | v5) & 0x3ff00 | v7; // 0x409a3a
        *v6 = v8;
        *(char *)(v4 + 10) = (char)(v8 / 0x10000) | 4;
        *(int64_t *)(*(int64_t *)(a1 + 32) + 8 * result) = a2;
    }
    // 0x409a54
    return result;
}
// Address range: 0x409a60 - 0x409ce4
int64_t function_409a60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 40);
    int64_t * v2 = (int64_t *)(a1 + 24);
    int64_t v3 = a1; // 0x409a7a
    int64_t v4 = a2; // 0x409a7a
    int64_t v5 = a3; // 0x409a7a
    int64_t v6 = a5 & 0xffffffff;
    int32_t v7 = v6;
    int64_t v8; // 0x409a60
    int64_t v9; // 0x409a60
    int64_t v10; // 0x409a60
    int64_t v11; // 0x409a60
    int64_t result; // 0x409a60
    int64_t v12; // 0x409a60
    int64_t v13; // 0x409a60
    int64_t v14; // 0x409a60
    int64_t v15; // 0x409a60
    int64_t v16; // 0x409c14
    int64_t v17; // 0x409c18
    int64_t v18; // 0x409c18
    int64_t v19; // 0x409c2f
    int64_t v20; // 0x409aa1
    int64_t v21; // 0x409aa5
    int64_t v22; // 0x409aa9
    int64_t v23; // 0x409c45
    int64_t v24; // 0x409cb8
    int64_t v25; // 0x409abf
    int64_t v26; // 0x409ac3
    int64_t v27; // 0x409adb
    int64_t v28; // 0x409adf
    int64_t v29; // 0x409ae6
    int64_t v30; // 0x409aea
    int64_t v31; // 0x409c69
    int64_t v32; // 0x409a60
    int64_t v33; // 0x409ca3
    int64_t v34; // 0x409b18
    int64_t v35; // 0x409b1b
    int64_t v36; // 0x409a85
    int64_t v37; // 0x409a93
    while (true) {
        // 0x409a7f
        v8 = v5;
        v10 = v4;
        v13 = v3;
        v36 = *v1;
        v37 = v13 + 8 + 16 * v10;
        if (*(char *)v37 == 4) {
            // 0x409c00
            v16 = 24 * v8;
            v17 = 8 * v10;
            v18 = *(int64_t *)(*v2 + v17);
            *(int64_t *)(v36 + 8 + v16) = 0;
            v19 = function_4099c0(a1, v18, v6);
            if (v19 == -1) {
                return 12;
            }
            // 0x409c45
            v23 = *v2;
            *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
            v15 = v18;
            v12 = v16;
            v9 = v19;
            goto lab_0x409b7a;
        } else {
            // 0x409a9d
            v20 = 24 * v10;
            v21 = v36 + v20;
            v22 = *(int64_t *)(v21 + 8);
            if (v22 == 0) {
                // 0x409cb8
                v24 = *v2;
                *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                result = 0;
                return result;
            }
            // 0x409ab6
            v25 = 24 * v8;
            v26 = v36 + v25;
            v4 = *(int64_t *)*(int64_t *)(v21 + 16);
            *(int64_t *)(v26 + 8) = 0;
            if (v22 == 1) {
                // break -> 0x409bb0
                break;
            }
            // 0x409adb
            v27 = *(int64_t *)(a1 + 16);
            v28 = v27 - 1;
            v29 = 16 * v28;
            v30 = v29 + v13;
            if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                // 0x409b00
                v32 = 16 * v27 - 32 - v29;
                v14 = v28;
                v11 = v30;
                if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                    // 0x409b38
                    if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                        // 0x409b49
                        if ((char)function_408b10(v26, v14) == 0) {
                            return 12;
                        } else {
                            goto lab_0x409b52;
                        }
                    }
                }
                // 0x409b18
                v34 = v32 + v11;
                v35 = v14 - 1;
                while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                    // 0x409b32
                    v14 = v35;
                    v11 = v34;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x409b38
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x409b49
                            if ((char)function_408b10(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x409b52;
                            }
                        }
                    }
                    // 0x409b18
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                }
            }
            // 0x409c60
            v31 = function_4099c0(a1, v4, v6);
            if (v31 == -1) {
                return 12;
            }
            // 0x409c7b
            if ((char)function_408b10(*v1 + v25, v31) == 0) {
                return 12;
            }
            // 0x409c92
            v33 = function_409a60(a1, v4, v31, a4, v6);
            result = v33;
            if ((int32_t)v33 != 0) {
                // 0x409b9a
                return result;
            }
            goto lab_0x409b52;
        }
    }
    if (v10 == a4 == (v10 != v8)) {
        // 0x409ccb
        result = 0;
        if ((char)function_408b10(v26, v4) != 0) {
            return result;
        } else {
            return 12;
        }
    }
    int64_t v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7); // 0x409bd1
    v5 = function_4099c0(a1, v4, v38);
    while (v5 != -1) {
        // 0x409be5
        v3 = *v1 + v25;
        if ((char)function_408b10(v3, v5) == 0) {
            // break -> 0x409b95
            break;
        }
        v6 = v38;
        v7 = v6;
        while (true) {
            // 0x409a7f
            v8 = v5;
            v10 = v4;
            v13 = v3;
            v36 = *v1;
            v37 = v13 + 8 + 16 * v10;
            if (*(char *)v37 == 4) {
                // 0x409c00
                v16 = 24 * v8;
                v17 = 8 * v10;
                v18 = *(int64_t *)(*v2 + v17);
                *(int64_t *)(v36 + 8 + v16) = 0;
                v19 = function_4099c0(a1, v18, v6);
                if (v19 == -1) {
                    return 12;
                }
                // 0x409c45
                v23 = *v2;
                *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
                v15 = v18;
                v12 = v16;
                v9 = v19;
                goto lab_0x409b7a;
            } else {
                // 0x409a9d
                v20 = 24 * v10;
                v21 = v36 + v20;
                v22 = *(int64_t *)(v21 + 8);
                if (v22 == 0) {
                    // 0x409cb8
                    v24 = *v2;
                    *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                    result = 0;
                    return result;
                }
                // 0x409ab6
                v25 = 24 * v8;
                v26 = v36 + v25;
                v4 = *(int64_t *)*(int64_t *)(v21 + 16);
                *(int64_t *)(v26 + 8) = 0;
                if (v22 == 1) {
                    // break -> 0x409bb0
                    break;
                }
                // 0x409adb
                v27 = *(int64_t *)(a1 + 16);
                v28 = v27 - 1;
                v29 = 16 * v28;
                v30 = v29 + v13;
                if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                    // 0x409b00
                    v32 = 16 * v27 - 32 - v29;
                    v14 = v28;
                    v11 = v30;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x409b38
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x409b49
                            if ((char)function_408b10(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x409b52;
                            }
                        }
                    }
                    // 0x409b18
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                    while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                        // 0x409b32
                        v14 = v35;
                        v11 = v34;
                        if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                            // 0x409b38
                            if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                                // 0x409b49
                                if ((char)function_408b10(v26, v14) == 0) {
                                    return 12;
                                } else {
                                    goto lab_0x409b52;
                                }
                            }
                        }
                        // 0x409b18
                        v34 = v32 + v11;
                        v35 = v14 - 1;
                    }
                }
                // 0x409c60
                v31 = function_4099c0(a1, v4, v6);
                if (v31 == -1) {
                    return 12;
                }
                // 0x409c7b
                if ((char)function_408b10(*v1 + v25, v31) == 0) {
                    return 12;
                }
                // 0x409c92
                v33 = function_409a60(a1, v4, v31, a4, v6);
                result = v33;
                if ((int32_t)v33 != 0) {
                    // 0x409b9a
                    return result;
                }
                goto lab_0x409b52;
            }
        }
        if (v10 == a4 == (v10 != v8)) {
            // 0x409ccb
            result = 0;
            if ((char)function_408b10(v26, v4) != 0) {
                return result;
            } else {
                return 12;
            }
        }
        // 0x409bc0
        v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7);
        v5 = function_4099c0(a1, v4, v38);
    }
  lab_0x409b95_5:
    // 0x409b9a
    return 12;
  lab_0x409b7a:;
    int64_t v39 = *v1 + v12; // 0x409b81
    if ((char)function_408b10(v39, v9) == 0) {
        return 12;
    }
    goto lab_0x409a7f;
  lab_0x409b52:;
    int64_t v40 = *(int64_t *)(*(int64_t *)(v20 + 16 + *v1) + 8); // 0x409b61
    int64_t v41 = function_4099c0(a1, v40, v6); // 0x409b6c
    v15 = v40;
    v12 = v25;
    v9 = v41;
    if (v41 == -1) {
        // break (via goto) -> 0x409b95
        goto lab_0x409b95_5;
    }
    goto lab_0x409b7a;
}
// Address range: 0x409cf0 - 0x409d49
int64_t function_409cf0(int64_t a1) {
    // 0x409cf0
    free((int64_t *)*(int64_t *)(a1 + 48));
    free((int64_t *)*(int64_t *)(a1 + 72));
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x409d06
    int64_t v2 = *v1; // 0x409d06
    if (v2 != a1 + 8) {
        // 0x409d13
        free((int64_t *)*(int64_t *)(v2 + 16));
        free((int64_t *)*v1);
    }
    // 0x409d25
    free((int64_t *)*(int64_t *)(a1 + 24));
    free((int64_t *)*(int64_t *)(a1 + 96));
    free((int64_t *)*(int64_t *)(a1 + 88));
    free((int64_t *)a1);
    return &g84;
}
// Address range: 0x409d50 - 0x409d82
int64_t function_409d50(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    free((int64_t *)*(int64_t *)(v1 + 16));
    free((int64_t *)*(int64_t *)(v1 + 24));
    if (*(char *)(v1 + 139) == 0) {
        // 0x409d6f
        return &g84;
    }
    // 0x409d78
    free((int64_t *)*(int64_t *)(v1 + 8));
    return &g84;
}
// Address range: 0x409d90 - 0x409e48
int64_t function_409d90(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 232); // 0x409d9b
    if (*v2 < 1) {
        // 0x409e29
        *v2 = 0;
        *(int64_t *)(v1 + 200) = 0;
        int64_t result; // 0x409d90
        return result;
    }
    int64_t v3 = 0; // 0x409e17
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3); // 0x409db7
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x409dbb
    int64_t * v6 = (int64_t *)(v4 + 40);
    int64_t v7 = 0; // 0x409dc1
    int64_t v8; // 0x409dcd
    int64_t v9; // 0x409dd1
    if (*v5 >= 1) {
        v8 = *(int64_t *)(*v6 + 8 * v7);
        v9 = v7 + 1;
        free((int64_t *)*(int64_t *)(v8 + 32));
        free((int64_t *)v8);
        v7 = v9;
        while (*v5 > v9) {
            // 0x409dc8
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
        }
    }
    // 0x409ded
    free((int64_t *)*v6);
    int64_t * v10 = (int64_t *)(v4 + 16); // 0x409df7
    int64_t v11 = *v10; // 0x409df7
    if (v11 != 0) {
        // 0x409e01
        free((int64_t *)*(int64_t *)(v11 + 16));
        free((int64_t *)*v10);
    }
    // 0x409e14
    v3++;
    free((int64_t *)v4);
    while (*v2 > v3) {
        // 0x409db0
        v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3);
        v5 = (int64_t *)(v4 + 32);
        v6 = (int64_t *)(v4 + 40);
        v7 = 0;
        if (*v5 >= 1) {
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
            while (*v5 > v9) {
                // 0x409dc8
                v8 = *(int64_t *)(*v6 + 8 * v7);
                v9 = v7 + 1;
                free((int64_t *)*(int64_t *)(v8 + 32));
                free((int64_t *)v8);
                v7 = v9;
            }
        }
        // 0x409ded
        free((int64_t *)*v6);
        v10 = (int64_t *)(v4 + 16);
        v11 = *v10;
        if (v11 != 0) {
            // 0x409e01
            free((int64_t *)*(int64_t *)(v11 + 16));
            free((int64_t *)*v10);
        }
        // 0x409e14
        v3++;
        free((int64_t *)v4);
    }
    // 0x409e29
    *v2 = 0;
    *(int64_t *)(v1 + 200) = 0;
    return &g84;
}
// Address range: 0x409e50 - 0x40a0d0
int64_t function_409e50(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 48); // 0x409e54
    int64_t v2 = v1; // 0x409e54
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x409e58
    g83 = v2;
    int64_t v4 = v3; // 0x409e63
    switch (v1) {
        case 2: {
            // 0x409f28
            if (*(int64_t *)(a2 + 32) == 0) {
                // 0x409e8a
                return 0;
            }
            // 0x409f33
            __assert_fail("node->next == NULL", "lib/regcomp.c", 1449, "link_nfa_nodes");
            v4 = 1449;
        }
        case 4: {
            // 0x409f50
            *(int64_t *)(8 * v4 + 0x312d203e) = *(int64_t *)0x203e207466656c38;
            // 0x409e8a
            return 0;
        }
        case 8: {
        }
        case 9: {
        }
        case 12: {
            int64_t v5 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x409fc5
            int64_t * v6 = (int64_t *)v5; // 0x409fc9
            *v6 = 1;
            int64_t * v7 = (int64_t *)(v5 + 8); // 0x409fd0
            *v7 = 1;
            int64_t * mem = malloc(8); // 0x409fd8
            *(int64_t *)(v5 + 16) = (int64_t)mem;
            if (mem != NULL) {
                // 0x409fe6
                *mem = *(int64_t *)(*(int64_t *)(a2 + 32) + 56);
                return 0;
            }
            // 0x40a040
            *v7 = 0;
            *v6 = 0;
            // 0x409e8a
            return 12;
        }
        case 10: {
        }
        case 11: {
            char * v8 = (char *)(a1 + 176); // 0x409e90
            *v8 = *v8 | 1;
            int64_t v9 = *(int64_t *)(a2 + 8); // 0x409e97
            int64_t v10 = a2 + 32;
            int64_t v11 = *(int64_t *)(*(int64_t *)(v9 == 0 ? v10 : v9 + 24) + 56);
            if (v11 < 0) {
                // 0x40a0b6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g84;
            }
            int64_t v12 = *(int64_t *)(a2 + 16); // 0x409eac
            int64_t v13 = *(int64_t *)(*(int64_t *)(v12 == 0 ? v10 : v12 + 24) + 56);
            if (v13 < 0) {
                // 0x40a09d
                __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
                // 0x40a0b6
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g84;
            }
            int64_t v14 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x409ee0
            *(int64_t *)v14 = 2;
            int64_t * mem2 = malloc(16); // 0x409eeb
            int64_t v15 = (int64_t)mem2; // 0x409eeb
            *(int64_t *)(v14 + 16) = v15;
            if (mem2 == NULL) {
                // 0x409e8a
                return 12;
            }
            int64_t * v16 = (int64_t *)(v14 + 8);
            if (v11 == v13) {
                // 0x409ff0
                *v16 = 1;
                *mem2 = v11;
                // 0x409e8a
                return 0;
            }
            // 0x409f06
            *v16 = 2;
            if (v11 < v13) {
                // 0x409f14
                *mem2 = v11;
                *(int64_t *)(v15 + 8) = v13;
            } else {
                // 0x40a028
                *mem2 = v13;
                *(int64_t *)(v15 + 8) = v11;
            }
            // 0x409e8a
            return 0;
        }
        case 16: {
            // 0x409e8a
            return 0;
        }
        default: {
            if ((v2 & 8) == 0) {
                int64_t v17 = *(int64_t *)(*(int64_t *)(a2 + 32) + 56); // 0x409e7c
                *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v3) = v17;
                // 0x409e8a
                return 0;
            }
            // 0x40a084
            __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 1484, "link_nfa_nodes");
            // 0x40a09d
            __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
            // 0x40a0b6
            __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
            return &g84;
        }
    }
}
// Address range: 0x40a0d0 - 0x40a11e
int64_t function_40a0d0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 48); // 0x40a0d0
    uint64_t v2 = a2 + 1; // 0x40a0d4
    if (v2 >= v1) {
        // 0x40a112
        return 1;
    }
    int64_t v3 = *(int64_t *)(a1 + 16) + 4 * v2;
    if (*(int32_t *)v3 != -1) {
        // 0x40a112
        return 1;
    }
    int64_t v4 = 2;
    while (v4 != v1 - a2) {
        int64_t v5 = v4 + 1; // 0x40a100
        if (*(int32_t *)(v3 - 8 + 4 * v5) != -1) {
            // break -> 0x40a112
            break;
        }
        v4 = v5;
    }
    // 0x40a112
    return v4 & 0xffffffff;
}
// Address range: 0x40a120 - 0x40a185
int64_t function_40a120(int64_t a1, int64_t a2, uint64_t a3) {
    if (a1 < 1) {
        // 0x40a165
        return 0;
    }
    int64_t v1 = a1 - 1; // 0x40a12a
    int64_t v2 = 0; // 0x40a133
    if (v1 != 0) {
        int64_t v3 = 0;
        int64_t v4 = (v3 + v1) / 2; // 0x40a139
        int64_t v5 = v4; // 0x40a140
        int64_t v6 = v4; // 0x40a140
        int64_t v7 = v1; // 0x40a140
        int64_t v8; // 0x40a120
        int64_t v9; // 0x40a14c
        if (*(int64_t *)(8 * v4 + a2) >= a3) {
            v2 = v3;
            if (v3 >= v5) {
                // break (via goto) -> 0x40a15d
                goto lab_0x40a15d;
            }
            // 0x40a148
            v9 = (v5 + v3) / 2;
            v6 = v9;
            v7 = v5;
            while (*(int64_t *)(8 * v9 + a2) >= a3) {
                // 0x40a158
                v8 = v9;
                v2 = v3;
                if (v3 >= v8) {
                    // break (via goto) -> 0x40a15d
                    goto lab_0x40a15d;
                }
                // 0x40a148
                v9 = (v8 + v3) / 2;
                v6 = v9;
                v7 = v8;
            }
        }
        int64_t v10 = v7;
        int64_t v11 = v6 + 1; // 0x40a170
        v2 = v11;
        while (v11 < v10) {
            // 0x40a135
            v3 = v11;
            v4 = (v3 + v10) / 2;
            v5 = v4;
            v6 = v4;
            v7 = v10;
            if (*(int64_t *)(8 * v4 + a2) >= a3) {
                v2 = v3;
                if (v3 >= v5) {
                    // break (via goto) -> 0x40a15d
                    goto lab_0x40a15d;
                }
                // 0x40a148
                v9 = (v5 + v3) / 2;
                v6 = v9;
                v7 = v5;
                while (*(int64_t *)(8 * v9 + a2) >= a3) {
                    // 0x40a158
                    v8 = v9;
                    v2 = v3;
                    if (v3 >= v8) {
                        // break (via goto) -> 0x40a15d
                        goto lab_0x40a15d;
                    }
                    // 0x40a148
                    v9 = (v8 + v3) / 2;
                    v6 = v9;
                    v7 = v8;
                }
            }
            // 0x40a170
            v10 = v7;
            v11 = v6 + 1;
            v2 = v11;
        }
    }
  lab_0x40a15d:
    // 0x40a15d
    if (*(int64_t *)(8 * v2 + a2) == a3) {
        // 0x40a180
        return v2 + 1;
    }
    // 0x40a165
    return 0;
}
// Address range: 0x40a190 - 0x40a289
int64_t function_40a190(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 16; // 0x40a197
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x40a1b1
    int64_t v3 = *v2; // 0x40a1b1
    if (function_40a120(v3, v1, a3) != 0) {
      lab_0x40a278:
        // 0x40a265
        return 0;
    }
    int32_t v4 = a5;
    int64_t * v5 = (int64_t *)(a1 + 40);
    int64_t v6 = a3;
    int64_t v7 = 16 * v6 + v3; // 0x40a1d0
    int64_t result; // 0x40a190
    if ((int32_t)*(char *)(v7 + 8) == v4) {
        // 0x40a1dd
        if (*(int64_t *)v7 == a4) {
            if (v4 != 9) {
                return 0;
            } else {
                // 0x40a24e
                result = 12;
                if ((char)function_408b10(a2, v6) != 0) {
                    return 0;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x40a1e2
    result = 12;
    while ((char)function_408b10(a2, v6) != 0) {
        int64_t v8 = 24 * v6; // 0x40a1fa
        int64_t v9 = *v5 + v8; // 0x40a1fe
        int64_t v10 = *(int64_t *)(v9 + 8); // 0x40a201
        if (v10 == 0) {
            // 0x40a265
            return 0;
        }
        int64_t v11 = *(int64_t *)(v9 + 16); // 0x40a20a
        int64_t v12 = v11; // 0x40a212
        if (v10 == 2) {
            int64_t v13 = function_40a190(a1, a2, *(int64_t *)(v11 + 8), a4, a5 & 0xffffffff); // 0x40a230
            result = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x40a265
                break;
            }
            // 0x40a239
            v12 = *(int64_t *)(v8 + 16 + *v5);
        }
        int64_t v14 = *(int64_t *)v12; // 0x40a214
        int64_t v15 = *v2; // 0x40a1b1
        if (function_40a120(v15, v1, v14) != 0) {
            // 0x40a265
            return 0;
        }
        v6 = v14;
        v7 = 16 * v6 + v15;
        if ((int32_t)*(char *)(v7 + 8) == v4) {
            // 0x40a1dd
            if (*(int64_t *)v7 == a4) {
                if (v4 != 9) {
                    return 0;
                } else {
                    // 0x40a24e
                    result = 12;
                    if ((char)function_408b10(a2, v6) != 0) {
                        return 0;
                    } else {
                        return result;
                    }
                }
            }
        }
        // 0x40a1e2
        result = 12;
    }
  lab_0x40a265:
    // 0x40a265
    return result;
}
// Address range: 0x40a290 - 0x40a2b3
int64_t function_40a290(uint64_t a1, int64_t result2, uint64_t a3) {
    // 0x40a290
    if (a3 >= a1) {
        // 0x40a2b2
        int64_t result; // 0x40a290
        return result;
    }
    int64_t v1 = a3; // 0x40a293
    int64_t v2 = 8 * v1 + result2;
    *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    v1++;
    while (v1 != a1) {
        // 0x40a2a0
        v2 = 8 * v1 + result2;
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
        v1++;
    }
    // 0x40a2b2
    return result2;
}
// Address range: 0x40a2c0 - 0x40a34b
int64_t function_40a2c0(int64_t a1, int64_t a2) {
    // 0x40a2c0
    int64_t * v1; // 0x40a2d0
    int64_t v2; // 0x40a2d0
    switch (*(char *)(a2 + 48)) {
        case 4: {
            int64_t v3 = *(int64_t *)(a1 + 224); // 0x40a320
            if (v3 == 0) {
                // 0x40a2cc
                return 0;
            }
            int64_t v4 = a2 + 40; // 0x40a32c
            int64_t v5 = *(int64_t *)(8 * (int64_t)*(int32_t *)v4 + v3); // 0x40a330
            *(int64_t *)v4 = v5;
            int64_t * v6 = (int64_t *)(a1 + 160); // 0x40a341
            *v6 = *v6 | (int64_t)(1 << (int32_t)v5 % 32);
            return 0;
        }
        case 17: {
            // 0x40a2d0
            v1 = (int64_t *)(a2 + 8);
            v2 = *v1;
            if (v2 == 0 || *(char *)(v2 + 48) != 17) {
                // 0x40a2cc
                return 0;
            }
            // break -> 0x40a2df
            break;
        }
        default: {
            // 0x40a2cc
            return 0;
        }
    }
    uint64_t v7 = *(int64_t *)(v2 + 40); // 0x40a2df
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x40a2e3
    *v1 = v8;
    if (v8 != 0) {
        // 0x40a2f0
        *(int64_t *)v8 = a2;
    }
    int64_t v9 = *(int64_t *)(a1 + 224); // 0x40a2f3
    int64_t v10 = *(int64_t *)(8 * *(int64_t *)(a2 + 40) + v9); // 0x40a2fe
    *(int64_t *)(v9 + 8 * v7) = v10;
    if (v7 > 63) {
        // 0x40a2cc
        return 0;
    }
    uint64_t v11 = v7 % 64; // 0x40a313
    int64_t v12 = -2; // 0x40a313
    if (v11 != 0) {
        v12 = 0xfffffffffffffffe >> 64 - v11 | -2 << v11;
    }
    int64_t * v13 = (int64_t *)(a1 + 160); // 0x40a316
    *v13 = *v13 & v12;
    // 0x40a2cc
    return 0;
}
// Address range: 0x40a350 - 0x40a3a7
int64_t function_40a350(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x40a354
    switch (*(char *)(a2 + 48)) {
        case 11: {
            // 0x40a388
            *(int64_t *)(v1 + 32) = a2;
            return 0;
        }
        case 16: {
            int64_t v2 = *(int64_t *)(a2 + 16); // 0x40a390
            *(int64_t *)(v1 + 32) = *(int64_t *)(v2 + 24);
            *(int64_t *)(v2 + 32) = *(int64_t *)(a2 + 32);
            return 0;
        }
    }
    if (v1 != 0) {
        // 0x40a365
        *(int64_t *)(v1 + 32) = *(int64_t *)(a2 + 32);
    }
    int64_t v3 = *(int64_t *)(a2 + 16); // 0x40a36d
    if (v3 != 0) {
        // 0x40a376
        *(int64_t *)(v3 + 32) = *(int64_t *)(a2 + 32);
    }
    // 0x40a37e
    return 0;
}
// Address range: 0x40a3b0 - 0x40a5fe
int64_t function_40a3b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x40a3c7
    int64_t v2 = -1; // 0x40a3e1
    int64_t v3 = -1; // 0x40a3e1
    if (v1 > 0) {
        int64_t v4 = *(int64_t *)(a1 + 216); // 0x40a3e7
        int64_t v5 = v4 + 8;
        int64_t v6 = 0;
        uint64_t v7 = v6 + v1; // 0x40a3e3
        int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x40a3f8
        int64_t v9 = v8; // 0x40a404
        int64_t v10 = v1; // 0x40a404
        int64_t v11 = v8; // 0x40a404
        int64_t v12; // 0x40a3b0
        int64_t v13; // 0x40a3b0
        uint64_t v14; // 0x40a410
        int64_t v15; // 0x40a41e
        if (*(int64_t *)(40 * v8 + v5) >= a5) {
            v13 = v6;
            if (v6 >= v9) {
                // break (via goto) -> 0x40a43b
                goto lab_0x40a43b;
            }
            // 0x40a410
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v9;
            v11 = v15;
            while (*(int64_t *)(40 * v15 + v5) >= a5) {
                // 0x40a436
                v12 = v15;
                v13 = v6;
                if (v6 >= v12) {
                    // break (via goto) -> 0x40a43b
                    goto lab_0x40a43b;
                }
                // 0x40a410
                v14 = v12 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v12;
                v11 = v15;
            }
        }
        int64_t v16 = v10;
        int64_t v17 = v11 + 1; // 0x40a5a8
        v13 = v17;
        while (v17 < v16) {
            // 0x40a3e3
            v6 = v17;
            v7 = v6 + v16;
            v8 = (v7 / 0x8000000000000000 + v7) / 2;
            v9 = v8;
            v10 = v16;
            v11 = v8;
            if (*(int64_t *)(40 * v8 + v5) >= a5) {
                v13 = v6;
                if (v6 >= v9) {
                    // break (via goto) -> 0x40a43b
                    goto lab_0x40a43b;
                }
                // 0x40a410
                v14 = v9 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v9;
                v11 = v15;
                while (*(int64_t *)(40 * v15 + v5) >= a5) {
                    // 0x40a436
                    v12 = v15;
                    v13 = v6;
                    if (v6 >= v12) {
                        // break (via goto) -> 0x40a43b
                        goto lab_0x40a43b;
                    }
                    // 0x40a410
                    v14 = v12 + v6;
                    v15 = (v14 / 0x8000000000000000 + v14) / 2;
                    v10 = v12;
                    v11 = v15;
                }
            }
            // 0x40a5a8
            v16 = v10;
            v17 = v11 + 1;
            v13 = v17;
        }
      lab_0x40a43b:;
        int64_t v18 = v13;
        int64_t v19 = -1; // 0x40a43e
        if (v1 > v18) {
            // 0x40a444
            v19 = *(int64_t *)(40 * v18 + 8 + v4) != a5 ? -1 : v18;
        }
        int64_t v20 = 0;
        uint64_t v21 = v1 + v20; // 0x40a46c
        int64_t v22 = (v21 / 0x8000000000000000 + v21) / 2; // 0x40a482
        int64_t v23 = v22; // 0x40a48e
        int64_t v24 = v1; // 0x40a48e
        int64_t v25 = v22; // 0x40a48e
        int64_t v26; // 0x40a3b0
        int64_t v27; // 0x40a3b0
        uint64_t v28; // 0x40a498
        int64_t v29; // 0x40a4a7
        if (*(int64_t *)(40 * v22 + v5) >= a7) {
            v27 = v20;
            if (v20 >= v23) {
                // break (via goto) -> 0x40a4c4
                goto lab_0x40a4c4;
            }
            // 0x40a498
            v28 = v23 + v20;
            v29 = (v28 / 0x8000000000000000 + v28) / 2;
            v24 = v23;
            v25 = v29;
            while (*(int64_t *)(40 * v29 + v5) >= a7) {
                // 0x40a4bf
                v26 = v29;
                v27 = v20;
                if (v20 >= v26) {
                    // break (via goto) -> 0x40a4c4
                    goto lab_0x40a4c4;
                }
                // 0x40a498
                v28 = v26 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v26;
                v25 = v29;
            }
        }
        int64_t v30 = v24;
        int64_t v31 = v25 + 1; // 0x40a5c0
        v27 = v31;
        while (v31 < v30) {
            // 0x40a46c
            v20 = v31;
            v21 = v30 + v20;
            v22 = (v21 / 0x8000000000000000 + v21) / 2;
            v23 = v22;
            v24 = v30;
            v25 = v22;
            if (*(int64_t *)(40 * v22 + v5) >= a7) {
                v27 = v20;
                if (v20 >= v23) {
                    // break (via goto) -> 0x40a4c4
                    goto lab_0x40a4c4;
                }
                // 0x40a498
                v28 = v23 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v23;
                v25 = v29;
                while (*(int64_t *)(40 * v29 + v5) >= a7) {
                    // 0x40a4bf
                    v26 = v29;
                    v27 = v20;
                    if (v20 >= v26) {
                        // break (via goto) -> 0x40a4c4
                        goto lab_0x40a4c4;
                    }
                    // 0x40a498
                    v28 = v26 + v20;
                    v29 = (v28 / 0x8000000000000000 + v28) / 2;
                    v24 = v26;
                    v25 = v29;
                }
            }
            // 0x40a5c0
            v30 = v24;
            v31 = v25 + 1;
            v27 = v31;
        }
      lab_0x40a4c4:;
        int64_t v32 = v27;
        v2 = v19;
        v3 = -1;
        if (v1 > v32) {
            // 0x40a4cd
            v2 = v19;
            v3 = *(int64_t *)(40 * v32 + 8 + v4) != a7 ? -1 : v32;
        }
    }
    // 0x40a4ec
    if (a2 < 1) {
        // 0x40a58e
        return 0;
    }
    int64_t * v33 = (int64_t *)(a1 + 216); // 0x40a524
    int64_t * v34 = (int64_t *)*(int64_t *)(a1 + 152); // 0x40a555
    int64_t v35 = 0; // 0x40a5d5
    int64_t v36 = 8 * v35; // 0x40a538
    int64_t v37 = *(int64_t *)(v36 + a3); // 0x40a538
    int64_t v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34); // 0x40a558
    int64_t v39 = function_408990(a1, v37, v38, a4, a5, v2); // 0x40a55e
    uint64_t v40 = *(int64_t *)(v38 + v36); // 0x40a57c
    int64_t result = 1; // 0x40a587
    while ((int32_t)v39 == (int32_t)function_408990(a1, v40, v38, a6, a7, v3)) {
        // 0x40a5d0
        v35++;
        result = 0;
        if (v35 >= v40) {
            // break -> 0x40a58e
            break;
        }
        v36 = 8 * v35;
        v37 = *(int64_t *)(v36 + v38);
        v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34);
        v39 = function_408990(a1, v37, v38, a4, a5, v2);
        v40 = *(int64_t *)(v38 + v36);
        result = 1;
    }
    // 0x40a58e
    return result;
}
// Address range: 0x40a600 - 0x40a651
int64_t function_40a600(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a600
    int64_t result; // 0x40a600
    if ((int32_t)result != 0) {
        // 0x40a64c
        return result;
    }
    int64_t v1 = a1; // 0x40a61e
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x40a620
        int64_t v3 = v2; // 0x40a629
        int64_t v4 = 0; // 0x40a629
        int64_t v5 = v1; // 0x40a629
        if (v2 == 0) {
            int64_t v6 = v5;
            int64_t v7 = *(int64_t *)(v6 + 16); // 0x40a633
            v3 = v7;
            while (v7 != v4 != v7 != 0) {
                int64_t v8 = *(int64_t *)v6; // 0x40a641
                v4 = v6;
                if (v8 == 0) {
                    return result;
                }
                v6 = v8;
                v7 = *(int64_t *)(v6 + 16);
                v3 = v7;
            }
        }
        // 0x40a610
        v1 = v3;
    }
}
// Address range: 0x40a660 - 0x40a823
int64_t function_40a660(int64_t * a1, int128_t * a2) {
    // 0x40a660
    if (a2 == NULL) {
        // 0x40a764
        return 0;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40a669
    int64_t v3 = *v2; // 0x40a669
    if (v3 == 0) {
        // 0x40a764
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x40a67d
    int64_t v6 = *v5; // 0x40a67d
    int64_t v7 = v6 + 2 * v3;
    int64_t v8; // 0x40a660
    int64_t * v9; // 0x40a660
    int64_t v10; // 0x40a660
    int64_t v11; // 0x40a660
    int64_t v12; // 0x40a660
    if (v7 > v4) {
        int64_t v13 = v3 + v4; // 0x40a7c0
        int64_t * v14 = (int64_t *)(v4 + 16);
        int64_t * mem = realloc((int64_t *)*v14, 16 * (int32_t)v13); // 0x40a7d2
        if (mem == NULL) {
            // 0x40a764
            return 12;
        }
        int64_t v15 = *v5; // 0x40a7dc
        *v14 = (int64_t)mem;
        *a1 = 2 * v13;
        int64_t v16 = *v2; // 0x40a7e7
        v9 = v14;
        v11 = v16;
        if (v15 != 0) {
            // 0x40a7dc
            v8 = 2 * v16 + v15;
            v10 = v16;
            v12 = v15;
            goto lab_0x40a69d;
        } else {
            goto lab_0x40a7f5;
        }
    } else {
        // 0x40a694
        v8 = v7;
        v10 = v3;
        v12 = v6;
        if (v6 == 0) {
            // 0x40a694
            v9 = (int64_t *)(v4 + 16);
            v11 = v3;
            goto lab_0x40a7f5;
        } else {
            goto lab_0x40a69d;
        }
    }
  lab_0x40a7f5:;
    int64_t v17 = *v9; // 0x40a7f5
    int64_t v18 = *(int64_t *)(v1 + 16); // 0x40a7f9
    *v5 = v11;
    memcpy((int64_t *)v17, (int64_t *)v18, 8 * (int32_t)*v2);
    // 0x40a764
    return 0;
  lab_0x40a69d:;
    int64_t v19 = v10 - 1; // 0x40a6a1
    int64_t v20 = -v10; // 0x40a6ac
    int64_t v21 = v19; // 0x40a6b3
    int64_t v22 = v8; // 0x40a6b3
    if (v20 < 0) {
        int64_t v23 = v12; // 0x40a660
        int64_t v24 = v20;
        int64_t v25 = v8; // 0x40a660
        int64_t v26 = v19;
        while (true) {
            int64_t v27 = v23 - 1;
            int64_t v28 = v24; // 0x40a6e6
            v21 = v26;
            v22 = v25;
            if (v27 < 0) {
                // break (via goto) -> 0x40a6f0
                goto lab_0x40a6f0_2;
            }
            int64_t v29 = v25;
            int64_t v30 = v26;
            int64_t v31 = *(int64_t *)(v4 + 16); // 0x40a6bf
            uint64_t v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30); // 0x40a6c3
            uint64_t v33 = *(int64_t *)(v31 + 8 * v27); // 0x40a6c7
            int64_t v34; // 0x40a660
            int64_t v35; // 0x40a660
            while (v33 != v32) {
                // 0x40a6d1
                v34 = v30;
                v35 = v28;
                if (v33 >= v32) {
                    goto lab_0x40a6b0;
                }
                int64_t v36 = v30 - 1; // 0x40a6d7
                int64_t v37 = v29 - 1; // 0x40a6db
                *(int64_t *)(v31 + 8 * v37) = v32;
                v28 = -v30;
                v21 = v36;
                v22 = v37;
                if (v28 >= 0) {
                    // break (via goto) -> 0x40a6f0
                    goto lab_0x40a6f0_2;
                }
                v21 = v26;
                v22 = v25;
                if (v27 < 0) {
                    // break (via goto) -> 0x40a6f0
                    goto lab_0x40a6f0_2;
                }
                // 0x40a6ba
                v29 = v37;
                v30 = v36;
                v31 = *(int64_t *)(v4 + 16);
                v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30);
                v33 = *(int64_t *)(v31 + 8 * v27);
            }
            // 0x40a790
            v34 = v30 - 1;
            v35 = -v30;
          lab_0x40a6b0:
            // 0x40a6b0
            v24 = v35;
            v26 = v34;
            v23 = v27;
            v25 = v29;
            v21 = v26;
            v22 = v29;
            if (v24 >= 0) {
                // break -> 0x40a6f0
                break;
            }
        }
    }
  lab_0x40a6f0_2:;
    int64_t v38 = v22; // 0x40a6f3
    if (v21 >= 0) {
        int64_t v39 = v21 + 1; // 0x40a6f5
        int64_t v40 = *(int64_t *)(v4 + 16); // 0x40a6f9
        int64_t v41 = *(int64_t *)(v1 + 16); // 0x40a6fd
        int64_t v42 = v22 - v39; // 0x40a702
        memcpy((int64_t *)(v40 + 8 * v42), (int64_t *)v41, 8 * (int32_t)v39);
        v38 = v42;
    }
    int64_t v43 = *v5; // 0x40a716
    int64_t v44 = v43 - 1; // 0x40a71f
    int64_t v45 = 2 * *v2 + v44; // 0x40a71f
    int64_t v46 = v45 - v38 + 1; // 0x40a72a
    if (v46 == 0) {
      lab_0x40a764:
        // 0x40a764
        return 0;
    }
    int64_t v47 = *(int64_t *)(v4 + 16); // 0x40a737
    *v5 = v46 + v43;
    int64_t v48 = v44; // 0x40a73f
    int64_t v49 = v46; // 0x40a73f
    int64_t v50 = v45; // 0x40a73f
    while (true) {
        int64_t v51 = v50;
        int64_t v52 = v49;
        uint64_t v53 = *(int64_t *)(8 * v51 + v47); // 0x40a740
        uint64_t v54 = *(int64_t *)(8 * v48 + v47); // 0x40a744
        int64_t v55 = 8 * (v52 + v48) + v47; // 0x40a74c
        while (v53 > v54) {
            // 0x40a755
            *(int64_t *)v55 = v53;
            int64_t v56 = v52 - 1; // 0x40a75c
            if (v56 == 0) {
                return 0;
            }
            v51--;
            v52 = v56;
            v53 = *(int64_t *)(8 * v51 + v47);
            v54 = *(int64_t *)(8 * v48 + v47);
            v55 = 8 * (v52 + v48) + v47;
        }
        // 0x40a770
        *(int64_t *)v55 = v54;
        int64_t v57 = v48 - 1; // 0x40a773
        v48 = v57;
        v49 = v52;
        v50 = v51;
        if (v57 < 0) {
            // 0x40a779
            memcpy((int64_t *)v47, (int64_t *)(v47 + 8 * v38), 8 * (int32_t)v52);
            return 0;
        }
    }
    // 0x40a764
    int64_t v58; // 0x40a660
    int64_t result = v58;
    return result;
}
// Address range: 0x40a830 - 0x40aa84
int64_t function_40a830(int128_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 24 * a3; // 0x40a844
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x40a84c
    int64_t v3 = *v2 + v1; // 0x40a854
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x40a85b
    int64_t v5 = *v4 + 1; // 0x40a868
    int128_t v6 = v5; // bp-120, 0x40a86c
    int64_t * mem = malloc(8 * (int32_t)v5); // 0x40a875
    if (mem == NULL) {
        // 0x40a95a
        return 12;
    }
    int64_t v7 = (int64_t)mem; // 0x40a875
    int64_t * v8 = (int64_t *)(a2 + 48); // 0x40a888
    int64_t v9 = v1 + 8;
    *(int64_t *)(*v8 + v9) = -1;
    int64_t v10 = a2 + 8 + 16 * a3;
    uint32_t v11 = *(int32_t *)v10; // 0x40a8a3
    int64_t v12 = v10; // 0x40a8ae
    if ((v11 & 0x3ff00) != 0) {
        // 0x40a9d0
        if (*v4 == 0) {
            goto lab_0x40aa20;
        } else {
            int64_t v13 = *(int64_t *)*(int64_t *)(v3 + 16); // 0x40a9db
            v12 = v10;
            if ((*(char *)(a2 + 10 + 16 * v13) & 4) == 0) {
                int64_t result = function_409a60(a2, a3, a3, a3, (int64_t)(v11 / 256 % 1024)); // 0x40aa04
                if ((int32_t)result != 0) {
                    // 0x40a95a
                    return result;
                }
                // 0x40aa11
                v12 = 17 * a3 + 8;
            }
            goto lab_0x40a8b4;
        }
    } else {
        goto lab_0x40a8b4;
    }
  lab_0x40a8b4:;
    // 0x40a8b4
    int64_t v14; // 0x40a830
    int64_t v15; // 0x40a830
    if ((*(char *)v12 & 8) == 0) {
        goto lab_0x40aa20;
    } else {
        int64_t v16 = *v2; // 0x40a8be
        int64_t v17 = v16 + v1; // 0x40a8c2
        if (*(int64_t *)(v17 + 8) < 1) {
            goto lab_0x40aa20;
        } else {
            int64_t v18 = 0;
            int64_t v19 = *(int64_t *)(*(int64_t *)(v17 + 16) + 8 * v18); // 0x40a927
            int64_t v20 = *v8; // 0x40a92b
            int64_t v21 = 24 * v19; // 0x40a933
            int64_t v22 = v20 + v21; // 0x40a937
            int64_t v23 = *(int64_t *)(v22 + 8); // 0x40a93a
            int64_t v24 = 0; // 0x40a942
            int64_t v25 = v18; // 0x40a942
            int64_t v26 = v19; // 0x40a942
            int64_t v27 = v21; // 0x40a942
            int64_t v28 = v22; // 0x40a942
            int64_t v29 = v23; // 0x40a942
            int64_t v30; // 0x40a830
            int64_t v31; // 0x40a988
            int64_t v32; // 0x40a992
            int64_t v33; // 0x40a927
            int64_t v34; // 0x40a933
            int64_t v35; // 0x40a937
            int64_t v36; // 0x40a93a
            if (v23 == -1) {
                // 0x40a988
                v31 = v16 + v1;
                v32 = v18;
                v32++;
                v30 = 1;
                if (*(int64_t *)(v31 + 8) <= v32) {
                    // break (via goto) -> 0x40a99c
                    goto lab_0x40a99c;
                }
                // 0x40a923
                v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                v34 = 24 * v33;
                v35 = v34 + v20;
                v36 = *(int64_t *)(v35 + 8);
                v24 = 1;
                v25 = v32;
                v26 = v33;
                v27 = v34;
                v28 = v35;
                v29 = v36;
                while (v36 == -1) {
                    // 0x40a988
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40a99c
                        goto lab_0x40a99c;
                    }
                    // 0x40a923
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                }
            }
            int64_t v37 = v29;
            int64_t result2; // 0x40a830
            int64_t v38; // 0x40a830
            int128_t v39; // bp-88, 0x40a830
            int64_t v40; // 0x40a951
            if (v37 != 0) {
                // 0x40a8e0
                v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                v38 = *(int64_t *)(v28 + 16);
            } else {
                // 0x40a949
                v40 = function_40a830(&v39, a2, v26, v37);
                int64_t v41; // 0x40a830
                v38 = v41;
                result2 = v40;
                if ((int32_t)v40 != 0) {
                    // 0x40a95a
                    return result2;
                }
            }
            int64_t v42 = function_40a660((int64_t *)&v6, &v39); // 0x40a8fc
            result2 = v42;
            while ((int32_t)v42 == 0) {
                int64_t v43 = v38;
                int64_t v44 = v24; // 0x40a90f
                if (*(int64_t *)(v27 + 8 + *v8) == 0) {
                    // 0x40a970
                    free((int64_t *)v43);
                    v44 = 1;
                }
                int64_t v45 = *v2; // 0x40a911
                int64_t v46 = v25 + 1; // 0x40a915
                int64_t v47 = v45 + v1; // 0x40a919
                int64_t v48 = v45; // 0x40a921
                if (*(int64_t *)(v47 + 8) <= v46) {
                    // break -> 0x40a99c
                    break;
                }
                v18 = v46;
                int64_t v49 = v43;
                v19 = *(int64_t *)(*(int64_t *)(v47 + 16) + 8 * v18);
                v20 = *v8;
                v21 = 24 * v19;
                v22 = v20 + v21;
                v23 = *(int64_t *)(v22 + 8);
                v24 = v44;
                v25 = v18;
                v26 = v19;
                v27 = v21;
                v28 = v22;
                v29 = v23;
                if (v23 == -1) {
                    // 0x40a988
                    v31 = v48 + v1;
                    v32 = v18;
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40a99c
                        goto lab_0x40a99c;
                    }
                    // 0x40a923
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                    while (v36 == -1) {
                        // 0x40a988
                        v32++;
                        v30 = 1;
                        if (*(int64_t *)(v31 + 8) <= v32) {
                            // break (via goto) -> 0x40a99c
                            goto lab_0x40a99c;
                        }
                        // 0x40a923
                        v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                        v34 = 24 * v33;
                        v35 = v34 + v20;
                        v36 = *(int64_t *)(v35 + 8);
                        v24 = 1;
                        v25 = v32;
                        v26 = v33;
                        v27 = v34;
                        v28 = v35;
                        v29 = v36;
                    }
                }
                // 0x40a944
                v37 = v29;
                if (v37 != 0) {
                    // 0x40a8e0
                    v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                    v38 = *(int64_t *)(v28 + 16);
                } else {
                    // 0x40a949
                    v40 = function_40a830(&v39, a2, v26, v37);
                    v38 = v49;
                    result2 = v40;
                    if ((int32_t)v40 != 0) {
                        // 0x40a95a
                        return result2;
                    }
                }
                // 0x40a8f2
                v42 = function_40a660((int64_t *)&v6, &v39);
                result2 = v42;
            }
            // 0x40a95a
            return result2;
          lab_0x40a99c:
            // 0x40a99c
            if ((char)function_408b10((int64_t)&v6, a3) == 0) {
                // 0x40a95a
                return 12;
            }
            int64_t v50 = *v8; // 0x40a9b1
            v15 = v50;
            if ((char)a4 == 1 || (char)v30 == 0) {
                goto lab_0x40aa35;
            } else {
                // 0x40a9c5
                *(int64_t *)(v50 + v9) = 0;
                v14 = 0x100000000 * v7 >> 32;
                goto lab_0x40aa49;
            }
        }
    }
  lab_0x40aa20:
    // 0x40aa20
    if ((char)function_408b10((int64_t)&v6, a3) == 0) {
        // 0x40a95a
        return 12;
    }
    // 0x40aa31
    v15 = *v8;
    goto lab_0x40aa35;
  lab_0x40aa35:;
    int128_t v51 = __asm_movdqa(0); // 0x40aa35
    int64_t v52 = v15 + v1;
    __asm_movups(*(int128_t *)v52, v51);
    int64_t v53 = 0x100000000 * v7 >> 32;
    *(int64_t *)(v52 + 16) = v53;
    v14 = v53;
    goto lab_0x40aa49;
  lab_0x40aa49:;
    int128_t v54 = __asm_movdqa(0); // 0x40aa52
    *(int64_t *)((int64_t)a1 + 16) = v14;
    *a1 = (int128_t)__asm_movaps(v54);
    return 0;
}
// Address range: 0x40aa90 - 0x40abcf
int64_t function_40aa90(int64_t a1, int64_t * a2, int64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40aaa7
    int64_t v3 = *v2; // 0x40aaa7
    int64_t size = 8 * v3; // 0x40aab4
    int128_t v4 = v3; // bp-72, 0x40aabc
    int64_t * mem = malloc((int32_t)size); // 0x40aac1
    if (mem == NULL) {
        // 0x40abbd
        return 12;
    }
    int64_t * v5 = (int64_t *)(v1 + 16);
    if (v3 < 1) {
      lab_0x40ab5d:
        // 0x40ab5d
        free((int64_t *)*v5);
        int128_t v6 = __asm_movdqa(0); // 0x40ab6b
        *v5 = (int64_t)mem;
        *(int128_t *)a2 = (int128_t)__asm_movaps(v6);
        return 0;
    }
    int64_t v7 = &v4;
    int64_t v8 = size; // 0x40aa90
    int64_t v9 = 0; // 0x40ab53
    int64_t v10; // 0x40aa90
    int64_t v11; // 0x40aa90
    int64_t v12; // 0x40aaf0
    while (true) {
      lab_0x40aae0:;
        int64_t v13 = *(int64_t *)(*v5 + 8 * v9); // 0x40aae4
        v12 = *(int64_t *)(a1 + 48) + 24 * v13;
        uint64_t v14 = *(int64_t *)(v12 + 8); // 0x40aaf4
        if (v14 >= 1) {
            int64_t v15 = 0;
            int64_t v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16)); // 0x40ab19
            int64_t v17 = 16 * v16 + v8; // 0x40ab24
            int64_t v18; // 0x40ab4a
            if ((int32_t)*(char *)(v17 + 8) == a4) {
                // 0x40ab31
                if (*(int64_t *)v17 == a3) {
                    if (v16 == -1) {
                        goto lab_0x40ab90;
                    } else {
                        // 0x40ab3c
                        v18 = function_40a190(a1, v7, v13, a3, (int64_t)a4);
                        v11 = a1;
                        v10 = v18;
                        if ((int32_t)v18 != 0) {
                            goto lab_0x40ab9e_2;
                        } else {
                            goto lab_0x40ab53;
                        }
                    }
                }
            }
            int64_t v19 = v15 + 1; // 0x40ab10
            while (v14 != v19) {
                // 0x40ab19
                v15 = v19;
                v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16));
                v17 = 16 * v16 + v8;
                if ((int32_t)*(char *)(v17 + 8) == a4) {
                    // 0x40ab31
                    if (*(int64_t *)v17 == a3) {
                        if (v16 == -1) {
                            goto lab_0x40ab90;
                        } else {
                            // 0x40ab3c
                            v18 = function_40a190(a1, v7, v13, a3, (int64_t)a4);
                            v11 = a1;
                            v10 = v18;
                            if ((int32_t)v18 != 0) {
                                goto lab_0x40ab9e_2;
                            } else {
                                goto lab_0x40ab53;
                            }
                        }
                    }
                }
                // 0x40ab10
                v19 = v15 + 1;
            }
        }
        goto lab_0x40ab90;
    }
  lab_0x40ab9e_2:
    // 0x40ab9e
    free(mem);
    return v10 & 0xffffffff;
  lab_0x40ab90:;
    int64_t v20 = function_40a660((int64_t *)&v4, (int128_t *)v12); // 0x40ab95
    v11 = v7;
    v10 = v20;
    if ((int32_t)v20 != 0) {
        // break -> 0x40ab9e
        goto lab_0x40ab9e_2;
    }
    goto lab_0x40ab53;
  lab_0x40ab53:
    // 0x40ab53
    v9++;
    v8 = v11;
    if (*v2 <= v9) {
        goto lab_0x40ab5d;
    }
    goto lab_0x40aae0;
}
// Address range: 0x40abd0 - 0x40ad82
int64_t function_40abd0(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40abd0
    int64_t v2 = *v1; // 0x40abd0
    if (v2 == 0) {
        // 0x40ac98
        return 0;
    }
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x40abdf
    int64_t v4 = *v3; // 0x40abdf
    if (v4 == 0) {
        // 0x40ac98
        return 0;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v4 + v2; // 0x40abee
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40ac03
    int64_t v8 = *v7; // 0x40ac03
    int64_t * v9 = (int64_t *)(v5 + 16); // 0x40ac0a
    int64_t v10 = *v9; // 0x40ac0a
    int64_t v11 = v8; // 0x40ac15
    int64_t v12 = v10; // 0x40ac15
    int64_t v13 = v4; // 0x40ac15
    int64_t v14 = v2; // 0x40ac15
    if (v8 + v6 > v5) {
        int64_t v15 = v6 + v5; // 0x40ad4a
        int64_t * mem = realloc((int64_t *)v10, 8 * (int32_t)v15); // 0x40ad55
        if (mem == NULL) {
            // 0x40ac98
            return 12;
        }
        // 0x40ad62
        v12 = (int64_t)mem;
        v11 = *v7;
        v14 = *v1;
        *v9 = v12;
        *(int64_t *)a1 = v15;
        v13 = *v3;
    }
    int64_t v16 = *(int64_t *)(a2 + 16); // 0x40ac1b
    int64_t v17 = *(int64_t *)(a3 + 16); // 0x40ac1f
    int64_t v18 = v13 - 1; // 0x40ac28
    int64_t v19 = v18; // 0x40ac3c
    int64_t v20 = v11 - 1; // 0x40ac3c
    int64_t v21 = *(int64_t *)(v17 + 8 * v18); // 0x40ac3c
    int64_t v22 = v13 + v11 + v14; // 0x40ac3c
    int64_t v23 = v14 - 1; // 0x40ac3c
    int64_t v24; // 0x40abd0
    int64_t v25; // 0x40abd0
    int64_t v26; // 0x40abd0
    int64_t v27; // 0x40abd0
    int64_t v28; // 0x40abd0
    int64_t v29; // 0x40abd0
    int64_t v30; // 0x40abd0
    int64_t v31; // 0x40abd0
    int64_t v32; // 0x40abd0
    int64_t v33; // 0x40abd0
    int64_t v34; // 0x40abd0
    int64_t v35; // 0x40abd0
    int64_t v36; // 0x40abd0
    int64_t v37; // 0x40abd0
    while (true) {
      lab_0x40ac40:;
        int64_t v38 = v21;
        int64_t v39 = *(int64_t *)(8 * v23 + v16);
        v26 = v24;
        v27 = v25;
        v32 = v19;
        v34 = v20;
        v21 = v38;
        v36 = v22;
        v30 = v39;
        v28 = v23;
        v33 = v19;
        v35 = v20;
        v37 = v22;
        v31 = v38;
        v29 = v23;
        if (v39 == v38) {
            goto lab_0x40ac56;
        } else {
            goto lab_0x40ac45;
        }
    }
  lab_0x40acb0_4:;
    int64_t v40 = *v7; // 0x40acb0
    int64_t v41 = *v1 + v40 + *v3; // 0x40acbb
    int64_t v42 = v40 - 1; // 0x40acc0
    int64_t v43; // 0x40abd0
    int64_t v44 = v41 - v43; // 0x40acc8
    *v7 = v44 + v40;
    int64_t v45; // 0x40abd0
    int64_t v46; // 0x40abd0
    if (v42 < 0 || v44 < 1) {
        // 0x40ad30
        v46 = 8 * v44;
        v45 = v12;
    } else {
        int64_t v47 = v42; // 0x40abd0
        int64_t v48 = v44; // 0x40abd0
        int64_t v49 = v41 - 1; // 0x40abd0
        while (true) {
            int64_t v50 = v47;
            int64_t v51 = v49;
            int64_t v52 = v48;
            uint64_t v53 = *(int64_t *)(8 * v51 + v12); // 0x40ace0
            uint64_t v54 = *(int64_t *)(8 * v50 + v12); // 0x40ace4
            int64_t v55 = 8 * (v52 + v50) + v12; // 0x40acec
            while (v53 > v54) {
                // 0x40acf5
                *(int64_t *)v55 = v53;
                int64_t v56 = v52 - 1; // 0x40acfc
                if (v56 == 0) {
                    // break (via goto) -> 0x40ad02
                    goto lab_0x40ad02;
                }
                v51--;
                v52 = v56;
                v53 = *(int64_t *)(8 * v51 + v12);
                v54 = *(int64_t *)(8 * v50 + v12);
                v55 = 8 * (v52 + v50) + v12;
            }
            // 0x40ad10
            *(int64_t *)v55 = v54;
            v47 = v50 - 1;
            v48 = v52;
            v49 = v51;
            if (v50 == 0) {
                // 0x40ad1d
                v46 = 8 * v52;
                v45 = *v9;
                goto lab_0x40ad34;
            }
        }
      lab_0x40ad02:
        // 0x40ad02
        v46 = 0;
        v45 = *v9;
    }
    goto lab_0x40ad34;
  lab_0x40ac78:;
    // 0x40ac78
    int64_t v58; // 0x40abd0
    int64_t v59 = v58 - 1; // 0x40ac78
    uint64_t v60; // 0x40abd0
    *(int64_t *)(8 * v59 + v12) = v60;
    int64_t v61; // 0x40abd0
    int64_t v62 = v61; // 0x40ac7c
    int64_t v63 = v59; // 0x40ac7c
    goto lab_0x40ac80;
  lab_0x40ac56:
    // 0x40ac56
    v60 = v31;
    v58 = v37;
    int64_t v72 = v35; // 0x40ac59
    v61 = v35;
    if (v35 >= 0) {
        int64_t v73 = v72;
        uint64_t v74 = *(int64_t *)(8 * v73 + v12); // 0x40ac6a
        while (v74 > v60) {
            // 0x40ac60
            v72 = v73 - 1;
            v61 = -1;
            if (v73 == 0) {
                goto lab_0x40ac78;
            }
            v73 = v72;
            v74 = *(int64_t *)(8 * v73 + v12);
        }
        // 0x40ac73
        v61 = v73;
        v62 = v73;
        v63 = v58;
        if (v74 == v60) {
            goto lab_0x40ac80;
        } else {
            goto lab_0x40ac78;
        }
    } else {
        goto lab_0x40ac78;
    }
  lab_0x40ac45:;
    int64_t v75 = v28;
    v22 = v36;
    v20 = v34;
    v19 = v32;
    int64_t v76 = v27;
    int64_t v77 = v26;
    int64_t v70; // 0x40abd0
    int64_t v69; // 0x40abd0
    int64_t v66; // 0x40abd0
    int64_t v67; // 0x40abd0
    int64_t v68; // 0x40abd0
    if (v77 < v76) {
        int64_t v78 = v19 - 1; // 0x40ac47
        v66 = v78;
        v67 = v20;
        v68 = v22;
        v69 = v30;
        v70 = v75;
        if (v78 < 0) {
            // break -> 0x40acb0
            goto lab_0x40acb0_4;
        }
        goto lab_0x40ac4d;
    } else {
        // 0x40aca0
        v23 = v75 - 1;
        v24 = v77;
        v25 = v76;
        v43 = v22;
        if (v23 < 0) {
            // break -> 0x40acb0
            goto lab_0x40acb0_4;
        }
        goto lab_0x40ac40;
    }
  lab_0x40ac80:;
    int64_t v64 = v29 - 1; // 0x40ac80
    v43 = v63;
    if (v64 < 0) {
        // break -> 0x40acb0
        goto lab_0x40acb0_4;
    }
    int64_t v65 = v33 - 1; // 0x40ac86
    v43 = v63;
    if (v65 < 0) {
        // break -> 0x40acb0
        goto lab_0x40acb0_4;
    }
    // 0x40ac8c
    v66 = v65;
    v67 = v62;
    v68 = v63;
    v69 = *(int64_t *)(8 * v64 + v16);
    v70 = v64;
    goto lab_0x40ac4d;
  lab_0x40ac4d:;
    int64_t v71 = *(int64_t *)(8 * v66 + v17); // 0x40ac4d
    v26 = v69;
    v27 = v71;
    v32 = v66;
    v34 = v67;
    v21 = v71;
    v36 = v68;
    v30 = v69;
    v28 = v70;
    v33 = v66;
    v35 = v67;
    v37 = v68;
    v31 = v69;
    v29 = v70;
    if (v69 != v71) {
        goto lab_0x40ac45;
    } else {
        goto lab_0x40ac56;
    }
  lab_0x40ad34:;
    int64_t v57 = v45;
    memcpy((int64_t *)v57, (int64_t *)(v57 + 8 * v43), (int32_t)v46);
    // 0x40ac98
    return 0;
}
// Address range: 0x40ad90 - 0x40ae67
int64_t function_40ad90(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = a2;
    int64_t v3; // 0x40ad90
    int64_t v4; // 0x40ad90
    int32_t v5; // 0x40ad90
    int64_t v6; // 0x40ad90
    if (v2 == 15) {
        int64_t * mem = malloc(968); // 0x40ae28
        if (mem == NULL) {
            // 0x40ae09
            return 0;
        }
        int64_t v7 = (int64_t)mem; // 0x40ae28
        *(int64_t *)a1 = v7;
        *mem = 968;
        v5 = 1;
        v6 = 0;
        v4 = 8;
        v3 = v7;
    } else {
        int64_t v8 = 0x100000000 * a2;
        int64_t v9 = v8 >> 26; // 0x40ada9
        v5 = v2 + 1;
        v6 = v9;
        v4 = v9 | 8;
        v3 = v8 >> 32;
    }
    int64_t v10 = a3;
    int64_t v11 = a4;
    *(int32_t *)a2 = v5;
    int64_t result = v3 + v4; // 0x40adb6
    int64_t v12 = v3 + v6;
    *(int64_t *)(v12 + 8) = 0;
    *(int64_t *)(v12 + 16) = v10;
    *(int64_t *)(v12 + 24) = v11;
    __asm_movups(*(int128_t *)(v12 + 48), __asm_movdqu(*(int128_t *)&v1));
    char * v13 = (char *)(v12 + 58); // 0x40addb
    *v13 = *v13 & -13;
    *(int64_t *)(v12 + 32) = 0;
    *(int64_t *)(v12 + 40) = 0;
    *(int64_t *)(v12 + 64) = -1;
    if (a3 != 0) {
        // 0x40adfe
        *(int64_t *)v10 = result;
    }
    // 0x40ae01
    if (a4 != 0) {
        // 0x40ae06
        *(int64_t *)v11 = result;
    }
    // 0x40ae09
    return result;
}
// Address range: 0x40ae70 - 0x40af19
int64_t function_40ae70(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 112; // 0x40ae74
    int64_t v2 = a2 + 128; // 0x40ae7a
    int64_t v3 = function_40ad90(v1, v2, 0, 0, a1 + 40); // 0x40aead
    int64_t v4 = v3; // bp-48, 0x40aeb2
    if (v3 == 0) {
        // 0x40aefd
        return 0;
    }
    *(int64_t *)v3 = a1;
    int64_t v5 = *&v4; // 0x40aebd
    char * v6 = (char *)(v5 + 50); // 0x40aec0
    *v6 = *v6 | 4;
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x40aec4
    int64_t v8; // 0x40ae70
    int64_t v9; // 0x40ae70
    int64_t result; // 0x40ae70
    int64_t v10; // 0x40ae70
    int64_t v11; // 0x40ae70
    int64_t v12; // 0x40ae70
    int64_t v13; // 0x40ae70
    int64_t v14; // 0x40ae70
    int64_t v15; // 0x40aee9
    int64_t v16; // 0x40aeec
    int64_t v17; // 0x40aedb
    int64_t v18; // 0x40aedb
    if (v7 != 0) {
        // 0x40ae98
        v13 = v7;
        v10 = v5;
        v9 = v5 + 8;
    } else {
        // 0x40aedb
        v18 = *(int64_t *)(a1 + 16);
        v11 = v5;
        v12 = v5;
        v8 = v18;
        if (v18 != 0 != v18 != 0) {
            v14 = a1;
            v15 = *(int64_t *)v14;
            if (v15 == 0) {
                // 0x40aef8
                result = v4;
                return result;
            }
            // 0x40aed8
            v16 = *(int64_t *)v11;
            v17 = *(int64_t *)(v15 + 16);
            v11 = v16;
            v12 = v16;
            v8 = v17;
            while (v17 != 0 != v17 != v14) {
                // 0x40aee9
                v14 = v15;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40aef8
                    result = v4;
                    return result;
                }
                // 0x40aed8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
            }
        }
        // 0x40af10
        v13 = v8;
        v10 = v12;
        v9 = v12 + 16;
    }
    int64_t v19 = v13;
    int64_t v20 = function_40ad90(v1, v2, 0, 0, v19 + 40); // 0x40aead
    int64_t * v21 = (int64_t *)v9; // 0x40aeb2
    *v21 = v20;
    result = 0;
    while (v20 != 0) {
        int64_t v22 = v19;
        *(int64_t *)v20 = v10;
        v5 = *v21;
        v6 = (char *)(v5 + 50);
        *v6 = *v6 | 4;
        v7 = *(int64_t *)(v22 + 8);
        if (v7 != 0) {
            // 0x40ae98
            v13 = v7;
            v10 = v5;
            v9 = v5 + 8;
        } else {
            // 0x40aedb
            v18 = *(int64_t *)(v22 + 16);
            v11 = v5;
            int64_t v23 = v22; // 0x40aee2
            v12 = v5;
            v8 = v18;
            if (v18 != 0 != v18 != 0) {
                v14 = v23;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40aef8
                    result = v4;
                    return result;
                }
                // 0x40aed8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
                while (v17 != 0 != v17 != v14) {
                    // 0x40aee9
                    v14 = v15;
                    v15 = *(int64_t *)v14;
                    if (v15 == 0) {
                        // 0x40aef8
                        result = v4;
                        return result;
                    }
                    // 0x40aed8
                    v16 = *(int64_t *)v11;
                    v17 = *(int64_t *)(v15 + 16);
                    v11 = v16;
                    v12 = v16;
                    v8 = v17;
                }
            }
            // 0x40af10
            v13 = v8;
            v10 = v12;
            v9 = v12 + 16;
        }
        // 0x40ae9f
        v19 = v13;
        v20 = function_40ad90(v1, v2, 0, 0, v19 + 40);
        v21 = (int64_t *)v9;
        *v21 = v20;
        result = 0;
    }
  lab_0x40aefd:
    // 0x40aefd
    return result;
}
// Address range: 0x40af20 - 0x40b13a
int64_t function_40af20(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = *(int64_t *)(a3 + 8); // 0x40af34
    int64_t v1; // 0x40af20
    int64_t v2; // 0x40af20
    int64_t v3; // 0x40af20
    int64_t v4; // 0x40af20
    int64_t v5; // 0x40af20
    int64_t v6; // bp-72, 0x40af20
    int64_t v7; // 0x40af20
    int64_t v8; // 0x40af6f
    int64_t v9; // 0x40af76
    int64_t v10; // 0x40af20
    int64_t v11; // 0x40af99
    int64_t v12; // 0x40afb3
    if ((*(char *)(a2 + 56) & 16) == 0) {
        int64_t v13 = a2 + 128; // 0x40b0c8
        int64_t v14 = a2 + 112; // 0x40b0cf
        int64_t v15 = &v6;
        int64_t v16 = function_40ad90(v14, v13, 0, 0, v15); // 0x40b0f2
        int64_t v17 = function_40ad90(v14, v13, 0, 0, v15); // 0x40b10c
        v10 = v15;
        v8 = v13;
        v11 = v16;
        v9 = v14;
        v12 = v17;
        v1 = v15;
        v7 = v13;
        v5 = v16;
        v2 = v17;
        v3 = v14;
        v4 = v17;
        if (result != 0) {
            goto lab_0x40afbb;
        } else {
            goto lab_0x40afd9;
        }
    } else {
        if (result == 0) {
            int64_t v18 = a2 + 128; // 0x40b070
            int64_t v19 = a2 + 112; // 0x40b077
            int64_t v20 = &v6;
            int64_t v21 = function_40ad90(v19, v18, 0, 0, v20); // 0x40b09a
            int64_t v22 = function_40ad90(v19, v18, 0, 0, v20); // 0x40b0b4
            v1 = v20;
            v7 = v18;
            v5 = v21;
            v2 = v22;
            v3 = v19;
            v4 = v22;
            goto lab_0x40afd9;
        } else {
            uint64_t v23 = *(int64_t *)(a3 + 40); // 0x40af50
            if (v23 > 63 || (*(int64_t *)(a2 + 160) & 1 << v23 % 64) == 0) {
                // 0x40b057
                return result;
            }
            // 0x40af6f
            v8 = a2 + 128;
            v9 = a2 + 112;
            v10 = &v6;
            v11 = function_40ad90(v9, v8, 0, 0, v10);
            v12 = function_40ad90(v9, v8, 0, 0, v10);
            goto lab_0x40afbb;
        }
    }
  lab_0x40afbb:;
    int64_t v24 = function_40ad90(v9, v8, (int32_t)result, (int32_t)v12, v10); // 0x40afd1
    v1 = v10;
    v7 = v8;
    v5 = v11;
    v2 = v24;
    v3 = v9;
    v4 = v12;
    goto lab_0x40afd9;
  lab_0x40afd9:;
    int64_t v25 = function_40ad90(v3, v7, (int32_t)v5, (int32_t)v2, v1); // 0x40aff4
    int64_t result2; // 0x40af20
    if (v4 == 0 || v5 == 0 || v2 == 0 || v25 == 0) {
        // 0x40b128
        *a1 = 12;
        result2 = 0;
    } else {
        int64_t v26 = *(int64_t *)(a3 + 40); // 0x40b025
        *(int64_t *)(v4 + 40) = v26;
        *(int64_t *)(v5 + 40) = v26;
        char * v27 = (char *)(v4 + 50); // 0x40b038
        char v28 = *(char *)(a3 + 50) & 8;
        *v27 = *v27 & -9 | v28;
        char * v29 = (char *)(v5 + 50); // 0x40b04b
        *v29 = *v29 & -9 | v28;
        result2 = v25;
    }
    // 0x40b057
    return result2;
}
// Address range: 0x40b140 - 0x40b1bb
int64_t function_40b140(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40b14c
    int64_t v2 = *v1; // 0x40b14c
    int32_t result = 0; // bp-28, 0x40b150
    int64_t v3; // 0x40b140
    if (v2 != 0) {
        // 0x40b15d
        if (*(char *)(v2 + 48) == 17) {
            int64_t v4 = function_40af20(&result, a1, v2, v3); // 0x40b188
            *v1 = v4;
            if (v4 != 0) {
                // 0x40b196
                *(int64_t *)v4 = a2;
            }
        }
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x40b163
    int64_t v6 = *v5; // 0x40b163
    if (v6 == 0 || *(char *)(v6 + 48) != 17) {
        // 0x40b172
        return result;
    }
    int64_t v7 = function_40af20(&result, a1, v6, v3); // 0x40b1a8
    *v5 = v7;
    if (v7 != 0) {
        // 0x40b1b6
        *(int64_t *)v7 = a2;
    }
    // 0x40b172
    return result;
}
// Address range: 0x40b1c0 - 0x40b23f
int64_t function_40b1c0(int64_t a1, int64_t a2) {
    // 0x40b1c0
    int128_t v1; // 0x40b1c0
    int128_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40b1c0
    *(int64_t *)(a1 + 8) = v4;
    if (v4 < 1) {
        int128_t v5 = __asm_pxor(v2, v2); // 0x40b210
        *(int64_t *)(v3 + 16) = 0;
        __asm_movups(*(int128_t *)&v3, v5);
        return 0;
    }
    int64_t * v6 = (int64_t *)v3; // 0x40b1df
    *v6 = v4;
    int32_t size = 8 * (int32_t)v4; // 0x40b1e5
    int64_t * mem = malloc(size); // 0x40b1e5
    *(int64_t *)(v3 + 16) = (int64_t)mem;
    int64_t result; // 0x40b1c0
    if (mem == NULL) {
        // 0x40b228
        *(int64_t *)(v3 + 8) = 0;
        *v6 = 0;
        result = 12;
    } else {
        // 0x40b1f3
        memcpy(mem, (int64_t *)*(int64_t *)(a2 + 16), size);
        result = 0;
    }
    // 0x40b205
    return result;
}
// Address range: 0x40b240 - 0x40b3c2
int64_t function_40b240(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b240
    int128_t v1; // 0x40b240
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    if (a2 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 8); // 0x40b257
        int64_t v5 = *v4; // 0x40b257
        if (a3 != 0 && v5 >= 1) {
            int64_t * v6 = (int64_t *)(a3 + 8); // 0x40b26d
            uint64_t v7 = *v6; // 0x40b26d
            if (v7 < 1) {
                // 0x40b343
                return function_40b1c0(v3, a2);
            }
            int64_t v8 = v7 + v5; // 0x40b27d
            *a1 = v8;
            int64_t * mem = malloc(8 * (int32_t)v8); // 0x40b28f
            int64_t v9 = (int64_t)mem; // 0x40b28f
            *(int64_t *)(v3 + 16) = v9;
            if (mem == NULL) {
                // 0x40b32a
                return 12;
            }
            int64_t v10 = *(int64_t *)(a2 + 16); // 0x40b2a4
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v9;
            int64_t v14 = *(int64_t *)(a3 + 16); // 0x40b2e8
            int64_t v15 = *(int64_t *)v10; // 0x40b2ec
            int64_t v16 = *(int64_t *)(v14 + 8 * v11); // 0x40b2f3
            int64_t v17; // 0x40b240
            int64_t v18; // 0x40b240
            if (v15 > v16) {
                // 0x40b2fc
                *(int64_t *)v13 = v16;
                v17 = v11 + 1;
                v18 = v12;
            } else {
                // 0x40b2b8
                *(int64_t *)v13 = v15;
                v17 = v11 + (int64_t)(v15 == v16);
                v18 = v12 + 1;
            }
            int64_t v19 = 1; // 0x40b2ef
            int64_t v20 = v18;
            int64_t v21 = v17;
            uint64_t v22 = *v4; // 0x40b2ca
            int64_t v23; // 0x40b240
            while (v22 > v20) {
                int64_t v24 = v13 + 8; // 0x40b2ce
                int64_t v25 = 8 * v20 + v10; // 0x40b2db
                if (v7 <= v21) {
                    int64_t v26 = v22 - v20; // 0x40b3a0
                    memcpy((int64_t *)v24, (int64_t *)v25, 8 * (int32_t)v26);
                    v23 = v26 + v19;
                    goto lab_0x40b369;
                }
                v11 = v21;
                v12 = v20;
                v13 = v24;
                v14 = *(int64_t *)(a3 + 16);
                v15 = *(int64_t *)v25;
                v16 = *(int64_t *)(v14 + 8 * v11);
                if (v15 > v16) {
                    // 0x40b2fc
                    *(int64_t *)v13 = v16;
                    v17 = v11 + 1;
                    v18 = v12;
                } else {
                    // 0x40b2b8
                    *(int64_t *)v13 = v15;
                    v17 = v11 + (int64_t)(v15 == v16);
                    v18 = v12 + 1;
                }
                // 0x40b2ca
                v19++;
                v20 = v18;
                v21 = v17;
                v22 = *v4;
            }
            int64_t v27 = *v6; // 0x40b360
            v23 = v19;
            if (v27 > v21) {
                int64_t v28 = v27 - v21; // 0x40b38b
                memcpy((int64_t *)(8 * v19 + v9), (int64_t *)(8 * v21 + v14), 8 * (int32_t)v28);
                v23 = v28 + v19;
            }
          lab_0x40b369:
            // 0x40b369
            *(int64_t *)(v3 + 8) = v23;
            return 0;
        }
        // 0x40b308
        if (v5 >= 0 == (v5 != 0)) {
            // 0x40b343
            return function_40b1c0(v3, a2);
        }
    }
    if (a3 != 0) {
        int64_t v29 = *(int64_t *)(a3 + 8); // 0x40b312
        if (v29 >= 0 == (v29 != 0)) {
            // 0x40b343
            return function_40b1c0(v3, a3);
        }
    }
    // 0x40b319
    *(int64_t *)(v3 + 16) = 0;
    *(int128_t *)a1 = (int128_t)__asm_movaps(__asm_pxor(v2, v2));
    // 0x40b32a
    return 0;
}
// Address range: 0x40b3d0 - 0x40b6d0
int64_t function_40b3d0(int128_t * a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40b3de
    uint64_t v3 = *v2; // 0x40b3de
    if (v3 == 0) {
        // 0x40b6a8
        *(int32_t *)a1 = 0;
        // 0x40b477
        return 0;
    }
    uint64_t v4 = (int64_t)a4;
    int64_t v5 = v3 + (v4 & 0xffffffff); // 0x40b3ee
    int64_t v6 = v5; // 0x40b3f2
    if (v3 >= 1) {
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x40b3f4
        int64_t v8 = v7; // 0x40b3fc
        int64_t v9 = v5; // 0x40b3fc
        v9 += *(int64_t *)v8;
        v8 += 8;
        v6 = v9;
        while (v7 + 8 * v3 != v8) {
            // 0x40b400
            v9 += *(int64_t *)v8;
            v8 += 8;
            v6 = v9;
        }
    }
    int64_t v10 = *(int64_t *)(a2 + 136) & v6; // 0x40b421
    int64_t v11 = 24 * v10 + *(int64_t *)(a2 + 64); // 0x40b42c
    uint64_t v12 = *(int64_t *)v11; // 0x40b430
    if (v12 >= 1) {
        int64_t v13 = 0; // 0x40b442
        int64_t v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16)); // 0x40b451
        int64_t result; // 0x40b3d0
        if (*(int64_t *)v14 == v6) {
            // 0x40b45a
            if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                // 0x40b467
                result = v14;
                if ((char)function_408570(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                    // 0x40b477
                    return result;
                }
            }
        }
        // 0x40b448
        v13++;
        while (v13 != v12) {
            // 0x40b451
            v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16));
            if (*(int64_t *)v14 == v6) {
                // 0x40b45a
                if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                    // 0x40b467
                    result = v14;
                    if ((char)function_408570(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                        // 0x40b477
                        return result;
                    }
                }
            }
            // 0x40b448
            v13++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40b49a
    if (mem == NULL) {
        // 0x40b628
        *(int32_t *)a1 = 12;
        // 0x40b477
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40b49a
    int64_t v15 = result2 + 8; // 0x40b4ab
    if ((int32_t)function_40b1c0(v15, v1) != 0) {
        // 0x40b6c3
        free(mem);
        // 0x40b628
        *(int32_t *)a1 = 12;
        // 0x40b477
        return 0;
    }
    char * v16 = (char *)(result2 + 104); // 0x40b4c6
    *v16 = *v16 & -16 | (char)a4 % 16;
    int64_t * v17 = (int64_t *)(result2 + 80); // 0x40b4e6
    *v17 = v15;
    int64_t v18; // 0x40b3d0
    int64_t v19; // 0x40b3d0
    int64_t v20; // 0x40b3d0
    int64_t v21; // 0x40b3d0
    int64_t v22; // 0x40b3d0
    int64_t v23; // 0x40b3d0
    int64_t v24; // 0x40b3d0
    int64_t v25; // 0x40b3d0
    int64_t v26; // 0x40b4f0
    int64_t v27; // 0x40b3d0
    int64_t * v28; // 0x40b3d0
    uint64_t v29; // 0x40b52a
    if (*v2 >= 1) {
        // 0x40b4f0
        v26 = result2 + 24;
        v27 = result2 + 16;
        v28 = (int64_t *)v27;
        v23 = v1;
        v18 = 0;
        v21 = 0;
        while (true) {
          lab_0x40b510:
            // 0x40b510
            v22 = v21;
            int64_t v30 = v18;
            int64_t v31 = 16 * *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v22) + v23; // 0x40b51c
            int64_t v32 = v31 + 8; // 0x40b520
            uint32_t v33 = *(int32_t *)v32; // 0x40b520
            unsigned char v34 = *(char *)v32; // 0x40b523
            v25 = 1;
            v20 = v30;
            if (v34 == 1 == (v33 & 0x3ff00) == 0) {
                goto lab_0x40b5ee;
            } else {
                char v35 = 2 * *(char *)(v31 + 10) & 32 | *v16;
                *v16 = v35;
                if (v34 == 2) {
                    // 0x40b640
                    *v16 = v35 | 16;
                } else {
                    if (v34 == 4) {
                        // 0x40b574
                        *v16 = v35 | 64;
                    }
                }
                int64_t v36 = v34; // 0x40b523
                v25 = v36;
                v20 = v30;
                if ((v33 & 0x3ff00) == 0) {
                    goto lab_0x40b5ee;
                } else {
                    int64_t v37 = v36; // 0x40b589
                    int64_t v38 = v30; // 0x40b589
                    if (v15 == *v17) {
                        int64_t * mem2 = malloc(24); // 0x40b675
                        int64_t v39 = (int64_t)mem2; // 0x40b675
                        *v17 = v39;
                        if (mem2 == NULL) {
                            // 0x40b6b6
                            function_409cf0(result2);
                            goto lab_0x40b628;
                        }
                        // 0x40b684
                        if ((int32_t)function_40b1c0(v39, v1) != 0) {
                          lab_0x40b628:
                            // 0x40b628
                            *(int32_t *)a1 = 12;
                            // 0x40b477
                            return 0;
                        }
                        // 0x40b693
                        *v16 = *v16 | -128;
                        v37 = v1;
                        v38 = 0;
                    }
                    // 0x40b58f
                    v29 = (int64_t)(v33 / 256 & 0xff03ff);
                    v19 = v38;
                    v24 = v37;
                    if (v29 % 2 == 0) {
                        if (v4 % 2 == 0 || (v29 & 2) == 0) {
                            goto lab_0x40b5a3;
                        } else {
                            goto lab_0x40b5c0;
                        }
                    } else {
                        if (v4 % 2 == 0) {
                            goto lab_0x40b5c0;
                        } else {
                            if ((v29 & 2) != 0) {
                                goto lab_0x40b5c0;
                            } else {
                                goto lab_0x40b5a3;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40b604:
    // 0x40b604
    if ((int32_t)function_408c40(a2, result2, v6) == 0) {
        // 0x40b477
        return result2;
    }
    // 0x40b61a
    function_409cf0(result2);
    // 0x40b628
    *(int32_t *)a1 = 12;
    // 0x40b477
    return 0;
  lab_0x40b5ee:;
    int64_t v40 = v22 + 1; // 0x40b5ee
    v23 = v25;
    v18 = v20;
    v21 = v40;
    if (v40 >= *v2) {
        // break -> 0x40b604
        goto lab_0x40b604;
    }
    goto lab_0x40b510;
  lab_0x40b5a3:
    if ((v4 & 2) == 0 == ((v29 & 16) != 0)) {
        goto lab_0x40b5c0;
    } else {
        // 0x40b5ae
        v25 = v24;
        v20 = v19;
        if ((v4 & 4) != 0 || (v29 & 64) == 0) {
            goto lab_0x40b5ee;
        } else {
            goto lab_0x40b5c0;
        }
    }
  lab_0x40b5c0:;
    int64_t v41 = v22 - v19; // 0x40b5c3
    int64_t v42 = v24; // 0x40b5c6
    if (v41 >= 0) {
        int64_t v43 = *v28; // 0x40b5c8
        v42 = v24;
        if (v41 < v43) {
            // 0x40b5d2
            *v28 = v43 - 1;
            function_40a290(v27, v26, v41);
            v42 = v26;
        }
    }
    // 0x40b5ea
    v25 = v42;
    v20 = v19 + 1;
    goto lab_0x40b5ee;
}
// Address range: 0x40b6d0 - 0x40b8b8
int64_t function_40b6d0(int32_t * a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40b6de
    int64_t v3 = *v2; // 0x40b6de
    if (v3 == 0) {
        // 0x40b8a4
        *a1 = 0;
        // 0x40b84f
        return 0;
    }
    int64_t v4 = v3; // 0x40b6eb
    if (v3 >= 1) {
        int64_t v5 = *(int64_t *)(v1 + 16); // 0x40b6ed
        int64_t v6 = v5; // 0x40b6f5
        int64_t v7 = v3; // 0x40b6f5
        v7 += *(int64_t *)v6;
        v6 += 8;
        v4 = v7;
        while (v5 + 8 * v3 != v6) {
            // 0x40b6f8
            v7 += *(int64_t *)v6;
            v6 += 8;
            v4 = v7;
        }
    }
    int64_t v8 = *(int64_t *)(a2 + 136) & v4; // 0x40b714
    int64_t v9 = 24 * v8 + *(int64_t *)(a2 + 64); // 0x40b71f
    uint64_t v10 = *(int64_t *)v9; // 0x40b723
    if (v10 >= 1) {
        int64_t v11 = 0; // 0x40b732
        int64_t v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16)); // 0x40b738
        int64_t result; // 0x40b6d0
        int64_t v13; // 0x40b748
        if (*(int64_t *)v12 == v4) {
            // 0x40b741
            v13 = function_408570(v12 + 8, v1, 3 * v8);
            result = v12;
            if ((char)v13 != 0) {
                // 0x40b84f
                return result;
            }
        }
        // 0x40b755
        v11++;
        while (v10 != v11) {
            // 0x40b738
            v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16));
            if (*(int64_t *)v12 == v4) {
                // 0x40b741
                v13 = function_408570(v12 + 8, v1, 3 * v8);
                result = v12;
                if ((char)v13 != 0) {
                    // 0x40b84f
                    return result;
                }
            }
            // 0x40b755
            v11++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40b768
    if (mem == NULL) {
        // 0x40b898
        *a1 = 12;
        // 0x40b84f
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40b768
    int64_t v14 = result2 + 8; // 0x40b779
    if ((int32_t)function_40b1c0(v14, v1) != 0) {
        // 0x40b890
        free(mem);
        // 0x40b898
        *a1 = 12;
        // 0x40b84f
        return 0;
    }
    uint64_t v15 = *v2; // 0x40b790
    *(int64_t *)(result2 + 80) = v14;
    char v16; // 0x40b6d0
    int64_t v17; // 0x40b6d0
    int64_t v18; // 0x40b6d0
    int64_t v19; // 0x40b7a9
    char * v20; // 0x40b6d0
    if (v15 >= 1) {
        int64_t v21 = *(int64_t *)(v1 + 16); // 0x40b7a1
        v19 = v21 + 8 * v15;
        v20 = (char *)(result2 + 104);
        v17 = v21;
        while (true) {
          lab_0x40b7f4_2:
            // 0x40b7f4
            v18 = v17;
            int64_t v22 = 16 * *(int64_t *)v18 + v21; // 0x40b7fb
            int64_t v23 = v22 + 8; // 0x40b7fe
            char v24 = *(char *)v23; // 0x40b7fe
            if (v24 != 1) {
                char v25 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                *v20 = v25;
                if (v24 == 2) {
                    // 0x40b868
                    *v20 = v25 | 16;
                    goto lab_0x40b7eb;
                } else {
                    if (v24 != 4) {
                        // 0x40b878
                        v16 = v25;
                        if (v24 == 12) {
                            goto lab_0x40b830;
                        } else {
                            // 0x40b87d
                            v16 = v25;
                            if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                                goto lab_0x40b7eb;
                            } else {
                                goto lab_0x40b830;
                            }
                        }
                    } else {
                        // 0x40b7e5
                        *v20 = v25 | 64;
                        goto lab_0x40b7eb;
                    }
                }
            } else {
                // 0x40b807
                if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                    goto lab_0x40b7eb;
                } else {
                    char v26 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                    *v20 = v26;
                    v16 = v26;
                    goto lab_0x40b830;
                }
            }
        }
    }
  lab_0x40b83d_2:
    // 0x40b83d
    if ((int32_t)function_408c40(a2, result2, v4) == 0) {
        // 0x40b84f
        return result2;
    }
    // 0x40b8ae
    function_409cf0(result2);
    // 0x40b898
    *a1 = 12;
    // 0x40b84f
    return 0;
  lab_0x40b7eb:;
    int64_t v27 = v18 + 8; // 0x40b7eb
    if (v19 == v27) {
        // break -> 0x40b83d
        goto lab_0x40b83d_2;
    }
    // 0x40b7f4
    v17 = v27;
    goto lab_0x40b7f4_2;
  lab_0x40b830:;
    int64_t v28 = v18 + 8; // 0x40b830
    *v20 = v16 | -128;
    if (v19 == v28) {
        // break -> 0x40b83d
        goto lab_0x40b83d_2;
    }
    // 0x40b7f4
    v17 = v28;
    goto lab_0x40b7f4_2;
}
// Address range: 0x40b8c0 - 0x40b968
int64_t function_40b8c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b8c0
    if (a4 < 1) {
        // 0x40b958
        return 0;
    }
    int64_t v1 = 0; // 0x40b8c0
    int64_t result; // 0x40b8c0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = 8 * v2; // 0x40b939
        int64_t * v4 = (int64_t *)(v3 + a2); // 0x40b939
        int64_t v5 = *v4; // 0x40b939
        int64_t v6 = *(int64_t *)(v3 + a3); // 0x40b93e
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x40b8ed
                int64_t v7; // bp-72, 0x40b8c0
                int64_t v8 = function_40b240(&v7, v5 + 8, v6 + 8, a4); // 0x40b8fa
                int32_t v9 = v8; // 0x40b8ff
                int32_t v10 = v9; // bp-76, 0x40b8ff
                result = v8;
                if (v9 != 0) {
                    // break -> 0x40b958
                    break;
                }
                // 0x40b907
                int64_t v11; // 0x40b8c0
                *v4 = function_40b6d0(&v10, a1, &v7, a4, v11, v11);
                free((int64_t *)v11);
                uint32_t v12 = v10; // 0x40b928
                if (v12 != 0) {
                    // 0x40b958
                    result = v12;
                    return result;
                }
            }
            int64_t v13 = v2 + 1; // 0x40b930
            v1 = v13;
            result = 0;
            if (v13 == a4) {
                // break -> 0x40b958
                break;
            }
        } else {
            // 0x40b948
            *v4 = v6;
            int64_t v14 = v2 + 1; // 0x40b94d
            v1 = v14;
            result = 0;
            if (v14 == a4) {
                // break -> 0x40b958
                break;
            }
        }
    }
  lab_0x40b958_2:
    // 0x40b958
    return result;
}
// Address range: 0x40b970 - 0x40bcf2
int64_t function_40b970(int64_t a1, int128_t * a2, uint64_t a3, int64_t a4, int32_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 200); // 0x40b981
    if (v1 <= 0) {
        // 0x40bc72
        return 0;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(a1 + 216); // 0x40b994
    int64_t v4 = *v3; // 0x40b994
    int64_t v5 = v4 + 8; // 0x40b9ac
    int64_t v6 = 0;
    uint64_t v7 = v6 + v1; // 0x40b990
    int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x40b9a5
    int64_t v9 = v8; // 0x40b9b1
    int64_t v10 = v8; // 0x40b9b1
    int64_t v11 = v1; // 0x40b9b1
    int64_t v12; // 0x40b970
    int64_t v13; // 0x40b970
    uint64_t v14; // 0x40b9c0
    int64_t v15; // 0x40b9ce
    if (*(int64_t *)(40 * v8 + v5) >= a3) {
        v12 = v6;
        if (v9 <= v6) {
            // break (via goto) -> 0x40b9eb
            goto lab_0x40b9eb;
        }
        // 0x40b9c0
        v14 = v9 + v6;
        v15 = (v14 / 0x8000000000000000 + v14) / 2;
        v10 = v15;
        v11 = v9;
        while (*(int64_t *)(40 * v15 + v5) >= a3) {
            // 0x40b9e6
            v13 = v15;
            v12 = v6;
            if (v13 <= v6) {
                // break (via goto) -> 0x40b9eb
                goto lab_0x40b9eb;
            }
            // 0x40b9c0
            v14 = v13 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v13;
        }
    }
    int64_t v16 = v10 + 1; // 0x40bc60
    v12 = v16;
    while (v16 < v11) {
        // 0x40b990
        v6 = v16;
        v7 = v6 + v11;
        v8 = (v7 / 0x8000000000000000 + v7) / 2;
        v9 = v8;
        v10 = v8;
        if (*(int64_t *)(40 * v8 + v5) >= a3) {
            v12 = v6;
            if (v9 <= v6) {
                // break (via goto) -> 0x40b9eb
                goto lab_0x40b9eb;
            }
            // 0x40b9c0
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v9;
            while (*(int64_t *)(40 * v15 + v5) >= a3) {
                // 0x40b9e6
                v13 = v15;
                v12 = v6;
                if (v13 <= v6) {
                    // break (via goto) -> 0x40b9eb
                    goto lab_0x40b9eb;
                }
                // 0x40b9c0
                v14 = v13 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v15;
                v11 = v13;
            }
        }
        // 0x40bc60
        v16 = v10 + 1;
        v12 = v16;
    }
  lab_0x40b9eb:
    // 0x40b9eb
    if (v1 <= v12) {
        // 0x40bc72
        return 0;
    }
    int64_t v17 = 40 * v12; // 0x40b9ff
    if (v12 == -1 | *(int64_t *)(v17 + 8 + v4) != a3) {
        // 0x40bc72
        return 0;
    }
    int64_t v18 = v2 + 16; // 0x40ba26
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x40ba35
    int64_t * v20 = (int64_t *)(a1 + 184);
    int64_t v21; // bp-88, 0x40b970
    int64_t v22 = &v21;
    int64_t v23 = v4; // 0x40ba3f
    int64_t * v24; // 0x40b970
    int64_t v25; // 0x40b970
    int64_t v26; // 0x40b970
    int64_t result; // 0x40b970
    int64_t v27; // 0x40b970
    int64_t v28; // 0x40b970
    int64_t v29; // 0x40b970
    int64_t v30; // 0x40b970
    int32_t v31; // bp-92, 0x40b970
    int64_t v32; // 0x40bb48
    int64_t v33; // 0x40ba63
    int64_t v34; // 0x40ba67
    int64_t v35; // 0x40ba77
    while (true) {
        // 0x40ba43
        int64_t v36; // 0x40b970
        v29 = v36;
        v25 = v23 + v17;
        int64_t v37; // 0x40bb72
        while (true) {
          lab_0x40bb28:
            // 0x40bb28
            v26 = v25;
            v30 = v29;
            int64_t v38 = *(int64_t *)v26; // 0x40bb28
            int64_t v39 = *(int64_t *)(v2 + 8); // 0x40bb2b
            v28 = v30;
            if (function_40a120(v39, v18, v38) == 0) {
                goto lab_0x40bb19;
            } else {
                // 0x40bb44
                v32 = *(int64_t *)(v26 + 24) + a3;
                int64_t v40 = v32 - *(int64_t *)(v26 + 16); // 0x40bb4e
                if (v40 != a3) {
                    // 0x40ba58
                    v33 = *(int64_t *)(*(int64_t *)(v19 + 24) + 8 * v38);
                    v34 = 8 * v40;
                    int64_t * v41 = (int64_t *)(*v20 + v34);
                    v35 = *v41;
                    if (v35 == 0) {
                        // 0x40bc10
                        v21 = 1;
                        int64_t * mem = malloc(8); // 0x40bc2c
                        if (mem == NULL) {
                            // 0x40bcb2
                            result = 12;
                            return result;
                        }
                        // 0x40bc3b
                        v31 = 0;
                        *mem = v33;
                        v24 = v41;
                        v27 = (int64_t)mem;
                        goto lab_0x40bade;
                    } else {
                        // 0x40ba88
                        v28 = v30;
                        if (function_40a120(*(int64_t *)(v35 + 16), v35 + 24, v33) != 0) {
                            goto lab_0x40bb19;
                        } else {
                            // 0x40ba9d
                            v31 = function_40b1c0(v22, v35 + 8);
                            int64_t v42 = function_408b10(v22, v33); // 0x40bab9
                            if (v31 != 0) {
                                goto lab_0x40bca0_2;
                            }
                            if ((char)v42 != 1) {
                                goto lab_0x40bca0_2;
                            }
                            // 0x40bad2
                            v24 = (int64_t *)(*v20 + v34);
                            v27 = v30;
                            goto lab_0x40bade;
                        }
                    }
                } else {
                    int64_t v43 = *(int64_t *)(v19 + 40); // 0x40bb5b
                    v37 = *(int64_t *)*(int64_t *)(24 * v38 + 16 + v43);
                    v28 = v30;
                    if (function_40a120(v39, v18, v37) == 0) {
                        // break -> 0x40bb82
                        break;
                    }
                    goto lab_0x40bb19;
                }
            }
        }
        // 0x40bb82
        v21 = 1;
        int64_t * mem2 = malloc(8); // 0x40bb99
        int32_t v44; // 0x40b970
        if (mem2 == NULL) {
            // 0x40bcd6
            v21 = 0;
            v44 = 12;
        } else {
            // 0x40bbac
            *mem2 = v37;
            v44 = 0;
        }
        // 0x40bbb1
        v31 = v44;
        int64_t v45 = function_40aa90(v19, &v21, a4, a5); // 0x40bbc6
        int64_t v46 = function_40a660((int64_t *)a2, (int128_t *)&v21); // 0x40bbd6
        free(mem2);
        uint32_t v47 = v31; // 0x40bbe8
        if ((v47 || (int32_t)(v46 || v45)) != 0) {
            // 0x40bcc6
            result = v47;
            if (v47 != 0) {
                return result;
            } else {
                // 0x40bcca
                result = ((int32_t)v45 != 0 ? v45 : v46) & 0xffffffff;
                return result;
            }
        }
        // 0x40bbfa
        v36 = (int64_t)mem2;
        v23 = *v3;
    }
  lab_0x40bc72:
    // 0x40bc72
    return result;
  lab_0x40bca0_2:
    // 0x40bca0
    free((int64_t *)v30);
    result = v31;
    if (v31 != 0) {
        return result;
    } else {
        // 0x40bcb2
        result = 12;
        return result;
    }
  lab_0x40bb19:
    // 0x40bb19
    v29 = v28;
    v25 = v26 + 40;
    result = 0;
    if (*(char *)(v26 + 32) == 0) {
        return result;
    }
    goto lab_0x40bb28;
  lab_0x40bade:;
    int64_t v48 = v27;
    *v24 = function_40b6d0(&v31, v19, &v21, v33, v32, v35);
    free((int64_t *)v48);
    v28 = v48;
    if (*(int64_t *)(*v20 + v34) == 0) {
        uint32_t v49 = v31; // 0x40bc88
        v28 = v48;
        if (v49 != 0) {
            // 0x40bc72
            result = v49;
            goto lab_0x40bc72;
        }
    }
    goto lab_0x40bb19;
}
// Address range: 0x40bd00 - 0x40be41
int64_t function_40bd00(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x40bd12
    if (a2 < 1) {
      lab_0x40bde2:
        // 0x40bde2
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 232);
    int64_t * v3 = (int64_t *)(a1 + 248);
    int64_t * v4 = (int64_t *)(a1 + 240);
    int64_t v5 = 0; // 0x40bd30
    int64_t v6; // 0x40bd00
    int64_t v7; // 0x40bd40
    int64_t v8; // 0x40bd4b
    uint64_t v9; // 0x40bd55
    while (true) {
        // 0x40bd3d
        v6 = v5;
        v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
        v8 = 16 * v7 + *(int64_t *)v1;
        if (*(char *)(v8 + 8) == 8) {
            // 0x40bd55
            v9 = *(int64_t *)v8;
            if (v9 <= 63) {
                // 0x40bd5e
                if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                    // break -> 0x40bd6c
                    break;
                }
            }
        }
        // 0x40bd30
        v5 = v6 + 1;
        if (v5 >= a2) {
            return 0;
        }
    }
    int64_t v10 = *v2; // 0x40bd6c
    int64_t v11 = *v3; // 0x40bd73
    int64_t v12 = v10; // 0x40bd81
    int64_t v13 = v11; // 0x40bd81
    int64_t * mem; // 0x40be10
    if (v10 == *v4) {
        // 0x40bdf8
        mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
        if (mem == NULL) {
            // break -> 0x40bde2
            break;
        }
        // 0x40be22
        v13 = (int64_t)mem;
        *v3 = v13;
        v12 = *v2;
        *v4 = 2 * v10;
    }
    int64_t * mem2 = calloc(1, 48); // 0x40bd9c
    int64_t v14 = (int64_t)mem2; // 0x40bd9c
    *(int64_t *)(v13 + 8 * v12) = v14;
    int64_t result = 12; // 0x40bdb2
    while (mem2 != NULL) {
        // 0x40bdb4
        *mem2 = a4;
        int64_t v15 = v6 + 1; // 0x40bdc0
        *(int64_t *)(v14 + 8) = v7;
        *v2 = v12 + 1;
        result = 0;
        if (v15 >= 48) {
            // break -> 0x40bde2
            break;
        }
        v5 = v15;
        while (true) {
            // 0x40bd3d
            v6 = v5;
            v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
            v8 = 16 * v7 + *(int64_t *)v1;
            if (*(char *)(v8 + 8) == 8) {
                // 0x40bd55
                v9 = *(int64_t *)v8;
                if (v9 <= 63) {
                    // 0x40bd5e
                    if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                        // break -> 0x40bd6c
                        break;
                    }
                }
            }
            // 0x40bd30
            v5 = v6 + 1;
            if (v5 >= 48) {
                return 0;
            }
        }
        // 0x40bd6c
        v10 = *v2;
        v11 = *v3;
        v12 = v10;
        v13 = v11;
        if (v10 == *v4) {
            // 0x40bdf8
            mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
            result = 12;
            if (mem == NULL) {
                // break -> 0x40bde2
                break;
            }
            // 0x40be22
            v13 = (int64_t)mem;
            *v3 = v13;
            v12 = *v2;
            *v4 = 2 * v10;
        }
        // 0x40bd83
        mem2 = calloc(1, 48);
        v14 = (int64_t)mem2;
        *(int64_t *)(v13 + 8 * v12) = v14;
        result = 12;
    }
    // 0x40bde2
    return result;
}
// Address range: 0x40be50 - 0x40bf3e
int64_t function_40be50(int64_t a1, int64_t a2, int32_t a3) {
    if (a2 < 0) {
        // 0x40bf00
        return (int64_t)*(int32_t *)(a1 + 112);
    }
    // 0x40be62
    if (*(int64_t *)(a1 + 88) == a2) {
        // 0x40bea6
        return a3 & 2 ^ 10;
    }
    // 0x40be6c
    if (*(int32_t *)(a1 + 144) < 2) {
        unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a2); // 0x40bebb
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 128) + (int64_t)(8 * v1 / 64)); // 0x40bec6
        if ((1 << (int64_t)(v1 % 64) & v2) != 0) {
            // 0x40bea6
            return 1;
        }
        // 0x40beda
        if (v1 != 10) {
            // 0x40bea6
            return 0;
        }
        // 0x40bee1
        return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
    }
    int64_t v3 = a2;
    int32_t wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16)); // 0x40be8a
    while (wc == -1) {
        // 0x40be80
        if (v3 == 0) {
            // 0x40bf00
            return (int64_t)*(int32_t *)(a1 + 112);
        }
        v3--;
        wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16));
    }
    // 0x40be92
    if (*(char *)(a1 + 142) != 0) {
        // 0x40bf20
        if (wc != 95 != (iswalnum(wc) == 0)) {
            // 0x40bea6
            return 1;
        }
    }
    // 0x40be9f
    if (wc != 10) {
        // 0x40bea6
        return 0;
    }
    // 0x40bee1
    return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
}
// Address range: 0x40bf40 - 0x40c06b
int64_t function_40bf40(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a3); // 0x40bf44
    int64_t v2 = a2 + 8;
    unsigned char v3 = *(char *)v2; // 0x40bf48
    if (v3 == 3) {
        uint64_t v4 = (int64_t)v1; // 0x40bf44
        if ((*(int64_t *)((v4 / 8 & 24) + a2) & 1 << v4 % 64) == 0) {
            // 0x40bfef
            return 0;
        }
    } else {
        if (v3 < 4) {
            // 0x40bff8
            if (v1 == (char)a2 != (v3 == 1)) {
                // 0x40bfef
                return 0;
            }
        } else {
            if (v3 != 5) {
                // 0x40bf5e
                if (v1 < 0 || v3 != 7) {
                    // 0x40bfef
                    return 0;
                }
            }
            if (v1 == 10) {
                // 0x40c050
                if ((*(char *)(*(int64_t *)(a1 + 152) + 216) & 64) == 0) {
                    // 0x40bfef
                    return 0;
                }
            } else {
                if (v1 == 0) {
                    // 0x40bf80
                    if (*(char *)(*(int64_t *)(a1 + 152) + 216) <= -1) {
                        // 0x40bfef
                        return 0;
                    }
                }
            }
        }
    }
    uint32_t v5 = *(int32_t *)v2; // 0x40bf93
    if ((v5 & 0x3ff00) == 0) {
        // 0x40bfef
        return 1;
    }
    int64_t v6 = v5; // 0x40bf93
    uint64_t v7 = function_40be50(a1, a3, *(int32_t *)(a1 + 160)); // 0x40bfaf
    if ((v6 & 1024) != 0) {
        // 0x40c040
        if ((v6 & 2048) == 0 != v7 % 2 != 0) {
            // 0x40bfef
            return 0;
        }
    } else {
        if ((v6 & 2048) != 0) {
            // 0x40bfc7
            if (v7 % 2 != 0) {
                // 0x40bfef
                return 0;
            }
        }
    }
    int64_t result = 0; // 0x40bfd2
    if ((v6 & 0x2000) != 0 != ((v7 & 2) == 0)) {
        // 0x40bfdb
        result = (char)(v5 / 256) <= -1 ? v7 / 8 % 2 : 1;
    }
    // 0x40bfef
    return result;
}
// Address range: 0x40c070 - 0x40c138
int64_t function_40c070(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_40be50(v1, a4, *(int32_t *)(v1 + 160)); // 0x40c086
    if (a2 < 1) {
        // 0x40c10c
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x40c094
    int64_t v4 = 0; // 0x40c0b6
    int64_t result; // 0x40c070
    uint32_t v5; // 0x40c0ce
    uint32_t v6; // 0x40c0d1
    int64_t v7; // 0x40c0c0
    while (true) {
      lab_0x40c0c0:
        // 0x40c0c0
        v7 = *(int64_t *)(8 * v4 + v3);
        int64_t v8 = *(int64_t *)v3 + 8 + 16 * v7; // 0x40c0ce
        if (*(char *)v8 != 2) {
            goto lab_0x40c128;
        } else {
            // 0x40c0e1
            v5 = *(int32_t *)v8;
            result = v7;
            if ((v5 & 0x3ff00) == 0) {
                // break -> 0x40c10c
                break;
            }
            // 0x40c0e6
            v6 = v5 / 256;
            int64_t v9 = v6; // 0x40c0d1
            if ((v9 & 4) == 0) {
                if (v2 % 2 == 0 || (v9 & 8) == 0) {
                    goto lab_0x40c0f5;
                } else {
                    goto lab_0x40c128;
                }
            } else {
                if (v2 % 2 == 0) {
                    goto lab_0x40c128;
                } else {
                    if ((v9 & 8) != 0) {
                        goto lab_0x40c128;
                    } else {
                        goto lab_0x40c0f5;
                    }
                }
            }
        }
    }
  lab_0x40c10c_2:
    // 0x40c10c
    return result;
  lab_0x40c128:
    // 0x40c128
    v4++;
    result = 0;
    if (v4 == a2) {
        return result;
    }
    goto lab_0x40c0c0;
  lab_0x40c0f5:
    if ((v2 & 2) == 0 != (v5 & 0x2000) != 0) {
        // 0x40c100
        result = v7;
        if ((v2 & 8) == 0 != (char)v6 < 0) {
            // break -> 0x40c10c
            goto lab_0x40c10c_2;
        }
    }
    goto lab_0x40c128;
}
// Address range: 0x40c140 - 0x40c927
int64_t function_40c140(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40c15a
    int64_t v3 = *v2; // 0x40c15a
    int64_t v4 = a2 - v3; // 0x40c164
    int64_t * v5; // 0x40c140
    char * v6; // 0x40c140
    int64_t * v7; // 0x40c140
    int32_t * v8; // 0x40c140
    int64_t * v9; // 0x40c140
    int64_t * v10; // 0x40c140
    int64_t v11; // 0x40c140
    if (v3 > a2) {
        int32_t * v12 = (int32_t *)(v1 + 144);
        if (*v12 >= 2) {
            // 0x40c16f
            *(int64_t *)(v1 + 32) = 0;
        }
        int64_t * v13 = (int64_t *)(v1 + 48);
        *v13 = 0;
        *v2 = 0;
        int64_t * v14 = (int64_t *)(v1 + 88);
        *v14 = *(int64_t *)(v1 + 80);
        int64_t * v15 = (int64_t *)(v1 + 56);
        *v15 = 0;
        int64_t * v16 = (int64_t *)(v1 + 104);
        *v16 = *(int64_t *)(v1 + 96);
        char * v17 = (char *)(v1 + 140);
        *v17 = 0;
        *(int32_t *)(v1 + 112) = 2 * a3 & 2 ^ 6;
        v4 = a2;
        if (*(char *)(v1 + 139) == 0) {
            // 0x40c290
            *(int64_t *)(v1 + 8) = v1;
            v7 = v13;
            v6 = v17;
            v5 = v15;
            v11 = a2;
            v10 = v16;
            v9 = v14;
            v8 = v12;
            if (a2 != 0) {
                goto lab_0x40c1d3;
            } else {
                goto lab_0x40c2a0;
            }
        } else {
            goto lab_0x40c1ca;
        }
    } else {
        goto lab_0x40c1ca;
    }
  lab_0x40c7c8:
    // 0x40c7c8
    *v7 = 0;
    int64_t v18; // 0x40c5c7
    int64_t v19 = v18; // 0x40c7d2
    int64_t v20; // 0x40c5ca
    int64_t v21 = v20; // 0x40c7d2
    int64_t v22 = 0; // 0x40c7d2
    int64_t v23 = v1; // 0x40c7d2
    goto lab_0x40c66f;
  lab_0x40c3c1:;
    // 0x40c3c1
    int64_t v41; // 0x40c140
    int64_t v38; // 0x40c140
    int64_t v42 = v41 + v38; // 0x40c3c1
    int64_t v43; // 0x40c140
    int64_t v44; // 0x40c140
    int64_t v39; // 0x40c140
    int64_t v45; // 0x40c140
    int64_t v46; // 0x40c140
    int32_t v47; // bp-64, 0x40c140
    if (v42 < a2) {
        int64_t * v48 = (int64_t *)(v1 + 32); // 0x40c3f4
        int64_t v49 = &v47;
        int64_t v50 = *(int64_t *)(v1 + 80) - v42; // 0x40c3fd
        int64_t v51 = function_4083e0(&v47, v42 + v39, v50); // 0x40c410
        int64_t v52 = v51; // 0x40c426
        int64_t v53 = v47; // 0x40c426
        int64_t v54; // 0x40c140
        if (v51 >= 0xfffffffffffffffe) {
            // 0x40c855
            v54 = 0;
            if (v50 != 0 && v51 != 0) {
                // 0x40c85f
                v54 = (int64_t)*(char *)(v42 + v49);
            }
            // 0x40c867
            v52 = 1;
            v53 = v54;
        }
        int64_t v55 = v52 + v42; // 0x40c42c
        int64_t v56 = v49; // 0x40c432
        while (v55 < a2) {
            int64_t v57 = v55;
            v50 = *(int64_t *)(v1 + 80) - v57;
            v51 = function_4083e0(&v47, v57 + v56, v50);
            v52 = v51;
            v53 = v47;
            if (v51 >= 0xfffffffffffffffe) {
                // 0x40c855
                v54 = 0;
                if (v50 != 0 && v51 != 0) {
                    // 0x40c85f
                    v54 = (int64_t)*(char *)(v57 + v49);
                }
                // 0x40c867
                v52 = 1;
                v53 = v54;
            }
            // 0x40c42c
            v55 = v52 + v57;
            v56 = v49;
        }
        int64_t v58 = v55 - a2; // 0x40c434
        *v7 = v58;
        v46 = v53;
        v45 = v49;
        v43 = v58;
        v44 = v58;
        if ((int32_t)v53 == -1) {
            goto lab_0x40c7e1;
        } else {
            goto lab_0x40c447;
        }
    } else {
        int64_t v59 = v42 - a2; // 0x40c7d7
        *v7 = v59;
        v44 = v59;
        goto lab_0x40c7e1;
    }
  lab_0x40c1ca:
    // 0x40c1ca
    if (v4 == 0) {
        // 0x40c1ca
        v10 = (int64_t *)(v1 + 104);
        v9 = (int64_t *)(v1 + 88);
        v8 = (int32_t *)(v1 + 144);
        goto lab_0x40c2a0;
    } else {
        // 0x40c1ca
        v7 = (int64_t *)(v1 + 48);
        v6 = (char *)(v1 + 140);
        v5 = (int64_t *)(v1 + 56);
        v11 = v4;
        goto lab_0x40c1d3;
    }
  lab_0x40c1d3:;
    int64_t v60 = v11;
    int64_t * v24 = v5;
    int64_t v61 = *v24; // 0x40c1d3
    char v62 = *v6; // 0x40c1d7
    int64_t v63 = *v7; // 0x40c1de
    char * v64; // 0x40c140
    int64_t v30; // 0x40c140
    int64_t v65; // 0x40c140
    int64_t v31; // 0x40c140
    int64_t v66; // 0x40c140
    int64_t v33; // 0x40c140
    int64_t v67; // 0x40c140
    char v68; // 0x40c140
    int32_t v32; // 0x40c140
    int64_t v40; // 0x40c6e9
    int64_t * v69; // 0x40c488
    int64_t v70; // 0x40c488
    int64_t v71; // 0x40c4b5
    uint64_t v72; // 0x40c4b8
    if (v61 > v60) {
        if (v62 != 0) {
            // 0x40c488
            v69 = (int64_t *)(v1 + 24);
            v70 = *v69;
            int64_t v73 = 0; // 0x40c491
            uint64_t v74 = v73 + v63; // 0x40c4a7
            v71 = (v74 / 0x8000000000000000 + v74) / 2;
            v72 = *(int64_t *)(8 * v71 + v70);
            int64_t v75 = v71; // 0x40c4c3
            int64_t v76 = v73; // 0x40c4c3
            if (v72 <= v60) {
                if (v72 >= v60) {
                    // 0x40c7b0
                    goto lab_0x40c505;
                }
                // 0x40c49e
                v75 = v63;
                v76 = v71 + 1;
            }
            // 0x40c4a2
            v73 = v76;
            int64_t v77 = v75;
            while (v73 < v77) {
                int64_t v78 = v77;
                v74 = v73 + v78;
                v71 = (v74 / 0x8000000000000000 + v74) / 2;
                v72 = *(int64_t *)(8 * v71 + v70);
                v75 = v71;
                v76 = v73;
                if (v72 <= v60) {
                    if (v72 >= v60) {
                        // 0x40c7b0
                        goto lab_0x40c505;
                    }
                    // 0x40c49e
                    v75 = v78;
                    v76 = v71 + 1;
                }
                // 0x40c4a2
                v73 = v76;
                v77 = v75;
            }
            // 0x40c4f8
            goto lab_0x40c505;
        } else {
            // 0x40c1f3
            *(int32_t *)(v1 + 112) = (int32_t)function_40be50(v1, v60 - 1, a3);
            if (*(int32_t *)(v1 + 144) > 1) {
                int64_t v79 = *(int64_t *)(v1 + 16); // 0x40c2b0
                int64_t v80; // 0x40c1fd
                memmove((int64_t *)v79, (int64_t *)(v79 + 4 * v60), 4 * (int32_t)v80);
            }
            int64_t v81 = v63 - v60;
            char * v82 = (char *)(v1 + 139); // 0x40c215
            char v83 = *v82; // 0x40c215
            char v84 = v83; // 0x40c21e
            int64_t v85 = v1; // 0x40c21e
            int64_t v86 = v81; // 0x40c21e
            if (v83 != 0) {
                // 0x40c4d0
                v85 = *(int64_t *)(v1 + 8);
                memmove((int64_t *)v85, (int64_t *)(v85 + v60), (int32_t)v81);
                v84 = *v82;
                v86 = *v7 - v60;
            }
            // 0x40c224
            *v24 = *v24 - v60;
            *v7 = v86;
            v68 = v84;
            v66 = v85;
            goto lab_0x40c22c;
        }
    } else {
        if (v62 != 0) {
            // 0x40c82d
            *v6 = 0;
            int64_t v87 = v60 - a2;
            *(int64_t *)(v1 + 88) = *(int64_t *)(v1 + 80) + v87;
            *(int64_t *)(v1 + 104) = *(int64_t *)(v1 + 96) + v87;
        }
        int32_t v88 = *(int32_t *)(v1 + 144); // 0x40c398
        int64_t v89 = *v2; // 0x40c39f
        *v7 = 0;
        if (v88 < 2) {
            int64_t v90 = (int64_t)*(char *)(v60 - 1 + v1 + v89); // 0x40c2ee
            int64_t v91 = *(int64_t *)(v1 + 120); // 0x40c2f4
            *v24 = 0;
            int64_t v92 = v90; // 0x40c303
            if (v91 != 0) {
                // 0x40c305
                v92 = (int64_t)*(char *)(v91 + v90);
            }
            int64_t v93 = *(int64_t *)((v92 / 8 & 24) + *(int64_t *)(v1 + 128)); // 0x40c317
            int32_t v94 = 1; // 0x40c325
            if ((v93 & 1 << v92 % 64) == 0) {
                // 0x40c327
                v94 = 0;
                if (v92 == 10) {
                    // 0x40c32e
                    v94 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
                }
            }
            int64_t * v95 = (int64_t *)(v1 + 88); // 0x40c340
            int64_t * v96 = (int64_t *)(v1 + 104); // 0x40c344
            *(int32_t *)(v1 + 112) = v94;
            int64_t v97 = *v95 - v60; // 0x40c34b
            int64_t v98 = *v96 - v60; // 0x40c34e
            char * v99 = (char *)(v1 + 139);
            v30 = v97;
            v31 = v98;
            v32 = v88;
            v33 = v1;
            if (*v99 == 0) {
                goto lab_0x40c244;
            } else {
                // 0x40c35e
                *v2 = a2;
                *v95 = v97;
                *v96 = v98;
                v64 = v99;
                v65 = v97;
                v67 = v1;
                goto lab_0x40c370;
            }
        } else {
            // 0x40c3b4
            v38 = v61;
            v39 = v1;
            v41 = v89;
            if (*(char *)(v1 + 137) != 0) {
                int64_t v100 = v89 + v1; // 0x40c691
                uint64_t v101 = v60 - (int64_t)v88 + v100; // 0x40c695
                int64_t v102 = v60 - 1 + v100; // 0x40c698
                uint64_t v103 = v101 > v1 ? v101 : v1; // 0x40c6a0
                v38 = v61;
                v39 = v1;
                v41 = v89;
                if (v103 > v102) {
                    goto lab_0x40c3c1;
                } else {
                    int64_t v104 = v102;
                    while ((*(char *)v104 & -64) == -128) {
                        int64_t v105 = v104 - 1; // 0x40c6b0
                        v38 = v61;
                        v39 = v1;
                        v41 = v89;
                        if (v103 > v105) {
                            goto lab_0x40c3c1;
                        }
                        v104 = v105;
                    }
                    int64_t v106 = *(int64_t *)(v1 + 120); // 0x40c6ce
                    int64_t v107 = *(int64_t *)(v1 + 88) + v100 - v104; // 0x40c6d8
                    int64_t v108 = v104; // 0x40c6de
                    if (v106 != 0) {
                        int64_t v109 = v107 - 6; // 0x40c8f2
                        int32_t v110 = v109 == 0 | v109 < 0 != (5 - v107 & v107) < 0 ? (int32_t)v107 - 1 : 5; // 0x40c8ff
                        if (v110 >= 0) {
                            int64_t v111 = v110; // 0x40c915
                            char v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104)); // 0x40c90c
                            int64_t v113; // bp-120, 0x40c140
                            *(char *)((int64_t)&v113 + 50 + v111) = v112;
                            v111--;
                            while ((int32_t)v111 >= 0) {
                                // 0x40c907
                                v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104));
                                *(char *)((int64_t)&v113 + 50 + v111) = v112;
                                v111--;
                            }
                        }
                        // 0x40c91d
                        int64_t v114; // bp-70, 0x40c140
                        v108 = &v114;
                    }
                    // 0x40c6e4
                    int32_t v115; // bp-76, 0x40c140
                    v40 = &v115;
                    v47 = 0;
                    uint64_t v116 = function_4083e0(&v115, v108, v107); // 0x40c6ff
                    uint64_t v117 = v100 + v60 - v104; // 0x40c70e
                    if (v116 >= v117 == v116 < 0xfffffffffffffffe) {
                        int64_t v118 = v116 - v117; // 0x40c7f8
                        *(int64_t *)(v1 + 32) = 0;
                        *v7 = v118;
                        v46 = v115;
                        v45 = v40;
                        v43 = v118;
                        if (v115 != -1) {
                            goto lab_0x40c447;
                        } else {
                            goto lab_0x40c720;
                        }
                    } else {
                        goto lab_0x40c720;
                    }
                }
            } else {
                goto lab_0x40c3c1;
            }
        }
    }
  lab_0x40c2a0:;
    int64_t v34 = *v9; // 0x40c2ae
    int64_t v35 = *v10; // 0x40c2ae
    int32_t v36 = *v8; // 0x40c2ae
    int64_t v37 = v1; // 0x40c2ae
    goto lab_0x40c248;
  lab_0x40c248:
    // 0x40c248
    *v2 = a2;
    *(int64_t *)(v1 + 88) = v34;
    *(int64_t *)(v1 + 104) = v35;
    if (v36 >= 2) {
        // 0x40c25d
        if (*(char *)(v1 + 136) != 0) {
            int64_t result = function_408fa0(v1); // 0x40c2d8
            if ((int32_t)result != 0) {
                // 0x40c278
                return result;
            }
        } else {
            // 0x40c269
            function_408df0(v1);
        }
        // 0x40c26e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40c278
        return 0;
    }
    // 0x40c248
    v64 = (char *)(v1 + 139);
    v65 = v34;
    v67 = v37;
    goto lab_0x40c370;
  lab_0x40c370:;
    int64_t v119 = v65;
    if (*v64 == 0) {
        // 0x40c37d
        *(int64_t *)(v1 + 48) = v119;
        // 0x40c26e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40c278
        return 0;
    }
    // 0x40c740
    if (*(char *)(v1 + 136) != 0) {
        // 0x40c820
        function_408d70(v1);
        // 0x40c26e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40c278
        return 0;
    }
    int64_t * v120 = (int64_t *)(v1 + 120); // 0x40c74d
    int64_t v121 = *v120; // 0x40c74d
    if (v121 == 0) {
        // 0x40c26e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40c278
        return 0;
    }
    int64_t v122 = *(int64_t *)(v1 + 64); // 0x40c75a
    int64_t v123 = v122 - v119; // 0x40c75a
    int64_t * v124 = (int64_t *)(v1 + 48); // 0x40c75e
    int64_t v125 = *v124; // 0x40c75e
    int64_t v126 = v123 == 0 | v123 < 0 != ((v123 ^ v122) & (v122 ^ v119)) < 0 ? v122 : v119; // 0x40c762
    int64_t v127 = v125; // 0x40c76a
    if (v126 > v125) {
        unsigned char v128 = *(char *)(v67 + a2 + v125); // 0x40c786
        int64_t * v129 = (int64_t *)(v1 + 8); // 0x40c78f
        *(char *)(*v129 + v125) = *(char *)(v121 + (int64_t)v128);
        int64_t v130 = v125 + 1; // 0x40c797
        v127 = v126;
        if (v126 != v130) {
            unsigned char v131 = *(char *)(v130 + v67 + *v2); // 0x40c786
            *(char *)(*v129 + v130) = *(char *)(*v120 + (int64_t)v131);
            int64_t v132 = v130 + 1; // 0x40c797
            int64_t v133 = v132; // 0x40c79e
            v127 = v126;
            while (v126 != v132) {
                // 0x40c778
                v131 = *(char *)(v133 + v67 + *v2);
                *(char *)(*v129 + v133) = *(char *)(*v120 + (int64_t)v131);
                v132 = v133 + 1;
                v133 = v132;
                v127 = v126;
            }
        }
    }
    // 0x40c7a0
    *v124 = v127;
    *(int64_t *)(v1 + 56) = v127;
    // 0x40c26e
    *(int64_t *)(v1 + 72) = 0;
    // 0x40c278
    return 0;
  lab_0x40c505:;
    int64_t v134 = v71 + (int64_t)(v72 < v60);
    int64_t v135 = v71 + (int64_t)(v72 >= v60);
    *(int32_t *)(v1 + 112) = (int32_t)function_40be50(v1, v135, a3);
    int64_t v25; // 0x40c140
    int64_t v26; // 0x40c140
    int64_t v28; // 0x40c140
    char v27; // 0x40c140
    if (v63 > v60 == v60 == v134) {
        int64_t v136 = 8 * v60;
        if (*(int64_t *)(v70 + v136) != v60) {
            goto lab_0x40c5b8;
        } else {
            int64_t v137 = *(int64_t *)(v1 + 16); // 0x40c530
            memmove((int64_t *)v137, (int64_t *)(v137 + 4 * v60), 4 * (int32_t)(v63 - v60));
            int64_t v138 = *(int64_t *)(v1 + 8); // 0x40c54b
            int64_t v139 = *v7; // 0x40c54f
            memmove((int64_t *)v138, (int64_t *)(v138 + v60), (int32_t)(v139 - v60));
            *v24 = *v24 - v60;
            uint64_t v140 = *v7 - v60; // 0x40c567
            *v7 = v140;
            if (v140 >= 1) {
                for (int64_t i = 0; i < *v7; i++) {
                    int64_t v141 = 8 * i + *v69;
                    *(int64_t *)v141 = *(int64_t *)(v141 + v136) - v60;
                }
            }
            // 0x40c595
            v25 = *(int64_t *)(v1 + 88) - v60;
            v26 = *(int64_t *)(v1 + 104) - v60;
            v27 = *(char *)(v1 + 139);
            v28 = v138;
            goto lab_0x40c240;
        }
    } else {
        goto lab_0x40c5b8;
    }
  lab_0x40c22c:
    // 0x40c22c
    v25 = *(int64_t *)(v1 + 88) - v60;
    v26 = *(int64_t *)(v1 + 104) - v60;
    v27 = v68;
    v28 = v66;
    goto lab_0x40c240;
  lab_0x40c244:;
    int64_t * v142 = (int64_t *)(v1 + 8); // 0x40c244
    *v142 = *v142 + v60;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    goto lab_0x40c248;
  lab_0x40c5b8:
    // 0x40c5b8
    *v6 = 0;
    v18 = *(int64_t *)(v1 + 80) - a2;
    v20 = *(int64_t *)(v1 + 96) - a2;
    int64_t * v143 = (int64_t *)(v1 + 88); // 0x40c5d1
    *v143 = v18 + v60;
    int64_t * v144 = (int64_t *)(v1 + 104); // 0x40c5d9
    *v144 = v20 + v60;
    int64_t v145 = v134; // 0x40c5e0
    if (v134 >= 0 == (v134 != 0)) {
        int64_t v146 = v134; // 0x40c5e8
        v145 = v146;
        while (*(int64_t *)(v70 - 8 + 8 * v146) == v60) {
            // 0x40c5e8
            v146--;
            if (v146 == 0) {
                // break -> 0x40c5f5
                break;
            }
            v145 = v146;
        }
    }
    // 0x40c5f5
    int64_t v147; // 0x40c140
    if (v145 < v63) {
        int64_t v148 = v145; // 0x40c602
        v147 = v148;
        while (*(int32_t *)(4 * v148 + *(int64_t *)(v1 + 16)) == -1) {
            // 0x40c608
            v148++;
            if (v148 == v63) {
                goto lab_0x40c7c8;
            }
            v147 = v148;
        }
        goto lab_0x40c61c;
    } else {
        // 0x40c7bc
        v147 = v145;
        if (v145 != v63) {
            goto lab_0x40c61c;
        } else {
            goto lab_0x40c7c8;
        }
    }
  lab_0x40c240:;
    int32_t v29 = *(int32_t *)(v1 + 144);
    v30 = v25;
    v31 = v26;
    v32 = v29;
    v33 = v28;
    v34 = v25;
    v35 = v26;
    v36 = v29;
    v37 = v28;
    if (v27 != 0) {
        goto lab_0x40c248;
    } else {
        goto lab_0x40c244;
    }
  lab_0x40c720:
    // 0x40c720
    v38 = *v24;
    v39 = v40;
    v41 = *v2;
    goto lab_0x40c3c1;
  lab_0x40c7e1:
    // 0x40c7e1
    *(int32_t *)(v1 + 112) = (int32_t)function_40be50(v1, v63 - 1, a3);
    int64_t v149 = v1; // 0x40c7f3
    int64_t v150 = v44; // 0x40c7f3
    goto lab_0x40c46c;
  lab_0x40c447:;
    int64_t v164 = v46; // 0x40c44e
    int64_t v163 = v45; // 0x40c44e
    int32_t v161; // 0x40c140
    int64_t v162; // 0x40c140
    if (*(char *)(v1 + 142) != 0) {
        int64_t v165 = v46 & 0xffffffff; // 0x40c8c4
        int32_t wc = v46; // 0x40c8c6
        v164 = v165;
        v163 = v165;
        v161 = 1;
        v162 = v165;
        if (wc != 95 == iswalnum(wc) == 0) {
            goto lab_0x40c454;
        } else {
            goto lab_0x40c469;
        }
    } else {
        goto lab_0x40c454;
    }
  lab_0x40c61c:;
    uint64_t v166 = *(int64_t *)(8 * v147 + v70) - v60; // 0x40c621
    *v7 = v166;
    v19 = v18;
    v21 = v20;
    v22 = 0;
    v23 = v1;
    if (v166 != 0) {
        if (v166 >= 1) {
            int64_t v167 = *(int64_t *)(v1 + 16); // 0x40c62f
            int64_t v168 = v167; // 0x40c637
            *(int32_t *)v168 = -1;
            v168 += 4;
            while (v167 + 4 * v166 != v168) {
                // 0x40c640
                *(int32_t *)v168 = -1;
                v168 += 4;
            }
        }
        int64_t v169 = *(int64_t *)(v1 + 8); // 0x40c64f
        memset((int64_t *)v169, 255, (int32_t)v166);
        v19 = *v143 - v60;
        v21 = *v144 - v60;
        v22 = *v7;
        v23 = v169;
    }
    goto lab_0x40c66f;
  lab_0x40c46c:;
    // 0x40c46c
    char * v151; // 0x40c140
    int64_t v152; // 0x40c140
    int64_t v153; // 0x40c140
    int64_t v154; // 0x40c140
    int64_t v155; // 0x40c140
    char v156; // 0x40c140
    if (v150 != 0) {
        if (v150 >= 1) {
            int64_t v157 = *(int64_t *)(v1 + 16); // 0x40c87c
            int64_t v158 = v157; // 0x40c884
            *(int32_t *)v158 = -1;
            v158 += 4;
            while (v157 + 4 * v150 != v158) {
                // 0x40c888
                *(int32_t *)v158 = -1;
                v158 += 4;
            }
        }
        char * v159 = (char *)(v1 + 139);
        v156 = 0;
        v155 = v149;
        v153 = v150;
        if (*v159 == 0) {
            goto lab_0x40c47c;
        } else {
            int64_t v160 = *(int64_t *)(v1 + 8); // 0x40c8a6
            memset((int64_t *)v160, 255, (int32_t)v150);
            v151 = v159;
            v154 = v160;
            v152 = *v7;
            goto lab_0x40c475;
        }
    } else {
        // 0x40c46c
        v151 = (char *)(v1 + 139);
        v154 = v149;
        v152 = v150;
        goto lab_0x40c475;
    }
  lab_0x40c454:
    // 0x40c454
    v161 = 0;
    v162 = v163;
    if ((int32_t)v164 == 10) {
        // 0x40c45b
        v161 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
        v162 = v163;
    }
    goto lab_0x40c469;
  lab_0x40c66f:
    // 0x40c66f
    *v24 = v22;
    v25 = v19;
    v26 = v21;
    v27 = *(char *)(v1 + 139);
    v28 = v23;
    goto lab_0x40c240;
  lab_0x40c469:
    // 0x40c469
    *(int32_t *)(v1 + 112) = v161;
    v149 = v162;
    v150 = v43;
    goto lab_0x40c46c;
  lab_0x40c47c:
    // 0x40c47c
    *v24 = v153;
    v68 = v156;
    v66 = v155;
    goto lab_0x40c22c;
  lab_0x40c475:
    // 0x40c475
    v156 = *v151;
    v155 = v154;
    v153 = v152;
    goto lab_0x40c47c;
}
// Address range: 0x40c930 - 0x40cb55
int64_t function_40c930(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40c930
    int128_t v1; // 0x40c930
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x40c932
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40c949
    int128_t v5 = __asm_movaps(v3); // bp-88, 0x40c94d
    int64_t v6 = *v4 + 24 * a2; // 0x40c952
    int64_t v7 = 0; // bp-72, 0x40c95b
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x40c964
    int64_t v9 = *v8; // 0x40c964
    if (v9 < 1) {
        // 0x40cb11
        free(NULL);
        return (int32_t)&g84 ^ (int32_t)&g84;
    }
    int64_t v10 = v6 + 16; // 0x40c9d5
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = a3 + 8;
    int64_t * v13 = (int64_t *)v12;
    int64_t v14 = a3 + 16;
    int64_t v15 = 0; // 0x40c9c8
    int64_t v16 = a1; // 0x40c930
    int64_t v17 = v9;
    int64_t v18; // 0x40c930
    int64_t v19; // 0x40c930
    int64_t v20; // 0x40c930
    int64_t v21; // 0x40ca03
    int64_t v22; // 0x40ca0d
    while (true) {
      lab_0x40c9d5:
        // 0x40c9d5
        v19 = v17;
        int64_t v23 = v16;
        int64_t v24 = *(int64_t *)(*v11 + 8 * v15); // 0x40c9d9
        v16 = v23;
        v18 = v19;
        if (v24 == a2) {
            goto lab_0x40c9c8;
        } else {
            // 0x40c9e2
            v16 = v23;
            v18 = v19;
            if ((*(char *)(v23 + 8 + 16 * v24) & 8) == 0) {
                goto lab_0x40c9c8;
            } else {
                // 0x40c9f3
                v21 = 24 * v24;
                int64_t v25 = *(int64_t *)(a1 + 40) + v21; // 0x40ca0a
                v22 = *(int64_t *)(v25 + 16);
                int64_t v26 = *(int64_t *)v22; // 0x40ca16
                int64_t v27 = function_40a120(v19, v10, v26); // 0x40ca21
                if (*(int64_t *)(v25 + 8) > 1) {
                    // 0x40c980
                    v20 = v19;
                    if (v27 != 0) {
                        goto lab_0x40ca60;
                    } else {
                        int64_t v28 = *v13; // 0x40c989
                        int64_t v29 = function_40a120(v28, v14, v26); // 0x40c994
                        v20 = v28;
                        if (v29 == 0) {
                            goto lab_0x40ca60;
                        } else {
                            goto lab_0x40c9a2;
                        }
                    }
                } else {
                    // 0x40ca3b
                    v16 = v19;
                    v18 = v19;
                    if (v27 != 0) {
                        goto lab_0x40c9c8;
                    } else {
                        int64_t v30 = *v13; // 0x40ca40
                        int64_t v31 = function_40a120(v30, v14, v26); // 0x40ca4b
                        v16 = v30;
                        v18 = v19;
                        if (v31 != 0) {
                            goto lab_0x40c9a2;
                        } else {
                            goto lab_0x40c9c8;
                        }
                    }
                }
            }
        }
    }
  lab_0x40caa0:
    if (v17 < 1) {
        // 0x40cb11
        free((int64_t *)v7);
        return (int32_t)&g84 ^ (int32_t)&g84;
    }
    int64_t v32 = 0; // 0x40c930
    int64_t v33 = *(int64_t *)(*v11 + 8 * v32); // 0x40cabc
    int64_t v34; // 0x40c930
    int64_t v35; // 0x40cacd
    int64_t v36; // 0x40cae0
    if (function_40a120(v34, (int64_t)&v7, v33) == 0) {
        // 0x40cacd
        v35 = *v13;
        v36 = function_40a120(v35, v14, v33) - 1;
        if (v36 > -1 == v36 < v35) {
            // 0x40caee
            *v13 = v35 - 1;
            function_40a290(v12, v14, v36);
        }
    }
    int64_t v37 = v32 + 1; // 0x40cb02
    v32 = v37;
    while (*v8 > v37) {
        // 0x40cab0
        v33 = *(int64_t *)(*v11 + 8 * v32);
        if (function_40a120(v34, (int64_t)&v7, v33) == 0) {
            // 0x40cacd
            v35 = *v13;
            v36 = function_40a120(v35, v14, v33) - 1;
            if (v36 > -1 == v36 < v35) {
                // 0x40caee
                *v13 = v35 - 1;
                function_40a290(v12, v14, v36);
            }
        }
        // 0x40cb02
        v37 = v32 + 1;
        v32 = v37;
    }
    // 0x40cb11
    free((int64_t *)v7);
    return (int32_t)&g84 ^ (int32_t)&g84;
  lab_0x40c9c8:
    // 0x40c9c8
    v17 = v18;
    v15++;
    if (v17 <= v15) {
        // break -> 0x40caa0
        goto lab_0x40caa0;
    }
    goto lab_0x40c9d5;
  lab_0x40ca60:;
    int64_t v38 = *(int64_t *)(v22 + 8); // 0x40ca60
    v16 = v20;
    v18 = v19;
    if (v38 < 1) {
        goto lab_0x40c9c8;
    } else {
        int64_t v39 = function_40a120(v19, v10, v38); // 0x40ca76
        v16 = v19;
        v18 = v19;
        if (v39 != 0) {
            goto lab_0x40c9c8;
        } else {
            int64_t v40 = *v13; // 0x40ca84
            int64_t v41 = function_40a120(v40, v14, v38); // 0x40ca8c
            v16 = v40;
            v18 = v19;
            if (v41 == 0) {
                goto lab_0x40c9c8;
            } else {
                goto lab_0x40c9a2;
            }
        }
    }
  lab_0x40c9a2:;
    int64_t v42 = function_40abd0(&v5, a4, *v4 + v21); // 0x40c9b4
    if ((int32_t)v42 != 0) {
        // 0x40cb30
        free((int64_t *)v7);
        return v42 & 0xffffffff;
    }
    // 0x40c9c1
    v16 = &v5;
    v18 = *v8;
    goto lab_0x40c9c8;
}
// Address range: 0x40cb60 - 0x40d66d
int64_t function_40cb60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40cb60
    int128_t v1; // 0x40cb60
    int128_t v2 = v1;
    int64_t * mem = malloc(0x3800); // 0x40cb7e
    if (mem == NULL) {
        // 0x40cf22
        return 0;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x40cb9b
    int128_t v4 = __asm_movaps(v3); // bp-152, 0x40cb9f
    int64_t v5 = __asm_movaps(v3); // 0x40cbaf
    int64_t * v6 = (int64_t *)(a2 + 88); // 0x40cbb9
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 96); // 0x40cbc1
    *v7 = 0;
    int64_t v8; // 0x40cb60
    int64_t v9; // 0x40cb60
    int64_t v10; // 0x40cb60
    int64_t v11; // 0x40cb60
    int64_t v12; // 0x40cb60
    int64_t v13; // 0x40cb60
    int64_t v14; // 0x40cb60
    int64_t v15; // 0x40cb60
    int64_t v16; // 0x40cb60
    int64_t v17; // 0x40cb60
    int64_t v18; // 0x40cb60
    int64_t v19; // 0x40cb60
    int64_t v20; // 0x40cb60
    int64_t v21; // 0x40cb60
    int64_t v22; // 0x40cb60
    int128_t v23; // 0x40cb60
    int128_t v24; // 0x40cb60
    int128_t v25; // 0x40cb60
    int128_t v26; // 0x40cb60
    int64_t v27; // 0x40cb60
    int64_t v28; // 0x40cb60
    int128_t v29; // bp-88, 0x40cb60
    int64_t v30; // 0x40cb7e
    int64_t v31; // 0x40cba4
    int64_t v32; // 0x40cb60
    int64_t v33; // 0x40cb60
    int64_t v34; // 0x40d5a2
    int64_t v35; // 0x40ce07
    int128_t * v36; // 0x40cb60
    int64_t v37; // 0x40cbe2
    int64_t v38; // 0x40cbfb
    uint32_t v39; // 0x40cbfe
    char v40; // 0x40cc02
    int64_t * mem2; // 0x40cc69
    int32_t size2; // 0x40cca8
    int64_t * mem3; // 0x40ccad
    int64_t v41; // 0x40ccad
    int64_t v42; // 0x40ccda
    int64_t v43; // 0x40ccea
    int128_t v44; // 0x40cb60
    int128_t v45; // 0x40cb60
    int128_t v46; // 0x40cb60
    int128_t v47; // 0x40cb60
    int128_t v48; // 0x40cb60
    if (*(int64_t *)(a2 + 16) < 1) {
        // 0x40d542
        free(mem);
        goto lab_0x40d54c;
    } else {
        // 0x40cbcf
        v30 = (int64_t)mem;
        v31 = v30 + 0x1800;
        v32 = &v4;
        v33 = &v29;
        v36 = (int128_t *)(v32 + 16);
        v23 = v5;
        v28 = 0;
        v44 = v3;
        v14 = a1;
        v18 = a2;
        v10 = 0;
        while (true) {
          lab_0x40cbdd:
            // 0x40cbdd
            v11 = v10;
            v19 = v18;
            v15 = v14;
            int128_t v49 = v44;
            int128_t v50 = v23;
            v37 = 8 * v28;
            int64_t v51 = *(int64_t *)(*(int64_t *)(v19 + 24) + v37); // 0x40cbf3
            v38 = 16 * v51 + *(int64_t *)v15;
            int64_t v52 = v38 + 8; // 0x40cbfe
            v39 = *(int32_t *)v52;
            v40 = *(char *)v52;
            v24 = v50;
            v45 = v49;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            switch (v40) {
                case 1: {
                    unsigned char v53 = *(char *)v38; // 0x40cf38
                    unsigned char v54 = v53 % 64;
                    int64_t * v55 = (int64_t *)((int64_t)(v53 / 8 & 24) + v32); // 0x40cf53
                    *v55 = (v54 == 0 ? 1 : 1 << (int64_t)v54) | *v55;
                    v25 = v50;
                    v47 = v49;
                    goto lab_0x40cf57;
                }
                case 3: {
                    int64_t v56 = 0;
                    int64_t * v57 = (int64_t *)(v56 + v32); // 0x40d3c2
                    *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                    v25 = v50;
                    v47 = v49;
                    int64_t v58 = v56 + 8; // 0x40d3d6
                    while (v56 != 24) {
                        // 0x40d3c2
                        v56 = v58;
                        v57 = (int64_t *)(v56 + v32);
                        *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                        v25 = v50;
                        v47 = v49;
                        v58 = v56 + 8;
                    }
                    goto lab_0x40cf57;
                }
                case 5: {
                    // 0x40d270
                    if (*(int32_t *)(v15 + 180) < 2) {
                        int128_t v59 = __asm_pcmpeqd(v49, v49); // 0x40d300
                        v4 = __asm_movaps(v59);
                        v26 = __asm_movaps(v59);
                        v48 = v59;
                    } else {
                        int64_t v60 = 0;
                        int64_t * v61 = (int64_t *)(v60 + v32); // 0x40d289
                        *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                        int64_t v62 = v60 + 8; // 0x40d29d
                        v26 = v50;
                        v48 = v49;
                        while (v60 != 24) {
                            // 0x40d289
                            v60 = v62;
                            v61 = (int64_t *)(v60 + v32);
                            *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                            v62 = v60 + 8;
                            v26 = v50;
                            v48 = v49;
                        }
                    }
                    goto lab_0x40d29f;
                }
                case 7: {
                    int128_t v63 = __asm_pcmpeqd(v49, v49); // 0x40d3a0
                    v4 = __asm_movaps(v63);
                    v26 = v50;
                    v48 = v63;
                    goto lab_0x40d29f;
                }
                default: {
                    goto lab_0x40cc32;
                }
            }
        }
      lab_0x40cc43:
        if (v13 < 1) {
            // 0x40d655
            free(mem);
            if (v13 != 0) {
                // 0x40cf22
                return 0;
            }
            goto lab_0x40d54c;
        } else {
            int64_t v64 = v13 + 1; // 0x40cc58
            int128_t v65 = v64; // bp-120, 0x40cc5d
            int64_t size = 8 * v64; // 0x40cc62
            mem2 = malloc((int32_t)size);
            if (mem2 == NULL) {
                goto lab_0x40d417;
            } else {
                // 0x40cc82
                v4 = 0;
                if (v13 > 0xaaaaaaaaaaaa855) {
                    goto lab_0x40d417;
                } else {
                    // 0x40cc9d
                    size2 = 24 * (int32_t)v13;
                    mem3 = malloc(size2);
                    if (mem3 == NULL) {
                        goto lab_0x40d417;
                    } else {
                        // 0x40ccc0
                        v41 = (int64_t)mem3;
                        int64_t v66 = size - 8; // 0x40ccc5
                        int128_t v67 = __asm_pxor(v46, v46); // 0x40ccc9
                        v42 = v66 + v41;
                        v43 = v42 + v66;
                        v29 = __asm_movaps(v67);
                        __asm_movaps(v67);
                        int64_t * v68 = (int64_t *)(v17 + 48);
                        int64_t v69 = 0; // 0x40cd06
                        int64_t v70 = v30 + 8; // 0x40cd06
                        int64_t v71 = v30; // 0x40cd06
                        int64_t v72 = 0; // 0x40cd06
                        while (true) {
                            int64_t v73 = v70;
                            int64_t v74 = v69;
                            int64_t * v75 = (int64_t *)v73; // 0x40cd1a
                            uint64_t v76 = *v75; // 0x40cd1a
                            if (v76 >= 1) {
                                int64_t v77 = v76; // 0x40cd64
                                for (int64_t i = 0; i < v77; i++) {
                                    int64_t v78 = *(int64_t *)(v73 + 8); // 0x40cd28
                                    int64_t v79 = *(int64_t *)(v17 + 24); // 0x40cd30
                                    int64_t v80 = *(int64_t *)(v79 + 8 * *(int64_t *)(v78 + 8 * i)); // 0x40cd35
                                    int64_t v81 = v77; // 0x40cd3d
                                    if (v80 != -1) {
                                        int64_t v82 = function_40a660((int64_t *)&v65, (int128_t *)(*v68 + 24 * v80)); // 0x40cd4f
                                        int32_t v83 = v82; // 0x40cd54
                                        v4 = v83;
                                        if (v83 != 0) {
                                            // 0x40d405
                                            free(mem3);
                                            goto lab_0x40d417;
                                        }
                                        // 0x40cd3f
                                        v81 = *v75;
                                    }
                                    // 0x40cd60
                                    v77 = v81;
                                }
                            }
                            int64_t v84 = function_40b3d0(&v4, v17, (int64_t *)&v65, 0); // 0x40cd77
                            int64_t v85 = 8 * v72; // 0x40cd81
                            int64_t * v86 = (int64_t *)(v85 + v41); // 0x40cd81
                            *v86 = v84;
                            if (v84 == 0) {
                                // 0x40d4d8
                                if ((int32_t)v4 != 0) {
                                    // break -> 0x40d405
                                    break;
                                }
                            }
                            // 0x40cd8e
                            int64_t v87; // 0x40cb60
                            if (*(char *)(v84 + 104) < 0) {
                                int64_t v88 = function_40b3d0(&v4, v17, (int64_t *)&v65, 1); // 0x40d460
                                *(int64_t *)(v85 + v42) = v88;
                                if (v88 == 0) {
                                    // 0x40d3f0
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40d405
                                        break;
                                    }
                                }
                                int64_t v89 = v74; // 0x40d480
                                if (v88 != *v86) {
                                    int32_t v90 = *(int32_t *)(v17 + 180); // 0x40d48c
                                    v89 = v90 < 2 == (1 - v90 & v90) < 0 ? 1 : 0x100000000000000 * v74 >> 56;
                                }
                                int64_t v91 = v89;
                                int64_t v92 = function_40b3d0(&v4, v17, (int64_t *)&v65, 2); // 0x40d4ad
                                *(int64_t *)(v85 + v43) = v92;
                                v87 = v91;
                                if (v92 == 0) {
                                    // 0x40d4c4
                                    v87 = v91;
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40d405
                                        break;
                                    }
                                }
                            } else {
                                // 0x40cd98
                                *(int64_t *)(v85 + v42) = v84;
                                *(int64_t *)(v85 + v43) = v84;
                                v87 = v74;
                            }
                            // 0x40cdaa
                            v27 = v87;
                            int64_t v93 = 0;
                            int64_t * v94 = (int64_t *)(v93 + v33); // 0x40cdb4
                            *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                            int64_t v95 = v93 + 8; // 0x40cdcc
                            while (v93 != 24) {
                                // 0x40cdb4
                                v93 = v95;
                                v94 = (int64_t *)(v93 + v33);
                                *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                                v95 = v93 + 8;
                            }
                            // 0x40cdce
                            v72++;
                            v69 = v27;
                            v70 = v73 + 24;
                            v71 += 32;
                            if (v72 == v13) {
                                if ((char)v27 != 0) {
                                    int64_t * mem4 = calloc(8, 512); // 0x40d5a2
                                    v34 = (int64_t)mem4;
                                    *v7 = v34;
                                    if (mem4 == NULL) {
                                        // 0x40d405
                                        free(mem3);
                                        goto lab_0x40d417;
                                    } else {
                                        // 0x40d5bc
                                        v22 = v33;
                                        v21 = v34;
                                        v9 = v30 + 0x1820;
                                        goto lab_0x40d5e2;
                                    }
                                } else {
                                    int64_t * mem5 = calloc(8, 256); // 0x40ce07
                                    v35 = (int64_t)mem5;
                                    *v6 = v35;
                                    if (mem5 == NULL) {
                                        // 0x40d405
                                        free(mem3);
                                        goto lab_0x40d417;
                                    } else {
                                        // 0x40ce21
                                        v8 = 0;
                                        goto lab_0x40ce3f;
                                    }
                                }
                            }
                        }
                        // 0x40d405
                        free(mem3);
                        goto lab_0x40d417;
                    }
                }
            }
        }
    }
  lab_0x40d233:;
    int64_t v96 = v30 + 16; // 0x40d238
    int64_t v97; // 0x40cb60
    int64_t v98 = v97 + v96; // 0x40d240
    int64_t v99 = v96; // 0x40d244
    goto lab_0x40d248;
  lab_0x40d07d:;
    // 0x40d07d
    int64_t v145; // 0x40cb60
    int64_t v146; // 0x40d096
    while (true) {
        // 0x40d086
        int64_t v147; // 0x40cb60
        int64_t v148 = v147;
        int64_t v149; // 0x40cb60
        int64_t v150 = v149;
        int64_t v151 = 8 * v150; // 0x40d086
        int64_t v152 = *(int64_t *)(v151 + v32); // 0x40d086
        int64_t v153 = *(int64_t *)(v151 + v145); // 0x40d08a
        int64_t v154 = v153 & v152; // 0x40d08a
        int64_t v155; // 0x40cb60
        *(int64_t *)(v151 + v155) = v154;
        int64_t v156 = v150 + 1; // 0x40d092
        v146 = v154 | v148;
        v149 = v156;
        v147 = v146;
        if (v156 == 4) {
            // break -> 0x40d09f
            break;
        }
    }
    int64_t v157 = 0; // 0x40d0a2
    int64_t v158 = 0; // 0x40d0a2
    int64_t v159 = 0; // 0x40d0a2
    int64_t v160; // 0x40cb60
    int64_t v161; // 0x40cb60
    int64_t v162; // 0x40cb60
    if (v146 != 0) {
        int64_t v163 = v159;
        int64_t v164 = v158;
        int64_t v165 = v157;
        int64_t v166 = 8 * v165; // 0x40d0b2
        int64_t * v167 = (int64_t *)(v166 + v32); // 0x40d0b2
        int64_t v168 = *v167; // 0x40d0b2
        int64_t v169 = *(int64_t *)(v166 + v145); // 0x40d0b6
        int64_t v170 = v169 & -1 - v168; // 0x40d0c0
        int64_t v171 = v168 & -1 - v169; // 0x40d0c6
        *(int64_t *)(v166 + v33) = v170;
        int64_t v172 = v170 | v163; // 0x40d0cd
        *v167 = v171;
        int64_t v173 = v165 + 1; // 0x40d0d4
        int64_t v174 = v171 | v164; // 0x40d0d8
        v157 = v173;
        v158 = v174;
        v159 = v172;
        while (v173 != 4) {
            // 0x40d0b2
            v163 = v159;
            v164 = v158;
            v165 = v157;
            v166 = 8 * v165;
            v167 = (int64_t *)(v166 + v32);
            v168 = *v167;
            v169 = *(int64_t *)(v166 + v145);
            v170 = v169 & -1 - v168;
            v171 = v168 & -1 - v169;
            *(int64_t *)(v166 + v33) = v170;
            v172 = v170 | v163;
            *v167 = v171;
            v173 = v165 + 1;
            v174 = v171 | v164;
            v157 = v173;
            v158 = v174;
            v159 = v172;
        }
        // 0x40d0e1
        int64_t v175; // 0x40cb60
        int64_t v176 = 24 * v175 + v30; // 0x40d0eb
        int64_t v177 = v176; // 0x40d0f2
        int64_t v178; // 0x40cb60
        int64_t v179 = v178; // 0x40d0f2
        if (v172 != 0) {
            int128_t v180 = v29; // 0x40d0f4
            int128_t v181 = __asm_movdqa(v180); // 0x40d0f4
            int64_t v182 = 32 * v178 + v31; // 0x40d109
            int128_t v183 = *(int128_t *)v182; // 0x40d10e
            __asm_movups(v183, v181);
            int128_t v184; // 0x40cb60
            int128_t v185 = __asm_movdqa(v184); // 0x40d111
            int128_t v186 = *(int128_t *)(v182 + 16); // 0x40d11a
            __asm_movups(v186, v185);
            int128_t v187 = __asm_movdqa(0); // 0x40d11e
            int64_t v188 = 24 * v178;
            int128_t v189 = *(int128_t *)v145; // 0x40d130
            __asm_movups(v189, v187);
            int128_t v190; // 0x40cb60
            int128_t v191 = __asm_movdqa(v190); // 0x40d135
            int128_t v192 = *(int128_t *)(v145 + 16); // 0x40d13e
            __asm_movups(v192, v191);
            if ((int32_t)function_40b1c0(v188 + v30, v176) != 0) {
                goto lab_0x40d233;
            }
            // 0x40d151
            v177 = 0x100000000 * v176 >> 32;
            v179 = v178 + 1;
        }
        int64_t v193 = v179;
        int64_t v194 = v177;
        int64_t * v195; // 0x40cb60
        int64_t v196 = *v195; // 0x40d164
        int64_t v197 = *(int64_t *)(v196 + v37); // 0x40d168
        if ((char)function_408b10(v194, v197) == 0) {
            // 0x40d15a
            goto lab_0x40d233;
        }
        // 0x40d17c
        int64_t v198; // 0x40cb60
        v162 = v198;
        v160 = v193;
        v161 = v175;
        if (v174 == 0) {
            // break -> 0x40d195
            goto lab_0x40d195_2;
        }
    }
    goto lab_0x40d05e;
  lab_0x40d05e:;
    // 0x40d05e
    int64_t v199; // 0x40cb60
    int64_t v200 = v199;
    int64_t v201; // 0x40cb60
    int64_t v202 = v201 + 1; // 0x40d05e
    v199 = v200;
    int64_t v203; // 0x40cb60
    v203 += 32;
    v201 = v202;
    v162 = 0x100000000000000 * v19 >> 56;
    v160 = v200;
    v161 = v202;
    if (v202 >= v200) {
        // break -> 0x40d195
        goto lab_0x40d195_2;
    }
    goto lab_0x40d06f;
  lab_0x40cc32:
    // 0x40cc32
    v13 = v12;
    v17 = v16;
    v46 = v45;
    int64_t v206 = v28 + 1; // 0x40cc32
    v23 = v24;
    v28 = v206;
    v44 = v46;
    v14 = v17;
    v18 = v20;
    v10 = v13;
    if (v206 >= *(int64_t *)(v20 + 16)) {
        // break -> 0x40cc43
        goto lab_0x40cc43;
    }
    goto lab_0x40cbdd;
  lab_0x40cf57:;
    uint32_t v207 = v39 / 256; // 0x40cc07
    uint32_t v208 = v207 & 0xff03ff;
    int128_t v209 = v47;
    int128_t v210 = v25;
    int128_t v211 = v209; // 0x40cf5a
    int64_t v212; // 0x40cc0a
    int128_t v213; // 0x40cb60
    if ((int16_t)v208 == 0) {
        goto lab_0x40d010;
    } else {
        // 0x40cf60
        v212 = v208;
        v213 = v209;
        if ((v212 & 32) != 0) {
            int128_t v214 = v4; // 0x40d2d0
            int128_t v215 = __asm_pxor(v209, v209); // 0x40d2d5
            v4 = __asm_movaps(v215);
            *v36 = (int128_t)__asm_movaps(v215);
            v24 = v210;
            v45 = v215;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            if ((v214 & 1024) == 0) {
                goto lab_0x40cc32;
            } else {
                // 0x40d2e9
                v4 = 1024;
                v213 = v215;
                goto lab_0x40cf68;
            }
        } else {
            goto lab_0x40cf68;
        }
    }
  lab_0x40d29f:;
    int128_t v216 = v48;
    int128_t v217 = v26;
    int64_t v218 = *(int64_t *)(v15 + 216); // 0x40d29f
    if ((v218 & 64) == 0) {
        // 0x40d2ab
        v4 = (int64_t)v4 & -1025;
    }
    // 0x40d2b4
    v25 = v217;
    v47 = v216;
    if ((char)v218 <= 255) {
        // 0x40d2c0
        v4 = (int64_t)v4 & -2;
        v25 = v217;
        v47 = v216;
    }
    goto lab_0x40cf57;
  lab_0x40d010:;
    int128_t v219 = v211;
    v162 = v19;
    v160 = v11;
    v161 = 0;
    if (v11 >= 1) {
        // 0x40d021
        v199 = v11;
        v203 = v31;
        v201 = 0;
        while (true) {
          lab_0x40d06f:
            // 0x40d06f
            if (v40 == 1) {
                unsigned char v204 = *(char *)v38; // 0x40d040
                int64_t v205 = *(int64_t *)(32 * v201 + v31 + (int64_t)(v204 / 8 & 24)); // 0x40d053
                if ((1 << (int64_t)(v204 % 64) & v205) != 0) {
                    goto lab_0x40d07d;
                } else {
                    goto lab_0x40d05e;
                }
            } else {
                goto lab_0x40d07d;
            }
        }
    }
  lab_0x40d195_2:;
    int64_t v220 = v160;
    int64_t v221 = v162;
    v24 = v210;
    v45 = v219;
    v16 = v15;
    v20 = v221;
    v12 = v220;
    int64_t v222; // 0x40cb60
    int64_t v223; // 0x40cb60
    int64_t v224; // 0x40cb60
    int64_t result; // 0x40cb60
    int128_t v225; // 0x40cb60
    if (v220 != v161) {
        goto lab_0x40cc32;
    } else {
        int128_t v226 = __asm_movdqa(v4); // 0x40d19e
        int64_t v227 = 32 * v220 + v31; // 0x40d1b5
        __asm_movups(*(int128_t *)v227, v226);
        __asm_movups(*(int128_t *)(v227 + 16), __asm_movdqa(v210));
        v97 = 24 * v220;
        int64_t v228 = v97 + v30; // 0x40d1dd
        int64_t * v229 = (int64_t *)v228;
        *v229 = 1;
        int64_t * v230 = (int64_t *)(v228 + 8);
        *v230 = 1;
        int64_t * mem6 = malloc(8); // 0x40d1f6
        *(int64_t *)(v228 + 16) = (int64_t)mem6;
        if (mem6 == NULL) {
            // 0x40cefb
            *v230 = 0;
            *v229 = 0;
            if (v220 != 0) {
                goto lab_0x40d233;
            } else {
                // 0x40cf14
                free(mem);
                result = 0;
                goto lab_0x40cf22;
            }
        }
        // 0x40d212
        *mem6 = *(int64_t *)(*(int64_t *)(v221 + 24) + v37);
        v225 = v219;
        v223 = 0x100000000000000 * v15 >> 56;
        v224 = v221;
        v222 = v220 + 1;
        goto lab_0x40d219;
    }
  lab_0x40cf68:;
    int128_t v231 = v213;
    v225 = v231;
    v223 = v15;
    v224 = v19;
    v222 = v11;
    if ((char)v207 <= -1) {
        goto lab_0x40d219;
    } else {
        if ((v212 & 4) == 0) {
            goto lab_0x40cfc0;
        } else {
            if (v40 == 1) {
                // 0x40d380
                v225 = v231;
                v223 = v15;
                v224 = v19;
                v222 = v11;
                if ((*(char *)(v38 + 10) & 64) == 0) {
                    goto lab_0x40d219;
                } else {
                    // 0x40d38b
                    if (*(int32_t *)(v15 + 180) > 1) {
                        goto lab_0x40cf8b;
                    } else {
                        goto lab_0x40d350;
                    }
                }
            } else {
                // 0x40cf7d
                if (*(int32_t *)(v15 + 180) < 2) {
                    goto lab_0x40d350;
                } else {
                    goto lab_0x40cf8b;
                }
            }
        }
    }
  lab_0x40d219:;
    int128_t v232 = v225;
    int128_t v233 = __asm_pxor(v232, v232); // 0x40d219
    v4 = __asm_movaps(v233);
    *v36 = (int128_t)__asm_movaps(v233);
    v24 = v210;
    v45 = v233;
    v16 = v223;
    v20 = v224;
    v12 = v222;
    goto lab_0x40cc32;
  lab_0x40cfc0:
    // 0x40cfc0
    v211 = v231;
    if ((v212 & 8) == 0) {
        goto lab_0x40d010;
    } else {
        if (v40 == 1) {
            // 0x40d3e0
            v225 = v231;
            v223 = v15;
            v224 = v19;
            v222 = v11;
            if ((*(char *)(v38 + 10) & 64) == 0) {
                goto lab_0x40cfcd;
            } else {
                goto lab_0x40d219;
            }
        } else {
            goto lab_0x40cfcd;
        }
    }
  lab_0x40cfcd:
    // 0x40cfcd
    if (*(int32_t *)(v15 + 180) < 2) {
        int64_t v234 = 0; // 0x40d32f
        int64_t v235 = 8 * v234; // 0x40d31c
        int64_t * v236 = (int64_t *)(v235 + v32); // 0x40d327
        int64_t v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235); // 0x40d327
        *v236 = v237;
        v234++;
        int64_t v238 = v237; // 0x40d333
        int64_t v239 = v238; // 0x40d33a
        while (v234 != 4) {
            // 0x40d31c
            v235 = 8 * v234;
            v236 = (int64_t *)(v235 + v32);
            v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235);
            *v236 = v237;
            v234++;
            v238 = v237 | v239;
            v239 = v238;
        }
        // 0x40d33c
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v238 == 0) {
            goto lab_0x40cc32;
        } else {
            goto lab_0x40d010;
        }
    } else {
        int64_t v240 = 0; // 0x40cfe1
        int64_t v241 = 8 * v240; // 0x40cfe3
        int64_t v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120)); // 0x40cfeb
        int64_t * v243 = (int64_t *)(v241 + v32); // 0x40cff2
        int64_t v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241)); // 0x40cff2
        *v243 = v244;
        v240++;
        int64_t v245 = v244; // 0x40cffe
        int64_t v246 = v245; // 0x40d005
        while (v240 != 4) {
            // 0x40cfe3
            v241 = 8 * v240;
            v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120));
            v243 = (int64_t *)(v241 + v32);
            v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241));
            *v243 = v244;
            v240++;
            v245 = v244 | v246;
            v246 = v245;
        }
        // 0x40d007
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v245 == 0) {
            goto lab_0x40cc32;
        } else {
            goto lab_0x40d010;
        }
    }
  lab_0x40d350:;
    int64_t v247 = 0; // 0x40d352
    int64_t v248 = 8 * v247; // 0x40d354
    int64_t * v249 = (int64_t *)(v248 + v32); // 0x40d354
    int64_t v250 = *(int64_t *)(v15 + 184 + v248) & *v249; // 0x40d358
    *v249 = v250;
    int64_t v251 = v247 + 1; // 0x40d364
    int64_t v252 = v250; // 0x40d368
    v247 = v251;
    int64_t v253 = v252; // 0x40d36f
    while (v251 != 4) {
        // 0x40d354
        v248 = 8 * v247;
        v249 = (int64_t *)(v248 + v32);
        v250 = *(int64_t *)(v15 + 184 + v248) & *v249;
        *v249 = v250;
        v251 = v247 + 1;
        v252 = v250 | v253;
        v247 = v251;
        v253 = v252;
    }
    // 0x40d371
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v252 != 0) {
        goto lab_0x40cfc0;
    } else {
        goto lab_0x40cc32;
    }
  lab_0x40cf8b:;
    int64_t v254 = 0; // 0x40cf91
    int64_t v255 = 8 * v254; // 0x40cf93
    int64_t v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120)); // 0x40cf93
    int64_t * v257 = (int64_t *)(v255 + v32); // 0x40cfa2
    int64_t v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257; // 0x40cfa2
    *v257 = v258;
    int64_t v259 = v254 + 1; // 0x40cfaa
    int64_t v260 = v258; // 0x40cfae
    v254 = v259;
    int64_t v261 = v260; // 0x40cfb5
    while (v259 != 4) {
        // 0x40cf93
        v255 = 8 * v254;
        v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120));
        v257 = (int64_t *)(v255 + v32);
        v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257;
        *v257 = v258;
        v259 = v254 + 1;
        v260 = v258 | v261;
        v254 = v259;
        v261 = v260;
    }
    // 0x40cfb7
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v260 == 0) {
        goto lab_0x40cc32;
    } else {
        goto lab_0x40cfc0;
    }
  lab_0x40d54c:;
    int64_t * mem7 = calloc(8, 256); // 0x40d556
    int64_t v262 = (int64_t)mem7; // 0x40d556
    *v6 = v262;
    // 0x40cf22
    return v262 & -256 | (int64_t)(mem7 != NULL);
  lab_0x40d417:
    // 0x40d417
    free(mem2);
    int64_t v263 = v30 + 16; // 0x40d424
    int64_t v264 = v263 + 24; // 0x40d433
    free((int64_t *)*(int64_t *)v263);
    int64_t v265 = v264; // 0x40d43f
    while (v264 != 24 * v13 + v263) {
        // 0x40d430
        v264 = v265 + 24;
        free((int64_t *)*(int64_t *)v265);
        v265 = v264;
    }
    // 0x40d441
    free(mem);
    result = 0;
  lab_0x40cf22:
    // 0x40cf22
    return result;
  lab_0x40d248:;
    int64_t v100 = v99 + 24; // 0x40d24b
    free((int64_t *)*(int64_t *)v99);
    v99 = v100;
    if (v98 != v100) {
        goto lab_0x40d248;
    } else {
        // 0x40d259
        free(mem);
        result = 0;
        goto lab_0x40cf22;
    }
  lab_0x40d5e2:;
    int64_t v101 = v9;
    int64_t v102 = v21;
    int64_t v103 = *(int64_t *)v22; // 0x40d5e2
    int64_t v104; // 0x40cb60
    int64_t v105; // 0x40cb60
    int64_t v106; // 0x40cb60
    int64_t * v107; // 0x40cb60
    if (v103 == 0) {
        goto lab_0x40d602;
    } else {
        // 0x40d5f2
        v107 = (int64_t *)(v101 - 32);
        v105 = v103;
        v106 = 1;
        v104 = v102;
        goto lab_0x40d5f2_2;
    }
  lab_0x40ce3f:;
    int64_t v108 = v8;
    int64_t v109 = *(int64_t *)(v108 + v33); // 0x40ce42
    int64_t v110; // 0x40cb60
    int64_t v111; // 0x40cb60
    int64_t v112; // 0x40cb60
    int64_t * v113; // 0x40cb60
    int64_t v114; // 0x40cb60
    int64_t * v115; // 0x40cb60
    if (v109 == 0) {
        goto lab_0x40ce74;
    } else {
        // 0x40ce60
        v113 = (int64_t *)(v108 + v31);
        v114 = v30 + 0x1820 + v108;
        v115 = (int64_t *)(v17 + 184 + v108);
        v110 = v109;
        v111 = 1;
        v112 = 64 * v108 + v35;
        goto lab_0x40ce60_2;
    }
  lab_0x40d602:;
    int64_t v116 = v22 + 8; // 0x40d602
    int64_t v117 = v34; // 0x40d614
    v22 = v116;
    v21 = v102 + 512;
    v9 = v101 + 8;
    int64_t v118; // bp-56, 0x40cb60
    if (v116 != (int64_t)&v118) {
        goto lab_0x40d5e2;
    } else {
        goto lab_0x40ce7e;
    }
  lab_0x40ce74:
    // 0x40ce74
    v8 = v108 + 8;
    v117 = v35;
    if (v108 != 24) {
        goto lab_0x40ce3f;
    } else {
        goto lab_0x40ce7e;
    }
  lab_0x40ce7e:;
    int64_t v119; // 0x40cb60
    char v120; // 0x40cb60
    if ((v120 & 4) == 0) {
        goto lab_0x40cead;
    } else {
        // 0x40ce8f
        v119 = 0;
        goto lab_0x40ce8f_2;
    }
  lab_0x40d5f2_2:;
    int64_t v121 = v104;
    int64_t v122 = v106;
    uint64_t v123 = v105;
    int64_t v124; // 0x40cb60
    int64_t v125; // 0x40cb60
    int64_t v126; // 0x40cb60
    if (v123 % 2 != 0) {
        // 0x40d61b
        v126 = 0;
        v125 = v101;
        v124 = 0;
        if ((*v107 & v122) != 0) {
            goto lab_0x40d63c;
        } else {
            goto lab_0x40d626;
        }
    } else {
        goto lab_0x40d5f6;
    }
  lab_0x40ce60_2:;
    int64_t v127 = v112;
    int64_t v128 = v111;
    uint64_t v129 = v110;
    int64_t v130; // 0x40cb60
    int64_t v131; // 0x40cb60
    int64_t v132; // 0x40cb60
    if (v129 % 2 != 0) {
        // 0x40d4f0
        v131 = v114;
        v130 = 0;
        v132 = 0;
        if ((*v113 & v128) != 0) {
            goto lab_0x40d51f;
        } else {
            goto lab_0x40d508;
        }
    } else {
        goto lab_0x40ce68;
    }
  lab_0x40cead:
    // 0x40cead
    free(mem3);
    free(mem2);
    int64_t v133 = v30 + 16; // 0x40cece
    int64_t v134 = v133; // 0x40ced5
    goto lab_0x40ced8;
  lab_0x40d5f6:
    // 0x40d5f6
    v105 = v123 / 2;
    v106 = 2 * v122;
    v104 = v121 + 8;
    if (v123 >= 2) {
        goto lab_0x40d5f2_2;
    } else {
        goto lab_0x40d602;
    }
  lab_0x40ce68:
    // 0x40ce68
    v110 = v129 / 2;
    v111 = 2 * v128;
    v112 = v127 + 8;
    if (v129 >= 2) {
        goto lab_0x40ce60_2;
    } else {
        goto lab_0x40ce74;
    }
  lab_0x40ced8:;
    int64_t v135 = v134 + 24; // 0x40cedc
    free((int64_t *)*(int64_t *)v134);
    v134 = v135;
    if (v133 + (int64_t)size2 != v135) {
        goto lab_0x40ced8;
    } else {
        // 0x40ceea
        free(mem);
        result = 1;
        goto lab_0x40cf22;
    }
  lab_0x40ce8f_2:;
    int64_t v136 = v119;
    if ((*(char *)(v30 + 0x1801 + 32 * v136) & 4) != 0) {
        int64_t v137 = *(int64_t *)(8 * v136 + v43); // 0x40d57e
        *(int64_t *)(v117 + 80) = v137;
        if ((char)v27 == 0) {
            goto lab_0x40cead;
        } else {
            // 0x40d58c
            *(int64_t *)(v117 + 2128) = v137;
            goto lab_0x40cead;
        }
    } else {
        int64_t v138 = v136 + 1; // 0x40cea4
        v119 = v138;
        if (v138 != v13) {
            goto lab_0x40ce8f_2;
        } else {
            goto lab_0x40cead;
        }
    }
  lab_0x40d63c:;
    int64_t v139 = 8 * v124; // 0x40d63c
    *(int64_t *)v121 = *(int64_t *)(v139 + v41);
    *(int64_t *)(v121 + 2048) = *(int64_t *)(v139 + v42);
    goto lab_0x40d5f6;
  lab_0x40d626:;
    int64_t v140 = v125;
    int64_t v141 = v126 + 1; // 0x40d629
    v126 = v141;
    v125 = v140 + 32;
    v124 = v141;
    if ((*(int64_t *)v140 & v122) == 0) {
        goto lab_0x40d626;
    } else {
        goto lab_0x40d63c;
    }
  lab_0x40d51f:;
    int64_t v142 = v132;
    if ((*v115 & v128) == 0) {
        // 0x40d535
        *(int64_t *)v127 = *(int64_t *)(v142 + v41);
        goto lab_0x40ce68;
    } else {
        // 0x40d529
        *(int64_t *)v127 = *(int64_t *)(v142 + v42);
        goto lab_0x40ce68;
    }
  lab_0x40d508:;
    int64_t v143 = v131;
    int64_t v144 = v130 + 1; // 0x40d50b
    v131 = v143 + 32;
    v130 = v144;
    if ((*(int64_t *)v143 & v128) == 0) {
        goto lab_0x40d508;
    } else {
        // 0x40d51b
        v132 = 8 * v144;
        goto lab_0x40d51f;
    }
}
// Address range: 0x40d670 - 0x40d6f7
int64_t function_40d670(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x40d670
    char * v2 = (char *)v1; // 0x40d670
    if (*v2 == 16) {
        int64_t v3 = *(int64_t *)(a2 + 8); // 0x40d676
        *(int64_t *)(a2 + 24) = *(int64_t *)(v3 + 24);
        *(int64_t *)(a2 + 56) = *(int64_t *)(v3 + 56);
        return 0;
    }
    // 0x40d690
    *(int64_t *)(a2 + 24) = a2;
    int64_t v4 = a2 + 40; // 0x40d6a4
    int64_t v5 = function_4097f0(a1, *(int64_t *)v4, *(int64_t *)v1); // 0x40d6a8
    *(int64_t *)(a2 + 56) = v5;
    if (v5 == -1) {
        // 0x40d6e6
        return 12;
    }
    // 0x40d6ba
    if (*v2 == 12) {
        int32_t * v6 = (int32_t *)(a1 + 8 + 16 * v5); // 0x40d6d8
        *v6 = *v6 & -0x3ff01 | 256 * *(int32_t *)v4 & 0x3ff00;
    }
    // 0x40d6e6
    return 0;
}
// Address range: 0x40d700 - 0x40d87c
int64_t function_40d700(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        int64_t v2 = 0; // 0x40d71b
        if (*v1 != 0) {
            int64_t v3 = v2 + 1; // 0x40d72f
            int64_t v4 = a1 + 16 * v2; // 0x40d737
            function_4097a0(v4);
            v2 = v3;
            int64_t v5 = v4; // 0x40d744
            while (*v1 > v3) {
                // 0x40d72c
                v3 = v2 + 1;
                v4 = v5 + 16 * v2;
                function_4097a0(v4);
                v2 = v3;
                v5 = v4;
            }
        }
    }
    // 0x40d746
    free((int64_t *)*(int64_t *)(a1 + 24));
    int64_t * v6; // 0x40d700
    int64_t * v7; // 0x40d700
    int64_t * v8; // 0x40d700
    if (*v1 == 0) {
        // 0x40d746
        v7 = (int64_t *)(a1 + 56);
        v6 = (int64_t *)(a1 + 48);
        v8 = (int64_t *)(a1 + 40);
    } else {
        int64_t * v9 = (int64_t *)(a1 + 48);
        int64_t * v10 = (int64_t *)(a1 + 56);
        int64_t * v11 = (int64_t *)(a1 + 40);
        int64_t v12 = 0;
        int64_t v13 = *v9; // 0x40d760
        if (v13 != 0) {
            // 0x40d76a
            free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
        }
        int64_t v14 = *v10; // 0x40d778
        if (v14 != 0) {
            // 0x40d782
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
        }
        int64_t v15 = *v11; // 0x40d790
        if (v15 != 0) {
            // 0x40d79a
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
        }
        int64_t v16 = v12 + 1; // 0x40d7a8
        v7 = v10;
        v6 = v9;
        v8 = v11;
        while (*v1 > v16) {
            // 0x40d760
            v12 = v16;
            v13 = *v9;
            if (v13 != 0) {
                // 0x40d76a
                free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
            }
            // 0x40d778
            v14 = *v10;
            if (v14 != 0) {
                // 0x40d782
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
            }
            // 0x40d790
            v15 = *v11;
            if (v15 != 0) {
                // 0x40d79a
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
            }
            // 0x40d7a8
            v16 = v12 + 1;
            v7 = v10;
            v6 = v9;
            v8 = v11;
        }
    }
    // 0x40d7b3
    free((int64_t *)*v8);
    free((int64_t *)*v6);
    int64_t * v17 = (int64_t *)*v7; // 0x40d7cf
    free(v17);
    free(v17);
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x40d7dd
    int64_t v19 = *v18; // 0x40d7dd
    int64_t * v20 = NULL; // 0x40d7e5
    if (v19 != 0) {
        int64_t v21 = 0; // 0x40d823
        int64_t v22 = 24 * v21 + v19; // 0x40d7f7
        int64_t * v23 = (int64_t *)v22; // 0x40d7fb
        int64_t * v24 = (int64_t *)(v22 + 16);
        int64_t v25 = 0; // 0x40d800
        int64_t v26; // 0x40d810
        if (*v23 >= 1) {
            v26 = v25 + 1;
            function_409cf0(*(int64_t *)(*v24 + 8 * v25));
            v25 = v26;
            while (v26 < *v23) {
                // 0x40d808
                v26 = v25 + 1;
                function_409cf0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
            }
        }
        // 0x40d81f
        v21++;
        free((int64_t *)*v24);
        int64_t v27 = *v18;
        while (*(int64_t *)(a1 + 136) >= v21) {
            // 0x40d7f0
            v22 = 24 * v21 + v27;
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 16);
            v25 = 0;
            if (*v23 >= 1) {
                v26 = v25 + 1;
                function_409cf0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
                while (v26 < *v23) {
                    // 0x40d808
                    v26 = v25 + 1;
                    function_409cf0(*(int64_t *)(*v24 + 8 * v25));
                    v25 = v26;
                }
            }
            // 0x40d81f
            v21++;
            free((int64_t *)*v24);
            v27 = *v18;
        }
        // 0x40d845
        v20 = (int64_t *)v27;
    }
    // 0x40d845
    free(v20);
    int64_t v28 = *(int64_t *)(a1 + 120); // 0x40d84a
    if (v28 != (int64_t)&g15) {
        // 0x40d858
        free((int64_t *)v28);
    }
    // 0x40d85d
    free((int64_t *)*(int64_t *)(a1 + 224));
    free((int64_t *)a1);
    return &g84;
}
// Address range: 0x40d880 - 0x40d8ce
int64_t function_40d880(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 < 1) {
        // 0x40d8c0
        free((int64_t *)*v1);
        return &g84;
    }
    int64_t v2 = 0;
    int64_t v3 = v2 + 1; // 0x40d899
    int64_t v4 = 48 * v2; // 0x40d89d
    free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
    uint64_t v5 = *(int64_t *)(v4 + 16 + *v1); // 0x40d8b0
    free((int64_t *)v5);
    while (v3 < v5) {
        // 0x40d890
        v2 = v3;
        v3 = v2 + 1;
        v4 = 48 * v2;
        free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
        v5 = *(int64_t *)(v4 + 16 + *v1);
        free((int64_t *)v5);
    }
    // 0x40d8c0
    free((int64_t *)*v1);
    return &g84;
}
// Address range: 0x40d8d0 - 0x40d960
int64_t function_40d8d0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int128_t * a6) {
    int64_t v1 = a1 - 1; // 0x40d8d7
    *(int64_t *)a1 = v1;
    if (v1 < 0) {
        // 0x40d942
        __assert_fail("num >= 0", "lib/regexec.c", 1359, "pop_fail_stack");
        return &g84;
    }
    int64_t v2 = 48 * v1; // 0x40d8ee
    int64_t v3 = v2 + a2; // 0x40d8f8
    *a3 = *(int64_t *)v3;
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x40d901
    memcpy((int64_t *)a5, (int64_t *)v4, 16 * (int32_t)a4);
    int64_t * v5 = (int64_t *)((int64_t)a6 + 16); // 0x40d90d
    free((int64_t *)*v5);
    int64_t v6 = v4 + v2;
    free((int64_t *)*(int64_t *)(v6 + 16));
    *a6 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)(v6 + 24)));
    *v5 = *(int64_t *)(v6 + 40);
    return *(int64_t *)(v6 + 8);
}
// Address range: 0x40d960 - 0x40d9ac
int64_t function_40d960(int64_t a1, int64_t str) {
    // 0x40d960
    int64_t v1; // 0x40d960
    uint64_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x40d96f
    if (len != 1) {
        // 0x40d9a0
        return 3;
    }
    int64_t * v3 = (int64_t *)((v2 / 8 & 24) + a1); // 0x40d98a
    *v3 = *v3 | (int64_t)len << v2 % 64;
    return 0;
}
// Address range: 0x40d9b0 - 0x40e176
int64_t function_40d9b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = a4; // 0x40d9d1
    int64_t v3 = a6; // 0x40d9d1
    int64_t v4; // 0x40d9b0
    int64_t v5; // 0x40d9b0
    int64_t v6; // 0x40d9b0
    int64_t v7; // 0x40d9b0
    int64_t v8; // 0x40d9b0
    bool v9; // 0x40d9b0
    if ((a7 & 0x400000) == 0) {
        goto lab_0x40d9f5;
    } else {
        int64_t v10 = v9 ? -1 : 1;
        int64_t v11 = (int64_t)"upper"; // 0x40d9b0
        int64_t v12 = a6; // 0x40d9b0
        unsigned char v13 = *(char *)v12; // 0x40d9e0
        char v14 = *(char *)v11; // 0x40d9e0
        v2 = 5;
        char v15 = v14; // 0x40d9e0
        bool v16 = false; // 0x40d9e0
        while (v13 == v14) {
            // 0x40d9d3
            v11 += v10;
            v12 += v10;
            v15 = v13;
            v16 = true;
            if (v2 == 0) {
                // break -> 
                break;
            }
            v13 = *(char *)v12;
            v14 = *(char *)v11;
            v2--;
            v15 = v14;
            v16 = false;
        }
        unsigned char v17 = v15;
        v3 = (int64_t)"alpha";
        int64_t v18 = (int64_t)"lower"; // 0x40d9e9
        int64_t v19 = a6; // 0x40d9e9
        if ((v13 >= v17 && !v16) != v13 < v17) {
            unsigned char v20 = *(char *)v19; // 0x40daf3
            char v21 = *(char *)v18; // 0x40daf3
            int64_t v22 = 5; // 0x40daf3
            char v23 = v21; // 0x40daf3
            bool v24 = false; // 0x40daf3
            while (v20 == v21) {
                // 0x40dae6
                v18 += v10;
                v19 += v10;
                v23 = v20;
                v24 = true;
                if (v22 == 0) {
                    // break -> 
                    break;
                }
                v20 = *(char *)v19;
                v21 = *(char *)v18;
                v22--;
                v23 = v21;
                v24 = false;
            }
            unsigned char v25 = v23;
            int64_t v26 = !((v20 < v25 | v24)) == v20 < v25 ? (int64_t)"alpha" : a6; // 0x40db05
            v6 = a3;
            v8 = v22;
            v4 = v26;
            v7 = v22;
            v5 = v26;
            if (v22 != v1) {
                goto lab_0x40da05;
            } else {
                goto lab_0x40db15;
            }
        } else {
            goto lab_0x40d9f5;
        }
    }
  lab_0x40d9f5:
    // 0x40d9f5
    v6 = a3;
    v8 = v2;
    v4 = v3;
    v7 = v1;
    v5 = v3;
    if (v2 == v1) {
        goto lab_0x40db15;
    } else {
        goto lab_0x40da05;
    }
  lab_0x40db15:;
    int64_t v27 = 2 * v7 | 1; // 0x40db15
    int64_t * v28 = (int64_t *)a3; // 0x40db2e
    int64_t * mem = realloc(v28, 8 * (int32_t)v27); // 0x40db2e
    if (mem == NULL) {
        // 0x40da96
        return 12;
    }
    int64_t v29 = (int64_t)mem; // 0x40db2e
    *v28 = v29;
    *a5 = v27;
    v6 = v29;
    v8 = v7;
    v4 = v5;
    goto lab_0x40da05;
  lab_0x40da05:
    // 0x40da05
    *(int64_t *)a4 = v8 + 1;
    char * name = (char *)v4; // 0x40da14
    *(int64_t *)(8 * v8 + v6) = (int64_t)wctype(name);
    int64_t v30 = v9 ? -1 : 1;
    int64_t v31 = (int64_t)"alnum"; // 0x40d9b0
    int64_t v32 = v4; // 0x40d9b0
    int64_t v33 = 6; // 0x40d9b0
    unsigned char v34 = *(char *)v32; // 0x40da2a
    char v35 = *(char *)v31; // 0x40da2a
    char v36 = v35; // 0x40da2a
    bool v37 = false; // 0x40da2a
    while (v34 == v35) {
        int64_t v38 = v33 - 1; // 0x40da2a
        v31 += v30;
        v32 += v30;
        v33 = v38;
        v36 = v34;
        v37 = true;
        if (v38 == 0) {
            // break -> 
            break;
        }
        v34 = *(char *)v32;
        v35 = *(char *)v31;
        v36 = v35;
        v37 = false;
    }
    unsigned char v39 = v36;
    int64_t v40 = (int64_t)"cntrl"; // 0x40da33
    int64_t v41 = v4; // 0x40da33
    int64_t v42 = 6; // 0x40da33
    if ((v34 >= v39 && !v37) == v34 < v39) {
        int64_t v43 = (int64_t)*__ctype_b_loc(); // 0x40dab4
        if (a1 != 0) {
            int64_t v44 = 0;
            unsigned char v45; // 0x40dcde
            unsigned char v46; // 0x40d9b0
            int64_t * v47; // 0x40dcf3
            if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                // 0x40dcde
                v45 = *(char *)(v44 + a1);
                v46 = v45 % 64;
                v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
            }
            int64_t v48 = v44 + 1; // 0x40dd01
            while (v44 != 255) {
                // 0x40dcd8
                v44 = v48;
                if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                    // 0x40dcde
                    v45 = *(char *)(v44 + a1);
                    v46 = v45 % 64;
                    v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                    *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
                }
                // 0x40dcf7
                v48 = v44 + 1;
            }
        } else {
            int64_t v49 = 0;
            int64_t * v50; // 0x40dad3
            if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                // 0x40dac6
                v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                *v50 = *v50 | 1 << v49 % 64;
            }
            int64_t v51 = v49 + 1; // 0x40dae2
            while (v49 != 255) {
                // 0x40dac0
                v49 = v51;
                if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                    // 0x40dac6
                    v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                    *v50 = *v50 | 1 << v49 % 64;
                }
                // 0x40dad7
                v51 = v49 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v52 = *(char *)v41; // 0x40da42
    char v53 = *(char *)v40; // 0x40da42
    char v54 = v53; // 0x40da42
    bool v55 = false; // 0x40da42
    while (v52 == v53) {
        int64_t v56 = v42 - 1; // 0x40da42
        v40 += v30;
        v41 += v30;
        v42 = v56;
        v54 = v52;
        v55 = true;
        if (v56 == 0) {
            // break -> 
            break;
        }
        v52 = *(char *)v41;
        v53 = *(char *)v40;
        v54 = v53;
        v55 = false;
    }
    unsigned char v57 = v54;
    int64_t v58 = (int64_t)"lower"; // 0x40da4b
    int64_t v59 = v4; // 0x40da4b
    int64_t v60 = 6; // 0x40da4b
    if ((v52 >= v57 && !v55) == v52 < v57) {
        int64_t v61 = (int64_t)*__ctype_b_loc(); // 0x40da5d
        if (a1 != 0) {
            int64_t v62 = 0;
            unsigned char v63; // 0x40dd16
            unsigned char v64; // 0x40d9b0
            int64_t * v65; // 0x40dd2b
            if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                // 0x40dd16
                v63 = *(char *)(v62 + a1);
                v64 = v63 % 64;
                v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
            }
            int64_t v66 = v62 + 1; // 0x40dd39
            while (v62 != 255) {
                // 0x40dd10
                v62 = v66;
                if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                    // 0x40dd16
                    v63 = *(char *)(v62 + a1);
                    v64 = v63 % 64;
                    v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                    *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
                }
                // 0x40dd2f
                v66 = v62 + 1;
            }
        } else {
            int64_t v67 = 0;
            int64_t * v68; // 0x40da83
            if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                // 0x40da76
                v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                *v68 = *v68 | 1 << v67 % 64;
            }
            int64_t v69 = v67 + 1; // 0x40da92
            while (v67 != 255) {
                // 0x40da70
                v67 = v69;
                if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                    // 0x40da76
                    v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                    *v68 = *v68 | 1 << v67 % 64;
                }
                // 0x40da87
                v69 = v67 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v70 = *(char *)v59; // 0x40db61
    char v71 = *(char *)v58; // 0x40db61
    char v72 = v71; // 0x40db61
    bool v73 = false; // 0x40db61
    while (v70 == v71) {
        int64_t v74 = v60 - 1; // 0x40db61
        v58 += v30;
        v59 += v30;
        v60 = v74;
        v72 = v70;
        v73 = true;
        if (v74 == 0) {
            // break -> 
            break;
        }
        v70 = *(char *)v59;
        v71 = *(char *)v58;
        v72 = v71;
        v73 = false;
    }
    unsigned char v75 = v72;
    int64_t v76 = (int64_t)"space"; // 0x40db6a
    int64_t v77 = v4; // 0x40db6a
    int64_t v78 = 6; // 0x40db6a
    if ((v70 >= v75 && !v73) == v70 < v75) {
        int64_t v79 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v80 = 0;
            unsigned char v81; // 0x40dd4f
            unsigned char v82; // 0x40d9b0
            int64_t * v83; // 0x40dd64
            if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                // 0x40dd4f
                v81 = *(char *)(v80 + a1);
                v82 = v81 % 64;
                v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
            }
            int64_t v84 = v80 + 1; // 0x40dd72
            while (v80 != 255) {
                // 0x40dd48
                v80 = v84;
                if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                    // 0x40dd4f
                    v81 = *(char *)(v80 + a1);
                    v82 = v81 % 64;
                    v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                    *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
                }
                // 0x40dd68
                v84 = v80 + 1;
            }
        } else {
            int64_t v85 = 0;
            int64_t * v86; // 0x40dbfc
            if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                // 0x40dbef
                v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                *v86 = *v86 | 1 << v85 % 64;
            }
            int64_t v87 = v85 + 1; // 0x40dc0b
            while (v85 != 255) {
                // 0x40dbe8
                v85 = v87;
                if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                    // 0x40dbef
                    v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                    *v86 = *v86 | 1 << v85 % 64;
                }
                // 0x40dc00
                v87 = v85 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v88 = *(char *)v77; // 0x40db79
    char v89 = *(char *)v76; // 0x40db79
    char v90 = v89; // 0x40db79
    bool v91 = false; // 0x40db79
    while (v88 == v89) {
        // 0x40db6c
        v78--;
        v76 += v30;
        v77 += v30;
        v90 = v88;
        v91 = true;
        if (v78 == 0) {
            // break -> 
            break;
        }
        v88 = *(char *)v77;
        v89 = *(char *)v76;
        v90 = v89;
        v91 = false;
    }
    unsigned char v92 = v90;
    int64_t v93 = (int64_t)"alpha"; // 0x40db82
    int64_t v94 = v4; // 0x40db82
    int64_t v95 = 6; // 0x40db82
    if ((v88 >= v92 && !v91) == v88 < v92) {
        int64_t v96 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v97 = 0;
            unsigned char v98; // 0x40ded7
            unsigned char v99; // 0x40d9b0
            int64_t * v100; // 0x40deec
            if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                // 0x40ded7
                v98 = *(char *)(v97 + a1);
                v99 = v98 % 64;
                v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
            }
            int64_t v101 = v97 + 1; // 0x40defa
            while (v97 != 255) {
                // 0x40ded0
                v97 = v101;
                if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                    // 0x40ded7
                    v98 = *(char *)(v97 + a1);
                    v99 = v98 % 64;
                    v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                    *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
                }
                // 0x40def0
                v101 = v97 + 1;
            }
        } else {
            int64_t v102 = 0;
            int64_t * v103; // 0x40dbb4
            if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                // 0x40dba7
                v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                *v103 = *v103 | 1 << v102 % 64;
            }
            int64_t v104 = v102 + 1; // 0x40dbc3
            while (v102 != 255) {
                // 0x40dba0
                v102 = v104;
                if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                    // 0x40dba7
                    v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                    *v103 = *v103 | 1 << v102 % 64;
                }
                // 0x40dbb8
                v104 = v102 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v105 = *(char *)v94; // 0x40dc1f
    char v106 = *(char *)v93; // 0x40dc1f
    char v107 = v106; // 0x40dc1f
    bool v108 = false; // 0x40dc1f
    while (v105 == v106) {
        int64_t v109 = v95 - 1; // 0x40dc1f
        v93 += v30;
        v94 += v30;
        v95 = v109;
        v107 = v105;
        v108 = true;
        if (v109 == 0) {
            // break -> 
            break;
        }
        v105 = *(char *)v94;
        v106 = *(char *)v93;
        v107 = v106;
        v108 = false;
    }
    unsigned char v110 = v107;
    int64_t v111 = (int64_t)"digit"; // 0x40dc28
    int64_t v112 = v4; // 0x40dc28
    int64_t v113 = 6; // 0x40dc28
    if ((v105 >= v110 && !v108) == v105 < v110) {
        int64_t v114 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v115 = 0;
            unsigned char v116; // 0x40dea4
            unsigned char v117; // 0x40d9b0
            int64_t * v118; // 0x40deb9
            if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                // 0x40dea4
                v116 = *(char *)(v115 + a1);
                v117 = v116 % 64;
                v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
            }
            int64_t v119 = v115 + 1; // 0x40dec7
            while (v115 != 255) {
                // 0x40de9d
                v115 = v119;
                if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                    // 0x40dea4
                    v116 = *(char *)(v115 + a1);
                    v117 = v116 % 64;
                    v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                    *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
                }
                // 0x40debd
                v119 = v115 + 1;
            }
        } else {
            int64_t v120 = 0;
            int64_t * v121; // 0x40dcbc
            if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                // 0x40dcaf
                v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                *v121 = *v121 | 1 << v120 % 64;
            }
            int64_t v122 = v120 + 1; // 0x40dccb
            while (v120 != 255) {
                // 0x40dca8
                v120 = v122;
                if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                    // 0x40dcaf
                    v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                    *v121 = *v121 | 1 << v120 % 64;
                }
                // 0x40dcc0
                v122 = v120 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v123 = *(char *)v112; // 0x40dc37
    char v124 = *(char *)v111; // 0x40dc37
    char v125 = v124; // 0x40dc37
    bool v126 = false; // 0x40dc37
    while (v123 == v124) {
        // 0x40dc2a
        v113--;
        v111 += v30;
        v112 += v30;
        v125 = v123;
        v126 = true;
        if (v113 == 0) {
            // break -> 
            break;
        }
        v123 = *(char *)v112;
        v124 = *(char *)v111;
        v125 = v124;
        v126 = false;
    }
    unsigned char v127 = v125;
    int64_t v128 = (int64_t)"print"; // 0x40dc40
    int64_t v129 = v4; // 0x40dc40
    int64_t v130 = 6; // 0x40dc40
    if ((v123 >= v127 && !v126) == v123 < v127) {
        int64_t v131 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v132 = 0;
            unsigned char v133; // 0x40df0a
            unsigned char v134; // 0x40d9b0
            int64_t * v135; // 0x40df1f
            if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                // 0x40df0a
                v133 = *(char *)(v132 + a1);
                v134 = v133 % 64;
                v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
            }
            int64_t v136 = v132 + 1; // 0x40df2d
            while (v132 != 255) {
                // 0x40df03
                v132 = v136;
                if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                    // 0x40df0a
                    v133 = *(char *)(v132 + a1);
                    v134 = v133 % 64;
                    v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                    *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
                }
                // 0x40df23
                v136 = v132 + 1;
            }
        } else {
            int64_t v137 = 0;
            int64_t * v138; // 0x40dc74
            if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                // 0x40dc67
                v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                *v138 = *v138 | 1 << v137 % 64;
            }
            int64_t v139 = v137 + 1; // 0x40dc83
            while (v137 != 255) {
                // 0x40dc60
                v137 = v139;
                if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                    // 0x40dc67
                    v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                    *v138 = *v138 | 1 << v137 % 64;
                }
                // 0x40dc78
                v139 = v137 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v140 = *(char *)v129; // 0x40dd86
    char v141 = *(char *)v128; // 0x40dd86
    char v142 = v141; // 0x40dd86
    bool v143 = false; // 0x40dd86
    while (v140 == v141) {
        int64_t v144 = v130 - 1; // 0x40dd86
        v128 += v30;
        v129 += v30;
        v130 = v144;
        v142 = v140;
        v143 = true;
        if (v144 == 0) {
            // break -> 
            break;
        }
        v140 = *(char *)v129;
        v141 = *(char *)v128;
        v142 = v141;
        v143 = false;
    }
    unsigned char v145 = v142;
    int64_t v146 = (int64_t)"upper"; // 0x40dd8f
    int64_t v147 = v4; // 0x40dd8f
    int64_t v148 = 6; // 0x40dd8f
    if ((v140 >= v145 && !v143) == v140 < v145) {
        int64_t v149 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v150 = 0;
            unsigned char v151; // 0x40e0e1
            unsigned char v152; // 0x40d9b0
            int64_t * v153; // 0x40e0f6
            if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                // 0x40e0e1
                v151 = *(char *)(v150 + a1);
                v152 = v151 % 64;
                v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
            }
            int64_t v154 = v150 + 1; // 0x40e104
            while (v150 != 255) {
                // 0x40e0da
                v150 = v154;
                if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                    // 0x40e0e1
                    v151 = *(char *)(v150 + a1);
                    v152 = v151 % 64;
                    v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                    *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
                }
                // 0x40e0fa
                v154 = v150 + 1;
            }
        } else {
            int64_t v155 = 0;
            int64_t * v156; // 0x40ddc4
            if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                // 0x40ddb7
                v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                *v156 = *v156 | 1 << v155 % 64;
            }
            int64_t v157 = v155 + 1; // 0x40ddd3
            while (v155 != 255) {
                // 0x40ddb0
                v155 = v157;
                if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                    // 0x40ddb7
                    v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                    *v156 = *v156 | 1 << v155 % 64;
                }
                // 0x40ddc8
                v157 = v155 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v158 = *(char *)v147; // 0x40dde7
    char v159 = *(char *)v146; // 0x40dde7
    char v160 = v159; // 0x40dde7
    bool v161 = false; // 0x40dde7
    while (v158 == v159) {
        int64_t v162 = v148 - 1; // 0x40dde7
        v146 += v30;
        v147 += v30;
        v148 = v162;
        v160 = v158;
        v161 = true;
        if (v162 == 0) {
            // break -> 
            break;
        }
        v158 = *(char *)v147;
        v159 = *(char *)v146;
        v160 = v159;
        v161 = false;
    }
    unsigned char v163 = v160;
    int64_t v164 = (int64_t)"blank"; // 0x40ddf0
    int64_t v165 = v4; // 0x40ddf0
    int64_t v166 = 6; // 0x40ddf0
    if ((v158 >= v163 && !v161) == v158 < v163) {
        int64_t v167 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v168 = 0;
            unsigned char v169; // 0x40e14b
            unsigned char v170; // 0x40d9b0
            int64_t * v171; // 0x40e160
            if (*(char *)(2 * v168 + v167) % 2 != 0) {
                // 0x40e14b
                v169 = *(char *)(v168 + a1);
                v170 = v169 % 64;
                v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
            }
            int64_t v172 = v168 + 1; // 0x40e16f
            while (v168 != 255) {
                // 0x40e144
                v168 = v172;
                if (*(char *)(2 * v168 + v167) % 2 != 0) {
                    // 0x40e14b
                    v169 = *(char *)(v168 + a1);
                    v170 = v169 % 64;
                    v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                    *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
                }
                // 0x40e164
                v172 = v168 + 1;
            }
        } else {
            int64_t v173 = 0;
            int64_t * v174; // 0x40de1e
            if (*(char *)(2 * v173 + v167) % 2 != 0) {
                // 0x40de11
                v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                *v174 = *v174 | 1 << v173 % 64;
            }
            int64_t v175 = v173 + 1; // 0x40de2d
            while (v173 != 255) {
                // 0x40de0a
                v173 = v175;
                if (*(char *)(2 * v173 + v167) % 2 != 0) {
                    // 0x40de11
                    v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                    *v174 = *v174 | 1 << v173 % 64;
                }
                // 0x40de22
                v175 = v173 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v176 = *(char *)v165; // 0x40de4b
    char v177 = *(char *)v164; // 0x40de4b
    char v178 = v177; // 0x40de4b
    bool v179 = false; // 0x40de4b
    while (v176 == v177) {
        int64_t v180 = v166 - 1; // 0x40de4b
        v164 += v30;
        v165 += v30;
        v166 = v180;
        v178 = v176;
        v179 = true;
        if (v180 == 0) {
            // break -> 
            break;
        }
        v176 = *(char *)v165;
        v177 = *(char *)v164;
        v178 = v177;
        v179 = false;
    }
    unsigned char v181 = v178;
    int64_t v182 = (int64_t)"graph"; // 0x40de54
    int64_t v183 = v4; // 0x40de54
    int64_t v184 = 6; // 0x40de54
    if ((v176 >= v181 && !v179) == v176 < v181) {
        int64_t v185 = (int64_t)*__ctype_b_loc(); // 0x40de66
        if (a1 != 0) {
            int64_t v186 = 0;
            unsigned char v187; // 0x40e118
            unsigned char v188; // 0x40d9b0
            int64_t * v189; // 0x40e12d
            if (*(char *)(2 * v186 + v185) % 2 != 0) {
                // 0x40e118
                v187 = *(char *)(v186 + a1);
                v188 = v187 % 64;
                v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
            }
            int64_t v190 = v186 + 1; // 0x40e13b
            while (v186 != 255) {
                // 0x40e112
                v186 = v190;
                if (*(char *)(2 * v186 + v185) % 2 != 0) {
                    // 0x40e118
                    v187 = *(char *)(v186 + a1);
                    v188 = v187 % 64;
                    v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                    *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
                }
                // 0x40e131
                v190 = v186 + 1;
            }
        } else {
            int64_t v191 = 0;
            int64_t * v192; // 0x40de85
            if (*(char *)(2 * v191 + v185) % 2 != 0) {
                // 0x40de78
                v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                *v192 = *v192 | 1 << v191 % 64;
            }
            int64_t v193 = v191 + 1; // 0x40de94
            while (v191 != 255) {
                // 0x40de72
                v191 = v193;
                if (*(char *)(2 * v191 + v185) % 2 != 0) {
                    // 0x40de78
                    v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                    *v192 = *v192 | 1 << v191 % 64;
                }
                // 0x40de89
                v193 = v191 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    unsigned char v194 = *(char *)v183; // 0x40df41
    char v195 = *(char *)v182; // 0x40df41
    char v196 = v195; // 0x40df41
    bool v197 = false; // 0x40df41
    while (v194 == v195) {
        int64_t v198 = v184 - 1; // 0x40df41
        v182 += v30;
        v183 += v30;
        v184 = v198;
        v196 = v194;
        v197 = true;
        if (v198 == 0) {
            // break -> 
            break;
        }
        v194 = *(char *)v183;
        v195 = *(char *)v182;
        v196 = v195;
        v197 = false;
    }
    unsigned char v199 = v196;
    if ((v194 >= v199 && !v197) == v194 < v199) {
        int64_t v200 = (int64_t)*__ctype_b_loc(); // 0x40df58
        if (a1 != 0) {
            int64_t v201 = 0;
            unsigned char v202; // 0x40df98
            unsigned char v203; // 0x40d9b0
            int64_t * v204; // 0x40dfad
            if (*(int16_t *)(2 * v201 + v200) < 0) {
                // 0x40df98
                v202 = *(char *)(v201 + a1);
                v203 = v202 % 64;
                v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
            }
            int64_t v205 = v201 + 1; // 0x40dfbb
            while (v201 != 255) {
                // 0x40df91
                v201 = v205;
                if (*(int16_t *)(2 * v201 + v200) < 0) {
                    // 0x40df98
                    v202 = *(char *)(v201 + a1);
                    v203 = v202 % 64;
                    v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                    *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
                }
                // 0x40dfb1
                v205 = v201 + 1;
            }
        } else {
            int64_t v206 = 0;
            int64_t * v207; // 0x40df74
            if (*(int16_t *)(2 * v206 + v200) < 0) {
                // 0x40df67
                v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                *v207 = *v207 | 1 << v206 % 64;
            }
            int64_t v208 = v206 + 1; // 0x40df83
            while (v206 != 255) {
                // 0x40df60
                v206 = v208;
                if (*(int16_t *)(2 * v206 + v200) < 0) {
                    // 0x40df67
                    v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                    *v207 = *v207 | 1 << v206 % 64;
                }
                // 0x40df78
                v208 = v206 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    // 0x40dfc2
    if (strcmp(name, "punct") == 0) {
        int64_t v209 = (int64_t)*__ctype_b_loc(); // 0x40dfdf
        if (a1 != 0) {
            int64_t v210 = 0;
            unsigned char v211; // 0x40e01d
            unsigned char v212; // 0x40d9b0
            int64_t * v213; // 0x40e032
            if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                // 0x40e01d
                v211 = *(char *)(v210 + a1);
                v212 = v211 % 64;
                v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
            }
            int64_t v214 = v210 + 1; // 0x40e040
            while (v210 != 255) {
                // 0x40e017
                v210 = v214;
                if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                    // 0x40e01d
                    v211 = *(char *)(v210 + a1);
                    v212 = v211 % 64;
                    v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                    *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
                }
                // 0x40e036
                v214 = v210 + 1;
            }
        } else {
            int64_t v215 = 0;
            int64_t * v216; // 0x40dffa
            if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                // 0x40dfed
                v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                *v216 = *v216 | 1 << v215 % 64;
            }
            int64_t v217 = v215 + 1; // 0x40e009
            while (v215 != 255) {
                // 0x40dfe7
                v215 = v217;
                if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                    // 0x40dfed
                    v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                    *v216 = *v216 | 1 << v215 % 64;
                }
                // 0x40dffe
                v217 = v215 + 1;
            }
        }
        // 0x40da96
        return 0;
    }
    // 0x40e047
    if (strcmp(name, "xdigit") != 0) {
        // 0x40da96
        return 4;
    }
    int64_t v218 = (int64_t)*__ctype_b_loc() + 1;
    if (a1 == 0) {
        int64_t v219 = 0;
        int64_t * v220; // 0x40e080
        if ((*(char *)(2 * v219 + v218) & 16) != 0) {
            // 0x40e073
            v220 = (int64_t *)(8 * (v219 >> 6) + a2);
            *v220 = *v220 | 1 << v219 % 64;
        }
        int64_t v221 = v219 + 1; // 0x40e08f
        while (v219 != 255) {
            // 0x40e06c
            v219 = v221;
            if ((*(char *)(2 * v219 + v218) & 16) != 0) {
                // 0x40e073
                v220 = (int64_t *)(8 * (v219 >> 6) + a2);
                *v220 = *v220 | 1 << v219 % 64;
            }
            // 0x40e084
            v221 = v219 + 1;
        }
        // 0x40da96
        return 0;
    }
    int64_t v222 = 0;
    unsigned char v223; // 0x40e0a4
    unsigned char v224; // 0x40d9b0
    int64_t * v225; // 0x40e0b9
    if ((*(char *)(2 * v222 + v218) & 16) != 0) {
        // 0x40e0a4
        v223 = *(char *)(v222 + a1);
        v224 = v223 % 64;
        v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
        *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
    }
    int64_t v226 = v222 + 1; // 0x40e0c7
    while (v222 != 255) {
        // 0x40e09d
        v222 = v226;
        if ((*(char *)(2 * v222 + v218) & 16) != 0) {
            // 0x40e0a4
            v223 = *(char *)(v222 + a1);
            v224 = v223 % 64;
            v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
            *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
        }
        // 0x40e0bd
        v226 = v222 + 1;
    }
    // 0x40da96
    return 0;
}
// Address range: 0x40e180 - 0x40e3b5
int64_t function_40e180(int64_t a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-96, 0x40e1ad
    int64_t * mem = calloc(32, 1); // 0x40e1b6
    if (mem == NULL) {
        // 0x40e350
        *(int32_t *)a6 = 12;
        // 0x40e329
        return 0;
    }
    int64_t * mem2 = calloc(80, 1); // 0x40e1d1
    if (mem2 == NULL) {
        // 0x40e370
        free(mem);
        *(int32_t *)a6 = 12;
        // 0x40e329
        return 0;
    }
    int64_t v2 = (int64_t)mem; // 0x40e1b6
    int64_t v3 = (int64_t)mem2; // 0x40e1d1
    char * v4 = (char *)(v3 + 32); // 0x40e1e6
    unsigned char v5 = (char)a5; // 0x40e1ea
    *v4 = *v4 & -2 | v5 % 2;
    int64_t v6 = function_40d9b0(a2, v2, v3 + 24, v3 + 72, &v1, (int64_t)a3, 0); // 0x40e213
    int32_t v7 = v6; // 0x40e21a
    if (v7 != 0) {
        // 0x40e390
        free(mem);
        function_409780(v3);
        *(int32_t *)a6 = v7;
        // 0x40e329
        return 0;
    }
    // 0x40e222
    int64_t v8; // 0x40e180
    char v9 = *(char *)&v8; // 0x40e222
    int64_t v10 = v9; // 0x40e222
    v8 = v10;
    v8 = v10;
    int64_t v11 = (int64_t)a4; // 0x40e22e
    if (v9 != 0) {
        int64_t v12 = v8;
        v11++;
        char v13 = *(char *)v11; // 0x40e25d
        v8 = v13;
        int64_t * v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2); // 0x40e262
        *v14 = *v14 | 1 << v12 % 64;
        while (v13 != 0) {
            v12 = v8;
            v11++;
            v13 = *(char *)v11;
            v8 = v13;
            v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2);
            *v14 = *v14 | 1 << v12 % 64;
        }
    }
    if (v5 != 0) {
        int64_t v15 = v2;
        int64_t * v16 = (int64_t *)v15; // 0x40e276
        *v16 = -1 - *v16;
        int64_t v17 = v15 + 8; // 0x40e280
        while (v2 + 24 != v15) {
            // 0x40e276
            v15 = v17;
            v16 = (int64_t *)v15;
            *v16 = -1 - *v16;
            v17 = v15 + 8;
        }
    }
    int32_t * v18 = (int32_t *)(a1 + 180); // 0x40e282
    if (*v18 >= 2) {
        int64_t v19 = *(int64_t *)(a1 + 120); // 0x40e28b
        v8 = v19;
        *mem = *mem & *(int64_t *)v19;
        int64_t v20 = 0; // 0x40e299
        v20 += 8;
        int64_t * v21 = (int64_t *)(v20 + v2); // 0x40e295
        *v21 = *v21 & *(int64_t *)(v20 + v19);
        while (v20 != 24) {
            // 0x40e291
            v20 += 8;
            v21 = (int64_t *)(v20 + v2);
            *v21 = *v21 & *(int64_t *)(v20 + v8);
        }
    }
    int64_t v22 = a1 + 112; // 0x40e2a3
    int64_t v23 = a1 + 128; // 0x40e2a7
    v8 = 0;
    int64_t v24; // bp-88, 0x40e180
    int64_t v25 = &v24; // 0x40e2b2
    v24 = v2;
    int64_t result = function_40ad90(v22, v23, 0, 0, v25); // 0x40e2c7
    if (result != 0) {
        // 0x40e2d4
        if (*v18 < 2) {
            // 0x40e360
            function_409780(v3);
            // 0x40e329
            return result;
        }
        char * v26 = (char *)(a1 + 176); // 0x40e2e1
        *v26 = *v26 | 2;
        v24 = v3;
        int64_t v27 = function_40ad90(v22, v23, 0, 0, v25); // 0x40e301
        if (v27 != 0) {
            // 0x40e30b
            int64_t v28; // bp-72, 0x40e180
            int64_t result2 = function_40ad90(v22, v23, (int32_t)result, (int32_t)v27, (int64_t)&v28); // 0x40e321
            // 0x40e329
            return result2;
        }
    }
    // 0x40e340
    free(mem);
    function_409780(v3);
    // 0x40e350
    *(int32_t *)a6 = 12;
    // 0x40e329
    return 0;
}
// Address range: 0x40e3c0 - 0x40e898
int64_t function_40e3c0(int64_t result, int64_t result2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(result + 180); // 0x40e3d7
    int32_t v3 = 0; // 0x40e3e2
    if (*v2 == 1) {
        // 0x40e3e4
        v3 = (int32_t)(*(int64_t *)(result + 24) / 0x400000) % 2;
    }
    // 0x40e3f3
    if (result2 < 1) {
        // 0x40e5b3
        return result;
    }
    char * v4 = (char *)(result + 26);
    int64_t * v5 = (int64_t *)(result + 16);
    char wstr; // bp-312, 0x40e3c0
    int64_t v6 = &wstr;
    char ps; // bp-320, 0x40e3c0
    int64_t v7 = &ps;
    int64_t v8 = a3; // 0x40e411
    int64_t v9 = 0; // 0x40e411
    int64_t v10 = result; // 0x40e411
    int64_t v11; // 0x40e3c0
    int64_t v12; // 0x40e3c0
    int64_t v13; // 0x40e3c0
    int64_t v14; // 0x40e3c0
    int64_t v15; // 0x40e3c0
    int64_t v16; // 0x40e3c0
    unsigned char v17; // 0x40e474
    int64_t v18; // 0x40e5c9
    while (true) {
      lab_0x40e451_2:
        // 0x40e451
        v13 = v10;
        v11 = v9;
        int64_t v19 = *(int64_t *)(8 * v11 + v8); // 0x40e459
        v1 = v13;
        int64_t v20 = 16 * v19; // 0x40e467
        v16 = v20 + v13;
        v17 = *(char *)(v16 + 8);
        if (v17 != 1) {
            int64_t v21 = v17; // 0x40e474
            char * v22 = NULL; // 0x40e3c0
            int64_t v23 = v13; // 0x40e3c0
            switch (v17) {
                case 3: {
                    int64_t v24 = (int64_t)v22; // 0x40e718
                    int64_t v25 = *(int64_t *)(*(int64_t *)(v23 + v20) + v24); // 0x40e71d
                    int64_t v26 = 0; // 0x40e729
                    int64_t v27 = 8 * v24;
                    int64_t v28 = v23;
                    int64_t v29 = v28; // 0x40e734
                    char * v30; // 0x40e3c0
                    char * v31; // 0x40e3c0
                    int64_t v32; // 0x40e744
                    int32_t v33; // 0x40e75b
                    if ((1 << v26 % 64 & v25) != 0) {
                        // 0x40e736
                        v31 = (char *)(v27 + a4);
                        *v31 = 1;
                        v29 = v28;
                        if (v3 != 0) {
                            // 0x40e744
                            v32 = v27 + 128;
                            v30 = v31;
                            if ((int32_t)v32 < 384) {
                                // 0x40e753
                                v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                v30 = (char *)((int64_t)v33 + a4);
                            }
                            // 0x40e762
                            *v30 = 1;
                            v29 = v32 & 0xffffffff;
                        }
                    }
                    int64_t v34 = v29;
                    int64_t v35 = v27 + 1; // 0x40e769
                    v26 = v26 + 1 & 0xffffffff;
                    while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                        // 0x40e730
                        v27 = v35;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40e736
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40e744
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40e753
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40e762
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40e765
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                    }
                    // 0x40e773
                    v14 = v21;
                    v15 = v16;
                    v12 = v34;
                    while (v22 != (char *)24) {
                        // 0x40e788
                        v1 = v34;
                        v22 = (char *)(v24 + 8);
                        v24 = (int64_t)v22;
                        v25 = *(int64_t *)(*(int64_t *)(v34 + v20) + v24);
                        v26 = 0;
                        v27 = 8 * v24;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40e736
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40e744
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40e753
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40e762
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40e765
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                        while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                            // 0x40e730
                            v27 = v35;
                            v28 = v34;
                            v29 = v28;
                            if ((1 << v26 % 64 & v25) != 0) {
                                // 0x40e736
                                v31 = (char *)(v27 + a4);
                                *v31 = 1;
                                v29 = v28;
                                if (v3 != 0) {
                                    // 0x40e744
                                    v32 = v27 + 128;
                                    v30 = v31;
                                    if ((int32_t)v32 < 384) {
                                        // 0x40e753
                                        v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                        v30 = (char *)((int64_t)v33 + a4);
                                    }
                                    // 0x40e762
                                    *v30 = 1;
                                    v29 = v32 & 0xffffffff;
                                }
                            }
                            // 0x40e765
                            v34 = v29;
                            v35 = v27 + 1;
                            v26 = v26 + 1 & 0xffffffff;
                        }
                        // 0x40e773
                        v14 = v21;
                        v15 = v16;
                        v12 = v34;
                    }
                    goto lab_0x40e43f;
                }
                case 6: {
                    // 0x40e5c5
                    v18 = *(int64_t *)v16;
                    if (*v2 < 2) {
                        goto lab_0x40e5f6;
                    } else {
                        // 0x40e5d5
                        if (*(int64_t *)(v18 + 72) != 0) {
                            goto lab_0x40e6bc;
                        } else {
                            // 0x40e5e0
                            if (*(char *)(v18 + 32) % 2 != 0) {
                                goto lab_0x40e6bc;
                            } else {
                                // 0x40e5eb
                                if (*(int64_t *)(v18 + 64) != 0) {
                                    goto lab_0x40e6bc;
                                } else {
                                    goto lab_0x40e5f6;
                                }
                            }
                        }
                    }
                }
                default: {
                    int64_t v36 = v21 & 253; // 0x40e42a
                    if (v36 == 5) {
                        // break -> 0x40e794
                        break;
                    }
                    // 0x40e436
                    v14 = v36;
                    v15 = v16;
                    v12 = v13;
                    if (v17 == 2) {
                        int128_t v37 = __asm_movdqa(g17); // 0x40e810
                        __asm_movups(*(int128_t *)&v1, v37);
                        __asm_movups(*(int128_t *)(a4 + 16), v37);
                        __asm_movups(*(int128_t *)(a4 + 32), v37);
                        __asm_movups(*(int128_t *)(a4 + 48), v37);
                        __asm_movups(*(int128_t *)(a4 + 64), v37);
                        __asm_movups(*(int128_t *)(a4 + 80), v37);
                        __asm_movups(*(int128_t *)(a4 + 96), v37);
                        __asm_movups(*(int128_t *)(a4 + 112), v37);
                        __asm_movups(*(int128_t *)(a4 + 128), v37);
                        __asm_movups(*(int128_t *)(a4 + 144), v37);
                        __asm_movups(*(int128_t *)(a4 + 160), v37);
                        __asm_movups(*(int128_t *)(a4 + 176), v37);
                        __asm_movups(*(int128_t *)(a4 + 192), v37);
                        __asm_movups(*(int128_t *)(a4 + 208), v37);
                        __asm_movups(*(int128_t *)(a4 + 224), v37);
                        __asm_movups(*(int128_t *)(a4 + 240), v37);
                        goto lab_0x40e87f;
                    }
                    goto lab_0x40e43f;
                }
            }
        } else {
            char * v38 = (char *)v16; // 0x40e47f
            int64_t v39 = (int64_t)*v38; // 0x40e47f
            *(char *)(v39 + a4) = 1;
            if (v3 != 0) {
                int32_t v40 = *(int32_t *)(4 * v39 + (int64_t)*__ctype_tolower_loc()); // 0x40e49e
                *(char *)((int64_t)v40 + a4) = 1;
            }
            // 0x40e4a7
            v14 = v39;
            v15 = v16;
            v12 = v13;
            if ((*v4 & 64) == 0) {
                goto lab_0x40e43f;
            } else {
                // 0x40e4b2
                v14 = v39;
                v15 = v16;
                v12 = v13;
                if (*v2 < 2) {
                    goto lab_0x40e43f;
                } else {
                    // 0x40e4bf
                    v1 = v20;
                    wstr = *v38;
                    int64_t v41 = v19 + 1; // 0x40e4d2
                    int64_t v42 = 1; // 0x40e4da
                    if (*v5 > v41) {
                        // 0x40e4e0
                        v42 = 1;
                        if ((*(int32_t *)(v16 + 24) & 0x2000ff) == 0x200001) {
                            int64_t v43 = v41; // 0x40e52e
                            int64_t v44; // bp-311, 0x40e3c0
                            int64_t v45 = &v44; // 0x40e3c0
                            int64_t v46 = v45 + 1; // 0x40e52a
                            v43++;
                            *(char *)v45 = *(char *)(v16 + 16);
                            while (*v5 > v43) {
                                int64_t v47 = 16 * v43 + v13; // 0x40e513
                                v45 = v46;
                                if ((*(int32_t *)(v47 + 8) & 0x2000ff) != 0x200001) {
                                    // break -> 0x40e53f
                                    break;
                                }
                                v46 = v45 + 1;
                                v43++;
                                *(char *)v45 = *(char *)v47;
                            }
                            // 0x40e53f
                            v42 = v46 - v6;
                        }
                    }
                    // 0x40e54a
                    ps = 0;
                    int32_t wc; // bp-324, 0x40e3c0
                    int64_t v48 = function_4083e0(&wc, v6, v42); // 0x40e565
                    v14 = v42;
                    v15 = v6;
                    v12 = &wc;
                    if (v48 != v42) {
                        goto lab_0x40e43f;
                    } else {
                        uint32_t wc2 = towlower(wc); // 0x40e577
                        int64_t v49 = wc2; // 0x40e586
                        int32_t v50 = wcrtomb(&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40e588
                        v14 = v7;
                        v15 = v49;
                        v12 = v6;
                        if (v50 == -1) {
                            goto lab_0x40e43f;
                        } else {
                            int64_t v51 = v11 + 1; // 0x40e59c
                            *(char *)((int64_t)wstr + a4) = 1;
                            v8 = v7;
                            v9 = v51;
                            v10 = v6;
                            if (v51 >= v49) {
                                // 0x40e5b3
                                return result2;
                            }
                            goto lab_0x40e451_2;
                        }
                    }
                }
            }
        }
    }
    if (v17 != 2) {
        // 0x40e5b3
    }
  lab_0x40e43f:;
    int64_t v52 = v11 + 1; // 0x40e444
    v8 = v14;
    v9 = v52;
    v10 = v12;
    if (v52 >= v15) {
        // 0x40e5b3
        return result2;
    }
    goto lab_0x40e451_2;
  lab_0x40e5f6:;
    int64_t * v53 = (int64_t *)(v18 + 40); // 0x40e5f9
    int64_t v54 = *v53; // 0x40e5f9
    v14 = 6;
    v15 = v16;
    v12 = v13;
    if (v54 >= 0 == (v54 != 0)) {
        int64_t * v55 = (int64_t *)v18; // 0x40e61f
        int64_t v56 = 0; // 0x40e608
        ps = 0;
        int64_t v57 = 4 * v56; // 0x40e62d
        uint32_t wc3 = *(int32_t *)(*v55 + v57); // 0x40e635
        int32_t v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40e639
        int64_t v59 = v7; // 0x40e642
        int32_t v60; // 0x40e665
        int64_t v61; // 0x40e644
        if (v58 != -1) {
            // 0x40e644
            v61 = wstr;
            *(char *)(v61 + a4) = 1;
            v59 = v61;
            if (v3 != 0) {
                // 0x40e658
                v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                *(char *)((int64_t)v60 + a4) = 1;
                v59 = v61;
            }
        }
        int64_t v62 = wc3; // 0x40e635
        int64_t v63 = v59;
        int64_t v64 = v63; // 0x40e677
        int64_t v65 = v62; // 0x40e677
        uint32_t wc4; // 0x40e68d
        int64_t v66; // 0x40e69c
        int32_t v67; // 0x40e69e
        if ((*v4 & 64) != 0) {
            // 0x40e679
            v64 = v63;
            v65 = v62;
            if (*v2 >= 2) {
                // 0x40e686
                wc4 = towlower(*(int32_t *)(*v55 + v57));
                v66 = wc4;
                v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                v64 = v7;
                v65 = v66;
                if (v67 != -1) {
                    // 0x40e6ad
                    *(char *)((int64_t)wstr + a4) = 1;
                    v64 = v7;
                    v65 = v66;
                }
            }
        }
        // 0x40e608
        v56++;
        v14 = v64;
        v15 = v65;
        v12 = v6;
        while (v56 < *v53) {
            // 0x40e616
            ps = 0;
            v57 = 4 * v56;
            wc3 = *(int32_t *)(*v55 + v57);
            v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps);
            v59 = v7;
            if (v58 != -1) {
                // 0x40e644
                v61 = wstr;
                *(char *)(v61 + a4) = 1;
                v59 = v61;
                if (v3 != 0) {
                    // 0x40e658
                    v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                    *(char *)((int64_t)v60 + a4) = 1;
                    v59 = v61;
                }
            }
            // 0x40e66e
            v62 = wc3;
            v63 = v59;
            v64 = v63;
            v65 = v62;
            if ((*v4 & 64) != 0) {
                // 0x40e679
                v64 = v63;
                v65 = v62;
                if (*v2 >= 2) {
                    // 0x40e686
                    wc4 = towlower(*(int32_t *)(*v55 + v57));
                    v66 = wc4;
                    v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                    v64 = v7;
                    v65 = v66;
                    if (v67 != -1) {
                        // 0x40e6ad
                        *(char *)((int64_t)wstr + a4) = 1;
                        v64 = v7;
                        v65 = v66;
                    }
                }
            }
            // 0x40e608
            v56++;
            v14 = v64;
            v15 = v65;
            v12 = v6;
        }
    }
    goto lab_0x40e43f;
    // 0x40e451
    goto lab_0x40e451_2;
  lab_0x40e6bc:
    // 0x40e6bc
    ps = 0;
    wstr = 0;
    if (function_4083e0(NULL, v7, 1) == -2) {
        // 0x40e6ed
        *(char *)((int64_t)ps + a4) = 1;
    }
    char v68 = ps + 1; // 0x40e6f7
    ps = v68;
    v14 = 1;
    v15 = v7;
    v12 = 0;
    while (v68 != 0) {
        // 0x40e6c8
        wstr = 0;
        if (function_4083e0(NULL, v7, 1) == -2) {
            // 0x40e6ed
            *(char *)((int64_t)ps + a4) = 1;
        }
        // 0x40e6f7
        v68 = ps + 1;
        ps = v68;
        v14 = 1;
        v15 = v7;
        v12 = 0;
    }
    goto lab_0x40e43f;
  lab_0x40e87f:;
    char * v69 = (char *)(result + 56); // 0x40e884
    *v69 = *v69 | 1;
    // 0x40e5b3
    return result;
}
// Address range: 0x40e8a0 - 0x40eb24
int64_t function_40e8a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a3 + a1; // 0x40e8a8
    char v2 = *(char *)(v1 + 8); // 0x40e8b2
    if (v2 == 7) {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x40e9c8
        int64_t v4 = v3 + a5; // 0x40e9cc
        unsigned char v5 = *(char *)v4; // 0x40e9cc
        if (v5 < 194) {
            // 0x40e8f0
            return 0;
        }
        uint64_t v6 = *(int64_t *)(a4 + 88); // 0x40e9da
        uint64_t v7 = a5 + 1;
        if (v7 >= v6) {
            // 0x40e8f0
            return 0;
        }
        int64_t v8 = v3 + v7;
        unsigned char v9 = *(char *)v8; // 0x40e9eb
        if (v5 < 224) {
            // 0x40eac3
            if (v9 == -65 || (v9 ^ -128) < 63) {
                // 0x40e8f0
                return 2;
            }
            // 0x40e8f0
            return 0;
        }
        int64_t v10; // 0x40e8a0
        if (v5 < 240) {
            // 0x40ea03
            v10 = 3;
            if (v5 == -32 == v9 < 160) {
                // 0x40e8f0
                return 0;
            }
        } else {
            if (v5 < 248) {
                // 0x40eaa5
                v10 = 4;
                if (v5 == -16 == v9 < 144) {
                    // 0x40e8f0
                    return 0;
                }
            } else {
                if (v5 < 252) {
                    // 0x40eadf
                    v10 = 5;
                    if (v5 == -8 == v9 < 136) {
                        // 0x40e8f0
                        return 0;
                    }
                } else {
                    if (v5 >= 254) {
                        // 0x40e8f0
                        return 0;
                    }
                    // 0x40eb06
                    v10 = 6;
                    if (v5 == -4 == v9 < 132) {
                        // 0x40e8f0
                        return 0;
                    }
                }
            }
        }
        // 0x40ea1c
        if (v6 < v10 + a5) {
            // 0x40e8f0
            return 0;
        }
        // 0x40ea29
        if (v9 != -65 && (v9 ^ -128) >= 63) {
            // 0x40e8f0
            return 0;
        }
        int64_t v11 = v8; // 0x40ea4e
        v11++;
        while (v10 + v4 != v11) {
            char v12 = *(char *)v11;
            if (v12 != -65 && (v12 ^ -128) >= 63) {
                // 0x40e8f0
                return 0;
            }
            v11++;
        }
        // 0x40e8f0
        return v10 & 0xffffffff;
    }
    // 0x40e8c1
    if (*(int32_t *)(a4 + 144) == 1) {
        // 0x40e8f0
        return 0;
    }
    int64_t v13 = function_40a0d0(a4, a5); // 0x40e8d6
    int64_t v14 = v13 & 0xffffffff; // 0x40e8db
    if (v2 == 5) {
        if ((int32_t)v13 < 2) {
            // 0x40e8f0
            return 0;
        }
        if ((a5 & 64) == 0) {
            // 0x40e90c
            if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 10) {
                // 0x40e8f0
                return 0;
            }
        }
        // 0x40e917
        if ((char)a5 > -1) {
            // 0x40e8f0
            return v14 & 0xffffffff;
        }
        // 0x40e91b
        if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 0) {
            // 0x40e8f0
            return 0;
        }
        // 0x40e8f0
        return v14 & 0xffffffff;
    }
    if (v2 == 6 != (int32_t)v13 > 1) {
        // 0x40e8f0
        return 0;
    }
    int64_t v15 = *(int64_t *)v1; // 0x40e930
    int64_t * v16 = (int64_t *)(v15 + 64); // 0x40e933
    int64_t v17 = *v16; // 0x40e933
    int64_t v18 = *(int64_t *)(v15 + 40); // 0x40e937
    if (v17 != 0) {
        goto lab_0x40e94d;
    } else {
        // 0x40e940
        if ((*(int64_t *)(v15 + 72) || v18) == 0) {
            goto lab_0x40ea8d;
        } else {
            goto lab_0x40e94d;
        }
    }
  lab_0x40e9b2_2:
    // 0x40e9b2
    if (*(char *)(v15 + 32) % 2 == 0) {
        // 0x40e8f0
        return v14 & 0xffffffff;
    }
    // 0x40e8f0
    return 0;
  lab_0x40e94d:;
    uint32_t wc = *(int32_t *)(*(int64_t *)(a4 + 16) + 4 * a5); // 0x40e951
    if (v18 < 1) {
        goto lab_0x40e97f;
    } else {
        int64_t v19 = *(int64_t *)v15; // 0x40e95a
        if (*(int32_t *)v19 == wc) {
            goto lab_0x40e9b2_2;
        } else {
            int64_t v20 = 1; // 0x40e976
            while (v18 != v20) {
                // 0x40e970
                if (*(int32_t *)(4 * v20 + v19) == wc) {
                    goto lab_0x40e9b2_2;
                }
                v20++;
            }
            goto lab_0x40e97f;
        }
    }
  lab_0x40e97f:;
    int64_t * v21 = (int64_t *)(v15 + 72); // 0x40e97f
    int64_t v22 = v17; // 0x40e986
    if (*v21 < 1) {
        goto lab_0x40ea5c;
    } else {
        int64_t v23 = 0; // 0x40e990
        int64_t v24 = *(int64_t *)(v15 + 24); // 0x40e99e
        while (iswctype(wc, (int32_t)*(int64_t *)(v24 + 8 * v23)) == 0) {
            // 0x40e990
            v23++;
            if (v23 >= *v21) {
                // 0x40ea58
                v22 = *v16;
                goto lab_0x40ea5c;
            }
            v24 = *(int64_t *)(v15 + 24);
        }
        goto lab_0x40e9b2_2;
    }
  lab_0x40ea8d:
    // 0x40ea8d
    if (*(char *)(v15 + 32) % 2 != 0) {
        // 0x40e8f0
        return v14 & 0xffffffff;
    }
    // 0x40e8f0
    return 0;
  lab_0x40ea5c:
    // 0x40ea5c
    if (v22 >= 1) {
        int64_t v25 = 0; // 0x40ea67
        int64_t v26 = 4 * v25; // 0x40ea70
        if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
            // 0x40ea76
            if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                goto lab_0x40e9b2_2;
            }
        }
        // 0x40ea84
        v25++;
        while (v25 != v22) {
            // 0x40ea70
            v26 = 4 * v25;
            if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
                // 0x40ea76
                if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                    goto lab_0x40e9b2_2;
                }
            }
            // 0x40ea84
            v25++;
        }
    }
    goto lab_0x40ea8d;
}
// Address range: 0x40eb30 - 0x40f24f
int64_t function_40eb30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x40eb30
    int128_t v1; // 0x40eb30
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x40eb51
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x40eb58
    int64_t v5 = *v4; // 0x40eb58
    int64_t v6 = *(int64_t *)(*(int64_t *)v3 + 16 * a3); // 0x40eb69
    int32_t * v7 = (int32_t *)(a1 + 224); // 0x40eb7b
    int32_t result = 0; // bp-128, 0x40eb82
    int64_t v8 = (int64_t)*v7 + a6; // 0x40eb8a
    int64_t * v9; // 0x40eb30
    int64_t v10; // 0x40eb30
    if (v8 < v5) {
        // 0x40eb30
        v9 = (int64_t *)(a2 + 16);
        v10 = a2;
    } else {
        int64_t v11 = v8 + 1; // 0x40f180
        if (0x7fffffffffffffff - v5 < v11) {
            // 0x40eff6
            return 12;
        }
        uint64_t v12 = v11 + v5; // 0x40f1a0
        if (v12 >= 0x2000000000000000) {
            // 0x40eff6
            return 12;
        }
        int64_t * v13 = (int64_t *)(a2 + 16);
        int64_t * mem = realloc((int64_t *)*v13, 8 * (int32_t)v12); // 0x40f1ba
        if (mem == NULL) {
            // 0x40eff6
            return 12;
        }
        int64_t v14 = (int64_t)mem; // 0x40f1ba
        *v13 = v14;
        *v4 = v12;
        memset((int64_t *)(8 * v5 + v14), 0, 8 * (int32_t)v11);
        v9 = v13;
        v10 = 0;
    }
    int64_t * v15 = (int64_t *)(a1 + 184); // 0x40eb96
    int64_t v16 = *v15; // 0x40eb96
    int32_t * v17 = (int32_t *)(a1 + 160); // 0x40eba3
    int32_t v18 = *v17; // 0x40eba3
    int64_t v19 = *v9; // 0x40ebae
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x40ebb7
    int64_t v21 = *v20; // 0x40ebb7
    *v15 = v19;
    int128_t v22; // bp-120, 0x40eb30
    int32_t v23; // 0x40eb30
    int64_t v24; // 0x40ebef
    if (v10 == 0) {
        // 0x40f0f0
        *v20 = a4;
        v23 = function_40be50(a1, a4 - 1, v18);
        goto lab_0x40f104;
    } else {
        // 0x40ebd2
        *v20 = v10;
        v23 = function_40be50(a1, v10 - 1, v18);
        if (v10 == a4) {
            goto lab_0x40f104;
        } else {
            // 0x40ebef
            v24 = *(int64_t *)(v19 + 8 * v10);
            if (v24 == 0) {
                goto lab_0x40ec03;
            } else {
                // 0x40ebf8
                if ((*(char *)(v24 + 104) & 64) != 0) {
                    int64_t v25 = function_40b1c0((int64_t)&v22, v24 + 8); // 0x40f01f
                } else {
                    goto lab_0x40ec03;
                }
            }
        }
    }
  lab_0x40efd0_2:
    // 0x40efd0
    free(NULL);
    result = 12;
    int64_t v26; // 0x40eb30
    int64_t v27 = v26; // 0x40efdd
    goto lab_0x40efe5_2;
  lab_0x40ee40_2:
    // 0x40ee40
    free(NULL);
    int32_t v52; // bp-124, 0x40eb30
    int32_t v53 = v52; // 0x40ee52
    result = v53;
    int128_t v54; // 0x40eca2
    int128_t v45 = v54; // 0x40ee5c
    v27 = v26;
    if (v53 != 0) {
        goto lab_0x40efe5_2;
    } else {
        goto lab_0x40eecc;
    }
  lab_0x40ef3d_2:
    // 0x40ef3d
    free((int64_t *)v26);
    int64_t v55 = *(int64_t *)(*v15 + 8 * a6); // 0x40ef57
    int64_t result2; // 0x40eb30
    int64_t v33; // 0x40eb30
    if (v55 == 0) {
        // 0x40f218
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = 1;
    } else {
        // 0x40ef64
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = function_40a120(*(int64_t *)(v55 + 16), v55 + 24, a5) == 0;
    }
    // 0x40eff6
    return result2;
  lab_0x40ecf0:;
    // 0x40ecf0
    int64_t v56; // 0x40eb30
    int64_t v57 = v56;
    int64_t v58; // 0x40eb30
    if ((char)function_40bf40(a1, v57, v58) == 0) {
        goto lab_0x40ed2f;
    } else {
        goto lab_0x40ed0d;
    }
  lab_0x40ed2f:;
    // 0x40ed2f
    int64_t v59; // 0x40eb30
    int64_t v60 = v59 + 1; // 0x40ed2f
    int64_t * v61; // 0x40eca6
    uint64_t v62 = *v61; // 0x40ed33
    int64_t v63 = v60; // 0x40ed37
    if (v60 >= v62) {
        // break -> 0x40f0ad
        goto lab_0x40f0ad;
    }
    goto lab_0x40ed3d;
  lab_0x40ed0d:;
    // 0x40ed0d
    int64_t * v77; // 0x40eb30
    int64_t v92 = *v77; // 0x40ed0d
    int64_t v68; // 0x40ed45
    int64_t v93 = *(int64_t *)(v92 + 8 * v68); // 0x40ed1e
    int64_t v94; // 0x40eb30
    if ((char)function_408b10(v94, v93) == 0) {
        goto lab_0x40efd0_2;
    }
    goto lab_0x40ed2f;
  lab_0x40eca2:;
    // 0x40eca2
    int128_t v40; // 0x40eb30
    v54 = __asm_pxor(v40, v40);
    v52 = 0;
    int128_t v83 = __asm_movaps(v54); // bp-88, 0x40ecbb
    int64_t v39; // 0x40eb30
    if (*(int64_t *)(v39 + 40) >= 1) {
        // 0x40ecd5
        int64_t v88; // 0x40ecab
        int64_t v73 = v88 + 216; // 0x40ecd7
        int64_t * v65 = (int64_t *)(v39 + 48); // 0x40ed3d
        int64_t * v67 = (int64_t *)v88; // 0x40ed41
        int32_t v95; // 0x40ec62
        v58 = v95;
        v77 = (int64_t *)(v88 + 24);
        v63 = 0;
        while (true) {
          lab_0x40ed3d:
            // 0x40ed3d
            v59 = v63;
            int64_t v64 = *v65; // 0x40ed3d
            int64_t v66 = *v67; // 0x40ed41
            v68 = *(int64_t *)(v64 + 8 * v59);
            int64_t v69 = 16 * v68; // 0x40ed4c
            int64_t v70 = v69 + v66; // 0x40ed50
            char v71 = *(char *)(v70 + 10); // 0x40ed54
            v56 = v70;
            if ((v71 & 16) == 0) {
                goto lab_0x40ecf0;
            } else {
                int64_t v72 = function_40e8a0(v66, v73, v68, a1, v58); // 0x40ed69
                int32_t v74 = v72; // 0x40ed71
                if (v74 < 2) {
                    if (v74 != 0) {
                        goto lab_0x40ed0d;
                    } else {
                        int64_t v75 = *v67; // 0x40efa8
                        v56 = v75 + v69;
                        goto lab_0x40ecf0;
                    }
                } else {
                    int64_t v76 = *v77; // 0x40ed85
                    int64_t v78 = *v15; // 0x40ed92
                    int64_t v79 = *(int64_t *)(v76 + 8 * v68); // 0x40ed9a
                    int64_t v80 = 8 * ((0x100000000 * v72 >> 32) + v58); // 0x40ed9e
                    int64_t v81 = *(int64_t *)(v78 + v80); // 0x40eda6
                    if (v81 != 0) {
                        int64_t v82 = function_40a660((int64_t *)&v83, (int128_t *)(v81 + 8)); // 0x40edcc
                        int32_t v84 = v82; // 0x40edd6
                        v52 = v84;
                        if (v84 != 0) {
                            goto lab_0x40ee40_2;
                        }
                    }
                    // 0x40edde
                    int64_t v85; // 0x40eb30
                    if ((char)function_408b10(v85, v79) == 0) {
                        goto lab_0x40efd0_2;
                    }
                    int64_t v86 = *v15; // 0x40ee06
                    int64_t v87 = function_40b6d0(&v52, v88, (int64_t *)&v83, v58, v58, a6); // 0x40ee0e
                    *(int64_t *)(v86 + v80) = v87;
                    int64_t v89 = *v15; // 0x40ee17
                    int64_t v90 = *(int64_t *)(v89 + v80); // 0x40ee1f
                    int32_t v91 = v52; // 0x40ee2a
                    if (v90 == 0 && v91 != 0) {
                        goto lab_0x40ee40_2;
                    }
                    goto lab_0x40ed0d;
                }
            }
        }
    }
  lab_0x40f0ad:
    // 0x40f0ad
    free(NULL);
    result = 0;
    v45 = v54;
    goto lab_0x40eecc;
  lab_0x40eecc:;
    // 0x40eecc
    int64_t v42; // 0x40eb30
    int64_t v96 = function_40be50(a1, (int64_t)((int32_t)v42 - 1), *v17); // 0x40eedb
    int64_t v97 = function_40b3d0((int128_t *)&result, v3, (int64_t *)&v22, (int32_t)v96); // 0x40eef4
    int64_t v98; // 0x40eb30
    int64_t v41; // 0x40eb30
    int64_t v99; // 0x40eb30
    int64_t v43; // 0x40ec52
    if (v97 == 0) {
        // 0x40f0c0
        v27 = v26;
        if (result != 0) {
            // break -> 0x40efe5
            goto lab_0x40efe5_2;
        }
        int64_t v100 = *v15; // 0x40f0cc
        *(int64_t *)(v100 + v43) = 0;
        v99 = v41 + 1;
        v98 = v100;
    } else {
        int64_t v101 = *v15; // 0x40ef05
        *(int64_t *)(v101 + v43) = v97;
        v99 = 0;
        v98 = v101;
    }
    // 0x40ef1f
    v33 = v42;
    if (v42 >= a6) {
        goto lab_0x40ef3d_2;
    }
    int64_t v34 = v99; // 0x40ef37
    int128_t v35 = v45; // 0x40ef37
    int64_t v36 = v98; // 0x40ef37
    int64_t v37 = v42; // 0x40ef37
    int64_t v38 = v97; // 0x40ef37
    v33 = v42;
    if (v99 > (int64_t)*v7) {
        goto lab_0x40ef3d_2;
    }
    goto lab_0x40ec4e;
  lab_0x40f104:
    // 0x40f104
    v22 = 1;
    int64_t * mem2 = malloc(8); // 0x40f121
    if (mem2 == NULL) {
        // 0x40eff6
        return 12;
    }
    int64_t v102 = (int64_t)mem2; // 0x40f121
    *mem2 = a3;
    int32_t v103 = 0x100000000 * a7 >> 32;
    result = 0;
    int32_t v104 = function_40aa90(v3, (int64_t *)&v22, v6, v103); // 0x40f166
    result = v104;
    v27 = v102;
    if (v104 == 0) {
        goto lab_0x40f042;
    } else {
        goto lab_0x40efe5_2;
    }
  lab_0x40f042:;
    int32_t v105 = function_40b970(a1, &v22, a4, v6, v103); // 0x40f05d
    result = v105;
    v27 = v102;
    int64_t v51 = a4; // 0x40f063
    int64_t v50 = v102; // 0x40f063
    int32_t v49 = v23; // 0x40f063
    if (v105 != 0) {
        goto lab_0x40efe5_2;
    } else {
        goto lab_0x40f065;
    }
  lab_0x40efe5_2:
    // 0x40efe5
    free((int64_t *)v27);
    // 0x40eff6
    return result;
  lab_0x40ec03:;
    int128_t v28 = __asm_pxor(v2, v2); // 0x40ec0f
    v22 = __asm_movaps(v28);
    int64_t v29 = 0; // 0x40ec13
    int128_t v30 = v28; // 0x40ec13
    int64_t v31 = v10; // 0x40ec13
    int64_t v32 = v24; // 0x40ec13
    goto lab_0x40ec1b;
  lab_0x40f065:;
    int64_t v48 = function_40b3d0((int128_t *)&result, v3, (int64_t *)&v22, v49); // 0x40f075
    v27 = v50;
    if (v48 != 0 || result == 0) {
        // 0x40f086
        *(int64_t *)(*v15 + 8 * v51) = v48;
        v29 = v50;
        v31 = v51;
        v32 = v48;
        goto lab_0x40ec1b;
    } else {
        goto lab_0x40efe5_2;
    }
  lab_0x40ec1b:
    // 0x40ec1b
    v26 = v29;
    v33 = v31;
    if (v31 < a6) {
        // 0x40ec26
        v33 = v31;
        if (*v7 < 0) {
            goto lab_0x40ef3d_2;
        } else {
            // 0x40ec36
            v34 = 0;
            v35 = v30;
            v36 = *v15;
            v37 = v31;
            v38 = v32;
            while (true) {
              lab_0x40ec4e:
                // 0x40ec4e
                v39 = v38;
                v40 = v35;
                v41 = v34;
                v42 = v37 + 1;
                v43 = 8 * v42;
                int64_t v44 = *(int64_t *)(v43 + v36); // 0x40ec52
                if (v44 == 0) {
                    // 0x40efb8
                    v45 = v40;
                    if (v39 != 0) {
                        goto lab_0x40eca2;
                    } else {
                        goto lab_0x40eecc;
                    }
                } else {
                    int64_t v46 = function_40a660((int64_t *)&v22, (int128_t *)(v44 + 8)); // 0x40ec88
                    int32_t v47 = v46; // 0x40ec8d
                    result = v47;
                    v27 = v26;
                    if (v47 != 0) {
                        // break -> 0x40efe5
                        break;
                    }
                    // 0x40ec99
                    v45 = v40;
                    if (v39 == 0) {
                        goto lab_0x40eecc;
                    } else {
                        goto lab_0x40eca2;
                    }
                }
            }
            goto lab_0x40efe5_2;
        }
    } else {
        goto lab_0x40ef3d_2;
    }
}
// Address range: 0x40f250 - 0x40fb13
int64_t function_40f250(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40f250
    int128_t v1; // 0x40f250
    int128_t v2 = v1;
    int64_t v3 = 0; // bp-88, 0x40f274
    int64_t v4 = 0; // 0x40f296
    if ((char)a5 != 0) {
        int64_t * mem = malloc(96); // 0x40f2a5
        v4 = &v3;
        if (mem == NULL) {
            // 0x40f5b9
            return 12;
        }
    }
    int128_t v5 = __asm_pxor(v2, v2); // 0x40f2c5
    int64_t v6 = 0; // bp-104, 0x40f2c9
    int128_t v7 = __asm_movaps(v5); // bp-120, 0x40f2d1
    uint64_t v8 = 16 * a3; // 0x40f2e3
    int32_t size = v8; // 0x40f2e7
    int64_t result; // 0x40f250
    int64_t v9; // 0x40f250
    char v10; // 0x40f250
    if (v8 < 4031) {
        // 0x40f2fa
        v10 = 0;
        int64_t v11; // bp-216, 0x40f250
        v9 = (int64_t)&v11 + -1 - v8 & -16;
    } else {
        int64_t * mem2 = malloc(size); // 0x40fa37
        v10 = 1;
        v9 = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x40fa53
            result = 12;
            if (v4 != 0) {
                // 0x40fa63
                function_40d880(v4);
                result = 12;
            }
          lab_0x40f5b9:
            // 0x40f5b9
            return result;
        }
    }
    int64_t * v12 = (int64_t *)v9; // 0x40f329
    int64_t * v13 = (int64_t *)a4; // 0x40f329
    memcpy(v12, v13, size);
    int64_t v14 = a4; // bp-128, 0x40f33a
    int64_t * v15 = (int64_t *)(a4 + 8); // 0x40f429
    int64_t v16 = *v15; // 0x40f429
    if (v16 < a4) {
      lab_0x40f590_2:
        // 0x40f590
        free((int64_t *)v6);
        if (v10 != 0) {
            // 0x40fa6d
            free(v12);
            if (v4 == 0) {
                // 0x40f5b9
                return 0;
            }
        } else {
            // 0x40f5a6
            if (v4 == 0) {
                // 0x40f5b9
                return 0;
            }
        }
        // 0x40f5b2
        function_40d880(v4);
        // 0x40f5b9
        return 0;
    }
    int64_t v17 = (int64_t)a2;
    int64_t v18 = v4 + 16;
    int64_t v19 = &v7;
    int64_t * v20 = (int64_t *)(v17 + 184);
    int64_t * v21 = (int64_t *)v4;
    int64_t * v22 = (int64_t *)(v4 + 8);
    int64_t * v23 = (int64_t *)v18;
    int64_t v24 = v16; // 0x40f429
    int64_t v25 = *(int64_t *)(a1 + 144); // 0x40f250
    int64_t v26 = a4; // 0x40f425
    int64_t v27; // 0x40f250
    int64_t v28; // 0x40f250
    int64_t v29; // 0x40f250
    int64_t v30; // 0x40f250
    int64_t v31; // 0x40f250
    int64_t v32; // 0x40f250
    int64_t v33; // 0x40f250
    int64_t v34; // 0x40f250
    int64_t v35; // 0x40f250
    int64_t v36; // 0x40f443
    int64_t v37; // 0x40f5e8
    while (true) {
        // 0x40f436
        int64_t v38; // 0x40f250
        v34 = v38;
        v28 = v24;
        v31 = v26;
        v29 = v25;
        while (true) {
          lab_0x40f436:
            // 0x40f436
            v30 = v29;
            v32 = v31;
            int64_t v39 = v28;
            v35 = v34;
            v36 = 16 * v30;
            int64_t v40 = v36 + a1; // 0x40f44a
            char v41 = *(char *)(v40 + 8); // 0x40f44d
            if (v41 != 8) {
                // 0x40f350
                v27 = v39;
                if (v41 == 9) {
                    int64_t v42 = *(int64_t *)v40 + 1; // 0x40f5d3
                    v27 = v39;
                    if (v42 < a3) {
                        int64_t v43 = 16 * v42; // 0x40f5e4
                        v37 = v43 + a4;
                        if (*(int64_t *)v37 < v32) {
                            // 0x40f960
                            *(int64_t *)(v37 + 8) = v32;
                            memcpy(v12, v13, size);
                            v27 = *v15;
                            goto lab_0x40f359;
                        } else {
                            // 0x40f5f6
                            if ((*(char *)(v40 + 10) & 8) == 0) {
                                goto lab_0x40f60e;
                            } else {
                                // 0x40f5fc
                                if (*(int64_t *)(v43 + v9) != -1) {
                                    // 0x40f9a0
                                    memcpy(v13, v12, size);
                                    int64_t v44 = *v15; // 0x40f9bd
                                    v27 = v44;
                                    goto lab_0x40f359;
                                } else {
                                    goto lab_0x40f60e;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40f359;
                    }
                } else {
                    goto lab_0x40f359;
                }
            } else {
                int64_t v45 = *(int64_t *)v40 + 1; // 0x40f45d
                v27 = v39;
                if (v45 < a3) {
                    int64_t v46 = 16 * v45 + a4; // 0x40f472
                    *(int64_t *)(v46 + 8) = -1;
                    *(int64_t *)v46 = v32;
                    v27 = *v15;
                }
                goto lab_0x40f359;
            }
        }
      lab_0x40f425_2:
        // 0x40f425
        v26 = v14;
        v24 = *v15;
        v38 = v33;
        if (v24 < v26) {
            goto lab_0x40f590_2;
        }
    }
  lab_0x40f920_3:
    // 0x40f920
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40fa90
        free(v12);
        goto lab_0x40f936;
    } else {
        goto lab_0x40f936;
    }
  lab_0x40f82a_3:
    // 0x40f82a
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40fb02
        free(v12);
        // 0x40f840
        function_40d880(v4);
        result = 0;
        return result;
    } else {
        // 0x40f840
        function_40d880(v4);
        result = 0;
        return result;
    }
  lab_0x40f359:;
    int64_t v47 = v30; // 0x40f35c
    int64_t v48 = v36; // 0x40f35c
    if (v32 == v27) {
        // 0x40f35e
        v47 = v30;
        v48 = v36;
        if (*(int64_t *)(v17 + 176) == v30) {
            if (v4 == 0) {
                // 0x40fad9
                free((int64_t *)v6);
                result = 0;
                if (v10 == 0) {
                    return result;
                } else {
                    // 0x40faef
                    free(v12);
                    result = (int32_t)&g84 ^ (int32_t)&g84;
                    return result;
                }
            }
            int64_t v49 = a4; // 0x40f800
            int64_t v50 = 0; // 0x40f800
            if (a3 == 0) {
                goto lab_0x40f82a_3;
            }
            int64_t v51; // 0x40f250
            while (true) {
                // 0x40f810
                v51 = v50;
                int64_t v52 = v49;
                if (*(int64_t *)v52 >= 0) {
                    // 0x40f816
                    if (*(int64_t *)(v52 + 8) == -1) {
                        // break -> 0x40f858
                        break;
                    }
                }
                // 0x40f81d
                v50 = v51 + 1;
                v49 = v52 + 16;
                if (v50 == a3) {
                    goto lab_0x40f82a_3;
                }
            }
            if (v51 == a3) {
                goto lab_0x40f82a_3;
            }
            int64_t v53 = function_40d8d0(v4, v18, &v14, a3, a4, &v7); // 0x40f87e
            v47 = v53;
            v48 = 16 * v53;
        }
    }
    int64_t v54 = v48;
    int64_t v55 = v47;
    int64_t v56 = *(int64_t *)(v17 + 152); // 0x40f36c
    int64_t * v57 = (int64_t *)v56; // 0x40f374
    int64_t v58 = *v57; // 0x40f374
    int64_t v59 = v58 + v54; // 0x40f377
    char v60 = *(char *)(v59 + 8); // 0x40f37b
    int64_t v61; // 0x40f250
    int64_t v62; // 0x40f250
    int64_t v63; // 0x40f250
    int64_t v64; // 0x40f250
    int64_t v65; // 0x40f250
    int64_t v66; // 0x40f250
    int64_t v67; // 0x40f250
    int64_t v68; // 0x40f250
    int64_t v69; // 0x40f250
    int64_t v70; // 0x40f250
    int64_t v71; // 0x40f250
    int64_t v72; // 0x40f250
    int64_t v73; // 0x40f71e
    int64_t v74; // 0x40f500
    if ((v60 & 8) != 0) {
        int64_t v75 = *(int64_t *)(8 * v14 + *v20); // 0x40f4a3
        if ((char)function_408b10(v19, v55) == 0) {
            // break (via goto) -> 0x40f920
            goto lab_0x40f920_3;
        }
        int64_t v76 = *(int64_t *)(v56 + 40) + 24 * v55; // 0x40f4b6
        int64_t v77 = *(int64_t *)(v76 + 8); // 0x40f4ce
        v71 = v35;
        if (v77 < 1) {
            goto lab_0x40f54a;
        } else {
            // 0x40f4d7
            v61 = -1;
            int64_t v78 = 0;
            v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
            int64_t v79 = v61; // 0x40f515
            int64_t v80; // 0x40f725
            int64_t v81; // 0x40f250
            int64_t * mem3; // 0x40f9f2
            int64_t v82; // 0x40f9f2
            int64_t v83; // 0x40f700
            if (function_40a120(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                // 0x40f517
                v79 = v74;
                if (v61 != -1) {
                    // 0x40f6e8
                    v83 = function_40a120(v35, (int64_t)&v6, v61);
                    v69 = v35;
                    v63 = v83 != 0 ? v74 : v61;
                    if (v4 == 0 || v83 != 0) {
                        goto lab_0x40f41c;
                    } else {
                        // 0x40f71e
                        v73 = *v21;
                        v80 = v73 + 1;
                        *v21 = v80;
                        v81 = *v23;
                        v62 = v81;
                        if (v80 == *v22) {
                            // 0x40f9d8
                            mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                            if (mem3 == NULL) {
                                goto lab_0x40f790;
                            } else {
                                // 0x40fa00
                                v82 = (int64_t)mem3;
                                *v22 = 2 * *v22;
                                *v23 = v82;
                                v62 = v82;
                                goto lab_0x40f73a;
                            }
                        } else {
                            goto lab_0x40f73a;
                        }
                    }
                }
            }
            int64_t v84 = v79;
            int64_t v85 = v78 + 1; // 0x40f524
            while (v77 != v85) {
                // 0x40f500
                v61 = v84;
                v78 = v85;
                v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
                v79 = v61;
                if (function_40a120(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                    // 0x40f517
                    v79 = v74;
                    if (v61 != -1) {
                        // 0x40f6e8
                        v83 = function_40a120(v35, (int64_t)&v6, v61);
                        v69 = v35;
                        v63 = v83 != 0 ? v74 : v61;
                        if (v4 == 0 || v83 != 0) {
                            goto lab_0x40f41c;
                        } else {
                            // 0x40f71e
                            v73 = *v21;
                            v80 = v73 + 1;
                            *v21 = v80;
                            v81 = *v23;
                            v62 = v81;
                            if (v80 == *v22) {
                                // 0x40f9d8
                                mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                                if (mem3 == NULL) {
                                    goto lab_0x40f790;
                                } else {
                                    // 0x40fa00
                                    v82 = (int64_t)mem3;
                                    *v22 = 2 * *v22;
                                    *v23 = v82;
                                    v62 = v82;
                                    goto lab_0x40f73a;
                                }
                            } else {
                                goto lab_0x40f73a;
                            }
                        }
                    }
                }
                // 0x40f524
                v84 = v79;
                v85 = v78 + 1;
            }
            // 0x40f52d
            v33 = v35;
            v25 = v84;
            v70 = v35;
            v64 = v84;
            if (v84 >= 0) {
                // break -> 0x40f425
                goto lab_0x40f425_2;
            }
            goto lab_0x40f540;
        }
    } else {
        // 0x40f387
        if ((*(char *)(v59 + 10) & 16) != 0) {
            int64_t v86 = 0x100000000 * function_40e8a0(v58, v56 + 216, v55, v17, v14);
            v67 = v86 >> 32;
            if (v86 != 0) {
                goto lab_0x40f7d9;
            } else {
                // 0x40f649
                v65 = v14;
                v68 = *v57 + v54;
                goto lab_0x40f39d;
            }
        } else {
            if (v60 == 4) {
                int64_t v87 = a4 + 16 + 16 * *(int64_t *)v59; // 0x40f66b
                int64_t v88 = *(int64_t *)(v87 + 8); // 0x40f66e
                int64_t v89 = *(int64_t *)v87; // 0x40f672
                int64_t n = v88 - v89; // 0x40f678
                if (v4 == 0) {
                    // 0x40f7d0
                    v67 = n;
                    if (n == 0) {
                        goto lab_0x40f898;
                    } else {
                        goto lab_0x40f7d9;
                    }
                } else {
                    // 0x40f689
                    v72 = v35;
                    if (v88 == -1 || v89 == -1) {
                        goto lab_0x40f558;
                    } else {
                        if (n == 0) {
                            goto lab_0x40f898;
                        } else {
                            int64_t v90 = *(int64_t *)(v17 + 8); // 0x40f6a6
                            int32_t memcmp_rc = memcmp((int64_t *)(v90 + v89), (int64_t *)(v14 + v90), (int32_t)n); // 0x40f6c0
                            v72 = v35;
                            v66 = n;
                            if (memcmp_rc != 0) {
                                goto lab_0x40f558;
                            } else {
                                goto lab_0x40f6d4;
                            }
                        }
                    }
                }
            } else {
                // 0x40f399
                v65 = v14;
                v68 = v59;
                goto lab_0x40f39d;
            }
        }
    }
  lab_0x40f54a:
    // 0x40f54a
    v72 = v71;
    if (v4 == 0) {
        // 0x40faa1
        free((int64_t *)v6);
        result = 1;
        if (v10 == 0) {
            return result;
        } else {
            // 0x40fabc
            free(v12);
            result = 1;
            return result;
        }
    }
    goto lab_0x40f558;
  lab_0x40f60e:
    // 0x40f60e
    *(int64_t *)(v37 + 8) = v32;
    v27 = *v15;
    goto lab_0x40f359;
  lab_0x40f558:;
    int64_t v91 = function_40d8d0(v4, v18, &v14, a3, a4, &v7); // 0x40f575
    int64_t v92 = *v15; // 0x40f581
    v34 = v72;
    v28 = v92;
    v31 = v14;
    v29 = v91;
    if (v92 < v14) {
        goto lab_0x40f590_2;
    }
    goto lab_0x40f436;
  lab_0x40f540:
    // 0x40f540
    v71 = v70;
    if (v64 == -2) {
        // break (via goto) -> 0x40f920
        goto lab_0x40f920_3;
    }
    goto lab_0x40f54a;
  lab_0x40f7d9:
    // 0x40f7d9
    v66 = v67;
    goto lab_0x40f6d4;
  lab_0x40f6d4:;
    int64_t v93 = v14 + v66; // 0x40f6e0
    goto lab_0x40f3ca;
  lab_0x40f39d:
    // 0x40f39d
    if ((char)function_40bf40(v17, v68, v65) == 0) {
        goto lab_0x40f54a;
    } else {
        // 0x40f3be
        v93 = v65 + 1;
        goto lab_0x40f3ca;
    }
  lab_0x40f3ca:;
    int64_t v94 = v93;
    int64_t v95 = *(int64_t *)(*(int64_t *)(v56 + 24) + 8 * v55);
    v14 = v94;
    v69 = 0;
    v63 = v95;
    if (v4 == 0) {
        goto lab_0x40f41c;
    } else {
        // 0x40f3d8
        v72 = v35;
        if (v94 > *(int64_t *)(v17 + 168)) {
            goto lab_0x40f558;
        } else {
            int64_t v96 = *(int64_t *)(*v20 + 8 * v94); // 0x40f3ee
            v72 = v35;
            if (v96 == 0) {
                goto lab_0x40f558;
            } else {
                int64_t v97 = function_40a120(*(int64_t *)(v96 + 16), v96 + 24, v95); // 0x40f406
                v69 = 0;
                v63 = v95;
                v72 = v35;
                if (v97 == 0) {
                    goto lab_0x40f558;
                } else {
                    goto lab_0x40f41c;
                }
            }
        }
    }
  lab_0x40f898:
    // 0x40f898
    if ((char)function_408b10(v19, v55) == 0) {
        // break (via goto) -> 0x40f920
        goto lab_0x40f920_3;
    }
    int64_t v98 = v14; // 0x40f8b7
    int64_t v99 = *(int64_t *)(24 * v55 + 16 + *(int64_t *)(v56 + 40)); // 0x40f8c6
    int64_t v100 = *(int64_t *)v99; // 0x40f8ca
    int64_t v101 = *(int64_t *)(*v20 + 8 * v98); // 0x40f8d5
    int64_t v102 = function_40a120(*(int64_t *)(v101 + 16), v101 + 24, v100); // 0x40f8e4
    v69 = v35;
    v63 = v100;
    if (v102 != 0) {
        goto lab_0x40f41c;
    } else {
        // 0x40f8f2
        v65 = v98;
        v68 = *v57 + v54;
        goto lab_0x40f39d;
    }
  lab_0x40f41c:
    // 0x40f41c
    v33 = v69;
    v25 = v63;
    v70 = v69;
    v64 = v63;
    if (v63 >= 0) {
        // break -> 0x40f425
        goto lab_0x40f425_2;
    }
    goto lab_0x40f540;
  lab_0x40f936:
    // 0x40f936
    if (v4 != 0) {
      lab_0x40f7a6:
        // 0x40f7a6
        function_40d880(v4);
        return 12;
    }
    // 0x40f5b9
    return 12;
  lab_0x40f73a:;
    int64_t v103 = v62 + 48 * v73; // 0x40f742
    *(int64_t *)(v103 + 8) = v74;
    *(int64_t *)v103 = v14;
    int64_t * mem4 = malloc(size); // 0x40f756
    *(int64_t *)(v103 + 16) = (int64_t)mem4;
    if (mem4 == NULL) {
        goto lab_0x40f790;
    } else {
        // 0x40f764
        memcpy(mem4, v13, size);
        v69 = v35;
        v63 = v61;
        if ((int32_t)function_40b1c0(v103 + 24, v19) == 0) {
            goto lab_0x40f41c;
        } else {
            goto lab_0x40f790;
        }
    }
  lab_0x40f790:
    // 0x40f790
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40fa90
        free(v12);
        goto lab_0x40f936;
    } else {
        goto lab_0x40f7a6;
    }
}
// Address range: 0x40fb20 - 0x40fcb6
int64_t function_40fb20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 16; // 0x40fb34
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x40fb47
    int64_t result = function_40eb30(a1, v1, a3, *v2, a4, a5, 8); // 0x40fb50
    if ((int32_t)result != 0) {
        // 0x40fb5b
        return result;
    }
    int64_t v3 = *v2; // 0x40fb70
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x40fb74
    uint64_t v5 = *v4; // 0x40fb74
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x40fb7b
    uint64_t v7 = *v6; // 0x40fb7b
    int64_t * v8 = (int64_t *)(a1 + 216); // 0x40fb86
    int64_t v9 = *v8; // 0x40fb86
    int64_t v10 = v5; // 0x40fb93
    int64_t v11 = v9; // 0x40fb93
    if (v5 >= v7) {
        int64_t * mem = realloc((int64_t *)v9, 80 * (int32_t)v7); // 0x40fc3d
        if (mem == NULL) {
            // 0x40fca0
            free((int64_t *)*v8);
            // 0x40fb5b
            return 12;
        }
        int64_t v12 = (int64_t)mem; // 0x40fc3d
        *v8 = v12;
        memset((int64_t *)(40 * *v4 + v12), 0, 40 * (int32_t)*v6);
        *v6 = 2 * *v6;
        v10 = *v4;
        v11 = *v8;
    }
    int64_t v13 = 40 * v10; // 0x40fb9d
    int64_t v14; // 0x40fb20
    if (v10 < 1) {
        // 0x40fb99
        v14 = v11 + v13;
    } else {
        int64_t v15 = v13 + v11;
        v14 = v15;
        if (*(int64_t *)(v15 - 32) == a5) {
            // 0x40fc20
            *(char *)(v15 - 8) = 1;
            v14 = v15;
        }
    }
    // 0x40fbb1
    *(int64_t *)v14 = a4;
    *(int64_t *)(v14 + 8) = a5;
    *(int16_t *)(v14 + 34) = (int16_t)(v3 == v1);
    *(int64_t *)(v14 + 16) = v1;
    *(int64_t *)(v14 + 24) = v3;
    *v4 = v10 + 1;
    *(char *)(v14 + 32) = 0;
    int32_t * v16 = (int32_t *)(a1 + 224); // 0x40fbe3
    if (v3 - v1 > (int64_t)*v16) {
        // 0x40fbf2
        *v16 = (int32_t)v3 - (int32_t)v1;
    }
    // 0x40fbfc
    return function_4096f0(a1, 0);
}
// Address range: 0x40fcc0 - 0x410532
int64_t function_40fcc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40fcc0
    if (a2 >= 0 != a2 != 0) {
        // 0x41014b
        return 0;
    }
    // 0x40fd59
    int64_t v1; // bp-232, 0x40fcc0
    int64_t v2 = &v1; // 0x40fccd
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x40fd5e
    int64_t * v4 = (int64_t *)(v2 + 56); // 0x40fd6a
    int32_t * v5 = (int32_t *)(a1 + 160);
    int64_t * v6 = (int64_t *)(a1 + 200);
    int64_t * v7 = (int64_t *)(a1 + 216);
    int64_t * v8 = (int64_t *)(a1 + 232);
    int64_t * v9 = (int64_t *)(v2 + 104);
    int64_t * v10 = (int64_t *)(v2 + 96);
    int64_t * v11 = (int64_t *)(a1 + 8);
    int64_t * v12 = (int64_t *)(v2 + 24);
    int64_t * v13 = (int64_t *)(v2 + 16);
    int64_t * v14 = (int64_t *)(v2 + 32);
    int64_t * v15 = (int64_t *)(v2 + 64);
    int64_t * v16 = (int64_t *)(v2 + 112);
    int64_t v17 = v2 + 40;
    int64_t * v18 = (int64_t *)v17;
    int64_t * v19 = (int64_t *)(v2 + 120);
    int64_t * v20 = (int64_t *)(v2 + 48);
    int64_t * v21 = (int64_t *)(a1 + 184);
    int64_t v22 = v2 + 140;
    int32_t * v23 = (int32_t *)v22;
    int64_t * v24 = (int64_t *)(v2 + 88);
    int32_t * v25 = (int32_t *)v17;
    int64_t * v26 = (int64_t *)(v2 + 144);
    int128_t * v27 = (int128_t *)v22;
    int64_t * v28 = (int64_t *)(v2 + 160);
    int64_t v29 = *v3; // 0x40fd45
    int64_t v30 = *(int64_t *)(a1 + 72); // 0x40fcc0
    int64_t v31; // 0x40fcc0
    int64_t v32; // 0x40fd66
    int64_t v33; // 0x40fd75
    uint32_t v34; // 0x40fd82
    int64_t v35; // 0x40fd82
    uint64_t v36; // 0x40fd9d
    while (true) {
      lab_0x40fd59:
        // 0x40fd59
        v31 = v30;
        v32 = *(int64_t *)(*(int64_t *)*(int64_t *)(v2 + 72) + 8 * v29);
        v33 = 16 * v32;
        int64_t v37 = (v33 | 8) + *(int64_t *)*v4; // 0x40fd7c
        v30 = v31;
        if (*(char *)v37 != 4) {
            goto lab_0x40fd40_3;
        } else {
            // 0x40fd82
            v34 = *(int32_t *)v37;
            if ((v34 & 0x3ff00) == 0) {
                goto lab_0x40fdd0;
            } else {
                // 0x40fd8d
                v35 = v34;
                v36 = function_40be50(a1, v31, *v5);
                if ((v35 & 1024) != 0) {
                    // 0x40fd10
                    v30 = v31;
                    if (v36 % 2 == 0) {
                        goto lab_0x40fd40_3;
                    } else {
                        // 0x40fd14
                        v30 = v31;
                        if ((v35 & 2048) != 0) {
                            goto lab_0x40fd40_3;
                        } else {
                            goto lab_0x40fd19;
                        }
                    }
                } else {
                    // 0x40fdb4
                    v30 = v31;
                    if ((v35 & 2048) == 0 || v36 % 2 == 0) {
                        goto lab_0x40fd19;
                    } else {
                        goto lab_0x40fd40_3;
                    }
                }
            }
        }
    }
  lab_0x41014b_7:;
    // 0x41014b
    int64_t result; // 0x40fcc0
    return result;
  lab_0x40fe98:;
    int64_t v38 = *(int64_t *)(a1 + 152); // 0x40fe98
    int64_t v39 = *(int64_t *)v38; // 0x40fea7
    *v9 = v38;
    *v10 = *(int64_t *)(v39 + v33);
    int64_t v40; // 0x40fcc0
    int64_t v41; // 0x40fcc0
    int64_t v42; // 0x40fcc0
    int64_t v43; // 0x40fcc0
    int64_t v44; // 0x40fcc0
    int64_t v45; // 0x40fcc0
    int64_t v46; // 0x40fcc0
    int64_t v47; // 0x40fcc0
    int64_t v48; // 0x40fcc0
    int64_t v49; // 0x40fcc0
    int64_t v50; // 0x40fcc0
    int64_t v51; // 0x40fcc0
    int64_t v52; // 0x40fcc0
    int64_t v53; // 0x40fcc0
    int64_t v54; // 0x40fdd0
    int64_t v55; // 0x40feec
    int64_t * v56; // 0x40fef0
    int64_t * v57; // 0x410160
    int64_t * v58; // 0x410165
    int64_t v59; // 0x40ff20
    if (*v8 < 1) {
        // 0x40fe6f
        *v23 = 0;
        v30 = v31;
        goto lab_0x40fd40_3;
    } else {
        // 0x40feba
        *v12 = v31;
        *v13 = 0;
        *v14 = *v11;
        *v15 = v32;
        *v16 = v54;
        v40 = *v13;
        v51 = v39;
        while (true) {
          lab_0x40fedb:
            // 0x40fedb
            v55 = *(int64_t *)(*(int64_t *)(a1 + 248) + 8 * v40);
            v56 = (int64_t *)(v55 + 8);
            if (*v10 == *(int64_t *)(16 * *v56 + v51)) {
                // 0x410160
                v57 = (int64_t *)(v55 + 32);
                v58 = (int64_t *)v55;
                int64_t v60 = *v58; // 0x410165
                int64_t v61 = *v12; // 0x410168
                v41 = v61;
                v42 = v60;
                if (*v57 < 1) {
                    goto lab_0x410313;
                } else {
                    int64_t v62 = v61;
                    v49 = 0;
                    int64_t v63 = v60;
                    int64_t v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49); // 0x4101a0
                    int64_t v65 = *(int64_t *)(v64 + 8); // 0x4101a4
                    int64_t v66 = v65 - v63; // 0x4101ab
                    int64_t v67 = v66 + v62; // 0x4101ae
                    int64_t v68 = v64; // 0x4101b5
                    int64_t v69; // 0x40fcc0
                    int64_t v70; // 0x40fcc0
                    int32_t memcmp_rc; // 0x4101d8
                    int64_t v71; // 0x4102b4
                    int64_t v72; // 0x4102c1
                    int64_t n; // 0x4102c5
                    int64_t v73; // 0x4102ca
                    int64_t v74; // 0x4102cf
                    int64_t v75; // 0x4102d4
                    if (v66 >= 1) {
                        // 0x4101b7
                        v69 = *v14;
                        v75 = v63;
                        n = v66;
                        v74 = v62;
                        v73 = v64;
                        v72 = v69;
                        if (*(int64_t *)(a1 + 48) < v67) {
                            // 0x410290
                            *v18 = v66;
                            *v14 = v64;
                            v50 = v63;
                            v48 = v62;
                            v43 = v69;
                            if (*(int64_t *)(a1 + 88) < v67) {
                                goto lab_0x4104a0_2;
                            }
                            // 0x4102a4
                            *v19 = v62;
                            *v20 = v63;
                            v71 = function_4096f0(a1, v67);
                            result = v71;
                            if ((int32_t)v71 != 0) {
                                // break (via goto) -> 0x41014b
                                goto lab_0x41014b_7;
                            }
                            // 0x4102c1
                            v72 = *v11;
                            n = *v18;
                            v73 = *v14;
                            v74 = *v19;
                            v75 = *v20;
                        }
                        // 0x4101c1
                        v70 = v72;
                        *v20 = v73;
                        *v18 = v75;
                        *v14 = v74;
                        memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                        v68 = *v20;
                        v50 = *v18;
                        v48 = *v14;
                        v43 = v70;
                        if (memcmp_rc != 0) {
                            goto lab_0x4104a0_2;
                        }
                    }
                    int64_t v76 = function_40fb20(a1, v55, v68, *v15, *v12); // 0x410207
                    int64_t v77 = *v11; // 0x41020c
                    result = v76;
                    if ((int32_t)v76 >= 2) {
                        // break (via goto) -> 0x41014b
                        goto lab_0x41014b_7;
                    }
                    int64_t v78 = v49 + 1; // 0x410188
                    while (v78 < *v57) {
                        // 0x41019c
                        v62 = v67;
                        v49 = v78;
                        v63 = v65;
                        v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49);
                        v65 = *(int64_t *)(v64 + 8);
                        v66 = v65 - v63;
                        v67 = v66 + v62;
                        v68 = v64;
                        if (v66 >= 1) {
                            // 0x4101b7
                            v69 = v77;
                            v75 = v63;
                            n = v66;
                            v74 = v62;
                            v73 = v64;
                            v72 = v69;
                            if (*(int64_t *)(a1 + 48) < v67) {
                                // 0x410290
                                *v18 = v66;
                                *v14 = v64;
                                v50 = v63;
                                v48 = v62;
                                v43 = v69;
                                if (*(int64_t *)(a1 + 88) < v67) {
                                    goto lab_0x4104a0_2;
                                }
                                // 0x4102a4
                                *v19 = v62;
                                *v20 = v63;
                                v71 = function_4096f0(a1, v67);
                                result = v71;
                                if ((int32_t)v71 != 0) {
                                    // break (via goto) -> 0x41014b
                                    goto lab_0x41014b_7;
                                }
                                // 0x4102c1
                                v72 = *v11;
                                n = *v18;
                                v73 = *v14;
                                v74 = *v19;
                                v75 = *v20;
                            }
                            // 0x4101c1
                            v70 = v72;
                            *v20 = v73;
                            *v18 = v75;
                            *v14 = v74;
                            memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                            v68 = *v20;
                            v50 = *v18;
                            v48 = *v14;
                            v43 = v70;
                            if (memcmp_rc != 0) {
                                goto lab_0x4104a0_2;
                            }
                        }
                        // 0x4101f4
                        v76 = function_40fb20(a1, v55, v68, *v15, *v12);
                        v77 = *v11;
                        result = v76;
                        if ((int32_t)v76 >= 2) {
                            // break (via goto) -> 0x41014b
                            goto lab_0x41014b_7;
                        }
                        // 0x410188
                        v78 = v49 + 1;
                    }
                    // 0x410307
                    *v14 = v77;
                    v44 = v65;
                    v47 = v67;
                    goto lab_0x41030c;
                }
            } else {
                goto lab_0x40ff02_2;
            }
        }
      lab_0x40ff20:
        // 0x40ff20
        v59 = *v12;
        int64_t v79 = *v15; // 0x40ff25
        *v23 = 0;
        int64_t v80 = *v16; // 0x40ff35
        v30 = v59;
        if (v80 < *v6) {
            int64_t v81 = *v4; // 0x40ff4f
            *v15 = 8 * v79;
            *v10 = 24 * v79;
            int64_t * v82 = (int64_t *)(v81 + 48);
            int64_t * v83 = (int64_t *)(v81 + 24);
            int64_t * v84 = (int64_t *)(v81 + 40);
            v45 = v80;
            while (true) {
              lab_0x4100a9_2:
                // 0x4100a9
                v46 = v45;
                int64_t v85 = *v7 + 40 * v46; // 0x4100b4
                if (v79 != *(int64_t *)v85) {
                    goto lab_0x410098;
                } else {
                    // 0x4100bd
                    if (v59 != *(int64_t *)(v85 + 8)) {
                        goto lab_0x410098;
                    } else {
                        int64_t v86 = *(int64_t *)(v85 + 24); // 0x4100c3
                        int64_t v87 = *(int64_t *)(v85 + 16); // 0x4100c7
                        int64_t v88 = v86 - v87; // 0x4100d3
                        *v14 = v88;
                        int64_t v89; // 0x40fcc0
                        if (v88 == 0) {
                            // 0x40ff78
                            v89 = *(int64_t *)(*v84 + 16 + *v10);
                        } else {
                            // 0x4100e1
                            v89 = *v15 + *v83;
                        }
                        // 0x40ff97
                        *v12 = 24 * *(int64_t *)v89 + *v82;
                        int64_t v90 = v86 + v59 - v87; // 0x40ffa3
                        int64_t v91 = function_40be50(a1, v90 - 1, *v5); // 0x40ffaa
                        int64_t v92 = 8 * v90; // 0x40ffb4
                        *v13 = 0;
                        int64_t v93 = *v21; // 0x40ffc7
                        int64_t v94 = v93 + v92; // 0x40ffce
                        int64_t v95 = *(int64_t *)(v93 + *v24); // 0x40ffd2
                        int64_t v96 = *(int64_t *)v94; // 0x40ffd6
                        if (v95 != 0) {
                            // 0x40ffde
                            *v13 = *(int64_t *)(v95 + 16);
                        }
                        if (v96 == 0) {
                            // 0x410108
                            *v18 = v94;
                            int64_t v97 = function_40b3d0(v27, v81, (int64_t *)*v12, (int32_t)v91); // 0x41011d
                            int64_t v98 = *v21; // 0x410127
                            *(int64_t *)*v18 = v97;
                            v52 = v98;
                            v53 = v98;
                            if (*(int64_t *)(v98 + v92) != 0) {
                                goto lab_0x410072;
                            } else {
                                goto lab_0x41013c;
                            }
                        } else {
                            // 0x40fff0
                            *v25 = (int32_t)v91;
                            *v20 = v92;
                            int64_t v99 = function_40b240(v26, *(int64_t *)(v96 + 80), *v12, v91 & 0xffffffff); // 0x41000a
                            int32_t v100 = v99; // 0x410018
                            *v23 = v100;
                            if (v100 != 0) {
                                // 0x4102e0
                                free((int64_t *)*v28);
                                result = (int64_t)*v23;
                                goto lab_0x41014b_7;
                            }
                            // 0x410027
                            *v18 = *v21 + *v20;
                            *(int64_t *)*v18 = function_40b3d0(v27, v81, v26, *v25);
                            free((int64_t *)*v28);
                            int64_t v101 = *v21; // 0x410060
                            v52 = v101;
                            v53 = v101;
                            if (*(int64_t *)(v101 + v92) == 0) {
                                goto lab_0x41013c;
                            } else {
                                goto lab_0x410072;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x40fd40_3;
    }
  lab_0x4104a0_2:;
    int64_t v102 = v48;
    int64_t v103 = v50;
    *v14 = v43;
    if (*v57 > v49) {
        goto lab_0x40ff02_2;
    } else {
        // 0x4104b5
        v44 = v103;
        v47 = v102;
        v41 = v102;
        v42 = v103;
        if (v49 == 0) {
            goto lab_0x410313;
        } else {
            goto lab_0x41030c;
        }
    }
  lab_0x410454:;
    // 0x410454
    int64_t v104; // 0x40fcc0
    int64_t v105 = v104 + 1; // 0x410454
    int64_t v106 = v105; // 0x41045d
    if (*v12 < v105) {
        // break -> 0x40ff02
        goto lab_0x40ff02_2;
    }
    goto lab_0x410330;
  lab_0x410098:;
    int64_t v130 = v46 + 1; // 0x410098
    v30 = v59;
    int64_t v131 = v130; // 0x4100a3
    if (v130 >= *v6) {
        // break -> 0x40fd40
        goto lab_0x40fd40_3;
    }
    // 0x4100a9
    v45 = v131;
    goto lab_0x4100a9_2;
  lab_0x410072:
    // 0x410072
    if (*v14 != 0) {
        goto lab_0x410098;
    } else {
        // 0x41007a
        if (*(int64_t *)(*(int64_t *)(*v24 + v52) + 16) > *v13) {
            int64_t v132 = *v12; // 0x410220
            int64_t v133 = v132 + 16; // 0x41022b
            int64_t v134 = v132 + 8; // 0x41022f
            *v13 = v133;
            int64_t v135 = function_40bd00(a1, v134, v133, v59); // 0x41023e
            int32_t v136 = v135; // 0x410243
            *v23 = v136;
            result = v135;
            if (v136 != 0) {
                // break (via goto) -> 0x41014b
                goto lab_0x41014b_7;
            }
            int64_t v137 = function_40fcc0(a1, v134, *v13); // 0x410260
            int32_t v138 = v137; // 0x410265
            *v23 = v138;
            result = v137;
            if (v138 != 0) {
                // break (via goto) -> 0x41014b
                goto lab_0x41014b_7;
            }
            int64_t v139 = v46 + 1; // 0x410274
            v30 = v59;
            v131 = v139;
            if (v139 >= *v6) {
                // break -> 0x40fd40
                goto lab_0x40fd40_3;
            }
            // 0x4100a9
            v45 = v131;
            goto lab_0x4100a9_2;
        } else {
            goto lab_0x410098;
        }
    }
  lab_0x41013c:;
    uint32_t v140 = *v23; // 0x41013c
    v52 = v53;
    if (v140 != 0) {
        // 0x41014b
        result = v140;
        goto lab_0x41014b_7;
    }
    goto lab_0x410072;
  lab_0x40ff02_2:;
    int64_t v141 = *v13 + 1; // 0x40ff02
    *v13 = v141;
    if (v141 >= *v8) {
        // break -> 0x40ff20
        goto lab_0x40ff20;
    }
    // 0x40ff16
    v40 = v141;
    v51 = *(int64_t *)*v9;
    goto lab_0x40fedb;
  lab_0x410313:;
    int64_t v142 = v42;
    int64_t v122; // 0x4103a5
    int64_t v128; // 0x41047c
    int64_t v127; // 0x410481
    int64_t * v143; // 0x40fcc0
    int64_t * v144; // 0x40fcc0
    if (*v12 >= v142) {
        int64_t * v126 = (int64_t *)(v55 + 16);
        v143 = (int64_t *)(v55 + 24);
        v144 = (int64_t *)(v55 + 40);
        v106 = v142;
        int64_t v145 = v41; // 0x410326
        while (true) {
          lab_0x410330:
            // 0x410330
            v104 = v106;
            if (v104 - *v58 >= 1) {
                // 0x41033b
                int64_t * v107; // 0x40fcc0
                int64_t v108 = *v107; // 0x41033b
                int64_t v109; // 0x40fcc0
                int64_t v110; // 0x40fcc0
                if (v108 > v110) {
                    int64_t v111 = *v14;
                    v109 = v111;
                } else {
                    // 0x4104d0
                    int64_t * v112; // 0x40fcc0
                    uint64_t v113 = *v112; // 0x4104d0
                    if (v113 <= v110) {
                        // break -> 0x40ff02
                        break;
                    }
                    int64_t v114 = function_4095a0(a1, v110 + 1 & 0xffffffff); // 0x4104e1
                    result = v114;
                    if ((int32_t)v114 != 0) {
                        // break (via goto) -> 0x41014b
                        goto lab_0x41014b_7;
                    }
                    int64_t v115 = *v11; // 0x4104ee
                    *v14 = v115;
                    v109 = v115;
                }
                int64_t v116 = v109; // 0x410345
                char v117 = *(char *)(v104 - 1 + v116); // 0x41034e
                char v118 = *(char *)(v116 + v110); // 0x410354
                if (v118 != v117) {
                    // break -> 0x40ff02
                    break;
                }
            }
            int64_t v119 = *(int64_t *)(*v21 + 8 * v104); // 0x410368
            if (v119 != 0) {
                uint64_t v120 = *(int64_t *)(v119 + 16); // 0x410375
                if (v120 >= 1) {
                    int64_t v121 = 0;
                    v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                    int64_t v123 = 16 * v122 + *(int64_t *)*v9; // 0x4103b0
                    int64_t v124; // 0x4103c8
                    int64_t v125; // 0x4103cc
                    int64_t * mem; // 0x41047c
                    if (*(char *)(v123 + 8) == 9) {
                        // 0x4103b9
                        if (*v10 == *(int64_t *)v123) {
                            if (v122 == -1) {
                                goto lab_0x410454;
                            } else {
                                // 0x4103c8
                                v124 = *v126;
                                v127 = *v58;
                                v128 = v124;
                                if (v124 == 0) {
                                    // 0x410468
                                    *v18 = v125;
                                    mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                    v128 = (int64_t)mem;
                                    v127 = *v18;
                                    *v126 = v128;
                                    result = 12;
                                    if (mem != NULL) {
                                        goto lab_0x4103d8;
                                    } else {
                                        goto lab_0x41014b_7;
                                    }
                                } else {
                                    goto lab_0x4103d8;
                                }
                            }
                        }
                    }
                    int64_t v129 = v121 + 1; // 0x410398
                    while (v120 != v129) {
                        // 0x4103a5
                        v121 = v129;
                        v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                        v123 = 16 * v122 + *(int64_t *)*v9;
                        if (*(char *)(v123 + 8) == 9) {
                            // 0x4103b9
                            if (*v10 == *(int64_t *)v123) {
                                if (v122 == -1) {
                                    goto lab_0x410454;
                                } else {
                                    // 0x4103c8
                                    v124 = *v126;
                                    v125 = *v58;
                                    v127 = v125;
                                    v128 = v124;
                                    if (v124 == 0) {
                                        // 0x410468
                                        *v18 = v125;
                                        mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                        v128 = (int64_t)mem;
                                        v127 = *v18;
                                        *v126 = v128;
                                        result = 12;
                                        if (mem != NULL) {
                                            goto lab_0x4103d8;
                                        } else {
                                            goto lab_0x41014b_7;
                                        }
                                    } else {
                                        goto lab_0x4103d8;
                                    }
                                }
                            }
                        }
                        // 0x410398
                        v129 = v121 + 1;
                    }
                }
            }
            goto lab_0x410454;
        }
    }
    goto lab_0x40ff02_2;
  lab_0x41030c:
    // 0x41030c
    v41 = v47;
    v42 = v44 + 1;
    goto lab_0x410313;
  lab_0x40fd40_3:
    // 0x40fd40
    v29 = *v3 + 1;
    *v3 = v29;
    if (v29 >= *(int64_t *)*(int64_t *)(v2 + 80)) {
        // break -> 0x41014b
        goto lab_0x41014b_7;
    }
    goto lab_0x40fd59;
  lab_0x40fdd0:
    // 0x40fdd0
    v54 = *v6;
    if (v54 > 0) {
        int64_t v146 = *v7; // 0x40fde5
        int64_t v147 = v146 + 8; // 0x40fdfd
        int64_t v148 = 0;
        uint64_t v149 = v148 + v54; // 0x40fde1
        int64_t v150 = (v149 / 0x8000000000000000 + v149) / 2; // 0x40fdf6
        int64_t v151 = v150; // 0x40fe02
        int64_t v152 = v54; // 0x40fe02
        int64_t v153 = v150; // 0x40fe02
        int64_t v154; // 0x40fcc0
        int64_t v155; // 0x40fcc0
        uint64_t v156; // 0x40fe10
        int64_t v157; // 0x40fe1e
        if (v31 <= *(int64_t *)(40 * v150 + v147)) {
            v155 = v151;
            v154 = v148;
            if (v155 <= v148) {
                // break (via goto) -> 0x40fe37
                goto lab_0x40fe37;
            }
            // 0x40fe10
            v156 = v155 + v148;
            v157 = (v156 / 0x8000000000000000 + v156) / 2;
            v152 = v155;
            v153 = v157;
            while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                // 0x40fe32
                v155 = v157;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40fe37
                    goto lab_0x40fe37;
                }
                // 0x40fe10
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
            }
        }
        int64_t v158 = v152;
        int64_t v159 = v153 + 1; // 0x40fe88
        v154 = v159;
        while (v159 < v158) {
            // 0x40fde1
            v148 = v159;
            v149 = v148 + v158;
            v150 = (v149 / 0x8000000000000000 + v149) / 2;
            v151 = v150;
            v152 = v158;
            v153 = v150;
            if (v31 <= *(int64_t *)(40 * v150 + v147)) {
                v155 = v151;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40fe37
                    goto lab_0x40fe37;
                }
                // 0x40fe10
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
                while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                    // 0x40fe32
                    v155 = v157;
                    v154 = v148;
                    if (v155 <= v148) {
                        // break (via goto) -> 0x40fe37
                        goto lab_0x40fe37;
                    }
                    // 0x40fe10
                    v156 = v155 + v148;
                    v157 = (v156 / 0x8000000000000000 + v156) / 2;
                    v152 = v155;
                    v153 = v157;
                }
            }
            // 0x40fe88
            v158 = v152;
            v159 = v153 + 1;
            v154 = v159;
        }
      lab_0x40fe37:;
        int64_t v160 = v154;
        if (v54 > v160) {
            int64_t v161 = v146 + 40 * v160; // 0x40fe47
            int64_t v162 = v161; // 0x40fe4f
            if (v160 != -1 == *(int64_t *)(v161 + 8) == v31) {
                int64_t v163 = v162;
                while (v32 != *(int64_t *)v163) {
                    // 0x40fe60
                    v162 = v163 + 40;
                    if (*(char *)(v163 + 32) == 0) {
                        goto lab_0x40fe98;
                    }
                    v163 = v162;
                }
                // 0x40fe6f
                *v23 = 0;
                v30 = v31;
                goto lab_0x40fd40_3;
            } else {
                goto lab_0x40fe98;
            }
        } else {
            goto lab_0x40fe98;
        }
    } else {
        goto lab_0x40fe98;
    }
  lab_0x40fd19:
    // 0x40fd19
    v30 = v31;
    if ((v35 & 0x2000) != 0 == (v36 & 2) == 0) {
        goto lab_0x40fd40_3;
    } else {
        if ((char)(v34 / 256) > -1) {
            goto lab_0x40fdd0;
        } else {
            // 0x40fd2e
            v30 = v31;
            if ((v36 & 8) != 0) {
                goto lab_0x40fdd0;
            } else {
                goto lab_0x40fd40_3;
            }
        }
    }
  lab_0x4103d8:
    // 0x4103d8
    *(int64_t *)(v2 - 16) = 9;
    int64_t v164 = function_40eb30(a1, v128, *v56, v127, v122, v104, (int64_t)&g84); // 0x4103eb
    int32_t v165 = v164; // 0x4103f2
    if (v165 == 1) {
        goto lab_0x410454;
    } else {
        // 0x4103f7
        result = v164;
        if (v165 != 0) {
            goto lab_0x41014b_7;
        } else {
            int64_t v166 = *v143; // 0x4103ff
            if (*v57 == v166) {
                int64_t v167 = 2 * v166 | 1; // 0x4104fc
                *v18 = v167;
                int64_t * mem2 = realloc((int64_t *)*v144, 8 * (int32_t)v167); // 0x410512
                result = 12;
                if (mem2 == NULL) {
                    goto lab_0x41014b_7;
                } else {
                    // 0x410520
                    *v144 = (int64_t)mem2;
                    *v143 = *v18;
                    goto lab_0x41040d;
                }
            } else {
                goto lab_0x41040d;
            }
        }
    }
  lab_0x41040d:;
    int64_t * mem3 = calloc(1, 40); // 0x410417
    result = 12;
    if (mem3 == NULL) {
        goto lab_0x41014b_7;
    } else {
        int64_t v168 = (int64_t)mem3; // 0x410417
        int64_t v169 = *v57; // 0x410421
        *(int64_t *)(*v144 + 8 * v169) = v168;
        *mem3 = v122;
        *(int64_t *)(v168 + 8) = v104;
        *v57 = v169 + 1;
        function_40fb20(a1, v55, v168, *v15, *v12);
        goto lab_0x410454;
    }
}
// Address range: 0x410540 - 0x4106f7
int64_t function_410540(int32_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 72); // 0x410554
    int64_t v3 = *v2; // 0x410554
    int64_t * v4 = (int64_t *)(v1 + 184); // 0x410558
    int64_t v5 = *(int64_t *)(v1 + 152); // 0x41055f
    int64_t v6 = 8 * v3; // 0x410566
    int64_t * v7 = (int64_t *)(v1 + 192); // 0x410571
    int64_t * v8 = (int64_t *)(*v4 + v6);
    int64_t result; // 0x410540
    if (*v7 < v3) {
        // 0x41057a
        *v8 = a3;
        *v7 = v3;
        result = a3;
    } else {
        int64_t v9 = *v8; // 0x4105b0
        if (v9 == 0) {
            // 0x410688
            *v8 = a3;
            result = a3;
        } else {
            int64_t v10 = *(int64_t *)(v9 + 80); // 0x4105bc
            int64_t v11; // bp-88, 0x410540
            if (a3 == 0) {
                // 0x410640
                v11 = __asm_movaps(__asm_movdqu(*(int128_t *)v10));
                int64_t v12 = function_40be50(v1, v3 - 1, *(int32_t *)(v1 + 160)); // 0x410660
                int64_t v13 = function_40b3d0((int128_t *)a1, v5, &v11, (int32_t)v12); // 0x410672
                *v8 = v13;
                result = v13;
            } else {
                int64_t v14 = *(int64_t *)(a3 + 80); // 0x4105c5
                int64_t v15; // 0x410540
                int32_t v16 = function_40b240(&v11, v14, v10, v15); // 0x4105d9
                *a1 = v16;
                if (v16 != 0) {
                    // 0x410595
                    return 0;
                }
                int64_t v17 = function_40be50(v1, *v2 - 1, *(int32_t *)(v1 + 160)); // 0x4105f6
                int64_t v18 = function_40b3d0((int128_t *)a1, v5, &v11, (int32_t)v17); // 0x410617
                *(int64_t *)(*v4 + v6) = v18;
                result = v18;
                if (v14 != 0) {
                    // 0x410630
                    free((int64_t *)v15);
                    result = v18;
                }
            }
        }
    }
    // 0x410587
    if (*(int64_t *)(v5 + 152) == 0) {
        // 0x410595
        return result;
    }
    // 0x410698
    if (result == 0) {
        // 0x410595
        return 0;
    }
    int64_t v19 = result + 16; // 0x41069d
    int64_t v20 = result + 24; // 0x4106a1
    int32_t v21 = function_40bd00(v1, v19, v20, v3); // 0x4106b6
    *a1 = v21;
    if (v21 != 0) {
        // 0x410595
        return 0;
    }
    // 0x4106be
    if ((*(char *)(result + 104) & 64) == 0) {
        // 0x410595
        return result;
    }
    int32_t v22 = function_40fcc0(v1, v19, v20); // 0x4106d6
    *a1 = v22;
    int64_t result2 = 0; // 0x4106dc
    if (v22 == 0) {
        // 0x4106de
        result2 = *(int64_t *)(*v4 + v6);
    }
    // 0x410595
    return result2;
}
// Address range: 0x410700 - 0x410a24
int64_t function_410700(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 24); // 0x410719
    uint64_t v2 = *v1; // 0x410719
    int64_t * mem = malloc(8); // 0x410733
    if (mem == NULL) {
        // 0x410a10
        return 12;
    }
    // 0x410746
    int64_t v3; // bp-152, 0x410700
    int64_t v4 = &v3; // 0x410715
    int64_t v5 = (int64_t)mem; // 0x410733
    *mem = *(int64_t *)(a2 + 16);
    int64_t v6 = v5; // 0x41075e
    int64_t v7; // 0x410700
    int64_t v8; // 0x410700
    int64_t v9; // 0x410700
    int64_t v10; // 0x410700
    int64_t * v11; // 0x410700
    int64_t * v12; // 0x410700
    int64_t v13; // 0x410700
    int64_t v14; // 0x4107be
    int64_t * v15; // 0x4107d9
    int64_t * v16; // 0x410700
    int64_t v17; // 0x4108ae
    if ((int32_t)v5 == 0) {
        // 0x410764
        v6 = 0;
        if (v2 >= 1) {
            // 0x41077e
            v11 = (int64_t *)(v4 + 16);
            int32_t * v18 = (int32_t *)(v4 + 28);
            int32_t * v19 = (int32_t *)(a1 + 224);
            int64_t * v20 = (int64_t *)(a1 + 152);
            v12 = (int64_t *)(v4 + 8);
            int64_t * v21 = (int64_t *)(v4 + 40);
            int64_t * v22 = (int64_t *)(v4 + 48);
            int64_t * v23 = (int64_t *)(v4 + 32);
            v13 = a2 + 40;
            int64_t v24 = v2; // 0x410700
            while (true) {
                int64_t v25 = 8 * v24; // 0x410781
                *v11 = v25;
                if (*(int64_t *)(v25 + a2) == 0) {
                    uint32_t v26 = *v18 + 1; // 0x4109d0
                    *v18 = v26;
                    if ((int64_t)*v19 < (int64_t)v26) {
                        // break -> 0x4109e6
                        break;
                    }
                } else {
                    // 0x410799
                    *v18 = 0;
                    if (*v19 < 0) {
                        // break -> 0x4109e6
                        break;
                    }
                }
                int64_t v27 = *(int64_t *)(a1 + 184); // 0x4107b2
                v14 = v24 - 1;
                *(int64_t *)(v4 + 72) = 0;
                int64_t v28 = *(int64_t *)(v27 - 8 + *v11); // 0x4107cb
                v9 = v27;
                if (v28 != 0) {
                    // 0x4107d9
                    v15 = (int64_t *)(v28 + 40);
                    int64_t v29 = *v20; // 0x4107de
                    v9 = v27;
                    if (*v15 >= 1) {
                        // 0x4107eb
                        *v12 = 0;
                        int64_t * v30 = (int64_t *)v29; // 0x4108aa
                        v16 = (int64_t *)(v29 + 24);
                        v7 = 0;
                        while (true) {
                          lab_0x4108a1:
                            // 0x4108a1
                            v17 = *(int64_t *)(8 * v7 + *(int64_t *)(v28 + 48));
                            int64_t v31 = 16 * v17; // 0x4108b5
                            int64_t v32 = v31 + *v30; // 0x4108b9
                            v10 = v32;
                            if ((*(char *)(v32 + 10) & 16) == 0) {
                                goto lab_0x410800;
                            } else {
                                int64_t v33 = *v20; // 0x4108c6
                                *v21 = v31;
                                int64_t v34 = v33 + 216; // 0x4108e2
                                *v22 = v33;
                                *v23 = *v1;
                                int64_t v35 = function_40e8a0(*(int64_t *)v33, v34, v17, a1, v14); // 0x4108f3
                                int64_t v36 = *v21; // 0x4108f8
                                int32_t v37 = v35; // 0x4108fd
                                int64_t v38 = v35 & 0xffffffff; // 0x4108ff
                                if (v37 < 1) {
                                    // 0x410960
                                    v8 = v38;
                                    if (v37 != 0) {
                                        goto lab_0x410841;
                                    } else {
                                        // 0x410966
                                        v10 = *v30 + v36;
                                        goto lab_0x410800;
                                    }
                                } else {
                                    int64_t v39 = (0x100000000 * v35 >> 32) + v14; // 0x410906
                                    v8 = v38;
                                    if (*v23 < v39) {
                                        goto lab_0x410841;
                                    } else {
                                        int64_t v40 = *(int64_t *)(8 * v39 + v34); // 0x41091c
                                        if (v40 == 0) {
                                            // 0x410966
                                            v10 = *v30 + v36;
                                            goto lab_0x410800;
                                        } else {
                                            // 0x410925
                                            *v23 = v36;
                                            int64_t v41 = *(int64_t *)(*(int64_t *)(*v22 + 24) + 8 * v17); // 0x410936
                                            v8 = v38;
                                            if (function_40a120(*(int64_t *)(v40 + 16), v40 + 24, v41) != 0) {
                                                goto lab_0x410841;
                                            } else {
                                                // 0x410948
                                                v10 = *v30 + *v23;
                                                goto lab_0x410800;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x410978:
                // 0x410978
                v6 = v9;
                if ((int32_t)v9 != 0) {
                    goto lab_0x4109a5_3;
                }
                // 0x41098f
                v24 = v14;
                v6 = 0;
                if (v14 == 0) {
                    goto lab_0x4109a5_3;
                }
            }
            // 0x4109e6
            memset((int64_t *)a2, 0, (int32_t)*v11);
            free((int64_t *)*(int64_t *)(v4 + 80));
            return (int32_t)&g84 ^ (int32_t)&g84;
        }
    }
  lab_0x4109a5_3:;
    int32_t * v42 = (int32_t *)(v4 + 8); // 0x4109aa
    *v42 = (int32_t)v6;
    free((int64_t *)*(int64_t *)(v4 + 80));
    return (int64_t)*v42;
  lab_0x410800:;
    int64_t v43 = v10;
    if ((char)function_40bf40(a1, v43, v14) == 0) {
        goto lab_0x41088c;
    } else {
        int64_t v44 = *(int64_t *)(*v11 + v43); // 0x410817
        if (v44 == 0) {
            goto lab_0x41088c;
        } else {
            int64_t v45 = *(int64_t *)(*v16 + 8 * v17); // 0x41082d
            v8 = 1;
            if (function_40a120(*(int64_t *)(v44 + 16), v44 + 24, v45) == 0) {
                goto lab_0x41088c;
            } else {
                goto lab_0x410841;
            }
        }
    }
  lab_0x41088c:;
    int64_t v46 = *v12 + 1; // 0x41088c
    *v12 = v46;
    v7 = v46;
    v9 = v46;
    if (v46 >= *v15) {
        // break -> 0x410978
        goto lab_0x410978;
    }
    goto lab_0x4108a1;
  lab_0x410841:
    // 0x410841
    if (*(int64_t *)v13 == 0) {
        goto lab_0x410877;
    } else {
        int64_t v47 = *(int64_t *)(*v16 + 8 * v17); // 0x410862
        *(int64_t *)(v4 - 16) = v14;
        int64_t v48 = *(int64_t *)(v4 + 56); // 0x410867
        int64_t v49 = function_40a3b0(a1, v13, v48, v47, (0x100000000 * v8 >> 32) + v14, v17, (int64_t)&g84); // 0x41086c
        if ((char)v49 != 0) {
            goto lab_0x41088c;
        } else {
            goto lab_0x410877;
        }
    }
  lab_0x410877:
    // 0x410877
    v6 = 12;
    if ((char)function_408b10(v4 + 64, v17) == 0) {
        goto lab_0x4109a5_3;
    }
    goto lab_0x41088c;
}
// Address range: 0x410a30 - 0x4129b9
int64_t function_410a30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    // 0x410a30
    int64_t v1; // 0x410a30
    int64_t v2 = v1;
    int64_t v3; // bp-312, 0x410a30
    __asm_rep_stosq_memset((char *)&v3, 0, 32);
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x410a7c
    char * v5 = (char *)v4; // 0x410a88
    char * v6 = v5; // 0x410a90
    if (v4 != 0) {
        unsigned char v7 = *(char *)(a1 + 56); // 0x410a92
        v6 = NULL;
        if (a4 != a5 && (v7 & 8) != 0) {
            // 0x410aa8
            v6 = v7 % 2 == 0 ? v5 : NULL;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x410ac5
    uint64_t v9 = *v8; // 0x410ac5
    int64_t v10 = 0; // 0x410ad1
    int64_t v11 = a7; // 0x410ad1
    if (v9 < a7) {
        // 0x410ad3
        v10 = -1 - v9 + a7;
        v11 = v9 + 1;
    }
    int64_t v12 = *(int64_t *)(a1 + 16); // 0x410afd
    if (v12 == 0) {
        // 0x4114a0
        return 1;
    }
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x410b0d
    int64_t v14 = *v13; // 0x410b0d
    if (v14 == 0) {
        // 0x4114a0
        return 1;
    }
    int64_t * v15 = (int64_t *)(a1 + 80); // 0x410b1a
    int64_t v16 = *v15; // 0x410b1a
    if (v16 == 0) {
        // 0x4114a0
        return 1;
    }
    int64_t * v17 = (int64_t *)(a1 + 88); // 0x410b27
    int64_t v18 = *v17; // 0x410b27
    if (v18 == 0) {
        // 0x4114a0
        return 1;
    }
    int64_t * v19 = (int64_t *)(a1 + 96); // 0x410b34
    if (*v19 == 0) {
        // 0x4114a0
        return 1;
    }
    int64_t v20 = a4; // 0x410b44
    int64_t v21 = a5; // 0x410b44
    if (*(int64_t *)(v14 + 16) != 0) {
        goto lab_0x410b78;
    } else {
        // 0x410b46
        v20 = a4;
        v21 = a5;
        if (*(int64_t *)(v16 + 16) != 0) {
            goto lab_0x410b78;
        } else {
            // 0x410b4d
            if (*(int64_t *)(v18 + 16) == 0) {
                goto lab_0x410b5a;
            } else {
                // 0x410b54
                if (*(char *)(a1 + 56) < 0) {
                    goto lab_0x410b78;
                } else {
                    goto lab_0x410b5a;
                }
            }
        }
    }
  lab_0x411480_9:;
    // 0x411480
    int64_t v22; // 0x410a30
    free((int64_t *)v22);
    int64_t * v23; // 0x410a30
    int64_t v24; // 0x410a30
    int64_t v25; // 0x410a30
    if (*v23 != 0) {
        // 0x411c98
        function_409d90(&v3);
        free((int64_t *)v24);
        free((int64_t *)v25);
    }
    // 0x411498
    function_409d50(&v3);
    // 0x4114a0
    int64_t v26; // 0x410a30
    return v26 & 0xffffffff;
  lab_0x4119e8_3:;
    // 0x4119e8
    int32_t v27; // 0x410a30
    int32_t v28 = v27; // bp-392, 0x4119e8
    int32_t v29; // 0x410a30
    int32_t v30 = v29; // 0x4119f2
    int64_t v31; // 0x410a30
    int64_t v32 = v31; // 0x4119f2
    int64_t v33 = 0; // 0x4119f2
    int64_t v34; // 0x410a30
    int64_t v35 = v34; // 0x4119f2
    int64_t v36; // 0x410a30
    int64_t v37 = v36; // 0x4119f2
    int64_t v38; // 0x410a30
    int64_t v39 = v38; // 0x4119f2
    int64_t * v40; // 0x410a30
    v23 = v40;
    v26 = 12;
    int64_t v41; // 0x410a30
    v25 = v41;
    int64_t v42; // 0x410a30
    v24 = v42;
    v22 = 0;
    int64_t v43; // 0x410a30
    if (v43 == 0) {
        goto lab_0x411480_9;
    } else {
        goto lab_0x4111d8;
    }
  lab_0x41127f:;
    // 0x41127f
    int64_t v44; // 0x410a30
    int64_t v45 = v44;
    int64_t v46; // 0x410a30
    int64_t v47 = v46;
    int64_t v48; // 0x410a30
    int64_t v49 = v48;
    int32_t v50; // 0x410a30
    int32_t v51 = v50;
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v52; // 0x410a30
    int64_t v53 = v52; // 0x410a30
    int128_t v54; // 0x410a30
    int128_t v55 = v54; // 0x410a30
    int64_t v56; // 0x410a30
    int64_t v57 = v56; // 0x410a30
    int32_t v58; // 0x410a30
    int64_t v59; // 0x410a30
    int64_t v60; // 0x410a30
    int64_t v61; // 0x410a30
    int64_t v62; // 0x410a30
    int64_t v63; // 0x410a30
    int64_t v64; // 0x410a30
    int64_t v65; // 0x410a30
    int64_t v66; // 0x410a30
    int64_t v67; // bp-376, 0x410a30
    int64_t v68; // 0x410a30
    int64_t * mem; // 0x411aff
    int64_t v69; // 0x410a30
    int64_t * mem2; // 0x411b26
    int64_t v70; // 0x411b26
    int128_t v71; // 0x411b4e
    int64_t v72; // 0x410c2d
    char * v73; // 0x410a30
    char * v74; // 0x410a30
    int64_t v75; // 0x410a30
    int128_t v76; // 0x410a30
    switch (v45) {
        case -1: {
            goto lab_0x4118e0;
        }
        case -2: {
            goto lab_0x411480_9;
        }
        default: {
            // 0x411293
            int64_t v77; // 0x410a30
            if (v11 < 2 | (*v73 & 16) != 0) {
                // 0x411450
                v65 = v45;
                v64 = v43;
                if (*v40 == 0) {
                    goto lab_0x411463_2;
                }
                int64_t v78 = *(int64_t *)(8 * v45 + v43); // 0x411aae
                int64_t v79 = function_40c070(&v3, *(int64_t *)(v78 + 16), v78 + 24, v45); // 0x411aba
                v77 = v79;
            } else {
                int64_t v80 = *(int64_t *)(8 * v45 + v43); // 0x4112c7
                int64_t v81 = function_40c070(&v3, *(int64_t *)(v80 + 16), v80 + 24, v45); // 0x4112d3
                v77 = v81;
                if (*v74 % 2 == 0) {
                    // 0x4112f5
                    v65 = v45;
                    v64 = v43;
                    v77 = v81;
                    if (*v40 == 0) {
                        goto lab_0x411463_2;
                    }
                }
            }
            // 0x411acf
            if (v45 >= 0x1fffffffffffffff) {
                // break -> 0x411480
                break;
            }
            int64_t v82 = v45 + 1; // 0x411aef
            int32_t size = 8 * (int32_t)v82; // 0x411aff
            mem = malloc(size);
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if (mem == NULL) {
                // break -> 0x411480
                break;
            }
            int64_t v83 = v77;
            v69 = (int64_t)mem;
            if (*v40 == 0) {
                int128_t v84 = __asm_pxor(v54, v54); // 0x411860
                v67 = v69;
                __asm_movaps(v84);
                int64_t v85 = function_410700(v72, v75); // 0x4118a7
                free(NULL);
                int32_t v86 = v85;
                v58 = v86;
                v68 = 0;
                v66 = v83;
                v76 = v84;
                v63 = v85;
                if (v86 != 0) {
                    goto lab_0x412092;
                } else {
                    // 0x4118c5
                    v60 = v45;
                    if (*mem != 0) {
                        goto lab_0x411c38;
                    }
                    // 0x4118cf
                    free(mem);
                    v53 = v83;
                    v55 = v84;
                    v57 = v69;
                    goto lab_0x4118e0;
                }
            } else {
                // 0x411b23
                mem2 = malloc(size);
                v70 = (int64_t)mem2;
                int64_t v87 = v45; // 0x411b36
                if (mem2 == NULL) {
                    // 0x4120d4
                    free(mem);
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    goto lab_0x411480_9;
                }
                v61 = v83;
                v62 = v82;
                int128_t v88 = v54;
                memset(mem2, 0, 8 * (int32_t)v62);
                v71 = __asm_pxor(v88, v88);
                __asm_movaps(v71);
                v67 = v69;
                int64_t v89 = function_410700(v72, v75); // 0x411b91
                free(NULL);
                int32_t v90 = v89;
                v58 = v90;
                v68 = v70;
                v66 = v61;
                v76 = v71;
                v63 = v89;
                while (v90 == 0) {
                    // 0x411bb3
                    v59 = v87;
                    if (*mem != 0) {
                        goto lab_0x411c0d_2;
                    }
                    // 0x411bb9
                    if (*mem2 != 0) {
                        goto lab_0x411c0d_2;
                    }
                    int64_t v91 = v59; // 0x411bd8
                    if (v59 == 0) {
                        goto lab_0x411cc0_2;
                    }
                    int64_t v92; // 0x410a30
                    int64_t v93; // 0x410a30
                    int64_t v94; // 0x411bde
                    while (true) {
                        // 0x411bde
                        v92 = v91;
                        v93 = v92 - 1;
                        v94 = *(int64_t *)(8 * v93 + v43);
                        if (v94 != 0) {
                            // 0x411be7
                            if ((*(char *)(v94 + 104) & 16) != 0) {
                                // break -> 0x411bed
                                break;
                            }
                        }
                        // 0x411bd0
                        v91 = v93;
                        if (v93 == 0) {
                            goto lab_0x411cc0_2;
                        }
                    }
                    int64_t v95 = function_40c070(&v3, *(int64_t *)(v94 + 16), v94 + 24, v93); // 0x411c00
                    v87 = v93;
                    v61 = v95;
                    v62 = v92;
                    v88 = v71;
                    memset(mem2, 0, 8 * (int32_t)v62);
                    v71 = __asm_pxor(v88, v88);
                    __asm_movaps(v71);
                    v67 = v69;
                    v89 = function_410700(v72, v75);
                    free(NULL);
                    v90 = v89;
                    v58 = v90;
                    v68 = v70;
                    v66 = v61;
                    v76 = v71;
                    v63 = v89;
                }
                goto lab_0x412092;
            }
        }
    }
  lab_0x4116fe:;
    // 0x4116fe
    int64_t v96; // 0x410a30
    int64_t v97 = v96 + 1; // 0x4116fe
    int64_t v98; // 0x410a30
    int64_t v99 = v98; // 0x411706
    int64_t v100; // 0x410a30
    int64_t v101 = v100; // 0x411706
    int64_t v102; // 0x410a30
    int64_t v103 = v102; // 0x411706
    int64_t v104; // 0x410a30
    int64_t v105 = v104; // 0x411706
    int64_t v106; // 0x410a30
    int64_t v107 = v106; // 0x411706
    int64_t v108 = v97; // 0x411706
    int64_t v109 = v98; // 0x411706
    int64_t v110 = v100; // 0x411706
    int64_t v111 = v102; // 0x411706
    int64_t v112 = v106; // 0x411706
    int64_t v113 = v104; // 0x411706
    int64_t v114 = v106; // 0x411706
    int64_t v115 = v36; // 0x411706
    int64_t v116; // 0x410a30
    int64_t v117 = v116; // 0x411706
    int64_t * v118; // 0x411590
    if (v97 >= *v118) {
        // break -> 0x411a53
        goto lab_0x411a53;
    }
    goto lab_0x41170c;
  lab_0x4115f0:;
    // 0x4115f0
    int64_t v119; // 0x410a30
    int64_t v121; // 0x411714
    int64_t v135 = function_40e8a0(v36, a1 + 216, v121, v72, v119); // 0x4115fe
    int64_t v120; // 0x410a30
    v98 = v120;
    v100 = v72;
    v102 = v121;
    v104 = v36;
    int64_t v136; // 0x410a30
    v106 = v136;
    v116 = v121;
    int64_t v137; // 0x410a30
    int64_t v138; // 0x410a30
    int64_t v139; // 0x410a30
    int64_t v140; // 0x410a30
    int32_t v141; // bp-388, 0x410a30
    int64_t v142; // 0x41165e
    int64_t * v143; // 0x410ba2
    int32_t v127; // 0x410a30
    int64_t v144; // 0x410a30
    if ((int32_t)v135 == 0) {
        goto lab_0x4116fe;
    } else {
        int64_t v145 = (0x100000000 * v135 >> 32) + v136; // 0x41160e
        int32_t v146 = function_4096f0(v72, v145);
        v141 = v146;
        v27 = v146;
        v31 = v120;
        v34 = v119;
        v38 = v121;
        if (v146 != 0) {
            goto lab_0x4119e8_3;
        }
        int64_t v147 = 8 * v145; // 0x411656
        v142 = v147 + v43;
        int64_t v148 = *v8 + 24 * *(int64_t *)(*v143 + 8 * v121); // 0x41166e
        int64_t * v149 = (int64_t *)v142; // 0x411672
        int64_t v150 = *v149; // 0x411672
        if (v150 == 0) {
            // 0x411790
            v67 = __asm_movaps(__asm_movdqu(*(int128_t *)v148));
            int64_t v151 = *(int64_t *)(v148 + 16); // 0x4117a3
            int64_t v152 = function_40be50(v72, v145 - 1, v127); // 0x4117b6
            int64_t v153 = v152 & 0xffffffff; // 0x4117ce
            int64_t v154 = function_40b3d0((int128_t *)&v141, a1, &v67, (int32_t)v152); // 0x4117d0
            *v149 = v154;
            v98 = v151;
            v100 = v153;
            v102 = v43;
            v104 = v144;
            v106 = v136;
            v116 = v147;
            v140 = v151;
            v138 = v153;
            v139 = v144;
            v137 = v147;
            if (v154 != 0) {
                goto lab_0x4116fe;
            } else {
                goto lab_0x4117f0;
            }
        } else {
            int64_t v155 = function_40b240(&v67, *(int64_t *)(v150 + 80), v148, v72); // 0x41168a
            int32_t v156 = v155;
            v141 = v156;
            v27 = v156;
            v31 = v120;
            v34 = v142;
            v38 = v147;
            if (v156 != 0) {
                goto lab_0x4119e8_3;
            }
            int64_t v157 = function_40be50(v72, v145 - 1, v127); // 0x4116ac
            int64_t v158 = v157 & 0xffffffff; // 0x4116c4
            int64_t v159 = function_40b3d0((int128_t *)&v141, a1, &v67, (int32_t)v157); // 0x4116ce
            *v149 = v159;
            free((int64_t *)v120);
            v98 = v120;
            v100 = v158;
            v102 = v43;
            v104 = v120;
            v106 = v136;
            v116 = v142;
            v140 = v120;
            v138 = v158;
            v139 = v120;
            v137 = v142;
            if (*v149 == 0) {
                goto lab_0x4117f0;
            } else {
                goto lab_0x4116fe;
            }
        }
    }
  lab_0x4115d1:;
    // 0x4115d1
    int64_t v132; // 0x410a30
    int64_t v160 = v132;
    v98 = v120;
    int64_t v129; // 0x411764
    v100 = v129;
    v102 = v160;
    v104 = v72;
    v106 = v119;
    v116 = v121;
    uint64_t v125; // 0x411728
    uint64_t v126; // 0x41174e
    int64_t v128; // 0x41175f
    if ((v125 & 0x2000) != 0 == (v126 & 2) == 0) {
        goto lab_0x4116fe;
    } else {
        uint32_t v161 = (int32_t)v128 & 128; // 0x4115de
        if (v161 == 0) {
            goto lab_0x4115f0;
        } else {
            // 0x4115e6
            v98 = v120;
            v100 = v161;
            v102 = v160;
            v104 = v72;
            v106 = v119;
            v116 = v121;
            if ((v126 & 8) == 0) {
                goto lab_0x4116fe;
            } else {
                goto lab_0x4115f0;
            }
        }
    }
  lab_0x4117f0:
    // 0x4117f0
    v98 = v140;
    v100 = v138;
    v102 = v43;
    v104 = v139;
    v106 = v136;
    v116 = v137;
    v27 = v141;
    v31 = v140;
    v34 = v142;
    v38 = v137;
    if (v141 != 0) {
        goto lab_0x4119e8_3;
    }
    goto lab_0x4116fe;
  lab_0x411463_2:
    // 0x411463
    v23 = v40;
    int64_t v162; // 0x410fb5
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v163; // 0x410a30
    int64_t v164; // 0x410a30
    int64_t v165; // 0x410a30
    int64_t v166; // 0x411e27
    if (v11 != 0) {
        // 0x411e08
        v165 = a8 + 16;
        v166 = 16 * v11 + a8;
        v163 = v165;
        if (v11 < 2) {
            // 0x412114
            *(int64_t *)a8 = 0;
            *(int64_t *)(a8 + 8) = v65;
            v164 = 0;
            goto lab_0x411ee2;
        } else {
            goto lab_0x411e40;
        }
    } else {
        goto lab_0x411480_9;
    }
  lab_0x411c38:
    // 0x411c38
    free((int64_t *)v43);
    v65 = v60;
    v64 = v69;
    goto lab_0x411463_2;
  lab_0x411c0d_2:;
    int64_t v167 = function_40b8c0(a1, v69, v70, v62); // 0x411c1b
    free(mem2);
    int32_t v168 = v167;
    v60 = v59;
    v58 = v168;
    v68 = 0;
    v66 = v61;
    v76 = v71;
    v63 = v167;
    if (v168 != 0) {
        goto lab_0x412092;
    } else {
        goto lab_0x411c38;
    }
  lab_0x411cc0_2:
    // 0x411cc0
    free(mem);
    free(mem2);
    function_409d90(&v3);
    int32_t v169 = v51; // 0x411ce0
    int64_t v170 = v61; // 0x411ce0
    int128_t v171 = v71; // 0x411ce0
    int64_t v172; // bp-384, 0x410a30
    int64_t v173 = v172; // 0x411ce0
    int64_t v174 = v49; // 0x411ce0
    int64_t v175 = v47; // 0x411ce0
    int64_t v176 = v69; // 0x411ce0
    goto lab_0x4118f0;
  lab_0x4111a4:;
    // 0x4111a4
    int64_t v298; // 0x410a30
    int64_t v469 = v298;
    int64_t v297; // 0x410a30
    int64_t v470 = v297;
    int64_t v296; // 0x410a30
    int64_t v471 = v296;
    int64_t v293; // 0x410a30
    int64_t v472 = v293;
    int64_t v291; // 0x410a30
    int64_t v473 = v291;
    int64_t v294; // 0x410a30
    int32_t v474 = (int32_t)v294 + 1; // 0x4111a8
    int64_t v326; // 0x410a30
    int64_t v475 = (int64_t)*(char *)(v294 + v326); // 0x4111b8
    int64_t v282; // 0x410a30
    int64_t * v476 = (int64_t *)(v282 + 88); // 0x4111bc
    int64_t v477 = *v476; // 0x4111bc
    int64_t v295; // 0x410a30
    int64_t v478 = v295; // 0x4111c3
    int64_t v479 = v477; // 0x4111c3
    int64_t v480; // 0x410a30
    int64_t v292; // 0x410a30
    int64_t v481; // 0x410a30
    int64_t v482; // 0x410a30
    int64_t v347; // 0x410a30
    if (v477 == 0) {
        int64_t v483 = v292;
        int64_t v484 = *(int64_t *)(v282 + 96); // 0x411808
        while (v484 == 0) {
            // 0x411a00
            if ((char)function_40cb60(a1, v282, v472, v483, v471) == 0) {
                // 0x411a18
                v28 = 12;
                v30 = v474;
                v32 = v473;
                v33 = 0;
                v35 = v471;
                v37 = v470;
                v39 = v469;
                v23 = v40;
                v26 = 12;
                v25 = v41;
                v24 = v42;
                v22 = 0;
                if (v43 != 0) {
                    goto lab_0x4111d8;
                } else {
                    goto lab_0x411480_9;
                }
            }
            int64_t v485 = *v476; // 0x4111bc
            v478 = a1;
            v479 = v485;
            if (v485 != 0) {
                goto lab_0x4111c9;
            }
            v484 = *(int64_t *)(v282 + 96);
        }
        int64_t v486 = v484 + 8 * v475;
        int64_t v487 = function_40be50(v72, (int64_t)v474 - 1, v127) % 2 == 0 ? v486 : v486 + 2048;
        v482 = v347;
        v480 = v487;
        v481 = v72;
    } else {
      lab_0x4111c9:
        // 0x4111c9
        v482 = v472;
        v480 = v479 + 8 * v475;
        v481 = v478;
    }
    int64_t v488 = *(int64_t *)v480;
    v30 = v474;
    v32 = v473;
    v33 = v488;
    v35 = v471;
    v37 = v470;
    v39 = v469;
    int32_t v489 = v474; // 0x4111d6
    int64_t v490 = v473; // 0x4111d6
    int64_t v491 = v482; // 0x4111d6
    int64_t v492 = v488; // 0x4111d6
    int64_t v493 = v481; // 0x4111d6
    int64_t v494 = v471; // 0x4111d6
    int64_t v495 = v470; // 0x4111d6
    int64_t v496 = v469; // 0x4111d6
    if (v43 == 0) {
        goto lab_0x4111ee;
    } else {
        goto lab_0x4111d8;
    }
  lab_0x411590:;
    // 0x411590
    int64_t v300; // 0x410a30
    int64_t v497 = v300;
    int64_t v299; // 0x410a30
    int64_t v498 = v299;
    v118 = (int64_t *)(v282 + 16);
    int64_t v277; // 0x410a30
    v109 = v277;
    int64_t v284; // 0x411169
    v110 = v284;
    int64_t v278; // 0x410a30
    v111 = v278;
    v112 = v498;
    v113 = v497;
    int64_t v280; // 0x410a30
    v114 = v280;
    int64_t v281; // 0x410a30
    v115 = v281;
    int64_t v283; // 0x410a30
    v117 = v283;
    if (*v118 >= 1) {
        int64_t * v122 = (int64_t *)(v282 + 24); // 0x41170c
        v136 = v29;
        v99 = v277;
        v101 = v284;
        v103 = v278;
        v105 = v497;
        v107 = v498;
        v108 = 0;
        while (true) {
          lab_0x41170c:
            // 0x41170c
            v96 = v108;
            v119 = v107;
            v36 = v105;
            v120 = v99;
            v121 = *(int64_t *)(*v122 + 8 * v96);
            int64_t v123 = 16 * v121 + v36; // 0x41171f
            v98 = v120;
            v100 = v101;
            v102 = v103;
            v104 = v36;
            v106 = v119;
            v116 = v121;
            if ((*(char *)(v123 + 10) & 16) == 0) {
                goto lab_0x4116fe;
            } else {
                uint32_t v124 = *(int32_t *)(v123 + 8); // 0x411728
                if ((v124 & 0x3ff00) == 0) {
                    goto lab_0x4115f0;
                } else {
                    // 0x411737
                    v125 = (int64_t)v124;
                    v126 = function_40be50(v72, v119, v127);
                    v128 = v125 / 256;
                    v129 = v128 & 0xff03ff;
                    if ((v125 & 1024) != 0) {
                        // 0x4115c0
                        v98 = v120;
                        v100 = v129;
                        v102 = v128;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v126 % 2 == 0) {
                            goto lab_0x4116fe;
                        } else {
                            uint32_t v130 = (int32_t)v128 & 8; // 0x4115c8
                            int64_t v131 = v130; // 0x4115c8
                            v132 = v131;
                            v98 = v120;
                            v100 = v129;
                            v102 = v131;
                            v104 = v72;
                            v106 = v119;
                            v116 = v121;
                            if (v130 != 0) {
                                goto lab_0x4116fe;
                            } else {
                                goto lab_0x4115d1;
                            }
                        }
                    } else {
                        uint32_t v133 = (int32_t)v128 & 8; // 0x411772
                        int64_t v134 = v133; // 0x411772
                        v132 = v134;
                        v98 = v120;
                        v100 = v129;
                        v102 = v134;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v133 == 0 || v126 % 2 == 0) {
                            goto lab_0x4115d1;
                        } else {
                            goto lab_0x4116fe;
                        }
                    }
                }
            }
        }
    }
  lab_0x411a53:
    // 0x411a53
    v28 = 0;
    v291 = v109;
    v292 = v110;
    v293 = v111;
    v294 = v112;
    v295 = v113;
    v296 = v114;
    v297 = v115;
    v298 = v117;
    goto lab_0x4111a4;
  lab_0x4111ee:;
    int64_t v499 = v496;
    int64_t v500 = v495;
    int64_t v501 = v494;
    int64_t v502 = v490;
    int32_t v503 = v489;
    int32_t v504 = v503; // 0x4111f1
    int64_t v505 = v491; // 0x4111f1
    int64_t v506 = v492; // 0x4111f1
    int64_t v507 = v493; // 0x4111f1
    int64_t v265; // 0x410a30
    int64_t v263; // 0x410a30
    int64_t v264; // 0x410a30
    int32_t v261; // 0x410a30
    int64_t v262; // 0x410a30
    int64_t v260; // 0x410a30
    int64_t v276; // 0x410a30
    int64_t v259; // 0x410a30
    int64_t v275; // 0x410a30
    int64_t v274; // 0x410a30
    int32_t v258; // 0x410a30
    int32_t v272; // 0x410a30
    int64_t v348; // 0x410a30
    char v349; // 0x410a30
    if (v492 == 0) {
        // 0x4111f7
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 != 0) {
            // break (via goto) -> 0x411480
            goto lab_0x411480_9;
        }
        // 0x41120e
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v43 == 0) {
            // break -> 0x41126d
            goto lab_0x41126d_6;
        }
        int32_t v508 = v503; // 0x411226
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if ((v349 & (char)v274) != 0) {
            // break -> 0x41126d
            goto lab_0x41126d_6;
        }
        int32_t v509 = v508;
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v509;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v509 > -1) {
            // break (via goto) -> 0x41126d
            goto lab_0x41126d_6;
        }
        int64_t v510 = (int64_t)v509 + 1;
        int64_t v511; // 0x411253
        while (*(int64_t *)(8 * v510 + v43) == 0) {
            // 0x411253
            v511 = v510 + 1;
            v258 = v272;
            v259 = v275;
            v260 = v276;
            v261 = 0;
            v262 = v502;
            v263 = v501;
            v264 = v500;
            v265 = v499;
            if (v511 > 0) {
                // break (via goto) -> 0x41126d
                goto lab_0x41126d_6;
            }
            v510 = v511;
        }
        int64_t v512 = function_410540(&v28, &v3, 0); // 0x4114d5
        uint32_t v513 = v28; // 0x4114da
        int32_t v514 = v510;
        while (v513 == 0) {
            // 0x4114e5
            v508 = v514;
            if (v512 != 0) {
                // 0x411100
                v504 = v514;
                v505 = v513;
                v506 = v512;
                v507 = v348;
                goto lab_0x411100_2;
            }
            v509 = v508;
            v258 = v272;
            v259 = v275;
            v260 = v276;
            v261 = v509;
            v262 = v502;
            v263 = v501;
            v264 = v500;
            v265 = v499;
            if (v509 > -1) {
                // break (via goto) -> 0x41126d
                goto lab_0x41126d_6;
            }
            // 0x411240
            v510 = (int64_t)v509 + 1;
            while (*(int64_t *)(8 * v510 + v43) == 0) {
                // 0x411253
                v511 = v510 + 1;
                v258 = v272;
                v259 = v275;
                v260 = v276;
                v261 = 0;
                v262 = v502;
                v263 = v501;
                v264 = v500;
                v265 = v499;
                if (v511 > 0) {
                    // break (via goto) -> 0x41126d
                    goto lab_0x41126d_6;
                }
                v510 = v511;
            }
            // 0x4114c0
            v512 = function_410540(&v28, &v3, 0);
            v513 = v28;
            v514 = v510;
        }
        // 0x411500
        v504 = v514;
        v505 = v513;
        v506 = v512;
        v507 = v348;
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v514;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v512 == 0) {
            // break -> 0x41126d
            goto lab_0x41126d_6;
        }
    }
    goto lab_0x411100_2;
  lab_0x4111d8:;
    int64_t v564 = function_410540(&v28, &v3, v33); // 0x4111e6
    v489 = v30;
    v490 = v32;
    v491 = v33;
    v492 = v564;
    v493 = v348;
    v494 = v35;
    v495 = v37;
    v496 = v39;
    goto lab_0x4111ee;
  lab_0x411100_2:;
    int64_t v515 = v507;
    int64_t v516 = v506;
    int64_t v517 = v505;
    int32_t v518 = v504;
    int64_t v519 = v518; // 0x411103
    char v520 = *(char *)(v516 + 104); // 0x411125
    int64_t v521 = v274; // 0x41112b
    int64_t v522 = v275; // 0x41112b
    int64_t v523 = v276; // 0x41112b
    int64_t v524 = v517; // 0x41112b
    int64_t v525 = v515; // 0x41112b
    int64_t v526; // 0x410a30
    int64_t v527; // 0x410a30
    if ((v520 & 16) == 0) {
        goto lab_0x411158;
    } else {
        // 0x41112d
        v527 = v517;
        v526 = v515;
        if (v520 < 0) {
            int64_t v528 = v516 + 24; // 0x411524
            int64_t v529 = function_40c070(&v3, *(int64_t *)(v516 + 16), v528, v519); // 0x41152e
            v527 = v528;
            v526 = v72;
            v521 = v274;
            v522 = v275;
            v523 = v276;
            v524 = v528;
            v525 = v72;
            if (v529 == 0) {
                goto lab_0x411158;
            } else {
                goto lab_0x411135;
            }
        } else {
            goto lab_0x411135;
        }
    }
  lab_0x411158:;
    // 0x411158
    char v273; // 0x410a30
    char v530 = v273 & (char)(v282 == v516); // 0x41110e
    int32_t v531 = v530 == 0 ? (int64_t)v272 : v284;
    int64_t v243 = v499; // 0x411163
    int64_t v244 = v516; // 0x411163
    int64_t v245 = v500; // 0x411163
    int64_t v246 = v501; // 0x411163
    int64_t v247 = v525; // 0x411163
    int64_t v248 = v519; // 0x411163
    int64_t v249 = v524; // 0x411163
    int64_t v250 = v502; // 0x411163
    int64_t v252 = v523; // 0x411163
    int64_t v253 = v522; // 0x411163
    int64_t v254 = v521; // 0x411163
    char v255 = v530; // 0x411163
    int32_t v256 = v518; // 0x411163
    int32_t v257 = v531; // 0x411163
    v258 = v531;
    v259 = v522;
    v260 = v523;
    v261 = v518;
    v262 = v502;
    v263 = v501;
    v264 = v500;
    v265 = v499;
    if (v519 >= a6) {
        // break -> 0x41126d
        goto lab_0x41126d_6;
    }
    goto lab_0x411169;
  lab_0x411135:
    // 0x411135
    v521 = 1;
    v522 = v519;
    v523 = 0;
    v524 = v527;
    v525 = v526;
    v50 = v518;
    v52 = v502;
    v48 = v501;
    v46 = v500;
    v44 = v519;
    v56 = v499;
    int32_t v309; // 0x410a30
    if (v309 == 0) {
        goto lab_0x41127f;
    }
    goto lab_0x411158;
  lab_0x410f30:
    // 0x410f30
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v353; // 0x410a30
    int64_t v179; // 0x410e1c
    if (v179 > v353) {
        // break -> 0x411480
        goto lab_0x411480_9;
    }
    char v532 = 0;
    int64_t v533 = v353;
    int64_t v534 = 0; // 0x410f7f
    if (v533 < a3) {
        // 0x410f81
        v534 = (int64_t)*(char *)(v533 + a2);
    }
    int64_t v535 = v534;
    int64_t v536 = v535; // 0x410f89
    int64_t v313; // 0x410b9e
    if (v313 != 0) {
        // 0x410f8b
        v536 = (int64_t)*(char *)(v535 + v313);
    }
    int64_t v345; // 0x410a30
    while (*(char *)(v536 + v345) == 0) {
        int64_t v537 = v533 - 1; // 0x410f68
        if (v537 < v179) {
            // 0x411d38
            v172 = v537;
            v23 = v40;
            v26 = 1;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            goto lab_0x411480_9;
        }
        v532 = 1;
        v533 = v537;
        v534 = 0;
        if (v533 < a3) {
            // 0x410f81
            v534 = (int64_t)*(char *)(v533 + a2);
        }
        // 0x410f86
        v535 = v534;
        v536 = v535;
        if (v313 != 0) {
            // 0x410f8b
            v536 = (int64_t)*(char *)(v535 + v313);
        }
    }
    // 0x410f95
    int32_t v356; // 0x410a30
    int32_t v235 = v356; // 0x410f97
    int64_t v355; // 0x410a30
    int64_t v236 = v355; // 0x410f97
    int128_t v354; // 0x410a30
    int128_t v237 = v354; // 0x410f97
    int64_t v238 = v353; // 0x410f97
    int64_t v239 = a3; // 0x410f97
    int64_t v240 = v179; // 0x410f97
    int64_t v350; // 0x410a30
    int64_t v241 = v350; // 0x410f97
    if (v532 != 0) {
        // 0x410f99
        v172 = v533;
        v235 = v356;
        v236 = v355;
        v237 = v354;
        v238 = v533;
        v239 = a3;
        v240 = v179;
        v241 = v350;
    }
    goto lab_0x410fa8;
  lab_0x410fa8:;
    int64_t v538 = v238;
    v162 = function_40c140(&v3, v538, v127);
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if ((int32_t)v162 != 0) {
        // break -> 0x411480
        goto lab_0x411480_9;
    }
    int64_t v234 = v241;
    int64_t v233 = v240;
    int64_t v232 = v239;
    v54 = v237;
    int64_t v231 = v236;
    int32_t v215 = v235;
    int64_t v285; // 0x410a30
    int32_t v339; // 0x410e3f
    if (v285 == 0 || v339 == 1) {
        goto lab_0x410fec;
    } else {
        // 0x410fdb
        v169 = v215;
        v170 = v231;
        v171 = v54;
        v173 = v538;
        v174 = v232;
        v175 = v233;
        v176 = v234;
        int32_t * v539; // 0x410a30
        if (*v539 == -1) {
            goto lab_0x4118f0;
        } else {
            goto lab_0x410fec;
        }
    }
  lab_0x41192c:;
    // 0x41192c
    int64_t v191; // 0x410a30
    int64_t v540 = v191;
    uint64_t v541 = v540 - v1; // 0x411993
    int64_t v542; // 0x4119b7
    if (v285 <= v541) {
        // 0x4119a5
        v542 = function_40c140(&v3, v540, v127);
        v23 = v40;
        v26 = v542;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if ((int32_t)v542 != 0) {
            // break (via goto) -> 0x411480
            goto lab_0x411480_9;
        }
    }
    int64_t v543 = v345; // 0x411956
    if (v540 < a3) {
        // 0x411958
        v543 = (int64_t)*(char *)(v541 + v326) + v345;
    }
    // 0x411967
    int32_t v188; // 0x410a30
    v235 = v188;
    int64_t v189; // 0x410a30
    v236 = v189;
    int128_t v190; // 0x410a30
    v237 = v190;
    v238 = v540;
    int64_t v192; // 0x410a30
    v239 = v192;
    int64_t v193; // 0x410a30
    v240 = v193;
    v241 = v179;
    int64_t v180; // 0x410e2b
    int64_t v178; // 0x410a30
    while (*(char *)v543 == 0) {
        int64_t v544 = v540 + v178; // 0x411973
        v172 = v544;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v544 < v179 || v544 > v180) {
            // break (via goto) -> 0x411480
            goto lab_0x411480_9;
        }
        v540 = v544;
        v541 = v540 - v1;
        if (v285 <= v541) {
            // 0x4119a5
            v542 = function_40c140(&v3, v540, v127);
            v23 = v40;
            v26 = v542;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if ((int32_t)v542 != 0) {
                // break (via goto) -> 0x411480
                goto lab_0x411480_9;
            }
        }
        // 0x411950
        v543 = v345;
        if (v540 < a3) {
            // 0x411958
            v543 = (int64_t)*(char *)(v541 + v326) + v345;
        }
        // 0x411967
        v235 = v188;
        v236 = v189;
        v237 = v190;
        v238 = v540;
        v239 = v192;
        v240 = v193;
        v241 = v179;
    }
    goto lab_0x410fa8;
  lab_0x41138c:;
    // 0x41138c
    int64_t v358; // 0x410a30
    int64_t v545 = v358;
    int64_t v357; // 0x410a30
    int64_t v546 = v357;
    v235 = v356;
    v236 = v355;
    v237 = v354;
    v238 = v546;
    v239 = v545;
    int64_t v351; // 0x410a30
    v240 = v351;
    v241 = v350;
    char * v346; // 0x410a30
    if (v180 == v546) {
        int64_t v547 = 0; // 0x4113a3
        if (v180 < a3) {
            // 0x4113a5
            v547 = (int64_t)*v346;
        }
        int64_t v548 = v547;
        int64_t v549 = v548; // 0x4113b9
        if (v313 != 0) {
            // 0x4113bb
            v549 = (int64_t)*(char *)(v548 + v313);
        }
        // 0x4113bf
        v235 = v356;
        v236 = v355;
        v237 = v354;
        v238 = v546;
        v239 = v545;
        v240 = v351;
        v241 = v350;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (*(char *)(v549 + v345) == 0) {
            // break -> 0x411480
            goto lab_0x411480_9;
        }
    }
    goto lab_0x410fa8;
  lab_0x410fec:;
    int64_t v550 = *v13; // 0x411013
    v28 = 0;
    int64_t v218 = v347; // 0x411047
    int64_t v220 = v72; // 0x411047
    int64_t v222 = v550; // 0x411047
    int64_t v223; // 0x410a30
    int64_t v221; // 0x410a30
    int64_t v219; // 0x410a30
    if (*(char *)(v550 + 104) >= 0) {
        goto lab_0x411090;
    } else {
        uint64_t v551 = function_40be50(v72, (int64_t)v215 - 1, v127); // 0x411057
        if (v551 % 2 != 0) {
            // 0x411ce8
            v219 = v347;
            v221 = v72;
            v223 = *v15;
            goto lab_0x411cec;
        } else {
            int32_t v552 = v551; // 0x411064
            v218 = v347;
            v220 = v72;
            v222 = v550;
            if (v552 == 0) {
                goto lab_0x411090;
            } else {
                int64_t v553 = v551 & 6; // 0x41106a
                if (v553 == 6) {
                    // 0x412080
                    v219 = 6;
                    v221 = v72;
                    v223 = *v19;
                    goto lab_0x411cec;
                } else {
                    if ((v551 & 2) != 0) {
                        // 0x411db0
                        v219 = v553;
                        v221 = v72;
                        v223 = *v17;
                        goto lab_0x411cec;
                    } else {
                        // 0x41107e
                        v218 = v553;
                        v220 = v72;
                        v222 = v550;
                        if ((v551 & 4) != 0) {
                            int64_t v554 = *(int64_t *)(v550 + 80); // 0x411dc0
                            int64_t v555 = function_40b3d0((int128_t *)&v28, a1, (int64_t *)v554, v552); // 0x411dd1
                            v219 = v554;
                            v221 = v348;
                            v223 = v555;
                            goto lab_0x411cec;
                        } else {
                            goto lab_0x411090;
                        }
                    }
                }
            }
        }
    }
  lab_0x411090:;
    int64_t v198 = v222;
    int64_t v202 = v220;
    int64_t v200 = v218;
    int64_t v242; // 0x410a30
    char v197; // 0x410a30
    int64_t v201; // 0x410a30
    int64_t v199; // 0x410a30
    char v196; // 0x410a30
    if (v43 == 0) {
        goto lab_0x4110b4;
    } else {
        // 0x41109d
        *(int64_t *)(8 * (int64_t)v215 + v43) = v198;
        if (*v40 != 0) {
            int64_t v556 = v198 + 16; // 0x412038
            int64_t v557 = v198 + 24; // 0x41203c
            int64_t v558 = function_40bd00(v72, v556, v557, 0); // 0x41204b
            int32_t v559 = v558; // 0x412050
            v28 = v559;
            v242 = v558;
            if (v559 != 0) {
                goto lab_0x41213e;
            } else {
                char * v560 = (char *)(v198 + 104); // 0x41205f
                char v561 = *v560; // 0x41205f
                v196 = 0;
                v197 = v561;
                v199 = v557;
                v201 = v72;
                if ((v561 & 64) != 0) {
                    int64_t v562 = function_40fcc0(v72, v556, v557); // 0x4120fa
                    int32_t v563 = v562; // 0x4120ff
                    v28 = v563;
                    v242 = v562;
                    if (v563 != 0) {
                        goto lab_0x41213e;
                    } else {
                        // 0x41210a
                        v196 = 0;
                        v197 = *v560;
                        v199 = v557;
                        v201 = v72;
                        goto lab_0x4110c8;
                    }
                } else {
                    goto lab_0x4110c8;
                }
            }
        } else {
            goto lab_0x4110b4;
        }
    }
  lab_0x4118f0:;
    int64_t v177 = v173 + v178; // 0x4118f8
    v172 = v177;
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v177 < v179 || v177 > v180) {
        // break -> 0x411480
        goto lab_0x411480_9;
    }
    int32_t v181 = v169; // 0x411926
    int64_t v182 = v170; // 0x411926
    int128_t v183 = v171; // 0x411926
    int64_t v184 = v177; // 0x411926
    int64_t v185 = v174; // 0x411926
    int64_t v186 = v175; // 0x411926
    int64_t v187 = v176; // 0x411926
    v188 = v169;
    v189 = v170;
    v190 = v171;
    v191 = v177;
    v192 = v174;
    v193 = v175;
    int32_t v194; // 0x410a30
    if (v194 < 9) {
        goto lab_0x410ef8;
    } else {
        goto lab_0x41192c;
    }
  lab_0x4110b4:;
    // 0x4110b4
    char v195; // 0x410ed6
    v196 = v195;
    v197 = *(char *)(v198 + 104);
    v199 = v200;
    v201 = v202;
    goto lab_0x4110c8;
  lab_0x4110c8:;
    int64_t v203 = v201;
    int64_t v204 = v199;
    char v205 = v196;
    int64_t v206; // 0x410a30
    int64_t v207; // 0x410a30
    int64_t v208; // 0x410a30
    int64_t v209; // 0x410a30
    int64_t v210; // 0x410a30
    int64_t v211; // 0x410a30
    int64_t v212; // 0x410a30
    int64_t v213; // 0x410a30
    if ((v197 & 16) != 0) {
        // 0x411d58
        if (*(char *)(v198 + 104) < 0) {
            int64_t v214 = v215;
            int64_t v216 = v198 + 24; // 0x411de9
            int64_t v217 = function_40c070(&v3, *(int64_t *)(v198 + 16), v216, v214); // 0x411df0
            v206 = v214;
            v213 = 0;
            v212 = v216;
            v210 = v72;
            v208 = -1;
            v207 = v214;
            v211 = v216;
            v209 = v72;
            if (v217 == 0) {
                goto lab_0x4110e0;
            } else {
                goto lab_0x411d63;
            }
        } else {
            // 0x411d58
            v207 = v215;
            v211 = v204;
            v209 = v203;
            goto lab_0x411d63;
        }
    } else {
        // 0x4110c8
        v206 = v215;
        v213 = 0;
        v212 = v204;
        v210 = v203;
        v208 = -1;
        goto lab_0x4110e0;
    }
  lab_0x411cec:
    // 0x411cec
    v218 = v219;
    v220 = v221;
    v222 = v223;
    int64_t v224; // 0x410a30
    int64_t v225; // 0x410a30
    int64_t v226; // 0x410a30
    int64_t v227; // 0x410a30
    int32_t v228; // 0x410a30
    int64_t v229; // 0x410a30
    int128_t v230; // 0x410a30
    if (v223 != 0) {
        goto lab_0x411090;
    } else {
        // 0x411cf5
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 == 12) {
            // break -> 0x411480
            goto lab_0x411480_9;
        }
        // 0x411d09
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1073, "check_matching");
        v228 = v215;
        v229 = v231;
        v230 = v54;
        v227 = a1;
        v225 = v232;
        v226 = v233;
        v224 = v234;
      lab_0x411d28_2:
        // 0x411d28
        v172 = v227;
        v235 = v228;
        v236 = v229;
        v237 = v230;
        v238 = v227;
        v239 = v225;
        v240 = v226;
        v241 = v224;
        goto lab_0x410fa8;
    }
  lab_0x41213e:
    // 0x41213e
    v50 = v215;
    v52 = v231;
    v48 = v232;
    v46 = v233;
    v44 = 0x100000000 * v242 >> 32;
    v56 = v234;
    goto lab_0x41127f;
  lab_0x4110e0:
    // 0x4110e0
    v243 = v234;
    v244 = v198;
    v245 = v233;
    v246 = v232;
    v247 = v210;
    v248 = v206;
    v249 = v212;
    v250 = v231;
    int64_t v251; // 0x410ec7
    v252 = v251;
    v253 = v208;
    v254 = v213;
    v255 = v205;
    v256 = v215;
    v257 = v215;
    v258 = v215;
    v259 = v208;
    v260 = v251;
    v261 = v215;
    v262 = v231;
    v263 = v232;
    v264 = v233;
    v265 = v234;
    int64_t v266; // 0x410a30
    int64_t v267; // bp-576, 0x410a30
    int32_t v268; // bp-688, 0x410a30
    int32_t result; // bp-692, 0x410a30
    int64_t v269; // 0x4121ce
    int64_t v270; // 0x412243
    int64_t * v271; // 0x412243
    if (v206 < a6) {
        while (true) {
          lab_0x411169:
            // 0x411169
            v272 = v257;
            v29 = v256;
            v273 = v255;
            v274 = v254;
            v275 = v253;
            v276 = v252;
            v277 = v250;
            v278 = v249;
            int64_t v279 = v248;
            v280 = v246;
            v281 = v245;
            v282 = v244;
            v283 = v243;
            v284 = v279 + 1;
            if (v2 < a3 == v284 >= v2 || v285 < a3 == v284 >= v285) {
                int32_t v286 = function_4095a0(v72, v279 + 2 & 0xffffffff);
                v28 = v286;
                if (v286 != 0) {
                    // 0x411a78
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    if (v286 != 12) {
                        // 0x41216d
                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1128, "check_matching");
                        v267 = v283;
                        v269 = *(int64_t *)0x409f5000002340;
                        result = 0;
                        if (v269 == 0) {
                            int64_t v287 = function_40b6d0(&result, 0x409e7000000000, (int64_t *)"check_matching", 0x409f5000002340, v280, v281); // 0x41268b
                            *(int64_t *)0x656765722f628cac = v287;
                            // 0x412209
                            return result;
                        }
                        // 0x412220
                        v268 = 0;
                        int64_t v288 = function_40b6d0(&v268, 0x409e7000000000, (int64_t *)"check_matching", 0x409f5000002340, v280, v281); // 0x412233
                        uint32_t result2 = v268; // 0x41223b
                        if (result2 != 0) {
                            // 0x412209
                            return result2;
                        }
                        // 0x412243
                        v270 = v288 + 56;
                        v271 = (int64_t *)v270;
                        int64_t v289 = *v271; // 0x412243
                        if (v289 != 0) {
                            goto lab_0x4122d0;
                        } else {
                            // 0x412255
                            *(int64_t *)(v288 + 64) = 0;
                            *v271 = 0x676e69686374;
                            int64_t * mem3 = malloc(0x4b431ba0); // 0x412269
                            *(int64_t *)(v288 + 72) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x412209
                                return 12;
                            }
                            // 0x412277
                            v268 = 0;
                            v266 = v289;
                            goto lab_0x41229a;
                        }
                    } else {
                        goto lab_0x411480_9;
                    }
                }
                int64_t v290 = v29; // 0x411574
                v291 = v277;
                v292 = v284;
                v293 = v278;
                v294 = v290;
                v295 = v72;
                v296 = v280;
                v297 = v281;
                v298 = v283;
                v299 = v290;
                v300 = v72;
                if ((*(char *)(v282 + 104) & 32) == 0) {
                    goto lab_0x4111a4;
                } else {
                    goto lab_0x411590;
                }
            } else {
                // 0x411199
                v291 = v277;
                v292 = v284;
                v293 = v278;
                v294 = v279;
                v295 = v247;
                v296 = v280;
                v297 = v281;
                v298 = v283;
                v299 = v279;
                v300 = v247;
                if ((*(char *)(v282 + 104) & 32) != 0) {
                    goto lab_0x411590;
                } else {
                    goto lab_0x4111a4;
                }
            }
        }
    }
  lab_0x41126d_6:;
    int64_t v301 = v265;
    int64_t v302 = v264;
    int64_t v303 = v263;
    int64_t v304 = v262;
    int32_t v305 = v261;
    int64_t v306 = v260;
    int64_t v307 = v259;
    v50 = v305;
    v52 = v304;
    v48 = v303;
    v46 = v302;
    v44 = v307;
    v56 = v301;
    if (v306 != 0) {
        int64_t * v308 = (int64_t *)v306; // 0x41127c
        *v308 = *v308 + (int64_t)v258;
        v50 = v305;
        v52 = v304;
        v48 = v303;
        v46 = v302;
        v44 = v307;
        v56 = v301;
    }
    goto lab_0x41127f;
  lab_0x411d63:
    // 0x411d63
    v206 = v207;
    v213 = 1;
    v212 = v211;
    v210 = v209;
    v208 = v207;
    v50 = v215;
    v52 = v231;
    v48 = v232;
    v46 = v233;
    v44 = v207;
    v56 = v234;
    if (v309 != 0) {
        goto lab_0x4110e0;
    } else {
        goto lab_0x41127f;
    }
  lab_0x4118e0:
    // 0x4118e0
    function_409d90(&v3);
    v169 = v51;
    v170 = v53;
    v171 = v55;
    v173 = v172;
    v174 = v49;
    v175 = v47;
    v176 = v57;
    goto lab_0x4118f0;
  lab_0x412092:
    // 0x412092
    free(mem);
    free((int64_t *)v68);
    v53 = v66;
    v55 = v76;
    v57 = v69;
    if (v58 != 1) {
        // 0x411480
        v23 = v40;
        v26 = v63 & 0xffffffff;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        goto lab_0x411480_9;
    }
    goto lab_0x4118e0;
  lab_0x410b78:;
    int64_t v310 = v21;
    int64_t v311 = v20;
    int32_t v312 = 1; // 0x410b89
    if (v11 == 0) {
        // 0x410f00
        v312 = *(int64_t *)(a1 + 152) != 0;
    }
    // 0x410b8f
    v313 = *(int64_t *)(a1 + 40);
    v143 = (int64_t *)(a1 + 24);
    int32_t * v314 = (int32_t *)(a1 + 180); // 0x410ba6
    int64_t v315 = v12 + 1; // 0x410bbd
    int64_t v316 = (int64_t)*v314; // 0x410bc6
    int64_t v317 = v315 - v316; // 0x410bc9
    int64_t v318 = v317 < 0 == ((v317 ^ v315) & (v315 ^ v316)) < 0 ? v315 : v316; // 0x410bd4
    int64_t v319 = a3 + 1; // 0x410bd8
    int64_t v320 = v318 - v319; // 0x410bec
    int64_t v321 = v320 < 0 == ((v320 ^ v318) & (v318 ^ v319)) < 0 == (v320 != 0) ? v319 : v318; // 0x410bf7
    v3 = a2;
    v72 = &v3;
    int64_t v322 = function_408a00(v72, v321); // 0x410c5c
    int64_t v323; // 0x410a30
    int64_t v324; // 0x410a30
    int64_t v325; // 0x410a30
    if ((int32_t)v322 != 0) {
        // 0x410b8f
        v23 = (int64_t *)(a1 + 152);
        v26 = v322;
        goto lab_0x411480_9;
    } else {
        // 0x410c6d
        v309 = v312;
        if ((*v143 & 0x400000 || v313) != 0) {
            goto lab_0x410cc3;
        } else {
            // 0x410ca3
            v323 = a2;
            v324 = a2;
            v325 = a3;
            if (*v314 < 2) {
                goto lab_0x410cc5;
            } else {
                goto lab_0x410cc3;
            }
        }
    }
  lab_0x410cc3:
    // 0x410cc3
    v324 = v323;
    v325 = 0;
    goto lab_0x410cc5;
  lab_0x410b5a:
    // 0x410b5a
    v20 = 0;
    v21 = 0;
    if (a4 != 0 == (a5 != 0)) {
        // 0x4114a0
        return 1;
    }
    goto lab_0x410b78;
  lab_0x410cc5:
    // 0x410cc5
    v285 = v325;
    v326 = v324;
    v40 = (int64_t *)(a1 + 152);
    int64_t v327 = *v40; // 0x410d01
    int64_t v328 = 2 * v327; // 0x410d1b
    int64_t v329; // 0x410a30
    int64_t v330; // 0x410a30
    if (v328 < 1) {
        goto lab_0x410d7c;
    } else {
        // 0x410d2b
        v23 = v40;
        v26 = 12;
        if (v328 > 0x666666666666666) {
            goto lab_0x411480_9;
        } else {
            int32_t v331 = v327;
            int64_t * mem4 = malloc(80 * v331); // 0x410d46
            int64_t v332 = (int64_t)mem4; // 0x410d46
            int64_t * mem5 = malloc(16 * v331); // 0x410d5d
            int64_t v333 = (int64_t)mem5; // 0x410d5d
            v330 = v332;
            v329 = v333;
            v23 = v40;
            v26 = 12;
            v25 = v332;
            v24 = v333;
            if (mem4 == NULL || mem5 == NULL) {
                goto lab_0x411480_9;
            } else {
                goto lab_0x410d7c;
            }
        }
    }
  lab_0x410d7c:
    // 0x410d7c
    v42 = v329;
    v41 = v330;
    int64_t v334; // 0x410a30
    if (v11 < 2) {
        // 0x411c70
        v334 = 0;
        if ((*(char *)(a1 + 176) & 2) != 0) {
            goto lab_0x410da6;
        } else {
            goto lab_0x410de2;
        }
    } else {
        goto lab_0x410da6;
    }
  lab_0x410da6:
    // 0x410da6
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    if (v2 < 0x1fffffffffffffff) {
        // 0x410dc1
        g92 = &v267;
        int64_t * mem6 = malloc(8 * (int32_t)v2 + 8); // 0x410dc9
        int64_t v335 = (int64_t)mem6; // 0x410dc9
        v334 = v335;
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v335;
        if (mem6 == NULL) {
            goto lab_0x411480_9;
        } else {
            goto lab_0x410de2;
        }
    } else {
        goto lab_0x411480_9;
    }
  lab_0x410de2:
    // 0x410de2
    v43 = v334;
    v172 = v311;
    int64_t v336 = v311 - v310; // 0x410e08
    bool v337 = v336 == 0 | v336 < 0 != ((v336 ^ v311) & (v310 ^ v311)) < 0;
    int32_t v338 = v337; // 0x410e0b
    v339 = *v314;
    int32_t v340 = 8; // 0x410e51
    if (v6 != NULL) {
        int32_t v341 = 4; // 0x410e5b
        if (v339 != 1) {
            // 0x410e5d
            v341 = 4 * (int32_t)((*v143 & 0x400000 | v313) == 0);
        }
        // 0x410e80
        v340 = 2 * v338 | (int32_t)(v313 != 0) | v341;
    }
    // 0x410e9c
    v179 = v337 ? v311 : v310;
    v180 = v336 < 0 == ((v336 ^ v311) & (v310 ^ v311)) < 0 ? v311 : v310;
    int64_t v342 = v311 - v180; // 0x410e9c
    int64_t v343 = v311 - v179; // 0x410ea4
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v342 < 0 == ((v342 ^ v311) & (v180 ^ v311)) < 0 != v342 != 0 && v343 < 0 == ((v343 ^ v311) & (v179 ^ v311)) < 0) {
        int64_t v344 = 0x100000000 * a9 >> 32;
        v194 = v340;
        v251 = v337 ? (int64_t)&v172 : 0;
        v195 = v251 != 0;
        v345 = (int64_t)v6;
        v346 = (char *)(v180 + a2);
        v127 = v344;
        v178 = (int32_t)!((v336 == 0 | v336 < 0 != ((v336 ^ v311) & (v310 ^ v311)) < 0)) + v338;
        v347 = v344 & 0xffffffff;
        v348 = &v28;
        v144 = &v141;
        v349 = (char)v309 ^ 1;
        v73 = (char *)(a1 + 56);
        v74 = (char *)(a1 + 176);
        v75 = &v67;
        v184 = v311;
        v185 = a5;
        v186 = a6;
        v187 = v327;
        while (true) {
          lab_0x410ef8:
            // 0x410ef8
            v350 = v187;
            v351 = v186;
            int64_t v352 = v185;
            v353 = v184;
            v354 = v183;
            v355 = v182;
            v356 = v181;
            v235 = v356;
            v236 = v355;
            v237 = v354;
            v238 = v353;
            v239 = v352;
            v240 = v351;
            v241 = v350;
            v188 = v356;
            v189 = v355;
            v190 = v354;
            v191 = v353;
            v192 = v352;
            v193 = v351;
            switch (g92) {
                case 0: {
                    goto lab_0x410f30;
                }
                case 1: {
                    goto lab_0x410f30;
                }
                case 2: {
                    // 0x4113e8
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        // 0x4113ef
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v359 = v353; // 0x411405
                        if (*(char *)((int64_t)*(char *)(v353 + a2) + v345) != 0) {
                            goto lab_0x410fa8;
                        } else {
                            int64_t v360 = v359 + 1;
                            while (v180 != v360) {
                                // 0x411420
                                v359 = v360;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v360;
                                v225 = v352;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)*(char *)(v360 + a2) + v345) != 0) {
                                    goto lab_0x411d28_2;
                                }
                                v360 = v359 + 1;
                            }
                            // 0x41143a
                            v172 = v180;
                            v357 = v360;
                            v358 = v352;
                            goto lab_0x41138c;
                        }
                    } else {
                        goto lab_0x41138c;
                    }
                }
                case 3: {
                    // 0x411310
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        unsigned char v361 = *(char *)(v313 + (int64_t)*(char *)(v353 + a2)); // 0x411328
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v362 = v353; // 0x411339
                        if (*(char *)((int64_t)v361 + v345) != 0) {
                            goto lab_0x410fa8;
                        } else {
                            int64_t v363 = v362 + 1;
                            while (v180 != v363) {
                                unsigned char v364 = *(char *)(v313 + (int64_t)*(char *)(v363 + a2)); // 0x411365
                                v362 = v363;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v363;
                                v225 = a2;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)v364 + v345) != 0) {
                                    goto lab_0x411d28_2;
                                }
                                v363 = v362 + 1;
                            }
                            // 0x41137f
                            v172 = v180;
                            v357 = v363;
                            v358 = a2;
                            goto lab_0x41138c;
                        }
                    } else {
                        goto lab_0x41138c;
                    }
                }
                case 4: {
                    goto lab_0x410fa8;
                }
                default: {
                    goto lab_0x41192c;
                }
            }
        }
    }
    goto lab_0x411480_9;
  lab_0x4122d0:;
    int64_t v365 = v269 + 8; // 0x4122dd
    int64_t result3 = function_40abd0((int128_t *)"check_matching", v365, v270); // 0x4122e9
    int32_t v366 = result3; // 0x4122ee
    result = v366;
    int64_t v367 = v280; // 0x4122f4
    int64_t v368 = v281; // 0x4122f4
    int64_t v369 = 0; // 0x4122f4
    if (v366 != 0) {
        // 0x412209
        return result3;
    }
    goto lab_0x412780;
  lab_0x412780:;
    int64_t v370 = v368;
    int64_t v371 = v367;
    int64_t v372 = *(int64_t *)((int64_t)"lib/regexec.c" + 48); // 0x412780
    int64_t v373 = 40 * *(int64_t *)(v372 + 8 * v369); // 0x412791
    int64_t v374 = 0x409fb000000000; // 0x412799
    int64_t v375 = v371; // 0x412799
    int64_t v376 = v370; // 0x412799
    int64_t v377; // 0x410a30
    int64_t v378; // 0x410a30
    int64_t v379; // 0x410a30
    int64_t v380; // 0x410a30
    int64_t v381; // 0x410a30
    int64_t v382; // 0x410a30
    int64_t v383; // 0x4127ac
    int64_t v384; // 0x4127b8
    if (*(int64_t *)(v373 + 0x409fb000000010) < 1128) {
        // 0x41279f
        v374 = 0x409fb000000000;
        v375 = v371;
        v376 = v370;
        if (*(int64_t *)(v373 + 0x409fb000000008) < 1128) {
            goto lab_0x41283d;
        } else {
            // 0x4127a9
            v383 = *(int64_t *)0x409e7000000000;
            int64_t v385 = 16 * *(int64_t *)(v373 + 0x409fb000000000); // 0x4127b4
            v384 = *(int64_t *)(v383 + v385);
            v377 = v383;
            v380 = v385;
            v378 = 0;
            v381 = 0x61666e5f6b6e696c;
            v382 = -1;
            v379 = -1;
            if (*(int64_t *)(v373 + 0x409fb000000018) == 1128) {
                goto lab_0x412896;
            } else {
                goto lab_0x4127ee;
            }
        }
    } else {
        goto lab_0x41283d;
    }
  lab_0x41283d:;
    int64_t v386 = v376;
    int64_t v387 = v375;
    int64_t v388 = v369 + 1; // 0x41283d
    v367 = v387;
    v368 = v386;
    v369 = v388;
    if (v388 >= *(int64_t *)((int64_t)"lib/regexec.c" + 40)) {
        // 0x41284b
        result = 0;
        int64_t v389 = function_40b6d0(&result, 0x409e7000000000, (int64_t *)"check_matching", v374, v387, v386); // 0x412318
        *(int64_t *)0x656765722f628cac = v389;
        uint32_t v390 = result; // 0x412321
        // 0x412209
        return v390 != 0 ? (int64_t)v390 : 0;
    }
    goto lab_0x412780;
  lab_0x41229a:;
    int64_t v391 = *(int64_t *)(8 * v266 + 0x61666e5f6b6e696c); // 0x4122a1
    int64_t v392 = *(int64_t *)0x409e7000000038; // 0x4122a9
    int32_t v393 = function_40a660(v271, (int128_t *)(v392 + 24 * v391)); // 0x4122b7
    v268 = v393;
    if (v393 != 0) {
        // 0x412209
        return 12;
    }
    int64_t v394 = v266 + 1; // 0x412290
    v266 = v394;
    if (v394 > 0x676e69686373) {
        goto lab_0x4122d0;
    } else {
        goto lab_0x41229a;
    }
  lab_0x412896:;
    int64_t v395 = v382;
    int64_t v396 = v381; // 0x410a30
    int64_t v397 = v379; // 0x410a30
    goto lab_0x412896_2;
  lab_0x4127ee:;
    int64_t v410 = v378;
    int64_t v414 = v380;
    int64_t v412 = v377;
    int64_t v416 = *(int64_t *)(8 * v410 + 0x61666e5f6b6e696c); // 0x4127f2
    int64_t v417 = 16 * v416 + v412; // 0x4127fd
    int64_t v411; // 0x410a30
    int64_t v415; // 0x410a30
    int64_t result4; // 0x410a30
    int64_t v413; // 0x410a30
    if ((*(char *)(v417 + 8) || 1) == 9) {
        // 0x41280c
        if (v384 != *(int64_t *)v417) {
            goto lab_0x4127e0;
        } else {
            int64_t v418 = function_40c930(0x409e7000000000, v416, (int64_t)"check_matching", v365); // 0x41281c
            result4 = v418;
            if ((int32_t)v418 != 0) {
                // 0x412209
                return result4;
            }
            int64_t v419 = v410 + 1; // 0x412829
            v374 = v365;
            v375 = v384;
            v376 = v370;
            if (v419 < 0x676e69686374) {
                // 0x412829
                v411 = *(int64_t *)0x409e7000000000;
                v413 = v365;
                v415 = v419;
                goto lab_0x4127ea;
            } else {
                goto lab_0x41283d;
            }
        }
    } else {
        goto lab_0x4127e0;
    }
  lab_0x412896_2:;
    int64_t v398 = v397;
    int64_t v399 = v396;
    int64_t v400 = *(int64_t *)v399; // 0x412896
    int64_t v401 = 16 * v400 + v383; // 0x4128a0
    char v402 = *(char *)(v401 + 8); // 0x4128a3
    int64_t v403; // 0x410a30
    int64_t v404; // 0x410a30
    int64_t v405; // 0x410a30
    int64_t v406; // 0x412889
    if (v402 != 8) {
        // 0x412880
        v406 = v398;
        if (v402 != 9) {
            goto lab_0x41288d;
        } else {
            // 0x412886
            v406 = v384 == *(int64_t *)v401 ? v400 : v398;
            goto lab_0x41288d;
        }
    } else {
        int64_t v407 = v384 == *(int64_t *)v401 ? v400 : v395; // 0x4128b1
        int64_t v408 = v399 + 8; // 0x4128b5
        v381 = v408;
        v382 = v407;
        v379 = v398;
        v404 = v408;
        v405 = v407;
        v403 = v398;
        if (v408 != 0x6169a9d2b6b1850c) {
            goto lab_0x412896;
        } else {
            goto lab_0x4128be;
        }
    }
  lab_0x4127e0:;
    int64_t v409 = v410 + 1; // 0x4127e0
    v411 = v412;
    v413 = v414;
    v415 = v409;
    v374 = v414;
    v375 = v384;
    v376 = v370;
    if (v409 > 0x676e69686373) {
        goto lab_0x41283d;
    } else {
        goto lab_0x4127ea;
    }
  lab_0x4127ea:
    // 0x4127ea
    v377 = v411;
    v380 = v413;
    v378 = v415;
    goto lab_0x4127ee;
  lab_0x41288d:;
    int64_t v420 = v399 + 8; // 0x41288d
    v396 = v420;
    v397 = v406;
    v404 = 0x6169a9d2b6b1850c;
    v405 = v395;
    v403 = v406;
    if (v420 == 0x6169a9d2b6b1850c) {
        goto lab_0x4128be;
    } else {
        goto lab_0x412896_2;
    }
  lab_0x4128be:;
    int64_t v421 = v403;
    int64_t v422 = v405;
    int64_t v423; // 0x410a30
    if (v422 >= 0) {
        int64_t v424 = function_40c930(0x409e7000000000, v422, (int64_t)"check_matching", v365); // 0x41296b
        result4 = v424;
        if ((int32_t)v424 != 0) {
            // 0x412209
            return result4;
        }
        // 0x412978
        v374 = v365;
        v375 = v384;
        v376 = v421;
        v423 = v365;
        if (v421 < 0) {
            goto lab_0x41283d;
        } else {
            goto lab_0x4128db;
        }
    } else {
        // 0x4128cf
        v374 = v404;
        v375 = v384;
        v376 = v421;
        v423 = v404;
        if (v421 < 0) {
            goto lab_0x41283d;
        } else {
            goto lab_0x4128db;
        }
    }
  lab_0x4128db:;
    int64_t v425 = v423; // 0x4128eb
    int64_t v426 = 0; // 0x4128eb
    goto lab_0x412902;
  lab_0x412902:;
    int64_t v427 = v426;
    int64_t v428 = v425;
    int64_t v429 = *(int64_t *)(8 * v427 + 0x61666e5f6b6e696c); // 0x412902
    int64_t v430 = 24 * v429; // 0x412912
    int64_t v431 = *(int64_t *)0x409e7000000038 + v430; // 0x412916
    int64_t v432 = v430; // 0x412929
    int64_t v433; // 0x410a30
    int64_t v434; // 0x410a30
    int64_t v435; // 0x410a30
    if (function_40a120(*(int64_t *)(v431 + 8), v431 + 16, v421) != 0) {
        goto lab_0x4128f0;
    } else {
        int64_t v436 = *(int64_t *)0x409e7000000030 + v430; // 0x41292b
        int64_t v437 = function_40a120(*(int64_t *)(v436 + 8), v436 + 16, v421); // 0x412938
        v432 = v436;
        if (v437 != 0) {
            goto lab_0x4128f0;
        } else {
            int64_t v438 = function_40c930(0x409e7000000000, v429, (int64_t)"check_matching", v365); // 0x412950
            result4 = v438;
            v435 = v365;
            v434 = v427;
            v433 = v436;
            if ((int32_t)v438 != 0) {
                // 0x412209
                return result4;
            }
            goto lab_0x4128f4;
        }
    }
  lab_0x4128f0:
    // 0x4128f0
    v435 = v428;
    v434 = v427 + 1;
    v433 = v432;
    goto lab_0x4128f4;
  lab_0x4128f4:
    // 0x4128f4
    v374 = v435;
    v375 = v384;
    v376 = v433;
    v425 = v435;
    v426 = v434;
    if (v434 > 0x676e69686373) {
        goto lab_0x41283d;
    } else {
        goto lab_0x412902;
    }
  lab_0x411e40:
    // 0x411e40
    *(int64_t *)(v163 + 8) = -1;
    int64_t v439 = v163 + 16; // 0x411e44
    *(int64_t *)v163 = -1;
    v163 = v439;
    int64_t v440; // 0x410a30
    int64_t * v441; // 0x411e61
    if (v166 != v439) {
        goto lab_0x411e40;
    } else {
        // 0x411e51
        v441 = (int64_t *)a8;
        *v441 = 0;
        *(int64_t *)(a8 + 8) = v65;
        v164 = 0;
        if (v11 == 1 | (*v73 & 16) != 0) {
            goto lab_0x411ee2;
        } else {
            // 0x411e92
            v440 = 0;
            if (*v74 % 2 == 0) {
                goto lab_0x411eb2;
            } else {
                int64_t v442 = *v40; // 0x411ea6
                v440 = v442 >= 0 == (v442 != 0);
                goto lab_0x411eb2;
            }
        }
    }
  lab_0x411ee2:;
    int64_t v443 = a8; // 0x411f1d
    int64_t v444 = 0; // 0x411f1d
    int64_t v445 = v164; // 0x411f1d
    goto lab_0x411f23;
  lab_0x411f23:;
    int64_t v446 = v445;
    int64_t v447 = v443;
    int64_t * v448; // 0x410a30
    int64_t v449; // 0x410a30
    int64_t v450; // 0x410a30
    int64_t * v451; // 0x411f29
    int64_t v452; // 0x411f29
    int64_t v453; // 0x41214b
    if (v446 == -1) {
        goto lab_0x411f43;
    } else {
        // 0x411f29
        v451 = (int64_t *)(v447 + 8);
        v452 = *v451;
        char v454; // 0x410a30
        if (v454 != 0) {
            // 0x412146
            v453 = v285;
            if (v285 == v446) {
                goto lab_0x41214f;
            } else {
                // 0x41214b
                v453 = *(int64_t *)(8 * v446 + v1);
                goto lab_0x41214f;
            }
        } else {
            // 0x411f29
            v448 = (int64_t *)v447;
            v449 = v446;
            v450 = v452;
            goto lab_0x411f36;
        }
    }
  lab_0x411f43:;
    int64_t v455 = v444 + 1; // 0x411f43
    if (v455 != v11) {
        int64_t v456 = v447 + 16; // 0x411f47
        v443 = v456;
        v444 = v455;
        v445 = *(int64_t *)v456;
        goto lab_0x411f23;
    } else {
        if (v10 < 1) {
            goto lab_0x411fa8;
        } else {
            // 0x411f5b
            goto lab_0x411f98;
        }
    }
  lab_0x411eb2:;
    int64_t v457 = function_40f250(a1, &v3, v11, a8, v440); // 0x411eca
    v23 = v40;
    v26 = v457;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    if ((int32_t)v457 != 0) {
        goto lab_0x411480_9;
    } else {
        // 0x411ed7
        v164 = *v441;
        goto lab_0x411ee2;
    }
  lab_0x411fa8:;
    int64_t v458 = *(int64_t *)(a1 + 224); // 0x411fb5
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v459; // 0x410a30
    int64_t v460; // 0x411fcd
    int64_t v461; // 0x410a30
    if (v458 == 0) {
        goto lab_0x411480_9;
    } else {
        // 0x411fc5
        v460 = v11 - 1;
        v23 = v40;
        v26 = v162;
        v25 = v41;
        v24 = v42;
        v22 = v64;
        if (v460 != 0) {
            // 0x411fd8
            v461 = a8 + 24;
            v459 = 0;
            goto lab_0x411fd8_2;
        } else {
            goto lab_0x411480_9;
        }
    }
  lab_0x41214f:;
    int64_t v462 = v453;
    int64_t * v463 = (int64_t *)v447;
    *v463 = v462;
    v448 = v463;
    v449 = v462;
    v450 = v285;
    if (v285 == v452) {
        goto lab_0x411f36;
    } else {
        // 0x412157
        v448 = v463;
        v449 = v462;
        v450 = *(int64_t *)(8 * v452 + v1);
        goto lab_0x411f36;
    }
  lab_0x411f36:
    // 0x411f36
    *v448 = v449 + v172;
    *v451 = v450 + v172;
    goto lab_0x411f43;
  lab_0x411f98:
    // 0x411f98
    *(int64_t *)v166 = -1;
    *(int64_t *)(v166 + 8) = -1;
    if (16 * (v11 + v10) + a8 != v166 + 16) {
        goto lab_0x411f98;
    } else {
        goto lab_0x411fa8;
    }
  lab_0x411fd8_2:;
    int64_t v464 = v459;
    int64_t * v465 = (int64_t *)(8 * v464 + v458); // 0x411fd8
    int64_t v466 = *v465; // 0x411fd8
    if (v466 == v464) {
        goto lab_0x412027;
    } else {
        int64_t v467 = 16 * v464; // 0x412000
        *(int64_t *)(v467 + v165) = *(int64_t *)(16 * v466 + v165);
        *(int64_t *)(v467 + v461) = *(int64_t *)(16 * *v465 + v461);
        goto lab_0x412027;
    }
  lab_0x412027:;
    int64_t v468 = v464 + 1; // 0x412027
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    v459 = v468;
    if (v468 != v460) {
        goto lab_0x411fd8_2;
    } else {
        goto lab_0x411480_9;
    }
}
// Address range: 0x4129c0 - 0x412bdd
int64_t function_4129c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 144); // 0x4129d6
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x4129dd
    if (*v1 != 1) {
        int64_t v3 = function_40a0d0(a2, a2); // 0x4129e9
        if ((int32_t)v3 > 1) {
            // 0x412a38
            *(int32_t *)a1 = 1;
            *(int32_t *)(a1 + 8) = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * a2);
            *v2 = (0x100000000 * v3 >> 32) + a2;
            return 0;
        }
    }
    char * v4 = (char *)(a3 + 8); // 0x4129f3
    char v5 = *v4; // 0x4129f3
    int64_t v6 = a2 + (0x100000000 * a4 >> 32); // 0x4129f7
    *v2 = v6;
    int64_t v7; // 0x4129c0
    int64_t v8; // 0x4129c0
    char v9; // 0x4129c0
    int64_t v10; // 0x4129c0
    int64_t v11; // 0x4129c0
    char v12; // 0x4129c0
    int64_t v13; // 0x4129c0
    int64_t v14; // 0x4129c0
    int64_t v15; // 0x4129c0
    int64_t v16; // 0x4129c0
    int64_t * v17; // 0x412a60
    int64_t * v18; // 0x4129c0
    int64_t * v19; // 0x4129c0
    int64_t * v20; // 0x4129c0
    switch (v5) {
        case 30: {
        }
        case 28: {
        }
        case 26: {
            // 0x412a60
            v17 = (int64_t *)(a2 + 104);
            if (v6 >= *v17) {
                // 0x412a28
                return 7;
            }
            // 0x412a6a
            v18 = (int64_t *)(a2 + 40);
            v19 = (int64_t *)(a2 + 8);
            v20 = (int64_t *)(a1 + 8);
            v12 = v5;
            v14 = a2;
            v10 = 0;
            v7 = v6;
            while (true) {
              lab_0x412a92:
                // 0x412a92
                v8 = v7;
                v11 = v10;
                v15 = v14;
                if (v12 == 30) {
                    // 0x412b10
                    if (*(char *)(a2 + 139) == 0) {
                        goto lab_0x412a99;
                    } else {
                        // 0x412b1e
                        if (*(char *)(a2 + 140) == 0) {
                            int64_t v21 = v8 + 1; // 0x412b88
                            *v2 = v21;
                            v13 = v21;
                            v16 = v15;
                            v9 = *(char *)(v8 + v15 + *v18);
                            goto lab_0x412aaa;
                        } else {
                            // 0x412b28
                            if (v8 == *(int64_t *)(a2 + 48)) {
                                goto lab_0x412b3d;
                            } else {
                                // 0x412b2e
                                if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v8) == -1) {
                                    goto lab_0x412a99;
                                } else {
                                    goto lab_0x412b3d;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x412a99;
                }
            }
          lab_0x412a28_3:
            // 0x412a28
            return 0;
        }
    }
    if ((char)a6 == 0 == v5 == 22) {
        // 0x412ba0
        int64_t v22; // bp-56, 0x4129c0
        function_408630(&v22, a2, a5);
        char v23; // 0x4129c0
        if (v23 != 21) {
            // 0x412a28
            return 11;
        }
    }
    // 0x412a19
    *(int32_t *)a1 = 0;
    int64_t v24; // 0x4129c0
    *(char *)(a1 + 8) = *(char *)&v24;
    // 0x412a28
    return 0;
  lab_0x412a99:;
    int64_t v25 = v8 + 1; // 0x412a9d
    *v2 = v25;
    v13 = v25;
    v16 = v15;
    v9 = *(char *)(*v19 + v8);
    goto lab_0x412aaa;
  lab_0x412aaa:;
    uint64_t v26 = v13;
    if (*v17 <= v26) {
        // break -> 0x412a28
        goto lab_0x412a28_3;
    }
    // 0x412ab0
    if (*(char *)&v24 == v9) {
        // 0x412ab5
        if (*(char *)(*v19 + v26) == 93) {
            // 0x412abf
            *v2 = v26 + 1;
            *(char *)(*v20 + (0x100000000 * v11 >> 32)) = 0;
            unsigned char v27 = *v4; // 0x412ad0
            v24 = v27;
            switch (v27) {
                case 28: {
                    // 0x412bd0
                    *(int32_t *)a1 = 2;
                    goto lab_0x412a28_3;
                }
                case 30: {
                    // 0x412bc3
                    *(int32_t *)a1 = 4;
                    goto lab_0x412a28_3;
                }
                default: {
                    // 0x412ae6
                    if (v27 != 26) {
                        goto lab_0x412a28_3;
                    } else {
                        // 0x412af1
                        *(int32_t *)a1 = 3;
                        goto lab_0x412a28_3;
                    }
                }
            }
        }
    }
    // 0x412a78
    *(char *)(*v20 + v11) = v9;
    if (v11 == 31) {
        // break -> 0x412a28
        goto lab_0x412a28_3;
    }
    // 0x412a8a
    v12 = *v4;
    v14 = v16;
    v10 = v11 + 1;
    v7 = *v2;
    goto lab_0x412a92;
  lab_0x412b3d:;
    int64_t v28 = *(int64_t *)(a2 + 24); // 0x412b3d
    char v29 = *(char *)(*(int64_t *)(v28 + 8 * v8) + v15 + *v18); // 0x412b4c
    if (v29 <= -1) {
        goto lab_0x412a99;
    } else {
        int64_t v30 = 1; // 0x412b67
        int64_t v31 = v15; // 0x412b67
        if (*v1 != 1) {
            // 0x412b69
            v30 = 0x100000000 * function_40a0d0(a2, v8) >> 32;
            v31 = v8;
        }
        int64_t v32 = v30 + v8; // 0x412b76
        *v2 = v32;
        v13 = v32;
        v16 = v31;
        v9 = v29;
        goto lab_0x412aaa;
    }
}
// Address range: 0x412be0 - 0x413283
int64_t function_412be0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x412bee
    uint64_t v3 = *v2; // 0x412bee
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x412d08
        *(char *)(v1 + 8) = 2;
        // 0x412d0e
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x412bff
    char * v5 = (char *)(v1 + 10); // 0x412c03
    int32_t v6 = *(int32_t *)(a2 + 144); // 0x412c0b
    int64_t v7 = v4 + v3;
    unsigned char v8 = *(char *)v7; // 0x412c14
    char v9 = *v5 & -97;
    *v5 = v9;
    *(char *)a1 = v8;
    char v10; // 0x412be0
    if (v6 < 2) {
        if (v8 == 92) {
            goto lab_0x412ce0;
        } else {
            // 0x412ca6
            *(char *)(v1 + 8) = 1;
            uint16_t v11 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)*__ctype_b_loc()); // 0x412cbb
            v10 = 64 * ((char)(v11 / 8) % 2 | (char)(v8 == 95)) | v9;
            goto lab_0x412c85;
        }
    } else {
        // 0x412c29
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x412c2f
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                int32_t * v12 = (int32_t *)(v1 + 8); // 0x412d90
                *v12 = *v12 & -0x200100 | 0x200001;
                // 0x412d0e
                return 1;
            }
        }
        if (v8 == 92) {
            goto lab_0x412ce0;
        } else {
            // 0x412c48
            *(char *)(v1 + 8) = 1;
            int32_t wc = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3); // 0x412c55
            v10 = 64 * (char)(wc == 95 | iswalnum(wc) != 0) | *v5 & -65;
            goto lab_0x412c85;
        }
    }
  lab_0x412ce0:;
    uint64_t v13 = v3 + 1;
    if (v13 >= *(int64_t *)(a2 + 88)) {
        // 0x412ceb
        *(char *)(v1 + 8) = 36;
        return 1;
    }
    // 0x412d20
    char v14; // 0x412be0
    int32_t v15; // 0x4131e7
    if (*(char *)(a2 + 139) != 0) {
        if (v6 < 2) {
            goto lab_0x413202;
        } else {
            int64_t v16 = *(int64_t *)(a2 + 16) + 4 * v13;
            v15 = *(int32_t *)v16;
            if (v15 == -1) {
                goto lab_0x41326b;
            } else {
                // 0x4131ef
                if (*(int64_t *)(a2 + 48) == v3 + 2) {
                    goto lab_0x413202;
                } else {
                    // 0x4131fa
                    if (*(int32_t *)(v16 + 4) == -1) {
                        goto lab_0x41326b;
                    } else {
                        goto lab_0x413202;
                    }
                }
            }
        }
    } else {
        // 0x412d2e
        v14 = *(char *)(v4 + v13);
        goto lab_0x412d3b;
    }
  lab_0x412c85:
    // 0x412c85
    *v5 = v10;
    g88 = v8 - 10;
    switch (v8) {
        case 10: {
            // 0x412f18
            if ((a3 & 2048) == 0) {
                // 0x412d0e
                return 1;
            }
            // 0x412f2a
            *(char *)(v1 + 8) = 10;
            // 0x412d0e
            return 1;
        }
        case 36: {
            if ((a3 & 8) != 0) {
                // 0x412f80
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x412d0e
                return 1;
            }
            int64_t v17 = v3 + 1; // 0x412f46
            if (v17 == *(int64_t *)(a2 + 88)) {
                // 0x412f80
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x412d0e
                return 1;
            }
            // 0x412f50
            *v2 = v17;
            int64_t v18; // bp-72, 0x412be0
            function_412be0(&v18, a2, a3);
            *v2 = *v2 - 1;
            char v19; // 0x412be0
            if (v19 < 11) {
                // 0x412f80
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x412d0e
                return 1;
            }
            // break -> 0x412d0e
            break;
        }
        case 40: {
            // 0x412de8
            if ((a3 & 0x2000) == 0) {
                // 0x412d0e
                return 1;
            }
            // 0x412dfa
            *(char *)(v1 + 8) = 8;
            // 0x412d0e
            return 1;
        }
        case 41: {
            // 0x412e08
            if ((a3 & 0x2000) == 0) {
                // 0x412d0e
                return 1;
            }
            // 0x412e1a
            *(char *)(v1 + 8) = 9;
            // 0x412d0e
            return 1;
        }
        case 42: {
            // 0x412e28
            *(char *)(v1 + 8) = 11;
            // 0x412d0e
            return 1;
        }
        case 43: {
            // 0x412e40
            if ((a3 & 1026) != 0) {
                // 0x412d0e
                return 1;
            }
            // 0x412e52
            *(char *)(v1 + 8) = 18;
            // 0x412d0e
            return 1;
        }
        case 46: {
            // 0x412e60
            *(char *)(v1 + 8) = 5;
            // 0x412d0e
            return 1;
        }
        case 63: {
            // 0x412e70
            if ((a3 & 1026) != 0) {
                // 0x412d0e
                return 1;
            }
            // 0x412e82
            *(char *)(v1 + 8) = 19;
            // 0x412d0e
            return 1;
        }
        case 91: {
            // 0x412e90
            *(char *)(v1 + 8) = 20;
            // 0x412d0e
            return 1;
        }
        case 94: {
            if ((a3 & 0x800008) == 0 == (v3 != 0)) {
                // 0x41323a
                if ((a3 & 2048) == 0 | *(char *)(v7 - 1) != 10) {
                    // 0x412d0e
                    return 1;
                }
            }
            // 0x412eb2
            *(char *)(v1 + 8) = 12;
            *(int32_t *)a1 = 16;
            // 0x412d0e
            return 1;
        }
        case 123: {
            // 0x412ed0
            if ((a3 & 0x1200) != 0x1200) {
                // 0x412d0e
                return 1;
            }
            // 0x412ee9
            *(char *)(v1 + 8) = 23;
            // 0x412d0e
            return 1;
        }
        case 124: {
            // 0x412ef8
            if ((a3 & 0x8400) != 0x8000) {
                // 0x412d0e
                return 1;
            }
            // 0x412f2a
            *(char *)(v1 + 8) = 10;
            // 0x412d0e
            return 1;
        }
        case 125: {
            // 0x412f98
            if ((a3 & 0x1200) != 0x1200) {
                // 0x412d0e
                return 1;
            }
            // 0x412fb1
            *(char *)(v1 + 8) = 24;
            // 0x412d0e
            return 1;
        }
    }
    // 0x412d0e
    return 1;
  lab_0x413202:;
    int64_t v20 = *(int64_t *)(a2 + 40); // 0x41320e
    if (*(char *)(a2 + 140) == 0) {
        // 0x413258
        v14 = *(char *)(v20 + a2 + v13);
        goto lab_0x412d3b;
    } else {
        int64_t v21 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v13); // 0x41321b
        char v22 = *(char *)(v20 + a2 + v21); // 0x41321f
        v14 = v22;
        if (v22 > -1) {
            goto lab_0x412d3b;
        } else {
            // 0x412d2e
            v14 = *(char *)(v4 + v13);
            goto lab_0x412d3b;
        }
    }
  lab_0x412d3b:;
    int64_t v23 = v14;
    int32_t v24 = v14;
    *(char *)a1 = v14;
    *(char *)(v1 + 8) = 1;
    int64_t v25; // 0x412be0
    int64_t v26; // 0x412be0
    int32_t wc2; // 0x412be0
    int32_t v27; // 0x412be0
    int32_t v28; // 0x412be0
    char v29; // 0x412be0
    if (v6 < 2) {
        uint16_t v30 = *(int16_t *)(2 * v23 + (int64_t)*__ctype_b_loc()); // 0x412dbc
        char v31 = *v5; // 0x412dd0
        v29 = 64 * ((char)(v30 / 8) % 2 | (char)(v14 == 95)) | v31 & -65;
        v28 = v24;
        v26 = v23;
        goto lab_0x412d73;
    } else {
        // 0x412d47
        v27 = v24;
        wc2 = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v13);
        v25 = v23;
        goto lab_0x412d4e;
    }
  lab_0x41326b:;
    unsigned char v32 = *(char *)(v4 + v13); // 0x41326b
    *(char *)(v1 + 8) = 1;
    *(char *)a1 = v32;
    v27 = v32;
    wc2 = v15;
    v25 = v32;
    goto lab_0x412d4e;
  lab_0x412d4e:;
    int32_t v33 = iswalnum(wc2); // 0x412d50
    v29 = 64 * (char)(wc2 == 95 | v33 != 0) | *v5 & -65;
    v28 = v27;
    v26 = v25;
    goto lab_0x412d73;
  lab_0x412d73:
    // 0x412d73
    *v5 = v29;
    uint64_t v34 = v26 + 0xffffffd9; // 0x412d73
    g89 = v34 % 256;
    switch ((char)v34) {
        case 0: {
            // 0x4131ab
            if ((a3 & 0x80000) == 0) {
                // 0x4131bd
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 128;
            }
            // 0x412d0e
            return 2;
        }
        case 1: {
            // 0x413194
            if ((a3 & 0x2000) != 0) {
                // 0x412d0e
                return 2;
            }
            // 0x412dfa
            *(char *)(v1 + 8) = 8;
            // 0x412d0e
            return 2;
        }
        case 2: {
            // 0x41317d
            if ((a3 & 0x2000) != 0) {
                // 0x412d0e
                return 2;
            }
            // 0x412e1a
            *(char *)(v1 + 8) = 9;
            // 0x412d0e
            return 2;
        }
        case 4: {
            // 0x413162
            if ((a3 & 1026) != 2) {
                // 0x412d0e
                return 2;
            }
            // 0x412e52
            *(char *)(v1 + 8) = 18;
            // 0x412d0e
            return 2;
        }
        case 10: {
        }
        case 11: {
        }
        case 12: {
        }
        case 13: {
        }
        case 14: {
        }
        case 15: {
        }
        case 16: {
        }
        case 17: {
        }
        case 18: {
            // 0x41313a
            if ((a3 & 0x4000) == 0) {
                // 0x41314c
                *(char *)(v1 + 8) = 4;
                *a1 = (int64_t)(v28 - 49);
            }
            // 0x412d0e
            return 2;
        }
        case 21: {
            // 0x413119
            if ((a3 & 0x80000) == 0) {
                // 0x41312b
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 6;
            }
            // 0x412d0e
            return 2;
        }
        case 23: {
            // 0x4130f8
            if ((a3 & 0x80000) == 0) {
                // 0x41310a
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 9;
            }
            // 0x412d0e
            return 2;
        }
        case 24: {
            // 0x4130dd
            if ((a3 & 1026) != 2) {
                // 0x412d0e
                return 2;
            }
            // 0x412e82
            *(char *)(v1 + 8) = 19;
            // 0x412d0e
            return 2;
        }
        case 27: {
            // 0x4130bc
            if ((a3 & 0x80000) == 0) {
                // 0x4130ce
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 512;
            }
            // 0x412d0e
            return 2;
        }
        case 44: {
            // 0x4130a1
            if ((a3 & 0x80000) == 0) {
                // 0x4130b3
                *(char *)(v1 + 8) = 35;
            }
            // 0x412d0e
            return 2;
        }
        case 48: {
            // 0x413086
            if ((a3 & 0x80000) == 0) {
                // 0x413098
                *(char *)(v1 + 8) = 33;
            }
            // 0x412d0e
            return 2;
        }
        case 57: {
            // 0x413065
            if ((a3 & 0x80000) == 0) {
                // 0x413077
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 64;
            }
            // 0x412d0e
            return 2;
        }
        case 59: {
            // 0x413044
            if ((a3 & 0x80000) == 0) {
                // 0x413056
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 256;
            }
            // 0x412d0e
            return 2;
        }
        case 76: {
            // 0x413029
            if ((a3 & 0x80000) == 0) {
                // 0x41303b
                *(char *)(v1 + 8) = 34;
            }
            // 0x412d0e
            return 2;
        }
        case 80: {
            // 0x41300e
            if ((a3 & 0x80000) == 0) {
                // 0x413020
                *(char *)(v1 + 8) = 32;
            }
            // 0x412d0e
            return 2;
        }
        case 84: {
            // 0x412ff0
            if ((a3 & 0x1200) != 512) {
                // 0x412d0e
                return 2;
            }
            // 0x412ee9
            *(char *)(v1 + 8) = 23;
            // 0x412d0e
            return 2;
        }
        case 85: {
            // 0x412fd5
            if ((a3 & 0x8400) == 0) {
                // 0x412fe7
                *(char *)(v1 + 8) = 10;
            }
            // 0x412d0e
            return 2;
        }
        case 86: {
            // 0x412fba
            if ((a3 & 0x1200) != 512) {
                // 0x412d0e
                return 2;
            }
            // 0x412fb1
            *(char *)(v1 + 8) = 24;
            // 0x412d0e
            return 2;
        }
    }
    // 0x412d0e
    return 2;
}
// Address range: 0x413290 - 0x413346
int64_t function_413290(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 72);
    int64_t result2 = -1;
    *v1 = (0x100000000 * function_412be0((int64_t *)a2, a1, a3) >> 32) + *v1;
    char v2 = *(char *)(a2 + 8); // 0x4132c9
    int64_t result = result2; // 0x413290
    switch (v2) {
        case 2: {
            // 0x413327
            return -2;
        }
        case 24: {
            // 0x413327
            return result;
        }
    }
    // 0x4132d6
    int64_t v3; // 0x413290
    unsigned char v4 = (char)v3; // 0x4132be
    while (v4 != 44) {
        int64_t v5 = -2; // 0x4132dd
        if (v2 == 1) {
            // 0x4132e8
            v5 = -2;
            if (result2 != -2 && v4 <= 57) {
                int64_t v6 = v4; // 0x4132be
                if (result2 == -1) {
                    // 0x413338
                    v5 = v6 - 48;
                } else {
                    int64_t v7 = 10 * result2 + v6; // 0x4132ff
                    int64_t v8 = v7 - 0x8030; // 0x413308
                    v5 = v8 < 0 == (0x802f - v7 & v7) < 0 == (v8 != 0) ? 0x8000 : v7 - 48;
                }
            }
        }
        // 0x4132b0
        result2 = v5;
        *v1 = (0x100000000 * function_412be0((int64_t *)a2, a1, a3) >> 32) + *v1;
        v2 = *(char *)(a2 + 8);
        result = result2;
        switch (v2) {
            case 2: {
                // 0x413327
                return -2;
            }
            case 24: {
                // 0x413327
                return result;
            }
        }
        // 0x4132d6
        int64_t v9; // 0x413290
        v4 = *(char *)&v9;
    }
    // 0x413327
    return result2;
}
// Address range: 0x413350 - 0x414834
int64_t function_413350(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x413350
    int128_t v1; // 0x413350
    int128_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a3;
    int64_t v5; // bp-280, 0x413350
    int64_t v6 = &v5; // 0x41335a
    unsigned char v7 = *(char *)(a3 + 8); // 0x413369
    int64_t v8 = v7; // 0x413369
    int64_t v9 = v4; // 0x413375
    v4 = v8;
    g90 = v8;
    int32_t v10 = v7;
    int64_t * v11; // 0x413350
    int32_t v12; // 0x413350
    int64_t v13; // 0x413350
    int64_t v14; // bp-88, 0x413350
    int64_t v15; // 0x413350
    int64_t v16; // 0x4140ab
    char v17; // 0x4140b2
    int64_t * mem2; // 0x413a99
    int64_t v18; // 0x413a99
    int64_t * v19; // 0x413ac0
    char * v20; // 0x413ac7
    switch (v7) {
        case 1: {
            int64_t v21 = a2 + 112; // 0x413c17
            int64_t v22 = a2 + 128; // 0x413c1b
            int64_t v23 = function_40ad90(v21, v22, 0, 0, v9); // 0x413c28
            if (v23 == 0) {
                // 0x413ce1
                *(int32_t *)a6 = 12;
                // 0x4134c8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            // 0x413c3b
            if (*(int32_t *)(a2 + 180) >= 2) {
                int64_t * v24 = (int64_t *)(a1 + 72); // 0x413c58
                int64_t v25 = &v14;
                int64_t v26 = 0x100000000 * v23 >> 32; // 0x413cc5
                uint64_t v27 = *v24; // 0x413c58
                while (*(int64_t *)(a1 + 104) > v27) {
                    // 0x413c66
                    if (v27 == *(int64_t *)(a1 + 48)) {
                        // break -> 0x4133f0
                        break;
                    }
                    // 0x413c70
                    if (*(int32_t *)(*(int64_t *)(a1 + 16) + 4 * v27) != -1) {
                        // break -> 0x4133f0
                        break;
                    }
                    // 0x413c7e
                    *v24 = (0x100000000 * function_412be0((int64_t *)v9, a1, a4) >> 32) + *v24;
                    int64_t v28 = function_40ad90(v21, v22, 0, 0, v9); // 0x413ca1
                    v26 = function_40ad90(v21, v22, (int32_t)v26, (int32_t)v28, v25);
                    if (v28 == 0 || v26 == 0) {
                        // 0x413ce1
                        *(int32_t *)a6 = 12;
                        // 0x4134c8
                        *(int64_t *)(v6 + 24) = 0;
                        // 0x41341a
                        return *(int64_t *)(v6 + 24);
                    }
                    v27 = *v24;
                }
            }
            goto lab_0x4133f0;
        }
        case 4: {
            int64_t v29 = 1 << v10 % 32; // 0x413d01
            if ((*(int64_t *)(a2 + 168) & v29) == 0) {
                // 0x41437c
                *(int32_t *)a6 = 6;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v30 = (int64_t *)(a2 + 160); // 0x413d1c
            *v30 = *v30 | v29;
            if (function_40ad90(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x413ce1
                *(int32_t *)a6 = 12;
                // 0x4134c8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v31 = (int64_t *)(a2 + 152); // 0x413d3d
            *v31 = *v31 + 1;
            char * v32 = (char *)(a2 + 176); // 0x413d45
            *v32 = *v32 | 2;
            goto lab_0x4133f0;
        }
        case 5: {
            // 0x413d51
            if (function_40ad90(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x413ce1
                *(int32_t *)a6 = 12;
                // 0x4134c8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            // 0x413d7b
            if (*(int32_t *)(a2 + 180) >= 2) {
                char * v33 = (char *)(a2 + 176); // 0x413d88
                *v33 = *v33 | 2;
            }
            goto lab_0x4133f0;
        }
        case 8: {
            int64_t * v34 = (int64_t *)(a2 + 48); // 0x413431
            uint64_t v35 = *v34; // 0x413431
            v5 = a5;
            *v34 = v35 + 1;
            int64_t v36 = function_412be0((int64_t *)v9, a1, a4 | 0x800000); // 0x413456
            int64_t * v37 = (int64_t *)(a1 + 72); // 0x41345d
            *v37 = (0x100000000 * v36 >> 32) + *v37;
            char * v38 = (char *)(v9 + 8); // 0x413463
            int64_t v39 = 0; // 0x413469
            if (*v38 != 9) {
                // 0x41346f
                v4 = v9;
                int64_t v40 = function_414980(a1, a2, v9, a4, v5 + 1, a6); // 0x41348b
                if (*(int32_t *)&v3 != 0) {
                    // 0x4134c8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x41341a
                    return *(int64_t *)(v6 + 24);
                }
                // 0x413499
                v39 = v40;
                if (*v38 != 9) {
                    if (v40 != 0) {
                        // 0x4134aa
                        function_4085c0(v40, 0x4097d0, 0);
                    }
                    // 0x4134b9
                    *(int32_t *)a6 = 8;
                  lab_0x4134c8:
                    // 0x4134c8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x41341a
                    return *(int64_t *)(v6 + 24);
                }
            }
            // 0x413ef2
            if (v35 < 9) {
                int32_t v41 = 1 << (int32_t)v35 % 32;
                v4 = v41;
                int64_t * v42 = (int64_t *)(a2 + 168); // 0x413f4a
                *v42 = *v42 | (int64_t)v41;
            }
            int64_t v43 = function_40ad90(a2 + 112, a2 + 128, (int32_t)v39, 0, (int64_t)&v14); // 0x413f1d
            if (v43 == 0) {
                // 0x413ce1
                *(int32_t *)a6 = 12;
                // 0x4134c8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            // 0x413f30
            *(int64_t *)(v43 + 40) = v35;
            goto lab_0x4133f0;
        }
        case 9: {
            if ((a4 & 0x20000) == 0) {
                // 0x413ed9
                *(int32_t *)a6 = 16;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x4133c0;
        }
        case 11: {
            goto lab_0x4133a1;
        }
        case 12: {
            char * v44 = (char *)(a2 + 176); // 0x413da6
            unsigned char v45 = *v44; // 0x413da6
            if ((v45 & 16) != 0) {
                // 0x413e00
            } else {
                int64_t v46 = v45; // 0x413da6
                *v44 = v45 | 16;
                v13 = 0;
                v15 = 0;
                if ((v46 & 8) != 0) {
                    goto lab_0x4145f5;
                } else {
                    // 0x413dc7
                    *(int64_t *)(a2 + 184) = 0x3ff000000000000;
                    *(int64_t *)(a2 + 192) = 0x7fffffe87fffffe;
                    v13 = 128;
                    v15 = 2;
                    if ((v46 & 4) == 0) {
                        goto lab_0x4145f5;
                    } else {
                        // 0x413df1
                        __asm_movups(*(int128_t *)(a2 + 200), __asm_pxor(v2, v2));
                        v12 = *(int32_t *)&v4;
                        goto lab_0x413e00_2;
                    }
                }
            }
        }
        case 18: {
            goto lab_0x4133a1;
        }
        case 19: {
            goto lab_0x4133a1;
        }
        case 20: {
            int64_t * mem = calloc(32, 1); // 0x413a83
            v5 = (int64_t)mem;
            mem2 = calloc(80, 1);
            if (mem == NULL || mem2 == NULL) {
                // 0x414366
                free((int64_t *)v5);
                free(mem2);
                // 0x413ce1
                *(int32_t *)a6 = 12;
                // 0x4134c8
                *(int64_t *)(v6 + 24) = 0;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            // 0x413ab5
            v18 = (int64_t)mem2;
            v19 = (int64_t *)v9;
            int64_t v47 = function_408630(v19, a1, a4); // 0x413ac0
            v20 = (char *)(v9 + 8);
            char v48 = *v20; // 0x413ac7
            v17 = v48;
            v16 = v47;
            switch (v48) {
                case 2: {
                    // 0x41433a
                    *(int32_t *)a6 = 2;
                    v11 = (int64_t *)(v6 + 48);
                    goto lab_0x41400b_3;
                }
                case 25: {
                    char * v49 = (char *)(v18 + 32); // 0x41407e
                    *v49 = *v49 | 1;
                    if ((a4 & 256) != 0) {
                        int64_t * v50 = (int64_t *)v5; // 0x414092
                        *v50 = *v50 | 1024;
                    }
                    int64_t * v51 = (int64_t *)(a1 + 72); // 0x41409c
                    *v51 = *v51 + (0x100000000 * v47 >> 32);
                    v16 = function_408630(v19, a1, a4);
                    v17 = *v20;
                    if (v17 == 2) {
                        // 0x41433a
                        *(int32_t *)a6 = 2;
                        v11 = (int64_t *)(v6 + 48);
                        goto lab_0x41400b_3;
                    } else {
                        goto lab_0x413ae2;
                    }
                }
                default: {
                    goto lab_0x413ae2;
                }
            }
        }
        case 23: {
            if ((a4 & 0x1000000) != 0) {
              lab_0x4136c5:
                // 0x4136c5
                *(int64_t *)(v6 + 24) = 0;
                *(int32_t *)*(int64_t *)(v6 + 48) = 13;
                // 0x41341a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x4133a1;
        }
        case 24: {
            goto lab_0x4133c0;
        }
        case 32: {
            goto lab_0x413b84;
        }
        case 33: {
            goto lab_0x413b84;
        }
        case 34: {
            goto lab_0x413bd0;
        }
        case 35: {
            goto lab_0x413bd0;
        }
        case 36: {
            // 0x413bf2
            *(int32_t *)a6 = 5;
            // 0x41341a
            return *(int64_t *)(v6 + 24);
        }
        default: {
            goto lab_0x4134c8;
        }
    }
  lab_0x4139db:;
    // 0x4139db
    int64_t * v52; // 0x413350
    if (*v52 == 0) {
        goto lab_0x4134c8;
    } else {
        goto lab_0x41377b;
    }
  lab_0x41377b:
    // 0x41377b
    function_4085c0(*v52, 0x4097d0, 0);
    *v52 = 0;
    return *(int64_t *)(v6 + 24);
  lab_0x413872:;
    // 0x413872
    int64_t v53; // 0x413350
    char * v54 = (char *)(v53 + 8);
    char * v55 = v54; // 0x41387b
    int128_t v56; // 0x413350
    int128_t v57 = v56; // 0x41387b
    int64_t * v58; // 0x4133f0
    int64_t * v59; // 0x413350
    if ((*v58 & 0x200000) == 0) {
        // 0x41434a
        if (*v54 != 2) {
            // 0x4139d0
            *(int32_t *)*v59 = 10;
            goto lab_0x4139db;
        } else {
            // 0x414356
            *(int32_t *)*v59 = 9;
            goto lab_0x4139db;
        }
    }
    goto lab_0x413881;
  lab_0x413994:;
    // 0x413994
    int64_t v83; // 0x413350
    int64_t v336 = v83; // 0x413996
    int64_t v337 = v336 - 0x7fff; // 0x413996
    int64_t v84; // 0x413350
    int64_t v316 = v84; // 0x4139a4
    if (v337 < 0 == (0x7ffe - v336 & v336) < 0 == (v337 != 0)) {
        // 0x4139a6
        *(int32_t *)*v59 = 15;
        goto lab_0x4139db;
    }
    goto lab_0x413939;
  lab_0x4138d9:;
    int64_t v338 = *v58; // 0x4138d9
    v4 = v338;
    int128_t v80; // 0x413845
    int128_t * v78; // 0x413350
    *v78 = (int128_t)__asm_movaps(v80);
    int64_t v66; // 0x413350
    int64_t v339 = function_413290(v66, v53, v338); // 0x4138e9
    v5 = v339;
    v56 = __asm_movdqa(*v78);
    int64_t v81; // 0x413350
    if (v339 == -2) {
        goto lab_0x413872;
    } else {
        int64_t v340 = v81;
        if (v339 != -1 == v339 < v340) {
            // 0x4139d0
            *(int32_t *)*v59 = 10;
            goto lab_0x4139db;
        }
        // 0x413915
        if (*(char *)(v53 + 8) != 24) {
            // 0x4139d0
            *(int32_t *)*v59 = 10;
            goto lab_0x4139db;
        }
        // 0x413921
        v83 = v339;
        v84 = v340;
        if (v339 != -1) {
            goto lab_0x413994;
        } else {
            int64_t v341 = v340 - 0x7fff; // 0x41392a
            v316 = v340;
            if (v341 < 0 == (0x7ffe - v340 & v340) < 0 == (v341 != 0)) {
                // 0x4139a6
                *(int32_t *)*v59 = 15;
                goto lab_0x4139db;
            }
            goto lab_0x413939;
        }
    }
  lab_0x413881:;
    // 0x413881
    int64_t * v60; // 0x4134f6
    int64_t v61; // 0x4134f6
    *v60 = v61;
    int128_t * v62; // 0x4134fa
    *v62 = (int128_t)__asm_movaps(v57);
    *v55 = 1;
    int64_t v63 = *v52; // 0x413895
    int64_t v64 = v53; // 0x413895
    int64_t v65 = v66; // 0x413895
    goto lab_0x41366e;
  lab_0x4138a0:
    // 0x4138a0
    if (*(int32_t *)*v59 != 0) {
        // 0x4134c8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4138af;
  lab_0x413939:;
    int64_t v315 = v316;
    int64_t v317 = *v58; // 0x413939
    v4 = v317;
    int64_t v318 = function_412be0((int64_t *)v53, v66, v317); // 0x413944
    int64_t v319 = *v52; // 0x413949
    *v60 = *v60 + (0x100000000 * v318 >> 32);
    int64_t v127; // 0x413350
    int64_t v99; // 0x413350
    int64_t v132; // 0x413350
    int64_t v128; // 0x413350
    int64_t v101; // 0x413350
    int64_t v135; // 0x413350
    int64_t v102; // 0x413350
    int64_t v103; // 0x413350
    int64_t v136; // 0x413350
    int64_t v129; // 0x413350
    int64_t v134; // 0x413350
    int64_t v100; // 0x413350
    int64_t v133; // 0x413350
    int64_t * v89; // 0x413350
    int64_t * v110; // 0x413350
    int64_t * v118; // 0x413350
    int64_t v114; // 0x413350
    char * v108; // 0x413350
    if (v319 == 0) {
        goto lab_0x4138a0;
    } else {
        int64_t v320 = v5; // 0x41395d
        if ((v320 || v315) != 0) {
            if (v315 < 1) {
                // 0x414828
                v4 = 0;
                v132 = 0;
                v133 = v315;
                v134 = *v52;
                v135 = v53;
                v136 = v66;
                goto lab_0x413a52;
            } else {
                int64_t v321; // 0x413350
                int64_t v322; // 0x413350
                int64_t v323; // 0x413350
                int64_t v324; // 0x413350
                int64_t v325; // 0x413350
                if (v315 == 1) {
                    int64_t v326 = *v52; // 0x4147f7
                    v321 = v320;
                    v322 = v53;
                    v323 = v326;
                    v324 = v66;
                    v325 = v326;
                } else {
                    int64_t v327 = *v110; // 0x4136f3
                    int64_t v328 = *v52; // 0x4136f8
                    *v89 = v66;
                    *v118 = v53;
                    int64_t v329 = v327 + 112; // 0x41370f
                    int64_t v330 = v327 + 128; // 0x413713
                    int64_t v331 = 2; // 0x41371d
                    int64_t v332 = function_40ae70(v328, *v110); // 0x41373a
                    v4 = v328;
                    *v108 = 16;
                    int64_t v333 = function_40ad90(v329, v330, (int32_t)v328, (int32_t)v332, v114); // 0x41375e
                    if (v332 == 0 || v333 == 0) {
                        // 0x413770
                        *(int32_t *)*v59 = 12;
                        goto lab_0x41377b;
                    }
                    // 0x413725
                    v331++;
                    int64_t v334 = v333; // 0x41372c
                    int64_t v335 = v332; // 0x41372c
                    while (v315 >= v331) {
                        // 0x413732
                        v332 = function_40ae70(v335, *v110);
                        v4 = v334;
                        *v108 = 16;
                        v333 = function_40ad90(v329, v330, (int32_t)v334, (int32_t)v332, v114);
                        if (v332 == 0 || v333 == 0) {
                            // 0x413770
                            *(int32_t *)*v59 = 12;
                            goto lab_0x41377b;
                        }
                        // 0x413725
                        v331++;
                        v334 = v333;
                        v335 = v332;
                    }
                    // 0x4139f0
                    v321 = v5;
                    v322 = *v118;
                    v323 = v332;
                    v324 = *v89;
                    v325 = v333;
                }
                // 0x413a03
                v4 = v325;
                v127 = v325;
                v128 = v322;
                v129 = v324;
                v99 = v325;
                v100 = v315;
                v101 = v322;
                v102 = v323;
                v103 = v324;
                if (v315 != v321) {
                    goto lab_0x413a2f;
                } else {
                    goto lab_0x413a10;
                }
            }
        } else {
            // 0x41396a
            v4 = 0;
            function_4085c0(v319, 0x4097d0, 0);
            if (*(int32_t *)*v59 != 0) {
                goto lab_0x41377b;
            }
            goto lab_0x4138af;
        }
    }
  lab_0x41366e:;
    uint32_t v67 = *(int32_t *)*v59; // 0x413673
    v4 = v67;
    if (v63 == 0 == (v67 != 0)) {
        goto lab_0x4139db;
    }
    // 0x413682
    *v52 = v63;
    int64_t v68 = v63; // 0x413682
    int64_t v69 = v64; // 0x413682
    int64_t v70 = v65; // 0x413682
    goto lab_0x413687;
  lab_0x4138af:
    // 0x4138af
    *v52 = 0;
    v68 = 0;
    v69 = v53;
    v70 = v66;
    goto lab_0x413687;
  lab_0x413808:;
    // 0x413808
    int64_t v96; // 0x413350
    int64_t v104 = v96;
    function_4085c0(v104, 0x408760, (int32_t)*(int64_t *)(v104 + 40));
    goto lab_0x413819;
  lab_0x41356a:;
    // 0x41356a
    int64_t v94; // 0x413350
    int64_t v105 = v94;
    int64_t v93; // 0x413350
    int64_t v106 = v93;
    int64_t v92; // 0x413350
    int64_t v107 = v92;
    char v90; // 0x413350
    *v108 = v90;
    int64_t v109 = *v110; // 0x413571
    int64_t v111 = v109 + 112; // 0x413583
    int64_t v112 = v109 + 128; // 0x413587
    int64_t v113 = function_40ad90(v111, v112, (int32_t)v107, 0, v114); // 0x413594
    v4 = v113;
    if (v113 == 0) {
        // 0x413770
        *(int32_t *)*v59 = 12;
        goto lab_0x41377b;
    }
    // 0x4135a5
    int64_t v91; // 0x413350
    int64_t v115 = v91 + 2; // 0x4135a5
    int64_t v116 = v113; // 0x4135ad
    int64_t v117 = v106; // 0x4135ad
    if (v115 <= v5) {
        // 0x4135b3
        *v118 = v106;
        int64_t v119 = v115; // 0x4135bb
        int64_t v120 = v107; // 0x4135bb
        v120 = function_40ae70(v120, *v110);
        v4 = v113;
        *v108 = 16;
        int64_t v121 = function_40ad90(v111, v112, (int32_t)v113, (int32_t)v120, v114); // 0x4135ea
        if (v120 == 0 || v121 == 0) {
            // 0x413770
            *(int32_t *)*v59 = 12;
            goto lab_0x41377b;
        }
        // 0x413601
        v4 = v121;
        *v108 = 10;
        int64_t v122 = function_40ad90(v111, v112, (int32_t)v121, 0, v114); // 0x41361c
        if (v122 == 0) {
            // 0x413770
            *(int32_t *)*v59 = 12;
            goto lab_0x41377b;
        }
        // 0x41362d
        v119++;
        int64_t v123 = v122; // 0x413635
        while (v119 <= v5) {
            // 0x4135be
            v120 = function_40ae70(v120, *v110);
            v4 = v123;
            *v108 = 16;
            v121 = function_40ad90(v111, v112, (int32_t)v123, (int32_t)v120, v114);
            if (v120 == 0 || v121 == 0) {
                // 0x413770
                *(int32_t *)*v59 = 12;
                goto lab_0x41377b;
            }
            // 0x413601
            v4 = v121;
            *v108 = 10;
            v122 = function_40ad90(v111, v112, (int32_t)v121, 0, v114);
            if (v122 == 0) {
                // 0x413770
                *(int32_t *)*v59 = 12;
                goto lab_0x41377b;
            }
            // 0x41362d
            v119++;
            v123 = v122;
        }
        // 0x413637
        v4 = v122;
        v116 = v122;
        v117 = *v118;
    }
    int64_t v124 = v117;
    int64_t v125 = v116; // 0x41364d
    int64_t v126 = *v89; // 0x41363f
    v127 = v125;
    v128 = v124;
    v129 = v105;
    if (v126 == 0) {
        goto lab_0x413a10;
    } else {
        // 0x41364d
        *v108 = 16;
        v63 = function_40ad90(v111, v112, (int32_t)v126, (int32_t)v125, v114);
        v64 = v124;
        v65 = v105;
        goto lab_0x41366e;
    }
  lab_0x413687:;
    unsigned char v71 = *(char *)(v69 + 8); // 0x413687
    if ((*v58 & 0x1000000) != 0) {
        if (v71 != 11 != v71 != 23) {
            // 0x4136ac
            if (v68 == 0) {
                goto lab_0x4136c5;
            } else {
                // 0x4136b6
                function_4085c0(v68, 0x4097d0, 0);
                goto lab_0x4136c5;
            }
        }
    }
    char v72 = v71; // 0x413414
    int64_t v73 = v70; // 0x413414
    int64_t v74 = v69; // 0x413414
    if (v71 >= 24) {
        // break -> 0x41341a
        goto lab_0x41341a_2;
    }
    goto lab_0x4134e0;
  lab_0x413819:
    // 0x413819
    v90 = v5 == -1 ? 11 : 10;
    int64_t v95; // 0x413350
    v91 = v95;
    v92 = v104;
    int64_t v97; // 0x413350
    v93 = v97;
    int64_t v98; // 0x413350
    v94 = v98;
    goto lab_0x41356a;
  lab_0x413a10:
    // 0x413a10
    *v52 = v127;
    v68 = v127;
    v69 = v128;
    v70 = v129;
    goto lab_0x413687;
  lab_0x413a2f:
    // 0x413a2f
    *v89 = v99;
    int64_t v130 = function_40ae70(v102, *v110); // 0x413a3c
    int64_t v131 = *v89; // 0x413a41
    v4 = v131;
    v132 = v131;
    v133 = v100;
    v134 = v130;
    v135 = v101;
    v136 = v103;
    if (v130 == 0) {
        // 0x413770
        *(int32_t *)*v59 = 12;
        goto lab_0x41377b;
    }
    goto lab_0x413a52;
  lab_0x413a52:
    // 0x413a52
    *v89 = v132;
    v95 = v133;
    v96 = v134;
    v97 = v135;
    v98 = v136;
    if (*(char *)(v134 + 48) != 17) {
        goto lab_0x413819;
    } else {
        goto lab_0x413808;
    }
  lab_0x41464a:;
    // 0x41464a
    uint64_t v137; // 0x413350
    int64_t v138 = 1 << v137;
    v4 = v138;
    int64_t * v139; // 0x413350
    *v139 = *v139 | v138;
    goto lab_0x414638;
  lab_0x414638:;
    int64_t v140 = v137 + 1; // 0x414640
    if (v137 == 63) {
        // break -> 0x414659
        goto lab_0x414659;
    }
    goto lab_0x414642;
  lab_0x41400b_3:
    // 0x41400b
    free((int64_t *)v5);
    function_409780(v18);
    if (*(int32_t *)*v11 != 0) {
        // 0x4134c8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    // 0x41402d
    *(int64_t *)(v6 + 24) = 0;
    goto lab_0x4133f0;
  lab_0x4144ae:;
    // 0x4144ae
    int64_t * v177; // 0x413350
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x4146b6_3:
    // 0x4146b6
    *(int32_t *)*v177 = 11;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x4145b5_5:
    // 0x4145b5
    *(int32_t *)*v177 = 3;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x413b74:;
    // 0x413b74
    int64_t v188; // 0x413b49
    int64_t v254 = v188 & 0xffffffff; // 0x413b4e
    int64_t v234; // 0x413350
    int64_t v255; // 0x413350
    int64_t v235; // 0x413350
    int64_t * v152; // 0x413b24
    int32_t * v168; // 0x413350
    int64_t v178; // 0x413350
    int64_t * v179; // 0x413350
    int64_t * v180; // 0x413350
    int64_t * v181; // 0x413350
    int64_t * v182; // 0x413350
    int64_t v148; // 0x413af3
    int64_t * v149; // 0x413b0e
    int64_t v151; // 0x413b24
    switch (g91) {
        case 0: {
            unsigned char v256 = *(char *)v151; // 0x413fb1
            unsigned char v257 = v256 % 64;
            int64_t v258 = v257 == 0 ? 1 : 1 << (int64_t)v257;
            v4 = v258;
            int64_t * v259 = (int64_t *)(v148 + (int64_t)(v256 / 8 & 24)); // 0x413fc8
            *v259 = v258 | *v259;
            v255 = v254;
            goto lab_0x413f6f;
        }
        case 1: {
            int64_t v260 = *v181; // 0x413f8d
            v4 = v260;
            int64_t v261 = *mem2; // 0x413f91
            int64_t v262 = v260; // 0x413f9a
            int64_t v263 = v261; // 0x413f9a
            if (v260 == *v182) {
                int64_t v264 = 2 * v260 | 1; // 0x4143b6
                *v182 = v264;
                int64_t * mem3 = realloc((int64_t *)v261, 4 * (int32_t)v264); // 0x4143c8
                if (mem3 == NULL) {
                    goto lab_0x4144ae;
                }
                // 0x4143d6
                v263 = (int64_t)mem3;
                *mem2 = v263;
                v262 = *v181;
                v4 = v262;
            }
            // 0x413fa0
            *v181 = v262 + 1;
            *(int32_t *)(4 * v4 + v263) = *v168;
            v255 = v254;
            goto lab_0x413f6f;
        }
        case 2: {
            int32_t v265 = function_40d960(v148, *v152); // 0x413f65
            *(int32_t *)*v177 = v265;
            v255 = v254;
            v11 = v177;
            if (v265 != 0) {
                goto lab_0x41400b_3;
            }
            goto lab_0x413f6f;
        }
        case 3: {
            int32_t v266 = function_40d960(v148, *v152); // 0x41404d
            *(int32_t *)*v177 = v266;
            v255 = v254;
            v11 = v177;
            if (v266 != 0) {
                goto lab_0x41400b_3;
            }
            goto lab_0x413f6f;
        }
        case 4: {
            int64_t v267 = *(int64_t *)(a1 + 120); // 0x413fd3
            *v179 = *v149;
            int64_t v268 = function_40d9b0(v267, v148, v18 + 24, v178, v180, *v152, (int64_t)&g84); // 0x413ff3
            int32_t v269 = v268; // 0x413ffd
            *(int32_t *)*v177 = v269;
            v3 = *v179;
            v255 = v254;
            v11 = v177;
            if (v269 != 0) {
                goto lab_0x41400b_3;
            }
            goto lab_0x413f6f;
        }
        default: {
            // 0x4147b4
            __assert_fail("0", "lib/regcomp.c", 3315, "parse_bracket_exp");
            v234 = &g84;
            v235 = (int64_t)"parse_bracket_exp";
            goto lab_0x4147cd_3;
        }
    }
  lab_0x4140d5:
    // 0x4140d5
    *(int32_t *)*v177 = 7;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x413f6f:;
    int64_t v270 = v255;
    int64_t v183 = v270; // 0x413350
    int64_t v184 = 0; // 0x413350
    int64_t * v156; // 0x413350
    int64_t * v163; // 0x413350
    switch (*v20) {
        case 2: {
            goto lab_0x4140d5;
        }
        case 21: {
            // 0x4143e3
            *v156 = *v156 + (0x100000000 * v270 >> 32);
            if (*(char *)(v6 + 56) != 0) {
                // 0x4143f1
                v4 = v5 + 32;
                int64_t v271 = v5; // 0x4143f8
                int64_t * v272 = (int64_t *)v271; // 0x4143fc
                *v272 = -1 - *v272;
                v271 += 8;
                while (v4 != v271) {
                    // 0x4143fc
                    v272 = (int64_t *)v271;
                    *v272 = -1 - *v272;
                    v271 += 8;
                }
            }
            uint32_t v273 = *(int32_t *)(*v163 + 180); // 0x41440d
            v4 = v273;
            if (v273 >= 2) {
                int64_t v274 = 0;
                int64_t * v275 = (int64_t *)(v274 + v5); // 0x41442b
                *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                int64_t v276 = v274 + 8; // 0x414437
                while (v274 != 24) {
                    // 0x414427
                    v274 = v276;
                    v275 = (int64_t *)(v274 + v5);
                    *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                    v276 = v274 + 8;
                }
            }
            // 0x414439
            if (*v181 != 0) {
                goto lab_0x4144be;
            } else {
                // 0x414440
                if (*(int64_t *)(v18 + 48) != 0) {
                    goto lab_0x4144be;
                } else {
                    // 0x414447
                    if (*(int64_t *)(v18 + 56) != 0) {
                        goto lab_0x4144be;
                    } else {
                        // 0x41444e
                        if (*(int64_t *)(v18 + 64) != 0) {
                            goto lab_0x4144be;
                        } else {
                            int64_t v277 = v4; // 0x414455
                            v4 = v277 + 0xffffffff & 0xffffffff;
                            if ((int32_t)v277 < 2) {
                                goto lab_0x414468;
                            } else {
                                // 0x41445a
                                if (*(int64_t *)v178 != 0) {
                                    goto lab_0x4144be;
                                } else {
                                    // 0x414461
                                    if (*(char *)(v18 + 32) % 2 != 0) {
                                        goto lab_0x4144be;
                                    } else {
                                        goto lab_0x414468;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x413b0e;
        }
    }
  lab_0x41424f:;
    // 0x41424f
    int64_t v203; // 0x413350
    int64_t v278 = (int64_t)*(char *)v203;
    int64_t v220 = v278; // 0x414251
    int64_t v216; // 0x413350
    char v218; // 0x413350
    int64_t v217; // 0x413350
    int64_t v219; // 0x413350
    int64_t * v162; // 0x413350
    int32_t v197; // 0x414216
    if (v197 == 0) {
        goto lab_0x4146a9;
    } else {
        // 0x414257
        v218 = 0;
        v219 = v278;
        if (v197 != 3) {
            goto lab_0x41426a;
        } else {
            int64_t v279 = *v162; // 0x41425e
            v3 = v279;
            v216 = v279;
            v217 = v278;
            goto lab_0x414266;
        }
    }
  lab_0x4146a9:;
    // 0x4146a9
    int64_t v161; // 0x413350
    v218 = *(char *)v161;
    v219 = v220;
    goto lab_0x41426a;
  lab_0x414266:
    // 0x414266
    v218 = *(char *)v216;
    v219 = v217;
    goto lab_0x41426a;
  lab_0x41426a:;
    int64_t v280 = v219;
    unsigned char v281 = v218;
    int64_t v282; // 0x413350
    int64_t v283; // 0x413350
    int32_t v284; // 0x413350
    char * v165; // 0x413350
    int32_t v195; // 0x4141ed
    if (v195 == 0) {
        goto lab_0x414674;
    } else {
        // 0x414273
        v283 = v281;
        v284 = v197;
        v282 = (int64_t)*v168;
        if (*v165 != 0) {
            goto lab_0x414674;
        } else {
            goto lab_0x414283;
        }
    }
  lab_0x414674:;
    // 0x414674
    int32_t * v170; // 0x413350
    *v170 = (int32_t)v281;
    int64_t * v171; // 0x413350
    *v171 = v4;
    int64_t v285 = function_408d40(v280, v4); // 0x414680
    v4 = *v171;
    v283 = (int64_t)*v170;
    int32_t * v160; // 0x413350
    v284 = *v160;
    v282 = v285 & 0xffffffff;
    goto lab_0x414283;
  lab_0x414283:;
    int64_t v286 = v282;
    int32_t v287 = v284;
    int64_t v288 = v283;
    int64_t v289; // 0x413350
    int64_t v290; // 0x413350
    if (v287 == 0) {
        goto lab_0x4145c5;
    } else {
        int64_t v291 = (int64_t)*(int32_t *)v161; // 0x41428b
        v3 = v291;
        v289 = v291;
        v290 = v286;
        if (v287 == 3) {
            goto lab_0x4145c5;
        } else {
            goto lab_0x41429c;
        }
    }
  lab_0x4145c5:
    // 0x4145c5
    *v170 = (int32_t)v286;
    *v171 = v4;
    int64_t v292 = function_408d40(v288, v4); // 0x4145d4
    v4 = *v171;
    int64_t v293 = v292 & 0xffffffff; // 0x4145e3
    v3 = v293;
    v289 = v293;
    v290 = (int64_t)*v170;
    goto lab_0x41429c;
  lab_0x41429c:;
    int32_t v294 = v290;
    if (v294 == -1) {
        goto lab_0x4145b5_5;
    }
    uint32_t v295 = (int32_t)v289; // 0x4142a6
    if (v295 == -1) {
        goto lab_0x4145b5_5;
    }
    // 0x4142b0
    if (v294 > v295 == ((*v149 & 0x10000) != 0)) {
        goto lab_0x4146b6_3;
    }
    int64_t v296 = v4; // 0x4142c4
    int32_t v297 = v294; // 0x4142c7
    int64_t * v172; // 0x413350
    int32_t * v173; // 0x413350
    int32_t * v174; // 0x413350
    int64_t * v175; // 0x413350
    int64_t * v176; // 0x413350
    if (v296 != 0) {
        int64_t v298 = *(int64_t *)(v296 + 64); // 0x4142c9
        int64_t v299 = *(int64_t *)(v296 + 8); // 0x4142cd
        int32_t v300 = v294; // 0x4142d6
        int64_t v301 = v298; // 0x4142d6
        int64_t v302 = v299; // 0x4142d6
        if (v298 == *v172) {
            // 0x414732
            *v173 = v295;
            *v174 = v294;
            *v171 = v4;
            int64_t v303 = 2 * v298 | 1; // 0x41474c
            int64_t v304 = 4 * v303; // 0x414750
            *v172 = v303;
            *v175 = v304;
            *v176 = (int64_t)realloc((int64_t *)v299, (int32_t)v304);
            int64_t * mem4 = realloc((int64_t *)*(int64_t *)(*v171 + 16), (int32_t)*v175); // 0x414780
            int64_t v305 = *v176; // 0x414785
            if (v305 == 0) {
                // 0x4147cd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4147cd_3;
            }
            int64_t v306 = *v171; // 0x414792
            v4 = v306;
            v300 = *v174;
            v3 = (int64_t)*v173;
            if (mem4 == NULL) {
                // 0x4147cd
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x4147cd_3;
            }
            // 0x4147a3
            *(int64_t *)(v306 + 16) = (int64_t)mem4;
            v301 = *(int64_t *)(v4 + 64);
            *(int64_t *)(v4 + 8) = v305;
            v302 = v305;
        }
        int64_t v307 = 4 * v301; // 0x4142dc
        *(int32_t *)(v302 + v307) = v300;
        *(int64_t *)(v4 + 64) = v301 + 1;
        *(int32_t *)(*(int64_t *)(v4 + 16) + v307) = (int32_t)v3;
        v297 = v300;
    }
    int64_t v308 = 0;
    uint32_t v309 = (int32_t)v308; // 0x414302
    int64_t v310; // 0x414312
    int64_t * v311; // 0x414319
    if (v297 <= v309) {
        // 0x414307
        if ((int32_t)v3 >= v309) {
            // 0x41430c
            v310 = v308 >> 6;
            v4 = v310;
            v311 = (int64_t *)(8 * v310 + v148);
            *v311 = *v311 | 1 << v308 % 64;
        }
    }
    int64_t v312 = v308 + 1; // 0x414328
    while (v308 != 255) {
        // 0x414300
        v308 = v312;
        v309 = (int32_t)v308;
        if (v297 <= v309) {
            // 0x414307
            if ((int32_t)v3 >= v309) {
                // 0x41430c
                v310 = v308 >> 6;
                v4 = v310;
                v311 = (int64_t *)(8 * v310 + v148);
                *v311 = *v311 | 1 << v308 % 64;
            }
        }
        // 0x41431e
        v312 = v308 + 1;
    }
    // 0x41432a
    *(int32_t *)*v177 = 0;
    int64_t v194; // 0x4141e8
    v255 = v194 & 0xffffffff;
    goto lab_0x413f6f;
  lab_0x4133a1:
    if ((a4 & 32) != 0) {
        // 0x4136c5
        *(int64_t *)(v6 + 24) = 0;
        *(int32_t *)*(int64_t *)(v6 + 48) = 13;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    if ((a4 & 16) != 0) {
        // 0x4140e5
        v5 = a5;
        int64_t v313 = function_412be0((int64_t *)v9, a1, a4); // 0x4140f5
        int64_t * v314 = (int64_t *)(a1 + 72); // 0x414107
        *v314 = (0x100000000 * v313 >> 32) + *v314;
        function_413350(a1, a2, v9, a4, v5, a6);
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4133c0;
  lab_0x4133c0:
    // 0x4133c0
    *(char *)(v9 + 8) = 1;
    if (function_40ad90(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
        // 0x413ce1
        *(int32_t *)a6 = 12;
        // 0x4134c8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4133f0;
  lab_0x413b84:;
    int64_t v223 = &g3; // 0x413ba0
    int64_t v222 = (int64_t)"alnum"; // 0x413ba0
    bool v224 = v7 == 33; // 0x413ba0
    goto lab_0x413ba4;
  lab_0x413bd0:
    // 0x413bd0
    v223 = (int64_t)&g13;
    v222 = (int64_t)"space";
    v224 = v7 == 35;
    goto lab_0x413ba4;
  lab_0x4133f0:
    // 0x4133f0
    v58 = (int64_t *)(v6 + 8);
    int64_t v144 = function_412be0((int64_t *)v9, a1, *v58); // 0x4133fb
    unsigned char v145 = *(char *)(v9 + 8); // 0x413400
    int64_t * v146 = (int64_t *)(a1 + 72); // 0x413408
    *v146 = *v146 + (0x100000000 * v144 >> 32);
    if (v145 >= 24) {
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    // 0x4134e0
    v52 = (int64_t *)(v6 + 24);
    int64_t v147 = v6 + 32;
    v89 = (int64_t *)v147;
    v78 = (int128_t *)v147;
    v59 = (int64_t *)(v6 + 48);
    v110 = (int64_t *)(v6 + 16);
    v118 = (int64_t *)(v6 + 56);
    v114 = v6 + 192;
    v108 = (char *)(v6 + 200);
    v72 = v145;
    v73 = a1;
    v74 = v9;
    while (true) {
      lab_0x4134e0:;
        unsigned char v75 = v72;
        if ((1 << (int64_t)(v75 % 64) & 0x8c0800) == 0) {
            // break -> 0x41341a
            break;
        }
        // 0x4134f6
        v53 = v74;
        v66 = v73;
        v60 = (int64_t *)(v66 + 72);
        v61 = *v60;
        v62 = (int128_t *)v53;
        int128_t v76 = __asm_movdqa(*v62); // 0x4134fa
        if (v75 == 23) {
            int64_t v77 = *v58; // 0x413830
            v4 = v77;
            *v78 = (int128_t)__asm_movaps(v76);
            int64_t v79 = function_413290(v66, v53, v77); // 0x413840
            v80 = __asm_movdqa(*v78);
            v5 = v79;
            v56 = v80;
            switch (v79) {
                case -1: {
                    // 0x4138c0
                    if (*(char *)(v53 + 8) != 1) {
                        // 0x4139d0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4139db;
                    }
                    // 0x4138cc
                    v81 = 0;
                    if (*(char *)v53 != 44) {
                        // 0x4139d0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x4139db;
                    }
                    goto lab_0x4138d9;
                }
                case -2: {
                    goto lab_0x413872;
                }
                default: {
                    char * v82 = (char *)(v53 + 8);
                    v56 = v80;
                    v83 = v79;
                    v84 = v79;
                    switch (*v82) {
                        case 24: {
                            goto lab_0x413994;
                        }
                        case 1: {
                            // 0x4139b3
                            v81 = v79;
                            if (*(char *)v53 == 44) {
                                goto lab_0x4138d9;
                            } else {
                                // 0x4139be
                                v55 = v82;
                                v57 = v80;
                                if ((*v58 & 0x200000) == 0) {
                                    // 0x4139d0
                                    *(int32_t *)*v59 = 10;
                                    goto lab_0x4139db;
                                }
                                goto lab_0x413881;
                            }
                        }
                        default: {
                            goto lab_0x413872;
                        }
                    }
                }
            }
        } else {
            int64_t v85 = *v58;
            v4 = v85;
            int64_t v86 = function_412be0((int64_t *)v53, v66, v85);
            *v60 = (0x100000000 * v86 >> 32) + *v60;
            int64_t v87 = *v52;
            if (v75 == 19) {
                if (v87 == 0) {
                    goto lab_0x4138a0;
                } else {
                    int64_t v88 = v75 == 18; // 0x4134e9
                    v5 = 1;
                    *v89 = 0;
                    v90 = 10;
                    v91 = v88;
                    v92 = v87;
                    v93 = v53;
                    v94 = v66;
                    v95 = v88;
                    v96 = v87;
                    v97 = v53;
                    v98 = v66;
                    if (*(char *)(v87 + 48) == 17) {
                        goto lab_0x413808;
                    } else {
                        goto lab_0x41356a;
                    }
                }
            } else {
                if (v87 == 0) {
                    goto lab_0x4138a0;
                } else {
                    if (v75 == 18) {
                        // 0x413a1a
                        v5 = -1;
                        v4 = v87;
                        v99 = v87;
                        v100 = 1;
                        v101 = v53;
                        v102 = v87;
                        v103 = v66;
                        goto lab_0x413a2f;
                    } else {
                        // 0x413543
                        v5 = -1;
                        if (*(char *)(v87 + 48) == 17) {
                            // 0x4137f0
                            *v89 = 0;
                            v95 = 0;
                            v96 = *v52;
                            v97 = v53;
                            v98 = v66;
                            goto lab_0x413808;
                        } else {
                            // 0x413552
                            *v89 = 0;
                            v90 = 11;
                            v91 = 0;
                            v92 = v87;
                            v93 = v53;
                            v94 = v66;
                            goto lab_0x41356a;
                        }
                    }
                }
            }
        }
    }
    // 0x41341a
    return *(int64_t *)(v6 + 24);
  lab_0x413ae2:
    // 0x413ae2
    if (v17 == 21) {
        // 0x4140ca
        *v20 = 1;
    }
    // 0x413aea
    v148 = v5;
    v149 = (int64_t *)(v6 + 8);
    int64_t v150 = v6 + 112; // 0x413b1f
    v151 = v6 + 120;
    v152 = (int64_t *)v151;
    int64_t v153; // bp-120, 0x413350
    int64_t v154 = &v153;
    int32_t * v155 = (int32_t *)v150; // 0x413b29
    v156 = (int64_t *)(a1 + 72);
    int64_t v157 = v6 + 144;
    int64_t v158 = v6 + 192;
    int64_t v159 = v6 + 128;
    v160 = (int32_t *)v159;
    v161 = v6 + 136;
    v162 = (int64_t *)v161;
    v163 = (int64_t *)(v6 + 16);
    int64_t v164 = v6 + 64;
    v165 = (char *)v164;
    bool v166; // 0x413350
    int64_t v167 = v166 ? -1 : 1;
    v168 = (int32_t *)v151;
    int64_t v169 = v6 + 72;
    v170 = (int32_t *)v169;
    v171 = (int64_t *)v164;
    v172 = (int64_t *)(v6 + 32);
    v173 = (int32_t *)(v6 + 92);
    v174 = (int32_t *)(v6 + 88);
    v175 = (int64_t *)(v6 + 80);
    v176 = (int64_t *)v169;
    v177 = (int64_t *)(v6 + 48);
    v178 = v18 + 72;
    v179 = (int64_t *)(v6 - 16);
    v180 = (int64_t *)(v6 + 104);
    v181 = (int64_t *)(v18 + 40);
    v182 = (int64_t *)(v6 + 24);
    v183 = v16 & 0xffffffff;
    v184 = 1;
    int32_t v185; // 0x413350
    while (true) {
      lab_0x413b0e:
        // 0x413b0e
        v3 = v184;
        int64_t v186 = *v149; // 0x413b0e
        v3 = v184;
        *v152 = v154;
        *v155 = 3;
        int32_t v187 = function_4129c0(v150, a1, v9, v183, v186, (int32_t)v184);
        v185 = v187;
        if (v187 != 0) {
            // break -> 0x414124
            break;
        }
        // 0x413b3e
        g91 = v6 - 8;
        v188 = function_408630(v19, a1, *v149);
        if ((*v155 - 2 & -3) == 0) {
            goto lab_0x413b74;
        } else {
            unsigned char v189 = *v20; // 0x413b5c
            v4 = v189;
            switch (v189) {
                case 2: {
                    goto lab_0x4140d5;
                }
                case 22: {
                    int64_t v190 = 0x100000000 * v188;
                    *v156 = *v156 + (v190 >> 32);
                    int64_t v191 = *v149; // 0x41416b
                    int64_t v192 = function_408630((int64_t *)v157, a1, v191); // 0x41417b
                    unsigned char v193 = *(char *)(v6 + 152); // 0x414180
                    v4 = v193;
                    switch (v193) {
                        case 2: {
                            goto lab_0x4140d5;
                        }
                        case 21: {
                            // 0x414395
                            *v156 = *v156 + (-v190 >> 32);
                            *v20 = 1;
                            goto lab_0x413b74;
                        }
                        default: {
                            // 0x41419a
                            *v160 = 3;
                            *v162 = v158;
                            if ((int32_t)function_4129c0(v159, a1, v157, v192 & 0xffffffff, v191, 1) != 0) {
                                // break -> 0x414124
                                break;
                            }
                            // 0x4141dd
                            v194 = function_408630(v19, a1, *v149);
                            v195 = *v155;
                            int32_t v196 = *(int32_t *)(*v163 + 180); // 0x4141fe
                            v4 = v196 < 2 == (1 - v196 & v196) < 0 ? v18 : 0;
                            if ((v195 - 2 & -3) == 0) {
                                goto lab_0x4146b6_3;
                            }
                            // 0x414216
                            v197 = *v160;
                            if ((v197 - 2 & -3) == 0) {
                                goto lab_0x4146b6_3;
                            }
                            // 0x414229
                            *v165 = (char)(v195 == 3);
                            if (v195 == 3) {
                                int64_t v198 = *v152; // 0x4146fd
                                int64_t v199 = -1; // 0x41470e
                                int64_t v200 = v198; // 0x41470e
                                int64_t v201; // 0x413350
                                while (v199 != 0) {
                                    int64_t v202 = v200;
                                    v199--;
                                    v200 = v202 + v167;
                                    v201 = v199;
                                    if (*(char *)v202 == 0) {
                                        // break -> 
                                        break;
                                    }
                                }
                                if (-v201 >= 4) {
                                    goto lab_0x4145b5_5;
                                }
                                // 0x414720
                                v203 = v198;
                                if (v197 == 3) {
                                    // 0x414591
                                    int64_t v204; // 0x413350
                                    while (v204 != 0) {
                                        int64_t v205; // 0x413350
                                        int64_t v206 = v205;
                                        char v207 = *(char *)v206; // 0x41459f
                                        int64_t v208; // 0x413350
                                        int64_t v209 = v208 - 1; // 0x41459f
                                        v204 = v209;
                                        v205 = v206 + v167;
                                        int64_t v210 = v209; // 0x41459f
                                        if (v207 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v208 = v204;
                                        v210 = 0;
                                    }
                                    v203 = v198;
                                }
                                goto lab_0x41424f;
                            } else {
                                if (v197 == 3) {
                                    int64_t v211 = *v162; // 0x4146c6
                                    v3 = v211;
                                    int64_t v212 = v211; // 0x4146d7
                                    int64_t v213 = -1; // 0x4146d7
                                    int64_t v214 = 0; // 0x4146d7
                                    while (v213 != 0) {
                                        int64_t v215 = v212;
                                        v213--;
                                        v212 = v215 + v167;
                                        v214 = v213;
                                        if (*(char *)v215 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v214 = 0;
                                    }
                                    if (-v214 >= 4) {
                                        goto lab_0x4145b5_5;
                                    }
                                    // 0x4146ed
                                    v203 = v151;
                                    v216 = v211;
                                    v217 = 0;
                                    if (v195 != 0) {
                                        goto lab_0x414266;
                                    } else {
                                        goto lab_0x41424f;
                                    }
                                } else {
                                    // 0x414241
                                    v203 = v151;
                                    if (v195 != 0) {
                                        // 0x41469d
                                        v218 = 0;
                                        v219 = 0;
                                        v220 = 0;
                                        if (v197 != 0) {
                                            goto lab_0x41426a;
                                        } else {
                                            goto lab_0x4146a9;
                                        }
                                    } else {
                                        goto lab_0x41424f;
                                    }
                                }
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x413b74;
                }
            }
        }
    }
    // 0x414124
    *(int32_t *)*v177 = v185;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x413ba4:;
    int64_t v221 = *(int64_t *)(a1 + 120);
    v4 = v222;
    v3 = a6;
    if (!(((int32_t)a6 == 0 | function_40e180(a2, v221, (char *)v222, (int64_t *)v223, (int64_t)v224, a6) != 0))) {
        // 0x4134c8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4133f0;
  lab_0x414059:;
    // 0x414059
    int64_t v225; // 0x413e05
    int64_t v226; // 0x413e09
    if (function_40ad90(v225, v226, 0, 0, v9) == 0) {
        // 0x413ce1
        *(int32_t *)a6 = 12;
        // 0x4134c8
        *(int64_t *)(v6 + 24) = 0;
        // 0x41341a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x413eaf;
  lab_0x4145f5:;
    int16_t * v250 = *__ctype_b_loc(); // 0x414609
    v3 = (v13 | 256) - 64 * v15;
    int64_t v251 = v13; // 0x41461f
    int64_t v252 = 8 * v15 + a2; // 0x41461f
    int64_t v141 = 2 * v13 + (int64_t)v250; // 0x41461f
    while (true) {
        int64_t v143 = v251;
        v139 = (int64_t *)(v252 + 184);
        v140 = 0;
        while (true) {
          lab_0x414642:
            // 0x414642
            v137 = v140;
            if ((*(char *)(2 * v137 + v141) & 8) == 0) {
                int64_t v142 = v137 + v143; // 0x414630
                v4 = v142 & 0xffffffff;
                if ((int32_t)v142 == 95) {
                    goto lab_0x41464a;
                } else {
                    goto lab_0x414638;
                }
            } else {
                goto lab_0x41464a;
            }
        }
      lab_0x414659:;
        int64_t v253 = v143 + 64; // 0x414659
        v12 = v10;
        v251 = v253 & 0xffffffff;
        v252 += 8;
        v141 += 128;
        if ((int32_t)v3 == (int32_t)v253) {
            // break -> 0x413e00
            break;
        }
    }
    goto lab_0x413e00_2;
  lab_0x413eaf:;
    int64_t v227 = function_412be0((int64_t *)v9, a1, a4); // 0x413eba
    int64_t * v228 = (int64_t *)(a1 + 72); // 0x413ec1
    *v228 = (0x100000000 * v227 >> 32) + *v228;
    // 0x41341a
    return *(int64_t *)(v6 + 24);
  lab_0x413e00_2:;
    int32_t v229 = v12;
    v225 = a2 + 112;
    v226 = a2 + 128;
    if ((v229 - 256 & -257) != 0) {
        goto lab_0x414059;
    } else {
        int32_t * v230 = (int32_t *)v9;
        int64_t v231; // 0x413350
        if (v229 == 256) {
            // 0x41413a
            *v230 = 6;
            v4 = 0;
            v231 = function_40ad90(v225, v226, 0, 0, v9);
        } else {
            // 0x413e2f
            *v230 = 5;
            v4 = 0;
            v231 = function_40ad90(v225, v226, 0, 0, v9);
        }
        // 0x413e54
        *v230 = 10;
        int64_t v232 = function_40ad90(v225, v226, 0, 0, v9); // 0x413e61
        int64_t v233 = function_40ad90(v225, v226, (int32_t)v231, (int32_t)v232, (int64_t)&v14); // 0x413e85
        if (v233 == 0 || v231 == 0 || v232 == 0) {
            // 0x413ce1
            *(int32_t *)a6 = 12;
            // 0x4134c8
            *(int64_t *)(v6 + 24) = 0;
            // 0x41341a
            return *(int64_t *)(v6 + 24);
        }
        goto lab_0x413eaf;
    }
  lab_0x4147cd_3:
    // 0x4147cd
    *v182 = v234;
    free((int64_t *)v235);
    free((int64_t *)*v182);
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x41400b_3;
  lab_0x4144be:;
    int64_t v236 = *v163; // 0x4144be
    char * v237 = (char *)(v236 + 176); // 0x4144ca
    *v237 = *v237 | 2;
    int64_t v238 = v236 + 112; // 0x4144d1
    int64_t v239 = v236 + 128; // 0x4144d5
    char * v240 = (char *)(v6 + 168); // 0x4144e2
    *v240 = 6;
    int64_t * v241 = (int64_t *)(v6 + 160); // 0x4144ea
    *v241 = v18;
    int64_t v242 = function_40ad90(v238, v239, 0, 0, v154); // 0x4144f2
    *v182 = v242;
    int64_t v243 = v5 + 32; // 0x414503
    v4 = v243;
    int64_t v244 = v5; // 0x41450d
    if (v242 == 0) {
        goto lab_0x4144ae;
    } else {
        while (*(int64_t *)v244 == 0) {
            int64_t v245 = v244 + 8; // 0x414515
            v244 = v245;
            if (v243 == v245) {
                // 0x41451e
                free((int64_t *)v5);
                goto lab_0x4133f0;
            }
        }
        // 0x41452c
        *v240 = 3;
        *v241 = v5;
        int64_t v246 = function_40ad90(v238, v239, 0, 0, v154); // 0x41454d
        if (v246 == 0) {
            goto lab_0x4144ae;
        } else {
            // 0x41455b
            *(char *)(v6 + 200) = 10;
            int64_t v247 = function_40ad90(v238, v239, (int32_t)v246, (int32_t)*v182, v158); // 0x414579
            *v182 = v247;
            if (v247 != 0) {
                goto lab_0x4133f0;
            } else {
                goto lab_0x4144ae;
            }
        }
    }
  lab_0x414468:
    // 0x414468
    function_409780(v18);
    *(char *)(v6 + 168) = 3;
    *(int64_t *)(v6 + 160) = v5;
    int64_t v248 = *v163; // 0x41448b
    int64_t v249 = function_40ad90(v248 + 112, v248 + 128, 0, 0, v154); // 0x41449b
    *v182 = v249;
    if (v249 != 0) {
        goto lab_0x4133f0;
    } else {
        goto lab_0x4144ae;
    }
}
// Address range: 0x414840 - 0x41497e
int64_t function_414840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_413350(a1, a2, a3, a4, a5, a6); // 0x41486a
    int64_t v1; // 0x414840
    if ((int32_t)v1 != 0 == result == 0) {
        // 0x414915
        return 0;
    }
    char * v2 = (char *)(a3 + 8); // 0x414888
    char v3 = *v2; // 0x414888
    if ((v3 & -9) == 2) {
        // 0x414915
        return result;
    }
    // 0x414896
    int64_t v4; // bp-72, 0x414840
    int64_t v5 = &v4;
    int64_t v6 = result;
    int64_t result2 = v6; // 0x414898
    if (a5 != 0 == v3 == 9) {
        return result2;
    }
    int64_t v7 = function_413350(a1, a2, a3, a4, a5, a6); // 0x4148b3
    int32_t v8 = v7;
    if (v7 == 0 == (v8 != 0)) {
        // 0x41493c
        result2 = 0;
        if (v6 == 0) {
            return result2;
        } else {
            // 0x414941
            function_4085c0(v6, 0x4097d0, 0);
            result2 = 0;
            return result2;
        }
    }
    int64_t v9; // 0x4148f5
    char v10; // 0x414907
    while (v6 != 0 && v7 != 0) {
        // 0x4148d0
        v9 = function_40ad90(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
        if (v9 == 0) {
            // 0x414955
            function_4085c0(v7, 0x4097d0, 0);
            function_4085c0(v6, 0x4097d0, 0);
            *(int32_t *)a6 = 12;
            result2 = 0;
            return result2;
        }
        // 0x414904
        v10 = *v2;
        result2 = v9;
        if ((v10 & -9) == 2) {
            return result2;
        }
        v6 = v9;
        result2 = v6;
        if (a5 != 0 == v10 == 9) {
            return result2;
        }
        // 0x41489f
        v7 = function_413350(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41493c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x414941
                function_4085c0(v6, 0x4097d0, 0);
                result2 = 0;
                return result2;
            }
        }
    }
    int64_t v11 = v6 == 0 ? v7 : v6; // 0x414933
    char v12 = *v2; // 0x414888
    result2 = v11;
    while ((v12 & -9) != 2) {
        // 0x414896
        v6 = v11;
        result2 = v6;
        if (a5 != 0 == v12 == 9) {
            return result2;
        }
        // 0x41489f
        v7 = function_413350(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x41493c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x414941
                function_4085c0(v6, 0x4097d0, 0);
                result2 = 0;
                return result2;
            }
        }
        while (v6 != 0 && v7 != 0) {
            // 0x4148d0
            v9 = function_40ad90(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
            if (v9 == 0) {
                // 0x414955
                function_4085c0(v7, 0x4097d0, 0);
                function_4085c0(v6, 0x4097d0, 0);
                *(int32_t *)a6 = 12;
                result2 = 0;
                return result2;
            }
            // 0x414904
            v10 = *v2;
            result2 = v9;
            if ((v10 & -9) == 2) {
                return result2;
            }
            v6 = v9;
            result2 = v6;
            if (a5 != 0 == v10 == 9) {
                return result2;
            }
            // 0x41489f
            v7 = function_413350(a1, a2, a3, a4, a5, a6);
            v8 = v7;
            if (v7 == 0 == (v8 != 0)) {
                // 0x41493c
                result2 = 0;
                if (v6 == 0) {
                    return result2;
                } else {
                    // 0x414941
                    function_4085c0(v6, 0x4097d0, 0);
                    result2 = 0;
                    return result2;
                }
            }
        }
        // 0x414930
        v11 = v6 == 0 ? v7 : v6;
        v12 = *v2;
        result2 = v11;
    }
  lab_0x414915_2:
    // 0x414915
    return result2;
}
// Address range: 0x414980 - 0x414ad1
int64_t function_414980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 + 168); // 0x4149a2
    int64_t v2 = function_414840(a1, a2, a3, a4, a5, a6); // 0x4149b2
    int64_t v3; // 0x414980
    if ((int32_t)v3 != 0 && v2 == 0) {
        // 0x4149d1
        return 0;
    }
    char * v4 = (char *)(a3 + 8); // 0x414a69
    int64_t * v5 = (int64_t *)(a1 + 72);
    int64_t v6 = a2 + 112;
    int64_t v7; // bp-72, 0x414980
    int64_t v8 = &v7;
    int64_t v9 = v2;
    int64_t result = v9; // 0x414a6d
    while (*v4 == 10) {
        // 0x414a73
        *v5 = (0x100000000 * function_412be0((int64_t *)a3, a1, a4 | 0x800000) >> 32) + *v5;
        char v10 = *v4; // 0x414a8f
        int64_t v11 = 0; // 0x414a9b
        if ((v10 & -9) != 2 && a5 != 0 != (v10 == 9)) {
            // 0x4149f7
            v11 = function_414840(a1, a2, a3, a4, a5, a6);
            int64_t v12; // 0x414980
            if (v11 == 0 == (*(int32_t *)&v12 != 0)) {
                // 0x414ab4
                result = 0;
                if (v9 == 0) {
                    return result;
                } else {
                    // 0x414abd
                    function_4085c0(v9, 0x4097d0, 0);
                    result = 0;
                    return result;
                }
            }
        }
        int64_t v13 = function_40ad90(v6, a2 + 128, (int32_t)v9, (int32_t)v11, v8); // 0x414a5c
        if (v13 == 0) {
            // 0x414aa8
            *(int32_t *)a6 = 12;
            result = 0;
            return result;
        }
        v9 = v13;
        result = v9;
    }
  lab_0x4149d1:
    // 0x4149d1
    return result;
}
// Address range: 0x414ae0 - 0x41588a
int64_t function_414ae0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x414ae0
    int128_t v1; // 0x414ae0
    int128_t v2 = v1;
    int64_t v3; // 0x414ae0
    int64_t v4 = v3;
    char * v5 = (char *)(a1 + 56); // 0x414afd
    *v5 = *v5 & -112;
    int64_t v6 = a1 + 8;
    int64_t * v7 = (int64_t *)v6; // 0x414b01
    int32_t result = 0; // bp-268, 0x414b09
    *(int64_t *)(a1 + 24) = a4;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x414b18
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 48); // 0x414b20
    *v9 = 0;
    int64_t v10 = v6; // 0x414b28
    int64_t v11 = a1; // 0x414b28
    if (*v7 < 232) {
        int64_t * v12 = (int64_t *)a1; // 0x415668
        int64_t * mem = realloc(v12, 232); // 0x415668
        if (mem == NULL) {
            // 0x41542b
            return 12;
        }
        // 0x415679
        v11 = (int64_t)mem;
        *v7 = 232;
        *v12 = v11;
        v10 = v11 + 8;
    }
    // 0x414b2e
    *v8 = 232;
    int64_t v13 = v10 & -8; // 0x414b3f
    int64_t * v14 = (int64_t *)v11; // 0x414b43
    *v14 = 0;
    *(int64_t *)(v11 + 224) = 0;
    __asm_rep_stosq_memset((char *)v13, 0, (v11 + 232 - v13) / 8 % 0x20000000);
    *(int32_t *)(v11 + 128) = 15;
    int64_t v15; // 0x414ae0
    int64_t v16; // 0x414ae0
    uint64_t v17; // 0x414ae0
    int64_t v18; // 0x414ae0
    int64_t v19; // 0x414ae0
    int64_t v20; // 0x414b81
    int64_t * v21; // 0x414bcd
    int32_t * v22; // 0x414bdb
    char * v23; // 0x414c38
    if (a3 < 0x555555555555555) {
        // 0x414b81
        v20 = a3 + 1;
        *(int64_t *)v10 = v20;
        *v14 = (int64_t)malloc(16 * (int32_t)v20);
        int64_t size = 1; // 0x414ba1
        int64_t v24 = 0; // 0x414ba1
        if (a3 != 0) {
            int64_t v25 = 2; // 0x414bb0
            int64_t v26 = v25; // 0x414bb6
            while (v25 <= a3) {
                // 0x414bb0
                v25 = 2 * v26;
                v26 = v25;
            }
            // 0x414bb8
            size = v25;
            v24 = v25 - 1;
        }
        int64_t * mem2 = calloc(24, (int32_t)size); // 0x414bc1
        *(int64_t *)(v11 + 136) = v24;
        v21 = (int64_t *)(v11 + 64);
        *v21 = (int64_t)mem2;
        int32_t v27 = __ctype_get_mb_cur_max(); // 0x414bd1
        v22 = (int32_t *)(v11 + 180);
        *v22 = v27;
        char * v28 = nl_langinfo(14); // 0x414be1
        if ((*v28 & -33) == 85) {
            int64_t v29 = (int64_t)v28; // 0x414be1
            if ((*(char *)(v29 + 1) & -33) == 84) {
                // 0x414bfd
                if ((*(char *)(v29 + 2) & -33) == 70) {
                    int64_t v30 = v29 + 3; // 0x414c0b
                    bool v31; // 0x414ae0
                    int64_t v32 = v31 ? -1 : 1; // 0x414c21
                    int64_t v33 = (int64_t)&g14; // 0x414ae0
                    int64_t v34 = v30 + (int64_t)(*(char *)v30 == 45); // 0x414ae0
                    int64_t v35 = 2; // 0x414c21
                    unsigned char v36 = *(char *)v34; // 0x414c21
                    char v37 = *(char *)v33; // 0x414c21
                    char v38 = v37; // 0x414c21
                    bool v39 = false; // 0x414c21
                    while (v36 == v37) {
                        v35--;
                        v33 += v32;
                        v34 += v32;
                        v38 = v36;
                        v39 = true;
                        if (v35 == 0) {
                            // break -> 
                            break;
                        }
                        v36 = *(char *)v34;
                        v37 = *(char *)v33;
                        v38 = v37;
                        v39 = false;
                    }
                    unsigned char v40 = v38;
                    if ((v36 >= v40 && !v39) == v36 < v40) {
                        char * v41 = (char *)(v11 + 176); // 0x414c2c
                        *v41 = *v41 | 4;
                    }
                }
            }
        }
        // 0x414c38
        v23 = (char *)(v11 + 176);
        char v42 = *v23; // 0x414c38
        *v23 = v42 & -9;
        if (*v22 < 2) {
            goto lab_0x414c63;
        } else {
            if ((v42 & 4) == 0) {
                int64_t * mem3 = calloc(32, 1); // 0x4154da
                int64_t * v43 = (int64_t *)(v11 + 120); // 0x4154df
                *v43 = (int64_t)mem3;
                int64_t v44 = 0; // 0x4154e6
                if (mem3 == NULL) {
                    // 0x4154c0
                    result = 12;
                    goto lab_0x41549e;
                } else {
                    while (true) {
                        int64_t v45 = v44;
                        v16 = 0;
                        v18 = 8 * v45;
                        while (true) {
                          lab_0x415516_2:
                            // 0x415516
                            v19 = v18;
                            v17 = v16;
                            int32_t wc = v19; // 0x415516
                            int32_t v46 = btowc(wc); // 0x41551f
                            int64_t v47 = v19 & 0xffffff80; // 0x41552d
                            if (v46 == -1) {
                                if (v47 != 0) {
                                    goto lab_0x41550b;
                                } else {
                                    // 0x415504
                                    *v23 = *v23 | 8;
                                    goto lab_0x41550b;
                                }
                            } else {
                                int64_t * v48 = (int64_t *)(*v43 + v45); // 0x415545
                                *v48 = *v48 | 1 << v17 % 64;
                                if (v47 != 0) {
                                    goto lab_0x41550b;
                                } else {
                                    if (v46 != wc) {
                                        // 0x415504
                                        *v23 = *v23 | 8;
                                        goto lab_0x41550b;
                                    } else {
                                        int64_t v49 = v17 + 1; // 0x415550
                                        v15 = v49;
                                        if ((int32_t)v49 == 64) {
                                            // break -> 0x415560
                                            break;
                                        }
                                        goto lab_0x415516;
                                    }
                                }
                            }
                        }
                      lab_0x415560:
                        // 0x415560
                        v44 = v45 + 8;
                        if (v45 == 24) {
                            // break -> 0x414c63
                            break;
                        }
                    }
                    goto lab_0x414c63;
                }
            } else {
                // 0x414c5b
                *(int64_t *)(v11 + 120) = (int64_t)&g15;
                goto lab_0x414c63;
            }
        }
    } else {
        // 0x4154c0
        result = 12;
        goto lab_0x41549e;
    }
  lab_0x41550b:;
    int64_t v50 = v17 + 1; // 0x41550b
    v15 = v50;
    if ((int32_t)v50 == 64) {
        // break -> 0x415560
        goto lab_0x415560;
    }
    goto lab_0x415516;
  lab_0x415516:
    // 0x415516
    v16 = v15 & 0xffffffff;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x415516_2;
  lab_0x415720_2:
    // 0x415720
    result = 0;
    int64_t v51; // 0x414ae0
    int64_t v52 = v51; // 0x415728
    int64_t v53 = v51; // 0x415728
    goto lab_0x414e29;
  lab_0x415010:;
    // 0x415010
    int64_t * v83; // 0x414ae0
    int64_t v91 = *v83; // 0x415010
    int64_t v92 = function_4085c0(v91, 0x40b140, (int32_t)a1); // 0x41501c
    int64_t v93 = v92; // 0x415023
    int64_t v94 = v91; // 0x415023
    int64_t v95; // 0x414ae0
    int64_t v73; // 0x414ae0
    int64_t v96; // bp-232, 0x414ae0
    int64_t v68; // bp-248, 0x414ae0
    int64_t * v80; // 0x414f67
    int64_t * v97; // 0x414ae0
    if ((int32_t)v92 != 0) {
        goto lab_0x415238_2;
    } else {
        int64_t v98 = *v83; // 0x415029
        int64_t v99 = function_4085c0(v98, 0x40d670, (int32_t)v73); // 0x415035
        v93 = v99;
        v94 = v98;
        if ((int32_t)v99 != 0) {
            goto lab_0x415238_2;
        } else {
            // 0x415042
            function_40a600(*v83, 0x40a350, v73);
            int64_t v100 = *v83; // 0x415053
            int64_t v101 = function_40a600(v100, 0x409e50, v73); // 0x41505f
            v93 = v101;
            v94 = v100;
            if ((int32_t)v101 != 0) {
                goto lab_0x415238_2;
            } else {
                // 0x415078
                v97 = (int64_t *)(v73 + 16);
                int64_t v102 = 0; // 0x414ae0
                int64_t v103 = 0; // 0x414ae0
                int64_t v104; // 0x414ae0
                while (true) {
                    int64_t v105 = *v97; // 0x415078
                    int64_t v106 = v105; // 0x41507c
                    int64_t v107 = v102; // 0x41507c
                    int64_t v108 = v103; // 0x41507c
                    int64_t v109 = v103; // 0x41507c
                    int64_t v110 = v102; // 0x41507c
                    v104 = v103;
                    int64_t v111; // 0x414ae0
                    if (v105 == v103) {
                      lab_0x41509c:
                        // 0x41509c
                        v111 = v109;
                        if ((char)v110 == 0) {
                            // break -> 0x415130
                            break;
                        }
                      lab_0x4150a5:
                        // 0x4150a5
                        v106 = v111;
                        v107 = 0;
                        v108 = 0;
                    }
                    int64_t v112 = v107;
                    int64_t v113 = v106; // 0x415096
                    int64_t v114 = v108;
                    int64_t v115; // 0x415092
                    while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                        // 0x415092
                        v115 = v114 + 1;
                        v109 = v113;
                        v110 = v112;
                        v104 = v115;
                        if (v113 == v115) {
                            goto lab_0x41509c;
                        }
                        v114 = v115;
                    }
                    int64_t v116 = function_40a830((int128_t *)&v68, v73, v114, 1); // 0x4150c3
                    if ((int32_t)v116 != 0) {
                        // 0x415238
                        v93 = v116;
                        v94 = &v68;
                        goto lab_0x415238_2;
                    }
                    int64_t v117 = v114 + 1; // 0x4150d9
                    v102 = v112;
                    v103 = v117;
                    while (*(int64_t *)((0x1800000000 * v114 >> 32) + 8 + *v80) == 0) {
                        // 0x4150e5
                        free((int64_t *)v96);
                        int64_t v118 = *v97; // 0x4150f5
                        v111 = v118;
                        if (v118 == v117) {
                            goto lab_0x4150a5;
                        }
                        v112 = 1;
                        v113 = v118;
                        v114 = v117;
                        while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                            // 0x415092
                            v115 = v114 + 1;
                            v109 = v113;
                            v110 = v112;
                            v104 = v115;
                            if (v113 == v115) {
                                goto lab_0x41509c;
                            }
                            v114 = v115;
                        }
                        // 0x4150b0
                        v116 = function_40a830((int128_t *)&v68, v73, v114, 1);
                        if ((int32_t)v116 != 0) {
                            // 0x415238
                            v93 = v116;
                            v94 = &v68;
                            goto lab_0x415238_2;
                        }
                        // 0x4150d0
                        v117 = v114 + 1;
                        v102 = v112;
                        v103 = v117;
                    }
                }
                // 0x415130
                v95 = v104;
                if ((*v5 & 16) != 0) {
                    goto lab_0x415248;
                } else {
                    // 0x41513a
                    if (*v9 == 0) {
                        goto lab_0x415248;
                    } else {
                        // 0x415145
                        if (*(char *)(v73 + 176) % 2 == 0) {
                            goto lab_0x415248;
                        } else {
                            goto lab_0x415153;
                        }
                    }
                }
            }
        }
    }
  lab_0x415238_2:
    // 0x415238
    result = v93;
    int64_t v67 = v94; // 0x415240
    goto lab_0x415448;
  lab_0x4152d8:;
    // 0x4152d8
    int64_t v140; // 0x414ae0
    int64_t v141 = v140 + 1; // 0x4152d8
    uint64_t v78; // 0x414ae0
    if (v78 <= v141) {
        // break -> 0x415380
        goto lab_0x415380;
    }
    int64_t v142 = v141; // 0x414ae0
    goto lab_0x4152e5_2;
  lab_0x414c63:;
    // 0x414c63
    int64_t v129; // bp-208, 0x414ae0
    int64_t v124; // bp-216, 0x414ae0
    int64_t * v158; // 0x414c84
    int64_t v128; // 0x414c84
    if (*v14 == 0) {
        // 0x4154c0
        result = 12;
        goto lab_0x41549e;
    } else {
        // 0x414c6d
        if (*v21 == 0) {
            // 0x4154c0
            result = 12;
            goto lab_0x41549e;
        } else {
            // 0x414c78
            v158 = (int64_t *)(a1 + 40);
            v128 = *v158;
            result = 0;
            __asm_rep_stosq_memset((char *)&v129, 0, 18);
            v124 = a2;
            if (a3 != 0) {
                int64_t v159 = &v124; // 0x415105
                int64_t v160 = function_408a00(v159, v20); // 0x41510a
                v93 = v160;
                v94 = v159;
                if ((int32_t)v160 != 0) {
                    goto lab_0x415238_2;
                } else {
                    // 0x415117
                    goto lab_0x414d22;
                }
            } else {
                goto lab_0x414d22;
            }
        }
    }
  lab_0x41549e:
    // 0x41549e
    function_40d700(v11);
    *(int64_t *)a1 = 0;
    *v7 = 0;
    // 0x41542b
    return result;
  lab_0x414d22:;
    int64_t v125 = a4 & 0x400000; // 0x414ca7
    int32_t v126 = *v22;
    int64_t v127 = (v128 | v125) == 0 ? a2 : v129;
    v129 = v127;
    if (v125 == 0) {
        if (v126 > 1) {
            int64_t v130 = &v124;
            function_408df0(v130);
            result = 0;
            v52 = v130;
            v53 = v130;
        } else {
            if ((v128 || v125) != 0) {
                int64_t v131 = a3 - v4; // 0x414db6
                int64_t v132 = v131 == 0 | v131 < 0 != ((v131 ^ a3) & (v4 ^ a3)) < 0 ? a3 : v4; // 0x414dc6
                if (v132 > v3) {
                    unsigned char v133 = *(char *)(2 * v3 + v124); // 0x414dfd
                    *(char *)(v127 + v3) = *(char *)(v128 + (int64_t)v133);
                    int64_t v134 = v3 + 1; // 0x414e08
                    int64_t v135 = v134; // 0x414e0f
                    if (v132 != v134) {
                        unsigned char v136 = *(char *)(v135 + v3 + v124); // 0x414dfd
                        *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                        int64_t v137 = v135 + 1; // 0x414e08
                        v135 = v137;
                        while (v132 != v137) {
                            // 0x414de0
                            v136 = *(char *)(v135 + v3 + v124);
                            *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                            v137 = v135 + 1;
                            v135 = v137;
                        }
                    }
                }
            }
            // 0x414e11
            result = 0;
            v52 = &v124;
            v53 = v126;
        }
        goto lab_0x414e29;
    } else {
        // 0x414d38
        v51 = &v124;
        if (v126 < 2) {
            // 0x415648
            function_408d70(v51);
            result = 0;
            v52 = v51;
            v53 = v51;
            goto lab_0x414e29;
        } else {
            int64_t v138 = function_408fa0(v51); // 0x414d46
            v93 = v138;
            v94 = v51;
            // 0x414d41
            while ((int32_t)v138 == 0) {
                if (v3 >= a3) {
                    goto lab_0x415720_2;
                }
                // 0x414d61
                if (v4 > v3 + (int64_t)*v22) {
                    goto lab_0x415720_2;
                }
                int64_t v139 = function_408a00(v51, 2 * v4); // 0x414d89
                v93 = v139;
                v94 = v51;
                if ((int32_t)v139 != 0) {
                    // break -> 0x415238
                    break;
                }
                v138 = function_408fa0(v51);
                v93 = v138;
                v94 = v51;
            }
            goto lab_0x415238_2;
        }
    }
  lab_0x415448:;
    int64_t * v119 = (int64_t *)(v67 + 112); // 0x415448
    int64_t v120 = *v119; // 0x415448
    if (v120 != 0) {
        int64_t * v121 = (int64_t *)v120; // 0x415458
        int64_t v122 = *v121; // 0x415458
        free(v121);
        while (v122 != 0) {
            // 0x415458
            v121 = (int64_t *)v122;
            v122 = *v121;
            free(v121);
        }
    }
    // 0x415468
    *v119 = 0;
    int64_t * v123 = (int64_t *)(v67 + 32); // 0x415470
    *(int32_t *)(v67 + 128) = 15;
    *(int64_t *)(v67 + 104) = 0;
    free((int64_t *)*v123);
    *v123 = 0;
    function_409d50(&v124);
    goto lab_0x41549e;
  lab_0x414e29:;
    int64_t v54 = v53;
    int64_t v55 = v52;
    *v9 = 0;
    *(int64_t *)(v54 + 216) = a4;
    int32_t v56; // bp-264, 0x414ae0
    function_412be0((int64_t *)&v56, v55, a4 | 0x800000);
    int64_t v57 = &v56; // 0x414e61
    int64_t v58 = function_414980(v55, a1, v57, a4, 0, (int64_t)&result); // 0x414e78
    int64_t v59; // 0x414ae0
    int64_t v60; // 0x414ae0
    int64_t v61; // 0x414ae0
    int64_t v62; // 0x414ae0
    int64_t v63; // 0x4156c9
    int64_t v64; // 0x4156d7
    int64_t v65; // 0x414ae0
    int64_t v66; // 0x4156f2
    if (result != 0) {
        if (v58 == 0) {
            // 0x415842
            *(int64_t *)(v11 + 104) = 0;
            v67 = v55;
            goto lab_0x415448;
        } else {
            // 0x4156c9
            v63 = v54 + 112;
            v64 = v54 + 128;
            v65 = &v68;
            v66 = function_40ad90(v63, v64, 0, 0, v65);
            goto lab_0x414ec7;
        }
    } else {
        int64_t v69 = v54 + 112; // 0x414e89
        int64_t v70 = v54 + 128; // 0x414e97
        int64_t v71 = &v68;
        int64_t v72 = function_40ad90(v69, v70, 0, 0, v71); // 0x414eb2
        v65 = v71;
        v64 = v70;
        v66 = v72;
        v63 = v69;
        v62 = 2;
        v61 = v72;
        v60 = v69;
        v59 = v72;
        if (v58 == 0) {
            goto lab_0x414ee6;
        } else {
            goto lab_0x414ec7;
        }
    }
  lab_0x414ee6:
    // 0x414ee6
    v73 = v60;
    int64_t * v74; // 0x414ae0
    int64_t * v75; // 0x414f02
    int64_t * v76; // 0x414f9d
    int64_t * v77; // 0x414ae0
    if (v61 == 0 || v59 == 0) {
        // 0x415708
        result = 12;
        *(int64_t *)(v11 + 104) = 0;
        v67 = v73;
        goto lab_0x415448;
    } else {
        // 0x414efe
        v78 = v62;
        v75 = (int64_t *)(v11 + 104);
        *v75 = v59;
        int32_t v79 = (int32_t)*(int64_t *)(v73 + 8);
        int32_t size2 = 8 * v79; // 0x414f1f
        int64_t * mem4 = malloc(size2); // 0x414f1f
        *(int64_t *)(v73 + 24) = (int64_t)mem4;
        int64_t * mem5 = malloc(size2); // 0x414f33
        *(int64_t *)(v73 + 32) = (int64_t)mem5;
        int32_t size3 = 24 * v79; // 0x414f44
        int64_t * mem6 = malloc(size3); // 0x414f44
        *(int64_t *)(v73 + 40) = (int64_t)mem6;
        int64_t * mem7 = malloc(size3); // 0x414f55
        v80 = (int64_t *)(v73 + 48);
        *v80 = (int64_t)mem7;
        if (mem4 == NULL | mem5 == NULL || mem6 == NULL || mem7 == NULL) {
            // 0x415440
            result = 12;
            v67 = v73;
            goto lab_0x415448;
        } else {
            int64_t v81 = *v9; // 0x414f8c
            int64_t * mem8 = malloc(8 * (int32_t)v81); // 0x414f98
            int64_t v82 = (int64_t)mem8; // 0x414f98
            v76 = (int64_t *)(v73 + 224);
            *v76 = v82;
            if (mem8 == NULL) {
                // 0x414f8c
                v83 = (int64_t *)(v73 + 104);
                goto lab_0x415010;
            } else {
                // 0x414fa9
                if (v81 != 0) {
                    int64_t v84 = 0;
                    *(int64_t *)(8 * v84 + v82) = v84;
                    int64_t v85 = v84 + 1; // 0x414fb4
                    while (v85 != v81) {
                        // 0x414fb0
                        v84 = v85;
                        *(int64_t *)(8 * v84 + v82) = v84;
                        v85 = v84 + 1;
                    }
                }
                // 0x414fbd
                v77 = (int64_t *)(v73 + 104);
                function_40a600(*v77, 0x40a2c0, v73);
                int64_t v86 = *v9; // 0x414fce
                int64_t v87 = *v76;
                v74 = (int64_t *)v87;
                if (v86 == 0) {
                    goto lab_0x414fff;
                } else {
                    // 0x414fdb
                    v83 = v77;
                    if (*v74 == 0) {
                        int64_t v88 = 1; // 0x414ff6
                        while (v88 != v86) {
                            int64_t v89 = v88; // 0x414ff4
                            v83 = v77;
                            if (*(int64_t *)(8 * v88 + v87) != v88) {
                                goto lab_0x415010;
                            }
                            v88 = v89 + 1;
                        }
                        goto lab_0x414fff;
                    } else {
                        goto lab_0x415010;
                    }
                }
            }
        }
    }
  lab_0x414ec7:;
    int64_t v90 = function_40ad90(v63, v64, (int32_t)v58, (int32_t)v66, v65); // 0x414edb
    v62 = 16;
    v61 = v66;
    v60 = v63;
    v59 = v90;
    goto lab_0x414ee6;
  lab_0x414fff:
    // 0x414fff
    free(v74);
    *v76 = 0;
    v83 = v77;
    goto lab_0x415010;
  lab_0x415248:
    // 0x415248
    if (*(int64_t *)(v73 + 152) != 0) {
        goto lab_0x415153;
    } else {
        goto lab_0x415256;
    }
  lab_0x415153:;
    int64_t size4 = 24 * v95; // 0x415157
    int64_t * mem9 = malloc((int32_t)size4); // 0x41515b
    int64_t v161 = (int64_t)mem9; // 0x41515b
    int64_t * v162 = (int64_t *)(v73 + 56); // 0x415160
    *v162 = v161;
    if (mem9 == NULL) {
        // 0x415820
        result = 12;
        v67 = size4;
        goto lab_0x415448;
    } else {
        if (v95 != 0) {
            int128_t v163 = __asm_pxor(v2, v2); // 0x415188
            __asm_movups(*(int128_t *)mem9, v163);
            *(int64_t *)(v161 + 16) = 0;
            uint64_t v164 = *v97; // 0x41519f
            int64_t v165 = 1; // 0x4151a6
            int128_t v166 = v163; // 0x4151a6
            int64_t v167 = v164; // 0x4151a6
            if (v164 > 1) {
                int128_t v168 = v166;
                int128_t v169 = __asm_pxor(v168, v168); // 0x415188
                int64_t v170 = v165 + 1; // 0x41518c
                int64_t v171 = *v162 + 24 * v165; // 0x415190
                __asm_movups(*(int128_t *)v171, v169);
                *(int64_t *)(v171 + 16) = 0;
                uint64_t v172 = *v97; // 0x41519f
                v165 = v170;
                v167 = v172;
                while (v172 > v170) {
                    // 0x415180
                    v168 = v169;
                    v169 = __asm_pxor(v168, v168);
                    v170 = v165 + 1;
                    v171 = *v162 + 24 * v165;
                    __asm_movups(*(int128_t *)v171, v169);
                    *(int64_t *)(v171 + 16) = 0;
                    v172 = *v97;
                    v165 = v170;
                    v167 = v172;
                }
            }
            int64_t v173 = v167;
            if (v173 != 0) {
                int64_t v174 = *v80; // 0x4151ba
                int64_t v175 = 0;
                int64_t v176 = 24 * v175; // 0x4151ca
                int64_t v177 = v176 + v174; // 0x4151d7
                int64_t v178 = *(int64_t *)(v177 + 8); // 0x4151da
                int64_t v179 = v173; // 0x4151e3
                int64_t v180 = v174; // 0x4151e3
                int64_t v181; // 0x414ae0
                int64_t v182; // 0x41521e
                int64_t v183; // 0x415227
                int64_t v184; // 0x4151f0
                int64_t v185; // 0x4151f9
                if (v178 >= 0 == (v178 != 0)) {
                    // 0x41520d
                    v181 = *(int64_t *)(v177 + 16);
                    v185 = 0;
                    v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                    v183 = function_408aa0(v182, v175);
                    v93 = 12;
                    v94 = v182;
                    if ((char)v183 == 0) {
                        goto lab_0x415238_2;
                    }
                    // 0x4151f0
                    v184 = *v80;
                    v185++;
                    v181 = 0x100000000 * v181 >> 32;
                    while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                        // 0x41520d
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_408aa0(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x415238_2;
                        }
                        // 0x4151f0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                    }
                    // 0x4156a0
                    v179 = *v97;
                    v180 = v184;
                }
                // 0x4156a0
                v174 = v180;
                int64_t v186 = v179; // 0x4156ab
                int64_t v187 = v175 + 1; // 0x4156a0
                while (v186 > v187) {
                    // 0x4151be
                    v175 = v187;
                    v176 = 24 * v175;
                    v177 = v176 + v174;
                    v178 = *(int64_t *)(v177 + 8);
                    v179 = v186;
                    v180 = v174;
                    if (v178 >= 0 == (v178 != 0)) {
                        // 0x41520d
                        v181 = *(int64_t *)(v177 + 16);
                        v185 = 0;
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_408aa0(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x415238_2;
                        }
                        // 0x4151f0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                        while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                            // 0x41520d
                            v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                            v183 = function_408aa0(v182, v175);
                            v93 = 12;
                            v94 = v182;
                            if ((char)v183 == 0) {
                                goto lab_0x415238_2;
                            }
                            // 0x4151f0
                            v184 = *v80;
                            v185++;
                            v181 = 0x100000000 * v181 >> 32;
                        }
                        // 0x4156a0
                        v179 = *v97;
                        v180 = v184;
                    }
                    // 0x4156a0
                    v174 = v180;
                    v186 = v179;
                    v187 = v175 + 1;
                }
            }
        }
        goto lab_0x415256;
    }
  lab_0x415256:
    // 0x415256
    result = 0;
    unsigned char result2 = *v23 / 4 & (char)(v125 == 0); // 0x415270
    if (result2 != 0) {
        // 0x415590
        if (*v158 == 0) {
            // 0x41559b
            if (*(int64_t *)(v11 + 16) != 0) {
                // 0x4155a8
                return result2;
            }
            int64_t v188 = *(int64_t *)(v11 + 152); // 0x415856
            *v22 = 1;
            *v23 = 2 * (char)(v188 >= 0 == (v188 != 0)) | *v23 & -7;
        }
    }
    int64_t v155 = &v68; // 0x41527c
    int64_t v189 = *(int64_t *)(*(int64_t *)(*v75 + 24) + 56); // 0x415283
    *(int64_t *)(v11 + 144) = v189;
    int64_t * v153 = (int64_t *)(v11 + 48); // 0x415292
    int64_t v190 = function_40b1c0(v155, *v153 + 24 * v189); // 0x41529a
    int64_t v191 = v190 & 0xffffffff; // 0x41529f
    int32_t v192 = v190; // 0x4152a2
    v56 = v192;
    int64_t v154 = v155; // 0x4152a8
    int64_t v156 = v191; // 0x4152a8
    if (v192 != 0) {
        goto lab_0x4153bf;
    } else {
        // 0x4152ae
        if (*(int64_t *)(v11 + 152) >= 1) {
            int64_t v152 = &v96;
            v142 = 0;
            while (true) {
              lab_0x4152e5_2:
                // 0x4152e5
                v140 = v142;
                int64_t v143 = *v14; // 0x4152ea
                int64_t v144 = *(int64_t *)(v96 + 8 * v140); // 0x4152ed
                int64_t v145 = 16 * v144 + v143; // 0x4152f8
                if (*(char *)(v145 + 8) == 4) {
                    int64_t * v146 = (int64_t *)v145;
                    int64_t v147 = 0;
                    int64_t v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143; // 0x415319
                    int64_t v149; // 0x41532a
                    int64_t v150; // 0x415340
                    int64_t v151; // 0x41535f
                    if (*(char *)(v148 + 8) == 9) {
                        // 0x415322
                        if (*(int64_t *)v148 == *v146) {
                            // 0x41532a
                            v149 = *(int64_t *)(v11 + 40);
                            v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                            if (function_40a120(v78, v152, v150) != 0) {
                                goto lab_0x4152d8;
                            } else {
                                // 0x415350
                                v151 = function_40a660(&v68, (int128_t *)(*v153 + 24 * v150));
                                if ((int32_t)v151 != 0) {
                                    // 0x4157e0
                                    v154 = v155;
                                    v156 = v151 & 0xffffffff;
                                    goto lab_0x4153bf;
                                } else {
                                    // 0x4152e5
                                    v142 = 1;
                                    goto lab_0x4152e5_2;
                                }
                            }
                        }
                    }
                    int64_t v157 = v147 + 1; // 0x415308
                    while (v78 != v157) {
                        // 0x415311
                        v147 = v157;
                        v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143;
                        if (*(char *)(v148 + 8) == 9) {
                            // 0x415322
                            if (*(int64_t *)v148 == *v146) {
                                // 0x41532a
                                v149 = *(int64_t *)(v11 + 40);
                                v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                                if (function_40a120(v78, v152, v150) != 0) {
                                    goto lab_0x4152d8;
                                } else {
                                    // 0x415350
                                    v151 = function_40a660(&v68, (int128_t *)(*v153 + 24 * v150));
                                    if ((int32_t)v151 != 0) {
                                        // 0x4157e0
                                        v154 = v155;
                                        v156 = v151 & 0xffffffff;
                                        goto lab_0x4153bf;
                                    } else {
                                        // 0x4152e5
                                        v142 = 1;
                                        goto lab_0x4152e5_2;
                                    }
                                }
                            }
                        }
                        // 0x415308
                        v157 = v147 + 1;
                    }
                }
                goto lab_0x4152d8;
            }
        }
      lab_0x415380:;
        int64_t v193 = function_40b3d0((int128_t *)&v56, v11, &v68, 0); // 0x41538d
        *(int64_t *)(v11 + 72) = v193;
        if (v193 == 0) {
            goto lab_0x415638;
        } else {
            // 0x41539f
            if (*(char *)(v193 + 104) < 0) {
                int64_t v194 = function_40b3d0((int128_t *)&v56, v11, &v68, 1); // 0x4155e0
                int64_t * v195 = (int64_t *)(v11 + 80); // 0x4155f0
                *v195 = v194;
                int64_t v196 = function_40b3d0((int128_t *)&v56, v11, &v68, 2); // 0x4155f9
                int64_t * v197 = (int64_t *)(v11 + 88); // 0x415609
                *v197 = v196;
                int64_t v198 = function_40b3d0((int128_t *)&v56, v11, &v68, 6); // 0x415612
                *(int64_t *)(v11 + 96) = v198;
                if (*v195 == 0) {
                    goto lab_0x415638;
                } else {
                    // 0x415622
                    if (v198 != 0 == (*v197 != 0)) {
                        goto lab_0x4153b5;
                    } else {
                        goto lab_0x415638;
                    }
                }
            } else {
                // 0x4153a9
                *(int64_t *)(v11 + 96) = v193;
                *(int64_t *)(v11 + 88) = v193;
                *(int64_t *)(v11 + 80) = v193;
                goto lab_0x4153b5;
            }
        }
    }
  lab_0x4153bf:
    // 0x4153bf
    result = v156;
    int64_t * v199 = (int64_t *)(v154 + 112); // 0x4153c8
    int64_t v200 = *v199; // 0x4153c8
    if (v200 != 0) {
        int64_t * v201 = (int64_t *)v200; // 0x4153d8
        int64_t v202 = *v201; // 0x4153d8
        free(v201);
        while (v202 != 0) {
            // 0x4153d8
            v201 = (int64_t *)v202;
            v202 = *v201;
            free(v201);
        }
    }
    // 0x4153e8
    *v199 = 0;
    int64_t * v203 = (int64_t *)(v154 + 32); // 0x4153f1
    *(int32_t *)(v154 + 128) = 15;
    *(int64_t *)(v154 + 104) = 0;
    free((int64_t *)*v203);
    *v203 = 0;
    function_409d50(&v124);
    if (result == 0) {
        // 0x41542b
        return result;
    }
    goto lab_0x41549e;
  lab_0x415638:
    // 0x415638
    v154 = v57;
    v156 = v56;
    goto lab_0x4153bf;
  lab_0x4153b5:
    // 0x4153b5
    free((int64_t *)v96);
    v154 = v96;
    v156 = v191;
    goto lab_0x4153bf;
}
// Address range: 0x415890 - 0x4158f7
int64_t function_415890(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 56); // 0x4158b0
    *v1 = *v1 & 111 | (char)(g80 / 0x200000) & 16 | -128;
    int64_t v2; // 0x415890
    int64_t v3 = function_414ae0(a3, a1, a2, g80, a1, v2); // 0x4158c5
    if ((int32_t)v3 == 0) {
        // 0x4158f0
        return 0;
    }
    int64_t v4 = *(int64_t *)((0x100000000 * v3 >> 29) + (int64_t)&g16); // 0x4158d7
    return (int64_t)dcgettext(NULL, (char *)(v4 + (int64_t)"Success"), 5);
}
// Address range: 0x415900 - 0x41590f
int64_t function_415900(int64_t a1) {
    int64_t result = g80; // 0x415900
    g80 = a1;
    return result;
}
// Address range: 0x415910 - 0x4159d3
int64_t function_415910(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x415916
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 248) = 0;
    int64_t v2 = v1 + 8 & -8; // 0x41593a
    __asm_rep_stosq_memset((char *)v2, 0, (v1 + 256 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x415953
    int64_t v4 = *v3; // 0x415953
    function_40e3c0(a1, v4 + 16, v4 + 24, v1);
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x415965
    int64_t v6 = v5; // 0x41596f
    if (*v3 != v5) {
        // 0x415971
        function_40e3c0(a1, v5 + 16, v5 + 24, v1);
        v6 = *v3;
    }
    int64_t v7 = *(int64_t *)(a1 + 88); // 0x415989
    int64_t v8 = v6; // 0x415991
    if (v7 != v6) {
        // 0x415993
        function_40e3c0(a1, v7 + 16, v7 + 24, v1);
        v8 = *v3;
    }
    int64_t v9 = *(int64_t *)(a1 + 96); // 0x4159ab
    if (v9 != v8) {
        // 0x4159b5
        function_40e3c0(a1, v9 + 16, v9 + 24, v1);
    }
    char * v10 = (char *)(a1 + 56); // 0x4159c8
    *v10 = *v10 | 8;
    return 0;
}
// Address range: 0x4159e0 - 0x415f6b
int64_t function_4159e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x4159e0
    if (a4 < 0 || a4 > a3) {
        // 0x415b0f
        return -1;
    }
    int64_t v1 = a5 + a4; // 0x4159e5
    int64_t v2 = a3; // 0x415a21
    if (v1 > a3) {
        goto lab_0x415a4c;
    } else {
        // 0x415a27
        v2 = a3;
        if (a5 > -1 == v1 < a4) {
            goto lab_0x415a4c;
        } else {
            if (v1 < 0) {
                goto lab_0x415d08;
            } else {
                // 0x415a3e
                v2 = v1;
                if (a5 >= 0 || v1 < a4) {
                    goto lab_0x415a4c;
                } else {
                    goto lab_0x415d08;
                }
            }
        }
    }
  lab_0x415a4c:;
    char * v3 = (char *)(a1 + 56); // 0x415a4c
    int64_t v4 = (int64_t)*v3; // 0x415a4c
    int64_t v5 = v4; // 0x415a62
    int64_t v6 = v2; // 0x415a62
    if (v2 > a4) {
        // 0x415a64
        v5 = v4;
        v6 = v2;
        if ((v4 & 8) == 0 == (*(int64_t *)(a1 + 32) != 0)) {
            // 0x415c60
            function_415910(a1);
            v5 = (int64_t)*v3;
            v6 = v2;
        }
    }
    goto lab_0x415a73;
  lab_0x415a73:;
    int64_t size = 16; // 0x415a75
    int64_t v7 = 0; // 0x415a75
    int64_t v8 = 1; // 0x415a75
    int64_t v9; // 0x4159e0
    if (a7 == 0 || (v5 & 16) != 0) {
        goto lab_0x415aa1;
    } else {
        uint64_t v10 = *(int64_t *)(a1 + 48); // 0x415a87
        if ((v5 & 6) == 4) {
            int64_t v11 = *(int64_t *)a7; // 0x415c20
            if (v11 > v10) {
                // 0x415a93
                v9 = v10 + 1;
                goto lab_0x415a9a;
            } else {
                // 0x415c2d
                v9 = v11;
                size = 16;
                v7 = 0;
                v8 = 1;
                if (v11 >= 0 == (v11 != 0)) {
                    goto lab_0x415a9a;
                } else {
                    goto lab_0x415aa1;
                }
            }
        } else {
            // 0x415a93
            v9 = v10 + 1;
            goto lab_0x415a9a;
        }
    }
  lab_0x415aa1:;
    int64_t * mem = malloc((int32_t)size); // 0x415ab0
    if (mem == NULL) {
        // 0x415b0f
        return -2;
    }
    uint64_t v12 = v8;
    int64_t v13 = (int64_t)mem; // 0x415ab0
    int64_t result = -1; // 0x4159e0
    int64_t v14; // 0x4159e0
    int64_t v15; // 0x4159e0
    int64_t v16; // 0x4159e0
    int64_t v17; // 0x4159e0
    int64_t v18; // 0x4159e0
    int64_t v19; // 0x4159e0
    int64_t v20; // 0x4159e0
    int64_t v21; // 0x4159e0
    int64_t v22; // 0x4159e0
    int64_t v23; // 0x4159e0
    int64_t v24; // 0x4159e0
    int64_t v25; // 0x4159e0
    int64_t v26; // 0x4159e0
    int64_t v27; // 0x4159e0
    int64_t v28; // 0x4159e0
    int64_t v29; // 0x4159e0
    int64_t v30; // 0x4159e0
    int64_t v31; // 0x4159e0
    int64_t v32; // 0x4159e0
    int64_t v33; // 0x4159e0
    int64_t v34; // 0x4159e0
    int64_t v35; // 0x4159e0
    int64_t v36; // 0x4159e0
    int64_t v37; // 0x4159e0
    int64_t v38; // 0x4159e0
    char * v39; // 0x415b31
    switch ((int32_t)v40) {
        case 0: {
            // 0x415b28
            v14 = v7;
            v36 = a2;
            v26 = a3;
            v31 = v6;
            v16 = v6;
            v21 = a6;
            if (v14 == 0) {
                goto lab_0x415bf8;
            } else {
                // 0x415b31
                v39 = (char *)(a1 + 56);
                int64_t v41 = v12 + 1; // 0x415b36
                unsigned char v42 = *v39 / 2 % 4;
                switch (v42) {
                    case 0: {
                        int32_t size2 = 8 * (int32_t)v41; // 0x415cb0
                        int64_t * mem2 = malloc(size2); // 0x415cb0
                        int64_t v43 = (int64_t)mem2; // 0x415cb0
                        *(int64_t *)(v14 + 8) = v43;
                        v35 = v41;
                        v25 = a3;
                        int64_t v44; // 0x4159e0
                        v30 = v44;
                        v15 = v44;
                        v20 = 0;
                        if (mem2 == NULL) {
                            goto lab_0x415bdd;
                        } else {
                            int64_t * mem3 = malloc(size2); // 0x415cd5
                            *(int64_t *)(v14 + 16) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x415dca
                                free(mem2);
                                v35 = v41;
                                v25 = a3;
                                v30 = v43;
                                v15 = v44;
                                v20 = 0;
                                goto lab_0x415bdd;
                            } else {
                                // 0x415cf2
                                *(int64_t *)v14 = v41;
                                v34 = v41;
                                v24 = a3;
                                v29 = v43;
                                v19 = 1;
                                goto lab_0x415b67;
                            }
                        }
                    }
                    case 1: {
                        int64_t * v45 = (int64_t *)v14; // 0x415d4e
                        v34 = a2;
                        v24 = a3;
                        v29 = v6;
                        v19 = 1;
                        if (*v45 >= v41) {
                            goto lab_0x415b67;
                        } else {
                            int64_t v46 = 8 * v41; // 0x415d58
                            int64_t * v47 = (int64_t *)(v14 + 8); // 0x415d60
                            int32_t v48 = v46; // 0x415d77
                            int64_t * mem4 = realloc((int64_t *)*v47, v48); // 0x415d77
                            v35 = v46;
                            v25 = 1;
                            v30 = v41;
                            v15 = v6;
                            v20 = 0;
                            if (mem4 == NULL) {
                                goto lab_0x415bdd;
                            } else {
                                int64_t * v49 = (int64_t *)(v14 + 16); // 0x415d89
                                int64_t * mem5 = realloc((int64_t *)*v49, v48); // 0x415d91
                                if (mem5 == NULL) {
                                    // 0x415dda
                                    free(mem4);
                                    v35 = v46;
                                    v25 = 1;
                                    v30 = v41;
                                    v15 = v6;
                                    v20 = 0;
                                    goto lab_0x415bdd;
                                } else {
                                    // 0x415da6
                                    *v47 = (int64_t)mem4;
                                    *v49 = (int64_t)mem5;
                                    *v45 = v41;
                                    v34 = v46;
                                    v24 = 1;
                                    v29 = v41;
                                    v19 = 1;
                                    goto lab_0x415b67;
                                }
                            }
                        }
                    }
                    default: {
                        // 0x415b4e
                        v38 = a2;
                        v28 = a3;
                        v33 = v6;
                        v18 = v6;
                        v23 = a6;
                        if (v42 != 2) {
                            goto lab_0x415e1c;
                        } else {
                            // 0x415b57
                            v34 = a2;
                            v24 = a3;
                            v29 = v6;
                            v19 = 2;
                            v37 = a2;
                            v27 = a3;
                            v32 = v6;
                            v17 = v6;
                            v22 = a6;
                            if (v12 > *(int64_t *)v14) {
                                goto lab_0x415e03;
                            } else {
                                goto lab_0x415b67;
                            }
                        }
                    }
                }
            }
        }
        case 1: {
            goto lab_0x415b07;
        }
        default: {
            goto lab_0x415b00;
        }
    }
  lab_0x415d08:
    // 0x415d08
    v5 = (int64_t)*(char *)(a1 + 56);
    v6 = 0;
    goto lab_0x415a73;
  lab_0x415b00:
    // 0x415b00
    result = -2;
  lab_0x415b07:
    // 0x415b07
    free(mem);
    // 0x415b0f
    return result;
  lab_0x415bf8:;
    int64_t v50 = *mem; // 0x415bfd
    result = v50;
    if ((char)a8 == 0) {
        // 0x415b07
        free(mem);
        // 0x415b0f
        return result;
    }
    if (v50 == a4) {
        // 0x415b07
        free(mem);
        // 0x415b0f
        return *(int64_t *)(v13 + 8) - v50;
    }
    // 0x415dea
    __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 445, "re_search_stub");
    v37 = v36;
    v27 = v26;
    v32 = v31;
    v17 = v16;
    v22 = v21;
    goto lab_0x415e03;
  lab_0x415a9a:
    // 0x415a9a
    size = 16 * v9;
    v7 = a7;
    v8 = v9;
    goto lab_0x415aa1;
  lab_0x415e03:
    // 0x415e03
    __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 506, "re_copy_regs");
    v38 = v37;
    v28 = v27;
    v33 = v32;
    v18 = v17;
    v23 = v22;
    goto lab_0x415e1c;
  lab_0x415e1c:
    // 0x415e1c
    __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 504, "re_copy_regs");
    if ((v18 || v28) <= -1) {
        // 0x415b0f
        return -2;
    }
    int64_t size3 = v18 + 504; // 0x415e8c
    if ((size3 & (v18 ^ -0x8000000000000000)) < 0) {
        // 0x415b0f
        return -2;
    }
    int64_t * v51 = NULL; // 0x415e98
    int64_t v52 = (int64_t)"lib/regexec.c"; // 0x415e98
    if (v18 != 0) {
        int64_t * mem6 = malloc((int32_t)size3); // 0x415f02
        if (mem6 == NULL) {
            // 0x415b0f
            return -2;
        }
        int64_t v53 = (int64_t)mem6; // 0x415f02
        memcpy(mem6, (int64_t *)"lib/regexec.c", 504);
        memcpy((int64_t *)(v53 + 504), (int64_t *)"re_copy_regs", (int32_t)v18);
        v51 = mem6;
        v52 = v53;
    }
    int64_t result2 = function_4159e0((int64_t)"regs_allocated == REGS_FIXED", v52, size3, v23, v38, v28, v33, a6 % 256); // 0x415ec3
    free(v51);
    // 0x415b0f
    return result2;
  lab_0x415bdd:
    // 0x415bdd
    *v39 = *v39 & -7 | 2 * (char)v20;
    v36 = v35;
    v26 = v25;
    v31 = v30;
    v16 = v15;
    v21 = v20;
    if (v20 == 0) {
        goto lab_0x415b00;
    } else {
        goto lab_0x415bf8;
    }
  lab_0x415b67:;
    int64_t v54 = v19;
    int64_t v55 = v29;
    int64_t v56 = v24;
    int64_t v57 = v34;
    int64_t v58 = 0; // 0x415b6a
    int64_t v59 = v6; // 0x415b6a
    if (v12 >= 1) {
        int64_t v60 = *(int64_t *)(v14 + 8); // 0x415b70
        int64_t v61 = 0; // 0x415b87
        int64_t v62 = 2 * v61; // 0x415b90
        *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
        int64_t v63 = *(int64_t *)(v13 + 8 + v62); // 0x415b99
        *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
        v61 += 8;
        v58 = v12;
        v59 = v60;
        while (v61 != 8 * v12) {
            // 0x415b90
            v62 = 2 * v61;
            *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
            v63 = *(int64_t *)(v13 + 8 + v62);
            *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
            v61 += 8;
            v58 = v12;
            v59 = v60;
        }
    }
    int64_t v64 = v59;
    int64_t v65 = v58;
    int64_t * v66 = (int64_t *)v14; // 0x415bab
    v35 = v57;
    v25 = v56;
    v30 = v55;
    v15 = v64;
    v20 = v54;
    if (*v66 > v65) {
        int64_t v67 = v65 + 1; // 0x415bc8
        int64_t v68 = 8 * v65; // 0x415bcc
        *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
        *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
        v35 = v57;
        v25 = v56;
        v30 = v55;
        v15 = v64;
        v20 = v54;
        while (*v66 > v67) {
            int64_t v69 = v67;
            v67 = v69 + 1;
            v68 = 8 * v69;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
            v35 = v57;
            v25 = v56;
            v30 = v55;
            v15 = v64;
            v20 = v54;
        }
    }
    goto lab_0x415bdd;
}
// Address range: 0x415f70 - 0x416080
int64_t function_415f70(int64_t a1, int64_t str, uint64_t a3) {
    // 0x415f70
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t * mem = malloc(256); // 0x415fb5
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x415fba
    *v1 = (int64_t)mem;
    if (mem == NULL) {
        // 0x416070
        return 12;
    }
    int64_t v2 = (a3 % 2 == 0 ? 0x10102c6 : 0x3b2fc) | 0x200000 * a3 & 0x400000; // 0x415fd7
    int64_t v3 = (a3 & 4) != 0 ? v2 & 0x143b2be | 256 : v2;
    *(int64_t *)(a1 + 40) = 0;
    char * v4 = (char *)(a1 + 56); // 0x415ff2
    *v4 = ((a3 & 4) != 0 ? -128 : 0) | 2 * (char)a3 & 16 | *v4 & 111;
    int64_t v5; // 0x415f70
    int64_t v6 = function_414ae0(a1, str, (int64_t)strlen((char *)str), v3, v5, v5); // 0x416017
    int32_t v7 = v6; // 0x41601e
    int64_t v8 = 8; // 0x416021
    if (v7 != 16) {
        // 0x416023
        v8 = v6 & 0xffffffff;
        if (v7 == 0) {
            // 0x416027
            function_415910(a1);
            // 0x41602f
            return v8 & 0xffffffff;
        }
    }
    // 0x41605d
    free((int64_t *)*v1);
    *v1 = 0;
    // 0x41602f
    return v8 & 0xffffffff;
}
// Address range: 0x416080 - 0x4160fd
int64_t function_416080(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = *(int64_t *)((0x100000000 * a1 >> 29) + (int64_t)&g16); // 0x4160a1
    char * str = dcgettext(NULL, (char *)(v1 + (int64_t)"Success"), 5); // 0x4160b2
    int64_t result = (int64_t)strlen(str) + 1; // 0x4160c2
    if (a4 == 0) {
        // 0x4160de
        return result;
    }
    int64_t v2 = result; // 0x4160d1
    if (result > a4) {
        // 0x4160f0
        v2 = a4 - 1;
        *(char *)(v2 + a3) = 0;
    }
    // 0x4160d3
    memcpy((int64_t *)a3, (int64_t *)str, (int32_t)v2);
    // 0x4160de
    return result;
}
// Address range: 0x416100 - 0x416144
int64_t function_416100(int64_t a1) {
    if (a1 != 0) {
        // 0x41610c
        function_40d700(a1);
    }
    // 0x416111
    *(int64_t *)a1 = 0;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x416118
    *(int64_t *)(a1 + 8) = 0;
    free((int64_t *)*v1);
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x416131
    free((int64_t *)*v2);
    *v2 = 0;
    return &g84;
}
// Address range: 0x416150 - 0x4161e6
int64_t function_416150(int64_t a1, int64_t str, int64_t a3, int64_t a4, int64_t a5) {
    if ((a5 & 0xfffffff8) != 0) {
        // 0x4161e0
        return 2;
    }
    int64_t v1; // 0x416150
    int64_t v2; // 0x416150
    int64_t v3; // 0x416150
    int64_t v4; // 0x416150
    int64_t v5; // 0x416150
    int64_t v6; // 0x416150
    if ((a5 & 4) != 0) {
        int64_t v7 = *(int64_t *)(a4 + 8); // 0x4161c3
        v5 = 0;
        v1 = a4;
        v3 = v7;
        v6 = 0;
        v2 = a4;
        v4 = v7;
        if ((*(char *)(a1 + 56) & 16) != 0) {
            goto lab_0x416196;
        } else {
            goto lab_0x4161cd;
        }
    } else {
        int64_t len = strlen((char *)str); // 0x41617d
        v5 = 0;
        v1 = 0;
        v3 = len;
        v6 = 0;
        v2 = 0;
        v4 = len;
        if ((*(char *)(a1 + 56) & 16) == 0) {
            goto lab_0x4161cd;
        } else {
            goto lab_0x416196;
        }
    }
  lab_0x416196:;
    int64_t v8 = v3;
    return (int32_t)function_410a30(a1, str, v8, v1, v8, v8, v6, v5, a5 & 0xffffffff) != 0;
  lab_0x4161cd:
    // 0x4161cd
    v5 = a4;
    v1 = v2;
    v3 = v4;
    v6 = a3;
    goto lab_0x416196;
}
// Address range: 0x4161f0 - 0x416208
int64_t function_4161f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4161f0
    return function_4159e0(a1, a2, a3, a4, 0, a3, a5, 1);
}
// Address range: 0x416210 - 0x416225
int64_t function_416210(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int32_t a6) {
    // 0x416210
    return function_4159e0(a1, a2, a3, (int64_t)a4, a5, a3, (int64_t)a6, 0);
}
// Address range: 0x416230 - 0x41624a
int64_t function_416230(int64_t a1, int64_t a2) {
    // 0x416230
    int64_t result; // 0x416230
    return result;
}
// Address range: 0x416250 - 0x41626c
int64_t function_416250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416250
    int64_t result; // 0x416250
    return result;
}
// Address range: 0x416270 - 0x4162ac
int64_t function_416270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 56);
    char v2 = *v1 & -7;
    if (a3 == 0) {
        // 0x416290
        *v1 = v2;
        *(int64_t *)a2 = 0;
        *(int64_t *)(a2 + 16) = 0;
        *(int64_t *)(a2 + 8) = 0;
        int64_t result; // 0x416270
        return result;
    }
    unsigned char result2 = v2 | 2;
    *v1 = result2;
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 8) = a4;
    *(int64_t *)(a2 + 16) = a5;
    return result2;
}
// Address range: 0x4162b0 - 0x41630d
int64_t function_4162b0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4162b7
    int64_t v2; // 0x4162b0
    int64_t result = function_4073b0(a1, v2); // 0x4162c8
    if ((v2 & 32) != 0) {
        // 0x4162f0
        if ((int32_t)result == 0) {
            // 0x4162f4
            *__errno_location() = 0;
        }
        // 0x4162ea
        return 0xffffffff;
    }
    // 0x4162d1
    if ((int32_t)result == 0) {
        // 0x4162ea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4162d8
    if (v1 == 0) {
        // 0x4162da
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4162ea
    return result2;
}
// Address range: 0x416310 - 0x41636e
int64_t function_416310(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x416316
    if (locale == NULL) {
        // 0x416343
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x416316
    bool v2; // 0x416310
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g18; // 0x416310
    int64_t v5 = v1; // 0x416310
    int64_t v6 = 2; // 0x416335
    unsigned char v7 = *(char *)v5; // 0x416335
    char v8 = *(char *)v4; // 0x416335
    char v9 = v8; // 0x416335
    bool v10 = false; // 0x416335
    while (v7 == v8) {
        // 0x416328
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
    int64_t v12 = (int64_t)"POSIX"; // 0x416341
    int64_t v13 = v1; // 0x416341
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x416343
        return 0;
    }
    int64_t v14 = 6; // 0x416341
    unsigned char v15 = *(char *)v13; // 0x41635d
    char v16 = *(char *)v12; // 0x41635d
    char v17 = v16; // 0x41635d
    bool v18 = false; // 0x41635d
    while (v15 == v16) {
        // 0x416350
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
// Address range: 0x416370 - 0x4168d2
int64_t function_416370(void) {
    char * v1 = nl_langinfo(14); // 0x416386
    char * v2 = g78; // 0x41638b
    char * v3; // 0x416370
    int64_t v4; // 0x416370
    int64_t v5; // 0x416370
    int64_t v6; // 0x416370
    int64_t v7; // 0x416370
    int32_t size; // 0x416370
    int32_t size2; // 0x416370
    int32_t len; // 0x416442
    int64_t v8; // 0x416442
    char * env_val; // 0x41642d
    if (v2 == NULL) {
        // 0x416428
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x416495;
        } else {
            // 0x41643a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x416495;
            } else {
                // 0x41643f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x41642d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4168c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x416495;
                    } else {
                        // 0x416839
                        size2 = len + 14;
                        goto lab_0x41645b;
                    }
                } else {
                    goto lab_0x41645b;
                }
            }
        }
    } else {
        // 0x416370
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4163aa;
    }
  lab_0x4166dc:;
    // 0x4166dc
    struct _IO_FILE * stream; // 0x41651b
    int32_t v10 = __uflow(stream); // 0x4166df
    int64_t v11; // 0x416370
    int64_t v12 = v11; // 0x4166e9
    int64_t v13; // 0x416370
    int64_t v14 = v13; // 0x4166e9
    int32_t v15 = v10; // 0x4166e9
    int64_t v16; // 0x416370
    int64_t v17 = v16; // 0x4166e9
    int64_t v18 = v11; // 0x4166e9
    int64_t v19 = v13; // 0x4166e9
    int64_t v20 = v16; // 0x4166e9
    if (v10 == -1) {
        // break -> 0x4166ef
        goto lab_0x4166ef;
    }
    goto lab_0x416569;
  lab_0x41655e:;
    // 0x41655e
    int64_t v90; // 0x416370
    int64_t * v32; // 0x416550
    *v32 = v90 + 1;
    int64_t v89; // 0x416370
    v12 = v89;
    int64_t v91; // 0x416370
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x416370
    v17 = v92;
    goto lab_0x416569;
  lab_0x416569:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x416370
    int32_t v25; // bp-120, 0x416370
    int32_t v26; // bp-184, 0x416370
    int64_t v27; // 0x41651b
    int64_t v28; // 0x416538
    int64_t v29; // 0x41653d
    int64_t * v30; // 0x416554
    switch (c) {
        case 32: {
            goto lab_0x416550;
        }
        case 10: {
            goto lab_0x416550;
        }
        case 9: {
            goto lab_0x416550;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x416741
            int32_t v33; // 0x416370
            char v34; // 0x416370
            int32_t v35; // 0x41674e
            if (v31 < *v30) {
                // 0x416720
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x41674b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x416741
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x416720
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x41674b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x416730
                v36 = v33;
            }
            // 0x41681f
            if (v36 == -1) {
                // break -> 0x4166ef
                break;
            }
            goto lab_0x416550;
        }
        default: {
            // 0x41657f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4166ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4165a8
            int64_t v39 = v37 + 4; // 0x4165aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4165b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4165b8
            while (v41 == 0) {
                // 0x4165a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4165d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4165e2
            int64_t v45 = v43 + 4; // 0x4165e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4165f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4165f2
            while (v47 == 0) {
                // 0x4165e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4165df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x416608
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x416618
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x41661c
            int64_t v52 = v51 + v48; // 0x416625
            int64_t * mem; // 0x416370
            int64_t v53; // 0x416370
            int64_t v54; // 0x416370
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x41675b
                int64_t v56 = v55 + 3; // 0x416767
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x416641
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x416650
            if (mem == NULL) {
                // 0x41687c
                free((int64_t *)v21);
                function_4073b0(v27, v53);
                v24 = (int64_t)&g13;
                goto lab_0x4164f4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x416668
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x416672
            uint32_t v62 = (int32_t)v59; // 0x416675
            int64_t v63; // 0x416370
            if (v62 >= 8) {
                // 0x416784
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x41679e
                int64_t v66 = v61 - v65; // 0x4167a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4167ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4167be
                    int64_t v70 = v69 & 0xffffffff; // 0x4167be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4167bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x41684f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x416687
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x41668b
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
            int64_t v73 = v51 + 1; // 0x41669b
            int64_t v74 = v60 - 1; // 0x41669f
            uint32_t v75 = (int32_t)v73; // 0x4166a4
            int64_t v76; // 0x416370
            if (v75 >= 8) {
                // 0x4167d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4167dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4167ec
                int64_t v80 = v74 - v79; // 0x4167f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4167fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x41680b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x416809
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x416866
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41686e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4166b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4166ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4168b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4166ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x41655e;
            } else {
                goto lab_0x4166dc;
            }
        }
    }
  lab_0x416550:;
    int64_t v93 = v23; // 0x416370
    int64_t v94 = v22; // 0x416370
    int64_t v95 = v21; // 0x416370
    goto lab_0x416550_2;
  lab_0x416495:;
    int64_t * mem3 = malloc(size); // 0x416495
    int64_t v97 = (int64_t)&g13; // 0x4164a0
    int64_t v98; // 0x416370
    int64_t path; // 0x416370
    if (mem3 == NULL) {
        goto lab_0x416472;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x416495
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4164b6;
    }
  lab_0x4163aa:;
    int64_t str = v1 == NULL ? (int64_t)&g13 : (int64_t)v1; // 0x41639d
    char v100 = *v3; // 0x4163aa
    int64_t v101; // 0x416370
    if (v100 == 0) {
        // 0x416404
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x416370
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x416370
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4163f0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4163f7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4163c0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4163cd
        char v107 = *(char *)v106; // 0x4163d2
        v102 = v107;
        if (v107 == 0) {
            // 0x416404
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4163db
    v104 = v103 + 1;
  lab_0x4163f7:
    // 0x416404
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x416472:;
    char * v108 = (char *)v97;
    g78 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4163aa;
  lab_0x4164b6:;
    int64_t v109 = v98 + path; // 0x4164b6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4164e2
    v24 = (int64_t)&g13;
    if (fd >= 0) {
        // 0x416511
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x416842
            close(fd);
            v24 = (int64_t)&g13;
        } else {
            // 0x416535
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x416550_2:;
                uint64_t v96 = *v32; // 0x416550
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4166dc;
                } else {
                    goto lab_0x41655e;
                }
            }
          lab_0x4166ef:
            // 0x4166ef
            function_4073b0(v27, v19);
            v24 = (int64_t)&g13;
            if (v18 != 0) {
                // 0x41670e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4164f4;
  lab_0x41645b:;
    int64_t * mem4 = malloc(size2); // 0x41645b
    v97 = (int64_t)&g13;
    if (mem4 != NULL) {
        // 0x416501
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4164b6;
    } else {
        goto lab_0x416472;
    }
  lab_0x4164f4:
    // 0x4164f4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x416472;
}
// Address range: 0x4168e0 - 0x41693d
int64_t function_4168e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4168e0
    return function_4019b0();
}
// Address range: 0x416940 - 0x416941
int64_t function_416940(void) {
    // 0x416940
    int64_t result; // 0x416940
    return result;
}
// Address range: 0x416950 - 0x416968
int64_t function_416950(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416950
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g23);
}
// Address range: 0x416968 - 0x416988
int64_t function_416968(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g19; // 0x416972
    while (*(int64_t *)v1 != -1) {
        // 0x416973
        v1 -= 8;
    }
    // 0x416984
    return result;
}
