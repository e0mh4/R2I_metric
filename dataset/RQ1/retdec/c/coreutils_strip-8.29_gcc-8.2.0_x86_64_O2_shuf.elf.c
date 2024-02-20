// Address range: 0x401d60 - 0x401d65
int64_t function_401d60(void) {
    // 0x401d60
    abort();
    // UNREACHABLE
}
// Address range: 0x401d65 - 0x401d6a
int64_t function_401d65(void) {
    // 0x401d65
    abort();
    // UNREACHABLE
}
// Address range: 0x401d6a - 0x401d6f
int64_t function_401d6a(void) {
    // 0x401d6a
    abort();
    // UNREACHABLE
}
// Address range: 0x401d6f - 0x401d74
int64_t function_401d6f(void) {
    // 0x401d6f
    abort();
    // UNREACHABLE
}
// Address range: 0x401d74 - 0x401d79
int64_t function_401d74(void) {
    // 0x401d74
    abort();
    // UNREACHABLE
}
// Address range: 0x401d79 - 0x401d7e
int64_t function_401d79(void) {
    // 0x401d79
    abort();
    // UNREACHABLE
}
// Address range: 0x401d7e - 0x401d83
int64_t function_401d7e(void) {
    // 0x401d7e
    abort();
    // UNREACHABLE
}
// Address range: 0x401d83 - 0x401d88
int64_t function_401d83(void) {
    // 0x401d83
    abort();
    // UNREACHABLE
}
// Address range: 0x401d88 - 0x401d8d
int64_t function_401d88(void) {
    // 0x401d88
    abort();
    // UNREACHABLE
}
// Address range: 0x401d8d - 0x401d92
int64_t function_401d8d(void) {
    // 0x401d8d
    abort();
    // UNREACHABLE
}
// Address range: 0x401d92 - 0x401d97
int64_t function_401d92(void) {
    // 0x401d92
    abort();
    // UNREACHABLE
}
// Address range: 0x401da0 - 0x402b75
int64_t function_401da0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x401dba
    function_403430(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401da0
    function_409f90(0x403000, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    char v3 = 0; // 0x401e23
    char v4 = 10; // 0x401e23
    char * v5 = NULL; // 0x401e23
    int64_t v6 = -1; // 0x401e23
    int64_t v7 = 0; // 0x401e23
    char v8 = 0; // 0x401e23
    int64_t v9 = 0; // 0x401e23
    int64_t v10 = 0; // 0x401e23
    int64_t v11 = -1; // 0x401e23
    int64_t v12; // 0x401da0
    int64_t str; // 0x401da0
    int64_t v13; // 0x401da0
    int64_t v14; // 0x401da0
    int64_t v15; // 0x401da0
    int64_t v16; // 0x401da0
    int64_t v17; // 0x401da0
    int64_t v18; // 0x401da0
    int64_t v19; // 0x401da0
    int64_t v20; // 0x401da0
    int64_t v21; // 0x401da0
    int64_t v22; // 0x401da0
    int64_t v23; // bp-200, 0x401da0
    char v24; // 0x401da0
    char v25; // 0x401da0
    char v26; // 0x401da0
    char v27; // 0x401da0
    char v28; // 0x401da0
    char v29; // 0x401da0
    int64_t v30; // 0x401da0
    int64_t v31; // 0x401da0
    char * str2; // 0x401da0
    int64_t v32; // 0x401da0
    int64_t v33; // 0x401f09
    while (true) {
      lab_0x401e28_2:;
        int64_t v34 = v15;
        v13 = v11;
        str = v10;
        v12 = v9;
        int64_t v35 = v17;
        v29 = v28;
        v25 = v8;
        v30 = v7;
        v32 = v6;
        str2 = v5;
        v26 = v4;
        v24 = v3;
        int32_t v36 = function_4082a0(v1, a2, "ei:n:o:rz", &g3, 0, v35);
        v22 = (int64_t)"ei:n:o:rz";
        v20 = v1;
        switch (v36) {
            case -1: {
                goto lab_0x4020a7;
            }
            case 110: {
                int64_t v37 = function_406b20((int64_t)g48, 0, 10, &v23, 0, v35); // 0x402046
                int32_t v38 = v37; // 0x40204b
                if (v38 != 0) {
                    // 0x40206a
                    v3 = v24;
                    v4 = v26;
                    v5 = str2;
                    v6 = v32;
                    v7 = v30;
                    v8 = v25;
                    v27 = v29;
                    v16 = v35;
                    v9 = v12;
                    v10 = str;
                    v11 = v13;
                    v14 = v34;
                    if (v38 != 1) {
                        int64_t v39 = function_405050((int64_t)g48); // 0x40207a
                        char * format = dcgettext(NULL, "invalid line count: %s", 5); // 0x40208e
                        error(1, (int32_t)"invalid line count: %s" ^ (int32_t)"invalid line count: %s", format);
                        v22 = (int64_t)format;
                        v20 = v39;
                        goto lab_0x4020a7;
                    }
                } else {
                    uint64_t v40 = v23; // 0x402054
                    v3 = v24;
                    v4 = v26;
                    v5 = str2;
                    v6 = v32 > v40 ? v40 : v32;
                    v7 = v30;
                    v8 = v25;
                    v27 = v29;
                    v16 = v35;
                    v9 = v12;
                    v10 = str;
                    v11 = v13;
                    v14 = v34;
                }
                goto lab_0x401e28;
            }
            default: {
                if (v36 > 110) {
                    // 0x401e53
                    v3 = 1;
                    v4 = v26;
                    v5 = str2;
                    v6 = v32;
                    v7 = v30;
                    v8 = v25;
                    v27 = v29;
                    v16 = v35;
                    v9 = v12;
                    v10 = str;
                    v11 = v13;
                    v14 = v34;
                    if (v36 != 114) {
                        if (v36 > 114) {
                            // 0x401e5e
                            v3 = v24;
                            v4 = 0;
                            v5 = str2;
                            v6 = v32;
                            v7 = v30;
                            v8 = v25;
                            v27 = v29;
                            v16 = v35;
                            v9 = v12;
                            v10 = str;
                            v11 = v13;
                            v14 = v34;
                            if (v36 != 122) {
                                if (v36 != 128) {
                                    // 0x4029dc
                                    function_402c60(1);
                                    // UNREACHABLE
                                }
                                int64_t v41 = (int64_t)g48; // 0x401e9b
                                v3 = v24;
                                v4 = v26;
                                v5 = str2;
                                v6 = v32;
                                v7 = v30;
                                v8 = v25;
                                v27 = v29;
                                v16 = v35;
                                v9 = v12;
                                v10 = v41;
                                v11 = v13;
                                v14 = v41;
                                if (str != 0) {
                                    // 0x401ea7
                                    v3 = v24;
                                    v4 = v26;
                                    v5 = str2;
                                    v6 = v32;
                                    v7 = v30;
                                    v8 = v25;
                                    v27 = v29;
                                    v16 = v35;
                                    v9 = v12;
                                    v10 = v41;
                                    v11 = v13;
                                    v14 = v41;
                                    if (strcmp((char *)str, g48) != 0) {
                                        // 0x402b4e
                                        error(1, (int32_t)"multiple random sources specified" ^ (int32_t)"multiple random sources specified", dcgettext(NULL, "multiple random sources specified", 5));
                                        v21 = 1;
                                        goto lab_0x402b70;
                                    }
                                }
                            }
                        } else {
                            if (v36 != 111) {
                                // 0x4029dc
                                function_402c60(1);
                                // UNREACHABLE
                            }
                            int64_t v42 = (int64_t)g48; // 0x401ed6
                            v3 = v24;
                            v4 = v26;
                            v5 = g48;
                            v6 = v32;
                            v7 = v30;
                            v8 = v25;
                            v27 = v29;
                            v16 = v35;
                            v9 = v12;
                            v10 = str;
                            v11 = v13;
                            v14 = v42;
                            if (str2 != NULL) {
                                int32_t strcmp_rc = strcmp(str2, g48); // 0x401ee8
                                v3 = v24;
                                v4 = v26;
                                v5 = g48;
                                v6 = v32;
                                v7 = v30;
                                v8 = v25;
                                v27 = v29;
                                v16 = v35;
                                v9 = v12;
                                v10 = str;
                                v11 = v13;
                                v14 = v42;
                                v19 = a2;
                                if (strcmp_rc != 0) {
                                    goto lab_0x402a3d;
                                }
                            }
                        }
                    }
                } else {
                    if (v36 == -130) {
                        // 0x4029e6
                        function_402c60(0);
                        // UNREACHABLE
                    }
                    if (v36 <= 0xffffff7e) {
                        if (v36 == -131) {
                            // 0x401feb
                            function_406650((int64_t)g29, "shuf", "GNU coreutils", (int64_t)g18, "Paul Eggert", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x4029dc;
                    }
                    // 0x401e81
                    v3 = v24;
                    v4 = v26;
                    v5 = str2;
                    v6 = v32;
                    v7 = v30;
                    v8 = v25;
                    v27 = v29;
                    v16 = v35;
                    v9 = 1;
                    v10 = str;
                    v11 = v13;
                    v14 = v34;
                    if (v36 != 101) {
                        if (v36 != 105) {
                          lab_0x4029dc:
                            // 0x4029dc
                            function_402c60(1);
                            // UNREACHABLE
                        }
                        char * found_char_pos = strchr(g48, 45); // 0x401f18
                        v18 = a2;
                        if (v25 != 0) {
                            goto lab_0x402a1b;
                        }
                        if (found_char_pos == NULL) {
                            // 0x40235f
                            v33 = (int64_t)g48;
                            char * v43 = dcgettext(NULL, "invalid input range", 5); // 0x40236b
                            function_406af0(v33, (int32_t)"invalid input range" ^ (int32_t)"invalid input range", -1, (int64_t *)&g10, (int64_t)v43, 0);
                            v31 = v30;
                            goto lab_0x402389;
                        }
                        int64_t v44 = (int64_t)found_char_pos; // 0x401f18
                        *found_char_pos = 0;
                        char * v45 = dcgettext(NULL, "invalid input range", 5); // 0x401f4b
                        int64_t v46 = function_406af0((int64_t)g48, (int32_t)"invalid input range" ^ (int32_t)"invalid input range", -1, (int64_t *)&g10, (int64_t)v45, 0); // 0x401f6b
                        *found_char_pos = 45;
                        char * v47 = dcgettext(NULL, "invalid input range", 5); // 0x401f83
                        int64_t v48 = function_406af0(v44 + 1, (int32_t)"invalid input range" ^ (int32_t)"invalid input range", -1, (int64_t *)&g10, (int64_t)v47, 0); // 0x401fa0
                        v3 = v24;
                        v4 = v26;
                        v5 = str2;
                        v6 = v32;
                        v7 = v48;
                        v8 = 1;
                        v27 = 0;
                        v16 = 0;
                        v9 = v12;
                        v10 = str;
                        v11 = v46;
                        v14 = v44;
                        v31 = v48;
                        v33 = v46;
                        if (v48 - v46 == -1 != v48 < v46) {
                            goto lab_0x402389;
                        }
                    }
                }
                goto lab_0x401e28;
            }
        }
    }
  lab_0x4025db_3:;
    char * format2 = dcgettext(NULL, "write error", 5); // 0x4025bd
    uint32_t err_num = *__errno_location(); // 0x4025d2
    error(1, err_num, format2);
    int64_t v49; // 0x401da0
    char * v50 = (char *)v49;
    char * v51 = v50; // 0x4025de
    int64_t v52; // 0x401da0
    int64_t v53 = v52; // 0x4025de
    int64_t v54; // 0x401da0
    int64_t v55 = v54; // 0x4025de
    int64_t v56; // 0x401da0
    int64_t v57 = v56; // 0x4025de
    int64_t v58 = v49; // 0x4025de
    int64_t v59; // 0x401da0
    int64_t v60 = v59; // 0x4025de
    char * v61; // 0x401da0
    char * v62 = v61; // 0x4025de
    char v63; // 0x401da0
    char v64 = v63; // 0x4025de
    int64_t v65; // 0x401da0
    int64_t v66 = v65; // 0x4025de
    int64_t v67; // 0x401da0
    int64_t v68 = v67; // 0x4025de
    char v69; // 0x401da0
    char v70 = v69; // 0x4025de
    char v71; // 0x401da0
    char v72 = v71; // 0x4025de
    char * v73; // 0x401da0
    char * v74 = v73; // 0x4025de
    char v75; // 0x401da0
    char v76 = v75; // 0x4025de
    char v77 = v75; // 0x4025de
    char * v78 = v73; // 0x4025de
    char v79 = v71; // 0x4025de
    char v80 = v69; // 0x4025de
    int64_t v81 = v67; // 0x4025de
    int64_t v82 = v65; // 0x4025de
    char v83 = v63; // 0x4025de
    char * v84 = v61; // 0x4025de
    int64_t v85; // 0x401da0
    int64_t v86 = v85; // 0x4025de
    int64_t v87 = err_num; // 0x4025de
    int64_t v88 = 0; // 0x4025de
    char * v89 = v50; // 0x4025de
    int64_t v90 = v56; // 0x4025de
    int64_t v91 = v54; // 0x4025de
    int64_t v92 = v52; // 0x4025de
    if (v59 == 0) {
        goto lab_0x402664;
    } else {
        goto lab_0x4025e4_2;
    }
  lab_0x40265c:
    // 0x40265c
    function_403420(&v23);
    char v93; // 0x401da0
    v77 = v93;
    char * v94; // 0x401da0
    v78 = v94;
    char v95; // 0x401da0
    v79 = v95;
    char v96; // 0x401da0
    v80 = v96;
    int64_t v97; // 0x401da0
    v81 = v97;
    int64_t v98; // 0x401da0
    v82 = v98;
    char v99; // 0x4025fb
    v83 = v99;
    char * v100; // 0x401da0
    v84 = v100;
    int64_t v101; // 0x4025e4
    v86 = v101;
    int64_t v102; // 0x401da0
    v87 = v102;
    int64_t v103; // 0x401da0
    v88 = v103;
    char * v104; // 0x401da0
    v89 = v104;
    int64_t v105; // 0x401da0
    v90 = v105;
    int64_t v106; // 0x401da0
    v91 = v106;
    int64_t v107; // 0x401da0
    v92 = v107;
    goto lab_0x402664;
  lab_0x402389:;
    int64_t v407 = function_405050((int64_t)g48); // 0x402390
    error(1, *__errno_location(), "%s: %s", dcgettext(NULL, "invalid input range", 5), (char *)v407);
    int64_t v183 = v31; // 0x4023c5
    int64_t v184 = v407; // 0x4023c5
    int64_t v185 = v407; // 0x4023c5
    int64_t v186 = v33; // 0x4023c5
    goto lab_0x4023ca;
  lab_0x402664:;
    int64_t v108 = v86;
    int64_t v109 = v108; // 0x402669
    int64_t v110; // 0x401da0
    int64_t v111; // 0x401da0
    int64_t v112; // 0x401da0
    int64_t v113; // 0x401da0
    int64_t v114; // 0x401da0
    int64_t v115; // 0x401da0
    int64_t v116; // 0x401da0
    int64_t v117; // 0x401da0
    int64_t v118; // 0x401da0
    int64_t v119; // 0x401da0
    int64_t v120; // 0x401da0
    int64_t v121; // 0x401da0
    int64_t v122; // 0x401da0
    char v123; // 0x401da0
    char v124; // 0x401da0
    char v125; // 0x401da0
    char v126; // 0x401da0
    char v127; // 0x401da0
    char v128; // 0x401da0
    char v129; // 0x401da0
    char v130; // 0x401da0
    char * v131; // 0x401da0
    char * v132; // 0x401da0
    char * v133; // 0x401da0
    char v134; // 0x401da0
    char v135; // 0x401da0
    char v136; // 0x401da0
    int64_t v137; // 0x401da0
    int64_t v138; // 0x401da0
    int64_t v139; // 0x401da0
    char * v140; // 0x401da0
    char * v141; // 0x401da0
    char * v142; // 0x401da0
    int64_t v143; // 0x401da0
    int64_t v144; // 0x401da0
    int64_t v145; // 0x401da0
    if ((*v89 & 32) != 0) {
        goto lab_0x402a84;
    } else {
        uint64_t v146 = v92;
        int64_t v147 = v88;
        char * v148 = v84;
        char v149 = v83;
        int64_t v150 = v82;
        uint64_t v151 = v81;
        char v152 = v80;
        char v153 = v79;
        char * v154 = v78;
        char v155 = v77;
        int64_t v156 = v151 > v146 ? v146 : v151; // 0x40267e
        v129 = v155;
        v142 = v154;
        v127 = v153;
        v124 = v152;
        v145 = v156;
        v139 = v150;
        v136 = v149;
        v132 = v148;
        v121 = v108;
        v118 = v147;
        v115 = v156;
        if ((int32_t)function_407390((int64_t)g30, v87) != 0) {
            goto lab_0x402534;
        } else {
            // 0x402694
            v130 = v155;
            v141 = v154;
            v126 = v153;
            v123 = v152;
            v144 = v156;
            v138 = v150;
            v135 = v149;
            v131 = v148;
            v120 = 0;
            v117 = v147;
            v112 = v91;
            v114 = v156;
            v128 = v155;
            v140 = v154;
            v125 = v153;
            v143 = v156;
            v137 = v150;
            v134 = v149;
            v133 = v148;
            v122 = 1;
            v119 = 0;
            v116 = v147;
            v110 = v90;
            v111 = v91;
            v113 = v156;
            if (v152 != 0) {
                goto lab_0x40247b;
            } else {
                goto lab_0x4026ab;
            }
        }
    }
  lab_0x4025e4_2:
    // 0x4025e4
    v93 = v76;
    v94 = v74;
    v95 = v72;
    v96 = v70;
    v97 = v68;
    v98 = v66;
    v100 = v62;
    v103 = v60;
    v102 = v58;
    v106 = v55;
    v104 = v51;
    v101 = &v23;
    function_4032e0(&v23);
    v99 = v57;
    v105 = 0x100000000000000 * v57 >> 56;
    int64_t v157 = v53;
    uint64_t v158 = function_4050e0((int64_t)v100, v157); // 0x40261f
    while (function_4032f0(v97 > v158 ? 24 * v158 + v105 : v101, v102, v64) != 0) {
        int64_t v159 = v157 + 1; // 0x40260a
        v107 = 1;
        if (v157 == 0) {
            goto lab_0x40265c;
        }
        v157 = v159;
        v158 = function_4050e0((int64_t)v100, v157);
    }
    // 0x402649
    v107 = v157;
    int64_t v160 = v101; // 0x402656
    if (v157 == 0) {
        goto lab_0x402a5f;
    } else {
        goto lab_0x40265c;
    }
  lab_0x4020a7:;
    int32_t v161 = *(int32_t *)0x60f2dc; // 0x4020a7
    int32_t v162 = (int32_t)v20 - v161; // 0x4020ae
    int64_t v163 = v162; // 0x4020ae
    int64_t v164 = 8 * (int64_t)v161 + a2; // 0x4020b0
    int64_t v165; // 0x401da0
    int64_t v166; // 0x401da0
    int64_t v167; // 0x401da0
    int64_t v168; // 0x401da0
    int64_t v169; // 0x401da0
    int64_t v170; // 0x401da0
    int64_t v171; // 0x401da0
    int64_t v172; // 0x401da0
    int64_t v173; // 0x401da0
    int64_t v174; // 0x401da0
    int64_t v175; // 0x401da0
    char v176; // 0x401da0
    char v177; // 0x401da0
    int64_t v178; // 0x401da0
    int64_t v179; // 0x4020ed
    int64_t v180; // 0x4020f1
    int64_t str3; // 0x4020fe
    if (v12 == 0) {
        if (v25 == 0) {
            // 0x4020d5
            v171 = 8;
            v174 = v164;
            if (v162 > 1) {
                goto lab_0x402afc;
            } else {
                uint32_t v181 = v162 - 1; // 0x4020ed
                v179 = v181;
                v180 = (int64_t)g30;
                if (v181 != 0) {
                    goto lab_0x40273e;
                } else {
                    int64_t * v182 = (int64_t *)v164; // 0x4020fe
                    str3 = *v182;
                    if (strcmp((char *)str3, "-") == 0) {
                        goto lab_0x40273e;
                    } else {
                        if (v32 != 0) {
                            // 0x402965
                            if (function_403130(str3, (int64_t *)"r", v180) == 0) {
                                // 0x4029ed
                                error(1, *__errno_location(), "%s", (char *)function_404ed0(0, 3, *v182));
                                v18 = v164;
                              lab_0x402a1b:
                                // 0x402a1b
                                error(1, (int32_t)"multiple -i options specified" ^ (int32_t)"multiple -i options specified", dcgettext(NULL, "multiple -i options specified", 5));
                                v19 = v18;
                              lab_0x402a3d:
                                // 0x402a3d
                                error(1, (int32_t)"multiple output files specified" ^ (int32_t)"multiple output files specified", dcgettext(NULL, "multiple output files specified", 5));
                                v160 = v19;
                                goto lab_0x402a5f;
                            } else {
                                // 0x40297a
                                function_4030b0((int64_t)g30, 2, v180);
                                v167 = str3;
                                if (v24 == 0 == (v32 != -1)) {
                                    goto lab_0x40276e;
                                } else {
                                    // 0x40299e
                                    v173 = &v23;
                                    goto lab_0x4027ca;
                                }
                            }
                        } else {
                            // 0x402123
                            function_4030b0(v180, 2, v22);
                            v172 = v164;
                            v168 = str3;
                            if (v24 != 0) {
                                // 0x40299e
                                v173 = &v23;
                                goto lab_0x4027ca;
                            } else {
                                goto lab_0x40213b;
                            }
                        }
                    }
                }
            }
        } else {
            // 0x402227
            v171 = 0;
            v174 = v164;
            if (v162 >= 0 == (v162 != 0)) {
                goto lab_0x402afc;
            } else {
                // 0x40222f
                v176 = v25;
                v165 = 0;
                v178 = v30;
                v177 = v29;
                v175 = 0;
                v170 = v163;
                v166 = v13;
                v169 = v30 + 1 - v13;
                goto lab_0x40223d;
            }
        }
    } else {
        // 0x4020c1
        v183 = v30;
        v184 = v164;
        v185 = v163;
        v186 = v13;
        if (v25 != 0) {
            // 0x4029bd
            error(0, (int32_t)"cannot combine -e and -i options" ^ (int32_t)"cannot combine -e and -i options", dcgettext(NULL, "cannot combine -e and -i options", 5));
            // 0x4029dc
            function_402c60(1);
            // UNREACHABLE
        }
        goto lab_0x4023ca;
    }
  lab_0x401e28:
    // 0x401e28
    v28 = v27;
    v17 = v16;
    v15 = v14;
    goto lab_0x401e28_2;
  lab_0x4023ca:;
    int64_t v187 = 0x100000000 * v185;
    int64_t v188 = v187 >> 32; // 0x4023ca
    int64_t v189 = v188; // 0x4023f3
    if (v185 > 0) {
        int64_t v190 = v188; // 0x4023eb
        int64_t v191 = 0;
        int64_t v192 = v191 + 1; // 0x4023e2
        int64_t v193 = *(int64_t *)(8 * v191 + v184); // 0x4023e6
        int64_t v194 = -1;
        int64_t v195 = 0; // 0x4023e6
        int64_t v196; // 0x401da0
        bool v197; // 0x401da0
        int64_t v198; // 0x4023e6
        while (v194 != 0) {
            v196 = v193;
            v198 = v194 - 1;
            v193 = v196 + (v197 ? -1 : 1);
            v195 = v198;
            if (*(char *)v196 == 0) {
                // break -> 0x4023f0
                break;
            }
            v194 = v198;
            v195 = 0;
        }
        // 0x4023f0
        v190 = v190 - 1 + -1 - v195;
        v189 = v190;
        while (v192 != v185) {
            // 0x4023da
            v191 = v192;
            v192 = v191 + 1;
            v193 = *(int64_t *)(8 * v191 + v184);
            v194 = -1;
            v195 = 0;
            while (v194 != 0) {
                v196 = v193;
                v198 = v194 - 1;
                v193 = v196 + (v197 ? -1 : 1);
                v195 = v198;
                if (*(char *)v196 == 0) {
                    // break -> 0x4023f0
                    break;
                }
                v194 = v198;
                v195 = 0;
            }
            // 0x4023f0
            v190 = v190 - 1 + -1 - v195;
            v189 = v190;
        }
    }
    int64_t str4 = function_406790(v189); // 0x4023ff
    int64_t v199 = v185 & 0xffffffff; // 0x402404
    int64_t v200 = 0; // 0x402449
    int64_t v201 = str4; // 0x402449
    if (v199 != 0) {
        int64_t * str5 = (int64_t *)(8 * v200 + v184); // 0x40242b
        char * v202 = stpcpy((char *)str4, (char *)*str5); // 0x402432
        *str5 = str4;
        int64_t v203 = v200 + 1; // 0x40243b
        *v202 = v26;
        int64_t v204 = (int64_t)v202 + 1; // 0x402442
        int64_t str6 = v204; // 0x402449
        v200 = v203;
        v201 = v204;
        while (v203 != v199) {
            // 0x40242b
            str5 = (int64_t *)(8 * v200 + v184);
            v202 = stpcpy((char *)str6, (char *)*str5);
            *str5 = str6;
            v203 = v200 + 1;
            *v202 = v26;
            v204 = (int64_t)v202 + 1;
            str6 = v204;
            v200 = v203;
            v201 = v204;
        }
    }
    // 0x40244b
    *(int64_t *)((v187 >> 29) + v184) = v201;
    v176 = v25;
    v165 = v12;
    v178 = v183;
    v177 = v12;
    v175 = v184;
    v170 = v199;
    v166 = v186;
    v169 = v188;
    goto lab_0x40223d;
  lab_0x402afc:
    // 0x402afc
    function_405050(*(int64_t *)(v174 + v171));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    function_402c60(1);
    // UNREACHABLE
  lab_0x40223d:;
    char v205 = 0; // 0x402242
    char v206 = v26; // 0x402242
    char * v207 = str2; // 0x402242
    char v208 = v176; // 0x402242
    int64_t v209 = v32; // 0x402242
    int64_t v210 = v178; // 0x402242
    char v211 = v177; // 0x402242
    int64_t v212 = v175; // 0x402242
    int64_t v213 = v170; // 0x402242
    int64_t v214 = v165; // 0x402242
    int64_t v215 = str; // 0x402242
    int64_t v216 = v166; // 0x402242
    int64_t v217 = v169; // 0x402242
    int64_t v218; // 0x401da0
    int64_t v219; // 0x401da0
    int64_t v220; // 0x401da0
    int64_t v221; // 0x401da0
    int64_t v222; // 0x401da0
    int64_t v223; // 0x401da0
    char v224; // 0x401da0
    char v225; // 0x401da0
    char v226; // 0x401da0
    char v227; // 0x401da0
    int64_t v228; // 0x401da0
    char * v229; // 0x401da0
    int64_t v230; // 0x401da0
    if (v24 == 0) {
        goto lab_0x40228b;
    } else {
        int64_t v231 = function_4050a0(); // 0x40224b
        v224 = v24;
        v226 = v26;
        v229 = str2;
        v225 = v176;
        v230 = v32;
        v228 = v178;
        v227 = v177;
        v223 = v175;
        v222 = v170;
        v218 = v165;
        v219 = str;
        v220 = v166;
        v221 = v169;
        if (v231 != 0) {
            char * v232 = (char *)v231; // 0x402250
            v130 = v26;
            v141 = str2;
            v126 = v176;
            v123 = v24;
            v144 = v32;
            v138 = v178;
            v135 = v177;
            v131 = v232;
            v120 = v175;
            v117 = v170;
            v112 = v166;
            v114 = v169;
            if ((v176 || (char)v165) == 0) {
                // 0x402b35
                v130 = v26;
                v141 = str2;
                v126 = v176;
                v123 = v24;
                v144 = v32;
                v138 = v178;
                v135 = v177;
                v131 = v232;
                v120 = v175;
                v117 = v170;
                v112 = v166;
                v114 = v169;
                v129 = v26;
                v142 = str2;
                v127 = v176;
                v124 = v24;
                v145 = v32;
                v139 = v178;
                v136 = v177;
                v132 = v232;
                v121 = v175;
                v118 = v170;
                v115 = v169;
                if ((int32_t)function_407390((int64_t)g30, -1) == 0) {
                    goto lab_0x40247b;
                } else {
                    goto lab_0x402534;
                }
            } else {
                goto lab_0x40247b;
            }
        } else {
            goto lab_0x40225e;
        }
    }
  lab_0x40273e:
    // 0x40273e
    function_4030b0(v180, 2, v22);
    if (v24 != 0 || v32 == -1) {
        // 0x40299e
        v173 = &v23;
        goto lab_0x4027ca;
    } else {
        // 0x402762
        v172 = v164;
        v168 = str3;
        v167 = str3;
        if (v32 == 0) {
            goto lab_0x40213b;
        } else {
            goto lab_0x40276e;
        }
    }
  lab_0x40228b:;
    int64_t v233 = v217;
    int64_t v234 = v216;
    int64_t v235 = v214;
    int64_t v236 = v213;
    int64_t v237 = v212;
    char v238 = v211;
    int64_t v239 = v210;
    uint64_t v240 = v209;
    char v241 = v208;
    char * v242 = v207;
    char v243 = v206;
    char v244 = v205;
    int64_t v245 = v240 > v233 ? v233 : v240; // 0x402296
    int64_t v246 = function_405280(v245, v233); // 0x4022a2
    int64_t v247 = function_4050a0(); // 0x4022ad
    v224 = v244;
    v226 = v243;
    v229 = v242;
    v225 = v241;
    v230 = v245;
    v228 = v239;
    v227 = v238;
    v223 = v237;
    v222 = v236;
    v218 = v235;
    v219 = v215;
    v220 = v234;
    v221 = v233;
    int64_t v248; // 0x401da0
    int64_t v249; // 0x401da0
    int64_t v250; // 0x401da0
    int64_t v251; // 0x401da0
    int64_t v252; // 0x401da0
    int64_t v253; // 0x401da0
    int64_t v254; // 0x401da0
    int64_t v255; // 0x401da0
    int64_t v256; // 0x401da0
    char v257; // 0x401da0
    char v258; // 0x401da0
    char v259; // 0x401da0
    char v260; // 0x401da0
    char v261; // 0x401da0
    char v262; // 0x401da0
    char * v263; // 0x401da0
    char * v264; // 0x401da0
    char v265; // 0x401da0
    char v266; // 0x401da0
    int64_t v267; // 0x401da0
    int64_t v268; // 0x401da0
    char * v269; // 0x401da0
    char * v270; // 0x401da0
    int64_t v271; // 0x401da0
    int64_t v272; // 0x401da0
    if (v247 == 0) {
        goto lab_0x40225e;
    } else {
        char * v273 = (char *)v247; // 0x4022b2
        if ((v241 || (char)v235) == 0) {
            // 0x402514
            v129 = v243;
            v142 = v242;
            v127 = v241;
            v124 = 0;
            v145 = v245;
            v139 = v239;
            v136 = v238;
            v132 = v273;
            v121 = v237;
            v118 = v236;
            v115 = v233;
            v128 = v243;
            v140 = v242;
            v125 = v241;
            v143 = v245;
            v137 = v239;
            v134 = v238;
            v133 = v273;
            v122 = 0;
            v119 = v237;
            v116 = v236;
            v110 = 0;
            v111 = v234;
            v113 = v233;
            if ((int32_t)function_407390((int64_t)g30, v246) == 0) {
                goto lab_0x4026ab;
            } else {
                goto lab_0x402534;
            }
        } else {
            int64_t v274 = function_4052b0(v247, v245, v233); // 0x4022d6
            v261 = v243;
            v270 = NULL;
            v260 = v241;
            v257 = v244;
            v272 = v245;
            v268 = v239;
            v266 = v238;
            v263 = v273;
            v256 = v274;
            v255 = v237;
            v253 = v236;
            v249 = v234;
            v251 = v233;
            if (v242 == NULL) {
                goto lab_0x402305;
            } else {
                int64_t v275 = (int64_t)v242;
                int64_t v276 = function_403130(v275, &g2, (int64_t)g29); // 0x4022f7
                v261 = v243;
                v270 = v242;
                v260 = v241;
                v257 = v244;
                v272 = v245;
                v268 = v239;
                v266 = v238;
                v263 = v273;
                v256 = v274;
                v255 = v237;
                v253 = v236;
                v249 = v234;
                v251 = v233;
                v248 = v275;
                v262 = v243;
                v269 = v242;
                v259 = v241;
                v258 = v244;
                v271 = v245;
                v267 = v239;
                v265 = v238;
                v264 = v273;
                v254 = v237;
                v252 = v236;
                v250 = v233;
                if (v276 == 0) {
                    goto lab_0x4028ee;
                } else {
                    goto lab_0x402305;
                }
            }
        }
    }
  lab_0x40225e:
    // 0x40225e
    error(1, *__errno_location(), "%s", (char *)function_404ed0(0, 3, v219));
    v205 = v224;
    v206 = v226;
    v207 = v229;
    v208 = v225;
    v209 = v230;
    v210 = v228;
    v211 = v227;
    v212 = v223;
    v213 = v222;
    v214 = v218;
    v215 = v219;
    v216 = v220;
    v217 = v221;
    goto lab_0x40228b;
  lab_0x4027ca:;
    int64_t v277 = function_405fa0((int64_t)g30, &v23); // 0x4027dd
    int64_t v278 = v173; // 0x4027e8
    if (v277 == 0) {
        goto lab_0x402ad0;
    } else {
        int64_t v279 = 0; // 0x4027f6
        if (v23 != 0) {
            int64_t v280 = v23 + v277;
            v279 = v23;
            if (v26 != *(char *)(v280 - 1)) {
                // 0x402803
                v23++;
                *(char *)v280 = v26;
                v279 = v23;
            }
        }
        uint64_t v281 = v279 + v277; // 0x402817
        int64_t v282 = v26;
        int64_t v283 = 0; // 0x402849
        int64_t v284 = 1; // 0x402849
        if (v281 > v277) {
            int64_t v285 = v277;
            int64_t v286 = 1;
            int64_t v287 = function_4083a0(v285, v282, v281 - v285) + 1; // 0x40283b
            int64_t v288 = v286 + 1; // 0x402842
            while (v281 > v287) {
                // 0x40282e
                v285 = v287;
                v286 = v288;
                v287 = function_4083a0(v285, v282, v281 - v285) + 1;
                v288 = v286 + 1;
            }
            // 0x40284b
            if (v288 % 0x1000000000000001 != 0) {
                // 0x402b70
                function_4069e0(v287);
                // UNREACHABLE
            }
            // 0x402874
            v283 = v286;
            v284 = v288;
            v21 = v287;
            if (v288 > 0x1fffffffffffffff) {
              lab_0x402b70:
                // 0x402b70
                function_4069e0(v21);
                // UNREACHABLE
            }
        }
        int64_t v289 = function_406790(8 * v284); // 0x40288a
        *(int64_t *)v289 = v277;
        int64_t v290 = 8 * v283; // 0x4028a9
        if (v290 != 0) {
            int64_t v291 = v277;
            int64_t v292 = v289 + 8; // 0x4028c0
            int64_t v293 = function_4083a0(v291, v282, v281 - v291) + 1; // 0x4028cc
            *(int64_t *)v292 = v293;
            int64_t v294 = v292; // 0x4028d7
            while (v292 != v289 + v290) {
                // 0x4028ba
                v291 = v293;
                v292 = v294 + 8;
                v293 = function_4083a0(v291, v282, v281 - v291) + 1;
                *(int64_t *)v292 = v293;
                v294 = v292;
            }
        }
        // 0x4028d9
        v176 = 0;
        v165 = 0;
        v178 = v30;
        v177 = v289;
        v175 = 0x100000000000000 * v289 >> 56;
        v170 = v179;
        v166 = v13;
        v169 = v283;
        goto lab_0x40223d;
    }
  lab_0x40213b:;
    int64_t v295 = function_4050a0(); // 0x402142
    v224 = v24;
    v226 = v26;
    v229 = str2;
    v225 = 0;
    v230 = v32;
    v228 = v30;
    v227 = v29;
    v223 = v172;
    v222 = v179;
    v218 = 0;
    v219 = str;
    v220 = v13;
    v221 = v168;
    if (v295 == 0) {
        goto lab_0x40225e;
    } else {
        char * v296 = (char *)v295; // 0x402147
        int64_t v297 = (int64_t)g30; // 0x402164
        int64_t v298 = v32 < 1024 ? v32 : 1024; // 0x40217a
        int64_t v299 = function_406960(v298, 24); // 0x402184
        int64_t v300 = 0; // 0x402194
        int64_t v301 = v299; // 0x402194
        int64_t v302 = v298; // 0x402194
        v77 = v26;
        v78 = str2;
        v79 = 0;
        v80 = v24;
        v81 = 0;
        v82 = v30;
        v83 = v26;
        v84 = v296;
        v86 = v172;
        v87 = 24;
        v88 = 0;
        v89 = g30;
        v90 = v299;
        v91 = v13;
        v92 = 0;
        if (v32 != 0) {
            while (true) {
                int64_t v303 = v301;
                int64_t v304 = 24 * v300; // 0x40219a
                int64_t v305 = v304 + v303; // 0x4021a5
                int64_t v306 = function_4032f0(v305, v297, v26); // 0x4021aa
                v77 = v26;
                v78 = str2;
                v79 = 0;
                v80 = v24;
                v81 = v32;
                v82 = v30;
                v83 = v26;
                v84 = v296;
                v86 = v304;
                v87 = v297;
                v88 = 0;
                v89 = g30;
                v90 = v303;
                v91 = v13;
                v92 = v300;
                if (v306 == 0) {
                    // break (via goto) -> 0x402664
                    goto lab_0x402664;
                }
                int64_t v307 = v300 + 1; // 0x4021bb
                while (v307 < v302) {
                    // 0x40218f
                    v51 = g30;
                    v53 = v32;
                    v55 = v13;
                    v57 = v303;
                    v58 = v297;
                    v60 = v306;
                    v62 = v296;
                    v64 = v26;
                    v66 = v30;
                    v68 = v32;
                    v70 = v24;
                    v72 = 0;
                    v74 = str2;
                    v76 = v26;
                    if (v32 == v307) {
                        goto lab_0x4025e4_2;
                    }
                    v304 = 24 * v307;
                    v305 = v304 + v303;
                    v306 = function_4032f0(v305, v297, v26);
                    v77 = v26;
                    v78 = str2;
                    v79 = 0;
                    v80 = v24;
                    v81 = v32;
                    v82 = v30;
                    v83 = v26;
                    v84 = v296;
                    v86 = v304;
                    v87 = v297;
                    v88 = 0;
                    v89 = g30;
                    v90 = v303;
                    v91 = v13;
                    v92 = v307;
                    if (v306 == 0) {
                        // break (via goto) -> 0x402664
                        goto lab_0x402664;
                    }
                    // 0x4021bb
                    v307++;
                }
                int64_t v308 = v302 + 1024; // 0x4021c9
                uint128_t v309 = 24 * (int128_t)v308; // 0x4021d8
                int64_t v310 = v309; // 0x4021d8
                v21 = v305;
                if (v310 < 0) {
                    // 0x402b70
                    function_4069e0(v21);
                    // UNREACHABLE
                }
                // 0x4021ea
                v21 = v305;
                if (v309 % 0x1f0000000000000001 != 0) {
                    // 0x402b70
                    function_4069e0(v21);
                    // UNREACHABLE
                }
                int64_t v311 = function_4067f0(v303, v310); // 0x4021f9
                memset((int64_t *)(v304 + 24 + v311), 0, 0x6000);
                v300 = v307;
                v301 = v311;
                v302 = v308;
                v51 = g30;
                v53 = v32;
                v55 = v13;
                v57 = v311;
                v58 = v297;
                v60 = v306;
                v62 = v296;
                v64 = v26;
                v66 = v30;
                v68 = v32;
                v70 = v24;
                v72 = 0;
                v74 = str2;
                v76 = v26;
                if (v32 == v307) {
                    goto lab_0x4025e4_2;
                }
            }
        }
        goto lab_0x402664;
    }
  lab_0x40276e:;
    int64_t v312 = &v23; // 0x40276e
    int32_t v313 = __fxstat(1, 0, (struct stat *)&v23); // 0x40277d
    v172 = v312;
    v168 = v167;
    if (v313 != 0) {
        goto lab_0x40213b;
    } else {
        // 0x40278a
        v172 = v312;
        v168 = v167;
        int32_t v314; // 0x401da0
        if ((v314 & 0xd000) != 0x8000) {
            goto lab_0x40213b;
        } else {
            int32_t v315 = lseek(0, 0, SEEK_CUR); // 0x4027ac
            v172 = v312;
            v168 = v167;
            if (v315 < 0) {
                goto lab_0x40213b;
            } else {
                // 0x4027ba
                v172 = v312;
                v168 = v167;
                v173 = v312;
                if (v2 - (int64_t)v315 > 0x800000) {
                    goto lab_0x40213b;
                } else {
                    goto lab_0x4027ca;
                }
            }
        }
    }
  lab_0x40247b:;
    int64_t v316 = v114;
    int64_t v317 = v112;
    int64_t v318 = v117;
    int64_t v319 = v120;
    char * v320 = v131;
    char v321 = v135;
    int64_t v322 = v138;
    int64_t v323 = v144;
    char v324 = v123;
    char v325 = v126;
    char * v326 = v141;
    char v327 = v130;
    if (v326 == NULL) {
        goto lab_0x4024a2;
    } else {
        int64_t v328 = (int64_t)v326;
        int64_t v329 = function_403130(v328, &g2, (int64_t)g29); // 0x402494
        v248 = v328;
        v262 = v327;
        v269 = v326;
        v259 = v325;
        v258 = v324;
        v271 = v323;
        v267 = v322;
        v265 = v321;
        v264 = v320;
        v254 = v319;
        v252 = v318;
        v250 = v316;
        if (v329 == 0) {
            goto lab_0x4028ee;
        } else {
            goto lab_0x4024a2;
        }
    }
  lab_0x402ad0:
    // 0x402ad0
    error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
    v171 = 0;
    v174 = v278;
    goto lab_0x402afc;
  lab_0x4026ab:;
    int64_t v330 = v113;
    int64_t v331 = v111;
    int64_t v332 = v110;
    int64_t v333 = v116;
    int64_t v334 = v119;
    int64_t v335 = v122;
    char * v336 = v133;
    char v337 = v134;
    int64_t v338 = v137;
    int64_t v339 = v143;
    char v340 = v125;
    char * v341 = v140;
    char v342 = v128;
    char v343 = v335; // 0x4026b8
    int64_t v344 = function_4052b0((int64_t)v336, v339, v330); // 0x4026bc
    if (v341 == NULL) {
        goto lab_0x4026f9;
    } else {
        int64_t v345 = (int64_t)v341;
        int64_t v346 = function_403130(v345, &g2, (int64_t)g29); // 0x4026e6
        v248 = v345;
        v262 = v342;
        v269 = v341;
        v259 = v340;
        v258 = v343;
        v271 = v339;
        v267 = v338;
        v265 = v337;
        v264 = v336;
        v254 = v334;
        v252 = v333;
        v250 = v330;
        if (v346 == 0) {
            goto lab_0x4028ee;
        } else {
            goto lab_0x4026f9;
        }
    }
  lab_0x402534:
    // 0x402534
    error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
    char v347 = v129; // 0x402559
    char * v348 = v142; // 0x402559
    char v349 = v127; // 0x402559
    char v350 = v124; // 0x402559
    int64_t v351 = v145; // 0x402559
    int64_t v352 = v139; // 0x402559
    char v353 = v136; // 0x402559
    char * v354 = v132; // 0x402559
    int64_t v355 = v121; // 0x402559
    int64_t v356 = v118; // 0x402559
    int64_t v357 = v115; // 0x402559
    goto lab_0x40255e;
  lab_0x402305:;
    int64_t v383 = v251;
    int64_t v384 = v253;
    int64_t v385 = v256;
    char * v386 = v263;
    char v387 = v266;
    int64_t v388 = v268;
    int64_t v389 = v272;
    char v390 = v257;
    char v391 = v260;
    char * v392 = v270;
    char v393 = v261;
    char v371 = v393; // 0x40230a
    char * v372 = v392; // 0x40230a
    char v373 = 0; // 0x40230a
    char v374 = v390; // 0x40230a
    int64_t v365 = v389; // 0x40230a
    int64_t v375 = v388; // 0x40230a
    char v376 = v387; // 0x40230a
    char * v377 = v386; // 0x40230a
    int64_t v368 = v385; // 0x40230a
    int64_t v369 = v255; // 0x40230a
    int64_t v378 = v384; // 0x40230a
    int64_t v379 = v383; // 0x40230a
    if (v391 == 0) {
        goto lab_0x40291d;
    } else {
        // 0x402310
        if (v389 == 0) {
            // 0x40234b
            return 0;
        }
        int64_t v394 = 0;
        int64_t v395 = *(int64_t *)(8 * v394 + v385); // 0x40231f
        int32_t v396 = __printf_chk(1, "%lu%c", (int32_t)(v395 + v249), v393); // 0x402335
        v75 = v393;
        v73 = v392;
        v71 = v391;
        v69 = v390;
        v67 = v389;
        v65 = v388;
        v63 = v387;
        v61 = v386;
        v85 = v394;
        v59 = v384;
        v49 = v393;
        v56 = v389;
        v54 = v249;
        v52 = v383;
        while (v396 >= 0) {
            int64_t v397 = v394 + 1; // 0x402342
            if (v397 == v389) {
                // 0x40234b
                return 0;
            }
            v394 = v397;
            v395 = *(int64_t *)(8 * v394 + v385);
            v396 = __printf_chk(1, "%lu%c", (int32_t)(v395 + v249), v393);
            v75 = v393;
            v73 = v392;
            v71 = v391;
            v69 = v390;
            v67 = v389;
            v65 = v388;
            v63 = v387;
            v61 = v386;
            v85 = v394;
            v59 = v384;
            v49 = v393;
            v56 = v389;
            v54 = v249;
            v52 = v383;
        }
        goto lab_0x4025db_3;
    }
  lab_0x4024a2:
    if (v323 == 0) {
        // 0x40234b
        return 0;
    }
    int64_t v382 = v319; // 0x4024b1
    if (v316 == 0) {
        goto lab_0x402aae;
    } else {
        // 0x4024b7
        v347 = v327;
        v348 = v326;
        v349 = 0;
        v350 = v324;
        v351 = v323;
        v352 = v322;
        v353 = v321;
        v354 = v320;
        v355 = v319;
        v356 = v318;
        v357 = v316;
        if (v325 != 0) {
            int64_t v398 = (int64_t)v320; // 0x4024d4
            int64_t v399 = v322 - v317; // 0x4024d9
            int64_t v400 = 0;
            int32_t v401 = __printf_chk(1, "%lu%c", (int32_t)(function_4050e0(v398, v399) + v317), v327); // 0x4024f9
            v75 = v327;
            v73 = v326;
            v71 = v325;
            v69 = v324;
            v67 = v323;
            v65 = v322;
            v63 = v321;
            v61 = v320;
            v85 = v399;
            v59 = v318;
            v49 = v400;
            v56 = v398;
            v54 = v317;
            v52 = v323;
            if (v401 < 0) {
                goto lab_0x4025db_3;
            }
            int64_t v402 = v400 + 1; // 0x402506
            while (v402 != v323) {
                // 0x4024dc
                v400 = v402;
                v401 = __printf_chk(1, "%lu%c", (int32_t)(function_4050e0(v398, v399) + v317), v327);
                v75 = v327;
                v73 = v326;
                v71 = v325;
                v69 = v324;
                v67 = v323;
                v65 = v322;
                v63 = v321;
                v61 = v320;
                v85 = v399;
                v59 = v318;
                v49 = v400;
                v56 = v398;
                v54 = v317;
                v52 = v323;
                if (v401 < 0) {
                    goto lab_0x4025db_3;
                }
                // 0x402506
                v402 = v400 + 1;
            }
            // 0x40234b
            return 0;
        }
        goto lab_0x40255e;
    }
  lab_0x402a5f:
    // 0x402a5f
    error(1, EOVERFLOW, dcgettext(NULL, "too many input lines", 5));
    v109 = v160;
    goto lab_0x402a84;
  lab_0x4026f9:
    // 0x4026f9
    v261 = v342;
    v270 = v341;
    v260 = v340;
    v257 = v343;
    v272 = v339;
    v268 = v338;
    v266 = v337;
    v263 = v336;
    v256 = v344;
    v255 = v334;
    v253 = v333;
    v249 = v331;
    v251 = v330;
    if (v335 != 0) {
        // 0x402734
        if (v330 == 0) {
            // 0x40234b
            return 0;
        }
        int64_t v403 = 0;
        int64_t v404 = 24 * *(int64_t *)(8 * v403 + v344) + v332; // 0x402716
        int64_t * n3 = (int64_t *)(v404 + 8); // 0x402719
        int64_t data3 = *(int64_t *)(v404 + 16); // 0x40271d
        int32_t v405 = fwrite_unlocked((int64_t *)data3, 1, (int32_t)*n3, g29); // 0x402721
        v75 = v342;
        v73 = v341;
        v71 = v340;
        v69 = v343;
        v67 = v339;
        v65 = v338;
        v63 = v337;
        v61 = v336;
        v85 = v404;
        v59 = v333;
        v49 = v403;
        v56 = v332;
        v54 = v331;
        v52 = v330;
        while (*n3 == (int64_t)v405) {
            int64_t v406 = v403 + 1; // 0x402730
            if (v330 == v406) {
                // 0x40234b
                return 0;
            }
            v403 = v406;
            v404 = 24 * *(int64_t *)(8 * v403 + v344) + v332;
            n3 = (int64_t *)(v404 + 8);
            data3 = *(int64_t *)(v404 + 16);
            v405 = fwrite_unlocked((int64_t *)data3, 1, (int32_t)*n3, g29);
            v75 = v342;
            v73 = v341;
            v71 = v340;
            v69 = v343;
            v67 = v339;
            v65 = v338;
            v63 = v337;
            v61 = v336;
            v85 = v404;
            v59 = v333;
            v49 = v403;
            v56 = v332;
            v54 = v331;
            v52 = v330;
        }
        goto lab_0x4025db_3;
    } else {
        goto lab_0x402305;
    }
  lab_0x40255e:;
    int64_t v358 = v351;
    int64_t v359 = v357 - 1; // 0x40255e
    int64_t v360 = (int64_t)v354; // 0x40256a
    int64_t v361 = 0;
    int64_t v362 = 8 * function_4050e0(v360, v359) + v355; // 0x402595
    int64_t data = *(int64_t *)v362; // 0x40259a
    int64_t n = *(int64_t *)(v362 + 8) - data; // 0x4025a1
    v75 = v347;
    v73 = v348;
    v71 = v349;
    v69 = v350;
    v67 = v358;
    v65 = v352;
    v63 = v353;
    v61 = v354;
    v85 = v355;
    v59 = v356;
    v49 = v359;
    v56 = v361;
    v54 = v360;
    v52 = v358;
    if (n != (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g29)) {
        goto lab_0x4025db_3;
    }
    int64_t v363 = v361 + 1; // 0x402571
    while (v358 != v363) {
        // 0x40257e
        v361 = v363;
        v362 = 8 * function_4050e0(v360, v359) + v355;
        data = *(int64_t *)v362;
        n = *(int64_t *)(v362 + 8) - data;
        v75 = v347;
        v73 = v348;
        v71 = v349;
        v69 = v350;
        v67 = v358;
        v65 = v352;
        v63 = v353;
        v61 = v354;
        v85 = v355;
        v59 = v356;
        v49 = v359;
        v56 = v361;
        v54 = v360;
        v52 = v358;
        if (n != (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g29)) {
            goto lab_0x4025db_3;
        }
        // 0x402571
        v363 = v361 + 1;
    }
    // 0x40234b
    return 0;
  lab_0x40291d:;
    int64_t v364 = v365;
    if (v364 == 0) {
        // 0x40234b
        return 0;
    }
    int64_t v366 = 0;
    int64_t v367 = 8 * *(int64_t *)(8 * v366 + v368) + v369; // 0x402944
    int64_t data2 = *(int64_t *)v367; // 0x402949
    int64_t n2 = *(int64_t *)(v367 + 8) - data2; // 0x402950
    int32_t v370 = fwrite_unlocked((int64_t *)data2, 1, (int32_t)n2, g29); // 0x402956
    v75 = v371;
    v73 = v372;
    v71 = v373;
    v69 = v374;
    v67 = v364;
    v65 = v375;
    v63 = v376;
    v61 = v377;
    v85 = v369;
    v59 = v378;
    v49 = n2;
    v56 = v366;
    v54 = v364;
    v52 = v379;
    if (n2 != (int64_t)v370) {
        goto lab_0x4025db_3;
    }
    int64_t v380 = v366 + 1; // 0x402927
    while (v380 != v364) {
        // 0x402934
        v366 = v380;
        v367 = 8 * *(int64_t *)(8 * v366 + v368) + v369;
        data2 = *(int64_t *)v367;
        n2 = *(int64_t *)(v367 + 8) - data2;
        v370 = fwrite_unlocked((int64_t *)data2, 1, (int32_t)n2, g29);
        v75 = v371;
        v73 = v372;
        v71 = v373;
        v69 = v374;
        v67 = v364;
        v65 = v375;
        v63 = v376;
        v61 = v377;
        v85 = v369;
        v59 = v378;
        v49 = n2;
        v56 = v366;
        v54 = v364;
        v52 = v379;
        if (n2 != (int64_t)v370) {
            goto lab_0x4025db_3;
        }
        // 0x402927
        v380 = v366 + 1;
    }
    // 0x40234b
    return 0;
  lab_0x4028ee:;
    int64_t v381 = function_404ed0(0, 3, v248); // 0x4028fa
    error(1, *__errno_location(), "%s", (char *)v381);
    v371 = v262;
    v372 = v269;
    v373 = v259;
    v374 = v258;
    v365 = v271;
    v375 = v267;
    v376 = v265;
    v377 = v264;
    v368 = v381;
    v369 = v254;
    v378 = v252;
    v379 = v250;
    goto lab_0x40291d;
  lab_0x402aae:
    // 0x402aae
    error(1, (int32_t)"no lines to repeat" ^ (int32_t)"no lines to repeat", dcgettext(NULL, "no lines to repeat", 5));
    v278 = v382;
    goto lab_0x402ad0;
  lab_0x402a84:
    // 0x402a84
    error(1, *__errno_location(), dcgettext(NULL, "read error", 5));
    v382 = v109;
    goto lab_0x402aae;
}
// Address range: 0x402b80 - 0x402bab
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402b80
    int64_t v1; // 0x402b80
    __libc_start_main(0x401da0, (int32_t)a4, (char **)&v1, (void (*)())0x409f20, (void (*)())0x409f80, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x402bab - 0x402bca
int64_t function_402bab(void) {
    // 0x402bab
    return &g28;
}
// Address range: 0x402bca - 0x402c01
int64_t function_402bca(void) {
    // 0x402bca
    return 0;
}
// Address range: 0x402c01 - 0x402c58
int64_t function_402c01(void) {
    // 0x402c01
    if (g33 != 0) {
        // 0x402c57
        int64_t result; // 0x402c01
        return result;
    }
    int64_t v1 = g34; // 0x402c34
    int64_t result2; // 0x402c46
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402c46
        result2 = function_402bab();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402c36
        v1++;
    }
    // 0x402c2a
    g34 = v1;
    // 0x402c46
    result2 = function_402bab();
    g33 = 1;
    return result2;
}
// Address range: 0x402c58 - 0x402c5d
int64_t function_402c58(void) {
    // 0x402c58
    return function_402bca();
}
// Address range: 0x402c60 - 0x402fdd
int64_t function_402c60(int64_t a1) {
    int32_t status = a1; // 0x402c76
    if (status != 0) {
        // 0x402c7a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402c9f
        exit(status);
        // UNREACHABLE
    }
    // 0x402ca6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]\n  or:  %s -e [OPTION]... [ARG]...\n  or:  %s -i LO-HI [OPTION]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Write a random permutation of the input lines to standard output.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -e, --echo                treat each ARG as an input line\n  -i, --input-range=LO-HI   treat each number LO through HI as an input line\n  -n, --head-count=COUNT    output at most COUNT lines\n  -o, --output=FILE         write result to FILE instead of standard output\n      --random-source=FILE  get random bytes from FILE\n  -r, --repeat              output lines can be repeated\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated     line delimiter is NUL, not newline\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402dbf
    bool v2; // 0x402c60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402e40
    int64_t v6 = *(int64_t *)v5; // 0x402e44
    int64_t v7 = 5; // 0x402e4a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"shuf";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402e56
        char v11 = *(char *)v9; // 0x402e56
        char v12 = v11; // 0x402e56
        bool v13 = false; // 0x402e56
        while (v10 == v11) {
            // 0x402e4c
            v7--;
            int64_t v14 = v9 + v3; // 0x402e56
            int64_t v15 = v8 + v3; // 0x402e56
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
            // break -> 0x402e62
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x402e62
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402f74;
        } else {
            // 0x402f5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402fb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ec4;
            } else {
                goto lab_0x402f74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402ec4;
        } else {
            // 0x402eaa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402fb3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ec4;
            } else {
                goto lab_0x402ec4;
            }
        }
    }
  lab_0x402f74:
    // 0x402f74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c9f
    exit(status);
    // UNREACHABLE
  lab_0x402ec4:
    // 0x402ec4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c9f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402fe0 - 0x402fe8
int64_t function_402fe0(int64_t a1) {
    // 0x402fe0
    g36 = a1;
    int64_t result; // 0x402fe0
    return result;
}
// Address range: 0x402ff0 - 0x402ff8
int64_t function_402ff0(int64_t a1) {
    // 0x402ff0
    g35 = a1;
    int64_t result; // 0x402ff0
    return result;
}
// Address range: 0x403000 - 0x40309e
int64_t function_403000(void) {
    // 0x403000
    int32_t * err_num; // 0x403016
    if ((int32_t)function_4084b0((int64_t)g29) == 0) {
        goto lab_0x40302c;
    } else {
        // 0x403016
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x403043;
        } else {
            // 0x403027
            if (*err_num != 32) {
                goto lab_0x403043;
            } else {
                goto lab_0x40302c;
            }
        }
    }
  lab_0x40302c:;
    int64_t result = function_4084b0((int64_t)g32); // 0x403033
    if ((int32_t)result == 0) {
        // 0x40303c
        return result;
    }
    // 0x40307e
    _exit(g19);
    // UNREACHABLE
  lab_0x403043:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40304f
    if (g36 == 0) {
        // 0x403089
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403063
        error(0, *err_num, "%s: %s", (char *)function_404ea0((int64_t)g36), v1);
    }
    // 0x40307e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x4030a0 - 0x4030a5
int64_t function_4030a0(void) {
    // 0x4030a0
    int64_t fd; // 0x4030a0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x4030b0 - 0x4030d1
int64_t function_4030b0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x4030b0
    if (stream == 0) {
        // 0x4030d0
        int64_t result; // 0x4030b0
        return result;
    }
    // 0x4030b5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4030e0 - 0x40312b
int64_t function_4030e0(int32_t a1, int64_t a2) {
    int32_t fd = open("/dev/null", O_RDONLY); // 0x4030f6
    if (fd == a1) {
        // 0x403105
        return 1;
    }
    // 0x4030ff
    if (fd < 0) {
        // 0x403105
        return 0;
    }
    // 0x403110
    close(fd);
    *__errno_location() = 9;
    return 0;
}
// Address range: 0x403130 - 0x4032df
int64_t function_403130(int64_t a1, int64_t * a2, int64_t stream) {
    int32_t v1 = fileno((struct _IO_FILE *)stream); // 0x40314c
    int32_t * v2 = __errno_location(); // 0x403153
    int64_t v3 = 0; // 0x403130
    int64_t v4 = 0; // 0x403130
    int64_t v5 = 0; // 0x403130
    int64_t v6 = 0; // 0x403130
    int64_t v7 = 0; // 0x403130
    switch (v1) {
        case 1: {
            goto lab_0x4031a0;
        }
        case 2: {
            goto lab_0x40318a;
        }
        case 0: {
            goto lab_0x4031dc;
        }
        default: {
            // 0x403175
            v3 = dup2(2, 2) != 2;
            goto lab_0x40318a;
        }
    }
  lab_0x4031a0:;
    // 0x4031a0
    int64_t v8; // 0x403130
    int64_t v9; // 0x403130
    int64_t v10; // 0x403130
    int64_t v11; // 0x403130
    int64_t v12; // 0x403130
    int64_t v13; // 0x403130
    int64_t v14; // 0x4031b4
    if (dup2(0, 0) == 0) {
        // 0x403220
        v10 = 0;
        v8 = 0;
        v14 = 0;
        if (v4 == 0) {
            goto lab_0x4031c4;
        } else {
            goto lab_0x403228;
        }
    } else {
        int64_t v15 = function_4030e0(0, 0); // 0x4031af
        v12 = v3;
        v11 = v4;
        v9 = 1;
        v13 = 0;
        if ((char)v15 == 0) {
            goto lab_0x4031ef;
        } else {
            // 0x4031bf
            v14 = v15 & 0xffffffff;
            v10 = v4;
            v8 = v14;
            if (v4 != 0) {
                goto lab_0x403228;
            } else {
                goto lab_0x4031c4;
            }
        }
    }
  lab_0x40318a:
    // 0x40318a
    v4 = dup2(1, 1) != 1;
    goto lab_0x4031a0;
  lab_0x4031dc:
    // 0x4031dc
    v12 = v5;
    v11 = v6;
    v9 = v7;
    v13 = function_407450(a1, (int64_t)a2);
    goto lab_0x4031ef;
  lab_0x4031ef:;
    int64_t v16 = (int64_t)*v2; // 0x4031ef
    int64_t v17 = v11; // 0x4031f4
    int64_t v18 = v13; // 0x4031f4
    int64_t v19 = v9; // 0x4031f4
    int64_t v20 = v16; // 0x4031f4
    int64_t v21 = v11; // 0x4031f4
    int64_t v22 = v13; // 0x4031f4
    int64_t v23 = v9; // 0x4031f4
    int64_t v24 = v16; // 0x4031f4
    if ((char)v12 != 0) {
        goto lab_0x403296;
    } else {
        goto lab_0x4031fa;
    }
  lab_0x4031c4:
    // 0x4031c4
    v5 = v3;
    v6 = v10;
    v7 = v8;
    if ((char)v3 == 0) {
        goto lab_0x4031dc;
    } else {
        int64_t v25 = function_4030e0(2, 0); // 0x4031cd
        v5 = v25 & 0xffffffff;
        v6 = v10;
        v7 = v8;
        if ((char)v25 == 0) {
            // 0x403290
            v21 = v10;
            v22 = 0;
            v23 = v8;
            v24 = (int64_t)*v2;
            goto lab_0x403296;
        } else {
            goto lab_0x4031dc;
        }
    }
  lab_0x403228:;
    int64_t v26 = function_4030e0(1, 0); // 0x40322d
    v10 = v26 & 0xffffffff;
    v8 = v14;
    int64_t v27; // 0x403130
    int64_t v28; // 0x403130
    int64_t v29; // 0x403130
    if ((char)v26 != 0) {
        goto lab_0x4031c4;
    } else {
        int64_t v30 = (int64_t)*v2; // 0x403238
        v27 = 0;
        v28 = v14;
        v29 = v30;
        if ((char)v3 != 0) {
            // 0x4032d0
            close(2);
            v27 = 0;
            v28 = v14;
            v29 = v30;
        }
        goto lab_0x403250;
    }
  lab_0x403296:
    // 0x403296
    close(2);
    v17 = v21;
    v18 = v22;
    v19 = v23;
    v20 = v24;
    goto lab_0x4031fa;
  lab_0x4031fa:
    // 0x4031fa
    v27 = v18;
    v28 = v19;
    v29 = v20;
    int64_t result; // 0x403130
    int64_t v31; // 0x403130
    int64_t v32; // 0x403130
    int64_t v33; // 0x403130
    if ((char)v17 != 0) {
        goto lab_0x403250;
    } else {
        // 0x4031ff
        result = v18;
        v32 = v20;
        v31 = v18;
        v33 = v20;
        if ((char)v19 != 0) {
            goto lab_0x40325f;
        } else {
            goto lab_0x403204;
        }
    }
  lab_0x403250:
    // 0x403250
    close(1);
    result = v27;
    v32 = v29;
    v31 = v27;
    v33 = v29;
    if ((char)v28 == 0) {
        goto lab_0x403204;
    } else {
        goto lab_0x40325f;
    }
  lab_0x403204:;
    int64_t result2 = 0; // 0x403207
    int64_t v34 = v32; // 0x403207
    if (result != 0) {
        // 0x403209
        return result;
    }
    goto lab_0x40326b;
  lab_0x40325f:
    // 0x40325f
    close(0);
    result2 = v31;
    v34 = v33;
    if (v31 != 0) {
        // 0x403209
        int64_t v35; // 0x403130
        int64_t result3 = v35;
        return result3;
    }
    goto lab_0x40326b;
  lab_0x40326b:
    // 0x40326b
    *v2 = (int32_t)v34;
    // 0x403209
    return result2;
}
// Address range: 0x4032e0 - 0x4032f0
int64_t function_4032e0(int64_t * a1) {
    // 0x4032e0
    int128_t v1; // 0x4032e0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x4032e0
    *(int64_t *)((int64_t)a1 + 16) = 0;
    int64_t v4; // 0x4032e0
    __asm_movups(*(int128_t *)&v4, v3);
    int64_t result; // 0x4032e0
    return result;
}
// Address range: 0x4032f0 - 0x40340b
int64_t function_4032f0(int64_t result, int64_t a2, char a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x403308
    int64_t v2 = *v1; // 0x403308
    int64_t v3 = v2 + result; // 0x403318
    if ((v3 & 16) != 0) {
        // 0x4033c8
        return 0;
    }
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x403354
    int64_t v5 = v3; // 0x4032f0
    int64_t v6 = v2;
    int64_t v7 = v2; // 0x403345
    int64_t v8; // 0x4032f0
    int64_t v9; // 0x4032f0
    int64_t v10; // 0x4032f0
    int64_t v11; // 0x4032f0
    int64_t v12; // 0x4032f0
    int64_t v13; // 0x4032f0
    int64_t v14; // 0x4032f0
    while (true) {
      lab_0x403354:
        // 0x403354
        v9 = v7;
        v8 = v6;
        int64_t v15 = v5;
        uint64_t v16 = *v4; // 0x403354
        if (v16 < *(int64_t *)(a2 + 16)) {
            // 0x403330
            *v4 = v16 + 1;
            v14 = v15;
            v11 = (int64_t)*(char *)v16;
            goto lab_0x40333b;
        } else {
            uint32_t v17 = __uflow((struct _IO_FILE *)a2); // 0x403365
            int64_t v18 = 0x100000000000000 * v15 >> 56; // 0x40336a
            v14 = v18;
            v11 = v17;
            if (v17 != -1) {
                goto lab_0x40333b;
            } else {
                if (v8 == v9) {
                    // break -> 0x4033c8
                    break;
                }
                if ((v15 & 32) != 0) {
                    // break -> 0x4033c8
                    break;
                }
                // 0x40337f
                v10 = v9;
                if (*(char *)(v9 - 1) == a3) {
                  lab_0x4033ec:
                    // 0x4033ec
                    *(int64_t *)(result + 8) = v10 - v8;
                    return result;
                }
                // 0x40338a
                v13 = a3;
                v12 = (int64_t)a3 & 0xffffffff;
                if (v9 != v18) {
                    // 0x4033e0
                    *(char *)v9 = a3;
                    v10 = v9 + 1;
                    goto lab_0x4033ec;
                }
                goto lab_0x403397;
            }
        }
    }
    // 0x4033c8
    return 0;
  lab_0x40333b:
    // 0x40333b
    v5 = v14;
    int64_t v19 = v9; // 0x403340
    int64_t v20 = v11; // 0x403340
    int64_t v21 = v11; // 0x403340
    int64_t v22 = v8; // 0x403340
    v13 = v11;
    v12 = v11;
    if (v9 == v14) {
        goto lab_0x403397;
    } else {
        goto lab_0x403345;
    }
  lab_0x403397:;
    int64_t v23 = function_4068f0(v8, result); // 0x4033a4
    int64_t v24 = v23 + v8; // 0x4033b4
    *v1 = v23;
    v5 = v24;
    v19 = v24;
    v20 = v13 % 256;
    v21 = v12;
    v22 = v23;
    goto lab_0x403345;
  lab_0x403345:
    // 0x403345
    v6 = v22;
    v7 = v19 + 1;
    *(char *)v19 = (char)v20;
    v10 = v7;
    int64_t v25 = v6; // 0x40334e
    if ((int32_t)v21 == (int32_t)a3) {
        // 0x4033ec
        *(int64_t *)(result + 8) = v10 - v25;
        return result;
    }
    goto lab_0x403354;
}
// Address range: 0x403410 - 0x40341a
int64_t function_403410(void) {
    // 0x403410
    int64_t v1; // 0x403410
    return function_4032f0(v1, v1, 10);
}
// Address range: 0x403420 - 0x403429
int64_t function_403420(int64_t * a1) {
    // 0x403420
    free((int64_t *)*(int64_t *)((int64_t)a1 + 16));
    return &g54;
}
// Address range: 0x403430 - 0x4034c9
int64_t function_403430(int64_t str) {
    // 0x403430
    if (str == 0) {
        // 0x4034a9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40343e
    int64_t result = (int64_t)found_char_pos; // 0x40343e
    if (found_char_pos == NULL) {
        // 0x403499
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403448
    if (v1 - str < 7) {
        // 0x403499
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x403458
    bool v2; // 0x403430
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403430
    int64_t v5 = result - 6; // 0x403430
    int64_t v6 = 7; // 0x403466
    unsigned char v7 = *(char *)v5; // 0x403466
    char v8 = *(char *)v4; // 0x403466
    char v9 = v8; // 0x403466
    bool v10 = false; // 0x403466
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
    int64_t v12 = (int64_t)"lt-"; // 0x403470
    int64_t v13 = v1; // 0x403470
    int64_t v14 = 3; // 0x403470
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403499
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403482
    char v16 = *(char *)v12; // 0x403482
    char v17 = v16; // 0x403482
    bool v18 = false; // 0x403482
    while (v15 == v16) {
        // 0x403472
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
    int64_t v20 = v1; // 0x40348c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40348e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x403499
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x4034d0 - 0x4035c2
int64_t function_4034d0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4034e4
    int64_t result = (int64_t)v1; // 0x4034e4
    if (result != a1) {
        // 0x4034f1
        return result;
    }
    int64_t v2 = function_409860(); // 0x403500
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4035b6
    if (v3 == 85) {
        // 0x403510
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4035a8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x40353e
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x40354b
        // 0x4034f1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4035a8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40358d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40359a
    // 0x4034f1
    return result4;
}
// Address range: 0x4035d0 - 0x403627
int64_t function_4035d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4035d0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403618
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403627 - 0x4047f1
int64_t function_403627(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403671
    int64_t v3 = 0; // 0x403671
    int64_t v4; // 0x403627
    int64_t v5; // 0x403627
    int64_t v6; // 0x403627
    int64_t v7; // 0x403627
    int64_t v8; // 0x403627
    int64_t v9; // 0x403627
    int64_t v10; // 0x403627
    int64_t v11; // 0x403627
    int64_t v12; // 0x403627
    int64_t v13; // 0x403627
    int64_t v14; // 0x403627
    int64_t v15; // 0x403627
    int64_t v16; // 0x403627
    int64_t v17; // 0x403627
    int64_t v18; // 0x403627
    int64_t result; // 0x403627
    int64_t v19; // 0x403627
    int32_t wc; // bp+132, 0x403627
    int64_t ps; // bp+136, 0x403627
    char v20; // 0x403be0
    int64_t v21; // 0x403be0
    int64_t v22; // 0x403f88
    int64_t v23; // 0x403627
    int64_t v24; // 0x403fa7
    int32_t v25; // 0x403627
    while (true) {
      lab_0x403678_2:
        // 0x403678
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403627
        int64_t v27; // 0x4036ac
        while (true) {
          lab_0x403678:
            // 0x403678
            v5 = v26;
            bool v28 = v15 == v5; // 0x403683
            if (v15 == -1) {
                // 0x403685
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403693
            if (v28) {
                // break (via goto) -> 0x403df8
                goto lab_0x403df8;
            }
            // 0x40369c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g53 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403c8b
                    if (v25 % 2 == 0) {
                        goto lab_0x4037d1;
                    }
                    // 0x4040ad
                    v26 = v5 + 1;
                    goto lab_0x403678;
                }
                case 7: {
                    goto lab_0x4037d1;
                }
                case 8: {
                    goto lab_0x4037d1;
                }
                case 9: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4037d1;
                }
                case 12: {
                    goto lab_0x4037d1;
                }
                case 13: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40379d;
                }
                case 36: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4037d1;
                }
                case 38: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4037d1;
                }
                case 44: {
                    goto lab_0x4037d1;
                }
                case 45: {
                    goto lab_0x4037d1;
                }
                case 46: {
                    goto lab_0x4037d1;
                }
                case 47: {
                    goto lab_0x4037d1;
                }
                case 48: {
                    goto lab_0x4037d1;
                }
                case 49: {
                    goto lab_0x4037d1;
                }
                case 50: {
                    goto lab_0x4037d1;
                }
                case 51: {
                    goto lab_0x4037d1;
                }
                case 52: {
                    goto lab_0x4037d1;
                }
                case 53: {
                    goto lab_0x4037d1;
                }
                case 54: {
                    goto lab_0x4037d1;
                }
                case 55: {
                    goto lab_0x4037d1;
                }
                case 56: {
                    goto lab_0x4037d1;
                }
                case 57: {
                    goto lab_0x4037d1;
                }
                case 58: {
                    goto lab_0x4037d1;
                }
                case 59: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4037d1;
                }
                case 66: {
                    goto lab_0x4037d1;
                }
                case 67: {
                    goto lab_0x4037d1;
                }
                case 68: {
                    goto lab_0x4037d1;
                }
                case 69: {
                    goto lab_0x4037d1;
                }
                case 70: {
                    goto lab_0x4037d1;
                }
                case 71: {
                    goto lab_0x4037d1;
                }
                case 72: {
                    goto lab_0x4037d1;
                }
                case 73: {
                    goto lab_0x4037d1;
                }
                case 74: {
                    goto lab_0x4037d1;
                }
                case 75: {
                    goto lab_0x4037d1;
                }
                case 76: {
                    goto lab_0x4037d1;
                }
                case 77: {
                    goto lab_0x4037d1;
                }
                case 78: {
                    goto lab_0x4037d1;
                }
                case 79: {
                    goto lab_0x4037d1;
                }
                case 80: {
                    goto lab_0x4037d1;
                }
                case 81: {
                    goto lab_0x4037d1;
                }
                case 82: {
                    goto lab_0x4037d1;
                }
                case 83: {
                    goto lab_0x4037d1;
                }
                case 84: {
                    goto lab_0x4037d1;
                }
                case 85: {
                    goto lab_0x4037d1;
                }
                case 86: {
                    goto lab_0x4037d1;
                }
                case 87: {
                    goto lab_0x4037d1;
                }
                case 88: {
                    goto lab_0x4037d1;
                }
                case 89: {
                    goto lab_0x4037d1;
                }
                case 90: {
                    goto lab_0x4037d1;
                }
                case 91: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4037d1;
                }
                case 94: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4037d1;
                }
                case 96: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4037d1;
                }
                case 98: {
                    goto lab_0x4037d1;
                }
                case 99: {
                    goto lab_0x4037d1;
                }
                case 100: {
                    goto lab_0x4037d1;
                }
                case 101: {
                    goto lab_0x4037d1;
                }
                case 102: {
                    goto lab_0x4037d1;
                }
                case 103: {
                    goto lab_0x4037d1;
                }
                case 104: {
                    goto lab_0x4037d1;
                }
                case 105: {
                    goto lab_0x4037d1;
                }
                case 106: {
                    goto lab_0x4037d1;
                }
                case 107: {
                    goto lab_0x4037d1;
                }
                case 108: {
                    goto lab_0x4037d1;
                }
                case 109: {
                    goto lab_0x4037d1;
                }
                case 110: {
                    goto lab_0x4037d1;
                }
                case 111: {
                    goto lab_0x4037d1;
                }
                case 112: {
                    goto lab_0x4037d1;
                }
                case 113: {
                    goto lab_0x4037d1;
                }
                case 114: {
                    goto lab_0x4037d1;
                }
                case 115: {
                    goto lab_0x4037d1;
                }
                case 116: {
                    goto lab_0x4037d1;
                }
                case 117: {
                    goto lab_0x4037d1;
                }
                case 118: {
                    goto lab_0x4037d1;
                }
                case 119: {
                    goto lab_0x4037d1;
                }
                case 120: {
                    goto lab_0x4037d1;
                }
                case 121: {
                    goto lab_0x4037d1;
                }
                case 122: {
                    goto lab_0x4037d1;
                }
                case 123: {
                    goto lab_0x403775;
                }
                case 124: {
                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403775;
                }
                case 126: {
                    goto lab_0x40379d;
                }
                default: {
                    goto lab_0x403b75;
                }
            }
        }
      lab_0x403b75:
        if (v23 != 1) {
            // 0x403ee0
            ps = 0;
            int64_t len = v15; // 0x403ef0
            if (v15 == -1) {
                // 0x403ef2
                len = strlen((char *)str);
            }
            // 0x403f1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403f7f:
                // 0x403f7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403f84
                int64_t v30 = v29 + str;
                v24 = function_408320(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4044fa_2;
                    }
                    case -1: {
                        goto lab_0x4044fa_2;
                    }
                    case -2: {
                        // 0x4045dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404617
                            v19 = v18;
                            int64_t v31 = v18; // 0x40461a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404627
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404620
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4044fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4044fa_2;
                    }
                    case 1: {
                        goto lab_0x403f50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403ffc
                        char v34 = *(char *)v33; // 0x40400d
                        unsigned char v35; // 0x403627
                        if (v34 < 125) {
                            // 0x404018
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40402f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404000
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40400d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404018
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40402f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404000
                            v33++;
                        }
                        goto lab_0x403f50;
                    }
                }
            }
            goto lab_0x4044fa_2;
        } else {
            // 0x403bc4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4037d1;
        }
    }
  lab_0x403df8:
    // 0x403df8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4046fa
        if (v8 > result) {
            // 0x404703
            *(char *)(v12 + result) = 0;
        }
        // 0x403a27
        return result;
    }
    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4037d1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4037e0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4039ea_2;
        }
    }
    int64_t v39 = result; // 0x4038e1
    char v40 = v20; // 0x4038e1
    int64_t v41 = v38; // 0x4038e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4038e1
    int64_t v43 = v36; // 0x4038e1
    goto lab_0x40385d;
  lab_0x4039ea_2:
    // 0x403a27
    return function_4035d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4044fa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4037d1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4040ce
        int64_t v50 = v5 + 1; // 0x4041b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4041b8
        char v52 = v20; // 0x4041b8
        int64_t v53 = result; // 0x4041b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404181
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404185
            int64_t v56 = v54 + 1; // 0x40418a
            int64_t v57 = v51 + 1; // 0x4041b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40417c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404181
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404185
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
        goto lab_0x40385d;
    }
  lab_0x403f50:
    // 0x403f50
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403f6f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403f72
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4044fa
        goto lab_0x4044fa_2;
    }
    goto lab_0x403f7f;
  lab_0x40379d:
    // 0x40379d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4039ea_2;
    }
    goto lab_0x4037d1;
  lab_0x403775:;
    bool v60 = v15 == 1; // 0x403780
    if (v15 == -1) {
        // 0x403782
        v60 = *(char *)v1 == 0;
    }
    // 0x40378e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4037d1;
    } else {
        goto lab_0x40379d;
    }
  lab_0x40385d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403862
        *(char *)(v44 + v45) = v40;
    }
    // 0x403866
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403678_2;
}
// Address range: 0x404800 - 0x40499e
int64_t function_404800(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404802
    int32_t * v3 = __errno_location(); // 0x40481c
    int64_t v4 = (int64_t)g21; // 0x404821
    int32_t v5 = *v3; // 0x40482b
    int64_t v6 = v4; // 0x404841
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404999
            function_4069e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404850
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404857
        int64_t v9; // 0x404800
        if (g21 == &g22) {
            int64_t v10 = function_4067f0(0, v8); // 0x40497a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x40497f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4067f0(v4, v8); // 0x40486b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x40487a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x40487a
        int32_t v14 = v7; // 0x404881
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4048b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4048bb
    int64_t * v17 = (int64_t *)v15; // 0x4048be
    uint64_t v18 = *v17; // 0x4048be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4048c1
    int64_t result = *v19; // 0x4048c1
    int64_t v20; // 0x404800
    uint64_t v21 = function_4035d0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4048e4
    if (v18 > v21) {
        // 0x40495b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4048f7
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x404907
        free((int64_t *)result);
    }
    int64_t result2 = function_406790(v22); // 0x404921
    *v19 = result2;
    int64_t v23; // 0x404800
    function_4035d0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40495b
    *v3 = v5;
    return result2;
}
// Address range: 0x4049a0 - 0x4049d4
int64_t function_4049a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4049a7
    int64_t result = function_406990(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x4049c6
    return result;
}
// Address range: 0x4049e0 - 0x4049ef
int64_t function_4049e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x4049ec
    return result;
}
// Address range: 0x4049f0 - 0x4049ff
int64_t function_4049f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x4049f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x404a00 - 0x404a33
int64_t function_404a00(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x404a19
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x404a1e
    uint32_t v3 = *v2; // 0x404a1e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404a22
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404a40 - 0x404a53
int64_t function_404a40(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x404a4c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404a60 - 0x404a8b
int64_t function_404a60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x404a68
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404a85
        abort();
        // UNREACHABLE
    }
    // 0x404a7c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x404a90 - 0x404b02
int64_t function_404a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x404ab2
    int32_t * v2 = __errno_location(); // 0x404abb
    uint32_t v3 = *(int32_t *)v1; // 0x404adb
    int64_t result = function_4035d0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404aea
    return result;
}
// Address range: 0x404b10 - 0x404bf1
int64_t function_404b10(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x404b32
    int32_t * v2 = __errno_location(); // 0x404b38
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404b57
    int32_t * v4 = (int32_t *)v1; // 0x404b5a
    int64_t v5 = function_4035d0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404b75
    int64_t v6 = v5 + 1; // 0x404b7a
    int64_t result = function_406790(v6); // 0x404b8f
    function_4035d0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404bd4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404bdd
    return result;
}
// Address range: 0x404c00 - 0x404c0a
int64_t function_404c00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c00
    return function_404b10(a1, a2, 0, a3);
}
// Address range: 0x404c10 - 0x404ca5
int64_t function_404c10(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x404c10
    int64_t v2 = v1; // 0x404c10
    int64_t v3 = v2; // 0x404c24
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404c43
        free((int64_t *)*(int64_t *)v4);
        v3 = &g54;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404c40
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g54;
        }
    }
    int64_t v6 = v3; // 0x404c5d
    if (g22 != 0x60f340) {
        // 0x404c5f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g38;
        v6 = &g54;
    }
    int64_t result = v6; // 0x404c81
    if (g21 != &g22) {
        // 0x404c83
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g54;
    }
    // 0x404c96
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x404cb0 - 0x404cc1
int64_t function_404cb0(void) {
    // 0x404cb0
    int64_t v1; // 0x404cb0
    return function_404800(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x404cd0 - 0x404cda
int64_t function_404cd0(void) {
    // 0x404cd0
    int64_t v1; // 0x404cd0
    return function_404800(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x404ce0 - 0x404cf6
int64_t function_404ce0(int64_t a1) {
    // 0x404ce0
    return function_404800(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x404d00 - 0x404d12
int64_t function_404d00(int64_t a1, int64_t a2) {
    // 0x404d00
    return function_404800(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x404d20 - 0x404d88
int64_t function_404d20(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404d30
    return function_404800((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404d90 - 0x404df4
int64_t function_404d90(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404da0
    return function_404800((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404e00 - 0x404e0c
int64_t function_404e00(int64_t a1, int64_t a2) {
    // 0x404e00
    return function_404d20(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404e10 - 0x404e1f
int64_t function_404e10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404e10
    return function_404d90(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404e20 - 0x404e90
int64_t function_404e20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x404e2d
    int128_t v2 = __asm_movdqa(g40); // 0x404e35
    int128_t v3 = __asm_movdqa(g41); // 0x404e3d
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x404e52
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404e68
    uint32_t v6 = *v5; // 0x404e68
    uint32_t v7 = (int32_t)a3 % 32; // 0x404e6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404800(0, a1, a2, &v4);
}
// Address range: 0x404e90 - 0x404e9d
int64_t function_404e90(int64_t a1, int64_t a2) {
    // 0x404e90
    return function_404e20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404ea0 - 0x404eb1
int64_t function_404ea0(int64_t a1) {
    // 0x404ea0
    return function_404e20(a1, -1, 58);
}
// Address range: 0x404ec0 - 0x404eca
int64_t function_404ec0(void) {
    // 0x404ec0
    int64_t v1; // 0x404ec0
    return function_404e20(v1, v1, 58);
}
// Address range: 0x404ed0 - 0x404f3e
int64_t function_404ed0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404eea
    return function_404800((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404f40 - 0x404fac
int64_t function_404f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x404f47
    int128_t v2 = __asm_movdqa(g40); // 0x404f4f
    int128_t v3 = __asm_movdqa(g41); // 0x404f57
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x404f79
    if (a2 == 0 || a3 == 0) {
        // 0x404fa7
        abort();
        // UNREACHABLE
    }
    // 0x404f8a
    return function_404800(a1, a4, a5, &v4);
}
// Address range: 0x404fb0 - 0x404fb9
int64_t function_404fb0(void) {
    // 0x404fb0
    int64_t v1; // 0x404fb0
    return function_404f40(v1, v1, v1, v1, -1);
}
// Address range: 0x404fc0 - 0x404fd7
int64_t function_404fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404fc0
    return function_404f40(0, a1, a2, a3, -1);
}
// Address range: 0x404fe0 - 0x404ff3
int64_t function_404fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404fe0
    return function_404f40(0, a1, a2, a3, a4);
}
// Address range: 0x405000 - 0x40500a
int64_t function_405000(void) {
    // 0x405000
    int64_t v1; // 0x405000
    return function_404800(v1, v1, v1, &g20);
}
// Address range: 0x405010 - 0x405022
int64_t function_405010(int64_t a1, int64_t a2) {
    // 0x405010
    return function_404800(0, a1, a2, &g20);
}
// Address range: 0x405030 - 0x405041
int64_t function_405030(void) {
    // 0x405030
    int64_t v1; // 0x405030
    return function_404800(v1, v1, -1, &g20);
}
// Address range: 0x405050 - 0x405066
int64_t function_405050(int64_t a1) {
    // 0x405050
    return function_404800(0, a1, -1, &g20);
}
// Address range: 0x405070 - 0x405093
int64_t function_405070(int64_t a1) {
    int64_t result = function_406790(24); // 0x405079
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x4050a0 - 0x4050cf
int64_t function_4050a0(void) {
    // 0x4050a0
    int64_t v1; // 0x4050a0
    int64_t v2 = function_4055f0(v1, v1, v1); // 0x4050a1
    int64_t result = 0; // 0x4050ae
    if (v2 != 0) {
        // 0x4050b0
        result = function_406790(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x4050cd
    return result;
}
// Address range: 0x4050d0 - 0x4050d4
int64_t function_4050d0(int64_t result) {
    // 0x4050d0
    return result;
}
// Address range: 0x4050e0 - 0x4051d5
int64_t function_4050e0(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x4050e7
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x4050fb
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x4050ff
    int64_t v4 = *v3; // 0x405103
    int64_t result = *v2; // 0x405103
    int64_t v5; // 0x4050e0
    while (true) {
        int64_t v6 = result;
        int64_t v7 = v4;
        int64_t v8 = v7; // 0x405140
        int64_t v9; // 0x4050e0
        int64_t v10; // 0x4050e0
        if (v7 >= a2) {
            // 0x405108
            v10 = v7;
            v9 = v6;
            v5 = v6;
            if (v7 == a2) {
                // break -> 0x40519f
                break;
            }
        } else {
            int64_t v11 = 1; // 0x405154
            int64_t v12 = 256 * v8 | 255; // 0x405158
            v8 = v12;
            int64_t v13 = v11; // 0x405161
            while (v12 < a2) {
                // 0x405150
                v11 = v13 + 1;
                v12 = 256 * v8 | 255;
                v8 = v12;
                v13 = v11;
            }
            // 0x405163
            int64_t v14; // bp-64, 0x4050e0
            function_405900(a1, &v14, v11);
            int64_t v15 = &v14; // 0x405175
            int64_t v16 = 256 * v7 | 255; // 0x405187
            int64_t v17 = 256 * v6 | (int64_t)*(char *)v15; // 0x40518e
            v15++;
            int64_t v18 = v16; // 0x405194
            int64_t v19 = v17; // 0x405194
            while (v16 < a2) {
                // 0x405178
                v16 = 256 * v18 | 255;
                v17 = 256 * v19 | (int64_t)*(char *)v15;
                v15++;
                v18 = v16;
                v19 = v17;
            }
            // 0x405196
            v10 = v16;
            v9 = v17;
            v5 = v17;
            if (v16 == a2) {
                // break -> 0x40519f
                break;
            }
        }
        uint64_t v20 = v9;
        uint64_t v21 = v10 - a2; // 0x405116
        uint64_t v22 = v21 % v1;
        result = v20 % v1;
        v4 = v22 - 1;
        if (v20 <= v10 - v22) {
            // 0x4051c8
            *v2 = v20 / v1;
            *v3 = v21 / v1;
            return result;
        }
    }
    // 0x40519f
    *v3 = 0;
    *v2 = 0;
    result = v5;
  lab_0x4051af:
    // 0x4051af
    return result;
}
// Address range: 0x4051e0 - 0x4051fe
int64_t function_4051e0(int64_t a1) {
    // 0x4051e0
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g54;
}
// Address range: 0x405200 - 0x405251
int64_t function_405200(int64_t a1) {
    int64_t v1 = function_405a60(a1); // 0x405210
    int32_t * v2 = __errno_location(); // 0x405218
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x405260 - 0x40526c
int64_t function_405260(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x405260
    return a1 % a2;
}
// Address range: 0x405270 - 0x40527a
int64_t function_405270(int64_t a1, int64_t a2) {
    // 0x405270
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x405280 - 0x4052a6
int64_t function_405280(int64_t a1, int64_t a2) {
    int64_t v1 = a2 - 1; // 0x405283
    uint64_t v2 = v1; // 0x405287
    if (v1 == 0) {
        // 0x4052a5
        return 0;
    }
    int64_t v3 = 0; // 0x405287
    v3++;
    while (v2 >= 2) {
        // 0x405290
        v2 /= 2;
        v3++;
    }
    // 0x4052a5
    return (v3 * a1 + 7) / 8;
}
// Address range: 0x4052b0 - 0x405584
int64_t function_4052b0(int64_t a1, uint64_t a2, uint64_t a3) {
    // 0x4052b0
    if (a2 == 0) {
        // 0x4052ee
        return 0;
    }
    if (a2 == 1) {
        int64_t result = function_406790(8); // 0x4052d7
        *(int64_t *)result = function_4050e0(a1, a3 - 1);
        // 0x4052ee
        return result;
    }
    int64_t v1; // 0x4052b0
    int64_t v2; // 0x4052b0
    int64_t v3; // 0x4052b0
    bool v4; // 0x4052b0
    if (a3 < 0x20000) {
        int64_t v5 = function_406790(8 * a3); // 0x4054b8
        v1 = v5;
        v4 = true;
        v3 = 0;
        v2 = v5;
        if (a3 != 0) {
            goto lab_0x405352;
        } else {
            goto lab_0x405376;
        }
    } else {
        if (a3 / a2 < 32) {
            int64_t v6 = 8 * a3; // 0x405334
            if (v6 < 0 || a3 >= 0x2000000000000000) {
                // 0x40557f
                function_4069e0(v6);
                // UNREACHABLE
            }
            // 0x40534a
            v1 = function_406790(v6);
            goto lab_0x405352;
        } else {
            int64_t v7 = 2 * a2; // 0x405518
            int64_t v8 = function_408ea0(v7, 0, 0x405260, 0x405270, 0x401900); // 0x40552e
            if (v8 == 0) {
                // 0x40557f
                function_4069e0(v7);
                // UNREACHABLE
            }
            int64_t v9 = 8 * a2; // 0x40554a
            if (v9 < 0 || a2 >= 0x2000000000000000) {
                // 0x40557f
                function_4069e0(v9);
                // UNREACHABLE
            }
            // 0x405558
            v4 = false;
            v3 = v8;
            v2 = function_406790(v9);
            goto lab_0x405376;
        }
    }
  lab_0x405352:;
    int64_t v10 = 0;
    *(int64_t *)(8 * v10 + v1) = v10;
    int64_t v11 = v10 + 1; // 0x40535c
    v4 = true;
    v3 = 0;
    v2 = v1;
    while (v11 < a3) {
        // 0x405358
        v10 = v11;
        *(int64_t *)(8 * v10 + v1) = v10;
        v11 = v10 + 1;
        v4 = true;
        v3 = 0;
        v2 = v1;
    }
    goto lab_0x405376;
  lab_0x405376:;
    int64_t v12 = 0; // 0x405381
    int64_t result2; // 0x4052b0
    while (true) {
        int64_t v13 = v12;
        int64_t v14 = function_4050e0(a1, -1 - v13 + a3) + v13; // 0x4053bb
        int64_t v15; // 0x4052b0
        if (v4) {
            int64_t * v16 = (int64_t *)(8 * v13 + v2); // 0x40538c
            int64_t * v17 = (int64_t *)(8 * v14 + v2); // 0x405390
            *v16 = *v17;
            int64_t v18 = v13 + 1; // 0x405397
            *v17 = *v16;
            v15 = v18;
            if (v18 >= a2) {
                // break -> 0x40547d
                break;
            }
        } else {
            int64_t v19 = function_409680(v3); // 0x4053db
            int64_t v20 = function_409680(v3); // 0x4053fb
            int64_t v21 = v19; // 0x405406
            if (v19 == 0) {
                // 0x4054f0
                v21 = function_406790(16);
                *(int64_t *)(v21 + 8) = v13;
                *(int64_t *)v21 = v13;
            }
            // 0x40540c
            int64_t * v22; // 0x4052b0
            int64_t v23; // 0x4052b0
            int64_t v24; // 0x4052b0
            if (v20 == 0) {
                int64_t v25 = function_406790(16); // 0x4054d5
                int64_t * v26 = (int64_t *)(v25 + 8);
                *v26 = v14;
                *(int64_t *)v25 = v14;
                v22 = v26;
                v24 = v25;
                v23 = v14;
            } else {
                int64_t * v27 = (int64_t *)(v20 + 8);
                v22 = v27;
                v24 = v20;
                v23 = *v27;
            }
            int64_t * v28 = (int64_t *)(v21 + 8); // 0x405419
            *v28 = v23;
            *v22 = *v28;
            if (function_409640(v3, v21) == 0 || function_409640(v3, v24) == 0) {
                // 0x40557f
                function_4069e0(v3);
                // UNREACHABLE
            }
            // 0x40545c
            *(int64_t *)(8 * v13 + v2) = *v28;
            int64_t v29 = v13 + 1; // 0x405464
            v15 = v29;
            if (v29 >= a2) {
                // 0x405570
                function_4090e0(v3);
                result2 = v2;
                goto lab_0x4052ee;
            }
        }
        // 0x4053a7
        v12 = v15;
    }
    int64_t v30 = 8 * a2; // 0x40548a
    if (v30 < 0 || a2 >= 0x2000000000000000) {
        // 0x40557f
        function_4069e0(a1);
        // UNREACHABLE
    }
    // 0x4054a0
    result2 = function_4067f0(v2, v30);
  lab_0x4052ee:
    // 0x4052ee
    return result2;
}
// Address range: 0x405590 - 0x4055ed
int64_t function_405590(int64_t a1) {
    // 0x405590
    function_405050(a1);
    int32_t * err_num = __errno_location(); // 0x4055a7
    char * format; // 0x405590
    if (*err_num == 0) {
        // 0x4055df
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x4055b9
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x4055c5
    error(g19, *err_num, format);
    return &g54;
}
// Address range: 0x4055f0 - 0x4058df
int64_t function_4055f0(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_406790(0x1038); // 0x40570d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x405590;
        *(int64_t *)(result + 16) = 0;
        // 0x405662
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_408510(a1, "rb"); // 0x405617
        int64_t result2 = 0; // 0x405622
        if (stream != 0) {
            // 0x405628
            result2 = function_406790(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x405644
            *(int64_t *)(result2 + 8) = 0x405590;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x405662
        return result2;
    }
    int64_t result3 = function_406790(0x1038); // 0x40567d
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x405693
    *(int64_t *)(result3 + 8) = 0x405590;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x4056b1
    int64_t v2; // 0x4055f0
    int128_t pid2; // bp-72, 0x4055f0
    if (fd < 0) {
        // 0x405738
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x405757
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x4056db
        close(fd);
        if (v3 >= 2048) {
            // 0x4056f8
            function_405d60(v1);
            // 0x405662
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x405866
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x405872
        uint64_t v7 = v6 + v4; // 0x405878
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x4056f8
            function_405d60(v1);
            // 0x405662
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x4058a1
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x4058ad
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x4058c5
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x4056f8
            function_405d60(v1);
            // 0x405662
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x40576d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x405774
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x405790
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x40578e
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x40579f
    if (v16 >= 2048) {
        // 0x4056f8
        function_405d60(v1);
        // 0x405662
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x4057ba
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x4057c1
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x4057df
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x4057dd
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x4057ee
    if (v21 >= 2048) {
        // 0x4056f8
        function_405d60(v1);
        // 0x405662
        return result3;
    }
    // 0x4057fe
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x405816
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x40581d
    if (v23 == 0) {
        // 0x4056f8
        function_405d60(v1);
        // 0x405662
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x40582f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x40582d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x4056f8
    function_405d60(v1);
    // 0x405662
    return result3;
}
// Address range: 0x4058e0 - 0x4058e5
int64_t function_4058e0(int64_t a1, int64_t a2) {
    // 0x4058e0
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x4058e0
    return result;
}
// Address range: 0x4058f0 - 0x4058f5
int64_t function_4058f0(int64_t a1, int64_t a2) {
    // 0x4058f0
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x4058f0
    return result;
}
// Address range: 0x405900 - 0x405a5c
int64_t function_405900(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x40591f
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x40595a
        int64_t v3 = a3 - result; // 0x405965
        if (v3 == 0) {
            // 0x40596a
            return result;
        }
        int64_t v4 = v3; // 0x405965
        int64_t v5 = result + v1; // 0x405962
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x405934
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x40595a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x40596a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x405980
    int64_t v9 = a3; // 0x405992
    int64_t * v10; // 0x405900
    int64_t v11; // 0x405900
    int64_t v12; // 0x405900
    int64_t v13; // 0x405900
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x4059a3
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x4059ba
            function_405ab0(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x405a15;
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
            int64_t result3 = function_405ab0(32, v17); // 0x4059ed
            int64_t v19 = v18 - 2048; // 0x4059f2
            if (v19 == 0) {
                // 0x405a38
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x405a04
        function_405ab0(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x405a50
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x405a15:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x405a1e
    *(int64_t *)24 = v11 - v13;
    // 0x40596a
    return (int64_t)dest_mem;
}
// Address range: 0x405a60 - 0x405aa9
int64_t function_405a60(int64_t a1) {
    // 0x405a60
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x405aa0
        return 0;
    }
    // 0x405a8a
    return function_407390(a1, 0x1038);
}
// Address range: 0x405ab0 - 0x405d55
int64_t function_405ab0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x405ab0
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x405ab7
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x405ac6
    int64_t v4 = *v1 + 1; // 0x405ad0
    *v1 = v4;
    int64_t v5 = a2; // 0x405ae1
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x405af2
    int64_t v9 = *v8; // 0x405af2
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x405af8
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x405b13
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x405b32
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x405b38
    int64_t v14 = *v13; // 0x405b38
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x405b3c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x405b60
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x405b75
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x405b7c
    int64_t v19 = *v18; // 0x405b7c
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x405b80
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x405b9b
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x405bad
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x405bb8
    int64_t v24 = *v23; // 0x405bb8
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x405bc9
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x405be0
    int64_t v27 = v7 + 32; // 0x405be3
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x405bfd
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x405ae8
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
    int64_t v29 = a2 + 1024; // 0x405c1b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x405c2a
    int64_t v33 = *v32; // 0x405c2a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x405c30
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x405c55
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x405c66
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x405c6d
    int64_t v38 = *v37; // 0x405c6d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x405c74
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x405c98
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x405cad
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x405cb4
    int64_t v43 = *v42; // 0x405cb4
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x405cb8
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x405cd3
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x405ce5
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x405cf0
    int64_t v48 = *v47; // 0x405cf0
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x405d01
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x405d18
    int64_t result = v31 + 32; // 0x405d1b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x405d35
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x405c20
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
    // 0x405d45
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x405d60 - 0x405f94
int64_t function_405d60(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x405da7
    int64_t v2 = a1; // 0x405dc3
    int64_t * v3 = (int64_t *)v2; // 0x405dc8
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x405dcb
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x405dcb
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x405dcf
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x405dcf
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x405dd3
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x405dda
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x405dde
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x405deb
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x405dee
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x405df5
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x405e02
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x405e05
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x405e0c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x405e19
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x405e1c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x405e23
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x405e30
    int64_t v21 = v5 - v20; // 0x405e36
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x405e40
    uint64_t v23 = v11 - v22; // 0x405e49
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x405e54
    int64_t v25 = v14 - v24; // 0x405e5e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x405e6d
    int64_t v27 = v23 + v25; // 0x405e73
    int64_t v28 = v17 - v26; // 0x405e76
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x405e81
    int64_t v30 = v28 + v25; // 0x405e84
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x405e9a
    while (v1 != v2) {
        // 0x405dc8
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
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x405ea0
    uint64_t v33 = *v32 + v28; // 0x405ea0
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x405ea4
    int64_t v35 = *v34 + v29; // 0x405ea4
    int64_t * v36 = (int64_t *)v31; // 0x405ea8
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x405eae
    int64_t v38 = *v36 + v20 - v35; // 0x405eb2
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x405eb9
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x405ebd
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x405ec1
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x405ec7
    uint64_t v43 = *v39 + v22 - v41; // 0x405ece
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x405ed5
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x405ed9
    int64_t v46 = *v42 + v24 - v45; // 0x405ee2
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x405ee9
    uint64_t v48 = *v44 + v26 - v47; // 0x405ef2
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x405ef9
    int64_t v50 = v35 - v49; // 0x405f02
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x405f0c
    uint64_t v52 = v41 - v51; // 0x405f15
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x405f20
    int64_t result = v52 + v50; // 0x405f23
    int64_t v54 = v45 - v53; // 0x405f2a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x405f35
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x405f39
    int64_t v57 = v54 + v52; // 0x405f3f
    int64_t v58 = v47 - v56; // 0x405f42
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x405f4d
    int64_t v60 = v58 + v54; // 0x405f50
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x405ea0
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
    // 0x405f6c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x405fa0 - 0x406133
int64_t function_405fa0(int64_t a1, int64_t * a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405fb9
    int64_t v1; // bp-200, 0x405fa0
    int32_t v2 = __fxstat(1, fileno(stream), (struct stat *)&v1); // 0x405fca
    int64_t v3 = 0x2000; // 0x405fd1
    int32_t v4; // 0x405fa0
    if ((v4 & 0xf000) == 0x8000 == v2 > -1) {
        int32_t v5 = ftello(stream); // 0x4060f3
        int64_t v6 = v5; // 0x4060f3
        v3 = 0x2000;
        int64_t v7; // 0x405fa0
        if (v5 > -1 == v7 > v6) {
            // 0x40610f
            v3 = v7 + 1 - v6;
        }
    }
    int32_t size = v3;
    int64_t * mem = malloc(size); // 0x405fef
    int64_t result = (int64_t)mem; // 0x405fef
    if (mem == NULL) {
        // 0x406099
        return result;
    }
    int64_t items_read = fread(mem, 1, size, stream); // 0x40605b
    int64_t v8 = v3; // 0x406066
    int64_t v9 = v3; // 0x406066
    int64_t v10 = result; // 0x406066
    int64_t v11 = items_read; // 0x406066
    int64_t * v12; // 0x405fa0
    int32_t * v13; // 0x405fa0
    int32_t v14; // 0x405fa0
    if (v3 != items_read) {
      lab_0x406068:;
        int32_t * v15 = __errno_location(); // 0x406068
        if (ferror(stream) == 0) {
            int64_t result2 = v10; // 0x406086
            if (v9 - 1 > v11) {
                int64_t * mem2 = realloc((int64_t *)v10, (int32_t)v11 + 1); // 0x406122
                result2 = mem2 != NULL ? (int64_t)mem2 : v10;
            }
            // 0x40608c
            *(char *)(result2 + v11) = 0;
            *a2 = v11;
            // 0x406099
            return result2;
        }
        // 0x406068
        v12 = (int64_t *)v10;
        v13 = v15;
        v14 = *v15;
        goto lab_0x4060bb;
      lab_0x4060bb:
        // 0x4060bb
        free(v12);
        *v13 = v14;
        // 0x406099
        return 0;
    }
    int64_t v16 = v3; // 0x40602f
    int64_t v17 = result;
    while (v16 != -1) {
        uint64_t v18 = v16 / 2; // 0x406020
        v16 += v18;
        int64_t * v19 = (int64_t *)v17;
        int64_t * mem3 = realloc(v19, (int32_t)v16); // 0x406039
        if (mem3 == NULL) {
            int32_t * v20 = __errno_location(); // 0x4060b0
            v12 = v19;
            v13 = v20;
            v14 = *v20;
            goto lab_0x4060bb;
        }
        int64_t v21 = (int64_t)mem3;
        int64_t nmemb = v16 - v8; // 0x406055
        int64_t items_read2 = fread((int64_t *)(v8 + v21), 1, (int32_t)nmemb, stream); // 0x40605b
        v8 += items_read2;
        v9 = v16;
        v10 = v21;
        v11 = v8;
        if (nmemb != items_read2) {
            goto lab_0x406068;
        }
        v17 = v21;
    }
    int32_t * v22 = __errno_location(); // 0x4060d0
    free((int64_t *)v17);
    *v22 = 12;
    // 0x406099
    return 0;
}
// Address range: 0x406140 - 0x4061c5
int64_t function_406140(int64_t file_path, int64_t a2, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x406150
    if (file == NULL) {
        // 0x406182
        return 0;
    }
    int64_t v1 = (int64_t)file; // 0x406150
    int64_t result = function_405fa0(v1, (int64_t *)a2); // 0x406163
    int32_t * v2 = __errno_location(); // 0x40616b
    if ((int32_t)function_407390(v1, a2) == 0) {
        // 0x406182
        return result;
    }
    int32_t v3 = *v2; // 0x4061a3
    if (result != 0) {
        // 0x4061a5
        v3 = *v2;
        free((int64_t *)result);
    }
    // 0x4061b1
    *v2 = v3;
    return 0;
}
// Address range: 0x4061d0 - 0x4061da
int64_t function_4061d0(void) {
    // 0x4061d0
    int64_t v1; // 0x4061d0
    return function_406140(v1, v1, (int64_t *)"r");
}
// Address range: 0x4061e0 - 0x4061ea
int64_t function_4061e0(void) {
    // 0x4061e0
    int64_t v1; // 0x4061e0
    return function_406140(v1, v1, (int64_t *)"rb");
}
// Address range: 0x4061f0 - 0x4065cd
int64_t function_4061f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x406288
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40620c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x406226
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40626b
    if (a6 < 10) {
        // 0x40627a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x406372
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4065d0 - 0x4065f0
int64_t function_4065d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4065d0
    if (a5 == 0) {
        // 0x4065eb
        return function_4061f0(a1, a2, a3, a4, a5, 0, (int64_t)&g54);
    }
    int64_t v1 = 0; // 0x4065d7
    v1++;
    int64_t v2 = v1; // 0x4065e9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4065e0
        v1++;
        v2 = v1;
    }
    // 0x4065eb
    return function_4061f0(a1, a2, a3, a4, a5, v2, (int64_t)&g54);
}
// Address range: 0x4065f0 - 0x406650
int64_t function_4065f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4065f0
    int64_t v3 = &v2; // 0x4065f0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406623
    int64_t v6; // 0x40660d
    int64_t * v7; // 0x40662b
    int64_t v8; // 0x40662b
    int64_t v9; // 0x406637
    if (v5 < 48) {
        // 0x406600
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406643
            break;
        }
    } else {
        // 0x40662b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406643
            break;
        }
    }
    int64_t v10 = 10; // 0x406621
    while (v4 != 9) {
        // 0x406619
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406600
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406643
                break;
            }
        } else {
            // 0x40662b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406643
                break;
            }
        }
        // 0x406619
        v10 = 10;
    }
    // 0x406643
    return function_4061f0(a1, a2, a3, a4, v3, v10, (int64_t)&g54);
}
// Address range: 0x406650 - 0x40670c
int64_t function_406650(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x406650
    int64_t v1; // bp-168, 0x406650
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406650
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406650
    int64_t v8; // 0x406650
    int64_t v9; // bp-56, 0x406650
    int64_t v10; // 0x4066b5
    int64_t v11; // 0x4066d9
    if ((int32_t)v6 < 48) {
        // 0x4066a0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4066f0
            break;
        }
    } else {
        // 0x4066d2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4066f0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4066ca
    int64_t v13 = 10; // 0x4066ca
    while (v5 != 9) {
        // 0x4066cc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4066a0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4066f0
                break;
            }
        } else {
            // 0x4066d2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4066f0
                break;
            }
        }
        // 0x4066c2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4066f0
    int64_t v14; // bp-136, 0x406650
    int64_t result = function_4061f0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g54); // 0x4066ff
    return result;
}
// Address range: 0x406710 - 0x406784
int64_t function_406710(int64_t a1) {
    // 0x406710
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406773
    return fputs_unlocked(v1, g29);
}
// Address range: 0x406790 - 0x4067aa
int64_t function_406790(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406794
    if (size != 0 != (mem == NULL)) {
        // 0x4067a3
        return (int64_t)mem;
    }
    // 0x4067a5
    function_4069e0(size);
    // UNREACHABLE
}
// Address range: 0x4067b0 - 0x4067d1
int64_t function_4067b0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4067b3
    int64_t v2 = v1; // 0x4067b3
    if (v2 < 0) {
        // 0x4067cb
        function_4069e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4067c9
        return function_406790(v2);
    }
    // 0x4067cb
    function_4069e0(v2);
    // UNREACHABLE
}
// Address range: 0x4067e0 - 0x4067e2
int64_t function_4067e0(void) {
    // 0x4067e0
    int64_t v1; // 0x4067e0
    return function_406790(v1);
}
// Address range: 0x4067f0 - 0x406826
int64_t function_4067f0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406818
        free(v1);
        return (int32_t)&g54 ^ (int32_t)&g54;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406801
    if (a2 != 0 != (mem == NULL)) {
        // 0x406810
        return (int64_t)mem;
    }
    // 0x406821
    function_4069e0(a1);
    // UNREACHABLE
}
// Address range: 0x406830 - 0x406851
int64_t function_406830(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406833
    int64_t v2 = v1; // 0x406833
    if (v2 < 0) {
        // 0x40684b
        function_4069e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406849
        return function_4067f0(a1, v2);
    }
    // 0x40684b
    function_4069e0(a1);
    // UNREACHABLE
}
// Address range: 0x406860 - 0x4068e6
int64_t function_406860(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4068bb
            function_4069e0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4067f0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4068a3
    if (a2 == 0) {
        // 0x4068c8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4068a8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4068bb
        function_4069e0(a1);
        // UNREACHABLE
    }
    // 0x40688a
    *(int64_t *)a2 = v2;
    return function_4067f0(a1, v2 * a3);
}
// Address range: 0x4068f0 - 0x406940
int64_t function_4068f0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4068f0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40693a
            function_4069e0(a1);
            // UNREACHABLE
        }
        // 0x406912
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4067f0(a1, v1);
    }
    if (a2 == 0) {
        // 0x406925
        *(int64_t *)a2 = 128;
        return function_4067f0(0, 128);
    }
    // 0x406938
    if (a2 < 0) {
        // 0x40693a
        function_4069e0(a1);
        // UNREACHABLE
    }
    // 0x406912
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4067f0(a1, v1);
}
// Address range: 0x406940 - 0x406957
int64_t function_406940(int64_t a1, int64_t a2) {
    // 0x406940
    return (int64_t)memset((int64_t *)function_406790(a1), 0, (int32_t)a1);
}
// Address range: 0x406960 - 0x40698e
int64_t function_406960(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406967
    if ((int64_t)v1 < 0) {
        // 0x406989
        function_4069e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406989
        function_4069e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40697a
    if (mem != NULL) {
        // 0x406984
        return (int64_t)mem;
    }
    // 0x406989
    function_4069e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x406990 - 0x4069b8
int64_t function_406990(int64_t a1, int64_t a2) {
    int64_t v1 = function_406790(a2); // 0x40699f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4069c0 - 0x4069d3
int64_t function_4069c0(int64_t str) {
    // 0x4069c0
    return function_406990(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4069e0 - 0x406a11
int64_t function_4069e0(int64_t a1) {
    // 0x4069e0
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406a20 - 0x406af0
int64_t function_406a20(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x406a20
    int64_t result2; // bp-64, 0x406a20
    int32_t v1 = function_406f50(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x406a4c
    int32_t * v2; // 0x406a20
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x406aca
        if (v1 == 1) {
            // 0x406ae8
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x406ad7
            v2 = v3;
            if (v1 == 3) {
                // 0x406adc
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x406a50
        if (result >= a3 && result <= a4) {
            // 0x406ab2
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x406a5f
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_405050(a1); // 0x406a7c
    int32_t v6 = *v2; // 0x406a81
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x406a97
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x406ab2
    return result2;
}
// Address range: 0x406af0 - 0x406b11
int64_t function_406af0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x406af0
    int64_t result; // 0x406af0
    return result;
}
// Address range: 0x406b20 - 0x406f50
int64_t function_406b20(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int32_t a5, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x406b2e
    if (base >= 37) {
        // 0x406f2b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g54;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x406b52
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x406b82
    int64_t v3 = str; // 0x406b87
    char v4 = c; // 0x406b87
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x406b7c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x406b78
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x406b89
    if (v4 == 45) {
        // 0x406bc3
        return 4;
    }
    int64_t str2 = a5;
    int64_t v6; // bp-64, 0x406b20
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x406b4e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x406b94
    int64_t * v7 = (int64_t *)endptr; // 0x406b99
    int64_t v8 = *v7; // 0x406b99
    char v9; // 0x406b20
    int64_t v10; // 0x406b20
    int64_t v11; // 0x406b20
    int64_t v12; // 0x406b20
    int64_t v13; // 0x406b20
    int64_t v14; // 0x406b20
    int64_t v15; // 0x406b20
    if (v8 == str) {
        // 0x406bf0
        if (c == 0 || a5 == 0) {
            // 0x406bc3
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x406c11
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x406bc3
            return 4;
        }
        goto lab_0x406c1f;
    } else {
        int32_t v16 = *v1; // 0x406ba4
        int64_t v17 = 0; // 0x406baa
        if (v16 != 0) {
            // 0x406bd8
            v17 = 1;
            if (v16 != 34) {
                // 0x406bc3
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x406b94
        v13 = v18;
        v10 = v17;
        if (a5 == 0) {
            goto lab_0x406bc0;
        } else {
            char c2 = *(char *)v8; // 0x406bb3
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x406d13
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x406c1f;
                } else {
                    goto lab_0x406d25;
                }
            } else {
                goto lab_0x406bc0;
            }
        }
    }
  lab_0x406c1f:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x406c27
    int64_t v21 = 1; // 0x406c27
    int64_t v22; // 0x406b20
    int64_t v23; // 0x406b20
    int64_t v24; // 0x406b20
    int64_t v25; // 0x406b20
    int64_t v26; // 0x406b20
    int64_t v27; // 0x406b20
    int64_t v28; // 0x406b20
    int64_t v29; // 0x406b20
    int64_t v30; // 0x406b20
    int64_t v31; // 0x406b20
    int64_t v32; // 0x406b20
    int64_t v33; // 0x406b20
    int64_t v34; // 0x406b20
    int64_t v35; // 0x406b20
    int64_t v36; // 0x406b20
    int64_t v37; // 0x406b20
    int64_t v38; // 0x406b20
    int64_t v39; // 0x406b20
    int64_t v40; // 0x406b20
    int64_t v41; // 0x406b20
    if (v19 < 48) {
        // 0x406c29
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x406c8a;
        } else {
            // 0x406c3c
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x406c8a;
            } else {
                // 0x406c58
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x406c8a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x406eb9
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x406c8a;
                    }
                    default: {
                        // 0x406c6d
                        g49 = v19;
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
                                goto lab_0x406e2b;
                            }
                            case 70: {
                                goto lab_0x406d25;
                            }
                            case 71: {
                                goto lab_0x406e63;
                            }
                            case 72: {
                                goto lab_0x406d25;
                            }
                            case 73: {
                                goto lab_0x406d25;
                            }
                            case 74: {
                                goto lab_0x406d25;
                            }
                            case 75: {
                                goto lab_0x406cec;
                            }
                            case 76: {
                                goto lab_0x406d25;
                            }
                            case 77: {
                                goto lab_0x406cae;
                            }
                            case 78: {
                                goto lab_0x406d25;
                            }
                            case 79: {
                                goto lab_0x406d25;
                            }
                            case 80: {
                                goto lab_0x406df8;
                            }
                            case 81: {
                                goto lab_0x406d25;
                            }
                            case 82: {
                                goto lab_0x406d25;
                            }
                            case 83: {
                                goto lab_0x406d25;
                            }
                            case 84: {
                                goto lab_0x406dc8;
                            }
                            case 85: {
                                goto lab_0x406d25;
                            }
                            case 86: {
                                goto lab_0x406d25;
                            }
                            case 87: {
                                goto lab_0x406d25;
                            }
                            case 88: {
                                goto lab_0x406d25;
                            }
                            case 89: {
                                goto lab_0x406d96;
                            }
                            case 90: {
                                goto lab_0x406d5b;
                            }
                            case 91: {
                                goto lab_0x406d25;
                            }
                            case 92: {
                                goto lab_0x406d25;
                            }
                            case 93: {
                                goto lab_0x406d25;
                            }
                            case 94: {
                                goto lab_0x406d25;
                            }
                            case 95: {
                                goto lab_0x406d25;
                            }
                            case 96: {
                                goto lab_0x406d25;
                            }
                            case 97: {
                                goto lab_0x406d25;
                            }
                            case 98: {
                                goto lab_0x406d3f;
                            }
                            case 99: {
                                goto lab_0x406cc8;
                            }
                            case 100: {
                                goto lab_0x406d25;
                            }
                            case 101: {
                                goto lab_0x406d25;
                            }
                            case 102: {
                                goto lab_0x406d25;
                            }
                            case 103: {
                                goto lab_0x406e63;
                            }
                            case 104: {
                                goto lab_0x406d25;
                            }
                            case 105: {
                                goto lab_0x406d25;
                            }
                            case 106: {
                                goto lab_0x406d25;
                            }
                            case 107: {
                                goto lab_0x406cec;
                            }
                            case 108: {
                                goto lab_0x406d25;
                            }
                            case 109: {
                                goto lab_0x406cae;
                            }
                            case 110: {
                                goto lab_0x406d25;
                            }
                            case 111: {
                                goto lab_0x406d25;
                            }
                            case 112: {
                                goto lab_0x406d25;
                            }
                            case 113: {
                                goto lab_0x406d25;
                            }
                            case 114: {
                                goto lab_0x406d25;
                            }
                            case 115: {
                                goto lab_0x406d25;
                            }
                            case 116: {
                                goto lab_0x406dc8;
                            }
                            default: {
                                goto lab_0x406c8a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x406c8a;
    }
  lab_0x406bc0:
    // 0x406bc0
    *a4 = v13;
    // 0x406bc3
    return v10 & 0xffffffff;
  lab_0x406c8a:
    // 0x406c8a
    g50 = v9 - 66;
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
    int64_t v43; // 0x406b20
    switch (v9) {
        case 66: {
            // 0x406e84
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x406cf7;
            } else {
                // 0x406e91
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406cc8;
            }
        }
        case 69: {
            goto lab_0x406e2b;
        }
        case 71: {
            goto lab_0x406e63;
        }
        case 75: {
            goto lab_0x406cec;
        }
        case 77: {
            goto lab_0x406cae;
        }
        case 80: {
            goto lab_0x406df8;
        }
        case 84: {
            goto lab_0x406dc8;
        }
        case 89: {
            goto lab_0x406d96;
        }
        case 90: {
            goto lab_0x406d5b;
        }
        case 98: {
            goto lab_0x406d3f;
        }
        case 99: {
            goto lab_0x406cc8;
        }
        case 103: {
            goto lab_0x406e63;
        }
        case 107: {
            goto lab_0x406cec;
        }
        case 109: {
            goto lab_0x406cae;
        }
        case 116: {
            goto lab_0x406dc8;
        }
        case 119: {
            // 0x406d30
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x406cf7;
            } else {
                // 0x406d35
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x406cc8;
            }
        }
        default: {
            goto lab_0x406d25;
        }
    }
  lab_0x406e2b:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x406e43
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x406e4f
    int64_t v48 = v45; // 0x406e52
    int64_t v49 = v34; // 0x406e52
    int64_t v50 = v46; // 0x406e52
    int32_t v51 = v47; // 0x406e52
    int64_t v52 = v46; // 0x406e52
    while (v47 != 0) {
        // 0x406e40
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
    goto lab_0x406d84;
  lab_0x406e63:
    // 0x406e63
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x406e6e
        int128_t v53; // 0x406e69
        uint128_t v54; // 0x406e69
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x406e6e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x406b20
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x406e73
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x406e78
                v23 = v57;
                int64_t v58; // 0x406b20
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x406cc8;
  lab_0x406cec:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x406cef
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x406cc8;
    } else {
        goto lab_0x406cf7;
    }
  lab_0x406cae:;
    int128_t v62 = v24; // 0x406cb4
    uint128_t v63 = v62 * (int128_t)v14; // 0x406cb4
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x406cf7;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x406cb9
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x406cf7;
        } else {
            // 0x406cbe
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x406cc8;
        }
    }
  lab_0x406df8:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x406e0b
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x406e17
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x406e1a
    int64_t v70 = v67; // 0x406e1a
    while (v68 != 0) {
        // 0x406e08
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
    goto lab_0x406d84;
  lab_0x406dc8:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x406ddb
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x406de7
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x406dea
    int64_t v76 = v73; // 0x406dea
    while (v74 != 0) {
        // 0x406dd8
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
    goto lab_0x406d84;
  lab_0x406d96:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x406dab
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x406db7
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x406dba
    int64_t v82 = v79; // 0x406dba
    while (v80 != 0) {
        // 0x406da8
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
    goto lab_0x406d84;
  lab_0x406d5b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x406d73
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x406d7f
    int32_t v87 = v86; // 0x406d82
    int64_t v88 = v85; // 0x406d82
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x406d70
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
    goto lab_0x406d84;
  lab_0x406d3f:
    // 0x406d3f
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x406cf7;
    } else {
        // 0x406d48
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x406cc8;
    }
  lab_0x406cc8:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x406ccd
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x406bc0;
  lab_0x406d25:
    // 0x406d25
    *a4 = v15;
    // 0x406bc3
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x406cf7:
    // 0x406cf7
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x406cc8;
  lab_0x406d84:
    // 0x406d84
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x406cc8;
}
// Address range: 0x406f50 - 0x407390
int64_t function_406f50(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x406f5e
    if (v1 >= 37) {
        // 0x40736b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g54;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x406f82
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x406fb2
    int64_t v4 = a1; // 0x406fb7
    char v5 = c; // 0x406fb7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x406fac
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x406fa8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x406fb9
    if (v5 == 45) {
        // 0x406ff5
        return 4;
    }
    // 0x406fbe
    int64_t v7; // bp-64, 0x406f50
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x406f7e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x406fc6
    int64_t * v10 = (int64_t *)v8; // 0x406fcb
    int64_t v11 = *v10; // 0x406fcb
    char v12; // 0x406f50
    int64_t v13; // 0x406f50
    int64_t v14; // 0x406f50
    int64_t v15; // 0x406f50
    int64_t v16; // 0x406f50
    int64_t v17; // 0x406f50
    int64_t v18; // 0x406f50
    if (v11 == a1) {
        // 0x407028
        if (c == 0 || str == 0) {
            // 0x406ff5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x407049
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x406ff5
            return 4;
        }
        goto lab_0x407057;
    } else {
        int32_t v19 = *v2; // 0x406fd6
        int64_t v20 = 0; // 0x406fdc
        if (v19 != 0) {
            // 0x407010
            v20 = 1;
            if (v19 != 34) {
                // 0x406ff5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x406fc6
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x406ff2;
        } else {
            char c2 = *(char *)v11; // 0x406fe5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x407153
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407057;
                } else {
                    goto lab_0x407165;
                }
            } else {
                goto lab_0x406ff2;
            }
        }
    }
  lab_0x407057:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40705f
    int64_t v24 = 1; // 0x40705f
    int64_t v25; // 0x406f50
    int64_t v26; // 0x406f50
    int64_t v27; // 0x406f50
    int64_t v28; // 0x406f50
    int64_t v29; // 0x406f50
    int64_t v30; // 0x406f50
    int64_t v31; // 0x406f50
    int64_t v32; // 0x406f50
    int64_t v33; // 0x406f50
    int64_t v34; // 0x406f50
    int64_t v35; // 0x406f50
    int64_t v36; // 0x406f50
    int64_t v37; // 0x406f50
    int64_t v38; // 0x406f50
    int64_t v39; // 0x406f50
    int64_t v40; // 0x406f50
    int64_t v41; // 0x406f50
    int64_t v42; // 0x406f50
    int64_t v43; // 0x406f50
    int64_t v44; // 0x406f50
    if (v22 < 48) {
        // 0x407061
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4070ca;
        } else {
            // 0x407074
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4070ca;
            } else {
                // 0x407090
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4070ca;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x4072f9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4070ca;
                    }
                    default: {
                        // 0x4070a5
                        g51 = v22;
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
                                goto lab_0x40726b;
                            }
                            case 70: {
                                goto lab_0x407165;
                            }
                            case 71: {
                                goto lab_0x4072a3;
                            }
                            case 72: {
                                goto lab_0x407165;
                            }
                            case 73: {
                                goto lab_0x407165;
                            }
                            case 74: {
                                goto lab_0x407165;
                            }
                            case 75: {
                                goto lab_0x40712c;
                            }
                            case 76: {
                                goto lab_0x407165;
                            }
                            case 77: {
                                goto lab_0x4070ee;
                            }
                            case 78: {
                                goto lab_0x407165;
                            }
                            case 79: {
                                goto lab_0x407165;
                            }
                            case 80: {
                                goto lab_0x407238;
                            }
                            case 81: {
                                goto lab_0x407165;
                            }
                            case 82: {
                                goto lab_0x407165;
                            }
                            case 83: {
                                goto lab_0x407165;
                            }
                            case 84: {
                                goto lab_0x407208;
                            }
                            case 85: {
                                goto lab_0x407165;
                            }
                            case 86: {
                                goto lab_0x407165;
                            }
                            case 87: {
                                goto lab_0x407165;
                            }
                            case 88: {
                                goto lab_0x407165;
                            }
                            case 89: {
                                goto lab_0x4071d6;
                            }
                            case 90: {
                                goto lab_0x40719b;
                            }
                            case 91: {
                                goto lab_0x407165;
                            }
                            case 92: {
                                goto lab_0x407165;
                            }
                            case 93: {
                                goto lab_0x407165;
                            }
                            case 94: {
                                goto lab_0x407165;
                            }
                            case 95: {
                                goto lab_0x407165;
                            }
                            case 96: {
                                goto lab_0x407165;
                            }
                            case 97: {
                                goto lab_0x407165;
                            }
                            case 98: {
                                goto lab_0x40717f;
                            }
                            case 99: {
                                goto lab_0x407108;
                            }
                            case 100: {
                                goto lab_0x407165;
                            }
                            case 101: {
                                goto lab_0x407165;
                            }
                            case 102: {
                                goto lab_0x407165;
                            }
                            case 103: {
                                goto lab_0x4072a3;
                            }
                            case 104: {
                                goto lab_0x407165;
                            }
                            case 105: {
                                goto lab_0x407165;
                            }
                            case 106: {
                                goto lab_0x407165;
                            }
                            case 107: {
                                goto lab_0x40712c;
                            }
                            case 108: {
                                goto lab_0x407165;
                            }
                            case 109: {
                                goto lab_0x4070ee;
                            }
                            case 110: {
                                goto lab_0x407165;
                            }
                            case 111: {
                                goto lab_0x407165;
                            }
                            case 112: {
                                goto lab_0x407165;
                            }
                            case 113: {
                                goto lab_0x407165;
                            }
                            case 114: {
                                goto lab_0x407165;
                            }
                            case 115: {
                                goto lab_0x407165;
                            }
                            case 116: {
                                goto lab_0x407208;
                            }
                            default: {
                                goto lab_0x4070ca;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4070ca;
    }
  lab_0x406ff2:
    // 0x406ff2
    *a4 = v16;
    // 0x406ff5
    return v13 & 0xffffffff;
  lab_0x4070ca:
    // 0x4070ca
    g52 = v12 - 66;
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
    int64_t v46; // 0x406f50
    switch (v12) {
        case 66: {
            // 0x4072c4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x407137;
            } else {
                // 0x4072d1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407108;
            }
        }
        case 69: {
            goto lab_0x40726b;
        }
        case 71: {
            goto lab_0x4072a3;
        }
        case 75: {
            goto lab_0x40712c;
        }
        case 77: {
            goto lab_0x4070ee;
        }
        case 80: {
            goto lab_0x407238;
        }
        case 84: {
            goto lab_0x407208;
        }
        case 89: {
            goto lab_0x4071d6;
        }
        case 90: {
            goto lab_0x40719b;
        }
        case 98: {
            goto lab_0x40717f;
        }
        case 99: {
            goto lab_0x407108;
        }
        case 103: {
            goto lab_0x4072a3;
        }
        case 107: {
            goto lab_0x40712c;
        }
        case 109: {
            goto lab_0x4070ee;
        }
        case 116: {
            goto lab_0x407208;
        }
        case 119: {
            // 0x407170
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x407137;
            } else {
                // 0x407175
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x407108;
            }
        }
        default: {
            goto lab_0x407165;
        }
    }
  lab_0x40726b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x407283
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40728f
    int64_t v51 = v48; // 0x407292
    int64_t v52 = v37; // 0x407292
    int64_t v53 = v49; // 0x407292
    int32_t v54 = v50; // 0x407292
    int64_t v55 = v49; // 0x407292
    while (v50 != 0) {
        // 0x407280
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
    goto lab_0x4071c4;
  lab_0x4072a3:
    // 0x4072a3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4072ae
        int128_t v56; // 0x4072a9
        uint128_t v57; // 0x4072a9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4072ae
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x406f50
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4072b3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4072b8
                v26 = v60;
                int64_t v61; // 0x406f50
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x407108;
  lab_0x40712c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40712f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x407108;
    } else {
        goto lab_0x407137;
    }
  lab_0x4070ee:;
    int128_t v65 = v27; // 0x4070f4
    uint128_t v66 = v65 * (int128_t)v17; // 0x4070f4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x407137;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x4070f9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x407137;
        } else {
            // 0x4070fe
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x407108;
        }
    }
  lab_0x407238:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40724b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x407257
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40725a
    int64_t v73 = v70; // 0x40725a
    while (v71 != 0) {
        // 0x407248
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
    goto lab_0x4071c4;
  lab_0x407208:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40721b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x407227
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40722a
    int64_t v79 = v76; // 0x40722a
    while (v77 != 0) {
        // 0x407218
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
    goto lab_0x4071c4;
  lab_0x4071d6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x4071eb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x4071f7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x4071fa
    int64_t v85 = v82; // 0x4071fa
    while (v83 != 0) {
        // 0x4071e8
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
    goto lab_0x4071c4;
  lab_0x40719b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4071b3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4071bf
    int32_t v90 = v89; // 0x4071c2
    int64_t v91 = v88; // 0x4071c2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4071b0
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
    goto lab_0x4071c4;
  lab_0x40717f:
    // 0x40717f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x407137;
    } else {
        // 0x407188
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x407108;
    }
  lab_0x407108:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40710d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x406ff2;
  lab_0x407165:
    // 0x407165
    *a4 = v18;
    // 0x406ff5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407137:
    // 0x407137
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x407108;
  lab_0x4071c4:
    // 0x4071c4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x407108;
}
// Address range: 0x407390 - 0x40740b
int64_t function_407390(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x407397
    if (fileno(stream) < 0) {
        // 0x4073f7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4073aa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4073db
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4073f7
            return fclose(stream);
        }
    }
    // 0x4073ac
    if ((int32_t)function_407410(a1, v1) == 0) {
        // 0x4073f7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x4073b8
    int32_t v3 = *v2; // 0x4073c0
    int64_t result = fclose(stream); // 0x4073ce
    if (v3 != 0) {
        // 0x407400
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4073d0
    return result;
}
// Address range: 0x407410 - 0x407450
int64_t function_407410(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40742a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40742a
        return fflush(stream);
    }
    // 0x407438
    function_4074f0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407450 - 0x4074ee
int64_t function_407450(int64_t a1, int64_t a2) {
    char * file_path = (char *)a1; // 0x40745e
    char * mode = (char *)a2; // 0x40745e
    int64_t stream; // 0x407450
    struct _IO_FILE * file = freopen(file_path, mode, (struct _IO_FILE *)stream); // 0x40745e
    if (a1 == 0 || file == NULL) {
        // 0x407488
        return (int64_t)file;
    }
    int32_t fd2 = fileno(file); // 0x407473
    if (dup2(fd2, fd2) >= 0 || *__errno_location() != 9) {
        // 0x407488
        return (int64_t)file;
    }
    int32_t fd = open("/dev/null", O_CLOEXEC); // 0x4074ae
    if (fd == fd2) {
        // 0x4074d1
        return (int64_t)freopen(file_path, mode, file);
    }
    int32_t v1 = dup2(fd, fd2); // 0x4074c0
    close(fd);
    if (v1 < 0) {
        // 0x407488
        return (int64_t)file;
    }
    // 0x4074d1
    return (int64_t)freopen(file_path, mode, file);
}
// Address range: 0x4074f0 - 0x407547
int64_t function_4074f0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4074f0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4074fa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40752b
    int64_t result = -1; // 0x407534
    if (v1 != -1) {
        // 0x407536
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407542
    return result;
}
// Address range: 0x407550 - 0x40762f
int64_t function_407550(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40755c
    uint32_t v2 = *v1; // 0x40755c
    int64_t v3 = a2 & 0xffffffff; // 0x407561
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407564
    uint64_t v5 = (int64_t)*v4; // 0x407564
    int64_t v6; // 0x4075d2
    if (v3 <= v5) {
      lab_0x4075cc_2:
        // 0x4075cc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407552
    int64_t v8 = v2; // 0x407550
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4075cc
        goto lab_0x4075cc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407588
    int64_t v17; // 0x407596
    int64_t * v18; // 0x4075b0
    int64_t * v19; // 0x4075b3
    int64_t v20; // 0x4075be
    int64_t v21; // 0x407596
    while ((v16 & 0xffffffff) > v10) {
        // 0x407593
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4075b0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4075c7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4075cc
            goto lab_0x4075cc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4075cc
            goto lab_0x4075cc_2;
        }
        // 0x407582
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40760b
    int64_t * v23 = (int64_t *)v22; // 0x407610
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407613
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407610
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407627
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40757d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4075cc
            goto lab_0x4075cc_2;
        }
        // 0x407582
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407593
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4075b0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4075c7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4075cc
                goto lab_0x4075cc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4075cc
                goto lab_0x4075cc_2;
            }
            // 0x407582
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4075f0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407610
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407627
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4075cc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x407630 - 0x407c4c
int64_t function_407630(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40764f
    int64_t v2 = *v1; // 0x40764f
    char * str2 = (char *)v2; // 0x40765c
    char c = *str2; // 0x40765c
    int64_t v3 = v2; // 0x407688
    int64_t v4 = 0; // 0x407630
    int32_t v5; // 0x407630
    int64_t v6; // 0x407630
    int64_t v7; // 0x407630
    int64_t v8; // 0x407630
    int64_t v9; // 0x407630
    int64_t v10; // 0x407630
    int64_t v11; // 0x407630
    int64_t v12; // 0x407630
    int64_t v13; // 0x407630
    int64_t str3; // 0x407630
    int64_t v14; // 0x407630
    int64_t v15; // 0x407630
    int64_t v16; // 0x407630
    int64_t v17; // 0x407630
    int32_t v18; // 0x407630
    int32_t v19; // 0x407630
    int32_t v20; // 0x407630
    int32_t v21; // 0x407630
    int32_t v22; // 0x407630
    int32_t v23; // 0x407630
    int32_t v24; // 0x407630
    int32_t v25; // 0x407630
    int32_t v26; // 0x407630
    int32_t v27; // 0x407630
    int32_t v28; // 0x407630
    int32_t v29; // 0x407630
    int64_t nmemb; // 0x407630
    int64_t v30; // 0x407630
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40768c
            while (v31 != 0 == (v31 != 61)) {
                // 0x407688
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407698
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40769e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407668
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4076cc
                int64_t v34; // 0x407630
                int64_t v35; // 0x407630
                if (strncmp(str, str2, n) == 0) {
                    // 0x4076d5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x407850;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4076e6
                int64_t v37 = *(int64_t *)v36; // 0x4076ea
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4076c0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4076d5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x407850;
                        }
                    }
                    // 0x4076e6
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
                  lab_0x407736:
                    // 0x407736
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
                        goto lab_0x407790;
                    } else {
                        if (v11 == 0) {
                            // 0x407900
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407790;
                        } else {
                            if (v39 == 0) {
                                // 0x4078b0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40775a;
                                } else {
                                    // 0x4078bc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40775a;
                                    } else {
                                        // 0x4078ca
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40775a;
                                        } else {
                                            goto lab_0x407790;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40775a;
                            }
                        }
                    }
                }
              lab_0x4077a1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x407976
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407b22
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x407b42
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x407b8f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x407ba9
                            int64_t v45; // 0x407bab
                            if (*(char *)v42 != 0) {
                                // 0x407bab
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x407ba3
                            while (v17 + nmemb != v42) {
                                // 0x407ba5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x407bab
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x407b98
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x407bd0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x407984
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x407adf
                        free((int64_t *)v17);
                    }
                    // 0x4079d9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4079f0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40789e
                    return 63;
                }
                // 0x4077c0
                v5 = v39;
                if (v13 != 0) {
                    // 0x407844
                    v35 = v13;
                    v34 = v25;
                  lab_0x407850:;
                    int32_t * v49 = (int32_t *)a7; // 0x407860
                    uint32_t v50 = *v49; // 0x407860
                    int64_t v51 = v50; // 0x407860
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40786a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x407873
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x407a9f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x407a4a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40789e
                            return 63;
                        }
                        // 0x4078e8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x407bff
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x407afd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407b10
                                // 0x40789e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x407a0e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x407a22
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40788b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40788e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407892
                    int64_t result = v59; // 0x407898
                    if (v58 != 0) {
                        // 0x40789a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40789e
                    return result;
                }
            } else {
                // 0x40769e
                v5 = v32;
            }
            // break -> 0x4077c5
            break;
        }
    }
    // 0x4077c5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4077dd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4077e7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40789e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x407929
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407816
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407826
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407790:
    // 0x407790
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407790
    int64_t v63 = *(int64_t *)v62; // 0x407794
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4077a1
        goto lab_0x4077a1;
    }
    goto lab_0x407736;
  lab_0x40775a:
    // 0x40775a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x407630
    int32_t v65; // 0x407630
    int32_t v66; // 0x407630
    if (v27 != 0) {
        goto lab_0x407790;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x407910
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407790;
            } else {
                goto lab_0x407781;
            }
        } else {
            // 0x407775
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x407a6c
                int64_t v67 = (int64_t)mem; // 0x407a6c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407790;
                } else {
                    // 0x407a7f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407781;
                }
            } else {
                goto lab_0x407781;
            }
        }
    }
  lab_0x407781:
    // 0x407781
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407790;
}
// Address range: 0x407c50 - 0x408216
int64_t function_407c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407c71
    if (v3 < 1) {
        // 0x407e2e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x407c6d
    int32_t v5 = *(int32_t *)a7; // 0x407c79
    uint64_t v6 = a1 & 0xffffffff; // 0x407c7b
    int64_t v7 = v2; // 0x407c80
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x407c83
    *v8 = 0;
    int64_t v9; // 0x407c50
    int64_t v10; // 0x407c50
    int64_t v11; // 0x407c50
    int64_t v12; // 0x407c50
    int64_t str; // 0x407c50
    int64_t v13; // 0x407c50
    int64_t v14; // 0x407c50
    int64_t v15; // 0x407c50
    int64_t v16; // 0x407c50
    int64_t v17; // 0x407c50
    int32_t v18; // 0x407c50
    char v19; // 0x407c50
    if (v5 == 0) {
        // 0x407e68
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x407c9a;
    } else {
        // 0x407c93
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407ce0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407ce3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407da8;
            } else {
                int64_t v22 = v7 + 1; // 0x407cf6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407d06
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x407dbc;
                } else {
                    goto lab_0x407d18;
                }
            }
        } else {
            goto lab_0x407c9a;
        }
    }
  lab_0x407c9a:
    // 0x407c9a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x407ca0
    *v24 = 0;
    int64_t v25; // 0x407c50
    int64_t v26; // 0x407c50
    int64_t v27; // 0x407c50
    switch (*(char *)&v2) {
        case 45: {
            // 0x407d90
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407d9d;
        }
        case 43: {
            // 0x4080a0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407d9d;
        }
        default: {
            // 0x407cbc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40801f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408138
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x407d9d;
                } else {
                    // 0x40802d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x407cca;
                }
            } else {
                goto lab_0x407cca;
            }
        }
    }
  lab_0x407da8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x407daf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407d18;
    } else {
        goto lab_0x407dbc;
    }
  lab_0x407cca:
    // 0x407cca
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x407d9d;
  lab_0x407d9d:
    // 0x407d9d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407da8;
  lab_0x407d18:;
    uint32_t v30 = *(int32_t *)a7; // 0x407d18
    int64_t v31 = v30; // 0x407d18
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x407d1a
    if ((int64_t)*v32 > v31) {
        // 0x407d1f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407d22
    if (*v33 > v30) {
        // 0x407d27
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x407d2a
    int64_t v35 = v31; // 0x407d2e
    int64_t v36 = v15; // 0x407d2e
    int64_t v37; // 0x407c50
    int64_t v38; // 0x407c50
    int64_t v39; // 0x407c50
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x407e98
        int64_t v41 = v40; // 0x407e98
        v2 = v41;
        int64_t v42; // 0x407c50
        if (*v33 == v40) {
            // 0x408080
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408088
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407ea4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407ea8
                function_407550(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407eb8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407ec1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x407eca
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407ee1
            int64_t v47 = v45 & 0xffffffff; // 0x407ee5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x407eee
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407ef4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407ef6;
                }
            }
            int64_t v48 = v47 + 1; // 0x407ed0
            int64_t v49 = v48 & 0xffffffff; // 0x407ed0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407ee1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x407eee
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407ef4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407ef6;
                    }
                }
                // 0x407ed0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408098
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407ef6;
    } else {
        goto lab_0x407d34;
    }
  lab_0x407dbc:
    // 0x407dbc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x407dbf
    int64_t v51 = v12; // 0x407dbf
    int64_t v52 = v14; // 0x407dbf
    if (*(char *)v10 == 0) {
        goto lab_0x407d18;
    } else {
        goto lab_0x407dc5;
    }
  lab_0x407d34:;
    int32_t v53 = v35; // 0x407d34
    int64_t v54; // 0x407c50
    int64_t v55; // 0x407c50
    int64_t v56; // 0x407c50
    int64_t v57; // 0x407c50
    int64_t v58; // 0x407c50
    int64_t v59; // 0x407c50
    char * v60; // 0x407c50
    int64_t v61; // 0x407c50
    int64_t v62; // 0x407d49
    int64_t v63; // 0x407c50
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407e83
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407e86;
    } else {
        // 0x407d3c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407c50
        int64_t v66 = v65 ? -1 : 1; // 0x407d50
        int64_t v67 = (int64_t)"--"; // 0x407c50
        int64_t v68 = v62; // 0x407c50
        int64_t v69 = 3; // 0x407d50
        unsigned char v70 = *(char *)v68; // 0x407d50
        char v71 = *(char *)v67; // 0x407d50
        char v72 = v71; // 0x407d50
        bool v73 = false; // 0x407d50
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
            // 0x407e40
            if (*(char *)v62 == 45) {
                // 0x407f00
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407f00
                if (c == 0) {
                    goto lab_0x407e4a;
                } else {
                    // 0x407f0d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x407f90;
                    } else {
                        if (c == 45) {
                            // 0x408173
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x407fe5;
                        } else {
                            // 0x407f1e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x407f90;
                            } else {
                                // 0x407f23
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407f44;
                                } else {
                                    // 0x407f2a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x407f90;
                                    } else {
                                        goto lab_0x407f44;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x407e4a;
            }
        } else {
            uint32_t v75 = *v33; // 0x407d60
            v2 = v75;
            int32_t v76 = *v32; // 0x407d63
            int64_t v77 = v35 + 1; // 0x407d66
            int32_t v78 = v77; // 0x407d69
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4080d0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407d77
                    function_407550(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407d85
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407e86;
        }
    }
  lab_0x407dc5:;
    // 0x407dc5
    int64_t v79; // bp-104, 0x407c50
    int64_t v80 = &v79; // 0x407c5a
    int64_t v81 = v50 + 1; // 0x407dc5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x407dcc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407dd1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407dd5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407dd9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407de1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407de6
    int32_t c2 = v84; // 0x407de6
    char * found_char_pos = strchr(str2, c2); // 0x407de6
    int64_t v87 = *v82; // 0x407deb
    v2 = v87;
    int64_t v88 = *v85; // 0x407df5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407e00
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4080f0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4080bd
        *(int32_t *)(v1 + 8) = c2;
        // 0x407e2e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407de6
    char v91 = *(char *)(v90 + 1); // 0x407e1b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407dd5
        if (v91 != 58) {
            // 0x407e2e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408044
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408148
                *v8 = 0;
            } else {
                // 0x40812c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40806e
            *v83 = 0;
            // 0x407e2e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40804e
        if (v93 != 0) {
            // 0x4080e0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40806e
            *v83 = 0;
            // 0x407e2e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408061
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40806e
            *v83 = 0;
            // 0x407e2e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4081aa
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40815a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408161
        // 0x40806e
        *v83 = 0;
        // 0x407e2e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x407fb9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x407fbb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4081e0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408191
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408198
            // 0x407e2e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x407fc6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x407fca
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x407fe5;
  lab_0x407ef6:
    // 0x407ef6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407d34;
  lab_0x407fe5:;
    int64_t v99 = function_407630(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408003
    // 0x407e2e
    return v99 & 0xffffffff;
  lab_0x407e86:;
    int32_t v100 = v55; // 0x407e86
    if (v100 != (int32_t)v59) {
        // 0x407e8a
        *(int32_t *)a7 = v100;
    }
    // 0x407e2e
    return 0xffffffff;
  lab_0x407e4a:
    // 0x407e4a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407e51
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x407e2e
    return v99 & 0xffffffff;
  lab_0x407f90:
    // 0x407f90
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407dc5;
  lab_0x407f44:
    // 0x407f44
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_407630(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x407f6a
    if ((int32_t)v101 != -1) {
        // 0x407e2e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x407f7f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x407f90;
}
// Address range: 0x408220 - 0x408276
int64_t function_408220(int64_t a1) {
    // 0x408220
    *(int32_t *)&g42 = g27;
    *(int32_t *)&g43 = g26;
    int64_t v1; // 0x408220
    int64_t result = function_407c50(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x408246
    g27 = *(int32_t *)&g42;
    g48 = (char *)g45;
    *(int32_t *)&g25 = g44;
    return result;
}
// Address range: 0x408280 - 0x408298
int64_t function_408280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408280
    return function_408220(1);
}
// Address range: 0x4082a0 - 0x4082b3
int64_t function_4082a0(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x4082a0
    return function_408220(0);
}
// Address range: 0x4082c0 - 0x4082d5
int64_t function_4082c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4082c0
    return function_407c50(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4082e0 - 0x4082f6
int64_t function_4082e0(void) {
    // 0x4082e0
    return function_408220(0);
}
// Address range: 0x408300 - 0x408318
int64_t function_408300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408300
    return function_407c50(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408320 - 0x40839a
int64_t function_408320(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40832b
    int64_t v2 = (int64_t)&g10; // 0x40832b
    int32_t * pwc; // 0x408320
    int64_t v3; // 0x408320
    int64_t n; // 0x408320
    if (a2 == 0) {
        goto lab_0x408372;
    } else {
        // 0x40832d
        if (a3 == 0) {
            // 0x408358
            return -2;
        }
        // 0x408339
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408372;
        } else {
            goto lab_0x408344;
        }
    }
  lab_0x408372:
    // 0x408372
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408320
    pwc = (int32_t *)&v4;
    goto lab_0x408344;
  lab_0x408344:;
    char * wstr = (char *)v3; // 0x40834a
    int64_t ps; // 0x408320
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40834a
    int64_t result = v5; // 0x40834a
    if (v5 < 0xfffffffe) {
        // 0x408358
        return result;
    }
    int64_t result2 = result; // 0x408389
    if ((char)function_4085b0(0, v3) == 0) {
        // 0x40838b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408358
    return result2;
}
// Address range: 0x4083a0 - 0x4084a4
int64_t function_4083a0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x4083a0
    if (a3 == 0) {
        // 0x4083d9
        return 0;
    }
    int64_t v1 = result; // 0x4083ac
    int64_t v2 = a3; // 0x4083ac
    int64_t result2; // 0x4083a0
    if (result % 8 != 0) {
        char v3 = a2; // 0x4083ae
        int64_t v4 = result; // 0x4083b1
        if ((char)result == v3) {
            // 0x4083d9
            return result;
        }
        int64_t v5 = a3; // 0x4083b1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x4083c0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x4083e0;
            }
            // 0x4083c6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x4083d9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x4083d9
        return result2;
    }
  lab_0x4083e0:;
    int64_t result3 = v1; // 0x40840d
    int64_t v6 = v2; // 0x40840d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x4083ef
        int64_t v8 = 0x10000 * v7 | v7; // 0x4083fc
        int64_t v9 = 0x100000000 * v8 | v8; // 0x408406
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x408426
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x408455
            int64_t v12 = v1 + 8; // 0x408459
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x408443
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40846c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x408463
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x4083d9
                return 0;
            }
        }
    }
  lab_0x40846c:;
    char v14 = a2; // 0x40846c
    if (*(char *)result3 == v14) {
        // 0x4083d9
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x408480
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x4083d9
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x4083d9
    return result2;
}
// Address range: 0x4084b0 - 0x40850d
int64_t function_4084b0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4084b7
    int64_t v2; // 0x4084b0
    int64_t result = function_407390(a1, v2); // 0x4084c8
    if ((v2 & 32) != 0) {
        // 0x4084f0
        if ((int32_t)result == 0) {
            // 0x4084f4
            *__errno_location() = 0;
        }
        // 0x4084ea
        return 0xffffffff;
    }
    // 0x4084d1
    if ((int32_t)result == 0) {
        // 0x4084ea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4084d8
    if (v1 == 0) {
        // 0x4084da
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4084ea
    return result2;
}
// Address range: 0x408510 - 0x4085a3
int64_t function_408510(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x408517
    int64_t result = (int64_t)file; // 0x408517
    if (file == NULL) {
        // 0x408531
        return result;
    }
    uint32_t v1 = fileno(file); // 0x408527
    if (v1 >= 3) {
        // 0x408531
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_409dd0((int64_t)v1, v2); // 0x40854a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x408588
        function_407390(result, v2);
        // 0x408531
        return 0;
    }
    // 0x40854e
    if ((int32_t)function_407390(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x408560
        if (v4 != NULL) {
            // 0x408531
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x40856d
    close(fd);
    // 0x408531
    return 0;
}
// Address range: 0x4085b0 - 0x40860e
int64_t function_4085b0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4085b6
    if (locale == NULL) {
        // 0x4085e3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4085b6
    bool v2; // 0x4085b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x4085b0
    int64_t v5 = v1; // 0x4085b0
    int64_t v6 = 2; // 0x4085d5
    unsigned char v7 = *(char *)v5; // 0x4085d5
    char v8 = *(char *)v4; // 0x4085d5
    char v9 = v8; // 0x4085d5
    bool v10 = false; // 0x4085d5
    while (v7 == v8) {
        // 0x4085c8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4085e1
    int64_t v13 = v1; // 0x4085e1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4085e3
        return 0;
    }
    int64_t v14 = 6; // 0x4085e1
    unsigned char v15 = *(char *)v13; // 0x4085fd
    char v16 = *(char *)v12; // 0x4085fd
    char v17 = v16; // 0x4085fd
    bool v18 = false; // 0x4085fd
    while (v15 == v16) {
        // 0x4085f0
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
// Address range: 0x408610 - 0x4086a3
int64_t function_408610(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x408627
    if (v1 == -1) {
        // 0x40869f
        return -1;
    }
    int64_t v2 = v1; // 0x40862f
    int64_t v3; // 0x408610
    while (true) {
      lab_0x408638:
        // 0x408638
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x408690;
        } else {
            goto lab_0x408695;
        }
    }
  lab_0x40869f_2:;
    // 0x40869f
    int64_t result; // 0x408610
    return result;
  lab_0x408695:;
    int64_t v4 = v3 + 2; // 0x408695
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40869f
        goto lab_0x40869f_2;
    }
    goto lab_0x408638;
  lab_0x408690:
    // 0x408690
    result = v3;
    goto lab_0x408695;
}
// Address range: 0x4086b0 - 0x4086c0
int64_t function_4086b0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x4086b0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x4086c0 - 0x4086c7
int64_t function_4086c0(int64_t a1, int64_t a2) {
    // 0x4086c0
    int64_t v1; // 0x4086c0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x4086d0 - 0x4086f1
int64_t function_4086d0(int64_t a1, int64_t a2) {
    // 0x4086d0
    int64_t v1; // 0x4086d0
    return 16 * v1 + a2;
}
// Address range: 0x408700 - 0x408819
int64_t function_408700(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_4086d0(a1, a2); // 0x408714
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40871c
    int64_t result2 = *v2; // 0x40871c
    if (result2 == 0) {
        // 0x4087ae
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x408744
            if (v3 == 0) {
                // 0x4087ae
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x408751
            int64_t v5 = v3; // 0x408757
            int64_t v6 = v1; // 0x408757
            int64_t result = v4; // 0x408757
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40878c_2:
                // 0x40878c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x408791
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x4087a0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x4087ae
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x408764
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x408771
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40878c_2;
                }
                // 0x408779
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40878c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x4087ae
            return 0;
        }
    }
    // 0x4087c3
    if ((char)a4 == 0) {
        // 0x4087ae
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x4087c8
    if (v12 == 0) {
        // 0x408810
        *v2 = 0;
        // 0x4087ae
        return result2;
    }
    // 0x4087d1
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x4087df
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x408820 - 0x40889e
int64_t function_408820(uint64_t a1) {
    if (a1 == (int64_t)&g12) {
        // 0x40889d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40882b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g12) {
        // 0x40888a
        *(int64_t *)a1 = (int64_t)&g12;
        return 0;
    }
    // 0x408839
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x408854
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x408861
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x408869
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40889d
    return 1;
}
// Address range: 0x4088a0 - 0x4089ea
int64_t function_4088a0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4088ba
    uint64_t v2 = *v1; // 0x4088ba
    if (v2 <= a2) {
        // 0x4089a4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x4088a0
    int64_t v8 = a2; // 0x4088a0
    int64_t v9; // 0x4088a0
    int64_t result; // 0x4088a0
    int64_t v10; // 0x4088a0
    while (true) {
      lab_0x4088d6_2:
        // 0x4088d6
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x4088d6
        int64_t v12 = *v11; // 0x4088d6
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x4088c8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x4088df
            int64_t v14 = *v13; // 0x4088df
            int64_t v15 = v14; // 0x4088e7
            int64_t v16 = v12; // 0x4088e7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x408904
                    int64_t v19 = *v18; // 0x408904
                    int64_t v20 = function_4086d0(v3, v19); // 0x40890d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x408912
                    int64_t v22 = *v21; // 0x408912
                    int64_t * v23 = (int64_t *)v20; // 0x408916
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x4088f0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40893f
                            break;
                        }
                    } else {
                        // 0x40891c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40893f
                            break;
                        }
                    }
                    // 0x408904
                    v15 = v22;
                }
                // 0x40893f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x408943
                v9 = *v1;
                goto lab_0x4088c8;
            } else {
                int64_t v26 = function_4086d0(v3, v25); // 0x40895b
                int64_t * v27 = (int64_t *)v26; // 0x408960
                if (*v27 == 0) {
                    // 0x4089c0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x408969
                    int64_t * v29; // 0x4088a0
                    int64_t v30; // 0x4088a0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x4089cf
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x4089a4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x4089cf
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40897a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x408989
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x408991
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40899a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x4089a4
                    break;
                }
                goto lab_0x4088d6_2;
            }
        }
    }
    // 0x4089a4
    return result;
  lab_0x4088c8:;
    int64_t v36 = v10 + 16; // 0x4088c8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x4088d6_2;
    // 0x4088d6
    goto lab_0x4088d6_2;
}
// Address range: 0x4089f0 - 0x4089f5
int64_t function_4089f0(int64_t a1) {
    // 0x4089f0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x408a00 - 0x408a05
int64_t function_408a00(int64_t a1) {
    // 0x408a00
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x408a10 - 0x408a15
int64_t function_408a10(int64_t a1) {
    // 0x408a10
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x408a20 - 0x408a6f
int64_t function_408a20(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408a23
    int64_t result = 0; // 0x408a2c
    if (v1 <= a1) {
      lab_0x408a6d:
        // 0x408a6d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x408a30
    while (*(int64_t *)v3 == 0) {
        // 0x408a30
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x408a3f
    int64_t v6 = v5; // 0x408a4b
    int64_t v7 = 1; // 0x408a4b
    int64_t v8; // 0x408a20
    int64_t v9; // 0x408a50
    int64_t v10; // 0x408a54
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x408a50
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x408a60
    int64_t v12 = v3 + 16; // 0x408a64
    while (v12 < v1) {
        // 0x408a39
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x408a30
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x408a3f
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
                // 0x408a50
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x408a5d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x408a6d
    return result2;
}
// Address range: 0x408a70 - 0x408ad7
int64_t function_408a70(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408a73
    int64_t v2 = a1; // 0x408a7f
    int64_t v3 = 0; // 0x408a7f
    int64_t v4 = 0; // 0x408a7f
    int64_t v5 = 0; // 0x408a7f
    int64_t v6 = 0; // 0x408a7f
    int64_t v7; // 0x408a70
    int64_t v8; // 0x408a70
    int64_t v9; // 0x408a70
    if (v1 > a1) {
        while (true) {
          lab_0x408a91_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x408a88;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x408a97
                int64_t v13 = v10 + 1; // 0x408a9b
                int64_t v14 = v11 + 1; // 0x408a9f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x408aa6
                int64_t v16 = v14; // 0x408aa6
                if (v12 == 0) {
                    goto lab_0x408a88;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x408ab0
                    int64_t v18 = v16 + 1; // 0x408ab4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x408ab0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x408abd
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x408ac6
                        break;
                    }
                    goto lab_0x408a91_2;
                }
            }
        }
    }
  lab_0x408ac6:
    // 0x408ac6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x408acf
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x408ace
    return 0;
  lab_0x408a88:;
    int64_t v20 = v8 + 16; // 0x408a88
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x408ac6
        goto lab_0x408ac6;
    }
    goto lab_0x408a91_2;
    // 0x408a91
    goto lab_0x408a91_2;
}
// Address range: 0x408ae0 - 0x408c28
int64_t function_408ae0(uint64_t a1, int64_t a2) {
    // 0x408ae0
    int128_t v1; // 0x408ae0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x408af3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x408af7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x408afe
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x408b10
            while (*(int64_t *)v7 == 0) {
                // 0x408b10
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x408b4d
                    goto lab_0x408b4d;
                }
            }
        }
    }
  lab_0x408b4d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x408b5c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x408ae0
    int128_t v10; // 0x408ae0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x408bf3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x408bfc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x408b93;
        } else {
            goto lab_0x408c09;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x408b86
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x408c09;
        } else {
            goto lab_0x408b93;
        }
    }
  lab_0x408b93:
    // 0x408b93
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x408b97
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x408b97
    goto lab_0x408b9c;
  lab_0x408c09:
    // 0x408c09
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x408c1a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x408b9c;
  lab_0x408b9c:
    // 0x408b9c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x408c30 - 0x408c83
int64_t function_408c30(int64_t a1, int64_t result) {
    int64_t v1 = function_4086d0(a1, result); // 0x408c3a
    int64_t v2 = *(int64_t *)v1; // 0x408c3f
    if (v2 == 0) {
        // 0x408c6d
        return 0;
    }
    // 0x408c53
    if (v2 == result) {
        // 0x408c6d
        return result;
    }
    int64_t v3 = v1; // 0x408c64
    int64_t result2 = v2; // 0x408c62
    while ((char)v1 == 0) {
        // 0x408c64
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x408c6d
            break;
        }
        // 0x408c50
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x408c6d
            break;
        }
        result2 = v2;
    }
    // 0x408c6d
    return result2;
}
// Address range: 0x408c90 - 0x408cd8
int64_t function_408c90(uint64_t a1) {
    int64_t result = 0; // 0x408c95
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x408ca7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408c9e
    if (v1 <= a1) {
        // 0x408ca7
        return result;
    }
    int64_t v2 = a1; // 0x408ca5
    int64_t v3 = *(int64_t *)v2; // 0x408cb9
    result = v3;
    while (v3 == 0) {
        // 0x408cb0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x408ca7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x408ca7
    return result;
}
// Address range: 0x408ce0 - 0x408d4a
int64_t function_408ce0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4086d0(a1, a2); // 0x408cec
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x408d08
    while (*(int64_t *)v2 != a2) {
        // 0x408d00
        if (v3 == 0) {
            goto lab_0x408d16;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x408d40
        return *(int64_t *)v3;
    }
  lab_0x408d16:;
    int64_t v4 = v1 + 16; // 0x408d28
    int64_t result = 0; // 0x408d2f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x408d20
        result = v5;
        if (v5 != 0) {
            // break -> 0x408d33
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x408d33
    return result;
}
// Address range: 0x408d50 - 0x408db4
int64_t function_408d50(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408d56
    int64_t result = 0; // 0x408d5a
    if (*v1 <= a1) {
      lab_0x408d71:
        // 0x408d71
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x408d5f
    int64_t v4 = v2; // 0x408d65
    int64_t v5; // 0x408d50
    int64_t v6; // 0x408d50
    int64_t v7; // 0x408d98
    int64_t v8; // 0x408da1
    int64_t v9; // 0x408d81
    int64_t v10; // 0x408d85
    if (v3 != 0) {
        // 0x408d78
        if (v2 >= a3) {
            // break -> 0x408d71
            break;
        }
        // 0x408d7d
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
            // 0x408d95
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x408d90
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x408d95
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
    int64_t v12 = a1 + 16; // 0x408d67
    result = v11;
    while (*v1 > v12) {
        // 0x408d5f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x408d78
            result = v2;
            if (v2 >= a3) {
                // break -> 0x408d71
                break;
            }
            // 0x408d7d
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
                // 0x408d95
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x408d90
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x408d95
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x408d67
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x408d71
    return result;
}
// Address range: 0x408dc0 - 0x408e38
int64_t function_408dc0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408dd1
    int64_t result = 0; // 0x408dd5
    if (v1 <= a1) {
      lab_0x408df4:
        // 0x408df4
        return result;
    }
    int64_t v2 = a1; // 0x408dea
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x408de8
    int64_t v5 = v2; // 0x408de8
    int64_t v6 = v3; // 0x408de8
    int64_t v7; // 0x408dc0
    int64_t v8; // 0x408e18
    int64_t v9; // 0x408e1c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x408e18
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x408e28
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x408e18
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
        // 0x408de2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x408e18
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x408e28
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x408e18
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x408dea
        result2 = v4;
        v2 += 16;
    }
    // 0x408df4
    return result2;
}
// Address range: 0x408e40 - 0x408e71
int64_t function_408e40(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x408e47
    if (v1 == 0) {
        // 0x408e6d
        return 0;
    }
    int64_t result = 0; // 0x408e47
    v2++;
    char v3 = *(char *)v2; // 0x408e63
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x408e6d
    return result;
}
// Address range: 0x408e80 - 0x408ea0
int64_t function_408e80(int64_t a1) {
    // 0x408e80
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x408ea0 - 0x40902a
int64_t function_408ea0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x408ea0
    int128_t v1; // 0x408ea0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x408eda
    int64_t result = (int64_t)mem; // 0x408eda
    if (mem == NULL) {
        // 0x408f8a
        return result;
    }
    int64_t v3 = result + 40; // 0x408eeb
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x408ea0
    int128_t v6; // 0x408ea0
    if (a2 == 0) {
        // 0x408fa0
        *v4 = (int64_t)&g12;
        int64_t v7 = function_408820(v3); // 0x408fa8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x408fad
        if ((char)v7 == 0) {
            // 0x408f80
            free(mem);
            // 0x408f8a
            return 0;
        }
        // 0x408fb9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x409003;
        } else {
            goto lab_0x408fbe;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_408820(v3) == 0) {
            // 0x408f80
            free(mem);
            // 0x408f8a
            return 0;
        }
        // 0x408f05
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_408610(a1); // 0x408f13
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x408f80
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x408f80
                free(mem);
                // 0x408f8a
                return 0;
            }
            // 0x408f31
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x408f80
                free(mem);
                // 0x408f8a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x408f42
            int64_t v10 = (int64_t)mem2; // 0x408f42
            *mem = v10;
            if (mem2 == NULL) {
                // 0x408f80
                free(mem);
                // 0x408f8a
                return 0;
            }
            // 0x408f4f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x4086b0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x4086c0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x408f8a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x408ff8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x408fbe;
        } else {
            goto lab_0x409003;
        }
    }
  lab_0x409003:
    // 0x409003
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x409013
    int128_t v13 = v6; // 0x40901c
    int128_t v14 = __asm_addss(v12, v12); // 0x40901c
    goto lab_0x408fc7;
  lab_0x408fbe:
    // 0x408fbe
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x408fc7;
  lab_0x408fc7:
    // 0x408fc7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x408f80
    free(mem);
    // 0x408f8a
    return 0;
}
// Address range: 0x409030 - 0x4090d8
int64_t function_409030(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40903a
    uint64_t v2 = *v1; // 0x40903a
    int64_t result; // 0x409030
    if (v2 <= a1) {
      lab_0x4090c3:
        // 0x4090c3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x409048
    while (*v6 == 0) {
        // 0x409048
        v7 = v5 + 16;
        int64_t v8; // 0x409030
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x4090c3
            goto lab_0x4090c3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x409059
    int64_t v10 = *v9; // 0x409059
    int64_t v11 = *v3; // 0x40905e
    int64_t v12 = v11; // 0x409065
    int64_t v13 = v10; // 0x409065
    int64_t result2 = v11; // 0x409065
    int64_t * v14; // 0x40907e
    int64_t v15; // 0x40907e
    int64_t v16; // 0x40907a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x409075
            v16 = *v3;
        }
        // 0x40907e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x409070
            v16 = 0;
            if (v12 != 0) {
                // 0x409075
                v16 = *v3;
            }
            // 0x40907e
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
    // 0x40909d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x4090b0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x4090bd
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40904c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x409048
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x4090c3
                goto lab_0x4090c3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x409059
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x409075
                v16 = *v3;
            }
            // 0x40907e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x409070
                v16 = 0;
                if (v12 != 0) {
                    // 0x409075
                    v16 = *v3;
                }
                // 0x40907e
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
        // 0x40909d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x4090c3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x4090e0 - 0x4091b6
int64_t function_4090e0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4090ef
    uint64_t v2 = *v1; // 0x4090ef
    int64_t v3 = a1; // 0x4090f3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x409143;
    } else {
        // 0x4090f5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x409143;
        } else {
            // 0x4090fc
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x409111
                int64_t v6; // 0x409108
                while (v5 == 0) {
                    // 0x409108
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x409143
                        goto lab_0x409143;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x409128
                int64_t v8 = v7; // 0x40912f
                int64_t v9 = v5; // 0x40912f
                int64_t v10; // 0x4090e0
                int64_t v11; // 0x409128
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x409120
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x409123
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x409136
                v3 = v9;
                while (v2 > v12) {
                    // 0x409111
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x409108
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x409143
                            goto lab_0x409143;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x409123
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x409120
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x409123
                        v9 = *(int64_t *)v10;
                    }
                    // 0x409131
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x409143;
            } else {
                goto lab_0x40917c;
            }
        }
    }
  lab_0x409143:
    // 0x409143
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x409150
        int64_t v14 = v13; // 0x409157
        int64_t v15 = v2; // 0x409157
        int64_t v16; // 0x409160
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x409160
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x409171
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x409171
        int64_t v18 = v15; // 0x40917a
        int64_t v19 = v17; // 0x40917a
        while (v15 > v17) {
            // 0x409150
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x409160
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x409171
                v15 = *v1;
            }
            // 0x409171
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40917c;
  lab_0x40917c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40917c
    if (v20 == 0) {
        // 0x4091a1
        free(NULL);
        free((int64_t *)a1);
        return &g54;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x409190
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40919f
    while (v21 != 0) {
        // 0x409190
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x4091a1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g54;
}
// Address range: 0x4091c0 - 0x4093ba
int64_t function_4091c0(int64_t a1, uint64_t a2) {
    // 0x4091c0
    int128_t v1; // 0x4091c0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x4091cb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x4091c0
        if (a2 < 0) {
            // 0x409340
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x409350
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x4091e0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x4091e9
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x409332
        return 0;
    }
    uint64_t nmemb = function_408610(a2); // 0x409223
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x409332
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40925b
    if (*v6 == nmemb) {
        // 0x409332
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40926d
    int64_t v7 = (int64_t)mem; // 0x40926d
    int64_t v8 = v7; // bp-104, 0x409272
    if (mem == NULL) {
        // 0x409332
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x4092ca
    int64_t v10 = *v9; // 0x4092ca
    int64_t v11 = function_4088a0(&v8, a1, 0); // 0x4092d3
    int64_t result = v11 & 0xffffffff; // 0x4092d8
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x409294
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x4092f6
        function_4088a0(v13, v12, 1);
        function_4088a0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x409380
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x409332
    return result;
}
// Address range: 0x4093c0 - 0x409634
int64_t function_4093c0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x4093c0
    int128_t v1; // 0x4093c0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x4093c0
    int64_t v5 = function_408700(a1, a2, &v4, 0); // 0x4093e1
    if (v5 != 0) {
        // 0x4093ee
        if (a3 != NULL) {
            // 0x4093f5
            *a3 = v5;
        }
        // 0x4093f9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x409408
    uint64_t v7 = *v6; // 0x409408
    int64_t v8; // 0x4093c0
    int64_t v9; // 0x4093c0
    int64_t v10; // 0x4093c0
    int128_t v11; // 0x4093c0
    int128_t v12; // 0x4093c0
    int64_t v13; // 0x4093c0
    if (v7 < 0) {
        // 0x409490
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x4094a0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x4094a4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x4094a9
        int128_t v17 = __asm_addss(v15, v15); // 0x4094ad
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40942b;
        } else {
            goto lab_0x4094ba;
        }
    } else {
        // 0x409411
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x409415
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x409419
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40941e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x4094ba;
        } else {
            goto lab_0x40942b;
        }
    }
  lab_0x40942b:
    // 0x40942b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x409434
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40943c
    int128_t v23 = v11; // 0x40943c
    if (v13 == 0) {
        goto lab_0x409442;
    } else {
        goto lab_0x4094e1;
    }
  lab_0x4094ba:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x4094c7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x4094ca
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x4094d3
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x409442;
    } else {
        goto lab_0x4094e1;
    }
  lab_0x409442:;
    int64_t * v28 = (int64_t *)v4; // 0x409447
    if (*v28 == 0) {
        // 0x409558
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x409561
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x409452
    int64_t v31 = *v30; // 0x409452
    int64_t * v32; // 0x4093c0
    int64_t v33; // 0x4093c0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40957d
        if (mem == NULL) {
            // 0x4093f9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40957d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x409467
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40947d
    *v37 = *v37 + 1;
    return 1;
  lab_0x4094e1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x4094e1
    function_408820(v40);
    int64_t v41 = *(int64_t *)v40; // 0x4094ea
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x4094ee
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x4094f2
    int128_t v44; // 0x4093c0
    if (v42 < 0) {
        // 0x4095b0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x4095c0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x409500
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x409509
    int128_t v47; // 0x4093c0
    int64_t v48; // 0x4093c0
    if (v46 < 0) {
        // 0x409590
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40959d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x4095a0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x409512
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x409516
        v48 = v46;
        v47 = v51;
    }
    // 0x40951b
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40952b
        int128_t v53 = v52; // 0x409534
        if (*(char *)(v41 + 16) == 0) {
            // 0x4095d0
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x40953a
        __asm_comiss(v53, 0x5f800000);
        // 0x4093f9
        return 0xffffffff;
    }
    goto lab_0x409442;
}
// Address range: 0x409640 - 0x40967b
int64_t function_409640(int64_t a1, int64_t a2) {
    // 0x409640
    int64_t v1; // bp-16, 0x409640
    int64_t v2; // 0x409640
    int32_t v3 = function_4093c0(a1, a2, &v1, v2); // 0x409652
    if (v3 == -1) {
        // 0x409660
        return 0;
    }
    // 0x409657
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x409680 - 0x409857
int64_t function_409680(int64_t a1) {
    // 0x409680
    int128_t v1; // 0x409680
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x409680
    int64_t v5; // 0x409680
    int64_t result = function_408700(a1, v5, &v4, 1); // 0x409695
    if (result == 0) {
        // 0x4096b2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x4096a7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x4096b2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x4096c0
    uint64_t v8 = *v7 - 1; // 0x4096c4
    *v7 = v8;
    int64_t v9; // 0x409680
    int64_t v10; // 0x409680
    int64_t v11; // 0x409680
    int128_t v12; // 0x409680
    int128_t v13; // 0x409680
    int64_t v14; // 0x409680
    if (v8 < 0) {
        // 0x4097b0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x4097c0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x4097c4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x4097c9
        int128_t v18 = __asm_addss(v16, v16); // 0x4097cd
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x4096ec;
        } else {
            goto lab_0x4097da;
        }
    } else {
        // 0x4096d2
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x4096d6
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x4096da
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x4096df
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x4097da;
        } else {
            goto lab_0x4096ec;
        }
    }
  lab_0x4096ec:
    // 0x4096ec
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x4096f0
    int64_t v23 = v14; // 0x4096f0
    int128_t v24 = v12; // 0x4096f0
    int64_t v25 = v10; // 0x4096f0
    int128_t v26 = v22; // 0x4096f0
    goto lab_0x4096f5;
  lab_0x4097da:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x4097e7
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x4097ea
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x4096f5;
  lab_0x4096f5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x4096f5
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x4096b2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x4096fe
    function_408820(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x409707
    int64_t v31 = *(int64_t *)v29; // 0x40970b
    int128_t v32; // 0x409680
    if (v30 < 0) {
        // 0x409820
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x409830
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x409718
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x409721
    int128_t v35; // 0x409680
    int64_t v36; // 0x409680
    if (v34 < 0) {
        // 0x409800
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40980d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x409810
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40972e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x409732
        v36 = v34;
        v35 = v39;
    }
    // 0x409737
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x4096b2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x409748
    int128_t v41 = v40; // 0x409751
    if (*(char *)(v31 + 16) == 0) {
        // 0x409753
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x409758
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x409848
    if ((char)function_4091c0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x4096b2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40977a
    if (*v43 != 0) {
        int64_t v44; // 0x409680
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x409788
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x409799
    *v43 = 0;
    // 0x4096b2
    return result;
}
// Address range: 0x409860 - 0x409dc2
int64_t function_409860(void) {
    char * v1 = nl_langinfo(14); // 0x409876
    char * v2 = g46; // 0x40987b
    char * v3; // 0x409860
    int64_t v4; // 0x409860
    int64_t v5; // 0x409860
    int64_t v6; // 0x409860
    int64_t v7; // 0x409860
    int32_t size; // 0x409860
    int32_t size2; // 0x409860
    int32_t len; // 0x409932
    int64_t v8; // 0x409932
    char * env_val; // 0x40991d
    if (v2 == NULL) {
        // 0x409918
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409985;
        } else {
            // 0x40992a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409985;
            } else {
                // 0x40992f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40991d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409db5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409985;
                    } else {
                        // 0x409d29
                        size2 = len + 14;
                        goto lab_0x40994b;
                    }
                } else {
                    goto lab_0x40994b;
                }
            }
        }
    } else {
        // 0x409860
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40989a;
    }
  lab_0x409bcc:;
    // 0x409bcc
    struct _IO_FILE * stream; // 0x409a0b
    int32_t v10 = __uflow(stream); // 0x409bcf
    int64_t v11; // 0x409860
    int64_t v12 = v11; // 0x409bd9
    int64_t v13; // 0x409860
    int64_t v14 = v13; // 0x409bd9
    int32_t v15 = v10; // 0x409bd9
    int64_t v16; // 0x409860
    int64_t v17 = v16; // 0x409bd9
    int64_t v18 = v11; // 0x409bd9
    int64_t v19 = v13; // 0x409bd9
    int64_t v20 = v16; // 0x409bd9
    if (v10 == -1) {
        // break -> 0x409bdf
        goto lab_0x409bdf;
    }
    goto lab_0x409a59;
  lab_0x409a4e:;
    // 0x409a4e
    int64_t v90; // 0x409860
    int64_t * v32; // 0x409a40
    *v32 = v90 + 1;
    int64_t v89; // 0x409860
    v12 = v89;
    int64_t v91; // 0x409860
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x409860
    v17 = v92;
    goto lab_0x409a59;
  lab_0x409a59:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x409860
    int32_t v25; // bp-120, 0x409860
    int32_t v26; // bp-184, 0x409860
    int64_t v27; // 0x409a0b
    int64_t v28; // 0x409a28
    int64_t v29; // 0x409a2d
    int64_t * v30; // 0x409a44
    switch (c) {
        case 32: {
            goto lab_0x409a40;
        }
        case 10: {
            goto lab_0x409a40;
        }
        case 9: {
            goto lab_0x409a40;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409c31
            int32_t v33; // 0x409860
            char v34; // 0x409860
            int32_t v35; // 0x409c3e
            if (v31 < *v30) {
                // 0x409c10
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x409c3b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409c31
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409c10
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x409c3b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409c20
                v36 = v33;
            }
            // 0x409d0f
            if (v36 == -1) {
                // break -> 0x409bdf
                break;
            }
            goto lab_0x409a40;
        }
        default: {
            // 0x409a6f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x409bdf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409a98
            int64_t v39 = v37 + 4; // 0x409a9a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409aa6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409aa8
            while (v41 == 0) {
                // 0x409a98
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409ac6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409ad2
            int64_t v45 = v43 + 4; // 0x409ad4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409ae0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409ae2
            while (v47 == 0) {
                // 0x409ad2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x409acf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409af8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409b08
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x409b0c
            int64_t v52 = v51 + v48; // 0x409b15
            int64_t * mem; // 0x409860
            int64_t v53; // 0x409860
            int64_t v54; // 0x409860
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x409c4b
                int64_t v56 = v55 + 3; // 0x409c57
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409b31
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409b40
            if (mem == NULL) {
                // 0x409d6c
                free((int64_t *)v21);
                function_407390(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x4099e4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409b58
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409b62
            uint32_t v62 = (int32_t)v59; // 0x409b65
            int64_t v63; // 0x409860
            if (v62 >= 8) {
                // 0x409c74
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x409c8e
                int64_t v66 = v61 - v65; // 0x409c92
                uint32_t v67 = (int32_t)(v66 + v59); // 0x409c9d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x409cae
                    int64_t v70 = v69 & 0xffffffff; // 0x409cae
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x409cab
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x409d3f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409b77
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x409b7b
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
            int64_t v73 = v51 + 1; // 0x409b8b
            int64_t v74 = v60 - 1; // 0x409b8f
            uint32_t v75 = (int32_t)v73; // 0x409b94
            int64_t v76; // 0x409860
            if (v75 >= 8) {
                // 0x409cc2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x409ccc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x409cdc
                int64_t v80 = v74 - v79; // 0x409ce0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x409ceb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x409cfb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409cf9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409d56
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x409d5e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409ba6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x409baa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409da3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x409bbe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x409a4e;
            } else {
                goto lab_0x409bcc;
            }
        }
    }
  lab_0x409a40:;
    int64_t v93 = v23; // 0x409860
    int64_t v94 = v22; // 0x409860
    int64_t v95 = v21; // 0x409860
    goto lab_0x409a40_2;
  lab_0x409985:;
    int64_t * mem3 = malloc(size); // 0x409985
    int64_t v97 = (int64_t)&g10; // 0x409990
    int64_t v98; // 0x409860
    int64_t path; // 0x409860
    if (mem3 == NULL) {
        goto lab_0x409962;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409985
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4099a6;
    }
  lab_0x40989a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x40988d
    char v100 = *v3; // 0x40989a
    int64_t v101; // 0x409860
    if (v100 == 0) {
        // 0x4098f4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x409860
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x409860
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4098e0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4098e7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4098b0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4098bd
        char v107 = *(char *)v106; // 0x4098c2
        v102 = v107;
        if (v107 == 0) {
            // 0x4098f4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4098cb
    v104 = v103 + 1;
  lab_0x4098e7:
    // 0x4098f4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409962:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40989a;
  lab_0x4099a6:;
    int64_t v109 = v98 + path; // 0x4099a6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4099d2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x409a01
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409d32
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x409a25
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409a40_2:;
                uint64_t v96 = *v32; // 0x409a40
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x409bcc;
                } else {
                    goto lab_0x409a4e;
                }
            }
          lab_0x409bdf:
            // 0x409bdf
            function_407390(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x409bfe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4099e4;
  lab_0x40994b:;
    int64_t * mem4 = malloc(size2); // 0x40994b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x4099f1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4099a6;
    } else {
        goto lab_0x409962;
    }
  lab_0x4099e4:
    // 0x4099e4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409962;
}
// Address range: 0x409dd0 - 0x409dde
int64_t function_409dd0(int64_t a1, int64_t a2) {
    // 0x409dd0
    int64_t v1; // 0x409dd0
    return function_409de0(a1, 0, 3, v1);
}
// Address range: 0x409de0 - 0x409f15
int64_t function_409de0(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x409ec0
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x409e1c
    int64_t v2; // 0x409de0
    if (g47 < 0) {
        int64_t v3 = function_409de0(fd, 0, v1, a4); // 0x409e64
        int64_t v4 = v3 & 0xffffffff; // 0x409e69
        if ((int32_t)v3 < 0) {
            // 0x409e50
            return v4 & 0xffffffff;
        }
        // 0x409e6f
        v2 = v4;
        if (g47 != -1) {
            // 0x409e50
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x409e37
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x409e46
            g47 = 1;
            // 0x409e50
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_409de0(fd & 0xffffffff, 0, v1, a4); // 0x409ef7
        int64_t v7 = v6 & 0xffffffff; // 0x409efc
        if ((int32_t)v6 < 0) {
            // 0x409e50
            return v7 & 0xffffffff;
        }
        // 0x409f06
        g47 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x409e7f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x409e8a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x409e50
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x409ea2
    close(fd2);
    // 0x409e50
    return 0xffffffff;
}
// Address range: 0x409f20 - 0x409f7d
int64_t function_409f20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409f20
    return function_4018a0();
}
// Address range: 0x409f80 - 0x409f81
int64_t function_409f80(void) {
    // 0x409f80
    int64_t result; // 0x409f80
    return result;
}
// Address range: 0x409f90 - 0x409fa8
int64_t function_409f90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409f90
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x409fa8 - 0x409fc8
int64_t function_409fa8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x409fb2
    while (*(int64_t *)v1 != -1) {
        // 0x409fb3
        v1 -= 8;
    }
    // 0x409fc4
    return result;
}
