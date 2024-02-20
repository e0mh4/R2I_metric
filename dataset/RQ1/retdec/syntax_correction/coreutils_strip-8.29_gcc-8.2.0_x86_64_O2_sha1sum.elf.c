#include "decompile_retdec.h"
// Address range: 0x401920 - 0x401925
int64_t function_401920(void) {
    // 0x401920
    abort();
    // UNREACHABLE
}
// Address range: 0x401925 - 0x40192a
int64_t function_401925(void) {
    // 0x401925
    abort();
    // UNREACHABLE
}
// Address range: 0x40192a - 0x40192f
int64_t function_40192a(void) {
    // 0x40192a
    abort();
    // UNREACHABLE
}
// Address range: 0x40192f - 0x401934
int64_t function_40192f(void) {
    // 0x40192f
    abort();
    // UNREACHABLE
}
// Address range: 0x401934 - 0x401939
int64_t function_401934(void) {
    // 0x401934
    abort();
    // UNREACHABLE
}
// Address range: 0x401939 - 0x40193e
int64_t function_401939(void) {
    // 0x401939
    abort();
    // UNREACHABLE
}
// Address range: 0x401940 - 0x402869
int64_t function_401940(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a1 & 0xffffffff; // 0x401955
    function_4049d0(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4085a0(0x403080, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    setvbuf(g28, (char *)((int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale" ^ (int32_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale"), 1, 0);
    int64_t v2 = 0xffffffff; // 0x4019b1
    int64_t v3 = 0; // 0x4019b1
    int64_t v4 = 0; // 0x4019b1
    int64_t v5; // 0x401940
    int64_t v6; // 0x401940
    while (true) {
      lab_0x4019b8_2:
        // 0x4019b8
        v6 = v3;
        v5 = v2;
        int64_t v7; // 0x401940
        int32_t v8 = function_407e00(v1, a2, "bctw", &g2, 0, v7);
        switch (v8) {
            case -1: {
                goto lab_0x401b32;
            }
            case 119: {
                // 0x401b18
                g38 = 0;
                g37 = 1;
                g35 = 0;
                v2 = v5;
                v3 = v6;
                goto lab_0x4019b8_2;
            }
            default: {
                if (v8 > 119) {
                    if (v8 == 130) {
                        // 0x401af8
                        g38 = 0;
                        g37 = 0;
                        g35 = 1;
                        v2 = v5;
                        v3 = v6;
                    } else {
                        if (v8 > 130) {
                            if (v8 != 131) {
                                // 0x401a28
                                v2 = 1;
                                v3 = v6;
                                if (v8 != 132) {
                                    // 0x4026bf
                                    function_402c90(1);
                                    // UNREACHABLE
                                }
                            } else {
                                // 0x401ad3
                                *(char *)&g34 = 1;
                                v2 = v5;
                                v3 = v6;
                            }
                        } else {
                            if (v8 != 128) {
                                if (v8 != 129) {
                                    // 0x4026bf
                                    function_402c90(1);
                                    // UNREACHABLE
                                }
                                // 0x401aab
                                g38 = 1;
                                g37 = 0;
                                g35 = 0;
                                v2 = v5;
                                v3 = v6;
                            } else {
                                // 0x4019ff
                                *(char *)&g36 = 1;
                                v2 = v5;
                                v3 = v6;
                            }
                        }
                    }
                } else {
                    // 0x401a10
                    v2 = 1;
                    v3 = v6;
                    if (v8 != 98) {
                        if (v8 <= 98) {
                            if (v8 == -131) {
                                // 0x401a67
                                function_406a80((int64_t)g28, "sha1sum", "GNU coreutils", (int64_t)g17, "Ulrich Drepper", "Scott Miller");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v8 == -130) {
                                // 0x401aea
                                function_402c90(0);
                                // UNREACHABLE
                            }
                            goto lab_0x4026bf;
                        }
                        // 0x401a17
                        v2 = v5;
                        v3 = 1;
                        if (v8 != 99) {
                            // 0x401a48
                            v2 = 0;
                            v3 = v6;
                            if (v8 != 116) {
                              lab_0x4026bf:
                                // 0x4026bf
                                function_402c90(1);
                                // UNREACHABLE
                            }
                        }
                    }
                }
                goto lab_0x4019b8_2;
            }
        }
    }
  lab_0x401b32:
    // 0x401b32
    g40 = 42;
    g39 = 40;
    if (v5 == 0) {
        // 0x401b4d
        if ((char)v4 != 0) {
            // 0x4026aa
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"--tag does not support --text mode", 5));
            // 0x4026bf
            function_402c90(1);
            // UNREACHABLE
        }
    }
    if (v6 != 0) {
        // 0x401b5b
        if ((char)v4 != 0) {
            // 0x4026aa
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --tag option is meaningless when verifying checksums", 5));
            // 0x4026bf
            function_402c90(1);
            // UNREACHABLE
        }
    }
    // 0x401b6e
    if (((char)((int32_t)v5 > -1) & (char)v6) != 0) {
        // 0x4026aa
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --binary and --text options are meaningless when verifying checksums", 5));
        // 0x4026bf
        function_402c90(1);
        // UNREACHABLE
    }
    int64_t v9 = a2; // 0x401b90
    int64_t v10 = v1; // 0x401b90
    int64_t v11 = v5; // 0x401b90
    int64_t v12 = v6; // 0x401b90
    int64_t v13 = v4; // 0x401b90
    int64_t v14; // 0x401940
    int64_t v15; // 0x401940
    int64_t v16; // 0x401940
    int64_t v17; // 0x401940
    int64_t v18; // 0x401940
    int64_t v19; // 0x401940
    int64_t v20; // 0x401940
    int64_t v21; // 0x401940
    int64_t v22; // 0x401940
    int64_t v23; // 0x401940
    int64_t v24; // 0x401940
    int64_t v25; // 0x401940
    int64_t v26; // 0x401940
    int64_t v27; // 0x401940
    int64_t v28; // 0x401940
    int64_t v29; // 0x401940
    int64_t v30; // 0x401940
    int64_t v31; // 0x401940
    if (*(char *)&g36 != 0) {
        goto lab_0x401df3;
    } else {
        // 0x401b96
        if (g38 == 0) {
            // 0x40258f
            v27 = a2;
            v24 = v1;
            v30 = (int64_t)"the --binary and --text options are meaningless when verifying checksums";
            v14 = v5;
            v17 = v6;
            v20 = v4;
            if (g37 == 0) {
                goto lab_0x40268a;
            } else {
                // 0x40259c
                v28 = a2;
                v25 = v1;
                v31 = (int64_t)"the --warn option is meaningful only when verifying checksums";
                v16 = v5;
                v19 = v6;
                v22 = v4;
                if (v6 == 0) {
                    // 0x4026aa
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --warn option is meaningful only when verifying checksums", 5));
                    // 0x4026bf
                    function_402c90(1);
                    // UNREACHABLE
                }
                goto lab_0x401bdb;
            }
        } else {
            // 0x401ba3
            v26 = a2;
            v23 = v1;
            v29 = (int64_t)"the --status option is meaningful only when verifying checksums";
            v15 = v5;
            v18 = v6;
            v21 = v4;
            if (v6 == 0) {
                // 0x4026aa
                error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --status option is meaningful only when verifying checksums", 5));
                // 0x4026bf
                function_402c90(1);
                // UNREACHABLE
            }
            goto lab_0x401bb6;
        }
    }
  lab_0x401d3e:;
    // 0x401d3e
    int64_t v32; // 0x401940
    int64_t v33 = v32;
    char v34; // 0x401940
    char v35 = v34;
    int64_t v36 = v33; // 0x401d41
    int64_t v37; // 0x401940
    int64_t v38; // 0x401940
    int64_t v39; // 0x401940
    int64_t v40; // 0x401940
    int64_t v41; // 0x401940
    int64_t v42; // 0x401940
    int64_t v43; // 0x401940
    int64_t v44; // 0x401940
    int64_t v45; // 0x401940
    int64_t v46; // 0x401d66
    int64_t v47; // 0x401e30
    int32_t v48; // 0x401e76
    int64_t v49; // 0x401e82
    int64_t v50; // 0x4021ff
    int64_t v51; // 0x401940
    int64_t v52; // 0x401940
    if (v35 == 9) {
        goto lab_0x401d30;
    } else {
        int64_t v53 = v33 + (int64_t)(v35 == 92);
        v44 = v35 != 92 ? 0 : v51;
        v45 = v53 + v39;
        int64_t v54 = (int64_t)"SHA1"; // 0x401940
        int64_t v55 = v45; // 0x401940
        int64_t v56 = 4; // 0x401940
        int64_t v57 = v55;
        int64_t v58 = v54;
        unsigned char v59 = *(char *)v57; // 0x401d66
        char v60 = *(char *)v58; // 0x401d66
        v46 = v57 + v52;
        char v61 = v60; // 0x401d66
        bool v62 = false; // 0x401d66
        while (v59 == v60) {
            int64_t v63 = v56;
            int64_t v64 = v63 - 1; // 0x401d66
            v54 = v58 + v52;
            v55 = v46;
            v56 = v64;
            v61 = v59;
            v62 = true;
            if (v64 == 0) {
                // break -> 
                break;
            }
            v57 = v55;
            v58 = v54;
            v59 = *(char *)v57;
            v60 = *(char *)v58;
            v46 = v57 + v52;
            v61 = v60;
            v62 = false;
        }
        bool v65 = v62;
        unsigned char v66 = v61;
        if ((v59 >= v66 && !v65) != v59 < v66) {
            char v67 = *(char *)v45; // 0x401e18
            int64_t v68 = g40; // 0x401e20
            v42 = v46;
            v38 = v45;
            if (v40 - v53 < v68 + (int64_t)(v67 == 92)) {
                goto lab_0x401d95;
            } else {
                int64_t v69 = g39; // 0x401e30
                v47 = v69 + v53;
                int64_t v70 = v47 + v39;
                char * v71 = (char *)v70; // 0x401e3b
                char v72 = *v71; // 0x401e3b
                v42 = v46;
                v38 = v45;
                if (v72 != 32 == (v72 != 9)) {
                    goto lab_0x401d95;
                } else {
                    // 0x401e4a
                    *v71 = 0;
                    int64_t v73 = function_402950(v45); // 0x401e5f
                    v42 = v46;
                    v38 = v45;
                    if ((char)v73 == 0) {
                        goto lab_0x401d95;
                    } else {
                        // 0x401e6c
                        v48 = g16;
                        v49 = v47 + 1;
                        v43 = 1;
                        if (v40 - v49 == 1) {
                            goto lab_0x401eac;
                        } else {
                            unsigned char v74 = *(char *)(v70 + 1); // 0x401e92
                            if (v74 == 32) {
                                goto lab_0x40228c;
                            } else {
                                // 0x401ea2
                                v43 = v74;
                                if (v74 == 42) {
                                    goto lab_0x40228c;
                                } else {
                                    goto lab_0x401eac;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            char v75 = *(char *)(v45 + 4); // 0x401d75
            char v76 = v75; // 0x401d81
            int64_t v77 = v53 + 4; // 0x401d81
            if (v75 == 32) {
                char v78 = *(char *)(v45 + 5); // 0x401d83
                v76 = v78;
                v77 = v53 + 5;
            }
            char v79 = v76;
            v42 = v46;
            v38 = v45;
            if (v79 == 40) {
                int64_t v80 = v77;
                int64_t v81 = v80 + 1; // 0x4021ef
                int64_t v82 = v40 - v81; // 0x4021f3
                v42 = v46;
                v38 = v45;
                if (v82 == 0) {
                    goto lab_0x401d95;
                } else {
                    // 0x4021fc
                    v50 = v81 + v39;
                    int64_t v83 = v82 - 1; // 0x402202
                    if (v83 == 0) {
                        goto lab_0x402229;
                    } else {
                        char v84 = *(char *)(v80 + v39 + v82); // 0x402208
                        int64_t v85 = v83; // 0x40220e
                        if (v84 != 41) {
                            int64_t v86 = v85;
                            int64_t v87 = v86 - 1; // 0x402223
                            while (v87 != 0) {
                                int64_t v88 = v87 + v50;
                                char v89 = *(char *)v88; // 0x402218
                                v85 = v87;
                                v41 = v88;
                                v37 = v87;
                                if (v89 == 41) {
                                    goto lab_0x4023cb;
                                }
                                v86 = v85;
                                v87 = v86 - 1;
                            }
                            goto lab_0x402229;
                        } else {
                            // 0x402208
                            v41 = v83 + v50;
                            v37 = v83;
                            goto lab_0x4023cb;
                        }
                    }
                }
            } else {
                goto lab_0x401d95;
            }
        }
    }
  lab_0x4023cb:;
    int64_t v90 = v37;
    int64_t v91 = v41;
    int64_t v92 = v46; // 0x4023ce
    if (v44 != 0) {
        int64_t v93 = function_4029b0(v50, v90, v91); // 0x402577
        v42 = v90;
        v38 = v45;
        v92 = v90;
        if (v93 != 0) {
            goto lab_0x4023d4;
        } else {
            goto lab_0x401d95;
        }
    } else {
        goto lab_0x4023d4;
    }
  lab_0x402466:;
    // 0x402466
    int64_t v94; // 0x401940
    int64_t v95 = v94;
    char v96 = g38; // 0x402466
    char v97 = v96; // 0x402473
    int32_t v98; // 0x401940
    int32_t v99 = v98; // 0x402473
    int32_t v100; // 0x401940
    int32_t v101 = v100; // 0x402473
    int64_t v102 = v95; // 0x402473
    int64_t v103; // 0x401940
    int64_t str; // 0x401940
    int64_t v104; // 0x401940
    int64_t v105; // 0x401940
    int64_t v106; // 0x401940
    int64_t v107; // 0x401940
    char v108; // 0x401940
    char v109; // 0x401940
    int32_t v110; // 0x401940
    int32_t v111; // 0x401940
    if (v96 != 0) {
        goto lab_0x401f95;
    } else {
        char v112 = g35; // 0x402479
        v97 = v112;
        v99 = v98;
        v101 = v100;
        v102 = v95;
        if (v112 != 0) {
            goto lab_0x401f95;
        } else {
            int64_t v113 = v104;
            int64_t v114 = v106;
            char v115 = v113;
            v108 = v115;
            v110 = v98;
            v105 = v114;
            v107 = v114;
            if (v103 == 0) {
                // 0x402536
                function_402a40(str, 0);
                v109 = v115;
                v111 = v98;
                goto lab_0x402550;
            } else {
                goto lab_0x402136;
            }
        }
    }
  lab_0x401da6:;
    // 0x401da6
    int64_t v116; // 0x401940
    int64_t v117 = v116;
    int64_t v118; // 0x401940
    int64_t v119 = v118;
    int64_t v120; // 0x401940
    int64_t v121 = v120;
    char * v122; // 0x401940
    char v123 = *v122; // 0x401da6
    char v124; // 0x401940
    char v125 = v124; // 0x401daa
    int32_t v126 = v98; // 0x401daa
    int32_t v127 = v100; // 0x401daa
    int64_t v128 = v119; // 0x401daa
    int64_t v129 = v117; // 0x401daa
    int64_t v130; // 0x401940
    int64_t v131 = v130; // 0x401daa
    char v132 = v124; // 0x401daa
    int32_t v133 = v98; // 0x401daa
    int32_t v134 = v100; // 0x401daa
    int64_t v135 = v121; // 0x401daa
    int64_t v136 = v119; // 0x401daa
    int64_t v137 = v117; // 0x401daa
    int64_t v138 = v130; // 0x401daa
    if ((v123 & 48) != 0) {
        // break -> 0x401fa5
        goto lab_0x401fa5_2;
    }
    goto lab_0x401db0;
  lab_0x401db0:;
    int64_t v139 = v131;
    int64_t v140 = v129;
    int64_t v141 = v128;
    int32_t v142 = v127;
    int32_t v143 = v126;
    char v144 = v125;
    int64_t v145; // 0x401940
    int64_t v146 = v145 + 1; // 0x401db0
    char v147 = v144; // 0x401db4
    int32_t v148 = v143; // 0x401db4
    int32_t v149 = v142; // 0x401db4
    int64_t v150 = v146; // 0x401db4
    int64_t v151 = v141; // 0x401db4
    int64_t v152 = v140; // 0x401db4
    int64_t v153 = v139; // 0x401db4
    int64_t v154; // 0x401940
    int64_t v155; // 0x401940
    if (v146 == 0) {
        int64_t v156 = function_406470(0, 3, v155); // 0x401dc6
        error(1, (int32_t)"%s: too many checksum lines" ^ (int32_t)"%s: too many checksum lines", dcgettext(NULL, "%s: too many checksum lines", 5));
        v9 = v156;
        v10 = v154;
        v11 = v141;
        v12 = v140;
        v13 = v139;
        goto lab_0x401df3;
    }
    goto lab_0x401cd8;
  lab_0x401d30:;
    int64_t v176 = v36;
    int64_t v177 = v176; // 0x401940
    while (true) {
        int64_t v178 = v177;
        int64_t v179 = v178 + 1; // 0x401d30
        char v180 = *(char *)(v179 + v39); // 0x401d34
        v177 = v179;
        v34 = v180;
        v32 = v179;
        if (v180 != 32) {
            goto lab_0x401d3e;
        }
    }
  lab_0x401d95:;
    int64_t v181 = v38;
    int64_t v182 = v42;
    int64_t v158; // 0x401940
    int64_t v183 = v158 + 1; // 0x401d95
    char v184 = g37; // 0x401d99
    v120 = v182;
    v118 = v183;
    v116 = v181;
    if (v184 != 0) {
        // 0x402048
        function_406470(0, 3, v155);
        error(0, (int32_t)"%s: %lu: improperly formatted %s checksum line" ^ (int32_t)"%s: %lu: improperly formatted %s checksum line", dcgettext(NULL, "%s: %lu: improperly formatted %s checksum line", 5));
        v120 = (int32_t)"%s: %lu: improperly formatted %s checksum line" ^ (int32_t)"%s: %lu: improperly formatted %s checksum line";
        v118 = v183;
        v116 = v181;
    }
    goto lab_0x401da6;
  lab_0x402229:;
    char v185 = *(char *)v50; // 0x402229
    v42 = v46;
    v38 = v45;
    v41 = v50;
    v37 = 0;
    if (v185 != 41) {
        goto lab_0x401d95;
    } else {
        goto lab_0x4023cb;
    }
  lab_0x401eac:;
    int64_t v186 = v43;
    v42 = v186;
    v38 = v45;
    int64_t v187; // 0x401940
    if (v48 == 0) {
        goto lab_0x401d95;
    } else {
        // 0x401eb4
        g16 = 1;
        v187 = v49;
        goto lab_0x401ebe;
    }
  lab_0x40228c:
    // 0x40228c
    v187 = v49;
    if (v48 != 1) {
        // 0x402295
        g16 = 0;
        v187 = v47 + 2;
    }
    goto lab_0x401ebe;
  lab_0x4023d4:;
    int64_t v438 = v92;
    *(char *)v91 = 0;
    int64_t v439 = v50 + 1; // 0x4023d7
    char v440 = *(char *)(v90 + v439); // 0x4023d7
    int64_t v441 = v90 + 1; // 0x4023dd
    int64_t v442 = v441; // 0x4023e4
    int64_t v443 = v441; // 0x4023e4
    char v444 = v440; // 0x4023e4
    if (v440 != 9 != v440 != 32) {
        while (true) {
          lab_0x4023f0_2:;
            int64_t v445 = v442;
            int64_t v446 = v445 + 1; // 0x4023f0
            char v447 = *(char *)(v446 + v50); // 0x4023f4
            v443 = v446;
            v444 = v447;
            switch (v447) {
                case 32: {
                    // 0x4023f0
                    v442 = v446;
                    goto lab_0x4023f0_2;
                }
                case 9: {
                    // 0x4023f0
                    v442 = v446;
                    goto lab_0x4023f0_2;
                }
                default: {
                    goto lab_0x402403;
                }
            }
        }
    }
  lab_0x402403:;
    char v448 = v444;
    v42 = v438;
    v38 = v45;
    int64_t v195; // 0x401940
    int64_t v196; // 0x401940
    int64_t v194; // 0x401940
    int64_t v197; // 0x401940
    if (v448 != 61) {
        goto lab_0x401d95;
    } else {
        int64_t v449 = v443;
        int64_t v450 = v449 + v439; // 0x40240c
        char v451 = *(char *)v450; // 0x402411
        int64_t v452 = v450; // 0x402419
        if (v451 != 32 != v451 != 9) {
            int64_t v453 = v50 + 2 + v449; // 0x402420
            while (true) {
              lab_0x402425_2:;
                int64_t v454 = v453;
                char v455 = *(char *)v454; // 0x402425
                v452 = v454;
                switch (v455) {
                    case 32: {
                        // 0x402425
                        v453 = v454 + 1;
                        goto lab_0x402425_2;
                    }
                    case 9: {
                        // 0x402425
                        v453 = v454 + 1;
                        goto lab_0x402425_2;
                    }
                    default: {
                        goto lab_0x402439;
                    }
                }
            }
        }
      lab_0x402439:;
        int64_t v456 = v452;
        int64_t v457 = function_402950(v456); // 0x40243c
        v194 = v438;
        v195 = v456;
        v196 = v50;
        v197 = v457;
        goto lab_0x402441;
    }
  lab_0x401ebe:;
    int64_t v188 = v187;
    int64_t v189 = v188 + v39; // 0x401ebe
    int64_t v190 = v45; // 0x401ec4
    int64_t v191 = v189; // 0x401ec4
    if (v44 != 0) {
        int64_t v192 = v40 - v188; // 0x4024e6
        int64_t v193 = function_4029b0(v189, v192, v47); // 0x4024e9
        v194 = v192;
        v195 = v45;
        v196 = v189;
        v197 = v193 != 0;
        goto lab_0x402441;
    } else {
        goto lab_0x401eca;
    }
  lab_0x401eca:
    // 0x401eca
    str = v191;
    int64_t v198 = v190;
    int64_t v199 = (int64_t)"-"; // 0x401ed0
    int64_t v200 = str; // 0x401ed0
    int64_t v201 = 2; // 0x401ed0
    int32_t strcmp_rc; // 0x401c6c
    if (strcmp_rc != 0) {
        goto lab_0x401eee;
    } else {
        int64_t v202 = v200;
        int64_t v203 = v199;
        unsigned char v204 = *(char *)v202; // 0x401edf
        char v205 = *(char *)v203; // 0x401edf
        int64_t v206 = v202 + v52; // 0x401edf
        char v207 = v205; // 0x401edf
        bool v208 = false; // 0x401edf
        while (v204 == v205) {
            int64_t v209 = v201;
            int64_t v210 = v209 - 1; // 0x401edf
            v199 = v203 + v52;
            v200 = v206;
            v201 = v210;
            v207 = v204;
            v208 = true;
            if (v210 == 0) {
                // break -> 
                break;
            }
            v202 = v200;
            v203 = v199;
            v204 = *(char *)v202;
            v205 = *(char *)v203;
            v206 = v202 + v52;
            v207 = v205;
            v208 = false;
        }
        bool v211 = v208;
        unsigned char v212 = v207;
        v42 = v206;
        v38 = v198;
        if ((v204 >= v212 && !v211) == v204 < v212) {
            goto lab_0x401d95;
        } else {
            goto lab_0x401eee;
        }
    }
  lab_0x402441:;
    int64_t v213 = v197;
    int64_t v214 = v196;
    int64_t v215 = v195;
    int64_t v216 = v194;
    v42 = v216;
    v38 = v215;
    v190 = v215;
    v191 = v214;
    if ((char)v213 != 0) {
        goto lab_0x401eca;
    } else {
        goto lab_0x401d95;
    }
  lab_0x401eee:;
    char v217 = g38; // 0x401ef1
    int64_t v218 = 0; // 0x401ef8
    if (v217 == 0) {
        // 0x401efa
        v218 = strchr((char *)str, 10) != NULL;
    }
    // 0x401f11
    v103 = v218;
    char v219; // bp-137, 0x401940
    int64_t v220; // bp-88, 0x401940
    uint64_t v221 = function_402af0(str, &v220, (int64_t *)&v219); // 0x401f21
    int64_t v222; // 0x401940
    char v223; // 0x401940
    int32_t v224; // 0x401940
    int32_t v225; // 0x401940
    int64_t v226; // 0x401940
    if ((char)v221 != 0) {
        char v227 = *(char *)&g36; // 0x402090
        if (v227 == 0) {
            goto lab_0x4020a4;
        } else {
            char v228 = v219; // 0x402099
            v97 = v124;
            v99 = v98;
            v101 = v100;
            v102 = v226;
            if (v228 != 0) {
                goto lab_0x401f95;
            } else {
                goto lab_0x4020a4;
            }
        }
    } else {
        int32_t v229 = v100 + 1; // 0x401f31
        char v230 = g38; // 0x401f37
        v97 = v124;
        v99 = v98;
        v101 = v229;
        v102 = v226;
        if (v230 != 0) {
            goto lab_0x401f95;
        } else {
            if (v103 != 0) {
                struct _IO_FILE * v231 = g28; // 0x401f45
                int64_t v232 = (int64_t)v231; // 0x401f45
                int64_t * v233 = (int64_t *)(v232 + 40); // 0x401f4c
                uint64_t v234 = *v233; // 0x401f4c
                uint64_t v235 = *(int64_t *)(v232 + 48); // 0x401f50
                if (v234 >= v235) {
                    // 0x4027c8
                    __overflow(v231, 92);
                } else {
                    // 0x401f5a
                    *v233 = v234 + 1;
                    *(char *)v234 = 92;
                }
            }
            // 0x401f65
            function_402a40(str, v103);
            v223 = v124;
            v224 = v98;
            v225 = v229;
            v222 = (int64_t)"FAILED open or read";
            goto lab_0x401f7a;
        }
    }
  lab_0x4020a4:;
    uint64_t v236 = g39; // 0x4020a4
    v106 = 0;
    v94 = v226;
    v104 = v221 & 0xffffffff;
    int64_t v237; // 0x401940
    int64_t v238; // 0x401940
    char v239; // 0x401940
    int32_t v240; // 0x401940
    if (v236 < 2) {
        goto lab_0x402466;
    } else {
        int32_t ** v241 = __ctype_tolower_loc(); // 0x4020be
        int64_t v242 = v221 % 256; // 0x4020c5
        int64_t v243 = 0x100000000000000 * v236 / 2 / 0x100000000000000; // 0x4020cb
        int32_t * v244 = *v241; // 0x4020d0
        int64_t v245 = (int64_t)v244; // 0x4020d0
        int64_t v246 = 0; // 0x4020d3
        int64_t v247 = v246;
        int64_t v248; // 0x401940
        unsigned char v249 = *(char *)(v248 + v247); // 0x4020fa
        int64_t v250 = 2 * v247 + v198;
        unsigned char v251 = *(char *)v250; // 0x402102
        char v252 = *(char *)((int64_t)(v249 / 16) | (int64_t)"0123456789abcdef"); // 0x402111
        int32_t v253 = *(int32_t *)(4 * (int64_t)v251 + v245); // 0x402118
        int64_t v254; // 0x401940
        while (v253 == (int32_t)v252) {
            unsigned char v255 = *(char *)(v250 + 1); // 0x4020d8
            int64_t v256 = v255; // 0x4020d8
            char v257 = *(char *)((int64_t)(v249 % 16) | (int64_t)"0123456789abcdef"); // 0x4020e1
            int32_t v258 = *(int32_t *)(4 * v256 + v245); // 0x4020e8
            v254 = v256;
            if (v258 != (int32_t)v257) {
                goto lab_0x40211e;
            }
            int64_t v259 = v247 + 1; // 0x4020ed
            v246 = v259;
            v106 = v243;
            v94 = v256;
            v104 = v242;
            if (v243 == v259) {
                goto lab_0x402466;
            }
            v247 = v246;
            v249 = *(char *)(v248 + v247);
            v250 = 2 * v247 + v198;
            v251 = *(char *)v250;
            v252 = *(char *)((int64_t)(v249 / 16) | (int64_t)"0123456789abcdef");
            v253 = *(int32_t *)(4 * (int64_t)v251 + v245);
        }
        // 0x40211e
        v254 = v252;
      lab_0x40211e:;
        int64_t v260 = v254;
        int32_t v261 = v98 + 1; // 0x40211e
        char v262 = g38; // 0x402124
        v97 = v124;
        v99 = v261;
        v101 = v100;
        v102 = v260;
        if (v262 != 0) {
            goto lab_0x401f95;
        } else {
            // 0x402131
            v108 = v124;
            v110 = v261;
            v105 = v243;
            v107 = v247;
            v239 = v124;
            v240 = v261;
            v237 = v243;
            v238 = v247;
            if (v103 == 0) {
                goto lab_0x402156;
            } else {
                goto lab_0x402136;
            }
        }
    }
  lab_0x401f95:;
    int64_t v263 = v102;
    int32_t v264 = v101;
    int32_t v265 = v99;
    char v266 = v97;
    char v267 = *v122; // 0x401f9b
    v125 = v266;
    v126 = v265;
    v127 = v264;
    v128 = v158;
    v129 = v198;
    v131 = v51;
    v132 = v266;
    v133 = v265;
    v134 = v264;
    v135 = v263;
    v136 = v158;
    v137 = v198;
    v138 = v51;
    if ((v267 & 48) != 0) {
        // break -> 0x401fa5
        goto lab_0x401fa5_2;
    }
    goto lab_0x401db0;
  lab_0x401f7a:;
    int64_t v268 = v222;
    int32_t v269 = v225;
    int32_t v270 = v224;
    char v271 = v223;
    __printf_chk(1, ": %s\n", dcgettext(NULL, (char *)v268, 5));
    v97 = v271;
    v99 = v270;
    v101 = v269;
    v102 = (int64_t)": %s\n";
    goto lab_0x401f95;
  lab_0x402156:;
    int64_t v272 = v238;
    int64_t v273 = v237;
    int32_t v274 = v240;
    char v275 = v239;
    function_402a40(str, v103);
    v223 = v275;
    v224 = v274;
    v225 = v100;
    v222 = (int64_t)"FAILED";
    v109 = v275;
    v111 = v274;
    if (v273 == 0x100000000000000 * v272 >> 56) {
        goto lab_0x402550;
    } else {
        goto lab_0x401f7a;
    }
  lab_0x402136:;
    int64_t v276 = v107;
    int64_t v277 = v105;
    int32_t v278 = v110;
    char v279 = v108;
    struct _IO_FILE * v280 = g28; // 0x402136
    int64_t v281 = (int64_t)v280; // 0x402136
    int64_t * v282 = (int64_t *)(v281 + 40); // 0x40213d
    uint64_t v283 = *v282; // 0x40213d
    uint64_t v284 = *(int64_t *)(v281 + 48); // 0x402141
    if (v283 >= v284) {
        // 0x4027f7
        __overflow(v280, 92);
        v239 = v279;
        v240 = v278;
        v237 = v277;
        v238 = 0x100000000000000 * v276 >> 56;
    } else {
        // 0x40214b
        *v282 = v283 + 1;
        *(char *)v283 = 92;
        v239 = v279;
        v240 = v278;
        v237 = v277;
        v238 = v276;
    }
    goto lab_0x402156;
  lab_0x402550:;
    int32_t v285 = v111;
    char v286 = v109;
    char v287 = g35; // 0x402550
    v223 = v286;
    v224 = v285;
    v225 = v100;
    v222 = (int64_t)"OK";
    v97 = v286;
    v99 = v285;
    v101 = v100;
    v102 = v103;
    if (v287 != 0) {
        goto lab_0x401f95;
    } else {
        goto lab_0x401f7a;
    }
  lab_0x4021b1:;
    // 0x4021b1
    int64_t v288; // 0x401940
    int64_t v289 = v288;
    int64_t v290; // 0x401940
    int64_t v291 = v290;
    int64_t v292; // 0x401940
    int64_t v293 = v292;
    int64_t v294; // 0x401940
    int64_t v295 = v294;
    int32_t v296; // 0x401940
    int32_t v297 = v296;
    int64_t v298; // bp-232, 0x401940
    int64_t v299 = v298; // 0x4021b1
    int64_t v300 = v299 + 8; // 0x4021b1
    v298 = v300;
    int64_t v301 = v300; // 0x4021bf
    int32_t v302 = v297; // 0x4021bf
    int64_t v303 = v295; // 0x4021bf
    int64_t v304 = v293; // 0x4021bf
    int64_t v305 = v291; // 0x4021bf
    int64_t v306 = v289; // 0x4021bf
    uint64_t v307; // 0x401940
    if (v307 <= v300) {
        // break -> 0x4021c5
        goto lab_0x4021c5;
    }
    goto lab_0x401c50;
  lab_0x4022d0:;
    struct _IO_FILE * v333 = g28;
    int64_t v334 = (int64_t)v333;
    int64_t * v335 = (int64_t *)(v334 + 40);
    uint64_t v336 = *v335;
    uint64_t v337 = *(int64_t *)(v334 + 48);
    int64_t v319; // 0x401940
    int64_t v323; // 0x401940
    int64_t v315; // 0x401940
    int64_t v321; // 0x401940
    int64_t v322; // 0x401940
    int64_t v318; // 0x401940
    if ((char)v319 != 0) {
        if (v337 > v336) {
            // 0x4027b3
            *v335 = v336 + 1;
            *(char *)v336 = 92;
            v318 = 1;
        } else {
            // 0x402846
            __overflow(v333, 92);
            v318 = 1;
        }
        goto lab_0x4025d9;
    } else {
        if (v336 >= v337) {
            // 0x40281a
            __overflow(v333, 92);
        } else {
            // 0x4022f0
            *v335 = v336 + 1;
            *(char *)v336 = 92;
        }
        uint64_t v338 = g39; // 0x4022fb
        v321 = 1;
        v322 = 1;
        v323 = v315;
        if (v338 < 2) {
            goto lab_0x402371;
        } else {
            goto lab_0x40230c;
        }
    }
  lab_0x401ca1:;
    // 0x401ca1
    int64_t v326; // 0x401940
    v154 = v326;
    char * v325; // 0x401940
    char * v339 = v325;
    int64_t v160 = 0; // bp-136, 0x401cb1
    int64_t v161 = 0; // bp-128, 0x401cba
    struct _IO_FILE * v162 = (struct _IO_FILE *)v154; // 0x401cea
    v122 = (char *)v154;
    v155 = (int64_t)v339;
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = 1;
    v151 = 0;
    int64_t v309; // 0x401940
    v152 = v309;
    v153 = 0;
    while (true) {
      lab_0x401cd8:
        // 0x401cd8
        v130 = v153;
        int64_t v157 = v152;
        v158 = v151;
        v100 = v149;
        v98 = v148;
        v124 = v147;
        int32_t v159 = __getdelim((char **)&v160, (int32_t *)&v161, 10, v162); // 0x401cea
        v132 = v124;
        v133 = v98;
        v134 = v100;
        int64_t v163; // 0x401940
        v135 = v163;
        v136 = v158;
        v137 = v157;
        v138 = v130;
        if (v159 < 1) {
            // break -> 0x401fa5
            break;
        }
        // 0x401cf8
        v145 = v150;
        int64_t v164 = v160; // 0x401cf8
        char v165 = *(char *)v164; // 0x401cfd
        v120 = v163;
        v118 = v158;
        v116 = v157;
        if (v165 == 35) {
            goto lab_0x401da6;
        } else {
            int64_t v166 = v159; // 0x401cea
            int64_t v167 = v166 - 1;
            char * v168 = (char *)(v164 + v167);
            char v169 = *v168; // 0x401d0a
            char v170 = v165; // 0x401d13
            int64_t v171 = v166; // 0x401d13
            int64_t v172 = v164; // 0x401d13
            if (v169 == 10) {
                // 0x401d15
                *v168 = 0;
                int64_t v173 = v160; // 0x401d1e
                char v174 = *(char *)v173; // 0x401d23
                v170 = v174;
                v171 = v167;
                v172 = v173;
            }
            // 0x401d27
            v39 = v172;
            v40 = v171;
            char v175 = v170;
            v36 = 0;
            v34 = v175;
            v32 = 0;
            if (v175 != 32) {
                goto lab_0x401d3e;
            } else {
                goto lab_0x401d30;
            }
        }
    }
  lab_0x401fa5_2:;
    int64_t v340 = v138;
    int64_t v341 = v137;
    int64_t v342 = v136;
    int64_t v343 = v160; // 0x401fa5
    free((int64_t *)v343);
    int32_t v344 = *(int32_t *)v154; // 0x401faf
    int32_t v345 = v344 & 32; // 0x401fb2
    int64_t v327; // 0x401940
    int64_t v346; // 0x401940
    int64_t v329; // 0x401940
    int64_t v347; // 0x401940
    int64_t v330; // 0x401940
    int64_t v348; // 0x401940
    int64_t v331; // 0x401940
    int32_t v349; // 0x401940
    int64_t v328; // 0x401940
    int64_t v350; // 0x401940
    char v351; // 0x401940
    int32_t v352; // 0x401940
    int32_t v353; // 0x401940
    if (v345 != 0) {
        // 0x4024f9
        function_406470(0, 3, v155);
        error(0, (int32_t)"%s: read error" ^ (int32_t)"%s: read error", dcgettext(NULL, "%s: read error", 5));
        v349 = (int32_t)&g57 ^ (int32_t)&g57;
        v350 = v154;
        v346 = v342;
        v347 = v341;
        v348 = v340;
        goto lab_0x40203b;
    } else {
        int64_t v354 = v135;
        v353 = v134;
        v352 = v133;
        v351 = v132;
        if (strcmp_rc != 0) {
            int64_t v355 = function_406e50(v154, v354); // 0x402451
            v327 = v155;
            v328 = v154;
            v329 = v342;
            v330 = v341;
            v331 = v340;
            if ((int32_t)v355 == 0) {
                goto lab_0x401fc6;
            } else {
                goto lab_0x402259;
            }
        } else {
            goto lab_0x401fc6;
        }
    }
  lab_0x402259:;
    int64_t v356 = v331;
    int64_t v357 = v330;
    int64_t v358 = v329;
    int64_t v359 = v328;
    int64_t v360 = v327;
    int64_t v361 = function_406470(0, 3, v360); // 0x402265
    int32_t * v362 = __errno_location(); // 0x40226d
    uint32_t err_num = *v362; // 0x40227c
    error(0, err_num, "%s", (char *)v361);
    v349 = (int32_t)&g57 ^ (int32_t)&g57;
    v350 = v359;
    v346 = v358;
    v347 = v357;
    v348 = v356;
    goto lab_0x40203b;
  lab_0x40203b:;
    int64_t v363 = v348;
    int64_t v364 = v347;
    int64_t v365 = v346;
    int64_t v366 = v350;
    int32_t v367 = v349;
    int32_t v311; // 0x401940
    v296 = 0x1000000 * (v367 & v311) >> 24;
    v294 = v366;
    v292 = v365;
    v290 = v364;
    v288 = v363;
    goto lab_0x4021b1;
  lab_0x4025d9:;
    int64_t v368 = v318;
    struct _IO_FILE * stream = g28; // 0x4025e8
    fwrite_unlocked((int64_t *)"SHA1", 1, 4, stream);
    struct _IO_FILE * stream2 = g28; // 0x4025fe
    fwrite_unlocked((int64_t *)" (", 1, 2, stream2);
    int64_t v313; // 0x401c59
    function_402a40(v313, v368);
    struct _IO_FILE * stream3 = g28; // 0x402625
    fwrite_unlocked((int64_t *)") = ", 1, 4, stream3);
    uint64_t v369 = g39; // 0x402636
    v321 = v368;
    int64_t v370 = v315; // 0x402640
    if (v369 >= 2) {
        goto lab_0x40230c;
    } else {
        goto lab_0x402340;
    }
  lab_0x402371:;
    int64_t v371 = v323;
    int64_t v372 = v322;
    struct _IO_FILE * v373 = g28; // 0x402371
    int64_t v374 = (int64_t)v373; // 0x402371
    int64_t * v375 = (int64_t *)(v374 + 40); // 0x402378
    uint64_t v376 = *v375; // 0x402378
    uint64_t v377 = *(int64_t *)(v374 + 48); // 0x40237c
    if (v376 >= v377) {
        // 0x402837
        __overflow(v373, 32);
    } else {
        // 0x402386
        *v375 = v376 + 1;
        *(char *)v376 = 32;
    }
    struct _IO_FILE * v378 = g28; // 0x402391
    int64_t v379 = (int64_t)v378; // 0x402391
    int64_t * v380 = (int64_t *)(v379 + 40); // 0x402398
    uint64_t v381 = *v380; // 0x402398
    uint64_t v382 = *(int64_t *)(v379 + 48); // 0x40239c
    if (v381 >= v382) {
        // 0x402829
        int32_t v383; // 0x401c3e
        __overflow(v378, v383);
    } else {
        // 0x4023a6
        *v380 = v381 + 1;
        char v384; // 0x401c42
        *(char *)v381 = v384;
    }
    int64_t v385 = v372 & 0xffffffff; // 0x4023bb
    function_402a40(v313, v385);
    v370 = v371;
    goto lab_0x402340;
  lab_0x40230c:;
    int64_t v423 = v321;
    int64_t v424 = 0; // 0x40230e
    int64_t v425 = v424;
    int64_t v426; // 0x401940
    unsigned char v427 = *(char *)(v426 + v425); // 0x402310
    int64_t v428 = v425 + 1; // 0x402321
    __printf_chk(1, "%02x", (int32_t)v427);
    uint64_t v429 = g39; // 0x40232a
    v424 = v428;
    while (v429 / 2 > v428) {
        // 0x402310
        v425 = v424;
        v427 = *(char *)(v426 + v425);
        v428 = v425 + 1;
        __printf_chk(1, "%02x", (int32_t)v427);
        v429 = g39;
        v424 = v428;
    }
    // 0x402339
    v370 = v428;
    v322 = v423;
    v323 = v428;
    if ((char)v319 == 0) {
        goto lab_0x402371;
    } else {
        goto lab_0x402340;
    }
  lab_0x401fc6:;
    int64_t v400; // 0x401940
    int64_t v393; // 0x401940
    int64_t v399; // 0x401940
    int64_t v395; // 0x401940
    int32_t v397; // 0x401940
    if ((char)v340 == 0) {
        int64_t v430 = function_406470(0, 3, v155); // 0x4024ab
        error(0, (int32_t)"%s: no properly formatted %s checksum lines found" ^ (int32_t)"%s: no properly formatted %s checksum lines found", dcgettext(NULL, "%s: no properly formatted %s checksum lines found", 5));
        v397 = v345;
        v395 = v430;
        v393 = v340;
        goto lab_0x402036;
    } else {
        char v431 = g38; // 0x401fcf
        v399 = v340;
        if (v431 != 0) {
            goto lab_0x4022a8;
        } else {
            // 0x401fdc
            if (v342 != 0) {
                // 0x40276e
                error(0, (int32_t)"WARNING: %lu line is improperly formatted" ^ (int32_t)"WARNING: %lu line is improperly formatted", dcngettext(NULL, "WARNING: %lu line is improperly formatted", "WARNING: %lu lines are improperly formatted", (int32_t)v342, 5));
            }
            int64_t v432 = v340; // 0x401feb
            if (v353 != 0) {
                // 0x402739
                error(0, (int32_t)"WARNING: %lu listed file could not be read" ^ (int32_t)"WARNING: %lu listed file could not be read", dcngettext(NULL, "WARNING: %lu listed file could not be read", "WARNING: %lu listed files could not be read", v353, 5));
                v432 = v353;
            }
            int64_t v433 = v432;
            int64_t v434 = v433; // 0x401ff7
            if (v352 != 0) {
                // 0x402704
                error(0, (int32_t)"WARNING: %lu computed checksum did NOT match" ^ (int32_t)"WARNING: %lu computed checksum did NOT match", dcngettext(NULL, "WARNING: %lu computed checksum did NOT match", "WARNING: %lu computed checksums did NOT match", v352, 5));
                v434 = v352;
            }
            int64_t v435 = v434;
            char v436 = *(char *)&g36; // 0x401ffd
            v399 = v435;
            if (v436 == 0) {
                goto lab_0x4022a8;
            } else {
                // 0x40200a
                v400 = v435;
                if (v351 == 0) {
                    int64_t v437 = function_406470(0, 3, v155); // 0x4026d5
                    error(0, (int32_t)"%s: no file was verified" ^ (int32_t)"%s: no file was verified", dcgettext(NULL, "%s: no file was verified", 5));
                    v397 = v345;
                    v395 = v437;
                    v393 = v435;
                    goto lab_0x402036;
                } else {
                    goto lab_0x402015;
                }
            }
        }
    }
  lab_0x402340:;
    int64_t v386 = v370;
    struct _IO_FILE * v387 = g28; // 0x402340
    int64_t v388 = (int64_t)v387; // 0x402340
    int64_t * v389 = (int64_t *)(v388 + 40); // 0x402347
    uint64_t v390 = *v389; // 0x402347
    uint64_t v391 = *(int64_t *)(v388 + 48); // 0x40234b
    int64_t v310; // 0x401940
    int64_t v308; // 0x401940
    if (v390 >= v391) {
        // 0x4027e1
        __overflow(v387, 10);
        v296 = v311;
        v294 = v386;
        v292 = v310;
        v290 = v309;
        v288 = v308;
    } else {
        // 0x402355
        *v389 = v390 + 1;
        *(char *)v390 = 10;
        v296 = v311;
        v294 = v386;
        v292 = v310;
        v290 = v309;
        v288 = v308;
    }
    goto lab_0x4021b1;
  lab_0x402036:;
    int64_t v392 = v393;
    int64_t v394 = v395;
    uint32_t v396 = v397;
    v349 = v396 % 2;
    v350 = v394;
    v346 = v342;
    v347 = v341;
    v348 = v392;
    goto lab_0x40203b;
  lab_0x4022a8:;
    int64_t v398 = v399;
    v400 = v398;
    v397 = v345;
    v395 = v154;
    v393 = v398;
    if (v351 != 0) {
        goto lab_0x402015;
    } else {
        goto lab_0x402036;
    }
  lab_0x402015:;
    int64_t v401 = v400;
    v397 = v345;
    v395 = v154;
    v393 = v401;
    if ((v353 || v352) == 0) {
        char v402 = *(char *)&g34; // 0x402021
        v397 = v402 ^ 1 | (char)(v342 == 0);
        v395 = v154;
        v393 = v401;
    }
    goto lab_0x402036;
    // 0x4019b8
    goto lab_0x4019b8_2;
  lab_0x401df3:
    // 0x401df3
    v26 = v9;
    v23 = v10;
    v29 = (int64_t)"the --ignore-missing option is meaningful only when verifying checksums";
    v15 = v11;
    v18 = v12;
    v21 = v13;
    if ((char)v12 == 0) {
        // 0x4026aa
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --ignore-missing option is meaningful only when verifying checksums", 5));
        // 0x4026bf
        function_402c90(1);
        // UNREACHABLE
    }
    goto lab_0x401bb6;
  lab_0x401bb6:;
    int64_t v403 = v26; // 0x401bbd
    int64_t v404 = v23; // 0x401bbd
    int64_t v405 = v29; // 0x401bbd
    int64_t v406 = v15; // 0x401bbd
    int64_t v407 = v18; // 0x401bbd
    int64_t v408 = v21; // 0x401bbd
    v28 = v26;
    v25 = v23;
    v31 = v29;
    v16 = v15;
    v19 = v18;
    v22 = v21;
    if (g37 != 0) {
        goto lab_0x401bdb;
    } else {
        goto lab_0x401bbf;
    }
  lab_0x401bdb:;
    int64_t v409 = v16;
    int64_t v410 = (0x100000000 * v25 >> 29) + v28; // 0x401be7
    int32_t v411 = *(int32_t *)0x60c29c; // 0x401bf0
    int64_t v412 = v410; // 0x401bf9
    if (v411 == (int32_t)v25) {
        // 0x401bfb
        *(int64_t *)v410 = (int64_t)"-";
        v412 = v410 + 8;
    }
    // 0x401c10
    if (v412 > 8 * (int64_t)v411 + v28) {
        // 0x401c23
        while (true) {
          lab_0x401c50:
            // 0x401c50
            v308 = v306;
            v309 = v305;
            v310 = v304;
            v311 = v302;
            int64_t v312 = v301; // 0x401c50
            v313 = *(int64_t *)v312;
            char * str2 = (char *)v313; // 0x401c5c
            uint32_t v314; // 0x401c2e
            if ((char)v314 == 0) {
                // 0x40218d
                v315 = v303;
                int64_t v316; // bp-120, 0x401940
                int64_t v317 = function_402af0(v313, &v316, &v220); // 0x40219f
                v296 = 0;
                v294 = v315;
                v292 = v310;
                v290 = v309;
                v288 = v308;
                if ((char)v317 != 0) {
                    // 0x4022b8
                    if (strchr(str2, 92) == NULL) {
                        // 0x4025b4
                        if (strchr(str2, 10) != NULL) {
                            goto lab_0x4022d0;
                        } else {
                            // 0x4025cc
                            v318 = 0;
                            if ((char)v319 == 0) {
                                uint64_t v320 = g39; // 0x402365
                                v321 = 0;
                                v322 = 0;
                                v323 = v315;
                                if (v320 >= 2) {
                                    goto lab_0x40230c;
                                } else {
                                    goto lab_0x402371;
                                }
                            } else {
                                goto lab_0x4025d9;
                            }
                        }
                    } else {
                        goto lab_0x4022d0;
                    }
                } else {
                    goto lab_0x4021b1;
                }
            } else {
                // 0x401c67
                strcmp_rc = strcmp(str2, "-");
                if (strcmp_rc != 0) {
                    int64_t v324 = function_404930(v313, (int64_t *)"r"); // 0x402248
                    v325 = str2;
                    v326 = v324;
                    v327 = v313;
                    v328 = v324;
                    v329 = v310;
                    v330 = v309;
                    v331 = v308;
                    if (v324 != 0) {
                        goto lab_0x401ca1;
                    } else {
                        goto lab_0x402259;
                    }
                } else {
                    // 0x401c7d
                    g41 = 1;
                    struct _IO_FILE * v332 = g29; // 0x401c95
                    v325 = dcgettext(NULL, "standard input", 5);
                    v326 = (int64_t)v332;
                    goto lab_0x401ca1;
                }
            }
        }
    }
  lab_0x4021c5:
    // 0x4021c5
    if (g41 == 0 || (int32_t)function_406e50((int64_t)g29, v31) != -1) {
        // 0x4021d2
        return 0;
    }
    char * format = dcgettext(NULL, "standard input", 5); // 0x40266c
    uint32_t err_num2 = *__errno_location(); // 0x402681
    error(1, err_num2, format);
    v27 = (int64_t)format;
    v24 = v25;
    v30 = err_num2;
    v14 = (int32_t)v409 != -1 ? v409 : 0;
    v17 = v19;
    v20 = v22;
    goto lab_0x40268a;
  lab_0x401bbf:;
    int64_t v418 = v408;
    int64_t v419 = v407;
    int64_t v420 = v406;
    int64_t v421 = v404;
    int64_t v422 = v403;
    v28 = v422;
    v25 = v421;
    v31 = v405;
    v16 = v420;
    v19 = v419;
    v22 = v418;
    if (*(char *)&g34 != 0) {
        // 0x401bc8
        v28 = v422;
        v25 = v421;
        v31 = (int64_t)"the --strict option is meaningful only when verifying checksums";
        v16 = v420;
        v19 = v419;
        v22 = v418;
        if ((char)v419 == 0) {
            // 0x4026aa
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --strict option is meaningful only when verifying checksums", 5));
            // 0x4026bf
            function_402c90(1);
            // UNREACHABLE
        }
    }
    goto lab_0x401bdb;
  lab_0x40268a:;
    int64_t v413 = v20;
    int64_t v414 = v17;
    int64_t v415 = v14;
    int64_t v416 = v24;
    int64_t v417 = v27;
    v403 = v417;
    v404 = v416;
    v405 = v30;
    v406 = v415;
    v407 = v414;
    v408 = v413;
    if (g35 == 1) {
        // 0x402697
        v403 = v417;
        v404 = v416;
        v405 = (int64_t)"the --quiet option is meaningful only when verifying checksums";
        v406 = v415;
        v407 = v414;
        v408 = v413;
        if ((char)v414 == 0) {
            // 0x4026aa
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"the --quiet option is meaningful only when verifying checksums", 5));
            // 0x4026bf
            function_402c90(1);
            // UNREACHABLE
        }
    }
    goto lab_0x401bbf;
}
// Address range: 0x402870 - 0x40289b
// Address range: 0x40289b - 0x4028ba
int64_t function_40289b(void) {
    // 0x40289b
    return &g27;
}
// Address range: 0x4028ba - 0x4028f1
int64_t function_4028ba(void) {
    // 0x4028ba
    return 0;
}
// Address range: 0x4028f1 - 0x402948
int64_t function_4028f1(void) {
    // 0x4028f1
    if (g32 != 0) {
        // 0x402947
        int64_t result; // 0x4028f1
        return result;
    }
    int64_t v1 = g33; // 0x402924
    int64_t result2; // 0x402936
    if (g33 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x402936
        result2 = function_40289b();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x402926
        v1++;
    }
    // 0x40291a
    g33 = v1;
    // 0x402936
    result2 = function_40289b();
    g32 = 1;
    return result2;
}
// Address range: 0x402948 - 0x40294d
int64_t function_402948(void) {
    // 0x402948
    return function_4028ba();
}
// Address range: 0x402950 - 0x4029ad
int64_t function_402950(int64_t a1) {
    uint64_t v1 = g39; // 0x402959
    int64_t v2; // 0x402950
    if (v1 == 0) {
        // 0x4029a0
        return v2 & -256 | (int64_t)(*(char *)a1 == 0);
    }
    int16_t * v3 = *__ctype_b_loc(); // 0x40296a
    int64_t v4 = 0; // 0x40296f
    int64_t v5 = a1; // 0x40296f
    unsigned char v6 = *(char *)v5; // 0x402987
    while ((*(char *)((int64_t)v3 + 1 + 2 * (int64_t)v6) & 16) != 0) {
        // 0x402978
        v4 = v4 + 1 & 0xffffffff;
        v5++;
        v2 = v4;
        int64_t v7 = v5; // 0x402985
        if (v4 >= v1) {
            // 0x4029a0
            return v2 & -256 | (int64_t)(*(char *)v7 == 0);
        }
        v6 = *(char *)v5;
    }
    // 0x402991
    return 0;
}
// Address range: 0x4029b0 - 0x402a31
int64_t function_4029b0(int64_t result, uint64_t a2, int64_t a3) {
    int64_t v1 = result; // 0x4029bd
    if (a2 == 0) {
        // 0x4029e3
        return result;
    }
    int64_t v2 = 0; // 0x4029bd
    int64_t result2; // 0x4029b0
    int64_t v3; // 0x4029b0
    int64_t v4; // 0x4029b0
    while (true) {
      lab_0x4029bf:;
        int64_t v5 = v2;
        char v6 = *(char *)(v5 + result); // 0x4029bf
        result2 = 0;
        if (v6 == 0) {
            // break -> 0x4029e3
            break;
        }
        // 0x4029c7
        v3 = v1;
        if (v6 != 92) {
            // 0x4029f0
            *(char *)v3 = v6;
            v4 = v5;
            goto lab_0x4029f6;
        } else {
            // 0x4029cc
            result2 = 0;
            if ((int64_t)(a2 - 1) == v5) {
                // break -> 0x4029e3
                break;
            }
            int64_t v7 = v5 + 1; // 0x4029d1
            result2 = 0;
            switch (*(char *)(v7 + result)) {
                case 92: {
                    // 0x402a28
                    *(char *)v3 = 92;
                    v4 = v7;
                    goto lab_0x4029f6;
                }
                case 110: {
                    // 0x402a18
                    *(char *)v3 = 10;
                    v4 = v7;
                    goto lab_0x4029f6;
                }
                default: {
                    return result2;
                }
            }
        }
    }
    // 0x4029e3
    return result2;
  lab_0x4029f6:
    // 0x4029f6
    v1 = v3 + 1;
    v2 = v4 + 1;
    if (v2 >= a2) {
        // 0x402a03
        result2 = result;
        if (v1 >= a2 + result) {
            return result2;
        } else {
            // 0x402a0b
            *(char *)v1 = 0;
            result2 = result;
            return result2;
        }
    }
    goto lab_0x4029bf;
}
// Address range: 0x402a40 - 0x402ae5
int64_t function_402a40(int64_t a1, int64_t a2) {
    if ((char)a2 == 0) {
        // 0x402ad8
        return fputs_unlocked((char *)a1, g28);
    }
    char v1 = *(char *)a1; // 0x402a69
    if (v1 == 0) {
        // 0x402ac0
        int64_t result; // 0x402a40
        return result;
    }
    int64_t v2 = a1; // 0x402a6f
    int64_t result2; // 0x402a40
    uint64_t v3; // 0x402a50
    int64_t v4; // 0x402a71
    int64_t * v5; // 0x402a50
    if (v1 == 10) {
        // 0x402aa0
        result2 = fwrite_unlocked((int64_t *)"\\n", 1, 2, g28);
    } else {
        if (v1 != 92) {
            // 0x402a50
            v4 = (int64_t)g28;
            v5 = (int64_t *)(v4 + 40);
            v3 = *v5;
            if (v3 >= *(int64_t *)(v4 + 48)) {
                // 0x402ac8
                result2 = __overflow(g28, (int32_t)v1);
            } else {
                // 0x402a5a
                *v5 = v3 + 1;
                *(char *)v3 = v1;
                result2 = v3;
            }
        } else {
            // 0x402a84
            result2 = fwrite_unlocked((int64_t *)"\\\\", 1, 2, g28);
        }
    }
    // 0x402a65
    v2++;
    char v6 = *(char *)v2; // 0x402a69
    while (v6 != 0) {
        unsigned char v7 = v6;
        if (v7 == 10) {
            // 0x402aa0
            result2 = fwrite_unlocked((int64_t *)"\\n", 1, 2, g28);
        } else {
            if (v7 != 92) {
                // 0x402a50
                v4 = (int64_t)g28;
                v5 = (int64_t *)(v4 + 40);
                v3 = *v5;
                if (v3 >= *(int64_t *)(v4 + 48)) {
                    // 0x402ac8
                    result2 = __overflow(g28, (int32_t)v7);
                } else {
                    // 0x402a5a
                    *v5 = v3 + 1;
                    *(char *)v3 = v7;
                    result2 = v3;
                }
            } else {
                // 0x402a84
                result2 = fwrite_unlocked((int64_t *)"\\\\", 1, 2, g28);
            }
        }
        // 0x402a65
        v2++;
        v6 = *(char *)v2;
    }
    // 0x402ac0
    return result2;
}
// Address range: 0x402af0 - 0x402c82
int64_t function_402af0(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    bool v3; // 0x402af0
    int64_t v4 = v3 ? -1 : 1; // 0x402b0d
    int64_t v5 = (int64_t)"-"; // 0x402af0
    int64_t v6 = a1; // 0x402af0
    int64_t v7 = 2; // 0x402b0d
    unsigned char v8 = *(char *)v6; // 0x402b0d
    char v9 = *(char *)v5; // 0x402b0d
    char v10 = v9; // 0x402b0d
    bool v11 = false; // 0x402b0d
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
    *(char *)a3 = 0;
    int64_t v13; // 0x402af0
    if ((v8 >= v12 && !v11) != v8 < v12) {
        int64_t v14 = function_404930(a1, (int64_t *)"r"); // 0x402b6b
        if (v14 == 0) {
            int32_t * err_num = __errno_location(); // 0x402c30
            unsigned char result = *(char *)&g36; // 0x402c35
            if (result != 0) {
                // 0x402c45
                if (*err_num == 2) {
                    // 0x402c78
                    *(char *)a3 = 1;
                    // 0x402b4f
                    return result;
                }
            }
            // 0x402c4a
            error(0, *err_num, "%s", (char *)function_406470(0, 3, a1));
            // 0x402b4f
            return 0;
        }
        // 0x402b7c
        function_404900(v14, 2, v1);
        int64_t v15 = function_4047c0(v14, v2); // 0x402b8f
        v13 = v14;
        if ((int32_t)v15 == 0) {
            int64_t result2 = 1; // 0x402ba2
            if ((int32_t)function_406e50(v14, v2) != 0) {
                // 0x402ba4
                error(0, *__errno_location(), "%s", (char *)function_406470(0, 3, a1));
                result2 = 0;
            }
            // 0x402b4f
            return result2;
        }
    } else {
        int64_t v16 = (int64_t)g29; // 0x402b1b
        g41 = 1;
        function_404900(v16, 2, v1);
        int64_t v17 = function_4047c0(v16, v2); // 0x402b3c
        v13 = v16;
        if ((int32_t)v17 == 0) {
            // 0x402b4f
            return 1;
        }
    }
    int64_t v18 = function_406470(0, 3, a1); // 0x402bed
    uint32_t err_num2 = *__errno_location(); // 0x402c04
    error(0, err_num2, "%s", (char *)v18);
    if (v13 != (int64_t)g29) {
        // 0x402c1a
        function_406e50(v13, (int64_t)err_num2);
    }
    // 0x402b4f
    return 0;
}
// Address range: 0x402c90 - 0x40305d
int64_t function_402c90(int32_t status) {
    // 0x402c90
    if (status != 0) {
        // 0x402caa
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402ccf
        exit(status);
        // UNREACHABLE
    }
    // 0x402cd6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\nPrint or check %s (%d-bit) checksums.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\n  -b, --binary         read in binary mode\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "  -c, --check          read %s sums from the FILEs and check them\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --tag            create a BSD-style checksum\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "  -t, --text           read in text mode (default)\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "\nThe following five options are useful only when verifying checksums:\n      --ignore-missing  don't fail or report status for missing files\n      --quiet          don't print OK for each successfully verified file\n      --status         don't output anything, status code shows success\n      --strict         exit non-zero for improperly formatted checksum lines\n  -w, --warn           warn about improperly formatted checksum lines\n\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g28);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g28);
    __printf_chk(1, dcgettext(NULL, "\nThe sums are computed as described in %s.  When checking, the input\nshould be a former output of this program.  The default mode is to print a\nline with checksum, a space, a character indicating input mode ('*' for binary,\n' ' for text or where binary is insignificant), and name for each FILE.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402e3e
    bool v2; // 0x402c90
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402ec0
    int64_t v6 = *(int64_t *)v5; // 0x402ec4
    int64_t v7 = 8; // 0x402eca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sha1sum";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402ed6
        char v11 = *(char *)v9; // 0x402ed6
        char v12 = v11; // 0x402ed6
        bool v13 = false; // 0x402ed6
        while (v10 == v11) {
            // 0x402ecc
            v7--;
            int64_t v14 = v9 + v3; // 0x402ed6
            int64_t v15 = v8 + v3; // 0x402ed6
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
            // break -> 0x402ee2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x402ee2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402ff4;
        } else {
            // 0x402fde
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403033
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402f44;
            } else {
                goto lab_0x402ff4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402f44;
        } else {
            // 0x402f2a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403033
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402f44;
            } else {
                goto lab_0x402f44;
            }
        }
    }
  lab_0x402ff4:
    // 0x402ff4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402ccf
    exit(status);
    // UNREACHABLE
  lab_0x402f44:
    // 0x402f44
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402f84
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402ccf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403060 - 0x403068
int64_t function_403060(int64_t a1) {
    // 0x403060
    g43 = a1;
    int64_t result; // 0x403060
    return result;
}
// Address range: 0x403070 - 0x403078
int64_t function_403070(int64_t a1) {
    // 0x403070
    g42 = a1;
    int64_t result; // 0x403070
    return result;
}
// Address range: 0x403080 - 0x40311e
int64_t function_403080(void) {
    // 0x403080
    int32_t * err_num; // 0x403096
    if ((int32_t)function_407f00((int64_t)g28) == 0) {
        goto lab_0x4030ac;
    } else {
        // 0x403096
        err_num = __errno_location();
        if (g42 == 0) {
            goto lab_0x4030c3;
        } else {
            // 0x4030a7
            if (*err_num != 32) {
                goto lab_0x4030c3;
            } else {
                goto lab_0x4030ac;
            }
        }
    }
  lab_0x4030ac:;
    int64_t result = function_407f00((int64_t)g31); // 0x4030b3
    if ((int32_t)result == 0) {
        // 0x4030bc
        return result;
    }
    // 0x4030fe
    _exit(g18);
    // UNREACHABLE
  lab_0x4030c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4030cf
    if (g43 == 0) {
        // 0x403109
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4030e3
        error(0, *err_num, "%s: %s", (char *)function_406440((int64_t)g43), v1);
    }
    // 0x4030fe
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403120 - 0x40314d
int64_t function_403120(int64_t a1) {
    // 0x403120
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)a1 = -0x1032547698badcff;
    *(int64_t *)(a1 + 8) = 0x1032547698badcfe;
    *(int64_t *)(a1 + 16) = 0xc3d2e1f0;
    return 0xc3d2e1f0;
}
// Address range: 0x403150 - 0x40317a
int64_t function_403150(int64_t a1, int64_t result) {
    // 0x403150
    int64_t v1; // 0x403150
    *(int32_t *)result = llvm_bswap_i32((int32_t)v1);
    *(int32_t *)(result + 4) = llvm_bswap_i32(*(int32_t *)(a1 + 4));
    *(int32_t *)(result + 8) = llvm_bswap_i32(*(int32_t *)(a1 + 8));
    *(int32_t *)(result + 12) = llvm_bswap_i32(*(int32_t *)(a1 + 12));
    *(int32_t *)(result + 16) = llvm_bswap_i32(*(int32_t *)(a1 + 16));
    return result;
}
// Address range: 0x403180 - 0x40431d
int64_t function_403180(uint64_t a1, uint64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x403185
    uint64_t v2 = (a2 & -4) + a1; // 0x403195
    int32_t * v3 = (int32_t *)(a3 + 20); // 0x4031a6
    uint32_t v4 = *v3 + v1; // 0x4031a6
    int32_t * v5 = (int32_t *)(a3 + 8); // 0x4031a9
    int32_t * v6 = (int32_t *)(a3 + 12); // 0x4031b9
    int64_t v7; // 0x403180
    int32_t result = v7;
    int32_t * v8 = (int32_t *)(a3 + 4); // 0x4031c4
    int32_t * v9 = (int32_t *)(a3 + 16); // 0x4031c7
    *v3 = v4;
    int32_t * v10 = (int32_t *)(a3 + 24); // 0x4031ce
    *v10 = (int32_t)(v4 < v1) + (int32_t)(a2 / 0x100000000) + *v10;
    if (v2 <= a1) {
        // 0x40430e
        return result;
    }
    int32_t v11 = *v9; // 0x4031fd
    int64_t v12 = a1; // 0x4031fd
    int32_t v13 = *v5;
    uint32_t v14 = result;
    int32_t v15 = *v6;
    uint32_t v16 = *v8;
    int64_t v17 = 0;
    int32_t v18 = llvm_bswap_i32(*(int32_t *)(v17 + v12)); // 0x40320c
    int32_t v19; // bp-96, 0x403180
    *(int32_t *)((int64_t)&v19 - 24 + v17) = v18;
    int64_t v20 = v17 + 4; // 0x40321c
    while (v17 != 60) {
        // 0x403208
        v17 = v20;
        v18 = llvm_bswap_i32(*(int32_t *)(v17 + v12));
        *(int32_t *)((int64_t)&v19 - 24 + v17) = v18;
        v20 = v17 + 4;
    }
    // 0x40321e
    v12 += 64;
    int32_t v21 = v16 / 4 | 0x40000000 * v16; // 0x40325f
    int32_t v22; // 0x403180
    uint32_t v23 = v11 + 0x5a827999 + v22 + (v14 / 0x8000000 | 32 * v14) + ((v13 ^ v15) & v16 ^ v15); // 0x40326c
    int32_t v24 = v14 / 4 | 0x40000000 * v14; // 0x403275
    int32_t v25; // 0x403180
    uint32_t v26 = v15 + 0x5a827999 + v25 + ((v13 ^ v21) & v14 ^ v13) + (v23 / 0x8000000 | 32 * v23); // 0x403288
    int32_t v27 = v23 / 4 | 0x40000000 * v23; // 0x403292
    int32_t v28; // 0x403180
    uint32_t v29 = v13 + 0x5a827999 + v28 + (v23 & (v24 ^ v21) ^ v21) + (v26 / 0x8000000 | 32 * v26); // 0x4032a7
    int32_t v30 = v26 / 4 | 0x40000000 * v26; // 0x4032b1
    int32_t v31; // 0x403180
    uint32_t v32 = v21 + 0x5a827999 + v31 + (v26 & (v27 ^ v24) ^ v24) + (v29 / 0x8000000 | 32 * v29); // 0x4032c6
    int32_t v33 = v29 / 4 | 0x40000000 * v29; // 0x4032df
    int32_t v34; // 0x403180
    uint32_t v35 = v24 + 0x5a827999 + v34 + ((v30 ^ v27) & v29 ^ v27) + (v32 / 0x8000000 | 32 * v32); // 0x4032e5
    int32_t v36 = v32 / 4 | 0x40000000 * v32; // 0x4032ee
    int32_t v37; // 0x403180
    uint32_t v38 = v37 + 0x5a827999 + v27 + ((v33 ^ v30) & v32 ^ v30) + (v35 / 0x8000000 | 32 * v35); // 0x40330b
    int32_t v39 = v35 / 4 | 0x40000000 * v35; // 0x403317
    uint32_t v40 = v30 + 0x5a827999 + ((v36 ^ v33) & v35 ^ v33) + (v38 / 0x8000000 | 32 * v38) + v19; // 0x403334
    int32_t v41 = v38 / 4 | 0x40000000 * v38; // 0x403340
    int32_t v42; // 0x403180
    uint32_t v43 = v42 + 0x5a827999 + v33 + ((v39 ^ v36) & v38 ^ v36) + (v40 / 0x8000000 | 32 * v40); // 0x40335c
    int32_t v44 = v40 / 4 | 0x40000000 * v40; // 0x403366
    int32_t v45; // 0x403180
    uint32_t v46 = v45 + 0x5a827999 + v36 + (v40 & (v41 ^ v39) ^ v39) + (v43 / 0x8000000 | 32 * v43); // 0x403381
    int32_t v47 = v43 / 4 | 0x40000000 * v43; // 0x40338b
    int32_t v48; // 0x403180
    uint32_t v49 = v48 + 0x5a827999 + v39 + ((v44 ^ v41) & v43 ^ v41) + (v46 / 0x8000000 | 32 * v46); // 0x4033a5
    int32_t v50 = v46 / 4 | 0x40000000 * v46; // 0x4033af
    int32_t v51; // 0x403180
    uint32_t v52 = v51 + 0x5a827999 + v41 + ((v47 ^ v44) & v46 ^ v44) + (v49 / 0x8000000 | 32 * v49); // 0x4033c9
    int32_t v53 = v49 / 4 | 0x40000000 * v49; // 0x4033d2
    int32_t v54; // 0x403180
    uint32_t v55 = v54 + 0x5a827999 + v44 + ((v50 ^ v47) & v49 ^ v47) + (v52 / 0x8000000 | 32 * v52); // 0x4033ef
    int32_t v56 = v52 / 4 | 0x40000000 * v52; // 0x4033fb
    int32_t v57; // 0x403180
    uint32_t v58 = v57 + 0x5a827999 + v47 + ((v53 ^ v50) & v52 ^ v50) + (v55 / 0x8000000 | 32 * v55); // 0x403418
    int32_t v59 = v55 / 4 | 0x40000000 * v55; // 0x40343d
    int32_t v60; // 0x403180
    uint32_t v61 = v60 + 0x5a827999 + v50 + ((v56 ^ v53) & v55 ^ v53) + (v58 / 0x8000000 | 32 * v58); // 0x403448
    int32_t v62 = v28 ^ v22 ^ v45 ^ v60; // 0x40344d
    int32_t v63 = 2 * v62 | (int32_t)(v62 < 0); // 0x403457
    int32_t v64; // 0x403180
    int32_t v65 = v31 ^ v25 ^ v48 ^ v64; // 0x40345f
    int32_t v66 = v58 / 4 | 0x40000000 * v58; // 0x403467
    int32_t v67 = 2 * v65 | (int32_t)(v65 < 0); // 0x403475
    uint32_t v68 = v64 + 0x5a827999 + v53 + ((v59 ^ v56) & v58 ^ v56) + (v61 / 0x8000000 | 32 * v61); // 0x403480
    int32_t v69 = v61 / 4 | 0x40000000 * v61; // 0x40348a
    int32_t v70; // 0x403180
    uint32_t v71 = v70 + 0x5a827999 + v56 + ((v66 ^ v59) & v61 ^ v59) + (v68 / 0x8000000 | 32 * v68); // 0x40349f
    int32_t v72 = v68 / 4 | 0x40000000 * v68; // 0x4034a9
    uint32_t v73 = v63 + 0x5a827999 + v59 + ((v69 ^ v66) & v68 ^ v66) + (v71 / 0x8000000 | 32 * v71); // 0x4034c1
    int32_t v74 = v71 / 4 | 0x40000000 * v71; // 0x4034cd
    int32_t v75 = v73 / 4 | 0x40000000 * v73; // 0x4034df
    uint32_t v76 = v67 + 0x5a827999 + v66 + ((v72 ^ v69) & v71 ^ v69) + (v73 / 0x8000000 | 32 * v73); // 0x4034e9
    int32_t v77 = v34 ^ v28 ^ v51 ^ v70; // 0x4034f6
    int32_t v78 = 2 * v77 | (int32_t)(v77 < 0); // 0x4034fe
    int32_t v79 = v76 / 4 | 0x40000000 * v76; // 0x403513
    uint32_t v80 = v78 + 0x5a827999 + v69 + ((v74 ^ v72) & v73 ^ v72) + (v76 / 0x8000000 | 32 * v76); // 0x40351a
    int32_t v81 = v31 ^ v37 ^ v54 ^ v63; // 0x40352a
    int32_t v82 = 2 * v81 | (int32_t)(v81 < 0); // 0x40352d
    uint32_t v83 = v82 + 0x5a827999 + v72 + ((v75 ^ v74) & v76 ^ v74) + (v80 / 0x8000000 | 32 * v80); // 0x403540
    int32_t v84 = v57 ^ v34 ^ v67 ^ v19; // 0x40354c
    int32_t v85 = 2 * v84 | (int32_t)(v84 < 0); // 0x40354f
    int32_t v86 = v80 / 4 | 0x40000000 * v80; // 0x40355e
    int32_t v87 = v83 / 4 | 0x40000000 * v83; // 0x403571
    uint32_t v88 = v85 + 0x6ed9eba1 + v74 + (v79 ^ v75 ^ v80) + (v83 / 0x8000000 | 32 * v83); // 0x403574
    int32_t v89 = v42 ^ v37 ^ v60 ^ v78; // 0x403588
    int32_t v90 = 2 * v89 | (int32_t)(v89 < 0); // 0x40358e
    int32_t v91 = v88 / 4 | 0x40000000 * v88; // 0x40359f
    uint32_t v92 = v90 + 0x6ed9eba1 + v75 + (v86 ^ v79 ^ v83) + (v88 / 0x8000000 | 32 * v88); // 0x4035a9
    int32_t v93 = v64 ^ v45 ^ v82 ^ v19; // 0x4035b6
    int32_t v94 = 2 * v93 | (int32_t)(v93 < 0); // 0x4035b9
    uint32_t v95 = v94 + 0x6ed9eba1 + v79 + (v87 ^ v86 ^ v88) + (v92 / 0x8000000 | 32 * v92); // 0x4035cc
    int32_t v96 = v48 ^ v42 ^ v70 ^ v85; // 0x4035db
    int32_t v97 = 2 * v96 | (int32_t)(v96 < 0); // 0x4035dd
    int32_t v98 = v92 / 4 | 0x40000000 * v92; // 0x4035e2
    uint32_t v99 = v97 + 0x6ed9eba1 + v86 + (v91 ^ v87 ^ v92) + (v95 / 0x8000000 | 32 * v95); // 0x4035f7
    int32_t v100 = v51 ^ v45 ^ v63 ^ v90; // 0x40360c
    int32_t v101 = 2 * v100 | (int32_t)(v100 < 0); // 0x40360f
    int32_t v102 = v95 / 4 | 0x40000000 * v95; // 0x40362b
    uint32_t v103 = v101 + 0x6ed9eba1 + v87 + (v98 ^ v91 ^ v95) + (v99 / 0x8000000 | 32 * v99); // 0x403639
    int32_t v104 = v54 ^ v48 ^ v67 ^ v94; // 0x403647
    int32_t v105 = 2 * v104 | (int32_t)(v104 < 0); // 0x403649
    int32_t v106 = v99 / 4 | 0x40000000 * v99; // 0x403663
    uint32_t v107 = v105 + 0x6ed9eba1 + v91 + (v102 ^ v98 ^ v99) + (v103 / 0x8000000 | 32 * v103); // 0x403671
    int32_t v108 = v57 ^ v51 ^ v78 ^ v97; // 0x40367f
    int32_t v109 = 2 * v108 | (int32_t)(v108 < 0); // 0x403681
    int32_t v110 = v103 / 4 | 0x40000000 * v103; // 0x4036a4
    uint32_t v111 = v109 + 0x6ed9eba1 + v98 + (v106 ^ v102 ^ v103) + (v107 / 0x8000000 | 32 * v107); // 0x4036a8
    int32_t v112 = v60 ^ v54 ^ v82 ^ v101; // 0x4036b5
    int32_t v113 = 2 * v112 | (int32_t)(v112 < 0); // 0x4036b9
    int32_t v114 = v107 / 4 | 0x40000000 * v107; // 0x4036d4
    uint32_t v115 = v113 + 0x6ed9eba1 + v102 + (v110 ^ v106 ^ v107) + (v111 / 0x8000000 | 32 * v111); // 0x4036e2
    int32_t v116 = v64 ^ v57 ^ v85 ^ v105; // 0x4036ef
    int32_t v117 = 2 * v116 | (int32_t)(v116 < 0); // 0x4036f3
    int32_t v118 = v111 / 4 | 0x40000000 * v111; // 0x40370d
    uint32_t v119 = v117 + 0x6ed9eba1 + v106 + (v114 ^ v110 ^ v111) + (v115 / 0x8000000 | 32 * v115); // 0x40371a
    int32_t v120 = v70 ^ v60 ^ v90 ^ v109; // 0x403727
    int32_t v121 = 2 * v120 | (int32_t)(v120 < 0); // 0x40372b
    uint32_t v122 = v121 + 0x6ed9eba1 + v110 + (v118 ^ v114 ^ v115) + (v119 / 0x8000000 | 32 * v119); // 0x40374f
    int32_t v123 = v115 / 4 | 0x40000000 * v115; // 0x403752
    int32_t v124 = v63 ^ v64 ^ v113 ^ v94; // 0x403760
    int32_t v125 = 2 * v124 | (int32_t)(v124 < 0); // 0x403764
    int32_t v126 = v119 / 4 | 0x40000000 * v119; // 0x40377e
    uint32_t v127 = v125 + 0x6ed9eba1 + v114 + (v123 ^ v118 ^ v119) + (v122 / 0x8000000 | 32 * v122); // 0x40378c
    int32_t v128 = v67 ^ v70 ^ v97 ^ v117; // 0x40379d
    int32_t v129 = 2 * v128 | (int32_t)(v128 < 0); // 0x4037a2
    int32_t v130 = v122 / 4 | 0x40000000 * v122; // 0x4037c3
    int32_t v131 = v78 ^ v63 ^ v101 ^ v121; // 0x4037d9
    uint32_t v132 = v129 + 0x6ed9eba1 + v118 + (v126 ^ v123 ^ v122) + (v127 / 0x8000000 | 32 * v127); // 0x4037de
    int32_t v133 = 2 * v131 | (int32_t)(v131 < 0); // 0x4037e7
    int32_t v134 = v127 / 4 | 0x40000000 * v127; // 0x4037f8
    uint32_t v135 = v133 + 0x6ed9eba1 + v123 + (v130 ^ v126 ^ v127) + (v132 / 0x8000000 | 32 * v132); // 0x403805
    int32_t v136 = v82 ^ v67 ^ v105 ^ v125; // 0x40380d
    int32_t v137 = 2 * v136 | (int32_t)(v136 < 0); // 0x403815
    int32_t v138 = v85 ^ v78 ^ v109 ^ v129; // 0x40381d
    int32_t v139 = 2 * v138 | (int32_t)(v138 < 0); // 0x40382b
    int32_t v140 = v90 ^ v82 ^ v113 ^ v133; // 0x40383e
    int32_t v141 = v132 / 4 | 0x40000000 * v132; // 0x403846
    int32_t v142 = 2 * v140 | (int32_t)(v140 < 0); // 0x403853
    int32_t v143 = v85 ^ v94 ^ v117 ^ v137; // 0x403856
    uint32_t v144 = v137 + 0x6ed9eba1 + v126 + (v134 ^ v130 ^ v132) + (v135 / 0x8000000 | 32 * v135); // 0x40385d
    int32_t v145 = v135 / 4 | 0x40000000 * v135; // 0x403874
    uint32_t v146 = v139 + 0x6ed9eba1 + v130 + (v141 ^ v134 ^ v135) + (v144 / 0x8000000 | 32 * v144); // 0x403882
    int32_t v147 = v144 / 4 | 0x40000000 * v144; // 0x403899
    uint32_t v148 = v142 + 0x6ed9eba1 + v134 + (v145 ^ v141 ^ v144) + (v146 / 0x8000000 | 32 * v146); // 0x4038a6
    int32_t v149 = 2 * v143 | (int32_t)(v143 < 0); // 0x4038a9
    int32_t v150 = v97 ^ v90 ^ v121 ^ v139; // 0x4038b6
    int32_t v151 = 2 * v150 | (int32_t)(v150 < 0); // 0x4038c3
    int32_t v152 = v146 / 4 | 0x40000000 * v146; // 0x4038cc
    uint32_t v153 = v149 + 0x6ed9eba1 + v141 + (v147 ^ v145 ^ v146) + (v148 / 0x8000000 | 32 * v148); // 0x4038d8
    int32_t v154 = v148 / 4 | 0x40000000 * v148; // 0x403900
    int32_t v155 = v94 ^ v101 ^ v125 ^ v142; // 0x403904
    int32_t v156 = 2 * v155 | (int32_t)(v155 < 0); // 0x40390a
    uint32_t v157 = v151 + 0x6ed9eba1 + v145 + (v152 ^ v147 ^ v148) + (v153 / 0x8000000 | 32 * v153); // 0x40390c
    int32_t v158 = v153 / 4 | 0x40000000 * v153; // 0x40392f
    int32_t v159 = v97 ^ v105 ^ v129 ^ v149; // 0x40393f
    int32_t v160 = 2 * v159 | (int32_t)(v159 < 0); // 0x403947
    uint32_t v161 = v156 + 0x6ed9eba1 + v147 + (v154 ^ v152 ^ v153) + (v157 / 0x8000000 | 32 * v157); // 0x403949
    int32_t v162 = v157 / 4 | 0x40000000 * v157; // 0x403966
    uint32_t v163 = v160 + 0x6ed9eba1 + v152 + (v158 ^ v154 ^ v157) + (v161 / 0x8000000 | 32 * v161); // 0x403976
    int32_t v164 = v109 ^ v101 ^ v133 ^ v151; // 0x403984
    int32_t v165 = 2 * v164 | (int32_t)(v164 < 0); // 0x40398b
    int32_t v166 = v105 ^ v113 ^ v137 ^ v156; // 0x403990
    int32_t v167 = 2 * v166 | (int32_t)(v166 < 0); // 0x4039a9
    int32_t v168 = v161 / 4 | 0x40000000 * v161; // 0x4039b5
    int32_t v169 = v117 ^ v109 ^ v139 ^ v160; // 0x4039cd
    uint32_t v170 = v165 - 0x70e44324 + v154 + ((v161 | v162) & v158 | v161 & v162) + (v163 / 0x8000000 | 32 * v163); // 0x4039d7
    int32_t v171 = v163 / 4 | 0x40000000 * v163; // 0x4039e0
    uint32_t v172 = v167 - 0x70e44324 + v158 + ((v163 | v168) & v162 | v163 & v168) + (v170 / 0x8000000 | 32 * v170); // 0x4039f7
    int32_t v173 = 2 * v169 | (int32_t)(v169 < 0); // 0x4039f9
    int32_t v174 = v170 / 4 | 0x40000000 * v170; // 0x403a17
    int32_t v175 = v121 ^ v113 ^ v142 ^ v165; // 0x403a23
    int32_t v176 = 2 * v175 | (int32_t)(v175 < 0); // 0x403a29
    uint32_t v177 = v173 - 0x70e44324 + v162 + ((v170 | v171) & v168 | v170 & v171) + (v172 / 0x8000000 | 32 * v172); // 0x403a3d
    int32_t v178 = v117 ^ v125 ^ v149 ^ v167; // 0x403a4c
    int32_t v179 = 2 * v178 | (int32_t)(v178 < 0); // 0x403a54
    int32_t v180 = v172 / 4 | 0x40000000 * v172; // 0x403a5c
    uint32_t v181 = v176 - 0x70e44324 + v168 + ((v172 | v174) & v171 | v172 & v174) + (v177 / 0x8000000 | 32 * v177); // 0x403a75
    uint32_t v182 = v179 - 0x70e44324 + v171 + ((v177 | v180) & v174 | v177 & v180) + (v181 / 0x8000000 | 32 * v181); // 0x403a99
    int32_t v183 = v177 / 4 | 0x40000000 * v177; // 0x403a9c
    int32_t v184 = v121 ^ v129 ^ v151 ^ v173; // 0x403aac
    int32_t v185 = v181 / 4 | 0x40000000 * v181; // 0x403ab7
    int32_t v186 = 2 * v184 | (int32_t)(v184 < 0); // 0x403abc
    int32_t v187 = v133 ^ v125 ^ v156 ^ v176; // 0x403ae4
    uint32_t v188 = v186 - 0x70e44324 + v174 + ((v181 | v183) & v180 | v181 & v183) + (v182 / 0x8000000 | 32 * v182); // 0x403ae8
    int32_t v189 = 2 * v187 | (int32_t)(v187 < 0); // 0x403aeb
    int32_t v190 = v182 / 4 | 0x40000000 * v182; // 0x403b0a
    uint32_t v191 = v189 - 0x70e44324 + v180 + ((v182 | v185) & v183 | v182 & v185) + (v188 / 0x8000000 | 32 * v188); // 0x403b19
    int32_t v192 = v129 ^ v137 ^ v160 ^ v179; // 0x403b2c
    int32_t v193 = 2 * v192 | (int32_t)(v192 < 0); // 0x403b30
    int32_t v194 = v133 ^ v139 ^ v165 ^ v186; // 0x403b4c
    int32_t v195 = v188 / 4 | 0x40000000 * v188; // 0x403b4f
    int32_t v196 = 2 * v194 | (int32_t)(v194 < 0); // 0x403b5e
    uint32_t v197 = v193 - 0x70e44324 + v183 + ((v188 | v190) & v185 | v188 & v190) + (v191 / 0x8000000 | 32 * v191); // 0x403b76
    int32_t v198 = v191 / 4 | 0x40000000 * v191; // 0x403b81
    uint32_t v199 = v196 - 0x70e44324 + v185 + ((v191 | v195) & v190 | v191 & v195) + (v197 / 0x8000000 | 32 * v197); // 0x403b93
    int32_t v200 = v142 ^ v137 ^ v167 ^ v189; // 0x403b97
    int32_t v201 = v197 / 4 | 0x40000000 * v197; // 0x403ba2
    int32_t v202 = 2 * v200 | (int32_t)(v200 < 0); // 0x403ba5
    uint32_t v203 = v202 - 0x70e44324 + v190 + ((v197 | v198) & v195 | v197 & v198) + (v199 / 0x8000000 | 32 * v199); // 0x403bca
    int32_t v204 = v139 ^ v149 ^ v173 ^ v193; // 0x403bd4
    int32_t v205 = 2 * v204 | (int32_t)(v204 < 0); // 0x403bdc
    int32_t v206 = v199 / 4 | 0x40000000 * v199; // 0x403c05
    uint32_t v207 = v205 - 0x70e44324 + v195 + ((v199 | v201) & v198 | v199 & v201) + (v203 / 0x8000000 | 32 * v203); // 0x403c13
    int32_t v208 = v142 ^ v151 ^ v176 ^ v196; // 0x403c22
    int32_t v209 = 2 * v208 | (int32_t)(v208 < 0); // 0x403c25
    int32_t v210 = v203 / 4 | 0x40000000 * v203; // 0x403c2e
    int32_t v211 = v156 ^ v149 ^ v179 ^ v202; // 0x403c51
    int32_t v212 = 2 * v211 | (int32_t)(v211 < 0); // 0x403c5b
    uint32_t v213 = v209 - 0x70e44324 + v198 + ((v203 | v206) & v201 | v203 & v206) + (v207 / 0x8000000 | 32 * v207); // 0x403c6e
    int32_t v214 = v207 / 4 | 0x40000000 * v207; // 0x403c80
    uint32_t v215 = v212 - 0x70e44324 + v201 + ((v207 | v210) & v206 | v207 & v210) + (v213 / 0x8000000 | 32 * v213); // 0x403c8e
    int32_t v216 = v151 ^ v160 ^ v186 ^ v205; // 0x403ca3
    int32_t v217 = 2 * v216 | (int32_t)(v216 < 0); // 0x403ca6
    int32_t v218 = v213 / 4 | 0x40000000 * v213; // 0x403cae
    uint32_t v219 = v217 - 0x70e44324 + v206 + ((v213 | v214) & v210 | v213 & v214) + (v215 / 0x8000000 | 32 * v215); // 0x403cdb
    int32_t v220 = v156 ^ v165 ^ v189 ^ v209; // 0x403cde
    int32_t v221 = 2 * v220 | (int32_t)(v220 < 0); // 0x403ce4
    int32_t v222 = v215 / 4 | 0x40000000 * v215; // 0x403cff
    uint32_t v223 = v221 - 0x70e44324 + v210 + ((v215 | v218) & v214 | v215 & v218) + (v219 / 0x8000000 | 32 * v219); // 0x403d0d
    int32_t v224 = v167 ^ v160 ^ v193 ^ v212; // 0x403d1f
    int32_t v225 = 2 * v224 | (int32_t)(v224 < 0); // 0x403d23
    int32_t v226 = v219 / 4 | 0x40000000 * v219; // 0x403d48
    uint32_t v227 = v225 - 0x70e44324 + v214 + ((v219 | v222) & v218 | v219 & v222) + (v223 / 0x8000000 | 32 * v223); // 0x403d51
    int32_t v228 = v167 ^ v176 ^ v202 ^ v221; // 0x403d5b
    int32_t v229 = 2 * v228 | (int32_t)(v228 < 0); // 0x403d60
    int32_t v230 = v165 ^ v173 ^ v196 ^ v217; // 0x403d6d
    int32_t v231 = 2 * v230 | (int32_t)(v230 < 0); // 0x403d71
    int32_t v232 = v223 / 4 | 0x40000000 * v223; // 0x403d95
    uint32_t v233 = v231 - 0x70e44324 + v218 + ((v223 | v226) & v222 | v223 & v226) + (v227 / 0x8000000 | 32 * v227); // 0x403dad
    int32_t v234 = v179 ^ v173 ^ v205 ^ v225; // 0x403dc1
    int32_t v235 = 2 * v234 | (int32_t)(v234 < 0); // 0x403dc5
    int32_t v236 = v227 / 4 | 0x40000000 * v227; // 0x403dca
    uint32_t v237 = v229 - 0x70e44324 + v222 + ((v227 | v232) & v226 | v227 & v232) + (v233 / 0x8000000 | 32 * v233); // 0x403de8
    int32_t v238 = v179 ^ v189 ^ v212 ^ v229; // 0x403e02
    int32_t v239 = v233 / 4 | 0x40000000 * v233; // 0x403e0d
    int32_t v240 = 2 * v238 | (int32_t)(v238 < 0); // 0x403e16
    uint32_t v241 = v235 - 0x70e44324 + v226 + ((v233 | v236) & v232 | v233 & v236) + (v237 / 0x8000000 | 32 * v237); // 0x403e21
    int32_t v242 = v176 ^ v186 ^ v209 ^ v231; // 0x403e43
    int32_t v243 = 2 * v242 | (int32_t)(v242 < 0); // 0x403e47
    int32_t v244 = v237 / 4 | 0x40000000 * v237; // 0x403e52
    uint32_t v245 = v243 - 0x70e44324 + v232 + ((v237 | v239) & v236 | v237 & v239) + (v241 / 0x8000000 | 32 * v241); // 0x403e6d
    int32_t v246 = v241 / 4 | 0x40000000 * v241; // 0x403e77
    uint32_t v247 = v240 - 0x359d3e2a + v236 + (v244 ^ v239 ^ v241) + (v245 / 0x8000000 | 32 * v245); // 0x403e88
    int32_t v248 = v193 ^ v186 ^ v217 ^ v235; // 0x403e91
    int32_t v249 = 2 * v248 | (int32_t)(v248 < 0); // 0x403e98
    int32_t v250 = v189 ^ v196 ^ v221 ^ v243; // 0x403eca
    int32_t v251 = v245 / 4 | 0x40000000 * v245; // 0x403ece
    uint32_t v252 = v249 - 0x359d3e2a + v239 + (v246 ^ v244 ^ v245) + (v247 / 0x8000000 | 32 * v247); // 0x403ed2
    int32_t v253 = 2 * v250 | (int32_t)(v250 < 0); // 0x403ed7
    int32_t v254 = v247 / 4 | 0x40000000 * v247; // 0x403eee
    int32_t v255 = v205 ^ v196 ^ v231 ^ v249; // 0x403ef2
    int32_t v256 = 2 * v255 | (int32_t)(v255 < 0); // 0x403f01
    uint32_t v257 = v253 - 0x359d3e2a + v244 + (v251 ^ v246 ^ v247) + (v252 / 0x8000000 | 32 * v252); // 0x403f0f
    int32_t v258 = v193 ^ v202 ^ v225 ^ v240; // 0x403f1b
    int32_t v259 = 2 * v258 | (int32_t)(v258 < 0); // 0x403f1f
    int32_t v260 = v252 / 4 | 0x40000000 * v252; // 0x403f35
    uint32_t v261 = v259 - 0x359d3e2a + v246 + (v254 ^ v251 ^ v252) + (v257 / 0x8000000 | 32 * v257); // 0x403f45
    int32_t v262 = v257 / 4 | 0x40000000 * v257; // 0x403f63
    int32_t v263 = v202 ^ v209 ^ v229 ^ v253; // 0x403f66
    int32_t v264 = 2 * v263 | (int32_t)(v263 < 0); // 0x403f6e
    uint32_t v265 = v256 - 0x359d3e2a + v251 + (v260 ^ v254 ^ v257) + (v261 / 0x8000000 | 32 * v261); // 0x403f71
    int32_t v266 = v261 / 4 | 0x40000000 * v261; // 0x403fa3
    int32_t v267 = v265 / 4 | 0x40000000 * v265; // 0x403fb9
    uint32_t v268 = v264 - 0x359d3e2a + v254 + (v262 ^ v260 ^ v261) + (v265 / 0x8000000 | 32 * v265); // 0x403fbc
    int32_t v269 = v205 ^ v212 ^ v235 ^ v259; // 0x403fca
    int32_t v270 = 2 * v269 | (int32_t)(v269 < 0); // 0x403fcd
    uint32_t v271 = v270 - 0x359d3e2a + v260 + (v266 ^ v262 ^ v265) + (v268 / 0x8000000 | 32 * v268); // 0x403fe7
    int32_t v272 = v217 ^ v209 ^ v243 ^ v256; // 0x403ff8
    int32_t v273 = 2 * v272 | (int32_t)(v272 < 0); // 0x404004
    uint32_t v274 = v273 - 0x359d3e2a + v262 + (v267 ^ v266 ^ v268) + (v271 / 0x8000000 | 32 * v271); // 0x404027
    int32_t v275 = v268 / 4 | 0x40000000 * v268; // 0x40402e
    int32_t v276 = v212 ^ v221 ^ v240 ^ v264; // 0x404039
    int32_t v277 = 2 * v276 | (int32_t)(v276 < 0); // 0x40403c
    int32_t v278 = v271 / 4 | 0x40000000 * v271; // 0x40405f
    uint32_t v279 = v277 - 0x359d3e2a + v266 + (v275 ^ v267 ^ v271) + (v274 / 0x8000000 | 32 * v274); // 0x404063
    int32_t v280 = v217 ^ v225 ^ v249 ^ v270; // 0x404078
    int32_t v281 = v274 / 4 | 0x40000000 * v274; // 0x40407e
    int32_t v282 = 2 * v280 | (int32_t)(v280 < 0); // 0x404082
    int32_t v283 = v279 / 4 | 0x40000000 * v279; // 0x40409b
    uint32_t v284 = v282 - 0x359d3e2a + v267 + (v278 ^ v275 ^ v274) + (v279 / 0x8000000 | 32 * v279); // 0x4040a3
    int32_t v285 = v231 ^ v221 ^ v253 ^ v273; // 0x4040b2
    int32_t v286 = 2 * v285 | (int32_t)(v285 < 0); // 0x4040b5
    v19 = v286;
    uint32_t v287 = v286 - 0x359d3e2a + v275 + (v281 ^ v278 ^ v279) + (v284 / 0x8000000 | 32 * v284); // 0x4040cb
    int32_t v288 = v225 ^ v229 ^ v259 ^ v277; // 0x4040db
    int32_t v289 = 2 * v288 | (int32_t)(v288 < 0); // 0x4040e0
    int32_t v290 = v284 / 4 | 0x40000000 * v284; // 0x404104
    uint32_t v291 = v289 - 0x359d3e2a + v278 + (v283 ^ v281 ^ v284) + (v287 / 0x8000000 | 32 * v287); // 0x404108
    int32_t v292 = v235 ^ v231 ^ v256 ^ v282; // 0x40411a
    int32_t v293 = v287 / 4 | 0x40000000 * v287; // 0x40411f
    int32_t v294 = 2 * v292 | (int32_t)(v292 < 0); // 0x404123
    int32_t v295 = v291 / 4 | 0x40000000 * v291; // 0x40413d
    uint32_t v296 = v294 - 0x359d3e2a + v281 + (v290 ^ v283 ^ v287) + (v291 / 0x8000000 | 32 * v291); // 0x404145
    int32_t v297 = v243 ^ v229 ^ v264 ^ v286; // 0x404157
    int32_t v298 = 2 * v297 | (int32_t)(v297 < 0); // 0x40415a
    uint32_t v299 = v298 - 0x359d3e2a + v283 + (v293 ^ v290 ^ v291) + (v296 / 0x8000000 | 32 * v296); // 0x404174
    int32_t v300 = v235 ^ v240 ^ v270 ^ v289; // 0x404187
    int32_t v301 = 2 * v300 | (int32_t)(v300 < 0); // 0x40418a
    uint32_t v302 = v301 - 0x359d3e2a + v290 + (v295 ^ v293 ^ v296) + (v299 / 0x8000000 | 32 * v299); // 0x4041aa
    int32_t v303 = v296 / 4 | 0x40000000 * v296; // 0x4041bd
    int32_t v304 = v243 ^ v249 ^ v273 ^ v294; // 0x4041c1
    int32_t v305 = 2 * v304 | (int32_t)(v304 < 0); // 0x4041c7
    int32_t v306 = v299 / 4 | 0x40000000 * v299; // 0x4041d7
    uint32_t v307 = v305 - 0x359d3e2a + v293 + (v303 ^ v295 ^ v299) + (v302 / 0x8000000 | 32 * v302); // 0x4041fa
    int32_t v308 = v253 ^ v240 ^ v277 ^ v298; // 0x4041fd
    int32_t v309 = 2 * v308 | (int32_t)(v308 < 0); // 0x404203
    int32_t v310 = v302 / 4 | 0x40000000 * v302; // 0x404214
    uint32_t v311 = v309 - 0x359d3e2a + v295 + (v306 ^ v303 ^ v302) + (v307 / 0x8000000 | 32 * v307); // 0x404226
    int32_t v312 = v249 ^ v259 ^ v282 ^ v301; // 0x404232
    int32_t v313 = 2 * v312 | (int32_t)(v312 < 0); // 0x404237
    int32_t v314 = v307 / 4 | 0x40000000 * v307; // 0x404248
    v11 += v314;
    uint32_t v315 = v313 - 0x359d3e2a + v303 + (v310 ^ v306 ^ v307) + (v311 / 0x8000000 | 32 * v311); // 0x404263
    int32_t v316 = v253 ^ v256 ^ v286 ^ v305; // 0x40426f
    int32_t v317 = 2 * v316 | (int32_t)(v316 < 0); // 0x404274
    int32_t v318 = v311 / 4 | 0x40000000 * v311; // 0x404283
    int32_t v319 = v318 + v15; // 0x404287
    uint32_t v320 = v317 - 0x359d3e2a + v306 + (v314 ^ v310 ^ v311) + (v315 / 0x8000000 | 32 * v315); // 0x404297
    int32_t v321 = v320 + v16; // 0x40429d
    int32_t v322 = v264 ^ v259 ^ v289 ^ v309; // 0x4042ab
    int32_t v323 = 2 * v322 | (int32_t)(v322 < 0); // 0x4042b2
    int32_t v324 = (v315 / 4 | 0x40000000 * v315) + v13; // 0x4042d3
    int32_t result2 = v14 - 0x359d3e2a + v323 + v310 + (v318 ^ v314 ^ v315) + (v320 / 0x8000000 | 32 * v320); // 0x4042eb
    *v8 = v321;
    *(int32_t *)a3 = result2;
    *v5 = v324;
    *v6 = v319;
    *v9 = v11;
    while (v12 < v2) {
        // 0x403200
        v13 = v324;
        v14 = result2;
        v15 = v319;
        v16 = v321;
        v17 = 0;
        v18 = llvm_bswap_i32(*(int32_t *)(v17 + v12));
        *(int32_t *)((int64_t)&v19 - 24 + v17) = v18;
        v20 = v17 + 4;
        while (v17 != 60) {
            // 0x403208
            v17 = v20;
            v18 = llvm_bswap_i32(*(int32_t *)(v17 + v12));
            *(int32_t *)((int64_t)&v19 - 24 + v17) = v18;
            v20 = v17 + 4;
        }
        // 0x40321e
        v12 += 64;
        v21 = v16 / 4 | 0x40000000 * v16;
        v23 = v11 + 0x5a827999 + v256 + (v14 / 0x8000000 | 32 * v14) + ((v13 ^ v15) & v16 ^ v15);
        v24 = v14 / 4 | 0x40000000 * v14;
        v26 = v15 + 0x5a827999 + v264 + ((v13 ^ v21) & v14 ^ v13) + (v23 / 0x8000000 | 32 * v23);
        v27 = v23 / 4 | 0x40000000 * v23;
        v29 = v13 + 0x5a827999 + v270 + (v23 & (v24 ^ v21) ^ v21) + (v26 / 0x8000000 | 32 * v26);
        v30 = v26 / 4 | 0x40000000 * v26;
        v32 = v21 + 0x5a827999 + v273 + (v26 & (v27 ^ v24) ^ v24) + (v29 / 0x8000000 | 32 * v29);
        v33 = v29 / 4 | 0x40000000 * v29;
        v35 = v24 + 0x5a827999 + v277 + ((v30 ^ v27) & v29 ^ v27) + (v32 / 0x8000000 | 32 * v32);
        v36 = v32 / 4 | 0x40000000 * v32;
        v38 = v282 + 0x5a827999 + v27 + ((v33 ^ v30) & v32 ^ v30) + (v35 / 0x8000000 | 32 * v35);
        v39 = v35 / 4 | 0x40000000 * v35;
        v40 = v30 + 0x5a827999 + ((v36 ^ v33) & v35 ^ v33) + (v38 / 0x8000000 | 32 * v38) + v19;
        v41 = v38 / 4 | 0x40000000 * v38;
        v43 = v289 + 0x5a827999 + v33 + ((v39 ^ v36) & v38 ^ v36) + (v40 / 0x8000000 | 32 * v40);
        v44 = v40 / 4 | 0x40000000 * v40;
        v46 = v294 + 0x5a827999 + v36 + (v40 & (v41 ^ v39) ^ v39) + (v43 / 0x8000000 | 32 * v43);
        v47 = v43 / 4 | 0x40000000 * v43;
        v49 = v298 + 0x5a827999 + v39 + ((v44 ^ v41) & v43 ^ v41) + (v46 / 0x8000000 | 32 * v46);
        v50 = v46 / 4 | 0x40000000 * v46;
        v52 = v301 + 0x5a827999 + v41 + ((v47 ^ v44) & v46 ^ v44) + (v49 / 0x8000000 | 32 * v49);
        v53 = v49 / 4 | 0x40000000 * v49;
        v55 = v305 + 0x5a827999 + v44 + ((v50 ^ v47) & v49 ^ v47) + (v52 / 0x8000000 | 32 * v52);
        v56 = v52 / 4 | 0x40000000 * v52;
        v58 = v309 + 0x5a827999 + v47 + ((v53 ^ v50) & v52 ^ v50) + (v55 / 0x8000000 | 32 * v55);
        v59 = v55 / 4 | 0x40000000 * v55;
        v61 = v313 + 0x5a827999 + v50 + ((v56 ^ v53) & v55 ^ v53) + (v58 / 0x8000000 | 32 * v58);
        v62 = v270 ^ v256 ^ v294 ^ v313;
        v63 = 2 * v62 | (int32_t)(v62 < 0);
        v65 = v273 ^ v264 ^ v298 ^ v317;
        v66 = v58 / 4 | 0x40000000 * v58;
        v67 = 2 * v65 | (int32_t)(v65 < 0);
        v68 = v317 + 0x5a827999 + v53 + ((v59 ^ v56) & v58 ^ v56) + (v61 / 0x8000000 | 32 * v61);
        v69 = v61 / 4 | 0x40000000 * v61;
        v71 = v323 + 0x5a827999 + v56 + ((v66 ^ v59) & v61 ^ v59) + (v68 / 0x8000000 | 32 * v68);
        v72 = v68 / 4 | 0x40000000 * v68;
        v73 = v63 + 0x5a827999 + v59 + ((v69 ^ v66) & v68 ^ v66) + (v71 / 0x8000000 | 32 * v71);
        v74 = v71 / 4 | 0x40000000 * v71;
        v75 = v73 / 4 | 0x40000000 * v73;
        v76 = v67 + 0x5a827999 + v66 + ((v72 ^ v69) & v71 ^ v69) + (v73 / 0x8000000 | 32 * v73);
        v77 = v277 ^ v270 ^ v301 ^ v323;
        v78 = 2 * v77 | (int32_t)(v77 < 0);
        v79 = v76 / 4 | 0x40000000 * v76;
        v80 = v78 + 0x5a827999 + v69 + ((v74 ^ v72) & v73 ^ v72) + (v76 / 0x8000000 | 32 * v76);
        v81 = v273 ^ v282 ^ v305 ^ v63;
        v82 = 2 * v81 | (int32_t)(v81 < 0);
        v83 = v82 + 0x5a827999 + v72 + ((v75 ^ v74) & v76 ^ v74) + (v80 / 0x8000000 | 32 * v80);
        v84 = v309 ^ v277 ^ v67 ^ v19;
        v85 = 2 * v84 | (int32_t)(v84 < 0);
        v86 = v80 / 4 | 0x40000000 * v80;
        v87 = v83 / 4 | 0x40000000 * v83;
        v88 = v85 + 0x6ed9eba1 + v74 + (v79 ^ v75 ^ v80) + (v83 / 0x8000000 | 32 * v83);
        v89 = v289 ^ v282 ^ v313 ^ v78;
        v90 = 2 * v89 | (int32_t)(v89 < 0);
        v91 = v88 / 4 | 0x40000000 * v88;
        v92 = v90 + 0x6ed9eba1 + v75 + (v86 ^ v79 ^ v83) + (v88 / 0x8000000 | 32 * v88);
        v93 = v317 ^ v294 ^ v82 ^ v19;
        v94 = 2 * v93 | (int32_t)(v93 < 0);
        v95 = v94 + 0x6ed9eba1 + v79 + (v87 ^ v86 ^ v88) + (v92 / 0x8000000 | 32 * v92);
        v96 = v298 ^ v289 ^ v323 ^ v85;
        v97 = 2 * v96 | (int32_t)(v96 < 0);
        v98 = v92 / 4 | 0x40000000 * v92;
        v99 = v97 + 0x6ed9eba1 + v86 + (v91 ^ v87 ^ v92) + (v95 / 0x8000000 | 32 * v95);
        v100 = v301 ^ v294 ^ v63 ^ v90;
        v101 = 2 * v100 | (int32_t)(v100 < 0);
        v102 = v95 / 4 | 0x40000000 * v95;
        v103 = v101 + 0x6ed9eba1 + v87 + (v98 ^ v91 ^ v95) + (v99 / 0x8000000 | 32 * v99);
        v104 = v305 ^ v298 ^ v67 ^ v94;
        v105 = 2 * v104 | (int32_t)(v104 < 0);
        v106 = v99 / 4 | 0x40000000 * v99;
        v107 = v105 + 0x6ed9eba1 + v91 + (v102 ^ v98 ^ v99) + (v103 / 0x8000000 | 32 * v103);
        v108 = v309 ^ v301 ^ v78 ^ v97;
        v109 = 2 * v108 | (int32_t)(v108 < 0);
        v110 = v103 / 4 | 0x40000000 * v103;
        v111 = v109 + 0x6ed9eba1 + v98 + (v106 ^ v102 ^ v103) + (v107 / 0x8000000 | 32 * v107);
        v112 = v313 ^ v305 ^ v82 ^ v101;
        v113 = 2 * v112 | (int32_t)(v112 < 0);
        v114 = v107 / 4 | 0x40000000 * v107;
        v115 = v113 + 0x6ed9eba1 + v102 + (v110 ^ v106 ^ v107) + (v111 / 0x8000000 | 32 * v111);
        v116 = v317 ^ v309 ^ v85 ^ v105;
        v117 = 2 * v116 | (int32_t)(v116 < 0);
        v118 = v111 / 4 | 0x40000000 * v111;
        v119 = v117 + 0x6ed9eba1 + v106 + (v114 ^ v110 ^ v111) + (v115 / 0x8000000 | 32 * v115);
        v120 = v323 ^ v313 ^ v90 ^ v109;
        v121 = 2 * v120 | (int32_t)(v120 < 0);
        v122 = v121 + 0x6ed9eba1 + v110 + (v118 ^ v114 ^ v115) + (v119 / 0x8000000 | 32 * v119);
        v123 = v115 / 4 | 0x40000000 * v115;
        v124 = v63 ^ v317 ^ v113 ^ v94;
        v125 = 2 * v124 | (int32_t)(v124 < 0);
        v126 = v119 / 4 | 0x40000000 * v119;
        v127 = v125 + 0x6ed9eba1 + v114 + (v123 ^ v118 ^ v119) + (v122 / 0x8000000 | 32 * v122);
        v128 = v67 ^ v323 ^ v97 ^ v117;
        v129 = 2 * v128 | (int32_t)(v128 < 0);
        v130 = v122 / 4 | 0x40000000 * v122;
        v131 = v78 ^ v63 ^ v101 ^ v121;
        v132 = v129 + 0x6ed9eba1 + v118 + (v126 ^ v123 ^ v122) + (v127 / 0x8000000 | 32 * v127);
        v133 = 2 * v131 | (int32_t)(v131 < 0);
        v134 = v127 / 4 | 0x40000000 * v127;
        v135 = v133 + 0x6ed9eba1 + v123 + (v130 ^ v126 ^ v127) + (v132 / 0x8000000 | 32 * v132);
        v136 = v82 ^ v67 ^ v105 ^ v125;
        v137 = 2 * v136 | (int32_t)(v136 < 0);
        v138 = v85 ^ v78 ^ v109 ^ v129;
        v139 = 2 * v138 | (int32_t)(v138 < 0);
        v140 = v90 ^ v82 ^ v113 ^ v133;
        v141 = v132 / 4 | 0x40000000 * v132;
        v142 = 2 * v140 | (int32_t)(v140 < 0);
        v143 = v85 ^ v94 ^ v117 ^ v137;
        v144 = v137 + 0x6ed9eba1 + v126 + (v134 ^ v130 ^ v132) + (v135 / 0x8000000 | 32 * v135);
        v145 = v135 / 4 | 0x40000000 * v135;
        v146 = v139 + 0x6ed9eba1 + v130 + (v141 ^ v134 ^ v135) + (v144 / 0x8000000 | 32 * v144);
        v147 = v144 / 4 | 0x40000000 * v144;
        v148 = v142 + 0x6ed9eba1 + v134 + (v145 ^ v141 ^ v144) + (v146 / 0x8000000 | 32 * v146);
        v149 = 2 * v143 | (int32_t)(v143 < 0);
        v150 = v97 ^ v90 ^ v121 ^ v139;
        v151 = 2 * v150 | (int32_t)(v150 < 0);
        v152 = v146 / 4 | 0x40000000 * v146;
        v153 = v149 + 0x6ed9eba1 + v141 + (v147 ^ v145 ^ v146) + (v148 / 0x8000000 | 32 * v148);
        v154 = v148 / 4 | 0x40000000 * v148;
        v155 = v94 ^ v101 ^ v125 ^ v142;
        v156 = 2 * v155 | (int32_t)(v155 < 0);
        v157 = v151 + 0x6ed9eba1 + v145 + (v152 ^ v147 ^ v148) + (v153 / 0x8000000 | 32 * v153);
        v158 = v153 / 4 | 0x40000000 * v153;
        v159 = v97 ^ v105 ^ v129 ^ v149;
        v160 = 2 * v159 | (int32_t)(v159 < 0);
        v161 = v156 + 0x6ed9eba1 + v147 + (v154 ^ v152 ^ v153) + (v157 / 0x8000000 | 32 * v157);
        v162 = v157 / 4 | 0x40000000 * v157;
        v163 = v160 + 0x6ed9eba1 + v152 + (v158 ^ v154 ^ v157) + (v161 / 0x8000000 | 32 * v161);
        v164 = v109 ^ v101 ^ v133 ^ v151;
        v165 = 2 * v164 | (int32_t)(v164 < 0);
        v166 = v105 ^ v113 ^ v137 ^ v156;
        v167 = 2 * v166 | (int32_t)(v166 < 0);
        v168 = v161 / 4 | 0x40000000 * v161;
        v169 = v117 ^ v109 ^ v139 ^ v160;
        v170 = v165 - 0x70e44324 + v154 + ((v161 | v162) & v158 | v161 & v162) + (v163 / 0x8000000 | 32 * v163);
        v171 = v163 / 4 | 0x40000000 * v163;
        v172 = v167 - 0x70e44324 + v158 + ((v163 | v168) & v162 | v163 & v168) + (v170 / 0x8000000 | 32 * v170);
        v173 = 2 * v169 | (int32_t)(v169 < 0);
        v174 = v170 / 4 | 0x40000000 * v170;
        v175 = v121 ^ v113 ^ v142 ^ v165;
        v176 = 2 * v175 | (int32_t)(v175 < 0);
        v177 = v173 - 0x70e44324 + v162 + ((v170 | v171) & v168 | v170 & v171) + (v172 / 0x8000000 | 32 * v172);
        v178 = v117 ^ v125 ^ v149 ^ v167;
        v179 = 2 * v178 | (int32_t)(v178 < 0);
        v180 = v172 / 4 | 0x40000000 * v172;
        v181 = v176 - 0x70e44324 + v168 + ((v172 | v174) & v171 | v172 & v174) + (v177 / 0x8000000 | 32 * v177);
        v182 = v179 - 0x70e44324 + v171 + ((v177 | v180) & v174 | v177 & v180) + (v181 / 0x8000000 | 32 * v181);
        v183 = v177 / 4 | 0x40000000 * v177;
        v184 = v121 ^ v129 ^ v151 ^ v173;
        v185 = v181 / 4 | 0x40000000 * v181;
        v186 = 2 * v184 | (int32_t)(v184 < 0);
        v187 = v133 ^ v125 ^ v156 ^ v176;
        v188 = v186 - 0x70e44324 + v174 + ((v181 | v183) & v180 | v181 & v183) + (v182 / 0x8000000 | 32 * v182);
        v189 = 2 * v187 | (int32_t)(v187 < 0);
        v190 = v182 / 4 | 0x40000000 * v182;
        v191 = v189 - 0x70e44324 + v180 + ((v182 | v185) & v183 | v182 & v185) + (v188 / 0x8000000 | 32 * v188);
        v192 = v129 ^ v137 ^ v160 ^ v179;
        v193 = 2 * v192 | (int32_t)(v192 < 0);
        v194 = v133 ^ v139 ^ v165 ^ v186;
        v195 = v188 / 4 | 0x40000000 * v188;
        v196 = 2 * v194 | (int32_t)(v194 < 0);
        v197 = v193 - 0x70e44324 + v183 + ((v188 | v190) & v185 | v188 & v190) + (v191 / 0x8000000 | 32 * v191);
        v198 = v191 / 4 | 0x40000000 * v191;
        v199 = v196 - 0x70e44324 + v185 + ((v191 | v195) & v190 | v191 & v195) + (v197 / 0x8000000 | 32 * v197);
        v200 = v142 ^ v137 ^ v167 ^ v189;
        v201 = v197 / 4 | 0x40000000 * v197;
        v202 = 2 * v200 | (int32_t)(v200 < 0);
        v203 = v202 - 0x70e44324 + v190 + ((v197 | v198) & v195 | v197 & v198) + (v199 / 0x8000000 | 32 * v199);
        v204 = v139 ^ v149 ^ v173 ^ v193;
        v205 = 2 * v204 | (int32_t)(v204 < 0);
        v206 = v199 / 4 | 0x40000000 * v199;
        v207 = v205 - 0x70e44324 + v195 + ((v199 | v201) & v198 | v199 & v201) + (v203 / 0x8000000 | 32 * v203);
        v208 = v142 ^ v151 ^ v176 ^ v196;
        v209 = 2 * v208 | (int32_t)(v208 < 0);
        v210 = v203 / 4 | 0x40000000 * v203;
        v211 = v156 ^ v149 ^ v179 ^ v202;
        v212 = 2 * v211 | (int32_t)(v211 < 0);
        v213 = v209 - 0x70e44324 + v198 + ((v203 | v206) & v201 | v203 & v206) + (v207 / 0x8000000 | 32 * v207);
        v214 = v207 / 4 | 0x40000000 * v207;
        v215 = v212 - 0x70e44324 + v201 + ((v207 | v210) & v206 | v207 & v210) + (v213 / 0x8000000 | 32 * v213);
        v216 = v151 ^ v160 ^ v186 ^ v205;
        v217 = 2 * v216 | (int32_t)(v216 < 0);
        v218 = v213 / 4 | 0x40000000 * v213;
        v219 = v217 - 0x70e44324 + v206 + ((v213 | v214) & v210 | v213 & v214) + (v215 / 0x8000000 | 32 * v215);
        v220 = v156 ^ v165 ^ v189 ^ v209;
        v221 = 2 * v220 | (int32_t)(v220 < 0);
        v222 = v215 / 4 | 0x40000000 * v215;
        v223 = v221 - 0x70e44324 + v210 + ((v215 | v218) & v214 | v215 & v218) + (v219 / 0x8000000 | 32 * v219);
        v224 = v167 ^ v160 ^ v193 ^ v212;
        v225 = 2 * v224 | (int32_t)(v224 < 0);
        v226 = v219 / 4 | 0x40000000 * v219;
        v227 = v225 - 0x70e44324 + v214 + ((v219 | v222) & v218 | v219 & v222) + (v223 / 0x8000000 | 32 * v223);
        v228 = v167 ^ v176 ^ v202 ^ v221;
        v229 = 2 * v228 | (int32_t)(v228 < 0);
        v230 = v165 ^ v173 ^ v196 ^ v217;
        v231 = 2 * v230 | (int32_t)(v230 < 0);
        v232 = v223 / 4 | 0x40000000 * v223;
        v233 = v231 - 0x70e44324 + v218 + ((v223 | v226) & v222 | v223 & v226) + (v227 / 0x8000000 | 32 * v227);
        v234 = v179 ^ v173 ^ v205 ^ v225;
        v235 = 2 * v234 | (int32_t)(v234 < 0);
        v236 = v227 / 4 | 0x40000000 * v227;
        v237 = v229 - 0x70e44324 + v222 + ((v227 | v232) & v226 | v227 & v232) + (v233 / 0x8000000 | 32 * v233);
        v238 = v179 ^ v189 ^ v212 ^ v229;
        v239 = v233 / 4 | 0x40000000 * v233;
        v240 = 2 * v238 | (int32_t)(v238 < 0);
        v241 = v235 - 0x70e44324 + v226 + ((v233 | v236) & v232 | v233 & v236) + (v237 / 0x8000000 | 32 * v237);
        v242 = v176 ^ v186 ^ v209 ^ v231;
        v243 = 2 * v242 | (int32_t)(v242 < 0);
        v244 = v237 / 4 | 0x40000000 * v237;
        v245 = v243 - 0x70e44324 + v232 + ((v237 | v239) & v236 | v237 & v239) + (v241 / 0x8000000 | 32 * v241);
        v246 = v241 / 4 | 0x40000000 * v241;
        v247 = v240 - 0x359d3e2a + v236 + (v244 ^ v239 ^ v241) + (v245 / 0x8000000 | 32 * v245);
        v248 = v193 ^ v186 ^ v217 ^ v235;
        v249 = 2 * v248 | (int32_t)(v248 < 0);
        v250 = v189 ^ v196 ^ v221 ^ v243;
        v251 = v245 / 4 | 0x40000000 * v245;
        v252 = v249 - 0x359d3e2a + v239 + (v246 ^ v244 ^ v245) + (v247 / 0x8000000 | 32 * v247);
        v253 = 2 * v250 | (int32_t)(v250 < 0);
        v254 = v247 / 4 | 0x40000000 * v247;
        v255 = v205 ^ v196 ^ v231 ^ v249;
        v256 = 2 * v255 | (int32_t)(v255 < 0);
        v257 = v253 - 0x359d3e2a + v244 + (v251 ^ v246 ^ v247) + (v252 / 0x8000000 | 32 * v252);
        v258 = v193 ^ v202 ^ v225 ^ v240;
        v259 = 2 * v258 | (int32_t)(v258 < 0);
        v260 = v252 / 4 | 0x40000000 * v252;
        v261 = v259 - 0x359d3e2a + v246 + (v254 ^ v251 ^ v252) + (v257 / 0x8000000 | 32 * v257);
        v262 = v257 / 4 | 0x40000000 * v257;
        v263 = v202 ^ v209 ^ v229 ^ v253;
        v264 = 2 * v263 | (int32_t)(v263 < 0);
        v265 = v256 - 0x359d3e2a + v251 + (v260 ^ v254 ^ v257) + (v261 / 0x8000000 | 32 * v261);
        v266 = v261 / 4 | 0x40000000 * v261;
        v267 = v265 / 4 | 0x40000000 * v265;
        v268 = v264 - 0x359d3e2a + v254 + (v262 ^ v260 ^ v261) + (v265 / 0x8000000 | 32 * v265);
        v269 = v205 ^ v212 ^ v235 ^ v259;
        v270 = 2 * v269 | (int32_t)(v269 < 0);
        v271 = v270 - 0x359d3e2a + v260 + (v266 ^ v262 ^ v265) + (v268 / 0x8000000 | 32 * v268);
        v272 = v217 ^ v209 ^ v243 ^ v256;
        v273 = 2 * v272 | (int32_t)(v272 < 0);
        v274 = v273 - 0x359d3e2a + v262 + (v267 ^ v266 ^ v268) + (v271 / 0x8000000 | 32 * v271);
        v275 = v268 / 4 | 0x40000000 * v268;
        v276 = v212 ^ v221 ^ v240 ^ v264;
        v277 = 2 * v276 | (int32_t)(v276 < 0);
        v278 = v271 / 4 | 0x40000000 * v271;
        v279 = v277 - 0x359d3e2a + v266 + (v275 ^ v267 ^ v271) + (v274 / 0x8000000 | 32 * v274);
        v280 = v217 ^ v225 ^ v249 ^ v270;
        v281 = v274 / 4 | 0x40000000 * v274;
        v282 = 2 * v280 | (int32_t)(v280 < 0);
        v283 = v279 / 4 | 0x40000000 * v279;
        v284 = v282 - 0x359d3e2a + v267 + (v278 ^ v275 ^ v274) + (v279 / 0x8000000 | 32 * v279);
        v285 = v231 ^ v221 ^ v253 ^ v273;
        v286 = 2 * v285 | (int32_t)(v285 < 0);
        v19 = v286;
        v287 = v286 - 0x359d3e2a + v275 + (v281 ^ v278 ^ v279) + (v284 / 0x8000000 | 32 * v284);
        v288 = v225 ^ v229 ^ v259 ^ v277;
        v289 = 2 * v288 | (int32_t)(v288 < 0);
        v290 = v284 / 4 | 0x40000000 * v284;
        v291 = v289 - 0x359d3e2a + v278 + (v283 ^ v281 ^ v284) + (v287 / 0x8000000 | 32 * v287);
        v292 = v235 ^ v231 ^ v256 ^ v282;
        v293 = v287 / 4 | 0x40000000 * v287;
        v294 = 2 * v292 | (int32_t)(v292 < 0);
        v295 = v291 / 4 | 0x40000000 * v291;
        v296 = v294 - 0x359d3e2a + v281 + (v290 ^ v283 ^ v287) + (v291 / 0x8000000 | 32 * v291);
        v297 = v243 ^ v229 ^ v264 ^ v286;
        v298 = 2 * v297 | (int32_t)(v297 < 0);
        v299 = v298 - 0x359d3e2a + v283 + (v293 ^ v290 ^ v291) + (v296 / 0x8000000 | 32 * v296);
        v300 = v235 ^ v240 ^ v270 ^ v289;
        v301 = 2 * v300 | (int32_t)(v300 < 0);
        v302 = v301 - 0x359d3e2a + v290 + (v295 ^ v293 ^ v296) + (v299 / 0x8000000 | 32 * v299);
        v303 = v296 / 4 | 0x40000000 * v296;
        v304 = v243 ^ v249 ^ v273 ^ v294;
        v305 = 2 * v304 | (int32_t)(v304 < 0);
        v306 = v299 / 4 | 0x40000000 * v299;
        v307 = v305 - 0x359d3e2a + v293 + (v303 ^ v295 ^ v299) + (v302 / 0x8000000 | 32 * v302);
        v308 = v253 ^ v240 ^ v277 ^ v298;
        v309 = 2 * v308 | (int32_t)(v308 < 0);
        v310 = v302 / 4 | 0x40000000 * v302;
        v311 = v309 - 0x359d3e2a + v295 + (v306 ^ v303 ^ v302) + (v307 / 0x8000000 | 32 * v307);
        v312 = v249 ^ v259 ^ v282 ^ v301;
        v313 = 2 * v312 | (int32_t)(v312 < 0);
        v314 = v307 / 4 | 0x40000000 * v307;
        v11 += v314;
        v315 = v313 - 0x359d3e2a + v303 + (v310 ^ v306 ^ v307) + (v311 / 0x8000000 | 32 * v311);
        v316 = v253 ^ v256 ^ v286 ^ v305;
        v317 = 2 * v316 | (int32_t)(v316 < 0);
        v318 = v311 / 4 | 0x40000000 * v311;
        v319 = v318 + v15;
        v320 = v317 - 0x359d3e2a + v306 + (v314 ^ v310 ^ v311) + (v315 / 0x8000000 | 32 * v315);
        v321 = v320 + v16;
        v322 = v264 ^ v259 ^ v289 ^ v309;
        v323 = 2 * v322 | (int32_t)(v322 < 0);
        v324 = (v315 / 4 | 0x40000000 * v315) + v13;
        result2 = v14 - 0x359d3e2a + v323 + v310 + (v318 ^ v314 ^ v315) + (v320 / 0x8000000 | 32 * v320);
        *v8 = v321;
        *(int32_t *)a3 = result2;
        *v5 = v324;
        *v6 = v319;
        *v9 = v11;
    }
    // 0x40430e
    return result2;
}
// Address range: 0x404320 - 0x40445c
int64_t function_404320(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    uint32_t v2 = *(int32_t *)(v1 + 28); // 0x40432c
    int32_t * v3 = (int32_t *)(v1 + 24); // 0x40432f
    int32_t v4 = *v3; // 0x40432f
    int32_t * v5 = (int32_t *)(v1 + 20); // 0x40435e
    uint32_t v6 = *v5 + v2; // 0x40435e
    *v5 = v6;
    int32_t v7 = v4; // 0x404364
    if (v6 < v2) {
        // 0x404366
        v7 = v4 + 1;
        *v3 = v7;
    }
    int64_t v8 = v2; // 0x40432c
    int64_t v9 = v2 < 56 ? 64 : 128; // 0x40433e
    int64_t v10 = v2 < 56 ? 60 : 124; // 0x40434c
    int32_t v11 = llvm_bswap_i32(8 * v7 | v6 / 0x20000000); // 0x404379
    int64_t v12 = v1 + 32; // 0x40437b
    *(int32_t *)((v2 < 56 ? 56 : 120) + v12) = v11;
    *(int32_t *)(v10 + v12) = v6 / 0x200000 % 256 | 0x8000000 * v6 | 2048 * v6 & 0xff0000 | v6 / 32 & 0xff00;
    int64_t v13 = v12 + v8; // 0x4043b6
    int64_t v14 = v9 - v8; // 0x4043ba
    uint64_t v15 = v14 - 8; // 0x4043bd
    if (v15 >= 8) {
        int64_t v16 = v13 + 8 & -8; // 0x404400
        *(int64_t *)v13 = 128;
        *(int64_t *)(v15 + v13 - 8) = *(int64_t *)(v14 + 0x409310);
        int64_t v17 = v13 - v16; // 0x404413
        __asm_rep_movsq_memcpy((char *)v16, (char *)((int64_t)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" - v17), (v17 + v15) / 8);
        // 0x404423
        function_403180(v12, v9, v1);
        return function_403150(v1, a2);
    }
    if ((v15 & 4) != 0) {
        // 0x404448
        *(int32_t *)v13 = 128;
        *(int32_t *)(v15 + v13 - 4) = *(int32_t *)(v14 + 0x409314);
        // 0x404423
        function_403180(v12, v9, v1);
        return function_403150(v1, a2);
    }
    if (v15 == 0) {
        // 0x404423
        function_403180(v12, v9, v1);
        return function_403150(v1, a2);
    }
    // 0x4043d1
    *(char *)v13 = -128;
    if ((v15 & 2) != 0) {
        // 0x4043df
        *(int16_t *)(v15 + v13 - 2) = *(int16_t *)(v14 + 0x409316);
    }
    // 0x404423
    function_403180(v12, v9, v1);
    return function_403150(v1, a2);
}
// Address range: 0x404460 - 0x40475e
int64_t function_404460(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1 + 28; // 0x404477
    int32_t * v3 = (int32_t *)v2; // 0x404477
    uint32_t v4 = *v3; // 0x404477
    int64_t v5 = v4; // 0x404477
    int64_t v6 = v5; // 0x40447c
    int64_t v7 = a1; // 0x40447c
    int64_t v8 = a2; // 0x40447c
    if (v4 != 0) {
        int64_t v9 = v1 + 32; // 0x4045bf
        uint64_t v10 = 128 - v5; // 0x4045c4
        int64_t v11 = v10 > a2 ? a2 : v10; // 0x4045ce
        int32_t v12 = v11; // 0x4045d8
        int64_t * dest_mem = memcpy((int64_t *)(v9 + v5), (int64_t *)a1, v12); // 0x4045d8
        uint32_t v13 = *v3 + v12; // 0x4045e2
        *v3 = v13;
        v6 = (int64_t)dest_mem;
        if (v13 >= 65) {
            // 0x404650
            function_403180(v9, (int64_t)(v13 & -64), v1);
            uint32_t v14 = *v3; // 0x40465e
            int64_t v15 = (v11 + v5 & -64) + v9; // 0x40466e
            uint32_t v16 = v14 % 64; // 0x404671
            int64_t v17 = v16; // 0x404671
            *v3 = v16;
            if (v16 >= 8) {
                // 0x4046b0
                *(int64_t *)v9 = *(int64_t *)v15;
                *(int64_t *)(v17 + v1 + 24) = *(int64_t *)(v15 + v17 - 8);
                int64_t v18 = v1 + 40 & -8; // 0x4046c9
                int64_t v19 = v9 - v18; // 0x4046cd
                int64_t v20 = v15 - v19; // 0x4046d0
                uint32_t v21 = v16 + (int32_t)v19; // 0x4046da
                v6 = v20;
                if (v21 >= 8) {
                    int64_t v22 = 0;
                    int64_t v23 = v22 + 8; // 0x4046ec
                    *(int64_t *)(v22 + v18) = *(int64_t *)(v22 + v20);
                    v6 = v20;
                    while ((v21 & -8) > (int32_t)v23) {
                        // 0x4046ea
                        v22 = v23 & 0xffffffff;
                        v23 = v22 + 8;
                        *(int64_t *)(v22 + v18) = *(int64_t *)(v22 + v20);
                        v6 = v20;
                    }
                }
            } else {
                int64_t v24 = v14; // 0x40465e
                if ((v24 & 4) != 0) {
                    // 0x404701
                    *(int32_t *)v9 = *(int32_t *)v15;
                    uint32_t v25 = *(int32_t *)(v15 + v17 - 4); // 0x404708
                    *(int32_t *)(v2 + v17) = v25;
                    v6 = v25;
                } else {
                    // 0x404683
                    v6 = v15;
                    if (v16 != 0) {
                        // 0x40468b
                        *(char *)v9 = *(char *)v15;
                        v6 = v15;
                        if ((v24 & 2) != 0) {
                            uint16_t v26 = *(int16_t *)(v15 + v17 - 2); // 0x40469c
                            *(int16_t *)(v17 + v1 + 30) = v26;
                            v6 = v26;
                        }
                    }
                }
            }
        }
        // 0x4045ef
        v7 = v11 + a1;
        v8 = a2 - v11;
    }
    uint64_t v27 = v8;
    int64_t result = v6; // 0x404486
    int64_t v28 = v7; // 0x404486
    int64_t v29 = v27; // 0x404486
    int64_t v30; // 0x404460
    int64_t v31; // 0x404460
    int64_t v32; // 0x404460
    if (v27 < 64) {
        goto lab_0x40459c;
    } else {
        if (v7 % 4 == 0) {
            int64_t v33 = v27 & -64; // 0x40458d
            result = function_403180(v7, v33, v1);
            v28 = v33 + v7;
            v29 = v27 % 64;
            goto lab_0x40459c;
        } else {
            int64_t v34 = v1 + 32; // 0x404495
            v32 = v34;
            v30 = 64;
            v31 = v7;
            if (v27 != 64) {
                int64_t v35 = (v27 - 1 & -64) + v7; // 0x4044b7
                int128_t v36 = __asm_movdqu(*(int128_t *)v7); // 0x4044c0
                int64_t v37 = v7 + 64; // 0x4044cf
                __asm_movups(*(int128_t *)v34, v36);
                __asm_movups(*(int128_t *)(v1 + 48), __asm_movdqu(*(int128_t *)(v7 + 16)));
                __asm_movups(*(int128_t *)(v1 + 64), __asm_movdqu(*(int128_t *)(v7 + 32)));
                __asm_movups(*(int128_t *)(v1 + 80), __asm_movdqu(*(int128_t *)(v7 + 48)));
                function_403180(v34, 64, v1);
                while (v37 != v35) {
                    int64_t v38 = v37;
                    v36 = __asm_movdqu(*(int128_t *)v38);
                    v37 = v38 + 64;
                    __asm_movups(*(int128_t *)v34, v36);
                    __asm_movups(*(int128_t *)(v1 + 48), __asm_movdqu(*(int128_t *)(v38 + 16)));
                    __asm_movups(*(int128_t *)(v1 + 64), __asm_movdqu(*(int128_t *)(v38 + 32)));
                    __asm_movups(*(int128_t *)(v1 + 80), __asm_movdqu(*(int128_t *)(v38 + 48)));
                    function_403180(v34, 64, v1);
                }
                // 0x4044fc
                v32 = v34;
                v30 = v27 - 64 - (v27 - 65 & -64);
                v31 = v35;
            }
            goto lab_0x40450b;
        }
    }
  lab_0x40459c:
    // 0x40459c
    if (v29 == 0) {
        // 0x4045a5
        return result;
    }
    // 0x404751
    v32 = v1 + 32;
    v30 = v29;
    v31 = v28;
    goto lab_0x40450b;
  lab_0x40450b:;
    int64_t v39 = (int64_t)*v3; // 0x40450b
    int64_t v40 = v30 & 0xffffffff; // 0x404510
    int64_t v41 = v32 + v39; // 0x404513
    uint32_t v42 = (int32_t)v30; // 0x404518
    int64_t v43; // 0x404460
    if (v42 >= 8) {
        int64_t v44 = v41 + 8 & -8; // 0x40460a
        *(int64_t *)v41 = *(int64_t *)v31;
        *(int64_t *)(v41 + v40 - 8) = *(int64_t *)(v40 + v31 - 8);
        int64_t v45 = v41 - v44; // 0x40461e
        int64_t v46 = v45 + v30; // 0x404624
        int64_t v47 = v46 & 0xfffffff8; // 0x404627
        v43 = v47;
        if ((int32_t)v46 >= 8) {
            int64_t v48 = 0;
            int64_t v49 = v48 + 8; // 0x40463a
            *(int64_t *)(v48 + v44) = *(int64_t *)(v31 - v45 + v48);
            v43 = v47;
            while ((int32_t)v49 < (int32_t)v47) {
                // 0x404638
                v48 = v49 & 0xffffffff;
                v49 = v48 + 8;
                *(int64_t *)(v48 + v44) = *(int64_t *)(v31 - v45 + v48);
                v43 = v47;
            }
        }
    } else {
        if ((v30 & 4) != 0) {
            // 0x404728
            *(int32_t *)v41 = *(int32_t *)v31;
            uint32_t v50 = *(int32_t *)(v40 + v31 - 4); // 0x404730
            *(int32_t *)(v41 + v40 - 4) = v50;
            v43 = v50;
        } else {
            // 0x40452c
            v43 = v40;
            if (v42 != 0) {
                // 0x404531
                *(char *)v41 = *(char *)v31;
                v43 = v40;
                if ((v30 & 2) != 0) {
                    uint16_t v51 = *(int16_t *)(v40 + v31 - 2); // 0x404741
                    *(int16_t *)(v41 + v40 - 2) = v51;
                    v43 = v51;
                }
            }
        }
    }
    uint64_t v52 = v30 + v39; // 0x40453f
    int32_t v53; // 0x404460
    int64_t result2; // 0x404460
    if (v52 < 64) {
        // 0x40453f
        v53 = v52;
        result2 = v43;
    } else {
        // 0x404548
        function_403180(v32, 64, v1);
        int32_t v54 = (int32_t)v52 - 64;
        int64_t * dest_mem2 = memcpy((int64_t *)v32, (int64_t *)(v1 + 96), v54); // 0x404567
        v53 = v54;
        result2 = (int64_t)dest_mem2;
    }
    // 0x40456c
    *v3 = v53;
    return result2;
}
// Address range: 0x404760 - 0x4047b7
int64_t function_404760(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = -0x1032547698badcff; // bp-168, 0x404775
    function_404460(a1, a2, &v1);
    int64_t v2; // 0x404760
    return function_404320(&v1, a3, (int64_t)&v1, v2, v2);
}
// Address range: 0x4047c0 - 0x4048e5
int64_t function_4047c0(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x4047da
    if (mem == NULL) {
        // 0x4048d0
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x4047da
    int64_t v2; // 0x4047c0
    int32_t v3 = v2;
    int64_t v4 = -0x1032547698badcff; // bp-200, 0x4047fe
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x4047c0
    int64_t v8; // 0x40484c
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x404847
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x40486a
                goto lab_0x40486a;
            }
            // 0x404830
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x40486f;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x404858
        function_403180(v1, 0x8000, v6);
    }
  lab_0x40486a:;
    int32_t v11 = v3 & 32; // 0x40486a
    v7 = v11;
    if (v11 != 0) {
        // 0x4048b0
        free(mem);
        return 1;
    }
  lab_0x40486f:;
    int64_t v12 = v7; // 0x404872
    if (v8 != 0) {
        // 0x4048a0
        function_404460(v1, v8, &v4);
        v12 = v6;
    }
    // 0x404874
    function_404320(&v4, a2, v12, a1, v2);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x4048f0 - 0x4048f5
int64_t function_4048f0(void) {
    // 0x4048f0
    int64_t fd; // 0x4048f0
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x404900 - 0x404921
int64_t function_404900(int64_t stream, int64_t advice, int64_t a3) {
    // 0x404900
    if (stream == 0) {
        // 0x404920
        int64_t result; // 0x404900
        return result;
    }
    // 0x404905
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x404930 - 0x4049c3
int64_t function_404930(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x404937
    int64_t result = (int64_t)file; // 0x404937
    if (file == NULL) {
        // 0x404951
        return result;
    }
    uint32_t v1 = fileno(file); // 0x404947
    if (v1 >= 3) {
        // 0x404951
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_406610((int64_t)v1, v2); // 0x40496a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4049a8
        function_406e50(result, v2);
        // 0x404951
        return 0;
    }
    // 0x40496e
    if ((int32_t)function_406e50(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x404980
        if (v4 != NULL) {
            // 0x404951
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x40498d
    close(fd);
    // 0x404951
    return 0;
}
// Address range: 0x4049d0 - 0x404a69
int64_t function_4049d0(int64_t str) {
    // 0x4049d0
    if (str == 0) {
        // 0x404a49
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4049de
    int64_t result = (int64_t)found_char_pos; // 0x4049de
    if (found_char_pos == NULL) {
        // 0x404a39
        g44 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4049e8
    if (v1 - str < 7) {
        // 0x404a39
        g44 = str;
        g30 = str;
        return result;
    }
    // 0x4049f8
    bool v2; // 0x4049d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4049d0
    int64_t v5 = result - 6; // 0x4049d0
    int64_t v6 = 7; // 0x404a06
    unsigned char v7 = *(char *)v5; // 0x404a06
    char v8 = *(char *)v4; // 0x404a06
    char v9 = v8; // 0x404a06
    bool v10 = false; // 0x404a06
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
    int64_t v12 = (int64_t)"lt-"; // 0x404a10
    int64_t v13 = v1; // 0x404a10
    int64_t v14 = 3; // 0x404a10
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x404a39
        g44 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x404a22
    char v16 = *(char *)v12; // 0x404a22
    char v17 = v16; // 0x404a22
    bool v18 = false; // 0x404a22
    while (v15 == v16) {
        // 0x404a12
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
    int64_t v20 = v1; // 0x404a2c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x404a2e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x404a39
    g44 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x404a70 - 0x404b62
int64_t function_404a70(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404a84
    int64_t result = (int64_t)v1; // 0x404a84
    if (result != a1) {
        // 0x404a91
        return result;
    }
    int64_t v2 = function_407fc0(); // 0x404aa0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x404b56
    if (v3 == 85) {
        // 0x404ab0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x404b48
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x404ade
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x404aeb
        // 0x404a91
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x404b48
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x404b2d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x404b3a
    // 0x404a91
    return result4;
}
// Address range: 0x404b70 - 0x404bc7
int64_t function_404b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x404b70
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x404bb8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x404bc7 - 0x405d91
int64_t function_404bc7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x404c11
    int64_t v3 = 0; // 0x404c11
    int64_t v4; // 0x404bc7
    int64_t v5; // 0x404bc7
    int64_t v6; // 0x404bc7
    int64_t v7; // 0x404bc7
    int64_t v8; // 0x404bc7
    int64_t v9; // 0x404bc7
    int64_t v10; // 0x404bc7
    int64_t v11; // 0x404bc7
    int64_t v12; // 0x404bc7
    int64_t v13; // 0x404bc7
    int64_t v14; // 0x404bc7
    int64_t v15; // 0x404bc7
    int64_t v16; // 0x404bc7
    int64_t v17; // 0x404bc7
    int64_t v18; // 0x404bc7
    int64_t result; // 0x404bc7
    int64_t v19; // 0x404bc7
    int32_t wc; // bp+132, 0x404bc7
    int64_t ps; // bp+136, 0x404bc7
    char v20; // 0x405180
    int64_t v21; // 0x405180
    int64_t v22; // 0x405528
    int64_t v23; // 0x404bc7
    int64_t v24; // 0x405547
    int32_t v25; // 0x404bc7
    while (true) {
      lab_0x404c18_2:
        // 0x404c18
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404bc7
        int64_t v27; // 0x404c4c
        while (true) {
          lab_0x404c18:
            // 0x404c18
            v5 = v26;
            bool v28 = v15 == v5; // 0x404c23
            if (v15 == -1) {
                // 0x404c25
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x404c33
            if (v28) {
                // break (via goto) -> 0x405398
                goto lab_0x405398;
            }
            // 0x404c3c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g56 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40522b
                    if (v25 % 2 == 0) {
                        goto lab_0x404d71;
                    }
                    // 0x40564d
                    v26 = v5 + 1;
                    goto lab_0x404c18;
                }
                case 7: {
                    goto lab_0x404d71;
                }
                case 8: {
                    goto lab_0x404d71;
                }
                case 9: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404d71;
                }
                case 12: {
                    goto lab_0x404d71;
                }
                case 13: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x404d3d;
                }
                case 36: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404d71;
                }
                case 38: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404d71;
                }
                case 44: {
                    goto lab_0x404d71;
                }
                case 45: {
                    goto lab_0x404d71;
                }
                case 46: {
                    goto lab_0x404d71;
                }
                case 47: {
                    goto lab_0x404d71;
                }
                case 48: {
                    goto lab_0x404d71;
                }
                case 49: {
                    goto lab_0x404d71;
                }
                case 50: {
                    goto lab_0x404d71;
                }
                case 51: {
                    goto lab_0x404d71;
                }
                case 52: {
                    goto lab_0x404d71;
                }
                case 53: {
                    goto lab_0x404d71;
                }
                case 54: {
                    goto lab_0x404d71;
                }
                case 55: {
                    goto lab_0x404d71;
                }
                case 56: {
                    goto lab_0x404d71;
                }
                case 57: {
                    goto lab_0x404d71;
                }
                case 58: {
                    goto lab_0x404d71;
                }
                case 59: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404d71;
                }
                case 66: {
                    goto lab_0x404d71;
                }
                case 67: {
                    goto lab_0x404d71;
                }
                case 68: {
                    goto lab_0x404d71;
                }
                case 69: {
                    goto lab_0x404d71;
                }
                case 70: {
                    goto lab_0x404d71;
                }
                case 71: {
                    goto lab_0x404d71;
                }
                case 72: {
                    goto lab_0x404d71;
                }
                case 73: {
                    goto lab_0x404d71;
                }
                case 74: {
                    goto lab_0x404d71;
                }
                case 75: {
                    goto lab_0x404d71;
                }
                case 76: {
                    goto lab_0x404d71;
                }
                case 77: {
                    goto lab_0x404d71;
                }
                case 78: {
                    goto lab_0x404d71;
                }
                case 79: {
                    goto lab_0x404d71;
                }
                case 80: {
                    goto lab_0x404d71;
                }
                case 81: {
                    goto lab_0x404d71;
                }
                case 82: {
                    goto lab_0x404d71;
                }
                case 83: {
                    goto lab_0x404d71;
                }
                case 84: {
                    goto lab_0x404d71;
                }
                case 85: {
                    goto lab_0x404d71;
                }
                case 86: {
                    goto lab_0x404d71;
                }
                case 87: {
                    goto lab_0x404d71;
                }
                case 88: {
                    goto lab_0x404d71;
                }
                case 89: {
                    goto lab_0x404d71;
                }
                case 90: {
                    goto lab_0x404d71;
                }
                case 91: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404d71;
                }
                case 94: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404d71;
                }
                case 96: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404d71;
                }
                case 98: {
                    goto lab_0x404d71;
                }
                case 99: {
                    goto lab_0x404d71;
                }
                case 100: {
                    goto lab_0x404d71;
                }
                case 101: {
                    goto lab_0x404d71;
                }
                case 102: {
                    goto lab_0x404d71;
                }
                case 103: {
                    goto lab_0x404d71;
                }
                case 104: {
                    goto lab_0x404d71;
                }
                case 105: {
                    goto lab_0x404d71;
                }
                case 106: {
                    goto lab_0x404d71;
                }
                case 107: {
                    goto lab_0x404d71;
                }
                case 108: {
                    goto lab_0x404d71;
                }
                case 109: {
                    goto lab_0x404d71;
                }
                case 110: {
                    goto lab_0x404d71;
                }
                case 111: {
                    goto lab_0x404d71;
                }
                case 112: {
                    goto lab_0x404d71;
                }
                case 113: {
                    goto lab_0x404d71;
                }
                case 114: {
                    goto lab_0x404d71;
                }
                case 115: {
                    goto lab_0x404d71;
                }
                case 116: {
                    goto lab_0x404d71;
                }
                case 117: {
                    goto lab_0x404d71;
                }
                case 118: {
                    goto lab_0x404d71;
                }
                case 119: {
                    goto lab_0x404d71;
                }
                case 120: {
                    goto lab_0x404d71;
                }
                case 121: {
                    goto lab_0x404d71;
                }
                case 122: {
                    goto lab_0x404d71;
                }
                case 123: {
                    goto lab_0x404d15;
                }
                case 124: {
                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x404d15;
                }
                case 126: {
                    goto lab_0x404d3d;
                }
                default: {
                    goto lab_0x405115;
                }
            }
        }
      lab_0x405115:
        if (v23 != 1) {
            // 0x405480
            ps = 0;
            int64_t len = v15; // 0x405490
            if (v15 == -1) {
                // 0x405492
                len = strlen((char *)str);
            }
            // 0x4054be
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40551f:
                // 0x40551f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x405524
                int64_t v30 = v29 + str;
                v24 = function_407e80(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x405a9a_2;
                    }
                    case -1: {
                        goto lab_0x405a9a_2;
                    }
                    case -2: {
                        // 0x405b7d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405bb7
                            v19 = v18;
                            int64_t v31 = v18; // 0x405bba
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405bc7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405bc0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x405a9a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x405a9a_2;
                    }
                    case 1: {
                        goto lab_0x4054f0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40559c
                        char v34 = *(char *)v33; // 0x4055ad
                        unsigned char v35; // 0x404bc7
                        if (v34 < 125) {
                            // 0x4055b8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4055cf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4055a0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4055ad
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4055b8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4055cf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4055a0
                            v33++;
                        }
                        goto lab_0x4054f0;
                    }
                }
            }
            goto lab_0x405a9a_2;
        } else {
            // 0x405164
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404d71;
        }
    }
  lab_0x405398:
    // 0x405398
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x405c9a
        if (v8 > result) {
            // 0x405ca3
            *(char *)(v12 + result) = 0;
        }
        // 0x404fc7
        return result;
    }
    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404d71:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404d80
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x404f8a_2;
        }
    }
    int64_t v39 = result; // 0x404e81
    char v40 = v20; // 0x404e81
    int64_t v41 = v38; // 0x404e81
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404e81
    int64_t v43 = v36; // 0x404e81
    goto lab_0x404dfd;
  lab_0x404f8a_2:
    // 0x404fc7
    return function_404b70(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405a9a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404d71;
    } else {
        uint64_t v49 = v46 + v5; // 0x40566e
        int64_t v50 = v5 + 1; // 0x405751
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x405758
        char v52 = v20; // 0x405758
        int64_t v53 = result; // 0x405758
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x405721
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x405725
            int64_t v56 = v54 + 1; // 0x40572a
            int64_t v57 = v51 + 1; // 0x405751
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40571c
                v54 = v56;
                if (v47 > v54) {
                    // 0x405721
                    *(char *)(v54 + v48) = v55;
                }
                // 0x405725
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
        goto lab_0x404dfd;
    }
  lab_0x4054f0:
    // 0x4054f0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40550f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405512
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x405a9a
        goto lab_0x405a9a_2;
    }
    goto lab_0x40551f;
  lab_0x404d3d:
    // 0x404d3d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x404f8a_2;
    }
    goto lab_0x404d71;
  lab_0x404d15:;
    bool v60 = v15 == 1; // 0x404d20
    if (v15 == -1) {
        // 0x404d22
        v60 = *(char *)v1 == 0;
    }
    // 0x404d2e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404d71;
    } else {
        goto lab_0x404d3d;
    }
  lab_0x404dfd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404e02
        *(char *)(v44 + v45) = v40;
    }
    // 0x404e06
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x404c18_2;
}
// Address range: 0x405da0 - 0x405f3e
int64_t function_405da0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405da2
    int32_t * v3 = __errno_location(); // 0x405dbc
    int64_t v4 = (int64_t)g20; // 0x405dc1
    int32_t v5 = *v3; // 0x405dcb
    int64_t v6 = v4; // 0x405de1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x405f39
            function_406e10(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405df0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405df7
        int64_t v9; // 0x405da0
        if (g20 == &g21) {
            int64_t v10 = function_406c20(0, v8); // 0x405f1a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x405f1f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_406c20(v4, v8); // 0x405e0b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x405e1a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x405e1a
        int32_t v14 = v7; // 0x405e21
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x405e51
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x405e5b
    int64_t * v17 = (int64_t *)v15; // 0x405e5e
    uint64_t v18 = *v17; // 0x405e5e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x405e61
    int64_t result = *v19; // 0x405e61
    int64_t v20; // 0x405da0
    uint64_t v21 = function_404b70(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x405e84
    if (v18 > v21) {
        // 0x405efb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x405e97
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x405ea7
        free((int64_t *)result);
    }
    int64_t result2 = function_406bc0(v22); // 0x405ec1
    *v19 = result2;
    int64_t v23; // 0x405da0
    function_404b70(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x405efb
    *v3 = v5;
    return result2;
}
// Address range: 0x405f40 - 0x405f74
int64_t function_405f40(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405f47
    int64_t result = function_406dc0(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x405f66
    return result;
}
// Address range: 0x405f80 - 0x405f8f
int64_t function_405f80(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x405f8c
    return result;
}
// Address range: 0x405f90 - 0x405f9f
int64_t function_405f90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x405f98
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x405fa0 - 0x405fd3
int64_t function_405fa0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x405fb9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x405fbe
    uint32_t v3 = *v2; // 0x405fbe
    uint32_t v4 = (int32_t)a2 % 32; // 0x405fc2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405fe0 - 0x405ff3
int64_t function_405fe0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x405fec
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406000 - 0x40602b
int64_t function_406000(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x406008
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406025
        abort();
        // UNREACHABLE
    }
    // 0x40601c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x406030 - 0x4060a2
int64_t function_406030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x406052
    int32_t * v2 = __errno_location(); // 0x40605b
    uint32_t v3 = *(int32_t *)v1; // 0x40607b
    int64_t result = function_404b70(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40608a
    return result;
}
// Address range: 0x4060b0 - 0x406191
int64_t function_4060b0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x4060d2
    int32_t * v2 = __errno_location(); // 0x4060d8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4060f7
    int32_t * v4 = (int32_t *)v1; // 0x4060fa
    int64_t v5 = function_404b70(0, 0, a1, a2, (int64_t)*v4, v3); // 0x406115
    int64_t v6 = v5 + 1; // 0x40611a
    int64_t result = function_406bc0(v6); // 0x40612f
    function_404b70(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x406174
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40617d
    return result;
}
// Address range: 0x4061a0 - 0x4061aa
int64_t function_4061a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4061a0
    return function_4060b0(a1, a2, 0, a3);
}
// Address range: 0x4061b0 - 0x406245
int64_t function_4061b0(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x4061b0
    int64_t v2 = v1; // 0x4061b0
    int64_t v3 = v2; // 0x4061c4
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x4061e3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g57;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4061e0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g57;
        }
    }
    int64_t v6 = v3; // 0x4061fd
    if (g21 != 0x60c320) {
        // 0x4061ff
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g45;
        v6 = &g57;
    }
    int64_t result = v6; // 0x406221
    if (g20 != &g21) {
        // 0x406223
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g57;
    }
    // 0x406236
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x406250 - 0x406261
int64_t function_406250(void) {
    // 0x406250
    int64_t v1; // 0x406250
    return function_405da0(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x406270 - 0x40627a
int64_t function_406270(void) {
    // 0x406270
    int64_t v1; // 0x406270
    return function_405da0(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x406280 - 0x406296
int64_t function_406280(int64_t a1) {
    // 0x406280
    return function_405da0(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x4062a0 - 0x4062b2
int64_t function_4062a0(int64_t a1, int64_t a2) {
    // 0x4062a0
    return function_405da0(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x4062c0 - 0x406328
int64_t function_4062c0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4062d0
    return function_405da0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x406330 - 0x406394
int64_t function_406330(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x406340
    return function_405da0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4063a0 - 0x4063ac
int64_t function_4063a0(int64_t a1, int64_t a2) {
    // 0x4063a0
    return function_4062c0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4063b0 - 0x4063bf
int64_t function_4063b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4063b0
    return function_406330(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4063c0 - 0x406430
int64_t function_4063c0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x4063cd
    int128_t v2 = __asm_movdqa(g47); // 0x4063d5
    int128_t v3 = __asm_movdqa(g48); // 0x4063dd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4063f2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x406408
    uint32_t v6 = *v5; // 0x406408
    uint32_t v7 = (int32_t)a3 % 32; // 0x40640d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405da0(0, a1, a2, &v4);
}
// Address range: 0x406430 - 0x40643d
int64_t function_406430(int64_t a1, int64_t a2) {
    // 0x406430
    return function_4063c0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x406440 - 0x406451
int64_t function_406440(int64_t a1) {
    // 0x406440
    return function_4063c0(a1, -1, 58);
}
// Address range: 0x406460 - 0x40646a
int64_t function_406460(void) {
    // 0x406460
    int64_t v1; // 0x406460
    return function_4063c0(v1, v1, 58);
}
// Address range: 0x406470 - 0x4064de
int64_t function_406470(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40648a
    return function_405da0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4064e0 - 0x40654c
int64_t function_4064e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x4064e7
    int128_t v2 = __asm_movdqa(g47); // 0x4064ef
    int128_t v3 = __asm_movdqa(g48); // 0x4064f7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x406519
    if (a2 == 0 || a3 == 0) {
        // 0x406547
        abort();
        // UNREACHABLE
    }
    // 0x40652a
    return function_405da0(a1, a4, a5, &v4);
}
// Address range: 0x406550 - 0x406559
int64_t function_406550(void) {
    // 0x406550
    int64_t v1; // 0x406550
    return function_4064e0(v1, v1, v1, v1, -1);
}
// Address range: 0x406560 - 0x406577
int64_t function_406560(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406560
    return function_4064e0(0, a1, a2, a3, -1);
}
// Address range: 0x406580 - 0x406593
int64_t function_406580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x406580
    return function_4064e0(0, a1, a2, a3, a4);
}
// Address range: 0x4065a0 - 0x4065aa
int64_t function_4065a0(void) {
    // 0x4065a0
    int64_t v1; // 0x4065a0
    return function_405da0(v1, v1, v1, &g19);
}
// Address range: 0x4065b0 - 0x4065c2
int64_t function_4065b0(int64_t a1, int64_t a2) {
    // 0x4065b0
    return function_405da0(0, a1, a2, &g19);
}
// Address range: 0x4065d0 - 0x4065e1
int64_t function_4065d0(void) {
    // 0x4065d0
    int64_t v1; // 0x4065d0
    return function_405da0(v1, v1, -1, &g19);
}
// Address range: 0x4065f0 - 0x406606
int64_t function_4065f0(int64_t a1) {
    // 0x4065f0
    return function_405da0(0, a1, -1, &g19);
}
// Address range: 0x406610 - 0x40661e
int64_t function_406610(int64_t a1, int64_t a2) {
    // 0x406610
    int64_t v1; // 0x406610
    return function_406ed0(a1, 0, 3, v1);
}
// Address range: 0x406620 - 0x4069fd
int64_t function_406620(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4066b8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40663c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x406656
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40669b
    if (a6 < 10) {
        // 0x4066aa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4067a2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x406a00 - 0x406a20
int64_t function_406a00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406a00
    if (a5 == 0) {
        // 0x406a1b
        return function_406620(a1, a2, a3, a4, a5, 0, (int64_t)&g57);
    }
    int64_t v1 = 0; // 0x406a07
    v1++;
    int64_t v2 = v1; // 0x406a19
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x406a10
        v1++;
        v2 = v1;
    }
    // 0x406a1b
    return function_406620(a1, a2, a3, a4, a5, v2, (int64_t)&g57);
}
// Address range: 0x406a20 - 0x406a80
int64_t function_406a20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x406a20
    int64_t v3 = &v2; // 0x406a20
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x406a53
    int64_t v6; // 0x406a3d
    int64_t * v7; // 0x406a5b
    int64_t v8; // 0x406a5b
    int64_t v9; // 0x406a67
    if (v5 < 48) {
        // 0x406a30
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406a73
            break;
        }
    } else {
        // 0x406a5b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406a73
            break;
        }
    }
    int64_t v10 = 10; // 0x406a51
    while (v4 != 9) {
        // 0x406a49
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x406a30
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406a73
                break;
            }
        } else {
            // 0x406a5b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406a73
                break;
            }
        }
        // 0x406a49
        v10 = 10;
    }
    // 0x406a73
    return function_406620(a1, a2, a3, a4, v3, v10, (int64_t)&g57);
}
// Address range: 0x406a80 - 0x406b3c
int64_t function_406a80(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x406a80
    int64_t v1; // bp-168, 0x406a80
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406a80
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406a80
    int64_t v8; // 0x406a80
    int64_t v9; // bp-56, 0x406a80
    int64_t v10; // 0x406ae5
    int64_t v11; // 0x406b09
    if ((int32_t)v6 < 48) {
        // 0x406ad0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x406b20
            break;
        }
    } else {
        // 0x406b02
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x406b20
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x406afa
    int64_t v13 = 10; // 0x406afa
    while (v5 != 9) {
        // 0x406afc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x406ad0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x406b20
                break;
            }
        } else {
            // 0x406b02
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x406b20
                break;
            }
        }
        // 0x406af2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x406b20
    int64_t v14; // bp-136, 0x406a80
    int64_t result = function_406620(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g57); // 0x406b2f
    return result;
}
// Address range: 0x406b40 - 0x406bb4
int64_t function_406b40(int64_t a1) {
    // 0x406b40
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406ba3
    return fputs_unlocked(v1, g28);
}
// Address range: 0x406bc0 - 0x406bda
int64_t function_406bc0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406bc4
    if (size != 0 != (mem == NULL)) {
        // 0x406bd3
        return (int64_t)mem;
    }
    // 0x406bd5
    function_406e10(size);
    // UNREACHABLE
}
// Address range: 0x406be0 - 0x406c01
int64_t function_406be0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406be3
    int64_t v2 = v1; // 0x406be3
    if (v2 < 0) {
        // 0x406bfb
        function_406e10(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406bf9
        return function_406bc0(v2);
    }
    // 0x406bfb
    function_406e10(v2);
    // UNREACHABLE
}
// Address range: 0x406c10 - 0x406c12
int64_t function_406c10(void) {
    // 0x406c10
    int64_t v1; // 0x406c10
    return function_406bc0(v1);
}
// Address range: 0x406c20 - 0x406c56
int64_t function_406c20(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x406c48
        free(v1);
        return (int32_t)&g57 ^ (int32_t)&g57;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x406c31
    if (a2 != 0 != (mem == NULL)) {
        // 0x406c40
        return (int64_t)mem;
    }
    // 0x406c51
    function_406e10(a1);
    // UNREACHABLE
}
// Address range: 0x406c60 - 0x406c81
int64_t function_406c60(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x406c63
    int64_t v2 = v1; // 0x406c63
    if (v2 < 0) {
        // 0x406c7b
        function_406e10(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406c79
        return function_406c20(a1, v2);
    }
    // 0x406c7b
    function_406e10(a1);
    // UNREACHABLE
}
// Address range: 0x406c90 - 0x406d16
int64_t function_406c90(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x406ceb
            function_406e10(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406c20(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406cd3
    if (a2 == 0) {
        // 0x406cf8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406cd8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x406ceb
        function_406e10(a1);
        // UNREACHABLE
    }
    // 0x406cba
    *(int64_t *)a2 = v2;
    return function_406c20(a1, v2 * a3);
}
// Address range: 0x406d20 - 0x406d70
int64_t function_406d20(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x406d20
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x406d6a
            function_406e10(a1);
            // UNREACHABLE
        }
        // 0x406d42
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_406c20(a1, v1);
    }
    if (a2 == 0) {
        // 0x406d55
        *(int64_t *)a2 = 128;
        return function_406c20(0, 128);
    }
    // 0x406d68
    if (a2 < 0) {
        // 0x406d6a
        function_406e10(a1);
        // UNREACHABLE
    }
    // 0x406d42
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_406c20(a1, v1);
}
// Address range: 0x406d70 - 0x406d87
int64_t function_406d70(int64_t a1, int64_t a2) {
    // 0x406d70
    return (int64_t)memset((int64_t *)function_406bc0(a1), 0, (int32_t)a1);
}
// Address range: 0x406d90 - 0x406dbe
int64_t function_406d90(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406d97
    if ((int64_t)v1 < 0) {
        // 0x406db9
        function_406e10(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406db9
        function_406e10(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x406daa
    if (mem != NULL) {
        // 0x406db4
        return (int64_t)mem;
    }
    // 0x406db9
    function_406e10(nmemb);
    // UNREACHABLE
}
// Address range: 0x406dc0 - 0x406de8
int64_t function_406dc0(int64_t a1, int64_t a2) {
    int64_t v1 = function_406bc0(a2); // 0x406dcf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406df0 - 0x406e03
int64_t function_406df0(int64_t str) {
    // 0x406df0
    return function_406dc0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x406e10 - 0x406e41
int64_t function_406e10(int64_t a1) {
    // 0x406e10
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x406e50 - 0x406ecb
int64_t function_406e50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406e57
    if (fileno(stream) < 0) {
        // 0x406eb7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406e6a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406e9b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406eb7
            return fclose(stream);
        }
    }
    // 0x406e6c
    if ((int32_t)function_407010(a1, v1) == 0) {
        // 0x406eb7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406e78
    int32_t v3 = *v2; // 0x406e80
    int64_t result = fclose(stream); // 0x406e8e
    if (v3 != 0) {
        // 0x406ec0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406e90
    return result;
}
// Address range: 0x406ed0 - 0x407005
int64_t function_406ed0(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x406fb0
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x406f0c
    int64_t v2; // 0x406ed0
    if (g49 < 0) {
        int64_t v3 = function_406ed0(fd, 0, v1, a4); // 0x406f54
        int64_t v4 = v3 & 0xffffffff; // 0x406f59
        if ((int32_t)v3 < 0) {
            // 0x406f40
            return v4 & 0xffffffff;
        }
        // 0x406f5f
        v2 = v4;
        if (g49 != -1) {
            // 0x406f40
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x406f27
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x406f36
            g49 = 1;
            // 0x406f40
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_406ed0(fd & 0xffffffff, 0, v1, a4); // 0x406fe7
        int64_t v7 = v6 & 0xffffffff; // 0x406fec
        if ((int32_t)v6 < 0) {
            // 0x406f40
            return v7 & 0xffffffff;
        }
        // 0x406ff6
        g49 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x406f6f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x406f7a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x406f40
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x406f92
    close(fd2);
    // 0x406f40
    return 0xffffffff;
}
// Address range: 0x407010 - 0x407050
int64_t function_407010(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40702a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40702a
        return fflush(stream);
    }
    // 0x407038
    function_407050(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x407050 - 0x4070a7
int64_t function_407050(int64_t stream, int32_t offset, int64_t whence) {
    // 0x407050
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40705a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40708b
    int64_t result = -1; // 0x407094
    if (v1 != -1) {
        // 0x407096
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4070a2
    return result;
}
// Address range: 0x4070b0 - 0x40718f
int64_t function_4070b0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4070bc
    uint32_t v2 = *v1; // 0x4070bc
    int64_t v3 = a2 & 0xffffffff; // 0x4070c1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4070c4
    uint64_t v5 = (int64_t)*v4; // 0x4070c4
    int64_t v6; // 0x407132
    if (v3 <= v5) {
      lab_0x40712c_2:
        // 0x40712c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4070b2
    int64_t v8 = v2; // 0x4070b0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40712c
        goto lab_0x40712c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4070e8
    int64_t v17; // 0x4070f6
    int64_t * v18; // 0x407110
    int64_t * v19; // 0x407113
    int64_t v20; // 0x40711e
    int64_t v21; // 0x4070f6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4070f3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407110
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407127
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40712c
            goto lab_0x40712c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40712c
            goto lab_0x40712c_2;
        }
        // 0x4070e2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40716b
    int64_t * v23 = (int64_t *)v22; // 0x407170
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407173
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407170
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407187
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4070dd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40712c
            goto lab_0x40712c_2;
        }
        // 0x4070e2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4070f3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407110
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407127
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40712c
                goto lab_0x40712c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40712c
                goto lab_0x40712c_2;
            }
            // 0x4070e2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x407150
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407170
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407187
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40712c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x407190 - 0x4077ac
int64_t function_407190(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4071af
    int64_t v2 = *v1; // 0x4071af
    char * str2 = (char *)v2; // 0x4071bc
    char c = *str2; // 0x4071bc
    int64_t v3 = v2; // 0x4071e8
    int64_t v4 = 0; // 0x407190
    int32_t v5; // 0x407190
    int64_t v6; // 0x407190
    int64_t v7; // 0x407190
    int64_t v8; // 0x407190
    int64_t v9; // 0x407190
    int64_t v10; // 0x407190
    int64_t v11; // 0x407190
    int64_t v12; // 0x407190
    int64_t v13; // 0x407190
    int64_t str3; // 0x407190
    int64_t v14; // 0x407190
    int64_t v15; // 0x407190
    int64_t v16; // 0x407190
    int64_t v17; // 0x407190
    int32_t v18; // 0x407190
    int32_t v19; // 0x407190
    int32_t v20; // 0x407190
    int32_t v21; // 0x407190
    int32_t v22; // 0x407190
    int32_t v23; // 0x407190
    int32_t v24; // 0x407190
    int32_t v25; // 0x407190
    int32_t v26; // 0x407190
    int32_t v27; // 0x407190
    int32_t v28; // 0x407190
    int32_t v29; // 0x407190
    int64_t nmemb; // 0x407190
    int64_t v30; // 0x407190
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4071ec
            while (v31 != 0 == (v31 != 61)) {
                // 0x4071e8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4071f8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4071fe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4071c8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40722c
                int64_t v34; // 0x407190
                int64_t v35; // 0x407190
                if (strncmp(str, str2, n) == 0) {
                    // 0x407235
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4073b0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407246
                int64_t v37 = *(int64_t *)v36; // 0x40724a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407220
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407235
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4073b0;
                        }
                    }
                    // 0x407246
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
                  lab_0x407296:
                    // 0x407296
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
                        goto lab_0x4072f0;
                    } else {
                        if (v11 == 0) {
                            // 0x407460
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4072f0;
                        } else {
                            if (v39 == 0) {
                                // 0x407410
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4072ba;
                                } else {
                                    // 0x40741c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4072ba;
                                    } else {
                                        // 0x40742a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4072ba;
                                        } else {
                                            goto lab_0x4072f0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4072ba;
                            }
                        }
                    }
                }
              lab_0x407301:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4074d6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407682
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x4076a2
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4076ef
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x407709
                            int64_t v45; // 0x40770b
                            if (*(char *)v42 != 0) {
                                // 0x40770b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x407703
                            while (v17 + nmemb != v42) {
                                // 0x407705
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40770b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x4076f8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x407730
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x4074e4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40763f
                        free((int64_t *)v17);
                    }
                    // 0x407539
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x407550
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4073fe
                    return 63;
                }
                // 0x407320
                v5 = v39;
                if (v13 != 0) {
                    // 0x4073a4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4073b0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4073c0
                    uint32_t v50 = *v49; // 0x4073c0
                    int64_t v51 = v50; // 0x4073c0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4073ca
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4073d3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4075ff
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4075aa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4073fe
                            return 63;
                        }
                        // 0x407448
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40775f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40765d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407670
                                // 0x4073fe
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40756e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x407582
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4073eb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4073ee
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4073f2
                    int64_t result = v59; // 0x4073f8
                    if (v58 != 0) {
                        // 0x4073fa
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4073fe
                    return result;
                }
            } else {
                // 0x4071fe
                v5 = v32;
            }
            // break -> 0x407325
            break;
        }
    }
    // 0x407325
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40733d
        if (*(char *)(v60 + 1) != 45) {
            // 0x407347
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4073fe
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x407489
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407376
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407386
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4072f0:
    // 0x4072f0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4072f0
    int64_t v63 = *(int64_t *)v62; // 0x4072f4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407301
        goto lab_0x407301;
    }
    goto lab_0x407296;
  lab_0x4072ba:
    // 0x4072ba
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x407190
    int32_t v65; // 0x407190
    int32_t v66; // 0x407190
    if (v27 != 0) {
        goto lab_0x4072f0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x407470
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4072f0;
            } else {
                goto lab_0x4072e1;
            }
        } else {
            // 0x4072d5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4075cc
                int64_t v67 = (int64_t)mem; // 0x4075cc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4072f0;
                } else {
                    // 0x4075df
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4072e1;
                }
            } else {
                goto lab_0x4072e1;
            }
        }
    }
  lab_0x4072e1:
    // 0x4072e1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4072f0;
}
// Address range: 0x4077b0 - 0x407d76
int64_t function_4077b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4077d1
    if (v3 < 1) {
        // 0x40798e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4077cd
    int32_t v5 = *(int32_t *)a7; // 0x4077d9
    uint64_t v6 = a1 & 0xffffffff; // 0x4077db
    int64_t v7 = v2; // 0x4077e0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4077e3
    *v8 = 0;
    int64_t v9; // 0x4077b0
    int64_t v10; // 0x4077b0
    int64_t v11; // 0x4077b0
    int64_t v12; // 0x4077b0
    int64_t str; // 0x4077b0
    int64_t v13; // 0x4077b0
    int64_t v14; // 0x4077b0
    int64_t v15; // 0x4077b0
    int64_t v16; // 0x4077b0
    int64_t v17; // 0x4077b0
    int32_t v18; // 0x4077b0
    char v19; // 0x4077b0
    if (v5 == 0) {
        // 0x4079c8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4077fa;
    } else {
        // 0x4077f3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407840
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407843
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407908;
            } else {
                int64_t v22 = v7 + 1; // 0x407856
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407866
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40791c;
                } else {
                    goto lab_0x407878;
                }
            }
        } else {
            goto lab_0x4077fa;
        }
    }
  lab_0x4077fa:
    // 0x4077fa
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x407800
    *v24 = 0;
    int64_t v25; // 0x4077b0
    int64_t v26; // 0x4077b0
    int64_t v27; // 0x4077b0
    switch (*(char *)&v2) {
        case 45: {
            // 0x4078f0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4078fd;
        }
        case 43: {
            // 0x407c00
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4078fd;
        }
        default: {
            // 0x40781c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x407b7f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407c98
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4078fd;
                } else {
                    // 0x407b8d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40782a;
                }
            } else {
                goto lab_0x40782a;
            }
        }
    }
  lab_0x407908:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40790f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407878;
    } else {
        goto lab_0x40791c;
    }
  lab_0x40782a:
    // 0x40782a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4078fd;
  lab_0x4078fd:
    // 0x4078fd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407908;
  lab_0x407878:;
    uint32_t v30 = *(int32_t *)a7; // 0x407878
    int64_t v31 = v30; // 0x407878
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40787a
    if ((int64_t)*v32 > v31) {
        // 0x40787f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407882
    if (*v33 > v30) {
        // 0x407887
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40788a
    int64_t v35 = v31; // 0x40788e
    int64_t v36 = v15; // 0x40788e
    int64_t v37; // 0x4077b0
    int64_t v38; // 0x4077b0
    int64_t v39; // 0x4077b0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4079f8
        int64_t v41 = v40; // 0x4079f8
        v2 = v41;
        int64_t v42; // 0x4077b0
        if (*v33 == v40) {
            // 0x407be0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407be8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407a04
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407a08
                function_4070b0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407a18
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407a21
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x407a2a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407a41
            int64_t v47 = v45 & 0xffffffff; // 0x407a45
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x407a4e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407a54
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407a56;
                }
            }
            int64_t v48 = v47 + 1; // 0x407a30
            int64_t v49 = v48 & 0xffffffff; // 0x407a30
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407a41
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x407a4e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407a54
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407a56;
                    }
                }
                // 0x407a30
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x407bf8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407a56;
    } else {
        goto lab_0x407894;
    }
  lab_0x40791c:
    // 0x40791c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40791f
    int64_t v51 = v12; // 0x40791f
    int64_t v52 = v14; // 0x40791f
    if (*(char *)v10 == 0) {
        goto lab_0x407878;
    } else {
        goto lab_0x407925;
    }
  lab_0x407894:;
    int32_t v53 = v35; // 0x407894
    int64_t v54; // 0x4077b0
    int64_t v55; // 0x4077b0
    int64_t v56; // 0x4077b0
    int64_t v57; // 0x4077b0
    int64_t v58; // 0x4077b0
    int64_t v59; // 0x4077b0
    char * v60; // 0x4077b0
    int64_t v61; // 0x4077b0
    int64_t v62; // 0x4078a9
    int64_t v63; // 0x4077b0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4079e3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4079e6;
    } else {
        // 0x40789c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4077b0
        int64_t v66 = v65 ? -1 : 1; // 0x4078b0
        int64_t v67 = (int64_t)"--"; // 0x4077b0
        int64_t v68 = v62; // 0x4077b0
        int64_t v69 = 3; // 0x4078b0
        unsigned char v70 = *(char *)v68; // 0x4078b0
        char v71 = *(char *)v67; // 0x4078b0
        char v72 = v71; // 0x4078b0
        bool v73 = false; // 0x4078b0
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
            // 0x4079a0
            if (*(char *)v62 == 45) {
                // 0x407a60
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407a60
                if (c == 0) {
                    goto lab_0x4079aa;
                } else {
                    // 0x407a6d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x407af0;
                    } else {
                        if (c == 45) {
                            // 0x407cd3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x407b45;
                        } else {
                            // 0x407a7e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x407af0;
                            } else {
                                // 0x407a83
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407aa4;
                                } else {
                                    // 0x407a8a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x407af0;
                                    } else {
                                        goto lab_0x407aa4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4079aa;
            }
        } else {
            uint32_t v75 = *v33; // 0x4078c0
            v2 = v75;
            int32_t v76 = *v32; // 0x4078c3
            int64_t v77 = v35 + 1; // 0x4078c6
            int32_t v78 = v77; // 0x4078c9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x407c30
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4078d7
                    function_4070b0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4078e5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4079e6;
        }
    }
  lab_0x407925:;
    // 0x407925
    int64_t v79; // bp-104, 0x4077b0
    int64_t v80 = &v79; // 0x4077ba
    int64_t v81 = v50 + 1; // 0x407925
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40792c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407931
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407935
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407939
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407941
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407946
    int32_t c2 = v84; // 0x407946
    char * found_char_pos = strchr(str2, c2); // 0x407946
    int64_t v87 = *v82; // 0x40794b
    v2 = v87;
    int64_t v88 = *v85; // 0x407955
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407960
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x407c50
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x407c1d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40798e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407946
    char v91 = *(char *)(v90 + 1); // 0x40797b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407935
        if (v91 != 58) {
            // 0x40798e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407ba4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407ca8
                *v8 = 0;
            } else {
                // 0x407c8c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x407bce
            *v83 = 0;
            // 0x40798e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x407bae
        if (v93 != 0) {
            // 0x407c40
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x407bce
            *v83 = 0;
            // 0x40798e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407bc1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x407bce
            *v83 = 0;
            // 0x40798e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x407d0a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x407cba
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407cc1
        // 0x407bce
        *v83 = 0;
        // 0x40798e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x407b19
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x407b1b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x407d40
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x407cf1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x407cf8
            // 0x40798e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x407b26
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x407b2a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x407b45;
  lab_0x407a56:
    // 0x407a56
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407894;
  lab_0x407b45:;
    int64_t v99 = function_407190(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x407b63
    // 0x40798e
    return v99 & 0xffffffff;
  lab_0x4079e6:;
    int32_t v100 = v55; // 0x4079e6
    if (v100 != (int32_t)v59) {
        // 0x4079ea
        *(int32_t *)a7 = v100;
    }
    // 0x40798e
    return 0xffffffff;
  lab_0x4079aa:
    // 0x4079aa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x4079b1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40798e
    return v99 & 0xffffffff;
  lab_0x407af0:
    // 0x407af0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407925;
  lab_0x407aa4:
    // 0x407aa4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_407190(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x407aca
    if ((int32_t)v101 != -1) {
        // 0x40798e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x407adf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x407af0;
}
// Address range: 0x407d80 - 0x407dd6
int64_t function_407d80(int64_t a1) {
    // 0x407d80
    *(int32_t *)&g50 = g26;
    *(int32_t *)&g51 = g25;
    int64_t v1; // 0x407d80
    int64_t result = function_4077b0(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x407da6
    g26 = *(int32_t *)&g50;
    g55 = g53;
    *(int32_t *)&g24 = g52;
    return result;
}
// Address range: 0x407de0 - 0x407df8
int64_t function_407de0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407de0
    return function_407d80(1);
}
// Address range: 0x407e00 - 0x407e13
int64_t function_407e00(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x407e00
    return function_407d80(0);
}
// Address range: 0x407e20 - 0x407e35
int64_t function_407e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407e20
    return function_4077b0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x407e40 - 0x407e56
int64_t function_407e40(void) {
    // 0x407e40
    return function_407d80(0);
}
// Address range: 0x407e60 - 0x407e78
int64_t function_407e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407e60
    return function_4077b0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407e80 - 0x407efa
int64_t function_407e80(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x407e8b
    int64_t v2 = (int64_t)&g9; // 0x407e8b
    int32_t * pwc; // 0x407e80
    int64_t v3; // 0x407e80
    int64_t n; // 0x407e80
    if (a2 == 0) {
        goto lab_0x407ed2;
    } else {
        // 0x407e8d
        if (a3 == 0) {
            // 0x407eb8
            return -2;
        }
        // 0x407e99
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407ed2;
        } else {
            goto lab_0x407ea4;
        }
    }
  lab_0x407ed2:
    // 0x407ed2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407e80
    pwc = (int32_t *)&v4;
    goto lab_0x407ea4;
  lab_0x407ea4:;
    char * wstr = (char *)v3; // 0x407eaa
    int64_t ps; // 0x407e80
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x407eaa
    int64_t result = v5; // 0x407eaa
    if (v5 < 0xfffffffe) {
        // 0x407eb8
        return result;
    }
    int64_t result2 = result; // 0x407ee9
    if ((char)function_407f60(0, v3) == 0) {
        // 0x407eeb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407eb8
    return result2;
}
// Address range: 0x407f00 - 0x407f5d
int64_t function_407f00(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407f07
    int64_t v2; // 0x407f00
    int64_t result = function_406e50(a1, v2); // 0x407f18
    if ((v2 & 32) != 0) {
        // 0x407f40
        if ((int32_t)result == 0) {
            // 0x407f44
            *__errno_location() = 0;
        }
        // 0x407f3a
        return 0xffffffff;
    }
    // 0x407f21
    if ((int32_t)result == 0) {
        // 0x407f3a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x407f28
    if (v1 == 0) {
        // 0x407f2a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x407f3a
    return result2;
}
// Address range: 0x407f60 - 0x407fbe
int64_t function_407f60(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x407f66
    if (locale == NULL) {
        // 0x407f93
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x407f66
    bool v2; // 0x407f60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x407f60
    int64_t v5 = v1; // 0x407f60
    int64_t v6 = 2; // 0x407f85
    unsigned char v7 = *(char *)v5; // 0x407f85
    char v8 = *(char *)v4; // 0x407f85
    char v9 = v8; // 0x407f85
    bool v10 = false; // 0x407f85
    while (v7 == v8) {
        // 0x407f78
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407f91
    int64_t v13 = v1; // 0x407f91
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407f93
        return 0;
    }
    int64_t v14 = 6; // 0x407f91
    unsigned char v15 = *(char *)v13; // 0x407fad
    char v16 = *(char *)v12; // 0x407fad
    char v17 = v16; // 0x407fad
    bool v18 = false; // 0x407fad
    while (v15 == v16) {
        // 0x407fa0
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
// Address range: 0x407fc0 - 0x408522
int64_t function_407fc0(void) {
    char * v1 = nl_langinfo(14); // 0x407fd6
    char * v2 = g54; // 0x407fdb
    char * v3; // 0x407fc0
    int64_t v4; // 0x407fc0
    int64_t v5; // 0x407fc0
    int64_t v6; // 0x407fc0
    int64_t v7; // 0x407fc0
    int32_t size; // 0x407fc0
    int32_t size2; // 0x407fc0
    int32_t len; // 0x408092
    int64_t v8; // 0x408092
    char * env_val; // 0x40807d
    if (v2 == NULL) {
        // 0x408078
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4080e5;
        } else {
            // 0x40808a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4080e5;
            } else {
                // 0x40808f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40807d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x408515
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4080e5;
                    } else {
                        // 0x408489
                        size2 = len + 14;
                        goto lab_0x4080ab;
                    }
                } else {
                    goto lab_0x4080ab;
                }
            }
        }
    } else {
        // 0x407fc0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x407ffa;
    }
  lab_0x40832c:;
    // 0x40832c
    struct _IO_FILE * stream; // 0x40816b
    int32_t v10 = __uflow(stream); // 0x40832f
    int64_t v11; // 0x407fc0
    int64_t v12 = v11; // 0x408339
    int64_t v13; // 0x407fc0
    int64_t v14 = v13; // 0x408339
    int32_t v15 = v10; // 0x408339
    int64_t v16; // 0x407fc0
    int64_t v17 = v16; // 0x408339
    int64_t v18 = v11; // 0x408339
    int64_t v19 = v13; // 0x408339
    int64_t v20 = v16; // 0x408339
    if (v10 == -1) {
        // break -> 0x40833f
        goto lab_0x40833f;
    }
    goto lab_0x4081b9;
  lab_0x4081ae:;
    // 0x4081ae
    int64_t v90; // 0x407fc0
    int64_t * v32; // 0x4081a0
    *v32 = v90 + 1;
    int64_t v89; // 0x407fc0
    v12 = v89;
    int64_t v91; // 0x407fc0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407fc0
    v17 = v92;
    goto lab_0x4081b9;
  lab_0x4081b9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407fc0
    int32_t v25; // bp-120, 0x407fc0
    int32_t v26; // bp-184, 0x407fc0
    int64_t v27; // 0x40816b
    int64_t v28; // 0x408188
    int64_t v29; // 0x40818d
    int64_t * v30; // 0x4081a4
    switch (c) {
        case 32: {
            goto lab_0x4081a0;
        }
        case 10: {
            goto lab_0x4081a0;
        }
        case 9: {
            goto lab_0x4081a0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x408391
            int32_t v33; // 0x407fc0
            char v34; // 0x407fc0
            int32_t v35; // 0x40839e
            if (v31 < *v30) {
                // 0x408370
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40839b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x408391
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x408370
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40839b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x408380
                v36 = v33;
            }
            // 0x40846f
            if (v36 == -1) {
                // break -> 0x40833f
                break;
            }
            goto lab_0x4081a0;
        }
        default: {
            // 0x4081cf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40833f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4081f8
            int64_t v39 = v37 + 4; // 0x4081fa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x408206
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x408208
            while (v41 == 0) {
                // 0x4081f8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x408226
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x408232
            int64_t v45 = v43 + 4; // 0x408234
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x408240
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x408242
            while (v47 == 0) {
                // 0x408232
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40822f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x408258
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x408268
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40826c
            int64_t v52 = v51 + v48; // 0x408275
            int64_t * mem; // 0x407fc0
            int64_t v53; // 0x407fc0
            int64_t v54; // 0x407fc0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4083ab
                int64_t v56 = v55 + 3; // 0x4083b7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x408291
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4082a0
            if (mem == NULL) {
                // 0x4084cc
                free((int64_t *)v21);
                function_406e50(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x408144;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4082b8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4082c2
            uint32_t v62 = (int32_t)v59; // 0x4082c5
            int64_t v63; // 0x407fc0
            if (v62 >= 8) {
                // 0x4083d4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x4083ee
                int64_t v66 = v61 - v65; // 0x4083f2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x4083fd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40840e
                    int64_t v70 = v69 & 0xffffffff; // 0x40840e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40840b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40849f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4082d7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4082db
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
            int64_t v73 = v51 + 1; // 0x4082eb
            int64_t v74 = v60 - 1; // 0x4082ef
            uint32_t v75 = (int32_t)v73; // 0x4082f4
            int64_t v76; // 0x407fc0
            if (v75 >= 8) {
                // 0x408422
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40842c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40843c
                int64_t v80 = v74 - v79; // 0x408440
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40844b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40845b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x408459
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4084b6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4084be
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x408306
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40830a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x408503
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40831e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4081ae;
            } else {
                goto lab_0x40832c;
            }
        }
    }
  lab_0x4081a0:;
    int64_t v93 = v23; // 0x407fc0
    int64_t v94 = v22; // 0x407fc0
    int64_t v95 = v21; // 0x407fc0
    goto lab_0x4081a0_2;
  lab_0x4080e5:;
    int64_t * mem3 = malloc(size); // 0x4080e5
    int64_t v97 = (int64_t)&g9; // 0x4080f0
    int64_t v98; // 0x407fc0
    int64_t path; // 0x407fc0
    if (mem3 == NULL) {
        goto lab_0x4080c2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4080e5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x408106;
    }
  lab_0x407ffa:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x407fed
    char v100 = *v3; // 0x407ffa
    int64_t v101; // 0x407fc0
    if (v100 == 0) {
        // 0x408054
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407fc0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407fc0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x408040
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x408047;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x408010
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40801d
        char v107 = *(char *)v106; // 0x408022
        v102 = v107;
        if (v107 == 0) {
            // 0x408054
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40802b
    v104 = v103 + 1;
  lab_0x408047:
    // 0x408054
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4080c2:;
    char * v108 = (char *)v97;
    g54 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x407ffa;
  lab_0x408106:;
    int64_t v109 = v98 + path; // 0x408106
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x408132
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x408161
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x408492
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x408185
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4081a0_2:;
                uint64_t v96 = *v32; // 0x4081a0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40832c;
                } else {
                    goto lab_0x4081ae;
                }
            }
          lab_0x40833f:
            // 0x40833f
            function_406e50(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40835e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x408144;
  lab_0x4080ab:;
    int64_t * mem4 = malloc(size2); // 0x4080ab
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x408151
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x408106;
    } else {
        goto lab_0x4080c2;
    }
  lab_0x408144:
    // 0x408144
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4080c2;
}
// Address range: 0x408530 - 0x40858d
int64_t function_408530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408530
    return function_401538();
}
// Address range: 0x408590 - 0x408591
int64_t function_408590(void) {
    // 0x408590
    int64_t result; // 0x408590
    return result;
}
// Address range: 0x4085a0 - 0x4085b8
int64_t function_4085a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4085a0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x4085b8 - 0x4085d8
int64_t function_4085b8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x4085c2
    while (*(int64_t *)v1 != -1) {
        // 0x4085c3
        v1 -= 8;
    }
    // 0x4085d4
    return result;
}
