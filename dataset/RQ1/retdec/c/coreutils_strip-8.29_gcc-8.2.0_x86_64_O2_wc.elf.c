// Address range: 0x401d50 - 0x401d55
int64_t function_401d50(void) {
    // 0x401d50
    return abort();
}
// Address range: 0x401d55 - 0x401d5a
int64_t function_401d55(void) {
    // 0x401d55
    return abort();
}
// Address range: 0x401d5a - 0x401d5f
int64_t function_401d5a(void) {
    // 0x401d5a
    abort();
    // UNREACHABLE
}
// Address range: 0x401d5f - 0x401d64
int64_t function_401d5f(void) {
    // 0x401d5f
    abort();
    // UNREACHABLE
}
// Address range: 0x401d64 - 0x401d69
int64_t function_401d64(void) {
    // 0x401d64
    abort();
    // UNREACHABLE
}
// Address range: 0x401d69 - 0x401d6e
int64_t function_401d69(void) {
    // 0x401d69
    return abort();
}
// Address range: 0x401d6e - 0x401d73
int64_t function_401d6e(void) {
    // 0x401d6e
    abort();
    // UNREACHABLE
}
// Address range: 0x401d80 - 0x402770
int64_t function_401d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 & 0xffffffff; // 0x401d8f
    function_403bb0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407e80(0x403810, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g35 = getpagesize();
    setvbuf(g28, (char *)((int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale" ^ (int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"), 1, 0);
    *(char *)&g39 = 0;
    *(char *)&g40 = 0;
    *(char *)&g41 = 0;
    *(char *)&g42 = 0;
    *(char *)&g38 = 0;
    g43 = 0;
    g44 = 0;
    g45 = 0;
    g46 = 0;
    g47 = 0;
    int64_t v2; // 0x401d80
    int64_t v3; // 0x401d80
    while (true) {
        // 0x401e50
        v2 = 0;
        while (true) {
          lab_0x401e50_2:;
            int32_t v4 = function_4072a0(v1, a2, "clLmw", &g2, 0, v3);
            switch (v4) {
                case -1: {
                    goto lab_0x401f40;
                }
                case 99: {
                    // 0x401ef8
                    *(char *)&g39 = 1;
                    goto lab_0x401e50_2;
                }
                default: {
                    if (v4 > 99) {
                        if (v4 == 109) {
                            // 0x401ee8
                            *(char *)&g40 = 1;
                        } else {
                            if (v4 > 109) {
                                if (v4 != 119) {
                                    // break -> 0x401eb0
                                    break;
                                }
                                // 0x401e87
                                *(char *)&g41 = 1;
                            } else {
                                if (v4 != 108) {
                                    // 0x401ed7
                                    function_403350(1);
                                    // UNREACHABLE
                                }
                                // 0x401ec5
                                *(char *)&g42 = 1;
                            }
                        }
                    } else {
                        if (v4 == -130) {
                            // 0x4026c6
                            function_403350(0);
                            // UNREACHABLE
                        }
                        if (v4 != 76) {
                            if (v4 == -131) {
                                // 0x401f08
                                function_406060((int64_t)g28, "wc", "GNU coreutils", (int64_t)g17, "Paul Rubin", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            goto lab_0x401ed7;
                        }
                        // 0x401ea0
                        *(char *)&g38 = 1;
                    }
                    goto lab_0x401e50_2;
                }
            }
        }
    }
  lab_0x401f40:;
    int64_t v5 = (int64_t)"clLmw"; // 0x401f47
    int64_t v6 = v1; // 0x401f47
    int64_t v7 = v2; // 0x401f47
    int64_t v8 = a2; // 0x401f47
    int64_t v9 = (int64_t)"clLmw"; // 0x401f47
    int64_t v10 = v1; // 0x401f47
    int64_t v11 = v2; // 0x401f47
    int64_t v12 = a2; // 0x401f47
    if ((*(char *)&g41 | *(char *)&g42) == 0) {
        goto lab_0x40239b;
    } else {
        goto lab_0x401f56;
    }
  lab_0x4020e0:;
    int64_t v13 = 0; // 0x4020e5
    int64_t v14; // 0x401d80
    int64_t v15; // 0x401d80
    if (v15 == 0) {
        goto lab_0x4020ee;
    } else {
        // 0x4020e7
        v13 = 152 * v14;
        goto lab_0x4020ee;
    }
  lab_0x4020ee:;
    // 0x4020ee
    int64_t v16; // 0x401d80
    int64_t v17 = v13 + v16; // 0x4020ee
    int64_t v18; // 0x401d80
    char * str = (char *)v18;
    int32_t strcmp_rc = strcmp(str, "-"); // 0x402100
    char * path = str; // 0x402107
    int64_t v19 = v17; // 0x402107
    int64_t v20; // 0x401d80
    if (strcmp_rc != 0) {
        goto lab_0x40203a;
    } else {
        // 0x40210d
        g36 = 1;
        v20 = function_402a20(0, v18, 0x100000000 * v17 >> 32, -1) & 0xffffffff;
        goto lab_0x402082;
    }
  lab_0x402085:;
    // 0x402085
    int32_t * v21; // 0x401d80
    if (v15 == 0) {
        // 0x40208a
        *v21 = 1;
    }
    int64_t v22 = v14 + 1; // 0x402095
    int64_t v23; // 0x401d80
    int64_t v24; // 0x401d80
    int64_t v25; // 0x401d80
    int64_t v26 = function_403720(v23, v25, v24); // 0x4020a0
    int64_t v27 = v26; // 0x4020ab
    int64_t v28; // 0x401d80
    int64_t v29 = v28; // 0x4020ab
    int64_t v30 = v22; // 0x4020ab
    int64_t v31 = v22; // 0x4020ab
    int64_t v32 = v28; // 0x4020ab
    if (v26 == 0) {
        // break -> 0x4021ea
        goto lab_0x4021ea;
    }
    goto lab_0x4020b1;
  lab_0x402166:;
    int64_t v47 = function_4037b0(v23); // 0x402169
    char * v48 = dcgettext(NULL, "invalid zero-length file name", 5); // 0x40217d
    int64_t v35; // 0x401d80
    error(0, 0, "%s:%lu: %s", (char *)function_405650(0, 3, v35), (int32_t)v47, v48);
    v24 = (int64_t)"%s:%lu: %s";
    v28 = 0;
    goto lab_0x402085;
  lab_0x40203a:;
    uint32_t fd = open(path, O_RDONLY); // 0x402041
    if (fd == -1) {
        goto lab_0x402331;
    } else {
        // 0x40204f
        v20 = function_402a20((int64_t)fd, v18, 0x100000000 * v19 >> 32, 0) % 256;
        if (close(fd) != 0) {
            goto lab_0x402331;
        } else {
            goto lab_0x402082;
        }
    }
  lab_0x402331:
    // 0x402331
    error(0, *__errno_location(), "%s", (char *)function_405650(0, 3, v18));
    v20 = (int32_t)"%s" ^ (int32_t)"%s";
    goto lab_0x402082;
  lab_0x402082:
    // 0x402082
    v24 = v20;
    int64_t v33; // 0x401d80
    v28 = v20 & v33;
    goto lab_0x402085;
  lab_0x40244c:;
    // 0x40244c
    int64_t v49; // 0x401d80
    int64_t v50 = v49 + 1; // 0x40244c
    int64_t v51; // 0x401d80
    int32_t v52; // 0x401d80
    *(int32_t *)(v51 - 8) = v52;
    v49 = v50;
    int64_t v53 = v51 + 152; // 0x40245e
    int64_t v54; // 0x401d80
    if (v54 == v50) {
        // break -> 0x402491
        goto lab_0x402491;
    }
    goto lab_0x402460;
  lab_0x40239b:;
    // 0x40239b
    int64_t v57; // 0x401d80
    int64_t v58 = v57;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v10;
    int64_t v62 = v9;
    int128_t v63; // 0x401d80
    int128_t v64 = v63;
    int128_t v65; // 0x401d80
    int128_t v66 = v65;
    int64_t v67; // 0x401d80
    int64_t v68 = v67;
    char v69; // 0x401d80
    char v70 = v69;
    int64_t v71; // 0x401d80
    int64_t v72 = v71;
    int64_t v73 = v72; // 0x4023a2
    char v74 = v70; // 0x4023a2
    int64_t v75 = v68; // 0x4023a2
    int128_t v76 = v66; // 0x4023a2
    int128_t v77 = v64; // 0x4023a2
    v5 = v62;
    v6 = v61;
    v7 = v60;
    v8 = v59;
    int64_t v78 = v58; // 0x4023a2
    if (*(char *)&g40 == 0) {
        // 0x4023a8
        v73 = v72;
        v74 = v70;
        v75 = v68;
        v76 = v66;
        v77 = v64;
        v5 = v62;
        v6 = v61;
        v7 = v60;
        v8 = v59;
        v78 = v58;
        if (*(char *)&g39 == 0) {
            // 0x4023b5
            v73 = v72;
            v74 = v70;
            v75 = v68;
            v76 = v66;
            v77 = v64;
            v5 = v62;
            v6 = v61;
            v7 = v60;
            v8 = v59;
            v78 = v58;
            if (*(char *)&g38 == 0) {
                // 0x4023c2
                *(char *)&g39 = 1;
                *(char *)&g41 = 1;
                *(char *)&g42 = 1;
                v73 = v72;
                v74 = v70;
                v75 = v68;
                v76 = v66;
                v77 = v64;
                v5 = v62;
                v6 = v61;
                v7 = v60;
                v8 = v59;
                v78 = v58;
            }
        }
    }
    goto lab_0x401f56;
  lab_0x401f56:;
    int64_t v79 = v8;
    int64_t v80 = v7;
    int64_t v81 = v6;
    int128_t v82 = v77;
    int128_t v83 = v76;
    int64_t v84 = g26; // 0x401f56
    int64_t v85; // 0x401d80
    int64_t v86; // 0x401d80
    int64_t v87; // 0x401d80
    int64_t v88; // 0x401d80
    int64_t v89; // 0x401d80
    struct _IO_FILE * stream; // 0x401d80
    int64_t v90; // 0x401d80
    int64_t v91; // 0x401d80
    int64_t v92; // 0x401d80
    int64_t v93; // 0x401d80
    int64_t v94; // 0x401d80
    int64_t v95; // 0x401d80
    int64_t v96; // 0x401d80
    int32_t v97; // bp-488, 0x401d80
    char v98; // 0x401d80
    char v99; // 0x401d80
    char v100; // 0x401d80
    int64_t v101; // 0x401d80
    int64_t v102; // 0x401d80
    int64_t v103; // 0x401d80
    int64_t v104; // 0x401d80
    int64_t v105; // 0x401d80
    int64_t v106; // 0x401d80
    int64_t v107; // 0x401d80
    int128_t v108; // 0x401d80
    int128_t v109; // 0x401d80
    int128_t v110; // 0x401d80
    int128_t v111; // 0x401d80
    int128_t v112; // 0x401d80
    int128_t v113; // 0x401d80
    if (v80 == 0) {
        if (v81 > v84) {
            int64_t v114 = 8 * v84 + v79; // 0x4023e9
            int64_t v115 = function_4036b0(v114); // 0x4023f5
            v93 = v114;
            if (v115 == 0) {
                // 0x402696
                function_4063f0(v93);
                // UNREACHABLE
            }
            // 0x402406
            v105 = &v97;
            v98 = 0;
            v101 = v114;
            v108 = v83;
            v111 = v82;
            v95 = v84;
            v90 = 0x100000000 * (v81 - v84) >> 32;
            v85 = v115;
            goto lab_0x402414;
        } else {
            int64_t v116 = function_4036b0((int64_t)&g34); // 0x40255f
            v93 = &g34;
            if (v116 == 0) {
                // 0x402696
                function_4063f0(v93);
                // UNREACHABLE
            }
            int64_t v117 = function_4061a0(152); // 0x402575
            v107 = &v97;
            v100 = 0;
            v104 = v117;
            v102 = &g34;
            v110 = v83;
            v113 = v82;
            v94 = v5;
            v87 = v116;
            goto lab_0x402596;
        }
    } else {
        if (v81 > v84) {
            // 0x4026cd
            function_405580(4, *(int64_t *)(8 * v84 + v79));
            error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
            __fprintf_chk(g31, 1, "%s\n", dcgettext(NULL, "file operands cannot be combined with --files0-from", 5));
          lab_0x401ed7:
            // 0x401ed7
            function_403350(1);
            // UNREACHABLE
        }
        char * str4 = (char *)v80; // 0x401f76
        if (strcmp(str4, "-") != 0) {
            struct _IO_FILE * file = fopen(str4, "r"); // 0x4024e8
            stream = file;
            if (file != NULL) {
                goto lab_0x401f8a;
            } else {
                int64_t v118 = function_405580(4, v80); // 0x402501
                char * format2 = dcgettext(NULL, "cannot open %s for reading", 5); // 0x402515
                int64_t v119 = (int64_t)format2; // 0x402515
                error(1, *__errno_location(), format2);
                v106 = v73;
                v99 = v74;
                v103 = v75;
                v109 = v83;
                v112 = v82;
                v88 = &g64;
                v96 = v119;
                v91 = v119;
                v89 = v118;
                v92 = 1;
                v86 = v78;
                goto lab_0x402536;
            }
        } else {
            // 0x401f83
            stream = g29;
            goto lab_0x401f8a;
        }
    }
  lab_0x402414:;
    int64_t v120 = function_4061a0(152 * v90); // 0x40241b
    int64_t v121 = v105; // 0x402429
    char v122 = v98; // 0x402429
    int64_t v123 = v120; // 0x402429
    int64_t v56 = v101; // 0x402429
    int128_t v124 = v108; // 0x402429
    int128_t v125 = v111; // 0x402429
    int64_t v126 = v90; // 0x402429
    int64_t v127 = v85; // 0x402429
    v107 = v105;
    v100 = v98;
    v104 = v120;
    v102 = v101;
    v110 = v108;
    v113 = v111;
    v94 = v95;
    v87 = v85;
    if (v90 == 1) {
        goto lab_0x402596;
    } else {
        goto lab_0x40242f;
    }
  lab_0x402596:;
    int64_t v128 = v87;
    int128_t v129 = v113;
    int128_t v130 = v110;
    int64_t v131 = v104;
    char v132 = v100;
    int64_t v133 = v107;
    unsigned char v134 = *(char *)&g41; // 0x402596
    unsigned char v135 = *(char *)&g42; // 0x40259d
    unsigned char v136 = *(char *)&g40; // 0x4025a6
    unsigned char v137 = *(char *)&g39; // 0x4025af
    unsigned char v138 = *(char *)&g38; // 0x4025b8
    v121 = v133;
    v122 = v132;
    v123 = v131;
    v56 = v102;
    v124 = v130;
    v125 = v129;
    v126 = 1;
    v127 = v128;
    int64_t v139; // 0x401d80
    int64_t v140; // 0x401d80
    int64_t v141; // 0x401d80
    int64_t v142; // 0x401d80
    int64_t v143; // 0x401d80
    char v144; // 0x401d80
    int64_t v145; // 0x401d80
    int64_t v146; // 0x401d80
    int128_t v147; // 0x401d80
    int128_t v148; // 0x401d80
    if ((int64_t)v135 + (int64_t)v134 + (int64_t)v136 + (int64_t)v137 + (int64_t)v138 == 1) {
        // 0x40269b
        *(int32_t *)v131 = 1;
        v146 = v133;
        v144 = v132;
        v145 = v131;
        v147 = v130;
        v148 = v129;
        v142 = 1;
        v143 = v94;
        v141 = 1;
        v140 = v80;
        v139 = v128;
        goto lab_0x401ff4;
    } else {
        goto lab_0x40242f;
    }
  lab_0x401f8a:;
    int64_t v149 = (int64_t)stream;
    uint32_t v150 = fileno(stream); // 0x401f8d
    int64_t v151 = &v97; // 0x401f92
    int64_t v152; // 0x401d80
    int128_t v153; // bp-344, 0x401d80
    char v154; // 0x401d80
    int32_t v155; // 0x401d80
    int128_t v156; // 0x401d80
    int128_t v157; // 0x401d80
    if ((v155 & 0xf000) == 0x8000 == __fxstat(1, v150, (struct stat *)&v97) == 0) {
        // 0x4025d4
        __asm_pxor(v82, v82);
        int128_t v158 = __asm_cvtsi2sd(v3); // 0x4025d8
        int64_t v159 = __asm_movsd(v158); // 0x4025df
        function_403ab0();
        int128_t v160 = __asm_mulsd(v83, 0x3fe0000000000000); // 0x4025ea
        __asm_comisd(v160, __asm_movsd_3(0x4164000000000000));
        function_403ab0();
        __asm_comisd(__asm_mulsd_4(__asm_movsd_3(0x3fe0000000000000), v160), (int128_t)v159);
        function_4058e0((int64_t *)&v153, (int64_t)v150, v151);
        char v161 = function_405980(v149, (int64_t *)&v153); // 0x40262d
        if (v161 == 0 || (int32_t)function_406430(v149, (int64_t)&v153) != 0) {
            // 0x402731
            function_405580(4, v80);
            error(1, (int32_t)"cannot read file names from %s" ^ (int32_t)"cannot read file names from %s", dcgettext(NULL, "cannot read file names from %s", 5));
            return &g64;
        }
        int64_t v162 = function_4036b0(v3); // 0x402661
        if (v162 == 0) {
            // 0x402696
            function_4063f0(v93);
            // UNREACHABLE
        }
        int64_t v163 = v153; // 0x402651
        v154 = v161;
        v156 = v160;
        v157 = v158;
        v152 = v162;
        if (v163 == 0) {
            goto lab_0x401fd8;
        } else {
            uint128_t v164 = 152 * (v153 & 0xffffffffffffffff); // 0x40267f
            v105 = v151;
            v98 = v161;
            v108 = v160;
            v111 = v158;
            v95 = 0;
            v90 = v163;
            v85 = v162;
            if ((int64_t)v164 > -1 != (v164 % 0xff0000000000000001 == 0)) {
                // 0x402696
                function_4063f0(v93);
                // UNREACHABLE
            }
            goto lab_0x402414;
        }
    } else {
        int64_t v165 = function_4036e0(v149); // 0x401fc2
        v154 = 0;
        v156 = v83;
        v157 = v82;
        v152 = v165;
        v93 = v149;
        if (v165 == 0) {
            // 0x402696
            function_4063f0(v93);
            // UNREACHABLE
        }
        goto lab_0x401fd8;
    }
  lab_0x40242f:;
    int64_t v166 = v127;
    v54 = v126;
    int128_t v167 = v125;
    int128_t v168 = v124;
    int64_t v169 = v123;
    char v170 = v122;
    int64_t v171 = v121;
    v49 = 0;
    v53 = v169 + 8;
    while (true) {
      lab_0x402460:
        // 0x402460
        v51 = v53;
        int64_t v55 = *(int64_t *)(8 * v49 + (0x100000000 * v56 >> 32)); // 0x402465
        if (v55 == 0) {
            // 0x40243d
            v52 = __fxstat(1, 0, (struct stat *)v51);
            goto lab_0x40244c;
        } else {
            char * str3 = (char *)v55; // 0x402476
            if (strcmp(str3, "-") == 0) {
                // 0x40243d
                v52 = __fxstat(1, 0, (struct stat *)v51);
                goto lab_0x40244c;
            } else {
                // 0x40247f
                v52 = __xstat(1, str3, (struct stat *)v51);
                goto lab_0x40244c;
            }
        }
    }
  lab_0x402491:;
    int32_t v172 = *(int32_t *)v169; // 0x40249b
    v146 = v171;
    v144 = v170;
    v145 = v169;
    v147 = v168;
    v148 = v167;
    v142 = 1;
    v143 = v169;
    v141 = v54;
    v140 = v80;
    v139 = v166;
    int32_t v173 = v172; // 0x40249e
    int64_t v174 = v169; // 0x40249e
    if (v172 >= 0 == (v172 != 0)) {
        goto lab_0x401ff4;
    } else {
        int64_t v175 = 1;
        int64_t v176 = v174;
        int64_t v177 = 0;
        int64_t v178 = v177; // 0x4024c7
        int64_t v179 = v175; // 0x4024c7
        if (v173 == 0) {
            // 0x4024c9
            v178 = v177;
            v179 = 7;
            if ((*(int32_t *)(v176 + 32) & 0xf000) == 0x8000) {
                // 0x4024da
                v178 = *(int64_t *)(v176 + 56) + v177;
                v179 = v175;
            }
        }
        int64_t v180 = v179;
        int64_t v181 = v178;
        int64_t v182 = 1; // 0x4024b4
        while (v54 != v182) {
            int64_t v183 = v176 + 152; // 0x4024b8
            v175 = v180;
            v176 = v183;
            v177 = v181;
            v178 = v177;
            v179 = v175;
            if (*(int32_t *)v183 == 0) {
                // 0x4024c9
                v178 = v177;
                v179 = 7;
                if ((*(int32_t *)(v176 + 32) & 0xf000) == 0x8000) {
                    // 0x4024da
                    v178 = *(int64_t *)(v176 + 56) + v177;
                    v179 = v175;
                }
            }
            // 0x4024b4
            v180 = v179;
            v181 = v178;
            v182++;
        }
        // 0x402536
        v106 = v171;
        v99 = v170;
        v103 = v169;
        v109 = v168;
        v112 = v167;
        v88 = v181;
        v96 = 152 * v54 + v169;
        v91 = v54;
        v89 = v80;
        v92 = v180;
        v86 = v166;
        goto lab_0x402536;
    }
  lab_0x402536:;
    int64_t v184 = v92;
    int64_t v185 = v88; // 0x40254e
    int64_t v186 = 1; // 0x40254e
    int64_t v187 = v96; // 0x40254e
    if (v88 >= 10) {
        uint64_t v188 = v185;
        int64_t v189 = 2; // 0x402544
        int64_t v190 = v189; // 0x40254e
        v185 = v188 / 10;
        while (v188 >= 100) {
            // 0x402542
            v188 = v185;
            v189 = v190 + 1 & 0xffffffff;
            v190 = v189;
            v185 = v188 / 10;
        }
        // 0x40254a
        v186 = v189;
        v187 = (char)v188 % 10;
    }
    int64_t v191 = v186;
    int32_t v192 = v191; // 0x402550
    int32_t v193 = v192 - (int32_t)v184; // 0x402550
    int64_t v194 = v193 < 0 == ((v193 ^ v192) & (int32_t)(v191 ^ v184)) < 0 ? v191 : v184;
    v146 = v106;
    v144 = v99;
    v145 = v103;
    v147 = v109;
    v148 = v112;
    v142 = v194 & 0xffffffff;
    v143 = v187;
    v141 = v91;
    v140 = v89;
    v139 = v86;
    goto lab_0x401ff4;
  lab_0x401ff4:
    // 0x401ff4
    v23 = v139;
    v35 = v140;
    v16 = v145;
    v25 = v146;
    g37 = v142;
    int64_t v195 = function_403720(v23, v25, v143); // 0x4020a0
    v31 = 0;
    v32 = 1;
    if (v195 != 0) {
        // 0x4020b1
        v15 = v141;
        bool v196; // 0x401d80
        int64_t v45 = v196 ? -1 : 1;
        v21 = (int32_t *)v16;
        v27 = v195;
        v29 = 1;
        v30 = 0;
        while (true) {
          lab_0x4020b1:
            // 0x4020b1
            v14 = v30;
            v33 = v29;
            v18 = v27;
            int64_t v34 = v35; // 0x4020b4
            int64_t v36 = 2; // 0x4020b4
            if (v35 == 0) {
                // 0x4021b5
                if (*(char *)v18 != 0) {
                    goto lab_0x4020e0;
                } else {
                    // 0x4021be
                    error(0, (int32_t)"invalid zero-length file name" ^ (int32_t)"invalid zero-length file name", "%s", dcgettext(NULL, "invalid zero-length file name", 5));
                    v24 = (int64_t)"%s";
                    v28 = 0;
                    goto lab_0x402085;
                }
            } else {
                int64_t v37 = v34;
                int64_t v38 = (int64_t)"-";
                unsigned char v39 = *(char *)v37; // 0x4020c7
                char v40 = *(char *)v38; // 0x4020c7
                char v41 = v40; // 0x4020c7
                bool v42 = false; // 0x4020c7
                while (v39 == v40) {
                    int64_t v43 = v36 - 1; // 0x4020c7
                    int64_t v44 = v38 + v45; // 0x4020c7
                    v34 = v37 + v45;
                    v36 = v43;
                    v41 = v39;
                    v42 = true;
                    if (v43 == 0) {
                        // break -> 
                        break;
                    }
                    v37 = v34;
                    v38 = v44;
                    v39 = *(char *)v37;
                    v40 = *(char *)v38;
                    v41 = v40;
                    v42 = false;
                }
                unsigned char v46 = v41;
                char * str2 = (char *)v18;
                if ((v39 >= v46 && !v42) == v39 < v46) {
                    // 0x402008
                    if (strcmp(str2, "-") == 0) {
                        // 0x40212e
                        function_405580(4, v18);
                        char * format = dcgettext(NULL, "when reading file names from stdin, no file name of %s allowed", 5); // 0x40214a
                        error(0, (int32_t)"when reading file names from stdin, no file name of %s allowed" ^ (int32_t)"when reading file names from stdin, no file name of %s allowed", format);
                        v24 = (int64_t)format;
                        v28 = 0;
                        if (*str2 != 0) {
                            goto lab_0x402085;
                        } else {
                            goto lab_0x402166;
                        }
                    } else {
                        // 0x40201d
                        if (*str2 == 0) {
                            goto lab_0x402166;
                        } else {
                            // 0x402027
                            path = str2;
                            v19 = v16;
                            if (v15 != 0) {
                                // 0x4020e7
                                v13 = 152 * v14;
                                goto lab_0x4020ee;
                            } else {
                                goto lab_0x40203a;
                            }
                        }
                    }
                } else {
                    // 0x4020d6
                    if (*str2 == 0) {
                        goto lab_0x402166;
                    } else {
                        goto lab_0x4020e0;
                    }
                }
            }
        }
    }
  lab_0x4021ea:
    // 0x4021ea
    v93 = v23;
    if (v97 == 3) {
        // 0x402696
        function_4063f0(v93);
        // UNREACHABLE
    }
    // 0x4021f7
    int64_t v197; // 0x401d80
    int64_t v198; // 0x401d80
    int64_t v199; // 0x401d80
    int64_t v200; // 0x401d80
    if (v97 != 4) {
        int64_t v201 = 2; // 0x4022d0
        int64_t v202 = v25; // 0x4022d0
        if (v97 != 2) {
            // 0x4022d2
            __assert_fail("!\"unexpected error code from argv_iter\"", "src/wc.c", 794, "main");
            v201 = &g64;
            v202 = (int64_t)"src/wc.c";
        }
        int64_t v203 = v202;
        unsigned char v204 = (char)v32 & (char)(v35 == 0); // 0x4022f1
        int64_t v205 = v201 & 0xffffff00 | (int64_t)v204; // 0x4022f1
        v199 = v205;
        v198 = v35;
        v200 = v203;
        v197 = v32;
        if (v204 != 0) {
            // 0x4022fc
            v199 = v205;
            v198 = v35;
            v200 = v203;
            v197 = v205;
            if (function_4037b0(v23) == 0) {
                // 0x402310
                g36 = 1;
                v199 = v205;
                v198 = v35;
                v200 = 0;
                v197 = function_402a20(0, 0, v16, -1) & 0xffffffff;
            }
        }
    } else {
        int64_t v206 = function_405650(0, 3, v35); // 0x40220d
        char * format3 = dcgettext(NULL, "%s: read error", 5); // 0x402221
        uint32_t err_num = *__errno_location(); // 0x402236
        error(0, err_num, format3);
        v199 = (int64_t)format3;
        v198 = v206;
        v200 = err_num;
        v197 = 0;
    }
    uint64_t v207 = v197;
    if (v144 != 0) {
        // 0x402362
        function_405950((int64_t *)&v153, v200);
    }
    // 0x40224a
    if (function_4037b0(v23) >= 2) {
        // 0x402258
        function_402850(g47, g46, g45, g44, g43, (int64_t)dcgettext(NULL, "total", 5));
    }
    // 0x402294
    function_4037d0(v23);
    free((int64_t *)v16);
    if (g36 == 0 || close(0) == 0) {
        // 0x4022b3
        return v207 % 256 ^ 1;
    }
    // 0x402383
    error(1, *__errno_location(), "-");
    v71 = v25;
    v69 = v144;
    v67 = v16;
    v65 = v147;
    v63 = v148;
    v9 = (int64_t)"-";
    v10 = v199;
    v11 = v198;
    v12 = v31;
    v57 = v23;
    goto lab_0x40239b;
  lab_0x401fd8:;
    int64_t v208 = function_4061a0(152); // 0x401fdf
    *(int32_t *)v208 = 1;
    v146 = v151;
    v144 = v154;
    v145 = v208;
    v147 = v156;
    v148 = v157;
    v142 = 1;
    v143 = v151;
    v141 = 0;
    v140 = v80;
    v139 = v152;
    goto lab_0x401ff4;
}
// Address range: 0x402770 - 0x40279b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402770
    int64_t v1; // 0x402770
    __libc_start_main(0x401d80, (int32_t)a4, (char **)&v1, (void (*)())0x407e10, (void (*)())0x407e70, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40279b - 0x4027ba
int64_t function_40279b(void) {
    // 0x40279b
    return 0x60c2c8;
}
// Address range: 0x4027ba - 0x4027f1
int64_t function_4027ba(void) {
    // 0x4027ba
    return 0;
}
// Address range: 0x4027f1 - 0x402848
int64_t function_4027f1(void) {
    // 0x4027f1
    if (g32 != 0) {
        // 0x402847
        int64_t result; // 0x4027f1
        return result;
    }
    int64_t v1 = g33; // 0x402824
    int64_t result2; // 0x402836
    if (g33 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x402836
        result2 = function_40279b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x402826
        v1++;
    }
    // 0x40281a
    g33 = v1;
    // 0x402836
    result2 = function_40279b();
    g32 = 1;
    return result2;
}
// Address range: 0x402848 - 0x40284d
int64_t function_402848(void) {
    // 0x402848
    return function_4027ba();
}
// Address range: 0x402850 - 0x402a1f
int64_t function_402850(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)"%*s"; // 0x402879
    int64_t v2; // bp-88, 0x402850
    if (*(char *)&g42 != 0) {
        int64_t v3 = function_4038f0(a1, &v2); // 0x4029e3
        __printf_chk(1, "%*s", (int64_t)g37, (char *)v3);
        v1 = (int64_t)" %*s";
    }
    int64_t v4 = v1; // 0x402886
    if (*(char *)&g41 != 0) {
        // 0x4029b0
        function_4038f0(a2, &v2);
        __printf_chk(1, (char *)v1);
        v4 = (int64_t)" %*s";
    }
    int64_t v5 = v4; // 0x402893
    if (*(char *)&g40 != 0) {
        // 0x402980
        function_4038f0(a3, &v2);
        __printf_chk(1, (char *)v4);
        v5 = (int64_t)" %*s";
    }
    int64_t v6 = v5; // 0x4028a0
    if (*(char *)&g39 != 0) {
        // 0x402950
        function_4038f0(a4, &v2);
        __printf_chk(1, (char *)v5);
        v6 = (int64_t)" %*s";
    }
    // 0x4028a6
    if (*(char *)&g38 != 0) {
        // 0x402920
        function_4038f0(a5, &v2);
        __printf_chk(1, (char *)v6);
    }
    if (a6 != 0) {
        char * str = (char *)a6;
        char * found_char_pos = strchr(str, 10); // 0x4028bc
        char * v7 = str; // 0x4028c4
        if (found_char_pos != NULL) {
            // 0x4028c6
            v7 = (char *)function_405650(0, 3, a6);
        }
        // 0x4028d8
        __printf_chk(1, " %s", v7);
    }
    int64_t v8 = (int64_t)g28; // 0x4028ec
    int64_t * v9 = (int64_t *)(v8 + 40); // 0x4028f3
    uint64_t v10 = *v9; // 0x4028f3
    int64_t result; // 0x402850
    if (v10 >= *(int64_t *)(v8 + 48)) {
        // 0x402a10
        result = __overflow(g28, 10);
    } else {
        // 0x402901
        *v9 = v10 + 1;
        *(char *)v10 = 10;
        result = v10;
    }
    // 0x40290c
    return result;
}
// Address range: 0x402a20 - 0x403342
int64_t function_402a20(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a2; // 0x402a48
    if (a2 == 0) {
        // 0x402f5d
        v1 = (int64_t)dcgettext(NULL, "standard input", 5);
    }
    int64_t fd = 0x100000000 * a1 >> 32; // 0x402a37
    uint32_t v2 = __ctype_get_mb_cur_max(); // 0x402a4e
    char v3 = *(char *)&g40;
    unsigned char v4 = v2 < 2 ? 0 : v3;
    int32_t v5; // 0x402a20
    int64_t v6; // 0x402a79
    if (*(char *)&g41 != 0) {
        // 0x402af0
        posix_fadvise((int32_t)fd, 0, 0, POSIX_FADV_SEQUENTIAL);
        goto lab_0x402b02;
    } else {
        unsigned char v7 = *(char *)&g38; // 0x402a79
        if (v7 != 0) {
            // 0x402af0
            posix_fadvise((int32_t)fd, 0, 0, POSIX_FADV_SEQUENTIAL);
            goto lab_0x402b02;
        } else {
            char v8 = *(char *)&g39; // 0x402a53
            char v9 = v2 < 2 == v8 == 0 ? v3 : v8;
            v6 = v7;
            if (v4 == 0 == v9 == 1) {
                // 0x402a9b
            } else {
                int32_t fd2 = fd;
                posix_fadvise(fd2, 0, 0, POSIX_FADV_SEQUENTIAL);
                if (v4 == 1) {
                    goto lab_0x402b02;
                } else {
                    if (v9 == 0) {
                        // 0x4032a6
                        v5 = fd2;
                        if (v4 == 0) {
                            goto lab_0x4031b0;
                        } else {
                            goto lab_0x402b02;
                        }
                    } else {
                        goto lab_0x40319a;
                    }
                }
            }
        }
    }
  lab_0x402da8:;
    // 0x402da8
    int64_t v10; // 0x402a20
    int64_t v11 = v10; // 0x402dab
    int64_t v12; // 0x402a20
    int64_t v13 = v12; // 0x402dab
    int64_t v14; // 0x402a20
    int64_t v15; // 0x402a20
    int64_t v16 = v14 + v15; // 0x402dab
    int64_t v17 = 0; // 0x402dab
    int64_t v18; // 0x402a20
    int64_t v19 = v18; // 0x402dab
    goto lab_0x402dae;
  lab_0x402d9e:;
    // 0x402d9e
    int64_t v38; // 0x402a20
    v10 = v38;
    int64_t v34; // 0x402a20
    int64_t v35; // 0x402a20
    v12 = v35 < v34 ? v34 : v35;
    v18 = 0;
    goto lab_0x402da8;
  lab_0x402dae:;
    // 0x402dae
    int64_t v20; // 0x402a20
    int64_t v21 = v20 + 1; // 0x402d78
    int64_t v22 = v19;
    int64_t v23 = v17;
    int64_t v24 = v16;
    int64_t v25 = v13;
    int64_t v26 = v11;
    int64_t v27 = v26; // 0x402db1
    int64_t v28 = v25; // 0x402db1
    int64_t v29 = v24; // 0x402db1
    v20 = v21;
    int64_t v30 = v23; // 0x402db1
    int64_t v31 = v22; // 0x402db1
    int64_t v32; // 0x402d2e
    int64_t v33; // 0x402d4e
    if (v21 == v33 + v32) {
        // break -> 0x402d40
        goto lab_0x402d40_2;
    }
    goto lab_0x402d78;
  lab_0x403053:;
    // 0x403053
    int64_t v41; // 0x402a20
    int64_t v42 = v41; // 0x403064
    int64_t v43; // 0x402a20
    int64_t v44 = v43; // 0x403064
    int64_t v45; // 0x402a20
    int64_t v46; // 0x402a20
    int64_t v47 = v46 >= v45 ? v46 : v45; // 0x403064
    int64_t v48 = 0; // 0x403064
    int64_t v49; // 0x402a20
    int64_t v50; // 0x402a20
    int64_t v51 = v49 % 256 + v50; // 0x403064
    int64_t v52; // 0x402a20
    int64_t v53 = v52; // 0x403064
    goto lab_0x402f98;
  lab_0x402f7e:;
    // 0x402f7e
    int64_t v81; // 0x402a20
    v42 = v81;
    int64_t v78; // 0x402a20
    v44 = v78;
    int64_t v76; // 0x402a20
    int64_t v80; // 0x402a20
    v47 = v80 >= v76 ? v80 : v76;
    int64_t v75; // 0x402a20
    v48 = v75;
    int64_t v77; // 0x402a20
    int64_t v79; // 0x402a20
    v51 = v77 + v79;
    int64_t v83; // 0x402a20
    v53 = v83;
    goto lab_0x402f98;
  lab_0x402c42:;
    // 0x402c42
    int64_t v101; // 0x402a20
    int64_t v139 = v101;
    int64_t v100; // 0x402a20
    int64_t v140 = v100;
    int64_t v99; // 0x402a20
    int64_t v141 = v99;
    int64_t v98; // 0x402a20
    int64_t v142 = v98;
    int64_t v97; // 0x402a20
    int64_t v143 = v97;
    int64_t v96; // 0x402a20
    int64_t v144 = v96;
    int64_t v95; // 0x402a20
    int64_t v145 = v95;
    int64_t v94; // 0x402a20
    int64_t v146 = v94;
    int64_t ps; // bp-16464, 0x402a20
    int64_t v147 = ps; // 0x402c4d
    int32_t wc2; // bp-16468, 0x402a20
    int64_t v148 = function_407320(&wc2, v139, v140); // 0x402c57
    int64_t v149; // 0x402a20
    int64_t v150; // 0x402a20
    int64_t v151; // 0x402a20
    int64_t v152; // 0x402a20
    int64_t v153; // 0x402a20
    int64_t v154; // 0x402a20
    int64_t v155; // 0x402a20
    int64_t v156; // 0x402a20
    int64_t v157; // 0x402a20
    int64_t v158; // 0x402a20
    int64_t v159; // 0x402a20
    int64_t v160; // 0x402a20
    int64_t v161; // 0x402a20
    int64_t v162; // 0x402a20
    int64_t v163; // 0x402a20
    int64_t v164; // 0x402a20
    int64_t v165; // 0x402a20
    int64_t v166; // 0x402a20
    int64_t v167; // 0x402a20
    int64_t v168; // 0x402a20
    int64_t v169; // 0x402a20
    int64_t v170; // 0x402a20
    int64_t v171; // 0x402a20
    int64_t v172; // 0x402a20
    int64_t v173; // 0x402a20
    int64_t v174; // 0x402a20
    int64_t wc; // 0x402a20
    int64_t v57; // bp-16456, 0x402a20
    int64_t v175; // 0x402a20
    int64_t v176; // 0x402a20
    int64_t v177; // 0x402a20
    int64_t v178; // 0x402a20
    int64_t v179; // 0x402a20
    int64_t v180; // 0x402a20
    int64_t v181; // 0x402a20
    int64_t v182; // 0x402a20
    int64_t v183; // 0x402a20
    int64_t v184; // 0x402a20
    int64_t v185; // 0x402a20
    int64_t v186; // 0x402a20
    switch (v148) {
        case -2: {
            // 0x402f20
            ps = v147;
            v175 = v146;
            v179 = v145;
            v183 = v144;
            v169 = v143;
            v165 = v142;
            v150 = v141;
            v154 = 0;
            v161 = 1;
            if (v140 != 0) {
                int64_t v187 = v140 != 0x4000 ? v140 : 0x3fff;
                __memmove_chk(&v57, (int64_t *)(v139 + (int64_t)(v140 == 0x4000)), (int32_t)v187, 0x4001);
                v175 = v146;
                v179 = v145;
                v183 = v144;
                v169 = v143;
                v165 = v142;
                v150 = v141;
                v154 = v187;
                v161 = 1;
            }
            goto lab_0x402b60;
        }
        case -1: {
            // 0x402f08
            v177 = v146;
            v181 = v145;
            v185 = v144;
            v171 = v143;
            v167 = v142;
            v152 = v141;
            v156 = v140 - 1;
            v159 = v139 + 1;
            v163 = 1;
            goto lab_0x402c30;
        }
        default: {
            int64_t v188 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0; // 0x402c86
            int64_t v189 = v141 + 1; // 0x402c8a
            if (v148 != 0) {
                // 0x402ef8
                v149 = v148;
                v176 = v146;
                v180 = v145;
                v184 = v144;
                v173 = wc2;
                v170 = v143;
                v166 = v142;
                v151 = v189;
                v155 = v140;
                v158 = v139;
                v162 = v188;
                goto lab_0x402bd2;
            } else {
                // 0x402c97
                wc2 = 0;
                v178 = v146;
                v182 = v145;
                v186 = v144;
                v174 = 0;
                v172 = v143;
                v168 = v142;
                wc = 0;
                v153 = v189;
                v157 = v140 - 1;
                v160 = v139 + 1;
                v164 = v188;
                goto lab_0x402cab;
            }
        }
    }
  lab_0x402ba8:;
    // 0x402ba8
    int64_t v92; // 0x402a20
    int64_t v190 = v92;
    int64_t v91; // 0x402a20
    int64_t v191 = v91;
    int64_t v90; // 0x402a20
    int64_t v192 = v90;
    int64_t v89; // 0x402a20
    int64_t v193 = v89;
    int64_t v88; // 0x402a20
    int64_t v194 = v88;
    int64_t v87; // 0x402a20
    int64_t v195 = v87;
    int64_t v86; // 0x402a20
    int64_t v196 = v86;
    int64_t v85; // 0x402a20
    int64_t v197 = v85;
    unsigned char v198 = *(char *)v190; // 0x402ba8
    int32_t v199 = *(int32_t *)((int64_t)(4 * v198 / 32) + (int64_t)&g3); // 0x402bb4
    v94 = v197;
    v95 = v196;
    v96 = v195;
    v97 = v194;
    v98 = v193;
    v99 = v192;
    v100 = v191;
    v101 = v190;
    int64_t v93; // 0x402a20
    if ((1 << (int32_t)(v198 % 32) & v199) == 0) {
        goto lab_0x402c42;
    } else {
        // 0x402bc5
        wc2 = v198;
        v149 = 1;
        v176 = v197;
        v180 = v196;
        v184 = v195;
        v173 = v198;
        v170 = v194;
        v166 = v193;
        v151 = v192 + 1;
        v155 = v191;
        v158 = v190;
        v162 = v93;
        goto lab_0x402bd2;
    }
  lab_0x402b60:;
    // 0x402b60
    int64_t v82; // 0x402b75
    int64_t v65 = v82 + v81; // 0x402a20
    int64_t v66 = v175; // 0x402a20
    int64_t v67 = v179; // 0x402a20
    int64_t v68 = v183; // 0x402a20
    int64_t v69 = v169; // 0x402a20
    int64_t v70 = v165; // 0x402a20
    int64_t v71 = v150; // 0x402a20
    int64_t v72 = v154; // 0x402a20
    int64_t v73 = v161; // 0x402a20
    goto lab_0x402b60_2;
  lab_0x402c30:;
    int64_t v200 = v163;
    int64_t v201 = v156;
    int64_t v202 = v152;
    int64_t v203 = v167;
    int64_t v204 = v171;
    int64_t v205 = v185;
    int64_t v206 = v181;
    int64_t v207 = v177;
    v175 = v207;
    v179 = v206;
    v183 = v205;
    v169 = v204;
    v165 = v203;
    v150 = v202;
    v154 = 0;
    v161 = v200;
    if (v201 == 0) {
        goto lab_0x402b60;
    } else {
        // 0x402c39
        v85 = v207;
        v86 = v206;
        v87 = v205;
        v88 = v204;
        v89 = v203;
        v90 = v202;
        v91 = v201;
        v92 = v159;
        v93 = v200;
        v94 = v207;
        v95 = v206;
        v96 = v205;
        v97 = v204;
        v98 = v203;
        v99 = v202;
        v100 = v201;
        v101 = v159;
        if ((char)v200 == 0) {
            goto lab_0x402ba8;
        } else {
            goto lab_0x402c42;
        }
    }
  lab_0x402bd2:;
    int64_t v208 = v162;
    int64_t v209 = v151;
    int64_t v210 = v166;
    int64_t v211 = v170;
    int64_t v212 = v173;
    int64_t v213 = v184;
    int64_t v214 = v180;
    int64_t v215 = v176;
    int64_t v216 = v212 + 0xfffffff7; // 0x402bd2
    int64_t v217 = v158 + v149; // 0x402bd5
    int64_t v218 = v155 - v149; // 0x402bd8
    g61 = v216 & 0xffffffff;
    int64_t v219 = v213; // 0x402be4
    int64_t v220 = v215; // 0x402be4
    int64_t v221 = v213; // 0x402be4
    int64_t v222 = v210; // 0x402be4
    switch ((int32_t)v216) {
        case 0: {
            // 0x402d00
            v220 = v215;
            v221 = v213;
            v222 = v210 + 8 & -8;
            goto lab_0x402c29;
        }
        case 1: {
            // 0x402c10
            v219 = v213 + 1;
            goto lab_0x402c16;
        }
        case 2: {
            goto lab_0x402c29;
        }
        case 3: {
            goto lab_0x402c16;
        }
        case 4: {
            goto lab_0x402c16;
        }
        case 23: {
            // 0x402cf0
            v220 = v215;
            v221 = v213;
            v222 = v210 + 1;
            goto lab_0x402c29;
        }
        default: {
            // 0x403154
            v178 = v215;
            v182 = v214;
            v186 = v213;
            v174 = v212;
            v172 = v211;
            v168 = v210;
            wc = v212 & 0xffffffff;
            v153 = v209;
            v157 = v218;
            v160 = v217;
            v164 = v208;
            goto lab_0x402cab;
        }
    }
  lab_0x402cab:;
    int64_t v223 = v164;
    int64_t v224 = v160;
    int64_t v225 = v157;
    int64_t v226 = v153;
    int64_t v227 = v168;
    int64_t v228 = v186;
    int64_t v229 = v182;
    int64_t v230 = v178;
    v177 = v230;
    v181 = v229;
    v185 = v228;
    v171 = v172;
    v167 = v227;
    v152 = v226;
    v156 = v225;
    v159 = v224;
    v163 = v223;
    if (iswprint((int32_t)wc) == 0) {
        goto lab_0x402c30;
    } else {
        int32_t v231 = wcwidth((int32_t)v174); // 0x402cc2
        v177 = v230;
        v181 = v229;
        v185 = v228;
        v171 = 1;
        v167 = (v231 >= 0 == (v231 != 0) ? (int64_t)v231 : 0) + v227;
        v152 = v226;
        v156 = v225;
        v159 = v224;
        v163 = v223;
        if (iswspace(wc2) != 0) {
            goto lab_0x402c29;
        } else {
            goto lab_0x402c30;
        }
    }
  lab_0x402c29:
    // 0x402c29
    v177 = v220;
    v181 = v211 + v214;
    v185 = v221;
    v171 = 0;
    v167 = v222;
    v152 = v209;
    v156 = v218;
    v159 = v217;
    v163 = v208;
    goto lab_0x402c30;
  lab_0x402c16:;
    int64_t v232 = v215 >= v210 ? v215 : v210; // 0x402c1e
    v220 = v232;
    v221 = v219;
    v222 = 0;
    goto lab_0x402c29;
  lab_0x402f98:;
    int64_t v54 = v47;
    unsigned char v55 = *(char *)&g40; // 0x402fa8
    int64_t v56 = v55 > v4 ? v42 : v48; // 0x402fb3
    function_402850(v44, v51, v56, v42, v54, a2);
    g47 += v44;
    g46 += v51;
    g45 += v56;
    g44 += v42;
    if (g43 < v54) {
        // 0x402fef
        g43 = v54;
    }
    // 0x402ff6
    return v53 & 0xffffffff;
  lab_0x402b02:
    // 0x402b02
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x402d0d
        v32 = &v57;
        int64_t v58 = 0; // 0x402d3c
        int64_t v59 = 0; // 0x402d3c
        int64_t v60 = 0; // 0x402d3c
        int64_t v61 = 0; // 0x402d3c
        int64_t v62 = 0; // 0x402d3c
        int64_t v63 = 0; // 0x402d3c
        while (true) {
          lab_0x402d40:
            // 0x402d40
            v45 = v63;
            v49 = v62;
            v50 = v61;
            v46 = v60;
            v43 = v59;
            v41 = v58;
            v33 = function_405ba0((int32_t)fd, v32, 0x4000);
            v52 = 1;
            switch (v33) {
                case 0: {
                    goto lab_0x403053;
                }
                case -1: {
                    // 0x403069
                    error(0, *__errno_location(), "%s", (char *)function_405650(0, 3, v1));
                    v52 = 0;
                    goto lab_0x403053;
                }
                default: {
                    // 0x402d66
                    v27 = v43;
                    v28 = v46;
                    v29 = v50;
                    v20 = v32;
                    v30 = v49;
                    v31 = v45;
                    while (true) {
                      lab_0x402d78:
                        // 0x402d78
                        v34 = v31;
                        v14 = v30;
                        v15 = v29;
                        v35 = v28;
                        int64_t v36 = v27;
                        unsigned char v37 = *(char *)v20; // 0x402d7c
                        g62 = v37 - 9;
                        v38 = v36;
                        v10 = v36;
                        v12 = v35;
                        v18 = v34;
                        switch (v37) {
                            case 9: {
                                // 0x402dc0
                                v10 = v36;
                                v12 = v35;
                                v18 = v34 + 8 & -8;
                                goto lab_0x402da8;
                            }
                            case 10: {
                                // 0x402d98
                                v38 = v36 + 1;
                                goto lab_0x402d9e;
                            }
                            case 11: {
                                goto lab_0x402da8;
                            }
                            case 12: {
                                goto lab_0x402d9e;
                            }
                            case 13: {
                                goto lab_0x402d9e;
                            }
                            case 32: {
                                // 0x402db8
                                v10 = v36;
                                v12 = v35;
                                v18 = v34 + 1;
                                goto lab_0x402da8;
                            }
                            default: {
                                int16_t v39 = *(int16_t *)(2 * (int64_t)v37 + (int64_t)*__ctype_b_loc()); // 0x402de2
                                if ((v39 & 0x4000) == 0) {
                                    goto lab_0x402dae;
                                } else {
                                    int64_t v40 = v34 + 1; // 0x402deb
                                    v10 = v36;
                                    v12 = v35;
                                    v18 = v40;
                                    v11 = v36;
                                    v13 = v35;
                                    v16 = v15;
                                    v17 = 1;
                                    v19 = v40;
                                    if ((v39 & 0x2000) != 0) {
                                        goto lab_0x402da8;
                                    } else {
                                        goto lab_0x402dae;
                                    }
                                }
                            }
                        }
                    }
                  lab_0x402d40_2:
                    // 0x402d40
                    v58 = v33 + v41;
                    v59 = v26;
                    v60 = v25;
                    v61 = v24;
                    v62 = v23;
                    v63 = v22;
                    goto lab_0x402d40;
                }
            }
        }
        goto lab_0x403053;
    } else {
        // 0x402b11
        ps = 0;
        int64_t v64 = &v57; // 0x402b50
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v69 = 0;
        v70 = 0;
        v71 = 0;
        v72 = 0;
        v73 = 0;
        while (true) {
          lab_0x402b60_2:;
            int64_t v74 = v72;
            v75 = v71;
            v76 = v70;
            v77 = v69;
            v78 = v68;
            v79 = v67;
            v80 = v66;
            v81 = v65;
            v82 = function_405ba0((int32_t)fd, v74 + v64, 0x4000 - v74);
            v83 = 1;
            switch (v82) {
                case 0: {
                    goto lab_0x402f7e;
                }
                case -1: {
                    // 0x40300b
                    error(0, *__errno_location(), "%s", (char *)function_405650(0, 3, v1));
                    v83 = 0;
                    goto lab_0x402f7e;
                }
                default: {
                    int64_t v84 = v82 + v74; // 0x402b92
                    v85 = v80;
                    v86 = v79;
                    v87 = v78;
                    v88 = v77;
                    v89 = v76;
                    v90 = v75;
                    v91 = v84;
                    v92 = v64;
                    v93 = v73;
                    v94 = v80;
                    v95 = v79;
                    v96 = v78;
                    v97 = v77;
                    v98 = v76;
                    v99 = v75;
                    v100 = v84;
                    v101 = v64;
                    if ((char)v73 != 0) {
                        goto lab_0x402c42;
                    } else {
                        goto lab_0x402ba8;
                    }
                }
            }
        }
        goto lab_0x402f7e;
    }
  lab_0x402aa8:;
    int32_t v102 = 0; // 0x402aa8
    int32_t v103 = v102; // 0x402aac
    if (v102 >= 0 == (v102 != 0)) {
        int32_t v104 = __fxstat(1, (int32_t)fd, (struct stat *)(a3 + 8)); // 0x4030b5
        *(int32_t *)a3 = v104;
        v103 = v104;
    }
    int64_t v105 = 0; // 0x402ab4
    int64_t v106; // 0x402a20
    bool v107; // 0x402a20
    uint64_t v108; // 0x402e55
    if (v103 == 0) {
        // 0x402e42
        v105 = 0;
        if ((*(int32_t *)(a3 + 32) & 0xd000) != 0x8000) {
            goto lab_0x402ac3;
        } else {
            // 0x402e55
            v108 = *(int64_t *)(a3 + 56);
            v105 = 0;
            if (v108 < 0) {
                goto lab_0x402ac3;
            } else {
                uint64_t v109 = (int64_t)g35; // 0x402e67
                if (a4 == -1) {
                    int32_t v110 = lseek((int32_t)fd, 0, SEEK_CUR); // 0x403113
                    int64_t v111 = v110; // 0x403113
                    if (v108 % v109 == 0) {
                        // 0x403165
                        v106 = v111;
                        v107 = v110 < 0;
                        goto lab_0x402e8c;
                    } else {
                        // 0x403128
                        v42 = (v108 < v111 ? v111 : v108) - v111;
                        v44 = 0;
                        v47 = 0;
                        v48 = 0;
                        v51 = 0;
                        v53 = 1;
                        goto lab_0x402f98;
                    }
                } else {
                    // 0x402e78
                    v106 = 0;
                    v107 = false;
                    v42 = v108;
                    v44 = 0;
                    v47 = 0;
                    v48 = 0;
                    v51 = 0;
                    v53 = 1;
                    if (v108 % v109 != 0) {
                        goto lab_0x402f98;
                    } else {
                        goto lab_0x402e8c;
                    }
                }
            }
        }
    } else {
        goto lab_0x402ac3;
    }
  lab_0x40319a:
    // 0x40319a
    if (*(char *)&g42 == 0) {
        goto lab_0x402aa8;
    } else {
        // 0x40319a
        v5 = fd;
        goto lab_0x4031b0;
    }
  lab_0x402ac3:;
    int64_t v112 = &v57; // 0x402ad0
    int32_t fd3 = fd; // 0x402ad5
    posix_fadvise(fd3, 0, 0, POSIX_FADV_SEQUENTIAL);
    int64_t v113 = function_405ba0(fd3, v112, 0x4000); // 0x402e17
    int64_t v114 = v113; // 0x402e1f
    v42 = v105;
    v44 = 0;
    v47 = 0;
    v48 = 0;
    v51 = 0;
    v53 = 1;
    if (v113 != 0) {
        int64_t v115 = v105;
        while (v114 != -1) {
            int64_t v116 = v115 + v114; // 0x402e0a
            int64_t v117 = function_405ba0(fd3, v112, 0x4000); // 0x402e17
            v114 = v117;
            v42 = v116;
            v44 = 0;
            v47 = 0;
            v48 = 0;
            v51 = 0;
            v53 = 1;
            if (v117 == 0) {
                goto lab_0x402f98;
            }
            v115 = v116;
        }
        // 0x4030c1
        error(0, *__errno_location(), "%s", (char *)function_405650(0, 3, v1));
        v42 = v115;
        v44 = 0;
        v47 = 0;
        v48 = 0;
        v51 = 0;
        v53 = v6;
    }
    goto lab_0x402f98;
  lab_0x4031b0:;
    int64_t v118 = &v57; // 0x4031d3
    int64_t v119 = 0; // 0x4031df
    int64_t v120 = 0; // 0x4031df
    char v121 = 0; // 0x4031df
    while (true) {
      lab_0x4031e0:;
        int64_t v122 = v120;
        int64_t v123 = v119;
        int64_t v124 = function_405ba0(v5, v118, 0x4000); // 0x4031ec
        v42 = v123;
        v44 = v122;
        v47 = 0;
        v48 = 0;
        v51 = 0;
        v53 = 1;
        switch (v124) {
            case 0: {
                goto lab_0x402f98;
            }
            case -1: {
                // 0x4032d8
                error(0, *__errno_location(), "%s", (char *)function_405650(0, 3, v1));
                v42 = v123;
                v44 = v122;
                v47 = 0;
                v48 = 0;
                v51 = 0;
                v53 = v6;
                goto lab_0x402f98;
            }
            default: {
                int64_t v125 = v124 + v118; // 0x403209
                int64_t v126 = v122; // 0x40321b
                int64_t v127; // 0x402a20
                if (v121 != 0) {
                    int64_t v128 = function_4073a0(v118, 10, v124); // 0x403283
                    v127 = v122;
                    int64_t v129 = v128; // 0x40328b
                    int64_t v130 = v122; // 0x40328b
                    if (v128 != 0) {
                        int64_t v131 = v129 + 1; // 0x403270
                        int64_t v132 = v130 + 1; // 0x403274
                        int64_t v133 = function_4073a0(v131, 10, v125 - v131); // 0x403283
                        v127 = v132;
                        v130 = v132;
                        while (v133 != 0) {
                            // 0x403270
                            v131 = v133 + 1;
                            v132 = v130 + 1;
                            v133 = function_4073a0(v131, 10, v125 - v131);
                            v127 = v132;
                            v130 = v132;
                        }
                    }
                } else {
                    int64_t v134 = v118 + 1; // 0x403230
                    int64_t v135 = v126 + (int64_t)(*(char *)v118 == 10); // 0x40323d
                    v126 = v135;
                    int64_t v136 = v134; // 0x403243
                    v127 = v135;
                    while (v125 != v134) {
                        // 0x403230
                        v134 = v136 + 1;
                        v135 = v126 + (int64_t)(*(char *)v136 == 10);
                        v126 = v135;
                        v136 = v134;
                        v127 = v135;
                    }
                }
                // 0x4031e0
                v119 = v124 + v123;
                v120 = v127;
                v121 = 1;
                goto lab_0x4031e0;
            }
        }
    }
    goto lab_0x402f98;
  lab_0x402e8c:;
    int64_t v137 = *(int64_t *)(a3 + 64); // 0x402e96
    int64_t offset = v108 - v108 % (v137 < 0x2000000000000001 ? v137 + 1 : 513); // 0x402eb6
    v105 = 0;
    if (!v107 && offset > v106) {
        int64_t v138 = lseek((int32_t)fd, (int32_t)offset, SEEK_CUR) < 0 ? 0 : offset - v106;
        v105 = v138;
    }
    goto lab_0x402ac3;
}
// Address range: 0x403350 - 0x4036ad
int64_t function_403350(int64_t a1) {
    int32_t status = a1; // 0x403366
    if (status != 0) {
        // 0x40336a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40338f
        exit(status);
        // UNREACHABLE
    }
    // 0x403396
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n  or:  %s [OPTION]... --files0-from=F\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print newline, word, and byte counts for each FILE, and a total line if\nmore than one FILE is specified.  A word is a non-zero-length sequence of\ncharacters delimited by white space.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nThe options below may be used to select which counts are printed, always in\nthe following order: newline, word, character, byte, maximum line length.\n  -c, --bytes            print the byte counts\n  -m, --chars            print the character counts\n  -l, --lines            print the newline counts\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --files0-from=F    read input from the files specified by\n                           NUL-terminated names in file F;\n                           If F is - then read names from standard input\n  -L, --max-line-length  print the maximum display width\n  -w, --words            print the word counts\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    int64_t v1 = &g1; // bp-136, 0x403489
    bool v2; // 0x403350
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403510
    int64_t v6 = *(int64_t *)v5; // 0x403514
    int64_t v7 = 3; // 0x40351a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"wc";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403526
        char v11 = *(char *)v9; // 0x403526
        char v12 = v11; // 0x403526
        bool v13 = false; // 0x403526
        while (v10 == v11) {
            // 0x40351c
            v7--;
            int64_t v14 = v9 + v3; // 0x403526
            int64_t v15 = v8 + v3; // 0x403526
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
            // break -> 0x403532
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x403532
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403644;
        } else {
            // 0x40362e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403683
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403594;
            } else {
                goto lab_0x403644;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403594;
        } else {
            // 0x40357a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403683
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403594;
            } else {
                goto lab_0x403594;
            }
        }
    }
  lab_0x403644:
    // 0x403644
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4035d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40338f
    exit(status);
    // UNREACHABLE
  lab_0x403594:
    // 0x403594
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4035d4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40338f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4036b0 - 0x4036d4
int64_t function_4036b0(int64_t a1) {
    int64_t * mem = malloc(48); // 0x4036b9
    int64_t result = (int64_t)mem; // 0x4036b9
    if (mem != NULL) {
        // 0x4036c3
        *mem = 0;
        *(int64_t *)(result + 32) = a1;
        *(int64_t *)(result + 40) = a1;
    }
    // 0x4036d2
    return result;
}
// Address range: 0x4036e0 - 0x403718
int64_t function_4036e0(int64_t a1) {
    int64_t * mem = malloc(48); // 0x4036e9
    int64_t result = (int64_t)mem; // 0x4036e9
    if (mem != NULL) {
        // 0x4036f3
        *mem = a1;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int64_t *)(result + 8) = 0;
        *(int64_t *)(result + 32) = 0;
    }
    // 0x403716
    return result;
}
// Address range: 0x403720 - 0x4037a7
int64_t function_403720(int64_t stream, int64_t a2, int64_t a3) {
    if (stream == 0) {
        int64_t v1 = *(int64_t *)40; // 0x403760
        int64_t result = *(int64_t *)v1; // 0x403764
        if (result == 0) {
            // 0x4037a0
            *(int32_t *)a2 = 2;
            return 0;
        }
        // 0x40376c
        *(int32_t *)a2 = 1;
        *(int64_t *)40 = v1 + 8;
        return result;
    }
    int64_t lineptr = stream + 16; // 0x403736
    int64_t result2; // 0x403720
    if (getdelim((char **)lineptr, (int32_t *)(stream + 24), 0, (struct _IO_FILE *)stream) < 0) {
        // 0x403780
        *(int32_t *)a2 = feof((struct _IO_FILE *)lineptr) == 0 ? 4 : 2;
        result2 = 0;
    } else {
        // 0x403748
        *(int32_t *)a2 = 1;
        int64_t * v2 = (int64_t *)(stream + 8); // 0x403753
        *v2 = *v2 + 1;
        result2 = *(int64_t *)lineptr;
    }
    // 0x403758
    return result2;
}
// Address range: 0x4037b0 - 0x4037cd
int64_t function_4037b0(int64_t a1) {
    if (a1 == 0) {
        // 0x4037c0
        return *(int64_t *)40 - *(int64_t *)32 >> 3;
    }
    // 0x4037b6
    return *(int64_t *)(a1 + 8);
}
// Address range: 0x4037d0 - 0x4037ec
int64_t function_4037d0(int64_t a1) {
    if (a1 != 0) {
        // 0x4037da
        free((int64_t *)*(int64_t *)(a1 + 16));
    }
    // 0x4037e3
    free((int64_t *)a1);
    return &g64;
}
// Address range: 0x4037f0 - 0x4037f8
int64_t function_4037f0(int64_t a1) {
    // 0x4037f0
    g49 = a1;
    int64_t result; // 0x4037f0
    return result;
}
// Address range: 0x403800 - 0x403808
int64_t function_403800(int64_t a1) {
    // 0x403800
    g48 = a1;
    int64_t result; // 0x403800
    return result;
}
// Address range: 0x403810 - 0x4038ae
int64_t function_403810(void) {
    // 0x403810
    int32_t * err_num; // 0x403826
    if ((int32_t)function_4077e0((int64_t)g28) == 0) {
        goto lab_0x40383c;
    } else {
        // 0x403826
        err_num = __errno_location();
        if (g48 == 0) {
            goto lab_0x403853;
        } else {
            // 0x403837
            if (*err_num != 32) {
                goto lab_0x403853;
            } else {
                goto lab_0x40383c;
            }
        }
    }
  lab_0x40383c:;
    int64_t result = function_4077e0((int64_t)g31); // 0x403843
    if ((int32_t)result == 0) {
        // 0x40384c
        return result;
    }
    // 0x40388e
    _exit(g18);
    // UNREACHABLE
  lab_0x403853:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40385f
    if (g49 == 0) {
        // 0x403899
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403873
        error(0, *err_num, "%s: %s", (char *)function_405620((int64_t)g49), v1);
    }
    // 0x40388e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x4038b0 - 0x4038b5
int64_t function_4038b0(int64_t fd, int32_t offset, int32_t length, int64_t advice) {
    // 0x4038b0
    return posix_fadvise((int32_t)fd, offset, length, (int32_t)advice);
}
// Address range: 0x4038c0 - 0x4038e1
int64_t function_4038c0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x4038c0
    if (stream == 0) {
        // 0x4038e0
        int64_t result; // 0x4038c0
        return result;
    }
    // 0x4038c5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4038f0 - 0x403938
int64_t function_4038f0(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x4038f0
    *(char *)v1 = 0;
    int64_t result = v1; // 0x403902
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40390b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x403934
    return result;
}
// Address range: 0x403940 - 0x403961
int64_t function_403940(int64_t a1) {
    int32_t wc = a1; // 0x403943
    int32_t result = wcwidth(wc); // 0x403943
    if (result < 0) {
        // 0x403950
        return iswcntrl(wc) == 0;
    }
    // 0x40394c
    return result;
}
// Address range: 0x403970 - 0x4039c6
int64_t function_403970(int64_t a1, int64_t a2) {
    // 0x403970
    *(int64_t *)a1 = a2;
    char v1 = *(char *)(a2 + 16); // 0x40398f
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = v1;
    int64_t result = 0; // 0x40399c
    if (v1 != 0) {
        uint32_t v2 = *(int32_t *)(a2 + 20); // 0x40399e
        *(int32_t *)(a1 + 20) = v2;
        result = v2;
    }
    // 0x4039a4
    return result;
}
// Address range: 0x4039d0 - 0x4039e7
int64_t function_4039d0(uint64_t a1) {
    uint32_t v1 = *(int32_t *)((a1 / 8 & 28) + (int64_t)&g3); // 0x4039da
    return (v1 >> (int32_t)a1 % 32) % 2;
}
// Address range: 0x4039f0 - 0x403aab
int64_t function_4039f0(void) {
    // 0x4039f0
    int128_t v1; // 0x4039f0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = v1;
    int32_t v5 = sysconf(_SC_NPROCESSORS_ONLN); // 0x4039fc
    __asm_pxor(v4, v4);
    int64_t v6 = __asm_movsd(__asm_cvtsi2sd((int64_t)v5)); // 0x403a0f
    int32_t v7 = sysconf(_SC_PAGESIZE); // 0x403a15
    int128_t v8 = __asm_movsd_3(v6); // 0x403a1a
    int128_t v9 = __asm_pxor(v2, v2); // 0x403a20
    __asm_comisd(v8, v9);
    int64_t v10; // 0x4039f0
    if ((uint64_t)v10 >= 136) {
        int64_t result = v7; // 0x403a15
        __asm_pxor(v3, v3);
        int128_t v11 = __asm_cvtsi2sd(result); // 0x403a2e
        __asm_comisd(v11, v9);
        // 0x403a80
        __asm_mulsd_4(v8, v11);
        return result;
    }
    // 0x403a39
    int64_t v12; // bp-120, 0x4039f0
    int32_t result2 = sysinfo((struct sysinfo *)&v12); // 0x403a3e
    int128_t v13 = __asm_movsd_3(0x4190000000000000); // 0x403a43
    if (result2 != 0) {
        // 0x403a4f
        return result2;
    }
    // 0x403a60
    int32_t v14; // 0x4039f0
    uint64_t v15 = (int64_t)v14; // 0x403a60
    int128_t v16; // 0x4039f0
    if (v14 < 0) {
        // 0x403a90
        __asm_pxor(v13, v13);
        int128_t v17 = __asm_cvtsi2sd(v15 / 2 | v15 % 2); // 0x403aa0
        v16 = __asm_addsd(v17, v17);
    } else {
        // 0x403a6a
        __asm_pxor(v13, v13);
        v16 = __asm_cvtsi2sd(v15);
    }
    int64_t result3 = v14; // 0x403a73
    __asm_pxor(v3, v3);
    // 0x403a80
    __asm_mulsd_4(v16, __asm_cvtsi2sd(result3));
    return result3;
}
// Address range: 0x403ab0 - 0x403ba6
int64_t function_403ab0(void) {
    // 0x403ab0
    int128_t v1; // 0x403ab0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int128_t v4 = v1;
    int32_t v5 = sysconf(_SC_PHYS_PAGES); // 0x403abc
    __asm_pxor(v4, v4);
    int64_t v6 = __asm_movsd(__asm_cvtsi2sd((int64_t)v5)); // 0x403acf
    int32_t v7 = sysconf(_SC_PAGESIZE); // 0x403ad5
    int128_t v8 = __asm_movsd_3(v6); // 0x403ada
    int128_t v9 = __asm_pxor(v2, v2); // 0x403ae0
    __asm_comisd(v8, v9);
    int64_t v10; // 0x403ab0
    if ((uint64_t)v10 >= 136) {
        int64_t result = v7; // 0x403ad5
        __asm_pxor(v3, v3);
        int128_t v11 = __asm_cvtsi2sd(result); // 0x403aee
        __asm_comisd(v11, v9);
        // 0x403b3e
        __asm_mulsd_4(v8, v11);
        return result;
    }
    // 0x403af9
    int64_t v12; // bp-120, 0x403ab0
    if (sysinfo((struct sysinfo *)&v12) != 0) {
        int64_t result2 = function_4039f0(); // 0x403b50
        __asm_mulsd(v8, 0x3fd0000000000000);
        return result2;
    }
    // 0x403b07
    int32_t v13; // 0x403ab0
    uint64_t v14 = (int64_t)v13; // 0x403b07
    int64_t v15; // 0x403ab0
    int64_t v16; // 0x403ab0
    int128_t v17; // 0x403ab0
    int128_t v18; // 0x403ab0
    if (v13 < 0) {
        // 0x403b68
        __asm_pxor(v8, v8);
        int64_t v19 = v13; // 0x403b78
        int128_t v20 = __asm_cvtsi2sd(v14 / 2 | v14 % 2); // 0x403b7d
        int128_t v21 = __asm_addsd(v20, v20); // 0x403b82
        v17 = v21;
        v15 = v19;
        v18 = v21;
        v16 = v19;
        if (v13 >= 0) {
            goto lab_0x403b24;
        } else {
            goto lab_0x403b8b;
        }
    } else {
        // 0x403b11
        __asm_pxor(v8, v8);
        int128_t v22 = __asm_cvtsi2sd(v14); // 0x403b15
        int64_t v23 = v13; // 0x403b1a
        v17 = v22;
        v15 = v23;
        v18 = v22;
        v16 = v23;
        if (v13 < 0) {
            goto lab_0x403b8b;
        } else {
            goto lab_0x403b24;
        }
    }
  lab_0x403b24:
    // 0x403b24
    __asm_pxor(v3, v3);
    int128_t v24 = v17; // 0x403b28
    int128_t v25 = __asm_cvtsi2sd(v15); // 0x403b28
    goto lab_0x403b2d;
  lab_0x403b8b:;
    uint64_t v28 = v16;
    __asm_pxor(v3, v3);
    int128_t v29 = __asm_cvtsi2sd(v28 / 2 | v28 % 2); // 0x403b9b
    v24 = v18;
    v25 = __asm_addsd(v29, v29);
    goto lab_0x403b2d;
  lab_0x403b2d:;
    int128_t v26 = v25;
    int64_t result3 = v13; // 0x403b2d
    int128_t v27 = __asm_addsd(v24, v26); // 0x403b31
    __asm_pxor(v26, v26);
    // 0x403b3e
    __asm_mulsd_4(v27, __asm_cvtsi2sd(result3));
    return result3;
}
// Address range: 0x403bb0 - 0x403c49
int64_t function_403bb0(int64_t str) {
    // 0x403bb0
    if (str == 0) {
        // 0x403c29
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403bbe
    int64_t result = (int64_t)found_char_pos; // 0x403bbe
    if (found_char_pos == NULL) {
        // 0x403c19
        g50 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403bc8
    if (v1 - str < 7) {
        // 0x403c19
        g50 = str;
        g30 = str;
        return result;
    }
    // 0x403bd8
    bool v2; // 0x403bb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403bb0
    int64_t v5 = result - 6; // 0x403bb0
    int64_t v6 = 7; // 0x403be6
    unsigned char v7 = *(char *)v5; // 0x403be6
    char v8 = *(char *)v4; // 0x403be6
    char v9 = v8; // 0x403be6
    bool v10 = false; // 0x403be6
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
    int64_t v12 = (int64_t)"lt-"; // 0x403bf0
    int64_t v13 = v1; // 0x403bf0
    int64_t v14 = 3; // 0x403bf0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403c19
        g50 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403c02
    char v16 = *(char *)v12; // 0x403c02
    char v17 = v16; // 0x403c02
    bool v18 = false; // 0x403c02
    while (v15 == v16) {
        // 0x403bf2
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
    int64_t v20 = v1; // 0x403c0c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403c0e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x403c19
    g50 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x403c50 - 0x403d42
int64_t function_403c50(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403c64
    int64_t result = (int64_t)v1; // 0x403c64
    if (result != a1) {
        // 0x403c71
        return result;
    }
    int64_t v2 = function_4078a0(); // 0x403c80
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403d36
    if (v3 == 85) {
        // 0x403c90
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403d28
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x403cbe
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x403ccb
        // 0x403c71
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403d28
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x403d0d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x403d1a
    // 0x403c71
    return result4;
}
// Address range: 0x403d50 - 0x403da7
int64_t function_403d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403d50
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403d98
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403da7 - 0x404f71
int64_t function_403da7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403df1
    int64_t v3 = 0; // 0x403df1
    int64_t v4; // 0x403da7
    int64_t v5; // 0x403da7
    int64_t v6; // 0x403da7
    int64_t v7; // 0x403da7
    int64_t v8; // 0x403da7
    int64_t v9; // 0x403da7
    int64_t v10; // 0x403da7
    int64_t v11; // 0x403da7
    int64_t v12; // 0x403da7
    int64_t v13; // 0x403da7
    int64_t v14; // 0x403da7
    int64_t v15; // 0x403da7
    int64_t v16; // 0x403da7
    int64_t v17; // 0x403da7
    int64_t v18; // 0x403da7
    int64_t result; // 0x403da7
    int64_t v19; // 0x403da7
    int32_t wc; // bp+132, 0x403da7
    int64_t ps; // bp+136, 0x403da7
    char v20; // 0x404360
    int64_t v21; // 0x404360
    int64_t v22; // 0x404708
    int64_t v23; // 0x403da7
    int64_t v24; // 0x404727
    int32_t v25; // 0x403da7
    while (true) {
      lab_0x403df8_2:
        // 0x403df8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403da7
        int64_t v27; // 0x403e2c
        while (true) {
          lab_0x403df8:
            // 0x403df8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403e03
            if (v15 == -1) {
                // 0x403e05
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403e13
            if (v28) {
                // break (via goto) -> 0x404578
                goto lab_0x404578;
            }
            // 0x403e1c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g63 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40440b
                    if (v25 % 2 == 0) {
                        goto lab_0x403f51;
                    }
                    // 0x40482d
                    v26 = v5 + 1;
                    goto lab_0x403df8;
                }
                case 7: {
                    goto lab_0x403f51;
                }
                case 8: {
                    goto lab_0x403f51;
                }
                case 9: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403f51;
                }
                case 12: {
                    goto lab_0x403f51;
                }
                case 13: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x403f1d;
                }
                case 36: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403f51;
                }
                case 38: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403f51;
                }
                case 44: {
                    goto lab_0x403f51;
                }
                case 45: {
                    goto lab_0x403f51;
                }
                case 46: {
                    goto lab_0x403f51;
                }
                case 47: {
                    goto lab_0x403f51;
                }
                case 48: {
                    goto lab_0x403f51;
                }
                case 49: {
                    goto lab_0x403f51;
                }
                case 50: {
                    goto lab_0x403f51;
                }
                case 51: {
                    goto lab_0x403f51;
                }
                case 52: {
                    goto lab_0x403f51;
                }
                case 53: {
                    goto lab_0x403f51;
                }
                case 54: {
                    goto lab_0x403f51;
                }
                case 55: {
                    goto lab_0x403f51;
                }
                case 56: {
                    goto lab_0x403f51;
                }
                case 57: {
                    goto lab_0x403f51;
                }
                case 58: {
                    goto lab_0x403f51;
                }
                case 59: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403f51;
                }
                case 66: {
                    goto lab_0x403f51;
                }
                case 67: {
                    goto lab_0x403f51;
                }
                case 68: {
                    goto lab_0x403f51;
                }
                case 69: {
                    goto lab_0x403f51;
                }
                case 70: {
                    goto lab_0x403f51;
                }
                case 71: {
                    goto lab_0x403f51;
                }
                case 72: {
                    goto lab_0x403f51;
                }
                case 73: {
                    goto lab_0x403f51;
                }
                case 74: {
                    goto lab_0x403f51;
                }
                case 75: {
                    goto lab_0x403f51;
                }
                case 76: {
                    goto lab_0x403f51;
                }
                case 77: {
                    goto lab_0x403f51;
                }
                case 78: {
                    goto lab_0x403f51;
                }
                case 79: {
                    goto lab_0x403f51;
                }
                case 80: {
                    goto lab_0x403f51;
                }
                case 81: {
                    goto lab_0x403f51;
                }
                case 82: {
                    goto lab_0x403f51;
                }
                case 83: {
                    goto lab_0x403f51;
                }
                case 84: {
                    goto lab_0x403f51;
                }
                case 85: {
                    goto lab_0x403f51;
                }
                case 86: {
                    goto lab_0x403f51;
                }
                case 87: {
                    goto lab_0x403f51;
                }
                case 88: {
                    goto lab_0x403f51;
                }
                case 89: {
                    goto lab_0x403f51;
                }
                case 90: {
                    goto lab_0x403f51;
                }
                case 91: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403f51;
                }
                case 94: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403f51;
                }
                case 96: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403f51;
                }
                case 98: {
                    goto lab_0x403f51;
                }
                case 99: {
                    goto lab_0x403f51;
                }
                case 100: {
                    goto lab_0x403f51;
                }
                case 101: {
                    goto lab_0x403f51;
                }
                case 102: {
                    goto lab_0x403f51;
                }
                case 103: {
                    goto lab_0x403f51;
                }
                case 104: {
                    goto lab_0x403f51;
                }
                case 105: {
                    goto lab_0x403f51;
                }
                case 106: {
                    goto lab_0x403f51;
                }
                case 107: {
                    goto lab_0x403f51;
                }
                case 108: {
                    goto lab_0x403f51;
                }
                case 109: {
                    goto lab_0x403f51;
                }
                case 110: {
                    goto lab_0x403f51;
                }
                case 111: {
                    goto lab_0x403f51;
                }
                case 112: {
                    goto lab_0x403f51;
                }
                case 113: {
                    goto lab_0x403f51;
                }
                case 114: {
                    goto lab_0x403f51;
                }
                case 115: {
                    goto lab_0x403f51;
                }
                case 116: {
                    goto lab_0x403f51;
                }
                case 117: {
                    goto lab_0x403f51;
                }
                case 118: {
                    goto lab_0x403f51;
                }
                case 119: {
                    goto lab_0x403f51;
                }
                case 120: {
                    goto lab_0x403f51;
                }
                case 121: {
                    goto lab_0x403f51;
                }
                case 122: {
                    goto lab_0x403f51;
                }
                case 123: {
                    goto lab_0x403ef5;
                }
                case 124: {
                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403ef5;
                }
                case 126: {
                    goto lab_0x403f1d;
                }
                default: {
                    goto lab_0x4042f5;
                }
            }
        }
      lab_0x4042f5:
        if (v23 != 1) {
            // 0x404660
            ps = 0;
            int64_t len = v15; // 0x404670
            if (v15 == -1) {
                // 0x404672
                len = strlen((char *)str);
            }
            // 0x40469e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4046ff:
                // 0x4046ff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404704
                int64_t v30 = v29 + str;
                v24 = function_407320(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x404c7a_2;
                    }
                    case -1: {
                        goto lab_0x404c7a_2;
                    }
                    case -2: {
                        // 0x404d5d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404d97
                            v19 = v18;
                            int64_t v31 = v18; // 0x404d9a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404da7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404da0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x404c7a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x404c7a_2;
                    }
                    case 1: {
                        goto lab_0x4046d0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40477c
                        char v34 = *(char *)v33; // 0x40478d
                        unsigned char v35; // 0x403da7
                        if (v34 < 125) {
                            // 0x404798
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4047af
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404780
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40478d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404798
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4047af
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404780
                            v33++;
                        }
                        goto lab_0x4046d0;
                    }
                }
            }
            goto lab_0x404c7a_2;
        } else {
            // 0x404344
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403f51;
        }
    }
  lab_0x404578:
    // 0x404578
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x404e7a
        if (v8 > result) {
            // 0x404e83
            *(char *)(v12 + result) = 0;
        }
        // 0x4041a7
        return result;
    }
    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403f51:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403f60
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40416a_2;
        }
    }
    int64_t v39 = result; // 0x404061
    char v40 = v20; // 0x404061
    int64_t v41 = v38; // 0x404061
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404061
    int64_t v43 = v36; // 0x404061
    goto lab_0x403fdd;
  lab_0x40416a_2:
    // 0x4041a7
    return function_403d50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404c7a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403f51;
    } else {
        uint64_t v49 = v46 + v5; // 0x40484e
        int64_t v50 = v5 + 1; // 0x404931
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404938
        char v52 = v20; // 0x404938
        int64_t v53 = result; // 0x404938
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404901
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404905
            int64_t v56 = v54 + 1; // 0x40490a
            int64_t v57 = v51 + 1; // 0x404931
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4048fc
                v54 = v56;
                if (v47 > v54) {
                    // 0x404901
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404905
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
        goto lab_0x403fdd;
    }
  lab_0x4046d0:
    // 0x4046d0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4046ef
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4046f2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x404c7a
        goto lab_0x404c7a_2;
    }
    goto lab_0x4046ff;
  lab_0x403f1d:
    // 0x403f1d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40416a_2;
    }
    goto lab_0x403f51;
  lab_0x403ef5:;
    bool v60 = v15 == 1; // 0x403f00
    if (v15 == -1) {
        // 0x403f02
        v60 = *(char *)v1 == 0;
    }
    // 0x403f0e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403f51;
    } else {
        goto lab_0x403f1d;
    }
  lab_0x403fdd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403fe2
        *(char *)(v44 + v45) = v40;
    }
    // 0x403fe6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403df8_2;
}
// Address range: 0x404f80 - 0x40511e
int64_t function_404f80(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404f82
    int32_t * v3 = __errno_location(); // 0x404f9c
    int32_t v4 = v2; // 0x404fb1
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g20; // 0x404fa1
    int32_t v6 = *v3; // 0x404fab
    int64_t v7 = v5; // 0x404fc1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if (v4 == 0x7fffffff) {
            // 0x405119
            function_4063f0(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x404fd0
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x404fd7
        int64_t v10; // 0x404f80
        if (g20 == &g21) {
            int64_t v11 = function_406200(0, v9); // 0x4050fa
            int128_t v12 = __asm_movdqa(*(int128_t *)&g21); // 0x4050ff
            *(int64_t *)&g20 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_406200(v5, v9); // 0x404feb
            *(int64_t *)&g20 = v13;
            v10 = v13;
        }
        // 0x404ffa
        v7 = v10;
        int32_t v14 = *(int32_t *)&g23; // 0x404ffa
        int32_t v15 = v8; // 0x405001
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g23 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x405031
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40503b
    int64_t * v18 = (int64_t *)v16; // 0x40503e
    uint64_t v19 = *v18; // 0x40503e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x405041
    int64_t result = *v20; // 0x405041
    int64_t v21; // 0x404f80
    uint64_t v22 = function_403d50(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x405064
    if (v19 > v22) {
        // 0x4050db
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x405077
    *v18 = v23;
    if (result != (int64_t)&g51) {
        // 0x405087
        free((int64_t *)result);
    }
    int64_t result2 = function_4061a0(v23); // 0x4050a1
    *v20 = result2;
    int64_t v24; // 0x404f80
    function_403d50(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x4050db
    *v3 = v6;
    return result2;
}
// Address range: 0x405120 - 0x405154
int64_t function_405120(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405127
    int64_t result = function_4063a0(a1 == 0 ? (int64_t)&g52 : a1, 56); // 0x405146
    return result;
}
// Address range: 0x405160 - 0x40516f
int64_t function_405160(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g52 : a1); // 0x40516c
    return result;
}
// Address range: 0x405170 - 0x40517f
int64_t function_405170(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 : a1; // 0x405178
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g52;
}
// Address range: 0x405180 - 0x4051b3
int64_t function_405180(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 + 8 : a1 + 8; // 0x405199
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40519e
    uint32_t v3 = *v2; // 0x40519e
    uint32_t v4 = (int32_t)a2 % 32; // 0x4051a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4051c0 - 0x4051d3
int64_t function_4051c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g52 + 4 : a1 + 4); // 0x4051cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4051e0 - 0x40520b
int64_t function_4051e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g52 : a1; // 0x4051e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x405205
        abort();
        // UNREACHABLE
    }
    // 0x4051fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g52;
}
// Address range: 0x405210 - 0x405282
int64_t function_405210(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g52 : a5; // 0x405232
    int32_t * v2 = __errno_location(); // 0x40523b
    uint32_t v3 = *(int32_t *)v1; // 0x40525b
    int64_t result = function_403d50(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40526a
    return result;
}
// Address range: 0x405290 - 0x405371
int64_t function_405290(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g52 : a4; // 0x4052b2
    int32_t * v2 = __errno_location(); // 0x4052b8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4052d7
    int32_t * v4 = (int32_t *)v1; // 0x4052da
    int64_t v5 = function_403d50(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4052f5
    int64_t v6 = v5 + 1; // 0x4052fa
    int64_t result = function_4061a0(v6); // 0x40530f
    function_403d50(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405354
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40535d
    return result;
}
// Address range: 0x405380 - 0x40538a
int64_t function_405380(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405380
    return function_405290(a1, a2, 0, a3);
}
// Address range: 0x405390 - 0x405425
int64_t function_405390(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x405390
    int64_t v2 = v1; // 0x405390
    int64_t v3 = v2; // 0x4053a4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x4053c3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g64;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4053c0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g64;
        }
    }
    int64_t v6 = v3; // 0x4053dd
    if (g21 != 0x60c380) {
        // 0x4053df
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g51;
        v6 = &g64;
    }
    int64_t result = v6; // 0x405401
    if (g20 != &g21) {
        // 0x405403
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g64;
    }
    // 0x405416
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x405430 - 0x405441
int64_t function_405430(void) {
    // 0x405430
    int64_t v1; // 0x405430
    return function_404f80(v1, v1, -1, (int64_t *)&g52);
}
// Address range: 0x405450 - 0x40545a
int64_t function_405450(void) {
    // 0x405450
    int64_t v1; // 0x405450
    return function_404f80(v1, v1, v1, (int64_t *)&g52);
}
// Address range: 0x405460 - 0x405476
int64_t function_405460(int64_t a1) {
    // 0x405460
    return function_404f80(0, a1, -1, (int64_t *)&g52);
}
// Address range: 0x405480 - 0x405492
int64_t function_405480(int64_t a1, int64_t a2) {
    // 0x405480
    return function_404f80(0, a1, a2, (int64_t *)&g52);
}
// Address range: 0x4054a0 - 0x405508
int64_t function_4054a0(int32_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4054b0
    return function_404f80((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405510 - 0x405574
int64_t function_405510(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405520
    return function_404f80((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405580 - 0x40558c
int64_t function_405580(int64_t a1, int64_t a2) {
    // 0x405580
    return function_4054a0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405590 - 0x40559f
int64_t function_405590(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405590
    return function_405510(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4055a0 - 0x405610
int64_t function_4055a0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g52); // 0x4055ad
    int128_t v2 = __asm_movdqa(g53); // 0x4055b5
    int128_t v3 = __asm_movdqa(g54); // 0x4055bd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4055d2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4055e8
    uint32_t v6 = *v5; // 0x4055e8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4055ed
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404f80(0, a1, a2, &v4);
}
// Address range: 0x405610 - 0x40561d
int64_t function_405610(int64_t a1, int64_t a2) {
    // 0x405610
    return function_4055a0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405620 - 0x405631
int64_t function_405620(int64_t a1) {
    // 0x405620
    return function_4055a0(a1, -1, 58);
}
// Address range: 0x405640 - 0x40564a
int64_t function_405640(void) {
    // 0x405640
    int64_t v1; // 0x405640
    return function_4055a0(v1, v1, 58);
}
// Address range: 0x405650 - 0x4056be
int64_t function_405650(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40566a
    return function_404f80((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4056c0 - 0x40572c
int64_t function_4056c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g52); // 0x4056c7
    int128_t v2 = __asm_movdqa(g53); // 0x4056cf
    int128_t v3 = __asm_movdqa(g54); // 0x4056d7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4056f9
    if (a2 == 0 || a3 == 0) {
        // 0x405727
        abort();
        // UNREACHABLE
    }
    // 0x40570a
    return function_404f80(a1, a4, a5, &v4);
}
// Address range: 0x405730 - 0x405739
int64_t function_405730(void) {
    // 0x405730
    int64_t v1; // 0x405730
    return function_4056c0(v1, v1, v1, v1, -1);
}
// Address range: 0x405740 - 0x405757
int64_t function_405740(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405740
    return function_4056c0(0, a1, a2, a3, -1);
}
// Address range: 0x405760 - 0x405773
int64_t function_405760(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405760
    return function_4056c0(0, a1, a2, a3, a4);
}
// Address range: 0x405780 - 0x40578a
int64_t function_405780(void) {
    // 0x405780
    int64_t v1; // 0x405780
    return function_404f80(v1, v1, v1, &g19);
}
// Address range: 0x405790 - 0x4057a2
int64_t function_405790(int64_t a1, int64_t a2) {
    // 0x405790
    return function_404f80(0, a1, a2, &g19);
}
// Address range: 0x4057b0 - 0x4057c1
int64_t function_4057b0(void) {
    // 0x4057b0
    int64_t v1; // 0x4057b0
    return function_404f80(v1, v1, -1, &g19);
}
// Address range: 0x4057d0 - 0x4057e6
int64_t function_4057d0(int64_t a1) {
    // 0x4057d0
    return function_404f80(0, a1, -1, &g19);
}
// Address range: 0x4057f0 - 0x4058d9
int64_t function_4057f0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 48); // 0x4057f4
    int64_t v2 = *v1; // 0x4057f4
    int64_t * v3 = (int64_t *)(a1 + 40); // 0x4057fb
    int64_t v4 = *v3; // 0x4057fb
    if (v2 == v4) {
        char * v5 = (char *)(a1 + 104); // 0x4058d0
        *v5 = *v5 | 2;
    }
    int64_t v6 = *(int64_t *)(a1 + 72); // 0x405812
    int64_t v7 = *(int64_t *)(a1 + 56); // 0x40581d
    int64_t v8 = v6 + v2 & -1 - v6; // 0x405821
    int64_t v9 = *(int64_t *)(a1 + 32); // 0x405824
    int64_t v10 = v7 - v9; // 0x405835
    int64_t v11 = v8 - v9 > v10 ? v7 : v8;
    *v1 = v11;
    *v3 = v11;
    int64_t * v12 = (int64_t *)(a1 + 136); // 0x405848
    int64_t v13 = *v12; // 0x405848
    int64_t v14 = v13; // 0x40585d
    int64_t v15 = v10; // 0x40585d
    if (*(int64_t *)(a1 + 144) - v13 < 8) {
        // 0x405898
        v15 = a1 + 112;
        _obstack_newchunk(v15, 8, v13, v9);
        v14 = *v12;
    }
    // 0x40585f
    *(int64_t *)v14 = v4;
    int64_t * v16 = (int64_t *)(a1 + 224); // 0x405862
    int64_t v17 = *v16; // 0x405862
    *v12 = *v12 + 8;
    int64_t v18 = *(int64_t *)(a1 + 232) - v17; // 0x405878
    int64_t result = v18; // 0x40587f
    int64_t v19 = v17; // 0x40587f
    int64_t v20 = v15; // 0x40587f
    if (v18 < 8) {
        // 0x4058b0
        v20 = a1 + 200;
        result = _obstack_newchunk(v20, 8, v17, v9);
        v19 = *v16;
    }
    // 0x405881
    *(int64_t *)v19 = v2 + -1 - v4;
    *v16 = *v16 + 8;
    *(int64_t *)a1 = v20 + 1;
    return result;
}
// Address range: 0x4058e0 - 0x405947
int64_t function_4058e0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    *a1 = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)(v1 + 16) = 0;
    _obstack_begin(v1 + 24, 0, 0, 0x401ba0, 0x401930);
    _obstack_begin(v1 + 112, 0, 0, 0x401ba0, 0x401930);
    return _obstack_begin(v1 + 200, 0, 0, 0x401ba0, 0x401930);
}
// Address range: 0x405950 - 0x405979
int64_t function_405950(int64_t * a1, int64_t a2) {
    int64_t v1 = (int64_t)a1;
    _obstack_free(v1 + 24, 0);
    _obstack_free(v1 + 112, 0);
    return _obstack_free(v1 + 200, 0);
}
// Address range: 0x405980 - 0x405b93
int64_t function_405980(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1 + 24; // 0x405982
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4059a9
    int32_t c = fgetc(stream); // 0x4059a9
    int64_t * v3 = (int64_t *)(v1 + 48);
    int64_t v4; // 0x405980
    int64_t v5; // 0x405980
    if (c != -1) {
        int32_t c2 = c; // 0x4059f3
        int64_t v6; // 0x405980
        int64_t v7 = v6; // 0x405980
        int32_t v8; // 0x405980
        int64_t v9; // 0x405980
        int64_t v10; // 0x405980
        int64_t v11; // 0x405980
        int64_t v12; // 0x405980
        int64_t v13; // 0x4059b3
        int64_t v14; // 0x405998
        int64_t v15; // 0x4059ce
        int64_t v16; // 0x4059d6
        while (true) {
            // 0x4059b3
            v8 = c2;
            v13 = *v3;
            if (*(int64_t *)(v1 + 56) != v13) {
                // 0x405998
                v14 = v13 + 1;
                *v3 = v14;
                *(char *)v13 = (char)v8;
                v9 = v14;
                v11 = v13;
                v10 = v14;
                v12 = v13;
                if (v8 != 0) {
                    // break -> 0x4059a6
                    break;
                }
            } else {
                // 0x4059bd
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
                    // break -> 0x4059a6
                    break;
                }
            }
            // 0x4059e8
            function_4057f0(v1);
            c2 = fgetc(stream);
            v7 = v10;
            v4 = v10;
            v5 = v12;
            if (c2 == -1) {
                // break (via goto) -> 0x405a00
                goto lab_0x405a00;
            }
        }
        int32_t c3 = fgetc(stream); // 0x4059a9
        v4 = v9;
        v5 = v11;
        while (c3 != -1) {
            // 0x4059b3
            c2 = c3;
            v7 = v9;
            while (true) {
                // 0x4059b3
                v8 = c2;
                v13 = *v3;
                if (*(int64_t *)(v1 + 56) != v13) {
                    // 0x405998
                    v14 = v13 + 1;
                    *v3 = v14;
                    *(char *)v13 = (char)v8;
                    v9 = v14;
                    v11 = v13;
                    v10 = v14;
                    v12 = v13;
                    if (v8 != 0) {
                        // break -> 0x4059a6
                        break;
                    }
                } else {
                    // 0x4059bd
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
                        // break -> 0x4059a6
                        break;
                    }
                }
                // 0x4059e8
                function_4057f0(v1);
                c2 = fgetc(stream);
                v7 = v10;
                v4 = v10;
                v5 = v12;
                if (c2 == -1) {
                    // break (via goto) -> 0x405a00
                    goto lab_0x405a00;
                }
            }
            // 0x4059a6
            c3 = fgetc(stream);
            v4 = v9;
            v5 = v11;
        }
    }
  lab_0x405a00:;
    int64_t v17 = *v3; // 0x405a00
    if (v17 != *(int64_t *)(v1 + 40)) {
        int64_t v18 = v17; // 0x405a0e
        if (v17 == *(int64_t *)(v1 + 56)) {
            // 0x405b7c
            _obstack_newchunk(v2, 1, v5, v4);
            v18 = *v3;
        }
        // 0x405a14
        *v3 = v18 + 1;
        *(char *)v18 = 0;
        function_4057f0(v1);
    }
    int64_t * v19 = (int64_t *)(v1 + 136); // 0x405a27
    int64_t v20 = *v19; // 0x405a27
    int64_t * v21 = (int64_t *)(v1 + 144); // 0x405a2e
    int64_t v22 = v20; // 0x405a3c
    if (*v21 - v20 < 8) {
        // 0x405b40
        _obstack_newchunk(v1 + 112, 8, v20, v4);
        v22 = *v19;
    }
    // 0x405a42
    *(int64_t *)v22 = 0;
    int64_t * v23 = (int64_t *)(v1 + 128); // 0x405a50
    int64_t v24 = *v23; // 0x405a50
    int64_t v25 = *v19 + 8; // 0x405a57
    *v19 = v25;
    if (v25 == v24) {
        char * v26 = (char *)(v1 + 192); // 0x405b70
        *v26 = *v26 | 2;
    }
    int64_t v27 = *(int64_t *)(v1 + 160); // 0x405a6b
    int64_t v28 = *(int64_t *)(v1 + 120); // 0x405a79
    int64_t v29 = v27 + v25 & -1 - v27; // 0x405a7d
    int64_t v30 = *v21; // 0x405a80
    int64_t v31 = v29 - v28 > v30 - v28 ? v30 : v29;
    *v19 = v31;
    *(int64_t *)(v1 + 8) = v24;
    int64_t * v32 = (int64_t *)(v1 + 224); // 0x405aa7
    int64_t v33 = *v32; // 0x405aa7
    int64_t * v34 = (int64_t *)(v1 + 216); // 0x405aae
    int64_t v35 = *v34; // 0x405aae
    *v23 = v31;
    if (v33 == v35) {
        char * v36 = (char *)(v1 + 280); // 0x405b60
        *v36 = *v36 | 2;
    }
    int64_t v37 = *(int64_t *)(v1 + 248); // 0x405ac5
    int64_t v38 = *(int64_t *)(v1 + 208); // 0x405ad3
    int64_t v39 = v37 + v33 & -1 - v37; // 0x405ada
    int64_t v40 = *(int64_t *)(v1 + 232); // 0x405add
    int64_t v41 = v39 - v38 > v40 - v38 ? v40 : v39;
    *v32 = v41;
    *v34 = v41;
    *(int64_t *)(v1 + 16) = v35;
    int32_t is_ferror = ferror(stream); // 0x405b14
    return (int64_t)(is_ferror & -256) | (int64_t)(is_ferror == 0);
}
// Address range: 0x405ba0 - 0x405bfe
int64_t function_405ba0(int32_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read(fd, (int64_t *)buf, (int32_t)nbyte); // 0x405bc1
    while (result < 0) {
        // 0x405bce
        if (*__errno_location() != 4) {
            // break -> 0x405bda
            break;
        }
        result = read(fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x405c00 - 0x405fdd
int64_t function_405c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405c98
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405c1c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405c36
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405c7b
    if (a6 < 10) {
        // 0x405c8a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405d82
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405fe0 - 0x406000
int64_t function_405fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fe0
    if (a5 == 0) {
        // 0x405ffb
        return function_405c00(a1, a2, a3, a4, a5, 0, (int64_t)&g64);
    }
    int64_t v1 = 0; // 0x405fe7
    v1++;
    int64_t v2 = v1; // 0x405ff9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405ff0
        v1++;
        v2 = v1;
    }
    // 0x405ffb
    return function_405c00(a1, a2, a3, a4, a5, v2, (int64_t)&g64);
}
// Address range: 0x406000 - 0x406060
int64_t function_406000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406000
    int64_t v3 = &v2; // 0x406000
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406033
    int64_t v6; // 0x40601d
    int64_t * v7; // 0x40603b
    int64_t v8; // 0x40603b
    int64_t v9; // 0x406047
    if (v5 < 48) {
        // 0x406010
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406053
            break;
        }
    } else {
        // 0x40603b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406053
            break;
        }
    }
    int64_t v10 = 10; // 0x406031
    while (v4 != 9) {
        // 0x406029
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406010
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406053
                break;
            }
        } else {
            // 0x40603b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406053
                break;
            }
        }
        // 0x406029
        v10 = 10;
    }
    // 0x406053
    return function_405c00(a1, a2, a3, a4, v3, v10, (int64_t)&g64);
}
// Address range: 0x406060 - 0x40611c
int64_t function_406060(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x406060
    int64_t v1; // bp-168, 0x406060
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406060
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406060
    int64_t v8; // 0x406060
    int64_t v9; // bp-56, 0x406060
    int64_t v10; // 0x4060c5
    int64_t v11; // 0x4060e9
    if ((int32_t)v6 < 48) {
        // 0x4060b0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406100
            break;
        }
    } else {
        // 0x4060e2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406100
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4060da
    int64_t v13 = 10; // 0x4060da
    while (v5 != 9) {
        // 0x4060dc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4060b0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406100
                break;
            }
        } else {
            // 0x4060e2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406100
                break;
            }
        }
        // 0x4060d2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406100
    int64_t v14; // bp-136, 0x406060
    int64_t result = function_405c00(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g64); // 0x40610f
    return result;
}
// Address range: 0x406120 - 0x406194
int64_t function_406120(int64_t a1) {
    // 0x406120
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406183
    return fputs_unlocked(v1, g28);
}
// Address range: 0x4061a0 - 0x4061ba
int64_t function_4061a0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4061a4
    if (size != 0 != (mem == NULL)) {
        // 0x4061b3
        return (int64_t)mem;
    }
    // 0x4061b5
    function_4063f0(size);
    // UNREACHABLE
}
// Address range: 0x4061c0 - 0x4061e1
int64_t function_4061c0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4061c3
    int64_t v2 = v1; // 0x4061c3
    if (v2 < 0) {
        // 0x4061db
        function_4063f0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4061d9
        return function_4061a0(v2);
    }
    // 0x4061db
    function_4063f0(v2);
    // UNREACHABLE
}
// Address range: 0x4061f0 - 0x4061f2
int64_t function_4061f0(void) {
    // 0x4061f0
    int64_t v1; // 0x4061f0
    return function_4061a0(v1);
}
// Address range: 0x406200 - 0x406236
int64_t function_406200(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406228
        free(v1);
        return (int32_t)&g64 ^ (int32_t)&g64;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406211
    if (a2 != 0 != (mem == NULL)) {
        // 0x406220
        return (int64_t)mem;
    }
    // 0x406231
    function_4063f0(a1);
    // UNREACHABLE
}
// Address range: 0x406240 - 0x406261
int64_t function_406240(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406243
    int64_t v2 = v1; // 0x406243
    if (v2 < 0) {
        // 0x40625b
        function_4063f0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406259
        return function_406200(a1, v2);
    }
    // 0x40625b
    function_4063f0(a1);
    // UNREACHABLE
}
// Address range: 0x406270 - 0x4062f6
int64_t function_406270(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4062cb
            function_4063f0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406200(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4062b3
    if (a2 == 0) {
        // 0x4062d8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4062b8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4062cb
        function_4063f0(a1);
        // UNREACHABLE
    }
    // 0x40629a
    *(int64_t *)a2 = v2;
    return function_406200(a1, v2 * a3);
}
// Address range: 0x406300 - 0x406350
int64_t function_406300(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406300
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40634a
            function_4063f0(a1);
            // UNREACHABLE
        }
        // 0x406322
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406200(a1, v1);
    }
    if (a2 == 0) {
        // 0x406335
        *(int64_t *)a2 = 128;
        return function_406200(0, 128);
    }
    // 0x406348
    if (a2 < 0) {
        // 0x40634a
        function_4063f0(a1);
        // UNREACHABLE
    }
    // 0x406322
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406200(a1, v1);
}
// Address range: 0x406350 - 0x406367
int64_t function_406350(int64_t a1, int64_t a2) {
    // 0x406350
    return (int64_t)memset((int64_t *)function_4061a0(a1), 0, (int32_t)a1);
}
// Address range: 0x406370 - 0x40639e
int64_t function_406370(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406377
    if ((int64_t)v1 < 0) {
        // 0x406399
        function_4063f0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406399
        function_4063f0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40638a
    if (mem != NULL) {
        // 0x406394
        return (int64_t)mem;
    }
    // 0x406399
    function_4063f0(nmemb);
    // UNREACHABLE
}
// Address range: 0x4063a0 - 0x4063c8
int64_t function_4063a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4061a0(a2); // 0x4063af
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4063d0 - 0x4063e3
int64_t function_4063d0(int64_t str) {
    // 0x4063d0
    return function_4063a0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4063f0 - 0x406421
int64_t function_4063f0(int64_t a1) {
    // 0x4063f0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406430 - 0x4064ab
int64_t function_406430(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406437
    if (fileno(stream) < 0) {
        // 0x406497
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40644a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40647b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406497
            return fclose(stream);
        }
    }
    // 0x40644c
    if ((int32_t)function_4064b0(a1, v1) == 0) {
        // 0x406497
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406458
    int32_t v3 = *v2; // 0x406460
    int64_t result = fclose(stream); // 0x40646e
    if (v3 != 0) {
        // 0x4064a0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406470
    return result;
}
// Address range: 0x4064b0 - 0x4064f0
int64_t function_4064b0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4064ca
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4064ca
        return fflush(stream);
    }
    // 0x4064d8
    function_4064f0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4064f0 - 0x406547
int64_t function_4064f0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4064f0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4064fa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40652b
    int64_t result = -1; // 0x406534
    if (v1 != -1) {
        // 0x406536
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406542
    return result;
}
// Address range: 0x406550 - 0x40662f
int64_t function_406550(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40655c
    uint32_t v2 = *v1; // 0x40655c
    int64_t v3 = a2 & 0xffffffff; // 0x406561
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406564
    uint64_t v5 = (int64_t)*v4; // 0x406564
    int64_t v6; // 0x4065d2
    if (v3 <= v5) {
      lab_0x4065cc_2:
        // 0x4065cc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x406552
    int64_t v8 = v2; // 0x406550
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4065cc
        goto lab_0x4065cc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406588
    int64_t v17; // 0x406596
    int64_t * v18; // 0x4065b0
    int64_t * v19; // 0x4065b3
    int64_t v20; // 0x4065be
    int64_t v21; // 0x406596
    while ((v16 & 0xffffffff) > v10) {
        // 0x406593
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4065b0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4065c7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4065cc
            goto lab_0x4065cc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4065cc
            goto lab_0x4065cc_2;
        }
        // 0x406582
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40660b
    int64_t * v23 = (int64_t *)v22; // 0x406610
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x406613
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x406610
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x406627
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40657d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4065cc
            goto lab_0x4065cc_2;
        }
        // 0x406582
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406593
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4065b0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4065c7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4065cc
                goto lab_0x4065cc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4065cc
                goto lab_0x4065cc_2;
            }
            // 0x406582
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4065f0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x406610
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x406627
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4065cc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x406630 - 0x406c4c
int64_t function_406630(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40664f
    int64_t v2 = *v1; // 0x40664f
    char * str2 = (char *)v2; // 0x40665c
    char c = *str2; // 0x40665c
    int64_t v3 = v2; // 0x406688
    int64_t v4 = 0; // 0x406630
    int32_t v5; // 0x406630
    int64_t v6; // 0x406630
    int64_t v7; // 0x406630
    int64_t v8; // 0x406630
    int64_t v9; // 0x406630
    int64_t v10; // 0x406630
    int64_t v11; // 0x406630
    int64_t v12; // 0x406630
    int64_t v13; // 0x406630
    int64_t str3; // 0x406630
    int64_t v14; // 0x406630
    int64_t v15; // 0x406630
    int64_t v16; // 0x406630
    int64_t v17; // 0x406630
    int32_t v18; // 0x406630
    int32_t v19; // 0x406630
    int32_t v20; // 0x406630
    int32_t v21; // 0x406630
    int32_t v22; // 0x406630
    int32_t v23; // 0x406630
    int32_t v24; // 0x406630
    int32_t v25; // 0x406630
    int32_t v26; // 0x406630
    int32_t v27; // 0x406630
    int32_t v28; // 0x406630
    int32_t v29; // 0x406630
    int64_t nmemb; // 0x406630
    int64_t v30; // 0x406630
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40668c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406688
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406698
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40669e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406668
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4066cc
                int64_t v34; // 0x406630
                int64_t v35; // 0x406630
                if (strncmp(str, str2, n) == 0) {
                    // 0x4066d5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406850;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4066e6
                int64_t v37 = *(int64_t *)v36; // 0x4066ea
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4066c0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4066d5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406850;
                        }
                    }
                    // 0x4066e6
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
                  lab_0x406736:
                    // 0x406736
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
                        goto lab_0x406790;
                    } else {
                        if (v11 == 0) {
                            // 0x406900
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406790;
                        } else {
                            if (v39 == 0) {
                                // 0x4068b0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40675a;
                                } else {
                                    // 0x4068bc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40675a;
                                    } else {
                                        // 0x4068ca
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40675a;
                                        } else {
                                            goto lab_0x406790;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40675a;
                            }
                        }
                    }
                }
              lab_0x4067a1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406976
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406b22
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x406b42
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x406b8f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x406ba9
                            int64_t v45; // 0x406bab
                            if (*(char *)v42 != 0) {
                                // 0x406bab
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406ba3
                            while (v17 + nmemb != v42) {
                                // 0x406ba5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x406bab
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x406b98
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406bd0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x406984
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x406adf
                        free((int64_t *)v17);
                    }
                    // 0x4069d9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4069f0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40689e
                    return 63;
                }
                // 0x4067c0
                v5 = v39;
                if (v13 != 0) {
                    // 0x406844
                    v35 = v13;
                    v34 = v25;
                  lab_0x406850:;
                    int32_t * v49 = (int32_t *)a7; // 0x406860
                    uint32_t v50 = *v49; // 0x406860
                    int64_t v51 = v50; // 0x406860
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40686a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406873
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x406a9f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x406a4a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40689e
                            return 63;
                        }
                        // 0x4068e8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x406bff
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x406afd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406b10
                                // 0x40689e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x406a0e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406a22
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40688b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40688e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406892
                    int64_t result = v59; // 0x406898
                    if (v58 != 0) {
                        // 0x40689a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40689e
                    return result;
                }
            } else {
                // 0x40669e
                v5 = v32;
            }
            // break -> 0x4067c5
            break;
        }
    }
    // 0x4067c5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4067dd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4067e7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40689e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406929
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406816
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406826
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406790:
    // 0x406790
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406790
    int64_t v63 = *(int64_t *)v62; // 0x406794
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4067a1
        goto lab_0x4067a1;
    }
    goto lab_0x406736;
  lab_0x40675a:
    // 0x40675a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x406630
    int32_t v65; // 0x406630
    int32_t v66; // 0x406630
    if (v27 != 0) {
        goto lab_0x406790;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406910
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406790;
            } else {
                goto lab_0x406781;
            }
        } else {
            // 0x406775
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x406a6c
                int64_t v67 = (int64_t)mem; // 0x406a6c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406790;
                } else {
                    // 0x406a7f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406781;
                }
            } else {
                goto lab_0x406781;
            }
        }
    }
  lab_0x406781:
    // 0x406781
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406790;
}
// Address range: 0x406c50 - 0x407216
int64_t function_406c50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406c71
    if (v3 < 1) {
        // 0x406e2e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x406c6d
    int32_t v5 = *(int32_t *)a7; // 0x406c79
    uint64_t v6 = a1 & 0xffffffff; // 0x406c7b
    int64_t v7 = v2; // 0x406c80
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406c83
    *v8 = 0;
    int64_t v9; // 0x406c50
    int64_t v10; // 0x406c50
    int64_t v11; // 0x406c50
    int64_t v12; // 0x406c50
    int64_t str; // 0x406c50
    int64_t v13; // 0x406c50
    int64_t v14; // 0x406c50
    int64_t v15; // 0x406c50
    int64_t v16; // 0x406c50
    int64_t v17; // 0x406c50
    int32_t v18; // 0x406c50
    char v19; // 0x406c50
    if (v5 == 0) {
        // 0x406e68
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x406c9a;
    } else {
        // 0x406c93
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406ce0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406ce3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406da8;
            } else {
                int64_t v22 = v7 + 1; // 0x406cf6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406d06
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x406dbc;
                } else {
                    goto lab_0x406d18;
                }
            }
        } else {
            goto lab_0x406c9a;
        }
    }
  lab_0x406c9a:
    // 0x406c9a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406ca0
    *v24 = 0;
    int64_t v25; // 0x406c50
    int64_t v26; // 0x406c50
    int64_t v27; // 0x406c50
    switch (*(char *)&v2) {
        case 45: {
            // 0x406d90
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406d9d;
        }
        case 43: {
            // 0x4070a0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406d9d;
        }
        default: {
            // 0x406cbc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40701f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407138
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x406d9d;
                } else {
                    // 0x40702d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x406cca;
                }
            } else {
                goto lab_0x406cca;
            }
        }
    }
  lab_0x406da8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x406daf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406d18;
    } else {
        goto lab_0x406dbc;
    }
  lab_0x406cca:
    // 0x406cca
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x406d9d;
  lab_0x406d9d:
    // 0x406d9d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406da8;
  lab_0x406d18:;
    uint32_t v30 = *(int32_t *)a7; // 0x406d18
    int64_t v31 = v30; // 0x406d18
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x406d1a
    if ((int64_t)*v32 > v31) {
        // 0x406d1f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406d22
    if (*v33 > v30) {
        // 0x406d27
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x406d2a
    int64_t v35 = v31; // 0x406d2e
    int64_t v36 = v15; // 0x406d2e
    int64_t v37; // 0x406c50
    int64_t v38; // 0x406c50
    int64_t v39; // 0x406c50
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406e98
        int64_t v41 = v40; // 0x406e98
        v2 = v41;
        int64_t v42; // 0x406c50
        if (*v33 == v40) {
            // 0x407080
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407088
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406ea4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406ea8
                function_406550(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406eb8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406ec1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x406eca
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406ee1
            int64_t v47 = v45 & 0xffffffff; // 0x406ee5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x406eee
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406ef4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406ef6;
                }
            }
            int64_t v48 = v47 + 1; // 0x406ed0
            int64_t v49 = v48 & 0xffffffff; // 0x406ed0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406ee1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x406eee
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406ef4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406ef6;
                    }
                }
                // 0x406ed0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x407098
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406ef6;
    } else {
        goto lab_0x406d34;
    }
  lab_0x406dbc:
    // 0x406dbc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x406dbf
    int64_t v51 = v12; // 0x406dbf
    int64_t v52 = v14; // 0x406dbf
    if (*(char *)v10 == 0) {
        goto lab_0x406d18;
    } else {
        goto lab_0x406dc5;
    }
  lab_0x406d34:;
    int32_t v53 = v35; // 0x406d34
    int64_t v54; // 0x406c50
    int64_t v55; // 0x406c50
    int64_t v56; // 0x406c50
    int64_t v57; // 0x406c50
    int64_t v58; // 0x406c50
    int64_t v59; // 0x406c50
    char * v60; // 0x406c50
    int64_t v61; // 0x406c50
    int64_t v62; // 0x406d49
    int64_t v63; // 0x406c50
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406e83
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406e86;
    } else {
        // 0x406d3c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406c50
        int64_t v66 = v65 ? -1 : 1; // 0x406d50
        int64_t v67 = (int64_t)"--"; // 0x406c50
        int64_t v68 = v62; // 0x406c50
        int64_t v69 = 3; // 0x406d50
        unsigned char v70 = *(char *)v68; // 0x406d50
        char v71 = *(char *)v67; // 0x406d50
        char v72 = v71; // 0x406d50
        bool v73 = false; // 0x406d50
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
            // 0x406e40
            if (*(char *)v62 == 45) {
                // 0x406f00
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406f00
                if (c == 0) {
                    goto lab_0x406e4a;
                } else {
                    // 0x406f0d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406f90;
                    } else {
                        if (c == 45) {
                            // 0x407173
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406fe5;
                        } else {
                            // 0x406f1e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406f90;
                            } else {
                                // 0x406f23
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406f44;
                                } else {
                                    // 0x406f2a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406f90;
                                    } else {
                                        goto lab_0x406f44;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x406e4a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406d60
            v2 = v75;
            int32_t v76 = *v32; // 0x406d63
            int64_t v77 = v35 + 1; // 0x406d66
            int32_t v78 = v77; // 0x406d69
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4070d0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406d77
                    function_406550(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406d85
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406e86;
        }
    }
  lab_0x406dc5:;
    // 0x406dc5
    int64_t v79; // bp-104, 0x406c50
    int64_t v80 = &v79; // 0x406c5a
    int64_t v81 = v50 + 1; // 0x406dc5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x406dcc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406dd1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406dd5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406dd9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406de1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406de6
    int32_t c2 = v84; // 0x406de6
    char * found_char_pos = strchr(str2, c2); // 0x406de6
    int64_t v87 = *v82; // 0x406deb
    v2 = v87;
    int64_t v88 = *v85; // 0x406df5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406e00
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4070f0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4070bd
        *(int32_t *)(v1 + 8) = c2;
        // 0x406e2e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406de6
    char v91 = *(char *)(v90 + 1); // 0x406e1b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406dd5
        if (v91 != 58) {
            // 0x406e2e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407044
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407148
                *v8 = 0;
            } else {
                // 0x40712c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40706e
            *v83 = 0;
            // 0x406e2e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40704e
        if (v93 != 0) {
            // 0x4070e0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40706e
            *v83 = 0;
            // 0x406e2e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407061
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40706e
            *v83 = 0;
            // 0x406e2e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4071aa
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40715a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407161
        // 0x40706e
        *v83 = 0;
        // 0x406e2e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406fb9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x406fbb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4071e0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x407191
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x407198
            // 0x406e2e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406fc6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x406fca
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406fe5;
  lab_0x406ef6:
    // 0x406ef6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406d34;
  lab_0x406fe5:;
    int64_t v99 = function_406630(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x407003
    // 0x406e2e
    return v99 & 0xffffffff;
  lab_0x406e86:;
    int32_t v100 = v55; // 0x406e86
    if (v100 != (int32_t)v59) {
        // 0x406e8a
        *(int32_t *)a7 = v100;
    }
    // 0x406e2e
    return 0xffffffff;
  lab_0x406e4a:
    // 0x406e4a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406e51
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x406e2e
    return v99 & 0xffffffff;
  lab_0x406f90:
    // 0x406f90
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406dc5;
  lab_0x406f44:
    // 0x406f44
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_406630(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x406f6a
    if ((int32_t)v101 != -1) {
        // 0x406e2e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x406f7f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406f90;
}
// Address range: 0x407220 - 0x407276
int64_t function_407220(int64_t a1) {
    // 0x407220
    *(int32_t *)&g55 = g26;
    *(int32_t *)&g56 = g25;
    int64_t v1; // 0x407220
    int64_t result = function_406c50(v1, v1, v1, v1, v1, v1, &g55, a1 & 0xffffffff); // 0x407246
    g26 = *(int32_t *)&g55;
    g60 = (char *)g58;
    *(int32_t *)&g24 = g57;
    return result;
}
// Address range: 0x407280 - 0x407298
int64_t function_407280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407280
    return function_407220(1);
}
// Address range: 0x4072a0 - 0x4072b3
int64_t function_4072a0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x4072a0
    return function_407220(0);
}
// Address range: 0x4072c0 - 0x4072d5
int64_t function_4072c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4072c0
    return function_406c50(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4072e0 - 0x4072f6
int64_t function_4072e0(void) {
    // 0x4072e0
    return function_407220(0);
}
// Address range: 0x407300 - 0x407318
int64_t function_407300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407300
    return function_406c50(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407320 - 0x40739a
int64_t function_407320(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40732b
    int64_t v2 = (int64_t)&g10; // 0x40732b
    int32_t * pwc; // 0x407320
    int64_t v3; // 0x407320
    int64_t n; // 0x407320
    if (a2 == 0) {
        goto lab_0x407372;
    } else {
        // 0x40732d
        if (a3 == 0) {
            // 0x407358
            return -2;
        }
        // 0x407339
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407372;
        } else {
            goto lab_0x407344;
        }
    }
  lab_0x407372:
    // 0x407372
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407320
    pwc = (int32_t *)&v4;
    goto lab_0x407344;
  lab_0x407344:;
    char * wstr = (char *)v3; // 0x40734a
    int64_t ps; // 0x407320
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40734a
    int64_t result = v5; // 0x40734a
    if (v5 < 0xfffffffe) {
        // 0x407358
        return result;
    }
    int64_t result2 = result; // 0x407389
    if ((char)function_407840(0, v3) == 0) {
        // 0x40738b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407358
    return result2;
}
// Address range: 0x4073a0 - 0x4074a4
int64_t function_4073a0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x4073a0
    if (a3 == 0) {
        // 0x4073d9
        return 0;
    }
    int64_t v1 = result; // 0x4073ac
    int64_t v2 = a3; // 0x4073ac
    int64_t result2; // 0x4073a0
    if (result % 8 != 0) {
        char v3 = a2; // 0x4073ae
        int64_t v4 = result; // 0x4073b1
        if ((char)result == v3) {
            // 0x4073d9
            return result;
        }
        int64_t v5 = a3; // 0x4073b1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x4073c0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x4073e0;
            }
            // 0x4073c6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x4073d9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x4073d9
        return result2;
    }
  lab_0x4073e0:;
    int64_t result3 = v1; // 0x40740d
    int64_t v6 = v2; // 0x40740d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x4073ef
        int64_t v8 = 0x10000 * v7 | v7; // 0x4073fc
        int64_t v9 = 0x100000000 * v8 | v8; // 0x407406
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x407426
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x407455
            int64_t v12 = v1 + 8; // 0x407459
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x407443
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40746c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x407463
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x4073d9
                return 0;
            }
        }
    }
  lab_0x40746c:;
    char v14 = a2; // 0x40746c
    if (*(char *)result3 == v14) {
        // 0x4073d9
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x407480
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x4073d9
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x4073d9
    return result2;
}
// Address range: 0x4074b0 - 0x4074eb
int64_t function_4074b0(int64_t a1) {
    // 0x4074b0
    __fprintf_chk(g31, 1, "%s\n", dcgettext(NULL, "memory exhausted", 5));
    exit(g18);
    // UNREACHABLE
}
// Address range: 0x4074f0 - 0x407505
int64_t function_4074f0(int64_t a1, int64_t a2) {
    // 0x4074f0
    return *(int64_t *)(a1 + 56);
}
// Address range: 0x407510 - 0x407525
int64_t function_407510(int64_t a1, int64_t a2) {
    // 0x407510
    return *(int64_t *)(a1 + 64);
}
// Address range: 0x407530 - 0x4075b3
int64_t function_407530(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 == 0 ? 15 : a3 - 1;
    *(int64_t *)(a1 + 48) = v1;
    int64_t v2 = a2 == 0 ? 4064 : a2; // 0x407552
    *(int64_t *)a1 = v2;
    int64_t v3 = function_4074f0(a1, v2); // 0x407559
    *(int64_t *)(a1 + 8) = v3;
    if (v3 == 0) {
        // 0x4075ad
        function_4074b0(a1);
        // UNREACHABLE
    }
    int64_t v4 = v1 + 16 + v3 & (a3 == 0 ? -16 : -a3); // 0x40756f
    *(int64_t *)(a1 + 16) = v4;
    int64_t v5 = v3 + a1; // 0x407579
    *(int64_t *)(a1 + 24) = v4;
    *(int64_t *)v3 = v5;
    *(int64_t *)(a1 + 32) = v5;
    *(int64_t *)(v3 + 8) = 0;
    char * v6 = (char *)(a1 + 80); // 0x407594
    *v6 = *v6 & -7;
    return 1;
}
// Address range: 0x4075c0 - 0x4075d1
int64_t _obstack_begin(int64_t a1, int32_t a2, int32_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 80); // 0x4075c0
    *v1 = *v1 & -2;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    return function_407530(a1, (int64_t)a2, (int64_t)a3);
}
// Address range: 0x4075e0 - 0x4075f5
int64_t _obstack_begin_1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * v1 = (char *)(a1 + 80); // 0x4075e0
    *v1 = *v1 | 1;
    *(int64_t *)(a1 + 56) = a4;
    *(int64_t *)(a1 + 64) = a5;
    *(int64_t *)(a1 + 72) = a6;
    return function_407530(a1, a2, a3);
}
// Address range: 0x407600 - 0x4076fb
int64_t _obstack_newchunk(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    int64_t * v1 = (int64_t *)(a1 + 24); // 0x40760a
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x40760e
    uint64_t v3 = *v1 - *v2; // 0x40760e
    uint64_t v4 = v3 + a2; // 0x407616
    if (v4 < a2) {
        // 0x4076f5
        function_4074b0(a1);
        // UNREACHABLE
    }
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x40761f
    uint64_t v6 = v4 + *v5; // 0x40761f
    if (v6 < v4) {
        // 0x4076f5
        function_4074b0(a1);
        // UNREACHABLE
    }
    int64_t * v7 = (int64_t *)(a1 + 8); // 0x407612
    int64_t v8 = *v7; // 0x407612
    uint64_t v9 = v3 / 8 + 100 + v6; // 0x40762d
    uint64_t v10 = v6 <= a1 ? a1 : v6; // 0x407632
    int64_t v11 = v10 >= v9 ? v10 : v9; // 0x407639
    int64_t v12 = function_4074f0(a1, v11); // 0x407658
    if (v12 == 0) {
        // 0x4076f5
        function_4074b0(a1);
        // UNREACHABLE
    }
    int64_t v13 = v12 + v11; // 0x407669
    *v7 = v12;
    int64_t * v14 = (int64_t *)(v12 + 8); // 0x407675
    *v14 = v8;
    *(int64_t *)(a1 + 32) = v13;
    *(int64_t *)v12 = v13;
    int64_t v15 = *v5; // 0x407681
    int64_t v16 = v12 + 16 + v15 & -1 - v15; // 0x407693
    int64_t * dest_mem = memcpy((int64_t *)v16, (int64_t *)*v2, (int32_t)v3); // 0x407699
    char * v17 = (char *)(a1 + 80); // 0x40769e
    int64_t result = (int64_t)dest_mem; // 0x4076a4
    if ((*v17 & 2) == 0) {
        int64_t v18 = *v5; // 0x4076a6
        int64_t v19 = v8 + 16 + v18 & -1 - v18; // 0x4076b3
        result = v19;
        if (*v2 == v19) {
            // 0x4076e0
            *v14 = *(int64_t *)(v8 + 8);
            result = function_407510(a1, v8);
        }
    }
    // 0x4076bd
    *v2 = v16;
    *v1 = v16 + v3;
    *v17 = *v17 & -3;
    return result;
}
// Address range: 0x407700 - 0x407737
int64_t _obstack_allocated_p(int64_t a1, uint64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x407700
    if (v1 == 0) {
        // 0x407723
        return 0;
    }
    if (v1 < a2) {
        // 0x407715
        if (*(int64_t *)v1 >= a2) {
            // break -> 0x407723
            break;
        }
    }
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x40771a
    int64_t result = 0; // 0x407721
    while (v2 != 0) {
        uint64_t v3 = v2;
        if (v3 < a2) {
            // 0x407715
            result = 1;
            if (*(int64_t *)v3 >= a2) {
                // break -> 0x407723
                break;
            }
        }
        // 0x40771a
        v2 = *(int64_t *)(v3 + 8);
        result = 0;
    }
    // 0x407723
    return result;
}
// Address range: 0x407740 - 0x4077a5
int64_t _obstack_free(int64_t a1, int32_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x407747
    int64_t v2 = *v1; // 0x407747
    int64_t result2; // 0x407740
    if (v2 != 0) {
        uint64_t v3 = (int64_t)a2;
        char * v4 = (char *)(a1 + 80);
        uint64_t result; // 0x40775d
        if (v2 < v3) {
            // 0x40775d
            result = *(int64_t *)v2;
            if (result >= v3) {
                // 0x407790
                *(int64_t *)(a1 + 24) = v3;
                *(int64_t *)(a1 + 16) = v3;
                *(int64_t *)(a1 + 32) = result;
                *v1 = v2;
                return result;
            }
        }
        int64_t v5 = *(int64_t *)(v2 + 8); // 0x407765
        int64_t v6 = function_407510(a1, v2); // 0x40776c
        *v4 = *v4 | 2;
        result2 = v6;
        while (v5 != 0) {
            uint64_t v7 = v5;
            if (v7 < v3) {
                // 0x40775d
                result = *(int64_t *)v7;
                if (result >= v3) {
                    // 0x407790
                    *(int64_t *)(a1 + 24) = v3;
                    *(int64_t *)(a1 + 16) = v3;
                    *(int64_t *)(a1 + 32) = result;
                    *v1 = v7;
                    return result;
                }
            }
            // 0x407765
            v5 = *(int64_t *)(v7 + 8);
            v6 = function_407510(a1, v7);
            *v4 = *v4 | 2;
            result2 = v6;
        }
    }
    if (a2 == 0) {
        // 0x407786
        return result2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4077b0 - 0x4077d9
int64_t _obstack_memory_used(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x4077b0
    int64_t result = 0; // 0x4077b9
    if (v1 == 0) {
        // 0x4077d2
        return 0;
    }
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x4077c6
    result += *(int64_t *)v2 - v2;
    while (v3 != 0) {
        // 0x4077c0
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
        result += *(int64_t *)v2 - v2;
    }
    // 0x4077d2
    return result;
}
// Address range: 0x4077e0 - 0x40783d
int64_t function_4077e0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4077e7
    int64_t v2; // 0x4077e0
    int64_t result = function_406430(a1, v2); // 0x4077f8
    if ((v2 & 32) != 0) {
        // 0x407820
        if ((int32_t)result == 0) {
            // 0x407824
            *__errno_location() = 0;
        }
        // 0x40781a
        return 0xffffffff;
    }
    // 0x407801
    if ((int32_t)result == 0) {
        // 0x40781a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407808
    if (v1 == 0) {
        // 0x40780a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40781a
    return result2;
}
// Address range: 0x407840 - 0x40789e
int64_t function_407840(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x407846
    if (locale == NULL) {
        // 0x407873
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x407846
    bool v2; // 0x407840
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x407840
    int64_t v5 = v1; // 0x407840
    int64_t v6 = 2; // 0x407865
    unsigned char v7 = *(char *)v5; // 0x407865
    char v8 = *(char *)v4; // 0x407865
    char v9 = v8; // 0x407865
    bool v10 = false; // 0x407865
    while (v7 == v8) {
        // 0x407858
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407871
    int64_t v13 = v1; // 0x407871
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407873
        return 0;
    }
    int64_t v14 = 6; // 0x407871
    unsigned char v15 = *(char *)v13; // 0x40788d
    char v16 = *(char *)v12; // 0x40788d
    char v17 = v16; // 0x40788d
    bool v18 = false; // 0x40788d
    while (v15 == v16) {
        // 0x407880
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
// Address range: 0x4078a0 - 0x407e02
int64_t function_4078a0(void) {
    char * v1 = nl_langinfo(14); // 0x4078b6
    char * v2 = g59; // 0x4078bb
    char * v3; // 0x4078a0
    int64_t v4; // 0x4078a0
    int64_t v5; // 0x4078a0
    int64_t v6; // 0x4078a0
    int64_t v7; // 0x4078a0
    int32_t size; // 0x4078a0
    int32_t size2; // 0x4078a0
    int32_t len; // 0x407972
    int64_t v8; // 0x407972
    char * env_val; // 0x40795d
    if (v2 == NULL) {
        // 0x407958
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4079c5;
        } else {
            // 0x40796a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4079c5;
            } else {
                // 0x40796f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40795d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407df5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4079c5;
                    } else {
                        // 0x407d69
                        size2 = len + 14;
                        goto lab_0x40798b;
                    }
                } else {
                    goto lab_0x40798b;
                }
            }
        }
    } else {
        // 0x4078a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4078da;
    }
  lab_0x407c0c:;
    // 0x407c0c
    struct _IO_FILE * stream; // 0x407a4b
    int32_t v10 = __uflow(stream); // 0x407c0f
    int64_t v11; // 0x4078a0
    int64_t v12 = v11; // 0x407c19
    int64_t v13; // 0x4078a0
    int64_t v14 = v13; // 0x407c19
    int32_t v15 = v10; // 0x407c19
    int64_t v16; // 0x4078a0
    int64_t v17 = v16; // 0x407c19
    int64_t v18 = v11; // 0x407c19
    int64_t v19 = v13; // 0x407c19
    int64_t v20 = v16; // 0x407c19
    if (v10 == -1) {
        // break -> 0x407c1f
        goto lab_0x407c1f;
    }
    goto lab_0x407a99;
  lab_0x407a8e:;
    // 0x407a8e
    int64_t v90; // 0x4078a0
    int64_t * v32; // 0x407a80
    *v32 = v90 + 1;
    int64_t v89; // 0x4078a0
    v12 = v89;
    int64_t v91; // 0x4078a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4078a0
    v17 = v92;
    goto lab_0x407a99;
  lab_0x407a99:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4078a0
    int32_t v25; // bp-120, 0x4078a0
    int32_t v26; // bp-184, 0x4078a0
    int64_t v27; // 0x407a4b
    int64_t v28; // 0x407a68
    int64_t v29; // 0x407a6d
    int64_t * v30; // 0x407a84
    switch (c) {
        case 32: {
            goto lab_0x407a80;
        }
        case 10: {
            goto lab_0x407a80;
        }
        case 9: {
            goto lab_0x407a80;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407c71
            int32_t v33; // 0x4078a0
            char v34; // 0x4078a0
            int32_t v35; // 0x407c7e
            if (v31 < *v30) {
                // 0x407c50
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x407c7b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407c71
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407c50
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x407c7b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407c60
                v36 = v33;
            }
            // 0x407d4f
            if (v36 == -1) {
                // break -> 0x407c1f
                break;
            }
            goto lab_0x407a80;
        }
        default: {
            // 0x407aaf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x407c1f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407ad8
            int64_t v39 = v37 + 4; // 0x407ada
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407ae6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407ae8
            while (v41 == 0) {
                // 0x407ad8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407b06
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407b12
            int64_t v45 = v43 + 4; // 0x407b14
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407b20
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407b22
            while (v47 == 0) {
                // 0x407b12
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x407b0f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407b38
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407b48
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x407b4c
            int64_t v52 = v51 + v48; // 0x407b55
            int64_t * mem; // 0x4078a0
            int64_t v53; // 0x4078a0
            int64_t v54; // 0x4078a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x407c8b
                int64_t v56 = v55 + 3; // 0x407c97
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407b71
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407b80
            if (mem == NULL) {
                // 0x407dac
                free((int64_t *)v21);
                function_406430(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x407a24;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407b98
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407ba2
            uint32_t v62 = (int32_t)v59; // 0x407ba5
            int64_t v63; // 0x4078a0
            if (v62 >= 8) {
                // 0x407cb4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x407cce
                int64_t v66 = v61 - v65; // 0x407cd2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x407cdd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x407cee
                    int64_t v70 = v69 & 0xffffffff; // 0x407cee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x407ceb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x407d7f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407bb7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x407bbb
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
            int64_t v73 = v51 + 1; // 0x407bcb
            int64_t v74 = v60 - 1; // 0x407bcf
            uint32_t v75 = (int32_t)v73; // 0x407bd4
            int64_t v76; // 0x4078a0
            if (v75 >= 8) {
                // 0x407d02
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x407d0c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x407d1c
                int64_t v80 = v74 - v79; // 0x407d20
                uint32_t v81 = (int32_t)(v80 + v73); // 0x407d2b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x407d3b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407d39
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407d96
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x407d9e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407be6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x407bea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407de3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x407bfe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x407a8e;
            } else {
                goto lab_0x407c0c;
            }
        }
    }
  lab_0x407a80:;
    int64_t v93 = v23; // 0x4078a0
    int64_t v94 = v22; // 0x4078a0
    int64_t v95 = v21; // 0x4078a0
    goto lab_0x407a80_2;
  lab_0x4079c5:;
    int64_t * mem3 = malloc(size); // 0x4079c5
    int64_t v97 = (int64_t)&g10; // 0x4079d0
    int64_t v98; // 0x4078a0
    int64_t path; // 0x4078a0
    if (mem3 == NULL) {
        goto lab_0x4079a2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4079c5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4079e6;
    }
  lab_0x4078da:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x4078cd
    char v100 = *v3; // 0x4078da
    int64_t v101; // 0x4078a0
    if (v100 == 0) {
        // 0x407934
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4078a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4078a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x407920
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x407927;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4078f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4078fd
        char v107 = *(char *)v106; // 0x407902
        v102 = v107;
        if (v107 == 0) {
            // 0x407934
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40790b
    v104 = v103 + 1;
  lab_0x407927:
    // 0x407934
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4079a2:;
    char * v108 = (char *)v97;
    g59 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4078da;
  lab_0x4079e6:;
    int64_t v109 = v98 + path; // 0x4079e6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407a12
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x407a41
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407d72
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x407a65
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407a80_2:;
                uint64_t v96 = *v32; // 0x407a80
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x407c0c;
                } else {
                    goto lab_0x407a8e;
                }
            }
          lab_0x407c1f:
            // 0x407c1f
            function_406430(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x407c3e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407a24;
  lab_0x40798b:;
    int64_t * mem4 = malloc(size2); // 0x40798b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x407a31
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4079e6;
    } else {
        goto lab_0x4079a2;
    }
  lab_0x407a24:
    // 0x407a24
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4079a2;
}
// Address range: 0x407e10 - 0x407e6d
int64_t function_407e10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407e10
    return function_4018d0();
}
// Address range: 0x407e70 - 0x407e71
int64_t function_407e70(void) {
    // 0x407e70
    int64_t result; // 0x407e70
    return result;
}
// Address range: 0x407e80 - 0x407e98
int64_t function_407e80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407e80
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x407e98 - 0x407eb8
int64_t function_407e98(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x407ea2
    while (*(int64_t *)v1 != -1) {
        // 0x407ea3
        v1 -= 8;
    }
    // 0x407eb4
    return result;
}
