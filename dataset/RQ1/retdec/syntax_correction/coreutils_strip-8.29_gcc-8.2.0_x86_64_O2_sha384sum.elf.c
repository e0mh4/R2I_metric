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
    function_407930(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40b500(0x403080, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
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
        int32_t v8 = function_40ad60(v1, a2, "bctw", &g2, 0, v7);
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
                                function_4099e0((int64_t)g28, "sha384sum", "GNU coreutils", (int64_t)g17, "Ulrich Drepper", "Scott Miller");
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
    g40 = 98;
    g39 = 96;
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
        int64_t v54 = (int64_t)"SHA384"; // 0x401940
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
        int64_t v156 = function_4093d0(0, 3, v155); // 0x401dc6
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
        function_4093d0(0, 3, v155);
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
    int64_t v219; // bp-120, 0x401940
    char v220; // bp-201, 0x401940
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
    int64_t v298; // bp-296, 0x401940
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
    int64_t v160 = 0; // bp-200, 0x401cb1
    int64_t v161 = 0; // bp-192, 0x401cba
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
        function_4093d0(0, 3, v155);
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
            int64_t v355 = function_409db0(v154, v354); // 0x402451
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
    int64_t v361 = function_4093d0(0, 3, v360); // 0x402265
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
    fwrite_unlocked((int64_t *)"SHA384", 1, 6, stream);
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
        int64_t v430 = function_4093d0(0, 3, v155); // 0x4024ab
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
                    int64_t v437 = function_4093d0(0, 3, v155); // 0x4026d5
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
    int32_t v411 = *(int32_t *)0x60f29c; // 0x401bf0
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
                int64_t v316; // bp-184, 0x401940
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
                    int64_t v324 = function_407890(v313, (int64_t *)"r"); // 0x402248
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
    if (g41 == 0 || (int32_t)function_409db0((int64_t)g29, v31) != -1) {
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
        int64_t v14 = function_407890(a1, (int64_t *)"r"); // 0x402b6b
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
            error(0, *err_num, "%s", (char *)function_4093d0(0, 3, a1));
            // 0x402b4f
            return 0;
        }
        // 0x402b7c
        function_407860(v14, 2, v1);
        int64_t v15 = function_4076b0(v14, v2); // 0x402b8f
        v13 = v14;
        if ((int32_t)v15 == 0) {
            int64_t result2 = 1; // 0x402ba2
            if ((int32_t)function_409db0(v14, v2) != 0) {
                // 0x402ba4
                error(0, *__errno_location(), "%s", (char *)function_4093d0(0, 3, a1));
                result2 = 0;
            }
            // 0x402b4f
            return result2;
        }
    } else {
        int64_t v16 = (int64_t)g29; // 0x402b1b
        g41 = 1;
        function_407860(v16, 2, v1);
        int64_t v17 = function_4076b0(v16, v2); // 0x402b3c
        v13 = v16;
        if ((int32_t)v17 == 0) {
            // 0x402b4f
            return 1;
        }
    }
    int64_t v18 = function_4093d0(0, 3, a1); // 0x402bed
    uint32_t err_num2 = *__errno_location(); // 0x402c04
    error(0, err_num2, "%s", (char *)v18);
    if (v13 != (int64_t)g29) {
        // 0x402c1a
        function_409db0(v13, (int64_t)err_num2);
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
        int64_t v8 = (int64_t)"sha384sum";
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
    if ((int32_t)function_40ae60((int64_t)g28) == 0) {
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
    int64_t result = function_40ae60((int64_t)g31); // 0x4030b3
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
        error(0, *err_num, "%s: %s", (char *)function_4093a0((int64_t)g43), v1);
    }
    // 0x4030fe
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403120 - 0x4031a8
int64_t function_403120(int64_t a1) {
    // 0x403120
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)a1 = 0x6a09e667f3bcc908;
    *(int64_t *)(a1 + 8) = -0x4498517a7b3558c5;
    *(int64_t *)(a1 + 16) = 0x3c6ef372fe94f82b;
    *(int64_t *)(a1 + 24) = -0x5ab00ac5a0e2c90f;
    *(int64_t *)(a1 + 32) = 0x510e527fade682d1;
    *(int64_t *)(a1 + 40) = -0x64fa9773d4c193e1;
    *(int64_t *)(a1 + 48) = 0x1f83d9abfb41bd6b;
    *(int64_t *)(a1 + 56) = 0x5be0cd19137e2179;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 80) = 0;
    return 0x5be0cd19137e2179;
}
// Address range: 0x4031b0 - 0x403238
int64_t function_4031b0(int64_t a1) {
    // 0x4031b0
    *(int64_t *)(a1 + 72) = 0;
    *(int64_t *)a1 = -0x344462a23efa6128;
    *(int64_t *)(a1 + 8) = 0x629a292a367cd507;
    *(int64_t *)(a1 + 16) = -0x6ea6fea5cf8f22e9;
    *(int64_t *)(a1 + 24) = 0x152fecd8f70e5939;
    *(int64_t *)(a1 + 32) = 0x67332667ffc00b31;
    *(int64_t *)(a1 + 40) = -0x714bb57897a7eaef;
    *(int64_t *)(a1 + 48) = -0x24f3d1f29b067059;
    *(int64_t *)(a1 + 56) = 0x47b5481dbefa4fa4;
    *(int64_t *)(a1 + 64) = 0;
    *(int64_t *)(a1 + 80) = 0;
    return 0x47b5481dbefa4fa4;
}
// Address range: 0x403240 - 0x40325e
int64_t function_403240(int64_t a1, int64_t result, int64_t a3) {
    for (int64_t i = 0; i < 57; i += 8) {
        // 0x403248
        *(int64_t *)(i + result) = llvm_bswap_i64(*(int64_t *)(i + a1));
    }
    // 0x40325d
    return result;
}
// Address range: 0x403260 - 0x40327e
int64_t function_403260(int64_t a1, int64_t result, int64_t a3) {
    for (int64_t i = 0; i < 41; i += 8) {
        // 0x403268
        *(int64_t *)(i + result) = llvm_bswap_i64(*(int64_t *)(i + a1));
    }
    // 0x40327d
    return result;
}
// Address range: 0x403280 - 0x406ece
int64_t function_403280(uint64_t a1, uint64_t a2, int64_t result) {
    uint64_t v1 = (a2 & -8) + a1; // 0x403290
    int64_t * v2 = (int64_t *)(result + 64); // 0x4032a1
    uint64_t v3 = *v2 + a2; // 0x4032a1
    int64_t * v4 = (int64_t *)(result + 16); // 0x4032a5
    int64_t * v5 = (int64_t *)(result + 24); // 0x4032a9
    int64_t * v6 = (int64_t *)(result + 32); // 0x4032ad
    int64_t * v7 = (int64_t *)(result + 40); // 0x4032b6
    int64_t * v8 = (int64_t *)(result + 8); // 0x4032ba
    int64_t * v9 = (int64_t *)(result + 48); // 0x4032c3
    int64_t * v10 = (int64_t *)(result + 56); // 0x4032cf
    *v2 = v3;
    int64_t * v11 = (int64_t *)(result + 72); // 0x4032d7
    *v11 = *v11 + (int64_t)(v3 < a2);
    if (v1 <= a1) {
        // 0x406ebc
        return result;
    }
    int64_t v12 = a1; // 0x403360
    int64_t v13 = *v10; // 0x406e8a
    int64_t v14 = *v5; // 0x406e5f
    int64_t v15 = *v4; // 0x406e52
    int64_t v16; // 0x403280
    uint64_t v17 = v16;
    int64_t v18; // 0x403280
    uint64_t v19 = v18;
    int64_t v20; // 0x403280
    uint64_t v21 = v20;
    int64_t v22; // 0x403280
    uint64_t v23 = v22;
    int64_t v24; // 0x403280
    uint64_t v25 = v24;
    int64_t v26; // 0x403280
    uint64_t v27 = v26;
    int64_t v28; // 0x403280
    uint64_t v29 = v28;
    int64_t v30; // 0x403280
    uint64_t v31 = v30;
    int64_t v32; // 0x403280
    uint64_t v33 = v32;
    int64_t v34; // 0x403280
    uint64_t v35 = v34;
    int64_t v36; // 0x403280
    uint64_t v37 = v36;
    int64_t v38; // 0x403280
    uint64_t v39 = v38;
    int64_t v40; // 0x403280
    uint64_t v41 = v40;
    int64_t v42; // 0x403280
    uint64_t v43 = v42;
    int64_t v44; // 0x403280
    uint64_t v45 = v44;
    uint64_t v46 = *v6;
    uint64_t v47 = result;
    int64_t v48 = *v8;
    int64_t v49 = *v7;
    int64_t v50 = *v9;
    int64_t v51 = 0;
    int64_t v52 = llvm_bswap_i64(*(int64_t *)(v51 + v12)); // 0x403334
    int64_t v53; // bp-304, 0x403280
    *(int64_t *)((int64_t)&v53 + 120 + v51) = v52;
    int64_t v54 = v51 + 8; // 0x403347
    while (v51 != 120) {
        // 0x403330
        v51 = v54;
        v52 = llvm_bswap_i64(*(int64_t *)(v51 + v12));
        *(int64_t *)((int64_t)&v53 + 120 + v51) = v52;
        v54 = v51 + 8;
    }
    // 0x403349
    v12 += 128;
    int64_t v55; // 0x403280
    int64_t v56 = v13 + 0x428a2f98d728ae22 + v55 + (v46 & (v49 ^ v50) ^ v50) + ((v46 / 0x4000 | 0x4000000000000 * v46) ^ (v46 / 0x40000 | 0x400000000000 * v46) ^ (v46 / 0x20000000000 | 0x800000 * v46)); // 0x4033a0
    uint64_t v57 = v56 + v14; // 0x4033ab
    uint64_t v58 = ((v47 / 0x400000000 | 0x40000000 * v47) ^ (v47 / 0x10000000 | 0x1000000000 * v47) ^ (v47 / 0x8000000000 | 0x2000000 * v47)) + ((v47 | v48) & v15 | v47 & v48) + v56; // 0x4033d1
    int64_t v59 = v50 + 0x7137449123ef65cd + v45 + (v57 & (v46 ^ v49) ^ v49) + ((v57 / 0x40000 | 0x400000000000 * v57) ^ (v57 / 0x4000 | 0x4000000000000 * v57) ^ (v57 / 0x20000000000 | 0x800000 * v57)); // 0x40341d
    uint64_t v60 = v59 + v15; // 0x403429
    uint64_t v61 = ((v58 / 0x400000000 | 0x40000000 * v58) ^ (v58 / 0x10000000 | 0x1000000000 * v58) ^ (v58 / 0x8000000000 | 0x2000000 * v58)) + ((v58 | v47) & v48 | v58 & v47) + v59; // 0x403461
    int64_t v62 = v49 - 0x4a3f043013b2c4d1 + v43 + (v60 & (v57 ^ v46) ^ v46) + ((v60 / 0x40000 | 0x400000000000 * v60) ^ (v60 / 0x4000 | 0x4000000000000 * v60) ^ (v60 / 0x20000000000 | 0x800000 * v60)); // 0x40348c
    uint64_t v63 = v62 + v48; // 0x403496
    uint64_t v64 = ((v61 / 0x400000000 | 0x40000000 * v61) ^ (v61 / 0x10000000 | 0x1000000000 * v61) ^ (v61 / 0x8000000000 | 0x2000000 * v61)) + ((v61 | v58) & v47 | v61 & v58) + v62; // 0x4034d7
    int64_t v65 = v46 - 0x164a245a7e762444 + v41 + (v63 & (v60 ^ v57) ^ v57) + ((v63 / 0x40000 | 0x400000000000 * v63) ^ (v63 / 0x4000 | 0x4000000000000 * v63) ^ (v63 / 0x20000000000 | 0x800000 * v63)); // 0x403509
    uint64_t v66 = v65 + v47; // 0x403510
    uint64_t v67 = ((v64 / 0x400000000 | 0x40000000 * v64) ^ (v64 / 0x10000000 | 0x1000000000 * v64) ^ (v64 / 0x8000000000 | 0x2000000 * v64)) + ((v64 | v61) & v58 | v64 & v61) + v65; // 0x403543
    int64_t v68 = v39 + 0x3956c25bf348b538 + v57 + (v66 & (v63 ^ v60) ^ v60) + ((v66 / 0x40000 | 0x400000000000 * v66) ^ (v66 / 0x4000 | 0x4000000000000 * v66) ^ (v66 / 0x20000000000 | 0x800000 * v66)); // 0x40358d
    uint64_t v69 = v68 + v58; // 0x403596
    uint64_t v70 = ((v67 / 0x400000000 | 0x40000000 * v67) ^ (v67 / 0x10000000 | 0x1000000000 * v67) ^ (v67 / 0x8000000000 | 0x2000000 * v67)) + ((v67 | v64) & v61 | v67 & v64) + v68; // 0x4035b5
    int64_t v71 = v37 + 0x59f111f1b605d019 + v60 + (v69 & (v66 ^ v63) ^ v63) + ((v69 / 0x40000 | 0x400000000000 * v69) ^ (v69 / 0x4000 | 0x4000000000000 * v69) ^ (v69 / 0x20000000000 | 0x800000 * v69)); // 0x4035f4
    uint64_t v72 = v71 + v61; // 0x4035fe
    uint64_t v73 = ((v70 / 0x400000000 | 0x40000000 * v70) ^ (v70 / 0x10000000 | 0x1000000000 * v70) ^ (v70 / 0x8000000000 | 0x2000000 * v70)) + ((v70 | v67) & v64 | v70 & v67) + v71; // 0x403631
    int64_t v74 = v35 - 0x6dc07d5b50e6b065 + v63 + (v72 & (v69 ^ v66) ^ v66) + ((v72 / 0x40000 | 0x400000000000 * v72) ^ (v72 / 0x4000 | 0x4000000000000 * v72) ^ (v72 / 0x20000000000 | 0x800000 * v72)); // 0x403673
    uint64_t v75 = v74 + v64; // 0x403681
    uint64_t v76 = ((v73 / 0x400000000 | 0x40000000 * v73) ^ (v73 / 0x10000000 | 0x1000000000 * v73) ^ (v73 / 0x8000000000 | 0x2000000 * v73)) + ((v73 | v70) & v67 | v73 & v70) + v74; // 0x4036b5
    int64_t v77 = v33 - 0x54e3a12a25927ee8 + v66 + (v75 & (v72 ^ v69) ^ v69) + ((v75 / 0x40000 | 0x400000000000 * v75) ^ (v75 / 0x4000 | 0x4000000000000 * v75) ^ (v75 / 0x20000000000 | 0x800000 * v75)); // 0x4036eb
    uint64_t v78 = v77 + v67; // 0x4036f9
    uint64_t v79 = ((v76 / 0x400000000 | 0x40000000 * v76) ^ (v76 / 0x10000000 | 0x1000000000 * v76) ^ (v76 / 0x8000000000 | 0x2000000 * v76)) + ((v76 | v73) & v70 | v76 & v73) + v77; // 0x40372d
    int64_t v80 = v31 - 0x27f855675cfcfdbe + v69 + (v78 & (v75 ^ v72) ^ v72) + ((v78 / 0x40000 | 0x400000000000 * v78) ^ (v78 / 0x4000 | 0x4000000000000 * v78) ^ (v78 / 0x20000000000 | 0x800000 * v78)); // 0x403763
    uint64_t v81 = v80 + v70; // 0x403771
    uint64_t v82 = ((v79 / 0x400000000 | 0x40000000 * v79) ^ (v79 / 0x10000000 | 0x1000000000 * v79) ^ (v79 / 0x8000000000 | 0x2000000 * v79)) + ((v79 | v76) & v73 | v79 & v76) + v80; // 0x4037a5
    int64_t v83 = v29 + 0x12835b0145706fbe + v72 + (v81 & (v78 ^ v75) ^ v75) + ((v81 / 0x40000 | 0x400000000000 * v81) ^ (v81 / 0x4000 | 0x4000000000000 * v81) ^ (v81 / 0x20000000000 | 0x800000 * v81)); // 0x4037d8
    uint64_t v84 = v83 + v73; // 0x4037de
    uint64_t v85 = ((v82 / 0x400000000 | 0x40000000 * v82) ^ (v82 / 0x10000000 | 0x1000000000 * v82) ^ (v82 / 0x8000000000 | 0x2000000 * v82)) + ((v82 | v79) & v76 | v82 & v79) + v83; // 0x403811
    int64_t v86 = v27 + 0x243185be4ee4b28c + v75 + (v84 & (v81 ^ v78) ^ v78) + ((v84 / 0x40000 | 0x400000000000 * v84) ^ (v84 / 0x4000 | 0x4000000000000 * v84) ^ (v84 / 0x20000000000 | 0x800000 * v84)); // 0x40385a
    uint64_t v87 = v86 + v76; // 0x40386d
    uint64_t v88 = ((v85 / 0x400000000 | 0x40000000 * v85) ^ (v85 / 0x10000000 | 0x1000000000 * v85) ^ (v85 / 0x8000000000 | 0x2000000 * v85)) + ((v85 | v82) & v79 | v85 & v82) + v86; // 0x40389f
    int64_t v89 = v25 + 0x550c7dc3d5ffb4e2 + v78 + (v87 & (v84 ^ v81) ^ v81) + ((v87 / 0x40000 | 0x400000000000 * v87) ^ (v87 / 0x4000 | 0x4000000000000 * v87) ^ (v87 / 0x20000000000 | 0x800000 * v87)); // 0x4038ce
    uint64_t v90 = v89 + v79; // 0x4038dc
    uint64_t v91 = ((v88 / 0x400000000 | 0x40000000 * v88) ^ (v88 / 0x10000000 | 0x1000000000 * v88) ^ (v88 / 0x8000000000 | 0x2000000 * v88)) + ((v88 | v85) & v82 | v88 & v85) + v89; // 0x403910
    int64_t v92 = v23 + 0x72be5d74f27b896f + v81 + (v90 & (v87 ^ v84) ^ v84) + ((v90 / 0x40000 | 0x400000000000 * v90) ^ (v90 / 0x4000 | 0x4000000000000 * v90) ^ (v90 / 0x20000000000 | 0x800000 * v90)); // 0x403946
    uint64_t v93 = v92 + v82; // 0x403954
    uint64_t v94 = ((v91 / 0x400000000 | 0x40000000 * v91) ^ (v91 / 0x10000000 | 0x1000000000 * v91) ^ (v91 / 0x8000000000 | 0x2000000 * v91)) + ((v91 | v88) & v85 | v91 & v88) + v92; // 0x403994
    int64_t v95 = v19 - 0x7f214e01c4e9694f + v84 + (v93 & (v90 ^ v87) ^ v87) + ((v93 / 0x40000 | 0x400000000000 * v93) ^ (v93 / 0x4000 | 0x4000000000000 * v93) ^ (v93 / 0x20000000000 | 0x800000 * v93)); // 0x4039c4
    uint64_t v96 = v95 + v85; // 0x4039ce
    uint64_t v97 = ((v94 / 0x400000000 | 0x40000000 * v94) ^ (v94 / 0x10000000 | 0x1000000000 * v94) ^ (v94 / 0x8000000000 | 0x2000000 * v94)) + ((v94 | v91) & v88 | v94 & v91) + v95; // 0x403a10
    int64_t v98 = v17 - 0x6423f958da38edcb + v87 + (v96 & (v93 ^ v90) ^ v90) + ((v96 / 0x40000 | 0x400000000000 * v96) ^ (v96 / 0x4000 | 0x4000000000000 * v96) ^ (v96 / 0x20000000000 | 0x800000 * v96)); // 0x403a42
    uint64_t v99 = v98 + v88; // 0x403a50
    uint64_t v100 = ((v97 / 0x400000000 | 0x40000000 * v97) ^ (v97 / 0x10000000 | 0x1000000000 * v97) ^ (v97 / 0x8000000000 | 0x2000000 * v97)) + ((v97 | v94) & v91 | v97 & v94) + v98; // 0x403a84
    int64_t v101 = v21 - 0x3e640e8b3096d96c + v90 + (v99 & (v96 ^ v93) ^ v93) + ((v99 / 0x40000 | 0x400000000000 * v99) ^ (v99 / 0x4000 | 0x4000000000000 * v99) ^ (v99 / 0x20000000000 | 0x800000 * v99)); // 0x403aba
    uint64_t v102 = v101 + v91; // 0x403ac8
    uint64_t v103 = ((v100 / 0x400000000 | 0x40000000 * v100) ^ (v100 / 0x10000000 | 0x1000000000 * v100) ^ (v100 / 0x8000000000 | 0x2000000 * v100)) + ((v100 | v97) & v94 | v100 & v97) + v101; // 0x403af2
    uint64_t v104 = ((v45 / 2 | 0x8000000000000000 * v45) ^ v45 / 128 ^ (v45 / 256 | 0x100000000000000 * v45)) + v55 + v29 + ((v17 / 0x80000 | 0x200000000000 * v17) ^ v17 / 64 ^ (v17 / 0x2000000000000000 | 8 * v17)); // 0x403b61
    int64_t v105 = v104 - 0x1b64963e610eb52e + v93 + (v102 & (v99 ^ v96) ^ v96) + ((v102 / 0x40000 | 0x400000000000 * v102) ^ (v102 / 0x4000 | 0x4000000000000 * v102) ^ (v102 / 0x20000000000 | 0x800000 * v102)); // 0x403b97
    uint64_t v106 = v105 + v94; // 0x403ba5
    uint64_t v107 = ((v103 / 0x400000000 | 0x40000000 * v103) ^ (v103 / 0x10000000 | 0x1000000000 * v103) ^ (v103 / 0x8000000000 | 0x2000000 * v103)) + ((v103 | v100) & v97 | v103 & v100) + v105; // 0x403bcf
    uint64_t v108 = ((v43 / 2 | 0x8000000000000000 * v43) ^ v43 / 128 ^ (v43 / 256 | 0x100000000000000 * v43)) + v45 + v27 + ((v21 / 0x80000 | 0x200000000000 * v21) ^ v21 / 64 ^ (v21 / 0x2000000000000000 | 8 * v21)); // 0x403c2d
    int64_t v109 = v108 - 0x1041b879c7b0da1d + v96 + (v106 & (v102 ^ v99) ^ v99) + ((v106 / 0x40000 | 0x400000000000 * v106) ^ (v106 / 0x4000 | 0x4000000000000 * v106) ^ (v106 / 0x20000000000 | 0x800000 * v106)); // 0x403c63
    uint64_t v110 = v109 + v97; // 0x403c71
    uint64_t v111 = ((v107 / 0x400000000 | 0x40000000 * v107) ^ (v107 / 0x10000000 | 0x1000000000 * v107) ^ (v107 / 0x8000000000 | 0x2000000 * v107)) + ((v107 | v103) & v100 | v107 & v103) + v109; // 0x403c96
    uint64_t v112 = ((v41 / 2 | 0x8000000000000000 * v41) ^ v41 / 128 ^ (v41 / 256 | 0x100000000000000 * v41)) + v43 + v25 + ((v104 / 0x80000 | 0x200000000000 * v104) ^ v104 / 64 ^ (v104 / 0x2000000000000000 | 8 * v104)); // 0x403cf3
    int64_t v113 = v112 + 0xfc19dc68b8cd5b5 + v99 + (v110 & (v106 ^ v102) ^ v102) + ((v110 / 0x40000 | 0x400000000000 * v110) ^ (v110 / 0x4000 | 0x4000000000000 * v110) ^ (v110 / 0x20000000000 | 0x800000 * v110)); // 0x403d29
    uint64_t v114 = v113 + v100; // 0x403d37
    uint64_t v115 = ((v111 / 0x400000000 | 0x40000000 * v111) ^ (v111 / 0x10000000 | 0x1000000000 * v111) ^ (v111 / 0x8000000000 | 0x2000000 * v111)) + ((v111 | v107) & v103 | v111 & v107) + v113; // 0x403d71
    uint64_t v116 = ((v39 / 2 | 0x8000000000000000 * v39) ^ v39 / 128 ^ (v39 / 256 | 0x100000000000000 * v39)) + v41 + v23 + ((v108 / 0x80000 | 0x200000000000 * v108) ^ v108 / 64 ^ (v108 / 0x2000000000000000 | 8 * v108)); // 0x403db7
    int64_t v117 = v116 + 0x240ca1cc77ac9c65 + v102 + (v114 & (v110 ^ v106) ^ v106) + ((v114 / 0x40000 | 0x400000000000 * v114) ^ (v114 / 0x4000 | 0x4000000000000 * v114) ^ (v114 / 0x20000000000 | 0x800000 * v114)); // 0x403df4
    uint64_t v118 = v117 + v103; // 0x403dfe
    uint64_t v119 = ((v115 / 0x400000000 | 0x40000000 * v115) ^ (v115 / 0x10000000 | 0x1000000000 * v115) ^ (v115 / 0x8000000000 | 0x2000000 * v115)) + ((v115 | v111) & v107 | v115 & v111) + v117; // 0x403e33
    uint64_t v120 = ((v37 / 256 | 0x100000000000000 * v37) ^ v37 / 128 ^ (v37 / 2 | 0x8000000000000000 * v37)) + v39 + v19 + ((v112 / 0x80000 | 0x200000000000 * v112) ^ v112 / 64 ^ (v112 / 0x2000000000000000 | 8 * v112)); // 0x403e7e
    int64_t v121 = v120 + 0x2de92c6f592b0275 + v106 + (v118 & (v114 ^ v110) ^ v110) + ((v118 / 0x40000 | 0x400000000000 * v118) ^ (v118 / 0x4000 | 0x4000000000000 * v118) ^ (v118 / 0x20000000000 | 0x800000 * v118)); // 0x403ecb
    uint64_t v122 = v121 + v107; // 0x403ed9
    uint64_t v123 = ((v119 / 0x400000000 | 0x40000000 * v119) ^ (v119 / 0x10000000 | 0x1000000000 * v119) ^ (v119 / 0x8000000000 | 0x2000000 * v119)) + ((v119 | v115) & v111 | v119 & v115) + v121; // 0x403f00
    uint64_t v124 = ((v35 / 256 | 0x100000000000000 * v35) ^ v35 / 128 ^ (v35 / 2 | 0x8000000000000000 * v35)) + v37 + v17 + ((v116 / 0x80000 | 0x200000000000 * v116) ^ v116 / 64 ^ (v116 / 0x2000000000000000 | 8 * v116)); // 0x403f58
    int64_t v125 = v124 + 0x4a7484aa6ea6e483 + v110 + (v122 & (v118 ^ v114) ^ v114) + ((v122 / 0x40000 | 0x400000000000 * v122) ^ (v122 / 0x4000 | 0x4000000000000 * v122) ^ (v122 / 0x20000000000 | 0x800000 * v122)); // 0x403fa7
    uint64_t v126 = v125 + v111; // 0x403fb5
    uint64_t v127 = ((v123 / 0x400000000 | 0x40000000 * v123) ^ (v123 / 0x10000000 | 0x1000000000 * v123) ^ (v123 / 0x8000000000 | 0x2000000 * v123)) + ((v123 | v119) & v115 | v123 & v119) + v125; // 0x403fdc
    uint64_t v128 = ((v33 / 256 | 0x100000000000000 * v33) ^ v33 / 128 ^ (v33 / 2 | 0x8000000000000000 * v33)) + v35 + v21 + ((v120 / 0x80000 | 0x200000000000 * v120) ^ v120 / 64 ^ (v120 / 0x2000000000000000 | 8 * v120)); // 0x404035
    int64_t v129 = v128 + 0x5cb0a9dcbd41fbd4 + v114 + (v126 & (v122 ^ v118) ^ v118) + ((v126 / 0x40000 | 0x400000000000 * v126) ^ (v126 / 0x4000 | 0x4000000000000 * v126) ^ (v126 / 0x20000000000 | 0x800000 * v126)); // 0x40408c
    uint64_t v130 = v129 + v115; // 0x4040a2
    uint64_t v131 = ((v127 / 0x400000000 | 0x40000000 * v127) ^ (v127 / 0x10000000 | 0x1000000000 * v127) ^ (v127 / 0x8000000000 | 0x2000000 * v127)) + ((v127 | v123) & v119 | v127 & v123) + v129; // 0x4040c3
    uint64_t v132 = ((v31 / 2 | 0x8000000000000000 * v31) ^ v31 / 128 ^ (v31 / 256 | 0x100000000000000 * v31)) + v33 + v104 + ((v124 / 0x80000 | 0x200000000000 * v124) ^ v124 / 64 ^ (v124 / 0x2000000000000000 | 8 * v124)); // 0x404111
    int64_t v133 = v132 + 0x76f988da831153b5 + v118 + (v130 & (v126 ^ v122) ^ v122) + ((v130 / 0x40000 | 0x400000000000 * v130) ^ (v130 / 0x4000 | 0x4000000000000 * v130) ^ (v130 / 0x20000000000 | 0x800000 * v130)); // 0x404163
    uint64_t v134 = v133 + v119; // 0x40416d
    uint64_t v135 = ((v131 / 0x400000000 | 0x40000000 * v131) ^ (v131 / 0x10000000 | 0x1000000000 * v131) ^ (v131 / 0x8000000000 | 0x2000000 * v131)) + ((v131 | v127) & v123 | v131 & v127) + v133; // 0x404195
    uint64_t v136 = ((v29 / 2 | 0x8000000000000000 * v29) ^ v29 / 128 ^ (v29 / 256 | 0x100000000000000 * v29)) + v31 + v108 + ((v128 / 0x80000 | 0x200000000000 * v128) ^ v128 / 64 ^ (v128 / 0x2000000000000000 | 8 * v128)); // 0x4041f1
    int64_t v137 = v136 - 0x67c1aead11992055 + v122 + (v134 & (v130 ^ v126) ^ v126) + ((v134 / 0x40000 | 0x400000000000 * v134) ^ (v134 / 0x4000 | 0x4000000000000 * v134) ^ (v134 / 0x20000000000 | 0x800000 * v134)); // 0x40423c
    uint64_t v138 = v137 + v123; // 0x40424a
    uint64_t v139 = ((v135 / 0x400000000 | 0x40000000 * v135) ^ (v135 / 0x10000000 | 0x1000000000 * v135) ^ (v135 / 0x8000000000 | 0x2000000 * v135)) + ((v135 | v131) & v127 | v135 & v131) + v137; // 0x404269
    uint64_t v140 = ((v27 / 2 | 0x8000000000000000 * v27) ^ v27 / 128 ^ (v27 / 256 | 0x100000000000000 * v27)) + v29 + v112 + ((v132 / 0x80000 | 0x200000000000 * v132) ^ v132 / 64 ^ (v132 / 0x2000000000000000 | 8 * v132)); // 0x4042c5
    int64_t v141 = v140 - 0x57ce3992d24bcdf0 + v126 + (v138 & (v134 ^ v130) ^ v130) + ((v138 / 0x40000 | 0x400000000000 * v138) ^ (v138 / 0x4000 | 0x4000000000000 * v138) ^ (v138 / 0x20000000000 | 0x800000 * v138)); // 0x404310
    uint64_t v142 = v141 + v127; // 0x40431e
    uint64_t v143 = ((v139 / 0x400000000 | 0x40000000 * v139) ^ (v139 / 0x10000000 | 0x1000000000 * v139) ^ (v139 / 0x8000000000 | 0x2000000 * v139)) + ((v139 | v135) & v131 | v139 & v135) + v141; // 0x40433d
    uint64_t v144 = ((v25 / 2 | 0x8000000000000000 * v25) ^ v25 / 128 ^ (v25 / 256 | 0x100000000000000 * v25)) + v27 + v116 + ((v136 / 0x80000 | 0x200000000000 * v136) ^ v136 / 64 ^ (v136 / 0x2000000000000000 | 8 * v136)); // 0x404399
    int64_t v145 = v144 - 0x4ffcd8376704dec1 + v130 + (v142 & (v138 ^ v134) ^ v134) + ((v142 / 0x40000 | 0x400000000000 * v142) ^ (v142 / 0x4000 | 0x4000000000000 * v142) ^ (v142 / 0x20000000000 | 0x800000 * v142)); // 0x4043e1
    uint64_t v146 = v145 + v131; // 0x4043ef
    uint64_t v147 = ((v143 / 0x400000000 | 0x40000000 * v143) ^ (v143 / 0x10000000 | 0x1000000000 * v143) ^ (v143 / 0x8000000000 | 0x2000000 * v143)) + ((v143 | v139) & v135 | v143 & v139) + v145; // 0x404411
    uint64_t v148 = ((v23 / 2 | 0x8000000000000000 * v23) ^ v23 / 128 ^ (v23 / 256 | 0x100000000000000 * v23)) + v25 + v120 + ((v140 / 0x80000 | 0x200000000000 * v140) ^ v140 / 64 ^ (v140 / 0x2000000000000000 | 8 * v140)); // 0x404476
    int64_t v149 = v148 - 0x40a680384110f11c + v134 + (v146 & (v142 ^ v138) ^ v138) + ((v146 / 0x40000 | 0x400000000000 * v146) ^ (v146 / 0x4000 | 0x4000000000000 * v146) ^ (v146 / 0x20000000000 | 0x800000 * v146)); // 0x4044bf
    uint64_t v150 = v149 + v135; // 0x4044cc
    uint64_t v151 = ((v147 / 0x400000000 | 0x40000000 * v147) ^ (v147 / 0x10000000 | 0x1000000000 * v147) ^ (v147 / 0x8000000000 | 0x2000000 * v147)) + ((v147 | v143) & v139 | v147 & v143) + v149; // 0x4044f6
    uint64_t v152 = ((v19 / 2 | 0x8000000000000000 * v19) ^ v19 / 128 ^ (v19 / 256 | 0x100000000000000 * v19)) + v23 + v124 + ((v144 / 0x80000 | 0x200000000000 * v144) ^ v144 / 64 ^ (v144 / 0x2000000000000000 | 8 * v144)); // 0x40454c
    int64_t v153 = v152 - 0x391ff40cc257703e + v138 + (v150 & (v146 ^ v142) ^ v142) + ((v150 / 0x40000 | 0x400000000000 * v150) ^ (v150 / 0x4000 | 0x4000000000000 * v150) ^ (v150 / 0x20000000000 | 0x800000 * v150)); // 0x404591
    uint64_t v154 = v153 + v139; // 0x40459e
    uint64_t v155 = ((v151 / 0x400000000 | 0x40000000 * v151) ^ (v151 / 0x10000000 | 0x1000000000 * v151) ^ (v151 / 0x8000000000 | 0x2000000 * v151)) + ((v151 | v147) & v143 | v151 & v147) + v153; // 0x4045c7
    uint64_t v156 = ((v17 / 2 | 0x8000000000000000 * v17) ^ v17 / 128 ^ (v17 / 256 | 0x100000000000000 * v17)) + v19 + v128 + ((v148 / 0x80000 | 0x200000000000 * v148) ^ v148 / 64 ^ (v148 / 0x2000000000000000 | 8 * v148)); // 0x404622
    int64_t v157 = v156 - 0x2a586eb86cf558db + v142 + (v154 & (v150 ^ v146) ^ v146) + ((v154 / 0x40000 | 0x400000000000 * v154) ^ (v154 / 0x4000 | 0x4000000000000 * v154) ^ (v154 / 0x20000000000 | 0x800000 * v154)); // 0x40466d
    uint64_t v158 = v157 + v143; // 0x404677
    uint64_t v159 = ((v155 / 0x400000000 | 0x40000000 * v155) ^ (v155 / 0x10000000 | 0x1000000000 * v155) ^ (v155 / 0x8000000000 | 0x2000000 * v155)) + ((v155 | v151) & v147 | v155 & v151) + v157; // 0x4046a0
    uint64_t v160 = ((v21 / 2 | 0x8000000000000000 * v21) ^ v21 / 128 ^ (v21 / 256 | 0x100000000000000 * v21)) + v17 + v132 + ((v152 / 0x80000 | 0x200000000000 * v152) ^ v152 / 64 ^ (v152 / 0x2000000000000000 | 8 * v152)); // 0x4046fb
    int64_t v161 = v160 + 0x6ca6351e003826f + v146 + (v158 & (v154 ^ v150) ^ v150) + ((v158 / 0x40000 | 0x400000000000 * v158) ^ (v158 / 0x4000 | 0x4000000000000 * v158) ^ (v158 / 0x20000000000 | 0x800000 * v158)); // 0x40474f
    uint64_t v162 = v161 + v147; // 0x404756
    uint64_t v163 = ((v159 / 0x400000000 | 0x40000000 * v159) ^ (v159 / 0x10000000 | 0x1000000000 * v159) ^ (v159 / 0x8000000000 | 0x2000000 * v159)) + ((v159 | v155) & v151 | v159 & v155) + v161; // 0x404783
    uint64_t v164 = ((v104 / 2 | 0x8000000000000000 * v104) ^ v104 / 128 ^ (v104 / 256 | 0x100000000000000 * v104)) + v21 + v136 + ((v156 / 0x80000 | 0x200000000000 * v156) ^ v156 / 64 ^ (v156 / 0x2000000000000000 | 8 * v156)); // 0x4047cc
    int64_t v165 = v164 + 0x142929670a0e6e70 + v150 + (v162 & (v158 ^ v154) ^ v154) + ((v162 / 0x40000 | 0x400000000000 * v162) ^ (v162 / 0x4000 | 0x4000000000000 * v162) ^ (v162 / 0x20000000000 | 0x800000 * v162)); // 0x404817
    uint64_t v166 = v165 + v151; // 0x40481a
    uint64_t v167 = ((v163 / 0x400000000 | 0x40000000 * v163) ^ (v163 / 0x10000000 | 0x1000000000 * v163) ^ (v163 / 0x8000000000 | 0x2000000 * v163)) + ((v163 | v159) & v155 | v163 & v159) + v165; // 0x404856
    uint64_t v168 = ((v108 / 2 | 0x8000000000000000 * v108) ^ v108 / 128 ^ (v108 / 256 | 0x100000000000000 * v108)) + v104 + v140 + ((v160 / 0x80000 | 0x200000000000 * v160) ^ v160 / 64 ^ (v160 / 0x2000000000000000 | 8 * v160)); // 0x404896
    int64_t v169 = v168 + 0x27b70a8546d22ffc + v154 + (v166 & (v162 ^ v158) ^ v158) + ((v166 / 0x40000 | 0x400000000000 * v166) ^ (v166 / 0x4000 | 0x4000000000000 * v166) ^ (v166 / 0x20000000000 | 0x800000 * v166)); // 0x4048da
    uint64_t v170 = v169 + v155; // 0x4048e8
    uint64_t v171 = ((v167 / 0x400000000 | 0x40000000 * v167) ^ (v167 / 0x10000000 | 0x1000000000 * v167) ^ (v167 / 0x8000000000 | 0x2000000 * v167)) + ((v167 | v163) & v159 | v167 & v163) + v169; // 0x40490f
    uint64_t v172 = ((v112 / 2 | 0x8000000000000000 * v112) ^ v112 / 128 ^ (v112 / 256 | 0x100000000000000 * v112)) + v108 + v144 + ((v164 / 0x80000 | 0x200000000000 * v164) ^ v164 / 64 ^ (v164 / 0x2000000000000000 | 8 * v164)); // 0x40494f
    int64_t v173 = v172 + 0x2e1b21385c26c926 + v158 + (v170 & (v166 ^ v162) ^ v162) + ((v170 / 0x40000 | 0x400000000000 * v170) ^ (v170 / 0x4000 | 0x4000000000000 * v170) ^ (v170 / 0x20000000000 | 0x800000 * v170)); // 0x404993
    uint64_t v174 = v173 + v159; // 0x4049a1
    uint64_t v175 = ((v171 / 0x400000000 | 0x40000000 * v171) ^ (v171 / 0x10000000 | 0x1000000000 * v171) ^ (v171 / 0x8000000000 | 0x2000000 * v171)) + ((v171 | v167) & v163 | v171 & v167) + v173; // 0x4049c3
    uint64_t v176 = ((v116 / 2 | 0x8000000000000000 * v116) ^ v116 / 128 ^ (v116 / 256 | 0x100000000000000 * v116)) + v112 + v148 + ((v168 / 0x80000 | 0x200000000000 * v168) ^ v168 / 64 ^ (v168 / 0x2000000000000000 | 8 * v168)); // 0x404a07
    int64_t v177 = v176 + 0x4d2c6dfc5ac42aed + v162 + (v174 & (v170 ^ v166) ^ v166) + ((v174 / 0x40000 | 0x400000000000 * v174) ^ (v174 / 0x4000 | 0x4000000000000 * v174) ^ (v174 / 0x20000000000 | 0x800000 * v174)); // 0x404a53
    uint64_t v178 = v177 + v163; // 0x404a61
    uint64_t v179 = ((v175 / 0x400000000 | 0x40000000 * v175) ^ (v175 / 0x10000000 | 0x1000000000 * v175) ^ (v175 / 0x8000000000 | 0x2000000 * v175)) + ((v175 | v171) & v167 | v175 & v171) + v177; // 0x404a90
    uint64_t v180 = ((v120 / 2 | 0x8000000000000000 * v120) ^ v120 / 128 ^ (v120 / 256 | 0x100000000000000 * v120)) + v116 + v152 + ((v172 / 0x80000 | 0x200000000000 * v172) ^ v172 / 64 ^ (v172 / 0x2000000000000000 | 8 * v172)); // 0x404ac9
    int64_t v181 = v180 + 0x53380d139d95b3df + v166 + (v178 & (v174 ^ v170) ^ v170) + ((v178 / 0x40000 | 0x400000000000 * v178) ^ (v178 / 0x4000 | 0x4000000000000 * v178) ^ (v178 / 0x20000000000 | 0x800000 * v178)); // 0x404b14
    uint64_t v182 = v181 + v167; // 0x404b1e
    uint64_t v183 = ((v179 / 0x400000000 | 0x40000000 * v179) ^ (v179 / 0x10000000 | 0x1000000000 * v179) ^ (v179 / 0x8000000000 | 0x2000000 * v179)) + ((v179 | v175) & v171 | v179 & v175) + v181; // 0x404b53
    uint64_t v184 = ((v124 / 2 | 0x8000000000000000 * v124) ^ v124 / 128 ^ (v124 / 256 | 0x100000000000000 * v124)) + v120 + v156 + ((v176 / 0x80000 | 0x200000000000 * v176) ^ v176 / 64 ^ (v176 / 0x2000000000000000 | 8 * v176)); // 0x404b98
    int64_t v185 = v184 + 0x650a73548baf63de + v170 + (v182 & (v178 ^ v174) ^ v174) + ((v182 / 0x40000 | 0x400000000000 * v182) ^ (v182 / 0x4000 | 0x4000000000000 * v182) ^ (v182 / 0x20000000000 | 0x800000 * v182)); // 0x404be8
    uint64_t v186 = v185 + v171; // 0x404bf6
    uint64_t v187 = ((v183 / 0x400000000 | 0x40000000 * v183) ^ (v183 / 0x10000000 | 0x1000000000 * v183) ^ (v183 / 0x8000000000 | 0x2000000 * v183)) + ((v183 | v179) & v175 | v183 & v179) + v185; // 0x404c18
    uint64_t v188 = ((v128 / 2 | 0x8000000000000000 * v128) ^ v128 / 128 ^ (v128 / 256 | 0x100000000000000 * v128)) + v124 + v160 + ((v180 / 0x80000 | 0x200000000000 * v180) ^ v180 / 64 ^ (v180 / 0x2000000000000000 | 8 * v180)); // 0x404c5d
    int64_t v189 = v188 + 0x766a0abb3c77b2a8 + v174 + (v186 & (v182 ^ v178) ^ v178) + ((v186 / 0x40000 | 0x400000000000 * v186) ^ (v186 / 0x4000 | 0x4000000000000 * v186) ^ (v186 / 0x20000000000 | 0x800000 * v186)); // 0x404ca5
    uint64_t v190 = v189 + v175; // 0x404caf
    uint64_t v191 = ((v187 / 0x400000000 | 0x40000000 * v187) ^ (v187 / 0x10000000 | 0x1000000000 * v187) ^ (v187 / 0x8000000000 | 0x2000000 * v187)) + ((v187 | v183) & v179 | v187 & v183) + v189; // 0x404ce3
    uint64_t v192 = ((v132 / 2 | 0x8000000000000000 * v132) ^ v132 / 128 ^ (v132 / 256 | 0x100000000000000 * v132)) + v128 + v164 + ((v184 / 0x80000 | 0x200000000000 * v184) ^ v184 / 64 ^ (v184 / 0x2000000000000000 | 8 * v184)); // 0x404d30
    int64_t v193 = v192 - 0x7e3d36d1b812511a + v178 + (v190 & (v186 ^ v182) ^ v182) + ((v190 / 0x40000 | 0x400000000000 * v190) ^ (v190 / 0x4000 | 0x4000000000000 * v190) ^ (v190 / 0x20000000000 | 0x800000 * v190)); // 0x404d78
    uint64_t v194 = v193 + v179; // 0x404d82
    uint64_t v195 = ((v191 / 0x400000000 | 0x40000000 * v191) ^ (v191 / 0x10000000 | 0x1000000000 * v191) ^ (v191 / 0x8000000000 | 0x2000000 * v191)) + ((v191 | v187) & v183 | v191 & v187) + v193; // 0x404db7
    uint64_t v196 = ((v136 / 2 | 0x8000000000000000 * v136) ^ v136 / 128 ^ (v136 / 256 | 0x100000000000000 * v136)) + v132 + v168 + ((v188 / 0x80000 | 0x200000000000 * v188) ^ v188 / 64 ^ (v188 / 0x2000000000000000 | 8 * v188)); // 0x404de9
    int64_t v197 = v196 - 0x6d8dd37aeb7dcac5 + v182 + (v194 & (v190 ^ v186) ^ v186) + ((v194 / 0x40000 | 0x400000000000 * v194) ^ (v194 / 0x4000 | 0x4000000000000 * v194) ^ (v194 / 0x20000000000 | 0x800000 * v194)); // 0x404e34
    uint64_t v198 = v197 + v183; // 0x404e3b
    uint64_t v199 = ((v195 / 0x400000000 | 0x40000000 * v195) ^ (v195 / 0x10000000 | 0x1000000000 * v195) ^ (v195 / 0x8000000000 | 0x2000000 * v195)) + ((v195 | v191) & v187 | v195 & v191) + v197; // 0x404e6b
    uint64_t v200 = ((v140 / 2 | 0x8000000000000000 * v140) ^ v140 / 128 ^ (v140 / 256 | 0x100000000000000 * v140)) + v136 + v172 + ((v192 / 0x80000 | 0x200000000000 * v192) ^ v192 / 64 ^ (v192 / 0x2000000000000000 | 8 * v192)); // 0x404ebe
    int64_t v201 = v200 - 0x5d40175eb30efc9c + v186 + (v198 & (v194 ^ v190) ^ v190) + ((v198 / 0x40000 | 0x400000000000 * v198) ^ (v198 / 0x4000 | 0x4000000000000 * v198) ^ (v198 / 0x20000000000 | 0x800000 * v198)); // 0x404f01
    uint64_t v202 = v201 + v187; // 0x404f08
    uint64_t v203 = ((v199 / 0x400000000 | 0x40000000 * v199) ^ (v199 / 0x10000000 | 0x1000000000 * v199) ^ (v199 / 0x8000000000 | 0x2000000 * v199)) + ((v199 | v195) & v191 | v199 & v195) + v201; // 0x404f34
    uint64_t v204 = ((v144 / 2 | 0x8000000000000000 * v144) ^ v144 / 128 ^ (v144 / 256 | 0x100000000000000 * v144)) + v140 + v176 + ((v196 / 0x80000 | 0x200000000000 * v196) ^ v196 / 64 ^ (v196 / 0x2000000000000000 | 8 * v196)); // 0x404f89
    int64_t v205 = v204 - 0x57e599b443bdcfff + v190 + (v202 & (v198 ^ v194) ^ v194) + ((v202 / 0x40000 | 0x400000000000 * v202) ^ (v202 / 0x4000 | 0x4000000000000 * v202) ^ (v202 / 0x20000000000 | 0x800000 * v202)); // 0x404fd0
    uint64_t v206 = v205 + v191; // 0x404fdc
    uint64_t v207 = ((v203 / 0x400000000 | 0x40000000 * v203) ^ (v203 / 0x10000000 | 0x1000000000 * v203) ^ (v203 / 0x8000000000 | 0x2000000 * v203)) + ((v203 | v199) & v195 | v203 & v199) + v205; // 0x40500f
    uint64_t v208 = ((v148 / 2 | 0x8000000000000000 * v148) ^ v148 / 128 ^ (v148 / 256 | 0x100000000000000 * v148)) + v144 + v180 + ((v200 / 0x80000 | 0x200000000000 * v200) ^ v200 / 64 ^ (v200 / 0x2000000000000000 | 8 * v200)); // 0x405055
    int64_t v209 = v208 - 0x3db4748f2f07686f + v194 + (v206 & (v202 ^ v198) ^ v198) + ((v206 / 0x40000 | 0x400000000000 * v206) ^ (v206 / 0x4000 | 0x4000000000000 * v206) ^ (v206 / 0x20000000000 | 0x800000 * v206)); // 0x405098
    uint64_t v210 = v209 + v195; // 0x4050a2
    uint64_t v211 = ((v207 / 0x400000000 | 0x40000000 * v207) ^ (v207 / 0x10000000 | 0x1000000000 * v207) ^ (v207 / 0x8000000000 | 0x2000000 * v207)) + ((v207 | v203) & v199 | v207 & v203) + v209; // 0x4050d7
    uint64_t v212 = ((v152 / 2 | 0x8000000000000000 * v152) ^ v152 / 128 ^ (v152 / 256 | 0x100000000000000 * v152)) + v148 + v184 + ((v204 / 0x80000 | 0x200000000000 * v204) ^ v204 / 64 ^ (v204 / 0x2000000000000000 | 8 * v204)); // 0x405126
    int64_t v213 = v212 - 0x3893ae5cf9ab41d0 + v198 + (v210 & (v206 ^ v202) ^ v202) + ((v210 / 0x40000 | 0x400000000000 * v210) ^ (v210 / 0x4000 | 0x4000000000000 * v210) ^ (v210 / 0x20000000000 | 0x800000 * v210)); // 0x40516f
    uint64_t v214 = v213 + v199; // 0x405178
    uint64_t v215 = ((v211 / 0x400000000 | 0x40000000 * v211) ^ (v211 / 0x10000000 | 0x1000000000 * v211) ^ (v211 / 0x8000000000 | 0x2000000 * v211)) + ((v211 | v207) & v203 | v211 & v207) + v213; // 0x4051a7
    uint64_t v216 = ((v156 / 2 | 0x8000000000000000 * v156) ^ v156 / 128 ^ (v156 / 256 | 0x100000000000000 * v156)) + v152 + v188 + ((v208 / 0x80000 | 0x200000000000 * v208) ^ v208 / 64 ^ (v208 / 0x2000000000000000 | 8 * v208)); // 0x405204
    int64_t v217 = v216 - 0x2e6d17e62910ade8 + v202 + (v214 & (v210 ^ v206) ^ v206) + ((v214 / 0x40000 | 0x400000000000 * v214) ^ (v214 / 0x4000 | 0x4000000000000 * v214) ^ (v214 / 0x20000000000 | 0x800000 * v214)); // 0x40524c
    uint64_t v218 = v217 + v203; // 0x40525a
    uint64_t v219 = ((v215 / 0x400000000 | 0x40000000 * v215) ^ (v215 / 0x10000000 | 0x1000000000 * v215) ^ (v215 / 0x8000000000 | 0x2000000 * v215)) + ((v215 | v211) & v207 | v215 & v211) + v217; // 0x405288
    uint64_t v220 = ((v160 / 2 | 0x8000000000000000 * v160) ^ v160 / 128 ^ (v160 / 256 | 0x100000000000000 * v160)) + v156 + v192 + ((v212 / 0x80000 | 0x200000000000 * v212) ^ v212 / 64 ^ (v212 / 0x2000000000000000 | 8 * v212)); // 0x4052c4
    int64_t v221 = v220 - 0x2966f9dbaa9a56f0 + v206 + (v218 & (v214 ^ v210) ^ v210) + ((v218 / 0x40000 | 0x400000000000 * v218) ^ (v218 / 0x4000 | 0x4000000000000 * v218) ^ (v218 / 0x20000000000 | 0x800000 * v218)); // 0x40530f
    uint64_t v222 = v221 + v207; // 0x405315
    uint64_t v223 = ((v219 / 0x400000000 | 0x40000000 * v219) ^ (v219 / 0x10000000 | 0x1000000000 * v219) ^ (v219 / 0x8000000000 | 0x2000000 * v219)) + ((v219 | v215) & v211 | v219 & v215) + v221; // 0x40534a
    uint64_t v224 = ((v164 / 2 | 0x8000000000000000 * v164) ^ v164 / 128 ^ (v164 / 256 | 0x100000000000000 * v164)) + v160 + v196 + ((v216 / 0x80000 | 0x200000000000 * v216) ^ v216 / 64 ^ (v216 / 0x2000000000000000 | 8 * v216)); // 0x40538f
    int64_t v225 = v224 - 0xbf1ca7aa88edfd6 + v210 + (v222 & (v218 ^ v214) ^ v214) + ((v222 / 0x40000 | 0x400000000000 * v222) ^ (v222 / 0x4000 | 0x4000000000000 * v222) ^ (v222 / 0x20000000000 | 0x800000 * v222)); // 0x4053da
    uint64_t v226 = v225 + v211; // 0x4053e4
    uint64_t v227 = ((v223 / 0x400000000 | 0x40000000 * v223) ^ (v223 / 0x10000000 | 0x1000000000 * v223) ^ (v223 / 0x8000000000 | 0x2000000 * v223)) + ((v223 | v219) & v215 | v223 & v219) + v225; // 0x40540d
    uint64_t v228 = ((v168 / 2 | 0x8000000000000000 * v168) ^ v168 / 128 ^ (v168 / 256 | 0x100000000000000 * v168)) + v164 + v200 + ((v220 / 0x80000 | 0x200000000000 * v220) ^ v220 / 64 ^ (v220 / 0x2000000000000000 | 8 * v220)); // 0x405455
    int64_t v229 = v228 + 0x106aa07032bbd1b8 + v214 + (v226 & (v222 ^ v218) ^ v218) + ((v226 / 0x40000 | 0x400000000000 * v226) ^ (v226 / 0x4000 | 0x4000000000000 * v226) ^ (v226 / 0x20000000000 | 0x800000 * v226)); // 0x4054a7
    uint64_t v230 = v229 + v215; // 0x4054b0
    uint64_t v231 = ((v227 / 0x400000000 | 0x40000000 * v227) ^ (v227 / 0x10000000 | 0x1000000000 * v227) ^ (v227 / 0x8000000000 | 0x2000000 * v227)) + ((v227 | v223) & v219 | v227 & v223) + v229; // 0x4054da
    uint64_t v232 = ((v172 / 2 | 0x8000000000000000 * v172) ^ v172 / 128 ^ (v172 / 256 | 0x100000000000000 * v172)) + v168 + v204 + ((v224 / 0x80000 | 0x200000000000 * v224) ^ v224 / 64 ^ (v224 / 0x2000000000000000 | 8 * v224)); // 0x40551a
    int64_t v233 = v232 + 0x19a4c116b8d2d0c8 + v218 + (v230 & (v226 ^ v222) ^ v222) + ((v230 / 0x40000 | 0x400000000000 * v230) ^ (v230 / 0x4000 | 0x4000000000000 * v230) ^ (v230 / 0x20000000000 | 0x800000 * v230)); // 0x405562
    uint64_t v234 = v233 + v219; // 0x405572
    uint64_t v235 = ((v231 / 0x400000000 | 0x40000000 * v231) ^ (v231 / 0x10000000 | 0x1000000000 * v231) ^ (v231 / 0x8000000000 | 0x2000000 * v231)) + ((v231 | v227) & v223 | v231 & v227) + v233; // 0x40559f
    uint64_t v236 = ((v176 / 2 | 0x8000000000000000 * v176) ^ v176 / 128 ^ (v176 / 256 | 0x100000000000000 * v176)) + v172 + v208 + ((v228 / 0x80000 | 0x200000000000 * v228) ^ v228 / 64 ^ (v228 / 0x2000000000000000 | 8 * v228)); // 0x4055e1
    int64_t v237 = v236 + 0x1e376c085141ab53 + v222 + (v234 & (v230 ^ v226) ^ v226) + ((v234 / 0x40000 | 0x400000000000 * v234) ^ (v234 / 0x4000 | 0x4000000000000 * v234) ^ (v234 / 0x20000000000 | 0x800000 * v234)); // 0x40562c
    uint64_t v238 = v237 + v223; // 0x40563a
    uint64_t v239 = ((v235 / 0x400000000 | 0x40000000 * v235) ^ (v235 / 0x10000000 | 0x1000000000 * v235) ^ (v235 / 0x8000000000 | 0x2000000 * v235)) + ((v235 | v231) & v227 | v235 & v231) + v237; // 0x405668
    uint64_t v240 = ((v180 / 2 | 0x8000000000000000 * v180) ^ v180 / 128 ^ (v180 / 256 | 0x100000000000000 * v180)) + v176 + v212 + ((v232 / 0x80000 | 0x200000000000 * v232) ^ v232 / 64 ^ (v232 / 0x2000000000000000 | 8 * v232)); // 0x4056b0
    int64_t v241 = v240 + 0x2748774cdf8eeb99 + v226 + (v238 & (v234 ^ v230) ^ v230) + ((v238 / 0x40000 | 0x400000000000 * v238) ^ (v238 / 0x4000 | 0x4000000000000 * v238) ^ (v238 / 0x20000000000 | 0x800000 * v238)); // 0x4056fd
    uint64_t v242 = v241 + v227; // 0x405707
    uint64_t v243 = ((v239 / 0x400000000 | 0x40000000 * v239) ^ (v239 / 0x10000000 | 0x1000000000 * v239) ^ (v239 / 0x8000000000 | 0x2000000 * v239)) + ((v239 | v235) & v231 | v239 & v235) + v241; // 0x40573d
    uint64_t v244 = ((v184 / 2 | 0x8000000000000000 * v184) ^ v184 / 128 ^ (v184 / 256 | 0x100000000000000 * v184)) + v180 + v216 + ((v236 / 0x80000 | 0x200000000000 * v236) ^ v236 / 64 ^ (v236 / 0x2000000000000000 | 8 * v236)); // 0x40577b
    int64_t v245 = v244 + 0x34b0bcb5e19b48a8 + v230 + (v242 & (v238 ^ v234) ^ v234) + ((v242 / 0x40000 | 0x400000000000 * v242) ^ (v242 / 0x4000 | 0x4000000000000 * v242) ^ (v242 / 0x20000000000 | 0x800000 * v242)); // 0x4057be
    uint64_t v246 = v245 + v231; // 0x4057c8
    uint64_t v247 = ((v243 / 0x400000000 | 0x40000000 * v243) ^ (v243 / 0x10000000 | 0x1000000000 * v243) ^ (v243 / 0x8000000000 | 0x2000000 * v243)) + ((v243 | v239) & v235 | v243 & v239) + v245; // 0x4057f7
    uint64_t v248 = ((v188 / 2 | 0x8000000000000000 * v188) ^ v188 / 128 ^ (v188 / 256 | 0x100000000000000 * v188)) + v184 + v220 + ((v240 / 0x80000 | 0x200000000000 * v240) ^ v240 / 64 ^ (v240 / 0x2000000000000000 | 8 * v240)); // 0x40583c
    int64_t v249 = v248 + 0x391c0cb3c5c95a63 + v234 + (v246 & (v242 ^ v238) ^ v238) + ((v246 / 0x40000 | 0x400000000000 * v246) ^ (v246 / 0x4000 | 0x4000000000000 * v246) ^ (v246 / 0x20000000000 | 0x800000 * v246)); // 0x40588c
    uint64_t v250 = v249 + v235; // 0x405896
    uint64_t v251 = ((v247 / 0x400000000 | 0x40000000 * v247) ^ (v247 / 0x10000000 | 0x1000000000 * v247) ^ (v247 / 0x8000000000 | 0x2000000 * v247)) + ((v247 | v243) & v239 | v247 & v243) + v249; // 0x4058c2
    uint64_t v252 = ((v192 / 2 | 0x8000000000000000 * v192) ^ v192 / 128 ^ (v192 / 256 | 0x100000000000000 * v192)) + v188 + v224 + ((v244 / 0x80000 | 0x200000000000 * v244) ^ v244 / 64 ^ (v244 / 0x2000000000000000 | 8 * v244)); // 0x40590c
    int64_t v253 = v252 + 0x4ed8aa4ae3418acb + v238 + (v250 & (v246 ^ v242) ^ v242) + ((v250 / 0x40000 | 0x400000000000 * v250) ^ (v250 / 0x4000 | 0x4000000000000 * v250) ^ (v250 / 0x20000000000 | 0x800000 * v250)); // 0x405952
    uint64_t v254 = v253 + v239; // 0x40595c
    uint64_t v255 = ((v251 / 0x400000000 | 0x40000000 * v251) ^ (v251 / 0x10000000 | 0x1000000000 * v251) ^ (v251 / 0x8000000000 | 0x2000000 * v251)) + ((v251 | v247) & v243 | v251 & v247) + v253; // 0x405988
    uint64_t v256 = ((v196 / 2 | 0x8000000000000000 * v196) ^ v196 / 128 ^ (v196 / 256 | 0x100000000000000 * v196)) + v192 + v228 + ((v248 / 0x80000 | 0x200000000000 * v248) ^ v248 / 64 ^ (v248 / 0x2000000000000000 | 8 * v248)); // 0x4059cd
    int64_t v257 = v256 + 0x5b9cca4f7763e373 + v242 + (v254 & (v250 ^ v246) ^ v246) + ((v254 / 0x40000 | 0x400000000000 * v254) ^ (v254 / 0x4000 | 0x4000000000000 * v254) ^ (v254 / 0x20000000000 | 0x800000 * v254)); // 0x405a1a
    uint64_t v258 = v257 + v243; // 0x405a24
    uint64_t v259 = ((v255 / 0x400000000 | 0x40000000 * v255) ^ (v255 / 0x10000000 | 0x1000000000 * v255) ^ (v255 / 0x8000000000 | 0x2000000 * v255)) + ((v255 | v251) & v247 | v255 & v251) + v257; // 0x405a50
    uint64_t v260 = ((v200 / 2 | 0x8000000000000000 * v200) ^ v200 / 128 ^ (v200 / 256 | 0x100000000000000 * v200)) + v196 + v232 + ((v252 / 0x80000 | 0x200000000000 * v252) ^ v252 / 64 ^ (v252 / 0x2000000000000000 | 8 * v252)); // 0x405aa5
    int64_t v261 = v260 + 0x682e6ff3d6b2b8a3 + v246 + (v258 & (v254 ^ v250) ^ v250) + ((v258 / 0x40000 | 0x400000000000 * v258) ^ (v258 / 0x4000 | 0x4000000000000 * v258) ^ (v258 / 0x20000000000 | 0x800000 * v258)); // 0x405ade
    uint64_t v262 = v261 + v247; // 0x405ae8
    v53 = v260;
    uint64_t v263 = ((v259 / 0x400000000 | 0x40000000 * v259) ^ (v259 / 0x10000000 | 0x1000000000 * v259) ^ (v259 / 0x8000000000 | 0x2000000 * v259)) + ((v259 | v255) & v251 | v259 & v255) + v261; // 0x405b19
    uint64_t v264 = ((v204 / 2 | 0x8000000000000000 * v204) ^ v204 / 128 ^ (v204 / 256 | 0x100000000000000 * v204)) + v200 + v236 + ((v256 / 0x80000 | 0x200000000000 * v256) ^ v256 / 64 ^ (v256 / 0x2000000000000000 | 8 * v256)); // 0x405b64
    int64_t v265 = v264 + 0x748f82ee5defb2fc + v250 + (v262 & (v258 ^ v254) ^ v254) + ((v262 / 0x40000 | 0x400000000000 * v262) ^ (v262 / 0x4000 | 0x4000000000000 * v262) ^ (v262 / 0x20000000000 | 0x800000 * v262)); // 0x405bb2
    uint64_t v266 = v265 + v251; // 0x405bc0
    uint64_t v267 = ((v263 / 0x400000000 | 0x40000000 * v263) ^ (v263 / 0x10000000 | 0x1000000000 * v263) ^ (v263 / 0x8000000000 | 0x2000000 * v263)) + ((v263 | v259) & v255 | v263 & v259) + v265; // 0x405be5
    uint64_t v268 = ((v208 / 2 | 0x8000000000000000 * v208) ^ v208 / 128 ^ (v208 / 256 | 0x100000000000000 * v208)) + v204 + v240 + ((v260 / 0x80000 | 0x200000000000 * v260) ^ v260 / 64 ^ (v260 / 0x2000000000000000 | 8 * v260)); // 0x405c29
    int64_t v269 = v268 + 0x78a5636f43172f60 + v254 + (v266 & (v262 ^ v258) ^ v258) + ((v266 / 0x40000 | 0x400000000000 * v266) ^ (v266 / 0x4000 | 0x4000000000000 * v266) ^ (v266 / 0x20000000000 | 0x800000 * v266)); // 0x405c87
    uint64_t v270 = v269 + v255; // 0x405c91
    uint64_t v271 = ((v267 / 0x400000000 | 0x40000000 * v267) ^ (v267 / 0x10000000 | 0x1000000000 * v267) ^ (v267 / 0x8000000000 | 0x2000000 * v267)) + ((v267 | v263) & v259 | v267 & v263) + v269; // 0x405cbc
    uint64_t v272 = ((v212 / 2 | 0x8000000000000000 * v212) ^ v212 / 128 ^ (v212 / 256 | 0x100000000000000 * v212)) + v208 + v244 + ((v264 / 0x80000 | 0x200000000000 * v264) ^ v264 / 64 ^ (v264 / 0x2000000000000000 | 8 * v264)); // 0x405d0e
    int64_t v273 = v272 - 0x7b3787eb5e0f548e + v258 + (v270 & (v266 ^ v262) ^ v262) + ((v270 / 0x40000 | 0x400000000000 * v270) ^ (v270 / 0x4000 | 0x4000000000000 * v270) ^ (v270 / 0x20000000000 | 0x800000 * v270)); // 0x405d4d
    uint64_t v274 = v273 + v259; // 0x405d57
    uint64_t v275 = ((v271 / 0x400000000 | 0x40000000 * v271) ^ (v271 / 0x10000000 | 0x1000000000 * v271) ^ (v271 / 0x8000000000 | 0x2000000 * v271)) + ((v271 | v267) & v263 | v271 & v267) + v273; // 0x405d80
    uint64_t v276 = ((v216 / 2 | 0x8000000000000000 * v216) ^ v216 / 128 ^ (v216 / 256 | 0x100000000000000 * v216)) + v212 + v248 + ((v268 / 0x80000 | 0x200000000000 * v268) ^ v268 / 64 ^ (v268 / 0x2000000000000000 | 8 * v268)); // 0x405dca
    int64_t v277 = v276 - 0x7338fdf7e59bc614 + v262 + (v274 & (v270 ^ v266) ^ v266) + ((v274 / 0x40000 | 0x400000000000 * v274) ^ (v274 / 0x4000 | 0x4000000000000 * v274) ^ (v274 / 0x20000000000 | 0x800000 * v274)); // 0x405e28
    uint64_t v278 = v277 + v263; // 0x405e2f
    uint64_t v279 = ((v275 / 0x400000000 | 0x40000000 * v275) ^ (v275 / 0x10000000 | 0x1000000000 * v275) ^ (v275 / 0x8000000000 | 0x2000000 * v275)) + ((v275 | v271) & v267 | v275 & v271) + v277; // 0x405e5d
    uint64_t v280 = ((v220 / 2 | 0x8000000000000000 * v220) ^ v220 / 128 ^ (v220 / 256 | 0x100000000000000 * v220)) + v216 + v252 + ((v272 / 0x80000 | 0x200000000000 * v272) ^ v272 / 64 ^ (v272 / 0x2000000000000000 | 8 * v272)); // 0x405ea8
    int64_t v281 = v280 - 0x6f410005dc9ce1d8 + v266 + (v278 & (v274 ^ v270) ^ v270) + ((v278 / 0x40000 | 0x400000000000 * v278) ^ (v278 / 0x4000 | 0x4000000000000 * v278) ^ (v278 / 0x20000000000 | 0x800000 * v278)); // 0x405ef0
    uint64_t v282 = v281 + v267; // 0x405efa
    uint64_t v283 = ((v279 / 0x400000000 | 0x40000000 * v279) ^ (v279 / 0x10000000 | 0x1000000000 * v279) ^ (v279 / 0x8000000000 | 0x2000000 * v279)) + ((v279 | v275) & v271 | v279 & v275) + v281; // 0x405f32
    uint64_t v284 = ((v224 / 2 | 0x8000000000000000 * v224) ^ v224 / 128 ^ (v224 / 256 | 0x100000000000000 * v224)) + v220 + v256 + ((v276 / 0x80000 | 0x200000000000 * v276) ^ v276 / 64 ^ (v276 / 0x2000000000000000 | 8 * v276)); // 0x405f74
    int64_t v285 = v284 - 0x5baf9314217d4217 + v270 + (v282 & (v278 ^ v274) ^ v274) + ((v282 / 0x40000 | 0x400000000000 * v282) ^ (v282 / 0x4000 | 0x4000000000000 * v282) ^ (v282 / 0x20000000000 | 0x800000 * v282)); // 0x405fbc
    uint64_t v286 = v285 + v271; // 0x405fc6
    uint64_t v287 = ((v283 / 0x400000000 | 0x40000000 * v283) ^ (v283 / 0x10000000 | 0x1000000000 * v283) ^ (v283 / 0x8000000000 | 0x2000000 * v283)) + ((v283 | v279) & v275 | v283 & v279) + v285; // 0x405ffe
    uint64_t v288 = ((v228 / 2 | 0x8000000000000000 * v228) ^ v228 / 128 ^ (v228 / 256 | 0x100000000000000 * v228)) + v224 + v260 + ((v280 / 0x80000 | 0x200000000000 * v280) ^ v280 / 64 ^ (v280 / 0x2000000000000000 | 8 * v280)); // 0x406049
    int64_t v289 = v288 - 0x41065c084d3986eb + v274 + (v286 & (v282 ^ v278) ^ v278) + ((v286 / 0x40000 | 0x400000000000 * v286) ^ (v286 / 0x4000 | 0x4000000000000 * v286) ^ (v286 / 0x20000000000 | 0x800000 * v286)); // 0x406093
    uint64_t v290 = v289 + v275; // 0x40609c
    uint64_t v291 = ((v287 / 0x400000000 | 0x40000000 * v287) ^ (v287 / 0x10000000 | 0x1000000000 * v287) ^ (v287 / 0x8000000000 | 0x2000000 * v287)) + ((v287 | v283) & v279 | v287 & v283) + v289; // 0x4060c1
    uint64_t v292 = ((v232 / 2 | 0x8000000000000000 * v232) ^ v232 / 128 ^ (v232 / 256 | 0x100000000000000 * v232)) + v228 + v264 + ((v284 / 0x80000 | 0x200000000000 * v284) ^ v284 / 64 ^ (v284 / 0x2000000000000000 | 8 * v284)); // 0x406104
    int64_t v293 = v292 - 0x398e870d1c8dacd5 + v278 + (v290 & (v286 ^ v282) ^ v282) + ((v290 / 0x40000 | 0x400000000000 * v290) ^ (v290 / 0x4000 | 0x4000000000000 * v290) ^ (v290 / 0x20000000000 | 0x800000 * v290)); // 0x406161
    uint64_t v294 = v293 + v279; // 0x40616a
    uint64_t v295 = ((v291 / 0x400000000 | 0x40000000 * v291) ^ (v291 / 0x10000000 | 0x1000000000 * v291) ^ (v291 / 0x8000000000 | 0x2000000 * v291)) + ((v291 | v287) & v283 | v291 & v287) + v293; // 0x40618c
    uint64_t v296 = ((v236 / 2 | 0x8000000000000000 * v236) ^ v236 / 128 ^ (v236 / 256 | 0x100000000000000 * v236)) + v232 + v268 + ((v288 / 0x80000 | 0x200000000000 * v288) ^ v288 / 64 ^ (v288 / 0x2000000000000000 | 8 * v288)); // 0x4061d3
    int64_t v297 = v296 - 0x35d8c13115d99e64 + v282 + (v294 & (v290 ^ v286) ^ v286) + ((v294 / 0x40000 | 0x400000000000 * v294) ^ (v294 / 0x4000 | 0x4000000000000 * v294) ^ (v294 / 0x20000000000 | 0x800000 * v294)); // 0x406228
    uint64_t v298 = v297 + v283; // 0x406236
    uint64_t v299 = ((v295 / 0x400000000 | 0x40000000 * v295) ^ (v295 / 0x10000000 | 0x1000000000 * v295) ^ (v295 / 0x8000000000 | 0x2000000 * v295)) + ((v295 | v291) & v287 | v295 & v291) + v297; // 0x406258
    uint64_t v300 = ((v240 / 2 | 0x8000000000000000 * v240) ^ v240 / 128 ^ (v240 / 256 | 0x100000000000000 * v240)) + v236 + v272 + ((v292 / 0x80000 | 0x200000000000 * v292) ^ v292 / 64 ^ (v292 / 0x2000000000000000 | 8 * v292)); // 0x4062b0
    int64_t v301 = v300 - 0x2e794738de3f3df9 + v286 + (v298 & (v294 ^ v290) ^ v290) + ((v298 / 0x40000 | 0x400000000000 * v298) ^ (v298 / 0x4000 | 0x4000000000000 * v298) ^ (v298 / 0x20000000000 | 0x800000 * v298)); // 0x4062e4
    uint64_t v302 = v301 + v287; // 0x4062ee
    uint64_t v303 = ((v299 / 0x400000000 | 0x40000000 * v299) ^ (v299 / 0x10000000 | 0x1000000000 * v299) ^ (v299 / 0x8000000000 | 0x2000000 * v299)) + ((v299 | v295) & v291 | v299 & v295) + v301; // 0x406333
    uint64_t v304 = ((v244 / 2 | 0x8000000000000000 * v244) ^ v244 / 128 ^ (v244 / 256 | 0x100000000000000 * v244)) + v240 + v276 + ((v296 / 0x80000 | 0x200000000000 * v296) ^ v296 / 64 ^ (v296 / 0x2000000000000000 | 8 * v296)); // 0x40637a
    int64_t v305 = v304 - 0x15258229321f14e2 + v290 + (v302 & (v298 ^ v294) ^ v294) + ((v302 / 0x40000 | 0x400000000000 * v302) ^ (v302 / 0x4000 | 0x4000000000000 * v302) ^ (v302 / 0x20000000000 | 0x800000 * v302)); // 0x4063b8
    uint64_t v306 = v305 + v291; // 0x4063bb
    uint64_t v307 = ((v303 / 0x400000000 | 0x40000000 * v303) ^ (v303 / 0x10000000 | 0x1000000000 * v303) ^ (v303 / 0x8000000000 | 0x2000000 * v303)) + ((v303 | v299) & v295 | v303 & v299) + v305; // 0x4063fe
    uint64_t v308 = ((v248 / 2 | 0x8000000000000000 * v248) ^ v248 / 128 ^ (v248 / 256 | 0x100000000000000 * v248)) + v244 + v280 + ((v300 / 0x80000 | 0x200000000000 * v300) ^ v300 / 64 ^ (v300 / 0x2000000000000000 | 8 * v300)); // 0x40643c
    int64_t v309 = v308 - 0xa82b08011912e88 + v294 + (v306 & (v302 ^ v298) ^ v298) + ((v306 / 0x40000 | 0x400000000000 * v306) ^ (v306 / 0x4000 | 0x4000000000000 * v306) ^ (v306 / 0x20000000000 | 0x800000 * v306)); // 0x406493
    uint64_t v310 = v309 + v295; // 0x40649c
    uint64_t v311 = ((v307 / 0x400000000 | 0x40000000 * v307) ^ (v307 / 0x10000000 | 0x1000000000 * v307) ^ (v307 / 0x8000000000 | 0x2000000 * v307)) + ((v307 | v303) & v299 | v307 & v303) + v309; // 0x4064c6
    uint64_t v312 = ((v252 / 2 | 0x8000000000000000 * v252) ^ v252 / 128 ^ (v252 / 256 | 0x100000000000000 * v252)) + v248 + v284 + ((v304 / 0x80000 | 0x200000000000 * v304) ^ v304 / 64 ^ (v304 / 0x2000000000000000 | 8 * v304)); // 0x406517
    int64_t v313 = v312 + 0x6f067aa72176fba + v298 + (v310 & (v306 ^ v302) ^ v302) + ((v310 / 0x40000 | 0x400000000000 * v310) ^ (v310 / 0x4000 | 0x4000000000000 * v310) ^ (v310 / 0x20000000000 | 0x800000 * v310)); // 0x406558
    uint64_t v314 = v313 + v299; // 0x406566
    uint64_t v315 = ((v311 / 0x400000000 | 0x40000000 * v311) ^ (v311 / 0x10000000 | 0x1000000000 * v311) ^ (v311 / 0x8000000000 | 0x2000000 * v311)) + ((v311 | v307) & v303 | v311 & v307) + v313; // 0x40658a
    uint64_t v316 = ((v256 / 2 | 0x8000000000000000 * v256) ^ v256 / 128 ^ (v256 / 256 | 0x100000000000000 * v256)) + v252 + v288 + ((v308 / 0x80000 | 0x200000000000 * v308) ^ v308 / 64 ^ (v308 / 0x2000000000000000 | 8 * v308)); // 0x4065cc
    int64_t v317 = v316 + 0xa637dc5a2c898a6 + v302 + (v314 & (v310 ^ v306) ^ v306) + ((v314 / 0x40000 | 0x400000000000 * v314) ^ (v314 / 0x4000 | 0x4000000000000 * v314) ^ (v314 / 0x20000000000 | 0x800000 * v314)); // 0x406626
    uint64_t v318 = v317 + v303; // 0x406634
    uint64_t v319 = ((v315 / 0x400000000 | 0x40000000 * v315) ^ (v315 / 0x10000000 | 0x1000000000 * v315) ^ (v315 / 0x8000000000 | 0x2000000 * v315)) + ((v315 | v311) & v307 | v315 & v311) + v317; // 0x406657
    uint64_t v320 = ((v260 / 2 | 0x8000000000000000 * v260) ^ v260 / 128 ^ (v260 / 256 | 0x100000000000000 * v260)) + v256 + v292 + ((v312 / 0x80000 | 0x200000000000 * v312) ^ v312 / 64 ^ (v312 / 0x2000000000000000 | 8 * v312)); // 0x4066a3
    int64_t v321 = v320 + 0x113f9804bef90dae + v306 + (v318 & (v314 ^ v310) ^ v310) + ((v318 / 0x40000 | 0x400000000000 * v318) ^ (v318 / 0x4000 | 0x4000000000000 * v318) ^ (v318 / 0x20000000000 | 0x800000 * v318)); // 0x4066f5
    uint64_t v322 = v321 + v307; // 0x40670b
    uint64_t v323 = ((v319 / 0x400000000 | 0x40000000 * v319) ^ (v319 / 0x10000000 | 0x1000000000 * v319) ^ (v319 / 0x8000000000 | 0x2000000 * v319)) + ((v319 | v315) & v311 | v319 & v315) + v321; // 0x406729
    uint64_t v324 = ((v264 / 2 | 0x8000000000000000 * v264) ^ v264 / 128 ^ (v264 / 256 | 0x100000000000000 * v264)) + v260 + v296 + ((v316 / 0x80000 | 0x200000000000 * v316) ^ v316 / 64 ^ (v316 / 0x2000000000000000 | 8 * v316)); // 0x40676e
    int64_t v325 = v324 + 0x1b710b35131c471b + v310 + (v322 & (v318 ^ v314) ^ v314) + ((v322 / 0x40000 | 0x400000000000 * v322) ^ (v322 / 0x4000 | 0x4000000000000 * v322) ^ (v322 / 0x20000000000 | 0x800000 * v322)); // 0x4067c1
    uint64_t v326 = v325 + v311; // 0x4067c8
    uint64_t v327 = ((v323 / 0x400000000 | 0x40000000 * v323) ^ (v323 / 0x10000000 | 0x1000000000 * v323) ^ (v323 / 0x8000000000 | 0x2000000 * v323)) + ((v323 | v319) & v315 | v323 & v319) + v325; // 0x406800
    uint64_t v328 = ((v268 / 2 | 0x8000000000000000 * v268) ^ v268 / 128 ^ (v268 / 256 | 0x100000000000000 * v268)) + v264 + v300 + ((v320 / 0x80000 | 0x200000000000 * v320) ^ v320 / 64 ^ (v320 / 0x2000000000000000 | 8 * v320)); // 0x40684f
    int64_t v329 = v328 + 0x28db77f523047d84 + v314 + (v326 & (v322 ^ v318) ^ v318) + ((v326 / 0x40000 | 0x400000000000 * v326) ^ (v326 / 0x4000 | 0x4000000000000 * v326) ^ (v326 / 0x20000000000 | 0x800000 * v326)); // 0x40689b
    uint64_t v330 = v329 + v315; // 0x4068a9
    uint64_t v331 = ((v327 / 0x400000000 | 0x40000000 * v327) ^ (v327 / 0x10000000 | 0x1000000000 * v327) ^ (v327 / 0x8000000000 | 0x2000000 * v327)) + ((v327 | v323) & v319 | v327 & v323) + v329; // 0x4068cd
    uint64_t v332 = ((v272 / 2 | 0x8000000000000000 * v272) ^ v272 / 128 ^ (v272 / 256 | 0x100000000000000 * v272)) + v268 + v304 + ((v324 / 0x80000 | 0x200000000000 * v324) ^ v324 / 64 ^ (v324 / 0x2000000000000000 | 8 * v324)); // 0x40691c
    int64_t v333 = v332 + 0x32caab7b40c72493 + v318 + (v330 & (v326 ^ v322) ^ v322) + ((v330 / 0x40000 | 0x400000000000 * v330) ^ (v330 / 0x4000 | 0x4000000000000 * v330) ^ (v330 / 0x20000000000 | 0x800000 * v330)); // 0x406961
    uint64_t v334 = v333 + v319; // 0x40696f
    uint64_t v335 = ((v331 / 0x400000000 | 0x40000000 * v331) ^ (v331 / 0x10000000 | 0x1000000000 * v331) ^ (v331 / 0x8000000000 | 0x2000000 * v331)) + ((v331 | v327) & v323 | v331 & v327) + v333; // 0x406996
    uint64_t v336 = ((v276 / 2 | 0x8000000000000000 * v276) ^ v276 / 128 ^ (v276 / 256 | 0x100000000000000 * v276)) + v272 + v308 + ((v328 / 0x80000 | 0x200000000000 * v328) ^ v328 / 64 ^ (v328 / 0x2000000000000000 | 8 * v328)); // 0x4069e3
    int64_t v337 = v336 + 0x3c9ebe0a15c9bebc + v322 + (v334 & (v330 ^ v326) ^ v326) + ((v334 / 0x40000 | 0x400000000000 * v334) ^ (v334 / 0x4000 | 0x4000000000000 * v334) ^ (v334 / 0x20000000000 | 0x800000 * v334)); // 0x406a22
    uint64_t v338 = v337 + v323; // 0x406a2c
    uint64_t v339 = ((v335 / 0x400000000 | 0x40000000 * v335) ^ (v335 / 0x10000000 | 0x1000000000 * v335) ^ (v335 / 0x8000000000 | 0x2000000 * v335)) + ((v335 | v331) & v327 | v335 & v331) + v337; // 0x406a5d
    uint64_t v340 = ((v280 / 2 | 0x8000000000000000 * v280) ^ v280 / 128 ^ (v280 / 256 | 0x100000000000000 * v280)) + v276 + v312 + ((v332 / 0x80000 | 0x200000000000 * v332) ^ v332 / 64 ^ (v332 / 0x2000000000000000 | 8 * v332)); // 0x406aaa
    int64_t v341 = v340 + 0x431d67c49c100d4c + v326 + (v338 & (v334 ^ v330) ^ v330) + ((v338 / 0x40000 | 0x400000000000 * v338) ^ (v338 / 0x4000 | 0x4000000000000 * v338) ^ (v338 / 0x20000000000 | 0x800000 * v338)); // 0x406aeb
    uint64_t v342 = v341 + v327; // 0x406af5
    uint64_t v343 = ((v339 / 0x400000000 | 0x40000000 * v339) ^ (v339 / 0x10000000 | 0x1000000000 * v339) ^ (v339 / 0x8000000000 | 0x2000000 * v339)) + ((v339 | v335) & v331 | v339 & v335) + v341; // 0x406b23
    uint64_t v344 = ((v284 / 2 | 0x8000000000000000 * v284) ^ v284 / 128 ^ (v284 / 256 | 0x100000000000000 * v284)) + v280 + v316 + ((v336 / 0x80000 | 0x200000000000 * v336) ^ v336 / 64 ^ (v336 / 0x2000000000000000 | 8 * v336)); // 0x406b6d
    int64_t v345 = v344 + 0x4cc5d4becb3e42b6 + v330 + (v342 & (v338 ^ v334) ^ v334) + ((v342 / 0x40000 | 0x400000000000 * v342) ^ (v342 / 0x4000 | 0x4000000000000 * v342) ^ (v342 / 0x20000000000 | 0x800000 * v342)); // 0x406bb5
    uint64_t v346 = v345 + v331; // 0x406bbf
    uint64_t v347 = ((v343 / 0x400000000 | 0x40000000 * v343) ^ (v343 / 0x10000000 | 0x1000000000 * v343) ^ (v343 / 0x8000000000 | 0x2000000 * v343)) + ((v343 | v339) & v335 | v343 & v339) + v345; // 0x406bf3
    uint64_t v348 = ((v288 / 2 | 0x8000000000000000 * v288) ^ v288 / 128 ^ (v288 / 256 | 0x100000000000000 * v288)) + v284 + v320 + ((v340 / 0x80000 | 0x200000000000 * v340) ^ v340 / 64 ^ (v340 / 0x2000000000000000 | 8 * v340)); // 0x406c3e
    int64_t v349 = v348 + 0x597f299cfc657e2a + v334 + (v346 & (v342 ^ v338) ^ v338) + ((v346 / 0x40000 | 0x400000000000 * v346) ^ (v346 / 0x4000 | 0x4000000000000 * v346) ^ (v346 / 0x20000000000 | 0x800000 * v346)); // 0x406c7f
    uint64_t v350 = v349 + v335; // 0x406c8d
    uint64_t v351 = ((v347 / 0x400000000 | 0x40000000 * v347) ^ (v347 / 0x10000000 | 0x1000000000 * v347) ^ (v347 / 0x8000000000 | 0x2000000 * v347)) + ((v347 | v343) & v339 | v347 & v343) + v349; // 0x406cb1
    int64_t v352 = ((v292 / 2 | 0x8000000000000000 * v292) ^ v292 / 128 ^ (v292 / 256 | 0x100000000000000 * v292)) + v288 + v324 + ((v344 / 0x80000 | 0x200000000000 * v344) ^ v344 / 64 ^ (v344 / 0x2000000000000000 | 8 * v344)); // 0x406d07
    int64_t v353 = v352 + 0x5fcb6fab3ad6faec + v338 + (v350 & (v346 ^ v342) ^ v342) + ((v350 / 0x40000 | 0x400000000000 * v350) ^ (v350 / 0x4000 | 0x4000000000000 * v350) ^ (v350 / 0x20000000000 | 0x800000 * v350)); // 0x406d45
    uint64_t v354 = v353 + v339; // 0x406d53
    uint64_t v355 = ((v351 / 0x400000000 | 0x40000000 * v351) ^ (v351 / 0x10000000 | 0x1000000000 * v351) ^ (v351 / 0x8000000000 | 0x2000000 * v351)) + ((v351 | v347) & v343 | v351 & v347) + v353; // 0x406d78
    int64_t v356 = v355 + v48; // 0x406da8
    int64_t v357 = ((v296 / 2 | 0x8000000000000000 * v296) ^ v296 / 128 ^ (v296 / 256 | 0x100000000000000 * v296)) + v292 + v328 + ((v348 / 0x80000 | 0x200000000000 * v348) ^ v348 / 64 ^ (v348 / 0x2000000000000000 | 8 * v348)); // 0x406dcd
    int64_t v358 = v357 + 0x6c44198c4a475817 + v342 + (v354 & (v350 ^ v346) ^ v346) + ((v354 / 0x40000 | 0x400000000000 * v354) ^ (v354 / 0x4000 | 0x4000000000000 * v354) ^ (v354 / 0x20000000000 | 0x800000 * v354)); // 0x406e13
    int64_t result2 = ((v355 | v351) & v347 | v355 & v351) + v47 + ((v355 / 0x400000000 | 0x40000000 * v355) ^ (v355 / 0x10000000 | 0x1000000000 * v355) ^ (v355 / 0x8000000000 | 0x2000000 * v355)) + v358; // 0x406e37
    *(int64_t *)result = result2;
    *v8 = v356;
    v15 += v351;
    v14 += v347;
    int64_t v359 = v343 + v46 + v358; // 0x406e69
    int64_t v360 = v354 + v49; // 0x406e76
    int64_t v361 = v350 + v50; // 0x406e80
    v13 += v346;
    *v4 = v15;
    *v5 = v14;
    *v6 = v359;
    *v7 = v360;
    *v9 = v361;
    *v10 = v13;
    while (v12 < v1) {
        // 0x403320
        v17 = v352;
        v19 = v348;
        v21 = v357;
        v23 = v344;
        v25 = v340;
        v27 = v336;
        v29 = v332;
        v31 = v328;
        v33 = v324;
        v35 = v320;
        v37 = v316;
        v39 = v312;
        v41 = v308;
        v43 = v304;
        v45 = v300;
        v46 = v359;
        v47 = result2;
        v48 = v356;
        v49 = v360;
        v50 = v361;
        v51 = 0;
        v52 = llvm_bswap_i64(*(int64_t *)(v51 + v12));
        *(int64_t *)((int64_t)&v53 + 120 + v51) = v52;
        v54 = v51 + 8;
        while (v51 != 120) {
            // 0x403330
            v51 = v54;
            v52 = llvm_bswap_i64(*(int64_t *)(v51 + v12));
            *(int64_t *)((int64_t)&v53 + 120 + v51) = v52;
            v54 = v51 + 8;
        }
        // 0x403349
        v12 += 128;
        v56 = v13 + 0x428a2f98d728ae22 + v296 + (v46 & (v49 ^ v50) ^ v50) + ((v46 / 0x4000 | 0x4000000000000 * v46) ^ (v46 / 0x40000 | 0x400000000000 * v46) ^ (v46 / 0x20000000000 | 0x800000 * v46));
        v57 = v56 + v14;
        v58 = ((v47 / 0x400000000 | 0x40000000 * v47) ^ (v47 / 0x10000000 | 0x1000000000 * v47) ^ (v47 / 0x8000000000 | 0x2000000 * v47)) + ((v47 | v48) & v15 | v47 & v48) + v56;
        v59 = v50 + 0x7137449123ef65cd + v45 + (v57 & (v46 ^ v49) ^ v49) + ((v57 / 0x40000 | 0x400000000000 * v57) ^ (v57 / 0x4000 | 0x4000000000000 * v57) ^ (v57 / 0x20000000000 | 0x800000 * v57));
        v60 = v59 + v15;
        v61 = ((v58 / 0x400000000 | 0x40000000 * v58) ^ (v58 / 0x10000000 | 0x1000000000 * v58) ^ (v58 / 0x8000000000 | 0x2000000 * v58)) + ((v58 | v47) & v48 | v58 & v47) + v59;
        v62 = v49 - 0x4a3f043013b2c4d1 + v43 + (v60 & (v57 ^ v46) ^ v46) + ((v60 / 0x40000 | 0x400000000000 * v60) ^ (v60 / 0x4000 | 0x4000000000000 * v60) ^ (v60 / 0x20000000000 | 0x800000 * v60));
        v63 = v62 + v48;
        v64 = ((v61 / 0x400000000 | 0x40000000 * v61) ^ (v61 / 0x10000000 | 0x1000000000 * v61) ^ (v61 / 0x8000000000 | 0x2000000 * v61)) + ((v61 | v58) & v47 | v61 & v58) + v62;
        v65 = v46 - 0x164a245a7e762444 + v41 + (v63 & (v60 ^ v57) ^ v57) + ((v63 / 0x40000 | 0x400000000000 * v63) ^ (v63 / 0x4000 | 0x4000000000000 * v63) ^ (v63 / 0x20000000000 | 0x800000 * v63));
        v66 = v65 + v47;
        v67 = ((v64 / 0x400000000 | 0x40000000 * v64) ^ (v64 / 0x10000000 | 0x1000000000 * v64) ^ (v64 / 0x8000000000 | 0x2000000 * v64)) + ((v64 | v61) & v58 | v64 & v61) + v65;
        v68 = v39 + 0x3956c25bf348b538 + v57 + (v66 & (v63 ^ v60) ^ v60) + ((v66 / 0x40000 | 0x400000000000 * v66) ^ (v66 / 0x4000 | 0x4000000000000 * v66) ^ (v66 / 0x20000000000 | 0x800000 * v66));
        v69 = v68 + v58;
        v70 = ((v67 / 0x400000000 | 0x40000000 * v67) ^ (v67 / 0x10000000 | 0x1000000000 * v67) ^ (v67 / 0x8000000000 | 0x2000000 * v67)) + ((v67 | v64) & v61 | v67 & v64) + v68;
        v71 = v37 + 0x59f111f1b605d019 + v60 + (v69 & (v66 ^ v63) ^ v63) + ((v69 / 0x40000 | 0x400000000000 * v69) ^ (v69 / 0x4000 | 0x4000000000000 * v69) ^ (v69 / 0x20000000000 | 0x800000 * v69));
        v72 = v71 + v61;
        v73 = ((v70 / 0x400000000 | 0x40000000 * v70) ^ (v70 / 0x10000000 | 0x1000000000 * v70) ^ (v70 / 0x8000000000 | 0x2000000 * v70)) + ((v70 | v67) & v64 | v70 & v67) + v71;
        v74 = v35 - 0x6dc07d5b50e6b065 + v63 + (v72 & (v69 ^ v66) ^ v66) + ((v72 / 0x40000 | 0x400000000000 * v72) ^ (v72 / 0x4000 | 0x4000000000000 * v72) ^ (v72 / 0x20000000000 | 0x800000 * v72));
        v75 = v74 + v64;
        v76 = ((v73 / 0x400000000 | 0x40000000 * v73) ^ (v73 / 0x10000000 | 0x1000000000 * v73) ^ (v73 / 0x8000000000 | 0x2000000 * v73)) + ((v73 | v70) & v67 | v73 & v70) + v74;
        v77 = v33 - 0x54e3a12a25927ee8 + v66 + (v75 & (v72 ^ v69) ^ v69) + ((v75 / 0x40000 | 0x400000000000 * v75) ^ (v75 / 0x4000 | 0x4000000000000 * v75) ^ (v75 / 0x20000000000 | 0x800000 * v75));
        v78 = v77 + v67;
        v79 = ((v76 / 0x400000000 | 0x40000000 * v76) ^ (v76 / 0x10000000 | 0x1000000000 * v76) ^ (v76 / 0x8000000000 | 0x2000000 * v76)) + ((v76 | v73) & v70 | v76 & v73) + v77;
        v80 = v31 - 0x27f855675cfcfdbe + v69 + (v78 & (v75 ^ v72) ^ v72) + ((v78 / 0x40000 | 0x400000000000 * v78) ^ (v78 / 0x4000 | 0x4000000000000 * v78) ^ (v78 / 0x20000000000 | 0x800000 * v78));
        v81 = v80 + v70;
        v82 = ((v79 / 0x400000000 | 0x40000000 * v79) ^ (v79 / 0x10000000 | 0x1000000000 * v79) ^ (v79 / 0x8000000000 | 0x2000000 * v79)) + ((v79 | v76) & v73 | v79 & v76) + v80;
        v83 = v29 + 0x12835b0145706fbe + v72 + (v81 & (v78 ^ v75) ^ v75) + ((v81 / 0x40000 | 0x400000000000 * v81) ^ (v81 / 0x4000 | 0x4000000000000 * v81) ^ (v81 / 0x20000000000 | 0x800000 * v81));
        v84 = v83 + v73;
        v85 = ((v82 / 0x400000000 | 0x40000000 * v82) ^ (v82 / 0x10000000 | 0x1000000000 * v82) ^ (v82 / 0x8000000000 | 0x2000000 * v82)) + ((v82 | v79) & v76 | v82 & v79) + v83;
        v86 = v27 + 0x243185be4ee4b28c + v75 + (v84 & (v81 ^ v78) ^ v78) + ((v84 / 0x40000 | 0x400000000000 * v84) ^ (v84 / 0x4000 | 0x4000000000000 * v84) ^ (v84 / 0x20000000000 | 0x800000 * v84));
        v87 = v86 + v76;
        v88 = ((v85 / 0x400000000 | 0x40000000 * v85) ^ (v85 / 0x10000000 | 0x1000000000 * v85) ^ (v85 / 0x8000000000 | 0x2000000 * v85)) + ((v85 | v82) & v79 | v85 & v82) + v86;
        v89 = v25 + 0x550c7dc3d5ffb4e2 + v78 + (v87 & (v84 ^ v81) ^ v81) + ((v87 / 0x40000 | 0x400000000000 * v87) ^ (v87 / 0x4000 | 0x4000000000000 * v87) ^ (v87 / 0x20000000000 | 0x800000 * v87));
        v90 = v89 + v79;
        v91 = ((v88 / 0x400000000 | 0x40000000 * v88) ^ (v88 / 0x10000000 | 0x1000000000 * v88) ^ (v88 / 0x8000000000 | 0x2000000 * v88)) + ((v88 | v85) & v82 | v88 & v85) + v89;
        v92 = v23 + 0x72be5d74f27b896f + v81 + (v90 & (v87 ^ v84) ^ v84) + ((v90 / 0x40000 | 0x400000000000 * v90) ^ (v90 / 0x4000 | 0x4000000000000 * v90) ^ (v90 / 0x20000000000 | 0x800000 * v90));
        v93 = v92 + v82;
        v94 = ((v91 / 0x400000000 | 0x40000000 * v91) ^ (v91 / 0x10000000 | 0x1000000000 * v91) ^ (v91 / 0x8000000000 | 0x2000000 * v91)) + ((v91 | v88) & v85 | v91 & v88) + v92;
        v95 = v19 - 0x7f214e01c4e9694f + v84 + (v93 & (v90 ^ v87) ^ v87) + ((v93 / 0x40000 | 0x400000000000 * v93) ^ (v93 / 0x4000 | 0x4000000000000 * v93) ^ (v93 / 0x20000000000 | 0x800000 * v93));
        v96 = v95 + v85;
        v97 = ((v94 / 0x400000000 | 0x40000000 * v94) ^ (v94 / 0x10000000 | 0x1000000000 * v94) ^ (v94 / 0x8000000000 | 0x2000000 * v94)) + ((v94 | v91) & v88 | v94 & v91) + v95;
        v98 = v17 - 0x6423f958da38edcb + v87 + (v96 & (v93 ^ v90) ^ v90) + ((v96 / 0x40000 | 0x400000000000 * v96) ^ (v96 / 0x4000 | 0x4000000000000 * v96) ^ (v96 / 0x20000000000 | 0x800000 * v96));
        v99 = v98 + v88;
        v100 = ((v97 / 0x400000000 | 0x40000000 * v97) ^ (v97 / 0x10000000 | 0x1000000000 * v97) ^ (v97 / 0x8000000000 | 0x2000000 * v97)) + ((v97 | v94) & v91 | v97 & v94) + v98;
        v101 = v21 - 0x3e640e8b3096d96c + v90 + (v99 & (v96 ^ v93) ^ v93) + ((v99 / 0x40000 | 0x400000000000 * v99) ^ (v99 / 0x4000 | 0x4000000000000 * v99) ^ (v99 / 0x20000000000 | 0x800000 * v99));
        v102 = v101 + v91;
        v103 = ((v100 / 0x400000000 | 0x40000000 * v100) ^ (v100 / 0x10000000 | 0x1000000000 * v100) ^ (v100 / 0x8000000000 | 0x2000000 * v100)) + ((v100 | v97) & v94 | v100 & v97) + v101;
        v104 = ((v45 / 2 | 0x8000000000000000 * v45) ^ v45 / 128 ^ (v45 / 256 | 0x100000000000000 * v45)) + v296 + v29 + ((v17 / 0x80000 | 0x200000000000 * v17) ^ v17 / 64 ^ (v17 / 0x2000000000000000 | 8 * v17));
        v105 = v104 - 0x1b64963e610eb52e + v93 + (v102 & (v99 ^ v96) ^ v96) + ((v102 / 0x40000 | 0x400000000000 * v102) ^ (v102 / 0x4000 | 0x4000000000000 * v102) ^ (v102 / 0x20000000000 | 0x800000 * v102));
        v106 = v105 + v94;
        v107 = ((v103 / 0x400000000 | 0x40000000 * v103) ^ (v103 / 0x10000000 | 0x1000000000 * v103) ^ (v103 / 0x8000000000 | 0x2000000 * v103)) + ((v103 | v100) & v97 | v103 & v100) + v105;
        v108 = ((v43 / 2 | 0x8000000000000000 * v43) ^ v43 / 128 ^ (v43 / 256 | 0x100000000000000 * v43)) + v45 + v27 + ((v21 / 0x80000 | 0x200000000000 * v21) ^ v21 / 64 ^ (v21 / 0x2000000000000000 | 8 * v21));
        v109 = v108 - 0x1041b879c7b0da1d + v96 + (v106 & (v102 ^ v99) ^ v99) + ((v106 / 0x40000 | 0x400000000000 * v106) ^ (v106 / 0x4000 | 0x4000000000000 * v106) ^ (v106 / 0x20000000000 | 0x800000 * v106));
        v110 = v109 + v97;
        v111 = ((v107 / 0x400000000 | 0x40000000 * v107) ^ (v107 / 0x10000000 | 0x1000000000 * v107) ^ (v107 / 0x8000000000 | 0x2000000 * v107)) + ((v107 | v103) & v100 | v107 & v103) + v109;
        v112 = ((v41 / 2 | 0x8000000000000000 * v41) ^ v41 / 128 ^ (v41 / 256 | 0x100000000000000 * v41)) + v43 + v25 + ((v104 / 0x80000 | 0x200000000000 * v104) ^ v104 / 64 ^ (v104 / 0x2000000000000000 | 8 * v104));
        v113 = v112 + 0xfc19dc68b8cd5b5 + v99 + (v110 & (v106 ^ v102) ^ v102) + ((v110 / 0x40000 | 0x400000000000 * v110) ^ (v110 / 0x4000 | 0x4000000000000 * v110) ^ (v110 / 0x20000000000 | 0x800000 * v110));
        v114 = v113 + v100;
        v115 = ((v111 / 0x400000000 | 0x40000000 * v111) ^ (v111 / 0x10000000 | 0x1000000000 * v111) ^ (v111 / 0x8000000000 | 0x2000000 * v111)) + ((v111 | v107) & v103 | v111 & v107) + v113;
        v116 = ((v39 / 2 | 0x8000000000000000 * v39) ^ v39 / 128 ^ (v39 / 256 | 0x100000000000000 * v39)) + v41 + v23 + ((v108 / 0x80000 | 0x200000000000 * v108) ^ v108 / 64 ^ (v108 / 0x2000000000000000 | 8 * v108));
        v117 = v116 + 0x240ca1cc77ac9c65 + v102 + (v114 & (v110 ^ v106) ^ v106) + ((v114 / 0x40000 | 0x400000000000 * v114) ^ (v114 / 0x4000 | 0x4000000000000 * v114) ^ (v114 / 0x20000000000 | 0x800000 * v114));
        v118 = v117 + v103;
        v119 = ((v115 / 0x400000000 | 0x40000000 * v115) ^ (v115 / 0x10000000 | 0x1000000000 * v115) ^ (v115 / 0x8000000000 | 0x2000000 * v115)) + ((v115 | v111) & v107 | v115 & v111) + v117;
        v120 = ((v37 / 256 | 0x100000000000000 * v37) ^ v37 / 128 ^ (v37 / 2 | 0x8000000000000000 * v37)) + v39 + v19 + ((v112 / 0x80000 | 0x200000000000 * v112) ^ v112 / 64 ^ (v112 / 0x2000000000000000 | 8 * v112));
        v121 = v120 + 0x2de92c6f592b0275 + v106 + (v118 & (v114 ^ v110) ^ v110) + ((v118 / 0x40000 | 0x400000000000 * v118) ^ (v118 / 0x4000 | 0x4000000000000 * v118) ^ (v118 / 0x20000000000 | 0x800000 * v118));
        v122 = v121 + v107;
        v123 = ((v119 / 0x400000000 | 0x40000000 * v119) ^ (v119 / 0x10000000 | 0x1000000000 * v119) ^ (v119 / 0x8000000000 | 0x2000000 * v119)) + ((v119 | v115) & v111 | v119 & v115) + v121;
        v124 = ((v35 / 256 | 0x100000000000000 * v35) ^ v35 / 128 ^ (v35 / 2 | 0x8000000000000000 * v35)) + v37 + v17 + ((v116 / 0x80000 | 0x200000000000 * v116) ^ v116 / 64 ^ (v116 / 0x2000000000000000 | 8 * v116));
        v125 = v124 + 0x4a7484aa6ea6e483 + v110 + (v122 & (v118 ^ v114) ^ v114) + ((v122 / 0x40000 | 0x400000000000 * v122) ^ (v122 / 0x4000 | 0x4000000000000 * v122) ^ (v122 / 0x20000000000 | 0x800000 * v122));
        v126 = v125 + v111;
        v127 = ((v123 / 0x400000000 | 0x40000000 * v123) ^ (v123 / 0x10000000 | 0x1000000000 * v123) ^ (v123 / 0x8000000000 | 0x2000000 * v123)) + ((v123 | v119) & v115 | v123 & v119) + v125;
        v128 = ((v33 / 256 | 0x100000000000000 * v33) ^ v33 / 128 ^ (v33 / 2 | 0x8000000000000000 * v33)) + v35 + v21 + ((v120 / 0x80000 | 0x200000000000 * v120) ^ v120 / 64 ^ (v120 / 0x2000000000000000 | 8 * v120));
        v129 = v128 + 0x5cb0a9dcbd41fbd4 + v114 + (v126 & (v122 ^ v118) ^ v118) + ((v126 / 0x40000 | 0x400000000000 * v126) ^ (v126 / 0x4000 | 0x4000000000000 * v126) ^ (v126 / 0x20000000000 | 0x800000 * v126));
        v130 = v129 + v115;
        v131 = ((v127 / 0x400000000 | 0x40000000 * v127) ^ (v127 / 0x10000000 | 0x1000000000 * v127) ^ (v127 / 0x8000000000 | 0x2000000 * v127)) + ((v127 | v123) & v119 | v127 & v123) + v129;
        v132 = ((v31 / 2 | 0x8000000000000000 * v31) ^ v31 / 128 ^ (v31 / 256 | 0x100000000000000 * v31)) + v33 + v104 + ((v124 / 0x80000 | 0x200000000000 * v124) ^ v124 / 64 ^ (v124 / 0x2000000000000000 | 8 * v124));
        v133 = v132 + 0x76f988da831153b5 + v118 + (v130 & (v126 ^ v122) ^ v122) + ((v130 / 0x40000 | 0x400000000000 * v130) ^ (v130 / 0x4000 | 0x4000000000000 * v130) ^ (v130 / 0x20000000000 | 0x800000 * v130));
        v134 = v133 + v119;
        v135 = ((v131 / 0x400000000 | 0x40000000 * v131) ^ (v131 / 0x10000000 | 0x1000000000 * v131) ^ (v131 / 0x8000000000 | 0x2000000 * v131)) + ((v131 | v127) & v123 | v131 & v127) + v133;
        v136 = ((v29 / 2 | 0x8000000000000000 * v29) ^ v29 / 128 ^ (v29 / 256 | 0x100000000000000 * v29)) + v31 + v108 + ((v128 / 0x80000 | 0x200000000000 * v128) ^ v128 / 64 ^ (v128 / 0x2000000000000000 | 8 * v128));
        v137 = v136 - 0x67c1aead11992055 + v122 + (v134 & (v130 ^ v126) ^ v126) + ((v134 / 0x40000 | 0x400000000000 * v134) ^ (v134 / 0x4000 | 0x4000000000000 * v134) ^ (v134 / 0x20000000000 | 0x800000 * v134));
        v138 = v137 + v123;
        v139 = ((v135 / 0x400000000 | 0x40000000 * v135) ^ (v135 / 0x10000000 | 0x1000000000 * v135) ^ (v135 / 0x8000000000 | 0x2000000 * v135)) + ((v135 | v131) & v127 | v135 & v131) + v137;
        v140 = ((v27 / 2 | 0x8000000000000000 * v27) ^ v27 / 128 ^ (v27 / 256 | 0x100000000000000 * v27)) + v29 + v112 + ((v132 / 0x80000 | 0x200000000000 * v132) ^ v132 / 64 ^ (v132 / 0x2000000000000000 | 8 * v132));
        v141 = v140 - 0x57ce3992d24bcdf0 + v126 + (v138 & (v134 ^ v130) ^ v130) + ((v138 / 0x40000 | 0x400000000000 * v138) ^ (v138 / 0x4000 | 0x4000000000000 * v138) ^ (v138 / 0x20000000000 | 0x800000 * v138));
        v142 = v141 + v127;
        v143 = ((v139 / 0x400000000 | 0x40000000 * v139) ^ (v139 / 0x10000000 | 0x1000000000 * v139) ^ (v139 / 0x8000000000 | 0x2000000 * v139)) + ((v139 | v135) & v131 | v139 & v135) + v141;
        v144 = ((v25 / 2 | 0x8000000000000000 * v25) ^ v25 / 128 ^ (v25 / 256 | 0x100000000000000 * v25)) + v27 + v116 + ((v136 / 0x80000 | 0x200000000000 * v136) ^ v136 / 64 ^ (v136 / 0x2000000000000000 | 8 * v136));
        v145 = v144 - 0x4ffcd8376704dec1 + v130 + (v142 & (v138 ^ v134) ^ v134) + ((v142 / 0x40000 | 0x400000000000 * v142) ^ (v142 / 0x4000 | 0x4000000000000 * v142) ^ (v142 / 0x20000000000 | 0x800000 * v142));
        v146 = v145 + v131;
        v147 = ((v143 / 0x400000000 | 0x40000000 * v143) ^ (v143 / 0x10000000 | 0x1000000000 * v143) ^ (v143 / 0x8000000000 | 0x2000000 * v143)) + ((v143 | v139) & v135 | v143 & v139) + v145;
        v148 = ((v23 / 2 | 0x8000000000000000 * v23) ^ v23 / 128 ^ (v23 / 256 | 0x100000000000000 * v23)) + v25 + v120 + ((v140 / 0x80000 | 0x200000000000 * v140) ^ v140 / 64 ^ (v140 / 0x2000000000000000 | 8 * v140));
        v149 = v148 - 0x40a680384110f11c + v134 + (v146 & (v142 ^ v138) ^ v138) + ((v146 / 0x40000 | 0x400000000000 * v146) ^ (v146 / 0x4000 | 0x4000000000000 * v146) ^ (v146 / 0x20000000000 | 0x800000 * v146));
        v150 = v149 + v135;
        v151 = ((v147 / 0x400000000 | 0x40000000 * v147) ^ (v147 / 0x10000000 | 0x1000000000 * v147) ^ (v147 / 0x8000000000 | 0x2000000 * v147)) + ((v147 | v143) & v139 | v147 & v143) + v149;
        v152 = ((v19 / 2 | 0x8000000000000000 * v19) ^ v19 / 128 ^ (v19 / 256 | 0x100000000000000 * v19)) + v23 + v124 + ((v144 / 0x80000 | 0x200000000000 * v144) ^ v144 / 64 ^ (v144 / 0x2000000000000000 | 8 * v144));
        v153 = v152 - 0x391ff40cc257703e + v138 + (v150 & (v146 ^ v142) ^ v142) + ((v150 / 0x40000 | 0x400000000000 * v150) ^ (v150 / 0x4000 | 0x4000000000000 * v150) ^ (v150 / 0x20000000000 | 0x800000 * v150));
        v154 = v153 + v139;
        v155 = ((v151 / 0x400000000 | 0x40000000 * v151) ^ (v151 / 0x10000000 | 0x1000000000 * v151) ^ (v151 / 0x8000000000 | 0x2000000 * v151)) + ((v151 | v147) & v143 | v151 & v147) + v153;
        v156 = ((v17 / 2 | 0x8000000000000000 * v17) ^ v17 / 128 ^ (v17 / 256 | 0x100000000000000 * v17)) + v19 + v128 + ((v148 / 0x80000 | 0x200000000000 * v148) ^ v148 / 64 ^ (v148 / 0x2000000000000000 | 8 * v148));
        v157 = v156 - 0x2a586eb86cf558db + v142 + (v154 & (v150 ^ v146) ^ v146) + ((v154 / 0x40000 | 0x400000000000 * v154) ^ (v154 / 0x4000 | 0x4000000000000 * v154) ^ (v154 / 0x20000000000 | 0x800000 * v154));
        v158 = v157 + v143;
        v159 = ((v155 / 0x400000000 | 0x40000000 * v155) ^ (v155 / 0x10000000 | 0x1000000000 * v155) ^ (v155 / 0x8000000000 | 0x2000000 * v155)) + ((v155 | v151) & v147 | v155 & v151) + v157;
        v160 = ((v21 / 2 | 0x8000000000000000 * v21) ^ v21 / 128 ^ (v21 / 256 | 0x100000000000000 * v21)) + v17 + v132 + ((v152 / 0x80000 | 0x200000000000 * v152) ^ v152 / 64 ^ (v152 / 0x2000000000000000 | 8 * v152));
        v161 = v160 + 0x6ca6351e003826f + v146 + (v158 & (v154 ^ v150) ^ v150) + ((v158 / 0x40000 | 0x400000000000 * v158) ^ (v158 / 0x4000 | 0x4000000000000 * v158) ^ (v158 / 0x20000000000 | 0x800000 * v158));
        v162 = v161 + v147;
        v163 = ((v159 / 0x400000000 | 0x40000000 * v159) ^ (v159 / 0x10000000 | 0x1000000000 * v159) ^ (v159 / 0x8000000000 | 0x2000000 * v159)) + ((v159 | v155) & v151 | v159 & v155) + v161;
        v164 = ((v104 / 2 | 0x8000000000000000 * v104) ^ v104 / 128 ^ (v104 / 256 | 0x100000000000000 * v104)) + v21 + v136 + ((v156 / 0x80000 | 0x200000000000 * v156) ^ v156 / 64 ^ (v156 / 0x2000000000000000 | 8 * v156));
        v165 = v164 + 0x142929670a0e6e70 + v150 + (v162 & (v158 ^ v154) ^ v154) + ((v162 / 0x40000 | 0x400000000000 * v162) ^ (v162 / 0x4000 | 0x4000000000000 * v162) ^ (v162 / 0x20000000000 | 0x800000 * v162));
        v166 = v165 + v151;
        v167 = ((v163 / 0x400000000 | 0x40000000 * v163) ^ (v163 / 0x10000000 | 0x1000000000 * v163) ^ (v163 / 0x8000000000 | 0x2000000 * v163)) + ((v163 | v159) & v155 | v163 & v159) + v165;
        v168 = ((v108 / 2 | 0x8000000000000000 * v108) ^ v108 / 128 ^ (v108 / 256 | 0x100000000000000 * v108)) + v104 + v140 + ((v160 / 0x80000 | 0x200000000000 * v160) ^ v160 / 64 ^ (v160 / 0x2000000000000000 | 8 * v160));
        v169 = v168 + 0x27b70a8546d22ffc + v154 + (v166 & (v162 ^ v158) ^ v158) + ((v166 / 0x40000 | 0x400000000000 * v166) ^ (v166 / 0x4000 | 0x4000000000000 * v166) ^ (v166 / 0x20000000000 | 0x800000 * v166));
        v170 = v169 + v155;
        v171 = ((v167 / 0x400000000 | 0x40000000 * v167) ^ (v167 / 0x10000000 | 0x1000000000 * v167) ^ (v167 / 0x8000000000 | 0x2000000 * v167)) + ((v167 | v163) & v159 | v167 & v163) + v169;
        v172 = ((v112 / 2 | 0x8000000000000000 * v112) ^ v112 / 128 ^ (v112 / 256 | 0x100000000000000 * v112)) + v108 + v144 + ((v164 / 0x80000 | 0x200000000000 * v164) ^ v164 / 64 ^ (v164 / 0x2000000000000000 | 8 * v164));
        v173 = v172 + 0x2e1b21385c26c926 + v158 + (v170 & (v166 ^ v162) ^ v162) + ((v170 / 0x40000 | 0x400000000000 * v170) ^ (v170 / 0x4000 | 0x4000000000000 * v170) ^ (v170 / 0x20000000000 | 0x800000 * v170));
        v174 = v173 + v159;
        v175 = ((v171 / 0x400000000 | 0x40000000 * v171) ^ (v171 / 0x10000000 | 0x1000000000 * v171) ^ (v171 / 0x8000000000 | 0x2000000 * v171)) + ((v171 | v167) & v163 | v171 & v167) + v173;
        v176 = ((v116 / 2 | 0x8000000000000000 * v116) ^ v116 / 128 ^ (v116 / 256 | 0x100000000000000 * v116)) + v112 + v148 + ((v168 / 0x80000 | 0x200000000000 * v168) ^ v168 / 64 ^ (v168 / 0x2000000000000000 | 8 * v168));
        v177 = v176 + 0x4d2c6dfc5ac42aed + v162 + (v174 & (v170 ^ v166) ^ v166) + ((v174 / 0x40000 | 0x400000000000 * v174) ^ (v174 / 0x4000 | 0x4000000000000 * v174) ^ (v174 / 0x20000000000 | 0x800000 * v174));
        v178 = v177 + v163;
        v179 = ((v175 / 0x400000000 | 0x40000000 * v175) ^ (v175 / 0x10000000 | 0x1000000000 * v175) ^ (v175 / 0x8000000000 | 0x2000000 * v175)) + ((v175 | v171) & v167 | v175 & v171) + v177;
        v180 = ((v120 / 2 | 0x8000000000000000 * v120) ^ v120 / 128 ^ (v120 / 256 | 0x100000000000000 * v120)) + v116 + v152 + ((v172 / 0x80000 | 0x200000000000 * v172) ^ v172 / 64 ^ (v172 / 0x2000000000000000 | 8 * v172));
        v181 = v180 + 0x53380d139d95b3df + v166 + (v178 & (v174 ^ v170) ^ v170) + ((v178 / 0x40000 | 0x400000000000 * v178) ^ (v178 / 0x4000 | 0x4000000000000 * v178) ^ (v178 / 0x20000000000 | 0x800000 * v178));
        v182 = v181 + v167;
        v183 = ((v179 / 0x400000000 | 0x40000000 * v179) ^ (v179 / 0x10000000 | 0x1000000000 * v179) ^ (v179 / 0x8000000000 | 0x2000000 * v179)) + ((v179 | v175) & v171 | v179 & v175) + v181;
        v184 = ((v124 / 2 | 0x8000000000000000 * v124) ^ v124 / 128 ^ (v124 / 256 | 0x100000000000000 * v124)) + v120 + v156 + ((v176 / 0x80000 | 0x200000000000 * v176) ^ v176 / 64 ^ (v176 / 0x2000000000000000 | 8 * v176));
        v185 = v184 + 0x650a73548baf63de + v170 + (v182 & (v178 ^ v174) ^ v174) + ((v182 / 0x40000 | 0x400000000000 * v182) ^ (v182 / 0x4000 | 0x4000000000000 * v182) ^ (v182 / 0x20000000000 | 0x800000 * v182));
        v186 = v185 + v171;
        v187 = ((v183 / 0x400000000 | 0x40000000 * v183) ^ (v183 / 0x10000000 | 0x1000000000 * v183) ^ (v183 / 0x8000000000 | 0x2000000 * v183)) + ((v183 | v179) & v175 | v183 & v179) + v185;
        v188 = ((v128 / 2 | 0x8000000000000000 * v128) ^ v128 / 128 ^ (v128 / 256 | 0x100000000000000 * v128)) + v124 + v160 + ((v180 / 0x80000 | 0x200000000000 * v180) ^ v180 / 64 ^ (v180 / 0x2000000000000000 | 8 * v180));
        v189 = v188 + 0x766a0abb3c77b2a8 + v174 + (v186 & (v182 ^ v178) ^ v178) + ((v186 / 0x40000 | 0x400000000000 * v186) ^ (v186 / 0x4000 | 0x4000000000000 * v186) ^ (v186 / 0x20000000000 | 0x800000 * v186));
        v190 = v189 + v175;
        v191 = ((v187 / 0x400000000 | 0x40000000 * v187) ^ (v187 / 0x10000000 | 0x1000000000 * v187) ^ (v187 / 0x8000000000 | 0x2000000 * v187)) + ((v187 | v183) & v179 | v187 & v183) + v189;
        v192 = ((v132 / 2 | 0x8000000000000000 * v132) ^ v132 / 128 ^ (v132 / 256 | 0x100000000000000 * v132)) + v128 + v164 + ((v184 / 0x80000 | 0x200000000000 * v184) ^ v184 / 64 ^ (v184 / 0x2000000000000000 | 8 * v184));
        v193 = v192 - 0x7e3d36d1b812511a + v178 + (v190 & (v186 ^ v182) ^ v182) + ((v190 / 0x40000 | 0x400000000000 * v190) ^ (v190 / 0x4000 | 0x4000000000000 * v190) ^ (v190 / 0x20000000000 | 0x800000 * v190));
        v194 = v193 + v179;
        v195 = ((v191 / 0x400000000 | 0x40000000 * v191) ^ (v191 / 0x10000000 | 0x1000000000 * v191) ^ (v191 / 0x8000000000 | 0x2000000 * v191)) + ((v191 | v187) & v183 | v191 & v187) + v193;
        v196 = ((v136 / 2 | 0x8000000000000000 * v136) ^ v136 / 128 ^ (v136 / 256 | 0x100000000000000 * v136)) + v132 + v168 + ((v188 / 0x80000 | 0x200000000000 * v188) ^ v188 / 64 ^ (v188 / 0x2000000000000000 | 8 * v188));
        v197 = v196 - 0x6d8dd37aeb7dcac5 + v182 + (v194 & (v190 ^ v186) ^ v186) + ((v194 / 0x40000 | 0x400000000000 * v194) ^ (v194 / 0x4000 | 0x4000000000000 * v194) ^ (v194 / 0x20000000000 | 0x800000 * v194));
        v198 = v197 + v183;
        v199 = ((v195 / 0x400000000 | 0x40000000 * v195) ^ (v195 / 0x10000000 | 0x1000000000 * v195) ^ (v195 / 0x8000000000 | 0x2000000 * v195)) + ((v195 | v191) & v187 | v195 & v191) + v197;
        v200 = ((v140 / 2 | 0x8000000000000000 * v140) ^ v140 / 128 ^ (v140 / 256 | 0x100000000000000 * v140)) + v136 + v172 + ((v192 / 0x80000 | 0x200000000000 * v192) ^ v192 / 64 ^ (v192 / 0x2000000000000000 | 8 * v192));
        v201 = v200 - 0x5d40175eb30efc9c + v186 + (v198 & (v194 ^ v190) ^ v190) + ((v198 / 0x40000 | 0x400000000000 * v198) ^ (v198 / 0x4000 | 0x4000000000000 * v198) ^ (v198 / 0x20000000000 | 0x800000 * v198));
        v202 = v201 + v187;
        v203 = ((v199 / 0x400000000 | 0x40000000 * v199) ^ (v199 / 0x10000000 | 0x1000000000 * v199) ^ (v199 / 0x8000000000 | 0x2000000 * v199)) + ((v199 | v195) & v191 | v199 & v195) + v201;
        v204 = ((v144 / 2 | 0x8000000000000000 * v144) ^ v144 / 128 ^ (v144 / 256 | 0x100000000000000 * v144)) + v140 + v176 + ((v196 / 0x80000 | 0x200000000000 * v196) ^ v196 / 64 ^ (v196 / 0x2000000000000000 | 8 * v196));
        v205 = v204 - 0x57e599b443bdcfff + v190 + (v202 & (v198 ^ v194) ^ v194) + ((v202 / 0x40000 | 0x400000000000 * v202) ^ (v202 / 0x4000 | 0x4000000000000 * v202) ^ (v202 / 0x20000000000 | 0x800000 * v202));
        v206 = v205 + v191;
        v207 = ((v203 / 0x400000000 | 0x40000000 * v203) ^ (v203 / 0x10000000 | 0x1000000000 * v203) ^ (v203 / 0x8000000000 | 0x2000000 * v203)) + ((v203 | v199) & v195 | v203 & v199) + v205;
        v208 = ((v148 / 2 | 0x8000000000000000 * v148) ^ v148 / 128 ^ (v148 / 256 | 0x100000000000000 * v148)) + v144 + v180 + ((v200 / 0x80000 | 0x200000000000 * v200) ^ v200 / 64 ^ (v200 / 0x2000000000000000 | 8 * v200));
        v209 = v208 - 0x3db4748f2f07686f + v194 + (v206 & (v202 ^ v198) ^ v198) + ((v206 / 0x40000 | 0x400000000000 * v206) ^ (v206 / 0x4000 | 0x4000000000000 * v206) ^ (v206 / 0x20000000000 | 0x800000 * v206));
        v210 = v209 + v195;
        v211 = ((v207 / 0x400000000 | 0x40000000 * v207) ^ (v207 / 0x10000000 | 0x1000000000 * v207) ^ (v207 / 0x8000000000 | 0x2000000 * v207)) + ((v207 | v203) & v199 | v207 & v203) + v209;
        v212 = ((v152 / 2 | 0x8000000000000000 * v152) ^ v152 / 128 ^ (v152 / 256 | 0x100000000000000 * v152)) + v148 + v184 + ((v204 / 0x80000 | 0x200000000000 * v204) ^ v204 / 64 ^ (v204 / 0x2000000000000000 | 8 * v204));
        v213 = v212 - 0x3893ae5cf9ab41d0 + v198 + (v210 & (v206 ^ v202) ^ v202) + ((v210 / 0x40000 | 0x400000000000 * v210) ^ (v210 / 0x4000 | 0x4000000000000 * v210) ^ (v210 / 0x20000000000 | 0x800000 * v210));
        v214 = v213 + v199;
        v215 = ((v211 / 0x400000000 | 0x40000000 * v211) ^ (v211 / 0x10000000 | 0x1000000000 * v211) ^ (v211 / 0x8000000000 | 0x2000000 * v211)) + ((v211 | v207) & v203 | v211 & v207) + v213;
        v216 = ((v156 / 2 | 0x8000000000000000 * v156) ^ v156 / 128 ^ (v156 / 256 | 0x100000000000000 * v156)) + v152 + v188 + ((v208 / 0x80000 | 0x200000000000 * v208) ^ v208 / 64 ^ (v208 / 0x2000000000000000 | 8 * v208));
        v217 = v216 - 0x2e6d17e62910ade8 + v202 + (v214 & (v210 ^ v206) ^ v206) + ((v214 / 0x40000 | 0x400000000000 * v214) ^ (v214 / 0x4000 | 0x4000000000000 * v214) ^ (v214 / 0x20000000000 | 0x800000 * v214));
        v218 = v217 + v203;
        v219 = ((v215 / 0x400000000 | 0x40000000 * v215) ^ (v215 / 0x10000000 | 0x1000000000 * v215) ^ (v215 / 0x8000000000 | 0x2000000 * v215)) + ((v215 | v211) & v207 | v215 & v211) + v217;
        v220 = ((v160 / 2 | 0x8000000000000000 * v160) ^ v160 / 128 ^ (v160 / 256 | 0x100000000000000 * v160)) + v156 + v192 + ((v212 / 0x80000 | 0x200000000000 * v212) ^ v212 / 64 ^ (v212 / 0x2000000000000000 | 8 * v212));
        v221 = v220 - 0x2966f9dbaa9a56f0 + v206 + (v218 & (v214 ^ v210) ^ v210) + ((v218 / 0x40000 | 0x400000000000 * v218) ^ (v218 / 0x4000 | 0x4000000000000 * v218) ^ (v218 / 0x20000000000 | 0x800000 * v218));
        v222 = v221 + v207;
        v223 = ((v219 / 0x400000000 | 0x40000000 * v219) ^ (v219 / 0x10000000 | 0x1000000000 * v219) ^ (v219 / 0x8000000000 | 0x2000000 * v219)) + ((v219 | v215) & v211 | v219 & v215) + v221;
        v224 = ((v164 / 2 | 0x8000000000000000 * v164) ^ v164 / 128 ^ (v164 / 256 | 0x100000000000000 * v164)) + v160 + v196 + ((v216 / 0x80000 | 0x200000000000 * v216) ^ v216 / 64 ^ (v216 / 0x2000000000000000 | 8 * v216));
        v225 = v224 - 0xbf1ca7aa88edfd6 + v210 + (v222 & (v218 ^ v214) ^ v214) + ((v222 / 0x40000 | 0x400000000000 * v222) ^ (v222 / 0x4000 | 0x4000000000000 * v222) ^ (v222 / 0x20000000000 | 0x800000 * v222));
        v226 = v225 + v211;
        v227 = ((v223 / 0x400000000 | 0x40000000 * v223) ^ (v223 / 0x10000000 | 0x1000000000 * v223) ^ (v223 / 0x8000000000 | 0x2000000 * v223)) + ((v223 | v219) & v215 | v223 & v219) + v225;
        v228 = ((v168 / 2 | 0x8000000000000000 * v168) ^ v168 / 128 ^ (v168 / 256 | 0x100000000000000 * v168)) + v164 + v200 + ((v220 / 0x80000 | 0x200000000000 * v220) ^ v220 / 64 ^ (v220 / 0x2000000000000000 | 8 * v220));
        v229 = v228 + 0x106aa07032bbd1b8 + v214 + (v226 & (v222 ^ v218) ^ v218) + ((v226 / 0x40000 | 0x400000000000 * v226) ^ (v226 / 0x4000 | 0x4000000000000 * v226) ^ (v226 / 0x20000000000 | 0x800000 * v226));
        v230 = v229 + v215;
        v231 = ((v227 / 0x400000000 | 0x40000000 * v227) ^ (v227 / 0x10000000 | 0x1000000000 * v227) ^ (v227 / 0x8000000000 | 0x2000000 * v227)) + ((v227 | v223) & v219 | v227 & v223) + v229;
        v232 = ((v172 / 2 | 0x8000000000000000 * v172) ^ v172 / 128 ^ (v172 / 256 | 0x100000000000000 * v172)) + v168 + v204 + ((v224 / 0x80000 | 0x200000000000 * v224) ^ v224 / 64 ^ (v224 / 0x2000000000000000 | 8 * v224));
        v233 = v232 + 0x19a4c116b8d2d0c8 + v218 + (v230 & (v226 ^ v222) ^ v222) + ((v230 / 0x40000 | 0x400000000000 * v230) ^ (v230 / 0x4000 | 0x4000000000000 * v230) ^ (v230 / 0x20000000000 | 0x800000 * v230));
        v234 = v233 + v219;
        v235 = ((v231 / 0x400000000 | 0x40000000 * v231) ^ (v231 / 0x10000000 | 0x1000000000 * v231) ^ (v231 / 0x8000000000 | 0x2000000 * v231)) + ((v231 | v227) & v223 | v231 & v227) + v233;
        v236 = ((v176 / 2 | 0x8000000000000000 * v176) ^ v176 / 128 ^ (v176 / 256 | 0x100000000000000 * v176)) + v172 + v208 + ((v228 / 0x80000 | 0x200000000000 * v228) ^ v228 / 64 ^ (v228 / 0x2000000000000000 | 8 * v228));
        v237 = v236 + 0x1e376c085141ab53 + v222 + (v234 & (v230 ^ v226) ^ v226) + ((v234 / 0x40000 | 0x400000000000 * v234) ^ (v234 / 0x4000 | 0x4000000000000 * v234) ^ (v234 / 0x20000000000 | 0x800000 * v234));
        v238 = v237 + v223;
        v239 = ((v235 / 0x400000000 | 0x40000000 * v235) ^ (v235 / 0x10000000 | 0x1000000000 * v235) ^ (v235 / 0x8000000000 | 0x2000000 * v235)) + ((v235 | v231) & v227 | v235 & v231) + v237;
        v240 = ((v180 / 2 | 0x8000000000000000 * v180) ^ v180 / 128 ^ (v180 / 256 | 0x100000000000000 * v180)) + v176 + v212 + ((v232 / 0x80000 | 0x200000000000 * v232) ^ v232 / 64 ^ (v232 / 0x2000000000000000 | 8 * v232));
        v241 = v240 + 0x2748774cdf8eeb99 + v226 + (v238 & (v234 ^ v230) ^ v230) + ((v238 / 0x40000 | 0x400000000000 * v238) ^ (v238 / 0x4000 | 0x4000000000000 * v238) ^ (v238 / 0x20000000000 | 0x800000 * v238));
        v242 = v241 + v227;
        v243 = ((v239 / 0x400000000 | 0x40000000 * v239) ^ (v239 / 0x10000000 | 0x1000000000 * v239) ^ (v239 / 0x8000000000 | 0x2000000 * v239)) + ((v239 | v235) & v231 | v239 & v235) + v241;
        v244 = ((v184 / 2 | 0x8000000000000000 * v184) ^ v184 / 128 ^ (v184 / 256 | 0x100000000000000 * v184)) + v180 + v216 + ((v236 / 0x80000 | 0x200000000000 * v236) ^ v236 / 64 ^ (v236 / 0x2000000000000000 | 8 * v236));
        v245 = v244 + 0x34b0bcb5e19b48a8 + v230 + (v242 & (v238 ^ v234) ^ v234) + ((v242 / 0x40000 | 0x400000000000 * v242) ^ (v242 / 0x4000 | 0x4000000000000 * v242) ^ (v242 / 0x20000000000 | 0x800000 * v242));
        v246 = v245 + v231;
        v247 = ((v243 / 0x400000000 | 0x40000000 * v243) ^ (v243 / 0x10000000 | 0x1000000000 * v243) ^ (v243 / 0x8000000000 | 0x2000000 * v243)) + ((v243 | v239) & v235 | v243 & v239) + v245;
        v248 = ((v188 / 2 | 0x8000000000000000 * v188) ^ v188 / 128 ^ (v188 / 256 | 0x100000000000000 * v188)) + v184 + v220 + ((v240 / 0x80000 | 0x200000000000 * v240) ^ v240 / 64 ^ (v240 / 0x2000000000000000 | 8 * v240));
        v249 = v248 + 0x391c0cb3c5c95a63 + v234 + (v246 & (v242 ^ v238) ^ v238) + ((v246 / 0x40000 | 0x400000000000 * v246) ^ (v246 / 0x4000 | 0x4000000000000 * v246) ^ (v246 / 0x20000000000 | 0x800000 * v246));
        v250 = v249 + v235;
        v251 = ((v247 / 0x400000000 | 0x40000000 * v247) ^ (v247 / 0x10000000 | 0x1000000000 * v247) ^ (v247 / 0x8000000000 | 0x2000000 * v247)) + ((v247 | v243) & v239 | v247 & v243) + v249;
        v252 = ((v192 / 2 | 0x8000000000000000 * v192) ^ v192 / 128 ^ (v192 / 256 | 0x100000000000000 * v192)) + v188 + v224 + ((v244 / 0x80000 | 0x200000000000 * v244) ^ v244 / 64 ^ (v244 / 0x2000000000000000 | 8 * v244));
        v253 = v252 + 0x4ed8aa4ae3418acb + v238 + (v250 & (v246 ^ v242) ^ v242) + ((v250 / 0x40000 | 0x400000000000 * v250) ^ (v250 / 0x4000 | 0x4000000000000 * v250) ^ (v250 / 0x20000000000 | 0x800000 * v250));
        v254 = v253 + v239;
        v255 = ((v251 / 0x400000000 | 0x40000000 * v251) ^ (v251 / 0x10000000 | 0x1000000000 * v251) ^ (v251 / 0x8000000000 | 0x2000000 * v251)) + ((v251 | v247) & v243 | v251 & v247) + v253;
        v256 = ((v196 / 2 | 0x8000000000000000 * v196) ^ v196 / 128 ^ (v196 / 256 | 0x100000000000000 * v196)) + v192 + v228 + ((v248 / 0x80000 | 0x200000000000 * v248) ^ v248 / 64 ^ (v248 / 0x2000000000000000 | 8 * v248));
        v257 = v256 + 0x5b9cca4f7763e373 + v242 + (v254 & (v250 ^ v246) ^ v246) + ((v254 / 0x40000 | 0x400000000000 * v254) ^ (v254 / 0x4000 | 0x4000000000000 * v254) ^ (v254 / 0x20000000000 | 0x800000 * v254));
        v258 = v257 + v243;
        v259 = ((v255 / 0x400000000 | 0x40000000 * v255) ^ (v255 / 0x10000000 | 0x1000000000 * v255) ^ (v255 / 0x8000000000 | 0x2000000 * v255)) + ((v255 | v251) & v247 | v255 & v251) + v257;
        v260 = ((v200 / 2 | 0x8000000000000000 * v200) ^ v200 / 128 ^ (v200 / 256 | 0x100000000000000 * v200)) + v196 + v232 + ((v252 / 0x80000 | 0x200000000000 * v252) ^ v252 / 64 ^ (v252 / 0x2000000000000000 | 8 * v252));
        v261 = v260 + 0x682e6ff3d6b2b8a3 + v246 + (v258 & (v254 ^ v250) ^ v250) + ((v258 / 0x40000 | 0x400000000000 * v258) ^ (v258 / 0x4000 | 0x4000000000000 * v258) ^ (v258 / 0x20000000000 | 0x800000 * v258));
        v262 = v261 + v247;
        v53 = v260;
        v263 = ((v259 / 0x400000000 | 0x40000000 * v259) ^ (v259 / 0x10000000 | 0x1000000000 * v259) ^ (v259 / 0x8000000000 | 0x2000000 * v259)) + ((v259 | v255) & v251 | v259 & v255) + v261;
        v264 = ((v204 / 2 | 0x8000000000000000 * v204) ^ v204 / 128 ^ (v204 / 256 | 0x100000000000000 * v204)) + v200 + v236 + ((v256 / 0x80000 | 0x200000000000 * v256) ^ v256 / 64 ^ (v256 / 0x2000000000000000 | 8 * v256));
        v265 = v264 + 0x748f82ee5defb2fc + v250 + (v262 & (v258 ^ v254) ^ v254) + ((v262 / 0x40000 | 0x400000000000 * v262) ^ (v262 / 0x4000 | 0x4000000000000 * v262) ^ (v262 / 0x20000000000 | 0x800000 * v262));
        v266 = v265 + v251;
        v267 = ((v263 / 0x400000000 | 0x40000000 * v263) ^ (v263 / 0x10000000 | 0x1000000000 * v263) ^ (v263 / 0x8000000000 | 0x2000000 * v263)) + ((v263 | v259) & v255 | v263 & v259) + v265;
        v268 = ((v208 / 2 | 0x8000000000000000 * v208) ^ v208 / 128 ^ (v208 / 256 | 0x100000000000000 * v208)) + v204 + v240 + ((v260 / 0x80000 | 0x200000000000 * v260) ^ v260 / 64 ^ (v260 / 0x2000000000000000 | 8 * v260));
        v269 = v268 + 0x78a5636f43172f60 + v254 + (v266 & (v262 ^ v258) ^ v258) + ((v266 / 0x40000 | 0x400000000000 * v266) ^ (v266 / 0x4000 | 0x4000000000000 * v266) ^ (v266 / 0x20000000000 | 0x800000 * v266));
        v270 = v269 + v255;
        v271 = ((v267 / 0x400000000 | 0x40000000 * v267) ^ (v267 / 0x10000000 | 0x1000000000 * v267) ^ (v267 / 0x8000000000 | 0x2000000 * v267)) + ((v267 | v263) & v259 | v267 & v263) + v269;
        v272 = ((v212 / 2 | 0x8000000000000000 * v212) ^ v212 / 128 ^ (v212 / 256 | 0x100000000000000 * v212)) + v208 + v244 + ((v264 / 0x80000 | 0x200000000000 * v264) ^ v264 / 64 ^ (v264 / 0x2000000000000000 | 8 * v264));
        v273 = v272 - 0x7b3787eb5e0f548e + v258 + (v270 & (v266 ^ v262) ^ v262) + ((v270 / 0x40000 | 0x400000000000 * v270) ^ (v270 / 0x4000 | 0x4000000000000 * v270) ^ (v270 / 0x20000000000 | 0x800000 * v270));
        v274 = v273 + v259;
        v275 = ((v271 / 0x400000000 | 0x40000000 * v271) ^ (v271 / 0x10000000 | 0x1000000000 * v271) ^ (v271 / 0x8000000000 | 0x2000000 * v271)) + ((v271 | v267) & v263 | v271 & v267) + v273;
        v276 = ((v216 / 2 | 0x8000000000000000 * v216) ^ v216 / 128 ^ (v216 / 256 | 0x100000000000000 * v216)) + v212 + v248 + ((v268 / 0x80000 | 0x200000000000 * v268) ^ v268 / 64 ^ (v268 / 0x2000000000000000 | 8 * v268));
        v277 = v276 - 0x7338fdf7e59bc614 + v262 + (v274 & (v270 ^ v266) ^ v266) + ((v274 / 0x40000 | 0x400000000000 * v274) ^ (v274 / 0x4000 | 0x4000000000000 * v274) ^ (v274 / 0x20000000000 | 0x800000 * v274));
        v278 = v277 + v263;
        v279 = ((v275 / 0x400000000 | 0x40000000 * v275) ^ (v275 / 0x10000000 | 0x1000000000 * v275) ^ (v275 / 0x8000000000 | 0x2000000 * v275)) + ((v275 | v271) & v267 | v275 & v271) + v277;
        v280 = ((v220 / 2 | 0x8000000000000000 * v220) ^ v220 / 128 ^ (v220 / 256 | 0x100000000000000 * v220)) + v216 + v252 + ((v272 / 0x80000 | 0x200000000000 * v272) ^ v272 / 64 ^ (v272 / 0x2000000000000000 | 8 * v272));
        v281 = v280 - 0x6f410005dc9ce1d8 + v266 + (v278 & (v274 ^ v270) ^ v270) + ((v278 / 0x40000 | 0x400000000000 * v278) ^ (v278 / 0x4000 | 0x4000000000000 * v278) ^ (v278 / 0x20000000000 | 0x800000 * v278));
        v282 = v281 + v267;
        v283 = ((v279 / 0x400000000 | 0x40000000 * v279) ^ (v279 / 0x10000000 | 0x1000000000 * v279) ^ (v279 / 0x8000000000 | 0x2000000 * v279)) + ((v279 | v275) & v271 | v279 & v275) + v281;
        v284 = ((v224 / 2 | 0x8000000000000000 * v224) ^ v224 / 128 ^ (v224 / 256 | 0x100000000000000 * v224)) + v220 + v256 + ((v276 / 0x80000 | 0x200000000000 * v276) ^ v276 / 64 ^ (v276 / 0x2000000000000000 | 8 * v276));
        v285 = v284 - 0x5baf9314217d4217 + v270 + (v282 & (v278 ^ v274) ^ v274) + ((v282 / 0x40000 | 0x400000000000 * v282) ^ (v282 / 0x4000 | 0x4000000000000 * v282) ^ (v282 / 0x20000000000 | 0x800000 * v282));
        v286 = v285 + v271;
        v287 = ((v283 / 0x400000000 | 0x40000000 * v283) ^ (v283 / 0x10000000 | 0x1000000000 * v283) ^ (v283 / 0x8000000000 | 0x2000000 * v283)) + ((v283 | v279) & v275 | v283 & v279) + v285;
        v288 = ((v228 / 2 | 0x8000000000000000 * v228) ^ v228 / 128 ^ (v228 / 256 | 0x100000000000000 * v228)) + v224 + v260 + ((v280 / 0x80000 | 0x200000000000 * v280) ^ v280 / 64 ^ (v280 / 0x2000000000000000 | 8 * v280));
        v289 = v288 - 0x41065c084d3986eb + v274 + (v286 & (v282 ^ v278) ^ v278) + ((v286 / 0x40000 | 0x400000000000 * v286) ^ (v286 / 0x4000 | 0x4000000000000 * v286) ^ (v286 / 0x20000000000 | 0x800000 * v286));
        v290 = v289 + v275;
        v291 = ((v287 / 0x400000000 | 0x40000000 * v287) ^ (v287 / 0x10000000 | 0x1000000000 * v287) ^ (v287 / 0x8000000000 | 0x2000000 * v287)) + ((v287 | v283) & v279 | v287 & v283) + v289;
        v292 = ((v232 / 2 | 0x8000000000000000 * v232) ^ v232 / 128 ^ (v232 / 256 | 0x100000000000000 * v232)) + v228 + v264 + ((v284 / 0x80000 | 0x200000000000 * v284) ^ v284 / 64 ^ (v284 / 0x2000000000000000 | 8 * v284));
        v293 = v292 - 0x398e870d1c8dacd5 + v278 + (v290 & (v286 ^ v282) ^ v282) + ((v290 / 0x40000 | 0x400000000000 * v290) ^ (v290 / 0x4000 | 0x4000000000000 * v290) ^ (v290 / 0x20000000000 | 0x800000 * v290));
        v294 = v293 + v279;
        v295 = ((v291 / 0x400000000 | 0x40000000 * v291) ^ (v291 / 0x10000000 | 0x1000000000 * v291) ^ (v291 / 0x8000000000 | 0x2000000 * v291)) + ((v291 | v287) & v283 | v291 & v287) + v293;
        v296 = ((v236 / 2 | 0x8000000000000000 * v236) ^ v236 / 128 ^ (v236 / 256 | 0x100000000000000 * v236)) + v232 + v268 + ((v288 / 0x80000 | 0x200000000000 * v288) ^ v288 / 64 ^ (v288 / 0x2000000000000000 | 8 * v288));
        v297 = v296 - 0x35d8c13115d99e64 + v282 + (v294 & (v290 ^ v286) ^ v286) + ((v294 / 0x40000 | 0x400000000000 * v294) ^ (v294 / 0x4000 | 0x4000000000000 * v294) ^ (v294 / 0x20000000000 | 0x800000 * v294));
        v298 = v297 + v283;
        v299 = ((v295 / 0x400000000 | 0x40000000 * v295) ^ (v295 / 0x10000000 | 0x1000000000 * v295) ^ (v295 / 0x8000000000 | 0x2000000 * v295)) + ((v295 | v291) & v287 | v295 & v291) + v297;
        v300 = ((v240 / 2 | 0x8000000000000000 * v240) ^ v240 / 128 ^ (v240 / 256 | 0x100000000000000 * v240)) + v236 + v272 + ((v292 / 0x80000 | 0x200000000000 * v292) ^ v292 / 64 ^ (v292 / 0x2000000000000000 | 8 * v292));
        v301 = v300 - 0x2e794738de3f3df9 + v286 + (v298 & (v294 ^ v290) ^ v290) + ((v298 / 0x40000 | 0x400000000000 * v298) ^ (v298 / 0x4000 | 0x4000000000000 * v298) ^ (v298 / 0x20000000000 | 0x800000 * v298));
        v302 = v301 + v287;
        v303 = ((v299 / 0x400000000 | 0x40000000 * v299) ^ (v299 / 0x10000000 | 0x1000000000 * v299) ^ (v299 / 0x8000000000 | 0x2000000 * v299)) + ((v299 | v295) & v291 | v299 & v295) + v301;
        v304 = ((v244 / 2 | 0x8000000000000000 * v244) ^ v244 / 128 ^ (v244 / 256 | 0x100000000000000 * v244)) + v240 + v276 + ((v296 / 0x80000 | 0x200000000000 * v296) ^ v296 / 64 ^ (v296 / 0x2000000000000000 | 8 * v296));
        v305 = v304 - 0x15258229321f14e2 + v290 + (v302 & (v298 ^ v294) ^ v294) + ((v302 / 0x40000 | 0x400000000000 * v302) ^ (v302 / 0x4000 | 0x4000000000000 * v302) ^ (v302 / 0x20000000000 | 0x800000 * v302));
        v306 = v305 + v291;
        v307 = ((v303 / 0x400000000 | 0x40000000 * v303) ^ (v303 / 0x10000000 | 0x1000000000 * v303) ^ (v303 / 0x8000000000 | 0x2000000 * v303)) + ((v303 | v299) & v295 | v303 & v299) + v305;
        v308 = ((v248 / 2 | 0x8000000000000000 * v248) ^ v248 / 128 ^ (v248 / 256 | 0x100000000000000 * v248)) + v244 + v280 + ((v300 / 0x80000 | 0x200000000000 * v300) ^ v300 / 64 ^ (v300 / 0x2000000000000000 | 8 * v300));
        v309 = v308 - 0xa82b08011912e88 + v294 + (v306 & (v302 ^ v298) ^ v298) + ((v306 / 0x40000 | 0x400000000000 * v306) ^ (v306 / 0x4000 | 0x4000000000000 * v306) ^ (v306 / 0x20000000000 | 0x800000 * v306));
        v310 = v309 + v295;
        v311 = ((v307 / 0x400000000 | 0x40000000 * v307) ^ (v307 / 0x10000000 | 0x1000000000 * v307) ^ (v307 / 0x8000000000 | 0x2000000 * v307)) + ((v307 | v303) & v299 | v307 & v303) + v309;
        v312 = ((v252 / 2 | 0x8000000000000000 * v252) ^ v252 / 128 ^ (v252 / 256 | 0x100000000000000 * v252)) + v248 + v284 + ((v304 / 0x80000 | 0x200000000000 * v304) ^ v304 / 64 ^ (v304 / 0x2000000000000000 | 8 * v304));
        v313 = v312 + 0x6f067aa72176fba + v298 + (v310 & (v306 ^ v302) ^ v302) + ((v310 / 0x40000 | 0x400000000000 * v310) ^ (v310 / 0x4000 | 0x4000000000000 * v310) ^ (v310 / 0x20000000000 | 0x800000 * v310));
        v314 = v313 + v299;
        v315 = ((v311 / 0x400000000 | 0x40000000 * v311) ^ (v311 / 0x10000000 | 0x1000000000 * v311) ^ (v311 / 0x8000000000 | 0x2000000 * v311)) + ((v311 | v307) & v303 | v311 & v307) + v313;
        v316 = ((v256 / 2 | 0x8000000000000000 * v256) ^ v256 / 128 ^ (v256 / 256 | 0x100000000000000 * v256)) + v252 + v288 + ((v308 / 0x80000 | 0x200000000000 * v308) ^ v308 / 64 ^ (v308 / 0x2000000000000000 | 8 * v308));
        v317 = v316 + 0xa637dc5a2c898a6 + v302 + (v314 & (v310 ^ v306) ^ v306) + ((v314 / 0x40000 | 0x400000000000 * v314) ^ (v314 / 0x4000 | 0x4000000000000 * v314) ^ (v314 / 0x20000000000 | 0x800000 * v314));
        v318 = v317 + v303;
        v319 = ((v315 / 0x400000000 | 0x40000000 * v315) ^ (v315 / 0x10000000 | 0x1000000000 * v315) ^ (v315 / 0x8000000000 | 0x2000000 * v315)) + ((v315 | v311) & v307 | v315 & v311) + v317;
        v320 = ((v260 / 2 | 0x8000000000000000 * v260) ^ v260 / 128 ^ (v260 / 256 | 0x100000000000000 * v260)) + v256 + v292 + ((v312 / 0x80000 | 0x200000000000 * v312) ^ v312 / 64 ^ (v312 / 0x2000000000000000 | 8 * v312));
        v321 = v320 + 0x113f9804bef90dae + v306 + (v318 & (v314 ^ v310) ^ v310) + ((v318 / 0x40000 | 0x400000000000 * v318) ^ (v318 / 0x4000 | 0x4000000000000 * v318) ^ (v318 / 0x20000000000 | 0x800000 * v318));
        v322 = v321 + v307;
        v323 = ((v319 / 0x400000000 | 0x40000000 * v319) ^ (v319 / 0x10000000 | 0x1000000000 * v319) ^ (v319 / 0x8000000000 | 0x2000000 * v319)) + ((v319 | v315) & v311 | v319 & v315) + v321;
        v324 = ((v264 / 2 | 0x8000000000000000 * v264) ^ v264 / 128 ^ (v264 / 256 | 0x100000000000000 * v264)) + v260 + v296 + ((v316 / 0x80000 | 0x200000000000 * v316) ^ v316 / 64 ^ (v316 / 0x2000000000000000 | 8 * v316));
        v325 = v324 + 0x1b710b35131c471b + v310 + (v322 & (v318 ^ v314) ^ v314) + ((v322 / 0x40000 | 0x400000000000 * v322) ^ (v322 / 0x4000 | 0x4000000000000 * v322) ^ (v322 / 0x20000000000 | 0x800000 * v322));
        v326 = v325 + v311;
        v327 = ((v323 / 0x400000000 | 0x40000000 * v323) ^ (v323 / 0x10000000 | 0x1000000000 * v323) ^ (v323 / 0x8000000000 | 0x2000000 * v323)) + ((v323 | v319) & v315 | v323 & v319) + v325;
        v328 = ((v268 / 2 | 0x8000000000000000 * v268) ^ v268 / 128 ^ (v268 / 256 | 0x100000000000000 * v268)) + v264 + v300 + ((v320 / 0x80000 | 0x200000000000 * v320) ^ v320 / 64 ^ (v320 / 0x2000000000000000 | 8 * v320));
        v329 = v328 + 0x28db77f523047d84 + v314 + (v326 & (v322 ^ v318) ^ v318) + ((v326 / 0x40000 | 0x400000000000 * v326) ^ (v326 / 0x4000 | 0x4000000000000 * v326) ^ (v326 / 0x20000000000 | 0x800000 * v326));
        v330 = v329 + v315;
        v331 = ((v327 / 0x400000000 | 0x40000000 * v327) ^ (v327 / 0x10000000 | 0x1000000000 * v327) ^ (v327 / 0x8000000000 | 0x2000000 * v327)) + ((v327 | v323) & v319 | v327 & v323) + v329;
        v332 = ((v272 / 2 | 0x8000000000000000 * v272) ^ v272 / 128 ^ (v272 / 256 | 0x100000000000000 * v272)) + v268 + v304 + ((v324 / 0x80000 | 0x200000000000 * v324) ^ v324 / 64 ^ (v324 / 0x2000000000000000 | 8 * v324));
        v333 = v332 + 0x32caab7b40c72493 + v318 + (v330 & (v326 ^ v322) ^ v322) + ((v330 / 0x40000 | 0x400000000000 * v330) ^ (v330 / 0x4000 | 0x4000000000000 * v330) ^ (v330 / 0x20000000000 | 0x800000 * v330));
        v334 = v333 + v319;
        v335 = ((v331 / 0x400000000 | 0x40000000 * v331) ^ (v331 / 0x10000000 | 0x1000000000 * v331) ^ (v331 / 0x8000000000 | 0x2000000 * v331)) + ((v331 | v327) & v323 | v331 & v327) + v333;
        v336 = ((v276 / 2 | 0x8000000000000000 * v276) ^ v276 / 128 ^ (v276 / 256 | 0x100000000000000 * v276)) + v272 + v308 + ((v328 / 0x80000 | 0x200000000000 * v328) ^ v328 / 64 ^ (v328 / 0x2000000000000000 | 8 * v328));
        v337 = v336 + 0x3c9ebe0a15c9bebc + v322 + (v334 & (v330 ^ v326) ^ v326) + ((v334 / 0x40000 | 0x400000000000 * v334) ^ (v334 / 0x4000 | 0x4000000000000 * v334) ^ (v334 / 0x20000000000 | 0x800000 * v334));
        v338 = v337 + v323;
        v339 = ((v335 / 0x400000000 | 0x40000000 * v335) ^ (v335 / 0x10000000 | 0x1000000000 * v335) ^ (v335 / 0x8000000000 | 0x2000000 * v335)) + ((v335 | v331) & v327 | v335 & v331) + v337;
        v340 = ((v280 / 2 | 0x8000000000000000 * v280) ^ v280 / 128 ^ (v280 / 256 | 0x100000000000000 * v280)) + v276 + v312 + ((v332 / 0x80000 | 0x200000000000 * v332) ^ v332 / 64 ^ (v332 / 0x2000000000000000 | 8 * v332));
        v341 = v340 + 0x431d67c49c100d4c + v326 + (v338 & (v334 ^ v330) ^ v330) + ((v338 / 0x40000 | 0x400000000000 * v338) ^ (v338 / 0x4000 | 0x4000000000000 * v338) ^ (v338 / 0x20000000000 | 0x800000 * v338));
        v342 = v341 + v327;
        v343 = ((v339 / 0x400000000 | 0x40000000 * v339) ^ (v339 / 0x10000000 | 0x1000000000 * v339) ^ (v339 / 0x8000000000 | 0x2000000 * v339)) + ((v339 | v335) & v331 | v339 & v335) + v341;
        v344 = ((v284 / 2 | 0x8000000000000000 * v284) ^ v284 / 128 ^ (v284 / 256 | 0x100000000000000 * v284)) + v280 + v316 + ((v336 / 0x80000 | 0x200000000000 * v336) ^ v336 / 64 ^ (v336 / 0x2000000000000000 | 8 * v336));
        v345 = v344 + 0x4cc5d4becb3e42b6 + v330 + (v342 & (v338 ^ v334) ^ v334) + ((v342 / 0x40000 | 0x400000000000 * v342) ^ (v342 / 0x4000 | 0x4000000000000 * v342) ^ (v342 / 0x20000000000 | 0x800000 * v342));
        v346 = v345 + v331;
        v347 = ((v343 / 0x400000000 | 0x40000000 * v343) ^ (v343 / 0x10000000 | 0x1000000000 * v343) ^ (v343 / 0x8000000000 | 0x2000000 * v343)) + ((v343 | v339) & v335 | v343 & v339) + v345;
        v348 = ((v288 / 2 | 0x8000000000000000 * v288) ^ v288 / 128 ^ (v288 / 256 | 0x100000000000000 * v288)) + v284 + v320 + ((v340 / 0x80000 | 0x200000000000 * v340) ^ v340 / 64 ^ (v340 / 0x2000000000000000 | 8 * v340));
        v349 = v348 + 0x597f299cfc657e2a + v334 + (v346 & (v342 ^ v338) ^ v338) + ((v346 / 0x40000 | 0x400000000000 * v346) ^ (v346 / 0x4000 | 0x4000000000000 * v346) ^ (v346 / 0x20000000000 | 0x800000 * v346));
        v350 = v349 + v335;
        v351 = ((v347 / 0x400000000 | 0x40000000 * v347) ^ (v347 / 0x10000000 | 0x1000000000 * v347) ^ (v347 / 0x8000000000 | 0x2000000 * v347)) + ((v347 | v343) & v339 | v347 & v343) + v349;
        v352 = ((v292 / 2 | 0x8000000000000000 * v292) ^ v292 / 128 ^ (v292 / 256 | 0x100000000000000 * v292)) + v288 + v324 + ((v344 / 0x80000 | 0x200000000000 * v344) ^ v344 / 64 ^ (v344 / 0x2000000000000000 | 8 * v344));
        v353 = v352 + 0x5fcb6fab3ad6faec + v338 + (v350 & (v346 ^ v342) ^ v342) + ((v350 / 0x40000 | 0x400000000000 * v350) ^ (v350 / 0x4000 | 0x4000000000000 * v350) ^ (v350 / 0x20000000000 | 0x800000 * v350));
        v354 = v353 + v339;
        v355 = ((v351 / 0x400000000 | 0x40000000 * v351) ^ (v351 / 0x10000000 | 0x1000000000 * v351) ^ (v351 / 0x8000000000 | 0x2000000 * v351)) + ((v351 | v347) & v343 | v351 & v347) + v353;
        v356 = v355 + v48;
        v357 = ((v296 / 2 | 0x8000000000000000 * v296) ^ v296 / 128 ^ (v296 / 256 | 0x100000000000000 * v296)) + v292 + v328 + ((v348 / 0x80000 | 0x200000000000 * v348) ^ v348 / 64 ^ (v348 / 0x2000000000000000 | 8 * v348));
        v358 = v357 + 0x6c44198c4a475817 + v342 + (v354 & (v350 ^ v346) ^ v346) + ((v354 / 0x40000 | 0x400000000000 * v354) ^ (v354 / 0x4000 | 0x4000000000000 * v354) ^ (v354 / 0x20000000000 | 0x800000 * v354));
        result2 = ((v355 | v351) & v347 | v355 & v351) + v47 + ((v355 / 0x400000000 | 0x40000000 * v355) ^ (v355 / 0x10000000 | 0x1000000000 * v355) ^ (v355 / 0x8000000000 | 0x2000000 * v355)) + v358;
        *(int64_t *)result = result2;
        *v8 = v356;
        v15 += v351;
        v14 += v347;
        v359 = v343 + v46 + v358;
        v360 = v354 + v49;
        v361 = v350 + v50;
        v13 += v346;
        *v4 = v15;
        *v5 = v14;
        *v6 = v359;
        *v7 = v360;
        *v9 = v361;
        *v10 = v13;
    }
    // 0x406ebc
    return result2;
}
// Address range: 0x406ed0 - 0x406ff5
int64_t function_406ed0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 80); // 0x406ed4
    int64_t * v2 = (int64_t *)(a1 + 72); // 0x406edb
    int64_t v3 = *v2; // 0x406edb
    int64_t * v4 = (int64_t *)(a1 + 64); // 0x406f12
    uint64_t v5 = *v4 + v1; // 0x406f12
    *v4 = v5;
    int64_t v6 = v3; // 0x406f1a
    if (v5 < v1) {
        // 0x406f1c
        v6 = v3 + 1;
        *v2 = v6;
    }
    int64_t v7 = v1 < 112 ? 128 : 256; // 0x406eed
    int64_t v8 = v1 < 112 ? 120 : 248; // 0x406eff
    int64_t v9 = v1 < 112 ? 112 : 240; // 0x406f0e
    int64_t v10 = a1 + 88; // 0x406f2b
    *(int64_t *)(v9 + v10) = llvm_bswap_i64(8 * v6 | v5 / 0x2000000000000000);
    *(int64_t *)(v8 + v10) = 0x8000000 * v5 % 0xff0000000001 | 0x800000000000000 * v5 | 0x80000000000 * v5 % 0xff000000000001 | 2048 * v5 % 0xff00000001 | v5 / 0x20000000000000 % 256 | v5 / 32 & 0xff000000 | v5 / 0x200000 & 0xff0000 | v5 / 0x2000000000 & 0xff00;
    memcpy((int64_t *)(v1 + v10), (int64_t *)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", (int32_t)(v7 - v1) - 16);
    return function_403280(v10, v7, a1);
}
// Address range: 0x407000 - 0x407022
int64_t function_407000(int64_t a1, int64_t a2) {
    // 0x407000
    function_406ed0(a1, a2);
    int64_t v1; // 0x407000
    return function_403240(a1, a2, v1);
}
// Address range: 0x407030 - 0x407052
int64_t function_407030(int64_t a1, int64_t a2) {
    // 0x407030
    function_406ed0(a1, a2);
    int64_t v1; // 0x407030
    return function_403260(a1, a2, v1);
}
// Address range: 0x407060 - 0x40736e
int64_t function_407060(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1 + 80; // 0x407077
    int64_t * v3 = (int64_t *)v2; // 0x407077
    int64_t v4 = *v3; // 0x407077
    int64_t v5 = a1; // 0x40707e
    int64_t v6 = a2; // 0x40707e
    int64_t v7; // 0x407060
    if (v4 != 0) {
        int64_t v8 = v1 + 88; // 0x4071ce
        uint64_t v9 = 256 - v4; // 0x4071d2
        int64_t v10 = v9 > a2 ? a2 : v9; // 0x4071dc
        int64_t * dest_mem = memcpy((int64_t *)(v4 + v8), (int64_t *)a1, (int32_t)v10); // 0x4071e6
        uint64_t v11 = *v3 + v10; // 0x4071f0
        *v3 = v11;
        int64_t v12 = (int64_t)dest_mem; // 0x4071ff
        if (v11 >= 129) {
            int64_t v13 = function_403280(v8, v11 & -128, v1); // 0x40728d
            uint64_t v14 = *v3; // 0x407292
            int64_t v15 = (v10 + v4 & -128) + v8; // 0x40729b
            uint64_t v16 = v14 % 128; // 0x40729f
            *v3 = v16;
            if ((int32_t)v16 >= 8) {
                int64_t v17 = v1 + 96 & -8; // 0x4072e8
                *(int64_t *)v8 = *(int64_t *)v15;
                *(int64_t *)(v16 + v2) = *(int64_t *)(v16 + v15 - 8);
                int64_t v18 = v8 - v17; // 0x407300
                int64_t v19 = (v16 + v18) / 8 % 0x20000000; // 0x40730a
                __asm_rep_movsq_memcpy((char *)v17, (char *)(v15 - v18), v19);
                v12 = v19;
            } else {
                if ((v14 & 4) != 0) {
                    // 0x407317
                    *(int32_t *)v8 = *(int32_t *)v15;
                    uint32_t v20 = *(int32_t *)(v16 + v15 - 4); // 0x407320
                    *(int32_t *)(v16 + v1 + 84) = v20;
                    v12 = v20;
                } else {
                    // 0x4072b1
                    v12 = v13;
                    if (v16 != 0) {
                        unsigned char v21 = *(char *)v15; // 0x4072b9
                        *(char *)v8 = v21;
                        v12 = v21;
                        if ((v14 & 2) != 0) {
                            uint16_t v22 = *(int16_t *)(v16 + v15 - 2); // 0x4072cc
                            *(int16_t *)(v16 + v1 + 86) = v22;
                            v12 = v22;
                        }
                    }
                }
            }
        }
        // 0x407201
        v7 = v12;
        v5 = v10 + a1;
        v6 = a2 - v10;
    }
    int64_t result = v7; // 0x407088
    int64_t v23 = v5; // 0x407088
    int64_t v24 = v6; // 0x407088
    int64_t v25; // 0x407060
    int64_t v26; // 0x407060
    int64_t v27; // 0x407060
    int64_t v28; // 0x407060
    int64_t v29; // 0x407060
    int64_t v30; // 0x407060
    int64_t v31; // 0x407060
    int64_t v32; // 0x407060
    int64_t v33; // 0x407060
    if (v6 < 128) {
        goto lab_0x4071ac;
    } else {
        if (v5 % 8 == 0) {
            int64_t v34 = v6 & -128; // 0x40719d
            result = function_403280(v5, v34, v1);
            v23 = v34 + v5;
            v24 = v6 % 128;
            goto lab_0x4071ac;
        } else {
            int64_t v35 = v1 + 88; // 0x407097
            if (v6 == 128) {
                int64_t v36 = *v3; // 0x407137
                v25 = v36 + v35;
                v26 = v36;
                v29 = v5;
                v27 = 128;
                v32 = v35;
                goto lab_0x407210;
            } else {
                int64_t v37 = v6 - 129 & -128; // 0x4070b0
                int64_t v38 = (v6 - 1 & -128) + v5; // 0x4070bf
                int128_t v39 = __asm_movdqu(*(int128_t *)v5); // 0x4070c8
                int64_t v40 = v5 + 128; // 0x4070d7
                __asm_movups(*(int128_t *)v35, v39);
                __asm_movups(*(int128_t *)(v1 + 104), __asm_movdqu(*(int128_t *)(v5 + 16)));
                __asm_movups(*(int128_t *)(v1 + 120), __asm_movdqu(*(int128_t *)(v5 + 32)));
                __asm_movups(*(int128_t *)(v1 + 136), __asm_movdqu(*(int128_t *)(v5 + 48)));
                __asm_movups(*(int128_t *)(v1 + 152), __asm_movdqu(*(int128_t *)(v5 + 64)));
                __asm_movups(*(int128_t *)(v1 + 168), __asm_movdqu(*(int128_t *)(v5 + 80)));
                __asm_movups(*(int128_t *)(v1 + 184), __asm_movdqu(*(int128_t *)(v5 + 96)));
                __asm_movups(*(int128_t *)(v1 + 200), __asm_movdqu(*(int128_t *)(v5 + 112)));
                function_403280(v35, 128, v1);
                while (v40 != v38) {
                    int64_t v41 = v40;
                    v39 = __asm_movdqu(*(int128_t *)v41);
                    v40 = v41 + 128;
                    __asm_movups(*(int128_t *)v35, v39);
                    __asm_movups(*(int128_t *)(v1 + 104), __asm_movdqu(*(int128_t *)(v41 + 16)));
                    __asm_movups(*(int128_t *)(v1 + 120), __asm_movdqu(*(int128_t *)(v41 + 32)));
                    __asm_movups(*(int128_t *)(v1 + 136), __asm_movdqu(*(int128_t *)(v41 + 48)));
                    __asm_movups(*(int128_t *)(v1 + 152), __asm_movdqu(*(int128_t *)(v41 + 64)));
                    __asm_movups(*(int128_t *)(v1 + 168), __asm_movdqu(*(int128_t *)(v41 + 80)));
                    __asm_movups(*(int128_t *)(v1 + 184), __asm_movdqu(*(int128_t *)(v41 + 96)));
                    __asm_movups(*(int128_t *)(v1 + 200), __asm_movdqu(*(int128_t *)(v41 + 112)));
                    function_403280(v35, 128, v1);
                }
                // 0x407128
                v31 = -v37;
                v33 = v35;
                v28 = v6 - 128 - v37;
                v30 = v38;
                goto lab_0x407137;
            }
        }
    }
  lab_0x4071ac:
    // 0x4071ac
    if (v24 == 0) {
        // 0x4071b5
        return result;
    }
    // 0x407361
    v31 = result;
    v33 = v1 + 88;
    v28 = v24;
    v30 = v23;
    goto lab_0x407137;
  lab_0x407137:;
    int64_t v42 = *v3; // 0x407137
    int64_t v43 = v42 + v33; // 0x40713c
    uint32_t v44 = (int32_t)v28; // 0x407141
    v25 = v43;
    v26 = v42;
    v29 = v30;
    v27 = v28;
    v32 = v33;
    int64_t v45; // 0x407060
    int64_t v46; // 0x407060
    if (v44 >= 8) {
        goto lab_0x407210;
    } else {
        int64_t result2; // 0x407060
        if ((v28 & 4) != 0) {
            // 0x407338
            *(int32_t *)v43 = *(int32_t *)v30;
            int64_t v47 = v28 & 0xffffffff; // 0x40733d
            int64_t v48 = v47 - 4;
            *(int32_t *)(v43 + v48) = *(int32_t *)(v48 + v30);
            result2 = v47;
        } else {
            // 0x407155
            result2 = v31;
            if (v44 != 0) {
                unsigned char v49 = *(char *)v30; // 0x40715a
                *(char *)v43 = v49;
                result2 = v49;
                if ((v28 & 2) != 0) {
                    int64_t v50 = v28 & 0xffffffff; // 0x40734e
                    int64_t v51 = v50 - 2;
                    *(int16_t *)(v43 + v51) = *(int16_t *)(v51 + v30);
                    result2 = v50;
                }
            }
        }
        int64_t v52 = v42 + v28; // 0x40716a
        v46 = v33;
        v45 = v52;
        if (v52 < 128) {
            // 0x407177
            *v3 = v52;
            return result2;
        }
        goto lab_0x40724d;
    }
  lab_0x407210:;
    int64_t v53 = v25 + 8 & -8; // 0x407217
    *(int64_t *)v25 = *(int64_t *)v29;
    int64_t result3 = v27 & 0xffffffff; // 0x40721e
    int64_t v54 = result3 - 8;
    *(int64_t *)(v54 + v25) = *(int64_t *)(v54 + v29);
    int64_t v55 = v25 - v53; // 0x407231
    int64_t v56 = v27 + v26; // 0x40723a
    __asm_rep_movsq_memcpy((char *)v53, (char *)(v29 - v55), (v55 + v27) / 8 % 0x20000000);
    v46 = v32;
    v45 = v56;
    if (v56 < 128) {
        // 0x407177
        *v3 = v56;
        return result3;
    }
    goto lab_0x40724d;
  lab_0x40724d:;
    int64_t v57 = v45 - 128; // 0x407258
    function_403280(v46, 128, v1);
    int64_t dest_mem2 = (int64_t)memcpy((int64_t *)v46, (int64_t *)(v1 + 216), (int32_t)v57); // 0x407274
    // 0x407177
    *v3 = v57;
    return dest_mem2;
}
// Address range: 0x407370 - 0x407431
int64_t function_407370(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x6a09e667f3bcc908; // bp-360, 0x407385
    int64_t v2 = &v1; // 0x407389
    function_407060(a1, a2, &v1);
    function_406ed0(v2, a2);
    return function_403240(v2, a3, v2);
}
// Address range: 0x407440 - 0x407501
int64_t function_407440(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = -0x344462a23efa6128; // bp-360, 0x407455
    int64_t v2 = &v1; // 0x407459
    function_407060(a1, a2, &v1);
    function_406ed0(v2, a2);
    return function_403260(v2, a3, v2);
}
// Address range: 0x407510 - 0x4076a5
int64_t function_407510(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x40752a
    if (mem == NULL) {
        // 0x407690
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x40752a
    int64_t v2; // 0x407510
    int32_t v3 = v2;
    int64_t v4 = 0x6a09e667f3bcc908; // bp-392, 0x40754e
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x407510
    int64_t v8; // 0x407604
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x4075ff
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x407622
                goto lab_0x407622;
            }
            // 0x4075e8
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x407627;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x407610
        function_403280(v1, 0x8000, v6);
    }
  lab_0x407622:;
    int32_t v11 = v3 & 32; // 0x407622
    v7 = v11;
    if (v11 != 0) {
        // 0x407670
        free(mem);
        return 1;
    }
  lab_0x407627:;
    int64_t v12 = v7; // 0x40762a
    int64_t v13 = 1; // 0x40762a
    if (v8 != 0) {
        // 0x407660
        function_407060(v1, v8, &v4);
        v12 = v6;
        v13 = v8;
    }
    // 0x40762c
    function_406ed0(v6, v13);
    function_403240(v6, a2, v12);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x4076b0 - 0x407845
