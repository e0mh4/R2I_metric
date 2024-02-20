#include "decompile_retdec.h"
// Address range: 0x401a70 - 0x401a75
int64_t function_401a70(void) {
    // 0x401a70
    abort();
    // UNREACHABLE
}
// Address range: 0x401a75 - 0x401a7a
int64_t function_401a75(void) {
    // 0x401a75
    abort();
    // UNREACHABLE
}
// Address range: 0x401a7a - 0x401a7f
int64_t function_401a7a(void) {
    // 0x401a7a
    abort();
    // UNREACHABLE
}
// Address range: 0x401a7f - 0x401a84
int64_t function_401a7f(void) {
    // 0x401a7f
    abort();
    // UNREACHABLE
}
// Address range: 0x401a84 - 0x401a89
int64_t function_401a84(void) {
    // 0x401a84
    abort();
    // UNREACHABLE
}
// Address range: 0x401a89 - 0x401a8e
int64_t function_401a89(void) {
    // 0x401a89
    abort();
    // UNREACHABLE
}
// Address range: 0x401a8e - 0x401a93
int64_t function_401a8e(void) {
    // 0x401a8e
    abort();
    // UNREACHABLE
}
// Address range: 0x401a93 - 0x401a98
int64_t function_401a93(void) {
    // 0x401a93
    abort();
    // UNREACHABLE
}
// Address range: 0x401aa0 - 0x402596
int64_t function_401aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401aaa
    int64_t v2; // bp-104, 0x401aa0
    int64_t v3 = &v2; // 0x401abe
    function_404a50(a2);
    setlocale(LC_ALL, (char *)&g18);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40bd50(0x404940, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g33 = 0;
    bool v4; // 0x401aa0
    int64_t v5 = v4 ? -1 : 1;
    int32_t v6 = 1; // 0x401b22
    int64_t v7 = 0; // 0x401b22
    char v8 = 0; // 0x401b22
    char v9 = 0; // 0x401b22
    int64_t v10 = 0; // 0x401b22
    int64_t v11 = 0; // 0x401b22
    int64_t v12 = 0; // 0x401b22
    int64_t v13; // 0x401aa0
    int64_t v14; // 0x401aa0
    int64_t v15; // 0x401aa0
    int64_t v16; // 0x401aa0
    int64_t v17; // 0x401aa0
    int32_t v18; // 0x401aa0
    char v19; // 0x401aa0
    char v20; // 0x401aa0
    char v21; // 0x401aa0
    char v22; // 0x401aa0
    int64_t v23; // 0x401aa0
    int64_t v24; // 0x401aa0
    while (true) {
        // 0x401b27
        v17 = v10;
        v18 = v6;
        int32_t v25 = a1 - v11; // 0x401b3e
        v23 = v7;
        v21 = v8;
        v19 = v9;
        v13 = v12;
        v15 = 1;
        uint32_t v26; // 0x401aa0
        while (true) {
          lab_0x401b27:
            // 0x401b27
            v16 = v15;
            v12 = v13;
            v9 = v19;
            v8 = v21;
            v7 = v23;
            int64_t v27 = function_4089e0(v25, 8 * v17 + a2, "-agF:", &g7, 0, a6); // 0x401b3e
            v26 = (int32_t)v27;
            switch (v26) {
                case -1: {
                    goto lab_0x401c9d;
                }
                case 70: {
                    if (v7 != 0) {
                        goto lab_0x402407;
                    }
                    // 0x401c8c
                    v24 = g72;
                    v22 = v8;
                    v20 = v9;
                    v14 = v12;
                    goto lab_0x401b74;
                }
                default: {
                    if (v26 <= 70) {
                        // break -> 0x401bc0
                        break;
                    }
                    // 0x401b57
                    v24 = v7;
                    v22 = v8;
                    v20 = 1;
                    v14 = 1;
                    if (v26 != 97) {
                        // 0x401b60
                        v24 = v7;
                        v22 = 1;
                        v20 = v9;
                        v14 = 2;
                        if (v26 != 103) {
                            goto lab_0x401c0b;
                        }
                    }
                    goto lab_0x401b74;
                }
            }
        }
        if (v26 == -131) {
            // 0x401bc7
        }
        if (v26 == -130) {
            // 0x4023c7
            function_402d90(0);
        }
      lab_0x401c0b:;
        int32_t v28 = (int32_t)v16 + (int32_t)v11; // 0x401c0b
        v11 = v28;
        v10 = v28;
        int64_t str = *(int64_t *)(8 * v10 + a2); // 0x401c1b
        int64_t v29 = 7; // 0x401c22
        int64_t v30 = str;
        int64_t v31 = (int64_t)"-drain";
        unsigned char v32 = *(char *)v30; // 0x401c22
        char v33 = *(char *)v31; // 0x401c22
        char v34 = v33; // 0x401c22
        bool v35 = false; // 0x401c22
        while (v32 == v33) {
            v29--;
            int64_t v36 = v31 + v5; // 0x401c22
            int64_t v37 = v30 + v5; // 0x401c22
            v34 = v32;
            v35 = true;
            if (v29 == 0) {
                // break -> 
                break;
            }
            v30 = v37;
            v31 = v36;
            v32 = *(char *)v30;
            v33 = *(char *)v31;
            v34 = v33;
            v35 = false;
        }
        unsigned char v38 = v34;
        v6 = v18;
        if ((v32 >= v38 && !v35) != v32 < v38) {
            // 0x401c2d
            v6 = strcmp((char *)str, "drain") != 0 ? 0 : 0x1000000 * v18 >> 24;
        }
        // 0x401c4d
        g34 = 0;
    }
  lab_0x401c9d:;
    int64_t * v39; // 0x401aa0
    int64_t v40; // 0x401aa0
    int64_t * v41; // 0x401aa0
    int64_t v42; // 0x401aa0
    int64_t v43; // 0x401aa0
    int64_t * v44; // 0x401aa0
    int64_t v45; // 0x401aa0
    int64_t v46; // 0x401aa0
    int64_t v47; // 0x401aa0
    int64_t v48; // 0x401aa0
    int64_t v49; // 0x401aa0
    int64_t v50; // 0x401aa0
    int64_t v51; // 0x401aa0
    int64_t v52; // 0x401aa0
    int64_t v53; // 0x401aa0
    int64_t v54; // 0x401aa0
    int64_t v55; // 0x401aa0
    int64_t v56; // 0x401aa0
    int64_t v57; // bp-57, 0x401aa0
    int64_t v58; // bp-58, 0x401aa0
    char v59; // 0x401cac
    if ((v9 & v8) != 0) {
        // 0x4023e5
        error(1, (int32_t)"the options for verbose and stty-readable output styles are\nmutually exclusive" ^ (int32_t)"the options for verbose and stty-readable output styles are\nmutually exclusive", dcgettext(NULL, "the options for verbose and stty-readable output styles are\nmutually exclusive", 5));
      lab_0x402407:
        // 0x402407
        error(1, (int32_t)"only one device may be specified" ^ (int32_t)"only one device may be specified", dcgettext(NULL, "only one device may be specified", 5));
        goto lab_0x402429;
    } else {
        // 0x401cac
        v59 = v18;
        if (v59 != 0) {
            // 0x401dcd
            v47 = 0;
            v50 = a6;
            if (v7 != 0) {
                goto lab_0x401d02;
            } else {
                // 0x401dd9
                dcgettext(NULL, "standard input", 5);
                int32_t v60 = tcgetattr(0, (struct termios *)&g48); // 0x401df6
                v55 = v8;
                v56 = 5;
                v48 = 0;
                v51 = a6;
                if (v60 != 0) {
                    goto lab_0x401ff5;
                } else {
                    goto lab_0x401e03;
                }
            }
        } else {
            // 0x401cb7
            v49 = 0;
            v53 = a6;
            if ((v9 || v8) == 0) {
                if (v7 == 0) {
                    int64_t v61 = v3 + 16;
                    int64_t v62 = v3 - 8;
                    int64_t v63 = v3 - 16;
                    v44 = (int64_t *)v63;
                    v43 = v63;
                    v42 = v3 + 46;
                    v41 = (int64_t *)v62;
                    v40 = v62;
                    v39 = (int64_t *)v61;
                    v46 = v61;
                    v45 = v3 + 47;
                    v54 = a2;
                    v52 = a6;
                    goto lab_0x401f9e;
                } else {
                    // 0x401cd9
                    function_403bd0(1, v7, a2, v1, &g56, &v57, &v58);
                    v47 = &g56;
                    v50 = &v57;
                    goto lab_0x401d02;
                }
            } else {
                goto lab_0x402458;
            }
        }
    }
  lab_0x401b74:;
    int64_t v64 = (int64_t)*(int32_t *)0x6132bc; // 0x401b74
    int64_t v65 = v16; // 0x401b7d
    if (v16 < v64) {
        int64_t v66 = (0x100000000 * v16 >> 32) + v17; // 0x401b86
        int64_t v67 = 8 * v66 + a2; // 0x401b9c
        *(int64_t *)v67 = 0;
        v67 += 8;
        v65 = v64;
        while (v67 != a2 + 8 + 8 * (((v16 ^ 0xffffffff) + v64 & 0xffffffff) + v66)) {
            // 0x401ba0
            *(int64_t *)v67 = 0;
            v67 += 8;
            v65 = v64;
        }
    }
    // 0x401bb0
    v23 = v24;
    v21 = v22;
    v19 = v20;
    v13 = v14;
    v15 = v65 & 0xffffffff;
    goto lab_0x401b27;
  lab_0x402429:;
    int64_t v68 = function_4064f0(0, 3, *(int64_t *)(v3 + 16)); // 0x402435
    error(1, *__errno_location(), "%s", (char *)v68);
    v49 = 0;
    v53 = a6;
    goto lab_0x402458;
  lab_0x402458:
    // 0x402458
    error(1, (int32_t)"when specifying an output style, modes may not be set" ^ (int32_t)"when specifying an output style, modes may not be set", dcgettext(NULL, "when specifying an output style, modes may not be set", 5));
    int64_t v69 = v49; // 0x402475
    int64_t v70 = v53; // 0x402475
    goto lab_0x40247a;
  lab_0x401d02:;
    // 0x401d02
    int64_t v158; // 0x401aa0
    int64_t v160; // 0x401aa0
    int64_t v162; // 0x401aa0
    int64_t v164; // 0x401aa0
    int64_t v167; // 0x401aa0
    int64_t * v72; // 0x401aa0
    int64_t v156; // 0x401aa0
    int64_t v73; // 0x401aa0
    int64_t v74; // 0x401aa0
    int64_t v165; // 0x401aa0
    int64_t v169; // 0x401aa0
    if ((int32_t)function_4049e0(0, v7, 2048, 0) < 0) {
        // 0x401d02
        v72 = (int64_t *)(v3 + 16);
        v73 = v47;
        v74 = v50;
        goto lab_0x4024bb;
    } else {
        int64_t v197 = function_407b50(0, 3, 2048, 0); // 0x401d26
        v69 = v47;
        v70 = v50;
        if ((int32_t)v197 == -1) {
            goto lab_0x40247a;
        } else {
            int64_t v198 = v197 & 0xfffff7ff; // 0x401d3e
            v69 = v47;
            v70 = v50;
            if ((int32_t)function_407b50(0, 4, v198, 0) < 0) {
                goto lab_0x40247a;
            } else {
                // 0x401d4f
                if (tcgetattr(0, (struct termios *)&g48) != 0) {
                    goto lab_0x401ff5;
                } else {
                    // 0x401d63
                    v55 = 0;
                    v56 = v198;
                    v48 = v47;
                    v51 = v50;
                    if ((v9 || v8 || v59) == 0) {
                        // 0x401d7d
                        v167 = v3 + 16;
                        v164 = v3 - 16;
                        v162 = v3 - 8;
                        v160 = v3 + 46;
                        v158 = v3 + 47;
                        v169 = a2;
                        v165 = &v58;
                        v156 = &v57;
                        goto lab_0x401d87;
                    } else {
                        goto lab_0x401e03;
                    }
                }
            }
        }
    }
  lab_0x40247a:;
    int64_t * v71 = (int64_t *)(v3 + 16);
    function_4064f0(0, 3, *v71);
    error(1, *__errno_location(), dcgettext(NULL, "%s: couldn't reset non-blocking mode", 5));
    v72 = v71;
    v73 = v69;
    v74 = v70;
    goto lab_0x4024bb;
  lab_0x401ff5:;
    int64_t v180 = function_4064f0(0, 3, *(int64_t *)(v3 + 16)); // 0x402001
    error(1, *__errno_location(), "%s", (char *)v180);
    goto lab_0x402024;
  lab_0x401e03:;
    int64_t v181 = function_4026e0(); // 0x401e03
    g57 = 0;
    g58 = v181;
    int64_t v117; // 0x401aa0
    int64_t v153; // 0x401aa0
    int64_t v154; // 0x401aa0
    int64_t v118; // 0x401aa0
    int64_t v116; // 0x401aa0
    int64_t v152; // 0x401aa0
    int64_t v151; // 0x401aa0
    switch ((int32_t)v12) {
        case 1: {
            // 0x4021df
            int64_t v182; // 0x401aa0
            int64_t v183 = v182;
            int64_t v184; // 0x401aa0
            int64_t v185; // 0x401aa0
            function_402930((int64_t *)&g48, 1, v185, v184);
            function_402ca0(1, v183);
            char v186 = g52; // 0x4021fd
            int64_t v187; // 0x401aa0
            int64_t v188; // 0x401aa0
            function_4027c0("line = %d;", v186, v185, v184, v187, v188);
            struct _IO_FILE * v189 = g36; // 0x402210
            int64_t v190 = (int64_t)v189; // 0x402210
            int64_t * v191 = (int64_t *)(v190 + 40); // 0x402217
            uint64_t v192 = *v191; // 0x402217
            uint64_t v193 = *(int64_t *)(v190 + 48); // 0x40221b
            if (v192 >= v193) {
                goto lab_0x4024ea;
            } else {
                // 0x402225
                *v191 = v192 + 1;
                *(char *)v192 = 10;
                goto lab_0x402230;
            }
        }
        case 2: {
            goto lab_0x402024;
        }
        default: {
            // 0x401e2c
            function_402930((int64_t *)&g48, 1, v56, v55);
            function_4027c0("line = %d;", g52, v56, v55, v48, v51);
            int64_t v194 = (int64_t)g36; // 0x401e4e
            int64_t * v195 = (int64_t *)(v194 + 40); // 0x401e55
            uint64_t v196 = *v195; // 0x401e55
            v152 = v55;
            v151 = v194;
            v153 = v48;
            v154 = v51;
            if (v196 >= *(int64_t *)(v194 + 48)) {
                goto lab_0x402587;
            } else {
                // 0x401e63
                *v195 = v196 + 1;
                *(char *)v196 = 10;
                v116 = v55;
                v117 = v48;
                v118 = v51;
                goto lab_0x401e6e;
            }
        }
    }
  lab_0x4024bb:;
    int64_t v75 = function_4064f0(0, 3, *v72); // 0x4024c7
    error(1, *__errno_location(), "%s", (char *)v75);
    goto lab_0x4024ea;
  lab_0x402024:
    // 0x402024
    __printf_chk(1, "%lx:%lx:%lx:%lx", *(int32_t *)&g48, g49, g50, g51);
    int64_t v173 = 0; // 0x40204c
    int64_t v174 = v173 + 1; // 0x40205d
    __printf_chk(1, ":%lx", (int32_t)*(char *)(v173 + 0x613371));
    v173 = v174;
    while (v174 != 32) {
        // 0x402051
        v174 = v173 + 1;
        __printf_chk(1, ":%lx", (int32_t)*(char *)(v173 + 0x613371));
        v173 = v174;
    }
    int64_t v175 = (int64_t)g36; // 0x402073
    int64_t * v176 = (int64_t *)(v175 + 40); // 0x40207a
    uint64_t v177 = *v176; // 0x40207a
    if (v177 >= *(int64_t *)(v175 + 48)) {
        // 0x402549
        __overflow(g36, 10);
    } else {
        // 0x402088
        *v176 = v177 + 1;
        *(char *)v177 = 10;
    }
    // 0x401dbc
    return 0;
  lab_0x401f9e:;
    int64_t v178 = (int64_t)dcgettext(NULL, "standard input", 5); // 0x401faa
    *v39 = v178;
    *v41 = v52;
    *v44 = v42;
    function_403bd0(1, v178, v54, v1, &g56, (int64_t *)v45, (int64_t *)&g73);
    int32_t v179 = tcgetattr(0, (struct termios *)&g48); // 0x401fe4
    v167 = v46;
    v164 = v43;
    v162 = v40;
    v160 = v42;
    v158 = v45;
    v169 = v54;
    v165 = v42;
    v156 = v45;
    if (v179 == 0) {
        goto lab_0x401d87;
    } else {
        goto lab_0x401ff5;
    }
  lab_0x4024ea:
    // 0x4024ea
    __overflow((struct _IO_FILE *)1, 10);
    goto lab_0x402230;
  lab_0x402587:
    // 0x402587
    __overflow((struct _IO_FILE *)v151, 10);
    v116 = v152;
    v117 = v153;
    v118 = v154;
    goto lab_0x401e6e;
  lab_0x401d87:;
    int64_t v155 = v156;
    char * v157 = (char *)v158; // 0x401d87
    *v157 = 0;
    char * v159 = (char *)v160; // 0x401d97
    *v159 = 0;
    int64_t * v161 = (int64_t *)v162;
    *v161 = (int64_t)&g48;
    int64_t * v163 = (int64_t *)v164;
    *v163 = v165;
    int64_t * v166 = (int64_t *)v167;
    int64_t v168 = *v166; // 0x401da4
    function_403bd0(0, v168, v169, v1, (int64_t *)&g48, (int64_t *)v155, (int64_t *)&g73);
    if (*v159 == 0) {
        // 0x401dbc
        return 0;
    }
    int64_t v170 = *v161; // 0x401daf
    if (tcsetattr(0, g25, (struct termios *)&g48) != 0) {
        int64_t v171 = function_4064f0(0, 3, *v166); // 0x402564
        error(1, *__errno_location(), "%s", (char *)v171);
        v152 = v171;
        v151 = 1;
        v153 = v170;
        v154 = v155;
        goto lab_0x402587;
    } else {
        // 0x401f08
        if (tcgetattr(0, (struct termios *)&g46) != 0) {
            goto lab_0x402429;
        } else {
            // 0x401f1c
            if (memcmp((int64_t *)&g48, (int64_t *)&g46, 60) == 0) {
                // 0x401dbc
                return 0;
            }
            // 0x401f38
            g47 &= -0x100f0001;
            if (*v157 == 0) {
                // 0x401f49
                if (memcmp((int64_t *)&g48, (int64_t *)&g46, 60) == 0) {
                    // 0x401dbc
                    return 0;
                }
            }
            int64_t v172 = function_4064f0(0, 3, *v166); // 0x401f71
            error(1, (int32_t)"%s: unable to perform all requested operations" ^ (int32_t)"%s: unable to perform all requested operations", dcgettext(NULL, "%s: unable to perform all requested operations", 5));
            v44 = v163;
            v43 = v164;
            v42 = v160;
            v41 = v161;
            v40 = v162;
            v39 = v166;
            v46 = v167;
            v45 = v158;
            v54 = v172;
            v52 = v155;
            goto lab_0x401f9e;
        }
    }
  lab_0x402230:
    // 0x402230
    g57 = 0;
    int32_t strcmp_rc = strcmp("intr", "min"); // 0x40226a
    char * str2 = "intr"; // 0x402271
    if (strcmp_rc != 0) {
        int64_t v76 = (int64_t)&g8;
        int64_t v77; // 0x401aa0
        int64_t v78; // 0x402284
        unsigned char v79; // 0x402288
        if (strcmp(str2, "flush") != 0) {
            // 0x402284
            v78 = *(int64_t *)(v76 + 16);
            v79 = *(char *)(v78 + (int64_t)&g53);
            v77 = (int64_t)"<undef>";
            if (v79 != 0) {
                // 0x402241
                v77 = function_402b00((int64_t)v79);
            }
            // 0x402249
            function_4027c0("%s = %s;", (char)(int64_t)"intr", v77, v75, v73, v74);
        }
        int64_t v80 = v76 + 24; // 0x40225b
        int64_t v81 = *(int64_t *)v80; // 0x40225f
        char * str3 = (char *)v81; // 0x40226a
        int32_t strcmp_rc2 = strcmp(str3, "min"); // 0x40226a
        str2 = str3;
        int64_t v82 = v81; // 0x402271
        while (strcmp_rc2 != 0) {
            // 0x402273
            v76 = v80;
            if (strcmp(str2, "flush") != 0) {
                // 0x402284
                v78 = *(int64_t *)(v76 + 16);
                v79 = *(char *)(v78 + (int64_t)&g53);
                v77 = (int64_t)"<undef>";
                if (v79 != 0) {
                    // 0x402241
                    v77 = function_402b00((int64_t)v79);
                }
                // 0x402249
                function_4027c0("%s = %s;", (char)v82, v77, v75, v73, v74);
            }
            // 0x40225b
            v80 = v76 + 24;
            v81 = *(int64_t *)v80;
            str3 = (char *)v81;
            strcmp_rc2 = strcmp(str3, "min");
            str2 = str3;
            v82 = v81;
        }
    }
    // 0x40229a
    function_4027c0("min = %lu; time = %lu;", g55, (int64_t)g54, v75, v73, v74);
    if (g57 != 0) {
        int64_t v83 = (int64_t)g36; // 0x4022bb
        int64_t * v84 = (int64_t *)(v83 + 40); // 0x4022c2
        uint64_t v85 = *v84; // 0x4022c2
        if (v85 >= *(int64_t *)(v83 + 48)) {
            // 0x4024f9
            __overflow(g36, 10);
        } else {
            // 0x4022d0
            *v84 = v85 + 1;
            *(char *)v85 = 10;
        }
    }
    // 0x4022db
    g57 = 0;
    int64_t v86 = (int64_t)&g10;
    int64_t v87 = 0;
    char * v88 = (char *)(v86 + 12); // 0x4022fd
    int64_t v89 = v87; // 0x402301
    int64_t * v90; // 0x401aa0
    int64_t v91; // 0x401aa0
    int64_t v92; // 0x401aa0
    int64_t v93; // 0x401aa0
    int32_t * v94; // 0x402303
    uint32_t v95; // 0x402303
    int64_t v96; // 0x40233e
    int64_t v97; // 0x402343
    int64_t v98; // 0x40230b
    int64_t * v99; // 0x402312
    uint64_t v100; // 0x402312
    int64_t v101; // 0x40234c
    int64_t v102; // 0x402359
    int32_t v103; // 0x402334
    if ((*v88 & 8) == 0) {
        // 0x402303
        v90 = (int64_t *)&g10;
        v94 = (int32_t *)(v86 + 8);
        v95 = *v94;
        v103 = v95;
        v91 = v87;
        if (v95 != (int32_t)v87) {
            // 0x40230b
            v98 = (int64_t)g36;
            v99 = (int64_t *)(v98 + 40);
            v100 = *v99;
            if (v100 >= *(int64_t *)(v98 + 48)) {
                // 0x40238f
                __overflow(g36, 10);
            } else {
                // 0x40231c
                *v99 = v100 + 1;
                *(char *)v100 = 10;
            }
            // 0x402327
            g57 = 0;
            v103 = *v94;
            v91 = v95;
        }
        // 0x402337
        v92 = v91;
        v96 = function_402750(v103);
        v97 = *(int64_t *)(v86 + 24);
        v101 = v97;
        if (v97 == 0) {
            // 0x40234c
            v101 = *(int64_t *)(v86 + 16);
        }
        if (v96 == 0) {
            // 0x402508
            __assert_fail("bitsp", "src/stty.c", 2038, "display_all");
            // 0x402521
            __assert_fail("bitsp", "src/stty.c", 1954, "display_changed");
            v93 = (int64_t)"bitsp";
            goto lab_0x40253a;
        }
        // 0x402359
        v102 = (int64_t)(*(int32_t *)v96 & (int32_t)v101);
        if (*(int64_t *)(v86 + 16) == v102) {
            // 0x40237b
            function_4027c0("%s", (char)*v90, v102, v75, v73, v74);
            v89 = v92;
        } else {
            // 0x402361
            v89 = v92;
            if ((*v88 & 4) != 0) {
                // 0x402367
                function_4027c0("-%s", (char)*v90, v102, v75, v73, v74);
                v89 = v92;
            }
        }
    }
    int64_t v104 = v86 + 32; // 0x4022ef
    int64_t * v105 = (int64_t *)v104; // 0x4022f3
    while (*v105 != 0) {
        // 0x4022fd
        v86 = v104;
        v87 = v89;
        v88 = (char *)(v86 + 12);
        v89 = v87;
        if ((*v88 & 8) == 0) {
            // 0x402303
            v90 = v105;
            v94 = (int32_t *)(v86 + 8);
            v95 = *v94;
            v103 = v95;
            v91 = v87;
            if (v95 != (int32_t)v87) {
                // 0x40230b
                v98 = (int64_t)g36;
                v99 = (int64_t *)(v98 + 40);
                v100 = *v99;
                if (v100 >= *(int64_t *)(v98 + 48)) {
                    // 0x40238f
                    __overflow(g36, 10);
                } else {
                    // 0x40231c
                    *v99 = v100 + 1;
                    *(char *)v100 = 10;
                }
                // 0x402327
                g57 = 0;
                v103 = *v94;
                v91 = v95;
            }
            // 0x402337
            v92 = v91;
            v96 = function_402750(v103);
            v97 = *(int64_t *)(v86 + 24);
            v101 = v97;
            if (v97 == 0) {
                // 0x40234c
                v101 = *(int64_t *)(v86 + 16);
            }
            if (v96 == 0) {
                // 0x402508
                __assert_fail("bitsp", "src/stty.c", 2038, "display_all");
                // 0x402521
                __assert_fail("bitsp", "src/stty.c", 1954, "display_changed");
                v93 = (int64_t)"bitsp";
                goto lab_0x40253a;
            }
            // 0x402359
            v102 = (int64_t)(*(int32_t *)v96 & (int32_t)v101);
            if (*(int64_t *)(v86 + 16) == v102) {
                // 0x40237b
                function_4027c0("%s", (char)*v90, v102, v75, v73, v74);
                v89 = v92;
            } else {
                // 0x402361
                v89 = v92;
                if ((*v88 & 4) != 0) {
                    // 0x402367
                    function_4027c0("-%s", (char)*v90, v102, v75, v73, v74);
                    v89 = v92;
                }
            }
        }
        // 0x4022ef
        v104 = v86 + 32;
        v105 = (int64_t *)v104;
    }
    goto lab_0x4021b0;
  lab_0x401e6e:
    // 0x401e6e
    g57 = 0;
    int32_t strcmp_rc3 = strcmp("intr", "min"); // 0x401eb2
    char * str4 = "intr"; // 0x401eb9
    int64_t v109 = (int64_t)&g8; // 0x401eb9
    int64_t v110 = 1; // 0x401eb9
    if (strcmp_rc3 != 0) {
        int64_t v111 = 1;
        int64_t v112 = *(int64_t *)(v109 + 16); // 0x401ebf
        unsigned char v113 = *(char *)(v112 + (int64_t)&g53); // 0x401ec3
        int64_t v114 = v111; // 0x401ecf
        int64_t v115; // 0x401aa0
        if (v113 != *(char *)(v109 + 8)) {
            // 0x401ed1
            v114 = v111;
            if (strcmp(str4, "flush") != 0) {
                // 0x401ee2
                v115 = (int64_t)"<undef>";
                if (v113 != 0) {
                    // 0x401e85
                    v115 = function_402b00((int64_t)v113);
                }
                // 0x401e8e
                function_4027c0("%s = %s;", (char)(int64_t)"intr", v115, v116, v117, v118);
                v114 = 0;
            }
        }
        int64_t v119 = v109 + 24; // 0x401ea3
        int64_t v120 = *(int64_t *)v119; // 0x401ea7
        char * str5 = (char *)v120; // 0x401eb2
        int32_t strcmp_rc4 = strcmp(str5, "min"); // 0x401eb2
        str4 = str5;
        int64_t v121 = v120; // 0x401eb9
        v109 = v119;
        v110 = v114;
        while (strcmp_rc4 != 0) {
            // 0x401ebf
            v111 = v114;
            v112 = *(int64_t *)(v109 + 16);
            v113 = *(char *)(v112 + (int64_t)&g53);
            v114 = v111;
            if (v113 != *(char *)(v109 + 8)) {
                // 0x401ed1
                v114 = v111;
                if (strcmp(str4, "flush") != 0) {
                    // 0x401ee2
                    v115 = (int64_t)"<undef>";
                    if (v113 != 0) {
                        // 0x401e85
                        v115 = function_402b00((int64_t)v113);
                    }
                    // 0x401e8e
                    function_4027c0("%s = %s;", (char)v121, v115, v116, v117, v118);
                    v114 = 0;
                }
            }
            // 0x401ea3
            v119 = v109 + 24;
            v120 = *(int64_t *)v119;
            str5 = (char *)v120;
            strcmp_rc4 = strcmp(str5, "min");
            str4 = str5;
            v121 = v120;
            v109 = v119;
            v110 = v114;
        }
    }
    // 0x402098
    if ((*(char *)&g51 & 2) == 0) {
        // 0x4023aa
        function_4027c0("min = %lu; time = %lu;\n", g55, (int64_t)g54, v116, v117, v118);
    } else {
        // 0x4020a5
        if ((char)v110 == 0) {
            int64_t v122 = (int64_t)g36; // 0x4020aa
            int64_t * v123 = (int64_t *)(v122 + 40); // 0x4020b1
            uint64_t v124 = *v123; // 0x4020b1
            if (v124 >= *(int64_t *)(v122 + 48)) {
                // 0x4023ce
                __overflow(g36, 10);
            } else {
                // 0x4020bf
                *v123 = v124 + 1;
                *(char *)v124 = 10;
            }
        }
    }
    // 0x4020ca
    g57 = 0;
    int64_t v125 = (int64_t)&g10;
    int64_t v126 = 0;
    int64_t v127 = 1;
    char * v128 = (char *)(v125 + 12); // 0x4020fd
    int64_t v129 = v126; // 0x402101
    int64_t v130 = v127; // 0x402101
    int32_t v131; // 0x401aa0
    int64_t * v132; // 0x401aa0
    int64_t v133; // 0x401aa0
    int64_t v134; // 0x401aa0
    int64_t v135; // 0x401aa0
    int32_t * v136; // 0x402105
    int32_t v137; // 0x402105
    int64_t v138; // 0x402149
    int64_t v139; // 0x40214e
    int64_t v140; // 0x402157
    int64_t v141; // 0x402139
    int64_t v142; // 0x40210f
    int64_t * v143; // 0x402116
    uint64_t v144; // 0x402116
    char v145; // 0x402164
    int64_t v146; // 0x402168
    unsigned char v147; // 0x402174
    if ((*v128 & 8) == 0) {
        // 0x402103
        v132 = (int64_t *)&g10;
        v136 = (int32_t *)(v125 + 8);
        v137 = *v136;
        v141 = v126 & 0xffffffff;
        v133 = v127;
        if (v137 != (int32_t)v126) {
            // 0x40210a
            v131 = v137;
            if ((char)v127 == 0) {
                // 0x40210f
                v142 = (int64_t)g36;
                v143 = (int64_t *)(v142 + 40);
                v144 = *v143;
                if (v144 >= *(int64_t *)(v142 + 48)) {
                    // 0x40239b
                    __overflow(g36, 10);
                } else {
                    // 0x402124
                    *v143 = v144 + 1;
                    *(char *)v144 = 10;
                }
                // 0x40212f
                g57 = 0;
                v131 = *v136;
            }
            // 0x402139
            v141 = v131;
            v133 = 1;
        }
        // 0x402144
        v134 = v133;
        v135 = v141;
        v138 = function_402750((int32_t)v141);
        v139 = *(int64_t *)(v125 + 24);
        v140 = v139;
        if (v139 == 0) {
            // 0x402157
            v140 = *(int64_t *)(v125 + 16);
        }
        if (v138 == 0) {
            // 0x402521
            __assert_fail("bitsp", "src/stty.c", 1954, "display_changed");
            v93 = (int64_t)"bitsp";
            goto lab_0x40253a;
        }
        // 0x402164
        v145 = *v128;
        v146 = (int64_t)(*(int32_t *)v138 & (int32_t)v140);
        if (*(int64_t *)(v125 + 16) != v146) {
            // 0x4020e3
            v129 = v135;
            v130 = v134;
            if ((v145 & 5) == 5) {
                // 0x402194
                function_4027c0("-%s", (char)*v132, v146, 5, v117, v118);
                v129 = v135;
                v130 = 0;
            }
        } else {
            // 0x402174
            v147 = v145 & 2;
            v129 = v135;
            v130 = v134;
            if (v147 != 0) {
                // 0x40217d
                function_4027c0("%s", (char)*v132, v146, (int64_t)v147, v117, v118);
                v129 = v135;
                v130 = 0;
            }
        }
    }
    int64_t v148 = v130;
    int64_t v149 = v125 + 32; // 0x4020ef
    int64_t * v150 = (int64_t *)v149; // 0x4020f3
    while (*v150 != 0) {
        // 0x4020fd
        v125 = v149;
        v126 = v129;
        v127 = v148;
        v128 = (char *)(v125 + 12);
        v129 = v126;
        v130 = v127;
        if ((*v128 & 8) == 0) {
            // 0x402103
            v132 = v150;
            v136 = (int32_t *)(v125 + 8);
            v137 = *v136;
            v141 = v126 & 0xffffffff;
            v133 = v127;
            if (v137 != (int32_t)v126) {
                // 0x40210a
                v131 = v137;
                if ((char)v127 == 0) {
                    // 0x40210f
                    v142 = (int64_t)g36;
                    v143 = (int64_t *)(v142 + 40);
                    v144 = *v143;
                    if (v144 >= *(int64_t *)(v142 + 48)) {
                        // 0x40239b
                        __overflow(g36, 10);
                    } else {
                        // 0x402124
                        *v143 = v144 + 1;
                        *(char *)v144 = 10;
                    }
                    // 0x40212f
                    g57 = 0;
                    v131 = *v136;
                }
                // 0x402139
                v141 = v131;
                v133 = 1;
            }
            // 0x402144
            v134 = v133;
            v135 = v141;
            v138 = function_402750((int32_t)v141);
            v139 = *(int64_t *)(v125 + 24);
            v140 = v139;
            if (v139 == 0) {
                // 0x402157
                v140 = *(int64_t *)(v125 + 16);
            }
            if (v138 == 0) {
                // 0x402521
                __assert_fail("bitsp", "src/stty.c", 1954, "display_changed");
                v93 = (int64_t)"bitsp";
                goto lab_0x40253a;
            }
            // 0x402164
            v145 = *v128;
            v146 = (int64_t)(*(int32_t *)v138 & (int32_t)v140);
            if (*(int64_t *)(v125 + 16) != v146) {
                // 0x4020e3
                v129 = v135;
                v130 = v134;
                if ((v145 & 5) == 5) {
                    // 0x402194
                    function_4027c0("-%s", (char)*v132, v146, 5, v117, v118);
                    v129 = v135;
                    v130 = 0;
                }
            } else {
                // 0x402174
                v147 = v145 & 2;
                v129 = v135;
                v130 = v134;
                if (v147 != 0) {
                    // 0x40217d
                    function_4027c0("%s", (char)*v132, v146, (int64_t)v147, v117, v118);
                    v129 = v135;
                    v130 = 0;
                }
            }
        }
        // 0x4020ef
        v148 = v130;
        v149 = v125 + 32;
        v150 = (int64_t *)v149;
    }
    if ((char)v148 != 0) {
        // 0x4021d0
        g57 = 0;
        // 0x401dbc
        return 0;
    }
    goto lab_0x4021b0;
  lab_0x4021b0:;
    int64_t v106 = (int64_t)g36; // 0x4021b0
    int64_t * v107 = (int64_t *)(v106 + 40); // 0x4021b7
    uint64_t v108 = *v107; // 0x4021b7
    v93 = v106;
    if (v108 >= *(int64_t *)(v106 + 48)) {
      lab_0x40253a:
        // 0x40253a
        __overflow((struct _IO_FILE *)v93, 10);
        // 0x4021d0
        g57 = 0;
        // 0x401dbc
        return 0;
    }
    // 0x4021c5
    *v107 = v108 + 1;
    *(char *)v108 = 10;
    // 0x4021d0
    g57 = 0;
    // 0x401dbc
    return 0;
}
// Address range: 0x4025a0 - 0x4025cb
// Address range: 0x4025cb - 0x4025ea
int64_t function_4025cb(void) {
    // 0x4025cb
    return &g35;
}
// Address range: 0x4025ea - 0x402621
int64_t function_4025ea(void) {
    // 0x4025ea
    return 0;
}
// Address range: 0x402621 - 0x402678
int64_t function_402621(void) {
    // 0x402621
    if (g39 != 0) {
        // 0x402677
        int64_t result; // 0x402621
        return result;
    }
    int64_t v1 = g40; // 0x402654
    int64_t result2; // 0x402666
    if (g40 >= ((int64_t)&g22 - (int64_t)&g21 >> 3) - 1) {
        // 0x402666
        result2 = function_4025cb();
        g39 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g22 - (int64_t)&g21 >> 3) - 1) {
        // 0x402656
        v1++;
    }
    // 0x40264a
    g40 = v1;
    // 0x402666
    result2 = function_4025cb();
    g39 = 1;
    return result2;
}
// Address range: 0x402678 - 0x40267d
int64_t function_402678(void) {
    // 0x402678
    return function_4025ea();
}
// Address range: 0x402680 - 0x4026da
int64_t function_402680(int64_t str) {
    int64_t v1 = (int64_t)&g5; // 0x402693
    int64_t str2 = (int64_t)&g2; // 0x402693
    int64_t v2 = 0;
    while (strcmp((char *)str, (char *)str2) != 0) {
        // 0x402698
        str2 = *(int64_t *)v1;
        v1 += 24;
        if (str2 == 0) {
            // 0x4026d0
            return 0xffffffff;
        }
        v2 = v2 + 1 & 0xffffffff;
    }
    int64_t v3 = 0x100000000 * v2;
    uint32_t result = *(int32_t *)(8 * ((v3 >> 32) + (v3 >> 31)) + (int64_t)&g3); // 0x4026c0
    return result;
}
// Address range: 0x4026e0 - 0x40274b
int64_t function_4026e0(void) {
    // 0x4026e0
    int16_t v1; // 0x4026e0
    uint16_t result = v1;
    if (ioctl(1, 0x5413) == 0) {
        // 0x4026fe
        if (result != 0) {
            // 0x402746
            return result;
        }
    }
    char * env_val = getenv("COLUMNS"); // 0x40270d
    if (env_val == NULL) {
        // 0x402746
        return 80;
    }
    // 0x402717
    int64_t result2; // bp-24, 0x4026e0
    int64_t v2 = function_406fc0((int64_t)env_val, 0, 0, &result2, (int64_t *)&g18); // 0x402727
    if ((int32_t)v2 != 0) {
        // 0x402746
        return 80;
    }
    // 0x402730
    if (result2 < 0x80000000) {
        // 0x402746
        return result2;
    }
    // 0x402746
    return 80;
}
// Address range: 0x402750 - 0x402766
int64_t function_402750(uint32_t a1) {
    // 0x402750
    if (a1 < 5) {
        // 0x40275d
        int64_t result; // 0x402750
        return result;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402770 - 0x402777
int64_t function_402770(void) {
    // 0x402770
    return 0;
}
// Address range: 0x402780 - 0x402789
int64_t function_402780(int64_t a1, int64_t a2) {
    // 0x402780
    return a2 + 12;
}
// Address range: 0x402790 - 0x402799
int64_t function_402790(int64_t a1, int64_t a2) {
    // 0x402790
    return a2 + 8;
}
// Address range: 0x4027a0 - 0x4027a8
int64_t function_4027a0(int64_t a1, int64_t result) {
    // 0x4027a0
    return result;
}
// Address range: 0x4027b0 - 0x4027b9
int64_t function_4027b0(int64_t a1, int64_t a2) {
    // 0x4027b0
    return a2 + 4;
}
// Address range: 0x4027c0 - 0x402924
int64_t function_4027c0(char * a1, char a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4027c0
    int64_t v1; // 0x4027c0
    if ((char)v1 != 0) {
        // 0x4027e5
        int128_t v2; // 0x4027c0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int64_t v3 = 8; // bp-208, 0x402839
    char * v4; // bp-216, 0x4027c0
    int64_t v5 = function_408ae0((int64_t *)&v4, (int64_t)a1, &v3); // 0x40284e
    int32_t v6 = v5; // 0x402855
    if (v6 < 0) {
        // 0x40291f
        function_406e80((int64_t)&v4);
        // UNREACHABLE
    }
    int32_t v7 = g57; // 0x40285d
    int64_t v8 = (int64_t)g36; // 0x402863
    int64_t v9 = v8; // 0x40286c
    if (v7 >= 1) {
        int64_t * v10 = (int64_t *)(v8 + 40); // 0x402874
        uint64_t v11 = *v10; // 0x402874
        uint64_t v12 = *(int64_t *)(v8 + 48); // 0x402878
        if ((v5 & 0xffffffff) > (int64_t)(g58 - v7)) {
            if (v11 >= v12) {
                // 0x402910
                __overflow(g36, 10);
            } else {
                // 0x40288b
                *v10 = v11 + 1;
                *(char *)v11 = 10;
            }
            // 0x402896
            g57 = 0;
            v9 = (int64_t)g36;
        } else {
            int32_t v13; // 0x4027c0
            if (v11 >= v12) {
                // 0x4028f8
                __overflow(g36, 32);
                v13 = g57;
            } else {
                // 0x4028d5
                *v10 = v11 + 1;
                *(char *)v11 = 32;
                v13 = v7;
            }
            // 0x4028e0
            g57 = v13 + 1;
            v9 = (int64_t)g36;
        }
    }
    // 0x4028a7
    fputs_unlocked(v4, (struct _IO_FILE *)v9);
    free((int64_t *)v4);
    g57 += v6;
    return &g73;
}
// Address range: 0x402930 - 0x402aab
int64_t function_402930(int64_t * termios_p, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402930
    int64_t v1; // 0x402930
    int64_t v2; // 0x402930
    int64_t v3; // 0x402930
    if (cfgetispeed((struct termios *)termios_p) == 0) {
        goto lab_0x40295a;
    } else {
        // 0x402942
        if (cfgetispeed((struct termios *)termios_p) != cfgetospeed((struct termios *)termios_p)) {
            int32_t v4 = cfgetospeed((struct termios *)termios_p); // 0x4029cb
            int64_t v5 = &g6; // 0x402930
            v2 = a4;
            v3 = 0;
            v1 = 0x100000000;
            switch (v4) {
                case 0: {
                    goto lab_0x402a04;
                }
                case 1: {
                    goto lab_0x402a90;
                }
                default: {
                    int64_t v6 = 2; // 0x4029f9
                    int64_t v7 = v6 & 0xffffffff; // 0x4029f9
                    v2 = v7;
                    v3 = 0;
                    while (*(int64_t *)(v5 + 16) != 0) {
                        int64_t v8 = v5 + 24; // 0x4029e8
                        v5 = v8;
                        if (*(int32_t *)v8 == v4) {
                            // 0x4029e8
                            v1 = 0x100000000 * v6;
                            goto lab_0x402a90;
                        }
                        v6 = v7 + 1;
                        v7 = v6 & 0xffffffff;
                        v2 = v7;
                        v3 = 0;
                    }
                    goto lab_0x402a04;
                }
            }
        } else {
            goto lab_0x40295a;
        }
    }
  lab_0x40295a:;
    int32_t v9 = cfgetospeed((struct termios *)termios_p); // 0x40295d
    int64_t v10 = a3; // 0x402930
    int64_t v11 = 0; // 0x402930
    int64_t v12 = a4; // 0x402930
    switch (v9) {
        case 0: {
            goto lab_0x402999;
        }
        case 1: {
            goto lab_0x402a60;
        }
        default: {
            int64_t v13; // 0x402930
            int64_t v14 = *(int64_t *)(v13 + 16); // 0x40298d
            int64_t v15; // 0x402930
            v10 = v15;
            v11 = v14;
            int64_t v16; // 0x402930
            v12 = v16 + 1 & 0xffffffff;
            while (v14 != 0) {
                // 0x402980
                int64_t v17; // 0x402930
                int64_t v18 = v17 + 24; // 0x402980
                int32_t v19 = *(int32_t *)v17; // 0x402984
                v15 = v18;
                v13 = v17;
                int64_t v20; // 0x402991
                v16 = v20;
                if (v19 == v9) {
                    // 0x402980
                    goto lab_0x402a60;
                }
                int64_t v21 = v16;
                int64_t v22 = v13;
                v17 = v15;
                v14 = *(int64_t *)(v22 + 16);
                int64_t v23 = v21 + 1; // 0x402991
                v20 = v23 & 0xffffffff;
                v10 = v17;
                v11 = v14;
                v12 = v20;
            }
            goto lab_0x402999;
        }
    }
  lab_0x402999:;
    char v24 = a2;
    char * v25 = v24 == 0 ? "%lu\n" : "speed %lu baud;"; // 0x4029ab
    char v26 = v24; // 0x4029ab
    int64_t v27; // 0x402930
    int64_t result = function_4027c0(v25, (char)v11, v10, v12, v27, v27); // 0x4029ab
    goto lab_0x4029b0;
  lab_0x402a60:;
    int64_t v44 = 0x100000000;
    int64_t v45 = v44 >> 32; // 0x402a60
    int64_t v46 = *(int64_t *)(8 * (v45 + (v44 >> 31)) + (int64_t)&g4); // 0x402a67
    v10 = (int64_t)&g6 + 24;
    v11 = v46;
    v12 = v45;
    goto lab_0x402999;
  lab_0x4029b0:
    // 0x4029b0
    if (v26 == 0) {
        // 0x4029b4
        g57 = 0;
    }
    // 0x4029be
    return result;
  lab_0x402a04:;
    int32_t v28 = cfgetispeed((struct termios *)termios_p); // 0x402a07
    int64_t v29 = &g6; // 0x402930
    int64_t v30 = 1; // 0x402930
    int64_t v31 = v2; // 0x402930
    char v32 = 0; // 0x402930
    int64_t v33 = 0x100000000; // 0x402930
    int64_t v34 = (int64_t)&g6 + 24; // 0x402930
    switch (v28) {
        case 0: {
            goto lab_0x402a37;
        }
        case 1: {
            goto lab_0x402a78;
        }
        default: {
            int64_t v35 = (int64_t)&g6 + 24;
            v31 = v35;
            v32 = 0;
            while (*(int64_t *)(v29 + 16) != 0) {
                int64_t v36 = v30 + 1; // 0x402a2d
                int64_t v37 = v35 + 24; // 0x402a20
                v29 = v35;
                v30 = v36 & 0xffffffff;
                if (*(int32_t *)v35 == v28) {
                    // 0x402a20
                    v33 = 0x100000000 * v36;
                    v34 = v37;
                    goto lab_0x402a78;
                }
                v35 = v37;
                v31 = v35;
                v32 = 0;
            }
            goto lab_0x402a37;
        }
    }
  lab_0x402a90:;
    int64_t v38 = v1 >> 32; // 0x402a90
    int64_t v39 = *(int64_t *)(8 * (v38 + (v1 >> 31)) + (int64_t)&g4); // 0x402a97
    v2 = v38;
    v3 = v39;
    goto lab_0x402a04;
  lab_0x402a37:;
    char v40 = a2;
    char * v41 = v40 == 0 ? "%lu %lu\n" : "ispeed %lu baud; ospeed %lu baud;"; // 0x402a4c
    v26 = v40;
    result = function_4027c0(v41, v32, v3, v31, v27, v27);
    goto lab_0x4029b0;
  lab_0x402a78:;
    int64_t v42 = v33;
    int64_t v43 = *(int64_t *)(8 * ((v42 >> 32) + (v42 >> 31)) + (int64_t)&g4); // 0x402a7f
    v31 = v34;
    v32 = v43;
    goto lab_0x402a37;
}
// Address range: 0x402ab0 - 0x402af2
int64_t function_402ab0(int64_t a1, int64_t a2) {
    // 0x402ab0
    return function_406ec0(a1, (int32_t)"invalid integer argument" ^ (int32_t)"invalid integer argument", 0, a2, "bB", (int64_t)dcgettext(NULL, "invalid integer argument", 5), 0);
}
// Address range: 0x402b00 - 0x402bce
int64_t function_402b00(int64_t a1) {
    unsigned char v1 = (char)a1; // 0x402b00
    if (v1 < 32) {
        // 0x402b60
        *(char *)&g41 = 94;
        *(char *)&g42 = v1 + 64;
        *(char *)&g43 = 0;
        return &g41;
    }
    if (v1 < 127) {
        // 0x402b0c
        *(char *)&g41 = v1;
        // 0x402b18
        *(char *)(int64_t)&g42 = 0;
        return &g41;
    }
    if (v1 == 127) {
        // 0x402b80
        *(int16_t *)&g41 = 0x3f5e;
        // 0x402b18
        *(char *)(int64_t)&g43 = 0;
        return &g41;
    }
    // 0x402b2e
    *(int16_t *)&g41 = 0x2d4d;
    if (v1 < 160) {
        // 0x402b98
        *(char *)&g43 = 94;
        *(char *)&g44 = v1 - 64;
        // 0x402b18
        *(char *)(int64_t)&g45 = 0;
        return &g41;
    }
    int64_t v2; // 0x402b00
    if (v1 == -1) {
        // 0x402bb8
        *(int16_t *)&g43 = 0x3f5e;
        v2 = &g45;
    } else {
        // 0x402b46
        *(char *)&g43 = v1 ^ -128;
        v2 = &g44;
    }
    // 0x402b18
    *(char *)v2 = 0;
    return &g41;
}
// Address range: 0x402bd0 - 0x402ca0
int64_t function_402bd0(int64_t a1, int32_t a2, int64_t a3) {
    // 0x402bd0
    if (ioctl(0, 0x5413) != 0) {
        int32_t * err_num = __errno_location(); // 0x402bf8
        if (*err_num != 22) {
            // 0x402c42
            error(1, *err_num, "%s", (char *)function_4064f0(0, 3, a3));
            // 0x402c69
            error(1, *__errno_location(), "%s", (char *)function_4064f0(0, 3, a3));
            return &g73;
        }
    }
    int32_t result = ioctl(0, 0x5414); // 0x402c2e
    if (result == 0) {
        // 0x402c37
        return result;
    }
    // 0x402c69
    error(1, *__errno_location(), "%s", (char *)function_4064f0(0, 3, a3));
    return &g73;
}
// Address range: 0x402ca0 - 0x402d90
int64_t function_402ca0(int64_t a1, int64_t a2) {
    // 0x402ca0
    if (ioctl(0, 0x5413) == 0) {
        // 0x402ce0
        int16_t v1; // 0x402ca0
        int64_t v2 = v1; // 0x402ce0
        char v3 = v1;
        int64_t v4; // 0x402ca0
        if ((char)a1 != 0) {
            // 0x402d10
            return function_4027c0("rows %d; columns %d;", v3, v2, v4, v4, v4);
        }
        int64_t result = function_4027c0("%d %d\n", v3, v2, v4, v4, v4); // 0x402cf5
        g57 = 0;
        return result;
    }
    int32_t * err_num = __errno_location(); // 0x402cc4
    char * format; // 0x402d6a
    if (*err_num != 22) {
        // 0x402d25
        error(1, *err_num, "%s", (char *)function_4064f0(0, 3, a2));
        // 0x402d4c
        function_4064f0(0, 3, a2);
        format = dcgettext(NULL, "%s: no size information for this device", 5);
        error(1, (int32_t)"%s: no size information for this device" ^ (int32_t)"%s: no size information for this device", format);
        return &g73;
    }
    if ((char)a1 != 0) {
        // 0x402cd5
        return (int64_t)err_num;
    }
    // 0x402d4c
    function_4064f0(0, 3, a2);
    format = dcgettext(NULL, "%s: no size information for this device", 5);
    error(1, (int32_t)"%s: no size information for this device" ^ (int32_t)"%s: no size information for this device", format);
    return &g73;
}
// Address range: 0x402d90 - 0x403bc1
int64_t function_402d90(int32_t status) {
    // 0x402d90
    if (status != 0) {
        // 0x402daa
        __fprintf_chk(g38, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402dcf
        exit(status);
        // UNREACHABLE
    }
    // 0x402dd6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [-F DEVICE | --file=DEVICE] [SETTING]...\n  or:  %s [-F DEVICE | --file=DEVICE] [-a|--all]\n  or:  %s [-F DEVICE | --file=DEVICE] [-g|--save]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print or change terminal characteristics.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "  -a, --all          print all current settings in human-readable form\n  -g, --save         print all current settings in a stty-readable form\n  -F, --file=DEVICE  open and use the specified DEVICE instead of stdin\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nOptional - before SETTING indicates negation.  An * marks non-POSIX\nsettings.  The underlying system defines which settings are available.\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nSpecial characters:\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * discard CHAR  CHAR will toggle discarding of output\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   eof CHAR      CHAR will send an end of file (terminate the input)\n   eol CHAR      CHAR will end the line\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * eol2 CHAR     alternate CHAR for ending the line\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   erase CHAR    CHAR will erase the last character typed\n   intr CHAR     CHAR will send an interrupt signal\n   kill CHAR     CHAR will erase the current line\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * lnext CHAR    CHAR will enter the next character quoted\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   quit CHAR     CHAR will send a quit signal\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * rprnt CHAR    CHAR will redraw the current line\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   start CHAR    CHAR will restart the output after stopping it\n   stop CHAR     CHAR will stop the output\n   susp CHAR     CHAR will send a terminal stop signal\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * swtch CHAR    CHAR will switch to a different shell layer\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * werase CHAR   CHAR will erase the last word typed\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nSpecial settings:\n   N             set the input and output speeds to N bauds\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * cols N        tell the kernel that the terminal has N columns\n * columns N     same as cols N\n", 5), g36);
    if (g25 == 1) {
        // 0x403aff
        dcgettext(NULL, "on", 5);
    } else {
        // 0x4030a5
        dcgettext(NULL, "off", 5);
    }
    // 0x4030b4
    __printf_chk(1, dcgettext(NULL, " * [-]drain      wait for transmission before applying settings (%s by default)\n", 5));
    fputs_unlocked(dcgettext(NULL, "   ispeed N      set the input speed to N\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * line N        use line discipline N\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   min N         with -icanon, set N characters minimum for a completed read\n   ospeed N      set the output speed to N\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * rows N        tell the kernel that the terminal has N rows\n * size          print the number of rows and columns according to the kernel\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   speed         print the terminal speed\n   time N        with -icanon, set read timeout of N tenths of a second\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nControl settings:\n   [-]clocal     disable modem control signals\n   [-]cread      allow input to be received\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]crtscts    enable RTS/CTS handshaking\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   csN           set character size to N bits, N in [5..8]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]cstopb     use two stop bits per character (one with '-')\n   [-]hup        send a hangup signal when the last process closes the tty\n   [-]hupcl      same as [-]hup\n   [-]parenb     generate parity bit in output and expect parity bit in input\n   [-]parodd     set odd parity (or even parity with '-')\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]cmspar     use \"stick\" (mark/space) parity\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nInput settings:\n   [-]brkint     breaks cause an interrupt signal\n   [-]icrnl      translate carriage return to newline\n   [-]ignbrk     ignore break characters\n   [-]igncr      ignore carriage return\n   [-]ignpar     ignore characters with parity errors\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]imaxbel    beep and do not flush a full input buffer on a character\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]inlcr      translate newline to carriage return\n   [-]inpck      enable input parity checking\n   [-]istrip     clear high (8th) bit of input characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]iutf8      assume input characters are UTF-8 encoded\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]iuclc      translate uppercase characters to lowercase\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]ixany      let any character restart output, not only start character\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]ixoff      enable sending of start/stop characters\n   [-]ixon       enable XON/XOFF flow control\n   [-]parmrk     mark parity errors (with a 255-0-character sequence)\n   [-]tandem     same as [-]ixoff\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nOutput settings:\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * bsN           backspace delay style, N in [0..1]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * crN           carriage return delay style, N in [0..3]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * ffN           form feed delay style, N in [0..1]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * nlN           newline delay style, N in [0..1]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]ocrnl      translate carriage return to newline\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]ofdel      use delete characters for fill instead of NUL characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]ofill      use fill (padding) characters instead of timing for delays\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]olcuc      translate lowercase characters to uppercase\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]onlcr      translate newline to carriage return-newline\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]onlret     newline performs a carriage return\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]onocr      do not print carriage returns in the first column\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]opost      postprocess output\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * tabN          horizontal tab delay style, N in [0..3]\n * tabs          same as tab0\n * -tabs         same as tab3\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * vtN           vertical tab delay style, N in [0..1]\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nLocal settings:\n   [-]crterase   echo erase characters as backspace-space-backspace\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * crtkill       kill all line by obeying the echoprt and echoe settings\n * -crtkill      kill all line by obeying the echoctl and echok settings\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]ctlecho    echo control characters in hat notation ('^c')\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]echo       echo input characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]echoctl    same as [-]ctlecho\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]echoe      same as [-]crterase\n   [-]echok      echo a newline after a kill character\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]echoke     same as [-]crtkill\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   [-]echonl     echo newline even if not echoing other characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]echoprt    echo erased characters backward, between '\\' and '/'\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]extproc    enable \"LINEMODE\"; useful with high latency links\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]flusho     discard output\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "   [-]icanon     enable special characters: %s\n   [-]iexten     enable non-POSIX special characters\n", 5));
    fputs_unlocked(dcgettext(NULL, "   [-]isig       enable interrupt, quit, and suspend special characters\n   [-]noflsh     disable flushing after interrupt and quit special characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]prterase   same as [-]echoprt\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]tostop     stop background jobs that try to write to the terminal\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]xcase      with icanon, escape with '\\' for uppercase characters\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "\nCombination settings:\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]LCASE      same as [-]lcase\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   cbreak        same as -icanon\n   -cbreak       same as icanon\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   cooked        same as brkint ignpar istrip icrnl ixon opost isig\n                 icanon, eof and eol characters to their default values\n   -cooked       same as raw\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "   crt           same as %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "   dec           same as %s intr ^c erase 0177\n                 kill ^u\n", 5));
    fputs_unlocked(dcgettext(NULL, " * [-]decctlq    same as [-]ixany\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   ek            erase and kill characters to their default values\n   evenp         same as parenb -parodd cs7\n   -evenp        same as -parenb cs8\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, " * [-]lcase      same as xcase iuclc olcuc\n", 5), g36);
    fputs_unlocked(dcgettext(NULL, "   litout        same as -parenb -istrip -opost cs8\n   -litout       same as parenb istrip opost cs7\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "   nl            same as %s\n   -nl           same as %s\n", 5));
    fputs_unlocked(dcgettext(NULL, "   oddp          same as parenb parodd cs7\n   -oddp         same as -parenb cs8\n   [-]parity     same as [-]evenp\n   pass8         same as -parenb -istrip cs8\n   -pass8        same as parenb istrip cs7\n", 5), g36);
    __printf_chk(1, dcgettext(NULL, "   raw           same as -ignbrk -brkint -ignpar -parmrk -inpck -istrip\n                 -inlcr -igncr -icrnl -ixon -ixoff -icanon -opost\n                 -isig%s min 1 time 0\n   -raw          same as cooked\n", 5));
    __printf_chk(1, dcgettext(NULL, "   sane          same as cread -ignbrk brkint -inlcr -igncr icrnl\n                 icanon iexten echo echoe echok -echonl -noflsh\n                 %s\n                 %s\n                 %s,\n                 all special characters to their default values\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nHandle the tty line connected to standard input.  Without arguments,\nprints baud rate, line discipline, and deviations from stty sane.  In\nsettings, CHAR is taken literally, or coded as in ^c, 0x37, 0177 or\n127; special values ^- or undef used to disable special characters.\n", 5), g36);
    int64_t v1 = &g1; // bp-136, 0x403990
    bool v2; // 0x402d90
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x403a10
    int64_t v6 = *(int64_t *)v5; // 0x403a14
    int64_t v7 = 5; // 0x403a1a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"stty";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x403a26
        char v11 = *(char *)v9; // 0x403a26
        char v12 = v11; // 0x403a26
        bool v13 = false; // 0x403a26
        while (v10 == v11) {
            // 0x403a1c
            v7--;
            int64_t v14 = v9 + v3; // 0x403a26
            int64_t v15 = v8 + v3; // 0x403a26
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
            // break -> 0x403a32
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x403a32
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x403b87;
        } else {
            // 0x403b71
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403b18
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403a94;
            } else {
                goto lab_0x403b87;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403a94;
        } else {
            // 0x403a7a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403b18
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403a94;
            } else {
                goto lab_0x403a94;
            }
        }
    }
  lab_0x403b87:
    // 0x403b87
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403ad4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402dcf
    exit(status);
    // UNREACHABLE
  lab_0x403a94:
    // 0x403a94
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403ad4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402dcf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403bd0 - 0x404913
int64_t function_403bd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * termios_p, int64_t * a6, int64_t * a7) {
    int64_t v1 = (int64_t)termios_p;
    int64_t v2 = v1;
    int64_t result; // 0x403bd0
    if ((int32_t)a4 < 2) {
        // 0x403d47
        return result;
    }
    int64_t v3 = (int64_t)a7;
    uint64_t v4 = 0x100000000 * a4 >> 32; // 0x403bfb
    bool v5; // 0x403bd0
    int64_t v6 = v5 ? -1 : 1;
    int32_t * v7 = (int32_t *)(v1 + 8);
    int32_t * v8 = (int32_t *)(v1 + 4);
    int16_t * v9 = (int16_t *)(v1 + 19);
    int32_t * v10 = (int32_t *)(v1 + 12);
    int64_t v11 = v1 + 17;
    int32_t v12 = -(int32_t)v4;
    int64_t v13 = 1; // 0x403c08
    int64_t v14; // 0x403bd0
    int64_t v15; // 0x403bd0
    int64_t v16; // 0x403bd0
    int64_t v17; // 0x403bd0
    int64_t v18; // 0x403bd0
    int64_t v19; // 0x403bd0
    int64_t v20; // 0x403bd0
    int64_t v21; // 0x403bd0
    int64_t v22; // 0x403bd0
    int64_t v23; // 0x403c2f
    char v24; // 0x403c4c
    char * str; // 0x403bd0
    char * str2; // 0x403bd0
    while (true) {
      lab_0x403c2c_2:
        // 0x403c2c
        v19 = v13;
        int64_t v25 = 0x100000000 * v19;
        int64_t v26 = v25 >> 32; // 0x403c2c
        v23 = v25 >> 29;
        int64_t v27 = *(int64_t *)(v23 + a3); // 0x403c40
        v17 = v26;
        v18 = v19;
        if (v27 == 0) {
            goto lab_0x403c1f;
        } else {
            // 0x403c49
            v24 = *(char *)v27;
            v22 = v27 + (int64_t)(v24 == 45);
            int64_t v28 = 6; // 0x403c68
            int64_t v29 = v22;
            int64_t v30 = (int64_t)"drain";
            unsigned char v31 = *(char *)v29; // 0x403c68
            char v32 = *(char *)v30; // 0x403c68
            char v33 = v32; // 0x403c68
            bool v34 = false; // 0x403c68
            while (v31 == v32) {
                v28--;
                int64_t v35 = v30 + v6; // 0x403c68
                int64_t v36 = v29 + v6; // 0x403c68
                v33 = v31;
                v34 = true;
                if (v28 == 0) {
                    // break -> 
                    break;
                }
                v29 = v36;
                v30 = v35;
                v31 = *(char *)v29;
                v32 = *(char *)v30;
                v33 = v32;
                v34 = false;
            }
            unsigned char v37 = v33;
            uint64_t v38 = (int64_t)!((v31 < v37 | v34)) - (int64_t)(v31 < v37); // 0x403c6d
            if ((char)v38 == 0) {
                // 0x403c10
                g25 = v24 != 45;
                v17 = v38 % 256 | v26 & -256;
                v18 = v19;
                goto lab_0x403c1f;
            } else {
                // 0x403c9b
                str = (char *)v22;
                int64_t v39 = 0;
                str2 = (char *)(int64_t)"parenb";
                while (strcmp(str, str2) != 0) {
                    int64_t v40 = v39 + 1; // 0x403c80
                    int64_t v41 = *(int64_t *)(32 * v40 + (int64_t)&g10); // 0x403c8b
                    if (v41 == 0) {
                        // 0x403d60
                        v14 = 0;
                        v15 = (int64_t)"intr";
                        v16 = (int64_t)&g9;
                        if (v24 == 45) {
                            // 0x40421b
                            function_406670(v22 - 1);
                            v21 = (int64_t)"invalid argument %s";
                            goto lab_0x40440f;
                        } else {
                            goto lab_0x403d95;
                        }
                    }
                    v39 = v40;
                    str2 = (char *)v41;
                }
                int64_t v42 = 0x100000000 * v39 >> 27; // 0x403cad
                char v43 = *(char *)(v42 + (int64_t)&g10 + 12); // 0x403cb8
                if ((v43 & 16) == 0) {
                    if (v24 != 45) {
                        int64_t v44 = function_402750(*(int32_t *)(v42 + (int64_t)&g10 + 8)); // 0x403f9d
                        if (v44 == 0) {
                            // 0x40404a
                            if (strcmp(str2, "evenp") == 0) {
                                goto lab_0x4041e7;
                            } else {
                                // 0x40405f
                                if (strcmp(str2, "parity") == 0) {
                                    goto lab_0x4041e7;
                                } else {
                                    // 0x404074
                                    if (strcmp(str2, "oddp") == 0) {
                                        // 0x404316
                                        *v7 = *v7 & -817 | 800;
                                        v20 = v19;
                                        goto lab_0x403eb1;
                                    } else {
                                        goto lab_0x404089;
                                    }
                                }
                            }
                        } else {
                            int32_t v45 = *(int32_t *)(v42 + (int64_t)&g10 + 24); // 0x403fab
                            int32_t * v46 = (int32_t *)v44; // 0x403fb2
                            int32_t v47 = *(int32_t *)(v42 + (int64_t)&g10 + 16); // 0x403fb4
                            *v46 = *v46 & -1 - v45 | v47;
                            *(char *)a7 = 1;
                            v17 = v3;
                            v18 = v19;
                            goto lab_0x403c1f;
                        }
                    } else {
                        if ((v43 & 4) == 0) {
                            // 0x404210
                            *(char *)a7 = 1;
                            // 0x40421b
                            function_406670(v22 - 1);
                            v21 = (int64_t)"invalid argument %s";
                            goto lab_0x40440f;
                        }
                        int64_t v48 = function_402750(*(int32_t *)(v42 + (int64_t)&g10 + 8)); // 0x403ee3
                        if (v48 == 0) {
                            // 0x404267
                            if (strcmp(str2, "evenp") != 0) {
                                // 0x40435b
                                if (strcmp(str2, "parity") == 0) {
                                    goto lab_0x40427c;
                                } else {
                                    // 0x404370
                                    if (strcmp(str2, "oddp") == 0) {
                                        goto lab_0x40427c;
                                    } else {
                                        goto lab_0x404089;
                                    }
                                }
                            } else {
                                goto lab_0x40427c;
                            }
                        } else {
                            int64_t v49 = *(int64_t *)(v42 + (int64_t)&g10 + 16); // 0x403ef1
                            int32_t v50 = *(int32_t *)(v42 + (int64_t)&g10 + 24); // 0x403ef6
                            int32_t * v51 = (int32_t *)v48; // 0x403efd
                            *v51 = *v51 & -1 - (v50 | (int32_t)v49);
                            *(char *)a7 = 1;
                            v17 = v3;
                            v18 = v19;
                            goto lab_0x403c1f;
                        }
                    }
                } else {
                    goto lab_0x403cc6;
                }
            }
        }
    }
  lab_0x403d47_2:
    // 0x403d47
    return result;
  lab_0x4044f4:;
    // 0x4044f4
    int64_t v52; // 0x403bd0
    int64_t v53 = v52;
    unsigned char v54 = *(char *)(v53 + 12); // 0x4044f4
    if ((v54 & 16) != 0) {
        goto lab_0x4044e6;
    } else {
        uint64_t v55 = (int64_t)v54; // 0x4044f4
        if (v55 % 2 != 0) {
            int64_t v56 = function_402750(*(int32_t *)(v53 + 8)); // 0x4044cc
            if (v56 == 0) {
                // 0x4046aa
                __assert_fail("bitsp", "src/stty.c", 2251, "sane_mode");
            } else {
                int32_t * v57 = (int32_t *)v56; // 0x4044df
                int32_t v58 = *(int32_t *)(v53 + 16); // 0x4044e1
                *v57 = *v57 & -1 - *(int32_t *)(v53 + 24) | v58;
                goto lab_0x4044e6;
            }
        } else {
            if ((v55 & 2) == 0) {
                goto lab_0x4044e6;
            } else {
                int64_t v59 = function_402750(*(int32_t *)(v53 + 8)); // 0x40450c
                if (v59 == 0) {
                    // 0x4046c3
                    __assert_fail("bitsp", "src/stty.c", 2257, "sane_mode");
                } else {
                    int32_t v60 = *(int32_t *)(v53 + 24); // 0x40451e
                    int32_t * v61 = (int32_t *)v59; // 0x404523
                    *v61 = *v61 & -1 - (v60 | (int32_t)*(int64_t *)(v53 + 16));
                    goto lab_0x4044e6;
                }
            }
        }
    }
  lab_0x403c1f:;
    int64_t v62 = v18 + 1 & 0xffffffff; // 0x403c1f
    v13 = v62;
    result = v17;
    if (v4 <= v62) {
        return result;
    }
    goto lab_0x403c2c_2;
  lab_0x403c2c:
    // 0x403c2c
    goto lab_0x403c2c_2;
  lab_0x403cc6:;
    int64_t v63 = 7; // 0x403bd0
    int64_t v64 = v22;
    int64_t v65 = (int64_t)"ispeed";
    unsigned char v66 = *(char *)v64; // 0x403cd3
    char v67 = *(char *)v65; // 0x403cd3
    char v68 = v67; // 0x403cd3
    bool v69 = false; // 0x403cd3
    while (v66 == v67) {
        int64_t v70 = v63 - 1; // 0x403cd3
        int64_t v71 = v65 + v6; // 0x403cd3
        int64_t v72 = v64 + v6; // 0x403cd3
        v63 = v70;
        v68 = v66;
        v69 = true;
        if (v70 == 0) {
            // break -> 
            break;
        }
        v64 = v72;
        v65 = v71;
        v66 = *(char *)v64;
        v67 = *(char *)v65;
        v68 = v67;
        v69 = false;
    }
    unsigned char v73 = v68;
    int64_t v74 = v22; // 0x403cdc
    int64_t v75 = 7; // 0x403cdc
    int64_t v76; // 0x403bd0
    int64_t speed2; // 0x403bd0
    if ((v66 >= v73 && !v69) != v66 < v73) {
        int64_t v77 = v74;
        int64_t v78 = (int64_t)"ospeed";
        unsigned char v79 = *(char *)v77; // 0x403e55
        char v80 = *(char *)v78; // 0x403e55
        char v81 = v80; // 0x403e55
        bool v82 = false; // 0x403e55
        while (v79 == v80) {
            int64_t v83 = v75 - 1; // 0x403e55
            int64_t v84 = v78 + v6; // 0x403e55
            v74 = v77 + v6;
            v75 = v83;
            v81 = v79;
            v82 = true;
            if (v83 == 0) {
                // break -> 
                break;
            }
            v77 = v74;
            v78 = v84;
            v79 = *(char *)v77;
            v80 = *(char *)v78;
            v81 = v80;
            v82 = false;
        }
        unsigned char v85 = v81;
        int64_t v86 = v22; // 0x403e5e
        int64_t v87 = 5; // 0x403e5e
        if ((v79 >= v85 && !v82) != v79 < v85) {
            int64_t v88 = v86;
            int64_t v89 = (int64_t)"rows";
            unsigned char v90 = *(char *)v88; // 0x403f1d
            char v91 = *(char *)v89; // 0x403f1d
            char v92 = v91; // 0x403f1d
            bool v93 = false; // 0x403f1d
            while (v90 == v91) {
                int64_t v94 = v87 - 1; // 0x403f1d
                int64_t v95 = v89 + v6; // 0x403f1d
                v86 = v88 + v6;
                v87 = v94;
                v92 = v90;
                v93 = true;
                if (v94 == 0) {
                    // break -> 
                    break;
                }
                v88 = v86;
                v89 = v95;
                v90 = *(char *)v88;
                v91 = *(char *)v89;
                v92 = v91;
                v93 = false;
            }
            unsigned char v96 = v92;
            int64_t v97 = v22; // 0x403f26
            if ((v90 >= v96 && !v93) != v90 < v96) {
                int64_t v98 = v97;
                int64_t v99 = (int64_t)"cols";
                unsigned char v100 = *(char *)v98; // 0x403fd8
                char v101 = *(char *)v99; // 0x403fd8
                int64_t v102 = 4; // 0x403fd8
                char v103 = v101; // 0x403fd8
                bool v104 = false; // 0x403fd8
                while (v100 == v101) {
                    int64_t v105 = v99 + v6; // 0x403fd8
                    v97 = v98 + v6;
                    int64_t v106 = v102; // 0x403fd8
                    v103 = v100;
                    v104 = true;
                    if (v102 == 0) {
                        // break -> 
                        break;
                    }
                    v98 = v97;
                    v99 = v105;
                    v100 = *(char *)v98;
                    v101 = *(char *)v99;
                    v102 = v106 - 1;
                    v103 = v101;
                    v104 = false;
                }
                unsigned char v107 = v103;
                if ((v100 >= v107 && !v104) == v100 < v107) {
                    goto lab_0x403ff8;
                } else {
                    // 0x403fe3
                    if (strcmp(str, "columns") != 0) {
                        // 0x404140
                        if (strcmp(str, "size") == 0) {
                            // 0x404236
                            v17 = 0;
                            v18 = v19;
                            if ((char)a1 == 0) {
                                int64_t v108 = function_4026e0(); // 0x404241
                                g57 = 0;
                                g58 = v108;
                                v17 = function_402ca0(0, a2);
                                v18 = v19;
                            }
                            goto lab_0x403c1f;
                        } else {
                            // 0x404155
                            if (strcmp(str, "line") != 0) {
                                // 0x404298
                                if (strcmp(str, "speed") == 0) {
                                    // 0x404334
                                    v17 = 0;
                                    v18 = v19;
                                    if ((char)a1 == 0) {
                                        // 0x40433f
                                        g58 = function_4026e0();
                                        int64_t v109; // 0x403c3c
                                        v17 = function_402930(termios_p, 0, v109, v102);
                                        v18 = v19;
                                    }
                                    goto lab_0x403c1f;
                                } else {
                                    int64_t v110 = function_402680(v22); // 0x4042b0
                                    int32_t speed = v110; // 0x4042b8
                                    if (speed == -1) {
                                        int32_t * v111 = __errno_location(); // 0x404547
                                        int64_t v112 = v22; // 0x404552
                                        int64_t v113 = 0; // 0x404552
                                        int64_t str3 = v112;
                                        *v111 = 0;
                                        char * endptr; // bp-80, 0x403bd0
                                        int32_t str_as_ul = strtoul((char *)str3, &endptr, 16); // 0x404569
                                        int32_t v114 = *v111; // 0x40456e
                                        if (v114 != 0) {
                                            // 0x404631
                                            function_406670(v22);
                                            v21 = (int64_t)"invalid argument %s";
                                            goto lab_0x40440f;
                                        }
                                        char * v115 = endptr; // 0x404578
                                        int64_t v116 = (int64_t)v115; // 0x404578
                                        char v117 = *v115; // 0x40457d
                                        if (str3 == v116 || str_as_ul > -1 != (v117 == 58)) {
                                            // 0x404631
                                            function_406670(v22);
                                            v21 = (int64_t)"invalid argument %s";
                                            goto lab_0x40440f;
                                        }
                                        int64_t v118 = v113;
                                        int64_t v119; // 0x403bd0
                                        *(int32_t *)(v119 + 4 * v118) = str_as_ul;
                                        int64_t str4 = v116 + 1; // 0x4045a3
                                        v112 = str4;
                                        v113 = v118 + 1;
                                        while (v118 != 3) {
                                            // 0x404555
                                            str3 = v112;
                                            *v111 = 0;
                                            str_as_ul = strtoul((char *)str3, &endptr, 16);
                                            v114 = *v111;
                                            if (v114 != 0) {
                                                // 0x404631
                                                function_406670(v22);
                                                v21 = (int64_t)"invalid argument %s";
                                                goto lab_0x40440f;
                                            }
                                            // 0x404578
                                            v115 = endptr;
                                            v116 = (int64_t)v115;
                                            v117 = *v115;
                                            if (str3 == v116 || str_as_ul > -1 != (v117 == 58)) {
                                                // 0x404631
                                                function_406670(v22);
                                                v21 = (int64_t)"invalid argument %s";
                                                goto lab_0x40440f;
                                            }
                                            // 0x40459a
                                            v118 = v113;
                                            *(int32_t *)(v119 + 4 * v118) = str_as_ul;
                                            str4 = v116 + 1;
                                            v112 = str4;
                                            v113 = v118 + 1;
                                        }
                                        // 0x4045ad
                                        *v111 = 0;
                                        int32_t str_as_ul2 = strtoul((char *)str4, &endptr, 16); // 0x40460b
                                        int32_t v120 = *v111; // 0x404610
                                        int32_t v121 = str_as_ul2; // 0x404614
                                        char v122 = 58; // 0x404614
                                        int64_t v123 = 0; // 0x404614
                                        int64_t v124 = str4; // 0x404614
                                        if (v120 != 0) {
                                            // 0x404631
                                            function_406670(v22);
                                            v21 = (int64_t)"invalid argument %s";
                                            goto lab_0x40440f;
                                        }
                                        char v125 = v122;
                                        char * v126 = endptr; // 0x404616
                                        char v127 = *v126; // 0x40461b
                                        if (v127 != v125) {
                                            // 0x404631
                                            function_406670(v22);
                                            v21 = (int64_t)"invalid argument %s";
                                            goto lab_0x40440f;
                                        }
                                        int64_t v128 = v124;
                                        uint32_t v129 = v121;
                                        int64_t v130 = (int64_t)v126; // 0x404616
                                        if (v129 < 256 != v128 != v130) {
                                            // 0x404631
                                            function_406670(v22);
                                            v21 = (int64_t)"invalid argument %s";
                                            goto lab_0x40440f;
                                        }
                                        int64_t v131 = v123;
                                        *(char *)(v131 + v11) = (char)v129;
                                        v20 = v19;
                                        while (v131 != 31) {
                                            int64_t v132 = v131 + 1; // 0x4045dc
                                            int64_t str5 = v130 + 1; // 0x4045d3
                                            char v133 = v132 != 31 ? 58 : (char)(v128 == v130);
                                            *v111 = 0;
                                            int32_t str_as_ul3 = strtoul((char *)str5, &endptr, 16); // 0x40460b
                                            int32_t v134 = *v111; // 0x404610
                                            v121 = str_as_ul3;
                                            v122 = v133;
                                            v123 = v132;
                                            v124 = str5;
                                            if (v134 != 0) {
                                                // 0x404631
                                                function_406670(v22);
                                                v21 = (int64_t)"invalid argument %s";
                                                goto lab_0x40440f;
                                            }
                                            v125 = v122;
                                            v126 = endptr;
                                            v127 = *v126;
                                            if (v127 != v125) {
                                                // 0x404631
                                                function_406670(v22);
                                                v21 = (int64_t)"invalid argument %s";
                                                goto lab_0x40440f;
                                            }
                                            // 0x404620
                                            v128 = v124;
                                            v129 = v121;
                                            v130 = (int64_t)v126;
                                            if (v129 < 256 != v128 != v130) {
                                                // 0x404631
                                                function_406670(v22);
                                                v21 = (int64_t)"invalid argument %s";
                                                goto lab_0x40440f;
                                            }
                                            // 0x4045ce
                                            v131 = v123;
                                            *(char *)(v131 + v11) = (char)v129;
                                            v20 = v19;
                                        }
                                        goto lab_0x403eb1;
                                    } else {
                                        // 0x4042c1
                                        v17 = v110;
                                        v18 = v19;
                                        if ((char)a1 != 0) {
                                            goto lab_0x403c1f;
                                        } else {
                                            // 0x4042cc
                                            cfsetispeed((struct termios *)termios_p, speed);
                                            v76 = v19;
                                            speed2 = v110 & 0xffffffff;
                                            goto lab_0x403ea4;
                                        }
                                    }
                                }
                            } else {
                                if (-1 - (int32_t)v19 == v12) {
                                    // 0x4043fa
                                    function_406670(v22);
                                    v21 = (int64_t)"missing argument to %s";
                                    goto lab_0x40440f;
                                }
                                // 0x404179
                                int64_t v135; // bp-136, 0x403bd0
                                int64_t v136 = v135; // 0x404179
                                int64_t * v137 = (int64_t *)(v23 + 8 + v136); // 0x404187
                                int64_t v138 = *v137; // 0x404187
                                if (v138 == 0) {
                                    // 0x4043fa
                                    function_406670(v22);
                                    v21 = (int64_t)"missing argument to %s";
                                    goto lab_0x40440f;
                                }
                                int64_t v139 = v19 + 1 & 0xffffffff; // 0x404198
                                uint64_t v140 = function_402ab0(v138, -1); // 0x40419b
                                char * v141; // 0x403bd0
                                *v141 = (char)v140;
                                v20 = v139;
                                if (v140 >= 256) {
                                    int64_t v142 = *v137; // 0x4041b4
                                    function_406670(v142);
                                    error(0, (int32_t)"invalid line discipline %s" ^ (int32_t)"invalid line discipline %s", dcgettext(NULL, "invalid line discipline %s", 5));
                                    v20 = v139;
                                }
                                goto lab_0x403eb1;
                            }
                        }
                    } else {
                        goto lab_0x403ff8;
                    }
                }
            } else {
                if (-1 - (int32_t)v19 == v12) {
                    // 0x4043fa
                    function_406670(v22);
                    v21 = (int64_t)"missing argument to %s";
                    goto lab_0x40440f;
                }
                int64_t v143 = *(int64_t *)(v23 + 8 + a3); // 0x403f44
                if (v143 == 0) {
                    // 0x4043fa
                    function_406670(v22);
                    v21 = (int64_t)"missing argument to %s";
                    goto lab_0x40440f;
                }
                int64_t v144 = v19 + 1 & 0xffffffff; // 0x403f52
                v17 = a3;
                v18 = v144;
                if ((char)a1 == 0) {
                    // 0x403f60
                    v17 = function_402bd0(function_402ab0(v143, 0x7fffffff) & 0xffffffff, -1, a2);
                    v18 = v144;
                }
                goto lab_0x403c1f;
            }
        } else {
            if (-1 - (int32_t)v19 == v12) {
                // 0x4043fa
                function_406670(v22);
                v21 = (int64_t)"missing argument to %s";
                goto lab_0x40440f;
            }
            int64_t v145 = *(int64_t *)(v23 + 8 + a3); // 0x403e7c
            if (v145 == 0) {
                // 0x4043fa
                function_406670(v22);
                v21 = (int64_t)"missing argument to %s";
                goto lab_0x40440f;
            }
            int64_t v146 = v19 + 1 & 0xffffffff; // 0x403e8a
            v17 = a3;
            v18 = v146;
            if ((char)a1 != 0) {
                goto lab_0x403c1f;
            } else {
                // 0x403e98
                v76 = v146;
                speed2 = function_402680(v145);
                goto lab_0x403ea4;
            }
        }
    } else {
        if (-1 - (int32_t)v19 == v12) {
            // 0x4043fa
            function_406670(v22);
            v21 = (int64_t)"missing argument to %s";
            goto lab_0x40440f;
        }
        int64_t v147 = *(int64_t *)(v23 + 8 + a3); // 0x403cfa
        if (v147 == 0) {
            // 0x4043fa
            function_406670(v22);
            v21 = (int64_t)"missing argument to %s";
            goto lab_0x40440f;
        }
        // 0x403d08
        v17 = a3;
        v18 = v19 + 1 & 0xffffffff;
        if ((char)a1 != 0) {
            goto lab_0x403c1f;
        } else {
            int64_t v148 = v19 + 2 & 0xffffffff; // 0x403d20
            cfsetispeed((struct termios *)termios_p, (int32_t)function_402680(v147));
            *(char *)a6 = 1;
            *(char *)a7 = 1;
            v13 = v148;
            result = v3;
            if (v4 <= v148) {
                // break -> 0x403d47
                goto lab_0x403d47_2;
            }
            goto lab_0x403c2c;
        }
    }
  lab_0x4041e7:
    // 0x4041e7
    *v7 = *v7 & -817 | 288;
    *(char *)a7 = 1;
    v17 = v3;
    v18 = v19;
    goto lab_0x403c1f;
  lab_0x40427c:
    // 0x40427c
    *v7 = *v7 & -305 | 48;
    v20 = v19;
    goto lab_0x403eb1;
  lab_0x403eb1:
    // 0x403eb1
    *(char *)a7 = 1;
    v17 = v3;
    v18 = v20;
    goto lab_0x403c1f;
  lab_0x403ff8:
    if (-1 - (int32_t)v19 == v12) {
        // 0x4043fa
        function_406670(v22);
        v21 = (int64_t)"missing argument to %s";
        goto lab_0x40440f;
    }
    int64_t v149 = *(int64_t *)(v23 + 8 + a3); // 0x404010
    if (v149 == 0) {
        // 0x4043fa
        function_406670(v22);
        v21 = (int64_t)"missing argument to %s";
        goto lab_0x40440f;
    }
    int64_t v150 = v19 + 1 & 0xffffffff; // 0x40401e
    v17 = a3;
    v18 = v150;
    if ((char)a1 == 0) {
        // 0x40402c
        v17 = function_402bd0(0xffffffff, (int32_t)function_402ab0(v149, 0x7fffffff), a2);
        v18 = v150;
    }
    goto lab_0x403c1f;
  lab_0x403ea4:
    // 0x403ea4
    cfsetospeed((struct termios *)termios_p, (int32_t)speed2);
    *(char *)a6 = 1;
    v20 = v76;
    goto lab_0x403eb1;
  lab_0x404089:
    // 0x404089
    if (strcmp(str2, "nl") != 0) {
        // 0x4042e6
        if (strcmp(str2, "ek") != 0) {
            int32_t strcmp_rc = strcmp(str2, "sane"); // 0x40439d
            int64_t v151 = (int64_t)&g8; // 0x4043a4
            if (strcmp_rc == 0) {
                while (true) {
                    int64_t v152 = v151 + 24; // 0x4044b2
                    int64_t v153 = *(int64_t *)(v151 + 16); // 0x4044a5
                    *(char *)(v153 + v11) = *(char *)(v151 + 8);
                    v151 = v152;
                    v52 = (int64_t)&g10;
                    if (*(int64_t *)v152 == 0) {
                        goto lab_0x4044f4;
                    }
                }
                goto lab_0x403eb1;
            } else {
                // 0x4043aa
                if (strcmp(str2, "cbreak") != 0) {
                    // 0x40444c
                    if (strcmp(str2, "pass8") != 0) {
                        // 0x40464b
                        if (strcmp(str2, "litout") != 0) {
                            // 0x4046fa
                            if (strcmp(str2, "raw") == 0) {
                                goto lab_0x404752;
                            } else {
                                // 0x40470b
                                if (strcmp(str2, "cooked") == 0) {
                                    goto lab_0x404752;
                                } else {
                                    // 0x40471c
                                    if (strcmp(str2, "decctlq") != 0) {
                                        // 0x4047cf
                                        if (strcmp(str2, "tabs") != 0) {
                                            // 0x404803
                                            if (strcmp(str2, "lcase") == 0) {
                                                goto lab_0x4048b6;
                                            } else {
                                                // 0x404818
                                                if (strcmp(str2, "LCASE") == 0) {
                                                    goto lab_0x4048b6;
                                                } else {
                                                    // 0x40482d
                                                    if (strcmp(str2, "crt") != 0) {
                                                        // 0x404875
                                                        v20 = v19;
                                                        if (strcmp(str2, "dec") != 0) {
                                                            goto lab_0x403eb1;
                                                        } else {
                                                            // 0x40488a
                                                            *(int32_t *)termios_p = *(int32_t *)&v2 & -2049;
                                                            *(char *)v11 = 3;
                                                            *v9 = 0x157f;
                                                            *v10 = *v10 | 2576;
                                                            *(char *)a7 = 1;
                                                            v17 = v3;
                                                            v18 = v19;
                                                            goto lab_0x403c1f;
                                                        }
                                                    } else {
                                                        // 0x40483e
                                                        *v10 = *v10 | 2576;
                                                        *(char *)a7 = 1;
                                                        v17 = v3;
                                                        v18 = v19;
                                                        goto lab_0x403c1f;
                                                    }
                                                }
                                            }
                                        } else {
                                            int32_t v154 = *v8; // 0x4047e5
                                            if (v24 != 45) {
                                                // 0x40485a
                                                *v8 = v154 & -0x1801;
                                                *(char *)a7 = 1;
                                                v17 = v3;
                                                v18 = v19;
                                            } else {
                                                // 0x4047ed
                                                *v8 = v154 | 0x1800;
                                                *(char *)a7 = 1;
                                                v17 = v3;
                                                v18 = v19;
                                            }
                                            goto lab_0x403c1f;
                                        }
                                    } else {
                                        int32_t v155 = *(int32_t *)&v2; // 0x404736
                                        if (v24 != 45) {
                                            // 0x4047b5
                                            *(int32_t *)termios_p = v155 & -2049;
                                            *(char *)a7 = 1;
                                            v17 = v3;
                                            v18 = v19;
                                        } else {
                                            // 0x40473d
                                            *(int32_t *)termios_p = v155 | 2048;
                                            *(char *)a7 = 1;
                                            v17 = v3;
                                            v18 = v19;
                                        }
                                        goto lab_0x403c1f;
                                    }
                                }
                            }
                        } else {
                            int32_t v156 = *v7 & -305; // 0x404685
                            int32_t v157 = v156; // 0x40468d
                            if (v24 != 45) {
                                // 0x4046dc
                                *v7 = v157 | 48;
                                *termios_p = v2 & -0x100000021;
                                *(char *)a7 = 1;
                                v17 = v3;
                                v18 = v19;
                                goto lab_0x403c1f;
                            } else {
                                // 0x40468f
                                *termios_p = v2 | 0x100000020;
                                *v7 = v156 | 288;
                                *(char *)a7 = 1;
                                v17 = v3;
                                v18 = v19;
                                goto lab_0x403c1f;
                            }
                        }
                    } else {
                        int32_t v158 = *(int32_t *)&v2; // 0x404469
                        int32_t v159 = *v7 & -305; // 0x40446f
                        if (v24 != 45) {
                            // 0x404527
                            *v7 = v159 | 48;
                            *(int32_t *)termios_p = v158 & -33;
                            *(char *)a7 = 1;
                            v17 = v3;
                            v18 = v19;
                        } else {
                            // 0x40447d
                            *v7 = v159 | 288;
                            *(int32_t *)termios_p = v158 | 32;
                            *(char *)a7 = 1;
                            v17 = v3;
                            v18 = v19;
                        }
                        goto lab_0x403c1f;
                    }
                } else {
                    int32_t v160 = *v10; // 0x4043c4
                    if (v24 != 45) {
                        // 0x404431
                        *v10 = v160 & -3;
                        *(char *)a7 = 1;
                        v17 = v3;
                        v18 = v19;
                    } else {
                        // 0x4043cc
                        *v10 = v160 | 2;
                        *(char *)a7 = 1;
                        v17 = v3;
                        v18 = v19;
                    }
                    goto lab_0x403c1f;
                }
            }
        } else {
            // 0x4042fb
            *v9 = 0x157f;
            *(char *)a7 = 1;
            v17 = v3;
            v18 = v19;
            goto lab_0x403c1f;
        }
    } else {
        if (v24 != 45) {
            // 0x4043e2
            *termios_p = v2 & -0x400000101;
            *(char *)a7 = 1;
            v17 = v3;
            v18 = v19;
        } else {
            // 0x4040be
            *v8 = *v8 & -45 | 4;
            *(int32_t *)termios_p = *(int32_t *)&v2 & -449 | 256;
            *(char *)a7 = 1;
            v17 = v3;
            v18 = v19;
        }
        goto lab_0x403c1f;
    }
  lab_0x404752:;
    char v161 = *str2; // 0x404752
    if (v161 == 114) {
        if (v24 != 45) {
            goto lab_0x404763;
        } else {
            goto lab_0x404791;
        }
    } else {
        if (v24 != 45 == v161 == 99) {
            goto lab_0x404791;
        } else {
            goto lab_0x404763;
        }
    }
  lab_0x404763:
    // 0x404763
    *(int32_t *)termios_p = 0;
    *v8 = *v8 & -2;
    *v10 = *v10 & -8;
    *(int16_t *)(v1 + 22) = 256;
    *(char *)a7 = 1;
    v17 = v3;
    v18 = v19;
    goto lab_0x403c1f;
  lab_0x404791:
    // 0x404791
    *v10 = *v10 | 3;
    *termios_p = v2 | 0x100000526;
    *(char *)a7 = 1;
    v17 = v3;
    v18 = v19;
    goto lab_0x403c1f;
  lab_0x4048b6:;
    int32_t v162 = *v10; // 0x4048d4
    if (v24 != 45) {
        // 0x4048f5
        *v10 = v162 | 4;
        *termios_p = v2 | 0x200000200;
        *(char *)a7 = 1;
        v17 = v3;
        v18 = v19;
    } else {
        // 0x4048dc
        *termios_p = v2 & -0x200000201;
        *v10 = v162 & -5;
        *(char *)a7 = 1;
        v17 = v3;
        v18 = v19;
    }
    goto lab_0x403c1f;
  lab_0x403d95:;
    int64_t str6 = v15;
    int64_t v163 = v14;
    int64_t v164; // 0x403bd0
    int64_t v165; // 0x403bd0
    int64_t v166; // 0x403bd0
    int64_t v167; // 0x403dbc
    if (strcmp(str, (char *)str6) != 0) {
        int64_t v168 = *(int64_t *)v16; // 0x403d84
        v14 = v163 + 1 & 0xffffffff;
        v15 = v168;
        v16 += 24;
        if (v168 == 0) {
            goto lab_0x403cc6;
        } else {
            goto lab_0x403d95;
        }
    } else {
        if (-1 - (int32_t)v19 == v12) {
            // 0x4043fa
            function_406670(v22);
            v21 = (int64_t)"missing argument to %s";
            goto lab_0x40440f;
        } else {
            // 0x403db3
            v167 = *(int64_t *)(v23 + 8 + a3);
            if (v167 == 0) {
                // 0x4043fa
                function_406670(v22);
                v21 = (int64_t)"missing argument to %s";
                goto lab_0x40440f;
            } else {
                // 0x403dca
                v165 = (int64_t)"min";
                v166 = str6;
                v164 = 4;
                goto lab_dec_label_pc_unknown;
            }
        }
    }
  lab_0x40440f:
    // 0x40440f
    error(0, 0, dcgettext(NULL, (char *)v21, 5));
    function_402d90(1);
    // UNREACHABLE
  lab_dec_label_pc_unknown:;
    int64_t v169 = v166;
    int64_t v170 = v165;
    unsigned char v171 = *(char *)v169; // 0x403dda
    char v172 = *(char *)v170; // 0x403dda
    char v173 = v172; // 0x403dda
    bool v174 = false; // 0x403dda
    if (v171 == v172) {
        int64_t v175 = v164 - 1; // 0x403dda
        v165 = v170 + v6;
        v166 = v169 + v6;
        v164 = v175;
        v173 = v171;
        v174 = true;
        if (v175 == 0) {
            goto lab_dec_label_pc_unknown_3;
        } else {
            goto lab_dec_label_pc_unknown;
        }
    } else {
        goto lab_dec_label_pc_unknown_3;
    }
  lab_dec_label_pc_unknown_3:;
    unsigned char v176 = v173;
    int64_t v177 = (int64_t)"time"; // 0x403df2
    int64_t v178 = str6; // 0x403df2
    int64_t v179 = 5; // 0x403df2
    int64_t v180; // 0x403bd0
    if ((v171 >= v176 && !v174) == v171 < v176) {
        // 0x403f7e
        v180 = function_402ab0(v167, 255);
        goto lab_0x403e25;
    } else {
        goto lab_0x403df8;
    }
  lab_0x403df8:;
    int64_t v181 = v178;
    int64_t v182 = v177;
    unsigned char v183 = *(char *)v181; // 0x403e05
    char v184 = *(char *)v182; // 0x403e05
    char v185 = v184; // 0x403e05
    bool v186 = false; // 0x403e05
    if (v183 == v184) {
        int64_t v187 = v179 - 1; // 0x403e05
        v177 = v182 + v6;
        v178 = v181 + v6;
        v179 = v187;
        v185 = v183;
        v186 = true;
        if (v187 == 0) {
            goto lab_dec_label_pc_unknown_4;
        } else {
            goto lab_0x403df8;
        }
    } else {
        goto lab_dec_label_pc_unknown_4;
    }
  lab_0x403e25:;
    int64_t v188 = 0x100000000 * v163;
    int64_t v189 = *(int64_t *)(8 * ((v188 >> 32) + (v188 >> 31)) + (int64_t)&g8 + 16); // 0x403e25
    *(char *)(v189 + v11) = (char)v180;
    *(char *)a7 = 1;
    v17 = v3;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x403c1f;
  lab_dec_label_pc_unknown_4:;
    unsigned char v190 = v185;
    if ((v183 >= v190 && !v186) == v183 < v190) {
        // 0x403f7e
        v180 = function_402ab0(v167, 255);
        goto lab_0x403e25;
    } else {
        char * str7 = (char *)v167; // 0x403e14
        unsigned char v191 = *str7; // 0x403e14
        int64_t v192 = v191; // 0x403e14
        v180 = v192;
        if (v191 != 0) {
            char v193 = *(char *)(v167 + 1); // 0x4040e2
            v180 = v192;
            if (v193 == 0) {
                goto lab_0x403e25;
            } else {
                // 0x4040f0
                v180 = 0;
                if (strcmp(str7, "^-") == 0) {
                    goto lab_0x403e25;
                } else {
                    // 0x404108
                    v180 = 0;
                    if (strcmp(str7, "undef") == 0) {
                        goto lab_0x403e25;
                    } else {
                        if (v191 != 94) {
                            // 0x403f7e
                            v180 = function_402ab0(v167, 255);
                            goto lab_0x403e25;
                        } else {
                            // 0x404127
                            v180 = 127;
                            if (v193 == 63) {
                                goto lab_0x403e25;
                            } else {
                                // 0x404131
                                v180 = v193 & -97;
                                goto lab_0x403e25;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x403e25;
        }
    }
  lab_0x4044e6:;
    int64_t v194 = v53 + 32; // 0x4044e6
    v20 = v19;
    v52 = v194;
    if (*(int64_t *)v194 == 0) {
        goto lab_0x403eb1;
    } else {
        goto lab_0x4044f4;
    }
}
// Address range: 0x404920 - 0x404928
int64_t function_404920(int64_t a1) {
    // 0x404920
    g60 = a1;
    int64_t result; // 0x404920
    return result;
}
// Address range: 0x404930 - 0x404938
int64_t function_404930(int64_t a1) {
    // 0x404930
    g59 = a1;
    int64_t result; // 0x404930
    return result;
}
// Address range: 0x404940 - 0x4049de
int64_t function_404940(void) {
    // 0x404940
    int32_t * err_num; // 0x404956
    if ((int32_t)function_408b40((int64_t)g36) == 0) {
        goto lab_0x40496c;
    } else {
        // 0x404956
        err_num = __errno_location();
        if (g59 == 0) {
            goto lab_0x404983;
        } else {
            // 0x404967
            if (*err_num != 32) {
                goto lab_0x404983;
            } else {
                goto lab_0x40496c;
            }
        }
    }
  lab_0x40496c:;
    int64_t result = function_408b40((int64_t)g38); // 0x404973
    if ((int32_t)result == 0) {
        // 0x40497c
        return result;
    }
    // 0x4049be
    _exit(g26);
    // UNREACHABLE
  lab_0x404983:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40498f
    if (g60 == 0) {
        // 0x4049c9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4049a3
        error(0, *err_num, "%s: %s", (char *)function_4064c0((int64_t)g60), v1);
    }
    // 0x4049be
    _exit(g26);
    // UNREACHABLE
}
// Address range: 0x4049e0 - 0x404a4a
int64_t function_4049e0(int32_t fd2, int64_t path, int64_t oflag, int32_t a4) {
    int32_t fd = open((char *)path, (int32_t)oflag); // 0x4049f5
    if (fd != fd2 != fd >= 0) {
        // 0x404a04
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x404a1c
    int32_t * v1 = __errno_location(); // 0x404a24
    close(fd);
    return result;
}
// Address range: 0x404a50 - 0x404ae9
int64_t function_404a50(int64_t str) {
    // 0x404a50
    if (str == 0) {
        // 0x404ac9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g38);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x404a5e
    int64_t result = (int64_t)found_char_pos; // 0x404a5e
    if (found_char_pos == NULL) {
        // 0x404ab9
        g61 = str;
        g37 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x404a68
    if (v1 - str < 7) {
        // 0x404ab9
        g61 = str;
        g37 = str;
        return result;
    }
    // 0x404a78
    bool v2; // 0x404a50
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x404a50
    int64_t v5 = result - 6; // 0x404a50
    int64_t v6 = 7; // 0x404a86
    unsigned char v7 = *(char *)v5; // 0x404a86
    char v8 = *(char *)v4; // 0x404a86
    char v9 = v8; // 0x404a86
    bool v10 = false; // 0x404a86
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
    int64_t v12 = (int64_t)"lt-"; // 0x404a90
    int64_t v13 = v1; // 0x404a90
    int64_t v14 = 3; // 0x404a90
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x404ab9
        g61 = str;
        g37 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x404aa2
    char v16 = *(char *)v12; // 0x404aa2
    char v17 = v16; // 0x404aa2
    bool v18 = false; // 0x404aa2
    while (v15 == v16) {
        // 0x404a92
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
    int64_t v20 = v1; // 0x404aac
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x404aae
        v20 = result + 4;
        g35 = v20;
    }
    // 0x404ab9
    g61 = v20;
    g37 = v20;
    return result;
}
// Address range: 0x404af0 - 0x404be2
int64_t function_404af0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404b04
    int64_t result = (int64_t)v1; // 0x404b04
    if (result != a1) {
        // 0x404b11
        return result;
    }
    int64_t v2 = function_408c00(); // 0x404b20
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x404bd6
    if (v3 == 85) {
        // 0x404b30
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x404bc8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g16 : (int64_t)&g11;
            return result2;
        }
        char v4 = *v1; // 0x404b5e
        int64_t result3 = v4 != 96 ? (int64_t)&g12 : (int64_t)&g15; // 0x404b6b
        // 0x404b11
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x404bc8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g16 : (int64_t)&g11;
        return result2;
    }
    char v5 = *v1; // 0x404bad
    int64_t result4 = v5 != 96 ? (int64_t)&g13 : (int64_t)&g14; // 0x404bba
    // 0x404b11
    return result4;
}
// Address range: 0x404bf0 - 0x404c47
int64_t function_404bf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x404bf0
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x404c47 - 0x405e11
int64_t function_404c47(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x404c91
    int64_t v3 = 0; // 0x404c91
    int64_t v4; // 0x404c47
    int64_t v5; // 0x404c47
    int64_t v6; // 0x404c47
    int64_t v7; // 0x404c47
    int64_t v8; // 0x404c47
    int64_t v9; // 0x404c47
    int64_t v10; // 0x404c47
    int64_t v11; // 0x404c47
    int64_t v12; // 0x404c47
    int64_t v13; // 0x404c47
    int64_t v14; // 0x404c47
    int64_t v15; // 0x404c47
    int64_t v16; // 0x404c47
    int64_t v17; // 0x404c47
    int64_t v18; // 0x404c47
    int64_t result; // 0x404c47
    int64_t v19; // 0x404c47
    int32_t wc; // bp+132, 0x404c47
    int64_t ps; // bp+136, 0x404c47
    char v20; // 0x405200
    int64_t v21; // 0x405200
    int64_t v22; // 0x4055a8
    int64_t v23; // 0x404c47
    int64_t v24; // 0x4055c7
    int32_t v25; // 0x404c47
    while (true) {
      lab_0x404c98_2:
        // 0x404c98
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404c47
        int64_t v27; // 0x404ccc
        while (true) {
          lab_0x404c98:
            // 0x404c98
            v5 = v26;
            bool v28 = v15 == v5; // 0x404ca3
            if (v15 == -1) {
                // 0x404ca5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x404cb3
            if (v28) {
                // break (via goto) -> 0x405418
                goto lab_0x405418;
            }
            // 0x404cbc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g81 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4052ab
                    if (v25 % 2 == 0) {
                        goto lab_0x404df1;
                    }
                    // 0x4056cd
                    v26 = v5 + 1;
                    goto lab_0x404c98;
                }
                case 7: {
                    goto lab_0x404df1;
                }
                case 8: {
                    goto lab_0x404df1;
                }
                case 9: {
                    goto lab_0x40500a_2;
                }
                case 10: {
                    goto lab_0x40500a_2;
                }
                case 11: {
                    goto lab_0x404df1;
                }
                case 12: {
                    goto lab_0x404df1;
                }
                case 13: {
                    goto lab_0x40500a_2;
                }
                case 32: {
                    goto lab_0x40500a_2;
                }
                case 33: {
                    goto lab_0x40500a_2;
                }
                case 34: {
                    goto lab_0x40500a_2;
                }
                case 35: {
                    goto lab_0x404dbd;
                }
                case 36: {
                    goto lab_0x40500a_2;
                }
                case 37: {
                    goto lab_0x404df1;
                }
                case 38: {
                    goto lab_0x40500a_2;
                }
                case 39: {
                    goto lab_0x40500a_2;
                }
                case 40: {
                    goto lab_0x40500a_2;
                }
                case 41: {
                    goto lab_0x40500a_2;
                }
                case 42: {
                    goto lab_0x40500a_2;
                }
                case 43: {
                    goto lab_0x404df1;
                }
                case 44: {
                    goto lab_0x404df1;
                }
                case 45: {
                    goto lab_0x404df1;
                }
                case 46: {
                    goto lab_0x404df1;
                }
                case 47: {
                    goto lab_0x404df1;
                }
                case 48: {
                    goto lab_0x404df1;
                }
                case 49: {
                    goto lab_0x404df1;
                }
                case 50: {
                    goto lab_0x404df1;
                }
                case 51: {
                    goto lab_0x404df1;
                }
                case 52: {
                    goto lab_0x404df1;
                }
                case 53: {
                    goto lab_0x404df1;
                }
                case 54: {
                    goto lab_0x404df1;
                }
                case 55: {
                    goto lab_0x404df1;
                }
                case 56: {
                    goto lab_0x404df1;
                }
                case 57: {
                    goto lab_0x404df1;
                }
                case 58: {
                    goto lab_0x404df1;
                }
                case 59: {
                    goto lab_0x40500a_2;
                }
                case 60: {
                    goto lab_0x40500a_2;
                }
                case 61: {
                    goto lab_0x40500a_2;
                }
                case 62: {
                    goto lab_0x40500a_2;
                }
                case 63: {
                    goto lab_0x40500a_2;
                }
                case 65: {
                    goto lab_0x404df1;
                }
                case 66: {
                    goto lab_0x404df1;
                }
                case 67: {
                    goto lab_0x404df1;
                }
                case 68: {
                    goto lab_0x404df1;
                }
                case 69: {
                    goto lab_0x404df1;
                }
                case 70: {
                    goto lab_0x404df1;
                }
                case 71: {
                    goto lab_0x404df1;
                }
                case 72: {
                    goto lab_0x404df1;
                }
                case 73: {
                    goto lab_0x404df1;
                }
                case 74: {
                    goto lab_0x404df1;
                }
                case 75: {
                    goto lab_0x404df1;
                }
                case 76: {
                    goto lab_0x404df1;
                }
                case 77: {
                    goto lab_0x404df1;
                }
                case 78: {
                    goto lab_0x404df1;
                }
                case 79: {
                    goto lab_0x404df1;
                }
                case 80: {
                    goto lab_0x404df1;
                }
                case 81: {
                    goto lab_0x404df1;
                }
                case 82: {
                    goto lab_0x404df1;
                }
                case 83: {
                    goto lab_0x404df1;
                }
                case 84: {
                    goto lab_0x404df1;
                }
                case 85: {
                    goto lab_0x404df1;
                }
                case 86: {
                    goto lab_0x404df1;
                }
                case 87: {
                    goto lab_0x404df1;
                }
                case 88: {
                    goto lab_0x404df1;
                }
                case 89: {
                    goto lab_0x404df1;
                }
                case 90: {
                    goto lab_0x404df1;
                }
                case 91: {
                    goto lab_0x40500a_2;
                }
                case 92: {
                    goto lab_0x40500a_2;
                }
                case 93: {
                    goto lab_0x404df1;
                }
                case 94: {
                    goto lab_0x40500a_2;
                }
                case 95: {
                    goto lab_0x404df1;
                }
                case 96: {
                    goto lab_0x40500a_2;
                }
                case 97: {
                    goto lab_0x404df1;
                }
                case 98: {
                    goto lab_0x404df1;
                }
                case 99: {
                    goto lab_0x404df1;
                }
                case 100: {
                    goto lab_0x404df1;
                }
                case 101: {
                    goto lab_0x404df1;
                }
                case 102: {
                    goto lab_0x404df1;
                }
                case 103: {
                    goto lab_0x404df1;
                }
                case 104: {
                    goto lab_0x404df1;
                }
                case 105: {
                    goto lab_0x404df1;
                }
                case 106: {
                    goto lab_0x404df1;
                }
                case 107: {
                    goto lab_0x404df1;
                }
                case 108: {
                    goto lab_0x404df1;
                }
                case 109: {
                    goto lab_0x404df1;
                }
                case 110: {
                    goto lab_0x404df1;
                }
                case 111: {
                    goto lab_0x404df1;
                }
                case 112: {
                    goto lab_0x404df1;
                }
                case 113: {
                    goto lab_0x404df1;
                }
                case 114: {
                    goto lab_0x404df1;
                }
                case 115: {
                    goto lab_0x404df1;
                }
                case 116: {
                    goto lab_0x404df1;
                }
                case 117: {
                    goto lab_0x404df1;
                }
                case 118: {
                    goto lab_0x404df1;
                }
                case 119: {
                    goto lab_0x404df1;
                }
                case 120: {
                    goto lab_0x404df1;
                }
                case 121: {
                    goto lab_0x404df1;
                }
                case 122: {
                    goto lab_0x404df1;
                }
                case 123: {
                    goto lab_0x404d95;
                }
                case 124: {
                    goto lab_0x40500a_2;
                }
                case 125: {
                    goto lab_0x404d95;
                }
                case 126: {
                    goto lab_0x404dbd;
                }
                default: {
                    goto lab_0x405195;
                }
            }
        }
      lab_0x405195:
        if (v23 != 1) {
            // 0x405500
            ps = 0;
            int64_t len = v15; // 0x405510
            if (v15 == -1) {
                // 0x405512
                len = strlen((char *)str);
            }
            // 0x40553e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40559f:
                // 0x40559f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4055a4
                int64_t v30 = v29 + str;
                v24 = function_408a60(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x405b1a_2;
                    }
                    case -1: {
                        goto lab_0x405b1a_2;
                    }
                    case -2: {
                        // 0x405bfd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405c37
                            v19 = v18;
                            int64_t v31 = v18; // 0x405c3a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405c47
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405c40
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x405b1a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x405b1a_2;
                    }
                    case 1: {
                        goto lab_0x405570;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40561c
                        char v34 = *(char *)v33; // 0x40562d
                        unsigned char v35; // 0x404c47
                        if (v34 < 125) {
                            // 0x405638
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40564f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40500a_2;
                            }
                        }
                        // 0x405620
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40562d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x405638
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40564f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40500a_2;
                                }
                            }
                            // 0x405620
                            v33++;
                        }
                        goto lab_0x405570;
                    }
                }
            }
            goto lab_0x405b1a_2;
        } else {
            // 0x4051e4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404df1;
        }
    }
  lab_0x405418:
    // 0x405418
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x405d1a
        if (v8 > result) {
            // 0x405d23
            *(char *)(v12 + result) = 0;
        }
        // 0x405047
        return result;
    }
    goto lab_0x40500a_2;
  lab_0x404df1:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x404e00
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40500a_2;
        }
    }
    int64_t v42 = result; // 0x404f01
    char v43 = v20; // 0x404f01
    int64_t v44 = v58; // 0x404f01
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x404f01
    int64_t v46 = v56; // 0x404f01
    goto lab_0x404e7d;
  lab_0x40500a_2:;
    // 0x405047
    char * v36; // 0x404c47
    return function_404bf0(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x405b1a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x404df1;
    } else {
        uint64_t v40 = v37 + v5; // 0x4056ee
        int64_t v41 = v5 + 1; // 0x4057d1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x4057d8
        char v48 = v20; // 0x4057d8
        int64_t v49 = result; // 0x4057d8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x4057a1
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x4057a5
            int64_t v52 = v50 + 1; // 0x4057aa
            int64_t v53 = v47 + 1; // 0x4057d1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40579c
                v50 = v52;
                if (v38 > v50) {
                    // 0x4057a1
                    *(char *)(v50 + v39) = v51;
                }
                // 0x4057a5
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
        goto lab_0x404e7d;
    }
  lab_0x405570:
    // 0x405570
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40558f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405592
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x405b1a
        goto lab_0x405b1a_2;
    }
    goto lab_0x40559f;
  lab_0x404dbd:
    // 0x404dbd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40500a_2;
    }
    goto lab_0x404df1;
  lab_0x404d95:;
    bool v61 = v15 == 1; // 0x404da0
    if (v15 == -1) {
        // 0x404da2
        v61 = *(char *)v1 == 0;
    }
    // 0x404dae
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x404df1;
    } else {
        goto lab_0x404dbd;
    }
  lab_0x404e7d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x404e82
        *(char *)(v59 + v60) = v43;
    }
    // 0x404e86
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x404c98_2;
}
// Address range: 0x405e20 - 0x405fbe
int64_t function_405e20(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405e22
    int32_t * v3 = __errno_location(); // 0x405e3c
    int64_t v4 = (int64_t)g28; // 0x405e41
    int32_t v5 = *v3; // 0x405e4b
    int64_t v6 = v4; // 0x405e61
    if (v2 >= (int64_t)*(int32_t *)&g31) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x405fb9
            function_406e80(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405e70
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405e77
        int64_t v9; // 0x405e20
        if (g28 == &g29) {
            int64_t v10 = function_406c90(0, v8); // 0x405f9a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g29); // 0x405f9f
            *(int64_t *)&g28 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406c90(v4, v8); // 0x405e8b
            *(int64_t *)&g28 = v12;
            v9 = v12;
        }
        // 0x405e9a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g31; // 0x405e9a
        int32_t v14 = v7; // 0x405ea1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g31 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x405ed1
    int64_t v17 = v15 + 8; // 0x405ed4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x405edb
    int64_t * v19 = (int64_t *)v16; // 0x405ede
    uint64_t v20 = *v19; // 0x405ede
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x405ee1
    int64_t result = *v21; // 0x405ee1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x405eec
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x405ef5
    int64_t v24; // 0x405e20
    uint64_t v25 = function_404bf0(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x405f04
    if (v20 > v25) {
        // 0x405f7b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x405f17
    *v19 = v26;
    if (result != (int64_t)&g62) {
        // 0x405f27
        free((int64_t *)result);
    }
    int64_t result2 = function_406c30(v26); // 0x405f41
    *v21 = result2;
    int64_t v27 = *v22; // 0x405f5b
    int64_t v28 = *v23; // 0x405f5e
    int64_t v29; // 0x405e20
    function_404bf0(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x405f7b
    *v3 = v5;
    return result2;
}
// Address range: 0x405fc0 - 0x405ff4
int64_t function_405fc0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405fc7
    int64_t result = function_406e30(a1 == 0 ? (int64_t)&g63 : a1, 56); // 0x405fe6
    return result;
}
// Address range: 0x406000 - 0x40600f
int64_t function_406000(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g63 : a1); // 0x40600c
    return result;
}
// Address range: 0x406010 - 0x40601f
int64_t function_406010(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 : a1; // 0x406018
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g63;
}
// Address range: 0x406020 - 0x406053
int64_t function_406020(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 + 8 : a1 + 8; // 0x406039
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40603e
    uint32_t v3 = *v2; // 0x40603e
    uint32_t v4 = (int32_t)a2 % 32; // 0x406042
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x406060 - 0x406073
int64_t function_406060(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g63 + 4 : a1 + 4); // 0x40606c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406080 - 0x4060ab
int64_t function_406080(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g63 : a1; // 0x406088
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4060a5
        abort();
        // UNREACHABLE
    }
    // 0x40609c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g63;
}
// Address range: 0x4060b0 - 0x406122
int64_t function_4060b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g63 : a5; // 0x4060d2
    int32_t * v2 = __errno_location(); // 0x4060db
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x4060f4
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x4060f8
    uint32_t v5 = *(int32_t *)v1; // 0x4060fb
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x406101
    int64_t result = function_404bf0(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40610a
    return result;
}
// Address range: 0x406130 - 0x406211
int64_t function_406130(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g63 : a4; // 0x406152
    int32_t * v2 = __errno_location(); // 0x406158
    int64_t v3 = v1 + 8; // 0x40616f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x406177
    int32_t * v5 = (int32_t *)v1; // 0x40617a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x406188
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40618b
    int64_t v8 = function_404bf0(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x406195
    int64_t v9 = v8 + 1; // 0x40619a
    int64_t result = function_406c30(v9); // 0x4061af
    function_404bf0(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x4061f4
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x4061fd
    return result;
}
// Address range: 0x406220 - 0x40622a
int64_t function_406220(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406220
    return function_406130(a1, a2, 0, a3);
}
// Address range: 0x406230 - 0x4062c5
int64_t function_406230(void) {
    uint32_t v1 = *(int32_t *)&g31; // 0x406230
    int64_t v2 = v1; // 0x406230
    int64_t v3 = v2; // 0x406244
    if (v1 >= 2) {
        int64_t v4 = &g31;
        int64_t v5 = v4 + 16; // 0x406263
        free((int64_t *)*(int64_t *)v4);
        v3 = &g73;
        while (v5 != (int64_t)g28 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x406260
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g73;
        }
    }
    int64_t v6 = v3; // 0x40627d
    if (g29 != 0x613400) {
        // 0x40627f
        free((int64_t *)g29);
        g29 = 256;
        *(int64_t *)&g30 = (int64_t)&g62;
        v6 = &g73;
    }
    int64_t result = v6; // 0x4062a1
    if (g28 != &g29) {
        // 0x4062a3
        free(g28);
        *(int64_t *)&g28 = (int64_t)&g29;
        result = &g73;
    }
    // 0x4062b6
    *(int32_t *)&g31 = 1;
    return result;
}
// Address range: 0x4062d0 - 0x4062e1
int64_t function_4062d0(void) {
    // 0x4062d0
    int64_t v1; // 0x4062d0
    return function_405e20(v1, v1, -1, (int64_t *)&g63);
}
// Address range: 0x4062f0 - 0x4062fa
int64_t function_4062f0(void) {
    // 0x4062f0
    int64_t v1; // 0x4062f0
    return function_405e20(v1, v1, v1, (int64_t *)&g63);
}
// Address range: 0x406300 - 0x406316
int64_t function_406300(int64_t a1) {
    // 0x406300
    return function_405e20(0, a1, -1, (int64_t *)&g63);
}
// Address range: 0x406320 - 0x406332
int64_t function_406320(int64_t a1, int64_t a2) {
    // 0x406320
    return function_405e20(0, a1, a2, (int64_t *)&g63);
}
// Address range: 0x406340 - 0x4063a8
int64_t function_406340(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406350
    return function_405e20((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4063b0 - 0x406414
int64_t function_4063b0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4063c0
    return function_405e20((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x406420 - 0x40642c
int64_t function_406420(int64_t a1, int64_t a2) {
    // 0x406420
    return function_406340(0, a1 & 0xffffffff, a2);
}
// Address range: 0x406430 - 0x40643f
int64_t function_406430(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406430
    return function_4063b0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x406440 - 0x4064b0
int64_t function_406440(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g63); // 0x40644d
    int128_t v2 = __asm_movdqa(g64); // 0x406455
    int128_t v3 = __asm_movdqa(g65); // 0x40645d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x406472
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x406488
    uint32_t v6 = *v5; // 0x406488
    uint32_t v7 = (int32_t)a3 % 32; // 0x40648d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405e20(0, a1, a2, &v4);
}
// Address range: 0x4064b0 - 0x4064bd
int64_t function_4064b0(int64_t a1, int64_t a2) {
    // 0x4064b0
    return function_406440(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4064c0 - 0x4064d1
int64_t function_4064c0(int64_t a1) {
    // 0x4064c0
    return function_406440(a1, -1, 58);
}
// Address range: 0x4064e0 - 0x4064ea
int64_t function_4064e0(void) {
    // 0x4064e0
    int64_t v1; // 0x4064e0
    return function_406440(v1, v1, 58);
}
// Address range: 0x4064f0 - 0x40655e
int64_t function_4064f0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40650a
    return function_405e20((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406560 - 0x4065cc
int64_t function_406560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g63); // 0x406567
    int128_t v2 = __asm_movdqa(g64); // 0x40656f
    int128_t v3 = __asm_movdqa(g65); // 0x406577
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x406599
    if (a2 == 0 || a3 == 0) {
        // 0x4065c7
        abort();
        // UNREACHABLE
    }
    // 0x4065aa
    return function_405e20(a1, a4, a5, &v4);
}
// Address range: 0x4065d0 - 0x4065d9
int64_t function_4065d0(void) {
    // 0x4065d0
    int64_t v1; // 0x4065d0
    return function_406560(v1, v1, v1, v1, -1);
}
// Address range: 0x4065e0 - 0x4065f7
int64_t function_4065e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4065e0
    return function_406560(0, a1, a2, a3, -1);
}
// Address range: 0x406600 - 0x406613
int64_t function_406600(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x406600
    return function_406560(0, a1, a2, a3, a4);
}
// Address range: 0x406620 - 0x40662a
int64_t function_406620(void) {
    // 0x406620
    int64_t v1; // 0x406620
    return function_405e20(v1, v1, v1, &g27);
}
// Address range: 0x406630 - 0x406642
int64_t function_406630(int64_t a1, int64_t a2) {
    // 0x406630
    return function_405e20(0, a1, a2, &g27);
}
// Address range: 0x406650 - 0x406661
int64_t function_406650(void) {
    // 0x406650
    int64_t v1; // 0x406650
    return function_405e20(v1, v1, -1, &g27);
}
// Address range: 0x406670 - 0x406686
int64_t function_406670(int64_t a1) {
    // 0x406670
    return function_405e20(0, a1, -1, &g27);
}
// Address range: 0x406690 - 0x406a6d
int64_t function_406690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x406728
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4066ac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4066c6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40670b
    if (a6 < 10) {
        // 0x40671a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x406812
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406a70 - 0x406a90
int64_t function_406a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406a70
    if (a5 == 0) {
        // 0x406a8b
        return function_406690(a1, a2, a3, a4, a5, 0, (int64_t)&g73);
    }
    int64_t v1 = 0; // 0x406a77
    v1++;
    int64_t v2 = v1; // 0x406a89
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406a80
        v1++;
        v2 = v1;
    }
    // 0x406a8b
    return function_406690(a1, a2, a3, a4, a5, v2, (int64_t)&g73);
}
// Address range: 0x406a90 - 0x406af0
int64_t function_406a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406a90
    int64_t v3 = &v2; // 0x406a90
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406ac3
    int64_t v6; // 0x406aad
    int64_t * v7; // 0x406acb
    int64_t v8; // 0x406acb
    int64_t v9; // 0x406ad7
    if (v5 < 48) {
        // 0x406aa0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406ae3
            break;
        }
    } else {
        // 0x406acb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406ae3
            break;
        }
    }
    int64_t v10 = 10; // 0x406ac1
    while (v4 != 9) {
        // 0x406ab9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406aa0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406ae3
                break;
            }
        } else {
            // 0x406acb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406ae3
                break;
            }
        }
        // 0x406ab9
        v10 = 10;
    }
    // 0x406ae3
    return function_406690(a1, a2, a3, a4, v3, v10, (int64_t)&g73);
}
// Address range: 0x406af0 - 0x406bac
int64_t function_406af0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x406af0
    int64_t v1; // bp-168, 0x406af0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406af0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406af0
    int64_t v8; // 0x406af0
    int64_t v9; // bp-56, 0x406af0
    int64_t v10; // 0x406b55
    int64_t v11; // 0x406b79
    if ((int32_t)v6 < 48) {
        // 0x406b40
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406b90
            break;
        }
    } else {
        // 0x406b72
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406b90
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x406b6a
    int64_t v13 = 10; // 0x406b6a
    while (v5 != 9) {
        // 0x406b6c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x406b40
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406b90
                break;
            }
        } else {
            // 0x406b72
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406b90
                break;
            }
        }
        // 0x406b62
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406b90
    int64_t v14; // bp-136, 0x406af0
    int64_t result = function_406690(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g73); // 0x406b9f
    return result;
}
// Address range: 0x406bb0 - 0x406c24
int64_t function_406bb0(int64_t a1) {
    // 0x406bb0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406c13
    return fputs_unlocked(v1, g36);
}
// Address range: 0x406c30 - 0x406c4a
int64_t function_406c30(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406c34
    if (size != 0 != (mem == NULL)) {
        // 0x406c43
        return (int64_t)mem;
    }
    // 0x406c45
    function_406e80(size);
    // UNREACHABLE
}
// Address range: 0x406c50 - 0x406c71
int64_t function_406c50(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406c53
    int64_t v2 = v1; // 0x406c53
    if (v2 < 0) {
        // 0x406c6b
        function_406e80(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406c69
        return function_406c30(v2);
    }
    // 0x406c6b
    function_406e80(v2);
    // UNREACHABLE
}
// Address range: 0x406c80 - 0x406c82
int64_t function_406c80(void) {
    // 0x406c80
    int64_t v1; // 0x406c80
    return function_406c30(v1);
}
// Address range: 0x406c90 - 0x406cc6
int64_t function_406c90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406cb8
        free(v1);
        return (int32_t)&g73 ^ (int32_t)&g73;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406ca1
    if (a2 != 0 != (mem == NULL)) {
        // 0x406cb0
        return (int64_t)mem;
    }
    // 0x406cc1
    function_406e80(a1);
    // UNREACHABLE
}
// Address range: 0x406cd0 - 0x406cf1
int64_t function_406cd0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406cd3
    int64_t v2 = v1; // 0x406cd3
    if (v2 < 0) {
        // 0x406ceb
        function_406e80(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406ce9
        return function_406c90(a1, v2);
    }
    // 0x406ceb
    function_406e80(a1);
    // UNREACHABLE
}
// Address range: 0x406d00 - 0x406d86
int64_t function_406d00(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x406d5b
            function_406e80(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406c90(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406d43
    if (a2 == 0) {
        // 0x406d68
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406d48
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x406d5b
        function_406e80(a1);
        // UNREACHABLE
    }
    // 0x406d2a
    *(int64_t *)a2 = v2;
    return function_406c90(a1, v2 * a3);
}
// Address range: 0x406d90 - 0x406de0
int64_t function_406d90(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406d90
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x406dda
            function_406e80(a1);
            // UNREACHABLE
        }
        // 0x406db2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406c90(a1, v1);
    }
    if (a2 == 0) {
        // 0x406dc5
        *(int64_t *)a2 = 128;
        return function_406c90(0, 128);
    }
    // 0x406dd8
    if (a2 < 0) {
        // 0x406dda
        function_406e80(a1);
        // UNREACHABLE
    }
    // 0x406db2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406c90(a1, v1);
}
// Address range: 0x406de0 - 0x406df7
int64_t function_406de0(int64_t a1, int64_t a2) {
    // 0x406de0
    return (int64_t)memset((int64_t *)function_406c30(a1), 0, (int32_t)a1);
}
// Address range: 0x406e00 - 0x406e2e
int64_t function_406e00(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406e07
    if ((int64_t)v1 < 0) {
        // 0x406e29
        function_406e80(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406e29
        function_406e80(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x406e1a
    if (mem != NULL) {
        // 0x406e24
        return (int64_t)mem;
    }
    // 0x406e29
    function_406e80(nmemb);
    // UNREACHABLE
}
// Address range: 0x406e30 - 0x406e58
int64_t function_406e30(int64_t a1, int64_t a2) {
    int64_t v1 = function_406c30(a2); // 0x406e3f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406e60 - 0x406e73
int64_t function_406e60(int64_t str) {
    // 0x406e60
    return function_406e30(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406e80 - 0x406eb1
int64_t function_406e80(int64_t a1) {
    // 0x406e80
    error(g26, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406ec0 - 0x406f90
int64_t function_406ec0(int64_t a1, uint32_t a2, int32_t a3, uint64_t a4, char * a5, int64_t a6, int64_t a7) {
    // 0x406ec0
    int64_t result2; // bp-64, 0x406ec0
    int64_t v1 = function_407710(a1, 0, (int64_t)a2, &result2, (int64_t)a5, a6); // 0x406ee7
    int32_t v2 = v1; // 0x406eec
    int32_t * v3; // 0x406ec0
    if (v2 != 0) {
        int32_t * v4 = __errno_location(); // 0x406f6a
        if (v2 == 1) {
            // 0x406f88
            *v4 = 75;
            v3 = v4;
        } else {
            // 0x406f77
            v3 = v4;
            if (v2 == 3) {
                // 0x406f7c
                *v4 = 0;
                v3 = v4;
            }
        }
    } else {
        uint64_t result = result2; // 0x406ef0
        if (result >= (int64_t)a3 && result <= a4) {
            // 0x406f52
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x406eff
        *v5 = result < 0x40000000 ? 34 : 75;
        v3 = v5;
    }
    int64_t v6 = function_406670(a1); // 0x406f1c
    int32_t v7 = *v3; // 0x406f21
    int32_t err_num = v7 == 22 ? 0 : v7; // 0x406f37
    int32_t v8 = a7; // 0x406f3a
    error(v8 == 0 ? 1 : v8, err_num, "%s: %s", (char *)a6, (char *)v6);
    // 0x406f52
    return result2;
}
// Address range: 0x406f90 - 0x406fb1
int64_t function_406f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406f90
    return function_406ec0(a1, 10, (int32_t)a2, a3, (char *)a4, a5, a6);
}
// Address range: 0x406fc0 - 0x407710
int64_t function_406fc0(int64_t a1, int32_t a2, uint32_t base, int64_t * a4, int64_t * str2) {
    if (base >= 37) {
        // 0x4076e9
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtol");
        return &g73;
    }
    // 0x406fdb
    int64_t v1; // bp-64, 0x406fc0
    int64_t endptr = a2 == 0 ? (int64_t)&v1 : (int64_t)a2; // 0x406fe8
    int32_t * v2 = __errno_location(); // 0x406ff2
    *v2 = 0;
    char * str = (char *)a1;
    int32_t str_as_l = strtol(str, (char **)endptr, base); // 0x407008
    int64_t * v3 = (int64_t *)endptr; // 0x40700d
    int64_t v4 = *v3; // 0x40700d
    int64_t v5; // 0x406fc0
    int64_t v6; // 0x406fc0
    int64_t v7; // 0x406fc0
    char v8; // 0x406fc0
    int64_t v9; // 0x406fc0
    int64_t v10; // 0x406fc0
    int64_t v11; // 0x406fc0
    if (v4 == a1) {
        // 0x407068
        if (str2 == NULL) {
            // 0x40703c
            return 4;
        }
        char c = *str; // 0x407071
        if (c == 0) {
            // 0x40703c
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x40708f
        v10 = 1;
        v6 = 0;
        v8 = c;
        if (found_char_pos == NULL) {
            // 0x40703c
            return 4;
        }
        goto lab_0x40709d;
    } else {
        int32_t v12 = *v2; // 0x407018
        int64_t v13 = 0; // 0x40701e
        if (v12 != 0) {
            // 0x407050
            v13 = 1;
            if (v12 != 34) {
                // 0x40703c
                return 4;
            }
        }
        int64_t v14 = str_as_l; // 0x407008
        v9 = v14;
        v5 = v13;
        if (str2 == NULL) {
            goto lab_0x407035;
        } else {
            char c2 = *(char *)v4; // 0x407028
            v9 = v14;
            v5 = v13;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x407137
                v10 = v14;
                v6 = v13;
                v8 = c2;
                v11 = v14;
                v7 = v13;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40709d;
                } else {
                    goto lab_0x407145;
                }
            } else {
                goto lab_0x407035;
            }
        }
    }
  lab_0x40709d:;
    int64_t v15 = v6;
    int64_t v16 = v10;
    unsigned char v17 = v8 - 69;
    int64_t v18 = 1024; // 0x4070a4
    int64_t v19 = 1; // 0x4070a4
    int64_t v20; // 0x406fc0
    int64_t v21; // 0x406fc0
    int64_t v22; // 0x406fc0
    int64_t v23; // 0x406fc0
    int64_t v24; // 0x406fc0
    int64_t v25; // 0x406fc0
    int64_t v26; // 0x406fc0
    int64_t v27; // 0x406fc0
    int64_t v28; // 0x406fc0
    int64_t v29; // 0x406fc0
    int64_t v30; // 0x406fc0
    int64_t v31; // 0x406fc0
    int64_t v32; // 0x406fc0
    int64_t v33; // 0x406fc0
    int64_t v34; // 0x406fc0
    int64_t v35; // 0x406fc0
    int64_t v36; // 0x406fc0
    int64_t v37; // 0x406fc0
    int64_t v38; // 0x406fc0
    if (v17 < 48) {
        // 0x4070d0
        v18 = 1024;
        v19 = 1;
        if ((1 << (int64_t)((v8 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4070b0;
        } else {
            // 0x4070e4
            v18 = 1024;
            v19 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x4070b0;
            } else {
                // 0x4070f6
                v18 = 1000;
                v19 = 2;
                switch (*(char *)(v4 + 1)) {
                    case 68: {
                        goto lab_0x4070b0;
                    }
                    case 105: {
                        char v39 = *(char *)(v4 + 2); // 0x4076d2
                        v18 = 1024;
                        v19 = (v39 == 66 ? 2 : 1) + (int64_t)(v39 == 66);
                        goto lab_0x4070b0;
                    }
                    default: {
                        // 0x40710b
                        g75 = v17;
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
                                goto lab_0x407398;
                            }
                            case 70: {
                                goto lab_0x407145;
                            }
                            case 71: {
                                goto lab_0x407400;
                            }
                            case 72: {
                                goto lab_0x407145;
                            }
                            case 73: {
                                goto lab_0x407145;
                            }
                            case 74: {
                                goto lab_0x407145;
                            }
                            case 75: {
                                goto lab_0x4071e5;
                            }
                            case 76: {
                                goto lab_0x407145;
                            }
                            case 77: {
                                goto lab_0x407228;
                            }
                            case 78: {
                                goto lab_0x407145;
                            }
                            case 79: {
                                goto lab_0x407145;
                            }
                            case 80: {
                                goto lab_0x4072c8;
                            }
                            case 81: {
                                goto lab_0x407145;
                            }
                            case 82: {
                                goto lab_0x407145;
                            }
                            case 83: {
                                goto lab_0x407145;
                            }
                            case 84: {
                                goto lab_0x407330;
                            }
                            case 85: {
                                goto lab_0x407145;
                            }
                            case 86: {
                                goto lab_0x407145;
                            }
                            case 87: {
                                goto lab_0x407145;
                            }
                            case 88: {
                                goto lab_0x407145;
                            }
                            case 89: {
                                goto lab_0x407468;
                            }
                            case 90: {
                                goto lab_0x4074d0;
                            }
                            case 91: {
                                goto lab_0x407145;
                            }
                            case 92: {
                                goto lab_0x407145;
                            }
                            case 93: {
                                goto lab_0x407145;
                            }
                            case 94: {
                                goto lab_0x407145;
                            }
                            case 95: {
                                goto lab_0x407145;
                            }
                            case 96: {
                                goto lab_0x407145;
                            }
                            case 97: {
                                goto lab_0x407145;
                            }
                            case 98: {
                                goto lab_0x407295;
                            }
                            case 99: {
                                goto lab_0x407188;
                            }
                            case 100: {
                                goto lab_0x407145;
                            }
                            case 101: {
                                goto lab_0x407145;
                            }
                            case 102: {
                                goto lab_0x407145;
                            }
                            case 103: {
                                goto lab_0x407400;
                            }
                            case 104: {
                                goto lab_0x407145;
                            }
                            case 105: {
                                goto lab_0x407145;
                            }
                            case 106: {
                                goto lab_0x407145;
                            }
                            case 107: {
                                goto lab_0x4071e5;
                            }
                            case 108: {
                                goto lab_0x407145;
                            }
                            case 109: {
                                goto lab_0x407228;
                            }
                            case 110: {
                                goto lab_0x407145;
                            }
                            case 111: {
                                goto lab_0x407145;
                            }
                            case 112: {
                                goto lab_0x407145;
                            }
                            case 113: {
                                goto lab_0x407145;
                            }
                            case 114: {
                                goto lab_0x407145;
                            }
                            case 115: {
                                goto lab_0x407145;
                            }
                            case 116: {
                                goto lab_0x407330;
                            }
                            default: {
                                goto lab_0x4070b0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4070b0;
    }
  lab_0x407035:
    // 0x407035
    *a4 = v9;
    // 0x40703c
    return v5 & 0xffffffff;
  lab_0x4070b0:
    // 0x4070b0
    g74 = v8 - 66;
    v11 = v16;
    v7 = v15;
    v21 = v16;
    v28 = v19;
    v20 = v15;
    v34 = v19;
    switch (v8) {
        case 66: {
            // 0x407181
            v21 = 1024 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x407188;
        }
        case 69: {
            // 0x407380
            v25 = v18;
            v32 = v19;
            v37 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x407398;
        }
        case 71: {
            goto lab_0x407400;
        }
        case 75: {
            goto lab_0x4071e5;
        }
        case 77: {
            goto lab_0x407210;
        }
        case 80: {
            // 0x4072b0
            v23 = v18;
            v30 = v19;
            v36 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x4072c8;
        }
        case 84: {
            goto lab_0x407318;
        }
        case 89: {
            // 0x407450
            goto lab_0x407468;
        }
        case 90: {
            // 0x4074b8
            v26 = v18;
            v27 = v19;
            v35 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x4074d0;
        }
        case 98: {
            goto lab_0x407295;
        }
        case 99: {
            goto lab_0x407188;
        }
        case 103: {
            goto lab_0x407400;
        }
        case 107: {
            goto lab_0x4071e5;
        }
        case 109: {
            goto lab_0x407210;
        }
        case 116: {
            goto lab_0x407318;
        }
        case 119: {
            // 0x4071c9
            v21 = 2 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x407188;
        }
        default: {
            goto lab_0x407145;
        }
    }
    // 0x4073e8
    goto lab_0x407400;
    // 0x4071d0
    goto lab_0x4071e5;
  lab_0x407210:
    // 0x407210
    v22 = v18;
    v29 = v19;
    v33 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x407228;
  lab_0x407318:
    // 0x407318
    v24 = v18;
    v31 = v19;
    v38 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x407330;
  lab_0x407295:
    // 0x407295
    v21 = 512 * v16;
    v28 = v34;
    v20 = v15;
    goto lab_0x407188;
  lab_0x407188:;
    int64_t v59 = v20;
    int64_t v60 = v28 + v4; // 0x407188
    *v3 = v60;
    v9 = v21;
    v5 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x407035;
  lab_0x407145:
    // 0x407145
    *a4 = v11;
    // 0x40703c
    return (v7 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x407398:;
    uint64_t v61 = v25;
    int64_t v62 = v16;
    int64_t v63 = -0x8000000000000000; // 0x4073d1
    int64_t v64 = 1; // 0x4073d1
    if (v62 >= v37) {
        // 0x4073b0
        v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
        v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : 0;
    }
    int32_t v65 = 5; // 0x4073c5
    int32_t v66 = v65; // 0x4073c8
    int64_t v67 = v64; // 0x4073c8
    int64_t v55 = v63; // 0x4073c8
    int64_t v57 = v32; // 0x4073c8
    int64_t v58 = v64; // 0x4073c8
    while (v65 != 0) {
        // 0x4073ce
        v62 = v63;
        v63 = -0x8000000000000000;
        v64 = 1;
        if (v62 >= v37) {
            // 0x4073b0
            v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
            v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : v67;
        }
        // 0x4073c5
        v65 = v66 - 1;
        v66 = v65;
        v67 = v64;
        v55 = v63;
        v57 = v32;
        v58 = v64;
    }
    goto lab_0x407600;
  lab_0x407400:
    // 0x407400
    while (true) {
        // 0x407436
        int32_t v40; // 0x406fc0
        int32_t v41 = v40;
        int64_t v42; // 0x406fc0
        int64_t v43 = v42;
        int64_t v44 = -0x8000000000000000; // 0x407439
        int64_t v45 = 1; // 0x407439
        int64_t v46; // 0x406fc0
        uint64_t v47; // 0x406fc0
        if (v43 >= v47) {
            int64_t v48 = v46;
            uint64_t v49; // 0x406fc0
            int64_t v50 = v43 > 0x7fffffffffffffff / v49 ? 0x7fffffffffffffff : v43 * v49;
            int64_t v51 = v43 > 0x7fffffffffffffff / v49 ? 1 : v48;
            v44 = v50;
            v45 = v51;
        }
        int64_t v52 = v45;
        int64_t v53 = v44;
        int32_t v54 = v41 - 1; // 0x40742d
        v42 = v53;
        v40 = v54;
        v46 = v52;
        v55 = v53;
        int64_t v56; // 0x406fc0
        v57 = v56;
        v58 = v52;
        if (v54 == 0) {
            // break -> 0x407600
            break;
        }
    }
    goto lab_0x407600;
  lab_0x4071e5:;
    int64_t v72 = 1;
    v21 = -0x8000000000000000;
    v28 = v72;
    v20 = 1;
    int64_t v69; // 0x406fc0
    int64_t v70; // 0x406fc0
    int64_t v71; // 0x406fc0
    int64_t v68; // 0x406fc0
    if (v16 < -0x20000000000000) {
        goto lab_0x407188;
    } else {
        int64_t v73 = 1024;
        v69 = 0x7fffffffffffffff / v73;
        v71 = v73;
        v70 = v16;
        v68 = v72;
        goto lab_0x4071fc;
    }
  lab_0x407228:
    // 0x407228
    v21 = -0x8000000000000000;
    v28 = v29;
    v20 = 1;
    if (v16 < v33) {
        goto lab_0x407188;
    } else {
        int64_t v74 = 0x7fffffffffffffff / v22;
        v21 = 0x7fffffffffffffff;
        v28 = v29;
        v20 = 1;
        if (v16 > v74) {
            goto lab_0x407188;
        } else {
            int64_t v75 = v22 * v16; // 0x407248
            v21 = -0x8000000000000000;
            v28 = v29;
            v20 = 1;
            v69 = v74;
            v71 = v22;
            v70 = v75;
            v68 = v29;
            if (v75 < v33) {
                goto lab_0x407188;
            } else {
                goto lab_0x4071fc;
            }
        }
    }
  lab_0x4072c8:;
    uint64_t v76 = v23;
    int64_t v77 = v16;
    int64_t v78 = -0x8000000000000000; // 0x407301
    int64_t v79 = 1; // 0x407301
    if (v36 <= v77) {
        // 0x4072e0
        v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
        v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : 0;
    }
    int32_t v80 = 4; // 0x4072f5
    int32_t v81 = v80; // 0x4072f8
    int64_t v82 = v79; // 0x4072f8
    v55 = v78;
    v57 = v30;
    v58 = v79;
    while (v80 != 0) {
        // 0x4072fe
        v77 = v78;
        v78 = -0x8000000000000000;
        v79 = 1;
        if (v36 <= v77) {
            // 0x4072e0
            v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
            v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : v82;
        }
        // 0x4072f5
        v80 = v81 - 1;
        v81 = v80;
        v82 = v79;
        v55 = v78;
        v57 = v30;
        v58 = v79;
    }
    goto lab_0x407600;
  lab_0x407330:;
    uint64_t v83 = v24;
    int64_t v84 = v16;
    int64_t v85 = -0x8000000000000000; // 0x407369
    int64_t v86 = 1; // 0x407369
    if (v38 <= v84) {
        // 0x407348
        v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
        v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : 0;
    }
    int32_t v87 = 3; // 0x40735d
    int32_t v88 = v87; // 0x407360
    int64_t v89 = v86; // 0x407360
    v55 = v85;
    v57 = v31;
    v58 = v86;
    while (v87 != 0) {
        // 0x407366
        v84 = v85;
        v85 = -0x8000000000000000;
        v86 = 1;
        if (v38 <= v84) {
            // 0x407348
            v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
            v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : v89;
        }
        // 0x40735d
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v55 = v85;
        v57 = v31;
        v58 = v86;
    }
    goto lab_0x407600;
  lab_0x407468:
    // 0x407468
    while (true) {
        // 0x40749e
        int32_t v90; // 0x406fc0
        int32_t v91 = v90;
        int64_t v92; // 0x406fc0
        int64_t v93 = v92;
        int64_t v94 = -0x8000000000000000; // 0x4074a1
        int64_t v95 = 1; // 0x4074a1
        int64_t v96; // 0x406fc0
        uint64_t v97; // 0x406fc0
        if (v97 <= v93) {
            int64_t v98 = v96;
            uint64_t v99; // 0x406fc0
            int64_t v100 = v93 > 0x7fffffffffffffff / v99 ? 0x7fffffffffffffff : v93 * v99;
            int64_t v101 = v93 > 0x7fffffffffffffff / v99 ? 1 : v98;
            v94 = v100;
            v95 = v101;
        }
        int64_t v102 = v95;
        int64_t v103 = v94;
        int32_t v104 = v91 - 1; // 0x407495
        v92 = v103;
        v90 = v104;
        v96 = v102;
        v55 = v103;
        int64_t v105; // 0x406fc0
        v57 = v105;
        v58 = v102;
        if (v104 == 0) {
            // break -> 0x407600
            break;
        }
    }
    goto lab_0x407600;
  lab_0x4074d0:;
    uint64_t v106 = v26;
    int64_t v107 = v16;
    int64_t v108 = -0x8000000000000000; // 0x407509
    int64_t v109 = 1; // 0x407509
    if (v35 <= v107) {
        // 0x4074e8
        v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
        v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : 0;
    }
    int32_t v110 = 6; // 0x4074fd
    int32_t v111 = v110; // 0x407500
    int64_t v112 = v109; // 0x407500
    v55 = v108;
    v57 = v27;
    v58 = v109;
    while (v110 != 0) {
        // 0x407506
        v107 = v108;
        v108 = -0x8000000000000000;
        v109 = 1;
        if (v35 <= v107) {
            // 0x4074e8
            v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
            v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : v112;
        }
        // 0x4074fd
        v110 = v111 - 1;
        v111 = v110;
        v112 = v109;
        v55 = v108;
        v57 = v27;
        v58 = v109;
    }
    goto lab_0x407600;
  lab_0x407600:
    // 0x407600
    v21 = v55;
    v28 = v57;
    v20 = (v58 | v15) & 0xffffffff;
    goto lab_0x407188;
  lab_0x4071fc:
    // 0x4071fc
    v21 = 0x7fffffffffffffff;
    v28 = v68;
    v20 = 1;
    if (v69 >= v70) {
        // 0x407205
        v21 = v70 * v71;
        v28 = v68;
        v20 = v15;
    }
    goto lab_0x407188;
}
// Address range: 0x407710 - 0x407b50
int64_t function_407710(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40771e
    if (v1 >= 37) {
        // 0x407b2b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g73;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x407742
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x407772
    int64_t v4 = a1; // 0x407777
    char v5 = c; // 0x407777
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x40776c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x407768
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x407779
    if (v5 == 45) {
        // 0x4077b5
        return 4;
    }
    // 0x40777e
    int64_t v7; // bp-64, 0x407710
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x40773e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x407786
    int64_t * v10 = (int64_t *)v8; // 0x40778b
    int64_t v11 = *v10; // 0x40778b
    char v12; // 0x407710
    int64_t v13; // 0x407710
    int64_t v14; // 0x407710
    int64_t v15; // 0x407710
    int64_t v16; // 0x407710
    int64_t v17; // 0x407710
    int64_t v18; // 0x407710
    if (v11 == a1) {
        // 0x4077e8
        if (c == 0 || str == 0) {
            // 0x4077b5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x407809
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x4077b5
            return 4;
        }
        goto lab_0x407817;
    } else {
        int32_t v19 = *v2; // 0x407796
        int64_t v20 = 0; // 0x40779c
        if (v19 != 0) {
            // 0x4077d0
            v20 = 1;
            if (v19 != 34) {
                // 0x4077b5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x407786
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x4077b2;
        } else {
            char c2 = *(char *)v11; // 0x4077a5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x407913
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407817;
                } else {
                    goto lab_0x407925;
                }
            } else {
                goto lab_0x4077b2;
            }
        }
    }
  lab_0x407817:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40781f
    int64_t v24 = 1; // 0x40781f
    int64_t v25; // 0x407710
    int64_t v26; // 0x407710
    int64_t v27; // 0x407710
    int64_t v28; // 0x407710
    int64_t v29; // 0x407710
    int64_t v30; // 0x407710
    int64_t v31; // 0x407710
    int64_t v32; // 0x407710
    int64_t v33; // 0x407710
    int64_t v34; // 0x407710
    int64_t v35; // 0x407710
    int64_t v36; // 0x407710
    int64_t v37; // 0x407710
    int64_t v38; // 0x407710
    int64_t v39; // 0x407710
    int64_t v40; // 0x407710
    int64_t v41; // 0x407710
    int64_t v42; // 0x407710
    int64_t v43; // 0x407710
    int64_t v44; // 0x407710
    if (v22 < 48) {
        // 0x407821
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40788a;
        } else {
            // 0x407834
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40788a;
            } else {
                // 0x407850
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x40788a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x407ab9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x40788a;
                    }
                    default: {
                        // 0x407865
                        g76 = v22;
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
                                goto lab_0x407a2b;
                            }
                            case 70: {
                                goto lab_0x407925;
                            }
                            case 71: {
                                goto lab_0x407a63;
                            }
                            case 72: {
                                goto lab_0x407925;
                            }
                            case 73: {
                                goto lab_0x407925;
                            }
                            case 74: {
                                goto lab_0x407925;
                            }
                            case 75: {
                                goto lab_0x4078ec;
                            }
                            case 76: {
                                goto lab_0x407925;
                            }
                            case 77: {
                                goto lab_0x4078ae;
                            }
                            case 78: {
                                goto lab_0x407925;
                            }
                            case 79: {
                                goto lab_0x407925;
                            }
                            case 80: {
                                goto lab_0x4079f8;
                            }
                            case 81: {
                                goto lab_0x407925;
                            }
                            case 82: {
                                goto lab_0x407925;
                            }
                            case 83: {
                                goto lab_0x407925;
                            }
                            case 84: {
                                goto lab_0x4079c8;
                            }
                            case 85: {
                                goto lab_0x407925;
                            }
                            case 86: {
                                goto lab_0x407925;
                            }
                            case 87: {
                                goto lab_0x407925;
                            }
                            case 88: {
                                goto lab_0x407925;
                            }
                            case 89: {
                                goto lab_0x407996;
                            }
                            case 90: {
                                goto lab_0x40795b;
                            }
                            case 91: {
                                goto lab_0x407925;
                            }
                            case 92: {
                                goto lab_0x407925;
                            }
                            case 93: {
                                goto lab_0x407925;
                            }
                            case 94: {
                                goto lab_0x407925;
                            }
                            case 95: {
                                goto lab_0x407925;
                            }
                            case 96: {
                                goto lab_0x407925;
                            }
                            case 97: {
                                goto lab_0x407925;
                            }
                            case 98: {
                                goto lab_0x40793f;
                            }
                            case 99: {
                                goto lab_0x4078c8;
                            }
                            case 100: {
                                goto lab_0x407925;
                            }
                            case 101: {
                                goto lab_0x407925;
                            }
                            case 102: {
                                goto lab_0x407925;
                            }
                            case 103: {
                                goto lab_0x407a63;
                            }
                            case 104: {
                                goto lab_0x407925;
                            }
                            case 105: {
                                goto lab_0x407925;
                            }
                            case 106: {
                                goto lab_0x407925;
                            }
                            case 107: {
                                goto lab_0x4078ec;
                            }
                            case 108: {
                                goto lab_0x407925;
                            }
                            case 109: {
                                goto lab_0x4078ae;
                            }
                            case 110: {
                                goto lab_0x407925;
                            }
                            case 111: {
                                goto lab_0x407925;
                            }
                            case 112: {
                                goto lab_0x407925;
                            }
                            case 113: {
                                goto lab_0x407925;
                            }
                            case 114: {
                                goto lab_0x407925;
                            }
                            case 115: {
                                goto lab_0x407925;
                            }
                            case 116: {
                                goto lab_0x4079c8;
                            }
                            default: {
                                goto lab_0x40788a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40788a;
    }
  lab_0x4077b2:
    // 0x4077b2
    *a4 = v16;
    // 0x4077b5
    return v13 & 0xffffffff;
  lab_0x40788a:
    // 0x40788a
    g77 = v12 - 66;
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
    int64_t v46; // 0x407710
    switch (v12) {
        case 66: {
            // 0x407a84
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x4078f7;
            } else {
                // 0x407a91
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x4078c8;
            }
        }
        case 69: {
            goto lab_0x407a2b;
        }
        case 71: {
            goto lab_0x407a63;
        }
        case 75: {
            goto lab_0x4078ec;
        }
        case 77: {
            goto lab_0x4078ae;
        }
        case 80: {
            goto lab_0x4079f8;
        }
        case 84: {
            goto lab_0x4079c8;
        }
        case 89: {
            goto lab_0x407996;
        }
        case 90: {
            goto lab_0x40795b;
        }
        case 98: {
            goto lab_0x40793f;
        }
        case 99: {
            goto lab_0x4078c8;
        }
        case 103: {
            goto lab_0x407a63;
        }
        case 107: {
            goto lab_0x4078ec;
        }
        case 109: {
            goto lab_0x4078ae;
        }
        case 116: {
            goto lab_0x4079c8;
        }
        case 119: {
            // 0x407930
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x4078f7;
            } else {
                // 0x407935
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x4078c8;
            }
        }
        default: {
            goto lab_0x407925;
        }
    }
  lab_0x407a2b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x407a43
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x407a4f
    int64_t v51 = v48; // 0x407a52
    int64_t v52 = v37; // 0x407a52
    int64_t v53 = v49; // 0x407a52
    int32_t v54 = v50; // 0x407a52
    int64_t v55 = v49; // 0x407a52
    while (v50 != 0) {
        // 0x407a40
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
    goto lab_0x407984;
  lab_0x407a63:
    // 0x407a63
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x407a6e
        int128_t v56; // 0x407a69
        uint128_t v57; // 0x407a69
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x407a6e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x407710
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x407a73
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x407a78
                v26 = v60;
                int64_t v61; // 0x407710
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x4078c8;
  lab_0x4078ec:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x4078ef
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x4078c8;
    } else {
        goto lab_0x4078f7;
    }
  lab_0x4078ae:;
    int128_t v65 = v27; // 0x4078b4
    uint128_t v66 = v65 * (int128_t)v17; // 0x4078b4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x4078f7;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x4078b9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x4078f7;
        } else {
            // 0x4078be
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x4078c8;
        }
    }
  lab_0x4079f8:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x407a0b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x407a17
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x407a1a
    int64_t v73 = v70; // 0x407a1a
    while (v71 != 0) {
        // 0x407a08
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
    goto lab_0x407984;
  lab_0x4079c8:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x4079db
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x4079e7
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x4079ea
    int64_t v79 = v76; // 0x4079ea
    while (v77 != 0) {
        // 0x4079d8
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
    goto lab_0x407984;
  lab_0x407996:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x4079ab
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x4079b7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x4079ba
    int64_t v85 = v82; // 0x4079ba
    while (v83 != 0) {
        // 0x4079a8
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
    goto lab_0x407984;
  lab_0x40795b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x407973
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x40797f
    int32_t v90 = v89; // 0x407982
    int64_t v91 = v88; // 0x407982
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x407970
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
    goto lab_0x407984;
  lab_0x40793f:
    // 0x40793f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x4078f7;
    } else {
        // 0x407948
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x4078c8;
    }
  lab_0x4078c8:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x4078cd
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x4077b2;
  lab_0x407925:
    // 0x407925
    *a4 = v18;
    // 0x4077b5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4078f7:
    // 0x4078f7
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x4078c8;
  lab_0x407984:
    // 0x407984
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x4078c8;
}
// Address range: 0x407b50 - 0x407c85
int64_t function_407b50(int32_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x407b80
    if (cmd != 1030) {
        // 0x407c30
        return fcntl(fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x407b8c
    int64_t v2; // 0x407b50
    if (g66 < 0) {
        int64_t v3 = function_407b50(fd, 0, v1, a4); // 0x407bd4
        int64_t v4 = v3 & 0xffffffff; // 0x407bd9
        if ((int32_t)v3 < 0) {
            // 0x407bc0
            return v4 & 0xffffffff;
        }
        // 0x407bdf
        v2 = v4;
        if (g66 != -1) {
            // 0x407bc0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl(fd, cmd); // 0x407ba7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x407bb6
            g66 = 1;
            // 0x407bc0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_407b50(fd, 0, v1, a4); // 0x407c67
        int64_t v7 = v6 & 0xffffffff; // 0x407c6c
        if ((int32_t)v6 < 0) {
            // 0x407bc0
            return v7 & 0xffffffff;
        }
        // 0x407c76
        g66 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x407bef
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x407bfa
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x407bc0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x407c12
    close(fd2);
    // 0x407bc0
    return 0xffffffff;
}
// Address range: 0x407c90 - 0x407d6f
int64_t function_407c90(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x407c9c
    uint32_t v2 = *v1; // 0x407c9c
    int64_t v3 = a2 & 0xffffffff; // 0x407ca1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407ca4
    uint64_t v5 = (int64_t)*v4; // 0x407ca4
    int64_t v6; // 0x407d12
    if (v3 <= v5) {
      lab_0x407d0c_2:
        // 0x407d0c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407c92
    int64_t v8 = v2; // 0x407c90
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x407d0c
        goto lab_0x407d0c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407cc8
    int64_t v17; // 0x407cd6
    int64_t * v18; // 0x407cf0
    int64_t * v19; // 0x407cf3
    int64_t v20; // 0x407cfe
    int64_t v21; // 0x407cd6
    while ((v16 & 0xffffffff) > v10) {
        // 0x407cd3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407cf0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407d07
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x407d0c
            goto lab_0x407d0c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x407d0c
            goto lab_0x407d0c_2;
        }
        // 0x407cc2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x407d4b
    int64_t * v23 = (int64_t *)v22; // 0x407d50
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407d53
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407d50
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407d67
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x407cbd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x407d0c
            goto lab_0x407d0c_2;
        }
        // 0x407cc2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407cd3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407cf0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407d07
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x407d0c
                goto lab_0x407d0c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x407d0c
                goto lab_0x407d0c_2;
            }
            // 0x407cc2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x407d30
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407d50
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407d67
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x407d0c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x407d70 - 0x40838c
int64_t function_407d70(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x407d8f
    int64_t v2 = *v1; // 0x407d8f
    char * str2 = (char *)v2; // 0x407d9c
    char c = *str2; // 0x407d9c
    int64_t v3 = v2; // 0x407dc8
    int64_t v4 = 0; // 0x407d70
    int32_t v5; // 0x407d70
    int64_t v6; // 0x407d70
    int64_t v7; // 0x407d70
    int64_t v8; // 0x407d70
    int64_t v9; // 0x407d70
    int64_t v10; // 0x407d70
    int64_t v11; // 0x407d70
    int64_t v12; // 0x407d70
    int64_t v13; // 0x407d70
    int64_t str3; // 0x407d70
    int64_t v14; // 0x407d70
    int64_t v15; // 0x407d70
    int64_t v16; // 0x407d70
    int64_t v17; // 0x407d70
    int32_t v18; // 0x407d70
    int32_t v19; // 0x407d70
    int32_t v20; // 0x407d70
    int32_t v21; // 0x407d70
    int32_t v22; // 0x407d70
    int32_t v23; // 0x407d70
    int32_t v24; // 0x407d70
    int32_t v25; // 0x407d70
    int32_t v26; // 0x407d70
    int32_t v27; // 0x407d70
    int32_t v28; // 0x407d70
    int32_t v29; // 0x407d70
    int64_t nmemb; // 0x407d70
    int64_t v30; // 0x407d70
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x407dcc
            while (v31 != 0 == (v31 != 61)) {
                // 0x407dc8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407dd8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x407dde
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407da8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x407e0c
                int64_t v34; // 0x407d70
                int64_t v35; // 0x407d70
                if (strncmp(str, str2, n) == 0) {
                    // 0x407e15
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x407f90;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407e26
                int64_t v37 = *(int64_t *)v36; // 0x407e2a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407e00
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407e15
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x407f90;
                        }
                    }
                    // 0x407e26
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
                  lab_0x407e76:
                    // 0x407e76
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
                        goto lab_0x407ed0;
                    } else {
                        if (v11 == 0) {
                            // 0x408040
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407ed0;
                        } else {
                            if (v39 == 0) {
                                // 0x407ff0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x407e9a;
                                } else {
                                    // 0x407ffc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x407e9a;
                                    } else {
                                        // 0x40800a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x407e9a;
                                        } else {
                                            goto lab_0x407ed0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x407e9a;
                            }
                        }
                    }
                }
              lab_0x407ee1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4080b6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408262
                            flockfile(g38);
                            int64_t v41 = *v1; // 0x408282
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4082cf
                            int64_t v43 = (int64_t)g38;
                            int64_t v44 = v43; // 0x4082e9
                            int64_t v45; // 0x4082eb
                            if (*(char *)v42 != 0) {
                                // 0x4082eb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g38;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4082e3
                            while (v17 + nmemb != v42) {
                                // 0x4082e5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4082eb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g38;
                                }
                                // 0x4082d8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408310
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g38);
                            v40 = *v1;
                        } else {
                            // 0x4080c4
                            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40821f
                        free((int64_t *)v17);
                    }
                    // 0x408119
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408130
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x407fde
                    return 63;
                }
                // 0x407f00
                v5 = v39;
                if (v13 != 0) {
                    // 0x407f84
                    v35 = v13;
                    v34 = v25;
                  lab_0x407f90:;
                    int32_t * v49 = (int32_t *)a7; // 0x407fa0
                    uint32_t v50 = *v49; // 0x407fa0
                    int64_t v51 = v50; // 0x407fa0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x407faa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x407fb3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4081df
                                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40818a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x407fde
                            return 63;
                        }
                        // 0x408028
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40833f
                                    __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40823d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408250
                                // 0x407fde
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40814e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408162
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x407fcb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x407fce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407fd2
                    int64_t result = v59; // 0x407fd8
                    if (v58 != 0) {
                        // 0x407fda
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x407fde
                    return result;
                }
            } else {
                // 0x407dde
                v5 = v32;
            }
            // break -> 0x407f05
            break;
        }
    }
    // 0x407f05
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x407f1d
        if (*(char *)(v60 + 1) != 45) {
            // 0x407f27
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x407fde
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408069
        __fprintf_chk(g38, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407f56
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407f66
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407ed0:
    // 0x407ed0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407ed0
    int64_t v63 = *(int64_t *)v62; // 0x407ed4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407ee1
        goto lab_0x407ee1;
    }
    goto lab_0x407e76;
  lab_0x407e9a:
    // 0x407e9a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x407d70
    int32_t v65; // 0x407d70
    int32_t v66; // 0x407d70
    if (v27 != 0) {
        goto lab_0x407ed0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408050
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407ed0;
            } else {
                goto lab_0x407ec1;
            }
        } else {
            // 0x407eb5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4081ac
                int64_t v67 = (int64_t)mem; // 0x4081ac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407ed0;
                } else {
                    // 0x4081bf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407ec1;
                }
            } else {
                goto lab_0x407ec1;
            }
        }
    }
  lab_0x407ec1:
    // 0x407ec1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407ed0;
}
// Address range: 0x408390 - 0x408956
int64_t function_408390(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4083b1
    if (v3 < 1) {
        // 0x40856e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4083ad
    int32_t v5 = *(int32_t *)a7; // 0x4083b9
    uint64_t v6 = a1 & 0xffffffff; // 0x4083bb
    int64_t v7 = v2; // 0x4083c0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4083c3
    *v8 = 0;
    int64_t v9; // 0x408390
    int64_t v10; // 0x408390
    int64_t v11; // 0x408390
    int64_t v12; // 0x408390
    int64_t str; // 0x408390
    int64_t v13; // 0x408390
    int64_t v14; // 0x408390
    int64_t v15; // 0x408390
    int64_t v16; // 0x408390
    int64_t v17; // 0x408390
    int32_t v18; // 0x408390
    char v19; // 0x408390
    if (v5 == 0) {
        // 0x4085a8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4083da;
    } else {
        // 0x4083d3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x408420
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x408423
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4084e8;
            } else {
                int64_t v22 = v7 + 1; // 0x408436
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x408446
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4084fc;
                } else {
                    goto lab_0x408458;
                }
            }
        } else {
            goto lab_0x4083da;
        }
    }
  lab_0x4083da:
    // 0x4083da
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4083e0
    *v24 = 0;
    int64_t v25; // 0x408390
    int64_t v26; // 0x408390
    int64_t v27; // 0x408390
    switch (*(char *)&v2) {
        case 45: {
            // 0x4084d0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4084dd;
        }
        case 43: {
            // 0x4087e0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4084dd;
        }
        default: {
            // 0x4083fc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40875f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408878
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4084dd;
                } else {
                    // 0x40876d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40840a;
                }
            } else {
                goto lab_0x40840a;
            }
        }
    }
  lab_0x4084e8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4084ef
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x408458;
    } else {
        goto lab_0x4084fc;
    }
  lab_0x40840a:
    // 0x40840a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4084dd;
  lab_0x4084dd:
    // 0x4084dd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4084e8;
  lab_0x408458:;
    uint32_t v30 = *(int32_t *)a7; // 0x408458
    int64_t v31 = v30; // 0x408458
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40845a
    if ((int64_t)*v32 > v31) {
        // 0x40845f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x408462
    if (*v33 > v30) {
        // 0x408467
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40846a
    int64_t v35 = v31; // 0x40846e
    int64_t v36 = v15; // 0x40846e
    int64_t v37; // 0x408390
    int64_t v38; // 0x408390
    int64_t v39; // 0x408390
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4085d8
        int64_t v41 = v40; // 0x4085d8
        v2 = v41;
        int64_t v42; // 0x408390
        if (*v33 == v40) {
            // 0x4087c0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4087c8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4085e4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4085e8
                function_407c90(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4085f8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x408601
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40860a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x408621
            int64_t v47 = v45 & 0xffffffff; // 0x408625
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40862e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x408634
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x408636;
                }
            }
            int64_t v48 = v47 + 1; // 0x408610
            int64_t v49 = v48 & 0xffffffff; // 0x408610
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x408621
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40862e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x408634
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x408636;
                    }
                }
                // 0x408610
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4087d8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x408636;
    } else {
        goto lab_0x408474;
    }
  lab_0x4084fc:
    // 0x4084fc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4084ff
    int64_t v51 = v12; // 0x4084ff
    int64_t v52 = v14; // 0x4084ff
    if (*(char *)v10 == 0) {
        goto lab_0x408458;
    } else {
        goto lab_0x408505;
    }
  lab_0x408474:;
    int32_t v53 = v35; // 0x408474
    int64_t v54; // 0x408390
    int64_t v55; // 0x408390
    int64_t v56; // 0x408390
    int64_t v57; // 0x408390
    int64_t v58; // 0x408390
    int64_t v59; // 0x408390
    char * v60; // 0x408390
    int64_t v61; // 0x408390
    int64_t v62; // 0x408489
    int64_t v63; // 0x408390
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4085c3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4085c6;
    } else {
        // 0x40847c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408390
        int64_t v66 = v65 ? -1 : 1; // 0x408490
        int64_t v67 = (int64_t)"--"; // 0x408390
        int64_t v68 = v62; // 0x408390
        int64_t v69 = 3; // 0x408490
        unsigned char v70 = *(char *)v68; // 0x408490
        char v71 = *(char *)v67; // 0x408490
        char v72 = v71; // 0x408490
        bool v73 = false; // 0x408490
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
            // 0x408580
            if (*(char *)v62 == 45) {
                // 0x408640
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x408640
                if (c == 0) {
                    goto lab_0x40858a;
                } else {
                    // 0x40864d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4086d0;
                    } else {
                        if (c == 45) {
                            // 0x4088b3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x408725;
                        } else {
                            // 0x40865e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4086d0;
                            } else {
                                // 0x408663
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408684;
                                } else {
                                    // 0x40866a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4086d0;
                                    } else {
                                        goto lab_0x408684;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40858a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4084a0
            v2 = v75;
            int32_t v76 = *v32; // 0x4084a3
            int64_t v77 = v35 + 1; // 0x4084a6
            int32_t v78 = v77; // 0x4084a9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408810
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4084b7
                    function_407c90(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4084c5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4085c6;
        }
    }
  lab_0x408505:;
    // 0x408505
    int64_t v79; // bp-104, 0x408390
    int64_t v80 = &v79; // 0x40839a
    int64_t v81 = v50 + 1; // 0x408505
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40850c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x408511
    *v83 = v81;
    char v84 = *(char *)v2; // 0x408515
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x408519
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x408521
    *v86 = v84;
    char * str2 = (char *)v52; // 0x408526
    int32_t c2 = v84; // 0x408526
    char * found_char_pos = strchr(str2, c2); // 0x408526
    int64_t v87 = *v82; // 0x40852b
    v2 = v87;
    int64_t v88 = *v85; // 0x408535
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x408540
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x408830
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4087fd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40856e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x408526
    char v91 = *(char *)(v90 + 1); // 0x40855b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x408515
        if (v91 != 58) {
            // 0x40856e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408784
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408888
                *v8 = 0;
            } else {
                // 0x40886c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4087ae
            *v83 = 0;
            // 0x40856e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40878e
        if (v93 != 0) {
            // 0x408820
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4087ae
            *v83 = 0;
            // 0x40856e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4087a1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4087ae
            *v83 = 0;
            // 0x40856e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4088ea
            __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40889a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4088a1
        // 0x4087ae
        *v83 = 0;
        // 0x40856e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4086f9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4086fb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x408920
                __fprintf_chk(g38, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4088d1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4088d8
            // 0x40856e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408706
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40870a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x408725;
  lab_0x408636:
    // 0x408636
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408474;
  lab_0x408725:;
    int64_t v99 = function_407d70(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408743
    // 0x40856e
    return v99 & 0xffffffff;
  lab_0x4085c6:;
    int32_t v100 = v55; // 0x4085c6
    if (v100 != (int32_t)v59) {
        // 0x4085ca
        *(int32_t *)a7 = v100;
    }
    // 0x40856e
    return 0xffffffff;
  lab_0x40858a:
    // 0x40858a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408591
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40856e
    return v99 & 0xffffffff;
  lab_0x4086d0:
    // 0x4086d0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x408505;
  lab_0x408684:
    // 0x408684
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_407d70(v6, a2, str, a4, a5, v57, v1, v11, &g17); // 0x4086aa
    if ((int32_t)v101 != -1) {
        // 0x40856e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4086bf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4086d0;
}
// Address range: 0x408960 - 0x4089b6
int64_t function_408960(int64_t a1) {
    // 0x408960
    *(int32_t *)&g67 = g34;
    *(int32_t *)&g68 = g33;
    int64_t v1; // 0x408960
    int64_t result = function_408390(v1, v1, v1, v1, v1, v1, &g67, a1 & 0xffffffff); // 0x408986
    g34 = *(int32_t *)&g67;
    g72 = g70;
    *(int32_t *)&g32 = g69;
    return result;
}
// Address range: 0x4089c0 - 0x4089d8
int64_t function_4089c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4089c0
    return function_408960(1);
}
// Address range: 0x4089e0 - 0x4089f3
int64_t function_4089e0(int32_t a1, int64_t a2, char * a3, char (**a4)[4], int32_t a5, int64_t a6) {
    // 0x4089e0
    return function_408960(0);
}
// Address range: 0x408a00 - 0x408a15
int64_t function_408a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408a00
    return function_408390(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408a20 - 0x408a36
int64_t function_408a20(void) {
    // 0x408a20
    return function_408960(0);
}
// Address range: 0x408a40 - 0x408a58
int64_t function_408a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408a40
    return function_408390(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408a60 - 0x408ada
int64_t function_408a60(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x408a6b
    int64_t v2 = (int64_t)&g18; // 0x408a6b
    int32_t * pwc; // 0x408a60
    int64_t v3; // 0x408a60
    int64_t n; // 0x408a60
    if (a2 == 0) {
        goto lab_0x408ab2;
    } else {
        // 0x408a6d
        if (a3 == 0) {
            // 0x408a98
            return -2;
        }
        // 0x408a79
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408ab2;
        } else {
            goto lab_0x408a84;
        }
    }
  lab_0x408ab2:
    // 0x408ab2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408a60
    pwc = (int32_t *)&v4;
    goto lab_0x408a84;
  lab_0x408a84:;
    char * wstr = (char *)v3; // 0x408a8a
    int64_t ps; // 0x408a60
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x408a8a
    int64_t result = v5; // 0x408a8a
    if (v5 < 0xfffffffe) {
        // 0x408a98
        return result;
    }
    int64_t result2 = result; // 0x408ac9
    if ((char)function_408ba0(0, v3) == 0) {
        // 0x408acb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408a98
    return result2;
}
// Address range: 0x408ae0 - 0x408b39
int64_t function_408ae0(int64_t * a1, int64_t a2, int64_t * a3) {
    // 0x408ae0
    int32_t v1; // bp-16, 0x408ae0
    int64_t v2; // 0x408ae0
    int64_t v3 = function_409290(0, (int64_t *)&v1, a2, (int64_t)a3, v2, v2, v2, (int64_t)&g73); // 0x408af5
    if (v3 == 0) {
        // 0x408b12
        return 0xffffffff;
    }
    // 0x408aff
    int64_t result; // 0x408ae0
    if (v1 > -1) {
        // 0x408b0d
        *a1 = v3;
        result = v1;
    } else {
        // 0x408b18
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x408b12
    return result;
}
// Address range: 0x408b40 - 0x408b9d
int64_t function_408b40(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x408b47
    int64_t v2; // 0x408b40
    int64_t result = function_409170(a1, v2); // 0x408b58
    if ((v2 & 32) != 0) {
        // 0x408b80
        if ((int32_t)result == 0) {
            // 0x408b84
            *__errno_location() = 0;
        }
        // 0x408b7a
        return 0xffffffff;
    }
    // 0x408b61
    if ((int32_t)result == 0) {
        // 0x408b7a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x408b68
    if (v1 == 0) {
        // 0x408b6a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x408b7a
    return result2;
}
// Address range: 0x408ba0 - 0x408bfe
int64_t function_408ba0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x408ba6
    if (locale == NULL) {
        // 0x408bd3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x408ba6
    bool v2; // 0x408ba0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g19; // 0x408ba0
    int64_t v5 = v1; // 0x408ba0
    int64_t v6 = 2; // 0x408bc5
    unsigned char v7 = *(char *)v5; // 0x408bc5
    char v8 = *(char *)v4; // 0x408bc5
    char v9 = v8; // 0x408bc5
    bool v10 = false; // 0x408bc5
    while (v7 == v8) {
        // 0x408bb8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x408bd1
    int64_t v13 = v1; // 0x408bd1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x408bd3
        return 0;
    }
    int64_t v14 = 6; // 0x408bd1
    unsigned char v15 = *(char *)v13; // 0x408bed
    char v16 = *(char *)v12; // 0x408bed
    char v17 = v16; // 0x408bed
    bool v18 = false; // 0x408bed
    while (v15 == v16) {
        // 0x408be0
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
// Address range: 0x408c00 - 0x409162
int64_t function_408c00(void) {
    char * v1 = nl_langinfo(14); // 0x408c16
    char * v2 = g71; // 0x408c1b
    char * v3; // 0x408c00
    int64_t v4; // 0x408c00
    int64_t v5; // 0x408c00
    int64_t v6; // 0x408c00
    int64_t v7; // 0x408c00
    int32_t size; // 0x408c00
    int32_t size2; // 0x408c00
    int32_t len; // 0x408cd2
    int64_t v8; // 0x408cd2
    char * env_val; // 0x408cbd
    if (v2 == NULL) {
        // 0x408cb8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x408d25;
        } else {
            // 0x408cca
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x408d25;
            } else {
                // 0x408ccf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x408cbd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409155
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x408d25;
                    } else {
                        // 0x4090c9
                        size2 = len + 14;
                        goto lab_0x408ceb;
                    }
                } else {
                    goto lab_0x408ceb;
                }
            }
        }
    } else {
        // 0x408c00
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x408c3a;
    }
  lab_0x408f6c:;
    // 0x408f6c
    struct _IO_FILE * stream; // 0x408dab
    int32_t v10 = __uflow(stream); // 0x408f6f
    int64_t v11; // 0x408c00
    int64_t v12 = v11; // 0x408f79
    int64_t v13; // 0x408c00
    int64_t v14 = v13; // 0x408f79
    int32_t v15 = v10; // 0x408f79
    int64_t v16; // 0x408c00
    int64_t v17 = v16; // 0x408f79
    int64_t v18 = v11; // 0x408f79
    int64_t v19 = v13; // 0x408f79
    int64_t v20 = v16; // 0x408f79
    if (v10 == -1) {
        // break -> 0x408f7f
        goto lab_0x408f7f;
    }
    goto lab_0x408df9;
  lab_0x408dee:;
    // 0x408dee
    int64_t v90; // 0x408c00
    int64_t * v32; // 0x408de0
    *v32 = v90 + 1;
    int64_t v89; // 0x408c00
    v12 = v89;
    int64_t v91; // 0x408c00
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x408c00
    v17 = v92;
    goto lab_0x408df9;
  lab_0x408df9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x408c00
    int32_t v25; // bp-120, 0x408c00
    int32_t v26; // bp-184, 0x408c00
    int64_t v27; // 0x408dab
    int64_t v28; // 0x408dc8
    int64_t v29; // 0x408dcd
    int64_t * v30; // 0x408de4
    switch (c) {
        case 32: {
            goto lab_0x408de0;
        }
        case 10: {
            goto lab_0x408de0;
        }
        case 9: {
            goto lab_0x408de0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x408fd1
            int32_t v33; // 0x408c00
            char v34; // 0x408c00
            int32_t v35; // 0x408fde
            if (v31 < *v30) {
                // 0x408fb0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x408fdb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x408fd1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x408fb0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x408fdb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x408fc0
                v36 = v33;
            }
            // 0x4090af
            if (v36 == -1) {
                // break -> 0x408f7f
                break;
            }
            goto lab_0x408de0;
        }
        default: {
            // 0x408e0f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x408f7f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x408e38
            int64_t v39 = v37 + 4; // 0x408e3a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x408e46
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x408e48
            while (v41 == 0) {
                // 0x408e38
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x408e66
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x408e72
            int64_t v45 = v43 + 4; // 0x408e74
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x408e80
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x408e82
            while (v47 == 0) {
                // 0x408e72
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x408e6f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x408e98
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x408ea8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x408eac
            int64_t v52 = v51 + v48; // 0x408eb5
            int64_t * mem; // 0x408c00
            int64_t v53; // 0x408c00
            int64_t v54; // 0x408c00
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x408feb
                int64_t v56 = v55 + 3; // 0x408ff7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x408ed1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x408ee0
            if (mem == NULL) {
                // 0x40910c
                free((int64_t *)v21);
                function_409170(v27, v53);
                v24 = (int64_t)&g18;
                goto lab_0x408d84;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x408ef8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x408f02
            uint32_t v62 = (int32_t)v59; // 0x408f05
            int64_t v63; // 0x408c00
            if (v62 >= 8) {
                // 0x409014
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40902e
                int64_t v66 = v61 - v65; // 0x409032
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40903d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40904e
                    int64_t v70 = v69 & 0xffffffff; // 0x40904e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40904b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4090df
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x408f17
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x408f1b
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
            int64_t v73 = v51 + 1; // 0x408f2b
            int64_t v74 = v60 - 1; // 0x408f2f
            uint32_t v75 = (int32_t)v73; // 0x408f34
            int64_t v76; // 0x408c00
            if (v75 >= 8) {
                // 0x409062
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40906c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40907c
                int64_t v80 = v74 - v79; // 0x409080
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40908b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40909b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409099
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4090f6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4090fe
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x408f46
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x408f4a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409143
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x408f5e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x408dee;
            } else {
                goto lab_0x408f6c;
            }
        }
    }
  lab_0x408de0:;
    int64_t v93 = v23; // 0x408c00
    int64_t v94 = v22; // 0x408c00
    int64_t v95 = v21; // 0x408c00
    goto lab_0x408de0_2;
  lab_0x408d25:;
    int64_t * mem3 = malloc(size); // 0x408d25
    int64_t v97 = (int64_t)&g18; // 0x408d30
    int64_t v98; // 0x408c00
    int64_t path; // 0x408c00
    if (mem3 == NULL) {
        goto lab_0x408d02;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x408d25
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x408d46;
    }
  lab_0x408c3a:;
    int64_t str = v1 == NULL ? (int64_t)&g18 : (int64_t)v1; // 0x408c2d
    char v100 = *v3; // 0x408c3a
    int64_t v101; // 0x408c00
    if (v100 == 0) {
        // 0x408c94
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x408c00
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x408c00
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x408c80
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x408c87;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x408c50
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x408c5d
        char v107 = *(char *)v106; // 0x408c62
        v102 = v107;
        if (v107 == 0) {
            // 0x408c94
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x408c6b
    v104 = v103 + 1;
  lab_0x408c87:
    // 0x408c94
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x408d02:;
    char * v108 = (char *)v97;
    g71 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x408c3a;
  lab_0x408d46:;
    int64_t v109 = v98 + path; // 0x408d46
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x408d72
    v24 = (int64_t)&g18;
    if (fd >= 0) {
        // 0x408da1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4090d2
            close(fd);
            v24 = (int64_t)&g18;
        } else {
            // 0x408dc5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x408de0_2:;
                uint64_t v96 = *v32; // 0x408de0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x408f6c;
                } else {
                    goto lab_0x408dee;
                }
            }
          lab_0x408f7f:
            // 0x408f7f
            function_409170(v27, v19);
            v24 = (int64_t)&g18;
            if (v18 != 0) {
                // 0x408f9e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x408d84;
  lab_0x408ceb:;
    int64_t * mem4 = malloc(size2); // 0x408ceb
    v97 = (int64_t)&g18;
    if (mem4 != NULL) {
        // 0x408d91
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x408d46;
    } else {
        goto lab_0x408d02;
    }
  lab_0x408d84:
    // 0x408d84
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x408d02;
}
// Address range: 0x409170 - 0x4091eb
int64_t function_409170(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x409177
    if (fileno(stream) < 0) {
        // 0x4091d7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40918a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x4091bb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4091d7
            return fclose(stream);
        }
    }
    // 0x40918c
    if ((int32_t)function_4091f0(a1, v1) == 0) {
        // 0x4091d7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x409198
    int32_t v3 = *v2; // 0x4091a0
    int64_t result = fclose(stream); // 0x4091ae
    if (v3 != 0) {
        // 0x4091e0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x4091b0
    return result;
}
// Address range: 0x4091f0 - 0x409230
int64_t function_4091f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40920a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40920a
        return fflush(stream);
    }
    // 0x409218
    function_409230(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409230 - 0x409287
int64_t function_409230(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409230
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40923a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40926b
    int64_t result = -1; // 0x409274
    if (v1 != -1) {
        // 0x409276
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x409282
    return result;
}
// Address range: 0x409290 - 0x40ada9
int64_t function_409290(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x409290
    int64_t v1; // bp-1416, 0x409290
    int64_t v2; // bp-1656, 0x409290
    if ((int32_t)function_40afd0(a3, &v1, &v2) < 0) {
        // 0x409900
        return 0;
    }
    int64_t v3 = &v2; // 0x40929b
    int64_t v4; // bp-1384, 0x409290
    int64_t v5; // bp-1640, 0x409290
    int64_t v6; // 0x409290
    if ((int32_t)function_40adb0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40a1e7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40a203
            free((int64_t *)v6);
        }
        // 0x40a208
        *__errno_location() = 22;
        // 0x409900
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x4092fb
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x409303
    uint64_t v9 = v8 + v6; // 0x409307
    int64_t v10; // 0x409290
    char * v11; // 0x409290
    int64_t v12; // 0x409290
    if (v9 < v8) {
        // 0x4099b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4098b9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x4099b0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x4098b9;
        } else {
            uint64_t size = v9 + 6; // 0x409317
            if (size < 4000) {
                // 0x409460
                v12 = 0;
                int64_t v13; // bp-1784, 0x409290
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x409354;
            } else {
                if (size == -1) {
                    // 0x4099b0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x4098b9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x409338
                    if (mem == NULL) {
                        // 0x4099b0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x4098b9;
                    } else {
                        // 0x40934d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x409354;
                    }
                }
            }
        }
    }
  lab_0x409880_2:;
    // 0x409880
    int64_t v14; // 0x409290
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x409888
    int64_t v17 = v16; // 0x409896
    int64_t v18 = v16; // 0x409896
    int64_t v19 = v15; // 0x409896
    int64_t v20; // 0x409378
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x409aa8;
    } else {
        goto lab_0x4098a1;
    }
  lab_0x4098b9:
    // 0x4098b9
    if (v6 != (int64_t)&v4) {
        // 0x4098d0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4098ec
        free((int64_t *)v6);
    }
    // 0x4098f1
    *(int32_t *)v10 = 12;
    // 0x409900
    return 0;
  lab_0x409354:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40938d
    int64_t v23 = *v22; // 0x40938d
    int64_t v24 = 0; // 0x409393
    int64_t v25 = v20; // 0x409393
    int64_t v26 = v21; // 0x409393
    int64_t v27 = 0; // 0x409393
    int64_t v28; // 0x409290
    int64_t v29; // 0x409290
    int64_t v30; // 0x409290
    int64_t v31; // 0x409290
    int64_t v32; // 0x409290
    int64_t v33; // 0x409290
    int64_t v34; // 0x409290
    if (v23 == a3) {
        goto lab_0x4099a3;
    } else {
        int64_t v35 = v23 - a3; // 0x409399
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x4093ab;
    }
  lab_0x4099a3:;
    int64_t v36 = v24; // 0x4099a6
    float80_t v37; // 0x409290
    float80_t v38 = v37; // 0x4099a6
    float80_t v39; // 0x409290
    float80_t v40 = v39; // 0x4099a6
    int64_t v41 = v25; // 0x4099a6
    int64_t v42 = v26; // 0x4099a6
    int64_t v43 = v27; // 0x4099a6
    int64_t v44; // 0x409290
    int64_t v45 = v44; // 0x4099a6
    goto lab_0x409508;
  lab_0x409508:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x409290
    int64_t v51; // 0x409290
    int64_t v52; // 0x409290
    int64_t v53; // 0x409290
    int64_t v54; // 0x409290
    int64_t v55; // 0x409290
    int64_t v56; // 0x409290
    int64_t v57; // 0x409290
    int64_t dest_mem2; // 0x409290
    int64_t dest_mem3; // 0x409290
    int64_t v58; // 0x409290
    float80_t v59; // 0x409290
    float80_t v60; // 0x409290
    float80_t v61; // 0x409290
    float80_t v62; // 0x409290
    float80_t v63; // 0x409290
    uint64_t v64; // 0x40a636
    char * v65; // 0x40951c
    char v66; // 0x40951c
    int64_t v67; // 0x409544
    uint32_t v68; // 0x409548
    int64_t v69; // 0x409925
    char v70; // 0x409290
    if (v1 == v49) {
        // 0x40a630
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40ad9a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40a692;
            } else {
                goto lab_0x409880_2;
            }
        } else {
            // 0x40a640
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40a692;
            } else {
                if (v47 != 0) {
                    // 0x40ac5d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x409880_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40ac63
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40a65e;
                        } else {
                            goto lab_0x40ac6f;
                        }
                    }
                } else {
                    // 0x40a64e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40a65e;
                    } else {
                        goto lab_0x40ac6f;
                    }
                }
            }
        }
    } else {
        // 0x40951c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x409521
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40a0f0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x409880_2;
                } else {
                    goto lab_0x409982;
                }
            } else {
                // 0x409932
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x409982;
                } else {
                    if (v47 != 0) {
                        // 0x40a220
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x409880_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40a226
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x409950;
                            } else {
                                goto lab_0x40a232;
                            }
                        }
                    } else {
                        // 0x409940
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x409950;
                        } else {
                            goto lab_0x40a232;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            // 0x409539
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g78 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x409eb0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409987;
                }
                case 19: {
                    // 0x409ea0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409987;
                }
                case 20: {
                    // 0x409e88
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x409987;
                }
                case 21: {
                    goto lab_0x409a70;
                }
                case 22: {
                    goto lab_0x409a70;
                }
                default: {
                    // 0x40955a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x409a00
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x409a1d;
                        } else {
                            // 0x409a07
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x409590;
                            } else {
                                goto lab_0x409a1d;
                            }
                        }
                    } else {
                        goto lab_0x409590;
                    }
                }
            }
        }
    }
  lab_0x4093ab:;
    int64_t v75 = v34;
    float80_t v76; // 0x409290
    float80_t v77 = v76;
    float80_t v78; // 0x409290
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x409290
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x4093ae
    int64_t v89 = v85; // 0x4093ae
    int64_t v90 = v84; // 0x4093ae
    float80_t v91 = v79; // 0x4093ae
    float80_t v92 = v77; // 0x4093ae
    int64_t v93 = v75; // 0x4093ae
    int64_t v94 = v80; // 0x4093ae
    int64_t v95 = v81; // 0x4093ae
    int64_t v96 = v82; // 0x4093ae
    int64_t v97 = v87; // 0x4093ae
    int64_t v98; // 0x409290
    int64_t v99; // 0x409290
    int64_t v100; // 0x409290
    int64_t v101; // 0x409290
    int64_t v102; // 0x409290
    if (v82 >= v87) {
        goto lab_0x4094f9;
    } else {
        if (v82 != 0) {
            // 0x409490
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x409880_2;
            } else {
                int64_t v103 = 2 * v82; // 0x409496
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x4094ab;
                } else {
                    goto lab_0x40949e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4093d4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x4094be;
                } else {
                    goto lab_0x4093e0;
                }
            } else {
                goto lab_0x40949e;
            }
        }
    }
  lab_0x4094f9:
    // 0x4094f9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x409508;
  lab_0x40a692:
    // 0x40a692
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40a69a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40a6ab
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40a6b7
    if (v12 != 0) {
        // 0x40a6c3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40a6e2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40a6fe
        free((int64_t *)v6);
    }
    // 0x40a703
    *a2 = v46;
    // 0x409900
    return result;
  lab_0x409a70:
    // 0x409a70
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x409987;
  lab_0x40949e:
    // 0x40949e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x409880_2;
    } else {
        goto lab_0x4094ab;
    }
  lab_0x409aa8:
    // 0x409aa8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x4098a1;
  lab_0x4098a1:
    if (v12 == 0) {
        // 0x4099b0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x4098b9;
    } else {
        // 0x4098b1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x4098b9;
    }
  lab_0x409982:
    // 0x409982
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x409987;
  lab_0x409590:;
    int64_t v273 = (int64_t)v11; // 0x409590
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x409597
    int64_t v275 = v273 + 1; // 0x40959b
    *v11 = 37;
    int64_t v276 = v275; // 0x4095a4
    if (v274 % 2 != 0) {
        // 0x4095a6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x409597
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x4095b7
    if ((v277 & 2) != 0) {
        // 0x4095b9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4095c3
    if ((v277 & 4) != 0) {
        // 0x4095c5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4095cf
    if ((v277 & 8) != 0) {
        // 0x4095d1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4095db
    if ((v277 & 16) != 0) {
        // 0x4095dd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4095e7
    if ((v277 & 64) != 0) {
        // 0x4095e9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x4095f3
    if ((v277 & 32) != 0) {
        // 0x4095f5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x4095fd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x409601
    int64_t v293 = v290; // 0x409608
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x409617
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40963a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40963e
    int64_t v298 = v295; // 0x409645
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x409654
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40954a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x409680
    int64_t v272; // 0x409290
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x409689
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x409a88;
        } else {
            if (v301 == 12) {
                // 0x40a248
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x4096b0;
            } else {
                // 0x4096a0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x409a80
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x409a88;
                } else {
                    goto lab_0x4096b0;
                }
            }
        }
    } else {
        goto lab_0x4096b0;
    }
  lab_0x409987:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x409987
    int64_t v111 = v55 + 88; // 0x40998b
    int64_t v112 = *(int64_t *)v111; // 0x40998f
    int64_t v113 = v49 + 1; // 0x409992
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x409399
        int64_t v115 = v114 + v105; // 0x40939f
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
            // 0x4099c8
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
                goto lab_0x409880_2;
            } else {
                goto lab_0x4094f9;
            }
        } else {
            goto lab_0x4093ab;
        }
    } else {
        goto lab_0x4099a3;
    }
  lab_0x4094ab:;
    int64_t v116 = v80 == v20; // 0x4094b2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x4093e0;
    } else {
        goto lab_0x4094be;
    }
  lab_0x4094be:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x409290
    if (v102 != 0) {
        goto lab_0x4093e0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4094da
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x409a95;
        } else {
            // 0x4094e8
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
            goto lab_0x4094f9;
        }
    }
  lab_0x4093e0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x4093f7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x409880_2;
    } else {
        // 0x40941d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x409445
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
        goto lab_0x4094f9;
    }
  lab_0x40a65e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40ac24
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x409880_2;
        } else {
            // 0x40ac35
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40ac4a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40a692;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40a681
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x409a95;
        } else {
            // 0x40a68f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40a692;
        }
    }
  lab_0x40ac6f:
    // 0x40ac6f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x409880_2;
    } else {
        goto lab_0x40a65e;
    }
  lab_0x409a1d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x409a1d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x409a21
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x409a25
    int64_t v123 = 0; // 0x409a2c
    int64_t v124 = v122; // 0x409a2c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x409a32
        int64_t v126 = v120; // 0x409a3a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40a9c1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40a9d9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40a9eb
            int64_t v131 = v128; // 0x40a9f4
            int64_t v132 = v130; // 0x40a9f4
            int64_t v133; // 0x409290
            int64_t v134; // 0x40aa06
            if (v130 < v129) {
                // 0x40a9f6
                if (v121 == v128) {
                    // break -> 0x409810
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x4097fb
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x409810
                        goto lab_0x409810;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40a9b8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40a9c1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40a9f6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x409810
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x4097fb
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x409810
                            goto lab_0x409810;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40a9b8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x409a44
            if (*(int32_t *)v135 != 5) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x409a50
            int64_t v137 = v136; // 0x409a50
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x409a5d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x409810:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x409810
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x409814
    int64_t v142; // 0x409290
    int64_t v143; // 0x409290
    int64_t v144; // 0x409290
    if (v140 == v141) {
        goto lab_0x409ec0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x409821
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40aa24
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40aa2d
            if (v141 == v146) {
                goto lab_0x409ede;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40aa53
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40aa5a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40aa73
                int64_t v152 = v151; // 0x40aa7c
                int64_t v153 = v149; // 0x40aa7c
                int64_t v154; // 0x409290
                int64_t v155; // 0x40aa87
                if (v151 < v150) {
                    // 0x40aa7e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x409880_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40aa9a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x409880_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40aa40
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40aa49
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40aa7e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x409880_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40aa9a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x409880_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40aa40
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40984c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x409833
            if (*(int32_t *)v156 != 5) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x409840
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x409ec0;
            } else {
                goto lab_0x40984c;
            }
        }
    }
  lab_0x4096b0:
    // 0x4096b0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x4096bd
    int64_t v160 = 0; // 0x4096c5
    if (v159 != -1) {
        // 0x4096cb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x409fbc
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4096ee
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x4096fc
        if (*(int32_t *)v162 != 5) {
            // 0x409fbc
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40970f
        int64_t v164; // bp-8, 0x409290
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x409290
    uint64_t v165; // 0x409726
    if (v46 > 0xfffffffffffffffd) {
        // 0x40a158
        v14 = v48;
        if (v47 == -1) {
            // 0x409784
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x409880_2;
    } else {
        // 0x409730
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x409784
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x409e60
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x409880_2;
            } else {
                int64_t v167 = 2 * v47; // 0x409e66
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x409752;
                } else {
                    goto lab_0x409e72;
                }
            }
        } else {
            // 0x409742
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x409752;
            } else {
                goto lab_0x409e72;
            }
        }
    }
  lab_0x409950:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40a179
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x409880_2;
        } else {
            // 0x40a191
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40a1a2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x409982;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x409971
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x409a95;
        } else {
            // 0x40997f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x409982;
        }
    }
  lab_0x40a232:
    // 0x40a232
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x409880_2;
    } else {
        goto lab_0x409950;
    }
  lab_0x409ec0:
    // 0x409ec0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x409ede;
  lab_0x409a88:
    // 0x409a88
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x4096b0;
  lab_0x409a95:
    // 0x409a95
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x409aa8;
  lab_0x409ede:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x409ee4
    v14 = v48;
    int64_t v170; // 0x409290
    int64_t v171; // 0x409290
    int64_t * v172; // 0x409290
    int64_t v173; // 0x409290
    int64_t v174; // bp-760, 0x409290
    uint64_t size5; // 0x409ee8
    if (v169 == -1) {
        goto lab_0x409880_2;
    } else {
        // 0x409ef9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x409f59;
        } else {
            // 0x409f05
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x409880_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x409f2d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x409880_2;
                } else {
                    goto lab_0x409f59;
                }
            }
        }
    }
  lab_0x40984c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x409ede;
    } else {
        // 0x409855
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x409ede;
        } else {
            goto lab_0x409880_2;
        }
    }
  lab_0x409752:
    // 0x409752
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40a119
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40a134
            if (v48 == v20 && v46 != 0) {
                // 0x40a142
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x409784
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x409773
        v14 = v48;
        if (mem11 != NULL) {
            // 0x409784
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x409880_2;
  lab_0x409e72:
    // 0x409e72
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x409880_2;
    } else {
        goto lab_0x409752;
    }
  lab_0x409f59:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x409290
    int64_t v181; // 0x409290
    int64_t v182; // 0x409290
    int64_t v183; // 0x409290
    int64_t v184; // 0x409290
    int64_t v185; // 0x409290
    int64_t v186; // 0x409290
    int64_t v187; // 0x409290
    int64_t v188; // 0x409290
    int64_t v189; // 0x409290
    int64_t v190; // 0x409290
    int64_t v191; // 0x409290
    int64_t v192; // 0x409290
    int64_t v193; // 0x409290
    float80_t v194; // 0x409290
    float80_t v195; // 0x409290
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40aad2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40aae0
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
            // 0x40ac0d
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
        goto lab_0x40a419;
    } else {
        // 0x409f61
        int64_t v198; // 0x409290
        float80_t v199; // 0x409290
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40a721
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40a72e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40a58a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x409f8f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x409f98
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x409fbc
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40ab06
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40ab06
                            v181 = v187 + 3;
                            goto lab_0x40ac81;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40ac81;
                            } else {
                                goto lab_0x40ab42;
                            }
                        }
                    } else {
                        // 0x40a813
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40a407;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40a821
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40ad6a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40a868
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40a87b
                                int64_t v207 = v176 & 0xffffffff; // 0x40a87e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40a88c
                                int64_t v209 = v187 + 1; // 0x40a8a9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40a8be
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40a8cb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40a419;
                        }
                    }
                } else {
                    // 0x40a5b8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40a5b8
                        v180 = v187 + 1;
                        goto lab_0x40ab67;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40ab67;
                        } else {
                            goto lab_0x40a5d8;
                        }
                    }
                }
            } else {
                // 0x40a3f0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40a407;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40a93c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40a94d
                    char v215 = *v213; // 0x40a954
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40a990
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40a99d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40a965
                        v182 = v218;
                        int64_t v219; // 0x40a957
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40a419;
                }
            }
        } else {
            float80_t v220; // 0x409290
            if (v220 != 0.0L) {
                // 0x409fbc
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40a60b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40a61a
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
                // 0x40a8f3
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
            goto lab_0x40a419;
        }
    }
  lab_0x40a419:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40a41c
    int64_t v229 = v228; // 0x40a422
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40a424
        int64_t v232 = v231 + v224; // 0x40a427
        int64_t v233 = v232 - v225; // 0x40a42e
        if ((v230 & 2) != 0) {
            // 0x40a8d3
            v229 = v233;
            int64_t v234 = v224; // 0x40a8d6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40a8e0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40a8e0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40a745
                int64_t v238 = v224; // 0x40a74b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40a759
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40a750
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40a765
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40a778
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
                int64_t v243 = v224; // 0x40a451
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40a471
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40a468
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40a47a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40a488
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
        // 0x409fbc
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40a4b8
    int64_t dest_mem5 = v48; // 0x40a4c5
    int64_t v250 = v248; // 0x40a4c5
    int64_t v251 = v47; // 0x40a4c5
    int64_t v252; // 0x409290
    if (v47 - v46 > v248) {
        goto lab_0x40a540;
    } else {
        if (v249 < v46) {
            // 0x40a712
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x409880_2;
            } else {
                goto lab_0x40a540;
            }
        } else {
            // 0x40a4d0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40a540;
            } else {
                if (v47 != 0) {
                    // 0x40aaa8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x409880_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40aaae
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40a4ee;
                        } else {
                            goto lab_0x40aaba;
                        }
                    }
                } else {
                    // 0x40a4de
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40a4ee;
                    } else {
                        goto lab_0x40aaba;
                    }
                }
            }
        }
    }
  lab_0x40a540:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40a551
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40a56d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x409987;
  lab_0x40a407:
    // 0x40a407
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40a419;
  lab_0x40ab67:;
    char * v257 = nl_langinfo(0x10000); // 0x40ab9a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40abab
    char v259 = *v257; // 0x40abb2
    int64_t v260 = v176 & 0xffffffff; // 0x40abb5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40abc3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40abf0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40abfd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40a5d8;
  lab_0x40a5d8:
    // 0x40a5d8
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
    goto lab_0x40a419;
  lab_0x40a4ee:
    // 0x40a4ee
    if (v48 == 0 || v48 == v20) {
        // 0x40a78b
        int64_t size7; // 0x409290
        int64_t * mem12 = malloc((int32_t)size7); // 0x40a7a2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x409880_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40a7ae
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40a7d9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40a540;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40a51d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x409880_2;
        } else {
            // 0x40a52b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40a540;
        }
    }
  lab_0x40aaba:
    // 0x40aaba
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x409880_2;
    } else {
        goto lab_0x40a4ee;
    }
  lab_0x40ac81:;
    int64_t v265 = v187 + 4; // 0x40ac81
    char v266 = *nl_langinfo(0x10000); // 0x40accc
    int64_t v267 = v176 & 0xffffffff; // 0x40accf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40acd6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40acfd
        int64_t v270 = v265 + 1; // 0x40ad05
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
    goto lab_0x40ab42;
  lab_0x40ab42:
    // 0x40ab42
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40a419;
}
// Address range: 0x40adb0 - 0x40afc9
int64_t function_40adb0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x40ae13
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40adc8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40add9
    g79 = v5;
    int64_t v6; // 0x40adb0
    int64_t v7; // 0x40adb0
    int64_t v8; // 0x40adb0
    int64_t v9; // 0x40adb0
    int64_t v10; // 0x40adb0
    int64_t v11; // 0x40adb0
    int64_t v12; // 0x40adb0
    uint32_t v13; // 0x40aed0
    int64_t * v14; // 0x40af00
    int64_t v15; // 0x40af08
    uint32_t v16; // 0x40af50
    uint32_t v17; // 0x40af20
    int64_t * v18; // 0x40aeb0
    int64_t v19; // 0x40aeb0
    int64_t * v20; // 0x40aec0
    int64_t v21; // 0x40aec0
    int64_t * v22; // 0x40ae98
    int64_t v23; // 0x40ae98
    int64_t * v24; // 0x40ae80
    int64_t v25; // 0x40ae80
    int64_t * v26; // 0x40afa0
    uint32_t v27; // 0x40ae60
    int64_t v28; // 0x40afa0
    int64_t * v29; // 0x40af90
    int64_t v30; // 0x40af90
    uint32_t v31; // 0x40ae40
    int64_t * v32; // 0x40afb8
    int64_t v33; // 0x40afb8
    int64_t v34; // 0x40af63
    uint32_t v35; // 0x40ae20
    int64_t v36; // 0x40af37
    uint32_t v37; // 0x40ade8
    int32_t * v38; // 0x40aed0
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x40ae60
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x40ae67
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x40aeb0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x40ae73
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x40ae06
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x40ae40
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x40ae47
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x40aec0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x40ae53
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x40ae06
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x40ae20
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x40ae27
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x40ae98
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x40ae33
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x40ae06
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
            // 0x40ade8
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x40adf3
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x40ae80
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40adff
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x40ae06
            break;
        }
        case 11: {
            // 0x40aed0
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40aedf
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x40afa0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40aeec
            *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
            // break -> 0x40ae06
            break;
        }
        case 12: {
            // 0x40af00
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x40ae06
            break;
        }
        case 15: {
            // 0x40af50
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x40af57
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x40af90
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x40af63
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x40ae06
            break;
        }
        case 16: {
            // 0x40af20
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40af2b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x40afb8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x40af37
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x40ae06
            break;
        }
        default: {
            // 0x40ae13
            return 0xffffffff;
        }
    }
    // 0x40ae06
    v3++;
    int64_t v39 = v4 + 32; // 0x40ae11
    while (v3 < v2) {
        // 0x40add0
        v4 = v39;
        v5 = *(int32_t *)v4;
        g79 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x40ae60
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x40ae67
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x40aeb0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x40ae73
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x40ae06
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x40ae40
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x40ae47
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x40aec0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x40ae53
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x40ae06
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x40ae20
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x40ae27
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x40ae98
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x40ae33
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x40ae06
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
                // 0x40ade8
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x40adf3
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x40ae80
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40adff
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x40ae06
                break;
            }
            case 11: {
                // 0x40aed0
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40aedf
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x40afa0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40aeec
                *(int64_t *)(v4 + 16) = __asm_movsd_1(__asm_movsd(*(int64_t *)v10));
                // break -> 0x40ae06
                break;
            }
            case 12: {
                // 0x40af00
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x40ae06
                break;
            }
            case 15: {
                // 0x40af50
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x40af57
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x40af90
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x40af63
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x40ae06
                break;
            }
            case 16: {
                // 0x40af20
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40af2b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x40afb8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x40af37
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x40ae06
                break;
            }
            default: {
                // 0x40ae13
                return 0xffffffff;
            }
        }
        // 0x40ae06
        v3++;
        v39 = v4 + 32;
    }
    // 0x40ae13
    return 0;
}
// Address range: 0x40afd0 - 0x40bcd9
int64_t function_40afd0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x40afd2
    int64_t v4 = v1 + 16; // 0x40afd6
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x40b009
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40b01e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40b04b
    int32_t v8 = 0; // 0x40b050
    int64_t v9 = 0; // 0x40b050
    int64_t v10 = v3; // 0x40b050
    int64_t v11 = a1; // 0x40b050
    int64_t v12 = 0; // 0x40b050
    char v13; // 0x40afd0
    int64_t v14; // 0x40afd0
    int64_t v15; // 0x40afd0
    int64_t v16; // 0x40afd0
    int64_t v17; // 0x40afd0
    int64_t v18; // 0x40afd0
    int64_t v19; // 0x40afd0
    int64_t v20; // 0x40afd0
    int64_t v21; // 0x40afd0
    int64_t v22; // 0x40afd0
    int64_t v23; // 0x40afd0
    int64_t v24; // 0x40afd0
    int64_t v25; // 0x40afd0
    int64_t v26; // 0x40afd0
    int64_t v27; // 0x40afd0
    int64_t v28; // 0x40afd0
    int64_t v29; // 0x40afd0
    int64_t v30; // 0x40afd0
    int32_t v31; // 0x40afd0
    int64_t v32; // 0x40afd0
    int64_t v33; // 0x40b040
    int64_t v34; // 0x40b090
    int64_t * v35; // 0x40b0b3
    int64_t v36; // 0x40b116
    if (v7 != 0) {
        // 0x40b040
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x40afd0
        int64_t v38 = 7; // 0x40afd0
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x40afd0
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x40b040:
            // 0x40b040
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x40b083
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x40b098
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x40b0d4
                int64_t v43 = v42; // 0x40b0d4
                int64_t v44 = v43; // 0x40b0dd
                int64_t v45 = v33; // 0x40b0dd
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x40b470
                    char v47 = *(char *)v46; // 0x40b474
                    int64_t v48 = v46; // 0x40b47d
                    while (v47 < 58) {
                        // 0x40b470
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40b47f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x40bb15
                        char v52 = *(char *)v51; // 0x40bb15
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x40bb19
                        int64_t v54 = v33; // 0x40bb2d
                        int64_t v55 = v51; // 0x40bb2d
                        char v56 = v52; // 0x40bb2d
                        int64_t v57 = v53; // 0x40bb2d
                        bool v58 = v52 < 58; // 0x40bb2d
                        bool v59 = v52 < 58; // 0x40bb2d
                        char v60 = v52; // 0x40bb2d
                        int64_t v61 = v51; // 0x40bb2d
                        int64_t v62; // 0x40bb42
                        int64_t v63; // 0x40bb15
                        char v64; // 0x40bb15
                        int64_t v65; // 0x40bb19
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x40b798_9;
                            }
                            // 0x40bb13
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
                                // 0x40bb2f
                                if (v64 >= 58) {
                                    goto lab_0x40b798_9;
                                }
                                // 0x40bb13
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
                        int64_t v67 = v55; // 0x40bae8
                        while (v58) {
                            // 0x40baee
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
                                    goto lab_0x40b798_9;
                                }
                                // 0x40bb13
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
                                    // 0x40bb2f
                                    if (v64 >= 58) {
                                        goto lab_0x40b798_9;
                                    }
                                    // 0x40bb13
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
                            // 0x40bae4
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x40bbed
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x40b798_9;
                        }
                        int64_t v68 = v54 + 2; // 0x40bbfe
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x40afd0
                v36 = v45;
                char v70; // 0x40afd0
                while (true) {
                    // 0x40b116
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x40b130
                                *v41 = *v41 | 2;
                                // break -> 0x40b110
                                break;
                            }
                            case 43: {
                                // 0x40b140
                                *v41 = *v41 | 4;
                                // break -> 0x40b110
                                break;
                            }
                            case 32: {
                                // 0x40b150
                                *v41 = *v41 | 8;
                                // break -> 0x40b110
                                break;
                            }
                            case 35: {
                                // 0x40b160
                                *v41 = *v41 | 16;
                                // break -> 0x40b110
                                break;
                            }
                            case 48: {
                                // 0x40b170
                                *v41 = *v41 | 32;
                                // break -> 0x40b110
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x40b178
                                    break;
                                }
                                // 0x40b106
                                *v41 = *v41 | 64;
                                // break -> 0x40b110
                                break;
                            }
                        }
                    } else {
                        // 0x40b11f
                        *v41 = *v41 | 1;
                    }
                    // 0x40b110
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x40afd0
                int64_t * v72; // 0x40b0a1
                int64_t * v73; // 0x40b0aa
                if (v70 == 42) {
                    // 0x40b1ed
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40b20d
                    int64_t v75 = v74; // 0x40b20d
                    int64_t v76 = v75 + 0xffffffd0; // 0x40b211
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x40b217
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40b5ed
                        char v80 = *(char *)v79; // 0x40b5f1
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40b5ed
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40b5fd
                        v26 = v79;
                        int64_t v81 = v75; // 0x40b601
                        int64_t v82 = v36; // 0x40b601
                        int64_t v83 = 0; // 0x40b601
                        if (v80 != 36) {
                            goto lab_0x40b21d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x40b632
                            int64_t v89 = v85; // 0x40b632
                            int64_t v90 = v87; // 0x40b632
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x40b637
                            int64_t v95 = v92 + 1; // 0x40b63a
                            char v96 = *(char *)v95; // 0x40b63a
                            int64_t v97 = v96; // 0x40b63a
                            while (v94 < v91) {
                                // 0x40b651
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x40b798_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40b60b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x40b614
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
                                    // 0x40b651
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x40b798_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40b60b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x40bc8b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x40b798_9;
                            }
                            // 0x40bc99
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40b22c;
                        }
                    } else {
                        goto lab_0x40b21d;
                    }
                } else {
                    // 0x40b17d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x40afd0
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40b89b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x40b8a0
                        int64_t v102 = v71; // 0x40b8a9
                        char * v103 = v100; // 0x40b8a9
                        int64_t v104 = v36; // 0x40b8a9
                        int64_t v105 = v71; // 0x40b8a9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x40b8b3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x40b8b3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x40b8b3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x40b8c2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x40b8e5
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x40b188;
                }
            } else {
                goto lab_0x40b048;
            }
        }
    }
  lab_0x40b052:
    // 0x40b052
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x40b074
    return 0;
  lab_0x40b798_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x40b7a3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x40b7b5
    if (v3 != v115) {
        // 0x40b7c0
        free((int64_t *)v115);
    }
    // 0x40b7c5
    *__errno_location() = 22;
    // 0x40b074
    return 0xffffffff;
  lab_0x40b970_5:;
    // 0x40b970
    int64_t v116; // 0x40afd0
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x40b975
    int64_t v119; // 0x40afd0
    if (v4 == v117) {
        goto lab_0x40b989_3;
    } else {
        // 0x40b977
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x40b989_3;
    }
  lab_0x40b989_3:;
    int64_t v120 = *v5; // 0x40b989
    int32_t * v121; // 0x40b999
    if (v3 == v120) {
        // 0x40b999
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x40b994
    free((int64_t *)v120);
    // 0x40b999
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x40b048:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40b04b
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
        // break -> 0x40b052
        goto lab_0x40b052;
    }
    goto lab_0x40b040;
  lab_0x40b21d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40b21d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x40b5c3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x40b798_9;
        }
        // 0x40b5db
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40b22c;
  lab_0x40b188:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40b18b
    int64_t v147 = v339; // 0x40b18b
    int64_t v145 = v338; // 0x40b18b
    int64_t v143 = v337; // 0x40b18b
    int64_t v186; // 0x40afd0
    int64_t v190; // 0x40afd0
    int64_t v189; // 0x40afd0
    int64_t v188; // 0x40afd0
    int64_t v187; // 0x40afd0
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x40b290;
    } else {
        goto lab_0x40b191;
    }
  lab_0x40b22c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40b22c
    int64_t v132 = v128; // 0x40b233
    int64_t v133 = v16; // 0x40b233
    int64_t v134 = v131; // 0x40b233
    int64_t v135; // 0x40afd0
    int64_t v136; // 0x40afd0
    int64_t v137; // 0x40afd0
    int64_t v138; // 0x40b4df
    if (v16 > v127) {
        goto lab_0x40b23c;
    } else {
        uint64_t v139 = 2 * v16; // 0x40b4d5
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x40b970_5;
        }
        int64_t size = 32 * v138; // 0x40b4fe
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40ba5c
            if (mem == NULL) {
                goto lab_0x40b989_3;
            }
            // 0x40ba7e
            v135 = (int64_t)mem;
            goto lab_0x40ba89;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40b51f
            int64_t v140 = *v6; // 0x40b524
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x40b970_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40b51f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x40ba89;
            } else {
                goto lab_0x40b55d;
            }
        }
    }
  lab_0x40b191:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x40b198
    int64_t v151 = v146; // 0x40b198
    int64_t v152 = v144; // 0x40b198
    uint64_t v153; // 0x40afd0
    int64_t v154; // 0x40afd0
    int64_t v155; // 0x40b1d7
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40b1db
        int64_t v158; // 0x40afd0
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x40b340
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x40b1d3
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x40b348
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x40b1d0
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x40b1d3
                    break;
                }
            }
        } else {
            // 0x40b1e0
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x40b1d3
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x40b348
    int64_t v162 = v161 % 256; // 0x40b354
    g80 = v162;
    int64_t v163 = 17; // 0x40b357
    int64_t v164 = v154; // 0x40b357
    int64_t v165 = v154; // 0x40b357
    switch ((char)v161) {
        case 0: {
            goto lab_0x40b3c1;
        }
        case 28: {
            goto lab_0x40b712;
        }
        case 30: {
            // 0x40b73e
            v163 = 14;
            v164 = 99;
            goto lab_0x40b369;
        }
        case 32: {
            goto lab_0x40b712;
        }
        case 33: {
            goto lab_0x40b712;
        }
        case 34: {
            goto lab_0x40b712;
        }
        case 46: {
            // 0x40b72f
            v163 = 16;
            v164 = 115;
            goto lab_0x40b369;
        }
        case 51: {
            goto lab_0x40b74d;
        }
        case 60: {
            goto lab_0x40b712;
        }
        case 62: {
            int32_t v166 = v153; // 0x40b669
            int32_t v167 = v166 - 7; // 0x40b669
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40b66f
            v163 = v168;
            v164 = v154;
            goto lab_0x40b369;
        }
        case 63: {
            goto lab_0x40b6c0;
        }
        case 64: {
            goto lab_0x40b712;
        }
        case 65: {
            goto lab_0x40b712;
        }
        case 66: {
            goto lab_0x40b712;
        }
        case 68: {
            goto lab_0x40b6c0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40b67f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x40b685
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40b68d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40b69b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40b6af
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x40b369;
        }
        case 74: {
            goto lab_0x40b74d;
        }
        case 75: {
            goto lab_0x40b369;
        }
        case 78: {
            int32_t v171 = v153; // 0x40b360
            int32_t v172 = v171 - 7; // 0x40b360
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x40b366
            v163 = v173;
            v164 = v154;
            goto lab_0x40b369;
        }
        case 80: {
            goto lab_0x40b74d;
        }
        case 83: {
            goto lab_0x40b74d;
        }
        default: {
            goto lab_0x40b798_9;
        }
    }
  lab_0x40b23c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x40b253
        int64_t v178 = v176; // 0x40afd0
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x40b248
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x40b248
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x40b261
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40b26d
    int32_t v182 = *v181; // 0x40b26d
    if (v182 != 0) {
        // 0x40b8ee
        if (v182 != 5) {
            goto lab_0x40b798_9;
        }
        unsigned char v183 = *(char *)v129; // 0x40b8f7
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x40b188;
    } else {
        // 0x40b277
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40b27d
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
            goto lab_0x40b191;
        } else {
            goto lab_0x40b290;
        }
    }
  lab_0x40b290:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x40b290
    char v197 = *v196; // 0x40b290
    int64_t * v198; // 0x40b0b8
    *v198 = v192;
    int64_t v199; // 0x40afd0
    int64_t v200; // 0x40afd0
    int64_t v201; // 0x40afd0
    int64_t v202; // 0x40afd0
    int64_t v203; // 0x40afd0
    int64_t * v204; // 0x40b0c1
    int64_t * v205; // 0x40b0ca
    int64_t v206; // 0x40b2a9
    if (v197 != 42) {
        char v207 = *v196; // 0x40b490
        int64_t v208 = v193; // 0x40b499
        char * v209; // 0x40afd0
        int64_t v210; // 0x40afd0
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x40b4a0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x40b4a4
            v208 = v212;
            while (v214 < 58) {
                // 0x40b4a0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40b4ae
            v209 = v213;
            v210 = v212;
        } else {
            // 0x40b490
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x40b4c1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x40b191;
    } else {
        // 0x40b29f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40b2bf
        int64_t v219 = v218; // 0x40b2bf
        int64_t v220 = v219 + 0xffffffd0; // 0x40b2c3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x40b2c9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x40bb74
            char v224 = *(char *)v223; // 0x40bb78
            v221 = v223;
            while (v224 < 58) {
                // 0x40bb74
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x40bb84
            v201 = v223;
            int64_t v225 = v219; // 0x40bb88
            int64_t v226 = v206; // 0x40bb88
            int64_t v227 = 0; // 0x40bb88
            if (v224 != 36) {
                goto lab_0x40b2cf;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x40bbb9
                int64_t v233 = v229; // 0x40bbb9
                int64_t v234 = v231; // 0x40bbb9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x40bbbe
                int64_t v239 = v236 + 1; // 0x40bbc5
                char v240 = *(char *)v239; // 0x40bbc9
                int64_t v241 = v240; // 0x40bbc9
                while (v238 < v235) {
                    // 0x40bbd7
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x40b798_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x40bb92
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x40bb9b
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
                        // 0x40bbd7
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x40b798_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x40bb92
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x40bca7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x40b798_9;
                }
                // 0x40bcb5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40b2de;
            }
        } else {
            goto lab_0x40b2cf;
        }
    }
  lab_0x40b3c1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x40b3c6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40b3ce
    *a2 = v245;
    int64_t v246; // 0x40afd0
    int64_t v247; // 0x40afd0
    int64_t dest_mem; // 0x40afd0
    int64_t v248; // 0x40afd0
    int64_t v249; // 0x40bcc3
    if (v246 > v245) {
        // 0x40b3da
        goto lab_0x40b048;
    } else {
        if (v246 < 0) {
            // 0x40bcc3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40b970_5;
        }
        int64_t v250 = 2 * v246; // 0x40b3f6
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x40bcc3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40b970_5;
        }
        int64_t v251 = *v5; // 0x40b407
        int64_t size2 = 176 * v246; // 0x40b419
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x40b569
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x40bacc
                v118 = v252;
                if (v4 == v252) {
                    // 0x40b999
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x40b977
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x40b989_3;
            }
            goto lab_0x40b584;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40b42b
            if (mem4 == NULL) {
                // 0x40bcc3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40b970_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40b42b
            int64_t v254 = *v5; // 0x40b44d
            int64_t v255 = *a2; // 0x40b451
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x40b584;
            } else {
                goto lab_0x40b45f;
            }
        }
    }
  lab_0x40b712:
    // 0x40b712
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x40b727
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x40b369;
  lab_0x40b74d:;
    uint32_t v335 = (int32_t)v153; // 0x40b755
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40b75b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40b763
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x40b771
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40b77e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40b369;
  lab_0x40b6c0:;
    uint32_t v336 = (int32_t)v153; // 0x40b6c8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40b6ce
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40b6d6
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x40b6e4
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40b6f1
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40b369;
  lab_0x40b369:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x40afd0
    int64_t v260; // 0x40afd0
    int64_t * v261; // 0x40b0cf
    if (v259 == -1) {
        // 0x40b874
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x40b798_9;
        }
        // 0x40b88c
        v260 = v148;
    } else {
        // 0x40b373
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x40b378
    int64_t v264 = v258; // 0x40b37f
    int64_t v265 = v162; // 0x40b37f
    int64_t v266 = v263; // 0x40b37f
    int64_t v267; // 0x40afd0
    int64_t v268; // 0x40afd0
    int64_t v269; // 0x40afd0
    int64_t v270; // 0x40afd0
    int64_t v271; // 0x40afd0
    if (v142 > v262) {
        goto lab_0x40b385;
    } else {
        uint64_t v272 = 2 * v142; // 0x40b7e8
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x40b7f2
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x40b970_5;
        }
        int64_t size3 = 32 * v273; // 0x40b811
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x40b824
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x40b909
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x40b989_3;
            }
            goto lab_0x40b926;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x40b831
            if (mem6 == NULL) {
                // 0x40bcc3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40b970_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x40b831
            int64_t v276 = v274 & 0xffffffff; // 0x40b836
            int64_t v277 = *v6; // 0x40b861
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x40b926;
            } else {
                goto lab_0x40b86b;
            }
        }
    }
  lab_0x40b385:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40b39b
        int64_t v282 = v279; // 0x40afd0
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x40b390
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x40b390
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x40b3a9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x40b3b5
    int32_t v286 = *v285; // 0x40b3b5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40b7da
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x40b798_9;
        }
    } else {
        // 0x40b3bf
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x40b3c1;
  lab_0x40ba89:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x40ba89
    int64_t * v290; // 0x40afd0
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40b55d;
  lab_0x40b55d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40b23c;
  lab_0x40b2cf:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40b2cf
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40bb4a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x40b798_9;
        }
        // 0x40bb62
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40b2de;
  lab_0x40b2de:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40b2de
    int64_t v300 = v296; // 0x40b2e5
    int64_t v301 = v191; // 0x40b2e5
    int64_t v302 = v299; // 0x40b2e5
    int64_t v303; // 0x40afd0
    int64_t v304; // 0x40afd0
    int64_t v305; // 0x40afd0
    int64_t v306; // 0x40b9c2
    if (v191 > v295) {
        goto lab_0x40b2ee;
    } else {
        uint64_t v307 = 2 * v191; // 0x40b9b8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x40b970_5;
        }
        int64_t size4 = 32 * v306; // 0x40b9dd
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40bc0e
            if (mem7 == NULL) {
                goto lab_0x40b989_3;
            }
            // 0x40bc30
            v304 = (int64_t)mem7;
            goto lab_0x40bc3b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x40b9fe
            int64_t v308 = *v6; // 0x40ba03
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x40b970_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x40b9fe
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40bc3b;
            } else {
                goto lab_0x40ba3c;
            }
        }
    }
  lab_0x40b584:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x40afd0
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40b45f;
  lab_0x40b45f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x40b048;
  lab_0x40b926:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40b93c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40b86b;
  lab_0x40b86b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x40b385;
  lab_0x40b2ee:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x40b303
        int64_t v324 = v322; // 0x40afd0
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x40b2f8
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x40b2f8
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x40b311
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x40b31e
    int32_t v328 = *v327; // 0x40b31e
    if (v328 != 0) {
        // 0x40ba45
        if (v328 != 5) {
            goto lab_0x40b798_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40ba4e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x40b328
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x40b331
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x40b191;
  lab_0x40bc3b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40bc3b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40ba3c;
  lab_0x40ba3c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40b2ee;
}
// Address range: 0x40bce0 - 0x40bd3d
int64_t function_40bce0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bce0
    return function_401630();
}
// Address range: 0x40bd40 - 0x40bd41
int64_t function_40bd40(void) {
    // 0x40bd40
    int64_t result; // 0x40bd40
    return result;
}
// Address range: 0x40bd50 - 0x40bd68
int64_t function_40bd50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bd50
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g24);
}
// Address range: 0x40bd68 - 0x40bd88
int64_t function_40bd68(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g20; // 0x40bd72
    while (*(int64_t *)v1 != -1) {
        // 0x40bd73
        v1 -= 8;
    }
    // 0x40bd84
    return result;
}
