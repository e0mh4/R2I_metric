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
    function_403f60(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407b30(0x403080, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
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
        int32_t v8 = function_407390(v1, a2, "bctw", &g2, 0, v7);
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
                                function_406010((int64_t)g28, "md5sum", "GNU coreutils", (int64_t)g17, "Ulrich Drepper", "Scott Miller");
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
    g40 = 34;
    g39 = 32;
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
        int64_t v54 = (int64_t)"MD5"; // 0x401940
        int64_t v55 = v45; // 0x401940
        int64_t v56 = 3; // 0x401940
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
            char v75 = *(char *)(v45 + 3); // 0x401d75
            char v76 = v75; // 0x401d81
            int64_t v77 = v53 + 3; // 0x401d81
            if (v75 == 32) {
                char v78 = *(char *)(v45 + 4); // 0x401d83
                v76 = v78;
                v77 = v53 + 4;
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
        int64_t v156 = function_405a00(0, 3, v155); // 0x401dc6
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
        function_405a00(0, 3, v155);
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
        function_405a00(0, 3, v155);
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
            int64_t v355 = function_4063e0(v154, v354); // 0x402451
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
    int64_t v361 = function_405a00(0, 3, v360); // 0x402265
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
    fwrite_unlocked((int64_t *)"MD5", 1, 3, stream);
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
        int64_t v430 = function_405a00(0, 3, v155); // 0x4024ab
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
                    int64_t v437 = function_405a00(0, 3, v155); // 0x4026d5
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
                    int64_t v324 = function_403ec0(v313, (int64_t *)"r"); // 0x402248
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
    if (g41 == 0 || (int32_t)function_4063e0((int64_t)g29, v31) != -1) {
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
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402870
    int64_t v1; // 0x402870
    __libc_start_main(0x401940, (int32_t)a4, (char **)&v1, (void (*)())0x407ac0, (void (*)())0x407b20, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
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
        int64_t v14 = function_403ec0(a1, (int64_t *)"r"); // 0x402b6b
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
            error(0, *err_num, "%s", (char *)function_405a00(0, 3, a1));
            // 0x402b4f
            return 0;
        }
        // 0x402b7c
        function_403e90(v14, 2, v1);
        int64_t v15 = function_403d50(v14, v2); // 0x402b8f
        v13 = v14;
        if ((int32_t)v15 == 0) {
            int64_t result2 = 1; // 0x402ba2
            if ((int32_t)function_4063e0(v14, v2) != 0) {
                // 0x402ba4
                error(0, *__errno_location(), "%s", (char *)function_405a00(0, 3, a1));
                result2 = 0;
            }
            // 0x402b4f
            return result2;
        }
    } else {
        int64_t v16 = (int64_t)g29; // 0x402b1b
        g41 = 1;
        function_403e90(v16, 2, v1);
        int64_t v17 = function_403d50(v16, v2); // 0x402b3c
        v13 = v16;
        if ((int32_t)v17 == 0) {
            // 0x402b4f
            return 1;
        }
    }
    int64_t v18 = function_405a00(0, 3, a1); // 0x402bed
    uint32_t err_num2 = *__errno_location(); // 0x402c04
    error(0, err_num2, "%s", (char *)v18);
    if (v13 != (int64_t)g29) {
        // 0x402c1a
        function_4063e0(v13, (int64_t)err_num2);
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
    int64_t v7 = 7; // 0x402eca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"md5sum";
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
        v7 = 7;
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
    if ((int32_t)function_407490((int64_t)g28) == 0) {
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
    int64_t result = function_407490((int64_t)g31); // 0x4030b3
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
        error(0, *err_num, "%s: %s", (char *)function_4059d0((int64_t)g43), v1);
    }
    // 0x4030fe
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403120 - 0x40314b
int64_t function_403120(int64_t a1) {
    // 0x403120
    *(int64_t *)(a1 + 16) = 0;
    *(int64_t *)a1 = -0x1032547698badcff;
    *(int64_t *)(a1 + 8) = 0x1032547698badcfe;
    *(int32_t *)(a1 + 24) = 0;
    return 0x1032547698badcfe;
}
// Address range: 0x403150 - 0x40316a
int64_t function_403150(int64_t a1, int64_t result) {
    // 0x403150
    int64_t v1; // 0x403150
    *(int32_t *)result = (int32_t)v1;
    *(int32_t *)(result + 4) = *(int32_t *)(a1 + 4);
    *(int32_t *)(result + 8) = *(int32_t *)(a1 + 8);
    *(int32_t *)(result + 12) = *(int32_t *)(a1 + 12);
    return result;
}
// Address range: 0x403170 - 0x4038df
int64_t function_403170(uint64_t a1, uint64_t a2, int64_t result) {
    int32_t * v1 = (int32_t *)(result + 4); // 0x403187
    int32_t v2 = *v1; // 0x403187
    uint64_t v3 = (a2 & -4) + a1; // 0x40318b
    int64_t v4; // 0x403170
    int32_t v5 = v4;
    int32_t * v6 = (int32_t *)(result + 8); // 0x403191
    int32_t v7 = *v6; // 0x403191
    int32_t * v8 = (int32_t *)(result + 12); // 0x403199
    int32_t v9 = *v8; // 0x403199
    uint32_t v10 = (int32_t)a2; // 0x4031a1
    int32_t * v11 = (int32_t *)(result + 16); // 0x4031a9
    uint32_t v12 = *v11 + v10; // 0x4031a9
    int32_t * v13 = (int32_t *)(result + 20); // 0x4031b3
    *v11 = v12;
    *v13 = *v13 + (int32_t)(a2 / 0x100000000) + (int32_t)(v12 < v10);
    int32_t v14 = v5; // 0x4031c6
    int64_t v15 = a1; // 0x4031c6
    int32_t v16 = v5; // 0x4031c6
    int32_t v17 = v9; // 0x4031c6
    int32_t v18 = v7; // 0x4031c6
    int32_t v19 = v2; // 0x4031c6
    if (v3 > a1) {
        int32_t v20 = v7;
        int32_t v21 = v2;
        int32_t v22 = v9;
        int32_t v23 = *(int32_t *)v15; // 0x4031d0
        int32_t v24 = *(int32_t *)(v15 + 4); // 0x4031db
        int32_t v25 = *(int32_t *)(v15 + 12); // 0x4031de
        int32_t v26 = *(int32_t *)(v15 + 20); // 0x4031e2
        int32_t v27 = *(int32_t *)(v15 + 24); // 0x4031fe
        int32_t v28 = *(int32_t *)(v15 + 28); // 0x403201
        int32_t v29 = *(int32_t *)(v15 + 36); // 0x40320d
        int32_t v30 = *(int32_t *)(v15 + 44); // 0x403220
        uint32_t v31 = v14 - 0x28955b88 + v23 + ((v20 ^ v22) & v21 ^ v22); // 0x403224
        int32_t v32 = (v31 / 0x2000000 | 128 * v31) + v21; // 0x403239
        uint32_t v33 = v22 - 0x173848aa + v24 + (v32 & (v20 ^ v21) ^ v20); // 0x403247
        int32_t v34 = *(int32_t *)(v15 + 8); // 0x403249
        int32_t v35 = (v33 / 0x100000 | 0x1000 * v33) + v32; // 0x40324f
        uint32_t v36 = v20 + 0x242070db + v34 + (v35 & (v32 ^ v21) ^ v21); // 0x40326b
        int32_t v37 = *(int32_t *)(v15 + 16); // 0x403270
        int32_t v38 = (v36 / 0x8000 | 0x20000 * v36) + v35; // 0x403277
        uint32_t v39 = v21 - 0x3e423112 + v25 + (v38 & (v35 ^ v32) ^ v32); // 0x403282
        int32_t v40 = *(int32_t *)(v15 + 60); // 0x40328e
        int32_t v41 = (v39 / 1024 | 0x400000 * v39) + v38; // 0x403297
        uint32_t v42 = v32 - 0xa83f051 + v37 + (v41 & (v38 ^ v35) ^ v35); // 0x40329d
        int32_t v43 = (v42 / 0x2000000 | 128 * v42) + v41; // 0x4032b6
        uint32_t v44 = v26 + 0x4787c62a + v35 + (v43 & (v41 ^ v38) ^ v38); // 0x4032bc
        int32_t v45 = (v44 / 0x100000 | 0x1000 * v44) + v43; // 0x4032cc
        uint32_t v46 = v27 - 0x57cfb9ed + v38 + (v45 & (v43 ^ v41) ^ v41); // 0x4032d8
        int32_t v47 = *(int32_t *)(v15 + 32); // 0x4032e4
        int32_t v48 = (v46 / 0x8000 | 0x20000 * v46) + v45; // 0x4032ea
        uint32_t v49 = v28 - 0x2b96aff + v41 + (v48 & (v45 ^ v43) ^ v43); // 0x4032f4
        int32_t v50 = *(int32_t *)(v15 + 48); // 0x4032ff
        int32_t v51 = (v49 / 1024 | 0x400000 * v49) + v48; // 0x403307
        uint32_t v52 = v47 + 0x698098d8 + v43 + (v51 & (v48 ^ v45) ^ v45); // 0x40330d
        int32_t v53 = *(int32_t *)(v15 + 56); // 0x403319
        int32_t v54 = (v52 / 0x2000000 | 128 * v52) + v51; // 0x403322
        uint32_t v55 = v29 - 0x74bb0851 + v45 + (v54 & (v51 ^ v48) ^ v48); // 0x403328
        int32_t v56 = *(int32_t *)(v15 + 40); // 0x40332a
        int32_t v57 = (v55 / 0x100000 | 0x1000 * v55) + v54; // 0x40333d
        uint32_t v58 = v56 - 0xa44f + v48 + (v57 & (v54 ^ v51) ^ v51); // 0x403345
        int32_t v59 = *(int32_t *)(v15 + 52); // 0x403351
        v15 += 64;
        int32_t v60 = (v58 / 0x8000 | 0x20000 * v58) + v57; // 0x40335e
        uint32_t v61 = v30 - 0x76a32842 + v51 + (v60 & (v57 ^ v54) ^ v54); // 0x403364
        int32_t v62 = (v61 / 1024 | 0x400000 * v61) + v60; // 0x403374
        uint32_t v63 = v50 + 0x6b901122 + v54 + (v62 & (v60 ^ v57) ^ v57); // 0x40337a
        int32_t v64 = (v63 / 0x2000000 | 128 * v63) + v62; // 0x40338b
        uint32_t v65 = v59 - 0x2678e6d + v57 + (v64 & (v62 ^ v60) ^ v60); // 0x403391
        int32_t v66 = (v65 / 0x100000 | 0x1000 * v65) + v64; // 0x4033a2
        uint32_t v67 = v53 - 0x5986bc72 + v60 + (v66 & (v64 ^ v62) ^ v62); // 0x4033a8
        int32_t v68 = (v67 / 0x8000 | 0x20000 * v67) + v66; // 0x4033b9
        uint32_t v69 = v40 + 0x49b40821 + v62 + (v68 & (v66 ^ v64) ^ v64); // 0x4033bf
        int32_t v70 = (v69 / 1024 | 0x400000 * v69) + v68; // 0x4033c8
        uint32_t v71 = v24 - 0x9e1da9e + v64 + ((v70 ^ v68) & v66 ^ v68); // 0x4033d9
        int32_t v72 = (v71 / 0x8000000 | 32 * v71) + v70; // 0x4033e8
        uint32_t v73 = v27 - 0x3fbf4cc0 + v66 + ((v72 ^ v70) & v68 ^ v70); // 0x4033f0
        int32_t v74 = (v73 / 0x800000 | 512 * v73) + v72; // 0x4033f9
        uint32_t v75 = v30 + 0x265e5a51 + v68 + ((v74 ^ v72) & v70 ^ v72); // 0x40340a
        int32_t v76 = (v75 / 0x40000 | 0x4000 * v75) + v74; // 0x403419
        uint32_t v77 = v23 - 0x16493856 + v70 + ((v76 ^ v74) & v72 ^ v74); // 0x403421
        int32_t v78 = (v77 / 0x1000 | 0x100000 * v77) + v76; // 0x40342a
        uint32_t v79 = v26 - 0x29d0efa3 + v72 + ((v78 ^ v76) & v74 ^ v76); // 0x40343b
        int32_t v80 = (v79 / 0x8000000 | 32 * v79) + v78; // 0x403444
        uint32_t v81 = v56 + 0x2441453 + v74 + ((v80 ^ v78) & v76 ^ v78); // 0x403455
        int32_t v82 = (v81 / 0x800000 | 512 * v81) + v80; // 0x403464
        uint32_t v83 = v40 - 0x275e197f + v76 + ((v82 ^ v80) & v78 ^ v80); // 0x40346c
        int32_t v84 = (v83 / 0x40000 | 0x4000 * v83) + v82; // 0x40347a
        uint32_t v85 = v37 - 0x182c0438 + v78 + ((v84 ^ v82) & v80 ^ v82); // 0x40348b
        int32_t v86 = (v85 / 0x1000 | 0x100000 * v85) + v84; // 0x40349f
        uint32_t v87 = v29 + 0x21e1cde6 + v80 + ((v86 ^ v84) & v82 ^ v84); // 0x4034a7
        int32_t v88 = (v87 / 0x8000000 | 32 * v87) + v86; // 0x4034b6
        uint32_t v89 = v53 - 0x3cc8f82a + v82 + ((v88 ^ v86) & v84 ^ v86); // 0x4034be
        int32_t v90 = (v89 / 0x800000 | 512 * v89) + v88; // 0x4034c7
        uint32_t v91 = v25 - 0xb2af279 + v84 + ((v90 ^ v88) & v86 ^ v88); // 0x4034e3
        int32_t v92 = (v91 / 0x40000 | 0x4000 * v91) + v90; // 0x4034e8
        uint32_t v93 = v47 + 0x455a14ed + v86 + ((v92 ^ v90) & v88 ^ v90); // 0x4034f4
        int32_t v94 = (v93 / 0x1000 | 0x100000 * v93) + v92; // 0x403503
        uint32_t v95 = v59 - 0x561c16fb + v88 + ((v94 ^ v92) & v90 ^ v92); // 0x403518
        int32_t v96 = (v95 / 0x8000000 | 32 * v95) + v94; // 0x403521
        uint32_t v97 = v34 - 0x3105c08 + v90 + ((v96 ^ v94) & v92 ^ v94); // 0x40353a
        int32_t v98 = (v97 / 0x800000 | 512 * v97) + v96; // 0x403541
        uint32_t v99 = v28 + 0x676f02d9 + v92 + ((v98 ^ v96) & v94 ^ v96); // 0x403549
        int32_t v100 = (v99 / 0x40000 | 0x4000 * v99) + v98; // 0x403550
        int32_t v101 = v100 ^ v98; // 0x403552
        uint32_t v102 = v50 - 0x72d5b376 + v94 + (v101 & v96 ^ v98); // 0x403564
        int32_t v103 = (v102 / 0x1000 | 0x100000 * v102) + v100; // 0x403573
        uint32_t v104 = v26 - 0x5c6be + v96 + (v103 ^ v101); // 0x403577
        int32_t v105 = (v104 / 0x10000000 | 16 * v104) + v103; // 0x403589
        int32_t v106 = v105 ^ v103;
        uint32_t v107 = v47 - 0x788e097f + v98 + (v106 ^ v100); // 0x40358f
        int32_t v108 = (v107 / 0x200000 | 2048 * v107) + v105; // 0x4035a1
        uint32_t v109 = v30 + 0x6d9d6122 + v100 + (v108 ^ v106); // 0x4035af
        int32_t v110 = (v109 / 0x10000 | 0x10000 * v109) + v108; // 0x4035b8
        int32_t v111 = v110 ^ v108;
        uint32_t v112 = v53 - 0x21ac7f4 + v103 + (v111 ^ v105); // 0x4035bf
        int32_t v113 = (v112 / 512 | 0x800000 * v112) + v110; // 0x4035d1
        uint32_t v114 = v24 - 0x5b4115bc + v105 + (v111 ^ v113); // 0x4035e2
        int32_t v115 = (v114 / 0x10000000 | 16 * v114) + v113; // 0x4035eb
        uint32_t v116 = v37 + 0x4bdecfa9 + v108 + (v113 ^ v110 ^ v115); // 0x4035f9
        int32_t v117 = (v116 / 0x200000 | 2048 * v116) + v115; // 0x403602
        uint32_t v118 = v28 - 0x944b4a0 + v110 + (v115 ^ v113 ^ v117); // 0x403606
        int32_t v119 = (v118 / 0x10000 | 0x10000 * v118) + v117; // 0x403618
        uint32_t v120 = v56 - 0x41404390 + v113 + (v117 ^ v115 ^ v119); // 0x40361e
        int32_t v121 = (v120 / 512 | 0x800000 * v120) + v119; // 0x403637
        uint32_t v122 = v59 + 0x289b7ec6 + v115 + (v119 ^ v117 ^ v121); // 0x40363e
        int32_t v123 = (v122 / 0x10000000 | 16 * v122) + v121; // 0x403647
        uint32_t v124 = v23 - 0x155ed806 + v117 + (v121 ^ v119 ^ v123); // 0x40364e
        int32_t v125 = (v124 / 0x200000 | 2048 * v124) + v123; // 0x403657
        uint32_t v126 = v25 - 0x2b10cf7b + v119 + (v123 ^ v121 ^ v125); // 0x403665
        int32_t v127 = (v126 / 0x10000 | 0x10000 * v126) + v125; // 0x403677
        uint32_t v128 = v27 + 0x4881d05 + v121 + (v125 ^ v123 ^ v127); // 0x40367d
        int32_t v129 = (v128 / 512 | 0x800000 * v128) + v127; // 0x40368f
        uint32_t v130 = v29 - 0x262b2fc7 + v123 + (v127 ^ v125 ^ v129); // 0x40369f
        int32_t v131 = (v130 / 0x10000000 | 16 * v130) + v129; // 0x4036a6
        uint32_t v132 = v50 - 0x1924661b + v125 + (v129 ^ v127 ^ v131); // 0x4036af
        int32_t v133 = (v132 / 0x200000 | 2048 * v132) + v131; // 0x4036c4
        uint32_t v134 = v40 + 0x1fa27cf8 + v127 + (v131 ^ v129 ^ v133); // 0x4036c8
        int32_t v135 = (v134 / 0x10000 | 0x10000 * v134) + v133; // 0x4036da
        uint32_t v136 = v34 - 0x3b53a99b + v129 + (v133 ^ v131 ^ v135); // 0x4036e0
        int32_t v137 = (v136 / 512 | 0x800000 * v136) + v135; // 0x4036f6
        uint32_t v138 = v23 - 0xbd6ddbc + v131 + ((v137 | -1 - v133) ^ v135); // 0x4036fc
        int32_t v139 = (v138 / 0x4000000 | 64 * v138) + v137; // 0x403717
        uint32_t v140 = v28 + 0x432aff97 + v133 + ((v139 | -1 - v135) ^ v137); // 0x403726
        int32_t v141 = (v140 / 0x400000 | 1024 * v140) + v139; // 0x40372f
        uint32_t v142 = v53 - 0x546bdc59 + v135 + ((v141 | -1 - v137) ^ v139); // 0x40373b
        int32_t v143 = (v142 / 0x20000 | 0x8000 * v142) + v141; // 0x403750
        uint32_t v144 = v26 - 0x36c5fc7 + v137 + ((v143 | -1 - v139) ^ v141); // 0x403756
        int32_t v145 = (v144 / 2048 | 0x200000 * v144) + v143; // 0x403769
        uint32_t v146 = v50 + 0x655b59c3 + v139 + ((v145 | -1 - v141) ^ v143); // 0x40376f
        int32_t v147 = (v146 / 0x4000000 | 64 * v146) + v145; // 0x40377f
        uint32_t v148 = v25 - 0x70f3336e + v141 + ((v147 | -1 - v143) ^ v145); // 0x40378b
        int32_t v149 = (v148 / 0x400000 | 1024 * v148) + v147; // 0x40379d
        uint32_t v150 = v56 - 0x100b83 + v143 + ((v149 | -1 - v145) ^ v147); // 0x4037a5
        int32_t v151 = (v150 / 0x20000 | 0x8000 * v150) + v149; // 0x4037bb
        uint32_t v152 = v24 - 0x7a7ba22f + v145 + ((v151 | -1 - v147) ^ v149); // 0x4037c3
        int32_t v153 = (v152 / 2048 | 0x200000 * v152) + v151; // 0x4037db
        uint32_t v154 = v47 + 0x6fa87e4f + v147 + ((v153 | -1 - v149) ^ v151); // 0x4037e1
        int32_t v155 = (v154 / 0x4000000 | 64 * v154) + v153; // 0x4037f5
        uint32_t v156 = v40 - 0x1d31920 + v149 + ((v155 | -1 - v151) ^ v153); // 0x4037fb
        int32_t v157 = (v156 / 0x400000 | 1024 * v156) + v155; // 0x40381c
        uint32_t v158 = v27 - 0x5cfebcec + v151 + ((v157 | -1 - v153) ^ v155); // 0x403830
        int32_t v159 = (v158 / 0x20000 | 0x8000 * v158) + v157; // 0x40383b
        uint32_t v160 = v59 + 0x4e0811a1 + v153 + ((v159 | -1 - v155) ^ v157); // 0x403849
        int32_t v161 = (v160 / 2048 | 0x200000 * v160) + v159; // 0x403851
        uint32_t v162 = v37 - 0x8ac817e + v155 + ((v161 | -1 - v157) ^ v159); // 0x403857
        int32_t v163 = (v162 / 0x4000000 | 64 * v162) + v161; // 0x403860
        uint32_t v164 = v30 - 0x42c50dcb + v157 + ((v163 | -1 - v159) ^ v161); // 0x403866
        int32_t v165 = (v164 / 0x400000 | 1024 * v164) + v163; // 0x403878
        uint32_t v166 = v34 + 0x2ad7d2bb + v159 + ((v165 | -1 - v161) ^ v163); // 0x403888
        int32_t v167 = (v166 / 0x20000 | 0x8000 * v166) + v165; // 0x403891
        uint32_t v168 = v29 - 0x14792c6f + v161 + ((v167 | -1 - v163) ^ v165); // 0x403897
        v14 += v163;
        int32_t v169 = v167 + v20; // 0x4038a2
        int32_t v170 = v167 + v21 + (v168 / 2048 | 0x200000 * v168); // 0x4038a5
        int32_t v171 = v165 + v22; // 0x4038a8
        v16 = v14;
        v17 = v171;
        v18 = v169;
        v19 = v170;
        while (v3 > v15) {
            // 0x4031d0
            v20 = v169;
            v21 = v170;
            v22 = v171;
            v23 = *(int32_t *)v15;
            v24 = *(int32_t *)(v15 + 4);
            v25 = *(int32_t *)(v15 + 12);
            v26 = *(int32_t *)(v15 + 20);
            v27 = *(int32_t *)(v15 + 24);
            v28 = *(int32_t *)(v15 + 28);
            v29 = *(int32_t *)(v15 + 36);
            v30 = *(int32_t *)(v15 + 44);
            v31 = v14 - 0x28955b88 + v23 + ((v20 ^ v22) & v21 ^ v22);
            v32 = (v31 / 0x2000000 | 128 * v31) + v21;
            v33 = v22 - 0x173848aa + v24 + (v32 & (v20 ^ v21) ^ v20);
            v34 = *(int32_t *)(v15 + 8);
            v35 = (v33 / 0x100000 | 0x1000 * v33) + v32;
            v36 = v20 + 0x242070db + v34 + (v35 & (v32 ^ v21) ^ v21);
            v37 = *(int32_t *)(v15 + 16);
            v38 = (v36 / 0x8000 | 0x20000 * v36) + v35;
            v39 = v21 - 0x3e423112 + v25 + (v38 & (v35 ^ v32) ^ v32);
            v40 = *(int32_t *)(v15 + 60);
            v41 = (v39 / 1024 | 0x400000 * v39) + v38;
            v42 = v32 - 0xa83f051 + v37 + (v41 & (v38 ^ v35) ^ v35);
            v43 = (v42 / 0x2000000 | 128 * v42) + v41;
            v44 = v26 + 0x4787c62a + v35 + (v43 & (v41 ^ v38) ^ v38);
            v45 = (v44 / 0x100000 | 0x1000 * v44) + v43;
            v46 = v27 - 0x57cfb9ed + v38 + (v45 & (v43 ^ v41) ^ v41);
            v47 = *(int32_t *)(v15 + 32);
            v48 = (v46 / 0x8000 | 0x20000 * v46) + v45;
            v49 = v28 - 0x2b96aff + v41 + (v48 & (v45 ^ v43) ^ v43);
            v50 = *(int32_t *)(v15 + 48);
            v51 = (v49 / 1024 | 0x400000 * v49) + v48;
            v52 = v47 + 0x698098d8 + v43 + (v51 & (v48 ^ v45) ^ v45);
            v53 = *(int32_t *)(v15 + 56);
            v54 = (v52 / 0x2000000 | 128 * v52) + v51;
            v55 = v29 - 0x74bb0851 + v45 + (v54 & (v51 ^ v48) ^ v48);
            v56 = *(int32_t *)(v15 + 40);
            v57 = (v55 / 0x100000 | 0x1000 * v55) + v54;
            v58 = v56 - 0xa44f + v48 + (v57 & (v54 ^ v51) ^ v51);
            v59 = *(int32_t *)(v15 + 52);
            v15 += 64;
            v60 = (v58 / 0x8000 | 0x20000 * v58) + v57;
            v61 = v30 - 0x76a32842 + v51 + (v60 & (v57 ^ v54) ^ v54);
            v62 = (v61 / 1024 | 0x400000 * v61) + v60;
            v63 = v50 + 0x6b901122 + v54 + (v62 & (v60 ^ v57) ^ v57);
            v64 = (v63 / 0x2000000 | 128 * v63) + v62;
            v65 = v59 - 0x2678e6d + v57 + (v64 & (v62 ^ v60) ^ v60);
            v66 = (v65 / 0x100000 | 0x1000 * v65) + v64;
            v67 = v53 - 0x5986bc72 + v60 + (v66 & (v64 ^ v62) ^ v62);
            v68 = (v67 / 0x8000 | 0x20000 * v67) + v66;
            v69 = v40 + 0x49b40821 + v62 + (v68 & (v66 ^ v64) ^ v64);
            v70 = (v69 / 1024 | 0x400000 * v69) + v68;
            v71 = v24 - 0x9e1da9e + v64 + ((v70 ^ v68) & v66 ^ v68);
            v72 = (v71 / 0x8000000 | 32 * v71) + v70;
            v73 = v27 - 0x3fbf4cc0 + v66 + ((v72 ^ v70) & v68 ^ v70);
            v74 = (v73 / 0x800000 | 512 * v73) + v72;
            v75 = v30 + 0x265e5a51 + v68 + ((v74 ^ v72) & v70 ^ v72);
            v76 = (v75 / 0x40000 | 0x4000 * v75) + v74;
            v77 = v23 - 0x16493856 + v70 + ((v76 ^ v74) & v72 ^ v74);
            v78 = (v77 / 0x1000 | 0x100000 * v77) + v76;
            v79 = v26 - 0x29d0efa3 + v72 + ((v78 ^ v76) & v74 ^ v76);
            v80 = (v79 / 0x8000000 | 32 * v79) + v78;
            v81 = v56 + 0x2441453 + v74 + ((v80 ^ v78) & v76 ^ v78);
            v82 = (v81 / 0x800000 | 512 * v81) + v80;
            v83 = v40 - 0x275e197f + v76 + ((v82 ^ v80) & v78 ^ v80);
            v84 = (v83 / 0x40000 | 0x4000 * v83) + v82;
            v85 = v37 - 0x182c0438 + v78 + ((v84 ^ v82) & v80 ^ v82);
            v86 = (v85 / 0x1000 | 0x100000 * v85) + v84;
            v87 = v29 + 0x21e1cde6 + v80 + ((v86 ^ v84) & v82 ^ v84);
            v88 = (v87 / 0x8000000 | 32 * v87) + v86;
            v89 = v53 - 0x3cc8f82a + v82 + ((v88 ^ v86) & v84 ^ v86);
            v90 = (v89 / 0x800000 | 512 * v89) + v88;
            v91 = v25 - 0xb2af279 + v84 + ((v90 ^ v88) & v86 ^ v88);
            v92 = (v91 / 0x40000 | 0x4000 * v91) + v90;
            v93 = v47 + 0x455a14ed + v86 + ((v92 ^ v90) & v88 ^ v90);
            v94 = (v93 / 0x1000 | 0x100000 * v93) + v92;
            v95 = v59 - 0x561c16fb + v88 + ((v94 ^ v92) & v90 ^ v92);
            v96 = (v95 / 0x8000000 | 32 * v95) + v94;
            v97 = v34 - 0x3105c08 + v90 + ((v96 ^ v94) & v92 ^ v94);
            v98 = (v97 / 0x800000 | 512 * v97) + v96;
            v99 = v28 + 0x676f02d9 + v92 + ((v98 ^ v96) & v94 ^ v96);
            v100 = (v99 / 0x40000 | 0x4000 * v99) + v98;
            v101 = v100 ^ v98;
            v102 = v50 - 0x72d5b376 + v94 + (v101 & v96 ^ v98);
            v103 = (v102 / 0x1000 | 0x100000 * v102) + v100;
            v104 = v26 - 0x5c6be + v96 + (v103 ^ v101);
            v105 = (v104 / 0x10000000 | 16 * v104) + v103;
            v106 = v105 ^ v103;
            v107 = v47 - 0x788e097f + v98 + (v106 ^ v100);
            v108 = (v107 / 0x200000 | 2048 * v107) + v105;
            v109 = v30 + 0x6d9d6122 + v100 + (v108 ^ v106);
            v110 = (v109 / 0x10000 | 0x10000 * v109) + v108;
            v111 = v110 ^ v108;
            v112 = v53 - 0x21ac7f4 + v103 + (v111 ^ v105);
            v113 = (v112 / 512 | 0x800000 * v112) + v110;
            v114 = v24 - 0x5b4115bc + v105 + (v111 ^ v113);
            v115 = (v114 / 0x10000000 | 16 * v114) + v113;
            v116 = v37 + 0x4bdecfa9 + v108 + (v113 ^ v110 ^ v115);
            v117 = (v116 / 0x200000 | 2048 * v116) + v115;
            v118 = v28 - 0x944b4a0 + v110 + (v115 ^ v113 ^ v117);
            v119 = (v118 / 0x10000 | 0x10000 * v118) + v117;
            v120 = v56 - 0x41404390 + v113 + (v117 ^ v115 ^ v119);
            v121 = (v120 / 512 | 0x800000 * v120) + v119;
            v122 = v59 + 0x289b7ec6 + v115 + (v119 ^ v117 ^ v121);
            v123 = (v122 / 0x10000000 | 16 * v122) + v121;
            v124 = v23 - 0x155ed806 + v117 + (v121 ^ v119 ^ v123);
            v125 = (v124 / 0x200000 | 2048 * v124) + v123;
            v126 = v25 - 0x2b10cf7b + v119 + (v123 ^ v121 ^ v125);
            v127 = (v126 / 0x10000 | 0x10000 * v126) + v125;
            v128 = v27 + 0x4881d05 + v121 + (v125 ^ v123 ^ v127);
            v129 = (v128 / 512 | 0x800000 * v128) + v127;
            v130 = v29 - 0x262b2fc7 + v123 + (v127 ^ v125 ^ v129);
            v131 = (v130 / 0x10000000 | 16 * v130) + v129;
            v132 = v50 - 0x1924661b + v125 + (v129 ^ v127 ^ v131);
            v133 = (v132 / 0x200000 | 2048 * v132) + v131;
            v134 = v40 + 0x1fa27cf8 + v127 + (v131 ^ v129 ^ v133);
            v135 = (v134 / 0x10000 | 0x10000 * v134) + v133;
            v136 = v34 - 0x3b53a99b + v129 + (v133 ^ v131 ^ v135);
            v137 = (v136 / 512 | 0x800000 * v136) + v135;
            v138 = v23 - 0xbd6ddbc + v131 + ((v137 | -1 - v133) ^ v135);
            v139 = (v138 / 0x4000000 | 64 * v138) + v137;
            v140 = v28 + 0x432aff97 + v133 + ((v139 | -1 - v135) ^ v137);
            v141 = (v140 / 0x400000 | 1024 * v140) + v139;
            v142 = v53 - 0x546bdc59 + v135 + ((v141 | -1 - v137) ^ v139);
            v143 = (v142 / 0x20000 | 0x8000 * v142) + v141;
            v144 = v26 - 0x36c5fc7 + v137 + ((v143 | -1 - v139) ^ v141);
            v145 = (v144 / 2048 | 0x200000 * v144) + v143;
            v146 = v50 + 0x655b59c3 + v139 + ((v145 | -1 - v141) ^ v143);
            v147 = (v146 / 0x4000000 | 64 * v146) + v145;
            v148 = v25 - 0x70f3336e + v141 + ((v147 | -1 - v143) ^ v145);
            v149 = (v148 / 0x400000 | 1024 * v148) + v147;
            v150 = v56 - 0x100b83 + v143 + ((v149 | -1 - v145) ^ v147);
            v151 = (v150 / 0x20000 | 0x8000 * v150) + v149;
            v152 = v24 - 0x7a7ba22f + v145 + ((v151 | -1 - v147) ^ v149);
            v153 = (v152 / 2048 | 0x200000 * v152) + v151;
            v154 = v47 + 0x6fa87e4f + v147 + ((v153 | -1 - v149) ^ v151);
            v155 = (v154 / 0x4000000 | 64 * v154) + v153;
            v156 = v40 - 0x1d31920 + v149 + ((v155 | -1 - v151) ^ v153);
            v157 = (v156 / 0x400000 | 1024 * v156) + v155;
            v158 = v27 - 0x5cfebcec + v151 + ((v157 | -1 - v153) ^ v155);
            v159 = (v158 / 0x20000 | 0x8000 * v158) + v157;
            v160 = v59 + 0x4e0811a1 + v153 + ((v159 | -1 - v155) ^ v157);
            v161 = (v160 / 2048 | 0x200000 * v160) + v159;
            v162 = v37 - 0x8ac817e + v155 + ((v161 | -1 - v157) ^ v159);
            v163 = (v162 / 0x4000000 | 64 * v162) + v161;
            v164 = v30 - 0x42c50dcb + v157 + ((v163 | -1 - v159) ^ v161);
            v165 = (v164 / 0x400000 | 1024 * v164) + v163;
            v166 = v34 + 0x2ad7d2bb + v159 + ((v165 | -1 - v161) ^ v163);
            v167 = (v166 / 0x20000 | 0x8000 * v166) + v165;
            v168 = v29 - 0x14792c6f + v161 + ((v167 | -1 - v163) ^ v165);
            v14 += v163;
            v169 = v167 + v20;
            v170 = v167 + v21 + (v168 / 2048 | 0x200000 * v168);
            v171 = v165 + v22;
            v16 = v14;
            v17 = v171;
            v18 = v169;
            v19 = v170;
        }
    }
    // 0x4038ba
    *(int32_t *)result = v16;
    *v1 = v19;
    *v6 = v18;
    *v8 = v17;
    return result;
}
// Address range: 0x4038e0 - 0x4039e4
int64_t function_4038e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = (int64_t)a1;
    uint32_t v2 = *(int32_t *)(v1 + 24); // 0x4038e5
    int32_t * v3 = (int32_t *)(v1 + 20); // 0x4038eb
    int32_t v4 = *v3; // 0x4038eb
    int32_t * v5 = (int32_t *)(v1 + 16); // 0x40391a
    uint32_t v6 = *v5 + v2; // 0x40391a
    *v5 = v6;
    int32_t v7 = v4; // 0x403920
    if (v6 < v2) {
        // 0x403922
        v7 = v4 + 1;
        *v3 = v7;
    }
    int64_t v8 = v2; // 0x4038e5
    int64_t v9 = v2 < 56 ? 64 : 128; // 0x4038fa
    int64_t v10 = v1 + 28; // 0x403936
    *(int32_t *)((v2 < 56 ? 56 : 120) + v10) = 8 * v6;
    int64_t v11 = v9 - v8; // 0x403944
    *(int32_t *)((v2 < 56 ? 60 : 124) + v10) = 8 * v7 | v6 / 0x20000000;
    int64_t v12 = v10 + v8; // 0x40394b
    uint64_t v13 = v11 - 8; // 0x40394f
    if (v13 >= 8) {
        int64_t v14 = v12 + 8 & -8; // 0x403990
        *(int64_t *)v12 = 128;
        *(int64_t *)(v13 + v12 - 8) = *(int64_t *)(v11 + 0x408870);
        int64_t v15 = v12 - v14; // 0x4039a3
        __asm_rep_movsq_memcpy((char *)v14, (char *)((int64_t)"\x80\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00" - v15), (v15 + v13) / 8);
        // 0x4039b3
        function_403170(v10, v9, v1);
        return function_403150(v1, a2);
    }
    if ((v13 & 4) != 0) {
        // 0x4039d0
        *(int32_t *)v12 = 128;
        *(int32_t *)(v13 + v12 - 4) = *(int32_t *)(v11 + 0x408874);
        // 0x4039b3
        function_403170(v10, v9, v1);
        return function_403150(v1, a2);
    }
    if (v13 == 0) {
        // 0x4039b3
        function_403170(v10, v9, v1);
        return function_403150(v1, a2);
    }
    // 0x403963
    *(char *)v12 = -128;
    if ((v13 & 2) != 0) {
        // 0x403971
        *(int16_t *)(v13 + v12 - 2) = *(int16_t *)(v11 + 0x408876);
    }
    // 0x4039b3
    function_403170(v10, v9, v1);
    return function_403150(v1, a2);
}
// Address range: 0x4039f0 - 0x403cee
int64_t function_4039f0(int64_t a1, uint64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = v1 + 24; // 0x403a07
    int32_t * v3 = (int32_t *)v2; // 0x403a07
    uint32_t v4 = *v3; // 0x403a07
    int64_t v5 = v4; // 0x403a07
    int64_t v6 = v5; // 0x403a0c
    int64_t v7 = a1; // 0x403a0c
    int64_t v8 = a2; // 0x403a0c
    if (v4 != 0) {
        int64_t v9 = v1 + 28; // 0x403b4f
        uint64_t v10 = 128 - v5; // 0x403b54
        int64_t v11 = v10 > a2 ? a2 : v10; // 0x403b5e
        int32_t v12 = v11; // 0x403b68
        int64_t * dest_mem = memcpy((int64_t *)(v9 + v5), (int64_t *)a1, v12); // 0x403b68
        uint32_t v13 = *v3 + v12; // 0x403b72
        *v3 = v13;
        v6 = (int64_t)dest_mem;
        if (v13 >= 65) {
            // 0x403be0
            function_403170(v9, (int64_t)(v13 & -64), v1);
            uint32_t v14 = *v3; // 0x403bee
            int64_t v15 = (v11 + v5 & -64) + v9; // 0x403bfe
            uint32_t v16 = v14 % 64; // 0x403c01
            int64_t v17 = v16; // 0x403c01
            *v3 = v16;
            if (v16 >= 8) {
                // 0x403c40
                *(int64_t *)v9 = *(int64_t *)v15;
                *(int64_t *)(v17 + v1 + 20) = *(int64_t *)(v15 + v17 - 8);
                int64_t v18 = v1 + 36 & -8; // 0x403c59
                int64_t v19 = v9 - v18; // 0x403c5d
                int64_t v20 = v15 - v19; // 0x403c60
                uint32_t v21 = v16 + (int32_t)v19; // 0x403c6a
                v6 = v20;
                if (v21 >= 8) {
                    int64_t v22 = 0;
                    int64_t v23 = v22 + 8; // 0x403c7c
                    *(int64_t *)(v22 + v18) = *(int64_t *)(v22 + v20);
                    v6 = v20;
                    while ((v21 & -8) > (int32_t)v23) {
                        // 0x403c7a
                        v22 = v23 & 0xffffffff;
                        v23 = v22 + 8;
                        *(int64_t *)(v22 + v18) = *(int64_t *)(v22 + v20);
                        v6 = v20;
                    }
                }
            } else {
                int64_t v24 = v14; // 0x403bee
                if ((v24 & 4) != 0) {
                    // 0x403c91
                    *(int32_t *)v9 = *(int32_t *)v15;
                    uint32_t v25 = *(int32_t *)(v15 + v17 - 4); // 0x403c98
                    *(int32_t *)(v2 + v17) = v25;
                    v6 = v25;
                } else {
                    // 0x403c13
                    v6 = v15;
                    if (v16 != 0) {
                        // 0x403c1b
                        *(char *)v9 = *(char *)v15;
                        v6 = v15;
                        if ((v24 & 2) != 0) {
                            uint16_t v26 = *(int16_t *)(v15 + v17 - 2); // 0x403c2c
                            *(int16_t *)(v17 + v1 + 26) = v26;
                            v6 = v26;
                        }
                    }
                }
            }
        }
        // 0x403b7f
        v7 = v11 + a1;
        v8 = a2 - v11;
    }
    uint64_t v27 = v8;
    int64_t result = v6; // 0x403a16
    int64_t v28 = v7; // 0x403a16
    int64_t v29 = v27; // 0x403a16
    int64_t v30; // 0x4039f0
    int64_t v31; // 0x4039f0
    int64_t v32; // 0x4039f0
    if (v27 < 64) {
        goto lab_0x403b2c;
    } else {
        if (v7 % 4 == 0) {
            int64_t v33 = v27 & -64; // 0x403b1d
            result = function_403170(v7, v33, v1);
            v28 = v33 + v7;
            v29 = v27 % 64;
            goto lab_0x403b2c;
        } else {
            int64_t v34 = v1 + 28; // 0x403a25
            v32 = v34;
            v30 = 64;
            v31 = v7;
            if (v27 != 64) {
                int64_t v35 = (v27 - 1 & -64) + v7; // 0x403a47
                int128_t v36 = __asm_movdqu(*(int128_t *)v7); // 0x403a50
                int64_t v37 = v7 + 64; // 0x403a5f
                __asm_movups(*(int128_t *)v34, v36);
                __asm_movups(*(int128_t *)(v1 + 44), __asm_movdqu(*(int128_t *)(v7 + 16)));
                __asm_movups(*(int128_t *)(v1 + 60), __asm_movdqu(*(int128_t *)(v7 + 32)));
                __asm_movups(*(int128_t *)(v1 + 76), __asm_movdqu(*(int128_t *)(v7 + 48)));
                function_403170(v34, 64, v1);
                while (v37 != v35) {
                    int64_t v38 = v37;
                    v36 = __asm_movdqu(*(int128_t *)v38);
                    v37 = v38 + 64;
                    __asm_movups(*(int128_t *)v34, v36);
                    __asm_movups(*(int128_t *)(v1 + 44), __asm_movdqu(*(int128_t *)(v38 + 16)));
                    __asm_movups(*(int128_t *)(v1 + 60), __asm_movdqu(*(int128_t *)(v38 + 32)));
                    __asm_movups(*(int128_t *)(v1 + 76), __asm_movdqu(*(int128_t *)(v38 + 48)));
                    function_403170(v34, 64, v1);
                }
                // 0x403a8c
                v32 = v34;
                v30 = v27 - 64 - (v27 - 65 & -64);
                v31 = v35;
            }
            goto lab_0x403a9b;
        }
    }
  lab_0x403b2c:
    // 0x403b2c
    if (v29 == 0) {
        // 0x403b35
        return result;
    }
    // 0x403ce1
    v32 = v1 + 28;
    v30 = v29;
    v31 = v28;
    goto lab_0x403a9b;
  lab_0x403a9b:;
    int64_t v39 = (int64_t)*v3; // 0x403a9b
    int64_t v40 = v30 & 0xffffffff; // 0x403aa0
    int64_t v41 = v32 + v39; // 0x403aa3
    uint32_t v42 = (int32_t)v30; // 0x403aa8
    int64_t v43; // 0x4039f0
    if (v42 >= 8) {
        int64_t v44 = v41 + 8 & -8; // 0x403b9a
        *(int64_t *)v41 = *(int64_t *)v31;
        *(int64_t *)(v41 + v40 - 8) = *(int64_t *)(v40 + v31 - 8);
        int64_t v45 = v41 - v44; // 0x403bae
        int64_t v46 = v45 + v30; // 0x403bb4
        int64_t v47 = v46 & 0xfffffff8; // 0x403bb7
        v43 = v47;
        if ((int32_t)v46 >= 8) {
            int64_t v48 = 0;
            int64_t v49 = v48 + 8; // 0x403bca
            *(int64_t *)(v48 + v44) = *(int64_t *)(v31 - v45 + v48);
            v43 = v47;
            while ((int32_t)v49 < (int32_t)v47) {
                // 0x403bc8
                v48 = v49 & 0xffffffff;
                v49 = v48 + 8;
                *(int64_t *)(v48 + v44) = *(int64_t *)(v31 - v45 + v48);
                v43 = v47;
            }
        }
    } else {
        if ((v30 & 4) != 0) {
            // 0x403cb8
            *(int32_t *)v41 = *(int32_t *)v31;
            uint32_t v50 = *(int32_t *)(v40 + v31 - 4); // 0x403cc0
            *(int32_t *)(v41 + v40 - 4) = v50;
            v43 = v50;
        } else {
            // 0x403abc
            v43 = v40;
            if (v42 != 0) {
                // 0x403ac1
                *(char *)v41 = *(char *)v31;
                v43 = v40;
                if ((v30 & 2) != 0) {
                    uint16_t v51 = *(int16_t *)(v40 + v31 - 2); // 0x403cd1
                    *(int16_t *)(v41 + v40 - 2) = v51;
                    v43 = v51;
                }
            }
        }
    }
    uint64_t v52 = v30 + v39; // 0x403acf
    int32_t v53; // 0x4039f0
    int64_t result2; // 0x4039f0
    if (v52 < 64) {
        // 0x403acf
        v53 = v52;
        result2 = v43;
    } else {
        // 0x403ad8
        function_403170(v32, 64, v1);
        int32_t v54 = (int32_t)v52 - 64;
        int64_t * dest_mem2 = memcpy((int64_t *)v32, (int64_t *)(v1 + 92), v54); // 0x403af7
        v53 = v54;
        result2 = (int64_t)dest_mem2;
    }
    // 0x403afc
    *v3 = v53;
    return result2;
}
// Address range: 0x403cf0 - 0x403d45
int64_t function_403cf0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = -0x1032547698badcff; // bp-168, 0x403d05
    function_4039f0(a1, a2, &v1);
    int64_t v2; // 0x403cf0
    return function_4038e0(&v1, a3, (int64_t)&v1, v2, v2);
}
// Address range: 0x403d50 - 0x403e75
int64_t function_403d50(int64_t a1, int64_t a2) {
    int64_t * mem = malloc(0x8048); // 0x403d6a
    if (mem == NULL) {
        // 0x403e60
        return 1;
    }
    int64_t v1 = (int64_t)mem; // 0x403d6a
    int64_t v2; // 0x403d50
    int32_t v3 = v2;
    int64_t v4 = -0x1032547698badcff; // bp-200, 0x403d8d
    int32_t v5 = v3 & 16;
    int64_t v6 = &v4;
    int32_t v7; // 0x403d50
    int64_t v8; // 0x403ddc
    while (true) {
        int64_t v9 = 0;
        int32_t v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1); // 0x403dd7
        v8 = v9 + (int64_t)v10;
        while (v8 != 0x8000) {
            if (v10 == 0) {
                // break (via goto) -> 0x403dfa
                goto lab_0x403dfa;
            }
            // 0x403dc0
            v7 = v5;
            if (v5 != 0) {
                goto lab_0x403dff;
            }
            v9 = v8;
            v10 = fread_unlocked((int64_t *)(v9 + v1), 1, 0x8000 - (int32_t)v9, (struct _IO_FILE *)a1);
            v8 = v9 + (int64_t)v10;
        }
        // 0x403de8
        function_403170(v1, 0x8000, v6);
    }
  lab_0x403dfa:;
    int32_t v11 = v3 & 32; // 0x403dfa
    v7 = v11;
    if (v11 != 0) {
        // 0x403e40
        free(mem);
        return 1;
    }
  lab_0x403dff:;
    int64_t v12 = v7; // 0x403e02
    if (v8 != 0) {
        // 0x403e30
        function_4039f0(v1, v8, &v4);
        v12 = v6;
    }
    // 0x403e04
    function_4038e0(&v4, a2, v12, a1, v2);
    free(mem);
    return (int32_t)&g57 ^ (int32_t)&g57;
}
// Address range: 0x403e80 - 0x403e85
int64_t function_403e80(void) {
    // 0x403e80
    int64_t fd; // 0x403e80
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x403e90 - 0x403eb1
int64_t function_403e90(int64_t stream, int64_t advice, int64_t a3) {
    // 0x403e90
    if (stream == 0) {
        // 0x403eb0
        int64_t result; // 0x403e90
        return result;
    }
    // 0x403e95
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x403ec0 - 0x403f53
int64_t function_403ec0(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x403ec7
    int64_t result = (int64_t)file; // 0x403ec7
    if (file == NULL) {
        // 0x403ee1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x403ed7
    if (v1 >= 3) {
        // 0x403ee1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_405ba0((int64_t)v1, v2); // 0x403efa
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x403f38
        function_4063e0(result, v2);
        // 0x403ee1
        return 0;
    }
    // 0x403efe
    if ((int32_t)function_4063e0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x403f10
        if (v4 != NULL) {
            // 0x403ee1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x403f1d
    close(fd);
    // 0x403ee1
    return 0;
}
// Address range: 0x403f60 - 0x403ff9
int64_t function_403f60(int64_t str) {
    // 0x403f60
    if (str == 0) {
        // 0x403fd9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x403f6e
    int64_t result = (int64_t)found_char_pos; // 0x403f6e
    if (found_char_pos == NULL) {
        // 0x403fc9
        g44 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403f78
    if (v1 - str < 7) {
        // 0x403fc9
        g44 = str;
        g30 = str;
        return result;
    }
    // 0x403f88
    bool v2; // 0x403f60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403f60
    int64_t v5 = result - 6; // 0x403f60
    int64_t v6 = 7; // 0x403f96
    unsigned char v7 = *(char *)v5; // 0x403f96
    char v8 = *(char *)v4; // 0x403f96
    char v9 = v8; // 0x403f96
    bool v10 = false; // 0x403f96
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
    int64_t v12 = (int64_t)"lt-"; // 0x403fa0
    int64_t v13 = v1; // 0x403fa0
    int64_t v14 = 3; // 0x403fa0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403fc9
        g44 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403fb2
    char v16 = *(char *)v12; // 0x403fb2
    char v17 = v16; // 0x403fb2
    bool v18 = false; // 0x403fb2
    while (v15 == v16) {
        // 0x403fa2
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
    int64_t v20 = v1; // 0x403fbc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x403fbe
        v20 = result + 4;
        g27 = v20;
    }
    // 0x403fc9
    g44 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x404000 - 0x4040f2
int64_t function_404000(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x404014
    int64_t result = (int64_t)v1; // 0x404014
    if (result != a1) {
        // 0x404021
        return result;
    }
    int64_t v2 = function_407550(); // 0x404030
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4040e6
    if (v3 == 85) {
        // 0x404040
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4040d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40406e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40407b
        // 0x404021
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4040d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4040bd
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4040ca
    // 0x404021
    return result4;
}
// Address range: 0x404100 - 0x404157
int64_t function_404100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x404100
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x404148
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x404157 - 0x405321
int64_t function_404157(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4041a1
    int64_t v3 = 0; // 0x4041a1
    int64_t v4; // 0x404157
    int64_t v5; // 0x404157
    int64_t v6; // 0x404157
    int64_t v7; // 0x404157
    int64_t v8; // 0x404157
    int64_t v9; // 0x404157
    int64_t v10; // 0x404157
    int64_t v11; // 0x404157
    int64_t v12; // 0x404157
    int64_t v13; // 0x404157
    int64_t v14; // 0x404157
    int64_t v15; // 0x404157
    int64_t v16; // 0x404157
    int64_t v17; // 0x404157
    int64_t v18; // 0x404157
    int64_t result; // 0x404157
    int64_t v19; // 0x404157
    int32_t wc; // bp+132, 0x404157
    int64_t ps; // bp+136, 0x404157
    char v20; // 0x404710
    int64_t v21; // 0x404710
    int64_t v22; // 0x404ab8
    int64_t v23; // 0x404157
    int64_t v24; // 0x404ad7
    int32_t v25; // 0x404157
    while (true) {
      lab_0x4041a8_2:
        // 0x4041a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x404157
        int64_t v27; // 0x4041dc
        while (true) {
          lab_0x4041a8:
            // 0x4041a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4041b3
            if (v15 == -1) {
                // 0x4041b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4041c3
            if (v28) {
                // break (via goto) -> 0x404928
                goto lab_0x404928;
            }
            // 0x4041cc
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
                    // 0x4047bb
                    if (v25 % 2 == 0) {
                        goto lab_0x404301;
                    }
                    // 0x404bdd
                    v26 = v5 + 1;
                    goto lab_0x4041a8;
                }
                case 7: {
                    goto lab_0x404301;
                }
                case 8: {
                    goto lab_0x404301;
                }
                case 9: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x404301;
                }
                case 12: {
                    goto lab_0x404301;
                }
                case 13: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4042cd;
                }
                case 36: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x404301;
                }
                case 38: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x404301;
                }
                case 44: {
                    goto lab_0x404301;
                }
                case 45: {
                    goto lab_0x404301;
                }
                case 46: {
                    goto lab_0x404301;
                }
                case 47: {
                    goto lab_0x404301;
                }
                case 48: {
                    goto lab_0x404301;
                }
                case 49: {
                    goto lab_0x404301;
                }
                case 50: {
                    goto lab_0x404301;
                }
                case 51: {
                    goto lab_0x404301;
                }
                case 52: {
                    goto lab_0x404301;
                }
                case 53: {
                    goto lab_0x404301;
                }
                case 54: {
                    goto lab_0x404301;
                }
                case 55: {
                    goto lab_0x404301;
                }
                case 56: {
                    goto lab_0x404301;
                }
                case 57: {
                    goto lab_0x404301;
                }
                case 58: {
                    goto lab_0x404301;
                }
                case 59: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x404301;
                }
                case 66: {
                    goto lab_0x404301;
                }
                case 67: {
                    goto lab_0x404301;
                }
                case 68: {
                    goto lab_0x404301;
                }
                case 69: {
                    goto lab_0x404301;
                }
                case 70: {
                    goto lab_0x404301;
                }
                case 71: {
                    goto lab_0x404301;
                }
                case 72: {
                    goto lab_0x404301;
                }
                case 73: {
                    goto lab_0x404301;
                }
                case 74: {
                    goto lab_0x404301;
                }
                case 75: {
                    goto lab_0x404301;
                }
                case 76: {
                    goto lab_0x404301;
                }
                case 77: {
                    goto lab_0x404301;
                }
                case 78: {
                    goto lab_0x404301;
                }
                case 79: {
                    goto lab_0x404301;
                }
                case 80: {
                    goto lab_0x404301;
                }
                case 81: {
                    goto lab_0x404301;
                }
                case 82: {
                    goto lab_0x404301;
                }
                case 83: {
                    goto lab_0x404301;
                }
                case 84: {
                    goto lab_0x404301;
                }
                case 85: {
                    goto lab_0x404301;
                }
                case 86: {
                    goto lab_0x404301;
                }
                case 87: {
                    goto lab_0x404301;
                }
                case 88: {
                    goto lab_0x404301;
                }
                case 89: {
                    goto lab_0x404301;
                }
                case 90: {
                    goto lab_0x404301;
                }
                case 91: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x404301;
                }
                case 94: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x404301;
                }
                case 96: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x404301;
                }
                case 98: {
                    goto lab_0x404301;
                }
                case 99: {
                    goto lab_0x404301;
                }
                case 100: {
                    goto lab_0x404301;
                }
                case 101: {
                    goto lab_0x404301;
                }
                case 102: {
                    goto lab_0x404301;
                }
                case 103: {
                    goto lab_0x404301;
                }
                case 104: {
                    goto lab_0x404301;
                }
                case 105: {
                    goto lab_0x404301;
                }
                case 106: {
                    goto lab_0x404301;
                }
                case 107: {
                    goto lab_0x404301;
                }
                case 108: {
                    goto lab_0x404301;
                }
                case 109: {
                    goto lab_0x404301;
                }
                case 110: {
                    goto lab_0x404301;
                }
                case 111: {
                    goto lab_0x404301;
                }
                case 112: {
                    goto lab_0x404301;
                }
                case 113: {
                    goto lab_0x404301;
                }
                case 114: {
                    goto lab_0x404301;
                }
                case 115: {
                    goto lab_0x404301;
                }
                case 116: {
                    goto lab_0x404301;
                }
                case 117: {
                    goto lab_0x404301;
                }
                case 118: {
                    goto lab_0x404301;
                }
                case 119: {
                    goto lab_0x404301;
                }
                case 120: {
                    goto lab_0x404301;
                }
                case 121: {
                    goto lab_0x404301;
                }
                case 122: {
                    goto lab_0x404301;
                }
                case 123: {
                    goto lab_0x4042a5;
                }
                case 124: {
                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4042a5;
                }
                case 126: {
                    goto lab_0x4042cd;
                }
                default: {
                    goto lab_0x4046a5;
                }
            }
        }
      lab_0x4046a5:
        if (v23 != 1) {
            // 0x404a10
            ps = 0;
            int64_t len = v15; // 0x404a20
            if (v15 == -1) {
                // 0x404a22
                len = strlen((char *)str);
            }
            // 0x404a4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x404aaf:
                // 0x404aaf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404ab4
                int64_t v30 = v29 + str;
                v24 = function_407410(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40502a_2;
                    }
                    case -1: {
                        goto lab_0x40502a_2;
                    }
                    case -2: {
                        // 0x40510d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x405147
                            v19 = v18;
                            int64_t v31 = v18; // 0x40514a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x405157
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x405150
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40502a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40502a_2;
                    }
                    case 1: {
                        goto lab_0x404a80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x404b2c
                        char v34 = *(char *)v33; // 0x404b3d
                        unsigned char v35; // 0x404157
                        if (v34 < 125) {
                            // 0x404b48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x404b5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_404100(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404b30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x404b3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404b48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x404b5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_404100(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404b30
                            v33++;
                        }
                        goto lab_0x404a80;
                    }
                }
            }
            goto lab_0x40502a_2;
        } else {
            // 0x4046f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x404301;
        }
    }
  lab_0x404928:
    // 0x404928
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40522a
        if (v8 > result) {
            // 0x405233
            *(char *)(v12 + result) = 0;
        }
        // 0x404557
        return result;
    }
    return function_404100(v10, v6, str, v4, 2, v25 & -3);
  lab_0x404301:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x404310
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40451a_2;
        }
    }
    int64_t v39 = result; // 0x404411
    char v40 = v20; // 0x404411
    int64_t v41 = v38; // 0x404411
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x404411
    int64_t v43 = v36; // 0x404411
    goto lab_0x40438d;
  lab_0x40451a_2:
    // 0x404557
    return function_404100(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40502a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x404301;
    } else {
        uint64_t v49 = v46 + v5; // 0x404bfe
        int64_t v50 = v5 + 1; // 0x404ce1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404ce8
        char v52 = v20; // 0x404ce8
        int64_t v53 = result; // 0x404ce8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404cb1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404cb5
            int64_t v56 = v54 + 1; // 0x404cba
            int64_t v57 = v51 + 1; // 0x404ce1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x404cac
                v54 = v56;
                if (v47 > v54) {
                    // 0x404cb1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404cb5
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
        goto lab_0x40438d;
    }
  lab_0x404a80:
    // 0x404a80
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x404a9f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404aa2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40502a
        goto lab_0x40502a_2;
    }
    goto lab_0x404aaf;
  lab_0x4042cd:
    // 0x4042cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40451a_2;
    }
    goto lab_0x404301;
  lab_0x4042a5:;
    bool v60 = v15 == 1; // 0x4042b0
    if (v15 == -1) {
        // 0x4042b2
        v60 = *(char *)v1 == 0;
    }
    // 0x4042be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x404301;
    } else {
        goto lab_0x4042cd;
    }
  lab_0x40438d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x404392
        *(char *)(v44 + v45) = v40;
    }
    // 0x404396
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4041a8_2;
}
// Address range: 0x405330 - 0x4054ce
int64_t function_405330(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x405332
    int32_t * v3 = __errno_location(); // 0x40534c
    int64_t v4 = (int64_t)g20; // 0x405351
    int32_t v5 = *v3; // 0x40535b
    int64_t v6 = v4; // 0x405371
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4054c9
            function_4063a0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x405380
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x405387
        int64_t v9; // 0x405330
        if (g20 == &g21) {
            int64_t v10 = function_4061b0(0, v8); // 0x4054aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x4054af
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4061b0(v4, v8); // 0x40539b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x4053aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x4053aa
        int32_t v14 = v7; // 0x4053b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4053e1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4053eb
    int64_t * v17 = (int64_t *)v15; // 0x4053ee
    uint64_t v18 = *v17; // 0x4053ee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4053f1
    int64_t result = *v19; // 0x4053f1
    int64_t v20; // 0x405330
    uint64_t v21 = function_404100(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x405414
    if (v18 > v21) {
        // 0x40548b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x405427
    *v17 = v22;
    if (result != (int64_t)&g45) {
        // 0x405437
        free((int64_t *)result);
    }
    int64_t result2 = function_406150(v22); // 0x405451
    *v19 = result2;
    int64_t v23; // 0x405330
    function_404100(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40548b
    *v3 = v5;
    return result2;
}
// Address range: 0x4054d0 - 0x405504
int64_t function_4054d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4054d7
    int64_t result = function_406350(a1 == 0 ? (int64_t)&g46 : a1, 56); // 0x4054f6
    return result;
}
// Address range: 0x405510 - 0x40551f
int64_t function_405510(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g46 : a1); // 0x40551c
    return result;
}
// Address range: 0x405520 - 0x40552f
int64_t function_405520(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x405528
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g46;
}
// Address range: 0x405530 - 0x405563
int64_t function_405530(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 + 8 : a1 + 8; // 0x405549
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40554e
    uint32_t v3 = *v2; // 0x40554e
    uint32_t v4 = (int32_t)a2 % 32; // 0x405552
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x405570 - 0x405583
int64_t function_405570(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g46 + 4 : a1 + 4); // 0x40557c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x405590 - 0x4055bb
int64_t function_405590(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g46 : a1; // 0x405598
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4055b5
        abort();
        // UNREACHABLE
    }
    // 0x4055ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g46;
}
// Address range: 0x4055c0 - 0x405632
int64_t function_4055c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g46 : a5; // 0x4055e2
    int32_t * v2 = __errno_location(); // 0x4055eb
    uint32_t v3 = *(int32_t *)v1; // 0x40560b
    int64_t result = function_404100(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40561a
    return result;
}
// Address range: 0x405640 - 0x405721
int64_t function_405640(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g46 : a4; // 0x405662
    int32_t * v2 = __errno_location(); // 0x405668
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x405687
    int32_t * v4 = (int32_t *)v1; // 0x40568a
    int64_t v5 = function_404100(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4056a5
    int64_t v6 = v5 + 1; // 0x4056aa
    int64_t result = function_406150(v6); // 0x4056bf
    function_404100(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x405704
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40570d
    return result;
}
// Address range: 0x405730 - 0x40573a
int64_t function_405730(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405730
    return function_405640(a1, a2, 0, a3);
}
// Address range: 0x405740 - 0x4057d5
int64_t function_405740(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x405740
    int64_t v2 = v1; // 0x405740
    int64_t v3 = v2; // 0x405754
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x405773
        free((int64_t *)*(int64_t *)v4);
        v3 = &g57;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x405770
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g57;
        }
    }
    int64_t v6 = v3; // 0x40578d
    if (g21 != 0x60c320) {
        // 0x40578f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g45;
        v6 = &g57;
    }
    int64_t result = v6; // 0x4057b1
    if (g20 != &g21) {
        // 0x4057b3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g57;
    }
    // 0x4057c6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x4057e0 - 0x4057f1
int64_t function_4057e0(void) {
    // 0x4057e0
    int64_t v1; // 0x4057e0
    return function_405330(v1, v1, -1, (int64_t *)&g46);
}
// Address range: 0x405800 - 0x40580a
int64_t function_405800(void) {
    // 0x405800
    int64_t v1; // 0x405800
    return function_405330(v1, v1, v1, (int64_t *)&g46);
}
// Address range: 0x405810 - 0x405826
int64_t function_405810(int64_t a1) {
    // 0x405810
    return function_405330(0, a1, -1, (int64_t *)&g46);
}
// Address range: 0x405830 - 0x405842
int64_t function_405830(int64_t a1, int64_t a2) {
    // 0x405830
    return function_405330(0, a1, a2, (int64_t *)&g46);
}
// Address range: 0x405850 - 0x4058b8
int64_t function_405850(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405860
    return function_405330((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4058c0 - 0x405924
int64_t function_4058c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4058d0
    return function_405330((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405930 - 0x40593c
int64_t function_405930(int64_t a1, int64_t a2) {
    // 0x405930
    return function_405850(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405940 - 0x40594f
int64_t function_405940(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405940
    return function_4058c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405950 - 0x4059c0
int64_t function_405950(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x40595d
    int128_t v2 = __asm_movdqa(g47); // 0x405965
    int128_t v3 = __asm_movdqa(g48); // 0x40596d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x405982
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x405998
    uint32_t v6 = *v5; // 0x405998
    uint32_t v7 = (int32_t)a3 % 32; // 0x40599d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_405330(0, a1, a2, &v4);
}
// Address range: 0x4059c0 - 0x4059cd
int64_t function_4059c0(int64_t a1, int64_t a2) {
    // 0x4059c0
    return function_405950(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4059d0 - 0x4059e1
int64_t function_4059d0(int64_t a1) {
    // 0x4059d0
    return function_405950(a1, -1, 58);
}
// Address range: 0x4059f0 - 0x4059fa
int64_t function_4059f0(void) {
    // 0x4059f0
    int64_t v1; // 0x4059f0
    return function_405950(v1, v1, 58);
}
// Address range: 0x405a00 - 0x405a6e
int64_t function_405a00(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405a1a
    return function_405330((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405a70 - 0x405adc
int64_t function_405a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g46); // 0x405a77
    int128_t v2 = __asm_movdqa(g47); // 0x405a7f
    int128_t v3 = __asm_movdqa(g48); // 0x405a87
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x405aa9
    if (a2 == 0 || a3 == 0) {
        // 0x405ad7
        abort();
        // UNREACHABLE
    }
    // 0x405aba
    return function_405330(a1, a4, a5, &v4);
}
// Address range: 0x405ae0 - 0x405ae9
int64_t function_405ae0(void) {
    // 0x405ae0
    int64_t v1; // 0x405ae0
    return function_405a70(v1, v1, v1, v1, -1);
}
// Address range: 0x405af0 - 0x405b07
int64_t function_405af0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405af0
    return function_405a70(0, a1, a2, a3, -1);
}
// Address range: 0x405b10 - 0x405b23
int64_t function_405b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405b10
    return function_405a70(0, a1, a2, a3, a4);
}
// Address range: 0x405b30 - 0x405b3a
int64_t function_405b30(void) {
    // 0x405b30
    int64_t v1; // 0x405b30
    return function_405330(v1, v1, v1, &g19);
}
// Address range: 0x405b40 - 0x405b52
int64_t function_405b40(int64_t a1, int64_t a2) {
    // 0x405b40
    return function_405330(0, a1, a2, &g19);
}
// Address range: 0x405b60 - 0x405b71
int64_t function_405b60(void) {
    // 0x405b60
    int64_t v1; // 0x405b60
    return function_405330(v1, v1, -1, &g19);
}
// Address range: 0x405b80 - 0x405b96
int64_t function_405b80(int64_t a1) {
    // 0x405b80
    return function_405330(0, a1, -1, &g19);
}
// Address range: 0x405ba0 - 0x405bae
int64_t function_405ba0(int64_t a1, int64_t a2) {
    // 0x405ba0
    int64_t v1; // 0x405ba0
    return function_406460(a1, 0, 3, v1);
}
// Address range: 0x405bb0 - 0x405f8d
int64_t function_405bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405c48
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x405bcc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405be6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x405c2b
    if (a6 < 10) {
        // 0x405c3a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405d32
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405f90 - 0x405fb0
int64_t function_405f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f90
    if (a5 == 0) {
        // 0x405fab
        return function_405bb0(a1, a2, a3, a4, a5, 0, (int64_t)&g57);
    }
    int64_t v1 = 0; // 0x405f97
    v1++;
    int64_t v2 = v1; // 0x405fa9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405fa0
        v1++;
        v2 = v1;
    }
    // 0x405fab
    return function_405bb0(a1, a2, a3, a4, a5, v2, (int64_t)&g57);
}
// Address range: 0x405fb0 - 0x406010
int64_t function_405fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405fb0
    int64_t v3 = &v2; // 0x405fb0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405fe3
    int64_t v6; // 0x405fcd
    int64_t * v7; // 0x405feb
    int64_t v8; // 0x405feb
    int64_t v9; // 0x405ff7
    if (v5 < 48) {
        // 0x405fc0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x406003
            break;
        }
    } else {
        // 0x405feb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x406003
            break;
        }
    }
    int64_t v10 = 10; // 0x405fe1
    while (v4 != 9) {
        // 0x405fd9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405fc0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x406003
                break;
            }
        } else {
            // 0x405feb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x406003
                break;
            }
        }
        // 0x405fd9
        v10 = 10;
    }
    // 0x406003
    return function_405bb0(a1, a2, a3, a4, v3, v10, (int64_t)&g57);
}
// Address range: 0x406010 - 0x4060cc
int64_t function_406010(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x406010
    int64_t v1; // bp-168, 0x406010
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x406010
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x406010
    int64_t v8; // 0x406010
    int64_t v9; // bp-56, 0x406010
    int64_t v10; // 0x406075
    int64_t v11; // 0x406099
    if ((int32_t)v6 < 48) {
        // 0x406060
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4060b0
            break;
        }
    } else {
        // 0x406092
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4060b0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40608a
    int64_t v13 = 10; // 0x40608a
    while (v5 != 9) {
        // 0x40608c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x406060
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4060b0
                break;
            }
        } else {
            // 0x406092
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4060b0
                break;
            }
        }
        // 0x406082
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4060b0
    int64_t v14; // bp-136, 0x406010
    int64_t result = function_405bb0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g57); // 0x4060bf
    return result;
}
// Address range: 0x4060d0 - 0x406144
int64_t function_4060d0(int64_t a1) {
    // 0x4060d0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x406133
    return fputs_unlocked(v1, g28);
}
// Address range: 0x406150 - 0x40616a
int64_t function_406150(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x406154
    if (size != 0 != (mem == NULL)) {
        // 0x406163
        return (int64_t)mem;
    }
    // 0x406165
    function_4063a0(size);
    // UNREACHABLE
}
// Address range: 0x406170 - 0x406191
int64_t function_406170(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x406173
    int64_t v2 = v1; // 0x406173
    if (v2 < 0) {
        // 0x40618b
        function_4063a0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406189
        return function_406150(v2);
    }
    // 0x40618b
    function_4063a0(v2);
    // UNREACHABLE
}
// Address range: 0x4061a0 - 0x4061a2
int64_t function_4061a0(void) {
    // 0x4061a0
    int64_t v1; // 0x4061a0
    return function_406150(v1);
}
// Address range: 0x4061b0 - 0x4061e6
int64_t function_4061b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4061d8
        free(v1);
        return (int32_t)&g57 ^ (int32_t)&g57;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4061c1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4061d0
        return (int64_t)mem;
    }
    // 0x4061e1
    function_4063a0(a1);
    // UNREACHABLE
}
// Address range: 0x4061f0 - 0x406211
int64_t function_4061f0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4061f3
    int64_t v2 = v1; // 0x4061f3
    if (v2 < 0) {
        // 0x40620b
        function_4063a0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x406209
        return function_4061b0(a1, v2);
    }
    // 0x40620b
    function_4063a0(a1);
    // UNREACHABLE
}
// Address range: 0x406220 - 0x4062a6
int64_t function_406220(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40627b
            function_4063a0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4061b0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x406263
    if (a2 == 0) {
        // 0x406288
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x406268
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40627b
        function_4063a0(a1);
        // UNREACHABLE
    }
    // 0x40624a
    *(int64_t *)a2 = v2;
    return function_4061b0(a1, v2 * a3);
}
// Address range: 0x4062b0 - 0x406300
int64_t function_4062b0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4062b0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4062fa
            function_4063a0(a1);
            // UNREACHABLE
        }
        // 0x4062d2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4061b0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4062e5
        *(int64_t *)a2 = 128;
        return function_4061b0(0, 128);
    }
    // 0x4062f8
    if (a2 < 0) {
        // 0x4062fa
        function_4063a0(a1);
        // UNREACHABLE
    }
    // 0x4062d2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4061b0(a1, v1);
}
// Address range: 0x406300 - 0x406317
int64_t function_406300(int64_t a1, int64_t a2) {
    // 0x406300
    return (int64_t)memset((int64_t *)function_406150(a1), 0, (int32_t)a1);
}
// Address range: 0x406320 - 0x40634e
int64_t function_406320(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x406327
    if ((int64_t)v1 < 0) {
        // 0x406349
        function_4063a0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x406349
        function_4063a0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40633a
    if (mem != NULL) {
        // 0x406344
        return (int64_t)mem;
    }
    // 0x406349
    function_4063a0(nmemb);
    // UNREACHABLE
}
// Address range: 0x406350 - 0x406378
int64_t function_406350(int64_t a1, int64_t a2) {
    int64_t v1 = function_406150(a2); // 0x40635f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x406380 - 0x406393
int64_t function_406380(int64_t str) {
    // 0x406380
    return function_406350(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4063a0 - 0x4063d1
int64_t function_4063a0(int64_t a1) {
    // 0x4063a0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
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
    if ((int32_t)function_4065a0(a1, v1) == 0) {
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
// Address range: 0x406460 - 0x406595
int64_t function_406460(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x406540
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40649c
    int64_t v2; // 0x406460
    if (g49 < 0) {
        int64_t v3 = function_406460(fd, 0, v1, a4); // 0x4064e4
        int64_t v4 = v3 & 0xffffffff; // 0x4064e9
        if ((int32_t)v3 < 0) {
            // 0x4064d0
            return v4 & 0xffffffff;
        }
        // 0x4064ef
        v2 = v4;
        if (g49 != -1) {
            // 0x4064d0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x4064b7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x4064c6
            g49 = 1;
            // 0x4064d0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_406460(fd & 0xffffffff, 0, v1, a4); // 0x406577
        int64_t v7 = v6 & 0xffffffff; // 0x40657c
        if ((int32_t)v6 < 0) {
            // 0x4064d0
            return v7 & 0xffffffff;
        }
        // 0x406586
        g49 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x4064ff
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40650a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x4064d0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x406522
    close(fd2);
    // 0x4064d0
    return 0xffffffff;
}
// Address range: 0x4065a0 - 0x4065e0
int64_t function_4065a0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4065ba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4065ba
        return fflush(stream);
    }
    // 0x4065c8
    function_4065e0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4065e0 - 0x406637
int64_t function_4065e0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4065e0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4065ea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40661b
    int64_t result = -1; // 0x406624
    if (v1 != -1) {
        // 0x406626
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406632
    return result;
}
// Address range: 0x406640 - 0x40671f
int64_t function_406640(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40664c
    uint32_t v2 = *v1; // 0x40664c
    int64_t v3 = a2 & 0xffffffff; // 0x406651
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x406654
    uint64_t v5 = (int64_t)*v4; // 0x406654
    int64_t v6; // 0x4066c2
    if (v3 <= v5) {
      lab_0x4066bc_2:
        // 0x4066bc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x406642
    int64_t v8 = v2; // 0x406640
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4066bc
        goto lab_0x4066bc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x406678
    int64_t v17; // 0x406686
    int64_t * v18; // 0x4066a0
    int64_t * v19; // 0x4066a3
    int64_t v20; // 0x4066ae
    int64_t v21; // 0x406686
    while ((v16 & 0xffffffff) > v10) {
        // 0x406683
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4066a0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4066b7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4066bc
            goto lab_0x4066bc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4066bc
            goto lab_0x4066bc_2;
        }
        // 0x406672
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4066fb
    int64_t * v23 = (int64_t *)v22; // 0x406700
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x406703
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x406700
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x406717
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40666d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4066bc
            goto lab_0x4066bc_2;
        }
        // 0x406672
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x406683
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4066a0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4066b7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4066bc
                goto lab_0x4066bc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4066bc
                goto lab_0x4066bc_2;
            }
            // 0x406672
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4066e0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x406700
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x406717
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4066bc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x406720 - 0x406d3c
int64_t function_406720(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40673f
    int64_t v2 = *v1; // 0x40673f
    char * str2 = (char *)v2; // 0x40674c
    char c = *str2; // 0x40674c
    int64_t v3 = v2; // 0x406778
    int64_t v4 = 0; // 0x406720
    int32_t v5; // 0x406720
    int64_t v6; // 0x406720
    int64_t v7; // 0x406720
    int64_t v8; // 0x406720
    int64_t v9; // 0x406720
    int64_t v10; // 0x406720
    int64_t v11; // 0x406720
    int64_t v12; // 0x406720
    int64_t v13; // 0x406720
    int64_t str3; // 0x406720
    int64_t v14; // 0x406720
    int64_t v15; // 0x406720
    int64_t v16; // 0x406720
    int64_t v17; // 0x406720
    int32_t v18; // 0x406720
    int32_t v19; // 0x406720
    int32_t v20; // 0x406720
    int32_t v21; // 0x406720
    int32_t v22; // 0x406720
    int32_t v23; // 0x406720
    int32_t v24; // 0x406720
    int32_t v25; // 0x406720
    int32_t v26; // 0x406720
    int32_t v27; // 0x406720
    int32_t v28; // 0x406720
    int32_t v29; // 0x406720
    int64_t nmemb; // 0x406720
    int64_t v30; // 0x406720
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40677c
            while (v31 != 0 == (v31 != 61)) {
                // 0x406778
                v3++;
                v31 = *(char *)v3;
            }
            // 0x406788
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40678e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x406758
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4067bc
                int64_t v34; // 0x406720
                int64_t v35; // 0x406720
                if (strncmp(str, str2, n) == 0) {
                    // 0x4067c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406940;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4067d6
                int64_t v37 = *(int64_t *)v36; // 0x4067da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4067b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4067c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406940;
                        }
                    }
                    // 0x4067d6
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
                  lab_0x406826:
                    // 0x406826
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
                        goto lab_0x406880;
                    } else {
                        if (v11 == 0) {
                            // 0x4069f0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x406880;
                        } else {
                            if (v39 == 0) {
                                // 0x4069a0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40684a;
                                } else {
                                    // 0x4069ac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40684a;
                                    } else {
                                        // 0x4069ba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40684a;
                                        } else {
                                            goto lab_0x406880;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40684a;
                            }
                        }
                    }
                }
              lab_0x406891:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406a66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406c12
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x406c32
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x406c7f
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x406c99
                            int64_t v45; // 0x406c9b
                            if (*(char *)v42 != 0) {
                                // 0x406c9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406c93
                            while (v17 + nmemb != v42) {
                                // 0x406c95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x406c9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x406c88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406cc0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x406a74
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x406bcf
                        free((int64_t *)v17);
                    }
                    // 0x406ac9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406ae0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40698e
                    return 63;
                }
                // 0x4068b0
                v5 = v39;
                if (v13 != 0) {
                    // 0x406934
                    v35 = v13;
                    v34 = v25;
                  lab_0x406940:;
                    int32_t * v49 = (int32_t *)a7; // 0x406950
                    uint32_t v50 = *v49; // 0x406950
                    int64_t v51 = v50; // 0x406950
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40695a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406963
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x406b8f
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x406b3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40698e
                            return 63;
                        }
                        // 0x4069d8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x406cef
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x406bed
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406c00
                                // 0x40698e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x406afe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406b12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40697b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40697e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406982
                    int64_t result = v59; // 0x406988
                    if (v58 != 0) {
                        // 0x40698a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40698e
                    return result;
                }
            } else {
                // 0x40678e
                v5 = v32;
            }
            // break -> 0x4068b5
            break;
        }
    }
    // 0x4068b5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4068cd
        if (*(char *)(v60 + 1) != 45) {
            // 0x4068d7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40698e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406a19
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406906
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406916
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x406880:
    // 0x406880
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x406880
    int64_t v63 = *(int64_t *)v62; // 0x406884
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x406891
        goto lab_0x406891;
    }
    goto lab_0x406826;
  lab_0x40684a:
    // 0x40684a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x406720
    int32_t v65; // 0x406720
    int32_t v66; // 0x406720
    if (v27 != 0) {
        goto lab_0x406880;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406a00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x406880;
            } else {
                goto lab_0x406871;
            }
        } else {
            // 0x406865
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x406b5c
                int64_t v67 = (int64_t)mem; // 0x406b5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x406880;
                } else {
                    // 0x406b6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x406871;
                }
            } else {
                goto lab_0x406871;
            }
        }
    }
  lab_0x406871:
    // 0x406871
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x406880;
}
// Address range: 0x406d40 - 0x407306
int64_t function_406d40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406d61
    if (v3 < 1) {
        // 0x406f1e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x406d5d
    int32_t v5 = *(int32_t *)a7; // 0x406d69
    uint64_t v6 = a1 & 0xffffffff; // 0x406d6b
    int64_t v7 = v2; // 0x406d70
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406d73
    *v8 = 0;
    int64_t v9; // 0x406d40
    int64_t v10; // 0x406d40
    int64_t v11; // 0x406d40
    int64_t v12; // 0x406d40
    int64_t str; // 0x406d40
    int64_t v13; // 0x406d40
    int64_t v14; // 0x406d40
    int64_t v15; // 0x406d40
    int64_t v16; // 0x406d40
    int64_t v17; // 0x406d40
    int32_t v18; // 0x406d40
    char v19; // 0x406d40
    if (v5 == 0) {
        // 0x406f58
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x406d8a;
    } else {
        // 0x406d83
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406dd0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406dd3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406e98;
            } else {
                int64_t v22 = v7 + 1; // 0x406de6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406df6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x406eac;
                } else {
                    goto lab_0x406e08;
                }
            }
        } else {
            goto lab_0x406d8a;
        }
    }
  lab_0x406d8a:
    // 0x406d8a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406d90
    *v24 = 0;
    int64_t v25; // 0x406d40
    int64_t v26; // 0x406d40
    int64_t v27; // 0x406d40
    switch (*(char *)&v2) {
        case 45: {
            // 0x406e80
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406e8d;
        }
        case 43: {
            // 0x407190
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x406e8d;
        }
        default: {
            // 0x406dac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40710f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x407228
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x406e8d;
                } else {
                    // 0x40711d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x406dba;
                }
            } else {
                goto lab_0x406dba;
            }
        }
    }
  lab_0x406e98:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x406e9f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406e08;
    } else {
        goto lab_0x406eac;
    }
  lab_0x406dba:
    // 0x406dba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x406e8d;
  lab_0x406e8d:
    // 0x406e8d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406e98;
  lab_0x406e08:;
    uint32_t v30 = *(int32_t *)a7; // 0x406e08
    int64_t v31 = v30; // 0x406e08
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x406e0a
    if ((int64_t)*v32 > v31) {
        // 0x406e0f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406e12
    if (*v33 > v30) {
        // 0x406e17
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x406e1a
    int64_t v35 = v31; // 0x406e1e
    int64_t v36 = v15; // 0x406e1e
    int64_t v37; // 0x406d40
    int64_t v38; // 0x406d40
    int64_t v39; // 0x406d40
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406f88
        int64_t v41 = v40; // 0x406f88
        v2 = v41;
        int64_t v42; // 0x406d40
        if (*v33 == v40) {
            // 0x407170
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407178
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406f94
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406f98
                function_406640(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406fa8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406fb1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x406fba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406fd1
            int64_t v47 = v45 & 0xffffffff; // 0x406fd5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x406fde
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406fe4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406fe6;
                }
            }
            int64_t v48 = v47 + 1; // 0x406fc0
            int64_t v49 = v48 & 0xffffffff; // 0x406fc0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406fd1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x406fde
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406fe4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406fe6;
                    }
                }
                // 0x406fc0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x407188
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406fe6;
    } else {
        goto lab_0x406e24;
    }
  lab_0x406eac:
    // 0x406eac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x406eaf
    int64_t v51 = v12; // 0x406eaf
    int64_t v52 = v14; // 0x406eaf
    if (*(char *)v10 == 0) {
        goto lab_0x406e08;
    } else {
        goto lab_0x406eb5;
    }
  lab_0x406e24:;
    int32_t v53 = v35; // 0x406e24
    int64_t v54; // 0x406d40
    int64_t v55; // 0x406d40
    int64_t v56; // 0x406d40
    int64_t v57; // 0x406d40
    int64_t v58; // 0x406d40
    int64_t v59; // 0x406d40
    char * v60; // 0x406d40
    int64_t v61; // 0x406d40
    int64_t v62; // 0x406e39
    int64_t v63; // 0x406d40
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406f73
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406f76;
    } else {
        // 0x406e2c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406d40
        int64_t v66 = v65 ? -1 : 1; // 0x406e40
        int64_t v67 = (int64_t)"--"; // 0x406d40
        int64_t v68 = v62; // 0x406d40
        int64_t v69 = 3; // 0x406e40
        unsigned char v70 = *(char *)v68; // 0x406e40
        char v71 = *(char *)v67; // 0x406e40
        char v72 = v71; // 0x406e40
        bool v73 = false; // 0x406e40
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
            // 0x406f30
            if (*(char *)v62 == 45) {
                // 0x406ff0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406ff0
                if (c == 0) {
                    goto lab_0x406f3a;
                } else {
                    // 0x406ffd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x407080;
                    } else {
                        if (c == 45) {
                            // 0x407263
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4070d5;
                        } else {
                            // 0x40700e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x407080;
                            } else {
                                // 0x407013
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407034;
                                } else {
                                    // 0x40701a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x407080;
                                    } else {
                                        goto lab_0x407034;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x406f3a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406e50
            v2 = v75;
            int32_t v76 = *v32; // 0x406e53
            int64_t v77 = v35 + 1; // 0x406e56
            int32_t v78 = v77; // 0x406e59
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4071c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406e67
                    function_406640(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406e75
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406f76;
        }
    }
  lab_0x406eb5:;
    // 0x406eb5
    int64_t v79; // bp-104, 0x406d40
    int64_t v80 = &v79; // 0x406d4a
    int64_t v81 = v50 + 1; // 0x406eb5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x406ebc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406ec1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406ec5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406ec9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406ed1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406ed6
    int32_t c2 = v84; // 0x406ed6
    char * found_char_pos = strchr(str2, c2); // 0x406ed6
    int64_t v87 = *v82; // 0x406edb
    v2 = v87;
    int64_t v88 = *v85; // 0x406ee5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406ef0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4071e0
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4071ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x406f1e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406ed6
    char v91 = *(char *)(v90 + 1); // 0x406f0b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406ec5
        if (v91 != 58) {
            // 0x406f1e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x407134
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x407238
                *v8 = 0;
            } else {
                // 0x40721c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40715e
            *v83 = 0;
            // 0x406f1e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40713e
        if (v93 != 0) {
            // 0x4071d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40715e
            *v83 = 0;
            // 0x406f1e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x407151
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40715e
            *v83 = 0;
            // 0x406f1e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40729a
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40724a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x407251
        // 0x40715e
        *v83 = 0;
        // 0x406f1e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4070a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4070ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4072d0
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x407281
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x407288
            // 0x406f1e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4070b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4070ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4070d5;
  lab_0x406fe6:
    // 0x406fe6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406e24;
  lab_0x4070d5:;
    int64_t v99 = function_406720(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4070f3
    // 0x406f1e
    return v99 & 0xffffffff;
  lab_0x406f76:;
    int32_t v100 = v55; // 0x406f76
    if (v100 != (int32_t)v59) {
        // 0x406f7a
        *(int32_t *)a7 = v100;
    }
    // 0x406f1e
    return 0xffffffff;
  lab_0x406f3a:
    // 0x406f3a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406f41
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x406f1e
    return v99 & 0xffffffff;
  lab_0x407080:
    // 0x407080
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406eb5;
  lab_0x407034:
    // 0x407034
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_406720(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40705a
    if ((int32_t)v101 != -1) {
        // 0x406f1e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40706f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x407080;
}
// Address range: 0x407310 - 0x407366
int64_t function_407310(int64_t a1) {
    // 0x407310
    *(int32_t *)&g50 = g26;
    *(int32_t *)&g51 = g25;
    int64_t v1; // 0x407310
    int64_t result = function_406d40(v1, v1, v1, v1, v1, v1, &g50, a1 & 0xffffffff); // 0x407336
    g26 = *(int32_t *)&g50;
    g55 = g53;
    *(int32_t *)&g24 = g52;
    return result;
}
// Address range: 0x407370 - 0x407388
int64_t function_407370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407370
    return function_407310(1);
}
// Address range: 0x407390 - 0x4073a3
int64_t function_407390(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x407390
    return function_407310(0);
}
// Address range: 0x4073b0 - 0x4073c5
int64_t function_4073b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4073b0
    return function_406d40(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4073d0 - 0x4073e6
int64_t function_4073d0(void) {
    // 0x4073d0
    return function_407310(0);
}
// Address range: 0x4073f0 - 0x407408
int64_t function_4073f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4073f0
    return function_406d40(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x407410 - 0x40748a
int64_t function_407410(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40741b
    int64_t v2 = (int64_t)&g9; // 0x40741b
    int32_t * pwc; // 0x407410
    int64_t v3; // 0x407410
    int64_t n; // 0x407410
    if (a2 == 0) {
        goto lab_0x407462;
    } else {
        // 0x40741d
        if (a3 == 0) {
            // 0x407448
            return -2;
        }
        // 0x407429
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x407462;
        } else {
            goto lab_0x407434;
        }
    }
  lab_0x407462:
    // 0x407462
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x407410
    pwc = (int32_t *)&v4;
    goto lab_0x407434;
  lab_0x407434:;
    char * wstr = (char *)v3; // 0x40743a
    int64_t ps; // 0x407410
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40743a
    int64_t result = v5; // 0x40743a
    if (v5 < 0xfffffffe) {
        // 0x407448
        return result;
    }
    int64_t result2 = result; // 0x407479
    if ((char)function_4074f0(0, v3) == 0) {
        // 0x40747b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x407448
    return result2;
}
// Address range: 0x407490 - 0x4074ed
int64_t function_407490(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x407497
    int64_t v2; // 0x407490
    int64_t result = function_4063e0(a1, v2); // 0x4074a8
    if ((v2 & 32) != 0) {
        // 0x4074d0
        if ((int32_t)result == 0) {
            // 0x4074d4
            *__errno_location() = 0;
        }
        // 0x4074ca
        return 0xffffffff;
    }
    // 0x4074b1
    if ((int32_t)result == 0) {
        // 0x4074ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4074b8
    if (v1 == 0) {
        // 0x4074ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4074ca
    return result2;
}
// Address range: 0x4074f0 - 0x40754e
int64_t function_4074f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4074f6
    if (locale == NULL) {
        // 0x407523
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4074f6
    bool v2; // 0x4074f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x4074f0
    int64_t v5 = v1; // 0x4074f0
    int64_t v6 = 2; // 0x407515
    unsigned char v7 = *(char *)v5; // 0x407515
    char v8 = *(char *)v4; // 0x407515
    char v9 = v8; // 0x407515
    bool v10 = false; // 0x407515
    while (v7 == v8) {
        // 0x407508
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
    int64_t v12 = (int64_t)"POSIX"; // 0x407521
    int64_t v13 = v1; // 0x407521
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x407523
        return 0;
    }
    int64_t v14 = 6; // 0x407521
    unsigned char v15 = *(char *)v13; // 0x40753d
    char v16 = *(char *)v12; // 0x40753d
    char v17 = v16; // 0x40753d
    bool v18 = false; // 0x40753d
    while (v15 == v16) {
        // 0x407530
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
// Address range: 0x407550 - 0x407ab2
int64_t function_407550(void) {
    char * v1 = nl_langinfo(14); // 0x407566
    char * v2 = g54; // 0x40756b
    char * v3; // 0x407550
    int64_t v4; // 0x407550
    int64_t v5; // 0x407550
    int64_t v6; // 0x407550
    int64_t v7; // 0x407550
    int32_t size; // 0x407550
    int32_t size2; // 0x407550
    int32_t len; // 0x407622
    int64_t v8; // 0x407622
    char * env_val; // 0x40760d
    if (v2 == NULL) {
        // 0x407608
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407675;
        } else {
            // 0x40761a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407675;
            } else {
                // 0x40761f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40760d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407aa5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407675;
                    } else {
                        // 0x407a19
                        size2 = len + 14;
                        goto lab_0x40763b;
                    }
                } else {
                    goto lab_0x40763b;
                }
            }
        }
    } else {
        // 0x407550
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40758a;
    }
  lab_0x4078bc:;
    // 0x4078bc
    struct _IO_FILE * stream; // 0x4076fb
    int32_t v10 = __uflow(stream); // 0x4078bf
    int64_t v11; // 0x407550
    int64_t v12 = v11; // 0x4078c9
    int64_t v13; // 0x407550
    int64_t v14 = v13; // 0x4078c9
    int32_t v15 = v10; // 0x4078c9
    int64_t v16; // 0x407550
    int64_t v17 = v16; // 0x4078c9
    int64_t v18 = v11; // 0x4078c9
    int64_t v19 = v13; // 0x4078c9
    int64_t v20 = v16; // 0x4078c9
    if (v10 == -1) {
        // break -> 0x4078cf
        goto lab_0x4078cf;
    }
    goto lab_0x407749;
  lab_0x40773e:;
    // 0x40773e
    int64_t v90; // 0x407550
    int64_t * v32; // 0x407730
    *v32 = v90 + 1;
    int64_t v89; // 0x407550
    v12 = v89;
    int64_t v91; // 0x407550
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x407550
    v17 = v92;
    goto lab_0x407749;
  lab_0x407749:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x407550
    int32_t v25; // bp-120, 0x407550
    int32_t v26; // bp-184, 0x407550
    int64_t v27; // 0x4076fb
    int64_t v28; // 0x407718
    int64_t v29; // 0x40771d
    int64_t * v30; // 0x407734
    switch (c) {
        case 32: {
            goto lab_0x407730;
        }
        case 10: {
            goto lab_0x407730;
        }
        case 9: {
            goto lab_0x407730;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x407921
            int32_t v33; // 0x407550
            char v34; // 0x407550
            int32_t v35; // 0x40792e
            if (v31 < *v30) {
                // 0x407900
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40792b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x407921
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407900
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40792b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x407910
                v36 = v33;
            }
            // 0x4079ff
            if (v36 == -1) {
                // break -> 0x4078cf
                break;
            }
            goto lab_0x407730;
        }
        default: {
            // 0x40775f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4078cf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407788
            int64_t v39 = v37 + 4; // 0x40778a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407796
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407798
            while (v41 == 0) {
                // 0x407788
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4077b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4077c2
            int64_t v45 = v43 + 4; // 0x4077c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4077d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4077d2
            while (v47 == 0) {
                // 0x4077c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4077bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4077e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4077f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4077fc
            int64_t v52 = v51 + v48; // 0x407805
            int64_t * mem; // 0x407550
            int64_t v53; // 0x407550
            int64_t v54; // 0x407550
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40793b
                int64_t v56 = v55 + 3; // 0x407947
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x407821
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x407830
            if (mem == NULL) {
                // 0x407a5c
                free((int64_t *)v21);
                function_4063e0(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x4076d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x407848
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x407852
            uint32_t v62 = (int32_t)v59; // 0x407855
            int64_t v63; // 0x407550
            if (v62 >= 8) {
                // 0x407964
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40797e
                int64_t v66 = v61 - v65; // 0x407982
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40798d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40799e
                    int64_t v70 = v69 & 0xffffffff; // 0x40799e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40799b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x407a2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x407867
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40786b
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
            int64_t v73 = v51 + 1; // 0x40787b
            int64_t v74 = v60 - 1; // 0x40787f
            uint32_t v75 = (int32_t)v73; // 0x407884
            int64_t v76; // 0x407550
            if (v75 >= 8) {
                // 0x4079b2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4079bc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4079cc
                int64_t v80 = v74 - v79; // 0x4079d0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4079db
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4079eb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4079e9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407a46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x407a4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407896
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40789a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407a93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4078ae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40773e;
            } else {
                goto lab_0x4078bc;
            }
        }
    }
  lab_0x407730:;
    int64_t v93 = v23; // 0x407550
    int64_t v94 = v22; // 0x407550
    int64_t v95 = v21; // 0x407550
    goto lab_0x407730_2;
  lab_0x407675:;
    int64_t * mem3 = malloc(size); // 0x407675
    int64_t v97 = (int64_t)&g9; // 0x407680
    int64_t v98; // 0x407550
    int64_t path; // 0x407550
    if (mem3 == NULL) {
        goto lab_0x407652;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407675
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407696;
    }
  lab_0x40758a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40757d
    char v100 = *v3; // 0x40758a
    int64_t v101; // 0x407550
    if (v100 == 0) {
        // 0x4075e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x407550
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x407550
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4075d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4075d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4075a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4075ad
        char v107 = *(char *)v106; // 0x4075b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4075e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4075bb
    v104 = v103 + 1;
  lab_0x4075d7:
    // 0x4075e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x407652:;
    char * v108 = (char *)v97;
    g54 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40758a;
  lab_0x407696:;
    int64_t v109 = v98 + path; // 0x407696
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4076c2
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x4076f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x407a22
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x407715
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x407730_2:;
                uint64_t v96 = *v32; // 0x407730
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4078bc;
                } else {
                    goto lab_0x40773e;
                }
            }
          lab_0x4078cf:
            // 0x4078cf
            function_4063e0(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x4078ee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4076d4;
  lab_0x40763b:;
    int64_t * mem4 = malloc(size2); // 0x40763b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x4076e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407696;
    } else {
        goto lab_0x407652;
    }
  lab_0x4076d4:
    // 0x4076d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x407652;
}
// Address range: 0x407ac0 - 0x407b1d
int64_t function_407ac0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407ac0
    return function_401538();
}
// Address range: 0x407b20 - 0x407b21
int64_t function_407b20(void) {
    // 0x407b20
    int64_t result; // 0x407b20
    return result;
}
// Address range: 0x407b30 - 0x407b48
int64_t function_407b30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407b30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x407b48 - 0x407b68
int64_t function_407b48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x407b52
    while (*(int64_t *)v1 != -1) {
        // 0x407b53
        v1 -= 8;
    }
    // 0x407b64
    return result;
}
