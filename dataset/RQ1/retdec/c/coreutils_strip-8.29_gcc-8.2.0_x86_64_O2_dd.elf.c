// Address range: 0x401fa0 - 0x401fa5
int64_t function_401fa0(void) {
    // 0x401fa0
    abort();
    // UNREACHABLE
}
// Address range: 0x401fa5 - 0x401faa
int64_t function_401fa5(void) {
    // 0x401fa5
    abort();
    // UNREACHABLE
}
// Address range: 0x401faa - 0x401faf
int64_t function_401faa(void) {
    // 0x401faa
    abort();
    // UNREACHABLE
}
// Address range: 0x401faf - 0x401fb4
int64_t function_401faf(void) {
    // 0x401faf
    abort();
    // UNREACHABLE
}
// Address range: 0x401fb4 - 0x401fb9
int64_t function_401fb4(void) {
    // 0x401fb4
    abort();
    // UNREACHABLE
}
// Address range: 0x401fb9 - 0x401fbe
int64_t function_401fb9(void) {
    // 0x401fb9
    abort();
    // UNREACHABLE
}
// Address range: 0x401fbe - 0x401fc3
int64_t function_401fbe(void) {
    // 0x401fbe
    abort();
    // UNREACHABLE
}
// Address range: 0x401fd0 - 0x403c41
int64_t function_401fd0(int64_t a1, int64_t a2) {
    char * env_val = getenv("POSIXLY_CORRECT"); // 0x401feb
    sigemptyset((struct _TYPEDEF_sigset_t *)&g63);
    int64_t v1 = a2; // 0x402000
    int64_t v2 = a1 & 0xffffffff; // 0x402000
    int64_t v3 = (int64_t)env_val; // 0x402000
    if (env_val == NULL) {
        goto lab_0x403556;
    } else {
        goto lab_0x402006;
    }
  lab_0x402ef1:;
    int64_t v4 = function_4083e0(4, (int64_t)g106); // 0x402f0c
    int64_t v5 = (int64_t)"error writing %s"; // 0x402f0c
    int64_t v6; // 0x401fd0
    int64_t v7 = v6; // 0x402f0c
    int64_t v8; // 0x401fd0
    int64_t v9 = v8; // 0x402f0c
    goto lab_0x402f0f;
  lab_0x402770:;
    // 0x402770
    int64_t v134; // 0x401fd0
    int64_t v135 = v134; // 0x401fd0
    int64_t v136; // 0x401fd0
    int64_t v137 = v136; // 0x401fd0
    int64_t v138; // 0x401fd0
    int64_t v139 = v138; // 0x401fd0
    int64_t v133; // 0x401fd0
    int64_t v140 = v133; // 0x401fd0
    int64_t v141; // 0x401fd0
    int64_t v142 = v141; // 0x401fd0
    goto lab_0x402770_2;
  lab_0x4030a7:;
    // 0x4030a7
    int64_t v130; // 0x401fd0
    int64_t v31 = v130; // 0x4030ae
    int64_t v132; // 0x401fd0
    int64_t v27 = v132; // 0x4030ae
    int64_t v26; // 0x401fd0
    if (g53 == 0) {
        goto lab_0x4031ca;
    } else {
        if ((v130 & 8) != 0) {
            // 0x40365c
            function_404ef0((int64_t)&g52, 1);
            v31 = g94;
            v27 = &g52;
            goto lab_0x4031ca;
        } else {
            if ((v130 & 16) != 0) {
                // 0x4037aa
                function_405000((int64_t)&g52, 1);
                v31 = g94;
                v27 = &g52;
                goto lab_0x4031ca;
            } else {
                int64_t v174 = g72; // 0x4030c8
                int64_t v175 = v174 + 1; // 0x4030dd
                g72 = v175;
                *(char *)(g73 + v174) = g52;
                v26 = v132;
                if (v175 >= (int64_t)g103) {
                    // 0x4031bf
                    function_404e50();
                    v31 = g94;
                    v27 = v132;
                    goto lab_0x4031ca;
                } else {
                    goto lab_0x4030f9;
                }
            }
        }
    }
  lab_0x402808:;
    // 0x402808
    int32_t v171; // 0x4027e5
    int64_t v176 = v171; // 0x4027e5
    int64_t v177 = g78 + v176; // 0x40280b
    g78 = v177;
    if (v177 < v176) {
        // 0x40281e
        g77 = 1;
    }
    // 0x402825
    if (g59 != 0) {
        // 0x402cf8
        function_4045a0(0, v176);
    }
    // 0x402832
    int64_t v167; // 0x401fd0
    int64_t v178 = v167; // 0x40283c
    int64_t v179 = v176; // 0x40283c
    int64_t v180 = v167; // 0x40283c
    int64_t v181 = v176; // 0x40283c
    if (v171 < g104) {
        goto lab_0x402842;
    } else {
        goto lab_0x402c78;
    }
  lab_0x402b57:;
    int64_t v131 = g94; // 0x402b57
    int32_t * v182; // 0x4023b8
    char v127; // 0x40307c
    int32_t v128; // 0x403090
    if (v171 == 0) {
        // 0x403068
        g57 |= g59;
        v127 = *(char *)&g56;
        if (g58 == 0) {
            // 0x403068
            goto lab_0x403094;
        } else {
            // 0x403085
            v128 = (v131 & 512) == 0;
            *v182 = v128;
            goto lab_0x403094;
        }
    }
    int64_t v183 = v167; // 0x402b69
    int64_t v129; // 0x401fd0
    int64_t v32; // 0x401fd0
    int64_t v33; // 0x401fd0
    int32_t * v184; // 0x40275e
    int64_t * v185; // 0x4022e9
    if ((v131 & 256) != 0 != (g30 == 1)) {
        int64_t v186 = function_4083e0(4, (int64_t)g107); // 0x402b80
        char * v187 = dcgettext(NULL, "error reading %s", 5); // 0x402b94
        int32_t v188 = *(int32_t *)*v185; // 0x402ba6
        function_4041e0(0, v188, (int64_t)v187, v186, v129, v133);
        uint32_t v189 = g94; // 0x402baf
        v183 = v186;
        if ((v189 & 256) == 0) {
            // 0x40364f
            *v184 = 1;
            v32 = v129;
            v130 = v189;
            v132 = 0;
            v33 = v133;
            goto lab_0x4030a7;
        }
    }
    int64_t v190 = v183;
    function_4040b0();
    int64_t v168; // 0x401fd0
    uint64_t v191 = (int64_t)g104 - v168; // 0x402bcf
    function_4045a0(0, v191);
    int64_t v192; // 0x401fd0
    if (*(char *)&g80 != 0) {
        uint64_t v193 = g78 + v191; // 0x402d13
        g78 = v193;
        if (v193 >= v191) {
            char v194 = g77 | (char)(v193 / 0x8000000000000000); // 0x402dd7
            g77 = v194;
            if (v194 != 0) {
                goto lab_0x402d2e;
            } else {
                int32_t v195 = lseek(0, 0, SEEK_CUR); // 0x402dec
                if (v195 < 0) {
                    goto lab_0x402bf9;
                } else {
                    int64_t v196 = v195; // 0x402dec
                    v192 = v190;
                    if (v193 == v196) {
                        goto lab_0x402c4f;
                    } else {
                        int64_t v197 = v193 - v196; // 0x402e03
                        if (v191 >= v197 != v197 > -1 && g30 != 1) {
                            // 0x4033ee
                            function_4041e0(0, (int32_t)"warning: invalid file offset after failed read" ^ (int32_t)"warning: invalid file offset after failed read", (int64_t)dcgettext(NULL, "warning: invalid file offset after failed read", 5), v190, v129, v133);
                        }
                        // 0x402e15
                        v192 = 1;
                        if (function_4044d0((int64_t)g107, 0, v197, 1) >= 0) {
                            goto lab_0x402c4f;
                        } else {
                            // 0x402e34
                            if (*(int32_t *)*v185 == 0) {
                                // 0x402e42
                                function_4041e0(0, (int32_t)"cannot work around kernel bug after all" ^ (int32_t)"cannot work around kernel bug after all", (int64_t)dcgettext(NULL, "cannot work around kernel bug after all", 5), 1, v129, v133);
                            }
                            goto lab_0x402bf9;
                        }
                    }
                }
            }
        } else {
            // 0x402d27
            g77 = 1;
            goto lab_0x402d2e;
        }
    } else {
        int32_t v198 = g79; // 0x402be7
        v192 = v190;
        if (v198 == 29) {
            goto lab_0x402c4f;
        } else {
            // 0x402bf2
            *(int32_t *)*v185 = v198;
            goto lab_0x402bf9;
        }
    }
  lab_0x402842:;
    int64_t v199 = v179;
    int64_t v200 = v178;
    int32_t v201 = g94; // 0x402842
    g86++;
    int64_t v202 = v200; // 0x402859
    int64_t v203 = v199; // 0x402859
    int64_t v204 = v199; // 0x402859
    if ((v201 & 1024) != 0) {
        int32_t v205 = g104;
        int64_t v206 = v205;
        v202 = v200;
        v203 = v199;
        v204 = v206;
        if ((v201 & 256) == 0) {
            int32_t v207 = (v201 & 24) == 0 ? 0 : 32;
            memset((int64_t *)(g74 + v199), v207, v205 - (int32_t)v199);
            v202 = v200;
            v203 = v199;
            v204 = v206;
        }
    }
    goto lab_0x402890;
  lab_0x402c78:
    // 0x402c78
    g85++;
    v202 = v180;
    v203 = 0;
    v204 = v181;
    goto lab_0x402890;
  lab_0x402890:;
    int64_t v173 = v204;
    v141 = v203;
    v134 = v202;
    if (g74 == g73) {
        // break -> 0x402d9b
        goto lab_0x402d9b;
    }
    // 0x4028a7
    if (v173 != 0 && g89 != 0) {
        int64_t v208 = g74; // 0x402d7d
        char * v209 = (char *)v208; // 0x402d80
        v208++;
        *v209 = *(char *)((int64_t)*v209 + (int64_t)&g54);
        while (v208 != g74 + v173) {
            // 0x402d80
            v209 = (char *)v208;
            v208++;
            *v209 = *(char *)((int64_t)*v209 + (int64_t)&g54);
        }
    }
    uint32_t v210 = g94; // 0x4028b4
    int64_t v211 = g74; // 0x4028bf
    int64_t v212 = v173; // 0x4028bf
    if ((char)v210 <= -1) {
        // 0x402ca0
        int64_t v213; // 0x401fd0
        int64_t v214; // 0x401fd0
        int64_t v215; // 0x401fd0
        if (g53 != 0) {
            int64_t v216 = g74 - 1; // 0x402ea5
            g53 = 0;
            *(char *)v216 = g52;
            v214 = v216;
            v215 = g74;
            v213 = v173 + 1;
        } else {
            // 0x402cad
            v214 = g74;
            v215 = g74 + 1;
            v213 = v173;
        }
        int64_t v217 = v213;
        int64_t v218 = v215;
        int64_t v219 = v214;
        int64_t v220; // 0x401fd0
        int64_t v221; // 0x401fd0
        if (v217 % 2 != 0) {
            int64_t v222 = v217 - 1; // 0x402e82
            g53 = 1;
            int64_t v223 = v222 + v219; // 0x402e8d
            g52 = *(char *)v223;
            v221 = v223;
            v220 = v222;
        } else {
            // 0x402cbe
            v221 = v217 + v219;
            v220 = v217;
        }
        int64_t v224 = v220;
        int64_t v225 = v221 - (v224 & -2); // 0x402ccd
        v211 = v218;
        v212 = v224;
        int64_t v226 = v221; // 0x402cd4
        if (v224 >= 2) {
            int64_t v227 = v226 - 2; // 0x402ce0
            *(char *)v226 = *(char *)v227;
            v211 = v218;
            v212 = v224;
            v226 = v227;
            while (v227 != v225) {
                // 0x402ce0
                v227 = v226 - 2;
                *(char *)v226 = *(char *)v227;
                v211 = v218;
                v212 = v224;
                v226 = v227;
            }
        }
    }
    int64_t v228 = v210; // 0x4028b4
    int64_t v229 = v212;
    int64_t v230 = v211;
    if ((v228 & 8) != 0) {
        // 0x402c90
        function_404ef0(v230, v229);
        v136 = v230;
        v138 = v228;
        goto lab_0x402770;
    }
    uint32_t v231 = v210 & 16; // 0x4028cf
    int64_t v232 = v231; // 0x4028cf
    if (v231 == 0) {
        int64_t v233; // 0x401fd0
        uint64_t v234 = v233;
        int64_t v235; // 0x401fd0
        int64_t v236 = v235;
        uint64_t v237 = (int64_t)g103; // 0x402ab5
        uint64_t v238 = v237 - g72; // 0x402ac9
        int64_t v239 = v238 > v234 ? v234 : v238; // 0x402acf
        int64_t v240; // 0x401fd0
        int64_t v241 = g72 + v240; // 0x402ad3
        int64_t v242 = v239 + g72; // 0x402adf
        memcpy((int64_t *)v241, (int64_t *)v236, (int32_t)v239);
        g72 = v242;
        if (v242 >= v237) {
            // 0x402af3
            function_404e50();
        }
        int64_t v243 = v234 - v239; // 0x402ad9
        v136 = v241;
        v138 = v232;
        while (v243 != 0) {
            // 0x402aae
            v235 = v239 + v236;
            v240 = g73;
            v233 = v243;
            v234 = v233;
            v236 = v235;
            v237 = (int64_t)g103;
            v238 = v237 - g72;
            v239 = v238 > v234 ? v234 : v238;
            v241 = g72 + v240;
            v242 = v239 + g72;
            memcpy((int64_t *)v241, (int64_t *)v236, (int32_t)v239);
            g72 = v242;
            if (v242 >= v237) {
                // 0x402af3
                function_404e50();
            }
            // 0x402aa5
            v243 = v234 - v239;
            v136 = v241;
            v138 = v232;
        }
        goto lab_0x402770;
    }
    // 0x4028d9
    function_405000(v230, v229);
    int64_t v148 = v134; // 0x4028eb
    int64_t v149 = v230; // 0x4028eb
    int64_t v150 = v232; // 0x4028eb
    int64_t v151 = v133; // 0x4028eb
    int64_t v152 = v141; // 0x4028eb
    if (g30 == 4) {
        goto lab_0x4028f1;
    }
    int64_t v244 = g31; // 0x40278d
    int64_t v245 = g86 + g85; // 0x402794
    int64_t v246 = g94; // 0x40279e
    int64_t v161 = v246; // 0x4027ad
    int64_t v162 = v245; // 0x4027ad
    int64_t v163 = v244; // 0x4027ad
    int64_t v164 = v141; // 0x4027ad
    int64_t v165 = v232; // 0x4027ad
    int64_t v166 = v134; // 0x4027ad
    v32 = v232;
    v130 = v246;
    v132 = v230;
    v33 = v133;
    if (v245 >= (int64_t)(g96 != 0) + v244) {
        // break (via goto) -> 0x4030a7
        goto lab_0x4030a7;
    }
    goto lab_0x4027b3;
  lab_0x402c4f:
    // 0x402c4f
    if (v168 != 0 || (g95 & 4) == 0) {
        goto lab_0x402770;
    }
    // 0x402c65
    v178 = v192;
    v179 = 0;
    v180 = v192;
    v181 = 0;
    if (g104 == 0) {
        goto lab_0x402c78;
    } else {
        goto lab_0x402842;
    }
  lab_0x402d2e:;
    int64_t v247 = function_4083e0(4, (int64_t)g107); // 0x402d3a
    function_4041e0(0, (int32_t)"offset overflow while reading file %s" ^ (int32_t)"offset overflow while reading file %s", (int64_t)dcgettext(NULL, "offset overflow while reading file %s", 5), v247, v129, v133);
    int64_t v248 = v247; // 0x402d64
    goto lab_0x402c36;
  lab_0x402bf9:;
    int64_t v567 = function_4084b0(0, 3, (int64_t)g107); // 0x402c07
    char * v568 = dcgettext(NULL, "%s: cannot seek", 5); // 0x402c1b
    int32_t v569 = *(int32_t *)*v185; // 0x402c2d
    function_4041e0(0, v569, (int64_t)v568, v567, v129, v133);
    v248 = v567;
    goto lab_0x402c36;
  lab_0x402c36:
    // 0x402c36
    *(char *)&g80 = 0;
    g79 = 29;
    *v184 = 1;
    v192 = v248;
    goto lab_0x402c4f;
  lab_0x403556:
    // 0x403556
    sigaddset((struct _TYPEDEF_sigset_t *)&g63, SIGBUS);
    int64_t v249; // 0x401fd0
    int64_t v250 = v249; // 0x403565
    int64_t v251; // 0x401fd0
    int64_t v252 = v251; // 0x403565
    goto lab_0x402006;
  lab_0x402006:;
    // 0x402006
    int64_t v253; // bp-248, 0x401fd0
    int64_t v12 = &v253; // 0x401fe4
    int64_t v254 = v252;
    int64_t v255 = v250;
    int64_t v256 = v3;
    int64_t v257 = v1;
    int64_t v47 = v12 + 32; // 0x402008
    struct sigaction * oact = (struct sigaction *)v47; // 0x402012
    sigaction(SIGINT, NULL, oact);
    int64_t * v258 = (int64_t *)v47; // 0x402017
    if (*v258 != 1) {
        // 0x40201f
        sigaddset((struct _TYPEDEF_sigset_t *)&g63, SIGINT);
    }
    int128_t v259 = __asm_movdqa(*(int128_t *)&g63); // 0x40202e
    int128_t v260 = __asm_movdqa(g64); // 0x402036
    int128_t v261 = __asm_movdqa(g65); // 0x402048
    int128_t v262 = __asm_movdqa(g66); // 0x402050
    int128_t v263 = __asm_movdqa(g67); // 0x402058
    int128_t v264 = __asm_movdqa(g68); // 0x402060
    __asm_movups(*(int128_t *)(v12 + 40), v259);
    int128_t v265 = __asm_movdqa(g69); // 0x40206d
    int128_t v266 = __asm_movdqa(g70); // 0x402075
    int64_t v56 = v12 + 56; // 0x40207d
    __asm_movups(*(int128_t *)v56, v260);
    __asm_movups(*(int128_t *)(v12 + 72), v261);
    __asm_movups(*(int128_t *)(v12 + 88), v262);
    __asm_movups(*(int128_t *)(v12 + 104), v263);
    __asm_movups(*(int128_t *)(v12 + 120), v264);
    __asm_movups(*(int128_t *)(v12 + 136), v265);
    __asm_movups(*(int128_t *)(v12 + 152), v266);
    int32_t v267 = sigismember((struct _TYPEDEF_sigset_t *)&g63, SIGBUS); // 0x4020a6
    int64_t v268 = v47; // 0x4020ad
    if (v267 != 0) {
        // 0x40330d
        *v258 = 0x403d40;
        *(int32_t *)(v12 + 168) = 0;
        sigaction(SIGBUS, oact, NULL);
        v268 = 0;
    }
    int32_t v269 = sigismember((struct _TYPEDEF_sigset_t *)&g63, SIGINT); // 0x4020bd
    int64_t v270 = v268; // 0x4020c4
    if (v269 != 0) {
        // 0x4032e3
        *v258 = 0x403d30;
        *(int32_t *)(v12 + 168) = -0x40000000;
        sigaction(SIGINT, oact, NULL);
        v270 = 0;
    }
    // 0x4020ca
    function_406a10(*(int64_t *)v257);
    setlocale(LC_ALL, (char *)&g19);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40da80(0x404720, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v270);
    int32_t v271 = getpagesize(); // 0x402104
    *(int64_t *)(v12 - 8) = 0;
    int64_t v272 = v2 & 0xffffffff; // 0x402112
    *(int64_t *)(v12 - 16) = (int64_t)"Stuart Kemp";
    *(int64_t *)(v12 - 24) = (int64_t)"David MacKenzie";
    *(int64_t *)(v12 - 32) = (int64_t)"Paul Rubin";
    g105 = v271;
    function_406900(v272, v257, "dd", "coreutils", (int64_t)g32, 0x405460);
    g27 = 0;
    int64_t v273 = function_40a500(v272, v257, (int64_t *)&g19, &g5, 0, 0x405460); // 0x402163
    if ((int32_t)v273 != -1) {
        // 0x403915
        function_405460(1);
        // UNREACHABLE
    }
    int64_t v274 = 0;
    *(char *)(v274 + (int64_t)&g54) = (char)v274;
    int64_t v275 = v274 + 1; // 0x402188
    while (v274 != 255) {
        // 0x402178
        v274 = v275;
        *(char *)(v274 + (int64_t)&g54) = (char)v274;
        v275 = v274 + 1;
    }
    int64_t v276 = g41; // 0x40218a
    int64_t v83; // 0x401fd0
    int64_t v89; // 0x401fd0
    int64_t v90; // 0x401fd0
    int64_t v91; // 0x401fd0
    int64_t v92; // 0x401fd0
    int64_t v82; // 0x401fd0
    int64_t v88; // 0x401fd0
    int64_t v87; // 0x401fd0
    int64_t v86; // 0x401fd0
    if (v2 > v276) {
        // 0x402198
        *(int64_t *)(v12 + 8) = 0;
        v82 = 0;
        v83 = (0x100000000 * v276 >> 29) + v257;
        goto lab_0x4021c8;
    } else {
        // 0x402a52
        *(int64_t *)(v12 + 8) = 0;
        v86 = v257;
        v87 = -1;
        v88 = 0;
        v89 = v256;
        v90 = 0;
        v91 = v255;
        v92 = v254;
        goto lab_0x402a62;
    }
  lab_0x4021c8:;
    int64_t v106 = v83;
    int64_t str = *(int64_t *)v106; // 0x4021c8
    char * found_char_pos = strchr((char *)str, 61); // 0x4021d4
    int64_t v277 = v82; // 0x4021dc
    int64_t v278 = str; // 0x4021dc
    int64_t v81; // 0x401fd0
    int64_t v107; // 0x401fd0
    int64_t v73; // 0x401fd0
    int64_t v108; // 0x401fd0
    int64_t v71; // 0x401fd0
    int64_t v85; // 0x401fd0
    int64_t v75; // 0x401fd0
    int64_t v105; // 0x401fd0
    int64_t v77; // 0x401fd0
    int64_t v104; // 0x401fd0
    int64_t v79; // 0x401fd0
    int64_t v103; // 0x4021e2
    if (found_char_pos == NULL) {
        goto lab_0x403980;
    } else {
        // 0x4021e2
        char v279; // 0x401fd0
        int64_t v280; // 0x401fd0
        while (*(char *)v280 == v279) {
            // 0x402209
            int64_t v281; // 0x401fd0
            int64_t v282 = v281;
            int64_t v283; // 0x401fd0
            int64_t v284 = v283 + 1; // 0x4021f8
            int64_t v285 = v282 + 1; // 0x4021fc
            char v286 = *(char *)v285; // 0x402209
            v279 = v286;
            v281 = v285;
            v280 = v284;
            if (v286 == 0) {
                char v287 = *(char *)v284; // 0x402210
                if (v287 != 0 == (v287 != 61)) {
                    goto lab_0x402920;
                } else {
                    // 0x40221f
                    g107 = v103;
                    v79 = v104;
                    v77 = v105;
                    v75 = v103;
                    v81 = v106;
                    v73 = v107;
                    v71 = v108;
                    v85 = str;
                    goto lab_0x402226;
                }
            }
            v283 = v280;
            char v288 = v279;
            char v289 = *(char *)v283; // 0x402200
        }
        goto lab_0x402920;
    }
  lab_0x402a62:;
    int64_t v290 = v92;
    int64_t v291 = v91;
    int64_t v292 = v90;
    int64_t v293 = v89;
    int64_t v294 = v88;
    int64_t v295 = v87;
    int64_t v296 = v86;
    g94 |= 2048;
    int32_t v297 = g104; // 0x402a74
    if (g104 == 0) {
        // 0x402a76
        g104 = 512;
        v297 = 512;
    }
    int32_t v298 = v297;
    int32_t v94 = g103; // 0x402a89
    int32_t v95 = v298; // 0x402a89
    int64_t v96 = v296; // 0x402a89
    int64_t v97 = v295; // 0x402a89
    int64_t v98 = v294; // 0x402a89
    int64_t v99 = v293; // 0x402a89
    int64_t v100 = v292; // 0x402a89
    int64_t v101 = v291; // 0x402a89
    int64_t v102 = v290; // 0x402a89
    if (g103 == 0) {
        // 0x402a8f
        g103 = 512;
        v94 = 512;
        v95 = v298;
        v96 = v296;
        v97 = v295;
        v98 = v294;
        v99 = v293;
        v100 = v292;
        v101 = v291;
        v102 = v290;
    }
    goto lab_0x402246;
  lab_0x403980:;
    int64_t v458 = function_408630(v278); // 0x403983
    function_4041e0(0, (int32_t)"unrecognized operand %s" ^ (int32_t)"unrecognized operand %s", (int64_t)dcgettext(NULL, "unrecognized operand %s", 5), v458, v277, 0x405460);
    // 0x403915
    function_405460(1);
    // UNREACHABLE
  lab_0x402246:;
    int64_t v299 = v102;
    int64_t v300 = v101;
    int64_t v301 = v100;
    int64_t v302 = v99;
    int64_t v303 = v98;
    uint64_t v304 = v97;
    int64_t v305 = v96;
    int32_t v306 = v95; // 0x4022d4
    int32_t v307 = v94; // 0x4022ff
    if (g102 == 0) {
        // 0x402250
        g94 &= -25;
    }
    int32_t v308 = g92; // 0x402257
    int32_t v309 = v308; // 0x402262
    if ((v308 & 0x101000) != 0) {
        int32_t v310 = v308 | 0x101000; // 0x402264
        g92 = v310;
        v309 = v310;
    }
    uint32_t v311 = g90; // 0x40226f
    uint32_t v312; // 0x40227f
    int32_t v313; // 0x401fd0
    int64_t v314; // 0x401fd0
    int64_t v315; // 0x401fd0
    uint32_t v316; // 0x402314
    int64_t v317; // 0x40226f
    int64_t v318; // 0x40227f
    if (v311 % 2 != 0) {
        // 0x4038e1
        v314 = function_408630((int64_t)"fullblock");
        v315 = (int64_t)"invalid output flag";
        goto lab_0x4038f8;
    } else {
        // 0x40227f
        v312 = v309;
        if ((v312 & 16) != 0) {
            goto lab_0x403b57;
        } else {
            // 0x40228e
            v317 = v311;
            if ((v317 & 12) != 0) {
                int64_t v319 = (v317 & 4) == 0 ? (int64_t)"skip_bytes" : (int64_t)"count_bytes"; // 0x403b81
                v314 = function_408630(v319);
                v315 = (int64_t)"invalid output flag";
                goto lab_0x4038f8;
            } else {
                // 0x402298
                v318 = v312;
                if ((v318 & 8) == 0) {
                    if (v301 != 0) {
                        // 0x402fbf
                        g101 = v301;
                    }
                } else {
                    if (v301 != 0) {
                        uint64_t v320 = (int64_t)v306; // 0x4022ab
                        g101 = v301 / v320;
                        g100 = v301 % v320;
                    }
                }
                if ((v318 & 4) == 0) {
                    if (v304 != -1) {
                        // 0x402faa
                        g31 = v304;
                    }
                } else {
                    if (v304 != -1) {
                        uint64_t v321 = (int64_t)v306; // 0x4022d4
                        g31 = v304 / v321;
                        g96 = v304 % v321;
                    }
                }
                // 0x4022e9
                v185 = (int64_t *)(v12 + 8);
                uint64_t v322 = *v185; // 0x4022e9
                if ((v317 & 16) == 0) {
                    if (v322 != 0) {
                        // 0x403007
                        g99 = v322;
                    }
                } else {
                    if (v322 != 0) {
                        uint64_t v323 = (int64_t)v307; // 0x4022ff
                        g99 = v322 / v323;
                        g98 = v322 % v323;
                    }
                }
                // 0x402314
                v316 = g94;
                uint32_t v324 = v312 % 2; // 0x40231c
                if ((v316 & 2048 || v324) != 0) {
                    // 0x402e66
                    g76 = 0;
                    v313 = v324 == 0 ? 0x404900 : 0x404a10;
                    goto lab_0x402349;
                } else {
                    // 0x40232f
                    if (g101 == 0) {
                        // 0x403412
                        if ((int64_t)g31 < 0xffffffffffffffff) {
                            // 0x40233d
                            g76 = 1;
                            v313 = 0x404900;
                            goto lab_0x402349;
                        } else {
                            if (((v311 | v312) & 0x4000) != 0) {
                                // 0x40233d
                                g76 = 1;
                                v313 = 0x404900;
                                goto lab_0x402349;
                            } else {
                                // 0x403434
                                g76 = 0;
                                v313 = 0x404900;
                                goto lab_0x402349;
                            }
                        }
                    } else {
                        // 0x40233d
                        g76 = 1;
                        v313 = 0x404900;
                        goto lab_0x402349;
                    }
                }
            }
        }
    }
  lab_0x402920:;
    int64_t v325 = (int64_t)"of"; // 0x402928
    char v326 = 111;
    int64_t v327 = str;
    while (*(char *)v327 == v326) {
        int64_t v328 = v327 + 1; // 0x40292d
        int64_t v329 = v325 + 1; // 0x402931
        char v330 = *(char *)v329; // 0x40293a
        int64_t v331 = v328; // 0x40293f
        char v332 = v330; // 0x40293f
        v325 = v329;
        if (v330 == 0) {
            char v333 = *(char *)v328; // 0x402941
            if (v333 != 61 == (v333 != 0)) {
                goto lab_0x402960;
            } else {
                // 0x40294c
                g106 = v103;
                v79 = v104;
                v77 = v105;
                v75 = v103;
                v81 = v106;
                v73 = v107;
                v71 = v108;
                v85 = str;
                goto lab_0x402226;
            }
        }
        v326 = v332;
        v327 = v331;
    }
    goto lab_0x402960;
  lab_0x402960:;
    int64_t v334 = (int64_t)"conv"; // 0x402968
    char v335 = 99;
    int64_t v336 = str;
    while (*(char *)v336 == v335) {
        int64_t v337 = v336 + 1; // 0x40296d
        int64_t v338 = v334 + 1; // 0x402971
        char v339 = *(char *)v338; // 0x40297a
        int64_t v340 = v337; // 0x40297f
        char v341 = v339; // 0x40297f
        v334 = v338;
        if (v339 == 0) {
            char v342 = *(char *)v337; // 0x402981
            if (v342 != 0 == (v342 != 61)) {
                goto lab_0x4029b0;
            } else {
                int64_t v343 = function_4059d0(v103, "ascii", 0, "invalid conversion"); // 0x40299b
                g94 |= (int32_t)v343;
                v79 = v104;
                v77 = v105;
                v75 = v103;
                v81 = v106;
                v73 = v107;
                v71 = v108;
                v85 = str;
                goto lab_0x402226;
            }
        }
        v335 = v341;
        v336 = v340;
    }
    goto lab_0x4029b0;
  lab_0x4038f8:
    // 0x4038f8
    function_4041e0(0, 0, (int64_t)"%s: %s", (int64_t)dcgettext(NULL, (char *)v315, 5), v314, 0x405460);
    // 0x403915
    function_405460(1);
    // UNREACHABLE
  lab_0x403b57:
    // 0x403b57
    v314 = function_408630((int64_t)"seek_bytes");
    v315 = (int64_t)"invalid input flag";
    goto lab_0x4038f8;
  lab_0x4029b0:;
    char v344 = 105; // 0x4029bd
    int64_t v345 = (int64_t)"iflag"; // 0x4029bd
    int64_t v346 = str;
    while (*(char *)v346 == v344) {
        int64_t v347 = v346 + 1; // 0x4029c0
        int64_t v348 = v345 + 1; // 0x4029c4
        char v349 = *(char *)v348; // 0x4029cd
        int64_t v350 = v347; // 0x4029d2
        v344 = v349;
        v345 = v348;
        if (v349 == 0) {
            // 0x4029d4
            switch (*(char *)v347) {
                case 61: {
                    goto lab_0x4029db;
                }
                case 0: {
                    goto lab_0x4029db;
                }
                default: {
                    goto lab_0x4029fe;
                }
            }
        }
        v346 = v350;
    }
    goto lab_0x4029fe;
  lab_0x4029fe:;
    char v351 = 111; // 0x402a0b
    int64_t v352 = (int64_t)"oflag"; // 0x402a0b
    int64_t v353 = str;
    while (*(char *)v353 == v351) {
        int64_t v354 = v353 + 1; // 0x402a10
        int64_t v355 = v352 + 1; // 0x402a14
        char v356 = *(char *)v355; // 0x402a21
        int64_t v357 = v354; // 0x402a26
        v351 = v356;
        v352 = v355;
        if (v356 == 0) {
            // 0x402a28
            switch (*(char *)v354) {
                case 61: {
                    goto lab_0x402a33;
                }
                case 0: {
                    goto lab_0x402a33;
                }
                default: {
                    goto lab_0x403386;
                }
            }
        }
        v353 = v357;
    }
    goto lab_0x403386;
  lab_0x403386:;
    char v358 = 115; // 0x403393
    int64_t v359 = (int64_t)"status"; // 0x403393
    int64_t v360 = str;
    while (*(char *)v360 == v358) {
        int64_t v361 = v360 + 1; // 0x403398
        int64_t v362 = v359 + 1; // 0x40339c
        char v363 = *(char *)v362; // 0x4033a9
        int64_t v364 = v361; // 0x4033ae
        v358 = v363;
        v359 = v362;
        if (v363 == 0) {
            char v365 = *(char *)v361; // 0x4033b0
            if (v365 != 61 == (v365 != 0)) {
                goto lab_0x403676;
            } else {
                // 0x4033bf
                g30 = function_4059d0(v103, "none", 1, "invalid status level");
                v79 = v104;
                v77 = v105;
                v75 = v103;
                v81 = v106;
                v73 = v107;
                v71 = v108;
                v85 = str;
                goto lab_0x402226;
            }
        }
        v360 = v364;
    }
    goto lab_0x403676;
  lab_0x402349:
    // 0x402349
    g55 = v313;
    g92 = v312 & -2;
    int64_t v546; // 0x401fd0
    int64_t v464; // 0x401fd0
    uint64_t v462; // 0x402314
    if ((v316 % 8 & v316 + 7) != 0) {
        // 0x403b9c
        function_4041e0(1, (int32_t)"cannot combine any two of {ascii,ebcdic,ibm}" ^ (int32_t)"cannot combine any two of {ascii,ebcdic,ibm}", (int64_t)dcgettext(NULL, "cannot combine any two of {ascii,ebcdic,ibm}", 5), v318, v303, 0x405460);
        goto lab_0x403bbe;
    } else {
        int32_t v547 = v316 & 24; // 0x40236d
        char * v548; // 0x403b41
        if ((v547 + 31 & v547) != 0) {
            // 0x403b13
            function_4041e0(1, (int32_t)"cannot combine block and unblock" ^ (int32_t)"cannot combine block and unblock", (int64_t)dcgettext(NULL, "cannot combine block and unblock", 5), v318, v303, 0x405460);
            // 0x403b35
            v548 = dcgettext(NULL, "cannot combine lcase and ucase", 5);
            function_4041e0(1, (int32_t)"cannot combine lcase and ucase" ^ (int32_t)"cannot combine lcase and ucase", (int64_t)v548, v318, v303, 0x405460);
            goto lab_0x403b57;
        } else {
            int32_t v549 = v316 & 96; // 0x40237d
            if ((v549 + 127 & v549) != 0) {
                // 0x403b35
                v548 = dcgettext(NULL, "cannot combine lcase and ucase", 5);
                function_4041e0(1, (int32_t)"cannot combine lcase and ucase" ^ (int32_t)"cannot combine lcase and ucase", (int64_t)v548, v318, v303, 0x405460);
                goto lab_0x403b57;
            } else {
                int32_t v550 = v316 & 0x3000; // 0x40238d
                if ((v550 + 0x3fff & v550) != 0) {
                    goto lab_0x403bbe;
                } else {
                    int32_t v551 = v312 & 0x4002; // 0x4023a1
                    int32_t v552 = v311 & 0x4002; // 0x4023a6
                    uint32_t v553 = v552 + 0x7fff & v552 | v551 + 0x7fff & v551; // 0x4023b6
                    v182 = (int32_t *)(v12 + 28);
                    *v182 = v553;
                    v546 = v553;
                    if (v553 != 0) {
                        goto lab_0x403be0;
                    } else {
                        int64_t v554 = v318; // 0x4023c5
                        if ((v318 & 2) != 0) {
                            // 0x4023c7
                            g59 = 1;
                            g57 = ((int64_t)g96 | (int64_t)g31) == 0;
                            v554 = v318 & 0xfffffffc;
                            g92 = v554;
                        }
                        // 0x4023ec
                        if ((v317 & 2) != 0) {
                            // 0x4023f2
                            g58 = 1;
                            *(char *)&g56 = (char)(((int64_t)g96 | (int64_t)g31) == 0);
                            g90 = v311 & -3;
                        }
                        // 0x402417
                        v462 = (int64_t)v316;
                        int64_t v555 = (int64_t)&g54; // 0x40241b
                        int64_t v556 = v554; // 0x40241b
                        if (v462 % 2 != 0) {
                            char * v557 = (char *)v555; // 0x402430
                            int64_t v558 = v555 + 1; // 0x402433
                            *v557 = *(char *)((int64_t)*v557 + (int64_t)&g2);
                            v555 = v558;
                            while (v558 != (int64_t)&g55) {
                                // 0x402430
                                v557 = (char *)v555;
                                v558 = v555 + 1;
                                *v557 = *(char *)((int64_t)*v557 + (int64_t)&g2);
                                v555 = v558;
                            }
                            // 0x402446
                            g89 = 1;
                            v556 = &g55;
                        }
                        if ((v462 & 64) == 0) {
                            // 0x403013
                            v464 = v556;
                            if ((v462 & 32) == 0) {
                                goto lab_0x402489;
                            } else {
                                int32_t * v559 = *__ctype_tolower_loc(); // 0x403027
                                int64_t v560 = (int64_t)&g54; // 0x40302f
                                char * v561 = (char *)v560; // 0x403030
                                v560++;
                                int32_t v562 = *(int32_t *)(4 * (int64_t)*v561 + (int64_t)v559); // 0x403037
                                *v561 = (char)v562;
                                while (v560 != (int64_t)&g55) {
                                    // 0x403030
                                    v561 = (char *)v560;
                                    v560++;
                                    v562 = *(int32_t *)(4 * (int64_t)*v561 + (int64_t)v559);
                                    *v561 = (char)v562;
                                }
                                // 0x402482
                                g89 = 1;
                                v464 = &g55;
                                goto lab_0x402489;
                            }
                        } else {
                            int32_t * v563 = *__ctype_toupper_loc(); // 0x402461
                            int64_t v564 = (int64_t)&g54; // 0x402469
                            char * v565 = (char *)v564; // 0x402470
                            v564++;
                            int32_t v566 = *(int32_t *)(4 * (int64_t)*v565 + (int64_t)v563); // 0x402477
                            *v565 = (char)v566;
                            while (v564 != (int64_t)&g55) {
                                // 0x402470
                                v565 = (char *)v564;
                                v564++;
                                v566 = *(int32_t *)(4 * (int64_t)*v565 + (int64_t)v563);
                                *v565 = (char)v566;
                            }
                            // 0x402482
                            g89 = 1;
                            v464 = &g55;
                            goto lab_0x402489;
                        }
                    }
                }
            }
        }
    }
  lab_0x403676:;
    int64_t * v366 = (int64_t *)(v12 + 16); // 0x40367e
    *v366 = v103;
    int32_t * v122 = (int32_t *)v47;
    *v122 = 0;
    int64_t v111 = function_4042d0(v103, v47); // 0x40368b
    int64_t v115 = *v366; // 0x403690
    int64_t v367 = (int64_t)"ibs"; // 0x40369d
    char v368 = 105; // 0x40369d
    int64_t v369 = str;
    int64_t v119; // 0x401fd0
    int64_t v121; // 0x401fd0
    while (*(char *)v369 == v368) {
        int64_t v370 = v369 + 1; // 0x4036a2
        int64_t v371 = v367 + 1; // 0x4036a6
        char v372 = *(char *)v371; // 0x4036b4
        v367 = v371;
        int64_t v373 = v370; // 0x4036ba
        v368 = v372;
        if (v372 == 0) {
            char v374 = *(char *)v370; // 0x4036bc
            if (v374 != 61 == (v374 != 0)) {
                goto lab_0x4037c4;
            } else {
                // 0x4036cc
                g104 = v111;
                uint64_t v375 = -4 - 2 * (int64_t)g105; // 0x4036eb
                v121 = v375 < 0x7fffffffffffffff ? v375 : 0x7fffffffffffffff;
                v119 = v108;
                goto lab_0x4036f5;
            }
        }
        v369 = v373;
    }
    goto lab_0x4037c4;
  lab_0x4037c4:;
    int64_t v376 = (int64_t)"obs"; // 0x4037cc
    char v377 = 111; // 0x4037cc
    int64_t v378 = str;
    while (*(char *)v378 == v377) {
        int64_t v379 = v378 + 1; // 0x4037d1
        int64_t v380 = v376 + 1; // 0x4037d5
        char v381 = *(char *)v380; // 0x4037e3
        v376 = v380;
        int64_t v382 = v379; // 0x4037e9
        v377 = v381;
        if (v381 == 0) {
            char v383 = *(char *)v379; // 0x4037eb
            if (v383 != 61 == (v383 != 0)) {
                goto lab_0x40391f;
            } else {
                int64_t v384 = g105; // 0x4037fb
                g103 = v111;
                uint64_t v385 = -v384; // 0x403813
                int64_t v386 = v385 < 0x7fffffffffffffff | v384 == -0x7fffffffffffffff ? v385 : 0x7fffffffffffffff; // 0x403819
                v121 = v386;
                v119 = v108;
                goto lab_0x4036f5;
            }
        }
        v378 = v382;
    }
    goto lab_0x40391f;
  lab_0x403bbe:
    // 0x403bbe
    function_4041e0(1, (int32_t)"cannot combine excl and nocreat" ^ (int32_t)"cannot combine excl and nocreat", (int64_t)dcgettext(NULL, "cannot combine excl and nocreat", 5), v318, v303, 0x405460);
    v546 = v305;
    goto lab_0x403be0;
  lab_0x40391f:;
    int64_t v387 = (int64_t)"bs"; // 0x403927
    char v388 = 98; // 0x403927
    int64_t v389 = str;
    while (*(char *)v389 == v388) {
        int64_t v390 = v389 + 1; // 0x40392c
        int64_t v391 = v387 + 1; // 0x403930
        char v392 = *(char *)v391; // 0x40393e
        v387 = v391;
        int64_t v393 = v390; // 0x403944
        v388 = v392;
        if (v392 == 0) {
            char v394 = *(char *)v390; // 0x403946
            if (v394 != 61 == (v394 != 0)) {
                goto lab_0x403822;
            } else {
                uint64_t v395 = -4 - 2 * (int64_t)g105; // 0x403971
                v121 = v395 < 0x7fffffffffffffff ? v395 : 0x7fffffffffffffff;
                v119 = v111;
                goto lab_0x4036f5;
            }
        }
        v389 = v393;
    }
    goto lab_0x403822;
  lab_0x403be0:;
    int64_t v431 = function_4041e0(1, (int32_t)"cannot combine direct and nocache" ^ (int32_t)"cannot combine direct and nocache", (int64_t)dcgettext(NULL, "cannot combine direct and nocache", 5), v318, v303, 0x405460); // 0x403bfd
    int64_t v432 = v546; // 0x403bfd
    int64_t v433 = v303; // 0x403bfd
    int64_t v434 = v302; // 0x403bfd
    int64_t v435 = v301; // 0x403bfd
    int64_t v436 = v300; // 0x403bfd
    int64_t v437 = v299; // 0x403bfd
    goto lab_0x403c02;
  lab_0x403822:;
    int64_t v396 = (int64_t)"cbs"; // 0x40382a
    char v397 = 99; // 0x40382a
    int64_t v398 = str;
    int64_t v399 = v111; // 0x40383b
    int64_t v400 = v104; // 0x40383b
    int64_t v401 = v105; // 0x40383b
    int64_t v402 = v115; // 0x40383b
    int64_t v403 = v106; // 0x40383b
    int64_t v404 = v107; // 0x40383b
    int64_t v405 = v108; // 0x40383b
    int64_t v406 = str; // 0x40383b
    int64_t v116; // 0x401fd0
    int64_t v117; // 0x401fd0
    int64_t v118; // 0x401fd0
    int64_t v120; // 0x401fd0
    int64_t v114; // 0x401fd0
    int64_t v113; // 0x401fd0
    int64_t v112; // 0x401fd0
    while (*(char *)v398 == v397) {
        int64_t v407 = v398 + 1; // 0x40382f
        int64_t v408 = v396 + 1; // 0x403833
        char v409 = *(char *)v408; // 0x403841
        v396 = v408;
        int64_t v410 = v407; // 0x403847
        v397 = v409;
        if (v409 == 0) {
            char v411 = *(char *)v407; // 0x403849
            v399 = v111;
            v400 = v104;
            v401 = v105;
            v402 = v115;
            v403 = v106;
            v404 = v107;
            v405 = v108;
            v406 = str;
            if (v411 != 61 == (v411 != 0)) {
                goto lab_0x403ad4;
            } else {
                // 0x403859
                g102 = v111;
                v112 = v104;
                v113 = v105;
                v114 = v115;
                v116 = v106;
                v117 = v107;
                v118 = v108;
                v120 = str;
                if (v111 != 0) {
                    goto lab_0x40379a;
                } else {
                    goto lab_0x403869;
                }
            }
        }
        v398 = v410;
        v399 = v111;
        v400 = v104;
        v401 = v105;
        v402 = v115;
        v403 = v106;
        v404 = v107;
        v405 = v108;
        v406 = str;
    }
    goto lab_0x403ad4;
  lab_0x403c02:;
    int64_t v443 = v437;
    int64_t v444 = v436;
    int64_t v445 = v435;
    int64_t v446 = v434;
    int64_t v447 = v433;
    int64_t v448 = v432;
    int64_t v449 = v431;
    int64_t v450 = (int64_t)"count"; // 0x403c0a
    char v451 = 99; // 0x403c0a
    int64_t v452 = v443;
    v277 = v447;
    v278 = v443;
    while (*(char *)v452 == v451) {
        int64_t v453 = v452 + 1; // 0x403c0f
        int64_t v454 = v450 + 1; // 0x403c13
        char v455 = *(char *)v454; // 0x403c21
        v450 = v454;
        int64_t v456 = v453; // 0x403c27
        v451 = v455;
        if (v455 == 0) {
            char v457 = *(char *)v453; // 0x403c29
            v112 = v448;
            v113 = v449;
            v114 = v447;
            v116 = v446;
            v117 = v445;
            v118 = v444;
            v120 = v443;
            v277 = v447;
            v278 = v443;
            if (v457 != 61 == (v457 != 0)) {
                goto lab_0x403980;
            } else {
                goto lab_0x40379a;
            }
        }
        v452 = v456;
        v277 = v447;
        v278 = v443;
    }
    goto lab_0x403980;
  lab_0x403ad4:;
    int64_t v412 = v406;
    int64_t v413 = v405;
    int64_t v414 = v404;
    int64_t v415 = v403;
    int64_t v416 = v402;
    int64_t v417 = v401;
    int64_t v418 = v400;
    int64_t v419 = v399;
    int64_t v420 = (int64_t)"skip"; // 0x403adc
    char v421 = 115; // 0x403adc
    int64_t v422 = v412;
    while (*(char *)v422 == v421) {
        int64_t v423 = v422 + 1; // 0x403ae1
        int64_t v424 = v420 + 1; // 0x403ae5
        char v425 = *(char *)v424; // 0x403af3
        v420 = v424;
        int64_t v426 = v423; // 0x403af9
        v421 = v425;
        if (v425 == 0) {
            char v427 = *(char *)v423; // 0x403afb
            v112 = v418;
            v113 = v417;
            v114 = v416;
            v116 = v415;
            v117 = v419;
            v118 = v413;
            v120 = v412;
            if (v427 != 61 == (v427 != 0)) {
                goto lab_0x40375e;
            } else {
                goto lab_0x40379a;
            }
        }
        v422 = v426;
    }
    goto lab_0x40375e;
  lab_0x40375e:;
    int64_t v428 = (int64_t)"seek"; // 0x403766
    char v429 = 115; // 0x403766
    int64_t v430 = v412;
    v431 = v419;
    v432 = v418;
    v433 = v416;
    v434 = v415;
    v435 = v414;
    v436 = v413;
    v437 = v412;
    while (*(char *)v430 == v429) {
        int64_t v438 = v430 + 1; // 0x40376b
        int64_t v439 = v428 + 1; // 0x40376f
        char v440 = *(char *)v439; // 0x40377d
        v428 = v439;
        int64_t v441 = v438; // 0x403783
        v429 = v440;
        if (v440 == 0) {
            char v442 = *(char *)v438; // 0x403785
            v431 = v419;
            v432 = v418;
            v433 = v416;
            v434 = v415;
            v435 = v414;
            v436 = v413;
            v437 = v412;
            if (v442 != 61 == (v442 != 0)) {
                goto lab_0x403c02;
            } else {
                // 0x403795
                *(int64_t *)(v12 + 8) = v419;
                v112 = v418;
                v113 = v417;
                v114 = v416;
                v116 = v415;
                v117 = v414;
                v118 = v413;
                v120 = v412;
                goto lab_0x40379a;
            }
        }
        v430 = v441;
        v431 = v419;
        v432 = v418;
        v433 = v416;
        v434 = v415;
        v435 = v414;
        v436 = v413;
        v437 = v412;
    }
    goto lab_0x403c02;
  lab_0x402489:;
    int64_t v459 = (int64_t)&g54; // 0x40248d
    int64_t v460; // 0x401fd0
    int64_t v461; // 0x401fd0
    if ((v462 & 2) == 0) {
        int64_t v463 = v464;
        v461 = v463;
        int64_t v465 = (int64_t)&g54; // 0x402fcf
        if ((v462 & 4) == 0) {
            goto lab_0x4024cb;
        } else {
            char * v466 = (char *)v465; // 0x402fe0
            int64_t v467 = v465 + 1; // 0x402fe3
            *v466 = *(char *)((int64_t)*v466 + (int64_t)&g3);
            v460 = v463;
            v465 = v467;
            while (v467 != (int64_t)&g55) {
                // 0x402fe0
                v466 = (char *)v465;
                v467 = v465 + 1;
                *v466 = *(char *)((int64_t)*v466 + (int64_t)&g3);
                v460 = v463;
                v465 = v467;
            }
            goto lab_0x4024b6;
        }
    } else {
        char * v468 = (char *)v459; // 0x4024a0
        int64_t v469 = v459 + 1; // 0x4024a3
        *v468 = *(char *)((int64_t)*v468 + (int64_t)&g4);
        v459 = v469;
        v460 = &g55;
        while (v469 != (int64_t)&g55) {
            // 0x4024a0
            v468 = (char *)v459;
            v469 = v459 + 1;
            *v468 = *(char *)((int64_t)*v468 + (int64_t)&g4);
            v459 = v469;
            v460 = &g55;
        }
        goto lab_0x4024b6;
    }
  lab_0x4024cb:;
    int64_t v470 = v461;
    int64_t v471 = g107; // 0x4024cb
    int64_t v472 = g92; // 0x4024d2
    *v185 = (int64_t)__errno_location();
    int64_t v473; // 0x401fd0
    int64_t v474; // 0x401fd0
    int64_t v475; // 0x401fd0
    if (v471 == 0) {
        int64_t v476 = (int64_t)dcgettext(NULL, "standard input", 5); // 0x403343
        g107 = v476;
        function_4043e0(0, v472, v476);
        v475 = v470;
        goto lab_0x402503;
    } else {
        // 0x4024ec
        v475 = 0;
        if ((int32_t)function_4048b0(0, v471, v472, 0) < 0) {
            int64_t v477 = function_4083e0(4, (int64_t)g107); // 0x4039fe
            char * v478 = dcgettext(NULL, "failed to open %s", 5); // 0x403a12
            function_4041e0(1, *(int32_t *)*v185, (int64_t)v478, v477, v303, 0x405460);
            v474 = v471;
            v473 = v472;
            goto lab_0x403a30;
        } else {
            goto lab_0x402503;
        }
    }
  lab_0x4024b6:
    // 0x4024b6
    g89 = 1;
    g29 = 37;
    g28[0] = 64;
    v461 = v460;
    goto lab_0x4024cb;
  lab_0x402503:;
    int64_t v479 = lseek(0, 0, SEEK_CUR); // 0x40250c
    int32_t v480 = g106; // 0x402511
    uint32_t v481 = g90; // 0x402518
    int64_t v482 = v481; // 0x402518
    *(char *)&g80 = (char)(v479 >> 63) ^ 1;
    g78 = v479 > 0 ? v479 : 0;
    g79 = *(int32_t *)*v185;
    int64_t v483; // 0x401fd0
    int64_t v484; // 0x401fd0
    int64_t v485; // 0x401fd0
    int64_t v486; // 0x401fd0
    int64_t v487; // 0x401fd0
    int64_t v488; // 0x401fd0
    if (v480 == 0) {
        int64_t v489 = (int64_t)dcgettext(NULL, "standard output", 5); // 0x403576
        g106 = v489;
        function_4043e0(1, v482, v489);
        v485 = v475;
        v488 = v482;
        v486 = 1;
        goto lab_0x40260d;
    } else {
        int64_t v490 = v480;
        uint32_t v491 = g94; // 0x402558
        int64_t v492 = v491 / 64 & 128 | v481 | 64 * (int32_t)((v491 & 0x1000) == 0); // 0x402577
        if (g99 != 0) {
            int64_t v493 = function_4048b0(1, v490, v492 | 2, 438); // 0x403056
            v487 = v490;
            if ((int32_t)v493 >= 0) {
                goto lab_0x4025bb;
            } else {
                // 0x403047
                v483 = g106;
                v484 = v492;
                goto lab_0x402598;
            }
        } else {
            uint32_t v494 = v491 & 512;
            int64_t v495 = v494; // 0x402587
            v483 = v490;
            v484 = v495 - ((int64_t)(v494 == 0) | v495) & 512 | v492;
            goto lab_0x402598;
        }
    }
  lab_0x403a30:;
    int64_t v496 = function_4083e0(4, (int64_t)g106); // 0x403a3c
    char * v497 = dcgettext(NULL, "failed to open %s", 5); // 0x403a50
    function_4041e0(1, *(int32_t *)*v185, (int64_t)v497, v496, v303, 0x405460);
    int64_t v498 = v474; // 0x403a69
    int64_t v499 = v473; // 0x403a69
    int64_t v500 = v300; // 0x403a69
    goto lab_0x403a6e;
  lab_0x40260d:;
    int64_t v542 = function_405c40(); // 0x40260d
    int64_t v543 = g101; // 0x402612
    int64_t v544 = g100; // 0x402619
    g83 = v542;
    g82 = v542 + 0x3b9aca00;
    int64_t v510 = v485; // 0x40263a
    int64_t v512 = v488; // 0x40263a
    int64_t v514 = v486; // 0x40263a
    int64_t v515 = v303; // 0x40263a
    int64_t v511; // 0x40263c
    int64_t v513; // 0x402643
    if ((v544 || v543) == 0) {
        goto lab_0x402690;
    } else {
        // 0x40263c
        v511 = g104;
        v513 = g107;
        int64_t v545 = g78; // 0x402655
        if (function_405150(0, v513, v543, v511, &g100) != 0) {
            goto lab_0x402af5;
        } else {
            // 0x40266d
            if (v545 + v544 + v543 * v511 == g78) {
                goto lab_0x402690;
            } else {
                // 0x402681
                v510 = v511;
                v512 = v513;
                v514 = 0;
                v515 = &g100;
                if (g77 != 1) {
                    goto lab_0x402af5;
                } else {
                    goto lab_0x402690;
                }
            }
        }
    }
  lab_0x403a6e:
    // 0x403a6e
    function_4041e0(1, (int32_t)"offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks" ^ (int32_t)"offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks", (int64_t)dcgettext(NULL, "offset too large: cannot truncate to a length of seek=%lu (%lu-byte) blocks", 5), v498, v500, 0x405460);
    int64_t v501 = v498; // 0x403a91
    int64_t v502 = v500; // 0x403a91
    int64_t v503 = v499; // 0x403a91
    int64_t v504 = v500; // 0x403a91
    goto lab_0x403a96;
  lab_0x402690:;
    int64_t v518 = g99; // 0x402690
    int64_t v519 = g98; // 0x402697
    int64_t v40 = v510; // 0x4026a4
    int64_t v42 = v518; // 0x4026a4
    int64_t v44 = v512; // 0x4026a4
    int64_t v45 = v514; // 0x4026a4
    int64_t v46 = v515; // 0x4026a4
    int64_t v39; // 0x401fd0
    int64_t v43; // 0x401fd0
    int64_t v41; // 0x4026b9
    if ((v519 || v518) == 0) {
        goto lab_0x402737;
    } else {
        // 0x4026aa
        *v258 = v519;
        v41 = g103;
        int64_t v520 = g106; // 0x4026c0
        int64_t v521 = function_405150(1, v520, v518, v41, v258); // 0x4026c7
        if (v521 == 0) {
            int64_t v522 = *v258; // 0x4032bd
            v40 = v41;
            v42 = 0;
            v44 = v520;
            v45 = 1;
            v46 = v47;
            if (v522 == 0) {
                goto lab_0x402737;
            } else {
                // 0x4032cb
                memset((int64_t *)g73, 0, (int32_t)v522);
                v43 = v522;
                v39 = *v258;
                goto lab_0x40271f;
            }
        } else {
            int64_t v523 = g103; // 0x4026d8
            memset((int64_t *)g73, 0, g103);
            int64_t v524 = v521; // 0x4026ed
            int64_t v525 = g103; // 0x4026f0
            while (function_404c30(g73, v525) == v525) {
                // 0x40270f
                v524--;
                if (v524 == 0) {
                    int64_t v526 = *v258; // 0x402715
                    v43 = v523;
                    v39 = v526;
                    v40 = v41;
                    v42 = v523;
                    v44 = v525;
                    v45 = g73;
                    v46 = v47;
                    if (v526 == 0) {
                        goto lab_0x402737;
                    } else {
                        goto lab_0x40271f;
                    }
                }
                v525 = g103;
            }
            goto lab_0x4039b2;
        }
    }
  lab_0x4025bb:;
    int64_t v527 = v487;
    int64_t v528 = g99; // 0x4025bb
    v485 = 438;
    v488 = v527;
    v486 = 1;
    if (v528 == 0) {
        goto lab_0x40260d;
    } else {
        // 0x4025c7
        v485 = 438;
        v488 = v527;
        v486 = 1;
        if ((g95 & 2) != 0) {
            goto lab_0x40260d;
        } else {
            int64_t v529 = g103; // 0x4025d0
            v3 = v528 * v529 + g98;
            v498 = v528;
            v499 = v3;
            v500 = v529;
            if (v528 > 0x7fffffffffffffff / v529) {
                goto lab_0x403a6e;
            } else {
                int64_t v530 = function_404bf0(v3); // 0x402600
                v485 = 438;
                v488 = v527;
                v486 = v3;
                if ((int32_t)v530 != 0) {
                    uint32_t v531 = *(int32_t *)*v185; // 0x4034f2
                    v2 = v531;
                    v501 = v2;
                    v502 = v303;
                    v503 = v3;
                    v504 = v529;
                    if (__fxstat(1, 1, (struct stat *)v47) != 0) {
                        goto lab_0x403a96;
                    } else {
                        // 0x403501
                        v485 = 438;
                        v488 = 1;
                        v486 = 1;
                        if (((*(int32_t *)v56 & 0xf000) - 0x4000 & -0x5000) != 0) {
                            goto lab_0x40260d;
                        } else {
                            // 0x40351a
                            v1 = function_4083e0(4, (int64_t)g106);
                            function_4041e0(1, v531, (int64_t)dcgettext(NULL, "failed to truncate to %lu bytes in output file %s", 5), v3, v1, 0x405460);
                            v249 = v529;
                            v251 = v299;
                            goto lab_0x403556;
                        }
                    }
                } else {
                    goto lab_0x40260d;
                }
            }
        }
    }
  lab_0x402598:;
    int64_t v532 = function_4048b0(1, v483, v484 & 0xfffffffe | 1, 438); // 0x4025ae
    v487 = v483;
    v474 = v484;
    v473 = v482;
    if ((int32_t)v532 < 0) {
        goto lab_0x403a30;
    } else {
        goto lab_0x4025bb;
    }
  lab_0x403a96:;
    int64_t v505 = function_4083e0(4, (int64_t)g106); // 0x403aa2
    char * v506 = dcgettext(NULL, "cannot fstat %s", 5); // 0x403ab6
    int32_t v507 = *(int32_t *)*v185; // 0x403acb
    v399 = function_4041e0(1, v507, (int64_t)v506, v505, v502, 0x405460);
    v400 = v505;
    v401 = v501;
    v402 = v502;
    v403 = v503;
    v404 = v301;
    v405 = v504;
    v406 = v299;
    goto lab_0x403ad4;
  lab_0x402737:;
    int64_t v508 = v46;
    int64_t v509 = v45;
    int64_t v19; // 0x401fd0
    int64_t v20; // 0x401fd0
    int64_t v18; // 0x401fd0
    if (((int64_t)g96 || (int64_t)g31) == 0) {
        // 0x40323d
        *(int32_t *)(v12 + 16) = 0;
        v18 = v509;
        v19 = v508;
        v20 = 0x405460;
        goto lab_0x403245;
    } else {
        // 0x40274b
        if (g74 == 0) {
            // 0x403374
            function_404a80(v509, v44, v42);
        }
        // 0x402759
        function_404ba0();
        v184 = (int32_t *)(v12 + 16);
        *v184 = 0;
        v135 = v40;
        v137 = v509;
        v139 = v508;
        v140 = 0x405460;
        v142 = 0;
        while (true) {
          lab_0x402770_2:;
            int64_t v143 = v135; // 0x402777
            int64_t v144 = v137; // 0x402777
            int64_t v145 = v139; // 0x402777
            int64_t v146 = v140; // 0x402777
            int64_t v147 = v142; // 0x402777
            v148 = v135;
            v149 = v137;
            v150 = v139;
            v151 = v140;
            v152 = v142;
            if (g30 == 4) {
              lab_0x4028f1:;
                int64_t v153 = v152;
                int64_t v154 = v151;
                int64_t v155 = v150;
                int64_t v156 = v148;
                int64_t v157 = function_405c40(); // 0x4028f1
                v143 = v156;
                v144 = v149;
                v145 = v155;
                v146 = v154;
                v147 = v153;
                if (v157 >= g82) {
                    // 0x402903
                    function_403d50(v157);
                    g82 += 0x3b9aca00;
                    v143 = v156;
                    v144 = v157;
                    v145 = v155;
                    v146 = v154;
                    v147 = v153;
                }
            }
            int64_t v158 = g31; // 0x40278d
            int64_t v159 = g86 + g85; // 0x402794
            int64_t v160 = g94; // 0x40279e
            v161 = v160;
            v162 = v159;
            v163 = v158;
            v164 = v147;
            v165 = v145;
            v166 = v143;
            v32 = v145;
            v130 = v160;
            v132 = v144;
            v33 = v146;
            if (v159 >= (int64_t)(g96 != 0) + v158) {
                // break -> 0x4030a7
                break;
            }
            while (true) {
              lab_0x4027b3:
                // 0x4027b3
                v167 = v166;
                v129 = v165;
                v168 = v164;
                int64_t set_mem = g74; // 0x4027c6
                if ((v161 & 1280) == 1280) {
                    int32_t v169 = g94 & 24; // 0x4027c8
                    int32_t v170 = v169 != 0 ? 32 : v169; // 0x4027da
                    set_mem = (int64_t)memset((int64_t *)g74, v170, g104);
                }
                // 0x4027e5
                v133 = set_mem;
                v171 = g55;
                if (v162 < v163) {
                    if (v171 >= 0 == (v171 != 0)) {
                        goto lab_0x402808;
                    } else {
                        goto lab_0x402b57;
                    }
                } else {
                    if (v171 < 1) {
                        goto lab_0x402b57;
                    } else {
                        goto lab_0x402808;
                    }
                }
            }
          lab_0x402d9b:;
            int64_t v172 = function_404c30(g74, v173); // 0x402da1
            g84 += (int32_t)v172;
            v6 = v129;
            v8 = v133;
            if (v172 != v173) {
                goto lab_0x402ef1;
            }
            // 0x402db6
            if (v173 == (int64_t)g104) {
                // 0x403597
                g87++;
                v136 = g74;
                v138 = v129;
            } else {
                // 0x402dc3
                g88++;
                v136 = g74;
                v138 = v129;
            }
            goto lab_0x402770;
        }
        goto lab_0x4030a7;
    }
  lab_0x402af5:
    // 0x402af5
    v510 = v511;
    v512 = v513;
    v514 = 0;
    v515 = &g100;
    if (g30 != 1) {
        int64_t v516 = function_4084b0(0, 3, (int64_t)g107); // 0x402b10
        char * v517 = dcgettext(NULL, "%s: cannot skip to specified offset", 5); // 0x402b24
        function_4041e0(0, (int32_t)"%s: cannot skip to specified offset" ^ (int32_t)"%s: cannot skip to specified offset", (int64_t)v517, v516, (int64_t)&g100, 0x405460);
        v510 = v516;
        v512 = (int32_t)"%s: cannot skip to specified offset" ^ (int32_t)"%s: cannot skip to specified offset";
        v514 = 0;
        v515 = &g100;
    }
    goto lab_0x402690;
  lab_0x403245:;
    int64_t v533 = v18; // 0x40324c
    if (g59 != 0) {
        // 0x403483
        v533 = 0;
        if ((char)function_4045a0(0, 0) == 0) {
            int64_t v534 = function_4084b0(0, 3, (int64_t)g107); // 0x4034a2
            char * v535 = dcgettext(NULL, "failed to discard cache for: %s", 5); // 0x4034b6
            int32_t v536 = *(int32_t *)*(int64_t *)(v12 + 8); // 0x4034c8
            function_4041e0(0, v536, (int64_t)v535, v534, v19, v20);
            *(int32_t *)(v12 + 16) = 1;
            v533 = 0;
        }
    }
    int64_t v25 = v533; // 0x403259
    if (g58 != 0) {
        // 0x40325f
        v25 = 1;
        if ((char)function_4045a0(1, 0) == 0) {
            int64_t v537 = function_4084b0(0, 3, (int64_t)g106); // 0x403281
            char * v538 = dcgettext(NULL, "failed to discard cache for: %s", 5); // 0x403295
            int32_t v539 = *(int32_t *)*(int64_t *)(v12 + 8); // 0x4032a7
            function_4041e0(0, v539, (int64_t)v538, v537, v19, v20);
            *(int32_t *)(v12 + 16) = 1;
            v25 = 0;
        }
    }
    goto lab_0x402f7b;
  lab_0x4039b2:;
    int64_t v540 = function_4083e0(4, (int64_t)g106); // 0x4039be
    char * v541 = dcgettext(NULL, "writing to %s", 5); // 0x4039d2
    function_4041e0(0, *(int32_t *)*v185, (int64_t)v541, v540, v47, 0x405460);
    function_404e30();
    // UNREACHABLE
  lab_0x402f7b:
    // 0x402f7b
    function_404760(v25);
    function_4040b0();
    function_404810();
    return (int64_t)*(int32_t *)(v12 + 16);
  lab_0x4031ca:
    // 0x4031ca
    v26 = v27;
    int64_t v21; // 0x401fd0
    int64_t v22; // 0x401fd0
    int64_t v28; // 0x401fd0
    int64_t v29; // 0x401fd0
    int64_t v30; // 0x401fd0
    if ((v31 & 8) == 0) {
        goto lab_0x4030f9;
    } else {
        // 0x4031d4
        v29 = v27;
        v21 = v32;
        v22 = v33;
        if (g71 == 0) {
            goto lab_0x403140;
        } else {
            // 0x4031e4
            v30 = v31;
            v28 = v27;
            if (g102 > g71) {
                int64_t v34 = g72; // 0x403209
                int64_t v35 = v34 + 1; // 0x40321e
                g72 = v35;
                *(char *)(g73 + v34) = g28[0];
                if (v35 >= (int64_t)g103) {
                    // 0x403236
                    function_404e50();
                }
                int64_t v36 = g71 + 1; // 0x4031f8
                v26 = v27;
                int64_t v37 = v36; // 0x403203
                while (v36 < g102) {
                    // 0x403209
                    v34 = g72;
                    v35 = v34 + 1;
                    g72 = v35;
                    *(char *)(g73 + v34) = g28[0];
                    if (v35 >= (int64_t)g103) {
                        // 0x403236
                        function_404e50();
                    }
                    // 0x4031f8
                    v36 = v37 + 1;
                    v26 = v27;
                    v37 = v36;
                }
                goto lab_0x4030f9;
            } else {
                goto lab_0x403109;
            }
        }
    }
  lab_0x40271f:;
    int64_t v38 = function_404c30(g73, v39); // 0x402729
    v40 = v41;
    v42 = v43;
    v44 = v39;
    v45 = g73;
    v46 = v47;
    if (v38 != v39) {
        goto lab_0x4039b2;
    } else {
        goto lab_0x402737;
    }
  lab_0x4030f9:
    // 0x4030f9
    v30 = g94;
    v28 = v26;
    v29 = v26;
    v21 = v32;
    v22 = v33;
    if (g71 == 0) {
        goto lab_0x403140;
    } else {
        goto lab_0x403109;
    }
  lab_0x403140:;
    int64_t v48 = v29; // 0x40314a
    if (g72 != 0) {
        int64_t v49 = function_404c30(g73, g72); // 0x402ecb
        g84 += (int32_t)v49;
        if (v49 != 0) {
            // 0x402edc
            g88++;
        }
        // 0x402ee4
        v6 = v21;
        v8 = v22;
        v48 = g73;
        if (v49 == g72) {
            goto lab_0x403150;
        } else {
            goto lab_0x402ef1;
        }
    } else {
        goto lab_0x403150;
    }
  lab_0x403109:
    // 0x403109
    v29 = v28;
    v21 = v32;
    v22 = v33;
    int64_t v50; // 0x401fd0
    int64_t v51; // 0x401fd0
    int64_t v52; // 0x401fd0
    if ((v30 & 16) == 0) {
        goto lab_0x403140;
    } else {
        int64_t v53 = g72; // 0x40310f
        int64_t v54 = v53 + 1; // 0x403124
        g72 = v54;
        *(char *)(g73 + v53) = g29;
        v29 = v28;
        v21 = v32;
        v22 = v33;
        v52 = v28;
        v50 = v32;
        v51 = v33;
        if (v54 >= (int64_t)g103) {
            goto lab_0x403754;
        } else {
            goto lab_0x403140;
        }
    }
  lab_0x403150:;
    int64_t v55 = v48; // 0x403157
    int64_t v13; // 0x401fd0
    int64_t v14; // 0x401fd0
    if (g97 != 0) {
        // 0x4035a4
        if (__fxstat(1, 1, (struct stat *)v47) != 0) {
            // 0x403876
            v4 = function_4083e0(4, (int64_t)g106);
            v5 = (int64_t)"cannot fstat %s";
            v7 = v21;
            v9 = v22;
            goto lab_0x402f0f;
        } else {
            // 0x4035c0
            v55 = 1;
            if ((*(int32_t *)v56 & 0xf000) != 0x8000) {
                goto lab_0x40315d;
            } else {
                int32_t v57 = lseek(1, 0, SEEK_CUR); // 0x4035e0
                v55 = 1;
                if (v57 < 0) {
                    goto lab_0x40315d;
                } else {
                    int64_t v58 = v57; // 0x4035e0
                    v55 = 1;
                    if (*(int64_t *)(v12 + 80) < v58) {
                        int64_t v59 = function_404bf0(v58); // 0x4035ff
                        v55 = v58;
                        if ((int32_t)v59 == 0) {
                            goto lab_0x40315d;
                        } else {
                            int64_t v60 = function_4083e0(4, (int64_t)g106); // 0x403618
                            char * v61 = dcgettext(NULL, "failed to truncate to %ld bytes in output file %s", 5); // 0x40362c
                            int32_t v62 = *(int32_t *)*(int64_t *)(v12 + 8); // 0x403641
                            function_4041e0(0, v62, (int64_t)v61, v58, v60, v22);
                            v13 = v60;
                            v14 = v22;
                            goto lab_0x402f2c;
                        }
                    } else {
                        goto lab_0x40315d;
                    }
                }
            }
        }
    } else {
        goto lab_0x40315d;
    }
  lab_0x40315d:;
    int32_t v63 = g94; // 0x403169
    int64_t v64 = v55; // 0x403169
    int64_t * v23; // 0x401fd0
    if ((g94 & 0x4000) != 0) {
        // 0x403445
        v63 = g94;
        v64 = 1;
        if (fdatasync(1) == 0) {
            goto lab_0x40316f;
        } else {
            int64_t * v65 = (int64_t *)(v12 + 8);
            int32_t v66 = *(int32_t *)*v65; // 0x403462
            *(int32_t *)(v12 + 28) = v66;
            if ((v66 - 22 & -17) != 0) {
                int64_t v67 = function_4083e0(4, (int64_t)g106); // 0x4038a5
                char * v68 = dcgettext(NULL, "fdatasync failed for %s", 5); // 0x4038b9
                int32_t v69 = *(int32_t *)*v65; // 0x4038cb
                function_4041e0(0, v69, (int64_t)v68, v67, v21, v22);
                *(int32_t *)(v12 + 16) = 1;
            }
            // 0x403474
            g94 |= 0x8000;
            v23 = v65;
            goto lab_0x403180;
        }
    } else {
        goto lab_0x40316f;
    }
  lab_0x403754:
    // 0x403754
    function_404e50();
    v29 = v52;
    v21 = v50;
    v22 = v51;
    goto lab_0x403140;
  lab_0x402f0f:;
    char * v10 = dcgettext(NULL, (char *)v5, 5); // 0x402f11
    int32_t v11 = *(int32_t *)*(int64_t *)(v12 + 8); // 0x402f23
    function_4041e0(0, v11, (int64_t)v10, v4, v7, v9);
    v13 = v7;
    v14 = v9;
    goto lab_0x402f2c;
  lab_0x40316f:;
    int64_t v15 = v64; // 0x403175
    int64_t v16 = v21; // 0x403175
    int64_t v17 = v22; // 0x403175
    if ((int16_t)v63 > -1) {
        goto lab_0x402f34;
    } else {
        // 0x40316f
        v23 = (int64_t *)(v12 + 8);
        goto lab_0x403180;
    }
  lab_0x402f2c:
    // 0x402f2c
    *(int32_t *)(v12 + 16) = 1;
    v15 = 0;
    v16 = v13;
    v17 = v14;
    goto lab_0x402f34;
  lab_0x402f34:
    // 0x402f34
    if ((int64_t)g31 == 0) {
        // 0x403361
        v18 = v15;
        v19 = v16;
        v20 = v17;
        if (g96 != 0) {
            goto lab_0x402f42;
        } else {
            goto lab_0x403245;
        }
    } else {
        goto lab_0x402f42;
    }
  lab_0x403180:
    // 0x403180
    while (true) {
        // 0x403180
        v15 = 1;
        v16 = v21;
        v17 = v22;
        if (fsync(1) == 0) {
            // break -> 0x402f34
            break;
        }
        // 0x403192
        if (*(int32_t *)*v23 != 4) {
            // 0x40319c
            v4 = function_4083e0(4, (int64_t)g106);
            v5 = (int64_t)"fsync failed for %s";
            v7 = v21;
            v9 = v22;
            goto lab_0x402f0f;
        }
    }
    goto lab_0x402f34;
  lab_0x402f42:;
    int64_t v24 = v15; // 0x402f49
    if ((g57 || g59) != 0) {
        // 0x402f54
        function_4045a0(0, 0);
        v24 = 0;
    }
    // 0x402f5d
    v25 = v24;
    if ((*(char *)&g56 || g58) != 0) {
        // 0x402f6f
        function_4045a0(1, 0);
        v25 = 1;
    }
    goto lab_0x402f7b;
  lab_0x402226:;
    int64_t v70 = v71;
    int64_t v72 = v73;
    int64_t v74 = v75;
    int64_t v76 = v77;
    int64_t v78 = v79;
    int64_t v80 = v81 + 8; // 0x402226
    v82 = v74;
    v83 = v80;
    if (v78 != v80) {
        goto lab_0x4021c8;
    } else {
        int64_t v84 = v85;
        v86 = v78;
        v87 = v76;
        v88 = v74;
        v89 = v80;
        v90 = v72;
        v91 = 0;
        v92 = v84;
        if (v70 == 0) {
            goto lab_0x402a62;
        } else {
            int32_t v93 = v70; // 0x402238
            g103 = v93;
            g104 = v93;
            v94 = v93;
            v95 = v93;
            v96 = v78;
            v97 = v76;
            v98 = v74;
            v99 = v80;
            v100 = v72;
            v101 = v70;
            v102 = v84;
            goto lab_0x402246;
        }
    }
  lab_0x4029db:
    // 0x4029db
    g92 |= (int32_t)function_4059d0(v103, "append", 0, "invalid input flag");
    v79 = v104;
    v77 = v105;
    v75 = v103;
    v81 = v106;
    v73 = v107;
    v71 = v108;
    v85 = str;
    goto lab_0x402226;
  lab_0x402a33:
    // 0x402a33
    g90 |= (int32_t)function_4059d0(v103, "append", 0, "invalid output flag");
    v79 = v104;
    v77 = v105;
    v75 = v103;
    v81 = v106;
    v73 = v107;
    v71 = v108;
    v85 = str;
    goto lab_0x402226;
  lab_0x4036f5:;
    int32_t * v109; // 0x401fd0
    int64_t v110; // 0x401fd0
    if (v111 == 0) {
        goto lab_0x403869;
    } else {
        // 0x4036fe
        v112 = v104;
        v113 = v105;
        v114 = v115;
        v116 = v106;
        v117 = v107;
        v118 = v119;
        v120 = str;
        if (v111 > v121) {
            // 0x403707
            *v122 = 1;
            v109 = v122;
            v110 = v115;
            goto lab_0x40370f;
        } else {
            goto lab_0x40379a;
        }
    }
  lab_0x403869:
    // 0x403869
    *v122 = 4;
    v109 = v122;
    v110 = v115;
    goto lab_0x40370f;
  lab_0x40370f:;
    int64_t v123 = function_408630(v110); // 0x403712
    char * v124 = dcgettext(NULL, "invalid number", 5); // 0x403726
    int32_t v125 = *v109 != 1 ? 0 : 75; // 0x403745
    function_4041e0(1, v125, (int64_t)"%s: %s", (int64_t)v124, v123, 0x405460);
    v52 = 1;
    v50 = v123;
    v51 = 0x405460;
    goto lab_0x403754;
  lab_0x40379a:;
    int32_t * v126 = (int32_t *)v47;
    v79 = v112;
    v77 = v113;
    v75 = v114;
    v81 = v116;
    v73 = v117;
    v71 = v118;
    v85 = v120;
    v109 = v126;
    v110 = v114;
    if (*v126 == 0) {
        goto lab_0x402226;
    } else {
        goto lab_0x40370f;
    }
  lab_0x403094:
    // 0x403094
    *(char *)&g56 = (v127 | (char)v128) % 2;
    v32 = v129;
    v130 = v131;
    v132 = 0;
    v33 = v133;
    goto lab_0x4030a7;
}
// Address range: 0x403c50 - 0x403c7b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403c50
    int64_t v1; // 0x403c50
    __libc_start_main(0x401fd0, (int32_t)a4, (char **)&v1, (void (*)())0x40da10, (void (*)())0x40da70, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x403c7b - 0x403c9a
int64_t function_403c7b(void) {
    // 0x403c7b
    return 0x614348;
}
// Address range: 0x403c9a - 0x403cd1
int64_t function_403c9a(void) {
    // 0x403c9a
    return 0;
}
// Address range: 0x403cd1 - 0x403d28
int64_t function_403cd1(void) {
    // 0x403cd1
    if (g46 != 0) {
        // 0x403d27
        int64_t result; // 0x403cd1
        return result;
    }
    int64_t v1 = g47; // 0x403d04
    int64_t result2; // 0x403d16
    if (g47 >= ((int64_t)&g23 - (int64_t)&g22 >> 3) - 1) {
        // 0x403d16
        result2 = function_403c7b();
        g46 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g23 - (int64_t)&g22 >> 3) - 1) {
        // 0x403d06
        v1++;
    }
    // 0x403cfa
    g47 = v1;
    // 0x403d16
    result2 = function_403c7b();
    g46 = 1;
    return result2;
}
// Address range: 0x403d28 - 0x403d2d
int64_t function_403d28(void) {
    // 0x403d28
    return function_403c9a();
}
// Address range: 0x403d30 - 0x403d37
int64_t function_403d30(int64_t a1) {
    // 0x403d30
    g62 = a1;
    int64_t result; // 0x403d30
    return result;
}
// Address range: 0x403d40 - 0x403d50
int64_t function_403d40(void) {
    // 0x403d40
    g60 = &g61;
    return &g61;
}
// Address range: 0x403d50 - 0x4040a7
int64_t function_403d50(int64_t a1) {
    // 0x403d50
    int128_t v1; // 0x403d50
    int128_t v2 = v1;
    int64_t v3 = a1; // 0x403d68
    if (a1 == 0) {
        // 0x403fc8
        v3 = function_405c40();
    }
    // 0x403d6e
    int64_t v4; // bp-2008, 0x403d50
    int64_t v5; // 0x403d50
    int64_t str2 = function_405d70((int64_t)g84, &v4, 465, 1, 1, v5); // 0x403d8a
    int64_t v6; // bp-1354, 0x403d50
    int64_t str3 = function_405d70((int64_t)g84, &v6, 497, 1, 1, v5); // 0x403db1
    int64_t v7 = g83; // 0x403db9
    int64_t v8; // 0x403d50
    int64_t v9; // bp-700, 0x403d50
    int128_t v10; // 0x403d50
    if (v3 > v7) {
        uint64_t v11 = v3 - v7; // 0x403dc9
        __asm_pxor(v2, v2);
        int128_t v12; // 0x403d50
        if (v11 < 0) {
            int128_t v13 = __asm_cvtsi2sd(v11 / 2 | v11 % 2); // 0x403f33
            v12 = __asm_addsd(v13, v13);
        } else {
            // 0x403dd5
            v12 = __asm_cvtsi2sd(v11);
        }
        int64_t v14 = __asm_movsd(__asm_divsd(v12, 0x41cdcd6500000000)); // 0x403dff
        int64_t str = function_405d70((int64_t)g84, &v9, 465, 0x3b9aca00, v11, v5); // 0x403e05
        int32_t len = strlen((char *)str); // 0x403e10
        int128_t v15 = __asm_movsd_1(v14); // 0x403e1c
        int64_t v16 = str + (int64_t)len;
        *(int16_t *)v16 = 0x732f;
        *(char *)(v16 + 2) = 0;
        v10 = v15;
        v8 = str;
    } else {
        // 0x403f80
        __snprintf_chk((char *)&v9, 654, 1, 654, "%s B/s", dcgettext(NULL, "Infinity", 5));
        v10 = __asm_pxor(v2, v2);
        v8 = &v9;
    }
    int64_t v17 = (int64_t)"%g s"; // 0x403e3a
    if (a1 != 0) {
        int64_t v18 = (int64_t)g45; // 0x403e3c
        int64_t * v19 = (int64_t *)(v18 + 40); // 0x403e43
        uint64_t v20 = *v19; // 0x403e43
        if (v20 >= *(int64_t *)(v18 + 48)) {
            int64_t v21 = __asm_movsd(v10); // 0x404075
            __overflow(g45, 13);
            __asm_movsd_1(v21);
            v17 = (int64_t)"%.0f s";
        } else {
            // 0x403e51
            *v19 = v20 + 1;
            *(char *)v20 = 13;
            v17 = (int64_t)"%.0f s";
        }
    }
    // 0x403e62
    int64_t v22; // bp-2040, 0x403d50
    __snprintf_chk((char *)&v22, 24, 1, 24, (char *)v17);
    int64_t v23; // 0x403d50
    int32_t v24; // 0x403d50
    if (*(char *)(str2 - 2 + (int64_t)strlen((char *)str2)) == 32) {
        int32_t v25 = __fprintf_chk(g45, 1, dcngettext(NULL, "%lu byte copied, %s, %s", "%lu bytes copied, %s, %s", g84, 5)); // 0x404035
        v23 = v25;
        v24 = v25;
    } else {
        // 0x403e94
        char * v26; // 0x403d50
        int64_t v27; // 0x403d50
        if (*(char *)(str3 - 2 + (int64_t)strlen((char *)str3)) == 32) {
            // 0x403fd8
            v26 = dcgettext(NULL, "%lu bytes (%s) copied, %s, %s", 5);
            v27 = v8;
        } else {
            // 0x403eb4
            v26 = dcgettext(NULL, "%lu bytes (%s, %s) copied, %s, %s", 5);
            v27 = &v22;
        }
        // 0x403eca
        v23 = v27;
        v24 = __fprintf_chk(g45, 1, v26);
    }
    if (a1 == 0) {
        int64_t v28 = (int64_t)g45; // 0x403f48
        int64_t * v29 = (int64_t *)(v28 + 40); // 0x403f4f
        uint64_t result = *v29; // 0x403f4f
        if (result >= *(int64_t *)(v28 + 48)) {
            // 0x403f07
            return __overflow(g45, 10);
        }
        // 0x403f5d
        *v29 = result + 1;
        *(char *)result = 10;
        return result;
    }
    int64_t result2 = v23; // 0x403ef1
    if (v24 >= 0) {
        uint32_t v30 = g81; // 0x403ef3
        result2 = v23;
        if (v30 > v24) {
            int32_t v31 = __fprintf_chk(g45, 1, "%*s", (int64_t)v30 - (int64_t)v24 & 0xffffffff, (char *)&g19); // 0x404063
            result2 = v31;
        }
    }
    // 0x403f01
    g81 = v24;
    // 0x403f07
    return result2;
}
// Address range: 0x4040b0 - 0x4041d7
int64_t function_4040b0(void) {
    // 0x4040b0
    if (g30 == 1) {
        // 0x404178
        int64_t result; // 0x4040b0
        return result;
    }
    // 0x4040bd
    if (g81 >= 1) {
        int64_t v1 = (int64_t)g45; // 0x4040d1
        int64_t * v2 = (int64_t *)(v1 + 40); // 0x4040d8
        uint64_t v3 = *v2; // 0x4040d8
        if (v3 >= *(int64_t *)(v1 + 48)) {
            // 0x4041c8
            __overflow(g45, 10);
        } else {
            // 0x4040e6
            *v2 = v3 + 1;
            *(char *)v3 = 10;
        }
        // 0x4040f1
        g81 = 0;
    }
    // 0x4040fb
    __fprintf_chk(g45, 1, dcgettext(NULL, "%lu+%lu records in\n%lu+%lu records out\n", 5));
    int64_t result2 = g88; // 0x404159
    if (g75 != 0) {
        char * v4 = dcngettext(NULL, "%lu truncated record\n", "%lu truncated records\n", g75, 5); // 0x40419d
        result2 = __fprintf_chk(g45, 1, v4);
    }
    // 0x40415b
    if (g30 == 2) {
        // 0x404178
        return result2;
    }
    // 0x404164
    return function_403d50(0);
}
// Address range: 0x4041e0 - 0x4042c6
int64_t function_4041e0(uint32_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4041e0
    int64_t v1; // 0x4041e0
    if ((char)v1 != 0) {
        // 0x404200
        int128_t v2; // 0x4041e0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x40423a
    int64_t v3; // bp-224, 0x4041e0
    if (g81 < 1) {
        // 0x40426a
        v3 = 24;
        return function_408710((int64_t)a1, (int64_t)a2, a3, &v3);
    }
    int64_t v4 = (int64_t)g45; // 0x404244
    int64_t * v5 = (int64_t *)(v4 + 40); // 0x40424b
    uint64_t v6 = *v5; // 0x40424b
    if (v6 >= *(int64_t *)(v4 + 48)) {
        // 0x4042b0
        __overflow(g45, 10);
    } else {
        // 0x404255
        *v5 = v6 + 1;
        *(char *)v6 = 10;
    }
    // 0x404260
    g81 = 0;
    // 0x40426a
    v3 = 24;
    return function_408710((int64_t)a1, (int64_t)a2, a3, &v3);
}
// Address range: 0x4042d0 - 0x4043e0
int64_t function_4042d0(int64_t a1, int64_t a2) {
    // 0x4042d0
    char * v1; // bp-32, 0x4042d0
    int128_t result; // bp-40, 0x4042d0
    int64_t v2; // 0x4042d0
    int64_t v3 = function_408f50(a1, (int64_t *)&v1, 10, (int64_t *)&result, "bcEGkKMPTwYZ0", v2); // 0x4042f1
    int32_t v4 = v3; // 0x4042f8
    if (v4 != 2) {
        // 0x4042fd
        if (v4 == 0) {
            // 0x404305
            return result;
        }
        // 0x40431a
        *(int32_t *)a2 = v4;
        return 0;
    }
    // 0x404310
    if (*v1 != 120) {
        // 0x40431a
        *(int32_t *)a2 = v4;
        return 0;
    }
    uint64_t v5 = function_4042d0((int64_t)v1 + 1, a2); // 0x404337
    int64_t v6 = result;
    int64_t v7 = v3 & 0xffffffff; // 0x404342
    if (v5 != 0) {
        uint64_t v8 = v5 * v6; // 0x404379
        v7 = v8 % v5;
        if (v8 / v5 != v6) {
            // 0x404385
            *(int32_t *)a2 = 1;
            // 0x404305
            return 0;
        }
    }
    // 0x404348
    if (v6 != 0) {
        // 0x404305
        return v6 * v5;
    }
    // 0x40434d
    bool v9; // 0x4042d0
    int64_t v10 = v9 ? -1 : 1; // 0x40435a
    int64_t v11 = (int64_t)"0x"; // 0x4042d0
    int64_t v12 = a1; // 0x4042d0
    int64_t v13 = 2; // 0x40435a
    unsigned char v14 = *(char *)v12; // 0x40435a
    char v15 = *(char *)v11; // 0x40435a
    v13--;
    char v16 = v15; // 0x40435a
    bool v17 = false; // 0x40435a
    while (v14 == v15) {
        // 0x40434d
        v11 += v10;
        v12 += v10;
        v16 = v14;
        v17 = true;
        if (v13 == 0) {
            // break -> 
            break;
        }
        v14 = *(char *)v12;
        v15 = *(char *)v11;
        v13--;
        v16 = v15;
        v17 = false;
    }
    unsigned char v18 = v16;
    uint64_t v19 = (int64_t)!((v14 < v18 | v17)) - (int64_t)(v14 < v18); // 0x40435f
    int64_t v20 = v6; // 0x404364
    if ((char)v19 == 0) {
        int64_t v21 = v19 % 256 | v7 & -256; // 0x40435f
        int64_t v22 = function_408610(1, "00x", v21, v13); // 0x40439e
        int64_t v23 = function_408610(0, "0x", v21, v13); // 0x4043ad
        function_4041e0(0, (int32_t)"warning: %s is a zero multiplier; use %s if that is intended" ^ (int32_t)"warning: %s is a zero multiplier; use %s if that is intended", (int64_t)dcgettext(NULL, "warning: %s is a zero multiplier; use %s if that is intended", 5), v23, v22, v2);
        v20 = result;
    }
    // 0x404305
    return v20 * v5;
}
// Address range: 0x4043e0 - 0x4044c2
int64_t function_4043e0(int32_t a1, int64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2 & -0x20101; // 0x4043ef
    int64_t result; // 0x4043e0
    if (v1 == 0) {
        // 0x4043f7
        return result;
    }
    int64_t v2 = a1;
    int64_t v3; // 0x4043e0
    int64_t result2 = function_4095d0(v2, 3, a3, v3); // 0x404412
    int32_t v4 = result2; // 0x40441b
    int64_t v5; // 0x4043e0
    int64_t v6; // 0x4043e0
    int64_t v7; // 0x4043e0
    int64_t v8; // 0x4043e0
    if (v4 < 0) {
        goto lab_0x404472;
    } else {
        int64_t v9 = result2 & 0xffffffff; // 0x404417
        int64_t v10 = v9 | (int64_t)v1; // 0x404419
        if (v4 == (int32_t)v10) {
            // 0x4043f7
            return result2;
        }
        // 0x404423
        v7 = v10;
        if ((v10 & 0x10000) != 0) {
            // 0x404443
            int64_t v11; // bp-184, 0x4043e0
            if (__fxstat(1, a1, (struct stat *)&v11) != 0) {
                goto lab_0x404472;
            } else {
                // 0x404457
                v8 = v10;
                v6 = v9;
                v5 = 0x4000;
                int32_t v12; // 0x4043e0
                if ((v12 & 0xf000) == 0x4000) {
                    goto lab_0x4044af;
                } else {
                    // 0x404467
                    *__errno_location() = 20;
                    goto lab_0x404472;
                }
            }
        } else {
            goto lab_0x40442b;
        }
    }
  lab_0x404472:;
    int64_t v13 = function_4083e0(4, a3); // 0x40447a
    int64_t v14 = (int64_t)dcgettext(NULL, "setting flags for %s", 5); // 0x40448e
    int32_t v15 = *__errno_location(); // 0x4044a6
    int64_t v16 = function_4041e0(1, v15, v14, v13, v3, v3); // 0x4044aa
    v8 = v14;
    v6 = v13;
    int64_t v17 = v13; // 0x4044aa
    v5 = v16;
    goto lab_0x4044af;
  lab_0x4044af:;
    int64_t v18 = v8 & 0xfffeffff; // 0x4044af
    result = v5;
    v7 = v18;
    int64_t v19 = v17; // 0x4044b7
    if ((int32_t)v18 == (int32_t)v6) {
        // 0x4043f7
        return result;
    }
    goto lab_0x40442b;
  lab_0x40442b:;
    uint32_t v20 = (int32_t)function_4095d0(v2 & 0xffffffff, 4, v7 & 0xffffffff, v19) + 1; // 0x40443c
    result = v20;
    if (v20 != 0) {
        // 0x4043f7
        return result;
    }
    goto lab_0x404472;
}
// Address range: 0x4044d0 - 0x40459e
int64_t function_4044d0(int64_t a1, int32_t fd, int64_t offset, int64_t whence) {
    int32_t v1 = ioctl(fd, -0x7fcf92fe); // 0x4044f3
    int32_t result = lseek(fd, (int32_t)offset, (int32_t)whence); // 0x404503
    if (v1 == 0 != result > -1 || true != (true == ioctl(fd, -0x7fcf92fe) == 0)) {
        // 0x404515
        return result;
    }
    // 0x404557
    if (g30 != 1) {
        // 0x404560
        int64_t v2; // 0x4044d0
        function_4041e0(0, (int32_t)"warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types" ^ (int32_t)"warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types", (int64_t)dcgettext(NULL, "warning: working around lseek kernel bug for file (%s)\n  of mt_type=0x%0lx -- see <sys/mtio.h> for the list of types", 5), a1, v2, v2);
    }
    // 0x40458a
    *__errno_location() = 0;
    // 0x404515
    return -1;
}
// Address range: 0x4045a0 - 0x404718
int64_t function_4045a0(int32_t a1, int64_t a2) {
    int64_t v1 = a1;
    char v2 = a1 != 0 ? *(char *)&g56 : g57;
    int64_t * v3 = a1 != 0 ? &g48 : &g49; // 0x4045c3
    int64_t v4 = *v3; // 0x4045c3
    int64_t v5; // 0x4045a0
    int64_t v6; // 0x4045a0
    int64_t v7; // 0x4045a0
    int64_t v8; // 0x4045a0
    int64_t v9; // 0x4045a0
    int64_t v10; // 0x4045a0
    if (a2 == 0) {
        // 0x404600
        if (v4 == 0 == v2 == 0) {
            // 0x4045e6
            return 1;
        }
        int64_t v11 = v1 & 0xffffffff; // 0x404610
        v9 = v4;
        v5 = v11;
        v7 = 0;
        v10 = v4;
        v6 = v11;
        v8 = 0;
        if (a1 != 0) {
            goto lab_0x40464f;
        } else {
            goto lab_0x404617;
        }
    } else {
        uint64_t v12 = v4 + a2; // 0x4045cb
        int64_t v13 = v12 % 0x20000; // 0x4045d1
        *v3 = v13;
        if (v12 < 0x20000) {
            // 0x4045e6
            return 1;
        }
        int64_t v14 = v12 - v13; // 0x404640
        if (v14 == 0) {
            // 0x4045e6
            return 1;
        }
        int64_t v15 = v1 & 0xffffffff; // 0x404648
        v9 = v14;
        v5 = v15;
        v7 = v13;
        v10 = v14;
        v6 = v15;
        v8 = v13;
        if (a1 == 0) {
            goto lab_0x404617;
        } else {
            goto lab_0x40464f;
        }
    }
  lab_0x40464f:;
    int32_t v16 = g26; // 0x40464f
    if (v16 == -1) {
        // 0x4045e6
        return 0;
    }
    // 0x40465f
    int64_t v17; // 0x4045a0
    int64_t fd; // 0x4045a0
    int64_t v18; // 0x4045a0
    int64_t v19; // 0x4045a0
    int64_t v20; // 0x4045a0
    int64_t v21; // 0x4045a0
    int64_t v22; // 0x4045a0
    int64_t v23; // 0x4045a0
    if (v16 < 0) {
        int32_t v24 = lseek(1, 0, SEEK_CUR); // 0x404704
        g26 = v24;
        v20 = v10;
        v22 = v24;
        v17 = v6;
        v18 = v8;
        goto lab_0x40467b;
    } else {
        int64_t v25 = v16; // 0x40464f
        v21 = v10;
        v23 = v25;
        fd = v6;
        v19 = v8;
        if (a2 == 0) {
            goto lab_0x404687;
        } else {
            int64_t v26 = v8 + v10 + v25; // 0x404671
            g26 = v26;
            v20 = v10;
            v22 = v26;
            v17 = v6;
            v18 = v8;
            goto lab_0x40467b;
        }
    }
  lab_0x404617:;
    unsigned char result = *(char *)&g80; // 0x404617
    v20 = v9;
    v22 = g78;
    v17 = v5;
    v18 = v7;
    if (result == 0) {
        // 0x40462b
        *__errno_location() = 29;
        // 0x4045e6
        return result;
    }
    goto lab_0x40467b;
  lab_0x40467b:
    // 0x40467b
    v21 = v20;
    v23 = v22;
    fd = v17;
    v19 = v18;
    if (v22 < 0) {
        // 0x4045e6
        return 0;
    }
    goto lab_0x404687;
  lab_0x404687:;
    int64_t v27 = v23 - v21; // 0x404687
    int64_t length; // 0x4045a0
    int64_t offset; // 0x4045a0
    int64_t v28; // 0x4045a0
    if (a2 != 0 || v21 == 0) {
        int64_t v29 = v27 - v19; // 0x4046d8
        length = v21;
        offset = v29;
        v28 = v29;
        if (v21 != 0) {
            goto lab_0x40469c;
        } else {
            goto lab_0x4046e0;
        }
    } else {
        // 0x404694
        v28 = v27;
        if (v2 != 0) {
            goto lab_0x4046e0;
        } else {
            // 0x404699
            length = v21;
            offset = v27 - v19;
            goto lab_0x40469c;
        }
    }
  lab_0x40469c:;
    int64_t result2 = posix_fadvise((int32_t)fd, (int32_t)offset, (int32_t)length, POSIX_FADV_DONTNEED) != -1; // 0x4046b3
    // 0x4045e6
    return result2;
  lab_0x4046e0:;
    uint64_t v30 = v28;
    length = 0;
    offset = v30 - v30 % (int64_t)g105;
    goto lab_0x40469c;
}
// Address range: 0x404720 - 0x404753
int64_t function_404720(void) {
    // 0x404720
    if (g27 != 0) {
        // 0x404729
        return function_405b30();
    }
    int64_t result = function_405ab0((int64_t)g45); // 0x40473b
    if ((int32_t)result == 0) {
        // 0x404744
        return result;
    }
    // 0x404749
    _exit(1);
    // UNREACHABLE
}
// Address range: 0x404760 - 0x404810
int64_t function_404760(int64_t a1) {
    // 0x404760
    int64_t v1; // 0x404760
    if (close(0) < 0) {
        int64_t v2 = function_4083e0(4, (int64_t)g107); // 0x404792
        char * v3 = dcgettext(NULL, "closing input file %s", 5); // 0x4047a6
        int32_t v4 = *__errno_location(); // 0x4047be
        function_4041e0(1, v4, (int64_t)v3, v2, v1, v1);
    } else {
        int32_t result = close(1); // 0x404776
        if (result >= 0) {
            // 0x40477f
            return result;
        }
    }
    int64_t v5 = function_4083e0(4, (int64_t)g106); // 0x4047d3
    char * v6 = dcgettext(NULL, "closing output file %s", 5); // 0x4047e7
    int32_t v7 = *__errno_location(); // 0x4047ff
    return function_4041e0(1, v7, (int64_t)v6, v5, v1, v1);
}
// Address range: 0x404810 - 0x4048a1
int64_t function_404810(void) {
    // 0x404810
    if ((g60 || g62) == 0) {
        // 0x4048a0
        return 0;
    }
    uint32_t result; // 0x404873
    while (true) {
        // 0x404829
        int64_t oset; // bp-136, 0x404810
        sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&g63, (struct _TYPEDEF_sigset_t *)&oset);
        if (g60 != 0) {
            // 0x404848
            g60--;
        }
        // 0x404851
        sigprocmask(SIG_SETMASK, (struct _TYPEDEF_sigset_t *)&oset, NULL);
        if (g62 != 0) {
            // 0x404888
            function_404760(2);
            function_4040b0();
            raise(g62);
        } else {
            // 0x404864
            function_4040b0();
        }
        // 0x404869
        if (g62 == 0) {
            // 0x404873
            result = g60;
            if (result == 0) {
                // break -> 0x40487d
                break;
            }
        }
    }
    // 0x40487d
    return result;
}
// Address range: 0x4048b0 - 0x4048f8
int64_t function_4048b0(uint32_t a1, int64_t a2, int64_t a3, uint32_t a4) {
    function_404810();
    int64_t v1 = function_405bd0((int64_t)a1, a2, a3 & 0xffffffff, (int64_t)a4); // 0x4048e2
    // 0x4048b0
    while ((int32_t)v1 < 0) {
        // 0x4048c8
        if (*__errno_location() != 4) {
            // break -> 0x4048ed
            break;
        }
        function_404810();
        v1 = function_405bd0((int64_t)a1, a2, a3 & 0xffffffff, (int64_t)a4);
    }
    // 0x4048ed
    return v1 & 0xffffffff;
}
// Address range: 0x404900 - 0x404a0a
int64_t function_404900(int64_t fd, int64_t buf, uint64_t nbyte) {
    function_404810();
    int32_t v1 = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x404937
    int64_t result2; // 0x404900
    int32_t v2; // 0x404900
    int64_t v3; // 0x404937
    int32_t v4; // 0x404951
    int32_t * v5; // 0x404945
    int32_t v6; // 0x40494a
    if (v1 != -1) {
        if (v1 >= 0) {
            // break -> 0x404988
            break;
        }
        // 0x40491d
        v2 = *__errno_location();
    } else {
        // 0x404945
        v5 = __errno_location();
        v6 = *v5;
        v2 = v6;
        if (v6 == 22) {
            // 0x404951
            v3 = v1;
            v4 = g51;
            result2 = v3;
            if (v4 < 1) {
                goto lab_0x40496f;
            } else {
                // 0x40495d
                result2 = v3;
                if ((int64_t)v4 >= nbyte) {
                    goto lab_0x40496f;
                } else {
                    // 0x404962
                    result2 = v3;
                    if ((g93 & 64) != 0) {
                        // 0x4049fd
                        *v5 = 0;
                        result2 = 0;
                        goto lab_0x40496f;
                    } else {
                        goto lab_0x40496f;
                    }
                }
            }
        }
    }
    // 0x404900
    while (v2 == 4) {
        // 0x404929
        function_404810();
        v1 = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
        if (v1 != -1) {
            if (v1 >= 0) {
                // break -> 0x404988
                break;
            }
            // 0x40491d
            v2 = *__errno_location();
        } else {
            // 0x404945
            v5 = __errno_location();
            v6 = *v5;
            v2 = v6;
            if (v6 == 22) {
                // 0x404951
                v3 = v1;
                v4 = g51;
                result2 = v3;
                if (v4 < 1) {
                    goto lab_0x40496f;
                } else {
                    // 0x40495d
                    result2 = v3;
                    if ((int64_t)v4 >= nbyte) {
                        goto lab_0x40496f;
                    } else {
                        // 0x404962
                        result2 = v3;
                        if ((g93 & 64) != 0) {
                            // 0x4049fd
                            *v5 = 0;
                            result2 = 0;
                            goto lab_0x40496f;
                        } else {
                            goto lab_0x40496f;
                        }
                    }
                }
            }
        }
    }
    int64_t result = v1; // 0x404937
    if (v1 < 1 || result >= nbyte) {
        // 0x4049c8
        if (v1 >= 0 != v1 != 0) {
            // 0x40496f
            g51 = result;
            return result;
        }
    } else {
        // 0x404992
        function_404810();
    }
    // 0x404997
    if (g76 == 0) {
        // 0x40496f
        g51 = result;
        return result;
    }
    int32_t v7 = g51; // 0x4049a0
    uint64_t v8 = (int64_t)v7; // 0x4049a0
    if (v7 < 1 || v8 >= nbyte) {
        // 0x40496f
        g51 = result;
        return result;
    }
    // 0x4049b1
    if (g30 != 1) {
        // 0x4049d0
        int64_t v9; // 0x404900
        function_4041e0(0, (int32_t)"warning: partial read (%lu byte); suggest iflag=fullblock" ^ (int32_t)"warning: partial read (%lu byte); suggest iflag=fullblock", (int64_t)dcngettext(NULL, "warning: partial read (%lu byte); suggest iflag=fullblock", "warning: partial read (%lu bytes); suggest iflag=fullblock", v7, 5), v8, 5, v9);
    }
    // 0x4049ba
    g76 = 0;
    result2 = result;
  lab_0x40496f:
    // 0x40496f
    g51 = result2;
    return result2;
}
// Address range: 0x404a10 - 0x404a71
int64_t function_404a10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a10
    if (a3 == 0) {
        // 0x404a50
        return 0;
    }
    int64_t v1 = a3; // 0x404a2b
    int64_t v2 = a2; // 0x404a2b
    int64_t v3 = 0; // 0x404a2b
    int64_t v4 = function_404900(a1 & 0xffffffff, v2, v1); // 0x404a46
    int64_t result = v4; // 0x404a4e
    while (v4 >= 0) {
        // 0x404a30
        result = v3;
        if (v4 == 0) {
            // break -> 0x404a50
            break;
        }
        // 0x404a32
        v3 += v4;
        v1 -= v4;
        v2 += v4;
        result = v3;
        if (v1 == 0) {
            // break -> 0x404a50
            break;
        }
        v4 = function_404900(a1 & 0xffffffff, v2, v1);
        result = v4;
    }
    // 0x404a50
    return result;
}
// Address range: 0x404a80 - 0x404ba0
int64_t function_404a80(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = (int64_t)g105; // 0x404a89
    int64_t v2 = g104; // 0x404a90
    int64_t * mem = malloc((int32_t)(v2 + 3 + 2 * v1)); // 0x404a9c
    if (mem != NULL) {
        uint64_t v3 = v1 + 1 + (int64_t)mem; // 0x404aa6
        g74 = v3 - v3 % v1;
        return v3 / v1;
    }
    // 0x404ac7
    int64_t v4; // bp-680, 0x404a80
    int64_t v5; // 0x404a80
    int64_t v6 = function_405d70(v2, &v4, 497, 1, 1, v5); // 0x404add
    function_4041e0(1, (int32_t)"memory exhausted by input buffer of size %lu bytes (%s)" ^ (int32_t)"memory exhausted by input buffer of size %lu bytes (%s)", (int64_t)dcgettext(NULL, "memory exhausted by input buffer of size %lu bytes (%s)", 5), v2, v6, v5);
    int64_t * mem2 = malloc((int32_t)g105 - 1 + g103); // 0x404b2c
    if (mem2 == NULL) {
        int64_t v7 = g103; // 0x404b20
        int64_t v8; // bp-1360, 0x404a80
        int64_t v9 = function_405d70(v7, &v8, 497, 1, 1, v5); // 0x404b6d
        return function_4041e0(1, (int32_t)"memory exhausted by output buffer of size %lu bytes (%s)" ^ (int32_t)"memory exhausted by output buffer of size %lu bytes (%s)", (int64_t)dcgettext(NULL, "memory exhausted by output buffer of size %lu bytes (%s)", 5), v7, v9, v5);
    }
    uint64_t v10 = (int64_t)g105; // 0x404b19
    uint64_t v11 = v10 - 1 + (int64_t)mem2; // 0x404b36
    g73 = v11 - v11 % v10;
    return v11 / v10;
}
// Address range: 0x404ba0 - 0x404be8
int64_t function_404ba0(void) {
    // 0x404ba0
    int64_t result; // 0x404ba0
    if (g73 != 0 || (g95 & 8) != 0) {
        // 0x404baa
        return result;
    }
    // 0x404bb4
    if (g74 != 0) {
        // 0x404bbe
        g73 = g74;
        return g74;
    }
    // 0x404bd2
    function_404a80(result, result, result);
    g73 = g74;
    return g74;
}
// Address range: 0x404bf0 - 0x404c2b
int64_t function_404bf0(int64_t length) {
    function_404810();
    uint32_t result = ftruncate(1, (int32_t)length); // 0x404c17
    // 0x404bf0
    while (result < 0) {
        // 0x404c00
        if (*__errno_location() != 4) {
            // break -> 0x404c22
            break;
        }
        function_404810();
        result = ftruncate(1, (int32_t)length);
    }
    // 0x404c22
    return result;
}
// Address range: 0x404c30 - 0x404e28
int64_t function_404c30(int64_t str, int64_t offset) {
    // 0x404c30
    if ((g91 & 64) != 0) {
        // 0x404c49
        if ((int64_t)g103 > offset) {
            // 0x404d90
            int64_t v1; // 0x404c30
            int64_t v2 = function_4095d0(1, 3, v1, v1); // 0x404d9c
            if ((int32_t)function_4095d0(1, 4, v2 & 0xffffbfff, v1) != 0) {
                // 0x404dbb
                if (g30 != 1) {
                    int64_t v3 = function_4084b0(0, 3, (int64_t)g106); // 0x404df4
                    char * v4 = dcgettext(NULL, "failed to turn off O_DIRECT: %s", 5); // 0x404e08
                    int32_t v5 = *__errno_location(); // 0x404e1d
                    function_4041e0(0, v5, (int64_t)v4, v3, v1, v1);
                }
            }
            // 0x404dc4
            *(char *)&g56 = 1;
            function_4045a0(1, 0);
            g94 |= 0x8000;
        }
    }
    // 0x404c56
    if (offset == 0) {
        // 0x404cf2
        return 0;
    }
    int64_t v6 = 0;
    int64_t v7; // 0x404c30
    while (true) {
      lab_0x404c76:
        // 0x404c76
        v7 = v6;
        function_404810();
        g97 = 0;
        int64_t v8 = offset; // 0x404c90
        if ((g94 & 0x10000) != 0) {
            int64_t v9 = str; // 0x404c30
            while (*(char *)v9 == 0) {
                int64_t n = v8 - 1; // 0x404ca1
                if (n == 0) {
                    goto lab_0x404d00;
                }
                int64_t str2 = v9 + 1; // 0x404c9d
                v8 = n;
                v9 = str2;
                if (n % 16 == 0) {
                    // 0x404cac
                    if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
                        goto lab_0x404d00;
                    } else {
                        goto lab_0x404cb8;
                    }
                }
            }
        }
        goto lab_0x404cb8;
    }
  lab_0x404d58:
    // 0x404d58
    *__errno_location() = 28;
    int64_t result = v7; // 0x404d63
    goto lab_0x404ce0_2;
  lab_0x404d00:;
    // 0x404d00
    int64_t v11; // 0x404c30
    if (lseek(1, (int32_t)offset, SEEK_CUR) < 0) {
        // 0x404d40
        g94 &= -0x10001;
        goto lab_0x404cb8;
    } else {
        // 0x404d17
        g97 = 1;
        if (offset >= 0) {
            // 0x404c6e
            v11 = offset + v7;
            goto lab_0x404c71;
        } else {
            int32_t v13 = *__errno_location(); // 0x404d2f
            v11 = v7;
            result = v7;
            if (v13 == 4) {
                goto lab_0x404c71;
            } else {
                goto lab_0x404ce0_2;
            }
        }
    }
  lab_0x404ce0_2:
    // 0x404ce0
    if (g58 != 0 == (result != 0)) {
        // 0x404d70
        function_4045a0(1, result);
        return result;
    }
    // 0x404cf2
    return result;
  lab_0x404cb8:;
    int32_t v10 = write(1, (int64_t *)(v7 + str), (int32_t)(offset - v7)); // 0x404cc7
    if (v10 >= 0) {
        // 0x404c68
        if (v10 == 0) {
            // break -> 0x404d58
            goto lab_0x404d58;
        }
        // 0x404c6e
        v11 = (int64_t)v10 + v7;
        goto lab_0x404c71;
    } else {
        int32_t v12 = *__errno_location(); // 0x404cd6
        v11 = v7;
        result = v7;
        if (v12 != 4) {
            goto lab_0x404ce0_2;
        }
        goto lab_0x404c71;
    }
  lab_0x404c71:
    // 0x404c71
    v6 = v11;
    result = v6;
    if (v6 >= offset) {
        goto lab_0x404ce0_2;
    }
    goto lab_0x404c76;
}
// Address range: 0x404e30 - 0x404e4d
int64_t function_404e30(void) {
    // 0x404e30
    int64_t v1; // 0x404e30
    function_404760(v1);
    function_4040b0();
    function_404810();
    exit(1);
    // UNREACHABLE
}
// Address range: 0x404e50 - 0x404ee2
int64_t function_404e50(void) {
    int64_t result = function_404c30(g73, (int64_t)g103); // 0x404e62
    g84 += (int32_t)result;
    if (result == (int64_t)g103) {
        // 0x404e77
        g72 = 0;
        g87++;
        return result;
    }
    int64_t v1 = function_4083e0(4, (int64_t)g106); // 0x404e9e
    char * v2 = dcgettext(NULL, "writing to %s", 5); // 0x404eb2
    int32_t v3 = *__errno_location(); // 0x404ec7
    int64_t v4; // 0x404e50
    function_4041e0(0, v3, (int64_t)v2, v1, v4, v4);
    if (result != 0) {
        // 0x404ed5
        g88++;
    }
    // 0x404edd
    function_404e30();
    // UNREACHABLE
}
// Address range: 0x404ef0 - 0x404ff9
int64_t function_404ef0(int64_t a1, int64_t a2) {
    int64_t result; // 0x404ef0
    if (a2 == 0) {
        // 0x404f8b
        return result;
    }
    int64_t v1 = a2 + a1; // 0x404ef2
    int64_t v2 = g71; // 0x404ef0
    int64_t v3 = a1; // 0x404ef0
    while (true) {
        int64_t v4 = v3;
        int64_t v5 = v2; // 0x404f62
        unsigned char v6 = *(char *)v4; // 0x404f58
        int64_t v7 = v6; // 0x404f58
        if (v6 != g29) {
            int64_t v8; // 0x404ef0
            int64_t v9; // 0x404ef0
            if (v5 == g102) {
                // 0x404fd8
                g75++;
                v8 = v7;
                v9 = v5;
            } else {
                // 0x404f19
                v8 = v7;
                v9 = v5;
                if (v5 < g102) {
                    int64_t v10 = g72 + 1; // 0x404f29
                    *(char *)(g73 + g72) = v6;
                    g72 = v10;
                    v8 = v7;
                    v9 = v5;
                    if (v10 >= (int64_t)g103) {
                        // 0x404fe8
                        v8 = function_404e50();
                        v9 = g71;
                    }
                }
            }
            int64_t v11 = v9 + 1; // 0x404f44
            int64_t v12 = v4 + 1; // 0x404f48
            g71 = v11;
            v2 = v11;
            v3 = v12;
            result = v8;
            if (v1 == v12) {
                // break -> 0x404f8b
                break;
            }
        } else {
            int64_t v13 = v7; // 0x404f75
            int64_t v14 = v5; // 0x404f75
            if (v5 < g102) {
                int64_t v15 = g72; // 0x404fa2
                int64_t v16 = v15 + 1; // 0x404fb7
                g72 = v16;
                *(char *)(g73 + v15) = g28[0];
                int64_t v17 = v16; // 0x404fcd
                if (v16 >= (int64_t)g103) {
                    // 0x404fcf
                    v17 = function_404e50();
                }
                int64_t v18 = v14 + 1; // 0x404f95
                v13 = v17;
                v14 = v18;
                while (g102 > v18) {
                    // 0x404fa2
                    v15 = g72;
                    v16 = v15 + 1;
                    g72 = v16;
                    *(char *)(g73 + v15) = g28[0];
                    v17 = v16;
                    if (v16 >= (int64_t)g103) {
                        // 0x404fcf
                        v17 = function_404e50();
                    }
                    // 0x404f95
                    v18 = v14 + 1;
                    v13 = v17;
                    v14 = v18;
                }
            }
            // 0x404f77
            g71 = 0;
            int64_t v19 = v4 + 1; // 0x404f82
            v2 = 0;
            v3 = v19;
            result = v13;
            if (v1 == v19) {
                // break -> 0x404f8b
                break;
            }
        }
    }
    // 0x404f8b
    return result;
}
// Address range: 0x405000 - 0x40514c
int64_t function_405000(int64_t a1, uint64_t a2) {
    // 0x405000
    int64_t result; // 0x405000
    if (a2 == 0) {
        // 0x4050b0
        return result;
    }
    int64_t v1 = 0; // 0x405003
    int64_t v2; // 0x405000
    int64_t v3; // 0x405000
    int64_t v4; // 0x405000
    while (true) {
      lab_0x405068_2:;
        int64_t v5 = v1;
        int64_t v6 = g71; // 0x405068
        char v7 = *(char *)(v5 + a1); // 0x405076
        g71 = v6 + 1;
        if (v6 >= g102) {
            int64_t v8 = g72; // 0x405020
            g50 = 0;
            g71 = 0;
            int64_t v9 = v8 + 1; // 0x40504b
            g72 = v9;
            *(char *)(g73 + v8) = g29;
            v4 = v9;
            v2 = v5;
            v3 = v5;
            if (v9 >= (int64_t)g103) {
                goto lab_0x4050dc;
            } else {
                goto lab_0x405063;
            }
        } else {
            char v10 = g28[0]; // 0x405089
            int64_t v11 = g50; // 0x405090
            int64_t v12 = v5 + 1; // 0x405097
            if (v10 != v7) {
                int64_t v13 = g103; // 0x4050f6
                int64_t v14 = g72; // 0x405100
                int64_t v15 = v13; // 0x405100
                int64_t v16 = g73; // 0x405100
                int64_t v17 = g72; // 0x405100
                char v18 = v10; // 0x405100
                int64_t v19 = v13; // 0x405100
                if (v11 != 0) {
                    int64_t v20 = v17 + 1; // 0x40511c
                    *(char *)(g73 + v17) = v18;
                    g72 = v20;
                    int64_t v21 = v20; // 0x40512d
                    int64_t v22 = v19; // 0x40512d
                    if (v20 >= v19) {
                        // 0x40512f
                        function_404e50();
                        v21 = g72;
                        v22 = g103;
                    }
                    int64_t v23 = g73;
                    int64_t v24 = v22;
                    int64_t v25 = v21;
                    int64_t v26 = g50 - 1; // 0x405108
                    g50 = v26;
                    v14 = v25;
                    v15 = v24;
                    v16 = v23;
                    while (v26 != 0) {
                        // 0x405112
                        v20 = v25 + 1;
                        *(char *)(v23 + v25) = g28[0];
                        g72 = v20;
                        v21 = v20;
                        v22 = v24;
                        int64_t v27 = v23; // 0x40512d
                        if (v20 >= v24) {
                            // 0x40512f
                            function_404e50();
                            v27 = g73;
                            v21 = g72;
                            v22 = g103;
                        }
                        // 0x405108
                        v23 = v27;
                        v24 = v22;
                        v25 = v21;
                        v26 = g50 - 1;
                        g50 = v26;
                        v14 = v25;
                        v15 = v24;
                        v16 = v23;
                    }
                }
                int64_t v28 = v14 + 1; // 0x4050c8
                *(char *)(v16 + v14) = v7;
                g72 = v28;
                v4 = v28;
                v2 = v12;
                v3 = v12;
                if (v28 < v15) {
                    goto lab_0x405063;
                } else {
                    goto lab_0x4050dc;
                }
            } else {
                // 0x4050a0
                g50 = v11 + 1;
                result = v6;
                if (v12 >= a2) {
                    // break -> 0x4050b0
                    break;
                }
                // 0x405068
                v1 = v12;
                goto lab_0x405068_2;
            }
        }
    }
  lab_0x4050b0:
    // 0x4050b0
    return result;
  lab_0x4050dc:
    // 0x4050dc
    v4 = function_404e50();
    v2 = v3;
    goto lab_0x405063;
  lab_0x405063:
    // 0x405063
    result = v4;
    if (v2 >= a2) {
        // break -> 0x4050b0
        goto lab_0x4050b0;
    }
    // 0x405068
    v1 = v2;
    goto lab_0x405068_2;
}
// Address range: 0x405150 - 0x40545b
int64_t function_405150(uint32_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t * a5) {
    int64_t v1 = (int64_t)a5;
    int32_t * v2 = __errno_location(); // 0x405173
    *v2 = 0;
    int32_t v3; // 0x405150
    int32_t v4; // 0x405150
    int64_t v5; // 0x405150
    if (0x7fffffffffffffff / a4 < a3) {
        // 0x4051e4
        v3 = 0;
        if (function_4044d0(a2, a1, 0, 2) >= 0) {
            // 0x40544e
            v4 = 75;
            goto lab_0x4052c1;
        } else {
            goto lab_0x405207;
        }
    } else {
        int64_t v6 = a4 * a3 + v1; // 0x4051a7
        if (function_4044d0(a2, a1, v6, 1) >= 0) {
            if (a1 != 0) {
                // 0x4051c8
                *a5 = 0;
                // 0x4051d2
                return 0;
            }
            // 0x40530f
            int64_t v7; // bp-200, 0x405150
            if (__fxstat(1, 0, (struct stat *)&v7) != 0) {
                int64_t v8 = function_4083e0(4, a2); // 0x405419
                char * v9 = dcgettext(NULL, "cannot fstat %s", 5); // 0x40542d
                function_4041e0(1, *v2, (int64_t)v9, v8, v1, v5);
                // 0x4051d2
                return 0;
            }
            int64_t v10 = g78; // 0x40532c
            int64_t v11 = v10 + v6;
            int64_t result = 0; // 0x405341
            int64_t v12 = v6; // 0x405341
            int32_t v13; // 0x405150
            if ((v13 & 0xd000) == 0x8000 == v5 < v11) {
                // 0x405377
                result = (v6 - v5) / a4;
                v12 = v5 - v10;
            }
            // 0x405351
            g78 = v11;
            if (v11 < v12) {
                // 0x405361
                g77 = 1;
            }
            // 0x4051d2
            return result;
        }
        int32_t v14 = *v2; // 0x405294
        v3 = v14;
        if (function_4044d0(a2, a1, 0, 2) < 0) {
            goto lab_0x405207;
        } else {
            // 0x4052b6
            v4 = v14;
            if (v14 == 0) {
                // 0x40544e
                v4 = 75;
                goto lab_0x4052c1;
            } else {
                goto lab_0x4052c1;
            }
        }
    }
  lab_0x40523b:
    if (g55 < 0) {
        // break -> 0x40538a
        goto lab_0x40538a;
    }
    // 0x40524b
    int64_t v15; // 0x405150
    int64_t result2 = v15; // 0x40524b
    if (g55 == 0) {
        // 0x4051d2
        return result2;
    }
    uint64_t v16; // 0x405150
    if (a1 == 0) {
        int64_t v17 = g78 + v16; // 0x405255
        g78 = v17;
        if (v17 < v16) {
            // 0x405265
            g77 = 1;
        }
    }
    if (v15 == 0) {
        // 0x4051c8
        *a5 = 0;
        // 0x4051d2
        return 0;
    }
    int64_t v18 = v15 - 1; // 0x405275
    int64_t v19 = v18; // 0x405279
    if (v18 != 0) {
        goto lab_0x405228;
    } else {
        // 0x40527b
        if (a5 == NULL) {
            // 0x4051d2
            return 0;
        }
        // 0x40528f
        v15 = 0;
        goto lab_0x40523b;
    }
  lab_0x405207:
    // 0x405207
    if (a1 != 0) {
        // 0x4052fe
        function_404ba0();
    } else {
        // 0x40520f
        if (g74 == 0) {
            // 0x40536d
            function_404a80(a2, (int64_t)a1, 0);
        }
    }
    // 0x405228
    v16 = (int64_t)g55;
    v19 = a3;
    while (true) {
      lab_0x405228:
        // 0x405228
        v15 = v19;
        if (v19 == 0) {
            // 0x40528f
            v15 = 0;
            goto lab_0x40523b;
        } else {
            goto lab_0x40523b;
        }
    }
  lab_0x40538a:;
    int32_t v20 = v3; // 0x40538c
    if (a1 == 0) {
        int64_t v21 = function_4083e0(4, a2); // 0x405397
        char * v22 = dcgettext(NULL, "error reading %s", 5); // 0x4053ab
        function_4041e0(0, *v2, (int64_t)v22, v21, v1, v5);
        if (g95 % 2 != 0) {
            // 0x405409
            function_4040b0();
        }
        // 0x4053cb
        function_404e30();
        // UNREACHABLE
    }
    goto lab_0x4053db;
  lab_0x4052c1:
    // 0x4052c1
    v20 = v4;
    int32_t v23; // 0x405150
    int64_t v24; // 0x405150
    int64_t v25; // 0x405150
    if (a1 != 0) {
        goto lab_0x4053db;
    } else {
        // 0x4052d4
        v23 = v4;
        v24 = (int64_t)"%s: cannot skip";
        v25 = function_4084b0(0, 3, a2);
        goto lab_0x4053ed;
    }
  lab_0x4053db:
    // 0x4053db
    v23 = v20;
    v24 = (int64_t)"%s: cannot seek";
    v25 = function_4084b0(0, 3, a2);
    goto lab_0x4053ed;
  lab_0x4053ed:
    // 0x4053ed
    function_4041e0(0, v23, (int64_t)dcgettext(NULL, (char *)v24, 5), v25, v1, v5);
    // 0x4053cb
    function_404e30();
    // UNREACHABLE
}
// Address range: 0x405460 - 0x4059cd
int64_t function_405460(int64_t a1) {
    int32_t status = a1; // 0x405476
    if (status != 0) {
        // 0x40547a
        __fprintf_chk(g45, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40549f
        exit(status);
        // UNREACHABLE
    }
    // 0x4054a6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPERAND]...\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Copy a file, converting and formatting according to the operands.\n\n  bs=BYTES        read and write up to BYTES bytes at a time (default: 512);\n                  overrides ibs and obs\n  cbs=BYTES       convert BYTES bytes at a time\n  conv=CONVS      convert the file as per the comma separated symbol list\n  count=N         copy only N input blocks\n  ibs=BYTES       read up to BYTES bytes at a time (default: 512)\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  if=FILE         read from FILE instead of stdin\n  iflag=FLAGS     read as per the comma separated symbol list\n  obs=BYTES       write BYTES bytes at a time (default: 512)\n  of=FILE         write to FILE instead of stdout\n  oflag=FLAGS     write as per the comma separated symbol list\n  seek=N          skip N obs-sized blocks at start of output\n  skip=N          skip N ibs-sized blocks at start of input\n  status=LEVEL    The LEVEL of information to print to stderr;\n                  'none' suppresses everything but error messages,\n                  'noxfer' suppresses the final transfer statistics,\n                  'progress' shows periodic transfer statistics\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "\nN and BYTES may be followed by the following multiplicative suffixes:\nc =1, w =2, b =512, kB =1000, K =1024, MB =1000*1000, M =1024*1024, xM =M,\nGB =1000*1000*1000, G =1024*1024*1024, and so on for T, P, E, Z, Y.\n\nEach CONV symbol may be:\n\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  ascii     from EBCDIC to ASCII\n  ebcdic    from ASCII to EBCDIC\n  ibm       from ASCII to alternate EBCDIC\n  block     pad newline-terminated records with spaces to cbs-size\n  unblock   replace trailing spaces in cbs-size records with newline\n  lcase     change upper case to lower case\n  ucase     change lower case to upper case\n  sparse    try to seek rather than write the output for NUL input blocks\n  swab      swap every pair of input bytes\n  sync      pad every input block with NULs to ibs-size; when used\n            with block or unblock, pad with spaces rather than NULs\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  excl      fail if the output file already exists\n  nocreat   do not create the output file\n  notrunc   do not truncate the output file\n  noerror   continue after read errors\n  fdatasync  physically write output file data before finishing\n  fsync     likewise, but also write metadata\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "\nEach FLAG symbol may be:\n\n  append    append mode (makes sense only for output; conv=notrunc suggested)\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  direct    use direct I/O for data\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  directory  fail unless a directory\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  dsync     use synchronized I/O for data\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  sync      likewise, but also for metadata\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  fullblock  accumulate full blocks of input (iflag only)\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  nonblock  use non-blocking I/O\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  noatime   do not update access time\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  nocache   Request to drop cache.  See also oflag=sync\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  noctty    do not assign controlling terminal from file\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  count_bytes  treat 'count=N' as a byte count (iflag only)\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  skip_bytes  treat 'skip=N' as a byte count (iflag only)\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "  seek_bytes  treat 'seek=N' as a byte count (oflag only)\n", 5), g43);
    __printf_chk(1, dcgettext(NULL, "\nSending a %s signal to a running 'dd' process makes it\nprint I/O statistics to standard error and then resume copying.\n\nOptions are:\n\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g43);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g43);
    int64_t v1 = &g1; // bp-136, 0x4057a8
    bool v2; // 0x405460
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x405830
    int64_t v6 = *(int64_t *)v5; // 0x405834
    int64_t v7 = 3; // 0x40583a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"dd";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x405846
        char v11 = *(char *)v9; // 0x405846
        char v12 = v11; // 0x405846
        bool v13 = false; // 0x405846
        while (v10 == v11) {
            // 0x40583c
            v7--;
            int64_t v14 = v9 + v3; // 0x405846
            int64_t v15 = v8 + v3; // 0x405846
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
            // break -> 0x405852
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x405852
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x405964;
        } else {
            // 0x40594e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4059a3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4058b4;
            } else {
                goto lab_0x405964;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4058b4;
        } else {
            // 0x40589a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4059a3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4058b4;
            } else {
                goto lab_0x4058b4;
            }
        }
    }
  lab_0x405964:
    // 0x405964
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4058f4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40549f
    exit(status);
    // UNREACHABLE
  lab_0x4058b4:
    // 0x4058b4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x4058f4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40549f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x4059d0 - 0x405aa9
int64_t function_4059d0(int64_t a1, char * a2, int32_t a3, char * a4) {
    int64_t v1 = 0; // 0x4059e3
    int64_t v2 = a1;
    char * str = (char *)v2;
    char * found_char_pos = strchr(str, 44); // 0x4059ed
    int64_t v3 = (int64_t)found_char_pos;
    int64_t v4 = (int64_t)a2; // 0x4059f5
    int64_t v5; // 0x4059d0
    int64_t v6; // 0x4059d0
    int64_t v7; // 0x4059d0
    uint32_t v8; // 0x405a21
    char v9; // 0x405a09
    char v10; // 0x405a0d
    while (true) {
        // 0x4059f8
        v7 = v4;
        v5 = 0;
        v6 = v5;
        v9 = *(char *)(v6 + v7);
        v10 = *(char *)(v6 + v2);
        while (v9 != 0) {
            // 0x405a00
            v5 = v6 + 1;
            if (v9 != v10) {
                goto lab_0x405a28;
            }
            v6 = v5;
            v9 = *(char *)(v6 + v7);
            v10 = *(char *)(v6 + v2);
        }
        if (v10 != 44 != v10 != 0) {
            // 0x405a21
            v8 = *(int32_t *)(v7 + 12);
            if (v8 != 0) {
                // break -> 0x405a33
                break;
            }
        }
        // 0x405a28
        v4 = v7 + 16;
        if (*(char *)v7 == 0) {
            // break (via goto) -> 0x405a53
            goto lab_0x405a53;
        }
    }
    // 0x405a33
    v1 = ((char)a3 == 0 ? v1 : 0) | (int64_t)v8;
    while (found_char_pos != NULL) {
        // 0x405a40
        v2 = v3 + 1;
        str = (char *)v2;
        found_char_pos = strchr(str, 44);
        v3 = (int64_t)found_char_pos;
        v4 = (int64_t)a2;
        while (true) {
            // 0x4059f8
            v7 = v4;
            v5 = 0;
            v6 = v5;
            v9 = *(char *)(v6 + v7);
            v10 = *(char *)(v6 + v2);
            while (v9 != 0) {
                // 0x405a00
                v5 = v6 + 1;
                if (v9 != v10) {
                    goto lab_0x405a28;
                }
                v6 = v5;
                v9 = *(char *)(v6 + v7);
                v10 = *(char *)(v6 + v2);
            }
            if (v10 != 44 != v10 != 0) {
                // 0x405a21
                v8 = *(int32_t *)(v7 + 12);
                if (v8 != 0) {
                    // break -> 0x405a33
                    break;
                }
            }
            // 0x405a28
            v4 = v7 + 16;
            if (*(char *)v7 == 0) {
                // break (via goto) -> 0x405a53
                goto lab_0x405a53;
            }
        }
        // 0x405a33
        v1 = ((char)a3 == 0 ? v1 : 0) | (int64_t)v8;
    }
    // 0x405a48
    return ((char)a3 == 0 ? v1 : 0) | (int64_t)v8;
  lab_0x405a53:;
    int64_t len; // 0x4059d0
    if (found_char_pos == NULL) {
        // 0x405a9f
        len = strlen(str);
    } else {
        // 0x405a58
        len = v3 - v2;
    }
    int64_t v11 = function_408370(0, 8, v2, len); // 0x405a68
    int64_t v12; // 0x4059d0
    function_4041e0(0, 0, (int64_t)"%s: %s", (int64_t)dcgettext(NULL, a4, 5), v11, v12);
    function_405460(1);
    // UNREACHABLE
}
// Address range: 0x405ab0 - 0x405b0d
int64_t function_405ab0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x405ab7
    int64_t v2; // 0x405ab0
    if ((v2 & 32) == 0) {
        // 0x405ad1
        if (v1 == 0) {
            // 0x405aea
            return 0;
        }
        // 0x405aea
        return 0xffffffff;
    }
    if (v1 != 0) {
        // 0x405aea
        return 0xffffffff;
    }
    // 0x405af4
    *__errno_location() = 0;
    // 0x405aea
    return 0xffffffff;
}
// Address range: 0x405b10 - 0x405b18
int64_t function_405b10(int64_t a1) {
    // 0x405b10
    g109 = a1;
    int64_t result; // 0x405b10
    return result;
}
// Address range: 0x405b20 - 0x405b28
int64_t function_405b20(int64_t a1) {
    // 0x405b20
    g108 = a1;
    int64_t result; // 0x405b20
    return result;
}
// Address range: 0x405b30 - 0x405bce
int64_t function_405b30(void) {
    // 0x405b30
    int32_t * err_num; // 0x405b46
    if ((int32_t)function_405ab0((int64_t)g43) == 0) {
        goto lab_0x405b5c;
    } else {
        // 0x405b46
        err_num = __errno_location();
        if (g108 == 0) {
            goto lab_0x405b73;
        } else {
            // 0x405b57
            if (*err_num != 32) {
                goto lab_0x405b73;
            } else {
                goto lab_0x405b5c;
            }
        }
    }
  lab_0x405b5c:;
    int64_t result = function_405ab0((int64_t)g45); // 0x405b63
    if ((int32_t)result == 0) {
        // 0x405b6c
        return result;
    }
    // 0x405bae
    _exit(g33);
    // UNREACHABLE
  lab_0x405b73:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x405b7f
    if (g109 == 0) {
        // 0x405bb9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405b93
        error(0, *err_num, "%s: %s", (char *)function_408480((int64_t)g109), v1);
    }
    // 0x405bae
    _exit(g33);
    // UNREACHABLE
}
// Address range: 0x405bd0 - 0x405c3a
int64_t function_405bd0(int64_t a1, int64_t path, int64_t oflag, int64_t a4) {
    int32_t fd = open((char *)path, (int32_t)oflag); // 0x405be5
    int32_t fd2 = a1; // 0x405bec
    if (fd != fd2 != fd >= 0) {
        // 0x405bf4
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x405c0c
    int32_t * v1 = __errno_location(); // 0x405c14
    close(fd);
    return result;
}
// Address range: 0x405c40 - 0x405c6f
int64_t function_405c40(void) {
    // 0x405c40
    int128_t tp; // bp-24, 0x405c40
    if (clock_gettime(1, (struct timespec *)&tp) != 0) {
        // 0x405c55
        function_405c70((int64_t *)&tp);
    }
    // 0x405c5d
    int64_t v1; // 0x405c40
    return 0x3b9aca00 * (int64_t)tp + v1;
}
// Address range: 0x405c70 - 0x405caa
int64_t function_405c70(int64_t * tp) {
    int64_t result = 0; // 0x405c84
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x405c86
        int64_t tp2; // bp-24, 0x405c70
        gettimeofday((struct timeval *)&tp2, NULL);
        *tp = tp2;
        int128_t v1; // 0x405c70
        result = 1000 * (int64_t)v1;
        *(int64_t *)((int64_t)tp + 8) = result;
    }
    // 0x405ca4
    return result;
}
// Address range: 0x405cb0 - 0x405d67
int64_t function_405cb0(int32_t a1, float80_t a2) {
    // 0x405cb0
    int3_t v1; // 0x405cb0
    int3_t v2 = v1 - 1; // 0x405cb0
    __frontend_reg_store_fpr(v2, 9223372036854775808.0L);
    int3_t v3 = v1 - 2;
    __frontend_reg_store_fpr(v3, a2);
    float80_t v4 = __frontend_reg_load_fpr(v3); // 0x405cba
    float80_t v5 = __frontend_reg_load_fpr(v2); // 0x405cba
    int64_t result; // 0x405cb0
    if (v4 > v5 || v4 == v5) {
        // 0x405d30
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3) - __frontend_reg_load_fpr(v2));
        float80_t v6 = __frontend_reg_load_fpr(v3); // 0x405d36
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        __frontend_reg_store_fpr(v2, v6);
        result = (int64_t)__frontend_reg_load_fpr(v3) ^ -0x8000000000000000;
    } else {
        // 0x405cbe
        __frontend_reg_store_fpr(v2, __frontend_reg_load_fpr(v3));
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v2));
        result = __frontend_reg_load_fpr(v3);
    }
    // 0x405ce4
    __frontend_reg_store_fpr(v3, (float80_t)result);
    if (result < 0) {
        // 0x405cf2
        __frontend_reg_store_fpr(v3, __frontend_reg_load_fpr(v3) + 18446744073709551616.0L);
    }
    int3_t v7 = v3;
    if (a1 != 0) {
        // 0x405d28
        __frontend_reg_store_fpr(v7 + 1, __frontend_reg_load_fpr(v7));
        // 0x405d2a
        return result;
    }
    int3_t v8 = v7 + 1; // 0x405cfc
    float80_t v9 = __frontend_reg_load_fpr(v7); // 0x405cfc
    __frontend_reg_store_fpr(v7, __frontend_reg_load_fpr(v8));
    __frontend_reg_store_fpr(v8, v9);
    float80_t v10 = __frontend_reg_load_fpr(v7); // 0x405cfe
    float80_t v11 = __frontend_reg_load_fpr(v8); // 0x405cfe
    if (v10 != v11 == v10 == v11) {
        // 0x405d08
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    } else {
        // 0x405d02
        if (v10 == v11) {
            // 0x405d2a
            return result;
        }
        // 0x405d04
        __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8));
    }
    int64_t result2 = result + 1; // 0x405d10
    __frontend_reg_store_fpr(v8, (float80_t)result2);
    if (result2 >= 0) {
        // 0x405d2a
        return result2;
    }
    // 0x405d60
    __frontend_reg_store_fpr(v8, __frontend_reg_load_fpr(v8) + 18446744073709551616.0L);
    return result2;
}
// Address range: 0x405d70 - 0x40673e
int64_t function_405d70(int64_t a1, int64_t * str3, int64_t a3, uint64_t a4, uint64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)str3;
    int64_t v2 = a3 & 32; // 0x405d76
    uint32_t v3 = (int32_t)a3 % 4; // 0x405d80
    int64_t v4; // bp-168, 0x405d70
    int64_t v5 = &v4; // 0x405d90
    int32_t v6 = v2; // 0x405d97
    uint32_t v7 = (v6 | 1024) - ((int32_t)(v2 == 0) | v6) & 2024; // 0x405da5
    int64_t v8 = 0x100000000 * a3 >> 32; // 0x405daa
    struct lconv * locale_info = localeconv(); // 0x405dbb
    int64_t str = *(int64_t *)locale_info; // 0x405dc0
    int64_t len = strlen((char *)str); // 0x405dc9
    int64_t v9 = len >= 17 ? (int64_t)&g6 : str; // 0x405de3
    int64_t str2 = *(int64_t *)((int64_t)locale_info + 8); // 0x405dec
    int64_t v10 = len >= 17 ? 1 : len; // 0x405df1
    uint32_t len2 = strlen((char *)str2); // 0x405e02
    int64_t v11 = v1 + 647; // 0x405e19
    v4 = v11;
    int64_t v12; // 0x405d70
    int64_t v13; // 0x405d70
    int64_t v14; // 0x405d70
    int64_t v15; // 0x405d70
    int64_t v16; // 0x405d70
    int64_t v17; // 0x405d70
    int64_t v18; // 0x405d70
    int64_t v19; // 0x405d70
    int64_t v20; // 0x405d70
    if (a5 > a4) {
        if (a4 == 0) {
            goto lab_0x405e55;
        } else {
            if (a5 % a4 != 0) {
                goto lab_0x405e55;
            } else {
                uint64_t v21 = a5 / a4; // 0x4060c0
                int64_t v22 = a1 / v21; // 0x4060d4
                uint64_t v23 = 10 * (a1 % v21); // 0x4060e0
                uint64_t v24 = 2 * (v23 % v21); // 0x4060e9
                int64_t v25 = v23 / v21 & 0xffffffff; // 0x4060ec
                int64_t v26 = v21 > v24 ? (int64_t)(v24 != 0) : v21 < v24 ? 3 : 2;
                uint32_t v27 = (int32_t)v8 & 16; // 0x406105
                v15 = v27;
                v19 = v22;
                v17 = v26;
                v12 = v25;
                v16 = 0;
                v14 = 0xffffffff;
                v20 = v22;
                v18 = v26;
                v13 = v25;
                if (v27 == 0) {
                    goto lab_0x406121;
                } else {
                    goto lab_0x40610e;
                }
            }
        }
    } else {
        if (a4 % a5 != 0) {
            goto lab_0x405e55;
        } else {
            uint64_t v28 = a4 / a5; // 0x405e32
            int64_t v29 = v28 * a1; // 0x405e42
            if (v29 / v28 == a1) {
                uint32_t v30 = (int32_t)v8 & 16; // 0x4063c1
                int64_t v31 = v30; // 0x4063c1
                v15 = v31;
                v19 = v29;
                v17 = 0;
                v12 = 0;
                v16 = v31;
                v14 = 0xffffffff;
                v20 = v29;
                v18 = 0;
                v13 = 0;
                if (v30 != 0) {
                    goto lab_0x40610e;
                } else {
                    goto lab_0x406121;
                }
            } else {
                goto lab_0x405e55;
            }
        }
    }
  lab_0x406121:;
    int64_t v32 = v16; // 0x40612a
    int64_t v33 = v14; // 0x40612a
    int64_t v34 = v20; // 0x40612a
    int64_t v35 = v18; // 0x40612a
    int64_t v36 = v13; // 0x40612a
    int64_t v37 = v11; // 0x40612a
    int64_t v38; // 0x405d70
    int64_t v39; // 0x405d70
    int64_t v40; // 0x405d70
    int64_t v41; // 0x405d70
    int64_t v42; // 0x405d70
    int64_t v43; // 0x405d70
    int64_t v44; // 0x405d70
    if (v3 == 1) {
        // 0x406460
        v42 = v16;
        v40 = v14;
        v43 = v20;
        v38 = v11;
        v41 = v14;
        v44 = v20;
        v39 = v11;
        if ((int32_t)(v20 % 2 != -v18) + (int32_t)v13 < 6) {
            goto lab_0x406160;
        } else {
            goto lab_0x406141;
        }
    } else {
        goto lab_0x406130;
    }
  lab_0x405e55:;
    // 0x405e55
    int3_t v45; // 0x405d70
    int3_t v46 = v45 - 1;
    __frontend_reg_store_fpr(v46, (float80_t)a4);
    int3_t v47; // 0x405d70
    int3_t v48; // 0x405d70
    if (a4 < 0) {
        // 0x4060a0
        __frontend_reg_store_fpr(v46, __frontend_reg_load_fpr(v46) + 18446744073709551616.0L);
        v47 = v46;
    } else {
        // 0x405e55
        v47 = v45 - 2;
        v48 = v46;
    }
    int3_t v49 = v48;
    __frontend_reg_store_fpr(v47, (float80_t)a5);
    float80_t v50 = __frontend_reg_load_fpr(v47);
    int3_t v51; // 0x405d70
    int3_t v52; // 0x405d70
    int3_t v53; // 0x405d70
    int3_t v54; // 0x405d70
    if (a5 < 0) {
        // 0x406080
        __frontend_reg_store_fpr(v47, v50 + 18446744073709551616.0L);
        int3_t v55 = v49 + 1;
        __frontend_reg_store_fpr(v55, __frontend_reg_load_fpr(v55) / __frontend_reg_load_fpr(v49));
        __frontend_reg_store_fpr(v49, (float80_t)a1);
        v51 = v55;
        v53 = v49;
        v52 = v55;
        v54 = v49;
        if (a1 >= 0) {
            goto lab_0x405e92;
        } else {
            goto lab_0x406068;
        }
    } else {
        // 0x405e7e
        __frontend_reg_store_fpr(v49, __frontend_reg_load_fpr(v49) / v50);
        __frontend_reg_store_fpr(v47, (float80_t)a1);
        int3_t v56 = v47 + 1;
        v51 = v56;
        v53 = v47;
        v52 = v56;
        v54 = v47;
        if (a1 < 0) {
            goto lab_0x406068;
        } else {
            goto lab_0x405e92;
        }
    }
  lab_0x405e92:;
    int3_t v57 = v51;
    float80_t v58 = __frontend_reg_load_fpr(v53); // 0x405e92
    __frontend_reg_store_fpr(v57, v58 * __frontend_reg_load_fpr(v57));
    int3_t v59 = v57; // 0x405e99
    int3_t v60 = v57; // 0x405e99
    if ((a3 & 16) == 0) {
        goto lab_0x405fb0;
    } else {
        goto lab_0x405e9f;
    }
  lab_0x406068:;
    int3_t v61 = v54;
    __frontend_reg_store_fpr(v61, __frontend_reg_load_fpr(v61) + 18446744073709551616.0L);
    int3_t v62 = v61 + 2; // 0x40606e
    __frontend_reg_store_fpr(v62, __frontend_reg_load_fpr(v52) * __frontend_reg_load_fpr(v62));
    v59 = v62;
    v60 = v62;
    if ((a3 & 16) != 0) {
        goto lab_0x405e9f;
    } else {
        goto lab_0x405fb0;
    }
  lab_0x40610e:;
    int64_t v63 = v15;
    v16 = v63;
    v14 = 0;
    v20 = v19;
    v18 = v17;
    v13 = v12;
    int64_t v64; // 0x405d70
    int64_t v65; // 0x405d70
    int64_t v66; // 0x405d70
    int64_t v67; // 0x405d70
    int64_t v68; // 0x405d70
    int64_t v69; // 0x405d70
    int64_t v70; // 0x406346
    int64_t v71; // 0x40632a
    if (v19 < (int64_t)v7) {
        goto lab_0x406121;
    } else {
        int64_t v72; // 0x405d70
        int32_t v73 = v72; // 0x406344
        int64_t v74; // 0x405d70
        uint64_t v75; // 0x405d70
        v70 = v74 / v75;
        int64_t v76; // 0x405d70
        uint64_t v77 = 10 * (v74 % v75) + v76 & 0xffffffff; // 0x406357
        int64_t v78 = v77 / v75; // 0x406357
        uint32_t v79 = 2 * (int32_t)(v77 % v75) + (v73 >> 1); // 0x406359
        uint32_t v80 = v79 + v73; // 0x406362
        int64_t v81 = v79 < v7 ? (int64_t)(v80 != 0) : v7 < v80 ? 3 : 2;
        int64_t v82; // 0x405d70
        v71 = v82 + 1 & 0xffffffff;
        while (v70 >= v75) {
            // 0x406336
            v16 = v63;
            v14 = v71;
            v20 = v70;
            v18 = v81;
            v13 = v78;
            v82 = v71;
            v74 = v70;
            v72 = v81;
            v76 = v78;
            int64_t v83; // 0x40632a
            if ((int32_t)v83 == 8) {
                goto lab_0x406121;
            }
            int64_t v84 = v76;
            int64_t v85 = v72;
            uint64_t v86 = v74;
            int64_t v87 = v82;
            v73 = v85;
            v70 = v86 / v75;
            v77 = 10 * (v86 % v75) + v84 & 0xffffffff;
            v78 = v77 / v75;
            v79 = 2 * (int32_t)(v77 % v75) + (v73 >> 1);
            v80 = v79 + v73;
            int64_t v88 = v7 < v80 ? 3 : 2;
            v81 = v79 < v7 ? (int64_t)(v80 != 0) : v88;
            v83 = v87 + 1;
            v71 = v83 & 0xffffffff;
        }
        // 0x406510
        v16 = v63;
        v14 = v71;
        v20 = v70;
        v18 = v81;
        v13 = v78;
        if (v70 < 10) {
            bool v89; // 0x405d70
            if (v3 == 1) {
                int32_t v90 = (int32_t)(v81 + v78 % 2) - 2; // 0x4065e7
                v89 = v90 >= 0 == (v90 != 0);
            } else {
                // 0x406525
                v89 = v3 == 0 == (v81 != 0);
            }
            // 0x406537
            if (v89) {
                int64_t v91 = v78 + 1; // 0x4065d0
                v65 = v91 & 0xffffffff;
                if ((int32_t)v91 == 10) {
                    // 0x406643
                    v69 = v70 + 1;
                    v66 = 0;
                    v68 = 10;
                    v67 = 0;
                    v64 = v11;
                    if (v70 == 9) {
                        goto lab_0x406590;
                    } else {
                        goto lab_0x406547;
                    }
                } else {
                    goto lab_0x4065d8;
                }
            } else {
                // 0x40653f
                v69 = v70;
                v66 = v81;
                v65 = v78;
                if (v77 >= v75) {
                    goto lab_0x4065d8;
                } else {
                    goto lab_0x406547;
                }
            }
        } else {
            goto lab_0x406121;
        }
    }
  lab_0x405fb0:;
    int3_t v92 = v60; // 0x405fb7
    if (v3 != 1) {
        int3_t v93 = v60 - 1; // 0x405fb9
        __frontend_reg_store_fpr(v93, 1.84467e+19L);
        float80_t v94 = __frontend_reg_load_fpr(v93); // 0x405fbf
        float80_t v95 = __frontend_reg_load_fpr(v60); // 0x405fbf
        v92 = v60;
        if (v94 > v95) {
            // 0x406380
            function_405cb0(v3, __frontend_reg_load_fpr(v60));
            v92 = v60 + 1;
        }
    }
    // 0x405fc7
    __frontend_reg_load_fpr(v92);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len3 = strlen((char *)str3); // 0x405ff6
    int64_t v96 = len3; // 0x405ffd
    int64_t v97 = 0xffffffff; // 0x405ffd
    int64_t v98 = len3; // 0x405ffd
    goto lab_0x406000;
  lab_0x405e9f:;
    int3_t v181 = v59;
    int3_t v180 = v181 - 1; // 0x405e9f
    __frontend_reg_store_fpr(v180, (float80_t)v7);
    int3_t v206 = v181 - 2; // 0x405ea5
    __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v180));
    int3_t v207 = v181 - 3;
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v206));
    int64_t v208 = 1; // 0x405eb6
    int64_t v165 = v208 & 0xffffffff; // 0x405eb6
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v207) * __frontend_reg_load_fpr(v180));
    float80_t v209 = __frontend_reg_load_fpr(v207); // 0x405ebb
    __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v181));
    __frontend_reg_store_fpr(v181, v209);
    while (__frontend_reg_load_fpr(v207) >= __frontend_reg_load_fpr(v181)) {
        float80_t v210 = __frontend_reg_load_fpr(v207);
        if ((int32_t)v208 == 8) {
            // 0x405ec6
            __frontend_reg_store_fpr(v180, v210);
            __frontend_reg_store_fpr(v181, __frontend_reg_load_fpr(v206));
            goto lab_0x405ed4;
        }
        // 0x405eb0
        __frontend_reg_store_fpr(v206, v210);
        float80_t v211 = __frontend_reg_load_fpr(v206); // 0x405eb2
        __frontend_reg_store_fpr(v206, __frontend_reg_load_fpr(v181));
        __frontend_reg_store_fpr(v181, v211);
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v206));
        v208 = v165 + 1;
        v165 = v208 & 0xffffffff;
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v207) * __frontend_reg_load_fpr(v180));
        v209 = __frontend_reg_load_fpr(v207);
        __frontend_reg_store_fpr(v207, __frontend_reg_load_fpr(v181));
        __frontend_reg_store_fpr(v181, v209);
    }
    // 0x405ed0
    __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v207));
    __frontend_reg_store_fpr(v181, __frontend_reg_load_fpr(v206));
    goto lab_0x405ed4;
  lab_0x406130:;
    int64_t v212 = v37;
    int64_t v213 = v34;
    int64_t v214 = v33;
    v41 = v214;
    v44 = v213;
    v39 = v212;
    if (v3 != 0) {
        goto lab_0x406160;
    } else {
        // 0x40613a
        v42 = v32;
        v40 = v214;
        v43 = v213;
        v38 = v212;
        v41 = v214;
        v44 = v213;
        v39 = v212;
        if ((int32_t)(v36 + v35) < 1) {
            goto lab_0x406160;
        } else {
            goto lab_0x406141;
        }
    }
  lab_0x406000:;
    int64_t v99 = *(int64_t *)(v5 + 8); // 0x406004
    int64_t v100 = v4 - v96; // 0x40600c
    memmove((int64_t *)v100, (int64_t *)v99, (int32_t)v96);
    int64_t v101 = v97; // 0x406015
    int64_t v102 = v100 + v98; // 0x406015
    int64_t v103 = v100; // 0x406015
    goto lab_0x40601a;
  lab_0x405ed4:;
    float80_t v179 = __frontend_reg_load_fpr(v180); // 0x405ee2
    __frontend_reg_store_fpr(v181, v179 / __frontend_reg_load_fpr(v181));
    uint64_t v182 = v10 + (v6 == 0 ? 3 : 2); // 0x405ee9
    int3_t v144; // 0x405d70
    int3_t v174; // 0x405d70
    int3_t v148; // 0x405d70
    int64_t v145; // 0x405d70
    int3_t v176; // 0x405d70
    if (v3 == 1) {
        // 0x406410
        __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v181));
        __frontend_reg_load_fpr(v180);
        float80_t v183 = __frontend_reg_load_fpr(v181); // 0x406434
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len6 = strlen((char *)str3); // 0x406440
        __frontend_reg_store_fpr(v181, v183);
        v144 = v181;
        v145 = len6;
        if (v182 < len6) {
            // 0x406450
            __frontend_reg_store_fpr(v180, 10.0L);
            float80_t v184 = __frontend_reg_load_fpr(v181); // 0x406456
            __frontend_reg_store_fpr(v181, v184 * __frontend_reg_load_fpr(v180));
            v148 = v180;
            goto lab_0x405f76;
        } else {
            goto lab_0x4063d8;
        }
    } else {
        // 0x405ef7
        __frontend_reg_store_fpr(v180, 1.84467e+19L);
        float80_t v185 = __frontend_reg_load_fpr(v180); // 0x405efd
        float80_t v186 = __frontend_reg_load_fpr(v181); // 0x405efd
        bool v187 = false; // 0x405efd
        bool v188 = false; // 0x405efd
        if (v185 <= v186) {
            v187 = true;
            v188 = false;
            if (v185 >= v186) {
                v187 = v185 != v186;
                v188 = true;
            }
        }
        __frontend_reg_store_fpr(v180, __frontend_reg_load_fpr(v181));
        v174 = v180;
        if (!v187 && !v188) {
            // 0x406398
            __frontend_reg_load_fpr(v180);
            float80_t v189 = __frontend_reg_load_fpr(v181); // 0x4063a1
            function_405cb0(v3, v189);
            __frontend_reg_store_fpr(v181, v189);
            v174 = v181;
        }
        float80_t v190 = __frontend_reg_load_fpr(v174); // 0x405f07
        v176 = v174 + 1;
        __frontend_reg_load_fpr(v176);
        __sprintf_chk((char *)str3, 1, -1, "%.1Lf");
        int64_t len7 = strlen((char *)str3); // 0x405f35
        __frontend_reg_store_fpr(v176, v190);
        v144 = v176;
        v145 = len7;
        if (v182 < len7) {
            // 0x405f49
            __frontend_reg_store_fpr(v174, 10.0L);
            __frontend_reg_store_fpr(v176, __frontend_reg_load_fpr(v176) * __frontend_reg_load_fpr(v174));
            goto lab_0x405f51;
        } else {
            goto lab_0x4063d8;
        }
    }
  lab_0x406160:;
    int64_t v191 = v39 - 1; // 0x406179
    *(char *)v191 = (char)v44 + 48;
    int64_t v192 = v191; // 0x40619b
    while (v44 >= 10) {
        // 0x406173
        v191 = v192 - 1;
        *(char *)v191 = (char)v44 + 48;
        v192 = v191;
    }
    int64_t v104 = v41; // 0x4061a2
    int64_t v105 = v191; // 0x4061a2
    int64_t v106 = v41; // 0x4061a2
    int64_t v107 = v39; // 0x4061a2
    int64_t v108 = v191; // 0x4061a2
    if ((a3 & 4) == 0) {
        goto lab_0x406025;
    } else {
        goto lab_0x4061a8;
    }
  lab_0x406141:;
    int64_t v193 = v38;
    int64_t v194 = v40;
    int64_t v195 = v43 + 1; // 0x406141
    v41 = v194;
    v44 = v195;
    v39 = v193;
    if ((int32_t)v194 == 8 || (int32_t)v42 == 0 || v195 != (int64_t)v7) {
        goto lab_0x406160;
    } else {
        int64_t v196 = v193; // 0x4064ce
        if ((a3 & 8) == 0) {
            // 0x406654
            *(char *)(v193 - 1) = 48;
            int64_t v197 = v193 + -1 - v10; // 0x40665f
            int64_t v198 = v10 & 0xffffffff; // 0x406662
            uint32_t v199 = (int32_t)v10; // 0x406665
            if (v199 >= 8) {
                int64_t v200 = v197 + 8 & -8; // 0x4066b0
                *(int64_t *)v197 = *(int64_t *)v9;
                *(int64_t *)(v197 + v198 - 8) = *(int64_t *)(v198 + v9 - 8);
                int64_t v201 = v197 - v200; // 0x4066c7
                uint32_t v202 = (int32_t)(v201 + v10); // 0x4066d3
                v196 = v197;
                if (v202 >= 8) {
                    int64_t v203 = 0;
                    int64_t v204 = v203 + 8; // 0x4066e3
                    *(int64_t *)(v203 + v200) = *(int64_t *)(v9 - v201 + v203);
                    v196 = v197;
                    while ((v202 & -8) > (int32_t)v204) {
                        // 0x4066e1
                        v203 = v204 & 0xffffffff;
                        v204 = v203 + 8;
                        *(int64_t *)(v203 + v200) = *(int64_t *)(v9 - v201 + v203);
                        v196 = v197;
                    }
                }
            } else {
                if ((v10 & 4) != 0) {
                    // 0x40670c
                    *(int32_t *)v197 = *(int32_t *)v9;
                    *(int32_t *)(v197 + v198 - 4) = *(int32_t *)(v198 + v9 - 4);
                    v196 = v197;
                } else {
                    // 0x406675
                    v196 = v197;
                    if (v199 != 0) {
                        // 0x40667d
                        *(char *)v197 = *(char *)v9;
                        v196 = v197;
                        if ((v10 & 2) != 0) {
                            // 0x40668c
                            *(int16_t *)(v197 + v198 - 2) = *(int16_t *)(v198 + v9 - 2);
                            v196 = v197;
                        }
                    }
                }
            }
        }
        int64_t v205 = v196 - 1; // 0x4064d4
        *(char *)v205 = 49;
        v101 = v194 + 1 & 0xffffffff;
        v102 = v196;
        v103 = v205;
        goto lab_0x40601a;
    }
  lab_0x40601a:
    // 0x40601a
    v104 = v101;
    v105 = v103;
    v106 = v101;
    v107 = v102;
    v108 = v103;
    if ((*(char *)(v5 + 16) & 4) != 0) {
        goto lab_0x4061a8;
    } else {
        goto lab_0x406025;
    }
  lab_0x406025:;
    int64_t result = v105;
    int64_t v109 = v5 + 16; // 0x406025
    char v110 = *(char *)v109; // 0x406025
    if (v110 > -1) {
        // 0x406048
        *(char *)v4 = 0;
        return result;
    }
    int64_t v111 = v104; // 0x40602f
    int64_t v112; // 0x405d70
    int64_t v113; // 0x405d70
    int64_t v114; // 0x405d70
    int64_t v115; // 0x405d70
    if ((int32_t)v104 == -1) {
        uint64_t v116 = *(int64_t *)(v5 + 24); // 0x406270
        v111 = 0;
        if (v116 < 2) {
            goto lab_0x406035;
        } else {
            int64_t v117 = 1; // 0x40628d
            int64_t v118 = 1;
            v117 *= (int64_t)*(int32_t *)(v5 + 52);
            int64_t v119 = v118; // 0x406297
            while (v116 > v117) {
                int64_t v120 = v118 + 1; // 0x406299
                int64_t v121 = v120 & 0xffffffff; // 0x406299
                v119 = v121;
                if ((int32_t)v120 == 8) {
                    // break -> 0x4062a1
                    break;
                }
                v118 = v121;
                v117 *= (int64_t)*(int32_t *)(v5 + 52);
                v119 = v118;
            }
            int32_t v122 = *(int32_t *)v109; // 0x4062a1
            int64_t v123 = v122 & 256; // 0x4062a7
            v112 = v123;
            v114 = v119;
            v113 = v123;
            v115 = v119;
            if ((v122 & 64) == 0) {
                goto lab_0x4062d0;
            } else {
                goto lab_0x4062b1;
            }
        }
    } else {
        goto lab_0x406035;
    }
  lab_0x4061a8:;
    int64_t str4 = len2 >= 17 ? (int64_t)&g19 : str2; // 0x405e15
    int32_t len4 = strlen((char *)str4); // 0x4061b5
    int64_t v124 = v107 - v108; // 0x4061ba
    int64_t v125 = v5 + 64; // 0x4061c8
    int64_t * v126 = (int64_t *)(v5 + 32); // 0x4061cd
    *v126 = (int64_t)len4;
    int64_t * v127 = (int64_t *)v125; // 0x4061d2
    __memcpy_chk(v127, (int64_t *)v108, (int32_t)v124, 41);
    int32_t * v128 = (int32_t *)(v5 + 20); // 0x4061d7
    *v128 = (int32_t)v106;
    int64_t v129 = *v126; // 0x4061e9
    int64_t * v130 = (int64_t *)str4;
    int32_t v131 = v129;
    int64_t v132 = *(int64_t *)(v5 + 56);
    int64_t v133 = v107;
    uint64_t v134 = v124;
    unsigned char v135 = *(char *)v132; // 0x4061f0
    int64_t v136 = -1; // 0x4061f6
    int64_t v137 = v132; // 0x4061f6
    if (v135 != 0) {
        // 0x4061f8
        v136 = v135 >= 127 ? v134 : (int64_t)v135;
        v137 = v132 + 1;
    }
    int64_t v138 = v136;
    while (v134 >= v138) {
        int64_t v139 = v133 - v138; // 0x406230
        int64_t v140 = v134 - v138; // 0x406233
        memcpy((int64_t *)v139, (int64_t *)(v140 + v125), (int32_t)v138);
        if (v140 == 0) {
            // 0x406721
            v104 = (int64_t)*v128;
            v105 = v139;
            goto lab_0x406025;
        }
        int64_t v141 = v139 - v129; // 0x406253
        memcpy((int64_t *)v141, v130, v131);
        v132 = v137;
        v133 = v141;
        v134 = v140;
        v135 = *(char *)v132;
        v136 = v138;
        v137 = v132;
        if (v135 != 0) {
            // 0x4061f8
            v136 = v135 >= 127 ? v134 : (int64_t)v135;
            v137 = v132 + 1;
        }
        // 0x406209
        v138 = v136;
    }
    int64_t v142 = v133 - v134; // 0x40621d
    memcpy((int64_t *)v142, v127, (int32_t)v134);
    v104 = (int64_t)*v128;
    v105 = v142;
    goto lab_0x406025;
  lab_0x4063d8:;
    int3_t v143 = v144;
    if ((a3 & 8) == 0) {
        // 0x4063f8
        __frontend_reg_store_fpr(v143, __frontend_reg_load_fpr(v143));
        goto lab_0x4063fa;
    } else {
        // 0x4063df
        if (*(char *)(v1 - 1 + v145) == 48) {
            int3_t v146 = v143 - 1; // 0x4065b8
            __frontend_reg_store_fpr(v146, 10.0L);
            float80_t v147 = __frontend_reg_load_fpr(v143); // 0x4065c3
            __frontend_reg_store_fpr(v143, v147 * __frontend_reg_load_fpr(v146));
            v148 = v146;
            if (v3 != 1) {
                goto lab_0x405f51;
            } else {
                goto lab_0x405f76;
            }
        } else {
            // 0x4063ef
            __frontend_reg_store_fpr(v143, __frontend_reg_load_fpr(v143));
            goto lab_0x4063fa;
        }
    }
  lab_0x406035:;
    uint32_t v149 = *(int32_t *)v109 & 256; // 0x406039
    if ((v149 || (int32_t)v111) == 0) {
        // 0x406048
        *(char *)v4 = 0;
        return result;
    }
    int64_t v150 = v149; // 0x406039
    v112 = v150;
    v114 = v111;
    int64_t v151 = v150; // 0x4064a5
    int64_t v152 = v111; // 0x4064a5
    if ((v110 & 64) == 0) {
        goto lab_0x4062c8;
    } else {
        goto lab_0x4062b1;
    }
  lab_0x4065d8:;
    int64_t v153 = v70; // 0x4065db
    int64_t v154 = v65 + 48 & 0xffffffff; // 0x4065db
    goto lab_0x406557;
  lab_0x406547:
    // 0x406547
    v153 = v69;
    v154 = 48;
    v68 = v69;
    v67 = v66;
    v64 = v11;
    if ((a3 & 8) != 0) {
        goto lab_0x406590;
    } else {
        goto lab_0x406557;
    }
  lab_0x405f76:;
    int3_t v172 = v148 + 1; // 0x405f76
    __frontend_reg_store_fpr(v172, __frontend_reg_load_fpr(v172) / __frontend_reg_load_fpr(v148));
    __frontend_reg_load_fpr(v172);
    __sprintf_chk((char *)str3, 1, -1, "%.0Lf");
    int64_t len5 = strlen((char *)str3); // 0x405fa2
    v96 = len5;
    v97 = v165;
    v98 = len5;
    goto lab_0x406000;
  lab_0x405f51:;
    int3_t v173 = v174 - 1; // 0x405f51
    __frontend_reg_store_fpr(v173, 1.84467e+19L);
    float80_t v175 = __frontend_reg_load_fpr(v173); // 0x405f57
    v148 = v174;
    if (v175 > __frontend_reg_load_fpr(v176)) {
        float80_t v177 = __frontend_reg_load_fpr(v174); // 0x405f5b
        function_405cb0(v3, __frontend_reg_load_fpr(v176));
        __frontend_reg_store_fpr(v176, v177);
        v148 = v176;
    }
    goto lab_0x405f76;
  lab_0x4062c8:
    // 0x4062c8
    v113 = v151;
    v115 = v152;
    int64_t v168; // 0x405d70
    if ((int32_t)v152 == 0) {
        // 0x40672d
        v168 = v4;
        if ((int32_t)v151 == 0) {
            // 0x406048
            *(char *)v4 = 0;
            return result;
        }
        goto lab_0x40630d;
    } else {
        goto lab_0x4062d0;
    }
  lab_0x4062b1:;
    int64_t v178 = *(int64_t *)(v5 + 8); // 0x4062b1
    *(char *)(v178 + 647) = 32;
    v4 = v178 + 648;
    v151 = v112;
    v152 = v114;
    goto lab_0x4062c8;
  lab_0x406590:
    // 0x406590
    v32 = v63;
    v33 = v71;
    v34 = v68;
    v35 = v67;
    v36 = 0;
    v37 = v64;
    v41 = v71;
    v44 = v68;
    v39 = v64;
    if (v3 == 1) {
        goto lab_0x406160;
    } else {
        goto lab_0x406130;
    }
  lab_0x406557:;
    int64_t v155 = v1 + 646; // 0x40655c
    *(char *)v155 = (char)v154;
    int64_t v156 = v10 & 0xffffffff; // 0x406569
    int64_t v157 = v155 - v10; // 0x40656c
    uint32_t v158 = (int32_t)v10; // 0x40656f
    if (v158 >= 8) {
        int64_t v159 = v157 + 8 & -8; // 0x4065fc
        *(int64_t *)v157 = *(int64_t *)v9;
        *(int64_t *)(v156 + v157 - 8) = *(int64_t *)(v156 + v9 - 8);
        int64_t v160 = v157 - v159; // 0x406613
        uint32_t v161 = (int32_t)(v160 + v10); // 0x40661f
        v68 = v153;
        v67 = 0;
        v64 = v157;
        if (v161 >= 8) {
            int64_t v162 = v9 - v160; // 0x406616
            int64_t v163 = 0;
            int64_t v164 = v163 + 8; // 0x40662f
            *(int64_t *)(v163 + v159) = *(int64_t *)(v162 + v163);
            v68 = v153;
            v67 = 0;
            v64 = v157;
            while ((v161 & -8) > (int32_t)v164) {
                // 0x40662d
                v163 = v164 & 0xffffffff;
                v164 = v163 + 8;
                *(int64_t *)(v163 + v159) = *(int64_t *)(v162 + v163);
                v68 = v153;
                v67 = 0;
                v64 = v157;
            }
        }
    } else {
        if ((v10 & 4) != 0) {
            // 0x4066f7
            *(int32_t *)v157 = *(int32_t *)v9;
            *(int32_t *)(v156 + v157 - 4) = *(int32_t *)(v156 + v9 - 4);
            v68 = v153;
            v67 = 0;
            v64 = v157;
        } else {
            // 0x40657f
            v68 = v153;
            v67 = 0;
            v64 = v157;
            if (v158 != 0) {
                // 0x406583
                *(char *)v157 = *(char *)v9;
                v68 = v153;
                v67 = 0;
                v64 = v157;
                if ((v10 & 2) != 0) {
                    // 0x4065a3
                    *(int16_t *)(v156 + v157 - 2) = *(int16_t *)(v156 + v9 - 2);
                    v68 = v153;
                    v67 = 0;
                    v64 = v157;
                }
            }
        }
    }
    goto lab_0x406590;
  lab_0x4063fa:
    // 0x4063fa
    v96 = v145;
    v97 = v165;
    v98 = v145 + -1 - v10;
    goto lab_0x406000;
  lab_0x4062d0:;
    int32_t * v166 = (int32_t *)(v5 + 48); // 0x4062d0
    if (*v166 == 0 == (int32_t)v115 == 1) {
        int64_t v167 = v4 + 1; // 0x4064f4
        *(char *)v4 = 107;
        v168 = v167;
        if ((int32_t)v113 == 0) {
            // 0x406503
            v4 = v167;
            // 0x406048
            *(char *)v4 = 0;
            return result;
        }
    } else {
        int64_t v169 = v4; // 0x4062e6
        char v170 = *(char *)((0x100000000 * v115 >> 32) + (int64_t)&g9); // 0x4062ea
        int64_t v171 = v169 + 1; // 0x4062f1
        *(char *)v169 = v170;
        if ((int32_t)v113 == 0) {
            // 0x406503
            v4 = v171;
            // 0x406048
            *(char *)v4 = 0;
            return result;
        }
        // 0x4062ff
        v168 = v171;
        if (*v166 != 0) {
            // 0x4064b0
            *(char *)v171 = 105;
            v168 = v169 + 2;
        }
    }
    goto lab_0x40630d;
  lab_0x40630d:
    // 0x40630d
    *(char *)v168 = 66;
    v4 = v168 + 1;
    // 0x406048
    *(char *)v4 = 0;
    return result;
}
// Address range: 0x406740 - 0x4068f7
int64_t function_406740(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1; // 0x406756
    if (a1 == 0) {
        char * env_val = getenv("BLOCK_SIZE"); // 0x406865
        v1 = (int64_t)env_val;
        if (env_val == NULL) {
            char * env_val2 = getenv("BLOCKSIZE"); // 0x40687b
            v1 = (int64_t)env_val2;
            if (env_val2 == NULL) {
                int64_t * v2 = (int64_t *)a3;
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4068e2
                    *v2 = 1024;
                    *(int32_t *)a2 = 0;
                } else {
                    // 0x40689b
                    *v2 = 512;
                    *(int32_t *)a2 = 0;
                }
                // 0x40679e
                return 0;
            }
        }
    }
    char v3 = *(char *)v1; // 0x40675e
    int64_t v4 = v1 + (int64_t)(v3 == 39);
    int64_t v5 = v3 != 39 ? 0 : 4;
    int64_t v6 = function_40a670(v4, g8, (int64_t *)&g7, 4); // 0x40677e
    if ((int32_t)v6 >= 0) {
        // 0x406787
        *(int64_t *)a3 = 1;
        int32_t v7 = *(int32_t *)((0x100000000 * v6 >> 30) + (int64_t)&g7); // 0x406791
        *(int32_t *)a2 = v7 | (int32_t)v5;
        // 0x40679e
        return 0;
    }
    int64_t * v8 = (int64_t *)a3; // 0x4067c3
    int64_t v9; // bp-48, 0x406740
    int64_t v10; // 0x406740
    int64_t result = function_408f50(v4, &v9, 0, v8, "eEgGkKmMpPtTyYzZ0", v10); // 0x4067c3
    if ((int32_t)result != 0) {
        // 0x406824
        *(int32_t *)a2 = 0;
        // 0x40682d
        *v8 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    int64_t v11 = (int64_t)*(char *)v4 + 0xffffffd0; // 0x4067cf
    int64_t v12 = v11 & 0xffffffff; // 0x4067cf
    int64_t v13 = v12; // 0x4067d5
    int64_t v14 = v5; // 0x4067d5
    int64_t v15; // 0x406740
    if ((char)v11 < 10) {
        goto lab_0x406824;
    } else {
        // 0x4067d7
        v15 = v12;
        if (v4 != v9) {
            int64_t v16 = v4 + 1; // 0x4067f9
            int64_t v17 = (int64_t)*(char *)v16 + 0xffffffd0; // 0x406800
            while ((char)v17 >= 10) {
                // 0x4067f0
                if (v16 == v9) {
                    // 0x4068b8
                    v15 = v17 & 0xffffffff;
                    goto lab_0x4068b8_2;
                }
                v16++;
                v17 = (int64_t)*(char *)v16 + 0xffffffd0;
            }
            // 0x406824
            v13 = v17 & 0xffffffff;
            v14 = v5;
            goto lab_0x406824;
        } else {
            goto lab_0x4068b8_2;
        }
    }
  lab_0x406824:
    // 0x406824
    *(int32_t *)a2 = (int32_t)v14;
    if (v13 == 0) {
        // 0x40682d
        *v8 = getenv("POSIXLY_CORRECT") == NULL ? 1024 : 512;
        return 4;
    }
    // 0x40679e
    return result;
  lab_0x4068b8_2:;
    // 0x4068b8
    int64_t v18; // 0x406740
    if (*(char *)(v9 - 1) == 66) {
        int64_t v19 = v5 | 384; // 0x4068d0
        v13 = v15;
        v14 = v19;
        v18 = v19;
        if (*(char *)(v9 - 2) != 105) {
            goto lab_0x406824;
        } else {
            goto lab_0x4068c2;
        }
    } else {
        // 0x4068be
        v18 = v5 | 128;
        goto lab_0x4068c2;
    }
  lab_0x4068c2:
    // 0x4068c2
    v13 = v15;
    v14 = v18 & 0xffffffdf | 32;
    goto lab_0x406824;
}
// Address range: 0x406900 - 0x406a02
int64_t function_406900(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x406900
    int64_t v1; // 0x406900
    if ((char)v1 != 0) {
        // 0x406913
        int128_t v2; // 0x406900
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g40; // 0x40694a
    g40 = 0;
    if ((int32_t)a1 != 2) {
        // 0x40695f
        g40 = v3;
        g41 = 0;
        int64_t result; // 0x406900
        return result;
    }
    int64_t result2 = function_40a500(a1, a2, &g10, (int64_t *)&g11, 0, a6); // 0x406999
    int32_t v4 = result2; // 0x40699e
    switch (v4) {
        default: {
            // 0x4069a8
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x4069ca
                function_408b20((int64_t)g43, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x40695f
            g40 = v3;
            g41 = 0;
            return result2;
        }
    }
}
// Address range: 0x406a10 - 0x406aa9
int64_t function_406a10(int64_t str) {
    // 0x406a10
    if (str == 0) {
        // 0x406a89
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g45);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x406a1e
    int64_t result = (int64_t)found_char_pos; // 0x406a1e
    if (found_char_pos == NULL) {
        // 0x406a79
        g110 = str;
        g44 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x406a28
    if (v1 - str < 7) {
        // 0x406a79
        g110 = str;
        g44 = str;
        return result;
    }
    // 0x406a38
    bool v2; // 0x406a10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x406a10
    int64_t v5 = result - 6; // 0x406a10
    int64_t v6 = 7; // 0x406a46
    unsigned char v7 = *(char *)v5; // 0x406a46
    char v8 = *(char *)v4; // 0x406a46
    char v9 = v8; // 0x406a46
    bool v10 = false; // 0x406a46
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
    int64_t v12 = (int64_t)"lt-"; // 0x406a50
    int64_t v13 = v1; // 0x406a50
    int64_t v14 = 3; // 0x406a50
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x406a79
        g110 = str;
        g44 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x406a62
    char v16 = *(char *)v12; // 0x406a62
    char v17 = v16; // 0x406a62
    bool v18 = false; // 0x406a62
    while (v15 == v16) {
        // 0x406a52
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
    int64_t v20 = v1; // 0x406a6c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x406a6e
        v20 = result + 4;
        g42 = v20;
    }
    // 0x406a79
    g110 = v20;
    g44 = v20;
    return result;
}
// Address range: 0x406ab0 - 0x406ba2
int64_t function_406ab0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x406ac4
    int64_t result = (int64_t)v1; // 0x406ac4
    if (result != a1) {
        // 0x406ad1
        return result;
    }
    int64_t v2 = function_40aa50(); // 0x406ae0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x406b96
    if (v3 == 85) {
        // 0x406af0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x406b88
            result2 = (int32_t)a2 != 9 ? (int64_t)&g17 : (int64_t)&g12;
            return result2;
        }
        char v4 = *v1; // 0x406b1e
        int64_t result3 = v4 != 96 ? (int64_t)&g13 : (int64_t)&g16; // 0x406b2b
        // 0x406ad1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x406b88
        result2 = (int32_t)a2 != 9 ? (int64_t)&g17 : (int64_t)&g12;
        return result2;
    }
    char v5 = *v1; // 0x406b6d
    int64_t result4 = v5 != 96 ? (int64_t)&g14 : (int64_t)&g15; // 0x406b7a
    // 0x406ad1
    return result4;
}
// Address range: 0x406bb0 - 0x406c07
int64_t function_406bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x406bb0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x406bf8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x406c07 - 0x407dd1
int64_t function_406c07(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x406c51
    int64_t v3 = 0; // 0x406c51
    int64_t v4; // 0x406c07
    int64_t v5; // 0x406c07
    int64_t v6; // 0x406c07
    int64_t v7; // 0x406c07
    int64_t v8; // 0x406c07
    int64_t v9; // 0x406c07
    int64_t v10; // 0x406c07
    int64_t v11; // 0x406c07
    int64_t v12; // 0x406c07
    int64_t v13; // 0x406c07
    int64_t v14; // 0x406c07
    int64_t v15; // 0x406c07
    int64_t v16; // 0x406c07
    int64_t v17; // 0x406c07
    int64_t v18; // 0x406c07
    int64_t result; // 0x406c07
    int64_t v19; // 0x406c07
    int32_t wc; // bp+132, 0x406c07
    int64_t ps; // bp+136, 0x406c07
    char v20; // 0x4071c0
    int64_t v21; // 0x4071c0
    int64_t v22; // 0x407568
    int64_t v23; // 0x406c07
    int64_t v24; // 0x407587
    int32_t v25; // 0x406c07
    while (true) {
      lab_0x406c58_2:
        // 0x406c58
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x406c07
        int64_t v27; // 0x406c8c
        while (true) {
          lab_0x406c58:
            // 0x406c58
            v5 = v26;
            bool v28 = v15 == v5; // 0x406c63
            if (v15 == -1) {
                // 0x406c65
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x406c73
            if (v28) {
                // break (via goto) -> 0x4073d8
                goto lab_0x4073d8;
            }
            // 0x406c7c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g127 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40726b
                    if (v25 % 2 == 0) {
                        goto lab_0x406db1;
                    }
                    // 0x40768d
                    v26 = v5 + 1;
                    goto lab_0x406c58;
                }
                case 7: {
                    goto lab_0x406db1;
                }
                case 8: {
                    goto lab_0x406db1;
                }
                case 9: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x406db1;
                }
                case 12: {
                    goto lab_0x406db1;
                }
                case 13: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x406d7d;
                }
                case 36: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x406db1;
                }
                case 38: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x406db1;
                }
                case 44: {
                    goto lab_0x406db1;
                }
                case 45: {
                    goto lab_0x406db1;
                }
                case 46: {
                    goto lab_0x406db1;
                }
                case 47: {
                    goto lab_0x406db1;
                }
                case 48: {
                    goto lab_0x406db1;
                }
                case 49: {
                    goto lab_0x406db1;
                }
                case 50: {
                    goto lab_0x406db1;
                }
                case 51: {
                    goto lab_0x406db1;
                }
                case 52: {
                    goto lab_0x406db1;
                }
                case 53: {
                    goto lab_0x406db1;
                }
                case 54: {
                    goto lab_0x406db1;
                }
                case 55: {
                    goto lab_0x406db1;
                }
                case 56: {
                    goto lab_0x406db1;
                }
                case 57: {
                    goto lab_0x406db1;
                }
                case 58: {
                    goto lab_0x406db1;
                }
                case 59: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x406db1;
                }
                case 66: {
                    goto lab_0x406db1;
                }
                case 67: {
                    goto lab_0x406db1;
                }
                case 68: {
                    goto lab_0x406db1;
                }
                case 69: {
                    goto lab_0x406db1;
                }
                case 70: {
                    goto lab_0x406db1;
                }
                case 71: {
                    goto lab_0x406db1;
                }
                case 72: {
                    goto lab_0x406db1;
                }
                case 73: {
                    goto lab_0x406db1;
                }
                case 74: {
                    goto lab_0x406db1;
                }
                case 75: {
                    goto lab_0x406db1;
                }
                case 76: {
                    goto lab_0x406db1;
                }
                case 77: {
                    goto lab_0x406db1;
                }
                case 78: {
                    goto lab_0x406db1;
                }
                case 79: {
                    goto lab_0x406db1;
                }
                case 80: {
                    goto lab_0x406db1;
                }
                case 81: {
                    goto lab_0x406db1;
                }
                case 82: {
                    goto lab_0x406db1;
                }
                case 83: {
                    goto lab_0x406db1;
                }
                case 84: {
                    goto lab_0x406db1;
                }
                case 85: {
                    goto lab_0x406db1;
                }
                case 86: {
                    goto lab_0x406db1;
                }
                case 87: {
                    goto lab_0x406db1;
                }
                case 88: {
                    goto lab_0x406db1;
                }
                case 89: {
                    goto lab_0x406db1;
                }
                case 90: {
                    goto lab_0x406db1;
                }
                case 91: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x406db1;
                }
                case 94: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x406db1;
                }
                case 96: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x406db1;
                }
                case 98: {
                    goto lab_0x406db1;
                }
                case 99: {
                    goto lab_0x406db1;
                }
                case 100: {
                    goto lab_0x406db1;
                }
                case 101: {
                    goto lab_0x406db1;
                }
                case 102: {
                    goto lab_0x406db1;
                }
                case 103: {
                    goto lab_0x406db1;
                }
                case 104: {
                    goto lab_0x406db1;
                }
                case 105: {
                    goto lab_0x406db1;
                }
                case 106: {
                    goto lab_0x406db1;
                }
                case 107: {
                    goto lab_0x406db1;
                }
                case 108: {
                    goto lab_0x406db1;
                }
                case 109: {
                    goto lab_0x406db1;
                }
                case 110: {
                    goto lab_0x406db1;
                }
                case 111: {
                    goto lab_0x406db1;
                }
                case 112: {
                    goto lab_0x406db1;
                }
                case 113: {
                    goto lab_0x406db1;
                }
                case 114: {
                    goto lab_0x406db1;
                }
                case 115: {
                    goto lab_0x406db1;
                }
                case 116: {
                    goto lab_0x406db1;
                }
                case 117: {
                    goto lab_0x406db1;
                }
                case 118: {
                    goto lab_0x406db1;
                }
                case 119: {
                    goto lab_0x406db1;
                }
                case 120: {
                    goto lab_0x406db1;
                }
                case 121: {
                    goto lab_0x406db1;
                }
                case 122: {
                    goto lab_0x406db1;
                }
                case 123: {
                    goto lab_0x406d55;
                }
                case 124: {
                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x406d55;
                }
                case 126: {
                    goto lab_0x406d7d;
                }
                default: {
                    goto lab_0x407155;
                }
            }
        }
      lab_0x407155:
        if (v23 != 1) {
            // 0x4074c0
            ps = 0;
            int64_t len = v15; // 0x4074d0
            if (v15 == -1) {
                // 0x4074d2
                len = strlen((char *)str);
            }
            // 0x4074fe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40755f:
                // 0x40755f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x407564
                int64_t v30 = v29 + str;
                v24 = function_40a580(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x407ada_2;
                    }
                    case -1: {
                        goto lab_0x407ada_2;
                    }
                    case -2: {
                        // 0x407bbd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x407bf7
                            v19 = v18;
                            int64_t v31 = v18; // 0x407bfa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x407c07
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x407c00
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x407ada
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x407ada_2;
                    }
                    case 1: {
                        goto lab_0x407530;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4075dc
                        char v34 = *(char *)v33; // 0x4075ed
                        unsigned char v35; // 0x406c07
                        if (v34 < 125) {
                            // 0x4075f8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40760f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4075e0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4075ed
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4075f8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40760f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4075e0
                            v33++;
                        }
                        goto lab_0x407530;
                    }
                }
            }
            goto lab_0x407ada_2;
        } else {
            // 0x4071a4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x406db1;
        }
    }
  lab_0x4073d8:
    // 0x4073d8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x407cda
        if (v8 > result) {
            // 0x407ce3
            *(char *)(v12 + result) = 0;
        }
        // 0x407007
        return result;
    }
    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x406db1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x406dc0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x406fca_2;
        }
    }
    int64_t v39 = result; // 0x406ec1
    char v40 = v20; // 0x406ec1
    int64_t v41 = v38; // 0x406ec1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x406ec1
    int64_t v43 = v36; // 0x406ec1
    goto lab_0x406e3d;
  lab_0x406fca_2:
    // 0x407007
    return function_406bb0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x407ada_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x406db1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4076ae
        int64_t v50 = v5 + 1; // 0x407791
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x407798
        char v52 = v20; // 0x407798
        int64_t v53 = result; // 0x407798
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x407761
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x407765
            int64_t v56 = v54 + 1; // 0x40776a
            int64_t v57 = v51 + 1; // 0x407791
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40775c
                v54 = v56;
                if (v47 > v54) {
                    // 0x407761
                    *(char *)(v54 + v48) = v55;
                }
                // 0x407765
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
        goto lab_0x406e3d;
    }
  lab_0x407530:
    // 0x407530
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40754f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x407552
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x407ada
        goto lab_0x407ada_2;
    }
    goto lab_0x40755f;
  lab_0x406d7d:
    // 0x406d7d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x406fca_2;
    }
    goto lab_0x406db1;
  lab_0x406d55:;
    bool v60 = v15 == 1; // 0x406d60
    if (v15 == -1) {
        // 0x406d62
        v60 = *(char *)v1 == 0;
    }
    // 0x406d6e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x406db1;
    } else {
        goto lab_0x406d7d;
    }
  lab_0x406e3d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x406e42
        *(char *)(v44 + v45) = v40;
    }
    // 0x406e46
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x406c58_2;
}
// Address range: 0x407de0 - 0x407f7e
int64_t function_407de0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x407de2
    int32_t * v3 = __errno_location(); // 0x407dfc
    int64_t v4 = (int64_t)g35; // 0x407e01
    int32_t v5 = *v3; // 0x407e0b
    int64_t v6 = v4; // 0x407e21
    if (v2 >= (int64_t)*(int32_t *)&g38) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x407f79
            function_408f10(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x407e30
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x407e37
        int64_t v9; // 0x407de0
        if (g35 == &g36) {
            int64_t v10 = function_408d20(0, v8); // 0x407f5a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g36); // 0x407f5f
            *(int64_t *)&g35 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_408d20(v4, v8); // 0x407e4b
            *(int64_t *)&g35 = v12;
            v9 = v12;
        }
        // 0x407e5a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g38; // 0x407e5a
        int32_t v14 = v7; // 0x407e61
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g38 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x407e91
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x407e9b
    int64_t * v17 = (int64_t *)v15; // 0x407e9e
    uint64_t v18 = *v17; // 0x407e9e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x407ea1
    int64_t result = *v19; // 0x407ea1
    int64_t v20; // 0x407de0
    uint64_t v21 = function_406bb0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x407ec4
    if (v18 > v21) {
        // 0x407f3b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x407ed7
    *v17 = v22;
    if (result != (int64_t)&g111) {
        // 0x407ee7
        free((int64_t *)result);
    }
    int64_t result2 = function_408cc0(v22); // 0x407f01
    *v19 = result2;
    int64_t v23; // 0x407de0
    function_406bb0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x407f3b
    *v3 = v5;
    return result2;
}
// Address range: 0x407f80 - 0x407fb4
int64_t function_407f80(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x407f87
    int64_t result = function_408ec0(a1 == 0 ? (int64_t)&g112 : a1, 56); // 0x407fa6
    return result;
}
// Address range: 0x407fc0 - 0x407fcf
int64_t function_407fc0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g112 : a1); // 0x407fcc
    return result;
}
// Address range: 0x407fd0 - 0x407fdf
int64_t function_407fd0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g112 : a1; // 0x407fd8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g112;
}
// Address range: 0x407fe0 - 0x408013
int64_t function_407fe0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g112 + 8 : a1 + 8; // 0x407ff9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x407ffe
    uint32_t v3 = *v2; // 0x407ffe
    uint32_t v4 = (int32_t)a2 % 32; // 0x408002
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x408020 - 0x408033
int64_t function_408020(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g112 + 4 : a1 + 4); // 0x40802c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x408040 - 0x40806b
int64_t function_408040(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g112 : a1; // 0x408048
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x408065
        abort();
        // UNREACHABLE
    }
    // 0x40805c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g112;
}
// Address range: 0x408070 - 0x4080e2
int64_t function_408070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g112 : a5; // 0x408092
    int32_t * v2 = __errno_location(); // 0x40809b
    uint32_t v3 = *(int32_t *)v1; // 0x4080bb
    int64_t result = function_406bb0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4080ca
    return result;
}
// Address range: 0x4080f0 - 0x4081d1
int64_t function_4080f0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g112 : a4; // 0x408112
    int32_t * v2 = __errno_location(); // 0x408118
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x408137
    int32_t * v4 = (int32_t *)v1; // 0x40813a
    int64_t v5 = function_406bb0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x408155
    int64_t v6 = v5 + 1; // 0x40815a
    int64_t result = function_408cc0(v6); // 0x40816f
    function_406bb0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4081b4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4081bd
    return result;
}
// Address range: 0x4081e0 - 0x4081ea
int64_t function_4081e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4081e0
    return function_4080f0(a1, a2, 0, a3);
}
// Address range: 0x4081f0 - 0x408285
int64_t function_4081f0(void) {
    uint32_t v1 = *(int32_t *)&g38; // 0x4081f0
    int64_t v2 = v1; // 0x4081f0
    int64_t v3 = v2; // 0x408204
    if (v1 >= 2) {
        int64_t v4 = &g38;
        int64_t v5 = v4 + 16; // 0x408223
        free((int64_t *)*(int64_t *)v4);
        v3 = &g128;
        while (v5 != (int64_t)g35 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x408220
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g128;
        }
    }
    int64_t v6 = v3; // 0x40823d
    if (g36 != 0x6146a0) {
        // 0x40823f
        free((int64_t *)g36);
        g36 = 256;
        *(int64_t *)&g37 = (int64_t)&g111;
        v6 = &g128;
    }
    int64_t result = v6; // 0x408261
    if (g35 != &g36) {
        // 0x408263
        free(g35);
        *(int64_t *)&g35 = (int64_t)&g36;
        result = &g128;
    }
    // 0x408276
    *(int32_t *)&g38 = 1;
    return result;
}
// Address range: 0x408290 - 0x4082a1
int64_t function_408290(void) {
    // 0x408290
    int64_t v1; // 0x408290
    return function_407de0(v1, v1, -1, (int64_t *)&g112);
}
// Address range: 0x4082b0 - 0x4082ba
int64_t function_4082b0(void) {
    // 0x4082b0
    int64_t v1; // 0x4082b0
    return function_407de0(v1, v1, v1, (int64_t *)&g112);
}
// Address range: 0x4082c0 - 0x4082d6
int64_t function_4082c0(int64_t a1) {
    // 0x4082c0
    return function_407de0(0, a1, -1, (int64_t *)&g112);
}
// Address range: 0x4082e0 - 0x4082f2
int64_t function_4082e0(int64_t a1, int64_t a2) {
    // 0x4082e0
    return function_407de0(0, a1, a2, (int64_t *)&g112);
}
// Address range: 0x408300 - 0x408368
int64_t function_408300(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408310
    return function_407de0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408370 - 0x4083d4
int64_t function_408370(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408380
    return function_407de0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4083e0 - 0x4083ec
int64_t function_4083e0(int64_t a1, int64_t a2) {
    // 0x4083e0
    return function_408300(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4083f0 - 0x4083ff
int64_t function_4083f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4083f0
    return function_408370(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x408400 - 0x408470
int64_t function_408400(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g112); // 0x40840d
    int128_t v2 = __asm_movdqa(g113); // 0x408415
    int128_t v3 = __asm_movdqa(g114); // 0x40841d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x408432
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x408448
    uint32_t v6 = *v5; // 0x408448
    uint32_t v7 = (int32_t)a3 % 32; // 0x40844d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_407de0(0, a1, a2, &v4);
}
// Address range: 0x408470 - 0x40847d
int64_t function_408470(int64_t a1, int64_t a2) {
    // 0x408470
    return function_408400(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x408480 - 0x408491
int64_t function_408480(int64_t a1) {
    // 0x408480
    return function_408400(a1, -1, 58);
}
// Address range: 0x4084a0 - 0x4084aa
int64_t function_4084a0(void) {
    // 0x4084a0
    int64_t v1; // 0x4084a0
    return function_408400(v1, v1, 58);
}
// Address range: 0x4084b0 - 0x40851e
int64_t function_4084b0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4084ca
    return function_407de0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408520 - 0x40858c
int64_t function_408520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g112); // 0x408527
    int128_t v2 = __asm_movdqa(g113); // 0x40852f
    int128_t v3 = __asm_movdqa(g114); // 0x408537
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x408559
    if (a2 == 0 || a3 == 0) {
        // 0x408587
        abort();
        // UNREACHABLE
    }
    // 0x40856a
    return function_407de0(a1, a4, a5, &v4);
}
// Address range: 0x408590 - 0x408599
int64_t function_408590(void) {
    // 0x408590
    int64_t v1; // 0x408590
    return function_408520(v1, v1, v1, v1, -1);
}
// Address range: 0x4085a0 - 0x4085b7
int64_t function_4085a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4085a0
    return function_408520(0, a1, a2, a3, -1);
}
// Address range: 0x4085c0 - 0x4085d3
int64_t function_4085c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4085c0
    return function_408520(0, a1, a2, a3, a4);
}
// Address range: 0x4085e0 - 0x4085ea
int64_t function_4085e0(void) {
    // 0x4085e0
    int64_t v1; // 0x4085e0
    return function_407de0(v1, v1, v1, &g34);
}
// Address range: 0x4085f0 - 0x408602
int64_t function_4085f0(int64_t a1, int64_t a2) {
    // 0x4085f0
    return function_407de0(0, a1, a2, &g34);
}
// Address range: 0x408610 - 0x408621
int64_t function_408610(int64_t a1, char * a2, int64_t a3, int64_t a4) {
    // 0x408610
    return function_407de0(a1, (int64_t)a2, -1, &g34);
}
// Address range: 0x408630 - 0x408646
int64_t function_408630(int64_t a1) {
    // 0x408630
    return function_407de0(0, a1, -1, &g34);
}
// Address range: 0x408650 - 0x408701
int64_t function_408650(int64_t a1, int64_t a2, int32_t file_name, int32_t line_num, int64_t a5, int64_t a6) {
    int64_t v1 = function_4094c0(a5, a6); // 0x40866a
    if (v1 == 0) {
        // 0x4086d5
        error(0, *__errno_location(), dcgettext(NULL, "unable to display error message", 5));
        abort();
        // UNREACHABLE
    }
    int32_t status = a1;
    int32_t err_num = a2;
    if (file_name == 0) {
        // 0x4086b0
        error(status, err_num, "%s", (char *)v1);
        free((int64_t *)v1);
        return &g128;
    }
    // 0x40867c
    error_at_line(status, err_num, (char *)(int64_t)file_name, line_num, "%s", (char *)v1);
    free((int64_t *)v1);
    return &g128;
}
// Address range: 0x408710 - 0x40871f
int64_t function_408710(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x408710
    return function_408650(a1, a2, 0, 0, a3, (int64_t)a4);
}
// Address range: 0x408720 - 0x408afd
int64_t function_408720(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4087b8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40873c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x408756
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40879b
    if (a6 < 10) {
        // 0x4087aa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4088a2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x408b00 - 0x408b20
int64_t function_408b00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408b00
    if (a5 == 0) {
        // 0x408b1b
        return function_408720(a1, a2, a3, a4, a5, 0, (int64_t)&g128);
    }
    int64_t v1 = 0; // 0x408b07
    v1++;
    int64_t v2 = v1; // 0x408b19
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x408b10
        v1++;
        v2 = v1;
    }
    // 0x408b1b
    return function_408720(a1, a2, a3, a4, a5, v2, (int64_t)&g128);
}
// Address range: 0x408b20 - 0x408b80
int64_t function_408b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x408b20
    int64_t v4 = &v3; // 0x408b20
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x408b53
    int64_t v7; // 0x408b3d
    int64_t * v8; // 0x408b5b
    int64_t v9; // 0x408b5b
    int64_t v10; // 0x408b67
    if (v6 < 48) {
        // 0x408b30
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x408b73
            break;
        }
    } else {
        // 0x408b5b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x408b73
            break;
        }
    }
    int64_t v11 = 10; // 0x408b51
    while (v5 != 9) {
        // 0x408b49
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x408b30
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x408b73
                break;
            }
        } else {
            // 0x408b5b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x408b73
                break;
            }
        }
        // 0x408b49
        v11 = 10;
    }
    // 0x408b73
    return function_408720(a1, a2, a3, a4, v4, v11, (int64_t)&g128);
}
// Address range: 0x408b80 - 0x408c3c
int64_t function_408b80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408b80
    int64_t v1; // bp-168, 0x408b80
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x408b80
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x408b80
    int64_t v8; // 0x408b80
    int64_t v9; // bp-56, 0x408b80
    int64_t v10; // 0x408be5
    int64_t v11; // 0x408c09
    if ((int32_t)v6 < 48) {
        // 0x408bd0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x408c20
            break;
        }
    } else {
        // 0x408c02
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x408c20
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x408bfa
    int64_t v13 = 10; // 0x408bfa
    while (v5 != 9) {
        // 0x408bfc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x408bd0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x408c20
                break;
            }
        } else {
            // 0x408c02
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x408c20
                break;
            }
        }
        // 0x408bf2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x408c20
    int64_t v14; // bp-136, 0x408b80
    int64_t result = function_408720(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g128); // 0x408c2f
    return result;
}
// Address range: 0x408c40 - 0x408cb4
int64_t function_408c40(int64_t a1) {
    // 0x408c40
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x408ca3
    return fputs_unlocked(v1, g43);
}
// Address range: 0x408cc0 - 0x408cda
int64_t function_408cc0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x408cc4
    if (size != 0 != (mem == NULL)) {
        // 0x408cd3
        return (int64_t)mem;
    }
    // 0x408cd5
    function_408f10(size);
    // UNREACHABLE
}
// Address range: 0x408ce0 - 0x408d01
int64_t function_408ce0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x408ce3
    int64_t v2 = v1; // 0x408ce3
    if (v2 < 0) {
        // 0x408cfb
        function_408f10(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408cf9
        return function_408cc0(v2);
    }
    // 0x408cfb
    function_408f10(v2);
    // UNREACHABLE
}
// Address range: 0x408d10 - 0x408d12
int64_t function_408d10(void) {
    // 0x408d10
    int64_t v1; // 0x408d10
    return function_408cc0(v1);
}
// Address range: 0x408d20 - 0x408d56
int64_t function_408d20(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x408d48
        free(v1);
        return (int32_t)&g128 ^ (int32_t)&g128;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x408d31
    if (a2 != 0 != (mem == NULL)) {
        // 0x408d40
        return (int64_t)mem;
    }
    // 0x408d51
    function_408f10(a1);
    // UNREACHABLE
}
// Address range: 0x408d60 - 0x408d81
int64_t function_408d60(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x408d63
    int64_t v2 = v1; // 0x408d63
    if (v2 < 0) {
        // 0x408d7b
        function_408f10(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408d79
        return function_408d20(a1, v2);
    }
    // 0x408d7b
    function_408f10(a1);
    // UNREACHABLE
}
// Address range: 0x408d90 - 0x408e16
int64_t function_408d90(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x408deb
            function_408f10(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_408d20(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x408dd3
    if (a2 == 0) {
        // 0x408df8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x408dd8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x408deb
        function_408f10(a1);
        // UNREACHABLE
    }
    // 0x408dba
    *(int64_t *)a2 = v2;
    return function_408d20(a1, v2 * a3);
}
// Address range: 0x408e20 - 0x408e70
int64_t function_408e20(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x408e20
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x408e6a
            function_408f10(a1);
            // UNREACHABLE
        }
        // 0x408e42
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_408d20(a1, v1);
    }
    if (a2 == 0) {
        // 0x408e55
        *(int64_t *)a2 = 128;
        return function_408d20(0, 128);
    }
    // 0x408e68
    if (a2 < 0) {
        // 0x408e6a
        function_408f10(a1);
        // UNREACHABLE
    }
    // 0x408e42
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_408d20(a1, v1);
}
// Address range: 0x408e70 - 0x408e87
int64_t function_408e70(int64_t a1, int64_t a2) {
    // 0x408e70
    return (int64_t)memset((int64_t *)function_408cc0(a1), 0, (int32_t)a1);
}
// Address range: 0x408e90 - 0x408ebe
int64_t function_408e90(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x408e97
    if ((int64_t)v1 < 0) {
        // 0x408eb9
        function_408f10(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x408eb9
        function_408f10(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x408eaa
    if (mem != NULL) {
        // 0x408eb4
        return (int64_t)mem;
    }
    // 0x408eb9
    function_408f10(nmemb);
    // UNREACHABLE
}
// Address range: 0x408ec0 - 0x408ee8
int64_t function_408ec0(int64_t a1, int64_t a2) {
    int64_t v1 = function_408cc0(a2); // 0x408ecf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x408ef0 - 0x408f03
int64_t function_408ef0(int64_t str) {
    // 0x408ef0
    return function_408ec0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x408f10 - 0x408f41
int64_t function_408f10(int64_t a1) {
    // 0x408f10
    error(g33, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x408f50 - 0x4094b7
int64_t function_408f50(int64_t a1, int64_t * a2, int64_t a3, int64_t * a4, char * str3, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x408f5e
    if (v1 >= 37) {
        // 0x40936b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        int128_t v2; // 0x408f50
        __asm_movups(v2, __asm_movdqu(0x632e6c6f74727473782f62696c));
        int64_t v3 = 0; // 0x4093cb
        int64_t v4 = (int64_t)"0 <= strtol_base && strtol_base <= 36"; // 0x4093cb
        int64_t v5 = v2;
        int32_t v6 = v2;
        int64_t str; // 0x408f50
        int64_t v7; // 0x408f50
        int64_t v8; // 0x408f50
        int64_t v9; // 0x408f50
        int32_t v10; // 0x408f50
        int32_t v11; // 0x4093d2
        if (v6 < 48) {
            // 0x4093d0
            v11 = (int32_t)v5 + 8;
            v10 = v11;
            v9 = v11;
            v7 = v8;
            str = (v5 & 0xffffffff) + 0x727473203d3c2030;
        } else {
            // 0x4093fa
            v10 = v6;
            v9 = v5;
            v7 = v8 + 8;
            str = v8;
        }
        uint64_t v12 = v3 + (int64_t)strlen((char *)*(int64_t *)str); // 0x4093e4
        int64_t v13 = v12 < v3 ? -1 : v12; // 0x4093e7
        v4--;
        v3 = v13;
        while (v4 != 0) {
            int64_t v14 = v7;
            v5 = v9;
            v6 = v10;
            if (v6 < 48) {
                // 0x4093d0
                v11 = (int32_t)v5 + 8;
                v10 = v11;
                v9 = v11;
                v7 = v14;
                str = (v5 & 0xffffffff) + 0x727473203d3c2030;
            } else {
                // 0x4093fa
                v10 = v6;
                v9 = v5;
                v7 = v14 + 8;
                str = v14;
            }
            // 0x4093dc
            v12 = v3 + (int64_t)strlen((char *)*(int64_t *)str);
            v13 = v12 < v3 ? -1 : v12;
            v4--;
            v3 = v13;
        }
        if (v13 >= 0x80000000) {
            // 0x4094a8
            *__errno_location() = 75;
            // 0x409493
            return 0;
        }
        int64_t result = function_408cc0(v13 + 1); // 0x409421
        int64_t v15 = (int64_t)"0 <= strtol_base && strtol_base <= 36"; // 0x40942c
        *(int64_t *)"tol.c" = (int64_t)"0 <= strtol_base && strtol_base <= 36";
        int64_t str2 = *(int64_t *)0x632e6c6f74; // 0x40943e
        int32_t len = strlen((char *)str2); // 0x409444
        memcpy((int64_t *)result, (int64_t *)str2, len);
        int64_t v16 = result + (int64_t)len; // 0x40945a
        v15--;
        int64_t v17 = v16; // 0x409461
        while (v15 != 0) {
            // 0x409463
            *(int64_t *)"tol.c" = (int64_t)"0 <= strtol_base && strtol_base <= 36";
            str2 = *(int64_t *)0x632e6c6f74;
            len = strlen((char *)str2);
            memcpy((int64_t *)v17, (int64_t *)str2, len);
            v16 = v17 + (int64_t)len;
            v15--;
            v17 = v16;
        }
        // 0x409490
        *(char *)v16 = 0;
        // 0x409493
        return result;
    }
    char c = a1;
    int32_t * v18 = __errno_location(); // 0x408f82
    *v18 = 0;
    int64_t v19 = (int64_t)*__ctype_b_loc() + 1; // 0x408fb2
    int64_t v20 = a1; // 0x408fb7
    char v21 = c; // 0x408fb7
    if ((*(char *)(v19 + (2 * a1 & 510)) & 32) != 0) {
        v20++;
        unsigned char v22 = *(char *)v20; // 0x408fac
        v21 = v22;
        while ((*(char *)(2 * (int64_t)v22 + v19) & 32) != 0) {
            // 0x408fa8
            v20++;
            v22 = *(char *)v20;
            v21 = v22;
        }
    }
    // 0x408fb9
    if (v21 == 45) {
        // 0x408ff5
        return 4;
    }
    // 0x408fbe
    int64_t v23; // bp-64, 0x408f50
    int64_t * v24 = a2 == NULL ? &v23 : a2;
    int32_t v25 = __strtoul_internal((char *)a1, (char **)v24, v1, 0); // 0x408fc6
    int64_t v26 = *v24; // 0x408fcb
    char v27; // 0x408f50
    int64_t v28; // 0x408f50
    int64_t v29; // 0x408f50
    int64_t v30; // 0x408f50
    int64_t v31; // 0x408f50
    int64_t v32; // 0x408f50
    int64_t v33; // 0x408f50
    if (v26 == a1) {
        // 0x409028
        if (c == 0 || str3 == NULL) {
            // 0x408ff5
            return 4;
        }
        char * found_char_pos = strchr(str3, (int32_t)c); // 0x409049
        v32 = 1;
        v29 = 0;
        v27 = c;
        if (found_char_pos == NULL) {
            // 0x408ff5
            return 4;
        }
        goto lab_0x409057;
    } else {
        int32_t v34 = *v18; // 0x408fd6
        int64_t v35 = 0; // 0x408fdc
        if (v34 != 0) {
            // 0x409010
            v35 = 1;
            if (v34 != 34) {
                // 0x408ff5
                return 4;
            }
        }
        int64_t v36 = v25; // 0x408fc6
        v31 = v36;
        v28 = v35;
        if (str3 == NULL) {
            goto lab_0x408ff2;
        } else {
            char c2 = *(char *)v26; // 0x408fe5
            v31 = v36;
            v28 = v35;
            if (c2 != 0) {
                char * found_char_pos2 = strchr(str3, (int32_t)c2); // 0x409153
                v32 = v36;
                v29 = v35;
                v27 = c2;
                v33 = v36;
                v30 = v35;
                if (found_char_pos2 != NULL) {
                    goto lab_0x409057;
                } else {
                    goto lab_0x409165;
                }
            } else {
                goto lab_0x408ff2;
            }
        }
    }
  lab_0x409057:;
    unsigned char v37 = v27 - 69;
    int64_t v38 = 1024; // 0x40905f
    int64_t v39 = 1; // 0x40905f
    int64_t v40; // 0x408f50
    int64_t v41; // 0x408f50
    int64_t v42; // 0x408f50
    int64_t v43; // 0x408f50
    int64_t v44; // 0x408f50
    int64_t v45; // 0x408f50
    int64_t v46; // 0x408f50
    int64_t v47; // 0x408f50
    int64_t v48; // 0x408f50
    int64_t v49; // 0x408f50
    int64_t v50; // 0x408f50
    int64_t v51; // 0x408f50
    int64_t v52; // 0x408f50
    int64_t v53; // 0x408f50
    int64_t v54; // 0x408f50
    int64_t v55; // 0x408f50
    int64_t v56; // 0x408f50
    int64_t v57; // 0x408f50
    int64_t v58; // 0x408f50
    int64_t v59; // 0x408f50
    if (v37 < 48) {
        // 0x409061
        v38 = 1024;
        v39 = 1;
        if ((1 << (int64_t)((v27 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4090ca;
        } else {
            // 0x409074
            v38 = 1024;
            v39 = 1;
            if (strchr(str3, 48) == NULL) {
                goto lab_0x4090ca;
            } else {
                // 0x409090
                v38 = 1000;
                v39 = 2;
                switch (*(char *)(v26 + 1)) {
                    case 68: {
                        goto lab_0x4090ca;
                    }
                    case 105: {
                        char v60 = *(char *)(v26 + 2); // 0x4092f9
                        v38 = 1024;
                        v39 = (v60 == 66 ? 2 : 1) + (int64_t)(v60 == 66);
                        goto lab_0x4090ca;
                    }
                    default: {
                        // 0x4090a5
                        g122 = v37;
                        v38 = 1000;
                        v39 = 2;
                        v42 = 1024;
                        v54 = 1;
                        v41 = v32;
                        v40 = v29;
                        v55 = 1;
                        v43 = 1024;
                        v56 = 1;
                        v33 = v32;
                        v30 = v29;
                        v57 = 1;
                        v44 = 1024;
                        v58 = 1;
                        v45 = 1024;
                        v59 = 1;
                        v46 = 1024;
                        v50 = 1;
                        v47 = 1024;
                        v51 = 1;
                        v48 = 1024;
                        v52 = 1;
                        v49 = 1024;
                        v53 = 1;
                        switch (v27) {
                            case 69: {
                                goto lab_0x40926b;
                            }
                            case 70: {
                                goto lab_0x409165;
                            }
                            case 71: {
                                goto lab_0x4092a3;
                            }
                            case 72: {
                                goto lab_0x409165;
                            }
                            case 73: {
                                goto lab_0x409165;
                            }
                            case 74: {
                                goto lab_0x409165;
                            }
                            case 75: {
                                goto lab_0x40912c;
                            }
                            case 76: {
                                goto lab_0x409165;
                            }
                            case 77: {
                                goto lab_0x4090ee;
                            }
                            case 78: {
                                goto lab_0x409165;
                            }
                            case 79: {
                                goto lab_0x409165;
                            }
                            case 80: {
                                goto lab_0x409238;
                            }
                            case 81: {
                                goto lab_0x409165;
                            }
                            case 82: {
                                goto lab_0x409165;
                            }
                            case 83: {
                                goto lab_0x409165;
                            }
                            case 84: {
                                goto lab_0x409208;
                            }
                            case 85: {
                                goto lab_0x409165;
                            }
                            case 86: {
                                goto lab_0x409165;
                            }
                            case 87: {
                                goto lab_0x409165;
                            }
                            case 88: {
                                goto lab_0x409165;
                            }
                            case 89: {
                                goto lab_0x4091d6;
                            }
                            case 90: {
                                goto lab_0x40919b;
                            }
                            case 91: {
                                goto lab_0x409165;
                            }
                            case 92: {
                                goto lab_0x409165;
                            }
                            case 93: {
                                goto lab_0x409165;
                            }
                            case 94: {
                                goto lab_0x409165;
                            }
                            case 95: {
                                goto lab_0x409165;
                            }
                            case 96: {
                                goto lab_0x409165;
                            }
                            case 97: {
                                goto lab_0x409165;
                            }
                            case 98: {
                                goto lab_0x40917f;
                            }
                            case 99: {
                                goto lab_0x409108;
                            }
                            case 100: {
                                goto lab_0x409165;
                            }
                            case 101: {
                                goto lab_0x409165;
                            }
                            case 102: {
                                goto lab_0x409165;
                            }
                            case 103: {
                                goto lab_0x4092a3;
                            }
                            case 104: {
                                goto lab_0x409165;
                            }
                            case 105: {
                                goto lab_0x409165;
                            }
                            case 106: {
                                goto lab_0x409165;
                            }
                            case 107: {
                                goto lab_0x40912c;
                            }
                            case 108: {
                                goto lab_0x409165;
                            }
                            case 109: {
                                goto lab_0x4090ee;
                            }
                            case 110: {
                                goto lab_0x409165;
                            }
                            case 111: {
                                goto lab_0x409165;
                            }
                            case 112: {
                                goto lab_0x409165;
                            }
                            case 113: {
                                goto lab_0x409165;
                            }
                            case 114: {
                                goto lab_0x409165;
                            }
                            case 115: {
                                goto lab_0x409165;
                            }
                            case 116: {
                                goto lab_0x409208;
                            }
                            default: {
                                goto lab_0x4090ca;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4090ca;
    }
  lab_0x408ff2:
    // 0x408ff2
    *a4 = v31;
    // 0x408ff5
    return v28 & 0xffffffff;
  lab_0x4090ca:
    // 0x4090ca
    g123 = v27 - 66;
    v42 = v38;
    v54 = v39;
    v41 = v32;
    v40 = v29;
    v55 = v39;
    v43 = v38;
    v56 = v39;
    v33 = v32;
    v30 = v29;
    v57 = v39;
    v44 = v38;
    v58 = v39;
    v45 = v38;
    v59 = v39;
    v46 = v38;
    v50 = v39;
    v47 = v38;
    v51 = v39;
    v48 = v38;
    v52 = v39;
    v49 = v38;
    v53 = v39;
    int64_t v61; // 0x408f50
    switch (v27) {
        case 66: {
            // 0x4092c4
            v61 = v39;
            if (v32 >= 0x40000000000000) {
                goto lab_0x409137;
            } else {
                // 0x4092d1
                v41 = 1024 * v32;
                v40 = v29;
                v55 = v39;
                goto lab_0x409108;
            }
        }
        case 69: {
            goto lab_0x40926b;
        }
        case 71: {
            goto lab_0x4092a3;
        }
        case 75: {
            goto lab_0x40912c;
        }
        case 77: {
            goto lab_0x4090ee;
        }
        case 80: {
            goto lab_0x409238;
        }
        case 84: {
            goto lab_0x409208;
        }
        case 89: {
            goto lab_0x4091d6;
        }
        case 90: {
            goto lab_0x40919b;
        }
        case 98: {
            goto lab_0x40917f;
        }
        case 99: {
            goto lab_0x409108;
        }
        case 103: {
            goto lab_0x4092a3;
        }
        case 107: {
            goto lab_0x40912c;
        }
        case 109: {
            goto lab_0x4090ee;
        }
        case 116: {
            goto lab_0x409208;
        }
        case 119: {
            // 0x409170
            v61 = v39;
            if (v32 < 0) {
                goto lab_0x409137;
            } else {
                // 0x409175
                v41 = 2 * v32;
                v40 = v29;
                v55 = v39;
                goto lab_0x409108;
            }
        }
        default: {
            goto lab_0x409165;
        }
    }
  lab_0x40926b:;
    uint128_t v62 = (int128_t)v32 * (int128_t)v48; // 0x409283
    int64_t v63 = (int64_t)(v62 < 0xffffffffffffffff ? v62 : 0xffffffffffffffff);
    int64_t v64 = v62 > 0xffffffffffffffff ? 1 : 0;
    int32_t v65 = 5; // 0x40928f
    int64_t v66 = v63; // 0x409292
    int64_t v67 = v52; // 0x409292
    int64_t v68 = v64; // 0x409292
    int32_t v69 = v65; // 0x409292
    int64_t v70 = v64; // 0x409292
    while (v65 != 0) {
        // 0x409280
        v62 = (int128_t)v63 * (int128_t)v48;
        v63 = (int64_t)(v62 < 0xffffffffffffffff ? v62 : 0xffffffffffffffff);
        v64 = v62 > 0xffffffffffffffff ? 1 : v70;
        v65 = v69 - 1;
        v66 = v63;
        v67 = v52;
        v68 = v64;
        v69 = v65;
        v70 = v64;
    }
    goto lab_0x4091c4;
  lab_0x4092a3:
    // 0x4092a3
    v41 = -1;
    v40 = 1;
    v55 = v53;
    if ((int128_t)v49 * (int128_t)v32 <= 0xffffffffffffffff) {
        // 0x4092ae
        int128_t v71; // 0x4092a9
        uint128_t v72; // 0x4092a9
        uint128_t v73 = (v72 & 0xffffffffffffffff) * v71; // 0x4092ae
        v41 = -1;
        v40 = 1;
        int64_t v74; // 0x408f50
        v55 = v74;
        if (v73 <= 0xffffffffffffffff) {
            uint128_t v75 = (v73 & 0xffffffffffffffff) * v71; // 0x4092b3
            v41 = -1;
            v40 = 1;
            v55 = v74;
            if (v75 <= 0xffffffffffffffff) {
                // 0x4092b8
                v41 = v75;
                int64_t v76; // 0x408f50
                v40 = v76 & 0xffffffff;
                v55 = v74;
            }
        }
    }
    goto lab_0x409108;
  lab_0x40912c:;
    uint128_t v79 = (int128_t)v43 * (int128_t)v32; // 0x40912f
    v41 = v79;
    v40 = v29;
    v55 = v56;
    v61 = v56;
    if (v79 <= 0xffffffffffffffff) {
        goto lab_0x409108;
    } else {
        goto lab_0x409137;
    }
  lab_0x4090ee:;
    int128_t v80 = v42; // 0x4090f4
    uint128_t v81 = v80 * (int128_t)v32; // 0x4090f4
    v61 = v54;
    if (v81 > 0xffffffffffffffff) {
        goto lab_0x409137;
    } else {
        uint128_t v82 = (v81 & 0xffffffffffffffff) * v80; // 0x4090f9
        v61 = v54;
        if (v82 > 0xffffffffffffffff) {
            goto lab_0x409137;
        } else {
            // 0x4090fe
            v41 = v82;
            v40 = v29;
            v55 = v54;
            goto lab_0x409108;
        }
    }
  lab_0x409238:;
    uint128_t v83 = (int128_t)v32 * (int128_t)v47; // 0x40924b
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 4; // 0x409257
    v66 = v84;
    v67 = v51;
    v68 = v85;
    int32_t v87 = v86; // 0x40925a
    int64_t v88 = v85; // 0x40925a
    while (v86 != 0) {
        // 0x409248
        v83 = (int128_t)v84 * (int128_t)v47;
        v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
        v85 = v83 > 0xffffffffffffffff ? 1 : v88;
        v86 = v87 - 1;
        v66 = v84;
        v67 = v51;
        v68 = v85;
        v87 = v86;
        v88 = v85;
    }
    goto lab_0x4091c4;
  lab_0x409208:;
    uint128_t v89 = (int128_t)v32 * (int128_t)v46; // 0x40921b
    int64_t v90 = (int64_t)(v89 < 0xffffffffffffffff ? v89 : 0xffffffffffffffff);
    int64_t v91 = v89 > 0xffffffffffffffff ? 1 : 0;
    int32_t v92 = 3; // 0x409227
    v66 = v90;
    v67 = v50;
    v68 = v91;
    int32_t v93 = v92; // 0x40922a
    int64_t v94 = v91; // 0x40922a
    while (v92 != 0) {
        // 0x409218
        v89 = (int128_t)v90 * (int128_t)v46;
        v90 = (int64_t)(v89 < 0xffffffffffffffff ? v89 : 0xffffffffffffffff);
        v91 = v89 > 0xffffffffffffffff ? 1 : v94;
        v92 = v93 - 1;
        v66 = v90;
        v67 = v50;
        v68 = v91;
        v93 = v92;
        v94 = v91;
    }
    goto lab_0x4091c4;
  lab_0x4091d6:;
    uint128_t v95 = (int128_t)v32 * (int128_t)v45; // 0x4091eb
    int64_t v96 = (int64_t)(v95 < 0xffffffffffffffff ? v95 : 0xffffffffffffffff);
    int64_t v97 = v95 > 0xffffffffffffffff ? 1 : 0;
    int32_t v98 = 7; // 0x4091f7
    v66 = v96;
    v67 = v59;
    v68 = v97;
    int32_t v99 = v98; // 0x4091fa
    int64_t v100 = v97; // 0x4091fa
    while (v98 != 0) {
        // 0x4091e8
        v95 = (int128_t)v96 * (int128_t)v45;
        v96 = (int64_t)(v95 < 0xffffffffffffffff ? v95 : 0xffffffffffffffff);
        v97 = v95 > 0xffffffffffffffff ? 1 : v100;
        v98 = v99 - 1;
        v66 = v96;
        v67 = v59;
        v68 = v97;
        v99 = v98;
        v100 = v97;
    }
    goto lab_0x4091c4;
  lab_0x40919b:;
    uint128_t v101 = (int128_t)v32 * (int128_t)v44; // 0x4091b3
    int64_t v102 = (int64_t)(v101 < 0xffffffffffffffff ? v101 : 0xffffffffffffffff);
    int64_t v103 = v101 > 0xffffffffffffffff ? 1 : 0;
    int32_t v104 = 6; // 0x4091bf
    int32_t v105 = v104; // 0x4091c2
    int64_t v106 = v103; // 0x4091c2
    v66 = v102;
    v67 = v58;
    v68 = v103;
    while (v104 != 0) {
        // 0x4091b0
        v101 = (int128_t)v102 * (int128_t)v44;
        v102 = (int64_t)(v101 < 0xffffffffffffffff ? v101 : 0xffffffffffffffff);
        v103 = v101 > 0xffffffffffffffff ? 1 : v106;
        v104 = v105 - 1;
        v105 = v104;
        v106 = v103;
        v66 = v102;
        v67 = v58;
        v68 = v103;
    }
    goto lab_0x4091c4;
  lab_0x40917f:
    // 0x40917f
    v61 = v57;
    if (v32 >= 0x80000000000000) {
        goto lab_0x409137;
    } else {
        // 0x409188
        v41 = 512 * v32;
        v40 = v29;
        v55 = v57;
        goto lab_0x409108;
    }
  lab_0x409108:;
    int64_t v77 = v40;
    int64_t v78 = (0x100000000 * v55 >> 32) + v26; // 0x40910d
    *v24 = v78;
    v31 = v41;
    v28 = (*(char *)v78 != 0 ? v77 | 2 : v77) & 0xffffffff;
    goto lab_0x408ff2;
  lab_0x409165:
    // 0x409165
    *a4 = v33;
    // 0x408ff5
    return (v30 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x409137:
    // 0x409137
    v41 = -1;
    v40 = 1;
    v55 = v61;
    goto lab_0x409108;
  lab_0x4091c4:
    // 0x4091c4
    v41 = v66;
    v40 = (v68 | v29) & 0xffffffff;
    v55 = v67;
    goto lab_0x409108;
}
// Address range: 0x4094c0 - 0x40954a
int64_t function_4094c0(int64_t a1, int64_t a2) {
    char v1 = a1;
    if (v1 == 0) {
        // 0x4094f8
        return 0;
    }
    if (v1 == 37) {
        // 0x4094cf
        if (*(char *)(a1 + 1) == 115) {
            int64_t result = 1; // 0x4094ec
            int64_t v2 = 2 * result + a1;
            char v3 = *(char *)v2; // 0x4094f0
            while (v3 != 0) {
                if (v3 != 37) {
                    goto lab_0x409508_2;
                }
                // 0x4094e5
                if (*(char *)(v2 + 1) != 115) {
                    goto lab_0x409508_2;
                }
                result++;
                v2 = 2 * result + a1;
                v3 = *(char *)v2;
            }
            // 0x4094f8
            return result;
        }
    }
  lab_0x409508_2:;
    // 0x409508
    int64_t result2; // bp-16, 0x4094c0
    if ((int32_t)function_40a600(&result2, a1, a2) >= 0) {
        // 0x40951c
        return result2;
    }
    // 0x409530
    if (*__errno_location() != 12) {
        // 0x4094f8
        return 0;
    }
    // 0x409545
    function_408f10((int64_t)&result2);
    // UNREACHABLE
}
// Address range: 0x409550 - 0x4095cb
int64_t function_409550(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x409557
    if (fileno(stream) < 0) {
        // 0x4095b7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40956a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40959b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4095b7
            return fclose(stream);
        }
    }
    // 0x40956c
    if ((int32_t)function_409710(a1, v1) == 0) {
        // 0x4095b7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x409578
    int32_t v3 = *v2; // 0x409580
    int64_t result = fclose(stream); // 0x40958e
    if (v3 != 0) {
        // 0x4095c0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x409590
    return result;
}
// Address range: 0x4095d0 - 0x409705
int64_t function_4095d0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x409600
    if (cmd != 1030) {
        // 0x4096b0
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40960c
    int64_t v2; // 0x4095d0
    if (g115 < 0) {
        int64_t v3 = function_4095d0(fd, 0, v1, a4); // 0x409654
        int64_t v4 = v3 & 0xffffffff; // 0x409659
        if ((int32_t)v3 < 0) {
            // 0x409640
            return v4 & 0xffffffff;
        }
        // 0x40965f
        v2 = v4;
        if (g115 != -1) {
            // 0x409640
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x409627
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x409636
            g115 = 1;
            // 0x409640
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_4095d0(fd & 0xffffffff, 0, v1, a4); // 0x4096e7
        int64_t v7 = v6 & 0xffffffff; // 0x4096ec
        if ((int32_t)v6 < 0) {
            // 0x409640
            return v7 & 0xffffffff;
        }
        // 0x4096f6
        g115 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40966f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40967a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x409640
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x409692
    close(fd2);
    // 0x409640
    return 0xffffffff;
}
// Address range: 0x409710 - 0x409750
int64_t function_409710(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40972a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40972a
        return fflush(stream);
    }
    // 0x409738
    function_409750(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409750 - 0x4097a7
int64_t function_409750(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409750
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40975a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40978b
    int64_t result = -1; // 0x409794
    if (v1 != -1) {
        // 0x409796
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4097a2
    return result;
}
// Address range: 0x4097b0 - 0x40988f
int64_t function_4097b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4097bc
    uint32_t v2 = *v1; // 0x4097bc
    int64_t v3 = a2 & 0xffffffff; // 0x4097c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4097c4
    uint64_t v5 = (int64_t)*v4; // 0x4097c4
    int64_t v6; // 0x409832
    if (v3 <= v5) {
      lab_0x40982c_2:
        // 0x40982c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4097b2
    int64_t v8 = v2; // 0x4097b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40982c
        goto lab_0x40982c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4097e8
    int64_t v17; // 0x4097f6
    int64_t * v18; // 0x409810
    int64_t * v19; // 0x409813
    int64_t v20; // 0x40981e
    int64_t v21; // 0x4097f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4097f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x409810
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x409827
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40982c
            goto lab_0x40982c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40982c
            goto lab_0x40982c_2;
        }
        // 0x4097e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40986b
    int64_t * v23 = (int64_t *)v22; // 0x409870
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x409873
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x409870
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x409887
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4097dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40982c
            goto lab_0x40982c_2;
        }
        // 0x4097e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4097f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x409810
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x409827
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40982c
                goto lab_0x40982c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40982c
                goto lab_0x40982c_2;
            }
            // 0x4097e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x409850
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x409870
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x409887
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40982c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x409890 - 0x409eac
int64_t function_409890(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4098af
    int64_t v2 = *v1; // 0x4098af
    char * str2 = (char *)v2; // 0x4098bc
    char c = *str2; // 0x4098bc
    int64_t v3 = v2; // 0x4098e8
    int64_t v4 = 0; // 0x409890
    int32_t v5; // 0x409890
    int64_t v6; // 0x409890
    int64_t v7; // 0x409890
    int64_t v8; // 0x409890
    int64_t v9; // 0x409890
    int64_t v10; // 0x409890
    int64_t v11; // 0x409890
    int64_t v12; // 0x409890
    int64_t v13; // 0x409890
    int64_t str3; // 0x409890
    int64_t v14; // 0x409890
    int64_t v15; // 0x409890
    int64_t v16; // 0x409890
    int64_t v17; // 0x409890
    int32_t v18; // 0x409890
    int32_t v19; // 0x409890
    int32_t v20; // 0x409890
    int32_t v21; // 0x409890
    int32_t v22; // 0x409890
    int32_t v23; // 0x409890
    int32_t v24; // 0x409890
    int32_t v25; // 0x409890
    int32_t v26; // 0x409890
    int32_t v27; // 0x409890
    int32_t v28; // 0x409890
    int32_t v29; // 0x409890
    int64_t nmemb; // 0x409890
    int64_t v30; // 0x409890
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4098ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4098e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4098f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4098fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4098c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40992c
                int64_t v34; // 0x409890
                int64_t v35; // 0x409890
                if (strncmp(str, str2, n) == 0) {
                    // 0x409935
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x409ab0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x409946
                int64_t v37 = *(int64_t *)v36; // 0x40994a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x409920
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x409935
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x409ab0;
                        }
                    }
                    // 0x409946
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
                  lab_0x409996:
                    // 0x409996
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
                        goto lab_0x4099f0;
                    } else {
                        if (v11 == 0) {
                            // 0x409b60
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4099f0;
                        } else {
                            if (v39 == 0) {
                                // 0x409b10
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4099ba;
                                } else {
                                    // 0x409b1c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4099ba;
                                    } else {
                                        // 0x409b2a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4099ba;
                                        } else {
                                            goto lab_0x4099f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4099ba;
                            }
                        }
                    }
                }
              lab_0x409a01:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x409bd6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x409d82
                            flockfile(g45);
                            int64_t v41 = *v1; // 0x409da2
                            __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x409def
                            int64_t v43 = (int64_t)g45;
                            int64_t v44 = v43; // 0x409e09
                            int64_t v45; // 0x409e0b
                            if (*(char *)v42 != 0) {
                                // 0x409e0b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g45;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x409e03
                            while (v17 + nmemb != v42) {
                                // 0x409e05
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x409e0b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g45;
                                }
                                // 0x409df8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x409e30
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g45);
                            v40 = *v1;
                        } else {
                            // 0x409be4
                            __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x409d3f
                        free((int64_t *)v17);
                    }
                    // 0x409c39
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x409c50
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x409afe
                    return 63;
                }
                // 0x409a20
                v5 = v39;
                if (v13 != 0) {
                    // 0x409aa4
                    v35 = v13;
                    v34 = v25;
                  lab_0x409ab0:;
                    int32_t * v49 = (int32_t *)a7; // 0x409ac0
                    uint32_t v50 = *v49; // 0x409ac0
                    int64_t v51 = v50; // 0x409ac0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x409aca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x409ad3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x409cff
                                __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x409caa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x409afe
                            return 63;
                        }
                        // 0x409b48
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x409e5f
                                    __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x409d5d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x409d70
                                // 0x409afe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x409c6e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x409c82
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x409aeb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x409aee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x409af2
                    int64_t result = v59; // 0x409af8
                    if (v58 != 0) {
                        // 0x409afa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x409afe
                    return result;
                }
            } else {
                // 0x4098fe
                v5 = v32;
            }
            // break -> 0x409a25
            break;
        }
    }
    // 0x409a25
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x409a3d
        if (*(char *)(v60 + 1) != 45) {
            // 0x409a47
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x409afe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x409b89
        __fprintf_chk(g45, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x409a76
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x409a86
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4099f0:
    // 0x4099f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4099f0
    int64_t v63 = *(int64_t *)v62; // 0x4099f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x409a01
        goto lab_0x409a01;
    }
    goto lab_0x409996;
  lab_0x4099ba:
    // 0x4099ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x409890
    int32_t v65; // 0x409890
    int32_t v66; // 0x409890
    if (v27 != 0) {
        goto lab_0x4099f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x409b70
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4099f0;
            } else {
                goto lab_0x4099e1;
            }
        } else {
            // 0x4099d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x409ccc
                int64_t v67 = (int64_t)mem; // 0x409ccc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4099f0;
                } else {
                    // 0x409cdf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4099e1;
                }
            } else {
                goto lab_0x4099e1;
            }
        }
    }
  lab_0x4099e1:
    // 0x4099e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4099f0;
}
// Address range: 0x409eb0 - 0x40a476
int64_t function_409eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409ed1
    if (v3 < 1) {
        // 0x40a08e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x409ecd
    int32_t v5 = *(int32_t *)a7; // 0x409ed9
    uint64_t v6 = a1 & 0xffffffff; // 0x409edb
    int64_t v7 = v2; // 0x409ee0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x409ee3
    *v8 = 0;
    int64_t v9; // 0x409eb0
    int64_t v10; // 0x409eb0
    int64_t v11; // 0x409eb0
    int64_t v12; // 0x409eb0
    int64_t str; // 0x409eb0
    int64_t v13; // 0x409eb0
    int64_t v14; // 0x409eb0
    int64_t v15; // 0x409eb0
    int64_t v16; // 0x409eb0
    int64_t v17; // 0x409eb0
    int32_t v18; // 0x409eb0
    char v19; // 0x409eb0
    if (v5 == 0) {
        // 0x40a0c8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x409efa;
    } else {
        // 0x409ef3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x409f40
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x409f43
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40a008;
            } else {
                int64_t v22 = v7 + 1; // 0x409f56
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x409f66
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40a01c;
                } else {
                    goto lab_0x409f78;
                }
            }
        } else {
            goto lab_0x409efa;
        }
    }
  lab_0x409efa:
    // 0x409efa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x409f00
    *v24 = 0;
    int64_t v25; // 0x409eb0
    int64_t v26; // 0x409eb0
    int64_t v27; // 0x409eb0
    switch (*(char *)&v2) {
        case 45: {
            // 0x409ff0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x409ffd;
        }
        case 43: {
            // 0x40a300
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x409ffd;
        }
        default: {
            // 0x409f1c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40a27f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40a398
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x409ffd;
                } else {
                    // 0x40a28d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x409f2a;
                }
            } else {
                goto lab_0x409f2a;
            }
        }
    }
  lab_0x40a008:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40a00f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409f78;
    } else {
        goto lab_0x40a01c;
    }
  lab_0x409f2a:
    // 0x409f2a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x409ffd;
  lab_0x409ffd:
    // 0x409ffd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40a008;
  lab_0x409f78:;
    uint32_t v30 = *(int32_t *)a7; // 0x409f78
    int64_t v31 = v30; // 0x409f78
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x409f7a
    if ((int64_t)*v32 > v31) {
        // 0x409f7f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409f82
    if (*v33 > v30) {
        // 0x409f87
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x409f8a
    int64_t v35 = v31; // 0x409f8e
    int64_t v36 = v15; // 0x409f8e
    int64_t v37; // 0x409eb0
    int64_t v38; // 0x409eb0
    int64_t v39; // 0x409eb0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40a0f8
        int64_t v41 = v40; // 0x40a0f8
        v2 = v41;
        int64_t v42; // 0x409eb0
        if (*v33 == v40) {
            // 0x40a2e0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a2e8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40a104
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a108
                function_4097b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40a118
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40a121
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40a12a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40a141
            int64_t v47 = v45 & 0xffffffff; // 0x40a145
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40a14e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40a154
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40a156;
                }
            }
            int64_t v48 = v47 + 1; // 0x40a130
            int64_t v49 = v48 & 0xffffffff; // 0x40a130
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40a141
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40a14e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40a154
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40a156;
                    }
                }
                // 0x40a130
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40a2f8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40a156;
    } else {
        goto lab_0x409f94;
    }
  lab_0x40a01c:
    // 0x40a01c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40a01f
    int64_t v51 = v12; // 0x40a01f
    int64_t v52 = v14; // 0x40a01f
    if (*(char *)v10 == 0) {
        goto lab_0x409f78;
    } else {
        goto lab_0x40a025;
    }
  lab_0x409f94:;
    int32_t v53 = v35; // 0x409f94
    int64_t v54; // 0x409eb0
    int64_t v55; // 0x409eb0
    int64_t v56; // 0x409eb0
    int64_t v57; // 0x409eb0
    int64_t v58; // 0x409eb0
    int64_t v59; // 0x409eb0
    char * v60; // 0x409eb0
    int64_t v61; // 0x409eb0
    int64_t v62; // 0x409fa9
    int64_t v63; // 0x409eb0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40a0e3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40a0e6;
    } else {
        // 0x409f9c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409eb0
        int64_t v66 = v65 ? -1 : 1; // 0x409fb0
        int64_t v67 = (int64_t)"--"; // 0x409eb0
        int64_t v68 = v62; // 0x409eb0
        int64_t v69 = 3; // 0x409fb0
        unsigned char v70 = *(char *)v68; // 0x409fb0
        char v71 = *(char *)v67; // 0x409fb0
        char v72 = v71; // 0x409fb0
        bool v73 = false; // 0x409fb0
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
            // 0x40a0a0
            if (*(char *)v62 == 45) {
                // 0x40a160
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40a160
                if (c == 0) {
                    goto lab_0x40a0aa;
                } else {
                    // 0x40a16d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40a1f0;
                    } else {
                        if (c == 45) {
                            // 0x40a3d3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40a245;
                        } else {
                            // 0x40a17e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40a1f0;
                            } else {
                                // 0x40a183
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40a1a4;
                                } else {
                                    // 0x40a18a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40a1f0;
                                    } else {
                                        goto lab_0x40a1a4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40a0aa;
            }
        } else {
            uint32_t v75 = *v33; // 0x409fc0
            v2 = v75;
            int32_t v76 = *v32; // 0x409fc3
            int64_t v77 = v35 + 1; // 0x409fc6
            int32_t v78 = v77; // 0x409fc9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40a330
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409fd7
                    function_4097b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409fe5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40a0e6;
        }
    }
  lab_0x40a025:;
    // 0x40a025
    int64_t v79; // bp-104, 0x409eb0
    int64_t v80 = &v79; // 0x409eba
    int64_t v81 = v50 + 1; // 0x40a025
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40a02c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40a031
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40a035
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40a039
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40a041
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40a046
    int32_t c2 = v84; // 0x40a046
    char * found_char_pos = strchr(str2, c2); // 0x40a046
    int64_t v87 = *v82; // 0x40a04b
    v2 = v87;
    int64_t v88 = *v85; // 0x40a055
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40a060
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40a350
            __fprintf_chk(g45, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40a31d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40a08e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40a046
    char v91 = *(char *)(v90 + 1); // 0x40a07b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40a035
        if (v91 != 58) {
            // 0x40a08e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40a2a4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40a3a8
                *v8 = 0;
            } else {
                // 0x40a38c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40a2ce
            *v83 = 0;
            // 0x40a08e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40a2ae
        if (v93 != 0) {
            // 0x40a340
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40a2ce
            *v83 = 0;
            // 0x40a08e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40a2c1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40a2ce
            *v83 = 0;
            // 0x40a08e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40a40a
            __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40a3ba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40a3c1
        // 0x40a2ce
        *v83 = 0;
        // 0x40a08e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40a219
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40a21b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40a440
                __fprintf_chk(g45, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40a3f1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40a3f8
            // 0x40a08e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40a226
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40a22a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40a245;
  lab_0x40a156:
    // 0x40a156
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409f94;
  lab_0x40a245:;
    int64_t v99 = function_409890(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40a263
    // 0x40a08e
    return v99 & 0xffffffff;
  lab_0x40a0e6:;
    int32_t v100 = v55; // 0x40a0e6
    if (v100 != (int32_t)v59) {
        // 0x40a0ea
        *(int32_t *)a7 = v100;
    }
    // 0x40a08e
    return 0xffffffff;
  lab_0x40a0aa:
    // 0x40a0aa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40a0b1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40a08e
    return v99 & 0xffffffff;
  lab_0x40a1f0:
    // 0x40a1f0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40a025;
  lab_0x40a1a4:
    // 0x40a1a4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_409890(v6, a2, str, a4, a5, v57, v1, v11, &g18); // 0x40a1ca
    if ((int32_t)v101 != -1) {
        // 0x40a08e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40a1df
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40a1f0;
}
// Address range: 0x40a480 - 0x40a4d6
int64_t function_40a480(int64_t a1) {
    // 0x40a480
    *(int32_t *)&g116 = g41;
    *(int32_t *)&g117 = g40;
    int64_t v1; // 0x40a480
    int64_t result = function_409eb0(v1, v1, v1, v1, v1, v1, &g116, a1 & 0xffffffff); // 0x40a4a6
    g41 = *(int32_t *)&g116;
    g121 = g119;
    *(int32_t *)&g39 = g118;
    return result;
}
// Address range: 0x40a4e0 - 0x40a4f8
int64_t function_40a4e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a4e0
    return function_40a480(1);
}
// Address range: 0x40a500 - 0x40a513
int64_t function_40a500(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x40a500
    return function_40a480(0);
}
// Address range: 0x40a520 - 0x40a535
int64_t function_40a520(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a520
    return function_409eb0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40a540 - 0x40a556
int64_t function_40a540(void) {
    // 0x40a540
    return function_40a480(0);
}
// Address range: 0x40a560 - 0x40a578
int64_t function_40a560(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a560
    return function_409eb0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40a580 - 0x40a5fa
int64_t function_40a580(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40a58b
    int64_t v2 = (int64_t)&g19; // 0x40a58b
    int32_t * pwc; // 0x40a580
    int64_t v3; // 0x40a580
    int64_t n; // 0x40a580
    if (a2 == 0) {
        goto lab_0x40a5d2;
    } else {
        // 0x40a58d
        if (a3 == 0) {
            // 0x40a5b8
            return -2;
        }
        // 0x40a599
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40a5d2;
        } else {
            goto lab_0x40a5a4;
        }
    }
  lab_0x40a5d2:
    // 0x40a5d2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40a580
    pwc = (int32_t *)&v4;
    goto lab_0x40a5a4;
  lab_0x40a5a4:;
    char * wstr = (char *)v3; // 0x40a5aa
    int64_t ps; // 0x40a580
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40a5aa
    int64_t result = v5; // 0x40a5aa
    if (v5 < 0xfffffffe) {
        // 0x40a5b8
        return result;
    }
    int64_t result2 = result; // 0x40a5e9
    if ((char)function_40a9f0(0, v3) == 0) {
        // 0x40a5eb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40a5b8
    return result2;
}
// Address range: 0x40a600 - 0x40a659
int64_t function_40a600(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x40a600
    int32_t v1; // bp-16, 0x40a600
    int64_t v2; // 0x40a600
    int64_t v3 = function_40afc0(0, (int64_t *)&v1, a2, a3, v2, v2, v2, (int64_t)&g128); // 0x40a615
    if (v3 == 0) {
        // 0x40a632
        return 0xffffffff;
    }
    // 0x40a61f
    int64_t result; // 0x40a600
    if (v1 > -1) {
        // 0x40a62d
        *a1 = v3;
        result = v1;
    } else {
        // 0x40a638
        free((int64_t *)v3);
        *__errno_location() = 75;
        result = 0xffffffff;
    }
    // 0x40a632
    return result;
}
// Address range: 0x40a660 - 0x40a66a
int64_t function_40a660(void) {
    // 0x40a660
    return function_405460(1);
}
// Address range: 0x40a670 - 0x40a786
int64_t function_40a670(int64_t a1, char ** a2, int64_t * a3, int64_t n) {
    char * str = (char *)a1; // 0x40a691
    int32_t len = strlen(str); // 0x40a691
    if (a2 == NULL) {
        // 0x40a75d
        return -1;
    }
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = -1;
    int64_t * str3 = (int64_t *)(v3 * n + v1);
    int32_t v4 = 0;
    int64_t v5 = 0; // 0x40a6f7
    int64_t v6 = v1; // 0x40a670
    int64_t v7 = v2; // 0x40a6fe
    int64_t str4; // 0x40a670
    int64_t v8; // 0x40a670
    int32_t v9; // 0x40a670
    int32_t v10; // 0x40a670
    int32_t v11; // 0x40a670
    int64_t v12; // 0x40a670
    int64_t result; // 0x40a670
    int32_t v13; // 0x40a6f3
    char * str2; // 0x40a712
    while (true) {
        // 0x40a707
        str4 = v6;
        v8 = v5;
        v10 = v4;
        str2 = (char *)v7;
        v9 = v10;
        if (strncmp(str2, str, len) == 0) {
            // 0x40a71b
            result = v8;
            if (len == strlen(str2)) {
                // 0x40a75d
                return result;
            }
            if (v3 == -1) {
                // break -> 0x40a72f
                break;
            }
            // 0x40a6c0
            v9 = 1;
            if (a3 != NULL) {
                // 0x40a6ce
                v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                v9 = v13;
            }
        }
        // 0x40a6f7
        v4 = v9;
        v5 = v8 + 1;
        v7 = *(int64_t *)(8 * v5 + v2);
        v6 = str4 + n;
        v12 = v3;
        v11 = v4;
        if (v7 == 0) {
            return (char)v11 == 0 ? v12 : -2;
        }
    }
    int64_t v14 = v8 + 1; // 0x40a733
    int64_t v15 = *(int64_t *)(8 * v14 + v2); // 0x40a73a
    v12 = v8;
    v11 = v10;
    while (v15 != 0) {
        // 0x40a707
        v3 = v8;
        str3 = (int64_t *)(v3 * n + v1);
        v4 = v10;
        v5 = v14;
        v6 = str4 + n;
        v7 = v15;
        while (true) {
            // 0x40a707
            str4 = v6;
            v8 = v5;
            v10 = v4;
            str2 = (char *)v7;
            v9 = v10;
            if (strncmp(str2, str, len) == 0) {
                // 0x40a71b
                result = v8;
                if (len == strlen(str2)) {
                    // 0x40a75d
                    return result;
                }
                if (v3 == -1) {
                    // break -> 0x40a72f
                    break;
                }
                // 0x40a6c0
                v9 = 1;
                if (a3 != NULL) {
                    // 0x40a6ce
                    v13 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v10 >> 24;
                    v9 = v13;
                }
            }
            // 0x40a6f7
            v4 = v9;
            v5 = v8 + 1;
            v7 = *(int64_t *)(8 * v5 + v2);
            v6 = str4 + n;
            v12 = v3;
            v11 = v4;
            if (v7 == 0) {
                return (char)v11 == 0 ? v12 : -2;
            }
        }
        // 0x40a72f
        v14 = v8 + 1;
        v15 = *(int64_t *)(8 * v14 + v2);
        v12 = v8;
        v11 = v10;
    }
  lab_0x40a748:
    // 0x40a75d
    return (char)v11 == 0 ? v12 : -2;
}
// Address range: 0x40a790 - 0x40a801
int64_t function_40a790(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a790
    char * format; // 0x40a790
    if (a3 == -1) {
        // 0x40a7f0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x40a7a5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x40a7b4
    int64_t v1; // 0x40a790
    function_408610(1, (char *)a1, 5, v1);
    function_408300(0, 8, a2);
    error(0, 0, format);
    return &g128;
}
// Address range: 0x40a810 - 0x40a928
int64_t function_40a810(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40a83d
    fputs_unlocked(v1, g45);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x40a8b0
        int64_t v5; // 0x40a8b7
        int64_t v6; // 0x40a8d7
        while (v3 != 0) {
            // 0x40a89b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x40a860
                break;
            }
            // 0x40a8ad
            v4 = v3 + 1;
            v5 = function_408630(v2);
            __fprintf_chk(g45, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x40a8e0
                goto lab_0x40a8e0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x40a863
        int64_t v8 = function_408630(v2); // 0x40a86d
        __fprintf_chk(g45, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40a88d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40a89b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x40a860
                    break;
                }
                // 0x40a8ad
                v4 = v3 + 1;
                v5 = function_408630(v2);
                __fprintf_chk(g45, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x40a8e0
                    goto lab_0x40a8e0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x40a860
            v7 = v3 + 1;
            v8 = function_408630(v2);
            __fprintf_chk(g45, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x40a8e0:;
    int64_t v10 = (int64_t)g45; // 0x40a8e0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x40a8e7
    uint64_t result = *v11; // 0x40a8e7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x40a910
        return __overflow(g45, 10);
    }
    // 0x40a8f1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x40a930 - 0x40a9a0
int64_t function_40a930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = function_40a670(a2, (char **)a3, (int64_t *)a4, a5); // 0x40a95c
    int64_t result = v1; // 0x40a964
    if (v1 < 0) {
        // 0x40a978
        function_40a790(a1, a2, v1);
        function_40a810(a3, a4, a5);
        result = -1;
    }
    // 0x40a966
    return result;
}
// Address range: 0x40a9a0 - 0x40a9ed
int64_t function_40a9a0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x40a9a0
    if (result == 0) {
        // 0x40a9e1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x40a9d8
    int32_t n = a4; // 0x40a9d8
    int64_t v1 = result; // 0x40a9df
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x40a9e1
        return result;
    }
    int64_t str3 = str2; // 0x40a9df
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x40a9c0
    int64_t result2 = 0; // 0x40a9cd
    while (v2 != 0) {
        // 0x40a9cf
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x40a9e1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x40a9e1
    return result2;
}
// Address range: 0x40a9f0 - 0x40aa4e
int64_t function_40a9f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40a9f6
    if (locale == NULL) {
        // 0x40aa23
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40a9f6
    bool v2; // 0x40a9f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g20; // 0x40a9f0
    int64_t v5 = v1; // 0x40a9f0
    int64_t v6 = 2; // 0x40aa15
    unsigned char v7 = *(char *)v5; // 0x40aa15
    char v8 = *(char *)v4; // 0x40aa15
    char v9 = v8; // 0x40aa15
    bool v10 = false; // 0x40aa15
    while (v7 == v8) {
        // 0x40aa08
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40aa21
    int64_t v13 = v1; // 0x40aa21
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40aa23
        return 0;
    }
    int64_t v14 = 6; // 0x40aa21
    unsigned char v15 = *(char *)v13; // 0x40aa3d
    char v16 = *(char *)v12; // 0x40aa3d
    char v17 = v16; // 0x40aa3d
    bool v18 = false; // 0x40aa3d
    while (v15 == v16) {
        // 0x40aa30
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
// Address range: 0x40aa50 - 0x40afb2
int64_t function_40aa50(void) {
    char * v1 = nl_langinfo(14); // 0x40aa66
    char * v2 = g120; // 0x40aa6b
    char * v3; // 0x40aa50
    int64_t v4; // 0x40aa50
    int64_t v5; // 0x40aa50
    int64_t v6; // 0x40aa50
    int64_t v7; // 0x40aa50
    int32_t size; // 0x40aa50
    int32_t size2; // 0x40aa50
    int32_t len; // 0x40ab22
    int64_t v8; // 0x40ab22
    char * env_val; // 0x40ab0d
    if (v2 == NULL) {
        // 0x40ab08
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40ab75;
        } else {
            // 0x40ab1a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40ab75;
            } else {
                // 0x40ab1f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40ab0d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40afa5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40ab75;
                    } else {
                        // 0x40af19
                        size2 = len + 14;
                        goto lab_0x40ab3b;
                    }
                } else {
                    goto lab_0x40ab3b;
                }
            }
        }
    } else {
        // 0x40aa50
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40aa8a;
    }
  lab_0x40adbc:;
    // 0x40adbc
    int64_t v10; // 0x40aa50
    int64_t v11 = v10;
    int64_t v12; // 0x40aa50
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x40abfb
    int32_t v14 = __uflow(stream); // 0x40adbf
    int64_t v15 = v13; // 0x40adc9
    int32_t v16 = v14; // 0x40adc9
    int64_t v17 = v11; // 0x40adc9
    int64_t v18 = v13; // 0x40adc9
    int64_t v19 = v11; // 0x40adc9
    if (v14 == -1) {
        // break -> 0x40adcf
        goto lab_0x40adcf;
    }
    goto lab_0x40ac49;
  lab_0x40ac3e:;
    // 0x40ac3e
    int64_t v116; // 0x40aa50
    int64_t v137 = v116;
    int64_t v115; // 0x40aa50
    int64_t v138 = v115;
    int64_t v114; // 0x40aa50
    int64_t v139 = v114;
    int64_t * v30; // 0x40ac30
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x40ac46
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x40ac49;
  lab_0x40ac49:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x40aa50
    int32_t v23; // bp-120, 0x40aa50
    int32_t v24; // bp-184, 0x40aa50
    int64_t v25; // 0x40aa50
    int64_t v26; // 0x40ac18
    int64_t v27; // 0x40ac1d
    int64_t * v28; // 0x40ac34
    switch (c) {
        case 32: {
            // 0x40ac30
            v25 = v21;
            v22 = v20;
            goto lab_0x40ac30_2;
        }
        case 10: {
            // 0x40ac30
            v25 = v21;
            v22 = v20;
            goto lab_0x40ac30_2;
        }
        case 9: {
            // 0x40ac30
            v25 = v21;
            v22 = v20;
            goto lab_0x40ac30_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x40ae21
            uint64_t v31 = *v28; // 0x40ae25
            int32_t v32; // 0x40aa50
            char v33; // 0x40aa50
            unsigned char v34; // 0x40ae08
            int32_t v35; // 0x40ae2e
            if (v29 < v31) {
                // 0x40ae00
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x40ae2b
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x40ae21
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x40ae00
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x40ae2b
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x40ae10
                v36 = v33;
                v37 = v32;
            }
            // 0x40aeff
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x40adcf
                break;
            }
            // 0x40ac30
            v25 = v21;
            v22 = v20;
            goto lab_0x40ac30_2;
        }
        default: {
            // 0x40ac5f
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x40ac77
            int64_t v38 = v27; // 0x40ac7f
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x40adcf
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x40ac88
            int64_t v41 = v39 + 4; // 0x40ac8a
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x40ac96
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x40ac98
            v38 = v41;
            while (v43 == 0) {
                // 0x40ac88
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x40aca9
            int64_t v45 = v39 + 6; // 0x40acac
            unsigned char v46 = (char)v44; // 0x40acb6
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x40acbb
            int64_t v48 = v26; // 0x40acbf
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x40acc2
            int64_t v51 = v49 + 4; // 0x40acc4
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x40acd0
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x40acd2
            v48 = v51;
            while (v53 == 0) {
                // 0x40acc2
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x40acb0
            int64_t v55 = v54 - v47 - v27; // 0x40acbf
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x40ace8
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x40acef
            unsigned char v58 = (char)v56; // 0x40acf5
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x40acf8
            int64_t v60 = v57 - v59 - v26; // 0x40acfc
            int64_t v61 = v60 + v55; // 0x40ad05
            int64_t * v62; // 0x40aa50
            int64_t v63; // 0x40aa50
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x40ae3b
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x40ae50
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x40ad21
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x40af5c
                free((int64_t *)v20);
                goto lab_0x40abd4;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x40ad48
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x40ad52
            uint32_t v72 = (int32_t)v69; // 0x40ad55
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x40ae64
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x40ae6d
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x40ae7e
                int64_t v77 = v71 - v76; // 0x40ae82
                uint32_t v78 = (int32_t)(v77 + v69); // 0x40ae8d
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x40ae87
                    uint32_t v80 = v78 & -8; // 0x40aea9
                    int64_t v81 = 0; // 0x40aa50
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40ae9e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x40aea1
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40ae9b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x40af2f
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x40af37
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x40ad6b
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x40af82
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x40ad7b
            int64_t v92 = v70 - 1; // 0x40ad7f
            uint32_t v93 = (int32_t)v91; // 0x40ad84
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x40aeb2
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40aebe
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x40aecc
                int64_t v98 = v92 - v97; // 0x40aed0
                uint32_t v99 = (int32_t)(v98 + v91); // 0x40aedb
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x40aed5
                    uint32_t v101 = v99 & -8; // 0x40aef6
                    int64_t v102 = 0; // 0x40aa50
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x40aeeb
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x40aeee
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x40aee9
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x40af46
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x40af4e
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x40ad9a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x40af95
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x40adae
            uint64_t v113 = *v28; // 0x40adb2
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x40ac3e;
            } else {
                goto lab_0x40adbc;
            }
        }
    }
  lab_0x40ab75:;
    int64_t * mem3 = malloc(size); // 0x40ab75
    int64_t v117 = (int64_t)&g19; // 0x40ab80
    int64_t v118; // 0x40aa50
    int64_t path; // 0x40aa50
    if (mem3 == NULL) {
        goto lab_0x40ab52;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x40ab75
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x40ab96;
    }
  lab_0x40aa8a:;
    int64_t str = v1 == NULL ? (int64_t)&g19 : (int64_t)v1; // 0x40aa7d
    char v120 = *v3; // 0x40aa8a
    int64_t v121; // 0x40aa50
    if (v120 == 0) {
        // 0x40aae4
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x40aa50
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x40aa50
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x40aad0
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x40aad7;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x40aaa0
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40aaad
        char v127 = *(char *)v126; // 0x40aab2
        v122 = v127;
        if (v127 == 0) {
            // 0x40aae4
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x40aabb
    v124 = v123 + 1;
  lab_0x40aad7:
    // 0x40aae4
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x40ab52:;
    char * v128 = (char *)v117;
    g120 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x40aa8a;
  lab_0x40ab96:;
    int64_t v129 = v118 + path; // 0x40ab96
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x40abf1
        int32_t fd; // 0x40abc2
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40af22
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x40abfb
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x40ac30_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x40ac30
                uint64_t v134 = *v28; // 0x40ac34
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x40adbc;
                } else {
                    goto lab_0x40ac3e;
                }
            }
          lab_0x40adcf:;
            int64_t v135 = v18;
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x40abd4;
  lab_0x40ab3b:;
    int64_t * mem4 = malloc(size2); // 0x40ab3b
    v117 = (int64_t)&g19;
    if (mem4 != NULL) {
        // 0x40abe1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x40ab96;
    } else {
        goto lab_0x40ab52;
    }
  lab_0x40abd4:
    // 0x40abd4
    free((int64_t *)path);
    v117 = (int64_t)&g19;
    goto lab_0x40ab52;
}
// Address range: 0x40afc0 - 0x40cad9
int64_t function_40afc0(int32_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x40afc0
    int64_t v1; // bp-1416, 0x40afc0
    int64_t v2; // bp-1656, 0x40afc0
    if ((int32_t)function_40cd00(a3, &v1, &v2) < 0) {
        // 0x40b630
        return 0;
    }
    int64_t v3 = &v2; // 0x40afcb
    int64_t v4; // bp-1384, 0x40afc0
    int64_t v5; // bp-1640, 0x40afc0
    int64_t v6; // 0x40afc0
    if ((int32_t)function_40cae0(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40bf17
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40bf33
            free((int64_t *)v6);
        }
        // 0x40bf38
        *__errno_location() = 22;
        // 0x40b630
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40b02b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x40b033
    uint64_t v9 = v8 + v6; // 0x40b037
    int64_t v10; // 0x40afc0
    char * v11; // 0x40afc0
    int64_t v12; // 0x40afc0
    if (v9 < v8) {
        // 0x40b6e0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40b5e9;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x40b6e0
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x40b5e9;
        } else {
            uint64_t size = v9 + 6; // 0x40b047
            if (size < 4000) {
                // 0x40b190
                v12 = 0;
                int64_t v13; // bp-1784, 0x40afc0
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x40b084;
            } else {
                if (size == -1) {
                    // 0x40b6e0
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x40b5e9;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x40b068
                    if (mem == NULL) {
                        // 0x40b6e0
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x40b5e9;
                    } else {
                        // 0x40b07d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x40b084;
                    }
                }
            }
        }
    }
  lab_0x40b5b0_2:;
    // 0x40b5b0
    int64_t v14; // 0x40afc0
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x40b5b8
    int64_t v17 = v16; // 0x40b5c6
    int64_t v18 = v16; // 0x40b5c6
    int64_t v19 = v15; // 0x40b5c6
    int64_t v20; // 0x40b0a8
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x40b7d8;
    } else {
        goto lab_0x40b5d1;
    }
  lab_0x40b5e9:
    // 0x40b5e9
    if (v6 != (int64_t)&v4) {
        // 0x40b600
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40b61c
        free((int64_t *)v6);
    }
    // 0x40b621
    *(int32_t *)v10 = 12;
    // 0x40b630
    return 0;
  lab_0x40b084:;
    int64_t v21 = a1 == 0 ? 0 : v3;
    v20 = a1;
    int64_t * v22 = (int64_t *)v6; // 0x40b0bd
    int64_t v23 = *v22; // 0x40b0bd
    int64_t v24 = 0; // 0x40b0c3
    int64_t v25 = v20; // 0x40b0c3
    int64_t v26 = v21; // 0x40b0c3
    int64_t v27 = 0; // 0x40b0c3
    int64_t v28; // 0x40afc0
    int64_t v29; // 0x40afc0
    int64_t v30; // 0x40afc0
    int64_t v31; // 0x40afc0
    int64_t v32; // 0x40afc0
    int64_t v33; // 0x40afc0
    int64_t v34; // 0x40afc0
    if (v23 == a3) {
        goto lab_0x40b6d3;
    } else {
        int64_t v35 = v23 - a3; // 0x40b0c9
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40b0db;
    }
  lab_0x40b6d3:;
    int64_t v36 = v24; // 0x40b6d6
    float80_t v37; // 0x40afc0
    float80_t v38 = v37; // 0x40b6d6
    float80_t v39; // 0x40afc0
    float80_t v40 = v39; // 0x40b6d6
    int64_t v41 = v25; // 0x40b6d6
    int64_t v42 = v26; // 0x40b6d6
    int64_t v43 = v27; // 0x40b6d6
    int64_t v44; // 0x40afc0
    int64_t v45 = v44; // 0x40b6d6
    goto lab_0x40b238;
  lab_0x40b238:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x40afc0
    int64_t v51; // 0x40afc0
    int64_t v52; // 0x40afc0
    int64_t v53; // 0x40afc0
    int64_t v54; // 0x40afc0
    int64_t v55; // 0x40afc0
    int64_t v56; // 0x40afc0
    int64_t v57; // 0x40afc0
    int64_t dest_mem2; // 0x40afc0
    int64_t dest_mem3; // 0x40afc0
    int64_t v58; // 0x40afc0
    float80_t v59; // 0x40afc0
    float80_t v60; // 0x40afc0
    float80_t v61; // 0x40afc0
    float80_t v62; // 0x40afc0
    float80_t v63; // 0x40afc0
    uint64_t v64; // 0x40c366
    char * v65; // 0x40b24c
    char v66; // 0x40b24c
    int64_t v67; // 0x40b274
    uint32_t v68; // 0x40b278
    int64_t v69; // 0x40b655
    char v70; // 0x40afc0
    if (v1 == v49) {
        // 0x40c360
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40caca
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40c3c2;
            } else {
                goto lab_0x40b5b0_2;
            }
        } else {
            // 0x40c370
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40c3c2;
            } else {
                if (v47 != 0) {
                    // 0x40c98d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40b5b0_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40c993
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40c38e;
                        } else {
                            goto lab_0x40c99f;
                        }
                    }
                } else {
                    // 0x40c37e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40c38e;
                    } else {
                        goto lab_0x40c99f;
                    }
                }
            }
        }
    } else {
        // 0x40b24c
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x40b251
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40be20
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x40b5b0_2;
                } else {
                    goto lab_0x40b6b2;
                }
            } else {
                // 0x40b662
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x40b6b2;
                } else {
                    if (v47 != 0) {
                        // 0x40bf50
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x40b5b0_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40bf56
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x40b680;
                            } else {
                                goto lab_0x40bf62;
                            }
                        }
                    } else {
                        // 0x40b670
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x40b680;
                        } else {
                            goto lab_0x40bf62;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            // 0x40b269
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g124 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x40bbe0
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40b6b7;
                }
                case 19: {
                    // 0x40bbd0
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40b6b7;
                }
                case 20: {
                    // 0x40bbb8
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40b6b7;
                }
                case 21: {
                    goto lab_0x40b7a0;
                }
                case 22: {
                    goto lab_0x40b7a0;
                }
                default: {
                    // 0x40b28a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x40b730
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40b74d;
                        } else {
                            // 0x40b737
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x40b2c0;
                            } else {
                                goto lab_0x40b74d;
                            }
                        }
                    } else {
                        goto lab_0x40b2c0;
                    }
                }
            }
        }
    }
  lab_0x40b0db:;
    int64_t v75 = v34;
    float80_t v76; // 0x40afc0
    float80_t v77 = v76;
    float80_t v78; // 0x40afc0
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x40afc0
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40b0de
    int64_t v89 = v85; // 0x40b0de
    int64_t v90 = v84; // 0x40b0de
    float80_t v91 = v79; // 0x40b0de
    float80_t v92 = v77; // 0x40b0de
    int64_t v93 = v75; // 0x40b0de
    int64_t v94 = v80; // 0x40b0de
    int64_t v95 = v81; // 0x40b0de
    int64_t v96 = v82; // 0x40b0de
    int64_t v97 = v87; // 0x40b0de
    int64_t v98; // 0x40afc0
    int64_t v99; // 0x40afc0
    int64_t v100; // 0x40afc0
    int64_t v101; // 0x40afc0
    int64_t v102; // 0x40afc0
    if (v82 >= v87) {
        goto lab_0x40b229;
    } else {
        if (v82 != 0) {
            // 0x40b1c0
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x40b5b0_2;
            } else {
                int64_t v103 = 2 * v82; // 0x40b1c6
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40b1db;
                } else {
                    goto lab_0x40b1ce;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x40b104
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40b1ee;
                } else {
                    goto lab_0x40b110;
                }
            } else {
                goto lab_0x40b1ce;
            }
        }
    }
  lab_0x40b229:
    // 0x40b229
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x40b238;
  lab_0x40c3c2:
    // 0x40c3c2
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40c3ca
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40c3db
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40c3e7
    if (v12 != 0) {
        // 0x40c3f3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40c412
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40c42e
        free((int64_t *)v6);
    }
    // 0x40c433
    *a2 = v46;
    // 0x40b630
    return result;
  lab_0x40b7a0:
    // 0x40b7a0
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x40b6b7;
  lab_0x40b1ce:
    // 0x40b1ce
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        goto lab_0x40b1db;
    }
  lab_0x40b7d8:
    // 0x40b7d8
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x40b5d1;
  lab_0x40b5d1:
    if (v12 == 0) {
        // 0x40b6e0
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40b5e9;
    } else {
        // 0x40b5e1
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x40b5e9;
    }
  lab_0x40b6b2:
    // 0x40b6b2
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x40b6b7;
  lab_0x40b2c0:;
    int64_t v273 = (int64_t)v11; // 0x40b2c0
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x40b2c7
    int64_t v275 = v273 + 1; // 0x40b2cb
    *v11 = 37;
    int64_t v276 = v275; // 0x40b2d4
    if (v274 % 2 != 0) {
        // 0x40b2d6
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x40b2c7
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x40b2e7
    if ((v277 & 2) != 0) {
        // 0x40b2e9
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x40b2f3
    if ((v277 & 4) != 0) {
        // 0x40b2f5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40b2ff
    if ((v277 & 8) != 0) {
        // 0x40b301
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40b30b
    if ((v277 & 16) != 0) {
        // 0x40b30d
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x40b317
    if ((v277 & 64) != 0) {
        // 0x40b319
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x40b323
    if ((v277 & 32) != 0) {
        // 0x40b325
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40b32d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x40b331
    int64_t v293 = v290; // 0x40b338
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x40b347
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40b36a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40b36e
    int64_t v298 = v295; // 0x40b375
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x40b384
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40b27a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x40b3b0
    int64_t v272; // 0x40afc0
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x40b3b9
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x40b7b8;
        } else {
            if (v301 == 12) {
                // 0x40bf78
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x40b3e0;
            } else {
                // 0x40b3d0
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x40b7b0
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x40b7b8;
                } else {
                    goto lab_0x40b3e0;
                }
            }
        }
    } else {
        goto lab_0x40b3e0;
    }
  lab_0x40b6b7:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x40b6b7
    int64_t v111 = v55 + 88; // 0x40b6bb
    int64_t v112 = *(int64_t *)v111; // 0x40b6bf
    int64_t v113 = v49 + 1; // 0x40b6c2
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x40b0c9
        int64_t v115 = v114 + v105; // 0x40b0cf
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
            // 0x40b6f8
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
                goto lab_0x40b5b0_2;
            } else {
                goto lab_0x40b229;
            }
        } else {
            goto lab_0x40b0db;
        }
    } else {
        goto lab_0x40b6d3;
    }
  lab_0x40b1db:;
    int64_t v116 = v80 == v20; // 0x40b1e2
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x40b110;
    } else {
        goto lab_0x40b1ee;
    }
  lab_0x40b1ee:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x40afc0
    if (v102 != 0) {
        goto lab_0x40b110;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40b20a
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x40b7c5;
        } else {
            // 0x40b218
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
            goto lab_0x40b229;
        }
    }
  lab_0x40b110:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x40b127
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x40b5b0_2;
    } else {
        // 0x40b14d
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x40b175
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
        goto lab_0x40b229;
    }
  lab_0x40c38e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40c954
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x40b5b0_2;
        } else {
            // 0x40c965
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40c97a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40c3c2;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40c3b1
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x40b7c5;
        } else {
            // 0x40c3bf
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40c3c2;
        }
    }
  lab_0x40c99f:
    // 0x40c99f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        goto lab_0x40c38e;
    }
  lab_0x40b74d:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40b74d
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x40b751
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x40b755
    int64_t v123 = 0; // 0x40b75c
    int64_t v124 = v122; // 0x40b75c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x40b762
        int64_t v126 = v120; // 0x40b76a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40c6f1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40c709
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40c71b
            int64_t v131 = v128; // 0x40c724
            int64_t v132 = v130; // 0x40c724
            int64_t v133; // 0x40afc0
            int64_t v134; // 0x40c736
            if (v130 < v129) {
                // 0x40c726
                if (v121 == v128) {
                    // break -> 0x40b540
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40b52b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x40b540
                        goto lab_0x40b540;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40c6e8
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40c6f1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40c726
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x40b540
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40b52b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x40b540
                            goto lab_0x40b540;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40c6e8
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x40b774
            if (*(int32_t *)v135 != 5) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x40b780
            int64_t v137 = v136; // 0x40b780
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40b78d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x40b540:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x40b540
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x40b544
    int64_t v142; // 0x40afc0
    int64_t v143; // 0x40afc0
    int64_t v144; // 0x40afc0
    if (v140 == v141) {
        goto lab_0x40bbf0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x40b551
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40c754
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40c75d
            if (v141 == v146) {
                goto lab_0x40bc0e;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40c783
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40c78a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40c7a3
                int64_t v152 = v151; // 0x40c7ac
                int64_t v153 = v149; // 0x40c7ac
                int64_t v154; // 0x40afc0
                int64_t v155; // 0x40c7b7
                if (v151 < v150) {
                    // 0x40c7ae
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x40b5b0_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40c7ca
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x40b5b0_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40c770
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40c779
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40c7ae
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x40b5b0_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40c7ca
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x40b5b0_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40c770
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40b57c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x40b563
            if (*(int32_t *)v156 != 5) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x40b570
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x40bbf0;
            } else {
                goto lab_0x40b57c;
            }
        }
    }
  lab_0x40b3e0:
    // 0x40b3e0
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40b3ed
    int64_t v160 = 0; // 0x40b3f5
    if (v159 != -1) {
        // 0x40b3fb
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40bcec
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40b41e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40b42c
        if (*(int32_t *)v162 != 5) {
            // 0x40bcec
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40b43f
        int64_t v164; // bp-8, 0x40afc0
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x40afc0
    uint64_t v165; // 0x40b456
    if (v46 > 0xfffffffffffffffd) {
        // 0x40be88
        v14 = v48;
        if (v47 == -1) {
            // 0x40b4b4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x40b5b0_2;
    } else {
        // 0x40b460
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x40b4b4
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x40bb90
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x40b5b0_2;
            } else {
                int64_t v167 = 2 * v47; // 0x40bb96
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x40b482;
                } else {
                    goto lab_0x40bba2;
                }
            }
        } else {
            // 0x40b472
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x40b482;
            } else {
                goto lab_0x40bba2;
            }
        }
    }
  lab_0x40b680:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40bea9
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x40b5b0_2;
        } else {
            // 0x40bec1
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40bed2
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x40b6b2;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x40b6a1
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x40b7c5;
        } else {
            // 0x40b6af
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x40b6b2;
        }
    }
  lab_0x40bf62:
    // 0x40bf62
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        goto lab_0x40b680;
    }
  lab_0x40bbf0:
    // 0x40bbf0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40bc0e;
  lab_0x40b7b8:
    // 0x40b7b8
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x40b3e0;
  lab_0x40b7c5:
    // 0x40b7c5
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x40b7d8;
  lab_0x40bc0e:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x40bc14
    v14 = v48;
    int64_t v170; // 0x40afc0
    int64_t v171; // 0x40afc0
    int64_t * v172; // 0x40afc0
    int64_t v173; // 0x40afc0
    int64_t v174; // bp-760, 0x40afc0
    uint64_t size5; // 0x40bc18
    if (v169 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        // 0x40bc29
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x40bc89;
        } else {
            // 0x40bc35
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x40b5b0_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40bc5d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x40b5b0_2;
                } else {
                    goto lab_0x40bc89;
                }
            }
        }
    }
  lab_0x40b57c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40bc0e;
    } else {
        // 0x40b585
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40bc0e;
        } else {
            goto lab_0x40b5b0_2;
        }
    }
  lab_0x40b482:
    // 0x40b482
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40be49
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40be64
            if (v48 == v20 && v46 != 0) {
                // 0x40be72
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x40b4b4
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x40b4a3
        v14 = v48;
        if (mem11 != NULL) {
            // 0x40b4b4
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x40b5b0_2;
  lab_0x40bba2:
    // 0x40bba2
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        goto lab_0x40b482;
    }
  lab_0x40bc89:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x40afc0
    int64_t v181; // 0x40afc0
    int64_t v182; // 0x40afc0
    int64_t v183; // 0x40afc0
    int64_t v184; // 0x40afc0
    int64_t v185; // 0x40afc0
    int64_t v186; // 0x40afc0
    int64_t v187; // 0x40afc0
    int64_t v188; // 0x40afc0
    int64_t v189; // 0x40afc0
    int64_t v190; // 0x40afc0
    int64_t v191; // 0x40afc0
    int64_t v192; // 0x40afc0
    int64_t v193; // 0x40afc0
    float80_t v194; // 0x40afc0
    float80_t v195; // 0x40afc0
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40c802
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40c810
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
            // 0x40c93d
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
        goto lab_0x40c149;
    } else {
        // 0x40bc91
        int64_t v198; // 0x40afc0
        float80_t v199; // 0x40afc0
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40c451
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40c45e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40c2ba
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40bcbf
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x40bcc8
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40bcec
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40c836
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40c836
                            v181 = v187 + 3;
                            goto lab_0x40c9b1;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40c9b1;
                            } else {
                                goto lab_0x40c872;
                            }
                        }
                    } else {
                        // 0x40c543
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40c137;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40c551
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40ca9a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40c598
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40c5ab
                                int64_t v207 = v176 & 0xffffffff; // 0x40c5ae
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40c5bc
                                int64_t v209 = v187 + 1; // 0x40c5d9
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40c5ee
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40c5fb
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40c149;
                        }
                    }
                } else {
                    // 0x40c2e8
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40c2e8
                        v180 = v187 + 1;
                        goto lab_0x40c897;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40c897;
                        } else {
                            goto lab_0x40c308;
                        }
                    }
                }
            } else {
                // 0x40c120
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40c137;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40c66c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40c67d
                    char v215 = *v213; // 0x40c684
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40c6c0
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40c6cd
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40c695
                        v182 = v218;
                        int64_t v219; // 0x40c687
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40c149;
                }
            }
        } else {
            float80_t v220; // 0x40afc0
            if (v220 != 0.0L) {
                // 0x40bcec
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40c33b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40c34a
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
                // 0x40c623
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
            goto lab_0x40c149;
        }
    }
  lab_0x40c149:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40c14c
    int64_t v229 = v228; // 0x40c152
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40c154
        int64_t v232 = v231 + v224; // 0x40c157
        int64_t v233 = v232 - v225; // 0x40c15e
        if ((v230 & 2) != 0) {
            // 0x40c603
            v229 = v233;
            int64_t v234 = v224; // 0x40c606
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40c610
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40c610
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40c475
                int64_t v238 = v224; // 0x40c47b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40c489
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40c480
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40c495
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40c4a8
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
                int64_t v243 = v224; // 0x40c181
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40c1a1
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40c198
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40c1aa
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40c1b8
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
        // 0x40bcec
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40c1e8
    int64_t dest_mem5 = v48; // 0x40c1f5
    int64_t v250 = v248; // 0x40c1f5
    int64_t v251 = v47; // 0x40c1f5
    int64_t v252; // 0x40afc0
    if (v47 - v46 > v248) {
        goto lab_0x40c270;
    } else {
        if (v249 < v46) {
            // 0x40c442
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x40b5b0_2;
            } else {
                goto lab_0x40c270;
            }
        } else {
            // 0x40c200
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40c270;
            } else {
                if (v47 != 0) {
                    // 0x40c7d8
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40b5b0_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40c7de
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40c21e;
                        } else {
                            goto lab_0x40c7ea;
                        }
                    }
                } else {
                    // 0x40c20e
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40c21e;
                    } else {
                        goto lab_0x40c7ea;
                    }
                }
            }
        }
    }
  lab_0x40c270:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40c281
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40c29d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x40b6b7;
  lab_0x40c137:
    // 0x40c137
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40c149;
  lab_0x40c897:;
    char * v257 = nl_langinfo(0x10000); // 0x40c8ca
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40c8db
    char v259 = *v257; // 0x40c8e2
    int64_t v260 = v176 & 0xffffffff; // 0x40c8e5
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40c8f3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40c920
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40c92d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40c308;
  lab_0x40c308:
    // 0x40c308
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
    goto lab_0x40c149;
  lab_0x40c21e:
    // 0x40c21e
    if (v48 == 0 || v48 == v20) {
        // 0x40c4bb
        int64_t size7; // 0x40afc0
        int64_t * mem12 = malloc((int32_t)size7); // 0x40c4d2
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x40b5b0_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40c4de
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40c509
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40c270;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40c24d
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x40b5b0_2;
        } else {
            // 0x40c25b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40c270;
        }
    }
  lab_0x40c7ea:
    // 0x40c7ea
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x40b5b0_2;
    } else {
        goto lab_0x40c21e;
    }
  lab_0x40c9b1:;
    int64_t v265 = v187 + 4; // 0x40c9b1
    char v266 = *nl_langinfo(0x10000); // 0x40c9fc
    int64_t v267 = v176 & 0xffffffff; // 0x40c9ff
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40ca06
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40ca2d
        int64_t v270 = v265 + 1; // 0x40ca35
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
    goto lab_0x40c872;
  lab_0x40c872:
    // 0x40c872
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40c149;
}
// Address range: 0x40cae0 - 0x40ccf9
int64_t function_40cae0(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x40cb43
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40caf8
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40cb09
    g125 = v5;
    int64_t v6; // 0x40cae0
    int64_t v7; // 0x40cae0
    int64_t v8; // 0x40cae0
    int64_t v9; // 0x40cae0
    int64_t v10; // 0x40cae0
    int64_t v11; // 0x40cae0
    int64_t v12; // 0x40cae0
    uint32_t v13; // 0x40cc00
    int64_t * v14; // 0x40cc30
    int64_t v15; // 0x40cc38
    uint32_t v16; // 0x40cc80
    uint32_t v17; // 0x40cc50
    int64_t * v18; // 0x40cbe0
    int64_t v19; // 0x40cbe0
    int64_t * v20; // 0x40cbf0
    int64_t v21; // 0x40cbf0
    int64_t * v22; // 0x40cbc8
    int64_t v23; // 0x40cbc8
    int64_t * v24; // 0x40cbb0
    int64_t v25; // 0x40cbb0
    int64_t * v26; // 0x40ccd0
    uint32_t v27; // 0x40cb90
    int64_t v28; // 0x40ccd0
    int64_t * v29; // 0x40ccc0
    int64_t v30; // 0x40ccc0
    uint32_t v31; // 0x40cb70
    int64_t * v32; // 0x40cce8
    int64_t v33; // 0x40cce8
    int64_t v34; // 0x40cc93
    uint32_t v35; // 0x40cb50
    int64_t v36; // 0x40cc67
    uint32_t v37; // 0x40cb18
    int32_t * v38; // 0x40cc00
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x40cb90
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x40cb97
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x40cbe0
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x40cba3
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x40cb36
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x40cb70
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x40cb77
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x40cbf0
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x40cb83
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x40cb36
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x40cb50
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x40cb57
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x40cbc8
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x40cb63
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x40cb36
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
            // 0x40cb18
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x40cb23
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x40cbb0
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40cb2f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x40cb36
            break;
        }
        case 11: {
            // 0x40cc00
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x40cc0f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x40ccd0
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x40cc1c
            *(int64_t *)(v4 + 16) = __asm_movsd(__asm_movsd_1(*(int64_t *)v10));
            // break -> 0x40cb36
            break;
        }
        case 12: {
            // 0x40cc30
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x40cb36
            break;
        }
        case 15: {
            // 0x40cc80
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x40cc87
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x40ccc0
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x40cc93
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x40cb36
            break;
        }
        case 16: {
            // 0x40cc50
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x40cc5b
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x40cce8
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x40cc67
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x40cb36
            break;
        }
        default: {
            // 0x40cb43
            return 0xffffffff;
        }
    }
    // 0x40cb36
    v3++;
    int64_t v39 = v4 + 32; // 0x40cb41
    while (v3 < v2) {
        // 0x40cb00
        v4 = v39;
        v5 = *(int32_t *)v4;
        g125 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x40cb90
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x40cb97
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x40cbe0
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x40cba3
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x40cb36
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x40cb70
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x40cb77
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x40cbf0
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x40cb83
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x40cb36
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x40cb50
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x40cb57
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x40cbc8
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x40cb63
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x40cb36
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
                // 0x40cb18
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x40cb23
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x40cbb0
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40cb2f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x40cb36
                break;
            }
            case 11: {
                // 0x40cc00
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x40cc0f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x40ccd0
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x40cc1c
                *(int64_t *)(v4 + 16) = __asm_movsd(__asm_movsd_1(*(int64_t *)v10));
                // break -> 0x40cb36
                break;
            }
            case 12: {
                // 0x40cc30
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x40cb36
                break;
            }
            case 15: {
                // 0x40cc80
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x40cc87
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x40ccc0
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x40cc93
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x40cb36
                break;
            }
            case 16: {
                // 0x40cc50
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x40cc5b
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x40cce8
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x40cc67
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x40cb36
                break;
            }
            default: {
                // 0x40cb43
                return 0xffffffff;
            }
        }
        // 0x40cb36
        v3++;
        v39 = v4 + 32;
    }
    // 0x40cb43
    return 0;
}
// Address range: 0x40cd00 - 0x40da09
int64_t function_40cd00(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x40cd02
    int64_t v4 = v1 + 16; // 0x40cd06
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x40cd39
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x40cd4e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x40cd7b
    int32_t v8 = 0; // 0x40cd80
    int64_t v9 = 0; // 0x40cd80
    int64_t v10 = v3; // 0x40cd80
    int64_t v11 = a1; // 0x40cd80
    int64_t v12 = 0; // 0x40cd80
    char v13; // 0x40cd00
    int64_t v14; // 0x40cd00
    int64_t v15; // 0x40cd00
    int64_t v16; // 0x40cd00
    int64_t v17; // 0x40cd00
    int64_t v18; // 0x40cd00
    int64_t v19; // 0x40cd00
    int64_t v20; // 0x40cd00
    int64_t v21; // 0x40cd00
    int64_t v22; // 0x40cd00
    int64_t v23; // 0x40cd00
    int64_t v24; // 0x40cd00
    int64_t v25; // 0x40cd00
    int64_t v26; // 0x40cd00
    int64_t v27; // 0x40cd00
    int64_t v28; // 0x40cd00
    int64_t v29; // 0x40cd00
    int64_t v30; // 0x40cd00
    int32_t v31; // 0x40cd00
    int64_t v32; // 0x40cd00
    int64_t v33; // 0x40cd70
    int64_t v34; // 0x40cdc0
    int64_t * v35; // 0x40cde3
    int64_t v36; // 0x40ce46
    if (v7 != 0) {
        // 0x40cd70
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x40cd00
        int64_t v38 = 7; // 0x40cd00
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x40cd00
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x40cd70:
            // 0x40cd70
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x40cdb3
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x40cdc8
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x40ce04
                int64_t v43 = v42; // 0x40ce04
                int64_t v44 = v43; // 0x40ce0d
                int64_t v45 = v33; // 0x40ce0d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x40d1a0
                    char v47 = *(char *)v46; // 0x40d1a4
                    int64_t v48 = v46; // 0x40d1ad
                    while (v47 < 58) {
                        // 0x40d1a0
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x40d1af
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x40d845
                        char v52 = *(char *)v51; // 0x40d845
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x40d849
                        int64_t v54 = v33; // 0x40d85d
                        int64_t v55 = v51; // 0x40d85d
                        char v56 = v52; // 0x40d85d
                        int64_t v57 = v53; // 0x40d85d
                        bool v58 = v52 < 58; // 0x40d85d
                        bool v59 = v52 < 58; // 0x40d85d
                        char v60 = v52; // 0x40d85d
                        int64_t v61 = v51; // 0x40d85d
                        int64_t v62; // 0x40d872
                        int64_t v63; // 0x40d845
                        char v64; // 0x40d845
                        int64_t v65; // 0x40d849
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x40d4c8_9;
                            }
                            // 0x40d843
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
                                // 0x40d85f
                                if (v64 >= 58) {
                                    goto lab_0x40d4c8_9;
                                }
                                // 0x40d843
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
                        int64_t v67 = v55; // 0x40d818
                        while (v58) {
                            // 0x40d81e
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
                                    goto lab_0x40d4c8_9;
                                }
                                // 0x40d843
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
                                    // 0x40d85f
                                    if (v64 >= 58) {
                                        goto lab_0x40d4c8_9;
                                    }
                                    // 0x40d843
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
                            // 0x40d814
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x40d91d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x40d4c8_9;
                        }
                        int64_t v68 = v54 + 2; // 0x40d92e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x40cd00
                v36 = v45;
                char v70; // 0x40cd00
                while (true) {
                    // 0x40ce46
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x40ce60
                                *v41 = *v41 | 2;
                                // break -> 0x40ce40
                                break;
                            }
                            case 43: {
                                // 0x40ce70
                                *v41 = *v41 | 4;
                                // break -> 0x40ce40
                                break;
                            }
                            case 32: {
                                // 0x40ce80
                                *v41 = *v41 | 8;
                                // break -> 0x40ce40
                                break;
                            }
                            case 35: {
                                // 0x40ce90
                                *v41 = *v41 | 16;
                                // break -> 0x40ce40
                                break;
                            }
                            case 48: {
                                // 0x40cea0
                                *v41 = *v41 | 32;
                                // break -> 0x40ce40
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x40cea8
                                    break;
                                }
                                // 0x40ce36
                                *v41 = *v41 | 64;
                                // break -> 0x40ce40
                                break;
                            }
                        }
                    } else {
                        // 0x40ce4f
                        *v41 = *v41 | 1;
                    }
                    // 0x40ce40
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x40cd00
                int64_t * v72; // 0x40cdd1
                int64_t * v73; // 0x40cdda
                if (v70 == 42) {
                    // 0x40cf1d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x40cf3d
                    int64_t v75 = v74; // 0x40cf3d
                    int64_t v76 = v75 + 0xffffffd0; // 0x40cf41
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x40cf47
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x40d31d
                        char v80 = *(char *)v79; // 0x40d321
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x40d31d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x40d32d
                        v26 = v79;
                        int64_t v81 = v75; // 0x40d331
                        int64_t v82 = v36; // 0x40d331
                        int64_t v83 = 0; // 0x40d331
                        if (v80 != 36) {
                            goto lab_0x40cf4d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x40d362
                            int64_t v89 = v85; // 0x40d362
                            int64_t v90 = v87; // 0x40d362
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x40d367
                            int64_t v95 = v92 + 1; // 0x40d36a
                            char v96 = *(char *)v95; // 0x40d36a
                            int64_t v97 = v96; // 0x40d36a
                            while (v94 < v91) {
                                // 0x40d381
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x40d4c8_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x40d33b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x40d344
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
                                    // 0x40d381
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x40d4c8_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x40d33b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x40d9bb
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x40d4c8_9;
                            }
                            // 0x40d9c9
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x40cf5c;
                        }
                    } else {
                        goto lab_0x40cf4d;
                    }
                } else {
                    // 0x40cead
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x40cd00
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x40d5cb
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x40d5d0
                        int64_t v102 = v71; // 0x40d5d9
                        char * v103 = v100; // 0x40d5d9
                        int64_t v104 = v36; // 0x40d5d9
                        int64_t v105 = v71; // 0x40d5d9
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x40d5e3
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x40d5e3
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x40d5e3
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x40d5f2
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x40d615
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x40ceb8;
                }
            } else {
                goto lab_0x40cd78;
            }
        }
    }
  lab_0x40cd82:
    // 0x40cd82
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x40cda4
    return 0;
  lab_0x40d4c8_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x40d4d3
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x40d4e5
    if (v3 != v115) {
        // 0x40d4f0
        free((int64_t *)v115);
    }
    // 0x40d4f5
    *__errno_location() = 22;
    // 0x40cda4
    return 0xffffffff;
  lab_0x40d6a0_5:;
    // 0x40d6a0
    int64_t v116; // 0x40cd00
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x40d6a5
    int64_t v119; // 0x40cd00
    if (v4 == v117) {
        goto lab_0x40d6b9_3;
    } else {
        // 0x40d6a7
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x40d6b9_3;
    }
  lab_0x40d6b9_3:;
    int64_t v120 = *v5; // 0x40d6b9
    int32_t * v121; // 0x40d6c9
    if (v3 == v120) {
        // 0x40d6c9
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x40d6c4
    free((int64_t *)v120);
    // 0x40d6c9
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x40cd78:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x40cd7b
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
        // break -> 0x40cd82
        goto lab_0x40cd82;
    }
    goto lab_0x40cd70;
  lab_0x40cf4d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x40cf4d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x40d2f3
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x40d4c8_9;
        }
        // 0x40d30b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x40cf5c;
  lab_0x40ceb8:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x40cebb
    int64_t v147 = v339; // 0x40cebb
    int64_t v145 = v338; // 0x40cebb
    int64_t v143 = v337; // 0x40cebb
    int64_t v186; // 0x40cd00
    int64_t v190; // 0x40cd00
    int64_t v189; // 0x40cd00
    int64_t v188; // 0x40cd00
    int64_t v187; // 0x40cd00
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x40cfc0;
    } else {
        goto lab_0x40cec1;
    }
  lab_0x40cf5c:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x40cf5c
    int64_t v132 = v128; // 0x40cf63
    int64_t v133 = v16; // 0x40cf63
    int64_t v134 = v131; // 0x40cf63
    int64_t v135; // 0x40cd00
    int64_t v136; // 0x40cd00
    int64_t v137; // 0x40cd00
    int64_t v138; // 0x40d20f
    if (v16 > v127) {
        goto lab_0x40cf6c;
    } else {
        uint64_t v139 = 2 * v16; // 0x40d205
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x40d6a0_5;
        }
        int64_t size = 32 * v138; // 0x40d22e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x40d78c
            if (mem == NULL) {
                goto lab_0x40d6b9_3;
            }
            // 0x40d7ae
            v135 = (int64_t)mem;
            goto lab_0x40d7b9;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x40d24f
            int64_t v140 = *v6; // 0x40d254
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x40d6a0_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x40d24f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x40d7b9;
            } else {
                goto lab_0x40d28d;
            }
        }
    }
  lab_0x40cec1:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x40cec8
    int64_t v151 = v146; // 0x40cec8
    int64_t v152 = v144; // 0x40cec8
    uint64_t v153; // 0x40cd00
    int64_t v154; // 0x40cd00
    int64_t v155; // 0x40cf07
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x40cf0b
        int64_t v158; // 0x40cd00
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x40d070
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x40cf03
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x40d078
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x40cf00
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x40cf03
                    break;
                }
            }
        } else {
            // 0x40cf10
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x40cf03
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x40d078
    int64_t v162 = v161 % 256; // 0x40d084
    g126 = v162;
    int64_t v163 = 17; // 0x40d087
    int64_t v164 = v154; // 0x40d087
    int64_t v165 = v154; // 0x40d087
    switch ((char)v161) {
        case 0: {
            goto lab_0x40d0f1;
        }
        case 28: {
            goto lab_0x40d442;
        }
        case 30: {
            // 0x40d46e
            v163 = 14;
            v164 = 99;
            goto lab_0x40d099;
        }
        case 32: {
            goto lab_0x40d442;
        }
        case 33: {
            goto lab_0x40d442;
        }
        case 34: {
            goto lab_0x40d442;
        }
        case 46: {
            // 0x40d45f
            v163 = 16;
            v164 = 115;
            goto lab_0x40d099;
        }
        case 51: {
            goto lab_0x40d47d;
        }
        case 60: {
            goto lab_0x40d442;
        }
        case 62: {
            int32_t v166 = v153; // 0x40d399
            int32_t v167 = v166 - 7; // 0x40d399
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x40d39f
            v163 = v168;
            v164 = v154;
            goto lab_0x40d099;
        }
        case 63: {
            goto lab_0x40d3f0;
        }
        case 64: {
            goto lab_0x40d442;
        }
        case 65: {
            goto lab_0x40d442;
        }
        case 66: {
            goto lab_0x40d442;
        }
        case 68: {
            goto lab_0x40d3f0;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x40d3af
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x40d3b5
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x40d3bd
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x40d3cb
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x40d3df
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x40d099;
        }
        case 74: {
            goto lab_0x40d47d;
        }
        case 75: {
            goto lab_0x40d099;
        }
        case 78: {
            int32_t v171 = v153; // 0x40d090
            int32_t v172 = v171 - 7; // 0x40d090
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x40d096
            v163 = v173;
            v164 = v154;
            goto lab_0x40d099;
        }
        case 80: {
            goto lab_0x40d47d;
        }
        case 83: {
            goto lab_0x40d47d;
        }
        default: {
            goto lab_0x40d4c8_9;
        }
    }
  lab_0x40cf6c:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x40cf83
        int64_t v178 = v176; // 0x40cd00
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x40cf78
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x40cf78
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x40cf91
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x40cf9d
    int32_t v182 = *v181; // 0x40cf9d
    if (v182 != 0) {
        // 0x40d61e
        if (v182 != 5) {
            goto lab_0x40d4c8_9;
        }
        unsigned char v183 = *(char *)v129; // 0x40d627
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x40ceb8;
    } else {
        // 0x40cfa7
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x40cfad
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
            goto lab_0x40cec1;
        } else {
            goto lab_0x40cfc0;
        }
    }
  lab_0x40cfc0:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x40cfc0
    char v197 = *v196; // 0x40cfc0
    int64_t * v198; // 0x40cde8
    *v198 = v192;
    int64_t v199; // 0x40cd00
    int64_t v200; // 0x40cd00
    int64_t v201; // 0x40cd00
    int64_t v202; // 0x40cd00
    int64_t v203; // 0x40cd00
    int64_t * v204; // 0x40cdf1
    int64_t * v205; // 0x40cdfa
    int64_t v206; // 0x40cfd9
    if (v197 != 42) {
        char v207 = *v196; // 0x40d1c0
        int64_t v208 = v193; // 0x40d1c9
        char * v209; // 0x40cd00
        int64_t v210; // 0x40cd00
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x40d1d0
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x40d1d4
            v208 = v212;
            while (v214 < 58) {
                // 0x40d1d0
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x40d1de
            v209 = v213;
            v210 = v212;
        } else {
            // 0x40d1c0
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x40d1f1
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x40cec1;
    } else {
        // 0x40cfcf
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x40cfef
        int64_t v219 = v218; // 0x40cfef
        int64_t v220 = v219 + 0xffffffd0; // 0x40cff3
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x40cff9
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x40d8a4
            char v224 = *(char *)v223; // 0x40d8a8
            v221 = v223;
            while (v224 < 58) {
                // 0x40d8a4
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x40d8b4
            v201 = v223;
            int64_t v225 = v219; // 0x40d8b8
            int64_t v226 = v206; // 0x40d8b8
            int64_t v227 = 0; // 0x40d8b8
            if (v224 != 36) {
                goto lab_0x40cfff;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x40d8e9
                int64_t v233 = v229; // 0x40d8e9
                int64_t v234 = v231; // 0x40d8e9
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x40d8ee
                int64_t v239 = v236 + 1; // 0x40d8f5
                char v240 = *(char *)v239; // 0x40d8f9
                int64_t v241 = v240; // 0x40d8f9
                while (v238 < v235) {
                    // 0x40d907
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x40d4c8_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x40d8c2
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x40d8cb
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
                        // 0x40d907
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x40d4c8_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x40d8c2
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x40d9d7
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x40d4c8_9;
                }
                // 0x40d9e5
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x40d00e;
            }
        } else {
            goto lab_0x40cfff;
        }
    }
  lab_0x40d0f1:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x40d0f6
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x40d0fe
    *a2 = v245;
    int64_t v246; // 0x40cd00
    int64_t v247; // 0x40cd00
    int64_t dest_mem; // 0x40cd00
    int64_t v248; // 0x40cd00
    int64_t v249; // 0x40d9f3
    if (v246 > v245) {
        // 0x40d10a
        goto lab_0x40cd78;
    } else {
        if (v246 < 0) {
            // 0x40d9f3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40d6a0_5;
        }
        int64_t v250 = 2 * v246; // 0x40d126
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x40d9f3
            v249 = *v6;
            v116 = v249;
            goto lab_0x40d6a0_5;
        }
        int64_t v251 = *v5; // 0x40d137
        int64_t size2 = 176 * v246; // 0x40d149
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x40d299
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x40d7fc
                v118 = v252;
                if (v4 == v252) {
                    // 0x40d6c9
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x40d6a7
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x40d6b9_3;
            }
            goto lab_0x40d2b4;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x40d15b
            if (mem4 == NULL) {
                // 0x40d9f3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40d6a0_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x40d15b
            int64_t v254 = *v5; // 0x40d17d
            int64_t v255 = *a2; // 0x40d181
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x40d2b4;
            } else {
                goto lab_0x40d18f;
            }
        }
    }
  lab_0x40d442:
    // 0x40d442
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x40d457
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x40d099;
  lab_0x40d47d:;
    uint32_t v335 = (int32_t)v153; // 0x40d485
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x40d48b
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40d493
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x40d4a1
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40d4ae
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40d099;
  lab_0x40d3f0:;
    uint32_t v336 = (int32_t)v153; // 0x40d3f8
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x40d3fe
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x40d406
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x40d414
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x40d421
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x40d099;
  lab_0x40d099:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x40cd00
    int64_t v260; // 0x40cd00
    int64_t * v261; // 0x40cdff
    if (v259 == -1) {
        // 0x40d5a4
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x40d4c8_9;
        }
        // 0x40d5bc
        v260 = v148;
    } else {
        // 0x40d0a3
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x40d0a8
    int64_t v264 = v258; // 0x40d0af
    int64_t v265 = v162; // 0x40d0af
    int64_t v266 = v263; // 0x40d0af
    int64_t v267; // 0x40cd00
    int64_t v268; // 0x40cd00
    int64_t v269; // 0x40cd00
    int64_t v270; // 0x40cd00
    int64_t v271; // 0x40cd00
    if (v142 > v262) {
        goto lab_0x40d0b5;
    } else {
        uint64_t v272 = 2 * v142; // 0x40d518
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x40d522
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x40d6a0_5;
        }
        int64_t size3 = 32 * v273; // 0x40d541
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x40d554
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x40d639
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x40d6b9_3;
            }
            goto lab_0x40d656;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x40d561
            if (mem6 == NULL) {
                // 0x40d9f3
                v249 = *v6;
                v116 = v249;
                goto lab_0x40d6a0_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x40d561
            int64_t v276 = v274 & 0xffffffff; // 0x40d566
            int64_t v277 = *v6; // 0x40d591
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x40d656;
            } else {
                goto lab_0x40d59b;
            }
        }
    }
  lab_0x40d0b5:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x40d0cb
        int64_t v282 = v279; // 0x40cd00
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x40d0c0
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x40d0c0
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x40d0d9
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x40d0e5
    int32_t v286 = *v285; // 0x40d0e5
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x40d50a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x40d4c8_9;
        }
    } else {
        // 0x40d0ef
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x40d0f1;
  lab_0x40d7b9:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x40d7b9
    int64_t * v290; // 0x40cd00
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x40d28d;
  lab_0x40d28d:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x40cf6c;
  lab_0x40cfff:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x40cfff
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x40d87a
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x40d4c8_9;
        }
        // 0x40d892
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x40d00e;
  lab_0x40d00e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x40d00e
    int64_t v300 = v296; // 0x40d015
    int64_t v301 = v191; // 0x40d015
    int64_t v302 = v299; // 0x40d015
    int64_t v303; // 0x40cd00
    int64_t v304; // 0x40cd00
    int64_t v305; // 0x40cd00
    int64_t v306; // 0x40d6f2
    if (v191 > v295) {
        goto lab_0x40d01e;
    } else {
        uint64_t v307 = 2 * v191; // 0x40d6e8
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x40d6a0_5;
        }
        int64_t size4 = 32 * v306; // 0x40d70d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x40d93e
            if (mem7 == NULL) {
                goto lab_0x40d6b9_3;
            }
            // 0x40d960
            v304 = (int64_t)mem7;
            goto lab_0x40d96b;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x40d72e
            int64_t v308 = *v6; // 0x40d733
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x40d6a0_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x40d72e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x40d96b;
            } else {
                goto lab_0x40d76c;
            }
        }
    }
  lab_0x40d2b4:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x40cd00
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x40d18f;
  lab_0x40d18f:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x40cd78;
  lab_0x40d656:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x40d66c
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x40d59b;
  lab_0x40d59b:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x40d0b5;
  lab_0x40d01e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x40d033
        int64_t v324 = v322; // 0x40cd00
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x40d028
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x40d028
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x40d041
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x40d04e
    int32_t v328 = *v327; // 0x40d04e
    if (v328 != 0) {
        // 0x40d775
        if (v328 != 5) {
            goto lab_0x40d4c8_9;
        }
        unsigned char v329 = *(char *)v297; // 0x40d77e
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x40d058
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x40d061
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x40cec1;
  lab_0x40d96b:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x40d96b
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x40d76c;
  lab_0x40d76c:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x40d01e;
}
// Address range: 0x40da10 - 0x40da6d
int64_t function_40da10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40da10
    return function_401a60();
}
// Address range: 0x40da70 - 0x40da71
int64_t function_40da70(void) {
    // 0x40da70
    int64_t result; // 0x40da70
    return result;
}
// Address range: 0x40da80 - 0x40da98
int64_t function_40da80(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40da80
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g25);
}
// Address range: 0x40da98 - 0x40dab8
int64_t function_40da98(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g21; // 0x40daa2
    while (*(int64_t *)v1 != -1) {
        // 0x40daa3
        v1 -= 8;
    }
    // 0x40dab4
    return result;
}
