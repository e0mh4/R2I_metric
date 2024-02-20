// Address range: 0x401770 - 0x401775
int64_t function_401770(void) {
    // 0x401770
    abort();
    // UNREACHABLE
}
// Address range: 0x401775 - 0x40177a
int64_t function_401775(void) {
    // 0x401775
    abort();
    // UNREACHABLE
}
// Address range: 0x40177a - 0x40177f
int64_t function_40177a(void) {
    // 0x40177a
    abort();
    // UNREACHABLE
}
// Address range: 0x40177f - 0x401784
int64_t function_40177f(void) {
    // 0x40177f
    abort();
    // UNREACHABLE
}
// Address range: 0x401784 - 0x401789
int64_t function_401784(void) {
    // 0x401784
    abort();
    // UNREACHABLE
}
// Address range: 0x401789 - 0x40178e
int64_t function_401789(void) {
    // 0x401789
    abort();
    // UNREACHABLE
}
// Address range: 0x40178e - 0x401793
int64_t function_40178e(void) {
    // 0x40178e
    abort();
    // UNREACHABLE
}
// Address range: 0x4017a0 - 0x40250d
int64_t function_4017a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4017a0
    function_403130(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_408ed0(0x403090, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g29 = 0;
    g28 = getenv("POSIXLY_CORRECT") != NULL;
    uint32_t v1 = (int32_t)a1; // 0x40180e
    char * format; // 0x401828
    if (v1 == 2) {
        char * str = (char *)*(int64_t *)(a2 + 8); // 0x401df2
        if (strcmp(str, "--help") == 0) {
            // 0x402506
            function_402c40(0);
            // UNREACHABLE
        }
        // 0x401dff
        if (strcmp(str, "--version") == 0) {
            // 0x4023d5
            function_405590((int64_t)g23, "printf", "GNU coreutils", (int64_t)g15, "David MacKenzie", 0);
            // 0x401981
            return 0;
        }
        // 0x401e17
        if (strcmp(str, "--") == 0) {
            // 0x40181c
            format = dcgettext(NULL, "missing operand", 5);
            error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
            function_402c40(1);
            // UNREACHABLE
        }
    } else {
        if (v1 <= 1) {
            // 0x40181c
            format = dcgettext(NULL, "missing operand", 5);
            error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
            function_402c40(1);
            // UNREACHABLE
        }
        // 0x401845
        strcmp((char *)*(int64_t *)(a2 + 8), "--");
    }
    // 0x40185e
    int64_t v2; // bp-440, 0x4017a0
    int64_t v3 = &v2; // 0x4017af
    int64_t * v4 = (int64_t *)(v3 + 32); // 0x401880
    int64_t * v5 = (int64_t *)(v3 + 8);
    int32_t * v6 = (int32_t *)(v3 + 20);
    int64_t v7 = v3 + 40;
    int32_t * v8 = (int32_t *)v7;
    int32_t * v9 = (int32_t *)(v3 + 96);
    int64_t v10 = v3 + 128;
    int64_t v11 = v3 + 24;
    char * v12 = (char *)v11;
    char * v13 = (char *)(v3 + 216);
    char * v14 = (char *)(v3 + 248);
    char * v15 = (char *)(v3 + 245);
    char * v16 = (char *)(v3 + 243);
    char * v17 = (char *)(v3 + 239);
    char * v18 = (char *)(v3 + 233);
    char * v19 = (char *)(v3 + 197);
    char * v20 = (char *)(v3 + 227);
    int64_t v21 = v3 + 228;
    char * v22 = (char *)(v3 + 193);
    char * v23 = (char *)(v3 + 225);
    int64_t v24 = v3 + 80;
    char * v25 = (char *)v24;
    int64_t * v26 = (int64_t *)v24;
    int64_t * v27 = (int64_t *)v11;
    char * v28 = (char *)(v3 + 103);
    int64_t * v29 = (int64_t *)v7;
    int64_t * v30 = (int64_t *)(v3 + 88);
    int64_t v31 = v3 + 48;
    int64_t * v32 = (int64_t *)v31;
    int64_t * v33 = (int64_t *)(v3 + 104);
    int64_t v34 = v3 + 64;
    int64_t * v35 = (int64_t *)v34;
    int64_t v36 = v3 + 120;
    int64_t * v37 = (int64_t *)v36;
    float80_t * v38 = (float80_t *)v34;
    float80_t * v39 = (float80_t *)v31;
    int64_t * v40 = (int64_t *)(v3 - 8);
    int64_t v41 = v3 - 16;
    int64_t * v42 = (int64_t *)v41;
    float80_t * v43 = (float80_t *)v41;
    int64_t v44 = a4; // 0x401877
    int64_t v45 = a3; // 0x401877
    int64_t v46 = a5; // 0x401877
    int64_t v47 = a6; // 0x401877
    int32_t v48; // 0x4017a0
    int3_t v49; // 0x4017a0
    int3_t v50; // 0x4017a0
    int3_t v51; // 0x4017a0
    int3_t v52; // 0x4017a0
    int3_t v53; // 0x4017a0
    int64_t v54; // 0x4017a0
    int64_t v55; // 0x4017a0
    int64_t v56; // 0x4017a0
    int64_t v57; // 0x4017a0
    int64_t v58; // 0x4017a0
    int64_t v59; // 0x4017a0
    int64_t v60; // 0x4017a0
    int64_t v61; // 0x4017a0
    int64_t v62; // 0x4017a0
    int64_t v63; // 0x4017a0
    int64_t v64; // 0x4017a0
    int64_t v65; // 0x4017a0
    int64_t v66; // 0x4017a0
    int64_t v67; // 0x4017a0
    int64_t v68; // 0x4017a0
    int64_t v69; // 0x4017a0
    int64_t v70; // 0x4017a0
    int64_t v71; // 0x4017a0
    int64_t v72; // 0x4017a0
    int64_t v73; // 0x4017a0
    int64_t v74; // 0x4017a0
    int64_t v75; // 0x4017a0
    int64_t v76; // 0x4017a0
    int64_t v77; // 0x4017a0
    int64_t v78; // 0x4017a0
    int64_t v79; // 0x4017a0
    int64_t v80; // 0x4017a0
    int64_t v81; // 0x4017a0
    int64_t v82; // 0x4017a0
    int64_t v83; // 0x4017a0
    int64_t v84; // 0x4017a0
    int64_t v85; // 0x4017a0
    int64_t v86; // 0x4017a0
    int64_t v87; // 0x4017a0
    int64_t v88; // 0x4017a0
    int64_t v89; // 0x4017a0
    int64_t v90; // 0x4017a0
    int64_t v91; // 0x4017a0
    int64_t v92; // 0x4017a0
    int64_t v93; // 0x4017a0
    int64_t v94; // 0x4017a0
    int64_t v95; // 0x4017a0
    int64_t v96; // 0x4017a0
    int64_t v97; // 0x4017a0
    int64_t v98; // 0x4017a0
    int64_t v99; // 0x4017a0
    int64_t v100; // 0x4017a0
    int64_t v101; // 0x4017a0
    int64_t v102; // 0x4017a0
    int64_t v103; // 0x4017a0
    int64_t v104; // 0x4017a0
    int64_t v105; // 0x4017a0
    int64_t v106; // 0x4017a0
    int64_t v107; // 0x4017a0
    int64_t v108; // 0x4017a0
    int64_t v109; // 0x4017a0
    int64_t v110; // 0x4017a0
    int64_t v111; // 0x4017a0
    int64_t v112; // 0x4017a0
    int64_t v113; // 0x4017a0
    int64_t v114; // 0x4017a0
    int64_t v115; // 0x4017a0
    int64_t v116; // 0x4017a0
    int64_t v117; // 0x4017a0
    int64_t v118; // 0x4017a0
    int64_t v119; // 0x4017a0
    int64_t v120; // 0x4017a0
    int64_t v121; // 0x4017a0
    int64_t v122; // 0x4017a0
    int64_t v123; // 0x4017a0
    int64_t v124; // 0x4017a0
    int64_t v125; // 0x4017a0
    int64_t v126; // 0x4017a0
    int64_t v127; // 0x4017a0
    int64_t v128; // 0x4017a0
    int64_t v129; // 0x4017a0
    int64_t v130; // 0x4017a0
    int64_t v131; // 0x4017a0
    int64_t v132; // 0x4017a0
    int64_t v133; // 0x4017a0
    int64_t v134; // 0x4017a0
    int64_t v135; // 0x4017a0
    int64_t v136; // 0x4017a0
    int64_t v137; // 0x4017a0
    int64_t v138; // 0x4017a0
    char v139; // 0x4017a0
    int64_t v140; // 0x4017a0
    char v141; // 0x4017a0
    int64_t v142; // 0x4017a0
    int64_t v143; // 0x4017a0
    int64_t v144; // 0x4017a0
    int64_t v145; // 0x4017a0
    char v146; // 0x4017a0
    int64_t v147; // 0x4019a0
    int64_t v148; // 0x4019ab
    while (true) {
        char v149 = *(char *)*v4; // 0x401885
        if (v149 == 0) {
            // break -> 0x401e31
            break;
        }
        // 0x401891
        *v8 = 0;
        *v9 = 0;
        int3_t v150; // 0x4017a0
        v51 = v150;
        v120 = v44;
        v134 = v45;
        v141 = v149;
        v90 = v46;
        v99 = v47;
        v65 = *v4;
        v70 = (int64_t)*v6;
        v76 = *v5;
        while (true) {
          lab_0x4018ec:
            // 0x4018ec
            v77 = v76;
            v71 = v70;
            v66 = v65;
            v100 = v99;
            v91 = v90;
            unsigned char v151 = v141;
            v135 = v134;
            v121 = v120;
            v52 = v51;
            if (v151 == 37) {
                // 0x4019a0
                v147 = v66 + 1;
                unsigned char v152 = *(char *)v147; // 0x4019a0
                v148 = v66 + 2;
                switch (v152) {
                    case 37: {
                        int64_t v153 = (int64_t)g23; // 0x401a90
                        int64_t * v154 = (int64_t *)(v153 + 40); // 0x401a97
                        uint64_t v155 = *v154; // 0x401a97
                        if (v155 >= *(int64_t *)(v153 + 48)) {
                            // 0x401db0
                            __overflow(g23, 37);
                            v49 = v52;
                            v117 = v121;
                            v131 = v135;
                            v111 = v147;
                            v87 = v91;
                            v97 = v100;
                            v67 = v71;
                            v73 = v77;
                            v78 = v148;
                        } else {
                            int64_t v156 = v155 + 1; // 0x401aa5
                            *v154 = v156;
                            *(char *)v155 = 37;
                            v49 = v52;
                            v117 = v121;
                            v131 = v156;
                            v111 = v147;
                            v87 = v91;
                            v97 = v100;
                            v67 = v71;
                            v73 = v77;
                            v78 = v148;
                        }
                        goto lab_0x4018e0;
                    }
                    case 98: {
                        if ((int32_t)v71 == 0) {
                            goto lab_0x4019cf;
                        } else {
                            // 0x401a2d
                            if (*(char *)*(int64_t *)v77 != 0) {
                                char v157; // 0x4017a0
                                unsigned char v158 = v157;
                                int64_t v159; // 0x4017a0
                                int64_t v160 = v159;
                                int64_t v161; // 0x4017a0
                                int64_t v162 = v161;
                                int64_t v163; // 0x4017a0
                                int64_t v164; // 0x4017a0
                                struct _IO_FILE * v165; // 0x401a40
                                int64_t v166; // 0x401a40
                                int64_t * v167; // 0x401a47
                                uint64_t v168; // 0x401a47
                                uint64_t v169; // 0x401a4b
                                int64_t v170; // 0x401a55
                                if (v158 != 92) {
                                    // 0x401a40
                                    v165 = g23;
                                    v166 = (int64_t)v165;
                                    v167 = (int64_t *)(v166 + 40);
                                    v168 = *v167;
                                    v169 = *(int64_t *)(v166 + 48);
                                    if (v168 >= v169) {
                                        // 0x401da0
                                        __overflow(v165, (int32_t)v158);
                                        v163 = v160;
                                        v164 = v162;
                                    } else {
                                        // 0x401a55
                                        v170 = v168 + 1;
                                        *v167 = v170;
                                        *(char *)v168 = v158;
                                        v163 = v160;
                                        v164 = v170;
                                    }
                                } else {
                                    // 0x401a76
                                    v163 = (0x100000000 * function_4025f0(v160, 1, v162, v121, v91, v100) >> 32) + v160;
                                    v164 = v162;
                                }
                                int64_t v171 = v164;
                                int64_t v172 = v163;
                                int64_t v173 = v172 + 1; // 0x401a63
                                char v174 = *(char *)v173; // 0x401a63
                                v161 = v171;
                                v159 = v173;
                                v157 = v174;
                                while (v174 != 0) {
                                    // 0x401a70
                                    v158 = v157;
                                    v160 = v159;
                                    v162 = v161;
                                    if (v158 != 92) {
                                        // 0x401a40
                                        v165 = g23;
                                        v166 = (int64_t)v165;
                                        v167 = (int64_t *)(v166 + 40);
                                        v168 = *v167;
                                        v169 = *(int64_t *)(v166 + 48);
                                        if (v168 >= v169) {
                                            // 0x401da0
                                            __overflow(v165, (int32_t)v158);
                                            v163 = v160;
                                            v164 = v162;
                                        } else {
                                            // 0x401a55
                                            v170 = v168 + 1;
                                            *v167 = v170;
                                            *(char *)v168 = v158;
                                            v163 = v160;
                                            v164 = v170;
                                        }
                                    } else {
                                        // 0x401a76
                                        v163 = (0x100000000 * function_4025f0(v160, 1, v162, v121, v91, v100) >> 32) + v160;
                                        v164 = v162;
                                    }
                                    // 0x401a63
                                    v171 = v164;
                                    v172 = v163;
                                    v173 = v172 + 1;
                                    v174 = *(char *)v173;
                                    v161 = v171;
                                    v159 = v173;
                                    v157 = v174;
                                }
                            }
                            goto lab_0x401a17;
                        }
                    }
                    default: {
                        if (v152 != 113) {
                            int64_t v175 = v152; // 0x4019a0
                            *v12 = 0;
                            __asm_rep_stosq_memset((char *)v10, 0, 32);
                            *v13 = 1;
                            *(int16_t *)(v3 + 198) = 257;
                            *v14 = 1;
                            *v15 = 1;
                            *v16 = 1;
                            *v17 = 1;
                            *v18 = 1;
                            *v19 = 1;
                            *v20 = 1;
                            *(int32_t *)v21 = 0x1010101;
                            *v22 = 1;
                            *v23 = 1;
                            v106 = v175 + 0xffffffe0;
                            v122 = 1;
                            v136 = 0;
                            v113 = v147;
                            v108 = v175;
                            v142 = 1;
                            v126 = 0;
                            v92 = 1;
                            v101 = 0;
                            v54 = 1;
                            v60 = 0;
                            v81 = 0;
                            while (true) {
                              lab_0x401b68:
                                // 0x401b68
                                v82 = v81;
                                v61 = v60;
                                v55 = v54;
                                v102 = v101;
                                v93 = v92;
                                v114 = v113;
                                v123 = v122;
                                g42 = v106 % 256;
                                v56 = v55;
                                v62 = v61;
                                v83 = v82;
                                v137 = v136;
                                v143 = v142;
                                v127 = v126;
                                v94 = v93;
                                v103 = v102;
                                v57 = v55;
                                v63 = v61;
                                v84 = v82;
                                v124 = v123;
                                v138 = v136;
                                v115 = v114;
                                v109 = v108;
                                v144 = v142;
                                v128 = v126;
                                v95 = v93;
                                v104 = v102;
                                v58 = v55;
                                v64 = v61;
                                v85 = v82;
                                uint64_t v176; // 0x4017a0
                                switch ((char)v176) {
                                    case 0: {
                                        goto lab_0x401b98;
                                    }
                                    case 3: {
                                        // 0x401b78
                                        *v12 = 1;
                                        v56 = 0;
                                        v62 = 1;
                                        v83 = 1;
                                        goto lab_0x401b8c;
                                    }
                                    case 7: {
                                        goto lab_0x401d80;
                                    }
                                    case 11: {
                                        goto lab_0x401b98;
                                    }
                                    case 13: {
                                        goto lab_0x401b98;
                                    }
                                    case 16: {
                                        goto lab_0x401b8c;
                                    }
                                    case 41: {
                                        goto lab_0x401d80;
                                    }
                                    default: {
                                        goto lab_0x401baa_2;
                                    }
                                }
                            }
                          lab_0x401baa_2:
                            // 0x401baa
                            v86 = v85;
                            v59 = v58;
                            v105 = v104;
                            v96 = v95;
                            v129 = v128;
                            v145 = v144;
                            v110 = v109;
                            v116 = v115;
                            int64_t v177 = v138;
                            v125 = v124;
                            v118 = v125;
                            v132 = v177;
                            v112 = v116;
                            v107 = v110;
                            v140 = v145;
                            v130 = v129;
                            v88 = v96;
                            v68 = v71;
                            v74 = v77;
                            v80 = v86;
                            if ((char)v105 == 0) {
                                goto lab_0x4024f9;
                            } else {
                                // 0x401bb3
                                v146 = v96;
                                *v13 = v146;
                                *v14 = v146;
                                if ((char)v177 != 0) {
                                    // 0x401bcb
                                    *v16 = (char)v145;
                                }
                                goto lab_0x401dc0;
                            }
                        } else {
                            if ((int32_t)v71 != 0) {
                                // 0x4019f8
                                fputs_unlocked((char *)function_404b00(3, *(int64_t *)v77), g23);
                                goto lab_0x401a17;
                            } else {
                                goto lab_0x4019cf;
                            }
                        }
                    }
                }
            } else {
                if (v151 != 92) {
                    int64_t v178 = (int64_t)g23; // 0x4018b8
                    int64_t v179 = v66 + 1; // 0x4018bf
                    int64_t * v180 = (int64_t *)(v178 + 40); // 0x4018c4
                    uint64_t v181 = *v180; // 0x4018c4
                    if (v181 >= *(int64_t *)(v178 + 48)) {
                        // 0x4019e8
                        __overflow(g23, (int32_t)v151);
                        v49 = v52;
                        v117 = v121;
                        v131 = v135;
                        v111 = v66;
                        v87 = v91;
                        v97 = v100;
                        v67 = v71;
                        v73 = v77;
                        v78 = v179;
                    } else {
                        int64_t v182 = v181 + 1; // 0x4018d2
                        *v180 = v182;
                        *(char *)v181 = v151;
                        v49 = v52;
                        v117 = v121;
                        v131 = v182;
                        v111 = v66;
                        v87 = v91;
                        v97 = v100;
                        v67 = v71;
                        v73 = v77;
                        v78 = v179;
                    }
                    goto lab_0x4018e0;
                } else {
                    int64_t v183 = v66 + 1 + (0x100000000 * function_4025f0(v66, 0, v135, v121, v91, v100) >> 32); // 0x40190c
                    char v184 = *(char *)v183; // 0x40190c
                    v50 = v52;
                    v119 = v121;
                    v133 = v135;
                    v139 = v184;
                    v89 = v91;
                    v98 = v100;
                    v69 = v71;
                    v75 = v77;
                    v79 = v183;
                    v53 = v52;
                    v46 = v91;
                    v47 = v100;
                    v72 = v71;
                    if (v184 == 0) {
                        // break -> 0x401919
                        break;
                    }
                    goto lab_0x4018e9;
                }
            }
        }
      lab_0x401919:;
        int32_t v185 = v72;
        *v6 = v185;
        int32_t v186 = *v6 - v185; // 0x401927
        v45 = v186;
        v44 = 8 * v45 + *v5;
        *v5 = v44;
        v48 = v185;
        if (v186 < 1) {
            goto lab_0x401943_2;
        }
        // 0x40193a
        v150 = v53;
        v48 = v185;
        if (v185 >= 0 != v185 != 0) {
            goto lab_0x401943_2;
        }
    }
    // 0x401e31
    v48 = *v6;
  lab_0x401943_2:
    // 0x401943
    if (v48 != 0) {
        // 0x401948
        function_404d50(*(int64_t *)*v5);
        error(0, (int32_t)"warning: ignoring excess arguments, starting with %s" ^ (int32_t)"warning: ignoring excess arguments, starting with %s", dcgettext(NULL, "warning: ignoring excess arguments, starting with %s", 5));
    }
  lab_0x40197a:
    // 0x401981
    return g29;
  lab_0x401b98:;
    int64_t v187 = v114 + 1; // 0x401b98
    int64_t v188 = (int64_t)*(char *)v187; // 0x401b9c
    int64_t v189 = v123 + 1; // 0x401b9f
    int64_t v190 = v188 + 0xffffffe0; // 0x401ba3
    v106 = v190;
    v122 = v189;
    v136 = v137;
    v113 = v187;
    v108 = v188;
    v142 = v143;
    v126 = v127;
    v92 = v94;
    v101 = v103;
    v54 = v57;
    v60 = v63;
    v81 = v84;
    v124 = v189;
    v138 = v137;
    v115 = v187;
    v109 = v188;
    v144 = v143;
    v128 = v127;
    v95 = v94;
    v104 = v103;
    v58 = v57;
    v64 = v63;
    v85 = v84;
    if ((char)v190 >= 42) {
        // break -> 0x401baa
        goto lab_0x401baa_2;
    }
    goto lab_0x401b68;
  lab_0x401d80:
    // 0x401d80
    v137 = 1;
    v143 = 0;
    v127 = 1;
    v94 = 0;
    v103 = 1;
    v57 = v55;
    v63 = v61;
    v84 = v82;
    goto lab_0x401b98;
  lab_0x401b8c:
    // 0x401b8c
    v137 = 1;
    v143 = 0;
    v127 = 1;
    v94 = v93;
    v103 = v102;
    v57 = v56;
    v63 = v62;
    v84 = v83;
    goto lab_0x401b98;
  lab_0x4018e0:;
    char v191 = *(char *)(v111 + 1); // 0x4018e0
    v50 = v49;
    v119 = v117;
    v133 = v131;
    v139 = v191;
    v89 = v87;
    v98 = v97;
    v69 = v67;
    v75 = v73;
    v79 = v78;
    v53 = v49;
    v46 = v87;
    v47 = v97;
    v72 = v67;
    if (v191 == 0) {
        // break -> 0x401919
        goto lab_0x401919;
    }
    goto lab_0x4018e9;
  lab_0x4019cf:;
    char v413 = *(char *)v148; // 0x4019cf
    v50 = v52;
    v119 = v121;
    v133 = v135;
    v139 = v413;
    v89 = v91;
    v98 = v100;
    v69 = 0;
    v75 = v77;
    v79 = v148;
    if (v413 == 0) {
        goto lab_0x40197a;
    }
    goto lab_0x4018e9;
  lab_0x4018e9:
    // 0x4018e9
    v51 = v50;
    v120 = v119;
    v134 = v133;
    v141 = v139;
    v90 = v89;
    v99 = v98;
    v65 = v79;
    v70 = v69;
    v76 = v75;
    goto lab_0x4018ec;
  lab_0x4024f9:;
    int64_t v192 = v80;
    int64_t v193 = v74;
    int64_t v194 = v68;
    int64_t v195 = v88;
    int64_t v196 = v140;
    int64_t v197 = v107;
    int64_t v198 = v112;
    int64_t v199 = v118;
    if ((char)v132 != 0) {
        // 0x401bcb
        *v16 = (char)v196;
        if ((char)v105 != 0) {
            // 0x401bcb
            goto lab_0x401dc0;
        } else {
            goto lab_0x401bdc;
        }
    } else {
        goto lab_0x401bdc;
    }
  lab_0x401a17:
    // 0x401a17
    v49 = v52;
    v117 = v121;
    v131 = v135;
    v111 = v147;
    v87 = v91;
    v97 = v100;
    v67 = v71 + 0xffffffff & 0xffffffff;
    v73 = v77 + 8;
    v78 = v148;
    goto lab_0x4018e0;
  lab_0x401bdc:;
    int64_t v200 = v199; // 0x401bdf
    int64_t v201 = v198; // 0x401bdf
    int64_t v202 = v197; // 0x401bdf
    int64_t v203 = v195; // 0x401bdf
    int64_t v204 = v194; // 0x401bdf
    int64_t v205 = v193; // 0x401bdf
    int64_t v206 = v192; // 0x401bdf
    char v207; // 0x4017a0
    int64_t v208; // 0x4017a0
    int64_t v209; // 0x4017a0
    int64_t v210; // 0x4017a0
    int64_t v211; // 0x4017a0
    int64_t v212; // 0x4017a0
    int64_t v213; // 0x4017a0
    int64_t v214; // 0x4017a0
    if ((char)v130 == 0) {
        goto lab_0x401bfe;
    } else {
        // 0x401be1
        *v20 = (char)v196;
        v200 = v199;
        v201 = v198;
        v202 = v197;
        v203 = v195;
        v204 = v194;
        v205 = v193;
        v206 = v192;
        if ((char)v105 == 0) {
            goto lab_0x401bfe;
        } else {
            // 0x401be1
            v207 = v195;
            v214 = v199;
            v213 = v198;
            v212 = v197;
            v211 = v195;
            v208 = v194;
            v209 = v193;
            v210 = v192;
            goto lab_0x401bee;
        }
    }
  lab_0x401dc0:;
    int64_t v215 = v86;
    int64_t v216 = v77;
    int64_t v217 = v71;
    int64_t v218 = v96;
    int64_t v219 = v145;
    int64_t v220 = v110;
    int64_t v221 = v116;
    int64_t v222 = v125;
    char v223 = v146;
    *v17 = v223;
    *v19 = v223;
    *(char *)(v3 + 229) = v223;
    v207 = v223;
    v214 = v222;
    v213 = v221;
    v212 = v220;
    v211 = v218;
    v208 = v217;
    v209 = v216;
    v210 = v215;
    if ((char)v129 != 0) {
        // 0x401be1
        *v20 = (char)v219;
        v207 = v223;
        v214 = v222;
        v213 = v221;
        v212 = v220;
        v211 = v218;
        v208 = v217;
        v209 = v216;
        v210 = v215;
    }
    goto lab_0x401bee;
  lab_0x401bfe:;
    int64_t v224 = v206;
    int64_t v225 = v205;
    int64_t v226 = v204;
    int64_t v227 = v203;
    int64_t v228 = v202;
    int64_t v229 = v201;
    int64_t v230 = v200;
    if ((char)v64 != 0) {
        // 0x401c03
        *v15 = (char)v59;
    }
    if ((char)v224 != 0) {
        // 0x401c10
        *v18 = (char)v59;
    }
    // 0x401c18
    if (*v12 != 0) {
        // 0x401c1f
        *(char *)v21 = (char)v59;
    }
    int64_t v231 = v229 + 1; // 0x401c27
    int64_t * v232; // 0x4017a0
    int64_t v233; // 0x4017a0
    int64_t v234; // 0x4017a0
    int64_t v235; // 0x4017a0
    int64_t v236; // 0x4017a0
    int64_t v237; // 0x4017a0
    int64_t v238; // 0x4017a0
    int64_t v239; // 0x4017a0
    int64_t v240; // 0x4017a0
    int64_t v241; // 0x4017a0
    int64_t v242; // 0x4017a0
    int64_t v243; // 0x4017a0
    int64_t v244; // 0x4017a0
    int64_t v245; // 0x4017a0
    int64_t v246; // 0x4017a0
    int64_t v247; // 0x4017a0
    int64_t v248; // 0x4017a0
    int64_t v249; // 0x4017a0
    int64_t v250; // 0x4017a0
    int64_t v251; // 0x4017a0
    int64_t v252; // 0x4017a0
    int64_t v253; // 0x4017a0
    int64_t v254; // 0x4017a0
    int64_t v255; // 0x4017a0
    int64_t v256; // 0x4017a0
    if ((char)v228 != 42) {
        int32_t v257 = 0x1000000 * (int32_t)v228;
        int64_t v258 = v229; // 0x40208d
        if (v257 == 0x39000000 || v257 >> 24 < 57) {
            int64_t v259 = v258;
            int64_t v260 = v259 + 1; // 0x40209b
            char v261 = *(char *)v260; // 0x40209b
            while (v261 == 57 || (int32_t)v261 < 57) {
                // 0x40209b
                v259 = v260;
                v260 = v259 + 1;
                v261 = *(char *)v260;
            }
            int64_t v262 = v260 + v230 - v229; // 0x4020ad
            int64_t v263 = v259 + 2; // 0x4020b5
            *v25 = 0;
            v253 = v262;
            v251 = v260;
            v255 = v260;
            v234 = v226;
            v240 = v225;
            v242 = v263;
            v254 = v262;
            v249 = v260;
            v246 = (int64_t)v261 & 0xffffffff;
            v235 = v226;
            v237 = v225;
            v243 = v263;
            if (v261 == 46) {
                goto lab_0x401c64;
            } else {
                goto lab_0x4020cb;
            }
        } else {
            // 0x402300
            *v25 = 0;
            v252 = v230;
            v250 = v229;
            v248 = v228;
            v256 = v231;
            v233 = v226;
            v239 = v225;
            v241 = v231;
            goto lab_0x401c5a;
        }
    } else {
        int64_t v264 = v230 + 1; // 0x401c35
        if ((int32_t)v226 != 0) {
            int64_t * v265 = (int64_t *)v225;
            *v26 = v231;
            *v27 = v264;
            int64_t v266 = function_402bb0(*v265, v231, v264, v230); // 0x40214d
            v232 = v265;
            v247 = v228;
            v245 = v227;
            v236 = v226;
            v238 = v225;
            v244 = v224;
            if (v266 < 0x80000000) {
                // 0x402168
                *v9 = (int32_t)v266;
                int64_t v267 = *v26; // 0x402178
                *v25 = 1;
                v252 = *v27;
                v250 = v267;
                v248 = (int64_t)*(char *)v231;
                v256 = v267;
                v233 = v226 + 0xffffffff & 0xffffffff;
                v239 = v225 + 8;
                v241 = v229 + 2;
                goto lab_0x401c5a;
            } else {
                goto lab_0x402499;
            }
        } else {
            // 0x401c42
            *v9 = 0;
            *v25 = 1;
            v252 = v264;
            v250 = v231;
            v248 = (int64_t)*(char *)v231;
            v256 = v231;
            v233 = v226;
            v239 = v225;
            v241 = v229 + 2;
            goto lab_0x401c5a;
        }
    }
  lab_0x401bee:
    // 0x401bee
    *v22 = v207;
    *v23 = v207;
    v200 = v214;
    v201 = v213;
    v202 = v212;
    v203 = v211;
    v204 = v208;
    v205 = v209;
    v206 = v210;
    goto lab_0x401bfe;
  lab_0x401c64:;
    int64_t v268 = v242;
    int64_t v269 = v240;
    int64_t v270 = v234;
    int64_t v271 = v255;
    int64_t v272 = v251;
    int64_t v273 = v253;
    unsigned char v274 = *(char *)(v272 + 1); // 0x401c64
    int64_t v275 = v274; // 0x401c64
    *v20 = 0;
    int64_t * v276; // 0x4017a0
    int64_t v277; // 0x4017a0
    int64_t v278; // 0x4017a0
    int64_t v279; // 0x4017a0
    int64_t v280; // 0x4017a0
    int64_t v281; // 0x4017a0
    int64_t v282; // 0x4017a0
    int64_t v283; // 0x4017a0
    int64_t v284; // 0x4017a0
    int64_t v285; // 0x4017a0
    int64_t v286; // 0x4017a0
    int64_t v287; // 0x4017a0
    int32_t v288; // 0x4017a0
    int64_t v289; // 0x401c7a
    if (v274 != 42) {
        int64_t v290 = v268; // 0x402101
        if (v274 == 57 || (int32_t)v274 < 57) {
            int64_t v291 = v290;
            int64_t v292 = v291 + 1; // 0x402117
            char v293 = *(char *)v292; // 0x40211b
            while (v293 == 57 || (int32_t)v293 < 57) {
                // 0x402113
                v291 = v292;
                v292 = v291 + 1;
                v293 = *(char *)v292;
            }
            int64_t v294 = v291 + 2; // 0x402113
            *v28 = 0;
            v287 = v273 - v268 + v294;
            v286 = v292;
            v285 = (int64_t)v293 & 0xffffffff;
            v277 = v270;
            v279 = v269;
            v281 = v294;
        } else {
            // 0x4023c1
            *v28 = 0;
            v287 = v273 + 1;
            v286 = v268;
            v285 = v275;
            v277 = v270;
            v279 = v269;
            v281 = v268 + 1;
        }
        goto lab_0x401cd8;
    } else {
        // 0x401c7a
        v289 = v272 + 2;
        int64_t v295 = v273 + 2; // 0x401c7e
        if ((int32_t)v270 == 0) {
            // 0x402198
            *v28 = 1;
            *v8 = 0;
            v287 = v295;
            v286 = v289;
            v285 = (int64_t)*(char *)v289;
            v277 = v270;
            v279 = v269;
            v281 = v272 + 3;
            goto lab_0x401cd8;
        } else {
            int64_t * v296 = (int64_t *)v269;
            *v29 = v289;
            *v27 = v295;
            int64_t v297 = function_402bb0(*v296, v271, v295, v289); // 0x401c98
            v288 = -1;
            if (v297 < 0) {
                goto lab_0x401cc0;
            } else {
                // 0x401cb0
                v276 = v296;
                v284 = v275;
                v283 = v227;
                v278 = v270;
                v280 = v269;
                v282 = v268;
                if (v297 > 0x7fffffff) {
                    goto lab_0x4024c9;
                } else {
                    // 0x401cbc
                    v288 = v297;
                    goto lab_0x401cc0;
                }
            }
        }
    }
  lab_0x4020cb:
    // 0x4020cb
    *v28 = 0;
    v287 = v254;
    v286 = v249;
    v285 = v246;
    v277 = v235;
    v279 = v237;
    v281 = v243;
    goto lab_0x401cd8;
  lab_0x401c5a:
    // 0x401c5a
    v253 = v252;
    v251 = v250;
    v255 = v256;
    v234 = v233;
    v240 = v239;
    v242 = v241;
    if ((char)v248 != 46) {
        goto lab_0x4020cb;
    } else {
        goto lab_0x401c64;
    }
  lab_0x402499:
    // 0x402499
    function_404d50(*v232);
    error(1, (int32_t)"invalid field width: %s" ^ (int32_t)"invalid field width: %s", dcgettext(NULL, "invalid field width: %s", 5));
    v276 = v232;
    v284 = v247;
    v283 = v245;
    v278 = v236;
    v280 = v238;
    v282 = v244;
    goto lab_0x4024c9;
  lab_0x401cd8:;
    int64_t v298 = v281;
    int64_t v299 = v279;
    int64_t v300 = v277;
    int64_t v301 = v285;
    int64_t v302 = v286;
    int64_t v303 = v287;
    uint64_t v304 = v301 + 0xffffffb4; // 0x401cd8
    int64_t v305 = v302; // 0x401cdd
    int64_t v306 = v301; // 0x401cdd
    int64_t v307 = v298; // 0x401cdd
    if ((char)v304 < 47) {
        int64_t v308 = v302; // 0x401ced
        v305 = v302;
        v306 = v301;
        v307 = v298;
        if ((1 << v304 % 64 & 0x410150000001) != 0) {
            int64_t v309 = v308;
            int64_t v310 = v309 + 1; // 0x401cf0
            unsigned char v311 = *(char *)v310; // 0x401cf0
            while (v311 < 123) {
                // 0x401e40
                v308 = v310;
                if ((1 << (int64_t)((v311 + 52) % 64) & 0x410150000001) == 0) {
                    // break -> 0x401d03
                    break;
                }
                v309 = v308;
                v310 = v309 + 1;
                v311 = *(char *)v310;
            }
            // 0x401d03
            v305 = v310;
            v306 = v311;
            v307 = v309 + 2;
        }
    }
    int64_t v312 = v307;
    int64_t v313 = v306;
    int3_t v314; // 0x4017a0
    int64_t v315; // 0x4017a0
    int64_t v316; // 0x4017a0
    int64_t v317; // 0x4017a0
    int64_t v318; // 0x4017a0
    int64_t v319; // 0x4017a0
    int64_t v320; // 0x4017a0
    int64_t v321; // 0x4017a0
    int64_t v322; // 0x4017a0
    int64_t v323; // 0x4017a0
    int64_t v324; // 0x4017a0
    int64_t v325; // 0x4017a0
    int64_t v326; // 0x401ece
    int64_t v327; // 0x401ed3
    int64_t v328; // 0x401f0e
    if (*(char *)(v313 % 256 + v10) == 0) {
        // 0x40246e
        error(1, (int32_t)"%.*s: invalid conversion specification" ^ (int32_t)"%.*s: invalid conversion specification", dcgettext(NULL, "%.*s: invalid conversion specification", 5));
        v232 = (int64_t *)v299;
        v247 = v313;
        v245 = v66;
        v236 = v300;
        v238 = v299;
        v244 = v312;
        goto lab_0x402499;
    } else {
        int64_t v329 = (int64_t)&g9; // 0x401d25
        v315 = v300;
        v316 = v299;
        if ((int32_t)v300 != 0) {
            // 0x401d27
            v329 = *(int64_t *)v299;
            v315 = v300 + 0xffffffff & 0xffffffff;
            v316 = v299 + 8;
        }
        int64_t v330 = v329;
        uint64_t v331 = v313 + 0xffffffbf; // 0x401d32
        int64_t v332 = v303 + 2; // 0x401d35
        unsigned char v333 = (char)v331; // 0x401d39
        if (v333 < 56) {
            int64_t v334 = 1 << v331 % 64;
            int64_t v335 = 1; // 0x401e75
            int64_t v336 = (int64_t)"ld"; // 0x401e75
            if ((v334 & 0x90410800800000) == 0) {
                int64_t v337 = v334 & 0x7100000071; // 0x401e8b
                v336 = v337 == 0 ? v66 : (int64_t)&g2;
                v335 = v337 != 0;
            }
            // 0x401e9d
            *v30 = v330;
            *v32 = v335;
            *v33 = v336;
            *v35 = v303;
            int64_t v338 = function_4056d0(v335 + v332); // 0x401eb4
            int64_t v339 = *v35; // 0x401eb9
            *v27 = v338;
            int64_t v340 = (int64_t)mempcpy((int64_t *)v338, (int64_t *)v66, (int32_t)v339); // 0x401ec9
            v326 = *v32;
            v327 = *v30;
            uint32_t v341 = (int32_t)v326; // 0x401ed8
            int64_t v342 = v339; // 0x401edc
            int64_t v343 = v66; // 0x401edc
            int64_t v344 = v336; // 0x401edc
            if (v341 != 0) {
                int64_t v345 = *v33; // 0x401ede
                int64_t v346 = 0;
                int64_t v347 = v346 + 1; // 0x401ee7
                int64_t v348 = v347 & 0xffffffff; // 0x401ee7
                *(char *)(v346 + v340) = *(char *)(v346 + v345);
                v342 = v348;
                v343 = v346;
                v344 = v345;
                while ((int32_t)v347 < v341) {
                    // 0x401ee5
                    v346 = v348;
                    v347 = v346 + 1;
                    v348 = v347 & 0xffffffff;
                    *(char *)(v346 + v340) = *(char *)(v346 + v345);
                    v342 = v348;
                    v343 = v346;
                    v344 = v345;
                }
            }
            // 0x401ef7
            v319 = v344;
            v325 = v343;
            v324 = v342;
            int64_t v349 = v326 + v340; // 0x401ef7
            *(char *)v349 = (char)v313;
            *(char *)(v349 + 1) = 0;
            v328 = v331 % 256;
            g43 = v328;
            v314 = v52;
            v321 = v326;
            v323 = v324;
            v317 = v327;
            v320 = v319;
            switch (v333) {
                case 0: {
                    goto lab_0x402010;
                }
                case 4: {
                    goto lab_0x402010;
                }
                case 5: {
                    goto lab_0x402010;
                }
                case 6: {
                    goto lab_0x402010;
                }
                case 23: {
                    goto lab_0x401fb0;
                }
                case 32: {
                    goto lab_0x402010;
                }
                case 34: {
                    int64_t v350 = (int64_t)*(char *)v327; // 0x401f8d
                    if (*v25 != 0) {
                        // 0x4022a9
                        function_4059c0(*v27, (int64_t)*v9, v350, v326, v327, v319);
                        v314 = v52;
                        v321 = v326;
                        v323 = v350;
                        v317 = v327;
                        v320 = v319;
                    } else {
                        // 0x401f97
                        function_4059c0(*v27, v350 & 0xffffffff, v350, v326, v327, v319);
                        v314 = v52;
                        v321 = v326;
                        v323 = v350;
                        v317 = v327;
                        v320 = v319;
                    }
                    goto lab_0x401d70;
                }
                case 35: {
                    goto lab_0x401f50;
                }
                case 36: {
                    goto lab_0x402010;
                }
                case 37: {
                    goto lab_0x402010;
                }
                case 38: {
                    goto lab_0x402010;
                }
                case 40: {
                    goto lab_0x401f50;
                }
                case 46: {
                    goto lab_0x401fb0;
                }
                case 50: {
                    char v351 = *v28;
                    if (*v25 != 0) {
                        // 0x4022e1
                        v322 = v327;
                        v318 = v327;
                        if (v351 != 0) {
                            goto lab_0x402333;
                        } else {
                            // 0x4022e8
                            function_4059c0(*v27, (int64_t)*v9, v327, v326, v327, v319);
                            v314 = v52;
                            v321 = v326;
                            v323 = v327;
                            v317 = v327;
                            v320 = v319;
                            goto lab_0x401d70;
                        }
                    } else {
                        if (v351 != 0) {
                            // 0x4023a1
                            function_4059c0(*v27, (int64_t)*v8, v327, v326, v327, v319);
                            v314 = v52;
                            v321 = v326;
                            v323 = v327;
                            v317 = v327;
                            v320 = v319;
                        } else {
                            // 0x401f36
                            function_4059c0(*v27, v327, v324, v326, v327, v319);
                            v314 = v52;
                            v321 = v326;
                            v323 = v324;
                            v317 = v327;
                            v320 = v319;
                        }
                        goto lab_0x401d70;
                    }
                }
                case 52: {
                    goto lab_0x401fb0;
                }
                case 55: {
                    goto lab_0x401fb0;
                }
                default: {
                    goto lab_0x401d70;
                }
            }
        } else {
            // 0x401d42
            *v26 = v303;
            int64_t v352 = function_4056d0(v332); // 0x401d47
            int64_t v353 = *v26; // 0x401d4c
            *v27 = v352;
            int64_t * v354 = mempcpy((int64_t *)v352, (int64_t *)v66, (int32_t)v353); // 0x401d5c
            *(char *)v354 = (char)v313;
            *(char *)((int64_t)v354 + 1) = 0;
            v314 = v52;
            v321 = v331 & 0xffffffff;
            v323 = v353;
            v317 = v330;
            v320 = v105;
            goto lab_0x401d70;
        }
    }
  lab_0x4024c9:;
    int64_t v355 = function_404d50(*v276); // 0x4024cc
    char * format2 = dcgettext(NULL, "invalid precision: %s", 5); // 0x4024e0
    error(1, (int32_t)"invalid precision: %s" ^ (int32_t)"invalid precision: %s", format2);
    v118 = v355;
    v132 = (int64_t)format2;
    v112 = v355;
    v107 = v284;
    v140 = (int32_t)"invalid precision: %s" ^ (int32_t)"invalid precision: %s";
    v130 = 1;
    v88 = v283;
    v68 = v278;
    v74 = v280;
    v80 = v282;
    goto lab_0x4024f9;
  lab_0x401cc0:
    // 0x401cc0
    *v8 = v288;
    *v28 = 1;
    v287 = *v27;
    v286 = *v29;
    v285 = (int64_t)*(char *)v289;
    v277 = v270 + 0xffffffff & 0xffffffff;
    v279 = v269 + 8;
    v281 = v272 + 3;
    goto lab_0x401cd8;
  lab_0x402010:;
    char v356 = *(char *)v327; // 0x402010
    int3_t v357; // 0x4017a0
    int3_t v358; // 0x4017a0
    int64_t v359; // 0x4017a0
    int64_t v360; // 0x4017a0
    int64_t v361; // 0x4017a0
    int64_t v362; // 0x4017a0
    int64_t v363; // 0x4017a0
    int64_t v364; // 0x4017a0
    int64_t v365; // 0x4017a0
    int64_t v366; // 0x4017a0
    int64_t v367; // 0x4017a0
    if (v356 != 34 == (v356 != 39)) {
        goto lab_0x402228;
    } else {
        unsigned char v368 = *(char *)(v327 + 1); // 0x402020
        if (v368 == 0) {
            goto lab_0x402228;
        } else {
            // 0x40202d
            *(int16_t *)v31 = (int16_t)v368;
            int3_t v369 = v52 - 1; // 0x402037
            __frontend_reg_store_fpr(v369, (float80_t)v368);
            int64_t v370 = v368; // 0x40203b
            int64_t v371 = v326; // 0x40203b
            int64_t v372 = v324; // 0x40203b
            int64_t v373 = v325; // 0x40203b
            int64_t v374 = v327; // 0x40203b
            if (*(char *)(v327 + 2) != 0 == g28 == 0) {
                // 0x402402
                *v38 = __frontend_reg_load_fpr(v369);
                *v32 = v327;
                char * format3 = dcgettext(NULL, "warning: %s: character(s) following character constant have been ignored", 5); // 0x402417
                v374 = *v32;
                error(0, (int32_t)"warning: %s: character(s) following character constant have been ignored" ^ (int32_t)"warning: %s: character(s) following character constant have been ignored", format3);
                __frontend_reg_store_fpr(v369, *v38);
                v370 = &g49;
                v371 = v374 + 2;
                v372 = (int64_t)format3;
                v373 = (int32_t)"warning: %s: character(s) following character constant have been ignored" ^ (int32_t)"warning: %s: character(s) following character constant have been ignored";
            }
            // 0x40204a
            v357 = v369;
            v362 = v371;
            v364 = v372;
            v366 = v373;
            v359 = v374;
            v358 = v369;
            v361 = v370;
            v363 = v371;
            v365 = v372;
            v367 = v373;
            v360 = v374;
            if (*v25 != 0) {
                goto lab_0x402274;
            } else {
                goto lab_0x402055;
            }
        }
    }
  lab_0x401fb0:;
    char v375 = *(char *)v327; // 0x401fb0
    int64_t v376; // 0x4017a0
    int64_t v377; // 0x4017a0
    int64_t v378; // 0x4017a0
    int64_t v379; // 0x4017a0
    int64_t v380; // 0x4017a0
    int64_t v381; // 0x4017a0
    int64_t v382; // 0x4017a0
    if (v375 != 34 == (v375 != 39)) {
        goto lab_0x4021b8;
    } else {
        unsigned char v383 = *(char *)(v327 + 1); // 0x401fc0
        if (v383 == 0) {
            goto lab_0x4021b8;
        } else {
            int64_t v384 = v326; // 0x401fd3
            int64_t v385 = v324; // 0x401fd3
            int64_t v386 = v327; // 0x401fd3
            if (*(char *)(v327 + 2) != 0 == g28 == 0) {
                // 0x40243c
                *v32 = v327;
                char * format4 = dcgettext(NULL, "warning: %s: character(s) following character constant have been ignored", 5); // 0x40244d
                v386 = *v32;
                error(0, (int32_t)"warning: %s: character(s) following character constant have been ignored" ^ (int32_t)"warning: %s: character(s) following character constant have been ignored", format4);
                v384 = v386 + 2;
                v385 = (int64_t)format4;
            }
            int64_t v387 = v383; // 0x401fc0
            v380 = v384;
            v382 = v385;
            v378 = v387;
            v376 = v386;
            v381 = v384;
            v379 = v387;
            v377 = v386;
            if (*v25 != 0) {
                goto lab_0x4021fe;
            } else {
                goto lab_0x401fed;
            }
        }
    }
  lab_0x401f50:;
    int64_t v388 = function_402bb0(v327, v325, v324, v326); // 0x401f53
    char v389 = *v28;
    if (*v25 != 0) {
        // 0x4022be
        v322 = v388;
        v318 = v327;
        if (v389 != 0) {
            goto lab_0x402333;
        } else {
            // 0x4022c9
            function_4059c0(*v27, (int64_t)*v9, v388, v326, v327, v319);
            v314 = v52;
            v321 = v326;
            v323 = v388;
            v317 = v327;
            v320 = v319;
            goto lab_0x401d70;
        }
    } else {
        if (v389 != 0) {
            // 0x402384
            function_4059c0(*v27, (int64_t)*v8, v388, v326, v327, v319);
            v314 = v52;
            v321 = v326;
            v323 = v388;
            v317 = v327;
            v320 = v319;
        } else {
            // 0x401f6e
            function_4059c0(*v27, v388, v324, v326, v327, v319);
            v314 = v52;
            v321 = v326;
            v323 = v324;
            v317 = v327;
            v320 = v319;
        }
        goto lab_0x401d70;
    }
  lab_0x401d70:
    // 0x401d70
    free((int64_t *)*v27);
    v49 = v314;
    v117 = v321;
    v131 = v323;
    v111 = v305;
    v87 = v317;
    v97 = v320;
    v67 = v315;
    v73 = v316;
    v78 = v312;
    goto lab_0x4018e0;
  lab_0x402228:
    // 0x402228
    *v32 = v327;
    int32_t * v390 = __errno_location(); // 0x40222d
    int64_t v391 = *v32; // 0x402232
    *v390 = 0;
    *v35 = v391;
    function_402ff0(v391, v36, v324);
    int64_t v392 = *v35; // 0x40224f
    int64_t v393 = *v37; // 0x402254
    *v39 = __frontend_reg_load_fpr(v52);
    int64_t v394 = function_402b00(v392, v393); // 0x402260
    __frontend_reg_store_fpr(v52, *v39);
    v357 = v52;
    v362 = v326;
    v364 = v324;
    v366 = v393;
    v359 = v392;
    v358 = v52;
    v361 = v394;
    v363 = v326;
    v365 = v324;
    v367 = v393;
    v360 = v392;
    if (*v25 == 0) {
        goto lab_0x402055;
    } else {
        goto lab_0x402274;
    }
  lab_0x4021b8:
    // 0x4021b8
    *v32 = v327;
    *__errno_location() = 0;
    int64_t v395 = __strtoul_internal((char *)*v32, (char **)v36, 0, 0); // 0x4021d9
    int64_t v396 = *v32; // 0x4021de
    function_402b00(v396, *v37);
    v380 = 0;
    v382 = 0;
    v378 = v395;
    v376 = v396;
    v381 = 0;
    v379 = v395;
    v377 = v396;
    if (*v25 == 0) {
        goto lab_0x401fed;
    } else {
        goto lab_0x4021fe;
    }
  lab_0x402055:;
    int64_t v397 = v359;
    int64_t v398 = v364;
    int64_t v399 = v362;
    int3_t v400 = v357;
    if (*v28 != 0) {
        // 0x402310
        *v40 = v319;
        *v42 = v319;
        *v43 = __frontend_reg_load_fpr(v400);
        function_4059c0(*v27, (int64_t)*v8, v398, v399, v397, v319);
        v314 = v400 + 1;
        v321 = v399;
        v323 = v398;
        v317 = v397;
        v320 = v319;
    } else {
        // 0x402060
        *v40 = v328;
        *v42 = v328;
        *v43 = __frontend_reg_load_fpr(v400);
        function_4059c0(*v27, v366, v398, v399, v397, v319);
        v314 = v400 + 1;
        v321 = v399;
        v323 = v398;
        v317 = v397;
        v320 = v319;
    }
    goto lab_0x401d70;
  lab_0x402274:;
    int64_t v401 = v360;
    int64_t v402 = v363;
    int3_t v403 = v358;
    if (*v28 != 0) {
        // 0x402364
        *v40 = v361;
        *v42 = v361;
        uint32_t v404 = *v8; // 0x402366
        uint32_t v405 = *v9; // 0x40236c
        int64_t v406 = *v27; // 0x402370
        *v43 = __frontend_reg_load_fpr(v403);
        function_4059c0(v406, (int64_t)v405, (int64_t)v404, v402, v401, v319);
        v314 = v403 + 1;
        v321 = *v40;
        v323 = *v42;
        v317 = v401;
        v320 = v319;
    } else {
        // 0x40227f
        *v40 = v367;
        *v42 = v367;
        *v43 = __frontend_reg_load_fpr(v403);
        function_4059c0(*v27, (int64_t)*v9, v365, v402, v401, v319);
        v314 = v403 + 1;
        v321 = v402;
        v323 = v365;
        v317 = *v40;
        v320 = v319;
    }
    goto lab_0x401d70;
  lab_0x401fed:;
    int64_t v407 = v376;
    int64_t v408 = v378;
    int64_t v409 = v380;
    if (*v28 != 0) {
        // 0x40234c
        function_4059c0(*v27, (int64_t)*v8, v408, v409, v407, v319);
        v314 = v52;
        v321 = v409;
        v323 = v408;
        v317 = v407;
        v320 = v319;
    } else {
        // 0x401ff8
        function_4059c0(*v27, v408, v382, v409, v407, v319);
        v314 = v52;
        v321 = v409;
        v323 = v382;
        v317 = v407;
        v320 = v319;
    }
    goto lab_0x401d70;
  lab_0x4021fe:;
    int64_t v410 = v377;
    int64_t v411 = v379;
    v322 = v411;
    v318 = v410;
    if (*v28 != 0) {
        goto lab_0x402333;
    } else {
        // 0x402209
        function_4059c0(*v27, (int64_t)*v9, v411, v381, v410, v319);
        v314 = v52;
        v321 = v381;
        v323 = v411;
        v317 = v410;
        v320 = v319;
        goto lab_0x401d70;
    }
  lab_0x402333:;
    int64_t v412 = (int64_t)*v8; // 0x402333
    function_4059c0(*v27, (int64_t)*v9, v412, v322, v318, v319);
    v314 = v52;
    v321 = v322;
    v323 = v412;
    v317 = v318;
    v320 = v319;
    goto lab_0x401d70;
}
// Address range: 0x402510 - 0x40253b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402510
    int64_t v1; // 0x402510
    __libc_start_main(0x4017a0, (int32_t)a4, (char **)&v1, (void (*)())0x408e60, (void (*)())0x408ec0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40253b - 0x40255a
int64_t function_40253b(void) {
    // 0x40253b
    return 0x60d258;
}
// Address range: 0x40255a - 0x402591
int64_t function_40255a(void) {
    // 0x40255a
    return 0;
}
// Address range: 0x402591 - 0x4025e8
int64_t function_402591(void) {
    // 0x402591
    if (g26 != 0) {
        // 0x4025e7
        int64_t result; // 0x402591
        return result;
    }
    int64_t v1 = g27; // 0x4025c4
    int64_t result2; // 0x4025d6
    if (g27 >= ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x4025d6
        result2 = function_40253b();
        g26 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x4025c6
        v1++;
    }
    // 0x4025ba
    g27 = v1;
    // 0x4025d6
    result2 = function_40253b();
    g26 = 1;
    return result2;
}
// Address range: 0x4025e8 - 0x4025ed
int64_t function_4025e8(void) {
    // 0x4025e8
    return function_40255a();
}
// Address range: 0x4025f0 - 0x402b00
int64_t function_4025f0(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 + 1; // 0x4025fd
    char * v2 = (char *)v1; // 0x4025fd
    unsigned char c = *v2; // 0x4025fd
    int64_t v3; // 0x4025f0
    int64_t v4; // 0x4025f0
    if (c == 120) {
        int16_t * v5 = *__ctype_b_loc(); // 0x4026ed
        int32_t v6 = 0;
        int64_t v7 = a1 + 2;
        int64_t v8 = 0;
        unsigned char v9 = *(char *)v7; // 0x4026f0
        while ((*(char *)((int64_t)v5 + 1 + 2 * (int64_t)v9) & 16) != 0) {
            int64_t v10 = v9; // 0x4026f0
            int64_t v11; // 0x4025f0
            if (v9 < 103) {
                // 0x402712
                v11 = v10 + 0xffffffa9;
            } else {
                // 0x402730
                v11 = (v9 < 71 ? 0xffffffc9 : 0xffffffd0) + v10;
            }
            int64_t v12 = v11 + 16 * v8 & 0xffffffff; // 0x402715
            int64_t v13 = v7 + 1; // 0x402718
            v4 = v12;
            v3 = v13;
            if (v6 == 1) {
                goto lab_0x402649;
            }
            v6 = 1;
            v7 = v13;
            v8 = v12;
            v9 = *(char *)v7;
        }
        // 0x4029f0
        v4 = v8;
        v3 = v7;
        if (v6 != 0) {
            goto lab_0x402649;
        } else {
            goto lab_0x4029f8;
        }
    } else {
        if ((c & -8) == 48) {
            int64_t v14 = ((int64_t)(c == 48) & (int64_t)a2) + v1; // 0x402623
            int64_t v15 = v14 + 3; // 0x402628
            int64_t v16 = 0; // 0x402628
            int64_t v17 = v14; // 0x402628
            char v18 = *(char *)v17; // 0x40262c
            v4 = v16;
            v3 = v17;
            while ((v18 & -8) == 48) {
                // 0x40263c
                v17++;
                v16 = 8 * v16 + 0xffffffd0 + (int64_t)v18 & 0xffffffff;
                v4 = v16;
                v3 = v15;
                if (v17 == v15) {
                    // break -> 0x402649
                    break;
                }
                v18 = *(char *)v17;
                v4 = v16;
                v3 = v17;
            }
            goto lab_0x402649;
        } else {
            if (c != 0) {
                // 0x402748
                if (strchr("\"\\abcefnrtv", (int32_t)c) != NULL) {
                    // 0x40275d
                    g44 = c - 97;
                    switch (c) {
                        case 97: {
                            int64_t v19 = (int64_t)g23; // 0x40298a
                            int64_t * v20 = (int64_t *)(v19 + 40); // 0x402996
                            uint64_t v21 = *v20; // 0x402996
                            if (v21 >= *(int64_t *)(v19 + 48)) {
                                // 0x402ab3
                                __overflow(g23, 7);
                            } else {
                                // 0x4029a4
                                *v20 = v21 + 1;
                                *(char *)v21 = 7;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 98: {
                            int64_t v22 = (int64_t)g23; // 0x402960
                            int64_t * v23 = (int64_t *)(v22 + 40); // 0x40296c
                            uint64_t v24 = *v23; // 0x40296c
                            if (v24 >= *(int64_t *)(v22 + 48)) {
                                // 0x402aa4
                                __overflow(g23, 8);
                            } else {
                                // 0x40297a
                                *v23 = v24 + 1;
                                *(char *)v24 = 8;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 99: {
                            // 0x40292f
                            exit(0);
                            // UNREACHABLE
                        }
                        case 101: {
                            int64_t v25 = (int64_t)g23; // 0x402936
                            int64_t * v26 = (int64_t *)(v25 + 40); // 0x402942
                            uint64_t v27 = *v26; // 0x402942
                            if (v27 >= *(int64_t *)(v25 + 48)) {
                                // 0x402a77
                                __overflow(g23, 27);
                            } else {
                                // 0x402950
                                *v26 = v27 + 1;
                                *(char *)v27 = 27;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 102: {
                            int64_t v28 = (int64_t)g23; // 0x402905
                            int64_t * v29 = (int64_t *)(v28 + 40); // 0x402911
                            uint64_t v30 = *v29; // 0x402911
                            if (v30 >= *(int64_t *)(v28 + 48)) {
                                // 0x402a68
                                __overflow(g23, 12);
                            } else {
                                // 0x40291f
                                *v29 = v30 + 1;
                                *(char *)v30 = 12;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 110: {
                            int64_t v31 = (int64_t)g23; // 0x4028db
                            int64_t * v32 = (int64_t *)(v31 + 40); // 0x4028e7
                            uint64_t v33 = *v32; // 0x4028e7
                            if (v33 >= *(int64_t *)(v31 + 48)) {
                                // 0x402a59
                                __overflow(g23, 10);
                            } else {
                                // 0x4028f5
                                *v32 = v33 + 1;
                                *(char *)v33 = 10;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 114: {
                            int64_t v34 = (int64_t)g23; // 0x4028b1
                            int64_t * v35 = (int64_t *)(v34 + 40); // 0x4028bd
                            uint64_t v36 = *v35; // 0x4028bd
                            if (v36 >= *(int64_t *)(v34 + 48)) {
                                // 0x402a95
                                __overflow(g23, 13);
                            } else {
                                // 0x4028cb
                                *v35 = v36 + 1;
                                *(char *)v36 = 13;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 116: {
                            int64_t v37 = (int64_t)g23; // 0x402887
                            int64_t * v38 = (int64_t *)(v37 + 40); // 0x402893
                            uint64_t v39 = *v38; // 0x402893
                            if (v39 >= *(int64_t *)(v37 + 48)) {
                                // 0x402a86
                                __overflow(g23, 9);
                            } else {
                                // 0x4028a1
                                *v38 = v39 + 1;
                                *(char *)v39 = 9;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        case 118: {
                            int64_t v40 = (int64_t)g23; // 0x40285d
                            int64_t * v41 = (int64_t *)(v40 + 40); // 0x402869
                            uint64_t v42 = *v41; // 0x402869
                            if (v42 >= *(int64_t *)(v40 + 48)) {
                                // 0x402a4a
                                __overflow(g23, 11);
                            } else {
                                // 0x402877
                                *v41 = v42 + 1;
                                *(char *)v42 = 11;
                            }
                            // break -> 0x40266e
                            break;
                        }
                        default: {
                            int64_t v43 = (int64_t)g23; // 0x4029b4
                            int64_t * v44 = (int64_t *)(v43 + 40); // 0x4029c0
                            uint64_t v45 = *v44; // 0x4029c0
                            if (v45 >= *(int64_t *)(v43 + 48)) {
                                // 0x402a3c
                                __overflow(g23, (int32_t)c);
                            } else {
                                // 0x4029ca
                                *v44 = v45 + 1;
                                *(char *)v45 = c;
                            }
                            // break -> 0x40266e
                            break;
                        }
                    }
                    // 0x40266e
                    return 1;
                }
                if ((c & -33) != 85) {
                    goto lab_0x402689;
                } else {
                    int64_t v46 = a1 + 2; // 0x40278c
                    int16_t ** v47 = __ctype_b_loc(); // 0x402794
                    int64_t v48 = 4 * (int64_t)(c != 117); // 0x402799
                    int64_t v49 = a1 + 3 + (v48 | 3); // 0x4027a9
                    unsigned char v50 = *(char *)v46; // 0x4027bf
                    int64_t v51 = (int64_t)*v47 + 1; // 0x4027c9
                    char v52 = v50; // 0x4027cf
                    int64_t v53 = v46; // 0x4027cf
                    int64_t v54 = 0; // 0x4027cf
                    if ((*(char *)(2 * (int64_t)v50 + v51) & 16) != 0) {
                        int64_t v55; // 0x4025f0
                        while (true) {
                            int64_t v56 = v53;
                            char v57 = v52;
                            int64_t v58 = v57;
                            int64_t v59 = 16 * v54; // 0x4027d8
                            int64_t v60; // 0x4025f0
                            int64_t v61; // 0x4025f0
                            if (v57 < 103) {
                                int64_t v62 = v56 + 1; // 0x4027b3
                                int64_t v63 = v59 + v58 + 0xffffffa9 & 0xffffffff; // 0x4027b7
                                v61 = v63;
                                v60 = v62;
                                v55 = v63;
                                if (v62 == v49) {
                                    // break -> 0x4027fd
                                    break;
                                }
                            } else {
                                int64_t v64 = v56 + 1; // 0x4027ef
                                int64_t v65 = v59 + v58 + (v57 < 71 ? 0xffffffc9 : 0xffffffd0) & 0xffffffff; // 0x4027f5
                                v61 = v65;
                                v60 = v64;
                                v55 = v65;
                                if (v64 == v49) {
                                    // break -> 0x4027fd
                                    break;
                                }
                            }
                            unsigned char v66 = *(char *)v60; // 0x4027bf
                            v52 = v66;
                            v53 = v60;
                            v54 = v61;
                            if ((*(char *)(2 * (int64_t)v66 + v51) & 16) == 0) {
                                goto lab_0x4029f8;
                            }
                        }
                        uint32_t v67 = (int32_t)v55; // 0x4027fd
                        char * format; // 0x402ad3
                        if (v67 <= 159 && v67 != 36) {
                            if ((v67 - 64 & -33) != 0) {
                                // 0x402ac2
                                format = dcgettext(NULL, "invalid universal character name \\%c%0*x", 5);
                                error(1, (int32_t)"invalid universal character name \\%c%0*x" ^ (int32_t)"invalid universal character name \\%c%0*x", format);
                                return &g49;
                            }
                        }
                        if ((v55 & 0xfffff800) != 0xd800) {
                            // 0x40282d
                            function_405060((int64_t)g23, v55, 0);
                            return v48 + 5;
                        }
                        // 0x402ac2
                        format = dcgettext(NULL, "invalid universal character name \\%c%0*x", 5);
                        error(1, (int32_t)"invalid universal character name \\%c%0*x" ^ (int32_t)"invalid universal character name \\%c%0*x", format);
                        return &g49;
                    }
                    goto lab_0x4029f8;
                }
            } else {
                goto lab_0x402689;
            }
        }
    }
  lab_0x402649:;
    int64_t v68 = (int64_t)g23; // 0x402649
    int64_t * v69 = (int64_t *)(v68 + 40); // 0x402656
    uint64_t v70 = *v69; // 0x402656
    if (v70 >= *(int64_t *)(v68 + 48)) {
        // 0x402850
        __overflow(g23, (int32_t)v4 % 256);
    } else {
        // 0x402664
        *v69 = v70 + 1;
        *(char *)v70 = (char)v4;
    }
    // 0x40266e
    return 0xffffffff - a1 + v3 & 0xffffffff;
  lab_0x4029f8:
    // 0x4029f8
    error(1, (int32_t)"missing hexadecimal number in escape" ^ (int32_t)"missing hexadecimal number in escape", dcgettext(NULL, "missing hexadecimal number in escape", 5));
    // 0x402a20
    __overflow((struct _IO_FILE *)1, 92);
    goto lab_0x4026a9;
  lab_0x402689:;
    int64_t v75 = (int64_t)g23; // 0x402689
    int64_t * v76 = (int64_t *)(v75 + 40); // 0x402690
    uint64_t v77 = *v76; // 0x402690
    if (v77 >= *(int64_t *)(v75 + 48)) {
        // 0x402a20
        __overflow((struct _IO_FILE *)v75, 92);
        goto lab_0x4026a9;
    } else {
        // 0x40269e
        *v76 = v77 + 1;
        *(char *)v77 = 92;
        goto lab_0x4026a9;
    }
  lab_0x4026a9:;
    unsigned char v71 = *v2; // 0x4026a9
    if (v71 == 0) {
        // 0x40266e
        return 0;
    }
    int64_t v72 = (int64_t)g23; // 0x4026b4
    int64_t * v73 = (int64_t *)(v72 + 40); // 0x4026bb
    uint64_t v74 = *v73; // 0x4026bb
    if (v74 >= *(int64_t *)(v72 + 48)) {
        // 0x402a2f
        __overflow(g23, (int32_t)v71);
    } else {
        // 0x4026c9
        *v73 = v74 + 1;
        *(char *)v74 = v71;
    }
    // 0x40266e
    return 1;
}
// Address range: 0x402b00 - 0x402ba4
int64_t function_402b00(int64_t a1, int64_t a2) {
    int32_t * err_num = __errno_location(); // 0x402b0a
    if (*err_num != 0) {
        // 0x402b60
        error(0, *err_num, "%s", (char *)function_404d50(a1));
        g29 = 1;
        return &g49;
    }
    int64_t result = (int64_t)err_num; // 0x402b19
    int64_t v1; // 0x402b00
    if ((char)v1 != 0) {
        // 0x402b1b
        function_404d50(a1);
        int64_t v2 = a1 == a2 ? (int64_t)"%s: expected a numeric value" : (int64_t)"%s: value not completely converted";
        error(0, 0, dcgettext(NULL, (char *)v2, 5));
        g29 = 1;
        result = &g49;
    }
    // 0x402b57
    return result;
}
// Address range: 0x402bb0 - 0x402c3c
int64_t function_402bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char v1 = a1;
    if (v1 != 34 != v1 != 39) {
        unsigned char v2 = *(char *)(a1 + 1); // 0x402bc4
        if (v2 != 0) {
            int64_t result = v2; // 0x402bc4
            if (*(char *)(a1 + 2) == 0) {
                // 0x402bf9
                return result;
            }
            // 0x402c0e
            if (g28 == 0) {
                // 0x402c17
                error(0, (int32_t)"warning: %s: character(s) following character constant have been ignored" ^ (int32_t)"warning: %s: character(s) following character constant have been ignored", dcgettext(NULL, "warning: %s: character(s) following character constant have been ignored", 5));
            }
            // 0x402bf9
            return result;
        }
    }
    // 0x402bcd
    *__errno_location() = 0;
    int64_t v3; // bp-32, 0x402bb0
    int32_t result2 = __strtol_internal((char *)a1, (char **)&v3, 0, 0); // 0x402be4
    function_402b00(a1, v3);
    // 0x402bf9
    return result2;
}
// Address range: 0x402c40 - 0x402fe5
int64_t function_402c40(int64_t a1) {
    int32_t status = a1; // 0x402c56
    if (status != 0) {
        // 0x402c5a
        __fprintf_chk(g25, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402c7f
        exit(status);
        // UNREACHABLE
    }
    // 0x402c86
    __printf_chk(1, dcgettext(NULL, "Usage: %s FORMAT [ARGUMENT]...\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print ARGUMENT(s) according to FORMAT, or execute according to OPTION:\n\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "\nFORMAT controls the output as in C printf.  Interpreted sequences are:\n\n  \\\"      double quote\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  \\\\      backslash\n  \\a      alert (BEL)\n  \\b      backspace\n  \\c      produce no further output\n  \\e      escape\n  \\f      form feed\n  \\n      new line\n  \\r      carriage return\n  \\t      horizontal tab\n  \\v      vertical tab\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  \\NNN    byte with octal value NNN (1 to 3 digits)\n  \\xHH    byte with hexadecimal value HH (1 to 2 digits)\n  \\uHHHH  Unicode (ISO/IEC 10646) character with hex value HHHH (4 digits)\n  \\UHHHHHHHH  Unicode character with hex value HHHHHHHH (8 digits)\n", 5), g23);
    fputs_unlocked(dcgettext(NULL, "  %%      a single %\n  %b      ARGUMENT as a string with '\\' escapes interpreted,\n          except that octal escapes are of the form \\0 or \\0NNN\n  %q      ARGUMENT is printed in a format that can be reused as shell input,\n          escaping non-printable characters with the proposed POSIX $'' syntax.\n\nand all C format specifications ending with one of diouxXfeEgGcs, with\nARGUMENTs converted to proper type first.  Variable widths are handled.\n", 5), g23);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402dc1
    bool v2; // 0x402c40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402e48
    int64_t v6 = *(int64_t *)v5; // 0x402e4c
    int64_t v7 = 7; // 0x402e52
    while (v6 != 0) {
        int64_t v8 = (int64_t)"printf";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402e5e
        char v11 = *(char *)v9; // 0x402e5e
        char v12 = v11; // 0x402e5e
        bool v13 = false; // 0x402e5e
        while (v10 == v11) {
            // 0x402e54
            v7--;
            int64_t v14 = v9 + v3; // 0x402e5e
            int64_t v15 = v8 + v3; // 0x402e5e
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
            // break -> 0x402e6a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x402e6a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402f7c;
        } else {
            // 0x402f66
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402fbb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ecc;
            } else {
                goto lab_0x402f7c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402ecc;
        } else {
            // 0x402eb2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402fbb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ecc;
            } else {
                goto lab_0x402ecc;
            }
        }
    }
  lab_0x402f7c:
    // 0x402f7c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f0c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c7f
    exit(status);
    // UNREACHABLE
  lab_0x402ecc:
    // 0x402ecc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f0c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402c7f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402ff0 - 0x403064
int64_t function_402ff0(int64_t a1, int64_t a2, int64_t a3) {
    struct __locale_struct * v1 = g30;
    float80_t v2; // 0x403020
    if (v1 != NULL) {
        // 0x403014
        v2 = strtold_l((char *)a1, (char **)a2, v1);
        return (float64_t)v2;
    }
    struct __locale_struct * v3 = newlocale(0x1fbf, "C", NULL); // 0x40304c
    g30 = v3;
    if (v3 != NULL) {
        // 0x403014
        v2 = strtold_l((char *)a1, (char **)a2, v3);
        return (float64_t)v2;
    }
    if (a2 != 0) {
        // 0x40302d
        *(int64_t *)a2 = a1;
    }
    // 0x403032
    return (int64_t)v3;
}
// Address range: 0x403070 - 0x403078
int64_t function_403070(int64_t a1) {
    // 0x403070
    g32 = a1;
    int64_t result; // 0x403070
    return result;
}
// Address range: 0x403080 - 0x403088
int64_t function_403080(int64_t a1) {
    // 0x403080
    g31 = a1;
    int64_t result; // 0x403080
    return result;
}
// Address range: 0x403090 - 0x40312e
int64_t function_403090(void) {
    // 0x403090
    int32_t * err_num; // 0x4030a6
    if ((int32_t)function_405cb0((int64_t)g23) == 0) {
        goto lab_0x4030bc;
    } else {
        // 0x4030a6
        err_num = __errno_location();
        if (g31 == 0) {
            goto lab_0x4030d3;
        } else {
            // 0x4030b7
            if (*err_num != 32) {
                goto lab_0x4030d3;
            } else {
                goto lab_0x4030bc;
            }
        }
    }
  lab_0x4030bc:;
    int64_t result = function_405cb0((int64_t)g25); // 0x4030c3
    if ((int32_t)result == 0) {
        // 0x4030cc
        return result;
    }
    // 0x40310e
    _exit(g16);
    // UNREACHABLE
  lab_0x4030d3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4030df
    if (g32 == 0) {
        // 0x403119
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4030f3
        error(0, *err_num, "%s: %s", (char *)function_404ba0((int64_t)g32), v1);
    }
    // 0x40310e
    _exit(g16);
    // UNREACHABLE
}
// Address range: 0x403130 - 0x4031c9
int64_t function_403130(int64_t str) {
    // 0x403130
    if (str == 0) {
        // 0x4031a9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g25);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40313e
    int64_t result = (int64_t)found_char_pos; // 0x40313e
    if (found_char_pos == NULL) {
        // 0x403199
        g33 = str;
        g24 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403148
    if (v1 - str < 7) {
        // 0x403199
        g33 = str;
        g24 = str;
        return result;
    }
    // 0x403158
    bool v2; // 0x403130
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403130
    int64_t v5 = result - 6; // 0x403130
    int64_t v6 = 7; // 0x403166
    unsigned char v7 = *(char *)v5; // 0x403166
    char v8 = *(char *)v4; // 0x403166
    char v9 = v8; // 0x403166
    bool v10 = false; // 0x403166
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
    int64_t v12 = (int64_t)"lt-"; // 0x403170
    int64_t v13 = v1; // 0x403170
    int64_t v14 = 3; // 0x403170
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403199
        g33 = str;
        g24 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403182
    char v16 = *(char *)v12; // 0x403182
    char v17 = v16; // 0x403182
    bool v18 = false; // 0x403182
    while (v15 == v16) {
        // 0x403172
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
    int64_t v20 = v1; // 0x40318c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40318e
        v20 = result + 4;
        g22 = v20;
    }
    // 0x403199
    g33 = v20;
    g24 = v20;
    return result;
}
// Address range: 0x4031d0 - 0x4032c2
int64_t function_4031d0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4031e4
    int64_t result = (int64_t)v1; // 0x4031e4
    if (result != a1) {
        // 0x4031f1
        return result;
    }
    int64_t v2 = function_405d70(); // 0x403200
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4032b6
    if (v3 == 85) {
        // 0x403210
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4032a8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40323e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40324b
        // 0x4031f1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4032a8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40328d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40329a
    // 0x4031f1
    return result4;
}
// Address range: 0x4032d0 - 0x403327
int64_t function_4032d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4032d0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403318
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403327 - 0x4044f1
int64_t function_403327(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403371
    int64_t v3 = 0; // 0x403371
    int64_t v4; // 0x403327
    int64_t v5; // 0x403327
    int64_t v6; // 0x403327
    int64_t v7; // 0x403327
    int64_t v8; // 0x403327
    int64_t v9; // 0x403327
    int64_t v10; // 0x403327
    int64_t v11; // 0x403327
    int64_t v12; // 0x403327
    int64_t v13; // 0x403327
    int64_t v14; // 0x403327
    int64_t v15; // 0x403327
    int64_t v16; // 0x403327
    int64_t v17; // 0x403327
    int64_t v18; // 0x403327
    int64_t result; // 0x403327
    int64_t v19; // 0x403327
    int32_t wc; // bp+132, 0x403327
    int64_t ps; // bp+136, 0x403327
    char v20; // 0x4038e0
    int64_t v21; // 0x4038e0
    int64_t v22; // 0x403c88
    int64_t v23; // 0x403327
    int64_t v24; // 0x403ca7
    int32_t v25; // 0x403327
    while (true) {
      lab_0x403378_2:
        // 0x403378
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403327
        int64_t v27; // 0x4033ac
        while (true) {
          lab_0x403378:
            // 0x403378
            v5 = v26;
            bool v28 = v15 == v5; // 0x403383
            if (v15 == -1) {
                // 0x403385
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403393
            if (v28) {
                // break (via goto) -> 0x403af8
                goto lab_0x403af8;
            }
            // 0x40339c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g48 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40398b
                    if (v25 % 2 == 0) {
                        goto lab_0x4034d1;
                    }
                    // 0x403dad
                    v26 = v5 + 1;
                    goto lab_0x403378;
                }
                case 7: {
                    goto lab_0x4034d1;
                }
                case 8: {
                    goto lab_0x4034d1;
                }
                case 9: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4034d1;
                }
                case 12: {
                    goto lab_0x4034d1;
                }
                case 13: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40349d;
                }
                case 36: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4034d1;
                }
                case 38: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4034d1;
                }
                case 44: {
                    goto lab_0x4034d1;
                }
                case 45: {
                    goto lab_0x4034d1;
                }
                case 46: {
                    goto lab_0x4034d1;
                }
                case 47: {
                    goto lab_0x4034d1;
                }
                case 48: {
                    goto lab_0x4034d1;
                }
                case 49: {
                    goto lab_0x4034d1;
                }
                case 50: {
                    goto lab_0x4034d1;
                }
                case 51: {
                    goto lab_0x4034d1;
                }
                case 52: {
                    goto lab_0x4034d1;
                }
                case 53: {
                    goto lab_0x4034d1;
                }
                case 54: {
                    goto lab_0x4034d1;
                }
                case 55: {
                    goto lab_0x4034d1;
                }
                case 56: {
                    goto lab_0x4034d1;
                }
                case 57: {
                    goto lab_0x4034d1;
                }
                case 58: {
                    goto lab_0x4034d1;
                }
                case 59: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4034d1;
                }
                case 66: {
                    goto lab_0x4034d1;
                }
                case 67: {
                    goto lab_0x4034d1;
                }
                case 68: {
                    goto lab_0x4034d1;
                }
                case 69: {
                    goto lab_0x4034d1;
                }
                case 70: {
                    goto lab_0x4034d1;
                }
                case 71: {
                    goto lab_0x4034d1;
                }
                case 72: {
                    goto lab_0x4034d1;
                }
                case 73: {
                    goto lab_0x4034d1;
                }
                case 74: {
                    goto lab_0x4034d1;
                }
                case 75: {
                    goto lab_0x4034d1;
                }
                case 76: {
                    goto lab_0x4034d1;
                }
                case 77: {
                    goto lab_0x4034d1;
                }
                case 78: {
                    goto lab_0x4034d1;
                }
                case 79: {
                    goto lab_0x4034d1;
                }
                case 80: {
                    goto lab_0x4034d1;
                }
                case 81: {
                    goto lab_0x4034d1;
                }
                case 82: {
                    goto lab_0x4034d1;
                }
                case 83: {
                    goto lab_0x4034d1;
                }
                case 84: {
                    goto lab_0x4034d1;
                }
                case 85: {
                    goto lab_0x4034d1;
                }
                case 86: {
                    goto lab_0x4034d1;
                }
                case 87: {
                    goto lab_0x4034d1;
                }
                case 88: {
                    goto lab_0x4034d1;
                }
                case 89: {
                    goto lab_0x4034d1;
                }
                case 90: {
                    goto lab_0x4034d1;
                }
                case 91: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4034d1;
                }
                case 94: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4034d1;
                }
                case 96: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4034d1;
                }
                case 98: {
                    goto lab_0x4034d1;
                }
                case 99: {
                    goto lab_0x4034d1;
                }
                case 100: {
                    goto lab_0x4034d1;
                }
                case 101: {
                    goto lab_0x4034d1;
                }
                case 102: {
                    goto lab_0x4034d1;
                }
                case 103: {
                    goto lab_0x4034d1;
                }
                case 104: {
                    goto lab_0x4034d1;
                }
                case 105: {
                    goto lab_0x4034d1;
                }
                case 106: {
                    goto lab_0x4034d1;
                }
                case 107: {
                    goto lab_0x4034d1;
                }
                case 108: {
                    goto lab_0x4034d1;
                }
                case 109: {
                    goto lab_0x4034d1;
                }
                case 110: {
                    goto lab_0x4034d1;
                }
                case 111: {
                    goto lab_0x4034d1;
                }
                case 112: {
                    goto lab_0x4034d1;
                }
                case 113: {
                    goto lab_0x4034d1;
                }
                case 114: {
                    goto lab_0x4034d1;
                }
                case 115: {
                    goto lab_0x4034d1;
                }
                case 116: {
                    goto lab_0x4034d1;
                }
                case 117: {
                    goto lab_0x4034d1;
                }
                case 118: {
                    goto lab_0x4034d1;
                }
                case 119: {
                    goto lab_0x4034d1;
                }
                case 120: {
                    goto lab_0x4034d1;
                }
                case 121: {
                    goto lab_0x4034d1;
                }
                case 122: {
                    goto lab_0x4034d1;
                }
                case 123: {
                    goto lab_0x403475;
                }
                case 124: {
                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403475;
                }
                case 126: {
                    goto lab_0x40349d;
                }
                default: {
                    goto lab_0x403875;
                }
            }
        }
      lab_0x403875:
        if (v23 != 1) {
            // 0x403be0
            ps = 0;
            int64_t len = v15; // 0x403bf0
            if (v15 == -1) {
                // 0x403bf2
                len = strlen((char *)str);
            }
            // 0x403c1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403c7f:
                // 0x403c7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403c84
                int64_t v30 = v29 + str;
                v24 = function_405b50(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4041fa_2;
                    }
                    case -1: {
                        goto lab_0x4041fa_2;
                    }
                    case -2: {
                        // 0x4042dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404317
                            v19 = v18;
                            int64_t v31 = v18; // 0x40431a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404327
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404320
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4041fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4041fa_2;
                    }
                    case 1: {
                        goto lab_0x403c50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403cfc
                        char v34 = *(char *)v33; // 0x403d0d
                        unsigned char v35; // 0x403327
                        if (v34 < 125) {
                            // 0x403d18
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403d2f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403d00
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403d0d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403d18
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403d2f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403d00
                            v33++;
                        }
                        goto lab_0x403c50;
                    }
                }
            }
            goto lab_0x4041fa_2;
        } else {
            // 0x4038c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4034d1;
        }
    }
  lab_0x403af8:
    // 0x403af8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4043fa
        if (v8 > result) {
            // 0x404403
            *(char *)(v12 + result) = 0;
        }
        // 0x403727
        return result;
    }
    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4034d1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4034e0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4036ea_2;
        }
    }
    int64_t v39 = result; // 0x4035e1
    char v40 = v20; // 0x4035e1
    int64_t v41 = v38; // 0x4035e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4035e1
    int64_t v43 = v36; // 0x4035e1
    goto lab_0x40355d;
  lab_0x4036ea_2:
    // 0x403727
    return function_4032d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4041fa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4034d1;
    } else {
        uint64_t v49 = v46 + v5; // 0x403dce
        int64_t v50 = v5 + 1; // 0x403eb1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403eb8
        char v52 = v20; // 0x403eb8
        int64_t v53 = result; // 0x403eb8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403e81
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403e85
            int64_t v56 = v54 + 1; // 0x403e8a
            int64_t v57 = v51 + 1; // 0x403eb1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403e7c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403e81
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403e85
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
        goto lab_0x40355d;
    }
  lab_0x403c50:
    // 0x403c50
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403c6f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403c72
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4041fa
        goto lab_0x4041fa_2;
    }
    goto lab_0x403c7f;
  lab_0x40349d:
    // 0x40349d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4036ea_2;
    }
    goto lab_0x4034d1;
  lab_0x403475:;
    bool v60 = v15 == 1; // 0x403480
    if (v15 == -1) {
        // 0x403482
        v60 = *(char *)v1 == 0;
    }
    // 0x40348e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4034d1;
    } else {
        goto lab_0x40349d;
    }
  lab_0x40355d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403562
        *(char *)(v44 + v45) = v40;
    }
    // 0x403566
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403378_2;
}
// Address range: 0x404500 - 0x40469e
int64_t function_404500(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404502
    int32_t * v3 = __errno_location(); // 0x40451c
    int64_t v4 = (int64_t)g18; // 0x404521
    int32_t v5 = *v3; // 0x40452b
    int64_t v6 = v4; // 0x404541
    if (v2 >= (int64_t)*(int32_t *)0x60d250) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404699
            function_405920(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404550
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404557
        int64_t v9; // 0x404500
        if (g18 == &g19) {
            int64_t v10 = function_405730(0, v8); // 0x40467a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g19); // 0x40467f
            *(int64_t *)&g18 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405730(v4, v8); // 0x40456b
            *(int64_t *)&g18 = v12;
            v9 = v12;
        }
        // 0x40457a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g21; // 0x40457a
        int32_t v14 = v7; // 0x404581
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g21 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4045b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4045bb
    int64_t * v17 = (int64_t *)v15; // 0x4045be
    uint64_t v18 = *v17; // 0x4045be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4045c1
    int64_t result = *v19; // 0x4045c1
    int64_t v20; // 0x404500
    uint64_t v21 = function_4032d0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4045e4
    if (v18 > v21) {
        // 0x40465b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4045f7
    *v17 = v22;
    if (result != (int64_t)&g34) {
        // 0x404607
        free((int64_t *)result);
    }
    int64_t result2 = function_4056d0(v22); // 0x404621
    *v19 = result2;
    int64_t v23; // 0x404500
    function_4032d0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40465b
    *v3 = v5;
    return result2;
}
// Address range: 0x4046a0 - 0x4046d4
int64_t function_4046a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4046a7
    int64_t result = function_4058d0(a1 == 0 ? (int64_t)&g35 : a1, 56); // 0x4046c6
    return result;
}
// Address range: 0x4046e0 - 0x4046ef
int64_t function_4046e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g35 : a1); // 0x4046ec
    return result;
}
// Address range: 0x4046f0 - 0x4046ff
int64_t function_4046f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g35 : a1; // 0x4046f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g35;
}
// Address range: 0x404700 - 0x404733
int64_t function_404700(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g35 + 8 : a1 + 8; // 0x404719
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40471e
    uint32_t v3 = *v2; // 0x40471e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404722
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404740 - 0x404753
int64_t function_404740(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g35 + 4 : a1 + 4); // 0x40474c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404760 - 0x40478b
int64_t function_404760(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g35 : a1; // 0x404768
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404785
        abort();
        // UNREACHABLE
    }
    // 0x40477c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g35;
}
// Address range: 0x404790 - 0x404802
int64_t function_404790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g35 : a5; // 0x4047b2
    int32_t * v2 = __errno_location(); // 0x4047bb
    uint32_t v3 = *(int32_t *)v1; // 0x4047db
    int64_t result = function_4032d0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4047ea
    return result;
}
// Address range: 0x404810 - 0x4048f1
int64_t function_404810(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g35 : a4; // 0x404832
    int32_t * v2 = __errno_location(); // 0x404838
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404857
    int32_t * v4 = (int32_t *)v1; // 0x40485a
    int64_t v5 = function_4032d0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404875
    int64_t v6 = v5 + 1; // 0x40487a
    int64_t result = function_4056d0(v6); // 0x40488f
    function_4032d0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4048d4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4048dd
    return result;
}
// Address range: 0x404900 - 0x40490a
int64_t function_404900(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404900
    return function_404810(a1, a2, 0, a3);
}
// Address range: 0x404910 - 0x4049a5
int64_t function_404910(void) {
    uint32_t v1 = *(int32_t *)&g21; // 0x404910
    int64_t v2 = v1; // 0x404910
    int64_t v3 = v2; // 0x404924
    if (v1 >= 2) {
        int64_t v4 = &g21;
        int64_t v5 = v4 + 16; // 0x404943
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g18 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404940
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x40495d
    if (g19 != 0x60d2c0) {
        // 0x40495f
        free((int64_t *)g19);
        g19 = 256;
        *(int64_t *)&g20 = (int64_t)&g34;
        v6 = &g49;
    }
    int64_t result = v6; // 0x404981
    if (g18 != &g19) {
        // 0x404983
        free(g18);
        *(int64_t *)&g18 = (int64_t)&g19;
        result = &g49;
    }
    // 0x404996
    *(int32_t *)&g21 = 1;
    return result;
}
// Address range: 0x4049b0 - 0x4049c1
int64_t function_4049b0(void) {
    // 0x4049b0
    int64_t v1; // 0x4049b0
    return function_404500(v1, v1, -1, (int64_t *)&g35);
}
// Address range: 0x4049d0 - 0x4049da
int64_t function_4049d0(void) {
    // 0x4049d0
    int64_t v1; // 0x4049d0
    return function_404500(v1, v1, v1, (int64_t *)&g35);
}
// Address range: 0x4049e0 - 0x4049f6
int64_t function_4049e0(int64_t a1) {
    // 0x4049e0
    return function_404500(0, a1, -1, (int64_t *)&g35);
}
// Address range: 0x404a00 - 0x404a12
int64_t function_404a00(int64_t a1, int64_t a2) {
    // 0x404a00
    return function_404500(0, a1, a2, (int64_t *)&g35);
}
// Address range: 0x404a20 - 0x404a88
int64_t function_404a20(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404a30
    return function_404500((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404a90 - 0x404af4
int64_t function_404a90(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404aa0
    return function_404500((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404b00 - 0x404b0c
int64_t function_404b00(int64_t a1, int64_t a2) {
    // 0x404b00
    return function_404a20(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404b10 - 0x404b1f
int64_t function_404b10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404b10
    return function_404a90(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404b20 - 0x404b90
int64_t function_404b20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g35); // 0x404b2d
    int128_t v2 = __asm_movdqa(g36); // 0x404b35
    int128_t v3 = __asm_movdqa(g37); // 0x404b3d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404b52
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404b68
    uint32_t v6 = *v5; // 0x404b68
    uint32_t v7 = (int32_t)a3 % 32; // 0x404b6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404500(0, a1, a2, &v4);
}
// Address range: 0x404b90 - 0x404b9d
int64_t function_404b90(int64_t a1, int64_t a2) {
    // 0x404b90
    return function_404b20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404ba0 - 0x404bb1
int64_t function_404ba0(int64_t a1) {
    // 0x404ba0
    return function_404b20(a1, -1, 58);
}
// Address range: 0x404bc0 - 0x404bca
int64_t function_404bc0(void) {
    // 0x404bc0
    int64_t v1; // 0x404bc0
    return function_404b20(v1, v1, 58);
}
// Address range: 0x404bd0 - 0x404c3e
int64_t function_404bd0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404bea
    return function_404500(a1, a3, -1, &v1);
}
// Address range: 0x404c40 - 0x404cac
int64_t function_404c40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g35); // 0x404c47
    int128_t v2 = __asm_movdqa(g36); // 0x404c4f
    int128_t v3 = __asm_movdqa(g37); // 0x404c57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404c79
    if (a2 == 0 || a3 == 0) {
        // 0x404ca7
        abort();
        // UNREACHABLE
    }
    // 0x404c8a
    return function_404500(a1, a4, a5, &v4);
}
// Address range: 0x404cb0 - 0x404cb9
int64_t function_404cb0(void) {
    // 0x404cb0
    int64_t v1; // 0x404cb0
    return function_404c40(v1, v1, v1, v1, -1);
}
// Address range: 0x404cc0 - 0x404cd7
int64_t function_404cc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404cc0
    return function_404c40(0, a1, a2, a3, -1);
}
// Address range: 0x404ce0 - 0x404cf3
int64_t function_404ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404ce0
    return function_404c40(0, a1, a2, a3, a4);
}
// Address range: 0x404d00 - 0x404d0a
int64_t function_404d00(void) {
    // 0x404d00
    int64_t v1; // 0x404d00
    return function_404500(v1, v1, v1, &g17);
}
// Address range: 0x404d10 - 0x404d22
int64_t function_404d10(int64_t a1, int64_t a2) {
    // 0x404d10
    return function_404500(0, a1, a2, &g17);
}
// Address range: 0x404d30 - 0x404d41
int64_t function_404d30(void) {
    // 0x404d30
    int64_t v1; // 0x404d30
    return function_404500(v1, v1, -1, &g17);
}
// Address range: 0x404d50 - 0x404d66
int64_t function_404d50(int64_t a1) {
    // 0x404d50
    return function_404500(0, a1, -1, &g17);
}
// Address range: 0x404d70 - 0x404d8b
int64_t function_404d70(int64_t data, int64_t nmemb, int64_t stream) {
    // 0x404d70
    fwrite((int64_t *)data, 1, (int32_t)nmemb, (struct _IO_FILE *)stream);
    return 0;
}
// Address range: 0x404d90 - 0x404ddd
int64_t function_404d90(int64_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a1; // 0x404d99
    struct _IO_FILE * v2 = (struct _IO_FILE *)a3;
    if (v1 < 0x10000) {
        // 0x404da1
        __fprintf_chk(v2, 1, "\\u%04X", v1);
        return -1;
    }
    // 0x404dc0
    __fprintf_chk(v2, 1, "\\U%08X", v1);
    return -1;
}
// Address range: 0x404de0 - 0x404e65
int64_t function_404de0(int64_t a1, int64_t a2) {
    if (a2 == 0) {
        // 0x404e38
        error(1, (int32_t)"cannot convert U+%04X to local character set" ^ (int32_t)"cannot convert U+%04X to local character set", dcgettext(NULL, "cannot convert U+%04X to local character set", 5));
        return -1;
    }
    // 0x404df2
    dcgettext(NULL, (char *)a2, 5);
    error(1, (int32_t)"cannot convert U+%04X to local character set: %s" ^ (int32_t)"cannot convert U+%04X to local character set: %s", dcgettext(NULL, "cannot convert U+%04X to local character set: %s", 5));
    return -1;
}
// Address range: 0x404e70 - 0x405060
int64_t function_404e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = g40; // 0x404e95
    int64_t v1 = g39; // 0x404e95
    if (g40 == 0) {
        int64_t tocode = function_405d70(); // 0x404ee0
        bool v2; // 0x404e70
        int64_t v3 = v2 ? -1 : 1; // 0x404ef2
        int64_t v4 = (int64_t)"UTF-8"; // 0x404e70
        int64_t v5 = tocode; // 0x404e70
        int64_t v6 = 6; // 0x404ef2
        unsigned char v7 = *(char *)v5; // 0x404ef2
        char v8 = *(char *)v4; // 0x404ef2
        char v9 = v8; // 0x404ef2
        bool v10 = false; // 0x404ef2
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
        g39 = !((v7 < v11 | v10)) == v7 < v11;
        result = tocode;
        v1 = 1;
        if ((v7 >= v11 && !v10) != v7 < v11) {
            int64_t * v12 = iconv_open((char *)tocode, "UTF-8"); // 0x405028
            int64_t v13 = (int64_t)v12; // 0x405028
            g38 = v13;
            int64_t v14 = v13; // 0x405038
            if (v12 == (int64_t *)-1) {
                // 0x405048
                v14 = (int64_t)iconv_open("ASCII", "UTF-8");
                g38 = v14;
            }
            // 0x40503a
            result = v14;
            v1 = g39;
        }
        // 0x404f10
        g40 = 1;
    }
    // 0x404e97
    if ((int32_t)v1 == 0 == g38 == -1) {
        // 0x404ecd
        return result;
    }
    int64_t result3; // 0x404e70
    int64_t v15; // 0x404e70
    int64_t v16; // 0x404e70
    int64_t v17; // bp-110, 0x404e70
    if ((int32_t)a1 < 128) {
        // 0x404eae
        v17 = 0x100000000000000 * a1 >> 56;
        result3 = result;
        v15 = v1;
        v16 = 1;
    } else {
        int64_t result2 = function_405080((char *)&v17, a1 & 0xffffffff, 6); // 0x404f2f
        result3 = result2;
        v15 = g39;
        v16 = 0x100000000 * result2 >> 32;
        if ((int32_t)result2 < 0) {
            // 0x404ecd
            return result2;
        }
    }
    // 0x404ebc
    if ((int32_t)v15 != 0) {
        // 0x404ecd
        return result3;
    }
    int64_t inbuf = &v17; // bp-104, 0x404f60
    int64_t inbytesleft = v16; // bp-96, 0x404f76
    int64_t v18; // bp-72, 0x404e70
    int64_t outbuf = &v18; // bp-88, 0x404f8a
    int64_t outbytesleft = 25; // bp-80, 0x404f8f
    int32_t result4 = iconv((int64_t *)g38, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x404f98
    if (result4 == -1 || inbytesleft != 0) {
        // 0x404ecd
        return result4;
    }
    int32_t result5 = iconv((int64_t *)g38, NULL, NULL, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x404fc0
    return result5;
}
// Address range: 0x405060 - 0x40507f
int64_t function_405060(int64_t a1, int64_t a2, int32_t a3) {
    // 0x405060
    return function_404e70(a2 & 0xffffffff, 0x404d70, a3 == 0 ? 0x404d90 : 0x404de0, a1);
}
// Address range: 0x405080 - 0x40512c
int64_t function_405080(char * a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x405080
    if (v1 < 128) {
        // 0x405120
        return 0xfffffffe;
    }
    int64_t v2 = (int64_t)a1;
    if (v1 < 2048) {
        // 0x4050e0
        if ((int32_t)a3 < 2) {
            // 0x405120
            return 0xfffffffe;
        }
        // 0x4050c8
        *a1 = (char)(a2 / 64) | -64;
        *(char *)(v2 + 1) = (char)a2 % 64 | -128;
        return 2;
    }
    int64_t v3; // 0x405080
    int64_t result; // 0x405080
    if (v1 < 0x10000) {
        // 0x405099
        if ((a2 & 0xfffff800) == 0xd800) {
            // 0x405120
            return 0xffffffff;
        }
        // 0x4050aa
        v3 = a2;
        result = 3;
        if ((int32_t)a3 < 3) {
            // 0x405120
            return 0xfffffffe;
        }
    } else {
        // 0x4050f0
        if (v1 >= 0x110000) {
            // 0x405120
            return 0xffffffff;
        }
        // 0x4050f8
        if ((int32_t)a3 < 4) {
            // 0x405120
            return 0xfffffffe;
        }
        // 0x4050fd
        *(char *)(v2 + 3) = (char)a2 % 64 | -128;
        v3 = a2 / 64 & 0x3feffff | 0x10000;
        result = 4;
    }
    // 0x4050b4
    *(char *)(v2 + 2) = (char)v3 % 64 | -128;
    uint64_t v4 = v3 / 64 & 0x3fff7ff | 2048;
    *a1 = (char)(v4 / 64) | -64;
    *(char *)(v2 + 1) = (char)v4 % 64 | -128;
    return result;
}
// Address range: 0x405130 - 0x40550d
int64_t function_405130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4051c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40514c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405166
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4051ab
    if (a6 < 10) {
        // 0x4051ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4052b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405510 - 0x405530
int64_t function_405510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405510
    if (a5 == 0) {
        // 0x40552b
        return function_405130(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x405517
    v1++;
    int64_t v2 = v1; // 0x405529
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405520
        v1++;
        v2 = v1;
    }
    // 0x40552b
    return function_405130(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x405530 - 0x405590
int64_t function_405530(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405530
    int64_t v3 = &v2; // 0x405530
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405563
    int64_t v6; // 0x40554d
    int64_t * v7; // 0x40556b
    int64_t v8; // 0x40556b
    int64_t v9; // 0x405577
    if (v5 < 48) {
        // 0x405540
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405583
            break;
        }
    } else {
        // 0x40556b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405583
            break;
        }
    }
    int64_t v10 = 10; // 0x405561
    while (v4 != 9) {
        // 0x405559
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405540
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405583
                break;
            }
        } else {
            // 0x40556b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405583
                break;
            }
        }
        // 0x405559
        v10 = 10;
    }
    // 0x405583
    return function_405130(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x405590 - 0x40564c
int64_t function_405590(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x405590
    int64_t v1; // bp-168, 0x405590
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405590
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405590
    int64_t v8; // 0x405590
    int64_t v9; // bp-56, 0x405590
    int64_t v10; // 0x4055f5
    int64_t v11; // 0x405619
    if ((int32_t)v6 < 48) {
        // 0x4055e0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405630
            break;
        }
    } else {
        // 0x405612
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405630
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40560a
    int64_t v13 = 10; // 0x40560a
    while (v5 != 9) {
        // 0x40560c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4055e0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405630
                break;
            }
        } else {
            // 0x405612
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405630
                break;
            }
        }
        // 0x405602
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405630
    int64_t v14; // bp-136, 0x405590
    int64_t result = function_405130(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40563f
    return result;
}
// Address range: 0x405650 - 0x4056c4
int64_t function_405650(int64_t a1) {
    // 0x405650
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x4056b3
    return fputs_unlocked(v1, g23);
}
// Address range: 0x4056d0 - 0x4056ea
int64_t function_4056d0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4056d4
    if (size != 0 != (mem == NULL)) {
        // 0x4056e3
        return (int64_t)mem;
    }
    // 0x4056e5
    function_405920(size);
    // UNREACHABLE
}
// Address range: 0x4056f0 - 0x405711
int64_t function_4056f0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4056f3
    int64_t v2 = v1; // 0x4056f3
    if (v2 < 0) {
        // 0x40570b
        function_405920(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405709
        return function_4056d0(v2);
    }
    // 0x40570b
    function_405920(v2);
    // UNREACHABLE
}
// Address range: 0x405720 - 0x405722
int64_t function_405720(void) {
    // 0x405720
    int64_t v1; // 0x405720
    return function_4056d0(v1);
}
// Address range: 0x405730 - 0x405766
int64_t function_405730(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405758
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405741
    if (a2 != 0 != (mem == NULL)) {
        // 0x405750
        return (int64_t)mem;
    }
    // 0x405761
    function_405920(a1);
    // UNREACHABLE
}
// Address range: 0x405770 - 0x405791
int64_t function_405770(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405773
    int64_t v2 = v1; // 0x405773
    if (v2 < 0) {
        // 0x40578b
        function_405920(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405789
        return function_405730(a1, v2);
    }
    // 0x40578b
    function_405920(a1);
    // UNREACHABLE
}
// Address range: 0x4057a0 - 0x405826
int64_t function_4057a0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4057fb
            function_405920(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405730(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4057e3
    if (a2 == 0) {
        // 0x405808
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4057e8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4057fb
        function_405920(a1);
        // UNREACHABLE
    }
    // 0x4057ca
    *(int64_t *)a2 = v2;
    return function_405730(a1, v2 * a3);
}
// Address range: 0x405830 - 0x405880
int64_t function_405830(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405830
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40587a
            function_405920(a1);
            // UNREACHABLE
        }
        // 0x405852
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405730(a1, v1);
    }
    if (a2 == 0) {
        // 0x405865
        *(int64_t *)a2 = 128;
        return function_405730(0, 128);
    }
    // 0x405878
    if (a2 < 0) {
        // 0x40587a
        function_405920(a1);
        // UNREACHABLE
    }
    // 0x405852
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405730(a1, v1);
}
// Address range: 0x405880 - 0x405897
int64_t function_405880(int64_t a1, int64_t a2) {
    // 0x405880
    return (int64_t)memset((int64_t *)function_4056d0(a1), 0, (int32_t)a1);
}
// Address range: 0x4058a0 - 0x4058ce
int64_t function_4058a0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4058a7
    if ((int64_t)v1 < 0) {
        // 0x4058c9
        function_405920(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4058c9
        function_405920(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4058ba
    if (mem != NULL) {
        // 0x4058c4
        return (int64_t)mem;
    }
    // 0x4058c9
    function_405920(nmemb);
    // UNREACHABLE
}
// Address range: 0x4058d0 - 0x4058f8
int64_t function_4058d0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4056d0(a2); // 0x4058df
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405900 - 0x405913
int64_t function_405900(int64_t str) {
    // 0x405900
    return function_4058d0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405920 - 0x405951
int64_t function_405920(int64_t a1) {
    // 0x405920
    error(g16, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405960 - 0x4059bd
int64_t function_405960(void) {
    // 0x405960
    int64_t v1; // 0x405960
    int64_t v2 = function_405c90(v1, v1); // 0x405966
    if ((int32_t)v2 >= 0) {
        // 0x405971
        return v2 & 0xffffffff;
    }
    // 0x405980
    if (ferror(g23) == 0) {
        // 0x405990
        error(g16, *__errno_location(), dcgettext(NULL, "cannot perform formatted output", 5));
    }
    // 0x405971
    return v2 & 0xffffffff;
}
// Address range: 0x4059c0 - 0x405a54
int64_t function_4059c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4059c0
    int64_t v1; // 0x4059c0
    if ((char)v1 != 0) {
        // 0x4059e4
        int128_t v2; // 0x4059c0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x405a1b
    int64_t v3; // bp-184, 0x4059c0
    return &v3;
}
// Address range: 0x405a60 - 0x405ab9
int64_t function_405a60(int64_t stream) {
    // 0x405a60
    int64_t v1; // 0x405a60
    int64_t v2 = function_405bd0(stream, v1, v1); // 0x405a69
    if ((int32_t)v2 >= 0) {
        // 0x405a74
        return v2 & 0xffffffff;
    }
    // 0x405a80
    if (ferror((struct _IO_FILE *)stream) == 0) {
        // 0x405a8c
        error(g16, *__errno_location(), dcgettext(NULL, "cannot perform formatted output", 5));
    }
    // 0x405a74
    return v2 & 0xffffffff;
}
// Address range: 0x405ac0 - 0x405b4f
int64_t function_405ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405ac0
    int64_t v1; // 0x405ac0
    if ((char)v1 != 0) {
        // 0x405adf
        int128_t v2; // 0x405ac0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x405b16
    return function_405a60(a1);
}
// Address range: 0x405b50 - 0x405bca
int64_t function_405b50(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405b5b
    int64_t v2 = (int64_t)&g9; // 0x405b5b
    int32_t * pwc; // 0x405b50
    int64_t v3; // 0x405b50
    int64_t n; // 0x405b50
    if (a2 == 0) {
        goto lab_0x405ba2;
    } else {
        // 0x405b5d
        if (a3 == 0) {
            // 0x405b88
            return -2;
        }
        // 0x405b69
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405ba2;
        } else {
            goto lab_0x405b74;
        }
    }
  lab_0x405ba2:
    // 0x405ba2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405b50
    pwc = (int32_t *)&v4;
    goto lab_0x405b74;
  lab_0x405b74:;
    char * wstr = (char *)v3; // 0x405b7a
    int64_t ps; // 0x405b50
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405b7a
    int64_t result = v5; // 0x405b7a
    if (v5 < 0xfffffffe) {
        // 0x405b88
        return result;
    }
    int64_t result2 = result; // 0x405bb9
    if ((char)function_405d10(0, v3) == 0) {
        // 0x405bbb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405b88
    return result2;
}
// Address range: 0x405bd0 - 0x405c8d
int64_t function_405bd0(int64_t stream, int64_t a2, int64_t a3) {
    int32_t v1 = 2000; // bp-2048, 0x405bf0
    int64_t v2; // bp-2040, 0x405bd0
    int64_t v3; // 0x405bd0
    int64_t v4 = function_406410(&v2, (int64_t *)&v1, a2, a3, v3, v3, 2000, (int64_t)&g49); // 0x405bfc
    if (v4 == 0) {
        // 0x405c7e
        function_406400(stream);
        // 0x405c3c
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x405c01
    int64_t * data = (int64_t *)v4; // 0x405c1c
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x405c50
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x405c5a
            free(data);
        }
        // 0x405c3c
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x405c2b
        free(data);
    }
    // 0x405c33
    if (nmemb > -1) {
        // 0x405c3c
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x405c73
    *__errno_location() = 75;
    // 0x405c7e
    function_406400(stream);
    // 0x405c3c
    return 0xffffffff;
}
// Address range: 0x405c90 - 0x405ca2
int64_t function_405c90(int64_t a1, int64_t a2) {
    // 0x405c90
    return function_405bd0((int64_t)g23, a1, a2);
}
// Address range: 0x405cb0 - 0x405d0d
int64_t function_405cb0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405cb7
    int64_t v2; // 0x405cb0
    int64_t result = function_4062e0(a1, v2); // 0x405cc8
    if ((v2 & 32) != 0) {
        // 0x405cf0
        if ((int32_t)result == 0) {
            // 0x405cf4
            *__errno_location() = 0;
        }
        // 0x405cea
        return 0xffffffff;
    }
    // 0x405cd1
    if ((int32_t)result == 0) {
        // 0x405cea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405cd8
    if (v1 == 0) {
        // 0x405cda
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405cea
    return result2;
}
// Address range: 0x405d10 - 0x405d6e
int64_t function_405d10(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405d16
    if (locale == NULL) {
        // 0x405d43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405d16
    bool v2; // 0x405d10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x405d10
    int64_t v5 = v1; // 0x405d10
    int64_t v6 = 2; // 0x405d35
    unsigned char v7 = *(char *)v5; // 0x405d35
    char v8 = *(char *)v4; // 0x405d35
    char v9 = v8; // 0x405d35
    bool v10 = false; // 0x405d35
    while (v7 == v8) {
        // 0x405d28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405d41
    int64_t v13 = v1; // 0x405d41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405d43
        return 0;
    }
    int64_t v14 = 6; // 0x405d41
    unsigned char v15 = *(char *)v13; // 0x405d5d
    char v16 = *(char *)v12; // 0x405d5d
    char v17 = v16; // 0x405d5d
    bool v18 = false; // 0x405d5d
    while (v15 == v16) {
        // 0x405d50
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
// Address range: 0x405d70 - 0x4062d2
int64_t function_405d70(void) {
    char * v1 = nl_langinfo(14); // 0x405d86
    char * v2 = g41; // 0x405d8b
    char * v3; // 0x405d70
    int64_t v4; // 0x405d70
    int64_t v5; // 0x405d70
    int64_t v6; // 0x405d70
    int64_t v7; // 0x405d70
    int32_t size; // 0x405d70
    int32_t size2; // 0x405d70
    int32_t len; // 0x405e42
    int64_t v8; // 0x405e42
    char * env_val; // 0x405e2d
    if (v2 == NULL) {
        // 0x405e28
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405e95;
        } else {
            // 0x405e3a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405e95;
            } else {
                // 0x405e3f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405e2d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4062c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405e95;
                    } else {
                        // 0x406239
                        size2 = len + 14;
                        goto lab_0x405e5b;
                    }
                } else {
                    goto lab_0x405e5b;
                }
            }
        }
    } else {
        // 0x405d70
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405daa;
    }
  lab_0x4060dc:;
    // 0x4060dc
    struct _IO_FILE * stream; // 0x405f1b
    int32_t v10 = __uflow(stream); // 0x4060df
    int64_t v11; // 0x405d70
    int64_t v12 = v11; // 0x4060e9
    int64_t v13; // 0x405d70
    int64_t v14 = v13; // 0x4060e9
    int32_t v15 = v10; // 0x4060e9
    int64_t v16; // 0x405d70
    int64_t v17 = v16; // 0x4060e9
    int64_t v18 = v11; // 0x4060e9
    int64_t v19 = v13; // 0x4060e9
    int64_t v20 = v16; // 0x4060e9
    if (v10 == -1) {
        // break -> 0x4060ef
        goto lab_0x4060ef;
    }
    goto lab_0x405f69;
  lab_0x405f5e:;
    // 0x405f5e
    int64_t v90; // 0x405d70
    int64_t * v32; // 0x405f50
    *v32 = v90 + 1;
    int64_t v89; // 0x405d70
    v12 = v89;
    int64_t v91; // 0x405d70
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405d70
    v17 = v92;
    goto lab_0x405f69;
  lab_0x405f69:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405d70
    int32_t v25; // bp-120, 0x405d70
    int32_t v26; // bp-184, 0x405d70
    int64_t v27; // 0x405f1b
    int64_t v28; // 0x405f38
    int64_t v29; // 0x405f3d
    int64_t * v30; // 0x405f54
    switch (c) {
        case 32: {
            goto lab_0x405f50;
        }
        case 10: {
            goto lab_0x405f50;
        }
        case 9: {
            goto lab_0x405f50;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406141
            int32_t v33; // 0x405d70
            char v34; // 0x405d70
            int32_t v35; // 0x40614e
            if (v31 < *v30) {
                // 0x406120
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40614b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406141
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406120
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40614b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406130
                v36 = v33;
            }
            // 0x40621f
            if (v36 == -1) {
                // break -> 0x4060ef
                break;
            }
            goto lab_0x405f50;
        }
        default: {
            // 0x405f7f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4060ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405fa8
            int64_t v39 = v37 + 4; // 0x405faa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405fb6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405fb8
            while (v41 == 0) {
                // 0x405fa8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405fd6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405fe2
            int64_t v45 = v43 + 4; // 0x405fe4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405ff0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405ff2
            while (v47 == 0) {
                // 0x405fe2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405fdf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406008
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406018
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40601c
            int64_t v52 = v51 + v48; // 0x406025
            int64_t * mem; // 0x405d70
            int64_t v53; // 0x405d70
            int64_t v54; // 0x405d70
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40615b
                int64_t v56 = v55 + 3; // 0x406167
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406041
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406050
            if (mem == NULL) {
                // 0x40627c
                free((int64_t *)v21);
                function_4062e0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x405ef4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406068
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406072
            uint32_t v62 = (int32_t)v59; // 0x406075
            int64_t v63; // 0x405d70
            if (v62 >= 8) {
                // 0x406184
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40619e
                int64_t v66 = v61 - v65; // 0x4061a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4061ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4061be
                    int64_t v70 = v69 & 0xffffffff; // 0x4061be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4061bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40624f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406087
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40608b
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
            int64_t v73 = v51 + 1; // 0x40609b
            int64_t v74 = v60 - 1; // 0x40609f
            uint32_t v75 = (int32_t)v73; // 0x4060a4
            int64_t v76; // 0x405d70
            if (v75 >= 8) {
                // 0x4061d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4061dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4061ec
                int64_t v80 = v74 - v79; // 0x4061f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4061fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40620b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406209
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406266
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40626e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4060b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4060ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4062b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4060ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405f5e;
            } else {
                goto lab_0x4060dc;
            }
        }
    }
  lab_0x405f50:;
    int64_t v93 = v23; // 0x405d70
    int64_t v94 = v22; // 0x405d70
    int64_t v95 = v21; // 0x405d70
    goto lab_0x405f50_2;
  lab_0x405e95:;
    int64_t * mem3 = malloc(size); // 0x405e95
    int64_t v97 = (int64_t)&g9; // 0x405ea0
    int64_t v98; // 0x405d70
    int64_t path; // 0x405d70
    if (mem3 == NULL) {
        goto lab_0x405e72;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405e95
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405eb6;
    }
  lab_0x405daa:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x405d9d
    char v100 = *v3; // 0x405daa
    int64_t v101; // 0x405d70
    if (v100 == 0) {
        // 0x405e04
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405d70
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405d70
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405df0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405df7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405dc0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405dcd
        char v107 = *(char *)v106; // 0x405dd2
        v102 = v107;
        if (v107 == 0) {
            // 0x405e04
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405ddb
    v104 = v103 + 1;
  lab_0x405df7:
    // 0x405e04
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405e72:;
    char * v108 = (char *)v97;
    g41 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405daa;
  lab_0x405eb6:;
    int64_t v109 = v98 + path; // 0x405eb6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405ee2
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x405f11
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406242
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x405f35
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405f50_2:;
                uint64_t v96 = *v32; // 0x405f50
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4060dc;
                } else {
                    goto lab_0x405f5e;
                }
            }
          lab_0x4060ef:
            // 0x4060ef
            function_4062e0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40610e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405ef4;
  lab_0x405e5b:;
    int64_t * mem4 = malloc(size2); // 0x405e5b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x405f01
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405eb6;
    } else {
        goto lab_0x405e72;
    }
  lab_0x405ef4:
    // 0x405ef4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405e72;
}
// Address range: 0x4062e0 - 0x40635b
int64_t function_4062e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4062e7
    if (fileno(stream) < 0) {
        // 0x406347
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4062fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40632b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406347
            return fclose(stream);
        }
    }
    // 0x4062fc
    if ((int32_t)function_406360(a1, v1) == 0) {
        // 0x406347
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406308
    int32_t v3 = *v2; // 0x406310
    int64_t result = fclose(stream); // 0x40631e
    if (v3 != 0) {
        // 0x406350
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406320
    return result;
}
// Address range: 0x406360 - 0x4063a0
int64_t function_406360(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40637a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40637a
        return fflush(stream);
    }
    // 0x406388
    function_4063a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4063a0 - 0x4063f7
int64_t function_4063a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4063a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4063aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4063db
    int64_t result = -1; // 0x4063e4
    if (v1 != -1) {
        // 0x4063e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4063f2
    return result;
}
// Address range: 0x406400 - 0x406404
int64_t function_406400(int64_t a1) {
    // 0x406400
    int64_t result; // 0x406400
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x406410 - 0x407f29
int64_t function_406410(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x406410
    int64_t v1; // bp-1416, 0x406410
    int64_t v2; // bp-1656, 0x406410
    if ((int32_t)function_408150(a3, &v1, &v2) < 0) {
        // 0x406a80
        return 0;
    }
    int64_t v3 = &v2; // 0x40641b
    int64_t v4; // bp-1384, 0x406410
    int64_t v5; // bp-1640, 0x406410
    int64_t v6; // 0x406410
    if ((int32_t)function_407f30(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x407367
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x407383
            free((int64_t *)v6);
        }
        // 0x407388
        *__errno_location() = 22;
        // 0x406a80
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40647b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x406483
    uint64_t v9 = v8 + v6; // 0x406487
    int64_t v10; // 0x406410
    char * v11; // 0x406410
    int64_t v12; // 0x406410
    if (v9 < v8) {
        // 0x406b30
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406a39;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x406b30
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x406a39;
        } else {
            uint64_t size = v9 + 6; // 0x406497
            if (size < 4000) {
                // 0x4065e0
                v12 = 0;
                int64_t v13; // bp-1784, 0x406410
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x4064d4;
            } else {
                if (size == -1) {
                    // 0x406b30
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x406a39;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x4064b8
                    if (mem == NULL) {
                        // 0x406b30
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x406a39;
                    } else {
                        // 0x4064cd
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x4064d4;
                    }
                }
            }
        }
    }
  lab_0x406a00_2:;
    // 0x406a00
    int64_t v14; // 0x406410
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x406a08
    int64_t v17 = v16; // 0x406a16
    int64_t v18 = v16; // 0x406a16
    int64_t v19 = v15; // 0x406a16
    int64_t v20; // 0x406410
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x406c28;
    } else {
        goto lab_0x406a21;
    }
  lab_0x406a39:
    // 0x406a39
    if (v6 != (int64_t)&v4) {
        // 0x406a50
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x406a6c
        free((int64_t *)v6);
    }
    // 0x406a71
    *(int32_t *)v10 = 12;
    // 0x406a80
    return 0;
  lab_0x4064d4:
    // 0x4064d4
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x40650d
    int64_t v23 = *v22; // 0x40650d
    int64_t v24 = 0; // 0x406513
    int64_t v25 = v20; // 0x406513
    int64_t v26 = v21; // 0x406513
    int64_t v27 = 0; // 0x406513
    int64_t v28; // 0x406410
    int64_t v29; // 0x406410
    int64_t v30; // 0x406410
    int64_t v31; // 0x406410
    int64_t v32; // 0x406410
    int64_t v33; // 0x406410
    int64_t v34; // 0x406410
    if (v23 == a3) {
        goto lab_0x406b23;
    } else {
        int64_t v35 = v23 - a3; // 0x406519
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40652b;
    }
  lab_0x406b23:;
    int64_t v36 = v24; // 0x406b26
    float80_t v37; // 0x406410
    float80_t v38 = v37; // 0x406b26
    float80_t v39; // 0x406410
    float80_t v40 = v39; // 0x406b26
    int64_t v41 = v25; // 0x406b26
    int64_t v42 = v26; // 0x406b26
    int64_t v43 = v27; // 0x406b26
    int64_t v44; // 0x406410
    int64_t v45 = v44; // 0x406b26
    goto lab_0x406688;
  lab_0x406688:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x406410
    int64_t v51; // 0x406410
    int64_t v52; // 0x406410
    int64_t v53; // 0x406410
    int64_t v54; // 0x406410
    int64_t v55; // 0x406410
    int64_t v56; // 0x406410
    int64_t v57; // 0x406410
    int64_t dest_mem2; // 0x406410
    int64_t dest_mem3; // 0x406410
    int64_t v58; // 0x406410
    float80_t v59; // 0x406410
    float80_t v60; // 0x406410
    float80_t v61; // 0x406410
    float80_t v62; // 0x406410
    float80_t v63; // 0x406410
    uint64_t v64; // 0x4077b6
    char * v65; // 0x40669c
    char v66; // 0x40669c
    int64_t v67; // 0x4066c4
    uint32_t v68; // 0x4066c8
    int64_t v69; // 0x406aa5
    char v70; // 0x406410
    if (v1 == v49) {
        // 0x4077b0
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x407f1a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x407812;
            } else {
                goto lab_0x406a00_2;
            }
        } else {
            // 0x4077c0
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x407812;
            } else {
                if (v47 != 0) {
                    // 0x407ddd
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406a00_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x407de3
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x4077de;
                        } else {
                            goto lab_0x407def;
                        }
                    }
                } else {
                    // 0x4077ce
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x4077de;
                    } else {
                        goto lab_0x407def;
                    }
                }
            }
        }
    } else {
        // 0x40669c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x4066a1
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x407270
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x406a00_2;
                } else {
                    goto lab_0x406b02;
                }
            } else {
                // 0x406ab2
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x406b02;
                } else {
                    if (v47 != 0) {
                        // 0x4073a0
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x406a00_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x4073a6
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x406ad0;
                            } else {
                                goto lab_0x4073b2;
                            }
                        }
                    } else {
                        // 0x406ac0
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x406ad0;
                        } else {
                            goto lab_0x4073b2;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            // 0x4066b9
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g45 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x407030
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b07;
                }
                case 19: {
                    // 0x407020
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b07;
                }
                case 20: {
                    // 0x407008
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x406b07;
                }
                case 21: {
                    goto lab_0x406bf0;
                }
                case 22: {
                    goto lab_0x406bf0;
                }
                default: {
                    // 0x4066da
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x406b80
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x406b9d;
                        } else {
                            // 0x406b87
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x406710;
                            } else {
                                goto lab_0x406b9d;
                            }
                        }
                    } else {
                        goto lab_0x406710;
                    }
                }
            }
        }
    }
  lab_0x40652b:;
    int64_t v75 = v34;
    float80_t v76; // 0x406410
    float80_t v77 = v76;
    float80_t v78; // 0x406410
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x406410
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40652e
    int64_t v89 = v85; // 0x40652e
    int64_t v90 = v84; // 0x40652e
    float80_t v91 = v79; // 0x40652e
    float80_t v92 = v77; // 0x40652e
    int64_t v93 = v75; // 0x40652e
    int64_t v94 = v80; // 0x40652e
    int64_t v95 = v81; // 0x40652e
    int64_t v96 = v82; // 0x40652e
    int64_t v97 = v87; // 0x40652e
    int64_t v98; // 0x406410
    int64_t v99; // 0x406410
    int64_t v100; // 0x406410
    int64_t v101; // 0x406410
    int64_t v102; // 0x406410
    if (v82 >= v87) {
        goto lab_0x406679;
    } else {
        if (v82 != 0) {
            // 0x406610
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x406a00_2;
            } else {
                int64_t v103 = 2 * v82; // 0x406616
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40662b;
                } else {
                    goto lab_0x40661e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x406554
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40663e;
                } else {
                    goto lab_0x406560;
                }
            } else {
                goto lab_0x40661e;
            }
        }
    }
  lab_0x406679:
    // 0x406679
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x406688;
  lab_0x407812:
    // 0x407812
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40781a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40782b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x407837
    if (v12 != 0) {
        // 0x407843
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x407862
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40787e
        free((int64_t *)v6);
    }
    // 0x407883
    *a2 = v46;
    // 0x406a80
    return result;
  lab_0x406bf0:
    // 0x406bf0
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x406b07;
  lab_0x40661e:
    // 0x40661e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x406a00_2;
    } else {
        goto lab_0x40662b;
    }
  lab_0x406c28:
    // 0x406c28
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x406a21;
  lab_0x406a21:
    if (v12 == 0) {
        // 0x406b30
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x406a39;
    } else {
        // 0x406a31
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x406a39;
    }
  lab_0x406b02:
    // 0x406b02
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x406b07;
  lab_0x406710:;
    int64_t v273 = (int64_t)v11; // 0x406710
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x406717
    int64_t v275 = v273 + 1; // 0x40671b
    *v11 = 37;
    int64_t v276 = v275; // 0x406724
    if (v274 % 2 != 0) {
        // 0x406726
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x406717
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x406737
    if ((v277 & 2) != 0) {
        // 0x406739
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x406743
    if ((v277 & 4) != 0) {
        // 0x406745
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40674f
    if ((v277 & 8) != 0) {
        // 0x406751
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40675b
    if ((v277 & 16) != 0) {
        // 0x40675d
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x406767
    if ((v277 & 64) != 0) {
        // 0x406769
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x406773
    if ((v277 & 32) != 0) {
        // 0x406775
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40677d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x406781
    int64_t v293 = v290; // 0x406788
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x406797
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x4067ba
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x4067be
    int64_t v298 = v295; // 0x4067c5
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x4067d4
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x4066ca
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x406800
    int64_t v272; // 0x406410
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x406809
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x406c08;
        } else {
            if (v301 == 12) {
                // 0x4073c8
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x406830;
            } else {
                // 0x406820
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x406c00
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x406c08;
                } else {
                    goto lab_0x406830;
                }
            }
        }
    } else {
        goto lab_0x406830;
    }
  lab_0x406b07:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x406b07
    int64_t v111 = v55 + 88; // 0x406b0b
    int64_t v112 = *(int64_t *)v111; // 0x406b0f
    int64_t v113 = v49 + 1; // 0x406b12
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x406519
        int64_t v115 = v114 + v105; // 0x40651f
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
            // 0x406b48
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
                goto lab_0x406a00_2;
            } else {
                goto lab_0x406679;
            }
        } else {
            goto lab_0x40652b;
        }
    } else {
        goto lab_0x406b23;
    }
  lab_0x40662b:;
    int64_t v116 = v80 == v20; // 0x406632
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x406560;
    } else {
        goto lab_0x40663e;
    }
  lab_0x40663e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x406410
    if (v102 != 0) {
        goto lab_0x406560;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40665a
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x406c15;
        } else {
            // 0x406668
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
            goto lab_0x406679;
        }
    }
  lab_0x406560:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x406577
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x406a00_2;
    } else {
        // 0x40659d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x4065c5
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
        goto lab_0x406679;
    }
  lab_0x4077de:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x407da4
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x406a00_2;
        } else {
            // 0x407db5
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x407dca
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x407812;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x407801
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x406c15;
        } else {
            // 0x40780f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x407812;
        }
    }
  lab_0x407def:
    // 0x407def
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x406a00_2;
    } else {
        goto lab_0x4077de;
    }
  lab_0x406b9d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x406b9d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x406ba1
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x406ba5
    int64_t v123 = 0; // 0x406bac
    int64_t v124 = v122; // 0x406bac
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x406bb2
        int64_t v126 = v120; // 0x406bba
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x407b41
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x407b59
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x407b6b
            int64_t v131 = v128; // 0x407b74
            int64_t v132 = v130; // 0x407b74
            int64_t v133; // 0x406410
            int64_t v134; // 0x407b86
            if (v130 < v129) {
                // 0x407b76
                if (v121 == v128) {
                    // break -> 0x406990
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40697b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x406990
                        goto lab_0x406990;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x407b38
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x407b41
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x407b76
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x406990
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40697b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x406990
                            goto lab_0x406990;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x407b38
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x406bc4
            if (*(int32_t *)v135 != 5) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x406bd0
            int64_t v137 = v136; // 0x406bd0
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x406bdd
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x406990:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x406990
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x406994
    int64_t v142; // 0x406410
    int64_t v143; // 0x406410
    int64_t v144; // 0x406410
    if (v140 == v141) {
        goto lab_0x407040;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x4069a1
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x407ba4
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x407bad
            if (v141 == v146) {
                goto lab_0x40705e;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x407bd3
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x407bda
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x407bf3
                int64_t v152 = v151; // 0x407bfc
                int64_t v153 = v149; // 0x407bfc
                int64_t v154; // 0x406410
                int64_t v155; // 0x407c07
                if (v151 < v150) {
                    // 0x407bfe
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x406a00_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x407c1a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x406a00_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x407bc0
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x407bc9
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x407bfe
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x406a00_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x407c1a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x406a00_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x407bc0
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x4069cc;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x4069b3
            if (*(int32_t *)v156 != 5) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x4069c0
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x407040;
            } else {
                goto lab_0x4069cc;
            }
        }
    }
  lab_0x406830:
    // 0x406830
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40683d
    int64_t v160 = 0; // 0x406845
    if (v159 != -1) {
        // 0x40684b
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40713c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40686e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40687c
        if (*(int32_t *)v162 != 5) {
            // 0x40713c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40688f
        int64_t v164; // bp-8, 0x406410
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x406410
    uint64_t v165; // 0x4068a6
    if (v46 > 0xfffffffffffffffd) {
        // 0x4072d8
        v14 = v48;
        if (v47 == -1) {
            // 0x406904
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x406a00_2;
    } else {
        // 0x4068b0
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x406904
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x406fe0
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x406a00_2;
            } else {
                int64_t v167 = 2 * v47; // 0x406fe6
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x4068d2;
                } else {
                    goto lab_0x406ff2;
                }
            }
        } else {
            // 0x4068c2
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x4068d2;
            } else {
                goto lab_0x406ff2;
            }
        }
    }
  lab_0x406ad0:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x4072f9
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x406a00_2;
        } else {
            // 0x407311
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x407322
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x406b02;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x406af1
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x406c15;
        } else {
            // 0x406aff
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x406b02;
        }
    }
  lab_0x4073b2:
    // 0x4073b2
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x406a00_2;
    } else {
        goto lab_0x406ad0;
    }
  lab_0x407040:
    // 0x407040
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40705e;
  lab_0x406c08:
    // 0x406c08
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x406830;
  lab_0x406c15:
    // 0x406c15
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x406c28;
  lab_0x40705e:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x407064
    v14 = v48;
    int64_t v170; // 0x406410
    int64_t v171; // 0x406410
    int64_t * v172; // 0x406410
    int64_t v173; // 0x406410
    int64_t v174; // bp-760, 0x406410
    uint64_t size5; // 0x407068
    if (v169 == -1) {
        goto lab_0x406a00_2;
    } else {
        // 0x407079
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x4070d9;
        } else {
            // 0x407085
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x406a00_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x4070ad
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x406a00_2;
                } else {
                    goto lab_0x4070d9;
                }
            }
        }
    }
  lab_0x4069cc:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40705e;
    } else {
        // 0x4069d5
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40705e;
        } else {
            goto lab_0x406a00_2;
        }
    }
  lab_0x4068d2:
    // 0x4068d2
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x407299
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x4072b4
            if (v48 == v20 && v46 != 0) {
                // 0x4072c2
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x406904
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x4068f3
        v14 = v48;
        if (mem11 != NULL) {
            // 0x406904
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x406a00_2;
  lab_0x406ff2:
    // 0x406ff2
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x406a00_2;
    } else {
        goto lab_0x4068d2;
    }
  lab_0x4070d9:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x406410
    int64_t v181; // 0x406410
    int64_t v182; // 0x406410
    int64_t v183; // 0x406410
    int64_t v184; // 0x406410
    int64_t v185; // 0x406410
    int64_t v186; // 0x406410
    int64_t v187; // 0x406410
    int64_t v188; // 0x406410
    int64_t v189; // 0x406410
    int64_t v190; // 0x406410
    int64_t v191; // 0x406410
    int64_t v192; // 0x406410
    int64_t v193; // 0x406410
    float80_t v194; // 0x406410
    float80_t v195; // 0x406410
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x407c52
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x407c60
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
            // 0x407d8d
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
        goto lab_0x407599;
    } else {
        // 0x4070e1
        int64_t v198; // 0x406410
        float80_t v199; // 0x406410
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x4078a1
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x4078ae
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40770a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40710f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x407118
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40713c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x407c86
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x407c86
                            v181 = v187 + 3;
                            goto lab_0x407e01;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x407e01;
                            } else {
                                goto lab_0x407cc2;
                            }
                        }
                    } else {
                        // 0x407993
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x407587;
                        } else {
                            int64_t v202 = v187 + 2; // 0x4079a1
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x407eea
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x4079e8
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x4079fb
                                int64_t v207 = v176 & 0xffffffff; // 0x4079fe
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x407a0c
                                int64_t v209 = v187 + 1; // 0x407a29
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x407a3e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x407a4b
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x407599;
                        }
                    }
                } else {
                    // 0x407738
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x407738
                        v180 = v187 + 1;
                        goto lab_0x407ce7;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x407ce7;
                        } else {
                            goto lab_0x407758;
                        }
                    }
                }
            } else {
                // 0x407570
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x407587;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x407abc
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x407acd
                    char v215 = *v213; // 0x407ad4
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x407b10
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x407b1d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x407ae5
                        v182 = v218;
                        int64_t v219; // 0x407ad7
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x407599;
                }
            }
        } else {
            float80_t v220; // 0x406410
            if (v220 != 0.0L) {
                // 0x40713c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40778b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40779a
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
                // 0x407a73
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
            goto lab_0x407599;
        }
    }
  lab_0x407599:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40759c
    int64_t v229 = v228; // 0x4075a2
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x4075a4
        int64_t v232 = v231 + v224; // 0x4075a7
        int64_t v233 = v232 - v225; // 0x4075ae
        if ((v230 & 2) != 0) {
            // 0x407a53
            v229 = v233;
            int64_t v234 = v224; // 0x407a56
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x407a60
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x407a60
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x4078c5
                int64_t v238 = v224; // 0x4078cb
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x4078d9
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x4078d0
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x4078e5
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x4078f8
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
                int64_t v243 = v224; // 0x4075d1
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x4075f1
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x4075e8
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x4075fa
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x407608
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
        // 0x40713c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x407638
    int64_t dest_mem5 = v48; // 0x407645
    int64_t v250 = v248; // 0x407645
    int64_t v251 = v47; // 0x407645
    int64_t v252; // 0x406410
    if (v47 - v46 > v248) {
        goto lab_0x4076c0;
    } else {
        if (v249 < v46) {
            // 0x407892
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x406a00_2;
            } else {
                goto lab_0x4076c0;
            }
        } else {
            // 0x407650
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x4076c0;
            } else {
                if (v47 != 0) {
                    // 0x407c28
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x406a00_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x407c2e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40766e;
                        } else {
                            goto lab_0x407c3a;
                        }
                    }
                } else {
                    // 0x40765e
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40766e;
                    } else {
                        goto lab_0x407c3a;
                    }
                }
            }
        }
    }
  lab_0x4076c0:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x4076d1
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x4076ed
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x406b07;
  lab_0x407587:
    // 0x407587
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x407599;
  lab_0x407ce7:;
    char * v257 = nl_langinfo(0x10000); // 0x407d1a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x407d2b
    char v259 = *v257; // 0x407d32
    int64_t v260 = v176 & 0xffffffff; // 0x407d35
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x407d43
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x407d70
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x407d7d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x407758;
  lab_0x407758:
    // 0x407758
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
    goto lab_0x407599;
  lab_0x40766e:
    // 0x40766e
    if (v48 == 0 || v48 == v20) {
        // 0x40790b
        int64_t size7; // 0x406410
        int64_t * mem12 = malloc((int32_t)size7); // 0x407922
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x406a00_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40792e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x407959
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x4076c0;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40769d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x406a00_2;
        } else {
            // 0x4076ab
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x4076c0;
        }
    }
  lab_0x407c3a:
    // 0x407c3a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x406a00_2;
    } else {
        goto lab_0x40766e;
    }
  lab_0x407e01:;
    int64_t v265 = v187 + 4; // 0x407e01
    char v266 = *nl_langinfo(0x10000); // 0x407e4c
    int64_t v267 = v176 & 0xffffffff; // 0x407e4f
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x407e56
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x407e7d
        int64_t v270 = v265 + 1; // 0x407e85
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
    goto lab_0x407cc2;
  lab_0x407cc2:
    // 0x407cc2
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x407599;
}
// Address range: 0x407f30 - 0x408149
int64_t function_407f30(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x407f93
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x407f48
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x407f59
    g46 = v5;
    int64_t v6; // 0x407f30
    int64_t v7; // 0x407f30
    int64_t v8; // 0x407f30
    int64_t v9; // 0x407f30
    int64_t v10; // 0x407f30
    int64_t v11; // 0x407f30
    int64_t v12; // 0x407f30
    uint32_t v13; // 0x408050
    int64_t * v14; // 0x408080
    int64_t v15; // 0x408088
    uint32_t v16; // 0x4080d0
    uint32_t v17; // 0x4080a0
    int64_t * v18; // 0x408030
    int64_t v19; // 0x408030
    int64_t * v20; // 0x408040
    int64_t v21; // 0x408040
    int64_t * v22; // 0x408018
    int64_t v23; // 0x408018
    int64_t * v24; // 0x408000
    int64_t v25; // 0x408000
    int64_t * v26; // 0x408120
    uint32_t v27; // 0x407fe0
    int64_t v28; // 0x408120
    int64_t * v29; // 0x408110
    int64_t v30; // 0x408110
    uint32_t v31; // 0x407fc0
    int64_t * v32; // 0x408138
    int64_t v33; // 0x408138
    int64_t v34; // 0x4080e3
    uint32_t v35; // 0x407fa0
    int64_t v36; // 0x4080b7
    uint32_t v37; // 0x407f68
    int32_t * v38; // 0x408050
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x407fe0
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x407fe7
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x408030
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x407ff3
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x407f86
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x407fc0
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x407fc7
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x408040
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x407fd3
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x407f86
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x407fa0
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x407fa7
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x408018
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x407fb3
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x407f86
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
            // 0x407f68
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x407f73
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x408000
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x407f7f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x407f86
            break;
        }
        case 11: {
            // 0x408050
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40805f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x408120
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40806c
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x407f86
            break;
        }
        case 12: {
            // 0x408080
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x407f86
            break;
        }
        case 15: {
            // 0x4080d0
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x4080d7
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x408110
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x4080e3
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x407f86
            break;
        }
        case 16: {
            // 0x4080a0
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x4080ab
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x408138
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x4080b7
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x407f86
            break;
        }
        default: {
            // 0x407f93
            return 0xffffffff;
        }
    }
    // 0x407f86
    v3++;
    int64_t v39 = v4 + 32; // 0x407f91
    while (v3 < v2) {
        // 0x407f50
        v4 = v39;
        v5 = *(int32_t *)v4;
        g46 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x407fe0
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x407fe7
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x408030
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x407ff3
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x407f86
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x407fc0
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x407fc7
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x408040
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x407fd3
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x407f86
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x407fa0
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x407fa7
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x408018
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x407fb3
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x407f86
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
                // 0x407f68
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x407f73
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x408000
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x407f7f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x407f86
                break;
            }
            case 11: {
                // 0x408050
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40805f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x408120
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40806c
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x407f86
                break;
            }
            case 12: {
                // 0x408080
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x407f86
                break;
            }
            case 15: {
                // 0x4080d0
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x4080d7
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x408110
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x4080e3
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x407f86
                break;
            }
            case 16: {
                // 0x4080a0
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x4080ab
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x408138
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x4080b7
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x407f86
                break;
            }
            default: {
                // 0x407f93
                return 0xffffffff;
            }
        }
        // 0x407f86
        v3++;
        v39 = v4 + 32;
    }
    // 0x407f93
    return 0;
}
// Address range: 0x408150 - 0x408e59
int64_t function_408150(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x408152
    int64_t v4 = v1 + 16; // 0x408156
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x408189
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40819e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x4081cb
    int32_t v8 = 0; // 0x4081d0
    int64_t v9 = 0; // 0x4081d0
    int64_t v10 = v3; // 0x4081d0
    int64_t v11 = a1; // 0x4081d0
    int64_t v12 = 0; // 0x4081d0
    char v13; // 0x408150
    int64_t v14; // 0x408150
    int64_t v15; // 0x408150
    int64_t v16; // 0x408150
    int64_t v17; // 0x408150
    int64_t v18; // 0x408150
    int64_t v19; // 0x408150
    int64_t v20; // 0x408150
    int64_t v21; // 0x408150
    int64_t v22; // 0x408150
    int64_t v23; // 0x408150
    int64_t v24; // 0x408150
    int64_t v25; // 0x408150
    int64_t v26; // 0x408150
    int64_t v27; // 0x408150
    int64_t v28; // 0x408150
    int64_t v29; // 0x408150
    int64_t v30; // 0x408150
    int32_t v31; // 0x408150
    int64_t v32; // 0x408150
    int64_t v33; // 0x4081c0
    int64_t v34; // 0x408210
    int64_t * v35; // 0x408233
    int64_t v36; // 0x408296
    if (v7 != 0) {
        // 0x4081c0
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x408150
        int64_t v38 = 7; // 0x408150
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x408150
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x4081c0:
            // 0x4081c0
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x408203
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x408218
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x408254
                int64_t v43 = v42; // 0x408254
                int64_t v44 = v43; // 0x40825d
                int64_t v45 = v33; // 0x40825d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x4085f0
                    char v47 = *(char *)v46; // 0x4085f4
                    int64_t v48 = v46; // 0x4085fd
                    while (v47 < 58) {
                        // 0x4085f0
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x4085ff
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x408c95
                        char v52 = *(char *)v51; // 0x408c95
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x408c99
                        int64_t v54 = v33; // 0x408cad
                        int64_t v55 = v51; // 0x408cad
                        char v56 = v52; // 0x408cad
                        int64_t v57 = v53; // 0x408cad
                        bool v58 = v52 < 58; // 0x408cad
                        bool v59 = v52 < 58; // 0x408cad
                        char v60 = v52; // 0x408cad
                        int64_t v61 = v51; // 0x408cad
                        int64_t v62; // 0x408cc2
                        int64_t v63; // 0x408c95
                        char v64; // 0x408c95
                        int64_t v65; // 0x408c99
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x408918_9;
                            }
                            // 0x408c93
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
                                // 0x408caf
                                if (v64 >= 58) {
                                    goto lab_0x408918_9;
                                }
                                // 0x408c93
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
                        int64_t v67 = v55; // 0x408c68
                        while (v58) {
                            // 0x408c6e
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
                                    goto lab_0x408918_9;
                                }
                                // 0x408c93
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
                                    // 0x408caf
                                    if (v64 >= 58) {
                                        goto lab_0x408918_9;
                                    }
                                    // 0x408c93
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
                            // 0x408c64
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x408d6d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x408918_9;
                        }
                        int64_t v68 = v54 + 2; // 0x408d7e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x408150
                v36 = v45;
                char v70; // 0x408150
                while (true) {
                    // 0x408296
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x4082b0
                                *v41 = *v41 | 2;
                                // break -> 0x408290
                                break;
                            }
                            case 43: {
                                // 0x4082c0
                                *v41 = *v41 | 4;
                                // break -> 0x408290
                                break;
                            }
                            case 32: {
                                // 0x4082d0
                                *v41 = *v41 | 8;
                                // break -> 0x408290
                                break;
                            }
                            case 35: {
                                // 0x4082e0
                                *v41 = *v41 | 16;
                                // break -> 0x408290
                                break;
                            }
                            case 48: {
                                // 0x4082f0
                                *v41 = *v41 | 32;
                                // break -> 0x408290
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x4082f8
                                    break;
                                }
                                // 0x408286
                                *v41 = *v41 | 64;
                                // break -> 0x408290
                                break;
                            }
                        }
                    } else {
                        // 0x40829f
                        *v41 = *v41 | 1;
                    }
                    // 0x408290
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x408150
                int64_t * v72; // 0x408221
                int64_t * v73; // 0x40822a
                if (v70 == 42) {
                    // 0x40836d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40838d
                    int64_t v75 = v74; // 0x40838d
                    int64_t v76 = v75 + 0xffffffd0; // 0x408391
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x408397
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40876d
                        char v80 = *(char *)v79; // 0x408771
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40876d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40877d
                        v26 = v79;
                        int64_t v81 = v75; // 0x408781
                        int64_t v82 = v36; // 0x408781
                        int64_t v83 = 0; // 0x408781
                        if (v80 != 36) {
                            goto lab_0x40839d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x4087b2
                            int64_t v89 = v85; // 0x4087b2
                            int64_t v90 = v87; // 0x4087b2
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x4087b7
                            int64_t v95 = v92 + 1; // 0x4087ba
                            char v96 = *(char *)v95; // 0x4087ba
                            int64_t v97 = v96; // 0x4087ba
                            while (v94 < v91) {
                                // 0x4087d1
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x408918_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40878b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x408794
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
                                    // 0x4087d1
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x408918_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40878b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x408e0b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x408918_9;
                            }
                            // 0x408e19
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x4083ac;
                        }
                    } else {
                        goto lab_0x40839d;
                    }
                } else {
                    // 0x4082fd
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x408150
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x408a1b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x408a20
                        int64_t v102 = v71; // 0x408a29
                        char * v103 = v100; // 0x408a29
                        int64_t v104 = v36; // 0x408a29
                        int64_t v105 = v71; // 0x408a29
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x408a33
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x408a33
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x408a33
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x408a42
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x408a65
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x408308;
                }
            } else {
                goto lab_0x4081c8;
            }
        }
    }
  lab_0x4081d2:
    // 0x4081d2
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x4081f4
    return 0;
  lab_0x408918_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x408923
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x408935
    if (v3 != v115) {
        // 0x408940
        free((int64_t *)v115);
    }
    // 0x408945
    *__errno_location() = 22;
    // 0x4081f4
    return 0xffffffff;
  lab_0x408af0_5:;
    // 0x408af0
    int64_t v116; // 0x408150
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x408af5
    int64_t v119; // 0x408150
    if (v4 == v117) {
        goto lab_0x408b09_3;
    } else {
        // 0x408af7
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x408b09_3;
    }
  lab_0x408b09_3:;
    int64_t v120 = *v5; // 0x408b09
    int32_t * v121; // 0x408b19
    if (v3 == v120) {
        // 0x408b19
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x408b14
    free((int64_t *)v120);
    // 0x408b19
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x4081c8:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x4081cb
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
        // break -> 0x4081d2
        goto lab_0x4081d2;
    }
    goto lab_0x4081c0;
  lab_0x40839d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40839d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x408743
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x408918_9;
        }
        // 0x40875b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x4083ac;
  lab_0x408308:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40830b
    int64_t v147 = v339; // 0x40830b
    int64_t v145 = v338; // 0x40830b
    int64_t v143 = v337; // 0x40830b
    int64_t v186; // 0x408150
    int64_t v190; // 0x408150
    int64_t v189; // 0x408150
    int64_t v188; // 0x408150
    int64_t v187; // 0x408150
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x408410;
    } else {
        goto lab_0x408311;
    }
  lab_0x4083ac:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x4083ac
    int64_t v132 = v128; // 0x4083b3
    int64_t v133 = v16; // 0x4083b3
    int64_t v134 = v131; // 0x4083b3
    int64_t v135; // 0x408150
    int64_t v136; // 0x408150
    int64_t v137; // 0x408150
    int64_t v138; // 0x40865f
    if (v16 > v127) {
        goto lab_0x4083bc;
    } else {
        uint64_t v139 = 2 * v16; // 0x408655
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x408af0_5;
        }
        int64_t size = 32 * v138; // 0x40867e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x408bdc
            if (mem == NULL) {
                goto lab_0x408b09_3;
            }
            // 0x408bfe
            v135 = (int64_t)mem;
            goto lab_0x408c09;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40869f
            int64_t v140 = *v6; // 0x4086a4
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x408af0_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40869f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x408c09;
            } else {
                goto lab_0x4086dd;
            }
        }
    }
  lab_0x408311:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x408318
    int64_t v151 = v146; // 0x408318
    int64_t v152 = v144; // 0x408318
    uint64_t v153; // 0x408150
    int64_t v154; // 0x408150
    int64_t v155; // 0x408357
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40835b
        int64_t v158; // 0x408150
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x4084c0
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x408353
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x4084c8
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x408350
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x408353
                    break;
                }
            }
        } else {
            // 0x408360
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x408353
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x4084c8
    int64_t v162 = v161 % 256; // 0x4084d4
    g47 = v162;
    int64_t v163 = 17; // 0x4084d7
    int64_t v164 = v154; // 0x4084d7
    int64_t v165 = v154; // 0x4084d7
    switch ((char)v161) {
        case 0: {
            goto lab_0x408541;
        }
        case 28: {
            goto lab_0x408892;
        }
        case 30: {
            // 0x4088be
            v163 = 14;
            v164 = 99;
            goto lab_0x4084e9;
        }
        case 32: {
            goto lab_0x408892;
        }
        case 33: {
            goto lab_0x408892;
        }
        case 34: {
            goto lab_0x408892;
        }
        case 46: {
            // 0x4088af
            v163 = 16;
            v164 = 115;
            goto lab_0x4084e9;
        }
        case 51: {
            goto lab_0x4088cd;
        }
        case 60: {
            goto lab_0x408892;
        }
        case 62: {
            int32_t v166 = v153; // 0x4087e9
            int32_t v167 = v166 - 7; // 0x4087e9
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x4087ef
            v163 = v168;
            v164 = v154;
            goto lab_0x4084e9;
        }
        case 63: {
            goto lab_0x408840;
        }
        case 64: {
            goto lab_0x408892;
        }
        case 65: {
            goto lab_0x408892;
        }
        case 66: {
            goto lab_0x408892;
        }
        case 68: {
            goto lab_0x408840;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x4087ff
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x408805
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40880d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40881b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40882f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x4084e9;
        }
        case 74: {
            goto lab_0x4088cd;
        }
        case 75: {
            goto lab_0x4084e9;
        }
        case 78: {
            int32_t v171 = v153; // 0x4084e0
            int32_t v172 = v171 - 7; // 0x4084e0
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x4084e6
            v163 = v173;
            v164 = v154;
            goto lab_0x4084e9;
        }
        case 80: {
            goto lab_0x4088cd;
        }
        case 83: {
            goto lab_0x4088cd;
        }
        default: {
            goto lab_0x408918_9;
        }
    }
  lab_0x4083bc:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x4083d3
        int64_t v178 = v176; // 0x408150
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x4083c8
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x4083c8
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x4083e1
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x4083ed
    int32_t v182 = *v181; // 0x4083ed
    if (v182 != 0) {
        // 0x408a6e
        if (v182 != 5) {
            goto lab_0x408918_9;
        }
        unsigned char v183 = *(char *)v129; // 0x408a77
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x408308;
    } else {
        // 0x4083f7
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x4083fd
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
            goto lab_0x408311;
        } else {
            goto lab_0x408410;
        }
    }
  lab_0x408410:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x408410
    char v197 = *v196; // 0x408410
    int64_t * v198; // 0x408238
    *v198 = v192;
    int64_t v199; // 0x408150
    int64_t v200; // 0x408150
    int64_t v201; // 0x408150
    int64_t v202; // 0x408150
    int64_t v203; // 0x408150
    int64_t * v204; // 0x408241
    int64_t * v205; // 0x40824a
    int64_t v206; // 0x408429
    if (v197 != 42) {
        char v207 = *v196; // 0x408610
        int64_t v208 = v193; // 0x408619
        char * v209; // 0x408150
        int64_t v210; // 0x408150
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x408620
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x408624
            v208 = v212;
            while (v214 < 58) {
                // 0x408620
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40862e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x408610
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x408641
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x408311;
    } else {
        // 0x40841f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40843f
        int64_t v219 = v218; // 0x40843f
        int64_t v220 = v219 + 0xffffffd0; // 0x408443
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x408449
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x408cf4
            char v224 = *(char *)v223; // 0x408cf8
            v221 = v223;
            while (v224 < 58) {
                // 0x408cf4
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x408d04
            v201 = v223;
            int64_t v225 = v219; // 0x408d08
            int64_t v226 = v206; // 0x408d08
            int64_t v227 = 0; // 0x408d08
            if (v224 != 36) {
                goto lab_0x40844f;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x408d39
                int64_t v233 = v229; // 0x408d39
                int64_t v234 = v231; // 0x408d39
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x408d3e
                int64_t v239 = v236 + 1; // 0x408d45
                char v240 = *(char *)v239; // 0x408d49
                int64_t v241 = v240; // 0x408d49
                while (v238 < v235) {
                    // 0x408d57
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x408918_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x408d12
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x408d1b
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
                        // 0x408d57
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x408918_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x408d12
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x408e27
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x408918_9;
                }
                // 0x408e35
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40845e;
            }
        } else {
            goto lab_0x40844f;
        }
    }
  lab_0x408541:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x408546
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40854e
    *a2 = v245;
    int64_t v246; // 0x408150
    int64_t v247; // 0x408150
    int64_t dest_mem; // 0x408150
    int64_t v248; // 0x408150
    int64_t v249; // 0x408e43
    if (v246 > v245) {
        // 0x40855a
        goto lab_0x4081c8;
    } else {
        if (v246 < 0) {
            // 0x408e43
            v249 = *v6;
            v116 = v249;
            goto lab_0x408af0_5;
        }
        int64_t v250 = 2 * v246; // 0x408576
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x408e43
            v249 = *v6;
            v116 = v249;
            goto lab_0x408af0_5;
        }
        int64_t v251 = *v5; // 0x408587
        int64_t size2 = 176 * v246; // 0x408599
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x4086e9
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x408c4c
                v118 = v252;
                if (v4 == v252) {
                    // 0x408b19
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x408af7
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x408b09_3;
            }
            goto lab_0x408704;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x4085ab
            if (mem4 == NULL) {
                // 0x408e43
                v249 = *v6;
                v116 = v249;
                goto lab_0x408af0_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x4085ab
            int64_t v254 = *v5; // 0x4085cd
            int64_t v255 = *a2; // 0x4085d1
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x408704;
            } else {
                goto lab_0x4085df;
            }
        }
    }
  lab_0x408892:
    // 0x408892
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x4088a7
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x4084e9;
  lab_0x4088cd:;
    uint32_t v335 = (int32_t)v153; // 0x4088d5
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x4088db
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4088e3
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x4088f1
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4088fe
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4084e9;
  lab_0x408840:;
    uint32_t v336 = (int32_t)v153; // 0x408848
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40884e
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x408856
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x408864
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x408871
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4084e9;
  lab_0x4084e9:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x408150
    int64_t v260; // 0x408150
    int64_t * v261; // 0x40824f
    if (v259 == -1) {
        // 0x4089f4
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x408918_9;
        }
        // 0x408a0c
        v260 = v148;
    } else {
        // 0x4084f3
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x4084f8
    int64_t v264 = v258; // 0x4084ff
    int64_t v265 = v162; // 0x4084ff
    int64_t v266 = v263; // 0x4084ff
    int64_t v267; // 0x408150
    int64_t v268; // 0x408150
    int64_t v269; // 0x408150
    int64_t v270; // 0x408150
    int64_t v271; // 0x408150
    if (v142 > v262) {
        goto lab_0x408505;
    } else {
        uint64_t v272 = 2 * v142; // 0x408968
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x408972
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x408af0_5;
        }
        int64_t size3 = 32 * v273; // 0x408991
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x4089a4
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x408a89
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x408b09_3;
            }
            goto lab_0x408aa6;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x4089b1
            if (mem6 == NULL) {
                // 0x408e43
                v249 = *v6;
                v116 = v249;
                goto lab_0x408af0_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x4089b1
            int64_t v276 = v274 & 0xffffffff; // 0x4089b6
            int64_t v277 = *v6; // 0x4089e1
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x408aa6;
            } else {
                goto lab_0x4089eb;
            }
        }
    }
  lab_0x408505:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40851b
        int64_t v282 = v279; // 0x408150
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x408510
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x408510
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x408529
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x408535
    int32_t v286 = *v285; // 0x408535
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40895a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x408918_9;
        }
    } else {
        // 0x40853f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x408541;
  lab_0x408c09:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x408c09
    int64_t * v290; // 0x408150
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x4086dd;
  lab_0x4086dd:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x4083bc;
  lab_0x40844f:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40844f
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x408cca
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x408918_9;
        }
        // 0x408ce2
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40845e;
  lab_0x40845e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40845e
    int64_t v300 = v296; // 0x408465
    int64_t v301 = v191; // 0x408465
    int64_t v302 = v299; // 0x408465
    int64_t v303; // 0x408150
    int64_t v304; // 0x408150
    int64_t v305; // 0x408150
    int64_t v306; // 0x408b42
    if (v191 > v295) {
        goto lab_0x40846e;
    } else {
        uint64_t v307 = 2 * v191; // 0x408b38
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x408af0_5;
        }
        int64_t size4 = 32 * v306; // 0x408b5d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x408d8e
            if (mem7 == NULL) {
                goto lab_0x408b09_3;
            }
            // 0x408db0
            v304 = (int64_t)mem7;
            goto lab_0x408dbb;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x408b7e
            int64_t v308 = *v6; // 0x408b83
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x408af0_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x408b7e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x408dbb;
            } else {
                goto lab_0x408bbc;
            }
        }
    }
  lab_0x408704:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x408150
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x4085df;
  lab_0x4085df:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x4081c8;
  lab_0x408aa6:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x408abc
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x4089eb;
  lab_0x4089eb:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x408505;
  lab_0x40846e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x408483
        int64_t v324 = v322; // 0x408150
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x408478
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x408478
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x408491
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x40849e
    int32_t v328 = *v327; // 0x40849e
    if (v328 != 0) {
        // 0x408bc5
        if (v328 != 5) {
            goto lab_0x408918_9;
        }
        unsigned char v329 = *(char *)v297; // 0x408bce
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x4084a8
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x4084b1
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x408311;
  lab_0x408dbb:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x408dbb
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x408bbc;
  lab_0x408bbc:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40846e;
}
// Address range: 0x408e60 - 0x408ebd
int64_t function_408e60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408e60
    return function_4013b8();
}
// Address range: 0x408ec0 - 0x408ec1
int64_t function_408ec0(void) {
    // 0x408ec0
    int64_t result; // 0x408ec0
    return result;
}
// Address range: 0x408ed0 - 0x408ee8
int64_t function_408ed0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408ed0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g14);
}
// Address range: 0x408ee8 - 0x408f08
int64_t function_408ee8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g10; // 0x408ef2
    while (*(int64_t *)v1 != -1) {
        // 0x408ef3
        v1 -= 8;
    }
    // 0x408f04
    return result;
}
