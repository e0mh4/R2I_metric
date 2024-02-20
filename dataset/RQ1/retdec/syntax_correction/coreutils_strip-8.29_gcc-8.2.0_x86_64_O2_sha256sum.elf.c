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
    function_406260(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_409e30(0x403080, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
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
        int32_t v8 = function_409690(v1, a2, "bctw", &g2, 0, v7);
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
                                function_408310((int64_t)g28, "sha256sum", "GNU coreutils", (int64_t)g17, "Ulrich Drepper", "Scott Miller");
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
    g40 = 66;
    g39 = 64;
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
        int64_t v54 = (int64_t)"SHA256"; // 0x401940
        int64_t v55 = v45; // 0x401940
        int64_t v56 = 6; // 0x401940
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
            char v75 = *(char *)(v45 + 6); // 0x401d75
            char v76 = v75; // 0x401d81
            int64_t v77 = v53 + 6; // 0x401d81
            if (v75 == 32) {
                char v78 = *(char *)(v45 + 7); // 0x401d83
                v76 = v78;
                v77 = v53 + 7;
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
        int64_t v156 = function_407d00(0, 3, v155); // 0x401dc6
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
        function_407d00(0, 3, v155);
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
    int64_t v219; // bp-104, 0x401940
    char v220; // bp-169, 0x401940
    uint64_t v221 = function_402af0(str, &v219, (int64_t *)&v220); // 0x401f21
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
            char v228 = v220; // 0x402099
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
    int64_t v298; // bp-264, 0x401940
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
    int64_t v160 = 0; // bp-168, 0x401cb1
    int64_t v161 = 0; // bp-160, 0x401cba
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
        function_407d00(0, 3, v155);
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
            int64_t v355 = function_4086e0(v154, v354); // 0x402451
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
    int64_t v361 = function_407d00(0, 3, v360); // 0x402265
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
    fwrite_unlocked((int64_t *)"SHA256", 1, 6, stream);
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
        int64_t v430 = function_407d00(0, 3, v155); // 0x4024ab
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
                    int64_t v437 = function_407d00(0, 3, v155); // 0x4026d5
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
    int32_t v411 = *(int32_t *)0x60e29c; // 0x401bf0
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
                int64_t v316; // bp-152, 0x401940
                int64_t v317 = function_402af0(v313, &v316, &v219); // 0x40219f
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
                    int64_t v324 = function_4061c0(v313, (int64_t *)"r"); // 0x402248
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
    if (g41 == 0 || (int32_t)function_4086e0((int64_t)g29, v31) != -1) {
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
        int64_t v14 = function_4061c0(a1, (int64_t *)"r"); // 0x402b6b
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
            error(0, *err_num, "%s", (char *)function_407d00(0, 3, a1));
            // 0x402b4f
            return 0;
        }
        // 0x402b7c
        function_406190(v14, 2, v1);
        int64_t v15 = function_405ec0(v14, v2); // 0x402b8f
        v13 = v14;
        if ((int32_t)v15 == 0) {
            int64_t result2 = 1; // 0x402ba2
            if ((int32_t)function_4086e0(v14, v2) != 0) {
                // 0x402ba4
                error(0, *__errno_location(), "%s", (char *)function_407d00(0, 3, a1));
                result2 = 0;
            }
            // 0x402b4f
            return result2;
        }
    } else {
        int64_t v16 = (int64_t)g29; // 0x402b1b
        g41 = 1;
        function_406190(v16, 2, v1);
        int64_t v17 = function_405ec0(v16, v2); // 0x402b3c
        v13 = v16;
        if ((int32_t)v17 == 0) {
            // 0x402b4f
            return 1;
        }
    }
    int64_t v18 = function_407d00(0, 3, a1); // 0x402bed
    uint32_t err_num2 = *__errno_location(); // 0x402c04
    error(0, err_num2, "%s", (char *)v18);
    if (v13 != (int64_t)g29) {
        // 0x402c1a
        function_4086e0(v13, (int64_t)err_num2);
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
    int64_t v7 = 10; // 0x402eca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"sha256sum";
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
        v7 = 10;
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
    if ((int32_t)function_409790((int64_t)g28) == 0) {
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
    int64_t result = function_409790((int64_t)g31); // 0x4030b3
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
        error(0, *err_num, "%s: %s", (char *)function_407cd0((int64_t)g43), v1);
    }
    // 0x4030fe
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403120 - 0x403168
int64_t function_403120(int64_t a1) {
    // 0x403120
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)a1 = -0x4498517a95f61999;
    *(int64_t *)(a1 + 8) = -0x5ab00ac5c3910c8e;
    *(int64_t *)(a1 + 16) = -0x64fa9773aef1ad81;
    *(int64_t *)(a1 + 24) = 0x5be0cd191f83d9ab;
    *(int64_t *)(a1 + 40) = 0;
    return 0x5be0cd191f83d9ab;
}
// Address range: 0x403170 - 0x4031b8
int64_t function_403170(int64_t a1) {
    // 0x403170
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)a1 = 0x367cd507c1059ed8;
    *(int64_t *)(a1 + 8) = -0x8f1a6c6cf8f22e9;
    *(int64_t *)(a1 + 16) = 0x68581511ffc00b31;
    *(int64_t *)(a1 + 24) = -0x4105b05b9b067059;
    *(int64_t *)(a1 + 40) = 0;
    return -0x4105b05b9b067059;
}
// Address range: 0x4031c0 - 0x4031db
int64_t function_4031c0(int64_t a1, int64_t result, int64_t a3) {
    for (int64_t i = 0; i < 29; i += 4) {
        // 0x4031c8
        *(int32_t *)(i + result) = llvm_bswap_i32(*(int32_t *)(i + a1));
    }
    // 0x4031da
    return result;
}
// Address range: 0x4031e0 - 0x4031fb
int64_t function_4031e0(int64_t a1, int64_t result, int64_t a3) {
    for (int64_t i = 0; i < 25; i += 4) {
        // 0x4031e8
        *(int32_t *)(i + result) = llvm_bswap_i32(*(int32_t *)(i + a1));
    }
    // 0x4031fa
    return result;
}
// Address range: 0x403200 - 0x405984
int64_t function_403200(uint64_t a1, uint64_t a2, int64_t a3) {
    uint32_t v1 = (int32_t)a2; // 0x403205
    uint64_t v2 = (a2 & -4) + a1; // 0x403212
    int32_t * v3 = (int32_t *)(a3 + 32); // 0x403239
    uint32_t v4 = *v3 + v1; // 0x403239
    int64_t v5 = a3; // bp-128, 0x403240
    *v3 = v4;
    int32_t * v6 = (int32_t *)(a3 + 36); // 0x403251
    uint32_t v7 = *(int32_t *)(a3 + 4); // 0x40325d
    int64_t result = v7; // 0x40325d
    *v6 = (int32_t)(v4 < v1) + (int32_t)(a2 / 0x100000000) + *v6;
    if (v2 <= a1) {
        // 0x405975
        return result;
    }
    int64_t v8 = a1; // 0x403295
    int32_t v9 = *(int32_t *)(a3 + 28); // 0x403295
    int32_t v10 = *(int32_t *)(a3 + 12); // 0x403295
    int32_t v11 = *(int32_t *)(a3 + 8); // 0x403295
    int32_t v12 = v7; // 0x403295
    int64_t v13; // 0x403200
    int32_t v14 = v13; // 0x403295
    int64_t v15 = result;
    int32_t v16; // 0x403200
    uint32_t v17 = v16;
    int32_t v18; // 0x403200
    uint32_t v19 = v18;
    int32_t v20; // 0x403200
    uint32_t v21 = v20;
    int32_t v22; // 0x403200
    uint32_t v23 = v22;
    int32_t v24; // 0x403200
    uint32_t v25 = v24;
    int32_t v26; // 0x403200
    uint32_t v27 = v26;
    int32_t v28; // 0x403200
    uint32_t v29 = v28;
    int32_t v30; // 0x403200
    uint32_t v31 = v30;
    int32_t v32; // 0x403200
    uint32_t v33 = v32;
    int32_t v34; // 0x403200
    uint32_t v35 = v34;
    int32_t v36; // 0x403200
    uint32_t v37 = v36;
    int32_t v38; // 0x403200
    uint32_t v39 = v38;
    int32_t v40; // 0x403200
    uint32_t v41 = v40;
    int32_t v42; // 0x403200
    uint32_t v43 = v42;
    int32_t v44; // 0x403200
    uint32_t v45 = v44;
    uint32_t v46 = *(int32_t *)(a3 + 16);
    int32_t v47 = *(int32_t *)(a3 + 20);
    int32_t v48 = *(int32_t *)(a3 + 24);
    int64_t v49 = v13 & 0xffffffff;
    int64_t v50 = 0;
    int32_t v51 = llvm_bswap_i32(*(int32_t *)(v50 + v8)); // 0x4032a3
    *(int32_t *)((int64_t)&v5 + 8 + v50) = v51;
    int64_t v52 = v50 + 4; // 0x4032b1
    while (v50 != 60) {
        // 0x4032a0
        v50 = v52;
        v51 = llvm_bswap_i32(*(int32_t *)(v50 + v8));
        *(int32_t *)((int64_t)&v5 + 8 + v50) = v51;
        v52 = v50 + 4;
    }
    // 0x4032b3
    v8 += 64;
    int32_t v53; // 0x403200
    int32_t v54 = v9 + 0x428a2f98 + ((v47 ^ v48) & v46 ^ v48) + ((v46 / 2048 | 0x200000 * v46) ^ (v46 / 64 | 0x4000000 * v46) ^ (v46 / 0x2000000 | 128 * v46)) + v53; // 0x4032f3
    uint32_t v55 = (int32_t)v49; // 0x4032f6
    uint32_t v56 = v54 + v10; // 0x403300
    uint32_t v57 = v54 + ((v55 / 0x2000 | 0x80000 * v55) ^ (v55 / 4 | 0x40000000 * v55) ^ (v55 / 0x400000 | 1024 * v55)) + (int32_t)((v15 | v49) & (int64_t)v11 | v15 & v49); // 0x40332a
    int32_t v58 = v48 + 0x71374491 + v43 + (v56 & (v46 ^ v47) ^ v47) + ((v56 / 2048 | 0x200000 * v56) ^ (v56 / 64 | 0x4000000 * v56) ^ (v56 / 0x2000000 | 128 * v56)); // 0x403353
    uint32_t v59 = v58 + v11; // 0x403361
    int32_t v60 = v15; // 0x403378
    uint32_t v61 = ((v57 | v55) & v60 | v57 & v55) + v58 + ((v57 / 0x2000 | 0x80000 * v57) ^ (v57 / 4 | 0x40000000 * v57) ^ (v57 / 0x400000 | 1024 * v57)); // 0x40338c
    int32_t v62 = v47 - 0x4a3f0431 + v45 + (v59 & (v56 ^ v46) ^ v46) + ((v59 / 2048 | 0x200000 * v59) ^ (v59 / 64 | 0x4000000 * v59) ^ (v59 / 0x2000000 | 128 * v59)); // 0x4033b3
    uint32_t v63 = v62 + v60; // 0x4033b9
    uint32_t v64 = ((v61 | v57) & v55 | v61 & v57) + v62 + ((v61 / 0x2000 | 0x80000 * v61) ^ (v61 / 4 | 0x40000000 * v61) ^ (v61 / 0x400000 | 1024 * v61)); // 0x4033ef
    int32_t v65 = v46 - 0x164a245b + v41 + (v63 & (v59 ^ v56) ^ v56) + ((v63 / 2048 | 0x200000 * v63) ^ (v63 / 64 | 0x4000000 * v63) ^ (v63 / 0x2000000 | 128 * v63)); // 0x403422
    uint32_t v66 = v65 + v55; // 0x40342f
    uint32_t v67 = ((v64 | v61) & v57 | v64 & v61) + v65 + ((v64 / 0x2000 | 0x80000 * v64) ^ (v64 / 4 | 0x40000000 * v64) ^ (v64 / 0x400000 | 1024 * v64)); // 0x40344e
    int32_t v68 = v56 + 0x3956c25b + v39 + (v66 & (v63 ^ v59) ^ v59) + ((v66 / 2048 | 0x200000 * v66) ^ (v66 / 64 | 0x4000000 * v66) ^ (v66 / 0x2000000 | 128 * v66)); // 0x40347f
    uint32_t v69 = v68 + v57; // 0x403485
    uint32_t v70 = ((v67 | v64) & v61 | v67 & v64) + v68 + ((v67 / 0x2000 | 0x80000 * v67) ^ (v67 / 4 | 0x40000000 * v67) ^ (v67 / 0x400000 | 1024 * v67)); // 0x4034b2
    int32_t v71 = v37 + 0x59f111f1 + v59 + (v69 & (v66 ^ v63) ^ v63) + ((v69 / 2048 | 0x200000 * v69) ^ (v69 / 64 | 0x4000000 * v69) ^ (v69 / 0x2000000 | 128 * v69)); // 0x4034ec
    uint32_t v72 = v71 + v61; // 0x4034f9
    uint32_t v73 = ((v70 | v67) & v64 | v70 & v67) + v71 + ((v70 / 0x2000 | 0x80000 * v70) ^ (v70 / 4 | 0x40000000 * v70) ^ (v70 / 0x400000 | 1024 * v70)); // 0x40351c
    int32_t v74 = v35 - 0x6dc07d5c + v63 + (v72 & (v69 ^ v66) ^ v66) + ((v72 / 2048 | 0x200000 * v72) ^ (v72 / 64 | 0x4000000 * v72) ^ (v72 / 0x2000000 | 128 * v72)); // 0x403554
    uint32_t v75 = v74 + v64; // 0x403561
    uint32_t v76 = ((v73 | v70) & v67 | v73 & v70) + v74 + ((v73 / 0x2000 | 0x80000 * v73) ^ (v73 / 4 | 0x40000000 * v73) ^ (v73 / 0x400000 | 1024 * v73)); // 0x403582
    int32_t v77 = v33 - 0x54e3a12b + v66 + (v75 & (v72 ^ v69) ^ v69) + ((v75 / 2048 | 0x200000 * v75) ^ (v75 / 64 | 0x4000000 * v75) ^ (v75 / 0x2000000 | 128 * v75)); // 0x4035b7
    uint32_t v78 = v77 + v67; // 0x4035c6
    uint32_t v79 = ((v76 | v73) & v70 | v76 & v73) + v77 + ((v76 / 0x2000 | 0x80000 * v76) ^ (v76 / 4 | 0x40000000 * v76) ^ (v76 / 0x400000 | 1024 * v76)); // 0x4035e7
    int32_t v80 = v31 - 0x27f85568 + v69 + (v78 & (v75 ^ v72) ^ v72) + ((v78 / 2048 | 0x200000 * v78) ^ (v78 / 64 | 0x4000000 * v78) ^ (v78 / 0x2000000 | 128 * v78)); // 0x40361d
    uint32_t v81 = v80 + v70; // 0x40362b
    uint32_t v82 = ((v79 | v76) & v73 | v79 & v76) + v80 + ((v79 / 0x2000 | 0x80000 * v79) ^ (v79 / 4 | 0x40000000 * v79) ^ (v79 / 0x400000 | 1024 * v79)); // 0x403651
    int32_t v83 = v29 + 0x12835b01 + v72 + (v81 & (v78 ^ v75) ^ v75) + ((v81 / 2048 | 0x200000 * v81) ^ (v81 / 64 | 0x4000000 * v81) ^ (v81 / 0x2000000 | 128 * v81)); // 0x403687
    uint32_t v84 = v83 + v73; // 0x403695
    uint32_t v85 = ((v82 | v79) & v76 | v82 & v79) + v83 + ((v82 / 0x2000 | 0x80000 * v82) ^ (v82 / 4 | 0x40000000 * v82) ^ (v82 / 0x400000 | 1024 * v82)); // 0x4036bb
    int32_t v86 = v27 + 0x243185be + v75 + (v84 & (v81 ^ v78) ^ v78) + ((v84 / 2048 | 0x200000 * v84) ^ (v84 / 64 | 0x4000000 * v84) ^ (v84 / 0x2000000 | 128 * v84)); // 0x4036f5
    uint32_t v87 = v86 + v76; // 0x403709
    uint32_t v88 = ((v85 | v82) & v79 | v85 & v82) + v86 + ((v85 / 0x2000 | 0x80000 * v85) ^ (v85 / 4 | 0x40000000 * v85) ^ (v85 / 0x400000 | 1024 * v85)); // 0x403736
    int32_t v89 = v25 + 0x550c7dc3 + v78 + (v87 & (v84 ^ v81) ^ v81) + ((v87 / 2048 | 0x200000 * v87) ^ (v87 / 64 | 0x4000000 * v87) ^ (v87 / 0x2000000 | 128 * v87)); // 0x40375a
    uint32_t v90 = v89 + v79; // 0x403762
    uint32_t v91 = ((v88 | v85) & v82 | v88 & v85) + v89 + ((v88 / 0x2000 | 0x80000 * v88) ^ (v88 / 4 | 0x40000000 * v88) ^ (v88 / 0x400000 | 1024 * v88)); // 0x403789
    int32_t v92 = v23 + 0x72be5d74 + v81 + (v90 & (v87 ^ v84) ^ v84) + ((v90 / 2048 | 0x200000 * v90) ^ (v90 / 64 | 0x4000000 * v90) ^ (v90 / 0x2000000 | 128 * v90)); // 0x4037b7
    uint32_t v93 = v92 + v82; // 0x4037c4
    uint32_t v94 = ((v91 | v88) & v85 | v91 & v88) + v92 + ((v91 / 0x2000 | 0x80000 * v91) ^ (v91 / 4 | 0x40000000 * v91) ^ (v91 / 0x400000 | 1024 * v91)); // 0x4037e4
    int32_t v95 = v21 - 0x7f214e02 + v84 + (v93 & (v90 ^ v87) ^ v87) + ((v93 / 2048 | 0x200000 * v93) ^ (v93 / 64 | 0x4000000 * v93) ^ (v93 / 0x2000000 | 128 * v93)); // 0x403817
    uint32_t v96 = v95 + v85; // 0x403824
    uint32_t v97 = ((v94 | v91) & v88 | v94 & v91) + v95 + ((v94 / 0x2000 | 0x80000 * v94) ^ (v94 / 4 | 0x40000000 * v94) ^ (v94 / 0x400000 | 1024 * v94)); // 0x40384a
    int32_t v98 = v19 - 0x6423f959 + v87 + (v96 & (v93 ^ v90) ^ v90) + ((v96 / 2048 | 0x200000 * v96) ^ (v96 / 64 | 0x4000000 * v96) ^ (v96 / 0x2000000 | 128 * v96)); // 0x403878
    uint32_t v99 = v98 + v88; // 0x403883
    uint32_t v100 = ((v97 | v94) & v91 | v97 & v94) + v98 + ((v97 / 0x2000 | 0x80000 * v97) ^ (v97 / 4 | 0x40000000 * v97) ^ (v97 / 0x400000 | 1024 * v97)); // 0x4038ac
    int32_t v101 = v17 - 0x3e640e8c + v90 + (v99 & (v96 ^ v93) ^ v93) + ((v99 / 2048 | 0x200000 * v99) ^ (v99 / 64 | 0x4000000 * v99) ^ (v99 / 0x2000000 | 128 * v99)); // 0x4038e3
    uint32_t v102 = v101 + v91; // 0x4038ee
    uint32_t v103 = ((v100 | v97) & v94 | v100 & v97) + v101 + ((v100 / 0x2000 | 0x80000 * v100) ^ (v100 / 4 | 0x40000000 * v100) ^ (v100 / 0x400000 | 1024 * v100)); // 0x40390f
    uint32_t v104 = ((v43 / 128 | 0x2000000 * v43) ^ v43 / 8 ^ (v43 / 0x40000 | 0x4000 * v43)) + v53 + v29 + ((v19 / 0x20000 | 0x8000 * v19) ^ v19 / 1024 ^ (v19 / 0x80000 | 0x2000 * v19)); // 0x403950
    int32_t v105 = v104 - 0x1b64963f + v93 + (v102 & (v99 ^ v96) ^ v96) + ((v102 / 2048 | 0x200000 * v102) ^ (v102 / 64 | 0x4000000 * v102) ^ (v102 / 0x2000000 | 128 * v102)); // 0x40397c
    uint32_t v106 = v105 + v94; // 0x403989
    uint32_t v107 = v105 + ((v103 | v100) & v97 | v103 & v100) + ((v103 / 0x2000 | 0x80000 * v103) ^ (v103 / 4 | 0x40000000 * v103) ^ (v103 / 0x400000 | 1024 * v103)); // 0x4039ae
    uint32_t v108 = ((v45 / 128 | 0x2000000 * v45) ^ v45 / 8 ^ (v45 / 0x40000 | 0x4000 * v45)) + v43 + v27 + ((v17 / 0x20000 | 0x8000 * v17) ^ v17 / 1024 ^ (v17 / 0x80000 | 0x2000 * v17)); // 0x4039f0
    int32_t v109 = v108 - 0x1041b87a + v96 + (v106 & (v102 ^ v99) ^ v99) + ((v106 / 2048 | 0x200000 * v106) ^ (v106 / 64 | 0x4000000 * v106) ^ (v106 / 0x2000000 | 128 * v106)); // 0x403a1d
    uint32_t v110 = v109 + v97; // 0x403a2b
    uint32_t v111 = v109 + ((v107 | v103) & v100 | v107 & v103) + ((v107 / 0x2000 | 0x80000 * v107) ^ (v107 / 4 | 0x40000000 * v107) ^ (v107 / 0x400000 | 1024 * v107)); // 0x403a52
    uint32_t v112 = ((v41 / 0x40000 | 0x4000 * v41) ^ v41 / 8 ^ (v41 / 128 | 0x2000000 * v41)) + v45 + v25 + ((v104 / 0x20000 | 0x8000 * v104) ^ v104 / 1024 ^ (v104 / 0x80000 | 0x2000 * v104)); // 0x403a99
    int32_t v113 = v112 + 0xfc19dc6 + v99 + (v110 & (v106 ^ v102) ^ v102) + ((v110 / 2048 | 0x200000 * v110) ^ (v110 / 64 | 0x4000000 * v110) ^ (v110 / 0x2000000 | 128 * v110)); // 0x403ac0
    uint32_t v114 = v113 + v100; // 0x403ace
    uint32_t v115 = v113 + ((v111 | v107) & v103 | v111 & v107) + ((v111 / 0x2000 | 0x80000 * v111) ^ (v111 / 4 | 0x40000000 * v111) ^ (v111 / 0x400000 | 1024 * v111)); // 0x403afd
    uint32_t v116 = ((v39 / 0x40000 | 0x4000 * v39) ^ v39 / 8 ^ (v39 / 128 | 0x2000000 * v39)) + v41 + v23 + ((v108 / 0x20000 | 0x8000 * v108) ^ v108 / 1024 ^ (v108 / 0x80000 | 0x2000 * v108)); // 0x403b41
    int32_t v117 = v116 + 0x240ca1cc + v102 + (v114 & (v110 ^ v106) ^ v106) + ((v114 / 2048 | 0x200000 * v114) ^ (v114 / 64 | 0x4000000 * v114) ^ (v114 / 0x2000000 | 128 * v114)); // 0x403b6c
    uint32_t v118 = v117 + v103; // 0x403b7c
    uint32_t v119 = v117 + ((v115 | v111) & v107 | v115 & v111) + ((v115 / 0x2000 | 0x80000 * v115) ^ (v115 / 4 | 0x40000000 * v115) ^ (v115 / 0x400000 | 1024 * v115)); // 0x403b9a
    uint32_t v120 = ((v37 / 0x40000 | 0x4000 * v37) ^ v37 / 8 ^ (v37 / 128 | 0x2000000 * v37)) + v39 + v21 + ((v112 / 0x20000 | 0x8000 * v112) ^ v112 / 1024 ^ (v112 / 0x80000 | 0x2000 * v112)); // 0x403bdc
    int32_t v121 = v120 + 0x2de92c6f + v106 + (v118 & (v114 ^ v110) ^ v110) + ((v118 / 2048 | 0x200000 * v118) ^ (v118 / 64 | 0x4000000 * v118) ^ (v118 / 0x2000000 | 128 * v118)); // 0x403c07
    uint32_t v122 = v121 + v107; // 0x403c0e
    uint32_t v123 = v121 + ((v119 | v115) & v111 | v119 & v115) + ((v119 / 0x2000 | 0x80000 * v119) ^ (v119 / 4 | 0x40000000 * v119) ^ (v119 / 0x400000 | 1024 * v119)); // 0x403c3b
    uint32_t v124 = ((v35 / 0x40000 | 0x4000 * v35) ^ v35 / 8 ^ (v35 / 128 | 0x2000000 * v35)) + v37 + v19 + ((v116 / 0x20000 | 0x8000 * v116) ^ v116 / 1024 ^ (v116 / 0x80000 | 0x2000 * v116)); // 0x403c75
    int32_t v125 = v124 + 0x4a7484aa + v110 + (v122 & (v118 ^ v114) ^ v114) + ((v122 / 2048 | 0x200000 * v122) ^ (v122 / 64 | 0x4000000 * v122) ^ (v122 / 0x2000000 | 128 * v122)); // 0x403ca1
    uint32_t v126 = v125 + v111; // 0x403cab
    uint32_t v127 = v125 + ((v123 | v119) & v115 | v123 & v119) + ((v123 / 0x2000 | 0x80000 * v123) ^ (v123 / 4 | 0x40000000 * v123) ^ (v123 / 0x400000 | 1024 * v123)); // 0x403ccf
    uint32_t v128 = ((v33 / 0x40000 | 0x4000 * v33) ^ v33 / 8 ^ (v33 / 128 | 0x2000000 * v33)) + v35 + v17 + ((v120 / 0x20000 | 0x8000 * v120) ^ v120 / 1024 ^ (v120 / 0x80000 | 0x2000 * v120)); // 0x403d14
    int32_t v129 = v128 + 0x5cb0a9dc + v114 + (v126 & (v122 ^ v118) ^ v118) + ((v126 / 2048 | 0x200000 * v126) ^ (v126 / 64 | 0x4000000 * v126) ^ (v126 / 0x2000000 | 128 * v126)); // 0x403d49
    uint32_t v130 = v129 + v115; // 0x403d56
    uint32_t v131 = v129 + ((v127 | v123) & v119 | v127 & v123) + ((v127 / 0x2000 | 0x80000 * v127) ^ (v127 / 4 | 0x40000000 * v127) ^ (v127 / 0x400000 | 1024 * v127)); // 0x403d75
    uint32_t v132 = ((v31 / 128 | 0x2000000 * v31) ^ v31 / 8 ^ (v31 / 0x40000 | 0x4000 * v31)) + v33 + v104 + ((v124 / 0x20000 | 0x8000 * v124) ^ v124 / 1024 ^ (v124 / 0x80000 | 0x2000 * v124)); // 0x403dba
    int32_t v133 = v132 + 0x76f988da + v118 + (v130 & (v126 ^ v122) ^ v122) + ((v130 / 2048 | 0x200000 * v130) ^ (v130 / 64 | 0x4000000 * v130) ^ (v130 / 0x2000000 | 128 * v130)); // 0x403df0
    uint32_t v134 = v133 + v119; // 0x403dfa
    uint32_t v135 = v133 + ((v131 | v127) & v123 | v131 & v127) + ((v131 / 0x2000 | 0x80000 * v131) ^ (v131 / 4 | 0x40000000 * v131) ^ (v131 / 0x400000 | 1024 * v131)); // 0x403e22
    uint32_t v136 = ((v29 / 128 | 0x2000000 * v29) ^ v29 / 8 ^ (v29 / 0x40000 | 0x4000 * v29)) + v31 + v108 + ((v128 / 0x20000 | 0x8000 * v128) ^ v128 / 1024 ^ (v128 / 0x80000 | 0x2000 * v128)); // 0x403e67
    int32_t v137 = v136 - 0x67c1aeae + v122 + (v134 & (v130 ^ v126) ^ v126) + ((v134 / 2048 | 0x200000 * v134) ^ (v134 / 64 | 0x4000000 * v134) ^ (v134 / 0x2000000 | 128 * v134)); // 0x403e9c
    uint32_t v138 = v137 + v123; // 0x403ea9
    uint32_t v139 = v137 + ((v135 | v131) & v127 | v135 & v131) + ((v135 / 0x2000 | 0x80000 * v135) ^ (v135 / 4 | 0x40000000 * v135) ^ (v135 / 0x400000 | 1024 * v135)); // 0x403ec7
    uint32_t v140 = ((v27 / 128 | 0x2000000 * v27) ^ v27 / 8 ^ (v27 / 0x40000 | 0x4000 * v27)) + v29 + v112 + ((v132 / 0x20000 | 0x8000 * v132) ^ v132 / 1024 ^ (v132 / 0x80000 | 0x2000 * v132)); // 0x403f0f
    int32_t v141 = v140 - 0x57ce3993 + v126 + (v138 & (v134 ^ v130) ^ v130) + ((v138 / 2048 | 0x200000 * v138) ^ (v138 / 64 | 0x4000000 * v138) ^ (v138 / 0x2000000 | 128 * v138)); // 0x403f46
    uint32_t v142 = v141 + v127; // 0x403f49
    uint32_t v143 = v141 + ((v139 | v135) & v131 | v139 & v135) + ((v139 / 0x2000 | 0x80000 * v139) ^ (v139 / 4 | 0x40000000 * v139) ^ (v139 / 0x400000 | 1024 * v139)); // 0x403f72
    uint32_t v144 = ((v25 / 128 | 0x2000000 * v25) ^ v25 / 8 ^ (v25 / 0x40000 | 0x4000 * v25)) + v27 + v116 + ((v136 / 0x20000 | 0x8000 * v136) ^ v136 / 1024 ^ (v136 / 0x80000 | 0x2000 * v136)); // 0x403fbb
    int32_t v145 = v144 - 0x4ffcd838 + v130 + (v142 & (v138 ^ v134) ^ v134) + ((v142 / 2048 | 0x200000 * v142) ^ (v142 / 64 | 0x4000000 * v142) ^ (v142 / 0x2000000 | 128 * v142)); // 0x403ff3
    uint32_t v146 = v145 + v131; // 0x403ff6
    uint32_t v147 = v145 + ((v143 | v139) & v135 | v143 & v139) + ((v143 / 0x2000 | 0x80000 * v143) ^ (v143 / 4 | 0x40000000 * v143) ^ (v143 / 0x400000 | 1024 * v143)); // 0x40401f
    uint32_t v148 = ((v23 / 128 | 0x2000000 * v23) ^ v23 / 8 ^ (v23 / 0x40000 | 0x4000 * v23)) + v25 + v120 + ((v140 / 0x20000 | 0x8000 * v140) ^ v140 / 1024 ^ (v140 / 0x80000 | 0x2000 * v140)); // 0x404066
    int32_t v149 = v148 - 0x40a68039 + v134 + (v146 & (v142 ^ v138) ^ v138) + ((v146 / 2048 | 0x200000 * v146) ^ (v146 / 64 | 0x4000000 * v146) ^ (v146 / 0x2000000 | 128 * v146)); // 0x4040a0
    uint32_t v150 = v149 + v135; // 0x4040a3
    uint32_t v151 = v149 + ((v147 | v143) & v139 | v147 & v143) + ((v147 / 0x2000 | 0x80000 * v147) ^ (v147 / 4 | 0x40000000 * v147) ^ (v147 / 0x400000 | 1024 * v147)); // 0x4040cc
    uint32_t v152 = ((v21 / 128 | 0x2000000 * v21) ^ v21 / 8 ^ (v21 / 0x40000 | 0x4000 * v21)) + v23 + v124 + ((v144 / 0x20000 | 0x8000 * v144) ^ v144 / 1024 ^ (v144 / 0x80000 | 0x2000 * v144)); // 0x404113
    int32_t v153 = v152 - 0x391ff40d + v138 + (v150 & (v146 ^ v142) ^ v142) + ((v150 / 2048 | 0x200000 * v150) ^ (v150 / 64 | 0x4000000 * v150) ^ (v150 / 0x2000000 | 128 * v150)); // 0x40414c
    uint32_t v154 = v153 + v139; // 0x40414f
    uint32_t v155 = v153 + ((v151 | v147) & v143 | v151 & v147) + ((v151 / 0x2000 | 0x80000 * v151) ^ (v151 / 4 | 0x40000000 * v151) ^ (v151 / 0x400000 | 1024 * v151)); // 0x404178
    uint32_t v156 = ((v19 / 128 | 0x2000000 * v19) ^ v19 / 8 ^ (v19 / 0x40000 | 0x4000 * v19)) + v21 + v128 + ((v148 / 0x20000 | 0x8000 * v148) ^ v148 / 1024 ^ (v148 / 0x80000 | 0x2000 * v148)); // 0x4041bf
    int32_t v157 = v156 - 0x2a586eb9 + v142 + (v154 & (v150 ^ v146) ^ v146) + ((v154 / 2048 | 0x200000 * v154) ^ (v154 / 64 | 0x4000000 * v154) ^ (v154 / 0x2000000 | 128 * v154)); // 0x4041f9
    uint32_t v158 = v157 + v143; // 0x4041fc
    uint32_t v159 = v157 + ((v155 | v151) & v147 | v155 & v151) + ((v155 / 0x2000 | 0x80000 * v155) ^ (v155 / 4 | 0x40000000 * v155) ^ (v155 / 0x400000 | 1024 * v155)); // 0x404225
    uint32_t v160 = ((v17 / 128 | 0x2000000 * v17) ^ v17 / 8 ^ (v17 / 0x40000 | 0x4000 * v17)) + v19 + v132 + ((v152 / 0x20000 | 0x8000 * v152) ^ v152 / 1024 ^ (v152 / 0x80000 | 0x2000 * v152)); // 0x40426c
    int32_t v161 = v160 + 0x6ca6351 + v146 + (v158 & (v154 ^ v150) ^ v150) + ((v158 / 2048 | 0x200000 * v158) ^ (v158 / 64 | 0x4000000 * v158) ^ (v158 / 0x2000000 | 128 * v158)); // 0x4042a7
    uint32_t v162 = v161 + v147; // 0x4042aa
    uint32_t v163 = v161 + ((v159 | v155) & v151 | v159 & v155) + ((v159 / 0x2000 | 0x80000 * v159) ^ (v159 / 4 | 0x40000000 * v159) ^ (v159 / 0x400000 | 1024 * v159)); // 0x4042d3
    uint32_t v164 = ((v104 / 128 | 0x2000000 * v104) ^ v104 / 8 ^ (v104 / 0x40000 | 0x4000 * v104)) + v17 + v136 + ((v156 / 0x20000 | 0x8000 * v156) ^ v156 / 1024 ^ (v156 / 0x80000 | 0x2000 * v156)); // 0x404316
    int32_t v165 = v164 + 0x14292967 + v150 + (v162 & (v158 ^ v154) ^ v154) + ((v162 / 2048 | 0x200000 * v162) ^ (v162 / 64 | 0x4000000 * v162) ^ (v162 / 0x2000000 | 128 * v162)); // 0x40434b
    uint32_t v166 = v165 + v151; // 0x404358
    uint32_t v167 = v165 + ((v163 | v159) & v155 | v163 & v159) + ((v163 / 0x2000 | 0x80000 * v163) ^ (v163 / 4 | 0x40000000 * v163) ^ (v163 / 0x400000 | 1024 * v163)); // 0x404379
    uint32_t v168 = ((v108 / 128 | 0x2000000 * v108) ^ v108 / 8 ^ (v108 / 0x40000 | 0x4000 * v108)) + v104 + v140 + ((v160 / 0x20000 | 0x8000 * v160) ^ v160 / 1024 ^ (v160 / 0x80000 | 0x2000 * v160)); // 0x4043bb
    int32_t v169 = v168 + 0x27b70a85 + v154 + (v166 & (v162 ^ v158) ^ v158) + ((v166 / 2048 | 0x200000 * v166) ^ (v166 / 64 | 0x4000000 * v166) ^ (v166 / 0x2000000 | 128 * v166)); // 0x4043fa
    uint32_t v170 = v169 + v155; // 0x404405
    uint32_t v171 = v169 + ((v167 | v163) & v159 | v167 & v163) + ((v167 / 0x2000 | 0x80000 * v167) ^ (v167 / 4 | 0x40000000 * v167) ^ (v167 / 0x400000 | 1024 * v167)); // 0x40442b
    uint32_t v172 = ((v112 / 128 | 0x2000000 * v112) ^ v112 / 8 ^ (v112 / 0x40000 | 0x4000 * v112)) + v108 + v144 + ((v164 / 0x20000 | 0x8000 * v164) ^ v164 / 1024 ^ (v164 / 0x80000 | 0x2000 * v164)); // 0x40446c
    int32_t v173 = v172 + 0x2e1b2138 + v158 + (v170 & (v166 ^ v162) ^ v162) + ((v170 / 2048 | 0x200000 * v170) ^ (v170 / 64 | 0x4000000 * v170) ^ (v170 / 0x2000000 | 128 * v170)); // 0x4044b0
    uint32_t v174 = v173 + v159; // 0x4044b2
    uint32_t v175 = v173 + ((v171 | v167) & v163 | v171 & v167) + ((v171 / 0x2000 | 0x80000 * v171) ^ (v171 / 4 | 0x40000000 * v171) ^ (v171 / 0x400000 | 1024 * v171)); // 0x4044fb
    uint32_t v176 = ((v116 / 128 | 0x2000000 * v116) ^ v116 / 8 ^ (v116 / 0x40000 | 0x4000 * v116)) + v112 + v148 + ((v168 / 0x20000 | 0x8000 * v168) ^ v168 / 1024 ^ (v168 / 0x80000 | 0x2000 * v168)); // 0x404537
    int32_t v177 = v176 + 0x4d2c6dfc + v162 + (v174 & (v170 ^ v166) ^ v166) + ((v174 / 2048 | 0x200000 * v174) ^ (v174 / 64 | 0x4000000 * v174) ^ (v174 / 0x2000000 | 128 * v174)); // 0x404582
    uint32_t v178 = v177 + v163; // 0x404588
    uint32_t v179 = v177 + ((v175 | v171) & v167 | v175 & v171) + ((v175 / 0x2000 | 0x80000 * v175) ^ (v175 / 4 | 0x40000000 * v175) ^ (v175 / 0x400000 | 1024 * v175)); // 0x4045b2
    uint32_t v180 = ((v120 / 128 | 0x2000000 * v120) ^ v120 / 8 ^ (v120 / 0x40000 | 0x4000 * v120)) + v116 + v152 + ((v172 / 0x20000 | 0x8000 * v172) ^ v172 / 1024 ^ (v172 / 0x80000 | 0x2000 * v172)); // 0x4045f0
    int32_t v181 = v180 + 0x53380d13 + v166 + (v178 & (v174 ^ v170) ^ v170) + ((v178 / 2048 | 0x200000 * v178) ^ (v178 / 64 | 0x4000000 * v178) ^ (v178 / 0x2000000 | 128 * v178)); // 0x40462a
    uint32_t v182 = v181 + v167; // 0x404636
    uint32_t v183 = v181 + ((v179 | v175) & v171 | v179 & v175) + ((v179 / 0x2000 | 0x80000 * v179) ^ (v179 / 4 | 0x40000000 * v179) ^ (v179 / 0x400000 | 1024 * v179)); // 0x40465d
    uint32_t v184 = ((v124 / 128 | 0x2000000 * v124) ^ v124 / 8 ^ (v124 / 0x40000 | 0x4000 * v124)) + v120 + v156 + ((v176 / 0x20000 | 0x8000 * v176) ^ v176 / 1024 ^ (v176 / 0x80000 | 0x2000 * v176)); // 0x40468a
    int32_t v185 = v184 + 0x650a7354 + v170 + (v182 & (v178 ^ v174) ^ v174) + ((v182 / 2048 | 0x200000 * v182) ^ (v182 / 64 | 0x4000000 * v182) ^ (v182 / 0x2000000 | 128 * v182)); // 0x4046bb
    uint32_t v186 = v185 + v171; // 0x4046c3
    uint32_t v187 = v185 + ((v183 | v179) & v175 | v183 & v179) + ((v183 / 0x2000 | 0x80000 * v183) ^ (v183 / 4 | 0x40000000 * v183) ^ (v183 / 0x400000 | 1024 * v183)); // 0x4046eb
    uint32_t v188 = ((v128 / 128 | 0x2000000 * v128) ^ v128 / 8 ^ (v128 / 0x40000 | 0x4000 * v128)) + v124 + v160 + ((v180 / 0x20000 | 0x8000 * v180) ^ v180 / 1024 ^ (v180 / 0x80000 | 0x2000 * v180)); // 0x404721
    int32_t v189 = v188 + 0x766a0abb + v174 + (v186 & (v182 ^ v178) ^ v178) + ((v186 / 2048 | 0x200000 * v186) ^ (v186 / 64 | 0x4000000 * v186) ^ (v186 / 0x2000000 | 128 * v186)); // 0x404769
    uint32_t v190 = v189 + v175; // 0x404770
    uint32_t v191 = v189 + ((v187 | v183) & v179 | v187 & v183) + ((v187 / 0x2000 | 0x80000 * v187) ^ (v187 / 4 | 0x40000000 * v187) ^ (v187 / 0x400000 | 1024 * v187)); // 0x40479c
    uint32_t v192 = ((v132 / 128 | 0x2000000 * v132) ^ v132 / 8 ^ (v132 / 0x40000 | 0x4000 * v132)) + v128 + v164 + ((v184 / 0x20000 | 0x8000 * v184) ^ v184 / 1024 ^ (v184 / 0x80000 | 0x2000 * v184)); // 0x4047cc
    int32_t v193 = v192 - 0x7e3d36d2 + v178 + (v190 & (v186 ^ v182) ^ v182) + ((v190 / 2048 | 0x200000 * v190) ^ (v190 / 64 | 0x4000000 * v190) ^ (v190 / 0x2000000 | 128 * v190)); // 0x404806
    uint32_t v194 = v193 + v179; // 0x404811
    uint32_t v195 = v193 + ((v191 | v187) & v183 | v191 & v187) + ((v191 / 0x2000 | 0x80000 * v191) ^ (v191 / 4 | 0x40000000 * v191) ^ (v191 / 0x400000 | 1024 * v191)); // 0x404830
    uint32_t v196 = ((v136 / 128 | 0x2000000 * v136) ^ v136 / 8 ^ (v136 / 0x40000 | 0x4000 * v136)) + v132 + v168 + ((v188 / 0x20000 | 0x8000 * v188) ^ v188 / 1024 ^ (v188 / 0x80000 | 0x2000 * v188)); // 0x40486d
    int32_t v197 = v196 - 0x6d8dd37b + v182 + (v194 & (v190 ^ v186) ^ v186) + ((v194 / 2048 | 0x200000 * v194) ^ (v194 / 64 | 0x4000000 * v194) ^ (v194 / 0x2000000 | 128 * v194)); // 0x4048a6
    uint32_t v198 = v197 + v183; // 0x4048b0
    uint32_t v199 = v197 + ((v195 | v191) & v187 | v195 & v191) + ((v195 / 0x2000 | 0x80000 * v195) ^ (v195 / 4 | 0x40000000 * v195) ^ (v195 / 0x400000 | 1024 * v195)); // 0x4048cf
    uint32_t v200 = ((v140 / 128 | 0x2000000 * v140) ^ v140 / 8 ^ (v140 / 0x40000 | 0x4000 * v140)) + v136 + v172 + ((v192 / 0x20000 | 0x8000 * v192) ^ v192 / 1024 ^ (v192 / 0x80000 | 0x2000 * v192)); // 0x40490c
    int32_t v201 = v200 - 0x5d40175f + v186 + (v198 & (v194 ^ v190) ^ v190) + ((v198 / 2048 | 0x200000 * v198) ^ (v198 / 64 | 0x4000000 * v198) ^ (v198 / 0x2000000 | 128 * v198)); // 0x404946
    uint32_t v202 = v201 + v187; // 0x404951
    uint32_t v203 = v201 + ((v199 | v195) & v191 | v199 & v195) + ((v199 / 0x2000 | 0x80000 * v199) ^ (v199 / 4 | 0x40000000 * v199) ^ (v199 / 0x400000 | 1024 * v199)); // 0x404976
    uint32_t v204 = ((v144 / 128 | 0x2000000 * v144) ^ v144 / 8 ^ (v144 / 0x40000 | 0x4000 * v144)) + v140 + v176 + ((v196 / 0x20000 | 0x8000 * v196) ^ v196 / 1024 ^ (v196 / 0x80000 | 0x2000 * v196)); // 0x4049af
    int32_t v205 = v204 - 0x57e599b5 + v190 + (v202 & (v198 ^ v194) ^ v194) + ((v202 / 2048 | 0x200000 * v202) ^ (v202 / 64 | 0x4000000 * v202) ^ (v202 / 0x2000000 | 128 * v202)); // 0x4049f9
    uint32_t v206 = v205 + v191; // 0x404a0b
    uint32_t v207 = v205 + ((v203 | v199) & v195 | v203 & v199) + ((v203 / 0x2000 | 0x80000 * v203) ^ (v203 / 4 | 0x40000000 * v203) ^ (v203 / 0x400000 | 1024 * v203)); // 0x404a2a
    uint32_t v208 = ((v148 / 128 | 0x2000000 * v148) ^ v148 / 8 ^ (v148 / 0x40000 | 0x4000 * v148)) + v144 + v180 + ((v200 / 0x20000 | 0x8000 * v200) ^ v200 / 1024 ^ (v200 / 0x80000 | 0x2000 * v200)); // 0x404a65
    int32_t v209 = v208 - 0x3db47490 + v194 + (v206 & (v202 ^ v198) ^ v198) + ((v206 / 2048 | 0x200000 * v206) ^ (v206 / 64 | 0x4000000 * v206) ^ (v206 / 0x2000000 | 128 * v206)); // 0x404aa6
    uint32_t v210 = v209 + v195; // 0x404aac
    uint32_t v211 = v209 + ((v207 | v203) & v199 | v207 & v203) + ((v207 / 0x2000 | 0x80000 * v207) ^ (v207 / 4 | 0x40000000 * v207) ^ (v207 / 0x400000 | 1024 * v207)); // 0x404ade
    uint32_t v212 = ((v152 / 128 | 0x2000000 * v152) ^ v152 / 8 ^ (v152 / 0x40000 | 0x4000 * v152)) + v148 + v184 + ((v204 / 0x20000 | 0x8000 * v204) ^ v204 / 1024 ^ (v204 / 0x80000 | 0x2000 * v204)); // 0x404b1b
    int32_t v213 = v212 - 0x3893ae5d + v198 + (v210 & (v206 ^ v202) ^ v202) + ((v210 / 2048 | 0x200000 * v210) ^ (v210 / 64 | 0x4000000 * v210) ^ (v210 / 0x2000000 | 128 * v210)); // 0x404b63
    uint32_t v214 = v213 + v199; // 0x404b69
    uint32_t v215 = v213 + ((v211 | v207) & v203 | v211 & v207) + ((v211 / 0x2000 | 0x80000 * v211) ^ (v211 / 4 | 0x40000000 * v211) ^ (v211 / 0x400000 | 1024 * v211)); // 0x404b9c
    uint32_t v216 = ((v156 / 128 | 0x2000000 * v156) ^ v156 / 8 ^ (v156 / 0x40000 | 0x4000 * v156)) + v152 + v188 + ((v208 / 0x20000 | 0x8000 * v208) ^ v208 / 1024 ^ (v208 / 0x80000 | 0x2000 * v208)); // 0x404bd4
    int32_t v217 = v216 - 0x2e6d17e7 + v202 + (v214 & (v210 ^ v206) ^ v206) + ((v214 / 2048 | 0x200000 * v214) ^ (v214 / 64 | 0x4000000 * v214) ^ (v214 / 0x2000000 | 128 * v214)); // 0x404bff
    uint32_t v218 = v217 + v203; // 0x404c01
    uint32_t v219 = v217 + ((v215 | v211) & v207 | v215 & v211) + ((v215 / 0x2000 | 0x80000 * v215) ^ (v215 / 4 | 0x40000000 * v215) ^ (v215 / 0x400000 | 1024 * v215)); // 0x404c46
    uint32_t v220 = ((v160 / 128 | 0x2000000 * v160) ^ v160 / 8 ^ (v160 / 0x40000 | 0x4000 * v160)) + v156 + v192 + ((v212 / 0x20000 | 0x8000 * v212) ^ v212 / 1024 ^ (v212 / 0x80000 | 0x2000 * v212)); // 0x404c74
    int32_t v221 = v220 - 0x2966f9dc + v206 + (v218 & (v214 ^ v210) ^ v210) + ((v218 / 2048 | 0x200000 * v218) ^ (v218 / 64 | 0x4000000 * v218) ^ (v218 / 0x2000000 | 128 * v218)); // 0x404cc5
    uint32_t v222 = v221 + v207; // 0x404ccd
    uint32_t v223 = v221 + ((v219 | v215) & v211 | v219 & v215) + ((v219 / 0x2000 | 0x80000 * v219) ^ (v219 / 4 | 0x40000000 * v219) ^ (v219 / 0x400000 | 1024 * v219)); // 0x404cf8
    uint32_t v224 = ((v164 / 128 | 0x2000000 * v164) ^ v164 / 8 ^ (v164 / 0x40000 | 0x4000 * v164)) + v160 + v196 + ((v216 / 0x20000 | 0x8000 * v216) ^ v216 / 1024 ^ (v216 / 0x80000 | 0x2000 * v216)); // 0x404d31
    int32_t v225 = v224 - 0xbf1ca7b + v210 + (v222 & (v218 ^ v214) ^ v214) + ((v222 / 2048 | 0x200000 * v222) ^ (v222 / 64 | 0x4000000 * v222) ^ (v222 / 0x2000000 | 128 * v222)); // 0x404d7a
    uint32_t v226 = v225 + v211; // 0x404d7c
    uint32_t v227 = v225 + ((v223 | v219) & v215 | v223 & v219) + ((v223 / 0x2000 | 0x80000 * v223) ^ (v223 / 4 | 0x40000000 * v223) ^ (v223 / 0x400000 | 1024 * v223)); // 0x404dba
    uint32_t v228 = ((v168 / 128 | 0x2000000 * v168) ^ v168 / 8 ^ (v168 / 0x40000 | 0x4000 * v168)) + v164 + v200 + ((v220 / 0x20000 | 0x8000 * v220) ^ v220 / 1024 ^ (v220 / 0x80000 | 0x2000 * v220)); // 0x404dee
    int32_t v229 = v228 + 0x106aa070 + v214 + (v226 & (v222 ^ v218) ^ v218) + ((v226 / 2048 | 0x200000 * v226) ^ (v226 / 64 | 0x4000000 * v226) ^ (v226 / 0x2000000 | 128 * v226)); // 0x404e27
    uint32_t v230 = v229 + v215; // 0x404e34
    uint32_t v231 = v229 + ((v227 | v223) & v219 | v227 & v223) + ((v227 / 0x2000 | 0x80000 * v227) ^ (v227 / 4 | 0x40000000 * v227) ^ (v227 / 0x400000 | 1024 * v227)); // 0x404e58
    uint32_t v232 = ((v172 / 128 | 0x2000000 * v172) ^ v172 / 8 ^ (v172 / 0x40000 | 0x4000 * v172)) + v168 + v204 + ((v224 / 0x20000 | 0x8000 * v224) ^ v224 / 1024 ^ (v224 / 0x80000 | 0x2000 * v224)); // 0x404e9e
    int32_t v233 = v232 + 0x19a4c116 + v218 + (v230 & (v226 ^ v222) ^ v222) + ((v230 / 2048 | 0x200000 * v230) ^ (v230 / 64 | 0x4000000 * v230) ^ (v230 / 0x2000000 | 128 * v230)); // 0x404ed6
    uint32_t v234 = v233 + v219; // 0x404edc
    uint32_t v235 = v233 + ((v231 | v227) & v223 | v231 & v227) + ((v231 / 0x2000 | 0x80000 * v231) ^ (v231 / 4 | 0x40000000 * v231) ^ (v231 / 0x400000 | 1024 * v231)); // 0x404f13
    uint32_t v236 = ((v176 / 128 | 0x2000000 * v176) ^ v176 / 8 ^ (v176 / 0x40000 | 0x4000 * v176)) + v172 + v208 + ((v228 / 0x20000 | 0x8000 * v228) ^ v228 / 1024 ^ (v228 / 0x80000 | 0x2000 * v228)); // 0x404f43
    int32_t v237 = v236 + 0x1e376c08 + v222 + (v234 & (v230 ^ v226) ^ v226) + ((v234 / 2048 | 0x200000 * v234) ^ (v234 / 64 | 0x4000000 * v234) ^ (v234 / 0x2000000 | 128 * v234)); // 0x404f7f
    uint32_t v238 = v237 + v223; // 0x404f89
    uint32_t v239 = v237 + ((v235 | v231) & v227 | v235 & v231) + ((v235 / 0x2000 | 0x80000 * v235) ^ (v235 / 4 | 0x40000000 * v235) ^ (v235 / 0x400000 | 1024 * v235)); // 0x404fbc
    uint32_t v240 = ((v180 / 128 | 0x2000000 * v180) ^ v180 / 8 ^ (v180 / 0x40000 | 0x4000 * v180)) + v176 + v212 + ((v232 / 0x20000 | 0x8000 * v232) ^ v232 / 1024 ^ (v232 / 0x80000 | 0x2000 * v232)); // 0x404fff
    int32_t v241 = v240 + 0x2748774c + v226 + (v238 & (v234 ^ v230) ^ v230) + ((v238 / 2048 | 0x200000 * v238) ^ (v238 / 64 | 0x4000000 * v238) ^ (v238 / 0x2000000 | 128 * v238)); // 0x405036
    uint32_t v242 = v241 + v227; // 0x405042
    uint32_t v243 = v241 + ((v239 | v235) & v231 | v239 & v235) + ((v239 / 0x2000 | 0x80000 * v239) ^ (v239 / 4 | 0x40000000 * v239) ^ (v239 / 0x400000 | 1024 * v239)); // 0x405066
    uint32_t v244 = ((v184 / 128 | 0x2000000 * v184) ^ v184 / 8 ^ (v184 / 0x40000 | 0x4000 * v184)) + v180 + v216 + ((v236 / 0x20000 | 0x8000 * v236) ^ v236 / 1024 ^ (v236 / 0x80000 | 0x2000 * v236)); // 0x405099
    int32_t v245 = v244 + 0x34b0bcb5 + v230 + (v242 & (v238 ^ v234) ^ v234) + ((v242 / 2048 | 0x200000 * v242) ^ (v242 / 64 | 0x4000000 * v242) ^ (v242 / 0x2000000 | 128 * v242)); // 0x4050d0
    uint32_t v246 = v245 + v231; // 0x4050d8
    uint32_t v247 = v245 + ((v243 | v239) & v235 | v243 & v239) + ((v243 / 0x2000 | 0x80000 * v243) ^ (v243 / 4 | 0x40000000 * v243) ^ (v243 / 0x400000 | 1024 * v243)); // 0x405108
    uint32_t v248 = ((v188 / 128 | 0x2000000 * v188) ^ v188 / 8 ^ (v188 / 0x40000 | 0x4000 * v188)) + v184 + v220 + ((v240 / 0x20000 | 0x8000 * v240) ^ v240 / 1024 ^ (v240 / 0x80000 | 0x2000 * v240)); // 0x405142
    int32_t v249 = v248 + 0x391c0cb3 + v234 + (v246 & (v242 ^ v238) ^ v238) + ((v246 / 2048 | 0x200000 * v246) ^ (v246 / 64 | 0x4000000 * v246) ^ (v246 / 0x2000000 | 128 * v246)); // 0x405173
    uint32_t v250 = v249 + v235; // 0x40517a
    uint32_t v251 = v249 + ((v247 | v243) & v239 | v247 & v243) + ((v247 / 0x2000 | 0x80000 * v247) ^ (v247 / 4 | 0x40000000 * v247) ^ (v247 / 0x400000 | 1024 * v247)); // 0x40519f
    uint32_t v252 = ((v192 / 128 | 0x2000000 * v192) ^ v192 / 8 ^ (v192 / 0x40000 | 0x4000 * v192)) + v188 + v224 + ((v244 / 0x20000 | 0x8000 * v244) ^ v244 / 1024 ^ (v244 / 0x80000 | 0x2000 * v244)); // 0x4051d9
    int32_t v253 = v252 + 0x4ed8aa4a + v238 + (v250 & (v246 ^ v242) ^ v242) + ((v250 / 2048 | 0x200000 * v250) ^ (v250 / 64 | 0x4000000 * v250) ^ (v250 / 0x2000000 | 128 * v250)); // 0x405214
    uint32_t v254 = v253 + v239; // 0x405221
    uint32_t v255 = v253 + ((v251 | v247) & v243 | v251 & v247) + ((v251 / 0x2000 | 0x80000 * v251) ^ (v251 / 4 | 0x40000000 * v251) ^ (v251 / 0x400000 | 1024 * v251)); // 0x40523f
    uint32_t v256 = ((v196 / 128 | 0x2000000 * v196) ^ v196 / 8 ^ (v196 / 0x40000 | 0x4000 * v196)) + v192 + v228 + ((v248 / 0x20000 | 0x8000 * v248) ^ v248 / 1024 ^ (v248 / 0x80000 | 0x2000 * v248)); // 0x405282
    int32_t v257 = v256 + 0x5b9cca4f + v242 + (v254 & (v250 ^ v246) ^ v246) + ((v254 / 2048 | 0x200000 * v254) ^ (v254 / 64 | 0x4000000 * v254) ^ (v254 / 0x2000000 | 128 * v254)); // 0x4052c8
    uint32_t v258 = v257 + v243; // 0x4052d5
    uint32_t v259 = v257 + ((v255 | v251) & v247 | v255 & v251) + ((v255 / 0x2000 | 0x80000 * v255) ^ (v255 / 4 | 0x40000000 * v255) ^ (v255 / 0x400000 | 1024 * v255)); // 0x4052f4
    uint32_t v260 = ((v200 / 128 | 0x2000000 * v200) ^ v200 / 8 ^ (v200 / 0x40000 | 0x4000 * v200)) + v196 + v232 + ((v252 / 0x20000 | 0x8000 * v252) ^ v252 / 1024 ^ (v252 / 0x80000 | 0x2000 * v252)); // 0x405341
    int32_t v261 = v260 + 0x682e6ff3 + v246 + (v258 & (v254 ^ v250) ^ v250) + ((v258 / 2048 | 0x200000 * v258) ^ (v258 / 64 | 0x4000000 * v258) ^ (v258 / 0x2000000 | 128 * v258)); // 0x405387
    uint32_t v262 = v261 + v247; // 0x40539b
    uint32_t v263 = v261 + ((v259 | v255) & v251 | v259 & v255) + ((v259 / 0x2000 | 0x80000 * v259) ^ (v259 / 4 | 0x40000000 * v259) ^ (v259 / 0x400000 | 1024 * v259)); // 0x4053b5
    uint32_t v264 = ((v204 / 128 | 0x2000000 * v204) ^ v204 / 8 ^ (v204 / 0x40000 | 0x4000 * v204)) + v200 + v236 + ((v256 / 0x20000 | 0x8000 * v256) ^ v256 / 1024 ^ (v256 / 0x80000 | 0x2000 * v256)); // 0x4053fa
    int32_t v265 = v264 + 0x748f82ee + v250 + (v262 & (v258 ^ v254) ^ v254) + ((v262 / 2048 | 0x200000 * v262) ^ (v262 / 64 | 0x4000000 * v262) ^ (v262 / 0x2000000 | 128 * v262)); // 0x405441
    uint32_t v266 = v265 + v251; // 0x40544f
    uint32_t v267 = v265 + ((v263 | v259) & v255 | v263 & v259) + ((v263 / 0x2000 | 0x80000 * v263) ^ (v263 / 4 | 0x40000000 * v263) ^ (v263 / 0x400000 | 1024 * v263)); // 0x405473
    uint32_t v268 = ((v208 / 128 | 0x2000000 * v208) ^ v208 / 8 ^ (v208 / 0x40000 | 0x4000 * v208)) + v204 + v240 + ((v260 / 0x20000 | 0x8000 * v260) ^ v260 / 1024 ^ (v260 / 0x80000 | 0x2000 * v260)); // 0x4054be
    int32_t v269 = v268 + 0x78a5636f + v254 + (v266 & (v262 ^ v258) ^ v258) + ((v266 / 2048 | 0x200000 * v266) ^ (v266 / 64 | 0x4000000 * v266) ^ (v266 / 0x2000000 | 128 * v266)); // 0x4054fa
    uint32_t v270 = v269 + v255; // 0x405508
    uint32_t v271 = v269 + ((v267 | v263) & v259 | v267 & v263) + ((v267 / 0x2000 | 0x80000 * v267) ^ (v267 / 4 | 0x40000000 * v267) ^ (v267 / 0x400000 | 1024 * v267)); // 0x40552d
    uint32_t v272 = ((v212 / 128 | 0x2000000 * v212) ^ v212 / 8 ^ (v212 / 0x40000 | 0x4000 * v212)) + v208 + v244 + ((v264 / 0x20000 | 0x8000 * v264) ^ v264 / 1024 ^ (v264 / 0x80000 | 0x2000 * v264)); // 0x405578
    int32_t v273 = v272 - 0x7b3787ec + v258 + (v270 & (v266 ^ v262) ^ v262) + ((v270 / 2048 | 0x200000 * v270) ^ (v270 / 64 | 0x4000000 * v270) ^ (v270 / 0x2000000 | 128 * v270)); // 0x4055ae
    uint32_t v274 = v273 + v259; // 0x4055b8
    uint32_t v275 = v273 + ((v271 | v267) & v263 | v271 & v267) + ((v271 / 0x2000 | 0x80000 * v271) ^ (v271 / 4 | 0x40000000 * v271) ^ (v271 / 0x400000 | 1024 * v271)); // 0x4055f0
    uint32_t v276 = ((v216 / 128 | 0x2000000 * v216) ^ v216 / 8 ^ (v216 / 0x40000 | 0x4000 * v216)) + v212 + v248 + ((v268 / 0x20000 | 0x8000 * v268) ^ v268 / 1024 ^ (v268 / 0x80000 | 0x2000 * v268)); // 0x405632
    int32_t v277 = v276 - 0x7338fdf8 + v262 + (v274 & (v270 ^ v266) ^ v266) + ((v274 / 2048 | 0x200000 * v274) ^ (v274 / 64 | 0x4000000 * v274) ^ (v274 / 0x2000000 | 128 * v274)); // 0x405667
    uint32_t v278 = v277 + v263; // 0x40566d
    uint32_t v279 = v277 + ((v275 | v271) & v267 | v275 & v271) + ((v275 / 0x2000 | 0x80000 * v275) ^ (v275 / 4 | 0x40000000 * v275) ^ (v275 / 0x400000 | 1024 * v275)); // 0x4056a0
    uint32_t v280 = ((v220 / 128 | 0x2000000 * v220) ^ v220 / 8 ^ (v220 / 0x40000 | 0x4000 * v220)) + v216 + v252 + ((v272 / 0x20000 | 0x8000 * v272) ^ v272 / 1024 ^ (v272 / 0x80000 | 0x2000 * v272)); // 0x4056dc
    int32_t v281 = v280 - 0x6f410006 + v266 + (v278 & (v274 ^ v270) ^ v270) + ((v278 / 2048 | 0x200000 * v278) ^ (v278 / 64 | 0x4000000 * v278) ^ (v278 / 0x2000000 | 128 * v278)); // 0x40570a
    uint32_t v282 = v281 + v267; // 0x405715
    uint32_t v283 = v281 + ((v279 | v275) & v271 | v279 & v275) + ((v279 / 0x2000 | 0x80000 * v279) ^ (v279 / 4 | 0x40000000 * v279) ^ (v279 / 0x400000 | 1024 * v279)); // 0x405738
    uint32_t v284 = ((v224 / 128 | 0x2000000 * v224) ^ v224 / 8 ^ (v224 / 0x40000 | 0x4000 * v224)) + v220 + v256 + ((v276 / 0x20000 | 0x8000 * v276) ^ v276 / 1024 ^ (v276 / 0x80000 | 0x2000 * v276)); // 0x405771
    int32_t v285 = v284 - 0x5baf9315 + v270 + (v282 & (v278 ^ v274) ^ v274) + ((v282 / 2048 | 0x200000 * v282) ^ (v282 / 64 | 0x4000000 * v282) ^ (v282 / 0x2000000 | 128 * v282)); // 0x4057a9
    uint32_t v286 = v285 + v271; // 0x4057b4
    uint32_t v287 = v285 + ((v283 | v279) & v275 | v283 & v279) + ((v283 / 0x2000 | 0x80000 * v283) ^ (v283 / 4 | 0x40000000 * v283) ^ (v283 / 0x400000 | 1024 * v283)); // 0x4057d4
    int32_t v288 = ((v228 / 128 | 0x2000000 * v228) ^ v228 / 8 ^ (v228 / 0x40000 | 0x4000 * v228)) + v224 + v260 + ((v280 / 0x20000 | 0x8000 * v280) ^ v280 / 1024 ^ (v280 / 0x80000 | 0x2000 * v280)); // 0x40580a
    int32_t v289 = v288 - 0x41065c09 + v274 + (v286 & (v282 ^ v278) ^ v278) + ((v286 / 2048 | 0x200000 * v286) ^ (v286 / 64 | 0x4000000 * v286) ^ (v286 / 0x2000000 | 128 * v286)); // 0x40583f
    uint32_t v290 = v289 + v275; // 0x40584a
    uint32_t v291 = v289 + ((v287 | v283) & v279 | v287 & v283) + ((v287 / 0x2000 | 0x80000 * v287) ^ (v287 / 4 | 0x40000000 * v287) ^ (v287 / 0x400000 | 1024 * v287)); // 0x405865
    int32_t v292 = ((v232 / 128 | 0x2000000 * v232) ^ v232 / 8 ^ (v232 / 0x40000 | 0x4000 * v232)) + v228 + v264 + ((v284 / 0x20000 | 0x8000 * v284) ^ v284 / 1024 ^ (v284 / 0x80000 | 0x2000 * v284)); // 0x405895
    v12 += v291;
    v10 += v283;
    v11 += v287;
    int32_t v293 = v290 + v47; // 0x4058d0
    int32_t v294 = v286 + v48; // 0x4058de
    int32_t v295 = v292 - 0x398e870e + v278 + (v290 & (v286 ^ v282) ^ v282) + ((v290 / 2048 | 0x200000 * v290) ^ (v290 / 64 | 0x4000000 * v290) ^ (v290 / 0x2000000 | 128 * v290)); // 0x4058ef
    int32_t v296 = v279 + v46 + v295; // 0x4058fc
    v14 = ((v291 | v287) & v283 | v291 & v287) + v14 + v295 + ((v291 / 0x2000 | 0x80000 * v291) ^ (v291 / 4 | 0x40000000 * v291) ^ (v291 / 0x400000 | 1024 * v291));
    *(int32_t *)v5 = v14;
    *(int32_t *)(v5 + 4) = v12;
    int64_t result2 = v12; // 0x405934
    *(int32_t *)(v5 + 8) = v11;
    *(int32_t *)(v5 + 12) = v10;
    *(int32_t *)(v5 + 20) = v293;
    *(int32_t *)(v5 + 16) = v296;
    *(int32_t *)(v5 + 24) = v294;
    v9 += v282;
    *(int32_t *)(v5 + 28) = v9;
    while (v8 < v2) {
        // 0x403298
        v15 = result2;
        v17 = v292;
        v19 = v288;
        v21 = v284;
        v23 = v280;
        v25 = v276;
        v27 = v272;
        v29 = v268;
        v31 = v264;
        v33 = v260;
        v35 = v256;
        v37 = v252;
        v39 = v248;
        v41 = v244;
        v43 = v236;
        v45 = v240;
        v46 = v296;
        v47 = v293;
        v48 = v294;
        v49 = v14;
        v50 = 0;
        v51 = llvm_bswap_i32(*(int32_t *)(v50 + v8));
        *(int32_t *)((int64_t)&v5 + 8 + v50) = v51;
        v52 = v50 + 4;
        while (v50 != 60) {
            // 0x4032a0
            v50 = v52;
            v51 = llvm_bswap_i32(*(int32_t *)(v50 + v8));
            *(int32_t *)((int64_t)&v5 + 8 + v50) = v51;
            v52 = v50 + 4;
        }
        // 0x4032b3
        v8 += 64;
        v54 = v9 + 0x428a2f98 + ((v47 ^ v48) & v46 ^ v48) + ((v46 / 2048 | 0x200000 * v46) ^ (v46 / 64 | 0x4000000 * v46) ^ (v46 / 0x2000000 | 128 * v46)) + v232;
        v55 = (int32_t)v49;
        v56 = v54 + v10;
        v57 = v54 + ((v55 / 0x2000 | 0x80000 * v55) ^ (v55 / 4 | 0x40000000 * v55) ^ (v55 / 0x400000 | 1024 * v55)) + (int32_t)((v15 | v49) & (int64_t)v11 | v15 & v49);
        v58 = v48 + 0x71374491 + v43 + (v56 & (v46 ^ v47) ^ v47) + ((v56 / 2048 | 0x200000 * v56) ^ (v56 / 64 | 0x4000000 * v56) ^ (v56 / 0x2000000 | 128 * v56));
        v59 = v58 + v11;
        v60 = v15;
        v61 = ((v57 | v55) & v60 | v57 & v55) + v58 + ((v57 / 0x2000 | 0x80000 * v57) ^ (v57 / 4 | 0x40000000 * v57) ^ (v57 / 0x400000 | 1024 * v57));
        v62 = v47 - 0x4a3f0431 + v45 + (v59 & (v56 ^ v46) ^ v46) + ((v59 / 2048 | 0x200000 * v59) ^ (v59 / 64 | 0x4000000 * v59) ^ (v59 / 0x2000000 | 128 * v59));
        v63 = v62 + v60;
        v64 = ((v61 | v57) & v55 | v61 & v57) + v62 + ((v61 / 0x2000 | 0x80000 * v61) ^ (v61 / 4 | 0x40000000 * v61) ^ (v61 / 0x400000 | 1024 * v61));
        v65 = v46 - 0x164a245b + v41 + (v63 & (v59 ^ v56) ^ v56) + ((v63 / 2048 | 0x200000 * v63) ^ (v63 / 64 | 0x4000000 * v63) ^ (v63 / 0x2000000 | 128 * v63));
        v66 = v65 + v55;
        v67 = ((v64 | v61) & v57 | v64 & v61) + v65 + ((v64 / 0x2000 | 0x80000 * v64) ^ (v64 / 4 | 0x40000000 * v64) ^ (v64 / 0x400000 | 1024 * v64));
        v68 = v56 + 0x3956c25b + v39 + (v66 & (v63 ^ v59) ^ v59) + ((v66 / 2048 | 0x200000 * v66) ^ (v66 / 64 | 0x4000000 * v66) ^ (v66 / 0x2000000 | 128 * v66));
        v69 = v68 + v57;
        v70 = ((v67 | v64) & v61 | v67 & v64) + v68 + ((v67 / 0x2000 | 0x80000 * v67) ^ (v67 / 4 | 0x40000000 * v67) ^ (v67 / 0x400000 | 1024 * v67));
        v71 = v37 + 0x59f111f1 + v59 + (v69 & (v66 ^ v63) ^ v63) + ((v69 / 2048 | 0x200000 * v69) ^ (v69 / 64 | 0x4000000 * v69) ^ (v69 / 0x2000000 | 128 * v69));
        v72 = v71 + v61;
        v73 = ((v70 | v67) & v64 | v70 & v67) + v71 + ((v70 / 0x2000 | 0x80000 * v70) ^ (v70 / 4 | 0x40000000 * v70) ^ (v70 / 0x400000 | 1024 * v70));
        v74 = v35 - 0x6dc07d5c + v63 + (v72 & (v69 ^ v66) ^ v66) + ((v72 / 2048 | 0x200000 * v72) ^ (v72 / 64 | 0x4000000 * v72) ^ (v72 / 0x2000000 | 128 * v72));
        v75 = v74 + v64;
        v76 = ((v73 | v70) & v67 | v73 & v70) + v74 + ((v73 / 0x2000 | 0x80000 * v73) ^ (v73 / 4 | 0x40000000 * v73) ^ (v73 / 0x400000 | 1024 * v73));
        v77 = v33 - 0x54e3a12b + v66 + (v75 & (v72 ^ v69) ^ v69) + ((v75 / 2048 | 0x200000 * v75) ^ (v75 / 64 | 0x4000000 * v75) ^ (v75 / 0x2000000 | 128 * v75));
        v78 = v77 + v67;
        v79 = ((v76 | v73) & v70 | v76 & v73) + v77 + ((v76 / 0x2000 | 0x80000 * v76) ^ (v76 / 4 | 0x40000000 * v76) ^ (v76 / 0x400000 | 1024 * v76));
        v80 = v31 - 0x27f85568 + v69 + (v78 & (v75 ^ v72) ^ v72) + ((v78 / 2048 | 0x200000 * v78) ^ (v78 / 64 | 0x4000000 * v78) ^ (v78 / 0x2000000 | 128 * v78));
        v81 = v80 + v70;
        v82 = ((v79 | v76) & v73 | v79 & v76) + v80 + ((v79 / 0x2000 | 0x80000 * v79) ^ (v79 / 4 | 0x40000000 * v79) ^ (v79 / 0x400000 | 1024 * v79));
        v83 = v29 + 0x12835b01 + v72 + (v81 & (v78 ^ v75) ^ v75) + ((v81 / 2048 | 0x200000 * v81) ^ (v81 / 64 | 0x4000000 * v81) ^ (v81 / 0x2000000 | 128 * v81));
        v84 = v83 + v73;
        v85 = ((v82 | v79) & v76 | v82 & v79) + v83 + ((v82 / 0x2000 | 0x80000 * v82) ^ (v82 / 4 | 0x40000000 * v82) ^ (v82 / 0x400000 | 1024 * v82));
        v86 = v27 + 0x243185be + v75 + (v84 & (v81 ^ v78) ^ v78) + ((v84 / 2048 | 0x200000 * v84) ^ (v84 / 64 | 0x4000000 * v84) ^ (v84 / 0x2000000 | 128 * v84));
        v87 = v86 + v76;
        v88 = ((v85 | v82) & v79 | v85 & v82) + v86 + ((v85 / 0x2000 | 0x80000 * v85) ^ (v85 / 4 | 0x40000000 * v85) ^ (v85 / 0x400000 | 1024 * v85));
        v89 = v25 + 0x550c7dc3 + v78 + (v87 & (v84 ^ v81) ^ v81) + ((v87 / 2048 | 0x200000 * v87) ^ (v87 / 64 | 0x4000000 * v87) ^ (v87 / 0x2000000 | 128 * v87));
        v90 = v89 + v79;
        v91 = ((v88 | v85) & v82 | v88 & v85) + v89 + ((v88 / 0x2000 | 0x80000 * v88) ^ (v88 / 4 | 0x40000000 * v88) ^ (v88 / 0x400000 | 1024 * v88));
        v92 = v23 + 0x72be5d74 + v81 + (v90 & (v87 ^ v84) ^ v84) + ((v90 / 2048 | 0x200000 * v90) ^ (v90 / 64 | 0x4000000 * v90) ^ (v90 / 0x2000000 | 128 * v90));
        v93 = v92 + v82;
        v94 = ((v91 | v88) & v85 | v91 & v88) + v92 + ((v91 / 0x2000 | 0x80000 * v91) ^ (v91 / 4 | 0x40000000 * v91) ^ (v91 / 0x400000 | 1024 * v91));
        v95 = v21 - 0x7f214e02 + v84 + (v93 & (v90 ^ v87) ^ v87) + ((v93 / 2048 | 0x200000 * v93) ^ (v93 / 64 | 0x4000000 * v93) ^ (v93 / 0x2000000 | 128 * v93));
        v96 = v95 + v85;
        v97 = ((v94 | v91) & v88 | v94 & v91) + v95 + ((v94 / 0x2000 | 0x80000 * v94) ^ (v94 / 4 | 0x40000000 * v94) ^ (v94 / 0x400000 | 1024 * v94));
        v98 = v19 - 0x6423f959 + v87 + (v96 & (v93 ^ v90) ^ v90) + ((v96 / 2048 | 0x200000 * v96) ^ (v96 / 64 | 0x4000000 * v96) ^ (v96 / 0x2000000 | 128 * v96));
        v99 = v98 + v88;
        v100 = ((v97 | v94) & v91 | v97 & v94) + v98 + ((v97 / 0x2000 | 0x80000 * v97) ^ (v97 / 4 | 0x40000000 * v97) ^ (v97 / 0x400000 | 1024 * v97));
        v101 = v17 - 0x3e640e8c + v90 + (v99 & (v96 ^ v93) ^ v93) + ((v99 / 2048 | 0x200000 * v99) ^ (v99 / 64 | 0x4000000 * v99) ^ (v99 / 0x2000000 | 128 * v99));
        v102 = v101 + v91;
        v103 = ((v100 | v97) & v94 | v100 & v97) + v101 + ((v100 / 0x2000 | 0x80000 * v100) ^ (v100 / 4 | 0x40000000 * v100) ^ (v100 / 0x400000 | 1024 * v100));
        v104 = ((v43 / 128 | 0x2000000 * v43) ^ v43 / 8 ^ (v43 / 0x40000 | 0x4000 * v43)) + v232 + v29 + ((v19 / 0x20000 | 0x8000 * v19) ^ v19 / 1024 ^ (v19 / 0x80000 | 0x2000 * v19));
        v105 = v104 - 0x1b64963f + v93 + (v102 & (v99 ^ v96) ^ v96) + ((v102 / 2048 | 0x200000 * v102) ^ (v102 / 64 | 0x4000000 * v102) ^ (v102 / 0x2000000 | 128 * v102));
        v106 = v105 + v94;
        v107 = v105 + ((v103 | v100) & v97 | v103 & v100) + ((v103 / 0x2000 | 0x80000 * v103) ^ (v103 / 4 | 0x40000000 * v103) ^ (v103 / 0x400000 | 1024 * v103));
        v108 = ((v45 / 128 | 0x2000000 * v45) ^ v45 / 8 ^ (v45 / 0x40000 | 0x4000 * v45)) + v43 + v27 + ((v17 / 0x20000 | 0x8000 * v17) ^ v17 / 1024 ^ (v17 / 0x80000 | 0x2000 * v17));
        v109 = v108 - 0x1041b87a + v96 + (v106 & (v102 ^ v99) ^ v99) + ((v106 / 2048 | 0x200000 * v106) ^ (v106 / 64 | 0x4000000 * v106) ^ (v106 / 0x2000000 | 128 * v106));
        v110 = v109 + v97;
        v111 = v109 + ((v107 | v103) & v100 | v107 & v103) + ((v107 / 0x2000 | 0x80000 * v107) ^ (v107 / 4 | 0x40000000 * v107) ^ (v107 / 0x400000 | 1024 * v107));
        v112 = ((v41 / 0x40000 | 0x4000 * v41) ^ v41 / 8 ^ (v41 / 128 | 0x2000000 * v41)) + v45 + v25 + ((v104 / 0x20000 | 0x8000 * v104) ^ v104 / 1024 ^ (v104 / 0x80000 | 0x2000 * v104));
        v113 = v112 + 0xfc19dc6 + v99 + (v110 & (v106 ^ v102) ^ v102) + ((v110 / 2048 | 0x200000 * v110) ^ (v110 / 64 | 0x4000000 * v110) ^ (v110 / 0x2000000 | 128 * v110));
        v114 = v113 + v100;
        v115 = v113 + ((v111 | v107) & v103 | v111 & v107) + ((v111 / 0x2000 | 0x80000 * v111) ^ (v111 / 4 | 0x40000000 * v111) ^ (v111 / 0x400000 | 1024 * v111));
        v116 = ((v39 / 0x40000 | 0x4000 * v39) ^ v39 / 8 ^ (v39 / 128 | 0x2000000 * v39)) + v41 + v23 + ((v108 / 0x20000 | 0x8000 * v108) ^ v108 / 1024 ^ (v108 / 0x80000 | 0x2000 * v108));
        v117 = v116 + 0x240ca1cc + v102 + (v114 & (v110 ^ v106) ^ v106) + ((v114 / 2048 | 0x200000 * v114) ^ (v114 / 64 | 0x4000000 * v114) ^ (v114 / 0x2000000 | 128 * v114));
        v118 = v117 + v103;
        v119 = v117 + ((v115 | v111) & v107 | v115 & v111) + ((v115 / 0x2000 | 0x80000 * v115) ^ (v115 / 4 | 0x40000000 * v115) ^ (v115 / 0x400000 | 1024 * v115));
        v120 = ((v37 / 0x40000 | 0x4000 * v37) ^ v37 / 8 ^ (v37 / 128 | 0x2000000 * v37)) + v39 + v21 + ((v112 / 0x20000 | 0x8000 * v112) ^ v112 / 1024 ^ (v112 / 0x80000 | 0x2000 * v112));
        v121 = v120 + 0x2de92c6f + v106 + (v118 & (v114 ^ v110) ^ v110) + ((v118 / 2048 | 0x200000 * v118) ^ (v118 / 64 | 0x4000000 * v118) ^ (v118 / 0x2000000 | 128 * v118));
        v122 = v121 + v107;
        v123 = v121 + ((v119 | v115) & v111 | v119 & v115) + ((v119 / 0x2000 | 0x80000 * v119) ^ (v119 / 4 | 0x40000000 * v119) ^ (v119 / 0x400000 | 1024 * v119));
        v124 = ((v35 / 0x40000 | 0x4000 * v35) ^ v35 / 8 ^ (v35 / 128 | 0x2000000 * v35)) + v37 + v19 + ((v116 / 0x20000 | 0x8000 * v116) ^ v116 / 1024 ^ (v116 / 0x80000 | 0x2000 * v116));
        v125 = v124 + 0x4a7484aa + v110 + (v122 & (v118 ^ v114) ^ v114) + ((v122 / 2048 | 0x200000 * v122) ^ (v122 / 64 | 0x4000000 * v122) ^ (v122 / 0x2000000 | 128 * v122));
        v126 = v125 + v111;
        v127 = v125 + ((v123 | v119) & v115 | v123 & v119) + ((v123 / 0x2000 | 0x80000 * v123) ^ (v123 / 4 | 0x40000000 * v123) ^ (v123 / 0x400000 | 1024 * v123));
        v128 = ((v33 / 0x40000 | 0x4000 * v33) ^ v33 / 8 ^ (v33 / 128 | 0x2000000 * v33)) + v35 + v17 + ((v120 / 0x20000 | 0x8000 * v120) ^ v120 / 1024 ^ (v120 / 0x80000 | 0x2000 * v120));
        v129 = v128 + 0x5cb0a9dc + v114 + (v126 & (v122 ^ v118) ^ v118) + ((v126 / 2048 | 0x200000 * v126) ^ (v126 / 64 | 0x4000000 * v126) ^ (v126 / 0x2000000 | 128 * v126));
        v130 = v129 + v115;
        v131 = v129 + ((v127 | v123) & v119 | v127 & v123) + ((v127 / 0x2000 | 0x80000 * v127) ^ (v127 / 4 | 0x40000000 * v127) ^ (v127 / 0x400000 | 1024 * v127));
        v132 = ((v31 / 128 | 0x2000000 * v31) ^ v31 / 8 ^ (v31 / 0x40000 | 0x4000 * v31)) + v33 + v104 + ((v124 / 0x20000 | 0x8000 * v124) ^ v124 / 1024 ^ (v124 / 0x80000 | 0x2000 * v124));
        v133 = v132 + 0x76f988da + v118 + (v130 & (v126 ^ v122) ^ v122) + ((v130 / 2048 | 0x200000 * v130) ^ (v130 / 64 | 0x4000000 * v130) ^ (v130 / 0x2000000 | 128 * v130));
        v134 = v133 + v119;
        v135 = v133 + ((v131 | v127) & v123 | v131 & v127) + ((v131 / 0x2000 | 0x80000 * v131) ^ (v131 / 4 | 0x40000000 * v131) ^ (v131 / 0x400000 | 1024 * v131));
        v136 = ((v29 / 128 | 0x2000000 * v29) ^ v29 / 8 ^ (v29 / 0x40000 | 0x4000 * v29)) + v31 + v108 + ((v128 / 0x20000 | 0x8000 * v128) ^ v128 / 1024 ^ (v128 / 0x80000 | 0x2000 * v128));
        v137 = v136 - 0x67c1aeae + v122 + (v134 & (v130 ^ v126) ^ v126) + ((v134 / 2048 | 0x200000 * v134) ^ (v134 / 64 | 0x4000000 * v134) ^ (v134 / 0x2000000 | 128 * v134));
        v138 = v137 + v123;
        v139 = v137 + ((v135 | v131) & v127 | v135 & v131) + ((v135 / 0x2000 | 0x80000 * v135) ^ (v135 / 4 | 0x40000000 * v135) ^ (v135 / 0x400000 | 1024 * v135));
        v140 = ((v27 / 128 | 0x2000000 * v27) ^ v27 / 8 ^ (v27 / 0x40000 | 0x4000 * v27)) + v29 + v112 + ((v132 / 0x20000 | 0x8000 * v132) ^ v132 / 1024 ^ (v132 / 0x80000 | 0x2000 * v132));
        v141 = v140 - 0x57ce3993 + v126 + (v138 & (v134 ^ v130) ^ v130) + ((v138 / 2048 | 0x200000 * v138) ^ (v138 / 64 | 0x4000000 * v138) ^ (v138 / 0x2000000 | 128 * v138));
        v142 = v141 + v127;
        v143 = v141 + ((v139 | v135) & v131 | v139 & v135) + ((v139 / 0x2000 | 0x80000 * v139) ^ (v139 / 4 | 0x40000000 * v139) ^ (v139 / 0x400000 | 1024 * v139));
        v144 = ((v25 / 128 | 0x2000000 * v25) ^ v25 / 8 ^ (v25 / 0x40000 | 0x4000 * v25)) + v27 + v116 + ((v136 / 0x20000 | 0x8000 * v136) ^ v136 / 1024 ^ (v136 / 0x80000 | 0x2000 * v136));
        v145 = v144 - 0x4ffcd838 + v130 + (v142 & (v138 ^ v134) ^ v134) + ((v142 / 2048 | 0x200000 * v142) ^ (v142 / 64 | 0x4000000 * v142) ^ (v142 / 0x2000000 | 128 * v142));
        v146 = v145 + v131;
        v147 = v145 + ((v143 | v139) & v135 | v143 & v139) + ((v143 / 0x2000 | 0x80000 * v143) ^ (v143 / 4 | 0x40000000 * v143) ^ (v143 / 0x400000 | 1024 * v143));
        v148 = ((v23 / 128 | 0x2000000 * v23) ^ v23 / 8 ^ (v23 / 0x40000 | 0x4000 * v23)) + v25 + v120 + ((v140 / 0x20000 | 0x8000 * v140) ^ v140 / 1024 ^ (v140 / 0x80000 | 0x2000 * v140));
        v149 = v148 - 0x40a68039 + v134 + (v146 & (v142 ^ v138) ^ v138) + ((v146 / 2048 | 0x200000 * v146) ^ (v146 / 64 | 0x4000000 * v146) ^ (v146 / 0x2000000 | 128 * v146));
        v150 = v149 + v135;
        v151 = v149 + ((v147 | v143) & v139 | v147 & v143) + ((v147 / 0x2000 | 0x80000 * v147) ^ (v147 / 4 | 0x40000000 * v147) ^ (v147 / 0x400000 | 1024 * v147));
        v152 = ((v21 / 128 | 0x2000000 * v21) ^ v21 / 8 ^ (v21 / 0x40000 | 0x4000 * v21)) + v23 + v124 + ((v144 / 0x20000 | 0x8000 * v144) ^ v144 / 1024 ^ (v144 / 0x80000 | 0x2000 * v144));
        v153 = v152 - 0x391ff40d + v138 + (v150 & (v146 ^ v142) ^ v142) + ((v150 / 2048 | 0x200000 * v150) ^ (v150 / 64 | 0x4000000 * v150) ^ (v150 / 0x2000000 | 128 * v150));
        v154 = v153 + v139;
        v155 = v153 + ((v151 | v147) & v143 | v151 & v147) + ((v151 / 0x2000 | 0x80000 * v151) ^ (v151 / 4 | 0x40000000 * v151) ^ (v151 / 0x400000 | 1024 * v151));
        v156 = ((v19 / 128 | 0x2000000 * v19) ^ v19 / 8 ^ (v19 / 0x40000 | 0x4000 * v19)) + v21 + v128 + ((v148 / 0x20000 | 0x8000 * v148) ^ v148 / 1024 ^ (v148 / 0x80000 | 0x2000 * v148));
        v157 = v156 - 0x2a586eb9 + v142 + (v154 & (v150 ^ v146) ^ v146) + ((v154 / 2048 | 0x200000 * v154) ^ (v154 / 64 | 0x4000000 * v154) ^ (v154 / 0x2000000 | 128 * v154));
        v158 = v157 + v143;
        v159 = v157 + ((v155 | v151) & v147 | v155 & v151) + ((v155 / 0x2000 | 0x80000 * v155) ^ (v155 / 4 | 0x40000000 * v155) ^ (v155 / 0x400000 | 1024 * v155));
        v160 = ((v17 / 128 | 0x2000000 * v17) ^ v17 / 8 ^ (v17 / 0x40000 | 0x4000 * v17)) + v19 + v132 + ((v152 / 0x20000 | 0x8000 * v152) ^ v152 / 1024 ^ (v152 / 0x80000 | 0x2000 * v152));
        v161 = v160 + 0x6ca6351 + v146 + (v158 & (v154 ^ v150) ^ v150) + ((v158 / 2048 | 0x200000 * v158) ^ (v158 / 64 | 0x4000000 * v158) ^ (v158 / 0x2000000 | 128 * v158));
        v162 = v161 + v147;
        v163 = v161 + ((v159 | v155) & v151 | v159 & v155) + ((v159 / 0x2000 | 0x80000 * v159) ^ (v159 / 4 | 0x40000000 * v159) ^ (v159 / 0x400000 | 1024 * v159));
        v164 = ((v104 / 128 | 0x2000000 * v104) ^ v104 / 8 ^ (v104 / 0x40000 | 0x4000 * v104)) + v17 + v136 + ((v156 / 0x20000 | 0x8000 * v156) ^ v156 / 1024 ^ (v156 / 0x80000 | 0x2000 * v156));
        v165 = v164 + 0x14292967 + v150 + (v162 & (v158 ^ v154) ^ v154) + ((v162 / 2048 | 0x200000 * v162) ^ (v162 / 64 | 0x4000000 * v162) ^ (v162 / 0x2000000 | 128 * v162));
        v166 = v165 + v151;
        v167 = v165 + ((v163 | v159) & v155 | v163 & v159) + ((v163 / 0x2000 | 0x80000 * v163) ^ (v163 / 4 | 0x40000000 * v163) ^ (v163 / 0x400000 | 1024 * v163));
        v168 = ((v108 / 128 | 0x2000000 * v108) ^ v108 / 8 ^ (v108 / 0x40000 | 0x4000 * v108)) + v104 + v140 + ((v160 / 0x20000 | 0x8000 * v160) ^ v160 / 1024 ^ (v160 / 0x80000 | 0x2000 * v160));
        v169 = v168 + 0x27b70a85 + v154 + (v166 & (v162 ^ v158) ^ v158) + ((v166 / 2048 | 0x200000 * v166) ^ (v166 / 64 | 0x4000000 * v166) ^ (v166 / 0x2000000 | 128 * v166));
        v170 = v169 + v155;
        v171 = v169 + ((v167 | v163) & v159 | v167 & v163) + ((v167 / 0x2000 | 0x80000 * v167) ^ (v167 / 4 | 0x40000000 * v167) ^ (v167 / 0x400000 | 1024 * v167));
        v172 = ((v112 / 128 | 0x2000000 * v112) ^ v112 / 8 ^ (v112 / 0x40000 | 0x4000 * v112)) + v108 + v144 + ((v164 / 0x20000 | 0x8000 * v164) ^ v164 / 1024 ^ (v164 / 0x80000 | 0x2000 * v164));
        v173 = v172 + 0x2e1b2138 + v158 + (v170 & (v166 ^ v162) ^ v162) + ((v170 / 2048 | 0x200000 * v170) ^ (v170 / 64 | 0x4000000 * v170) ^ (v170 / 0x2000000 | 128 * v170));
        v174 = v173 + v159;
        v175 = v173 + ((v171 | v167) & v163 | v171 & v167) + ((v171 / 0x2000 | 0x80000 * v171) ^ (v171 / 4 | 0x40000000 * v171) ^ (v171 / 0x400000 | 1024 * v171));
        v176 = ((v116 / 128 | 0x2000000 * v116) ^ v116 / 8 ^ (v116 / 0x40000 | 0x4000 * v116)) + v112 + v148 + ((v168 / 0x20000 | 0x8000 * v168) ^ v168 / 1024 ^ (v168 / 0x80000 | 0x2000 * v168));
        v177 = v176 + 0x4d2c6dfc + v162 + (v174 & (v170 ^ v166) ^ v166) + ((v174 / 2048 | 0x200000 * v174) ^ (v174 / 64 | 0x4000000 * v174) ^ (v174 / 0x2000000 | 128 * v174));
        v178 = v177 + v163;
        v179 = v177 + ((v175 | v171) & v167 | v175 & v171) + ((v175 / 0x2000 | 0x80000 * v175) ^ (v175 / 4 | 0x40000000 * v175) ^ (v175 / 0x400000 | 1024 * v175));
        v180 = ((v120 / 128 | 0x2000000 * v120) ^ v120 / 8 ^ (v120 / 0x40000 | 0x4000 * v120)) + v116 + v152 + ((v172 / 0x20000 | 0x8000 * v172) ^ v172 / 1024 ^ (v172 / 0x80000 | 0x2000 * v172));
        v181 = v180 + 0x53380d13 + v166 + (v178 & (v174 ^ v170) ^ v170) + ((v178 / 2048 | 0x200000 * v178) ^ (v178 / 64 | 0x4000000 * v178) ^ (v178 / 0x2000000 | 128 * v178));
        v182 = v181 + v167;
        v183 = v181 + ((v179 | v175) & v171 | v179 & v175) + ((v179 / 0x2000 | 0x80000 * v179) ^ (v179 / 4 | 0x40000000 * v179) ^ (v179 / 0x400000 | 1024 * v179));
        v184 = ((v124 / 128 | 0x2000000 * v124) ^ v124 / 8 ^ (v124 / 0x40000 | 0x4000 * v124)) + v120 + v156 + ((v176 / 0x20000 | 0x8000 * v176) ^ v176 / 1024 ^ (v176 / 0x80000 | 0x2000 * v176));
        v185 = v184 + 0x650a7354 + v170 + (v182 & (v178 ^ v174) ^ v174) + ((v182 / 2048 | 0x200000 * v182) ^ (v182 / 64 | 0x4000000 * v182) ^ (v182 / 0x2000000 | 128 * v182));
        v186 = v185 + v171;
        v187 = v185 + ((v183 | v179) & v175 | v183 & v179) + ((v183 / 0x2000 | 0x80000 * v183) ^ (v183 / 4 | 0x40000000 * v183) ^ (v183 / 0x400000 | 1024 * v183));
        v188 = ((v128 / 128 | 0x2000000 * v128) ^ v128 / 8 ^ (v128 / 0x40000 | 0x4000 * v128)) + v124 + v160 + ((v180 / 0x20000 | 0x8000 * v180) ^ v180 / 1024 ^ (v180 / 0x80000 | 0x2000 * v180));
        v189 = v188 + 0x766a0abb + v174 + (v186 & (v182 ^ v178) ^ v178) + ((v186 / 2048 | 0x200000 * v186) ^ (v186 / 64 | 0x4000000 * v186) ^ (v186 / 0x2000000 | 128 * v186));
        v190 = v189 + v175;
        v191 = v189 + ((v187 | v183) & v179 | v187 & v183) + ((v187 / 0x2000 | 0x80000 * v187) ^ (v187 / 4 | 0x40000000 * v187) ^ (v187 / 0x400000 | 1024 * v187));
        v192 = ((v132 / 128 | 0x2000000 * v132) ^ v132 / 8 ^ (v132 / 0x40000 | 0x4000 * v132)) + v128 + v164 + ((v184 / 0x20000 | 0x8000 * v184) ^ v184 / 1024 ^ (v184 / 0x80000 | 0x2000 * v184));
        v193 = v192 - 0x7e3d36d2 + v178 + (v190 & (v186 ^ v182) ^ v182) + ((v190 / 2048 | 0x200000 * v190) ^ (v190 / 64 | 0x4000000 * v190) ^ (v190 / 0x2000000 | 128 * v190));
        v194 = v193 + v179;
        v195 = v193 + ((v191 | v187) & v183 | v191 & v187) + ((v191 / 0x2000 | 0x80000 * v191) ^ (v191 / 4 | 0x40000000 * v191) ^ (v191 / 0x400000 | 1024 * v191));
        v196 = ((v136 / 128 | 0x2000000 * v136) ^ v136 / 8 ^ (v136 / 0x40000 | 0x4000 * v136)) + v132 + v168 + ((v188 / 0x20000 | 0x8000 * v188) ^ v188 / 1024 ^ (v188 / 0x80000 | 0x2000 * v188));
        v197 = v196 - 0x6d8dd37b + v182 + (v194 & (v190 ^ v186) ^ v186) + ((v194 / 2048 | 0x200000 * v194) ^ (v194 / 64 | 0x4000000 * v194) ^ (v194 / 0x2000000 | 128 * v194));
        v198 = v197 + v183;
        v199 = v197 + ((v195 | v191) & v187 | v195 & v191) + ((v195 / 0x2000 | 0x80000 * v195) ^ (v195 / 4 | 0x40000000 * v195) ^ (v195 / 0x400000 | 1024 * v195));
        v200 = ((v140 / 128 | 0x2000000 * v140) ^ v140 / 8 ^ (v140 / 0x40000 | 0x4000 * v140)) + v136 + v172 + ((v192 / 0x20000 | 0x8000 * v192) ^ v192 / 1024 ^ (v192 / 0x80000 | 0x2000 * v192));
        v201 = v200 - 0x5d40175f + v186 + (v198 & (v194 ^ v190) ^ v190) + ((v198 / 2048 | 0x200000 * v198) ^ (v198 / 64 | 0x4000000 * v198) ^ (v198 / 0x2000000 | 128 * v198));
        v202 = v201 + v187;
        v203 = v201 + ((v199 | v195) & v191 | v199 & v195) + ((v199 / 0x2000 | 0x80000 * v199) ^ (v199 / 4 | 0x40000000 * v199) ^ (v199 / 0x400000 | 1024 * v199));
        v204 = ((v144 / 128 | 0x2000000 * v144) ^ v144 / 8 ^ (v144 / 0x40000 | 0x4000 * v144)) + v140 + v176 + ((v196 / 0x20000 | 0x8000 * v196) ^ v196 / 1024 ^ (v196 / 0x80000 | 0x2000 * v196));
        v205 = v204 - 0x57e599b5 + v190 + (v202 & (v198 ^ v194) ^ v194) + ((v202 / 2048 | 0x200000 * v202) ^ (v202 / 64 | 0x4000000 * v202) ^ (v202 / 0x2000000 | 128 * v202));
        v206 = v205 + v191;
        v207 = v205 + ((v203 | v199) & v195 | v203 & v199) + ((v203 / 0x2000 | 0x80000 * v203) ^ (v203 / 4 | 0x40000000 * v203) ^ (v203 / 0x400000 | 1024 * v203));
        v208 = ((v148 / 128 | 0x2000000 * v148) ^ v148 / 8 ^ (v148 / 0x40000 | 0x4000 * v148)) + v144 + v180 + ((v200 / 0x20000 | 0x8000 * v200) ^ v200 / 1024 ^ (v200 / 0x80000 | 0x2000 * v200));
        v209 = v208 - 0x3db47490 + v194 + (v206 & (v202 ^ v198) ^ v198) + ((v206 / 2048 | 0x200000 * v206) ^ (v206 / 64 | 0x4000000 * v206) ^ (v206 / 0x2000000 | 128 * v206));
        v210 = v209 + v195;
        v211 = v209 + ((v207 | v203) & v199 | v207 & v203) + ((v207 / 0x2000 | 0x80000 * v207) ^ (v207 / 4 | 0x40000000 * v207) ^ (v207 / 0x400000 | 1024 * v207));
        v212 = ((v152 / 128 | 0x2000000 * v152) ^ v152 / 8 ^ (v152 / 0x40000 | 0x4000 * v152)) + v148 + v184 + ((v204 / 0x20000 | 0x8000 * v204) ^ v204 / 1024 ^ (v204 / 0x80000 | 0x2000 * v204));
        v213 = v212 - 0x3893ae5d + v198 + (v210 & (v206 ^ v202) ^ v202) + ((v210 / 2048 | 0x200000 * v210) ^ (v210 / 64 | 0x4000000 * v210) ^ (v210 / 0x2000000 | 128 * v210));
        v214 = v213 + v199;
        v215 = v213 + ((v211 | v207) & v203 | v211 & v207) + ((v211 / 0x2000 | 0x80000 * v211) ^ (v211 / 4 | 0x40000000 * v211) ^ (v211 / 0x400000 | 1024 * v211));
        v216 = ((v156 / 128 | 0x2000000 * v156) ^ v156 / 8 ^ (v156 / 0x40000 | 0x4000 * v156)) + v152 + v188 + ((v208 / 0x20000 | 0x8000 * v208) ^ v208 / 1024 ^ (v208 / 0x80000 | 0x2000 * v208));
        v217 = v216 - 0x2e6d17e7 + v202 + (v214 & (v210 ^ v206) ^ v206) + ((v214 / 2048 | 0x200000 * v214) ^ (v214 / 64 | 0x4000000 * v214) ^ (v214 / 0x2000000 | 128 * v214));
        v218 = v217 + v203;
        v219 = v217 + ((v215 | v211) & v207 | v215 & v211) + ((v215 / 0x2000 | 0x80000 * v215) ^ (v215 / 4 | 0x40000000 * v215) ^ (v215 / 0x400000 | 1024 * v215));
        v220 = ((v160 / 128 | 0x2000000 * v160) ^ v160 / 8 ^ (v160 / 0x40000 | 0x4000 * v160)) + v156 + v192 + ((v212 / 0x20000 | 0x8000 * v212) ^ v212 / 1024 ^ (v212 / 0x80000 | 0x2000 * v212));
        v221 = v220 - 0x2966f9dc + v206 + (v218 & (v214 ^ v210) ^ v210) + ((v218 / 2048 | 0x200000 * v218) ^ (v218 / 64 | 0x4000000 * v218) ^ (v218 / 0x2000000 | 128 * v218));
        v222 = v221 + v207;
        v223 = v221 + ((v219 | v215) & v211 | v219 & v215) + ((v219 / 0x2000 | 0x80000 * v219) ^ (v219 / 4 | 0x40000000 * v219) ^ (v219 / 0x400000 | 1024 * v219));
        v224 = ((v164 / 128 | 0x2000000 * v164) ^ v164 / 8 ^ (v164 / 0x40000 | 0x4000 * v164)) + v160 + v196 + ((v216 / 0x20000 | 0x8000 * v216) ^ v216 / 1024 ^ (v216 / 0x80000 | 0x2000 * v216));
        v225 = v224 - 0xbf1ca7b + v210 + (v222 & (v218 ^ v214) ^ v214) + ((v222 / 2048 | 0x200000 * v222) ^ (v222 / 64 | 0x4000000 * v222) ^ (v222 / 0x2000000 | 128 * v222));
        v226 = v225 + v211;
        v227 = v225 + ((v223 | v219) & v215 | v223 & v219) + ((v223 / 0x2000 | 0x80000 * v223) ^ (v223 / 4 | 0x40000000 * v223) ^ (v223 / 0x400000 | 1024 * v223));
        v228 = ((v168 / 128 | 0x2000000 * v168) ^ v168 / 8 ^ (v168 / 0x40000 | 0x4000 * v168)) + v164 + v200 + ((v220 / 0x20000 | 0x8000 * v220) ^ v220 / 1024 ^ (v220 / 0x80000 | 0x2000 * v220));
        v229 = v228 + 0x106aa070 + v214 + (v226 & (v222 ^ v218) ^ v218) + ((v226 / 2048 | 0x200000 * v226) ^ (v226 / 64 | 0x4000000 * v226) ^ (v226 / 0x2000000 | 128 * v226));
        v230 = v229 + v215;
        v231 = v229 + ((v227 | v223) & v219 | v227 & v223) + ((v227 / 0x2000 | 0x80000 * v227) ^ (v227 / 4 | 0x40000000 * v227) ^ (v227 / 0x400000 | 1024 * v227));
        v232 = ((v172 / 128 | 0x2000000 * v172) ^ v172 / 8 ^ (v172 / 0x40000 | 0x4000 * v172)) + v168 + v204 + ((v224 / 0x20000 | 0x8000 * v224) ^ v224 / 1024 ^ (v224 / 0x80000 | 0x2000 * v224));
        v233 = v232 + 0x19a4c116 + v218 + (v230 & (v226 ^ v222) ^ v222) + ((v230 / 2048 | 0x200000 * v230) ^ (v230 / 64 | 0x4000000 * v230) ^ (v230 / 0x2000000 | 128 * v230));
        v234 = v233 + v219;
        v235 = v233 + ((v231 | v227) & v223 | v231 & v227) + ((v231 / 0x2000 | 0x80000 * v231) ^ (v231 / 4 | 0x40000000 * v231) ^ (v231 / 0x400000 | 1024 * v231));
        v236 = ((v176 / 128 | 0x2000000 * v176) ^ v176 / 8 ^ (v176 / 0x40000 | 0x4000 * v176)) + v172 + v208 + ((v228 / 0x20000 | 0x8000 * v228) ^ v228 / 1024 ^ (v228 / 0x80000 | 0x2000 * v228));
        v237 = v236 + 0x1e376c08 + v222 + (v234 & (v230 ^ v226) ^ v226) + ((v234 / 2048 | 0x200000 * v234) ^ (v234 / 64 | 0x4000000 * v234) ^ (v234 / 0x2000000 | 128 * v234));
        v238 = v237 + v223;
        v239 = v237 + ((v235 | v231) & v227 | v235 & v231) + ((v235 / 0x2000 | 0x80000 * v235) ^ (v235 / 4 | 0x40000000 * v235) ^ (v235 / 0x400000 | 1024 * v235));
        v240 = ((v180 / 128 | 0x2000000 * v180) ^ v180 / 8 ^ (v180 / 0x40000 | 0x4000 * v180)) + v176 + v212 + ((v232 / 0x20000 | 0x8000 * v232) ^ v232 / 1024 ^ (v232 / 0x80000 | 0x2000 * v232));
        v241 = v240 + 0x2748774c + v226 + (v238 & (v234 ^ v230) ^ v230) + ((v238 / 2048 | 0x200000 * v238) ^ (v238 / 64 | 0x4000000 * v238) ^ (v238 / 0x2000000 | 128 * v238));
        v242 = v241 + v227;
        v243 = v241 + ((v239 | v235) & v231 | v239 & v235) + ((v239 / 0x2000 | 0x80000 * v239) ^ (v239 / 4 | 0x40000000 * v239) ^ (v239 / 0x400000 | 1024 * v239));
        v244 = ((v184 / 128 | 0x2000000 * v184) ^ v184 / 8 ^ (v184 / 0x40000 | 0x4000 * v184)) + v180 + v216 + ((v236 / 0x20000 | 0x8000 * v236) ^ v236 / 1024 ^ (v236 / 0x80000 | 0x2000 * v236));
        v245 = v244 + 0x34b0bcb5 + v230 + (v242 & (v238 ^ v234) ^ v234) + ((v242 / 2048 | 0x200000 * v242) ^ (v242 / 64 | 0x4000000 * v242) ^ (v242 / 0x2000000 | 128 * v242));
        v246 = v245 + v231;
        v247 = v245 + ((v243 | v239) & v235 | v243 & v239) + ((v243 / 0x2000 | 0x80000 * v243) ^ (v243 / 4 | 0x40000000 * v243) ^ (v243 / 0x400000 | 1024 * v243));
        v248 = ((v188 / 128 | 0x2000000 * v188) ^ v188 / 8 ^ (v188 / 0x40000 | 0x4000 * v188)) + v184 + v220 + ((v240 / 0x20000 | 0x8000 * v240) ^ v240 / 1024 ^ (v240 / 0x80000 | 0x2000 * v240));
        v249 = v248 + 0x391c0cb3 + v234 + (v246 & (v242 ^ v238) ^ v238) + ((v246 / 2048 | 0x200000 * v246) ^ (v246 / 64 | 0x4000000 * v246) ^ (v246 / 0x2000000 | 128 * v246));
        v250 = v249 + v235;
        v251 = v249 + ((v247 | v243) & v239 | v247 & v243) + ((v247 / 0x2000 | 0x80000 * v247) ^ (v247 / 4 | 0x40000000 * v247) ^ (v247 / 0x400000 | 1024 * v247));
        v252 = ((v192 / 128 | 0x2000000 * v192) ^ v192 / 8 ^ (v192 / 0x40000 | 0x4000 * v192)) + v188 + v224 + ((v244 / 0x20000 | 0x8000 * v244) ^ v244 / 1024 ^ (v244 / 0x80000 | 0x2000 * v244));
        v253 = v252 + 0x4ed8aa4a + v238 + (v250 & (v246 ^ v242) ^ v242) + ((v250 / 2048 | 0x200000 * v250) ^ (v250 / 64 | 0x4000000 * v250) ^ (v250 / 0x2000000 | 128 * v250));
        v254 = v253 + v239;
        v255 = v253 + ((v251 | v247) & v243 | v251 & v247) + ((v251 / 0x2000 | 0x80000 * v251) ^ (v251 / 4 | 0x40000000 * v251) ^ (v251 / 0x400000 | 1024 * v251));
        v256 = ((v196 / 128 | 0x2000000 * v196) ^ v196 / 8 ^ (v196 / 0x40000 | 0x4000 * v196)) + v192 + v228 + ((v248 / 0x20000 | 0x8000 * v248) ^ v248 / 1024 ^ (v248 / 0x80000 | 0x2000 * v248));
        v257 = v256 + 0x5b9cca4f + v242 + (v254 & (v250 ^ v246) ^ v246) + ((v254 / 2048 | 0x200000 * v254) ^ (v254 / 64 | 0x4000000 * v254) ^ (v254 / 0x2000000 | 128 * v254));
        v258 = v257 + v243;
        v259 = v257 + ((v255 | v251) & v247 | v255 & v251) + ((v255 / 0x2000 | 0x80000 * v255) ^ (v255 / 4 | 0x40000000 * v255) ^ (v255 / 0x400000 | 1024 * v255));
        v260 = ((v200 / 128 | 0x2000000 * v200) ^ v200 / 8 ^ (v200 / 0x40000 | 0x4000 * v200)) + v196 + v232 + ((v252 / 0x20000 | 0x8000 * v252) ^ v252 / 1024 ^ (v252 / 0x80000 | 0x2000 * v252));
        v261 = v260 + 0x682e6ff3 + v246 + (v258 & (v254 ^ v250) ^ v250) + ((v258 / 2048 | 0x200000 * v258) ^ (v258 / 64 | 0x4000000 * v258) ^ (v258 / 0x2000000 | 128 * v258));
        v262 = v261 + v247;
        v263 = v261 + ((v259 | v255) & v251 | v259 & v255) + ((v259 / 0x2000 | 0x80000 * v259) ^ (v259 / 4 | 0x40000000 * v259) ^ (v259 / 0x400000 | 1024 * v259));
        v264 = ((v204 / 128 | 0x2000000 * v204) ^ v204 / 8 ^ (v204 / 0x40000 | 0x4000 * v204)) + v200 + v236 + ((v256 / 0x20000 | 0x8000 * v256) ^ v256 / 1024 ^ (v256 / 0x80000 | 0x2000 * v256));
        v265 = v264 + 0x748f82ee + v250 + (v262 & (v258 ^ v254) ^ v254) + ((v262 / 2048 | 0x200000 * v262) ^ (v262 / 64 | 0x4000000 * v262) ^ (v262 / 0x2000000 | 128 * v262));
        v266 = v265 + v251;
        v267 = v265 + ((v263 | v259) & v255 | v263 & v259) + ((v263 / 0x2000 | 0x80000 * v263) ^ (v263 / 4 | 0x40000000 * v263) ^ (v263 / 0x400000 | 1024 * v263));
        v268 = ((v208 / 128 | 0x2000000 * v208) ^ v208 / 8 ^ (v208 / 0x40000 | 0x4000 * v208)) + v204 + v240 + ((v260 / 0x20000 | 0x8000 * v260) ^ v260 / 1024 ^ (v260 / 0x80000 | 0x2000 * v260));
        v269 = v268 + 0x78a5636f + v254 + (v266 & (v262 ^ v258) ^ v258) + ((v266 / 2048 | 0x200000 * v266) ^ (v266 / 64 | 0x4000000 * v266) ^ (v266 / 0x2000000 | 128 * v266));
        v270 = v269 + v255;
        v271 = v269 + ((v267 | v263) & v259 | v267 & v263) + ((v267 / 0x2000 | 0x80000 * v267) ^ (v267 / 4 | 0x40000000 * v267) ^ (v267 / 0x400000 | 1024 * v267));
        v272 = ((v212 / 128 | 0x2000000 * v212) ^ v212 / 8 ^ (v212 / 0x40000 | 0x4000 * v212)) + v208 + v244 + ((v264 / 0x20000 | 0x8000 * v264) ^ v264 / 1024 ^ (v264 / 0x80000 | 0x2000 * v264));
        v273 = v272 - 0x7b3787ec + v258 + (v270 & (v266 ^ v262) ^ v262) + ((v270 / 2048 | 0x200000 * v270) ^ (v270 / 64 | 0x4000000 * v270) ^ (v270 / 0x2000000 | 128 * v270));
        v274 = v273 + v259;
        v275 = v273 + ((v271 | v267) & v263 | v271 & v267) + ((v271 / 0x2000 | 0x80000 * v271) ^ (v271 / 4 | 0x40000000 * v271) ^ (v271 / 0x400000 | 1024 * v271));
        v276 = ((v216 / 128 | 0x2000000 * v216) ^ v216 / 8 ^ (v216 / 0x40000 | 0x4000 * v216)) + v212 + v248 + ((v268 / 0x20000 | 0x8000 * v268) ^ v268 / 1024 ^ (v268 / 0x80000 | 0x2000 * v268));
        v277 = v276 - 0x7338fdf8 + v262 + (v274 & (v270 ^ v266) ^ v266) + ((v274 / 2048 | 0x200000 * v274) ^ (v274 / 64 | 0x4000000 * v274) ^ (v274 / 0x2000000 | 128 * v274));
        v278 = v277 + v263;
        v279 = v277 + ((v275 | v271) & v267 | v275 & v271) + ((v275 / 0x2000 | 0x80000 * v275) ^ (v275 / 4 | 0x40000000 * v275) ^ (v275 / 0x400000 | 1024 * v275));
        v280 = ((v220 / 128 | 0x2000000 * v220) ^ v220 / 8 ^ (v220 / 0x40000 | 0x4000 * v220)) + v216 + v252 + ((v272 / 0x20000 | 0x8000 * v272) ^ v272 / 1024 ^ (v272 / 0x80000 | 0x2000 * v272));
        v281 = v280 - 0x6f410006 + v266 + (v278 & (v274 ^ v270) ^ v270) + ((v278 / 2048 | 0x200000 * v278) ^ (v278 / 64 | 0x4000000 * v278) ^ (v278 / 0x2000000 | 128 * v278));
        v282 = v281 + v267;
        v283 = v281 + ((v279 | v275) & v271 | v279 & v275) + ((v279 / 0x2000 | 0x80000 * v279) ^ (v279 / 4 | 0x40000000 * v279) ^ (v279 / 0x400000 | 1024 * v279));
        v284 = ((v224 / 128 | 0x2000000 * v224) ^ v224 / 8 ^ (v224 / 0x40000 | 0x4000 * v224)) + v220 + v256 + ((v276 / 0x20000 | 0x8000 * v276) ^ v276 / 1024 ^ (v276 / 0x80000 | 0x2000 * v276));
        v285 = v284 - 0x5baf9315 + v270 + (v282 & (v278 ^ v274) ^ v274) + ((v282 / 2048 | 0x200000 * v282) ^ (v282 / 64 | 0x4000000 * v282) ^ (v282 / 0x2000000 | 128 * v282));
        v286 = v285 + v271;
        v287 = v285 + ((v283 | v279) & v275 | v283 & v279) + ((v283 / 0x2000 | 0x80000 * v283) ^ (v283 / 4 | 0x40000000 * v283) ^ (v283 / 0x400000 | 1024 * v283));
        v288 = ((v228 / 128 | 0x2000000 * v228) ^ v228 / 8 ^ (v228 / 0x40000 | 0x4000 * v228)) + v224 + v260 + ((v280 / 0x20000 | 0x8000 * v280) ^ v280 / 1024 ^ (v280 / 0x80000 | 0x2000 * v280));
        v289 = v288 - 0x41065c09 + v274 + (v286 & (v282 ^ v278) ^ v278) + ((v286 / 2048 | 0x200000 * v286) ^ (v286 / 64 | 0x4000000 * v286) ^ (v286 / 0x2000000 | 128 * v286));
        v290 = v289 + v275;
        v291 = v289 + ((v287 | v283) & v279 | v287 & v283) + ((v287 / 0x2000 | 0x80000 * v287) ^ (v287 / 4 | 0x40000000 * v287) ^ (v287 / 0x400000 | 1024 * v287));
        v292 = ((v232 / 128 | 0x2000000 * v232) ^ v232 / 8 ^ (v232 / 0x40000 | 0x4000 * v232)) + v228 + v264 + ((v284 / 0x20000 | 0x8000 * v284) ^ v284 / 1024 ^ (v284 / 0x80000 | 0x2000 * v284));
        v12 += v291;
        v10 += v283;
        v11 += v287;
        v293 = v290 + v47;
        v294 = v286 + v48;
        v295 = v292 - 0x398e870e + v278 + (v290 & (v286 ^ v282) ^ v282) + ((v290 / 2048 | 0x200000 * v290) ^ (v290 / 64 | 0x4000000 * v290) ^ (v290 / 0x2000000 | 128 * v290));
        v296 = v279 + v46 + v295;
        v14 = ((v291 | v287) & v283 | v291 & v287) + v14 + v295 + ((v291 / 0x2000 | 0x80000 * v291) ^ (v291 / 4 | 0x40000000 * v291) ^ (v291 / 0x400000 | 1024 * v291));
        *(int32_t *)v5 = v14;
        *(int32_t *)(v5 + 4) = v12;
        result2 = v12;
        *(int32_t *)(v5 + 8) = v11;
        *(int32_t *)(v5 + 12) = v10;
        *(int32_t *)(v5 + 20) = v293;
        *(int32_t *)(v5 + 16) = v296;
        *(int32_t *)(v5 + 24) = v294;
        v9 += v282;
        *(int32_t *)(v5 + 28) = v9;
    }
    // 0x405975
    return result2;
}
// Address range: 0x405990 - 0x405a51
int64_t function_405990(int64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 40); // 0x405994
    int32_t * v2 = (int32_t *)(a1 + 32); // 0x40599b
    int32_t * v3 = (int32_t *)(a1 + 36); // 0x40599e
    int32_t v4 = *v3; // 0x40599e
    uint32_t v5 = *v2 + (int32_t)v1; // 0x4059c6
    *v2 = v5;
    int32_t v6 = v4; // 0x4059d9
    if (v1 > (int64_t)v5) {
        // 0x4059db
        v6 = v4 + 1;
        *v3 = v6;
    }
    int64_t v7 = v1 < 56 ? 64 : 128; // 0x4059ac
    int64_t v8 = v1 < 56 ? 60 : 124; // 0x4059bb
    int64_t v9 = a1 + 48; // 0x4059e7
    *(int32_t *)((v1 < 56 ? 56 : 120) + v9) = llvm_bswap_i32(8 * v6 | v5 / 0x20000000);
    *(int32_t *)(v8 + v9) = v5 / 0x200000 % 256 | 0x8000000 * v5 | 2048 * v5 & 0xff0000 | v5 / 32 & 0xff00;
    memcpy((int64_t *)(v1 + v9), (int64_t *)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", (int32_t)(v7 - v1) - 8);
    return function_403200(v9, v7, a1);
}
// Address range: 0x405a60 - 0x405a82
int64_t function_405a60(int64_t a1, int64_t a2) {
    // 0x405a60
    function_405990(a1);
    int64_t v1; // 0x405a60
    return function_4031c0(a1, a2, v1);
}
// Address range: 0x405a90 - 0x405ab2
int64_t function_405a90(int64_t a1, int64_t a2) {
    // 0x405a90
    function_405990(a1);
    int64_t v1; // 0x405a90
    return function_4031e0(a1, a2, v1);
}
// Address range: 0x405ac0 - 0x405dbe
int64_t function_405ac0(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1 + 40; // 0x405ad7
    int64_t * v3 = (int64_t *)v2; // 0x405ad7
    int64_t v4 = *v3; // 0x405ad7
    int64_t v5 = a1; // 0x405ade
    int64_t v6 = a2; // 0x405ade
    int64_t v7; // 0x405ac0
    if (v4 != 0) {
        int64_t v8 = v1 + 48; // 0x405c1e
        uint64_t v9 = 128 - v4; // 0x405c22
        int64_t v10 = v9 > a2 ? a2 : v9; // 0x405c2c
        int64_t * dest_mem = memcpy((int64_t *)(v4 + v8), (int64_t *)a1, (int32_t)v10); // 0x405c36
        uint64_t v11 = *v3 + v10; // 0x405c40
        *v3 = v11;
        int64_t v12 = (int64_t)dest_mem; // 0x405c4c
        if (v11 >= 65) {
            // 0x405cb0
            function_403200(v8, v11 & -64, v1);
            uint64_t v13 = *v3; // 0x405cc2
            int64_t v14 = (v10 + v4 & -64) + v8; // 0x405ccb
            uint64_t v15 = v13 % 64; // 0x405ccf
            *v3 = v15;
            if ((int32_t)v15 >= 8) {
                int64_t v16 = v1 + 56 & -8; // 0x405d18
                *(int64_t *)v8 = *(int64_t *)v14;
                *(int64_t *)(v15 + v2) = *(int64_t *)(v15 + v14 - 8);
                int64_t v17 = v8 - v16; // 0x405d30
                int64_t v18 = v14 - v17; // 0x405d33
                uint32_t v19 = (int32_t)(v15 + v17); // 0x405d3b
                v12 = v18;
                if (v19 >= 8) {
                    int64_t v20 = 0;
                    int64_t v21 = v20 + 8; // 0x405d4b
                    *(int64_t *)(v20 + v16) = *(int64_t *)(v20 + v18);
                    v12 = v18;
                    while ((v19 & -8) > (int32_t)v21) {
                        // 0x405d49
                        v20 = v21 & 0xffffffff;
                        v21 = v20 + 8;
                        *(int64_t *)(v20 + v16) = *(int64_t *)(v20 + v18);
                        v12 = v18;
                    }
                }
            } else {
                if ((v13 & 4) != 0) {
                    // 0x405d5f
                    *(int32_t *)v8 = *(int32_t *)v14;
                    uint32_t v22 = *(int32_t *)(v15 + v14 - 4); // 0x405d68
                    *(int32_t *)(v15 + v1 + 44) = v22;
                    v12 = v22;
                } else {
                    // 0x405ce1
                    v12 = v14;
                    if (v15 != 0) {
                        // 0x405ce9
                        *(char *)v8 = *(char *)v14;
                        v12 = v14;
                        if ((v13 & 2) != 0) {
                            uint16_t v23 = *(int16_t *)(v15 + v14 - 2); // 0x405cfc
                            *(int16_t *)(v15 + v1 + 46) = v23;
                            v12 = v23;
                        }
                    }
                }
            }
        }
        // 0x405c4e
        v7 = v12;
        v5 = v10 + a1;
        v6 = a2 - v10;
    }
    uint64_t v24 = v6;
    int64_t result = v7; // 0x405ae8
    int64_t v25 = v5; // 0x405ae8
    int64_t v26 = v24; // 0x405ae8
    int64_t v27; // 0x405ac0
    int64_t v28; // 0x405ac0
    int64_t v29; // 0x405ac0
    int64_t v30; // 0x405ac0
    int64_t v31; // 0x405ac0
    int64_t v32; // 0x405ac0
    int64_t v33; // 0x405ac0
    int64_t v34; // 0x405ac0
    if (v24 < 64) {
        goto lab_0x405bfc;
    } else {
        if (v5 % 4 == 0) {
            int64_t v35 = v24 & -64; // 0x405bed
            result = function_403200(v5, v35, v1);
            v25 = v35 + v5;
            v26 = v24 % 64;
            goto lab_0x405bfc;
        } else {
            int64_t v36 = v1 + 48; // 0x405af7
            if (v24 == 64) {
                int64_t v37 = *v3; // 0x405b6b
                v28 = v37 + v36;
                v27 = v37;
                v31 = v5;
                v29 = 64;
                v33 = v36;
                goto lab_0x405c60;
            } else {
                int64_t v38 = (v24 - 1 & -64) + v5; // 0x405b19
                int128_t v39 = __asm_movdqu(*(int128_t *)v5); // 0x405b20
                int64_t v40 = v5 + 64; // 0x405b2f
                __asm_movups(*(int128_t *)v36, v39);
                __asm_movups(*(int128_t *)(v1 + 64), __asm_movdqu(*(int128_t *)(v5 + 16)));
                __asm_movups(*(int128_t *)(v1 + 80), __asm_movdqu(*(int128_t *)(v5 + 32)));
                __asm_movups(*(int128_t *)(v1 + 96), __asm_movdqu(*(int128_t *)(v5 + 48)));
                function_403200(v36, 64, v1);
                while (v40 != v38) {
                    int64_t v41 = v40;
                    v39 = __asm_movdqu(*(int128_t *)v41);
                    v40 = v41 + 64;
                    __asm_movups(*(int128_t *)v36, v39);
                    __asm_movups(*(int128_t *)(v1 + 64), __asm_movdqu(*(int128_t *)(v41 + 16)));
                    __asm_movups(*(int128_t *)(v1 + 80), __asm_movdqu(*(int128_t *)(v41 + 32)));
                    __asm_movups(*(int128_t *)(v1 + 96), __asm_movdqu(*(int128_t *)(v41 + 48)));
                    function_403200(v36, 64, v1);
                }
                // 0x405b5c
                v34 = v36;
                v30 = v24 - 64 - (v24 - 65 & -64);
                v32 = v38;
                goto lab_0x405b6b;
            }
        }
    }
  lab_0x405bfc:
    // 0x405bfc
    if (v26 == 0) {
        // 0x405c05
        return result;
    }
    // 0x405db1
    v34 = v1 + 48;
    v30 = v26;
    v32 = v25;
    goto lab_0x405b6b;
  lab_0x405b6b:;
    int64_t v42 = *v3; // 0x405b6b
    int64_t v43 = v42 + v34; // 0x405b70
    uint32_t v44 = (int32_t)v30; // 0x405b75
    v28 = v43;
    v27 = v42;
    v31 = v32;
    v29 = v30;
    v33 = v34;
    int64_t v45; // 0x405ac0
    int64_t v46; // 0x405ac0
    int64_t v47; // 0x405ac0
    if (v44 >= 8) {
        goto lab_0x405c60;
    } else {
        if ((v30 & 4) != 0) {
            // 0x405d88
            *(int32_t *)v43 = *(int32_t *)v32;
            int64_t v48 = (v30 & 0xffffffff) - 4;
            *(int32_t *)(v43 + v48) = *(int32_t *)(v48 + v32);
            v45 = v42;
            v46 = v30;
            v47 = v34;
        } else {
            // 0x405b89
            v45 = v42;
            v46 = v30;
            v47 = v34;
            if (v44 != 0) {
                // 0x405b8e
                *(char *)v43 = *(char *)v32;
                v45 = v42;
                v46 = v30;
                v47 = v34;
                if ((v30 & 2) != 0) {
                    int64_t v49 = (v30 & 0xffffffff) - 2;
                    *(int16_t *)(v43 + v49) = *(int16_t *)(v49 + v32);
                    v45 = v42;
                    v46 = v30;
                    v47 = v34;
                }
            }
        }
        goto lab_0x405b9e;
    }
  lab_0x405c60:;
    int64_t v50 = v28 + 8 & -8; // 0x405c6a
    *(int64_t *)v28 = *(int64_t *)v31;
    int64_t v51 = (v29 & 0xffffffff) - 8;
    *(int64_t *)(v51 + v28) = *(int64_t *)(v51 + v31);
    int64_t v52 = v28 - v50; // 0x405c7e
    uint32_t v53 = (int32_t)(v52 + v29); // 0x405c8a
    v45 = v27;
    v46 = v29;
    v47 = v33;
    if (v53 >= 8) {
        int64_t v54 = 0;
        int64_t v55 = v54 + 8; // 0x405c9a
        *(int64_t *)(v54 + v50) = *(int64_t *)(v31 - v52 + v54);
        v45 = v27;
        v46 = v29;
        v47 = v33;
        while ((v53 & -8) > (int32_t)v55) {
            // 0x405c98
            v54 = v55 & 0xffffffff;
            v55 = v54 + 8;
            *(int64_t *)(v54 + v50) = *(int64_t *)(v31 - v52 + v54);
            v45 = v27;
            v46 = v29;
            v47 = v33;
        }
    }
    goto lab_0x405b9e;
  lab_0x405b9e:;
    int64_t v56 = v46 + v45; // 0x405b9e
    int64_t dest_mem2 = v45; // 0x405ba5
    int64_t v57 = v56; // 0x405ba5
    if (v56 >= 64) {
        int64_t v58 = v56 - 64; // 0x405bb2
        function_403200(v47, 64, v1);
        dest_mem2 = (int64_t)memcpy((int64_t *)v47, (int64_t *)(v1 + 112), (int32_t)v58);
        v57 = v58;
    }
    // 0x405bcb
    *v3 = v57;
    return dest_mem2;
}
// Address range: 0x405dc0 - 0x405e3c
int64_t function_405dc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = -0x4498517a95f61999; // bp-184, 0x405dd5
    int64_t v2 = &v1; // 0x405dd9
    function_405ac0(a1, a2, &v1);
    function_405990(v2);
    return function_4031c0(v2, a3, v2);
}
// Address range: 0x405e40 - 0x405ebc
int64_t function_405e40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x367cd507c1059ed8; // bp-184, 0x405e55
    int64_t v2 = &v1; // 0x405e59
    function_405ac0(a1, a2, &v1);
    function_405990(v2);
    return function_4031e0(v2, a3, v2);
}
// Address range: 0x405ec0 - 0x406015
int64_t function_405ec0(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x405eda
    if (mem == NULL) {
        // 0x406000
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x405eda
    int64_t v2; // 0x405ec0
    int32_t v3 = v2;
    int64_t v4 = -0x4498517a95f61999; // bp-216, 0x405efe
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x405ec0
    int64_t v8; // 0x405f6c
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x405f67
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x405f8a
                goto lab_0x405f8a;
            }
            // 0x405f50
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x405f8f;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x405f78
        function_403200(v1, 0x8000, v6);
    }
  lab_0x405f8a:;
    int32_t v11 = v3 & 32; // 0x405f8a
    v7 = v11;
    if (v11 != 0) {
        // 0x405fe0
        free(mem);
        return 1;
    }
  lab_0x405f8f:;
    int64_t v12 = v7; // 0x405f92
    if (v8 != 0) {
        // 0x405fc8
        function_405ac0(v1, v8, &v4);
        v12 = v6;
    }
    // 0x405f94
    function_405990(v6);
    function_4031c0(v6, a2, v12);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x406020 - 0x406175
