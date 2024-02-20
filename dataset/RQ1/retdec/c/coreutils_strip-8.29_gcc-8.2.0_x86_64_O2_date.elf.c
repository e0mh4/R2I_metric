// Address range: 0x401da0 - 0x401da5
int64_t function_401da0(void) {
    // 0x401da0
    abort();
    // UNREACHABLE
}
// Address range: 0x401da5 - 0x401daa
int64_t function_401da5(void) {
    // 0x401da5
    abort();
    // UNREACHABLE
}
// Address range: 0x401daa - 0x401daf
int64_t function_401daa(void) {
    // 0x401daa
    abort();
    // UNREACHABLE
}
// Address range: 0x401daf - 0x401db4
int64_t function_401daf(void) {
    // 0x401daf
    abort();
    // UNREACHABLE
}
// Address range: 0x401db4 - 0x401db9
int64_t function_401db4(void) {
    // 0x401db4
    abort();
    // UNREACHABLE
}
// Address range: 0x401db9 - 0x401dbe
int64_t function_401db9(void) {
    // 0x401db9
    abort();
    // UNREACHABLE
}
// Address range: 0x401dbe - 0x401dc3
int64_t function_401dbe(void) {
    // 0x401dbe
    abort();
    // UNREACHABLE
}
// Address range: 0x401dd0 - 0x402540
int64_t function_401dd0(int64_t a1, int64_t a2) {
    // 0x401dd0
    function_409f40(a2);
    setlocale(LC_ALL, (char *)&g25);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401dd0
    function_412a60(0x403120, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int32_t * v2 = NULL; // bp-272, 0x401e2c
    int64_t v3; // 0x401dd0
    int64_t v4; // 0x401dd0
    int64_t v5; // 0x401de1
    while (true) {
      lab_0x401e40_2:
        // 0x401e40
        while (true) {
            // 0x401e40
            while (true) {
                // 0x401e40
                uint32_t v6; // 0x401dd0
                while (true) {
                    // 0x401e40
                    int64_t v7; // 0x401dd0
                    v4 = v7;
                    int64_t v8; // 0x401dd0
                    int64_t v9 = v8;
                    int64_t v10 = v9; // 0x401dd0
                    while (true) {
                      lab_0x401e40:
                        // 0x401e40
                        v3 = v10;
                        int64_t v11; // 0x401dd0
                        int64_t v12 = function_40d290(v5, a2, "d:f:I::r:Rs:u", &g3, 0, v11); // 0x401e53
                        v6 = (int32_t)v12;
                        switch (v6) {
                            case -1: {
                                goto lab_0x402025;
                            }
                            case 102: {
                                goto lab_0x401fb0;
                            }
                            default: {
                                if (v6 <= 102) {
                                    // break -> 0x401e90
                                    break;
                                }
                                int64_t v13; // 0x401dd0
                                if (v6 == 117) {
                                    // 0x401fc0
                                    if (putenv("TZ=UTC0") != 0) {
                                        // 0x40253b
                                        return function_40c3e0((int64_t)"TZ=UTC0");
                                    }
                                    // 0x401fd2
                                    tzset();
                                    v13 = v3;
                                } else {
                                    if (v6 > 117) {
                                        if (v6 == 128) {
                                            // 0x401eeb
                                            *(int64_t *)&v2 = v3;
                                            int32_t v14 = g33; // 0x401efb
                                            int64_t v15 = v14; // 0x401efb
                                            int32_t * v16 = g65; // 0x401f02
                                            int64_t v17 = function_403040("--rfc-3339", (int64_t)v16, g7, (int64_t *)&g5, 4, v15); // 0x401f0e
                                            goto lab_0x401ead_2;
                                        }
                                        if (v6 != 129) {
                                            // 0x402418
                                            *(int64_t *)&v2 = v3;
                                            goto lab_0x402418_4;
                                        }
                                        int32_t v18 = g50; // 0x401f8b
                                        g50 = v18 | 1;
                                        v13 = v3;
                                    } else {
                                        if (v6 != 114) {
                                            // break (via goto) -> 0x401ec0
                                            goto lab_0x401ec0;
                                        }
                                        int32_t * v19 = g65;
                                        v13 = (int64_t)v19;
                                    }
                                }
                                int64_t v20 = v13;
                                v10 = v20;
                                goto lab_0x401e40;
                            }
                        }
                    }
                    if (v6 == 73) {
                        // break (via goto) -> 0x401fe0
                        goto lab_0x401fe0;
                    }
                    if (v6 <= 73) {
                        // 0x401f48
                        *(int64_t *)&v2 = v3;
                        if (v6 == -131) {
                            struct _IO_FILE * v21 = g44; // 0x401f5f
                            char (*v22)[5] = g32; // 0x401f66
                            function_40c050((int64_t)v21, "date", "GNU coreutils", (int64_t)v22, "David MacKenzie", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        if (v6 == -130) {
                            // 0x401fa2
                            function_402750(0);
                            // UNREACHABLE
                        }
                        goto lab_0x402418_4;
                    }
                    if (v6 == 82) {
                        // 0x401ead
                        *(int64_t *)&v2 = v3;
                        goto lab_0x401ead_2;
                    }
                    if (v6 != 100) {
                        // 0x402418
                        *(int64_t *)&v2 = v3;
                        goto lab_0x402418_4;
                    }
                    int32_t * v23 = g65; // 0x401f39
                    v8 = v3;
                    v7 = (int64_t)v23;
                }
              lab_0x401ec0:
                if (v6 != 115) {
                    // 0x402418
                    *(int64_t *)&v2 = v3;
                    goto lab_0x402418_4;
                }
            }
          lab_0x401fb0:;
        }
      lab_0x401fe0:
        // 0x401fe0
        *(int64_t *)&v2 = v3;
        int32_t * v24 = g65; // 0x401fe0
        if (v24 != NULL) {
            int32_t v25 = g33; // 0x401ffe
            int64_t v26 = v25; // 0x401ffe
            int64_t v27 = function_403040("--iso-8601", (int64_t)v24, g6, (int64_t *)&g4, 4, v26); // 0x40200a
        }
        // 0x402016
        goto lab_0x401ead_2;
    }
  lab_0x402025:
    // 0x402025
    *(int64_t *)&v2 = v3;
    int64_t v28; // 0x401dd0
    uint64_t v29 = (int64_t)(v4 != 0) + (int64_t)(v28 != 0) + (int64_t)(v3 != 0); // 0x402042
    int64_t v30 = (int64_t)"the options to specify dates for printing are mutually exclusive"; // 0x402047
    int64_t v31; // 0x401dd0
    char * format; // 0x402517
    if ((int32_t)v29 > 1) {
        // 0x402515
        v31 = v30;
        format = dcgettext(NULL, (char *)v31, 5);
        error(0, 0, format);
        // 0x402418
        function_402750(1);
        // UNREACHABLE
    }
    // 0x40204d
    v30 = (int64_t)"the options to print and set the time may not be used together";
    int64_t v32; // 0x401dd0
    if ((v29 & v32) != 0) {
        // 0x402515
        v31 = v30;
        format = dcgettext(NULL, (char *)v31, 5);
        error(0, 0, format);
        // 0x402418
        function_402750(1);
        // UNREACHABLE
    }
    int32_t v33 = *(int32_t *)0x61b2fc; // 0x40205b
    int64_t v34 = v33; // 0x40205b
    int64_t v35; // 0x401dd0
    int64_t v36 = v35; // 0x402065
    int64_t v37 = a2; // 0x402065
    int64_t v38; // 0x401dd0
    int64_t v39; // 0x401dd0
    int64_t v40; // 0x401dd0
    int64_t v41; // 0x401dd0
    int64_t v42; // 0x401dd0
    int64_t v43; // 0x401dd0
    char * format2; // 0x402402
    if (v5 > v34) {
        int64_t v44 = v34 + 1; // 0x402067
        int64_t v45 = v44 & 0xffffffff; // 0x402067
        v39 = v34;
        v41 = a2;
        if (v45 < v5) {
            goto lab_0x4024ef;
        } else {
            int64_t v46 = *(int64_t *)(8 * v34 + a2); // 0x402073
            char v47 = *(char *)v46; // 0x402078
            if (v47 == 43) {
                // 0x402352
                v40 = a2;
                v38 = v28;
                if (v35 != 0) {
                    goto lab_0x4024a0;
                } else {
                    // 0x40235b
                    g42 = v44;
                    v36 = v46 + 1;
                    v37 = v45;
                    goto lab_0x402092;
                }
            } else {
                // 0x402081
                v36 = v35;
                v37 = v45;
                if ((v29 % 2 || v32) != 0) {
                    // 0x4023ee
                    function_40bb60(v46);
                    v42 = (int64_t)"the argument %s lacks a leading '+';\nwhen using an option to specify date(s), any non-option\nargument must be a format string beginning with '+'";
                    // 0x402400
                    v43 = v42;
                    format2 = dcgettext(NULL, (char *)v43, 5);
                    error(0, 0, format2);
                    // 0x402418
                    function_402750(1);
                    // UNREACHABLE
                }
                goto lab_0x402092;
            }
        }
    } else {
        goto lab_0x402092;
    }
  lab_0x401ead_2:;
    // 0x401ead
    int32_t * v48; // 0x401dd0
    int64_t v49; // 0x401dd0
    int64_t v50; // 0x401dd0
    if (v35 != 0) {
        // 0x402422
        error(1, (int32_t)"multiple output formats specified" ^ (int32_t)"multiple output formats specified", dcgettext(NULL, "multiple output formats specified", 5));
        v48 = (int32_t *)v3;
        v50 = a2;
        v49 = v28;
        goto lab_0x402444;
    }
    goto lab_0x401e40_2;
  lab_0x402092:;
    int64_t v51 = v37;
    int64_t v52 = v36;
    int64_t v53 = v52; // 0x402095
    if (v52 == 0) {
        char * v54 = nl_langinfo(0x2006c); // 0x402333
        char v55 = *v54; // 0x40233c
        int64_t v56 = v55 != 0 ? (int64_t)v54 : (int64_t)"%a %b %e %H:%M:%S %Z %Y";
        v53 = v56;
    }
    int64_t v57 = v53;
    int64_t env_val = (int64_t)getenv("TZ"); // 0x4020a4
    int64_t v58 = function_40db40(env_val, v51, v29); // 0x4020b1
    int32_t * v59; // 0x401dd0
    int32_t * v60; // 0x401dd0
    struct _IO_FILE * v61; // 0x401dd0
    int64_t v62; // 0x401dd0
    int64_t v63; // 0x401dd0
    int64_t v64; // 0x401dd0
    int64_t v65; // 0x401dd0
    int64_t v66; // 0x401dd0
    int64_t v67; // 0x401dd0
    int64_t v68; // 0x401dd0
    int64_t v69; // 0x401dd0
    int64_t v70; // 0x401dd0
    int64_t v71; // bp-200, 0x401dd0
    int64_t v72; // 0x401dd0
    int64_t v73; // 0x401dd0
    int64_t v74; // bp-216, 0x401dd0
    if (v28 == 0) {
        int64_t v75 = (v29 ^ 1) & (v32 ^ 1);
        if (v75 != 0) {
            int32_t v76 = g42; // 0x40226b
            int64_t v77 = v76; // 0x40226b
            if (v5 > v77) {
                int64_t v78 = *(int64_t *)(8 * v77 + a2); // 0x40227b
                v2 = (int32_t *)&v74;
                int64_t v79 = function_409c90(&v74, v78, 7); // 0x402295
                v59 = (int32_t *)&v74;
                v72 = 0;
                v70 = v57;
                v73 = 0;
                v66 = v78;
                if ((char)v79 == 0) {
                    goto lab_0x4023af;
                } else {
                    goto lab_0x4022ab;
                }
            } else {
                // 0x40236a
                function_404bc0(&v74);
                v69 = v57;
                v63 = v75;
                goto lab_0x402216;
            }
        } else {
            if (v3 == 0) {
                int32_t v80 = g50; // 0x402388
                int64_t v81; // 0x401dd0
                int64_t v82 = v81 != 0 ? v81 : v4; // 0x402391
                int64_t v83 = function_407bc0(&v74, v82, 0, v80, v58, env_val); // 0x4023a2
                v66 = v82;
                if ((char)v83 != 0) {
                    goto lab_0x402207;
                } else {
                    goto lab_0x4023af;
                }
            } else {
                int32_t v84 = __xstat(1, (char *)v3, (struct stat *)&v71); // 0x4021e0
                v60 = (int32_t *)v3;
                v67 = a2;
                v64 = v75;
                if (v84 != 0) {
                    goto lab_0x402471;
                } else {
                    goto lab_0x402207;
                }
            }
        }
    } else {
        char * str = (char *)v28; // 0x4020d0
        if (strcmp(str, "-") == 0) {
            struct _IO_FILE * v85 = g45; // 0x40225c
            v61 = v85;
            v62 = (int64_t)dcgettext(NULL, "standard input", 5);
            goto lab_0x4020f6;
        } else {
            struct _IO_FILE * file = fopen(str, "r"); // 0x4020e5
            v61 = file;
            v62 = v28;
            v68 = a2;
            v65 = v28;
            if (file == NULL) {
                goto lab_0x4024c2;
            } else {
                goto lab_0x4020f6;
            }
        }
    }
  lab_0x4024ef:;
    int64_t v86 = v41;
    int64_t v87 = v39;
    int64_t v88 = *(int64_t *)(v86 + 8 + 8 * v87); // 0x4024ef
    function_40bb60(v88);
    v42 = (int64_t)"extra operand %s";
    // 0x402400
    v43 = v42;
    format2 = dcgettext(NULL, (char *)v43, 5);
    error(0, 0, format2);
  lab_0x402418_4:
    // 0x402418
    function_402750(1);
    // UNREACHABLE
  lab_0x4024a0:;
    int64_t v89 = v38;
    int64_t v90 = v40;
    error(1, (int32_t)"multiple output formats specified" ^ (int32_t)"multiple output formats specified", dcgettext(NULL, "multiple output formats specified", 5));
    v68 = v90;
    v65 = v89;
    goto lab_0x4024c2;
  lab_0x4020f6:;
    int64_t v125 = v62;
    struct _IO_FILE * v126 = v61;
    int64_t v127 = 0; // bp-224, 0x402100
    v74 = 0;
    v2 = (int32_t *)&v74;
    int32_t v128 = __getdelim((char **)&v127, (int32_t *)&v74, 10, v126); // 0x402132
    int32_t * v129 = (int32_t *)&v74; // 0x40213d
    int32_t * v130 = (int32_t *)&v74; // 0x40213d
    int32_t v131 = v128; // 0x40213d
    int64_t v132 = 1; // 0x40213d
    int64_t v133 = 1; // 0x40213d
    int32_t * v134 = (int32_t *)&v74; // 0x40213d
    if (v128 >= 0) {
        int32_t * v135 = v129;
        int32_t v136 = g50; // 0x402154
        int64_t v137 = v127; // 0x40215a
        int64_t v138 = function_407bc0(&v71, v137, 0, v136, v58, env_val); // 0x40215f
        int32_t v139; // 0x401dd0
        int32_t * v140; // 0x401dd0
        int32_t * v141; // 0x401dd0
        int32_t * v142; // 0x401dd0
        int32_t * v143; // 0x401dd0
        int32_t * v144; // 0x401dd0
        int32_t * v145; // 0x401dd0
        int64_t v146; // 0x401dd0
        int64_t v147; // 0x401dd0
        int64_t v148; // 0x401dd0
        int64_t v149; // 0x401dd0
        int64_t v150; // 0x401dd0
        int64_t v151; // 0x4022f1
        int64_t v152; // 0x40216c
        char * v153; // 0x402176
        char v154; // 0x402176
        int64_t v155; // 0x40217e
        if ((char)v138 != 0) {
            // 0x4022ec
            v146 = v132;
            v145 = v130;
            v151 = v71;
            v140 = v135;
            v144 = v145;
            v147 = function_402620(v57, v151, v150, v58) & v146;
        } else {
            // 0x40216c
            v139 = v131;
            v152 = v127;
            v153 = (char *)((int64_t)v139 - 1 + v152);
            v154 = *v153;
            v142 = v135;
            v148 = v152;
            if (v154 == 10) {
                // 0x40217b
                *v153 = 0;
                v155 = v127;
                v141 = v2;
                v142 = v141;
                v148 = v155;
            }
            // 0x402183
            v149 = v148;
            v143 = v142;
            function_40bb60(v149);
            error(0, (int32_t)"invalid date %s" ^ (int32_t)"invalid date %s", dcgettext(NULL, "invalid date %s", 5));
            v140 = v143;
            v144 = v143;
            v147 = 0;
        }
        int64_t v156 = v147;
        int32_t * v157 = v144; // 0x402120
        int32_t * v158 = v140;
        int32_t v159 = __getdelim((char **)&v127, v157, 10, v126); // 0x402132
        v129 = v158;
        v130 = v157;
        v131 = v159;
        v132 = v156;
        v133 = v156;
        v134 = v157;
        while (v159 >= 0) {
            // 0x402143
            v135 = v129;
            v136 = g50;
            v137 = v127;
            v138 = function_407bc0(&v71, v137, 0, v136, v58, env_val);
            if ((char)v138 != 0) {
                // 0x4022ec
                v146 = v132;
                v145 = v130;
                v151 = v71;
                v140 = v135;
                v144 = v145;
                v147 = function_402620(v57, v151, v150, v58) & v146;
            } else {
                // 0x40216c
                v139 = v131;
                v152 = v127;
                v153 = (char *)((int64_t)v139 - 1 + v152);
                v154 = *v153;
                v142 = v135;
                v148 = v152;
                if (v154 == 10) {
                    // 0x40217b
                    *v153 = 0;
                    v155 = v127;
                    v141 = v2;
                    v142 = v141;
                    v148 = v155;
                }
                // 0x402183
                v149 = v148;
                v143 = v142;
                function_40bb60(v149);
                error(0, (int32_t)"invalid date %s" ^ (int32_t)"invalid date %s", dcgettext(NULL, "invalid date %s", 5));
                v140 = v143;
                v144 = v143;
                v147 = 0;
            }
            // 0x402120
            v156 = v147;
            v157 = v144;
            v158 = v140;
            v159 = __getdelim((char **)&v127, v157, 10, v126);
            v129 = v158;
            v130 = v157;
            v131 = v159;
            v132 = v156;
            v133 = v156;
            v134 = v157;
        }
    }
    int32_t * v160 = v134;
    int64_t v161 = v133;
    int64_t v162 = function_40c420((int64_t)v126, (int64_t)v160); // 0x40230d
    v48 = v160;
    v50 = v161;
    v49 = v125;
    int64_t v111; // 0x401dd0
    uint64_t v112; // 0x401dd0
    if ((int32_t)v162 != -1) {
        int64_t v163 = v127; // 0x40231b
        free((int64_t *)v163);
        v111 = v161;
        // 0x402232
        v112 = v111;
        return v112 % 256 ^ 1;
    }
    goto lab_0x402444;
  lab_0x4024c2:;
    int64_t v91 = v65;
    int64_t v92 = v68;
    int64_t v93 = function_40b9e0(0, 3, v91); // 0x4024cc
    int32_t * v94 = __errno_location(); // 0x4024d4
    int32_t err_num = *v94; // 0x4024e6
    error(1, err_num, "%s", (char *)v93);
    v39 = &g73;
    v41 = v92;
    goto lab_0x4024ef;
  lab_0x4023af:;
    int64_t v95 = v66;
    int64_t v96 = v73;
    int64_t v97 = function_40bb60(v95); // 0x4023b2
    error(1, (int32_t)"invalid date %s" ^ (int32_t)"invalid date %s", dcgettext(NULL, "invalid date %s", 5));
    int64_t v98 = v96; // 0x4023da
    int64_t v99 = v97; // 0x4023da
    goto lab_0x4023df;
  lab_0x4022ab:;
    int64_t v102 = v70;
    int64_t v103 = v72;
    int32_t * v104 = v59; // 0x4022ab
    int64_t v105 = v103; // 0x4022b7
    v69 = v102;
    v63 = 1;
    if ((int32_t)function_40bb80((int64_t)v104) != 0) {
        char * format3 = dcgettext(NULL, "cannot set date", 5); // 0x4022cc
        int32_t * v106 = __errno_location(); // 0x4022d4
        int32_t err_num2 = *v106; // 0x4022de
        error(0, err_num2, format3);
        v105 = v103;
        v69 = v102;
        v63 = 0;
    }
    goto lab_0x402216;
  lab_0x402216:;
    int64_t v107 = v63;
    int64_t v108 = v69;
    int64_t v109 = v105;
    int64_t v110 = v74; // 0x40221b
    v111 = function_402620(v108, v110, v109, v58) & v107;
    // 0x402232
    v112 = v111;
    return v112 % 256 ^ 1;
  lab_0x402207:;
    // 0x402207
    int64_t v113; // 0x401dd0
    int64_t v114 = v113;
    v105 = v114;
    v69 = v57;
    v63 = 1;
    v98 = v114;
    v99 = v57;
    if (v32 != 0) {
        goto lab_0x4023df;
    } else {
        goto lab_0x402216;
    }
  lab_0x402471:;
    int64_t v115 = v64;
    int64_t v116 = v67;
    int32_t * v117 = v60; // 0x402471
    int64_t v118 = function_40b9e0(0, 3, (int64_t)v117); // 0x40247d
    int32_t * v119 = __errno_location(); // 0x402485
    int32_t err_num3 = *v119; // 0x402497
    error(1, err_num3, "%s", (char *)v118);
    v40 = v116;
    v38 = v115;
    goto lab_0x4024a0;
  lab_0x402444:;
    int64_t v120 = v49;
    int64_t v121 = v50;
    int32_t * v122 = v48;
    int64_t v123 = function_40b9e0(0, 3, v120); // 0x40244e
    int32_t * v124 = __errno_location(); // 0x402456
    int32_t err_num4 = *v124; // 0x402468
    error(1, err_num4, "%s", (char *)v123);
    v60 = v122;
    v67 = v121;
    v64 = v120;
    goto lab_0x402471;
  lab_0x4023df:;
    int64_t v100 = v99;
    int64_t v101 = v98;
    v2 = (int32_t *)&v74;
    v59 = (int32_t *)&v74;
    v72 = v101;
    v70 = v100;
    goto lab_0x4022ab;
}
// Address range: 0x402540 - 0x40256b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402540
    int64_t v1; // 0x402540
    __libc_start_main(0x401dd0, (int32_t)a4, (char **)&v1, (void (*)())0x4129f0, (void (*)())0x412a50, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40256b - 0x40258a
int64_t function_40256b(void) {
    // 0x40256b
    return &g43;
}
// Address range: 0x40258a - 0x4025c1
int64_t function_40258a(void) {
    // 0x40258a
    return 0;
}
// Address range: 0x4025c1 - 0x402618
int64_t function_4025c1(void) {
    // 0x4025c1
    if (g48 != 0) {
        // 0x402617
        int64_t result; // 0x4025c1
        return result;
    }
    int64_t v1 = g49; // 0x4025f4
    int64_t result2; // 0x402606
    if (g49 >= ((int64_t)&g29 - (int64_t)&g28 >> 3) - 1) {
        // 0x402606
        result2 = function_40256b();
        g48 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g29 - (int64_t)&g28 >> 3) - 1) {
        // 0x4025f6
        v1++;
    }
    // 0x4025ea
    g49 = v1;
    // 0x402606
    result2 = function_40256b();
    g48 = 1;
    return result2;
}
// Address range: 0x402618 - 0x40261d
int64_t function_402618(void) {
    // 0x402618
    return function_40258a();
}
// Address range: 0x402620 - 0x402744
int64_t function_402620(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a2; // bp-136, 0x40262f
    int64_t v2; // bp-88, 0x402620
    if (function_40de20(a4, &v1, &v2) == 0) {
        // 0x4026a0
        int64_t v3; // bp-120, 0x402620
        int64_t v4 = function_404c00(v1, &v3); // 0x4026a9
        function_40bb60(v4);
        error(0, (int32_t)"time %s is out of range" ^ (int32_t)"time %s is out of range", dcgettext(NULL, "time %s is out of range", 5));
        return (int32_t)&g73 ^ (int32_t)&g73;
    }
    if (a1 == (int64_t)"%a, %d %b %Y %H:%M:%S %z") {
        // 0x4026e8
        setlocale(LC_TIME, "C");
        function_404ba0((int64_t)g44, (int64_t)"%a, %d %b %Y %H:%M:%S %z", &v2, a4, a3 & 0xffffffff);
        setlocale(LC_TIME, (char *)&g25);
    } else {
        // 0x402657
        function_404ba0((int64_t)g44, a1, &v2, a4, a3 & 0xffffffff);
    }
    int64_t v5 = (int64_t)g44; // 0x402673
    int64_t * v6 = (int64_t *)(v5 + 40); // 0x40267a
    uint64_t v7 = *v6; // 0x40267a
    if (v7 >= *(int64_t *)(v5 + 48)) {
        // 0x402730
        __overflow(g44, 10);
    } else {
        // 0x402688
        *v6 = v7 + 1;
        *(char *)v7 = 10;
    }
    // 0x402698
    return 1;
}
// Address range: 0x402750 - 0x402d65
int64_t function_402750(int32_t status) {
    // 0x402750
    if (status != 0) {
        // 0x40276a
        __fprintf_chk(g47, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40278f
        exit(status);
        // UNREACHABLE
    }
    // 0x402796
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [+FORMAT]\n  or:  %s [-u|--utc|--universal] [MMDDhhmm[[CC]YY][.ss]]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Display the current time in the given FORMAT, or set the system date.\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -d, --date=STRING          display time described by STRING, not 'now'\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --debug                annotate the parsed date,\n                              and warn about questionable usage to stderr\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -f, --file=DATEFILE        like --date; once for each line of DATEFILE\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -I[FMT], --iso-8601[=FMT]  output date/time in ISO 8601 format.\n                               FMT='date' for date only (the default),\n                               'hours', 'minutes', 'seconds', or 'ns'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14T02:34:56-06:00\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -R, --rfc-email            output date and time in RFC 5322 format.\n                               Example: Mon, 14 Aug 2006 02:34:56 -0600\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --rfc-3339=FMT         output date/time in RFC 3339 format.\n                               FMT='date', 'seconds', or 'ns'\n                               for date and time to the indicated precision.\n                               Example: 2006-08-14 02:34:56-06:00\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -r, --reference=FILE       display the last modification time of FILE\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -s, --set=STRING           set time described by STRING\n  -u, --utc, --universal     print or set Coordinated Universal Time (UTC)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nFORMAT controls the output.  Interpreted sequences are:\n\n  %%   a literal %\n  %a   locale's abbreviated weekday name (e.g., Sun)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %A   locale's full weekday name (e.g., Sunday)\n  %b   locale's abbreviated month name (e.g., Jan)\n  %B   locale's full month name (e.g., January)\n  %c   locale's date and time (e.g., Thu Mar  3 23:05:25 2005)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %C   century; like %Y, except omit last two digits (e.g., 20)\n  %d   day of month (e.g., 01)\n  %D   date; same as %m/%d/%y\n  %e   day of month, space padded; same as %_d\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %F   full date; same as %Y-%m-%d\n  %g   last two digits of year of ISO week number (see %G)\n  %G   year of ISO week number (see %V); normally useful only with %V\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %h   same as %b\n  %H   hour (00..23)\n  %I   hour (01..12)\n  %j   day of year (001..366)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %k   hour, space padded ( 0..23); same as %_H\n  %l   hour, space padded ( 1..12); same as %_I\n  %m   month (01..12)\n  %M   minute (00..59)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %n   a newline\n  %N   nanoseconds (000000000..999999999)\n  %p   locale's equivalent of either AM or PM; blank if not known\n  %P   like %p, but lower case\n  %q   quarter of year (1..4)\n  %r   locale's 12-hour clock time (e.g., 11:11:04 PM)\n  %R   24-hour hour and minute; same as %H:%M\n  %s   seconds since 1970-01-01 00:00:00 UTC\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %S   second (00..60)\n  %t   a tab\n  %T   time; same as %H:%M:%S\n  %u   day of week (1..7); 1 is Monday\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %U   week number of year, with Sunday as first day of week (00..53)\n  %V   ISO week number, with Monday as first day of week (01..53)\n  %w   day of week (0..6); 0 is Sunday\n  %W   week number of year, with Monday as first day of week (00..53)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %x   locale's date representation (e.g., 12/31/99)\n  %X   locale's time representation (e.g., 23:13:48)\n  %y   last two digits of year (00..99)\n  %Y   year\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  %z   +hhmm numeric time zone (e.g., -0400)\n  %:z  +hh:mm numeric time zone (e.g., -04:00)\n  %::z  +hh:mm:ss numeric time zone (e.g., -04:00:00)\n  %:::z  numeric time zone with : to necessary precision (e.g., -04, +05:30)\n  %Z   alphabetic time zone abbreviation (e.g., EDT)\n\nBy default, date pads numeric fields with zeroes.\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "The following optional flags may follow '%':\n\n  -  (hyphen) do not pad the field\n  _  (underscore) pad with spaces\n  0  (zero) pad with zeros\n  ^  use upper case if possible\n  #  use opposite case if possible\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nAfter any flags comes an optional field width, as a decimal number;\nthen an optional modifier, which is either\nE to use the locale's alternate representations if available, or\nO to use the locale's alternate numeric symbols if available.\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nExamples:\nConvert seconds since the epoch (1970-01-01 UTC) to a date\n  $ date --date='@2147483647'\n\nShow the time on the west coast of the US (use tzselect(1) to find TZ)\n  $ TZ='America/Los_Angeles' date\n\nShow the local time for 9AM next Friday on the west coast of the US\n  $ date --date='TZ=\"America/Los_Angeles\" 09:00 next Fri'\n", 5), g44);
    int64_t v1 = &g1; // bp-136, 0x402b45
    bool v2; // 0x402750
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402bc8
    int64_t v6 = *(int64_t *)v5; // 0x402bcc
    int64_t v7 = 5; // 0x402bd2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"date";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402bde
        char v11 = *(char *)v9; // 0x402bde
        char v12 = v11; // 0x402bde
        bool v13 = false; // 0x402bde
        while (v10 == v11) {
            // 0x402bd4
            v7--;
            int64_t v14 = v9 + v3; // 0x402bde
            int64_t v15 = v8 + v3; // 0x402bde
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
            // break -> 0x402bea
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x402bea
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402cfc;
        } else {
            // 0x402ce6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c4c;
            } else {
                goto lab_0x402cfc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402c4c;
        } else {
            // 0x402c32
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c4c;
            } else {
                goto lab_0x402c4c;
            }
        }
    }
  lab_0x402cfc:
    // 0x402cfc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40278f
    exit(status);
    // UNREACHABLE
  lab_0x402c4c:
    // 0x402c4c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40278f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402d70 - 0x402d7a
int64_t function_402d70(void) {
    // 0x402d70
    return function_402750(1);
}
// Address range: 0x402d80 - 0x402e96
int64_t function_402d80(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x402da1
    int32_t len = strlen(str); // 0x402da1
    if (a2 == 0) {
        // 0x402e6d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x402e07
    int64_t v4 = a3; // 0x402d80
    int64_t v5 = a2; // 0x402e0e
    int64_t str4; // 0x402d80
    int64_t v6; // 0x402d80
    int32_t v7; // 0x402d80
    int32_t v8; // 0x402d80
    int32_t v9; // 0x402d80
    int64_t v10; // 0x402d80
    int64_t result; // 0x402d80
    int32_t v11; // 0x402e03
    char * str2; // 0x402e22
    while (true) {
        // 0x402e17
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x402e2b
            result = v6;
            if (len == strlen(str2)) {
                // 0x402e6d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x402e3f
                break;
            }
            // 0x402dd0
            v7 = 1;
            if (a3 != 0) {
                // 0x402dde
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x402e07
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
    int64_t v12 = v6 + 1; // 0x402e43
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x402e4a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x402e17
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x402e17
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x402e2b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x402e6d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x402e3f
                    break;
                }
                // 0x402dd0
                v7 = 1;
                if (a3 != 0) {
                    // 0x402dde
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x402e07
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
        // 0x402e3f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x402e58:
    // 0x402e6d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x402ea0 - 0x402f11
int64_t function_402ea0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x402ea0
    if (a3 == -1) {
        // 0x402f00
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x402eb5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x402ec4
    function_40bb40(1, a1);
    function_40b830(0, 8, a2);
    error(0, 0, format);
    return &g73;
}
// Address range: 0x402f20 - 0x403038
int64_t function_402f20(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x402f4d
    fputs_unlocked(v1, g47);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x402fc0
        int64_t v5; // 0x402fc7
        int64_t v6; // 0x402fe7
        while (v3 != 0) {
            // 0x402fab
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x402f70
                break;
            }
            // 0x402fbd
            v4 = v3 + 1;
            v5 = function_40bb60(v2);
            __fprintf_chk(g47, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x402ff0
                goto lab_0x402ff0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x402f73
        int64_t v8 = function_40bb60(v2); // 0x402f7d
        __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x402f9d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x402fab
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x402f70
                    break;
                }
                // 0x402fbd
                v4 = v3 + 1;
                v5 = function_40bb60(v2);
                __fprintf_chk(g47, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x402ff0
                    goto lab_0x402ff0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x402f70
            v7 = v3 + 1;
            v8 = function_40bb60(v2);
            __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x402ff0:;
    int64_t v10 = (int64_t)g47; // 0x402ff0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x402ff7
    uint64_t result = *v11; // 0x402ff7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x403020
        return __overflow(g47, 10);
    }
    // 0x403001
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x403040 - 0x4030b0
int64_t function_403040(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_402d80(a2, v2, v1, a5); // 0x40306c
    int64_t result = v3; // 0x403074
    if (v3 < 0) {
        // 0x403088
        function_402ea0((int64_t)a1, a2, v3);
        function_402f20(v2, v1, a5);
        result = -1;
    }
    // 0x403076
    return result;
}
// Address range: 0x4030b0 - 0x4030fd
int64_t function_4030b0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x4030b0
    if (result == 0) {
        // 0x4030f1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x4030e8
    int32_t n = a4; // 0x4030e8
    int64_t v1 = result; // 0x4030ef
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x4030f1
        return result;
    }
    int64_t str3 = str2; // 0x4030ef
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x4030d0
    int64_t result2 = 0; // 0x4030dd
    while (v2 != 0) {
        // 0x4030df
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x4030f1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x4030f1
    return result2;
}
// Address range: 0x403100 - 0x403108
int64_t function_403100(int64_t a1) {
    // 0x403100
    g52 = a1;
    int64_t result; // 0x403100
    return result;
}
// Address range: 0x403110 - 0x403118
int64_t function_403110(int64_t a1) {
    // 0x403110
    g51 = a1;
    int64_t result; // 0x403110
    return result;
}
// Address range: 0x403120 - 0x4031be
int64_t function_403120(void) {
    // 0x403120
    int32_t * err_num; // 0x403136
    if ((int32_t)function_40e0d0((int64_t)g44) == 0) {
        goto lab_0x40314c;
    } else {
        // 0x403136
        err_num = __errno_location();
        if (g51 == 0) {
            goto lab_0x403163;
        } else {
            // 0x403147
            if (*err_num != 32) {
                goto lab_0x403163;
            } else {
                goto lab_0x40314c;
            }
        }
    }
  lab_0x40314c:;
    int64_t result = function_40e0d0((int64_t)g47); // 0x403153
    if ((int32_t)result == 0) {
        // 0x40315c
        return result;
    }
    // 0x40319e
    _exit(g34);
    // UNREACHABLE
  lab_0x403163:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40316f
    if (g52 == 0) {
        // 0x4031a9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403183
        error(0, *err_num, "%s: %s", (char *)function_40b9b0((int64_t)g52), v1);
    }
    // 0x40319e
    _exit(g34);
    // UNREACHABLE
}
// Address range: 0x4031c0 - 0x403211
int64_t function_4031c0(int64_t stream, int64_t a2, int64_t a3) {
    // 0x4031c0
    if (a3 == 0) {
        // 0x403210
        int64_t result; // 0x4031c0
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x4031db
    int64_t v2 = a2; // 0x4031e3
    unsigned char v3 = *(char *)v2; // 0x4031e8
    v2++;
    int32_t c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x4031f6
    int32_t fputc_rc = fputc(c, (struct _IO_FILE *)stream); // 0x4031f9
    while (v2 != a3 + a2) {
        // 0x4031e8
        v3 = *(char *)v2;
        v2++;
        c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        fputc_rc = fputc(c, (struct _IO_FILE *)stream);
    }
    // 0x403203
    return fputc_rc;
}
// Address range: 0x403220 - 0x403271
int64_t function_403220(int64_t stream, int64_t a2, int64_t a3) {
    // 0x403220
    if (a3 == 0) {
        // 0x403270
        int64_t result; // 0x403220
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x40323b
    int64_t v2 = a2; // 0x403243
    unsigned char v3 = *(char *)v2; // 0x403248
    v2++;
    int32_t c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x403256
    int32_t fputc_rc = fputc(c, (struct _IO_FILE *)stream); // 0x403259
    while (v2 != a3 + a2) {
        // 0x403248
        v3 = *(char *)v2;
        v2++;
        c = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        fputc_rc = fputc(c, (struct _IO_FILE *)stream);
    }
    // 0x403263
    return fputc_rc;
}
// Address range: 0x403280 - 0x404b9e
int64_t function_403280(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403280
    int64_t v1; // 0x403280
    char v2 = *(char *)&v1; // 0x4032c9
    if (v2 == 0) {
        // 0x403317
        return 0;
    }
    int64_t v3 = a1;
    int64_t v4; // bp-1240, 0x403280
    int64_t v5 = &v4; // 0x403295
    struct _IO_FILE * stream = (struct _IO_FILE *)v3;
    int64_t v6 = v5 | 4;
    char * v7 = (char *)v6;
    int64_t * tm = (int64_t *)(v5 + 8);
    int64_t v8 = v5 + 48;
    int32_t * v9 = (int32_t *)v8;
    int64_t * v10 = (int64_t *)(v5 + 24);
    int64_t v11 = v5 + 80;
    int32_t * v12 = (int32_t *)v11;
    int64_t str2 = v5 + 160;
    int64_t v13 = v5 + 72;
    int32_t * v14 = (int32_t *)v13;
    int64_t v15 = v5 + 151;
    char * v16 = (char *)v13;
    int32_t * v17 = (int32_t *)(v5 + 68);
    int64_t * str = (int64_t *)(v5 + 40);
    int64_t * v18 = (int64_t *)v8;
    int64_t * v19 = (int64_t *)v13;
    char * c3 = (char *)v11;
    int64_t format = v5 + 128;
    int16_t * v20 = (int16_t *)format;
    int64_t * v21 = (int64_t *)(v5 + 16);
    int32_t * v22 = (int32_t *)(v5 + 1248);
    int32_t * v23 = (int32_t *)v6;
    int64_t * v24 = (int64_t *)(v5 - 16);
    int64_t * v25 = (int64_t *)(v5 + 32);
    int64_t data2 = v5 + 161;
    char * v26 = (char *)v8;
    int64_t v27 = v5 + 88;
    int64_t * v28 = (int64_t *)v27;
    int64_t v29 = v5 + 96;
    int64_t * v30 = (int64_t *)v29;
    int64_t v31 = v5 + 104;
    int32_t * v32 = (int32_t *)v31;
    int64_t * v33 = (int64_t *)(v5 + 112);
    int64_t * v34 = (int64_t *)v31;
    int32_t * v35 = (int32_t *)v29;
    int32_t * v36 = (int32_t *)v27;
    int64_t * v37 = (int64_t *)v11;
    int64_t * v38 = (int64_t *)(v5 + 120);
    int64_t v39 = a3; // 0x403280
    int64_t v40 = a2; // 0x40330a
    char v41 = v2; // 0x40330a
    int64_t v42 = 0;
    char v43; // 0x403280
    char v44; // 0x403280
    char v45; // 0x403280
    char v46; // 0x403280
    char v47; // 0x403280
    char v48; // 0x403280
    char v49; // 0x403280
    char v50; // 0x403280
    char v51; // 0x403280
    char v52; // 0x403280
    int64_t v53; // 0x403280
    int64_t v54; // 0x403280
    int64_t v55; // 0x403280
    int64_t v56; // 0x403280
    int64_t v57; // 0x403280
    int64_t result; // 0x403280
    int64_t v58; // 0x403280
    int64_t v59; // 0x403280
    int64_t v60; // 0x403280
    int64_t v61; // 0x403280
    int64_t v62; // 0x403280
    int64_t v63; // 0x403280
    int64_t v64; // 0x403280
    int64_t v65; // 0x403280
    int64_t v66; // 0x403280
    while (true) {
      lab_0x4032ea:
        // 0x4032ea
        v56 = v42;
        char c = v41;
        int64_t v67 = v40;
        v66 = v39;
        char v68 = v44;
        char v69 = v43;
        if (c == 37) {
            // 0x403360
            *v7 = *(char *)(v5 + 67);
            v48 = v69;
            v50 = v68;
            v64 = v67;
            v61 = 0;
            v54 = 0;
            while (true) {
              lab_0x403370_3:
                // 0x403370
                v55 = v54;
                int64_t v70 = v64 + 1; // 0x403370
                char v71 = *(char *)v70; // 0x403374
                char v72 = v71; // 0x40337d
                int64_t v73 = v70; // 0x40337d
                int64_t v74 = v61; // 0x40337d
                char v75 = v50; // 0x40337d
                char v76 = v48; // 0x40337d
                v47 = v48;
                v49 = v50;
                v63 = v70;
                v60 = v61;
                v53 = 48;
                if (v71 != 48) {
                    v62 = v74;
                    v65 = v73;
                    v58 = v72;
                    v52 = v75;
                    v51 = v76;
                    int64_t v77; // 0x403385
                    char v78; // 0x403389
                    int64_t v79; // 0x403389
                    while (v51 <= v52) {
                        if (v58 != 35) {
                            // 0x4033a8
                            v47 = v51;
                            v49 = v52;
                            v63 = v65;
                            v60 = v62;
                            v53 = v58;
                            if ((char)v58 == 45) {
                                goto lab_0x403370_2;
                            } else {
                                goto lab_0x4033ac;
                            }
                        }
                        // 0x403385
                        v77 = v65 + 1;
                        v78 = *(char *)v77;
                        v79 = v78;
                        v47 = v78;
                        v49 = 48;
                        v63 = v77;
                        v60 = 1;
                        v53 = v79;
                        if (v78 == 48) {
                            goto lab_0x403370_2;
                        }
                        v62 = 1;
                        v65 = v77;
                        v58 = v79;
                        v52 = 48;
                        v51 = v78;
                    }
                    char v80 = v58;
                    while (v80 == 94) {
                        // 0x4033e4
                        *v7 = 1;
                        int64_t v81 = v65 + 1; // 0x403370
                        char v82 = *(char *)v81; // 0x403374
                        v72 = v82;
                        v73 = v81;
                        v74 = v62;
                        v75 = v52;
                        v76 = v51;
                        v47 = v51;
                        v49 = v52;
                        v63 = v81;
                        v60 = v62;
                        v53 = 48;
                        if (v82 == 48) {
                            goto lab_0x403370_2;
                        }
                        v62 = v74;
                        v65 = v73;
                        v58 = v72;
                        v52 = v75;
                        v51 = v76;
                        while (v51 <= v52) {
                            if (v58 != 35) {
                                // 0x4033a8
                                v47 = v51;
                                v49 = v52;
                                v63 = v65;
                                v60 = v62;
                                v53 = v58;
                                if ((char)v58 == 45) {
                                    goto lab_0x403370_2;
                                } else {
                                    goto lab_0x4033ac;
                                }
                            }
                            // 0x403385
                            v77 = v65 + 1;
                            v78 = *(char *)v77;
                            v79 = v78;
                            v47 = v78;
                            v49 = 48;
                            v63 = v77;
                            v60 = 1;
                            v53 = v79;
                            if (v78 == 48) {
                                goto lab_0x403370_2;
                            }
                            v62 = 1;
                            v65 = v77;
                            v58 = v79;
                            v52 = 48;
                            v51 = v78;
                        }
                        // 0x4033e0
                        v80 = v58;
                    }
                    // 0x4033f0
                    v47 = v51;
                    v49 = v52;
                    v63 = v65;
                    v60 = v62;
                    v53 = v58;
                    if (v80 != 95) {
                        // break -> 0x4033ac
                        break;
                    }
                }
                goto lab_0x403370_2;
            }
            goto lab_0x4033ac;
        } else {
            // 0x4032f0
            result = 0;
            if (v56 >= 0xfffffffffffffffe) {
                // break -> 0x403317
                break;
            }
            if (a1 != 0) {
                // 0x4032fb
                fputc((int32_t)c, stream);
            }
            // 0x403303
            v45 = v69;
            v46 = v68;
            v39 = v66;
            v59 = v67;
            v57 = v56 + 1;
            goto lab_0x40330a;
        }
    }
  lab_0x403317_12:
    // 0x403317
    return result;
  lab_0x403370_2:
    // 0x403370
    v48 = v47;
    v50 = v49;
    v64 = v63;
    v61 = v60;
    v54 = v53 & 0xffffffff;
    goto lab_0x403370_3;
  lab_0x403456:;
    // 0x403456
    int64_t v83; // 0x403413
    int64_t v84 = v83; // 0x403459
    int64_t v85; // 0x40341b
    int64_t v86 = v85; // 0x403459
    int64_t v87; // 0x40341d
    int64_t v88 = v87; // 0x403459
    int64_t v89; // 0x403413
    int64_t v90 = v89; // 0x403459
    int64_t v91 = v85; // 0x403459
    int64_t v92 = 0x7fffffff; // 0x403459
    int64_t v93; // 0x40341d
    if ((int32_t)v93 >= 10) {
        // break -> 0x4033ba
        goto lab_0x4033ba_2;
    }
    // 0x40345f
    int64_t v94; // 0x403280
    int64_t v95 = v94 + 2; // 0x40345f
    int64_t v96 = (int64_t)*(char *)v95; // 0x40345f
    int64_t v97 = v96; // 0x403472
    int64_t v98 = v96 & 0xffffffff; // 0x403472
    int64_t v99 = v96 + 0xffffffd0 & 0xffffffff; // 0x403472
    int64_t v100 = v95; // 0x403472
    int64_t v101 = 0x7fffffff; // 0x403472
    goto lab_0x40343a;
  lab_0x40343a:;
    int64_t v102 = v101;
    int64_t v103 = v100;
    int64_t v104 = v99;
    int64_t v105 = v103; // 0x40343d
    int64_t v106 = v102; // 0x40343d
    if ((int32_t)v104 >= 10) {
        // 0x40343f
        v84 = v97;
        v86 = v98;
        v88 = v104;
        v90 = v103;
        v91 = v97 & 0xffffffff;
        v92 = v102;
        goto lab_0x4033ba_2;
    }
    goto lab_0x403413;
  lab_0x4033ac:;
    int64_t v111 = v58 & 0xffffffff;
    v84 = v58;
    v86 = v111;
    v88 = v66;
    v90 = v65;
    v91 = v111;
    v92 = 0xffffffff;
    v105 = v65;
    v106 = 0;
    if ((int32_t)v58 < 58) {
        while (true) {
          lab_0x403413:;
            int64_t v107 = v106;
            v94 = v105;
            v89 = v94 + 1;
            v83 = (int64_t)*(char *)v89;
            v85 = v83 & 0xffffffff;
            v93 = v83 + 0xffffffd0;
            v87 = v93 & 0xffffffff;
            int32_t v108 = v107; // 0x403420
            if (v108 > 0xccccccc) {
                goto lab_0x403456;
            } else {
                char v109 = *(char *)v94; // 0x403429
                int64_t v110 = v109; // 0x403429
                v1 = v110;
                if (v108 != 0xccccccc || v109 < 56) {
                    // 0x40342e
                    v97 = v83;
                    v98 = v85;
                    v99 = v87;
                    v100 = v89;
                    v101 = 10 * v107 + 0xffffffd0 + v110 & 0xffffffff;
                    goto lab_0x40343a;
                } else {
                    goto lab_0x403456;
                }
            }
        }
    }
    goto lab_0x4033ba_2;
  lab_0x40330a:
    // 0x40330a
    v42 = v57;
    v40 = v59 + 1;
    v41 = *(char *)v40;
    v43 = v45;
    v44 = v46;
    result = v42;
    if (v41 == 0) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    goto lab_0x4032ea;
  lab_0x4033ba_2:;
    int64_t v112 = v92;
    int64_t v113 = v90;
    int64_t v114 = v88;
    int64_t v115 = v86; // 0x403280
    int64_t v116 = v113; // 0x403280
    int64_t v117 = v91; // 0x403280
    int64_t v118 = 0; // 0x403280
    int64_t v119; // 0x403280
    switch ((char)v119) {
        case 79: {
        }
        case 69: {
            int64_t v120 = v113 + 1; // 0x403400
            int64_t v121 = (int64_t)*(char *)v120; // 0x403400
            v115 = v121 & 0xffffffff;
            v116 = v120;
            v117 = v121;
            v118 = v84 & 0xffffffff;
            // break -> 0x4033d0
            break;
        }
    }
    int64_t v122 = v118;
    int64_t v123 = v116;
    int64_t v124 = v115;
    g66 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v123; // 0x4033d3
    int64_t v127 = v114; // 0x4033d3
    int64_t v128 = v123; // 0x4033d3
    int64_t v129 = 0; // 0x4033d3
    char v130 = 1; // 0x4033d3
    int64_t v131; // 0x403280
    int64_t v132; // 0x403280
    int64_t v133; // 0x403280
    int64_t v134; // 0x403280
    int32_t v135; // 0x403280
    int64_t v136; // 0x403280
    int64_t v137; // 0x403280
    int64_t v138; // 0x403280
    int64_t v139; // 0x403280
    int64_t v140; // 0x403280
    int64_t v141; // 0x403280
    int64_t v142; // 0x403280
    int64_t v143; // 0x403280
    int64_t v144; // 0x403280
    int64_t v145; // 0x403280
    int64_t v146; // 0x403280
    int64_t v147; // 0x403280
    int64_t v148; // 0x403280
    int64_t v149; // 0x403280
    int64_t v150; // 0x403280
    int64_t v151; // 0x403280
    int64_t v152; // 0x403280
    int64_t v153; // 0x403280
    int64_t v154; // 0x403280
    int64_t v155; // 0x403280
    int64_t v156; // 0x403280
    int64_t v157; // 0x403280
    int64_t v158; // 0x403280
    int64_t v159; // 0x403280
    int64_t v160; // 0x403280
    int64_t v161; // 0x403280
    int64_t v162; // 0x403280
    int64_t v163; // 0x403280
    int64_t v164; // 0x403280
    int64_t v165; // 0x403280
    int64_t v166; // 0x403280
    int64_t v167; // 0x403280
    int64_t v168; // 0x403280
    int64_t v169; // 0x403280
    int64_t v170; // 0x403280
    int64_t v171; // 0x403280
    int64_t v172; // 0x403280
    int64_t v173; // 0x403280
    int64_t v174; // 0x403280
    int64_t v175; // 0x403280
    int64_t v176; // 0x403280
    int32_t v177; // 0x403280
    switch (v125) {
        case 0: {
            // 0x403823
            v171 = v123 - 1;
            goto lab_0x40382b;
        }
        case 37: {
            int64_t c2 = v117;
            int32_t v178 = v112; // 0x4038e1
            int64_t v179 = -1 - v56;
            int64_t v180 = v178 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x4038fc
            int64_t v181 = v180 != 0 ? v180 : 1; // 0x403901
            v1 = v181;
            *v18 = v181;
            if (v122 != 0) {
                goto lab_0x403863;
            } else {
                // 0x403913
                if (v1 >= v179) {
                    // break -> 0x403317
                    break;
                }
                // 0x40391c
                v176 = v179;
                if (a1 != 0) {
                    // 0x403921
                    if (v178 >= 2) {
                        // 0x403927
                        int64_t v182; // 0x403280
                        int64_t v183 = v182 - 1; // 0x40392d
                        int64_t v184 = 0; // 0x403935
                        int64_t v185 = 0; // 0x403935
                        if (v55 == 48) {
                            int64_t v186 = v185;
                            int64_t v187 = v186 + 1; // 0x404416
                            fputc(48, stream);
                            v185 = v187;
                            while (v183 != v187) {
                                // 0x40440e
                                v186 = v185;
                                v187 = v186 + 1;
                                fputc(48, stream);
                                v185 = v187;
                            }
                        } else {
                            int64_t v188 = v184;
                            int64_t v189 = v188 + 1; // 0x403943
                            fputc(32, stream);
                            v184 = v189;
                            while (v183 != v189) {
                                // 0x40393b
                                v188 = v184;
                                v189 = v188 + 1;
                                fputc(32, stream);
                                v184 = v189;
                            }
                        }
                    }
                    // 0x403954
                    fputc((int32_t)c2, stream);
                    v176 = v179;
                }
                goto lab_0x40395c;
            }
        }
        case 58: {
            int64_t v190 = v123 + 1; // 0x4043ec
            char v191 = *(char *)v190; // 0x4043ec
            char v192 = v191; // 0x4043fc
            int64_t v193 = v190; // 0x4043fc
            int64_t v194 = 1; // 0x4043fc
            if (v191 == 58) {
                int64_t v195 = 2; // 0x404429
                int64_t v196 = v195 + v123; // 0x40442d
                char v197 = *(char *)v196; // 0x40442d
                v192 = v197;
                v193 = v196;
                v194 = v195;
                int64_t v198 = v195; // 0x404438
                while (v197 == 58) {
                    // 0x404429
                    v195 = v198 + 1;
                    v196 = v195 + v123;
                    v197 = *(char *)v196;
                    v192 = v197;
                    v193 = v196;
                    v194 = v195;
                    v198 = v195;
                }
            }
            // 0x4043fe
            v126 = v123;
            v127 = v193;
            v128 = v193;
            v129 = v194;
            if (v192 != 122) {
                goto lab_0x403da0;
            } else {
                goto lab_0x403de9;
            }
        }
        case 65: {
            goto lab_0x403478;
        }
        case 66: {
            goto lab_0x403478;
        }
        case 67: {
            // 0x403652
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            if (v122 == 69) {
                goto lab_0x40360f;
            } else {
                int32_t v199 = *(int32_t *)(*tm + 20); // 0x40366c
                int32_t v200 = v199 / 100; // 0x40367d
                int32_t v201 = v200 + 19; // 0x403681
                int32_t v202 = v199 + 1900; // 0x403695
                int64_t v203 = v201 - (int32_t)(-100 * v200 + v199 < 0 == v201 >= 0 == (v201 != 0)); // 0x40369f
                v1 = v203;
                v132 = v203;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v202 < 0 != ((v202 ^ v199) & (v199 ^ -0x80000000)) < 0;
                v156 = 2;
                v140 = v112;
                v146 = v55;
                goto lab_0x4035fc;
            }
        }
        case 68: {
            // 0x4036aa
            v126 = v123;
            if (v122 != 0) {
                goto lab_0x403da0;
            } else {
                // 0x4036b3
                *v18 = (int64_t)"%m/%d/%y";
                goto lab_0x4036bc;
            }
        }
        case 70: {
            // 0x404095
            v126 = v123;
            if (v122 != 0) {
                goto lab_0x403da0;
            } else {
                // 0x40409e
                *v18 = (int64_t)"%Y-%m-%d";
                goto lab_0x4036bc;
            }
        }
        case 71: {
            goto lab_0x4040ac;
        }
        case 72: {
            // 0x4035d2
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v204 = (int64_t)*(int32_t *)(*tm + 8); // 0x4035e7
                v1 = v204;
                v131 = v204;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 73: {
            // 0x40363c
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v205 = (int64_t)*v17; // 0x403646
                v1 = v205;
                v131 = v205;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 77: {
            // 0x403969
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v206 = (int64_t)*(int32_t *)(*tm + 4); // 0x40397e
                v1 = v206;
                v131 = v206;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 78: {
            // 0x4043a8
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                uint32_t v207 = (int32_t)v112; // 0x4043b2
                if (v207 != -1) {
                    int64_t v208 = (int64_t)*v22;
                    v1 = v208;
                    int64_t v209 = v208; // 0x4048f8
                    int64_t v210 = v112; // 0x4048f8
                    int64_t v211 = v208; // 0x4048f8
                    if (v207 <= 8) {
                        int64_t v212 = v209;
                        int64_t v213 = (v210 & 0xffffffff) + 1; // 0x404915
                        int64_t v214 = ((int32_t)(0x66666667 * (0x100000000 * v212 >> 32) / 0x100000000) >> 2) - ((int32_t)v212 >> 31); // 0x404920
                        v210 = v213;
                        while ((int32_t)v213 != 9) {
                            // 0x404910
                            v212 = v214;
                            v213 = (v210 & 0xffffffff) + 1;
                            v214 = ((int32_t)(0x66666667 * (0x100000000 * v212 >> 32) / 0x100000000) >> 2) - ((int32_t)v212 >> 31);
                            v210 = v213;
                        }
                        // 0x404927
                        v1 = v214;
                        v211 = v214;
                    }
                    // 0x404927
                    v131 = v211;
                    v155 = v112 & 0xffffffff;
                    v139 = v112;
                    v145 = v55;
                } else {
                    int64_t v215 = (int64_t)*v22; // 0x4043bc
                    v1 = v215;
                    v131 = v215;
                    v155 = 9;
                    v139 = 9;
                    v145 = v55;
                }
                goto lab_0x4035f0;
            }
        }
        case 80: {
            goto lab_0x404216;
        }
        case 82: {
            // 0x404240
            *v18 = (int64_t)"%H:%M";
            goto lab_0x4036bc;
        }
        case 83: {
            // 0x403986
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v216 = (int64_t)*(int32_t *)*tm; // 0x40399b
                v1 = v216;
                v131 = v216;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 84: {
            // 0x4043d4
            *v18 = (int64_t)"%H:%M:%S";
            goto lab_0x4036bc;
        }
        case 85: {
            // 0x4039a2
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v217 = *tm; // 0x4039ac
                v177 = *(int32_t *)(v217 + 28) + 7 - *(int32_t *)(v217 + 24);
                goto lab_0x4039c3;
            }
        }
        case 86: {
            goto lab_0x4040ac;
        }
        case 87: {
            // 0x4039d9
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v218 = *tm; // 0x4039e3
                int32_t v219 = *(int32_t *)(v218 + 24); // 0x4039ed
                int32_t v220 = v219 + 6; // 0x4039f1
                *v9 = v219;
                int32_t v221 = *(int32_t *)(v218 + 28); // 0x403a14
                v177 = 1 - v219 + v221 + 7 * ((v220 + (int32_t)(-0x6db6db6d * (int64_t)v220 / 0x100000000) >> 2) - (v220 >> 31));
                goto lab_0x4039c3;
            }
        }
        case 88: {
            goto lab_0x4035a0;
        }
        case 89: {
            // 0x403a24
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            v126 = v123;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x40360f;
                }
                case 79: {
                    goto lab_0x403da0;
                }
                default: {
                    int32_t v222 = *(int32_t *)(*tm + 20); // 0x403a43
                    int32_t v223 = v222 + 1900; // 0x403a46
                    int64_t v224 = v223; // 0x403a50
                    v1 = v224;
                    v133 = v224;
                    v164 = v123;
                    v160 = 0;
                    v173 = 0;
                    v152 = v223 < 0 != ((v223 ^ v222) & (v222 ^ -0x80000000)) < 0;
                    v158 = 4;
                    v142 = v112;
                    v148 = v55;
                    goto lab_0x403a60;
                }
            }
        }
        case 90: {
            char v225 = v62;
            *v9 = (int32_t)v112;
            *v14 = (int32_t)v55;
            *v7 = v225 != 0 ? 0 : *v7;
            int32_t len = strlen((char *)*str); // 0x403ca6
            int64_t v226 = len; // 0x403ca6
            int32_t v227 = *v9; // 0x403cab
            int64_t v228 = v227; // 0x403cab
            uint64_t v229 = v227 >= 0 ? v228 : 0; // 0x403cc1
            int64_t v230 = v229 <= v226 ? v226 : v229; // 0x403ccb
            *v18 = v230;
            if (v230 >= -1 - v56) {
                // break -> 0x403317
                break;
            }
            // 0x403cdd
            v176 = v230;
            if (a1 != 0) {
                char v231 = v225; // 0x403cee
                if (v229 > v226) {
                    int64_t v232 = v228 - v226; // 0x403cf3
                    *v19 = v232;
                    if (*v14 == 48) {
                        // 0x404b54
                        v231 = v225;
                        if (v232 != 0) {
                            int64_t v233 = 1; // 0x404b6d
                            fputc(48, stream);
                            v231 = v225;
                            int64_t v234 = v233; // 0x404b7b
                            while (*v19 != v233) {
                                // 0x404b65
                                v233 = v234 + 1;
                                fputc(48, stream);
                                v231 = v225;
                                v234 = v233;
                            }
                        }
                    } else {
                        // 0x403d05
                        v231 = v225;
                        if (v232 != 0) {
                            // 0x403d0d
                            *c3 = v225;
                            int64_t v235 = 0; // 0x403d1b
                            v235++;
                            fputc(32, stream);
                            while (*v19 != v235) {
                                // 0x403d20
                                v235++;
                                fputc(32, stream);
                            }
                            // 0x403d36
                            v231 = *c3;
                        }
                    }
                }
                // 0x403d41
                if (v231 != 0) {
                    // 0x404a1f
                    function_4031c0(v3, *str, v226);
                    v176 = v226;
                } else {
                    int64_t data = *str;
                    if (*v7 == 0) {
                        // 0x404a05
                        fwrite((int64_t *)data, len, 1, stream);
                        v176 = 1;
                    } else {
                        // 0x403d55
                        function_403220(v3, data, v226);
                        v176 = v226;
                    }
                }
            }
            goto lab_0x40395c;
        }
        case 97: {
            goto lab_0x403478;
        }
        case 98: {
            goto lab_0x403d83;
        }
        case 99: {
            goto lab_0x4035a0;
        }
        case 100: {
            // 0x404332
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v236 = (int64_t)*(int32_t *)(*tm + 12); // 0x404347
                v1 = v236;
                v131 = v236;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 101: {
            // 0x40434f
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v237 = (int64_t)*(int32_t *)(*tm + 12); // 0x40435e
                v1 = v237;
                v134 = v237;
                goto lab_0x403c20;
            }
        }
        case 103: {
            goto lab_0x4040ac;
        }
        case 104: {
            goto lab_0x403d83;
        }
        case 106: {
            // 0x404366
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int32_t v238 = *(int32_t *)(*tm + 28); // 0x40437b
                int32_t v239 = v238 + 1; // 0x40437e
                int64_t v240 = v239; // 0x404385
                v1 = v240;
                v132 = v240;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v239 < 0 != (v239 & (v238 ^ -0x80000000)) < 0;
                v156 = 3;
                v140 = v112;
                v146 = v55;
                goto lab_0x4035fc;
            }
        }
        case 107: {
            // 0x404391
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v241 = (int64_t)*(int32_t *)(*tm + 8); // 0x4043a0
                v1 = v241;
                v134 = v241;
                goto lab_0x403c20;
            }
        }
        case 108: {
            // 0x403c12
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v242 = (int64_t)*v17; // 0x403c1c
                v1 = v242;
                v134 = v242;
                goto lab_0x403c20;
            }
        }
        case 109: {
            // 0x404307
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int32_t v243 = *(int32_t *)(*tm + 16); // 0x40431c
                int32_t v244 = v243 + 1; // 0x40431f
                int64_t v245 = v244; // 0x404326
                v1 = v245;
                v132 = v245;
                v168 = v123;
                v162 = 0;
                v172 = 0;
                v154 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v156 = 2;
                v140 = v112;
                v146 = v55;
                goto lab_0x4035fc;
            }
        }
        case 110: {
            int32_t v246 = v112; // 0x40424e
            int64_t v247 = 0x100000000 * v112 >> 32;
            int64_t v248 = v246 >= 0 ? v247 : 0; // 0x40425f
            int64_t v249 = v248 == 0 ? 1 : v248; // 0x404265
            if (v249 >= -1 - v56) {
                // break -> 0x403317
                break;
            }
            // 0x404278
            v175 = v114;
            v163 = v249;
            if (a1 != 0) {
                if (v246 >= 2) {
                    int64_t v250 = v247 - 1; // 0x40428d
                    if (v55 == 48) {
                        int64_t v251 = 1; // 0x4042c7
                        fputc(48, stream);
                        int64_t v252 = v251; // 0x4042d3
                        while (v250 != v251) {
                            // 0x4042bf
                            v251 = v252 + 1;
                            fputc(48, stream);
                            v252 = v251;
                        }
                    } else {
                        int64_t v253 = 1; // 0x40429f
                        fputc(32, stream);
                        int64_t v254 = v253; // 0x4042ab
                        while (v250 != v253) {
                            // 0x404297
                            v253 = v254 + 1;
                            fputc(32, stream);
                            v254 = v253;
                        }
                    }
                }
                // 0x4042ad
                fputc(10, stream);
                v175 = v114;
                v163 = v249;
            }
            goto lab_0x403796;
        }
        case 112: {
            // 0x4043e2
            v130 = 0;
            goto lab_0x404216;
        }
        case 113: {
            // 0x4042d7
            v169 = v123;
            v157 = 1;
            v141 = v112;
            v147 = v55;
            if (v122 == 79) {
                goto lab_0x40360f;
            } else {
                // 0x4042ef
                v1 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v165 = v123;
                v161 = 0;
                v174 = 0;
                v153 = 0;
                v159 = 1;
                v136 = v112;
                v149 = v55;
                goto lab_0x403a67;
            }
        }
        case 114: {
            // 0x4035aa
            *v16 = 0;
            v170 = v124;
            goto lab_0x4035af;
        }
        case 115: {
            int64_t v255 = *tm; // 0x403e9f
            *v12 = (int32_t)v112;
            *v14 = (int32_t)v55;
            int128_t v256 = __asm_movdqu(*(int128_t *)(v255 + 32)); // 0x403ec3
            int128_t v257 = __asm_movdqu(*(int128_t *)v255); // 0x403ec8
            int128_t v258 = __asm_movdqu(*(int128_t *)(v255 + 16)); // 0x403ecc
            *(int128_t *)str2 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v5 + 176) = (int128_t)__asm_movaps(v258);
            *(int128_t *)v8 = (int128_t)__asm_movaps(v256);
            *(int128_t *)(v5 + 192) = (int128_t)__asm_movaps(v256);
            *(int64_t *)(v5 + 208) = *(int64_t *)(v255 + 48);
            int64_t v259 = function_40ded0(*v10, str2, v114, v124); // 0x403efa
            uint32_t v260 = *v12; // 0x403f04
            v1 = v259;
            int64_t v261 = v259;
            int64_t v262 = v261 >> 63; // 0x403f30
            char v263 = (v261 >> 63 & 246) + v261; // 0x403f48
            int64_t v264 = v15 - 1; // 0x403f53
            *(char *)v264 = (v259 < 0 ? -v263 : v263) + 48;
            while (v262 != 0) {
                // 0x403f18
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & 246) + v261;
                v264--;
                *(char *)v264 = (v1 < 0 ? -v263 : v263) + 48;
            }
            int64_t v265 = (int64_t)*v14; // 0x403eff
            int64_t v266 = v260; // 0x403f04
            int32_t v267 = v260 >= 0 == (v260 != 0) ? v260 : 1; // 0x403f6d
            *v9 = v267;
            v135 = v267;
            v166 = v123;
            v137 = v266;
            v143 = v265;
            v151 = v264;
            v167 = v123;
            v138 = v266;
            v144 = v265;
            v150 = v264;
            if (v1 < 0) {
                goto lab_0x404450;
            } else {
                goto lab_0x403f7b;
            }
        }
        case 116: {
            int32_t v268 = v112; // 0x4037a1
            int64_t v269 = 0x100000000 * v112 >> 32;
            int64_t v270 = v268 >= 0 ? v269 : 0; // 0x4037b2
            int64_t v271 = v270 == 0 ? 1 : v270; // 0x4037b8
            if (v271 >= -1 - v56) {
                // break -> 0x403317
                break;
            }
            // 0x4037cb
            v175 = v114;
            v163 = v271;
            if (a1 != 0) {
                if (v268 >= 2) {
                    int64_t v272 = v269 - 1; // 0x4037dc
                    if (v55 == 48) {
                        int64_t v273 = 1; // 0x403813
                        fputc(48, stream);
                        int64_t v274 = v273; // 0x40381f
                        while (v272 != v273) {
                            // 0x40380b
                            v273 = v274 + 1;
                            fputc(48, stream);
                            v274 = v273;
                        }
                    } else {
                        int64_t v275 = 1; // 0x4037ee
                        fputc(32, stream);
                        int64_t v276 = v275; // 0x4037fa
                        while (v272 != v275) {
                            // 0x4037e6
                            v275 = v276 + 1;
                            fputc(32, stream);
                            v276 = v275;
                        }
                    }
                }
                // 0x4037fc
                fputc(9, stream);
                v175 = v114;
                v163 = v271;
            }
            goto lab_0x403796;
        }
        case 117: {
            int32_t v277 = *(int32_t *)(*tm + 24); // 0x403c55
            int32_t v278 = v277 + 6; // 0x403c58
            *v9 = v277;
            int64_t v279 = v277 + 7 + -7 * ((v278 + (int32_t)(-0x6db6db6d * (int64_t)v278 / 0x100000000) >> 2) - (v278 >> 31)); // 0x403c7b
            v1 = v279;
            v131 = v279;
            v155 = 1;
            v139 = v112;
            v145 = v55;
            goto lab_0x4035f0;
        }
        case 119: {
            // 0x403d6a
            v126 = v123;
            if (v122 == 69) {
                goto lab_0x403da0;
            } else {
                int64_t v280 = (int64_t)*(int32_t *)(*tm + 24); // 0x403d7b
                v1 = v280;
                v131 = v280;
                v155 = 1;
                v139 = v112;
                v145 = v55;
                goto lab_0x4035f0;
            }
        }
        case 120: {
            goto lab_0x4035a0;
        }
        case 121: {
            // 0x404046
            v169 = v123;
            v157 = 0;
            v141 = v112;
            v147 = v55;
            if (v122 == 69) {
                goto lab_0x40360f;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x404060
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x404078
                v1 = v283;
                v131 = v283;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x404087
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x40408d
                    int64_t v286 = v285 & 0xffffffff; // 0x40408d
                    v1 = v286;
                    v131 = v286;
                    v155 = 2;
                    v139 = v112;
                    v145 = v55;
                }
                goto lab_0x4035f0;
            }
        }
        case 122: {
            goto lab_0x403de9;
        }
        default: {
            goto lab_0x403da0;
        }
    }
  lab_0x403478:
    // 0x403478
    v126 = v123;
    if (v122 != 0) {
        goto lab_0x403da0;
    } else {
        char v287 = v62; // 0x403486
        *v7 = v287 != 0 ? v287 : *v7;
        goto lab_0x403490;
    }
  lab_0x4040ac:
    // 0x4040ac
    v126 = v123;
    if (v122 == 69) {
        goto lab_0x403da0;
    } else {
        int64_t v288 = *tm; // 0x4040b6
        int32_t v289 = *(int32_t *)(v288 + 20); // 0x4040bb
        uint32_t v290 = *(int32_t *)(v288 + 28); // 0x4040be
        v1 = v290;
        uint32_t v291 = *(int32_t *)(v288 + 24); // 0x4040c1
        int32_t v292 = v290 - v291; // 0x4040d1
        int32_t v293 = v292 + 382; // 0x4040d4
        int32_t v294 = v289 - 100 + (v289 >> 31 & 400); // 0x4040df
        int32_t v295 = v290 - 379 - v292 + 7 * ((v293 + (int32_t)(-0x6db6db6d * (int64_t)v293 / 0x100000000) >> 2) - (v293 >> 31)); // 0x404104
        int32_t v296; // 0x403280
        int32_t v297; // 0x404190
        if (v295 < 0) {
            int64_t v298 = 365; // 0x404878
            if ((v294 + 3) % 4 == 0) {
                int32_t v299 = v294 - 1;
                v298 = 366;
                if (v299 % 100 - v299 == 1 - v294) {
                    uint32_t v300 = v299 % 400;
                    int64_t v301 = v300; // 0x4048a7
                    v298 = v301 + 366 + (v301 ^ 0xffffffff) + (int64_t)(v300 == 0) & 0xffffffff;
                }
            }
            int64_t v302 = v298;
            int64_t v303; // 0x4040be
            int64_t v304 = v302 + v303; // 0x4048b6
            int64_t v305; // 0x4040c1
            int64_t v306 = v304 - v305 + 382; // 0x4048c8
            v296 = (int32_t)(v304 - v306) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v306 >> 32) / 0x100000000 + v306) >> 2) - ((int32_t)v306 >> 31));
        } else {
            int64_t v307 = 365; // 0x40411b
            if (v294 % 4 == 0) {
                // 0x40411d
                v307 = 366;
                if (v294 % 100 == 0) {
                    // 0x404145
                    v307 = v294 == 0 ? 366 : 365;
                }
            }
            int64_t v308 = v1 - v307; // 0x404162
            int64_t v309 = v308 - (int64_t)v291 + 382; // 0x40416e
            v297 = (int32_t)(v308 - v309) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v309 >> 32) / 0x100000000 + v309) >> 2) - ((int32_t)v309 >> 31));
            v296 = v297 >= 0 ? v297 : v295;
        }
        int64_t v310 = (v297 >> 31) + 1;
        if (v125 == 71) {
            int64_t v311 = (int64_t)v289 + 1900 + v310 & 0xffffffff; // 0x40495a
            v1 = v311;
            int32_t v312 = -1900 - (int32_t)v310; // 0x404968
            int32_t v313 = v289 - v312; // 0x40496b
            v132 = v311;
            v168 = v123;
            v162 = 0;
            v172 = 0;
            v154 = v313 < 0 != ((v313 ^ v289) & (v312 ^ v289)) < 0;
            v156 = 4;
            v140 = v112;
            v146 = v55;
            goto lab_0x4035fc;
        } else {
            if (v125 != 103) {
                int32_t v314 = v296;
                int32_t v315 = v314 < 0 ? 2 : 1; // 0x40494a
                int64_t v316 = v315 + (v314 + (int32_t)(-0x6db6db6d * (int64_t)v314 / 0x100000000) >> 2); // 0x40494d
                v1 = v316;
                v131 = v316;
                v155 = 2;
                v139 = v112;
                v145 = v55;
            } else {
                int32_t v317 = v310; // 0x4041d8
                int32_t v318 = (v289 % 100 + v317) % 100;
                int64_t v319 = v318; // 0x4041ee
                v1 = v319;
                v131 = v319;
                v155 = 2;
                v139 = v112;
                v145 = v55;
                if (v318 < 0) {
                    int32_t v320 = -1900 - v317; // 0x404202
                    int32_t v321 = v289 - v320; // 0x404207
                    int64_t v322 = v321 < 0 == ((v321 ^ v289) & (v320 ^ v289)) < 0 ? v319 + 100 : -v319; // 0x404209
                    int64_t v323 = v322 & 0xffffffff; // 0x404209
                    v1 = v323;
                    v131 = v323;
                    v155 = 2;
                    v139 = v112;
                    v145 = v55;
                }
            }
            goto lab_0x4035f0;
        }
    }
  lab_0x404216:
    // 0x404216
    *v16 = v130;
    char v324 = v62; // 0x40421b
    *v16 = v324 != 0 ? v324 : v130;
    *v7 = v324 != 0 ? 0 : *v7;
    v170 = 112;
    goto lab_0x4035af;
  lab_0x4035a0:
    // 0x4035a0
    v126 = v123;
    if (v122 == 79) {
        goto lab_0x403da0;
    } else {
        // 0x4035aa
        *v16 = 0;
        v170 = v124;
        goto lab_0x4035af;
    }
  lab_0x403d83:;
    char v541 = v62; // 0x403d88
    *v7 = v541 != 0 ? v541 : *v7;
    v126 = v123;
    if (v122 == 0) {
        goto lab_0x403490;
    } else {
        goto lab_0x403da0;
    }
  lab_0x403de9:;
    int64_t v521 = v128;
    int64_t v542 = *tm; // 0x403de9
    v45 = v51;
    v46 = v52;
    v39 = v127;
    v59 = v521;
    v57 = v56;
    int64_t v522; // 0x403280
    uint32_t v520; // 0x403e66
    uint32_t v524; // 0x403e6a
    if (*(int32_t *)(v542 + 32) < 0) {
        goto lab_0x40330a;
    } else {
        int64_t v543 = *(int64_t *)(v542 + 40); // 0x403df9
        v1 = v543;
        int32_t v544 = v543;
        int64_t v545 = 1; // 0x403e05
        if (v544 >= 0) {
            // 0x403e07
            v545 = 0;
            if (v544 == 0) {
                // 0x403e0f
                v545 = *(char *)*str == 45;
            }
        }
        // 0x403e1b
        v522 = v545;
        int64_t v546 = 0x100000000 * v543 >> 32; // 0x403e29
        int32_t v547 = v544 >> 31; // 0x403e2b
        *v9 = ((int32_t)(-0x6e5d4c3b * v546 / 0x100000000) + v544 >> 11) - v547;
        int32_t v548 = ((int32_t)(v1 + -0x77777777 * v546 / 0x100000000) >> 5) - v547; // 0x403e45
        v520 = -60 * ((v548 + (int32_t)(-0x77777777 * (int64_t)v548 / 0x100000000) >> 5) - (v548 >> 31)) + v548;
        v524 = -60 * v548 + (int32_t)v1;
        v1 = v524;
        v171 = v521;
        switch (v129) {
            case 1: {
                goto lab_0x4049e9;
            }
            case 0: {
                int64_t v549 = (int64_t)(100 * *v9 + v520); // 0x404a46
                v1 = v549;
                v132 = v549;
                v168 = v521;
                v162 = 1;
                v172 = 0;
                v154 = v522;
                v156 = 5;
                v140 = v112;
                v146 = v55;
                goto lab_0x4035fc;
            }
            case 2: {
                goto lab_0x4049c5;
            }
            case 3: {
                if (v524 != 0) {
                    goto lab_0x4049c5;
                } else {
                    if (v520 != 0) {
                        goto lab_0x4049e9;
                    } else {
                        int64_t v550 = (int64_t)*v9; // 0x404a59
                        v1 = v550;
                        v132 = v550;
                        v168 = v521;
                        v162 = 1;
                        v172 = v520;
                        v154 = v522;
                        v156 = 3;
                        v140 = v112;
                        v146 = v55;
                        goto lab_0x4035fc;
                    }
                }
            }
            default: {
                goto lab_0x40382b;
            }
        }
    }
  lab_0x403da0:;
    int64_t v551 = v126;
    int64_t v552 = v551 - 1;
    while (*(char *)v552 != 37) {
        // 0x403da7
        v551 = v552;
        v552 = v551 - 1;
    }
    int64_t v553 = 0x100000000 * (v126 + 2 - v551) >> 32; // 0x403dc0
    int64_t v554 = (int32_t)v112 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x403dd0
    int64_t v555 = v553 >= v554 ? v553 : v554; // 0x403dd8
    *v18 = v555;
    int64_t v556 = v555; // 0x403de1
    int64_t v557 = v554; // 0x403de1
    int64_t v558 = v126; // 0x403de1
    int64_t v559 = v553; // 0x403de1
    int64_t v560 = v552; // 0x403de1
    goto lab_0x403863;
  lab_0x403863:;
    int64_t v561 = -1 - v56;
    result = 0;
    if (v561 <= v556) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    int64_t v562 = v558;
    int64_t v407 = v561; // 0x403871
    int64_t v408 = v562; // 0x403871
    int64_t size3; // 0x403280
    int64_t data4; // 0x403280
    int64_t v526; // 0x403280
    if (a1 == 0) {
        goto lab_0x403590;
    } else {
        // 0x403877
        data4 = v560;
        size3 = v559;
        if (size3 >= v557) {
            goto lab_0x4038c3;
        } else {
            int64_t v563 = (0x100000000 * v112 >> 32) - size3; // 0x403882
            if (v55 == 48) {
                // 0x40479b
                v526 = v562;
                if (v563 == 0) {
                    goto lab_0x4038c3;
                } else {
                    // 0x4047a7
                    *v19 = v562;
                    int64_t v564; // 0x403280
                    int64_t v565 = v564 + 1; // 0x4047c0
                    fputc(48, stream);
                    v564 = v565;
                    while (v563 != v565) {
                        int64_t v566 = v564;
                        v565 = v566 + 1;
                        fputc(48, stream);
                        v564 = v565;
                    }
                    // 0x4038be
                    v526 = *v19;
                    goto lab_0x4038c3;
                }
            } else {
                // 0x40388f
                v526 = v562;
                if (v563 == 0) {
                    goto lab_0x4038c3;
                } else {
                    // 0x403896
                    *v19 = v562;
                    int64_t v567 = 0; // 0x4038a1
                    v567++;
                    fputc(32, stream);
                    while (v563 != v567) {
                        // 0x4038a8
                        v567++;
                        fputc(32, stream);
                    }
                    // 0x4038be
                    v526 = *v19;
                    goto lab_0x4038c3;
                }
            }
        }
    }
  lab_0x40382b:;
    int64_t v568 = v171;
    v126 = v568;
    if (*(char *)v568 != 37) {
        goto lab_0x403da0;
    } else {
        int64_t v569 = (int32_t)v112 >= 0 ? 0x100000000 * v112 >> 32 : 0; // 0x40383d
        int64_t v570 = v569 != 0 ? v569 : 1; // 0x403854
        *v18 = v570;
        v556 = v570;
        v557 = v569;
        v558 = v568;
        v559 = 1;
        v560 = v568;
        goto lab_0x403863;
    }
  lab_0x40360f:
    // 0x40360f
    *v16 = 0;
    *v20 = 0x2520;
    int64_t v326 = v124; // 0x403619
    int64_t v327 = v169; // 0x403619
    int64_t v328 = v157; // 0x403619
    int64_t v329 = v141; // 0x403619
    int64_t v330 = v147; // 0x403619
    goto lab_0x403621;
  lab_0x4035af:;
    int64_t v325 = v170;
    *v20 = 0x2520;
    v326 = v325;
    v327 = v123;
    v328 = 0;
    v329 = v112;
    v330 = v55;
    int64_t v331; // 0x403280
    int64_t v332; // 0x403280
    int64_t v333; // 0x403280
    int64_t v334; // 0x403280
    int64_t v335; // 0x403280
    int64_t v336; // 0x403280
    if (v122 != 0) {
        goto lab_0x403621;
    } else {
        // 0x4035c5
        v334 = *v21;
        v336 = v325;
        v335 = v123;
        v331 = v112;
        v332 = v55;
        v333 = v122;
        goto lab_0x4034b0;
    }
  lab_0x4036bc:;
    unsigned char v337 = *v7; // 0x4036bc
    *v14 = (int32_t)v112;
    *v12 = (int32_t)v55;
    *v23 = (int32_t)v337;
    *v24 = (int64_t)*v22;
    uint64_t v338 = function_403280(0, *v18, *tm, (int64_t)v337, *v25, *v10); // 0x4036f3
    int32_t v339 = *v14; // 0x4036ff
    int64_t v340 = v339; // 0x4036ff
    uint64_t v341 = v339 >= 0 ? v340 : 0; // 0x40370d
    int64_t v342 = v338 >= v341 ? v338 : v341; // 0x403717
    result = 0;
    if (v342 >= -1 - v56) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    // 0x403724
    v175 = v341;
    v163 = v342;
    if (a1 != 0) {
        if (v338 < v341) {
            int64_t v343 = v340 - v338; // 0x403736
            if (*v12 == 48) {
                // 0x40483b
                if (v343 != 0) {
                    int64_t v344 = 1; // 0x404858
                    fputc(48, stream);
                    int64_t v345 = v344; // 0x404864
                    while (v343 != v344) {
                        // 0x404850
                        v344 = v345 + 1;
                        fputc(48, stream);
                        v345 = v344;
                    }
                }
            } else {
                // 0x403743
                if (v343 != 0) {
                    int64_t v346 = 1; // 0x403758
                    fputc(32, stream);
                    int64_t v347 = v346; // 0x403764
                    while (v343 != v346) {
                        // 0x403750
                        v346 = v347 + 1;
                        fputc(32, stream);
                        v347 = v346;
                    }
                }
            }
        }
        // 0x403766
        *v24 = (int64_t)*v22;
        int64_t v348 = *tm; // 0x403783
        function_403280(a1, *v18, v348, (int64_t)*v23, *v25, *v10);
        v175 = v348;
        v163 = v342;
    }
    goto lab_0x403796;
  lab_0x40395c:
    // 0x40395c
    v45 = v51;
    v46 = v52;
    v39 = v176;
    v59 = v123;
    v57 = *v18 + v56;
    goto lab_0x40330a;
  lab_0x403490:
    // 0x403490
    *v16 = 0;
    *v20 = 0x2520;
    v334 = *v21;
    v336 = v124;
    v335 = v123;
    v331 = v112;
    v332 = v55;
    v333 = 0;
    goto lab_0x4034b0;
  lab_0x403796:
    // 0x403796
    v45 = v51;
    v46 = v52;
    v39 = v175;
    v59 = v123;
    v57 = v163 + v56;
    goto lab_0x40330a;
  lab_0x404450:;
    int64_t v349 = v150;
    int64_t v350 = v138;
    int64_t v351 = v167;
    *c3 = 45;
    int64_t v352 = v351; // 0x404459
    int64_t v353 = v350; // 0x404459
    int64_t v354 = v144; // 0x404459
    int64_t v355 = v349; // 0x404459
    int32_t v356; // 0x403280
    char v357; // 0x403280
    int64_t v358; // 0x403280
    int64_t v359; // 0x403280
    int64_t v360; // 0x403280
    if ((int32_t)v144 != 45) {
        goto lab_0x403b03;
    } else {
        // 0x40445f
        *v16 = 45;
        v356 = v350;
        v357 = 45;
        v360 = v351;
        v358 = v350;
        v359 = v349;
        goto lab_0x404464;
    }
  lab_0x403f7b:;
    int64_t v361 = v137;
    int64_t v362 = v15 - v151; // 0x403f86
    int32_t v363; // 0x403280
    int32_t v364; // 0x403280
    int64_t v365; // 0x403280
    int64_t v366; // 0x403280
    int64_t v367; // 0x403280
    int64_t v368; // 0x403280
    int64_t v369; // 0x403280
    int64_t v370; // 0x403280
    int64_t v371; // 0x403280
    int64_t v372; // 0x403280
    int64_t v373; // 0x403280
    if ((int32_t)v143 == 45) {
        goto lab_0x403fa5;
    } else {
        int32_t v374 = v135 - (int32_t)v362; // 0x403f96
        *v14 = v374;
        if (v374 >= 0 == (v374 != 0)) {
            int64_t v375; // 0x403280
            int64_t v376; // 0x403280
            int64_t v377; // 0x403280
            int32_t v378; // 0x403f8c
            if (v378 == 95) {
                // 0x404663
                *c3 = 0;
                int32_t v379 = *v14;
                v364 = v379;
                v371 = v377;
                v373 = v376;
                v365 = v361;
                v368 = v375;
                goto lab_0x404668;
            } else {
                int32_t v380 = *v9; // 0x403336
                result = 0;
                v363 = v374;
                v372 = v376;
                int64_t v381; // 0x403280
                v366 = v381;
                v367 = v56;
                v369 = v375;
                v370 = v362;
                if (v377 <= (int64_t)v380) {
                    // break -> 0x403317
                    goto lab_0x403317_12;
                }
                goto lab_0x403be7;
            }
        } else {
            goto lab_0x403fa5;
        }
    }
  lab_0x4035f0:
    // 0x4035f0
    v132 = v131;
    v168 = v123;
    v162 = 0;
    v172 = 0;
    v154 = 0;
    v156 = v155;
    v140 = v139;
    v146 = v145;
    goto lab_0x4035fc;
  lab_0x403590:
    // 0x403590
    v45 = v51;
    v46 = v52;
    v39 = v407;
    v59 = v408;
    v57 = *v18 + v56;
    goto lab_0x40330a;
  lab_0x403621:
    // 0x403621
    *(char *)(v5 + 130) = (char)v122;
    v334 = v5 + 131;
    v336 = v326;
    v335 = v327;
    v331 = v329;
    v332 = v330;
    v333 = v328 & 0xffffffff;
    goto lab_0x4034b0;
  lab_0x4035fc:;
    int64_t v382 = v146;
    int64_t v383 = v140;
    int64_t v384 = v156;
    int64_t v385 = v154;
    int64_t v386 = v172;
    int64_t v387 = v162;
    int64_t v388 = v168;
    int64_t v389 = v132;
    v133 = v389;
    v164 = v388;
    v160 = v387;
    v173 = v386;
    v152 = v385;
    v158 = v384;
    v142 = v383;
    v148 = v382;
    int64_t v390; // 0x403280
    int64_t v391; // 0x403280
    int64_t v392; // 0x403280
    int64_t v393; // 0x403280
    int64_t v394; // 0x403280
    int64_t v395; // 0x403280
    int64_t v396; // 0x403280
    int64_t v397; // 0x403280
    if (v122 != 79) {
        goto lab_0x403a60;
    } else {
        // 0x403606
        v169 = v388;
        v157 = v384;
        v141 = v383;
        v147 = v382;
        v390 = v389;
        v396 = v388;
        v395 = v387;
        v397 = v386;
        v393 = v385;
        v394 = v384;
        v391 = v383;
        v392 = v382;
        if ((char)v385 != 0) {
            goto lab_0x403a65;
        } else {
            goto lab_0x40360f;
        }
    }
  lab_0x4039c3:;
    int32_t v398 = v177;
    int64_t v399 = (v398 + (int32_t)(-0x6db6db6d * (int64_t)v398 / 0x100000000) >> 2) - (v398 >> 31); // 0x4039d2
    v1 = v399;
    v131 = v399;
    v155 = 2;
    v139 = v112;
    v145 = v55;
    goto lab_0x4035f0;
  lab_0x403a60:
    // 0x403a60
    v390 = v133;
    v396 = v164;
    v395 = v160;
    v397 = v173;
    v393 = v152;
    v394 = v158;
    v391 = v142;
    v392 = v148;
    v165 = v164;
    v161 = v160;
    v174 = v173;
    v153 = v152;
    v159 = v158;
    v136 = v142;
    v149 = v148;
    if ((char)v152 == 0) {
        goto lab_0x403a67;
    } else {
        goto lab_0x403a65;
    }
  lab_0x4034b0:;
    int64_t v400 = v333;
    int64_t v401 = v335;
    *(char *)v334 = (char)v336;
    *(char *)(v334 + 1) = 0;
    *v9 = (int32_t)v331;
    *v12 = (int32_t)v332;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x4034da
    v45 = v51;
    v46 = v52;
    v39 = format;
    v59 = v401;
    v57 = v56;
    if (copied_chars == 0) {
        goto lab_0x40330a;
    } else {
        int32_t v402 = *v9; // 0x4034e8
        int64_t v403 = v402; // 0x4034e8
        int64_t size = (int64_t)copied_chars - 1; // 0x4034ed
        int64_t v404 = -1 - v56;
        uint64_t v405 = v402 >= 0 ? v403 : 0; // 0x4034ff
        uint64_t v406 = size >= v405 ? size : v405; // 0x403509
        *v18 = v406;
        result = 0;
        if (v406 >= v404) {
            // break -> 0x403317
            goto lab_0x403317_12;
        }
        // 0x40351b
        v407 = v404;
        v408 = v401;
        if (a1 != 0) {
            if ((int32_t)v400 == 0 == size < v405) {
                int64_t v409 = v403 - size; // 0x403532
                if (*v12 == 48) {
                    // 0x404555
                    if (v409 != 0) {
                        int64_t v410 = 1; // 0x404570
                        fputc(48, stream);
                        int64_t v411 = v410; // 0x40457c
                        while (v409 != v410) {
                            // 0x404568
                            v410 = v411 + 1;
                            fputc(48, stream);
                            v411 = v410;
                        }
                    }
                } else {
                    // 0x40353f
                    if (v409 != 0) {
                        int64_t v412 = 1; // 0x403558
                        fputc(32, stream);
                        int64_t v413 = v412; // 0x403564
                        while (v409 != v412) {
                            // 0x403550
                            v412 = v413 + 1;
                            fputc(32, stream);
                            v413 = v412;
                        }
                    }
                }
            }
            // 0x403566
            if (*v16 != 0) {
                // 0x40453d
                function_4031c0(v3, data2, size);
                v407 = size;
                v408 = v401;
            } else {
                // 0x403571
                if (*v7 == 0) {
                    // 0x404520
                    fwrite((int64_t *)data2, (int32_t)size, 1, stream);
                    v407 = 1;
                    v408 = v401;
                } else {
                    // 0x40357c
                    function_403220(v3, data2, size);
                    v407 = size;
                    v408 = v401;
                }
            }
        }
        goto lab_0x403590;
    }
  lab_0x403c20:;
    int64_t v414 = v134;
    v131 = v414;
    v155 = 2;
    v139 = v112;
    v145 = v55;
    switch ((int32_t)v55) {
        case 48: {
            goto lab_0x4035f0;
        }
        case 45: {
            goto lab_0x4035f0;
        }
        default: {
            // 0x403c3a
            v131 = v414;
            v155 = 2;
            v139 = v112;
            v145 = 95;
            goto lab_0x4035f0;
        }
    }
  lab_0x403a67:;
    int64_t v415 = v149;
    int64_t v416 = v136;
    int64_t v417 = v159;
    int64_t v418 = v161;
    int64_t v419 = v165;
    *v26 = (char)v153;
    int64_t v420 = v15 - 1;
    int64_t v421 = v420; // 0x403a88
    if (v174 % 2 != 0) {
        // 0x403a8a
        *(char *)v420 = 58;
        v421 = v15 - 2;
    }
    int64_t v422 = v421;
    uint32_t v423 = (int32_t)v174 >> 1; // 0x403a9d
    int64_t v424 = 0xcccccccd * (v1 & 0xffffffff) / 0x800000000; // 0x403a9f
    *(char *)v422 = (char)v1 + 48 + -10 * (char)v424;
    while (v423 == 0 != (int32_t)v1 < 10) {
        // 0x403ac2
        v1 = v424;
        int64_t v425 = v423; // 0x403ac4
        int64_t v426 = v422;
        v420 = v426 - 1;
        v421 = v420;
        if (v425 % 2 != 0) {
            // 0x403a8a
            *(char *)v420 = 58;
            v421 = v426 - 2;
        }
        // 0x403a98
        v422 = v421;
        v423 = (int32_t)v425 >> 1;
        v424 = 0xcccccccd * (v1 & 0xffffffff) / 0x800000000;
        *(char *)v422 = (char)v1 + 48 + -10 * (char)v424;
    }
    int32_t v427 = v417; // 0x403ad0
    int32_t v428 = v416;
    int32_t v429 = v427 - v428; // 0x403ad0
    int64_t v430 = v429 < 0 == ((v429 ^ v427) & (int32_t)(v416 ^ v417)) < 0 ? v417 : v416;
    int32_t v431 = v430; // 0x403add
    *v9 = v431;
    v167 = v419;
    v138 = v416;
    v144 = v415;
    v150 = v422;
    if (*v26 != 0) {
        goto lab_0x404450;
    } else {
        // 0x403aeb
        v135 = v431;
        v166 = v419;
        v137 = v416;
        v143 = v415;
        v151 = v422;
        if ((char)v418 == 0) {
            goto lab_0x403f7b;
        } else {
            if ((int32_t)v415 == 45) {
                // 0x4047d3
                *v16 = 43;
                v356 = v428;
                v357 = 43;
                v360 = v419;
                v358 = v416;
                v359 = v422;
                goto lab_0x404464;
            } else {
                // 0x403afe
                *c3 = 43;
                v352 = v419;
                v353 = v416;
                v354 = v415;
                v355 = v422;
                goto lab_0x403b03;
            }
        }
    }
  lab_0x403b03:;
    int64_t v432 = v355;
    int64_t v433 = v354;
    int64_t v434 = v353;
    int64_t v435 = v352;
    int64_t v436 = v15 - v432; // 0x403b0f
    int32_t v437 = *v9 + -1 - (int32_t)v436; // 0x403b15
    *v14 = v437;
    uint64_t v438 = -1 - v56;
    int64_t v439; // 0x403280
    int64_t v440; // 0x403280
    int64_t v441; // 0x403280
    int64_t v442; // 0x403280
    int64_t v443; // 0x403280
    int64_t v444; // 0x403280
    if (v437 < 1) {
        int32_t v445 = v434; // 0x404583
        int64_t v446 = 0x100000000 * v434 >> 32;
        int64_t v447 = v445 >= 0 ? v446 : 0; // 0x404594
        int64_t v448 = v447 != 0 ? v447 : 1; // 0x40459a
        *v19 = v448;
        result = 0;
        if (v448 >= v438) {
            // break -> 0x403317
            goto lab_0x403317_12;
        }
        int64_t v449 = v448; // 0x4045af
        int64_t v450 = v447; // 0x4045af
        int64_t v451 = v435; // 0x4045af
        if (a1 != 0) {
            int64_t v452 = v447; // 0x4045bd
            int64_t v453 = v435; // 0x4045bd
            int64_t v454 = v434; // 0x4045bd
            int64_t v455 = v433; // 0x4045bd
            if (!((v447 < 2 | *v9 != 0))) {
                int64_t v456 = v446 - 1; // 0x4045c8
                *v28 = v456;
                int32_t v457 = v433; // 0x4045d1
                if (v457 == 48) {
                    // 0x404a7e
                    v452 = v447;
                    v453 = v435;
                    v454 = v434;
                    v455 = v433;
                    if (v456 != 0) {
                        // 0x404a8a
                        *v35 = 48;
                        *v32 = v445;
                        *v33 = v435;
                        int64_t v458 = 0; // 0x404a9e
                        v458++;
                        fputc(48, stream);
                        while (*v28 != v458) {
                            // 0x404aa1
                            v458++;
                            fputc(48, stream);
                        }
                        // 0x404ab9
                        v452 = v447;
                        v453 = *v33;
                        v454 = (int64_t)*v32;
                        v455 = (int64_t)*v35;
                    }
                } else {
                    // 0x4045db
                    v452 = v447;
                    v453 = v435;
                    v454 = v434;
                    v455 = v433;
                    if (v456 != 0) {
                        // 0x4045e2
                        *v35 = v457;
                        *v32 = v445;
                        *v33 = v447;
                        *v38 = v435;
                        int64_t v459 = 0; // 0x4045f6
                        v459++;
                        fputc(32, stream);
                        while (*v28 != v459) {
                            // 0x4045fb
                            v459++;
                            fputc(32, stream);
                        }
                        // 0x404611
                        v452 = *v33;
                        v453 = *v38;
                        v454 = (int64_t)*v32;
                        v455 = (int64_t)*v35;
                    }
                }
            }
            // 0x404625
            *v34 = v452;
            *v35 = (int32_t)v454;
            *v36 = (int32_t)v455;
            fputc((int32_t)*c3, stream);
            v450 = *v34;
            v449 = *v19;
            v451 = v453;
        }
        int64_t v460 = v449 + v56; // 0x404650
        v442 = -1 - v460;
        v444 = v450;
        v443 = v451;
        v439 = v460;
        v440 = v432;
        v441 = v436;
        goto lab_0x403fb7;
    } else {
        int32_t v461 = v433; // 0x403b2c
        v364 = v437;
        v371 = v438;
        v373 = v435;
        v365 = v434;
        v368 = v432;
        if (v461 == 95) {
            goto lab_0x404668;
        } else {
            int64_t v462 = (int64_t)*v9; // 0x403b36
            v1 = v462;
            result = 0;
            if (v438 <= v462) {
                // break -> 0x403317
                goto lab_0x403317_12;
            }
            int64_t v463 = 0x100000000 * v434 >> 32;
            uint64_t v464 = (int32_t)v434 >= 0 ? v463 : 0; // 0x403b58
            int64_t v465 = v464 != 0 ? v464 : 1; // 0x403b5e
            *v28 = v465;
            result = 0;
            if (v465 >= v438) {
                // break -> 0x403317
                goto lab_0x403317_12;
            }
            int64_t v466 = v465; // 0x403b73
            int64_t v467 = v435; // 0x403b73
            int64_t v468 = v433; // 0x403b73
            if (a1 != 0) {
                int64_t v469 = v435; // 0x403b77
                int64_t v470 = v433; // 0x403b77
                if (v464 >= 2 && (int32_t)v1 == 0) {
                    int64_t v471 = v463 - 1; // 0x403b82
                    *v30 = v471;
                    if (v461 == 48) {
                        // 0x404ad0
                        v469 = v435;
                        v470 = v433;
                        if (v471 != 0) {
                            // 0x404adc
                            *v34 = v435;
                            int64_t v472 = 0; // 0x404ae6
                            v472++;
                            fputc(48, stream);
                            while (*v30 != v472) {
                                // 0x404ae9
                                v472++;
                                fputc(48, stream);
                            }
                            // 0x404b01
                            v469 = *v34;
                            v470 = v433 & 0xffffffff;
                        }
                    } else {
                        // 0x403b95
                        v469 = v435;
                        v470 = v433;
                        if (v471 != 0) {
                            // 0x403b9c
                            *v32 = v461;
                            *v33 = v435;
                            int64_t v473 = 0; // 0x403ba6
                            v473++;
                            fputc(32, stream);
                            while (*v30 != v473) {
                                // 0x403bab
                                v473++;
                                fputc(32, stream);
                            }
                            // 0x403bc1
                            v469 = *v33;
                            v470 = (int64_t)*v32;
                        }
                    }
                }
                // 0x403bcb
                *v35 = (int32_t)v470;
                fputc((int32_t)*c3, stream);
                v466 = *v28;
                v467 = v469;
                v468 = (int64_t)*v35;
            }
            // 0x403be2
            v363 = *v14;
            v372 = v467;
            v366 = v468;
            v367 = v466 + v56;
            v369 = v432;
            v370 = v436;
            goto lab_0x403be7;
        }
    }
  lab_0x403fa5:
    // 0x403fa5
    v442 = -1 - v56;
    v444 = (int32_t)v361 >= 0 ? 0x100000000 * v361 >> 32 : 0;
    v443 = v166;
    v439 = v56;
    v440 = v151;
    v441 = v362;
    goto lab_0x403fb7;
  lab_0x4049e9:;
    int64_t v519 = (int64_t)(100 * *v9 + v520); // 0x4049f9
    v1 = v519;
    v132 = v519;
    v168 = v521;
    v162 = 1;
    v172 = 4;
    v154 = v522;
    v156 = 6;
    v140 = v112;
    v146 = v55;
    goto lab_0x4035fc;
  lab_0x4049c5:;
    int64_t v523 = (int64_t)(100 * v520 + v524 + 0x2710 * *v9); // 0x4049e2
    v1 = v523;
    v132 = v523;
    v168 = v521;
    v162 = 1;
    v172 = 20;
    v154 = v522;
    v156 = 9;
    v140 = v112;
    v146 = v55;
    goto lab_0x4035fc;
  lab_0x4038c3:;
    int64_t v525 = v526;
    if (*v7 == 0) {
        // 0x404508
        fwrite((int64_t *)data4, (int32_t)size3, 1, stream);
        v407 = 1;
        v408 = v525;
    } else {
        // 0x4038ce
        function_403220(v3, data4, size3);
        v407 = size3;
        v408 = v525;
    }
    goto lab_0x403590;
  lab_0x403a65:
    // 0x403a65
    v1 = -v390 & 0xffffffff;
    v165 = v396;
    v161 = v395;
    v174 = v397;
    v153 = v393;
    v159 = v394;
    v136 = v391;
    v149 = v392;
    goto lab_0x403a67;
  lab_0x404464:;
    int32_t v527 = v356;
    int64_t v528 = 0x100000000 * v358 >> 32;
    int64_t v529 = v527 >= 0 ? v528 : 0; // 0x40447c
    uint64_t v530 = v529 != 0 ? v529 : 1; // 0x404482
    result = 0;
    if (v530 >= -1 - v56) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    int64_t v531 = v360;
    int64_t v532 = v529; // 0x404492
    int64_t v533 = v531; // 0x404492
    if (a1 != 0) {
        char v534 = v357;
        int32_t v535 = v527; // 0x40449c
        char c5 = v534; // 0x40449c
        int64_t v536 = v529; // 0x40449c
        int64_t v537 = v531; // 0x40449c
        if (!((v529 < 2 | *v9 != 0))) {
            int64_t v538 = v528 - 1; // 0x40497d
            v535 = v527;
            c5 = v534;
            v536 = v529;
            v537 = v531;
            if (v538 != 0) {
                // 0x404987
                *v12 = v527;
                *v28 = v529;
                *v30 = v531;
                int64_t v539 = 0; // 0x404998
                v539++;
                fputc(32, stream);
                while (v538 != v539) {
                    // 0x40499b
                    v539++;
                    fputc(32, stream);
                }
                // 0x4049b1
                v535 = *v12;
                c5 = *v16;
                v536 = *v28;
                v537 = *v30;
            }
        }
        // 0x4044a8
        *v28 = v536;
        *v12 = v535;
        fputc((int32_t)c5, stream);
        v532 = *v28;
        v533 = v537;
    }
    int64_t v540 = v530 + v56; // 0x4044c9
    v442 = -1 - v540;
    v444 = v532;
    v443 = v533;
    v439 = v540;
    v440 = v359;
    v441 = v15 - v359;
    goto lab_0x403fb7;
  lab_0x403fb7:;
    uint64_t size2 = v441;
    int64_t data3 = v440;
    int64_t v474 = v443;
    uint64_t v475 = v444;
    uint64_t v476 = size2 >= v475 ? size2 : v475; // 0x403fbd
    *v19 = v476;
    result = 0;
    if (v476 >= v442) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    int64_t v477 = v475; // 0x403fd2
    int64_t v478 = v474; // 0x403fd2
    if (a1 == 0) {
        goto lab_0x40403c;
    } else {
        // 0x403fd4
        if (size2 < v475 == *v9 == 0) {
            // 0x403fe1
            int64_t v479; // 0x403280
            int64_t v480 = (0x100000000 * v479 >> 32) - size2; // 0x403fe4
            int64_t v481; // 0x403280
            if ((int32_t)v481 == 48) {
                // 0x40475d
                if (v480 == 0) {
                    goto lab_0x404023;
                } else {
                    // 0x404769
                    *v18 = v474;
                    int64_t v482 = 0; // 0x404773
                    int64_t v483 = v482;
                    int64_t v484 = v483 + 1; // 0x404780
                    fputc(48, stream);
                    v482 = v484;
                    while (v480 != v484) {
                        // 0x404778
                        v483 = v482;
                        v484 = v483 + 1;
                        fputc(48, stream);
                        v482 = v484;
                    }
                    // 0x40401e
                    goto lab_0x404023;
                }
            } else {
                // 0x403ff1
                if (v480 == 0) {
                    goto lab_0x404023;
                } else {
                    // 0x403ff8
                    *v18 = v474;
                    int64_t v485 = 0; // 0x404003
                    int64_t v486 = v485;
                    int64_t v487 = v486 + 1; // 0x404010
                    fputc(32, stream);
                    v485 = v487;
                    while (v480 != v487) {
                        // 0x404008
                        v486 = v485;
                        v487 = v486 + 1;
                        fputc(32, stream);
                        v485 = v487;
                    }
                    // 0x40401e
                    goto lab_0x404023;
                }
            }
        } else {
            goto lab_0x404023;
        }
    }
  lab_0x404668:;
    uint64_t v488 = (int64_t)v364; // 0x404668
    result = 0;
    if (v371 <= v488) {
        // break -> 0x403317
        goto lab_0x403317_12;
    }
    int64_t v489 = v368;
    int64_t v490 = v365;
    int64_t v491 = v373;
    int32_t v492 = v364; // 0x404679
    int64_t v493 = v490; // 0x404679
    if (a1 != 0) {
        // 0x404801
        *v36 = (int32_t)v490;
        int64_t v494 = 0; // 0x404812
        v494++;
        fputc(32, stream);
        while (v494 < v488) {
            // 0x404818
            v494++;
            fputc(32, stream);
        }
        // 0x40482e
        v492 = *v14;
        v493 = (int64_t)*v36;
    }
    int32_t v495 = v492; // 0x40467f
    int32_t v496 = v493; // 0x404683
    int64_t v497 = v56 + v488; // 0x404686
    int32_t v498 = v495 - v496; // 0x40468b
    int64_t v499 = v498 < 0 == ((v498 ^ v495) & (v495 ^ v496)) < 0 ? 0 : (int64_t)(v496 - v495); // 0x404694
    char v500 = *c3; // 0x40469b
    int64_t v501 = -1 - v497;
    int64_t v502 = 0x100000000 * v499 >> 32;
    if (v500 == 0) {
        // 0x4047e5
        v442 = v501;
        v444 = v502;
        v443 = v491;
        v439 = v497;
        v440 = v489;
        v441 = v15 - v489;
    } else {
        uint64_t v503 = v499 != 0 ? v502 : 1; // 0x4046b4
        result = 0;
        if (v503 >= v501) {
            // break -> 0x403317
            goto lab_0x403317_12;
        }
        int64_t v504 = v502; // 0x4046c4
        int64_t v505 = v491; // 0x4046c4
        if (a1 != 0) {
            char c4 = v500; // 0x4046ce
            int64_t v506 = v491; // 0x4046ce
            int64_t v507 = v499; // 0x4046ce
            if (*v9 == 0) {
                uint32_t v508 = (int32_t)v499; // 0x4046d0
                c4 = v500;
                v506 = v491;
                v507 = v499;
                if (v508 >= 2) {
                    // 0x404b0e
                    *v36 = v508;
                    *v19 = v502 - 1;
                    *v30 = v491;
                    int64_t v509 = 0; // 0x404b27
                    v509++;
                    fputc(32, stream);
                    while (*v19 != v509) {
                        // 0x404b2a
                        v509++;
                        fputc(32, stream);
                    }
                    // 0x404b42
                    c4 = *c3;
                    v506 = *v30;
                    v507 = (int64_t)*v36;
                }
            }
            // 0x4046da
            *v28 = v502;
            *v14 = (int32_t)v507;
            fputc((int32_t)c4, stream);
            v504 = *v28;
            v505 = v506;
        }
        int64_t v510 = v503 + v497; // 0x4046fb
        v442 = -1 - v510;
        v444 = v504;
        v443 = v505;
        v439 = v510;
        v440 = v489;
        v441 = v15 - v489;
    }
    goto lab_0x403fb7;
  lab_0x40403c:
    // 0x40403c
    v45 = v51;
    v46 = v52;
    v39 = v477;
    v59 = v478;
    v57 = *v19 + v439;
    goto lab_0x40330a;
  lab_0x403be7:;
    int64_t v511 = v366;
    int64_t v512 = v372;
    int64_t v513 = v363; // 0x403be7
    *v19 = v513;
    int64_t v514 = v513; // 0x403bf7
    int64_t v515 = v512; // 0x403bf7
    if (a1 != 0) {
        // 0x40471d
        *v36 = (int32_t)v511;
        *v37 = v512;
        int64_t v516 = 0; // 0x404731
        v516++;
        fputc(48, stream);
        while (v516 < *v19) {
            // 0x404738
            v516++;
            fputc(48, stream);
        }
        // 0x40474e
        v514 = *v19;
        v515 = *v37;
    }
    int64_t v517 = v514 + v367; // 0x403bfd
    v442 = -1 - v517;
    v444 = 0;
    v443 = v515;
    v439 = v517;
    v440 = v369;
    v441 = v370;
    goto lab_0x403fb7;
  lab_0x404023:;
    int64_t v518 = v474;
    if (*v7 == 0) {
        // 0x4044f0
        fwrite((int64_t *)data3, (int32_t)size2, 1, stream);
        v477 = 1;
        v478 = v518;
    } else {
        // 0x40402e
        function_403220(v3, data3, size2);
        v477 = size2;
        v478 = v518;
    }
    goto lab_0x40403c;
}
// Address range: 0x404ba0 - 0x404bbf
int64_t function_404ba0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5) {
    char v1 = 0; // bp-9, 0x404ba9
    int64_t result = function_403280((int32_t)a1, a2, (int64_t)a3, 0, (int64_t)&v1, a4); // 0x404bb5
    return result;
}
// Address range: 0x404bc0 - 0x404bfa
int64_t function_404bc0(int64_t * tp) {
    int64_t result = 0; // 0x404bd4
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x404bd6
        int64_t tp2; // bp-24, 0x404bc0
        gettimeofday((struct timeval *)&tp2, NULL);
        *tp = tp2;
        int128_t v1; // 0x404bc0
        result = 1000 * (int64_t)v1;
        *(int64_t *)((int64_t)tp + 8) = result;
    }
    // 0x404bf4
    return result;
}
// Address range: 0x404c00 - 0x404c9c
int64_t function_404c00(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x404c00
    *(char *)v1 = 0;
    int64_t result = v1; // 0x404c25
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x404c56
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x404c78
    int64_t v4 = v2 - 1; // 0x404c88
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x404c90
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x404ca0 - 0x404e1e
int64_t function_404ca0(int64_t a1, int64_t a2, uint64_t a3, uint64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 168); // 0x404ca0
    int64_t result3 = *v1; // 0x404ca0
    if (result3 == 0) {
        goto lab_0x404cf8;
    } else {
        int64_t * v2 = (int64_t *)(a1 + 48); // 0x404cb6
        if (*v2 != 0) {
            goto lab_0x404cf8;
        } else {
            // 0x404cbd
            if (*(char *)(a1 + 161) != 0) {
                goto lab_0x404cf8;
            } else {
                int64_t * v3 = (int64_t *)(a1 + 200); // 0x404cc6
                if (result < 3 != (*v3 == 0)) {
                    int128_t v4 = __asm_movdqu((int128_t)a2); // 0x404cda
                    *(char *)(a1 + 216) = 1;
                    __asm_movups(*(int128_t *)(a1 + 32), v4);
                    *v2 = result;
                    return result;
                }
                // 0x404e00
                *v3 = 1;
                goto lab_0x404e10;
            }
        }
    }
  lab_0x404cf8:
    if (result >= 5) {
        // 0x404d02
        *v1 = result3 + 1;
        *(int64_t *)(a1 + 48) = result - 4;
        *(int64_t *)(a1 + 64) = (a3 / 0x8000000000000000 & -100) + a3;
        *(int64_t *)(a1 + 56) = a3 / 0x8000000000000000;
        *(int64_t *)(a1 + 40) = a3 / 0x8000000000000000;
        return 0x346dc5d63886594b * a3;
    }
    int64_t * v5 = (int64_t *)(a1 + 200); // 0x404d98
    *v5 = *v5 + 1;
    if (result >= 3) {
        // 0x404da6
        *(int64_t *)(a1 + 72) = a3 / 0x8000000000000000;
        int64_t result2 = a3 / 0x8000000000000000 & 100; // 0x404dd3
        *(int64_t *)(a1 + 80) = a3 - result2;
        // 0x404dde
        *(int64_t *)(a1 + 88) = 0;
        *(int64_t *)(a1 + 96) = 0;
        *(int32_t *)(a1 + 28) = 2;
        return result2;
    }
    goto lab_0x404e10;
  lab_0x404e10:
    // 0x404e10
    *(int64_t *)(a1 + 72) = a3;
    *(int64_t *)(a1 + 80) = 0;
    // 0x404dde
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 28) = 2;
    return result3;
}
// Address range: 0x404e20 - 0x404f19
int64_t function_404e20(int32_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int32_t v1 = a1 / 797; // 0x404e5d
    int32_t v2 = __sprintf_chk((char *)a2, 1, -1, "%c%02d", 43, (int64_t)(v1 < 0 ? -v1 : v1)); // 0x404e75
    int32_t v3 = -3600 * v1 + a1; // 0x404e7a
    if (v3 == 0) {
        // 0x404ee0
        return result;
    }
    int64_t v4 = (int64_t)v2 + result; // 0x404e8b
    *(char *)v4 = 58;
    *(char *)(v4 + 1) = 48;
    uint32_t v5 = (v3 < 0 ? -v3 : v3) % 60;
    if (v5 != 0) {
        // 0x404ef0
        *(char *)(v4 + 3) = 58;
        char v6 = v5 / 10;
        *(char *)(v4 + 4) = v6 | 48;
        *(char *)(v4 + 5) = (char)v5 + 48 + -10 * v6;
        *(char *)(v4 + 6) = 0;
    } else {
        // 0x404edd
        *(char *)(v4 + 3) = 0;
    }
    // 0x404ee0
    return result;
}
// Address range: 0x404f20 - 0x404f8e
int64_t function_404f20(int32_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int32_t v1 = a1 + 1900; // 0x404f62
    char * v2 = v1 < 0 == ((v1 ^ a1) & (a1 ^ -0x80000000)) < 0 ? (char *)((int64_t)"-%02d%02d" + 1) : "-%02d%02d"; // 0x404f84
    __sprintf_chk((char *)a2, 1, -1, v2);
    return (int64_t)a2;
}
// Address range: 0x404f90 - 0x40504e
int64_t function_404f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f90
    int64_t v1; // 0x404f90
    if ((char)v1 != 0) {
        // 0x404fb8
        int128_t v2; // 0x404f90
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x404fef
    fwrite((int64_t *)"date: ", 1, 6, g47);
    int64_t v3 = 8; // bp-208, 0x40502b
    return function_40e010((int64_t)g47, a1, &v3);
}
// Address range: 0x405050 - 0x4050bb
int64_t function_405050(int64_t a1, int32_t * a2, int64_t * a3, int64_t a4) {
    int64_t v1 = a4; // bp-80, 0x405058
    int64_t v2 = (int64_t)a3; // 0x405061
    if (a4 == -1) {
        // 0x4050a0
        int64_t v3; // bp-72, 0x405050
        v2 = function_40de20(a1, &v1, &v3);
        if (v2 == 0) {
            // 0x405092
            return 0;
        }
    }
    int64_t v4 = (int64_t)a2;
    int32_t v5 = *(int32_t *)(v4 + 4); // 0x405065
    int32_t v6 = *(int32_t *)v2; // 0x405068
    int32_t v7 = *(int32_t *)(v2 + 4); // 0x40506a
    int32_t v8 = *(int32_t *)(v4 + 8); // 0x40506f
    int32_t v9 = *(int32_t *)(v2 + 8); // 0x405072
    int32_t v10 = *(int32_t *)(v4 + 12); // 0x405077
    int32_t v11 = *(int32_t *)(v2 + 12); // 0x40507a
    int32_t v12 = *(int32_t *)(v4 + 16); // 0x40507f
    int32_t v13 = *(int32_t *)(v2 + 16); // 0x405082
    int32_t v14 = *(int32_t *)(v2 + 20) ^ *(int32_t *)(v4 + 20); // 0x40508a
    int64_t v15; // 0x405050
    int64_t result = (int64_t)((v7 ^ v5 | v6 ^ (int32_t)v15 | v9 ^ v8 | v11 ^ v10 | v13 ^ v12 | v14) == 0) | (int64_t)(v14 & -256); // 0x40508f
    // 0x405092
    return result;
}
// Address range: 0x4050c0 - 0x4050f5
int64_t function_4050c0(uint64_t a1, int64_t a2, char * a3) {
    // 0x4050c0
    __fprintf_chk(g47, 1, (char *)((a1 % 256 ^ 1) + (int64_t)" %+ld %s"));
    return 1;
}
// Address range: 0x405100 - 0x4051b5
int64_t function_405100(int64_t a1, char a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x405100
    int64_t v2; // 0x405100
    if (a4 > 2) {
        if (a5 >= 0) {
            goto lab_0x40510e;
        } else {
            // 0x40517d
            v1 = (uint64_t)a3 / 0x8000000000000000;
            v2 = (a3 >> 63 & -100) + a3;
            goto lab_0x405162;
        }
    } else {
        // 0x405109
        v1 = a3;
        v2 = 0;
        if (a5 < 0) {
            goto lab_0x405162;
        } else {
            goto lab_0x40510e;
        }
    }
  lab_0x40510e:;
    int128_t v3 = a3; // 0x405110
    int128_t v4 = 60 * v3; // 0x405110
    int64_t v5 = v4; // 0x405110
    int64_t v6; // 0x405100
    int64_t v7; // 0x405100
    if (a2 != 0) {
        int64_t v8 = v5 - a5; // 0x405152
        v6 = v8;
        v7 = (v8 ^ v5) & (v5 ^ a5);
    } else {
        int64_t v9 = v5 + a5; // 0x40511e
        v6 = v9;
        v7 = (v9 ^ v5) & (v9 ^ a5);
    }
    int64_t v10 = v6; // 0x405128
    if (v4 != 0x3c0000000000000000 * v3 >> 64 || v7 < 0) {
        // 0x405148
        return 0;
    }
    goto lab_0x40512a;
  lab_0x405162:
    // 0x405162
    v10 = v2 + 60 * v1;
    goto lab_0x40512a;
  lab_0x40512a:;
    int64_t result = 0; // 0x40513a
    if (v10 < 1441) {
        // 0x40513c
        *(int32_t *)a1 = 60 * (int32_t)v10;
        result = 1;
    }
    // 0x405148
    return result;
}
// Address range: 0x4051c0 - 0x40527a
int64_t function_4051c0(int64_t a1, int64_t a2) {
    char * str = (char *)a2;
    int64_t v1 = (int64_t)&g10; // 0x4051d4
    int64_t str2 = (int64_t)"GMT"; // 0x4051d4
    int64_t result = v1; // 0x4051f6
    int64_t v2; // 0x4051c0
    int64_t v3; // 0x4051c0
    int64_t str4; // 0x4051c0
    int64_t str3; // 0x4051c0
    while (strcmp(str, (char *)str2) != 0) {
        // 0x4051e0
        v1 += 16;
        str2 = *(int64_t *)v1;
        if (str2 == 0) {
            int64_t v4 = a1 + 232; // 0x405200
            int64_t v5 = *(int64_t *)v4; // 0x405200
            v3 = v4;
            str3 = v5;
            if (v5 != 0) {
                goto lab_0x405254;
            } else {
                // 0x405218
                v2 = (int64_t)&g9;
                str4 = (int64_t)"WET";
                goto lab_0x405234;
            }
        }
        result = v1;
    }
    // 0x4051f8
    return result;
  lab_0x405254:
    // 0x405254
    result = v3;
    if (strcmp(str, (char *)str3) != 0) {
        int64_t v6 = v3 + 16; // 0x405248
        int64_t v7 = *(int64_t *)v6; // 0x40524c
        v3 = v6;
        str3 = v7;
        if (v7 == 0) {
            // 0x405218
            v2 = (int64_t)&g9;
            str4 = (int64_t)"WET";
            goto lab_0x405234;
        } else {
            goto lab_0x405254;
        }
    } else {
        return result;
    }
  lab_0x405234:
    // 0x405234
    result = v2;
    if (strcmp(str, (char *)str4) != 0) {
        int64_t v8 = v2 + 16; // 0x405228
        int64_t v9 = *(int64_t *)v8; // 0x40522c
        result = 0;
        v2 = v8;
        str4 = v9;
        if (v9 == 0) {
            return result;
        } else {
            goto lab_0x405234;
        }
    } else {
        return result;
    }
}
// Address range: 0x405280 - 0x405405
int64_t function_405280(int64_t a1, int64_t a2) {
    // 0x405280
    int64_t v1; // 0x405280
    function_404f90((int64_t)dcgettext(NULL, "parsed %s part: ", 5), a1, 5, v1, v1, v1);
    int64_t v2 = *(int64_t *)(a2 + 104); // 0x4052aa
    int64_t v3; // 0x405280
    int64_t v4; // 0x405280
    int64_t v5; // 0x405280
    int64_t v6; // 0x405280
    int64_t v7; // 0x405280
    int64_t v8; // 0x405280
    if (v2 != 0) {
        uint64_t v9 = function_4050c0(0, v2, "year(s)"); // 0x4053e7
        int64_t v10 = *(int64_t *)(a2 + 112); // 0x4053ec
        int64_t v11 = v9 % 256; // 0x4053f0
        v3 = v11;
        v7 = v10;
        v4 = v11;
        if (v10 != 0) {
            goto lab_0x4052c6;
        } else {
            goto lab_0x4052d7;
        }
    } else {
        int64_t v12 = *(int64_t *)(a2 + 112); // 0x4052b7
        v3 = 0;
        v7 = v12;
        if (v12 == 0) {
            int64_t v13 = *(int64_t *)(a2 + 120); // 0x405368
            v5 = 0;
            v8 = v13;
            if (v13 != 0) {
                goto lab_0x4052dc;
            } else {
                // 0x405377
                v6 = 0;
                if (*(int64_t *)(a2 + 128) == 0) {
                    // 0x405385
                    v6 = 0;
                    if (*(int64_t *)(a2 + 136) == 0) {
                        // 0x405393
                        v6 = 0;
                        if (*(int64_t *)(a2 + 144) == 0) {
                            // 0x4053a1
                            v6 = 0;
                            if (*(int32_t *)(a2 + 152) == 0) {
                                // 0x4053af
                                return fputs(dcgettext(NULL, "today/this/now\n", 5), g47);
                            }
                        }
                    }
                }
                goto lab_0x4052e9;
            }
        } else {
            goto lab_0x4052c6;
        }
    }
  lab_0x4052c6:
    // 0x4052c6
    v4 = function_4050c0(v3, v7, "month(s)") % 256;
    goto lab_0x4052d7;
  lab_0x4052d7:;
    int64_t v14 = *(int64_t *)(a2 + 120);
    v5 = v4;
    v8 = v14;
    v6 = v4;
    if (v14 == 0) {
        goto lab_0x4052e9;
    } else {
        goto lab_0x4052dc;
    }
  lab_0x4052e9:;
    int64_t v15 = *(int64_t *)(a2 + 128); // 0x4052e9
    int64_t v16 = v6; // 0x4052f3
    if (v15 != 0) {
        // 0x4052f5
        v16 = function_4050c0(v6, v15, "hour(s)") % 256;
    }
    int64_t v17 = *(int64_t *)(a2 + 136); // 0x405302
    int64_t v18 = v16; // 0x40530c
    if (v17 != 0) {
        // 0x40530e
        v18 = function_4050c0(v16, v17, "minutes") % 256;
    }
    int64_t v19 = *(int64_t *)(a2 + 144); // 0x40531b
    int64_t v20 = v18; // 0x405325
    if (v19 != 0) {
        // 0x405327
        v20 = function_4050c0(v18, v19, "seconds") % 256;
    }
    int32_t v21 = *(int32_t *)(a2 + 152); // 0x405334
    if (v21 != 0) {
        // 0x405340
        function_4050c0(v20, (int64_t)v21, "nanoseconds");
    }
    // 0x40534a
    return fputc(10, g47);
  lab_0x4052dc:
    // 0x4052dc
    v6 = function_4050c0(v5, v8, "day(s)") % 256;
    goto lab_0x4052e9;
}
// Address range: 0x405410 - 0x4054a5
int64_t function_405410(int32_t * a1, int64_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a3;
    int64_t v1; // 0x405410
    int64_t v2 = function_40ff70(result, 100, "(Y-M-D) %Y-%m-%d %H:%M:%S", (int64_t)a1, 0, 0, v1, v1, v1); // 0x405434
    int32_t v3 = v2; // 0x405444
    if (a2 == NULL || v3 > 99) {
        // 0x405451
        return result;
    }
    int64_t v4 = (int64_t)a2;
    if (*(int64_t *)(v4 + 208) == 0) {
        // 0x405451
        return result;
    }
    // 0x405460
    int64_t v5; // bp-56, 0x405410
    int64_t v6 = function_404e20(*(int32_t *)(v4 + 24), &v5); // 0x405468
    __snprintf_chk((char *)((0x100000000 * v2 >> 32) + result), 100 - v3, 1, -1, " TZ=%s", (char *)v6);
    return result;
}
// Address range: 0x4054b0 - 0x40559d
int64_t function_4054b0(int64_t a1, int64_t * str) {
    int64_t result = (int64_t)str;
    if (*(char *)(a1 + 224) == 0) {
        // 0x405558
        *(char *)str = 0;
        if (*(int32_t *)(a1 + 16) >= 7) {
            // 0x40554a
            return result;
        }
        // 0x405571
        __snprintf_chk((char *)result, 100, 1, -1, (char *)0x4144ac);
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4054c9
    uint64_t v2 = v1 + 1; // 0x4054cd
    int32_t v3; // 0x4054b0
    if (v2 < 14) {
        int32_t chars_printed = snprintf((char *)str, 100, "%s", (char *)(v1 + (int64_t)"last" + 1 + 10 * v2)); // 0x4054f2
        v3 = chars_printed;
        if (chars_printed < 100 != *(int32_t *)(a1 + 16) < 7) {
            // 0x40554a
            return result;
        }
    } else {
        // 0x405520
        v3 = __snprintf_chk((char *)str, 100, 1, -1, "%ld", (int32_t)v1);
        if (*(int32_t *)(a1 + 16) >= 7) {
            // 0x40554a
            return result;
        }
    }
    char * v4 = v3 == 0 ? (char *)0x4144ac : (char *)0x4144ab; // 0x40551d
    int32_t v5 = (0x6400000000 - 0x100000000 * (int64_t)v3) / 0x100000000;
    __snprintf_chk((char *)((int64_t)v3 + result), v5, 1, -1, v4);
    return result;
}
// Address range: 0x4055a0 - 0x405940
int64_t function_4055a0(int64_t a1, int64_t a2) {
    // 0x4055a0
    int64_t v1; // 0x4055a0
    function_404f90((int64_t)dcgettext(NULL, "parsed %s part: ", 5), a1, 5, v1, v1, v1);
    char * v2; // 0x4055a0
    char * v3; // 0x4055a0
    int64_t v4; // 0x4055a0
    if (*(int64_t *)(a2 + 168) == 0) {
        goto lab_0x4055e5;
    } else {
        char * v5 = (char *)(a2 + 218); // 0x4055d8
        if (*v5 == 0) {
            int64_t v6 = *(int64_t *)(a2 + 40); // 0x4057c0
            int64_t v7 = *(int64_t *)(a2 + 64); // 0x4057c4
            int64_t v8 = *(int64_t *)(a2 + 56); // 0x4057cf
            __fprintf_chk(g47, 1, "(Y-M-D) %04ld-%02ld-%02ld", (int32_t)v6, (int32_t)v8, (int32_t)v7);
            *v5 = 1;
            char * v9 = (char *)(a2 + 223);
            char * v10 = (char *)(a2 + 216);
            v4 = 1;
            if (*v10 == *v9) {
                goto lab_0x405636;
            } else {
                // 0x405803
                fputc(32, g47);
                v3 = v9;
                v2 = v10;
                goto lab_0x4055f6;
            }
        } else {
            goto lab_0x4055e5;
        }
    }
  lab_0x4055e5:;
    char * v11 = (char *)(a2 + 223);
    char * v12 = (char *)(a2 + 216);
    v3 = v11;
    v2 = v12;
    v4 = 0;
    if (*v12 == *v11) {
        goto lab_0x405636;
    } else {
        goto lab_0x4055f6;
    }
  lab_0x405636:;
    // 0x405636
    char * v13; // 0x4055a0
    int64_t v14; // 0x4055a0
    if (*(int64_t *)(a2 + 200) == 0) {
        goto lab_0x40564d;
    } else {
        char * v15 = (char *)(a2 + 221); // 0x405640
        if (*v15 == 0) {
            // 0x405820
            __fprintf_chk(g47, 1, (char *)((v4 | (int64_t)" %02ld:%02ld:%02ld") ^ 1));
            int64_t v16 = *(int64_t *)(a2 + 96); // 0x40584c
            if (v16 != 0) {
                // 0x4058f8
                __fprintf_chk(g47, 1, ".%09d", v16);
            }
            // 0x405859
            if (*(int32_t *)(a2 + 28) == 1) {
                // 0x405920
                fwrite((int64_t *)"pm", 1, 2, g47);
            }
            // 0x405863
            *v15 = 1;
            v14 = 1;
            if (*(int64_t *)(a2 + 176) == 0) {
                goto lab_0x4056ba;
            } else {
                char * v17 = (char *)(a2 + 219);
                unsigned char v18 = *v17; // 0x40587d
                v14 = v18;
                v13 = v17;
                if (v18 != 0) {
                    goto lab_0x4056ba;
                } else {
                    goto lab_0x40588c;
                }
            }
        } else {
            goto lab_0x40564d;
        }
    }
  lab_0x4055f6:
    // 0x4055f6
    __fprintf_chk(g47, 1, dcgettext(NULL, "year: %04ld", 5));
    *v3 = *v2;
    v4 = 1;
    goto lab_0x405636;
  lab_0x40564d:
    // 0x40564d
    v14 = v4;
    char * v19; // 0x4055a0
    if (*(int64_t *)(a2 + 176) == 0) {
        goto lab_0x4056ba;
    } else {
        char * v20 = (char *)(a2 + 219);
        v14 = v4;
        if (*v20 != 0) {
            goto lab_0x4056ba;
        } else {
            // 0x405660
            v19 = v20;
            v13 = v20;
            if (v4 != 0) {
                goto lab_0x40588c;
            } else {
                goto lab_0x405668;
            }
        }
    }
  lab_0x4056ba:;
    // 0x4056ba
    char * v21; // 0x4055a0
    int64_t v22; // 0x4055a0
    if (*(int64_t *)(a2 + 184) == 0) {
        goto lab_0x405750;
    } else {
        char * v23 = (char *)(a2 + 220); // 0x4056c8
        if (*v23 != 0) {
            goto lab_0x405750;
        } else {
            // 0x4056d1
            __fprintf_chk(g47, 1, (char *)((v14 ^ 1) + (int64_t)" isdst=%d%s"));
            *v23 = 1;
            if (*(int64_t *)(a2 + 208) == 0) {
                goto lab_0x405729;
            } else {
                char * v24 = (char *)(a2 + 222);
                v21 = v24;
                v22 = (int64_t)" UTC%s";
                if (*v24 == 0) {
                    goto lab_0x4058b5;
                } else {
                    goto lab_0x405729;
                }
            }
        }
    }
  lab_0x405750:
    // 0x405750
    if (*(int64_t *)(a2 + 208) == 0) {
        goto lab_0x405767;
    } else {
        char * v25 = (char *)(a2 + 222);
        if (*v25 == 0) {
            // 0x4058a8
            v21 = v25;
            v22 = (v14 ^ 1) + (int64_t)" UTC%s";
            goto lab_0x4058b5;
        } else {
            goto lab_0x405767;
        }
    }
  lab_0x405767:
    // 0x405767
    if (*(char *)(a2 + 160) == 0) {
        // 0x4057a2
        return fputc(10, g47);
    }
    if ((char)v14 != 0) {
        // 0x405736
        fputc(32, g47);
        goto lab_0x405778;
    } else {
        goto lab_0x405778;
    }
  lab_0x40588c:
    // 0x40588c
    fputc(32, g47);
    v19 = v13;
    goto lab_0x405668;
  lab_0x405668:;
    // 0x405668
    int64_t v26; // bp-152, 0x4055a0
    function_4054b0(a2, &v26);
    __fprintf_chk(g47, 1, dcgettext(NULL, "%s (day ordinal=%ld number=%d)", 5));
    *v19 = 1;
    v14 = 1;
    goto lab_0x4056ba;
  lab_0x405778:
    // 0x405778
    __fprintf_chk(g47, 1, dcgettext(NULL, "number of seconds: %ld", 5));
    // 0x4057a2
    return fputc(10, g47);
  lab_0x405729:
    // 0x405729
    if (*(char *)(a2 + 160) == 0) {
        // 0x4057a2
        return fputc(10, g47);
    }
    // 0x405736
    fputc(32, g47);
    goto lab_0x405778;
  lab_0x4058b5:
    // 0x4058b5
    function_404e20(*(int32_t *)(a2 + 24), &v26);
    __fprintf_chk(g47, 1, (char *)v22);
    *v21 = 1;
    if (*(char *)(a2 + 160) == 0) {
        // 0x4057a2
        return fputc(10, g47);
    }
    // 0x405736
    fputc(32, g47);
    goto lab_0x405778;
}
// Address range: 0x405940 - 0x407bb2
int64_t function_405940(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405940
    int64_t v1; // bp-1512, 0x405940
    int64_t v2 = &v1; // 0x405968
    int64_t v3; // bp-1352, 0x405940
    int64_t v4 = &v3; // 0x40596f
    v3 = 0;
    int64_t * v5 = (int64_t *)(v2 + 16);
    int64_t v6 = v2 + 56;
    int64_t * v7 = (int64_t *)v6;
    int64_t v8 = v2 + 64;
    int64_t * v9 = (int64_t *)(v2 + 8);
    int64_t * v10 = (int64_t *)v8;
    int64_t v11 = v2 + 208;
    int64_t * v12 = (int64_t *)(v2 + 40);
    int64_t * v13 = (int64_t *)(v2 + 48);
    int32_t * v14 = (int32_t *)(v2 + 36);
    int64_t v15 = v2 + 224;
    int64_t v16 = v2 + 272;
    int128_t * v17 = (int128_t *)v16;
    int64_t v18 = v2 + 320;
    int64_t * v19 = (int64_t *)v18;
    int64_t v20 = v2 + 288;
    int128_t * v21 = (int128_t *)v20;
    int64_t v22 = v2 + 304;
    int128_t * v23 = (int128_t *)v22;
    int32_t * v24 = (int32_t *)(v2 + 24);
    int64_t v25 = v2 + 72;
    int64_t * v26 = (int64_t *)v25;
    int64_t * v27 = (int64_t *)(v2 - 16);
    int64_t * v28 = (int64_t *)(v2 - 24);
    int64_t * v29 = (int64_t *)(v2 - 32);
    int32_t * v30 = (int32_t *)(v2 + 324);
    char * v31 = (char *)v8;
    int64_t v32 = v2 + 88;
    int64_t * v33 = (int64_t *)v32;
    int64_t * v34 = (int64_t *)(v2 + 96);
    int64_t v35 = v2 + 104;
    int64_t * v36 = (int64_t *)v35;
    int64_t * v37 = (int64_t *)(v2 + 80);
    int64_t * v38 = (int64_t *)(v2 + 112);
    int64_t * v39 = (int64_t *)(v2 + 120);
    int32_t * v40 = (int32_t *)v35;
    int32_t * v41 = (int32_t *)v32;
    int64_t v42; // bp-1176, 0x405940
    int64_t v43 = &v42; // 0x405940
    int64_t v44 = 0xfffffffe; // 0x405940
    int64_t v45 = 0; // 0x405940
    int64_t v46 = (int64_t)a1; // 0x405940
    int64_t v47 = v4; // 0x405940
    int64_t v48 = 38; // 0x405940
    int64_t v49; // 0x405940
    int64_t v50; // 0x405940
    int64_t v51; // 0x405940
    int64_t v52; // 0x405940
    int64_t v53; // 0x405940
    int64_t v54; // 0x405940
    int64_t v55; // 0x405940
    int64_t v56; // 0x405940
    int64_t v57; // 0x405940
    int64_t v58; // 0x405940
    int64_t v59; // 0x405940
    int64_t v60; // 0x405940
    int64_t v61; // 0x405940
    int64_t v62; // 0x405940
    int64_t v63; // 0x405940
    int64_t v64; // 0x405940
    int64_t v65; // 0x405940
    int64_t v66; // 0x405940
    int64_t v67; // 0x405940
    int64_t v68; // 0x405940
    int64_t v69; // 0x405940
    int64_t v70; // 0x405940
    int64_t * v71; // 0x405bf0
    int128_t v72; // 0x405940
    int128_t v73; // 0x405940
    while (true) {
      lab_0x40599c:
        // 0x40599c
        v53 = v48;
        v52 = v47;
        v59 = v46;
        v56 = v45;
        v65 = v43;
        v73 = v72;
        int32_t v74 = v44;
        int32_t v75 = v74; // 0x40599f
        int64_t v76 = v65; // 0x40599f
        int64_t v77 = v44; // 0x40599f
        int64_t v78 = v56; // 0x40599f
        int64_t v79 = v59; // 0x40599f
        int64_t v80 = v53; // 0x40599f
        if (v74 == -2) {
            // 0x405bf0
            v71 = (int64_t *)v59;
            int64_t v81 = *v71; // 0x405bf0
            v49 = v81;
            v68 = (int64_t)*(char *)v81;
            while (true) {
              lab_0x405c07_2:;
                int64_t v82 = v68;
                int64_t v83 = v49;
                v51 = v83;
                v70 = v82;
                if (v82 < 33) {
                    int64_t v84 = v83; // 0x405c28
                    v50 = v83;
                    v69 = v82;
                    if ((1 << v82 % 64 & 0x100003e00) == 0) {
                        goto lab_0x405c61;
                    } else {
                        int64_t v85 = v84 + 1;
                        *v71 = v85;
                        unsigned char v86 = *(char *)v85; // 0x405c31
                        int64_t v87 = v86; // 0x405c31
                        v51 = v85;
                        v70 = v87;
                        while (v86 < 33) {
                            // 0x405c43
                            v84 = v85;
                            v50 = v85;
                            v69 = v87;
                            if ((1 << v87 % 64 & 0x100003e00) == 0) {
                                goto lab_0x405c61;
                            }
                            v85 = v84 + 1;
                            *v71 = v85;
                            v86 = *(char *)v85;
                            v87 = v86;
                            v51 = v85;
                            v70 = v87;
                        }
                        goto lab_0x405d80;
                    }
                } else {
                    goto lab_0x405d80;
                }
            }
            goto lab_0x405ea9_3;
        } else {
            int64_t v88 = v80;
            int64_t v89 = v79;
            int64_t v90 = v78;
            int64_t v91 = v76;
            int32_t v92 = v75;
            v62 = 0;
            v66 = v91;
            v64 = 0;
            v57 = v90;
            v60 = v89;
            v54 = v88;
            if (v92 < 1) {
                goto lab_0x4059c2;
            } else {
                int64_t v93 = v77;
                v67 = v91;
                v63 = v93;
                v58 = v90;
                v61 = v89;
                v55 = v88;
                if (v92 < 278) {
                    goto lab_0x405e58;
                } else {
                    // 0x4059b9
                    v62 = 2;
                    v66 = v91;
                    v64 = v93;
                    v57 = v90;
                    v60 = v89;
                    v54 = v88 + 2 & 0xffffffff;
                    goto lab_0x4059c2;
                }
            }
        }
    }
  lab_0x405abd_8:;
    // 0x405abd
    int64_t result; // 0x405940
    return result;
  lab_0x405c61:;
    int64_t v94 = v69;
    int64_t v95 = v50;
    int64_t v96 = v95; // 0x405c67
    int64_t v97 = v94; // 0x405c67
    int64_t v98 = 0; // 0x405c67
    if ((int32_t)v94 < 58) {
        // break -> 0x405ea9
        goto lab_0x405ea9_3;
    }
    int64_t v99 = v94 + 0xffffffbf; // 0x405c6d
    int64_t v100 = v95; // 0x405c73
    int64_t v101 = v95; // 0x405c73
    int64_t v102 = v99; // 0x405c73
    int64_t v103 = v94; // 0x405c73
    if ((int32_t)v99 >= 58) {
        goto lab_0x405bb5_2;
    }
    goto lab_0x405c79;
  lab_0x405c07:;
    // 0x405c07
    int64_t v114; // 0x405940
    v49 = v114;
    int64_t v115; // 0x405940
    v68 = v115;
    goto lab_0x405c07_2;
  lab_0x405cb4:;
    // 0x405cb4
    int64_t v106; // 0x405940
    int64_t v116 = v106;
    int64_t v105; // 0x405940
    int64_t v117 = v105;
    int64_t v118 = v117; // 0x405cb7
    int64_t v104; // 0x405940
    if (v117 >= v2 + 147) {
        goto lab_0x405cbf;
    } else {
        // 0x405cb9
        *(char *)v117 = (char)v104;
        v118 = v117 + 1;
        goto lab_0x405cbf;
    }
  lab_0x405bb5_2:
    // 0x405bb5
    *v71 = v100 + 1;
    unsigned char v119 = *(char *)v100; // 0x405bbc
    v62 = 0;
    v66 = v65;
    v64 = 0;
    v57 = v56;
    v60 = v59;
    v54 = v53;
    v67 = v65;
    v63 = v119;
    v58 = v56;
    v61 = v59;
    v55 = v53;
    if (v119 != 0) {
        goto lab_0x405e58;
    } else {
        goto lab_0x4059c2;
    }
  lab_0x4059c2:;
    int64_t v120 = v54;
    int64_t v121 = v60;
    int64_t v122 = v57;
    int64_t v123 = v64;
    int64_t v124 = v66;
    int128_t v125 = v73; // 0x4059c6
    int64_t v126 = v124; // 0x4059c6
    int64_t v127 = v123; // 0x4059c6
    int64_t v128 = v122; // 0x4059c6
    int64_t v129 = v121; // 0x4059c6
    int64_t v130 = v52; // 0x4059c6
    int64_t v131; // 0x405940
    int64_t v132; // 0x405940
    int64_t v133; // 0x405940
    int64_t v134; // 0x405940
    int64_t v135; // 0x405940
    int64_t v136; // 0x405940
    int64_t v137; // 0x405940
    int64_t v138; // 0x405940
    int64_t v139; // 0x405940
    int64_t v140; // 0x405940
    int64_t v141; // 0x405940
    int64_t v142; // 0x405940
    int64_t v143; // 0x405940
    int64_t v144; // 0x405940
    int64_t v145; // 0x405940
    int128_t v146; // 0x405940
    int128_t v147; // 0x405940
    if ((int32_t)v120 < 113) {
        int64_t v148 = 0x100000000 * v120 >> 32; // 0x4059cc
        char v149 = *(char *)(v148 + (int64_t)&g13); // 0x4059cf
        v125 = v73;
        v126 = v124;
        v127 = v123;
        v128 = v122;
        v129 = v121;
        v130 = v52;
        if ((int32_t)v149 != (int32_t)v62) {
            goto lab_0x405a90;
        } else {
            unsigned char v150 = *(char *)(v148 + (int64_t)&g14); // 0x4059df
            if (v150 == 0) {
                int64_t v151 = v124 + 104; // 0x406060
                int64_t v152 = v124 + 56; // 0x406064
                int128_t v153 = __asm_movdqu(*(int128_t *)v152); // 0x406064
                int64_t v154 = v124 + 72; // 0x40606f
                int128_t v155 = __asm_movdqu(*(int128_t *)v154); // 0x40606f
                *v17 = (int128_t)__asm_movaps(v153);
                int64_t v156 = v124 + 88; // 0x406080
                int128_t v157 = __asm_movdqu(*(int128_t *)v156); // 0x406080
                *v19 = *(int64_t *)v151;
                *v21 = (int128_t)__asm_movaps(v155);
                *v23 = (int128_t)__asm_movaps(v157);
                *v5 = *(int64_t *)v156;
                *v9 = *(int64_t *)(v124 + 96);
                *v24 = *(int32_t *)v151;
                v147 = v155;
                v139 = 0xffffffe4;
                v144 = v52;
                v145 = v124;
                v140 = v123;
                v135 = 0;
                v138 = v121;
                v131 = *(int64_t *)(v124 + 64);
                v132 = *(int64_t *)(v124 + 80);
                v133 = *(int64_t *)v154;
                v134 = *(int64_t *)v152;
                goto lab_0x4060d0;
            } else {
                int32_t v158 = *v14; // 0x4059f0
                int64_t v159 = v124 + 56; // 0x405a02
                *v14 = v158 - 1 + (int32_t)(v158 == 0);
                *(int64_t *)(v2 + 216) = *v12;
                int128_t v160 = __asm_movdqa(*(int128_t *)v11); // 0x405a1c
                *(int64_t *)v15 = *v13;
                int128_t v161 = __asm_movdqa(*(int128_t *)v15); // 0x405a35
                __asm_movups(*(int128_t *)v159, v160);
                int128_t v162 = __asm_movdqa(*(int128_t *)(v2 + 240)); // 0x405a41
                *(int64_t *)(v124 + 104) = *(int64_t *)(v2 + 256);
                __asm_movups(*(int128_t *)(v124 + 72), v161);
                __asm_movups(*(int128_t *)(v124 + 88), v162);
                v146 = v161;
                v143 = v52;
                v142 = v159;
                v141 = 0xfffffffe;
                v136 = v150;
                v137 = v121;
                goto lab_0x405a56;
            }
        }
    } else {
        goto lab_0x405a90;
    }
  lab_0x405e62_2:;
    // 0x405e62
    int64_t v163; // 0x405940
    v62 = v163;
    int64_t v164; // 0x405940
    v66 = v164;
    int64_t v165; // 0x405940
    v64 = v165;
    int64_t v166; // 0x405940
    v57 = v166;
    int64_t v167; // 0x405940
    v60 = v167;
    int64_t v168; // 0x405940
    v54 = v168 + v163 & 0xffffffff;
    goto lab_0x4059c2;
  lab_0x405d80:;
    int64_t v169 = v70;
    int64_t v170 = v51; // 0x405e00
    char v171 = v169;
    char v107; // 0x405940
    int64_t v108; // 0x405940
    if ((int32_t)v169 < 58) {
        // 0x405df0
        v96 = v170;
        v97 = v169;
        v98 = 0;
        if ((v171 - 43 & -3) != 0) {
            // break -> 0x405ea9
            goto lab_0x405ea9_3;
        }
        goto lab_0x405dfe;
    } else {
        if ((v171 - 43 & -3) == 0) {
            goto lab_0x405dfe;
        } else {
            int64_t v172 = v169 + 0xffffffbf; // 0x405d96
            v101 = v170;
            v102 = v172;
            v103 = v169;
            v107 = v171;
            v108 = v170;
            if ((int32_t)v172 < 58) {
                goto lab_0x405c79;
            } else {
                goto lab_0x405da2;
            }
        }
    }
  lab_0x405c79:
    // 0x405c79
    v104 = v103;
    v105 = v2 + 128;
    v106 = v101;
    if ((1 << v102 % 64) % 0x3ffffff04000000 != 0) {
        goto lab_0x405cb4;
    }
    // 0x405c79
    v107 = v103;
    v108 = v101;
    goto lab_0x405da2;
  lab_0x405dfe:;
    int64_t v563 = v170 + 1;
    *v71 = v563;
    unsigned char v564 = *(char *)v563; // 0x405e12
    int64_t v565 = v564; // 0x405e12
    while (v564 < 33) {
        int64_t v566 = v563; // 0x405e36
        v114 = v563;
        v115 = v565;
        if ((1 << v565 % 64 & 0x100003e00) == 0) {
            goto lab_0x405c07;
        }
        v563 = v566 + 1;
        *v71 = v563;
        v564 = *(char *)v563;
        v565 = v564;
    }
    // 0x405e70
    v114 = v563;
    v115 = v565;
    if ((int32_t)v564 < 58) {
        // 0x405e81
        v96 = v563;
        v97 = v565;
        v98 = v171 != 45 ? 1 : 0xffffffff;
        goto lab_0x405ea9_3;
    }
    goto lab_0x405c07;
  lab_0x405da2:
    // 0x405da2
    v100 = v108;
    int64_t v109 = v108; // 0x405da5
    if (v107 != 40) {
        goto lab_0x405bb5_2;
    }
    int64_t v110 = v109 + 1; // 0x405dd0
    *v71 = v110;
    char v111 = *(char *)v109; // 0x405dd7
    v62 = 0;
    v66 = v65;
    v64 = 0;
    v57 = v56;
    v60 = v59;
    v54 = v53;
    if (v111 == 0) {
        goto lab_0x4059c2;
    }
    int64_t v112 = v111 != 40 ? (int64_t)(v111 == 41) : 1;
    v109 = v110;
    while (v112 != 0) {
        int64_t v113 = v112;
        v110 = v109 + 1;
        *v71 = v110;
        v111 = *(char *)v109;
        v62 = 0;
        v66 = v65;
        v64 = 0;
        v57 = v56;
        v60 = v59;
        v54 = v53;
        if (v111 == 0) {
            goto lab_0x4059c2;
        }
        // 0x405de3
        v112 = (v111 != 40 ? (int64_t)(v111 == 41) : 1) + v113;
        v109 = v110;
    }
    // 0x40604b
    v114 = v110;
    v115 = (int64_t)*(char *)v110;
    goto lab_0x405c07;
  lab_0x405ea9_3:;
    int64_t v173 = v98;
    int64_t v174 = v96;
    uint64_t v175 = v97 % 256; // 0x405e86
    int64_t v176 = v174;
    int64_t v177 = 0x100000000 * (v173 == 0xffffffff ? 48 - v175 : v175 + 0xffffffd0) / 0x100000000;
    int64_t v178 = v176 + 1; // 0x405ea9
    unsigned char v179 = *(char *)v178; // 0x405ea9
    while (v179 == 57 || (int32_t)v179 < 57) {
        int128_t v180 = v177; // 0x405f90
        int128_t v181 = 10 * v180; // 0x405f90
        v163 = 2;
        v164 = v65;
        v165 = 63;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        if (v181 != 0xa0000000000000000 * v180 >> 64) {
            goto lab_0x405e62_2;
        }
        int64_t v182 = v179; // 0x405ea9
        int64_t v183 = v181; // 0x405f90
        int64_t v184 = 0x100000000 * (v173 == 0xffffffff ? 48 - v182 : v182 + 0xffffffd0) >> 32; // 0x405e9d
        int64_t v185 = v184 + v183; // 0x405ea0
        v163 = 2;
        v164 = v65;
        v165 = 63;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        int64_t v186 = v185; // 0x405ea3
        int64_t v187 = v178; // 0x405ea3
        if (((v185 ^ v183) & (v185 ^ v184)) < 0) {
            goto lab_0x405e62_2;
        }
        v176 = v187;
        v177 = v186;
        v178 = v176 + 1;
        v179 = *(char *)v178;
    }
    int64_t v188; // 0x405940
    int64_t v189; // 0x405940
    int64_t v190; // 0x405940
    int64_t v191; // 0x405940
    int64_t v192; // 0x405940
    int64_t v193; // 0x405940
    int64_t v194; // 0x405940
    int64_t v195; // 0x405940
    if ((v179 - 44 & -3) != 0) {
        goto lab_0x406010;
    } else {
        // 0x405ece
        if ((int32_t)((int64_t)*(char *)(v176 + 2) + 0xffffffd0) < 10) {
            int64_t v196; // 0x405940
            int64_t v197 = v196 + 0xffffffd0; // 0x405ef3
            int64_t v198; // 0x405940
            int64_t v199; // 0x405940
            int64_t v200; // 0x405940
            int64_t v201; // 0x405940
            int64_t v202; // 0x405940
            int64_t v203; // 0x405940
            int64_t v204; // 0x405ef7
            int64_t v205; // 0x405efe
            char v206; // 0x405efe
            int64_t v207; // 0x405efe
            if ((int32_t)v197 < 10) {
                // 0x405efe
                v205 = v200 + 1;
                v206 = *(char *)v205;
                v207 = v206;
                v203 = v197 + v204 & 0xffffffff;
                v201 = v205;
                v202 = v207 + 0xffffffd0;
                v198 = v207;
                v199 = v207 & 0xffffffff;
            }
            // 0x405f10
            int64_t v208; // 0x405940
            int64_t v209 = v208;
            int64_t v210; // 0x405940
            int64_t v211 = v210;
            int64_t v212; // 0x405940
            v195 = 10 * v212 & 0xfffffffe;
            int32_t v213; // 0x405940
            int32_t v214 = v213 - 1; // 0x405f10
            v213 = v214;
            v212 = v195;
            v210 = v211;
            v208 = v209;
            // 0x405ede
            while (v214 != 0) {
                // 0x405ef0
                v197 = v196 + 0xffffffd0;
                if ((int32_t)v197 < 10) {
                    // 0x405efe
                    v205 = v200 + 1;
                    v206 = *(char *)v205;
                    v207 = v206;
                    v203 = v197 + v204 & 0xffffffff;
                    v201 = v205;
                    v202 = v207 + 0xffffffd0;
                    v198 = v207;
                    v199 = v207 & 0xffffffff;
                }
                // 0x405f10
                v209 = v208;
                v211 = v210;
                v195 = 10 * v212 & 0xfffffffe;
                v214 = v213 - 1;
                v213 = v214;
                v212 = v195;
                v210 = v211;
                v208 = v209;
            }
            int64_t v215 = v197;
            if (v173 == 0xffffffff) {
                // 0x4062b1
                v191 = v211;
                if ((int32_t)v215 < 10) {
                    int64_t v216 = v211; // 0x4062be
                    int32_t v217; // 0x405940
                    char v218; // 0x405940
                    int64_t v219; // 0x405940
                    if ((char)v209 != 48) {
                        char v220 = *(char *)v211;
                        v217 = (int32_t)v220 - 48;
                        v218 = v220;
                        v219 = v211;
                      lab_0x4062dc:;
                        int64_t v221 = v195 + 1 & 0xffffffff; // 0x4062e0
                        v192 = v221;
                        v188 = v219;
                        v193 = v221;
                        v189 = v219;
                        if (v217 < 9 || v218 == 57) {
                            goto lab_0x405f27;
                        } else {
                            goto lab_0x405f47;
                        }
                    } else {
                        int64_t v222 = v216 + 1; // 0x4062c0
                        char v223 = *(char *)v222; // 0x4062c4
                        int32_t v224 = (int32_t)v223 - 48;
                        v191 = v222;
                        while (v223 == 57 || v224 < 9) {
                            // 0x4062d6
                            v216 = v222;
                            v217 = v224;
                            v218 = v223;
                            v219 = v222;
                            if (v223 != 48) {
                                goto lab_0x4062dc;
                            }
                            v222 = v216 + 1;
                            v223 = *(char *)v222;
                            v224 = (int32_t)v223 - 48;
                            v191 = v222;
                        }
                        goto lab_0x4076d0;
                    }
                } else {
                    goto lab_0x4076d0;
                }
            } else {
                // 0x405f1e
                v192 = v195;
                v188 = v211;
                v194 = v195;
                v190 = v211;
                if ((int32_t)v215 < 10) {
                    goto lab_0x405f27;
                } else {
                    goto lab_0x4076a1;
                }
            }
        } else {
            goto lab_0x406010;
        }
    }
  lab_0x406010:
    // 0x406010
    *v71 = v178;
    *v12 = v177;
    *(char *)v11 = (char)((int32_t)v173 < 0);
    *v13 = v178 - v174;
    v163 = v174 + 20 + (v174 ^ 0xffffffff) + (int64_t)(v173 == 0) & 0xffffffff;
    v164 = v65;
    v165 = v178 + (v173 == 0 ? 276 : 275) + (v178 ^ 0xffffffff) & 0xffffffff;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    goto lab_0x405e62_2;
  lab_0x405a90:;
    int64_t v225 = v130;
    int64_t v226 = v129;
    int64_t v227 = v128;
    int64_t v228 = v127;
    int64_t v229 = v126;
    unsigned char v230 = *(char *)(v227 + (int64_t)&g17); // 0x405a90
    int64_t v231; // 0x405940
    int64_t v232; // 0x405940
    int64_t v233; // 0x405940
    int64_t v234; // 0x405940
    int64_t v235; // 0x405940
    int64_t v236; // 0x405940
    int64_t v237; // 0x405940
    int64_t v238; // 0x405940
    int64_t v239; // 0x405940
    int64_t v240; // 0x405940
    int64_t v241; // 0x405940
    int64_t v242; // 0x405940
    int64_t v243; // 0x405940
    int64_t v244; // 0x405940
    int64_t v245; // 0x405940
    int64_t v246; // 0x405940
    int64_t v247; // 0x405940
    int64_t v248; // 0x405940
    int64_t v249; // 0x405940
    int64_t v250; // 0x405940
    int64_t v251; // 0x405940
    int64_t v252; // 0x405940
    int64_t v253; // 0x405940
    int64_t v254; // 0x405940
    int64_t v255; // 0x405940
    int64_t v256; // 0x405940
    int64_t v257; // 0x405940
    int64_t v258; // 0x405940
    char * v259; // 0x405940
    int64_t v260; // 0x405940
    int64_t v261; // 0x405940
    int64_t v262; // 0x405940
    int64_t v263; // 0x405940
    int64_t v264; // 0x405940
    int64_t v265; // 0x405940
    int64_t v266; // 0x405940
    int64_t v267; // 0x405b5a
    int64_t v268; // 0x405b5d
    int64_t v269; // 0x405b6d
    int64_t v270; // 0x405b79
    int128_t v271; // 0x405940
    int128_t v272; // 0x405940
    int128_t v273; // 0x405940
    int128_t v274; // 0x405940
    int128_t v275; // 0x405940
    if (v230 != 0) {
        // 0x405b20
        v271 = v125;
        int64_t v276 = v230; // 0x405a90
        int64_t v277 = (int64_t)*(char *)(v276 + (int64_t)&g11); // 0x405b2b
        int64_t v278 = 56 * (1 - v277) + v229; // 0x405b44
        int64_t v279 = v278 + 48; // 0x405b48
        int128_t v280 = __asm_movdqu(*(int128_t *)v278); // 0x405b4c
        int64_t v281 = v278 + 16; // 0x405b50
        int128_t v282 = __asm_movdqu(*(int128_t *)v281); // 0x405b50
        int64_t v283 = v278 + 32; // 0x405b55
        int128_t v284 = __asm_movdqu(*(int128_t *)v283); // 0x405b55
        v267 = *(int64_t *)v278;
        v268 = *(int64_t *)(v278 + 8);
        *v19 = *(int64_t *)v279;
        v269 = *(int64_t *)v281;
        *v17 = (int128_t)__asm_movaps(v280);
        v270 = *(int64_t *)(v278 + 24);
        *v21 = (int128_t)__asm_movaps(v282);
        *v5 = *(int64_t *)v283;
        *v23 = (int128_t)__asm_movaps(v284);
        *v9 = *(int64_t *)(v278 + 40);
        *v24 = *(int32_t *)v279;
        g67 = v230 - 4;
        v252 = (int64_t)"hybrid";
        switch (v230) {
            case 4: {
                int128_t v285 = __asm_movdqu(*(int128_t *)v229); // 0x406772
                *(char *)(v226 + 160) = 1;
                __asm_movups(*(int128_t *)(v226 + 88), v285);
                *v26 = v268;
                *v10 = v270;
                *v7 = v226;
                v274 = v285;
                v247 = v225 - 4;
                v251 = v229 - 112;
                v259 = dcgettext(NULL, "number of seconds", 5);
                v257 = 2;
                goto lab_0x4067b9;
            }
            case 7: {
                // 0x406cc4
                *v26 = v268;
                *v10 = v270;
                int64_t * v286 = (int64_t *)(v226 + 200); // 0x406cd8
                *v286 = *v286 + 1;
                int64_t * v287 = (int64_t *)(v226 + 168); // 0x406ce0
                *v287 = *v287 + 1;
                *v7 = v226;
                v253 = (int64_t)"datetime";
                goto lab_0x40683e;
            }
            case 8: {
                // 0x406c9e
                *v26 = v268;
                *v10 = v270;
                int64_t * v288 = (int64_t *)(v226 + 200); // 0x406cb2
                *v288 = *v288 + 1;
                *v7 = v226;
                v253 = (int64_t)"time";
                goto lab_0x40683e;
            }
            case 9: {
                // 0x406860
                *v26 = v268;
                *v10 = v270;
                int64_t * v289 = (int64_t *)(v226 + 184); // 0x406874
                *v289 = *v289 + 1;
                *v7 = v226;
                v253 = (int64_t)"local_zone";
                goto lab_0x40683e;
            }
            case 10: {
                // 0x40681d
                *v26 = v268;
                int64_t * v290 = (int64_t *)(v226 + 208); // 0x40682c
                *v290 = *v290 + 1;
                *v10 = v270;
                *v7 = v226;
                v253 = (int64_t)"zone";
                goto lab_0x40683e;
            }
            case 11: {
                // 0x406f01
                *v26 = v268;
                *v10 = v270;
                int64_t * v291 = (int64_t *)(v226 + 168); // 0x406f15
                *v291 = *v291 + 1;
                *v7 = v226;
                v253 = (int64_t)"date";
                goto lab_0x40683e;
            }
            case 12: {
                // 0x406edb
                *v26 = v268;
                *v10 = v270;
                int64_t * v292 = (int64_t *)(v226 + 176); // 0x406eef
                *v292 = *v292 + 1;
                *v7 = v226;
                v253 = (int64_t)"day";
                goto lab_0x40683e;
            }
            case 13: {
                // 0x406ebd
                v252 = (int64_t)"relative";
                goto lab_0x406dd7;
            }
            case 14: {
                // 0x406e3b
                *v26 = v226;
                *v10 = v268;
                *v7 = v270;
                char * v293 = dcgettext(NULL, "number", 5); // 0x406e56
                int64_t v294 = *v26; // 0x406e5b
                int64_t v295 = v229 - 56; // 0x406e60
                int64_t v296 = v225 - 2; // 0x406e64
                int64_t v297 = *v7; // 0x406e76
                int64_t v298 = *v10; // 0x406e83
                v147 = v271;
                v139 = 4;
                v144 = v296;
                v145 = v295;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v294;
                v131 = v298;
                v132 = v297;
                v133 = v269;
                v134 = v267;
                if (*(char *)(v294 + 217) == 0) {
                    goto lab_0x4060d0;
                } else {
                    // 0x406e8e
                    *v40 = -93;
                    *v34 = v295;
                    *v41 = 4;
                    *v37 = v298;
                    *v26 = v296;
                    *v10 = v297;
                    *v7 = v294;
                    function_4055a0((int64_t)v293, v294);
                    v275 = v271;
                    goto lab_0x4067f6;
                }
            }
            case 15: {
                goto lab_0x406dd7;
            }
            case 18: {
                // 0x406d7f
                *(int64_t *)(v226 + 80) = 0;
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 96) = 0;
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 19: {
                // 0x406d3a
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 96) = 0;
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 160);
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 20: {
                // 0x406cf2
                *(int64_t *)(v226 + 88) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 272);
                *(int64_t *)(v226 + 96) = (int64_t)*(int32_t *)(v229 - 48);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 160);
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 12;
                v145 = v229 - 336;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 22: {
                // 0x406b07
                *(int64_t *)(v226 + 80) = 0;
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 96) = 0;
                *(int32_t *)(v226 + 28) = 2;
                v147 = v271;
                v139 = 8;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 23: {
                // 0x406ac1
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 96) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 160);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 48);
                *(int32_t *)(v226 + 28) = 2;
                v147 = v271;
                v139 = 8;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 24: {
                // 0x40641f
                *(int32_t *)(v226 + 28) = 2;
                *(int64_t *)(v226 + 88) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 272);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 160);
                *(int64_t *)(v226 + 96) = (int64_t)*(int32_t *)(v229 - 48);
                v147 = v271;
                v139 = 8;
                v144 = v225 - 12;
                v145 = v229 - 336;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 27: {
                int64_t v299 = *(int64_t *)(v229 - 40); // 0x4063c1
                int64_t v300 = *(int64_t *)v229; // 0x4063c5
                *v26 = v268;
                int64_t v301 = *(int64_t *)(v229 - 48); // 0x4063d1
                char v302 = *(char *)(v229 - 56); // 0x4063d5
                *v10 = v270;
                int64_t * v303 = (int64_t *)(v226 + 208); // 0x4063de
                *v303 = *v303 + 1;
                *v7 = v226;
                if ((char)function_405100(v226 + 24, v302, v301, v299, v300) == 0) {
                    // break -> 0x405abd
                    break;
                }
                // 0x406407
                v147 = v271;
                v139 = 10;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffe5;
                v138 = *v7;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 28: {
                // 0x4063a2
                *(int32_t *)(v226 + 20) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 11;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 29: {
                // 0x40637a
                *(int32_t *)(v226 + 20) = 1;
                int64_t * v304 = (int64_t *)(v226 + 192); // 0x406390
                *v304 = *v304 + 1;
                v147 = v271;
                v139 = 11;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 30: {
                // 0x40635b
                v256 = *(int64_t *)v229;
                goto lab_0x40635e;
            }
            case 31: {
                // 0x40633b
                *(int32_t *)(v226 + 24) = 0x6270;
                v147 = v271;
                v139 = 12;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 32: {
                // 0x406c87
                *v26 = v268;
                *v10 = v270;
                *(int32_t *)(v226 + 24) = (int32_t)*(int64_t *)(v229 - 56);
                goto lab_0x406b59;
            }
            case 33: {
                // 0x406b47
                *v26 = v268;
                *v10 = v270;
                *(int32_t *)(v226 + 24) = 0x6270;
                goto lab_0x406b59;
            }
            case 34: {
                int64_t v305 = *(int64_t *)(v229 - 40); // 0x406fd5
                int64_t v306 = *(int64_t *)v229; // 0x406fd9
                *v26 = v268;
                int64_t v307 = *(int64_t *)(v229 - 48); // 0x406fe5
                char v308 = *(char *)(v229 - 56); // 0x406fe9
                *v10 = v270;
                *v7 = v226;
                if ((char)function_405100(v226 + 24, v308, v307, v305, v306) == 0) {
                    // break -> 0x405abd
                    break;
                }
                int64_t v309 = *v7; // 0x407004
                int32_t * v310 = (int32_t *)(v309 + 24); // 0x40700b
                int64_t v311 = (int64_t)*v310; // 0x40700b
                int64_t v312 = *(int64_t *)(v229 - 112); // 0x40700f
                int64_t v313 = v312 + v311; // 0x40700f
                *v310 = (int32_t)v313;
                if (v313 >= 0x80000000 || ((v313 ^ v311) & (v313 ^ v312)) < 0) {
                    // break -> 0x405abd
                    break;
                }
                // 0x407030
                v147 = v271;
                v139 = 12;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v309;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 35: {
                // 0x406fc9
                v256 = (int64_t)(*(int32_t *)v229 + 3600);
                goto lab_0x40635e;
            }
            case 36: {
                // 0x406fa5
                *(int32_t *)(v226 + 24) = *(int32_t *)(v229 - 56) + 3600;
                v147 = v271;
                v139 = 12;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 37: {
                // 0x406f7e
                *(int64_t *)(v226 + 8) = 0;
                *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 13;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 38: {
                // 0x406f56
                *(int64_t *)(v226 + 8) = 0;
                *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)(v229 - 56);
                v147 = v271;
                v139 = 13;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 39: {
                // 0x406f27
                v255 = v229 - 56;
                goto lab_0x406f2b;
            }
            case 40: {
                // 0x40742f
                v255 = v229 - 48;
                goto lab_0x406f2b;
            }
            case 41: {
                // 0x407404
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 + 8);
                v147 = v271;
                v139 = 14;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 42: {
                int64_t * v314 = (int64_t *)(v229 - 208); // 0x4073a0
                int64_t v315 = *v314; // 0x4073a0
                char v316 = *(char *)(v226 + 217); // 0x4073a7
                if (v315 < 4) {
                    int64_t v317 = *(int64_t *)(v229 - 216); // 0x4077c9
                    *v7 = v317;
                    int64_t v318 = v317; // 0x4077d7
                    int64_t v319 = v226; // 0x4077d7
                    int64_t v320 = v268; // 0x4077d7
                    int64_t v321 = v270; // 0x4077d7
                    if (v316 != 0) {
                        // 0x407920
                        *v37 = v226;
                        *v26 = v268;
                        *v10 = v270;
                        char * v322 = dcgettext(NULL, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n", 5); // 0x40793b
                        function_404f90((int64_t)v322, *v7, 5, v315, v227, v226);
                        v319 = *v37;
                        v320 = *v26;
                        v321 = *v10;
                        v318 = *v7;
                    }
                    int128_t v323 = __asm_movdqu(*(int128_t *)v229); // 0x4077e2
                    *(int64_t *)(v319 + 56) = v318;
                    __asm_movups(*(int128_t *)(v319 + 32), v323);
                    *(int64_t *)(v319 + 64) = *(int64_t *)(v229 - 104);
                    *(int64_t *)(v319 + 48) = *(int64_t *)(v229 + 16);
                    v147 = v271;
                    v139 = 14;
                    v144 = v225 - 10;
                    v145 = v229 - 280;
                    v140 = v228;
                    v135 = 0xffffffa3;
                    v138 = v319;
                    v131 = v320;
                    v132 = v321;
                    v133 = v269;
                    v134 = v267;
                } else {
                    int64_t v324 = v315; // 0x4073bb
                    int64_t v325 = v226; // 0x4073bb
                    int64_t v326 = v268; // 0x4073bb
                    int64_t v327 = v270; // 0x4073bb
                    if (v316 != 0) {
                        // 0x4078c4
                        *v33 = v226;
                        *v37 = v268;
                        *v26 = v270;
                        *v10 = v315;
                        *v7 = *(int64_t *)(v229 - 216);
                        char * v328 = dcgettext(NULL, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n", 5); // 0x4078f0
                        int64_t v329 = *v10; // 0x4078f5
                        function_404f90((int64_t)v328, *v7, v329, v329, v227, v226);
                        v325 = *v33;
                        v326 = *v37;
                        v327 = *v26;
                        v324 = *v314;
                    }
                    int128_t v330 = __asm_movdqu(*(int128_t *)(v229 - 224)); // 0x4073c8
                    *(int64_t *)(v325 + 48) = v324;
                    __asm_movups(*(int128_t *)(v325 + 32), v330);
                    *(int64_t *)(v325 + 56) = *(int64_t *)(v229 - 104);
                    *(int64_t *)(v325 + 64) = *(int64_t *)(v229 + 8);
                    v147 = v330;
                    v139 = 14;
                    v144 = v225 - 10;
                    v145 = v229 - 280;
                    v140 = v228;
                    v135 = 0xffffffa3;
                    v138 = v325;
                    v131 = v326;
                    v132 = v327;
                    v133 = v269;
                    v134 = v267;
                }
                goto lab_0x4060d0;
            }
            case 43: {
                // 0x407360
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                int64_t v331 = *(int64_t *)(v229 + 8); // 0x40737a
                *(int64_t *)(v226 + 40) = -v331;
                if (v331 == -0x8000000000000000) {
                    // break -> 0x405abd
                    break;
                }
                goto lab_0x407263;
            }
            case 44: {
                // 0x407314
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 112);
                int64_t v332 = *(int64_t *)(v229 - 48); // 0x407326
                *(int64_t *)(v226 + 64) = -v332;
                if (v332 == -0x8000000000000000) {
                    // break -> 0x405abd
                    break;
                }
                int64_t v333 = *(int64_t *)(v229 + 8); // 0x40733d
                *(int64_t *)(v226 + 40) = -v333;
                if (v333 == -0x8000000000000000) {
                    // break -> 0x405abd
                    break;
                }
                goto lab_0x407263;
            }
            case 45: {
                // 0x4072ec
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 + 8);
                v147 = v271;
                v139 = 14;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 46: {
                int128_t v334 = __asm_movdqu(*(int128_t *)v229); // 0x4072b4
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 168);
                __asm_movups(*(int128_t *)(v226 + 32), v334);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 48) = *(int64_t *)(v229 + 16);
                v147 = v334;
                v139 = 14;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 47: {
                // 0x407286
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 56) = *(int64_t *)v229;
                v147 = v271;
                v139 = 14;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 48: {
                int128_t v335 = __asm_movdqu(*(int128_t *)v229); // 0x40724e
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                __asm_movups(*(int128_t *)(v226 + 32), v335);
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                goto lab_0x407263;
            }
            case 50: {
                int128_t v336 = __asm_movdqu(*(int128_t *)(v229 - 112)); // 0x4071e9
                *(int64_t *)(v226 + 48) = *(int64_t *)(v229 - 96);
                int64_t v337 = *(int64_t *)(v229 - 48); // 0x4071fc
                __asm_movups(*(int128_t *)(v226 + 32), v336);
                *(int64_t *)(v226 + 56) = -v337;
                if (v337 == -0x8000000000000000) {
                    // break -> 0x405abd
                    break;
                }
                int64_t v338 = *(int64_t *)(v229 + 8); // 0x407218
                *(int64_t *)(v226 + 64) = -v338;
                if (v338 == -0x8000000000000000) {
                    // break -> 0x405abd
                    break;
                }
                // 0x40722f
                v147 = v336;
                v139 = 15;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 51: {
                int64_t * v339 = (int64_t *)(v226 + 144); // 0x40709e
                int32_t v340 = *(int32_t *)(v229 - 8); // 0x4070b5
                *v33 = *v339;
                int64_t * v341 = (int64_t *)(v226 + 128); // 0x4070be
                *v7 = *(int64_t *)(v229 - 56);
                *v10 = *(int64_t *)(v229 - 48);
                int64_t * v342 = (int64_t *)(v226 + 136); // 0x4070cf
                int64_t v343 = *v342; // 0x4070cf
                *v34 = *v341;
                int64_t * v344 = (int64_t *)(v226 + 120); // 0x4070db
                *v26 = *(int64_t *)(v229 - 40);
                int64_t v345 = *(int64_t *)(v229 - 16); // 0x4070e4
                *v36 = *v344;
                int64_t * v346 = (int64_t *)(v226 + 112); // 0x4070ed
                *v37 = *(int64_t *)(v229 - 32);
                int64_t v347 = *(int64_t *)(v229 - 24); // 0x4070f6
                *v38 = *v346;
                int64_t * v348 = (int64_t *)(v226 + 104); // 0x4070ff
                int32_t * v349 = (int32_t *)(v226 + 152); // 0x407103
                int32_t v350 = *v349; // 0x407103
                *v39 = *v348;
                int64_t v351 = *v33;
                char v352; // 0x405940
                if (*(int32_t *)v229 < 0) {
                    int32_t v353 = v350 - v340; // 0x40781f
                    *v349 = v353;
                    int64_t v354 = v351 - v345; // 0x40782f
                    *v339 = v354;
                    int64_t v355 = v343 - v347; // 0x407842
                    *v342 = v355;
                    int64_t v356 = *v34; // 0x407851
                    int64_t v357 = *v37; // 0x407856
                    int64_t v358 = v356 - v357; // 0x407856
                    *v341 = v358;
                    int64_t v359 = *v36; // 0x407868
                    int64_t v360 = *v26; // 0x40786d
                    int64_t v361 = v359 - v360; // 0x40786d
                    *v344 = v361;
                    int64_t v362 = *v38; // 0x40787a
                    *v26 = (int64_t)(((v361 ^ v359) & (v360 ^ v359)) < 0);
                    int64_t v363 = *v10; // 0x407886
                    int64_t v364 = v362 - v363; // 0x407886
                    *v346 = v364;
                    int64_t v365 = *v39; // 0x407893
                    *v10 = (int64_t)(((v364 ^ v362) & (v363 ^ v362)) < 0);
                    int64_t v366 = *v7; // 0x40789f
                    int64_t v367 = v365 - v366; // 0x40789f
                    *v348 = v367;
                    char v368 = *(char *)v25; // 0x4078b5
                    char v369 = *v31; // 0x4078b9
                    v352 = v368 | (char)(((v355 ^ v343) & (v347 ^ v343)) < 0 | ((v353 ^ v350) & (v350 ^ v340)) < 0 | ((v354 ^ v351) & (v351 ^ v345)) < 0 | ((v358 ^ v356) & (v357 ^ v356)) < 0) | v369 | (char)(((v367 ^ v365) & (v366 ^ v365)) < 0);
                } else {
                    int32_t v370 = v350 + v340; // 0x40711e
                    *v349 = v370;
                    int64_t v371 = v351 + v345; // 0x40712e
                    int64_t v372 = v347 + v343; // 0x40713a
                    *v339 = v371;
                    *v342 = v372;
                    int64_t v373 = *v34; // 0x407151
                    int64_t v374 = *v37; // 0x407156
                    int64_t v375 = v374 + v373; // 0x407156
                    *v33 = (int64_t)(((v372 ^ v343) & (v372 ^ v347)) < 0);
                    *v341 = v375;
                    int64_t v376 = *v36; // 0x40716d
                    int64_t v377 = *v26; // 0x407172
                    int64_t v378 = v377 + v376; // 0x407172
                    *v344 = v378;
                    int64_t v379 = *v38; // 0x407181
                    int64_t v380 = *v10; // 0x407186
                    int64_t v381 = v380 + v379; // 0x407186
                    *v346 = v381;
                    int64_t v382 = *v39; // 0x407192
                    *v10 = (int64_t)(((v381 ^ v379) & (v381 ^ v380)) < 0);
                    int64_t v383 = *v7; // 0x40719e
                    int64_t v384 = v383 + v382; // 0x40719e
                    *v348 = v384;
                    char v385 = *(char *)v32; // 0x4071af
                    char v386 = *v31; // 0x4071b7
                    v352 = v385 | (char)(((v370 ^ v350) & (v370 ^ v340)) < 0 | ((v371 ^ v351) & (v371 ^ v345)) < 0 | ((v375 ^ v373) & (v375 ^ v374)) < 0 | ((v378 ^ v376) & (v378 ^ v377)) < 0) | v386 | (char)(((v384 ^ v382) & (v384 ^ v383)) < 0);
                }
                // 0x4071bd
                if (v352 != 0) {
                    // break -> 0x405abd
                    break;
                }
                // 0x4071c5
                *(char *)(v226 + 161) = 1;
                v147 = v271;
                v139 = 16;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 52: {
                goto lab_0x406188;
            }
            case 53: {
                goto lab_0x406188;
            }
            case 54: {
                // 0x4069bc
                *v30 = 0;
                v254 = v229 - 56;
                goto lab_0x4069cb;
            }
            case 55: {
                // 0x407055
                *v30 = 0;
                v254 = v229 - 48;
                goto lab_0x4069cb;
            }
            case 56: {
                // 0x4069e3
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 0;
                v133 = 0;
                v134 = 1;
                goto lab_0x4060d0;
            }
            case 57: {
                // 0x40674e
                *v30 = 0;
                v245 = 17;
                v241 = 0xffffffa3;
                v231 = *(int64_t *)(v229 - 56);
                goto lab_0x406726;
            }
            case 58: {
                // 0x406704
                *v30 = 0;
                v245 = 17;
                v241 = 0xffffffa3;
                v231 = *(int64_t *)(v229 - 48);
                goto lab_0x406726;
            }
            case 59: {
                // 0x4066b8
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 1;
                v132 = 0;
                v133 = 0;
                v134 = 0;
                goto lab_0x4060d0;
            }
            case 60: {
                int64_t v387 = *(int64_t *)v229; // 0x40667f
                int128_t v388 = (int128_t)v387 * (int128_t)*(int64_t *)(v229 - 56); // 0x40667f
                int128_t v389 = __asm_pxor(v271, v271); // 0x406683
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v389);
                *v21 = (int128_t)__asm_movaps(v389);
                *v23 = (int128_t)__asm_movaps(v389);
                v273 = v389;
                v234 = v388;
                if (v388 > 0x7fffffffffffffff) {
                    // break -> 0x405abd
                    break;
                }
                goto lab_0x406666;
            }
            case 61: {
                int64_t v390 = *(int64_t *)v229; // 0x406631
                int128_t v391 = (int128_t)v390 * (int128_t)*(int64_t *)(v229 - 48); // 0x406631
                int128_t v392 = __asm_pxor(v271, v271); // 0x406635
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v392);
                *v21 = (int128_t)__asm_movaps(v392);
                *v23 = (int128_t)__asm_movaps(v392);
                v273 = v392;
                v234 = v391;
                if (v391 > 0x7fffffffffffffff) {
                    // break -> 0x405abd
                    break;
                }
                goto lab_0x406666;
            }
            case 62: {
                // 0x4065e4
                *v30 = 0;
                v272 = v271;
                v244 = 17;
                v246 = v225 - 2;
                v250 = v229 - 56;
                v240 = 0xffffffa3;
                v233 = *(int64_t *)v229;
                goto lab_0x406605;
            }
            case 63: {
                // 0x4065c0
                *v30 = 0;
                v243 = 17;
                v239 = 0xffffffa3;
                v232 = *(int64_t *)(v229 - 56);
                goto lab_0x406598;
            }
            case 64: {
                // 0x406576
                *v30 = 0;
                v243 = 17;
                v239 = 0xffffffa3;
                v232 = *(int64_t *)(v229 - 48);
                goto lab_0x406598;
            }
            case 65: {
                // 0x40652a
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 1;
                v133 = 0;
                v134 = 0;
                goto lab_0x4060d0;
            }
            case 66: {
                // 0x406519
                *v30 = 0;
                v264 = v229 - 56;
                goto lab_0x4064df;
            }
            case 67: {
                // 0x4064d0
                *v30 = 0;
                v264 = v229 - 48;
                goto lab_0x4064df;
            }
            case 68: {
                // 0x406487
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 1;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 0;
                v133 = 0;
                v134 = 0;
                goto lab_0x4060d0;
            }
            case 69: {
                // 0x406a2f
                *v30 = 0;
                v262 = v229 - 56;
                goto lab_0x406316;
            }
            case 70: {
                // 0x406307
                *v30 = 0;
                v262 = v229 - 48;
                goto lab_0x406316;
            }
            case 71: {
                goto lab_0x406269;
            }
            case 72: {
                goto lab_0x406269;
            }
            case 73: {
                // 0x40696c
                *v30 = 0;
                *v24 = 0;
                *v9 = 1;
                v242 = 17;
                v248 = v225 - 2;
                v249 = v229 - 56;
                v236 = 0xffffffa3;
                goto lab_0x406297;
            }
            case 75: {
                // 0x406922
                *v30 = 0;
                v235 = *(int64_t *)(v229 - 48);
                v258 = 60;
                v265 = 18;
                goto lab_0x406944;
            }
            case 76: {
                // 0x4068fb
                *v30 = 0;
                v245 = 18;
                v241 = 60;
                v231 = *(int64_t *)(v229 - 48);
                goto lab_0x406726;
            }
            case 77: {
                int64_t v393 = *(int64_t *)v229; // 0x4068ae
                int128_t v394 = (int128_t)v393 * (int128_t)*(int64_t *)(v229 - 48); // 0x4068ae
                int128_t v395 = __asm_pxor(v271, v271); // 0x4068b2
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v395);
                *v21 = (int128_t)__asm_movaps(v395);
                *v23 = (int128_t)__asm_movaps(v395);
                if (v394 > 0x7fffffffffffffff) {
                    // break -> 0x405abd
                    break;
                }
                // 0x4068e3
                v272 = v395;
                v244 = 18;
                v246 = v225 - 4;
                v250 = v229 - 112;
                v240 = 60;
                v233 = v394;
                goto lab_0x406605;
            }
            case 78: {
                // 0x406883
                *v30 = 0;
                v243 = 18;
                v239 = 60;
                v232 = *(int64_t *)(v229 - 48);
                goto lab_0x406598;
            }
            case 79: {
                // 0x406a95
                *v30 = 0;
                v261 = *(int64_t *)(v229 - 48);
                v238 = 60;
                v263 = 18;
                goto lab_0x4064f7;
            }
            case 80: {
                // 0x406a69
                *v30 = 0;
                v260 = *(int64_t *)(v229 - 48);
                v237 = 60;
                v266 = 18;
                goto lab_0x40632e;
            }
            case 81: {
                // 0x406a43
                *v30 = 0;
                v272 = v271;
                v244 = 19;
                v246 = v225 - 2;
                v250 = v229 - 56;
                v240 = 0xffffffa3;
                v233 = *(int64_t *)v229;
                goto lab_0x406605;
            }
            case 85: {
                // 0x406468
                v147 = v271;
                v139 = 21;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x4060d0;
            }
            case 87: {
                // 0x407595
                v147 = v271;
                v139 = 22;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa4;
                v138 = v226;
                v131 = 0;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x4060d0;
            }
            case 88: {
                // 0x407547
                *v26 = v268;
                *v10 = v270;
                *v27 = *(int64_t *)(v229 + 16);
                *v28 = *(int64_t *)(v229 + 8);
                *v29 = *(int64_t *)v229;
                *v7 = v226;
                function_404ca0(v226, (int64_t)&g73, (int64_t)&g73, (int64_t)&g73);
                v147 = v271;
                v139 = 23;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = *v7;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 89: {
                // 0x407438
                *v26 = v268;
                *v10 = v270;
                *v27 = *(int64_t *)(v229 - 40);
                *v28 = *(int64_t *)(v229 - 48);
                *v29 = *(int64_t *)(v229 - 56);
                *v7 = v226;
                function_404ca0(v226, (int64_t)&g73, (int64_t)&g73, (int64_t)&g73);
                int32_t v396 = *(int32_t *)(v229 + 48); // 0x407460
                int64_t v397 = *v7; // 0x407466
                int32_t * v398 = (int32_t *)(v397 + 152); // 0x40746b
                int32_t v399 = *v398; // 0x40746b
                int32_t v400 = v399 + v396; // 0x40746b
                *v398 = v400;
                int64_t * v401 = (int64_t *)(v397 + 144); // 0x40747d
                int64_t v402 = *v401; // 0x40747d
                int64_t v403 = *(int64_t *)(v229 + 40); // 0x407484
                int64_t v404 = v403 + v402; // 0x407484
                *v401 = v404;
                int64_t * v405 = (int64_t *)(v397 + 136); // 0x407497
                int64_t v406 = *v405; // 0x407497
                int64_t v407 = *(int64_t *)(v229 + 32); // 0x4074a1
                int64_t v408 = v407 + v406; // 0x4074a1
                *v405 = v408;
                int64_t * v409 = (int64_t *)(v397 + 128); // 0x4074b2
                int64_t v410 = *v409; // 0x4074b2
                int64_t v411 = *(int64_t *)(v229 + 24); // 0x4074b9
                int64_t v412 = v411 + v410; // 0x4074b9
                *v409 = v412;
                int64_t * v413 = (int64_t *)(v397 + 120); // 0x4074cb
                int64_t v414 = *v413; // 0x4074cb
                int64_t v415 = *(int64_t *)(v229 + 16); // 0x4074cf
                int64_t v416 = v415 + v414; // 0x4074cf
                *v413 = v416;
                int64_t * v417 = (int64_t *)(v397 + 112); // 0x4074de
                int64_t v418 = *v417; // 0x4074de
                int64_t v419 = *(int64_t *)(v229 + 8); // 0x4074e2
                int64_t v420 = v419 + v418; // 0x4074e2
                *v417 = v420;
                int64_t * v421 = (int64_t *)(v397 + 104); // 0x4074f0
                int64_t v422 = *v421; // 0x4074f0
                int64_t v423 = *(int64_t *)v229; // 0x4074f4
                int64_t v424 = v423 + v422; // 0x4074f4
                *v421 = v424;
                if (((v400 ^ v396) & (v400 ^ v399)) < 0 | ((v404 ^ v402) & (v404 ^ v403)) < 0 | ((v408 ^ v406) & (v408 ^ v407)) < 0 | ((v412 ^ v410) & (v412 ^ v411)) < 0 || ((v416 ^ v414) & (v416 ^ v415)) < 0 || ((v420 ^ v418) & (v420 ^ v419)) < 0) {
                    // break -> 0x405abd
                    break;
                }
                // 0x407514
                if (((v424 ^ v422) & (v424 ^ v423)) < 0) {
                    // break -> 0x405abd
                    break;
                }
                // 0x40751d
                *(char *)(v397 + 161) = 1;
                v147 = v271;
                v139 = 24;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v397;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
            case 90: {
                // 0x407069
                v147 = v271;
                v139 = 25;
                v144 = v225 - 2 * v277;
                v145 = -56 * v277 + v229;
                v140 = v228;
                v135 = 43;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = -1;
                goto lab_0x4060d0;
            }
            case 91: {
                // 0x4069a0
                v147 = v271;
                v139 = 25;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 43;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x4060d0;
            }
            default: {
                unsigned char v425 = *(char *)(v276 + (int64_t)&g12); // 0x407b27
                int64_t v426 = (int64_t)v425 + 0xffffffe4; // 0x407b31
                char v427 = *(char *)((0x100000000 * v426 >> 32) + (int64_t)&g16); // 0x407b37
                v147 = v271;
                v139 = v426 & 0xffffffff;
                v144 = v225 - 2 * v277;
                v145 = -56 * v277 + v229;
                v140 = v228;
                v135 = v427;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x4060d0;
            }
        }
    } else {
        // 0x405aa2
        if (*v14 == 3) {
            int32_t v428 = v228; // 0x405aa9
            result = 1;
            if (v428 == 0 && v428 >= 0 != v428 != 0) {
                // break -> 0x405abd
                goto lab_0x405abd_8;
            }
        }
        int64_t v429 = v229; // 0x405940
        int64_t v430 = v227; // 0x405940
        int64_t v431 = v225; // 0x405aed
        unsigned char v432; // 0x405ad0
        while (true) {
            char v433 = *(char *)(v430 + (int64_t)&g18); // 0x405af9
            if (v433 != -93) {
                if ((int32_t)v433 < 112) {
                    int64_t v434 = v433; // 0x405af9
                    char v435 = *(char *)(v434 + 0x416401); // 0x405b10
                    if (v435 == 1) {
                        // 0x405b19
                        v432 = *(char *)(v434 + 0x416481);
                        if (v432 != 0) {
                            // break -> 0x405fb0
                            break;
                        }
                    }
                }
            }
            // 0x405ae8
            result = 1;
            if (v431 == v4) {
                // break (via goto) -> 0x405abd
                goto lab_0x405abd_8;
            }
            // 0x405aed
            v431 -= 2;
            v429 -= 56;
            v430 = (int64_t)*(int16_t *)v431;
        }
        int64_t v436 = *v12; // 0x405fb0
        int64_t v437; // 0x405940
        int64_t v438 = v437 + 56; // 0x405fb5
        *v14 = 3;
        int64_t * v439; // 0x405940
        *v439 = v436;
        int64_t v440 = *v13; // 0x405fcc
        int128_t * v441; // 0x405940
        int128_t v442 = *v441; // 0x405fd1
        int128_t v443 = __asm_movdqa(v442); // 0x405fd1
        int64_t * v444; // 0x405940
        *v444 = v440;
        int64_t * v445; // 0x405940
        int64_t v446 = *v445; // 0x405fe2
        int128_t v447 = *(int128_t *)v438; // 0x405fea
        __asm_movups(v447, v443);
        int128_t * v448; // 0x405940
        int128_t v449 = *v448; // 0x405fed
        int128_t v450 = __asm_movdqa(v449); // 0x405fed
        *(int64_t *)(v437 + 104) = v446;
        int128_t v451 = *(int128_t *)(v437 + 72); // 0x405ffa
        __asm_movups(v451, v450);
        int128_t * v452; // 0x405940
        int128_t v453 = *v452; // 0x405ffe
        int128_t v454 = __asm_movdqa(v453); // 0x405ffe
        int128_t v455 = *(int128_t *)(v437 + 88); // 0x406007
        __asm_movups(v455, v454);
        v146 = v454;
        int64_t v456; // 0x405940
        v143 = v456;
        v142 = v438;
        int64_t v457; // 0x405940
        v141 = v457;
        v136 = v432;
        v137 = v226;
        goto lab_0x405a56;
    }
  lab_0x405e58:;
    unsigned char v458 = *(char *)((0x100000000 * v63 >> 32) + (int64_t)&g19); // 0x405e5b
    v163 = v458;
    v164 = v67;
    v165 = v63;
    v166 = v58;
    v167 = v61;
    v168 = v55;
    goto lab_0x405e62_2;
  lab_0x406dd7:
    // 0x406dd7
    *v26 = v226;
    *v10 = v268;
    *v7 = v270;
    char * v459 = dcgettext(NULL, (char *)v252, 5); // 0x406dd9
    int64_t v460 = *v26; // 0x406dde
    int64_t v461 = v229 - 56; // 0x406de3
    int64_t v462 = v225 - 2; // 0x406de7
    int64_t v463 = *v7; // 0x406df9
    int64_t v464 = *v10; // 0x406e06
    v147 = v271;
    v139 = 4;
    v144 = v462;
    v145 = v461;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v460;
    v131 = v464;
    v132 = v463;
    v133 = v269;
    v134 = v267;
    char * v465; // 0x405940
    int64_t v466; // 0x405940
    if (*(char *)(v460 + 217) == 0) {
        goto lab_0x4060d0;
    } else {
        // 0x406e11
        *v40 = -93;
        *v34 = v461;
        *v41 = 4;
        *v37 = v464;
        *v26 = v462;
        *v10 = v463;
        *v7 = v460;
        v466 = v460;
        v465 = v459;
        goto lab_0x406c7d;
    }
  lab_0x406188:;
    int32_t v467 = *(int32_t *)(v229 + 48); // 0x406188
    int32_t * v468 = (int32_t *)(v226 + 152); // 0x40618e
    int32_t v469 = *v468; // 0x40618e
    int32_t v470 = v469 + v467; // 0x40618e
    *v468 = v470;
    int64_t * v471 = (int64_t *)(v226 + 144); // 0x4061a0
    int64_t v472 = *v471; // 0x4061a0
    int64_t v473 = *(int64_t *)(v229 + 40); // 0x4061a7
    int64_t v474 = v473 + v472; // 0x4061a7
    *v471 = v474;
    int64_t * v475 = (int64_t *)(v226 + 136); // 0x4061ba
    int64_t v476 = *v475; // 0x4061ba
    int64_t v477 = *(int64_t *)(v229 + 32); // 0x4061c4
    int64_t v478 = v477 + v476; // 0x4061c4
    *v475 = v478;
    int64_t * v479 = (int64_t *)(v226 + 128); // 0x4061d5
    int64_t v480 = *v479; // 0x4061d5
    int64_t v481 = *(int64_t *)(v229 + 24); // 0x4061dc
    int64_t v482 = v481 + v480; // 0x4061dc
    *v479 = v482;
    int64_t * v483 = (int64_t *)(v226 + 120); // 0x4061ed
    int64_t v484 = *v483; // 0x4061ed
    int64_t v485 = *(int64_t *)(v229 + 16); // 0x4061f1
    int64_t v486 = v485 + v484; // 0x4061f1
    *v483 = v486;
    int64_t * v487 = (int64_t *)(v226 + 112); // 0x4061fc
    int64_t v488 = *v487; // 0x4061fc
    *v7 = (int64_t)(((v486 ^ v484) & (v486 ^ v485)) < 0);
    int64_t v489 = *(int64_t *)(v229 + 8); // 0x406207
    int64_t v490 = v489 + v488; // 0x406207
    *v487 = v490;
    *v10 = (int64_t)(((v490 ^ v488) & (v490 ^ v489)) < 0);
    int64_t * v491 = (int64_t *)(v226 + 104); // 0x406217
    int64_t v492 = *v491; // 0x406217
    int64_t v493 = *(int64_t *)v229; // 0x40621d
    int64_t v494 = v493 + v492; // 0x40621d
    *v491 = v494;
    char v495 = *v31; // 0x40622c
    char v496 = *(char *)v6; // 0x406233
    result = 1;
    if ((v495 || (char)(((v470 ^ v467) & (v470 ^ v469)) < 0 | ((v474 ^ v472) & (v474 ^ v473)) < 0 | ((v478 ^ v476) & (v478 ^ v477)) < 0 || ((v482 ^ v480) & (v482 ^ v481)) < 0) || v496) != 0) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    // 0x406240
    result = 1;
    if (((v494 ^ v492) & (v494 ^ v493)) < 0) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    // 0x406249
    *(char *)(v226 + 161) = 1;
    v147 = v271;
    v139 = 16;
    v144 = v225 - 2;
    v145 = v229 - 56;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x4060d0;
  lab_0x406269:
    // 0x406269
    *v30 = 0;
    *v9 = *(int64_t *)(v229 - 56);
    *v24 = *(int32_t *)(v229 - 48);
    v242 = 17;
    v248 = v225 - 4;
    v249 = v229 - 112;
    v236 = 0xffffffa3;
    goto lab_0x406297;
  lab_0x405a56:;
    int64_t v551 = v143 + 2; // 0x405a56
    *(int16_t *)v551 = (int16_t)v136;
    result = 2;
    int64_t v552; // bp-1314, 0x405940
    if (v551 >= (int64_t)&v552) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    // 0x405a6d
    result = 0;
    if ((int32_t)v136 == 12) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    char v553 = *(char *)(v136 + (int64_t)&g18); // 0x405a7a
    v72 = v146;
    v43 = v142;
    v44 = v141;
    v45 = v136;
    v46 = v137;
    v47 = v551;
    v48 = v553;
    v125 = v146;
    v126 = v142;
    v127 = v141;
    v128 = v136;
    v129 = v137;
    v130 = v551;
    if (v553 != -93) {
        goto lab_0x40599c;
    } else {
        goto lab_0x405a90;
    }
  lab_0x4076d0:;
    int64_t v554 = v191;
    v193 = v195;
    v189 = v554;
    int64_t * v549; // 0x405940
    if (v195 != 0) {
        goto lab_0x405f47;
    } else {
        // 0x4076d8
        *v71 = v554;
        *v549 = v177;
        *v12 = 0;
        v163 = 21;
        v164 = v65;
        v165 = 276;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        goto lab_0x405e62_2;
    }
  lab_0x405f27:;
    int64_t v555 = v188 + 1; // 0x405f27
    char v556 = *(char *)v555; // 0x405f2b
    while (v556 == 57 || (int32_t)v556 < 57) {
        // 0x405f27
        v555++;
        v556 = *(char *)v555;
    }
    // 0x405f37
    v193 = v192;
    v189 = v555;
    v194 = v192;
    v190 = v555;
    if ((int32_t)v173 >= 0 || (int32_t)v192 == 0) {
        goto lab_0x4076a1;
    } else {
        goto lab_0x405f47;
    }
  lab_0x4076a1:;
    int64_t v557 = v190;
    int64_t v558 = 0x100000000 * v194 >> 32; // 0x4076a4
    *v71 = v557;
    *v12 = v558;
    *v549 = v177;
    v163 = v558 + (v173 == 0 ? 23 : 22) + (v558 ^ 0xffffffff) & 0xffffffff;
    v164 = v65;
    v165 = v557 + (v173 == 0 ? 278 : 277) + (v557 ^ 0xffffffff) & 0xffffffff;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    goto lab_0x405e62_2;
  lab_0x4060d0:;
    int64_t v497 = v138;
    int64_t v498 = v140;
    int64_t v499 = v144;
    int64_t v500 = v139;
    int128_t v501 = v147;
    *(int64_t *)v16 = v134;
    int64_t v502 = v145 + 56; // 0x4060e1
    *(int64_t *)(v2 + 280) = v131;
    int128_t v503 = __asm_movdqa(*v17); // 0x4060ed
    *(int64_t *)v22 = *v5;
    *(int64_t *)v20 = v133;
    *(int64_t *)(v2 + 296) = v132;
    int128_t v504 = __asm_movdqa(*v21); // 0x406113
    *(int64_t *)(v2 + 312) = *v9;
    int128_t v505 = __asm_movdqa(*v23); // 0x406124
    *(int32_t *)v18 = *v24;
    __asm_movups(*(int128_t *)v502, v503);
    *(int64_t *)(v145 + 104) = *v19;
    __asm_movups(*(int128_t *)(v145 + 72), v504);
    __asm_movups(*(int128_t *)(v145 + 88), v505);
    int16_t v506 = *(int16_t *)v499; // 0x40614c
    int64_t v507 = v135 + (int64_t)v506; // 0x40614f
    if ((int32_t)v507 < 113) {
        int64_t v508 = 0x100000000 * v507 >> 32; // 0x40615a
        char v509 = *(char *)(v508 + (int64_t)&g13); // 0x40615d
        if (v506 == (int16_t)v509) {
            // 0x4075b8
            v146 = v501;
            v143 = v499;
            v142 = v502;
            v141 = v498;
            v136 = (int64_t)*(char *)(v508 + (int64_t)&g14);
            v137 = v497;
            goto lab_0x405a56;
        } else {
            goto lab_0x40616f;
        }
    } else {
        goto lab_0x40616f;
    }
  lab_0x4067b9:;
    int64_t v510 = v257;
    int64_t v511 = v251;
    int64_t v512 = v247;
    int128_t v513 = v274;
    int64_t v514 = *v7; // 0x4067b9
    int64_t v515 = *v26; // 0x4067c3
    v147 = v513;
    v139 = v510;
    v144 = v512;
    v145 = v511;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v514;
    v131 = v515;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    if (*(char *)(v514 + 217) == 0) {
        goto lab_0x4060d0;
    } else {
        // 0x4067d6
        *v40 = -93;
        *v34 = v511;
        *v41 = (int32_t)v510;
        *v37 = v515;
        *v26 = v512;
        function_4055a0((int64_t)v259, v514);
        v275 = v513;
        goto lab_0x4067f6;
    }
  lab_0x40683e:
    // 0x40683e
    v274 = v271;
    v247 = v225 - 2;
    v251 = v229 - 56;
    v259 = dcgettext(NULL, (char *)v253, 5);
    v257 = 4;
    goto lab_0x4067b9;
  lab_0x40635e:
    // 0x40635e
    *(int32_t *)(v226 + 24) = (int32_t)v256;
    v147 = v271;
    v139 = 12;
    v144 = v225 - 2;
    v145 = v229 - 56;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x4060d0;
  lab_0x406b59:;
    int32_t v516 = *(int32_t *)(v229 + 48); // 0x406b59
    int32_t * v517 = (int32_t *)(v226 + 152); // 0x406b5f
    int32_t v518 = *v517; // 0x406b5f
    int32_t v519 = v518 + v516; // 0x406b5f
    *v517 = v519;
    int64_t * v520 = (int64_t *)(v226 + 144); // 0x406b71
    int64_t v521 = *v520; // 0x406b71
    int64_t v522 = *(int64_t *)(v229 + 40); // 0x406b78
    int64_t v523 = v522 + v521; // 0x406b78
    *v520 = v523;
    int64_t * v524 = (int64_t *)(v226 + 136); // 0x406b8b
    int64_t v525 = *v524; // 0x406b8b
    int64_t v526 = *(int64_t *)(v229 + 32); // 0x406b95
    int64_t v527 = v526 + v525; // 0x406b95
    *v524 = v527;
    int64_t * v528 = (int64_t *)(v226 + 128); // 0x406ba6
    int64_t v529 = *v528; // 0x406ba6
    int64_t v530 = *(int64_t *)(v229 + 24); // 0x406bad
    int64_t v531 = v530 + v529; // 0x406bad
    *v528 = v531;
    int64_t * v532 = (int64_t *)(v226 + 120); // 0x406bbf
    int64_t v533 = *v532; // 0x406bbf
    int64_t v534 = *(int64_t *)(v229 + 16); // 0x406bc3
    int64_t v535 = v534 + v533; // 0x406bc3
    *v532 = v535;
    int64_t * v536 = (int64_t *)(v226 + 112); // 0x406bd2
    int64_t v537 = *v536; // 0x406bd2
    int64_t v538 = *(int64_t *)(v229 + 8); // 0x406bd6
    int64_t v539 = v538 + v537; // 0x406bd6
    *v536 = v539;
    int64_t * v540 = (int64_t *)(v226 + 104); // 0x406be4
    int64_t v541 = *v540; // 0x406be4
    int64_t v542 = *(int64_t *)v229; // 0x406be8
    int64_t v543 = v542 + v541; // 0x406be8
    *v540 = v543;
    result = 1;
    if (((v519 ^ v516) & (v519 ^ v518)) < 0 | ((v523 ^ v521) & (v523 ^ v522)) < 0 | ((v527 ^ v525) & (v527 ^ v526)) < 0 | ((v531 ^ v529) & (v531 ^ v530)) < 0 || ((v535 ^ v533) & (v535 ^ v534)) < 0 || ((v539 ^ v537) & (v539 ^ v538)) < 0) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    // 0x406c08
    result = 1;
    if (((v543 ^ v541) & (v543 ^ v542)) < 0) {
        // break -> 0x405abd
        goto lab_0x405abd_8;
    }
    // 0x406c11
    *(char *)(v226 + 161) = 1;
    *v7 = v226;
    char * v544 = dcgettext(NULL, "relative", 5); // 0x406c2a
    int64_t v545 = *v7; // 0x406c2f
    int64_t v546 = v225 - 4; // 0x406c34
    int64_t v547 = v229 - 112; // 0x406c38
    int64_t v548 = *v26; // 0x406c57
    v147 = v271;
    v139 = 12;
    v144 = v546;
    v145 = v547;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v545;
    v131 = v548;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    if (*(char *)(v545 + 217) == 0) {
        goto lab_0x4060d0;
    } else {
        // 0x406c62
        *v40 = -93;
        *v34 = v547;
        *v41 = 12;
        *v37 = v548;
        *v26 = v546;
        v466 = v545;
        v465 = v544;
        goto lab_0x406c7d;
    }
  lab_0x406f2b:
    // 0x406f2b
    *(int64_t *)(v226 + 8) = *(int64_t *)v255;
    *(char *)(v226 + 224) = 1;
    *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)v229;
    v147 = v271;
    v139 = 13;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x4060d0;
  lab_0x407263:
    // 0x407263
    *(int64_t *)(v226 + 48) = *(int64_t *)(v229 + 16);
    v147 = v271;
    v139 = 14;
    v144 = v225 - 6;
    v145 = v229 - 168;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x4060d0;
  lab_0x4069cb:
    // 0x4069cb
    v235 = *(int64_t *)v254;
    v258 = 0xffffffa3;
    v265 = 17;
    goto lab_0x406944;
  lab_0x406726:
    // 0x406726
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v245;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v241;
    v138 = v226;
    v131 = v231;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x4060d0;
  lab_0x406666:
    // 0x406666
    v272 = v273;
    v244 = 17;
    v246 = v225 - 4;
    v250 = v229 - 112;
    v240 = 0xffffffa3;
    v233 = v234;
    goto lab_0x406605;
  lab_0x406605:
    // 0x406605
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v272;
    v139 = v244;
    v144 = v246;
    v145 = v250;
    v140 = v228;
    v135 = v240;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = v233;
    v134 = 0;
    goto lab_0x4060d0;
  lab_0x406598:
    // 0x406598
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v243;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v239;
    v138 = v226;
    v131 = 0;
    v132 = v232;
    v133 = 0;
    v134 = 0;
    goto lab_0x4060d0;
  lab_0x4064df:
    // 0x4064df
    v261 = *(int64_t *)v264;
    v238 = 0xffffffa3;
    v263 = 17;
    goto lab_0x4064f7;
  lab_0x406316:
    // 0x406316
    v260 = *(int64_t *)v262;
    v237 = 0xffffffa3;
    v266 = 17;
    goto lab_0x40632e;
  lab_0x406297:
    // 0x406297
    *v5 = 0;
    v147 = v271;
    v139 = v242;
    v144 = v248;
    v145 = v249;
    v140 = v228;
    v135 = v236;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x4060d0;
  lab_0x406944:
    // 0x406944
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v265;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v258;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = v235;
    goto lab_0x4060d0;
  lab_0x4064f7:
    // 0x4064f7
    *v5 = v261;
    *v24 = 0;
    *v9 = 0;
    v147 = v271;
    v139 = v263;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v238;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x4060d0;
  lab_0x40632e:
    // 0x40632e
    *v9 = v260;
    *v24 = 0;
    v242 = v266;
    v248 = v225 - 4;
    v249 = v229 - 112;
    v236 = v237;
    goto lab_0x406297;
  lab_0x405f47:
    // 0x405f47
    v163 = 2;
    v164 = v65;
    v165 = 63;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    if (v177 != -0x8000000000000000) {
        // 0x405f5a
        *v71 = v189;
        *v549 = v177 - 1;
        *v12 = 0x3b9aca0000000000 - 0x100000000 * v193 >> 32;
        v163 = 21;
        v164 = v65;
        v165 = 276;
        v166 = v56;
        v167 = v59;
        v168 = v53;
    }
    goto lab_0x405e62_2;
  lab_0x40616f:;
    char v550 = *(char *)((0x100000000 * v500 >> 32) + (int64_t)&g15); // 0x406171
    v146 = v501;
    v143 = v499;
    v142 = v502;
    v141 = v498;
    v136 = v550;
    v137 = v497;
    goto lab_0x405a56;
  lab_0x4067f6:
    // 0x4067f6
    v147 = v275;
    v139 = (int64_t)*v41;
    v144 = *v26;
    v145 = *v34;
    v140 = v228;
    v135 = (int64_t)*v40;
    v138 = *v7;
    v131 = *v37;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    goto lab_0x4060d0;
  lab_0x406c7d:
    // 0x406c7d
    function_405280((int64_t)v465, v466);
    v275 = v271;
    goto lab_0x4067f6;
  lab_0x405cbf:;
    int64_t v559 = v116 + 1;
    int64_t v560 = v118;
    *v71 = v559;
    unsigned char v561 = *(char *)v559; // 0x405cc2
    if ((int32_t)v561 < 123) {
        unsigned char v562 = (v561 + 63) % 64;
        if (v561 == 46 || v562 != 0 != ((1 << (int64_t)v562) % 0x3ffffff04000000 == 0)) {
            goto lab_0x405cb0;
        } else {
            goto lab_0x405cdf;
        }
    } else {
        if (v561 == 46) {
            goto lab_0x405cb0;
        } else {
            goto lab_0x405cdf;
        }
    }
  lab_0x405cb0:
    // 0x405cb0
    v104 = v561;
    v105 = v560;
    v106 = v559;
    goto lab_0x405cb4;
  lab_0x405cdf:
    // 0x405cdf
    *(char *)v560 = 0;
}
// Address range: 0x407bc0 - 0x409b86
int64_t function_407bc0(int64_t * a1, int64_t str, int32_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    // 0x407bc0
    int128_t v1; // 0x407bc0
    int128_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x407beb
    int64_t v3 = a3; // 0x407bf8
    if (a3 == 0) {
        // 0x408660
        int64_t v4; // bp-984, 0x407bc0
        function_404bc0(&v4);
        v3 = &v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x407bfe
    int64_t * v6 = (int64_t *)v3; // 0x407c02
    int64_t v7 = *v6; // 0x407c02
    int64_t v8; // 0x407bc0
    unsigned char v9 = *(char *)&v8; // 0x407c0e
    int64_t v10 = str; // 0x407c14
    if (v9 < 33) {
        // 0x407c16
        v10 = str;
        if ((1 << (int64_t)(v9 % 64) & 0x100003e00) != 0) {
            int64_t v11 = str + 1; // 0x408405
            unsigned char v12 = *(char *)v11; // 0x408409
            v10 = v11;
            while (v12 < 33) {
                unsigned char v13 = v12 % 64;
                int64_t v14 = v13 == 0 ? 1 : 1 << (int64_t)v13;
                v8 = v14;
                v10 = v11;
                if ((v14 & 0x100003e00) == 0) {
                    // break -> 0x407c2a
                    break;
                }
                v11++;
                v12 = *(char *)v11;
                v10 = v11;
            }
        }
    }
    // 0x407c2a
    int64_t v15; // bp-1080, 0x407bc0
    int64_t v16 = &v15; // 0x407bd3
    v8 = v10;
    bool v17; // 0x407bc0
    int64_t v18 = v17 ? -1 : 1;
    int64_t v19 = (int64_t)"TZ=\""; // 0x407bc0
    int64_t v20 = v10; // 0x407c37
    int64_t v21 = 4; // 0x407c37
    unsigned char v22 = *(char *)v20; // 0x407c37
    char v23 = *(char *)v19; // 0x407c37
    v20 += v18;
    v8 = v20;
    v21--;
    char v24 = v23; // 0x407c37
    bool v25 = false; // 0x407c37
    while (v22 == v23) {
        v19 += v18;
        v24 = v22;
        v25 = true;
        if (v21 == 0) {
            // break -> 
            break;
        }
        v22 = *(char *)v20;
        v23 = *(char *)v19;
        v20 += v18;
        v8 = v20;
        v21--;
        v24 = v23;
        v25 = false;
    }
    unsigned char v26 = v24;
    int64_t v27; // 0x407bc0
    int64_t size; // 0x408480
    int64_t v28; // 0x407bc0
    int64_t v29; // 0x407bc0
    int64_t v30; // 0x407bc0
    int64_t v31; // 0x407bc0
    char v32; // 0x407bc0
    int64_t v33; // 0x407bc0
    int64_t v34; // 0x407bc0
    int64_t v35; // 0x407bc0
    int64_t v36; // 0x407bc0
    int32_t v37; // bp-808, 0x407bc0
    if ((v22 >= v26 && !v25) != v22 < v26) {
        goto lab_0x407c98;
    } else {
        int64_t v38 = v10 + 4; // 0x407c42
        char v39 = *(char *)v38; // 0x407c42
        v8 = v38;
        v27 = 1;
        v32 = v39;
        v35 = v38;
        if (v39 == 0) {
            goto lab_0x407c98;
        } else {
            while (true) {
              lab_0x407c7b:;
                int64_t v40 = v35;
                char v41 = v32;
                size = v27;
                if (v41 != 92) {
                    // 0x407c60
                    v31 = v40;
                    if (v41 == 34) {
                        // break -> 0x408480
                        break;
                    }
                    goto lab_0x407c6b;
                } else {
                    int64_t v42 = v40 + 1; // 0x407c7f
                    v31 = v42;
                    switch (*(char *)v42) {
                        case 92: {
                            goto lab_0x407c6b;
                        }
                        case 34: {
                            goto lab_0x407c6b;
                        }
                        default: {
                            goto lab_0x407c98;
                        }
                    }
                }
            }
            int64_t v43 = v38; // 0x408484
            int64_t v44; // bp-568, 0x407bc0
            int64_t * mem = &v44; // 0x408484
            if (size > 100) {
                // 0x40862b
                mem = malloc((int32_t)size);
                v43 = 0x100000000 * v38 >> 32;
                v8 = v43;
                if (mem == NULL) {
                    // 0x4083df
                    free((int64_t *)*(int64_t *)(v16 + 8));
                    return 0;
                }
            }
            int64_t v45 = (int64_t)mem;
            int64_t v46 = v21; // 0x4084a9
            int64_t v47 = v45; // 0x4084a9
            if (v39 != 34) {
                int64_t v48 = v45 + 1; // 0x4084b9
                int64_t v49 = v43 + (int64_t)(v39 == 92); // 0x4084bd
                char v50 = *(char *)v49; // 0x4084c0
                int64_t v51 = v49 + 1; // 0x4084c3
                char v52 = *(char *)v51; // 0x4084c3
                v8 = v51;
                *(char *)mem = v50;
                int64_t v53 = v48; // 0x4084d3
                char v54 = v50; // 0x4084d3
                if (v52 != 34) {
                    int64_t v55 = v48 + 1; // 0x4084b9
                    int64_t v56 = v8 + (int64_t)(v52 == 92); // 0x4084bd
                    char v57 = *(char *)v56; // 0x4084c0
                    int64_t v58 = v56 + 1; // 0x4084c3
                    char v59 = *(char *)v58; // 0x4084c3
                    v8 = v58;
                    *(char *)v48 = v57;
                    int64_t v60 = v55; // 0x4084d3
                    v53 = v55;
                    v54 = v57;
                    while (v59 != 34) {
                        // 0x4084b0
                        v55 = v60 + 1;
                        v56 = v8 + (int64_t)(v59 == 92);
                        v57 = *(char *)v56;
                        v58 = v56 + 1;
                        v59 = *(char *)v58;
                        v8 = v58;
                        *(char *)v60 = v57;
                        v60 = v55;
                        v53 = v55;
                        v54 = v57;
                    }
                }
                // 0x4084d5
                v46 = v54;
                v47 = v53;
            }
            // 0x4084d5
            *(char *)v47 = 0;
            int64_t v61 = function_40db40(v45, v8, v47); // 0x4084e2
            if (v61 == 0) {
                // 0x4083df
                free((int64_t *)*(int64_t *)(v16 + 8));
                return 0;
            }
            int64_t v62 = (0x100000000 * v8 >> 32) + 1; // 0x4084f8
            unsigned char v63 = *(char *)v62; // 0x4084f8
            int64_t v64 = v46; // 0x408502
            int64_t v65 = v62; // 0x408502
            if (v63 < 33) {
                // 0x408504
                v64 = v46;
                v65 = v62;
                if ((1 << (int64_t)(v63 % 64) & 0x100003e00) != 0) {
                    int64_t v66 = v62 + 1; // 0x408519
                    unsigned char v67 = *(char *)v66; // 0x40851d
                    int64_t v68 = v67; // 0x40851d
                    v64 = v68;
                    v65 = v66;
                    while (v67 < 33) {
                        int64_t v69 = 1 << v68 % 64;
                        v8 = v69;
                        v64 = v68;
                        v65 = v66;
                        if ((v69 & 0x100003e00) == 0) {
                            // break -> 0x408538
                            break;
                        }
                        v66++;
                        v67 = *(char *)v66;
                        v68 = v67;
                        v64 = v68;
                        v65 = v66;
                    }
                }
            }
            // 0x408538
            v8 = v3;
            int64_t v70 = function_40de20(v61, v6, (int64_t *)&v37); // 0x408546
            v36 = v45;
            v34 = v64;
            v28 = v65;
            v29 = v61;
            v33 = 0;
            v30 = v61;
            if (v70 != 0) {
                goto lab_0x407cc0;
            } else {
                goto lab_0x4083d2;
            }
        }
    }
  lab_0x407c98:
    // 0x407c98
    v8 = v3;
    int64_t v71 = function_40de20(a5, v6, (int64_t *)&v37); // 0x407ca6
    v36 = a6;
    v34 = v21;
    v28 = v10;
    v29 = a5;
    if (v71 == 0) {
        // 0x4083df
        free((int64_t *)*(int64_t *)(v16 + 8));
        return 0;
    }
    goto lab_0x407cc0;
  lab_0x407c6b:;
    int64_t v305 = v31 + 1; // 0x407c6b
    char v306 = *(char *)v305; // 0x407c6f
    v27 = size + 1;
    v32 = v306;
    v35 = v305;
    if (v306 == 0) {
        goto lab_0x407c98;
    }
    goto lab_0x407c7b;
  lab_0x407cc0:;
    char v72 = *(char *)v28; // 0x407cc0
    int128_t v73 = __asm_pxor(v2, v2); // 0x407cc5
    __asm_movups(v1, v73);
    int32_t v74 = v72 == 0 ? (int32_t)&g2 : (int32_t)v28; // 0x407d0b
    int32_t v75 = v74; // bp-344, 0x407d0b
    __asm_movups(v1, v73);
    __asm_movups(v1, v73);
    int64_t v76 = v7 + 0x76a700; // 0x407e60
    char * str3 = NULL; // 0x407e63
    int64_t v77; // 0x407bc0
    int64_t v78; // bp-456, 0x407bc0
    int64_t v79; // bp-680, 0x407bc0
    int32_t v80; // 0x407bc0
    if ((v76 & (v7 ^ -0x8000000000000000)) >= 0) {
        int64_t v81 = v80;
        int64_t v82 = &v78; // 0x407e65
        int64_t v83 = 0x76a700; // 0x407bc0
        v8 = &v79;
        v79 = v76;
        char * v84; // 0x407bc0
        bool v85 = v84 == NULL | function_40de20(v29, &v79, &v78) == 0;
        v77 = v81;
        while (true || v85) {
            int64_t v86 = v83 + 0x76a700; // 0x407eab
            if ((int32_t)v86 == 0x1da9c00) {
                // 0x407ebb
                str3 = NULL;
                v77 = v85 ? v82 : v81;
                goto lab_0x407ebb_3;
            }
            int64_t v87 = 0x100000000 * v86 >> 32; // 0x407e5d
            int64_t v88 = v87 + v7; // 0x407e60
            v83 = v86 & 0xffffffff;
            if (((v88 ^ v87) & (v88 ^ v7)) < 0) {
                // 0x407ebb
                str3 = NULL;
                v77 = v85 ? v82 : v81;
                goto lab_0x407ebb_3;
            }
            v8 = &v79;
            v79 = v88;
            v85 = v84 == NULL | function_40de20(v29, &v79, &v78) == 0;
            v77 = v81;
        }
    }
    goto lab_0x407ebb_3;
  lab_0x407ebb_3:;
    // 0x407ebb
    int64_t str2; // 0x407bc0
    if (str2 != 0) {
        // 0x407ec8
        v8 = (int64_t)str3;
        if (str3 != NULL) {
            // 0x407ed5
            strcmp((char *)str2, str3);
        }
    }
    uint32_t v89 = a4 % 2; // 0x407d1e
    int64_t v90 = function_405940((int64_t *)&v75, v8, v77, v34); // 0x407eea
    int64_t v91; // 0x407bc0
    char * v92; // 0x407bc0
    char v93; // 0x407bc0
    int64_t v94; // 0x407bc0
    if ((int32_t)v90 != 0) {
        // 0x408430
        v33 = 0;
        v30 = v29;
        if (v89 != 0) {
            uint64_t v95 = (int64_t)v75; // 0x40843c
            char * v96; // 0x407bc0
            if ((int64_t)len + str > v95) {
                // 0x408950
                v96 = dcgettext(NULL, "error: parsing failed, stopped at '%s'\n", 5);
            } else {
                // 0x408457
                v96 = dcgettext(NULL, "error: parsing failed\n", 5);
            }
            // 0x408463
            function_404f90((int64_t)v96, v95, 5, v34, a5, a6);
            v33 = 0;
            v30 = v29;
        }
        goto lab_0x4083d2;
    } else {
        // 0x407ef7
        v94 = v34;
        v93 = 0;
        if (v89 != 0) {
            // 0x4085a0
            function_404f90((int64_t)dcgettext(NULL, "input timezone: ", 5), (int64_t)"input timezone: ", 5, v34, a5, a6);
            v8 = (int64_t)"parsed date/time string";
            if (v36 == 0) {
                // 0x408674
                v8 = (int64_t)"system default";
                v91 = (int64_t)"system default";
                goto lab_0x408680;
            } else {
                if (v29 == a5) {
                    // 0x4089e0
                    v8 = v36;
                    int64_t v97 = (int64_t)"UTC0"; // 0x407bc0
                    int64_t v98 = v36; // 0x4089f4
                    int64_t v99 = 5; // 0x4089f4
                    unsigned char v100 = *(char *)v98; // 0x4089f4
                    char v101 = *(char *)v97; // 0x4089f4
                    v98 += v18;
                    v8 = v98;
                    char v102 = v101; // 0x4089f4
                    bool v103 = false; // 0x4089f4
                    while (v100 == v101) {
                        v99--;
                        v97 += v18;
                        v102 = v100;
                        v103 = true;
                        if (v99 == 0) {
                            // break -> 
                            break;
                        }
                        v100 = *(char *)v98;
                        v101 = *(char *)v97;
                        v98 += v18;
                        v8 = v98;
                        v102 = v101;
                        v103 = false;
                    }
                    unsigned char v104 = v102;
                    v8 = (int64_t)"TZ=\"UTC0\" environment value or -u";
                    v91 = (int64_t)"TZ=\"UTC0\" environment value or -u";
                    if ((v100 >= v104 && !v103) == v100 < v104) {
                        goto lab_0x408680;
                    } else {
                        // 0x408a08
                        v92 = dcgettext(NULL, "TZ=\"%s\" environment value", 5);
                        goto lab_0x408613;
                    }
                } else {
                    // 0x4085ff
                    v92 = dcgettext(NULL, "TZ=\"%s\" in date string", 5);
                    goto lab_0x408613;
                }
            }
        } else {
            goto lab_0x407f52;
        }
    }
  lab_0x4083d2:
    // 0x4083d2
    if (v30 != a5) {
        // 0x4083d7
        function_40de00(v30);
    }
    // 0x4083df
    free((int64_t *)*(int64_t *)(v16 + 8));
    return v33 & 0xffffffff;
  lab_0x407f52:;
    int64_t v105 = v80; // 0x407d03
    int64_t v106 = v105 + 1900; // 0x407d18
    int64_t v107; // 0x407bc0
    int32_t v108; // 0x407bc0
    int64_t v109; // 0x407bc0
    if (v106 < 0) {
        int64_t v110 = -3800 - v105; // 0x408a86
        v108 = v110;
        v109 = (v105 - 0x7ffffffffffff894 & 0x7ffffffffffff128 - v105) < 0 | v110 >= 0x80000000;
        goto lab_0x407faa;
    } else {
        if (v106 >= 1900) {
            // 0x4089ca
            v107 = 0;
            if (v80 >= 0) {
                goto lab_0x407f92;
            } else {
                // 0x4089d3
                v107 = 1;
                goto lab_0x407f92;
            }
        } else {
            // 0x407f89
            v107 = 0;
            if (v80 >= 0) {
                // 0x4089d3
                v107 = 1;
                goto lab_0x407f92;
            } else {
                goto lab_0x407f92;
            }
        }
    }
  lab_0x408680:
    // 0x408680
    __fprintf_chk(g47, 1, dcgettext(NULL, (char *)v91, 5));
    goto lab_0x4088a0;
  lab_0x407faa:;
    // 0x407faa
    int32_t v111; // 0x407bc0
    int32_t v112; // 0x407bc0
    int64_t v113; // 0x407bc0
    int64_t v114; // 0x407bc0
    int64_t v115; // 0x407bc0
    int32_t v116; // 0x407bc0
    int32_t v117; // 0x407bc0
    int32_t v118; // bp-936, 0x407bc0
    char v119; // 0x407bc0
    int64_t v120; // 0x408000
    int64_t v121; // 0x407fb3
    int64_t v122; // 0x407fbd
    int64_t v123; // 0x407fc7
    int64_t v124; // 0x407fdb
    if ((char)v109 != 0) {
        if (v93 != 0) {
            // 0x408eb1
            function_404f90((int64_t)dcgettext(NULL, "error: out-of-range year %ld\n", 5), v106, 5, v94, a5, a6);
        }
        // 0x408a4b
        v113 = v89;
        goto lab_0x408a53;
    } else {
        // 0x407fb3
        v121 = v80 + 1;
        v122 = v121 - 1;
        v123 = v122 & 0xffffffff;
        v8 = v123;
        v124 = v89;
        v113 = v124;
        if (v121 >= 0x80000001 || ((v122 ^ v121) & -v121) < 0) {
            goto lab_0x408a53;
        } else {
            // 0x407feb
            v120 = v80;
            if (v119 == 0) {
                // 0x408ed4
                v118 = 0;
                v111 = 0;
                v116 = 0;
                v114 = 0;
                v112 = 0;
                if (v89 != 0) {
                    // 0x409350
                    function_404f90((int64_t)"warning: using midnight as starting time: 00:00:00\n", v123, v120, v124, a5, a6);
                    v117 = 0;
                    v115 = 0;
                    goto lab_0x40935c;
                } else {
                    goto lab_0x408e80;
                }
            } else {
                int64_t v125 = v80; // 0x408e1a
                if (v80 < 24) {
                    // 0x408e3f
                    v118 = v37;
                    v111 = v37;
                    v114 = v5;
                    if (v89 != 0) {
                        int64_t v126 = v125 & 0xffffffff; // 0x408e3f
                        int64_t v127 = v37; // 0x408e52
                        __snprintf_chk((char *)&v79, 100, 1, 100, "%02d:%02d:%02d", v126, (int64_t)v80, v127);
                        char * v128 = dcgettext(NULL, "using current time as starting value: '%s'\n", 5); // 0x409569
                        function_404f90((int64_t)v128, (int64_t)&v79, 5, 100, v127, v126);
                        v115 = v5;
                        goto lab_0x40935c;
                    } else {
                        goto lab_0x408e80;
                    }
                } else {
                    // 0x409583
                    v33 = 0;
                    v30 = v29;
                    if (v89 != 0) {
                        char * v129 = dcgettext(NULL, "error: invalid hour %ld%s\n", 5); // 0x409597
                        function_404f90((int64_t)v129, v125, (int64_t)&g25, v124, a5, 2);
                        v33 = 0;
                        v30 = v29;
                    }
                    goto lab_0x4083d2;
                }
            }
        }
    }
  lab_0x4088a0:
    // 0x4088a0
    v8 = (int64_t)g47;
    fputc(10, g47);
    v8 = 0;
    v94 = 0;
    v93 = v89;
    goto lab_0x407f52;
  lab_0x408613:
    // 0x408613
    __fprintf_chk(g47, 1, v92);
    goto lab_0x4088a0;
  lab_0x407f92:
    // 0x407f92
    v109 = v105 >= 0x80000000 ? 1 : v107;
    goto lab_0x407faa;
  lab_0x408a53:
    // 0x408a53
    v8 = (int64_t)"error: year, month, or day overflow\n";
    int64_t v130 = (int64_t)"error: year, month, or day overflow\n"; // 0x408a5f
    int64_t v131 = v113; // 0x408a5f
    int64_t v132 = a5; // 0x408a5f
    int64_t v133 = a6; // 0x408a5f
    if ((char)v113 == 0) {
        goto lab_0x4083d2;
    } else {
        goto lab_0x408a65;
    }
  lab_0x408a65:
    // 0x408a65
    function_404f90((int64_t)dcgettext(NULL, (char *)v130, 5), v8, 5, v131, v132, v133);
    v33 = 0;
    v30 = v29;
    goto lab_0x4083d2;
  lab_0x408e80:;
    int64_t v134 = v112;
    int32_t v135 = v111; // bp-872, 0x4080b1
    int64_t v136 = function_40ded0(v29, (int64_t)&v118, (int64_t)v108, 0); // 0x4080e8
    v8 = &v135;
    int64_t v137 = function_405050(v29, &v135, (int64_t *)&v118, v136); // 0x408106
    int64_t v138; // 0x407bc0
    int64_t v139; // 0x407bc0
    int64_t v140; // 0x407bc0
    int64_t v141; // 0x407bc0
    int64_t v142; // 0x407bc0
    int64_t v143; // 0x407bc0
    int64_t v144; // 0x407bc0
    int64_t v145; // 0x407bc0
    int64_t v146; // 0x407bc0
    int64_t v147; // 0x407bc0
    int64_t v148; // 0x407bc0
    int64_t v149; // 0x407bc0
    int64_t v150; // 0x407bc0
    int32_t v151; // 0x407bc0
    int32_t v152; // 0x407bc0
    int64_t v153; // 0x407bc0
    int64_t v154; // bp-744, 0x407bc0
    int32_t v155; // 0x407bc0
    int64_t v156; // 0x409605
    int64_t * v157; // 0x408fd7
    int64_t * v158; // 0x408fdf
    if ((char)v137 != 0) {
        // 0x408b9b
        v153 = v114;
        if (v89 == 0) {
            int64_t v159 = v116;
            int64_t v160 = v80; // 0x408c86
            int64_t v161 = v1; // 0x408c8e
            v151 = 0;
            v143 = 0;
            v146 = v136;
            v145 = v136;
            v139 = v134;
            v141 = v159;
            v148 = v160;
            v152 = 0;
            v149 = v161;
            v138 = v134;
            v140 = v159;
            if (((int64_t)v1 || v160 || v161) != 0) {
                goto lab_0x409322;
            } else {
                goto lab_0x408cac;
            }
        } else {
            // 0x408f8d
            v156 = function_404f20(v108, &v154, v80, v136);
            __snprintf_chk((char *)&v79, 100, 1, 100, "(Y-M-D) %s-%02d-%02d", (char *)v156, v121 & 0xffffffff, v120);
            char * v162 = dcgettext(NULL, "using current date as starting value: '%s'\n", 5); // 0x40963f
            function_404f90((int64_t)v162, (int64_t)&v79, 5, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
            int64_t v163 = function_405410((int32_t *)(v16 + 144), (int64_t *)(v16 + 736), &v79, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156); // 0x408fb1
            function_404f90((int64_t)dcgettext(NULL, "starting date/time: '%s'\n", 5), v163, 5, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
            v157 = (int64_t *)(v16 + 840);
            int64_t v164 = *v157; // 0x408fd7
            v158 = (int64_t *)(v16 + 848);
            int64_t v165 = *v158; // 0x408fdf
            int64_t * v166 = (int64_t *)(v16 + 856); // 0x408fe7
            int64_t v167 = *v166; // 0x408fe7
            unsigned char v168 = *(char *)(v16 + 953); // 0x408fef
            int64_t v169 = v165 | v164; // 0x408ffa
            v8 = v169;
            v143 = v168;
            v146 = v167;
            v145 = v136;
            v139 = (int64_t)"(Y-M-D) %s-%02d-%02d";
            v141 = v156;
            if ((v167 || v169) == 0) {
                goto lab_0x408cac;
            } else {
                // 0x409009
                v148 = v165;
                v149 = v164;
                v138 = (int64_t)"(Y-M-D) %s-%02d-%02d";
                v140 = v156;
                if (v168 == 0) {
                    goto lab_0x409322;
                } else {
                    // 0x409011
                    v147 = v167;
                    if (v169 == 0) {
                        goto lab_0x409534;
                    } else {
                        int64_t v170 = v167; // 0x409022
                        if (*(int32_t *)(v16 + 156) != 15) {
                            // 0x409024
                            function_404f90((int64_t)dcgettext(NULL, "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n", 5), (int64_t)"warning: when adding relative months/years, it is recommended to specify the 15th of the months\n", 5, v167, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
                            v170 = *v166;
                        }
                        // 0x409047
                        v147 = v170;
                        if (v147 != 0) {
                            goto lab_0x409534;
                        } else {
                            goto lab_0x409050;
                        }
                    }
                }
            }
        }
    } else {
        int64_t v171 = v118; // 0x408138
        int64_t v172 = v155; // 0x408153
        if (v155 == v112 == v135 == v118) {
            // 0x409971
            v33 = 0;
            v30 = v29;
            if (v89 == 0) {
                goto lab_0x4083d2;
            } else {
                // 0x409979
                function_404f90((int64_t)dcgettext(NULL, "error: invalid date/time value:\n", 5), (int64_t)"error: invalid date/time value:\n", 5, v172, v134, v171);
                int64_t v173 = function_405410(&v135, (int64_t *)&v75, &v78, v172, v134, v171); // 0x4099af
                function_404f90((int64_t)dcgettext(NULL, "    user provided time: '%s'\n", 5), v173, 5, v172, v134, v171);
                int64_t v174 = function_405410(&v118, (int64_t *)&v75, &v78, v172, v134, v171); // 0x4099e8
                function_404f90((int64_t)dcgettext(NULL, "       normalized time: '%s'\n", 5), v174, 5, v172, v134, v171);
                v142 = (int64_t)&g25;
                v150 = (int64_t)&g25;
                v144 = &v78;
                goto lab_0x409795;
            }
        } else {
            // 0x4096b8
            v33 = 0;
            v30 = v29;
            if (v89 == 0) {
                goto lab_0x4083d2;
            } else {
                char * v175 = dcgettext(NULL, "error: invalid date/time value:\n", 5); // 0x4096df
                int64_t v176 = &v78; // 0x4096e4
                function_404f90((int64_t)v175, (int64_t)"error: invalid date/time value:\n", 5, v172, v134, v171);
                int64_t v177 = function_405410(&v135, (int64_t *)&v75, &v78, v172, v134, v171); // 0x409709
                function_404f90((int64_t)dcgettext(NULL, "    user provided time: '%s'\n", 5), v177, 5, v172, v134, v171);
                int64_t v178 = function_405410(&v118, (int64_t *)&v75, &v78, v172, v134, v171); // 0x409742
                function_404f90((int64_t)dcgettext(NULL, "       normalized time: '%s'\n", 5), v178, 5, v172, v134, v171);
                v142 = (int64_t)"--";
                v150 = (int64_t)&g25;
                v144 = v176;
                if (v135 != v118) {
                    int64_t v179 = v155 != v112 ? (int64_t)"--" : (int64_t)&g25; // 0x409791
                    v142 = v179;
                    v150 = (int64_t)"--";
                    v144 = v176;
                }
                goto lab_0x409795;
            }
        }
    }
  lab_0x40935c:
    // 0x40935c
    v8 = v123;
    v111 = v118;
    v116 = v117;
    int32_t v180; // 0x407bc0
    v155 = v180;
    v114 = v115;
    v112 = v180;
    goto lab_0x408e80;
  lab_0x409322:;
    int64_t v181 = (int64_t)*(int32_t *)(v16 + 164); // 0x409322
    int64_t v182 = v149 + v181; // 0x40932a
    int64_t v183 = 0x100000000 * v182 >> 32; // 0x409330
    v33 = 0;
    v30 = v29;
    int64_t v184; // 0x407bc0
    int64_t v185; // 0x407bc0
    int64_t v186; // 0x407bc0
    int64_t v187; // 0x407bc0
    int32_t v188; // 0x407bc0
    if (v182 != v183) {
        goto lab_0x4083d2;
    } else {
        // 0x40933f
        v33 = 0;
        v30 = v29;
        if (((v182 ^ v181) & (v182 ^ v149)) < 0) {
            goto lab_0x4083d2;
        } else {
            // 0x409347
            *(int32_t *)(v16 + 24) = (int32_t)v182;
            v184 = v148;
            v188 = v152;
            v187 = v183;
            v185 = v138;
            v186 = v140;
            goto lab_0x409085;
        }
    }
  lab_0x408cac:;
    int64_t v189 = v145;
    int32_t v190 = v151; // 0x408cb5
    int64_t v191 = v143; // 0x408cb5
    int64_t v192 = v146; // 0x408cb5
    int64_t v193 = v189; // 0x408cb5
    int64_t v194 = v139; // 0x408cb5
    int64_t v195 = v141; // 0x408cb5
    if (*(int64_t *)(v16 + 944) == 0) {
        goto lab_0x408ce1;
    } else {
        int64_t v196 = (int64_t)*(int32_t *)(v16 + 760); // 0x408cb7
        int64_t v197 = *(int64_t *)(v16 + 184); // 0x408cc4
        int64_t v198 = v196 - v197; // 0x408cc4
        int64_t v199 = v189 - v198; // 0x408ccf
        bool v200 = ((v198 ^ v196) & (v197 ^ v196)) < 0 | ((v199 ^ v189) & (v198 ^ v189)) < 0;
        int64_t v201 = v200; // 0x408cd8
        v190 = v151;
        v191 = v143;
        v192 = v201;
        v193 = v199;
        v194 = v139;
        v195 = v141;
        if (v200) {
            // 0x4095b3
            v33 = 0;
            v30 = v29;
            if ((char)v143 != 0) {
                // 0x4095bb
                function_404f90((int64_t)dcgettext(NULL, "error: timezone %d caused time_t overflow\n", 5), v196 & 0xffffffff, 5, v201, v139, v141);
                v33 = 0;
                v30 = v29;
            }
            goto lab_0x4083d2;
        } else {
            goto lab_0x408ce1;
        }
    }
  lab_0x408ce1:;
    // 0x408ce1
    int64_t v202; // 0x407bc0
    int64_t v203; // 0x407bc0
    int64_t v204; // 0x407bc0
    int64_t v205; // 0x407bc0
    int64_t v206; // 0x407bc0
    int64_t v207; // 0x407bc0
    int64_t v208; // 0x407bc0
    int64_t v209; // 0x407bc0
    int64_t v210; // 0x407bc0
    int64_t v211; // 0x407bc0
    int64_t v212; // 0x407bc0
    int64_t v213; // 0x407bc0
    int64_t v214; // 0x407bc0
    int32_t v215; // 0x407bc0
    int32_t v216; // 0x407bc0
    if ((char)v191 != 0) {
        int64_t v217 = function_405410(&v118, (int64_t *)&v75, &v79, v192, v194, v195); // 0x40943c
        function_404f90((int64_t)dcgettext(NULL, "'%s' = %ld epoch-seconds\n", 5), v217, v193, v192, v194, v195);
        v213 = v192;
        v209 = v124;
        v204 = v194;
        v207 = 0;
        // 0x40947f
        v8 = 0;
        int64_t v218 = (0x100000000 * v153 >> 32) + 0x3b9aca00 + -0x3b9aca00 * ((int64_t)(v153 < 0) % 2); // 0x4094d5
        v213 = v218;
        v209 = v124;
        v204 = 0;
        v207 = 0;
        int64_t v219 = v1; // 0x40951d
        int128_t v220 = v219; // 0x409525
        int128_t v221 = 60 * v220; // 0x409525
        v216 = v1;
        v212 = v218;
        v214 = v221;
        v211 = v193;
        v208 = v124;
        v205 = 0;
        v206 = 0;
        v203 = v219;
        v213 = v218;
        v209 = v124;
        v204 = 0;
        v207 = 0;
        if (v221 == 0x3c0000000000000000 * v220 >> 64) {
            goto lab_0x408dab;
        } else {
            goto lab_0x4093f6;
        }
    } else {
        // 0x408ce1
        v202 = v16 + 24;
        v215 = v190;
        v210 = v193;
        goto lab_0x408ce9;
    }
  lab_0x409795:
    // 0x409795
    __snprintf_chk((char *)v144, 100, 1, 100, "                                 %4s %2s %2s %2s %2s %2s", (char *)&g25, (char *)&g25, (char *)&g25, (char *)&g25, (char *)v142, (char *)v150);
    int64_t v222 = 52; // 0x408303
    if (v119 == 32) {
        int64_t v223 = 51;
        while (v223 != 0) {
            int64_t v224 = v223 - 1; // 0x408310
            if (*(char *)(v224 + v144) != 32) {
                // break -> 0x408321
                break;
            }
            v223 = v224;
        }
        // 0x408321
        v222 = 0x100000000 * v223 >> 32;
    }
    // 0x40835f
    *(char *)(v16 + 624 + v222) = 0;
    function_404f90((int64_t)"%s\n", v144, v222, 100, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v225 = dcgettext((char *)((int32_t)"%s\n" ^ (int32_t)"%s\n"), "     possible reasons:\n", 5); // 0x408344
    function_404f90((int64_t)v225, (int64_t)"     possible reasons:\n", 5, 100, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v226 = dcgettext(NULL, "       numeric values overflow;\n", 5); // 0x408395
    function_404f90((int64_t)v226, (int64_t)"       numeric values overflow;\n", 5, v120, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v227 = dcgettext(NULL, "missing timezone", 5); // 0x409a22
    function_404f90((int64_t)"       %s\n", (int64_t)v227, 5, v120, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    v33 = 0;
    v30 = v29;
    goto lab_0x4083d2;
  lab_0x409534:
    if (v116 != 12) {
        // 0x409542
        function_404f90((int64_t)dcgettext(NULL, "warning: when adding relative days, it is recommended to specify noon\n", 5), (int64_t)"warning: when adding relative days, it is recommended to specify noon\n", 5, v147, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
    }
    goto lab_0x409050;
  lab_0x409085:;
    int32_t * v276 = (int32_t *)(v16 + 160); // 0x409085
    int64_t v277 = (int64_t)*v276; // 0x409085
    int64_t v272 = v184 + v277; // 0x40908d
    int64_t v232 = v187; // 0x40909f
    int64_t v233 = v185; // 0x40909f
    int64_t v234 = v186; // 0x40909f
    int64_t v273; // 0x4090b7
    int64_t v275; // 0x409128
    int64_t v269; // 0x4097f9
    if (v272 >= 0x80000000) {
        goto lab_0x4091b9;
    } else {
        // 0x4090a5
        v232 = v187;
        v233 = v185;
        v234 = v186;
        if (((v272 ^ v277) & (v272 ^ v184)) < 0) {
            goto lab_0x4091b9;
        } else {
            int32_t * v278 = (int32_t *)(v16 + 156); // 0x4090af
            int64_t v279 = (int64_t)*v278; // 0x4090af
            int64_t v280 = *(int64_t *)(v16 + 856); // 0x4090b7
            v273 = v280 + v279;
            int64_t v281 = 0x100000000 * v273 >> 32; // 0x4090bf
            v232 = v187;
            v233 = v185;
            v234 = v186;
            if (v273 != v281) {
                goto lab_0x4091b9;
            } else {
                // 0x4090ce
                v232 = v187;
                v233 = v185;
                v234 = v186;
                if (((v273 ^ v279) & (v273 ^ v280)) < 0) {
                    goto lab_0x4091b9;
                } else {
                    int64_t v282 = v16 + 24;
                    int64_t v283 = v16 + 144; // 0x4090da
                    int32_t v284 = v272; // 0x4090e5
                    *v276 = v284;
                    int32_t v285 = v273; // 0x4090ed
                    *v278 = v285;
                    *(int32_t *)(v16 + 164) = *(int32_t *)v282;
                    *(int64_t *)v283 = *(int64_t *)(v16 + 208);
                    *(int32_t *)(v16 + 152) = *(int32_t *)(v16 + 216);
                    *(int32_t *)(v16 + 176) = *(int32_t *)(v16 + 240);
                    v275 = function_40ded0(v29, v283, v281, v187);
                    if (v275 == -1) {
                        // 0x409a76
                        v33 = 0;
                        v30 = v29;
                        if (v89 != 0) {
                            int64_t v286 = function_405410(&v118, (int64_t *)&v75, &v79, v187, v185, v186); // 0x409a9c
                            function_404f90((int64_t)dcgettext(NULL, "error: adding relative date resulted in an invalid date: '%s'\n", 5), v286, 5, v187, v185, v186);
                            v33 = 0;
                            v30 = v29;
                        }
                        goto lab_0x4083d2;
                    } else {
                        unsigned char v287 = *(char *)(v16 + 953); // 0x40913a
                        if (v287 != 0) {
                            int64_t v288 = v1; // 0x4097dd
                            v269 = 0x100000000 * v288 >> 32;
                            function_404f90((int64_t)dcgettext(NULL, "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5), (int64_t)v1, (int64_t)v80, v269, v185, v186);
                            int64_t v289 = function_405410(&v118, (int64_t *)&v75, &v79, v269, v185, v186); // 0x40982a
                            function_404f90((int64_t)dcgettext(NULL, "    new date/time = '%s'\n", 5), v289, 5, v269, v185, v186);
                            v151 = v188;
                            v143 = v124;
                            v146 = v269;
                            v145 = v275;
                            v139 = v185;
                            v141 = v186;
                            if (v288 != 0) {
                                goto lab_0x408cac;
                            } else {
                                if (v80 != v285) {
                                    goto lab_0x4098ba;
                                } else {
                                    // 0x40989d
                                    v151 = v188;
                                    if (v80 != 0 || (int32_t)v122 == v284) {
                                        goto lab_0x408cac;
                                    } else {
                                        goto lab_0x4098ba;
                                    }
                                }
                            }
                        } else {
                            // 0x40914a
                            v202 = v282;
                            v215 = v188;
                            v210 = v275;
                            if (*(int64_t *)(v16 + 944) == 0) {
                                goto lab_0x408ce9;
                            } else {
                                int64_t v290 = (int64_t)*(int32_t *)(v16 + 760); // 0x40915b
                                int64_t v291 = *(int64_t *)(v16 + 184); // 0x409163
                                int64_t v292 = v290 - v291; // 0x409163
                                int64_t v293 = v275 - v292; // 0x40916e
                                v33 = 0;
                                v30 = v29;
                                v190 = v188;
                                v191 = v287;
                                v192 = 0;
                                v193 = v293;
                                v194 = v185;
                                v195 = v186;
                                if (((v292 ^ v290) & (v291 ^ v290)) >= 0 && ((v293 ^ v275) & (v292 ^ v275)) >= 0) {
                                    goto lab_0x408ce1;
                                } else {
                                    goto lab_0x4083d2;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4093f6:
    // 0x4093f6
    v33 = 0;
    v30 = v29;
    if ((char)v209 == 0) {
        goto lab_0x4083d2;
    } else {
        // 0x4093ff
        v8 = (int64_t)"error: adding relative time caused an overflow\n";
        v130 = (int64_t)"error: adding relative time caused an overflow\n";
        v131 = v213;
        v132 = v204;
        v133 = v207;
        goto lab_0x408a65;
    }
  lab_0x408ce9:;
    int64_t v294 = *(int64_t *)(v16 + 864); // 0x408ce9
    int128_t v295 = v294; // 0x408cf1
    int128_t v296 = 3600 * v295; // 0x408cf1
    *(int64_t *)v202 = v294;
    v33 = 0;
    v30 = v29;
    if (v296 == 0xe100000000000000000 * v295 >> 64) {
        int64_t v297 = v296; // 0x408cf1
        int64_t v298 = (int64_t)*(int32_t *)(v16 + 888); // 0x408d03
        v8 = v298;
        int64_t v299 = v210 + v297; // 0x408d90
        v33 = 0;
        v30 = v29;
        if (((v299 ^ v210) & (v299 ^ v297)) < 0) {
            goto lab_0x4083d2;
        } else {
            int64_t v300 = *(int64_t *)(v16 + 832) + v298; // 0x408d1d
            int64_t v301 = v300 + 0x3b9aca00 + (v300 >> 63 & -0x3b9aca00); // 0x408d51
            int64_t v302 = *(int64_t *)(v16 + 872); // 0x408d99
            int128_t v303 = v302; // 0x408da1
            int128_t v304 = 60 * v303; // 0x408da1
            v33 = 0;
            v30 = v29;
            v216 = v215;
            v212 = v301;
            v214 = v304;
            v211 = v299;
            v208 = v109;
            v205 = v298;
            v206 = v300 - v301 >> 63;
            v203 = v302;
            if (v304 == 0x3c0000000000000000 * v303 >> 64) {
                goto lab_0x408dab;
            } else {
                goto lab_0x4083d2;
            }
        }
    } else {
        goto lab_0x4083d2;
    }
  lab_0x409050:;
    int64_t v228 = (int64_t)*(int32_t *)(v16 + 164); // 0x409052
    int64_t v229 = *v157; // 0x40905a
    int64_t v230 = v229 + v228; // 0x40905a
    int64_t v231 = 0x100000000 * v230 >> 32; // 0x409062
    v232 = v231;
    v233 = (int64_t)"(Y-M-D) %s-%02d-%02d";
    v234 = v156;
    if (v230 != v231) {
        goto lab_0x4091b9;
    } else {
        // 0x409071
        v232 = v231;
        v233 = (int64_t)"(Y-M-D) %s-%02d-%02d";
        v234 = v156;
        if (((v230 ^ v228) & (v230 ^ v229)) < 0) {
            goto lab_0x4091b9;
        } else {
            // 0x409079
            *(int32_t *)(v16 + 24) = (int32_t)v230;
            v184 = *v158;
            v187 = v231;
            v185 = (int64_t)"(Y-M-D) %s-%02d-%02d";
            v186 = v156;
            goto lab_0x409085;
        }
    }
  lab_0x4091b9:
    // 0x4091b9
    v33 = 0;
    v30 = v29;
    if (*(char *)(v16 + 953) != 0) {
        // 0x4091c7
        function_404f90((int64_t)dcgettext(NULL, "error: %s:%d\n", 5), (int64_t)"parse-datetime.y", 2167, v232, v233, v234);
        v33 = 0;
        v30 = v29;
    }
    goto lab_0x4083d2;
  lab_0x408dab:;
    int64_t v235 = v206;
    int64_t v236 = v211 + v214; // 0x408dab
    v213 = v212;
    v209 = v208;
    v204 = v205;
    v207 = v235;
    int64_t v237; // 0x407bc0
    int64_t v238; // 0x407bc0
    int64_t v239; // 0x407bc0
    int64_t v240; // 0x407bc0
    int64_t * v241; // 0x408dd0
    unsigned char v242; // 0x408df5
    if (((v236 ^ v211) & (v236 ^ v214)) < 0) {
        goto lab_0x4093f6;
    } else {
        int64_t v243 = *(int64_t *)(v16 + 880); // 0x408db4
        int64_t v244 = v243 + v236; // 0x408dbc
        v213 = v212;
        v209 = v208;
        v204 = v205;
        v207 = v235;
        if (((v244 ^ v236) & (v244 ^ v243)) < 0) {
            goto lab_0x4093f6;
        } else {
            // 0x408dc5
            v213 = v212;
            v209 = v208;
            v204 = v205;
            v207 = v235;
            // 0x408dd0
            v241 = (int64_t *)(v16 + 40);
            int64_t v245 = *v241; // 0x408dd0
            *(int64_t *)v245 = v244;
            *(int64_t *)(v245 + 8) = v212;
            int64_t v246 = v212; // 0x408ddf
            int64_t v247 = v205; // 0x408ddf
            if ((char)v208 != 0) {
                // 0x408de1
                v246 = v212;
                v247 = v205;
                if ((v243 | v203 | v8 | *(int64_t *)(v16 + 24)) != 0) {
                    int64_t v248 = v205 & 0xffffffff; // 0x409adf
                    function_404f90((int64_t)dcgettext(NULL, "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n", 5), (int64_t)v216, v203, v243, v248, v235);
                    function_404f90((int64_t)dcgettext(NULL, "    new time = %ld epoch-seconds\n", 5), v244, 5, v243, v248, v235);
                    v246 = v243;
                    v247 = v248;
                    if (v80 != -1) {
                        int64_t v249 = function_40de20(v29, a1, &v154); // 0x409b35
                        v246 = v243;
                        v247 = v248;
                        if (false && v249 != 0) {
                            // 0x409b57
                            function_404f90((int64_t)dcgettext(NULL, "warning: daylight saving time changed after time adjustment\n", 5), (int64_t)"warning: daylight saving time changed after time adjustment\n", 5, v243, v248, v235);
                            v246 = v243;
                            v247 = v248;
                        }
                    }
                }
            }
            // 0x408df5
            v242 = *(char *)(v16 + 953);
            v33 = 1;
            v30 = v29;
            if (v242 == 0) {
                goto lab_0x4083d2;
            } else {
                // 0x408729
                v238 = v247;
                int64_t * v250 = (int64_t *)(v16 + 16); // 0x408729
                v8 = (int64_t)"timezone: system default\n";
                v237 = (int64_t)"timezone: system default\n";
                v239 = v246;
                if (*v250 == 0) {
                    goto lab_0x408763;
                } else {
                    int64_t v251 = *v250; // 0x40873b
                    v8 = v251;
                    int64_t v252 = (int64_t)"UTC0"; // 0x407bc0
                    int64_t v253 = v251; // 0x40874f
                    unsigned char v254 = *(char *)v253; // 0x40874f
                    char v255 = *(char *)v252; // 0x40874f
                    v253 += v18;
                    v8 = v253;
                    int64_t v256 = 4; // 0x40874f
                    char v257 = v255; // 0x40874f
                    bool v258 = false; // 0x40874f
                    while (v254 == v255) {
                        v252 += v18;
                        v257 = v254;
                        v258 = true;
                        if (v256 == 0) {
                            // break -> 
                            break;
                        }
                        v254 = *(char *)v253;
                        v255 = *(char *)v252;
                        v253 += v18;
                        v8 = v253;
                        v256--;
                        v257 = v255;
                        v258 = false;
                    }
                    unsigned char v259 = v257;
                    if ((v254 >= v259 && !v258) != v254 < v259) {
                        char * v260 = dcgettext(NULL, "timezone: TZ=\"%s\" environment value\n", 5); // 0x408968
                        function_404f90((int64_t)v260, *v250, 5, v256, v238, v235);
                        v240 = v256;
                        goto lab_0x408774;
                    } else {
                        // 0x40875e
                        v8 = (int64_t)"timezone: Universal Time\n";
                        v237 = (int64_t)"timezone: Universal Time\n";
                        v239 = v256;
                        goto lab_0x408763;
                    }
                }
            }
        }
    }
  lab_0x408763:
    // 0x408763
    function_404f90((int64_t)dcgettext(NULL, (char *)v237, 5), v8, 5, v239, v238, v235);
    v240 = v239;
    goto lab_0x408774;
  lab_0x4098ba:
    // 0x4098ba
    function_404f90((int64_t)dcgettext(NULL, "warning: month/year adjustment resulted in shifted dates:\n", 5), (int64_t)"warning: month/year adjustment resulted in shifted dates:\n", 5, v269, v185, v186);
    int64_t v270 = function_404f20(v188, &v154, 5, v269); // 0x4098e1
    int64_t v271 = v272 + 1; // 0x409901
    function_404f90((int64_t)dcgettext(NULL, "     adjusted Y M D: %s %02d %02d\n", 5), 0x100000000 * v270 >> 32, v271 & 0xffffffff, v273 & 0xffffffff, v185, v186);
    int64_t v274 = function_404f20(v108, &v154, (int32_t)v271, v120); // 0x409937
    function_404f90((int64_t)dcgettext(NULL, "   normalized Y M D: %s %02d %02d\n", 5), v274, v121 & 0xffffffff, v120, v185, v186);
    v143 = v124;
    v146 = v120;
    v145 = v275;
    v139 = v185;
    v141 = v186;
    goto lab_0x408cac;
  lab_0x408774:;
    int64_t timep = *v241; // 0x408774
    int64_t v261 = *(int64_t *)timep; // 0x408785
    int64_t v262 = *(int64_t *)(timep + 8); // 0x408789
    function_404f90((int64_t)dcgettext(NULL, "final: %ld.%09d (epoch-seconds)\n", 5), v261, v262 & 0xffffffff, v240, v238, v235);
    int64_t time2 = v16 + 336; // 0x4087a2
    v8 = time2;
    if (gmtime_r((int32_t *)timep, (struct tm *)time2) != NULL) {
        int64_t v263 = function_405410((int32_t *)time2, NULL, (int64_t *)(v16 + 400), v240, v238, v235); // 0x4087c9
        function_404f90((int64_t)dcgettext(NULL, "final: %s (UTC)\n", 5), v263, 5, v240, v238, v235);
    }
    int64_t v264 = v242; // 0x408df5
    int64_t v265 = v16 + 624; // 0x4087f4
    int64_t v266 = function_40de20(v29, (int64_t *)*v241, (int64_t *)v265); // 0x4087ff
    v33 = v264;
    v30 = v29;
    if (v266 != 0) {
        int64_t v267 = function_404e20(*(int32_t *)(v16 + 664), (int64_t *)(v16 + 112)); // 0x408819
        int64_t v268 = function_405410((int32_t *)v265, NULL, (int64_t *)(v16 + 400), v240, v238, v235); // 0x408833
        function_404f90((int64_t)dcgettext(NULL, "final: %s (UTC%s)\n", 5), v268, v267, v240, v238, v235);
        v33 = v264;
        v30 = v29;
    }
    goto lab_0x4083d2;
}
// Address range: 0x409b90 - 0x409bf7
int64_t function_409b90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t env_val = (int64_t)getenv("TZ"); // 0x409bae
    int64_t v1 = function_40db40(env_val, a2, a3); // 0x409bb9
    int64_t result = 0; // 0x409bc1
    if (v1 != 0) {
        int64_t v2 = function_407bc0((int64_t *)a1, a2, (int32_t)a3, 0, v1, env_val); // 0x409bd7
        function_40de00(v1);
        result = v2 & 0xffffffff;
    }
    // 0x409be6
    return result;
}
// Address range: 0x409c00 - 0x409c8b
int64_t function_409c00(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = v1;
    int64_t result; // 0x409c00
    if (a3 == 1) {
        // 0x409c60
        *(int32_t *)a1 = v2;
        if (v2 > 68) {
            // 0x409c53
            return 1;
        }
        // 0x409c6e
        result = 0;
        if ((a4 & 8) == 0) {
            // 0x409c73
            *(int32_t *)a1 = v2 + 100;
            return 1;
        }
    } else {
        if (a3 != 2) {
            // 0x409c28
            int64_t t; // bp-16, 0x409c00
            time((int32_t *)&t);
            struct tm * time_info = localtime((int32_t *)&t); // 0x409c3f
            int64_t v3 = (int64_t)time_info; // 0x409c3f
            result = v3;
            if (time_info != NULL) {
                // 0x409c49
                *(int32_t *)a1 = *(int32_t *)(v3 + 20);
                result = 1;
            }
        } else {
            // 0x409c0c
            result = 0;
            if ((a4 & 2) != 0) {
                // 0x409c11
                *(int32_t *)a1 = 100 * v2 - 1900 + *(int32_t *)(v1 + 4);
                return 1;
            }
        }
    }
    // 0x409c53
    return result;
}
// Address range: 0x409c90 - 0x409f37
int64_t function_409c90(int64_t * a1, int64_t a2, uint64_t a3) {
    char * str = (char *)a2; // 0x409caa
    int64_t len = strlen(str); // 0x409caa
    int64_t v1 = len; // 0x409cb6
    int64_t v2 = 0; // 0x409cb6
    if ((a3 & 4) != 0) {
        char * found_char_pos = strchr(str, 46); // 0x409cc4
        int64_t v3 = (int64_t)found_char_pos; // 0x409cc4
        v1 = len;
        v2 = v3;
        if (found_char_pos != NULL) {
            int64_t v4 = v3 - a2; // 0x409cd1
            v1 = v4;
            v2 = v3;
            if (len - v4 != 3) {
                // 0x409ce2
                return 0;
            }
        }
    }
    // 0x409cfb
    if (v1 >= 13 || v1 % 2 != 0) {
        // 0x409ce2
        return 0;
    }
    int64_t v5 = a3 & 0xffffffff; // 0x409c9d
    int64_t timep; // bp-200, 0x409c90
    int64_t v6 = &timep; // 0x409ca3
    int64_t v7 = a2; // 0x409d13
    int64_t result = 0; // 0x409d21
    int64_t v8; // 0x409c90
    uint64_t v9; // 0x409d2c
    int64_t v10; // 0x409d4c
    while ((int32_t)*(char *)v7 < 58) {
        // 0x409d23
        v7++;
        if (v1 + a2 == v7) {
            // 0x409d2c
            v9 = v1 / 2;
            v10 = v6 + 96;
            v8 = 0;
            goto lab_0x409d38;
        }
        result = 0;
    }
    // 0x409ce2
    return result;
  lab_0x409d38:;
    int64_t v11 = 2 * v8 + a2;
    int64_t v12 = (int64_t)*(char *)v11; // 0x409d38
    char v13 = *(char *)(v11 + 1); // 0x409d43
    *(int32_t *)(v10 + 4 * v8) = (int32_t)((int64_t)v13 + 0xffffffd0 + 2 * (v12 + 0xffffff10 + 4 * v12));
    int64_t v14 = v8 + 1; // 0x409d50
    v8 = v14;
    int32_t v15; // bp-104, 0x409c90
    int32_t v16; // bp-148, 0x409c90
    int32_t v17; // 0x409c90
    int32_t v18; // 0x409c90
    int32_t v19; // 0x409c90
    int32_t v20; // bp-88, 0x409c90
    int32_t v21; // 0x409ede
    if (v9 != v14) {
        goto lab_0x409d38;
    } else {
        int64_t v22 = v9 - 4; // 0x409d59
        if (a3 % 2 == 0) {
            int64_t v23 = function_409c00((int64_t *)&v16, (int64_t *)&v15, v22, v5); // 0x409ecc
            result = 0;
            if ((char)v23 == 0) {
                return result;
            } else {
                int64_t v24 = v6 + 80 + 4 * v9; // 0x409ed9
                v21 = *(int32_t *)v24;
                v17 = *(int32_t *)(v24 + 4);
                v18 = *(int32_t *)(v24 + 8);
                v19 = *(int32_t *)(v24 + 12);
                goto lab_0x409da3;
            }
        } else {
            int64_t v25 = function_409c00((int64_t *)&v16, (int64_t *)&v20, v22, v5); // 0x409d96
            result = 0;
            v21 = v15;
            if ((char)v25 == 0) {
                return result;
            } else {
                goto lab_0x409da3;
            }
        }
    }
  lab_0x409da3:;
    int32_t v26 = 0; // 0x409da6
    if (v2 == 0) {
        goto lab_0x409dd9;
    } else {
        int64_t v27 = (int64_t)*(char *)(v2 + 1) + 0xffffffd0; // 0x409db1
        result = 0;
        if ((int32_t)v27 < 10) {
            char v28 = *(char *)(v2 + 2); // 0x409dbd
            result = 0;
            if (v28 == 57 || (int32_t)v28 < 57) {
                // 0x409dce
                v26 = 10 * (v27 & 0xffffffff) + 0xffffffd0 + (int64_t)v28;
                goto lab_0x409dd9;
            } else {
                return result;
            }
        } else {
            return result;
        }
    }
  lab_0x409dd9:;
    int32_t v29 = v21 - 1;
    v15 = v26;
    v20 = v29;
    int64_t v30 = function_40da50(&v15); // 0x409e09
    timep = v30;
    int64_t v31 = &v15; // 0x409e1b
    if (v30 == -1) {
        struct tm * time_info = localtime((int32_t *)&timep); // 0x409f0b
        result = 0;
        v31 = (int64_t)time_info;
        if (time_info != NULL) {
            goto lab_0x409e21;
        } else {
            return result;
        }
    } else {
        goto lab_0x409e21;
    }
  lab_0x409e21:;
    int32_t v32 = *(int32_t *)(v31 + 20); // 0x409e29
    int32_t v33 = *(int32_t *)(v31 + 16); // 0x409e2c
    int32_t v34 = *(int32_t *)(v31 + 12); // 0x409e35
    int32_t v35 = *(int32_t *)v31; // 0x409e42
    int32_t v36 = *(int32_t *)(v31 + 8); // 0x409e44
    int32_t v37 = *(int32_t *)(v31 + 4); // 0x409e4d
    if ((v33 ^ v29 | v32 ^ v16 | v34 ^ v17 | v35 ^ v26 || v36 ^ v18 || v37 ^ v19) == 0) {
        // 0x409e98
        *a1 = timep;
        return 1;
    }
    // 0x409e58
    result = 0;
    if (v26 != 60) {
        return result;
    } else {
        // 0x409e61
        int64_t v38; // bp-184, 0x409c90
        int64_t * v39 = __stpcpy_chk((char *)&v38, str, 16); // 0x409e6e
        *(int16_t *)((int64_t)v39 - 2) = 0x3935;
        *(char *)v39 = 0;
        int64_t v40; // bp-192, 0x409c90
        int64_t v41 = function_409c90(&v40, (int64_t)&v38, v5); // 0x409e8b
        result = v41;
        if ((char)v41 != 0) {
            // 0x409e98
            *a1 = timep;
            return 1;
        }
        return result;
    }
}
// Address range: 0x409f40 - 0x409fd9
int64_t function_409f40(int64_t str) {
    // 0x409f40
    if (str == 0) {
        // 0x409fb9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g47);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x409f4e
    int64_t result = (int64_t)found_char_pos; // 0x409f4e
    if (found_char_pos == NULL) {
        // 0x409fa9
        g53 = str;
        g46 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x409f58
    if (v1 - str < 7) {
        // 0x409fa9
        g53 = str;
        g46 = str;
        return result;
    }
    // 0x409f68
    bool v2; // 0x409f40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x409f40
    int64_t v5 = result - 6; // 0x409f40
    int64_t v6 = 7; // 0x409f76
    unsigned char v7 = *(char *)v5; // 0x409f76
    char v8 = *(char *)v4; // 0x409f76
    char v9 = v8; // 0x409f76
    bool v10 = false; // 0x409f76
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
    int64_t v12 = (int64_t)"lt-"; // 0x409f80
    int64_t v13 = v1; // 0x409f80
    int64_t v14 = 3; // 0x409f80
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x409fa9
        g53 = str;
        g46 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x409f92
    char v16 = *(char *)v12; // 0x409f92
    char v17 = v16; // 0x409f92
    bool v18 = false; // 0x409f92
    while (v15 == v16) {
        // 0x409f82
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
    int64_t v20 = v1; // 0x409f9c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x409f9e
        v20 = result + 4;
        g43 = v20;
    }
    // 0x409fa9
    g53 = v20;
    g46 = v20;
    return result;
}
// Address range: 0x409fe0 - 0x40a0d2
int64_t function_409fe0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x409ff4
    int64_t result = (int64_t)v1; // 0x409ff4
    if (result != a1) {
        // 0x40a001
        return result;
    }
    int64_t v2 = function_40e190(); // 0x40a010
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x40a0c6
    if (v3 == 85) {
        // 0x40a020
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x40a0b8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g24 : (int64_t)&g8;
            return result2;
        }
        char v4 = *v1; // 0x40a04e
        int64_t result3 = v4 != 96 ? (int64_t)&g20 : (int64_t)&g23; // 0x40a05b
        // 0x40a001
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x40a0b8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g24 : (int64_t)&g8;
        return result2;
    }
    char v5 = *v1; // 0x40a09d
    int64_t result4 = v5 != 96 ? (int64_t)&g21 : (int64_t)&g22; // 0x40a0aa
    // 0x40a001
    return result4;
}
// Address range: 0x40a0e0 - 0x40a137
int64_t function_40a0e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x40a0e0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x40a128
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x40a137 - 0x40b301
int64_t function_40a137(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x40a181
    int64_t v3 = 0; // 0x40a181
    int64_t v4; // 0x40a137
    int64_t v5; // 0x40a137
    int64_t v6; // 0x40a137
    int64_t v7; // 0x40a137
    int64_t v8; // 0x40a137
    int64_t v9; // 0x40a137
    int64_t v10; // 0x40a137
    int64_t v11; // 0x40a137
    int64_t v12; // 0x40a137
    int64_t v13; // 0x40a137
    int64_t v14; // 0x40a137
    int64_t v15; // 0x40a137
    int64_t v16; // 0x40a137
    int64_t v17; // 0x40a137
    int64_t v18; // 0x40a137
    int64_t result; // 0x40a137
    int64_t v19; // 0x40a137
    int32_t wc; // bp+132, 0x40a137
    int64_t ps; // bp+136, 0x40a137
    char v20; // 0x40a6f0
    int64_t v21; // 0x40a6f0
    int64_t v22; // 0x40aa98
    int64_t v23; // 0x40a137
    int64_t v24; // 0x40aab7
    int32_t v25; // 0x40a137
    while (true) {
      lab_0x40a188_2:
        // 0x40a188
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x40a137
        int64_t v27; // 0x40a1bc
        while (true) {
          lab_0x40a188:
            // 0x40a188
            v5 = v26;
            bool v28 = v15 == v5; // 0x40a193
            if (v15 == -1) {
                // 0x40a195
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x40a1a3
            if (v28) {
                // break (via goto) -> 0x40a908
                goto lab_0x40a908;
            }
            // 0x40a1ac
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g72 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40a79b
                    if (v25 % 2 == 0) {
                        goto lab_0x40a2e1;
                    }
                    // 0x40abbd
                    v26 = v5 + 1;
                    goto lab_0x40a188;
                }
                case 7: {
                    goto lab_0x40a2e1;
                }
                case 8: {
                    goto lab_0x40a2e1;
                }
                case 9: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x40a2e1;
                }
                case 12: {
                    goto lab_0x40a2e1;
                }
                case 13: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40a2ad;
                }
                case 36: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x40a2e1;
                }
                case 38: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x40a2e1;
                }
                case 44: {
                    goto lab_0x40a2e1;
                }
                case 45: {
                    goto lab_0x40a2e1;
                }
                case 46: {
                    goto lab_0x40a2e1;
                }
                case 47: {
                    goto lab_0x40a2e1;
                }
                case 48: {
                    goto lab_0x40a2e1;
                }
                case 49: {
                    goto lab_0x40a2e1;
                }
                case 50: {
                    goto lab_0x40a2e1;
                }
                case 51: {
                    goto lab_0x40a2e1;
                }
                case 52: {
                    goto lab_0x40a2e1;
                }
                case 53: {
                    goto lab_0x40a2e1;
                }
                case 54: {
                    goto lab_0x40a2e1;
                }
                case 55: {
                    goto lab_0x40a2e1;
                }
                case 56: {
                    goto lab_0x40a2e1;
                }
                case 57: {
                    goto lab_0x40a2e1;
                }
                case 58: {
                    goto lab_0x40a2e1;
                }
                case 59: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x40a2e1;
                }
                case 66: {
                    goto lab_0x40a2e1;
                }
                case 67: {
                    goto lab_0x40a2e1;
                }
                case 68: {
                    goto lab_0x40a2e1;
                }
                case 69: {
                    goto lab_0x40a2e1;
                }
                case 70: {
                    goto lab_0x40a2e1;
                }
                case 71: {
                    goto lab_0x40a2e1;
                }
                case 72: {
                    goto lab_0x40a2e1;
                }
                case 73: {
                    goto lab_0x40a2e1;
                }
                case 74: {
                    goto lab_0x40a2e1;
                }
                case 75: {
                    goto lab_0x40a2e1;
                }
                case 76: {
                    goto lab_0x40a2e1;
                }
                case 77: {
                    goto lab_0x40a2e1;
                }
                case 78: {
                    goto lab_0x40a2e1;
                }
                case 79: {
                    goto lab_0x40a2e1;
                }
                case 80: {
                    goto lab_0x40a2e1;
                }
                case 81: {
                    goto lab_0x40a2e1;
                }
                case 82: {
                    goto lab_0x40a2e1;
                }
                case 83: {
                    goto lab_0x40a2e1;
                }
                case 84: {
                    goto lab_0x40a2e1;
                }
                case 85: {
                    goto lab_0x40a2e1;
                }
                case 86: {
                    goto lab_0x40a2e1;
                }
                case 87: {
                    goto lab_0x40a2e1;
                }
                case 88: {
                    goto lab_0x40a2e1;
                }
                case 89: {
                    goto lab_0x40a2e1;
                }
                case 90: {
                    goto lab_0x40a2e1;
                }
                case 91: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x40a2e1;
                }
                case 94: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x40a2e1;
                }
                case 96: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x40a2e1;
                }
                case 98: {
                    goto lab_0x40a2e1;
                }
                case 99: {
                    goto lab_0x40a2e1;
                }
                case 100: {
                    goto lab_0x40a2e1;
                }
                case 101: {
                    goto lab_0x40a2e1;
                }
                case 102: {
                    goto lab_0x40a2e1;
                }
                case 103: {
                    goto lab_0x40a2e1;
                }
                case 104: {
                    goto lab_0x40a2e1;
                }
                case 105: {
                    goto lab_0x40a2e1;
                }
                case 106: {
                    goto lab_0x40a2e1;
                }
                case 107: {
                    goto lab_0x40a2e1;
                }
                case 108: {
                    goto lab_0x40a2e1;
                }
                case 109: {
                    goto lab_0x40a2e1;
                }
                case 110: {
                    goto lab_0x40a2e1;
                }
                case 111: {
                    goto lab_0x40a2e1;
                }
                case 112: {
                    goto lab_0x40a2e1;
                }
                case 113: {
                    goto lab_0x40a2e1;
                }
                case 114: {
                    goto lab_0x40a2e1;
                }
                case 115: {
                    goto lab_0x40a2e1;
                }
                case 116: {
                    goto lab_0x40a2e1;
                }
                case 117: {
                    goto lab_0x40a2e1;
                }
                case 118: {
                    goto lab_0x40a2e1;
                }
                case 119: {
                    goto lab_0x40a2e1;
                }
                case 120: {
                    goto lab_0x40a2e1;
                }
                case 121: {
                    goto lab_0x40a2e1;
                }
                case 122: {
                    goto lab_0x40a2e1;
                }
                case 123: {
                    goto lab_0x40a285;
                }
                case 124: {
                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x40a285;
                }
                case 126: {
                    goto lab_0x40a2ad;
                }
                default: {
                    goto lab_0x40a685;
                }
            }
        }
      lab_0x40a685:
        if (v23 != 1) {
            // 0x40a9f0
            ps = 0;
            int64_t len = v15; // 0x40aa00
            if (v15 == -1) {
                // 0x40aa02
                len = strlen((char *)str);
            }
            // 0x40aa2e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40aa8f:
                // 0x40aa8f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x40aa94
                int64_t v30 = v29 + str;
                v24 = function_40d310(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40b00a_2;
                    }
                    case -1: {
                        goto lab_0x40b00a_2;
                    }
                    case -2: {
                        // 0x40b0ed
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x40b127
                            v19 = v18;
                            int64_t v31 = v18; // 0x40b12a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x40b137
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x40b130
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40b00a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40b00a_2;
                    }
                    case 1: {
                        goto lab_0x40aa60;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40ab0c
                        char v34 = *(char *)v33; // 0x40ab1d
                        unsigned char v35; // 0x40a137
                        if (v34 < 125) {
                            // 0x40ab28
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40ab3f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x40ab10
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40ab1d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x40ab28
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40ab3f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x40ab10
                            v33++;
                        }
                        goto lab_0x40aa60;
                    }
                }
            }
            goto lab_0x40b00a_2;
        } else {
            // 0x40a6d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x40a2e1;
        }
    }
  lab_0x40a908:
    // 0x40a908
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40b20a
        if (v8 > result) {
            // 0x40b213
            *(char *)(v12 + result) = 0;
        }
        // 0x40a537
        return result;
    }
    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40a2e1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x40a2f0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40a4fa_2;
        }
    }
    int64_t v39 = result; // 0x40a3f1
    char v40 = v20; // 0x40a3f1
    int64_t v41 = v38; // 0x40a3f1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x40a3f1
    int64_t v43 = v36; // 0x40a3f1
    goto lab_0x40a36d;
  lab_0x40a4fa_2:
    // 0x40a537
    return function_40a0e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40b00a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x40a2e1;
    } else {
        uint64_t v49 = v46 + v5; // 0x40abde
        int64_t v50 = v5 + 1; // 0x40acc1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x40acc8
        char v52 = v20; // 0x40acc8
        int64_t v53 = result; // 0x40acc8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x40ac91
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x40ac95
            int64_t v56 = v54 + 1; // 0x40ac9a
            int64_t v57 = v51 + 1; // 0x40acc1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40ac8c
                v54 = v56;
                if (v47 > v54) {
                    // 0x40ac91
                    *(char *)(v54 + v48) = v55;
                }
                // 0x40ac95
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
        goto lab_0x40a36d;
    }
  lab_0x40aa60:
    // 0x40aa60
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40aa7f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40aa82
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40b00a
        goto lab_0x40b00a_2;
    }
    goto lab_0x40aa8f;
  lab_0x40a2ad:
    // 0x40a2ad
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40a4fa_2;
    }
    goto lab_0x40a2e1;
  lab_0x40a285:;
    bool v60 = v15 == 1; // 0x40a290
    if (v15 == -1) {
        // 0x40a292
        v60 = *(char *)v1 == 0;
    }
    // 0x40a29e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x40a2e1;
    } else {
        goto lab_0x40a2ad;
    }
  lab_0x40a36d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x40a372
        *(char *)(v44 + v45) = v40;
    }
    // 0x40a376
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x40a188_2;
}
// Address range: 0x40b310 - 0x40b4ae
int64_t function_40b310(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x40b312
    int32_t * v3 = __errno_location(); // 0x40b32c
    int64_t v4 = (int64_t)g36; // 0x40b331
    int32_t v5 = *v3; // 0x40b33b
    int64_t v6 = v4; // 0x40b351
    if (v2 >= (int64_t)*(int32_t *)&g39) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x40b4a9
            function_40c3e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x40b360
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x40b367
        int64_t v9; // 0x40b310
        if (g36 == &g37) {
            int64_t v10 = function_40c1f0(0, v8); // 0x40b48a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g37); // 0x40b48f
            *(int64_t *)&g36 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_40c1f0(v4, v8); // 0x40b37b
            *(int64_t *)&g36 = v12;
            v9 = v12;
        }
        // 0x40b38a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g39; // 0x40b38a
        int32_t v14 = v7; // 0x40b391
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g39 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x40b3c1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40b3cb
    int64_t * v17 = (int64_t *)v15; // 0x40b3ce
    uint64_t v18 = *v17; // 0x40b3ce
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x40b3d1
    int64_t result = *v19; // 0x40b3d1
    int64_t v20; // 0x40b310
    uint64_t v21 = function_40a0e0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x40b3f4
    if (v18 > v21) {
        // 0x40b46b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x40b407
    *v17 = v22;
    if (result != (int64_t)&g54) {
        // 0x40b417
        free((int64_t *)result);
    }
    int64_t result2 = function_40c190(v22); // 0x40b431
    *v19 = result2;
    int64_t v23; // 0x40b310
    function_40a0e0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40b46b
    *v3 = v5;
    return result2;
}
// Address range: 0x40b4b0 - 0x40b4e4
int64_t function_40b4b0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40b4b7
    int64_t result = function_40c390(a1 == 0 ? (int64_t)&g55 : a1, 56); // 0x40b4d6
    return result;
}
// Address range: 0x40b4f0 - 0x40b4ff
int64_t function_40b4f0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g55 : a1); // 0x40b4fc
    return result;
}
// Address range: 0x40b500 - 0x40b50f
int64_t function_40b500(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 : a1; // 0x40b508
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g55;
}
// Address range: 0x40b510 - 0x40b543
int64_t function_40b510(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 + 8 : a1 + 8; // 0x40b529
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40b52e
    uint32_t v3 = *v2; // 0x40b52e
    uint32_t v4 = (int32_t)a2 % 32; // 0x40b532
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x40b550 - 0x40b563
int64_t function_40b550(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g55 + 4 : a1 + 4); // 0x40b55c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x40b570 - 0x40b59b
int64_t function_40b570(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g55 : a1; // 0x40b578
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x40b595
        abort();
        // UNREACHABLE
    }
    // 0x40b58c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g55;
}
// Address range: 0x40b5a0 - 0x40b612
int64_t function_40b5a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g55 : a5; // 0x40b5c2
    int32_t * v2 = __errno_location(); // 0x40b5cb
    uint32_t v3 = *(int32_t *)v1; // 0x40b5eb
    int64_t result = function_40a0e0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40b5fa
    return result;
}
// Address range: 0x40b620 - 0x40b701
int64_t function_40b620(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g55 : a4; // 0x40b642
    int32_t * v2 = __errno_location(); // 0x40b648
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x40b667
    int32_t * v4 = (int32_t *)v1; // 0x40b66a
    int64_t v5 = function_40a0e0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x40b685
    int64_t v6 = v5 + 1; // 0x40b68a
    int64_t result = function_40c190(v6); // 0x40b69f
    function_40a0e0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x40b6e4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40b6ed
    return result;
}
// Address range: 0x40b710 - 0x40b71a
int64_t function_40b710(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b710
    return function_40b620(a1, a2, 0, a3);
}
// Address range: 0x40b720 - 0x40b7b5
int64_t function_40b720(void) {
    uint32_t v1 = *(int32_t *)&g39; // 0x40b720
    int64_t v2 = v1; // 0x40b720
    int64_t v3 = v2; // 0x40b734
    if (v1 >= 2) {
        int64_t v4 = &g39;
        int64_t v5 = v4 + 16; // 0x40b753
        free((int64_t *)*(int64_t *)v4);
        v3 = &g73;
        while (v5 != (int64_t)g36 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x40b750
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g73;
        }
    }
    int64_t v6 = v3; // 0x40b76d
    if (g37 != 0x61b360) {
        // 0x40b76f
        free((int64_t *)g37);
        g37 = 256;
        *(int64_t *)&g38 = (int64_t)&g54;
        v6 = &g73;
    }
    int64_t result = v6; // 0x40b791
    if (g36 != &g37) {
        // 0x40b793
        free(g36);
        *(int64_t *)&g36 = (int64_t)&g37;
        result = &g73;
    }
    // 0x40b7a6
    *(int32_t *)&g39 = 1;
    return result;
}
// Address range: 0x40b7c0 - 0x40b7d1
int64_t function_40b7c0(void) {
    // 0x40b7c0
    int64_t v1; // 0x40b7c0
    return function_40b310(v1, v1, -1, (int64_t *)&g55);
}
// Address range: 0x40b7e0 - 0x40b7ea
int64_t function_40b7e0(void) {
    // 0x40b7e0
    int64_t v1; // 0x40b7e0
    return function_40b310(v1, v1, v1, (int64_t *)&g55);
}
// Address range: 0x40b7f0 - 0x40b806
int64_t function_40b7f0(int64_t a1) {
    // 0x40b7f0
    return function_40b310(0, a1, -1, (int64_t *)&g55);
}
// Address range: 0x40b810 - 0x40b822
int64_t function_40b810(int64_t a1, int64_t a2) {
    // 0x40b810
    return function_40b310(0, a1, a2, (int64_t *)&g55);
}
// Address range: 0x40b830 - 0x40b898
int64_t function_40b830(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40b840
    return function_40b310((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40b8a0 - 0x40b904
int64_t function_40b8a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40b8b0
    return function_40b310((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x40b910 - 0x40b91c
int64_t function_40b910(int64_t a1, int64_t a2) {
    // 0x40b910
    return function_40b830(0, a1 & 0xffffffff, a2);
}
// Address range: 0x40b920 - 0x40b92f
int64_t function_40b920(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b920
    return function_40b8a0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x40b930 - 0x40b9a0
int64_t function_40b930(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g55); // 0x40b93d
    int128_t v2 = __asm_movdqa(g56); // 0x40b945
    int128_t v3 = __asm_movdqa(g57); // 0x40b94d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x40b962
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x40b978
    uint32_t v6 = *v5; // 0x40b978
    uint32_t v7 = (int32_t)a3 % 32; // 0x40b97d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_40b310(0, a1, a2, &v4);
}
// Address range: 0x40b9a0 - 0x40b9ad
int64_t function_40b9a0(int64_t a1, int64_t a2) {
    // 0x40b9a0
    return function_40b930(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x40b9b0 - 0x40b9c1
int64_t function_40b9b0(int64_t a1) {
    // 0x40b9b0
    return function_40b930(a1, -1, 58);
}
// Address range: 0x40b9d0 - 0x40b9da
int64_t function_40b9d0(void) {
    // 0x40b9d0
    int64_t v1; // 0x40b9d0
    return function_40b930(v1, v1, 58);
}
// Address range: 0x40b9e0 - 0x40ba4e
int64_t function_40b9e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40b9fa
    return function_40b310((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40ba50 - 0x40babc
int64_t function_40ba50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g55); // 0x40ba57
    int128_t v2 = __asm_movdqa(g56); // 0x40ba5f
    int128_t v3 = __asm_movdqa(g57); // 0x40ba67
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x40ba89
    if (a2 == 0 || a3 == 0) {
        // 0x40bab7
        abort();
        // UNREACHABLE
    }
    // 0x40ba9a
    return function_40b310(a1, a4, a5, &v4);
}
// Address range: 0x40bac0 - 0x40bac9
int64_t function_40bac0(void) {
    // 0x40bac0
    int64_t v1; // 0x40bac0
    return function_40ba50(v1, v1, v1, v1, -1);
}
// Address range: 0x40bad0 - 0x40bae7
int64_t function_40bad0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bad0
    return function_40ba50(0, a1, a2, a3, -1);
}
// Address range: 0x40baf0 - 0x40bb03
int64_t function_40baf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40baf0
    return function_40ba50(0, a1, a2, a3, a4);
}
// Address range: 0x40bb10 - 0x40bb1a
int64_t function_40bb10(void) {
    // 0x40bb10
    int64_t v1; // 0x40bb10
    return function_40b310(v1, v1, v1, &g35);
}
// Address range: 0x40bb20 - 0x40bb32
int64_t function_40bb20(int64_t a1, int64_t a2) {
    // 0x40bb20
    return function_40b310(0, a1, a2, &g35);
}
// Address range: 0x40bb40 - 0x40bb51
int64_t function_40bb40(int64_t a1, int64_t a2) {
    // 0x40bb40
    return function_40b310(a1, a2, -1, &g35);
}
// Address range: 0x40bb60 - 0x40bb76
int64_t function_40bb60(int64_t a1) {
    // 0x40bb60
    return function_40b310(0, a1, -1, &g35);
}
// Address range: 0x40bb80 - 0x40bbe4
int64_t function_40bb80(int64_t tp) {
    int32_t v1 = clock_settime(0, (struct timespec *)tp); // 0x40bb8e
    if (v1 == 0) {
        // 0x40bbdb
        return 0;
    }
    int32_t v2 = *__errno_location(); // 0x40bb9e
    int32_t result = v1; // 0x40bba1
    if (v2 != 1) {
        int64_t tv = 0; // bp-40, 0x40bbba
        result = settimeofday((struct timeval *)&tv, NULL);
    }
    // 0x40bbdb
    return result;
}
// Address range: 0x40bbf0 - 0x40bfcd
int64_t function_40bbf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x40bc88
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40bc0c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x40bc26
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40bc6b
    if (a6 < 10) {
        // 0x40bc7a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x40bd72
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x40bfd0 - 0x40bff0
int64_t function_40bfd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40bfd0
    if (a5 == 0) {
        // 0x40bfeb
        return function_40bbf0(a1, a2, a3, a4, a5, 0, (int64_t)&g73);
    }
    int64_t v1 = 0; // 0x40bfd7
    v1++;
    int64_t v2 = v1; // 0x40bfe9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x40bfe0
        v1++;
        v2 = v1;
    }
    // 0x40bfeb
    return function_40bbf0(a1, a2, a3, a4, a5, v2, (int64_t)&g73);
}
// Address range: 0x40bff0 - 0x40c050
int64_t function_40bff0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x40bff0
    int64_t v3 = &v2; // 0x40bff0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x40c023
    int64_t v6; // 0x40c00d
    int64_t * v7; // 0x40c02b
    int64_t v8; // 0x40c02b
    int64_t v9; // 0x40c037
    if (v5 < 48) {
        // 0x40c000
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x40c043
            break;
        }
    } else {
        // 0x40c02b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x40c043
            break;
        }
    }
    int64_t v10 = 10; // 0x40c021
    while (v4 != 9) {
        // 0x40c019
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x40c000
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x40c043
                break;
            }
        } else {
            // 0x40c02b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x40c043
                break;
            }
        }
        // 0x40c019
        v10 = 10;
    }
    // 0x40c043
    return function_40bbf0(a1, a2, a3, a4, v3, v10, (int64_t)&g73);
}
// Address range: 0x40c050 - 0x40c10c
int64_t function_40c050(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x40c050
    int64_t v1; // bp-168, 0x40c050
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x40c050
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x40c050
    int64_t v8; // 0x40c050
    int64_t v9; // bp-56, 0x40c050
    int64_t v10; // 0x40c0b5
    int64_t v11; // 0x40c0d9
    if ((int32_t)v6 < 48) {
        // 0x40c0a0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x40c0f0
            break;
        }
    } else {
        // 0x40c0d2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x40c0f0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40c0ca
    int64_t v13 = 10; // 0x40c0ca
    while (v5 != 9) {
        // 0x40c0cc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x40c0a0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x40c0f0
                break;
            }
        } else {
            // 0x40c0d2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x40c0f0
                break;
            }
        }
        // 0x40c0c2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x40c0f0
    int64_t v14; // bp-136, 0x40c050
    int64_t result = function_40bbf0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g73); // 0x40c0ff
    return result;
}
// Address range: 0x40c110 - 0x40c184
int64_t function_40c110(int64_t a1) {
    // 0x40c110
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x40c173
    return fputs_unlocked(v1, g44);
}
// Address range: 0x40c190 - 0x40c1aa
int64_t function_40c190(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x40c194
    if (size != 0 != (mem == NULL)) {
        // 0x40c1a3
        return (int64_t)mem;
    }
    // 0x40c1a5
    function_40c3e0(size);
    // UNREACHABLE
}
// Address range: 0x40c1b0 - 0x40c1d1
int64_t function_40c1b0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x40c1b3
    int64_t v2 = v1; // 0x40c1b3
    if (v2 < 0) {
        // 0x40c1cb
        function_40c3e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40c1c9
        return function_40c190(v2);
    }
    // 0x40c1cb
    function_40c3e0(v2);
    // UNREACHABLE
}
// Address range: 0x40c1e0 - 0x40c1e2
int64_t function_40c1e0(void) {
    // 0x40c1e0
    int64_t v1; // 0x40c1e0
    return function_40c190(v1);
}
// Address range: 0x40c1f0 - 0x40c226
int64_t function_40c1f0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x40c218
        free(v1);
        return (int32_t)&g73 ^ (int32_t)&g73;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x40c201
    if (a2 != 0 != (mem == NULL)) {
        // 0x40c210
        return (int64_t)mem;
    }
    // 0x40c221
    function_40c3e0(a1);
    // UNREACHABLE
}
// Address range: 0x40c230 - 0x40c251
int64_t function_40c230(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x40c233
    int64_t v2 = v1; // 0x40c233
    if (v2 < 0) {
        // 0x40c24b
        function_40c3e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40c249
        return function_40c1f0(a1, v2);
    }
    // 0x40c24b
    function_40c3e0(a1);
    // UNREACHABLE
}
// Address range: 0x40c260 - 0x40c2e6
int64_t function_40c260(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40c2bb
            function_40c3e0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40c1f0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x40c2a3
    if (a2 == 0) {
        // 0x40c2c8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x40c2a8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40c2bb
        function_40c3e0(a1);
        // UNREACHABLE
    }
    // 0x40c28a
    *(int64_t *)a2 = v2;
    return function_40c1f0(a1, v2 * a3);
}
// Address range: 0x40c2f0 - 0x40c340
int64_t function_40c2f0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x40c2f0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40c33a
            function_40c3e0(a1);
            // UNREACHABLE
        }
        // 0x40c312
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40c1f0(a1, v1);
    }
    if (a2 == 0) {
        // 0x40c325
        *(int64_t *)a2 = 128;
        return function_40c1f0(0, 128);
    }
    // 0x40c338
    if (a2 < 0) {
        // 0x40c33a
        function_40c3e0(a1);
        // UNREACHABLE
    }
    // 0x40c312
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_40c1f0(a1, v1);
}
// Address range: 0x40c340 - 0x40c357
int64_t function_40c340(int64_t a1, int64_t a2) {
    // 0x40c340
    return (int64_t)memset((int64_t *)function_40c190(a1), 0, (int32_t)a1);
}
// Address range: 0x40c360 - 0x40c38e
int64_t function_40c360(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x40c367
    if ((int64_t)v1 < 0) {
        // 0x40c389
        function_40c3e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x40c389
        function_40c3e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40c37a
    if (mem != NULL) {
        // 0x40c384
        return (int64_t)mem;
    }
    // 0x40c389
    function_40c3e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x40c390 - 0x40c3b8
int64_t function_40c390(int64_t a1, int64_t a2) {
    int64_t v1 = function_40c190(a2); // 0x40c39f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x40c3c0 - 0x40c3d3
int64_t function_40c3c0(int64_t str) {
    // 0x40c3c0
    return function_40c390(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x40c3e0 - 0x40c411
int64_t function_40c3e0(int64_t a1) {
    // 0x40c3e0
    error(g34, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40c420 - 0x40c49b
int64_t function_40c420(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40c427
    if (fileno(stream) < 0) {
        // 0x40c487
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40c43a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40c46b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40c487
            return fclose(stream);
        }
    }
    // 0x40c43c
    if ((int32_t)function_40c4a0(a1, v1) == 0) {
        // 0x40c487
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40c448
    int32_t v3 = *v2; // 0x40c450
    int64_t result = fclose(stream); // 0x40c45e
    if (v3 != 0) {
        // 0x40c490
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40c460
    return result;
}
// Address range: 0x40c4a0 - 0x40c4e0
int64_t function_40c4a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40c4ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40c4ba
        return fflush(stream);
    }
    // 0x40c4c8
    function_40c4e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40c4e0 - 0x40c537
int64_t function_40c4e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40c4e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40c4ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40c51b
    int64_t result = -1; // 0x40c524
    if (v1 != -1) {
        // 0x40c526
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40c532
    return result;
}
// Address range: 0x40c540 - 0x40c61f
int64_t function_40c540(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40c54c
    uint32_t v2 = *v1; // 0x40c54c
    int64_t v3 = a2 & 0xffffffff; // 0x40c551
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40c554
    uint64_t v5 = (int64_t)*v4; // 0x40c554
    int64_t v6; // 0x40c5c2
    if (v3 <= v5) {
      lab_0x40c5bc_2:
        // 0x40c5bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40c542
    int64_t v8 = v2; // 0x40c540
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40c5bc
        goto lab_0x40c5bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40c578
    int64_t v17; // 0x40c586
    int64_t * v18; // 0x40c5a0
    int64_t * v19; // 0x40c5a3
    int64_t v20; // 0x40c5ae
    int64_t v21; // 0x40c586
    while ((v16 & 0xffffffff) > v10) {
        // 0x40c583
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40c5a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40c5b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40c5bc
            goto lab_0x40c5bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40c5bc
            goto lab_0x40c5bc_2;
        }
        // 0x40c572
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40c5fb
    int64_t * v23 = (int64_t *)v22; // 0x40c600
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40c603
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40c600
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40c617
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40c56d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40c5bc
            goto lab_0x40c5bc_2;
        }
        // 0x40c572
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40c583
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40c5a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40c5b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40c5bc
                goto lab_0x40c5bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40c5bc
                goto lab_0x40c5bc_2;
            }
            // 0x40c572
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40c5e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40c600
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40c617
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40c5bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40c620 - 0x40cc3c
int64_t function_40c620(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40c63f
    int64_t v2 = *v1; // 0x40c63f
    char * str2 = (char *)v2; // 0x40c64c
    char c = *str2; // 0x40c64c
    int64_t v3 = v2; // 0x40c678
    int64_t v4 = 0; // 0x40c620
    int32_t v5; // 0x40c620
    int64_t v6; // 0x40c620
    int64_t v7; // 0x40c620
    int64_t v8; // 0x40c620
    int64_t v9; // 0x40c620
    int64_t v10; // 0x40c620
    int64_t v11; // 0x40c620
    int64_t v12; // 0x40c620
    int64_t v13; // 0x40c620
    int64_t str3; // 0x40c620
    int64_t v14; // 0x40c620
    int64_t v15; // 0x40c620
    int64_t v16; // 0x40c620
    int64_t v17; // 0x40c620
    int32_t v18; // 0x40c620
    int32_t v19; // 0x40c620
    int32_t v20; // 0x40c620
    int32_t v21; // 0x40c620
    int32_t v22; // 0x40c620
    int32_t v23; // 0x40c620
    int32_t v24; // 0x40c620
    int32_t v25; // 0x40c620
    int32_t v26; // 0x40c620
    int32_t v27; // 0x40c620
    int32_t v28; // 0x40c620
    int32_t v29; // 0x40c620
    int64_t nmemb; // 0x40c620
    int64_t v30; // 0x40c620
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40c67c
            while (v31 != 0 == (v31 != 61)) {
                // 0x40c678
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40c688
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40c68e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40c658
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40c6bc
                int64_t v34; // 0x40c620
                int64_t v35; // 0x40c620
                if (strncmp(str, str2, n) == 0) {
                    // 0x40c6c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40c840;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40c6d6
                int64_t v37 = *(int64_t *)v36; // 0x40c6da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40c6b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40c6c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40c840;
                        }
                    }
                    // 0x40c6d6
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
                  lab_0x40c726:
                    // 0x40c726
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
                        goto lab_0x40c780;
                    } else {
                        if (v11 == 0) {
                            // 0x40c8f0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40c780;
                        } else {
                            if (v39 == 0) {
                                // 0x40c8a0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40c74a;
                                } else {
                                    // 0x40c8ac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40c74a;
                                    } else {
                                        // 0x40c8ba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40c74a;
                                        } else {
                                            goto lab_0x40c780;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40c74a;
                            }
                        }
                    }
                }
              lab_0x40c791:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40c966
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40cb12
                            flockfile(g47);
                            int64_t v41 = *v1; // 0x40cb32
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40cb7f
                            int64_t v43 = (int64_t)g47;
                            int64_t v44 = v43; // 0x40cb99
                            int64_t v45; // 0x40cb9b
                            if (*(char *)v42 != 0) {
                                // 0x40cb9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g47;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40cb93
                            while (v17 + nmemb != v42) {
                                // 0x40cb95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40cb9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g47;
                                }
                                // 0x40cb88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40cbc0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g47);
                            v40 = *v1;
                        } else {
                            // 0x40c974
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40cacf
                        free((int64_t *)v17);
                    }
                    // 0x40c9c9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40c9e0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40c88e
                    return 63;
                }
                // 0x40c7b0
                v5 = v39;
                if (v13 != 0) {
                    // 0x40c834
                    v35 = v13;
                    v34 = v25;
                  lab_0x40c840:;
                    int32_t * v49 = (int32_t *)a7; // 0x40c850
                    uint32_t v50 = *v49; // 0x40c850
                    int64_t v51 = v50; // 0x40c850
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40c85a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40c863
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40ca8f
                                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40ca3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40c88e
                            return 63;
                        }
                        // 0x40c8d8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40cbef
                                    __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40caed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40cb00
                                // 0x40c88e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40c9fe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40ca12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40c87b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40c87e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40c882
                    int64_t result = v59; // 0x40c888
                    if (v58 != 0) {
                        // 0x40c88a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40c88e
                    return result;
                }
            } else {
                // 0x40c68e
                v5 = v32;
            }
            // break -> 0x40c7b5
            break;
        }
    }
    // 0x40c7b5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40c7cd
        if (*(char *)(v60 + 1) != 45) {
            // 0x40c7d7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40c88e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40c919
        __fprintf_chk(g47, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40c806
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40c816
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40c780:
    // 0x40c780
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40c780
    int64_t v63 = *(int64_t *)v62; // 0x40c784
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40c791
        goto lab_0x40c791;
    }
    goto lab_0x40c726;
  lab_0x40c74a:
    // 0x40c74a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40c620
    int32_t v65; // 0x40c620
    int32_t v66; // 0x40c620
    if (v27 != 0) {
        goto lab_0x40c780;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40c900
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40c780;
            } else {
                goto lab_0x40c771;
            }
        } else {
            // 0x40c765
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40ca5c
                int64_t v67 = (int64_t)mem; // 0x40ca5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40c780;
                } else {
                    // 0x40ca6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40c771;
                }
            } else {
                goto lab_0x40c771;
            }
        }
    }
  lab_0x40c771:
    // 0x40c771
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40c780;
}
// Address range: 0x40cc40 - 0x40d206
int64_t function_40cc40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40cc61
    if (v3 < 1) {
        // 0x40ce1e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40cc5d
    int32_t v5 = *(int32_t *)a7; // 0x40cc69
    uint64_t v6 = a1 & 0xffffffff; // 0x40cc6b
    int64_t v7 = v2; // 0x40cc70
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40cc73
    *v8 = 0;
    int64_t v9; // 0x40cc40
    int64_t v10; // 0x40cc40
    int64_t v11; // 0x40cc40
    int64_t v12; // 0x40cc40
    int64_t str; // 0x40cc40
    int64_t v13; // 0x40cc40
    int64_t v14; // 0x40cc40
    int64_t v15; // 0x40cc40
    int64_t v16; // 0x40cc40
    int64_t v17; // 0x40cc40
    int32_t v18; // 0x40cc40
    char v19; // 0x40cc40
    if (v5 == 0) {
        // 0x40ce58
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40cc8a;
    } else {
        // 0x40cc83
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40ccd0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40ccd3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40cd98;
            } else {
                int64_t v22 = v7 + 1; // 0x40cce6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40ccf6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40cdac;
                } else {
                    goto lab_0x40cd08;
                }
            }
        } else {
            goto lab_0x40cc8a;
        }
    }
  lab_0x40cc8a:
    // 0x40cc8a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40cc90
    *v24 = 0;
    int64_t v25; // 0x40cc40
    int64_t v26; // 0x40cc40
    int64_t v27; // 0x40cc40
    switch (*(char *)&v2) {
        case 45: {
            // 0x40cd80
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40cd8d;
        }
        case 43: {
            // 0x40d090
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40cd8d;
        }
        default: {
            // 0x40ccac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40d00f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40d128
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40cd8d;
                } else {
                    // 0x40d01d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40ccba;
                }
            } else {
                goto lab_0x40ccba;
            }
        }
    }
  lab_0x40cd98:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40cd9f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40cd08;
    } else {
        goto lab_0x40cdac;
    }
  lab_0x40ccba:
    // 0x40ccba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40cd8d;
  lab_0x40cd8d:
    // 0x40cd8d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40cd98;
  lab_0x40cd08:;
    uint32_t v30 = *(int32_t *)a7; // 0x40cd08
    int64_t v31 = v30; // 0x40cd08
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40cd0a
    if ((int64_t)*v32 > v31) {
        // 0x40cd0f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40cd12
    if (*v33 > v30) {
        // 0x40cd17
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40cd1a
    int64_t v35 = v31; // 0x40cd1e
    int64_t v36 = v15; // 0x40cd1e
    int64_t v37; // 0x40cc40
    int64_t v38; // 0x40cc40
    int64_t v39; // 0x40cc40
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40ce88
        int64_t v41 = v40; // 0x40ce88
        v2 = v41;
        int64_t v42; // 0x40cc40
        if (*v33 == v40) {
            // 0x40d070
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40d078
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40ce94
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40ce98
                function_40c540(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40cea8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40ceb1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40ceba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40ced1
            int64_t v47 = v45 & 0xffffffff; // 0x40ced5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40cede
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40cee4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40cee6;
                }
            }
            int64_t v48 = v47 + 1; // 0x40cec0
            int64_t v49 = v48 & 0xffffffff; // 0x40cec0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40ced1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40cede
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40cee4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40cee6;
                    }
                }
                // 0x40cec0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40d088
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40cee6;
    } else {
        goto lab_0x40cd24;
    }
  lab_0x40cdac:
    // 0x40cdac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40cdaf
    int64_t v51 = v12; // 0x40cdaf
    int64_t v52 = v14; // 0x40cdaf
    if (*(char *)v10 == 0) {
        goto lab_0x40cd08;
    } else {
        goto lab_0x40cdb5;
    }
  lab_0x40cd24:;
    int32_t v53 = v35; // 0x40cd24
    int64_t v54; // 0x40cc40
    int64_t v55; // 0x40cc40
    int64_t v56; // 0x40cc40
    int64_t v57; // 0x40cc40
    int64_t v58; // 0x40cc40
    int64_t v59; // 0x40cc40
    char * v60; // 0x40cc40
    int64_t v61; // 0x40cc40
    int64_t v62; // 0x40cd39
    int64_t v63; // 0x40cc40
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40ce73
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40ce76;
    } else {
        // 0x40cd2c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40cc40
        int64_t v66 = v65 ? -1 : 1; // 0x40cd40
        int64_t v67 = (int64_t)"--"; // 0x40cc40
        int64_t v68 = v62; // 0x40cc40
        int64_t v69 = 3; // 0x40cd40
        unsigned char v70 = *(char *)v68; // 0x40cd40
        char v71 = *(char *)v67; // 0x40cd40
        char v72 = v71; // 0x40cd40
        bool v73 = false; // 0x40cd40
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
            // 0x40ce30
            if (*(char *)v62 == 45) {
                // 0x40cef0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40cef0
                if (c == 0) {
                    goto lab_0x40ce3a;
                } else {
                    // 0x40cefd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40cf80;
                    } else {
                        if (c == 45) {
                            // 0x40d163
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40cfd5;
                        } else {
                            // 0x40cf0e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40cf80;
                            } else {
                                // 0x40cf13
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40cf34;
                                } else {
                                    // 0x40cf1a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40cf80;
                                    } else {
                                        goto lab_0x40cf34;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40ce3a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40cd50
            v2 = v75;
            int32_t v76 = *v32; // 0x40cd53
            int64_t v77 = v35 + 1; // 0x40cd56
            int32_t v78 = v77; // 0x40cd59
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40d0c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40cd67
                    function_40c540(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40cd75
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40ce76;
        }
    }
  lab_0x40cdb5:;
    // 0x40cdb5
    int64_t v79; // bp-104, 0x40cc40
    int64_t v80 = &v79; // 0x40cc4a
    int64_t v81 = v50 + 1; // 0x40cdb5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40cdbc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40cdc1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40cdc5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40cdc9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40cdd1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40cdd6
    int32_t c2 = v84; // 0x40cdd6
    char * found_char_pos = strchr(str2, c2); // 0x40cdd6
    int64_t v87 = *v82; // 0x40cddb
    v2 = v87;
    int64_t v88 = *v85; // 0x40cde5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40cdf0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40d0e0
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40d0ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40ce1e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40cdd6
    char v91 = *(char *)(v90 + 1); // 0x40ce0b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40cdc5
        if (v91 != 58) {
            // 0x40ce1e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40d034
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40d138
                *v8 = 0;
            } else {
                // 0x40d11c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40d05e
            *v83 = 0;
            // 0x40ce1e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40d03e
        if (v93 != 0) {
            // 0x40d0d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40d05e
            *v83 = 0;
            // 0x40ce1e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40d051
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40d05e
            *v83 = 0;
            // 0x40ce1e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40d19a
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40d14a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40d151
        // 0x40d05e
        *v83 = 0;
        // 0x40ce1e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40cfa9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40cfab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40d1d0
                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40d181
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40d188
            // 0x40ce1e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40cfb6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40cfba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40cfd5;
  lab_0x40cee6:
    // 0x40cee6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40cd24;
  lab_0x40cfd5:;
    int64_t v99 = function_40c620(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40cff3
    // 0x40ce1e
    return v99 & 0xffffffff;
  lab_0x40ce76:;
    int32_t v100 = v55; // 0x40ce76
    if (v100 != (int32_t)v59) {
        // 0x40ce7a
        *(int32_t *)a7 = v100;
    }
    // 0x40ce1e
    return 0xffffffff;
  lab_0x40ce3a:
    // 0x40ce3a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40ce41
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40ce1e
    return v99 & 0xffffffff;
  lab_0x40cf80:
    // 0x40cf80
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40cdb5;
  lab_0x40cf34:
    // 0x40cf34
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40c620(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40cf5a
    if ((int32_t)v101 != -1) {
        // 0x40ce1e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40cf6f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40cf80;
}
// Address range: 0x40d210 - 0x40d266
int64_t function_40d210(int64_t a1) {
    // 0x40d210
    *(int32_t *)&g58 = g42;
    *(int32_t *)&g59 = g41;
    int64_t v1; // 0x40d210
    int64_t result = function_40cc40(v1, v1, v1, v1, v1, v1, &g58, a1 & 0xffffffff); // 0x40d236
    g42 = *(int32_t *)&g58;
    g65 = (int32_t *)g61;
    *(int32_t *)&g40 = g60;
    return result;
}
// Address range: 0x40d270 - 0x40d288
int64_t function_40d270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40d270
    return function_40d210(1);
}
// Address range: 0x40d290 - 0x40d2a3
int64_t function_40d290(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x40d290
    return function_40d210(0);
}
// Address range: 0x40d2b0 - 0x40d2c5
int64_t function_40d2b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40d2b0
    return function_40cc40(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40d2d0 - 0x40d2e6
int64_t function_40d2d0(void) {
    // 0x40d2d0
    return function_40d210(0);
}
// Address range: 0x40d2f0 - 0x40d308
int64_t function_40d2f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40d2f0
    return function_40cc40(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40d310 - 0x40d38a
int64_t function_40d310(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40d31b
    int64_t v2 = (int64_t)&g25; // 0x40d31b
    int32_t * pwc; // 0x40d310
    int64_t v3; // 0x40d310
    int64_t n; // 0x40d310
    if (a2 == 0) {
        goto lab_0x40d362;
    } else {
        // 0x40d31d
        if (a3 == 0) {
            // 0x40d348
            return -2;
        }
        // 0x40d329
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40d362;
        } else {
            goto lab_0x40d334;
        }
    }
  lab_0x40d362:
    // 0x40d362
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40d310
    pwc = (int32_t *)&v4;
    goto lab_0x40d334;
  lab_0x40d334:;
    char * wstr = (char *)v3; // 0x40d33a
    int64_t ps; // 0x40d310
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40d33a
    int64_t result = v5; // 0x40d33a
    if (v5 < 0xfffffffe) {
        // 0x40d348
        return result;
    }
    int64_t result2 = result; // 0x40d379
    if ((char)function_40e130(0, v3) == 0) {
        // 0x40d37b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40d348
    return result2;
}
// Address range: 0x40d390 - 0x40d4a7
int64_t function_40d390(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x40d3be
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x40d3da
    int32_t v3 = v1; // 0x40d3e3
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x40d3f4
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x40d404
    int32_t v6 = v2 / 25; // 0x40d418
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x40d429
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x40d4b0 - 0x40d541
int64_t function_40d4b0(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x40d4be
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x40d4c3
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x40d4c9
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x40d4cf
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x40d4d5
        int64_t v6 = function_40d390(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x40d4d9
        int64_t result = v6 + a6; // 0x40d4e2
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x40d4e7
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x40d50d
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x40d511
        return result2;
    }
    // 0x40d520
    if (a6 > -0x7fffffffffffffff) {
        // 0x40d4e7
        return -0x8000000000000000;
    }
    // 0x40d52f
    return a6 + 1;
}
// Address range: 0x40d550 - 0x40d60f
int64_t function_40d550(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x40d57d
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x40d5bb
    if (v1 != 0 == (v1 != a3)) {
        // 0x40d57d
        return result;
    }
    int64_t v2 = v1; // 0x40d5c1
    while (v2 != 0) {
        // 0x40d5c8
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x40d57d
    return result;
}
// Address range: 0x40d610 - 0x40da4a
int64_t function_40d610(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40d62b
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x40d633
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x40d644
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x40d647
    int32_t v5 = v4 / 12; // 0x40d665
    int32_t v6 = -12 * v5 + v4; // 0x40d66f
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x40d67a
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x40d681
    int64_t v9 = 0; // 0x40d687
    if (v8 % 4 == 0) {
        // 0x40d689
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x40d8f0
            v9 = v8 < 0;
        }
    }
    // 0x40d6c5
    int64_t v10; // 0x40d610
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g26); // 0x40d6f7
    int32_t v14 = v11 - 59; // 0x40d710
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x40d713
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x40d727
    int64_t v17 = function_40d390(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x40d750
    int64_t v18; // bp-280, 0x40d610
    int64_t v19 = &v18; // 0x40d755
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x40d7a3
    int64_t v22 = v19 + 80; // 0x40d7a8
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
    int32_t v33 = 6; // 0x40d773
    int64_t v34 = v17; // 0x40d773
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_40d550(*v20, v22, v21); // 0x40d7ad
    int64_t v38 = *v23; // 0x40d7b2
    *v24 = v37;
    int64_t v39 = function_40d4b0(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g73); // 0x40d7d4
    while (v38 != v39) {
        // 0x40d7e4
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x40d7ee
            if (v40 < 0) {
                goto lab_0x40d817_3;
            }
            int32_t v41 = *v32; // 0x40d7fb
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x40d817_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x40d817_3;
                }
            }
        }
        // 0x40d778
        v33--;
        if (v33 == 0) {
            // 0x40d8d7
            return -1;
        }
        // 0x40d781
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_40d550(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_40d4b0(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g73);
    }
    int32_t v42 = *v32; // 0x40d920
    int32_t v43 = *v30; // 0x40d924
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x40d92b
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x40d944
    int64_t v46 = v44; // 0x40d944
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x40d960
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x40d99b
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x40d965
        int64_t v52 = 0x92c70; // 0x40d965
        while (true) {
            int64_t v53 = -v52; // 0x40d992
            int64_t v54 = v53 & 0xffffffff; // 0x40d992
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x40d995
            int64_t v56 = v55 + v51; // 0x40d998
            *v49 = v56;
            int64_t v57 = v51; // 0x40d9a0
            int32_t v58 = 2; // 0x40d9a0
            int64_t v59 = v54; // 0x40d9a0
            int32_t v60 = 2; // 0x40d9a0
            int64_t v61 = v54; // 0x40d9a0
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x40d9be:
                // 0x40d9be
                function_40d550(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x40d9d5
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x40d9ea
                    break;
                }
                // 0x40da40
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x40d987
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x40d610
            int64_t v66 = v59; // 0x40d9a2
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x40d9a2
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x40d9ab
                int64_t v69 = v68 + v64; // 0x40d9b4
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x40d9be;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x40d970
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x40d820;
            }
        }
        // 0x40d9ea
        *v24 = v50;
        *v23 = function_40d4b0(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g73);
        function_40d550(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x40d820;
  lab_0x40d817_3:
    // 0x40d817
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x40d820;
  lab_0x40d820:;
    int64_t v71 = *(int64_t *)(v19 + 56); // 0x40d828
    int32_t v72 = *(int32_t *)v21; // 0x40d830
    int32_t v73 = *(int32_t *)(v19 + 64); // 0x40d834
    int64_t v74 = *(int64_t *)(v19 + 48); // 0x40d83b
    *(int64_t *)v74 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v71;
    int64_t result = v45; // 0x40d845
    if (v72 != v73) {
        int32_t v75 = *v25; // 0x40d849
        int64_t v76 = (int64_t)(v72 == 60 == v73 < 1) - (int64_t)v75 + (int64_t)v73; // 0x40d865
        int64_t v77 = v76 + v45; // 0x40d868
        *v23 = v77;
        if (((v77 ^ v45) & (v77 ^ v76)) < 0) {
            // 0x40d8d7
            return -1;
        }
        // 0x40d872
        *(int64_t *)(v19 + 160) = v77;
        if (*v20 == 0) {
            // 0x40d8d7
            return -1;
        }
        // 0x40d893
        result = *v23;
    }
    int128_t v78 = __asm_movdqa(*(int128_t *)v21); // 0x40d898
    int128_t v79 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x40d89e
    int128_t v80 = __asm_movdqa(*(int128_t *)v29); // 0x40d8a4
    __asm_movups(*(int128_t *)v46, v78);
    __asm_movups(*(int128_t *)(v46 + 16), v79);
    __asm_movups(*(int128_t *)(v46 + 32), v80);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x40d8d7
    return result;
}
// Address range: 0x40da50 - 0x40da6c
int64_t function_40da50(int32_t * a1) {
    // 0x40da50
    tzset();
    return function_40d610((int64_t)a1, 0x4019b0, &g62);
}
// Address range: 0x40da70 - 0x40dab5
int64_t function_40da70(int64_t a1) {
    // 0x40da70
    int32_t v1; // 0x40da70
    if (*(char *)(a1 + 8) != 0) {
        // 0x40daa0
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x40da7a
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x40da88
    if (v1 == 0) {
        // 0x40da8a
        tzset();
        result = 1;
    }
    // 0x40da94
    return result;
}
// Address range: 0x40dac0 - 0x40dae9
int64_t function_40dac0(int64_t a1) {
    // 0x40dac0
    if (a1 == 0) {
        // 0x40dae0
        int64_t result; // 0x40dac0
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x40dad0
    int64_t v2 = *v1; // 0x40dad0
    free(v1);
    while (v2 != 0) {
        // 0x40dad0
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x40dae0
    return &g73;
}
// Address range: 0x40daf0 - 0x40db31
int64_t function_40daf0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40dafd
    int64_t v2 = function_40da70(a1); // 0x40db0b
    int32_t v3 = *v1; // 0x40db14
    if ((char)v2 == 0) {
        // 0x40db16
        v3 = *v1;
    }
    // 0x40db19
    function_40dac0(a1);
    *v1 = v3;
    return v2 & 0xffffffff;
}
// Address range: 0x40db40 - 0x40dbcf
int64_t function_40db40(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x40db40
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x40dbad
        int64_t result = (int64_t)mem; // 0x40dbad
        result2 = result;
        if (mem != NULL) {
            // 0x40dbba
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x40db4c
        uint64_t v1 = (int64_t)len + 1; // 0x40db56
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x40db6a
        int64_t v2 = (int64_t)mem2; // 0x40db6a
        result2 = v2;
        if (mem2 != NULL) {
            // 0x40db77
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x40db83
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x40db9b
    return result2;
}
// Address range: 0x40dbd0 - 0x40dd45
int64_t function_40dbd0(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x40dbde
    uint64_t v2 = *v1; // 0x40dbde
    if (v2 == 0) {
        // 0x40dc81
        return 1;
    }
    int64_t v3; // 0x40dbd0
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x40dbf6
        v3 = v4;
        if (v2 < v4) {
            // 0x40dc81
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x40dc04
    if (*str2 == 0) {
        // 0x40dc78
        *v1 = (int64_t)&g25;
        // 0x40dc81
        return 1;
    }
    int64_t str = a1 + 9; // 0x40dc09
    if (strcmp((char *)str, str2) == 0) {
        // 0x40dc78
        *v1 = str;
        // 0x40dc81
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x40dc27
    int64_t v7; // 0x40dbd0
    int64_t v8; // 0x40dbd0
    int64_t v9; // 0x40dbd0
    int64_t v10; // 0x40dc2c
    if (*str3 == 0) {
        // 0x40dc2c
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x40dcb8
            goto lab_0x40dcb8;
        }
        // 0x40dc39
        if (*(char *)(v5 + 8) == 0) {
            // 0x40dce8
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x40dcf6;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x40dc4b
    char * str5 = (char *)v11;
    int64_t v12; // 0x40dbd0
    int64_t v13; // 0x40dc55
    int64_t str4; // 0x40dc5e
    int32_t strcmp_rc; // 0x40dc6b
    while (*str5 == 0) {
        // 0x40dc55
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x40dc18
            break;
        }
        // 0x40dc5e
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x40dc78
            *v1 = v12;
            // 0x40dc81
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40dc2c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40dcb8
                goto lab_0x40dcb8;
            }
            // 0x40dc39
            if (*(char *)(v5 + 8) == 0) {
                // 0x40dce8
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40dcf6;
            }
        }
        // 0x40dc43
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x40dc78
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x40dc27
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40dc2c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40dcb8
                goto lab_0x40dcb8;
            }
            // 0x40dc39
            if (*(char *)(v5 + 8) == 0) {
                // 0x40dce8
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40dcf6;
            }
        }
        // 0x40dc43
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x40dc55
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x40dc18
                break;
            }
            // 0x40dc5e
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x40dc78
                *v1 = v12;
                // 0x40dc81
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x40dc2c
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x40dcb8
                    goto lab_0x40dcb8;
                }
                // 0x40dc39
                if (*(char *)(v5 + 8) == 0) {
                    // 0x40dce8
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x40dcf6;
                }
            }
            // 0x40dc43
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x40dc78
        *v1 = v11;
    }
    // 0x40dc81
    return 1;
  lab_0x40dcb8:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x40dcc0
    int64_t v15 = v6 - v10; // 0x40dcc7
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x40dcd5
        *__errno_location() = 12;
        // 0x40dc81
        return 0;
    }
    goto lab_0x40dcf6;
  lab_0x40dcf6:
    // 0x40dcf6
    if (v7 + v8 < 119) {
        // 0x40dcff
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x40dc78
        *v1 = v6;
        // 0x40dc81
        return 1;
    }
    int64_t v17 = function_40db40(v2, v2, v9); // 0x40dd23
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x40dc81
        return 0;
    }
    // 0x40dd31
    *(char *)(v17 + 8) = 0;
    // 0x40dc78
    *v1 = v17 + 9;
    // 0x40dc81
    return 1;
}
// Address range: 0x40dd50 - 0x40ddff
int64_t function_40dd50(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x40dd5c
    int64_t v1 = (int64_t)env_val; // 0x40dd5c
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x40dd50
    if (env_val == NULL) {
        // 0x40ddc0
        if (v2 == 0) {
            // 0x40dd8d
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x40dd98
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x40dd8d
                return 1;
            }
        }
    }
    // 0x40dd71
    int64_t v4; // 0x40dd50
    int64_t result = function_40db40(v1, v3, v4); // 0x40dd74
    if (result == 0) {
        // 0x40dd8d
        return 0;
    }
    // 0x40dd81
    if ((char)function_40da70(a1) != 0) {
        // 0x40dd8d
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x40ddd8
    if (result != 1) {
        // 0x40dde9
        function_40dac0(result);
    }
    // 0x40ddf1
    return 0;
}
// Address range: 0x40de00 - 0x40de11
int64_t function_40de00(int64_t a1) {
    // 0x40de00
    if (a1 == 1) {
        // 0x40de10
        int64_t result; // 0x40de00
        return result;
    }
    // 0x40de06
    return function_40dac0(a1);
}
// Address range: 0x40de20 - 0x40dec5
int64_t function_40de20(int64_t a1, int64_t * timep, int64_t * time2) {
    if (a1 == 0) {
        // 0x40deb0
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time2);
    }
    int64_t v1 = function_40dd50(a1); // 0x40de38
    if (v1 == 0) {
        // 0x40de6a
        return 0;
    }
    // 0x40de45
    if (localtime_r((int32_t *)timep, (struct tm *)time2) != NULL) {
        int64_t result = (int64_t)time2;
        if ((char)function_40dbd0(a1, result) != 0) {
            // 0x40de64
            if (v1 == 1 || (char)function_40daf0(v1) != 0) {
                // 0x40de6a
                return result;
            }
            // 0x40de6a
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x40de86
        function_40daf0(v1);
    }
    // 0x40de6a
    return 0;
}
// Address range: 0x40ded0 - 0x40dfec
int64_t function_40ded0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40ded0
    int32_t v1; // 0x40ded0
    int32_t v2 = v1;
    if (a1 == 0) {
        // 0x40dfc8
        return function_40dff0(a2);
    }
    int64_t v3 = function_40dd50(a1); // 0x40dee7
    if (v3 == 0) {
        // 0x40df3e
        return -1;
    }
    int64_t v4 = function_40da50((int32_t *)a2); // 0x40defb
    int64_t timep = v4; // bp-96, 0x40df00
    if (v4 == -1) {
        // 0x40df50
        int32_t time2; // bp-88, 0x40ded0
        if (localtime_r((int32_t *)&timep, (struct tm *)&time2) == NULL) {
            goto lab_0x40df23;
        } else {
            int32_t v5 = *(int32_t *)(a2 + 32); // 0x40df64
            if (v2 >= 0 == v5 > -1 == (v5 == 0 != (v2 == 0))) {
                goto lab_0x40df23;
            } else {
                int32_t v6 = *(int32_t *)(a2 + 16); // 0x40df83
                int32_t v7 = *(int32_t *)(a2 + 20); // 0x40df86
                int32_t v8 = *(int32_t *)(a2 + 12); // 0x40df93
                int32_t v9 = *(int32_t *)(a2 + 8); // 0x40df9c
                int32_t v10 = *(int32_t *)(a2 + 4); // 0x40dfa5
                if ((v7 ^ v1 | v6 ^ v1 | v8 ^ v1 | v9 ^ v1 || v10 ^ v1 || time2 ^ (int32_t)(int64_t)&time2) == 0) {
                    goto lab_0x40df0b;
                } else {
                    goto lab_0x40df23;
                }
            }
        }
    } else {
        goto lab_0x40df0b;
    }
  lab_0x40df0b:
    // 0x40df0b
    if ((char)function_40dbd0(a1, a2) == 0) {
        // 0x40df1a
        timep = -1;
    }
    goto lab_0x40df23;
  lab_0x40df23:
    if (v3 != 1) {
        // 0x40df29
        if ((char)function_40daf0(v3) == 0) {
            // 0x40df3e
            return -1;
        }
    }
    // 0x40df3e
    return timep;
}
// Address range: 0x40dff0 - 0x40e006
int64_t function_40dff0(int64_t a1) {
    // 0x40dff0
    *(int32_t *)(a1 + 32) = 0;
    return function_40d610(a1, 0x401ab0, &g63);
}
// Address range: 0x40e010 - 0x40e0cd
int64_t function_40e010(int64_t stream, int64_t a2, int64_t * a3) {
    int32_t v1 = 2000; // bp-2048, 0x40e030
    int64_t v2; // bp-2040, 0x40e010
    int64_t v3; // 0x40e010
    int64_t v4 = function_40ffa0(&v2, (int64_t *)&v1, a2, (int64_t)a3, v3, v3, 2000, (int64_t)&g73); // 0x40e03c
    if (v4 == 0) {
        // 0x40e0be
        function_40ff90(stream);
        // 0x40e07c
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x40e041
    int64_t * data = (int64_t *)v4; // 0x40e05c
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x40e090
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x40e09a
            free(data);
        }
        // 0x40e07c
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x40e06b
        free(data);
    }
    // 0x40e073
    if (nmemb > -1) {
        // 0x40e07c
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x40e0b3
    *__errno_location() = 75;
    // 0x40e0be
    function_40ff90(stream);
    // 0x40e07c
    return 0xffffffff;
}
// Address range: 0x40e0d0 - 0x40e12d
int64_t function_40e0d0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40e0d7
    int64_t v2; // 0x40e0d0
    int64_t result = function_40c420(a1, v2); // 0x40e0e8
    if ((v2 & 32) != 0) {
        // 0x40e110
        if ((int32_t)result == 0) {
            // 0x40e114
            *__errno_location() = 0;
        }
        // 0x40e10a
        return 0xffffffff;
    }
    // 0x40e0f1
    if ((int32_t)result == 0) {
        // 0x40e10a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40e0f8
    if (v1 == 0) {
        // 0x40e0fa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40e10a
    return result2;
}
// Address range: 0x40e130 - 0x40e18e
int64_t function_40e130(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40e136
    if (locale == NULL) {
        // 0x40e163
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40e136
    bool v2; // 0x40e130
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x40e130
    int64_t v5 = v1; // 0x40e130
    int64_t v6 = 2; // 0x40e155
    unsigned char v7 = *(char *)v5; // 0x40e155
    char v8 = *(char *)v4; // 0x40e155
    char v9 = v8; // 0x40e155
    bool v10 = false; // 0x40e155
    while (v7 == v8) {
        // 0x40e148
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40e161
    int64_t v13 = v1; // 0x40e161
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40e163
        return 0;
    }
    int64_t v14 = 6; // 0x40e161
    unsigned char v15 = *(char *)v13; // 0x40e17d
    char v16 = *(char *)v12; // 0x40e17d
    char v17 = v16; // 0x40e17d
    bool v18 = false; // 0x40e17d
    while (v15 == v16) {
        // 0x40e170
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
// Address range: 0x40e190 - 0x40e6f2
int64_t function_40e190(void) {
    char * v1 = nl_langinfo(14); // 0x40e1a6
    char * v2 = g64; // 0x40e1ab
    char * v3; // 0x40e190
    int64_t v4; // 0x40e190
    int64_t v5; // 0x40e190
    int64_t v6; // 0x40e190
    int64_t v7; // 0x40e190
    int32_t size; // 0x40e190
    int32_t size2; // 0x40e190
    int32_t len; // 0x40e262
    int64_t v8; // 0x40e262
    char * env_val; // 0x40e24d
    if (v2 == NULL) {
        // 0x40e248
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40e2b5;
        } else {
            // 0x40e25a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40e2b5;
            } else {
                // 0x40e25f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40e24d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40e6e5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40e2b5;
                    } else {
                        // 0x40e659
                        size2 = len + 14;
                        goto lab_0x40e27b;
                    }
                } else {
                    goto lab_0x40e27b;
                }
            }
        }
    } else {
        // 0x40e190
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40e1ca;
    }
  lab_0x40e4fc:;
    // 0x40e4fc
    struct _IO_FILE * stream; // 0x40e33b
    int32_t v10 = __uflow(stream); // 0x40e4ff
    int64_t v11; // 0x40e190
    int64_t v12 = v11; // 0x40e509
    int64_t v13; // 0x40e190
    int64_t v14 = v13; // 0x40e509
    int32_t v15 = v10; // 0x40e509
    int64_t v16; // 0x40e190
    int64_t v17 = v16; // 0x40e509
    int64_t v18 = v11; // 0x40e509
    int64_t v19 = v13; // 0x40e509
    int64_t v20 = v16; // 0x40e509
    if (v10 == -1) {
        // break -> 0x40e50f
        goto lab_0x40e50f;
    }
    goto lab_0x40e389;
  lab_0x40e37e:;
    // 0x40e37e
    int64_t v90; // 0x40e190
    int64_t * v32; // 0x40e370
    *v32 = v90 + 1;
    int64_t v89; // 0x40e190
    v12 = v89;
    int64_t v91; // 0x40e190
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40e190
    v17 = v92;
    goto lab_0x40e389;
  lab_0x40e389:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40e190
    int32_t v25; // bp-120, 0x40e190
    int32_t v26; // bp-184, 0x40e190
    int64_t v27; // 0x40e33b
    int64_t v28; // 0x40e358
    int64_t v29; // 0x40e35d
    int64_t * v30; // 0x40e374
    switch (c) {
        case 32: {
            goto lab_0x40e370;
        }
        case 10: {
            goto lab_0x40e370;
        }
        case 9: {
            goto lab_0x40e370;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40e561
            int32_t v33; // 0x40e190
            char v34; // 0x40e190
            int32_t v35; // 0x40e56e
            if (v31 < *v30) {
                // 0x40e540
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40e56b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40e561
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40e540
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40e56b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40e550
                v36 = v33;
            }
            // 0x40e63f
            if (v36 == -1) {
                // break -> 0x40e50f
                break;
            }
            goto lab_0x40e370;
        }
        default: {
            // 0x40e39f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40e50f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40e3c8
            int64_t v39 = v37 + 4; // 0x40e3ca
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40e3d6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40e3d8
            while (v41 == 0) {
                // 0x40e3c8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40e3f6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40e402
            int64_t v45 = v43 + 4; // 0x40e404
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40e410
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40e412
            while (v47 == 0) {
                // 0x40e402
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40e3ff
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40e428
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40e438
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40e43c
            int64_t v52 = v51 + v48; // 0x40e445
            int64_t * mem; // 0x40e190
            int64_t v53; // 0x40e190
            int64_t v54; // 0x40e190
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40e57b
                int64_t v56 = v55 + 3; // 0x40e587
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40e461
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40e470
            if (mem == NULL) {
                // 0x40e69c
                free((int64_t *)v21);
                function_40c420(v27, v53);
                v24 = (int64_t)&g25;
                goto lab_0x40e314;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40e488
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40e492
            uint32_t v62 = (int32_t)v59; // 0x40e495
            int64_t v63; // 0x40e190
            if (v62 >= 8) {
                // 0x40e5a4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40e5be
                int64_t v66 = v61 - v65; // 0x40e5c2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40e5cd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40e5de
                    int64_t v70 = v69 & 0xffffffff; // 0x40e5de
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40e5db
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40e66f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40e4a7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40e4ab
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
            int64_t v73 = v51 + 1; // 0x40e4bb
            int64_t v74 = v60 - 1; // 0x40e4bf
            uint32_t v75 = (int32_t)v73; // 0x40e4c4
            int64_t v76; // 0x40e190
            if (v75 >= 8) {
                // 0x40e5f2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40e5fc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40e60c
                int64_t v80 = v74 - v79; // 0x40e610
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40e61b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40e62b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40e629
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40e686
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40e68e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40e4d6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40e4da
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40e6d3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40e4ee
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40e37e;
            } else {
                goto lab_0x40e4fc;
            }
        }
    }
  lab_0x40e370:;
    int64_t v93 = v23; // 0x40e190
    int64_t v94 = v22; // 0x40e190
    int64_t v95 = v21; // 0x40e190
    goto lab_0x40e370_2;
  lab_0x40e2b5:;
    int64_t * mem3 = malloc(size); // 0x40e2b5
    int64_t v97 = (int64_t)&g25; // 0x40e2c0
    int64_t v98; // 0x40e190
    int64_t path; // 0x40e190
    if (mem3 == NULL) {
        goto lab_0x40e292;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40e2b5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40e2d6;
    }
  lab_0x40e1ca:;
    int64_t str = v1 == NULL ? (int64_t)&g25 : (int64_t)v1; // 0x40e1bd
    char v100 = *v3; // 0x40e1ca
    int64_t v101; // 0x40e190
    if (v100 == 0) {
        // 0x40e224
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40e190
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40e190
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40e210
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40e217;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40e1e0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40e1ed
        char v107 = *(char *)v106; // 0x40e1f2
        v102 = v107;
        if (v107 == 0) {
            // 0x40e224
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40e1fb
    v104 = v103 + 1;
  lab_0x40e217:
    // 0x40e224
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40e292:;
    char * v108 = (char *)v97;
    g64 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40e1ca;
  lab_0x40e2d6:;
    int64_t v109 = v98 + path; // 0x40e2d6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40e302
    v24 = (int64_t)&g25;
    if (fd >= 0) {
        // 0x40e331
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40e662
            close(fd);
            v24 = (int64_t)&g25;
        } else {
            // 0x40e355
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40e370_2:;
                uint64_t v96 = *v32; // 0x40e370
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40e4fc;
                } else {
                    goto lab_0x40e37e;
                }
            }
          lab_0x40e50f:
            // 0x40e50f
            function_40c420(v27, v19);
            v24 = (int64_t)&g25;
            if (v18 != 0) {
                // 0x40e52e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40e314;
  lab_0x40e27b:;
    int64_t * mem4 = malloc(size2); // 0x40e27b
    v97 = (int64_t)&g25;
    if (mem4 != NULL) {
        // 0x40e321
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40e2d6;
    } else {
        goto lab_0x40e292;
    }
  lab_0x40e314:
    // 0x40e314
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40e292;
}
// Address range: 0x40e700 - 0x40e741
int64_t function_40e700(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40e739
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x40e713
    int64_t v2 = a3; // 0x40e718
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40e720
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40e728
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40e720
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40e739
    return result;
}
// Address range: 0x40e750 - 0x40e791
int64_t function_40e750(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40e789
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x40e763
    int64_t v2 = a3; // 0x40e768
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40e770
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40e778
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40e770
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40e789
    return result;
}
// Address range: 0x40e7a0 - 0x40ff65
int64_t function_40e7a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3 = a2; // bp-1224, 0x40e7c4
    char v4 = *(char *)&v1; // 0x40e7ec
    v3 = a2;
    int64_t result = 0; // 0x40e7f4
    int64_t v5 = v2; // 0x40e7f4
    char v6; // 0x40e7a0
    char v7; // 0x40e7a0
    char v8; // 0x40e7a0
    char v9; // 0x40e7a0
    char v10; // 0x40e7a0
    char v11; // 0x40e7a0
    char v12; // 0x40e7a0
    char v13; // 0x40e7a0
    char v14; // 0x40e7a0
    char v15; // 0x40e7a0
    int64_t v16; // 0x40e7a0
    int64_t v17; // 0x40e7a0
    int64_t v18; // 0x40e7a0
    int64_t v19; // 0x40e7a0
    int64_t v20; // 0x40e7a0
    int64_t v21; // 0x40e7a0
    int64_t v22; // 0x40e7a0
    int64_t v23; // 0x40e7a0
    int64_t v24; // 0x40e7a0
    int64_t v25; // 0x40e7a0
    int64_t v26; // 0x40e7a0
    int64_t v27; // 0x40e7a0
    int64_t v28; // 0x40e7a0
    int64_t v29; // 0x40e7a0
    char v30; // 0x40e7a0
    int64_t v31; // 0x40e7a0
    int64_t v32; // 0x40e7a0
    int64_t v33; // 0x40e7a0
    int64_t v34; // 0x40e7a0
    int64_t v35; // 0x40e7a0
    int64_t v36; // 0x40e7a0
    int64_t v37; // 0x40e7a0
    int64_t v38; // 0x40e7a0
    char * v39; // 0x40e7a0
    int64_t v40; // 0x40e7a0
    char * v41; // 0x40e7a0
    int64_t v42; // 0x40e7a0
    int64_t * str; // 0x40e7a0
    char * v43; // 0x40e7a0
    int64_t * v44; // 0x40e7a0
    int64_t format; // 0x40e7a0
    int16_t * v45; // 0x40e7a0
    int64_t * v46; // 0x40e7a0
    int32_t * v47; // 0x40e7a0
    int32_t * v48; // 0x40e7a0
    int64_t v49; // 0x40e7b5
    int64_t * v50; // 0x40e7a0
    int64_t * v51; // 0x40e7a0
    int64_t * v52; // 0x40e7a0
    int64_t * v53; // 0x40e7a0
    int64_t * v54; // 0x40e7a0
    int64_t * v55; // 0x40e7a0
    int32_t * v56; // 0x40e7a0
    int64_t v57; // 0x40e7a0
    char * v58; // 0x40e7a0
    int64_t * v59; // 0x40e7a0
    int32_t * v60; // 0x40e7a0
    int64_t * v61; // 0x40e7a0
    int64_t * v62; // 0x40e7a0
    int64_t * tm; // 0x40e7a0
    int64_t v63; // 0x40e7a0
    int32_t * v64; // 0x40e7a0
    int64_t * v65; // 0x40e7a0
    int64_t str2; // 0x40e7a0
    if (v4 != 0) {
        // 0x40e80a
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
          lab_0x40e80a:
            // 0x40e80a
            v23 = v22;
            v20 = v19;
            int64_t v70 = v33;
            char v71 = v30;
            char v72 = v7;
            char v73 = v6;
            if (v71 == 37) {
                char v74 = v73; // 0x40e894
                char v75 = v72; // 0x40e894
                int64_t v76 = v70; // 0x40e894
                int64_t v77 = 0; // 0x40e894
                int64_t v78 = (int64_t)*(char *)(v49 + 43); // 0x40e894
                int64_t v79 = 0; // 0x40e894
                int64_t v80; // 0x40e7a0
                while (true) {
                  lab_0x40e898_2:
                    // 0x40e898
                    v16 = v78;
                    v10 = v74;
                    v11 = v75;
                    v34 = v76;
                    v26 = v77;
                    v17 = v79;
                    while (true) {
                      lab_0x40e898:;
                        int64_t v81 = v26;
                        char v82 = v11;
                        char v83 = v10;
                        int64_t v84 = v34 + 1; // 0x40e898
                        char v85 = *(char *)v84; // 0x40e89c
                        v14 = v83;
                        v15 = v82;
                        v31 = 48;
                        v36 = v84;
                        v28 = v81;
                        if (v85 == 48) {
                            goto lab_0x40e8c8;
                        } else {
                            // 0x40e8a8
                            v18 = v17;
                            v27 = v81;
                            v35 = v84;
                            v80 = v85;
                            v13 = v82;
                            v12 = v83;
                            while (v12 <= v13) {
                                if (v80 != 35) {
                                    // 0x40e8d0
                                    v14 = v12;
                                    v15 = v13;
                                    v31 = v80;
                                    v36 = v35;
                                    v28 = v27;
                                    if ((char)v80 == 45) {
                                        goto lab_0x40e8c8;
                                    } else {
                                        int64_t v86 = v80 & 0xffffffff;
                                        v38 = v86;
                                        v37 = v35;
                                        v32 = 0xffffffff;
                                        v29 = v86;
                                        if ((int32_t)v80 < 58) {
                                            goto lab_0x40e931;
                                        } else {
                                            goto lab_0x40e8e8_2;
                                        }
                                    }
                                }
                                int64_t v87 = v35 + 1; // 0x40e8ae
                                char v88 = *(char *)v87; // 0x40e8b2
                                int64_t v89 = v88; // 0x40e8b2
                                v14 = v88;
                                v15 = 48;
                                v31 = v89;
                                v36 = v87;
                                v28 = 1;
                                if (v88 == 48) {
                                    goto lab_0x40e8c8;
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
                                // 0x40e920
                                v14 = v12;
                                v15 = v13;
                                v31 = v80;
                                v36 = v35;
                                v28 = v27;
                                if (v90 != 95) {
                                    // break (via goto) -> 0x40e924
                                    goto lab_0x40e924;
                                }
                                goto lab_0x40e8c8;
                            } else {
                                goto lab_0x40e898_2;
                            }
                        }
                    }
                }
              lab_0x40e924:;
                int64_t v91 = v80 & 0xffffffff;
                v38 = v91;
                v37 = v35;
                v32 = 0xffffffff;
                v29 = v91;
                if ((int32_t)v80 < 58) {
                    goto lab_0x40e931;
                } else {
                    goto lab_0x40e8e8_2;
                }
            } else {
                int64_t v92 = v3 - v20; // 0x40e812
                v1 = v92;
                if (v92 < 2) {
                    // break -> 0x40e853
                    break;
                }
                int64_t v93 = 0; // 0x40e81e
                if (v23 != 0) {
                    // 0x40e820
                    *(char *)v23 = v71;
                    v93 = v23 + 1;
                }
                // 0x40e827
                v8 = v73;
                v9 = v72;
                v25 = v70;
                v21 = v20 + 1;
                v24 = v93;
                goto lab_0x40e82e;
            }
        }
      lab_0x40e853_11:
        // 0x40e853
        return 0;
    }
    goto lab_0x40e83b_2;
  lab_0x40e8c8:
    // 0x40e8c8
    v10 = v14;
    v11 = v15;
    v34 = v36;
    v26 = v28;
    v17 = v31 & 0xffffffff;
    goto lab_0x40e898;
  lab_0x40e97e:;
    // 0x40e97e
    int64_t v94; // 0x40e93b
    v38 = v94;
    int64_t v95; // 0x40e933
    v37 = v95;
    v32 = 0x7fffffff;
    v29 = v94;
    int64_t v96; // 0x40e93d
    if ((int32_t)v96 >= 10) {
        // break -> 0x40e8e8
        goto lab_0x40e8e8_2;
    }
    // 0x40e983
    int64_t v97; // 0x40e7a0
    int64_t v98 = v97 + 2; // 0x40e983
    int64_t v99 = (int64_t)*(char *)v98; // 0x40e983
    int64_t v100 = v99 + 0xffffffd0 & 0xffffffff; // 0x40e992
    v1 = v100;
    int64_t v101 = v100; // 0x40e995
    int64_t v102 = v99; // 0x40e995
    int64_t v103 = v99 & 0xffffffff; // 0x40e995
    int64_t v104 = v98; // 0x40e995
    int64_t v105 = 0x7fffffff; // 0x40e995
    goto lab_0x40e95a;
  lab_0x40e95a:;
    int64_t v106 = v105;
    int64_t v107 = v104;
    int64_t v108 = v107; // 0x40e95d
    int64_t v109 = v106; // 0x40e95d
    if ((int32_t)v101 >= 10) {
        // 0x40e95f
        v38 = v103;
        v37 = v107;
        v32 = v106;
        v29 = v102 & 0xffffffff;
        goto lab_0x40e8e8_2;
    }
    goto lab_0x40e933;
  lab_0x40e931:
    // 0x40e931
    v108 = v35;
    v109 = 0;
    while (true) {
      lab_0x40e933:;
        int64_t v110 = v109;
        v97 = v108;
        v95 = v97 + 1;
        int64_t v111 = (int64_t)*(char *)v95; // 0x40e933
        v94 = v111 & 0xffffffff;
        v96 = v111 + 0xffffffd0;
        int64_t v112 = v96 & 0xffffffff; // 0x40e93d
        v1 = v112;
        int32_t v113 = v110; // 0x40e940
        if (v113 > 0xccccccc) {
            goto lab_0x40e97e;
        } else {
            char v114 = *(char *)v97; // 0x40e948
            if (v113 != 0xccccccc || v114 < 56) {
                // 0x40e94d
                v101 = v112;
                v102 = v111;
                v103 = v94;
                v104 = v95;
                v105 = 10 * v110 + 0xffffffd0 + (int64_t)v114 & 0xffffffff;
                goto lab_0x40e95a;
            } else {
                goto lab_0x40e97e;
            }
        }
    }
    goto lab_0x40e8e8_2;
  lab_0x40e8e8_2:;
    int64_t v115 = v32;
    int64_t v116 = v37;
    int64_t v117 = v38; // 0x40e7a0
    int64_t v118 = v116; // 0x40e7a0
    int64_t v119 = 0; // 0x40e7a0
    int64_t v120; // 0x40e7a0
    switch ((char)v120) {
        case 69: {
        }
        case 79: {
            int64_t v121 = v116 + 1; // 0x40e968
            v117 = (int64_t)*(char *)v121;
            v118 = v121;
            v119 = v29;
            // break -> 0x40e8fe
            break;
        }
    }
    int64_t v122 = v119;
    int64_t v123 = v118;
    int64_t v124 = v117;
    g68 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v124; // 0x40e901
    int64_t v127 = v16; // 0x40e901
    int64_t v128 = 0; // 0x40e901
    int64_t v129 = 1; // 0x40e901
    int64_t v130 = v123; // 0x40e901
    int64_t v131 = v16; // 0x40e901
    int64_t v132 = v123; // 0x40e901
    int64_t v133 = 0; // 0x40e901
    int64_t v134; // 0x40e7a0
    int64_t v135; // 0x40e7a0
    int64_t v136; // 0x40e7a0
    int64_t v137; // 0x40e7a0
    int64_t v138; // 0x40e7a0
    int64_t v139; // 0x40e7a0
    int64_t v140; // 0x40e7a0
    int64_t v141; // 0x40e7a0
    int64_t v142; // 0x40e7a0
    int64_t v143; // 0x40e7a0
    int64_t v144; // 0x40e7a0
    int64_t v145; // 0x40e7a0
    int64_t v146; // 0x40e7a0
    int64_t v147; // 0x40e7a0
    int64_t v148; // 0x40e7a0
    int64_t v149; // 0x40e7a0
    int64_t v150; // 0x40e7a0
    int64_t v151; // 0x40e7a0
    int64_t v152; // 0x40e7a0
    int64_t v153; // 0x40e7a0
    int64_t v154; // 0x40e7a0
    int64_t v155; // 0x40e7a0
    int64_t v156; // 0x40e7a0
    int64_t v157; // 0x40e7a0
    int64_t v158; // 0x40e7a0
    int64_t v159; // 0x40e7a0
    int64_t v160; // 0x40e7a0
    int64_t v161; // 0x40e7a0
    int64_t v162; // 0x40e7a0
    int64_t v163; // 0x40e7a0
    int64_t v164; // 0x40e7a0
    int64_t v165; // 0x40e7a0
    int64_t v166; // 0x40e7a0
    int64_t v167; // 0x40e7a0
    int64_t v168; // 0x40e7a0
    int64_t v169; // 0x40e7a0
    int64_t v170; // 0x40e7a0
    int64_t v171; // 0x40e7a0
    int64_t v172; // 0x40e7a0
    int64_t v173; // 0x40e7a0
    int64_t v174; // 0x40e7a0
    int64_t v175; // 0x40e7a0
    int64_t v176; // 0x40e7a0
    int64_t v177; // 0x40e7a0
    int64_t v178; // 0x40e7a0
    int64_t v179; // 0x40e7a0
    int64_t v180; // 0x40e7a0
    int64_t v181; // 0x40e7a0
    int64_t v182; // 0x40e7a0
    int64_t v183; // 0x40e7a0
    int64_t v184; // 0x40e7a0
    int64_t v185; // 0x40e7a0
    int32_t v186; // 0x40e7a0
    switch (v125) {
        case 0: {
            // 0x40f883
            v177 = v123 - 1;
            goto lab_0x40f777;
        }
        case 37: {
            int64_t v187 = v3 - v20; // 0x40f81e
            v1 = v187;
            int32_t v188 = v115; // 0x40f821
            int64_t v189 = 0x100000000 * v115 >> 32;
            int64_t v190 = v188 >= 0 ? v189 : 0; // 0x40f826
            int64_t v191 = v190 != 0 ? v190 : 1; // 0x40f82b
            v134 = v187;
            v162 = v190;
            v176 = 1;
            v160 = v123;
            v161 = v123;
            v142 = v16;
            v152 = v191;
            if ((int32_t)v122 != 0) {
                goto lab_0x40f623;
            } else {
                // 0x40f838
                if (v191 >= v187) {
                    // break -> 0x40e853
                    break;
                }
                // 0x40f841
                v155 = v191;
                v156 = 0;
                if (v23 != 0) {
                    int64_t v192 = v124; // 0x40f84d
                    int64_t v193 = v23; // 0x40f84d
                    if (v188 >= 2) {
                        int64_t v194 = v189 - 1; // 0x40f852
                        v1 = v194;
                        int64_t v195 = v194 + v23; // 0x40f856
                        int64_t * v196 = (int64_t *)v23;
                        int32_t v197 = v194;
                        if (v18 == 48) {
                            // 0x40fee6
                            memset(v196, 48, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        } else {
                            // 0x40f864
                            memset(v196, 32, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        }
                    }
                    // 0x40f877
                    *(char *)v193 = (char)v192;
                    v155 = v191;
                    v156 = v193 + 1;
                }
                goto lab_0x40f1c6;
            }
        }
        case 58: {
            int64_t v198 = v123 + 1; // 0x40f8df
            char v199 = *(char *)v198; // 0x40f8df
            v1 = v198;
            int64_t v200 = v198; // 0x40f8ef
            char v201 = v199; // 0x40f8ef
            int64_t v202 = 1; // 0x40f8ef
            if (v199 == 58) {
                int64_t v203 = 2; // 0x40f917
                int64_t v204 = v203 + v123; // 0x40f91b
                char v205 = *(char *)v204; // 0x40f91b
                v1 = v204;
                v200 = v204;
                v201 = v205;
                v202 = v203;
                int64_t v206 = v203; // 0x40f926
                while (v205 == 58) {
                    // 0x40f917
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
            // 0x40f8f1
            v130 = v123;
            v131 = v16;
            v132 = v200;
            v133 = v202;
            if (v201 != 122) {
                goto lab_0x40f5e8;
            } else {
                goto lab_0x40f6c0;
            }
        }
        case 65: {
            goto lab_0x40e9b0;
        }
        case 66: {
            goto lab_0x40e9b0;
        }
        case 67: {
            // 0x40f513
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40ef52;
            } else {
                // 0x40f51d
                *v41 = 0;
                int32_t v207 = *(int32_t *)(*tm + 20); // 0x40f532
                int32_t v208 = v207 / 100; // 0x40f543
                int32_t v209 = v208 + 19; // 0x40f547
                int32_t v210 = v207 + 1900; // 0x40f55b
                v171 = v123;
                v168 = v115;
                v182 = v209 - (int32_t)(-100 * v208 + v207 < 0 == v209 >= 0 == (v209 != 0));
                v178 = 0;
                v157 = v210 < 0 != ((v210 ^ v207) & (v207 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40ef3f;
            }
        }
        case 68: {
            // 0x40eca7
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40f5e8;
            } else {
                // 0x40ecb0
                *v44 = (int64_t)"%m/%d/%y";
                goto lab_0x40ecb9;
            }
        }
        case 70: {
            // 0x40eda9
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40f5e8;
            } else {
                // 0x40edb2
                *v44 = (int64_t)"%Y-%m-%d";
                goto lab_0x40ecb9;
            }
        }
        case 71: {
            goto lab_0x40edc0;
        }
        case 72: {
            // 0x40f052
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f05c
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 8);
                v138 = 2;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 73: {
            // 0x40f06f
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f079
                v167 = v115;
                v181 = (int64_t)*(int32_t *)v42;
                v138 = 2;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 77: {
            // 0x40f088
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f092
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 4);
                v138 = 2;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 78: {
            // 0x40f0a5
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                uint32_t v211 = (int32_t)v115; // 0x40f0af
                if (v211 != -1) {
                    int64_t v212 = (int64_t)*v47;
                    int64_t v213 = v212; // 0x40fd41
                    int64_t v214 = v115; // 0x40fd41
                    int64_t v215 = v212; // 0x40fd41
                    if (v211 <= 8) {
                        int64_t v216 = v213;
                        int64_t v217 = (v214 & 0xffffffff) + 1; // 0x40fd65
                        int64_t v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31); // 0x40fd70
                        v214 = v217;
                        v215 = v218;
                        while ((int32_t)v217 != 9) {
                            // 0x40fd60
                            v216 = v218;
                            v217 = (v214 & 0xffffffff) + 1;
                            v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31);
                            v214 = v217;
                            v215 = v218;
                        }
                    }
                    // 0x40fd77
                    v167 = v115;
                    v181 = v215;
                    v138 = v115 & 0xffffffff;
                    v148 = v18;
                } else {
                    // 0x40f0b8
                    v167 = 9;
                    v181 = (int64_t)*v47;
                    v138 = 9;
                    v148 = v18;
                }
                goto lab_0x40ef30;
            }
        }
        case 80: {
            goto lab_0x40f0d5;
        }
        case 82: {
            // 0x40f044
            *v44 = (int64_t)"%H:%M";
            goto lab_0x40ecb9;
        }
        case 83: {
            // 0x40f4c0
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f4ca
                v167 = v115;
                v181 = (int64_t)*(int32_t *)*tm;
                v138 = 2;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 84: {
            // 0x40f909
            *v44 = (int64_t)"%H:%M:%S";
            goto lab_0x40ecb9;
        }
        case 85: {
            // 0x40f4dc
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                int64_t v219 = *tm; // 0x40f4e6
                v186 = *(int32_t *)(v219 + 28) + 7 - *(int32_t *)(v219 + 24);
                goto lab_0x40f4fd;
            }
        }
        case 86: {
            goto lab_0x40edc0;
        }
        case 87: {
            // 0x40f56e
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                int64_t v220 = *tm; // 0x40f574
                int32_t v221 = *(int32_t *)(v220 + 24); // 0x40f57e
                int32_t v222 = v221 + 6; // 0x40f582
                *v64 = v221;
                int32_t v223 = *(int32_t *)(v220 + 28); // 0x40f5a5
                v186 = 1 - v221 + v223 + 7 * ((v222 + (int32_t)(-0x6db6db6d * (int64_t)v222 / 0x100000000) >> 2) - (v222 >> 31));
                goto lab_0x40f4fd;
            }
        }
        case 88: {
            goto lab_0x40eaf0;
        }
        case 89: {
            // 0x40f46d
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            v130 = v123;
            v131 = v16;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x40ef52;
                }
                case 79: {
                    goto lab_0x40f5e8;
                }
                default: {
                    // 0x40f481
                    *v41 = 0;
                    int32_t v224 = *(int32_t *)(*tm + 20); // 0x40f491
                    int32_t v225 = v224 + 1900; // 0x40f494
                    v174 = v123;
                    v164 = v115;
                    v185 = v225;
                    v180 = 0;
                    v159 = v225 < 0 != ((v225 ^ v224) & (v224 ^ -0x80000000)) < 0;
                    v136 = 4;
                    v145 = v18;
                    goto lab_0x40f4b0;
                }
            }
        }
        case 90: {
            char v226 = v27; // 0x40ef74
            *v43 = v226;
            *v39 = v226 != 0 ? 0 : (char)v16;
            int32_t len = strlen((char *)*str); // 0x40ef8f
            uint64_t v227 = (int64_t)len; // 0x40ef8f
            int64_t v228 = 0x100000000 * v115 >> 32;
            uint64_t v229 = (int32_t)v115 >= 0 ? v228 : 0; // 0x40efa5
            int64_t v230 = v229 <= v227 ? v227 : v229; // 0x40efad
            int64_t v231 = v3 - v20; // 0x40efb1
            v1 = v231;
            *v44 = v230;
            if (v231 <= v230) {
                // break -> 0x40e853
                break;
            }
            int64_t v232 = v230; // 0x40efc5
            int64_t v233 = 0; // 0x40efc5
            if (v23 != 0) {
                char v234 = *v39; // 0x40efca
                char v235 = *v43; // 0x40efd0
                char v236 = v235; // 0x40efd6
                char v237 = v234; // 0x40efd6
                int64_t v238 = v23; // 0x40efd6
                if (v229 > v227) {
                    int64_t v239 = v228 - v227; // 0x40efdb
                    v1 = v239;
                    int64_t v240 = v239 + v23; // 0x40efde
                    if (v18 == 48) {
                        // 0x40fefe
                        memset((int64_t *)v23, 48, (int32_t)v239);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    } else {
                        // 0x40efec
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
                int64_t v242 = *str; // 0x40f015
                if (v236 != 0) {
                    // 0x40fe3c
                    function_40e700(v241, v242, v227);
                } else {
                    // 0x40f026
                    if (v237 == 0) {
                        // 0x40fe32
                        memcpy((int64_t *)v241, (int64_t *)v242, len);
                    } else {
                        // 0x40f02f
                        function_40e750(v241, v242, v227);
                    }
                }
                // 0x40f034
                v232 = *v44;
                v233 = v241 + v227;
            }
            // 0x40f037
            v8 = v12;
            v9 = v13;
            v25 = v123;
            v21 = v232 + v20;
            v24 = v233;
            goto lab_0x40e82e;
        }
        case 97: {
            goto lab_0x40e9b0;
        }
        case 98: {
            goto lab_0x40f5d1;
        }
        case 99: {
            goto lab_0x40eaf0;
        }
        case 100: {
            // 0x40f7ad
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f7b7
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 12);
                v138 = 2;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 101: {
            // 0x40f7ca
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f7d4
                v183 = *tm + 12;
                goto lab_0x40f101;
            }
        }
        case 103: {
            goto lab_0x40edc0;
        }
        case 104: {
            goto lab_0x40f5d1;
        }
        case 106: {
            // 0x40f7e1
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f7eb
                *v41 = 0;
                int32_t v243 = *(int32_t *)(*tm + 28); // 0x40f7fb
                int32_t v244 = v243 + 1; // 0x40f7fe
                v171 = v123;
                v168 = v115;
                v182 = v244;
                v178 = 0;
                v157 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v139 = 3;
                v149 = v18;
                goto lab_0x40ef3f;
            }
        }
        case 107: {
            // 0x40f0ef
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f0f9
                v183 = *tm + 8;
                goto lab_0x40f101;
            }
        }
        case 108: {
            // 0x40f126
            v183 = v42;
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                goto lab_0x40f101;
            }
        }
        case 109: {
            // 0x40f136
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f140
                *v41 = 0;
                int32_t v245 = *(int32_t *)(*tm + 16); // 0x40f150
                int32_t v246 = v245 + 1; // 0x40f153
                v171 = v123;
                v168 = v115;
                v182 = v246;
                v178 = 0;
                v157 = v246 < 0 != (v246 & (v245 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40ef3f;
            }
        }
        case 110: {
            int32_t v247 = v115; // 0x40f164
            int64_t v248 = 0x100000000 * v115 >> 32;
            int64_t v249 = v247 >= 0 ? v248 : 0; // 0x40f175
            int64_t v250 = v249 == 0 ? 1 : v249; // 0x40f17b
            if (v3 - v20 <= v250) {
                // break -> 0x40e853
                break;
            }
            // 0x40f18f
            v155 = v250;
            v156 = 0;
            if (v23 != 0) {
                int64_t v251 = v23; // 0x40f197
                if (v247 >= 2) {
                    int64_t v252 = v248 - 1; // 0x40f19c
                    v1 = v252;
                    int64_t v253 = v252 + v23; // 0x40f1a0
                    int64_t * v254 = (int64_t *)v23;
                    int32_t v255 = v252;
                    if (v18 == 48) {
                        // 0x40fe8b
                        memset(v254, 48, v255);
                        v251 = v253;
                    } else {
                        // 0x40f1ae
                        memset(v254, 32, v255);
                        v251 = v253;
                    }
                }
                // 0x40f1be
                *(char *)v251 = 10;
                v155 = v250;
                v156 = v251 + 1;
            }
            goto lab_0x40f1c6;
        }
        case 112: {
            // 0x40f901
            v129 = 0;
            goto lab_0x40f0d5;
        }
        case 113: {
            // 0x40f1d1
            v172 = v123;
            v169 = v115;
            v140 = 1;
            v150 = v18;
            if ((int32_t)v122 == 79) {
                goto lab_0x40ef52;
            } else {
                // 0x40f1e9
                *v41 = 0;
                v173 = v123;
                v163 = v115;
                v184 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v179 = 0;
                v158 = 0;
                v141 = 1;
                v151 = v18;
                goto lab_0x40f200;
            }
        }
        case 114: {
            goto lab_0x40eafd;
        }
        case 115: {
            int64_t v256 = *tm; // 0x40eb1d
            *v39 = (char)v16;
            int128_t v257 = __asm_movdqu(*(int128_t *)(v256 + 32)); // 0x40eb3f
            int128_t v258 = __asm_movdqu(*(int128_t *)v256); // 0x40eb44
            int128_t v259 = __asm_movdqu(*(int128_t *)(v256 + 16)); // 0x40eb48
            *(int128_t *)str2 = (int128_t)__asm_movaps(v258);
            *(int128_t *)(v49 + 160) = (int128_t)__asm_movaps(v259);
            *(int128_t *)v63 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v49 + 176) = (int128_t)__asm_movaps(v257);
            *(int64_t *)(v49 + 192) = *(int64_t *)(v256 + 48);
            int64_t v260 = function_40ded0(*v65, str2, v1, v124); // 0x40eb76
            int64_t v261 = v260;
            int64_t v262 = v261 >> 63; // 0x40eba8
            int64_t v263 = (v261 >> 63 & -10) + v261; // 0x40ebb5
            int64_t v264 = (v260 < 0 ? -v263 : v263) + 48; // 0x40ebc8
            v1 = v264 & 0xffffffff;
            int64_t v265 = v40 - 1; // 0x40ebcb
            *(char *)v265 = (char)v264;
            int64_t v266 = v265; // 0x40ebd6
            while (v262 != 0) {
                // 0x40eb90
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & -10) + v261;
                v264 = (v260 < 0 ? -v263 : v263) + 48;
                v1 = v264 & 0xffffffff;
                v265 = v266 - 1;
                *(char *)v265 = (char)v264;
                v266 = v265;
            }
            int64_t v267 = (int64_t)*v39; // 0x40eb7b
            int32_t v268 = v115; // 0x40ebd8
            int64_t v269 = v268 >= 0 == (v268 != 0) ? v115 & 0xffffffff : 1; // 0x40ebe0
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
                goto lab_0x40f948;
            } else {
                goto lab_0x40ebed;
            }
        }
        case 116: {
            int32_t v270 = v115; // 0x40f3c4
            int64_t v271 = 0x100000000 * v115 >> 32;
            int64_t v272 = v270 >= 0 ? v271 : 0; // 0x40f3d5
            int64_t v273 = v272 == 0 ? 1 : v272; // 0x40f3db
            if (v3 - v20 <= v273) {
                // break -> 0x40e853
                break;
            }
            // 0x40f3ef
            v155 = v273;
            v156 = 0;
            if (v23 != 0) {
                int64_t v274 = v23; // 0x40f3fb
                if (v270 >= 2) {
                    int64_t v275 = v271 - 1; // 0x40f400
                    v1 = v275;
                    int64_t v276 = v275 + v23; // 0x40f404
                    int64_t * v277 = (int64_t *)v23;
                    int32_t v278 = v275;
                    if (v18 == 48) {
                        // 0x40fea0
                        memset(v277, 48, v278);
                        v274 = v276;
                    } else {
                        // 0x40f412
                        memset(v277, 32, v278);
                        v274 = v276;
                    }
                }
                // 0x40f422
                *(char *)v274 = 9;
                v155 = v273;
                v156 = v274 + 1;
            }
            goto lab_0x40f1c6;
        }
        case 117: {
            int32_t v279 = *(int32_t *)(*tm + 24); // 0x40f43f
            int32_t v280 = v279 + 6; // 0x40f442
            *v64 = v279;
            v167 = v115;
            v181 = v279 + 7 + -7 * ((v280 + (int32_t)(-0x6db6db6d * (int64_t)v280 / 0x100000000) >> 2) - (v280 >> 31));
            v138 = 1;
            v148 = v18;
            goto lab_0x40ef30;
        }
        case 119: {
            // 0x40f5b8
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40f5e8;
            } else {
                // 0x40f5be
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 24);
                v138 = 1;
                v148 = v18;
                goto lab_0x40ef30;
            }
        }
        case 120: {
            goto lab_0x40eaf0;
        }
        case 121: {
            // 0x40f890
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40ef52;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x40f8aa
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x40f8c2
                v167 = v115;
                v181 = v283;
                v138 = 2;
                v148 = v18;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x40f8d1
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x40f8d7
                    v167 = v115;
                    v181 = v285 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
                goto lab_0x40ef30;
            }
        }
        case 122: {
            goto lab_0x40f6c0;
        }
        default: {
            goto lab_0x40f5e8;
        }
    }
  lab_0x40e82e:
    // 0x40e82e
    v5 = v24;
    result = v21;
    int64_t v286 = v25 + 1; // 0x40e82e
    char v287 = *(char *)v286; // 0x40e82e
    v6 = v8;
    v7 = v9;
    v30 = v287;
    v33 = v286;
    v19 = result;
    v22 = v5;
    if (v287 == 0) {
        // 0x40e83b
        goto lab_0x40e83b_2;
    }
    goto lab_0x40e80a;
  lab_0x40e9b0:
    // 0x40e9b0
    v130 = v123;
    v131 = v16;
    int64_t v288; // 0x40e7a0
    if ((int32_t)v122 != 0) {
        goto lab_0x40f5e8;
    } else {
        // 0x40e9b9
        v288 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff;
        goto lab_0x40e9c0;
    }
  lab_0x40edc0:
    // 0x40edc0
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 69) {
        goto lab_0x40f5e8;
    } else {
        int64_t v289 = *tm; // 0x40edca
        int32_t v290 = *(int32_t *)(v289 + 20); // 0x40edcf
        uint32_t v291 = *(int32_t *)(v289 + 28); // 0x40edd2
        uint32_t v292 = *(int32_t *)(v289 + 24); // 0x40edd6
        *v64 = v290;
        int32_t v293 = v290 - 100 + (v290 >> 31 & 400); // 0x40eded
        int32_t v294 = v291 - v292; // 0x40edf4
        int32_t v295 = v294 + 382; // 0x40edf7
        int32_t v296 = v291 - 379 - v294 + 7 * ((v295 + (int32_t)(-0x6db6db6d * (int64_t)v295 / 0x100000000) >> 2) - (v295 >> 31)); // 0x40ee1e
        int32_t v297; // 0x40e7a0
        int32_t v298; // 0x40eea9
        if (v296 < 0) {
            // 0x40fcb7
            v1 = 365;
            int64_t v299 = 365; // 0x40fcc3
            if ((v293 + 3) % 4 == 0) {
                int32_t v300 = v293 - 1;
                v1 = 366;
                v299 = 366;
                if (v300 % 100 - v300 == 1 - v293) {
                    uint32_t v301 = v300 % 400;
                    int64_t v302 = v301; // 0x40fcee
                    int64_t v303 = v302 + 366 + (v302 ^ 0xffffffff) + (int64_t)(v301 == 0) & 0xffffffff; // 0x40fcf7
                    v1 = v303;
                    v299 = v303;
                }
            }
            int64_t v304 = v299; // 0x40fcfd
            int64_t v305; // 0x40edd2
            int64_t v306 = v304 + v305; // 0x40fcfd
            int64_t v307; // 0x40edd6
            int64_t v308 = v306 - v307 + 382; // 0x40fd11
            v297 = (int32_t)(v306 - v308) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v308 >> 32) / 0x100000000 + v308) >> 2) - ((int32_t)v308 >> 31));
        } else {
            int64_t v309 = 365; // 0x40ee35
            if (v293 % 4 == 0) {
                // 0x40ee37
                v309 = 366;
                if (v293 % 100 == 0) {
                    // 0x40ee5c
                    v309 = v293 == 0 ? 366 : 365;
                }
            }
            int64_t v310 = (int64_t)v291 - v309; // 0x40ee80
            int64_t v311 = v310 - (int64_t)v292 + 382; // 0x40ee87
            v298 = (int32_t)(v310 - v311) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v311 >> 32) / 0x100000000 + v311) >> 2) - ((int32_t)v311 >> 31));
            v297 = v298 >= 0 ? v298 : v296;
        }
        int64_t v312 = (v298 >> 31) + 1;
        if (v125 == 71) {
            uint32_t v313 = *v64; // 0x40fda5
            *v41 = 0;
            int32_t v314 = -1900 - (int32_t)v312; // 0x40fdb9
            int32_t v315 = v313 - v314; // 0x40fdbc
            v171 = v123;
            v168 = v115;
            v182 = v312 + 1900 + (int64_t)v313 & 0xffffffff;
            v178 = 0;
            v157 = v315 < 0 != ((v315 ^ v313) & (v313 ^ v314)) < 0;
            v139 = 4;
            v149 = v18;
            goto lab_0x40ef3f;
        } else {
            if (v125 != 103) {
                int32_t v316 = v297;
                int32_t v317 = v316 < 0 ? 2 : 1; // 0x40fd9a
                v167 = v115;
                v181 = v317 + (v316 + (int32_t)(-0x6db6db6d * (int64_t)v316 / 0x100000000) >> 2);
                v138 = 2;
                v148 = v18;
            } else {
                int32_t v318 = *v64; // 0x40eecf
                int32_t v319 = v312; // 0x40eefa
                int32_t v320 = (v318 % 100 + v319) % 100;
                int64_t v321 = v320; // 0x40ef10
                v167 = v115;
                v181 = v321;
                v138 = 2;
                v148 = v18;
                if (v320 < 0) {
                    int32_t v322 = -1900 - v319; // 0x40ef20
                    int32_t v323 = v318 - v322; // 0x40ef25
                    int64_t v324 = v323 < 0 == ((v323 ^ v318) & (v318 ^ v322)) < 0 ? v321 + 100 : -v321; // 0x40ef28
                    v167 = v115;
                    v181 = v324 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
            }
            goto lab_0x40ef30;
        }
    }
  lab_0x40f0d5:
    // 0x40f0d5
    v126 = 112;
    v127 = (char)v27 != 0 ? 0 : v16;
    v128 = ((char)v27 != 0 ? v27 : v129) & 0xffffffff;
    goto lab_0x40eafd;
  lab_0x40eaf0:
    // 0x40eaf0
    v126 = v124;
    v127 = v16;
    v128 = 0;
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 79) {
        goto lab_0x40f5e8;
    } else {
        goto lab_0x40eafd;
    }
  lab_0x40f5d1:;
    int64_t v660 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff; // 0x40f5d4
    v288 = v660;
    v130 = v123;
    v131 = v660;
    if ((int32_t)v122 == 0) {
        goto lab_0x40e9c0;
    } else {
        goto lab_0x40f5e8;
    }
  lab_0x40eafd:;
    int64_t v325 = v128;
    int64_t v326 = v127;
    int64_t v327 = v126;
    *v45 = 0x2520;
    int64_t v328 = v327; // 0x40eb0a
    int64_t v329 = v123; // 0x40eb0a
    int64_t v330 = v115; // 0x40eb0a
    int64_t v331 = 0; // 0x40eb0a
    int64_t v332 = v326; // 0x40eb0a
    int64_t v333 = v18; // 0x40eb0a
    int64_t v334 = v325; // 0x40eb0a
    int64_t v335; // 0x40e7a0
    int64_t v336; // 0x40e7a0
    int64_t v337; // 0x40e7a0
    int64_t v338; // 0x40e7a0
    int64_t v339; // 0x40e7a0
    int64_t v340; // 0x40e7a0
    int64_t v341; // 0x40e7a0
    int64_t v342; // 0x40e7a0
    if ((int32_t)v122 != 0) {
        goto lab_0x40ef5f;
    } else {
        // 0x40eb10
        v340 = *v46;
        v342 = v327;
        v341 = v115;
        v338 = v123;
        v339 = v122;
        v335 = v326;
        v336 = v18;
        v337 = v325;
        goto lab_0x40e9e0;
    }
  lab_0x40f6c0:;
    int64_t v343 = v132;
    int64_t v344 = *tm; // 0x40f6c0
    v8 = v12;
    v9 = v13;
    v25 = v343;
    v21 = v20;
    v24 = v23;
    int64_t v345; // 0x40e7a0
    uint32_t v346; // 0x40f70e
    uint32_t v347; // 0x40f743
    int32_t v348; // 0x40f747
    if (*(int32_t *)(v344 + 32) < 0) {
        goto lab_0x40e82e;
    } else {
        int64_t v349 = *(int64_t *)(v344 + 40); // 0x40f6d0
        int32_t v350 = v349; // 0x40f6da
        int64_t v351 = 1; // 0x40f6dc
        if (v350 >= 0) {
            // 0x40f6de
            v351 = 0;
            if (v350 == 0) {
                // 0x40f6e6
                v351 = *(char *)*str == 45;
            }
        }
        // 0x40f6f2
        v345 = v351;
        int64_t v352 = 0x100000000 * v349 >> 32; // 0x40f6fe
        int32_t v353 = v350 >> 31; // 0x40f702
        *v48 = v353;
        v346 = ((int32_t)(-0x6e5d4c3b * v352 / 0x100000000) + v350 >> 11) - v353;
        *v64 = v346;
        int32_t v354 = ((int32_t)(-0x77777777 * v352 / 0x100000000 + v349) >> 5) - *v48; // 0x40f720
        v347 = -60 * ((v354 + (int32_t)(-0x77777777 * (int64_t)v354 / 0x100000000) >> 5) - (v354 >> 31)) + v354;
        v348 = -60 * v354 + v350;
        v177 = v343;
        switch (v133) {
            case 1: {
                goto lab_0x40fe16;
            }
            case 0: {
                // 0x40fe46
                *v41 = 1;
                v171 = v343;
                v168 = v115;
                v182 = v347 + 100 * v346;
                v178 = 0;
                v157 = v345;
                v139 = 5;
                v149 = v18;
                goto lab_0x40ef3f;
            }
            case 2: {
                goto lab_0x40fdf2;
            }
            case 3: {
                if (v348 != 0) {
                    goto lab_0x40fdf2;
                } else {
                    if (v347 != 0) {
                        goto lab_0x40fe16;
                    } else {
                        // 0x40fe67
                        *v41 = 1;
                        v171 = v343;
                        v168 = v115;
                        v182 = v346;
                        v178 = v347;
                        v157 = v345;
                        v139 = 3;
                        v149 = v18;
                        goto lab_0x40ef3f;
                    }
                }
            }
            default: {
                goto lab_0x40f777;
            }
        }
    }
  lab_0x40f5e8:;
    int64_t v355 = v130 + 1; // 0x40f5ec
    v1 = v355 & 0xffffffff;
    int64_t v356 = v130 - 1;
    int64_t v357 = v356; // 0x40f5fe
    while (*(char *)v356 != 37) {
        // 0x40f5ef
        v356 = v357 - 1;
        v357 = v356;
    }
    int64_t v358 = 0x100000000 * (v355 - v356) >> 32; // 0x40f609
    int64_t v359 = v3 - v20; // 0x40f60f
    v1 = v359;
    int64_t v360 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40f617
    v134 = v359;
    v162 = v360;
    v176 = v358;
    v160 = v130;
    v161 = v356;
    v142 = v131;
    v152 = v358 >= v360 ? v358 : v360;
    goto lab_0x40f623;
  lab_0x40f623:
    // 0x40f623
    if (v134 <= v152) {
        // break -> 0x40e853
        goto lab_0x40e853_11;
    }
    int64_t v361 = v160;
    int64_t v362 = v361; // 0x40f62f
    int64_t v363 = 0; // 0x40f62f
    if (v23 != 0) {
        int64_t v364 = v142;
        int64_t v365 = v161;
        int64_t v366 = v176;
        int64_t v367 = v366; // 0x40f638
        int64_t v368 = v361; // 0x40f638
        int64_t v369 = v365; // 0x40f638
        int64_t v370 = v364; // 0x40f638
        int64_t v371 = v23; // 0x40f638
        if (v366 < v162) {
            // 0x40f63a
            *v54 = v366;
            int64_t v372 = (0x100000000 * v115 >> 32) - v366; // 0x40f642
            v1 = v372;
            *v55 = v361;
            int64_t v373 = v372 + v23; // 0x40f64a
            *v53 = v365;
            *v41 = (char)v364;
            int64_t * v374 = (int64_t *)v23;
            int32_t v375 = v1;
            if (v18 == 48) {
                // 0x40fbc4
                memset(v374, 48, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            } else {
                // 0x40f662
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
            // 0x40fa0e
            memcpy((int64_t *)v376, (int64_t *)v377, (int32_t)v1);
        } else {
            // 0x40f6a3
            function_40e750(v376, v377, v1);
        }
        // 0x40f6b2
        v362 = *v53;
        v363 = *v44 + v376;
    }
    // 0x40f6b5
    v8 = v12;
    v9 = v13;
    v25 = v362;
    v21 = v152 + v20;
    v24 = v363;
    goto lab_0x40e82e;
  lab_0x40f777:;
    int64_t v378 = v177;
    int64_t v379 = v3 - v20; // 0x40f780
    v1 = v379;
    v130 = v378;
    v131 = v16;
    if (*(char *)v378 != 37) {
        goto lab_0x40f5e8;
    } else {
        int64_t v380 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40f788
        v134 = v379;
        v162 = v380;
        v176 = 1;
        v160 = v378;
        v161 = v378;
        v142 = v16;
        v152 = v380 != 0 ? v380 : 1;
        goto lab_0x40f623;
    }
  lab_0x40ef52:
    // 0x40ef52
    *v45 = 0x2520;
    v328 = v124;
    v329 = v172;
    v330 = v169;
    v331 = v140;
    v332 = v16;
    v333 = v150;
    v334 = 0;
    goto lab_0x40ef5f;
  lab_0x40ecb9:
    // 0x40ecb9
    *v50 = (int64_t)*v47;
    *v51 = *v65;
    int64_t v643 = *v44; // 0x40ece2
    v1 = v643;
    uint64_t v644 = function_40e7a0(0, -1, v643, *tm, v16, *v52); // 0x40ece7
    int64_t v645 = 0x100000000 * v115 >> 32;
    uint64_t v646 = (int32_t)v115 >= 0 ? v645 : 0; // 0x40ed00
    int64_t v647 = v644 >= v646 ? v644 : v646; // 0x40ed08
    int64_t v648 = v3 - v20; // 0x40ed0c
    *v53 = v647;
    if (v648 <= v647) {
        // break -> 0x40e853
        goto lab_0x40e853_11;
    }
    int64_t v649 = v647; // 0x40ed20
    int64_t v650 = 0; // 0x40ed20
    if (v23 != 0) {
        int64_t v651 = v644; // 0x40ed25
        int64_t v652 = v648; // 0x40ed25
        int64_t v653 = v23; // 0x40ed25
        if (v644 < v646) {
            // 0x40ed27
            *v54 = v644;
            int64_t v654 = v645 - v644; // 0x40ed2f
            v1 = v654;
            *v55 = v648;
            int64_t v655 = v654 + v23; // 0x40ed37
            int64_t * v656 = (int64_t *)v23;
            int32_t v657 = v1;
            if (v18 == 48) {
                // 0x40fc98
                memset(v656, 48, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            } else {
                // 0x40ed45
                memset(v656, 32, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            }
        }
        // 0x40ed5f
        *v55 = v651;
        *v50 = (int64_t)*v47;
        *v51 = *v65;
        int64_t v658 = *v44; // 0x40ed86
        v1 = v658;
        function_40e7a0((int32_t)v653, v652, v658, *tm, v16, *v52);
        v649 = *v53;
        v650 = *v55 + v653;
    }
    // 0x40ed9c
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v649 + v20;
    v24 = v650;
    goto lab_0x40e82e;
  lab_0x40e9c0:
    // 0x40e9c0
    *v45 = 0x2520;
    v340 = *v46;
    v342 = v124;
    v341 = v115;
    v338 = v123;
    v339 = 0;
    v335 = v288;
    v336 = v18;
    v337 = 0;
    goto lab_0x40e9e0;
  lab_0x40f101:;
    int64_t v659 = (int64_t)*(int32_t *)v183;
    v167 = v115;
    v181 = v659;
    v138 = 2;
    v148 = v18;
    switch ((int32_t)v18) {
        case 48: {
            goto lab_0x40ef30;
        }
        case 45: {
            goto lab_0x40ef30;
        }
        default: {
            // 0x40f11b
            v167 = v115;
            v181 = v659;
            v138 = 2;
            v148 = 95;
            goto lab_0x40ef30;
        }
    }
  lab_0x40f1c6:
    // 0x40f1c6
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v155 + v20;
    v24 = v156;
    goto lab_0x40e82e;
  lab_0x40ef5f:
    // 0x40ef5f
    *(char *)(v49 + 114) = (char)v122;
    v340 = v49 + 115;
    v342 = v328;
    v341 = v330;
    v338 = v329;
    v339 = v331 & 0xffffffff;
    v335 = v332;
    v336 = v333;
    v337 = v334;
    goto lab_0x40e9e0;
  lab_0x40f948:;
    int64_t v630 = v153;
    int64_t v631 = v143;
    int64_t v632 = v137;
    int64_t v633 = v165;
    int64_t v634 = v175;
    *v41 = 45;
    char v436 = 45; // 0x40f956
    int64_t v437 = v634; // 0x40f956
    int64_t v438 = v633; // 0x40f956
    int64_t v439 = v632; // 0x40f956
    int64_t v440 = v631; // 0x40f956
    int64_t v441 = v146; // 0x40f956
    int64_t v442 = v630; // 0x40f956
    int32_t v429; // 0x40e7a0
    int64_t v433; // 0x40e7a0
    int64_t v434; // 0x40e7a0
    int64_t v435; // 0x40e7a0
    int64_t v432; // 0x40e7a0
    int64_t v431; // 0x40e7a0
    int64_t v430; // 0x40e7a0
    if ((int32_t)v146 != 45) {
        goto lab_0x40f290;
    } else {
        // 0x40f948
        v429 = v633;
        v430 = 45;
        v431 = v634;
        v432 = v633;
        v433 = v632;
        v434 = v631;
        v435 = v630;
        goto lab_0x40f95c;
    }
  lab_0x40ebed:;
    int64_t v524 = v135;
    int64_t v523 = v166;
    int64_t v522 = v40 - v154; // 0x40ebf9
    char v505; // 0x40e7a0
    int64_t v510; // 0x40e7a0
    int64_t v511; // 0x40e7a0
    int64_t v512; // 0x40e7a0
    int64_t v509; // 0x40e7a0
    int64_t v506; // 0x40e7a0
    int64_t v508; // 0x40e7a0
    int64_t v507; // 0x40e7a0
    if ((int32_t)v147 == 45) {
        goto lab_0x40ec14;
    } else {
        int32_t v635 = v524 - v522; // 0x40ec0b
        if (v635 >= 0 == (v635 != 0)) {
            int64_t v636; // 0x40ebfc
            int32_t v637; // 0x40ebff
            if (v637 == 95) {
                // 0x40fb0e
                *v41 = 0;
                v505 = 0;
                v506 = v636;
                int64_t v638; // 0x40e7a0
                v507 = v638;
                v508 = v523;
                int64_t v639; // 0x40ec08
                v509 = v639;
                v510 = v524;
                int64_t v640; // 0x40e7a0
                v511 = v640;
                int64_t v641; // 0x40e7a0
                v512 = v641;
                goto lab_0x40fb13;
            } else {
                int64_t v642 = 0x100000000 * v524 >> 32; // 0x40fddb
                v1 = v642;
                if (v642 >= v636) {
                    // break -> 0x40e853
                    goto lab_0x40e853_11;
                }
                // 0x40fde7
                goto lab_0x40f365;
            }
        } else {
            goto lab_0x40ec14;
        }
    }
  lab_0x40ef30:
    // 0x40ef30
    *v41 = 0;
    v171 = v123;
    v168 = v167;
    v182 = v181;
    v178 = 0;
    v157 = 0;
    v139 = v138;
    v149 = v148;
    goto lab_0x40ef3f;
  lab_0x40ef3f:;
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
    int64_t v603; // 0x40e7a0
    int64_t v604; // 0x40e7a0
    int64_t v605; // 0x40e7a0
    int64_t v606; // 0x40e7a0
    int64_t v607; // 0x40e7a0
    int64_t v608; // 0x40e7a0
    int64_t v609; // 0x40e7a0
    if ((int32_t)v122 != 79) {
        goto lab_0x40f4b0;
    } else {
        // 0x40ef49
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
            goto lab_0x40f4b9;
        } else {
            goto lab_0x40ef52;
        }
    }
  lab_0x40f4fd:;
    int32_t v610 = v186;
    int64_t v611 = -0x6db6db6d * (int64_t)v610 / 0x100000000;
    v1 = v611;
    v167 = v115;
    v181 = (v610 + (int32_t)v611 >> 2) - (v610 >> 31);
    v138 = 2;
    v148 = v18;
    goto lab_0x40ef30;
  lab_0x40f4b0:
    // 0x40f4b0
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
        goto lab_0x40f200;
    } else {
        goto lab_0x40f4b9;
    }
  lab_0x40e9e0:;
    int64_t v381 = v337;
    int64_t v382 = v336;
    int64_t v383 = v341;
    *(char *)v340 = (char)v342;
    v1 = format;
    *(char *)(v340 + 1) = 0;
    *v44 = v338;
    *v56 = (int32_t)v339;
    *v39 = (char)v335;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x40ea0c
    int64_t v384 = *v44; // 0x40ea11
    v8 = v12;
    v9 = v13;
    v25 = v384;
    v21 = v20;
    v24 = v23;
    int64_t v385; // 0x40e7a0
    int64_t v386; // 0x40e7a0
    int64_t v387; // 0x40e7a0
    int64_t v388; // 0x40e7a0
    int64_t v389; // 0x40e7a0
    int64_t v390; // 0x40e7a0
    int64_t v391; // 0x40e7a0
    int64_t v392; // 0x40e7a0
    int64_t v393; // 0x40e7a0
    int64_t v394; // 0x40e7a0
    int64_t v395; // 0x40e7a0
    int64_t v396; // 0x40e7a0
    if (copied_chars == 0) {
        goto lab_0x40e82e;
    } else {
        uint64_t v397 = (int64_t)copied_chars - 1; // 0x40ea1f
        int64_t v398 = 0x100000000 * v383 >> 32;
        uint64_t v399 = (int32_t)v383 >= 0 ? v398 : 0; // 0x40ea31
        int64_t v400 = v397 >= v399 ? v397 : v399; // 0x40ea39
        int64_t v401 = v3 - v20; // 0x40ea3d
        v1 = v401;
        if (v401 <= v400) {
            // break -> 0x40e853
            goto lab_0x40e853_11;
        }
        // 0x40ea49
        v392 = v400;
        v391 = v384;
        v388 = v20;
        v390 = 0;
        if (v23 == 0) {
            goto lab_0x40eae6;
        } else {
            char v402 = *v39; // 0x40ea57
            int64_t v403 = v397; // 0x40ea60
            int64_t v404 = v384; // 0x40ea60
            char v405 = v402; // 0x40ea60
            int64_t v406 = v23; // 0x40ea60
            if (v397 < v399 == *v56 == 0) {
                // 0x40ea67
                *v55 = v397;
                int64_t v407 = v398 - v397; // 0x40ea6f
                v1 = v407;
                *v53 = v384;
                int64_t v408 = v407 + v23; // 0x40ea77
                *v41 = v402;
                int64_t * v409 = (int64_t *)v23;
                int32_t v410 = v1;
                if ((int32_t)v382 == 48) {
                    // 0x40fa36
                    memset(v409, 48, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                } else {
                    // 0x40ea8a
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
                // 0x40fa22
                function_40e700(v411, v57, v1);
                v394 = v400;
                v387 = v20;
                v389 = v411;
                goto lab_0x40eae3;
            } else {
                goto lab_0x40eacb;
            }
        }
    }
  lab_0x40f200:;
    int64_t v412 = v151;
    int64_t v413 = v141;
    int64_t v414 = v163;
    int64_t v415 = v173;
    *v39 = (char)v158;
    int64_t v416 = v184; // 0x40f213
    int64_t v417 = v40 - 1;
    int64_t v418 = v417; // 0x40f220
    if (v179 % 2 != 0) {
        // 0x40f222
        *(char *)v417 = 58;
        v418 = v40 - 2;
    }
    int64_t v419 = v418;
    uint32_t v420 = (int32_t)v179 >> 1; // 0x40f235
    int64_t v421 = 0xcccccccd * v416 / 0x800000000; // 0x40f237
    v1 = v421;
    *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    while (v416 < 10 != (v420 == 0)) {
        // 0x40f25a
        v416 = v1 & 0xffffffff;
        int64_t v422 = v420; // 0x40f25c
        int64_t v423 = v419;
        v417 = v423 - 1;
        v418 = v417;
        if (v422 % 2 != 0) {
            // 0x40f222
            *(char *)v417 = 58;
            v418 = v423 - 2;
        }
        // 0x40f230
        v419 = v418;
        v420 = (int32_t)v422 >> 1;
        v421 = 0xcccccccd * v416 / 0x800000000;
        v1 = v421;
        *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    }
    int32_t v424 = v413; // 0x40f266
    int32_t v425 = v414;
    int32_t v426 = v424 - v425; // 0x40f266
    int64_t v427 = v426 < 0 == ((v426 ^ v424) & (int32_t)(v413 ^ v414)) < 0 ? v413 : v414;
    int64_t v428 = v427 & 0xffffffff; // 0x40f269
    v175 = v415;
    v165 = v414;
    v137 = v428;
    v143 = v16;
    v146 = v412;
    v153 = v419;
    if (*v39 != 0) {
        goto lab_0x40f948;
    } else {
        // 0x40f276
        v170 = v415;
        v166 = v414;
        v135 = v428;
        v144 = v16;
        v147 = v412;
        v154 = v419;
        if (*v41 == 0) {
            goto lab_0x40ebed;
        } else {
            // 0x40f281
            v429 = v425;
            v430 = 43;
            v431 = v415;
            v432 = v414;
            v433 = v428;
            v434 = v16;
            v435 = v419;
            if ((int32_t)v412 == 45) {
                goto lab_0x40f95c;
            } else {
                // 0x40f28b
                *v41 = 43;
                v436 = 43;
                v437 = v415;
                v438 = v414;
                v439 = v428;
                v440 = v16;
                v441 = v412;
                v442 = v419;
                goto lab_0x40f290;
            }
        }
    }
  lab_0x40f290:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    int64_t v448 = v437;
    int64_t v449 = v40 - v443; // 0x40f2a0
    int64_t v450 = (v449 ^ 0xffffffff) + v446; // 0x40f2a3
    uint64_t v451 = v3 - v20; // 0x40f2a6
    int64_t v452; // 0x40e7a0
    int64_t v453; // 0x40e7a0
    int64_t v454; // 0x40e7a0
    int64_t v455; // 0x40e7a0
    int64_t v456; // 0x40e7a0
    int64_t v457; // 0x40e7a0
    int64_t v458; // 0x40e7a0
    int64_t v459; // 0x40e7a0
    int64_t v460; // 0x40e7a0
    int64_t v461; // 0x40e7a0
    int64_t v462; // 0x40e7a0
    int64_t v463; // 0x40e7a0
    int64_t v464; // 0x40e7a0
    int64_t v465; // 0x40e7a0
    int64_t v466; // 0x40e7a0
    int64_t v467; // 0x40e7a0
    int64_t v468; // 0x40e7a0
    int64_t v469; // 0x40e7a0
    int64_t v470; // 0x40e7a0
    int64_t v471; // 0x40e7a0
    int64_t v472; // 0x40e7a0
    int64_t v473; // 0x40e7a0
    int64_t v474; // 0x40e7a0
    int64_t v475; // 0x40e7a0
    int64_t v476; // 0x40e7a0
    int64_t v477; // 0x40f2ea
    if ((int32_t)v450 < 1) {
        int64_t v478 = 0x100000000 * v447 >> 32;
        int64_t v479 = (int32_t)v447 >= 0 ? v478 : 0; // 0x40fa6d
        int64_t v480 = v479 != 0 ? v479 : 1; // 0x40fa73
        if (v480 >= v451) {
            // break -> 0x40e853
            goto lab_0x40e853_11;
        }
        int64_t v481 = v449; // 0x40fa83
        int64_t v482 = v480; // 0x40fa83
        int64_t v483 = v479; // 0x40fa83
        int64_t v484 = v446; // 0x40fa83
        int64_t v485 = v445; // 0x40fa83
        int64_t v486 = 0; // 0x40fa83
        if (v23 != 0) {
            int32_t v487 = v446; // 0x40fa85
            int64_t v488 = v449; // 0x40fa88
            int64_t v489 = v480; // 0x40fa88
            int64_t v490 = v479; // 0x40fa88
            int64_t v491 = v446; // 0x40fa88
            int64_t v492 = v445; // 0x40fa88
            int64_t v493 = v23; // 0x40fa88
            if (v487 == 0 && v479 >= 2) {
                // 0x40fa90
                *v61 = v449;
                int64_t v494 = v478 - 1; // 0x40fa98
                v1 = v494;
                *v62 = v480;
                *v59 = v479;
                *v53 = v494 + v23;
                *v60 = v487;
                *v43 = (char)v445;
                if ((int32_t)v444 == 48) {
                    // 0x40feb5
                    int64_t * v495; // 0x40e7a0
                    int32_t v496; // 0x40e7a0
                    memset(v495, 48, v496);
                    int64_t v497 = *v53; // 0x40fec2
                    unsigned char v498 = *v43; // 0x40fec7
                    uint32_t v499 = *v60; // 0x40fecd
                    int64_t v500 = *v59; // 0x40fed2
                    int64_t v501 = *v62; // 0x40fed7
                    int64_t v502 = *v61; // 0x40fedc
                    v488 = v502;
                    v489 = v501;
                    v490 = v500;
                    v491 = v499;
                    v492 = v498;
                    v493 = v497;
                } else {
                    // 0x40fac3
                    memset((int64_t *)v23, 32, (int32_t)v1);
                    v488 = *v61;
                    v489 = *v62;
                    v490 = *v59;
                    v491 = (int64_t)*v60;
                    v492 = (int64_t)*v43;
                    v493 = *v53;
                }
            }
            // 0x40faef
            *(char *)v493 = *v41;
            v481 = v488;
            v482 = v489;
            v483 = v490;
            v484 = v491;
            v485 = v492;
            v486 = v493 + 1;
        }
        int64_t v503 = v482 + v20; // 0x40fb00
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
        goto lab_0x40ec26;
    } else {
        int32_t v504 = v444; // 0x40f2b2
        v505 = v436;
        v506 = v451;
        v507 = v448;
        v508 = v447;
        v509 = v450;
        v510 = v446;
        v511 = v445;
        v512 = v443;
        if (v504 == 95) {
            goto lab_0x40fb13;
        } else {
            // 0x40f2bc
            if (0x100000000 * v446 >> 32 >= v451) {
                // break -> 0x40e853
                goto lab_0x40e853_11;
            }
            int64_t v513 = 0x100000000 * v447 >> 32;
            int64_t v514 = (int32_t)v447 >= 0 ? v513 : 0; // 0x40f2d7
            v1 = v514;
            uint64_t v515 = v514 != 0 ? v514 : 1; // 0x40f2dd
            if (v515 >= v451) {
                // break -> 0x40e853
                goto lab_0x40e853_11;
            }
            // 0x40f2ea
            v477 = v515 + v20;
            int64_t v516 = 0x100000000 * v450 >> 32; // 0x40f2ed
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
                goto lab_0x40f3b0;
            } else {
                int32_t v517 = v446; // 0x40f2fc
                v474 = v449;
                v470 = v516;
                v454 = v446;
                v455 = v445;
                v464 = v23;
                if (v517 == 0 && v514 >= 2) {
                    // 0x40f307
                    *v59 = v516;
                    int64_t v518 = v513 - 1; // 0x40f30f
                    v1 = v518;
                    *v54 = v449;
                    int64_t v519 = v518 + v23; // 0x40f318
                    *v56 = v517;
                    *v39 = (char)v445;
                    int64_t * v520 = (int64_t *)v23;
                    int32_t v521 = v1;
                    if (v504 == 48) {
                        // 0x40ff1f
                        memset(v520, 48, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    } else {
                        // 0x40f330
                        memset(v520, 32, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    }
                }
                // 0x40f355
                *(char *)v464 = *v41;
                goto lab_0x40f365;
            }
        }
    }
  lab_0x40ec14:
    // 0x40ec14
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
    goto lab_0x40ec26;
  lab_0x40fe16:
    // 0x40fe16
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v347 + 100 * v346;
    v178 = 4;
    v157 = v345;
    v139 = 6;
    v149 = v18;
    goto lab_0x40ef3f;
  lab_0x40fdf2:
    // 0x40fdf2
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v348 + 0x2710 * v346 + 100 * v347;
    v178 = 20;
    v157 = v345;
    v139 = 9;
    v149 = v18;
    goto lab_0x40ef3f;
  lab_0x40f4b9:
    // 0x40f4b9
    v173 = v607;
    v163 = v606;
    v184 = -v609 & 0xffffffff;
    v179 = v608;
    v158 = v605;
    v141 = v603;
    v151 = v604;
    goto lab_0x40f200;
  lab_0x40f95c:;
    int64_t v612 = 0x100000000 * v432 >> 32;
    int64_t v613 = v429 >= 0 ? v612 : 0; // 0x40f972
    uint64_t v614 = v613 != 0 ? v613 : 1; // 0x40f978
    if (v3 - v20 <= v614) {
        // break -> 0x40e853
        goto lab_0x40e853_11;
    }
    int64_t v615 = v434;
    int64_t v616 = v433;
    int64_t v617 = v613; // 0x40f98b
    int64_t v618 = v616; // 0x40f98b
    int64_t v619 = v615; // 0x40f98b
    int64_t v620 = 0; // 0x40f98b
    if (v23 != 0) {
        int64_t v621 = v430;
        int32_t v622 = v616; // 0x40f98d
        int64_t v623 = v621; // 0x40f990
        int64_t v624 = v613; // 0x40f990
        int64_t v625 = v616; // 0x40f990
        int64_t v626 = v615; // 0x40f990
        int64_t v627 = v23; // 0x40f990
        if (v622 == 0 && v613 >= 2) {
            // 0x40f998
            *v58 = (char)v621;
            int64_t v628 = v612 - 1; // 0x40f9a7
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
        // 0x40f9e4
        *(char *)v627 = (char)v623;
        v617 = v624;
        v618 = v625;
        v619 = v626;
        v620 = v627 + 1;
    }
    int64_t v629 = v614 + v20; // 0x40f9ef
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
    goto lab_0x40ec26;
  lab_0x40ec26:;
    uint64_t v525 = v469;
    uint64_t v526 = v476;
    int64_t v527 = v526 >= v525 ? v526 : v525; // 0x40ec2c
    if (v527 >= v472) {
        // break -> 0x40e853
        goto lab_0x40e853_11;
    }
    int64_t v528 = v466;
    int64_t v529 = v462;
    int64_t v530 = v468;
    v392 = v527;
    v391 = v530;
    v388 = v529;
    v390 = 0;
    if (v528 == 0) {
        goto lab_0x40eae6;
    } else {
        int64_t v531 = v457;
        int64_t v532 = v526; // 0x40ec45
        int64_t v533 = v530; // 0x40ec45
        int64_t v534 = v531; // 0x40ec45
        int64_t v535 = v528; // 0x40ec45
        if (v526 < v525 == (int32_t)v453 == 0) {
            // 0x40ec4c
            *v55 = v526;
            int64_t v536 = (0x100000000 * v473 >> 32) - v526; // 0x40ec54
            v1 = v536;
            *v53 = v530;
            *v41 = (char)v531;
            if ((int32_t)v459 == 48) {
                // 0x40fb97
                int64_t * v537; // 0x40e7a0
                int32_t v538; // 0x40e7a0
                memset(v537, 48, v538);
                unsigned char v539 = *v41; // 0x40fba7
                int64_t v540 = *v53; // 0x40fbad
                int64_t v541 = *v55; // 0x40fbb2
                v532 = v541;
                v533 = v540;
                v534 = v539;
                int64_t v542; // 0x40ec5c
                v535 = v542;
            } else {
                // 0x40ec6f
                memset((int64_t *)v528, 32, (int32_t)v1);
                v532 = *v55;
                v533 = *v53;
                v534 = (int64_t)*v41;
                v535 = v528 + v536;
            }
        }
        // 0x40ec8f
        *v53 = v533;
        v1 = v532;
        *v44 = v532;
        v393 = v527;
        v396 = v461;
        v395 = v535;
        v385 = v534;
        v386 = v529;
        goto lab_0x40eacb;
    }
  lab_0x40eae6:
    // 0x40eae6
    v8 = v12;
    v9 = v13;
    v25 = v391;
    v21 = v388 + v392;
    v24 = v390;
    goto lab_0x40e82e;
  lab_0x40fb13:;
    int64_t v543 = v509;
    int64_t v544 = 0x100000000 * v543 >> 32; // 0x40fb13
    if (v544 >= v506) {
        // break -> 0x40e853
        goto lab_0x40e853_11;
    }
    int64_t v545 = v512;
    int64_t v546 = v511;
    int64_t v547 = v510;
    int64_t v548 = v508;
    int64_t v549 = v507;
    char v550 = v505; // 0x40fb22
    int64_t v551 = v543 & 0xffffffff; // 0x40fb22
    int64_t v552 = v547; // 0x40fb22
    int64_t v553 = v546; // 0x40fb22
    int64_t v554 = 0; // 0x40fb22
    if (v23 != 0) {
        // 0x40fb24
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
    char v559 = v550; // 0x40fb70
    int64_t v560 = v544 + v20; // 0x40fb58
    int32_t v561 = v558; // 0x40fb5e
    int32_t v562 = v561 - (int32_t)v548; // 0x40fb5e
    int64_t v563 = v562 < 0 == ((v562 ^ v561) & (int32_t)(v558 ^ v548)) < 0 ? 0 : v548 - v558 & 0xffffffff; // 0x40fb66
    int64_t v564 = v3 - v560; // 0x40fb6d
    int64_t v565 = 0x100000000 * v563 >> 32;
    if (v559 != 0) {
        int64_t v566 = v563 != 0 ? v565 : 1; // 0x40fc0b
        if (v566 >= v564) {
            // break -> 0x40e853
            goto lab_0x40e853_11;
        }
        int64_t v567 = v566; // 0x40fc1b
        int64_t v568 = v565; // 0x40fc1b
        int64_t v569 = v557; // 0x40fc1b
        int64_t v570 = v556; // 0x40fc1b
        int64_t v571 = 0; // 0x40fc1b
        if (v555 != 0) {
            int32_t v572 = v557; // 0x40fc1d
            char v573 = v559; // 0x40fc20
            int64_t v574 = v566; // 0x40fc20
            int64_t v575 = v565; // 0x40fc20
            int64_t v576 = v557; // 0x40fc20
            int64_t v577 = v556; // 0x40fc20
            int64_t v578 = v555; // 0x40fc20
            if (v572 == 0 && v565 >= 2) {
                int64_t v579 = v565 - 1; // 0x40fc28
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
            // 0x40fc68
            v568 = v575;
            v567 = v574;
            *(char *)v578 = v573;
            v569 = v576;
            v570 = v577;
            v571 = v578 + 1;
        }
        int64_t v580 = v567 + v560; // 0x40fc79
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
        // 0x40fb7b
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
    goto lab_0x40ec26;
  lab_0x40eacb:;
    int64_t v581 = v386;
    int64_t v582 = v395;
    int64_t v583 = v396;
    int64_t v584 = v393;
    if ((char)v385 == 0) {
        // 0x40f930
        memcpy((int64_t *)v582, (int64_t *)v583, (int32_t)v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    } else {
        // 0x40ead4
        function_40e750(v582, v583, v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    }
    goto lab_0x40eae3;
  lab_0x40f3b0:;
    int64_t v585 = v463 + v471; // 0x40f3b4
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
    goto lab_0x40ec26;
  lab_0x40f365:;
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
        // 0x40f36a
        v1 = v592;
        *v59 = v594;
        *v60 = (int32_t)v591;
        *v55 = v593;
        *v39 = (char)v590;
        *v44 = v592;
        memset((int64_t *)v586, 48, (int32_t)v592);
        int64_t v595 = *v44; // 0x40f393
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
    goto lab_0x40f3b0;
  lab_0x40eae3:
    // 0x40eae3
    v392 = v394;
    v391 = *v53;
    v388 = v387;
    v390 = *v44 + v389;
    goto lab_0x40eae6;
  lab_0x40e83b_2:
    // 0x40e83b
    if (v3 != 0 && v5 != 0) {
        // 0x40e847
        *(char *)v5 = 0;
    }
    // 0x40e853
    return result;
}
// Address range: 0x40ff70 - 0x40ff8f
int64_t function_40ff70(int64_t a1, int64_t a2, char * a3, int64_t a4, int32_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    char v1 = 0; // bp-9, 0x40ff74
    int64_t result = function_40e7a0((int32_t)a1, a2, (int64_t)a3, a4, 0, (int64_t)&v1); // 0x40ff85
    return result;
}
// Address range: 0x40ff90 - 0x40ff94
int64_t function_40ff90(int64_t a1) {
    // 0x40ff90
    int64_t result; // 0x40ff90
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x40ffa0 - 0x411ab9
int64_t function_40ffa0(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x40ffa0
    int64_t v1; // bp-1416, 0x40ffa0
    int64_t v2; // bp-1656, 0x40ffa0
    if ((int32_t)function_411ce0(a3, &v1, &v2) < 0) {
        // 0x410610
        return 0;
    }
    int64_t v3 = &v2; // 0x40ffab
    int64_t v4; // bp-1384, 0x40ffa0
    int64_t v5; // bp-1640, 0x40ffa0
    int64_t v6; // 0x40ffa0
    if ((int32_t)function_411ac0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x410ef7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x410f13
            free((int64_t *)v6);
        }
        // 0x410f18
        *__errno_location() = 22;
        // 0x410610
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x41000b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x410013
    uint64_t v9 = v8 + v6; // 0x410017
    int64_t v10; // 0x40ffa0
    char * v11; // 0x40ffa0
    int64_t v12; // 0x40ffa0
    if (v9 < v8) {
        // 0x4106c0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4105c9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x4106c0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x4105c9;
        } else {
            uint64_t size = v9 + 6; // 0x410027
            if (size < 4000) {
                // 0x410170
                v12 = 0;
                int64_t v13; // bp-1784, 0x40ffa0
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x410064;
            } else {
                if (size == -1) {
                    // 0x4106c0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x4105c9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x410048
                    if (mem == NULL) {
                        // 0x4106c0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x4105c9;
                    } else {
                        // 0x41005d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x410064;
                    }
                }
            }
        }
    }
  lab_0x410590_2:;
    // 0x410590
    int64_t v14; // 0x40ffa0
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x410598
    int64_t v17 = v16; // 0x4105a6
    int64_t v18 = v16; // 0x4105a6
    int64_t v19 = v15; // 0x4105a6
    int64_t v20; // 0x40ffa0
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x4107b8;
    } else {
        goto lab_0x4105b1;
    }
  lab_0x4105c9:
    // 0x4105c9
    if (v6 != (int64_t)&v4) {
        // 0x4105e0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4105fc
        free((int64_t *)v6);
    }
    // 0x410601
    *(int32_t *)v10 = 12;
    // 0x410610
    return 0;
  lab_0x410064:
    // 0x410064
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x41009d
    int64_t v23 = *v22; // 0x41009d
    int64_t v24 = 0; // 0x4100a3
    int64_t v25 = v20; // 0x4100a3
    int64_t v26 = v21; // 0x4100a3
    int64_t v27 = 0; // 0x4100a3
    int64_t v28; // 0x40ffa0
    int64_t v29; // 0x40ffa0
    int64_t v30; // 0x40ffa0
    int64_t v31; // 0x40ffa0
    int64_t v32; // 0x40ffa0
    int64_t v33; // 0x40ffa0
    int64_t v34; // 0x40ffa0
    if (v23 == a3) {
        goto lab_0x4106b3;
    } else {
        int64_t v35 = v23 - a3; // 0x4100a9
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x4100bb;
    }
  lab_0x4106b3:;
    int64_t v36 = v24; // 0x4106b6
    float80_t v37; // 0x40ffa0
    float80_t v38 = v37; // 0x4106b6
    float80_t v39; // 0x40ffa0
    float80_t v40 = v39; // 0x4106b6
    int64_t v41 = v25; // 0x4106b6
    int64_t v42 = v26; // 0x4106b6
    int64_t v43 = v27; // 0x4106b6
    int64_t v44; // 0x40ffa0
    int64_t v45 = v44; // 0x4106b6
    goto lab_0x410218;
  lab_0x410218:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x40ffa0
    int64_t v51; // 0x40ffa0
    int64_t v52; // 0x40ffa0
    int64_t v53; // 0x40ffa0
    int64_t v54; // 0x40ffa0
    int64_t v55; // 0x40ffa0
    int64_t v56; // 0x40ffa0
    int64_t v57; // 0x40ffa0
    int64_t dest_mem2; // 0x40ffa0
    int64_t dest_mem3; // 0x40ffa0
    int64_t v58; // 0x40ffa0
    float80_t v59; // 0x40ffa0
    float80_t v60; // 0x40ffa0
    float80_t v61; // 0x40ffa0
    float80_t v62; // 0x40ffa0
    float80_t v63; // 0x40ffa0
    uint64_t v64; // 0x411346
    char * v65; // 0x41022c
    char v66; // 0x41022c
    int64_t v67; // 0x410254
    uint32_t v68; // 0x410258
    int64_t v69; // 0x410635
    char v70; // 0x40ffa0
    if (v1 == v49) {
        // 0x411340
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x411aaa
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x4113a2;
            } else {
                goto lab_0x410590_2;
            }
        } else {
            // 0x411350
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x4113a2;
            } else {
                if (v47 != 0) {
                    // 0x41196d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x410590_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x411973
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x41136e;
                        } else {
                            goto lab_0x41197f;
                        }
                    }
                } else {
                    // 0x41135e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x41136e;
                    } else {
                        goto lab_0x41197f;
                    }
                }
            }
        }
    } else {
        // 0x41022c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x410231
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x410e00
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x410590_2;
                } else {
                    goto lab_0x410692;
                }
            } else {
                // 0x410642
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x410692;
                } else {
                    if (v47 != 0) {
                        // 0x410f30
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x410590_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x410f36
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x410660;
                            } else {
                                goto lab_0x410f42;
                            }
                        }
                    } else {
                        // 0x410650
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x410660;
                        } else {
                            goto lab_0x410f42;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            // 0x410249
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g69 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x410bc0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x410697;
                }
                case 19: {
                    // 0x410bb0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x410697;
                }
                case 20: {
                    // 0x410b98
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x410697;
                }
                case 21: {
                    goto lab_0x410780;
                }
                case 22: {
                    goto lab_0x410780;
                }
                default: {
                    // 0x41026a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x410710
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x41072d;
                        } else {
                            // 0x410717
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x4102a0;
                            } else {
                                goto lab_0x41072d;
                            }
                        }
                    } else {
                        goto lab_0x4102a0;
                    }
                }
            }
        }
    }
  lab_0x4100bb:;
    int64_t v75 = v34;
    float80_t v76; // 0x40ffa0
    float80_t v77 = v76;
    float80_t v78; // 0x40ffa0
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x40ffa0
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x4100be
    int64_t v89 = v85; // 0x4100be
    int64_t v90 = v84; // 0x4100be
    float80_t v91 = v79; // 0x4100be
    float80_t v92 = v77; // 0x4100be
    int64_t v93 = v75; // 0x4100be
    int64_t v94 = v80; // 0x4100be
    int64_t v95 = v81; // 0x4100be
    int64_t v96 = v82; // 0x4100be
    int64_t v97 = v87; // 0x4100be
    int64_t v98; // 0x40ffa0
    int64_t v99; // 0x40ffa0
    int64_t v100; // 0x40ffa0
    int64_t v101; // 0x40ffa0
    int64_t v102; // 0x40ffa0
    if (v82 >= v87) {
        goto lab_0x410209;
    } else {
        if (v82 != 0) {
            // 0x4101a0
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x410590_2;
            } else {
                int64_t v103 = 2 * v82; // 0x4101a6
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x4101bb;
                } else {
                    goto lab_0x4101ae;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4100e4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x4101ce;
                } else {
                    goto lab_0x4100f0;
                }
            } else {
                goto lab_0x4101ae;
            }
        }
    }
  lab_0x410209:
    // 0x410209
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x410218;
  lab_0x4113a2:
    // 0x4113a2
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x4113aa
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x4113bb
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x4113c7
    if (v12 != 0) {
        // 0x4113d3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x4113f2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x41140e
        free((int64_t *)v6);
    }
    // 0x411413
    *a2 = v46;
    // 0x410610
    return result;
  lab_0x410780:
    // 0x410780
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x410697;
  lab_0x4101ae:
    // 0x4101ae
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x410590_2;
    } else {
        goto lab_0x4101bb;
    }
  lab_0x4107b8:
    // 0x4107b8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x4105b1;
  lab_0x4105b1:
    if (v12 == 0) {
        // 0x4106c0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4105c9;
    } else {
        // 0x4105c1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x4105c9;
    }
  lab_0x410692:
    // 0x410692
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x410697;
  lab_0x4102a0:;
    int64_t v273 = (int64_t)v11; // 0x4102a0
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x4102a7
    int64_t v275 = v273 + 1; // 0x4102ab
    *v11 = 37;
    int64_t v276 = v275; // 0x4102b4
    if (v274 % 2 != 0) {
        // 0x4102b6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x4102a7
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x4102c7
    if ((v277 & 2) != 0) {
        // 0x4102c9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4102d3
    if ((v277 & 4) != 0) {
        // 0x4102d5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4102df
    if ((v277 & 8) != 0) {
        // 0x4102e1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4102eb
    if ((v277 & 16) != 0) {
        // 0x4102ed
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4102f7
    if ((v277 & 64) != 0) {
        // 0x4102f9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x410303
    if ((v277 & 32) != 0) {
        // 0x410305
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x41030d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x410311
    int64_t v293 = v290; // 0x410318
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x410327
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x41034a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x41034e
    int64_t v298 = v295; // 0x410355
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x410364
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x41025a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x410390
    int64_t v272; // 0x40ffa0
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x410399
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x410798;
        } else {
            if (v301 == 12) {
                // 0x410f58
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x4103c0;
            } else {
                // 0x4103b0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x410790
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x410798;
                } else {
                    goto lab_0x4103c0;
                }
            }
        }
    } else {
        goto lab_0x4103c0;
    }
  lab_0x410697:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x410697
    int64_t v111 = v55 + 88; // 0x41069b
    int64_t v112 = *(int64_t *)v111; // 0x41069f
    int64_t v113 = v49 + 1; // 0x4106a2
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x4100a9
        int64_t v115 = v114 + v105; // 0x4100af
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
            // 0x4106d8
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
                goto lab_0x410590_2;
            } else {
                goto lab_0x410209;
            }
        } else {
            goto lab_0x4100bb;
        }
    } else {
        goto lab_0x4106b3;
    }
  lab_0x4101bb:;
    int64_t v116 = v80 == v20; // 0x4101c2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x4100f0;
    } else {
        goto lab_0x4101ce;
    }
  lab_0x4101ce:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x40ffa0
    if (v102 != 0) {
        goto lab_0x4100f0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4101ea
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x4107a5;
        } else {
            // 0x4101f8
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
            goto lab_0x410209;
        }
    }
  lab_0x4100f0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x410107
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x410590_2;
    } else {
        // 0x41012d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x410155
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
        goto lab_0x410209;
    }
  lab_0x41136e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x411934
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x410590_2;
        } else {
            // 0x411945
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x41195a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x4113a2;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x411391
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x4107a5;
        } else {
            // 0x41139f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x4113a2;
        }
    }
  lab_0x41197f:
    // 0x41197f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x410590_2;
    } else {
        goto lab_0x41136e;
    }
  lab_0x41072d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x41072d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x410731
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x410735
    int64_t v123 = 0; // 0x41073c
    int64_t v124 = v122; // 0x41073c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x410742
        int64_t v126 = v120; // 0x41074a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x4116d1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x4116e9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x4116fb
            int64_t v131 = v128; // 0x411704
            int64_t v132 = v130; // 0x411704
            int64_t v133; // 0x40ffa0
            int64_t v134; // 0x411716
            if (v130 < v129) {
                // 0x411706
                if (v121 == v128) {
                    // break -> 0x410520
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x41050b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x410520
                        goto lab_0x410520;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x4116c8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x4116d1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x411706
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x410520
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x41050b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x410520
                            goto lab_0x410520;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x4116c8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x410754
            if (*(int32_t *)v135 != 5) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x410760
            int64_t v137 = v136; // 0x410760
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x41076d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x410520:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x410520
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x410524
    int64_t v142; // 0x40ffa0
    int64_t v143; // 0x40ffa0
    int64_t v144; // 0x40ffa0
    if (v140 == v141) {
        goto lab_0x410bd0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x410531
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x411734
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x41173d
            if (v141 == v146) {
                goto lab_0x410bee;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x411763
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x41176a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x411783
                int64_t v152 = v151; // 0x41178c
                int64_t v153 = v149; // 0x41178c
                int64_t v154; // 0x40ffa0
                int64_t v155; // 0x411797
                if (v151 < v150) {
                    // 0x41178e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x410590_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x4117aa
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x410590_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x411750
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x411759
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x41178e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x410590_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x4117aa
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x410590_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x411750
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x41055c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x410543
            if (*(int32_t *)v156 != 5) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x410550
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x410bd0;
            } else {
                goto lab_0x41055c;
            }
        }
    }
  lab_0x4103c0:
    // 0x4103c0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x4103cd
    int64_t v160 = 0; // 0x4103d5
    if (v159 != -1) {
        // 0x4103db
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x410ccc
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4103fe
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x41040c
        if (*(int32_t *)v162 != 5) {
            // 0x410ccc
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x41041f
        int64_t v164; // bp-8, 0x40ffa0
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x40ffa0
    uint64_t v165; // 0x410436
    if (v46 > 0xfffffffffffffffd) {
        // 0x410e68
        v14 = v48;
        if (v47 == -1) {
            // 0x410494
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x410590_2;
    } else {
        // 0x410440
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x410494
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x410b70
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x410590_2;
            } else {
                int64_t v167 = 2 * v47; // 0x410b76
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x410462;
                } else {
                    goto lab_0x410b82;
                }
            }
        } else {
            // 0x410452
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x410462;
            } else {
                goto lab_0x410b82;
            }
        }
    }
  lab_0x410660:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x410e89
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x410590_2;
        } else {
            // 0x410ea1
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x410eb2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x410692;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x410681
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x4107a5;
        } else {
            // 0x41068f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x410692;
        }
    }
  lab_0x410f42:
    // 0x410f42
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x410590_2;
    } else {
        goto lab_0x410660;
    }
  lab_0x410bd0:
    // 0x410bd0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x410bee;
  lab_0x410798:
    // 0x410798
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x4103c0;
  lab_0x4107a5:
    // 0x4107a5
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x4107b8;
  lab_0x410bee:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x410bf4
    v14 = v48;
    int64_t v170; // 0x40ffa0
    int64_t v171; // 0x40ffa0
    int64_t * v172; // 0x40ffa0
    int64_t v173; // 0x40ffa0
    int64_t v174; // bp-760, 0x40ffa0
    uint64_t size5; // 0x410bf8
    if (v169 == -1) {
        goto lab_0x410590_2;
    } else {
        // 0x410c09
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x410c69;
        } else {
            // 0x410c15
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x410590_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x410c3d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x410590_2;
                } else {
                    goto lab_0x410c69;
                }
            }
        }
    }
  lab_0x41055c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x410bee;
    } else {
        // 0x410565
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x410bee;
        } else {
            goto lab_0x410590_2;
        }
    }
  lab_0x410462:
    // 0x410462
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x410e29
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x410e44
            if (v48 == v20 && v46 != 0) {
                // 0x410e52
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x410494
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x410483
        v14 = v48;
        if (mem11 != NULL) {
            // 0x410494
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x410590_2;
  lab_0x410b82:
    // 0x410b82
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x410590_2;
    } else {
        goto lab_0x410462;
    }
  lab_0x410c69:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x40ffa0
    int64_t v181; // 0x40ffa0
    int64_t v182; // 0x40ffa0
    int64_t v183; // 0x40ffa0
    int64_t v184; // 0x40ffa0
    int64_t v185; // 0x40ffa0
    int64_t v186; // 0x40ffa0
    int64_t v187; // 0x40ffa0
    int64_t v188; // 0x40ffa0
    int64_t v189; // 0x40ffa0
    int64_t v190; // 0x40ffa0
    int64_t v191; // 0x40ffa0
    int64_t v192; // 0x40ffa0
    int64_t v193; // 0x40ffa0
    float80_t v194; // 0x40ffa0
    float80_t v195; // 0x40ffa0
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x4117e2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x4117f0
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
            // 0x41191d
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
        goto lab_0x411129;
    } else {
        // 0x410c71
        int64_t v198; // 0x40ffa0
        float80_t v199; // 0x40ffa0
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x411431
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x41143e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x41129a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x410c9f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x410ca8
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x410ccc
                            abort();
                            // UNREACHABLE
                        }
                        // 0x411816
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x411816
                            v181 = v187 + 3;
                            goto lab_0x411991;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x411991;
                            } else {
                                goto lab_0x411852;
                            }
                        }
                    } else {
                        // 0x411523
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x411117;
                        } else {
                            int64_t v202 = v187 + 2; // 0x411531
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x411a7a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x411578
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x41158b
                                int64_t v207 = v176 & 0xffffffff; // 0x41158e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x41159c
                                int64_t v209 = v187 + 1; // 0x4115b9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x4115ce
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x4115db
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x411129;
                        }
                    }
                } else {
                    // 0x4112c8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x4112c8
                        v180 = v187 + 1;
                        goto lab_0x411877;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x411877;
                        } else {
                            goto lab_0x4112e8;
                        }
                    }
                }
            } else {
                // 0x411100
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x411117;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x41164c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x41165d
                    char v215 = *v213; // 0x411664
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x4116a0
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x4116ad
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x411675
                        v182 = v218;
                        int64_t v219; // 0x411667
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x411129;
                }
            }
        } else {
            float80_t v220; // 0x40ffa0
            if (v220 != 0.0L) {
                // 0x410ccc
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x41131b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x41132a
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
                // 0x411603
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
            goto lab_0x411129;
        }
    }
  lab_0x411129:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x41112c
    int64_t v229 = v228; // 0x411132
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x411134
        int64_t v232 = v231 + v224; // 0x411137
        int64_t v233 = v232 - v225; // 0x41113e
        if ((v230 & 2) != 0) {
            // 0x4115e3
            v229 = v233;
            int64_t v234 = v224; // 0x4115e6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x4115f0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x4115f0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x411455
                int64_t v238 = v224; // 0x41145b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x411469
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x411460
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x411475
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x411488
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
                int64_t v243 = v224; // 0x411161
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x411181
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x411178
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x41118a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x411198
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
        // 0x410ccc
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x4111c8
    int64_t dest_mem5 = v48; // 0x4111d5
    int64_t v250 = v248; // 0x4111d5
    int64_t v251 = v47; // 0x4111d5
    int64_t v252; // 0x40ffa0
    if (v47 - v46 > v248) {
        goto lab_0x411250;
    } else {
        if (v249 < v46) {
            // 0x411422
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x410590_2;
            } else {
                goto lab_0x411250;
            }
        } else {
            // 0x4111e0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x411250;
            } else {
                if (v47 != 0) {
                    // 0x4117b8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x410590_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x4117be
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x4111fe;
                        } else {
                            goto lab_0x4117ca;
                        }
                    }
                } else {
                    // 0x4111ee
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x4111fe;
                    } else {
                        goto lab_0x4117ca;
                    }
                }
            }
        }
    }
  lab_0x411250:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x411261
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x41127d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x410697;
  lab_0x411117:
    // 0x411117
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x411129;
  lab_0x411877:;
    char * v257 = nl_langinfo(0x10000); // 0x4118aa
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x4118bb
    char v259 = *v257; // 0x4118c2
    int64_t v260 = v176 & 0xffffffff; // 0x4118c5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x4118d3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x411900
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x41190d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x4112e8;
  lab_0x4112e8:
    // 0x4112e8
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
    goto lab_0x411129;
  lab_0x4111fe:
    // 0x4111fe
    if (v48 == 0 || v48 == v20) {
        // 0x41149b
        int64_t size7; // 0x40ffa0
        int64_t * mem12 = malloc((int32_t)size7); // 0x4114b2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x410590_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x4114be
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x4114e9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x411250;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x41122d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x410590_2;
        } else {
            // 0x41123b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x411250;
        }
    }
  lab_0x4117ca:
    // 0x4117ca
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x410590_2;
    } else {
        goto lab_0x4111fe;
    }
  lab_0x411991:;
    int64_t v265 = v187 + 4; // 0x411991
    char v266 = *nl_langinfo(0x10000); // 0x4119dc
    int64_t v267 = v176 & 0xffffffff; // 0x4119df
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x4119e6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x411a0d
        int64_t v270 = v265 + 1; // 0x411a15
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
    goto lab_0x411852;
  lab_0x411852:
    // 0x411852
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x411129;
}
// Address range: 0x411ac0 - 0x411cd9
int64_t function_411ac0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x411b23
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x411ad8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x411ae9
    g70 = v5;
    int64_t v6; // 0x411ac0
    int64_t v7; // 0x411ac0
    int64_t v8; // 0x411ac0
    int64_t v9; // 0x411ac0
    int64_t v10; // 0x411ac0
    int64_t v11; // 0x411ac0
    int64_t v12; // 0x411ac0
    uint32_t v13; // 0x411be0
    int64_t * v14; // 0x411c10
    int64_t v15; // 0x411c18
    uint32_t v16; // 0x411c60
    uint32_t v17; // 0x411c30
    int64_t * v18; // 0x411bc0
    int64_t v19; // 0x411bc0
    int64_t * v20; // 0x411bd0
    int64_t v21; // 0x411bd0
    int64_t * v22; // 0x411ba8
    int64_t v23; // 0x411ba8
    int64_t * v24; // 0x411b90
    int64_t v25; // 0x411b90
    int64_t * v26; // 0x411cb0
    uint32_t v27; // 0x411b70
    int64_t v28; // 0x411cb0
    int64_t * v29; // 0x411ca0
    int64_t v30; // 0x411ca0
    uint32_t v31; // 0x411b50
    int64_t * v32; // 0x411cc8
    int64_t v33; // 0x411cc8
    int64_t v34; // 0x411c73
    uint32_t v35; // 0x411b30
    int64_t v36; // 0x411c47
    uint32_t v37; // 0x411af8
    int32_t * v38; // 0x411be0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x411b70
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x411b77
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x411bc0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x411b83
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x411b16
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x411b50
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x411b57
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x411bd0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x411b63
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x411b16
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x411b30
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x411b37
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x411ba8
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x411b43
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x411b16
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
            // 0x411af8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x411b03
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x411b90
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x411b0f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x411b16
            break;
        }
        case 11: {
            // 0x411be0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x411bef
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x411cb0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x411bfc
            *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
            // break -> 0x411b16
            break;
        }
        case 12: {
            // 0x411c10
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x411b16
            break;
        }
        case 15: {
            // 0x411c60
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x411c67
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x411ca0
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x411c73
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x411b16
            break;
        }
        case 16: {
            // 0x411c30
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x411c3b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x411cc8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x411c47
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x411b16
            break;
        }
        default: {
            // 0x411b23
            return 0xffffffff;
        }
    }
    // 0x411b16
    v3++;
    int64_t v39 = v4 + 32; // 0x411b21
    while (v3 < v2) {
        // 0x411ae0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g70 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x411b70
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x411b77
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x411bc0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x411b83
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x411b16
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x411b50
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x411b57
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x411bd0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x411b63
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x411b16
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x411b30
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x411b37
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x411ba8
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x411b43
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x411b16
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
                // 0x411af8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x411b03
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x411b90
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x411b0f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x411b16
                break;
            }
            case 11: {
                // 0x411be0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x411bef
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x411cb0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x411bfc
                *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
                // break -> 0x411b16
                break;
            }
            case 12: {
                // 0x411c10
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x411b16
                break;
            }
            case 15: {
                // 0x411c60
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x411c67
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x411ca0
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x411c73
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x411b16
                break;
            }
            case 16: {
                // 0x411c30
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x411c3b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x411cc8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x411c47
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x411b16
                break;
            }
            default: {
                // 0x411b23
                return 0xffffffff;
            }
        }
        // 0x411b16
        v3++;
        v39 = v4 + 32;
    }
    // 0x411b23
    return 0;
}
// Address range: 0x411ce0 - 0x4129e9
int64_t function_411ce0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x411ce2
    int64_t v4 = v1 + 16; // 0x411ce6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x411d19
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x411d2e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x411d5b
    int32_t v8 = 0; // 0x411d60
    int64_t v9 = 0; // 0x411d60
    int64_t v10 = v3; // 0x411d60
    int64_t v11 = a1; // 0x411d60
    int64_t v12 = 0; // 0x411d60
    char v13; // 0x411ce0
    int64_t v14; // 0x411ce0
    int64_t v15; // 0x411ce0
    int64_t v16; // 0x411ce0
    int64_t v17; // 0x411ce0
    int64_t v18; // 0x411ce0
    int64_t v19; // 0x411ce0
    int64_t v20; // 0x411ce0
    int64_t v21; // 0x411ce0
    int64_t v22; // 0x411ce0
    int64_t v23; // 0x411ce0
    int64_t v24; // 0x411ce0
    int64_t v25; // 0x411ce0
    int64_t v26; // 0x411ce0
    int64_t v27; // 0x411ce0
    int64_t v28; // 0x411ce0
    int64_t v29; // 0x411ce0
    int64_t v30; // 0x411ce0
    int32_t v31; // 0x411ce0
    int64_t v32; // 0x411ce0
    int64_t v33; // 0x411d50
    int64_t v34; // 0x411da0
    int64_t * v35; // 0x411dc3
    int64_t v36; // 0x411e26
    if (v7 != 0) {
        // 0x411d50
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x411ce0
        int64_t v38 = 7; // 0x411ce0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x411ce0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x411d50:
            // 0x411d50
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x411d93
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x411da8
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x411de4
                int64_t v43 = v42; // 0x411de4
                int64_t v44 = v43; // 0x411ded
                int64_t v45 = v33; // 0x411ded
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x412180
                    char v47 = *(char *)v46; // 0x412184
                    int64_t v48 = v46; // 0x41218d
                    while (v47 < 58) {
                        // 0x412180
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x41218f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x412825
                        char v52 = *(char *)v51; // 0x412825
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x412829
                        int64_t v54 = v33; // 0x41283d
                        int64_t v55 = v51; // 0x41283d
                        char v56 = v52; // 0x41283d
                        int64_t v57 = v53; // 0x41283d
                        bool v58 = v52 < 58; // 0x41283d
                        bool v59 = v52 < 58; // 0x41283d
                        char v60 = v52; // 0x41283d
                        int64_t v61 = v51; // 0x41283d
                        int64_t v62; // 0x412852
                        int64_t v63; // 0x412825
                        char v64; // 0x412825
                        int64_t v65; // 0x412829
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x4124a8_9;
                            }
                            // 0x412823
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
                                // 0x41283f
                                if (v64 >= 58) {
                                    goto lab_0x4124a8_9;
                                }
                                // 0x412823
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
                        int64_t v67 = v55; // 0x4127f8
                        while (v58) {
                            // 0x4127fe
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
                                    goto lab_0x4124a8_9;
                                }
                                // 0x412823
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
                                    // 0x41283f
                                    if (v64 >= 58) {
                                        goto lab_0x4124a8_9;
                                    }
                                    // 0x412823
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
                            // 0x4127f4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x4128fd
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x4124a8_9;
                        }
                        int64_t v68 = v54 + 2; // 0x41290e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x411ce0
                v36 = v45;
                char v70; // 0x411ce0
                while (true) {
                    // 0x411e26
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x411e40
                                *v41 = *v41 | 2;
                                // break -> 0x411e20
                                break;
                            }
                            case 43: {
                                // 0x411e50
                                *v41 = *v41 | 4;
                                // break -> 0x411e20
                                break;
                            }
                            case 32: {
                                // 0x411e60
                                *v41 = *v41 | 8;
                                // break -> 0x411e20
                                break;
                            }
                            case 35: {
                                // 0x411e70
                                *v41 = *v41 | 16;
                                // break -> 0x411e20
                                break;
                            }
                            case 48: {
                                // 0x411e80
                                *v41 = *v41 | 32;
                                // break -> 0x411e20
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x411e88
                                    break;
                                }
                                // 0x411e16
                                *v41 = *v41 | 64;
                                // break -> 0x411e20
                                break;
                            }
                        }
                    } else {
                        // 0x411e2f
                        *v41 = *v41 | 1;
                    }
                    // 0x411e20
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x411ce0
                int64_t * v72; // 0x411db1
                int64_t * v73; // 0x411dba
                if (v70 == 42) {
                    // 0x411efd
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x411f1d
                    int64_t v75 = v74; // 0x411f1d
                    int64_t v76 = v75 + 0xffffffd0; // 0x411f21
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x411f27
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x4122fd
                        char v80 = *(char *)v79; // 0x412301
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x4122fd
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x41230d
                        v26 = v79;
                        int64_t v81 = v75; // 0x412311
                        int64_t v82 = v36; // 0x412311
                        int64_t v83 = 0; // 0x412311
                        if (v80 != 36) {
                            goto lab_0x411f2d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x412342
                            int64_t v89 = v85; // 0x412342
                            int64_t v90 = v87; // 0x412342
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x412347
                            int64_t v95 = v92 + 1; // 0x41234a
                            char v96 = *(char *)v95; // 0x41234a
                            int64_t v97 = v96; // 0x41234a
                            while (v94 < v91) {
                                // 0x412361
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x4124a8_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x41231b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x412324
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
                                    // 0x412361
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x4124a8_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x41231b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x41299b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x4124a8_9;
                            }
                            // 0x4129a9
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x411f3c;
                        }
                    } else {
                        goto lab_0x411f2d;
                    }
                } else {
                    // 0x411e8d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x411ce0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x4125ab
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x4125b0
                        int64_t v102 = v71; // 0x4125b9
                        char * v103 = v100; // 0x4125b9
                        int64_t v104 = v36; // 0x4125b9
                        int64_t v105 = v71; // 0x4125b9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x4125c3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x4125c3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x4125c3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x4125d2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x4125f5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x411e98;
                }
            } else {
                goto lab_0x411d58;
            }
        }
    }
  lab_0x411d62:
    // 0x411d62
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x411d84
    return 0;
  lab_0x4124a8_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x4124b3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x4124c5
    if (v3 != v115) {
        // 0x4124d0
        free((int64_t *)v115);
    }
    // 0x4124d5
    *__errno_location() = 22;
    // 0x411d84
    return 0xffffffff;
  lab_0x412680_5:;
    // 0x412680
    int64_t v116; // 0x411ce0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x412685
    int64_t v119; // 0x411ce0
    if (v4 == v117) {
        goto lab_0x412699_3;
    } else {
        // 0x412687
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x412699_3;
    }
  lab_0x412699_3:;
    int64_t v120 = *v5; // 0x412699
    int32_t * v121; // 0x4126a9
    if (v3 == v120) {
        // 0x4126a9
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x4126a4
    free((int64_t *)v120);
    // 0x4126a9
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x411d58:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x411d5b
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
        // break -> 0x411d62
        goto lab_0x411d62;
    }
    goto lab_0x411d50;
  lab_0x411f2d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x411f2d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x4122d3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x4124a8_9;
        }
        // 0x4122eb
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x411f3c;
  lab_0x411e98:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x411e9b
    int64_t v147 = v339; // 0x411e9b
    int64_t v145 = v338; // 0x411e9b
    int64_t v143 = v337; // 0x411e9b
    int64_t v186; // 0x411ce0
    int64_t v190; // 0x411ce0
    int64_t v189; // 0x411ce0
    int64_t v188; // 0x411ce0
    int64_t v187; // 0x411ce0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x411fa0;
    } else {
        goto lab_0x411ea1;
    }
  lab_0x411f3c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x411f3c
    int64_t v132 = v128; // 0x411f43
    int64_t v133 = v16; // 0x411f43
    int64_t v134 = v131; // 0x411f43
    int64_t v135; // 0x411ce0
    int64_t v136; // 0x411ce0
    int64_t v137; // 0x411ce0
    int64_t v138; // 0x4121ef
    if (v16 > v127) {
        goto lab_0x411f4c;
    } else {
        uint64_t v139 = 2 * v16; // 0x4121e5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x412680_5;
        }
        int64_t size = 32 * v138; // 0x41220e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x41276c
            if (mem == NULL) {
                goto lab_0x412699_3;
            }
            // 0x41278e
            v135 = (int64_t)mem;
            goto lab_0x412799;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x41222f
            int64_t v140 = *v6; // 0x412234
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x412680_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x41222f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x412799;
            } else {
                goto lab_0x41226d;
            }
        }
    }
  lab_0x411ea1:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x411ea8
    int64_t v151 = v146; // 0x411ea8
    int64_t v152 = v144; // 0x411ea8
    uint64_t v153; // 0x411ce0
    int64_t v154; // 0x411ce0
    int64_t v155; // 0x411ee7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x411eeb
        int64_t v158; // 0x411ce0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x412050
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x411ee3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x412058
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x411ee0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x411ee3
                    break;
                }
            }
        } else {
            // 0x411ef0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x411ee3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x412058
    int64_t v162 = v161 % 256; // 0x412064
    g71 = v162;
    int64_t v163 = 17; // 0x412067
    int64_t v164 = v154; // 0x412067
    int64_t v165 = v154; // 0x412067
    switch ((char)v161) {
        case 0: {
            goto lab_0x4120d1;
        }
        case 28: {
            goto lab_0x412422;
        }
        case 30: {
            // 0x41244e
            v163 = 14;
            v164 = 99;
            goto lab_0x412079;
        }
        case 32: {
            goto lab_0x412422;
        }
        case 33: {
            goto lab_0x412422;
        }
        case 34: {
            goto lab_0x412422;
        }
        case 46: {
            // 0x41243f
            v163 = 16;
            v164 = 115;
            goto lab_0x412079;
        }
        case 51: {
            goto lab_0x41245d;
        }
        case 60: {
            goto lab_0x412422;
        }
        case 62: {
            int32_t v166 = v153; // 0x412379
            int32_t v167 = v166 - 7; // 0x412379
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x41237f
            v163 = v168;
            v164 = v154;
            goto lab_0x412079;
        }
        case 63: {
            goto lab_0x4123d0;
        }
        case 64: {
            goto lab_0x412422;
        }
        case 65: {
            goto lab_0x412422;
        }
        case 66: {
            goto lab_0x412422;
        }
        case 68: {
            goto lab_0x4123d0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x41238f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x412395
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x41239d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x4123ab
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x4123bf
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x412079;
        }
        case 74: {
            goto lab_0x41245d;
        }
        case 75: {
            goto lab_0x412079;
        }
        case 78: {
            int32_t v171 = v153; // 0x412070
            int32_t v172 = v171 - 7; // 0x412070
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x412076
            v163 = v173;
            v164 = v154;
            goto lab_0x412079;
        }
        case 80: {
            goto lab_0x41245d;
        }
        case 83: {
            goto lab_0x41245d;
        }
        default: {
            goto lab_0x4124a8_9;
        }
    }
  lab_0x411f4c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x411f63
        int64_t v178 = v176; // 0x411ce0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x411f58
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x411f58
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x411f71
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x411f7d
    int32_t v182 = *v181; // 0x411f7d
    if (v182 != 0) {
        // 0x4125fe
        if (v182 != 5) {
            goto lab_0x4124a8_9;
        }
        unsigned char v183 = *(char *)v129; // 0x412607
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x411e98;
    } else {
        // 0x411f87
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x411f8d
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
            goto lab_0x411ea1;
        } else {
            goto lab_0x411fa0;
        }
    }
  lab_0x411fa0:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x411fa0
    char v197 = *v196; // 0x411fa0
    int64_t * v198; // 0x411dc8
    *v198 = v192;
    int64_t v199; // 0x411ce0
    int64_t v200; // 0x411ce0
    int64_t v201; // 0x411ce0
    int64_t v202; // 0x411ce0
    int64_t v203; // 0x411ce0
    int64_t * v204; // 0x411dd1
    int64_t * v205; // 0x411dda
    int64_t v206; // 0x411fb9
    if (v197 != 42) {
        char v207 = *v196; // 0x4121a0
        int64_t v208 = v193; // 0x4121a9
        char * v209; // 0x411ce0
        int64_t v210; // 0x411ce0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x4121b0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x4121b4
            v208 = v212;
            while (v214 < 58) {
                // 0x4121b0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x4121be
            v209 = v213;
            v210 = v212;
        } else {
            // 0x4121a0
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x4121d1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x411ea1;
    } else {
        // 0x411faf
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x411fcf
        int64_t v219 = v218; // 0x411fcf
        int64_t v220 = v219 + 0xffffffd0; // 0x411fd3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x411fd9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x412884
            char v224 = *(char *)v223; // 0x412888
            v221 = v223;
            while (v224 < 58) {
                // 0x412884
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x412894
            v201 = v223;
            int64_t v225 = v219; // 0x412898
            int64_t v226 = v206; // 0x412898
            int64_t v227 = 0; // 0x412898
            if (v224 != 36) {
                goto lab_0x411fdf;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x4128c9
                int64_t v233 = v229; // 0x4128c9
                int64_t v234 = v231; // 0x4128c9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x4128ce
                int64_t v239 = v236 + 1; // 0x4128d5
                char v240 = *(char *)v239; // 0x4128d9
                int64_t v241 = v240; // 0x4128d9
                while (v238 < v235) {
                    // 0x4128e7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x4124a8_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x4128a2
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x4128ab
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
                        // 0x4128e7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x4124a8_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x4128a2
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x4129b7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x4124a8_9;
                }
                // 0x4129c5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x411fee;
            }
        } else {
            goto lab_0x411fdf;
        }
    }
  lab_0x4120d1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x4120d6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x4120de
    *a2 = v245;
    int64_t v246; // 0x411ce0
    int64_t v247; // 0x411ce0
    int64_t dest_mem; // 0x411ce0
    int64_t v248; // 0x411ce0
    int64_t v249; // 0x4129d3
    if (v246 > v245) {
        // 0x4120ea
        goto lab_0x411d58;
    } else {
        if (v246 < 0) {
            // 0x4129d3
            v249 = *v6;
            v116 = v249;
            goto lab_0x412680_5;
        }
        int64_t v250 = 2 * v246; // 0x412106
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x4129d3
            v249 = *v6;
            v116 = v249;
            goto lab_0x412680_5;
        }
        int64_t v251 = *v5; // 0x412117
        int64_t size2 = 176 * v246; // 0x412129
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x412279
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x4127dc
                v118 = v252;
                if (v4 == v252) {
                    // 0x4126a9
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x412687
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x412699_3;
            }
            goto lab_0x412294;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x41213b
            if (mem4 == NULL) {
                // 0x4129d3
                v249 = *v6;
                v116 = v249;
                goto lab_0x412680_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x41213b
            int64_t v254 = *v5; // 0x41215d
            int64_t v255 = *a2; // 0x412161
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x412294;
            } else {
                goto lab_0x41216f;
            }
        }
    }
  lab_0x412422:
    // 0x412422
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x412437
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x412079;
  lab_0x41245d:;
    uint32_t v335 = (int32_t)v153; // 0x412465
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x41246b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x412473
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x412481
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x41248e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x412079;
  lab_0x4123d0:;
    uint32_t v336 = (int32_t)v153; // 0x4123d8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x4123de
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4123e6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x4123f4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x412401
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x412079;
  lab_0x412079:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x411ce0
    int64_t v260; // 0x411ce0
    int64_t * v261; // 0x411ddf
    if (v259 == -1) {
        // 0x412584
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x4124a8_9;
        }
        // 0x41259c
        v260 = v148;
    } else {
        // 0x412083
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x412088
    int64_t v264 = v258; // 0x41208f
    int64_t v265 = v162; // 0x41208f
    int64_t v266 = v263; // 0x41208f
    int64_t v267; // 0x411ce0
    int64_t v268; // 0x411ce0
    int64_t v269; // 0x411ce0
    int64_t v270; // 0x411ce0
    int64_t v271; // 0x411ce0
    if (v142 > v262) {
        goto lab_0x412095;
    } else {
        uint64_t v272 = 2 * v142; // 0x4124f8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x412502
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x412680_5;
        }
        int64_t size3 = 32 * v273; // 0x412521
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x412534
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x412619
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x412699_3;
            }
            goto lab_0x412636;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x412541
            if (mem6 == NULL) {
                // 0x4129d3
                v249 = *v6;
                v116 = v249;
                goto lab_0x412680_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x412541
            int64_t v276 = v274 & 0xffffffff; // 0x412546
            int64_t v277 = *v6; // 0x412571
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x412636;
            } else {
                goto lab_0x41257b;
            }
        }
    }
  lab_0x412095:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x4120ab
        int64_t v282 = v279; // 0x411ce0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x4120a0
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x4120a0
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x4120b9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x4120c5
    int32_t v286 = *v285; // 0x4120c5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x4124ea
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x4124a8_9;
        }
    } else {
        // 0x4120cf
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x4120d1;
  lab_0x412799:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x412799
    int64_t * v290; // 0x411ce0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x41226d;
  lab_0x41226d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x411f4c;
  lab_0x411fdf:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x411fdf
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x41285a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x4124a8_9;
        }
        // 0x412872
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x411fee;
  lab_0x411fee:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x411fee
    int64_t v300 = v296; // 0x411ff5
    int64_t v301 = v191; // 0x411ff5
    int64_t v302 = v299; // 0x411ff5
    int64_t v303; // 0x411ce0
    int64_t v304; // 0x411ce0
    int64_t v305; // 0x411ce0
    int64_t v306; // 0x4126d2
    if (v191 > v295) {
        goto lab_0x411ffe;
    } else {
        uint64_t v307 = 2 * v191; // 0x4126c8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x412680_5;
        }
        int64_t size4 = 32 * v306; // 0x4126ed
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x41291e
            if (mem7 == NULL) {
                goto lab_0x412699_3;
            }
            // 0x412940
            v304 = (int64_t)mem7;
            goto lab_0x41294b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x41270e
            int64_t v308 = *v6; // 0x412713
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x412680_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x41270e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x41294b;
            } else {
                goto lab_0x41274c;
            }
        }
    }
  lab_0x412294:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x411ce0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x41216f;
  lab_0x41216f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x411d58;
  lab_0x412636:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x41264c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x41257b;
  lab_0x41257b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x412095;
  lab_0x411ffe:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x412013
        int64_t v324 = v322; // 0x411ce0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x412008
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x412008
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x412021
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x41202e
    int32_t v328 = *v327; // 0x41202e
    if (v328 != 0) {
        // 0x412755
        if (v328 != 5) {
            goto lab_0x4124a8_9;
        }
        unsigned char v329 = *(char *)v297; // 0x41275e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x412038
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x412041
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x411ea1;
  lab_0x41294b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x41294b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x41274c;
  lab_0x41274c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x411ffe;
}
// Address range: 0x4129f0 - 0x412a4d
int64_t function_4129f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4129f0
    return function_4018d0();
}
// Address range: 0x412a50 - 0x412a51
int64_t function_412a50(void) {
    // 0x412a50
    int64_t result; // 0x412a50
    return result;
}
// Address range: 0x412a60 - 0x412a78
int64_t function_412a60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x412a60
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g31);
}
// Address range: 0x412a78 - 0x412a98
int64_t function_412a78(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g27; // 0x412a82
    while (*(int64_t *)v1 != -1) {
        // 0x412a83
        v1 -= 8;
    }
    // 0x412a94
    return result;
}
