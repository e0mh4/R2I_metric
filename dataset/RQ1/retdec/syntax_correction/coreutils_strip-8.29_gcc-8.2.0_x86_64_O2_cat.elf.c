#include "decompile_retdec.h"
// Address range: 0x4017b0 - 0x4017b5
int64_t function_4017b0(void) {
    // 0x4017b0
    abort();
    // UNREACHABLE
}
// Address range: 0x4017b5 - 0x4017ba
int64_t function_4017b5(void) {
    // 0x4017b5
    abort();
    // UNREACHABLE
}
// Address range: 0x4017ba - 0x4017bf
int64_t function_4017ba(void) {
    // 0x4017ba
    abort();
    // UNREACHABLE
}
// Address range: 0x4017bf - 0x4017c4
int64_t function_4017bf(void) {
    // 0x4017bf
    abort();
    // UNREACHABLE
}
// Address range: 0x4017c4 - 0x4017c9
int64_t function_4017c4(void) {
    // 0x4017c4
    abort();
    // UNREACHABLE
}
// Address range: 0x4017c9 - 0x4017ce
int64_t function_4017c9(void) {
    // 0x4017c9
    abort();
    // UNREACHABLE
}
// Address range: 0x4017d0 - 0x4023a0
int64_t function_4017d0(int64_t a1, int64_t a2) {
    // 0x4017d0
    int64_t v1; // 0x4017d0
    int64_t v2 = v1;
    int64_t v3 = 0x100000000 * a1 >> 32; // 0x4017e1
    function_402a30(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_406570(0x4028d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int32_t v4 = 0; // 0x401842
    char v5 = 0; // 0x401842
    char v6 = 0; // 0x401842
    char v7 = 0; // 0x401842
    int32_t v8 = 0; // 0x401842
    char v9 = 0; // 0x401842
    int32_t v10; // 0x4017d0
    char v11; // 0x4017d0
    char v12; // 0x4017d0
    char v13; // 0x4017d0
    int32_t v14; // 0x4017d0
    char v15; // 0x4017d0
    int64_t v16; // 0x40185e
    while (true) {
      lab_0x401848_2:
        // 0x401848
        v13 = v9;
        v10 = v8;
        v11 = v7;
        v12 = v6;
        v15 = v5;
        v14 = v4;
        v16 = function_405cb0((int32_t)v3, a2, "benstuvAET", &g2, 0, v1);
        int32_t v17 = v16;
        v4 = v14;
        v5 = v15;
        v6 = v12;
        v7 = v11;
        v8 = 1;
        v9 = 1;
        switch (v17) {
            case -1: {
                goto lab_0x401997;
            }
            case 98: {
                goto lab_0x401848_2;
            }
            default: {
                if (v17 > 98) {
                    // 0x401877
                    v4 = v14;
                    v5 = v15;
                    v6 = v12;
                    v7 = 1;
                    v8 = v10;
                    v9 = v13;
                    if (v17 != 115) {
                        if (v17 > 115) {
                            // 0x401882
                            v4 = v14;
                            v5 = v15;
                            v6 = v12;
                            v7 = v11;
                            v8 = v10;
                            v9 = v13;
                            if (v17 != 117) {
                                // 0x401887
                                v4 = 1;
                                v5 = 1;
                                v6 = v12;
                                v7 = v11;
                                v8 = v10;
                                v9 = v13;
                                if (v17 >= 117) {
                                    // 0x4018c0
                                    v4 = v14;
                                    v5 = 1;
                                    v6 = v12;
                                    v7 = v11;
                                    v8 = v10;
                                    v9 = v13;
                                    if (v17 != 118) {
                                      lab_0x40230c:
                                        // 0x40230c
                                        function_402520(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                        } else {
                            // 0x4018d8
                            v4 = v14;
                            v5 = 1;
                            v6 = 1;
                            v7 = v11;
                            v8 = v10;
                            v9 = v13;
                            if (v17 != 101) {
                                // 0x4018f0
                                v4 = v14;
                                v5 = v15;
                                v6 = v12;
                                v7 = v11;
                                v8 = v10;
                                v9 = 1;
                                if (v17 != 110) {
                                    // 0x40230c
                                    function_402520(1);
                                    // UNREACHABLE
                                }
                            }
                        }
                    }
                } else {
                    // 0x401898
                    v4 = 1;
                    v5 = 1;
                    v6 = 1;
                    v7 = v11;
                    v8 = v10;
                    v9 = v13;
                    if (v17 != 65) {
                        if (v17 <= 65) {
                            if (v17 == -131) {
                                struct _IO_FILE * v18 = g34; // 0x401913
                                char (*v19)[5] = g23; // 0x40191c
                                function_404b90((int64_t)v18, "cat", "GNU coreutils", (int64_t)v19, "Torbjorn Granlund", "Richard M. Stallman");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v17 == -130) {
                                // 0x401952
                                function_402520(0);
                                // UNREACHABLE
                            }
                            goto lab_0x40230c;
                        }
                        // 0x4018a3
                        v4 = v14;
                        v5 = v15;
                        v6 = 1;
                        v7 = v11;
                        v8 = v10;
                        v9 = v13;
                        if (v17 != 69) {
                            // 0x4018a8
                            v4 = 1;
                            v5 = v15;
                            v6 = v12;
                            v7 = v11;
                            v8 = v10;
                            v9 = v13;
                            if (v17 != 84) {
                                // 0x40230c
                                function_402520(1);
                                // UNREACHABLE
                            }
                        }
                    }
                }
                goto lab_0x401848_2;
            }
        }
    }
  lab_0x401997:;
    // 0x401997
    int64_t v20; // bp-200, 0x4017d0
    if (__fxstat(1, 1, (struct stat *)&v20) < 0) {
      lab_0x40236a:
        // 0x40236a
        error(1, *__errno_location(), dcgettext(NULL, "standard output", 5));
        return &g56;
    }
    int64_t v21 = v16 & 0xffffffff; // 0x4019a9
    int32_t v22 = getpagesize(); // 0x4019dd
    int64_t v23 = (int64_t)*(int32_t *)0x60a29c; // 0x4019e2
    int64_t v24 = v20; // 0x4019fa
    g41 = (char *)&g9;
    char v25 = 0; // 0x401a54
    int32_t v26 = 1; // 0x401a54
    int64_t v27 = v23; // 0x401a54
    int64_t v28 = v21; // 0x401a54
    char v29 = 0; // 0x401a54
    int32_t v30 = 1; // 0x401a54
    int64_t v31 = v23; // 0x401a54
    int64_t v32 = (int64_t)&g9; // 0x401a54
    int64_t v33 = v21; // 0x401a54
    if (v3 > v23) {
        goto lab_0x401af8;
    } else {
        goto lab_0x401b0d;
    }
  lab_0x401c73:;
    // 0x401c73
    char v34; // 0x4017d0
    char v35 = v34; // 0x401c78
    int64_t v36; // 0x4017d0
    int64_t v37 = v36; // 0x401c78
    int64_t v38; // 0x4017d0
    int64_t v39 = v38; // 0x401c78
    int64_t v40; // 0x4017d0
    int64_t v41 = v40; // 0x401c78
    char v42 = v34; // 0x401c78
    int64_t v43; // 0x4017d0
    int64_t v44 = v43; // 0x401c78
    int64_t v45 = v36; // 0x401c78
    int64_t v46; // 0x4017d0
    int64_t v47 = v46; // 0x401c78
    int64_t v48 = v38; // 0x401c78
    int64_t v49 = v40; // 0x401c78
    if (v46 > v43) {
        goto lab_0x401c7e;
    } else {
        goto lab_0x401e3f;
    }
  lab_0x401de7:;
    // 0x401de7
    int64_t v50; // 0x4017d0
    int64_t v51 = v50;
    int64_t v52; // 0x4017d0
    int64_t v53 = v52;
    int64_t v54; // 0x4017d0
    int64_t v55 = v54;
    int64_t v56; // 0x4017d0
    int64_t v57 = v56;
    int64_t v58; // 0x4017d0
    int64_t v59 = v58;
    char v60; // 0x4017d0
    char v61 = v60;
    int64_t v62; // 0x401c14
    int64_t v63 = v62;
    uint64_t v64; // 0x4019d9
    if (v64 != function_4029b0(1, v63, v64)) {
        // break (via goto) -> 0x402244
        goto lab_0x402244;
    }
    int64_t v65 = v63 + v64; // 0x401e09
    uint64_t v66 = v51 - v65; // 0x401e0f
    while (v64 <= v66) {
        // 0x401df0
        v63 = v65;
        if (v64 != function_4029b0(1, v63, v64)) {
            // break (via goto) -> 0x402244
            goto lab_0x402244;
        }
        // 0x401e09
        v65 = v63 + v64;
        v66 = v51 - v65;
    }
    // 0x401e17
    int64_t * v67; // 0x4017d0
    memmove(v67, (int64_t *)v65, (int32_t)v66);
    int64_t v68 = v66 + v62; // 0x401e2f
    v35 = v61;
    v37 = v57;
    v39 = v53;
    v41 = v68;
    v42 = v61;
    v44 = v59;
    v45 = v57;
    v47 = v55;
    v48 = v53;
    v49 = v68;
    if (v55 > v59) {
        goto lab_0x401c7e;
    } else {
        goto lab_0x401e3f;
    }
  lab_0x401c7e:;
    int64_t v69 = v41;
    int64_t v70 = v39;
    int64_t v71 = v37;
    char v72 = v35;
    char v73 = v72; // 0x401c8e
    int64_t v74 = v70; // 0x401c8e
    int64_t v75; // 0x4017d0
    int64_t err_num; // 0x4017d0
    int64_t v76; // 0x4017d0
    char v77; // 0x4017d0
    char v78; // 0x4017d0
    int32_t v79; // 0x4017d0
    int32_t v80; // 0x4017d0
    int64_t v81; // 0x4017d0
    int64_t v82; // 0x4017d0
    int64_t v83; // 0x4017d0
    int64_t v84; // 0x4017d0
    int32_t v85; // 0x4017d0
    int64_t v86; // 0x401bd9
    int64_t v87; // 0x401bef
    int32_t v88; // 0x401c0a
    if (v72 != 0) {
        // 0x401f30
        v73 = v72;
        v74 = v70;
        if (ioctl(g40, 0x541b) < 0) {
            int32_t * v89 = __errno_location(); // 0x401f70
            uint32_t v90 = *v89; // 0x401f75
            int64_t v91 = v90 == 95; // 0x401f7a
            int64_t v92 = v91; // 0x401f81
            if (v90 < 39) {
                uint32_t v93 = v90 % 64;
                v92 = (v93 == 0 ? 0 : (0x4002480000 >> (int64_t)v93) % 2) | v91;
            }
            int64_t v94 = v92;
            v73 = 0;
            v74 = v94;
            if ((char)v94 == 0) {
                // 0x4022af
                v78 = v77;
                v80 = v79;
                v84 = v83;
                v85 = v88;
                v81 = v87;
                v82 = v86;
                err_num = (int64_t)v89;
                v76 = v71;
                v75 = v94;
                goto lab_0x4022af_2;
            }
        }
    }
    int64_t v95 = v74;
    char v96 = v73;
    int64_t v97 = v69 - v62; // 0x401c97
    int64_t v98 = v69; // 0x401c9a
    if (v97 != 0) {
        int64_t v99 = function_4029b0(1, v62, v97); // 0x401fcb
        v98 = v62;
        if (v97 != v99) {
            // 0x402316
            error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
            goto lab_0x402340;
        }
    }
    int64_t v100 = v98;
    int64_t v101; // 0x401c24
    int64_t v102 = function_404670((int64_t)g40, v101, v64); // 0x401cb2
    int64_t v103; // 0x4017d0
    int64_t v104; // 0x4017d0
    int64_t v105; // 0x4017d0
    int64_t v106; // 0x4017d0
    int64_t v107; // 0x4017d0
    int64_t v108; // 0x4017d0
    int64_t v109; // 0x4017d0
    int64_t v110; // 0x4017d0
    int64_t v111; // 0x4017d0
    int64_t v112; // 0x4017d0
    char v113; // 0x4017d0
    int64_t v114; // 0x4017d0
    int64_t v115; // 0x401c2f
    switch (v102) {
        case -1: {
            int64_t v116 = function_4044d0(0, 3, (int64_t)g41); // 0x401a78
            error(0, *__errno_location(), "%s", (char *)v116);
            int64_t v117 = v100 - v62; // 0x401a98
            if (v117 != 0) {
                int64_t v118 = function_4029b0(1, v62, v117); // 0x402169
                v109 = v71 & 0xffffffff;
                v103 = v117;
                if (v117 == v118) {
                    goto lab_0x401aa1;
                } else {
                    goto lab_0x402177;
                }
            } else {
                goto lab_0x401aa1;
            }
        }
        case 0: {
            int64_t v119 = v71 & 0xffffffff; // 0x40203b
            int64_t v120 = v100 - v62; // 0x402041
            v108 = v119;
            v110 = v119;
            v104 = v120;
            if (v120 != 0) {
                goto lab_0x40217c;
            } else {
                goto lab_0x40204a;
            }
        }
        default: {
            int64_t v121 = v102 + v101; // 0x401cd4
            *(char *)v121 = 10;
            v113 = v96;
            v114 = v121;
            v107 = v101;
            v112 = v71;
            v111 = v115;
            v106 = v95;
            v105 = v100;
            goto lab_0x401ce2;
        }
    }
  lab_0x401e3f:;
    int64_t str = v49;
    int64_t v122 = v48;
    int64_t v123 = v47;
    int64_t v124 = v44;
    char v125 = v42;
    int64_t v126 = v45 + 1; // 0x401e3f
    int64_t v127 = v126 & 0xffffffff; // 0x401e3f
    int64_t v128 = v123 + 1; // 0x401e42
    int32_t v129 = v126; // 0x401e46
    int64_t v130 = v127; // 0x401e48
    int64_t v131 = str; // 0x401e48
    bool v132; // 0x4017d0
    int64_t v133; // 0x4017d0
    int64_t v134; // 0x4017d0
    int64_t v135; // 0x4017d0
    int64_t v136; // 0x4017d0
    int64_t v137; // 0x4017d0
    char v138; // 0x4017d0
    int64_t v139; // 0x4017d0
    if (v129 < 1) {
        goto lab_0x401e90;
    } else {
        // 0x401e4a
        v138 = v125;
        v139 = v124;
        v137 = 2;
        v136 = v128;
        v135 = v122;
        v133 = v123;
        v134 = str;
        if (v11 == 0 || v129 == 1) {
            int64_t v140 = v129 == 1 ? v127 : 2;
            v130 = v140;
            v131 = str;
            if (!v132) {
                // 0x401e6d
                function_402480();
                char * v141 = stpcpy((char *)str, g19); // 0x401e81
                v130 = v140;
                v131 = (int64_t)v141;
            }
            goto lab_0x401e90;
        } else {
            goto lab_0x401ce6;
        }
    }
  lab_0x401e90:;
    int64_t v142 = v131;
    int64_t v143 = v142 + 1; // 0x401e95
    int64_t v144 = v143; // 0x401e99
    int64_t v145 = v142; // 0x401e99
    if (v12 != 0) {
        // 0x401e9b
        *(char *)v142 = 36;
        v144 = v142 + 2;
        v145 = v143;
    }
    // 0x401ea9
    *(char *)v145 = 10;
    v113 = v125;
    v114 = v124;
    v107 = v123;
    v112 = v130;
    v111 = v128;
    v106 = v122;
    v105 = v144;
    goto lab_0x401ce2;
  lab_0x401ce2:
    // 0x401ce2
    v138 = v113;
    v139 = v114;
    v137 = v112;
    v136 = v111;
    v135 = v106;
    v133 = v107;
    v134 = v105;
    goto lab_0x401ce6;
  lab_0x401ce6:;
    int64_t str2 = v134;
    int64_t v146 = v135;
    int64_t v147 = v136;
    int64_t v148 = v137;
    int64_t v149 = v139;
    char v150 = v138;
    char v151 = *(char *)v133;
    char v152 = v150; // 0x401cea
    int64_t v153 = v149; // 0x401cea
    int64_t v154 = v148; // 0x401cea
    int64_t v155 = v147; // 0x401cea
    int64_t v156 = v146; // 0x401cea
    int64_t v157 = str2; // 0x401cea
    uint64_t v158; // 0x401c27
    int64_t v159; // 0x4017d0
    if (v151 == 10) {
        goto lab_0x401c68;
    } else {
        // 0x401cf0
        if (v13 != 0 && (int32_t)v148 >= 0) {
            // 0x401cfb
            function_402480();
            char (*str3)[8] = g19; // 0x401d00
            char * v160 = stpcpy((char *)str2, str3); // 0x401d0a
        }
        int64_t v161 = v147; // 0x401d17
        char v162 = v151; // 0x401d17
        int64_t v163 = str2; // 0x401d17
        int64_t v164 = v147; // 0x401d17
        char v165 = v151; // 0x401d17
        int64_t v166 = str2; // 0x401d17
        int64_t v167; // 0x4017d0
        int64_t v168; // 0x4017d0
        if (v15 == 0) {
            while (true) {
                int64_t v169 = v163;
                char v170 = v162;
                int64_t v171 = v161;
                int64_t v172; // 0x4017d0
                if (v14 != 0 == v170 == 9) {
                    // 0x401d20
                    *(int16_t *)v169 = 0x495e;
                    v172 = v169 + 2;
                } else {
                    // 0x401d46
                    v168 = v171;
                    v167 = v169;
                    if (v170 == 10) {
                        // break -> 0x401dd8
                        break;
                    }
                    // 0x401d50
                    *(char *)v169 = v170;
                    v172 = v169 + 1;
                }
                // 0x401d2d
                v161 = v171 + 1;
                v162 = *(char *)v171;
                v163 = v172;
            }
        } else {
            while (true) {
                int64_t v173 = v166;
                unsigned char v174 = v165;
                int64_t v175 = v164;
                int64_t v176; // 0x4017d0
                if (v174 < 32) {
                    if (v14 == 1 || v174 != 9) {
                        // 0x401f08
                        v168 = v175;
                        v167 = v173;
                        if (v174 == 10) {
                            // break -> 0x401dd8
                            break;
                        }
                        // 0x401f12
                        *(char *)v173 = 94;
                        *(char *)(v173 + 1) = v174 + 64;
                        v176 = v173 + 2;
                    } else {
                        // 0x401d94
                        *(char *)v173 = 9;
                        v176 = v173 + 1;
                    }
                } else {
                    if (v174 < 127) {
                        // 0x401d66
                        *(char *)v173 = v174;
                        v176 = v173 + 1;
                    } else {
                        if (v174 == 127) {
                            // 0x401ef0
                            *(int16_t *)v173 = 0x3f5e;
                            v176 = v173 + 2;
                        } else {
                            // 0x401daa
                            *(int16_t *)v173 = 0x2d4d;
                            if (v174 < 160) {
                                // 0x401ed8
                                *(char *)(v173 + 2) = 94;
                                *(char *)(v173 + 3) = v174 - 64;
                                v176 = v173 + 4;
                            } else {
                                if (v174 == -1) {
                                    // 0x401ec0
                                    *(int16_t *)(v173 + 2) = 0x3f5e;
                                    v176 = v173 + 4;
                                } else {
                                    // 0x401dc7
                                    *(char *)(v173 + 2) = v174 ^ -128;
                                    v176 = v173 + 3;
                                }
                            }
                        }
                    }
                }
                // 0x401d6d
                v164 = v175 + 1;
                v165 = *(char *)v175;
                v166 = v176;
            }
        }
        // 0x401dd8
        v34 = v150;
        v43 = v149;
        v36 = v159;
        v46 = v168;
        v38 = v146;
        v40 = v167;
        v60 = v150;
        v58 = v149;
        v56 = v159;
        v54 = v168;
        v52 = v146;
        v50 = v167;
        if (v158 > v167) {
            goto lab_0x401c73;
        } else {
            goto lab_0x401de7;
        }
    }
  lab_0x40223a:;
    char v177 = v77; // 0x40223f
    int32_t v178; // 0x4017d0
    int32_t v179 = v178 & v79; // 0x40223f
    int64_t v180 = v83; // 0x40223f
    int32_t v181; // 0x4017d0
    int32_t v182 = v181; // 0x40223f
    int64_t v183; // 0x4017d0
    int64_t v184 = v183; // 0x40223f
    int64_t v185; // 0x4017d0
    int64_t v186 = v185; // 0x40223f
    int64_t v187; // 0x4017d0
    int64_t v188 = v187; // 0x40223f
    int64_t v189; // 0x4017d0
    int64_t v190 = v189; // 0x40223f
    goto lab_0x401ab9;
  lab_0x402340:
    // 0x402340
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    goto lab_0x40236a;
    // 0x401848
    goto lab_0x401848_2;
  lab_0x401af8:;
    int64_t v257 = *(int64_t *)(8 * v27 + a2); // 0x401b02
    g41 = (char *)v257;
    v29 = v25;
    v30 = v26;
    v31 = v27;
    int32_t v258; // 0x4017d0
    int32_t v259 = v258; // 0x401b06
    int64_t v260; // 0x4017d0
    int64_t v261 = v260; // 0x401b06
    int64_t v262; // 0x4017d0
    int64_t v263 = v262; // 0x401b06
    v32 = v257;
    v33 = v28;
    int64_t v264; // 0x4017d0
    int64_t v265 = v264; // 0x401b06
    goto lab_0x401b0d;
  lab_0x401b0d:
    // 0x401b0d
    v64 = v2 < 0x2000000000000001 ? v2 : 0x20000;
    int64_t v243 = v265;
    int64_t v242 = v33;
    int64_t path = v32;
    int64_t v266 = v263;
    int64_t v241 = v261;
    int32_t v240 = v259;
    v83 = v31;
    v79 = v30;
    char v267 = v29;
    bool v268; // 0x4017d0
    int64_t v216 = v268 ? -1 : 1;
    int64_t v269 = 2; // 0x4017d0
    int64_t v270 = path;
    int64_t v271 = (int64_t)&g9;
    unsigned char v272 = *(char *)v270; // 0x401b1a
    char v273 = *(char *)v271; // 0x401b1a
    char v274 = v273; // 0x401b1a
    bool v275 = false; // 0x401b1a
    while (v272 == v273) {
        int64_t v276 = v269 - 1; // 0x401b1a
        int64_t v277 = v271 + v216; // 0x401b1a
        int64_t v278 = v270 + v216; // 0x401b1a
        v269 = v276;
        v274 = v272;
        v275 = true;
        if (v276 == 0) {
            // break -> 
            break;
        }
        v270 = v278;
        v271 = v277;
        v272 = *(char *)v270;
        v273 = *(char *)v271;
        v274 = v273;
        v275 = false;
    }
    unsigned char v279 = v274;
    int32_t v280 = (int32_t)!((v272 < v279 | v275)) - (int32_t)(v272 < v279); // 0x401b20
    int32_t v281; // 0x4017d0
    int64_t v233; // 0x4017d0
    int64_t v232; // 0x4017d0
    char v282; // 0x4017d0
    char v227; // 0x4017d0
    int64_t v230; // 0x4017d0
    int64_t v231; // 0x4017d0
    int64_t v228; // 0x4017d0
    int32_t v229; // 0x4017d0
    if (v280 != 0) {
        int32_t fd = open((char *)path, O_RDONLY); // 0x401fee
        g40 = fd;
        v281 = fd;
        v282 = v267;
        v227 = v267;
        v228 = v83;
        v229 = v240;
        v230 = v241;
        v231 = v266;
        v232 = v242;
        v233 = v243;
        if (fd >= 0) {
            goto lab_0x401b3f;
        } else {
            goto lab_0x402003;
        }
    } else {
        // 0x401b30
        g40 = 0;
        v281 = v280;
        v282 = 1;
        goto lab_0x401b3f;
    }
  lab_0x401b3f:
    // 0x401b3f
    v77 = v282;
    int32_t fd2 = v281;
    int64_t v198; // 0x4017d0
    int64_t v197; // 0x4017d0
    char v191; // 0x4017d0
    int32_t v192; // 0x4017d0
    int64_t v195; // 0x4017d0
    int64_t v196; // 0x4017d0
    int64_t v193; // 0x4017d0
    int32_t v194; // 0x4017d0
    if (__fxstat(1, fd2, (struct stat *)&v20) < 0) {
        int64_t v283 = function_4044d0(0, 3, (int64_t)g41); // 0x40210c
        error(0, *__errno_location(), "%s", (char *)v283);
        v191 = v77;
        v192 = 0;
        v193 = v83;
        v194 = v240;
        v195 = v241;
        v196 = v266;
        v197 = v242;
        v198 = v243;
        goto lab_0x401ac3;
    } else {
        // 0x401b5b
        posix_fadvise(fd2, 0, 0, POSIX_FADV_SEQUENTIAL);
        int32_t v284; // 0x4017d0
        if ((v284 & 0xf000) == 0x8000) {
            // 0x402070
            if (v20 != v24) {
                goto lab_0x401ba3;
            } else {
                // 0x40209c
                if (v1 > (int64_t)lseek(g40, 0, SEEK_CUR)) {
                    // 0x4020bc
                    function_4044d0(0, 3, (int64_t)g41);
                    error(0, (int32_t)"%s: input file is output file" ^ (int32_t)"%s: input file is output file", dcgettext(NULL, "%s: input file is output file", 5));
                    v191 = v77;
                    v192 = 0;
                    v193 = v83;
                    v194 = v240;
                    v195 = v241;
                    v196 = v266;
                    v197 = v242;
                    v198 = v243;
                    goto lab_0x401ac3;
                } else {
                    goto lab_0x401ba3;
                }
            }
        } else {
            goto lab_0x401ba3;
        }
    }
  lab_0x402003:;
    int64_t v285 = function_4044d0(0, 3, (int64_t)g41); // 0x402011
    error(0, *__errno_location(), "%s", (char *)v285);
    char v219 = v227; // 0x402036
    int32_t v220 = 0; // 0x402036
    int64_t v221 = v228; // 0x402036
    int32_t v222 = v229; // 0x402036
    int64_t v223 = v230; // 0x402036
    int64_t v224 = v231; // 0x402036
    int64_t v225 = v232; // 0x402036
    int64_t v226 = v233; // 0x402036
    goto lab_0x401ae3;
  lab_0x401ae3:;
    int64_t v286 = v226;
    int64_t v287 = v224;
    int64_t v288 = v223;
    int32_t v289 = v222;
    int32_t v290 = v220;
    char v291 = v219;
    int64_t v292 = v221 + 1; // 0x401ae3
    v25 = v291;
    v26 = v290;
    v27 = v292;
    v258 = v289;
    v260 = v288;
    v262 = v287;
    v28 = v225;
    v264 = v286;
    if (v3 > v292) {
        goto lab_0x401af8;
    } else {
        if (v291 == 0 || close(0) >= 0) {
            // 0x402141
            return v290 % 256 ^ 1;
        }
        char * format2 = dcgettext(NULL, "closing standard input", 5); // 0x402291
        error(1, *__errno_location(), format2);
        v78 = v291;
        v80 = v290;
        v84 = v292;
        v85 = v289;
        v81 = v288;
        v82 = v287;
        err_num = &g56;
        v76 = (int64_t)format2;
        v75 = v286;
        goto lab_0x4022af_2;
    }
  lab_0x401ac3:;
    int64_t v199 = v198;
    int64_t v200 = v197;
    int64_t v201 = v196;
    int64_t v202 = v195;
    int32_t v203 = v194;
    int64_t v204 = v193;
    int32_t v205 = v192;
    char v206 = v191;
    int64_t v207 = 2; // 0x4017d0
    int64_t v208 = (int64_t)g41;
    int64_t v209 = (int64_t)&g9;
    unsigned char v210 = *(char *)v208; // 0x401ad4
    char v211 = *(char *)v209; // 0x401ad4
    char v212 = v211; // 0x401ad4
    bool v213 = false; // 0x401ad4
    while (v210 == v211) {
        int64_t v214 = v207 - 1; // 0x401ad4
        int64_t v215 = v209 + v216; // 0x401ad4
        int64_t v217 = v208 + v216; // 0x401ad4
        v207 = v214;
        v212 = v210;
        v213 = true;
        if (v214 == 0) {
            // break -> 
            break;
        }
        v208 = v217;
        v209 = v215;
        v210 = *(char *)v208;
        v211 = *(char *)v209;
        v212 = v211;
        v213 = false;
    }
    unsigned char v218 = v212;
    v219 = v206;
    v220 = v205;
    v221 = v204;
    v222 = v203;
    v223 = v202;
    v224 = v201;
    v225 = v200;
    v226 = v199;
    if ((v210 >= v218 && !v213) != v210 < v218) {
        // 0x40205b
        v219 = v206;
        v220 = v205;
        v221 = v204;
        v222 = v203;
        v223 = v202;
        v224 = v201;
        v225 = v200;
        v226 = v199;
        v227 = v206;
        v228 = v204;
        v229 = v203;
        v230 = v202;
        v231 = v201;
        v232 = v200;
        v233 = v199;
        if (close(g40) >= 0) {
            goto lab_0x401ae3;
        } else {
            goto lab_0x402003;
        }
    } else {
        goto lab_0x401ae3;
    }
  lab_0x401ba3:;
    uint64_t v234 = (int64_t)v22;
    int64_t v235 = v234 - 1; // 0x401bad
    if ((v13 || v12) != 0) {
        goto lab_0x401bc9;
    } else {
        if ((v15 || (char)v14 || v11) == 0) {
            int64_t v236 = function_404cd0(v235 + v64); // 0x4021aa
            uint64_t v237 = v236 + v235; // 0x4021b1
            int64_t v238 = v237 - v237 % v234; // 0x4021c2
            int64_t v239 = function_404670((int64_t)g40, v238, v64); // 0x4021fe
            while (v239 != -1) {
                // 0x4021d0
                v181 = v240;
                v183 = v241;
                v185 = v236;
                v187 = v242;
                v189 = v243;
                v178 = 1;
                if (v239 == 0) {
                    goto lab_0x40223a;
                }
                // 0x4021d9
                if (v239 != function_4029b0(1, v238, v239)) {
                    goto lab_0x402340;
                }
                v239 = function_404670((int64_t)g40, v238, v64);
            }
            int64_t v244 = function_4044d0(0, 3, (int64_t)g41); // 0x40221a
            error(0, *__errno_location(), "%s", (char *)v244);
            v181 = v240;
            v183 = v241;
            v185 = v236;
            v187 = v242;
            v189 = v243;
            v178 = 0;
            goto lab_0x40223a;
        } else {
            goto lab_0x401bc9;
        }
    }
  lab_0x401bc9:;
    int64_t v245 = v64 + v234;
    v86 = function_404cd0(v245);
    v87 = function_404cd0(4 * v64 + 18 + v245);
    uint64_t v246 = v87 + v235; // 0x401bfb
    uint64_t v247 = v86 + v235; // 0x401c04
    v88 = v242;
    v62 = v246 - v246 % v234;
    v101 = v247 - v247 % v234;
    v158 = v62 + v64;
    v115 = v101 + 1;
    v159 = v242 & 0xffffffff;
    v67 = (int64_t *)v62;
    v132 = v10 == 1 | v13 == 0;
    v152 = 1;
    v153 = v101;
    v154 = g39;
    v155 = v115;
    v156 = v243;
    v157 = v62;
    while (true) {
      lab_0x401c68:
        // 0x401c68
        v34 = v152;
        v43 = v153;
        v36 = v154;
        v46 = v155;
        v38 = v156;
        v40 = v157;
        v60 = v152;
        v58 = v153;
        v56 = v154;
        v54 = v155;
        v52 = v156;
        v50 = v157;
        if (v158 > v157) {
            goto lab_0x401c73;
        } else {
            goto lab_0x401de7;
        }
    }
  lab_0x402244:;
    char * format = dcgettext(NULL, "write error", 5); // 0x402250
    error(1, *__errno_location(), format);
    v181 = v88;
    v183 = v87;
    v185 = v86;
    v187 = (int64_t)format;
    v189 = v53;
    v178 = 1;
    goto lab_0x40223a;
  lab_0x4022af_2:
    // 0x4022af
    function_404400(4, (int64_t)g41);
    error(0, *(int32_t *)err_num, dcgettext(NULL, "cannot do ioctl on %s", 5));
    g39 = v76;
    char v248 = v78; // 0x402307
    int32_t v249 = v80; // 0x402307
    int64_t v250 = v84; // 0x402307
    int32_t v251 = v85; // 0x402307
    int64_t v252 = v81; // 0x402307
    int64_t v253 = v82; // 0x402307
    int64_t v254 = v85; // 0x402307
    int64_t v255 = v75 % 256; // 0x402307
    goto lab_0x401aaa;
  lab_0x401aaa:
    // 0x401aaa
    free((int64_t *)v252);
    v177 = v248;
    v179 = v249 & (int32_t)v255;
    v180 = v250;
    v182 = v251;
    v184 = v252;
    v186 = v253;
    v188 = v254;
    v190 = v255;
    goto lab_0x401ab9;
  lab_0x401ab9:
    // 0x401ab9
    free((int64_t *)v186);
    v191 = v177;
    v192 = 0x1000000 * v179 >> 24;
    v193 = v180;
    v194 = v182;
    v195 = v184;
    v196 = v186;
    v197 = v188;
    v198 = v190;
    goto lab_0x401ac3;
  lab_0x401aa1:
    // 0x401aa1
    g39 = v71;
    v248 = v77;
    v249 = v79;
    v250 = v83;
    v251 = v88;
    v252 = v87;
    v253 = v86;
    v254 = v159;
    v255 = 0;
    goto lab_0x401aaa;
  lab_0x402177:
    // 0x402177
    function_4024f0(1);
    v110 = v109;
    v104 = v103;
    goto lab_0x40217c;
  lab_0x40217c:;
    int64_t v256 = function_4029b0(1, v62, v104); // 0x402187
    v108 = v110;
    v109 = v110;
    v103 = v104;
    if (v104 == v256) {
        goto lab_0x40204a;
    } else {
        goto lab_0x402177;
    }
  lab_0x40204a:
    // 0x40204a
    g39 = v108;
    v248 = v77;
    v249 = v79;
    v250 = v83;
    v251 = v88;
    v252 = v87;
    v253 = v86;
    v254 = v159;
    v255 = 1;
    goto lab_0x401aaa;
}
// Address range: 0x4023a0 - 0x4023cb
// Address range: 0x4023cb - 0x4023ea
int64_t function_4023cb(void) {
    // 0x4023cb
    return &g33;
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
    if (g38 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x402466
        result2 = function_4023cb();
        g37 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
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
// Address range: 0x402480 - 0x4024ec
int64_t function_402480(void) {
    int64_t v1 = (int64_t)g18; // 0x402480
    int64_t result = (int64_t)&g22;
    char * v2 = (char *)result;
    unsigned char v3 = *v2; // 0x40249d
    int64_t v4; // 0x402480
    while (v3 > 56) {
        int64_t v5 = result - 1; // 0x402490
        *v2 = 48;
        if (v5 < v1) {
            if (g18 > (char (*)[3])&g20) {
                // 0x4024b9
                *(char *)&g17 = 49;
                *(int64_t *)&g18 = (int64_t)&g17;
                v4 = &g17;
                goto lab_0x4024c8;
            } else {
                // 0x4024e0
                g20[0] = 62;
                v4 = v1;
                goto lab_0x4024c8;
            }
        }
        result = v5;
        v2 = (char *)result;
        v3 = *v2;
    }
    // 0x4024a5
    *v2 = v3 + 1;
    return result;
  lab_0x4024c8:;
    int64_t result2 = (int64_t)g19; // 0x4024c8
    if (v4 >= result2) {
        // 0x4024df
        return result2;
    }
    int64_t result3 = result2 - 1; // 0x4024d4
    *(int64_t *)&g19 = result3;
    // 0x4024df
    return result3;
}
// Address range: 0x4024f0 - 0x402520
int64_t function_4024f0(int64_t a1) {
    // 0x4024f0
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    return &g56;
}
// Address range: 0x402520 - 0x4028a5
int64_t function_402520(int32_t status) {
    // 0x402520
    if (status != 0) {
        // 0x40253a
        __fprintf_chk(g36, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40255f
        exit(status);
        // UNREACHABLE
    }
    // 0x402566
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Concatenate FILE(s) to standard output.\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "\n  -A, --show-all           equivalent to -vET\n  -b, --number-nonblank    number nonempty output lines, overrides -n\n  -e                       equivalent to -vE\n  -E, --show-ends          display $ at end of each line\n  -n, --number             number all output lines\n  -s, --squeeze-blank      suppress repeated empty output lines\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "  -t                       equivalent to -vT\n  -T, --show-tabs          display TAB characters as ^I\n  -u                       (ignored)\n  -v, --show-nonprinting   use ^ and M- notation, except for LFD and TAB\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g34);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g34);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s f - g  Output f's contents, then standard input, then g's contents.\n  %s        Copy standard input to standard output.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402683
    bool v2; // 0x402520
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402708
    int64_t v6 = *(int64_t *)v5; // 0x40270c
    int64_t v7 = 4; // 0x402712
    while (v6 != 0) {
        int64_t v8 = (int64_t)"cat";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x40271e
        char v11 = *(char *)v9; // 0x40271e
        char v12 = v11; // 0x40271e
        bool v13 = false; // 0x40271e
        while (v10 == v11) {
            // 0x402714
            v7--;
            int64_t v14 = v9 + v3; // 0x40271e
            int64_t v15 = v8 + v3; // 0x40271e
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
            // break -> 0x40272a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x40272a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40283c;
        } else {
            // 0x402826
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40287b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40278c;
            } else {
                goto lab_0x40283c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40278c;
        } else {
            // 0x402772
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40287b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40278c;
            } else {
                goto lab_0x40278c;
            }
        }
    }
  lab_0x40283c:
    // 0x40283c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4027cc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40255f
    exit(status);
    // UNREACHABLE
  lab_0x40278c:
    // 0x40278c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4027cc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40255f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4028b0 - 0x4028b8
int64_t function_4028b0(int64_t a1) {
    // 0x4028b0
    g43 = a1;
    int64_t result; // 0x4028b0
    return result;
}
// Address range: 0x4028c0 - 0x4028c8
int64_t function_4028c0(int64_t a1) {
    // 0x4028c0
    g42 = a1;
    int64_t result; // 0x4028c0
    return result;
}
// Address range: 0x4028d0 - 0x40296e
int64_t function_4028d0(void) {
    // 0x4028d0
    int32_t * err_num; // 0x4028e6
    if ((int32_t)function_405db0((int64_t)g34) == 0) {
        goto lab_0x4028fc;
    } else {
        // 0x4028e6
        err_num = __errno_location();
        if (g42 == 0) {
            goto lab_0x402913;
        } else {
            // 0x4028f7
            if (*err_num != 32) {
                goto lab_0x402913;
            } else {
                goto lab_0x4028fc;
            }
        }
    }
  lab_0x4028fc:;
    int64_t result = function_405db0((int64_t)g36); // 0x402903
    if ((int32_t)result == 0) {
        // 0x40290c
        return result;
    }
    // 0x40294e
    _exit(g24);
    // UNREACHABLE
  lab_0x402913:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40291f
    if (g43 == 0) {
        // 0x402959
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402933
        error(0, *err_num, "%s: %s", (char *)function_4044a0((int64_t)g43), v1);
    }
    // 0x40294e
    _exit(g24);
    // UNREACHABLE
}
// Address range: 0x402970 - 0x402975
int64_t function_402970(int64_t fd, int32_t offset, int32_t length, int64_t advice) {
    // 0x402970
    return posix_fadvise((int32_t)fd, offset, length, (int32_t)advice);
}
// Address range: 0x402980 - 0x4029a1
int64_t function_402980(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402980
    if (stream == 0) {
        // 0x4029a0
        int64_t result; // 0x402980
        return result;
    }
    // 0x402985
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4029b0 - 0x402a26
int64_t function_4029b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4029b0
    if (a3 == 0) {
        // 0x4029f4
        return 0;
    }
    int64_t v1 = a3; // 0x4029cb
    int64_t v2 = a2; // 0x4029cb
    int64_t result = 0;
    int64_t v3 = function_4046d0(a1 & 0xffffffff, v2, v1); // 0x4029e9
    int64_t result2 = result; // 0x4029f2
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x402a08
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x4029d5
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x4029f4
            break;
        }
        result = v4;
        v3 = function_4046d0(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x4029f4
    return result2;
}
// Address range: 0x402a30 - 0x402ac9
int64_t function_402a30(int64_t str) {
    // 0x402a30
    if (str == 0) {
        // 0x402aa9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g36);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402a3e
    int64_t result = (int64_t)found_char_pos; // 0x402a3e
    if (found_char_pos == NULL) {
        // 0x402a99
        g44 = str;
        g35 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402a48
    if (v1 - str < 7) {
        // 0x402a99
        g44 = str;
        g35 = str;
        return result;
    }
    // 0x402a58
    bool v2; // 0x402a30
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402a30
    int64_t v5 = result - 6; // 0x402a30
    int64_t v6 = 7; // 0x402a66
    unsigned char v7 = *(char *)v5; // 0x402a66
    char v8 = *(char *)v4; // 0x402a66
    char v9 = v8; // 0x402a66
    bool v10 = false; // 0x402a66
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
    int64_t v12 = (int64_t)"lt-"; // 0x402a70
    int64_t v13 = v1; // 0x402a70
    int64_t v14 = 3; // 0x402a70
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402a99
        g44 = str;
        g35 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402a82
    char v16 = *(char *)v12; // 0x402a82
    char v17 = v16; // 0x402a82
    bool v18 = false; // 0x402a82
    while (v15 == v16) {
        // 0x402a72
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
    int64_t v20 = v1; // 0x402a8c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402a8e
        v20 = result + 4;
        g33 = v20;
    }
    // 0x402a99
    g44 = v20;
    g35 = v20;
    return result;
}
// Address range: 0x402ad0 - 0x402bc2
int64_t function_402ad0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402ae4
    int64_t result = (int64_t)v1; // 0x402ae4
    if (result != a1) {
        // 0x402af1
        return result;
    }
    int64_t v2 = function_405e70(); // 0x402b00
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402bb6
    if (v3 == 85) {
        // 0x402b10
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402ba8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x402b3e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x402b4b
        // 0x402af1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402ba8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x402b8d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x402b9a
    // 0x402af1
    return result4;
}
// Address range: 0x402bd0 - 0x402c27
int64_t function_402bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402bd0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402c18
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402c27 - 0x403df1
int64_t function_402c27(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402c71
    int64_t v3 = 0; // 0x402c71
    int64_t v4; // 0x402c27
    int64_t v5; // 0x402c27
    int64_t v6; // 0x402c27
    int64_t v7; // 0x402c27
    int64_t v8; // 0x402c27
    int64_t v9; // 0x402c27
    int64_t v10; // 0x402c27
    int64_t v11; // 0x402c27
    int64_t v12; // 0x402c27
    int64_t v13; // 0x402c27
    int64_t v14; // 0x402c27
    int64_t v15; // 0x402c27
    int64_t v16; // 0x402c27
    int64_t v17; // 0x402c27
    int64_t v18; // 0x402c27
    int64_t result; // 0x402c27
    int64_t v19; // 0x402c27
    int32_t wc; // bp+132, 0x402c27
    int64_t ps; // bp+136, 0x402c27
    char v20; // 0x4031e0
    int64_t v21; // 0x4031e0
    int64_t v22; // 0x403588
    int64_t v23; // 0x402c27
    int64_t v24; // 0x4035a7
    int32_t v25; // 0x402c27
    while (true) {
      lab_0x402c78_2:
        // 0x402c78
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402c27
        int64_t v27; // 0x402cac
        while (true) {
          lab_0x402c78:
            // 0x402c78
            v5 = v26;
            bool v28 = v15 == v5; // 0x402c83
            if (v15 == -1) {
                // 0x402c85
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402c93
            if (v28) {
                // break (via goto) -> 0x4033f8
                goto lab_0x4033f8;
            }
            // 0x402c9c
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
                    // 0x40328b
                    if (v25 % 2 == 0) {
                        goto lab_0x402dd1;
                    }
                    // 0x4036ad
                    v26 = v5 + 1;
                    goto lab_0x402c78;
                }
                case 7: {
                    goto lab_0x402dd1;
                }
                case 8: {
                    goto lab_0x402dd1;
                }
                case 9: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402dd1;
                }
                case 12: {
                    goto lab_0x402dd1;
                }
                case 13: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402d9d;
                }
                case 36: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402dd1;
                }
                case 38: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402dd1;
                }
                case 44: {
                    goto lab_0x402dd1;
                }
                case 45: {
                    goto lab_0x402dd1;
                }
                case 46: {
                    goto lab_0x402dd1;
                }
                case 47: {
                    goto lab_0x402dd1;
                }
                case 48: {
                    goto lab_0x402dd1;
                }
                case 49: {
                    goto lab_0x402dd1;
                }
                case 50: {
                    goto lab_0x402dd1;
                }
                case 51: {
                    goto lab_0x402dd1;
                }
                case 52: {
                    goto lab_0x402dd1;
                }
                case 53: {
                    goto lab_0x402dd1;
                }
                case 54: {
                    goto lab_0x402dd1;
                }
                case 55: {
                    goto lab_0x402dd1;
                }
                case 56: {
                    goto lab_0x402dd1;
                }
                case 57: {
                    goto lab_0x402dd1;
                }
                case 58: {
                    goto lab_0x402dd1;
                }
                case 59: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402dd1;
                }
                case 66: {
                    goto lab_0x402dd1;
                }
                case 67: {
                    goto lab_0x402dd1;
                }
                case 68: {
                    goto lab_0x402dd1;
                }
                case 69: {
                    goto lab_0x402dd1;
                }
                case 70: {
                    goto lab_0x402dd1;
                }
                case 71: {
                    goto lab_0x402dd1;
                }
                case 72: {
                    goto lab_0x402dd1;
                }
                case 73: {
                    goto lab_0x402dd1;
                }
                case 74: {
                    goto lab_0x402dd1;
                }
                case 75: {
                    goto lab_0x402dd1;
                }
                case 76: {
                    goto lab_0x402dd1;
                }
                case 77: {
                    goto lab_0x402dd1;
                }
                case 78: {
                    goto lab_0x402dd1;
                }
                case 79: {
                    goto lab_0x402dd1;
                }
                case 80: {
                    goto lab_0x402dd1;
                }
                case 81: {
                    goto lab_0x402dd1;
                }
                case 82: {
                    goto lab_0x402dd1;
                }
                case 83: {
                    goto lab_0x402dd1;
                }
                case 84: {
                    goto lab_0x402dd1;
                }
                case 85: {
                    goto lab_0x402dd1;
                }
                case 86: {
                    goto lab_0x402dd1;
                }
                case 87: {
                    goto lab_0x402dd1;
                }
                case 88: {
                    goto lab_0x402dd1;
                }
                case 89: {
                    goto lab_0x402dd1;
                }
                case 90: {
                    goto lab_0x402dd1;
                }
                case 91: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402dd1;
                }
                case 94: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402dd1;
                }
                case 96: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402dd1;
                }
                case 98: {
                    goto lab_0x402dd1;
                }
                case 99: {
                    goto lab_0x402dd1;
                }
                case 100: {
                    goto lab_0x402dd1;
                }
                case 101: {
                    goto lab_0x402dd1;
                }
                case 102: {
                    goto lab_0x402dd1;
                }
                case 103: {
                    goto lab_0x402dd1;
                }
                case 104: {
                    goto lab_0x402dd1;
                }
                case 105: {
                    goto lab_0x402dd1;
                }
                case 106: {
                    goto lab_0x402dd1;
                }
                case 107: {
                    goto lab_0x402dd1;
                }
                case 108: {
                    goto lab_0x402dd1;
                }
                case 109: {
                    goto lab_0x402dd1;
                }
                case 110: {
                    goto lab_0x402dd1;
                }
                case 111: {
                    goto lab_0x402dd1;
                }
                case 112: {
                    goto lab_0x402dd1;
                }
                case 113: {
                    goto lab_0x402dd1;
                }
                case 114: {
                    goto lab_0x402dd1;
                }
                case 115: {
                    goto lab_0x402dd1;
                }
                case 116: {
                    goto lab_0x402dd1;
                }
                case 117: {
                    goto lab_0x402dd1;
                }
                case 118: {
                    goto lab_0x402dd1;
                }
                case 119: {
                    goto lab_0x402dd1;
                }
                case 120: {
                    goto lab_0x402dd1;
                }
                case 121: {
                    goto lab_0x402dd1;
                }
                case 122: {
                    goto lab_0x402dd1;
                }
                case 123: {
                    goto lab_0x402d75;
                }
                case 124: {
                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402d75;
                }
                case 126: {
                    goto lab_0x402d9d;
                }
                default: {
                    goto lab_0x403175;
                }
            }
        }
      lab_0x403175:
        if (v23 != 1) {
            // 0x4034e0
            ps = 0;
            int64_t len = v15; // 0x4034f0
            if (v15 == -1) {
                // 0x4034f2
                len = strlen((char *)str);
            }
            // 0x40351e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40357f:
                // 0x40357f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403584
                int64_t v30 = v29 + str;
                v24 = function_405d30(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403afa_2;
                    }
                    case -1: {
                        goto lab_0x403afa_2;
                    }
                    case -2: {
                        // 0x403bdd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403c17
                            v19 = v18;
                            int64_t v31 = v18; // 0x403c1a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403c27
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403c20
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403afa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403afa_2;
                    }
                    case 1: {
                        goto lab_0x403550;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4035fc
                        char v34 = *(char *)v33; // 0x40360d
                        unsigned char v35; // 0x402c27
                        if (v34 < 125) {
                            // 0x403618
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40362f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403600
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40360d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403618
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40362f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403600
                            v33++;
                        }
                        goto lab_0x403550;
                    }
                }
            }
            goto lab_0x403afa_2;
        } else {
            // 0x4031c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402dd1;
        }
    }
  lab_0x4033f8:
    // 0x4033f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403cfa
        if (v8 > result) {
            // 0x403d03
            *(char *)(v12 + result) = 0;
        }
        // 0x403027
        return result;
    }
    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402dd1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402de0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402fea_2;
        }
    }
    int64_t v39 = result; // 0x402ee1
    char v40 = v20; // 0x402ee1
    int64_t v41 = v38; // 0x402ee1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ee1
    int64_t v43 = v36; // 0x402ee1
    goto lab_0x402e5d;
  lab_0x402fea_2:
    // 0x403027
    return function_402bd0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403afa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402dd1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4036ce
        int64_t v50 = v5 + 1; // 0x4037b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4037b8
        char v52 = v20; // 0x4037b8
        int64_t v53 = result; // 0x4037b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403781
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403785
            int64_t v56 = v54 + 1; // 0x40378a
            int64_t v57 = v51 + 1; // 0x4037b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40377c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403781
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403785
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
        goto lab_0x402e5d;
    }
  lab_0x403550:
    // 0x403550
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40356f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403572
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403afa
        goto lab_0x403afa_2;
    }
    goto lab_0x40357f;
  lab_0x402d9d:
    // 0x402d9d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402fea_2;
    }
    goto lab_0x402dd1;
  lab_0x402d75:;
    bool v60 = v15 == 1; // 0x402d80
    if (v15 == -1) {
        // 0x402d82
        v60 = *(char *)v1 == 0;
    }
    // 0x402d8e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402dd1;
    } else {
        goto lab_0x402d9d;
    }
  lab_0x402e5d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402e62
        *(char *)(v44 + v45) = v40;
    }
    // 0x402e66
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402c78_2;
}
// Address range: 0x403e00 - 0x403f9e
int64_t function_403e00(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403e02
    int32_t * v3 = __errno_location(); // 0x403e1c
    int64_t v4 = (int64_t)g26; // 0x403e21
    int32_t v5 = *v3; // 0x403e2b
    int64_t v6 = v4; // 0x403e41
    if (v2 >= (int64_t)*(int32_t *)&g29) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403f99
            function_404f20(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403e50
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403e57
        int64_t v9; // 0x403e00
        if (g26 == &g27) {
            int64_t v10 = function_404d30(0, v8); // 0x403f7a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g27); // 0x403f7f
            *(int64_t *)&g26 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404d30(v4, v8); // 0x403e6b
            *(int64_t *)&g26 = v12;
            v9 = v12;
        }
        // 0x403e7a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g29; // 0x403e7a
        int32_t v14 = v7; // 0x403e81
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g29 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403eb1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403ebb
    int64_t * v17 = (int64_t *)v15; // 0x403ebe
    uint64_t v18 = *v17; // 0x403ebe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403ec1
    int64_t result = *v19; // 0x403ec1
    int64_t v20; // 0x403e00
    uint64_t v21 = function_402bd0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ee4
    if (v18 > v21) {
        // 0x403f5b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403ef7
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x403f07
        free((int64_t *)result);
    }
    int64_t result2 = function_404cd0(v22); // 0x403f21
    *v19 = result2;
    int64_t v23; // 0x403e00
    function_402bd0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403f5b
    *v3 = v5;
    return result2;
}
// Address range: 0x403fa0 - 0x403fd4
int64_t function_403fa0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403fa7
    int64_t result = function_404ed0(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x403fc6
    return result;
}
// Address range: 0x403fe0 - 0x403fef
int64_t function_403fe0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x403fec
    return result;
}
// Address range: 0x403ff0 - 0x403fff
int64_t function_403ff0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x403ff8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x404000 - 0x404033
int64_t function_404000(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x404019
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40401e
    uint32_t v3 = *v2; // 0x40401e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404022
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404040 - 0x404053
int64_t function_404040(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x40404c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404060 - 0x40408b
int64_t function_404060(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x404068
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404085
        abort();
        // UNREACHABLE
    }
    // 0x40407c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x404090 - 0x404102
int64_t function_404090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x4040b2
    int32_t * v2 = __errno_location(); // 0x4040bb
    uint32_t v3 = *(int32_t *)v1; // 0x4040db
    int64_t result = function_402bd0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4040ea
    return result;
}
// Address range: 0x404110 - 0x4041f1
int64_t function_404110(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x404132
    int32_t * v2 = __errno_location(); // 0x404138
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404157
    int32_t * v4 = (int32_t *)v1; // 0x40415a
    int64_t v5 = function_402bd0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404175
    int64_t v6 = v5 + 1; // 0x40417a
    int64_t result = function_404cd0(v6); // 0x40418f
    function_402bd0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4041d4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4041dd
    return result;
}
// Address range: 0x404200 - 0x40420a
int64_t function_404200(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404200
    return function_404110(a1, a2, 0, a3);
}
// Address range: 0x404210 - 0x4042a5
int64_t function_404210(void) {
    uint32_t v1 = *(int32_t *)&g29; // 0x404210
    int64_t v2 = v1; // 0x404210
    int64_t v3 = v2; // 0x404224
    if (v1 >= 2) {
        int64_t v4 = &g29;
        int64_t v5 = v4 + 16; // 0x404243
        free((int64_t *)*(int64_t *)v4);
        v3 = &g56;
        while (v5 != (int64_t)g26 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404240
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g56;
        }
    }
    int64_t v6 = v3; // 0x40425d
    if (g27 != 0x60a300) {
        // 0x40425f
        free((int64_t *)g27);
        g27 = 256;
        *(int64_t *)&g28 = (int64_t)&g45;
        v6 = &g56;
    }
    int64_t result = v6; // 0x404281
    if (g26 != &g27) {
        // 0x404283
        free(g26);
        *(int64_t *)&g26 = (int64_t)&g27;
        result = &g56;
    }
    // 0x404296
    *(int32_t *)&g29 = 1;
    return result;
}
// Address range: 0x4042b0 - 0x4042c1
int64_t function_4042b0(void) {
    // 0x4042b0
    int64_t v1; // 0x4042b0
    return function_403e00(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x4042d0 - 0x4042da
int64_t function_4042d0(void) {
    // 0x4042d0
    int64_t v1; // 0x4042d0
    return function_403e00(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x4042e0 - 0x4042f6
int64_t function_4042e0(int64_t a1) {
    // 0x4042e0
    return function_403e00(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x404300 - 0x404312
int64_t function_404300(int64_t a1, int64_t a2) {
    // 0x404300
    return function_403e00(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x404320 - 0x404388
int64_t function_404320(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404330
    return function_403e00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404390 - 0x4043f4
int64_t function_404390(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4043a0
    return function_403e00((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404400 - 0x40440c
int64_t function_404400(int64_t a1, int64_t a2) {
    // 0x404400
    return function_404320(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404410 - 0x40441f
int64_t function_404410(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404410
    return function_404390(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404420 - 0x404490
int64_t function_404420(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x40442d
    int128_t v2 = __asm_movdqa(g47); // 0x404435
    int128_t v3 = __asm_movdqa(g48); // 0x40443d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404452
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404468
    uint32_t v6 = *v5; // 0x404468
    uint32_t v7 = (int32_t)a3 % 32; // 0x40446d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403e00(0, a1, a2, &v4);
}
// Address range: 0x404490 - 0x40449d
int64_t function_404490(int64_t a1, int64_t a2) {
    // 0x404490
    return function_404420(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4044a0 - 0x4044b1
int64_t function_4044a0(int64_t a1) {
    // 0x4044a0
    return function_404420(a1, -1, 58);
}
// Address range: 0x4044c0 - 0x4044ca
int64_t function_4044c0(void) {
    // 0x4044c0
    int64_t v1; // 0x4044c0
    return function_404420(v1, v1, 58);
}
// Address range: 0x4044d0 - 0x40453e
int64_t function_4044d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4044ea
    return function_403e00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404540 - 0x4045ac
int64_t function_404540(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x404547
    int128_t v2 = __asm_movdqa(g47); // 0x40454f
    int128_t v3 = __asm_movdqa(g48); // 0x404557
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404579
    if (a2 == 0 || a3 == 0) {
        // 0x4045a7
        abort();
        // UNREACHABLE
    }
    // 0x40458a
    return function_403e00(a1, a4, a5, &v4);
}
// Address range: 0x4045b0 - 0x4045b9
int64_t function_4045b0(void) {
    // 0x4045b0
    int64_t v1; // 0x4045b0
    return function_404540(v1, v1, v1, v1, -1);
}
// Address range: 0x4045c0 - 0x4045d7
int64_t function_4045c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045c0
    return function_404540(0, a1, a2, a3, -1);
}
// Address range: 0x4045e0 - 0x4045f3
int64_t function_4045e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4045e0
    return function_404540(0, a1, a2, a3, a4);
}
// Address range: 0x404600 - 0x40460a
int64_t function_404600(void) {
    // 0x404600
    int64_t v1; // 0x404600
    return function_403e00(v1, v1, v1, &g25);
}
// Address range: 0x404610 - 0x404622
int64_t function_404610(int64_t a1, int64_t a2) {
    // 0x404610
    return function_403e00(0, a1, a2, &g25);
}
// Address range: 0x404630 - 0x404641
int64_t function_404630(void) {
    // 0x404630
    int64_t v1; // 0x404630
    return function_403e00(v1, v1, -1, &g25);
}
// Address range: 0x404650 - 0x404666
int64_t function_404650(int64_t a1) {
    // 0x404650
    return function_403e00(0, a1, -1, &g25);
}
// Address range: 0x404670 - 0x4046ce
int64_t function_404670(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x404691
    while (result < 0) {
        // 0x40469e
        if (*__errno_location() != 4) {
            // break -> 0x4046aa
            break;
        }
        result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x4046d0 - 0x40472e
int64_t function_4046d0(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x4046f1
    while (result < 0) {
        // 0x4046fe
        if (*__errno_location() != 4) {
            // break -> 0x40470a
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x404730 - 0x404b0d
int64_t function_404730(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4047c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40474c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404766
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4047ab
    if (a6 < 10) {
        // 0x4047ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4048b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404b10 - 0x404b30
int64_t function_404b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404b10
    if (a5 == 0) {
        // 0x404b2b
        return function_404730(a1, a2, a3, a4, a5, 0, (int64_t)&g56);
    }
    int64_t v1 = 0; // 0x404b17
    v1++;
    int64_t v2 = v1; // 0x404b29
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404b20
        v1++;
        v2 = v1;
    }
    // 0x404b2b
    return function_404730(a1, a2, a3, a4, a5, v2, (int64_t)&g56);
}
// Address range: 0x404b30 - 0x404b90
int64_t function_404b30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404b30
    int64_t v3 = &v2; // 0x404b30
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404b63
    int64_t v6; // 0x404b4d
    int64_t * v7; // 0x404b6b
    int64_t v8; // 0x404b6b
    int64_t v9; // 0x404b77
    if (v5 < 48) {
        // 0x404b40
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404b83
            break;
        }
    } else {
        // 0x404b6b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404b83
            break;
        }
    }
    int64_t v10 = 10; // 0x404b61
    while (v4 != 9) {
        // 0x404b59
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404b40
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404b83
                break;
            }
        } else {
            // 0x404b6b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404b83
                break;
            }
        }
        // 0x404b59
        v10 = 10;
    }
    // 0x404b83
    return function_404730(a1, a2, a3, a4, v3, v10, (int64_t)&g56);
}
// Address range: 0x404b90 - 0x404c4c
int64_t function_404b90(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404b90
    int64_t v1; // bp-168, 0x404b90
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404b90
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404b90
    int64_t v8; // 0x404b90
    int64_t v9; // bp-56, 0x404b90
    int64_t v10; // 0x404bf5
    int64_t v11; // 0x404c19
    if ((int32_t)v6 < 48) {
        // 0x404be0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404c30
            break;
        }
    } else {
        // 0x404c12
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404c30
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404c0a
    int64_t v13 = 10; // 0x404c0a
    while (v5 != 9) {
        // 0x404c0c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404be0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404c30
                break;
            }
        } else {
            // 0x404c12
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404c30
                break;
            }
        }
        // 0x404c02
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404c30
    int64_t v14; // bp-136, 0x404b90
    int64_t result = function_404730(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g56); // 0x404c3f
    return result;
}
// Address range: 0x404c50 - 0x404cc4
int64_t function_404c50(int64_t a1) {
    // 0x404c50
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404cb3
    return fputs_unlocked(v1, g34);
}
// Address range: 0x404cd0 - 0x404cea
int64_t function_404cd0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404cd4
    if (size != 0 != (mem == NULL)) {
        // 0x404ce3
        return (int64_t)mem;
    }
    // 0x404ce5
    function_404f20(size);
    // UNREACHABLE
}
// Address range: 0x404cf0 - 0x404d11
int64_t function_404cf0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404cf3
    int64_t v2 = v1; // 0x404cf3
    if (v2 < 0) {
        // 0x404d0b
        function_404f20(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404d09
        return function_404cd0(v2);
    }
    // 0x404d0b
    function_404f20(v2);
    // UNREACHABLE
}
// Address range: 0x404d20 - 0x404d22
int64_t function_404d20(void) {
    // 0x404d20
    int64_t v1; // 0x404d20
    return function_404cd0(v1);
}
// Address range: 0x404d30 - 0x404d66
int64_t function_404d30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404d58
        free(v1);
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404d41
    if (a2 != 0 != (mem == NULL)) {
        // 0x404d50
        return (int64_t)mem;
    }
    // 0x404d61
    function_404f20(a1);
    // UNREACHABLE
}
// Address range: 0x404d70 - 0x404d91
int64_t function_404d70(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404d73
    int64_t v2 = v1; // 0x404d73
    if (v2 < 0) {
        // 0x404d8b
        function_404f20(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404d89
        return function_404d30(a1, v2);
    }
    // 0x404d8b
    function_404f20(a1);
    // UNREACHABLE
}
// Address range: 0x404da0 - 0x404e26
int64_t function_404da0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404dfb
            function_404f20(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404d30(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404de3
    if (a2 == 0) {
        // 0x404e08
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404de8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404dfb
        function_404f20(a1);
        // UNREACHABLE
    }
    // 0x404dca
    *(int64_t *)a2 = v2;
    return function_404d30(a1, v2 * a3);
}
// Address range: 0x404e30 - 0x404e80
int64_t function_404e30(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404e30
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404e7a
            function_404f20(a1);
            // UNREACHABLE
        }
        // 0x404e52
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404d30(a1, v1);
    }
    if (a2 == 0) {
        // 0x404e65
        *(int64_t *)a2 = 128;
        return function_404d30(0, 128);
    }
    // 0x404e78
    if (a2 < 0) {
        // 0x404e7a
        function_404f20(a1);
        // UNREACHABLE
    }
    // 0x404e52
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404d30(a1, v1);
}
// Address range: 0x404e80 - 0x404e97
int64_t function_404e80(int64_t a1, int64_t a2) {
    // 0x404e80
    return (int64_t)memset((int64_t *)function_404cd0(a1), 0, (int32_t)a1);
}
// Address range: 0x404ea0 - 0x404ece
int64_t function_404ea0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404ea7
    if ((int64_t)v1 < 0) {
        // 0x404ec9
        function_404f20(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404ec9
        function_404f20(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404eba
    if (mem != NULL) {
        // 0x404ec4
        return (int64_t)mem;
    }
    // 0x404ec9
    function_404f20(nmemb);
    // UNREACHABLE
}
// Address range: 0x404ed0 - 0x404ef8
int64_t function_404ed0(int64_t a1, int64_t a2) {
    int64_t v1 = function_404cd0(a2); // 0x404edf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404f00 - 0x404f13
int64_t function_404f00(int64_t str) {
    // 0x404f00
    return function_404ed0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404f20 - 0x404f51
int64_t function_404f20(int64_t a1) {
    // 0x404f20
    error(g24, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404f60 - 0x40503f
int64_t function_404f60(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x404f6c
    uint32_t v2 = *v1; // 0x404f6c
    int64_t v3 = a2 & 0xffffffff; // 0x404f71
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404f74
    uint64_t v5 = (int64_t)*v4; // 0x404f74
    int64_t v6; // 0x404fe2
    if (v3 <= v5) {
      lab_0x404fdc_2:
        // 0x404fdc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404f62
    int64_t v8 = v2; // 0x404f60
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x404fdc
        goto lab_0x404fdc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404f98
    int64_t v17; // 0x404fa6
    int64_t * v18; // 0x404fc0
    int64_t * v19; // 0x404fc3
    int64_t v20; // 0x404fce
    int64_t v21; // 0x404fa6
    while ((v16 & 0xffffffff) > v10) {
        // 0x404fa3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404fc0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x404fd7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x404fdc
            goto lab_0x404fdc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x404fdc
            goto lab_0x404fdc_2;
        }
        // 0x404f92
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40501b
    int64_t * v23 = (int64_t *)v22; // 0x405020
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405023
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405020
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405037
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x404f8d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x404fdc
            goto lab_0x404fdc_2;
        }
        // 0x404f92
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404fa3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404fc0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x404fd7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x404fdc
                goto lab_0x404fdc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x404fdc
                goto lab_0x404fdc_2;
            }
            // 0x404f92
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405000
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405020
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405037
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x404fdc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405040 - 0x40565c
int64_t function_405040(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40505f
    int64_t v2 = *v1; // 0x40505f
    char * str2 = (char *)v2; // 0x40506c
    char c = *str2; // 0x40506c
    int64_t v3 = v2; // 0x405098
    int64_t v4 = 0; // 0x405040
    int32_t v5; // 0x405040
    int64_t v6; // 0x405040
    int64_t v7; // 0x405040
    int64_t v8; // 0x405040
    int64_t v9; // 0x405040
    int64_t v10; // 0x405040
    int64_t v11; // 0x405040
    int64_t v12; // 0x405040
    int64_t v13; // 0x405040
    int64_t str3; // 0x405040
    int64_t v14; // 0x405040
    int64_t v15; // 0x405040
    int64_t v16; // 0x405040
    int64_t v17; // 0x405040
    int32_t v18; // 0x405040
    int32_t v19; // 0x405040
    int32_t v20; // 0x405040
    int32_t v21; // 0x405040
    int32_t v22; // 0x405040
    int32_t v23; // 0x405040
    int32_t v24; // 0x405040
    int32_t v25; // 0x405040
    int32_t v26; // 0x405040
    int32_t v27; // 0x405040
    int32_t v28; // 0x405040
    int32_t v29; // 0x405040
    int64_t nmemb; // 0x405040
    int64_t v30; // 0x405040
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40509c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405098
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4050a8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4050ae
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405078
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4050dc
                int64_t v34; // 0x405040
                int64_t v35; // 0x405040
                if (strncmp(str, str2, n) == 0) {
                    // 0x4050e5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405260;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4050f6
                int64_t v37 = *(int64_t *)v36; // 0x4050fa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4050d0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4050e5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405260;
                        }
                    }
                    // 0x4050f6
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
                  lab_0x405146:
                    // 0x405146
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
                        goto lab_0x4051a0;
                    } else {
                        if (v11 == 0) {
                            // 0x405310
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4051a0;
                        } else {
                            if (v39 == 0) {
                                // 0x4052c0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40516a;
                                } else {
                                    // 0x4052cc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40516a;
                                    } else {
                                        // 0x4052da
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40516a;
                                        } else {
                                            goto lab_0x4051a0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40516a;
                            }
                        }
                    }
                }
              lab_0x4051b1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405386
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405532
                            flockfile(g36);
                            int64_t v41 = *v1; // 0x405552
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40559f
                            int64_t v43 = (int64_t)g36;
                            int64_t v44 = v43; // 0x4055b9
                            int64_t v45; // 0x4055bb
                            if (*(char *)v42 != 0) {
                                // 0x4055bb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g36;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4055b3
                            while (v17 + nmemb != v42) {
                                // 0x4055b5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4055bb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g36;
                                }
                                // 0x4055a8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4055e0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g36);
                            v40 = *v1;
                        } else {
                            // 0x405394
                            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4054ef
                        free((int64_t *)v17);
                    }
                    // 0x4053e9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405400
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4052ae
                    return 63;
                }
                // 0x4051d0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405254
                    v35 = v13;
                    v34 = v25;
                  lab_0x405260:;
                    int32_t * v49 = (int32_t *)a7; // 0x405270
                    uint32_t v50 = *v49; // 0x405270
                    int64_t v51 = v50; // 0x405270
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40527a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405283
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4054af
                                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40545a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4052ae
                            return 63;
                        }
                        // 0x4052f8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40560f
                                    __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40550d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405520
                                // 0x4052ae
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40541e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405432
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40529b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40529e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4052a2
                    int64_t result = v59; // 0x4052a8
                    if (v58 != 0) {
                        // 0x4052aa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4052ae
                    return result;
                }
            } else {
                // 0x4050ae
                v5 = v32;
            }
            // break -> 0x4051d5
            break;
        }
    }
    // 0x4051d5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4051ed
        if (*(char *)(v60 + 1) != 45) {
            // 0x4051f7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4052ae
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405339
        __fprintf_chk(g36, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405226
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405236
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4051a0:
    // 0x4051a0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4051a0
    int64_t v63 = *(int64_t *)v62; // 0x4051a4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4051b1
        goto lab_0x4051b1;
    }
    goto lab_0x405146;
  lab_0x40516a:
    // 0x40516a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405040
    int32_t v65; // 0x405040
    int32_t v66; // 0x405040
    if (v27 != 0) {
        goto lab_0x4051a0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405320
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4051a0;
            } else {
                goto lab_0x405191;
            }
        } else {
            // 0x405185
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40547c
                int64_t v67 = (int64_t)mem; // 0x40547c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4051a0;
                } else {
                    // 0x40548f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405191;
                }
            } else {
                goto lab_0x405191;
            }
        }
    }
  lab_0x405191:
    // 0x405191
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4051a0;
}
// Address range: 0x405660 - 0x405c26
int64_t function_405660(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405681
    if (v3 < 1) {
        // 0x40583e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40567d
    int32_t v5 = *(int32_t *)a7; // 0x405689
    uint64_t v6 = a1 & 0xffffffff; // 0x40568b
    int64_t v7 = v2; // 0x405690
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405693
    *v8 = 0;
    int64_t v9; // 0x405660
    int64_t v10; // 0x405660
    int64_t v11; // 0x405660
    int64_t v12; // 0x405660
    int64_t str; // 0x405660
    int64_t v13; // 0x405660
    int64_t v14; // 0x405660
    int64_t v15; // 0x405660
    int64_t v16; // 0x405660
    int64_t v17; // 0x405660
    int32_t v18; // 0x405660
    char v19; // 0x405660
    if (v5 == 0) {
        // 0x405878
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4056aa;
    } else {
        // 0x4056a3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4056f0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4056f3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4057b8;
            } else {
                int64_t v22 = v7 + 1; // 0x405706
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405716
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4057cc;
                } else {
                    goto lab_0x405728;
                }
            }
        } else {
            goto lab_0x4056aa;
        }
    }
  lab_0x4056aa:
    // 0x4056aa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4056b0
    *v24 = 0;
    int64_t v25; // 0x405660
    int64_t v26; // 0x405660
    int64_t v27; // 0x405660
    switch (*(char *)&v2) {
        case 45: {
            // 0x4057a0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4057ad;
        }
        case 43: {
            // 0x405ab0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4057ad;
        }
        default: {
            // 0x4056cc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405a2f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405b48
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4057ad;
                } else {
                    // 0x405a3d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4056da;
                }
            } else {
                goto lab_0x4056da;
            }
        }
    }
  lab_0x4057b8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4057bf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405728;
    } else {
        goto lab_0x4057cc;
    }
  lab_0x4056da:
    // 0x4056da
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4057ad;
  lab_0x4057ad:
    // 0x4057ad
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4057b8;
  lab_0x405728:;
    uint32_t v30 = *(int32_t *)a7; // 0x405728
    int64_t v31 = v30; // 0x405728
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40572a
    if ((int64_t)*v32 > v31) {
        // 0x40572f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405732
    if (*v33 > v30) {
        // 0x405737
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40573a
    int64_t v35 = v31; // 0x40573e
    int64_t v36 = v15; // 0x40573e
    int64_t v37; // 0x405660
    int64_t v38; // 0x405660
    int64_t v39; // 0x405660
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4058a8
        int64_t v41 = v40; // 0x4058a8
        v2 = v41;
        int64_t v42; // 0x405660
        if (*v33 == v40) {
            // 0x405a90
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405a98
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4058b4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4058c8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4058d1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4058da
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4058f1
            int64_t v47 = v45 & 0xffffffff; // 0x4058f5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4058fe
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405904
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405906;
                }
            }
            int64_t v48 = v47 + 1; // 0x4058e0
            int64_t v49 = v48 & 0xffffffff; // 0x4058e0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4058f1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4058fe
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405904
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405906;
                    }
                }
                // 0x4058e0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405aa8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405906;
    } else {
        goto lab_0x405744;
    }
  lab_0x4057cc:
    // 0x4057cc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4057cf
    int64_t v51 = v12; // 0x4057cf
    int64_t v52 = v14; // 0x4057cf
    if (*(char *)v10 == 0) {
        goto lab_0x405728;
    } else {
        goto lab_0x4057d5;
    }
  lab_0x405744:;
    int32_t v53 = v35; // 0x405744
    int64_t v54; // 0x405660
    int64_t v55; // 0x405660
    int64_t v56; // 0x405660
    int64_t v57; // 0x405660
    int64_t v58; // 0x405660
    int64_t v59; // 0x405660
    char * v60; // 0x405660
    int64_t v61; // 0x405660
    int64_t v62; // 0x405759
    int64_t v63; // 0x405660
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405893
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405896;
    } else {
        // 0x40574c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405660
        int64_t v66 = v65 ? -1 : 1; // 0x405760
        int64_t v67 = (int64_t)"--"; // 0x405660
        int64_t v68 = v62; // 0x405660
        int64_t v69 = 3; // 0x405760
        unsigned char v70 = *(char *)v68; // 0x405760
        char v71 = *(char *)v67; // 0x405760
        char v72 = v71; // 0x405760
        bool v73 = false; // 0x405760
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
            // 0x405850
            if (*(char *)v62 == 45) {
                // 0x405910
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405910
                if (c == 0) {
                    goto lab_0x40585a;
                } else {
                    // 0x40591d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4059a0;
                    } else {
                        if (c == 45) {
                            // 0x405b83
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4059f5;
                        } else {
                            // 0x40592e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4059a0;
                            } else {
                                // 0x405933
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405954;
                                } else {
                                    // 0x40593a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4059a0;
                                    } else {
                                        goto lab_0x405954;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40585a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405770
            v2 = v75;
            int32_t v76 = *v32; // 0x405773
            int64_t v77 = v35 + 1; // 0x405776
            int32_t v78 = v77; // 0x405779
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405ae0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405787
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405795
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405896;
        }
    }
  lab_0x4057d5:;
    // 0x4057d5
    int64_t v79; // bp-104, 0x405660
    int64_t v80 = &v79; // 0x40566a
    int64_t v81 = v50 + 1; // 0x4057d5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4057dc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4057e1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4057e5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4057e9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4057f1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4057f6
    int32_t c2 = v84; // 0x4057f6
    char * found_char_pos = strchr(str2, c2); // 0x4057f6
    int64_t v87 = *v82; // 0x4057fb
    v2 = v87;
    int64_t v88 = *v85; // 0x405805
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405810
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405b00
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405acd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40583e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4057f6
    char v91 = *(char *)(v90 + 1); // 0x40582b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4057e5
        if (v91 != 58) {
            // 0x40583e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405a54
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405b58
                *v8 = 0;
            } else {
                // 0x405b3c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405a7e
            *v83 = 0;
            // 0x40583e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405a5e
        if (v93 != 0) {
            // 0x405af0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405a7e
            *v83 = 0;
            // 0x40583e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405a71
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405a7e
            *v83 = 0;
            // 0x40583e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405bba
            __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405b6a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405b71
        // 0x405a7e
        *v83 = 0;
        // 0x40583e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4059c9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4059cb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405bf0
                __fprintf_chk(g36, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405ba1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405ba8
            // 0x40583e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4059d6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4059da
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4059f5;
  lab_0x405906:
    // 0x405906
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405744;
  lab_0x4059f5:;
    int64_t v99 = function_405040(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405a13
    // 0x40583e
    return v99 & 0xffffffff;
  lab_0x405896:;
    int32_t v100 = v55; // 0x405896
    if (v100 != (int32_t)v59) {
        // 0x40589a
        *(int32_t *)a7 = v100;
    }
    // 0x40583e
    return 0xffffffff;
  lab_0x40585a:
    // 0x40585a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405861
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40583e
    return v99 & 0xffffffff;
  lab_0x4059a0:
    // 0x4059a0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4057d5;
  lab_0x405954:
    // 0x405954
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405040(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g9); // 0x40597a
    if ((int32_t)v101 != -1) {
        // 0x40583e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40598f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4059a0;
}
// Address range: 0x405c30 - 0x405c86
int64_t function_405c30(int64_t a1) {
    // 0x405c30
    *(int32_t *)&g49 = g32;
    *(int32_t *)&g50 = g31;
    int64_t v1; // 0x405c30
    int64_t result = function_405660(v1, v1, v1, v1, v1, v1, &g49, a1 & 0xffffffff); // 0x405c56
    g32 = *(int32_t *)&g49;
    g54 = g52;
    *(int32_t *)&g30 = g51;
    return result;
}
// Address range: 0x405c90 - 0x405ca8
int64_t function_405c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405c90
    return function_405c30(1);
}
// Address range: 0x405cb0 - 0x405cc3
int64_t function_405cb0(int32_t a1, int64_t a2, char * a3, char (**a4)[16], int32_t a5, int64_t a6) {
    // 0x405cb0
    return function_405c30(0);
}
// Address range: 0x405cd0 - 0x405ce5
int64_t function_405cd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405cd0
    return function_405660(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405cf0 - 0x405d06
int64_t function_405cf0(void) {
    // 0x405cf0
    return function_405c30(0);
}
// Address range: 0x405d10 - 0x405d28
int64_t function_405d10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405d10
    return function_405660(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405d30 - 0x405daa
int64_t function_405d30(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405d3b
    int64_t v2 = (int64_t)&g10; // 0x405d3b
    int32_t * pwc; // 0x405d30
    int64_t v3; // 0x405d30
    int64_t n; // 0x405d30
    if (a2 == 0) {
        goto lab_0x405d82;
    } else {
        // 0x405d3d
        if (a3 == 0) {
            // 0x405d68
            return -2;
        }
        // 0x405d49
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405d82;
        } else {
            goto lab_0x405d54;
        }
    }
  lab_0x405d82:
    // 0x405d82
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405d30
    pwc = (int32_t *)&v4;
    goto lab_0x405d54;
  lab_0x405d54:;
    char * wstr = (char *)v3; // 0x405d5a
    int64_t ps; // 0x405d30
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x405d5a
    int64_t result = v5; // 0x405d5a
    if (v5 < 0xfffffffe) {
        // 0x405d68
        return result;
    }
    int64_t result2 = result; // 0x405d99
    if ((char)function_405e10(0, v3) == 0) {
        // 0x405d9b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405d68
    return result2;
}
// Address range: 0x405db0 - 0x405e0d
int64_t function_405db0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405db7
    int64_t v2; // 0x405db0
    int64_t result = function_4063e0(a1, v2); // 0x405dc8
    if ((v2 & 32) != 0) {
        // 0x405df0
        if ((int32_t)result == 0) {
            // 0x405df4
            *__errno_location() = 0;
        }
        // 0x405dea
        return 0xffffffff;
    }
    // 0x405dd1
    if ((int32_t)result == 0) {
        // 0x405dea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x405dd8
    if (v1 == 0) {
        // 0x405dda
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x405dea
    return result2;
}
// Address range: 0x405e10 - 0x405e6e
int64_t function_405e10(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405e16
    if (locale == NULL) {
        // 0x405e43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405e16
    bool v2; // 0x405e10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x405e10
    int64_t v5 = v1; // 0x405e10
    int64_t v6 = 2; // 0x405e35
    unsigned char v7 = *(char *)v5; // 0x405e35
    char v8 = *(char *)v4; // 0x405e35
    char v9 = v8; // 0x405e35
    bool v10 = false; // 0x405e35
    while (v7 == v8) {
        // 0x405e28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405e41
    int64_t v13 = v1; // 0x405e41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405e43
        return 0;
    }
    int64_t v14 = 6; // 0x405e41
    unsigned char v15 = *(char *)v13; // 0x405e5d
    char v16 = *(char *)v12; // 0x405e5d
    char v17 = v16; // 0x405e5d
    bool v18 = false; // 0x405e5d
    while (v15 == v16) {
        // 0x405e50
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
// Address range: 0x405e70 - 0x4063d2
int64_t function_405e70(void) {
    char * v1 = nl_langinfo(14); // 0x405e86
    char * v2 = g53; // 0x405e8b
    char * v3; // 0x405e70
    int64_t v4; // 0x405e70
    int64_t v5; // 0x405e70
    int64_t v6; // 0x405e70
    int64_t v7; // 0x405e70
    int32_t size; // 0x405e70
    int32_t size2; // 0x405e70
    int32_t len; // 0x405f42
    int64_t v8; // 0x405f42
    char * env_val; // 0x405f2d
    if (v2 == NULL) {
        // 0x405f28
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405f95;
        } else {
            // 0x405f3a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405f95;
            } else {
                // 0x405f3f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405f2d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4063c5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405f95;
                    } else {
                        // 0x406339
                        size2 = len + 14;
                        goto lab_0x405f5b;
                    }
                } else {
                    goto lab_0x405f5b;
                }
            }
        }
    } else {
        // 0x405e70
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405eaa;
    }
  lab_0x4061dc:;
    // 0x4061dc
    struct _IO_FILE * stream; // 0x40601b
    int32_t v10 = __uflow(stream); // 0x4061df
    int64_t v11; // 0x405e70
    int64_t v12 = v11; // 0x4061e9
    int64_t v13; // 0x405e70
    int64_t v14 = v13; // 0x4061e9
    int32_t v15 = v10; // 0x4061e9
    int64_t v16; // 0x405e70
    int64_t v17 = v16; // 0x4061e9
    int64_t v18 = v11; // 0x4061e9
    int64_t v19 = v13; // 0x4061e9
    int64_t v20 = v16; // 0x4061e9
    if (v10 == -1) {
        // break -> 0x4061ef
        goto lab_0x4061ef;
    }
    goto lab_0x406069;
  lab_0x40605e:;
    // 0x40605e
    int64_t v90; // 0x405e70
    int64_t * v32; // 0x406050
    *v32 = v90 + 1;
    int64_t v89; // 0x405e70
    v12 = v89;
    int64_t v91; // 0x405e70
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405e70
    v17 = v92;
    goto lab_0x406069;
  lab_0x406069:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405e70
    int32_t v25; // bp-120, 0x405e70
    int32_t v26; // bp-184, 0x405e70
    int64_t v27; // 0x40601b
    int64_t v28; // 0x406038
    int64_t v29; // 0x40603d
    int64_t * v30; // 0x406054
    switch (c) {
        case 32: {
            goto lab_0x406050;
        }
        case 10: {
            goto lab_0x406050;
        }
        case 9: {
            goto lab_0x406050;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406241
            int32_t v33; // 0x405e70
            char v34; // 0x405e70
            int32_t v35; // 0x40624e
            if (v31 < *v30) {
                // 0x406220
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40624b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406241
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406220
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40624b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406230
                v36 = v33;
            }
            // 0x40631f
            if (v36 == -1) {
                // break -> 0x4061ef
                break;
            }
            goto lab_0x406050;
        }
        default: {
            // 0x40607f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4061ef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4060a8
            int64_t v39 = v37 + 4; // 0x4060aa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4060b6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4060b8
            while (v41 == 0) {
                // 0x4060a8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4060d6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4060e2
            int64_t v45 = v43 + 4; // 0x4060e4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4060f0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4060f2
            while (v47 == 0) {
                // 0x4060e2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4060df
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406108
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406118
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40611c
            int64_t v52 = v51 + v48; // 0x406125
            int64_t * mem; // 0x405e70
            int64_t v53; // 0x405e70
            int64_t v54; // 0x405e70
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40625b
                int64_t v56 = v55 + 3; // 0x406267
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406141
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406150
            if (mem == NULL) {
                // 0x40637c
                free((int64_t *)v21);
                function_4063e0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x405ff4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406168
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406172
            uint32_t v62 = (int32_t)v59; // 0x406175
            int64_t v63; // 0x405e70
            if (v62 >= 8) {
                // 0x406284
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40629e
                int64_t v66 = v61 - v65; // 0x4062a2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4062ad
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4062be
                    int64_t v70 = v69 & 0xffffffff; // 0x4062be
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4062bb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40634f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406187
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40618b
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
            int64_t v73 = v51 + 1; // 0x40619b
            int64_t v74 = v60 - 1; // 0x40619f
            uint32_t v75 = (int32_t)v73; // 0x4061a4
            int64_t v76; // 0x405e70
            if (v75 >= 8) {
                // 0x4062d2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4062dc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4062ec
                int64_t v80 = v74 - v79; // 0x4062f0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4062fb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40630b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406309
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406366
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40636e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4061b6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4061ba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4063b3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4061ce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40605e;
            } else {
                goto lab_0x4061dc;
            }
        }
    }
  lab_0x406050:;
    int64_t v93 = v23; // 0x405e70
    int64_t v94 = v22; // 0x405e70
    int64_t v95 = v21; // 0x405e70
    goto lab_0x406050_2;
  lab_0x405f95:;
    int64_t * mem3 = malloc(size); // 0x405f95
    int64_t v97 = (int64_t)&g10; // 0x405fa0
    int64_t v98; // 0x405e70
    int64_t path; // 0x405e70
    if (mem3 == NULL) {
        goto lab_0x405f72;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405f95
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405fb6;
    }
  lab_0x405eaa:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x405e9d
    char v100 = *v3; // 0x405eaa
    int64_t v101; // 0x405e70
    if (v100 == 0) {
        // 0x405f04
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405e70
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405e70
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405ef0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405ef7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405ec0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405ecd
        char v107 = *(char *)v106; // 0x405ed2
        v102 = v107;
        if (v107 == 0) {
            // 0x405f04
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405edb
    v104 = v103 + 1;
  lab_0x405ef7:
    // 0x405f04
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405f72:;
    char * v108 = (char *)v97;
    g53 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405eaa;
  lab_0x405fb6:;
    int64_t v109 = v98 + path; // 0x405fb6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405fe2
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x406011
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406342
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x406035
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406050_2:;
                uint64_t v96 = *v32; // 0x406050
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4061dc;
                } else {
                    goto lab_0x40605e;
                }
            }
          lab_0x4061ef:
            // 0x4061ef
            function_4063e0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x40620e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405ff4;
  lab_0x405f5b:;
    int64_t * mem4 = malloc(size2); // 0x405f5b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406001
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405fb6;
    } else {
        goto lab_0x405f72;
    }
  lab_0x405ff4:
    // 0x405ff4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405f72;
}
// Address range: 0x4063e0 - 0x40645b
int64_t function_4063e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4063e7
    if (fileno(stream) < 0) {
        // 0x406447
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4063fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40642b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406447
            return fclose(stream);
        }
    }
    // 0x4063fc
    if ((int32_t)function_406460(a1, v1) == 0) {
        // 0x406447
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406408
    int32_t v3 = *v2; // 0x406410
    int64_t result = fclose(stream); // 0x40641e
    if (v3 != 0) {
        // 0x406450
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406420
    return result;
}
// Address range: 0x406460 - 0x4064a0
int64_t function_406460(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40647a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40647a
        return fflush(stream);
    }
    // 0x406488
    function_4064a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4064a0 - 0x4064f7
int64_t function_4064a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4064a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4064aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4064db
    int64_t result = -1; // 0x4064e4
    if (v1 != -1) {
        // 0x4064e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4064f2
    return result;
}
// Address range: 0x406500 - 0x40655d
int64_t function_406500(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406500
    return function_4013e0();
}
// Address range: 0x406560 - 0x406561
int64_t function_406560(void) {
    // 0x406560
    int64_t result; // 0x406560
    return result;
}
// Address range: 0x406570 - 0x406588
int64_t function_406570(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406570
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x406588 - 0x4065a8
int64_t function_406588(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x406592
    while (*(int64_t *)v1 != -1) {
        // 0x406593
        v1 -= 8;
    }
    // 0x4065a4
    return result;
}