int64_t function_4076b0(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x4076ca
    if (mem == NULL) {
        // 0x407830
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x4076ca
    int64_t v2; // 0x4076b0
    int32_t v3 = v2;
    int64_t v4 = -0x344462a23efa6128; // bp-392, 0x4076ee
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x4076b0
    int64_t v8; // 0x4077a4
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x40779f
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x4077c2
                goto lab_0x4077c2;
            }
            // 0x407788
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x4077c7;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x4077b0
        function_403280(v1, 0x8000, v6);
    }
  lab_0x4077c2:;
    int32_t v11 = v3 & 32; // 0x4077c2
    v7 = v11;
    if (v11 != 0) {
        // 0x407810
        free(mem);
        return 1;
    }
  lab_0x4077c7:;
    int64_t v12 = v7; // 0x4077ca
    int64_t v13 = 1; // 0x4077ca
    if (v8 != 0) {
        // 0x407800
        function_407060(v1, v8, &v4);
        v12 = v6;
        v13 = v8;
    }
    // 0x4077cc
    function_406ed0(v6, v13);
    function_403260(v6, a2, v12);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x407850 - 0x407855
int64_t function_407850(void) {
    // 0x407850
    int64_t fd; // 0x407850
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x407860 - 0x407881
int64_t function_407860(int64_t stream, int64_t advice, int64_t a3) {
    // 0x407860
    if (stream == 0) {
        // 0x407880
        int64_t result; // 0x407860
        return result;
    }
    // 0x407865
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x407890 - 0x407923
int64_t function_407890(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x407897
    int64_t result = (int64_t)file; // 0x407897
    if (file == NULL) {
        // 0x4078b1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x4078a7
    if (v1 >= 3) {
        // 0x4078b1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_409570((int64_t)v1, v2); // 0x4078ca
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x407908
        function_409db0(result, v2);
        // 0x4078b1
        return 0;
    }
    // 0x4078ce
    if ((int32_t)function_409db0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x4078e0
        if (v4 != NULL) {
            // 0x4078b1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4078ed
    close(fd);
    // 0x4078b1
    return 0;
}
// Address range: 0x407930 - 0x4079c9
int64_t function_407930(int64_t str) {
    // 0x407930
    if (str == 0) {
        // 0x4079a9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40793e
    int64_t result = (int64_t)found_char_pos; // 0x40793e
    if (found_char_pos == NULL) {
        // 0x407999
        g44 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x407948
    if (v1 - str < 7) {
        // 0x407999
        g44 = str;
        g30 = str;
        return result;
    }
    // 0x407958
    bool v2; // 0x407930
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x407930
    int64_t v5 = result - 6; // 0x407930
    int64_t v6 = 7; // 0x407966
    unsigned char v7 = *(char *)v5; // 0x407966
    char v8 = *(char *)v4; // 0x407966
    char v9 = v8; // 0x407966
    bool v10 = false; // 0x407966
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
    int64_t v12 = (int64_t)"lt-"; // 0x407970
    int64_t v13 = v1; // 0x407970
    int64_t v14 = 3; // 0x407970
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x407999
        g44 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x407982
    char v16 = *(char *)v12; // 0x407982
    char v17 = v16; // 0x407982
    bool v18 = false; // 0x407982
    while (v15 == v16) {
        // 0x407972
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
    int64_t v20 = v1; // 0x40798c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40798e
        v20 = result + 4;
        g27 = v20;
    }
    // 0x407999
    g44 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x4079d0 - 0x407ac2
int64_t function_4079d0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4079e4
    int64_t result = (int64_t)v1; // 0x4079e4
    if (result != a1) {
        // 0x4079f1
        return result;
    }
    int64_t v2 = function_40af20(); // 0x407a00
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x407ab6
    if (v3 == 85) {
        // 0x407a10
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x407aa8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x407a3e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x407a4b
        // 0x4079f1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x407aa8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x407a8d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x407a9a
    // 0x4079f1
    return result4;
}
// Address range: 0x407ad0 - 0x407b27
int64_t function_407ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x407ad0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x407b18
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x407b27 - 0x408cf1
int64_t function_407b27(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x407b71
    int64_t v3 = 0; // 0x407b71
    int64_t v4; // 0x407b27
    int64_t v5; // 0x407b27
    int64_t v6; // 0x407b27
    int64_t v7; // 0x407b27
    int64_t v8; // 0x407b27
    int64_t v9; // 0x407b27
    int64_t v10; // 0x407b27
    int64_t v11; // 0x407b27
    int64_t v12; // 0x407b27
    int64_t v13; // 0x407b27
    int64_t v14; // 0x407b27
    int64_t v15; // 0x407b27
    int64_t v16; // 0x407b27
    int64_t v17; // 0x407b27
    int64_t v18; // 0x407b27
    int64_t result; // 0x407b27
    int64_t v19; // 0x407b27
    int32_t wc; // bp+132, 0x407b27
    int64_t ps; // bp+136, 0x407b27
    char v20; // 0x4080e0
    int64_t v21; // 0x4080e0
    int64_t v22; // 0x408488
    int64_t v23; // 0x407b27
    int64_t v24; // 0x4084a7
    int32_t v25; // 0x407b27
    while (true) {
      lab_0x407b78_2:
        // 0x407b78
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x407b27
        int64_t v27; // 0x407bac
        while (true) {
          lab_0x407b78:
            // 0x407b78
            v5 = v26;
            bool v28 = v15 == v5; // 0x407b83
            if (v15 == -1) {
                // 0x407b85
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x407b93
            if (v28) {
                // break (via goto) -> 0x4082f8
                goto lab_0x4082f8;
            }
            // 0x407b9c
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
                    // 0x40818b
                    if (v25 % 2 == 0) {
                        goto lab_0x407cd1;
                    }
                    // 0x4085ad
                    v26 = v5 + 1;
                    goto lab_0x407b78;
                }
                case 7: {
                    goto lab_0x407cd1;
                }
                case 8: {
                    goto lab_0x407cd1;
                }
                case 9: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x407cd1;
                }
                case 12: {
                    goto lab_0x407cd1;
                }
                case 13: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x407c9d;
                }
                case 36: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x407cd1;
                }
                case 38: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x407cd1;
                }
                case 44: {
                    goto lab_0x407cd1;
                }
                case 45: {
                    goto lab_0x407cd1;
                }
                case 46: {
                    goto lab_0x407cd1;
                }
                case 47: {
                    goto lab_0x407cd1;
                }
                case 48: {
                    goto lab_0x407cd1;
                }
                case 49: {
                    goto lab_0x407cd1;
                }
                case 50: {
                    goto lab_0x407cd1;
                }
                case 51: {
                    goto lab_0x407cd1;
                }
                case 52: {
                    goto lab_0x407cd1;
                }
                case 53: {
                    goto lab_0x407cd1;
                }
                case 54: {
                    goto lab_0x407cd1;
                }
                case 55: {
                    goto lab_0x407cd1;
                }
                case 56: {
                    goto lab_0x407cd1;
                }
                case 57: {
                    goto lab_0x407cd1;
                }
                case 58: {
                    goto lab_0x407cd1;
                }
                case 59: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x407cd1;
                }
                case 66: {
                    goto lab_0x407cd1;
                }
                case 67: {
                    goto lab_0x407cd1;
                }
                case 68: {
                    goto lab_0x407cd1;
                }
                case 69: {
                    goto lab_0x407cd1;
                }
                case 70: {
                    goto lab_0x407cd1;
                }
                case 71: {
                    goto lab_0x407cd1;
                }
                case 72: {
                    goto lab_0x407cd1;
                }
                case 73: {
                    goto lab_0x407cd1;
                }
                case 74: {
                    goto lab_0x407cd1;
                }
                case 75: {
                    goto lab_0x407cd1;
                }
                case 76: {
                    goto lab_0x407cd1;
                }
                case 77: {
                    goto lab_0x407cd1;
                }
                case 78: {
                    goto lab_0x407cd1;
                }
                case 79: {
                    goto lab_0x407cd1;
                }
                case 80: {
                    goto lab_0x407cd1;
                }
                case 81: {
                    goto lab_0x407cd1;
                }
                case 82: {
                    goto lab_0x407cd1;
                }
                case 83: {
                    goto lab_0x407cd1;
                }
                case 84: {
                    goto lab_0x407cd1;
                }
                case 85: {
                    goto lab_0x407cd1;
                }
                case 86: {
                    goto lab_0x407cd1;
                }
                case 87: {
                    goto lab_0x407cd1;
                }
                case 88: {
                    goto lab_0x407cd1;
                }
                case 89: {
                    goto lab_0x407cd1;
                }
                case 90: {
                    goto lab_0x407cd1;
                }
                case 91: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x407cd1;
                }
                case 94: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x407cd1;
                }
                case 96: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x407cd1;
                }
                case 98: {
                    goto lab_0x407cd1;
                }
                case 99: {
                    goto lab_0x407cd1;
                }
                case 100: {
                    goto lab_0x407cd1;
                }
                case 101: {
                    goto lab_0x407cd1;
                }
                case 102: {
                    goto lab_0x407cd1;
                }
                case 103: {
                    goto lab_0x407cd1;
                }
                case 104: {
                    goto lab_0x407cd1;
                }
                case 105: {
                    goto lab_0x407cd1;
                }
                case 106: {
                    goto lab_0x407cd1;
                }
                case 107: {
                    goto lab_0x407cd1;
                }
                case 108: {
                    goto lab_0x407cd1;
                }
                case 109: {
                    goto lab_0x407cd1;
                }
                case 110: {
                    goto lab_0x407cd1;
                }
                case 111: {
                    goto lab_0x407cd1;
                }
                case 112: {
                    goto lab_0x407cd1;
                }
                case 113: {
                    goto lab_0x407cd1;
                }
                case 114: {
                    goto lab_0x407cd1;
                }
                case 115: {
                    goto lab_0x407cd1;
                }
                case 116: {
                    goto lab_0x407cd1;
                }
                case 117: {
                    goto lab_0x407cd1;
                }
                case 118: {
                    goto lab_0x407cd1;
                }
                case 119: {
                    goto lab_0x407cd1;
                }
                case 120: {
                    goto lab_0x407cd1;
                }
                case 121: {
                    goto lab_0x407cd1;
                }
                case 122: {
                    goto lab_0x407cd1;
                }
                case 123: {
                    goto lab_0x407c75;
                }
                case 124: {
                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x407c75;
                }
                case 126: {
                    goto lab_0x407c9d;
                }
                default: {
                    goto lab_0x408075;
                }
            }
        }
      lab_0x408075:
        if (v23 != 1) {
            // 0x4083e0
            ps = 0;
            int64_t len = v15; // 0x4083f0
            if (v15 == -1) {
                // 0x4083f2
                len = strlen((char *)str);
            }
            // 0x40841e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40847f:
                // 0x40847f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x408484
                int64_t v30 = v29 + str;
                v24 = function_40ade0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4089fa_2;
                    }
                    case -1: {
                        goto lab_0x4089fa_2;
                    }
                    case -2: {
                        // 0x408add
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x408b17
                            v19 = v18;
                            int64_t v31 = v18; // 0x408b1a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x408b27
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x408b20
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4089fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4089fa_2;
                    }
                    case 1: {
                        goto lab_0x408450;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4084fc
                        char v34 = *(char *)v33; // 0x40850d
                        unsigned char v35; // 0x407b27
                        if (v34 < 125) {
                            // 0x408518
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40852f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x408500
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40850d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x408518
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40852f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x408500
                            v33++;
                        }
                        goto lab_0x408450;
                    }
                }
            }
            goto lab_0x4089fa_2;
        } else {
            // 0x4080c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x407cd1;
        }
    }
  lab_0x4082f8:
    // 0x4082f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x408bfa
        if (v8 > result) {
            // 0x408c03
            *(char *)(v12 + result) = 0;
        }
        // 0x407f27
        return result;
    }
    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x407cd1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x407ce0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x407eea_2;
        }
    }
    int64_t v39 = result; // 0x407de1
    char v40 = v20; // 0x407de1
    int64_t v41 = v38; // 0x407de1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x407de1
    int64_t v43 = v36; // 0x407de1
    goto lab_0x407d5d;
  lab_0x407eea_2:
    // 0x407f27
    return function_407ad0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4089fa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x407cd1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4085ce
        int64_t v50 = v5 + 1; // 0x4086b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4086b8
        char v52 = v20; // 0x4086b8
        int64_t v53 = result; // 0x4086b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x408681
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x408685
            int64_t v56 = v54 + 1; // 0x40868a
            int64_t v57 = v51 + 1; // 0x4086b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40867c
                v54 = v56;
                if (v47 > v54) {
                    // 0x408681
                    *(char *)(v54 + v48) = v55;
                }
                // 0x408685
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
        goto lab_0x407d5d;
    }
  lab_0x408450:
    // 0x408450
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40846f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408472
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4089fa
        goto lab_0x4089fa_2;
    }
    goto lab_0x40847f;
  lab_0x407c9d:
    // 0x407c9d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x407eea_2;
    }
    goto lab_0x407cd1;
  lab_0x407c75:;
    bool v60 = v15 == 1; // 0x407c80
    if (v15 == -1) {
        // 0x407c82
        v60 = *(char *)v1 == 0;
    }
    // 0x407c8e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x407cd1;
    } else {
        goto lab_0x407c9d;
    }
  lab_0x407d5d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x407d62
        *(char *)(v44 + v45) = v40;
    }
    // 0x407d66
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x407b78_2;
}
// Address range: 0x408d00 - 0x408e9e
int64_t function_408d00(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x408d02
    int32_t * v3 = __errno_location(); // 0x408d1c
    int64_t v4 = (int64_t)g20; // 0x408d21
    int32_t v5 = *v3; // 0x408d2b
    int64_t v6 = v4; // 0x408d41
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x408e99
            function_409d70(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x408d50
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x408d57
        int64_t v9; // 0x408d00
        if (g20 == &g21) {
            int64_t v10 = function_409b80(0, v8); // 0x408e7a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x408e7f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_409b80(v4, v8); // 0x408d6b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x408d7a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x408d7a
        int32_t v14 = v7; // 0x408d81
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x408db1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x408dbb
    int64_t * v17 = (int64_t *)v15; // 0x408dbe
    uint64_t v18 = *v17; // 0x408dbe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x408dc1
    int64_t result = *v19; // 0x408dc1
    int64_t v20; // 0x408d00
    uint64_t v21 = function_407ad0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x408de4
    if (v18 > v21) {
        // 0x408e5b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x408df7
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x408e07
        free((int64_t *)result);
    }
    int64_t result2 = function_409b20(v22); // 0x408e21
    *v19 = result2;
    int64_t v23; // 0x408d00
    function_407ad0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x408e5b
    *v3 = v5;
    return result2;
}
// Address range: 0x408ea0 - 0x408ed4
int64_t function_408ea0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x408ea7
    int64_t result = function_409d20(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x408ec6
    return result;
}
// Address range: 0x408ee0 - 0x408eef
int64_t function_408ee0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x408eec
    return result;
}
// Address range: 0x408ef0 - 0x408eff
int64_t function_408ef0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x408ef8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x408f00 - 0x408f33
int64_t function_408f00(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x408f19
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x408f1e
    uint32_t v3 = *v2; // 0x408f1e
    uint32_t v4 = (int32_t)a2 % 32; // 0x408f22
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x408f40 - 0x408f53
int64_t function_408f40(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x408f4c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x408f60 - 0x408f8b
int64_t function_408f60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x408f68
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x408f85
        abort();
        // UNREACHABLE
    }
    // 0x408f7c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x408f90 - 0x409002
int64_t function_408f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x408fb2
    int32_t * v2 = __errno_location(); // 0x408fbb
    uint32_t v3 = *(int32_t *)v1; // 0x408fdb
    int64_t result = function_407ad0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x408fea
    return result;
}
// Address range: 0x409010 - 0x4090f1
int64_t function_409010(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x409032
    int32_t * v2 = __errno_location(); // 0x409038
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x409057
    int32_t * v4 = (int32_t *)v1; // 0x40905a
    int64_t v5 = function_407ad0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x409075
    int64_t v6 = v5 + 1; // 0x40907a
    int64_t result = function_409b20(v6); // 0x40908f
    function_407ad0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4090d4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4090dd
    return result;
}
// Address range: 0x409100 - 0x40910a
int64_t function_409100(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409100
    return function_409010(a1, a2, 0, a3);
}
// Address range: 0x409110 - 0x4091a5
int64_t function_409110(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x409110
    int64_t v2 = v1; // 0x409110
    int64_t v3 = v2; // 0x409124
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x409143
        free((int64_t *)*(int64_t *)v4);
        v3 = &g57;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x409140
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g57;
        }
    }
    int64_t v6 = v3; // 0x40915d
    if (g21 != 0x60f320) {
        // 0x40915f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g45;
        v6 = &g57;
    }
    int64_t result = v6; // 0x409181
    if (g20 != &g21) {
        // 0x409183
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g57;
    }
    // 0x409196
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4091b0 - 0x4091c1
int64_t function_4091b0(void) {
    // 0x4091b0
    int64_t v1; // 0x4091b0
    return function_408d00(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x4091d0 - 0x4091da
int64_t function_4091d0(void) {
    // 0x4091d0
    int64_t v1; // 0x4091d0
    return function_408d00(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x4091e0 - 0x4091f6
int64_t function_4091e0(int64_t a1) {
    // 0x4091e0
    return function_408d00(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x409200 - 0x409212
int64_t function_409200(int64_t a1, int64_t a2) {
    // 0x409200
    return function_408d00(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x409220 - 0x409288
int64_t function_409220(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409230
    return function_408d00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409290 - 0x4092f4
int64_t function_409290(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4092a0
    return function_408d00((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x409300 - 0x40930c
int64_t function_409300(int64_t a1, int64_t a2) {
    // 0x409300
    return function_409220(0, a1 & 0xffffffff, a2);
}
// Address range: 0x409310 - 0x40931f
int64_t function_409310(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409310
    return function_409290(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x409320 - 0x409390
int64_t function_409320(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x40932d
    int128_t v2 = __asm_movdqa(g47); // 0x409335
    int128_t v3 = __asm_movdqa(g48); // 0x40933d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x409352
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x409368
    uint32_t v6 = *v5; // 0x409368
    uint32_t v7 = (int32_t)a3 % 32; // 0x40936d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_408d00(0, a1, a2, &v4);
}
// Address range: 0x409390 - 0x40939d
int64_t function_409390(int64_t a1, int64_t a2) {
    // 0x409390
    return function_409320(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4093a0 - 0x4093b1
int64_t function_4093a0(int64_t a1) {
    // 0x4093a0
    return function_409320(a1, -1, 58);
}
// Address range: 0x4093c0 - 0x4093ca
int64_t function_4093c0(void) {
    // 0x4093c0
    int64_t v1; // 0x4093c0
    return function_409320(v1, v1, 58);
}
// Address range: 0x4093d0 - 0x40943e
int64_t function_4093d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4093ea
    return function_408d00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409440 - 0x4094ac
int64_t function_409440(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x409447
    int128_t v2 = __asm_movdqa(g47); // 0x40944f
    int128_t v3 = __asm_movdqa(g48); // 0x409457
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x409479
    if (a2 == 0 || a3 == 0) {
        // 0x4094a7
        abort();
        // UNREACHABLE
    }
    // 0x40948a
    return function_408d00(a1, a4, a5, &v4);
}
// Address range: 0x4094b0 - 0x4094b9
int64_t function_4094b0(void) {
    // 0x4094b0
    int64_t v1; // 0x4094b0
    return function_409440(v1, v1, v1, v1, -1);
}
// Address range: 0x4094c0 - 0x4094d7
int64_t function_4094c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4094c0
    return function_409440(0, a1, a2, a3, -1);
}
// Address range: 0x4094e0 - 0x4094f3
int64_t function_4094e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4094e0
    return function_409440(0, a1, a2, a3, a4);
}
// Address range: 0x409500 - 0x40950a
int64_t function_409500(void) {
    // 0x409500
    int64_t v1; // 0x409500
    return function_408d00(v1, v1, v1, &g19);
}
// Address range: 0x409510 - 0x409522
int64_t function_409510(int64_t a1, int64_t a2) {
    // 0x409510
    return function_408d00(0, a1, a2, &g19);
}
// Address range: 0x409530 - 0x409541
int64_t function_409530(void) {
    // 0x409530
    int64_t v1; // 0x409530
    return function_408d00(v1, v1, -1, &g19);
}
// Address range: 0x409550 - 0x409566
int64_t function_409550(int64_t a1) {
    // 0x409550
    return function_408d00(0, a1, -1, &g19);
}
// Address range: 0x409570 - 0x40957e
int64_t function_409570(int64_t a1, int64_t a2) {
    // 0x409570
    int64_t v1; // 0x409570
    return function_409e30(a1, 0, 3, v1);
}
// Address range: 0x409580 - 0x40995d
int64_t function_409580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x409618
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40959c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4095b6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4095fb
    if (a6 < 10) {
        // 0x40960a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x409702
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x409960 - 0x409980
int64_t function_409960(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409960
    if (a5 == 0) {
        // 0x40997b
        return function_409580(a1, a2, a3, a4, a5, 0, (int64_t)&g57);
    }
    int64_t v1 = 0; // 0x409967
    v1++;
    int64_t v2 = v1; // 0x409979
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x409970
        v1++;
        v2 = v1;
    }
    // 0x40997b
    return function_409580(a1, a2, a3, a4, a5, v2, (int64_t)&g57);
}
// Address range: 0x409980 - 0x4099e0
int64_t function_409980(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x409980
    int64_t v3 = &v2; // 0x409980
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4099b3
    int64_t v6; // 0x40999d
    int64_t * v7; // 0x4099bb
    int64_t v8; // 0x4099bb
    int64_t v9; // 0x4099c7
    if (v5 < 48) {
        // 0x409990
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4099d3
            break;
        }
    } else {
        // 0x4099bb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4099d3
            break;
        }
    }
    int64_t v10 = 10; // 0x4099b1
    while (v4 != 9) {
        // 0x4099a9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x409990
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4099d3
                break;
            }
        } else {
            // 0x4099bb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4099d3
                break;
            }
        }
        // 0x4099a9
        v10 = 10;
    }
    // 0x4099d3
    return function_409580(a1, a2, a3, a4, v3, v10, (int64_t)&g57);
}
// Address range: 0x4099e0 - 0x409a9c
int64_t function_4099e0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x4099e0
    int64_t v1; // bp-168, 0x4099e0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4099e0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4099e0
    int64_t v8; // 0x4099e0
    int64_t v9; // bp-56, 0x4099e0
    int64_t v10; // 0x409a45
    int64_t v11; // 0x409a69
    if ((int32_t)v6 < 48) {
        // 0x409a30
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x409a80
            break;
        }
    } else {
        // 0x409a62
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x409a80
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x409a5a
    int64_t v13 = 10; // 0x409a5a
    while (v5 != 9) {
        // 0x409a5c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x409a30
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x409a80
                break;
            }
        } else {
            // 0x409a62
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x409a80
                break;
            }
        }
        // 0x409a52
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x409a80
    int64_t v14; // bp-136, 0x4099e0
    int64_t result = function_409580(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g57); // 0x409a8f
    return result;
}
// Address range: 0x409aa0 - 0x409b14
int64_t function_409aa0(int64_t a1) {
    // 0x409aa0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x409b03
    return fputs_unlocked(v1, g28);
}
// Address range: 0x409b20 - 0x409b3a
int64_t function_409b20(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409b24
    if (size != 0 != (mem == NULL)) {
        // 0x409b33
        return (int64_t)mem;
    }
    // 0x409b35
    function_409d70(size);
    // UNREACHABLE
}
// Address range: 0x409b40 - 0x409b61
int64_t function_409b40(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x409b43
    int64_t v2 = v1; // 0x409b43
    if (v2 < 0) {
        // 0x409b5b
        function_409d70(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409b59
        return function_409b20(v2);
    }
    // 0x409b5b
    function_409d70(v2);
    // UNREACHABLE
}
// Address range: 0x409b70 - 0x409b72
int64_t function_409b70(void) {
    // 0x409b70
    int64_t v1; // 0x409b70
    return function_409b20(v1);
}
// Address range: 0x409b80 - 0x409bb6
int64_t function_409b80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x409ba8
        free(v1);
        return (int32_t)&g57 ^ (int32_t)&g57;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x409b91
    if (a2 != 0 != (mem == NULL)) {
        // 0x409ba0
        return (int64_t)mem;
    }
    // 0x409bb1
    function_409d70(a1);
    // UNREACHABLE
}
// Address range: 0x409bc0 - 0x409be1
int64_t function_409bc0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x409bc3
    int64_t v2 = v1; // 0x409bc3
    if (v2 < 0) {
        // 0x409bdb
        function_409d70(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409bd9
        return function_409b80(a1, v2);
    }
    // 0x409bdb
    function_409d70(a1);
    // UNREACHABLE
}
// Address range: 0x409bf0 - 0x409c76
int64_t function_409bf0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x409c4b
            function_409d70(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_409b80(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x409c33
    if (a2 == 0) {
        // 0x409c58
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x409c38
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x409c4b
        function_409d70(a1);
        // UNREACHABLE
    }
    // 0x409c1a
    *(int64_t *)a2 = v2;
    return function_409b80(a1, v2 * a3);
}
// Address range: 0x409c80 - 0x409cd0
int64_t function_409c80(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x409c80
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x409cca
            function_409d70(a1);
            // UNREACHABLE
        }
        // 0x409ca2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_409b80(a1, v1);
    }
    if (a2 == 0) {
        // 0x409cb5
        *(int64_t *)a2 = 128;
        return function_409b80(0, 128);
    }
    // 0x409cc8
    if (a2 < 0) {
        // 0x409cca
        function_409d70(a1);
        // UNREACHABLE
    }
    // 0x409ca2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_409b80(a1, v1);
}
// Address range: 0x409cd0 - 0x409ce7
int64_t function_409cd0(int64_t a1, int64_t a2) {
    // 0x409cd0
    return (int64_t)memset((int64_t *)function_409b20(a1), 0, (int32_t)a1);
}
// Address range: 0x409cf0 - 0x409d1e
int64_t function_409cf0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x409cf7
    if ((int64_t)v1 < 0) {
        // 0x409d19
        function_409d70(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x409d19
        function_409d70(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x409d0a
    if (mem != NULL) {
        // 0x409d14
        return (int64_t)mem;
    }
    // 0x409d19
    function_409d70(nmemb);
    // UNREACHABLE
}
// Address range: 0x409d20 - 0x409d48
int64_t function_409d20(int64_t a1, int64_t a2) {
    int64_t v1 = function_409b20(a2); // 0x409d2f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x409d50 - 0x409d63
int64_t function_409d50(int64_t str) {
    // 0x409d50
    return function_409d20(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x409d70 - 0x409da1
int64_t function_409d70(int64_t a1) {
    // 0x409d70
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x409db0 - 0x409e2b
int64_t function_409db0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x409db7
    if (fileno(stream) < 0) {
        // 0x409e17
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x409dca
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x409dfb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x409e17
            return fclose(stream);
        }
    }
    // 0x409dcc
    if ((int32_t)function_409f70(a1, v1) == 0) {
        // 0x409e17
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x409dd8
    int32_t v3 = *v2; // 0x409de0
    int64_t result = fclose(stream); // 0x409dee
    if (v3 != 0) {
        // 0x409e20
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x409df0
    return result;
}
// Address range: 0x409e30 - 0x409f65
int64_t function_409e30(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x409f10
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x409e6c
    int64_t v2; // 0x409e30
    if (g49 < 0) {
        int64_t v3 = function_409e30(fd, 0, v1, a4); // 0x409eb4
        int64_t v4 = v3 & 0xffffffff; // 0x409eb9
        if ((int32_t)v3 < 0) {
            // 0x409ea0
            return v4 & 0xffffffff;
        }
        // 0x409ebf
        v2 = v4;
        if (g49 != -1) {
            // 0x409ea0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x409e87
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x409e96
            g49 = 1;
            // 0x409ea0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_409e30(fd & 0xffffffff, 0, v1, a4); // 0x409f47
        int64_t v7 = v6 & 0xffffffff; // 0x409f4c
        if ((int32_t)v6 < 0) {
            // 0x409ea0
            return v7 & 0xffffffff;
        }
        // 0x409f56
        g49 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x409ecf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x409eda
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x409ea0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x409ef2
    close(fd2);
    // 0x409ea0
    return 0xffffffff;
}
// Address range: 0x409f70 - 0x409fb0
int64_t function_409f70(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x409f8a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x409f8a
        return fflush(stream);
    }
    // 0x409f98
    function_409fb0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409fb0 - 0x40a007
int64_t function_409fb0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409fb0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x409fba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x409feb
    int64_t result = -1; // 0x409ff4
    if (v1 != -1) {
        // 0x409ff6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40a002
    return result;
}
// Address range: 0x40a010 - 0x40a0ef
int64_t function_40a010(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40a01c
    uint32_t v2 = *v1; // 0x40a01c
    int64_t v3 = a2 & 0xffffffff; // 0x40a021
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40a024
    uint64_t v5 = (int64_t)*v4; // 0x40a024
    int64_t v6; // 0x40a092
    if (v3 <= v5) {
      lab_0x40a08c_2:
        // 0x40a08c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40a012
    int64_t v8 = v2; // 0x40a010
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40a08c
        goto lab_0x40a08c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40a048
    int64_t v17; // 0x40a056
    int64_t * v18; // 0x40a070
    int64_t * v19; // 0x40a073
    int64_t v20; // 0x40a07e
    int64_t v21; // 0x40a056
    while ((v16 & 0xffffffff) > v10) {
        // 0x40a053
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40a070
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40a087
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40a08c
            goto lab_0x40a08c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40a08c
            goto lab_0x40a08c_2;
        }
        // 0x40a042
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40a0cb
    int64_t * v23 = (int64_t *)v22; // 0x40a0d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40a0d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40a0d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40a0e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40a03d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40a08c
            goto lab_0x40a08c_2;
        }
        // 0x40a042
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40a053
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40a070
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40a087
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40a08c
                goto lab_0x40a08c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40a08c
                goto lab_0x40a08c_2;
            }
            // 0x40a042
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40a0b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40a0d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40a0e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40a08c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40a0f0 - 0x40a70c
int64_t function_40a0f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40a10f
    int64_t v2 = *v1; // 0x40a10f
    char * str2 = (char *)v2; // 0x40a11c
    char c = *str2; // 0x40a11c
    int64_t v3 = v2; // 0x40a148
    int64_t v4 = 0; // 0x40a0f0
    int32_t v5; // 0x40a0f0
    int64_t v6; // 0x40a0f0
    int64_t v7; // 0x40a0f0
    int64_t v8; // 0x40a0f0
    int64_t v9; // 0x40a0f0
    int64_t v10; // 0x40a0f0
    int64_t v11; // 0x40a0f0
    int64_t v12; // 0x40a0f0
    int64_t v13; // 0x40a0f0
    int64_t str3; // 0x40a0f0
    int64_t v14; // 0x40a0f0
    int64_t v15; // 0x40a0f0
    int64_t v16; // 0x40a0f0
    int64_t v17; // 0x40a0f0
    int32_t v18; // 0x40a0f0
    int32_t v19; // 0x40a0f0
    int32_t v20; // 0x40a0f0
    int32_t v21; // 0x40a0f0
    int32_t v22; // 0x40a0f0
    int32_t v23; // 0x40a0f0
    int32_t v24; // 0x40a0f0
    int32_t v25; // 0x40a0f0
    int32_t v26; // 0x40a0f0
    int32_t v27; // 0x40a0f0
    int32_t v28; // 0x40a0f0
    int32_t v29; // 0x40a0f0
    int64_t nmemb; // 0x40a0f0
    int64_t v30; // 0x40a0f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40a14c
            while (v31 != 0 == (v31 != 61)) {
                // 0x40a148
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40a158
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40a15e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40a128
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40a18c
                int64_t v34; // 0x40a0f0
                int64_t v35; // 0x40a0f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x40a195
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40a310;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40a1a6
                int64_t v37 = *(int64_t *)v36; // 0x40a1aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40a180
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40a195
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40a310;
                        }
                    }
                    // 0x40a1a6
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
                  lab_0x40a1f6:
                    // 0x40a1f6
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
                        goto lab_0x40a250;
                    } else {
                        if (v11 == 0) {
                            // 0x40a3c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40a250;
                        } else {
                            if (v39 == 0) {
                                // 0x40a370
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40a21a;
                                } else {
                                    // 0x40a37c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40a21a;
                                    } else {
                                        // 0x40a38a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40a21a;
                                        } else {
                                            goto lab_0x40a250;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40a21a;
                            }
                        }
                    }
                }
              lab_0x40a261:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40a436
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40a5e2
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x40a602
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40a64f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x40a669
                            int64_t v45; // 0x40a66b
                            if (*(char *)v42 != 0) {
                                // 0x40a66b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40a663
                            while (v17 + nmemb != v42) {
                                // 0x40a665
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40a66b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x40a658
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40a690
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x40a444
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40a59f
                        free((int64_t *)v17);
                    }
                    // 0x40a499
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40a4b0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40a35e
                    return 63;
                }
                // 0x40a280
                v5 = v39;
                if (v13 != 0) {
                    // 0x40a304
                    v35 = v13;
                    v34 = v25;
                  lab_0x40a310:;
                    int32_t * v49 = (int32_t *)a7; // 0x40a320
                    uint32_t v50 = *v49; // 0x40a320
                    int64_t v51 = v50; // 0x40a320
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40a32a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40a333
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40a55f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40a50a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40a35e
                            return 63;
                        }
                        // 0x40a3a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40a6bf
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40a5bd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40a5d0
                                // 0x40a35e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40a4ce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40a4e2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40a34b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40a34e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40a352
                    int64_t result = v59; // 0x40a358
                    if (v58 != 0) {
                        // 0x40a35a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40a35e
                    return result;
                }
            } else {
                // 0x40a15e
                v5 = v32;
            }
            // break -> 0x40a285
            break;
        }
    }
    // 0x40a285
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40a29d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40a2a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40a35e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40a3e9
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40a2d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40a2e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40a250:
    // 0x40a250
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40a250
    int64_t v63 = *(int64_t *)v62; // 0x40a254
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40a261
        goto lab_0x40a261;
    }
    goto lab_0x40a1f6;
  lab_0x40a21a:
    // 0x40a21a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40a0f0
    int32_t v65; // 0x40a0f0
    int32_t v66; // 0x40a0f0
    if (v27 != 0) {
        goto lab_0x40a250;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40a3d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40a250;
            } else {
                goto lab_0x40a241;
            }
        } else {
            // 0x40a235
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40a52c
                int64_t v67 = (int64_t)mem; // 0x40a52c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40a250;
                } else {
                    // 0x40a53f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40a241;
                }
            } else {
                goto lab_0x40a241;
            }
        }
    }
  lab_0x40a241:
    // 0x40a241
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40a250;
}
// Address range: 0x40a710 - 0x40acd6
int64_t function_40a710(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40a731
    if (v3 < 1) {
        // 0x40a8ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40a72d
    int32_t v5 = *(int32_t *)a7; // 0x40a739
    uint64_t v6 = a1 & 0xffffffff; // 0x40a73b
    int64_t v7 = v2; // 0x40a740
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40a743
    *v8 = 0;
    int64_t v9; // 0x40a710
    int64_t v10; // 0x40a710
    int64_t v11; // 0x40a710
    int64_t v12; // 0x40a710
    int64_t str; // 0x40a710
    int64_t v13; // 0x40a710
    int64_t v14; // 0x40a710
    int64_t v15; // 0x40a710
    int64_t v16; // 0x40a710
    int64_t v17; // 0x40a710
    int32_t v18; // 0x40a710
    char v19; // 0x40a710
    if (v5 == 0) {
        // 0x40a928
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40a75a;
    } else {
        // 0x40a753
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40a7a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40a7a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40a868;
            } else {
                int64_t v22 = v7 + 1; // 0x40a7b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40a7c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40a87c;
                } else {
                    goto lab_0x40a7d8;
                }
            }
        } else {
            goto lab_0x40a75a;
        }
    }
  lab_0x40a75a:
    // 0x40a75a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40a760
    *v24 = 0;
    int64_t v25; // 0x40a710
    int64_t v26; // 0x40a710
    int64_t v27; // 0x40a710
    switch (*(char *)&v2) {
        case 45: {
            // 0x40a850
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a85d;
        }
        case 43: {
            // 0x40ab60
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a85d;
        }
        default: {
            // 0x40a77c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40aadf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40abf8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40a85d;
                } else {
                    // 0x40aaed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40a78a;
                }
            } else {
                goto lab_0x40a78a;
            }
        }
    }
  lab_0x40a868:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40a86f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40a7d8;
    } else {
        goto lab_0x40a87c;
    }
  lab_0x40a78a:
    // 0x40a78a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40a85d;
  lab_0x40a85d:
    // 0x40a85d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40a868;
  lab_0x40a7d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x40a7d8
    int64_t v31 = v30; // 0x40a7d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40a7da
    if ((int64_t)*v32 > v31) {
        // 0x40a7df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40a7e2
    if (*v33 > v30) {
        // 0x40a7e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40a7ea
    int64_t v35 = v31; // 0x40a7ee
    int64_t v36 = v15; // 0x40a7ee
    int64_t v37; // 0x40a710
    int64_t v38; // 0x40a710
    int64_t v39; // 0x40a710
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40a958
        int64_t v41 = v40; // 0x40a958
        v2 = v41;
        int64_t v42; // 0x40a710
        if (*v33 == v40) {
            // 0x40ab40
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40ab48
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40a964
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a968
                function_40a010(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40a978
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40a981
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40a98a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40a9a1
            int64_t v47 = v45 & 0xffffffff; // 0x40a9a5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40a9ae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40a9b4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40a9b6;
                }
            }
            int64_t v48 = v47 + 1; // 0x40a990
            int64_t v49 = v48 & 0xffffffff; // 0x40a990
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40a9a1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40a9ae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40a9b4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40a9b6;
                    }
                }
                // 0x40a990
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40ab58
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40a9b6;
    } else {
        goto lab_0x40a7f4;
    }
  lab_0x40a87c:
    // 0x40a87c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40a87f
    int64_t v51 = v12; // 0x40a87f
    int64_t v52 = v14; // 0x40a87f
    if (*(char *)v10 == 0) {
        goto lab_0x40a7d8;
    } else {
        goto lab_0x40a885;
    }
  lab_0x40a7f4:;
    int32_t v53 = v35; // 0x40a7f4
    int64_t v54; // 0x40a710
    int64_t v55; // 0x40a710
    int64_t v56; // 0x40a710
    int64_t v57; // 0x40a710
    int64_t v58; // 0x40a710
    int64_t v59; // 0x40a710
    char * v60; // 0x40a710
    int64_t v61; // 0x40a710
    int64_t v62; // 0x40a809
    int64_t v63; // 0x40a710
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40a943
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40a946;
    } else {
        // 0x40a7fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40a710
        int64_t v66 = v65 ? -1 : 1; // 0x40a810
        int64_t v67 = (int64_t)"--"; // 0x40a710
        int64_t v68 = v62; // 0x40a710
        int64_t v69 = 3; // 0x40a810
        unsigned char v70 = *(char *)v68; // 0x40a810
        char v71 = *(char *)v67; // 0x40a810
        char v72 = v71; // 0x40a810
        bool v73 = false; // 0x40a810
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
            // 0x40a900
            if (*(char *)v62 == 45) {
                // 0x40a9c0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40a9c0
                if (c == 0) {
                    goto lab_0x40a90a;
                } else {
                    // 0x40a9cd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40aa50;
                    } else {
                        if (c == 45) {
                            // 0x40ac33
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40aaa5;
                        } else {
                            // 0x40a9de
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40aa50;
                            } else {
                                // 0x40a9e3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40aa04;
                                } else {
                                    // 0x40a9ea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40aa50;
                                    } else {
                                        goto lab_0x40aa04;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40a90a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40a820
            v2 = v75;
            int32_t v76 = *v32; // 0x40a823
            int64_t v77 = v35 + 1; // 0x40a826
            int32_t v78 = v77; // 0x40a829
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40ab90
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40a837
                    function_40a010(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40a845
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40a946;
        }
    }
  lab_0x40a885:;
    // 0x40a885
    int64_t v79; // bp-104, 0x40a710
    int64_t v80 = &v79; // 0x40a71a
    int64_t v81 = v50 + 1; // 0x40a885
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40a88c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40a891
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40a895
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40a899
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40a8a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40a8a6
    int32_t c2 = v84; // 0x40a8a6
    char * found_char_pos = strchr(str2, c2); // 0x40a8a6
    int64_t v87 = *v82; // 0x40a8ab
    v2 = v87;
    int64_t v88 = *v85; // 0x40a8b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40a8c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40abb0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40ab7d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40a8ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40a8a6
    char v91 = *(char *)(v90 + 1); // 0x40a8db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40a895
        if (v91 != 58) {
            // 0x40a8ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40ab04
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40ac08
                *v8 = 0;
            } else {
                // 0x40abec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40ab2e
            *v83 = 0;
            // 0x40a8ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40ab0e
        if (v93 != 0) {
            // 0x40aba0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40ab2e
            *v83 = 0;
            // 0x40a8ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40ab21
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40ab2e
            *v83 = 0;
            // 0x40a8ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40ac6a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40ac1a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40ac21
        // 0x40ab2e
        *v83 = 0;
        // 0x40a8ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40aa79
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40aa7b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40aca0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40ac51
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40ac58
            // 0x40a8ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40aa86
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40aa8a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40aaa5;
  lab_0x40a9b6:
    // 0x40a9b6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40a7f4;
  lab_0x40aaa5:;
    int64_t v99 = function_40a0f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40aac3
    // 0x40a8ee
    return v99 & 0xffffffff;
  lab_0x40a946:;
    int32_t v100 = v55; // 0x40a946
    if (v100 != (int32_t)v59) {
        // 0x40a94a
        *(int32_t *)a7 = v100;
    }
    // 0x40a8ee
    return 0xffffffff;
  lab_0x40a90a:
    // 0x40a90a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40a911
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40a8ee
    return v99 & 0xffffffff;
  lab_0x40aa50:
    // 0x40aa50
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40a885;
  lab_0x40aa04:
    // 0x40aa04
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40a0f0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40aa2a
    if ((int32_t)v101 != -1) {
        // 0x40a8ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40aa3f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40aa50;
}
// Address range: 0x40ace0 - 0x40ad36
int64_t function_40ace0(int64_t a1) {
    // 0x40ace0
    *(int32_t *)&g50 = g26;
    *(int32_t *)&g51 = g25;
    int64_t v1; // 0x40ace0
    int64_t result = function_40a710(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x40ad06
    g26 = *(int32_t *)&g50;
    g55 = g53;
    *(int32_t *)&g24 = g52;
    return result;
}
// Address range: 0x40ad40 - 0x40ad58
int64_t function_40ad40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ad40
    return function_40ace0(1);
}
// Address range: 0x40ad60 - 0x40ad73
int64_t function_40ad60(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x40ad60
    return function_40ace0(0);
}
// Address range: 0x40ad80 - 0x40ad95
int64_t function_40ad80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ad80
    return function_40a710(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40ada0 - 0x40adb6
int64_t function_40ada0(void) {
    // 0x40ada0
    return function_40ace0(0);
}
// Address range: 0x40adc0 - 0x40add8
int64_t function_40adc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40adc0
    return function_40a710(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40ade0 - 0x40ae5a
int64_t function_40ade0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40adeb
    int64_t v2 = (int64_t)&g9; // 0x40adeb
    int32_t * pwc; // 0x40ade0
    int64_t v3; // 0x40ade0
    int64_t n; // 0x40ade0
    if (a2 == 0) {
        goto lab_0x40ae32;
    } else {
        // 0x40aded
        if (a3 == 0) {
            // 0x40ae18
            return -2;
        }
        // 0x40adf9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40ae32;
        } else {
            goto lab_0x40ae04;
        }
    }
  lab_0x40ae32:
    // 0x40ae32
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40ade0
    pwc = (int32_t *)&v4;
    goto lab_0x40ae04;
  lab_0x40ae04:;
    char * wstr = (char *)v3; // 0x40ae0a
    int64_t ps; // 0x40ade0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40ae0a
    int64_t result = v5; // 0x40ae0a
    if (v5 < 0xfffffffe) {
        // 0x40ae18
        return result;
    }
    int64_t result2 = result; // 0x40ae49
    if ((char)function_40aec0(0, v3) == 0) {
        // 0x40ae4b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40ae18
    return result2;
}
// Address range: 0x40ae60 - 0x40aebd
int64_t function_40ae60(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40ae67
    int64_t v2; // 0x40ae60
    int64_t result = function_409db0(a1, v2); // 0x40ae78
    if ((v2 & 32) != 0) {
        // 0x40aea0
        if ((int32_t)result == 0) {
            // 0x40aea4
            *__errno_location() = 0;
        }
        // 0x40ae9a
        return 0xffffffff;
    }
    // 0x40ae81
    if ((int32_t)result == 0) {
        // 0x40ae9a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40ae88
    if (v1 == 0) {
        // 0x40ae8a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40ae9a
    return result2;
}
// Address range: 0x40aec0 - 0x40af1e
int64_t function_40aec0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40aec6
    if (locale == NULL) {
        // 0x40aef3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40aec6
    bool v2; // 0x40aec0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x40aec0
    int64_t v5 = v1; // 0x40aec0
    int64_t v6 = 2; // 0x40aee5
    unsigned char v7 = *(char *)v5; // 0x40aee5
    char v8 = *(char *)v4; // 0x40aee5
    char v9 = v8; // 0x40aee5
    bool v10 = false; // 0x40aee5
    while (v7 == v8) {
        // 0x40aed8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40aef1
    int64_t v13 = v1; // 0x40aef1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40aef3
        return 0;
    }
    int64_t v14 = 6; // 0x40aef1
    unsigned char v15 = *(char *)v13; // 0x40af0d
    char v16 = *(char *)v12; // 0x40af0d
    char v17 = v16; // 0x40af0d
    bool v18 = false; // 0x40af0d
    while (v15 == v16) {
        // 0x40af00
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
// Address range: 0x40af20 - 0x40b482
int64_t function_40af20(void) {
    char * v1 = nl_langinfo(14); // 0x40af36
    char * v2 = g54; // 0x40af3b
    char * v3; // 0x40af20
    int64_t v4; // 0x40af20
    int64_t v5; // 0x40af20
    int64_t v6; // 0x40af20
    int64_t v7; // 0x40af20
    int32_t size; // 0x40af20
    int32_t size2; // 0x40af20
    int32_t len; // 0x40aff2
    int64_t v8; // 0x40aff2
    char * env_val; // 0x40afdd
    if (v2 == NULL) {
        // 0x40afd8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40b045;
        } else {
            // 0x40afea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40b045;
            } else {
                // 0x40afef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40afdd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40b475
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40b045;
                    } else {
                        // 0x40b3e9
                        size2 = len + 14;
                        goto lab_0x40b00b;
                    }
                } else {
                    goto lab_0x40b00b;
                }
            }
        }
    } else {
        // 0x40af20
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40af5a;
    }
  lab_0x40b28c:;
    // 0x40b28c
    struct _IO_FILE * stream; // 0x40b0cb
    int32_t v10 = __uflow(stream); // 0x40b28f
    int64_t v11; // 0x40af20
    int64_t v12 = v11; // 0x40b299
    int64_t v13; // 0x40af20
    int64_t v14 = v13; // 0x40b299
    int32_t v15 = v10; // 0x40b299
    int64_t v16; // 0x40af20
    int64_t v17 = v16; // 0x40b299
    int64_t v18 = v11; // 0x40b299
    int64_t v19 = v13; // 0x40b299
    int64_t v20 = v16; // 0x40b299
    if (v10 == -1) {
        // break -> 0x40b29f
        goto lab_0x40b29f;
    }
    goto lab_0x40b119;
  lab_0x40b10e:;
    // 0x40b10e
    int64_t v90; // 0x40af20
    int64_t * v32; // 0x40b100
    *v32 = v90 + 1;
    int64_t v89; // 0x40af20
    v12 = v89;
    int64_t v91; // 0x40af20
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40af20
    v17 = v92;
    goto lab_0x40b119;
  lab_0x40b119:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40af20
    int32_t v25; // bp-120, 0x40af20
    int32_t v26; // bp-184, 0x40af20
    int64_t v27; // 0x40b0cb
    int64_t v28; // 0x40b0e8
    int64_t v29; // 0x40b0ed
    int64_t * v30; // 0x40b104
    switch (c) {
        case 32: {
            goto lab_0x40b100;
        }
        case 10: {
            goto lab_0x40b100;
        }
        case 9: {
            goto lab_0x40b100;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40b2f1
            int32_t v33; // 0x40af20
            char v34; // 0x40af20
            int32_t v35; // 0x40b2fe
            if (v31 < *v30) {
                // 0x40b2d0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40b2fb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40b2f1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40b2d0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40b2fb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40b2e0
                v36 = v33;
            }
            // 0x40b3cf
            if (v36 == -1) {
                // break -> 0x40b29f
                break;
            }
            goto lab_0x40b100;
        }
        default: {
            // 0x40b12f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40b29f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40b158
            int64_t v39 = v37 + 4; // 0x40b15a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40b166
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40b168
            while (v41 == 0) {
                // 0x40b158
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40b186
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40b192
            int64_t v45 = v43 + 4; // 0x40b194
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40b1a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40b1a2
            while (v47 == 0) {
                // 0x40b192
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40b18f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40b1b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40b1c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40b1cc
            int64_t v52 = v51 + v48; // 0x40b1d5
            int64_t * mem; // 0x40af20
            int64_t v53; // 0x40af20
            int64_t v54; // 0x40af20
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40b30b
                int64_t v56 = v55 + 3; // 0x40b317
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40b1f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40b200
            if (mem == NULL) {
                // 0x40b42c
                free((int64_t *)v21);
                function_409db0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x40b0a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40b218
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40b222
            uint32_t v62 = (int32_t)v59; // 0x40b225
            int64_t v63; // 0x40af20
            if (v62 >= 8) {
                // 0x40b334
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40b34e
                int64_t v66 = v61 - v65; // 0x40b352
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40b35d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40b36e
                    int64_t v70 = v69 & 0xffffffff; // 0x40b36e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40b36b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40b3ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40b237
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40b23b
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
            int64_t v73 = v51 + 1; // 0x40b24b
            int64_t v74 = v60 - 1; // 0x40b24f
            uint32_t v75 = (int32_t)v73; // 0x40b254
            int64_t v76; // 0x40af20
            if (v75 >= 8) {
                // 0x40b382
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40b38c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40b39c
                int64_t v80 = v74 - v79; // 0x40b3a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40b3ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40b3bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40b3b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40b416
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40b41e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40b266
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40b26a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40b463
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40b27e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40b10e;
            } else {
                goto lab_0x40b28c;
            }
        }
    }
  lab_0x40b100:;
    int64_t v93 = v23; // 0x40af20
    int64_t v94 = v22; // 0x40af20
    int64_t v95 = v21; // 0x40af20
    goto lab_0x40b100_2;
  lab_0x40b045:;
    int64_t * mem3 = malloc(size); // 0x40b045
    int64_t v97 = (int64_t)&g9; // 0x40b050
    int64_t v98; // 0x40af20
    int64_t path; // 0x40af20
    if (mem3 == NULL) {
        goto lab_0x40b022;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40b045
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40b066;
    }
  lab_0x40af5a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40af4d
    char v100 = *v3; // 0x40af5a
    int64_t v101; // 0x40af20
    if (v100 == 0) {
        // 0x40afb4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40af20
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40af20
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40afa0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40afa7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40af70
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40af7d
        char v107 = *(char *)v106; // 0x40af82
        v102 = v107;
        if (v107 == 0) {
            // 0x40afb4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40af8b
    v104 = v103 + 1;
  lab_0x40afa7:
    // 0x40afb4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40b022:;
    char * v108 = (char *)v97;
    g54 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40af5a;
  lab_0x40b066:;
    int64_t v109 = v98 + path; // 0x40b066
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40b092
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x40b0c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40b3f2
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x40b0e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40b100_2:;
                uint64_t v96 = *v32; // 0x40b100
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40b28c;
                } else {
                    goto lab_0x40b10e;
                }
            }
          lab_0x40b29f:
            // 0x40b29f
            function_409db0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40b2be
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40b0a4;
  lab_0x40b00b:;
    int64_t * mem4 = malloc(size2); // 0x40b00b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x40b0b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40b066;
    } else {
        goto lab_0x40b022;
    }
  lab_0x40b0a4:
    // 0x40b0a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40b022;
}
// Address range: 0x40b490 - 0x40b4ed
int64_t function_40b490(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b490
    return function_401538();
}
// Address range: 0x40b4f0 - 0x40b4f1
int64_t function_40b4f0(void) {
    // 0x40b4f0
    int64_t result; // 0x40b4f0
    return result;
}
// Address range: 0x40b500 - 0x40b518
int64_t function_40b500(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b500
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x40b518 - 0x40b538
int64_t function_40b518(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x40b522
    while (*(int64_t *)v1 != -1) {
        // 0x40b523
        v1 -= 8;
    }
    // 0x40b534
    return result;
}