int64_t function_406020(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x40603a
    if (mem == NULL) {
        // 0x406160
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x40603a
    int64_t v2; // 0x406020
    int32_t v3 = v2;
    int64_t v4 = 0x367cd507c1059ed8; // bp-216, 0x40605e
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x406020
    int64_t v8; // 0x4060cc
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x4060c7
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x4060ea
                goto lab_0x4060ea;
            }
            // 0x4060b0
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x4060ef;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x4060d8
        function_403200(v1, 0x8000, v6);
    }
  lab_0x4060ea:;
    int32_t v11 = v3 & 32; // 0x4060ea
    v7 = v11;
    if (v11 != 0) {
        // 0x406140
        free(mem);
        return 1;
    }
  lab_0x4060ef:;
    int64_t v12 = v7; // 0x4060f2
    if (v8 != 0) {
        // 0x406128
        function_405ac0(v1, v8, &v4);
        v12 = v6;
    }
    // 0x4060f4
    function_405990(v6);
    function_4031e0(v6, a2, v12);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x406180 - 0x406185
int64_t function_406180(void) {
    // 0x406180
    int64_t fd; // 0x406180
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x406190 - 0x4061b1
int64_t function_406190(int64_t stream, int64_t advice, int64_t a3) {
    // 0x406190
    if (stream == 0) {
        // 0x4061b0
        int64_t result; // 0x406190
        return result;
    }
    // 0x406195
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4061c0 - 0x406253
int64_t function_4061c0(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x4061c7
    int64_t result = (int64_t)file; // 0x4061c7
    if (file == NULL) {
        // 0x4061e1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x4061d7
    if (v1 >= 3) {
        // 0x4061e1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_407ea0((int64_t)v1, v2); // 0x4061fa
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x406238
        function_4086e0(result, v2);
        // 0x4061e1
        return 0;
    }
    // 0x4061fe
    if ((int32_t)function_4086e0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x406210
        if (v4 != NULL) {
            // 0x4061e1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x40621d
    close(fd);
    // 0x4061e1
    return 0;
}
// Address range: 0x406260 - 0x4062f9
int64_t function_406260(int64_t str) {
    // 0x406260
    if (str == 0) {
        // 0x4062d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40626e
    int64_t result = (int64_t)found_char_pos; // 0x40626e
    if (found_char_pos == NULL) {
        // 0x4062c9
        g44 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x406278
    if (v1 - str < 7) {
        // 0x4062c9
        g44 = str;
        g30 = str;
        return result;
    }
    // 0x406288
    bool v2; // 0x406260
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x406260
    int64_t v5 = result - 6; // 0x406260
    int64_t v6 = 7; // 0x406296
    unsigned char v7 = *(char *)v5; // 0x406296
    char v8 = *(char *)v4; // 0x406296
    char v9 = v8; // 0x406296
    bool v10 = false; // 0x406296
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
    int64_t v12 = (int64_t)"lt-"; // 0x4062a0
    int64_t v13 = v1; // 0x4062a0
    int64_t v14 = 3; // 0x4062a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4062c9
        g44 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4062b2
    char v16 = *(char *)v12; // 0x4062b2
    char v17 = v16; // 0x4062b2
    bool v18 = false; // 0x4062b2
    while (v15 == v16) {
        // 0x4062a2
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
    int64_t v20 = v1; // 0x4062bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4062be
        v20 = result + 4;
        g27 = v20;
    }
    // 0x4062c9
    g44 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x406300 - 0x4063f2
int64_t function_406300(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x406314
    int64_t result = (int64_t)v1; // 0x406314
    if (result != a1) {
        // 0x406321
        return result;
    }
    int64_t v2 = function_409850(); // 0x406330
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4063e6
    if (v3 == 85) {
        // 0x406340
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4063d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40636e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40637b
        // 0x406321
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4063d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4063bd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4063ca
    // 0x406321
    return result4;
}
// Address range: 0x406400 - 0x406457
int64_t function_406400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x406400
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x406448
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x406457 - 0x407621
int64_t function_406457(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4064a1
    int64_t v3 = 0; // 0x4064a1
    int64_t v4; // 0x406457
    int64_t v5; // 0x406457
    int64_t v6; // 0x406457
    int64_t v7; // 0x406457
    int64_t v8; // 0x406457
    int64_t v9; // 0x406457
    int64_t v10; // 0x406457
    int64_t v11; // 0x406457
    int64_t v12; // 0x406457
    int64_t v13; // 0x406457
    int64_t v14; // 0x406457
    int64_t v15; // 0x406457
    int64_t v16; // 0x406457
    int64_t v17; // 0x406457
    int64_t v18; // 0x406457
    int64_t result; // 0x406457
    int64_t v19; // 0x406457
    int32_t wc; // bp+132, 0x406457
    int64_t ps; // bp+136, 0x406457
    char v20; // 0x406a10
    int64_t v21; // 0x406a10
    int64_t v22; // 0x406db8
    int64_t v23; // 0x406457
    int64_t v24; // 0x406dd7
    int32_t v25; // 0x406457
    while (true) {
      lab_0x4064a8_2:
        // 0x4064a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x406457
        int64_t v27; // 0x4064dc
        while (true) {
          lab_0x4064a8:
            // 0x4064a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4064b3
            if (v15 == -1) {
                // 0x4064b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4064c3
            if (v28) {
                // break (via goto) -> 0x406c28
                goto lab_0x406c28;
            }
            // 0x4064cc
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
                    // 0x406abb
                    if (v25 % 2 == 0) {
                        goto lab_0x406601;
                    }
                    // 0x406edd
                    v26 = v5 + 1;
                    goto lab_0x4064a8;
                }
                case 7: {
                    goto lab_0x406601;
                }
                case 8: {
                    goto lab_0x406601;
                }
                case 9: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x406601;
                }
                case 12: {
                    goto lab_0x406601;
                }
                case 13: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4065cd;
                }
                case 36: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x406601;
                }
                case 38: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x406601;
                }
                case 44: {
                    goto lab_0x406601;
                }
                case 45: {
                    goto lab_0x406601;
                }
                case 46: {
                    goto lab_0x406601;
                }
                case 47: {
                    goto lab_0x406601;
                }
                case 48: {
                    goto lab_0x406601;
                }
                case 49: {
                    goto lab_0x406601;
                }
                case 50: {
                    goto lab_0x406601;
                }
                case 51: {
                    goto lab_0x406601;
                }
                case 52: {
                    goto lab_0x406601;
                }
                case 53: {
                    goto lab_0x406601;
                }
                case 54: {
                    goto lab_0x406601;
                }
                case 55: {
                    goto lab_0x406601;
                }
                case 56: {
                    goto lab_0x406601;
                }
                case 57: {
                    goto lab_0x406601;
                }
                case 58: {
                    goto lab_0x406601;
                }
                case 59: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x406601;
                }
                case 66: {
                    goto lab_0x406601;
                }
                case 67: {
                    goto lab_0x406601;
                }
                case 68: {
                    goto lab_0x406601;
                }
                case 69: {
                    goto lab_0x406601;
                }
                case 70: {
                    goto lab_0x406601;
                }
                case 71: {
                    goto lab_0x406601;
                }
                case 72: {
                    goto lab_0x406601;
                }
                case 73: {
                    goto lab_0x406601;
                }
                case 74: {
                    goto lab_0x406601;
                }
                case 75: {
                    goto lab_0x406601;
                }
                case 76: {
                    goto lab_0x406601;
                }
                case 77: {
                    goto lab_0x406601;
                }
                case 78: {
                    goto lab_0x406601;
                }
                case 79: {
                    goto lab_0x406601;
                }
                case 80: {
                    goto lab_0x406601;
                }
                case 81: {
                    goto lab_0x406601;
                }
                case 82: {
                    goto lab_0x406601;
                }
                case 83: {
                    goto lab_0x406601;
                }
                case 84: {
                    goto lab_0x406601;
                }
                case 85: {
                    goto lab_0x406601;
                }
                case 86: {
                    goto lab_0x406601;
                }
                case 87: {
                    goto lab_0x406601;
                }
                case 88: {
                    goto lab_0x406601;
                }
                case 89: {
                    goto lab_0x406601;
                }
                case 90: {
                    goto lab_0x406601;
                }
                case 91: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x406601;
                }
                case 94: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x406601;
                }
                case 96: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x406601;
                }
                case 98: {
                    goto lab_0x406601;
                }
                case 99: {
                    goto lab_0x406601;
                }
                case 100: {
                    goto lab_0x406601;
                }
                case 101: {
                    goto lab_0x406601;
                }
                case 102: {
                    goto lab_0x406601;
                }
                case 103: {
                    goto lab_0x406601;
                }
                case 104: {
                    goto lab_0x406601;
                }
                case 105: {
                    goto lab_0x406601;
                }
                case 106: {
                    goto lab_0x406601;
                }
                case 107: {
                    goto lab_0x406601;
                }
                case 108: {
                    goto lab_0x406601;
                }
                case 109: {
                    goto lab_0x406601;
                }
                case 110: {
                    goto lab_0x406601;
                }
                case 111: {
                    goto lab_0x406601;
                }
                case 112: {
                    goto lab_0x406601;
                }
                case 113: {
                    goto lab_0x406601;
                }
                case 114: {
                    goto lab_0x406601;
                }
                case 115: {
                    goto lab_0x406601;
                }
                case 116: {
                    goto lab_0x406601;
                }
                case 117: {
                    goto lab_0x406601;
                }
                case 118: {
                    goto lab_0x406601;
                }
                case 119: {
                    goto lab_0x406601;
                }
                case 120: {
                    goto lab_0x406601;
                }
                case 121: {
                    goto lab_0x406601;
                }
                case 122: {
                    goto lab_0x406601;
                }
                case 123: {
                    goto lab_0x4065a5;
                }
                case 124: {
                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4065a5;
                }
                case 126: {
                    goto lab_0x4065cd;
                }
                default: {
                    goto lab_0x4069a5;
                }
            }
        }
      lab_0x4069a5:
        if (v23 != 1) {
            // 0x406d10
            ps = 0;
            int64_t len = v15; // 0x406d20
            if (v15 == -1) {
                // 0x406d22
                len = strlen((char *)str);
            }
            // 0x406d4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x406daf:
                // 0x406daf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x406db4
                int64_t v30 = v29 + str;
                v24 = function_409710(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40732a_2;
                    }
                    case -1: {
                        goto lab_0x40732a_2;
                    }
                    case -2: {
                        // 0x40740d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x407447
                            v19 = v18;
                            int64_t v31 = v18; // 0x40744a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x407457
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x407450
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40732a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40732a_2;
                    }
                    case 1: {
                        goto lab_0x406d80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x406e2c
                        char v34 = *(char *)v33; // 0x406e3d
                        unsigned char v35; // 0x406457
                        if (v34 < 125) {
                            // 0x406e48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x406e5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_406400(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x406e30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x406e3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x406e48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x406e5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_406400(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x406e30
                            v33++;
                        }
                        goto lab_0x406d80;
                    }
                }
            }
            goto lab_0x40732a_2;
        } else {
            // 0x4069f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x406601;
        }
    }
  lab_0x406c28:
    // 0x406c28
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40752a
        if (v8 > result) {
            // 0x407533
            *(char *)(v12 + result) = 0;
        }
        // 0x406857
        return result;
    }
    return function_406400(v10, v6, str, v4, 2, v25 & -3);
  lab_0x406601:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x406610
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40681a_2;
        }
    }
    int64_t v39 = result; // 0x406711
    char v40 = v20; // 0x406711
    int64_t v41 = v38; // 0x406711
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x406711
    int64_t v43 = v36; // 0x406711
    goto lab_0x40668d;
  lab_0x40681a_2:
    // 0x406857
    return function_406400(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40732a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x406601;
    } else {
        uint64_t v49 = v46 + v5; // 0x406efe
        int64_t v50 = v5 + 1; // 0x406fe1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x406fe8
        char v52 = v20; // 0x406fe8
        int64_t v53 = result; // 0x406fe8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x406fb1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x406fb5
            int64_t v56 = v54 + 1; // 0x406fba
            int64_t v57 = v51 + 1; // 0x406fe1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x406fac
                v54 = v56;
                if (v47 > v54) {
                    // 0x406fb1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x406fb5
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
        goto lab_0x40668d;
    }
  lab_0x406d80:
    // 0x406d80
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x406d9f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406da2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40732a
        goto lab_0x40732a_2;
    }
    goto lab_0x406daf;
  lab_0x4065cd:
    // 0x4065cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40681a_2;
    }
    goto lab_0x406601;
  lab_0x4065a5:;
    bool v60 = v15 == 1; // 0x4065b0
    if (v15 == -1) {
        // 0x4065b2
        v60 = *(char *)v1 == 0;
    }
    // 0x4065be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x406601;
    } else {
        goto lab_0x4065cd;
    }
  lab_0x40668d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x406692
        *(char *)(v44 + v45) = v40;
    }
    // 0x406696
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4064a8_2;
}
// Address range: 0x407630 - 0x4077ce
int64_t function_407630(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x407632
    int32_t * v3 = __errno_location(); // 0x40764c
    int64_t v4 = (int64_t)g20; // 0x407651
    int32_t v5 = *v3; // 0x40765b
    int64_t v6 = v4; // 0x407671
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4077c9
            function_4086a0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x407680
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x407687
        int64_t v9; // 0x407630
        if (g20 == &g21) {
            int64_t v10 = function_4084b0(0, v8); // 0x4077aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x4077af
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4084b0(v4, v8); // 0x40769b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x4076aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x4076aa
        int32_t v14 = v7; // 0x4076b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4076e1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4076eb
    int64_t * v17 = (int64_t *)v15; // 0x4076ee
    uint64_t v18 = *v17; // 0x4076ee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4076f1
    int64_t result = *v19; // 0x4076f1
    int64_t v20; // 0x407630
    uint64_t v21 = function_406400(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x407714
    if (v18 > v21) {
        // 0x40778b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x407727
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x407737
        free((int64_t *)result);
    }
    int64_t result2 = function_408450(v22); // 0x407751
    *v19 = result2;
    int64_t v23; // 0x407630
    function_406400(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40778b
    *v3 = v5;
    return result2;
}
// Address range: 0x4077d0 - 0x407804
int64_t function_4077d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4077d7
    int64_t result = function_408650(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x4077f6
    return result;
}
// Address range: 0x407810 - 0x40781f
int64_t function_407810(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x40781c
    return result;
}
// Address range: 0x407820 - 0x40782f
int64_t function_407820(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x407828
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x407830 - 0x407863
int64_t function_407830(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x407849
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40784e
    uint32_t v3 = *v2; // 0x40784e
    uint32_t v4 = (int32_t)a2 % 32; // 0x407852
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x407870 - 0x407883
int64_t function_407870(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x40787c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x407890 - 0x4078bb
int64_t function_407890(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x407898
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4078b5
        abort();
        // UNREACHABLE
    }
    // 0x4078ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x4078c0 - 0x407932
int64_t function_4078c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x4078e2
    int32_t * v2 = __errno_location(); // 0x4078eb
    uint32_t v3 = *(int32_t *)v1; // 0x40790b
    int64_t result = function_406400(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40791a
    return result;
}
// Address range: 0x407940 - 0x407a21
int64_t function_407940(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x407962
    int32_t * v2 = __errno_location(); // 0x407968
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x407987
    int32_t * v4 = (int32_t *)v1; // 0x40798a
    int64_t v5 = function_406400(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4079a5
    int64_t v6 = v5 + 1; // 0x4079aa
    int64_t result = function_408450(v6); // 0x4079bf
    function_406400(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x407a04
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x407a0d
    return result;
}
// Address range: 0x407a30 - 0x407a3a
int64_t function_407a30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407a30
    return function_407940(a1, a2, 0, a3);
}
// Address range: 0x407a40 - 0x407ad5
int64_t function_407a40(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x407a40
    int64_t v2 = v1; // 0x407a40
    int64_t v3 = v2; // 0x407a54
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x407a73
        free((int64_t *)*(int64_t *)v4);
        v3 = &g57;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x407a70
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g57;
        }
    }
    int64_t v6 = v3; // 0x407a8d
    if (g21 != 0x60e320) {
        // 0x407a8f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g45;
        v6 = &g57;
    }
    int64_t result = v6; // 0x407ab1
    if (g20 != &g21) {
        // 0x407ab3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g57;
    }
    // 0x407ac6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x407ae0 - 0x407af1
int64_t function_407ae0(void) {
    // 0x407ae0
    int64_t v1; // 0x407ae0
    return function_407630(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x407b00 - 0x407b0a
int64_t function_407b00(void) {
    // 0x407b00
    int64_t v1; // 0x407b00
    return function_407630(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x407b10 - 0x407b26
int64_t function_407b10(int64_t a1) {
    // 0x407b10
    return function_407630(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x407b30 - 0x407b42
int64_t function_407b30(int64_t a1, int64_t a2) {
    // 0x407b30
    return function_407630(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x407b50 - 0x407bb8
int64_t function_407b50(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407b60
    return function_407630((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407bc0 - 0x407c24
int64_t function_407bc0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407bd0
    return function_407630((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x407c30 - 0x407c3c
int64_t function_407c30(int64_t a1, int64_t a2) {
    // 0x407c30
    return function_407b50(0, a1 & 0xffffffff, a2);
}
// Address range: 0x407c40 - 0x407c4f
int64_t function_407c40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407c40
    return function_407bc0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x407c50 - 0x407cc0
int64_t function_407c50(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x407c5d
    int128_t v2 = __asm_movdqa(g47); // 0x407c65
    int128_t v3 = __asm_movdqa(g48); // 0x407c6d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x407c82
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x407c98
    uint32_t v6 = *v5; // 0x407c98
    uint32_t v7 = (int32_t)a3 % 32; // 0x407c9d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_407630(0, a1, a2, &v4);
}
// Address range: 0x407cc0 - 0x407ccd
int64_t function_407cc0(int64_t a1, int64_t a2) {
    // 0x407cc0
    return function_407c50(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x407cd0 - 0x407ce1
int64_t function_407cd0(int64_t a1) {
    // 0x407cd0
    return function_407c50(a1, -1, 58);
}
// Address range: 0x407cf0 - 0x407cfa
int64_t function_407cf0(void) {
    // 0x407cf0
    int64_t v1; // 0x407cf0
    return function_407c50(v1, v1, 58);
}
// Address range: 0x407d00 - 0x407d6e
int64_t function_407d00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407d1a
    return function_407630((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x407d70 - 0x407ddc
int64_t function_407d70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x407d77
    int128_t v2 = __asm_movdqa(g47); // 0x407d7f
    int128_t v3 = __asm_movdqa(g48); // 0x407d87
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x407da9
    if (a2 == 0 || a3 == 0) {
        // 0x407dd7
        abort();
        // UNREACHABLE
    }
    // 0x407dba
    return function_407630(a1, a4, a5, &v4);
}
// Address range: 0x407de0 - 0x407de9
int64_t function_407de0(void) {
    // 0x407de0
    int64_t v1; // 0x407de0
    return function_407d70(v1, v1, v1, v1, -1);
}
// Address range: 0x407df0 - 0x407e07
int64_t function_407df0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407df0
    return function_407d70(0, a1, a2, a3, -1);
}
// Address range: 0x407e10 - 0x407e23
int64_t function_407e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407e10
    return function_407d70(0, a1, a2, a3, a4);
}
// Address range: 0x407e30 - 0x407e3a
int64_t function_407e30(void) {
    // 0x407e30
    int64_t v1; // 0x407e30
    return function_407630(v1, v1, v1, &g19);
}
// Address range: 0x407e40 - 0x407e52
int64_t function_407e40(int64_t a1, int64_t a2) {
    // 0x407e40
    return function_407630(0, a1, a2, &g19);
}
// Address range: 0x407e60 - 0x407e71
int64_t function_407e60(void) {
    // 0x407e60
    int64_t v1; // 0x407e60
    return function_407630(v1, v1, -1, &g19);
}
// Address range: 0x407e80 - 0x407e96
int64_t function_407e80(int64_t a1) {
    // 0x407e80
    return function_407630(0, a1, -1, &g19);
}
// Address range: 0x407ea0 - 0x407eae
int64_t function_407ea0(int64_t a1, int64_t a2) {
    // 0x407ea0
    int64_t v1; // 0x407ea0
    return function_408760(a1, 0, 3, v1);
}
// Address range: 0x407eb0 - 0x40828d
int64_t function_407eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x407f48
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x407ecc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x407ee6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x407f2b
    if (a6 < 10) {
        // 0x407f3a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x408032
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x408290 - 0x4082b0
int64_t function_408290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408290
    if (a5 == 0) {
        // 0x4082ab
        return function_407eb0(a1, a2, a3, a4, a5, 0, (int64_t)&g57);
    }
    int64_t v1 = 0; // 0x408297
    v1++;
    int64_t v2 = v1; // 0x4082a9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4082a0
        v1++;
        v2 = v1;
    }
    // 0x4082ab
    return function_407eb0(a1, a2, a3, a4, a5, v2, (int64_t)&g57);
}
// Address range: 0x4082b0 - 0x408310
int64_t function_4082b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4082b0
    int64_t v3 = &v2; // 0x4082b0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4082e3
    int64_t v6; // 0x4082cd
    int64_t * v7; // 0x4082eb
    int64_t v8; // 0x4082eb
    int64_t v9; // 0x4082f7
    if (v5 < 48) {
        // 0x4082c0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x408303
            break;
        }
    } else {
        // 0x4082eb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x408303
            break;
        }
    }
    int64_t v10 = 10; // 0x4082e1
    while (v4 != 9) {
        // 0x4082d9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4082c0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x408303
                break;
            }
        } else {
            // 0x4082eb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x408303
                break;
            }
        }
        // 0x4082d9
        v10 = 10;
    }
    // 0x408303
    return function_407eb0(a1, a2, a3, a4, v3, v10, (int64_t)&g57);
}
// Address range: 0x408310 - 0x4083cc
int64_t function_408310(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x408310
    int64_t v1; // bp-168, 0x408310
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x408310
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x408310
    int64_t v8; // 0x408310
    int64_t v9; // bp-56, 0x408310
    int64_t v10; // 0x408375
    int64_t v11; // 0x408399
    if ((int32_t)v6 < 48) {
        // 0x408360
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4083b0
            break;
        }
    } else {
        // 0x408392
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4083b0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40838a
    int64_t v13 = 10; // 0x40838a
    while (v5 != 9) {
        // 0x40838c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x408360
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4083b0
                break;
            }
        } else {
            // 0x408392
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4083b0
                break;
            }
        }
        // 0x408382
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4083b0
    int64_t v14; // bp-136, 0x408310
    int64_t result = function_407eb0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g57); // 0x4083bf
    return result;
}
// Address range: 0x4083d0 - 0x408444
int64_t function_4083d0(int64_t a1) {
    // 0x4083d0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x408433
    return fputs_unlocked(v1, g28);
}
// Address range: 0x408450 - 0x40846a
int64_t function_408450(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x408454
    if (size != 0 != (mem == NULL)) {
        // 0x408463
        return (int64_t)mem;
    }
    // 0x408465
    function_4086a0(size);
    // UNREACHABLE
}
// Address range: 0x408470 - 0x408491
int64_t function_408470(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x408473
    int64_t v2 = v1; // 0x408473
    if (v2 < 0) {
        // 0x40848b
        function_4086a0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408489
        return function_408450(v2);
    }
    // 0x40848b
    function_4086a0(v2);
    // UNREACHABLE
}
// Address range: 0x4084a0 - 0x4084a2
int64_t function_4084a0(void) {
    // 0x4084a0
    int64_t v1; // 0x4084a0
    return function_408450(v1);
}
// Address range: 0x4084b0 - 0x4084e6
int64_t function_4084b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4084d8
        free(v1);
        return (int32_t)&g57 ^ (int32_t)&g57;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4084c1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4084d0
        return (int64_t)mem;
    }
    // 0x4084e1
    function_4086a0(a1);
    // UNREACHABLE
}
// Address range: 0x4084f0 - 0x408511
int64_t function_4084f0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4084f3
    int64_t v2 = v1; // 0x4084f3
    if (v2 < 0) {
        // 0x40850b
        function_4086a0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x408509
        return function_4084b0(a1, v2);
    }
    // 0x40850b
    function_4086a0(a1);
    // UNREACHABLE
}
// Address range: 0x408520 - 0x4085a6
int64_t function_408520(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40857b
            function_4086a0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4084b0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x408563
    if (a2 == 0) {
        // 0x408588
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x408568
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40857b
        function_4086a0(a1);
        // UNREACHABLE
    }
    // 0x40854a
    *(int64_t *)a2 = v2;
    return function_4084b0(a1, v2 * a3);
}
// Address range: 0x4085b0 - 0x408600
int64_t function_4085b0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4085b0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4085fa
            function_4086a0(a1);
            // UNREACHABLE
        }
        // 0x4085d2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4084b0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4085e5
        *(int64_t *)a2 = 128;
        return function_4084b0(0, 128);
    }
    // 0x4085f8
    if (a2 < 0) {
        // 0x4085fa
        function_4086a0(a1);
        // UNREACHABLE
    }
    // 0x4085d2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4084b0(a1, v1);
}
// Address range: 0x408600 - 0x408617
int64_t function_408600(int64_t a1, int64_t a2) {
    // 0x408600
    return (int64_t)memset((int64_t *)function_408450(a1), 0, (int32_t)a1);
}
// Address range: 0x408620 - 0x40864e
int64_t function_408620(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x408627
    if ((int64_t)v1 < 0) {
        // 0x408649
        function_4086a0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x408649
        function_4086a0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40863a
    if (mem != NULL) {
        // 0x408644
        return (int64_t)mem;
    }
    // 0x408649
    function_4086a0(nmemb);
    // UNREACHABLE
}
// Address range: 0x408650 - 0x408678
int64_t function_408650(int64_t a1, int64_t a2) {
    int64_t v1 = function_408450(a2); // 0x40865f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x408680 - 0x408693
int64_t function_408680(int64_t str) {
    // 0x408680
    return function_408650(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4086a0 - 0x4086d1
int64_t function_4086a0(int64_t a1) {
    // 0x4086a0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4086e0 - 0x40875b
int64_t function_4086e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4086e7
    if (fileno(stream) < 0) {
        // 0x408747
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4086fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40872b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x408747
            return fclose(stream);
        }
    }
    // 0x4086fc
    if ((int32_t)function_4088a0(a1, v1) == 0) {
        // 0x408747
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x408708
    int32_t v3 = *v2; // 0x408710
    int64_t result = fclose(stream); // 0x40871e
    if (v3 != 0) {
        // 0x408750
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x408720
    return result;
}
// Address range: 0x408760 - 0x408895
int64_t function_408760(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x408840
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40879c
    int64_t v2; // 0x408760
    if (g49 < 0) {
        int64_t v3 = function_408760(fd, 0, v1, a4); // 0x4087e4
        int64_t v4 = v3 & 0xffffffff; // 0x4087e9
        if ((int32_t)v3 < 0) {
            // 0x4087d0
            return v4 & 0xffffffff;
        }
        // 0x4087ef
        v2 = v4;
        if (g49 != -1) {
            // 0x4087d0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4087b7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4087c6
            g49 = 1;
            // 0x4087d0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_408760(fd & 0xffffffff, 0, v1, a4); // 0x408877
        int64_t v7 = v6 & 0xffffffff; // 0x40887c
        if ((int32_t)v6 < 0) {
            // 0x4087d0
            return v7 & 0xffffffff;
        }
        // 0x408886
        g49 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4087ff
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40880a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4087d0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x408822
    close(fd2);
    // 0x4087d0
    return 0xffffffff;
}
// Address range: 0x4088a0 - 0x4088e0
int64_t function_4088a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4088ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4088ba
        return fflush(stream);
    }
    // 0x4088c8
    function_4088e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4088e0 - 0x408937
int64_t function_4088e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4088e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4088ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40891b
    int64_t result = -1; // 0x408924
    if (v1 != -1) {
        // 0x408926
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x408932
    return result;
}
// Address range: 0x408940 - 0x408a1f
int64_t function_408940(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40894c
    uint32_t v2 = *v1; // 0x40894c
    int64_t v3 = a2 & 0xffffffff; // 0x408951
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x408954
    uint64_t v5 = (int64_t)*v4; // 0x408954
    int64_t v6; // 0x4089c2
    if (v3 <= v5) {
      lab_0x4089bc_2:
        // 0x4089bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x408942
    int64_t v8 = v2; // 0x408940
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4089bc
        goto lab_0x4089bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x408978
    int64_t v17; // 0x408986
    int64_t * v18; // 0x4089a0
    int64_t * v19; // 0x4089a3
    int64_t v20; // 0x4089ae
    int64_t v21; // 0x408986
    while ((v16 & 0xffffffff) > v10) {
        // 0x408983
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4089a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4089b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4089bc
            goto lab_0x4089bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4089bc
            goto lab_0x4089bc_2;
        }
        // 0x408972
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4089fb
    int64_t * v23 = (int64_t *)v22; // 0x408a00
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x408a03
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x408a00
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x408a17
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40896d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4089bc
            goto lab_0x4089bc_2;
        }
        // 0x408972
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x408983
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4089a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4089b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4089bc
                goto lab_0x4089bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4089bc
                goto lab_0x4089bc_2;
            }
            // 0x408972
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4089e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x408a00
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x408a17
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4089bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x408a20 - 0x40903c
int64_t function_408a20(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x408a3f
    int64_t v2 = *v1; // 0x408a3f
    char * str2 = (char *)v2; // 0x408a4c
    char c = *str2; // 0x408a4c
    int64_t v3 = v2; // 0x408a78
    int64_t v4 = 0; // 0x408a20
    int32_t v5; // 0x408a20
    int64_t v6; // 0x408a20
    int64_t v7; // 0x408a20
    int64_t v8; // 0x408a20
    int64_t v9; // 0x408a20
    int64_t v10; // 0x408a20
    int64_t v11; // 0x408a20
    int64_t v12; // 0x408a20
    int64_t v13; // 0x408a20
    int64_t str3; // 0x408a20
    int64_t v14; // 0x408a20
    int64_t v15; // 0x408a20
    int64_t v16; // 0x408a20
    int64_t v17; // 0x408a20
    int32_t v18; // 0x408a20
    int32_t v19; // 0x408a20
    int32_t v20; // 0x408a20
    int32_t v21; // 0x408a20
    int32_t v22; // 0x408a20
    int32_t v23; // 0x408a20
    int32_t v24; // 0x408a20
    int32_t v25; // 0x408a20
    int32_t v26; // 0x408a20
    int32_t v27; // 0x408a20
    int32_t v28; // 0x408a20
    int32_t v29; // 0x408a20
    int64_t nmemb; // 0x408a20
    int64_t v30; // 0x408a20
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x408a7c
            while (v31 != 0 == (v31 != 61)) {
                // 0x408a78
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408a88
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x408a8e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408a58
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x408abc
                int64_t v34; // 0x408a20
                int64_t v35; // 0x408a20
                if (strncmp(str, str2, n) == 0) {
                    // 0x408ac5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408c40;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408ad6
                int64_t v37 = *(int64_t *)v36; // 0x408ada
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408ab0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408ac5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408c40;
                        }
                    }
                    // 0x408ad6
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
                  lab_0x408b26:
                    // 0x408b26
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
                        goto lab_0x408b80;
                    } else {
                        if (v11 == 0) {
                            // 0x408cf0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408b80;
                        } else {
                            if (v39 == 0) {
                                // 0x408ca0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x408b4a;
                                } else {
                                    // 0x408cac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x408b4a;
                                    } else {
                                        // 0x408cba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x408b4a;
                                        } else {
                                            goto lab_0x408b80;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x408b4a;
                            }
                        }
                    }
                }
              lab_0x408b91:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408d66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408f12
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x408f32
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x408f7f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x408f99
                            int64_t v45; // 0x408f9b
                            if (*(char *)v42 != 0) {
                                // 0x408f9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408f93
                            while (v17 + nmemb != v42) {
                                // 0x408f95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x408f9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x408f88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x408fc0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x408d74
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x408ecf
                        free((int64_t *)v17);
                    }
                    // 0x408dc9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408de0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x408c8e
                    return 63;
                }
                // 0x408bb0
                v5 = v39;
                if (v13 != 0) {
                    // 0x408c34
                    v35 = v13;
                    v34 = v25;
                  lab_0x408c40:;
                    int32_t * v49 = (int32_t *)a7; // 0x408c50
                    uint32_t v50 = *v49; // 0x408c50
                    int64_t v51 = v50; // 0x408c50
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x408c5a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408c63
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x408e8f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x408e3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x408c8e
                            return 63;
                        }
                        // 0x408cd8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x408fef
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x408eed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408f00
                                // 0x408c8e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x408dfe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408e12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x408c7b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x408c7e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408c82
                    int64_t result = v59; // 0x408c88
                    if (v58 != 0) {
                        // 0x408c8a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x408c8e
                    return result;
                }
            } else {
                // 0x408a8e
                v5 = v32;
            }
            // break -> 0x408bb5
            break;
        }
    }
    // 0x408bb5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x408bcd
        if (*(char *)(v60 + 1) != 45) {
            // 0x408bd7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x408c8e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408d19
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408c06
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408c16
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408b80:
    // 0x408b80
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408b80
    int64_t v63 = *(int64_t *)v62; // 0x408b84
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408b91
        goto lab_0x408b91;
    }
    goto lab_0x408b26;
  lab_0x408b4a:
    // 0x408b4a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408a20
    int32_t v65; // 0x408a20
    int32_t v66; // 0x408a20
    if (v27 != 0) {
        goto lab_0x408b80;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408d00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408b80;
            } else {
                goto lab_0x408b71;
            }
        } else {
            // 0x408b65
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x408e5c
                int64_t v67 = (int64_t)mem; // 0x408e5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408b80;
                } else {
                    // 0x408e6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408b71;
                }
            } else {
                goto lab_0x408b71;
            }
        }
    }
  lab_0x408b71:
    // 0x408b71
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408b80;
}
// Address range: 0x409040 - 0x409606
int64_t function_409040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x409061
    if (v3 < 1) {
        // 0x40921e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40905d
    int32_t v5 = *(int32_t *)a7; // 0x409069
    uint64_t v6 = a1 & 0xffffffff; // 0x40906b
    int64_t v7 = v2; // 0x409070
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x409073
    *v8 = 0;
    int64_t v9; // 0x409040
    int64_t v10; // 0x409040
    int64_t v11; // 0x409040
    int64_t v12; // 0x409040
    int64_t str; // 0x409040
    int64_t v13; // 0x409040
    int64_t v14; // 0x409040
    int64_t v15; // 0x409040
    int64_t v16; // 0x409040
    int64_t v17; // 0x409040
    int32_t v18; // 0x409040
    char v19; // 0x409040
    if (v5 == 0) {
        // 0x409258
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40908a;
    } else {
        // 0x409083
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4090d0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4090d3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x409198;
            } else {
                int64_t v22 = v7 + 1; // 0x4090e6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4090f6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4091ac;
                } else {
                    goto lab_0x409108;
                }
            }
        } else {
            goto lab_0x40908a;
        }
    }
  lab_0x40908a:
    // 0x40908a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x409090
    *v24 = 0;
    int64_t v25; // 0x409040
    int64_t v26; // 0x409040
    int64_t v27; // 0x409040
    switch (*(char *)&v2) {
        case 45: {
            // 0x409180
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40918d;
        }
        case 43: {
            // 0x409490
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40918d;
        }
        default: {
            // 0x4090ac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40940f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409528
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40918d;
                } else {
                    // 0x40941d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4090ba;
                }
            } else {
                goto lab_0x4090ba;
            }
        }
    }
  lab_0x409198:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40919f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409108;
    } else {
        goto lab_0x4091ac;
    }
  lab_0x4090ba:
    // 0x4090ba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40918d;
  lab_0x40918d:
    // 0x40918d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x409198;
  lab_0x409108:;
    uint32_t v30 = *(int32_t *)a7; // 0x409108
    int64_t v31 = v30; // 0x409108
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40910a
    if ((int64_t)*v32 > v31) {
        // 0x40910f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409112
    if (*v33 > v30) {
        // 0x409117
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40911a
    int64_t v35 = v31; // 0x40911e
    int64_t v36 = v15; // 0x40911e
    int64_t v37; // 0x409040
    int64_t v38; // 0x409040
    int64_t v39; // 0x409040
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x409288
        int64_t v41 = v40; // 0x409288
        v2 = v41;
        int64_t v42; // 0x409040
        if (*v33 == v40) {
            // 0x409470
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409478
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x409294
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x409298
                function_408940(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4092a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4092b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4092ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4092d1
            int64_t v47 = v45 & 0xffffffff; // 0x4092d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4092de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4092e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4092e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4092c0
            int64_t v49 = v48 & 0xffffffff; // 0x4092c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4092d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4092de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4092e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4092e6;
                    }
                }
                // 0x4092c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x409488
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4092e6;
    } else {
        goto lab_0x409124;
    }
  lab_0x4091ac:
    // 0x4091ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4091af
    int64_t v51 = v12; // 0x4091af
    int64_t v52 = v14; // 0x4091af
    if (*(char *)v10 == 0) {
        goto lab_0x409108;
    } else {
        goto lab_0x4091b5;
    }
  lab_0x409124:;
    int32_t v53 = v35; // 0x409124
    int64_t v54; // 0x409040
    int64_t v55; // 0x409040
    int64_t v56; // 0x409040
    int64_t v57; // 0x409040
    int64_t v58; // 0x409040
    int64_t v59; // 0x409040
    char * v60; // 0x409040
    int64_t v61; // 0x409040
    int64_t v62; // 0x409139
    int64_t v63; // 0x409040
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x409273
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x409276;
    } else {
        // 0x40912c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409040
        int64_t v66 = v65 ? -1 : 1; // 0x409140
        int64_t v67 = (int64_t)"--"; // 0x409040
        int64_t v68 = v62; // 0x409040
        int64_t v69 = 3; // 0x409140
        unsigned char v70 = *(char *)v68; // 0x409140
        char v71 = *(char *)v67; // 0x409140
        char v72 = v71; // 0x409140
        bool v73 = false; // 0x409140
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
            // 0x409230
            if (*(char *)v62 == 45) {
                // 0x4092f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4092f0
                if (c == 0) {
                    goto lab_0x40923a;
                } else {
                    // 0x4092fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x409380;
                    } else {
                        if (c == 45) {
                            // 0x409563
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4093d5;
                        } else {
                            // 0x40930e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x409380;
                            } else {
                                // 0x409313
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409334;
                                } else {
                                    // 0x40931a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x409380;
                                    } else {
                                        goto lab_0x409334;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40923a;
            }
        } else {
            uint32_t v75 = *v33; // 0x409150
            v2 = v75;
            int32_t v76 = *v32; // 0x409153
            int64_t v77 = v35 + 1; // 0x409156
            int32_t v78 = v77; // 0x409159
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4094c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x409167
                    function_408940(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x409175
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x409276;
        }
    }
  lab_0x4091b5:;
    // 0x4091b5
    int64_t v79; // bp-104, 0x409040
    int64_t v80 = &v79; // 0x40904a
    int64_t v81 = v50 + 1; // 0x4091b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4091bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4091c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4091c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4091c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4091d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4091d6
    int32_t c2 = v84; // 0x4091d6
    char * found_char_pos = strchr(str2, c2); // 0x4091d6
    int64_t v87 = *v82; // 0x4091db
    v2 = v87;
    int64_t v88 = *v85; // 0x4091e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4091f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4094e0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4094ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40921e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4091d6
    char v91 = *(char *)(v90 + 1); // 0x40920b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4091c5
        if (v91 != 58) {
            // 0x40921e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409434
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409538
                *v8 = 0;
            } else {
                // 0x40951c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40945e
            *v83 = 0;
            // 0x40921e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40943e
        if (v93 != 0) {
            // 0x4094d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40945e
            *v83 = 0;
            // 0x40921e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x409451
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40945e
            *v83 = 0;
            // 0x40921e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40959a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40954a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x409551
        // 0x40945e
        *v83 = 0;
        // 0x40921e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4093a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4093ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4095d0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x409581
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x409588
            // 0x40921e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4093b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4093ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4093d5;
  lab_0x4092e6:
    // 0x4092e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409124;
  lab_0x4093d5:;
    int64_t v99 = function_408a20(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4093f3
    // 0x40921e
    return v99 & 0xffffffff;
  lab_0x409276:;
    int32_t v100 = v55; // 0x409276
    if (v100 != (int32_t)v59) {
        // 0x40927a
        *(int32_t *)a7 = v100;
    }
    // 0x40921e
    return 0xffffffff;
  lab_0x40923a:
    // 0x40923a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409241
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40921e
    return v99 & 0xffffffff;
  lab_0x409380:
    // 0x409380
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4091b5;
  lab_0x409334:
    // 0x409334
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408a20(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40935a
    if ((int32_t)v101 != -1) {
        // 0x40921e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40936f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x409380;
}
// Address range: 0x409610 - 0x409666
int64_t function_409610(int64_t a1) {
    // 0x409610
    *(int32_t *)&g50 = g26;
    *(int32_t *)&g51 = g25;
    int64_t v1; // 0x409610
    int64_t result = function_409040(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x409636
    g26 = *(int32_t *)&g50;
    g55 = g53;
    *(int32_t *)&g24 = g52;
    return result;
}
// Address range: 0x409670 - 0x409688
int64_t function_409670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409670
    return function_409610(1);
}
// Address range: 0x409690 - 0x4096a3
int64_t function_409690(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x409690
    return function_409610(0);
}
// Address range: 0x4096b0 - 0x4096c5
int64_t function_4096b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4096b0
    return function_409040(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4096d0 - 0x4096e6
int64_t function_4096d0(void) {
    // 0x4096d0
    return function_409610(0);
}
// Address range: 0x4096f0 - 0x409708
int64_t function_4096f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4096f0
    return function_409040(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409710 - 0x40978a
int64_t function_409710(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40971b
    int64_t v2 = (int64_t)&g9; // 0x40971b
    int32_t * pwc; // 0x409710
    int64_t v3; // 0x409710
    int64_t n; // 0x409710
    if (a2 == 0) {
        goto lab_0x409762;
    } else {
        // 0x40971d
        if (a3 == 0) {
            // 0x409748
            return -2;
        }
        // 0x409729
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x409762;
        } else {
            goto lab_0x409734;
        }
    }
  lab_0x409762:
    // 0x409762
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409710
    pwc = (int32_t *)&v4;
    goto lab_0x409734;
  lab_0x409734:;
    char * wstr = (char *)v3; // 0x40973a
    int64_t ps; // 0x409710
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40973a
    int64_t result = v5; // 0x40973a
    if (v5 < 0xfffffffe) {
        // 0x409748
        return result;
    }
    int64_t result2 = result; // 0x409779
    if ((char)function_4097f0(0, v3) == 0) {
        // 0x40977b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409748
    return result2;
}
// Address range: 0x409790 - 0x4097ed
int64_t function_409790(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x409797
    int64_t v2; // 0x409790
    int64_t result = function_4086e0(a1, v2); // 0x4097a8
    if ((v2 & 32) != 0) {
        // 0x4097d0
        if ((int32_t)result == 0) {
            // 0x4097d4
            *__errno_location() = 0;
        }
        // 0x4097ca
        return 0xffffffff;
    }
    // 0x4097b1
    if ((int32_t)result == 0) {
        // 0x4097ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4097b8
    if (v1 == 0) {
        // 0x4097ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4097ca
    return result2;
}
// Address range: 0x4097f0 - 0x40984e
int64_t function_4097f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4097f6
    if (locale == NULL) {
        // 0x409823
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4097f6
    bool v2; // 0x4097f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x4097f0
    int64_t v5 = v1; // 0x4097f0
    int64_t v6 = 2; // 0x409815
    unsigned char v7 = *(char *)v5; // 0x409815
    char v8 = *(char *)v4; // 0x409815
    char v9 = v8; // 0x409815
    bool v10 = false; // 0x409815
    while (v7 == v8) {
        // 0x409808
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409821
    int64_t v13 = v1; // 0x409821
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409823
        return 0;
    }
    int64_t v14 = 6; // 0x409821
    unsigned char v15 = *(char *)v13; // 0x40983d
    char v16 = *(char *)v12; // 0x40983d
    char v17 = v16; // 0x40983d
    bool v18 = false; // 0x40983d
    while (v15 == v16) {
        // 0x409830
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
// Address range: 0x409850 - 0x409db2
int64_t function_409850(void) {
    char * v1 = nl_langinfo(14); // 0x409866
    char * v2 = g54; // 0x40986b
    char * v3; // 0x409850
    int64_t v4; // 0x409850
    int64_t v5; // 0x409850
    int64_t v6; // 0x409850
    int64_t v7; // 0x409850
    int32_t size; // 0x409850
    int32_t size2; // 0x409850
    int32_t len; // 0x409922
    int64_t v8; // 0x409922
    char * env_val; // 0x40990d
    if (v2 == NULL) {
        // 0x409908
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409975;
        } else {
            // 0x40991a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409975;
            } else {
                // 0x40991f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40990d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409da5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409975;
                    } else {
                        // 0x409d19
                        size2 = len + 14;
                        goto lab_0x40993b;
                    }
                } else {
                    goto lab_0x40993b;
                }
            }
        }
    } else {
        // 0x409850
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40988a;
    }
  lab_0x409bbc:;
    // 0x409bbc
    struct _IO_FILE * stream; // 0x4099fb
    int32_t v10 = __uflow(stream); // 0x409bbf
    int64_t v11; // 0x409850
    int64_t v12 = v11; // 0x409bc9
    int64_t v13; // 0x409850
    int64_t v14 = v13; // 0x409bc9
    int32_t v15 = v10; // 0x409bc9
    int64_t v16; // 0x409850
    int64_t v17 = v16; // 0x409bc9
    int64_t v18 = v11; // 0x409bc9
    int64_t v19 = v13; // 0x409bc9
    int64_t v20 = v16; // 0x409bc9
    if (v10 == -1) {
        // break -> 0x409bcf
        goto lab_0x409bcf;
    }
    goto lab_0x409a49;
  lab_0x409a3e:;
    // 0x409a3e
    int64_t v90; // 0x409850
    int64_t * v32; // 0x409a30
    *v32 = v90 + 1;
    int64_t v89; // 0x409850
    v12 = v89;
    int64_t v91; // 0x409850
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x409850
    v17 = v92;
    goto lab_0x409a49;
  lab_0x409a49:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x409850
    int32_t v25; // bp-120, 0x409850
    int32_t v26; // bp-184, 0x409850
    int64_t v27; // 0x4099fb
    int64_t v28; // 0x409a18
    int64_t v29; // 0x409a1d
    int64_t * v30; // 0x409a34
    switch (c) {
        case 32: {
            goto lab_0x409a30;
        }
        case 10: {
            goto lab_0x409a30;
        }
        case 9: {
            goto lab_0x409a30;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409c21
            int32_t v33; // 0x409850
            char v34; // 0x409850
            int32_t v35; // 0x409c2e
            if (v31 < *v30) {
                // 0x409c00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x409c2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409c21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409c00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x409c2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409c10
                v36 = v33;
            }
            // 0x409cff
            if (v36 == -1) {
                // break -> 0x409bcf
                break;
            }
            goto lab_0x409a30;
        }
        default: {
            // 0x409a5f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x409bcf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409a88
            int64_t v39 = v37 + 4; // 0x409a8a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409a96
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409a98
            while (v41 == 0) {
                // 0x409a88
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409ab6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409ac2
            int64_t v45 = v43 + 4; // 0x409ac4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409ad0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409ad2
            while (v47 == 0) {
                // 0x409ac2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x409abf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409ae8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409af8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x409afc
            int64_t v52 = v51 + v48; // 0x409b05
            int64_t * mem; // 0x409850
            int64_t v53; // 0x409850
            int64_t v54; // 0x409850
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x409c3b
                int64_t v56 = v55 + 3; // 0x409c47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409b21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409b30
            if (mem == NULL) {
                // 0x409d5c
                free((int64_t *)v21);
                function_4086e0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x4099d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409b48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409b52
            uint32_t v62 = (int32_t)v59; // 0x409b55
            int64_t v63; // 0x409850
            if (v62 >= 8) {
                // 0x409c64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x409c7e
                int64_t v66 = v61 - v65; // 0x409c82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x409c8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x409c9e
                    int64_t v70 = v69 & 0xffffffff; // 0x409c9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x409c9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x409d2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409b67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x409b6b
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
            int64_t v73 = v51 + 1; // 0x409b7b
            int64_t v74 = v60 - 1; // 0x409b7f
            uint32_t v75 = (int32_t)v73; // 0x409b84
            int64_t v76; // 0x409850
            if (v75 >= 8) {
                // 0x409cb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x409cbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x409ccc
                int64_t v80 = v74 - v79; // 0x409cd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x409cdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x409ceb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409ce9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409d46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x409d4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409b96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x409b9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409d93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x409bae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x409a3e;
            } else {
                goto lab_0x409bbc;
            }
        }
    }
  lab_0x409a30:;
    int64_t v93 = v23; // 0x409850
    int64_t v94 = v22; // 0x409850
    int64_t v95 = v21; // 0x409850
    goto lab_0x409a30_2;
  lab_0x409975:;
    int64_t * mem3 = malloc(size); // 0x409975
    int64_t v97 = (int64_t)&g9; // 0x409980
    int64_t v98; // 0x409850
    int64_t path; // 0x409850
    if (mem3 == NULL) {
        goto lab_0x409952;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409975
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x409996;
    }
  lab_0x40988a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40987d
    char v100 = *v3; // 0x40988a
    int64_t v101; // 0x409850
    if (v100 == 0) {
        // 0x4098e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x409850
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x409850
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4098d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4098d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4098a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4098ad
        char v107 = *(char *)v106; // 0x4098b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4098e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4098bb
    v104 = v103 + 1;
  lab_0x4098d7:
    // 0x4098e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409952:;
    char * v108 = (char *)v97;
    g54 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40988a;
  lab_0x409996:;
    int64_t v109 = v98 + path; // 0x409996
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4099c2
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x4099f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409d22
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x409a15
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409a30_2:;
                uint64_t v96 = *v32; // 0x409a30
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x409bbc;
                } else {
                    goto lab_0x409a3e;
                }
            }
          lab_0x409bcf:
            // 0x409bcf
            function_4086e0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x409bee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4099d4;
  lab_0x40993b:;
    int64_t * mem4 = malloc(size2); // 0x40993b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x4099e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x409996;
    } else {
        goto lab_0x409952;
    }
  lab_0x4099d4:
    // 0x4099d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409952;
}
// Address range: 0x409dc0 - 0x409e1d
int64_t function_409dc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409dc0
    return function_401538();
}
// Address range: 0x409e20 - 0x409e21
int64_t function_409e20(void) {
    // 0x409e20
    int64_t result; // 0x409e20
    return result;
}
// Address range: 0x409e30 - 0x409e48
int64_t function_409e30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409e30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x409e48 - 0x409e68
int64_t function_409e48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x409e52
    while (*(int64_t *)v1 != -1) {
        // 0x409e53
        v1 -= 8;
    }
    // 0x409e64
    return result;
}
