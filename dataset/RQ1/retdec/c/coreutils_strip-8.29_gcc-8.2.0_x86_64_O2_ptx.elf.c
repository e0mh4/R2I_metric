// Address range: 0x401fd0 - 0x401fd5
int64_t function_401fd0(void) {
    // 0x401fd0
    abort();
    // UNREACHABLE
}
// Address range: 0x401fd5 - 0x401fda
int64_t function_401fd5(void) {
    // 0x401fd5
    abort();
    // UNREACHABLE
}
// Address range: 0x401fda - 0x401fdf
int64_t function_401fda(void) {
    // 0x401fda
    abort();
    // UNREACHABLE
}
// Address range: 0x401fdf - 0x401fe4
int64_t function_401fdf(void) {
    // 0x401fdf
    abort();
    // UNREACHABLE
}
// Address range: 0x401fe4 - 0x401fe9
int64_t function_401fe4(void) {
    // 0x401fe4
    abort();
    // UNREACHABLE
}
// Address range: 0x401fe9 - 0x401fee
int64_t function_401fe9(void) {
    // 0x401fe9
    abort();
    // UNREACHABLE
}
// Address range: 0x401fee - 0x401ff3
int64_t function_401fee(void) {
    // 0x401fee
    abort();
    // UNREACHABLE
}
// Address range: 0x401ff3 - 0x401ff8
int64_t function_401ff3(void) {
    // 0x401ff3
    abort();
    // UNREACHABLE
}
// Address range: 0x401ff8 - 0x401ffd
int64_t function_401ff8(void) {
    // 0x401ff8
    abort();
    // UNREACHABLE
}
// Address range: 0x401ffd - 0x402002
int64_t function_401ffd(void) {
    // 0x401ffd
    abort();
    // UNREACHABLE
}
// Address range: 0x402002 - 0x402007
int64_t function_402002(void) {
    // 0x402002
    abort();
    // UNREACHABLE
}
// Address range: 0x402007 - 0x40200c
int64_t function_402007(void) {
    // 0x402007
    abort();
    // UNREACHABLE
}
// Address range: 0x402010 - 0x4045b0
int64_t function_402010(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x402019
    function_405b60(a2);
    setlocale(LC_ALL, (char *)&g19);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x402010
    function_41b410(0x4058c0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    int64_t v3; // bp-88, 0x402010
    while (true) {
      lab_0x402060_2:;
        // 0x402060
        int64_t v4; // 0x402010
        int64_t v5 = v4;
        int64_t v6 = function_40aad0(v1, a2, "AF:GM:ORS:TW:b:i:fg:o:trw:", &g8, 0, v5); // 0x402072
        int32_t v7 = v6;
        switch (v7) {
            case -1: {
                goto lab_0x40236c;
            }
            case 83: {
                // 0x402310
                g100 = (char *)function_404780((int64_t)g123);
                // 0x402060
                v4 = v5;
                goto lab_0x402060_2;
            }
            default: {
                int64_t v8; // 0x402010
                if (v7 > 83) {
                    if (v7 == 103) {
                        // 0x4022a0
                        if ((int32_t)function_409470((int64_t)g123, 0, 0, &v3, 0) != 0) {
                            goto lab_0x404539_2;
                        }
                        // 0x4022c0
                        if (v3 < 1) {
                            goto lab_0x404539_2;
                        }
                        // 0x4022ce
                        g32 = v3;
                        v8 = v5;
                    } else {
                        if (v7 > 103) {
                            if (v7 == 114) {
                                // 0x402360
                                *(char *)&g108 = 1;
                                v8 = v5;
                            } else {
                                if (v7 > 114) {
                                    // 0x402198
                                    v8 = v5;
                                    if (v7 != 116) {
                                        if (v7 != 119) {
                                            // 0x402d17
                                            function_405120(1);
                                            // UNREACHABLE
                                        }
                                        int32_t v9 = g123; // 0x4021aa
                                        int64_t v10 = function_409470((int64_t)v9, 0, 0, &v3, 0); // 0x4021bd
                                        char * format; // 0x404588
                                        if ((int32_t)v10 != 0) {
                                            uint32_t v11 = g123; // 0x40456d
                                            function_408350((int64_t)v11);
                                            format = dcgettext(NULL, "invalid line width: %s", 5);
                                            error(1, (int32_t)"invalid line width: %s" ^ (int32_t)"invalid line width: %s", format);
                                            return &g127;
                                        }
                                        int64_t v12 = v3; // 0x4021ca
                                        if (v12 < 1) {
                                          lab_0x40456d:
                                            // 0x40456d
                                            function_408350((int64_t)g123);
                                            format = dcgettext(NULL, "invalid line width: %s", 5);
                                            error(1, (int32_t)"invalid line width: %s" ^ (int32_t)"invalid line width: %s", format);
                                            return &g127;
                                        }
                                        // 0x4021d8
                                        g33 = v12;
                                        v8 = v5;
                                    }
                                } else {
                                    if (v7 != 105) {
                                        if (v7 != 111) {
                                            // 0x402d17
                                            function_405120(1);
                                            // UNREACHABLE
                                        }
                                        // 0x4020f9
                                        g103 = g123;
                                        v8 = v5;
                                    } else {
                                        // 0x4020ae
                                        g102 = g123;
                                        v8 = v5;
                                    }
                                }
                            }
                        } else {
                            if (v7 == 87) {
                                int64_t v13 = function_404780((int64_t)g123); // 0x4022e7
                                g98 = v13;
                                g98 = *(char *)v13 != 0 ? v13 : 0;
                                v8 = v5;
                            } else {
                                if (v7 > 87) {
                                    if (v7 != 98) {
                                        if (v7 != 102) {
                                            // 0x402d17
                                            function_405120(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402279
                                        g105 = 1;
                                        v8 = v5;
                                    } else {
                                        // 0x4021fc
                                        g104 = g123;
                                        v8 = v5;
                                    }
                                } else {
                                    if (v7 != 84) {
                                        // 0x402d17
                                        function_405120(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402291
                                    g106 = 3;
                                    v8 = v5;
                                }
                            }
                        }
                    }
                } else {
                    if (v7 == 70) {
                        int64_t v14 = function_404780((int64_t)g123); // 0x40234f
                        *(int64_t *)&g31 = v14;
                        v8 = v5;
                    } else {
                        if (v7 > 70) {
                            if (v7 == 77) {
                                // 0x402330
                                *(int64_t *)&g30 = (int64_t)g123;
                                v8 = v5;
                            } else {
                                if (v7 > 77) {
                                    if (v7 != 79) {
                                        if (v7 != 82) {
                                            // 0x402d17
                                            function_405120(1);
                                            // UNREACHABLE
                                        }
                                        // 0x402119
                                        g107 = 1;
                                        v8 = v5;
                                    } else {
                                        // 0x4020db
                                        g106 = 2;
                                        v8 = v5;
                                    }
                                } else {
                                    if (v7 != 71) {
                                        // 0x402d17
                                        function_405120(1);
                                        // UNREACHABLE
                                    }
                                    // 0x402131
                                    g34 = 0;
                                    v8 = v5;
                                }
                            }
                        } else {
                            if (v7 == -130) {
                                // 0x4044b3
                                function_405120(0);
                                // UNREACHABLE
                            }
                            if (v7 <= 0xffffff7e) {
                                if (v7 == -131) {
                                    int64_t v15 = function_406550("F. Pinard", &g3); // 0x40223d
                                    function_409020((int64_t)g48, "ptx", "GNU coreutils", (int64_t)g35, v15, 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x402d17;
                            }
                            if (v7 != 10) {
                                if (v7 != 65) {
                                    // 0x402d17
                                    function_405120(1);
                                    // UNREACHABLE
                                }
                                // 0x402219
                                *(char *)&g109 = 1;
                                v8 = v5;
                            } else {
                                int64_t v16 = g36; // 0x40216a
                                int64_t v17 = function_4057e0("--format", (int64_t)g123, g7, (int64_t *)&g6, 4, v16); // 0x40217d
                                g106 = *(int32_t *)(4 * v17 + (int64_t)&g6);
                                v8 = v16;
                            }
                        }
                    }
                }
                // 0x402060
                v4 = v8;
                goto lab_0x402060_2;
            }
        }
    }
  lab_0x40236c:;
    uint32_t v18 = *(int32_t *)0x62335c; // 0x40236c
    int64_t v19; // 0x402010
    int64_t v20; // 0x402010
    int64_t v21; // 0x402010
    int64_t v22; // 0x402010
    int64_t v23; // 0x402010
    int64_t v24; // 0x402453
    int64_t v25; // 0x40245c
    int64_t v26; // 0x402010
    if (v18 == (int32_t)a1) {
        // 0x403197
        g80 = function_409160(8);
        g79 = function_409160(8);
        int64_t v27 = function_409160(16); // 0x4031be
        *(int32_t *)&g82 = 1;
        g78 = v27;
        *(int64_t *)g80 = 0;
        v22 = v1;
        goto lab_0x4024b4_2;
    } else {
        // 0x40237a
        if (g34 == 0) {
            // 0x402c31
            *(int32_t *)&g82 = 1;
            g80 = function_409160(8);
            g79 = function_409160(8);
            g78 = function_409160(16);
            v23 = 8 * (int64_t)*(int32_t *)&g45 + a2;
            int64_t v28 = *(int64_t *)v23; // 0x402c75
            char * str = (char *)v28; // 0x402c84
            if (*str != 0) {
                // 0x4032f6
                if (strcmp(str, "-") == 0) {
                    // 0x402c8f
                    *(int64_t *)g80 = 0;
                    goto lab_0x402c9d;
                } else {
                    // 0x40330b
                    *(int64_t *)g80 = v28;
                    goto lab_0x402c9d;
                }
            } else {
                // 0x402c8f
                *(int64_t *)g80 = 0;
                goto lab_0x402c9d;
            }
        } else {
            int64_t v29 = v1 - (int64_t)v18; // 0x402387
            int32_t v30 = v29;
            *(int32_t *)&g82 = v30;
            if (v30 < 0) {
                // 0x40305c
                function_4093b0(v1);
                // UNREACHABLE
            }
            int64_t v31 = 8 * v29 & 0x7fffffff8;
            int64_t v32 = function_409160(v31); // 0x4023bd
            int32_t v33 = *(int32_t *)&g82; // 0x4023c2
            g80 = v32;
            if (v33 < 0) {
                // 0x40305c
                function_4093b0(v31);
                // UNREACHABLE
            }
            int64_t v34 = function_409160(8 * (int64_t)v33); // 0x4023f6
            int32_t v35 = *(int32_t *)&g82; // 0x402400
            int64_t v36 = v35; // 0x402400
            g79 = v34;
            if (v35 < 0 || v35 < 0) {
                // 0x40305c
                function_4093b0(v36);
                // UNREACHABLE
            }
            int64_t v37 = function_409160(16 * v36); // 0x402430
            uint32_t v38 = *(int32_t *)&g82; // 0x402435
            g78 = v37;
            v22 = 8;
            if (v38 >= 1) {
                int64_t v39 = (int64_t)*(int32_t *)&g45; // 0x402446
                v24 = (int64_t)(v38 - 1) + 2 + v39;
                v25 = -8 * v39 + g80;
                v20 = &g46;
                while (true) {
                  lab_0x402490_2:
                    // 0x402490
                    v21 = v20;
                    v26 = 8 * v21 - 8;
                    int64_t v40 = *(int64_t *)(v26 + a2); // 0x402490
                    char * str2 = (char *)v40; // 0x402495
                    if (*str2 != 0) {
                        // 0x40246b
                        if (strcmp(str2, "-") == 0) {
                            goto lab_0x40249c;
                        } else {
                            // 0x40247c
                            *(int64_t *)(v26 + v25) = v40;
                            *(int32_t *)&g45 = (int32_t)v21;
                            int64_t v41 = v21 + 1; // 0x402487
                            v19 = v41;
                            v22 = v24;
                            if (v24 == v41) {
                                // break -> 0x4024b4
                                break;
                            }
                            // 0x402490
                            v20 = v19;
                            goto lab_0x402490_2;
                        }
                    } else {
                        goto lab_0x40249c;
                    }
                }
            }
            goto lab_0x4024b4_2;
        }
    }
  lab_0x404539_2:
    // 0x404539
    function_408350((int64_t)g123);
    error(1, (int32_t)"invalid gap width: %s" ^ (int32_t)"invalid gap width: %s", dcgettext(NULL, "invalid gap width: %s", 5));
    goto lab_0x40456d;
  lab_0x4028a1:;
    int128_t v42 = __asm_movdqa((int128_t)v3); // 0x4028a4
    int64_t v43; // 0x402010
    g75 = (int32_t)v43 + 1;
    int64_t v44; // 0x402010
    uint64_t v45; // 0x402010
    int64_t v46; // 0x40285f
    *(int64_t *)(v46 + 16) = v44 - v45;
    __asm_movups(*(int128_t *)v46, v42);
    int64_t v47; // 0x402010
    *(int64_t *)(v46 + 24) = v47 - v45;
    int32_t v48; // 0x402010
    *(int32_t *)(v46 + 40) = v48;
    int32_t v49; // 0x402010
    int32_t v50 = v49; // 0x4028d0
    int64_t v51 = g98; // 0x4028d0
    int64_t v52 = v44; // 0x4028d0
    int64_t v53; // 0x402010
    int64_t v54 = v53; // 0x4028d0
    int64_t v55; // 0x402010
    int64_t v56 = v55; // 0x4028d0
    int64_t v57; // 0x402010
    int64_t v58 = v57; // 0x4028d0
    goto lab_0x4028d7;
  lab_0x402e36:;
    // 0x402e36
    int64_t v162; // 0x402010
    int64_t v705 = v162;
    int64_t v161; // 0x402010
    int64_t v706 = v161;
    int64_t v160; // 0x402010
    int64_t v707 = v160;
    int64_t v176 = v707; // 0x402e39
    int64_t v177 = v706; // 0x402e39
    int64_t v178 = v705; // 0x402e39
    int64_t v159; // 0x402e46
    int64_t v179 = v159; // 0x402e39
    int64_t v180 = v707; // 0x402e39
    int64_t v181 = v706; // 0x402e39
    if (v159 >= v45) {
        // break -> 0x402ed0
        goto lab_0x402ed0;
    }
    goto lab_0x402e3f;
  lab_0x402e3f:;
    int64_t v708 = v179;
    int64_t v709 = v178;
    int64_t v710 = v177;
    int64_t v711 = v176;
    int64_t v157 = v711; // 0x402e3f
    int64_t v155 = v709; // 0x402e3f
    int64_t v153 = v710; // 0x402e3f
    int64_t v151 = v708; // 0x402e3f
    goto lab_0x402e42;
  lab_0x4030d4_2:;
    // 0x4030d4
    int64_t v74; // 0x402010
    function_404750(v74);
    int64_t v73; // 0x402010
    int64_t v652 = v73; // 0x4030d4
    goto lab_0x4030d9;
  lab_0x4027aa:;
    // 0x4027aa
    int64_t v79; // 0x402010
    v53 = v79;
    int64_t v78; // 0x402010
    v45 = v78;
    v3 = v45;
    int64_t v91 = v53 - v45; // 0x4027b2
    int64_t v92 = v91; // bp-80, 0x4027bc
    if (v91 > g88) {
        // 0x4027c3
        g88 = v91;
    }
    char v93 = *(char *)&g108; // 0x4027ca
    int32_t v94 = v93; // 0x4027d1
    int32_t v70; // 0x402010
    int32_t v95 = v70; // 0x4027d7
    int64_t v66; // 0x402010
    int64_t v96 = v66; // 0x4027d7
    int64_t v65; // 0x402010
    int64_t v97 = v65; // 0x4027d7
    int64_t v98; // 0x402010
    int64_t v99; // 0x402010
    int32_t v100; // 0x402010
    int64_t * v101; // 0x402010
    if (v93 != 0) {
        int32_t v102 = v70; // 0x402f63
        int64_t v103 = v66; // 0x402f63
        int64_t v104 = v65; // 0x402f63
        if (v65 < v45) {
            int64_t v105 = v94 % 256;
            int64_t v106 = v66;
            int64_t v107 = v70;
            int64_t v108 = g81;
            int64_t v109 = v65; // 0x402010
            int64_t v110 = v109 + 1; // 0x402f91
            int64_t v111; // 0x402010
            int64_t v112; // 0x402010
            int64_t v113; // 0x402010
            int64_t v114; // 0x402010
            int64_t v115; // 0x402010
            while (*(char *)v109 != 10) {
                // 0x402f88
                v109 = v110;
                v114 = 0;
                v113 = v108;
                v115 = v107;
                v111 = v106;
                v112 = v110;
                if (v110 >= v45) {
                    // break (via goto) -> 0x403000
                    goto lab_0x403000;
                }
                v110 = v109 + 1;
            }
            uint64_t v116 = *v101; // 0x402fa2
            int64_t v117 = v110; // 0x402fa9
            int64_t v118 = 0; // 0x402fa9
            int64_t v119; // 0x402010
            int64_t v120; // 0x402010
            int16_t * v121; // 0x402fbe
            unsigned char v122; // 0x402fd9
            int64_t v123; // 0x402fd0
            if (v116 > v110) {
                // 0x402faf
                v121 = *__ctype_b_loc();
                v119 = v110;
                v122 = *(char *)v119;
                v120 = v119;
                while ((*(char *)((int64_t)v121 + 1 + 2 * (int64_t)v122) & 32) == 0) {
                    // 0x402fd0
                    v123 = v119 + 1;
                    v120 = v116;
                    if (v123 == v116) {
                        // break -> 0x402fe3
                        break;
                    }
                    v119 = v123;
                    v122 = *(char *)v119;
                    v120 = v119;
                }
                // 0x402fe3
                v117 = v120;
                v118 = v117 - v110;
            }
            int64_t v124 = v108 + 1; // 0x402f9e
            int64_t v125 = v118;
            int64_t v126 = v117;
            v114 = v105;
            v113 = v124;
            v115 = v125;
            v111 = v110;
            v112 = v126;
            while (v126 < v45) {
                // 0x402f8d
                v106 = v110;
                v107 = v125;
                v108 = v124;
                int64_t v127 = v105;
                v109 = v126;
                v110 = v109 + 1;
                while (*(char *)v109 != 10) {
                    // 0x402f88
                    v109 = v110;
                    v114 = v127;
                    v113 = v108;
                    v115 = v107;
                    v111 = v106;
                    v112 = v110;
                    if (v110 >= v45) {
                        // break (via goto) -> 0x403000
                        goto lab_0x403000;
                    }
                    v110 = v109 + 1;
                }
                // 0x402f99
                v116 = *v101;
                v117 = v110;
                v118 = 0;
                if (v116 > v110) {
                    // 0x402faf
                    v121 = *__ctype_b_loc();
                    v119 = v110;
                    v122 = *(char *)v119;
                    v120 = v119;
                    while ((*(char *)((int64_t)v121 + 1 + 2 * (int64_t)v122) & 32) == 0) {
                        // 0x402fd0
                        v123 = v119 + 1;
                        v120 = v116;
                        if (v123 == v116) {
                            // break -> 0x402fe3
                            break;
                        }
                        v119 = v123;
                        v122 = *(char *)v119;
                        v120 = v119;
                    }
                    // 0x402fe3
                    v117 = v120;
                    v118 = v117 - v110;
                }
                // 0x402fe9
                v124 = v108 + 1;
                v125 = v118;
                v126 = v117;
                v114 = v105;
                v113 = v124;
                v115 = v125;
                v111 = v110;
                v112 = v126;
            }
          lab_0x403000:;
            int64_t v128 = v112;
            int64_t v129 = v111;
            int32_t v130 = v115; // 0x403003
            v102 = v130;
            v103 = v129;
            v104 = v128;
            if ((char)v114 != 0) {
                // 0x403015
                g81 = v113;
                v102 = v130;
                v103 = v129;
                v104 = v128;
            }
        }
        // 0x40301c
        v95 = v102;
        v96 = v103;
        v97 = v104;
        v100 = v102;
        v98 = v103;
        v99 = v104;
        if (v104 > v45) {
            goto lab_0x403028;
        } else {
            goto lab_0x4027dd;
        }
    } else {
        goto lab_0x4027dd;
    }
  lab_0x4028d7:;
    int32_t v59 = v50; // 0x4028d7
    int64_t v60 = v51; // 0x4028d7
    int64_t v61 = v54; // 0x4028d7
    int64_t v62 = v52; // 0x4028d7
    int64_t v63 = v56; // 0x4028d7
    int64_t v64 = v58; // 0x4028d7
    goto lab_0x4028da;
  lab_0x402d62:;
    // 0x402d62
    int64_t v84; // 0x402010
    int64_t v87 = v84;
    int64_t v88 = v87 + 1; // 0x402d62
    v78 = v87;
    v79 = v88;
    int64_t v76; // 0x402010
    int64_t v75; // 0x402010
    while (v88 != v47) {
        unsigned char v89 = *(char *)v88; // 0x402d50
        v75 = v87;
        v76 = v88;
        int64_t v90 = v88; // 0x402d5c
        if (*(char *)((int64_t)v89 + (int64_t)&g89) == 0) {
            goto lab_0x4027a1;
        }
        v88 = v90 + 1;
        v78 = v87;
        v79 = v88;
    }
    goto lab_0x4027aa;
  lab_0x402df7:
    // 0x402df7
    v50 = v70;
    int64_t v80; // 0x402010
    v51 = v80;
    int64_t v67; // 0x402010
    v52 = v67;
    int64_t v81; // 0x402010
    v54 = v81 + 1;
    v56 = v66;
    v58 = v65;
    goto lab_0x4028d7;
  lab_0x4027dd:;
    int64_t v131 = v97;
    int64_t v132 = v96;
    v49 = v95;
    if (g102 == 0) {
        goto lab_0x402807;
    } else {
        int64_t v133 = function_404f00(&v3, g85, g86); // 0x4027fa
        v100 = v49;
        v98 = v132;
        v99 = v131;
        if ((char)v133 != 0) {
            goto lab_0x403028;
        } else {
            goto lab_0x402807;
        }
    }
  lab_0x403028:
    // 0x403028
    v50 = v100;
    v51 = g98;
    v52 = v67;
    v54 = v53;
    v56 = v98;
    v58 = v99;
    goto lab_0x4028d7;
  lab_0x402807:
    // 0x402807
    if (g103 == 0) {
        goto lab_0x402831;
    } else {
        int64_t v134 = function_404f00(&v3, g83, g84); // 0x402824
        v100 = v49;
        v98 = v132;
        v99 = v131;
        if ((char)v134 == 0) {
            goto lab_0x403028;
        } else {
            goto lab_0x402831;
        }
    }
  lab_0x402831:;
    int32_t v135 = g75; // 0x402831
    int64_t v136 = g77; // 0x40283f
    int32_t v137 = v94; // 0x402849
    int32_t v138 = v135; // 0x402849
    int64_t v139 = v136; // 0x402849
    int64_t v140; // 0x402010
    int64_t v141; // 0x402010
    int64_t v142; // 0x402010
    if (v135 == g76) {
        uint64_t v143 = (int64_t)g76; // 0x402838
        if (v136 == 0) {
            // 0x403038
            v141 = 2;
            v142 = 96;
            if (v135 == 0) {
                goto lab_0x402f2f;
            } else {
                uint128_t v144 = 48 * (int128_t)v143; // 0x403045
                if ((int64_t)v144 < 0) {
                    // 0x40305c
                    function_4093b0(0);
                    // UNREACHABLE
                }
                // 0x403053
                v140 = v143;
                if (v144 % 0x3f0000000000000001 != 0) {
                    // 0x40305c
                    function_4093b0(0);
                    // UNREACHABLE
                }
                goto lab_0x402f27;
            }
        } else {
            int64_t v145 = v136; // 0x402f16
            if (v135 <= 0xffffffff) {
                // 0x40305c
                function_4093b0(v145);
                // UNREACHABLE
            }
            // 0x402f1c
            v140 = v143 + 1 + v143 / 2;
            goto lab_0x402f27;
        }
    } else {
        goto lab_0x40284f;
    }
  lab_0x40284f:;
    int32_t v146 = v137;
    int64_t v147 = v138;
    v46 = 48 * v147 + v139;
    int64_t v148; // 0x402010
    int64_t v149; // 0x402010
    if (*(char *)&g109 != 0) {
        // 0x402e00
        if (v131 < v45) {
            while (true) {
              lab_0x402e42:;
                int64_t v150 = v151;
                int64_t v152 = v153;
                int64_t v154 = v155;
                int64_t v156 = v157;
                char v158 = *(char *)v150; // 0x402e42
                v159 = v150 + 1;
                v160 = v156;
                v161 = v152;
                v162 = v154;
                if (v158 != 10) {
                    goto lab_0x402e36;
                } else {
                    int64_t v163 = v152 + 1; // 0x402e51
                    uint64_t v164 = *v101; // 0x402e55
                    int64_t v165; // 0x402853
                    v160 = v165;
                    v161 = v163;
                    v162 = v159;
                    if (v164 > v159) {
                        int16_t ** v166 = __ctype_b_loc(); // 0x402e83
                        int16_t * v167 = *v166; // 0x402e92
                        int64_t v168 = (int64_t)v167 + 1; // 0x402ebd
                        int64_t v169 = v159; // 0x402ea9
                        int64_t v170 = v169;
                        unsigned char v171 = *(char *)v170; // 0x402eb9
                        char v172 = *(char *)(v168 + 2 * (int64_t)v171); // 0x402ebd
                        int64_t v173 = v170; // 0x402ec2
                        while ((v172 & 32) == 0) {
                            int64_t v174 = v170 + 1; // 0x402eb0
                            v169 = v174;
                            v173 = v164;
                            if (v174 == v164) {
                                // break -> 0x402ec4
                                break;
                            }
                            v170 = v169;
                            v171 = *(char *)v170;
                            v172 = *(char *)(v168 + 2 * (int64_t)v171);
                            v173 = v170;
                        }
                        int64_t v175 = v173;
                        v176 = v165;
                        v177 = v163;
                        v178 = v159;
                        v179 = v175;
                        v180 = v165;
                        v181 = v163;
                        if (v175 >= v45) {
                            // break -> 0x402ed0
                            break;
                        }
                        goto lab_0x402e3f;
                    } else {
                        goto lab_0x402e36;
                    }
                }
            }
          lab_0x402ed0:;
            int64_t v182 = v180;
            if ((char)v182 != 0) {
                int64_t v183 = v181;
                g81 = v183;
            }
        }
        // 0x402ef0
        *(int64_t *)(v46 + 32) = g81;
        v148 = v132;
        v149 = v131;
        goto lab_0x402891;
    } else {
        // 0x40286b
        if ((char)v146 == 0) {
            goto lab_0x4028a1;
        } else {
            // 0x402872
            *(int64_t *)(v46 + 32) = v132 - v45;
            int64_t v184 = v49; // 0x40287c
            v148 = v132;
            v149 = v131;
            if (g87 < v184) {
                // 0x40288a
                g87 = v184;
                v148 = v132;
                v149 = v131;
            }
            goto lab_0x402891;
        }
    }
  lab_0x402f2f:
    // 0x402f2f
    g76 = v141;
    int64_t v185 = function_4091c0(v136, v142); // 0x402f36
    g77 = v185;
    v137 = (int32_t)*(char *)&g108;
    v138 = g75;
    v139 = v185;
    goto lab_0x40284f;
  lab_0x402f27:
    // 0x402f27
    v141 = v140;
    v142 = 48 * v140;
    goto lab_0x402f2f;
  lab_0x402891:
    // 0x402891
    v57 = v149;
    v55 = v148;
    v43 = v147;
    v44 = v67;
    if (v55 == v67) {
        // 0x402896
        v43 = v147;
        v44 = v67;
        if (v67 < v47 && (char)v146 != 0) {
            int16_t ** v186 = __ctype_b_loc(); // 0x402d83
            int64_t v187 = 0x100000000000000 * v147 >> 56; // 0x402d88
            int64_t v188 = (int64_t)*v186 + 1; // 0x402db2
            int64_t v189 = v67;
            while ((*(char *)(2 * (int64_t)*(char *)v189 + v188) & 32) == 0) {
                int64_t v190 = v189 + 1; // 0x402da0
                v43 = v187;
                v44 = v47;
                if (v190 == v47) {
                    goto lab_0x4028a1;
                }
                v189 = v190;
            }
            // 0x402db9
            v43 = v187;
            v44 = v189;
            int64_t v191 = v189; // 0x402dbc
            if (v189 < v47) {
                int64_t v192 = v191 + 1; // 0x402dc8
                v43 = v187;
                v44 = v47;
                while (v192 != v47) {
                    // 0x402dd5
                    v43 = v187;
                    v44 = v192;
                    v191 = v192;
                    if ((*(char *)(2 * (int64_t)*(char *)v192 + v188) & 32) == 0) {
                        // break -> 0x4028a1
                        break;
                    }
                    v192 = v191 + 1;
                    v43 = v187;
                    v44 = v47;
                }
            }
        }
    }
    goto lab_0x4028a1;
  lab_0x40271c:;
    // 0x40271c
    int64_t v193; // 0x402010
    int64_t v194 = v193;
    int16_t * v195 = *__ctype_b_loc(); // 0x402726
    int64_t v196 = v194 - 1; // 0x402739
    unsigned char v197 = *(char *)v196; // 0x402739
    char v198 = *(char *)((int64_t)v195 + 1 + 2 * (int64_t)v197); // 0x40273d
    int64_t v199 = v194; // 0x402742
    int64_t v200 = v194; // 0x402742
    int64_t v201; // 0x402010
    while ((v198 & 32) != 0) {
        int64_t v202 = v196; // 0x402737
        v199 = v194;
        v200 = v196;
        if (v201 >= v196) {
            // break -> 0x402744
            break;
        }
        v196 = v202 - 1;
        v197 = *(char *)v196;
        v198 = *(char *)((int64_t)v195 + 1 + 2 * (int64_t)v197);
        v199 = v194;
        v200 = v202;
    }
    goto lab_0x402744;
  lab_0x402744:
    // 0x402744
    v47 = v200;
    int64_t v203 = v199;
    int32_t v204; // 0x402010
    v59 = v204;
    v60 = g98;
    v61 = v201;
    v62 = v201;
    int64_t v205; // 0x402010
    v63 = v205;
    int64_t v206; // 0x402010
    v64 = v206;
    while (true) {
      lab_0x4028da:
        // 0x4028da
        v65 = v64;
        v66 = v63;
        v67 = v62;
        int64_t v68 = v61;
        int64_t v69 = v60;
        v70 = v59;
        if (v69 != 0) {
            int64_t v71 = v47 - v68; // 0x402766
            int64_t v72 = function_418980(&g99, v68, v71, 0, v71, &g92); // 0x402771
            v73 = v47;
            v74 = &g99;
            switch (v72) {
                case -2: {
                    goto lab_0x4030d4_2;
                }
                case -1: {
                    goto lab_0x402919;
                }
                default: {
                    // 0x40278a
                    v75 = *(int64_t *)g93 + v68;
                    v76 = *(int64_t *)g94 + v68;
                  lab_0x4027a1:;
                    int64_t v77 = v75;
                    v78 = v77;
                    v79 = v76;
                    if (v77 == v76) {
                        // 0x402df0
                        v80 = g98;
                        v81 = v77;
                        goto lab_0x402df7;
                    } else {
                        goto lab_0x4027aa;
                    }
                }
            }
        } else {
            if (v47 <= v68) {
                if (v47 == v68) {
                    // break -> 0x402919
                    break;
                }
                // 0x40307e
                v50 = v70;
                v51 = v69;
                v52 = v67;
                v54 = v68 + 1;
                v56 = v66;
                v58 = v65;
                goto lab_0x4028d7;
            } else {
                unsigned char v82 = *(char *)v68; // 0x4028ec
                int64_t v83 = v68; // 0x4028f6
                v84 = v68;
                if (*(char *)((int64_t)v82 + (int64_t)&g89) == 0) {
                    int64_t v85 = v83 + 1; // 0x402910
                    if (v85 == v47) {
                        // break (via goto) -> 0x402919
                        goto lab_0x402919;
                    }
                    unsigned char v86 = *(char *)v85; // 0x402900
                    v83 = v85;
                    while (*(char *)((int64_t)v86 + (int64_t)&g89) == 0) {
                        // 0x402910
                        v85 = v83 + 1;
                        if (v85 == v47) {
                            // break (via goto) -> 0x402919
                            goto lab_0x402919;
                        }
                        // 0x402900
                        v86 = *(char *)v85;
                        v83 = v85;
                    }
                    // 0x402d28
                    v84 = v85;
                    v80 = v69;
                    v81 = v85;
                    if (v85 >= v47) {
                        goto lab_0x402df7;
                    } else {
                        goto lab_0x402d62;
                    }
                } else {
                    goto lab_0x402d62;
                }
            }
        }
    }
  lab_0x402919:;
    uint64_t v207 = *v101; // 0x402923
    int32_t v208 = v70; // 0x40292f
    int64_t v209 = v207; // 0x40292f
    int64_t v210 = v203; // 0x40292f
    int64_t v211 = v47; // 0x40292f
    int64_t v212 = v66; // 0x40292f
    int64_t v213 = v65; // 0x40292f
    int64_t v214 = v47; // 0x40292f
    if (v207 <= v203) {
        // break -> 0x402935
        goto lab_0x402935;
    }
    goto lab_0x4026c0;
  lab_0x402710:;
    // 0x402710
    int64_t v219; // 0x402010
    v193 = v219;
    v199 = v219;
    v200 = v219;
    if (v201 >= v219) {
        goto lab_0x402744;
    } else {
        goto lab_0x40271c;
    }
  lab_0x40335d_3:;
    // 0x40335d
    char * v229; // 0x402010
    char * v230 = v229; // 0x403362
    int64_t v231; // 0x402010
    int64_t v232 = v231; // 0x403362
    int64_t * v233; // 0x402b63
    int64_t v234 = *v233; // 0x403362
    int64_t v235; // 0x402010
    int64_t v236 = v235; // 0x403362
    goto lab_0x403366;
  lab_0x402bec:;
    // 0x402bec
    int64_t v557; // 0x402010
    int64_t v552; // 0x402010
    int64_t v621 = v557 + v552;
    char * v555; // 0x402010
    char * v564 = v555; // 0x402bef
    char * v565 = v555; // 0x402bef
    int64_t v556; // 0x402010
    int64_t v566 = v556; // 0x402bef
    int64_t v567 = v621; // 0x402bef
    v229 = v555;
    v231 = v556;
    v235 = v621;
    uint64_t v245; // 0x402b7d
    if (v245 <= v621) {
        goto lab_0x40335d_3;
    }
    goto lab_0x402bf5;
  lab_0x402bf5:;
    int64_t v622 = (int64_t)v565;
    char * v548 = v564; // 0x402c03
    char * v549 = v565; // 0x402c03
    int64_t v550 = v566; // 0x402c03
    int64_t v551 = v567; // 0x402c03
    int64_t v241; // 0x402010
    int64_t v240; // 0x402010
    if (v567 > v566 + v622) {
        // 0x403cb4
        v240 = v622;
        v241 = *v233;
        goto lab_0x40337c;
    }
    goto lab_0x402c09;
  lab_0x40350f_2:;
    // 0x40350f
    int64_t v543; // 0x402b5c
    int64_t v544; // 0x402b63
    uint64_t v623 = v544 + v543; // 0x402b79
    int64_t v277; // 0x402010
    int64_t v624 = v277;
    char v625 = 0; // 0x403517
    int64_t v248; // 0x402010
    int64_t v355; // 0x402b97
    if (g31 != NULL) {
        int64_t v626 = v624; // 0x403520
        if (v355 < v624) {
            int64_t v627 = *(int64_t *)v248 + 1; // 0x403549
            int64_t v628 = v624 - 1; // 0x403545
            v626 = v624;
            while ((*(char *)(v627 + 2 * (int64_t)*(char *)v628) & 32) != 0) {
                // 0x403538
                v626 = v355;
                if (v355 == v628) {
                    // break -> 0x403550
                    break;
                }
                int64_t v629 = v628;
                v628 = v629 - 1;
                v626 = v629;
            }
        }
        // 0x403550
        v625 = v623 < v626;
    }
    // 0x40355c
    g62 = v625;
    int64_t v313 = v624; // 0x40355f
    uint64_t v320; // 0x402b9a
    if (v320 > v624) {
        int64_t v630 = *(int64_t *)v248 + 1; // 0x403585
        int64_t v631 = v624; // 0x40358a
        v313 = v624;
        if ((*(char *)(2 * (int64_t)*(char *)v624 + v630) & 32) != 0) {
            int64_t v632 = v631 + 1; // 0x403570
            while (v320 != v632) {
                char * v633 = (char *)v632;
                v631 = v632;
                if ((*(char *)(2 * (int64_t)*v633 + v630) & 32) == 0) {
                    // 0x403590
                    g63 = v633;
                    v313 = v632;
                    goto lab_0x403597;
                }
                v632 = v631 + 1;
            }
            // 0x403ca5
            g63 = (char *)v320;
            v313 = v320;
        }
    }
    goto lab_0x403597;
  lab_0x40371d_3:;
    // 0x40371d
    int64_t v344; // 0x402010
    int64_t v326 = v344; // 0x40371d
    int64_t v327 = (int64_t)g61; // 0x40371d
    int64_t v345; // 0x402010
    int64_t v328 = v345; // 0x40371d
    int64_t v346; // 0x402010
    int64_t v329 = v346; // 0x40371d
    goto lab_0x403724;
  lab_0x40365e:;
    // 0x40365e
    int64_t v340; // 0x402010
    int64_t v335; // 0x402010
    int64_t v634 = v340 + v335;
    int64_t v338; // 0x402010
    int64_t v348 = v338; // 0x403661
    int64_t v339; // 0x402010
    int64_t v349 = v339; // 0x403661
    int64_t v350 = v634; // 0x403661
    v344 = v338;
    v345 = v339;
    v346 = v634;
    if (v245 <= v634) {
        goto lab_0x40371d_3;
    }
    goto lab_0x403667;
  lab_0x403667:;
    int64_t v635 = v348;
    int64_t v330 = v635; // 0x40366e
    int64_t v331 = v349; // 0x40366e
    int64_t v332 = v350; // 0x40366e
    int64_t v333; // 0x402010
    int64_t v334; // 0x402010
    if (v350 >= v349 + v635) {
        // 0x403d17
        v333 = v635;
        v334 = (int64_t)g61;
        goto lab_0x403733;
    }
    goto lab_0x403674;
  lab_0x403887_3:;
    // 0x403887
    int64_t v602; // 0x402010
    uint64_t v636 = v602;
    int64_t v601; // 0x402010
    int64_t v637 = v601;
    int64_t v353 = v637; // 0x40388a
    int64_t v372; // 0x402010
    if (v637 > v636) {
        // 0x403890
        g62 = 0;
        g56 = v623 < v636 == (g31 != NULL);
        int64_t v638 = *(int64_t *)v248 + 1; // 0x4038d2
        int64_t v639 = v636; // 0x4038d7
        v372 = v637;
        if ((*(char *)(2 * (int64_t)*(char *)v636 + v638) & 32) != 0) {
            int64_t v640 = v639 + 1; // 0x4038c0
            int64_t v641 = v637; // 0x4038cc
            while (v640 != v637) {
                // 0x4038ce
                v639 = v640;
                v641 = v640;
                if ((*(char *)(2 * (int64_t)*(char *)v640 + v638) & 32) == 0) {
                    // break -> 0x4038de
                    break;
                }
                v640 = v639 + 1;
                v641 = v637;
            }
            // 0x4038de
            g57 = v641;
            v372 = v637;
        }
        goto lab_0x4038e5;
    } else {
        goto lab_0x403c03;
    }
  lab_0x403853:;
    // 0x403853
    int64_t v614; // 0x402010
    int64_t v604 = v614; // 0x403856
    int64_t v613; // 0x402010
    int64_t v605 = v613; // 0x403856
    int64_t v603; // 0x402010
    v601 = v603;
    v602 = v614;
    if (v603 <= v613) {
        goto lab_0x403887_3;
    }
    goto lab_0x403858;
  lab_0x40249c:
    // 0x40249c
    *(int64_t *)(v26 + v25) = 0;
    *(int32_t *)&g45 = (int32_t)v21;
    int64_t v642 = v21 + 1; // 0x4024ab
    v19 = v642;
    v22 = v642;
    if (v24 == v642) {
        // break -> 0x4024b4
        goto lab_0x4024b4_2;
    }
    // 0x402490
    v20 = v19;
    goto lab_0x402490_2;
  lab_0x4024b4_2:;
    int64_t v643 = v22;
    if (g106 == 0) {
        // 0x4024bd
        g106 = (int32_t)(g34 != 0) + 2;
    }
    // 0x4024d1
    if (g105 != 0) {
        int32_t ** v644 = __ctype_toupper_loc(); // 0x4024da
        int64_t v645 = 0;
        int32_t v646 = *(int32_t *)(4 * v645 + (int64_t)*v644); // 0x4024eb
        *(char *)(v645 + 0x623740) = (char)v646;
        int64_t v647 = v645 + 1; // 0x4024ff
        while (v645 != 255) {
            // 0x4024e8
            v645 = v647;
            v646 = *(int32_t *)(4 * v645 + (int64_t)*v644);
            *(char *)(v645 + 0x623740) = (char)v646;
            v647 = v645 + 1;
        }
    }
    char * v648 = g100; // 0x402501
    if (v648 == NULL) {
        // 0x40315e
        if (g34 == 0) {
            // 0x40318a
            g100 = (char *)&g18;
            // 0x40317b
            function_4049d0((int64_t *)&g100);
            goto lab_0x402525;
        } else {
            // 0x403167
            if (*(char *)&g108 != 0) {
                // 0x40318a
                g100 = (char *)&g18;
                // 0x40317b
                function_4049d0((int64_t *)&g100);
                goto lab_0x402525;
            } else {
                // 0x403170
                g100 = "[.?!][]\"')}]*\\($\\|\t\\|  \\)[ \t\n]*";
                // 0x40317b
                function_4049d0((int64_t *)&g100);
                goto lab_0x402525;
            }
        }
    } else {
        // 0x402511
        if (*v648 != 0) {
            // 0x40317b
            function_4049d0((int64_t *)&g100);
            goto lab_0x402525;
        } else {
            // 0x40251a
            g100 = NULL;
            goto lab_0x402525;
        }
    }
  lab_0x402c9d:
    // 0x402c9d
    *(int32_t *)&g45 = (int32_t)&g46;
    v22 = v1;
    int64_t v494; // 0x402010
    int64_t v497; // 0x402010
    int64_t v495; // 0x402010
    int64_t v496; // 0x402010
    int64_t v498; // 0x402010
    if (v1 > (int64_t)&g46) {
        int64_t v649 = function_4059b0(*(int64_t *)(v23 + 8), &g4, (int64_t)g48); // 0x402cc2
        if (v649 != 0) {
            // 0x402ce7
            *(int32_t *)&g45 = (int32_t)&g46;
            function_408350(*(int64_t *)(a2 + 0x100000000 * (int64_t)&g46 / 0x20000000));
            error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
          lab_0x402d17:
            // 0x402d17
            function_405120(1);
            // UNREACHABLE
        }
        int64_t v650 = *(int64_t *)(8 * (int64_t)*(int32_t *)&g45 + a2); // 0x40450b
        int64_t v651 = function_4081d0(0, 3, v650); // 0x40450f
        error(1, *__errno_location(), "%s", (char *)v651);
        v494 = &g127;
        v495 = v651;
        v496 = (int64_t)"%s";
        v497 = v1;
        v498 = 0;
        goto lab_0x404229;
    } else {
        goto lab_0x4024b4_2;
    }
  lab_0x402525:
    // 0x402525
    v652 = v643;
    int64_t v653; // 0x402010
    int64_t v654; // 0x402010
    int32_t v655; // 0x402010
    if (g98 == 0) {
        goto lab_0x4030d9;
    } else {
        // 0x402533
        function_4049d0(&g98);
        v654 = v643;
        v653 = v643;
        v655 = g104;
        if (g104 != 0) {
            goto lab_0x4030e9;
        } else {
            goto lab_0x40254d;
        }
    }
  lab_0x4030d9:;
    int64_t v656 = v652;
    v653 = v656;
    v655 = g104;
    if (g104 == 0) {
        // 0x4032b5
        if (g34 == 0) {
            // 0x404475
            __asm_rep_stosq_memset((char *)&g89, 0x101010101010101, 32);
            *(char *)&g91 = 0;
            *(int16_t *)&g90 = 0;
            v654 = v656;
        } else {
            int16_t ** v657 = __ctype_b_loc(); // 0x4032c2
            int64_t v658 = 0;
            uint16_t v659 = *(int16_t *)(2 * v658 + (int64_t)*v657); // 0x4032d3
            *(char *)(v658 + 0x623600) = (char)(v659 / 1024) % 2;
            v654 = v656;
            int64_t v660 = v658 + 1; // 0x4032ef
            while (v658 != 255) {
                // 0x4032d0
                v658 = v660;
                v659 = *(int16_t *)(2 * v658 + (int64_t)*v657);
                *(char *)(v658 + 0x623600) = (char)(v659 / 1024) % 2;
                v654 = v656;
                v660 = v658 + 1;
            }
        }
        goto lab_0x40254d;
    } else {
        goto lab_0x4030e9;
    }
  lab_0x404229:;
    int64_t v661 = v496 - v495; // 0x40422c
    int64_t v662 = g56 == 0 ? 0 : -g68;
    function_404a70(v494 - v661 - v498 + v662);
    if (g56 != 0) {
        // 0x4043c7
        fputs_unlocked((char *)g31, g48);
    }
    // 0x40425c
    function_404ac0(g57, g58, v661, v495);
    int64_t v491; // 0x402010
    int64_t v510 = v491; // 0x40426a
    int32_t v492; // 0x402010
    int32_t v511 = v492; // 0x40426a
    int64_t v493; // 0x402010
    int64_t v512 = v493; // 0x40426a
    int64_t v513 = v495; // 0x40426a
    int64_t v514 = v661; // 0x40426a
    int64_t v515 = v497; // 0x40426a
    goto lab_0x40426f;
  lab_0x4030e9:
    // 0x4030e9
    function_404f70((int64_t)v655, (int64_t)&v3, (int64_t)&v92);
    __asm_rep_stosq_memset((char *)&g89, 0x101010101010101, 32);
    uint64_t v663 = v92; // 0x403117
    int64_t v664 = v3; // 0x403122
    if (v3 < v663) {
        unsigned char v665 = *(char *)v664; // 0x403128
        int64_t v666 = v664 + 1; // 0x40312b
        *(char *)((int64_t)v665 + (int64_t)&g89) = 0;
        v664 = v666;
        while (v666 != v663) {
            // 0x403128
            v665 = *(char *)v664;
            v666 = v664 + 1;
            *(char *)((int64_t)v665 + (int64_t)&g89) = 0;
            v664 = v666;
        }
    }
    // 0x40313b
    if (g34 == 0) {
        // 0x403144
        *(char *)&g91 = 0;
        *(int16_t *)&g90 = 0;
    }
    // 0x403154
    free((int64_t *)v3);
    v654 = v653;
    goto lab_0x40254d;
  lab_0x40254d:
    // 0x40254d
    if (g102 != 0) {
        // 0x402559
        function_405030((int64_t)g102, &g85);
        if (g86 == 0) {
            // 0x40256d
            g102 = 0;
        }
    }
    // 0x402578
    if (g103 != 0) {
        // 0x402584
        function_405030((int64_t)g103, &g83);
        if (g84 == 0) {
            // 0x402598
            g103 = 0;
        }
    }
    // 0x4025a3
    g75 = 0;
    g81 = 0;
    g88 = 0;
    g87 = 0;
    int32_t v667 = 0; // 0x4025df
    int64_t v668 = v654; // 0x4025df
    int64_t v227; // 0x402010
    int64_t v225; // 0x402010
    int64_t v228; // 0x402010
    int64_t v226; // 0x402010
    int32_t v223; // 0x402010
    int64_t v221; // 0x402010
    int64_t v224; // 0x402010
    if (*(int32_t *)&g82 >= 1) {
        while (true) {
            // 0x4025e5
            v48 = v667;
            int64_t v669 = v48; // 0x4025e5
            int64_t v670 = 8 * v669; // 0x4025f1
            int64_t v671 = 16 * v669; // 0x40260c
            int64_t v672 = g78 + v671; // 0x402610
            function_404f70(*(int64_t *)(g80 + v670), v672, v672 + 8);
            int64_t v222 = g78 + v671; // 0x402620
            int64_t v673 = *(int64_t *)v222; // 0x402636
            v101 = (int64_t *)(v222 + 8);
            int64_t v674 = *v101;
            int32_t v675 = 0; // 0x402639
            int64_t v676 = v668; // 0x402639
            int64_t v677 = v673; // 0x402639
            if (*(char *)&g108 != 0) {
                int64_t v678 = v673; // 0x402649
                if (v673 >= v674) {
                  lab_0x4043ea:
                    // 0x4043ea
                    v675 = v678 - v673;
                    v676 = v678;
                    v677 = v678;
                } else {
                    int64_t v679 = (int64_t)*__ctype_b_loc() + 1; // 0x402671
                    int64_t v680 = v673;
                    while ((*(char *)(2 * (int64_t)*(char *)v680 + v679) & 32) == 0) {
                        int64_t v681 = v680 + 1; // 0x402660
                        v678 = v674;
                        if (v681 == v674) {
                            goto lab_0x4043ea;
                        }
                        v680 = v681;
                    }
                    int32_t v682 = v680 - v673; // 0x40267e
                    int64_t v683 = v680; // 0x402686
                    v675 = v682;
                    v676 = v674;
                    v677 = v680;
                    if (v674 > v680) {
                        int64_t v684 = v683 + 1; // 0x402690
                        v675 = v682;
                        v676 = v674;
                        v677 = v674;
                        while (v684 != v674) {
                            // 0x402690
                            v683 = v684;
                            v675 = v682;
                            v676 = v674;
                            v677 = v684;
                            if ((*(char *)(2 * (int64_t)*(char *)v684 + v679) & 32) == 0) {
                                // break -> 0x4026a4
                                break;
                            }
                            v684 = v683 + 1;
                            v675 = v682;
                            v676 = v674;
                            v677 = v674;
                        }
                    }
                }
            }
            // 0x4026a4
            v208 = v675;
            v209 = v674;
            v210 = v673;
            v211 = v676;
            v212 = v673;
            v213 = v677;
            v214 = v676;
            if (v674 > v673) {
                while (true) {
                  lab_0x4026c0:
                    // 0x4026c0
                    v206 = v213;
                    v205 = v212;
                    v201 = v210;
                    int64_t v215 = v209;
                    v204 = v208;
                    v193 = v215;
                    if (g100 == NULL) {
                        goto lab_0x40271c;
                    } else {
                        int64_t v216 = v211;
                        int64_t v217 = v215 - v201; // 0x4026ca
                        int64_t v218 = function_418980(&g101, v201, v217, 0, v217, &g95); // 0x4026e0
                        v219 = v215;
                        v73 = v216;
                        v74 = &g101;
                        switch (v218) {
                            case -1: {
                                goto lab_0x402710;
                            }
                            case 0: {
                                int64_t v220 = function_408350((int64_t)g100); // 0x4044c1
                                char * format2 = dcgettext(NULL, "error: regular expression has a match of length zero: %s", 5); // 0x4044d5
                                error(1, (int32_t)"error: regular expression has a match of length zero: %s" ^ (int32_t)"error: regular expression has a match of length zero: %s", format2);
                                v221 = v222;
                                v223 = v204;
                                v224 = v215;
                                v225 = v220;
                                v226 = (int64_t)format2;
                                v227 = v216;
                                v228 = 1;
                                goto lab_0x4044ee;
                            }
                            case -2: {
                                goto lab_0x4030d4_2;
                            }
                            default: {
                                // 0x4026fe
                                v219 = *(int64_t *)g96 + v201;
                                goto lab_0x402710;
                            }
                        }
                    }
                }
            }
          lab_0x402935:;
            uint64_t v685 = v669 + 1; // 0x402948
            int64_t v686 = g81 + 1; // 0x40294e
            g81 = v686;
            *(int64_t *)(g79 + v670) = v686;
            v667 = v685;
            v668 = v214;
            if (v685 >= (int64_t)*(int32_t *)&g82) {
                // break -> 0x40296e
                break;
            }
        }
        int32_t nmemb = g75; // 0x40296e
        if (nmemb != 0) {
            // 0x40331a
            qsort((int64_t *)g77, nmemb, 48, (int32_t (*)(int64_t *, int64_t *))0x404ed0);
        }
    }
    // 0x40297e
    bool v580; // 0x402010
    if (*(char *)&g109 != 0) {
        // 0x4031e7
        g87 = 0;
        int64_t v687 = 0; // 0x40327b
        if (*(int32_t *)&g82 != 0) {
            int64_t v688 = 0; // 0x40326d
            int64_t v689 = 8 * v688; // 0x403201
            int64_t v690 = g79 + v689;
            int64_t v691 = *(int64_t *)v690 + 1; // 0x40320d
            int64_t v692 = v691; // 0x403214
            if (v688 != 0) {
                // 0x403216
                v692 = v691 - *(int64_t *)(v690 - 8);
            }
            int32_t v693 = __sprintf_chk((char *)&v3, 1, 21, "%ld", (int32_t)v692); // 0x403231
            int64_t v694 = *(int64_t *)(g80 + v689); // 0x40323f
            int64_t v695 = v693; // 0x403243
            int64_t v696 = v694; // 0x403249
            int64_t v697 = v695; // 0x403249
            int64_t v698; // 0x402010
            int64_t v699; // 0x402010
            int64_t v700; // 0x402010
            int64_t v701; // 0x402010
            int64_t v702; // 0x403250
            if (v694 != 0) {
                v699 = -1;
                v700 = 0;
                while (v699 != 0) {
                    // 0x40324b
                    v701 = v696;
                    v702 = v699 - 1;
                    v698 = v702;
                    v696 = v701 + (v580 ? -1 : 1);
                    v700 = v702;
                    if (*(char *)v701 == 0) {
                        // break -> 
                        break;
                    }
                    v699 = v698;
                    v700 = 0;
                }
                v697 = v695 - 2 - v700;
            }
            int64_t v703 = v697;
            int64_t v704 = g87; // 0x403264
            if (g87 < v703) {
                // 0x403266
                g87 = v703;
                v704 = v703;
            }
            // 0x40326d
            v688++;
            v687 = v704;
            while (v688 < (int64_t)*(int32_t *)&g82) {
                // 0x4031fa
                v689 = 8 * v688;
                v690 = g79 + v689;
                v691 = *(int64_t *)v690 + 1;
                v692 = v691;
                if (v688 != 0) {
                    // 0x403216
                    v692 = v691 - *(int64_t *)(v690 - 8);
                }
                // 0x40321b
                v693 = __sprintf_chk((char *)&v3, 1, 21, "%ld", (int32_t)v692);
                v694 = *(int64_t *)(g80 + v689);
                v695 = v693;
                v696 = v694;
                v697 = v695;
                if (v694 != 0) {
                    v699 = -1;
                    v700 = 0;
                    while (v699 != 0) {
                        // 0x40324b
                        v701 = v696;
                        v702 = v699 - 1;
                        v698 = v702;
                        v696 = v701 + (v580 ? -1 : 1);
                        v700 = v702;
                        if (*(char *)v701 == 0) {
                            // break -> 
                            break;
                        }
                        v699 = v698;
                        v700 = 0;
                    }
                    v697 = v695 - 2 - v700;
                }
                // 0x40325d
                v703 = v697;
                v704 = g87;
                if (g87 < v703) {
                    // 0x403266
                    g87 = v703;
                    v704 = v703;
                }
                // 0x40326d
                v688++;
                v687 = v704;
            }
        }
        // 0x403281
        g87 = v687 + 1;
        g54 = (char *)function_409160(v687 + 2);
        if (*(char *)&g109 != 0) {
            goto lab_0x402994;
        } else {
            goto lab_0x40298b;
        }
    } else {
        goto lab_0x40298b;
    }
  lab_0x40426f:;
    // 0x40426f
    int64_t v508; // 0x402010
    int64_t v506; // 0x402010
    int64_t v507; // 0x402010
    int32_t v504; // 0x402010
    int64_t v503; // 0x402010
    int64_t v505; // 0x402010
    if ((*(char *)&g108 | *(char *)&g109) == 0) {
        goto lab_0x403b59;
    } else {
        // 0x403e78
        v503 = v510;
        v504 = v511;
        v505 = v512;
        v506 = v513;
        v507 = v514;
        v508 = v515;
        goto lab_0x403e78_2;
    }
  lab_0x40298b:
    // 0x40298b
    if (*(char *)&g108 == 0) {
        goto lab_0x4029b2;
    } else {
        goto lab_0x402994;
    }
  lab_0x403b59:;
    // 0x403b59
    int64_t v440; // 0x402010
    int64_t v530 = v440;
    int64_t v439; // 0x402010
    int64_t v531 = v439;
    int32_t v437; // 0x402010
    int32_t v532 = v437;
    int64_t v436; // 0x402010
    int64_t v533 = v436;
    int64_t v534 = (int64_t)g48; // 0x403b59
    int64_t * v535 = (int64_t *)(v534 + 40); // 0x403b60
    uint64_t v536 = *v535; // 0x403b60
    int64_t v452; // 0x402010
    int32_t v450; // 0x402010
    int64_t v449; // 0x402010
    int64_t v451; // 0x402010
    if (v536 >= *(int64_t *)(v534 + 48)) {
        // 0x404299
        __overflow(g48, 10);
        v449 = v533;
        v450 = v532;
        v451 = v531;
        v452 = v530;
    } else {
        // 0x403b6e
        *v535 = v536 + 1;
        *(char *)v536 = 10;
        v449 = v533;
        v450 = v532;
        v451 = v531;
        v452 = v530;
    }
    goto lab_0x403b79;
  lab_0x402994:
    // 0x402994
    if (g107 == 0) {
        // 0x40299d
        g33 = (int64_t)g33 - (g87 + g32);
    }
    goto lab_0x4029b2;
  lab_0x4029b2:;
    int128_t v572 = g33; // 0x4029ba
    if ((int64_t)g33 < 0) {
        // 0x4029bc
        g33 = 0;
        v572 = 0;
    }
    int64_t v573 = (v572 & 0xfffffffffffffffe) / 2; // 0x4029dc
    int64_t v574 = v573 - g32; // 0x4029e2
    g71 = v573;
    g70 = v574;
    g69 = v573;
    int64_t v575; // 0x402010
    if (g31 == NULL || (char)(int64_t)g31 == 0) {
        // 0x404103
        *(int64_t *)&g31 = 0;
        v575 = g68;
    } else {
        // 0x402a13
        while (true) {
            int64_t v576; // 0x402010
            int64_t v577 = v576;
            int64_t v578; // 0x402010
            int64_t v579 = v578 - 1; // 0x402a19
            v576 = v577 + (v580 ? -1 : 1);
            int64_t v581 = v579; // 0x402a19
            if (*(char *)v577 == 0) {
                // break -> 
                break;
            }
            v578 = v579;
            v581 = 0;
        }
        int64_t v582 = -2; // 0x402a21
        g68 = v582;
        v575 = v582;
    }
    int64_t v583 = 2 * v575; // 0x402a33
    if (g34 == 0) {
        // 0x4042a8
        g69 = -1 - v583 + v573;
    } else {
        int64_t v584 = v574 - v583; // 0x402a43
        g69 = v573 - v583;
        g70 = v584 > 0 ? v584 : 0;
    }
    int16_t ** v585 = __ctype_b_loc(); // 0x402a60
    int64_t v586 = 0;
    uint16_t v587 = *(int16_t *)(2 * v586 + (int64_t)*v585); // 0x402a70
    *(char *)(v586 + 0x623460) = (char)(v587 / 0x2000) % 2;
    int64_t v588 = v586 + 1; // 0x402a8c
    while (v586 != 255) {
        // 0x402a70
        v586 = v588;
        v587 = *(int16_t *)(2 * v586 + (int64_t)*v585);
        *(char *)(v586 + 0x623460) = (char)(v587 / 0x2000) % 2;
        v588 = v586 + 1;
    }
    int32_t v589 = g106; // 0x402a8e
    *(char *)&g73 = 1;
    if (v589 == 2) {
        // 0x40434f
        *(char *)&g74 = 1;
    } else {
        // 0x402aa4
        if (v589 == 3) {
            int64_t v590 = (int64_t)"$%&#_{}\\" + 1; // 0x402ab3
            *(char *)(36 + (int64_t)&g72) = 1;
            unsigned char v591 = *(char *)v590; // 0x402abe
            int64_t v592 = v590; // 0x402ac3
            while (v591 != 0) {
                // 0x402ab3
                v590 = v592 + 1;
                *(char *)((int64_t)v591 + (int64_t)&g72) = 1;
                v591 = *(char *)v590;
                v592 = v590;
            }
            int64_t v593 = 128;
            char v594 = *(char *)(v593 + (int64_t)&g9); // 0x402ad0
            *(char *)(v593 + (int64_t)&g72) = (char)(v594 != 0);
            int64_t v595 = v593 + 1; // 0x402ae8
            while (v593 != 255) {
                // 0x402ad0
                v593 = v595;
                v594 = *(char *)(v593 + (int64_t)&g9);
                *(char *)(v593 + (int64_t)&g72) = (char)(v594 != 0);
                v595 = v593 + 1;
            }
        }
    }
    // 0x402aea
    g66 = 0;
    g67 = 0;
    g65 = 0;
    g57 = 0;
    g58 = 0;
    g56 = 0;
    int64_t v538 = g77; // 0x402b46
    int32_t v539 = 0; // 0x402b46
    int64_t v540 = (int64_t)v585; // 0x402b46
    int64_t v541 = 1; // 0x402b46
    if (g75 < 1) {
        // 0x403b97
        return 0;
    }
    goto lab_0x402b50;
  lab_0x403b79:;
    uint64_t v537 = (int64_t)v450 + 1; // 0x403b79
    v538 = v449 + 48;
    v539 = v537;
    v540 = v451;
    v541 = v452;
    if (v537 >= (int64_t)g75) {
        // 0x403b97
        return 0;
    }
    goto lab_0x402b50;
  lab_0x403e78_2:;
    int64_t v568 = v508;
    int64_t v569 = v505;
    int32_t v570 = v504;
    int64_t v571 = v503;
    v436 = v571;
    v437 = v570;
    v439 = v569;
    v440 = v568;
    if (g107 != 0) {
        // 0x403e85
        function_404a70(g32);
        function_404ac0((int64_t)g54, g55, v507, v506);
        v436 = v571;
        v437 = v570;
        v439 = v569;
        v440 = v568;
    }
    goto lab_0x403b59;
  lab_0x402b50:;
    int64_t v261 = v541;
    v248 = v540;
    int32_t v438 = v539;
    int64_t v376 = v538;
    int64_t v542 = g69; // 0x402b55
    v543 = *(int64_t *)v376;
    v233 = (int64_t *)(v376 + 16);
    v544 = *v233;
    int32_t * v398 = (int32_t *)(v376 + 40); // 0x402b6b
    int64_t v545 = *(int64_t *)(v376 + 8) + v543; // 0x402b6f
    char * v546 = (char *)v543; // 0x402b72
    g60 = v546;
    v245 = *(int64_t *)(v376 + 24) + v543;
    g61 = (char *)v545;
    int64_t v547 = g78 + 16 * (int64_t)*v398; // 0x402b8b
    v355 = *(int64_t *)v547;
    v320 = *(int64_t *)(v547 + 8);
    v230 = v546;
    v232 = v542;
    v234 = v544;
    v236 = v545;
    if (v545 >= v245) {
        goto lab_0x403366;
    } else {
        // 0x402bab
        v548 = v546;
        v549 = v546;
        v550 = v542;
        v551 = v545;
        v240 = v543;
        v241 = v544;
        if (v545 > v543 + v542) {
            goto lab_0x40337c;
        } else {
            while (true) {
              lab_0x402c09:
                // 0x402c09
                v552 = v551;
                char * v553 = (char *)v552; // 0x402c11
                g61 = v553;
                if (g98 != 0) {
                    int64_t v554 = function_418960(&g99, v552, v245 - v552, 0, 0); // 0x402bcb
                    v73 = v261;
                    v74 = &g99;
                    if (v554 == -2) {
                        // break -> 0x4030d4
                        break;
                    }
                    // 0x402bda
                    v555 = g60;
                    v556 = g69;
                    v557 = v554 == -1 ? v261 : v554;
                    goto lab_0x402bec;
                } else {
                    int64_t v558 = v550;
                    char * v559 = v548;
                    char v560 = *(char *)((int64_t)*v553 + (int64_t)&g89); // 0x402c1e
                    v555 = v559;
                    v556 = v558;
                    v557 = 1;
                    if (v560 != 0) {
                        char * v561 = v549;
                        int64_t v562 = v552; // 0x40333b
                        if (v245 <= v552) {
                            goto lab_0x40335d_3;
                        }
                        v562++;
                        v229 = v561;
                        v231 = v558;
                        v235 = v245;
                        if (v245 == v562) {
                            goto lab_0x40335d_3;
                        }
                        unsigned char v563 = *(char *)v562; // 0x403340
                        v564 = v559;
                        v565 = v561;
                        v566 = v558;
                        v567 = v562;
                        while (*(char *)((int64_t)v563 + (int64_t)&g89) != 0) {
                            // 0x403351
                            v562++;
                            v229 = v561;
                            v231 = v558;
                            v235 = v245;
                            if (v245 == v562) {
                                goto lab_0x40335d_3;
                            }
                            // 0x403340
                            v563 = *(char *)v562;
                            v564 = v559;
                            v565 = v561;
                            v566 = v558;
                            v567 = v562;
                        }
                        goto lab_0x402bf5;
                    } else {
                        goto lab_0x402bec;
                    }
                }
            }
            goto lab_0x4030d4_2;
        }
    }
  lab_0x403366:;
    uint64_t v237 = v236;
    int64_t v238 = v234;
    int64_t v239 = (int64_t)v230; // 0x403366
    v240 = v239;
    v241 = v238;
    if (v237 <= v232 + v239) {
        // 0x403375
        g61 = (char *)v237;
        v240 = v239;
        v241 = v238;
    }
    goto lab_0x40337c;
  lab_0x40337c:;
    int64_t v242 = v241;
    int64_t v243 = v240;
    uint64_t v244 = (int64_t)g61; // 0x40337c
    g59 = g31 != NULL == v245 > v244;
    if (v243 < v244) {
        int64_t v246 = v244 - 1; // 0x4033d2
        int64_t v247 = *(int64_t *)v248 + 1; // 0x4033d6
        int64_t v249 = v246; // 0x4033db
        if ((*(char *)(2 * (int64_t)*(char *)v246 + v247) & 32) != 0) {
            int64_t v250 = v249;
            while (v250 != v243) {
                int64_t v251 = v250 - 1; // 0x4033d2
                v249 = v251;
                if ((*(char *)(2 * (int64_t)*(char *)v251 + v247) & 32) == 0) {
                    // 0x4033e1
                    g61 = (char *)v250;
                    goto lab_0x4033e8;
                }
                v250 = v249;
            }
            // 0x403c8d
            g61 = (char *)v243;
        }
    }
    goto lab_0x4033e8;
  lab_0x4033e8:;
    int64_t v252 = g71 + g88; // 0x4033f2
    int64_t v253; // 0x402010
    int64_t v254; // 0x402010
    if (v252 < -v242) {
        int64_t v255 = v243 - v252; // 0x403408
        if (g98 == 0) {
            unsigned char v256 = *(char *)v255; // 0x40407b
            if (*(char *)((int64_t)v256 + (int64_t)&g89) == 0) {
                // 0x4040bb
                v254 = v243;
                v253 = v255 + 1;
            } else {
                // 0x404088
                v254 = v243;
                v253 = v255;
                int64_t v257 = v255; // 0x40408b
                if (v255 < v243) {
                    int64_t v258 = v257 + 1; // 0x4040a3
                    v254 = v243;
                    v253 = v258;
                    while (v258 != v243) {
                        unsigned char v259 = *(char *)v258; // 0x404092
                        v254 = v243;
                        v253 = v258;
                        v257 = v258;
                        if (*(char *)((int64_t)v259 + (int64_t)&g89) == 0) {
                            // break -> 0x40344a
                            break;
                        }
                        v258 = v257 + 1;
                        v254 = v243;
                        v253 = v258;
                    }
                }
            }
            goto lab_0x40344a;
        } else {
            int64_t v260 = function_418960(&g99, v255, v252, 0, 0); // 0x403426
            v73 = v261;
            v74 = &g99;
            if (v260 == -2) {
                goto lab_0x4030d4_2;
            } else {
                // 0x403435
                v254 = (int64_t)g60;
                v253 = (v260 != -1 ? v260 : 1) + v255;
                goto lab_0x40344a;
            }
        }
    } else {
        // 0x403c0f
        v254 = v243;
        v253 = v242 + v243;
        goto lab_0x40344a;
    }
  lab_0x40344a:;
    int64_t v262 = v253;
    uint64_t v263 = v254;
    char * v264 = (char *)v262; // 0x40344a
    g63 = v264;
    char * v265 = (char *)v263; // 0x403451
    g64 = v265;
    char * v266 = v265; // 0x40345b
    if (v262 < v263) {
        int64_t v267 = v263 - 1; // 0x403482
        int64_t v268 = *(int64_t *)v248 + 1; // 0x403486
        int64_t v269 = v267; // 0x40348b
        v266 = v265;
        if ((*(char *)(2 * (int64_t)*(char *)v267 + v268) & 32) != 0) {
            int64_t v270 = v269;
            while (v262 != v270) {
                int64_t v271 = v270 - 1; // 0x403482
                v269 = v271;
                if ((*(char *)(2 * (int64_t)*(char *)v271 + v268) & 32) == 0) {
                    char * v272 = (char *)v270; // 0x403492
                    g64 = v272;
                    v266 = v272;
                    goto lab_0x403499;
                }
                v270 = v269;
            }
            // 0x403c99
            g64 = v264;
            v266 = v264;
        }
    }
    goto lab_0x403499;
  lab_0x403499:;
    int64_t v273 = g70; // 0x403499
    int64_t v274 = (int64_t)v266; // 0x4034a0
    int64_t v275 = v273 + v262; // 0x4034aa
    int64_t v276 = v274; // 0x4034b3
    v277 = v262;
    int64_t v278 = v273; // 0x4034b3
    if (v275 < v274) {
        int64_t v279 = g98; // 0x402010
        int64_t v280 = v273; // 0x402010
        int64_t v281 = v262;
        int64_t v282 = v274; // 0x402010
        int64_t v283 = v275; // 0x402010
        while (true) {
            int64_t v284 = v282;
            int64_t v285 = v281;
            int64_t v286 = v285; // 0x4034bd
            int64_t v287 = v284; // 0x4034bd
            char * v288; // 0x402010
            int64_t v289; // 0x402010
            int64_t v290; // 0x402010
            int64_t v291; // 0x402010
            int64_t v292; // 0x402010
            if (v279 == 0) {
                // 0x4034b5
                v288 = (char *)v285;
                v290 = v283;
                v291 = v284;
                v292 = v285;
                v289 = v280;
            } else {
                int64_t v293 = v286;
                int64_t v294 = function_418960(&g99, v293, v287 - v293, 0, 0); // 0x4034d0
                v73 = v261;
                v74 = &g99;
                if (v294 == -2) {
                    // break (via goto) -> 0x4030d4
                    goto lab_0x4030d4_2;
                }
                int64_t v295 = g70; // 0x4034e3
                int64_t v296 = (int64_t)g64;
                int64_t v297 = (v294 == -1 ? v261 : v294) + (int64_t)g63; // 0x4034f5
                char * v298 = (char *)v297;
                g63 = v298;
                int64_t v299 = v297 + v295; // 0x403506
                v276 = v296;
                v277 = v297;
                v278 = v295;
                if (v299 >= v296) {
                    goto lab_0x40350f_2;
                }
                // 0x4034b5
                v287 = v296;
                v288 = v298;
                v290 = v299;
                v291 = v296;
                v292 = v297;
                v289 = v295;
                while (g98 != 0) {
                    // 0x4034c3
                    v293 = v297;
                    v294 = function_418960(&g99, v293, v287 - v293, 0, 0);
                    v73 = v261;
                    v74 = &g99;
                    if (v294 == -2) {
                        // break (via goto) -> 0x4030d4
                        goto lab_0x4030d4_2;
                    }
                    // 0x4034df
                    v295 = g70;
                    v296 = (int64_t)g64;
                    v297 = (v294 == -1 ? v261 : v294) + (int64_t)g63;
                    v298 = (char *)v297;
                    g63 = v298;
                    v299 = v297 + v295;
                    v276 = v296;
                    v277 = v297;
                    v278 = v295;
                    if (v299 >= v296) {
                        goto lab_0x40350f_2;
                    }
                    // 0x4034b5
                    v287 = v296;
                    v288 = v298;
                    v290 = v299;
                    v291 = v296;
                    v292 = v297;
                    v289 = v295;
                }
            }
            int64_t v300 = v289;
            int64_t v301 = v292;
            int64_t v302 = v291;
            unsigned char v303 = *v288; // 0x4036a0
            char * v304; // 0x402010
            int64_t v305; // 0x402010
            int64_t v306; // 0x402010
            int64_t v307; // 0x402010
            if (*(char *)((int64_t)v303 + (int64_t)&g89) != 0) {
                // 0x4036c0
                v305 = v290;
                v307 = v301;
                int64_t v308 = v301; // 0x4036c3
                if (v302 > v301) {
                    int64_t v309 = v308 + 1;
                    while (v302 != v309) {
                        char * v310 = (char *)v309;
                        v304 = v310;
                        v306 = v309;
                        v308 = v309;
                        if (*(char *)((int64_t)*v310 + (int64_t)&g89) == 0) {
                            goto lab_0x4036b0;
                        }
                        v309 = v308 + 1;
                    }
                    // 0x4036e8
                    g63 = (char *)v302;
                    v305 = v300 + v302;
                    v307 = v309;
                }
            } else {
                int64_t v311 = v301 + 1; // 0x4036ac
                v304 = (char *)v311;
                v306 = v311;
              lab_0x4036b0:
                // 0x4036b0
                g63 = v304;
                v305 = v306 + v300;
                v307 = v306;
            }
            // 0x4034b0
            v281 = v307;
            v279 = 0;
            v280 = v300;
            v282 = v302;
            v283 = v305;
            v276 = v302;
            v277 = v281;
            v278 = v300;
            if (v302 <= v305) {
                goto lab_0x40350f_2;
            }
        }
        goto lab_0x4030d4_2;
    } else {
        goto lab_0x40350f_2;
    }
  lab_0x403597:;
    int64_t v312 = v276 - v313; // 0x403597
    int64_t v314 = v278 - v312 - g32; // 0x40359d
    int64_t v315; // 0x402010
    int64_t v316; // 0x402010
    if (v314 < 1) {
        // 0x403cc2
        g65 = 0;
        g66 = 0;
        g67 = 0;
        v315 = v312;
        v316 = (int64_t)g61;
        goto lab_0x40379e;
    } else {
        char * v317 = g61; // 0x4035ad
        int64_t v318 = (int64_t)v317; // 0x4035ad
        g66 = v318;
        int64_t v319 = v318; // 0x4035c1
        if (v320 > v318) {
            int64_t v321 = *(int64_t *)v248 + 1; // 0x4035e2
            int64_t v322 = v318; // 0x4035e7
            v319 = v318;
            if ((*(char *)(2 * (int64_t)*v317 + v321) & 32) != 0) {
                int64_t v323 = v322 + 1; // 0x4035d0
                int64_t v324 = v320; // 0x4035dc
                while (v320 != v323) {
                    // 0x4035de
                    v322 = v323;
                    v324 = v323;
                    if ((*(char *)(2 * (int64_t)*(char *)v323 + v321) & 32) == 0) {
                        // break -> 0x4035ed
                        break;
                    }
                    v323 = v322 + 1;
                    v324 = v320;
                }
                // 0x4035ed
                g66 = v324;
                v319 = v324;
            }
        }
        int64_t v325 = v319; // 0x4035f4
        g67 = v325;
        v326 = v325;
        v327 = v318;
        v328 = v314;
        v329 = v325;
        if (v245 > v325) {
            // 0x40360f
            v330 = v325;
            v331 = v314;
            v332 = v325;
            v333 = v325;
            v334 = v318;
            if (v325 < v325 + v314) {
                while (true) {
                  lab_0x403674:
                    // 0x403674
                    v335 = v332;
                    int64_t v336 = v331;
                    g67 = v335;
                    if (g98 != 0) {
                        int64_t v337 = function_418960(&g99, v335, v245 - v335, 0, 0); // 0x403638
                        v73 = v261;
                        v74 = &g99;
                        if (v337 == -2) {
                            // break -> 0x4030d4
                            break;
                        }
                        // 0x403647
                        v338 = g66;
                        v339 = 0x100000000000000 * v336 >> 56;
                        v340 = v337 == -1 ? v261 : v337;
                        goto lab_0x40365e;
                    } else {
                        int64_t v341 = v330;
                        unsigned char v342 = *(char *)v335; // 0x403685
                        v338 = v341;
                        v339 = v336;
                        v340 = 1;
                        if (*(char *)((int64_t)v342 + (int64_t)&g89) != 0) {
                            int64_t v343 = v335; // 0x4036fb
                            if (v245 <= v335) {
                                goto lab_0x40371d_3;
                            }
                            v343++;
                            v344 = v341;
                            v345 = v336;
                            v346 = v245;
                            if (v245 == v343) {
                                goto lab_0x40371d_3;
                            }
                            unsigned char v347 = *(char *)v343; // 0x403700
                            v348 = v341;
                            v349 = v336;
                            v350 = v343;
                            while (*(char *)((int64_t)v347 + (int64_t)&g89) != 0) {
                                // 0x403711
                                v343++;
                                if (v245 == v343) {
                                    goto lab_0x40371d_3;
                                }
                                // 0x403700
                                v347 = *(char *)v343;
                                v348 = v341;
                                v349 = v336;
                                v350 = v343;
                            }
                            goto lab_0x403667;
                        } else {
                            goto lab_0x40365e;
                        }
                    }
                }
                goto lab_0x4030d4_2;
            } else {
                goto lab_0x403733;
            }
        } else {
            goto lab_0x403724;
        }
    }
  lab_0x40379e:;
    int64_t v351 = g69 - v316 + (int64_t)g60 - g32; // 0x4037af
    int64_t v352; // 0x402010
    if (v351 < 1) {
        // 0x403bed
        g57 = 0;
        g58 = 0;
        v353 = v315;
        goto lab_0x403c03;
    } else {
        int64_t v354 = (int64_t)g63; // 0x4037bf
        g58 = v354;
        v352 = v354;
        if (v355 < v354) {
            int64_t v356 = v354 - 1; // 0x4037f2
            int64_t v357 = *(int64_t *)v248 + 1; // 0x4037f6
            int64_t v358 = v356; // 0x4037fb
            v352 = v354;
            if ((*(char *)(2 * (int64_t)*(char *)v356 + v357) & 32) != 0) {
                int64_t v359 = v358;
                while (v355 != v359) {
                    int64_t v360 = v359 - 1; // 0x4037f2
                    v358 = v360;
                    if ((*(char *)(2 * (int64_t)*(char *)v360 + v357) & 32) == 0) {
                        // 0x403802
                        g58 = v359;
                        v352 = v359;
                        goto lab_0x403841;
                    }
                    v359 = v358;
                }
                // 0x403d0b
                g58 = v355;
                v352 = v355;
            }
        }
        goto lab_0x403841;
    }
  lab_0x403724:;
    int64_t v361 = v329;
    int64_t v362 = v327;
    int64_t v363 = v326;
    v333 = v363;
    v334 = v362;
    if (v361 < v328 + v363) {
        // 0x40372c
        g67 = v361;
        v333 = v363;
        v334 = v362;
    }
    goto lab_0x403733;
  lab_0x403733:;
    int64_t v364 = v334;
    int64_t v365 = v333;
    uint64_t v366 = g67; // 0x403733
    if (v366 > v365) {
        // 0x403743
        g59 = 0;
        g65 = !((v245 <= v366 | g31 == NULL));
        int64_t v367 = v366 - 1; // 0x403787
        int64_t v368 = *(int64_t *)v248 + 1; // 0x40378b
        int64_t v369 = v367; // 0x403790
        v315 = v365;
        v316 = v364;
        if ((*(char *)(2 * (int64_t)*(char *)v367 + v368) & 32) != 0) {
            int64_t v370 = v369;
            while (v370 > v365) {
                int64_t v371 = v370 - 1; // 0x403787
                v369 = v371;
                if ((*(char *)(2 * (int64_t)*(char *)v371 + v368) & 32) == 0) {
                    // break -> 0x403797
                    break;
                }
                v370 = v369;
            }
            // 0x403797
            g67 = v370;
            v315 = v365;
            v316 = v364;
        }
    } else {
        // 0x403cff
        g65 = 0;
        v315 = v365;
        v316 = v364;
    }
    goto lab_0x40379e;
  lab_0x403c03:
    // 0x403c03
    g56 = 0;
    v372 = v353;
    goto lab_0x4038e5;
  lab_0x403841:
    // 0x403841
    g57 = v262;
    int64_t v597 = v351 + v262; // 0x40384f
    int64_t v598 = v597; // 0x403856
    int64_t v599 = v352; // 0x403856
    int64_t v600 = v262; // 0x403856
    v601 = v352;
    v602 = v262;
    if (v352 > v597) {
        while (true) {
            // 0x403858
            v603 = v599;
            v604 = v600;
            v605 = v598;
            int64_t v606; // 0x402010
            while (true) {
              lab_0x403858:
                // 0x403858
                v606 = v604;
                int64_t v607 = v605; // 0x402010
                int64_t v608 = v606;
                while (true) {
                    if (g98 != 0) {
                        // break (via goto) -> 0x403810
                        goto lab_0x403810;
                    }
                    int64_t v609 = v608;
                    unsigned char v610 = *(char *)v609; // 0x403862
                    int64_t v611; // 0x402010
                    if (*(char *)((int64_t)v610 + (int64_t)&g89) != 0) {
                        int64_t v612 = v609; // 0x403bb3
                        v613 = v607;
                        v614 = v609;
                        if (v603 <= v609) {
                            // break -> 0x403853
                            break;
                        }
                        v612++;
                        int64_t v615; // 0x402010
                        if (v603 == v612) {
                            // 0x403bdd
                            g57 = v603;
                            v613 = v615;
                            v614 = v612;
                            goto lab_0x403853;
                        }
                        unsigned char v616 = *(char *)v612; // 0x403bc0
                        v611 = v612;
                        while (*(char *)((int64_t)v616 + (int64_t)&g89) != 0) {
                            // 0x403bd5
                            v612++;
                            if (v603 == v612) {
                                // 0x403bdd
                                g57 = v603;
                                v613 = v615;
                                v614 = v612;
                                goto lab_0x403853;
                            }
                            // 0x403bc0
                            v616 = *(char *)v612;
                            v611 = v612;
                        }
                    } else {
                        // 0x403873
                        v611 = v609 + 1;
                    }
                    // 0x403877
                    v608 = v611;
                    int64_t v617 = v608 + v351; // 0x403877
                    g57 = v608;
                    v607 = v617;
                    v601 = v603;
                    v602 = v608;
                    if (v603 <= v617) {
                        goto lab_0x403887_3;
                    }
                }
                goto lab_0x403853;
            }
          lab_0x403810:;
            int64_t v618 = function_418960(&g99, v606, v603 - v606, 0, 0); // 0x403820
            v73 = v261;
            v74 = &g99;
            if (v618 == -2) {
                // break -> 0x4030d4
                break;
            }
            int64_t v619 = g57 + (v618 == -1 ? v261 : v618); // 0x403837
            g57 = v619;
            int64_t v620 = v619 + v351; // 0x40384f
            v598 = v620;
            v599 = g58;
            v600 = v619;
            v601 = g58;
            v602 = v619;
            if (g58 <= v620) {
                goto lab_0x403887_3;
            }
        }
        goto lab_0x4030d4_2;
    } else {
        goto lab_0x403887_3;
    }
  lab_0x4038e5:;
    // 0x4038e5
    int64_t v373; // 0x402010
    int64_t v374; // 0x402010
    if (*(char *)&g109 == 0) {
        // 0x403c18
        v373 = 0;
        v374 = v372;
        if (*(char *)&g108 != 0) {
            int64_t v375 = *(int64_t *)(v376 + 32); // 0x403c2d
            char * v377 = g60; // 0x403c31
            int64_t v378 = v375 + (int64_t)v377; // 0x403c31
            char * v379 = (char *)v378;
            g54 = v379;
            g55 = v378;
            v373 = 0;
            int64_t v380; // 0x402010
            v374 = v380;
            if (v245 > v378) {
                int64_t v381 = *(int64_t *)v248; // 0x403c54
                unsigned char v382 = *v379; // 0x403c6f
                int64_t v383 = v382; // 0x403c6f
                int64_t v384 = v381 + 1; // 0x403c72
                char v385 = *(char *)(2 * v383 + v384); // 0x403c72
                v373 = 0;
                v374 = v383;
                if ((v385 & 32) == 0) {
                    // 0x403c60
                    unsigned char v386; // 0x403c18
                    int64_t v387 = v386; // 0x403c18
                    int64_t v388 = v378 + 1; // 0x403c60
                    int64_t v389 = v388; // 0x403c69
                    int64_t v390 = v383; // 0x403c69
                    if (v245 == v388) {
                      lab_0x4040f7:;
                        int64_t v391 = v390;
                        g55 = v245;
                        v373 = v387;
                        v374 = v391;
                    } else {
                        int64_t v392 = v389;
                        unsigned char v393 = *(char *)v392; // 0x403c6f
                        int64_t v394 = v393; // 0x403c6f
                        char v395 = *(char *)(2 * v394 + v384); // 0x403c72
                        while ((v395 & 32) == 0) {
                            int64_t v396 = v392 + 1; // 0x403c60
                            v389 = v396;
                            v390 = v394;
                            if (v245 == v396) {
                                goto lab_0x4040f7;
                            }
                            v392 = v389;
                            v393 = *(char *)v392;
                            v394 = v393;
                            v395 = *(char *)(2 * v394 + v384);
                        }
                        // 0x403c81
                        g55 = v392;
                        v373 = v387;
                        v374 = v394;
                    }
                }
            }
        }
    } else {
        uint32_t v397 = *v398; // 0x403900
        int64_t v399 = 8 * (int64_t)v397; // 0x403904
        int64_t v400 = *(int64_t *)(v399 + g80); // 0x403904
        int64_t v401 = *(int64_t *)(v376 + 32) + 1; // 0x40392a
        int64_t v402 = v401; // 0x403930
        if (v397 >= 1) {
            // 0x403932
            v402 = v401 - *(int64_t *)(v399 - 8 + g79);
        }
        int64_t str3 = v400 == 0 ? (int64_t)&g19 : v400;
        char * v403 = stpcpy(g54, (char *)str3); // 0x403945
        g55 = (int64_t)__sprintf_chk(v403, 1, -1, ":%ld", (int32_t)v402) + (int64_t)v403;
        v373 = (int64_t)":%ld";
        v374 = -1;
    }
    int64_t v404 = v373;
    uint32_t v405 = g106; // 0x403974
    int64_t v406; // 0x402010
    int64_t v407; // 0x402010
    int64_t v408; // 0x402010
    int64_t v409; // 0x402010
    int64_t v410; // 0x402010
    int64_t v411; // 0x402010
    int64_t v412; // 0x402010
    int64_t v413; // 0x402010
    int64_t v414; // 0x402010
    int32_t v415; // 0x402010
    int32_t v416; // 0x402010
    int64_t v417; // 0x402010
    int64_t v418; // 0x402010
    int64_t v419; // 0x402010
    int64_t v420; // 0x402010
    int64_t v421; // 0x403a26
    uint64_t v422; // 0x403a35
    if (v405 == 2) {
        int64_t v423 = *(int64_t *)&g30; // 0x403ea9
        __printf_chk(1, ".%s \"", (char *)v423);
        function_404ac0(g66, g67, v423, v404);
        if (g65 != 0) {
            // 0x40415b
            fputs_unlocked((char *)g31, g48);
        }
        int64_t v424 = (int64_t)g48; // 0x403ee1
        int64_t * v425 = (int64_t *)(v424 + 40); // 0x403ee8
        uint64_t v426 = *v425; // 0x403ee8
        if (v426 >= *(int64_t *)(v424 + 48)) {
            // 0x40441b
            __overflow(g48, 34);
        } else {
            // 0x403ef6
            *v425 = v426 + 1;
            *(char *)v426 = 34;
        }
        // 0x403f01
        fwrite_unlocked((int64_t *)" \"", 1, 2, g48);
        if (g62 != 0) {
            // 0x40412b
            fputs_unlocked((char *)g31, g48);
        }
        // 0x403f29
        function_404ac0((int64_t)g63, (int64_t)g64, 2, (int64_t)g48);
        int64_t v427 = (int64_t)g48; // 0x403f3c
        int64_t * v428 = (int64_t *)(v427 + 40); // 0x403f43
        uint64_t v429 = *v428; // 0x403f43
        if (v429 >= *(int64_t *)(v427 + 48)) {
            // 0x4043fd
            __overflow(g48, 34);
        } else {
            // 0x403f51
            *v428 = v429 + 1;
            *(char *)v429 = 34;
        }
        // 0x403f5c
        fwrite_unlocked((int64_t *)" \"", 1, 2, g48);
        function_404ac0((int64_t)g60, (int64_t)g61, 2, (int64_t)g48);
        if (g59 != 0) {
            // 0x404113
            fputs_unlocked((char *)g31, g48);
        }
        int64_t v430 = (int64_t)g48; // 0x403f97
        int64_t * v431 = (int64_t *)(v430 + 40); // 0x403f9e
        uint64_t v432 = *v431; // 0x403f9e
        if (v432 >= *(int64_t *)(v430 + 48)) {
            // 0x404439
            __overflow(g48, 34);
        } else {
            // 0x403fac
            *v431 = v432 + 1;
            *(char *)v432 = 34;
        }
        // 0x403fb7
        fwrite_unlocked((int64_t *)" \"", 1, 2, g48);
        if (g56 != 0) {
            // 0x404143
            fputs_unlocked((char *)g31, g48);
        }
        // 0x403fdf
        function_404ac0(g57, g58, 2, (int64_t)g48);
        int64_t v433 = (int64_t)g48; // 0x403ff2
        int64_t * v434 = (int64_t *)(v433 + 40); // 0x403ff9
        uint64_t v435 = *v434; // 0x403ff9
        if (v435 >= *(int64_t *)(v433 + 48)) {
            // 0x40440c
            __overflow(g48, 34);
        } else {
            // 0x404007
            *v434 = v435 + 1;
            *(char *)v435 = 34;
        }
        // 0x404012
        v436 = v376;
        v437 = v438;
        v439 = v248;
        v440 = v261;
        if ((*(char *)&g108 | *(char *)&g109) != 0) {
            // 0x404028
            fwrite_unlocked((int64_t *)" \"", 1, 2, g48);
            function_404ac0((int64_t)g54, g55, 2, (int64_t)g48);
            int64_t v441 = (int64_t)g48; // 0x404056
            int64_t * v442 = (int64_t *)(v441 + 40); // 0x40405d
            uint64_t v443 = *v442; // 0x40405d
            if (v443 >= *(int64_t *)(v441 + 48)) {
                // 0x4044a4
                __overflow(g48, 34);
                v436 = v376;
                v437 = v438;
                v439 = v248;
                v440 = v261;
            } else {
                // 0x40406b
                *v442 = v443 + 1;
                *(char *)v443 = 34;
                v436 = v376;
                v437 = v438;
                v439 = v248;
                v440 = v261;
            }
        }
        goto lab_0x403b59;
    } else {
        if (v405 < 2) {
            int64_t v444 = v374;
            v418 = v376;
            v416 = v438;
            v420 = v248;
            v411 = v404;
            v414 = v444;
            v407 = v261;
            if (g107 != 0) {
                goto lab_0x403d94;
            } else {
                // 0x403d2c
                function_404ac0((int64_t)g54, g55, v444, v404);
                if (*(char *)&g109 == 0) {
                    // 0x4042ff
                    function_404a70(g32 - g55 + g87 + (int64_t)g54);
                    v418 = v376;
                    v416 = v438;
                    v420 = v248;
                    v411 = v404;
                    v414 = v444;
                    v407 = v261;
                    goto lab_0x403d94;
                } else {
                    int64_t v445 = (int64_t)g48; // 0x403d4c
                    int64_t * v446 = (int64_t *)(v445 + 40); // 0x403d53
                    uint64_t v447 = *v446; // 0x403d53
                    v221 = v376;
                    v223 = v438;
                    v224 = v248;
                    v225 = v404;
                    v226 = v444;
                    v227 = v261;
                    v228 = v445;
                    if (v447 >= *(int64_t *)(v445 + 48)) {
                        goto lab_0x4044ee;
                    } else {
                        int64_t v448 = v447 + 1; // 0x403d61
                        *v446 = v448;
                        *(char *)v447 = 58;
                        v417 = v376;
                        v415 = v438;
                        v419 = v248;
                        v410 = v404;
                        v413 = v448;
                        v406 = v261;
                        goto lab_0x403d6c;
                    }
                }
            }
        } else {
            // 0x403989
            v449 = v376;
            v450 = v438;
            v451 = v248;
            v452 = v261;
            if (v405 != 3) {
                goto lab_0x403b79;
            } else {
                int64_t v453 = *(int64_t *)&g30; // 0x403992
                __printf_chk(1, "\\%s ", (char *)v453);
                int64_t v454 = (int64_t)g48; // 0x4039aa
                int64_t * v455 = (int64_t *)(v454 + 40); // 0x4039b1
                uint64_t v456 = *v455; // 0x4039b1
                int64_t v457; // 0x402010
                if (v456 >= *(int64_t *)(v454 + 48)) {
                    // 0x404448
                    __overflow(g48, 123);
                    v457 = v453;
                } else {
                    int64_t v458 = v456 + 1; // 0x4039bf
                    *v455 = v458;
                    *(char *)v456 = 123;
                    v457 = v458;
                }
                // 0x4039ca
                function_404ac0(g66, g67, v457, v404);
                fwrite_unlocked((int64_t *)"}{", 1, 2, g48);
                function_404ac0((int64_t)g63, (int64_t)g64, 2, (int64_t)g48);
                fwrite_unlocked((int64_t *)"}{", 1, 2, g48);
                char * v459 = g60; // 0x403a26
                v421 = (int64_t)v459;
                char * v460 = g61; // 0x403a35
                v422 = (int64_t)v460;
                if (g98 == 0) {
                    int64_t v461 = (int64_t)g48; // 0x403a15
                    char v462 = *(char *)((int64_t)*v459 + (int64_t)&g89); // 0x4040c7
                    if (v462 != 0) {
                        // 0x4040ed
                        v409 = v461;
                        v412 = 2;
                        v408 = v421;
                        if (v460 > v459) {
                            int64_t v463; // 0x402010
                            unsigned char v464 = *(char *)v463; // 0x4040d9
                            v409 = v461;
                            v412 = 2;
                            v408 = v463;
                            while (*(char *)((int64_t)v464 + (int64_t)&g89) != 0) {
                                // 0x4040e9
                                int64_t v465; // 0x402010
                                int64_t v466 = v465 + 1; // 0x4040e9
                                v409 = v461;
                                v412 = 2;
                                v408 = v466;
                                v463 = v466;
                                if (v466 >= v422) {
                                    // break -> 0x403a75
                                    break;
                                }
                                v465 = v463;
                                v464 = *(char *)v465;
                                char v467 = *(char *)((int64_t)v464 + (int64_t)&g89); // 0x4040dc
                                v409 = v461;
                                v412 = 2;
                                v408 = v465;
                            }
                        }
                    } else {
                        // 0x4040d0
                        v409 = v461;
                        v412 = 2;
                        v408 = v421 + 1;
                    }
                    goto lab_0x403a75;
                } else {
                    int64_t v468 = v422 - v421; // 0x403a50
                    int64_t v469 = function_418960(&g99, v421, v468, 0, 0); // 0x403a58
                    if (v469 == -2) {
                        goto lab_0x4030d4_2;
                    } else {
                        // 0x403a67
                        v409 = 0;
                        v412 = v468;
                        v408 = (v469 != -1 ? v469 : 1) + v421;
                        goto lab_0x403a75;
                    }
                }
            }
        }
    }
  lab_0x403d94:;
    int64_t v470 = v407;
    int64_t v471 = v414;
    int64_t v472 = v411;
    int64_t v473 = v420;
    int32_t v474 = v416;
    int64_t v475 = v418;
    uint64_t v476 = g66; // 0x403d94
    uint64_t v477 = g67; // 0x403d9b
    int64_t v478; // 0x402010
    int64_t v479; // 0x402010
    int64_t v480; // 0x402010
    int64_t v481; // 0x402010
    int64_t v482; // 0x402010
    int64_t v483; // 0x402010
    if (v476 < v477) {
        // 0x404173
        function_404ac0(v476, v477, v471, v472);
        if (g65 != 0) {
            // 0x40435b
            fputs_unlocked((char *)g31, g48);
            int64_t v484 = (int64_t)g63 - (int64_t)g64 + g71 - g32; // 0x40438a
            v482 = v484;
            v479 = 0;
            v483 = v484;
            if (g62 == 0) {
                goto lab_0x40439f;
            } else {
                goto lab_0x404398;
            }
        } else {
            int64_t v485 = (int64_t)g63 - (int64_t)g64 + g71 - g32; // 0x4041a8
            v482 = v485;
            if (g62 != 0) {
                goto lab_0x404398;
            } else {
                // 0x4041b8
                v478 = 0;
                v481 = v485 - g67 + g66;
                goto lab_0x403dd9;
            }
        }
    } else {
        int64_t v486 = (int64_t)g63 - (int64_t)g64 + g71 - g32; // 0x403dc4
        v480 = v486;
        v478 = 0;
        v481 = v486;
        if (g62 == 0) {
            goto lab_0x403dd9;
        } else {
            goto lab_0x403dd2;
        }
    }
  lab_0x403dd9:
    // 0x403dd9
    function_404a70(v481 - v478);
    if (g62 != 0) {
        // 0x404281
        fputs_unlocked((char *)g31, g48);
    }
    // 0x403dee
    function_404ac0((int64_t)g63, (int64_t)g64, v471, v472);
    function_404a70(g32);
    function_404ac0((int64_t)g60, (int64_t)g61, v471, v472);
    int64_t v487; // 0x402010
    int64_t v488; // 0x402010
    if (g59 != 0) {
        // 0x4041d0
        fputs_unlocked((char *)g31, g48);
        int64_t v489 = g57; // 0x4041e3
        int64_t v490 = g58; // 0x4041ea
        v487 = v489;
        v488 = v490;
        if (v489 >= v490) {
            goto lab_0x403e44;
        } else {
            // 0x4041fa
            v491 = v475;
            v492 = v474;
            v493 = v473;
            v494 = g71 - (int64_t)g61 + (int64_t)g60;
            v495 = v489;
            v496 = v490;
            v497 = v470;
            v498 = g59 == 0 ? 0 : g68;
            goto lab_0x404229;
        }
    } else {
        int64_t v499 = g57; // 0x403e2d
        int64_t v500 = g58; // 0x403e34
        v487 = v499;
        v488 = v500;
        if (v500 > v499) {
            // 0x40432d
            v491 = v475;
            v492 = v474;
            v493 = v473;
            v494 = g71 - (int64_t)g61 + (int64_t)g60;
            v495 = v499;
            v496 = v500;
            v497 = v470;
            v498 = 0;
            goto lab_0x404229;
        } else {
            goto lab_0x403e44;
        }
    }
  lab_0x403dd2:
    // 0x403dd2
    v478 = g68;
    v481 = v480;
    goto lab_0x403dd9;
  lab_0x4044ee:
    // 0x4044ee
    __overflow((struct _IO_FILE *)v228, 58);
    v417 = v221;
    v415 = v223;
    v419 = v224;
    v410 = v225;
    v413 = v226;
    v406 = v227;
    goto lab_0x403d6c;
  lab_0x403a75:
    // 0x403a75
    function_404ac0(v421, v408, v412, v409);
    fwrite_unlocked((int64_t *)"}{", 1, 2, g48);
    function_404ac0(v408, v422, 2, (int64_t)g48);
    int64_t v516 = (int64_t)g48; // 0x403ab0
    fwrite_unlocked((int64_t *)"}{", 1, 2, g48);
    function_404ac0(g57, g58, 2, v516);
    int64_t v517 = (int64_t)g48; // 0x403ad4
    int64_t * v518 = (int64_t *)(v517 + 40); // 0x403adb
    uint64_t v519 = *v518; // 0x403adb
    int64_t v520; // 0x402010
    if (v519 >= *(int64_t *)(v517 + 48)) {
        // 0x40442a
        __overflow(g48, 125);
        v520 = 2;
    } else {
        int64_t v521 = v519 + 1; // 0x403ae9
        *v518 = v521;
        *(char *)v519 = 125;
        v520 = v521;
    }
    // 0x403af4
    v436 = v376;
    v437 = v438;
    v439 = v248;
    v440 = v261;
    if ((*(char *)&g108 | *(char *)&g109) != 0) {
        int64_t v522 = (int64_t)g48; // 0x403b06
        int64_t * v523 = (int64_t *)(v522 + 40); // 0x403b0d
        uint64_t v524 = *v523; // 0x403b0d
        int64_t v525; // 0x402010
        if (v524 >= *(int64_t *)(v522 + 48)) {
            // 0x404466
            __overflow(g48, 123);
            v525 = v520;
        } else {
            int64_t v526 = v524 + 1; // 0x403b1b
            *v523 = v526;
            *(char *)v524 = 123;
            v525 = v526;
        }
        // 0x403b26
        function_404ac0((int64_t)g54, g55, v525, v516);
        int64_t v527 = (int64_t)g48; // 0x403b39
        int64_t * v528 = (int64_t *)(v527 + 40); // 0x403b40
        uint64_t v529 = *v528; // 0x403b40
        if (v529 >= *(int64_t *)(v527 + 48)) {
            // 0x404457
            __overflow(g48, 125);
            v436 = v376;
            v437 = v438;
            v439 = v248;
            v440 = v261;
        } else {
            // 0x403b4e
            *v528 = v529 + 1;
            *(char *)v529 = 125;
            v436 = v376;
            v437 = v438;
            v439 = v248;
            v440 = v261;
        }
    }
    goto lab_0x403b59;
  lab_0x40439f:;
    int64_t v596 = g66 - g67 + v483 - v479; // 0x4043b0
    v480 = v596;
    v478 = 0;
    v481 = v596;
    if (g65 != 0) {
        goto lab_0x403dd2;
    } else {
        goto lab_0x403dd9;
    }
  lab_0x404398:
    // 0x404398
    v479 = g68;
    v483 = v482;
    goto lab_0x40439f;
  lab_0x403d6c:
    // 0x403d6c
    function_404a70(g32 + -1 - g55 + g87 + (int64_t)g54);
    v418 = v417;
    v416 = v415;
    v420 = v419;
    v411 = v410;
    v414 = v413;
    v407 = v406;
    goto lab_0x403d94;
  lab_0x403e44:;
    int64_t v501 = v488;
    int64_t v502 = v487;
    if (*(char *)&g109 != 0) {
        // 0x4042bb
        v436 = v475;
        v437 = v474;
        v439 = v473;
        v440 = v470;
        if (g107 == 0) {
            goto lab_0x403b59;
        } else {
            goto lab_0x4042c8;
        }
    } else {
        // 0x403e51
        v436 = v475;
        v437 = v474;
        v439 = v473;
        v440 = v470;
        if (*(char *)&g108 == 0) {
            goto lab_0x403b59;
        } else {
            // 0x403e5e
            v503 = v475;
            v504 = v474;
            v505 = v473;
            v506 = v502;
            v507 = v501;
            v508 = v470;
            if (g107 != 0) {
                goto lab_0x4042c8;
            } else {
                goto lab_0x403e78_2;
            }
        }
    }
  lab_0x4042c8:;
    int64_t v509 = g59 == 0 ? 0 : -g68;
    function_404a70(g71 - (int64_t)g61 + (int64_t)g60 + v509);
    v510 = v475;
    v511 = v474;
    v512 = v473;
    v513 = v502;
    v514 = v501;
    v515 = v470;
    goto lab_0x40426f;
}
// Address range: 0x4045b0 - 0x4045db
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4045b0
    int64_t v1; // 0x4045b0
    __libc_start_main(0x402010, (int32_t)a4, (char **)&v1, (void (*)())0x41b3a0, (void (*)())0x41b400, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4045db - 0x4045fa
int64_t function_4045db(void) {
    // 0x4045db
    return &g47;
}
// Address range: 0x4045fa - 0x404631
int64_t function_4045fa(void) {
    // 0x4045fa
    return 0;
}
// Address range: 0x404631 - 0x404688
int64_t function_404631(void) {
    // 0x404631
    if (g52 != 0) {
        // 0x404687
        int64_t result; // 0x404631
        return result;
    }
    int64_t v1 = g53; // 0x404664
    int64_t result2; // 0x404676
    if (g53 >= ((int64_t)&g27 - (int64_t)&g26 >> 3) - 1) {
        // 0x404676
        result2 = function_4045db();
        g52 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g27 - (int64_t)&g26 >> 3) - 1) {
        // 0x404666
        v1++;
    }
    // 0x40465a
    g53 = v1;
    // 0x404676
    result2 = function_4045db();
    g52 = 1;
    return result2;
}
// Address range: 0x404688 - 0x40468d
int64_t function_404688(void) {
    // 0x404688
    return function_4045fa();
}
// Address range: 0x404690 - 0x40474b
int64_t function_404690(uint64_t a1, uint64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x404690
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x404694
    int64_t v3 = v1 - v2; // 0x404698
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v1) & (v2 ^ v1)) < 0 ? v1 : v2; // 0x40469e
    int32_t result2; // 0x404690
    if (g105 != 0) {
        if (v4 >= 1) {
            unsigned char v5 = *(char *)(a1 % 256 + (int64_t)&g97); // 0x404709
            unsigned char v6 = *(char *)(a2 % 256 + (int64_t)&g97); // 0x404710
            int32_t result = (int32_t)v5 - (int32_t)v6; // 0x404717
            if (result != 0) {
                // 0x40474a
                return result;
            }
            int64_t v7 = 0; // 0x404719
            v7++;
            while (v4 != v7) {
                unsigned char v8 = *(char *)(v7 + a1); // 0x404720
                unsigned char v9 = *(char *)(v7 + a2); // 0x404724
                unsigned char v10 = *(char *)((int64_t)v8 + (int64_t)&g97); // 0x404728
                unsigned char v11 = *(char *)((int64_t)v9 + (int64_t)&g97); // 0x40472f
                int32_t v12 = (int32_t)v10 - (int32_t)v11; // 0x404736
                result2 = v12;
                if (v12 != 0) {
                    // 0x40474a
                    return result2;
                }
                v7++;
            }
        }
    } else {
        if (v4 >= 1) {
            int32_t result3 = (int32_t)a1 % 256 - (int32_t)a2 % 256; // 0x4046bc
            if (result3 != 0) {
                // 0x40474a
                return result3;
            }
            int64_t v13 = 0; // 0x4046be
            v13++;
            while (v4 != v13) {
                unsigned char v14 = *(char *)(v13 + a2); // 0x4046d4
                int32_t v15 = (int32_t)*(char *)(v13 + a1) - (int32_t)v14; // 0x4046d8
                result2 = v15;
                if (v15 != 0) {
                    // 0x40474a
                    return result2;
                }
                v13++;
            }
        }
    }
    // 0x4046e5
    if (v1 <= v2) {
        // 0x4046ea
        return v3 < 0 != ((v3 ^ v1) & (v2 ^ v1)) < 0;
    }
    // 0x40474a
    return -1;
}
// Address range: 0x404750 - 0x404780
int64_t function_404750(int64_t a1) {
    // 0x404750
    error(1, *__errno_location(), dcgettext(NULL, "error in regular expression matcher", 5));
    return &g127;
}
// Address range: 0x404780 - 0x4049cf
int64_t function_404780(int64_t str) {
    uint64_t v1 = (int64_t)strlen((char *)str) + 1; // 0x40478c
    int64_t result = function_409160(v1); // 0x404790
    int64_t v2 = result; // 0x4047a0
    if ((char)v1 == 0) {
      lab_0x4047bf_2:
        // 0x4047bf
        *(char *)v2 = 0;
        return result;
    }
    int64_t v3 = result;
    int64_t v4 = str; // 0x404780
    int64_t v5 = v1 % 256;
    char * v6; // 0x404780
    int64_t v7; // 0x404780
    int64_t v8; // 0x404780
    int64_t v9; // 0x404780
    int64_t v10; // 0x404780
    int64_t v11; // 0x404780
    int64_t v12; // 0x404780
    int64_t v13; // 0x404780
    int64_t v14; // 0x404780
    int64_t v15; // 0x404780
    int64_t v16; // 0x4047fa
    char v17; // 0x4047a2
    while (true) {
      lab_0x4047a2:;
        int64_t v18 = v5; // 0x404780
        v9 = v3;
        v10 = v4;
        int64_t v19 = v10 + 1; // 0x4047a2
        v17 = *(char *)v19;
        while ((char)v18 != 92) {
            // 0x4047af
            *(char *)v9 = (char)v18;
            int64_t v20 = v9 + 1; // 0x4047b4
            v18 = v17;
            v2 = v20;
            if (v17 == 0) {
                // break (via goto) -> 0x4047bf
                goto lab_0x4047bf_2;
            }
            v9 = v20;
            v10 = v19;
            v19 = v10 + 1;
            v17 = *(char *)v19;
        }
        if (v17 == 102) {
            // 0x404988
            *(char *)v9 = 12;
            int64_t v21 = v10 + 2; // 0x40498c
            v15 = (int64_t)*(char *)v21;
            v4 = v21;
            v8 = v9 + 1;
            goto lab_0x40479e;
        } else {
            if (v17 > 102) {
                if (v17 == 116) {
                    // 0x4048f8
                    *(char *)v9 = 9;
                    int64_t v22 = v10 + 2; // 0x4048fc
                    v15 = (int64_t)*(char *)v22;
                    v4 = v22;
                    v8 = v9 + 1;
                    goto lab_0x40479e;
                } else {
                    if (v17 > 116) {
                        if (v17 == 118) {
                            // 0x404940
                            *(char *)v9 = 11;
                            int64_t v23 = v10 + 2; // 0x404944
                            v15 = (int64_t)*(char *)v23;
                            v4 = v23;
                            v8 = v9 + 1;
                            goto lab_0x40479e;
                        } else {
                            if (v17 != 120) {
                                goto lab_0x404958;
                            } else {
                                int16_t * v24 = *__ctype_b_loc(); // 0x40489d
                                int64_t v25 = v10 + 2;
                                int64_t v26 = 0;
                                int64_t v27 = 0; // 0x4048d2
                                char * v28 = (char *)v25;
                                unsigned char v29 = *v28; // 0x4048a0
                                int64_t v30 = v29; // 0x4048a0
                                while ((*(char *)((int64_t)v24 + 1 + 2 * (int64_t)v29) & 16) != 0) {
                                    int64_t v31; // 0x404780
                                    if (v29 < 103) {
                                        // 0x4048f0
                                        v31 = v30 + 0xffffffa9;
                                    } else {
                                        // 0x4048c1
                                        v31 = (v29 < 71 ? 0xffffffc9 : 0xffffffd0) + v30;
                                    }
                                    int64_t v32 = v27 + 1; // 0x4048d2
                                    int64_t v33 = v31 + 16 * v26 & 0xffffffff; // 0x4048d5
                                    int64_t v34 = v25 + 1; // 0x4048d8
                                    int64_t v35 = v32 & 0xffffffff; // 0x4048df
                                    int64_t v36 = v33; // 0x4048df
                                    int64_t v37 = v34; // 0x4048df
                                    if ((int32_t)v32 == 3) {
                                        // 0x4048e1
                                        v6 = (char *)v34;
                                        v14 = v33;
                                        v11 = v34;
                                        goto lab_0x4048e1_2;
                                    }
                                    v25 = v37;
                                    v26 = v36;
                                    v27 = v35;
                                    v28 = (char *)v25;
                                    v29 = *v28;
                                    v30 = v29;
                                }
                                // 0x4049b0
                                v6 = v28;
                                v14 = v26;
                                v11 = v25;
                                if (v27 != 0) {
                                    goto lab_0x4048e1_2;
                                } else {
                                    // 0x4049b8
                                    *(int16_t *)v9 = 0x785c;
                                    v15 = v30 & 0xffffffff;
                                    v4 = v25;
                                    v8 = v9 + 2;
                                    goto lab_0x40479e;
                                }
                            }
                        }
                    } else {
                        if (v17 == 110) {
                            // 0x404910
                            *(char *)v9 = 10;
                            int64_t v38 = v10 + 2; // 0x404914
                            v15 = (int64_t)*(char *)v38;
                            v4 = v38;
                            v8 = v9 + 1;
                            goto lab_0x40479e;
                        } else {
                            if (v17 != 114) {
                                goto lab_0x404958;
                            } else {
                                // 0x404862
                                *(char *)v9 = 13;
                                int64_t v39 = v10 + 2; // 0x404866
                                v15 = (int64_t)*(char *)v39;
                                v4 = v39;
                                v8 = v9 + 1;
                                goto lab_0x40479e;
                            }
                        }
                    }
                }
            } else {
                if (v17 == 97) {
                    // 0x404970
                    *(char *)v9 = 7;
                    int64_t v40 = v10 + 2; // 0x404974
                    v15 = (int64_t)*(char *)v40;
                    v4 = v40;
                    v8 = v9 + 1;
                    goto lab_0x40479e;
                } else {
                    if (v17 > 97) {
                        if (v17 == 98) {
                            // 0x404928
                            *(char *)v9 = 8;
                            int64_t v41 = v10 + 2; // 0x40492c
                            v15 = (int64_t)*(char *)v41;
                            v4 = v41;
                            v8 = v9 + 1;
                            goto lab_0x40479e;
                        } else {
                            // 0x404828
                            v13 = v19;
                            if (v17 == 99) {
                                goto lab_0x404830;
                            }
                            goto lab_0x404958;
                        }
                    } else {
                        // 0x4047e4
                        v2 = v9;
                        if (v17 == 0) {
                            // break -> 0x4047bf
                            break;
                        }
                        if (v17 != 48) {
                            goto lab_0x404958;
                        } else {
                            int64_t v42 = v10 + 5; // 0x4047f6
                            v12 = 0;
                            v7 = v10 + 2;
                            char v43 = *(char *)v7; // 0x4047fa
                            v16 = v43;
                            while ((v43 & -8) == 48) {
                                int64_t v44 = v7 + 1; // 0x40480e
                                if (v42 == v44) {
                                    // 0x4049a0
                                    int64_t v45; // 0x40480a
                                    int64_t v46 = v45; // 0x4049a0
                                    int64_t v47 = (int64_t)*(char *)v42; // 0x4049a0
                                    int64_t v48 = v42; // 0x4049a0
                                    goto lab_0x4049a4;
                                }
                                v12 = 8 * v12 + 0xffffffd0 + v16 & 0xffffffff;
                                v7 = v44;
                                v43 = *(char *)v7;
                                v16 = v43;
                            }
                            goto lab_0x4049a4;
                        }
                    }
                }
            }
        }
    }
  lab_0x4047bf_2:
    // 0x4047bf
    *(char *)v2 = 0;
    return result;
  lab_0x404830:;
    int64_t v49 = v13 + 1; // 0x404830
    v13 = v49;
    if (*(char *)v49 == 0) {
        // 0x404839
        *(char *)v9 = 0;
        return result;
    }
    goto lab_0x404830;
  lab_0x40479e:
    // 0x40479e
    v3 = v8;
    v5 = v15;
    v2 = v3;
    if ((char)v5 == 0) {
        // break -> 0x4047bf
        goto lab_0x4047bf_2;
    }
    goto lab_0x4047a2;
  lab_0x404958:
    // 0x404958
    *(char *)v9 = 92;
    int64_t v50 = v10 + 2; // 0x40495c
    *(char *)(v9 + 1) = v17;
    v15 = (int64_t)*(char *)v50;
    v4 = v50;
    v8 = v9 + 2;
    goto lab_0x40479e;
  lab_0x4049a4:
    // 0x4049a4
    *(char *)v9 = (char)v12;
    v15 = v16;
    v4 = v7;
    v8 = v9 + 1;
    goto lab_0x40479e;
  lab_0x4048e1_2:
    // 0x4048e1
    *(char *)v9 = (char)v14;
    v15 = (int64_t)*v6;
    v4 = v11;
    v8 = v9 + 1;
    goto lab_0x40479e;
}
// Address range: 0x4049d0 - 0x404a70
int64_t function_4049d0(int64_t * str) {
    int64_t v1 = (int64_t)str;
    int64_t v2 = v1 + 8; // 0x4049e3
    *(int64_t *)(v1 + 40) = v1 + 72;
    int64_t v3 = g105 == 0 ? 0 : (int64_t)&g97; // 0x4049f4
    *(int64_t *)v2 = 0;
    *(int64_t *)(v1 + 16) = 0;
    *(int64_t *)(v1 + 48) = v3;
    int32_t len = strlen((char *)str); // 0x404a0f
    if (function_418000(v1, (int64_t)len, v2) == 0) {
        // 0x404a27
        return function_418080(v2);
    }
    // 0x404a33
    function_408350(v1);
    error(1, (int32_t)"%s (for regexp %s)" ^ (int32_t)"%s (for regexp %s)", dcgettext(NULL, "%s (for regexp %s)", 5));
    return &g127;
}
// Address range: 0x404a70 - 0x404ab9
int64_t function_404a70(int64_t a1) {
    // 0x404a70
    if (a1 < 1) {
        // 0x404aa2
        int64_t result; // 0x404a70
        return result;
    }
    int64_t v1 = a1; // 0x404a73
    int64_t v2 = (int64_t)g48; // 0x404a80
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x404a87
    uint64_t v4 = *v3; // 0x404a87
    int64_t result2; // 0x404a70
    if (v4 >= *(int64_t *)(v2 + 48)) {
        // 0x404aa8
        result2 = __overflow(g48, 32);
    } else {
        // 0x404a91
        *v3 = v4 + 1;
        *(char *)v4 = 32;
        result2 = v4;
    }
    // 0x404a9c
    v1--;
    while (v1 != 0) {
        // 0x404a80
        v2 = (int64_t)g48;
        v3 = (int64_t *)(v2 + 40);
        v4 = *v3;
        if (v4 >= *(int64_t *)(v2 + 48)) {
            // 0x404aa8
            result2 = __overflow(g48, 32);
        } else {
            // 0x404a91
            *v3 = v4 + 1;
            *(char *)v4 = 32;
            result2 = v4;
        }
        // 0x404a9c
        v1--;
    }
    // 0x404aa2
    return result2;
}
// Address range: 0x404ac0 - 0x404ec4
int64_t function_404ac0(uint64_t a1, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x404ac0
    int64_t result; // 0x404ac0
    if (a2 <= a1) {
        // 0x404ba7
        return result;
    }
    int64_t v1 = a1; // 0x404ac3
    int64_t v2; // 0x404ac0
    int64_t v3; // 0x404ac0
    unsigned char v4; // 0x404b69
    while (true) {
      lab_0x404b69_2:
        // 0x404b69
        v3 = v1;
        v4 = *(char *)v3;
        g125 = v4;
        int64_t v5 = v4; // 0x404b69
        if (*(char *)(v5 + (int64_t)&g72) != 0) {
            // 0x404ae8
            if (*(char *)(v5 + (int64_t)&g9) != 0 == g106 == 3) {
                char v6 = *(char *)(v5 + (int64_t)&g10); // 0x404c20
                v2 = (int64_t)v6 & 0xffffffff;
                goto lab_0x404b60;
            } else {
                if (v4 == 92) {
                    // 0x404c60
                    v2 = fwrite_unlocked((int64_t *)"\\backslash{}", 1, 12, g48);
                    goto lab_0x404b60;
                } else {
                    if (v4 > 92) {
                        switch (v4) {
                            case 123: {
                                // 0x404c40
                                v2 = __printf_chk(1, "$\\%c$", v4);
                                goto lab_0x404b60;
                            }
                            case 125: {
                                // 0x404c40
                                v2 = __printf_chk(1, "$\\%c$", v4);
                                goto lab_0x404b60;
                            }
                            case 95: {
                                goto lab_0x404bbf;
                            }
                            default: {
                                goto lab_0x404bf7;
                            }
                        }
                    } else {
                        if (v4 != 34) {
                            if (v4 > 38) {
                                goto lab_0x404bf7;
                            } else {
                                goto lab_0x404bbf;
                            }
                        } else {
                            int64_t v7 = (int64_t)g48; // 0x404b19
                            int64_t * v8 = (int64_t *)(v7 + 40); // 0x404b20
                            uint64_t v9 = *v8; // 0x404b20
                            if (v9 >= *(int64_t *)(v7 + 48)) {
                                // 0x404df1
                                __overflow(g48, 34);
                            } else {
                                // 0x404b2e
                                *v8 = v9 + 1;
                                *(char *)v9 = 34;
                            }
                            int64_t v10 = (int64_t)g48; // 0x404b39
                            int64_t * v11 = (int64_t *)(v10 + 40); // 0x404b40
                            uint64_t v12 = *v11; // 0x404b40
                            if (v12 >= *(int64_t *)(v10 + 48)) {
                                // 0x404e00
                                v2 = __overflow(g48, 34);
                            } else {
                                // 0x404b4e
                                *v11 = v12 + 1;
                                *(char *)v12 = 34;
                                v2 = v12;
                            }
                            goto lab_0x404b60;
                        }
                    }
                }
            }
        } else {
            goto lab_0x404b7f;
        }
    }
    // 0x404ba7
    return result;
  lab_0x404b7f:;
    int64_t v13 = (int64_t)g48; // 0x404b7f
    int64_t * v14 = (int64_t *)(v13 + 40); // 0x404b86
    uint64_t v15 = *v14; // 0x404b86
    if (v15 >= *(int64_t *)(v13 + 48)) {
        // 0x404c80
        v2 = __overflow(g48, (int32_t)v4);
        goto lab_0x404b60;
    } else {
        int64_t v16 = v3 + 1; // 0x404b98
        *v14 = v15 + 1;
        *(char *)v15 = v4;
        result = v15;
        if (v16 == a2) {
            return result;
        }
        // 0x404b69
        v1 = v16;
        goto lab_0x404b69_2;
    }
  lab_0x404b60:;
    int64_t v17 = v3 + 1; // 0x404b60
    result = v2;
    if (v17 == a2) {
        return result;
    }
    // 0x404b69
    v1 = v17;
    goto lab_0x404b69_2;
  lab_0x404bbf:;
    int64_t v18 = (int64_t)g48; // 0x404bbf
    int64_t * v19 = (int64_t *)(v18 + 40); // 0x404bc6
    uint64_t v20 = *v19; // 0x404bc6
    if (v20 >= *(int64_t *)(v18 + 48)) {
        // 0x404e1e
        __overflow(g48, 92);
    } else {
        // 0x404bd4
        *v19 = v20 + 1;
        *(char *)v20 = 92;
    }
    goto lab_0x404b7f;
  lab_0x404bf7:;
    int64_t v21 = (int64_t)g48; // 0x404bf7
    int64_t * v22 = (int64_t *)(v21 + 40); // 0x404bfe
    uint64_t v23 = *v22; // 0x404bfe
    if (v23 >= *(int64_t *)(v21 + 48)) {
        // 0x404e0f
        v2 = __overflow(g48, 32);
    } else {
        // 0x404c0c
        *v22 = v23 + 1;
        *(char *)v23 = 32;
        v2 = v23;
    }
    goto lab_0x404b60;
}
// Address range: 0x404ed0 - 0x404ef7
int64_t function_404ed0(uint64_t a1, uint64_t a2) {
    int64_t result = function_404690(a1, a2); // 0x404ed7
    if ((int32_t)result != 0) {
        // 0x404eee
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x404ee6
    if (a1 >= a2) {
        // 0x404ee8
        result2 = a1 > a2;
    }
    // 0x404eee
    return result2;
}
// Address range: 0x404f00 - 0x404f6f
int64_t function_404f00(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = a3 - 1; // 0x404f00
    int64_t v2 = 0; // 0x404f04
    int64_t result = 0; // 0x404f04
    if (v1 < 0) {
      lab_0x404f52_2:
        // 0x404f52
        return result;
    }
    uint64_t v3 = (v2 + v1) / 2; // 0x404f33
    int32_t v4 = function_404690((int64_t)a1, 16 * v3 + a2); // 0x404f45
    while (v4 >= 0) {
        // 0x404f20
        result = 1;
        if (v4 == 0) {
            return result;
        }
        // 0x404f22
        result = 0;
        if (v3 >= v1) {
            return result;
        }
        v2 = v3 + 1;
        v3 = (v2 + v1) / 2;
        v4 = function_404690((int64_t)a1, 16 * v3 + a2);
    }
    // 0x404f49
    while (v2 < v3) {
        uint64_t v5 = v3 - 1;
        v3 = (v2 + v5) / 2;
        v4 = function_404690((int64_t)a1, 16 * v3 + a2);
        while (v4 >= 0) {
            // 0x404f20
            result = 1;
            if (v4 == 0) {
                return result;
            }
            // 0x404f22
            result = 0;
            if (v3 >= v5) {
                return result;
            }
            v2 = v3 + 1;
            v3 = (v2 + v5) / 2;
            v4 = function_404690((int64_t)a1, 16 * v3 + a2);
        }
    }
    // 0x404f52
    return 0;
}
// Address range: 0x404f70 - 0x405022
int64_t function_404f70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404f70
    int64_t v1; // 0x404f70
    int64_t v2; // bp-32, 0x404f70
    int64_t result; // 0x404fa5
    if (a1 == 0) {
        goto lab_0x404f8b;
    } else {
        if ((char)a1 != 0) {
            // 0x404fc0
            bool v3; // 0x404f70
            int64_t v4 = v3 ? -1 : 1; // 0x404fcd
            int64_t v5 = (int64_t)"-"; // 0x404f70
            int64_t v6 = a1; // 0x404f70
            int64_t v7 = 2; // 0x404fcd
            unsigned char v8 = *(char *)v6; // 0x404fcd
            char v9 = *(char *)v5; // 0x404fcd
            char v10 = v9; // 0x404fcd
            bool v11 = false; // 0x404fcd
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
            if ((v8 >= v12 && !v11) == v8 < v12) {
                goto lab_0x404f8b;
            } else {
                int64_t v13 = function_4085a0(a1, &v2); // 0x404fe0
                *(int64_t *)a2 = v13;
                v1 = a1;
                if (v13 != 0) {
                    // 0x404fa5
                    result = v2 + v13;
                    *(int64_t *)a3 = result;
                    return result;
                }
                goto lab_0x404fee;
            }
        } else {
            goto lab_0x404f8b;
        }
    }
  lab_0x404f8b:;
    int64_t v14 = function_408370((int64_t)g49, &v2); // 0x404f97
    *(int64_t *)a2 = v14;
    if (v14 != 0) {
        // 0x404fa5
        result = v2 + v14;
        *(int64_t *)a3 = result;
        return result;
    }
    // 0x40501b
    v1 = (int64_t)"-";
    goto lab_0x404fee;
  lab_0x404fee:
    // 0x404fee
    error(1, *__errno_location(), "%s", (char *)function_4081d0(0, 3, v1));
    // 0x40501b
    v1 = (int64_t)"-";
    goto lab_0x404fee;
}
// Address range: 0x405030 - 0x40511c
int64_t function_405030(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = v1 + 8; // 0x405038
    int64_t v3; // bp-48, 0x405030
    char * v4; // bp-56, 0x405030
    function_404f70(a1, (int64_t)&v4, (int64_t)&v3);
    int64_t v5 = (int64_t)v4; // 0x40504f
    *a2 = 0;
    int64_t * v6 = (int64_t *)v2; // 0x405064
    *v6 = 0;
    int64_t * v7 = (int64_t *)(v1 + 16); // 0x40506d
    *v7 = 0;
    uint64_t v8 = v3; // 0x405079
    int64_t v9 = v5; // 0x405079
    int64_t v10 = 0; // 0x405079
    int64_t v11 = 0; // 0x405079
    if (v3 <= v5) {
        // 0x4050cc
        qsort((int64_t *)0, (int32_t)0, 16, (int32_t (*)(int64_t *, int64_t *))0x404690);
        return &g127;
    }
    int64_t v12; // 0x405030
    int64_t v13; // 0x405030
    int64_t v14; // 0x405030
    int64_t v15; // 0x405030
    int64_t v16; // 0x405030
    int64_t v17; // 0x405030
    int64_t v18; // 0x405030
    int64_t v19; // 0x405030
    int64_t v20; // 0x405030
    int64_t v21; // 0x405030
    int64_t v22; // 0x405030
    int64_t v23; // 0x405030
    int64_t v24; // 0x405030
    int64_t v25; // 0x405030
    while (true) {
      lab_0x405080:
        // 0x405080
        v17 = v16;
        v19 = v11;
        int64_t v26 = v10;
        v12 = v9;
        int64_t v27 = v8;
        int64_t v28 = v12;
        while (*(char *)v28 != 10) {
            int64_t v29 = v28 + 1; // 0x40508d
            int64_t v30 = v29; // 0x405094
            if (v29 == v27) {
                // 0x405096
                v22 = v27;
                v13 = v29;
                v24 = v26;
                v20 = v19;
                v15 = v29;
                if (*v6 == v26) {
                    goto lab_0x4050fc;
                } else {
                    goto lab_0x40509d;
                }
            }
            v28 = v30;
        }
        // 0x4050f0
        v23 = v27;
        v14 = v28;
        v25 = v26;
        v21 = v19;
        v18 = v17;
        if (v12 >= v28) {
            goto lab_0x4050bd;
        } else {
            // 0x4050f5
            v22 = v27;
            v13 = v28;
            v24 = v26;
            v20 = v19;
            v15 = v28;
            if (*v6 != v26) {
                goto lab_0x40509d;
            } else {
                goto lab_0x4050fc;
            }
        }
    }
  lab_0x4050cc:;
    // 0x4050cc
    int64_t base; // 0x405030
    int64_t nmemb; // 0x405030
    qsort((int64_t *)base, (int32_t)nmemb, 16, (int32_t (*)(int64_t *, int64_t *))0x404690);
    return &g127;
  lab_0x4050bd:
    // 0x4050bd
    v11 = v21;
    v10 = v25;
    uint64_t v31 = v14;
    v8 = v23;
    v9 = v31 + (int64_t)(v31 < v8);
    v16 = v18;
    nmemb = v10;
    base = v11;
    if (v9 >= v8) {
        // break -> 0x4050cc
        goto lab_0x4050cc;
    }
    goto lab_0x405080;
  lab_0x40509d:;
    int64_t v32 = v24 + 1; // 0x4050a3
    int64_t v33 = 16 * v24 + v20; // 0x4050ae
    *(int64_t *)v33 = v12;
    *(int64_t *)(v33 + 8) = v13 - v12;
    *v7 = v32;
    v23 = v22;
    v14 = v13;
    v25 = v32;
    v21 = v20;
    v18 = v33;
    goto lab_0x4050bd;
  lab_0x4050fc:;
    // 0x4050fc
    int64_t v34; // 0x405030
    int64_t v35 = function_409230(v19, v2, 16, v17, v34); // 0x405104
    *a2 = v35;
    v22 = v3;
    v13 = v15;
    v24 = *v7;
    v20 = v35;
    goto lab_0x40509d;
}
// Address range: 0x405120 - 0x405505
int64_t function_405120(int64_t a1) {
    int32_t status = a1; // 0x405136
    if (status != 0) {
        // 0x40513a
        __fprintf_chk(g51, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40515f
        exit(status);
        // UNREACHABLE
    }
    // 0x405166
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [INPUT]...   (without -G)\n  or:  %s -G [OPTION]... [INPUT [OUTPUT]]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Output a permuted index, including context, of the words in the input files.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -A, --auto-reference           output automatically generated references\n  -G, --traditional              behave more like System V 'ptx'\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -F, --flag-truncation=STRING   use STRING for flagging line truncations.\n                                 The default is '/'\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -M, --macro-name=STRING        macro name to use instead of 'xx'\n  -O, --format=roff              generate output as roff directives\n  -R, --right-side-refs          put references at right, not counted in -w\n  -S, --sentence-regexp=REGEXP   for end of lines or end of sentences\n  -T, --format=tex               generate output as TeX directives\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -W, --word-regexp=REGEXP       use REGEXP to match each keyword\n  -b, --break-file=FILE          word break characters in this FILE\n  -f, --ignore-case              fold lower case to upper case for sorting\n  -g, --gap-size=NUMBER          gap size in columns between output fields\n  -i, --ignore-file=FILE         read ignore word list from FILE\n  -o, --only-file=FILE           read only word list from this FILE\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "  -r, --references               first field of each line is a reference\n  -t, --typeset-mode               - not implemented -\n  -w, --width=NUMBER             output width in columns, reference excluded\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g48);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g48);
    int64_t v1 = &g1; // bp-136, 0x4052e5
    bool v2; // 0x405120
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x405368
    int64_t v6 = *(int64_t *)v5; // 0x40536c
    int64_t v7 = 4; // 0x405372
    while (v6 != 0) {
        int64_t v8 = (int64_t)"ptx";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x40537e
        char v11 = *(char *)v9; // 0x40537e
        char v12 = v11; // 0x40537e
        bool v13 = false; // 0x40537e
        while (v10 == v11) {
            // 0x405374
            v7--;
            int64_t v14 = v9 + v3; // 0x40537e
            int64_t v15 = v8 + v3; // 0x40537e
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
            // break -> 0x40538a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x40538a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x40549c;
        } else {
            // 0x405486
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4054db
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4053ec;
            } else {
                goto lab_0x40549c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4053ec;
        } else {
            // 0x4053d2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4054db
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4053ec;
            } else {
                goto lab_0x4053ec;
            }
        }
    }
  lab_0x40549c:
    // 0x40549c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40542c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40515f
    exit(status);
    // UNREACHABLE
  lab_0x4053ec:
    // 0x4053ec
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40542c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40515f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x405510 - 0x40551a
int64_t function_405510(void) {
    // 0x405510
    return function_405120(1);
}
// Address range: 0x405520 - 0x405636
int64_t function_405520(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x405541
    int32_t len = strlen(str); // 0x405541
    if (a2 == 0) {
        // 0x40560d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x4055a7
    int64_t v4 = a3; // 0x405520
    int64_t v5 = a2; // 0x4055ae
    int64_t str4; // 0x405520
    int64_t v6; // 0x405520
    int32_t v7; // 0x405520
    int32_t v8; // 0x405520
    int32_t v9; // 0x405520
    int64_t v10; // 0x405520
    int64_t result; // 0x405520
    int32_t v11; // 0x4055a3
    char * str2; // 0x4055c2
    while (true) {
        // 0x4055b7
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x4055cb
            result = v6;
            if (len == strlen(str2)) {
                // 0x40560d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x4055df
                break;
            }
            // 0x405570
            v7 = 1;
            if (a3 != 0) {
                // 0x40557e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x4055a7
        v2 = v7;
        v3 = v6 + 1;
        v5 = *(int64_t *)(8 * v3 + a2);
        v4 = str4 + n;
        v10 = v1;
        v9 = v2;
        if (v5 == 0) {
            return (char)v9 == 0 ? v10 : -2;
        }
    }
    int64_t v12 = v6 + 1; // 0x4055e3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x4055ea
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x4055b7
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x4055b7
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x4055cb
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40560d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x4055df
                    break;
                }
                // 0x405570
                v7 = 1;
                if (a3 != 0) {
                    // 0x40557e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x4055a7
            v2 = v7;
            v3 = v6 + 1;
            v5 = *(int64_t *)(8 * v3 + a2);
            v4 = str4 + n;
            v10 = v1;
            v9 = v2;
            if (v5 == 0) {
                return (char)v9 == 0 ? v10 : -2;
            }
        }
        // 0x4055df
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x4055f8:
    // 0x40560d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x405640 - 0x4056b1
int64_t function_405640(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x405640
    if (a3 == -1) {
        // 0x4056a0
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x405655
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x405664
    function_408330(1, a1);
    function_408020(0, 8, a2);
    error(0, 0, format);
    return &g127;
}
// Address range: 0x4056c0 - 0x4057d8
int64_t function_4056c0(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x4056ed
    fputs_unlocked(v1, g51);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x405760
        int64_t v5; // 0x405767
        int64_t v6; // 0x405787
        while (v3 != 0) {
            // 0x40574b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x405710
                break;
            }
            // 0x40575d
            v4 = v3 + 1;
            v5 = function_408350(v2);
            __fprintf_chk(g51, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x405790
                goto lab_0x405790;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x405713
        int64_t v8 = function_408350(v2); // 0x40571d
        __fprintf_chk(g51, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40573d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40574b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x405710
                    break;
                }
                // 0x40575d
                v4 = v3 + 1;
                v5 = function_408350(v2);
                __fprintf_chk(g51, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x405790
                    goto lab_0x405790;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x405710
            v7 = v3 + 1;
            v8 = function_408350(v2);
            __fprintf_chk(g51, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x405790:;
    int64_t v10 = (int64_t)g51; // 0x405790
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x405797
    uint64_t result = *v11; // 0x405797
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x4057c0
        return __overflow(g51, 10);
    }
    // 0x4057a1
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x4057e0 - 0x405850
int64_t function_4057e0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_405520(a2, v2, v1, a5); // 0x40580c
    int64_t result = v3; // 0x405814
    if (v3 < 0) {
        // 0x405828
        function_405640((int64_t)a1, a2, v3);
        function_4056c0(v2, v1, a5);
        result = -1;
    }
    // 0x405816
    return result;
}
// Address range: 0x405850 - 0x40589d
int64_t function_405850(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x405850
    if (result == 0) {
        // 0x405891
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x405888
    int32_t n = a4; // 0x405888
    int64_t v1 = result; // 0x40588f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x405891
        return result;
    }
    int64_t str3 = str2; // 0x40588f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x405870
    int64_t result2 = 0; // 0x40587d
    while (v2 != 0) {
        // 0x40587f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x405891
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x405891
    return result2;
}
// Address range: 0x4058a0 - 0x4058a8
int64_t function_4058a0(int64_t a1) {
    // 0x4058a0
    g111 = a1;
    int64_t result; // 0x4058a0
    return result;
}
// Address range: 0x4058b0 - 0x4058b8
int64_t function_4058b0(int64_t a1) {
    // 0x4058b0
    g110 = a1;
    int64_t result; // 0x4058b0
    return result;
}
// Address range: 0x4058c0 - 0x40595e
int64_t function_4058c0(void) {
    // 0x4058c0
    int32_t * err_num; // 0x4058d6
    if ((int32_t)function_418a80((int64_t)g48) == 0) {
        goto lab_0x4058ec;
    } else {
        // 0x4058d6
        err_num = __errno_location();
        if (g110 == 0) {
            goto lab_0x405903;
        } else {
            // 0x4058e7
            if (*err_num != 32) {
                goto lab_0x405903;
            } else {
                goto lab_0x4058ec;
            }
        }
    }
  lab_0x4058ec:;
    int64_t result = function_418a80((int64_t)g51); // 0x4058f3
    if ((int32_t)result == 0) {
        // 0x4058fc
        return result;
    }
    // 0x40593e
    _exit(g37);
    // UNREACHABLE
  lab_0x405903:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40590f
    if (g111 == 0) {
        // 0x405949
        error(0, *err_num, "%s", v1);
    } else {
        // 0x405923
        error(0, *err_num, "%s: %s", (char *)function_4081a0((int64_t)g111), v1);
    }
    // 0x40593e
    _exit(g37);
    // UNREACHABLE
}
// Address range: 0x405960 - 0x4059ab
int64_t function_405960(int32_t a1, int64_t a2) {
    int32_t fd = open("/dev/null", O_RDONLY); // 0x405976
    if (fd == a1) {
        // 0x405985
        return 1;
    }
    // 0x40597f
    if (fd < 0) {
        // 0x405985
        return 0;
    }
    // 0x405990
    close(fd);
    *__errno_location() = 9;
    return 0;
}
// Address range: 0x4059b0 - 0x405b5f
int64_t function_4059b0(int64_t a1, int64_t * a2, int64_t stream) {
    int32_t v1 = fileno((struct _IO_FILE *)stream); // 0x4059cc
    int32_t * v2 = __errno_location(); // 0x4059d3
    int64_t v3 = 0; // 0x4059b0
    int64_t v4 = 0; // 0x4059b0
    int64_t v5 = 0; // 0x4059b0
    int64_t v6 = 0; // 0x4059b0
    int64_t v7 = 0; // 0x4059b0
    switch (v1) {
        case 1: {
            goto lab_0x405a20;
        }
        case 2: {
            goto lab_0x405a0a;
        }
        case 0: {
            goto lab_0x405a5c;
        }
        default: {
            // 0x4059f5
            v3 = dup2(2, 2) != 2;
            goto lab_0x405a0a;
        }
    }
  lab_0x405a20:;
    // 0x405a20
    int64_t v8; // 0x4059b0
    int64_t v9; // 0x4059b0
    int64_t v10; // 0x4059b0
    int64_t v11; // 0x4059b0
    int64_t v12; // 0x4059b0
    int64_t v13; // 0x4059b0
    int64_t v14; // 0x405a34
    if (dup2(0, 0) == 0) {
        // 0x405aa0
        v10 = 0;
        v8 = 0;
        v14 = 0;
        if (v4 == 0) {
            goto lab_0x405a44;
        } else {
            goto lab_0x405aa8;
        }
    } else {
        int64_t v15 = function_405960(0, 0); // 0x405a2f
        v12 = v3;
        v11 = v4;
        v9 = 1;
        v13 = 0;
        if ((char)v15 == 0) {
            goto lab_0x405a6f;
        } else {
            // 0x405a3f
            v14 = v15 & 0xffffffff;
            v10 = v4;
            v8 = v14;
            if (v4 != 0) {
                goto lab_0x405aa8;
            } else {
                goto lab_0x405a44;
            }
        }
    }
  lab_0x405a0a:
    // 0x405a0a
    v4 = dup2(1, 1) != 1;
    goto lab_0x405a20;
  lab_0x405a5c:
    // 0x405a5c
    v12 = v5;
    v11 = v6;
    v9 = v7;
    v13 = function_409c80(a1, (int64_t)a2);
    goto lab_0x405a6f;
  lab_0x405a6f:;
    int64_t v16 = (int64_t)*v2; // 0x405a6f
    int64_t v17 = v11; // 0x405a74
    int64_t v18 = v13; // 0x405a74
    int64_t v19 = v9; // 0x405a74
    int64_t v20 = v16; // 0x405a74
    int64_t v21 = v11; // 0x405a74
    int64_t v22 = v13; // 0x405a74
    int64_t v23 = v9; // 0x405a74
    int64_t v24 = v16; // 0x405a74
    if ((char)v12 != 0) {
        goto lab_0x405b16;
    } else {
        goto lab_0x405a7a;
    }
  lab_0x405a44:
    // 0x405a44
    v5 = v3;
    v6 = v10;
    v7 = v8;
    if ((char)v3 == 0) {
        goto lab_0x405a5c;
    } else {
        int64_t v25 = function_405960(2, 0); // 0x405a4d
        v5 = v25 & 0xffffffff;
        v6 = v10;
        v7 = v8;
        if ((char)v25 == 0) {
            // 0x405b10
            v21 = v10;
            v22 = 0;
            v23 = v8;
            v24 = (int64_t)*v2;
            goto lab_0x405b16;
        } else {
            goto lab_0x405a5c;
        }
    }
  lab_0x405aa8:;
    int64_t v26 = function_405960(1, 0); // 0x405aad
    v10 = v26 & 0xffffffff;
    v8 = v14;
    int64_t v27; // 0x4059b0
    int64_t v28; // 0x4059b0
    int64_t v29; // 0x4059b0
    if ((char)v26 != 0) {
        goto lab_0x405a44;
    } else {
        int64_t v30 = (int64_t)*v2; // 0x405ab8
        v27 = 0;
        v28 = v14;
        v29 = v30;
        if ((char)v3 != 0) {
            // 0x405b50
            close(2);
            v27 = 0;
            v28 = v14;
            v29 = v30;
        }
        goto lab_0x405ad0;
    }
  lab_0x405b16:
    // 0x405b16
    close(2);
    v17 = v21;
    v18 = v22;
    v19 = v23;
    v20 = v24;
    goto lab_0x405a7a;
  lab_0x405a7a:
    // 0x405a7a
    v27 = v18;
    v28 = v19;
    v29 = v20;
    int64_t result; // 0x4059b0
    int64_t v31; // 0x4059b0
    int64_t v32; // 0x4059b0
    int64_t v33; // 0x4059b0
    if ((char)v17 != 0) {
        goto lab_0x405ad0;
    } else {
        // 0x405a7f
        result = v18;
        v32 = v20;
        v31 = v18;
        v33 = v20;
        if ((char)v19 != 0) {
            goto lab_0x405adf;
        } else {
            goto lab_0x405a84;
        }
    }
  lab_0x405ad0:
    // 0x405ad0
    close(1);
    result = v27;
    v32 = v29;
    v31 = v27;
    v33 = v29;
    if ((char)v28 == 0) {
        goto lab_0x405a84;
    } else {
        goto lab_0x405adf;
    }
  lab_0x405a84:;
    int64_t result2 = 0; // 0x405a87
    int64_t v34 = v32; // 0x405a87
    if (result != 0) {
        // 0x405a89
        return result;
    }
    goto lab_0x405aeb;
  lab_0x405adf:
    // 0x405adf
    close(0);
    result2 = v31;
    v34 = v33;
    if (v31 != 0) {
        // 0x405a89
        int64_t v35; // 0x4059b0
        int64_t result3 = v35;
        return result3;
    }
    goto lab_0x405aeb;
  lab_0x405aeb:
    // 0x405aeb
    *v2 = (int32_t)v34;
    // 0x405a89
    return result2;
}
// Address range: 0x405b60 - 0x405bf9
int64_t function_405b60(int64_t str) {
    // 0x405b60
    if (str == 0) {
        // 0x405bd9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g51);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x405b6e
    int64_t result = (int64_t)found_char_pos; // 0x405b6e
    if (found_char_pos == NULL) {
        // 0x405bc9
        g112 = str;
        g50 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x405b78
    if (v1 - str < 7) {
        // 0x405bc9
        g112 = str;
        g50 = str;
        return result;
    }
    // 0x405b88
    bool v2; // 0x405b60
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x405b60
    int64_t v5 = result - 6; // 0x405b60
    int64_t v6 = 7; // 0x405b96
    unsigned char v7 = *(char *)v5; // 0x405b96
    char v8 = *(char *)v4; // 0x405b96
    char v9 = v8; // 0x405b96
    bool v10 = false; // 0x405b96
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
    int64_t v12 = (int64_t)"lt-"; // 0x405ba0
    int64_t v13 = v1; // 0x405ba0
    int64_t v14 = 3; // 0x405ba0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x405bc9
        g112 = str;
        g50 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x405bb2
    char v16 = *(char *)v12; // 0x405bb2
    char v17 = v16; // 0x405bb2
    bool v18 = false; // 0x405bb2
    while (v15 == v16) {
        // 0x405ba2
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
    int64_t v20 = v1; // 0x405bbc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x405bbe
        v20 = result + 4;
        g47 = v20;
    }
    // 0x405bc9
    g112 = v20;
    g50 = v20;
    return result;
}
// Address range: 0x405c00 - 0x406544
int64_t function_405c00(void) {
    // 0x405c00
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    int64_t v1; // 0x405c00
    int64_t v2 = function_408620((int64_t)"lib/mbuiter.h", 2, 179, (int64_t)"mbuiter_multi_next", v1, v1, v1); // 0x405c3c
    char * str = (char *)v2; // 0x405c4b
    int64_t v3 = (int64_t)"iter->cur.wc == 0"; // 0x406121
    int64_t v4 = 179; // 0x4062c2
    int64_t v5 = (int64_t)"mbuiter_multi_next";
    char * v6; // 0x405c00
    char * str3; // 0x405fa3
    int64_t v7; // 0x405c00
    int64_t v8; // 0x405c00
    int64_t wc; // 0x405c00
    int64_t v9; // 0x405c00
    int64_t v10; // 0x405c00
    int64_t v11; // 0x405c00
    int64_t v12; // 0x405c00
    int32_t wc2; // 0x405c00
    int64_t v13; // 0x405c00
    int64_t v14; // 0x405c00
    int64_t v15; // 0x405c00
    int64_t len3; // 0x405c00
    int64_t ps2; // bp-124, 0x405c00
    char v16; // 0x405c00
    char v17; // 0x405c00
    char v18; // 0x405c00
    int32_t v19; // bp-156, 0x405c00
    char v20; // 0x405c00
    int64_t v21; // 0x405c00
    char * str5; // 0x405c00
    int64_t v22; // 0x405c00
    int64_t v23; // 0x405c00
    char * str4; // 0x405c00
    int64_t v24; // 0x405c00
    int64_t v25; // 0x405c00
    int64_t ps; // bp-188, 0x405c00
    char v26; // 0x405c00
    char v27; // 0x405c00
    char v28; // 0x405c00
    char v29; // 0x405c00
    char v30; // 0x405c00
    int32_t v31; // bp-92, 0x405c00
    int64_t v32; // 0x405c00
    int32_t len; // 0x405c7a
    uint64_t v33; // 0x405c5d
    while (true) {
      lab_0x405c55_2:;
        int64_t v34 = v9;
        v13 = v4;
        v12 = v3;
        uint64_t v35; // 0x405c00
        while (true) {
          lab_0x405c55:
            // 0x405c55
            v35 = v12;
            int64_t v36 = v13;
            v33 = function_419cf0(v35, v2, v36, v5, v34);
            v7 = 0;
            if (v33 == 0) {
                // break (via goto) -> 0x405ccc
                goto lab_0x405ccc_8;
            }
            // 0x405c6a
            if (__ctype_get_mb_cur_max() >= 2) {
                // break -> 0x405cf0
                break;
            }
            // 0x405c75
            len = strlen(str);
            v14 = v36;
            if (v35 >= v33) {
                goto lab_0x405c9b;
            } else {
                int16_t ** v37 = __ctype_b_loc(); // 0x405c89
                int64_t v38 = (int64_t)*(char *)(v33 - 1); // 0x405c8e
                v14 = v38;
                v15 = v38;
                if ((*(char *)(2 * v38 + (int64_t)*v37) & 8) != 0) {
                    goto lab_0x405cba;
                } else {
                    goto lab_0x405c9b;
                }
            }
        }
        // 0x405cf0
        ps = 0;
        v27 = 0;
        v22 = v35;
        int64_t v39 = 1; // 0x405d10
        if (v35 < v33) {
            while (true) {
              lab_0x405d88:
                // 0x405d88
                v23 = v22;
                str5 = (char *)v23;
                v28 = v27;
                if (v27 == 0) {
                    unsigned char v40 = *str5; // 0x405d25
                    int32_t v41 = *(int32_t *)((int64_t)(4 * v40 / 32) + (int64_t)&g24); // 0x405d30
                    if ((1 << (int32_t)(v40 % 32) & v41) == 0) {
                        int32_t v42 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405e23
                        v28 = 1;
                        if (v42 == 0) {
                            // 0x406469
                            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                            // 0x406482
                            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                            goto lab_0x40649b_3;
                        }
                        goto lab_0x405d8f;
                    } else {
                        // 0x405d41
                        v19 = v40;
                        v26 = 0;
                        v21 = 1;
                        v8 = v40;
                        goto lab_0x405d5d;
                    }
                } else {
                    goto lab_0x405d8f;
                }
            }
          lab_0x405e98:
            // 0x405e98
            v39 = 1;
            if (v20 != 0) {
                // 0x405ea0
                v39 = v5 & -256 | (int64_t)(iswalnum((int32_t)wc) == 0);
            }
        }
        // 0x405eae
        v32 = v39;
        ps = 0;
        ps2 = 0;
        v6 = str;
        v29 = 0;
        v17 = 0;
        v10 = v34;
        v24 = v33;
        while (true) {
          lab_0x405fb2:
            // 0x405fb2
            v25 = v24;
            v11 = v10;
            v30 = v29;
            str3 = v6;
            str4 = (char *)v25;
            v18 = v17;
            if (v17 == 0) {
                unsigned char v43 = *str3; // 0x405ef5
                int32_t v44 = *(int32_t *)((int64_t)(4 * v43 / 32) + (int64_t)&g24); // 0x405f00
                if ((1 << (int32_t)(v43 % 32) & v44) == 0) {
                    int32_t v45 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x4061f3
                    v18 = 1;
                    if (v45 == 0) {
                        // 0x406469
                        __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                        // 0x406482
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        goto lab_0x40649b_3;
                    }
                    goto lab_0x405fbd;
                } else {
                    // 0x405f11
                    v31 = v43;
                    v16 = 0;
                    len3 = 1;
                    if (v43 == 0) {
                        // break -> 0x406056
                        break;
                    }
                    goto lab_0x405f42;
                }
            } else {
                goto lab_0x405fbd;
            }
        }
        if (v30 != 0) {
            goto lab_0x4062b2;
        } else {
            unsigned char v46 = *str4; // 0x406066
            int32_t v47 = *(int32_t *)((int64_t)(4 * v46 / 32) + (int64_t)&g24); // 0x406071
            if ((1 << (int32_t)(v46 % 32) & v47) == 0) {
                // 0x40629b
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
                    // 0x406469
                    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                    // 0x406482
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40649b_3;
                }
                goto lab_0x4062b2;
            } else {
                int32_t v48 = v46; // 0x40608b
                v19 = v48;
                wc2 = v48;
                goto lab_0x40609c;
            }
        }
    }
  lab_0x405ccc_8:
    // 0x405ccc
    free((int64_t *)v2);
    return v7 & 0xffffffff;
  lab_0x40649b_3:
    // 0x40649b
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    char * str2 = dcgettext((char *)((int32_t)"iter->cur.wc == 0" ^ (int32_t)"iter->cur.wc == 0"), "iter->cur.wc == 0", 5); // 0x4064d1
    int64_t result2 = (int64_t)str2; // 0x4064d1
    if (str2 != "iter->cur.wc == 0" == (char)result2 == 0) {
        int32_t len2 = strlen(str2); // 0x4064fb
        int64_t result = function_409160((int64_t)len2 + 4 + (int64_t)strlen("iter->cur.wc == 0")); // 0x406510
        __sprintf_chk((char *)result, 1, -1, "%s (%s)", str2, "iter->cur.wc == 0");
        return result;
    }
    // 0x4064ed
    return result2;
  lab_0x405fbd:;
    char v49 = v18;
    int64_t v50 = (int64_t)str3; // 0x405fc2
    int64_t v51 = function_4085c0(v50, (int64_t)__ctype_get_mb_cur_max()); // 0x405fcd
    int64_t v52 = function_40ab50((int64_t *)&v31, v50, v51); // 0x405fde
    v16 = v49;
    len3 = 1;
    switch (v52) {
        case -1: {
            goto lab_0x405f42;
        }
        case -2: {
            // 0x406248
            v16 = v49;
            len3 = strlen(str3);
            goto lab_0x405f42;
        }
        default: {
            // 0x405ffc
            if (v52 == 0) {
                char v53 = *str3; // 0x40600f
                if (v53 != 0) {
                    // 0x406482
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40649b_3;
                }
                int32_t v54 = v31; // 0x406018
                if (v54 != 0) {
                    goto lab_0x40649b_3;
                }
            }
            int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x40602c
            v16 = v55 == 0 ? v49 : 0;
            len3 = v52;
            if (v31 == 0) {
                // break -> 0x406056
                break;
            }
            goto lab_0x405f42;
        }
    }
  lab_0x405f42:;
    int64_t v56 = len3;
    char v57 = v16;
    char v58 = v30; // 0x405f47
    int32_t v59; // 0x405c00
    int64_t v60; // 0x405c00
    int64_t v61; // 0x405c00
    char v62; // 0x405c00
    if (v30 != 0) {
        goto lab_0x406147;
    } else {
        unsigned char v63 = *str4; // 0x405f52
        int32_t v64 = *(int32_t *)((int64_t)(4 * v63 / 32) + (int64_t)&g24); // 0x405f5d
        if ((1 << (int32_t)(v63 % 32) & v64) == 0) {
            int32_t v65 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406135
            v58 = 1;
            if (v65 == 0) {
                // 0x406469
                __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
                // 0x406482
                __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                goto lab_0x40649b_3;
            }
            goto lab_0x406147;
        } else {
            int32_t v66 = v63; // 0x405f7f
            v19 = v66;
            v59 = v66;
            v62 = v30;
            v61 = 1;
            v60 = v11;
            goto lab_0x405f88;
        }
    }
  lab_0x406147:;
    char v67 = v58;
    int64_t v68 = function_4085c0(v25, (int64_t)__ctype_get_mb_cur_max()); // 0x406157
    int64_t v69 = function_40ab50((int64_t *)&v19, v25, v68); // 0x40616a
    char v70 = v67; // 0x405c00
    int64_t len4 = 1; // 0x405c00
    int64_t v71 = v11; // 0x405c00
    switch (v69) {
        case -1: {
            goto lab_0x405f94;
        }
        case -2: {
            // 0x406270
            v70 = v67;
            len4 = strlen(str4);
            v71 = v11;
            goto lab_0x405f94;
        }
        default: {
            int64_t v72 = v69; // 0x40618b
            int64_t v73 = v11; // 0x40618b
            if (v69 == 0) {
                // 0x40618d
                if (*str4 != 0) {
                    // 0x406482
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40649b_3;
                }
                // 0x4061a4
                v72 = 1;
                v73 = v19;
                if (v19 != 0) {
                    goto lab_0x40649b_3;
                }
            }
            int32_t v74 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4061bc
            v59 = v19;
            v62 = v74 == 0 ? v67 : 0;
            v61 = v72;
            v60 = v73;
            goto lab_0x405f88;
        }
    }
  lab_0x405f94:
    // 0x405f94
    v6 = (char *)(v56 + (int64_t)str3);
    v29 = v70;
    v17 = v57;
    v10 = v71;
    v24 = len4 + v25;
    goto lab_0x405fb2;
  lab_0x405f88:
    // 0x405f88
    v70 = v62;
    len4 = v61;
    v71 = v60;
    if (v59 == 0) {
        abort();
        // UNREACHABLE
    }
    goto lab_0x405f94;
  lab_0x405d8f:;
    char v75 = v28;
    int64_t v76 = function_4085c0(v23, (int64_t)__ctype_get_mb_cur_max()); // 0x405d9f
    int64_t v77 = function_40ab50((int64_t *)&v19, v23, v76); // 0x405db0
    int64_t len5; // 0x405c00
    char v78; // 0x405c00
    switch (v77) {
        case -1: {
            // 0x405e40
            v78 = v75;
            len5 = 1;
            v20 = 0;
            wc = v19;
            goto lab_0x405d6b;
        }
        case -2: {
            // 0x405e60
            v78 = v75;
            len5 = strlen(str5);
            v20 = 0;
            wc = v19;
            goto lab_0x405d6b;
        }
        default: {
            int32_t v79; // 0x405c00
            int64_t v80; // 0x405c00
            if (v77 != 0) {
                // 0x405e88
                v80 = v77;
                v79 = v19;
            } else {
                // 0x405dd7
                if (*str5 != 0) {
                    // 0x406482
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x40649b_3;
                }
                // 0x405dee
                v80 = 1;
                v79 = v19;
                if (v19 != 0) {
                    goto lab_0x40649b_3;
                }
            }
            int32_t v81 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x405e04
            v26 = v81 == 0 ? v75 : 0;
            v21 = v80;
            v8 = v79;
            goto lab_0x405d5d;
        }
    }
  lab_0x405d5d:
    // 0x405d5d
    v78 = v26;
    len5 = v21;
    v20 = 1;
    wc = v8;
    if ((int32_t)v8 == 0) {
        abort();
        // UNREACHABLE
    }
    goto lab_0x405d6b;
  lab_0x405d6b:;
    int64_t v82 = len5 + v23; // 0x405d6b
    v27 = v78;
    v22 = v82;
    if (v82 >= v33) {
        // break -> 0x405e98
        goto lab_0x405e98;
    }
    goto lab_0x405d88;
  lab_0x405c9b:;
    unsigned char v83 = *(char *)(v33 + (int64_t)len); // 0x405c9b
    v7 = 1;
    if (v83 == 0) {
        // break (via goto) -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    int16_t * v84 = *__ctype_b_loc(); // 0x405cad
    v15 = v14;
    v7 = 1;
    if ((*(char *)(2 * (int64_t)v83 + (int64_t)v84) & 8) == 0) {
        // break (via goto) -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    goto lab_0x405cba;
  lab_0x405cba:
    // 0x405cba
    v7 = 0;
    if (*(char *)v33 == 0) {
        // break (via goto) -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    int64_t v85 = v33 + 1; // 0x405cc0
    v13 = v15;
    v12 = v85;
    v7 = 0;
    if (*(char *)v85 == 0) {
        // break (via goto) -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    goto lab_0x405c55;
  lab_0x4062b2:
    // 0x4062b2
    v4 = function_4085c0(v25, (int64_t)__ctype_get_mb_cur_max());
    int64_t v86 = function_40ab50((int64_t *)&v19, v25, v4); // 0x4062d5
    int32_t v87; // 0x405c00
    switch (v86) {
        case -1: {
            goto lab_0x4060b2;
        }
        case -2: {
            // 0x40643c
            strlen(str4);
            goto lab_0x4060b2;
        }
        case 0: {
            // 0x406400
            if (*str4 != 0) {
                // 0x406482
                __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                goto lab_0x40649b_3;
            }
            // 0x406413
            v87 = 0;
            if (v19 == 0) {
                goto lab_0x406300;
            } else {
                goto lab_0x406428;
            }
        }
        default: {
            // 0x4062fc
            v87 = v19;
            goto lab_0x406300;
        }
    }
  lab_0x4060b2:
    // 0x4060b2
    v7 = v32;
    if ((char)v32 != 0) {
        // break -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    goto lab_0x4060bb;
  lab_0x406300:
    // 0x406300
    mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
    wc2 = v87;
    goto lab_0x40609c;
  lab_0x4060bb:
    // 0x4060bb
    ps = 0;
    unsigned char v88 = *(char *)v33; // 0x4060d8
    int32_t v89 = *(int32_t *)((int64_t)(4 * v88 / 32) + (int64_t)&g24); // 0x4060e4
    int64_t v90; // 0x405c00
    int64_t len6; // 0x405c00
    if ((1 << (int32_t)(v88 % 32) & v89) == 0) {
        int32_t v91 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x406343
        if (v91 == 0) {
            // 0x406469
            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
            // 0x406482
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
            goto lab_0x40649b_3;
        }
        int64_t v92 = function_4085c0(v33, (int64_t)__ctype_get_mb_cur_max()); // 0x406365
        int64_t v93 = function_40ab50((int64_t *)&v19, v33, v92); // 0x406376
        len6 = 1;
        switch (v93) {
            case -1: {
                goto lab_0x40611c;
            }
            case -2: {
                goto lab_0x406428;
            }
            default: {
                // 0x406390
                v90 = v93;
                if (v93 != 0) {
                    goto lab_0x4063b4;
                } else {
                    // 0x406395
                    char * v94; // 0x4060bb
                    char v95 = *v94; // 0x4063a3
                    if (v95 != 0) {
                        // 0x406482
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        goto lab_0x40649b_3;
                    }
                    uint32_t v96 = v19; // 0x4063ac
                    v90 = 1;
                    if (v96 != 0) {
                        goto lab_0x406428;
                    } else {
                        goto lab_0x4063b4;
                    }
                }
            }
        }
    } else {
        // 0x4060f5
        v19 = v88;
        goto lab_0x406110;
    }
  lab_0x406428:
    // 0x406428
    len6 = strlen(str4);
    goto lab_0x40611c;
  lab_0x40609c:
    // 0x40609c
    if (wc2 == 0) {
        goto lab_0x4060b2;
    } else {
        // 0x4060a7
        if (iswalnum(wc2) != 0) {
            goto lab_0x4060bb;
        } else {
            goto lab_0x4060b2;
        }
    }
  lab_0x40611c:
    // 0x40611c
    v3 = len6 + v33;
    v9 = v11;
    v7 = 0;
    if (*(char *)v3 == 0) {
        // break -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    goto lab_0x405c55_2;
  lab_0x406110:;
    // 0x406110
    int64_t v97; // 0x405c00
    int64_t v98 = v97;
    int32_t v99; // 0x405c00
    int32_t v100 = v99; // 0x406110
    v7 = 0;
    len6 = v98;
    if (v100 == 0) {
        // break -> 0x405ccc
        goto lab_0x405ccc_8;
    }
    goto lab_0x40611c;
  lab_0x4063b4:;
    int64_t v101 = v90;
    mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
    int32_t v102 = v19;
    v99 = v102;
    v97 = v101;
    goto lab_0x406110;
}
// Address range: 0x406550 - 0x4067d0
int64_t function_406550(char * str4, int64_t * a2) {
    int64_t v1 = (int64_t)str4;
    char * str3 = dcgettext(NULL, str4, 5); // 0x40656e
    int64_t str = function_418b40(); // 0x406576
    int64_t result2; // 0x406550
    int64_t v2; // 0x406550
    int64_t v3; // 0x406550
    int64_t v4; // 0x406550
    int32_t v5; // 0x406550
    int64_t v6; // 0x406550
    int64_t result; // 0x40669b
    if ((int32_t)function_418a20(str, "UTF-8", 5) != 0) {
        // 0x406690
        result = function_409440();
        int32_t len = strlen((char *)str); // 0x4066a6
        int64_t v7 = len; // 0x4066a6
        int64_t * dest_mem = memcpy((int64_t *)function_409160(v7 + 11), (int64_t *)str, len); // 0x4066c0
        int64_t v8 = (int64_t)dest_mem + v7; // 0x4066d0
        *(int64_t *)v8 = 0x4c534e4152542f2f;
        *(int16_t *)(v8 + 8) = 0x5449;
        *(char *)(v8 + 10) = 0;
        int64_t str2 = function_409440(); // 0x4066f7
        free(dest_mem);
        if (str2 == 0) {
            // 0x4067a0
            v6 = 0;
            result2 = v1;
            v2 = 0;
            v4 = 0;
            if (result != 0) {
                goto lab_0x406734;
            } else {
                goto lab_0x4065a1;
            }
        } else {
            // 0x406715
            if (strchr((char *)str2, 63) == NULL) {
                // 0x406770
                v6 = 0;
                result2 = str2;
                v2 = str2;
                v4 = str2;
                if (result == 0) {
                    goto lab_0x4065a1;
                } else {
                    int32_t strcmp_rc = strcmp(str3, str4); // 0x40677e
                    v5 = strcmp_rc;
                    v3 = str2;
                    if (strcmp_rc == 0) {
                        // 0x406787
                        if (result != str2) {
                            // 0x406790
                            free((int64_t *)str2);
                        }
                        // 0x4065f2
                        return result;
                    }
                    goto lab_0x40674d;
                }
            } else {
                // 0x406727
                free((int64_t *)str2);
                v6 = 0;
                result2 = v1;
                v2 = 0;
                v4 = 0;
                if (result == 0) {
                    goto lab_0x4065a1;
                } else {
                    goto lab_0x406734;
                }
            }
        }
    } else {
        int64_t v9 = (int64_t)a2;
        v6 = v9;
        result2 = a2 == NULL ? v1 : v9;
        v2 = 0;
        v4 = v9;
        goto lab_0x4065a1;
    }
  lab_0x4065a1:;
    int32_t strcmp_rc2 = strcmp(str3, str4); // 0x4065a7
    if (strcmp_rc2 == 0) {
        // 0x4065f2
        return result2;
    }
    char v10 = strcmp_rc2;
    char v11 = v10; // 0x4065bf
    int64_t v12 = v6; // 0x4065bf
    int64_t v13 = 0; // 0x4065bf
    int64_t v14 = result2; // 0x4065bf
    int64_t v15 = v2; // 0x4065bf
    int64_t v16 = v4; // 0x4065bf
    int64_t v17 = v2; // 0x4065bf
    if (v10 != 0) {
        goto lab_0x4065e2;
    } else {
        goto lab_0x4065c1;
    }
  lab_0x406734:;
    int32_t strcmp_rc3 = strcmp(str3, str4); // 0x40673a
    v5 = strcmp_rc3;
    v3 = 0;
    if (strcmp_rc3 == 0) {
        // 0x4065f2
        return result;
    }
    goto lab_0x40674d;
  lab_0x4065e2:;
    int64_t result4 = (int64_t)str3; // 0x40656e
    int64_t result3 = result4; // 0x4065e8
    int64_t v21 = v17; // 0x4065e8
    if (v17 == 0) {
        // 0x4065f2
        return result4;
    }
    goto lab_0x4065ea;
  lab_0x4065c1:
    // 0x4065c1
    if (v11 == 0 || v12 == 0) {
        // 0x406618
        if (v11 != 0 == (v16 != 0)) {
            goto lab_0x4065d5;
        } else {
            int32_t len2 = strlen(str3); // 0x40662f
            char * str5 = (char *)v14; // 0x40663a
            int64_t result5 = function_409160((int64_t)len2 + 4 + (int64_t)strlen(str5)); // 0x406644
            __sprintf_chk((char *)result5, 1, -1, "%s (%s)", str3, str5);
            if (v13 != 0) {
                // 0x406672
                free((int64_t *)v13);
            }
            // 0x40667a
            result3 = result5;
            v21 = v15;
            if (v15 == 0) {
                // 0x4065f2
                return result5;
            }
            goto lab_0x4065ea;
        }
    } else {
        goto lab_0x4065d5;
    }
  lab_0x40674d:;
    char v18 = v5;
    v11 = v18;
    v12 = result;
    v13 = result;
    v14 = result;
    v15 = v3;
    v16 = v3;
    int64_t v19 = result; // 0x40675a
    int64_t v20 = v3; // 0x40675a
    if (v18 != 0) {
        goto lab_0x4065da;
    } else {
        goto lab_0x4065c1;
    }
  lab_0x4065ea:
    // 0x4065ea
    free((int64_t *)v21);
    // 0x4065f2
    return result3;
  lab_0x4065d5:
    // 0x4065d5
    v19 = v13;
    v20 = v15;
    v17 = v15;
    if (v13 == 0) {
        goto lab_0x4065e2;
    } else {
        goto lab_0x4065da;
    }
  lab_0x4065da:
    // 0x4065da
    free((int64_t *)v19);
    v17 = v20;
    goto lab_0x4065e2;
}
// Address range: 0x4067d0 - 0x4068c2
int64_t function_4067d0(int64_t * a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4067e4
    if ((int64_t *)v1 != a1) {
        // 0x4067f1
        return (int64_t)v1;
    }
    int64_t v2 = function_418b40(); // 0x406800
    char v3 = *(char *)v2 & -33;
    int64_t result; // 0x4068b6
    if (v3 == 85) {
        // 0x406810
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4068a8
            result = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g5;
            return result;
        }
        char v4 = *v1; // 0x40683e
        int64_t result2 = v4 != 96 ? (int64_t)&g14 : (int64_t)&g17; // 0x40684b
        // 0x4067f1
        return result2;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4068a8
        result = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g5;
        return result;
    }
    char v5 = *v1; // 0x40688d
    int64_t result3 = v5 != 96 ? (int64_t)&g15 : (int64_t)&g16; // 0x40689a
    // 0x4067f1
    return result3;
}
// Address range: 0x4068d0 - 0x406927
int64_t function_4068d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x4068d0
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x406927 - 0x407af1
int64_t function_406927(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x406971
    int64_t v3 = 0; // 0x406971
    int64_t v4; // 0x406927
    int64_t v5; // 0x406927
    int64_t v6; // 0x406927
    int64_t v7; // 0x406927
    int64_t v8; // 0x406927
    int64_t v9; // 0x406927
    int64_t v10; // 0x406927
    int64_t v11; // 0x406927
    int64_t v12; // 0x406927
    int64_t v13; // 0x406927
    int64_t v14; // 0x406927
    int64_t v15; // 0x406927
    int64_t v16; // 0x406927
    int64_t v17; // 0x406927
    int64_t v18; // 0x406927
    int64_t result; // 0x406927
    int64_t v19; // 0x406927
    int32_t wc; // bp+132, 0x406927
    int64_t ps; // bp+136, 0x406927
    char v20; // 0x406ee0
    int64_t v21; // 0x406ee0
    int64_t v22; // 0x407288
    int64_t v23; // 0x406927
    int64_t v24; // 0x4072a7
    int32_t v25; // 0x406927
    while (true) {
      lab_0x406978_2:
        // 0x406978
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x406927
        int64_t v27; // 0x4069ac
        while (true) {
          lab_0x406978:
            // 0x406978
            v5 = v26;
            bool v28 = v15 == v5; // 0x406983
            if (v15 == -1) {
                // 0x406985
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x406993
            if (v28) {
                // break (via goto) -> 0x4070f8
                goto lab_0x4070f8;
            }
            // 0x40699c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g135 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x406f8b
                    if (v25 % 2 == 0) {
                        goto lab_0x406ad1;
                    }
                    // 0x4073ad
                    v26 = v5 + 1;
                    goto lab_0x406978;
                }
                case 7: {
                    goto lab_0x406ad1;
                }
                case 8: {
                    goto lab_0x406ad1;
                }
                case 9: {
                    goto lab_0x406cea_2;
                }
                case 10: {
                    goto lab_0x406cea_2;
                }
                case 11: {
                    goto lab_0x406ad1;
                }
                case 12: {
                    goto lab_0x406ad1;
                }
                case 13: {
                    goto lab_0x406cea_2;
                }
                case 32: {
                    goto lab_0x406cea_2;
                }
                case 33: {
                    goto lab_0x406cea_2;
                }
                case 34: {
                    goto lab_0x406cea_2;
                }
                case 35: {
                    goto lab_0x406a9d;
                }
                case 36: {
                    goto lab_0x406cea_2;
                }
                case 37: {
                    goto lab_0x406ad1;
                }
                case 38: {
                    goto lab_0x406cea_2;
                }
                case 39: {
                    goto lab_0x406cea_2;
                }
                case 40: {
                    goto lab_0x406cea_2;
                }
                case 41: {
                    goto lab_0x406cea_2;
                }
                case 42: {
                    goto lab_0x406cea_2;
                }
                case 43: {
                    goto lab_0x406ad1;
                }
                case 44: {
                    goto lab_0x406ad1;
                }
                case 45: {
                    goto lab_0x406ad1;
                }
                case 46: {
                    goto lab_0x406ad1;
                }
                case 47: {
                    goto lab_0x406ad1;
                }
                case 48: {
                    goto lab_0x406ad1;
                }
                case 49: {
                    goto lab_0x406ad1;
                }
                case 50: {
                    goto lab_0x406ad1;
                }
                case 51: {
                    goto lab_0x406ad1;
                }
                case 52: {
                    goto lab_0x406ad1;
                }
                case 53: {
                    goto lab_0x406ad1;
                }
                case 54: {
                    goto lab_0x406ad1;
                }
                case 55: {
                    goto lab_0x406ad1;
                }
                case 56: {
                    goto lab_0x406ad1;
                }
                case 57: {
                    goto lab_0x406ad1;
                }
                case 58: {
                    goto lab_0x406ad1;
                }
                case 59: {
                    goto lab_0x406cea_2;
                }
                case 60: {
                    goto lab_0x406cea_2;
                }
                case 61: {
                    goto lab_0x406cea_2;
                }
                case 62: {
                    goto lab_0x406cea_2;
                }
                case 63: {
                    goto lab_0x406cea_2;
                }
                case 65: {
                    goto lab_0x406ad1;
                }
                case 66: {
                    goto lab_0x406ad1;
                }
                case 67: {
                    goto lab_0x406ad1;
                }
                case 68: {
                    goto lab_0x406ad1;
                }
                case 69: {
                    goto lab_0x406ad1;
                }
                case 70: {
                    goto lab_0x406ad1;
                }
                case 71: {
                    goto lab_0x406ad1;
                }
                case 72: {
                    goto lab_0x406ad1;
                }
                case 73: {
                    goto lab_0x406ad1;
                }
                case 74: {
                    goto lab_0x406ad1;
                }
                case 75: {
                    goto lab_0x406ad1;
                }
                case 76: {
                    goto lab_0x406ad1;
                }
                case 77: {
                    goto lab_0x406ad1;
                }
                case 78: {
                    goto lab_0x406ad1;
                }
                case 79: {
                    goto lab_0x406ad1;
                }
                case 80: {
                    goto lab_0x406ad1;
                }
                case 81: {
                    goto lab_0x406ad1;
                }
                case 82: {
                    goto lab_0x406ad1;
                }
                case 83: {
                    goto lab_0x406ad1;
                }
                case 84: {
                    goto lab_0x406ad1;
                }
                case 85: {
                    goto lab_0x406ad1;
                }
                case 86: {
                    goto lab_0x406ad1;
                }
                case 87: {
                    goto lab_0x406ad1;
                }
                case 88: {
                    goto lab_0x406ad1;
                }
                case 89: {
                    goto lab_0x406ad1;
                }
                case 90: {
                    goto lab_0x406ad1;
                }
                case 91: {
                    goto lab_0x406cea_2;
                }
                case 92: {
                    goto lab_0x406cea_2;
                }
                case 93: {
                    goto lab_0x406ad1;
                }
                case 94: {
                    goto lab_0x406cea_2;
                }
                case 95: {
                    goto lab_0x406ad1;
                }
                case 96: {
                    goto lab_0x406cea_2;
                }
                case 97: {
                    goto lab_0x406ad1;
                }
                case 98: {
                    goto lab_0x406ad1;
                }
                case 99: {
                    goto lab_0x406ad1;
                }
                case 100: {
                    goto lab_0x406ad1;
                }
                case 101: {
                    goto lab_0x406ad1;
                }
                case 102: {
                    goto lab_0x406ad1;
                }
                case 103: {
                    goto lab_0x406ad1;
                }
                case 104: {
                    goto lab_0x406ad1;
                }
                case 105: {
                    goto lab_0x406ad1;
                }
                case 106: {
                    goto lab_0x406ad1;
                }
                case 107: {
                    goto lab_0x406ad1;
                }
                case 108: {
                    goto lab_0x406ad1;
                }
                case 109: {
                    goto lab_0x406ad1;
                }
                case 110: {
                    goto lab_0x406ad1;
                }
                case 111: {
                    goto lab_0x406ad1;
                }
                case 112: {
                    goto lab_0x406ad1;
                }
                case 113: {
                    goto lab_0x406ad1;
                }
                case 114: {
                    goto lab_0x406ad1;
                }
                case 115: {
                    goto lab_0x406ad1;
                }
                case 116: {
                    goto lab_0x406ad1;
                }
                case 117: {
                    goto lab_0x406ad1;
                }
                case 118: {
                    goto lab_0x406ad1;
                }
                case 119: {
                    goto lab_0x406ad1;
                }
                case 120: {
                    goto lab_0x406ad1;
                }
                case 121: {
                    goto lab_0x406ad1;
                }
                case 122: {
                    goto lab_0x406ad1;
                }
                case 123: {
                    goto lab_0x406a75;
                }
                case 124: {
                    goto lab_0x406cea_2;
                }
                case 125: {
                    goto lab_0x406a75;
                }
                case 126: {
                    goto lab_0x406a9d;
                }
                default: {
                    goto lab_0x406e75;
                }
            }
        }
      lab_0x406e75:
        if (v23 != 1) {
            // 0x4071e0
            ps = 0;
            int64_t len = v15; // 0x4071f0
            if (v15 == -1) {
                // 0x4071f2
                len = strlen((char *)str);
            }
            // 0x40721e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40727f:
                // 0x40727f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x407284
                int64_t v30 = v29 + str;
                v24 = function_40ab50((int64_t *)&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4077fa_2;
                    }
                    case -1: {
                        goto lab_0x4077fa_2;
                    }
                    case -2: {
                        // 0x4078dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x407917
                            v19 = v18;
                            int64_t v31 = v18; // 0x40791a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x407927
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x407920
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4077fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4077fa_2;
                    }
                    case 1: {
                        goto lab_0x407250;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4072fc
                        char v34 = *(char *)v33; // 0x40730d
                        unsigned char v35; // 0x406927
                        if (v34 < 125) {
                            // 0x407318
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40732f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x406cea_2;
                            }
                        }
                        // 0x407300
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40730d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x407318
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40732f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x406cea_2;
                                }
                            }
                            // 0x407300
                            v33++;
                        }
                        goto lab_0x407250;
                    }
                }
            }
            goto lab_0x4077fa_2;
        } else {
            // 0x406ec4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x406ad1;
        }
    }
  lab_0x4070f8:
    // 0x4070f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4079fa
        if (v8 > result) {
            // 0x407a03
            *(char *)(v12 + result) = 0;
        }
        // 0x406d27
        return result;
    }
    goto lab_0x406cea_2;
  lab_0x406ad1:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x406ae0
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x406cea_2;
        }
    }
    int64_t v42 = result; // 0x406be1
    char v43 = v20; // 0x406be1
    int64_t v44 = v58; // 0x406be1
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x406be1
    int64_t v46 = v56; // 0x406be1
    goto lab_0x406b5d;
  lab_0x406cea_2:;
    // 0x406d27
    char * v36; // 0x406927
    return function_4068d0(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x4077fa_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x406ad1;
    } else {
        uint64_t v40 = v37 + v5; // 0x4073ce
        int64_t v41 = v5 + 1; // 0x4074b1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x4074b8
        char v48 = v20; // 0x4074b8
        int64_t v49 = result; // 0x4074b8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x407481
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x407485
            int64_t v52 = v50 + 1; // 0x40748a
            int64_t v53 = v47 + 1; // 0x4074b1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40747c
                v50 = v52;
                if (v38 > v50) {
                    // 0x407481
                    *(char *)(v50 + v39) = v51;
                }
                // 0x407485
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
        goto lab_0x406b5d;
    }
  lab_0x407250:
    // 0x407250
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40726f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x407272
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x4077fa
        goto lab_0x4077fa_2;
    }
    goto lab_0x40727f;
  lab_0x406a9d:
    // 0x406a9d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x406cea_2;
    }
    goto lab_0x406ad1;
  lab_0x406a75:;
    bool v61 = v15 == 1; // 0x406a80
    if (v15 == -1) {
        // 0x406a82
        v61 = *(char *)v1 == 0;
    }
    // 0x406a8e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x406ad1;
    } else {
        goto lab_0x406a9d;
    }
  lab_0x406b5d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x406b62
        *(char *)(v59 + v60) = v43;
    }
    // 0x406b66
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x406978_2;
}
// Address range: 0x407b00 - 0x407c9e
int64_t function_407b00(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x407b02
    int32_t * v3 = __errno_location(); // 0x407b1c
    int64_t v4 = (int64_t)g39; // 0x407b21
    int32_t v5 = *v3; // 0x407b2b
    int64_t v6 = v4; // 0x407b41
    if (v2 >= (int64_t)*(int32_t *)&g42) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x407c99
            function_4093b0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x407b50
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x407b57
        int64_t v9; // 0x407b00
        if (g39 == &g40) {
            int64_t v10 = function_4091c0(0, v8); // 0x407c7a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g40); // 0x407c7f
            *(int64_t *)&g39 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4091c0(v4, v8); // 0x407b6b
            *(int64_t *)&g39 = v12;
            v9 = v12;
        }
        // 0x407b7a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g42; // 0x407b7a
        int32_t v14 = v7; // 0x407b81
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g42 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x407bb1
    int64_t v17 = v15 + 8; // 0x407bb4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x407bbb
    int64_t * v19 = (int64_t *)v16; // 0x407bbe
    uint64_t v20 = *v19; // 0x407bbe
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x407bc1
    int64_t result = *v21; // 0x407bc1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x407bcc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x407bd5
    int64_t v24; // 0x407b00
    uint64_t v25 = function_4068d0(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x407be4
    if (v20 > v25) {
        // 0x407c5b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x407bf7
    *v19 = v26;
    if (result != (int64_t)&g113) {
        // 0x407c07
        free((int64_t *)result);
    }
    int64_t result2 = function_409160(v26); // 0x407c21
    *v21 = result2;
    int64_t v27 = *v22; // 0x407c3b
    int64_t v28 = *v23; // 0x407c3e
    int64_t v29; // 0x407b00
    function_4068d0(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x407c5b
    *v3 = v5;
    return result2;
}
// Address range: 0x407ca0 - 0x407cd4
int64_t function_407ca0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x407ca7
    int64_t result = function_409360(a1 == 0 ? (int64_t)&g114 : a1, 56); // 0x407cc6
    return result;
}
// Address range: 0x407ce0 - 0x407cef
int64_t function_407ce0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g114 : a1); // 0x407cec
    return result;
}
// Address range: 0x407cf0 - 0x407cff
int64_t function_407cf0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g114 : a1; // 0x407cf8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g114;
}
// Address range: 0x407d00 - 0x407d33
int64_t function_407d00(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g114 + 8 : a1 + 8; // 0x407d19
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x407d1e
    uint32_t v3 = *v2; // 0x407d1e
    uint32_t v4 = (int32_t)a2 % 32; // 0x407d22
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x407d40 - 0x407d53
int64_t function_407d40(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g114 + 4 : a1 + 4); // 0x407d4c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x407d60 - 0x407d8b
int64_t function_407d60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g114 : a1; // 0x407d68
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x407d85
        abort();
        // UNREACHABLE
    }
    // 0x407d7c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g114;
}
// Address range: 0x407d90 - 0x407e02
int64_t function_407d90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g114 : a5; // 0x407db2
    int32_t * v2 = __errno_location(); // 0x407dbb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x407dd4
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x407dd8
    uint32_t v5 = *(int32_t *)v1; // 0x407ddb
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x407de1
    int64_t result = function_4068d0(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x407dea
    return result;
}
// Address range: 0x407e10 - 0x407ef1
int64_t function_407e10(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g114 : a4; // 0x407e32
    int32_t * v2 = __errno_location(); // 0x407e38
    int64_t v3 = v1 + 8; // 0x407e4f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x407e57
    int32_t * v5 = (int32_t *)v1; // 0x407e5a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x407e68
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x407e6b
    int64_t v8 = function_4068d0(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x407e75
    int64_t v9 = v8 + 1; // 0x407e7a
    int64_t result = function_409160(v9); // 0x407e8f
    function_4068d0(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x407ed4
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x407edd
    return result;
}
// Address range: 0x407f00 - 0x407f0a
int64_t function_407f00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407f00
    return function_407e10(a1, a2, 0, a3);
}
// Address range: 0x407f10 - 0x407fa5
int64_t function_407f10(void) {
    uint32_t v1 = *(int32_t *)&g42; // 0x407f10
    int64_t v2 = v1; // 0x407f10
    int64_t v3 = v2; // 0x407f24
    if (v1 >= 2) {
        int64_t v4 = &g42;
        int64_t v5 = v4 + 16; // 0x407f43
        free((int64_t *)*(int64_t *)v4);
        v3 = &g127;
        while (v5 != (int64_t)g39 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x407f40
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g127;
        }
    }
    int64_t v6 = v3; // 0x407f5d
    if (g40 != 0x623b40) {
        // 0x407f5f
        free((int64_t *)g40);
        g40 = 256;
        *(int64_t *)&g41 = (int64_t)&g113;
        v6 = &g127;
    }
    int64_t result = v6; // 0x407f81
    if (g39 != &g40) {
        // 0x407f83
        free(g39);
        *(int64_t *)&g39 = (int64_t)&g40;
        result = &g127;
    }
    // 0x407f96
    *(int32_t *)&g42 = 1;
    return result;
}
// Address range: 0x407fb0 - 0x407fc1
int64_t function_407fb0(void) {
    // 0x407fb0
    int64_t v1; // 0x407fb0
    return function_407b00(v1, v1, -1, (int64_t *)&g114);
}
// Address range: 0x407fd0 - 0x407fda
int64_t function_407fd0(void) {
    // 0x407fd0
    int64_t v1; // 0x407fd0
    return function_407b00(v1, v1, v1, (int64_t *)&g114);
}
// Address range: 0x407fe0 - 0x407ff6
int64_t function_407fe0(int64_t a1) {
    // 0x407fe0
    return function_407b00(0, a1, -1, (int64_t *)&g114);
}
// Address range: 0x408000 - 0x408012
int64_t function_408000(int64_t a1, int64_t a2) {
    // 0x408000
    return function_407b00(0, a1, a2, (int64_t *)&g114);
}
// Address range: 0x408020 - 0x408088
int64_t function_408020(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x408030
    return function_407b00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408090 - 0x4080f4
int64_t function_408090(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4080a0
    return function_407b00((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x408100 - 0x40810c
int64_t function_408100(int64_t a1, int64_t a2) {
    // 0x408100
    return function_408020(0, a1 & 0xffffffff, a2);
}
// Address range: 0x408110 - 0x40811f
int64_t function_408110(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408110
    return function_408090(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x408120 - 0x408190
int64_t function_408120(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g114); // 0x40812d
    int128_t v2 = __asm_movdqa(g115); // 0x408135
    int128_t v3 = __asm_movdqa(g116); // 0x40813d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x408152
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x408168
    uint32_t v6 = *v5; // 0x408168
    uint32_t v7 = (int32_t)a3 % 32; // 0x40816d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_407b00(0, a1, a2, &v4);
}
// Address range: 0x408190 - 0x40819d
int64_t function_408190(int64_t a1, int64_t a2) {
    // 0x408190
    return function_408120(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4081a0 - 0x4081b1
int64_t function_4081a0(int64_t a1) {
    // 0x4081a0
    return function_408120(a1, -1, 58);
}
// Address range: 0x4081c0 - 0x4081ca
int64_t function_4081c0(void) {
    // 0x4081c0
    int64_t v1; // 0x4081c0
    return function_408120(v1, v1, 58);
}
// Address range: 0x4081d0 - 0x40823e
int64_t function_4081d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4081ea
    return function_407b00((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x408240 - 0x4082ac
int64_t function_408240(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g114); // 0x408247
    int128_t v2 = __asm_movdqa(g115); // 0x40824f
    int128_t v3 = __asm_movdqa(g116); // 0x408257
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x408279
    if (a2 == 0 || a3 == 0) {
        // 0x4082a7
        abort();
        // UNREACHABLE
    }
    // 0x40828a
    return function_407b00(a1, a4, a5, &v4);
}
// Address range: 0x4082b0 - 0x4082b9
int64_t function_4082b0(void) {
    // 0x4082b0
    int64_t v1; // 0x4082b0
    return function_408240(v1, v1, v1, v1, -1);
}
// Address range: 0x4082c0 - 0x4082d7
int64_t function_4082c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4082c0
    return function_408240(0, a1, a2, a3, -1);
}
// Address range: 0x4082e0 - 0x4082f3
int64_t function_4082e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4082e0
    return function_408240(0, a1, a2, a3, a4);
}
// Address range: 0x408300 - 0x40830a
int64_t function_408300(void) {
    // 0x408300
    int64_t v1; // 0x408300
    return function_407b00(v1, v1, v1, &g38);
}
// Address range: 0x408310 - 0x408322
int64_t function_408310(int64_t a1, int64_t a2) {
    // 0x408310
    return function_407b00(0, a1, a2, &g38);
}
// Address range: 0x408330 - 0x408341
int64_t function_408330(int64_t a1, int64_t a2) {
    // 0x408330
    return function_407b00(a1, a2, -1, &g38);
}
// Address range: 0x408350 - 0x408366
int64_t function_408350(int64_t a1) {
    // 0x408350
    return function_407b00(0, a1, -1, &g38);
}
// Address range: 0x408370 - 0x408503
int64_t function_408370(int64_t a1, int64_t * a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x408389
    int64_t v1; // bp-200, 0x408370
    int32_t v2 = __fxstat(1, fileno(stream), (struct stat *)&v1); // 0x40839a
    int64_t v3 = 0x2000; // 0x4083a1
    int32_t v4; // 0x408370
    if ((v4 & 0xf000) == 0x8000 == v2 > -1) {
        int32_t v5 = ftello(stream); // 0x4084c3
        int64_t v6 = v5; // 0x4084c3
        v3 = 0x2000;
        int64_t v7; // 0x408370
        if (v5 > -1 == v7 > v6) {
            // 0x4084df
            v3 = v7 + 1 - v6;
        }
    }
    int32_t size = v3;
    int64_t * mem = malloc(size); // 0x4083bf
    int64_t result = (int64_t)mem; // 0x4083bf
    if (mem == NULL) {
        // 0x408469
        return result;
    }
    int64_t items_read = fread(mem, 1, size, stream); // 0x40842b
    int64_t v8 = v3; // 0x408436
    int64_t v9 = v3; // 0x408436
    int64_t v10 = result; // 0x408436
    int64_t v11 = items_read; // 0x408436
    int64_t * v12; // 0x408370
    int32_t * v13; // 0x408370
    int32_t v14; // 0x408370
    if (v3 != items_read) {
      lab_0x408438:;
        int32_t * v15 = __errno_location(); // 0x408438
        if (ferror(stream) == 0) {
            int64_t result2 = v10; // 0x408456
            if (v9 - 1 > v11) {
                int64_t * mem2 = realloc((int64_t *)v10, (int32_t)v11 + 1); // 0x4084f2
                result2 = mem2 != NULL ? (int64_t)mem2 : v10;
            }
            // 0x40845c
            *(char *)(result2 + v11) = 0;
            *a2 = v11;
            // 0x408469
            return result2;
        }
        // 0x408438
        v12 = (int64_t *)v10;
        v13 = v15;
        v14 = *v15;
        goto lab_0x40848b;
      lab_0x40848b:
        // 0x40848b
        free(v12);
        *v13 = v14;
        // 0x408469
        return 0;
    }
    int64_t v16 = v3; // 0x4083ff
    int64_t v17 = result;
    while (v16 != -1) {
        uint64_t v18 = v16 / 2; // 0x4083f0
        v16 += v18;
        int64_t * v19 = (int64_t *)v17;
        int64_t * mem3 = realloc(v19, (int32_t)v16); // 0x408409
        if (mem3 == NULL) {
            int32_t * v20 = __errno_location(); // 0x408480
            v12 = v19;
            v13 = v20;
            v14 = *v20;
            goto lab_0x40848b;
        }
        int64_t v21 = (int64_t)mem3;
        int64_t nmemb = v16 - v8; // 0x408425
        int64_t items_read2 = fread((int64_t *)(v8 + v21), 1, (int32_t)nmemb, stream); // 0x40842b
        v8 += items_read2;
        v9 = v16;
        v10 = v21;
        v11 = v8;
        if (nmemb != items_read2) {
            goto lab_0x408438;
        }
        v17 = v21;
    }
    int32_t * v22 = __errno_location(); // 0x4084a0
    free((int64_t *)v17);
    *v22 = 12;
    // 0x408469
    return 0;
}
// Address range: 0x408510 - 0x408595
int64_t function_408510(int64_t file_path, int64_t a2, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x408520
    if (file == NULL) {
        // 0x408552
        return 0;
    }
    int64_t v1 = (int64_t)file; // 0x408520
    int64_t result = function_408370(v1, (int64_t *)a2); // 0x408533
    int32_t * v2 = __errno_location(); // 0x40853b
    if ((int32_t)function_409bc0(v1, a2) == 0) {
        // 0x408552
        return result;
    }
    int32_t v3 = *v2; // 0x408573
    if (result != 0) {
        // 0x408575
        v3 = *v2;
        free((int64_t *)result);
    }
    // 0x408581
    *v2 = v3;
    return 0;
}
// Address range: 0x4085a0 - 0x4085aa
int64_t function_4085a0(int64_t a1, int64_t * a2) {
    // 0x4085a0
    return function_408510(a1, (int64_t)a2, (int64_t *)"r");
}
// Address range: 0x4085b0 - 0x4085ba
int64_t function_4085b0(void) {
    // 0x4085b0
    int64_t v1; // 0x4085b0
    return function_408510(v1, v1, (int64_t *)"rb");
}
// Address range: 0x4085c0 - 0x4085f1
int64_t function_4085c0(int64_t a1, int64_t a2) {
    int64_t v1 = function_40abd0(a1, 0, a2); // 0x4085d1
    return v1 != 0 ? 1 - a1 + v1 : a2;
}
// Address range: 0x408600 - 0x408620
int64_t function_408600(void) {
    // 0x408600
    __assert_fail("iter->cur.wc == 0", "lib/mbiter.h", 170, "mbiter_multi_next");
    return &g127;
}
// Address range: 0x408620 - 0x408f9d
int64_t function_408620(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    char * v1 = strdup((char *)str); // 0x408630
    if (v1 == NULL) {
        // 0x408b80
        function_4093b0(str);
        // UNREACHABLE
    }
    int64_t result = (int64_t)v1; // 0x408630
    int32_t v2 = a2;
    if (__ctype_get_mb_cur_max() < 2) {
        if (v2 != 0) {
            char v3 = *v1; // 0x408884
            int64_t v4 = result; // 0x40888b
            if (v3 != 0) {
                int16_t * v5 = *__ctype_b_loc(); // 0x408899
                char v6 = v3; // 0x40889c
                int64_t v7 = result; // 0x40889c
                v4 = v7;
                while ((*(char *)((int64_t)v5 + 1 + 2 * (int64_t)v6) & 32) != 0) {
                    // 0x4088a0
                    v7++;
                    v6 = *(char *)v7;
                    v4 = v7;
                    if (v6 == 0) {
                        // break -> 0x4088b4
                        break;
                    }
                    v4 = v7;
                }
            }
            int64_t str2 = v4;
            memmove((int64_t *)v1, (int64_t *)str2, strlen((char *)str2) + 1);
            if (v2 == 1) {
              lab_0x40879a:
                // 0x40879a
                return result;
            }
        }
        int64_t v8 = result;
        int32_t v9 = *(int32_t *)v8; // 0x4088d7
        int64_t v10 = v8 + 4; // 0x4088d9
        int32_t v11 = v9 - 0x1010101 & (v9 ^ -0x7f7f7f80); // 0x4088e5
        uint32_t v12 = v11 & -0x7f7f7f80; // 0x4088e7
        while (v12 == 0) {
            // 0x4088d7
            v8 = v10;
            v9 = *(int32_t *)v8;
            v10 = v8 + 4;
            v11 = v9 - 0x1010101 & (v9 ^ -0x7f7f7f80);
            v12 = v11 & -0x7f7f7f80;
        }
        unsigned char v13 = (char)((v11 & 0x8080) == 0 ? v12 / 0x10000 : v12); // 0x408905
        int64_t v14 = (-1 - v13 < v13 ? -5 : -4) + ((v11 & 0x8080) == 0 ? v8 + 6 : v10); // 0x40890c
        if (v14 < result) {
            // 0x40879a
            return result;
        }
        int16_t * v15 = *__ctype_b_loc(); // 0x40891e
        int64_t v16 = v14; // 0x408921
        char * v17 = (char *)v16; // 0x408938
        char v18 = *(char *)((int64_t)v15 + 1 + 2 * (int64_t)*v17); // 0x40893b
        while ((v18 & 32) != 0) {
            // 0x408928
            *v17 = 0;
            v16--;
            if (v16 < result) {
                // break -> 0x40879a
                break;
            }
            v17 = (char *)v16;
            v18 = *(char *)((int64_t)v15 + 1 + 2 * (int64_t)*v17);
        }
        // 0x40879a
        return result;
    }
    // 0x408650
    char * wc2; // 0x408620
    int64_t v19; // 0x408620
    int64_t v20; // 0x408620
    int64_t v21; // 0x408620
    int64_t v22; // 0x408620
    char * v23; // 0x408620
    char * v24; // 0x408620
    int64_t ps; // bp-124, 0x408620
    char v25; // 0x408620
    char v26; // 0x408620
    char v27; // 0x408620
    char * wc; // bp-92, 0x408620
    uint64_t v28; // 0x4089ef
    if (v2 != 0) {
        int64_t v29 = result;
        int32_t v30 = *(int32_t *)v29; // 0x4089a8
        int64_t v31 = v29 + 4; // 0x4089aa
        int32_t v32 = v30 - 0x1010101 & (v30 ^ -0x7f7f7f80); // 0x4089b6
        uint32_t v33 = v32 & -0x7f7f7f80; // 0x4089b8
        while (v33 == 0) {
            // 0x4089a8
            v29 = v31;
            v30 = *(int32_t *)v29;
            v31 = v29 + 4;
            v32 = v30 - 0x1010101 & (v30 ^ -0x7f7f7f80);
            v33 = v32 & -0x7f7f7f80;
        }
        // 0x4089bf
        ps = 0;
        unsigned char v34 = (char)((v32 & 0x8080) == 0 ? v33 / 0x10000 : v33); // 0x4089ec
        v28 = ((v32 & 0x8080) == 0 ? v29 + 6 : v31) - (-1 - v34 < v34 ? 4 : 3);
        v21 = result;
        if (v28 > result) {
            // 0x408a72
            v23 = v1;
            v26 = 0;
            v19 = result;
            while (true) {
              lab_0x408a72:
                // 0x408a72
                v20 = v19;
                v24 = v23;
                v27 = v26;
                if (v26 == 0) {
                    unsigned char v35 = *(char *)v20; // 0x408a08
                    int32_t v36 = *(int32_t *)((int64_t)(4 * v35 / 32) + (int64_t)&g24); // 0x408a14
                    if ((1 << (int32_t)(v35 % 32) & v36) == 0) {
                        int32_t v37 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408b0d
                        v27 = 1;
                        if (v37 == 0) {
                            goto lab_0x408b85_2;
                        }
                        goto lab_0x408a79;
                    } else {
                        char * v38 = (char *)((int64_t)v35 & 0xffffffff); // 0x408a3c
                        wc = v38;
                        wc2 = v38;
                        v25 = 0;
                        v22 = 1;
                        goto lab_0x408a45;
                    }
                } else {
                    goto lab_0x408a79;
                }
            }
          lab_0x408b38_3:
            // 0x408b38
            v21 = (int64_t)v24;
        }
      lab_0x408b38_2:;
        int64_t str3 = v21;
        memmove((int64_t *)v1, (int64_t *)str3, strlen((char *)str3) + 1);
        if (v2 == 1) {
            // 0x40879a
            return result;
        }
    }
    int64_t v39 = result;
    int32_t v40 = *(int32_t *)v39; // 0x408660
    int64_t v41 = v39 + 4; // 0x408663
    int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x40866f
    uint32_t v43 = v42 & -0x7f7f7f80; // 0x408671
    while (v43 == 0) {
        // 0x408660
        v39 = v41;
        v40 = *(int32_t *)v39;
        v41 = v39 + 4;
        v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
        v43 = v42 & -0x7f7f7f80;
    }
    // 0x408678
    ps = 0;
    unsigned char v44 = (char)((v42 & 0x8080) == 0 ? v43 / 0x10000 : v43); // 0x4086a5
    uint64_t v45 = ((v42 & 0x8080) == 0 ? v39 + 6 : v41) - (-1 - v44 < v44 ? 4 : 3); // 0x4086a8
    if (v45 <= result) {
        // 0x40879a
        return result;
    }
    char * v46 = v1; // 0x408620
    char v47 = 0; // 0x408620
    int64_t v48 = result;
    int64_t v49 = 0;
    int64_t v50; // 0x408620
    int64_t v51; // 0x408620
    int64_t v52; // 0x408620
    int64_t v53; // 0x408620
    int64_t v54; // 0x408620
    int64_t v55; // 0x408620
    int64_t v56; // 0x408620
    int64_t v57; // 0x408620
    int64_t v58; // 0x408620
    char * v59; // 0x408620
    char * v60; // 0x408620
    char v61; // 0x408620
    char v62; // 0x408620
    char v63; // 0x408620
    while (true) {
      lab_0x4086f2_2:
        // 0x4086f2
        v52 = v51;
        v59 = v46;
        v54 = v49;
        while (true) {
          lab_0x4086f2:
            // 0x4086f2
            v55 = v54;
            v57 = v48;
            char v64 = v47;
            v60 = v59;
            v61 = v64;
            if (v64 != 0) {
                goto lab_0x4087c7;
            } else {
                unsigned char v65 = *(char *)v57; // 0x4086fd
                int32_t v66 = *(int32_t *)((int64_t)(4 * v65 / 32) + (int64_t)&g24); // 0x408708
                if ((1 << (int32_t)(v65 % 32) & v66) == 0) {
                    int32_t v67 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4087b5
                    v61 = 1;
                    if (v67 == 0) {
                        // break (via goto) -> 0x408b85
                        goto lab_0x408b85_2;
                    }
                    goto lab_0x4087c7;
                } else {
                    int64_t v68 = (int64_t)v60; // 0x408725
                    wc = (char *)((int64_t)v65 & 0xffffffff);
                    v47 = v64;
                    v62 = 1;
                    v58 = v68 + 1;
                    v56 = v68;
                    goto lab_0x40873b;
                }
            }
        }
      lab_0x4086c0:
        // 0x4086c0
        v50 = v52;
        v53 = 1;
        if (v63 != 0) {
            // 0x4086cd
            v50 = v52;
            v53 = iswspace((int32_t)(int64_t)wc) == 0;
        }
        goto lab_0x4086df;
    }
  lab_0x408b85_2:
    // 0x408b85
    __assert_fail("mbsinit (&iter->state)", "lib/mbiter.h", 142, "mbiter_multi_next");
  lab_0x408bb7_3:
    // 0x408bb7
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbiter.h", 169, "mbiter_multi_next");
    function_408600();
    struct _IO_FILE * v69 = (struct _IO_FILE *)"*iter->cur.ptr == '\\0'"; // 0x408620
    int64_t v70 = (int64_t)"lib/mbiter.h"; // 0x408620
    int64_t v71 = 169; // 0x408620
    int64_t v72 = (int64_t)"mbiter_multi_next"; // 0x408620
    goto lab_0x408bdc;
  lab_0x408790_2:;
    // 0x408790
    int64_t v75; // 0x408620
    int64_t v76; // 0x408620
    if ((int32_t)v76 == 2) {
        // 0x408af8
        *(char *)v75 = 0;
        goto lab_0x40879a;
    } else {
        goto lab_0x40879a;
    }
  lab_0x4086df:
    // 0x4086df
    v49 = v53;
    v46 = (char *)v48;
    v51 = v50;
    v75 = v50;
    v76 = v49;
    if (v48 >= v45) {
        goto lab_0x408790_2;
    }
    goto lab_0x4086f2_2;
  lab_0x408bb7_4:
    // 0x408bb7
    function_408600();
    v69 = (struct _IO_FILE *)&wc;
    int64_t v77; // 0x408620
    v70 = v77;
    int64_t v78; // 0x408620
    v71 = v78;
    v72 = &ps;
    struct _IO_FILE * v73; // 0x408620
    if (v77 == 0) {
        // 0x408c58
        __fprintf_chk((struct _IO_FILE *)&wc, 1, "%s %s\n", (char *)v78, &ps);
        v73 = (struct _IO_FILE *)&wc;
        goto lab_0x408bf6;
    } else {
        goto lab_0x408bdc;
    }
  lab_0x4087c7:;
    char v79 = v61;
    int64_t v80 = v45 - v57; // 0x4087d7
    int64_t v81 = function_40ab50((int64_t *)&wc, v57, v80); // 0x4087da
    int64_t v82 = (int64_t)v60;
    v47 = v79;
    v62 = 0;
    v58 = v45;
    v56 = v82;
    switch (v81) {
        case -1: {
            // 0x408950
            v47 = v79;
            v62 = 0;
            v58 = v82 + 1;
            v56 = v82;
            goto lab_0x40873b;
        }
        case -2: {
            goto lab_0x40873b;
        }
        default: {
            int64_t v83 = v81; // 0x408803
            if (v81 == 0) {
                // 0x408805
                if (*v60 != 0) {
                    goto lab_0x408bb7_3;
                }
                // 0x408818
                v83 = 1;
                v78 = v80;
                v77 = v57;
                if ((int32_t)(int64_t)wc != 0) {
                    goto lab_0x408bb7_4;
                }
            }
            int32_t v84 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408836
            v47 = v84 == 0 ? v79 : 0;
            v62 = 1;
            v58 = v83 + v82;
            v56 = v82;
            goto lab_0x40873b;
        }
    }
  lab_0x40873b:
    // 0x40873b
    v48 = v58;
    v63 = v62;
    int32_t v85 = v55; // 0x408740
    switch (v85) {
        case 0: {
            goto lab_0x4086c0;
        }
        case 1: {
            // 0x408858
            v50 = v52;
            v53 = v55;
            if (v63 != 0) {
                int32_t v86 = iswspace((int32_t)(int64_t)wc); // 0x408867
                v50 = v86 != 0 ? v56 : v52;
                v53 = v86 != 0 ? 2 : v55 & 0xffffffff;
            }
            goto lab_0x4086df;
        }
        default: {
            // 0x408753
            v50 = v52;
            v53 = 1;
            if (v85 != 2 || v63 == 0) {
                goto lab_0x4086df;
            }
            int64_t v87 = iswspace((int32_t)(int64_t)wc) == 0 ? 1 : v55 & 0xffffffff; // 0x408782
            v59 = (char *)v48;
            v54 = v87;
            v75 = v52;
            v76 = v87;
            if (v48 >= v45) {
                goto lab_0x408790_2;
            }
            goto lab_0x4086f2;
        }
    }
  lab_0x408a79:;
    int64_t v88 = function_40ab50((int64_t *)&wc, v20, v28 - v20); // 0x408a8c
    if (v88 > 0xfffffffffffffffd) {
        // break -> 0x408b38
        goto lab_0x408b38_3;
    }
    int64_t v89 = v88; // 0x408ab2
    if (v88 == 0) {
        // 0x408ab4
        if (*v24 != 0) {
            goto lab_0x408bb7_3;
        }
        int64_t v90 = (int64_t)wc;
        v89 = 1;
        if ((int32_t)v90 != 0) {
            // 0x408bb7
            v78 = v90 & 0xffffffff;
            v77 = v20;
            goto lab_0x408bb7_4;
        }
    }
    int32_t v91 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408add
    wc2 = wc;
    v25 = v91 == 0 ? v27 : 0;
    v22 = v89;
    goto lab_0x408a45;
  lab_0x408a45:;
    int64_t v92 = (int64_t)v24;
    v21 = v92;
    if (iswspace((int32_t)(int64_t)wc2) == 0) {
        goto lab_0x408b38_2;
    }
    int64_t v93 = v22 + v92; // 0x408a5a
    v23 = (char *)v93;
    v26 = v25;
    v19 = v93;
    v21 = v93;
    if (v93 >= v28) {
        goto lab_0x408b38_2;
    }
    goto lab_0x408a72;
  lab_0x408bdc:
    // 0x408bdc
    __fprintf_chk(v69, 1, "%s (%s) %s\n", (char *)v70, (char *)v71, (char *)v72);
    v73 = v69;
    goto lab_0x408bf6;
  lab_0x408bf6:
    // 0x408bf6
    __fprintf_chk(v73, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result2 = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v73); // 0x408c3b
    if (a6 < 10) {
        // 0x408c4a
        return result2;
    }
    char * v74 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x408d42
    return __fprintf_chk(v73, 1, v74);
}
// Address range: 0x408fa0 - 0x408fc0
int64_t function_408fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408fa0
    int64_t result; // 0x408fa0
    if (a5 == 0) {
        // 0x408fbb
        return result;
    }
    int64_t v1 = 0; // 0x408fa7
    while (*(int64_t *)(8 * (v1 + 1) + a5) != 0) {
        // 0x408fb0
        v1++;
    }
    // 0x408fbb
    return result;
}
// Address range: 0x408fc0 - 0x409020
int64_t function_408fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x408fc0
    int64_t v3 = &v2; // 0x408fc0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x408ff3
    int64_t v6; // 0x408fc0
    int64_t v7; // 0x408fdd
    int64_t * v8; // 0x408ffb
    int64_t v9; // 0x408ffb
    int64_t v10; // 0x409007
    if (v5 < 48) {
        // 0x408fd0
        *(int32_t *)v1 = v5 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v7;
        v6 = v7;
        if (v7 == 0) {
            // break -> 0x409013
            break;
        }
    } else {
        // 0x408ffb
        v8 = (int64_t *)(v1 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v4 + v3) = v10;
        v6 = v10;
        if (v10 == 0) {
            // break -> 0x409013
            break;
        }
    }
    int64_t result = v6; // 0x408ff1
    while (v4 != 9) {
        // 0x408fe9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x408fd0
            *(int32_t *)v1 = v5 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v7;
            v6 = v7;
            result = 0;
            if (v7 == 0) {
                // break -> 0x409013
                break;
            }
        } else {
            // 0x408ffb
            v8 = (int64_t *)(v1 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v4 + v3) = v10;
            v6 = v10;
            result = v10;
            if (v10 == 0) {
                // break -> 0x409013
                break;
            }
        }
        // 0x408fe9
        result = v6;
    }
    // 0x409013
    return result;
}
// Address range: 0x409020 - 0x4090dc
int64_t function_409020(int64_t a1, char * a2, char * a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x409020
    int64_t v1; // bp-168, 0x409020
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x409020
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x409020
    int64_t v8; // 0x409020
    int64_t v9; // 0x409020
    int64_t v10; // bp-56, 0x409020
    int64_t v11; // 0x409085
    int64_t v12; // 0x4090a9
    if ((int32_t)v6 < 48) {
        // 0x409070
        v11 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v10);
        *(int64_t *)(8 * v5 + v2) = v11;
        v9 = v11;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v11 == 0) {
            // break -> 0x4090c0
            break;
        }
    } else {
        // 0x4090a2
        v12 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v12;
        v9 = v12;
        v8 = v6;
        v7 = v4 + 8;
        if (v12 == 0) {
            // break -> 0x4090c0
            break;
        }
    }
    int64_t v13 = v5 + 1; // 0x40909a
    int64_t result = v9; // 0x40909a
    while (v5 != 9) {
        // 0x40909c
        v4 = v7;
        v5 = v13;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x409070
            v11 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v10);
            *(int64_t *)(8 * v5 + v2) = v11;
            v9 = v11;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            result = 0;
            if (v11 == 0) {
                // break -> 0x4090c0
                break;
            }
        } else {
            // 0x4090a2
            v12 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v12;
            v9 = v12;
            v8 = v6;
            v7 = v4 + 8;
            result = v12;
            if (v12 == 0) {
                // break -> 0x4090c0
                break;
            }
        }
        // 0x409092
        v13 = v5 + 1;
        result = v9;
    }
    // 0x4090c0
    return result;
}
// Address range: 0x4090e0 - 0x409154
int64_t function_4090e0(int64_t a1) {
    // 0x4090e0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x409143
    return fputs_unlocked(v1, g48);
}
// Address range: 0x409160 - 0x40917a
int64_t function_409160(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409164
    if (size != 0 != (mem == NULL)) {
        // 0x409173
        return (int64_t)mem;
    }
    // 0x409175
    function_4093b0(size);
    // UNREACHABLE
}
// Address range: 0x409180 - 0x4091a1
int64_t function_409180(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x409183
    int64_t v2 = v1; // 0x409183
    if (v2 < 0) {
        // 0x40919b
        function_4093b0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409199
        return function_409160(v2);
    }
    // 0x40919b
    function_4093b0(v2);
    // UNREACHABLE
}
// Address range: 0x4091b0 - 0x4091b2
int64_t function_4091b0(void) {
    // 0x4091b0
    int64_t v1; // 0x4091b0
    return function_409160(v1);
}
// Address range: 0x4091c0 - 0x4091f6
int64_t function_4091c0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4091e8
        free(v1);
        return (int32_t)&g127 ^ (int32_t)&g127;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4091d1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4091e0
        return (int64_t)mem;
    }
    // 0x4091f1
    function_4093b0(a1);
    // UNREACHABLE
}
// Address range: 0x409200 - 0x409221
int64_t function_409200(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x409203
    int64_t v2 = v1; // 0x409203
    if (v2 < 0) {
        // 0x40921b
        function_4093b0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409219
        return function_4091c0(a1, v2);
    }
    // 0x40921b
    function_4093b0(a1);
    // UNREACHABLE
}
// Address range: 0x409230 - 0x4092b6
int64_t function_409230(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40928b
            function_4093b0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4091c0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x409273
    if (a2 == 0) {
        // 0x409298
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x409278
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40928b
        function_4093b0(a1);
        // UNREACHABLE
    }
    // 0x40925a
    *(int64_t *)a2 = v2;
    return function_4091c0(a1, v2 * a3);
}
// Address range: 0x4092c0 - 0x409310
int64_t function_4092c0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4092c0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40930a
            function_4093b0(a1);
            // UNREACHABLE
        }
        // 0x4092e2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4091c0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4092f5
        *(int64_t *)a2 = 128;
        return function_4091c0(0, 128);
    }
    // 0x409308
    if (a2 < 0) {
        // 0x40930a
        function_4093b0(a1);
        // UNREACHABLE
    }
    // 0x4092e2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4091c0(a1, v1);
}
// Address range: 0x409310 - 0x409327
int64_t function_409310(int64_t a1, int64_t a2) {
    // 0x409310
    return (int64_t)memset((int64_t *)function_409160(a1), 0, (int32_t)a1);
}
// Address range: 0x409330 - 0x40935e
int64_t function_409330(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x409337
    if ((int64_t)v1 < 0) {
        // 0x409359
        function_4093b0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x409359
        function_4093b0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40934a
    if (mem != NULL) {
        // 0x409354
        return (int64_t)mem;
    }
    // 0x409359
    function_4093b0(nmemb);
    // UNREACHABLE
}
// Address range: 0x409360 - 0x409388
int64_t function_409360(int64_t a1, int64_t a2) {
    int64_t v1 = function_409160(a2); // 0x40936f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x409390 - 0x4093a3
int64_t function_409390(int64_t str) {
    // 0x409390
    return function_409360(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4093b0 - 0x4093e1
int64_t function_4093b0(int64_t a1) {
    // 0x4093b0
    error(g37, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4093f0 - 0x40940f
int64_t function_4093f0(void) {
    // 0x4093f0
    int64_t v1; // 0x4093f0
    int64_t v2 = function_41abc0(v1, v1, v1, v1, v1); // 0x4093f1
    if ((int32_t)v2 >= 0 || *__errno_location() != 12) {
        // 0x4093fc
        return v2 & 0xffffffff;
    }
    // 0x40940a
    function_4093b0(v1);
    // UNREACHABLE
}
// Address range: 0x409410 - 0x409437
int64_t function_409410(void) {
    // 0x409410
    int64_t v1; // 0x409410
    int64_t result = function_41ae10(v1, v1, v1, v1, v1); // 0x409411
    if (result != 0 || *__errno_location() != 12) {
        // 0x40941e
        return result;
    }
    // 0x409432
    function_4093b0(v1);
    // UNREACHABLE
}
// Address range: 0x409440 - 0x409467
int64_t function_409440(void) {
    // 0x409440
    int64_t v1; // 0x409440
    int64_t result = function_41afe0(v1, v1, v1); // 0x409441
    if (result != 0 || *__errno_location() != 12) {
        // 0x40944e
        return result;
    }
    // 0x409462
    function_4093b0(v1);
    // UNREACHABLE
}
// Address range: 0x409470 - 0x409bc0
int64_t function_409470(int64_t a1, int32_t a2, uint32_t a3, int64_t * a4, int32_t a5) {
    if (a3 >= 37) {
        // 0x409b99
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        return &g127;
    }
    int64_t str = a5;
    int64_t v1; // bp-64, 0x409470
    int64_t v2 = a2 == 0 ? (int64_t)&v1 : (int64_t)a2; // 0x409498
    int32_t * v3 = __errno_location(); // 0x4094a2
    *v3 = 0;
    char * v4 = (char *)a1;
    int32_t v5 = __strtol_internal(v4, (char **)v2, a3, 0); // 0x4094ba
    int64_t * v6 = (int64_t *)v2; // 0x4094bf
    int64_t v7 = *v6; // 0x4094bf
    int64_t v8; // 0x409470
    int64_t v9; // 0x409470
    int64_t v10; // 0x409470
    char v11; // 0x409470
    int64_t v12; // 0x409470
    int64_t v13; // 0x409470
    int64_t v14; // 0x409470
    if (v7 == a1) {
        // 0x409518
        if (a5 == 0) {
            // 0x4094ee
            return 4;
        }
        char c = *v4; // 0x409521
        if (c == 0) {
            // 0x4094ee
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40953f
        v13 = 1;
        v9 = 0;
        v11 = c;
        if (found_char_pos == NULL) {
            // 0x4094ee
            return 4;
        }
        goto lab_0x40954d;
    } else {
        int32_t v15 = *v3; // 0x4094ca
        int64_t v16 = 0; // 0x4094d0
        if (v15 != 0) {
            // 0x409500
            v16 = 1;
            if (v15 != 34) {
                // 0x4094ee
                return 4;
            }
        }
        int64_t v17 = v5; // 0x4094ba
        v12 = v17;
        v8 = v16;
        if (a5 == 0) {
            goto lab_0x4094e7;
        } else {
            char c2 = *(char *)v7; // 0x4094da
            v12 = v17;
            v8 = v16;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x4095e7
                v13 = v17;
                v9 = v16;
                v11 = c2;
                v14 = v17;
                v10 = v16;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40954d;
                } else {
                    goto lab_0x4095f5;
                }
            } else {
                goto lab_0x4094e7;
            }
        }
    }
  lab_0x40954d:;
    int64_t v18 = v9;
    int64_t v19 = v13;
    unsigned char v20 = v11 - 69;
    int64_t v21 = 1024; // 0x409554
    int64_t v22 = 1; // 0x409554
    int64_t v23; // 0x409470
    int64_t v24; // 0x409470
    int64_t v25; // 0x409470
    int64_t v26; // 0x409470
    int64_t v27; // 0x409470
    int64_t v28; // 0x409470
    int64_t v29; // 0x409470
    int64_t v30; // 0x409470
    int64_t v31; // 0x409470
    int64_t v32; // 0x409470
    int64_t v33; // 0x409470
    int64_t v34; // 0x409470
    int64_t v35; // 0x409470
    int64_t v36; // 0x409470
    int64_t v37; // 0x409470
    int64_t v38; // 0x409470
    int64_t v39; // 0x409470
    int64_t v40; // 0x409470
    int64_t v41; // 0x409470
    if (v20 < 48) {
        // 0x409580
        v21 = 1024;
        v22 = 1;
        if ((1 << (int64_t)((v11 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x409560;
        } else {
            // 0x409594
            v21 = 1024;
            v22 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x409560;
            } else {
                // 0x4095a6
                v21 = 1000;
                v22 = 2;
                switch (*(char *)(v7 + 1)) {
                    case 68: {
                        goto lab_0x409560;
                    }
                    case 105: {
                        char v42 = *(char *)(v7 + 2); // 0x409b82
                        v21 = 1024;
                        v22 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x409560;
                    }
                    default: {
                        // 0x4095bb
                        g129 = v20;
                        v21 = 1000;
                        v22 = 2;
                        v14 = v19;
                        v10 = v18;
                        v24 = v19;
                        v31 = 1;
                        v23 = v18;
                        v25 = 1024;
                        v32 = 1;
                        v36 = -0x20000000000000;
                        v37 = 1;
                        v26 = 1024;
                        v33 = 1;
                        v39 = -0x20000000000000;
                        v27 = 1024;
                        v34 = 1;
                        v41 = -0x20000000000000;
                        v28 = 1024;
                        v35 = 1;
                        v40 = -0x20000000000000;
                        v29 = 1024;
                        v30 = 1;
                        v38 = -0x20000000000000;
                        switch (v11) {
                            case 69: {
                                goto lab_0x409848;
                            }
                            case 70: {
                                goto lab_0x4095f5;
                            }
                            case 71: {
                                goto lab_0x4098b0;
                            }
                            case 72: {
                                goto lab_0x4095f5;
                            }
                            case 73: {
                                goto lab_0x4095f5;
                            }
                            case 74: {
                                goto lab_0x4095f5;
                            }
                            case 75: {
                                goto lab_0x409695;
                            }
                            case 76: {
                                goto lab_0x4095f5;
                            }
                            case 77: {
                                goto lab_0x4096d8;
                            }
                            case 78: {
                                goto lab_0x4095f5;
                            }
                            case 79: {
                                goto lab_0x4095f5;
                            }
                            case 80: {
                                goto lab_0x409778;
                            }
                            case 81: {
                                goto lab_0x4095f5;
                            }
                            case 82: {
                                goto lab_0x4095f5;
                            }
                            case 83: {
                                goto lab_0x4095f5;
                            }
                            case 84: {
                                goto lab_0x4097e0;
                            }
                            case 85: {
                                goto lab_0x4095f5;
                            }
                            case 86: {
                                goto lab_0x4095f5;
                            }
                            case 87: {
                                goto lab_0x4095f5;
                            }
                            case 88: {
                                goto lab_0x4095f5;
                            }
                            case 89: {
                                goto lab_0x409918;
                            }
                            case 90: {
                                goto lab_0x409980;
                            }
                            case 91: {
                                goto lab_0x4095f5;
                            }
                            case 92: {
                                goto lab_0x4095f5;
                            }
                            case 93: {
                                goto lab_0x4095f5;
                            }
                            case 94: {
                                goto lab_0x4095f5;
                            }
                            case 95: {
                                goto lab_0x4095f5;
                            }
                            case 96: {
                                goto lab_0x4095f5;
                            }
                            case 97: {
                                goto lab_0x4095f5;
                            }
                            case 98: {
                                goto lab_0x409745;
                            }
                            case 99: {
                                goto lab_0x409638;
                            }
                            case 100: {
                                goto lab_0x4095f5;
                            }
                            case 101: {
                                goto lab_0x4095f5;
                            }
                            case 102: {
                                goto lab_0x4095f5;
                            }
                            case 103: {
                                goto lab_0x4098b0;
                            }
                            case 104: {
                                goto lab_0x4095f5;
                            }
                            case 105: {
                                goto lab_0x4095f5;
                            }
                            case 106: {
                                goto lab_0x4095f5;
                            }
                            case 107: {
                                goto lab_0x409695;
                            }
                            case 108: {
                                goto lab_0x4095f5;
                            }
                            case 109: {
                                goto lab_0x4096d8;
                            }
                            case 110: {
                                goto lab_0x4095f5;
                            }
                            case 111: {
                                goto lab_0x4095f5;
                            }
                            case 112: {
                                goto lab_0x4095f5;
                            }
                            case 113: {
                                goto lab_0x4095f5;
                            }
                            case 114: {
                                goto lab_0x4095f5;
                            }
                            case 115: {
                                goto lab_0x4095f5;
                            }
                            case 116: {
                                goto lab_0x4097e0;
                            }
                            default: {
                                goto lab_0x409560;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x409560;
    }
  lab_0x4094e7:
    // 0x4094e7
    *a4 = v12;
    // 0x4094ee
    return v8 & 0xffffffff;
  lab_0x409560:
    // 0x409560
    g128 = v11 - 66;
    v14 = v19;
    v10 = v18;
    v24 = v19;
    v31 = v22;
    v23 = v18;
    v37 = v22;
    switch (v11) {
        case 66: {
            // 0x409631
            v24 = 1024 * v19;
            v31 = v22;
            v23 = v18;
            goto lab_0x409638;
        }
        case 69: {
            // 0x409830
            v28 = v21;
            v35 = v22;
            v40 = -0x8000000000000000 / (int128_t)v21;
            goto lab_0x409848;
        }
        case 71: {
            goto lab_0x4098b0;
        }
        case 75: {
            goto lab_0x409695;
        }
        case 77: {
            goto lab_0x4096c0;
        }
        case 80: {
            // 0x409760
            v26 = v21;
            v33 = v22;
            v39 = -0x8000000000000000 / (int128_t)v21;
            goto lab_0x409778;
        }
        case 84: {
            goto lab_0x4097c8;
        }
        case 89: {
            // 0x409900
            goto lab_0x409918;
        }
        case 90: {
            // 0x409968
            v29 = v21;
            v30 = v22;
            v38 = -0x8000000000000000 / (int128_t)v21;
            goto lab_0x409980;
        }
        case 98: {
            goto lab_0x409745;
        }
        case 99: {
            goto lab_0x409638;
        }
        case 103: {
            goto lab_0x4098b0;
        }
        case 107: {
            goto lab_0x409695;
        }
        case 109: {
            goto lab_0x4096c0;
        }
        case 116: {
            goto lab_0x4097c8;
        }
        case 119: {
            // 0x409679
            v24 = 2 * v19;
            v31 = v22;
            v23 = v18;
            goto lab_0x409638;
        }
        default: {
            goto lab_0x4095f5;
        }
    }
    // 0x409898
    goto lab_0x4098b0;
    // 0x409680
    goto lab_0x409695;
  lab_0x4096c0:
    // 0x4096c0
    v25 = v21;
    v32 = v22;
    v36 = -0x8000000000000000 / (int128_t)v21;
    goto lab_0x4096d8;
  lab_0x4097c8:
    // 0x4097c8
    v27 = v21;
    v34 = v22;
    v41 = -0x8000000000000000 / (int128_t)v21;
    goto lab_0x4097e0;
  lab_0x409745:
    // 0x409745
    v24 = 512 * v19;
    v31 = v37;
    v23 = v18;
    goto lab_0x409638;
  lab_0x409638:;
    int64_t v62 = v23;
    int64_t v63 = v31 + v7; // 0x409638
    *v6 = v63;
    v12 = v24;
    v8 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x4094e7;
  lab_0x4095f5:
    // 0x4095f5
    *a4 = v14;
    // 0x4094ee
    return (v10 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x409848:;
    uint64_t v64 = v28;
    int64_t v65 = v19;
    int64_t v66 = -0x8000000000000000; // 0x409881
    int64_t v67 = 1; // 0x409881
    if (v65 >= v40) {
        // 0x409860
        v66 = v65 > 0x7fffffffffffffff / v64 ? 0x7fffffffffffffff : v65 * v64;
        v67 = v65 > 0x7fffffffffffffff / v64 ? 1 : 0;
    }
    int32_t v68 = 5; // 0x409875
    int32_t v69 = v68; // 0x409878
    int64_t v70 = v67; // 0x409878
    int64_t v58 = v66; // 0x409878
    int64_t v60 = v35; // 0x409878
    int64_t v61 = v67; // 0x409878
    while (v68 != 0) {
        // 0x40987e
        v65 = v66;
        v66 = -0x8000000000000000;
        v67 = 1;
        if (v65 >= v40) {
            // 0x409860
            v66 = v65 > 0x7fffffffffffffff / v64 ? 0x7fffffffffffffff : v65 * v64;
            v67 = v65 > 0x7fffffffffffffff / v64 ? 1 : v70;
        }
        // 0x409875
        v68 = v69 - 1;
        v69 = v68;
        v70 = v67;
        v58 = v66;
        v60 = v35;
        v61 = v67;
    }
    goto lab_0x409ab0;
  lab_0x4098b0:
    // 0x4098b0
    while (true) {
        // 0x4098e6
        int32_t v43; // 0x409470
        int32_t v44 = v43;
        int64_t v45; // 0x409470
        int64_t v46 = v45;
        int64_t v47 = -0x8000000000000000; // 0x4098e9
        int64_t v48 = 1; // 0x4098e9
        int64_t v49; // 0x409470
        uint64_t v50; // 0x409470
        if (v46 >= v50) {
            int64_t v51 = v49;
            uint64_t v52; // 0x409470
            int64_t v53 = v46 > 0x7fffffffffffffff / v52 ? 0x7fffffffffffffff : v46 * v52;
            int64_t v54 = v46 > 0x7fffffffffffffff / v52 ? 1 : v51;
            v47 = v53;
            v48 = v54;
        }
        int64_t v55 = v48;
        int64_t v56 = v47;
        int32_t v57 = v44 - 1; // 0x4098dd
        v45 = v56;
        v43 = v57;
        v49 = v55;
        v58 = v56;
        int64_t v59; // 0x409470
        v60 = v59;
        v61 = v55;
        if (v57 == 0) {
            // break -> 0x409ab0
            break;
        }
    }
    goto lab_0x409ab0;
  lab_0x409695:;
    int64_t v75 = 1;
    v24 = -0x8000000000000000;
    v31 = v75;
    v23 = 1;
    int64_t v72; // 0x409470
    int64_t v73; // 0x409470
    int64_t v74; // 0x409470
    int64_t v71; // 0x409470
    if (v19 < -0x20000000000000) {
        goto lab_0x409638;
    } else {
        int64_t v76 = 1024;
        v72 = 0x7fffffffffffffff / v76;
        v74 = v76;
        v73 = v19;
        v71 = v75;
        goto lab_0x4096ac;
    }
  lab_0x4096d8:
    // 0x4096d8
    v24 = -0x8000000000000000;
    v31 = v32;
    v23 = 1;
    if (v19 < v36) {
        goto lab_0x409638;
    } else {
        int64_t v77 = 0x7fffffffffffffff / v25;
        v24 = 0x7fffffffffffffff;
        v31 = v32;
        v23 = 1;
        if (v19 > v77) {
            goto lab_0x409638;
        } else {
            int64_t v78 = v25 * v19; // 0x4096f8
            v24 = -0x8000000000000000;
            v31 = v32;
            v23 = 1;
            v72 = v77;
            v74 = v25;
            v73 = v78;
            v71 = v32;
            if (v78 < v36) {
                goto lab_0x409638;
            } else {
                goto lab_0x4096ac;
            }
        }
    }
  lab_0x409778:;
    uint64_t v79 = v26;
    int64_t v80 = v19;
    int64_t v81 = -0x8000000000000000; // 0x4097b1
    int64_t v82 = 1; // 0x4097b1
    if (v39 <= v80) {
        // 0x409790
        v81 = v80 > 0x7fffffffffffffff / v79 ? 0x7fffffffffffffff : v80 * v79;
        v82 = v80 > 0x7fffffffffffffff / v79 ? 1 : 0;
    }
    int32_t v83 = 4; // 0x4097a5
    int32_t v84 = v83; // 0x4097a8
    int64_t v85 = v82; // 0x4097a8
    v58 = v81;
    v60 = v33;
    v61 = v82;
    while (v83 != 0) {
        // 0x4097ae
        v80 = v81;
        v81 = -0x8000000000000000;
        v82 = 1;
        if (v39 <= v80) {
            // 0x409790
            v81 = v80 > 0x7fffffffffffffff / v79 ? 0x7fffffffffffffff : v80 * v79;
            v82 = v80 > 0x7fffffffffffffff / v79 ? 1 : v85;
        }
        // 0x4097a5
        v83 = v84 - 1;
        v84 = v83;
        v85 = v82;
        v58 = v81;
        v60 = v33;
        v61 = v82;
    }
    goto lab_0x409ab0;
  lab_0x4097e0:;
    uint64_t v86 = v27;
    int64_t v87 = v19;
    int64_t v88 = -0x8000000000000000; // 0x409819
    int64_t v89 = 1; // 0x409819
    if (v41 <= v87) {
        // 0x4097f8
        v88 = v87 > 0x7fffffffffffffff / v86 ? 0x7fffffffffffffff : v87 * v86;
        v89 = v87 > 0x7fffffffffffffff / v86 ? 1 : 0;
    }
    int32_t v90 = 3; // 0x40980d
    int32_t v91 = v90; // 0x409810
    int64_t v92 = v89; // 0x409810
    v58 = v88;
    v60 = v34;
    v61 = v89;
    while (v90 != 0) {
        // 0x409816
        v87 = v88;
        v88 = -0x8000000000000000;
        v89 = 1;
        if (v41 <= v87) {
            // 0x4097f8
            v88 = v87 > 0x7fffffffffffffff / v86 ? 0x7fffffffffffffff : v87 * v86;
            v89 = v87 > 0x7fffffffffffffff / v86 ? 1 : v92;
        }
        // 0x40980d
        v90 = v91 - 1;
        v91 = v90;
        v92 = v89;
        v58 = v88;
        v60 = v34;
        v61 = v89;
    }
    goto lab_0x409ab0;
  lab_0x409918:
    // 0x409918
    while (true) {
        // 0x40994e
        int32_t v93; // 0x409470
        int32_t v94 = v93;
        int64_t v95; // 0x409470
        int64_t v96 = v95;
        int64_t v97 = -0x8000000000000000; // 0x409951
        int64_t v98 = 1; // 0x409951
        int64_t v99; // 0x409470
        uint64_t v100; // 0x409470
        if (v100 <= v96) {
            int64_t v101 = v99;
            uint64_t v102; // 0x409470
            int64_t v103 = v96 > 0x7fffffffffffffff / v102 ? 0x7fffffffffffffff : v96 * v102;
            int64_t v104 = v96 > 0x7fffffffffffffff / v102 ? 1 : v101;
            v97 = v103;
            v98 = v104;
        }
        int64_t v105 = v98;
        int64_t v106 = v97;
        int32_t v107 = v94 - 1; // 0x409945
        v95 = v106;
        v93 = v107;
        v99 = v105;
        v58 = v106;
        int64_t v108; // 0x409470
        v60 = v108;
        v61 = v105;
        if (v107 == 0) {
            // break -> 0x409ab0
            break;
        }
    }
    goto lab_0x409ab0;
  lab_0x409980:;
    uint64_t v109 = v29;
    int64_t v110 = v19;
    int64_t v111 = -0x8000000000000000; // 0x4099b9
    int64_t v112 = 1; // 0x4099b9
    if (v38 <= v110) {
        // 0x409998
        v111 = v110 > 0x7fffffffffffffff / v109 ? 0x7fffffffffffffff : v110 * v109;
        v112 = v110 > 0x7fffffffffffffff / v109 ? 1 : 0;
    }
    int32_t v113 = 6; // 0x4099ad
    int32_t v114 = v113; // 0x4099b0
    int64_t v115 = v112; // 0x4099b0
    v58 = v111;
    v60 = v30;
    v61 = v112;
    while (v113 != 0) {
        // 0x4099b6
        v110 = v111;
        v111 = -0x8000000000000000;
        v112 = 1;
        if (v38 <= v110) {
            // 0x409998
            v111 = v110 > 0x7fffffffffffffff / v109 ? 0x7fffffffffffffff : v110 * v109;
            v112 = v110 > 0x7fffffffffffffff / v109 ? 1 : v115;
        }
        // 0x4099ad
        v113 = v114 - 1;
        v114 = v113;
        v115 = v112;
        v58 = v111;
        v60 = v30;
        v61 = v112;
    }
    goto lab_0x409ab0;
  lab_0x409ab0:
    // 0x409ab0
    v24 = v58;
    v31 = v60;
    v23 = (v61 | v18) & 0xffffffff;
    goto lab_0x409638;
  lab_0x4096ac:
    // 0x4096ac
    v24 = 0x7fffffffffffffff;
    v31 = v71;
    v23 = 1;
    if (v72 >= v73) {
        // 0x4096b5
        v24 = v73 * v74;
        v31 = v71;
        v23 = v18;
    }
    goto lab_0x409638;
}
// Address range: 0x409bc0 - 0x409c3b
int64_t function_409bc0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x409bc7
    if (fileno(stream) < 0) {
        // 0x409c27
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x409bda
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x409c0b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x409c27
            return fclose(stream);
        }
    }
    // 0x409bdc
    if ((int32_t)function_409c40(a1, v1) == 0) {
        // 0x409c27
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x409be8
    int32_t v3 = *v2; // 0x409bf0
    int64_t result = fclose(stream); // 0x409bfe
    if (v3 != 0) {
        // 0x409c30
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x409c00
    return result;
}
// Address range: 0x409c40 - 0x409c80
int64_t function_409c40(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x409c5a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x409c5a
        return fflush(stream);
    }
    // 0x409c68
    function_409d20(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409c80 - 0x409d1e
int64_t function_409c80(int64_t a1, int64_t a2) {
    char * file_path = (char *)a1; // 0x409c8e
    char * mode = (char *)a2; // 0x409c8e
    int64_t stream; // 0x409c80
    struct _IO_FILE * file = freopen(file_path, mode, (struct _IO_FILE *)stream); // 0x409c8e
    if (a1 == 0 || file == NULL) {
        // 0x409cb8
        return (int64_t)file;
    }
    int32_t fd2 = fileno(file); // 0x409ca3
    if (dup2(fd2, fd2) >= 0 || *__errno_location() != 9) {
        // 0x409cb8
        return (int64_t)file;
    }
    int32_t fd = open("/dev/null", O_CLOEXEC); // 0x409cde
    if (fd == fd2) {
        // 0x409d01
        return (int64_t)freopen(file_path, mode, file);
    }
    int32_t v1 = dup2(fd, fd2); // 0x409cf0
    close(fd);
    if (v1 < 0) {
        // 0x409cb8
        return (int64_t)file;
    }
    // 0x409d01
    return (int64_t)freopen(file_path, mode, file);
}
// Address range: 0x409d20 - 0x409d77
int64_t function_409d20(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409d20
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x409d2a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x409d5b
    int64_t result = -1; // 0x409d64
    if (v1 != -1) {
        // 0x409d66
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x409d72
    return result;
}
// Address range: 0x409d80 - 0x409e5f
int64_t function_409d80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x409d8c
    uint32_t v2 = *v1; // 0x409d8c
    int64_t v3 = a2 & 0xffffffff; // 0x409d91
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x409d94
    uint64_t v5 = (int64_t)*v4; // 0x409d94
    int64_t v6; // 0x409e02
    if (v3 <= v5) {
      lab_0x409dfc_2:
        // 0x409dfc
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x409d82
    int64_t v8 = v2; // 0x409d80
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x409dfc
        goto lab_0x409dfc_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x409db8
    int64_t v17; // 0x409dc6
    int64_t * v18; // 0x409de0
    int64_t * v19; // 0x409de3
    int64_t v20; // 0x409dee
    int64_t v21; // 0x409dc6
    while ((v16 & 0xffffffff) > v10) {
        // 0x409dc3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x409de0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x409df7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x409dfc
            goto lab_0x409dfc_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x409dfc
            goto lab_0x409dfc_2;
        }
        // 0x409db2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x409e3b
    int64_t * v23 = (int64_t *)v22; // 0x409e40
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x409e43
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x409e40
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x409e57
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x409dad
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x409dfc
            goto lab_0x409dfc_2;
        }
        // 0x409db2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x409dc3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x409de0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x409df7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x409dfc
                goto lab_0x409dfc_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x409dfc
                goto lab_0x409dfc_2;
            }
            // 0x409db2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x409e20
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x409e40
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x409e57
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x409dfc
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x409e60 - 0x40a47c
int64_t function_409e60(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x409e7f
    int64_t v2 = *v1; // 0x409e7f
    char * str2 = (char *)v2; // 0x409e8c
    char c = *str2; // 0x409e8c
    int64_t v3 = v2; // 0x409eb8
    int64_t v4 = 0; // 0x409e60
    int32_t v5; // 0x409e60
    int64_t v6; // 0x409e60
    int64_t v7; // 0x409e60
    int64_t v8; // 0x409e60
    int64_t v9; // 0x409e60
    int64_t v10; // 0x409e60
    int64_t v11; // 0x409e60
    int64_t v12; // 0x409e60
    int64_t v13; // 0x409e60
    int64_t str3; // 0x409e60
    int64_t v14; // 0x409e60
    int64_t v15; // 0x409e60
    int64_t v16; // 0x409e60
    int64_t v17; // 0x409e60
    int32_t v18; // 0x409e60
    int32_t v19; // 0x409e60
    int32_t v20; // 0x409e60
    int32_t v21; // 0x409e60
    int32_t v22; // 0x409e60
    int32_t v23; // 0x409e60
    int32_t v24; // 0x409e60
    int32_t v25; // 0x409e60
    int32_t v26; // 0x409e60
    int32_t v27; // 0x409e60
    int32_t v28; // 0x409e60
    int32_t v29; // 0x409e60
    int64_t nmemb; // 0x409e60
    int64_t v30; // 0x409e60
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x409ebc
            while (v31 != 0 == (v31 != 61)) {
                // 0x409eb8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x409ec8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x409ece
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x409e98
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x409efc
                int64_t v34; // 0x409e60
                int64_t v35; // 0x409e60
                if (strncmp(str, str2, n) == 0) {
                    // 0x409f05
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40a080;
                    }
                }
                int64_t v36 = a4 + 32; // 0x409f16
                int64_t v37 = *(int64_t *)v36; // 0x409f1a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x409ef0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x409f05
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40a080;
                        }
                    }
                    // 0x409f16
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
                  lab_0x409f66:
                    // 0x409f66
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
                        goto lab_0x409fc0;
                    } else {
                        if (v11 == 0) {
                            // 0x40a130
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x409fc0;
                        } else {
                            if (v39 == 0) {
                                // 0x40a0e0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x409f8a;
                                } else {
                                    // 0x40a0ec
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x409f8a;
                                    } else {
                                        // 0x40a0fa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x409f8a;
                                        } else {
                                            goto lab_0x409fc0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x409f8a;
                            }
                        }
                    }
                }
              lab_0x409fd1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40a1a6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40a352
                            flockfile(g51);
                            int64_t v41 = *v1; // 0x40a372
                            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40a3bf
                            int64_t v43 = (int64_t)g51;
                            int64_t v44 = v43; // 0x40a3d9
                            int64_t v45; // 0x40a3db
                            if (*(char *)v42 != 0) {
                                // 0x40a3db
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g51;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40a3d3
                            while (v17 + nmemb != v42) {
                                // 0x40a3d5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40a3db
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g51;
                                }
                                // 0x40a3c8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40a400
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g51);
                            v40 = *v1;
                        } else {
                            // 0x40a1b4
                            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40a30f
                        free((int64_t *)v17);
                    }
                    // 0x40a209
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40a220
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40a0ce
                    return 63;
                }
                // 0x409ff0
                v5 = v39;
                if (v13 != 0) {
                    // 0x40a074
                    v35 = v13;
                    v34 = v25;
                  lab_0x40a080:;
                    int32_t * v49 = (int32_t *)a7; // 0x40a090
                    uint32_t v50 = *v49; // 0x40a090
                    int64_t v51 = v50; // 0x40a090
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40a09a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40a0a3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40a2cf
                                __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40a27a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40a0ce
                            return 63;
                        }
                        // 0x40a118
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40a42f
                                    __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40a32d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40a340
                                // 0x40a0ce
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40a23e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40a252
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40a0bb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40a0be
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40a0c2
                    int64_t result = v59; // 0x40a0c8
                    if (v58 != 0) {
                        // 0x40a0ca
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40a0ce
                    return result;
                }
            } else {
                // 0x409ece
                v5 = v32;
            }
            // break -> 0x409ff5
            break;
        }
    }
    // 0x409ff5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40a00d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40a017
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40a0ce
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40a159
        __fprintf_chk(g51, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40a046
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40a056
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x409fc0:
    // 0x409fc0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x409fc0
    int64_t v63 = *(int64_t *)v62; // 0x409fc4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x409fd1
        goto lab_0x409fd1;
    }
    goto lab_0x409f66;
  lab_0x409f8a:
    // 0x409f8a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x409e60
    int32_t v65; // 0x409e60
    int32_t v66; // 0x409e60
    if (v27 != 0) {
        goto lab_0x409fc0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40a140
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x409fc0;
            } else {
                goto lab_0x409fb1;
            }
        } else {
            // 0x409fa5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40a29c
                int64_t v67 = (int64_t)mem; // 0x40a29c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x409fc0;
                } else {
                    // 0x40a2af
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x409fb1;
                }
            } else {
                goto lab_0x409fb1;
            }
        }
    }
  lab_0x409fb1:
    // 0x409fb1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x409fc0;
}
// Address range: 0x40a480 - 0x40aa46
int64_t function_40a480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40a4a1
    if (v3 < 1) {
        // 0x40a65e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40a49d
    int32_t v5 = *(int32_t *)a7; // 0x40a4a9
    uint64_t v6 = a1 & 0xffffffff; // 0x40a4ab
    int64_t v7 = v2; // 0x40a4b0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40a4b3
    *v8 = 0;
    int64_t v9; // 0x40a480
    int64_t v10; // 0x40a480
    int64_t v11; // 0x40a480
    int64_t v12; // 0x40a480
    int64_t str; // 0x40a480
    int64_t v13; // 0x40a480
    int64_t v14; // 0x40a480
    int64_t v15; // 0x40a480
    int64_t v16; // 0x40a480
    int64_t v17; // 0x40a480
    int32_t v18; // 0x40a480
    char v19; // 0x40a480
    if (v5 == 0) {
        // 0x40a698
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40a4ca;
    } else {
        // 0x40a4c3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40a510
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40a513
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40a5d8;
            } else {
                int64_t v22 = v7 + 1; // 0x40a526
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40a536
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40a5ec;
                } else {
                    goto lab_0x40a548;
                }
            }
        } else {
            goto lab_0x40a4ca;
        }
    }
  lab_0x40a4ca:
    // 0x40a4ca
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40a4d0
    *v24 = 0;
    int64_t v25; // 0x40a480
    int64_t v26; // 0x40a480
    int64_t v27; // 0x40a480
    switch (*(char *)&v2) {
        case 45: {
            // 0x40a5c0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a5cd;
        }
        case 43: {
            // 0x40a8d0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40a5cd;
        }
        default: {
            // 0x40a4ec
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40a84f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40a968
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40a5cd;
                } else {
                    // 0x40a85d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40a4fa;
                }
            } else {
                goto lab_0x40a4fa;
            }
        }
    }
  lab_0x40a5d8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40a5df
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40a548;
    } else {
        goto lab_0x40a5ec;
    }
  lab_0x40a4fa:
    // 0x40a4fa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40a5cd;
  lab_0x40a5cd:
    // 0x40a5cd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40a5d8;
  lab_0x40a548:;
    uint32_t v30 = *(int32_t *)a7; // 0x40a548
    int64_t v31 = v30; // 0x40a548
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40a54a
    if ((int64_t)*v32 > v31) {
        // 0x40a54f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40a552
    if (*v33 > v30) {
        // 0x40a557
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40a55a
    int64_t v35 = v31; // 0x40a55e
    int64_t v36 = v15; // 0x40a55e
    int64_t v37; // 0x40a480
    int64_t v38; // 0x40a480
    int64_t v39; // 0x40a480
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40a6c8
        int64_t v41 = v40; // 0x40a6c8
        v2 = v41;
        int64_t v42; // 0x40a480
        if (*v33 == v40) {
            // 0x40a8b0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a8b8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40a6d4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40a6d8
                function_409d80(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40a6e8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40a6f1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40a6fa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40a711
            int64_t v47 = v45 & 0xffffffff; // 0x40a715
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40a71e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40a724
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40a726;
                }
            }
            int64_t v48 = v47 + 1; // 0x40a700
            int64_t v49 = v48 & 0xffffffff; // 0x40a700
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40a711
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40a71e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40a724
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40a726;
                    }
                }
                // 0x40a700
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40a8c8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40a726;
    } else {
        goto lab_0x40a564;
    }
  lab_0x40a5ec:
    // 0x40a5ec
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40a5ef
    int64_t v51 = v12; // 0x40a5ef
    int64_t v52 = v14; // 0x40a5ef
    if (*(char *)v10 == 0) {
        goto lab_0x40a548;
    } else {
        goto lab_0x40a5f5;
    }
  lab_0x40a564:;
    int32_t v53 = v35; // 0x40a564
    int64_t v54; // 0x40a480
    int64_t v55; // 0x40a480
    int64_t v56; // 0x40a480
    int64_t v57; // 0x40a480
    int64_t v58; // 0x40a480
    int64_t v59; // 0x40a480
    char * v60; // 0x40a480
    int64_t v61; // 0x40a480
    int64_t v62; // 0x40a579
    int64_t v63; // 0x40a480
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40a6b3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40a6b6;
    } else {
        // 0x40a56c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40a480
        int64_t v66 = v65 ? -1 : 1; // 0x40a580
        int64_t v67 = (int64_t)"--"; // 0x40a480
        int64_t v68 = v62; // 0x40a480
        int64_t v69 = 3; // 0x40a580
        unsigned char v70 = *(char *)v68; // 0x40a580
        char v71 = *(char *)v67; // 0x40a580
        char v72 = v71; // 0x40a580
        bool v73 = false; // 0x40a580
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
            // 0x40a670
            if (*(char *)v62 == 45) {
                // 0x40a730
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40a730
                if (c == 0) {
                    goto lab_0x40a67a;
                } else {
                    // 0x40a73d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40a7c0;
                    } else {
                        if (c == 45) {
                            // 0x40a9a3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40a815;
                        } else {
                            // 0x40a74e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40a7c0;
                            } else {
                                // 0x40a753
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40a774;
                                } else {
                                    // 0x40a75a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40a7c0;
                                    } else {
                                        goto lab_0x40a774;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40a67a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40a590
            v2 = v75;
            int32_t v76 = *v32; // 0x40a593
            int64_t v77 = v35 + 1; // 0x40a596
            int32_t v78 = v77; // 0x40a599
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40a900
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40a5a7
                    function_409d80(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40a5b5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40a6b6;
        }
    }
  lab_0x40a5f5:;
    // 0x40a5f5
    int64_t v79; // bp-104, 0x40a480
    int64_t v80 = &v79; // 0x40a48a
    int64_t v81 = v50 + 1; // 0x40a5f5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40a5fc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40a601
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40a605
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40a609
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40a611
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40a616
    int32_t c2 = v84; // 0x40a616
    char * found_char_pos = strchr(str2, c2); // 0x40a616
    int64_t v87 = *v82; // 0x40a61b
    v2 = v87;
    int64_t v88 = *v85; // 0x40a625
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40a630
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40a920
            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40a8ed
        *(int32_t *)(v1 + 8) = c2;
        // 0x40a65e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40a616
    char v91 = *(char *)(v90 + 1); // 0x40a64b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40a605
        if (v91 != 58) {
            // 0x40a65e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40a874
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40a978
                *v8 = 0;
            } else {
                // 0x40a95c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40a89e
            *v83 = 0;
            // 0x40a65e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40a87e
        if (v93 != 0) {
            // 0x40a910
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40a89e
            *v83 = 0;
            // 0x40a65e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40a891
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40a89e
            *v83 = 0;
            // 0x40a65e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40a9da
            __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40a98a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40a991
        // 0x40a89e
        *v83 = 0;
        // 0x40a65e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40a7e9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40a7eb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40aa10
                __fprintf_chk(g51, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40a9c1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40a9c8
            // 0x40a65e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40a7f6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40a7fa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40a815;
  lab_0x40a726:
    // 0x40a726
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40a564;
  lab_0x40a815:;
    int64_t v99 = function_409e60(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40a833
    // 0x40a65e
    return v99 & 0xffffffff;
  lab_0x40a6b6:;
    int32_t v100 = v55; // 0x40a6b6
    if (v100 != (int32_t)v59) {
        // 0x40a6ba
        *(int32_t *)a7 = v100;
    }
    // 0x40a65e
    return 0xffffffff;
  lab_0x40a67a:
    // 0x40a67a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40a681
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40a65e
    return v99 & 0xffffffff;
  lab_0x40a7c0:
    // 0x40a7c0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40a5f5;
  lab_0x40a774:
    // 0x40a774
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_409e60(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40a79a
    if ((int32_t)v101 != -1) {
        // 0x40a65e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40a7af
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40a7c0;
}
// Address range: 0x40aa50 - 0x40aaa6
int64_t function_40aa50(int64_t a1) {
    // 0x40aa50
    *(int32_t *)&g117 = *(int32_t *)&g45;
    *(int32_t *)&g118 = g44;
    int64_t v1; // 0x40aa50
    int64_t result = function_40a480(v1, v1, v1, v1, v1, v1, &g117, a1 & 0xffffffff); // 0x40aa76
    *(int32_t *)&g45 = *(int32_t *)&g117;
    g123 = g120;
    *(int32_t *)&g43 = g119;
    return result;
}
// Address range: 0x40aab0 - 0x40aac8
int64_t function_40aab0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40aab0
    return function_40aa50(1);
}
// Address range: 0x40aad0 - 0x40aae3
int64_t function_40aad0(int64_t a1, int64_t a2, char * a3, char (**a4)[15], int32_t a5, int64_t a6) {
    // 0x40aad0
    return function_40aa50(0);
}
// Address range: 0x40aaf0 - 0x40ab05
int64_t function_40aaf0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40aaf0
    return function_40a480(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40ab10 - 0x40ab26
int64_t function_40ab10(void) {
    // 0x40ab10
    return function_40aa50(0);
}
// Address range: 0x40ab30 - 0x40ab48
int64_t function_40ab30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40ab30
    return function_40a480(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40ab50 - 0x40abca
int64_t function_40ab50(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40ab5b
    int64_t v2 = (int64_t)&g19; // 0x40ab5b
    int64_t * pwc; // 0x40ab50
    int64_t v3; // 0x40ab50
    int64_t n; // 0x40ab50
    if (a2 == 0) {
        goto lab_0x40aba2;
    } else {
        // 0x40ab5d
        if (a3 == 0) {
            // 0x40ab88
            return -2;
        }
        // 0x40ab69
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40aba2;
        } else {
            goto lab_0x40ab74;
        }
    }
  lab_0x40aba2:
    // 0x40aba2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40ab50
    pwc = &v4;
    goto lab_0x40ab74;
  lab_0x40ab74:;
    char * wstr = (char *)v3; // 0x40ab7a
    int64_t ps; // 0x40ab50
    int32_t v5 = mbrtowc((int32_t *)pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40ab7a
    int64_t result = v5; // 0x40ab7a
    if (v5 < 0xfffffffe) {
        // 0x40ab88
        return result;
    }
    int64_t result2 = result; // 0x40abb9
    if ((char)function_418ae0(0, v3) == 0) {
        // 0x40abbb
        *(int32_t *)pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40ab88
    return result2;
}
// Address range: 0x40abd0 - 0x40acd4
int64_t function_40abd0(int64_t result, int32_t a2, int64_t a3) {
    // 0x40abd0
    if (a3 == 0) {
        // 0x40ac09
        return 0;
    }
    int64_t v1 = result; // 0x40abdc
    int64_t v2 = a3; // 0x40abdc
    int64_t result2; // 0x40abd0
    if (result % 8 != 0) {
        char v3 = a2; // 0x40abde
        int64_t v4 = result; // 0x40abe1
        if ((char)result == v3) {
            // 0x40ac09
            return result;
        }
        int64_t v5 = a3; // 0x40abe1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40abf0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40ac10;
            }
            // 0x40abf6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40ac09
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40ac09
        return result2;
    }
  lab_0x40ac10:;
    int64_t result3 = v1; // 0x40ac3d
    int64_t v6 = v2; // 0x40ac3d
    if (v2 >= 8) {
        uint64_t v7 = (int64_t)a2;
        int64_t v8 = 256 * v7 & 0xff00 | v7 % 256; // 0x40ac1f
        int64_t v9 = 0x10000 * v8 | v8; // 0x40ac2c
        int64_t v10 = 0x100000000 * v9 | v9; // 0x40ac36
        int64_t v11 = *(int64_t *)v1 ^ v10; // 0x40ac56
        result3 = v1;
        v6 = v2;
        if (((v11 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v11 - 0x101010101010101) == 0) {
            int64_t v12 = v2 - 8; // 0x40ac85
            int64_t v13 = v1 + 8; // 0x40ac89
            while (v12 >= 8) {
                int64_t v14 = *(int64_t *)v13 ^ v10; // 0x40ac73
                result3 = v13;
                v6 = v12;
                if (((v14 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v14 - 0x101010101010101) != 0) {
                    goto lab_0x40ac9c;
                }
                v12 -= 8;
                v13 += 8;
            }
            // 0x40ac93
            result3 = v13;
            v6 = v12;
            if (v12 == 0) {
                // 0x40ac09
                return 0;
            }
        }
    }
  lab_0x40ac9c:;
    char v15 = a2; // 0x40ac9c
    if (*(char *)result3 == v15) {
        // 0x40ac09
        return result3;
    }
    int64_t v16 = result3 + 1;
    result2 = 0;
    while (v16 != v6 + result3) {
        // 0x40acb0
        result2 = v16;
        if (*(char *)v16 == v15) {
            // break -> 0x40ac09
            break;
        }
        v16++;
        result2 = 0;
    }
    // 0x40ac09
    return result2;
}
// Address range: 0x40ace0 - 0x40ad23
int64_t function_40ace0(int64_t a1, int64_t a2, int64_t a3) {
    bool v1 = a1 == 0 | a2 == 0;
    if (v1) {
        // 0x40acfa
        return 0;
    }
    // 0x40acf0
    int64_t v2; // 0x40ace0
    int64_t result = v2 & -256 | (int64_t)v1; // 0x40acec
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x40acf0
    if (v3 != *(int64_t *)(a2 + 8)) {
        // 0x40acfa
        return result;
    }
    int64_t v4 = v3; // 0x40ad12
    v4--;
    int64_t result2 = 1; // 0x40ad16
    while (v4 >= 0) {
        int64_t v5 = 8 * v4; // 0x40ad08
        int64_t v6 = *(int64_t *)(*(int64_t *)(a1 + 16) + v5); // 0x40ad0c
        result2 = result;
        if (v6 != *(int64_t *)(*(int64_t *)(a2 + 16) + v5)) {
            // break -> 0x40acfa
            break;
        }
        v4--;
        result2 = 1;
    }
    // 0x40acfa
    return result2;
}
// Address range: 0x40ad30 - 0x40ad9b
int64_t function_40ad30(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a1; // 0x40ad3d
    int64_t result; // 0x40ad30
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x40ad43
        v1 = v3;
        if (v3 == 0) {
            int64_t v4 = *(int64_t *)(v2 + 16); // 0x40ad4c
            v1 = v4;
            if (v4 == 0) {
                // 0x40ad55
                result = v4;
                if ((int32_t)v4 != 0) {
                    // break -> 0x40ad96
                    break;
                }
                int64_t v5 = *(int64_t *)v2; // 0x40ad68
                result = v4;
                if (v5 == 0) {
                    // break -> 0x40ad96
                    break;
                }
                int64_t v6 = v2;
                int64_t v7 = v5;
                int64_t v8 = *(int64_t *)(v7 + 16); // 0x40ad70
                v1 = v8;
                while (v8 == 0 || v8 == v6) {
                    // 0x40ad89
                    result = v8;
                    if ((int32_t)v8 != 0) {
                        return result;
                    }
                    int64_t v9 = *(int64_t *)v7; // 0x40ad68
                    result = v8;
                    if (v9 == 0) {
                        return result;
                    }
                    v6 = v7;
                    v7 = v9;
                    v8 = *(int64_t *)(v7 + 16);
                    v1 = v8;
                }
            }
        }
    }
  lab_0x40ad96_2:
    // 0x40ad96
    return result;
}
// Address range: 0x40ada0 - 0x40aecf
int64_t function_40ada0(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x40ada0
    uint64_t v3 = *v2; // 0x40ada0
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x40ae30
        *(char *)(v1 + 8) = 2;
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40adae
    char v5 = *(char *)(v4 + v3); // 0x40adb9
    *(char *)a1 = v5;
    if (*(int32_t *)(a2 + 144) >= 2) {
        // 0x40adc2
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x40adc8
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                // 0x40ae07
                *(char *)(v1 + 8) = 1;
                return 1;
            }
        }
    }
    switch (v5) {
        case 92: {
            if (a3 % 2 == 0) {
                // 0x40ae07
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            int64_t v6 = v3 + 1;
            if (v6 >= *(int64_t *)(a2 + 88)) {
                // 0x40ae07
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            // 0x40ae80
            *v2 = v6;
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = *(char *)(v4 + v6);
            return 1;
        }
        case 91: {
            uint64_t v7 = v3 + 1;
            if (v7 >= *(int64_t *)(a2 + 88)) {
                // 0x40ae5e
                *(char *)(v1 + 8) = 1;
                *(char *)a1 = 91;
                return 1;
            }
            char v8 = *(char *)(v4 + v7); // 0x40ae4a
            *(char *)a1 = v8;
            switch (v8) {
                case 58: {
                    if ((a3 & 4) != 0) {
                        // 0x40aec5
                        *(char *)(v1 + 8) = 30;
                        return 2;
                    }
                    // 0x40ae5e
                    *(char *)(v1 + 8) = 1;
                    *(char *)a1 = 91;
                    return 1;
                }
                case 61: {
                    // 0x40aeb0
                    *(char *)(v1 + 8) = 28;
                    return 2;
                }
                case 46: {
                    // 0x40aea0
                    *(char *)(v1 + 8) = 26;
                    return 2;
                }
            }
            // 0x40ae5e
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = 91;
            return 1;
        }
        case 93: {
            // 0x40ae70
            *(char *)(v1 + 8) = 21;
            return 1;
        }
    }
    if (v5 == 94) {
        // 0x40adeb
        *(char *)(v1 + 8) = 25;
        return 1;
    }
    if (v5 == 45) {
        // 0x40ae1d
        *(char *)(v1 + 8) = 22;
        return 1;
    }
    // 0x40ae07
    *(char *)(v1 + 8) = 1;
    return 1;
}
// Address range: 0x40aed0 - 0x40aeed
int64_t function_40aed0(int64_t a1, int64_t a2) {
    // 0x40aed0
    if (*(char *)(a2 + 48) != 17 || *(int64_t *)(a2 + 40) != a1) {
        // 0x40aed6
        return 0;
    }
    char * v1 = (char *)(a2 + 50); // 0x40aee6
    *v1 = *v1 | 8;
    return 0;
}
// Address range: 0x40aef0 - 0x40b0ff
int64_t function_40aef0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x40af05
    uint64_t v2 = 0x100000000 * a2 >> 32; // 0x40af15
    int64_t v3 = *(int64_t *)(v1 + 48) + 24 * a4; // 0x40af1d
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x40af21
    int64_t v5 = *v4; // 0x40af21
    if (v5 < 1) {
        // 0x40b0cd
        return (int32_t)v2 >> 1;
    }
    int64_t v6 = 1 << a3 % 64;
    int32_t v7 = v2;
    int64_t v8 = v5; // 0x40af6e
    int64_t v9 = 0; // 0x40af6e
    int64_t v10; // 0x40af79
    int64_t v11; // 0x40aef0
    int64_t v12; // 0x40aef0
    int64_t v13; // 0x40aef0
    int64_t v14; // 0x40aef0
    while (true) {
      lab_0x40af83_2:
        // 0x40af83
        v13 = v9;
        v10 = v8;
        int64_t v15 = *(int64_t *)(*(int64_t *)(v3 + 16) + 8 * v13); // 0x40af87
        int64_t v16 = 16 * v15 + *(int64_t *)v1; // 0x40af92
        char v17 = *(char *)(v16 + 8); // 0x40af95
        if (v17 == 8) {
            if (v7 % 2 != 0) {
                // 0x40afd0
                if (*(int64_t *)v16 == a3) {
                    // 0x40afb0
                    return 0xffffffff;
                }
            }
            goto lab_0x40af75;
        } else {
            if (v17 != 9) {
                if (a5 == -1 || v17 != 4) {
                    goto lab_0x40af75;
                } else {
                    // 0x40affa
                    v14 = 24 * v15 + 16;
                    v11 = *(int64_t *)(a1 + 216) + 40 * a5;
                    while (true) {
                      lab_0x40b030:
                        // 0x40b030
                        v12 = v11;
                        if (*(int64_t *)v12 != v15) {
                            goto lab_0x40b0a0;
                        } else {
                            if (a3 > 63) {
                                goto lab_0x40b049;
                            } else {
                                // 0x40b03c
                                if ((v6 & (int64_t)*(int16_t *)(v12 + 34)) == 0) {
                                    goto lab_0x40b0a0;
                                } else {
                                    goto lab_0x40b049;
                                }
                            }
                        }
                    }
                  lab_0x40b0ac:;
                    int64_t v18 = v13 + 1; // 0x40b0bf
                    uint64_t v19 = *v4; // 0x40b0c3
                    v8 = v19;
                    v9 = v18;
                    if (v19 <= v18) {
                        // break -> 0x40b0cd
                        break;
                    }
                    goto lab_0x40af83_2;
                }
            } else {
                if ((v7 & 2) != 0) {
                    // 0x40afab
                    if (*(int64_t *)v16 == a3) {
                        // 0x40afb0
                        return 0;
                    }
                }
                goto lab_0x40af75;
            }
        }
    }
  lab_0x40b0cd:
    // 0x40b0cd
    return v7 >> 1;
  lab_0x40b0a0:
    // 0x40b0a0
    v11 = v12 + 40;
    if (*(char *)(v12 + 32) == 0) {
        // break -> 0x40b0ac
        goto lab_0x40b0ac;
    }
    goto lab_0x40b030;
  lab_0x40b049:;
    int64_t v20 = *(int64_t *)*(int64_t *)(v14 + *(int64_t *)(v1 + 40)); // 0x40b052
    if (v20 == a4) {
        // 0x40b0e8
        return -((v2 % 2)) & 0xffffffff;
    }
    int32_t v21 = function_40aef0(a1, v2 & 0xffffffff, a3, v20, a5); // 0x40b073
    if (v21 == -1) {
        // 0x40afb0
        return 0xffffffff;
    }
    // 0x40b07c
    if ((v7 & 2) != 0 == v21 == 0) {
        // 0x40afb0
        return 0;
    }
    if (a3 <= 63) {
        int16_t * v22 = (int16_t *)(v12 + 34); // 0x40b097
        *v22 = *v22 & -1 - (int16_t)v6;
    }
    goto lab_0x40b0a0;
  lab_0x40af75:;
    int64_t v23 = v13 + 1; // 0x40af75
    v8 = v10;
    v9 = v23;
    if (v10 <= v23) {
        // break -> 0x40b0cd
        goto lab_0x40b0cd;
    }
    goto lab_0x40af83;
  lab_0x40af83:
    // 0x40af83
    goto lab_0x40af83_2;
}
// Address range: 0x40b100 - 0x40b166
int64_t function_40b100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a1 + 216) + 40 * a2; // 0x40b10b
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x40b10f
    if (v2 > a5) {
        // 0x40b136
        return 0xffffffff;
    }
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x40b118
    if (v3 < a5) {
        // 0x40b136
        return 1;
    }
    if (v3 == a5) {
        // 0x40b143
        return function_40aef0(a1, (int64_t)(v2 == a5) | 2, a3, a4, a6);
    }
    // 0x40b12f
    if (v2 == a5) {
        // 0x40b143
        return function_40aef0(a1, 1, a3, a4, a6);
    }
    // 0x40b136
    return 0;
}
// Address range: 0x40b170 - 0x40b20c
int64_t function_40b170(int64_t a1, uint64_t a2) {
    // 0x40b170
    if (*(int32_t *)(a1 + 144) >= 2) {
        if (a2 >= 0x2000000000000000) {
            // 0x40b200
            return 12;
        }
        int64_t * v1 = (int64_t *)(a1 + 16); // 0x40b194
        int32_t v2 = a2;
        int64_t * mem = realloc((int64_t *)*v1, 4 * v2); // 0x40b1a0
        if (mem == NULL) {
            // 0x40b200
            return 12;
        }
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x40b1aa
        int64_t v4 = *v3; // 0x40b1aa
        *v1 = (int64_t)mem;
        if (v4 != 0) {
            int64_t * mem2 = realloc((int64_t *)v4, 8 * v2); // 0x40b1bf
            if (mem2 == NULL) {
                // 0x40b200
                return 12;
            }
            // 0x40b1c9
            *v3 = (int64_t)mem2;
        }
    }
    // 0x40b1cd
    if (*(char *)(a1 + 139) == 0) {
        // 0x40b1d6
        *(int64_t *)(a1 + 64) = a2;
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x40b1e8
    int64_t * mem3 = realloc((int64_t *)*v5, (int32_t)a2); // 0x40b1ef
    if (mem3 == NULL) {
        // 0x40b200
        return 12;
    }
    // 0x40b1f9
    *v5 = (int64_t)mem3;
    // 0x40b1d6
    *(int64_t *)(a1 + 64) = a2;
    return 0;
}
// Address range: 0x40b210 - 0x40b274
int64_t function_40b210(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40b21c
    int64_t v2 = *v1; // 0x40b21c
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x40b220
    int64_t v4 = *v3; // 0x40b220
    int64_t v5 = v4; // 0x40b227
    int64_t v6 = v2; // 0x40b227
    if (v2 == a1) {
        int64_t v7 = a1 + 1; // 0x40b248
        *(int64_t *)a1 = 2 * v7;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)v7); // 0x40b25a
        if (mem == NULL) {
            // 0x40b23a
            return 0;
        }
        // 0x40b264
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    // 0x40b229
    *v1 = v6 + 1;
    *(int64_t *)(8 * v6 + v5) = a2;
    // 0x40b23a
    return 1;
}
// Address range: 0x40b280 - 0x40b3ac
int64_t function_40b280(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x40b2b8
        abort();
        // UNREACHABLE
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40b294
    int64_t v2 = *v1; // 0x40b294
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x40b298
    int64_t v4 = *v3; // 0x40b298
    if (v2 == 0) {
        // 0x40b2a1
        *(int64_t *)v4 = a2;
        *v1 = *v1 + 1;
        // 0x40b2ae
        return 1;
    }
    int64_t v5 = v4; // 0x40b2f3
    int64_t v6 = v2; // 0x40b2f3
    if (v2 == a1) {
        // 0x40b380
        *(int64_t *)a1 = 2 * a1;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)a1); // 0x40b38e
        if (mem == NULL) {
            // 0x40b2ae
            return 0;
        }
        // 0x40b398
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    int64_t v7 = 8 * v6; // 0x40b2f9
    int64_t v8; // 0x40b280
    if (*(int64_t *)v5 > a2) {
        // 0x40b306
        v8 = v7;
        if (v6 >= 1) {
            int64_t v9 = v7 + v5;
            int64_t v10 = v9 - 8; // 0x40b310
            *(int64_t *)v9 = *(int64_t *)v10;
            v8 = 0;
            while (v10 != v5) {
                // 0x40b310
                v9 = v10;
                v10 = v9 - 8;
                *(int64_t *)v9 = *(int64_t *)v10;
                v8 = 0;
            }
        }
    } else {
        int64_t v11 = v5 - 8; // 0x40b340
        int64_t v12 = *(int64_t *)(v7 + v11); // 0x40b340
        v8 = v7;
        if (v12 > a2) {
            *(int64_t *)(v7 + v5) = v12;
            int64_t v13 = v7 - 8; // 0x40b354
            uint64_t v14 = *(int64_t *)(v13 + v11); // 0x40b358
            v8 = v13;
            int64_t v15 = v13; // 0x40b360
            while (v14 > a2) {
                // 0x40b350
                *(int64_t *)(v15 + v5) = v14;
                v13 = v15 - 8;
                v14 = *(int64_t *)(v13 + v11);
                v8 = v13;
                v15 = v13;
            }
        }
    }
    // 0x40b323
    *(int64_t *)(v8 + v5) = a2;
    *v1 = *v1 + 1;
    // 0x40b2ae
    return 1;
}
// Address range: 0x40b3b0 - 0x40b4ab
int64_t function_40b3b0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 32; // 0x40b3be
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x40b3cb
    int64_t v3 = *v2; // 0x40b3cb
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)v1 = v3;
    int64_t size = 8 * v3; // 0x40b3de
    int64_t * mem = malloc((int32_t)size); // 0x40b3e6
    *(int64_t *)(a2 + 48) = (int64_t)mem;
    if (mem == NULL) {
        // 0x40b42e
        return 12;
    }
    if (v3 >= 0 == (v3 != 0)) {
        int64_t v4 = 0; // 0x40b400
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4); // 0x40b40e
        int64_t v6 = size; // 0x40b420
        int64_t v7; // 0x40b425
        if ((*(char *)(size + 8 + 16 * v5) & 8) == 0) {
            // 0x40b422
            v7 = function_40b210(v1, v5);
            v6 = v1;
            if ((char)v7 == 0) {
                // 0x40b42e
                return 12;
            }
        }
        // 0x40b400
        v4++;
        int64_t v8 = v6; // 0x40b408
        while (*v2 > v4) {
            // 0x40b40a
            v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4);
            v6 = v8;
            if ((*(char *)(v8 + 8 + 16 * v5) & 8) == 0) {
                // 0x40b422
                v7 = function_40b210(v1, v5);
                v6 = v1;
                if ((char)v7 == 0) {
                    // 0x40b42e
                    return 12;
                }
            }
            // 0x40b400
            v4++;
            v8 = v6;
        }
    }
    int64_t v9 = 24 * (*(int64_t *)(a1 + 136) & a3) + *(int64_t *)(a1 + 64); // 0x40b458
    int64_t * v10 = (int64_t *)v9; // 0x40b45c
    uint64_t v11 = *v10; // 0x40b45c
    int64_t * v12 = (int64_t *)(v9 + 16); // 0x40b45f
    int64_t v13 = *v12; // 0x40b45f
    int64_t v14 = v11 + 1; // 0x40b463
    int64_t * v15 = (int64_t *)(v9 + 8); // 0x40b467
    int64_t v16 = v13; // 0x40b46b
    int64_t v17 = v11; // 0x40b46b
    int64_t v18 = v14; // 0x40b46b
    if (*v15 <= v11) {
        int64_t * mem2 = realloc((int64_t *)v13, 16 * (int32_t)v14); // 0x40b490
        if (mem2 == NULL) {
            // 0x40b42e
            return 12;
        }
        // 0x40b49a
        v16 = (int64_t)mem2;
        v17 = *v10;
        *v12 = v16;
        *v15 = 2 * v14;
        v18 = v17 + 1;
    }
    // 0x40b46d
    *v10 = v18;
    *(int64_t *)(8 * v17 + v16) = a2;
    return 0;
}
// Address range: 0x40b4b0 - 0x40b4d6
int64_t function_40b4b0(uint64_t a1, int64_t a2) {
    uint64_t wc = a1 % 256; // 0x40b4b5
    int32_t v1 = btowc((int32_t)wc); // 0x40b4bf
    int64_t v2 = v1; // 0x40b4bf
    int64_t result = v2; // 0x40b4c7
    if (v1 == -1) {
        // 0x40b4c9
        result = (a2 == 0 ? wc : v2) & 0xffffffff;
    }
    // 0x40b4cf
    return result;
}
// Address range: 0x40b4e0 - 0x40b560
int64_t function_40b4e0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x40b4e2
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x40b4e7
    int64_t v3 = v2 - v1; // 0x40b4e7
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v2 : v1; // 0x40b4ef
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x40b4f4
    uint64_t v6 = *v5; // 0x40b4f4
    if (v4 <= v6) {
        // 0x40b550
        *(int64_t *)(a1 + 56) = v6;
        int64_t result; // 0x40b4e0
        return result;
    }
    int32_t ** v7 = __ctype_toupper_loc(); // 0x40b4fd
    int64_t v8 = v6; // 0x40b502
    int64_t v9 = *(int64_t *)(a1 + 120); // 0x40b50c
    int64_t v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40)); // 0x40b517
    int64_t v11 = v10; // 0x40b51d
    if (v9 != 0) {
        // 0x40b548
        v11 = (int64_t)*(char *)(v9 + v10);
    }
    int32_t v12 = *(int32_t *)(4 * v11 + (int64_t)*v7); // 0x40b526
    *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
    v8++;
    while (v4 != v8) {
        // 0x40b508
        v9 = *(int64_t *)(a1 + 120);
        v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40));
        v11 = v10;
        if (v9 != 0) {
            // 0x40b548
            v11 = (int64_t)*(char *)(v9 + v10);
        }
        // 0x40b51f
        v12 = *(int32_t *)(4 * v11 + (int64_t)*v7);
        *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
        v8++;
    }
    // 0x40b535
    *v5 = v4;
    *(int64_t *)(a1 + 56) = v4;
    return (int64_t)v7;
}
// Address range: 0x40b560 - 0x40b706
int64_t function_40b560(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x40b56f
    int64_t v2 = *v1; // 0x40b56f
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x40b573
    int64_t v4 = *v3; // 0x40b573
    int64_t * v5 = (int64_t *)(a1 + 64); // 0x40b577
    int64_t v6 = *v5; // 0x40b577
    int64_t v7 = v6 - v2; // 0x40b577
    uint64_t v8 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0 ? v6 : v2; // 0x40b57b
    int64_t result; // 0x40b560
    if (v8 <= v4) {
        // 0x40b618
        *v3 = v4;
        *(int64_t *)(a1 + 56) = v4;
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 120); // 0x40b590
    int64_t * v10 = (int64_t *)(a1 + 32);
    int64_t * v11 = (int64_t *)(a1 + 40);
    int32_t * v12 = (int32_t *)(a1 + 144);
    int64_t v13; // bp-104, 0x40b560
    int64_t v14 = &v13;
    int64_t v15 = v4; // 0x40b560
    int64_t v16; // 0x40b560
    int64_t v17; // 0x40b560
    int64_t v18; // 0x40b560
    int32_t v19; // bp-108, 0x40b560
    int64_t v20; // 0x40b597
    int64_t result2; // 0x40b6d8
    while (true) {
      lab_0x40b590:
        // 0x40b590
        v17 = v15;
        int64_t v21 = *v9; // 0x40b590
        v20 = *v10;
        int64_t v22 = v8 - v17; // 0x40b59b
        int64_t v23; // 0x40b560
        if (v21 != 0) {
            // 0x40b670
            v23 = v14;
            if (*v12 >= 1) {
                // 0x40b67e
                v23 = v14;
                int64_t v24 = 0; // 0x40b688
                int64_t v25 = v21; // 0x40b688
                if (v22 >= 0 == (v22 != 0)) {
                    int64_t v26 = v24 + v17;
                    unsigned char v27 = *(char *)(v26 + v25 + *v11); // 0x40b6ae
                    char v28 = *(char *)(v25 + (int64_t)v27); // 0x40b6b1
                    *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                    *(char *)(v24 + v14) = v28;
                    int64_t v29 = v24 + 1; // 0x40b6c2
                    v23 = v14;
                    while (!((v22 == v29 | (v29 & 0xffffffff) >= (int64_t)*v12))) {
                        // 0x40b69d
                        v25 = *v9;
                        v26 = v29 + v17;
                        v27 = *(char *)(v26 + v25 + *v11);
                        v28 = *(char *)(v25 + (int64_t)v27);
                        *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                        *(char *)(v29 + v14) = v28;
                        v29++;
                        v23 = v14;
                    }
                }
            }
        } else {
            // 0x40b5a7
            v23 = v21 + v17 + *v11;
        }
        int64_t v30 = function_40ab50((int64_t *)&v19, v23, v22); // 0x40b5b9
        if (v30 < 0xffffffffffffffff) {
            // 0x40b5c8
            v16 = v30;
            v18 = v19;
            if (v30 == -2) {
                // 0x40b6d8
                result2 = *v1;
                if (*v5 < result2) {
                    // break -> 0x40b6e6
                    break;
                }
                goto lab_0x40b630;
            } else {
                goto lab_0x40b5d6;
            }
        } else {
            goto lab_0x40b630;
        }
    }
    // 0x40b6e6
    *v10 = v20;
    // 0x40b618
    *v3 = v17;
    *(int64_t *)(a1 + 56) = v17;
    return result2;
  lab_0x40b630:;
    int64_t v31 = *v9; // 0x40b633
    unsigned char v32 = *(char *)(v17 + (int64_t)&v19 + *v11); // 0x40b63e
    int64_t v33 = v32; // 0x40b63e
    v19 = v32;
    int64_t v34 = v33; // 0x40b648
    if (v31 != 0) {
        unsigned char v35 = *(char *)(v31 + v33); // 0x40b6ef
        v19 = v35;
        v34 = v35;
    }
    // 0x40b64e
    *v10 = v20;
    v16 = 1;
    v18 = v34;
    goto lab_0x40b5d6;
  lab_0x40b5d6:;
    int64_t v36 = v16;
    int64_t v37 = *(int64_t *)(a1 + 16); // 0x40b5d6
    int64_t v38 = v17 + 1; // 0x40b5da
    int64_t v39 = v37 + 4 * v17;
    *(int32_t *)v39 = (int32_t)v18;
    int64_t v40 = v36 + v17; // 0x40b5e9
    int64_t v41; // 0x40b560
    if (v38 < v40) {
        int64_t v42 = v39 + 4; // 0x40b5fa
        *(int32_t *)v42 = -1;
        v42 += 4;
        while (v37 + 4 * v40 != v42) {
            // 0x40b600
            *(int32_t *)v42 = -1;
            v42 += 4;
        }
        // 0x40b60f
        v15 = v40;
        result = v36;
        v41 = v40;
        if (v40 >= v8) {
            // 0x40b618
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    } else {
        // 0x40b660
        v15 = v38;
        result = v36;
        v41 = v38;
        if (v38 >= v8) {
            // 0x40b618
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    }
    // 0x40b590
    goto lab_0x40b590;
}
// Address range: 0x40b710 - 0x40bd0d
int64_t function_40b710(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x40b721
    int64_t v2 = *v1; // 0x40b721
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x40b725
    int64_t v4 = *v3; // 0x40b725
    int64_t v5 = v4 - v2; // 0x40b725
    int64_t v6 = v5 == 0 | v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0 ? v4 : v2; // 0x40b729
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x40b735
    int64_t v8 = *v7; // 0x40b735
    int64_t * v9; // 0x40b710
    int64_t * v10; // 0x40b710
    int64_t v11; // 0x40b710
    int64_t v12; // 0x40b710
    int64_t v13; // 0x40b710
    int64_t v14; // 0x40b710
    int64_t v15; // 0x40b710
    int64_t v16; // 0x40b710
    int64_t v17; // 0x40b710
    int64_t v18; // 0x40b710
    int64_t v19; // 0x40b710
    int64_t v20; // 0x40b710
    int64_t wstr; // bp-120, 0x40b710
    int64_t v21; // 0x40b710
    int64_t v22; // 0x40b710
    int64_t * v23; // 0x40b8d0
    int64_t * v24; // 0x40b710
    int64_t * v25; // 0x40b710
    int64_t * v26; // 0x40b710
    int64_t v27; // 0x40b710
    int64_t v28; // 0x40b8da
    int64_t v29; // 0x40b907
    if (*(char *)(a1 + 138) != 0) {
        goto lab_0x40b746;
    } else {
        int64_t * v30 = (int64_t *)(a1 + 120);
        if (*v30 == 0) {
            // 0x40b8b0
            if (*(char *)(a1 + 140) != 0) {
                goto lab_0x40b746;
            } else {
                // 0x40b8bd
                v16 = v8;
                if (v8 < v6) {
                    while (true) {
                      lab_0x40b8d0:
                        // 0x40b8d0
                        v14 = v13;
                        v28 = v14 + v19 + *v23;
                        unsigned char v31 = *(char *)v28; // 0x40b8dd
                        if (v31 <= -1) {
                            goto lab_0x40b8f9;
                        } else {
                            // 0x40b8e8
                            struct _TYPEDEF___mbstate_t * ps; // 0x40b8ca
                            if (mbsinit(ps) != 0) {
                                int32_t v32 = *(int32_t *)(4 * (int64_t)v31 + (int64_t)*__ctype_toupper_loc()); // 0x40ba04
                                *(char *)(*v24 + v14) = (char)v32;
                                unsigned char v33 = *(char *)(*v24 + v14); // 0x40ba14
                                *(int32_t *)(*v25 + 4 * v14) = (int32_t)v33;
                                int64_t v34; // 0x40b710
                                v20 = v34;
                                v15 = v14 + 1;
                                goto lab_0x40b9ba;
                            } else {
                                goto lab_0x40b8f9;
                            }
                        }
                    }
                  lab_0x40baf0:
                    // 0x40baf0
                    v10 = v30;
                    v9 = v26;
                    v21 = v27;
                    v22 = v29;
                    v17 = v6;
                    v18 = &wstr;
                    v11 = v14;
                    v12 = v14;
                    goto lab_0x40b770;
                } else {
                    goto lab_0x40b9c3;
                }
            }
        } else {
            goto lab_0x40b746;
        }
    }
  lab_0x40b9c3:
    // 0x40b9c3
    *v7 = v16;
    *(int64_t *)(a1 + 56) = v16;
    // 0x40b89a
    return 0;
  lab_0x40b74a:;
    // 0x40b74a
    int64_t v35; // 0x40b710
    int64_t v36 = v35;
    int64_t v37; // 0x40b710
    int64_t v38 = v37;
    int64_t v39; // 0x40b710
    int64_t v40 = v39;
    int64_t v41 = v38; // 0x40b74d
    int64_t v42 = v36; // 0x40b74d
    int64_t v43; // 0x40b710
    struct _TYPEDEF___mbstate_t * v44; // bp-132, 0x40b710
    if (v40 > v36) {
        // 0x40b753
        v10 = (int64_t *)(a1 + 120);
        v9 = (int64_t *)(a1 + 32);
        v21 = (int64_t)&v44;
        v22 = v40 - v36;
        v17 = v40;
        v18 = v43;
        v11 = v38;
        v12 = v36;
        goto lab_0x40b770;
    } else {
        goto lab_0x40b890;
    }
  lab_0x40b8f9:
    // 0x40b8f9
    v29 = v6 - v14;
    int32_t ps2 = (int32_t)*v26; // bp-128, 0x40b90a
    uint64_t v45 = function_40ab50((int64_t *)&v44, v28, v29); // 0x40b921
    if (v45 < 0xfffffffffffffffe) {
        int32_t wc = (int64_t)v44; // 0x40b937
        int32_t wc2 = towupper(wc); // 0x40b93d
        int64_t v46; // 0x40b977
        if (wc2 == wc) {
            int64_t v47 = *v24; // 0x40b9d8
            int64_t v48 = *v23; // 0x40b9dc
            int64_t v49 = v47 + v14; // 0x40b9e6
            memcpy((int64_t *)v49, (int64_t *)(v48 + v14 + v49), (int32_t)v45);
        } else {
            int32_t v50 = wcrtomb((char *)&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x40b95d
            if (v45 != (int64_t)v50) {
                // break -> 0x40baf0
                goto lab_0x40baf0;
            }
            // 0x40b96b
            v46 = *v24 + v14;
            memcpy((int64_t *)v46, &wstr, (int32_t)v45);
        }
        int64_t v51 = v46;
        int64_t v52 = *v25; // 0x40b97f
        int64_t v53 = v14 + 1; // 0x40b98b
        int64_t v54 = v52 + 4 * v14;
        *(int32_t *)v54 = wc2;
        int64_t v55 = v45 + v14; // 0x40b993
        v20 = v51;
        v15 = v53;
        if (v53 < v55) {
            int64_t v56 = v54 + 4; // 0x40b9a4
            *(int32_t *)v56 = -1;
            v56 += 4;
            v20 = v51;
            v15 = v55;
            while (v52 + 4 * v55 != v56) {
                // 0x40b9a8
                *(int32_t *)v56 = -1;
                v56 += 4;
                v20 = v51;
                v15 = v55;
            }
        }
    } else {
        if (v45 != -2) {
            unsigned char v57 = *(char *)(v14 + v27 + *v23); // 0x40ba6f
            *(char *)(*v24 + v14) = v57;
            *(int32_t *)(*v25 + 4 * v14) = (int32_t)v57;
            *v26 = (int64_t)ps2;
            v20 = v27;
            v15 = v14 + 1;
        } else {
            // 0x40ba2e
            if (*v3 < *v1) {
                // 0x40bca7
                *v26 = (int64_t)ps2;
                v16 = v14;
                goto lab_0x40b9c3;
            }
            unsigned char v58 = *(char *)(v14 + v27 + *v23); // 0x40ba4a
            *(char *)(*v24 + v14) = v58;
            *(int32_t *)(*v25 + 4 * v14) = (int32_t)v58;
            v20 = v27;
            v15 = v14 + 1;
        }
    }
    goto lab_0x40b9ba;
  lab_0x40b9ba:
    // 0x40b9ba
    v19 = v20;
    v13 = v15;
    v16 = v15;
    if (v6 <= v15) {
        goto lab_0x40b9c3;
    }
    goto lab_0x40b8d0;
  lab_0x40b746:
    // 0x40b746
    v39 = v6;
    v43 = a1;
    v37 = *(int64_t *)(a1 + 56);
    v35 = v8;
    goto lab_0x40b74a;
  lab_0x40b890:
    // 0x40b890
    *v7 = v42;
    *(int64_t *)(a1 + 56) = v41;
    // 0x40b89a
    return 0;
  lab_0x40b770:;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v17;
    int64_t v62 = v22;
    int64_t v63 = v21;
    int64_t * v64 = v9;
    int64_t * v65 = v10;
    int64_t v66 = *v65; // 0x40b774
    ps2 = (int32_t)*v64;
    int64_t v67; // 0x40b710
    if (v66 != 0) {
        int32_t v68 = *(int32_t *)(a1 + 144); // 0x40ba8f
        if (v62 < 1 || v68 < 1) {
            // 0x40ba8f
            v67 = &wstr;
        } else {
            int64_t v69 = &wstr;
            int64_t v70 = 2 * (*(int64_t *)(a1 + 40) + v60); // 0x40babc
            int64_t v71 = 0;
            char v72 = *(char *)(v66 + (int64_t)*(char *)(v71 + v70)); // 0x40bad0
            *(char *)(v71 + v69) = v72;
            v67 = v69;
            while (v71 != (int64_t)(v68 - 1)) {
                int64_t v73 = v71 + 1; // 0x40bac1
                v67 = v69;
                if (v62 == v73) {
                    // break -> 0x40b795
                    break;
                }
                v71 = v73;
                v72 = *(char *)(v66 + (int64_t)*(char *)(v71 + v70));
                *(char *)(v71 + v69) = v72;
                v67 = v69;
            }
        }
    } else {
        // 0x40b786
        v67 = v60 + v18 + *(int64_t *)(a1 + 40);
    }
    int64_t v74 = v67;
    uint64_t v75 = function_40ab50((int64_t *)&v44, v74, v62); // 0x40b7a8
    int64_t v76; // 0x40b710
    int32_t wc4; // 0x40b7c3
    if (v75 < 0xfffffffffffffffe) {
        int32_t wc3 = (int64_t)v44; // 0x40b7be
        wc4 = towupper(wc3);
        if (wc4 == wc3) {
            goto lab_0x40baf8;
        } else {
            int32_t v77 = wcrtomb((char *)&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x40b7f1
            int64_t v78 = v77; // 0x40b7f1
            if (v75 != v78) {
                if (v77 == -1) {
                    goto lab_0x40baf8;
                } else {
                    int64_t v79 = v59 + v78; // 0x40bbcb
                    uint64_t v80 = *v3; // 0x40bbd6
                    if (v79 > v80) {
                        goto lab_0x40b87f;
                    } else {
                        int64_t * v81 = (int64_t *)(a1 + 24); // 0x40bbe3
                        int64_t v82 = *v81; // 0x40bbe3
                        int64_t v83 = v82; // 0x40bbe8
                        if (v82 == 0) {
                            int64_t * mem = malloc(8 * (int32_t)v80); // 0x40bcc7
                            int64_t v84 = (int64_t)mem; // 0x40bcc7
                            *v81 = v84;
                            v83 = v84;
                            if (mem == NULL) {
                                // 0x40b89a
                                return 12;
                            }
                        }
                        char * v85 = (char *)(a1 + 140); // 0x40bbee
                        if (*v85 == 0) {
                            int64_t v86 = v83; // 0x40bbfd
                            if (v59 != 0) {
                                int64_t v87 = 0;
                                *(int64_t *)(8 * v87 + v86) = v87;
                                int64_t v88 = v87 + 1; // 0x40bc07
                                while (v59 != v88) {
                                    // 0x40bc03
                                    v87 = v88;
                                    *(int64_t *)(8 * v87 + v86) = v87;
                                    v88 = v87 + 1;
                                }
                            }
                            // 0x40bc10
                            *v85 = 1;
                        }
                        // 0x40bc18
                        memcpy((int64_t *)(*(int64_t *)(a1 + 8) + v59), &wstr, v77);
                        int64_t v89 = v75 - 1; // 0x40bc38
                        int64_t v90 = *(int64_t *)(a1 + 16) + 4 * v59; // 0x40bc3c
                        *(int32_t *)v90 = wc4;
                        int64_t v91 = *v81 + 8 * v59; // 0x40bc47
                        *(int64_t *)v91 = v60;
                        if (v77 >= 2) {
                            uint64_t v92 = 1;
                            int64_t v93 = v92 >= v75 ? v89 : v92; // 0x40bc5f
                            *(int64_t *)(8 * v92 + v91) = v93 + v60;
                            *(int32_t *)(4 * v92 + v90) = -1;
                            int64_t v94 = v92 + 1; // 0x40bc71
                            while (v94 != v78) {
                                // 0x40bc59
                                v92 = v94;
                                v93 = v92 >= v75 ? v89 : v92;
                                *(int64_t *)(8 * v92 + v91) = v93 + v60;
                                *(int32_t *)(4 * v92 + v90) = -1;
                                v94 = v92 + 1;
                            }
                        }
                        int64_t v95 = v78 - v75; // 0x40bc7e
                        int64_t v96 = *v1 + v95; // 0x40bc81
                        *v1 = v96;
                        if (v60 < *(int64_t *)(a1 + 96)) {
                            int64_t * v97 = (int64_t *)(a1 + 104); // 0x40bc8e
                            *v97 = *v97 + v95;
                        }
                        int64_t v98 = *v3; // 0x40bc92
                        int64_t v99 = v98 - v96; // 0x40bc92
                        int64_t v100 = v99 == 0 | v99 < 0 != ((v99 ^ v98) & (v98 ^ v96)) < 0 ? v98 : v96; // 0x40bc9a
                        v39 = v100;
                        v43 = v89;
                        v37 = v75 + v60;
                        v35 = v79;
                        goto lab_0x40b74a;
                    }
                }
            } else {
                int64_t v101 = *(int64_t *)(a1 + 8) + v59; // 0x40b819
                memcpy((int64_t *)v101, &wstr, (int32_t)v75);
                v76 = v101;
                goto lab_0x40b825;
            }
        }
    } else {
        if (v75 != -2) {
            goto lab_0x40bb2d;
        } else {
            // 0x40bb1f
            if (*v3 < *v1) {
                goto lab_0x40b87f;
            } else {
                goto lab_0x40bb2d;
            }
        }
    }
  lab_0x40baf8:;
    int64_t v102 = *(int64_t *)(a1 + 8) + v59; // 0x40bb08
    memcpy((int64_t *)v102, (int64_t *)v74, (int32_t)v75);
    v76 = v102;
    goto lab_0x40b825;
  lab_0x40bb2d:;
    int64_t v115 = *v65; // 0x40bb30
    int64_t v116 = *(int64_t *)(a1 + 40); // 0x40bb37
    int64_t v117 = (int64_t)*(char *)(v60 + v63 + v116); // 0x40bb3b
    int64_t v118 = v117; // 0x40bb41
    if (v115 != 0) {
        // 0x40bd04
        v118 = (int64_t)*(char *)(v115 + v117);
    }
    // 0x40bb47
    *(char *)(*(int64_t *)(a1 + 8) + v59) = (char)v118;
    if (*(char *)(a1 + 140) != 0) {
        // 0x40bcf7
        *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v59) = v60;
    }
    int64_t v119 = *(int64_t *)(a1 + 16); // 0x40bb60
    int64_t v120 = v60 + 1; // 0x40bb64
    int64_t v121 = v59 + 1; // 0x40bb68
    *(int32_t *)(v119 + 4 * v59) = (int32_t)v118;
    v39 = v61;
    v43 = v63;
    v37 = v120;
    v35 = v121;
    if (v75 == -1) {
        // 0x40bb79
        *v64 = (int64_t)ps2;
        v39 = v61;
        v43 = v63;
        v37 = v120;
        v35 = v121;
    }
    goto lab_0x40b74a;
  lab_0x40b825:;
    int64_t v103 = v76;
    int64_t v104; // 0x40b710
    if (*(char *)(a1 + 140) != 0) {
        // 0x40bb90
        v104 = v60;
        if (v75 != 0) {
            int64_t v105 = v75 + v60; // 0x40bba3
            int64_t v106 = v59 - v60; // 0x40bba8
            int64_t v107 = v60;
            *(int64_t *)(8 * (v106 + v107) + *(int64_t *)(a1 + 24)) = v107;
            int64_t v108 = v107 + 1; // 0x40bbb3
            v104 = v105;
            while (v105 != v108) {
                // 0x40bbaf
                v107 = v108;
                *(int64_t *)(8 * (v106 + v107) + *(int64_t *)(a1 + 24)) = v107;
                v108 = v107 + 1;
                v104 = v105;
            }
        }
    } else {
        // 0x40b833
        v104 = v75 + v60;
    }
    int64_t v109 = v104;
    int64_t v110 = *(int64_t *)(a1 + 16); // 0x40b83a
    int64_t v111 = v59 + 1; // 0x40b83e
    int64_t v112 = v75 + v59; // 0x40b842
    int64_t v113 = v110 + 4 * v59;
    *(int32_t *)v113 = wc4;
    v39 = v61;
    v43 = v103;
    v37 = v109;
    v35 = v111;
    if (v111 < v112) {
        int64_t v114 = v113 + 4; // 0x40b864
        while (true) {
            // 0x40b868
            *(int32_t *)v114 = -1;
            v114 += 4;
            v39 = v61;
            v43 = v103;
            v37 = v109;
            v35 = v112;
            if (v110 + 4 * v112 == v114) {
                goto lab_0x40b74a;
            }
        }
    }
    goto lab_0x40b74a;
  lab_0x40b87f:
    // 0x40b87f
    *v64 = (int64_t)ps2;
    v41 = v60;
    v42 = v59;
    goto lab_0x40b890;
}
// Address range: 0x40bd10 - 0x40be5e
int64_t function_40bd10(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x40bd20
    uint64_t v2 = *v1; // 0x40bd20
    if (v2 >= 0xfffffffffffffff) {
        // 0x40bdbb
        return 12;
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x40bd2d
    int64_t v4 = *v3; // 0x40bd2d
    int64_t v5 = 2 * v2; // 0x40bd31
    int64_t v6 = 0x100000000 * a2 >> 32; // 0x40bd34
    int64_t v7 = v5 - v4; // 0x40bd3a
    int64_t v8 = v7 < 0 == ((v7 ^ v5) & (v4 ^ v5)) < 0 == (v7 != 0) ? v4 : v5; // 0x40bd3d
    int64_t v9 = v8 - v6; // 0x40bd41
    int64_t v10 = function_40b170(a1, v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v8 : v6); // 0x40bd48
    int64_t result = v10 & 0xffffffff; // 0x40bd4d
    if ((int32_t)v10 != 0) {
        // 0x40bdbb
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 184); // 0x40bd53
    int64_t v12 = *v11; // 0x40bd53
    if (v12 != 0) {
        int64_t * mem = realloc((int64_t *)v12, 8 * (int32_t)*v1 + 8); // 0x40bd6b
        if (mem == NULL) {
            // 0x40bdbb
            return 12;
        }
        // 0x40bd79
        *v11 = (int64_t)mem;
    }
    int32_t v13 = *(int32_t *)(a1 + 144); // 0x40bd87
    if (*(char *)(a1 + 136) != 0) {
        if (v13 >= 2) {
            // 0x40bd9b
            return function_40b710(a1);
        }
        // 0x40be38
        function_40b4e0(a1);
        return result;
    }
    if (v13 > 1) {
        // 0x40be20
        function_40b560(a1);
        return result;
    }
    int64_t * v14 = (int64_t *)(a1 + 120); // 0x40bdcd
    int64_t v15 = *v14; // 0x40bdcd
    if (v15 == 0) {
        // 0x40bdbb
        return result;
    }
    int64_t v16 = *v3; // 0x40bdd6
    int64_t * v17 = (int64_t *)(a1 + 48); // 0x40bdda
    uint64_t v18 = *v17; // 0x40bdda
    int64_t v19 = *v1; // 0x40bdde
    int64_t v20 = v19 - v16; // 0x40bdde
    uint64_t v21 = v20 == 0 | v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0 ? v19 : v16; // 0x40bde2
    if (v21 <= v18) {
        // 0x40bdec
        *(int64_t *)(a1 + 56) = v18;
        // 0x40bdbb
        return result;
    }
    int64_t * v22 = (int64_t *)(a1 + 40); // 0x40bdfa
    unsigned char v23 = *(char *)(v18 + v12 + *v22); // 0x40bdfe
    int64_t * v24 = (int64_t *)(a1 + 8); // 0x40be05
    *(char *)(*v24 + v18) = *(char *)(v15 + (int64_t)v23);
    int64_t v25 = v18 + 1; // 0x40be0c
    int64_t v26 = v25; // 0x40be13
    if (v21 != v25) {
        unsigned char v27 = *(char *)(v26 + v12 + *v22); // 0x40bdfe
        *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
        v26++;
        while (v21 != v26) {
            // 0x40bdf0
            v27 = *(char *)(v26 + v12 + *v22);
            *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
            v26++;
        }
    }
    // 0x40be15
    *v17 = v21;
    *(int64_t *)(a1 + 56) = v21;
    // 0x40bdbb
    return result;
}
// Address range: 0x40be60 - 0x40bee6
int64_t function_40be60(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x40be67
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x40be6e
    int64_t v3 = *v2; // 0x40be6e
    if (v1 > a2) {
        goto lab_0x40bea0;
    } else {
        // 0x40be7a
        if (v1 < *(int64_t *)(a1 + 88)) {
            int64_t result = function_40bd10(a1, a2 + 1 & 0xffffffff); // 0x40be86
            if ((int32_t)result != 0) {
                // 0x40be96
                return result;
            }
            goto lab_0x40be8f;
        } else {
            goto lab_0x40bea0;
        }
    }
  lab_0x40bea0:;
    uint64_t v4 = *(int64_t *)(a1 + 48); // 0x40bea0
    if (v4 <= a2) {
        // 0x40bea9
        if (v4 < *(int64_t *)(a1 + 88)) {
            int64_t result2 = function_40bd10(a1, a2 + 1 & 0xffffffff); // 0x40beb5
            if ((int32_t)result2 != 0) {
                // 0x40be96
                return result2;
            }
        }
    }
    goto lab_0x40be8f;
  lab_0x40be8f:
    // 0x40be8f
    if (v3 < a2) {
        int64_t v5 = *(int64_t *)(a1 + 184); // 0x40bec0
        memset((int64_t *)(8 * v3 + 8 + v5), 0, 8 * (int32_t)(a2 - v3));
        *v2 = a2;
    }
    // 0x40be96
    return 0;
}
// Address range: 0x40bef0 - 0x40bf0e
int64_t function_40bef0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40bef7
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g127;
}
// Address range: 0x40bf10 - 0x40bf38
int64_t function_40bf10(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 + 8) & 0x400ff; // 0x40bf13
    switch (result) {
        case 6: {
            // 0x40bf28
            return function_40bef0(a1);
        }
        case 3: {
            // 0x40bf30
            free((int64_t *)a1);
            return &g127;
        }
    }
    // 0x40bf22
    return result;
}
// Address range: 0x40bf40 - 0x40bf54
int64_t function_40bf40(int64_t a1, int64_t a2) {
    // 0x40bf40
    function_40bf10(a2 + 40);
    return 0;
}
// Address range: 0x40bf60 - 0x40c12e
int64_t function_40bf60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40bf60
    int128_t v1; // 0x40bf60
    int128_t v2 = v1;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x40bf74
    uint64_t v4 = *v3; // 0x40bf74
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x40bf78
    uint64_t v6 = *v5; // 0x40bf78
    int64_t v7; // 0x40bf60
    int64_t v8; // 0x40bf60
    int64_t v9; // 0x40bf60
    if (v4 >= v6) {
        uint64_t v10 = 2 * v6; // 0x40c03a
        if (v10 >= 0xaaaaaaaaaaaaaab) {
            // 0x40c018
            return -1;
        }
        int32_t v11 = v6;
        int64_t * mem = realloc((int64_t *)v4, 32 * v11); // 0x40c057
        if (mem == NULL) {
            // 0x40c018
            return -1;
        }
        // 0x40c065
        *(int64_t *)a1 = (int64_t)mem;
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x40c06b
        int32_t v13 = 16 * v11; // 0x40c07d
        int64_t * mem2 = realloc((int64_t *)*v12, v13); // 0x40c07d
        int64_t * v14 = (int64_t *)(a1 + 32); // 0x40c082
        int64_t * mem3 = realloc((int64_t *)*v14, v13); // 0x40c08c
        int64_t * v15 = (int64_t *)(a1 + 40); // 0x40c091
        int32_t v16 = 48 * v11; // 0x40c09c
        int64_t * mem4 = realloc((int64_t *)*v15, v16); // 0x40c09c
        int64_t * v17 = (int64_t *)(a1 + 48); // 0x40c0a1
        int64_t * mem5 = realloc((int64_t *)*v17, v16); // 0x40c0ab
        if (mem2 == NULL | mem3 == NULL || mem4 == NULL || mem5 == NULL) {
            // 0x40c0f0
            free(mem2);
            free(mem3);
            free(mem4);
            free(mem5);
            // 0x40c018
            return -1;
        }
        int64_t v18 = (int64_t)mem2; // 0x40c07d
        int64_t v19 = (int64_t)mem4; // 0x40c09c
        *v12 = v18;
        *v14 = (int64_t)mem3;
        *v15 = v19;
        *v17 = (int64_t)mem5;
        *v5 = v10;
        v9 = *v3;
        v7 = v18;
        v8 = v19;
    } else {
        // 0x40bf85
        v9 = v4;
        v7 = *(int64_t *)(a1 + 24);
        v8 = *(int64_t *)(a1 + 40);
    }
    int64_t v20 = 17 * v9; // 0x40bf9c
    char v21 = a3; // 0x40bf9f
    int64_t v22 = v20 + 8; // 0x40bfa2
    *(int64_t *)v22 = a3;
    *(int64_t *)v20 = a2;
    *(int32_t *)v22 = (int32_t)a3 & -0x3ff01;
    bool v23 = v21 == 6; // 0x40bfb2
    if (v21 == 5) {
        int32_t v24 = *(int32_t *)(a1 + 180); // 0x40bfb4
        int32_t v25 = v24 - 1; // 0x40bfb4
        v23 = v25 < 0 == (v24 & -v24) < 0 == (v25 != 0);
    }
    char * v26 = (char *)(v20 + 10); // 0x40bfbe
    int128_t v27 = __asm_pxor(v2, v2); // 0x40bfc5
    *v26 = 16 * (char)v23 | *v26 & -17;
    *(int64_t *)(v7 + 8 * v9) = -1;
    int64_t v28 = 24 * *v3 + v8; // 0x40bfe1
    __asm_movups(*(int128_t *)v28, v27);
    *(int64_t *)(v28 + 16) = 0;
    int64_t v29 = *(int64_t *)(a1 + 48) + 24 * *v3; // 0x40bffd
    __asm_movups(*(int128_t *)v29, v27);
    *(int64_t *)(v29 + 16) = 0;
    int64_t result = *v3; // 0x40c00c
    *v3 = result + 1;
    // 0x40c018
    return result;
}
// Address range: 0x40c130 - 0x40c1cf
int64_t function_40c130(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 16 * a2; // 0x40c137
    int64_t v2 = v1 + a1;
    int64_t result = function_40bf60(a1, *(int64_t *)v2, *(int64_t *)(v2 + 8)); // 0x40c156
    if (result != -1) {
        int64_t v3 = a3 & 0xffffffff; // 0x40c13b
        int64_t v4 = 16 * result + v3; // 0x40c175
        int32_t v5 = 256 * (int32_t)a3; // 0x40c178
        int32_t * v6 = (int32_t *)(v4 + 8); // 0x40c183
        int32_t v7 = *v6 & -0x3ff01; // 0x40c186
        *v6 = v7 | v5 & 0x3ff00;
        uint32_t v8 = (*(int32_t *)((v1 | 8) + v3) | v5) & 0x3ff00 | v7; // 0x40c1aa
        *v6 = v8;
        *(char *)(v4 + 10) = (char)(v8 / 0x10000) | 4;
        *(int64_t *)(*(int64_t *)(a1 + 32) + 8 * result) = a2;
    }
    // 0x40c1c4
    return result;
}
// Address range: 0x40c1d0 - 0x40c454
int64_t function_40c1d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 40);
    int64_t * v2 = (int64_t *)(a1 + 24);
    int64_t v3 = a1; // 0x40c1ea
    int64_t v4 = a2; // 0x40c1ea
    int64_t v5 = a3; // 0x40c1ea
    int64_t v6 = a5 & 0xffffffff;
    int32_t v7 = v6;
    int64_t v8; // 0x40c1d0
    int64_t v9; // 0x40c1d0
    int64_t v10; // 0x40c1d0
    int64_t v11; // 0x40c1d0
    int64_t result; // 0x40c1d0
    int64_t v12; // 0x40c1d0
    int64_t v13; // 0x40c1d0
    int64_t v14; // 0x40c1d0
    int64_t v15; // 0x40c1d0
    int64_t v16; // 0x40c384
    int64_t v17; // 0x40c388
    int64_t v18; // 0x40c388
    int64_t v19; // 0x40c39f
    int64_t v20; // 0x40c211
    int64_t v21; // 0x40c215
    int64_t v22; // 0x40c219
    int64_t v23; // 0x40c3b5
    int64_t v24; // 0x40c428
    int64_t v25; // 0x40c22f
    int64_t v26; // 0x40c233
    int64_t v27; // 0x40c24b
    int64_t v28; // 0x40c24f
    int64_t v29; // 0x40c256
    int64_t v30; // 0x40c25a
    int64_t v31; // 0x40c3d9
    int64_t v32; // 0x40c1d0
    int64_t v33; // 0x40c413
    int64_t v34; // 0x40c288
    int64_t v35; // 0x40c28b
    int64_t v36; // 0x40c1f5
    int64_t v37; // 0x40c203
    while (true) {
        // 0x40c1ef
        v8 = v5;
        v10 = v4;
        v13 = v3;
        v36 = *v1;
        v37 = v13 + 8 + 16 * v10;
        if (*(char *)v37 == 4) {
            // 0x40c370
            v16 = 24 * v8;
            v17 = 8 * v10;
            v18 = *(int64_t *)(*v2 + v17);
            *(int64_t *)(v36 + 8 + v16) = 0;
            v19 = function_40c130(a1, v18, v6);
            if (v19 == -1) {
                return 12;
            }
            // 0x40c3b5
            v23 = *v2;
            *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
            v15 = v18;
            v12 = v16;
            v9 = v19;
            goto lab_0x40c2ea;
        } else {
            // 0x40c20d
            v20 = 24 * v10;
            v21 = v36 + v20;
            v22 = *(int64_t *)(v21 + 8);
            if (v22 == 0) {
                // 0x40c428
                v24 = *v2;
                *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                result = 0;
                return result;
            }
            // 0x40c226
            v25 = 24 * v8;
            v26 = v36 + v25;
            v4 = *(int64_t *)*(int64_t *)(v21 + 16);
            *(int64_t *)(v26 + 8) = 0;
            if (v22 == 1) {
                // break -> 0x40c320
                break;
            }
            // 0x40c24b
            v27 = *(int64_t *)(a1 + 16);
            v28 = v27 - 1;
            v29 = 16 * v28;
            v30 = v29 + v13;
            if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                // 0x40c270
                v32 = 16 * v27 - 32 - v29;
                v14 = v28;
                v11 = v30;
                if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                    // 0x40c2a8
                    if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                        // 0x40c2b9
                        if ((char)function_40b280(v26, v14) == 0) {
                            return 12;
                        } else {
                            goto lab_0x40c2c2;
                        }
                    }
                }
                // 0x40c288
                v34 = v32 + v11;
                v35 = v14 - 1;
                while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                    // 0x40c2a2
                    v14 = v35;
                    v11 = v34;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x40c2a8
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x40c2b9
                            if ((char)function_40b280(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x40c2c2;
                            }
                        }
                    }
                    // 0x40c288
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                }
            }
            // 0x40c3d0
            v31 = function_40c130(a1, v4, v6);
            if (v31 == -1) {
                return 12;
            }
            // 0x40c3eb
            if ((char)function_40b280(*v1 + v25, v31) == 0) {
                return 12;
            }
            // 0x40c402
            v33 = function_40c1d0(a1, v4, v31, a4, v6);
            result = v33;
            if ((int32_t)v33 != 0) {
                // 0x40c30a
                return result;
            }
            goto lab_0x40c2c2;
        }
    }
    if (v10 == a4 == (v10 != v8)) {
        // 0x40c43b
        result = 0;
        if ((char)function_40b280(v26, v4) != 0) {
            return result;
        } else {
            return 12;
        }
    }
    int64_t v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7); // 0x40c341
    v5 = function_40c130(a1, v4, v38);
    while (v5 != -1) {
        // 0x40c355
        v3 = *v1 + v25;
        if ((char)function_40b280(v3, v5) == 0) {
            // break -> 0x40c305
            break;
        }
        v6 = v38;
        v7 = v6;
        while (true) {
            // 0x40c1ef
            v8 = v5;
            v10 = v4;
            v13 = v3;
            v36 = *v1;
            v37 = v13 + 8 + 16 * v10;
            if (*(char *)v37 == 4) {
                // 0x40c370
                v16 = 24 * v8;
                v17 = 8 * v10;
                v18 = *(int64_t *)(*v2 + v17);
                *(int64_t *)(v36 + 8 + v16) = 0;
                v19 = function_40c130(a1, v18, v6);
                if (v19 == -1) {
                    return 12;
                }
                // 0x40c3b5
                v23 = *v2;
                *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
                v15 = v18;
                v12 = v16;
                v9 = v19;
                goto lab_0x40c2ea;
            } else {
                // 0x40c20d
                v20 = 24 * v10;
                v21 = v36 + v20;
                v22 = *(int64_t *)(v21 + 8);
                if (v22 == 0) {
                    // 0x40c428
                    v24 = *v2;
                    *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                    result = 0;
                    return result;
                }
                // 0x40c226
                v25 = 24 * v8;
                v26 = v36 + v25;
                v4 = *(int64_t *)*(int64_t *)(v21 + 16);
                *(int64_t *)(v26 + 8) = 0;
                if (v22 == 1) {
                    // break -> 0x40c320
                    break;
                }
                // 0x40c24b
                v27 = *(int64_t *)(a1 + 16);
                v28 = v27 - 1;
                v29 = 16 * v28;
                v30 = v29 + v13;
                if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                    // 0x40c270
                    v32 = 16 * v27 - 32 - v29;
                    v14 = v28;
                    v11 = v30;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x40c2a8
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x40c2b9
                            if ((char)function_40b280(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x40c2c2;
                            }
                        }
                    }
                    // 0x40c288
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                    while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                        // 0x40c2a2
                        v14 = v35;
                        v11 = v34;
                        if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                            // 0x40c2a8
                            if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                                // 0x40c2b9
                                if ((char)function_40b280(v26, v14) == 0) {
                                    return 12;
                                } else {
                                    goto lab_0x40c2c2;
                                }
                            }
                        }
                        // 0x40c288
                        v34 = v32 + v11;
                        v35 = v14 - 1;
                    }
                }
                // 0x40c3d0
                v31 = function_40c130(a1, v4, v6);
                if (v31 == -1) {
                    return 12;
                }
                // 0x40c3eb
                if ((char)function_40b280(*v1 + v25, v31) == 0) {
                    return 12;
                }
                // 0x40c402
                v33 = function_40c1d0(a1, v4, v31, a4, v6);
                result = v33;
                if ((int32_t)v33 != 0) {
                    // 0x40c30a
                    return result;
                }
                goto lab_0x40c2c2;
            }
        }
        if (v10 == a4 == (v10 != v8)) {
            // 0x40c43b
            result = 0;
            if ((char)function_40b280(v26, v4) != 0) {
                return result;
            } else {
                return 12;
            }
        }
        // 0x40c330
        v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7);
        v5 = function_40c130(a1, v4, v38);
    }
  lab_0x40c305_5:
    // 0x40c30a
    return 12;
  lab_0x40c2ea:;
    int64_t v39 = *v1 + v12; // 0x40c2f1
    if ((char)function_40b280(v39, v9) == 0) {
        return 12;
    }
    goto lab_0x40c1ef;
  lab_0x40c2c2:;
    int64_t v40 = *(int64_t *)(*(int64_t *)(v20 + 16 + *v1) + 8); // 0x40c2d1
    int64_t v41 = function_40c130(a1, v40, v6); // 0x40c2dc
    v15 = v40;
    v12 = v25;
    v9 = v41;
    if (v41 == -1) {
        // break (via goto) -> 0x40c305
        goto lab_0x40c305_5;
    }
    goto lab_0x40c2ea;
}
// Address range: 0x40c460 - 0x40c4b9
int64_t function_40c460(int64_t a1) {
    // 0x40c460
    free((int64_t *)*(int64_t *)(a1 + 48));
    free((int64_t *)*(int64_t *)(a1 + 72));
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x40c476
    int64_t v2 = *v1; // 0x40c476
    if (v2 != a1 + 8) {
        // 0x40c483
        free((int64_t *)*(int64_t *)(v2 + 16));
        free((int64_t *)*v1);
    }
    // 0x40c495
    free((int64_t *)*(int64_t *)(a1 + 24));
    free((int64_t *)*(int64_t *)(a1 + 96));
    free((int64_t *)*(int64_t *)(a1 + 88));
    free((int64_t *)a1);
    return &g127;
}
// Address range: 0x40c4c0 - 0x40c4f2
int64_t function_40c4c0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    free((int64_t *)*(int64_t *)(v1 + 16));
    free((int64_t *)*(int64_t *)(v1 + 24));
    if (*(char *)(v1 + 139) == 0) {
        // 0x40c4df
        return &g127;
    }
    // 0x40c4e8
    free((int64_t *)*(int64_t *)(v1 + 8));
    return &g127;
}
// Address range: 0x40c500 - 0x40c5b8
int64_t function_40c500(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 232); // 0x40c50b
    if (*v2 < 1) {
        // 0x40c599
        *v2 = 0;
        *(int64_t *)(v1 + 200) = 0;
        int64_t result; // 0x40c500
        return result;
    }
    int64_t v3 = 0; // 0x40c587
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3); // 0x40c527
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x40c52b
    int64_t * v6 = (int64_t *)(v4 + 40);
    int64_t v7 = 0; // 0x40c531
    int64_t v8; // 0x40c53d
    int64_t v9; // 0x40c541
    if (*v5 >= 1) {
        v8 = *(int64_t *)(*v6 + 8 * v7);
        v9 = v7 + 1;
        free((int64_t *)*(int64_t *)(v8 + 32));
        free((int64_t *)v8);
        v7 = v9;
        while (*v5 > v9) {
            // 0x40c538
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
        }
    }
    // 0x40c55d
    free((int64_t *)*v6);
    int64_t * v10 = (int64_t *)(v4 + 16); // 0x40c567
    int64_t v11 = *v10; // 0x40c567
    if (v11 != 0) {
        // 0x40c571
        free((int64_t *)*(int64_t *)(v11 + 16));
        free((int64_t *)*v10);
    }
    // 0x40c584
    v3++;
    free((int64_t *)v4);
    while (*v2 > v3) {
        // 0x40c520
        v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3);
        v5 = (int64_t *)(v4 + 32);
        v6 = (int64_t *)(v4 + 40);
        v7 = 0;
        if (*v5 >= 1) {
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
            while (*v5 > v9) {
                // 0x40c538
                v8 = *(int64_t *)(*v6 + 8 * v7);
                v9 = v7 + 1;
                free((int64_t *)*(int64_t *)(v8 + 32));
                free((int64_t *)v8);
                v7 = v9;
            }
        }
        // 0x40c55d
        free((int64_t *)*v6);
        v10 = (int64_t *)(v4 + 16);
        v11 = *v10;
        if (v11 != 0) {
            // 0x40c571
            free((int64_t *)*(int64_t *)(v11 + 16));
            free((int64_t *)*v10);
        }
        // 0x40c584
        v3++;
        free((int64_t *)v4);
    }
    // 0x40c599
    *v2 = 0;
    *(int64_t *)(v1 + 200) = 0;
    return &g127;
}
// Address range: 0x40c5c0 - 0x40c840
int64_t function_40c5c0(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 48); // 0x40c5c4
    int64_t v2 = v1; // 0x40c5c4
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x40c5c8
    g126 = v2;
    int64_t v4 = v3; // 0x40c5d3
    switch (v1) {
        case 2: {
            // 0x40c698
            if (*(int64_t *)(a2 + 32) == 0) {
                // 0x40c5fa
                return 0;
            }
            // 0x40c6a3
            __assert_fail("node->next == NULL", "lib/regcomp.c", 1449, "link_nfa_nodes");
            v4 = 1449;
        }
        case 4: {
            // 0x40c6c0
            *(int64_t *)(8 * v4 + 0x312d203e) = *(int64_t *)0x203e207466656c38;
            // 0x40c5fa
            return 0;
        }
        case 8: {
        }
        case 9: {
        }
        case 12: {
            int64_t v5 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x40c735
            int64_t * v6 = (int64_t *)v5; // 0x40c739
            *v6 = 1;
            int64_t * v7 = (int64_t *)(v5 + 8); // 0x40c740
            *v7 = 1;
            int64_t * mem = malloc(8); // 0x40c748
            *(int64_t *)(v5 + 16) = (int64_t)mem;
            if (mem != NULL) {
                // 0x40c756
                *mem = *(int64_t *)(*(int64_t *)(a2 + 32) + 56);
                return 0;
            }
            // 0x40c7b0
            *v7 = 0;
            *v6 = 0;
            // 0x40c5fa
            return 12;
        }
        case 10: {
        }
        case 11: {
            char * v8 = (char *)(a1 + 176); // 0x40c600
            *v8 = *v8 | 1;
            int64_t v9 = *(int64_t *)(a2 + 8); // 0x40c607
            int64_t v10 = a2 + 32;
            int64_t v11 = *(int64_t *)(*(int64_t *)(v9 == 0 ? v10 : v9 + 24) + 56);
            if (v11 < 0) {
                // 0x40c826
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g127;
            }
            int64_t v12 = *(int64_t *)(a2 + 16); // 0x40c61c
            int64_t v13 = *(int64_t *)(*(int64_t *)(v12 == 0 ? v10 : v12 + 24) + 56);
            if (v13 < 0) {
                // 0x40c80d
                __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
                // 0x40c826
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g127;
            }
            int64_t v14 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x40c650
            *(int64_t *)v14 = 2;
            int64_t * mem2 = malloc(16); // 0x40c65b
            int64_t v15 = (int64_t)mem2; // 0x40c65b
            *(int64_t *)(v14 + 16) = v15;
            if (mem2 == NULL) {
                // 0x40c5fa
                return 12;
            }
            int64_t * v16 = (int64_t *)(v14 + 8);
            if (v11 == v13) {
                // 0x40c760
                *v16 = 1;
                *mem2 = v11;
                // 0x40c5fa
                return 0;
            }
            // 0x40c676
            *v16 = 2;
            if (v11 < v13) {
                // 0x40c684
                *mem2 = v11;
                *(int64_t *)(v15 + 8) = v13;
            } else {
                // 0x40c798
                *mem2 = v13;
                *(int64_t *)(v15 + 8) = v11;
            }
            // 0x40c5fa
            return 0;
        }
        case 16: {
            // 0x40c5fa
            return 0;
        }
        default: {
            if ((v2 & 8) == 0) {
                int64_t v17 = *(int64_t *)(*(int64_t *)(a2 + 32) + 56); // 0x40c5ec
                *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v3) = v17;
                // 0x40c5fa
                return 0;
            }
            // 0x40c7f4
            __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 1484, "link_nfa_nodes");
            // 0x40c80d
            __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
            // 0x40c826
            __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
            return &g127;
        }
    }
}
// Address range: 0x40c840 - 0x40c88e
int64_t function_40c840(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 48); // 0x40c840
    uint64_t v2 = a2 + 1; // 0x40c844
    if (v2 >= v1) {
        // 0x40c882
        return 1;
    }
    int64_t v3 = *(int64_t *)(a1 + 16) + 4 * v2;
    if (*(int32_t *)v3 != -1) {
        // 0x40c882
        return 1;
    }
    int64_t v4 = 2;
    while (v4 != v1 - a2) {
        int64_t v5 = v4 + 1; // 0x40c870
        if (*(int32_t *)(v3 - 8 + 4 * v5) != -1) {
            // break -> 0x40c882
            break;
        }
        v4 = v5;
    }
    // 0x40c882
    return v4 & 0xffffffff;
}
// Address range: 0x40c890 - 0x40c8f5
int64_t function_40c890(int64_t a1, int64_t a2, uint64_t a3) {
    if (a1 < 1) {
        // 0x40c8d5
        return 0;
    }
    int64_t v1 = a1 - 1; // 0x40c89a
    int64_t v2 = 0; // 0x40c8a3
    if (v1 != 0) {
        int64_t v3 = 0;
        int64_t v4 = (v3 + v1) / 2; // 0x40c8a9
        int64_t v5 = v4; // 0x40c8b0
        int64_t v6 = v4; // 0x40c8b0
        int64_t v7 = v1; // 0x40c8b0
        int64_t v8; // 0x40c890
        int64_t v9; // 0x40c8bc
        if (*(int64_t *)(8 * v4 + a2) >= a3) {
            v2 = v3;
            if (v3 >= v5) {
                // break (via goto) -> 0x40c8cd
                goto lab_0x40c8cd;
            }
            // 0x40c8b8
            v9 = (v5 + v3) / 2;
            v6 = v9;
            v7 = v5;
            while (*(int64_t *)(8 * v9 + a2) >= a3) {
                // 0x40c8c8
                v8 = v9;
                v2 = v3;
                if (v3 >= v8) {
                    // break (via goto) -> 0x40c8cd
                    goto lab_0x40c8cd;
                }
                // 0x40c8b8
                v9 = (v8 + v3) / 2;
                v6 = v9;
                v7 = v8;
            }
        }
        int64_t v10 = v7;
        int64_t v11 = v6 + 1; // 0x40c8e0
        v2 = v11;
        while (v11 < v10) {
            // 0x40c8a5
            v3 = v11;
            v4 = (v3 + v10) / 2;
            v5 = v4;
            v6 = v4;
            v7 = v10;
            if (*(int64_t *)(8 * v4 + a2) >= a3) {
                v2 = v3;
                if (v3 >= v5) {
                    // break (via goto) -> 0x40c8cd
                    goto lab_0x40c8cd;
                }
                // 0x40c8b8
                v9 = (v5 + v3) / 2;
                v6 = v9;
                v7 = v5;
                while (*(int64_t *)(8 * v9 + a2) >= a3) {
                    // 0x40c8c8
                    v8 = v9;
                    v2 = v3;
                    if (v3 >= v8) {
                        // break (via goto) -> 0x40c8cd
                        goto lab_0x40c8cd;
                    }
                    // 0x40c8b8
                    v9 = (v8 + v3) / 2;
                    v6 = v9;
                    v7 = v8;
                }
            }
            // 0x40c8e0
            v10 = v7;
            v11 = v6 + 1;
            v2 = v11;
        }
    }
  lab_0x40c8cd:
    // 0x40c8cd
    if (*(int64_t *)(8 * v2 + a2) == a3) {
        // 0x40c8f0
        return v2 + 1;
    }
    // 0x40c8d5
    return 0;
}
// Address range: 0x40c900 - 0x40c9f9
int64_t function_40c900(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 16; // 0x40c907
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x40c921
    int64_t v3 = *v2; // 0x40c921
    if (function_40c890(v3, v1, a3) != 0) {
      lab_0x40c9e8:
        // 0x40c9d5
        return 0;
    }
    int32_t v4 = a5;
    int64_t * v5 = (int64_t *)(a1 + 40);
    int64_t v6 = a3;
    int64_t v7 = 16 * v6 + v3; // 0x40c940
    int64_t result; // 0x40c900
    if ((int32_t)*(char *)(v7 + 8) == v4) {
        // 0x40c94d
        if (*(int64_t *)v7 == a4) {
            if (v4 != 9) {
                return 0;
            } else {
                // 0x40c9be
                result = 12;
                if ((char)function_40b280(a2, v6) != 0) {
                    return 0;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x40c952
    result = 12;
    while ((char)function_40b280(a2, v6) != 0) {
        int64_t v8 = 24 * v6; // 0x40c96a
        int64_t v9 = *v5 + v8; // 0x40c96e
        int64_t v10 = *(int64_t *)(v9 + 8); // 0x40c971
        if (v10 == 0) {
            // 0x40c9d5
            return 0;
        }
        int64_t v11 = *(int64_t *)(v9 + 16); // 0x40c97a
        int64_t v12 = v11; // 0x40c982
        if (v10 == 2) {
            int64_t v13 = function_40c900(a1, a2, *(int64_t *)(v11 + 8), a4, a5 & 0xffffffff); // 0x40c9a0
            result = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x40c9d5
                break;
            }
            // 0x40c9a9
            v12 = *(int64_t *)(v8 + 16 + *v5);
        }
        int64_t v14 = *(int64_t *)v12; // 0x40c984
        int64_t v15 = *v2; // 0x40c921
        if (function_40c890(v15, v1, v14) != 0) {
            // 0x40c9d5
            return 0;
        }
        v6 = v14;
        v7 = 16 * v6 + v15;
        if ((int32_t)*(char *)(v7 + 8) == v4) {
            // 0x40c94d
            if (*(int64_t *)v7 == a4) {
                if (v4 != 9) {
                    return 0;
                } else {
                    // 0x40c9be
                    result = 12;
                    if ((char)function_40b280(a2, v6) != 0) {
                        return 0;
                    } else {
                        return result;
                    }
                }
            }
        }
        // 0x40c952
        result = 12;
    }
  lab_0x40c9d5:
    // 0x40c9d5
    return result;
}
// Address range: 0x40ca00 - 0x40ca23
int64_t function_40ca00(uint64_t a1, int64_t result2, uint64_t a3) {
    // 0x40ca00
    if (a3 >= a1) {
        // 0x40ca22
        int64_t result; // 0x40ca00
        return result;
    }
    int64_t v1 = a3; // 0x40ca03
    int64_t v2 = 8 * v1 + result2;
    *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    v1++;
    while (v1 != a1) {
        // 0x40ca10
        v2 = 8 * v1 + result2;
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
        v1++;
    }
    // 0x40ca22
    return result2;
}
// Address range: 0x40ca30 - 0x40cabb
int64_t function_40ca30(int64_t a1, int64_t a2) {
    // 0x40ca30
    int64_t * v1; // 0x40ca40
    int64_t v2; // 0x40ca40
    switch (*(char *)(a2 + 48)) {
        case 4: {
            int64_t v3 = *(int64_t *)(a1 + 224); // 0x40ca90
            if (v3 == 0) {
                // 0x40ca3c
                return 0;
            }
            int64_t v4 = a2 + 40; // 0x40ca9c
            int64_t v5 = *(int64_t *)(8 * (int64_t)*(int32_t *)v4 + v3); // 0x40caa0
            *(int64_t *)v4 = v5;
            int64_t * v6 = (int64_t *)(a1 + 160); // 0x40cab1
            *v6 = *v6 | (int64_t)(1 << (int32_t)v5 % 32);
            return 0;
        }
        case 17: {
            // 0x40ca40
            v1 = (int64_t *)(a2 + 8);
            v2 = *v1;
            if (v2 == 0 || *(char *)(v2 + 48) != 17) {
                // 0x40ca3c
                return 0;
            }
            // break -> 0x40ca4f
            break;
        }
        default: {
            // 0x40ca3c
            return 0;
        }
    }
    uint64_t v7 = *(int64_t *)(v2 + 40); // 0x40ca4f
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x40ca53
    *v1 = v8;
    if (v8 != 0) {
        // 0x40ca60
        *(int64_t *)v8 = a2;
    }
    int64_t v9 = *(int64_t *)(a1 + 224); // 0x40ca63
    int64_t v10 = *(int64_t *)(8 * *(int64_t *)(a2 + 40) + v9); // 0x40ca6e
    *(int64_t *)(v9 + 8 * v7) = v10;
    if (v7 > 63) {
        // 0x40ca3c
        return 0;
    }
    uint64_t v11 = v7 % 64; // 0x40ca83
    int64_t v12 = -2; // 0x40ca83
    if (v11 != 0) {
        v12 = 0xfffffffffffffffe >> 64 - v11 | -2 << v11;
    }
    int64_t * v13 = (int64_t *)(a1 + 160); // 0x40ca86
    *v13 = *v13 & v12;
    // 0x40ca3c
    return 0;
}
// Address range: 0x40cac0 - 0x40cb17
int64_t function_40cac0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x40cac4
    switch (*(char *)(a2 + 48)) {
        case 11: {
            // 0x40caf8
            *(int64_t *)(v1 + 32) = a2;
            return 0;
        }
        case 16: {
            int64_t v2 = *(int64_t *)(a2 + 16); // 0x40cb00
            *(int64_t *)(v1 + 32) = *(int64_t *)(v2 + 24);
            *(int64_t *)(v2 + 32) = *(int64_t *)(a2 + 32);
            return 0;
        }
    }
    if (v1 != 0) {
        // 0x40cad5
        *(int64_t *)(v1 + 32) = *(int64_t *)(a2 + 32);
    }
    int64_t v3 = *(int64_t *)(a2 + 16); // 0x40cadd
    if (v3 != 0) {
        // 0x40cae6
        *(int64_t *)(v3 + 32) = *(int64_t *)(a2 + 32);
    }
    // 0x40caee
    return 0;
}
// Address range: 0x40cb20 - 0x40cd6e
int64_t function_40cb20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x40cb37
    int64_t v2 = -1; // 0x40cb51
    int64_t v3 = -1; // 0x40cb51
    if (v1 > 0) {
        int64_t v4 = *(int64_t *)(a1 + 216); // 0x40cb57
        int64_t v5 = v4 + 8;
        int64_t v6 = 0;
        uint64_t v7 = v6 + v1; // 0x40cb53
        int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x40cb68
        int64_t v9 = v8; // 0x40cb74
        int64_t v10 = v1; // 0x40cb74
        int64_t v11 = v8; // 0x40cb74
        int64_t v12; // 0x40cb20
        int64_t v13; // 0x40cb20
        uint64_t v14; // 0x40cb80
        int64_t v15; // 0x40cb8e
        if (*(int64_t *)(40 * v8 + v5) >= a5) {
            v13 = v6;
            if (v6 >= v9) {
                // break (via goto) -> 0x40cbab
                goto lab_0x40cbab;
            }
            // 0x40cb80
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v9;
            v11 = v15;
            while (*(int64_t *)(40 * v15 + v5) >= a5) {
                // 0x40cba6
                v12 = v15;
                v13 = v6;
                if (v6 >= v12) {
                    // break (via goto) -> 0x40cbab
                    goto lab_0x40cbab;
                }
                // 0x40cb80
                v14 = v12 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v12;
                v11 = v15;
            }
        }
        int64_t v16 = v10;
        int64_t v17 = v11 + 1; // 0x40cd18
        v13 = v17;
        while (v17 < v16) {
            // 0x40cb53
            v6 = v17;
            v7 = v6 + v16;
            v8 = (v7 / 0x8000000000000000 + v7) / 2;
            v9 = v8;
            v10 = v16;
            v11 = v8;
            if (*(int64_t *)(40 * v8 + v5) >= a5) {
                v13 = v6;
                if (v6 >= v9) {
                    // break (via goto) -> 0x40cbab
                    goto lab_0x40cbab;
                }
                // 0x40cb80
                v14 = v9 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v9;
                v11 = v15;
                while (*(int64_t *)(40 * v15 + v5) >= a5) {
                    // 0x40cba6
                    v12 = v15;
                    v13 = v6;
                    if (v6 >= v12) {
                        // break (via goto) -> 0x40cbab
                        goto lab_0x40cbab;
                    }
                    // 0x40cb80
                    v14 = v12 + v6;
                    v15 = (v14 / 0x8000000000000000 + v14) / 2;
                    v10 = v12;
                    v11 = v15;
                }
            }
            // 0x40cd18
            v16 = v10;
            v17 = v11 + 1;
            v13 = v17;
        }
      lab_0x40cbab:;
        int64_t v18 = v13;
        int64_t v19 = -1; // 0x40cbae
        if (v1 > v18) {
            // 0x40cbb4
            v19 = *(int64_t *)(40 * v18 + 8 + v4) != a5 ? -1 : v18;
        }
        int64_t v20 = 0;
        uint64_t v21 = v1 + v20; // 0x40cbdc
        int64_t v22 = (v21 / 0x8000000000000000 + v21) / 2; // 0x40cbf2
        int64_t v23 = v22; // 0x40cbfe
        int64_t v24 = v1; // 0x40cbfe
        int64_t v25 = v22; // 0x40cbfe
        int64_t v26; // 0x40cb20
        int64_t v27; // 0x40cb20
        uint64_t v28; // 0x40cc08
        int64_t v29; // 0x40cc17
        if (*(int64_t *)(40 * v22 + v5) >= a7) {
            v27 = v20;
            if (v20 >= v23) {
                // break (via goto) -> 0x40cc34
                goto lab_0x40cc34;
            }
            // 0x40cc08
            v28 = v23 + v20;
            v29 = (v28 / 0x8000000000000000 + v28) / 2;
            v24 = v23;
            v25 = v29;
            while (*(int64_t *)(40 * v29 + v5) >= a7) {
                // 0x40cc2f
                v26 = v29;
                v27 = v20;
                if (v20 >= v26) {
                    // break (via goto) -> 0x40cc34
                    goto lab_0x40cc34;
                }
                // 0x40cc08
                v28 = v26 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v26;
                v25 = v29;
            }
        }
        int64_t v30 = v24;
        int64_t v31 = v25 + 1; // 0x40cd30
        v27 = v31;
        while (v31 < v30) {
            // 0x40cbdc
            v20 = v31;
            v21 = v30 + v20;
            v22 = (v21 / 0x8000000000000000 + v21) / 2;
            v23 = v22;
            v24 = v30;
            v25 = v22;
            if (*(int64_t *)(40 * v22 + v5) >= a7) {
                v27 = v20;
                if (v20 >= v23) {
                    // break (via goto) -> 0x40cc34
                    goto lab_0x40cc34;
                }
                // 0x40cc08
                v28 = v23 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v23;
                v25 = v29;
                while (*(int64_t *)(40 * v29 + v5) >= a7) {
                    // 0x40cc2f
                    v26 = v29;
                    v27 = v20;
                    if (v20 >= v26) {
                        // break (via goto) -> 0x40cc34
                        goto lab_0x40cc34;
                    }
                    // 0x40cc08
                    v28 = v26 + v20;
                    v29 = (v28 / 0x8000000000000000 + v28) / 2;
                    v24 = v26;
                    v25 = v29;
                }
            }
            // 0x40cd30
            v30 = v24;
            v31 = v25 + 1;
            v27 = v31;
        }
      lab_0x40cc34:;
        int64_t v32 = v27;
        v2 = v19;
        v3 = -1;
        if (v1 > v32) {
            // 0x40cc3d
            v2 = v19;
            v3 = *(int64_t *)(40 * v32 + 8 + v4) != a7 ? -1 : v32;
        }
    }
    // 0x40cc5c
    if (a2 < 1) {
        // 0x40ccfe
        return 0;
    }
    int64_t * v33 = (int64_t *)(a1 + 216); // 0x40cc94
    int64_t * v34 = (int64_t *)*(int64_t *)(a1 + 152); // 0x40ccc5
    int64_t v35 = 0; // 0x40cd45
    int64_t v36 = 8 * v35; // 0x40cca8
    int64_t v37 = *(int64_t *)(v36 + a3); // 0x40cca8
    int64_t v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34); // 0x40ccc8
    int64_t v39 = function_40b100(a1, v37, v38, a4, a5, v2); // 0x40ccce
    uint64_t v40 = *(int64_t *)(v38 + v36); // 0x40ccec
    int64_t result = 1; // 0x40ccf7
    while ((int32_t)v39 == (int32_t)function_40b100(a1, v40, v38, a6, a7, v3)) {
        // 0x40cd40
        v35++;
        result = 0;
        if (v35 >= v40) {
            // break -> 0x40ccfe
            break;
        }
        v36 = 8 * v35;
        v37 = *(int64_t *)(v36 + v38);
        v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34);
        v39 = function_40b100(a1, v37, v38, a4, a5, v2);
        v40 = *(int64_t *)(v38 + v36);
        result = 1;
    }
    // 0x40ccfe
    return result;
}
// Address range: 0x40cd70 - 0x40cdc1
int64_t function_40cd70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40cd70
    int64_t result; // 0x40cd70
    if ((int32_t)result != 0) {
        // 0x40cdbc
        return result;
    }
    int64_t v1 = a1; // 0x40cd8e
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x40cd90
        int64_t v3 = v2; // 0x40cd99
        int64_t v4 = 0; // 0x40cd99
        int64_t v5 = v1; // 0x40cd99
        if (v2 == 0) {
            int64_t v6 = v5;
            int64_t v7 = *(int64_t *)(v6 + 16); // 0x40cda3
            v3 = v7;
            while (v7 != v4 != v7 != 0) {
                int64_t v8 = *(int64_t *)v6; // 0x40cdb1
                v4 = v6;
                if (v8 == 0) {
                    return result;
                }
                v6 = v8;
                v7 = *(int64_t *)(v6 + 16);
                v3 = v7;
            }
        }
        // 0x40cd80
        v1 = v3;
    }
}
// Address range: 0x40cdd0 - 0x40cf93
int64_t function_40cdd0(int64_t * a1, int128_t * a2) {
    // 0x40cdd0
    if (a2 == NULL) {
        // 0x40ced4
        return 0;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40cdd9
    int64_t v3 = *v2; // 0x40cdd9
    if (v3 == 0) {
        // 0x40ced4
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x40cded
    int64_t v6 = *v5; // 0x40cded
    int64_t v7 = v6 + 2 * v3;
    int64_t v8; // 0x40cdd0
    int64_t * v9; // 0x40cdd0
    int64_t v10; // 0x40cdd0
    int64_t v11; // 0x40cdd0
    int64_t v12; // 0x40cdd0
    if (v7 > v4) {
        int64_t v13 = v3 + v4; // 0x40cf30
        int64_t * v14 = (int64_t *)(v4 + 16);
        int64_t * mem = realloc((int64_t *)*v14, 16 * (int32_t)v13); // 0x40cf42
        if (mem == NULL) {
            // 0x40ced4
            return 12;
        }
        int64_t v15 = *v5; // 0x40cf4c
        *v14 = (int64_t)mem;
        *a1 = 2 * v13;
        int64_t v16 = *v2; // 0x40cf57
        v9 = v14;
        v11 = v16;
        if (v15 != 0) {
            // 0x40cf4c
            v8 = 2 * v16 + v15;
            v10 = v16;
            v12 = v15;
            goto lab_0x40ce0d;
        } else {
            goto lab_0x40cf65;
        }
    } else {
        // 0x40ce04
        v8 = v7;
        v10 = v3;
        v12 = v6;
        if (v6 == 0) {
            // 0x40ce04
            v9 = (int64_t *)(v4 + 16);
            v11 = v3;
            goto lab_0x40cf65;
        } else {
            goto lab_0x40ce0d;
        }
    }
  lab_0x40cf65:;
    int64_t v17 = *v9; // 0x40cf65
    int64_t v18 = *(int64_t *)(v1 + 16); // 0x40cf69
    *v5 = v11;
    memcpy((int64_t *)v17, (int64_t *)v18, 8 * (int32_t)*v2);
    // 0x40ced4
    return 0;
  lab_0x40ce0d:;
    int64_t v19 = v10 - 1; // 0x40ce11
    int64_t v20 = -v10; // 0x40ce1c
    int64_t v21 = v19; // 0x40ce23
    int64_t v22 = v8; // 0x40ce23
    if (v20 < 0) {
        int64_t v23 = v12; // 0x40cdd0
        int64_t v24 = v20;
        int64_t v25 = v8; // 0x40cdd0
        int64_t v26 = v19;
        while (true) {
            int64_t v27 = v23 - 1;
            int64_t v28 = v24; // 0x40ce56
            v21 = v26;
            v22 = v25;
            if (v27 < 0) {
                // break (via goto) -> 0x40ce60
                goto lab_0x40ce60_2;
            }
            int64_t v29 = v25;
            int64_t v30 = v26;
            int64_t v31 = *(int64_t *)(v4 + 16); // 0x40ce2f
            uint64_t v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30); // 0x40ce33
            uint64_t v33 = *(int64_t *)(v31 + 8 * v27); // 0x40ce37
            int64_t v34; // 0x40cdd0
            int64_t v35; // 0x40cdd0
            while (v33 != v32) {
                // 0x40ce41
                v34 = v30;
                v35 = v28;
                if (v33 >= v32) {
                    goto lab_0x40ce20;
                }
                int64_t v36 = v30 - 1; // 0x40ce47
                int64_t v37 = v29 - 1; // 0x40ce4b
                *(int64_t *)(v31 + 8 * v37) = v32;
                v28 = -v30;
                v21 = v36;
                v22 = v37;
                if (v28 >= 0) {
                    // break (via goto) -> 0x40ce60
                    goto lab_0x40ce60_2;
                }
                v21 = v26;
                v22 = v25;
                if (v27 < 0) {
                    // break (via goto) -> 0x40ce60
                    goto lab_0x40ce60_2;
                }
                // 0x40ce2a
                v29 = v37;
                v30 = v36;
                v31 = *(int64_t *)(v4 + 16);
                v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30);
                v33 = *(int64_t *)(v31 + 8 * v27);
            }
            // 0x40cf00
            v34 = v30 - 1;
            v35 = -v30;
          lab_0x40ce20:
            // 0x40ce20
            v24 = v35;
            v26 = v34;
            v23 = v27;
            v25 = v29;
            v21 = v26;
            v22 = v29;
            if (v24 >= 0) {
                // break -> 0x40ce60
                break;
            }
        }
    }
  lab_0x40ce60_2:;
    int64_t v38 = v22; // 0x40ce63
    if (v21 >= 0) {
        int64_t v39 = v21 + 1; // 0x40ce65
        int64_t v40 = *(int64_t *)(v4 + 16); // 0x40ce69
        int64_t v41 = *(int64_t *)(v1 + 16); // 0x40ce6d
        int64_t v42 = v22 - v39; // 0x40ce72
        memcpy((int64_t *)(v40 + 8 * v42), (int64_t *)v41, 8 * (int32_t)v39);
        v38 = v42;
    }
    int64_t v43 = *v5; // 0x40ce86
    int64_t v44 = v43 - 1; // 0x40ce8f
    int64_t v45 = 2 * *v2 + v44; // 0x40ce8f
    int64_t v46 = v45 - v38 + 1; // 0x40ce9a
    if (v46 == 0) {
      lab_0x40ced4:
        // 0x40ced4
        return 0;
    }
    int64_t v47 = *(int64_t *)(v4 + 16); // 0x40cea7
    *v5 = v46 + v43;
    int64_t v48 = v44; // 0x40ceaf
    int64_t v49 = v46; // 0x40ceaf
    int64_t v50 = v45; // 0x40ceaf
    while (true) {
        int64_t v51 = v50;
        int64_t v52 = v49;
        uint64_t v53 = *(int64_t *)(8 * v51 + v47); // 0x40ceb0
        uint64_t v54 = *(int64_t *)(8 * v48 + v47); // 0x40ceb4
        int64_t v55 = 8 * (v52 + v48) + v47; // 0x40cebc
        while (v53 > v54) {
            // 0x40cec5
            *(int64_t *)v55 = v53;
            int64_t v56 = v52 - 1; // 0x40cecc
            if (v56 == 0) {
                return 0;
            }
            v51--;
            v52 = v56;
            v53 = *(int64_t *)(8 * v51 + v47);
            v54 = *(int64_t *)(8 * v48 + v47);
            v55 = 8 * (v52 + v48) + v47;
        }
        // 0x40cee0
        *(int64_t *)v55 = v54;
        int64_t v57 = v48 - 1; // 0x40cee3
        v48 = v57;
        v49 = v52;
        v50 = v51;
        if (v57 < 0) {
            // 0x40cee9
            memcpy((int64_t *)v47, (int64_t *)(v47 + 8 * v38), 8 * (int32_t)v52);
            return 0;
        }
    }
    // 0x40ced4
    int64_t v58; // 0x40cdd0
    int64_t result = v58;
    return result;
}
// Address range: 0x40cfa0 - 0x40d1f4
int64_t function_40cfa0(int128_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 24 * a3; // 0x40cfb4
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x40cfbc
    int64_t v3 = *v2 + v1; // 0x40cfc4
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x40cfcb
    int64_t v5 = *v4 + 1; // 0x40cfd8
    int128_t v6 = v5; // bp-120, 0x40cfdc
    int64_t * mem = malloc(8 * (int32_t)v5); // 0x40cfe5
    if (mem == NULL) {
        // 0x40d0ca
        return 12;
    }
    int64_t v7 = (int64_t)mem; // 0x40cfe5
    int64_t * v8 = (int64_t *)(a2 + 48); // 0x40cff8
    int64_t v9 = v1 + 8;
    *(int64_t *)(*v8 + v9) = -1;
    int64_t v10 = a2 + 8 + 16 * a3;
    uint32_t v11 = *(int32_t *)v10; // 0x40d013
    int64_t v12 = v10; // 0x40d01e
    if ((v11 & 0x3ff00) != 0) {
        // 0x40d140
        if (*v4 == 0) {
            goto lab_0x40d190;
        } else {
            int64_t v13 = *(int64_t *)*(int64_t *)(v3 + 16); // 0x40d14b
            v12 = v10;
            if ((*(char *)(a2 + 10 + 16 * v13) & 4) == 0) {
                int64_t result = function_40c1d0(a2, a3, a3, a3, (int64_t)(v11 / 256 % 1024)); // 0x40d174
                if ((int32_t)result != 0) {
                    // 0x40d0ca
                    return result;
                }
                // 0x40d181
                v12 = 17 * a3 + 8;
            }
            goto lab_0x40d024;
        }
    } else {
        goto lab_0x40d024;
    }
  lab_0x40d024:;
    // 0x40d024
    int64_t v14; // 0x40cfa0
    int64_t v15; // 0x40cfa0
    if ((*(char *)v12 & 8) == 0) {
        goto lab_0x40d190;
    } else {
        int64_t v16 = *v2; // 0x40d02e
        int64_t v17 = v16 + v1; // 0x40d032
        if (*(int64_t *)(v17 + 8) < 1) {
            goto lab_0x40d190;
        } else {
            int64_t v18 = 0;
            int64_t v19 = *(int64_t *)(*(int64_t *)(v17 + 16) + 8 * v18); // 0x40d097
            int64_t v20 = *v8; // 0x40d09b
            int64_t v21 = 24 * v19; // 0x40d0a3
            int64_t v22 = v20 + v21; // 0x40d0a7
            int64_t v23 = *(int64_t *)(v22 + 8); // 0x40d0aa
            int64_t v24 = 0; // 0x40d0b2
            int64_t v25 = v18; // 0x40d0b2
            int64_t v26 = v19; // 0x40d0b2
            int64_t v27 = v21; // 0x40d0b2
            int64_t v28 = v22; // 0x40d0b2
            int64_t v29 = v23; // 0x40d0b2
            int64_t v30; // 0x40cfa0
            int64_t v31; // 0x40d0f8
            int64_t v32; // 0x40d102
            int64_t v33; // 0x40d097
            int64_t v34; // 0x40d0a3
            int64_t v35; // 0x40d0a7
            int64_t v36; // 0x40d0aa
            if (v23 == -1) {
                // 0x40d0f8
                v31 = v16 + v1;
                v32 = v18;
                v32++;
                v30 = 1;
                if (*(int64_t *)(v31 + 8) <= v32) {
                    // break (via goto) -> 0x40d10c
                    goto lab_0x40d10c;
                }
                // 0x40d093
                v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                v34 = 24 * v33;
                v35 = v34 + v20;
                v36 = *(int64_t *)(v35 + 8);
                v24 = 1;
                v25 = v32;
                v26 = v33;
                v27 = v34;
                v28 = v35;
                v29 = v36;
                while (v36 == -1) {
                    // 0x40d0f8
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40d10c
                        goto lab_0x40d10c;
                    }
                    // 0x40d093
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                }
            }
            int64_t v37 = v29;
            int64_t result2; // 0x40cfa0
            int64_t v38; // 0x40cfa0
            int128_t v39; // bp-88, 0x40cfa0
            int64_t v40; // 0x40d0c1
            if (v37 != 0) {
                // 0x40d050
                v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                v38 = *(int64_t *)(v28 + 16);
            } else {
                // 0x40d0b9
                v40 = function_40cfa0(&v39, a2, v26, v37);
                int64_t v41; // 0x40cfa0
                v38 = v41;
                result2 = v40;
                if ((int32_t)v40 != 0) {
                    // 0x40d0ca
                    return result2;
                }
            }
            int64_t v42 = function_40cdd0((int64_t *)&v6, &v39); // 0x40d06c
            result2 = v42;
            while ((int32_t)v42 == 0) {
                int64_t v43 = v38;
                int64_t v44 = v24; // 0x40d07f
                if (*(int64_t *)(v27 + 8 + *v8) == 0) {
                    // 0x40d0e0
                    free((int64_t *)v43);
                    v44 = 1;
                }
                int64_t v45 = *v2; // 0x40d081
                int64_t v46 = v25 + 1; // 0x40d085
                int64_t v47 = v45 + v1; // 0x40d089
                int64_t v48 = v45; // 0x40d091
                if (*(int64_t *)(v47 + 8) <= v46) {
                    // break -> 0x40d10c
                    break;
                }
                v18 = v46;
                int64_t v49 = v43;
                v19 = *(int64_t *)(*(int64_t *)(v47 + 16) + 8 * v18);
                v20 = *v8;
                v21 = 24 * v19;
                v22 = v20 + v21;
                v23 = *(int64_t *)(v22 + 8);
                v24 = v44;
                v25 = v18;
                v26 = v19;
                v27 = v21;
                v28 = v22;
                v29 = v23;
                if (v23 == -1) {
                    // 0x40d0f8
                    v31 = v48 + v1;
                    v32 = v18;
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x40d10c
                        goto lab_0x40d10c;
                    }
                    // 0x40d093
                    v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                    v34 = 24 * v33;
                    v35 = v34 + v20;
                    v36 = *(int64_t *)(v35 + 8);
                    v24 = 1;
                    v25 = v32;
                    v26 = v33;
                    v27 = v34;
                    v28 = v35;
                    v29 = v36;
                    while (v36 == -1) {
                        // 0x40d0f8
                        v32++;
                        v30 = 1;
                        if (*(int64_t *)(v31 + 8) <= v32) {
                            // break (via goto) -> 0x40d10c
                            goto lab_0x40d10c;
                        }
                        // 0x40d093
                        v33 = *(int64_t *)(*(int64_t *)(v31 + 16) + 8 * v32);
                        v34 = 24 * v33;
                        v35 = v34 + v20;
                        v36 = *(int64_t *)(v35 + 8);
                        v24 = 1;
                        v25 = v32;
                        v26 = v33;
                        v27 = v34;
                        v28 = v35;
                        v29 = v36;
                    }
                }
                // 0x40d0b4
                v37 = v29;
                if (v37 != 0) {
                    // 0x40d050
                    v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                    v38 = *(int64_t *)(v28 + 16);
                } else {
                    // 0x40d0b9
                    v40 = function_40cfa0(&v39, a2, v26, v37);
                    v38 = v49;
                    result2 = v40;
                    if ((int32_t)v40 != 0) {
                        // 0x40d0ca
                        return result2;
                    }
                }
                // 0x40d062
                v42 = function_40cdd0((int64_t *)&v6, &v39);
                result2 = v42;
            }
            // 0x40d0ca
            return result2;
          lab_0x40d10c:
            // 0x40d10c
            if ((char)function_40b280((int64_t)&v6, a3) == 0) {
                // 0x40d0ca
                return 12;
            }
            int64_t v50 = *v8; // 0x40d121
            v15 = v50;
            if ((char)a4 == 1 || (char)v30 == 0) {
                goto lab_0x40d1a5;
            } else {
                // 0x40d135
                *(int64_t *)(v50 + v9) = 0;
                v14 = 0x100000000 * v7 >> 32;
                goto lab_0x40d1b9;
            }
        }
    }
  lab_0x40d190:
    // 0x40d190
    if ((char)function_40b280((int64_t)&v6, a3) == 0) {
        // 0x40d0ca
        return 12;
    }
    // 0x40d1a1
    v15 = *v8;
    goto lab_0x40d1a5;
  lab_0x40d1a5:;
    int128_t v51 = __asm_movdqa(0); // 0x40d1a5
    int64_t v52 = v15 + v1;
    __asm_movups(*(int128_t *)v52, v51);
    int64_t v53 = 0x100000000 * v7 >> 32;
    *(int64_t *)(v52 + 16) = v53;
    v14 = v53;
    goto lab_0x40d1b9;
  lab_0x40d1b9:;
    int128_t v54 = __asm_movdqa(0); // 0x40d1c2
    *(int64_t *)((int64_t)a1 + 16) = v14;
    *a1 = (int128_t)__asm_movaps(v54);
    return 0;
}
// Address range: 0x40d200 - 0x40d33f
int64_t function_40d200(int64_t a1, int64_t * a2, int64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40d217
    int64_t v3 = *v2; // 0x40d217
    int64_t size = 8 * v3; // 0x40d224
    int128_t v4 = v3; // bp-72, 0x40d22c
    int64_t * mem = malloc((int32_t)size); // 0x40d231
    if (mem == NULL) {
        // 0x40d32d
        return 12;
    }
    int64_t * v5 = (int64_t *)(v1 + 16);
    if (v3 < 1) {
      lab_0x40d2cd:
        // 0x40d2cd
        free((int64_t *)*v5);
        int128_t v6 = __asm_movdqa(0); // 0x40d2db
        *v5 = (int64_t)mem;
        *(int128_t *)a2 = (int128_t)__asm_movaps(v6);
        return 0;
    }
    int64_t v7 = &v4;
    int64_t v8 = size; // 0x40d200
    int64_t v9 = 0; // 0x40d2c3
    int64_t v10; // 0x40d200
    int64_t v11; // 0x40d200
    int64_t v12; // 0x40d260
    while (true) {
      lab_0x40d250:;
        int64_t v13 = *(int64_t *)(*v5 + 8 * v9); // 0x40d254
        v12 = *(int64_t *)(a1 + 48) + 24 * v13;
        uint64_t v14 = *(int64_t *)(v12 + 8); // 0x40d264
        if (v14 >= 1) {
            int64_t v15 = 0;
            int64_t v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16)); // 0x40d289
            int64_t v17 = 16 * v16 + v8; // 0x40d294
            int64_t v18; // 0x40d2ba
            if ((int32_t)*(char *)(v17 + 8) == a4) {
                // 0x40d2a1
                if (*(int64_t *)v17 == a3) {
                    if (v16 == -1) {
                        goto lab_0x40d300;
                    } else {
                        // 0x40d2ac
                        v18 = function_40c900(a1, v7, v13, a3, (int64_t)a4);
                        v11 = a1;
                        v10 = v18;
                        if ((int32_t)v18 != 0) {
                            goto lab_0x40d30e_2;
                        } else {
                            goto lab_0x40d2c3;
                        }
                    }
                }
            }
            int64_t v19 = v15 + 1; // 0x40d280
            while (v14 != v19) {
                // 0x40d289
                v15 = v19;
                v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16));
                v17 = 16 * v16 + v8;
                if ((int32_t)*(char *)(v17 + 8) == a4) {
                    // 0x40d2a1
                    if (*(int64_t *)v17 == a3) {
                        if (v16 == -1) {
                            goto lab_0x40d300;
                        } else {
                            // 0x40d2ac
                            v18 = function_40c900(a1, v7, v13, a3, (int64_t)a4);
                            v11 = a1;
                            v10 = v18;
                            if ((int32_t)v18 != 0) {
                                goto lab_0x40d30e_2;
                            } else {
                                goto lab_0x40d2c3;
                            }
                        }
                    }
                }
                // 0x40d280
                v19 = v15 + 1;
            }
        }
        goto lab_0x40d300;
    }
  lab_0x40d30e_2:
    // 0x40d30e
    free(mem);
    return v10 & 0xffffffff;
  lab_0x40d300:;
    int64_t v20 = function_40cdd0((int64_t *)&v4, (int128_t *)v12); // 0x40d305
    v11 = v7;
    v10 = v20;
    if ((int32_t)v20 != 0) {
        // break -> 0x40d30e
        goto lab_0x40d30e_2;
    }
    goto lab_0x40d2c3;
  lab_0x40d2c3:
    // 0x40d2c3
    v9++;
    v8 = v11;
    if (*v2 <= v9) {
        goto lab_0x40d2cd;
    }
    goto lab_0x40d250;
}
// Address range: 0x40d340 - 0x40d4f2
int64_t function_40d340(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40d340
    int64_t v2 = *v1; // 0x40d340
    if (v2 == 0) {
        // 0x40d408
        return 0;
    }
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x40d34f
    int64_t v4 = *v3; // 0x40d34f
    if (v4 == 0) {
        // 0x40d408
        return 0;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v4 + v2; // 0x40d35e
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40d373
    int64_t v8 = *v7; // 0x40d373
    int64_t * v9 = (int64_t *)(v5 + 16); // 0x40d37a
    int64_t v10 = *v9; // 0x40d37a
    int64_t v11 = v8; // 0x40d385
    int64_t v12 = v10; // 0x40d385
    int64_t v13 = v4; // 0x40d385
    int64_t v14 = v2; // 0x40d385
    if (v8 + v6 > v5) {
        int64_t v15 = v6 + v5; // 0x40d4ba
        int64_t * mem = realloc((int64_t *)v10, 8 * (int32_t)v15); // 0x40d4c5
        if (mem == NULL) {
            // 0x40d408
            return 12;
        }
        // 0x40d4d2
        v12 = (int64_t)mem;
        v11 = *v7;
        v14 = *v1;
        *v9 = v12;
        *(int64_t *)a1 = v15;
        v13 = *v3;
    }
    int64_t v16 = *(int64_t *)(a2 + 16); // 0x40d38b
    int64_t v17 = *(int64_t *)(a3 + 16); // 0x40d38f
    int64_t v18 = v13 - 1; // 0x40d398
    int64_t v19 = v18; // 0x40d3ac
    int64_t v20 = v11 - 1; // 0x40d3ac
    int64_t v21 = *(int64_t *)(v17 + 8 * v18); // 0x40d3ac
    int64_t v22 = v13 + v11 + v14; // 0x40d3ac
    int64_t v23 = v14 - 1; // 0x40d3ac
    int64_t v24; // 0x40d340
    int64_t v25; // 0x40d340
    int64_t v26; // 0x40d340
    int64_t v27; // 0x40d340
    int64_t v28; // 0x40d340
    int64_t v29; // 0x40d340
    int64_t v30; // 0x40d340
    int64_t v31; // 0x40d340
    int64_t v32; // 0x40d340
    int64_t v33; // 0x40d340
    int64_t v34; // 0x40d340
    int64_t v35; // 0x40d340
    int64_t v36; // 0x40d340
    int64_t v37; // 0x40d340
    while (true) {
      lab_0x40d3b0:;
        int64_t v38 = v21;
        int64_t v39 = *(int64_t *)(8 * v23 + v16);
        v26 = v24;
        v27 = v25;
        v32 = v19;
        v34 = v20;
        v21 = v38;
        v36 = v22;
        v30 = v39;
        v28 = v23;
        v33 = v19;
        v35 = v20;
        v37 = v22;
        v31 = v38;
        v29 = v23;
        if (v39 == v38) {
            goto lab_0x40d3c6;
        } else {
            goto lab_0x40d3b5;
        }
    }
  lab_0x40d420_4:;
    int64_t v40 = *v7; // 0x40d420
    int64_t v41 = *v1 + v40 + *v3; // 0x40d42b
    int64_t v42 = v40 - 1; // 0x40d430
    int64_t v43; // 0x40d340
    int64_t v44 = v41 - v43; // 0x40d438
    *v7 = v44 + v40;
    int64_t v45; // 0x40d340
    int64_t v46; // 0x40d340
    if (v42 < 0 || v44 < 1) {
        // 0x40d4a0
        v46 = 8 * v44;
        v45 = v12;
    } else {
        int64_t v47 = v42; // 0x40d340
        int64_t v48 = v44; // 0x40d340
        int64_t v49 = v41 - 1; // 0x40d340
        while (true) {
            int64_t v50 = v47;
            int64_t v51 = v49;
            int64_t v52 = v48;
            uint64_t v53 = *(int64_t *)(8 * v51 + v12); // 0x40d450
            uint64_t v54 = *(int64_t *)(8 * v50 + v12); // 0x40d454
            int64_t v55 = 8 * (v52 + v50) + v12; // 0x40d45c
            while (v53 > v54) {
                // 0x40d465
                *(int64_t *)v55 = v53;
                int64_t v56 = v52 - 1; // 0x40d46c
                if (v56 == 0) {
                    // break (via goto) -> 0x40d472
                    goto lab_0x40d472;
                }
                v51--;
                v52 = v56;
                v53 = *(int64_t *)(8 * v51 + v12);
                v54 = *(int64_t *)(8 * v50 + v12);
                v55 = 8 * (v52 + v50) + v12;
            }
            // 0x40d480
            *(int64_t *)v55 = v54;
            v47 = v50 - 1;
            v48 = v52;
            v49 = v51;
            if (v50 == 0) {
                // 0x40d48d
                v46 = 8 * v52;
                v45 = *v9;
                goto lab_0x40d4a4;
            }
        }
      lab_0x40d472:
        // 0x40d472
        v46 = 0;
        v45 = *v9;
    }
    goto lab_0x40d4a4;
  lab_0x40d3e8:;
    // 0x40d3e8
    int64_t v58; // 0x40d340
    int64_t v59 = v58 - 1; // 0x40d3e8
    uint64_t v60; // 0x40d340
    *(int64_t *)(8 * v59 + v12) = v60;
    int64_t v61; // 0x40d340
    int64_t v62 = v61; // 0x40d3ec
    int64_t v63 = v59; // 0x40d3ec
    goto lab_0x40d3f0;
  lab_0x40d3c6:
    // 0x40d3c6
    v60 = v31;
    v58 = v37;
    int64_t v72 = v35; // 0x40d3c9
    v61 = v35;
    if (v35 >= 0) {
        int64_t v73 = v72;
        uint64_t v74 = *(int64_t *)(8 * v73 + v12); // 0x40d3da
        while (v74 > v60) {
            // 0x40d3d0
            v72 = v73 - 1;
            v61 = -1;
            if (v73 == 0) {
                goto lab_0x40d3e8;
            }
            v73 = v72;
            v74 = *(int64_t *)(8 * v73 + v12);
        }
        // 0x40d3e3
        v61 = v73;
        v62 = v73;
        v63 = v58;
        if (v74 == v60) {
            goto lab_0x40d3f0;
        } else {
            goto lab_0x40d3e8;
        }
    } else {
        goto lab_0x40d3e8;
    }
  lab_0x40d3b5:;
    int64_t v75 = v28;
    v22 = v36;
    v20 = v34;
    v19 = v32;
    int64_t v76 = v27;
    int64_t v77 = v26;
    int64_t v70; // 0x40d340
    int64_t v69; // 0x40d340
    int64_t v66; // 0x40d340
    int64_t v67; // 0x40d340
    int64_t v68; // 0x40d340
    if (v77 < v76) {
        int64_t v78 = v19 - 1; // 0x40d3b7
        v66 = v78;
        v67 = v20;
        v68 = v22;
        v69 = v30;
        v70 = v75;
        if (v78 < 0) {
            // break -> 0x40d420
            goto lab_0x40d420_4;
        }
        goto lab_0x40d3bd;
    } else {
        // 0x40d410
        v23 = v75 - 1;
        v24 = v77;
        v25 = v76;
        v43 = v22;
        if (v23 < 0) {
            // break -> 0x40d420
            goto lab_0x40d420_4;
        }
        goto lab_0x40d3b0;
    }
  lab_0x40d3f0:;
    int64_t v64 = v29 - 1; // 0x40d3f0
    v43 = v63;
    if (v64 < 0) {
        // break -> 0x40d420
        goto lab_0x40d420_4;
    }
    int64_t v65 = v33 - 1; // 0x40d3f6
    v43 = v63;
    if (v65 < 0) {
        // break -> 0x40d420
        goto lab_0x40d420_4;
    }
    // 0x40d3fc
    v66 = v65;
    v67 = v62;
    v68 = v63;
    v69 = *(int64_t *)(8 * v64 + v16);
    v70 = v64;
    goto lab_0x40d3bd;
  lab_0x40d3bd:;
    int64_t v71 = *(int64_t *)(8 * v66 + v17); // 0x40d3bd
    v26 = v69;
    v27 = v71;
    v32 = v66;
    v34 = v67;
    v21 = v71;
    v36 = v68;
    v30 = v69;
    v28 = v70;
    v33 = v66;
    v35 = v67;
    v37 = v68;
    v31 = v69;
    v29 = v70;
    if (v69 != v71) {
        goto lab_0x40d3b5;
    } else {
        goto lab_0x40d3c6;
    }
  lab_0x40d4a4:;
    int64_t v57 = v45;
    memcpy((int64_t *)v57, (int64_t *)(v57 + 8 * v43), (int32_t)v46);
    // 0x40d408
    return 0;
}
// Address range: 0x40d500 - 0x40d5d7
int64_t function_40d500(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = a2;
    int64_t v3; // 0x40d500
    int64_t v4; // 0x40d500
    int32_t v5; // 0x40d500
    int64_t v6; // 0x40d500
    if (v2 == 15) {
        int64_t * mem = malloc(968); // 0x40d598
        if (mem == NULL) {
            // 0x40d579
            return 0;
        }
        int64_t v7 = (int64_t)mem; // 0x40d598
        *(int64_t *)a1 = v7;
        *mem = 968;
        v5 = 1;
        v6 = 0;
        v4 = 8;
        v3 = v7;
    } else {
        int64_t v8 = 0x100000000 * a2;
        int64_t v9 = v8 >> 26; // 0x40d519
        v5 = v2 + 1;
        v6 = v9;
        v4 = v9 | 8;
        v3 = v8 >> 32;
    }
    int64_t v10 = a3;
    int64_t v11 = a4;
    *(int32_t *)a2 = v5;
    int64_t result = v3 + v4; // 0x40d526
    int64_t v12 = v3 + v6;
    *(int64_t *)(v12 + 8) = 0;
    *(int64_t *)(v12 + 16) = v10;
    *(int64_t *)(v12 + 24) = v11;
    __asm_movups(*(int128_t *)(v12 + 48), __asm_movdqu(*(int128_t *)&v1));
    char * v13 = (char *)(v12 + 58); // 0x40d54b
    *v13 = *v13 & -13;
    *(int64_t *)(v12 + 32) = 0;
    *(int64_t *)(v12 + 40) = 0;
    *(int64_t *)(v12 + 64) = -1;
    if (a3 != 0) {
        // 0x40d56e
        *(int64_t *)v10 = result;
    }
    // 0x40d571
    if (a4 != 0) {
        // 0x40d576
        *(int64_t *)v11 = result;
    }
    // 0x40d579
    return result;
}
// Address range: 0x40d5e0 - 0x40d689
int64_t function_40d5e0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 112; // 0x40d5e4
    int64_t v2 = a2 + 128; // 0x40d5ea
    int64_t v3 = function_40d500(v1, v2, 0, 0, a1 + 40); // 0x40d61d
    int64_t v4 = v3; // bp-48, 0x40d622
    if (v3 == 0) {
        // 0x40d66d
        return 0;
    }
    *(int64_t *)v3 = a1;
    int64_t v5 = *&v4; // 0x40d62d
    char * v6 = (char *)(v5 + 50); // 0x40d630
    *v6 = *v6 | 4;
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x40d634
    int64_t v8; // 0x40d5e0
    int64_t v9; // 0x40d5e0
    int64_t result; // 0x40d5e0
    int64_t v10; // 0x40d5e0
    int64_t v11; // 0x40d5e0
    int64_t v12; // 0x40d5e0
    int64_t v13; // 0x40d5e0
    int64_t v14; // 0x40d5e0
    int64_t v15; // 0x40d659
    int64_t v16; // 0x40d65c
    int64_t v17; // 0x40d64b
    int64_t v18; // 0x40d64b
    if (v7 != 0) {
        // 0x40d608
        v13 = v7;
        v10 = v5;
        v9 = v5 + 8;
    } else {
        // 0x40d64b
        v18 = *(int64_t *)(a1 + 16);
        v11 = v5;
        v12 = v5;
        v8 = v18;
        if (v18 != 0 != v18 != 0) {
            v14 = a1;
            v15 = *(int64_t *)v14;
            if (v15 == 0) {
                // 0x40d668
                result = v4;
                return result;
            }
            // 0x40d648
            v16 = *(int64_t *)v11;
            v17 = *(int64_t *)(v15 + 16);
            v11 = v16;
            v12 = v16;
            v8 = v17;
            while (v17 != 0 != v17 != v14) {
                // 0x40d659
                v14 = v15;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40d668
                    result = v4;
                    return result;
                }
                // 0x40d648
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
            }
        }
        // 0x40d680
        v13 = v8;
        v10 = v12;
        v9 = v12 + 16;
    }
    int64_t v19 = v13;
    int64_t v20 = function_40d500(v1, v2, 0, 0, v19 + 40); // 0x40d61d
    int64_t * v21 = (int64_t *)v9; // 0x40d622
    *v21 = v20;
    result = 0;
    while (v20 != 0) {
        int64_t v22 = v19;
        *(int64_t *)v20 = v10;
        v5 = *v21;
        v6 = (char *)(v5 + 50);
        *v6 = *v6 | 4;
        v7 = *(int64_t *)(v22 + 8);
        if (v7 != 0) {
            // 0x40d608
            v13 = v7;
            v10 = v5;
            v9 = v5 + 8;
        } else {
            // 0x40d64b
            v18 = *(int64_t *)(v22 + 16);
            v11 = v5;
            int64_t v23 = v22; // 0x40d652
            v12 = v5;
            v8 = v18;
            if (v18 != 0 != v18 != 0) {
                v14 = v23;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x40d668
                    result = v4;
                    return result;
                }
                // 0x40d648
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
                while (v17 != 0 != v17 != v14) {
                    // 0x40d659
                    v14 = v15;
                    v15 = *(int64_t *)v14;
                    if (v15 == 0) {
                        // 0x40d668
                        result = v4;
                        return result;
                    }
                    // 0x40d648
                    v16 = *(int64_t *)v11;
                    v17 = *(int64_t *)(v15 + 16);
                    v11 = v16;
                    v12 = v16;
                    v8 = v17;
                }
            }
            // 0x40d680
            v13 = v8;
            v10 = v12;
            v9 = v12 + 16;
        }
        // 0x40d60f
        v19 = v13;
        v20 = function_40d500(v1, v2, 0, 0, v19 + 40);
        v21 = (int64_t *)v9;
        *v21 = v20;
        result = 0;
    }
  lab_0x40d66d:
    // 0x40d66d
    return result;
}
// Address range: 0x40d690 - 0x40d8aa
int64_t function_40d690(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = *(int64_t *)(a3 + 8); // 0x40d6a4
    int64_t v1; // 0x40d690
    int64_t v2; // 0x40d690
    int64_t v3; // 0x40d690
    int64_t v4; // 0x40d690
    int64_t v5; // 0x40d690
    int64_t v6; // bp-72, 0x40d690
    int64_t v7; // 0x40d690
    int64_t v8; // 0x40d6df
    int64_t v9; // 0x40d6e6
    int64_t v10; // 0x40d690
    int64_t v11; // 0x40d709
    int64_t v12; // 0x40d723
    if ((*(char *)(a2 + 56) & 16) == 0) {
        int64_t v13 = a2 + 128; // 0x40d838
        int64_t v14 = a2 + 112; // 0x40d83f
        int64_t v15 = &v6;
        int64_t v16 = function_40d500(v14, v13, 0, 0, v15); // 0x40d862
        int64_t v17 = function_40d500(v14, v13, 0, 0, v15); // 0x40d87c
        v10 = v15;
        v8 = v13;
        v11 = v16;
        v9 = v14;
        v12 = v17;
        v1 = v15;
        v7 = v13;
        v5 = v16;
        v2 = v17;
        v3 = v14;
        v4 = v17;
        if (result != 0) {
            goto lab_0x40d72b;
        } else {
            goto lab_0x40d749;
        }
    } else {
        if (result == 0) {
            int64_t v18 = a2 + 128; // 0x40d7e0
            int64_t v19 = a2 + 112; // 0x40d7e7
            int64_t v20 = &v6;
            int64_t v21 = function_40d500(v19, v18, 0, 0, v20); // 0x40d80a
            int64_t v22 = function_40d500(v19, v18, 0, 0, v20); // 0x40d824
            v1 = v20;
            v7 = v18;
            v5 = v21;
            v2 = v22;
            v3 = v19;
            v4 = v22;
            goto lab_0x40d749;
        } else {
            uint64_t v23 = *(int64_t *)(a3 + 40); // 0x40d6c0
            if (v23 > 63 || (*(int64_t *)(a2 + 160) & 1 << v23 % 64) == 0) {
                // 0x40d7c7
                return result;
            }
            // 0x40d6df
            v8 = a2 + 128;
            v9 = a2 + 112;
            v10 = &v6;
            v11 = function_40d500(v9, v8, 0, 0, v10);
            v12 = function_40d500(v9, v8, 0, 0, v10);
            goto lab_0x40d72b;
        }
    }
  lab_0x40d72b:;
    int64_t v24 = function_40d500(v9, v8, (int32_t)result, (int32_t)v12, v10); // 0x40d741
    v1 = v10;
    v7 = v8;
    v5 = v11;
    v2 = v24;
    v3 = v9;
    v4 = v12;
    goto lab_0x40d749;
  lab_0x40d749:;
    int64_t v25 = function_40d500(v3, v7, (int32_t)v5, (int32_t)v2, v1); // 0x40d764
    int64_t result2; // 0x40d690
    if (v4 == 0 || v5 == 0 || v2 == 0 || v25 == 0) {
        // 0x40d898
        *a1 = 12;
        result2 = 0;
    } else {
        int64_t v26 = *(int64_t *)(a3 + 40); // 0x40d795
        *(int64_t *)(v4 + 40) = v26;
        *(int64_t *)(v5 + 40) = v26;
        char * v27 = (char *)(v4 + 50); // 0x40d7a8
        char v28 = *(char *)(a3 + 50) & 8;
        *v27 = *v27 & -9 | v28;
        char * v29 = (char *)(v5 + 50); // 0x40d7bb
        *v29 = *v29 & -9 | v28;
        result2 = v25;
    }
    // 0x40d7c7
    return result2;
}
// Address range: 0x40d8b0 - 0x40d92b
int64_t function_40d8b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40d8bc
    int64_t v2 = *v1; // 0x40d8bc
    int32_t result = 0; // bp-28, 0x40d8c0
    int64_t v3; // 0x40d8b0
    if (v2 != 0) {
        // 0x40d8cd
        if (*(char *)(v2 + 48) == 17) {
            int64_t v4 = function_40d690(&result, a1, v2, v3); // 0x40d8f8
            *v1 = v4;
            if (v4 != 0) {
                // 0x40d906
                *(int64_t *)v4 = a2;
            }
        }
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x40d8d3
    int64_t v6 = *v5; // 0x40d8d3
    if (v6 == 0 || *(char *)(v6 + 48) != 17) {
        // 0x40d8e2
        return result;
    }
    int64_t v7 = function_40d690(&result, a1, v6, v3); // 0x40d918
    *v5 = v7;
    if (v7 != 0) {
        // 0x40d926
        *(int64_t *)v7 = a2;
    }
    // 0x40d8e2
    return result;
}
// Address range: 0x40d930 - 0x40d9af
int64_t function_40d930(int64_t a1, int64_t a2) {
    // 0x40d930
    int128_t v1; // 0x40d930
    int128_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x40d930
    *(int64_t *)(a1 + 8) = v4;
    if (v4 < 1) {
        int128_t v5 = __asm_pxor(v2, v2); // 0x40d980
        *(int64_t *)(v3 + 16) = 0;
        __asm_movups(*(int128_t *)&v3, v5);
        return 0;
    }
    int64_t * v6 = (int64_t *)v3; // 0x40d94f
    *v6 = v4;
    int32_t size = 8 * (int32_t)v4; // 0x40d955
    int64_t * mem = malloc(size); // 0x40d955
    *(int64_t *)(v3 + 16) = (int64_t)mem;
    int64_t result; // 0x40d930
    if (mem == NULL) {
        // 0x40d998
        *(int64_t *)(v3 + 8) = 0;
        *v6 = 0;
        result = 12;
    } else {
        // 0x40d963
        memcpy(mem, (int64_t *)*(int64_t *)(a2 + 16), size);
        result = 0;
    }
    // 0x40d975
    return result;
}
// Address range: 0x40d9b0 - 0x40db32
int64_t function_40d9b0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40d9b0
    int128_t v1; // 0x40d9b0
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    if (a2 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 8); // 0x40d9c7
        int64_t v5 = *v4; // 0x40d9c7
        if (a3 != 0 && v5 >= 1) {
            int64_t * v6 = (int64_t *)(a3 + 8); // 0x40d9dd
            uint64_t v7 = *v6; // 0x40d9dd
            if (v7 < 1) {
                // 0x40dab3
                return function_40d930(v3, a2);
            }
            int64_t v8 = v7 + v5; // 0x40d9ed
            *a1 = v8;
            int64_t * mem = malloc(8 * (int32_t)v8); // 0x40d9ff
            int64_t v9 = (int64_t)mem; // 0x40d9ff
            *(int64_t *)(v3 + 16) = v9;
            if (mem == NULL) {
                // 0x40da9a
                return 12;
            }
            int64_t v10 = *(int64_t *)(a2 + 16); // 0x40da14
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v9;
            int64_t v14 = *(int64_t *)(a3 + 16); // 0x40da58
            int64_t v15 = *(int64_t *)v10; // 0x40da5c
            int64_t v16 = *(int64_t *)(v14 + 8 * v11); // 0x40da63
            int64_t v17; // 0x40d9b0
            int64_t v18; // 0x40d9b0
            if (v15 > v16) {
                // 0x40da6c
                *(int64_t *)v13 = v16;
                v17 = v11 + 1;
                v18 = v12;
            } else {
                // 0x40da28
                *(int64_t *)v13 = v15;
                v17 = v11 + (int64_t)(v15 == v16);
                v18 = v12 + 1;
            }
            int64_t v19 = 1; // 0x40da5f
            int64_t v20 = v18;
            int64_t v21 = v17;
            uint64_t v22 = *v4; // 0x40da3a
            int64_t v23; // 0x40d9b0
            while (v22 > v20) {
                int64_t v24 = v13 + 8; // 0x40da3e
                int64_t v25 = 8 * v20 + v10; // 0x40da4b
                if (v7 <= v21) {
                    int64_t v26 = v22 - v20; // 0x40db10
                    memcpy((int64_t *)v24, (int64_t *)v25, 8 * (int32_t)v26);
                    v23 = v26 + v19;
                    goto lab_0x40dad9;
                }
                v11 = v21;
                v12 = v20;
                v13 = v24;
                v14 = *(int64_t *)(a3 + 16);
                v15 = *(int64_t *)v25;
                v16 = *(int64_t *)(v14 + 8 * v11);
                if (v15 > v16) {
                    // 0x40da6c
                    *(int64_t *)v13 = v16;
                    v17 = v11 + 1;
                    v18 = v12;
                } else {
                    // 0x40da28
                    *(int64_t *)v13 = v15;
                    v17 = v11 + (int64_t)(v15 == v16);
                    v18 = v12 + 1;
                }
                // 0x40da3a
                v19++;
                v20 = v18;
                v21 = v17;
                v22 = *v4;
            }
            int64_t v27 = *v6; // 0x40dad0
            v23 = v19;
            if (v27 > v21) {
                int64_t v28 = v27 - v21; // 0x40dafb
                memcpy((int64_t *)(8 * v19 + v9), (int64_t *)(8 * v21 + v14), 8 * (int32_t)v28);
                v23 = v28 + v19;
            }
          lab_0x40dad9:
            // 0x40dad9
            *(int64_t *)(v3 + 8) = v23;
            return 0;
        }
        // 0x40da78
        if (v5 >= 0 == (v5 != 0)) {
            // 0x40dab3
            return function_40d930(v3, a2);
        }
    }
    if (a3 != 0) {
        int64_t v29 = *(int64_t *)(a3 + 8); // 0x40da82
        if (v29 >= 0 == (v29 != 0)) {
            // 0x40dab3
            return function_40d930(v3, a3);
        }
    }
    // 0x40da89
    *(int64_t *)(v3 + 16) = 0;
    *(int128_t *)a1 = (int128_t)__asm_movaps(__asm_pxor(v2, v2));
    // 0x40da9a
    return 0;
}
// Address range: 0x40db40 - 0x40de40
int64_t function_40db40(int128_t * a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40db4e
    uint64_t v3 = *v2; // 0x40db4e
    if (v3 == 0) {
        // 0x40de18
        *(int32_t *)a1 = 0;
        // 0x40dbe7
        return 0;
    }
    uint64_t v4 = (int64_t)a4;
    int64_t v5 = v3 + (v4 & 0xffffffff); // 0x40db5e
    int64_t v6 = v5; // 0x40db62
    if (v3 >= 1) {
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x40db64
        int64_t v8 = v7; // 0x40db6c
        int64_t v9 = v5; // 0x40db6c
        v9 += *(int64_t *)v8;
        v8 += 8;
        v6 = v9;
        while (v7 + 8 * v3 != v8) {
            // 0x40db70
            v9 += *(int64_t *)v8;
            v8 += 8;
            v6 = v9;
        }
    }
    int64_t v10 = *(int64_t *)(a2 + 136) & v6; // 0x40db91
    int64_t v11 = 24 * v10 + *(int64_t *)(a2 + 64); // 0x40db9c
    uint64_t v12 = *(int64_t *)v11; // 0x40dba0
    if (v12 >= 1) {
        int64_t v13 = 0; // 0x40dbb2
        int64_t v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16)); // 0x40dbc1
        int64_t result; // 0x40db40
        if (*(int64_t *)v14 == v6) {
            // 0x40dbca
            if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                // 0x40dbd7
                result = v14;
                if ((char)function_40ace0(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                    // 0x40dbe7
                    return result;
                }
            }
        }
        // 0x40dbb8
        v13++;
        while (v13 != v12) {
            // 0x40dbc1
            v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16));
            if (*(int64_t *)v14 == v6) {
                // 0x40dbca
                if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                    // 0x40dbd7
                    result = v14;
                    if ((char)function_40ace0(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                        // 0x40dbe7
                        return result;
                    }
                }
            }
            // 0x40dbb8
            v13++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40dc0a
    if (mem == NULL) {
        // 0x40dd98
        *(int32_t *)a1 = 12;
        // 0x40dbe7
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40dc0a
    int64_t v15 = result2 + 8; // 0x40dc1b
    if ((int32_t)function_40d930(v15, v1) != 0) {
        // 0x40de33
        free(mem);
        // 0x40dd98
        *(int32_t *)a1 = 12;
        // 0x40dbe7
        return 0;
    }
    char * v16 = (char *)(result2 + 104); // 0x40dc36
    *v16 = *v16 & -16 | (char)a4 % 16;
    int64_t * v17 = (int64_t *)(result2 + 80); // 0x40dc56
    *v17 = v15;
    int64_t v18; // 0x40db40
    int64_t v19; // 0x40db40
    int64_t v20; // 0x40db40
    int64_t v21; // 0x40db40
    int64_t v22; // 0x40db40
    int64_t v23; // 0x40db40
    int64_t v24; // 0x40db40
    int64_t v25; // 0x40db40
    int64_t v26; // 0x40dc60
    int64_t v27; // 0x40db40
    int64_t * v28; // 0x40db40
    uint64_t v29; // 0x40dc9a
    if (*v2 >= 1) {
        // 0x40dc60
        v26 = result2 + 24;
        v27 = result2 + 16;
        v28 = (int64_t *)v27;
        v23 = v1;
        v18 = 0;
        v21 = 0;
        while (true) {
          lab_0x40dc80:
            // 0x40dc80
            v22 = v21;
            int64_t v30 = v18;
            int64_t v31 = 16 * *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v22) + v23; // 0x40dc8c
            int64_t v32 = v31 + 8; // 0x40dc90
            uint32_t v33 = *(int32_t *)v32; // 0x40dc90
            unsigned char v34 = *(char *)v32; // 0x40dc93
            v25 = 1;
            v20 = v30;
            if (v34 == 1 == (v33 & 0x3ff00) == 0) {
                goto lab_0x40dd5e;
            } else {
                char v35 = 2 * *(char *)(v31 + 10) & 32 | *v16;
                *v16 = v35;
                if (v34 == 2) {
                    // 0x40ddb0
                    *v16 = v35 | 16;
                } else {
                    if (v34 == 4) {
                        // 0x40dce4
                        *v16 = v35 | 64;
                    }
                }
                int64_t v36 = v34; // 0x40dc93
                v25 = v36;
                v20 = v30;
                if ((v33 & 0x3ff00) == 0) {
                    goto lab_0x40dd5e;
                } else {
                    int64_t v37 = v36; // 0x40dcf9
                    int64_t v38 = v30; // 0x40dcf9
                    if (v15 == *v17) {
                        int64_t * mem2 = malloc(24); // 0x40dde5
                        int64_t v39 = (int64_t)mem2; // 0x40dde5
                        *v17 = v39;
                        if (mem2 == NULL) {
                            // 0x40de26
                            function_40c460(result2);
                            goto lab_0x40dd98;
                        }
                        // 0x40ddf4
                        if ((int32_t)function_40d930(v39, v1) != 0) {
                          lab_0x40dd98:
                            // 0x40dd98
                            *(int32_t *)a1 = 12;
                            // 0x40dbe7
                            return 0;
                        }
                        // 0x40de03
                        *v16 = *v16 | -128;
                        v37 = v1;
                        v38 = 0;
                    }
                    // 0x40dcff
                    v29 = (int64_t)(v33 / 256 & 0xff03ff);
                    v19 = v38;
                    v24 = v37;
                    if (v29 % 2 == 0) {
                        if (v4 % 2 == 0 || (v29 & 2) == 0) {
                            goto lab_0x40dd13;
                        } else {
                            goto lab_0x40dd30;
                        }
                    } else {
                        if (v4 % 2 == 0) {
                            goto lab_0x40dd30;
                        } else {
                            if ((v29 & 2) != 0) {
                                goto lab_0x40dd30;
                            } else {
                                goto lab_0x40dd13;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40dd74:
    // 0x40dd74
    if ((int32_t)function_40b3b0(a2, result2, v6) == 0) {
        // 0x40dbe7
        return result2;
    }
    // 0x40dd8a
    function_40c460(result2);
    // 0x40dd98
    *(int32_t *)a1 = 12;
    // 0x40dbe7
    return 0;
  lab_0x40dd5e:;
    int64_t v40 = v22 + 1; // 0x40dd5e
    v23 = v25;
    v18 = v20;
    v21 = v40;
    if (v40 >= *v2) {
        // break -> 0x40dd74
        goto lab_0x40dd74;
    }
    goto lab_0x40dc80;
  lab_0x40dd13:
    if ((v4 & 2) == 0 == ((v29 & 16) != 0)) {
        goto lab_0x40dd30;
    } else {
        // 0x40dd1e
        v25 = v24;
        v20 = v19;
        if ((v4 & 4) != 0 || (v29 & 64) == 0) {
            goto lab_0x40dd5e;
        } else {
            goto lab_0x40dd30;
        }
    }
  lab_0x40dd30:;
    int64_t v41 = v22 - v19; // 0x40dd33
    int64_t v42 = v24; // 0x40dd36
    if (v41 >= 0) {
        int64_t v43 = *v28; // 0x40dd38
        v42 = v24;
        if (v41 < v43) {
            // 0x40dd42
            *v28 = v43 - 1;
            function_40ca00(v27, v26, v41);
            v42 = v26;
        }
    }
    // 0x40dd5a
    v25 = v42;
    v20 = v19 + 1;
    goto lab_0x40dd5e;
}
// Address range: 0x40de40 - 0x40e028
int64_t function_40de40(int32_t * a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x40de4e
    int64_t v3 = *v2; // 0x40de4e
    if (v3 == 0) {
        // 0x40e014
        *a1 = 0;
        // 0x40dfbf
        return 0;
    }
    int64_t v4 = v3; // 0x40de5b
    if (v3 >= 1) {
        int64_t v5 = *(int64_t *)(v1 + 16); // 0x40de5d
        int64_t v6 = v5; // 0x40de65
        int64_t v7 = v3; // 0x40de65
        v7 += *(int64_t *)v6;
        v6 += 8;
        v4 = v7;
        while (v5 + 8 * v3 != v6) {
            // 0x40de68
            v7 += *(int64_t *)v6;
            v6 += 8;
            v4 = v7;
        }
    }
    int64_t v8 = *(int64_t *)(a2 + 136) & v4; // 0x40de84
    int64_t v9 = 24 * v8 + *(int64_t *)(a2 + 64); // 0x40de8f
    uint64_t v10 = *(int64_t *)v9; // 0x40de93
    if (v10 >= 1) {
        int64_t v11 = 0; // 0x40dea2
        int64_t v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16)); // 0x40dea8
        int64_t result; // 0x40de40
        int64_t v13; // 0x40deb8
        if (*(int64_t *)v12 == v4) {
            // 0x40deb1
            v13 = function_40ace0(v12 + 8, v1, 3 * v8);
            result = v12;
            if ((char)v13 != 0) {
                // 0x40dfbf
                return result;
            }
        }
        // 0x40dec5
        v11++;
        while (v10 != v11) {
            // 0x40dea8
            v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16));
            if (*(int64_t *)v12 == v4) {
                // 0x40deb1
                v13 = function_40ace0(v12 + 8, v1, 3 * v8);
                result = v12;
                if ((char)v13 != 0) {
                    // 0x40dfbf
                    return result;
                }
            }
            // 0x40dec5
            v11++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40ded8
    if (mem == NULL) {
        // 0x40e008
        *a1 = 12;
        // 0x40dfbf
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40ded8
    int64_t v14 = result2 + 8; // 0x40dee9
    if ((int32_t)function_40d930(v14, v1) != 0) {
        // 0x40e000
        free(mem);
        // 0x40e008
        *a1 = 12;
        // 0x40dfbf
        return 0;
    }
    uint64_t v15 = *v2; // 0x40df00
    *(int64_t *)(result2 + 80) = v14;
    char v16; // 0x40de40
    int64_t v17; // 0x40de40
    int64_t v18; // 0x40de40
    int64_t v19; // 0x40df19
    char * v20; // 0x40de40
    if (v15 >= 1) {
        int64_t v21 = *(int64_t *)(v1 + 16); // 0x40df11
        v19 = v21 + 8 * v15;
        v20 = (char *)(result2 + 104);
        v17 = v21;
        while (true) {
          lab_0x40df64_2:
            // 0x40df64
            v18 = v17;
            int64_t v22 = 16 * *(int64_t *)v18 + v21; // 0x40df6b
            int64_t v23 = v22 + 8; // 0x40df6e
            char v24 = *(char *)v23; // 0x40df6e
            if (v24 != 1) {
                char v25 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                *v20 = v25;
                if (v24 == 2) {
                    // 0x40dfd8
                    *v20 = v25 | 16;
                    goto lab_0x40df5b;
                } else {
                    if (v24 != 4) {
                        // 0x40dfe8
                        v16 = v25;
                        if (v24 == 12) {
                            goto lab_0x40dfa0;
                        } else {
                            // 0x40dfed
                            v16 = v25;
                            if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                                goto lab_0x40df5b;
                            } else {
                                goto lab_0x40dfa0;
                            }
                        }
                    } else {
                        // 0x40df55
                        *v20 = v25 | 64;
                        goto lab_0x40df5b;
                    }
                }
            } else {
                // 0x40df77
                if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                    goto lab_0x40df5b;
                } else {
                    char v26 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                    *v20 = v26;
                    v16 = v26;
                    goto lab_0x40dfa0;
                }
            }
        }
    }
  lab_0x40dfad_2:
    // 0x40dfad
    if ((int32_t)function_40b3b0(a2, result2, v4) == 0) {
        // 0x40dfbf
        return result2;
    }
    // 0x40e01e
    function_40c460(result2);
    // 0x40e008
    *a1 = 12;
    // 0x40dfbf
    return 0;
  lab_0x40df5b:;
    int64_t v27 = v18 + 8; // 0x40df5b
    if (v19 == v27) {
        // break -> 0x40dfad
        goto lab_0x40dfad_2;
    }
    // 0x40df64
    v17 = v27;
    goto lab_0x40df64_2;
  lab_0x40dfa0:;
    int64_t v28 = v18 + 8; // 0x40dfa0
    *v20 = v16 | -128;
    if (v19 == v28) {
        // break -> 0x40dfad
        goto lab_0x40dfad_2;
    }
    // 0x40df64
    v17 = v28;
    goto lab_0x40df64_2;
}
// Address range: 0x40e030 - 0x40e0d8
int64_t function_40e030(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40e030
    if (a4 < 1) {
        // 0x40e0c8
        return 0;
    }
    int64_t v1 = 0; // 0x40e030
    int64_t result; // 0x40e030
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = 8 * v2; // 0x40e0a9
        int64_t * v4 = (int64_t *)(v3 + a2); // 0x40e0a9
        int64_t v5 = *v4; // 0x40e0a9
        int64_t v6 = *(int64_t *)(v3 + a3); // 0x40e0ae
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x40e05d
                int64_t v7; // bp-72, 0x40e030
                int64_t v8 = function_40d9b0(&v7, v5 + 8, v6 + 8, a4); // 0x40e06a
                int32_t v9 = v8; // 0x40e06f
                int32_t v10 = v9; // bp-76, 0x40e06f
                result = v8;
                if (v9 != 0) {
                    // break -> 0x40e0c8
                    break;
                }
                // 0x40e077
                int64_t v11; // 0x40e030
                *v4 = function_40de40(&v10, a1, &v7, a4, v11, v11);
                free((int64_t *)v11);
                uint32_t v12 = v10; // 0x40e098
                if (v12 != 0) {
                    // 0x40e0c8
                    result = v12;
                    return result;
                }
            }
            int64_t v13 = v2 + 1; // 0x40e0a0
            v1 = v13;
            result = 0;
            if (v13 == a4) {
                // break -> 0x40e0c8
                break;
            }
        } else {
            // 0x40e0b8
            *v4 = v6;
            int64_t v14 = v2 + 1; // 0x40e0bd
            v1 = v14;
            result = 0;
            if (v14 == a4) {
                // break -> 0x40e0c8
                break;
            }
        }
    }
  lab_0x40e0c8_2:
    // 0x40e0c8
    return result;
}
// Address range: 0x40e0e0 - 0x40e462
int64_t function_40e0e0(int64_t a1, int128_t * a2, uint64_t a3, int64_t a4, int32_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 200); // 0x40e0f1
    if (v1 <= 0) {
        // 0x40e3e2
        return 0;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(a1 + 216); // 0x40e104
    int64_t v4 = *v3; // 0x40e104
    int64_t v5 = v4 + 8; // 0x40e11c
    int64_t v6 = 0;
    uint64_t v7 = v6 + v1; // 0x40e100
    int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x40e115
    int64_t v9 = v8; // 0x40e121
    int64_t v10 = v8; // 0x40e121
    int64_t v11 = v1; // 0x40e121
    int64_t v12; // 0x40e0e0
    int64_t v13; // 0x40e0e0
    uint64_t v14; // 0x40e130
    int64_t v15; // 0x40e13e
    if (*(int64_t *)(40 * v8 + v5) >= a3) {
        v12 = v6;
        if (v9 <= v6) {
            // break (via goto) -> 0x40e15b
            goto lab_0x40e15b;
        }
        // 0x40e130
        v14 = v9 + v6;
        v15 = (v14 / 0x8000000000000000 + v14) / 2;
        v10 = v15;
        v11 = v9;
        while (*(int64_t *)(40 * v15 + v5) >= a3) {
            // 0x40e156
            v13 = v15;
            v12 = v6;
            if (v13 <= v6) {
                // break (via goto) -> 0x40e15b
                goto lab_0x40e15b;
            }
            // 0x40e130
            v14 = v13 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v13;
        }
    }
    int64_t v16 = v10 + 1; // 0x40e3d0
    v12 = v16;
    while (v16 < v11) {
        // 0x40e100
        v6 = v16;
        v7 = v6 + v11;
        v8 = (v7 / 0x8000000000000000 + v7) / 2;
        v9 = v8;
        v10 = v8;
        if (*(int64_t *)(40 * v8 + v5) >= a3) {
            v12 = v6;
            if (v9 <= v6) {
                // break (via goto) -> 0x40e15b
                goto lab_0x40e15b;
            }
            // 0x40e130
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v9;
            while (*(int64_t *)(40 * v15 + v5) >= a3) {
                // 0x40e156
                v13 = v15;
                v12 = v6;
                if (v13 <= v6) {
                    // break (via goto) -> 0x40e15b
                    goto lab_0x40e15b;
                }
                // 0x40e130
                v14 = v13 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v15;
                v11 = v13;
            }
        }
        // 0x40e3d0
        v16 = v10 + 1;
        v12 = v16;
    }
  lab_0x40e15b:
    // 0x40e15b
    if (v1 <= v12) {
        // 0x40e3e2
        return 0;
    }
    int64_t v17 = 40 * v12; // 0x40e16f
    if (v12 == -1 | *(int64_t *)(v17 + 8 + v4) != a3) {
        // 0x40e3e2
        return 0;
    }
    int64_t v18 = v2 + 16; // 0x40e196
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x40e1a5
    int64_t * v20 = (int64_t *)(a1 + 184);
    int64_t v21; // bp-88, 0x40e0e0
    int64_t v22 = &v21;
    int64_t v23 = v4; // 0x40e1af
    int64_t * v24; // 0x40e0e0
    int64_t v25; // 0x40e0e0
    int64_t v26; // 0x40e0e0
    int64_t result; // 0x40e0e0
    int64_t v27; // 0x40e0e0
    int64_t v28; // 0x40e0e0
    int64_t v29; // 0x40e0e0
    int64_t v30; // 0x40e0e0
    int32_t v31; // bp-92, 0x40e0e0
    int64_t v32; // 0x40e2b8
    int64_t v33; // 0x40e1d3
    int64_t v34; // 0x40e1d7
    int64_t v35; // 0x40e1e7
    while (true) {
        // 0x40e1b3
        int64_t v36; // 0x40e0e0
        v29 = v36;
        v25 = v23 + v17;
        int64_t v37; // 0x40e2e2
        while (true) {
          lab_0x40e298:
            // 0x40e298
            v26 = v25;
            v30 = v29;
            int64_t v38 = *(int64_t *)v26; // 0x40e298
            int64_t v39 = *(int64_t *)(v2 + 8); // 0x40e29b
            v28 = v30;
            if (function_40c890(v39, v18, v38) == 0) {
                goto lab_0x40e289;
            } else {
                // 0x40e2b4
                v32 = *(int64_t *)(v26 + 24) + a3;
                int64_t v40 = v32 - *(int64_t *)(v26 + 16); // 0x40e2be
                if (v40 != a3) {
                    // 0x40e1c8
                    v33 = *(int64_t *)(*(int64_t *)(v19 + 24) + 8 * v38);
                    v34 = 8 * v40;
                    int64_t * v41 = (int64_t *)(*v20 + v34);
                    v35 = *v41;
                    if (v35 == 0) {
                        // 0x40e380
                        v21 = 1;
                        int64_t * mem = malloc(8); // 0x40e39c
                        if (mem == NULL) {
                            // 0x40e422
                            result = 12;
                            return result;
                        }
                        // 0x40e3ab
                        v31 = 0;
                        *mem = v33;
                        v24 = v41;
                        v27 = (int64_t)mem;
                        goto lab_0x40e24e;
                    } else {
                        // 0x40e1f8
                        v28 = v30;
                        if (function_40c890(*(int64_t *)(v35 + 16), v35 + 24, v33) != 0) {
                            goto lab_0x40e289;
                        } else {
                            // 0x40e20d
                            v31 = function_40d930(v22, v35 + 8);
                            int64_t v42 = function_40b280(v22, v33); // 0x40e229
                            if (v31 != 0) {
                                goto lab_0x40e410_2;
                            }
                            if ((char)v42 != 1) {
                                goto lab_0x40e410_2;
                            }
                            // 0x40e242
                            v24 = (int64_t *)(*v20 + v34);
                            v27 = v30;
                            goto lab_0x40e24e;
                        }
                    }
                } else {
                    int64_t v43 = *(int64_t *)(v19 + 40); // 0x40e2cb
                    v37 = *(int64_t *)*(int64_t *)(24 * v38 + 16 + v43);
                    v28 = v30;
                    if (function_40c890(v39, v18, v37) == 0) {
                        // break -> 0x40e2f2
                        break;
                    }
                    goto lab_0x40e289;
                }
            }
        }
        // 0x40e2f2
        v21 = 1;
        int64_t * mem2 = malloc(8); // 0x40e309
        int32_t v44; // 0x40e0e0
        if (mem2 == NULL) {
            // 0x40e446
            v21 = 0;
            v44 = 12;
        } else {
            // 0x40e31c
            *mem2 = v37;
            v44 = 0;
        }
        // 0x40e321
        v31 = v44;
        int64_t v45 = function_40d200(v19, &v21, a4, a5); // 0x40e336
        int64_t v46 = function_40cdd0((int64_t *)a2, (int128_t *)&v21); // 0x40e346
        free(mem2);
        uint32_t v47 = v31; // 0x40e358
        if ((v47 || (int32_t)(v46 || v45)) != 0) {
            // 0x40e436
            result = v47;
            if (v47 != 0) {
                return result;
            } else {
                // 0x40e43a
                result = ((int32_t)v45 != 0 ? v45 : v46) & 0xffffffff;
                return result;
            }
        }
        // 0x40e36a
        v36 = (int64_t)mem2;
        v23 = *v3;
    }
  lab_0x40e3e2:
    // 0x40e3e2
    return result;
  lab_0x40e410_2:
    // 0x40e410
    free((int64_t *)v30);
    result = v31;
    if (v31 != 0) {
        return result;
    } else {
        // 0x40e422
        result = 12;
        return result;
    }
  lab_0x40e289:
    // 0x40e289
    v29 = v28;
    v25 = v26 + 40;
    result = 0;
    if (*(char *)(v26 + 32) == 0) {
        return result;
    }
    goto lab_0x40e298;
  lab_0x40e24e:;
    int64_t v48 = v27;
    *v24 = function_40de40(&v31, v19, &v21, v33, v32, v35);
    free((int64_t *)v48);
    v28 = v48;
    if (*(int64_t *)(*v20 + v34) == 0) {
        uint32_t v49 = v31; // 0x40e3f8
        v28 = v48;
        if (v49 != 0) {
            // 0x40e3e2
            result = v49;
            goto lab_0x40e3e2;
        }
    }
    goto lab_0x40e289;
}
// Address range: 0x40e470 - 0x40e5b1
int64_t function_40e470(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x40e482
    if (a2 < 1) {
      lab_0x40e552:
        // 0x40e552
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 232);
    int64_t * v3 = (int64_t *)(a1 + 248);
    int64_t * v4 = (int64_t *)(a1 + 240);
    int64_t v5 = 0; // 0x40e4a0
    int64_t v6; // 0x40e470
    int64_t v7; // 0x40e4b0
    int64_t v8; // 0x40e4bb
    uint64_t v9; // 0x40e4c5
    while (true) {
        // 0x40e4ad
        v6 = v5;
        v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
        v8 = 16 * v7 + *(int64_t *)v1;
        if (*(char *)(v8 + 8) == 8) {
            // 0x40e4c5
            v9 = *(int64_t *)v8;
            if (v9 <= 63) {
                // 0x40e4ce
                if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                    // break -> 0x40e4dc
                    break;
                }
            }
        }
        // 0x40e4a0
        v5 = v6 + 1;
        if (v5 >= a2) {
            return 0;
        }
    }
    int64_t v10 = *v2; // 0x40e4dc
    int64_t v11 = *v3; // 0x40e4e3
    int64_t v12 = v10; // 0x40e4f1
    int64_t v13 = v11; // 0x40e4f1
    int64_t * mem; // 0x40e580
    if (v10 == *v4) {
        // 0x40e568
        mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
        if (mem == NULL) {
            // break -> 0x40e552
            break;
        }
        // 0x40e592
        v13 = (int64_t)mem;
        *v3 = v13;
        v12 = *v2;
        *v4 = 2 * v10;
    }
    int64_t * mem2 = calloc(1, 48); // 0x40e50c
    int64_t v14 = (int64_t)mem2; // 0x40e50c
    *(int64_t *)(v13 + 8 * v12) = v14;
    int64_t result = 12; // 0x40e522
    while (mem2 != NULL) {
        // 0x40e524
        *mem2 = a4;
        int64_t v15 = v6 + 1; // 0x40e530
        *(int64_t *)(v14 + 8) = v7;
        *v2 = v12 + 1;
        result = 0;
        if (v15 >= 48) {
            // break -> 0x40e552
            break;
        }
        v5 = v15;
        while (true) {
            // 0x40e4ad
            v6 = v5;
            v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
            v8 = 16 * v7 + *(int64_t *)v1;
            if (*(char *)(v8 + 8) == 8) {
                // 0x40e4c5
                v9 = *(int64_t *)v8;
                if (v9 <= 63) {
                    // 0x40e4ce
                    if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                        // break -> 0x40e4dc
                        break;
                    }
                }
            }
            // 0x40e4a0
            v5 = v6 + 1;
            if (v5 >= 48) {
                return 0;
            }
        }
        // 0x40e4dc
        v10 = *v2;
        v11 = *v3;
        v12 = v10;
        v13 = v11;
        if (v10 == *v4) {
            // 0x40e568
            mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
            result = 12;
            if (mem == NULL) {
                // break -> 0x40e552
                break;
            }
            // 0x40e592
            v13 = (int64_t)mem;
            *v3 = v13;
            v12 = *v2;
            *v4 = 2 * v10;
        }
        // 0x40e4f3
        mem2 = calloc(1, 48);
        v14 = (int64_t)mem2;
        *(int64_t *)(v13 + 8 * v12) = v14;
        result = 12;
    }
    // 0x40e552
    return result;
}
// Address range: 0x40e5c0 - 0x40e6ae
int64_t function_40e5c0(int64_t a1, int64_t a2, int32_t a3) {
    if (a2 < 0) {
        // 0x40e670
        return (int64_t)*(int32_t *)(a1 + 112);
    }
    // 0x40e5d2
    if (*(int64_t *)(a1 + 88) == a2) {
        // 0x40e616
        return a3 & 2 ^ 10;
    }
    // 0x40e5dc
    if (*(int32_t *)(a1 + 144) < 2) {
        unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a2); // 0x40e62b
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 128) + (int64_t)(8 * v1 / 64)); // 0x40e636
        if ((1 << (int64_t)(v1 % 64) & v2) != 0) {
            // 0x40e616
            return 1;
        }
        // 0x40e64a
        if (v1 != 10) {
            // 0x40e616
            return 0;
        }
        // 0x40e651
        return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
    }
    int64_t v3 = a2;
    int32_t wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16)); // 0x40e5fa
    while (wc == -1) {
        // 0x40e5f0
        if (v3 == 0) {
            // 0x40e670
            return (int64_t)*(int32_t *)(a1 + 112);
        }
        v3--;
        wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16));
    }
    // 0x40e602
    if (*(char *)(a1 + 142) != 0) {
        // 0x40e690
        if (wc != 95 != (iswalnum(wc) == 0)) {
            // 0x40e616
            return 1;
        }
    }
    // 0x40e60f
    if (wc != 10) {
        // 0x40e616
        return 0;
    }
    // 0x40e651
    return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
}
// Address range: 0x40e6b0 - 0x40e7db
int64_t function_40e6b0(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a3); // 0x40e6b4
    int64_t v2 = a2 + 8;
    unsigned char v3 = *(char *)v2; // 0x40e6b8
    if (v3 == 3) {
        uint64_t v4 = (int64_t)v1; // 0x40e6b4
        if ((*(int64_t *)((v4 / 8 & 24) + a2) & 1 << v4 % 64) == 0) {
            // 0x40e75f
            return 0;
        }
    } else {
        if (v3 < 4) {
            // 0x40e768
            if (v1 == (char)a2 != (v3 == 1)) {
                // 0x40e75f
                return 0;
            }
        } else {
            if (v3 != 5) {
                // 0x40e6ce
                if (v1 < 0 || v3 != 7) {
                    // 0x40e75f
                    return 0;
                }
            }
            if (v1 == 10) {
                // 0x40e7c0
                if ((*(char *)(*(int64_t *)(a1 + 152) + 216) & 64) == 0) {
                    // 0x40e75f
                    return 0;
                }
            } else {
                if (v1 == 0) {
                    // 0x40e6f0
                    if (*(char *)(*(int64_t *)(a1 + 152) + 216) <= -1) {
                        // 0x40e75f
                        return 0;
                    }
                }
            }
        }
    }
    uint32_t v5 = *(int32_t *)v2; // 0x40e703
    if ((v5 & 0x3ff00) == 0) {
        // 0x40e75f
        return 1;
    }
    int64_t v6 = v5; // 0x40e703
    uint64_t v7 = function_40e5c0(a1, a3, *(int32_t *)(a1 + 160)); // 0x40e71f
    if ((v6 & 1024) != 0) {
        // 0x40e7b0
        if ((v6 & 2048) == 0 != v7 % 2 != 0) {
            // 0x40e75f
            return 0;
        }
    } else {
        if ((v6 & 2048) != 0) {
            // 0x40e737
            if (v7 % 2 != 0) {
                // 0x40e75f
                return 0;
            }
        }
    }
    int64_t result = 0; // 0x40e742
    if ((v6 & 0x2000) != 0 != ((v7 & 2) == 0)) {
        // 0x40e74b
        result = (char)(v5 / 256) <= -1 ? v7 / 8 % 2 : 1;
    }
    // 0x40e75f
    return result;
}
// Address range: 0x40e7e0 - 0x40e8a8
int64_t function_40e7e0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_40e5c0(v1, a4, *(int32_t *)(v1 + 160)); // 0x40e7f6
    if (a2 < 1) {
        // 0x40e87c
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x40e804
    int64_t v4 = 0; // 0x40e826
    int64_t result; // 0x40e7e0
    uint32_t v5; // 0x40e83e
    uint32_t v6; // 0x40e841
    int64_t v7; // 0x40e830
    while (true) {
      lab_0x40e830:
        // 0x40e830
        v7 = *(int64_t *)(8 * v4 + v3);
        int64_t v8 = *(int64_t *)v3 + 8 + 16 * v7; // 0x40e83e
        if (*(char *)v8 != 2) {
            goto lab_0x40e898;
        } else {
            // 0x40e851
            v5 = *(int32_t *)v8;
            result = v7;
            if ((v5 & 0x3ff00) == 0) {
                // break -> 0x40e87c
                break;
            }
            // 0x40e856
            v6 = v5 / 256;
            int64_t v9 = v6; // 0x40e841
            if ((v9 & 4) == 0) {
                if (v2 % 2 == 0 || (v9 & 8) == 0) {
                    goto lab_0x40e865;
                } else {
                    goto lab_0x40e898;
                }
            } else {
                if (v2 % 2 == 0) {
                    goto lab_0x40e898;
                } else {
                    if ((v9 & 8) != 0) {
                        goto lab_0x40e898;
                    } else {
                        goto lab_0x40e865;
                    }
                }
            }
        }
    }
  lab_0x40e87c_2:
    // 0x40e87c
    return result;
  lab_0x40e898:
    // 0x40e898
    v4++;
    result = 0;
    if (v4 == a2) {
        return result;
    }
    goto lab_0x40e830;
  lab_0x40e865:
    if ((v2 & 2) == 0 != (v5 & 0x2000) != 0) {
        // 0x40e870
        result = v7;
        if ((v2 & 8) == 0 != (char)v6 < 0) {
            // break -> 0x40e87c
            goto lab_0x40e87c_2;
        }
    }
    goto lab_0x40e898;
}
// Address range: 0x40e8b0 - 0x40f097
int64_t function_40e8b0(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40e8ca
    int64_t v3 = *v2; // 0x40e8ca
    int64_t v4 = a2 - v3; // 0x40e8d4
    int64_t * v5; // 0x40e8b0
    char * v6; // 0x40e8b0
    int64_t * v7; // 0x40e8b0
    int32_t * v8; // 0x40e8b0
    int64_t * v9; // 0x40e8b0
    int64_t * v10; // 0x40e8b0
    int64_t v11; // 0x40e8b0
    if (v3 > a2) {
        int32_t * v12 = (int32_t *)(v1 + 144);
        if (*v12 >= 2) {
            // 0x40e8df
            *(int64_t *)(v1 + 32) = 0;
        }
        int64_t * v13 = (int64_t *)(v1 + 48);
        *v13 = 0;
        *v2 = 0;
        int64_t * v14 = (int64_t *)(v1 + 88);
        *v14 = *(int64_t *)(v1 + 80);
        int64_t * v15 = (int64_t *)(v1 + 56);
        *v15 = 0;
        int64_t * v16 = (int64_t *)(v1 + 104);
        *v16 = *(int64_t *)(v1 + 96);
        char * v17 = (char *)(v1 + 140);
        *v17 = 0;
        *(int32_t *)(v1 + 112) = 2 * a3 & 2 ^ 6;
        v4 = a2;
        if (*(char *)(v1 + 139) == 0) {
            // 0x40ea00
            *(int64_t *)(v1 + 8) = v1;
            v7 = v13;
            v6 = v17;
            v5 = v15;
            v11 = a2;
            v10 = v16;
            v9 = v14;
            v8 = v12;
            if (a2 != 0) {
                goto lab_0x40e943;
            } else {
                goto lab_0x40ea10;
            }
        } else {
            goto lab_0x40e93a;
        }
    } else {
        goto lab_0x40e93a;
    }
  lab_0x40ef38:
    // 0x40ef38
    *v7 = 0;
    int64_t v18; // 0x40ed37
    int64_t v19 = v18; // 0x40ef42
    int64_t v20; // 0x40ed3a
    int64_t v21 = v20; // 0x40ef42
    int64_t v22 = 0; // 0x40ef42
    int64_t v23 = v1; // 0x40ef42
    goto lab_0x40eddf;
  lab_0x40eb31:;
    // 0x40eb31
    int64_t v41; // 0x40e8b0
    int64_t v38; // 0x40e8b0
    int64_t v42 = v41 + v38; // 0x40eb31
    int64_t v43; // 0x40e8b0
    int64_t v44; // 0x40e8b0
    int64_t v39; // 0x40e8b0
    int64_t v45; // 0x40e8b0
    int64_t v46; // 0x40e8b0
    int32_t v47; // bp-64, 0x40e8b0
    if (v42 < a2) {
        int64_t v48 = &v47; // 0x40eb4c
        int64_t * v49 = (int64_t *)(v1 + 32); // 0x40eb64
        int64_t v50 = *(int64_t *)(v1 + 80) - v42; // 0x40eb6d
        int64_t v51 = function_40ab50((int64_t *)&v47, v42 + v39, v50); // 0x40eb80
        int64_t v52 = v51; // 0x40eb96
        int64_t v53 = v47; // 0x40eb96
        int64_t v54; // 0x40e8b0
        if (v51 >= 0xfffffffffffffffe) {
            // 0x40efc5
            v54 = 0;
            if (v50 != 0 && v51 != 0) {
                // 0x40efcf
                v54 = (int64_t)*(char *)(v42 + v48);
            }
            // 0x40efd7
            v52 = 1;
            v53 = v54;
        }
        int64_t v55 = v52 + v42; // 0x40eb9c
        int64_t v56 = v48; // 0x40eba2
        while (v55 < a2) {
            int64_t v57 = v55;
            v50 = *(int64_t *)(v1 + 80) - v57;
            v51 = function_40ab50((int64_t *)&v47, v57 + v56, v50);
            v52 = v51;
            v53 = v47;
            if (v51 >= 0xfffffffffffffffe) {
                // 0x40efc5
                v54 = 0;
                if (v50 != 0 && v51 != 0) {
                    // 0x40efcf
                    v54 = (int64_t)*(char *)(v57 + v48);
                }
                // 0x40efd7
                v52 = 1;
                v53 = v54;
            }
            // 0x40eb9c
            v55 = v52 + v57;
            v56 = v48;
        }
        int64_t v58 = v55 - a2; // 0x40eba4
        *v7 = v58;
        v46 = v53;
        v45 = v48;
        v43 = v58;
        v44 = v58;
        if ((int32_t)v53 == -1) {
            goto lab_0x40ef51;
        } else {
            goto lab_0x40ebb7;
        }
    } else {
        int64_t v59 = v42 - a2; // 0x40ef47
        *v7 = v59;
        v44 = v59;
        goto lab_0x40ef51;
    }
  lab_0x40e93a:
    // 0x40e93a
    if (v4 == 0) {
        // 0x40e93a
        v10 = (int64_t *)(v1 + 104);
        v9 = (int64_t *)(v1 + 88);
        v8 = (int32_t *)(v1 + 144);
        goto lab_0x40ea10;
    } else {
        // 0x40e93a
        v7 = (int64_t *)(v1 + 48);
        v6 = (char *)(v1 + 140);
        v5 = (int64_t *)(v1 + 56);
        v11 = v4;
        goto lab_0x40e943;
    }
  lab_0x40e943:;
    int64_t v60 = v11;
    int64_t * v24 = v5;
    int64_t v61 = *v24; // 0x40e943
    char v62 = *v6; // 0x40e947
    int64_t v63 = *v7; // 0x40e94e
    char * v64; // 0x40e8b0
    int64_t v30; // 0x40e8b0
    int64_t v65; // 0x40e8b0
    int64_t v31; // 0x40e8b0
    int64_t v66; // 0x40e8b0
    int64_t v33; // 0x40e8b0
    int64_t v67; // 0x40e8b0
    char v68; // 0x40e8b0
    int32_t v32; // 0x40e8b0
    int64_t v40; // 0x40ee59
    int64_t * v69; // 0x40ebf8
    int64_t v70; // 0x40ebf8
    int64_t v71; // 0x40ec25
    uint64_t v72; // 0x40ec28
    if (v61 > v60) {
        if (v62 != 0) {
            // 0x40ebf8
            v69 = (int64_t *)(v1 + 24);
            v70 = *v69;
            int64_t v73 = 0; // 0x40ec01
            uint64_t v74 = v73 + v63; // 0x40ec17
            v71 = (v74 / 0x8000000000000000 + v74) / 2;
            v72 = *(int64_t *)(8 * v71 + v70);
            int64_t v75 = v71; // 0x40ec33
            int64_t v76 = v73; // 0x40ec33
            if (v72 <= v60) {
                if (v72 >= v60) {
                    // 0x40ef20
                    goto lab_0x40ec75;
                }
                // 0x40ec0e
                v75 = v63;
                v76 = v71 + 1;
            }
            // 0x40ec12
            v73 = v76;
            int64_t v77 = v75;
            while (v73 < v77) {
                int64_t v78 = v77;
                v74 = v73 + v78;
                v71 = (v74 / 0x8000000000000000 + v74) / 2;
                v72 = *(int64_t *)(8 * v71 + v70);
                v75 = v71;
                v76 = v73;
                if (v72 <= v60) {
                    if (v72 >= v60) {
                        // 0x40ef20
                        goto lab_0x40ec75;
                    }
                    // 0x40ec0e
                    v75 = v78;
                    v76 = v71 + 1;
                }
                // 0x40ec12
                v73 = v76;
                v77 = v75;
            }
            // 0x40ec68
            goto lab_0x40ec75;
        } else {
            // 0x40e963
            *(int32_t *)(v1 + 112) = (int32_t)function_40e5c0(v1, v60 - 1, a3);
            if (*(int32_t *)(v1 + 144) > 1) {
                int64_t v79 = *(int64_t *)(v1 + 16); // 0x40ea20
                int64_t v80; // 0x40e96d
                memmove((int64_t *)v79, (int64_t *)(v79 + 4 * v60), 4 * (int32_t)v80);
            }
            int64_t v81 = v63 - v60;
            char * v82 = (char *)(v1 + 139); // 0x40e985
            char v83 = *v82; // 0x40e985
            char v84 = v83; // 0x40e98e
            int64_t v85 = v1; // 0x40e98e
            int64_t v86 = v81; // 0x40e98e
            if (v83 != 0) {
                // 0x40ec40
                v85 = *(int64_t *)(v1 + 8);
                memmove((int64_t *)v85, (int64_t *)(v85 + v60), (int32_t)v81);
                v84 = *v82;
                v86 = *v7 - v60;
            }
            // 0x40e994
            *v24 = *v24 - v60;
            *v7 = v86;
            v68 = v84;
            v66 = v85;
            goto lab_0x40e99c;
        }
    } else {
        if (v62 != 0) {
            // 0x40ef9d
            *v6 = 0;
            int64_t v87 = v60 - a2;
            *(int64_t *)(v1 + 88) = *(int64_t *)(v1 + 80) + v87;
            *(int64_t *)(v1 + 104) = *(int64_t *)(v1 + 96) + v87;
        }
        int32_t v88 = *(int32_t *)(v1 + 144); // 0x40eb08
        int64_t v89 = *v2; // 0x40eb0f
        *v7 = 0;
        if (v88 < 2) {
            int64_t v90 = (int64_t)*(char *)(v60 - 1 + v1 + v89); // 0x40ea5e
            int64_t v91 = *(int64_t *)(v1 + 120); // 0x40ea64
            *v24 = 0;
            int64_t v92 = v90; // 0x40ea73
            if (v91 != 0) {
                // 0x40ea75
                v92 = (int64_t)*(char *)(v91 + v90);
            }
            int64_t v93 = *(int64_t *)((v92 / 8 & 24) + *(int64_t *)(v1 + 128)); // 0x40ea87
            int32_t v94 = 1; // 0x40ea95
            if ((v93 & 1 << v92 % 64) == 0) {
                // 0x40ea97
                v94 = 0;
                if (v92 == 10) {
                    // 0x40ea9e
                    v94 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
                }
            }
            int64_t * v95 = (int64_t *)(v1 + 88); // 0x40eab0
            int64_t * v96 = (int64_t *)(v1 + 104); // 0x40eab4
            *(int32_t *)(v1 + 112) = v94;
            int64_t v97 = *v95 - v60; // 0x40eabb
            int64_t v98 = *v96 - v60; // 0x40eabe
            char * v99 = (char *)(v1 + 139);
            v30 = v97;
            v31 = v98;
            v32 = v88;
            v33 = v1;
            if (*v99 == 0) {
                goto lab_0x40e9b4;
            } else {
                // 0x40eace
                *v2 = a2;
                *v95 = v97;
                *v96 = v98;
                v64 = v99;
                v65 = v97;
                v67 = v1;
                goto lab_0x40eae0;
            }
        } else {
            // 0x40eb24
            v38 = v61;
            v39 = v1;
            v41 = v89;
            if (*(char *)(v1 + 137) != 0) {
                int64_t v100 = v89 + v1; // 0x40ee01
                uint64_t v101 = v60 - (int64_t)v88 + v100; // 0x40ee05
                int64_t v102 = v60 - 1 + v100; // 0x40ee08
                uint64_t v103 = v101 > v1 ? v101 : v1; // 0x40ee10
                v38 = v61;
                v39 = v1;
                v41 = v89;
                if (v103 > v102) {
                    goto lab_0x40eb31;
                } else {
                    int64_t v104 = v102;
                    while ((*(char *)v104 & -64) == -128) {
                        int64_t v105 = v104 - 1; // 0x40ee20
                        v38 = v61;
                        v39 = v1;
                        v41 = v89;
                        if (v103 > v105) {
                            goto lab_0x40eb31;
                        }
                        v104 = v105;
                    }
                    int64_t v106 = *(int64_t *)(v1 + 120); // 0x40ee3e
                    int64_t v107 = *(int64_t *)(v1 + 88) + v100 - v104; // 0x40ee48
                    int64_t v108 = v104; // 0x40ee4e
                    if (v106 != 0) {
                        int64_t v109 = v107 - 6; // 0x40f062
                        int32_t v110 = v109 == 0 | v109 < 0 != (5 - v107 & v107) < 0 ? (int32_t)v107 - 1 : 5; // 0x40f06f
                        if (v110 >= 0) {
                            int64_t v111 = v110; // 0x40f085
                            char v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104)); // 0x40f07c
                            int64_t v113; // bp-120, 0x40e8b0
                            *(char *)((int64_t)&v113 + 50 + v111) = v112;
                            v111--;
                            while ((int32_t)v111 >= 0) {
                                // 0x40f077
                                v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104));
                                *(char *)((int64_t)&v113 + 50 + v111) = v112;
                                v111--;
                            }
                        }
                        // 0x40f08d
                        int64_t v114; // bp-70, 0x40e8b0
                        v108 = &v114;
                    }
                    // 0x40ee54
                    int32_t v115; // bp-76, 0x40e8b0
                    v40 = &v115;
                    v47 = 0;
                    uint64_t v116 = function_40ab50((int64_t *)&v115, v108, v107); // 0x40ee6f
                    uint64_t v117 = v100 + v60 - v104; // 0x40ee7e
                    if (v116 >= v117 == v116 < 0xfffffffffffffffe) {
                        int64_t v118 = v116 - v117; // 0x40ef68
                        *(int64_t *)(v1 + 32) = 0;
                        *v7 = v118;
                        v46 = v115;
                        v45 = v40;
                        v43 = v118;
                        if (v115 != -1) {
                            goto lab_0x40ebb7;
                        } else {
                            goto lab_0x40ee90;
                        }
                    } else {
                        goto lab_0x40ee90;
                    }
                }
            } else {
                goto lab_0x40eb31;
            }
        }
    }
  lab_0x40ea10:;
    int64_t v34 = *v9; // 0x40ea1e
    int64_t v35 = *v10; // 0x40ea1e
    int32_t v36 = *v8; // 0x40ea1e
    int64_t v37 = v1; // 0x40ea1e
    goto lab_0x40e9b8;
  lab_0x40e9b8:
    // 0x40e9b8
    *v2 = a2;
    *(int64_t *)(v1 + 88) = v34;
    *(int64_t *)(v1 + 104) = v35;
    if (v36 >= 2) {
        // 0x40e9cd
        if (*(char *)(v1 + 136) != 0) {
            int64_t result = function_40b710(v1); // 0x40ea48
            if ((int32_t)result != 0) {
                // 0x40e9e8
                return result;
            }
        } else {
            // 0x40e9d9
            function_40b560(v1);
        }
        // 0x40e9de
        *(int64_t *)(v1 + 72) = 0;
        // 0x40e9e8
        return 0;
    }
    // 0x40e9b8
    v64 = (char *)(v1 + 139);
    v65 = v34;
    v67 = v37;
    goto lab_0x40eae0;
  lab_0x40eae0:;
    int64_t v119 = v65;
    if (*v64 == 0) {
        // 0x40eaed
        *(int64_t *)(v1 + 48) = v119;
        // 0x40e9de
        *(int64_t *)(v1 + 72) = 0;
        // 0x40e9e8
        return 0;
    }
    // 0x40eeb0
    if (*(char *)(v1 + 136) != 0) {
        // 0x40ef90
        function_40b4e0(v1);
        // 0x40e9de
        *(int64_t *)(v1 + 72) = 0;
        // 0x40e9e8
        return 0;
    }
    int64_t * v120 = (int64_t *)(v1 + 120); // 0x40eebd
    int64_t v121 = *v120; // 0x40eebd
    if (v121 == 0) {
        // 0x40e9de
        *(int64_t *)(v1 + 72) = 0;
        // 0x40e9e8
        return 0;
    }
    int64_t v122 = *(int64_t *)(v1 + 64); // 0x40eeca
    int64_t v123 = v122 - v119; // 0x40eeca
    int64_t * v124 = (int64_t *)(v1 + 48); // 0x40eece
    int64_t v125 = *v124; // 0x40eece
    int64_t v126 = v123 == 0 | v123 < 0 != ((v123 ^ v122) & (v122 ^ v119)) < 0 ? v122 : v119; // 0x40eed2
    int64_t v127 = v125; // 0x40eeda
    if (v126 > v125) {
        unsigned char v128 = *(char *)(v67 + a2 + v125); // 0x40eef6
        int64_t * v129 = (int64_t *)(v1 + 8); // 0x40eeff
        *(char *)(*v129 + v125) = *(char *)(v121 + (int64_t)v128);
        int64_t v130 = v125 + 1; // 0x40ef07
        v127 = v126;
        if (v126 != v130) {
            unsigned char v131 = *(char *)(v130 + v67 + *v2); // 0x40eef6
            *(char *)(*v129 + v130) = *(char *)(*v120 + (int64_t)v131);
            int64_t v132 = v130 + 1; // 0x40ef07
            int64_t v133 = v132; // 0x40ef0e
            v127 = v126;
            while (v126 != v132) {
                // 0x40eee8
                v131 = *(char *)(v133 + v67 + *v2);
                *(char *)(*v129 + v133) = *(char *)(*v120 + (int64_t)v131);
                v132 = v133 + 1;
                v133 = v132;
                v127 = v126;
            }
        }
    }
    // 0x40ef10
    *v124 = v127;
    *(int64_t *)(v1 + 56) = v127;
    // 0x40e9de
    *(int64_t *)(v1 + 72) = 0;
    // 0x40e9e8
    return 0;
  lab_0x40ec75:;
    int64_t v134 = v71 + (int64_t)(v72 < v60);
    int64_t v135 = v71 + (int64_t)(v72 >= v60);
    *(int32_t *)(v1 + 112) = (int32_t)function_40e5c0(v1, v135, a3);
    int64_t v25; // 0x40e8b0
    int64_t v26; // 0x40e8b0
    int64_t v28; // 0x40e8b0
    char v27; // 0x40e8b0
    if (v63 > v60 == v60 == v134) {
        int64_t v136 = 8 * v60;
        if (*(int64_t *)(v70 + v136) != v60) {
            goto lab_0x40ed28;
        } else {
            int64_t v137 = *(int64_t *)(v1 + 16); // 0x40eca0
            memmove((int64_t *)v137, (int64_t *)(v137 + 4 * v60), 4 * (int32_t)(v63 - v60));
            int64_t v138 = *(int64_t *)(v1 + 8); // 0x40ecbb
            int64_t v139 = *v7; // 0x40ecbf
            memmove((int64_t *)v138, (int64_t *)(v138 + v60), (int32_t)(v139 - v60));
            *v24 = *v24 - v60;
            uint64_t v140 = *v7 - v60; // 0x40ecd7
            *v7 = v140;
            if (v140 >= 1) {
                for (int64_t i = 0; i < *v7; i++) {
                    int64_t v141 = 8 * i + *v69;
                    *(int64_t *)v141 = *(int64_t *)(v141 + v136) - v60;
                }
            }
            // 0x40ed05
            v25 = *(int64_t *)(v1 + 88) - v60;
            v26 = *(int64_t *)(v1 + 104) - v60;
            v27 = *(char *)(v1 + 139);
            v28 = v138;
            goto lab_0x40e9b0;
        }
    } else {
        goto lab_0x40ed28;
    }
  lab_0x40e99c:
    // 0x40e99c
    v25 = *(int64_t *)(v1 + 88) - v60;
    v26 = *(int64_t *)(v1 + 104) - v60;
    v27 = v68;
    v28 = v66;
    goto lab_0x40e9b0;
  lab_0x40e9b4:;
    int64_t * v142 = (int64_t *)(v1 + 8); // 0x40e9b4
    *v142 = *v142 + v60;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    goto lab_0x40e9b8;
  lab_0x40ed28:
    // 0x40ed28
    *v6 = 0;
    v18 = *(int64_t *)(v1 + 80) - a2;
    v20 = *(int64_t *)(v1 + 96) - a2;
    int64_t * v143 = (int64_t *)(v1 + 88); // 0x40ed41
    *v143 = v18 + v60;
    int64_t * v144 = (int64_t *)(v1 + 104); // 0x40ed49
    *v144 = v20 + v60;
    int64_t v145 = v134; // 0x40ed50
    if (v134 >= 0 == (v134 != 0)) {
        int64_t v146 = v134; // 0x40ed58
        v145 = v146;
        while (*(int64_t *)(v70 - 8 + 8 * v146) == v60) {
            // 0x40ed58
            v146--;
            if (v146 == 0) {
                // break -> 0x40ed65
                break;
            }
            v145 = v146;
        }
    }
    // 0x40ed65
    int64_t v147; // 0x40e8b0
    if (v145 < v63) {
        int64_t v148 = v145; // 0x40ed72
        v147 = v148;
        while (*(int32_t *)(4 * v148 + *(int64_t *)(v1 + 16)) == -1) {
            // 0x40ed78
            v148++;
            if (v148 == v63) {
                goto lab_0x40ef38;
            }
            v147 = v148;
        }
        goto lab_0x40ed8c;
    } else {
        // 0x40ef2c
        v147 = v145;
        if (v145 != v63) {
            goto lab_0x40ed8c;
        } else {
            goto lab_0x40ef38;
        }
    }
  lab_0x40e9b0:;
    int32_t v29 = *(int32_t *)(v1 + 144);
    v30 = v25;
    v31 = v26;
    v32 = v29;
    v33 = v28;
    v34 = v25;
    v35 = v26;
    v36 = v29;
    v37 = v28;
    if (v27 != 0) {
        goto lab_0x40e9b8;
    } else {
        goto lab_0x40e9b4;
    }
  lab_0x40ee90:
    // 0x40ee90
    v38 = *v24;
    v39 = v40;
    v41 = *v2;
    goto lab_0x40eb31;
  lab_0x40ef51:
    // 0x40ef51
    *(int32_t *)(v1 + 112) = (int32_t)function_40e5c0(v1, v63 - 1, a3);
    int64_t v149 = v1; // 0x40ef63
    int64_t v150 = v44; // 0x40ef63
    goto lab_0x40ebdc;
  lab_0x40ebb7:;
    int64_t v164 = v46; // 0x40ebbe
    int64_t v163 = v45; // 0x40ebbe
    int32_t v161; // 0x40e8b0
    int64_t v162; // 0x40e8b0
    if (*(char *)(v1 + 142) != 0) {
        int64_t v165 = v46 & 0xffffffff; // 0x40f034
        int32_t wc = v46; // 0x40f036
        v164 = v165;
        v163 = v165;
        v161 = 1;
        v162 = v165;
        if (wc != 95 == iswalnum(wc) == 0) {
            goto lab_0x40ebc4;
        } else {
            goto lab_0x40ebd9;
        }
    } else {
        goto lab_0x40ebc4;
    }
  lab_0x40ed8c:;
    uint64_t v166 = *(int64_t *)(8 * v147 + v70) - v60; // 0x40ed91
    *v7 = v166;
    v19 = v18;
    v21 = v20;
    v22 = 0;
    v23 = v1;
    if (v166 != 0) {
        if (v166 >= 1) {
            int64_t v167 = *(int64_t *)(v1 + 16); // 0x40ed9f
            int64_t v168 = v167; // 0x40eda7
            *(int32_t *)v168 = -1;
            v168 += 4;
            while (v167 + 4 * v166 != v168) {
                // 0x40edb0
                *(int32_t *)v168 = -1;
                v168 += 4;
            }
        }
        int64_t v169 = *(int64_t *)(v1 + 8); // 0x40edbf
        memset((int64_t *)v169, 255, (int32_t)v166);
        v19 = *v143 - v60;
        v21 = *v144 - v60;
        v22 = *v7;
        v23 = v169;
    }
    goto lab_0x40eddf;
  lab_0x40ebdc:;
    // 0x40ebdc
    char * v151; // 0x40e8b0
    int64_t v152; // 0x40e8b0
    int64_t v153; // 0x40e8b0
    int64_t v154; // 0x40e8b0
    int64_t v155; // 0x40e8b0
    char v156; // 0x40e8b0
    if (v150 != 0) {
        if (v150 >= 1) {
            int64_t v157 = *(int64_t *)(v1 + 16); // 0x40efec
            int64_t v158 = v157; // 0x40eff4
            *(int32_t *)v158 = -1;
            v158 += 4;
            while (v157 + 4 * v150 != v158) {
                // 0x40eff8
                *(int32_t *)v158 = -1;
                v158 += 4;
            }
        }
        char * v159 = (char *)(v1 + 139);
        v156 = 0;
        v155 = v149;
        v153 = v150;
        if (*v159 == 0) {
            goto lab_0x40ebec;
        } else {
            int64_t v160 = *(int64_t *)(v1 + 8); // 0x40f016
            memset((int64_t *)v160, 255, (int32_t)v150);
            v151 = v159;
            v154 = v160;
            v152 = *v7;
            goto lab_0x40ebe5;
        }
    } else {
        // 0x40ebdc
        v151 = (char *)(v1 + 139);
        v154 = v149;
        v152 = v150;
        goto lab_0x40ebe5;
    }
  lab_0x40ebc4:
    // 0x40ebc4
    v161 = 0;
    v162 = v163;
    if ((int32_t)v164 == 10) {
        // 0x40ebcb
        v161 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
        v162 = v163;
    }
    goto lab_0x40ebd9;
  lab_0x40eddf:
    // 0x40eddf
    *v24 = v22;
    v25 = v19;
    v26 = v21;
    v27 = *(char *)(v1 + 139);
    v28 = v23;
    goto lab_0x40e9b0;
  lab_0x40ebd9:
    // 0x40ebd9
    *(int32_t *)(v1 + 112) = v161;
    v149 = v162;
    v150 = v43;
    goto lab_0x40ebdc;
  lab_0x40ebec:
    // 0x40ebec
    *v24 = v153;
    v68 = v156;
    v66 = v155;
    goto lab_0x40e99c;
  lab_0x40ebe5:
    // 0x40ebe5
    v156 = *v151;
    v155 = v154;
    v153 = v152;
    goto lab_0x40ebec;
}
// Address range: 0x40f0a0 - 0x40f2c5
int64_t function_40f0a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40f0a0
    int128_t v1; // 0x40f0a0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x40f0a2
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40f0b9
    int128_t v5 = __asm_movaps(v3); // bp-88, 0x40f0bd
    int64_t v6 = *v4 + 24 * a2; // 0x40f0c2
    int64_t v7 = 0; // bp-72, 0x40f0cb
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x40f0d4
    int64_t v9 = *v8; // 0x40f0d4
    if (v9 < 1) {
        // 0x40f281
        free(NULL);
        return (int32_t)&g127 ^ (int32_t)&g127;
    }
    int64_t v10 = v6 + 16; // 0x40f145
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = a3 + 8;
    int64_t * v13 = (int64_t *)v12;
    int64_t v14 = a3 + 16;
    int64_t v15 = 0; // 0x40f138
    int64_t v16 = a1; // 0x40f0a0
    int64_t v17 = v9;
    int64_t v18; // 0x40f0a0
    int64_t v19; // 0x40f0a0
    int64_t v20; // 0x40f0a0
    int64_t v21; // 0x40f173
    int64_t v22; // 0x40f17d
    while (true) {
      lab_0x40f145:
        // 0x40f145
        v19 = v17;
        int64_t v23 = v16;
        int64_t v24 = *(int64_t *)(*v11 + 8 * v15); // 0x40f149
        v16 = v23;
        v18 = v19;
        if (v24 == a2) {
            goto lab_0x40f138;
        } else {
            // 0x40f152
            v16 = v23;
            v18 = v19;
            if ((*(char *)(v23 + 8 + 16 * v24) & 8) == 0) {
                goto lab_0x40f138;
            } else {
                // 0x40f163
                v21 = 24 * v24;
                int64_t v25 = *(int64_t *)(a1 + 40) + v21; // 0x40f17a
                v22 = *(int64_t *)(v25 + 16);
                int64_t v26 = *(int64_t *)v22; // 0x40f186
                int64_t v27 = function_40c890(v19, v10, v26); // 0x40f191
                if (*(int64_t *)(v25 + 8) > 1) {
                    // 0x40f0f0
                    v20 = v19;
                    if (v27 != 0) {
                        goto lab_0x40f1d0;
                    } else {
                        int64_t v28 = *v13; // 0x40f0f9
                        int64_t v29 = function_40c890(v28, v14, v26); // 0x40f104
                        v20 = v28;
                        if (v29 == 0) {
                            goto lab_0x40f1d0;
                        } else {
                            goto lab_0x40f112;
                        }
                    }
                } else {
                    // 0x40f1ab
                    v16 = v19;
                    v18 = v19;
                    if (v27 != 0) {
                        goto lab_0x40f138;
                    } else {
                        int64_t v30 = *v13; // 0x40f1b0
                        int64_t v31 = function_40c890(v30, v14, v26); // 0x40f1bb
                        v16 = v30;
                        v18 = v19;
                        if (v31 != 0) {
                            goto lab_0x40f112;
                        } else {
                            goto lab_0x40f138;
                        }
                    }
                }
            }
        }
    }
  lab_0x40f210:
    if (v17 < 1) {
        // 0x40f281
        free((int64_t *)v7);
        return (int32_t)&g127 ^ (int32_t)&g127;
    }
    int64_t v32 = 0; // 0x40f0a0
    int64_t v33 = *(int64_t *)(*v11 + 8 * v32); // 0x40f22c
    int64_t v34; // 0x40f0a0
    int64_t v35; // 0x40f23d
    int64_t v36; // 0x40f250
    if (function_40c890(v34, (int64_t)&v7, v33) == 0) {
        // 0x40f23d
        v35 = *v13;
        v36 = function_40c890(v35, v14, v33) - 1;
        if (v36 > -1 == v36 < v35) {
            // 0x40f25e
            *v13 = v35 - 1;
            function_40ca00(v12, v14, v36);
        }
    }
    int64_t v37 = v32 + 1; // 0x40f272
    v32 = v37;
    while (*v8 > v37) {
        // 0x40f220
        v33 = *(int64_t *)(*v11 + 8 * v32);
        if (function_40c890(v34, (int64_t)&v7, v33) == 0) {
            // 0x40f23d
            v35 = *v13;
            v36 = function_40c890(v35, v14, v33) - 1;
            if (v36 > -1 == v36 < v35) {
                // 0x40f25e
                *v13 = v35 - 1;
                function_40ca00(v12, v14, v36);
            }
        }
        // 0x40f272
        v37 = v32 + 1;
        v32 = v37;
    }
    // 0x40f281
    free((int64_t *)v7);
    return (int32_t)&g127 ^ (int32_t)&g127;
  lab_0x40f138:
    // 0x40f138
    v17 = v18;
    v15++;
    if (v17 <= v15) {
        // break -> 0x40f210
        goto lab_0x40f210;
    }
    goto lab_0x40f145;
  lab_0x40f1d0:;
    int64_t v38 = *(int64_t *)(v22 + 8); // 0x40f1d0
    v16 = v20;
    v18 = v19;
    if (v38 < 1) {
        goto lab_0x40f138;
    } else {
        int64_t v39 = function_40c890(v19, v10, v38); // 0x40f1e6
        v16 = v19;
        v18 = v19;
        if (v39 != 0) {
            goto lab_0x40f138;
        } else {
            int64_t v40 = *v13; // 0x40f1f4
            int64_t v41 = function_40c890(v40, v14, v38); // 0x40f1fc
            v16 = v40;
            v18 = v19;
            if (v41 == 0) {
                goto lab_0x40f138;
            } else {
                goto lab_0x40f112;
            }
        }
    }
  lab_0x40f112:;
    int64_t v42 = function_40d340(&v5, a4, *v4 + v21); // 0x40f124
    if ((int32_t)v42 != 0) {
        // 0x40f2a0
        free((int64_t *)v7);
        return v42 & 0xffffffff;
    }
    // 0x40f131
    v16 = &v5;
    v18 = *v8;
    goto lab_0x40f138;
}
// Address range: 0x40f2d0 - 0x40fddd
int64_t function_40f2d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40f2d0
    int128_t v1; // 0x40f2d0
    int128_t v2 = v1;
    int64_t * mem = malloc(0x3800); // 0x40f2ee
    if (mem == NULL) {
        // 0x40f692
        return 0;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x40f30b
    int128_t v4 = __asm_movaps(v3); // bp-152, 0x40f30f
    int64_t v5 = __asm_movaps(v3); // 0x40f31f
    int64_t * v6 = (int64_t *)(a2 + 88); // 0x40f329
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 96); // 0x40f331
    *v7 = 0;
    int64_t v8; // 0x40f2d0
    int64_t v9; // 0x40f2d0
    int64_t v10; // 0x40f2d0
    int64_t v11; // 0x40f2d0
    int64_t v12; // 0x40f2d0
    int64_t v13; // 0x40f2d0
    int64_t v14; // 0x40f2d0
    int64_t v15; // 0x40f2d0
    int64_t v16; // 0x40f2d0
    int64_t v17; // 0x40f2d0
    int64_t v18; // 0x40f2d0
    int64_t v19; // 0x40f2d0
    int64_t v20; // 0x40f2d0
    int64_t v21; // 0x40f2d0
    int64_t v22; // 0x40f2d0
    int128_t v23; // 0x40f2d0
    int128_t v24; // 0x40f2d0
    int128_t v25; // 0x40f2d0
    int128_t v26; // 0x40f2d0
    int64_t v27; // 0x40f2d0
    int64_t v28; // 0x40f2d0
    int128_t v29; // bp-88, 0x40f2d0
    int64_t v30; // 0x40f2ee
    int64_t v31; // 0x40f314
    int64_t v32; // 0x40f2d0
    int64_t v33; // 0x40f2d0
    int64_t v34; // 0x40fd12
    int64_t v35; // 0x40f577
    int128_t * v36; // 0x40f2d0
    int64_t v37; // 0x40f352
    int64_t v38; // 0x40f36b
    uint32_t v39; // 0x40f36e
    char v40; // 0x40f372
    int64_t * mem2; // 0x40f3d9
    int32_t size2; // 0x40f418
    int64_t * mem3; // 0x40f41d
    int64_t v41; // 0x40f41d
    int64_t v42; // 0x40f44a
    int64_t v43; // 0x40f45a
    int128_t v44; // 0x40f2d0
    int128_t v45; // 0x40f2d0
    int128_t v46; // 0x40f2d0
    int128_t v47; // 0x40f2d0
    int128_t v48; // 0x40f2d0
    if (*(int64_t *)(a2 + 16) < 1) {
        // 0x40fcb2
        free(mem);
        goto lab_0x40fcbc;
    } else {
        // 0x40f33f
        v30 = (int64_t)mem;
        v31 = v30 + 0x1800;
        v32 = &v4;
        v33 = &v29;
        v36 = (int128_t *)(v32 + 16);
        v23 = v5;
        v28 = 0;
        v44 = v3;
        v14 = a1;
        v18 = a2;
        v10 = 0;
        while (true) {
          lab_0x40f34d:
            // 0x40f34d
            v11 = v10;
            v19 = v18;
            v15 = v14;
            int128_t v49 = v44;
            int128_t v50 = v23;
            v37 = 8 * v28;
            int64_t v51 = *(int64_t *)(*(int64_t *)(v19 + 24) + v37); // 0x40f363
            v38 = 16 * v51 + *(int64_t *)v15;
            int64_t v52 = v38 + 8; // 0x40f36e
            v39 = *(int32_t *)v52;
            v40 = *(char *)v52;
            v24 = v50;
            v45 = v49;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            switch (v40) {
                case 1: {
                    unsigned char v53 = *(char *)v38; // 0x40f6a8
                    unsigned char v54 = v53 % 64;
                    int64_t * v55 = (int64_t *)((int64_t)(v53 / 8 & 24) + v32); // 0x40f6c3
                    *v55 = (v54 == 0 ? 1 : 1 << (int64_t)v54) | *v55;
                    v25 = v50;
                    v47 = v49;
                    goto lab_0x40f6c7;
                }
                case 3: {
                    int64_t v56 = 0;
                    int64_t * v57 = (int64_t *)(v56 + v32); // 0x40fb32
                    *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                    v25 = v50;
                    v47 = v49;
                    int64_t v58 = v56 + 8; // 0x40fb46
                    while (v56 != 24) {
                        // 0x40fb32
                        v56 = v58;
                        v57 = (int64_t *)(v56 + v32);
                        *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                        v25 = v50;
                        v47 = v49;
                        v58 = v56 + 8;
                    }
                    goto lab_0x40f6c7;
                }
                case 5: {
                    // 0x40f9e0
                    if (*(int32_t *)(v15 + 180) < 2) {
                        int128_t v59 = __asm_pcmpeqd(v49, v49); // 0x40fa70
                        v4 = __asm_movaps(v59);
                        v26 = __asm_movaps(v59);
                        v48 = v59;
                    } else {
                        int64_t v60 = 0;
                        int64_t * v61 = (int64_t *)(v60 + v32); // 0x40f9f9
                        *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                        int64_t v62 = v60 + 8; // 0x40fa0d
                        v26 = v50;
                        v48 = v49;
                        while (v60 != 24) {
                            // 0x40f9f9
                            v60 = v62;
                            v61 = (int64_t *)(v60 + v32);
                            *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                            v62 = v60 + 8;
                            v26 = v50;
                            v48 = v49;
                        }
                    }
                    goto lab_0x40fa0f;
                }
                case 7: {
                    int128_t v63 = __asm_pcmpeqd(v49, v49); // 0x40fb10
                    v4 = __asm_movaps(v63);
                    v26 = v50;
                    v48 = v63;
                    goto lab_0x40fa0f;
                }
                default: {
                    goto lab_0x40f3a2;
                }
            }
        }
      lab_0x40f3b3:
        if (v13 < 1) {
            // 0x40fdc5
            free(mem);
            if (v13 != 0) {
                // 0x40f692
                return 0;
            }
            goto lab_0x40fcbc;
        } else {
            int64_t v64 = v13 + 1; // 0x40f3c8
            int128_t v65 = v64; // bp-120, 0x40f3cd
            int64_t size = 8 * v64; // 0x40f3d2
            mem2 = malloc((int32_t)size);
            if (mem2 == NULL) {
                goto lab_0x40fb87;
            } else {
                // 0x40f3f2
                v4 = 0;
                if (v13 > 0xaaaaaaaaaaaa855) {
                    goto lab_0x40fb87;
                } else {
                    // 0x40f40d
                    size2 = 24 * (int32_t)v13;
                    mem3 = malloc(size2);
                    if (mem3 == NULL) {
                        goto lab_0x40fb87;
                    } else {
                        // 0x40f430
                        v41 = (int64_t)mem3;
                        int64_t v66 = size - 8; // 0x40f435
                        int128_t v67 = __asm_pxor(v46, v46); // 0x40f439
                        v42 = v66 + v41;
                        v43 = v42 + v66;
                        v29 = __asm_movaps(v67);
                        __asm_movaps(v67);
                        int64_t * v68 = (int64_t *)(v17 + 48);
                        int64_t v69 = 0; // 0x40f476
                        int64_t v70 = v30 + 8; // 0x40f476
                        int64_t v71 = v30; // 0x40f476
                        int64_t v72 = 0; // 0x40f476
                        while (true) {
                            int64_t v73 = v70;
                            int64_t v74 = v69;
                            int64_t * v75 = (int64_t *)v73; // 0x40f48a
                            uint64_t v76 = *v75; // 0x40f48a
                            if (v76 >= 1) {
                                int64_t v77 = v76; // 0x40f4d4
                                for (int64_t i = 0; i < v77; i++) {
                                    int64_t v78 = *(int64_t *)(v73 + 8); // 0x40f498
                                    int64_t v79 = *(int64_t *)(v17 + 24); // 0x40f4a0
                                    int64_t v80 = *(int64_t *)(v79 + 8 * *(int64_t *)(v78 + 8 * i)); // 0x40f4a5
                                    int64_t v81 = v77; // 0x40f4ad
                                    if (v80 != -1) {
                                        int64_t v82 = function_40cdd0((int64_t *)&v65, (int128_t *)(*v68 + 24 * v80)); // 0x40f4bf
                                        int32_t v83 = v82; // 0x40f4c4
                                        v4 = v83;
                                        if (v83 != 0) {
                                            // 0x40fb75
                                            free(mem3);
                                            goto lab_0x40fb87;
                                        }
                                        // 0x40f4af
                                        v81 = *v75;
                                    }
                                    // 0x40f4d0
                                    v77 = v81;
                                }
                            }
                            int64_t v84 = function_40db40(&v4, v17, (int64_t *)&v65, 0); // 0x40f4e7
                            int64_t v85 = 8 * v72; // 0x40f4f1
                            int64_t * v86 = (int64_t *)(v85 + v41); // 0x40f4f1
                            *v86 = v84;
                            if (v84 == 0) {
                                // 0x40fc48
                                if ((int32_t)v4 != 0) {
                                    // break -> 0x40fb75
                                    break;
                                }
                            }
                            // 0x40f4fe
                            int64_t v87; // 0x40f2d0
                            if (*(char *)(v84 + 104) < 0) {
                                int64_t v88 = function_40db40(&v4, v17, (int64_t *)&v65, 1); // 0x40fbd0
                                *(int64_t *)(v85 + v42) = v88;
                                if (v88 == 0) {
                                    // 0x40fb60
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40fb75
                                        break;
                                    }
                                }
                                int64_t v89 = v74; // 0x40fbf0
                                if (v88 != *v86) {
                                    int32_t v90 = *(int32_t *)(v17 + 180); // 0x40fbfc
                                    v89 = v90 < 2 == (1 - v90 & v90) < 0 ? 1 : 0x100000000000000 * v74 >> 56;
                                }
                                int64_t v91 = v89;
                                int64_t v92 = function_40db40(&v4, v17, (int64_t *)&v65, 2); // 0x40fc1d
                                *(int64_t *)(v85 + v43) = v92;
                                v87 = v91;
                                if (v92 == 0) {
                                    // 0x40fc34
                                    v87 = v91;
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40fb75
                                        break;
                                    }
                                }
                            } else {
                                // 0x40f508
                                *(int64_t *)(v85 + v42) = v84;
                                *(int64_t *)(v85 + v43) = v84;
                                v87 = v74;
                            }
                            // 0x40f51a
                            v27 = v87;
                            int64_t v93 = 0;
                            int64_t * v94 = (int64_t *)(v93 + v33); // 0x40f524
                            *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                            int64_t v95 = v93 + 8; // 0x40f53c
                            while (v93 != 24) {
                                // 0x40f524
                                v93 = v95;
                                v94 = (int64_t *)(v93 + v33);
                                *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                                v95 = v93 + 8;
                            }
                            // 0x40f53e
                            v72++;
                            v69 = v27;
                            v70 = v73 + 24;
                            v71 += 32;
                            if (v72 == v13) {
                                if ((char)v27 != 0) {
                                    int64_t * mem4 = calloc(8, 512); // 0x40fd12
                                    v34 = (int64_t)mem4;
                                    *v7 = v34;
                                    if (mem4 == NULL) {
                                        // 0x40fb75
                                        free(mem3);
                                        goto lab_0x40fb87;
                                    } else {
                                        // 0x40fd2c
                                        v22 = v33;
                                        v21 = v34;
                                        v9 = v30 + 0x1820;
                                        goto lab_0x40fd52;
                                    }
                                } else {
                                    int64_t * mem5 = calloc(8, 256); // 0x40f577
                                    v35 = (int64_t)mem5;
                                    *v6 = v35;
                                    if (mem5 == NULL) {
                                        // 0x40fb75
                                        free(mem3);
                                        goto lab_0x40fb87;
                                    } else {
                                        // 0x40f591
                                        v8 = 0;
                                        goto lab_0x40f5af;
                                    }
                                }
                            }
                        }
                        // 0x40fb75
                        free(mem3);
                        goto lab_0x40fb87;
                    }
                }
            }
        }
    }
  lab_0x40f9a3:;
    int64_t v96 = v30 + 16; // 0x40f9a8
    int64_t v97; // 0x40f2d0
    int64_t v98 = v97 + v96; // 0x40f9b0
    int64_t v99 = v96; // 0x40f9b4
    goto lab_0x40f9b8;
  lab_0x40f7ed:;
    // 0x40f7ed
    int64_t v145; // 0x40f2d0
    int64_t v146; // 0x40f806
    while (true) {
        // 0x40f7f6
        int64_t v147; // 0x40f2d0
        int64_t v148 = v147;
        int64_t v149; // 0x40f2d0
        int64_t v150 = v149;
        int64_t v151 = 8 * v150; // 0x40f7f6
        int64_t v152 = *(int64_t *)(v151 + v32); // 0x40f7f6
        int64_t v153 = *(int64_t *)(v151 + v145); // 0x40f7fa
        int64_t v154 = v153 & v152; // 0x40f7fa
        int64_t v155; // 0x40f2d0
        *(int64_t *)(v151 + v155) = v154;
        int64_t v156 = v150 + 1; // 0x40f802
        v146 = v154 | v148;
        v149 = v156;
        v147 = v146;
        if (v156 == 4) {
            // break -> 0x40f80f
            break;
        }
    }
    int64_t v157 = 0; // 0x40f812
    int64_t v158 = 0; // 0x40f812
    int64_t v159 = 0; // 0x40f812
    int64_t v160; // 0x40f2d0
    int64_t v161; // 0x40f2d0
    int64_t v162; // 0x40f2d0
    if (v146 != 0) {
        int64_t v163 = v159;
        int64_t v164 = v158;
        int64_t v165 = v157;
        int64_t v166 = 8 * v165; // 0x40f822
        int64_t * v167 = (int64_t *)(v166 + v32); // 0x40f822
        int64_t v168 = *v167; // 0x40f822
        int64_t v169 = *(int64_t *)(v166 + v145); // 0x40f826
        int64_t v170 = v169 & -1 - v168; // 0x40f830
        int64_t v171 = v168 & -1 - v169; // 0x40f836
        *(int64_t *)(v166 + v33) = v170;
        int64_t v172 = v170 | v163; // 0x40f83d
        *v167 = v171;
        int64_t v173 = v165 + 1; // 0x40f844
        int64_t v174 = v171 | v164; // 0x40f848
        v157 = v173;
        v158 = v174;
        v159 = v172;
        while (v173 != 4) {
            // 0x40f822
            v163 = v159;
            v164 = v158;
            v165 = v157;
            v166 = 8 * v165;
            v167 = (int64_t *)(v166 + v32);
            v168 = *v167;
            v169 = *(int64_t *)(v166 + v145);
            v170 = v169 & -1 - v168;
            v171 = v168 & -1 - v169;
            *(int64_t *)(v166 + v33) = v170;
            v172 = v170 | v163;
            *v167 = v171;
            v173 = v165 + 1;
            v174 = v171 | v164;
            v157 = v173;
            v158 = v174;
            v159 = v172;
        }
        // 0x40f851
        int64_t v175; // 0x40f2d0
        int64_t v176 = 24 * v175 + v30; // 0x40f85b
        int64_t v177 = v176; // 0x40f862
        int64_t v178; // 0x40f2d0
        int64_t v179 = v178; // 0x40f862
        if (v172 != 0) {
            int128_t v180 = v29; // 0x40f864
            int128_t v181 = __asm_movdqa(v180); // 0x40f864
            int64_t v182 = 32 * v178 + v31; // 0x40f879
            int128_t v183 = *(int128_t *)v182; // 0x40f87e
            __asm_movups(v183, v181);
            int128_t v184; // 0x40f2d0
            int128_t v185 = __asm_movdqa(v184); // 0x40f881
            int128_t v186 = *(int128_t *)(v182 + 16); // 0x40f88a
            __asm_movups(v186, v185);
            int128_t v187 = __asm_movdqa(0); // 0x40f88e
            int64_t v188 = 24 * v178;
            int128_t v189 = *(int128_t *)v145; // 0x40f8a0
            __asm_movups(v189, v187);
            int128_t v190; // 0x40f2d0
            int128_t v191 = __asm_movdqa(v190); // 0x40f8a5
            int128_t v192 = *(int128_t *)(v145 + 16); // 0x40f8ae
            __asm_movups(v192, v191);
            if ((int32_t)function_40d930(v188 + v30, v176) != 0) {
                goto lab_0x40f9a3;
            }
            // 0x40f8c1
            v177 = 0x100000000 * v176 >> 32;
            v179 = v178 + 1;
        }
        int64_t v193 = v179;
        int64_t v194 = v177;
        int64_t * v195; // 0x40f2d0
        int64_t v196 = *v195; // 0x40f8d4
        int64_t v197 = *(int64_t *)(v196 + v37); // 0x40f8d8
        if ((char)function_40b280(v194, v197) == 0) {
            // 0x40f8ca
            goto lab_0x40f9a3;
        }
        // 0x40f8ec
        int64_t v198; // 0x40f2d0
        v162 = v198;
        v160 = v193;
        v161 = v175;
        if (v174 == 0) {
            // break -> 0x40f905
            goto lab_0x40f905_2;
        }
    }
    goto lab_0x40f7ce;
  lab_0x40f7ce:;
    // 0x40f7ce
    int64_t v199; // 0x40f2d0
    int64_t v200 = v199;
    int64_t v201; // 0x40f2d0
    int64_t v202 = v201 + 1; // 0x40f7ce
    v199 = v200;
    int64_t v203; // 0x40f2d0
    v203 += 32;
    v201 = v202;
    v162 = 0x100000000000000 * v19 >> 56;
    v160 = v200;
    v161 = v202;
    if (v202 >= v200) {
        // break -> 0x40f905
        goto lab_0x40f905_2;
    }
    goto lab_0x40f7df;
  lab_0x40f3a2:
    // 0x40f3a2
    v13 = v12;
    v17 = v16;
    v46 = v45;
    int64_t v206 = v28 + 1; // 0x40f3a2
    v23 = v24;
    v28 = v206;
    v44 = v46;
    v14 = v17;
    v18 = v20;
    v10 = v13;
    if (v206 >= *(int64_t *)(v20 + 16)) {
        // break -> 0x40f3b3
        goto lab_0x40f3b3;
    }
    goto lab_0x40f34d;
  lab_0x40f6c7:;
    uint32_t v207 = v39 / 256; // 0x40f377
    uint32_t v208 = v207 & 0xff03ff;
    int128_t v209 = v47;
    int128_t v210 = v25;
    int128_t v211 = v209; // 0x40f6ca
    int64_t v212; // 0x40f37a
    int128_t v213; // 0x40f2d0
    if ((int16_t)v208 == 0) {
        goto lab_0x40f780;
    } else {
        // 0x40f6d0
        v212 = v208;
        v213 = v209;
        if ((v212 & 32) != 0) {
            int128_t v214 = v4; // 0x40fa40
            int128_t v215 = __asm_pxor(v209, v209); // 0x40fa45
            v4 = __asm_movaps(v215);
            *v36 = (int128_t)__asm_movaps(v215);
            v24 = v210;
            v45 = v215;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            if ((v214 & 1024) == 0) {
                goto lab_0x40f3a2;
            } else {
                // 0x40fa59
                v4 = 1024;
                v213 = v215;
                goto lab_0x40f6d8;
            }
        } else {
            goto lab_0x40f6d8;
        }
    }
  lab_0x40fa0f:;
    int128_t v216 = v48;
    int128_t v217 = v26;
    int64_t v218 = *(int64_t *)(v15 + 216); // 0x40fa0f
    if ((v218 & 64) == 0) {
        // 0x40fa1b
        v4 = (int64_t)v4 & -1025;
    }
    // 0x40fa24
    v25 = v217;
    v47 = v216;
    if ((char)v218 <= 255) {
        // 0x40fa30
        v4 = (int64_t)v4 & -2;
        v25 = v217;
        v47 = v216;
    }
    goto lab_0x40f6c7;
  lab_0x40f780:;
    int128_t v219 = v211;
    v162 = v19;
    v160 = v11;
    v161 = 0;
    if (v11 >= 1) {
        // 0x40f791
        v199 = v11;
        v203 = v31;
        v201 = 0;
        while (true) {
          lab_0x40f7df:
            // 0x40f7df
            if (v40 == 1) {
                unsigned char v204 = *(char *)v38; // 0x40f7b0
                int64_t v205 = *(int64_t *)(32 * v201 + v31 + (int64_t)(v204 / 8 & 24)); // 0x40f7c3
                if ((1 << (int64_t)(v204 % 64) & v205) != 0) {
                    goto lab_0x40f7ed;
                } else {
                    goto lab_0x40f7ce;
                }
            } else {
                goto lab_0x40f7ed;
            }
        }
    }
  lab_0x40f905_2:;
    int64_t v220 = v160;
    int64_t v221 = v162;
    v24 = v210;
    v45 = v219;
    v16 = v15;
    v20 = v221;
    v12 = v220;
    int64_t v222; // 0x40f2d0
    int64_t v223; // 0x40f2d0
    int64_t v224; // 0x40f2d0
    int64_t result; // 0x40f2d0
    int128_t v225; // 0x40f2d0
    if (v220 != v161) {
        goto lab_0x40f3a2;
    } else {
        int128_t v226 = __asm_movdqa(v4); // 0x40f90e
        int64_t v227 = 32 * v220 + v31; // 0x40f925
        __asm_movups(*(int128_t *)v227, v226);
        __asm_movups(*(int128_t *)(v227 + 16), __asm_movdqa(v210));
        v97 = 24 * v220;
        int64_t v228 = v97 + v30; // 0x40f94d
        int64_t * v229 = (int64_t *)v228;
        *v229 = 1;
        int64_t * v230 = (int64_t *)(v228 + 8);
        *v230 = 1;
        int64_t * mem6 = malloc(8); // 0x40f966
        *(int64_t *)(v228 + 16) = (int64_t)mem6;
        if (mem6 == NULL) {
            // 0x40f66b
            *v230 = 0;
            *v229 = 0;
            if (v220 != 0) {
                goto lab_0x40f9a3;
            } else {
                // 0x40f684
                free(mem);
                result = 0;
                goto lab_0x40f692;
            }
        }
        // 0x40f982
        *mem6 = *(int64_t *)(*(int64_t *)(v221 + 24) + v37);
        v225 = v219;
        v223 = 0x100000000000000 * v15 >> 56;
        v224 = v221;
        v222 = v220 + 1;
        goto lab_0x40f989;
    }
  lab_0x40f6d8:;
    int128_t v231 = v213;
    v225 = v231;
    v223 = v15;
    v224 = v19;
    v222 = v11;
    if ((char)v207 <= -1) {
        goto lab_0x40f989;
    } else {
        if ((v212 & 4) == 0) {
            goto lab_0x40f730;
        } else {
            if (v40 == 1) {
                // 0x40faf0
                v225 = v231;
                v223 = v15;
                v224 = v19;
                v222 = v11;
                if ((*(char *)(v38 + 10) & 64) == 0) {
                    goto lab_0x40f989;
                } else {
                    // 0x40fafb
                    if (*(int32_t *)(v15 + 180) > 1) {
                        goto lab_0x40f6fb;
                    } else {
                        goto lab_0x40fac0;
                    }
                }
            } else {
                // 0x40f6ed
                if (*(int32_t *)(v15 + 180) < 2) {
                    goto lab_0x40fac0;
                } else {
                    goto lab_0x40f6fb;
                }
            }
        }
    }
  lab_0x40f989:;
    int128_t v232 = v225;
    int128_t v233 = __asm_pxor(v232, v232); // 0x40f989
    v4 = __asm_movaps(v233);
    *v36 = (int128_t)__asm_movaps(v233);
    v24 = v210;
    v45 = v233;
    v16 = v223;
    v20 = v224;
    v12 = v222;
    goto lab_0x40f3a2;
  lab_0x40f730:
    // 0x40f730
    v211 = v231;
    if ((v212 & 8) == 0) {
        goto lab_0x40f780;
    } else {
        if (v40 == 1) {
            // 0x40fb50
            v225 = v231;
            v223 = v15;
            v224 = v19;
            v222 = v11;
            if ((*(char *)(v38 + 10) & 64) == 0) {
                goto lab_0x40f73d;
            } else {
                goto lab_0x40f989;
            }
        } else {
            goto lab_0x40f73d;
        }
    }
  lab_0x40f73d:
    // 0x40f73d
    if (*(int32_t *)(v15 + 180) < 2) {
        int64_t v234 = 0; // 0x40fa9f
        int64_t v235 = 8 * v234; // 0x40fa8c
        int64_t * v236 = (int64_t *)(v235 + v32); // 0x40fa97
        int64_t v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235); // 0x40fa97
        *v236 = v237;
        v234++;
        int64_t v238 = v237; // 0x40faa3
        int64_t v239 = v238; // 0x40faaa
        while (v234 != 4) {
            // 0x40fa8c
            v235 = 8 * v234;
            v236 = (int64_t *)(v235 + v32);
            v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235);
            *v236 = v237;
            v234++;
            v238 = v237 | v239;
            v239 = v238;
        }
        // 0x40faac
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v238 == 0) {
            goto lab_0x40f3a2;
        } else {
            goto lab_0x40f780;
        }
    } else {
        int64_t v240 = 0; // 0x40f751
        int64_t v241 = 8 * v240; // 0x40f753
        int64_t v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120)); // 0x40f75b
        int64_t * v243 = (int64_t *)(v241 + v32); // 0x40f762
        int64_t v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241)); // 0x40f762
        *v243 = v244;
        v240++;
        int64_t v245 = v244; // 0x40f76e
        int64_t v246 = v245; // 0x40f775
        while (v240 != 4) {
            // 0x40f753
            v241 = 8 * v240;
            v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120));
            v243 = (int64_t *)(v241 + v32);
            v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241));
            *v243 = v244;
            v240++;
            v245 = v244 | v246;
            v246 = v245;
        }
        // 0x40f777
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v245 == 0) {
            goto lab_0x40f3a2;
        } else {
            goto lab_0x40f780;
        }
    }
  lab_0x40fac0:;
    int64_t v247 = 0; // 0x40fac2
    int64_t v248 = 8 * v247; // 0x40fac4
    int64_t * v249 = (int64_t *)(v248 + v32); // 0x40fac4
    int64_t v250 = *(int64_t *)(v15 + 184 + v248) & *v249; // 0x40fac8
    *v249 = v250;
    int64_t v251 = v247 + 1; // 0x40fad4
    int64_t v252 = v250; // 0x40fad8
    v247 = v251;
    int64_t v253 = v252; // 0x40fadf
    while (v251 != 4) {
        // 0x40fac4
        v248 = 8 * v247;
        v249 = (int64_t *)(v248 + v32);
        v250 = *(int64_t *)(v15 + 184 + v248) & *v249;
        *v249 = v250;
        v251 = v247 + 1;
        v252 = v250 | v253;
        v247 = v251;
        v253 = v252;
    }
    // 0x40fae1
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v252 != 0) {
        goto lab_0x40f730;
    } else {
        goto lab_0x40f3a2;
    }
  lab_0x40f6fb:;
    int64_t v254 = 0; // 0x40f701
    int64_t v255 = 8 * v254; // 0x40f703
    int64_t v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120)); // 0x40f703
    int64_t * v257 = (int64_t *)(v255 + v32); // 0x40f712
    int64_t v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257; // 0x40f712
    *v257 = v258;
    int64_t v259 = v254 + 1; // 0x40f71a
    int64_t v260 = v258; // 0x40f71e
    v254 = v259;
    int64_t v261 = v260; // 0x40f725
    while (v259 != 4) {
        // 0x40f703
        v255 = 8 * v254;
        v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120));
        v257 = (int64_t *)(v255 + v32);
        v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257;
        *v257 = v258;
        v259 = v254 + 1;
        v260 = v258 | v261;
        v254 = v259;
        v261 = v260;
    }
    // 0x40f727
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v260 == 0) {
        goto lab_0x40f3a2;
    } else {
        goto lab_0x40f730;
    }
  lab_0x40fcbc:;
    int64_t * mem7 = calloc(8, 256); // 0x40fcc6
    int64_t v262 = (int64_t)mem7; // 0x40fcc6
    *v6 = v262;
    // 0x40f692
    return v262 & -256 | (int64_t)(mem7 != NULL);
  lab_0x40fb87:
    // 0x40fb87
    free(mem2);
    int64_t v263 = v30 + 16; // 0x40fb94
    int64_t v264 = v263 + 24; // 0x40fba3
    free((int64_t *)*(int64_t *)v263);
    int64_t v265 = v264; // 0x40fbaf
    while (v264 != 24 * v13 + v263) {
        // 0x40fba0
        v264 = v265 + 24;
        free((int64_t *)*(int64_t *)v265);
        v265 = v264;
    }
    // 0x40fbb1
    free(mem);
    result = 0;
  lab_0x40f692:
    // 0x40f692
    return result;
  lab_0x40f9b8:;
    int64_t v100 = v99 + 24; // 0x40f9bb
    free((int64_t *)*(int64_t *)v99);
    v99 = v100;
    if (v98 != v100) {
        goto lab_0x40f9b8;
    } else {
        // 0x40f9c9
        free(mem);
        result = 0;
        goto lab_0x40f692;
    }
  lab_0x40fd52:;
    int64_t v101 = v9;
    int64_t v102 = v21;
    int64_t v103 = *(int64_t *)v22; // 0x40fd52
    int64_t v104; // 0x40f2d0
    int64_t v105; // 0x40f2d0
    int64_t v106; // 0x40f2d0
    int64_t * v107; // 0x40f2d0
    if (v103 == 0) {
        goto lab_0x40fd72;
    } else {
        // 0x40fd62
        v107 = (int64_t *)(v101 - 32);
        v105 = v103;
        v106 = 1;
        v104 = v102;
        goto lab_0x40fd62_2;
    }
  lab_0x40f5af:;
    int64_t v108 = v8;
    int64_t v109 = *(int64_t *)(v108 + v33); // 0x40f5b2
    int64_t v110; // 0x40f2d0
    int64_t v111; // 0x40f2d0
    int64_t v112; // 0x40f2d0
    int64_t * v113; // 0x40f2d0
    int64_t v114; // 0x40f2d0
    int64_t * v115; // 0x40f2d0
    if (v109 == 0) {
        goto lab_0x40f5e4;
    } else {
        // 0x40f5d0
        v113 = (int64_t *)(v108 + v31);
        v114 = v30 + 0x1820 + v108;
        v115 = (int64_t *)(v17 + 184 + v108);
        v110 = v109;
        v111 = 1;
        v112 = 64 * v108 + v35;
        goto lab_0x40f5d0_2;
    }
  lab_0x40fd72:;
    int64_t v116 = v22 + 8; // 0x40fd72
    int64_t v117 = v34; // 0x40fd84
    v22 = v116;
    v21 = v102 + 512;
    v9 = v101 + 8;
    int64_t v118; // bp-56, 0x40f2d0
    if (v116 != (int64_t)&v118) {
        goto lab_0x40fd52;
    } else {
        goto lab_0x40f5ee;
    }
  lab_0x40f5e4:
    // 0x40f5e4
    v8 = v108 + 8;
    v117 = v35;
    if (v108 != 24) {
        goto lab_0x40f5af;
    } else {
        goto lab_0x40f5ee;
    }
  lab_0x40f5ee:;
    int64_t v119; // 0x40f2d0
    char v120; // 0x40f2d0
    if ((v120 & 4) == 0) {
        goto lab_0x40f61d;
    } else {
        // 0x40f5ff
        v119 = 0;
        goto lab_0x40f5ff_2;
    }
  lab_0x40fd62_2:;
    int64_t v121 = v104;
    int64_t v122 = v106;
    uint64_t v123 = v105;
    int64_t v124; // 0x40f2d0
    int64_t v125; // 0x40f2d0
    int64_t v126; // 0x40f2d0
    if (v123 % 2 != 0) {
        // 0x40fd8b
        v126 = 0;
        v125 = v101;
        v124 = 0;
        if ((*v107 & v122) != 0) {
            goto lab_0x40fdac;
        } else {
            goto lab_0x40fd96;
        }
    } else {
        goto lab_0x40fd66;
    }
  lab_0x40f5d0_2:;
    int64_t v127 = v112;
    int64_t v128 = v111;
    uint64_t v129 = v110;
    int64_t v130; // 0x40f2d0
    int64_t v131; // 0x40f2d0
    int64_t v132; // 0x40f2d0
    if (v129 % 2 != 0) {
        // 0x40fc60
        v131 = v114;
        v130 = 0;
        v132 = 0;
        if ((*v113 & v128) != 0) {
            goto lab_0x40fc8f;
        } else {
            goto lab_0x40fc78;
        }
    } else {
        goto lab_0x40f5d8;
    }
  lab_0x40f61d:
    // 0x40f61d
    free(mem3);
    free(mem2);
    int64_t v133 = v30 + 16; // 0x40f63e
    int64_t v134 = v133; // 0x40f645
    goto lab_0x40f648;
  lab_0x40fd66:
    // 0x40fd66
    v105 = v123 / 2;
    v106 = 2 * v122;
    v104 = v121 + 8;
    if (v123 >= 2) {
        goto lab_0x40fd62_2;
    } else {
        goto lab_0x40fd72;
    }
  lab_0x40f5d8:
    // 0x40f5d8
    v110 = v129 / 2;
    v111 = 2 * v128;
    v112 = v127 + 8;
    if (v129 >= 2) {
        goto lab_0x40f5d0_2;
    } else {
        goto lab_0x40f5e4;
    }
  lab_0x40f648:;
    int64_t v135 = v134 + 24; // 0x40f64c
    free((int64_t *)*(int64_t *)v134);
    v134 = v135;
    if (v133 + (int64_t)size2 != v135) {
        goto lab_0x40f648;
    } else {
        // 0x40f65a
        free(mem);
        result = 1;
        goto lab_0x40f692;
    }
  lab_0x40f5ff_2:;
    int64_t v136 = v119;
    if ((*(char *)(v30 + 0x1801 + 32 * v136) & 4) != 0) {
        int64_t v137 = *(int64_t *)(8 * v136 + v43); // 0x40fcee
        *(int64_t *)(v117 + 80) = v137;
        if ((char)v27 == 0) {
            goto lab_0x40f61d;
        } else {
            // 0x40fcfc
            *(int64_t *)(v117 + 2128) = v137;
            goto lab_0x40f61d;
        }
    } else {
        int64_t v138 = v136 + 1; // 0x40f614
        v119 = v138;
        if (v138 != v13) {
            goto lab_0x40f5ff_2;
        } else {
            goto lab_0x40f61d;
        }
    }
  lab_0x40fdac:;
    int64_t v139 = 8 * v124; // 0x40fdac
    *(int64_t *)v121 = *(int64_t *)(v139 + v41);
    *(int64_t *)(v121 + 2048) = *(int64_t *)(v139 + v42);
    goto lab_0x40fd66;
  lab_0x40fd96:;
    int64_t v140 = v125;
    int64_t v141 = v126 + 1; // 0x40fd99
    v126 = v141;
    v125 = v140 + 32;
    v124 = v141;
    if ((*(int64_t *)v140 & v122) == 0) {
        goto lab_0x40fd96;
    } else {
        goto lab_0x40fdac;
    }
  lab_0x40fc8f:;
    int64_t v142 = v132;
    if ((*v115 & v128) == 0) {
        // 0x40fca5
        *(int64_t *)v127 = *(int64_t *)(v142 + v41);
        goto lab_0x40f5d8;
    } else {
        // 0x40fc99
        *(int64_t *)v127 = *(int64_t *)(v142 + v42);
        goto lab_0x40f5d8;
    }
  lab_0x40fc78:;
    int64_t v143 = v131;
    int64_t v144 = v130 + 1; // 0x40fc7b
    v131 = v143 + 32;
    v130 = v144;
    if ((*(int64_t *)v143 & v128) == 0) {
        goto lab_0x40fc78;
    } else {
        // 0x40fc8b
        v132 = 8 * v144;
        goto lab_0x40fc8f;
    }
}
// Address range: 0x40fde0 - 0x40fe67
int64_t function_40fde0(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x40fde0
    char * v2 = (char *)v1; // 0x40fde0
    if (*v2 == 16) {
        int64_t v3 = *(int64_t *)(a2 + 8); // 0x40fde6
        *(int64_t *)(a2 + 24) = *(int64_t *)(v3 + 24);
        *(int64_t *)(a2 + 56) = *(int64_t *)(v3 + 56);
        return 0;
    }
    // 0x40fe00
    *(int64_t *)(a2 + 24) = a2;
    int64_t v4 = a2 + 40; // 0x40fe14
    int64_t v5 = function_40bf60(a1, *(int64_t *)v4, *(int64_t *)v1); // 0x40fe18
    *(int64_t *)(a2 + 56) = v5;
    if (v5 == -1) {
        // 0x40fe56
        return 12;
    }
    // 0x40fe2a
    if (*v2 == 12) {
        int32_t * v6 = (int32_t *)(a1 + 8 + 16 * v5); // 0x40fe48
        *v6 = *v6 & -0x3ff01 | 256 * *(int32_t *)v4 & 0x3ff00;
    }
    // 0x40fe56
    return 0;
}
// Address range: 0x40fe70 - 0x40ffec
int64_t function_40fe70(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        int64_t v2 = 0; // 0x40fe8b
        if (*v1 != 0) {
            int64_t v3 = v2 + 1; // 0x40fe9f
            int64_t v4 = a1 + 16 * v2; // 0x40fea7
            function_40bf10(v4);
            v2 = v3;
            int64_t v5 = v4; // 0x40feb4
            while (*v1 > v3) {
                // 0x40fe9c
                v3 = v2 + 1;
                v4 = v5 + 16 * v2;
                function_40bf10(v4);
                v2 = v3;
                v5 = v4;
            }
        }
    }
    // 0x40feb6
    free((int64_t *)*(int64_t *)(a1 + 24));
    int64_t * v6; // 0x40fe70
    int64_t * v7; // 0x40fe70
    int64_t * v8; // 0x40fe70
    if (*v1 == 0) {
        // 0x40feb6
        v7 = (int64_t *)(a1 + 56);
        v6 = (int64_t *)(a1 + 48);
        v8 = (int64_t *)(a1 + 40);
    } else {
        int64_t * v9 = (int64_t *)(a1 + 48);
        int64_t * v10 = (int64_t *)(a1 + 56);
        int64_t * v11 = (int64_t *)(a1 + 40);
        int64_t v12 = 0;
        int64_t v13 = *v9; // 0x40fed0
        if (v13 != 0) {
            // 0x40feda
            free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
        }
        int64_t v14 = *v10; // 0x40fee8
        if (v14 != 0) {
            // 0x40fef2
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
        }
        int64_t v15 = *v11; // 0x40ff00
        if (v15 != 0) {
            // 0x40ff0a
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
        }
        int64_t v16 = v12 + 1; // 0x40ff18
        v7 = v10;
        v6 = v9;
        v8 = v11;
        while (*v1 > v16) {
            // 0x40fed0
            v12 = v16;
            v13 = *v9;
            if (v13 != 0) {
                // 0x40feda
                free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
            }
            // 0x40fee8
            v14 = *v10;
            if (v14 != 0) {
                // 0x40fef2
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
            }
            // 0x40ff00
            v15 = *v11;
            if (v15 != 0) {
                // 0x40ff0a
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
            }
            // 0x40ff18
            v16 = v12 + 1;
            v7 = v10;
            v6 = v9;
            v8 = v11;
        }
    }
    // 0x40ff23
    free((int64_t *)*v8);
    free((int64_t *)*v6);
    int64_t * v17 = (int64_t *)*v7; // 0x40ff3f
    free(v17);
    free(v17);
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x40ff4d
    int64_t v19 = *v18; // 0x40ff4d
    int64_t * v20 = NULL; // 0x40ff55
    if (v19 != 0) {
        int64_t v21 = 0; // 0x40ff93
        int64_t v22 = 24 * v21 + v19; // 0x40ff67
        int64_t * v23 = (int64_t *)v22; // 0x40ff6b
        int64_t * v24 = (int64_t *)(v22 + 16);
        int64_t v25 = 0; // 0x40ff70
        int64_t v26; // 0x40ff80
        if (*v23 >= 1) {
            v26 = v25 + 1;
            function_40c460(*(int64_t *)(*v24 + 8 * v25));
            v25 = v26;
            while (v26 < *v23) {
                // 0x40ff78
                v26 = v25 + 1;
                function_40c460(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
            }
        }
        // 0x40ff8f
        v21++;
        free((int64_t *)*v24);
        int64_t v27 = *v18;
        while (*(int64_t *)(a1 + 136) >= v21) {
            // 0x40ff60
            v22 = 24 * v21 + v27;
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 16);
            v25 = 0;
            if (*v23 >= 1) {
                v26 = v25 + 1;
                function_40c460(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
                while (v26 < *v23) {
                    // 0x40ff78
                    v26 = v25 + 1;
                    function_40c460(*(int64_t *)(*v24 + 8 * v25));
                    v25 = v26;
                }
            }
            // 0x40ff8f
            v21++;
            free((int64_t *)*v24);
            v27 = *v18;
        }
        // 0x40ffb5
        v20 = (int64_t *)v27;
    }
    // 0x40ffb5
    free(v20);
    int64_t v28 = *(int64_t *)(a1 + 120); // 0x40ffba
    if (v28 != (int64_t)&g20) {
        // 0x40ffc8
        free((int64_t *)v28);
    }
    // 0x40ffcd
    free((int64_t *)*(int64_t *)(a1 + 224));
    free((int64_t *)a1);
    return &g127;
}
// Address range: 0x40fff0 - 0x41003e
int64_t function_40fff0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 < 1) {
        // 0x410030
        free((int64_t *)*v1);
        return &g127;
    }
    int64_t v2 = 0;
    int64_t v3 = v2 + 1; // 0x410009
    int64_t v4 = 48 * v2; // 0x41000d
    free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
    uint64_t v5 = *(int64_t *)(v4 + 16 + *v1); // 0x410020
    free((int64_t *)v5);
    while (v3 < v5) {
        // 0x410000
        v2 = v3;
        v3 = v2 + 1;
        v4 = 48 * v2;
        free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
        v5 = *(int64_t *)(v4 + 16 + *v1);
        free((int64_t *)v5);
    }
    // 0x410030
    free((int64_t *)*v1);
    return &g127;
}
// Address range: 0x410040 - 0x4100d0
int64_t function_410040(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int128_t * a6) {
    int64_t v1 = a1 - 1; // 0x410047
    *(int64_t *)a1 = v1;
    if (v1 < 0) {
        // 0x4100b2
        __assert_fail("num >= 0", "lib/regexec.c", 1359, "pop_fail_stack");
        return &g127;
    }
    int64_t v2 = 48 * v1; // 0x41005e
    int64_t v3 = v2 + a2; // 0x410068
    *a3 = *(int64_t *)v3;
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x410071
    memcpy((int64_t *)a5, (int64_t *)v4, 16 * (int32_t)a4);
    int64_t * v5 = (int64_t *)((int64_t)a6 + 16); // 0x41007d
    free((int64_t *)*v5);
    int64_t v6 = v4 + v2;
    free((int64_t *)*(int64_t *)(v6 + 16));
    *a6 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)(v6 + 24)));
    *v5 = *(int64_t *)(v6 + 40);
    return *(int64_t *)(v6 + 8);
}
// Address range: 0x4100d0 - 0x41011c
int64_t function_4100d0(int64_t a1, int64_t str) {
    // 0x4100d0
    int64_t v1; // 0x4100d0
    uint64_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x4100df
    if (len != 1) {
        // 0x410110
        return 3;
    }
    int64_t * v3 = (int64_t *)((v2 / 8 & 24) + a1); // 0x4100fa
    *v3 = *v3 | (int64_t)len << v2 % 64;
    return 0;
}
// Address range: 0x410120 - 0x4108e6
int64_t function_410120(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = a4; // 0x410141
    int64_t v3 = a6; // 0x410141
    int64_t v4; // 0x410120
    int64_t v5; // 0x410120
    int64_t v6; // 0x410120
    int64_t v7; // 0x410120
    int64_t v8; // 0x410120
    bool v9; // 0x410120
    if ((a7 & 0x400000) == 0) {
        goto lab_0x410165;
    } else {
        int64_t v10 = v9 ? -1 : 1;
        int64_t v11 = (int64_t)"upper"; // 0x410120
        int64_t v12 = a6; // 0x410120
        unsigned char v13 = *(char *)v12; // 0x410150
        char v14 = *(char *)v11; // 0x410150
        v2 = 5;
        char v15 = v14; // 0x410150
        bool v16 = false; // 0x410150
        while (v13 == v14) {
            // 0x410143
            v11 += v10;
            v12 += v10;
            v15 = v13;
            v16 = true;
            if (v2 == 0) {
                // break -> 
                break;
            }
            v13 = *(char *)v12;
            v14 = *(char *)v11;
            v2--;
            v15 = v14;
            v16 = false;
        }
        unsigned char v17 = v15;
        v3 = (int64_t)"alpha";
        int64_t v18 = (int64_t)"lower"; // 0x410159
        int64_t v19 = a6; // 0x410159
        if ((v13 >= v17 && !v16) != v13 < v17) {
            unsigned char v20 = *(char *)v19; // 0x410263
            char v21 = *(char *)v18; // 0x410263
            int64_t v22 = 5; // 0x410263
            char v23 = v21; // 0x410263
            bool v24 = false; // 0x410263
            while (v20 == v21) {
                // 0x410256
                v18 += v10;
                v19 += v10;
                v23 = v20;
                v24 = true;
                if (v22 == 0) {
                    // break -> 
                    break;
                }
                v20 = *(char *)v19;
                v21 = *(char *)v18;
                v22--;
                v23 = v21;
                v24 = false;
            }
            unsigned char v25 = v23;
            int64_t v26 = !((v20 < v25 | v24)) == v20 < v25 ? (int64_t)"alpha" : a6; // 0x410275
            v6 = a3;
            v8 = v22;
            v4 = v26;
            v7 = v22;
            v5 = v26;
            if (v22 != v1) {
                goto lab_0x410175;
            } else {
                goto lab_0x410285;
            }
        } else {
            goto lab_0x410165;
        }
    }
  lab_0x410165:
    // 0x410165
    v6 = a3;
    v8 = v2;
    v4 = v3;
    v7 = v1;
    v5 = v3;
    if (v2 == v1) {
        goto lab_0x410285;
    } else {
        goto lab_0x410175;
    }
  lab_0x410285:;
    int64_t v27 = 2 * v7 | 1; // 0x410285
    int64_t * v28 = (int64_t *)a3; // 0x41029e
    int64_t * mem = realloc(v28, 8 * (int32_t)v27); // 0x41029e
    if (mem == NULL) {
        // 0x410206
        return 12;
    }
    int64_t v29 = (int64_t)mem; // 0x41029e
    *v28 = v29;
    *a5 = v27;
    v6 = v29;
    v8 = v7;
    v4 = v5;
    goto lab_0x410175;
  lab_0x410175:
    // 0x410175
    *(int64_t *)a4 = v8 + 1;
    char * name = (char *)v4; // 0x410184
    *(int64_t *)(8 * v8 + v6) = (int64_t)wctype(name);
    int64_t v30 = v9 ? -1 : 1;
    int64_t v31 = (int64_t)"alnum"; // 0x410120
    int64_t v32 = v4; // 0x410120
    int64_t v33 = 6; // 0x410120
    unsigned char v34 = *(char *)v32; // 0x41019a
    char v35 = *(char *)v31; // 0x41019a
    char v36 = v35; // 0x41019a
    bool v37 = false; // 0x41019a
    while (v34 == v35) {
        int64_t v38 = v33 - 1; // 0x41019a
        v31 += v30;
        v32 += v30;
        v33 = v38;
        v36 = v34;
        v37 = true;
        if (v38 == 0) {
            // break -> 
            break;
        }
        v34 = *(char *)v32;
        v35 = *(char *)v31;
        v36 = v35;
        v37 = false;
    }
    unsigned char v39 = v36;
    int64_t v40 = (int64_t)"cntrl"; // 0x4101a3
    int64_t v41 = v4; // 0x4101a3
    int64_t v42 = 6; // 0x4101a3
    if ((v34 >= v39 && !v37) == v34 < v39) {
        int64_t v43 = (int64_t)*__ctype_b_loc(); // 0x410224
        if (a1 != 0) {
            int64_t v44 = 0;
            unsigned char v45; // 0x41044e
            unsigned char v46; // 0x410120
            int64_t * v47; // 0x410463
            if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                // 0x41044e
                v45 = *(char *)(v44 + a1);
                v46 = v45 % 64;
                v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
            }
            int64_t v48 = v44 + 1; // 0x410471
            while (v44 != 255) {
                // 0x410448
                v44 = v48;
                if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                    // 0x41044e
                    v45 = *(char *)(v44 + a1);
                    v46 = v45 % 64;
                    v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                    *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
                }
                // 0x410467
                v48 = v44 + 1;
            }
        } else {
            int64_t v49 = 0;
            int64_t * v50; // 0x410243
            if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                // 0x410236
                v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                *v50 = *v50 | 1 << v49 % 64;
            }
            int64_t v51 = v49 + 1; // 0x410252
            while (v49 != 255) {
                // 0x410230
                v49 = v51;
                if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                    // 0x410236
                    v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                    *v50 = *v50 | 1 << v49 % 64;
                }
                // 0x410247
                v51 = v49 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v52 = *(char *)v41; // 0x4101b2
    char v53 = *(char *)v40; // 0x4101b2
    char v54 = v53; // 0x4101b2
    bool v55 = false; // 0x4101b2
    while (v52 == v53) {
        int64_t v56 = v42 - 1; // 0x4101b2
        v40 += v30;
        v41 += v30;
        v42 = v56;
        v54 = v52;
        v55 = true;
        if (v56 == 0) {
            // break -> 
            break;
        }
        v52 = *(char *)v41;
        v53 = *(char *)v40;
        v54 = v53;
        v55 = false;
    }
    unsigned char v57 = v54;
    int64_t v58 = (int64_t)"lower"; // 0x4101bb
    int64_t v59 = v4; // 0x4101bb
    int64_t v60 = 6; // 0x4101bb
    if ((v52 >= v57 && !v55) == v52 < v57) {
        int64_t v61 = (int64_t)*__ctype_b_loc(); // 0x4101cd
        if (a1 != 0) {
            int64_t v62 = 0;
            unsigned char v63; // 0x410486
            unsigned char v64; // 0x410120
            int64_t * v65; // 0x41049b
            if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                // 0x410486
                v63 = *(char *)(v62 + a1);
                v64 = v63 % 64;
                v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
            }
            int64_t v66 = v62 + 1; // 0x4104a9
            while (v62 != 255) {
                // 0x410480
                v62 = v66;
                if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                    // 0x410486
                    v63 = *(char *)(v62 + a1);
                    v64 = v63 % 64;
                    v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                    *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
                }
                // 0x41049f
                v66 = v62 + 1;
            }
        } else {
            int64_t v67 = 0;
            int64_t * v68; // 0x4101f3
            if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                // 0x4101e6
                v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                *v68 = *v68 | 1 << v67 % 64;
            }
            int64_t v69 = v67 + 1; // 0x410202
            while (v67 != 255) {
                // 0x4101e0
                v67 = v69;
                if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                    // 0x4101e6
                    v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                    *v68 = *v68 | 1 << v67 % 64;
                }
                // 0x4101f7
                v69 = v67 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v70 = *(char *)v59; // 0x4102d1
    char v71 = *(char *)v58; // 0x4102d1
    char v72 = v71; // 0x4102d1
    bool v73 = false; // 0x4102d1
    while (v70 == v71) {
        int64_t v74 = v60 - 1; // 0x4102d1
        v58 += v30;
        v59 += v30;
        v60 = v74;
        v72 = v70;
        v73 = true;
        if (v74 == 0) {
            // break -> 
            break;
        }
        v70 = *(char *)v59;
        v71 = *(char *)v58;
        v72 = v71;
        v73 = false;
    }
    unsigned char v75 = v72;
    int64_t v76 = (int64_t)"space"; // 0x4102da
    int64_t v77 = v4; // 0x4102da
    int64_t v78 = 6; // 0x4102da
    if ((v70 >= v75 && !v73) == v70 < v75) {
        int64_t v79 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v80 = 0;
            unsigned char v81; // 0x4104bf
            unsigned char v82; // 0x410120
            int64_t * v83; // 0x4104d4
            if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                // 0x4104bf
                v81 = *(char *)(v80 + a1);
                v82 = v81 % 64;
                v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
            }
            int64_t v84 = v80 + 1; // 0x4104e2
            while (v80 != 255) {
                // 0x4104b8
                v80 = v84;
                if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                    // 0x4104bf
                    v81 = *(char *)(v80 + a1);
                    v82 = v81 % 64;
                    v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                    *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
                }
                // 0x4104d8
                v84 = v80 + 1;
            }
        } else {
            int64_t v85 = 0;
            int64_t * v86; // 0x41036c
            if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                // 0x41035f
                v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                *v86 = *v86 | 1 << v85 % 64;
            }
            int64_t v87 = v85 + 1; // 0x41037b
            while (v85 != 255) {
                // 0x410358
                v85 = v87;
                if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                    // 0x41035f
                    v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                    *v86 = *v86 | 1 << v85 % 64;
                }
                // 0x410370
                v87 = v85 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v88 = *(char *)v77; // 0x4102e9
    char v89 = *(char *)v76; // 0x4102e9
    char v90 = v89; // 0x4102e9
    bool v91 = false; // 0x4102e9
    while (v88 == v89) {
        // 0x4102dc
        v78--;
        v76 += v30;
        v77 += v30;
        v90 = v88;
        v91 = true;
        if (v78 == 0) {
            // break -> 
            break;
        }
        v88 = *(char *)v77;
        v89 = *(char *)v76;
        v90 = v89;
        v91 = false;
    }
    unsigned char v92 = v90;
    int64_t v93 = (int64_t)"alpha"; // 0x4102f2
    int64_t v94 = v4; // 0x4102f2
    int64_t v95 = 6; // 0x4102f2
    if ((v88 >= v92 && !v91) == v88 < v92) {
        int64_t v96 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v97 = 0;
            unsigned char v98; // 0x410647
            unsigned char v99; // 0x410120
            int64_t * v100; // 0x41065c
            if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                // 0x410647
                v98 = *(char *)(v97 + a1);
                v99 = v98 % 64;
                v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
            }
            int64_t v101 = v97 + 1; // 0x41066a
            while (v97 != 255) {
                // 0x410640
                v97 = v101;
                if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                    // 0x410647
                    v98 = *(char *)(v97 + a1);
                    v99 = v98 % 64;
                    v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                    *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
                }
                // 0x410660
                v101 = v97 + 1;
            }
        } else {
            int64_t v102 = 0;
            int64_t * v103; // 0x410324
            if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                // 0x410317
                v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                *v103 = *v103 | 1 << v102 % 64;
            }
            int64_t v104 = v102 + 1; // 0x410333
            while (v102 != 255) {
                // 0x410310
                v102 = v104;
                if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                    // 0x410317
                    v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                    *v103 = *v103 | 1 << v102 % 64;
                }
                // 0x410328
                v104 = v102 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v105 = *(char *)v94; // 0x41038f
    char v106 = *(char *)v93; // 0x41038f
    char v107 = v106; // 0x41038f
    bool v108 = false; // 0x41038f
    while (v105 == v106) {
        int64_t v109 = v95 - 1; // 0x41038f
        v93 += v30;
        v94 += v30;
        v95 = v109;
        v107 = v105;
        v108 = true;
        if (v109 == 0) {
            // break -> 
            break;
        }
        v105 = *(char *)v94;
        v106 = *(char *)v93;
        v107 = v106;
        v108 = false;
    }
    unsigned char v110 = v107;
    int64_t v111 = (int64_t)"digit"; // 0x410398
    int64_t v112 = v4; // 0x410398
    int64_t v113 = 6; // 0x410398
    if ((v105 >= v110 && !v108) == v105 < v110) {
        int64_t v114 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v115 = 0;
            unsigned char v116; // 0x410614
            unsigned char v117; // 0x410120
            int64_t * v118; // 0x410629
            if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                // 0x410614
                v116 = *(char *)(v115 + a1);
                v117 = v116 % 64;
                v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
            }
            int64_t v119 = v115 + 1; // 0x410637
            while (v115 != 255) {
                // 0x41060d
                v115 = v119;
                if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                    // 0x410614
                    v116 = *(char *)(v115 + a1);
                    v117 = v116 % 64;
                    v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                    *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
                }
                // 0x41062d
                v119 = v115 + 1;
            }
        } else {
            int64_t v120 = 0;
            int64_t * v121; // 0x41042c
            if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                // 0x41041f
                v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                *v121 = *v121 | 1 << v120 % 64;
            }
            int64_t v122 = v120 + 1; // 0x41043b
            while (v120 != 255) {
                // 0x410418
                v120 = v122;
                if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                    // 0x41041f
                    v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                    *v121 = *v121 | 1 << v120 % 64;
                }
                // 0x410430
                v122 = v120 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v123 = *(char *)v112; // 0x4103a7
    char v124 = *(char *)v111; // 0x4103a7
    char v125 = v124; // 0x4103a7
    bool v126 = false; // 0x4103a7
    while (v123 == v124) {
        // 0x41039a
        v113--;
        v111 += v30;
        v112 += v30;
        v125 = v123;
        v126 = true;
        if (v113 == 0) {
            // break -> 
            break;
        }
        v123 = *(char *)v112;
        v124 = *(char *)v111;
        v125 = v124;
        v126 = false;
    }
    unsigned char v127 = v125;
    int64_t v128 = (int64_t)"print"; // 0x4103b0
    int64_t v129 = v4; // 0x4103b0
    int64_t v130 = 6; // 0x4103b0
    if ((v123 >= v127 && !v126) == v123 < v127) {
        int64_t v131 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v132 = 0;
            unsigned char v133; // 0x41067a
            unsigned char v134; // 0x410120
            int64_t * v135; // 0x41068f
            if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                // 0x41067a
                v133 = *(char *)(v132 + a1);
                v134 = v133 % 64;
                v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
            }
            int64_t v136 = v132 + 1; // 0x41069d
            while (v132 != 255) {
                // 0x410673
                v132 = v136;
                if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                    // 0x41067a
                    v133 = *(char *)(v132 + a1);
                    v134 = v133 % 64;
                    v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                    *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
                }
                // 0x410693
                v136 = v132 + 1;
            }
        } else {
            int64_t v137 = 0;
            int64_t * v138; // 0x4103e4
            if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                // 0x4103d7
                v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                *v138 = *v138 | 1 << v137 % 64;
            }
            int64_t v139 = v137 + 1; // 0x4103f3
            while (v137 != 255) {
                // 0x4103d0
                v137 = v139;
                if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                    // 0x4103d7
                    v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                    *v138 = *v138 | 1 << v137 % 64;
                }
                // 0x4103e8
                v139 = v137 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v140 = *(char *)v129; // 0x4104f6
    char v141 = *(char *)v128; // 0x4104f6
    char v142 = v141; // 0x4104f6
    bool v143 = false; // 0x4104f6
    while (v140 == v141) {
        int64_t v144 = v130 - 1; // 0x4104f6
        v128 += v30;
        v129 += v30;
        v130 = v144;
        v142 = v140;
        v143 = true;
        if (v144 == 0) {
            // break -> 
            break;
        }
        v140 = *(char *)v129;
        v141 = *(char *)v128;
        v142 = v141;
        v143 = false;
    }
    unsigned char v145 = v142;
    int64_t v146 = (int64_t)"upper"; // 0x4104ff
    int64_t v147 = v4; // 0x4104ff
    int64_t v148 = 6; // 0x4104ff
    if ((v140 >= v145 && !v143) == v140 < v145) {
        int64_t v149 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v150 = 0;
            unsigned char v151; // 0x410851
            unsigned char v152; // 0x410120
            int64_t * v153; // 0x410866
            if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                // 0x410851
                v151 = *(char *)(v150 + a1);
                v152 = v151 % 64;
                v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
            }
            int64_t v154 = v150 + 1; // 0x410874
            while (v150 != 255) {
                // 0x41084a
                v150 = v154;
                if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                    // 0x410851
                    v151 = *(char *)(v150 + a1);
                    v152 = v151 % 64;
                    v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                    *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
                }
                // 0x41086a
                v154 = v150 + 1;
            }
        } else {
            int64_t v155 = 0;
            int64_t * v156; // 0x410534
            if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                // 0x410527
                v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                *v156 = *v156 | 1 << v155 % 64;
            }
            int64_t v157 = v155 + 1; // 0x410543
            while (v155 != 255) {
                // 0x410520
                v155 = v157;
                if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                    // 0x410527
                    v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                    *v156 = *v156 | 1 << v155 % 64;
                }
                // 0x410538
                v157 = v155 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v158 = *(char *)v147; // 0x410557
    char v159 = *(char *)v146; // 0x410557
    char v160 = v159; // 0x410557
    bool v161 = false; // 0x410557
    while (v158 == v159) {
        int64_t v162 = v148 - 1; // 0x410557
        v146 += v30;
        v147 += v30;
        v148 = v162;
        v160 = v158;
        v161 = true;
        if (v162 == 0) {
            // break -> 
            break;
        }
        v158 = *(char *)v147;
        v159 = *(char *)v146;
        v160 = v159;
        v161 = false;
    }
    unsigned char v163 = v160;
    int64_t v164 = (int64_t)"blank"; // 0x410560
    int64_t v165 = v4; // 0x410560
    int64_t v166 = 6; // 0x410560
    if ((v158 >= v163 && !v161) == v158 < v163) {
        int64_t v167 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v168 = 0;
            unsigned char v169; // 0x4108bb
            unsigned char v170; // 0x410120
            int64_t * v171; // 0x4108d0
            if (*(char *)(2 * v168 + v167) % 2 != 0) {
                // 0x4108bb
                v169 = *(char *)(v168 + a1);
                v170 = v169 % 64;
                v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
            }
            int64_t v172 = v168 + 1; // 0x4108df
            while (v168 != 255) {
                // 0x4108b4
                v168 = v172;
                if (*(char *)(2 * v168 + v167) % 2 != 0) {
                    // 0x4108bb
                    v169 = *(char *)(v168 + a1);
                    v170 = v169 % 64;
                    v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                    *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
                }
                // 0x4108d4
                v172 = v168 + 1;
            }
        } else {
            int64_t v173 = 0;
            int64_t * v174; // 0x41058e
            if (*(char *)(2 * v173 + v167) % 2 != 0) {
                // 0x410581
                v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                *v174 = *v174 | 1 << v173 % 64;
            }
            int64_t v175 = v173 + 1; // 0x41059d
            while (v173 != 255) {
                // 0x41057a
                v173 = v175;
                if (*(char *)(2 * v173 + v167) % 2 != 0) {
                    // 0x410581
                    v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                    *v174 = *v174 | 1 << v173 % 64;
                }
                // 0x410592
                v175 = v173 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v176 = *(char *)v165; // 0x4105bb
    char v177 = *(char *)v164; // 0x4105bb
    char v178 = v177; // 0x4105bb
    bool v179 = false; // 0x4105bb
    while (v176 == v177) {
        int64_t v180 = v166 - 1; // 0x4105bb
        v164 += v30;
        v165 += v30;
        v166 = v180;
        v178 = v176;
        v179 = true;
        if (v180 == 0) {
            // break -> 
            break;
        }
        v176 = *(char *)v165;
        v177 = *(char *)v164;
        v178 = v177;
        v179 = false;
    }
    unsigned char v181 = v178;
    int64_t v182 = (int64_t)"graph"; // 0x4105c4
    int64_t v183 = v4; // 0x4105c4
    int64_t v184 = 6; // 0x4105c4
    if ((v176 >= v181 && !v179) == v176 < v181) {
        int64_t v185 = (int64_t)*__ctype_b_loc(); // 0x4105d6
        if (a1 != 0) {
            int64_t v186 = 0;
            unsigned char v187; // 0x410888
            unsigned char v188; // 0x410120
            int64_t * v189; // 0x41089d
            if (*(char *)(2 * v186 + v185) % 2 != 0) {
                // 0x410888
                v187 = *(char *)(v186 + a1);
                v188 = v187 % 64;
                v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
            }
            int64_t v190 = v186 + 1; // 0x4108ab
            while (v186 != 255) {
                // 0x410882
                v186 = v190;
                if (*(char *)(2 * v186 + v185) % 2 != 0) {
                    // 0x410888
                    v187 = *(char *)(v186 + a1);
                    v188 = v187 % 64;
                    v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                    *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
                }
                // 0x4108a1
                v190 = v186 + 1;
            }
        } else {
            int64_t v191 = 0;
            int64_t * v192; // 0x4105f5
            if (*(char *)(2 * v191 + v185) % 2 != 0) {
                // 0x4105e8
                v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                *v192 = *v192 | 1 << v191 % 64;
            }
            int64_t v193 = v191 + 1; // 0x410604
            while (v191 != 255) {
                // 0x4105e2
                v191 = v193;
                if (*(char *)(2 * v191 + v185) % 2 != 0) {
                    // 0x4105e8
                    v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                    *v192 = *v192 | 1 << v191 % 64;
                }
                // 0x4105f9
                v193 = v191 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    unsigned char v194 = *(char *)v183; // 0x4106b1
    char v195 = *(char *)v182; // 0x4106b1
    char v196 = v195; // 0x4106b1
    bool v197 = false; // 0x4106b1
    while (v194 == v195) {
        int64_t v198 = v184 - 1; // 0x4106b1
        v182 += v30;
        v183 += v30;
        v184 = v198;
        v196 = v194;
        v197 = true;
        if (v198 == 0) {
            // break -> 
            break;
        }
        v194 = *(char *)v183;
        v195 = *(char *)v182;
        v196 = v195;
        v197 = false;
    }
    unsigned char v199 = v196;
    if ((v194 >= v199 && !v197) == v194 < v199) {
        int64_t v200 = (int64_t)*__ctype_b_loc(); // 0x4106c8
        if (a1 != 0) {
            int64_t v201 = 0;
            unsigned char v202; // 0x410708
            unsigned char v203; // 0x410120
            int64_t * v204; // 0x41071d
            if (*(int16_t *)(2 * v201 + v200) < 0) {
                // 0x410708
                v202 = *(char *)(v201 + a1);
                v203 = v202 % 64;
                v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
            }
            int64_t v205 = v201 + 1; // 0x41072b
            while (v201 != 255) {
                // 0x410701
                v201 = v205;
                if (*(int16_t *)(2 * v201 + v200) < 0) {
                    // 0x410708
                    v202 = *(char *)(v201 + a1);
                    v203 = v202 % 64;
                    v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                    *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
                }
                // 0x410721
                v205 = v201 + 1;
            }
        } else {
            int64_t v206 = 0;
            int64_t * v207; // 0x4106e4
            if (*(int16_t *)(2 * v206 + v200) < 0) {
                // 0x4106d7
                v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                *v207 = *v207 | 1 << v206 % 64;
            }
            int64_t v208 = v206 + 1; // 0x4106f3
            while (v206 != 255) {
                // 0x4106d0
                v206 = v208;
                if (*(int16_t *)(2 * v206 + v200) < 0) {
                    // 0x4106d7
                    v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                    *v207 = *v207 | 1 << v206 % 64;
                }
                // 0x4106e8
                v208 = v206 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    // 0x410732
    if (strcmp(name, "punct") == 0) {
        int64_t v209 = (int64_t)*__ctype_b_loc(); // 0x41074f
        if (a1 != 0) {
            int64_t v210 = 0;
            unsigned char v211; // 0x41078d
            unsigned char v212; // 0x410120
            int64_t * v213; // 0x4107a2
            if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                // 0x41078d
                v211 = *(char *)(v210 + a1);
                v212 = v211 % 64;
                v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
            }
            int64_t v214 = v210 + 1; // 0x4107b0
            while (v210 != 255) {
                // 0x410787
                v210 = v214;
                if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                    // 0x41078d
                    v211 = *(char *)(v210 + a1);
                    v212 = v211 % 64;
                    v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                    *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
                }
                // 0x4107a6
                v214 = v210 + 1;
            }
        } else {
            int64_t v215 = 0;
            int64_t * v216; // 0x41076a
            if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                // 0x41075d
                v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                *v216 = *v216 | 1 << v215 % 64;
            }
            int64_t v217 = v215 + 1; // 0x410779
            while (v215 != 255) {
                // 0x410757
                v215 = v217;
                if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                    // 0x41075d
                    v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                    *v216 = *v216 | 1 << v215 % 64;
                }
                // 0x41076e
                v217 = v215 + 1;
            }
        }
        // 0x410206
        return 0;
    }
    // 0x4107b7
    if (strcmp(name, "xdigit") != 0) {
        // 0x410206
        return 4;
    }
    int64_t v218 = (int64_t)*__ctype_b_loc() + 1;
    if (a1 == 0) {
        int64_t v219 = 0;
        int64_t * v220; // 0x4107f0
        if ((*(char *)(2 * v219 + v218) & 16) != 0) {
            // 0x4107e3
            v220 = (int64_t *)(8 * (v219 >> 6) + a2);
            *v220 = *v220 | 1 << v219 % 64;
        }
        int64_t v221 = v219 + 1; // 0x4107ff
        while (v219 != 255) {
            // 0x4107dc
            v219 = v221;
            if ((*(char *)(2 * v219 + v218) & 16) != 0) {
                // 0x4107e3
                v220 = (int64_t *)(8 * (v219 >> 6) + a2);
                *v220 = *v220 | 1 << v219 % 64;
            }
            // 0x4107f4
            v221 = v219 + 1;
        }
        // 0x410206
        return 0;
    }
    int64_t v222 = 0;
    unsigned char v223; // 0x410814
    unsigned char v224; // 0x410120
    int64_t * v225; // 0x410829
    if ((*(char *)(2 * v222 + v218) & 16) != 0) {
        // 0x410814
        v223 = *(char *)(v222 + a1);
        v224 = v223 % 64;
        v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
        *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
    }
    int64_t v226 = v222 + 1; // 0x410837
    while (v222 != 255) {
        // 0x41080d
        v222 = v226;
        if ((*(char *)(2 * v222 + v218) & 16) != 0) {
            // 0x410814
            v223 = *(char *)(v222 + a1);
            v224 = v223 % 64;
            v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
            *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
        }
        // 0x41082d
        v226 = v222 + 1;
    }
    // 0x410206
    return 0;
}
// Address range: 0x4108f0 - 0x410b25
int64_t function_4108f0(int64_t a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-96, 0x41091d
    int64_t * mem = calloc(32, 1); // 0x410926
    if (mem == NULL) {
        // 0x410ac0
        *(int32_t *)a6 = 12;
        // 0x410a99
        return 0;
    }
    int64_t * mem2 = calloc(80, 1); // 0x410941
    if (mem2 == NULL) {
        // 0x410ae0
        free(mem);
        *(int32_t *)a6 = 12;
        // 0x410a99
        return 0;
    }
    int64_t v2 = (int64_t)mem; // 0x410926
    int64_t v3 = (int64_t)mem2; // 0x410941
    char * v4 = (char *)(v3 + 32); // 0x410956
    unsigned char v5 = (char)a5; // 0x41095a
    *v4 = *v4 & -2 | v5 % 2;
    int64_t v6 = function_410120(a2, v2, v3 + 24, v3 + 72, &v1, (int64_t)a3, 0); // 0x410983
    int32_t v7 = v6; // 0x41098a
    if (v7 != 0) {
        // 0x410b00
        free(mem);
        function_40bef0(v3);
        *(int32_t *)a6 = v7;
        // 0x410a99
        return 0;
    }
    // 0x410992
    int64_t v8; // 0x4108f0
    char v9 = *(char *)&v8; // 0x410992
    int64_t v10 = v9; // 0x410992
    v8 = v10;
    v8 = v10;
    int64_t v11 = (int64_t)a4; // 0x41099e
    if (v9 != 0) {
        int64_t v12 = v8;
        v11++;
        char v13 = *(char *)v11; // 0x4109cd
        v8 = v13;
        int64_t * v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2); // 0x4109d2
        *v14 = *v14 | 1 << v12 % 64;
        while (v13 != 0) {
            v12 = v8;
            v11++;
            v13 = *(char *)v11;
            v8 = v13;
            v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2);
            *v14 = *v14 | 1 << v12 % 64;
        }
    }
    if (v5 != 0) {
        int64_t v15 = v2;
        int64_t * v16 = (int64_t *)v15; // 0x4109e6
        *v16 = -1 - *v16;
        int64_t v17 = v15 + 8; // 0x4109f0
        while (v2 + 24 != v15) {
            // 0x4109e6
            v15 = v17;
            v16 = (int64_t *)v15;
            *v16 = -1 - *v16;
            v17 = v15 + 8;
        }
    }
    int32_t * v18 = (int32_t *)(a1 + 180); // 0x4109f2
    if (*v18 >= 2) {
        int64_t v19 = *(int64_t *)(a1 + 120); // 0x4109fb
        v8 = v19;
        *mem = *mem & *(int64_t *)v19;
        int64_t v20 = 0; // 0x410a09
        v20 += 8;
        int64_t * v21 = (int64_t *)(v20 + v2); // 0x410a05
        *v21 = *v21 & *(int64_t *)(v20 + v19);
        while (v20 != 24) {
            // 0x410a01
            v20 += 8;
            v21 = (int64_t *)(v20 + v2);
            *v21 = *v21 & *(int64_t *)(v20 + v8);
        }
    }
    int64_t v22 = a1 + 112; // 0x410a13
    int64_t v23 = a1 + 128; // 0x410a17
    v8 = 0;
    int64_t v24; // bp-88, 0x4108f0
    int64_t v25 = &v24; // 0x410a22
    v24 = v2;
    int64_t result = function_40d500(v22, v23, 0, 0, v25); // 0x410a37
    if (result != 0) {
        // 0x410a44
        if (*v18 < 2) {
            // 0x410ad0
            function_40bef0(v3);
            // 0x410a99
            return result;
        }
        char * v26 = (char *)(a1 + 176); // 0x410a51
        *v26 = *v26 | 2;
        v24 = v3;
        int64_t v27 = function_40d500(v22, v23, 0, 0, v25); // 0x410a71
        if (v27 != 0) {
            // 0x410a7b
            int64_t v28; // bp-72, 0x4108f0
            int64_t result2 = function_40d500(v22, v23, (int32_t)result, (int32_t)v27, (int64_t)&v28); // 0x410a91
            // 0x410a99
            return result2;
        }
    }
    // 0x410ab0
    free(mem);
    function_40bef0(v3);
    // 0x410ac0
    *(int32_t *)a6 = 12;
    // 0x410a99
    return 0;
}
// Address range: 0x410b30 - 0x411008
int64_t function_410b30(int64_t result, int64_t result2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(result + 180); // 0x410b47
    int32_t v3 = 0; // 0x410b52
    if (*v2 == 1) {
        // 0x410b54
        v3 = (int32_t)(*(int64_t *)(result + 24) / 0x400000) % 2;
    }
    // 0x410b63
    if (result2 < 1) {
        // 0x410d23
        return result;
    }
    char * v4 = (char *)(result + 26);
    int64_t * v5 = (int64_t *)(result + 16);
    char wstr; // bp-312, 0x410b30
    int64_t v6 = &wstr;
    char ps; // bp-320, 0x410b30
    int64_t v7 = &ps;
    int64_t v8 = a3; // 0x410b81
    int64_t v9 = 0; // 0x410b81
    int64_t v10 = result; // 0x410b81
    int64_t v11; // 0x410b30
    int64_t v12; // 0x410b30
    int64_t v13; // 0x410b30
    int64_t v14; // 0x410b30
    int64_t v15; // 0x410b30
    int64_t v16; // 0x410b30
    unsigned char v17; // 0x410be4
    int64_t v18; // 0x410d39
    while (true) {
      lab_0x410bc1_2:
        // 0x410bc1
        v13 = v10;
        v11 = v9;
        int64_t v19 = *(int64_t *)(8 * v11 + v8); // 0x410bc9
        v1 = v13;
        int64_t v20 = 16 * v19; // 0x410bd7
        v16 = v20 + v13;
        v17 = *(char *)(v16 + 8);
        if (v17 != 1) {
            int64_t v21 = v17; // 0x410be4
            char * v22 = NULL; // 0x410b30
            int64_t v23 = v13; // 0x410b30
            switch (v17) {
                case 3: {
                    int64_t v24 = (int64_t)v22; // 0x410e88
                    int64_t v25 = *(int64_t *)(*(int64_t *)(v23 + v20) + v24); // 0x410e8d
                    int64_t v26 = 0; // 0x410e99
                    int64_t v27 = 8 * v24;
                    int64_t v28 = v23;
                    int64_t v29 = v28; // 0x410ea4
                    char * v30; // 0x410b30
                    char * v31; // 0x410b30
                    int64_t v32; // 0x410eb4
                    int32_t v33; // 0x410ecb
                    if ((1 << v26 % 64 & v25) != 0) {
                        // 0x410ea6
                        v31 = (char *)(v27 + a4);
                        *v31 = 1;
                        v29 = v28;
                        if (v3 != 0) {
                            // 0x410eb4
                            v32 = v27 + 128;
                            v30 = v31;
                            if ((int32_t)v32 < 384) {
                                // 0x410ec3
                                v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                v30 = (char *)((int64_t)v33 + a4);
                            }
                            // 0x410ed2
                            *v30 = 1;
                            v29 = v32 & 0xffffffff;
                        }
                    }
                    int64_t v34 = v29;
                    int64_t v35 = v27 + 1; // 0x410ed9
                    v26 = v26 + 1 & 0xffffffff;
                    while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                        // 0x410ea0
                        v27 = v35;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x410ea6
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x410eb4
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x410ec3
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x410ed2
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x410ed5
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                    }
                    // 0x410ee3
                    v14 = v21;
                    v15 = v16;
                    v12 = v34;
                    while (v22 != (char *)24) {
                        // 0x410ef8
                        v1 = v34;
                        v22 = (char *)(v24 + 8);
                        v24 = (int64_t)v22;
                        v25 = *(int64_t *)(*(int64_t *)(v34 + v20) + v24);
                        v26 = 0;
                        v27 = 8 * v24;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x410ea6
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x410eb4
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x410ec3
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x410ed2
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x410ed5
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                        while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                            // 0x410ea0
                            v27 = v35;
                            v28 = v34;
                            v29 = v28;
                            if ((1 << v26 % 64 & v25) != 0) {
                                // 0x410ea6
                                v31 = (char *)(v27 + a4);
                                *v31 = 1;
                                v29 = v28;
                                if (v3 != 0) {
                                    // 0x410eb4
                                    v32 = v27 + 128;
                                    v30 = v31;
                                    if ((int32_t)v32 < 384) {
                                        // 0x410ec3
                                        v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                        v30 = (char *)((int64_t)v33 + a4);
                                    }
                                    // 0x410ed2
                                    *v30 = 1;
                                    v29 = v32 & 0xffffffff;
                                }
                            }
                            // 0x410ed5
                            v34 = v29;
                            v35 = v27 + 1;
                            v26 = v26 + 1 & 0xffffffff;
                        }
                        // 0x410ee3
                        v14 = v21;
                        v15 = v16;
                        v12 = v34;
                    }
                    goto lab_0x410baf;
                }
                case 6: {
                    // 0x410d35
                    v18 = *(int64_t *)v16;
                    if (*v2 < 2) {
                        goto lab_0x410d66;
                    } else {
                        // 0x410d45
                        if (*(int64_t *)(v18 + 72) != 0) {
                            goto lab_0x410e2c;
                        } else {
                            // 0x410d50
                            if (*(char *)(v18 + 32) % 2 != 0) {
                                goto lab_0x410e2c;
                            } else {
                                // 0x410d5b
                                if (*(int64_t *)(v18 + 64) != 0) {
                                    goto lab_0x410e2c;
                                } else {
                                    goto lab_0x410d66;
                                }
                            }
                        }
                    }
                }
                default: {
                    int64_t v36 = v21 & 253; // 0x410b9a
                    if (v36 == 5) {
                        // break -> 0x410f04
                        break;
                    }
                    // 0x410ba6
                    v14 = v36;
                    v15 = v16;
                    v12 = v13;
                    if (v17 == 2) {
                        int128_t v37 = __asm_movdqa(g22); // 0x410f80
                        __asm_movups(*(int128_t *)&v1, v37);
                        __asm_movups(*(int128_t *)(a4 + 16), v37);
                        __asm_movups(*(int128_t *)(a4 + 32), v37);
                        __asm_movups(*(int128_t *)(a4 + 48), v37);
                        __asm_movups(*(int128_t *)(a4 + 64), v37);
                        __asm_movups(*(int128_t *)(a4 + 80), v37);
                        __asm_movups(*(int128_t *)(a4 + 96), v37);
                        __asm_movups(*(int128_t *)(a4 + 112), v37);
                        __asm_movups(*(int128_t *)(a4 + 128), v37);
                        __asm_movups(*(int128_t *)(a4 + 144), v37);
                        __asm_movups(*(int128_t *)(a4 + 160), v37);
                        __asm_movups(*(int128_t *)(a4 + 176), v37);
                        __asm_movups(*(int128_t *)(a4 + 192), v37);
                        __asm_movups(*(int128_t *)(a4 + 208), v37);
                        __asm_movups(*(int128_t *)(a4 + 224), v37);
                        __asm_movups(*(int128_t *)(a4 + 240), v37);
                        goto lab_0x410fef;
                    }
                    goto lab_0x410baf;
                }
            }
        } else {
            char * v38 = (char *)v16; // 0x410bef
            int64_t v39 = (int64_t)*v38; // 0x410bef
            *(char *)(v39 + a4) = 1;
            if (v3 != 0) {
                int32_t v40 = *(int32_t *)(4 * v39 + (int64_t)*__ctype_tolower_loc()); // 0x410c0e
                *(char *)((int64_t)v40 + a4) = 1;
            }
            // 0x410c17
            v14 = v39;
            v15 = v16;
            v12 = v13;
            if ((*v4 & 64) == 0) {
                goto lab_0x410baf;
            } else {
                // 0x410c22
                v14 = v39;
                v15 = v16;
                v12 = v13;
                if (*v2 < 2) {
                    goto lab_0x410baf;
                } else {
                    // 0x410c2f
                    v1 = v20;
                    wstr = *v38;
                    int64_t v41 = v19 + 1; // 0x410c42
                    int64_t v42 = 1; // 0x410c4a
                    if (*v5 > v41) {
                        // 0x410c50
                        v42 = 1;
                        if ((*(int32_t *)(v16 + 24) & 0x2000ff) == 0x200001) {
                            int64_t v43 = v41; // 0x410c9e
                            int64_t v44; // bp-311, 0x410b30
                            int64_t v45 = &v44; // 0x410b30
                            int64_t v46 = v45 + 1; // 0x410c9a
                            v43++;
                            *(char *)v45 = *(char *)(v16 + 16);
                            while (*v5 > v43) {
                                int64_t v47 = 16 * v43 + v13; // 0x410c83
                                v45 = v46;
                                if ((*(int32_t *)(v47 + 8) & 0x2000ff) != 0x200001) {
                                    // break -> 0x410caf
                                    break;
                                }
                                v46 = v45 + 1;
                                v43++;
                                *(char *)v45 = *(char *)v47;
                            }
                            // 0x410caf
                            v42 = v46 - v6;
                        }
                    }
                    // 0x410cba
                    ps = 0;
                    int32_t wc; // bp-324, 0x410b30
                    int64_t v48 = function_40ab50((int64_t *)&wc, v6, v42); // 0x410cd5
                    v14 = v42;
                    v15 = v6;
                    v12 = &wc;
                    if (v48 != v42) {
                        goto lab_0x410baf;
                    } else {
                        uint32_t wc2 = towlower(wc); // 0x410ce7
                        int64_t v49 = wc2; // 0x410cf6
                        int32_t v50 = wcrtomb(&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps); // 0x410cf8
                        v14 = v7;
                        v15 = v49;
                        v12 = v6;
                        if (v50 == -1) {
                            goto lab_0x410baf;
                        } else {
                            int64_t v51 = v11 + 1; // 0x410d0c
                            *(char *)((int64_t)wstr + a4) = 1;
                            v8 = v7;
                            v9 = v51;
                            v10 = v6;
                            if (v51 >= v49) {
                                // 0x410d23
                                return result2;
                            }
                            goto lab_0x410bc1_2;
                        }
                    }
                }
            }
        }
    }
    if (v17 != 2) {
        // 0x410d23
    }
  lab_0x410baf:;
    int64_t v52 = v11 + 1; // 0x410bb4
    v8 = v14;
    v9 = v52;
    v10 = v12;
    if (v52 >= v15) {
        // 0x410d23
        return result2;
    }
    goto lab_0x410bc1_2;
  lab_0x410d66:;
    int64_t * v53 = (int64_t *)(v18 + 40); // 0x410d69
    int64_t v54 = *v53; // 0x410d69
    v14 = 6;
    v15 = v16;
    v12 = v13;
    if (v54 >= 0 == (v54 != 0)) {
        int64_t * v55 = (int64_t *)v18; // 0x410d8f
        int64_t v56 = 0; // 0x410d78
        ps = 0;
        int64_t v57 = 4 * v56; // 0x410d9d
        uint32_t wc3 = *(int32_t *)(*v55 + v57); // 0x410da5
        int32_t v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps); // 0x410da9
        int64_t v59 = v7; // 0x410db2
        int32_t v60; // 0x410dd5
        int64_t v61; // 0x410db4
        if (v58 != -1) {
            // 0x410db4
            v61 = wstr;
            *(char *)(v61 + a4) = 1;
            v59 = v61;
            if (v3 != 0) {
                // 0x410dc8
                v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                *(char *)((int64_t)v60 + a4) = 1;
                v59 = v61;
            }
        }
        int64_t v62 = wc3; // 0x410da5
        int64_t v63 = v59;
        int64_t v64 = v63; // 0x410de7
        int64_t v65 = v62; // 0x410de7
        uint32_t wc4; // 0x410dfd
        int64_t v66; // 0x410e0c
        int32_t v67; // 0x410e0e
        if ((*v4 & 64) != 0) {
            // 0x410de9
            v64 = v63;
            v65 = v62;
            if (*v2 >= 2) {
                // 0x410df6
                wc4 = towlower(*(int32_t *)(*v55 + v57));
                v66 = wc4;
                v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                v64 = v7;
                v65 = v66;
                if (v67 != -1) {
                    // 0x410e1d
                    *(char *)((int64_t)wstr + a4) = 1;
                    v64 = v7;
                    v65 = v66;
                }
            }
        }
        // 0x410d78
        v56++;
        v14 = v64;
        v15 = v65;
        v12 = v6;
        while (v56 < *v53) {
            // 0x410d86
            ps = 0;
            v57 = 4 * v56;
            wc3 = *(int32_t *)(*v55 + v57);
            v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps);
            v59 = v7;
            if (v58 != -1) {
                // 0x410db4
                v61 = wstr;
                *(char *)(v61 + a4) = 1;
                v59 = v61;
                if (v3 != 0) {
                    // 0x410dc8
                    v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                    *(char *)((int64_t)v60 + a4) = 1;
                    v59 = v61;
                }
            }
            // 0x410dde
            v62 = wc3;
            v63 = v59;
            v64 = v63;
            v65 = v62;
            if ((*v4 & 64) != 0) {
                // 0x410de9
                v64 = v63;
                v65 = v62;
                if (*v2 >= 2) {
                    // 0x410df6
                    wc4 = towlower(*(int32_t *)(*v55 + v57));
                    v66 = wc4;
                    v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                    v64 = v7;
                    v65 = v66;
                    if (v67 != -1) {
                        // 0x410e1d
                        *(char *)((int64_t)wstr + a4) = 1;
                        v64 = v7;
                        v65 = v66;
                    }
                }
            }
            // 0x410d78
            v56++;
            v14 = v64;
            v15 = v65;
            v12 = v6;
        }
    }
    goto lab_0x410baf;
    // 0x410bc1
    goto lab_0x410bc1_2;
  lab_0x410e2c:
    // 0x410e2c
    ps = 0;
    wstr = 0;
    if (function_40ab50(NULL, v7, 1) == -2) {
        // 0x410e5d
        *(char *)((int64_t)ps + a4) = 1;
    }
    char v68 = ps + 1; // 0x410e67
    ps = v68;
    v14 = 1;
    v15 = v7;
    v12 = 0;
    while (v68 != 0) {
        // 0x410e38
        wstr = 0;
        if (function_40ab50(NULL, v7, 1) == -2) {
            // 0x410e5d
            *(char *)((int64_t)ps + a4) = 1;
        }
        // 0x410e67
        v68 = ps + 1;
        ps = v68;
        v14 = 1;
        v15 = v7;
        v12 = 0;
    }
    goto lab_0x410baf;
  lab_0x410fef:;
    char * v69 = (char *)(result + 56); // 0x410ff4
    *v69 = *v69 | 1;
    // 0x410d23
    return result;
}
// Address range: 0x411010 - 0x411294
int64_t function_411010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a3 + a1; // 0x411018
    char v2 = *(char *)(v1 + 8); // 0x411022
    if (v2 == 7) {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x411138
        int64_t v4 = v3 + a5; // 0x41113c
        unsigned char v5 = *(char *)v4; // 0x41113c
        if (v5 < 194) {
            // 0x411060
            return 0;
        }
        uint64_t v6 = *(int64_t *)(a4 + 88); // 0x41114a
        uint64_t v7 = a5 + 1;
        if (v7 >= v6) {
            // 0x411060
            return 0;
        }
        int64_t v8 = v3 + v7;
        unsigned char v9 = *(char *)v8; // 0x41115b
        if (v5 < 224) {
            // 0x411233
            if (v9 == -65 || (v9 ^ -128) < 63) {
                // 0x411060
                return 2;
            }
            // 0x411060
            return 0;
        }
        int64_t v10; // 0x411010
        if (v5 < 240) {
            // 0x411173
            v10 = 3;
            if (v5 == -32 == v9 < 160) {
                // 0x411060
                return 0;
            }
        } else {
            if (v5 < 248) {
                // 0x411215
                v10 = 4;
                if (v5 == -16 == v9 < 144) {
                    // 0x411060
                    return 0;
                }
            } else {
                if (v5 < 252) {
                    // 0x41124f
                    v10 = 5;
                    if (v5 == -8 == v9 < 136) {
                        // 0x411060
                        return 0;
                    }
                } else {
                    if (v5 >= 254) {
                        // 0x411060
                        return 0;
                    }
                    // 0x411276
                    v10 = 6;
                    if (v5 == -4 == v9 < 132) {
                        // 0x411060
                        return 0;
                    }
                }
            }
        }
        // 0x41118c
        if (v6 < v10 + a5) {
            // 0x411060
            return 0;
        }
        // 0x411199
        if (v9 != -65 && (v9 ^ -128) >= 63) {
            // 0x411060
            return 0;
        }
        int64_t v11 = v8; // 0x4111be
        v11++;
        while (v10 + v4 != v11) {
            char v12 = *(char *)v11;
            if (v12 != -65 && (v12 ^ -128) >= 63) {
                // 0x411060
                return 0;
            }
            v11++;
        }
        // 0x411060
        return v10 & 0xffffffff;
    }
    // 0x411031
    if (*(int32_t *)(a4 + 144) == 1) {
        // 0x411060
        return 0;
    }
    int64_t v13 = function_40c840(a4, a5); // 0x411046
    int64_t v14 = v13 & 0xffffffff; // 0x41104b
    if (v2 == 5) {
        if ((int32_t)v13 < 2) {
            // 0x411060
            return 0;
        }
        if ((a5 & 64) == 0) {
            // 0x41107c
            if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 10) {
                // 0x411060
                return 0;
            }
        }
        // 0x411087
        if ((char)a5 > -1) {
            // 0x411060
            return v14 & 0xffffffff;
        }
        // 0x41108b
        if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 0) {
            // 0x411060
            return 0;
        }
        // 0x411060
        return v14 & 0xffffffff;
    }
    if (v2 == 6 != (int32_t)v13 > 1) {
        // 0x411060
        return 0;
    }
    int64_t v15 = *(int64_t *)v1; // 0x4110a0
    int64_t * v16 = (int64_t *)(v15 + 64); // 0x4110a3
    int64_t v17 = *v16; // 0x4110a3
    int64_t v18 = *(int64_t *)(v15 + 40); // 0x4110a7
    if (v17 != 0) {
        goto lab_0x4110bd;
    } else {
        // 0x4110b0
        if ((*(int64_t *)(v15 + 72) || v18) == 0) {
            goto lab_0x4111fd;
        } else {
            goto lab_0x4110bd;
        }
    }
  lab_0x411122_2:
    // 0x411122
    if (*(char *)(v15 + 32) % 2 == 0) {
        // 0x411060
        return v14 & 0xffffffff;
    }
    // 0x411060
    return 0;
  lab_0x4110bd:;
    uint32_t wc = *(int32_t *)(*(int64_t *)(a4 + 16) + 4 * a5); // 0x4110c1
    if (v18 < 1) {
        goto lab_0x4110ef;
    } else {
        int64_t v19 = *(int64_t *)v15; // 0x4110ca
        if (*(int32_t *)v19 == wc) {
            goto lab_0x411122_2;
        } else {
            int64_t v20 = 1; // 0x4110e6
            while (v18 != v20) {
                // 0x4110e0
                if (*(int32_t *)(4 * v20 + v19) == wc) {
                    goto lab_0x411122_2;
                }
                v20++;
            }
            goto lab_0x4110ef;
        }
    }
  lab_0x4110ef:;
    int64_t * v21 = (int64_t *)(v15 + 72); // 0x4110ef
    int64_t v22 = v17; // 0x4110f6
    if (*v21 < 1) {
        goto lab_0x4111cc;
    } else {
        int64_t v23 = 0; // 0x411100
        int64_t v24 = *(int64_t *)(v15 + 24); // 0x41110e
        while (iswctype(wc, (int32_t)*(int64_t *)(v24 + 8 * v23)) == 0) {
            // 0x411100
            v23++;
            if (v23 >= *v21) {
                // 0x4111c8
                v22 = *v16;
                goto lab_0x4111cc;
            }
            v24 = *(int64_t *)(v15 + 24);
        }
        goto lab_0x411122_2;
    }
  lab_0x4111fd:
    // 0x4111fd
    if (*(char *)(v15 + 32) % 2 != 0) {
        // 0x411060
        return v14 & 0xffffffff;
    }
    // 0x411060
    return 0;
  lab_0x4111cc:
    // 0x4111cc
    if (v22 >= 1) {
        int64_t v25 = 0; // 0x4111d7
        int64_t v26 = 4 * v25; // 0x4111e0
        if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
            // 0x4111e6
            if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                goto lab_0x411122_2;
            }
        }
        // 0x4111f4
        v25++;
        while (v25 != v22) {
            // 0x4111e0
            v26 = 4 * v25;
            if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
                // 0x4111e6
                if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                    goto lab_0x411122_2;
                }
            }
            // 0x4111f4
            v25++;
        }
    }
    goto lab_0x4111fd;
}
// Address range: 0x4112a0 - 0x4119bf
int64_t function_4112a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x4112a0
    int128_t v1; // 0x4112a0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x4112c1
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x4112c8
    int64_t v5 = *v4; // 0x4112c8
    int64_t v6 = *(int64_t *)(*(int64_t *)v3 + 16 * a3); // 0x4112d9
    int32_t * v7 = (int32_t *)(a1 + 224); // 0x4112eb
    int32_t result = 0; // bp-128, 0x4112f2
    int64_t v8 = (int64_t)*v7 + a6; // 0x4112fa
    int64_t * v9; // 0x4112a0
    int64_t v10; // 0x4112a0
    if (v8 < v5) {
        // 0x4112a0
        v9 = (int64_t *)(a2 + 16);
        v10 = a2;
    } else {
        int64_t v11 = v8 + 1; // 0x4118f0
        if (0x7fffffffffffffff - v5 < v11) {
            // 0x411766
            return 12;
        }
        uint64_t v12 = v11 + v5; // 0x411910
        if (v12 >= 0x2000000000000000) {
            // 0x411766
            return 12;
        }
        int64_t * v13 = (int64_t *)(a2 + 16);
        int64_t * mem = realloc((int64_t *)*v13, 8 * (int32_t)v12); // 0x41192a
        if (mem == NULL) {
            // 0x411766
            return 12;
        }
        int64_t v14 = (int64_t)mem; // 0x41192a
        *v13 = v14;
        *v4 = v12;
        memset((int64_t *)(8 * v5 + v14), 0, 8 * (int32_t)v11);
        v9 = v13;
        v10 = 0;
    }
    int64_t * v15 = (int64_t *)(a1 + 184); // 0x411306
    int64_t v16 = *v15; // 0x411306
    int32_t * v17 = (int32_t *)(a1 + 160); // 0x411313
    int32_t v18 = *v17; // 0x411313
    int64_t v19 = *v9; // 0x41131e
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x411327
    int64_t v21 = *v20; // 0x411327
    *v15 = v19;
    int128_t v22; // bp-120, 0x4112a0
    int32_t v23; // 0x4112a0
    int64_t v24; // 0x41135f
    if (v10 == 0) {
        // 0x411860
        *v20 = a4;
        v23 = function_40e5c0(a1, a4 - 1, v18);
        goto lab_0x411874;
    } else {
        // 0x411342
        *v20 = v10;
        v23 = function_40e5c0(a1, v10 - 1, v18);
        if (v10 == a4) {
            goto lab_0x411874;
        } else {
            // 0x41135f
            v24 = *(int64_t *)(v19 + 8 * v10);
            if (v24 == 0) {
                goto lab_0x411373;
            } else {
                // 0x411368
                if ((*(char *)(v24 + 104) & 64) != 0) {
                    int64_t v25 = function_40d930((int64_t)&v22, v24 + 8); // 0x41178f
                } else {
                    goto lab_0x411373;
                }
            }
        }
    }
  lab_0x411740_2:
    // 0x411740
    free(NULL);
    result = 12;
    int64_t v26; // 0x4112a0
    int64_t v27 = v26; // 0x41174d
    goto lab_0x411755_2;
  lab_0x4115b0_2:
    // 0x4115b0
    free(NULL);
    int32_t v52; // bp-124, 0x4112a0
    int32_t v53 = v52; // 0x4115c2
    result = v53;
    int128_t v54; // 0x411412
    int128_t v45 = v54; // 0x4115cc
    v27 = v26;
    if (v53 != 0) {
        goto lab_0x411755_2;
    } else {
        goto lab_0x41163c;
    }
  lab_0x4116ad_2:
    // 0x4116ad
    free((int64_t *)v26);
    int64_t v55 = *(int64_t *)(*v15 + 8 * a6); // 0x4116c7
    int64_t result2; // 0x4112a0
    int64_t v33; // 0x4112a0
    if (v55 == 0) {
        // 0x411988
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = 1;
    } else {
        // 0x4116d4
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = function_40c890(*(int64_t *)(v55 + 16), v55 + 24, a5) == 0;
    }
    // 0x411766
    return result2;
  lab_0x411460:;
    // 0x411460
    int64_t v56; // 0x4112a0
    int64_t v57 = v56;
    int64_t v58; // 0x4112a0
    if ((char)function_40e6b0(a1, v57, v58) == 0) {
        goto lab_0x41149f;
    } else {
        goto lab_0x41147d;
    }
  lab_0x41149f:;
    // 0x41149f
    int64_t v59; // 0x4112a0
    int64_t v60 = v59 + 1; // 0x41149f
    int64_t * v61; // 0x411416
    uint64_t v62 = *v61; // 0x4114a3
    int64_t v63 = v60; // 0x4114a7
    if (v60 >= v62) {
        // break -> 0x41181d
        goto lab_0x41181d;
    }
    goto lab_0x4114ad;
  lab_0x41147d:;
    // 0x41147d
    int64_t * v77; // 0x4112a0
    int64_t v92 = *v77; // 0x41147d
    int64_t v68; // 0x4114b5
    int64_t v93 = *(int64_t *)(v92 + 8 * v68); // 0x41148e
    int64_t v94; // 0x4112a0
    if ((char)function_40b280(v94, v93) == 0) {
        goto lab_0x411740_2;
    }
    goto lab_0x41149f;
  lab_0x411412:;
    // 0x411412
    int128_t v40; // 0x4112a0
    v54 = __asm_pxor(v40, v40);
    v52 = 0;
    int128_t v83 = __asm_movaps(v54); // bp-88, 0x41142b
    int64_t v39; // 0x4112a0
    if (*(int64_t *)(v39 + 40) >= 1) {
        // 0x411445
        int64_t v88; // 0x41141b
        int64_t v73 = v88 + 216; // 0x411447
        int64_t * v65 = (int64_t *)(v39 + 48); // 0x4114ad
        int64_t * v67 = (int64_t *)v88; // 0x4114b1
        int32_t v95; // 0x4113d2
        v58 = v95;
        v77 = (int64_t *)(v88 + 24);
        v63 = 0;
        while (true) {
          lab_0x4114ad:
            // 0x4114ad
            v59 = v63;
            int64_t v64 = *v65; // 0x4114ad
            int64_t v66 = *v67; // 0x4114b1
            v68 = *(int64_t *)(v64 + 8 * v59);
            int64_t v69 = 16 * v68; // 0x4114bc
            int64_t v70 = v69 + v66; // 0x4114c0
            char v71 = *(char *)(v70 + 10); // 0x4114c4
            v56 = v70;
            if ((v71 & 16) == 0) {
                goto lab_0x411460;
            } else {
                int64_t v72 = function_411010(v66, v73, v68, a1, v58); // 0x4114d9
                int32_t v74 = v72; // 0x4114e1
                if (v74 < 2) {
                    if (v74 != 0) {
                        goto lab_0x41147d;
                    } else {
                        int64_t v75 = *v67; // 0x411718
                        v56 = v75 + v69;
                        goto lab_0x411460;
                    }
                } else {
                    int64_t v76 = *v77; // 0x4114f5
                    int64_t v78 = *v15; // 0x411502
                    int64_t v79 = *(int64_t *)(v76 + 8 * v68); // 0x41150a
                    int64_t v80 = 8 * ((0x100000000 * v72 >> 32) + v58); // 0x41150e
                    int64_t v81 = *(int64_t *)(v78 + v80); // 0x411516
                    if (v81 != 0) {
                        int64_t v82 = function_40cdd0((int64_t *)&v83, (int128_t *)(v81 + 8)); // 0x41153c
                        int32_t v84 = v82; // 0x411546
                        v52 = v84;
                        if (v84 != 0) {
                            goto lab_0x4115b0_2;
                        }
                    }
                    // 0x41154e
                    int64_t v85; // 0x4112a0
                    if ((char)function_40b280(v85, v79) == 0) {
                        goto lab_0x411740_2;
                    }
                    int64_t v86 = *v15; // 0x411576
                    int64_t v87 = function_40de40(&v52, v88, (int64_t *)&v83, v58, v58, a6); // 0x41157e
                    *(int64_t *)(v86 + v80) = v87;
                    int64_t v89 = *v15; // 0x411587
                    int64_t v90 = *(int64_t *)(v89 + v80); // 0x41158f
                    int32_t v91 = v52; // 0x41159a
                    if (v90 == 0 && v91 != 0) {
                        goto lab_0x4115b0_2;
                    }
                    goto lab_0x41147d;
                }
            }
        }
    }
  lab_0x41181d:
    // 0x41181d
    free(NULL);
    result = 0;
    v45 = v54;
    goto lab_0x41163c;
  lab_0x41163c:;
    // 0x41163c
    int64_t v42; // 0x4112a0
    int64_t v96 = function_40e5c0(a1, (int64_t)((int32_t)v42 - 1), *v17); // 0x41164b
    int64_t v97 = function_40db40((int128_t *)&result, v3, (int64_t *)&v22, (int32_t)v96); // 0x411664
    int64_t v98; // 0x4112a0
    int64_t v41; // 0x4112a0
    int64_t v99; // 0x4112a0
    int64_t v43; // 0x4113c2
    if (v97 == 0) {
        // 0x411830
        v27 = v26;
        if (result != 0) {
            // break -> 0x411755
            goto lab_0x411755_2;
        }
        int64_t v100 = *v15; // 0x41183c
        *(int64_t *)(v100 + v43) = 0;
        v99 = v41 + 1;
        v98 = v100;
    } else {
        int64_t v101 = *v15; // 0x411675
        *(int64_t *)(v101 + v43) = v97;
        v99 = 0;
        v98 = v101;
    }
    // 0x41168f
    v33 = v42;
    if (v42 >= a6) {
        goto lab_0x4116ad_2;
    }
    int64_t v34 = v99; // 0x4116a7
    int128_t v35 = v45; // 0x4116a7
    int64_t v36 = v98; // 0x4116a7
    int64_t v37 = v42; // 0x4116a7
    int64_t v38 = v97; // 0x4116a7
    v33 = v42;
    if (v99 > (int64_t)*v7) {
        goto lab_0x4116ad_2;
    }
    goto lab_0x4113be;
  lab_0x411874:
    // 0x411874
    v22 = 1;
    int64_t * mem2 = malloc(8); // 0x411891
    if (mem2 == NULL) {
        // 0x411766
        return 12;
    }
    int64_t v102 = (int64_t)mem2; // 0x411891
    *mem2 = a3;
    int32_t v103 = 0x100000000 * a7 >> 32;
    result = 0;
    int32_t v104 = function_40d200(v3, (int64_t *)&v22, v6, v103); // 0x4118d6
    result = v104;
    v27 = v102;
    if (v104 == 0) {
        goto lab_0x4117b2;
    } else {
        goto lab_0x411755_2;
    }
  lab_0x4117b2:;
    int32_t v105 = function_40e0e0(a1, &v22, a4, v6, v103); // 0x4117cd
    result = v105;
    v27 = v102;
    int64_t v51 = a4; // 0x4117d3
    int64_t v50 = v102; // 0x4117d3
    int32_t v49 = v23; // 0x4117d3
    if (v105 != 0) {
        goto lab_0x411755_2;
    } else {
        goto lab_0x4117d5;
    }
  lab_0x411755_2:
    // 0x411755
    free((int64_t *)v27);
    // 0x411766
    return result;
  lab_0x411373:;
    int128_t v28 = __asm_pxor(v2, v2); // 0x41137f
    v22 = __asm_movaps(v28);
    int64_t v29 = 0; // 0x411383
    int128_t v30 = v28; // 0x411383
    int64_t v31 = v10; // 0x411383
    int64_t v32 = v24; // 0x411383
    goto lab_0x41138b;
  lab_0x4117d5:;
    int64_t v48 = function_40db40((int128_t *)&result, v3, (int64_t *)&v22, v49); // 0x4117e5
    v27 = v50;
    if (v48 != 0 || result == 0) {
        // 0x4117f6
        *(int64_t *)(*v15 + 8 * v51) = v48;
        v29 = v50;
        v31 = v51;
        v32 = v48;
        goto lab_0x41138b;
    } else {
        goto lab_0x411755_2;
    }
  lab_0x41138b:
    // 0x41138b
    v26 = v29;
    v33 = v31;
    if (v31 < a6) {
        // 0x411396
        v33 = v31;
        if (*v7 < 0) {
            goto lab_0x4116ad_2;
        } else {
            // 0x4113a6
            v34 = 0;
            v35 = v30;
            v36 = *v15;
            v37 = v31;
            v38 = v32;
            while (true) {
              lab_0x4113be:
                // 0x4113be
                v39 = v38;
                v40 = v35;
                v41 = v34;
                v42 = v37 + 1;
                v43 = 8 * v42;
                int64_t v44 = *(int64_t *)(v43 + v36); // 0x4113c2
                if (v44 == 0) {
                    // 0x411728
                    v45 = v40;
                    if (v39 != 0) {
                        goto lab_0x411412;
                    } else {
                        goto lab_0x41163c;
                    }
                } else {
                    int64_t v46 = function_40cdd0((int64_t *)&v22, (int128_t *)(v44 + 8)); // 0x4113f8
                    int32_t v47 = v46; // 0x4113fd
                    result = v47;
                    v27 = v26;
                    if (v47 != 0) {
                        // break -> 0x411755
                        break;
                    }
                    // 0x411409
                    v45 = v40;
                    if (v39 == 0) {
                        goto lab_0x41163c;
                    } else {
                        goto lab_0x411412;
                    }
                }
            }
            goto lab_0x411755_2;
        }
    } else {
        goto lab_0x4116ad_2;
    }
}
// Address range: 0x4119c0 - 0x412283
int64_t function_4119c0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4119c0
    int128_t v1; // 0x4119c0
    int128_t v2 = v1;
    int64_t v3 = 0; // bp-88, 0x4119e4
    int64_t v4 = 0; // 0x411a06
    if ((char)a5 != 0) {
        int64_t * mem = malloc(96); // 0x411a15
        v4 = &v3;
        if (mem == NULL) {
            // 0x411d29
            return 12;
        }
    }
    int128_t v5 = __asm_pxor(v2, v2); // 0x411a35
    int64_t v6 = 0; // bp-104, 0x411a39
    int128_t v7 = __asm_movaps(v5); // bp-120, 0x411a41
    uint64_t v8 = 16 * a3; // 0x411a53
    int32_t size = v8; // 0x411a57
    int64_t result; // 0x4119c0
    int64_t v9; // 0x4119c0
    char v10; // 0x4119c0
    if (v8 < 4031) {
        // 0x411a6a
        v10 = 0;
        int64_t v11; // bp-216, 0x4119c0
        v9 = (int64_t)&v11 + -1 - v8 & -16;
    } else {
        int64_t * mem2 = malloc(size); // 0x4121a7
        v10 = 1;
        v9 = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x4121c3
            result = 12;
            if (v4 != 0) {
                // 0x4121d3
                function_40fff0(v4);
                result = 12;
            }
          lab_0x411d29:
            // 0x411d29
            return result;
        }
    }
    int64_t * v12 = (int64_t *)v9; // 0x411a99
    int64_t * v13 = (int64_t *)a4; // 0x411a99
    memcpy(v12, v13, size);
    int64_t v14 = a4; // bp-128, 0x411aaa
    int64_t * v15 = (int64_t *)(a4 + 8); // 0x411b99
    int64_t v16 = *v15; // 0x411b99
    if (v16 < a4) {
      lab_0x411d00_2:
        // 0x411d00
        free((int64_t *)v6);
        if (v10 != 0) {
            // 0x4121dd
            free(v12);
            if (v4 == 0) {
                // 0x411d29
                return 0;
            }
        } else {
            // 0x411d16
            if (v4 == 0) {
                // 0x411d29
                return 0;
            }
        }
        // 0x411d22
        function_40fff0(v4);
        // 0x411d29
        return 0;
    }
    int64_t v17 = (int64_t)a2;
    int64_t v18 = v4 + 16;
    int64_t v19 = &v7;
    int64_t * v20 = (int64_t *)(v17 + 184);
    int64_t * v21 = (int64_t *)v4;
    int64_t * v22 = (int64_t *)(v4 + 8);
    int64_t * v23 = (int64_t *)v18;
    int64_t v24 = v16; // 0x411b99
    int64_t v25 = *(int64_t *)(a1 + 144); // 0x4119c0
    int64_t v26 = a4; // 0x411b95
    int64_t v27; // 0x4119c0
    int64_t v28; // 0x4119c0
    int64_t v29; // 0x4119c0
    int64_t v30; // 0x4119c0
    int64_t v31; // 0x4119c0
    int64_t v32; // 0x4119c0
    int64_t v33; // 0x4119c0
    int64_t v34; // 0x4119c0
    int64_t v35; // 0x4119c0
    int64_t v36; // 0x411bb3
    int64_t v37; // 0x411d58
    while (true) {
        // 0x411ba6
        int64_t v38; // 0x4119c0
        v34 = v38;
        v28 = v24;
        v31 = v26;
        v29 = v25;
        while (true) {
          lab_0x411ba6:
            // 0x411ba6
            v30 = v29;
            v32 = v31;
            int64_t v39 = v28;
            v35 = v34;
            v36 = 16 * v30;
            int64_t v40 = v36 + a1; // 0x411bba
            char v41 = *(char *)(v40 + 8); // 0x411bbd
            if (v41 != 8) {
                // 0x411ac0
                v27 = v39;
                if (v41 == 9) {
                    int64_t v42 = *(int64_t *)v40 + 1; // 0x411d43
                    v27 = v39;
                    if (v42 < a3) {
                        int64_t v43 = 16 * v42; // 0x411d54
                        v37 = v43 + a4;
                        if (*(int64_t *)v37 < v32) {
                            // 0x4120d0
                            *(int64_t *)(v37 + 8) = v32;
                            memcpy(v12, v13, size);
                            v27 = *v15;
                            goto lab_0x411ac9;
                        } else {
                            // 0x411d66
                            if ((*(char *)(v40 + 10) & 8) == 0) {
                                goto lab_0x411d7e;
                            } else {
                                // 0x411d6c
                                if (*(int64_t *)(v43 + v9) != -1) {
                                    // 0x412110
                                    memcpy(v13, v12, size);
                                    int64_t v44 = *v15; // 0x41212d
                                    v27 = v44;
                                    goto lab_0x411ac9;
                                } else {
                                    goto lab_0x411d7e;
                                }
                            }
                        }
                    } else {
                        goto lab_0x411ac9;
                    }
                } else {
                    goto lab_0x411ac9;
                }
            } else {
                int64_t v45 = *(int64_t *)v40 + 1; // 0x411bcd
                v27 = v39;
                if (v45 < a3) {
                    int64_t v46 = 16 * v45 + a4; // 0x411be2
                    *(int64_t *)(v46 + 8) = -1;
                    *(int64_t *)v46 = v32;
                    v27 = *v15;
                }
                goto lab_0x411ac9;
            }
        }
      lab_0x411b95_2:
        // 0x411b95
        v26 = v14;
        v24 = *v15;
        v38 = v33;
        if (v24 < v26) {
            goto lab_0x411d00_2;
        }
    }
  lab_0x412090_3:
    // 0x412090
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x412200
        free(v12);
        goto lab_0x4120a6;
    } else {
        goto lab_0x4120a6;
    }
  lab_0x411f9a_3:
    // 0x411f9a
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x412272
        free(v12);
        // 0x411fb0
        function_40fff0(v4);
        result = 0;
        return result;
    } else {
        // 0x411fb0
        function_40fff0(v4);
        result = 0;
        return result;
    }
  lab_0x411ac9:;
    int64_t v47 = v30; // 0x411acc
    int64_t v48 = v36; // 0x411acc
    if (v32 == v27) {
        // 0x411ace
        v47 = v30;
        v48 = v36;
        if (*(int64_t *)(v17 + 176) == v30) {
            if (v4 == 0) {
                // 0x412249
                free((int64_t *)v6);
                result = 0;
                if (v10 == 0) {
                    return result;
                } else {
                    // 0x41225f
                    free(v12);
                    result = (int32_t)&g127 ^ (int32_t)&g127;
                    return result;
                }
            }
            int64_t v49 = a4; // 0x411f70
            int64_t v50 = 0; // 0x411f70
            if (a3 == 0) {
                goto lab_0x411f9a_3;
            }
            int64_t v51; // 0x4119c0
            while (true) {
                // 0x411f80
                v51 = v50;
                int64_t v52 = v49;
                if (*(int64_t *)v52 >= 0) {
                    // 0x411f86
                    if (*(int64_t *)(v52 + 8) == -1) {
                        // break -> 0x411fc8
                        break;
                    }
                }
                // 0x411f8d
                v50 = v51 + 1;
                v49 = v52 + 16;
                if (v50 == a3) {
                    goto lab_0x411f9a_3;
                }
            }
            if (v51 == a3) {
                goto lab_0x411f9a_3;
            }
            int64_t v53 = function_410040(v4, v18, &v14, a3, a4, &v7); // 0x411fee
            v47 = v53;
            v48 = 16 * v53;
        }
    }
    int64_t v54 = v48;
    int64_t v55 = v47;
    int64_t v56 = *(int64_t *)(v17 + 152); // 0x411adc
    int64_t * v57 = (int64_t *)v56; // 0x411ae4
    int64_t v58 = *v57; // 0x411ae4
    int64_t v59 = v58 + v54; // 0x411ae7
    char v60 = *(char *)(v59 + 8); // 0x411aeb
    int64_t v61; // 0x4119c0
    int64_t v62; // 0x4119c0
    int64_t v63; // 0x4119c0
    int64_t v64; // 0x4119c0
    int64_t v65; // 0x4119c0
    int64_t v66; // 0x4119c0
    int64_t v67; // 0x4119c0
    int64_t v68; // 0x4119c0
    int64_t v69; // 0x4119c0
    int64_t v70; // 0x4119c0
    int64_t v71; // 0x4119c0
    int64_t v72; // 0x4119c0
    int64_t v73; // 0x411e8e
    int64_t v74; // 0x411c70
    if ((v60 & 8) != 0) {
        int64_t v75 = *(int64_t *)(8 * v14 + *v20); // 0x411c13
        if ((char)function_40b280(v19, v55) == 0) {
            // break (via goto) -> 0x412090
            goto lab_0x412090_3;
        }
        int64_t v76 = *(int64_t *)(v56 + 40) + 24 * v55; // 0x411c26
        int64_t v77 = *(int64_t *)(v76 + 8); // 0x411c3e
        v71 = v35;
        if (v77 < 1) {
            goto lab_0x411cba;
        } else {
            // 0x411c47
            v61 = -1;
            int64_t v78 = 0;
            v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
            int64_t v79 = v61; // 0x411c85
            int64_t v80; // 0x411e95
            int64_t v81; // 0x4119c0
            int64_t * mem3; // 0x412162
            int64_t v82; // 0x412162
            int64_t v83; // 0x411e70
            if (function_40c890(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                // 0x411c87
                v79 = v74;
                if (v61 != -1) {
                    // 0x411e58
                    v83 = function_40c890(v35, (int64_t)&v6, v61);
                    v69 = v35;
                    v63 = v83 != 0 ? v74 : v61;
                    if (v4 == 0 || v83 != 0) {
                        goto lab_0x411b8c;
                    } else {
                        // 0x411e8e
                        v73 = *v21;
                        v80 = v73 + 1;
                        *v21 = v80;
                        v81 = *v23;
                        v62 = v81;
                        if (v80 == *v22) {
                            // 0x412148
                            mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                            if (mem3 == NULL) {
                                goto lab_0x411f00;
                            } else {
                                // 0x412170
                                v82 = (int64_t)mem3;
                                *v22 = 2 * *v22;
                                *v23 = v82;
                                v62 = v82;
                                goto lab_0x411eaa;
                            }
                        } else {
                            goto lab_0x411eaa;
                        }
                    }
                }
            }
            int64_t v84 = v79;
            int64_t v85 = v78 + 1; // 0x411c94
            while (v77 != v85) {
                // 0x411c70
                v61 = v84;
                v78 = v85;
                v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
                v79 = v61;
                if (function_40c890(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                    // 0x411c87
                    v79 = v74;
                    if (v61 != -1) {
                        // 0x411e58
                        v83 = function_40c890(v35, (int64_t)&v6, v61);
                        v69 = v35;
                        v63 = v83 != 0 ? v74 : v61;
                        if (v4 == 0 || v83 != 0) {
                            goto lab_0x411b8c;
                        } else {
                            // 0x411e8e
                            v73 = *v21;
                            v80 = v73 + 1;
                            *v21 = v80;
                            v81 = *v23;
                            v62 = v81;
                            if (v80 == *v22) {
                                // 0x412148
                                mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                                if (mem3 == NULL) {
                                    goto lab_0x411f00;
                                } else {
                                    // 0x412170
                                    v82 = (int64_t)mem3;
                                    *v22 = 2 * *v22;
                                    *v23 = v82;
                                    v62 = v82;
                                    goto lab_0x411eaa;
                                }
                            } else {
                                goto lab_0x411eaa;
                            }
                        }
                    }
                }
                // 0x411c94
                v84 = v79;
                v85 = v78 + 1;
            }
            // 0x411c9d
            v33 = v35;
            v25 = v84;
            v70 = v35;
            v64 = v84;
            if (v84 >= 0) {
                // break -> 0x411b95
                goto lab_0x411b95_2;
            }
            goto lab_0x411cb0;
        }
    } else {
        // 0x411af7
        if ((*(char *)(v59 + 10) & 16) != 0) {
            int64_t v86 = 0x100000000 * function_411010(v58, v56 + 216, v55, v17, v14);
            v67 = v86 >> 32;
            if (v86 != 0) {
                goto lab_0x411f49;
            } else {
                // 0x411db9
                v65 = v14;
                v68 = *v57 + v54;
                goto lab_0x411b0d;
            }
        } else {
            if (v60 == 4) {
                int64_t v87 = a4 + 16 + 16 * *(int64_t *)v59; // 0x411ddb
                int64_t v88 = *(int64_t *)(v87 + 8); // 0x411dde
                int64_t v89 = *(int64_t *)v87; // 0x411de2
                int64_t n = v88 - v89; // 0x411de8
                if (v4 == 0) {
                    // 0x411f40
                    v67 = n;
                    if (n == 0) {
                        goto lab_0x412008;
                    } else {
                        goto lab_0x411f49;
                    }
                } else {
                    // 0x411df9
                    v72 = v35;
                    if (v88 == -1 || v89 == -1) {
                        goto lab_0x411cc8;
                    } else {
                        if (n == 0) {
                            goto lab_0x412008;
                        } else {
                            int64_t v90 = *(int64_t *)(v17 + 8); // 0x411e16
                            int32_t memcmp_rc = memcmp((int64_t *)(v90 + v89), (int64_t *)(v14 + v90), (int32_t)n); // 0x411e30
                            v72 = v35;
                            v66 = n;
                            if (memcmp_rc != 0) {
                                goto lab_0x411cc8;
                            } else {
                                goto lab_0x411e44;
                            }
                        }
                    }
                }
            } else {
                // 0x411b09
                v65 = v14;
                v68 = v59;
                goto lab_0x411b0d;
            }
        }
    }
  lab_0x411cba:
    // 0x411cba
    v72 = v71;
    if (v4 == 0) {
        // 0x412211
        free((int64_t *)v6);
        result = 1;
        if (v10 == 0) {
            return result;
        } else {
            // 0x41222c
            free(v12);
            result = 1;
            return result;
        }
    }
    goto lab_0x411cc8;
  lab_0x411d7e:
    // 0x411d7e
    *(int64_t *)(v37 + 8) = v32;
    v27 = *v15;
    goto lab_0x411ac9;
  lab_0x411cc8:;
    int64_t v91 = function_410040(v4, v18, &v14, a3, a4, &v7); // 0x411ce5
    int64_t v92 = *v15; // 0x411cf1
    v34 = v72;
    v28 = v92;
    v31 = v14;
    v29 = v91;
    if (v92 < v14) {
        goto lab_0x411d00_2;
    }
    goto lab_0x411ba6;
  lab_0x411cb0:
    // 0x411cb0
    v71 = v70;
    if (v64 == -2) {
        // break (via goto) -> 0x412090
        goto lab_0x412090_3;
    }
    goto lab_0x411cba;
  lab_0x411f49:
    // 0x411f49
    v66 = v67;
    goto lab_0x411e44;
  lab_0x411e44:;
    int64_t v93 = v14 + v66; // 0x411e50
    goto lab_0x411b3a;
  lab_0x411b0d:
    // 0x411b0d
    if ((char)function_40e6b0(v17, v68, v65) == 0) {
        goto lab_0x411cba;
    } else {
        // 0x411b2e
        v93 = v65 + 1;
        goto lab_0x411b3a;
    }
  lab_0x411b3a:;
    int64_t v94 = v93;
    int64_t v95 = *(int64_t *)(*(int64_t *)(v56 + 24) + 8 * v55);
    v14 = v94;
    v69 = 0;
    v63 = v95;
    if (v4 == 0) {
        goto lab_0x411b8c;
    } else {
        // 0x411b48
        v72 = v35;
        if (v94 > *(int64_t *)(v17 + 168)) {
            goto lab_0x411cc8;
        } else {
            int64_t v96 = *(int64_t *)(*v20 + 8 * v94); // 0x411b5e
            v72 = v35;
            if (v96 == 0) {
                goto lab_0x411cc8;
            } else {
                int64_t v97 = function_40c890(*(int64_t *)(v96 + 16), v96 + 24, v95); // 0x411b76
                v69 = 0;
                v63 = v95;
                v72 = v35;
                if (v97 == 0) {
                    goto lab_0x411cc8;
                } else {
                    goto lab_0x411b8c;
                }
            }
        }
    }
  lab_0x412008:
    // 0x412008
    if ((char)function_40b280(v19, v55) == 0) {
        // break (via goto) -> 0x412090
        goto lab_0x412090_3;
    }
    int64_t v98 = v14; // 0x412027
    int64_t v99 = *(int64_t *)(24 * v55 + 16 + *(int64_t *)(v56 + 40)); // 0x412036
    int64_t v100 = *(int64_t *)v99; // 0x41203a
    int64_t v101 = *(int64_t *)(*v20 + 8 * v98); // 0x412045
    int64_t v102 = function_40c890(*(int64_t *)(v101 + 16), v101 + 24, v100); // 0x412054
    v69 = v35;
    v63 = v100;
    if (v102 != 0) {
        goto lab_0x411b8c;
    } else {
        // 0x412062
        v65 = v98;
        v68 = *v57 + v54;
        goto lab_0x411b0d;
    }
  lab_0x411b8c:
    // 0x411b8c
    v33 = v69;
    v25 = v63;
    v70 = v69;
    v64 = v63;
    if (v63 >= 0) {
        // break -> 0x411b95
        goto lab_0x411b95_2;
    }
    goto lab_0x411cb0;
  lab_0x4120a6:
    // 0x4120a6
    if (v4 != 0) {
      lab_0x411f16:
        // 0x411f16
        function_40fff0(v4);
        return 12;
    }
    // 0x411d29
    return 12;
  lab_0x411eaa:;
    int64_t v103 = v62 + 48 * v73; // 0x411eb2
    *(int64_t *)(v103 + 8) = v74;
    *(int64_t *)v103 = v14;
    int64_t * mem4 = malloc(size); // 0x411ec6
    *(int64_t *)(v103 + 16) = (int64_t)mem4;
    if (mem4 == NULL) {
        goto lab_0x411f00;
    } else {
        // 0x411ed4
        memcpy(mem4, v13, size);
        v69 = v35;
        v63 = v61;
        if ((int32_t)function_40d930(v103 + 24, v19) == 0) {
            goto lab_0x411b8c;
        } else {
            goto lab_0x411f00;
        }
    }
  lab_0x411f00:
    // 0x411f00
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x412200
        free(v12);
        goto lab_0x4120a6;
    } else {
        goto lab_0x411f16;
    }
}
// Address range: 0x412290 - 0x412426
int64_t function_412290(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 16; // 0x4122a4
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x4122b7
    int64_t result = function_4112a0(a1, v1, a3, *v2, a4, a5, 8); // 0x4122c0
    if ((int32_t)result != 0) {
        // 0x4122cb
        return result;
    }
    int64_t v3 = *v2; // 0x4122e0
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x4122e4
    uint64_t v5 = *v4; // 0x4122e4
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x4122eb
    uint64_t v7 = *v6; // 0x4122eb
    int64_t * v8 = (int64_t *)(a1 + 216); // 0x4122f6
    int64_t v9 = *v8; // 0x4122f6
    int64_t v10 = v5; // 0x412303
    int64_t v11 = v9; // 0x412303
    if (v5 >= v7) {
        int64_t * mem = realloc((int64_t *)v9, 80 * (int32_t)v7); // 0x4123ad
        if (mem == NULL) {
            // 0x412410
            free((int64_t *)*v8);
            // 0x4122cb
            return 12;
        }
        int64_t v12 = (int64_t)mem; // 0x4123ad
        *v8 = v12;
        memset((int64_t *)(40 * *v4 + v12), 0, 40 * (int32_t)*v6);
        *v6 = 2 * *v6;
        v10 = *v4;
        v11 = *v8;
    }
    int64_t v13 = 40 * v10; // 0x41230d
    int64_t v14; // 0x412290
    if (v10 < 1) {
        // 0x412309
        v14 = v11 + v13;
    } else {
        int64_t v15 = v13 + v11;
        v14 = v15;
        if (*(int64_t *)(v15 - 32) == a5) {
            // 0x412390
            *(char *)(v15 - 8) = 1;
            v14 = v15;
        }
    }
    // 0x412321
    *(int64_t *)v14 = a4;
    *(int64_t *)(v14 + 8) = a5;
    *(int16_t *)(v14 + 34) = (int16_t)(v3 == v1);
    *(int64_t *)(v14 + 16) = v1;
    *(int64_t *)(v14 + 24) = v3;
    *v4 = v10 + 1;
    *(char *)(v14 + 32) = 0;
    int32_t * v16 = (int32_t *)(a1 + 224); // 0x412353
    if (v3 - v1 > (int64_t)*v16) {
        // 0x412362
        *v16 = (int32_t)v3 - (int32_t)v1;
    }
    // 0x41236c
    return function_40be60(a1, 0);
}
// Address range: 0x412430 - 0x412ca2
int64_t function_412430(int64_t a1, int64_t a2, int64_t a3) {
    // 0x412430
    if (a2 >= 0 != a2 != 0) {
        // 0x4128bb
        return 0;
    }
    // 0x4124c9
    int64_t v1; // bp-232, 0x412430
    int64_t v2 = &v1; // 0x41243d
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x4124ce
    int64_t * v4 = (int64_t *)(v2 + 56); // 0x4124da
    int32_t * v5 = (int32_t *)(a1 + 160);
    int64_t * v6 = (int64_t *)(a1 + 200);
    int64_t * v7 = (int64_t *)(a1 + 216);
    int64_t * v8 = (int64_t *)(a1 + 232);
    int64_t * v9 = (int64_t *)(v2 + 104);
    int64_t * v10 = (int64_t *)(v2 + 96);
    int64_t * v11 = (int64_t *)(a1 + 8);
    int64_t * v12 = (int64_t *)(v2 + 24);
    int64_t * v13 = (int64_t *)(v2 + 16);
    int64_t * v14 = (int64_t *)(v2 + 32);
    int64_t * v15 = (int64_t *)(v2 + 64);
    int64_t * v16 = (int64_t *)(v2 + 112);
    int64_t v17 = v2 + 40;
    int64_t * v18 = (int64_t *)v17;
    int64_t * v19 = (int64_t *)(v2 + 120);
    int64_t * v20 = (int64_t *)(v2 + 48);
    int64_t * v21 = (int64_t *)(a1 + 184);
    int64_t v22 = v2 + 140;
    int32_t * v23 = (int32_t *)v22;
    int64_t * v24 = (int64_t *)(v2 + 88);
    int32_t * v25 = (int32_t *)v17;
    int64_t * v26 = (int64_t *)(v2 + 144);
    int128_t * v27 = (int128_t *)v22;
    int64_t * v28 = (int64_t *)(v2 + 160);
    int64_t v29 = *v3; // 0x4124b5
    int64_t v30 = *(int64_t *)(a1 + 72); // 0x412430
    int64_t v31; // 0x412430
    int64_t v32; // 0x4124d6
    int64_t v33; // 0x4124e5
    uint32_t v34; // 0x4124f2
    int64_t v35; // 0x4124f2
    uint64_t v36; // 0x41250d
    while (true) {
      lab_0x4124c9:
        // 0x4124c9
        v31 = v30;
        v32 = *(int64_t *)(*(int64_t *)*(int64_t *)(v2 + 72) + 8 * v29);
        v33 = 16 * v32;
        int64_t v37 = (v33 | 8) + *(int64_t *)*v4; // 0x4124ec
        v30 = v31;
        if (*(char *)v37 != 4) {
            goto lab_0x4124b0_3;
        } else {
            // 0x4124f2
            v34 = *(int32_t *)v37;
            if ((v34 & 0x3ff00) == 0) {
                goto lab_0x412540;
            } else {
                // 0x4124fd
                v35 = v34;
                v36 = function_40e5c0(a1, v31, *v5);
                if ((v35 & 1024) != 0) {
                    // 0x412480
                    v30 = v31;
                    if (v36 % 2 == 0) {
                        goto lab_0x4124b0_3;
                    } else {
                        // 0x412484
                        v30 = v31;
                        if ((v35 & 2048) != 0) {
                            goto lab_0x4124b0_3;
                        } else {
                            goto lab_0x412489;
                        }
                    }
                } else {
                    // 0x412524
                    v30 = v31;
                    if ((v35 & 2048) == 0 || v36 % 2 == 0) {
                        goto lab_0x412489;
                    } else {
                        goto lab_0x4124b0_3;
                    }
                }
            }
        }
    }
  lab_0x4128bb_7:;
    // 0x4128bb
    int64_t result; // 0x412430
    return result;
  lab_0x412608:;
    int64_t v38 = *(int64_t *)(a1 + 152); // 0x412608
    int64_t v39 = *(int64_t *)v38; // 0x412617
    *v9 = v38;
    *v10 = *(int64_t *)(v39 + v33);
    int64_t v40; // 0x412430
    int64_t v41; // 0x412430
    int64_t v42; // 0x412430
    int64_t v43; // 0x412430
    int64_t v44; // 0x412430
    int64_t v45; // 0x412430
    int64_t v46; // 0x412430
    int64_t v47; // 0x412430
    int64_t v48; // 0x412430
    int64_t v49; // 0x412430
    int64_t v50; // 0x412430
    int64_t v51; // 0x412430
    int64_t v52; // 0x412430
    int64_t v53; // 0x412430
    int64_t v54; // 0x412540
    int64_t v55; // 0x41265c
    int64_t * v56; // 0x412660
    int64_t * v57; // 0x4128d0
    int64_t * v58; // 0x4128d5
    int64_t v59; // 0x412690
    if (*v8 < 1) {
        // 0x4125df
        *v23 = 0;
        v30 = v31;
        goto lab_0x4124b0_3;
    } else {
        // 0x41262a
        *v12 = v31;
        *v13 = 0;
        *v14 = *v11;
        *v15 = v32;
        *v16 = v54;
        v40 = *v13;
        v51 = v39;
        while (true) {
          lab_0x41264b:
            // 0x41264b
            v55 = *(int64_t *)(*(int64_t *)(a1 + 248) + 8 * v40);
            v56 = (int64_t *)(v55 + 8);
            if (*v10 == *(int64_t *)(16 * *v56 + v51)) {
                // 0x4128d0
                v57 = (int64_t *)(v55 + 32);
                v58 = (int64_t *)v55;
                int64_t v60 = *v58; // 0x4128d5
                int64_t v61 = *v12; // 0x4128d8
                v41 = v61;
                v42 = v60;
                if (*v57 < 1) {
                    goto lab_0x412a83;
                } else {
                    int64_t v62 = v61;
                    v49 = 0;
                    int64_t v63 = v60;
                    int64_t v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49); // 0x412910
                    int64_t v65 = *(int64_t *)(v64 + 8); // 0x412914
                    int64_t v66 = v65 - v63; // 0x41291b
                    int64_t v67 = v66 + v62; // 0x41291e
                    int64_t v68 = v64; // 0x412925
                    int64_t v69; // 0x412430
                    int64_t v70; // 0x412430
                    int32_t memcmp_rc; // 0x412948
                    int64_t v71; // 0x412a24
                    int64_t v72; // 0x412a31
                    int64_t n; // 0x412a35
                    int64_t v73; // 0x412a3a
                    int64_t v74; // 0x412a3f
                    int64_t v75; // 0x412a44
                    if (v66 >= 1) {
                        // 0x412927
                        v69 = *v14;
                        v75 = v63;
                        n = v66;
                        v74 = v62;
                        v73 = v64;
                        v72 = v69;
                        if (*(int64_t *)(a1 + 48) < v67) {
                            // 0x412a00
                            *v18 = v66;
                            *v14 = v64;
                            v50 = v63;
                            v48 = v62;
                            v43 = v69;
                            if (*(int64_t *)(a1 + 88) < v67) {
                                goto lab_0x412c10_2;
                            }
                            // 0x412a14
                            *v19 = v62;
                            *v20 = v63;
                            v71 = function_40be60(a1, v67);
                            result = v71;
                            if ((int32_t)v71 != 0) {
                                // break (via goto) -> 0x4128bb
                                goto lab_0x4128bb_7;
                            }
                            // 0x412a31
                            v72 = *v11;
                            n = *v18;
                            v73 = *v14;
                            v74 = *v19;
                            v75 = *v20;
                        }
                        // 0x412931
                        v70 = v72;
                        *v20 = v73;
                        *v18 = v75;
                        *v14 = v74;
                        memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                        v68 = *v20;
                        v50 = *v18;
                        v48 = *v14;
                        v43 = v70;
                        if (memcmp_rc != 0) {
                            goto lab_0x412c10_2;
                        }
                    }
                    int64_t v76 = function_412290(a1, v55, v68, *v15, *v12); // 0x412977
                    int64_t v77 = *v11; // 0x41297c
                    result = v76;
                    if ((int32_t)v76 >= 2) {
                        // break (via goto) -> 0x4128bb
                        goto lab_0x4128bb_7;
                    }
                    int64_t v78 = v49 + 1; // 0x4128f8
                    while (v78 < *v57) {
                        // 0x41290c
                        v62 = v67;
                        v49 = v78;
                        v63 = v65;
                        v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49);
                        v65 = *(int64_t *)(v64 + 8);
                        v66 = v65 - v63;
                        v67 = v66 + v62;
                        v68 = v64;
                        if (v66 >= 1) {
                            // 0x412927
                            v69 = v77;
                            v75 = v63;
                            n = v66;
                            v74 = v62;
                            v73 = v64;
                            v72 = v69;
                            if (*(int64_t *)(a1 + 48) < v67) {
                                // 0x412a00
                                *v18 = v66;
                                *v14 = v64;
                                v50 = v63;
                                v48 = v62;
                                v43 = v69;
                                if (*(int64_t *)(a1 + 88) < v67) {
                                    goto lab_0x412c10_2;
                                }
                                // 0x412a14
                                *v19 = v62;
                                *v20 = v63;
                                v71 = function_40be60(a1, v67);
                                result = v71;
                                if ((int32_t)v71 != 0) {
                                    // break (via goto) -> 0x4128bb
                                    goto lab_0x4128bb_7;
                                }
                                // 0x412a31
                                v72 = *v11;
                                n = *v18;
                                v73 = *v14;
                                v74 = *v19;
                                v75 = *v20;
                            }
                            // 0x412931
                            v70 = v72;
                            *v20 = v73;
                            *v18 = v75;
                            *v14 = v74;
                            memcmp_rc = memcmp((int64_t *)(v70 + v74), (int64_t *)(v70 + v75), (int32_t)n);
                            v68 = *v20;
                            v50 = *v18;
                            v48 = *v14;
                            v43 = v70;
                            if (memcmp_rc != 0) {
                                goto lab_0x412c10_2;
                            }
                        }
                        // 0x412964
                        v76 = function_412290(a1, v55, v68, *v15, *v12);
                        v77 = *v11;
                        result = v76;
                        if ((int32_t)v76 >= 2) {
                            // break (via goto) -> 0x4128bb
                            goto lab_0x4128bb_7;
                        }
                        // 0x4128f8
                        v78 = v49 + 1;
                    }
                    // 0x412a77
                    *v14 = v77;
                    v44 = v65;
                    v47 = v67;
                    goto lab_0x412a7c;
                }
            } else {
                goto lab_0x412672_2;
            }
        }
      lab_0x412690:
        // 0x412690
        v59 = *v12;
        int64_t v79 = *v15; // 0x412695
        *v23 = 0;
        int64_t v80 = *v16; // 0x4126a5
        v30 = v59;
        if (v80 < *v6) {
            int64_t v81 = *v4; // 0x4126bf
            *v15 = 8 * v79;
            *v10 = 24 * v79;
            int64_t * v82 = (int64_t *)(v81 + 48);
            int64_t * v83 = (int64_t *)(v81 + 24);
            int64_t * v84 = (int64_t *)(v81 + 40);
            v45 = v80;
            while (true) {
              lab_0x412819_2:
                // 0x412819
                v46 = v45;
                int64_t v85 = *v7 + 40 * v46; // 0x412824
                if (v79 != *(int64_t *)v85) {
                    goto lab_0x412808;
                } else {
                    // 0x41282d
                    if (v59 != *(int64_t *)(v85 + 8)) {
                        goto lab_0x412808;
                    } else {
                        int64_t v86 = *(int64_t *)(v85 + 24); // 0x412833
                        int64_t v87 = *(int64_t *)(v85 + 16); // 0x412837
                        int64_t v88 = v86 - v87; // 0x412843
                        *v14 = v88;
                        int64_t v89; // 0x412430
                        if (v88 == 0) {
                            // 0x4126e8
                            v89 = *(int64_t *)(*v84 + 16 + *v10);
                        } else {
                            // 0x412851
                            v89 = *v15 + *v83;
                        }
                        // 0x412707
                        *v12 = 24 * *(int64_t *)v89 + *v82;
                        int64_t v90 = v86 + v59 - v87; // 0x412713
                        int64_t v91 = function_40e5c0(a1, v90 - 1, *v5); // 0x41271a
                        int64_t v92 = 8 * v90; // 0x412724
                        *v13 = 0;
                        int64_t v93 = *v21; // 0x412737
                        int64_t v94 = v93 + v92; // 0x41273e
                        int64_t v95 = *(int64_t *)(v93 + *v24); // 0x412742
                        int64_t v96 = *(int64_t *)v94; // 0x412746
                        if (v95 != 0) {
                            // 0x41274e
                            *v13 = *(int64_t *)(v95 + 16);
                        }
                        if (v96 == 0) {
                            // 0x412878
                            *v18 = v94;
                            int64_t v97 = function_40db40(v27, v81, (int64_t *)*v12, (int32_t)v91); // 0x41288d
                            int64_t v98 = *v21; // 0x412897
                            *(int64_t *)*v18 = v97;
                            v52 = v98;
                            v53 = v98;
                            if (*(int64_t *)(v98 + v92) != 0) {
                                goto lab_0x4127e2;
                            } else {
                                goto lab_0x4128ac;
                            }
                        } else {
                            // 0x412760
                            *v25 = (int32_t)v91;
                            *v20 = v92;
                            int64_t v99 = function_40d9b0(v26, *(int64_t *)(v96 + 80), *v12, v91 & 0xffffffff); // 0x41277a
                            int32_t v100 = v99; // 0x412788
                            *v23 = v100;
                            if (v100 != 0) {
                                // 0x412a50
                                free((int64_t *)*v28);
                                result = (int64_t)*v23;
                                goto lab_0x4128bb_7;
                            }
                            // 0x412797
                            *v18 = *v21 + *v20;
                            *(int64_t *)*v18 = function_40db40(v27, v81, v26, *v25);
                            free((int64_t *)*v28);
                            int64_t v101 = *v21; // 0x4127d0
                            v52 = v101;
                            v53 = v101;
                            if (*(int64_t *)(v101 + v92) == 0) {
                                goto lab_0x4128ac;
                            } else {
                                goto lab_0x4127e2;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x4124b0_3;
    }
  lab_0x412c10_2:;
    int64_t v102 = v48;
    int64_t v103 = v50;
    *v14 = v43;
    if (*v57 > v49) {
        goto lab_0x412672_2;
    } else {
        // 0x412c25
        v44 = v103;
        v47 = v102;
        v41 = v102;
        v42 = v103;
        if (v49 == 0) {
            goto lab_0x412a83;
        } else {
            goto lab_0x412a7c;
        }
    }
  lab_0x412bc4:;
    // 0x412bc4
    int64_t v104; // 0x412430
    int64_t v105 = v104 + 1; // 0x412bc4
    int64_t v106 = v105; // 0x412bcd
    if (*v12 < v105) {
        // break -> 0x412672
        goto lab_0x412672_2;
    }
    goto lab_0x412aa0;
  lab_0x412808:;
    int64_t v130 = v46 + 1; // 0x412808
    v30 = v59;
    int64_t v131 = v130; // 0x412813
    if (v130 >= *v6) {
        // break -> 0x4124b0
        goto lab_0x4124b0_3;
    }
    // 0x412819
    v45 = v131;
    goto lab_0x412819_2;
  lab_0x4127e2:
    // 0x4127e2
    if (*v14 != 0) {
        goto lab_0x412808;
    } else {
        // 0x4127ea
        if (*(int64_t *)(*(int64_t *)(*v24 + v52) + 16) > *v13) {
            int64_t v132 = *v12; // 0x412990
            int64_t v133 = v132 + 16; // 0x41299b
            int64_t v134 = v132 + 8; // 0x41299f
            *v13 = v133;
            int64_t v135 = function_40e470(a1, v134, v133, v59); // 0x4129ae
            int32_t v136 = v135; // 0x4129b3
            *v23 = v136;
            result = v135;
            if (v136 != 0) {
                // break (via goto) -> 0x4128bb
                goto lab_0x4128bb_7;
            }
            int64_t v137 = function_412430(a1, v134, *v13); // 0x4129d0
            int32_t v138 = v137; // 0x4129d5
            *v23 = v138;
            result = v137;
            if (v138 != 0) {
                // break (via goto) -> 0x4128bb
                goto lab_0x4128bb_7;
            }
            int64_t v139 = v46 + 1; // 0x4129e4
            v30 = v59;
            v131 = v139;
            if (v139 >= *v6) {
                // break -> 0x4124b0
                goto lab_0x4124b0_3;
            }
            // 0x412819
            v45 = v131;
            goto lab_0x412819_2;
        } else {
            goto lab_0x412808;
        }
    }
  lab_0x4128ac:;
    uint32_t v140 = *v23; // 0x4128ac
    v52 = v53;
    if (v140 != 0) {
        // 0x4128bb
        result = v140;
        goto lab_0x4128bb_7;
    }
    goto lab_0x4127e2;
  lab_0x412672_2:;
    int64_t v141 = *v13 + 1; // 0x412672
    *v13 = v141;
    if (v141 >= *v8) {
        // break -> 0x412690
        goto lab_0x412690;
    }
    // 0x412686
    v40 = v141;
    v51 = *(int64_t *)*v9;
    goto lab_0x41264b;
  lab_0x412a83:;
    int64_t v142 = v42;
    int64_t v122; // 0x412b15
    int64_t v128; // 0x412bec
    int64_t v127; // 0x412bf1
    int64_t * v143; // 0x412430
    int64_t * v144; // 0x412430
    if (*v12 >= v142) {
        int64_t * v126 = (int64_t *)(v55 + 16);
        v143 = (int64_t *)(v55 + 24);
        v144 = (int64_t *)(v55 + 40);
        v106 = v142;
        int64_t v145 = v41; // 0x412a96
        while (true) {
          lab_0x412aa0:
            // 0x412aa0
            v104 = v106;
            if (v104 - *v58 >= 1) {
                // 0x412aab
                int64_t * v107; // 0x412430
                int64_t v108 = *v107; // 0x412aab
                int64_t v109; // 0x412430
                int64_t v110; // 0x412430
                if (v108 > v110) {
                    int64_t v111 = *v14;
                    v109 = v111;
                } else {
                    // 0x412c40
                    int64_t * v112; // 0x412430
                    uint64_t v113 = *v112; // 0x412c40
                    if (v113 <= v110) {
                        // break -> 0x412672
                        break;
                    }
                    int64_t v114 = function_40bd10(a1, v110 + 1 & 0xffffffff); // 0x412c51
                    result = v114;
                    if ((int32_t)v114 != 0) {
                        // break (via goto) -> 0x4128bb
                        goto lab_0x4128bb_7;
                    }
                    int64_t v115 = *v11; // 0x412c5e
                    *v14 = v115;
                    v109 = v115;
                }
                int64_t v116 = v109; // 0x412ab5
                char v117 = *(char *)(v104 - 1 + v116); // 0x412abe
                char v118 = *(char *)(v116 + v110); // 0x412ac4
                if (v118 != v117) {
                    // break -> 0x412672
                    break;
                }
            }
            int64_t v119 = *(int64_t *)(*v21 + 8 * v104); // 0x412ad8
            if (v119 != 0) {
                uint64_t v120 = *(int64_t *)(v119 + 16); // 0x412ae5
                if (v120 >= 1) {
                    int64_t v121 = 0;
                    v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                    int64_t v123 = 16 * v122 + *(int64_t *)*v9; // 0x412b20
                    int64_t v124; // 0x412b38
                    int64_t v125; // 0x412b3c
                    int64_t * mem; // 0x412bec
                    if (*(char *)(v123 + 8) == 9) {
                        // 0x412b29
                        if (*v10 == *(int64_t *)v123) {
                            if (v122 == -1) {
                                goto lab_0x412bc4;
                            } else {
                                // 0x412b38
                                v124 = *v126;
                                v127 = *v58;
                                v128 = v124;
                                if (v124 == 0) {
                                    // 0x412bd8
                                    *v18 = v125;
                                    mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                    v128 = (int64_t)mem;
                                    v127 = *v18;
                                    *v126 = v128;
                                    result = 12;
                                    if (mem != NULL) {
                                        goto lab_0x412b48;
                                    } else {
                                        goto lab_0x4128bb_7;
                                    }
                                } else {
                                    goto lab_0x412b48;
                                }
                            }
                        }
                    }
                    int64_t v129 = v121 + 1; // 0x412b08
                    while (v120 != v129) {
                        // 0x412b15
                        v121 = v129;
                        v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                        v123 = 16 * v122 + *(int64_t *)*v9;
                        if (*(char *)(v123 + 8) == 9) {
                            // 0x412b29
                            if (*v10 == *(int64_t *)v123) {
                                if (v122 == -1) {
                                    goto lab_0x412bc4;
                                } else {
                                    // 0x412b38
                                    v124 = *v126;
                                    v125 = *v58;
                                    v127 = v125;
                                    v128 = v124;
                                    if (v124 == 0) {
                                        // 0x412bd8
                                        *v18 = v125;
                                        mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                        v128 = (int64_t)mem;
                                        v127 = *v18;
                                        *v126 = v128;
                                        result = 12;
                                        if (mem != NULL) {
                                            goto lab_0x412b48;
                                        } else {
                                            goto lab_0x4128bb_7;
                                        }
                                    } else {
                                        goto lab_0x412b48;
                                    }
                                }
                            }
                        }
                        // 0x412b08
                        v129 = v121 + 1;
                    }
                }
            }
            goto lab_0x412bc4;
        }
    }
    goto lab_0x412672_2;
  lab_0x412a7c:
    // 0x412a7c
    v41 = v47;
    v42 = v44 + 1;
    goto lab_0x412a83;
  lab_0x4124b0_3:
    // 0x4124b0
    v29 = *v3 + 1;
    *v3 = v29;
    if (v29 >= *(int64_t *)*(int64_t *)(v2 + 80)) {
        // break -> 0x4128bb
        goto lab_0x4128bb_7;
    }
    goto lab_0x4124c9;
  lab_0x412540:
    // 0x412540
    v54 = *v6;
    if (v54 > 0) {
        int64_t v146 = *v7; // 0x412555
        int64_t v147 = v146 + 8; // 0x41256d
        int64_t v148 = 0;
        uint64_t v149 = v148 + v54; // 0x412551
        int64_t v150 = (v149 / 0x8000000000000000 + v149) / 2; // 0x412566
        int64_t v151 = v150; // 0x412572
        int64_t v152 = v54; // 0x412572
        int64_t v153 = v150; // 0x412572
        int64_t v154; // 0x412430
        int64_t v155; // 0x412430
        uint64_t v156; // 0x412580
        int64_t v157; // 0x41258e
        if (v31 <= *(int64_t *)(40 * v150 + v147)) {
            v155 = v151;
            v154 = v148;
            if (v155 <= v148) {
                // break (via goto) -> 0x4125a7
                goto lab_0x4125a7;
            }
            // 0x412580
            v156 = v155 + v148;
            v157 = (v156 / 0x8000000000000000 + v156) / 2;
            v152 = v155;
            v153 = v157;
            while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                // 0x4125a2
                v155 = v157;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x4125a7
                    goto lab_0x4125a7;
                }
                // 0x412580
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
            }
        }
        int64_t v158 = v152;
        int64_t v159 = v153 + 1; // 0x4125f8
        v154 = v159;
        while (v159 < v158) {
            // 0x412551
            v148 = v159;
            v149 = v148 + v158;
            v150 = (v149 / 0x8000000000000000 + v149) / 2;
            v151 = v150;
            v152 = v158;
            v153 = v150;
            if (v31 <= *(int64_t *)(40 * v150 + v147)) {
                v155 = v151;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x4125a7
                    goto lab_0x4125a7;
                }
                // 0x412580
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
                while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                    // 0x4125a2
                    v155 = v157;
                    v154 = v148;
                    if (v155 <= v148) {
                        // break (via goto) -> 0x4125a7
                        goto lab_0x4125a7;
                    }
                    // 0x412580
                    v156 = v155 + v148;
                    v157 = (v156 / 0x8000000000000000 + v156) / 2;
                    v152 = v155;
                    v153 = v157;
                }
            }
            // 0x4125f8
            v158 = v152;
            v159 = v153 + 1;
            v154 = v159;
        }
      lab_0x4125a7:;
        int64_t v160 = v154;
        if (v54 > v160) {
            int64_t v161 = v146 + 40 * v160; // 0x4125b7
            int64_t v162 = v161; // 0x4125bf
            if (v160 != -1 == *(int64_t *)(v161 + 8) == v31) {
                int64_t v163 = v162;
                while (v32 != *(int64_t *)v163) {
                    // 0x4125d0
                    v162 = v163 + 40;
                    if (*(char *)(v163 + 32) == 0) {
                        goto lab_0x412608;
                    }
                    v163 = v162;
                }
                // 0x4125df
                *v23 = 0;
                v30 = v31;
                goto lab_0x4124b0_3;
            } else {
                goto lab_0x412608;
            }
        } else {
            goto lab_0x412608;
        }
    } else {
        goto lab_0x412608;
    }
  lab_0x412489:
    // 0x412489
    v30 = v31;
    if ((v35 & 0x2000) != 0 == (v36 & 2) == 0) {
        goto lab_0x4124b0_3;
    } else {
        if ((char)(v34 / 256) > -1) {
            goto lab_0x412540;
        } else {
            // 0x41249e
            v30 = v31;
            if ((v36 & 8) != 0) {
                goto lab_0x412540;
            } else {
                goto lab_0x4124b0_3;
            }
        }
    }
  lab_0x412b48:
    // 0x412b48
    *(int64_t *)(v2 - 16) = 9;
    int64_t v164 = function_4112a0(a1, v128, *v56, v127, v122, v104, (int64_t)&g127); // 0x412b5b
    int32_t v165 = v164; // 0x412b62
    if (v165 == 1) {
        goto lab_0x412bc4;
    } else {
        // 0x412b67
        result = v164;
        if (v165 != 0) {
            goto lab_0x4128bb_7;
        } else {
            int64_t v166 = *v143; // 0x412b6f
            if (*v57 == v166) {
                int64_t v167 = 2 * v166 | 1; // 0x412c6c
                *v18 = v167;
                int64_t * mem2 = realloc((int64_t *)*v144, 8 * (int32_t)v167); // 0x412c82
                result = 12;
                if (mem2 == NULL) {
                    goto lab_0x4128bb_7;
                } else {
                    // 0x412c90
                    *v144 = (int64_t)mem2;
                    *v143 = *v18;
                    goto lab_0x412b7d;
                }
            } else {
                goto lab_0x412b7d;
            }
        }
    }
  lab_0x412b7d:;
    int64_t * mem3 = calloc(1, 40); // 0x412b87
    result = 12;
    if (mem3 == NULL) {
        goto lab_0x4128bb_7;
    } else {
        int64_t v168 = (int64_t)mem3; // 0x412b87
        int64_t v169 = *v57; // 0x412b91
        *(int64_t *)(*v144 + 8 * v169) = v168;
        *mem3 = v122;
        *(int64_t *)(v168 + 8) = v104;
        *v57 = v169 + 1;
        function_412290(a1, v55, v168, *v15, *v12);
        goto lab_0x412bc4;
    }
}
// Address range: 0x412cb0 - 0x412e67
int64_t function_412cb0(int32_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 72); // 0x412cc4
    int64_t v3 = *v2; // 0x412cc4
    int64_t * v4 = (int64_t *)(v1 + 184); // 0x412cc8
    int64_t v5 = *(int64_t *)(v1 + 152); // 0x412ccf
    int64_t v6 = 8 * v3; // 0x412cd6
    int64_t * v7 = (int64_t *)(v1 + 192); // 0x412ce1
    int64_t * v8 = (int64_t *)(*v4 + v6);
    int64_t result; // 0x412cb0
    if (*v7 < v3) {
        // 0x412cea
        *v8 = a3;
        *v7 = v3;
        result = a3;
    } else {
        int64_t v9 = *v8; // 0x412d20
        if (v9 == 0) {
            // 0x412df8
            *v8 = a3;
            result = a3;
        } else {
            int64_t v10 = *(int64_t *)(v9 + 80); // 0x412d2c
            int64_t v11; // bp-88, 0x412cb0
            if (a3 == 0) {
                // 0x412db0
                v11 = __asm_movaps(__asm_movdqu(*(int128_t *)v10));
                int64_t v12 = function_40e5c0(v1, v3 - 1, *(int32_t *)(v1 + 160)); // 0x412dd0
                int64_t v13 = function_40db40((int128_t *)a1, v5, &v11, (int32_t)v12); // 0x412de2
                *v8 = v13;
                result = v13;
            } else {
                int64_t v14 = *(int64_t *)(a3 + 80); // 0x412d35
                int64_t v15; // 0x412cb0
                int32_t v16 = function_40d9b0(&v11, v14, v10, v15); // 0x412d49
                *a1 = v16;
                if (v16 != 0) {
                    // 0x412d05
                    return 0;
                }
                int64_t v17 = function_40e5c0(v1, *v2 - 1, *(int32_t *)(v1 + 160)); // 0x412d66
                int64_t v18 = function_40db40((int128_t *)a1, v5, &v11, (int32_t)v17); // 0x412d87
                *(int64_t *)(*v4 + v6) = v18;
                result = v18;
                if (v14 != 0) {
                    // 0x412da0
                    free((int64_t *)v15);
                    result = v18;
                }
            }
        }
    }
    // 0x412cf7
    if (*(int64_t *)(v5 + 152) == 0) {
        // 0x412d05
        return result;
    }
    // 0x412e08
    if (result == 0) {
        // 0x412d05
        return 0;
    }
    int64_t v19 = result + 16; // 0x412e0d
    int64_t v20 = result + 24; // 0x412e11
    int32_t v21 = function_40e470(v1, v19, v20, v3); // 0x412e26
    *a1 = v21;
    if (v21 != 0) {
        // 0x412d05
        return 0;
    }
    // 0x412e2e
    if ((*(char *)(result + 104) & 64) == 0) {
        // 0x412d05
        return result;
    }
    int32_t v22 = function_412430(v1, v19, v20); // 0x412e46
    *a1 = v22;
    int64_t result2 = 0; // 0x412e4c
    if (v22 == 0) {
        // 0x412e4e
        result2 = *(int64_t *)(*v4 + v6);
    }
    // 0x412d05
    return result2;
}
// Address range: 0x412e70 - 0x413194
int64_t function_412e70(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 24); // 0x412e89
    uint64_t v2 = *v1; // 0x412e89
    int64_t * mem = malloc(8); // 0x412ea3
    if (mem == NULL) {
        // 0x413180
        return 12;
    }
    // 0x412eb6
    int64_t v3; // bp-152, 0x412e70
    int64_t v4 = &v3; // 0x412e85
    int64_t v5 = (int64_t)mem; // 0x412ea3
    *mem = *(int64_t *)(a2 + 16);
    int64_t v6 = v5; // 0x412ece
    int64_t v7; // 0x412e70
    int64_t v8; // 0x412e70
    int64_t v9; // 0x412e70
    int64_t v10; // 0x412e70
    int64_t * v11; // 0x412e70
    int64_t * v12; // 0x412e70
    int64_t v13; // 0x412e70
    int64_t v14; // 0x412f2e
    int64_t * v15; // 0x412f49
    int64_t * v16; // 0x412e70
    int64_t v17; // 0x41301e
    if ((int32_t)v5 == 0) {
        // 0x412ed4
        v6 = 0;
        if (v2 >= 1) {
            // 0x412eee
            v11 = (int64_t *)(v4 + 16);
            int32_t * v18 = (int32_t *)(v4 + 28);
            int32_t * v19 = (int32_t *)(a1 + 224);
            int64_t * v20 = (int64_t *)(a1 + 152);
            v12 = (int64_t *)(v4 + 8);
            int64_t * v21 = (int64_t *)(v4 + 40);
            int64_t * v22 = (int64_t *)(v4 + 48);
            int64_t * v23 = (int64_t *)(v4 + 32);
            v13 = a2 + 40;
            int64_t v24 = v2; // 0x412e70
            while (true) {
                int64_t v25 = 8 * v24; // 0x412ef1
                *v11 = v25;
                if (*(int64_t *)(v25 + a2) == 0) {
                    uint32_t v26 = *v18 + 1; // 0x413140
                    *v18 = v26;
                    if ((int64_t)*v19 < (int64_t)v26) {
                        // break -> 0x413156
                        break;
                    }
                } else {
                    // 0x412f09
                    *v18 = 0;
                    if (*v19 < 0) {
                        // break -> 0x413156
                        break;
                    }
                }
                int64_t v27 = *(int64_t *)(a1 + 184); // 0x412f22
                v14 = v24 - 1;
                *(int64_t *)(v4 + 72) = 0;
                int64_t v28 = *(int64_t *)(v27 - 8 + *v11); // 0x412f3b
                v9 = v27;
                if (v28 != 0) {
                    // 0x412f49
                    v15 = (int64_t *)(v28 + 40);
                    int64_t v29 = *v20; // 0x412f4e
                    v9 = v27;
                    if (*v15 >= 1) {
                        // 0x412f5b
                        *v12 = 0;
                        int64_t * v30 = (int64_t *)v29; // 0x41301a
                        v16 = (int64_t *)(v29 + 24);
                        v7 = 0;
                        while (true) {
                          lab_0x413011:
                            // 0x413011
                            v17 = *(int64_t *)(8 * v7 + *(int64_t *)(v28 + 48));
                            int64_t v31 = 16 * v17; // 0x413025
                            int64_t v32 = v31 + *v30; // 0x413029
                            v10 = v32;
                            if ((*(char *)(v32 + 10) & 16) == 0) {
                                goto lab_0x412f70;
                            } else {
                                int64_t v33 = *v20; // 0x413036
                                *v21 = v31;
                                int64_t v34 = v33 + 216; // 0x413052
                                *v22 = v33;
                                *v23 = *v1;
                                int64_t v35 = function_411010(*(int64_t *)v33, v34, v17, a1, v14); // 0x413063
                                int64_t v36 = *v21; // 0x413068
                                int32_t v37 = v35; // 0x41306d
                                int64_t v38 = v35 & 0xffffffff; // 0x41306f
                                if (v37 < 1) {
                                    // 0x4130d0
                                    v8 = v38;
                                    if (v37 != 0) {
                                        goto lab_0x412fb1;
                                    } else {
                                        // 0x4130d6
                                        v10 = *v30 + v36;
                                        goto lab_0x412f70;
                                    }
                                } else {
                                    int64_t v39 = (0x100000000 * v35 >> 32) + v14; // 0x413076
                                    v8 = v38;
                                    if (*v23 < v39) {
                                        goto lab_0x412fb1;
                                    } else {
                                        int64_t v40 = *(int64_t *)(8 * v39 + v34); // 0x41308c
                                        if (v40 == 0) {
                                            // 0x4130d6
                                            v10 = *v30 + v36;
                                            goto lab_0x412f70;
                                        } else {
                                            // 0x413095
                                            *v23 = v36;
                                            int64_t v41 = *(int64_t *)(*(int64_t *)(*v22 + 24) + 8 * v17); // 0x4130a6
                                            v8 = v38;
                                            if (function_40c890(*(int64_t *)(v40 + 16), v40 + 24, v41) != 0) {
                                                goto lab_0x412fb1;
                                            } else {
                                                // 0x4130b8
                                                v10 = *v30 + *v23;
                                                goto lab_0x412f70;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x4130e8:
                // 0x4130e8
                v6 = v9;
                if ((int32_t)v9 != 0) {
                    goto lab_0x413115_3;
                }
                // 0x4130ff
                v24 = v14;
                v6 = 0;
                if (v14 == 0) {
                    goto lab_0x413115_3;
                }
            }
            // 0x413156
            memset((int64_t *)a2, 0, (int32_t)*v11);
            free((int64_t *)*(int64_t *)(v4 + 80));
            return (int32_t)&g127 ^ (int32_t)&g127;
        }
    }
  lab_0x413115_3:;
    int32_t * v42 = (int32_t *)(v4 + 8); // 0x41311a
    *v42 = (int32_t)v6;
    free((int64_t *)*(int64_t *)(v4 + 80));
    return (int64_t)*v42;
  lab_0x412f70:;
    int64_t v43 = v10;
    if ((char)function_40e6b0(a1, v43, v14) == 0) {
        goto lab_0x412ffc;
    } else {
        int64_t v44 = *(int64_t *)(*v11 + v43); // 0x412f87
        if (v44 == 0) {
            goto lab_0x412ffc;
        } else {
            int64_t v45 = *(int64_t *)(*v16 + 8 * v17); // 0x412f9d
            v8 = 1;
            if (function_40c890(*(int64_t *)(v44 + 16), v44 + 24, v45) == 0) {
                goto lab_0x412ffc;
            } else {
                goto lab_0x412fb1;
            }
        }
    }
  lab_0x412ffc:;
    int64_t v46 = *v12 + 1; // 0x412ffc
    *v12 = v46;
    v7 = v46;
    v9 = v46;
    if (v46 >= *v15) {
        // break -> 0x4130e8
        goto lab_0x4130e8;
    }
    goto lab_0x413011;
  lab_0x412fb1:
    // 0x412fb1
    if (*(int64_t *)v13 == 0) {
        goto lab_0x412fe7;
    } else {
        int64_t v47 = *(int64_t *)(*v16 + 8 * v17); // 0x412fd2
        *(int64_t *)(v4 - 16) = v14;
        int64_t v48 = *(int64_t *)(v4 + 56); // 0x412fd7
        int64_t v49 = function_40cb20(a1, v13, v48, v47, (0x100000000 * v8 >> 32) + v14, v17, (int64_t)&g127); // 0x412fdc
        if ((char)v49 != 0) {
            goto lab_0x412ffc;
        } else {
            goto lab_0x412fe7;
        }
    }
  lab_0x412fe7:
    // 0x412fe7
    v6 = 12;
    if ((char)function_40b280(v4 + 64, v17) == 0) {
        goto lab_0x413115_3;
    }
    goto lab_0x412ffc;
}
// Address range: 0x4131a0 - 0x415129
int64_t function_4131a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    // 0x4131a0
    int64_t v1; // 0x4131a0
    int64_t v2 = v1;
    int64_t v3; // bp-312, 0x4131a0
    __asm_rep_stosq_memset((char *)&v3, 0, 32);
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x4131ec
    char * v5 = (char *)v4; // 0x4131f8
    char * v6 = v5; // 0x413200
    if (v4 != 0) {
        unsigned char v7 = *(char *)(a1 + 56); // 0x413202
        v6 = NULL;
        if (a4 != a5 && (v7 & 8) != 0) {
            // 0x413218
            v6 = v7 % 2 == 0 ? v5 : NULL;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x413235
    uint64_t v9 = *v8; // 0x413235
    int64_t v10 = 0; // 0x413241
    int64_t v11 = a7; // 0x413241
    if (v9 < a7) {
        // 0x413243
        v10 = -1 - v9 + a7;
        v11 = v9 + 1;
    }
    int64_t v12 = *(int64_t *)(a1 + 16); // 0x41326d
    if (v12 == 0) {
        // 0x413c10
        return 1;
    }
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x41327d
    int64_t v14 = *v13; // 0x41327d
    if (v14 == 0) {
        // 0x413c10
        return 1;
    }
    int64_t * v15 = (int64_t *)(a1 + 80); // 0x41328a
    int64_t v16 = *v15; // 0x41328a
    if (v16 == 0) {
        // 0x413c10
        return 1;
    }
    int64_t * v17 = (int64_t *)(a1 + 88); // 0x413297
    int64_t v18 = *v17; // 0x413297
    if (v18 == 0) {
        // 0x413c10
        return 1;
    }
    int64_t * v19 = (int64_t *)(a1 + 96); // 0x4132a4
    if (*v19 == 0) {
        // 0x413c10
        return 1;
    }
    int64_t v20 = a4; // 0x4132b4
    int64_t v21 = a5; // 0x4132b4
    if (*(int64_t *)(v14 + 16) != 0) {
        goto lab_0x4132e8;
    } else {
        // 0x4132b6
        v20 = a4;
        v21 = a5;
        if (*(int64_t *)(v16 + 16) != 0) {
            goto lab_0x4132e8;
        } else {
            // 0x4132bd
            if (*(int64_t *)(v18 + 16) == 0) {
                goto lab_0x4132ca;
            } else {
                // 0x4132c4
                if (*(char *)(a1 + 56) < 0) {
                    goto lab_0x4132e8;
                } else {
                    goto lab_0x4132ca;
                }
            }
        }
    }
  lab_0x413bf0_9:;
    // 0x413bf0
    int64_t v22; // 0x4131a0
    free((int64_t *)v22);
    int64_t * v23; // 0x4131a0
    int64_t v24; // 0x4131a0
    int64_t v25; // 0x4131a0
    if (*v23 != 0) {
        // 0x414408
        function_40c500(&v3);
        free((int64_t *)v24);
        free((int64_t *)v25);
    }
    // 0x413c08
    function_40c4c0(&v3);
    // 0x413c10
    int64_t v26; // 0x4131a0
    return v26 & 0xffffffff;
  lab_0x414158_3:;
    // 0x414158
    int32_t v27; // 0x4131a0
    int32_t v28 = v27; // bp-392, 0x414158
    int32_t v29; // 0x4131a0
    int32_t v30 = v29; // 0x414162
    int64_t v31; // 0x4131a0
    int64_t v32 = v31; // 0x414162
    int64_t v33 = 0; // 0x414162
    int64_t v34; // 0x4131a0
    int64_t v35 = v34; // 0x414162
    int64_t v36; // 0x4131a0
    int64_t v37 = v36; // 0x414162
    int64_t v38; // 0x4131a0
    int64_t v39 = v38; // 0x414162
    int64_t * v40; // 0x4131a0
    v23 = v40;
    v26 = 12;
    int64_t v41; // 0x4131a0
    v25 = v41;
    int64_t v42; // 0x4131a0
    v24 = v42;
    v22 = 0;
    int64_t v43; // 0x4131a0
    if (v43 == 0) {
        goto lab_0x413bf0_9;
    } else {
        goto lab_0x413948;
    }
  lab_0x4139ef:;
    // 0x4139ef
    int64_t v44; // 0x4131a0
    int64_t v45 = v44;
    int64_t v46; // 0x4131a0
    int64_t v47 = v46;
    int64_t v48; // 0x4131a0
    int64_t v49 = v48;
    int32_t v50; // 0x4131a0
    int32_t v51 = v50;
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v52; // 0x4131a0
    int64_t v53 = v52; // 0x4131a0
    int128_t v54; // 0x4131a0
    int128_t v55 = v54; // 0x4131a0
    int64_t v56; // 0x4131a0
    int64_t v57 = v56; // 0x4131a0
    int32_t v58; // 0x4131a0
    int64_t v59; // 0x4131a0
    int64_t v60; // 0x4131a0
    int64_t v61; // 0x4131a0
    int64_t v62; // 0x4131a0
    int64_t v63; // 0x4131a0
    int64_t v64; // 0x4131a0
    int64_t v65; // 0x4131a0
    int64_t v66; // 0x4131a0
    int64_t v67; // bp-376, 0x4131a0
    int64_t v68; // 0x4131a0
    int64_t * mem; // 0x41426f
    int64_t v69; // 0x4131a0
    int64_t * mem2; // 0x414296
    int64_t v70; // 0x414296
    int128_t v71; // 0x4142be
    int64_t v72; // 0x41339d
    char * v73; // 0x4131a0
    char * v74; // 0x4131a0
    int64_t v75; // 0x4131a0
    int128_t v76; // 0x4131a0
    switch (v45) {
        case -1: {
            goto lab_0x414050;
        }
        case -2: {
            goto lab_0x413bf0_9;
        }
        default: {
            // 0x413a03
            int64_t v77; // 0x4131a0
            if (v11 < 2 | (*v73 & 16) != 0) {
                // 0x413bc0
                v65 = v45;
                v64 = v43;
                if (*v40 == 0) {
                    goto lab_0x413bd3_2;
                }
                int64_t v78 = *(int64_t *)(8 * v45 + v43); // 0x41421e
                int64_t v79 = function_40e7e0(&v3, *(int64_t *)(v78 + 16), v78 + 24, v45); // 0x41422a
                v77 = v79;
            } else {
                int64_t v80 = *(int64_t *)(8 * v45 + v43); // 0x413a37
                int64_t v81 = function_40e7e0(&v3, *(int64_t *)(v80 + 16), v80 + 24, v45); // 0x413a43
                v77 = v81;
                if (*v74 % 2 == 0) {
                    // 0x413a65
                    v65 = v45;
                    v64 = v43;
                    v77 = v81;
                    if (*v40 == 0) {
                        goto lab_0x413bd3_2;
                    }
                }
            }
            // 0x41423f
            if (v45 >= 0x1fffffffffffffff) {
                // break -> 0x413bf0
                break;
            }
            int64_t v82 = v45 + 1; // 0x41425f
            int32_t size = 8 * (int32_t)v82; // 0x41426f
            mem = malloc(size);
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if (mem == NULL) {
                // break -> 0x413bf0
                break;
            }
            int64_t v83 = v77;
            v69 = (int64_t)mem;
            if (*v40 == 0) {
                int128_t v84 = __asm_pxor(v54, v54); // 0x413fd0
                v67 = v69;
                __asm_movaps(v84);
                int64_t v85 = function_412e70(v72, v75); // 0x414017
                free(NULL);
                int32_t v86 = v85;
                v58 = v86;
                v68 = 0;
                v66 = v83;
                v76 = v84;
                v63 = v85;
                if (v86 != 0) {
                    goto lab_0x414802;
                } else {
                    // 0x414035
                    v60 = v45;
                    if (*mem != 0) {
                        goto lab_0x4143a8;
                    }
                    // 0x41403f
                    free(mem);
                    v53 = v83;
                    v55 = v84;
                    v57 = v69;
                    goto lab_0x414050;
                }
            } else {
                // 0x414293
                mem2 = malloc(size);
                v70 = (int64_t)mem2;
                int64_t v87 = v45; // 0x4142a6
                if (mem2 == NULL) {
                    // 0x414844
                    free(mem);
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    goto lab_0x413bf0_9;
                }
                v61 = v83;
                v62 = v82;
                int128_t v88 = v54;
                memset(mem2, 0, 8 * (int32_t)v62);
                v71 = __asm_pxor(v88, v88);
                __asm_movaps(v71);
                v67 = v69;
                int64_t v89 = function_412e70(v72, v75); // 0x414301
                free(NULL);
                int32_t v90 = v89;
                v58 = v90;
                v68 = v70;
                v66 = v61;
                v76 = v71;
                v63 = v89;
                while (v90 == 0) {
                    // 0x414323
                    v59 = v87;
                    if (*mem != 0) {
                        goto lab_0x41437d_2;
                    }
                    // 0x414329
                    if (*mem2 != 0) {
                        goto lab_0x41437d_2;
                    }
                    int64_t v91 = v59; // 0x414348
                    if (v59 == 0) {
                        goto lab_0x414430_2;
                    }
                    int64_t v92; // 0x4131a0
                    int64_t v93; // 0x4131a0
                    int64_t v94; // 0x41434e
                    while (true) {
                        // 0x41434e
                        v92 = v91;
                        v93 = v92 - 1;
                        v94 = *(int64_t *)(8 * v93 + v43);
                        if (v94 != 0) {
                            // 0x414357
                            if ((*(char *)(v94 + 104) & 16) != 0) {
                                // break -> 0x41435d
                                break;
                            }
                        }
                        // 0x414340
                        v91 = v93;
                        if (v93 == 0) {
                            goto lab_0x414430_2;
                        }
                    }
                    int64_t v95 = function_40e7e0(&v3, *(int64_t *)(v94 + 16), v94 + 24, v93); // 0x414370
                    v87 = v93;
                    v61 = v95;
                    v62 = v92;
                    v88 = v71;
                    memset(mem2, 0, 8 * (int32_t)v62);
                    v71 = __asm_pxor(v88, v88);
                    __asm_movaps(v71);
                    v67 = v69;
                    v89 = function_412e70(v72, v75);
                    free(NULL);
                    v90 = v89;
                    v58 = v90;
                    v68 = v70;
                    v66 = v61;
                    v76 = v71;
                    v63 = v89;
                }
                goto lab_0x414802;
            }
        }
    }
  lab_0x413e6e:;
    // 0x413e6e
    int64_t v96; // 0x4131a0
    int64_t v97 = v96 + 1; // 0x413e6e
    int64_t v98; // 0x4131a0
    int64_t v99 = v98; // 0x413e76
    int64_t v100; // 0x4131a0
    int64_t v101 = v100; // 0x413e76
    int64_t v102; // 0x4131a0
    int64_t v103 = v102; // 0x413e76
    int64_t v104; // 0x4131a0
    int64_t v105 = v104; // 0x413e76
    int64_t v106; // 0x4131a0
    int64_t v107 = v106; // 0x413e76
    int64_t v108 = v97; // 0x413e76
    int64_t v109 = v98; // 0x413e76
    int64_t v110 = v100; // 0x413e76
    int64_t v111 = v102; // 0x413e76
    int64_t v112 = v106; // 0x413e76
    int64_t v113 = v104; // 0x413e76
    int64_t v114 = v106; // 0x413e76
    int64_t v115 = v36; // 0x413e76
    int64_t v116; // 0x4131a0
    int64_t v117 = v116; // 0x413e76
    int64_t * v118; // 0x413d00
    if (v97 >= *v118) {
        // break -> 0x4141c3
        goto lab_0x4141c3;
    }
    goto lab_0x413e7c;
  lab_0x413d60:;
    // 0x413d60
    int64_t v119; // 0x4131a0
    int64_t v121; // 0x413e84
    int64_t v135 = function_411010(v36, a1 + 216, v121, v72, v119); // 0x413d6e
    int64_t v120; // 0x4131a0
    v98 = v120;
    v100 = v72;
    v102 = v121;
    v104 = v36;
    int64_t v136; // 0x4131a0
    v106 = v136;
    v116 = v121;
    int64_t v137; // 0x4131a0
    int64_t v138; // 0x4131a0
    int64_t v139; // 0x4131a0
    int64_t v140; // 0x4131a0
    int32_t v141; // bp-388, 0x4131a0
    int64_t v142; // 0x413dce
    int64_t * v143; // 0x413312
    int32_t v127; // 0x4131a0
    int64_t v144; // 0x4131a0
    if ((int32_t)v135 == 0) {
        goto lab_0x413e6e;
    } else {
        int64_t v145 = (0x100000000 * v135 >> 32) + v136; // 0x413d7e
        int32_t v146 = function_40be60(v72, v145);
        v141 = v146;
        v27 = v146;
        v31 = v120;
        v34 = v119;
        v38 = v121;
        if (v146 != 0) {
            goto lab_0x414158_3;
        }
        int64_t v147 = 8 * v145; // 0x413dc6
        v142 = v147 + v43;
        int64_t v148 = *v8 + 24 * *(int64_t *)(*v143 + 8 * v121); // 0x413dde
        int64_t * v149 = (int64_t *)v142; // 0x413de2
        int64_t v150 = *v149; // 0x413de2
        if (v150 == 0) {
            // 0x413f00
            v67 = __asm_movaps(__asm_movdqu(*(int128_t *)v148));
            int64_t v151 = *(int64_t *)(v148 + 16); // 0x413f13
            int64_t v152 = function_40e5c0(v72, v145 - 1, v127); // 0x413f26
            int64_t v153 = v152 & 0xffffffff; // 0x413f3e
            int64_t v154 = function_40db40((int128_t *)&v141, a1, &v67, (int32_t)v152); // 0x413f40
            *v149 = v154;
            v98 = v151;
            v100 = v153;
            v102 = v43;
            v104 = v144;
            v106 = v136;
            v116 = v147;
            v140 = v151;
            v138 = v153;
            v139 = v144;
            v137 = v147;
            if (v154 != 0) {
                goto lab_0x413e6e;
            } else {
                goto lab_0x413f60;
            }
        } else {
            int64_t v155 = function_40d9b0(&v67, *(int64_t *)(v150 + 80), v148, v72); // 0x413dfa
            int32_t v156 = v155;
            v141 = v156;
            v27 = v156;
            v31 = v120;
            v34 = v142;
            v38 = v147;
            if (v156 != 0) {
                goto lab_0x414158_3;
            }
            int64_t v157 = function_40e5c0(v72, v145 - 1, v127); // 0x413e1c
            int64_t v158 = v157 & 0xffffffff; // 0x413e34
            int64_t v159 = function_40db40((int128_t *)&v141, a1, &v67, (int32_t)v157); // 0x413e3e
            *v149 = v159;
            free((int64_t *)v120);
            v98 = v120;
            v100 = v158;
            v102 = v43;
            v104 = v120;
            v106 = v136;
            v116 = v142;
            v140 = v120;
            v138 = v158;
            v139 = v120;
            v137 = v142;
            if (*v149 == 0) {
                goto lab_0x413f60;
            } else {
                goto lab_0x413e6e;
            }
        }
    }
  lab_0x413d41:;
    // 0x413d41
    int64_t v132; // 0x4131a0
    int64_t v160 = v132;
    v98 = v120;
    int64_t v129; // 0x413ed4
    v100 = v129;
    v102 = v160;
    v104 = v72;
    v106 = v119;
    v116 = v121;
    uint64_t v125; // 0x413e98
    uint64_t v126; // 0x413ebe
    int64_t v128; // 0x413ecf
    if ((v125 & 0x2000) != 0 == (v126 & 2) == 0) {
        goto lab_0x413e6e;
    } else {
        uint32_t v161 = (int32_t)v128 & 128; // 0x413d4e
        if (v161 == 0) {
            goto lab_0x413d60;
        } else {
            // 0x413d56
            v98 = v120;
            v100 = v161;
            v102 = v160;
            v104 = v72;
            v106 = v119;
            v116 = v121;
            if ((v126 & 8) == 0) {
                goto lab_0x413e6e;
            } else {
                goto lab_0x413d60;
            }
        }
    }
  lab_0x413f60:
    // 0x413f60
    v98 = v140;
    v100 = v138;
    v102 = v43;
    v104 = v139;
    v106 = v136;
    v116 = v137;
    v27 = v141;
    v31 = v140;
    v34 = v142;
    v38 = v137;
    if (v141 != 0) {
        goto lab_0x414158_3;
    }
    goto lab_0x413e6e;
  lab_0x413bd3_2:
    // 0x413bd3
    v23 = v40;
    int64_t v162; // 0x413725
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v163; // 0x4131a0
    int64_t v164; // 0x4131a0
    int64_t v165; // 0x4131a0
    int64_t v166; // 0x414597
    if (v11 != 0) {
        // 0x414578
        v165 = a8 + 16;
        v166 = 16 * v11 + a8;
        v163 = v165;
        if (v11 < 2) {
            // 0x414884
            *(int64_t *)a8 = 0;
            *(int64_t *)(a8 + 8) = v65;
            v164 = 0;
            goto lab_0x414652;
        } else {
            goto lab_0x4145b0;
        }
    } else {
        goto lab_0x413bf0_9;
    }
  lab_0x4143a8:
    // 0x4143a8
    free((int64_t *)v43);
    v65 = v60;
    v64 = v69;
    goto lab_0x413bd3_2;
  lab_0x41437d_2:;
    int64_t v167 = function_40e030(a1, v69, v70, v62); // 0x41438b
    free(mem2);
    int32_t v168 = v167;
    v60 = v59;
    v58 = v168;
    v68 = 0;
    v66 = v61;
    v76 = v71;
    v63 = v167;
    if (v168 != 0) {
        goto lab_0x414802;
    } else {
        goto lab_0x4143a8;
    }
  lab_0x414430_2:
    // 0x414430
    free(mem);
    free(mem2);
    function_40c500(&v3);
    int32_t v169 = v51; // 0x414450
    int64_t v170 = v61; // 0x414450
    int128_t v171 = v71; // 0x414450
    int64_t v172; // bp-384, 0x4131a0
    int64_t v173 = v172; // 0x414450
    int64_t v174 = v49; // 0x414450
    int64_t v175 = v47; // 0x414450
    int64_t v176 = v69; // 0x414450
    goto lab_0x414060;
  lab_0x413914:;
    // 0x413914
    int64_t v298; // 0x4131a0
    int64_t v469 = v298;
    int64_t v297; // 0x4131a0
    int64_t v470 = v297;
    int64_t v296; // 0x4131a0
    int64_t v471 = v296;
    int64_t v293; // 0x4131a0
    int64_t v472 = v293;
    int64_t v291; // 0x4131a0
    int64_t v473 = v291;
    int64_t v294; // 0x4131a0
    int32_t v474 = (int32_t)v294 + 1; // 0x413918
    int64_t v326; // 0x4131a0
    int64_t v475 = (int64_t)*(char *)(v294 + v326); // 0x413928
    int64_t v282; // 0x4131a0
    int64_t * v476 = (int64_t *)(v282 + 88); // 0x41392c
    int64_t v477 = *v476; // 0x41392c
    int64_t v295; // 0x4131a0
    int64_t v478 = v295; // 0x413933
    int64_t v479 = v477; // 0x413933
    int64_t v480; // 0x4131a0
    int64_t v292; // 0x4131a0
    int64_t v481; // 0x4131a0
    int64_t v482; // 0x4131a0
    int64_t v347; // 0x4131a0
    if (v477 == 0) {
        int64_t v483 = v292;
        int64_t v484 = *(int64_t *)(v282 + 96); // 0x413f78
        while (v484 == 0) {
            // 0x414170
            if ((char)function_40f2d0(a1, v282, v472, v483, v471) == 0) {
                // 0x414188
                v28 = 12;
                v30 = v474;
                v32 = v473;
                v33 = 0;
                v35 = v471;
                v37 = v470;
                v39 = v469;
                v23 = v40;
                v26 = 12;
                v25 = v41;
                v24 = v42;
                v22 = 0;
                if (v43 != 0) {
                    goto lab_0x413948;
                } else {
                    goto lab_0x413bf0_9;
                }
            }
            int64_t v485 = *v476; // 0x41392c
            v478 = a1;
            v479 = v485;
            if (v485 != 0) {
                goto lab_0x413939;
            }
            v484 = *(int64_t *)(v282 + 96);
        }
        int64_t v486 = v484 + 8 * v475;
        int64_t v487 = function_40e5c0(v72, (int64_t)v474 - 1, v127) % 2 == 0 ? v486 : v486 + 2048;
        v482 = v347;
        v480 = v487;
        v481 = v72;
    } else {
      lab_0x413939:
        // 0x413939
        v482 = v472;
        v480 = v479 + 8 * v475;
        v481 = v478;
    }
    int64_t v488 = *(int64_t *)v480;
    v30 = v474;
    v32 = v473;
    v33 = v488;
    v35 = v471;
    v37 = v470;
    v39 = v469;
    int32_t v489 = v474; // 0x413946
    int64_t v490 = v473; // 0x413946
    int64_t v491 = v482; // 0x413946
    int64_t v492 = v488; // 0x413946
    int64_t v493 = v481; // 0x413946
    int64_t v494 = v471; // 0x413946
    int64_t v495 = v470; // 0x413946
    int64_t v496 = v469; // 0x413946
    if (v43 == 0) {
        goto lab_0x41395e;
    } else {
        goto lab_0x413948;
    }
  lab_0x413d00:;
    // 0x413d00
    int64_t v300; // 0x4131a0
    int64_t v497 = v300;
    int64_t v299; // 0x4131a0
    int64_t v498 = v299;
    v118 = (int64_t *)(v282 + 16);
    int64_t v277; // 0x4131a0
    v109 = v277;
    int64_t v284; // 0x4138d9
    v110 = v284;
    int64_t v278; // 0x4131a0
    v111 = v278;
    v112 = v498;
    v113 = v497;
    int64_t v280; // 0x4131a0
    v114 = v280;
    int64_t v281; // 0x4131a0
    v115 = v281;
    int64_t v283; // 0x4131a0
    v117 = v283;
    if (*v118 >= 1) {
        int64_t * v122 = (int64_t *)(v282 + 24); // 0x413e7c
        v136 = v29;
        v99 = v277;
        v101 = v284;
        v103 = v278;
        v105 = v497;
        v107 = v498;
        v108 = 0;
        while (true) {
          lab_0x413e7c:
            // 0x413e7c
            v96 = v108;
            v119 = v107;
            v36 = v105;
            v120 = v99;
            v121 = *(int64_t *)(*v122 + 8 * v96);
            int64_t v123 = 16 * v121 + v36; // 0x413e8f
            v98 = v120;
            v100 = v101;
            v102 = v103;
            v104 = v36;
            v106 = v119;
            v116 = v121;
            if ((*(char *)(v123 + 10) & 16) == 0) {
                goto lab_0x413e6e;
            } else {
                uint32_t v124 = *(int32_t *)(v123 + 8); // 0x413e98
                if ((v124 & 0x3ff00) == 0) {
                    goto lab_0x413d60;
                } else {
                    // 0x413ea7
                    v125 = (int64_t)v124;
                    v126 = function_40e5c0(v72, v119, v127);
                    v128 = v125 / 256;
                    v129 = v128 & 0xff03ff;
                    if ((v125 & 1024) != 0) {
                        // 0x413d30
                        v98 = v120;
                        v100 = v129;
                        v102 = v128;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v126 % 2 == 0) {
                            goto lab_0x413e6e;
                        } else {
                            uint32_t v130 = (int32_t)v128 & 8; // 0x413d38
                            int64_t v131 = v130; // 0x413d38
                            v132 = v131;
                            v98 = v120;
                            v100 = v129;
                            v102 = v131;
                            v104 = v72;
                            v106 = v119;
                            v116 = v121;
                            if (v130 != 0) {
                                goto lab_0x413e6e;
                            } else {
                                goto lab_0x413d41;
                            }
                        }
                    } else {
                        uint32_t v133 = (int32_t)v128 & 8; // 0x413ee2
                        int64_t v134 = v133; // 0x413ee2
                        v132 = v134;
                        v98 = v120;
                        v100 = v129;
                        v102 = v134;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v133 == 0 || v126 % 2 == 0) {
                            goto lab_0x413d41;
                        } else {
                            goto lab_0x413e6e;
                        }
                    }
                }
            }
        }
    }
  lab_0x4141c3:
    // 0x4141c3
    v28 = 0;
    v291 = v109;
    v292 = v110;
    v293 = v111;
    v294 = v112;
    v295 = v113;
    v296 = v114;
    v297 = v115;
    v298 = v117;
    goto lab_0x413914;
  lab_0x41395e:;
    int64_t v499 = v496;
    int64_t v500 = v495;
    int64_t v501 = v494;
    int64_t v502 = v490;
    int32_t v503 = v489;
    int32_t v504 = v503; // 0x413961
    int64_t v505 = v491; // 0x413961
    int64_t v506 = v492; // 0x413961
    int64_t v507 = v493; // 0x413961
    int64_t v265; // 0x4131a0
    int64_t v263; // 0x4131a0
    int64_t v264; // 0x4131a0
    int32_t v261; // 0x4131a0
    int64_t v262; // 0x4131a0
    int64_t v260; // 0x4131a0
    int64_t v276; // 0x4131a0
    int64_t v259; // 0x4131a0
    int64_t v275; // 0x4131a0
    int64_t v274; // 0x4131a0
    int32_t v258; // 0x4131a0
    int32_t v272; // 0x4131a0
    int64_t v348; // 0x4131a0
    char v349; // 0x4131a0
    if (v492 == 0) {
        // 0x413967
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 != 0) {
            // break (via goto) -> 0x413bf0
            goto lab_0x413bf0_9;
        }
        // 0x41397e
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v43 == 0) {
            // break -> 0x4139dd
            goto lab_0x4139dd_6;
        }
        int32_t v508 = v503; // 0x413996
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if ((v349 & (char)v274) != 0) {
            // break -> 0x4139dd
            goto lab_0x4139dd_6;
        }
        int32_t v509 = v508;
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v509;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v509 > -1) {
            // break (via goto) -> 0x4139dd
            goto lab_0x4139dd_6;
        }
        int64_t v510 = (int64_t)v509 + 1;
        int64_t v511; // 0x4139c3
        while (*(int64_t *)(8 * v510 + v43) == 0) {
            // 0x4139c3
            v511 = v510 + 1;
            v258 = v272;
            v259 = v275;
            v260 = v276;
            v261 = 0;
            v262 = v502;
            v263 = v501;
            v264 = v500;
            v265 = v499;
            if (v511 > 0) {
                // break (via goto) -> 0x4139dd
                goto lab_0x4139dd_6;
            }
            v510 = v511;
        }
        int64_t v512 = function_412cb0(&v28, &v3, 0); // 0x413c45
        uint32_t v513 = v28; // 0x413c4a
        int32_t v514 = v510;
        while (v513 == 0) {
            // 0x413c55
            v508 = v514;
            if (v512 != 0) {
                // 0x413870
                v504 = v514;
                v505 = v513;
                v506 = v512;
                v507 = v348;
                goto lab_0x413870_2;
            }
            v509 = v508;
            v258 = v272;
            v259 = v275;
            v260 = v276;
            v261 = v509;
            v262 = v502;
            v263 = v501;
            v264 = v500;
            v265 = v499;
            if (v509 > -1) {
                // break (via goto) -> 0x4139dd
                goto lab_0x4139dd_6;
            }
            // 0x4139b0
            v510 = (int64_t)v509 + 1;
            while (*(int64_t *)(8 * v510 + v43) == 0) {
                // 0x4139c3
                v511 = v510 + 1;
                v258 = v272;
                v259 = v275;
                v260 = v276;
                v261 = 0;
                v262 = v502;
                v263 = v501;
                v264 = v500;
                v265 = v499;
                if (v511 > 0) {
                    // break (via goto) -> 0x4139dd
                    goto lab_0x4139dd_6;
                }
                v510 = v511;
            }
            // 0x413c30
            v512 = function_412cb0(&v28, &v3, 0);
            v513 = v28;
            v514 = v510;
        }
        // 0x413c70
        v504 = v514;
        v505 = v513;
        v506 = v512;
        v507 = v348;
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v514;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v512 == 0) {
            // break -> 0x4139dd
            goto lab_0x4139dd_6;
        }
    }
    goto lab_0x413870_2;
  lab_0x413948:;
    int64_t v564 = function_412cb0(&v28, &v3, v33); // 0x413956
    v489 = v30;
    v490 = v32;
    v491 = v33;
    v492 = v564;
    v493 = v348;
    v494 = v35;
    v495 = v37;
    v496 = v39;
    goto lab_0x41395e;
  lab_0x413870_2:;
    int64_t v515 = v507;
    int64_t v516 = v506;
    int64_t v517 = v505;
    int32_t v518 = v504;
    int64_t v519 = v518; // 0x413873
    char v520 = *(char *)(v516 + 104); // 0x413895
    int64_t v521 = v274; // 0x41389b
    int64_t v522 = v275; // 0x41389b
    int64_t v523 = v276; // 0x41389b
    int64_t v524 = v517; // 0x41389b
    int64_t v525 = v515; // 0x41389b
    int64_t v526; // 0x4131a0
    int64_t v527; // 0x4131a0
    if ((v520 & 16) == 0) {
        goto lab_0x4138c8;
    } else {
        // 0x41389d
        v527 = v517;
        v526 = v515;
        if (v520 < 0) {
            int64_t v528 = v516 + 24; // 0x413c94
            int64_t v529 = function_40e7e0(&v3, *(int64_t *)(v516 + 16), v528, v519); // 0x413c9e
            v527 = v528;
            v526 = v72;
            v521 = v274;
            v522 = v275;
            v523 = v276;
            v524 = v528;
            v525 = v72;
            if (v529 == 0) {
                goto lab_0x4138c8;
            } else {
                goto lab_0x4138a5;
            }
        } else {
            goto lab_0x4138a5;
        }
    }
  lab_0x4138c8:;
    // 0x4138c8
    char v273; // 0x4131a0
    char v530 = v273 & (char)(v282 == v516); // 0x41387e
    int32_t v531 = v530 == 0 ? (int64_t)v272 : v284;
    int64_t v243 = v499; // 0x4138d3
    int64_t v244 = v516; // 0x4138d3
    int64_t v245 = v500; // 0x4138d3
    int64_t v246 = v501; // 0x4138d3
    int64_t v247 = v525; // 0x4138d3
    int64_t v248 = v519; // 0x4138d3
    int64_t v249 = v524; // 0x4138d3
    int64_t v250 = v502; // 0x4138d3
    int64_t v252 = v523; // 0x4138d3
    int64_t v253 = v522; // 0x4138d3
    int64_t v254 = v521; // 0x4138d3
    char v255 = v530; // 0x4138d3
    int32_t v256 = v518; // 0x4138d3
    int32_t v257 = v531; // 0x4138d3
    v258 = v531;
    v259 = v522;
    v260 = v523;
    v261 = v518;
    v262 = v502;
    v263 = v501;
    v264 = v500;
    v265 = v499;
    if (v519 >= a6) {
        // break -> 0x4139dd
        goto lab_0x4139dd_6;
    }
    goto lab_0x4138d9;
  lab_0x4138a5:
    // 0x4138a5
    v521 = 1;
    v522 = v519;
    v523 = 0;
    v524 = v527;
    v525 = v526;
    v50 = v518;
    v52 = v502;
    v48 = v501;
    v46 = v500;
    v44 = v519;
    v56 = v499;
    int32_t v309; // 0x4131a0
    if (v309 == 0) {
        goto lab_0x4139ef;
    }
    goto lab_0x4138c8;
  lab_0x4136a0:
    // 0x4136a0
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v353; // 0x4131a0
    int64_t v179; // 0x41358c
    if (v179 > v353) {
        // break -> 0x413bf0
        goto lab_0x413bf0_9;
    }
    char v532 = 0;
    int64_t v533 = v353;
    int64_t v534 = 0; // 0x4136ef
    if (v533 < a3) {
        // 0x4136f1
        v534 = (int64_t)*(char *)(v533 + a2);
    }
    int64_t v535 = v534;
    int64_t v536 = v535; // 0x4136f9
    int64_t v313; // 0x41330e
    if (v313 != 0) {
        // 0x4136fb
        v536 = (int64_t)*(char *)(v535 + v313);
    }
    int64_t v345; // 0x4131a0
    while (*(char *)(v536 + v345) == 0) {
        int64_t v537 = v533 - 1; // 0x4136d8
        if (v537 < v179) {
            // 0x4144a8
            v172 = v537;
            v23 = v40;
            v26 = 1;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            goto lab_0x413bf0_9;
        }
        v532 = 1;
        v533 = v537;
        v534 = 0;
        if (v533 < a3) {
            // 0x4136f1
            v534 = (int64_t)*(char *)(v533 + a2);
        }
        // 0x4136f6
        v535 = v534;
        v536 = v535;
        if (v313 != 0) {
            // 0x4136fb
            v536 = (int64_t)*(char *)(v535 + v313);
        }
    }
    // 0x413705
    int32_t v356; // 0x4131a0
    int32_t v235 = v356; // 0x413707
    int64_t v355; // 0x4131a0
    int64_t v236 = v355; // 0x413707
    int128_t v354; // 0x4131a0
    int128_t v237 = v354; // 0x413707
    int64_t v238 = v353; // 0x413707
    int64_t v239 = a3; // 0x413707
    int64_t v240 = v179; // 0x413707
    int64_t v350; // 0x4131a0
    int64_t v241 = v350; // 0x413707
    if (v532 != 0) {
        // 0x413709
        v172 = v533;
        v235 = v356;
        v236 = v355;
        v237 = v354;
        v238 = v533;
        v239 = a3;
        v240 = v179;
        v241 = v350;
    }
    goto lab_0x413718;
  lab_0x413718:;
    int64_t v538 = v238;
    v162 = function_40e8b0(&v3, v538, v127);
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if ((int32_t)v162 != 0) {
        // break -> 0x413bf0
        goto lab_0x413bf0_9;
    }
    int64_t v234 = v241;
    int64_t v233 = v240;
    int64_t v232 = v239;
    v54 = v237;
    int64_t v231 = v236;
    int32_t v215 = v235;
    int64_t v285; // 0x4131a0
    int32_t v339; // 0x4135af
    if (v285 == 0 || v339 == 1) {
        goto lab_0x41375c;
    } else {
        // 0x41374b
        v169 = v215;
        v170 = v231;
        v171 = v54;
        v173 = v538;
        v174 = v232;
        v175 = v233;
        v176 = v234;
        int32_t * v539; // 0x4131a0
        if (*v539 == -1) {
            goto lab_0x414060;
        } else {
            goto lab_0x41375c;
        }
    }
  lab_0x41409c:;
    // 0x41409c
    int64_t v191; // 0x4131a0
    int64_t v540 = v191;
    uint64_t v541 = v540 - v1; // 0x414103
    int64_t v542; // 0x414127
    if (v285 <= v541) {
        // 0x414115
        v542 = function_40e8b0(&v3, v540, v127);
        v23 = v40;
        v26 = v542;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if ((int32_t)v542 != 0) {
            // break (via goto) -> 0x413bf0
            goto lab_0x413bf0_9;
        }
    }
    int64_t v543 = v345; // 0x4140c6
    if (v540 < a3) {
        // 0x4140c8
        v543 = (int64_t)*(char *)(v541 + v326) + v345;
    }
    // 0x4140d7
    int32_t v188; // 0x4131a0
    v235 = v188;
    int64_t v189; // 0x4131a0
    v236 = v189;
    int128_t v190; // 0x4131a0
    v237 = v190;
    v238 = v540;
    int64_t v192; // 0x4131a0
    v239 = v192;
    int64_t v193; // 0x4131a0
    v240 = v193;
    v241 = v179;
    int64_t v180; // 0x41359b
    int64_t v178; // 0x4131a0
    while (*(char *)v543 == 0) {
        int64_t v544 = v540 + v178; // 0x4140e3
        v172 = v544;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v544 < v179 || v544 > v180) {
            // break (via goto) -> 0x413bf0
            goto lab_0x413bf0_9;
        }
        v540 = v544;
        v541 = v540 - v1;
        if (v285 <= v541) {
            // 0x414115
            v542 = function_40e8b0(&v3, v540, v127);
            v23 = v40;
            v26 = v542;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if ((int32_t)v542 != 0) {
                // break (via goto) -> 0x413bf0
                goto lab_0x413bf0_9;
            }
        }
        // 0x4140c0
        v543 = v345;
        if (v540 < a3) {
            // 0x4140c8
            v543 = (int64_t)*(char *)(v541 + v326) + v345;
        }
        // 0x4140d7
        v235 = v188;
        v236 = v189;
        v237 = v190;
        v238 = v540;
        v239 = v192;
        v240 = v193;
        v241 = v179;
    }
    goto lab_0x413718;
  lab_0x413afc:;
    // 0x413afc
    int64_t v358; // 0x4131a0
    int64_t v545 = v358;
    int64_t v357; // 0x4131a0
    int64_t v546 = v357;
    v235 = v356;
    v236 = v355;
    v237 = v354;
    v238 = v546;
    v239 = v545;
    int64_t v351; // 0x4131a0
    v240 = v351;
    v241 = v350;
    char * v346; // 0x4131a0
    if (v180 == v546) {
        int64_t v547 = 0; // 0x413b13
        if (v180 < a3) {
            // 0x413b15
            v547 = (int64_t)*v346;
        }
        int64_t v548 = v547;
        int64_t v549 = v548; // 0x413b29
        if (v313 != 0) {
            // 0x413b2b
            v549 = (int64_t)*(char *)(v548 + v313);
        }
        // 0x413b2f
        v235 = v356;
        v236 = v355;
        v237 = v354;
        v238 = v546;
        v239 = v545;
        v240 = v351;
        v241 = v350;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (*(char *)(v549 + v345) == 0) {
            // break -> 0x413bf0
            goto lab_0x413bf0_9;
        }
    }
    goto lab_0x413718;
  lab_0x41375c:;
    int64_t v550 = *v13; // 0x413783
    v28 = 0;
    int64_t v218 = v347; // 0x4137b7
    int64_t v220 = v72; // 0x4137b7
    int64_t v222 = v550; // 0x4137b7
    int64_t v223; // 0x4131a0
    int64_t v221; // 0x4131a0
    int64_t v219; // 0x4131a0
    if (*(char *)(v550 + 104) >= 0) {
        goto lab_0x413800;
    } else {
        uint64_t v551 = function_40e5c0(v72, (int64_t)v215 - 1, v127); // 0x4137c7
        if (v551 % 2 != 0) {
            // 0x414458
            v219 = v347;
            v221 = v72;
            v223 = *v15;
            goto lab_0x41445c;
        } else {
            int32_t v552 = v551; // 0x4137d4
            v218 = v347;
            v220 = v72;
            v222 = v550;
            if (v552 == 0) {
                goto lab_0x413800;
            } else {
                int64_t v553 = v551 & 6; // 0x4137da
                if (v553 == 6) {
                    // 0x4147f0
                    v219 = 6;
                    v221 = v72;
                    v223 = *v19;
                    goto lab_0x41445c;
                } else {
                    if ((v551 & 2) != 0) {
                        // 0x414520
                        v219 = v553;
                        v221 = v72;
                        v223 = *v17;
                        goto lab_0x41445c;
                    } else {
                        // 0x4137ee
                        v218 = v553;
                        v220 = v72;
                        v222 = v550;
                        if ((v551 & 4) != 0) {
                            int64_t v554 = *(int64_t *)(v550 + 80); // 0x414530
                            int64_t v555 = function_40db40((int128_t *)&v28, a1, (int64_t *)v554, v552); // 0x414541
                            v219 = v554;
                            v221 = v348;
                            v223 = v555;
                            goto lab_0x41445c;
                        } else {
                            goto lab_0x413800;
                        }
                    }
                }
            }
        }
    }
  lab_0x413800:;
    int64_t v198 = v222;
    int64_t v202 = v220;
    int64_t v200 = v218;
    int64_t v242; // 0x4131a0
    char v197; // 0x4131a0
    int64_t v201; // 0x4131a0
    int64_t v199; // 0x4131a0
    char v196; // 0x4131a0
    if (v43 == 0) {
        goto lab_0x413824;
    } else {
        // 0x41380d
        *(int64_t *)(8 * (int64_t)v215 + v43) = v198;
        if (*v40 != 0) {
            int64_t v556 = v198 + 16; // 0x4147a8
            int64_t v557 = v198 + 24; // 0x4147ac
            int64_t v558 = function_40e470(v72, v556, v557, 0); // 0x4147bb
            int32_t v559 = v558; // 0x4147c0
            v28 = v559;
            v242 = v558;
            if (v559 != 0) {
                goto lab_0x4148ae;
            } else {
                char * v560 = (char *)(v198 + 104); // 0x4147cf
                char v561 = *v560; // 0x4147cf
                v196 = 0;
                v197 = v561;
                v199 = v557;
                v201 = v72;
                if ((v561 & 64) != 0) {
                    int64_t v562 = function_412430(v72, v556, v557); // 0x41486a
                    int32_t v563 = v562; // 0x41486f
                    v28 = v563;
                    v242 = v562;
                    if (v563 != 0) {
                        goto lab_0x4148ae;
                    } else {
                        // 0x41487a
                        v196 = 0;
                        v197 = *v560;
                        v199 = v557;
                        v201 = v72;
                        goto lab_0x413838;
                    }
                } else {
                    goto lab_0x413838;
                }
            }
        } else {
            goto lab_0x413824;
        }
    }
  lab_0x414060:;
    int64_t v177 = v173 + v178; // 0x414068
    v172 = v177;
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v177 < v179 || v177 > v180) {
        // break -> 0x413bf0
        goto lab_0x413bf0_9;
    }
    int32_t v181 = v169; // 0x414096
    int64_t v182 = v170; // 0x414096
    int128_t v183 = v171; // 0x414096
    int64_t v184 = v177; // 0x414096
    int64_t v185 = v174; // 0x414096
    int64_t v186 = v175; // 0x414096
    int64_t v187 = v176; // 0x414096
    v188 = v169;
    v189 = v170;
    v190 = v171;
    v191 = v177;
    v192 = v174;
    v193 = v175;
    int32_t v194; // 0x4131a0
    if (v194 < 9) {
        goto lab_0x413668;
    } else {
        goto lab_0x41409c;
    }
  lab_0x413824:;
    // 0x413824
    char v195; // 0x413646
    v196 = v195;
    v197 = *(char *)(v198 + 104);
    v199 = v200;
    v201 = v202;
    goto lab_0x413838;
  lab_0x413838:;
    int64_t v203 = v201;
    int64_t v204 = v199;
    char v205 = v196;
    int64_t v206; // 0x4131a0
    int64_t v207; // 0x4131a0
    int64_t v208; // 0x4131a0
    int64_t v209; // 0x4131a0
    int64_t v210; // 0x4131a0
    int64_t v211; // 0x4131a0
    int64_t v212; // 0x4131a0
    int64_t v213; // 0x4131a0
    if ((v197 & 16) != 0) {
        // 0x4144c8
        if (*(char *)(v198 + 104) < 0) {
            int64_t v214 = v215;
            int64_t v216 = v198 + 24; // 0x414559
            int64_t v217 = function_40e7e0(&v3, *(int64_t *)(v198 + 16), v216, v214); // 0x414560
            v206 = v214;
            v213 = 0;
            v212 = v216;
            v210 = v72;
            v208 = -1;
            v207 = v214;
            v211 = v216;
            v209 = v72;
            if (v217 == 0) {
                goto lab_0x413850;
            } else {
                goto lab_0x4144d3;
            }
        } else {
            // 0x4144c8
            v207 = v215;
            v211 = v204;
            v209 = v203;
            goto lab_0x4144d3;
        }
    } else {
        // 0x413838
        v206 = v215;
        v213 = 0;
        v212 = v204;
        v210 = v203;
        v208 = -1;
        goto lab_0x413850;
    }
  lab_0x41445c:
    // 0x41445c
    v218 = v219;
    v220 = v221;
    v222 = v223;
    int64_t v224; // 0x4131a0
    int64_t v225; // 0x4131a0
    int64_t v226; // 0x4131a0
    int64_t v227; // 0x4131a0
    int32_t v228; // 0x4131a0
    int64_t v229; // 0x4131a0
    int128_t v230; // 0x4131a0
    if (v223 != 0) {
        goto lab_0x413800;
    } else {
        // 0x414465
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 == 12) {
            // break -> 0x413bf0
            goto lab_0x413bf0_9;
        }
        // 0x414479
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1073, "check_matching");
        v228 = v215;
        v229 = v231;
        v230 = v54;
        v227 = a1;
        v225 = v232;
        v226 = v233;
        v224 = v234;
      lab_0x414498_2:
        // 0x414498
        v172 = v227;
        v235 = v228;
        v236 = v229;
        v237 = v230;
        v238 = v227;
        v239 = v225;
        v240 = v226;
        v241 = v224;
        goto lab_0x413718;
    }
  lab_0x4148ae:
    // 0x4148ae
    v50 = v215;
    v52 = v231;
    v48 = v232;
    v46 = v233;
    v44 = 0x100000000 * v242 >> 32;
    v56 = v234;
    goto lab_0x4139ef;
  lab_0x413850:
    // 0x413850
    v243 = v234;
    v244 = v198;
    v245 = v233;
    v246 = v232;
    v247 = v210;
    v248 = v206;
    v249 = v212;
    v250 = v231;
    int64_t v251; // 0x413637
    v252 = v251;
    v253 = v208;
    v254 = v213;
    v255 = v205;
    v256 = v215;
    v257 = v215;
    v258 = v215;
    v259 = v208;
    v260 = v251;
    v261 = v215;
    v262 = v231;
    v263 = v232;
    v264 = v233;
    v265 = v234;
    int64_t v266; // 0x4131a0
    int64_t v267; // bp-576, 0x4131a0
    int32_t v268; // bp-688, 0x4131a0
    int32_t result; // bp-692, 0x4131a0
    int64_t v269; // 0x41493e
    int64_t v270; // 0x4149b3
    int64_t * v271; // 0x4149b3
    if (v206 < a6) {
        while (true) {
          lab_0x4138d9:
            // 0x4138d9
            v272 = v257;
            v29 = v256;
            v273 = v255;
            v274 = v254;
            v275 = v253;
            v276 = v252;
            v277 = v250;
            v278 = v249;
            int64_t v279 = v248;
            v280 = v246;
            v281 = v245;
            v282 = v244;
            v283 = v243;
            v284 = v279 + 1;
            if (v2 < a3 == v284 >= v2 || v285 < a3 == v284 >= v285) {
                int32_t v286 = function_40bd10(v72, v279 + 2 & 0xffffffff);
                v28 = v286;
                if (v286 != 0) {
                    // 0x4141e8
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    if (v286 != 12) {
                        // 0x4148dd
                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1128, "check_matching");
                        v267 = v283;
                        v269 = *(int64_t *)0x40c5e000002340;
                        result = 0;
                        if (v269 == 0) {
                            int64_t v287 = function_40de40(&result, 0x40c69800000000, (int64_t *)"check_matching", 0x40c5e000002340, v280, v281); // 0x414dfb
                            *(int64_t *)0x656765722f628cac = v287;
                            // 0x414979
                            return result;
                        }
                        // 0x414990
                        v268 = 0;
                        int64_t v288 = function_40de40(&v268, 0x40c69800000000, (int64_t *)"check_matching", 0x40c5e000002340, v280, v281); // 0x4149a3
                        uint32_t result2 = v268; // 0x4149ab
                        if (result2 != 0) {
                            // 0x414979
                            return result2;
                        }
                        // 0x4149b3
                        v270 = v288 + 56;
                        v271 = (int64_t *)v270;
                        int64_t v289 = *v271; // 0x4149b3
                        if (v289 != 0) {
                            goto lab_0x414a40;
                        } else {
                            // 0x4149c5
                            *(int64_t *)(v288 + 64) = 0;
                            *v271 = 0x676e69686374;
                            int64_t * mem3 = malloc(0x4b431ba0); // 0x4149d9
                            *(int64_t *)(v288 + 72) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x414979
                                return 12;
                            }
                            // 0x4149e7
                            v268 = 0;
                            v266 = v289;
                            goto lab_0x414a0a;
                        }
                    } else {
                        goto lab_0x413bf0_9;
                    }
                }
                int64_t v290 = v29; // 0x413ce4
                v291 = v277;
                v292 = v284;
                v293 = v278;
                v294 = v290;
                v295 = v72;
                v296 = v280;
                v297 = v281;
                v298 = v283;
                v299 = v290;
                v300 = v72;
                if ((*(char *)(v282 + 104) & 32) == 0) {
                    goto lab_0x413914;
                } else {
                    goto lab_0x413d00;
                }
            } else {
                // 0x413909
                v291 = v277;
                v292 = v284;
                v293 = v278;
                v294 = v279;
                v295 = v247;
                v296 = v280;
                v297 = v281;
                v298 = v283;
                v299 = v279;
                v300 = v247;
                if ((*(char *)(v282 + 104) & 32) != 0) {
                    goto lab_0x413d00;
                } else {
                    goto lab_0x413914;
                }
            }
        }
    }
  lab_0x4139dd_6:;
    int64_t v301 = v265;
    int64_t v302 = v264;
    int64_t v303 = v263;
    int64_t v304 = v262;
    int32_t v305 = v261;
    int64_t v306 = v260;
    int64_t v307 = v259;
    v50 = v305;
    v52 = v304;
    v48 = v303;
    v46 = v302;
    v44 = v307;
    v56 = v301;
    if (v306 != 0) {
        int64_t * v308 = (int64_t *)v306; // 0x4139ec
        *v308 = *v308 + (int64_t)v258;
        v50 = v305;
        v52 = v304;
        v48 = v303;
        v46 = v302;
        v44 = v307;
        v56 = v301;
    }
    goto lab_0x4139ef;
  lab_0x4144d3:
    // 0x4144d3
    v206 = v207;
    v213 = 1;
    v212 = v211;
    v210 = v209;
    v208 = v207;
    v50 = v215;
    v52 = v231;
    v48 = v232;
    v46 = v233;
    v44 = v207;
    v56 = v234;
    if (v309 != 0) {
        goto lab_0x413850;
    } else {
        goto lab_0x4139ef;
    }
  lab_0x414050:
    // 0x414050
    function_40c500(&v3);
    v169 = v51;
    v170 = v53;
    v171 = v55;
    v173 = v172;
    v174 = v49;
    v175 = v47;
    v176 = v57;
    goto lab_0x414060;
  lab_0x414802:
    // 0x414802
    free(mem);
    free((int64_t *)v68);
    v53 = v66;
    v55 = v76;
    v57 = v69;
    if (v58 != 1) {
        // 0x413bf0
        v23 = v40;
        v26 = v63 & 0xffffffff;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        goto lab_0x413bf0_9;
    }
    goto lab_0x414050;
  lab_0x4132e8:;
    int64_t v310 = v21;
    int64_t v311 = v20;
    int32_t v312 = 1; // 0x4132f9
    if (v11 == 0) {
        // 0x413670
        v312 = *(int64_t *)(a1 + 152) != 0;
    }
    // 0x4132ff
    v313 = *(int64_t *)(a1 + 40);
    v143 = (int64_t *)(a1 + 24);
    int32_t * v314 = (int32_t *)(a1 + 180); // 0x413316
    int64_t v315 = v12 + 1; // 0x41332d
    int64_t v316 = (int64_t)*v314; // 0x413336
    int64_t v317 = v315 - v316; // 0x413339
    int64_t v318 = v317 < 0 == ((v317 ^ v315) & (v315 ^ v316)) < 0 ? v315 : v316; // 0x413344
    int64_t v319 = a3 + 1; // 0x413348
    int64_t v320 = v318 - v319; // 0x41335c
    int64_t v321 = v320 < 0 == ((v320 ^ v318) & (v318 ^ v319)) < 0 == (v320 != 0) ? v319 : v318; // 0x413367
    v3 = a2;
    v72 = &v3;
    int64_t v322 = function_40b170(v72, v321); // 0x4133cc
    int64_t v323; // 0x4131a0
    int64_t v324; // 0x4131a0
    int64_t v325; // 0x4131a0
    if ((int32_t)v322 != 0) {
        // 0x4132ff
        v23 = (int64_t *)(a1 + 152);
        v26 = v322;
        goto lab_0x413bf0_9;
    } else {
        // 0x4133dd
        v309 = v312;
        if ((*v143 & 0x400000 || v313) != 0) {
            goto lab_0x413433;
        } else {
            // 0x413413
            v323 = a2;
            v324 = a2;
            v325 = a3;
            if (*v314 < 2) {
                goto lab_0x413435;
            } else {
                goto lab_0x413433;
            }
        }
    }
  lab_0x413433:
    // 0x413433
    v324 = v323;
    v325 = 0;
    goto lab_0x413435;
  lab_0x4132ca:
    // 0x4132ca
    v20 = 0;
    v21 = 0;
    if (a4 != 0 == (a5 != 0)) {
        // 0x413c10
        return 1;
    }
    goto lab_0x4132e8;
  lab_0x413435:
    // 0x413435
    v285 = v325;
    v326 = v324;
    v40 = (int64_t *)(a1 + 152);
    int64_t v327 = *v40; // 0x413471
    int64_t v328 = 2 * v327; // 0x41348b
    int64_t v329; // 0x4131a0
    int64_t v330; // 0x4131a0
    if (v328 < 1) {
        goto lab_0x4134ec;
    } else {
        // 0x41349b
        v23 = v40;
        v26 = 12;
        if (v328 > 0x666666666666666) {
            goto lab_0x413bf0_9;
        } else {
            int32_t v331 = v327;
            int64_t * mem4 = malloc(80 * v331); // 0x4134b6
            int64_t v332 = (int64_t)mem4; // 0x4134b6
            int64_t * mem5 = malloc(16 * v331); // 0x4134cd
            int64_t v333 = (int64_t)mem5; // 0x4134cd
            v330 = v332;
            v329 = v333;
            v23 = v40;
            v26 = 12;
            v25 = v332;
            v24 = v333;
            if (mem4 == NULL || mem5 == NULL) {
                goto lab_0x413bf0_9;
            } else {
                goto lab_0x4134ec;
            }
        }
    }
  lab_0x4134ec:
    // 0x4134ec
    v42 = v329;
    v41 = v330;
    int64_t v334; // 0x4131a0
    if (v11 < 2) {
        // 0x4143e0
        v334 = 0;
        if ((*(char *)(a1 + 176) & 2) != 0) {
            goto lab_0x413516;
        } else {
            goto lab_0x413552;
        }
    } else {
        goto lab_0x413516;
    }
  lab_0x413516:
    // 0x413516
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    if (v2 < 0x1fffffffffffffff) {
        // 0x413531
        g134 = &v267;
        int64_t * mem6 = malloc(8 * (int32_t)v2 + 8); // 0x413539
        int64_t v335 = (int64_t)mem6; // 0x413539
        v334 = v335;
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v335;
        if (mem6 == NULL) {
            goto lab_0x413bf0_9;
        } else {
            goto lab_0x413552;
        }
    } else {
        goto lab_0x413bf0_9;
    }
  lab_0x413552:
    // 0x413552
    v43 = v334;
    v172 = v311;
    int64_t v336 = v311 - v310; // 0x413578
    bool v337 = v336 == 0 | v336 < 0 != ((v336 ^ v311) & (v310 ^ v311)) < 0;
    int32_t v338 = v337; // 0x41357b
    v339 = *v314;
    int32_t v340 = 8; // 0x4135c1
    if (v6 != NULL) {
        int32_t v341 = 4; // 0x4135cb
        if (v339 != 1) {
            // 0x4135cd
            v341 = 4 * (int32_t)((*v143 & 0x400000 | v313) == 0);
        }
        // 0x4135f0
        v340 = 2 * v338 | (int32_t)(v313 != 0) | v341;
    }
    // 0x41360c
    v179 = v337 ? v311 : v310;
    v180 = v336 < 0 == ((v336 ^ v311) & (v310 ^ v311)) < 0 ? v311 : v310;
    int64_t v342 = v311 - v180; // 0x41360c
    int64_t v343 = v311 - v179; // 0x413614
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v342 < 0 == ((v342 ^ v311) & (v180 ^ v311)) < 0 != v342 != 0 && v343 < 0 == ((v343 ^ v311) & (v179 ^ v311)) < 0) {
        int64_t v344 = 0x100000000 * a9 >> 32;
        v194 = v340;
        v251 = v337 ? (int64_t)&v172 : 0;
        v195 = v251 != 0;
        v345 = (int64_t)v6;
        v346 = (char *)(v180 + a2);
        v127 = v344;
        v178 = (int32_t)!((v336 == 0 | v336 < 0 != ((v336 ^ v311) & (v310 ^ v311)) < 0)) + v338;
        v347 = v344 & 0xffffffff;
        v348 = &v28;
        v144 = &v141;
        v349 = (char)v309 ^ 1;
        v73 = (char *)(a1 + 56);
        v74 = (char *)(a1 + 176);
        v75 = &v67;
        v184 = v311;
        v185 = a5;
        v186 = a6;
        v187 = v327;
        while (true) {
          lab_0x413668:
            // 0x413668
            v350 = v187;
            v351 = v186;
            int64_t v352 = v185;
            v353 = v184;
            v354 = v183;
            v355 = v182;
            v356 = v181;
            v235 = v356;
            v236 = v355;
            v237 = v354;
            v238 = v353;
            v239 = v352;
            v240 = v351;
            v241 = v350;
            v188 = v356;
            v189 = v355;
            v190 = v354;
            v191 = v353;
            v192 = v352;
            v193 = v351;
            switch (g134) {
                case 0: {
                    goto lab_0x4136a0;
                }
                case 1: {
                    goto lab_0x4136a0;
                }
                case 2: {
                    // 0x413b58
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        // 0x413b5f
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v359 = v353; // 0x413b75
                        if (*(char *)((int64_t)*(char *)(v353 + a2) + v345) != 0) {
                            goto lab_0x413718;
                        } else {
                            int64_t v360 = v359 + 1;
                            while (v180 != v360) {
                                // 0x413b90
                                v359 = v360;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v360;
                                v225 = v352;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)*(char *)(v360 + a2) + v345) != 0) {
                                    goto lab_0x414498_2;
                                }
                                v360 = v359 + 1;
                            }
                            // 0x413baa
                            v172 = v180;
                            v357 = v360;
                            v358 = v352;
                            goto lab_0x413afc;
                        }
                    } else {
                        goto lab_0x413afc;
                    }
                }
                case 3: {
                    // 0x413a80
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        unsigned char v361 = *(char *)(v313 + (int64_t)*(char *)(v353 + a2)); // 0x413a98
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v362 = v353; // 0x413aa9
                        if (*(char *)((int64_t)v361 + v345) != 0) {
                            goto lab_0x413718;
                        } else {
                            int64_t v363 = v362 + 1;
                            while (v180 != v363) {
                                unsigned char v364 = *(char *)(v313 + (int64_t)*(char *)(v363 + a2)); // 0x413ad5
                                v362 = v363;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v363;
                                v225 = a2;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)v364 + v345) != 0) {
                                    goto lab_0x414498_2;
                                }
                                v363 = v362 + 1;
                            }
                            // 0x413aef
                            v172 = v180;
                            v357 = v363;
                            v358 = a2;
                            goto lab_0x413afc;
                        }
                    } else {
                        goto lab_0x413afc;
                    }
                }
                case 4: {
                    goto lab_0x413718;
                }
                default: {
                    goto lab_0x41409c;
                }
            }
        }
    }
    goto lab_0x413bf0_9;
  lab_0x414a40:;
    int64_t v365 = v269 + 8; // 0x414a4d
    int64_t result3 = function_40d340((int128_t *)"check_matching", v365, v270); // 0x414a59
    int32_t v366 = result3; // 0x414a5e
    result = v366;
    int64_t v367 = v280; // 0x414a64
    int64_t v368 = v281; // 0x414a64
    int64_t v369 = 0; // 0x414a64
    if (v366 != 0) {
        // 0x414979
        return result3;
    }
    goto lab_0x414ef0;
  lab_0x414ef0:;
    int64_t v370 = v368;
    int64_t v371 = v367;
    int64_t v372 = *(int64_t *)((int64_t)"lib/regexec.c" + 48); // 0x414ef0
    int64_t v373 = 40 * *(int64_t *)(v372 + 8 * v369); // 0x414f01
    int64_t v374 = 0x40c60000000000; // 0x414f09
    int64_t v375 = v371; // 0x414f09
    int64_t v376 = v370; // 0x414f09
    int64_t v377; // 0x4131a0
    int64_t v378; // 0x4131a0
    int64_t v379; // 0x4131a0
    int64_t v380; // 0x4131a0
    int64_t v381; // 0x4131a0
    int64_t v382; // 0x4131a0
    int64_t v383; // 0x414f1c
    int64_t v384; // 0x414f28
    if (*(int64_t *)(v373 + 0x40c60000000010) < 1128) {
        // 0x414f0f
        v374 = 0x40c60000000000;
        v375 = v371;
        v376 = v370;
        if (*(int64_t *)(v373 + 0x40c60000000008) < 1128) {
            goto lab_0x414fad;
        } else {
            // 0x414f19
            v383 = *(int64_t *)0x40c69800000000;
            int64_t v385 = 16 * *(int64_t *)(v373 + 0x40c60000000000); // 0x414f24
            v384 = *(int64_t *)(v383 + v385);
            v377 = v383;
            v380 = v385;
            v378 = 0;
            v381 = 0x61666e5f6b6e696c;
            v382 = -1;
            v379 = -1;
            if (*(int64_t *)(v373 + 0x40c60000000018) == 1128) {
                goto lab_0x415006;
            } else {
                goto lab_0x414f5e;
            }
        }
    } else {
        goto lab_0x414fad;
    }
  lab_0x414fad:;
    int64_t v386 = v376;
    int64_t v387 = v375;
    int64_t v388 = v369 + 1; // 0x414fad
    v367 = v387;
    v368 = v386;
    v369 = v388;
    if (v388 >= *(int64_t *)((int64_t)"lib/regexec.c" + 40)) {
        // 0x414fbb
        result = 0;
        int64_t v389 = function_40de40(&result, 0x40c69800000000, (int64_t *)"check_matching", v374, v387, v386); // 0x414a88
        *(int64_t *)0x656765722f628cac = v389;
        uint32_t v390 = result; // 0x414a91
        // 0x414979
        return v390 != 0 ? (int64_t)v390 : 0;
    }
    goto lab_0x414ef0;
  lab_0x414a0a:;
    int64_t v391 = *(int64_t *)(8 * v266 + 0x61666e5f6b6e696c); // 0x414a11
    int64_t v392 = *(int64_t *)0x40c69800000038; // 0x414a19
    int32_t v393 = function_40cdd0(v271, (int128_t *)(v392 + 24 * v391)); // 0x414a27
    v268 = v393;
    if (v393 != 0) {
        // 0x414979
        return 12;
    }
    int64_t v394 = v266 + 1; // 0x414a00
    v266 = v394;
    if (v394 > 0x676e69686373) {
        goto lab_0x414a40;
    } else {
        goto lab_0x414a0a;
    }
  lab_0x415006:;
    int64_t v395 = v382;
    int64_t v396 = v381; // 0x4131a0
    int64_t v397 = v379; // 0x4131a0
    goto lab_0x415006_2;
  lab_0x414f5e:;
    int64_t v410 = v378;
    int64_t v414 = v380;
    int64_t v412 = v377;
    int64_t v416 = *(int64_t *)(8 * v410 + 0x61666e5f6b6e696c); // 0x414f62
    int64_t v417 = 16 * v416 + v412; // 0x414f6d
    int64_t v411; // 0x4131a0
    int64_t v415; // 0x4131a0
    int64_t result4; // 0x4131a0
    int64_t v413; // 0x4131a0
    if ((*(char *)(v417 + 8) || 1) == 9) {
        // 0x414f7c
        if (v384 != *(int64_t *)v417) {
            goto lab_0x414f50;
        } else {
            int64_t v418 = function_40f0a0(0x40c69800000000, v416, (int64_t)"check_matching", v365); // 0x414f8c
            result4 = v418;
            if ((int32_t)v418 != 0) {
                // 0x414979
                return result4;
            }
            int64_t v419 = v410 + 1; // 0x414f99
            v374 = v365;
            v375 = v384;
            v376 = v370;
            if (v419 < 0x676e69686374) {
                // 0x414f99
                v411 = *(int64_t *)0x40c69800000000;
                v413 = v365;
                v415 = v419;
                goto lab_0x414f5a;
            } else {
                goto lab_0x414fad;
            }
        }
    } else {
        goto lab_0x414f50;
    }
  lab_0x415006_2:;
    int64_t v398 = v397;
    int64_t v399 = v396;
    int64_t v400 = *(int64_t *)v399; // 0x415006
    int64_t v401 = 16 * v400 + v383; // 0x415010
    char v402 = *(char *)(v401 + 8); // 0x415013
    int64_t v403; // 0x4131a0
    int64_t v404; // 0x4131a0
    int64_t v405; // 0x4131a0
    int64_t v406; // 0x414ff9
    if (v402 != 8) {
        // 0x414ff0
        v406 = v398;
        if (v402 != 9) {
            goto lab_0x414ffd;
        } else {
            // 0x414ff6
            v406 = v384 == *(int64_t *)v401 ? v400 : v398;
            goto lab_0x414ffd;
        }
    } else {
        int64_t v407 = v384 == *(int64_t *)v401 ? v400 : v395; // 0x415021
        int64_t v408 = v399 + 8; // 0x415025
        v381 = v408;
        v382 = v407;
        v379 = v398;
        v404 = v408;
        v405 = v407;
        v403 = v398;
        if (v408 != 0x6169a9d2b6b1850c) {
            goto lab_0x415006;
        } else {
            goto lab_0x41502e;
        }
    }
  lab_0x414f50:;
    int64_t v409 = v410 + 1; // 0x414f50
    v411 = v412;
    v413 = v414;
    v415 = v409;
    v374 = v414;
    v375 = v384;
    v376 = v370;
    if (v409 > 0x676e69686373) {
        goto lab_0x414fad;
    } else {
        goto lab_0x414f5a;
    }
  lab_0x414f5a:
    // 0x414f5a
    v377 = v411;
    v380 = v413;
    v378 = v415;
    goto lab_0x414f5e;
  lab_0x414ffd:;
    int64_t v420 = v399 + 8; // 0x414ffd
    v396 = v420;
    v397 = v406;
    v404 = 0x6169a9d2b6b1850c;
    v405 = v395;
    v403 = v406;
    if (v420 == 0x6169a9d2b6b1850c) {
        goto lab_0x41502e;
    } else {
        goto lab_0x415006_2;
    }
  lab_0x41502e:;
    int64_t v421 = v403;
    int64_t v422 = v405;
    int64_t v423; // 0x4131a0
    if (v422 >= 0) {
        int64_t v424 = function_40f0a0(0x40c69800000000, v422, (int64_t)"check_matching", v365); // 0x4150db
        result4 = v424;
        if ((int32_t)v424 != 0) {
            // 0x414979
            return result4;
        }
        // 0x4150e8
        v374 = v365;
        v375 = v384;
        v376 = v421;
        v423 = v365;
        if (v421 < 0) {
            goto lab_0x414fad;
        } else {
            goto lab_0x41504b;
        }
    } else {
        // 0x41503f
        v374 = v404;
        v375 = v384;
        v376 = v421;
        v423 = v404;
        if (v421 < 0) {
            goto lab_0x414fad;
        } else {
            goto lab_0x41504b;
        }
    }
  lab_0x41504b:;
    int64_t v425 = v423; // 0x41505b
    int64_t v426 = 0; // 0x41505b
    goto lab_0x415072;
  lab_0x415072:;
    int64_t v427 = v426;
    int64_t v428 = v425;
    int64_t v429 = *(int64_t *)(8 * v427 + 0x61666e5f6b6e696c); // 0x415072
    int64_t v430 = 24 * v429; // 0x415082
    int64_t v431 = *(int64_t *)0x40c69800000038 + v430; // 0x415086
    int64_t v432 = v430; // 0x415099
    int64_t v433; // 0x4131a0
    int64_t v434; // 0x4131a0
    int64_t v435; // 0x4131a0
    if (function_40c890(*(int64_t *)(v431 + 8), v431 + 16, v421) != 0) {
        goto lab_0x415060;
    } else {
        int64_t v436 = *(int64_t *)0x40c69800000030 + v430; // 0x41509b
        int64_t v437 = function_40c890(*(int64_t *)(v436 + 8), v436 + 16, v421); // 0x4150a8
        v432 = v436;
        if (v437 != 0) {
            goto lab_0x415060;
        } else {
            int64_t v438 = function_40f0a0(0x40c69800000000, v429, (int64_t)"check_matching", v365); // 0x4150c0
            result4 = v438;
            v435 = v365;
            v434 = v427;
            v433 = v436;
            if ((int32_t)v438 != 0) {
                // 0x414979
                return result4;
            }
            goto lab_0x415064;
        }
    }
  lab_0x415060:
    // 0x415060
    v435 = v428;
    v434 = v427 + 1;
    v433 = v432;
    goto lab_0x415064;
  lab_0x415064:
    // 0x415064
    v374 = v435;
    v375 = v384;
    v376 = v433;
    v425 = v435;
    v426 = v434;
    if (v434 > 0x676e69686373) {
        goto lab_0x414fad;
    } else {
        goto lab_0x415072;
    }
  lab_0x4145b0:
    // 0x4145b0
    *(int64_t *)(v163 + 8) = -1;
    int64_t v439 = v163 + 16; // 0x4145b4
    *(int64_t *)v163 = -1;
    v163 = v439;
    int64_t v440; // 0x4131a0
    int64_t * v441; // 0x4145d1
    if (v166 != v439) {
        goto lab_0x4145b0;
    } else {
        // 0x4145c1
        v441 = (int64_t *)a8;
        *v441 = 0;
        *(int64_t *)(a8 + 8) = v65;
        v164 = 0;
        if (v11 == 1 | (*v73 & 16) != 0) {
            goto lab_0x414652;
        } else {
            // 0x414602
            v440 = 0;
            if (*v74 % 2 == 0) {
                goto lab_0x414622;
            } else {
                int64_t v442 = *v40; // 0x414616
                v440 = v442 >= 0 == (v442 != 0);
                goto lab_0x414622;
            }
        }
    }
  lab_0x414652:;
    int64_t v443 = a8; // 0x41468d
    int64_t v444 = 0; // 0x41468d
    int64_t v445 = v164; // 0x41468d
    goto lab_0x414693;
  lab_0x414693:;
    int64_t v446 = v445;
    int64_t v447 = v443;
    int64_t * v448; // 0x4131a0
    int64_t v449; // 0x4131a0
    int64_t v450; // 0x4131a0
    int64_t * v451; // 0x414699
    int64_t v452; // 0x414699
    int64_t v453; // 0x4148bb
    if (v446 == -1) {
        goto lab_0x4146b3;
    } else {
        // 0x414699
        v451 = (int64_t *)(v447 + 8);
        v452 = *v451;
        char v454; // 0x4131a0
        if (v454 != 0) {
            // 0x4148b6
            v453 = v285;
            if (v285 == v446) {
                goto lab_0x4148bf;
            } else {
                // 0x4148bb
                v453 = *(int64_t *)(8 * v446 + v1);
                goto lab_0x4148bf;
            }
        } else {
            // 0x414699
            v448 = (int64_t *)v447;
            v449 = v446;
            v450 = v452;
            goto lab_0x4146a6;
        }
    }
  lab_0x4146b3:;
    int64_t v455 = v444 + 1; // 0x4146b3
    if (v455 != v11) {
        int64_t v456 = v447 + 16; // 0x4146b7
        v443 = v456;
        v444 = v455;
        v445 = *(int64_t *)v456;
        goto lab_0x414693;
    } else {
        if (v10 < 1) {
            goto lab_0x414718;
        } else {
            // 0x4146cb
            goto lab_0x414708;
        }
    }
  lab_0x414622:;
    int64_t v457 = function_4119c0(a1, &v3, v11, a8, v440); // 0x41463a
    v23 = v40;
    v26 = v457;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    if ((int32_t)v457 != 0) {
        goto lab_0x413bf0_9;
    } else {
        // 0x414647
        v164 = *v441;
        goto lab_0x414652;
    }
  lab_0x414718:;
    int64_t v458 = *(int64_t *)(a1 + 224); // 0x414725
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v459; // 0x4131a0
    int64_t v460; // 0x41473d
    int64_t v461; // 0x4131a0
    if (v458 == 0) {
        goto lab_0x413bf0_9;
    } else {
        // 0x414735
        v460 = v11 - 1;
        v23 = v40;
        v26 = v162;
        v25 = v41;
        v24 = v42;
        v22 = v64;
        if (v460 != 0) {
            // 0x414748
            v461 = a8 + 24;
            v459 = 0;
            goto lab_0x414748_2;
        } else {
            goto lab_0x413bf0_9;
        }
    }
  lab_0x4148bf:;
    int64_t v462 = v453;
    int64_t * v463 = (int64_t *)v447;
    *v463 = v462;
    v448 = v463;
    v449 = v462;
    v450 = v285;
    if (v285 == v452) {
        goto lab_0x4146a6;
    } else {
        // 0x4148c7
        v448 = v463;
        v449 = v462;
        v450 = *(int64_t *)(8 * v452 + v1);
        goto lab_0x4146a6;
    }
  lab_0x4146a6:
    // 0x4146a6
    *v448 = v449 + v172;
    *v451 = v450 + v172;
    goto lab_0x4146b3;
  lab_0x414708:
    // 0x414708
    *(int64_t *)v166 = -1;
    *(int64_t *)(v166 + 8) = -1;
    if (16 * (v11 + v10) + a8 != v166 + 16) {
        goto lab_0x414708;
    } else {
        goto lab_0x414718;
    }
  lab_0x414748_2:;
    int64_t v464 = v459;
    int64_t * v465 = (int64_t *)(8 * v464 + v458); // 0x414748
    int64_t v466 = *v465; // 0x414748
    if (v466 == v464) {
        goto lab_0x414797;
    } else {
        int64_t v467 = 16 * v464; // 0x414770
        *(int64_t *)(v467 + v165) = *(int64_t *)(16 * v466 + v165);
        *(int64_t *)(v467 + v461) = *(int64_t *)(16 * *v465 + v461);
        goto lab_0x414797;
    }
  lab_0x414797:;
    int64_t v468 = v464 + 1; // 0x414797
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    v459 = v468;
    if (v468 != v460) {
        goto lab_0x414748_2;
    } else {
        goto lab_0x413bf0_9;
    }
}
// Address range: 0x415130 - 0x41534d
int64_t function_415130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 144); // 0x415146
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x41514d
    if (*v1 != 1) {
        int64_t v3 = function_40c840(a2, a2); // 0x415159
        if ((int32_t)v3 > 1) {
            // 0x4151a8
            *(int32_t *)a1 = 1;
            *(int32_t *)(a1 + 8) = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * a2);
            *v2 = (0x100000000 * v3 >> 32) + a2;
            return 0;
        }
    }
    char * v4 = (char *)(a3 + 8); // 0x415163
    char v5 = *v4; // 0x415163
    int64_t v6 = a2 + (0x100000000 * a4 >> 32); // 0x415167
    *v2 = v6;
    int64_t v7; // 0x415130
    int64_t v8; // 0x415130
    char v9; // 0x415130
    int64_t v10; // 0x415130
    int64_t v11; // 0x415130
    char v12; // 0x415130
    int64_t v13; // 0x415130
    int64_t v14; // 0x415130
    int64_t v15; // 0x415130
    int64_t v16; // 0x415130
    int64_t * v17; // 0x4151d0
    int64_t * v18; // 0x415130
    int64_t * v19; // 0x415130
    int64_t * v20; // 0x415130
    switch (v5) {
        case 30: {
        }
        case 28: {
        }
        case 26: {
            // 0x4151d0
            v17 = (int64_t *)(a2 + 104);
            if (v6 >= *v17) {
                // 0x415198
                return 7;
            }
            // 0x4151da
            v18 = (int64_t *)(a2 + 40);
            v19 = (int64_t *)(a2 + 8);
            v20 = (int64_t *)(a1 + 8);
            v12 = v5;
            v14 = a2;
            v10 = 0;
            v7 = v6;
            while (true) {
              lab_0x415202:
                // 0x415202
                v8 = v7;
                v11 = v10;
                v15 = v14;
                if (v12 == 30) {
                    // 0x415280
                    if (*(char *)(a2 + 139) == 0) {
                        goto lab_0x415209;
                    } else {
                        // 0x41528e
                        if (*(char *)(a2 + 140) == 0) {
                            int64_t v21 = v8 + 1; // 0x4152f8
                            *v2 = v21;
                            v13 = v21;
                            v16 = v15;
                            v9 = *(char *)(v8 + v15 + *v18);
                            goto lab_0x41521a;
                        } else {
                            // 0x415298
                            if (v8 == *(int64_t *)(a2 + 48)) {
                                goto lab_0x4152ad;
                            } else {
                                // 0x41529e
                                if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v8) == -1) {
                                    goto lab_0x415209;
                                } else {
                                    goto lab_0x4152ad;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x415209;
                }
            }
          lab_0x415198_3:
            // 0x415198
            return 0;
        }
    }
    if ((char)a6 == 0 == v5 == 22) {
        // 0x415310
        int64_t v22; // bp-56, 0x415130
        function_40ada0(&v22, a2, a5);
        char v23; // 0x415130
        if (v23 != 21) {
            // 0x415198
            return 11;
        }
    }
    // 0x415189
    *(int32_t *)a1 = 0;
    int64_t v24; // 0x415130
    *(char *)(a1 + 8) = *(char *)&v24;
    // 0x415198
    return 0;
  lab_0x415209:;
    int64_t v25 = v8 + 1; // 0x41520d
    *v2 = v25;
    v13 = v25;
    v16 = v15;
    v9 = *(char *)(*v19 + v8);
    goto lab_0x41521a;
  lab_0x41521a:;
    uint64_t v26 = v13;
    if (*v17 <= v26) {
        // break -> 0x415198
        goto lab_0x415198_3;
    }
    // 0x415220
    if (*(char *)&v24 == v9) {
        // 0x415225
        if (*(char *)(*v19 + v26) == 93) {
            // 0x41522f
            *v2 = v26 + 1;
            *(char *)(*v20 + (0x100000000 * v11 >> 32)) = 0;
            unsigned char v27 = *v4; // 0x415240
            v24 = v27;
            switch (v27) {
                case 28: {
                    // 0x415340
                    *(int32_t *)a1 = 2;
                    goto lab_0x415198_3;
                }
                case 30: {
                    // 0x415333
                    *(int32_t *)a1 = 4;
                    goto lab_0x415198_3;
                }
                default: {
                    // 0x415256
                    if (v27 != 26) {
                        goto lab_0x415198_3;
                    } else {
                        // 0x415261
                        *(int32_t *)a1 = 3;
                        goto lab_0x415198_3;
                    }
                }
            }
        }
    }
    // 0x4151e8
    *(char *)(*v20 + v11) = v9;
    if (v11 == 31) {
        // break -> 0x415198
        goto lab_0x415198_3;
    }
    // 0x4151fa
    v12 = *v4;
    v14 = v16;
    v10 = v11 + 1;
    v7 = *v2;
    goto lab_0x415202;
  lab_0x4152ad:;
    int64_t v28 = *(int64_t *)(a2 + 24); // 0x4152ad
    char v29 = *(char *)(*(int64_t *)(v28 + 8 * v8) + v15 + *v18); // 0x4152bc
    if (v29 <= -1) {
        goto lab_0x415209;
    } else {
        int64_t v30 = 1; // 0x4152d7
        int64_t v31 = v15; // 0x4152d7
        if (*v1 != 1) {
            // 0x4152d9
            v30 = 0x100000000 * function_40c840(a2, v8) >> 32;
            v31 = v8;
        }
        int64_t v32 = v30 + v8; // 0x4152e6
        *v2 = v32;
        v13 = v32;
        v16 = v31;
        v9 = v29;
        goto lab_0x41521a;
    }
}
// Address range: 0x415350 - 0x4159f3
int64_t function_415350(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x41535e
    uint64_t v3 = *v2; // 0x41535e
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x415478
        *(char *)(v1 + 8) = 2;
        // 0x41547e
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x41536f
    char * v5 = (char *)(v1 + 10); // 0x415373
    int32_t v6 = *(int32_t *)(a2 + 144); // 0x41537b
    int64_t v7 = v4 + v3;
    unsigned char v8 = *(char *)v7; // 0x415384
    char v9 = *v5 & -97;
    *v5 = v9;
    *(char *)a1 = v8;
    char v10; // 0x415350
    if (v6 < 2) {
        if (v8 == 92) {
            goto lab_0x415450;
        } else {
            // 0x415416
            *(char *)(v1 + 8) = 1;
            uint16_t v11 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)*__ctype_b_loc()); // 0x41542b
            v10 = 64 * ((char)(v11 / 8) % 2 | (char)(v8 == 95)) | v9;
            goto lab_0x4153f5;
        }
    } else {
        // 0x415399
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x41539f
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                int32_t * v12 = (int32_t *)(v1 + 8); // 0x415500
                *v12 = *v12 & -0x200100 | 0x200001;
                // 0x41547e
                return 1;
            }
        }
        if (v8 == 92) {
            goto lab_0x415450;
        } else {
            // 0x4153b8
            *(char *)(v1 + 8) = 1;
            int32_t wc = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3); // 0x4153c5
            v10 = 64 * (char)(wc == 95 | iswalnum(wc) != 0) | *v5 & -65;
            goto lab_0x4153f5;
        }
    }
  lab_0x415450:;
    uint64_t v13 = v3 + 1;
    if (v13 >= *(int64_t *)(a2 + 88)) {
        // 0x41545b
        *(char *)(v1 + 8) = 36;
        return 1;
    }
    // 0x415490
    char v14; // 0x415350
    int32_t v15; // 0x415957
    if (*(char *)(a2 + 139) != 0) {
        if (v6 < 2) {
            goto lab_0x415972;
        } else {
            int64_t v16 = *(int64_t *)(a2 + 16) + 4 * v13;
            v15 = *(int32_t *)v16;
            if (v15 == -1) {
                goto lab_0x4159db;
            } else {
                // 0x41595f
                if (*(int64_t *)(a2 + 48) == v3 + 2) {
                    goto lab_0x415972;
                } else {
                    // 0x41596a
                    if (*(int32_t *)(v16 + 4) == -1) {
                        goto lab_0x4159db;
                    } else {
                        goto lab_0x415972;
                    }
                }
            }
        }
    } else {
        // 0x41549e
        v14 = *(char *)(v4 + v13);
        goto lab_0x4154ab;
    }
  lab_0x4153f5:
    // 0x4153f5
    *v5 = v10;
    g130 = v8 - 10;
    switch (v8) {
        case 10: {
            // 0x415688
            if ((a3 & 2048) == 0) {
                // 0x41547e
                return 1;
            }
            // 0x41569a
            *(char *)(v1 + 8) = 10;
            // 0x41547e
            return 1;
        }
        case 36: {
            if ((a3 & 8) != 0) {
                // 0x4156f0
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x41547e
                return 1;
            }
            int64_t v17 = v3 + 1; // 0x4156b6
            if (v17 == *(int64_t *)(a2 + 88)) {
                // 0x4156f0
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x41547e
                return 1;
            }
            // 0x4156c0
            *v2 = v17;
            int64_t v18; // bp-72, 0x415350
            function_415350(&v18, a2, a3);
            *v2 = *v2 - 1;
            char v19; // 0x415350
            if (v19 < 11) {
                // 0x4156f0
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x41547e
                return 1;
            }
            // break -> 0x41547e
            break;
        }
        case 40: {
            // 0x415558
            if ((a3 & 0x2000) == 0) {
                // 0x41547e
                return 1;
            }
            // 0x41556a
            *(char *)(v1 + 8) = 8;
            // 0x41547e
            return 1;
        }
        case 41: {
            // 0x415578
            if ((a3 & 0x2000) == 0) {
                // 0x41547e
                return 1;
            }
            // 0x41558a
            *(char *)(v1 + 8) = 9;
            // 0x41547e
            return 1;
        }
        case 42: {
            // 0x415598
            *(char *)(v1 + 8) = 11;
            // 0x41547e
            return 1;
        }
        case 43: {
            // 0x4155b0
            if ((a3 & 1026) != 0) {
                // 0x41547e
                return 1;
            }
            // 0x4155c2
            *(char *)(v1 + 8) = 18;
            // 0x41547e
            return 1;
        }
        case 46: {
            // 0x4155d0
            *(char *)(v1 + 8) = 5;
            // 0x41547e
            return 1;
        }
        case 63: {
            // 0x4155e0
            if ((a3 & 1026) != 0) {
                // 0x41547e
                return 1;
            }
            // 0x4155f2
            *(char *)(v1 + 8) = 19;
            // 0x41547e
            return 1;
        }
        case 91: {
            // 0x415600
            *(char *)(v1 + 8) = 20;
            // 0x41547e
            return 1;
        }
        case 94: {
            if ((a3 & 0x800008) == 0 == (v3 != 0)) {
                // 0x4159aa
                if ((a3 & 2048) == 0 | *(char *)(v7 - 1) != 10) {
                    // 0x41547e
                    return 1;
                }
            }
            // 0x415622
            *(char *)(v1 + 8) = 12;
            *(int32_t *)a1 = 16;
            // 0x41547e
            return 1;
        }
        case 123: {
            // 0x415640
            if ((a3 & 0x1200) != 0x1200) {
                // 0x41547e
                return 1;
            }
            // 0x415659
            *(char *)(v1 + 8) = 23;
            // 0x41547e
            return 1;
        }
        case 124: {
            // 0x415668
            if ((a3 & 0x8400) != 0x8000) {
                // 0x41547e
                return 1;
            }
            // 0x41569a
            *(char *)(v1 + 8) = 10;
            // 0x41547e
            return 1;
        }
        case 125: {
            // 0x415708
            if ((a3 & 0x1200) != 0x1200) {
                // 0x41547e
                return 1;
            }
            // 0x415721
            *(char *)(v1 + 8) = 24;
            // 0x41547e
            return 1;
        }
    }
    // 0x41547e
    return 1;
  lab_0x415972:;
    int64_t v20 = *(int64_t *)(a2 + 40); // 0x41597e
    if (*(char *)(a2 + 140) == 0) {
        // 0x4159c8
        v14 = *(char *)(v20 + a2 + v13);
        goto lab_0x4154ab;
    } else {
        int64_t v21 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v13); // 0x41598b
        char v22 = *(char *)(v20 + a2 + v21); // 0x41598f
        v14 = v22;
        if (v22 > -1) {
            goto lab_0x4154ab;
        } else {
            // 0x41549e
            v14 = *(char *)(v4 + v13);
            goto lab_0x4154ab;
        }
    }
  lab_0x4154ab:;
    int64_t v23 = v14;
    int32_t v24 = v14;
    *(char *)a1 = v14;
    *(char *)(v1 + 8) = 1;
    int64_t v25; // 0x415350
    int64_t v26; // 0x415350
    int32_t wc2; // 0x415350
    int32_t v27; // 0x415350
    int32_t v28; // 0x415350
    char v29; // 0x415350
    if (v6 < 2) {
        uint16_t v30 = *(int16_t *)(2 * v23 + (int64_t)*__ctype_b_loc()); // 0x41552c
        char v31 = *v5; // 0x415540
        v29 = 64 * ((char)(v30 / 8) % 2 | (char)(v14 == 95)) | v31 & -65;
        v28 = v24;
        v26 = v23;
        goto lab_0x4154e3;
    } else {
        // 0x4154b7
        v27 = v24;
        wc2 = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v13);
        v25 = v23;
        goto lab_0x4154be;
    }
  lab_0x4159db:;
    unsigned char v32 = *(char *)(v4 + v13); // 0x4159db
    *(char *)(v1 + 8) = 1;
    *(char *)a1 = v32;
    v27 = v32;
    wc2 = v15;
    v25 = v32;
    goto lab_0x4154be;
  lab_0x4154be:;
    int32_t v33 = iswalnum(wc2); // 0x4154c0
    v29 = 64 * (char)(wc2 == 95 | v33 != 0) | *v5 & -65;
    v28 = v27;
    v26 = v25;
    goto lab_0x4154e3;
  lab_0x4154e3:
    // 0x4154e3
    *v5 = v29;
    uint64_t v34 = v26 + 0xffffffd9; // 0x4154e3
    g131 = v34 % 256;
    switch ((char)v34) {
        case 0: {
            // 0x41591b
            if ((a3 & 0x80000) == 0) {
                // 0x41592d
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 128;
            }
            // 0x41547e
            return 2;
        }
        case 1: {
            // 0x415904
            if ((a3 & 0x2000) != 0) {
                // 0x41547e
                return 2;
            }
            // 0x41556a
            *(char *)(v1 + 8) = 8;
            // 0x41547e
            return 2;
        }
        case 2: {
            // 0x4158ed
            if ((a3 & 0x2000) != 0) {
                // 0x41547e
                return 2;
            }
            // 0x41558a
            *(char *)(v1 + 8) = 9;
            // 0x41547e
            return 2;
        }
        case 4: {
            // 0x4158d2
            if ((a3 & 1026) != 2) {
                // 0x41547e
                return 2;
            }
            // 0x4155c2
            *(char *)(v1 + 8) = 18;
            // 0x41547e
            return 2;
        }
        case 10: {
        }
        case 11: {
        }
        case 12: {
        }
        case 13: {
        }
        case 14: {
        }
        case 15: {
        }
        case 16: {
        }
        case 17: {
        }
        case 18: {
            // 0x4158aa
            if ((a3 & 0x4000) == 0) {
                // 0x4158bc
                *(char *)(v1 + 8) = 4;
                *a1 = (int64_t)(v28 - 49);
            }
            // 0x41547e
            return 2;
        }
        case 21: {
            // 0x415889
            if ((a3 & 0x80000) == 0) {
                // 0x41589b
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 6;
            }
            // 0x41547e
            return 2;
        }
        case 23: {
            // 0x415868
            if ((a3 & 0x80000) == 0) {
                // 0x41587a
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 9;
            }
            // 0x41547e
            return 2;
        }
        case 24: {
            // 0x41584d
            if ((a3 & 1026) != 2) {
                // 0x41547e
                return 2;
            }
            // 0x4155f2
            *(char *)(v1 + 8) = 19;
            // 0x41547e
            return 2;
        }
        case 27: {
            // 0x41582c
            if ((a3 & 0x80000) == 0) {
                // 0x41583e
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 512;
            }
            // 0x41547e
            return 2;
        }
        case 44: {
            // 0x415811
            if ((a3 & 0x80000) == 0) {
                // 0x415823
                *(char *)(v1 + 8) = 35;
            }
            // 0x41547e
            return 2;
        }
        case 48: {
            // 0x4157f6
            if ((a3 & 0x80000) == 0) {
                // 0x415808
                *(char *)(v1 + 8) = 33;
            }
            // 0x41547e
            return 2;
        }
        case 57: {
            // 0x4157d5
            if ((a3 & 0x80000) == 0) {
                // 0x4157e7
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 64;
            }
            // 0x41547e
            return 2;
        }
        case 59: {
            // 0x4157b4
            if ((a3 & 0x80000) == 0) {
                // 0x4157c6
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 256;
            }
            // 0x41547e
            return 2;
        }
        case 76: {
            // 0x415799
            if ((a3 & 0x80000) == 0) {
                // 0x4157ab
                *(char *)(v1 + 8) = 34;
            }
            // 0x41547e
            return 2;
        }
        case 80: {
            // 0x41577e
            if ((a3 & 0x80000) == 0) {
                // 0x415790
                *(char *)(v1 + 8) = 32;
            }
            // 0x41547e
            return 2;
        }
        case 84: {
            // 0x415760
            if ((a3 & 0x1200) != 512) {
                // 0x41547e
                return 2;
            }
            // 0x415659
            *(char *)(v1 + 8) = 23;
            // 0x41547e
            return 2;
        }
        case 85: {
            // 0x415745
            if ((a3 & 0x8400) == 0) {
                // 0x415757
                *(char *)(v1 + 8) = 10;
            }
            // 0x41547e
            return 2;
        }
        case 86: {
            // 0x41572a
            if ((a3 & 0x1200) != 512) {
                // 0x41547e
                return 2;
            }
            // 0x415721
            *(char *)(v1 + 8) = 24;
            // 0x41547e
            return 2;
        }
    }
    // 0x41547e
    return 2;
}
// Address range: 0x415a00 - 0x415ab6
int64_t function_415a00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 72);
    int64_t result2 = -1;
    *v1 = (0x100000000 * function_415350((int64_t *)a2, a1, a3) >> 32) + *v1;
    char v2 = *(char *)(a2 + 8); // 0x415a39
    int64_t result = result2; // 0x415a00
    switch (v2) {
        case 2: {
            // 0x415a97
            return -2;
        }
        case 24: {
            // 0x415a97
            return result;
        }
    }
    // 0x415a46
    int64_t v3; // 0x415a00
    unsigned char v4 = (char)v3; // 0x415a2e
    while (v4 != 44) {
        int64_t v5 = -2; // 0x415a4d
        if (v2 == 1) {
            // 0x415a58
            v5 = -2;
            if (result2 != -2 && v4 <= 57) {
                int64_t v6 = v4; // 0x415a2e
                if (result2 == -1) {
                    // 0x415aa8
                    v5 = v6 - 48;
                } else {
                    int64_t v7 = 10 * result2 + v6; // 0x415a6f
                    int64_t v8 = v7 - 0x8030; // 0x415a78
                    v5 = v8 < 0 == (0x802f - v7 & v7) < 0 == (v8 != 0) ? 0x8000 : v7 - 48;
                }
            }
        }
        // 0x415a20
        result2 = v5;
        *v1 = (0x100000000 * function_415350((int64_t *)a2, a1, a3) >> 32) + *v1;
        v2 = *(char *)(a2 + 8);
        result = result2;
        switch (v2) {
            case 2: {
                // 0x415a97
                return -2;
            }
            case 24: {
                // 0x415a97
                return result;
            }
        }
        // 0x415a46
        int64_t v9; // 0x415a00
        v4 = *(char *)&v9;
    }
    // 0x415a97
    return result2;
}
// Address range: 0x415ac0 - 0x416fa4
int64_t function_415ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x415ac0
    int128_t v1; // 0x415ac0
    int128_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a3;
    int64_t v5; // bp-280, 0x415ac0
    int64_t v6 = &v5; // 0x415aca
    unsigned char v7 = *(char *)(a3 + 8); // 0x415ad9
    int64_t v8 = v7; // 0x415ad9
    int64_t v9 = v4; // 0x415ae5
    v4 = v8;
    g132 = v8;
    int32_t v10 = v7;
    int64_t * v11; // 0x415ac0
    int32_t v12; // 0x415ac0
    int64_t v13; // 0x415ac0
    int64_t v14; // bp-88, 0x415ac0
    int64_t v15; // 0x415ac0
    int64_t v16; // 0x41681b
    char v17; // 0x416822
    int64_t * mem2; // 0x416209
    int64_t v18; // 0x416209
    int64_t * v19; // 0x416230
    char * v20; // 0x416237
    switch (v7) {
        case 1: {
            int64_t v21 = a2 + 112; // 0x416387
            int64_t v22 = a2 + 128; // 0x41638b
            int64_t v23 = function_40d500(v21, v22, 0, 0, v9); // 0x416398
            if (v23 == 0) {
                // 0x416451
                *(int32_t *)a6 = 12;
                // 0x415c38
                *(int64_t *)(v6 + 24) = 0;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            // 0x4163ab
            if (*(int32_t *)(a2 + 180) >= 2) {
                int64_t * v24 = (int64_t *)(a1 + 72); // 0x4163c8
                int64_t v25 = &v14;
                int64_t v26 = 0x100000000 * v23 >> 32; // 0x416435
                uint64_t v27 = *v24; // 0x4163c8
                while (*(int64_t *)(a1 + 104) > v27) {
                    // 0x4163d6
                    if (v27 == *(int64_t *)(a1 + 48)) {
                        // break -> 0x415b60
                        break;
                    }
                    // 0x4163e0
                    if (*(int32_t *)(*(int64_t *)(a1 + 16) + 4 * v27) != -1) {
                        // break -> 0x415b60
                        break;
                    }
                    // 0x4163ee
                    *v24 = (0x100000000 * function_415350((int64_t *)v9, a1, a4) >> 32) + *v24;
                    int64_t v28 = function_40d500(v21, v22, 0, 0, v9); // 0x416411
                    v26 = function_40d500(v21, v22, (int32_t)v26, (int32_t)v28, v25);
                    if (v28 == 0 || v26 == 0) {
                        // 0x416451
                        *(int32_t *)a6 = 12;
                        // 0x415c38
                        *(int64_t *)(v6 + 24) = 0;
                        // 0x415b8a
                        return *(int64_t *)(v6 + 24);
                    }
                    v27 = *v24;
                }
            }
            goto lab_0x415b60;
        }
        case 4: {
            int64_t v29 = 1 << v10 % 32; // 0x416471
            if ((*(int64_t *)(a2 + 168) & v29) == 0) {
                // 0x416aec
                *(int32_t *)a6 = 6;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v30 = (int64_t *)(a2 + 160); // 0x41648c
            *v30 = *v30 | v29;
            if (function_40d500(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x416451
                *(int32_t *)a6 = 12;
                // 0x415c38
                *(int64_t *)(v6 + 24) = 0;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v31 = (int64_t *)(a2 + 152); // 0x4164ad
            *v31 = *v31 + 1;
            char * v32 = (char *)(a2 + 176); // 0x4164b5
            *v32 = *v32 | 2;
            goto lab_0x415b60;
        }
        case 5: {
            // 0x4164c1
            if (function_40d500(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x416451
                *(int32_t *)a6 = 12;
                // 0x415c38
                *(int64_t *)(v6 + 24) = 0;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            // 0x4164eb
            if (*(int32_t *)(a2 + 180) >= 2) {
                char * v33 = (char *)(a2 + 176); // 0x4164f8
                *v33 = *v33 | 2;
            }
            goto lab_0x415b60;
        }
        case 8: {
            int64_t * v34 = (int64_t *)(a2 + 48); // 0x415ba1
            uint64_t v35 = *v34; // 0x415ba1
            v5 = a5;
            *v34 = v35 + 1;
            int64_t v36 = function_415350((int64_t *)v9, a1, a4 | 0x800000); // 0x415bc6
            int64_t * v37 = (int64_t *)(a1 + 72); // 0x415bcd
            *v37 = (0x100000000 * v36 >> 32) + *v37;
            char * v38 = (char *)(v9 + 8); // 0x415bd3
            int64_t v39 = 0; // 0x415bd9
            if (*v38 != 9) {
                // 0x415bdf
                v4 = v9;
                int64_t v40 = function_4170f0(a1, a2, v9, a4, v5 + 1, a6); // 0x415bfb
                if (*(int32_t *)&v3 != 0) {
                    // 0x415c38
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x415b8a
                    return *(int64_t *)(v6 + 24);
                }
                // 0x415c09
                v39 = v40;
                if (*v38 != 9) {
                    if (v40 != 0) {
                        // 0x415c1a
                        function_40ad30(v40, 0x40bf40, 0);
                    }
                    // 0x415c29
                    *(int32_t *)a6 = 8;
                  lab_0x415c38:
                    // 0x415c38
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x415b8a
                    return *(int64_t *)(v6 + 24);
                }
            }
            // 0x416662
            if (v35 < 9) {
                int32_t v41 = 1 << (int32_t)v35 % 32;
                v4 = v41;
                int64_t * v42 = (int64_t *)(a2 + 168); // 0x4166ba
                *v42 = *v42 | (int64_t)v41;
            }
            int64_t v43 = function_40d500(a2 + 112, a2 + 128, (int32_t)v39, 0, (int64_t)&v14); // 0x41668d
            if (v43 == 0) {
                // 0x416451
                *(int32_t *)a6 = 12;
                // 0x415c38
                *(int64_t *)(v6 + 24) = 0;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            // 0x4166a0
            *(int64_t *)(v43 + 40) = v35;
            goto lab_0x415b60;
        }
        case 9: {
            if ((a4 & 0x20000) == 0) {
                // 0x416649
                *(int32_t *)a6 = 16;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x415b30;
        }
        case 11: {
            goto lab_0x415b11;
        }
        case 12: {
            char * v44 = (char *)(a2 + 176); // 0x416516
            unsigned char v45 = *v44; // 0x416516
            if ((v45 & 16) != 0) {
                // 0x416570
            } else {
                int64_t v46 = v45; // 0x416516
                *v44 = v45 | 16;
                v13 = 0;
                v15 = 0;
                if ((v46 & 8) != 0) {
                    goto lab_0x416d65;
                } else {
                    // 0x416537
                    *(int64_t *)(a2 + 184) = 0x3ff000000000000;
                    *(int64_t *)(a2 + 192) = 0x7fffffe87fffffe;
                    v13 = 128;
                    v15 = 2;
                    if ((v46 & 4) == 0) {
                        goto lab_0x416d65;
                    } else {
                        // 0x416561
                        __asm_movups(*(int128_t *)(a2 + 200), __asm_pxor(v2, v2));
                        v12 = *(int32_t *)&v4;
                        goto lab_0x416570_2;
                    }
                }
            }
        }
        case 18: {
            goto lab_0x415b11;
        }
        case 19: {
            goto lab_0x415b11;
        }
        case 20: {
            int64_t * mem = calloc(32, 1); // 0x4161f3
            v5 = (int64_t)mem;
            mem2 = calloc(80, 1);
            if (mem == NULL || mem2 == NULL) {
                // 0x416ad6
                free((int64_t *)v5);
                free(mem2);
                // 0x416451
                *(int32_t *)a6 = 12;
                // 0x415c38
                *(int64_t *)(v6 + 24) = 0;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            // 0x416225
            v18 = (int64_t)mem2;
            v19 = (int64_t *)v9;
            int64_t v47 = function_40ada0(v19, a1, a4); // 0x416230
            v20 = (char *)(v9 + 8);
            char v48 = *v20; // 0x416237
            v17 = v48;
            v16 = v47;
            switch (v48) {
                case 2: {
                    // 0x416aaa
                    *(int32_t *)a6 = 2;
                    v11 = (int64_t *)(v6 + 48);
                    goto lab_0x41677b_3;
                }
                case 25: {
                    char * v49 = (char *)(v18 + 32); // 0x4167ee
                    *v49 = *v49 | 1;
                    if ((a4 & 256) != 0) {
                        int64_t * v50 = (int64_t *)v5; // 0x416802
                        *v50 = *v50 | 1024;
                    }
                    int64_t * v51 = (int64_t *)(a1 + 72); // 0x41680c
                    *v51 = *v51 + (0x100000000 * v47 >> 32);
                    v16 = function_40ada0(v19, a1, a4);
                    v17 = *v20;
                    if (v17 == 2) {
                        // 0x416aaa
                        *(int32_t *)a6 = 2;
                        v11 = (int64_t *)(v6 + 48);
                        goto lab_0x41677b_3;
                    } else {
                        goto lab_0x416252;
                    }
                }
                default: {
                    goto lab_0x416252;
                }
            }
        }
        case 23: {
            if ((a4 & 0x1000000) != 0) {
              lab_0x415e35:
                // 0x415e35
                *(int64_t *)(v6 + 24) = 0;
                *(int32_t *)*(int64_t *)(v6 + 48) = 13;
                // 0x415b8a
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x415b11;
        }
        case 24: {
            goto lab_0x415b30;
        }
        case 32: {
            goto lab_0x4162f4;
        }
        case 33: {
            goto lab_0x4162f4;
        }
        case 34: {
            goto lab_0x416340;
        }
        case 35: {
            goto lab_0x416340;
        }
        case 36: {
            // 0x416362
            *(int32_t *)a6 = 5;
            // 0x415b8a
            return *(int64_t *)(v6 + 24);
        }
        default: {
            goto lab_0x415c38;
        }
    }
  lab_0x41614b:;
    // 0x41614b
    int64_t * v52; // 0x415ac0
    if (*v52 == 0) {
        goto lab_0x415c38;
    } else {
        goto lab_0x415eeb;
    }
  lab_0x415eeb:
    // 0x415eeb
    function_40ad30(*v52, 0x40bf40, 0);
    *v52 = 0;
    return *(int64_t *)(v6 + 24);
  lab_0x415fe2:;
    // 0x415fe2
    int64_t v53; // 0x415ac0
    char * v54 = (char *)(v53 + 8);
    char * v55 = v54; // 0x415feb
    int128_t v56; // 0x415ac0
    int128_t v57 = v56; // 0x415feb
    int64_t * v58; // 0x415b60
    int64_t * v59; // 0x415ac0
    if ((*v58 & 0x200000) == 0) {
        // 0x416aba
        if (*v54 != 2) {
            // 0x416140
            *(int32_t *)*v59 = 10;
            goto lab_0x41614b;
        } else {
            // 0x416ac6
            *(int32_t *)*v59 = 9;
            goto lab_0x41614b;
        }
    }
    goto lab_0x415ff1;
  lab_0x416104:;
    // 0x416104
    int64_t v83; // 0x415ac0
    int64_t v336 = v83; // 0x416106
    int64_t v337 = v336 - 0x7fff; // 0x416106
    int64_t v84; // 0x415ac0
    int64_t v316 = v84; // 0x416114
    if (v337 < 0 == (0x7ffe - v336 & v336) < 0 == (v337 != 0)) {
        // 0x416116
        *(int32_t *)*v59 = 15;
        goto lab_0x41614b;
    }
    goto lab_0x4160a9;
  lab_0x416049:;
    int64_t v338 = *v58; // 0x416049
    v4 = v338;
    int128_t v80; // 0x415fb5
    int128_t * v78; // 0x415ac0
    *v78 = (int128_t)__asm_movaps(v80);
    int64_t v66; // 0x415ac0
    int64_t v339 = function_415a00(v66, v53, v338); // 0x416059
    v5 = v339;
    v56 = __asm_movdqa(*v78);
    int64_t v81; // 0x415ac0
    if (v339 == -2) {
        goto lab_0x415fe2;
    } else {
        int64_t v340 = v81;
        if (v339 != -1 == v339 < v340) {
            // 0x416140
            *(int32_t *)*v59 = 10;
            goto lab_0x41614b;
        }
        // 0x416085
        if (*(char *)(v53 + 8) != 24) {
            // 0x416140
            *(int32_t *)*v59 = 10;
            goto lab_0x41614b;
        }
        // 0x416091
        v83 = v339;
        v84 = v340;
        if (v339 != -1) {
            goto lab_0x416104;
        } else {
            int64_t v341 = v340 - 0x7fff; // 0x41609a
            v316 = v340;
            if (v341 < 0 == (0x7ffe - v340 & v340) < 0 == (v341 != 0)) {
                // 0x416116
                *(int32_t *)*v59 = 15;
                goto lab_0x41614b;
            }
            goto lab_0x4160a9;
        }
    }
  lab_0x415ff1:;
    // 0x415ff1
    int64_t * v60; // 0x415c66
    int64_t v61; // 0x415c66
    *v60 = v61;
    int128_t * v62; // 0x415c6a
    *v62 = (int128_t)__asm_movaps(v57);
    *v55 = 1;
    int64_t v63 = *v52; // 0x416005
    int64_t v64 = v53; // 0x416005
    int64_t v65 = v66; // 0x416005
    goto lab_0x415dde;
  lab_0x416010:
    // 0x416010
    if (*(int32_t *)*v59 != 0) {
        // 0x415c38
        *(int64_t *)(v6 + 24) = 0;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x41601f;
  lab_0x4160a9:;
    int64_t v315 = v316;
    int64_t v317 = *v58; // 0x4160a9
    v4 = v317;
    int64_t v318 = function_415350((int64_t *)v53, v66, v317); // 0x4160b4
    int64_t v319 = *v52; // 0x4160b9
    *v60 = *v60 + (0x100000000 * v318 >> 32);
    int64_t v127; // 0x415ac0
    int64_t v99; // 0x415ac0
    int64_t v132; // 0x415ac0
    int64_t v128; // 0x415ac0
    int64_t v101; // 0x415ac0
    int64_t v135; // 0x415ac0
    int64_t v102; // 0x415ac0
    int64_t v103; // 0x415ac0
    int64_t v136; // 0x415ac0
    int64_t v129; // 0x415ac0
    int64_t v134; // 0x415ac0
    int64_t v100; // 0x415ac0
    int64_t v133; // 0x415ac0
    int64_t * v89; // 0x415ac0
    int64_t * v110; // 0x415ac0
    int64_t * v118; // 0x415ac0
    int64_t v114; // 0x415ac0
    char * v108; // 0x415ac0
    if (v319 == 0) {
        goto lab_0x416010;
    } else {
        int64_t v320 = v5; // 0x4160cd
        if ((v320 || v315) != 0) {
            if (v315 < 1) {
                // 0x416f98
                v4 = 0;
                v132 = 0;
                v133 = v315;
                v134 = *v52;
                v135 = v53;
                v136 = v66;
                goto lab_0x4161c2;
            } else {
                int64_t v321; // 0x415ac0
                int64_t v322; // 0x415ac0
                int64_t v323; // 0x415ac0
                int64_t v324; // 0x415ac0
                int64_t v325; // 0x415ac0
                if (v315 == 1) {
                    int64_t v326 = *v52; // 0x416f67
                    v321 = v320;
                    v322 = v53;
                    v323 = v326;
                    v324 = v66;
                    v325 = v326;
                } else {
                    int64_t v327 = *v110; // 0x415e63
                    int64_t v328 = *v52; // 0x415e68
                    *v89 = v66;
                    *v118 = v53;
                    int64_t v329 = v327 + 112; // 0x415e7f
                    int64_t v330 = v327 + 128; // 0x415e83
                    int64_t v331 = 2; // 0x415e8d
                    int64_t v332 = function_40d5e0(v328, *v110); // 0x415eaa
                    v4 = v328;
                    *v108 = 16;
                    int64_t v333 = function_40d500(v329, v330, (int32_t)v328, (int32_t)v332, v114); // 0x415ece
                    if (v332 == 0 || v333 == 0) {
                        // 0x415ee0
                        *(int32_t *)*v59 = 12;
                        goto lab_0x415eeb;
                    }
                    // 0x415e95
                    v331++;
                    int64_t v334 = v333; // 0x415e9c
                    int64_t v335 = v332; // 0x415e9c
                    while (v315 >= v331) {
                        // 0x415ea2
                        v332 = function_40d5e0(v335, *v110);
                        v4 = v334;
                        *v108 = 16;
                        v333 = function_40d500(v329, v330, (int32_t)v334, (int32_t)v332, v114);
                        if (v332 == 0 || v333 == 0) {
                            // 0x415ee0
                            *(int32_t *)*v59 = 12;
                            goto lab_0x415eeb;
                        }
                        // 0x415e95
                        v331++;
                        v334 = v333;
                        v335 = v332;
                    }
                    // 0x416160
                    v321 = v5;
                    v322 = *v118;
                    v323 = v332;
                    v324 = *v89;
                    v325 = v333;
                }
                // 0x416173
                v4 = v325;
                v127 = v325;
                v128 = v322;
                v129 = v324;
                v99 = v325;
                v100 = v315;
                v101 = v322;
                v102 = v323;
                v103 = v324;
                if (v315 != v321) {
                    goto lab_0x41619f;
                } else {
                    goto lab_0x416180;
                }
            }
        } else {
            // 0x4160da
            v4 = 0;
            function_40ad30(v319, 0x40bf40, 0);
            if (*(int32_t *)*v59 != 0) {
                goto lab_0x415eeb;
            }
            goto lab_0x41601f;
        }
    }
  lab_0x415dde:;
    uint32_t v67 = *(int32_t *)*v59; // 0x415de3
    v4 = v67;
    if (v63 == 0 == (v67 != 0)) {
        goto lab_0x41614b;
    }
    // 0x415df2
    *v52 = v63;
    int64_t v68 = v63; // 0x415df2
    int64_t v69 = v64; // 0x415df2
    int64_t v70 = v65; // 0x415df2
    goto lab_0x415df7;
  lab_0x41601f:
    // 0x41601f
    *v52 = 0;
    v68 = 0;
    v69 = v53;
    v70 = v66;
    goto lab_0x415df7;
  lab_0x415f78:;
    // 0x415f78
    int64_t v96; // 0x415ac0
    int64_t v104 = v96;
    function_40ad30(v104, 0x40aed0, (int32_t)*(int64_t *)(v104 + 40));
    goto lab_0x415f89;
  lab_0x415cda:;
    // 0x415cda
    int64_t v94; // 0x415ac0
    int64_t v105 = v94;
    int64_t v93; // 0x415ac0
    int64_t v106 = v93;
    int64_t v92; // 0x415ac0
    int64_t v107 = v92;
    char v90; // 0x415ac0
    *v108 = v90;
    int64_t v109 = *v110; // 0x415ce1
    int64_t v111 = v109 + 112; // 0x415cf3
    int64_t v112 = v109 + 128; // 0x415cf7
    int64_t v113 = function_40d500(v111, v112, (int32_t)v107, 0, v114); // 0x415d04
    v4 = v113;
    if (v113 == 0) {
        // 0x415ee0
        *(int32_t *)*v59 = 12;
        goto lab_0x415eeb;
    }
    // 0x415d15
    int64_t v91; // 0x415ac0
    int64_t v115 = v91 + 2; // 0x415d15
    int64_t v116 = v113; // 0x415d1d
    int64_t v117 = v106; // 0x415d1d
    if (v115 <= v5) {
        // 0x415d23
        *v118 = v106;
        int64_t v119 = v115; // 0x415d2b
        int64_t v120 = v107; // 0x415d2b
        v120 = function_40d5e0(v120, *v110);
        v4 = v113;
        *v108 = 16;
        int64_t v121 = function_40d500(v111, v112, (int32_t)v113, (int32_t)v120, v114); // 0x415d5a
        if (v120 == 0 || v121 == 0) {
            // 0x415ee0
            *(int32_t *)*v59 = 12;
            goto lab_0x415eeb;
        }
        // 0x415d71
        v4 = v121;
        *v108 = 10;
        int64_t v122 = function_40d500(v111, v112, (int32_t)v121, 0, v114); // 0x415d8c
        if (v122 == 0) {
            // 0x415ee0
            *(int32_t *)*v59 = 12;
            goto lab_0x415eeb;
        }
        // 0x415d9d
        v119++;
        int64_t v123 = v122; // 0x415da5
        while (v119 <= v5) {
            // 0x415d2e
            v120 = function_40d5e0(v120, *v110);
            v4 = v123;
            *v108 = 16;
            v121 = function_40d500(v111, v112, (int32_t)v123, (int32_t)v120, v114);
            if (v120 == 0 || v121 == 0) {
                // 0x415ee0
                *(int32_t *)*v59 = 12;
                goto lab_0x415eeb;
            }
            // 0x415d71
            v4 = v121;
            *v108 = 10;
            v122 = function_40d500(v111, v112, (int32_t)v121, 0, v114);
            if (v122 == 0) {
                // 0x415ee0
                *(int32_t *)*v59 = 12;
                goto lab_0x415eeb;
            }
            // 0x415d9d
            v119++;
            v123 = v122;
        }
        // 0x415da7
        v4 = v122;
        v116 = v122;
        v117 = *v118;
    }
    int64_t v124 = v117;
    int64_t v125 = v116; // 0x415dbd
    int64_t v126 = *v89; // 0x415daf
    v127 = v125;
    v128 = v124;
    v129 = v105;
    if (v126 == 0) {
        goto lab_0x416180;
    } else {
        // 0x415dbd
        *v108 = 16;
        v63 = function_40d500(v111, v112, (int32_t)v126, (int32_t)v125, v114);
        v64 = v124;
        v65 = v105;
        goto lab_0x415dde;
    }
  lab_0x415df7:;
    unsigned char v71 = *(char *)(v69 + 8); // 0x415df7
    if ((*v58 & 0x1000000) != 0) {
        if (v71 != 11 != v71 != 23) {
            // 0x415e1c
            if (v68 == 0) {
                goto lab_0x415e35;
            } else {
                // 0x415e26
                function_40ad30(v68, 0x40bf40, 0);
                goto lab_0x415e35;
            }
        }
    }
    char v72 = v71; // 0x415b84
    int64_t v73 = v70; // 0x415b84
    int64_t v74 = v69; // 0x415b84
    if (v71 >= 24) {
        // break -> 0x415b8a
        goto lab_0x415b8a_2;
    }
    goto lab_0x415c50;
  lab_0x415f89:
    // 0x415f89
    v90 = v5 == -1 ? 11 : 10;
    int64_t v95; // 0x415ac0
    v91 = v95;
    v92 = v104;
    int64_t v97; // 0x415ac0
    v93 = v97;
    int64_t v98; // 0x415ac0
    v94 = v98;
    goto lab_0x415cda;
  lab_0x416180:
    // 0x416180
    *v52 = v127;
    v68 = v127;
    v69 = v128;
    v70 = v129;
    goto lab_0x415df7;
  lab_0x41619f:
    // 0x41619f
    *v89 = v99;
    int64_t v130 = function_40d5e0(v102, *v110); // 0x4161ac
    int64_t v131 = *v89; // 0x4161b1
    v4 = v131;
    v132 = v131;
    v133 = v100;
    v134 = v130;
    v135 = v101;
    v136 = v103;
    if (v130 == 0) {
        // 0x415ee0
        *(int32_t *)*v59 = 12;
        goto lab_0x415eeb;
    }
    goto lab_0x4161c2;
  lab_0x4161c2:
    // 0x4161c2
    *v89 = v132;
    v95 = v133;
    v96 = v134;
    v97 = v135;
    v98 = v136;
    if (*(char *)(v134 + 48) != 17) {
        goto lab_0x415f89;
    } else {
        goto lab_0x415f78;
    }
  lab_0x416dba:;
    // 0x416dba
    uint64_t v137; // 0x415ac0
    int64_t v138 = 1 << v137;
    v4 = v138;
    int64_t * v139; // 0x415ac0
    *v139 = *v139 | v138;
    goto lab_0x416da8;
  lab_0x416da8:;
    int64_t v140 = v137 + 1; // 0x416db0
    if (v137 == 63) {
        // break -> 0x416dc9
        goto lab_0x416dc9;
    }
    goto lab_0x416db2;
  lab_0x41677b_3:
    // 0x41677b
    free((int64_t *)v5);
    function_40bef0(v18);
    if (*(int32_t *)*v11 != 0) {
        // 0x415c38
        *(int64_t *)(v6 + 24) = 0;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    // 0x41679d
    *(int64_t *)(v6 + 24) = 0;
    goto lab_0x415b60;
  lab_0x416c1e:;
    // 0x416c1e
    int64_t * v177; // 0x415ac0
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x416e26_3:
    // 0x416e26
    *(int32_t *)*v177 = 11;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x416d25_5:
    // 0x416d25
    *(int32_t *)*v177 = 3;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x4162e4:;
    // 0x4162e4
    int64_t v188; // 0x4162b9
    int64_t v254 = v188 & 0xffffffff; // 0x4162be
    int64_t v234; // 0x415ac0
    int64_t v255; // 0x415ac0
    int64_t v235; // 0x415ac0
    int64_t * v152; // 0x416294
    int32_t * v168; // 0x415ac0
    int64_t v178; // 0x415ac0
    int64_t * v179; // 0x415ac0
    int64_t * v180; // 0x415ac0
    int64_t * v181; // 0x415ac0
    int64_t * v182; // 0x415ac0
    int64_t v148; // 0x416263
    int64_t * v149; // 0x41627e
    int64_t v151; // 0x416294
    switch (g133) {
        case 0: {
            unsigned char v256 = *(char *)v151; // 0x416721
            unsigned char v257 = v256 % 64;
            int64_t v258 = v257 == 0 ? 1 : 1 << (int64_t)v257;
            v4 = v258;
            int64_t * v259 = (int64_t *)(v148 + (int64_t)(v256 / 8 & 24)); // 0x416738
            *v259 = v258 | *v259;
            v255 = v254;
            goto lab_0x4166df;
        }
        case 1: {
            int64_t v260 = *v181; // 0x4166fd
            v4 = v260;
            int64_t v261 = *mem2; // 0x416701
            int64_t v262 = v260; // 0x41670a
            int64_t v263 = v261; // 0x41670a
            if (v260 == *v182) {
                int64_t v264 = 2 * v260 | 1; // 0x416b26
                *v182 = v264;
                int64_t * mem3 = realloc((int64_t *)v261, 4 * (int32_t)v264); // 0x416b38
                if (mem3 == NULL) {
                    goto lab_0x416c1e;
                }
                // 0x416b46
                v263 = (int64_t)mem3;
                *mem2 = v263;
                v262 = *v181;
                v4 = v262;
            }
            // 0x416710
            *v181 = v262 + 1;
            *(int32_t *)(4 * v4 + v263) = *v168;
            v255 = v254;
            goto lab_0x4166df;
        }
        case 2: {
            int32_t v265 = function_4100d0(v148, *v152); // 0x4166d5
            *(int32_t *)*v177 = v265;
            v255 = v254;
            v11 = v177;
            if (v265 != 0) {
                goto lab_0x41677b_3;
            }
            goto lab_0x4166df;
        }
        case 3: {
            int32_t v266 = function_4100d0(v148, *v152); // 0x4167bd
            *(int32_t *)*v177 = v266;
            v255 = v254;
            v11 = v177;
            if (v266 != 0) {
                goto lab_0x41677b_3;
            }
            goto lab_0x4166df;
        }
        case 4: {
            int64_t v267 = *(int64_t *)(a1 + 120); // 0x416743
            *v179 = *v149;
            int64_t v268 = function_410120(v267, v148, v18 + 24, v178, v180, *v152, (int64_t)&g127); // 0x416763
            int32_t v269 = v268; // 0x41676d
            *(int32_t *)*v177 = v269;
            v3 = *v179;
            v255 = v254;
            v11 = v177;
            if (v269 != 0) {
                goto lab_0x41677b_3;
            }
            goto lab_0x4166df;
        }
        default: {
            // 0x416f24
            __assert_fail("0", "lib/regcomp.c", 3315, "parse_bracket_exp");
            v234 = &g127;
            v235 = (int64_t)"parse_bracket_exp";
            goto lab_0x416f3d_3;
        }
    }
  lab_0x416845:
    // 0x416845
    *(int32_t *)*v177 = 7;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x4166df:;
    int64_t v270 = v255;
    int64_t v183 = v270; // 0x415ac0
    int64_t v184 = 0; // 0x415ac0
    int64_t * v156; // 0x415ac0
    int64_t * v163; // 0x415ac0
    switch (*v20) {
        case 2: {
            goto lab_0x416845;
        }
        case 21: {
            // 0x416b53
            *v156 = *v156 + (0x100000000 * v270 >> 32);
            if (*(char *)(v6 + 56) != 0) {
                // 0x416b61
                v4 = v5 + 32;
                int64_t v271 = v5; // 0x416b68
                int64_t * v272 = (int64_t *)v271; // 0x416b6c
                *v272 = -1 - *v272;
                v271 += 8;
                while (v4 != v271) {
                    // 0x416b6c
                    v272 = (int64_t *)v271;
                    *v272 = -1 - *v272;
                    v271 += 8;
                }
            }
            uint32_t v273 = *(int32_t *)(*v163 + 180); // 0x416b7d
            v4 = v273;
            if (v273 >= 2) {
                int64_t v274 = 0;
                int64_t * v275 = (int64_t *)(v274 + v5); // 0x416b9b
                *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                int64_t v276 = v274 + 8; // 0x416ba7
                while (v274 != 24) {
                    // 0x416b97
                    v274 = v276;
                    v275 = (int64_t *)(v274 + v5);
                    *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                    v276 = v274 + 8;
                }
            }
            // 0x416ba9
            if (*v181 != 0) {
                goto lab_0x416c2e;
            } else {
                // 0x416bb0
                if (*(int64_t *)(v18 + 48) != 0) {
                    goto lab_0x416c2e;
                } else {
                    // 0x416bb7
                    if (*(int64_t *)(v18 + 56) != 0) {
                        goto lab_0x416c2e;
                    } else {
                        // 0x416bbe
                        if (*(int64_t *)(v18 + 64) != 0) {
                            goto lab_0x416c2e;
                        } else {
                            int64_t v277 = v4; // 0x416bc5
                            v4 = v277 + 0xffffffff & 0xffffffff;
                            if ((int32_t)v277 < 2) {
                                goto lab_0x416bd8;
                            } else {
                                // 0x416bca
                                if (*(int64_t *)v178 != 0) {
                                    goto lab_0x416c2e;
                                } else {
                                    // 0x416bd1
                                    if (*(char *)(v18 + 32) % 2 != 0) {
                                        goto lab_0x416c2e;
                                    } else {
                                        goto lab_0x416bd8;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x41627e;
        }
    }
  lab_0x4169bf:;
    // 0x4169bf
    int64_t v203; // 0x415ac0
    int64_t v278 = (int64_t)*(char *)v203;
    int64_t v220 = v278; // 0x4169c1
    int64_t v216; // 0x415ac0
    char v218; // 0x415ac0
    int64_t v217; // 0x415ac0
    int64_t v219; // 0x415ac0
    int64_t * v162; // 0x415ac0
    int32_t v197; // 0x416986
    if (v197 == 0) {
        goto lab_0x416e19;
    } else {
        // 0x4169c7
        v218 = 0;
        v219 = v278;
        if (v197 != 3) {
            goto lab_0x4169da;
        } else {
            int64_t v279 = *v162; // 0x4169ce
            v3 = v279;
            v216 = v279;
            v217 = v278;
            goto lab_0x4169d6;
        }
    }
  lab_0x416e19:;
    // 0x416e19
    int64_t v161; // 0x415ac0
    v218 = *(char *)v161;
    v219 = v220;
    goto lab_0x4169da;
  lab_0x4169d6:
    // 0x4169d6
    v218 = *(char *)v216;
    v219 = v217;
    goto lab_0x4169da;
  lab_0x4169da:;
    int64_t v280 = v219;
    unsigned char v281 = v218;
    int64_t v282; // 0x415ac0
    int64_t v283; // 0x415ac0
    int32_t v284; // 0x415ac0
    char * v165; // 0x415ac0
    int32_t v195; // 0x41695d
    if (v195 == 0) {
        goto lab_0x416de4;
    } else {
        // 0x4169e3
        v283 = v281;
        v284 = v197;
        v282 = (int64_t)*v168;
        if (*v165 != 0) {
            goto lab_0x416de4;
        } else {
            goto lab_0x4169f3;
        }
    }
  lab_0x416de4:;
    // 0x416de4
    int32_t * v170; // 0x415ac0
    *v170 = (int32_t)v281;
    int64_t * v171; // 0x415ac0
    *v171 = v4;
    int64_t v285 = function_40b4b0(v280, v4); // 0x416df0
    v4 = *v171;
    v283 = (int64_t)*v170;
    int32_t * v160; // 0x415ac0
    v284 = *v160;
    v282 = v285 & 0xffffffff;
    goto lab_0x4169f3;
  lab_0x4169f3:;
    int64_t v286 = v282;
    int32_t v287 = v284;
    int64_t v288 = v283;
    int64_t v289; // 0x415ac0
    int64_t v290; // 0x415ac0
    if (v287 == 0) {
        goto lab_0x416d35;
    } else {
        int64_t v291 = (int64_t)*(int32_t *)v161; // 0x4169fb
        v3 = v291;
        v289 = v291;
        v290 = v286;
        if (v287 == 3) {
            goto lab_0x416d35;
        } else {
            goto lab_0x416a0c;
        }
    }
  lab_0x416d35:
    // 0x416d35
    *v170 = (int32_t)v286;
    *v171 = v4;
    int64_t v292 = function_40b4b0(v288, v4); // 0x416d44
    v4 = *v171;
    int64_t v293 = v292 & 0xffffffff; // 0x416d53
    v3 = v293;
    v289 = v293;
    v290 = (int64_t)*v170;
    goto lab_0x416a0c;
  lab_0x416a0c:;
    int32_t v294 = v290;
    if (v294 == -1) {
        goto lab_0x416d25_5;
    }
    uint32_t v295 = (int32_t)v289; // 0x416a16
    if (v295 == -1) {
        goto lab_0x416d25_5;
    }
    // 0x416a20
    if (v294 > v295 == ((*v149 & 0x10000) != 0)) {
        goto lab_0x416e26_3;
    }
    int64_t v296 = v4; // 0x416a34
    int32_t v297 = v294; // 0x416a37
    int64_t * v172; // 0x415ac0
    int32_t * v173; // 0x415ac0
    int32_t * v174; // 0x415ac0
    int64_t * v175; // 0x415ac0
    int64_t * v176; // 0x415ac0
    if (v296 != 0) {
        int64_t v298 = *(int64_t *)(v296 + 64); // 0x416a39
        int64_t v299 = *(int64_t *)(v296 + 8); // 0x416a3d
        int32_t v300 = v294; // 0x416a46
        int64_t v301 = v298; // 0x416a46
        int64_t v302 = v299; // 0x416a46
        if (v298 == *v172) {
            // 0x416ea2
            *v173 = v295;
            *v174 = v294;
            *v171 = v4;
            int64_t v303 = 2 * v298 | 1; // 0x416ebc
            int64_t v304 = 4 * v303; // 0x416ec0
            *v172 = v303;
            *v175 = v304;
            *v176 = (int64_t)realloc((int64_t *)v299, (int32_t)v304);
            int64_t * mem4 = realloc((int64_t *)*(int64_t *)(*v171 + 16), (int32_t)*v175); // 0x416ef0
            int64_t v305 = *v176; // 0x416ef5
            if (v305 == 0) {
                // 0x416f3d
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x416f3d_3;
            }
            int64_t v306 = *v171; // 0x416f02
            v4 = v306;
            v300 = *v174;
            v3 = (int64_t)*v173;
            if (mem4 == NULL) {
                // 0x416f3d
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x416f3d_3;
            }
            // 0x416f13
            *(int64_t *)(v306 + 16) = (int64_t)mem4;
            v301 = *(int64_t *)(v4 + 64);
            *(int64_t *)(v4 + 8) = v305;
            v302 = v305;
        }
        int64_t v307 = 4 * v301; // 0x416a4c
        *(int32_t *)(v302 + v307) = v300;
        *(int64_t *)(v4 + 64) = v301 + 1;
        *(int32_t *)(*(int64_t *)(v4 + 16) + v307) = (int32_t)v3;
        v297 = v300;
    }
    int64_t v308 = 0;
    uint32_t v309 = (int32_t)v308; // 0x416a72
    int64_t v310; // 0x416a82
    int64_t * v311; // 0x416a89
    if (v297 <= v309) {
        // 0x416a77
        if ((int32_t)v3 >= v309) {
            // 0x416a7c
            v310 = v308 >> 6;
            v4 = v310;
            v311 = (int64_t *)(8 * v310 + v148);
            *v311 = *v311 | 1 << v308 % 64;
        }
    }
    int64_t v312 = v308 + 1; // 0x416a98
    while (v308 != 255) {
        // 0x416a70
        v308 = v312;
        v309 = (int32_t)v308;
        if (v297 <= v309) {
            // 0x416a77
            if ((int32_t)v3 >= v309) {
                // 0x416a7c
                v310 = v308 >> 6;
                v4 = v310;
                v311 = (int64_t *)(8 * v310 + v148);
                *v311 = *v311 | 1 << v308 % 64;
            }
        }
        // 0x416a8e
        v312 = v308 + 1;
    }
    // 0x416a9a
    *(int32_t *)*v177 = 0;
    int64_t v194; // 0x416958
    v255 = v194 & 0xffffffff;
    goto lab_0x4166df;
  lab_0x415b11:
    if ((a4 & 32) != 0) {
        // 0x415e35
        *(int64_t *)(v6 + 24) = 0;
        *(int32_t *)*(int64_t *)(v6 + 48) = 13;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    if ((a4 & 16) != 0) {
        // 0x416855
        v5 = a5;
        int64_t v313 = function_415350((int64_t *)v9, a1, a4); // 0x416865
        int64_t * v314 = (int64_t *)(a1 + 72); // 0x416877
        *v314 = (0x100000000 * v313 >> 32) + *v314;
        function_415ac0(a1, a2, v9, a4, v5, a6);
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x415b30;
  lab_0x415b30:
    // 0x415b30
    *(char *)(v9 + 8) = 1;
    if (function_40d500(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
        // 0x416451
        *(int32_t *)a6 = 12;
        // 0x415c38
        *(int64_t *)(v6 + 24) = 0;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x415b60;
  lab_0x4162f4:;
    int64_t v223 = &g2; // 0x416310
    int64_t v222 = (int64_t)"alnum"; // 0x416310
    bool v224 = v7 == 33; // 0x416310
    goto lab_0x416314;
  lab_0x416340:
    // 0x416340
    v223 = (int64_t)&g19;
    v222 = (int64_t)"space";
    v224 = v7 == 35;
    goto lab_0x416314;
  lab_0x415b60:
    // 0x415b60
    v58 = (int64_t *)(v6 + 8);
    int64_t v144 = function_415350((int64_t *)v9, a1, *v58); // 0x415b6b
    unsigned char v145 = *(char *)(v9 + 8); // 0x415b70
    int64_t * v146 = (int64_t *)(a1 + 72); // 0x415b78
    *v146 = *v146 + (0x100000000 * v144 >> 32);
    if (v145 >= 24) {
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    // 0x415c50
    v52 = (int64_t *)(v6 + 24);
    int64_t v147 = v6 + 32;
    v89 = (int64_t *)v147;
    v78 = (int128_t *)v147;
    v59 = (int64_t *)(v6 + 48);
    v110 = (int64_t *)(v6 + 16);
    v118 = (int64_t *)(v6 + 56);
    v114 = v6 + 192;
    v108 = (char *)(v6 + 200);
    v72 = v145;
    v73 = a1;
    v74 = v9;
    while (true) {
      lab_0x415c50:;
        unsigned char v75 = v72;
        if ((1 << (int64_t)(v75 % 64) & 0x8c0800) == 0) {
            // break -> 0x415b8a
            break;
        }
        // 0x415c66
        v53 = v74;
        v66 = v73;
        v60 = (int64_t *)(v66 + 72);
        v61 = *v60;
        v62 = (int128_t *)v53;
        int128_t v76 = __asm_movdqa(*v62); // 0x415c6a
        if (v75 == 23) {
            int64_t v77 = *v58; // 0x415fa0
            v4 = v77;
            *v78 = (int128_t)__asm_movaps(v76);
            int64_t v79 = function_415a00(v66, v53, v77); // 0x415fb0
            v80 = __asm_movdqa(*v78);
            v5 = v79;
            v56 = v80;
            switch (v79) {
                case -1: {
                    // 0x416030
                    if (*(char *)(v53 + 8) != 1) {
                        // 0x416140
                        *(int32_t *)*v59 = 10;
                        goto lab_0x41614b;
                    }
                    // 0x41603c
                    v81 = 0;
                    if (*(char *)v53 != 44) {
                        // 0x416140
                        *(int32_t *)*v59 = 10;
                        goto lab_0x41614b;
                    }
                    goto lab_0x416049;
                }
                case -2: {
                    goto lab_0x415fe2;
                }
                default: {
                    char * v82 = (char *)(v53 + 8);
                    v56 = v80;
                    v83 = v79;
                    v84 = v79;
                    switch (*v82) {
                        case 24: {
                            goto lab_0x416104;
                        }
                        case 1: {
                            // 0x416123
                            v81 = v79;
                            if (*(char *)v53 == 44) {
                                goto lab_0x416049;
                            } else {
                                // 0x41612e
                                v55 = v82;
                                v57 = v80;
                                if ((*v58 & 0x200000) == 0) {
                                    // 0x416140
                                    *(int32_t *)*v59 = 10;
                                    goto lab_0x41614b;
                                }
                                goto lab_0x415ff1;
                            }
                        }
                        default: {
                            goto lab_0x415fe2;
                        }
                    }
                }
            }
        } else {
            int64_t v85 = *v58;
            v4 = v85;
            int64_t v86 = function_415350((int64_t *)v53, v66, v85);
            *v60 = (0x100000000 * v86 >> 32) + *v60;
            int64_t v87 = *v52;
            if (v75 == 19) {
                if (v87 == 0) {
                    goto lab_0x416010;
                } else {
                    int64_t v88 = v75 == 18; // 0x415c59
                    v5 = 1;
                    *v89 = 0;
                    v90 = 10;
                    v91 = v88;
                    v92 = v87;
                    v93 = v53;
                    v94 = v66;
                    v95 = v88;
                    v96 = v87;
                    v97 = v53;
                    v98 = v66;
                    if (*(char *)(v87 + 48) == 17) {
                        goto lab_0x415f78;
                    } else {
                        goto lab_0x415cda;
                    }
                }
            } else {
                if (v87 == 0) {
                    goto lab_0x416010;
                } else {
                    if (v75 == 18) {
                        // 0x41618a
                        v5 = -1;
                        v4 = v87;
                        v99 = v87;
                        v100 = 1;
                        v101 = v53;
                        v102 = v87;
                        v103 = v66;
                        goto lab_0x41619f;
                    } else {
                        // 0x415cb3
                        v5 = -1;
                        if (*(char *)(v87 + 48) == 17) {
                            // 0x415f60
                            *v89 = 0;
                            v95 = 0;
                            v96 = *v52;
                            v97 = v53;
                            v98 = v66;
                            goto lab_0x415f78;
                        } else {
                            // 0x415cc2
                            *v89 = 0;
                            v90 = 11;
                            v91 = 0;
                            v92 = v87;
                            v93 = v53;
                            v94 = v66;
                            goto lab_0x415cda;
                        }
                    }
                }
            }
        }
    }
    // 0x415b8a
    return *(int64_t *)(v6 + 24);
  lab_0x416252:
    // 0x416252
    if (v17 == 21) {
        // 0x41683a
        *v20 = 1;
    }
    // 0x41625a
    v148 = v5;
    v149 = (int64_t *)(v6 + 8);
    int64_t v150 = v6 + 112; // 0x41628f
    v151 = v6 + 120;
    v152 = (int64_t *)v151;
    int64_t v153; // bp-120, 0x415ac0
    int64_t v154 = &v153;
    int32_t * v155 = (int32_t *)v150; // 0x416299
    v156 = (int64_t *)(a1 + 72);
    int64_t v157 = v6 + 144;
    int64_t v158 = v6 + 192;
    int64_t v159 = v6 + 128;
    v160 = (int32_t *)v159;
    v161 = v6 + 136;
    v162 = (int64_t *)v161;
    v163 = (int64_t *)(v6 + 16);
    int64_t v164 = v6 + 64;
    v165 = (char *)v164;
    bool v166; // 0x415ac0
    int64_t v167 = v166 ? -1 : 1;
    v168 = (int32_t *)v151;
    int64_t v169 = v6 + 72;
    v170 = (int32_t *)v169;
    v171 = (int64_t *)v164;
    v172 = (int64_t *)(v6 + 32);
    v173 = (int32_t *)(v6 + 92);
    v174 = (int32_t *)(v6 + 88);
    v175 = (int64_t *)(v6 + 80);
    v176 = (int64_t *)v169;
    v177 = (int64_t *)(v6 + 48);
    v178 = v18 + 72;
    v179 = (int64_t *)(v6 - 16);
    v180 = (int64_t *)(v6 + 104);
    v181 = (int64_t *)(v18 + 40);
    v182 = (int64_t *)(v6 + 24);
    v183 = v16 & 0xffffffff;
    v184 = 1;
    int32_t v185; // 0x415ac0
    while (true) {
      lab_0x41627e:
        // 0x41627e
        v3 = v184;
        int64_t v186 = *v149; // 0x41627e
        v3 = v184;
        *v152 = v154;
        *v155 = 3;
        int32_t v187 = function_415130(v150, a1, v9, v183, v186, (int32_t)v184);
        v185 = v187;
        if (v187 != 0) {
            // break -> 0x416894
            break;
        }
        // 0x4162ae
        g133 = v6 - 8;
        v188 = function_40ada0(v19, a1, *v149);
        if ((*v155 - 2 & -3) == 0) {
            goto lab_0x4162e4;
        } else {
            unsigned char v189 = *v20; // 0x4162cc
            v4 = v189;
            switch (v189) {
                case 2: {
                    goto lab_0x416845;
                }
                case 22: {
                    int64_t v190 = 0x100000000 * v188;
                    *v156 = *v156 + (v190 >> 32);
                    int64_t v191 = *v149; // 0x4168db
                    int64_t v192 = function_40ada0((int64_t *)v157, a1, v191); // 0x4168eb
                    unsigned char v193 = *(char *)(v6 + 152); // 0x4168f0
                    v4 = v193;
                    switch (v193) {
                        case 2: {
                            goto lab_0x416845;
                        }
                        case 21: {
                            // 0x416b05
                            *v156 = *v156 + (-v190 >> 32);
                            *v20 = 1;
                            goto lab_0x4162e4;
                        }
                        default: {
                            // 0x41690a
                            *v160 = 3;
                            *v162 = v158;
                            if ((int32_t)function_415130(v159, a1, v157, v192 & 0xffffffff, v191, 1) != 0) {
                                // break -> 0x416894
                                break;
                            }
                            // 0x41694d
                            v194 = function_40ada0(v19, a1, *v149);
                            v195 = *v155;
                            int32_t v196 = *(int32_t *)(*v163 + 180); // 0x41696e
                            v4 = v196 < 2 == (1 - v196 & v196) < 0 ? v18 : 0;
                            if ((v195 - 2 & -3) == 0) {
                                goto lab_0x416e26_3;
                            }
                            // 0x416986
                            v197 = *v160;
                            if ((v197 - 2 & -3) == 0) {
                                goto lab_0x416e26_3;
                            }
                            // 0x416999
                            *v165 = (char)(v195 == 3);
                            if (v195 == 3) {
                                int64_t v198 = *v152; // 0x416e6d
                                int64_t v199 = -1; // 0x416e7e
                                int64_t v200 = v198; // 0x416e7e
                                int64_t v201; // 0x415ac0
                                while (v199 != 0) {
                                    int64_t v202 = v200;
                                    v199--;
                                    v200 = v202 + v167;
                                    v201 = v199;
                                    if (*(char *)v202 == 0) {
                                        // break -> 
                                        break;
                                    }
                                }
                                if (-v201 >= 4) {
                                    goto lab_0x416d25_5;
                                }
                                // 0x416e90
                                v203 = v198;
                                if (v197 == 3) {
                                    // 0x416d01
                                    int64_t v204; // 0x415ac0
                                    while (v204 != 0) {
                                        int64_t v205; // 0x415ac0
                                        int64_t v206 = v205;
                                        char v207 = *(char *)v206; // 0x416d0f
                                        int64_t v208; // 0x415ac0
                                        int64_t v209 = v208 - 1; // 0x416d0f
                                        v204 = v209;
                                        v205 = v206 + v167;
                                        int64_t v210 = v209; // 0x416d0f
                                        if (v207 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v208 = v204;
                                        v210 = 0;
                                    }
                                    v203 = v198;
                                }
                                goto lab_0x4169bf;
                            } else {
                                if (v197 == 3) {
                                    int64_t v211 = *v162; // 0x416e36
                                    v3 = v211;
                                    int64_t v212 = v211; // 0x416e47
                                    int64_t v213 = -1; // 0x416e47
                                    int64_t v214 = 0; // 0x416e47
                                    while (v213 != 0) {
                                        int64_t v215 = v212;
                                        v213--;
                                        v212 = v215 + v167;
                                        v214 = v213;
                                        if (*(char *)v215 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v214 = 0;
                                    }
                                    if (-v214 >= 4) {
                                        goto lab_0x416d25_5;
                                    }
                                    // 0x416e5d
                                    v203 = v151;
                                    v216 = v211;
                                    v217 = 0;
                                    if (v195 != 0) {
                                        goto lab_0x4169d6;
                                    } else {
                                        goto lab_0x4169bf;
                                    }
                                } else {
                                    // 0x4169b1
                                    v203 = v151;
                                    if (v195 != 0) {
                                        // 0x416e0d
                                        v218 = 0;
                                        v219 = 0;
                                        v220 = 0;
                                        if (v197 != 0) {
                                            goto lab_0x4169da;
                                        } else {
                                            goto lab_0x416e19;
                                        }
                                    } else {
                                        goto lab_0x4169bf;
                                    }
                                }
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x4162e4;
                }
            }
        }
    }
    // 0x416894
    *(int32_t *)*v177 = v185;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x416314:;
    int64_t v221 = *(int64_t *)(a1 + 120);
    v4 = v222;
    v3 = a6;
    if (!(((int32_t)a6 == 0 | function_4108f0(a2, v221, (char *)v222, (int64_t *)v223, (int64_t)v224, a6) != 0))) {
        // 0x415c38
        *(int64_t *)(v6 + 24) = 0;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x415b60;
  lab_0x4167c9:;
    // 0x4167c9
    int64_t v225; // 0x416575
    int64_t v226; // 0x416579
    if (function_40d500(v225, v226, 0, 0, v9) == 0) {
        // 0x416451
        *(int32_t *)a6 = 12;
        // 0x415c38
        *(int64_t *)(v6 + 24) = 0;
        // 0x415b8a
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x41661f;
  lab_0x416d65:;
    int16_t * v250 = *__ctype_b_loc(); // 0x416d79
    v3 = (v13 | 256) - 64 * v15;
    int64_t v251 = v13; // 0x416d8f
    int64_t v252 = 8 * v15 + a2; // 0x416d8f
    int64_t v141 = 2 * v13 + (int64_t)v250; // 0x416d8f
    while (true) {
        int64_t v143 = v251;
        v139 = (int64_t *)(v252 + 184);
        v140 = 0;
        while (true) {
          lab_0x416db2:
            // 0x416db2
            v137 = v140;
            if ((*(char *)(2 * v137 + v141) & 8) == 0) {
                int64_t v142 = v137 + v143; // 0x416da0
                v4 = v142 & 0xffffffff;
                if ((int32_t)v142 == 95) {
                    goto lab_0x416dba;
                } else {
                    goto lab_0x416da8;
                }
            } else {
                goto lab_0x416dba;
            }
        }
      lab_0x416dc9:;
        int64_t v253 = v143 + 64; // 0x416dc9
        v12 = v10;
        v251 = v253 & 0xffffffff;
        v252 += 8;
        v141 += 128;
        if ((int32_t)v3 == (int32_t)v253) {
            // break -> 0x416570
            break;
        }
    }
    goto lab_0x416570_2;
  lab_0x41661f:;
    int64_t v227 = function_415350((int64_t *)v9, a1, a4); // 0x41662a
    int64_t * v228 = (int64_t *)(a1 + 72); // 0x416631
    *v228 = (0x100000000 * v227 >> 32) + *v228;
    // 0x415b8a
    return *(int64_t *)(v6 + 24);
  lab_0x416570_2:;
    int32_t v229 = v12;
    v225 = a2 + 112;
    v226 = a2 + 128;
    if ((v229 - 256 & -257) != 0) {
        goto lab_0x4167c9;
    } else {
        int32_t * v230 = (int32_t *)v9;
        int64_t v231; // 0x415ac0
        if (v229 == 256) {
            // 0x4168aa
            *v230 = 6;
            v4 = 0;
            v231 = function_40d500(v225, v226, 0, 0, v9);
        } else {
            // 0x41659f
            *v230 = 5;
            v4 = 0;
            v231 = function_40d500(v225, v226, 0, 0, v9);
        }
        // 0x4165c4
        *v230 = 10;
        int64_t v232 = function_40d500(v225, v226, 0, 0, v9); // 0x4165d1
        int64_t v233 = function_40d500(v225, v226, (int32_t)v231, (int32_t)v232, (int64_t)&v14); // 0x4165f5
        if (v233 == 0 || v231 == 0 || v232 == 0) {
            // 0x416451
            *(int32_t *)a6 = 12;
            // 0x415c38
            *(int64_t *)(v6 + 24) = 0;
            // 0x415b8a
            return *(int64_t *)(v6 + 24);
        }
        goto lab_0x41661f;
    }
  lab_0x416f3d_3:
    // 0x416f3d
    *v182 = v234;
    free((int64_t *)v235);
    free((int64_t *)*v182);
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x41677b_3;
  lab_0x416c2e:;
    int64_t v236 = *v163; // 0x416c2e
    char * v237 = (char *)(v236 + 176); // 0x416c3a
    *v237 = *v237 | 2;
    int64_t v238 = v236 + 112; // 0x416c41
    int64_t v239 = v236 + 128; // 0x416c45
    char * v240 = (char *)(v6 + 168); // 0x416c52
    *v240 = 6;
    int64_t * v241 = (int64_t *)(v6 + 160); // 0x416c5a
    *v241 = v18;
    int64_t v242 = function_40d500(v238, v239, 0, 0, v154); // 0x416c62
    *v182 = v242;
    int64_t v243 = v5 + 32; // 0x416c73
    v4 = v243;
    int64_t v244 = v5; // 0x416c7d
    if (v242 == 0) {
        goto lab_0x416c1e;
    } else {
        while (*(int64_t *)v244 == 0) {
            int64_t v245 = v244 + 8; // 0x416c85
            v244 = v245;
            if (v243 == v245) {
                // 0x416c8e
                free((int64_t *)v5);
                goto lab_0x415b60;
            }
        }
        // 0x416c9c
        *v240 = 3;
        *v241 = v5;
        int64_t v246 = function_40d500(v238, v239, 0, 0, v154); // 0x416cbd
        if (v246 == 0) {
            goto lab_0x416c1e;
        } else {
            // 0x416ccb
            *(char *)(v6 + 200) = 10;
            int64_t v247 = function_40d500(v238, v239, (int32_t)v246, (int32_t)*v182, v158); // 0x416ce9
            *v182 = v247;
            if (v247 != 0) {
                goto lab_0x415b60;
            } else {
                goto lab_0x416c1e;
            }
        }
    }
  lab_0x416bd8:
    // 0x416bd8
    function_40bef0(v18);
    *(char *)(v6 + 168) = 3;
    *(int64_t *)(v6 + 160) = v5;
    int64_t v248 = *v163; // 0x416bfb
    int64_t v249 = function_40d500(v248 + 112, v248 + 128, 0, 0, v154); // 0x416c0b
    *v182 = v249;
    if (v249 != 0) {
        goto lab_0x415b60;
    } else {
        goto lab_0x416c1e;
    }
}
// Address range: 0x416fb0 - 0x4170ee
int64_t function_416fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_415ac0(a1, a2, a3, a4, a5, a6); // 0x416fda
    int64_t v1; // 0x416fb0
    if ((int32_t)v1 != 0 == result == 0) {
        // 0x417085
        return 0;
    }
    char * v2 = (char *)(a3 + 8); // 0x416ff8
    char v3 = *v2; // 0x416ff8
    if ((v3 & -9) == 2) {
        // 0x417085
        return result;
    }
    // 0x417006
    int64_t v4; // bp-72, 0x416fb0
    int64_t v5 = &v4;
    int64_t v6 = result;
    int64_t result2 = v6; // 0x417008
    if (a5 != 0 == v3 == 9) {
        return result2;
    }
    int64_t v7 = function_415ac0(a1, a2, a3, a4, a5, a6); // 0x417023
    int32_t v8 = v7;
    if (v7 == 0 == (v8 != 0)) {
        // 0x4170ac
        result2 = 0;
        if (v6 == 0) {
            return result2;
        } else {
            // 0x4170b1
            function_40ad30(v6, 0x40bf40, 0);
            result2 = 0;
            return result2;
        }
    }
    int64_t v9; // 0x417065
    char v10; // 0x417077
    while (v6 != 0 && v7 != 0) {
        // 0x417040
        v9 = function_40d500(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
        if (v9 == 0) {
            // 0x4170c5
            function_40ad30(v7, 0x40bf40, 0);
            function_40ad30(v6, 0x40bf40, 0);
            *(int32_t *)a6 = 12;
            result2 = 0;
            return result2;
        }
        // 0x417074
        v10 = *v2;
        result2 = v9;
        if ((v10 & -9) == 2) {
            return result2;
        }
        v6 = v9;
        result2 = v6;
        if (a5 != 0 == v10 == 9) {
            return result2;
        }
        // 0x41700f
        v7 = function_415ac0(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x4170ac
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x4170b1
                function_40ad30(v6, 0x40bf40, 0);
                result2 = 0;
                return result2;
            }
        }
    }
    int64_t v11 = v6 == 0 ? v7 : v6; // 0x4170a3
    char v12 = *v2; // 0x416ff8
    result2 = v11;
    while ((v12 & -9) != 2) {
        // 0x417006
        v6 = v11;
        result2 = v6;
        if (a5 != 0 == v12 == 9) {
            return result2;
        }
        // 0x41700f
        v7 = function_415ac0(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x4170ac
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x4170b1
                function_40ad30(v6, 0x40bf40, 0);
                result2 = 0;
                return result2;
            }
        }
        while (v6 != 0 && v7 != 0) {
            // 0x417040
            v9 = function_40d500(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
            if (v9 == 0) {
                // 0x4170c5
                function_40ad30(v7, 0x40bf40, 0);
                function_40ad30(v6, 0x40bf40, 0);
                *(int32_t *)a6 = 12;
                result2 = 0;
                return result2;
            }
            // 0x417074
            v10 = *v2;
            result2 = v9;
            if ((v10 & -9) == 2) {
                return result2;
            }
            v6 = v9;
            result2 = v6;
            if (a5 != 0 == v10 == 9) {
                return result2;
            }
            // 0x41700f
            v7 = function_415ac0(a1, a2, a3, a4, a5, a6);
            v8 = v7;
            if (v7 == 0 == (v8 != 0)) {
                // 0x4170ac
                result2 = 0;
                if (v6 == 0) {
                    return result2;
                } else {
                    // 0x4170b1
                    function_40ad30(v6, 0x40bf40, 0);
                    result2 = 0;
                    return result2;
                }
            }
        }
        // 0x4170a0
        v11 = v6 == 0 ? v7 : v6;
        v12 = *v2;
        result2 = v11;
    }
  lab_0x417085_2:
    // 0x417085
    return result2;
}
// Address range: 0x4170f0 - 0x417241
int64_t function_4170f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 + 168); // 0x417112
    int64_t v2 = function_416fb0(a1, a2, a3, a4, a5, a6); // 0x417122
    int64_t v3; // 0x4170f0
    if ((int32_t)v3 != 0 && v2 == 0) {
        // 0x417141
        return 0;
    }
    char * v4 = (char *)(a3 + 8); // 0x4171d9
    int64_t * v5 = (int64_t *)(a1 + 72);
    int64_t v6 = a2 + 112;
    int64_t v7; // bp-72, 0x4170f0
    int64_t v8 = &v7;
    int64_t v9 = v2;
    int64_t result = v9; // 0x4171dd
    while (*v4 == 10) {
        // 0x4171e3
        *v5 = (0x100000000 * function_415350((int64_t *)a3, a1, a4 | 0x800000) >> 32) + *v5;
        char v10 = *v4; // 0x4171ff
        int64_t v11 = 0; // 0x41720b
        if ((v10 & -9) != 2 && a5 != 0 != (v10 == 9)) {
            // 0x417167
            v11 = function_416fb0(a1, a2, a3, a4, a5, a6);
            int64_t v12; // 0x4170f0
            if (v11 == 0 == (*(int32_t *)&v12 != 0)) {
                // 0x417224
                result = 0;
                if (v9 == 0) {
                    return result;
                } else {
                    // 0x41722d
                    function_40ad30(v9, 0x40bf40, 0);
                    result = 0;
                    return result;
                }
            }
        }
        int64_t v13 = function_40d500(v6, a2 + 128, (int32_t)v9, (int32_t)v11, v8); // 0x4171cc
        if (v13 == 0) {
            // 0x417218
            *(int32_t *)a6 = 12;
            result = 0;
            return result;
        }
        v9 = v13;
        result = v9;
    }
  lab_0x417141:
    // 0x417141
    return result;
}
// Address range: 0x417250 - 0x417ffa
int64_t function_417250(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x417250
    int128_t v1; // 0x417250
    int128_t v2 = v1;
    int64_t v3; // 0x417250
    int64_t v4 = v3;
    char * v5 = (char *)(a1 + 56); // 0x41726d
    *v5 = *v5 & -112;
    int64_t v6 = a1 + 8;
    int64_t * v7 = (int64_t *)v6; // 0x417271
    int32_t result = 0; // bp-268, 0x417279
    *(int64_t *)(a1 + 24) = a4;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x417288
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 48); // 0x417290
    *v9 = 0;
    int64_t v10 = v6; // 0x417298
    int64_t v11 = a1; // 0x417298
    if (*v7 < 232) {
        int64_t * v12 = (int64_t *)a1; // 0x417dd8
        int64_t * mem = realloc(v12, 232); // 0x417dd8
        if (mem == NULL) {
            // 0x417b9b
            return 12;
        }
        // 0x417de9
        v11 = (int64_t)mem;
        *v7 = 232;
        *v12 = v11;
        v10 = v11 + 8;
    }
    // 0x41729e
    *v8 = 232;
    int64_t v13 = v10 & -8; // 0x4172af
    int64_t * v14 = (int64_t *)v11; // 0x4172b3
    *v14 = 0;
    *(int64_t *)(v11 + 224) = 0;
    __asm_rep_stosq_memset((char *)v13, 0, (v11 + 232 - v13) / 8 % 0x20000000);
    *(int32_t *)(v11 + 128) = 15;
    int64_t v15; // 0x417250
    int64_t v16; // 0x417250
    uint64_t v17; // 0x417250
    int64_t v18; // 0x417250
    int64_t v19; // 0x417250
    int64_t v20; // 0x4172f1
    int64_t * v21; // 0x41733d
    int32_t * v22; // 0x41734b
    char * v23; // 0x4173a8
    if (a3 < 0x555555555555555) {
        // 0x4172f1
        v20 = a3 + 1;
        *(int64_t *)v10 = v20;
        *v14 = (int64_t)malloc(16 * (int32_t)v20);
        int64_t size = 1; // 0x417311
        int64_t v24 = 0; // 0x417311
        if (a3 != 0) {
            int64_t v25 = 2; // 0x417320
            int64_t v26 = v25; // 0x417326
            while (v25 <= a3) {
                // 0x417320
                v25 = 2 * v26;
                v26 = v25;
            }
            // 0x417328
            size = v25;
            v24 = v25 - 1;
        }
        int64_t * mem2 = calloc(24, (int32_t)size); // 0x417331
        *(int64_t *)(v11 + 136) = v24;
        v21 = (int64_t *)(v11 + 64);
        *v21 = (int64_t)mem2;
        int32_t v27 = __ctype_get_mb_cur_max(); // 0x417341
        v22 = (int32_t *)(v11 + 180);
        *v22 = v27;
        char * v28 = nl_langinfo(14); // 0x417351
        if ((*v28 & -33) == 85) {
            int64_t v29 = (int64_t)v28; // 0x417351
            if ((*(char *)(v29 + 1) & -33) == 84) {
                // 0x41736d
                if ((*(char *)(v29 + 2) & -33) == 70) {
                    int64_t v30 = v29 + 3; // 0x41737b
                    bool v31; // 0x417250
                    int64_t v32 = v31 ? -1 : 1; // 0x417391
                    int64_t v33 = (int64_t)&g13; // 0x417250
                    int64_t v34 = v30 + (int64_t)(*(char *)v30 == 45); // 0x417250
                    int64_t v35 = 2; // 0x417391
                    unsigned char v36 = *(char *)v34; // 0x417391
                    char v37 = *(char *)v33; // 0x417391
                    char v38 = v37; // 0x417391
                    bool v39 = false; // 0x417391
                    while (v36 == v37) {
                        v35--;
                        v33 += v32;
                        v34 += v32;
                        v38 = v36;
                        v39 = true;
                        if (v35 == 0) {
                            // break -> 
                            break;
                        }
                        v36 = *(char *)v34;
                        v37 = *(char *)v33;
                        v38 = v37;
                        v39 = false;
                    }
                    unsigned char v40 = v38;
                    if ((v36 >= v40 && !v39) == v36 < v40) {
                        char * v41 = (char *)(v11 + 176); // 0x41739c
                        *v41 = *v41 | 4;
                    }
                }
            }
        }
        // 0x4173a8
        v23 = (char *)(v11 + 176);
        char v42 = *v23; // 0x4173a8
        *v23 = v42 & -9;
        if (*v22 < 2) {
            goto lab_0x4173d3;
        } else {
            if ((v42 & 4) == 0) {
                int64_t * mem3 = calloc(32, 1); // 0x417c4a
                int64_t * v43 = (int64_t *)(v11 + 120); // 0x417c4f
                *v43 = (int64_t)mem3;
                int64_t v44 = 0; // 0x417c56
                if (mem3 == NULL) {
                    // 0x417c30
                    result = 12;
                    goto lab_0x417c0e;
                } else {
                    while (true) {
                        int64_t v45 = v44;
                        v16 = 0;
                        v18 = 8 * v45;
                        while (true) {
                          lab_0x417c86_2:
                            // 0x417c86
                            v19 = v18;
                            v17 = v16;
                            int32_t wc = v19; // 0x417c86
                            int32_t v46 = btowc(wc); // 0x417c8f
                            int64_t v47 = v19 & 0xffffff80; // 0x417c9d
                            if (v46 == -1) {
                                if (v47 != 0) {
                                    goto lab_0x417c7b;
                                } else {
                                    // 0x417c74
                                    *v23 = *v23 | 8;
                                    goto lab_0x417c7b;
                                }
                            } else {
                                int64_t * v48 = (int64_t *)(*v43 + v45); // 0x417cb5
                                *v48 = *v48 | 1 << v17 % 64;
                                if (v47 != 0) {
                                    goto lab_0x417c7b;
                                } else {
                                    if (v46 != wc) {
                                        // 0x417c74
                                        *v23 = *v23 | 8;
                                        goto lab_0x417c7b;
                                    } else {
                                        int64_t v49 = v17 + 1; // 0x417cc0
                                        v15 = v49;
                                        if ((int32_t)v49 == 64) {
                                            // break -> 0x417cd0
                                            break;
                                        }
                                        goto lab_0x417c86;
                                    }
                                }
                            }
                        }
                      lab_0x417cd0:
                        // 0x417cd0
                        v44 = v45 + 8;
                        if (v45 == 24) {
                            // break -> 0x4173d3
                            break;
                        }
                    }
                    goto lab_0x4173d3;
                }
            } else {
                // 0x4173cb
                *(int64_t *)(v11 + 120) = (int64_t)&g20;
                goto lab_0x4173d3;
            }
        }
    } else {
        // 0x417c30
        result = 12;
        goto lab_0x417c0e;
    }
  lab_0x417c7b:;
    int64_t v50 = v17 + 1; // 0x417c7b
    v15 = v50;
    if ((int32_t)v50 == 64) {
        // break -> 0x417cd0
        goto lab_0x417cd0;
    }
    goto lab_0x417c86;
  lab_0x417c86:
    // 0x417c86
    v16 = v15 & 0xffffffff;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x417c86_2;
  lab_0x417e90_2:
    // 0x417e90
    result = 0;
    int64_t v51; // 0x417250
    int64_t v52 = v51; // 0x417e98
    int64_t v53 = v51; // 0x417e98
    goto lab_0x417599;
  lab_0x417780:;
    // 0x417780
    int64_t * v83; // 0x417250
    int64_t v91 = *v83; // 0x417780
    int64_t v92 = function_40ad30(v91, 0x40d8b0, (int32_t)a1); // 0x41778c
    int64_t v93 = v92; // 0x417793
    int64_t v94 = v91; // 0x417793
    int64_t v95; // 0x417250
    int64_t v73; // 0x417250
    int64_t v96; // bp-232, 0x417250
    int64_t v68; // bp-248, 0x417250
    int64_t * v80; // 0x4176d7
    int64_t * v97; // 0x417250
    if ((int32_t)v92 != 0) {
        goto lab_0x4179a8_2;
    } else {
        int64_t v98 = *v83; // 0x417799
        int64_t v99 = function_40ad30(v98, 0x40fde0, (int32_t)v73); // 0x4177a5
        v93 = v99;
        v94 = v98;
        if ((int32_t)v99 != 0) {
            goto lab_0x4179a8_2;
        } else {
            // 0x4177b2
            function_40cd70(*v83, 0x40cac0, v73);
            int64_t v100 = *v83; // 0x4177c3
            int64_t v101 = function_40cd70(v100, 0x40c5c0, v73); // 0x4177cf
            v93 = v101;
            v94 = v100;
            if ((int32_t)v101 != 0) {
                goto lab_0x4179a8_2;
            } else {
                // 0x4177e8
                v97 = (int64_t *)(v73 + 16);
                int64_t v102 = 0; // 0x417250
                int64_t v103 = 0; // 0x417250
                int64_t v104; // 0x417250
                while (true) {
                    int64_t v105 = *v97; // 0x4177e8
                    int64_t v106 = v105; // 0x4177ec
                    int64_t v107 = v102; // 0x4177ec
                    int64_t v108 = v103; // 0x4177ec
                    int64_t v109 = v103; // 0x4177ec
                    int64_t v110 = v102; // 0x4177ec
                    v104 = v103;
                    int64_t v111; // 0x417250
                    if (v105 == v103) {
                      lab_0x41780c:
                        // 0x41780c
                        v111 = v109;
                        if ((char)v110 == 0) {
                            // break -> 0x4178a0
                            break;
                        }
                      lab_0x417815:
                        // 0x417815
                        v106 = v111;
                        v107 = 0;
                        v108 = 0;
                    }
                    int64_t v112 = v107;
                    int64_t v113 = v106; // 0x417806
                    int64_t v114 = v108;
                    int64_t v115; // 0x417802
                    while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                        // 0x417802
                        v115 = v114 + 1;
                        v109 = v113;
                        v110 = v112;
                        v104 = v115;
                        if (v113 == v115) {
                            goto lab_0x41780c;
                        }
                        v114 = v115;
                    }
                    int64_t v116 = function_40cfa0((int128_t *)&v68, v73, v114, 1); // 0x417833
                    if ((int32_t)v116 != 0) {
                        // 0x4179a8
                        v93 = v116;
                        v94 = &v68;
                        goto lab_0x4179a8_2;
                    }
                    int64_t v117 = v114 + 1; // 0x417849
                    v102 = v112;
                    v103 = v117;
                    while (*(int64_t *)((0x1800000000 * v114 >> 32) + 8 + *v80) == 0) {
                        // 0x417855
                        free((int64_t *)v96);
                        int64_t v118 = *v97; // 0x417865
                        v111 = v118;
                        if (v118 == v117) {
                            goto lab_0x417815;
                        }
                        v112 = 1;
                        v113 = v118;
                        v114 = v117;
                        while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                            // 0x417802
                            v115 = v114 + 1;
                            v109 = v113;
                            v110 = v112;
                            v104 = v115;
                            if (v113 == v115) {
                                goto lab_0x41780c;
                            }
                            v114 = v115;
                        }
                        // 0x417820
                        v116 = function_40cfa0((int128_t *)&v68, v73, v114, 1);
                        if ((int32_t)v116 != 0) {
                            // 0x4179a8
                            v93 = v116;
                            v94 = &v68;
                            goto lab_0x4179a8_2;
                        }
                        // 0x417840
                        v117 = v114 + 1;
                        v102 = v112;
                        v103 = v117;
                    }
                }
                // 0x4178a0
                v95 = v104;
                if ((*v5 & 16) != 0) {
                    goto lab_0x4179b8;
                } else {
                    // 0x4178aa
                    if (*v9 == 0) {
                        goto lab_0x4179b8;
                    } else {
                        // 0x4178b5
                        if (*(char *)(v73 + 176) % 2 == 0) {
                            goto lab_0x4179b8;
                        } else {
                            goto lab_0x4178c3;
                        }
                    }
                }
            }
        }
    }
  lab_0x4179a8_2:
    // 0x4179a8
    result = v93;
    int64_t v67 = v94; // 0x4179b0
    goto lab_0x417bb8;
  lab_0x417a48:;
    // 0x417a48
    int64_t v140; // 0x417250
    int64_t v141 = v140 + 1; // 0x417a48
    uint64_t v78; // 0x417250
    if (v78 <= v141) {
        // break -> 0x417af0
        goto lab_0x417af0;
    }
    int64_t v142 = v141; // 0x417250
    goto lab_0x417a55_2;
  lab_0x4173d3:;
    // 0x4173d3
    int64_t v129; // bp-208, 0x417250
    int64_t v124; // bp-216, 0x417250
    int64_t * v158; // 0x4173f4
    int64_t v128; // 0x4173f4
    if (*v14 == 0) {
        // 0x417c30
        result = 12;
        goto lab_0x417c0e;
    } else {
        // 0x4173dd
        if (*v21 == 0) {
            // 0x417c30
            result = 12;
            goto lab_0x417c0e;
        } else {
            // 0x4173e8
            v158 = (int64_t *)(a1 + 40);
            v128 = *v158;
            result = 0;
            __asm_rep_stosq_memset((char *)&v129, 0, 18);
            v124 = a2;
            if (a3 != 0) {
                int64_t v159 = &v124; // 0x417875
                int64_t v160 = function_40b170(v159, v20); // 0x41787a
                v93 = v160;
                v94 = v159;
                if ((int32_t)v160 != 0) {
                    goto lab_0x4179a8_2;
                } else {
                    // 0x417887
                    goto lab_0x417492;
                }
            } else {
                goto lab_0x417492;
            }
        }
    }
  lab_0x417c0e:
    // 0x417c0e
    function_40fe70(v11);
    *(int64_t *)a1 = 0;
    *v7 = 0;
    // 0x417b9b
    return result;
  lab_0x417492:;
    int64_t v125 = a4 & 0x400000; // 0x417417
    int32_t v126 = *v22;
    int64_t v127 = (v128 | v125) == 0 ? a2 : v129;
    v129 = v127;
    if (v125 == 0) {
        if (v126 > 1) {
            int64_t v130 = &v124;
            function_40b560(v130);
            result = 0;
            v52 = v130;
            v53 = v130;
        } else {
            if ((v128 || v125) != 0) {
                int64_t v131 = a3 - v4; // 0x417526
                int64_t v132 = v131 == 0 | v131 < 0 != ((v131 ^ a3) & (v4 ^ a3)) < 0 ? a3 : v4; // 0x417536
                if (v132 > v3) {
                    unsigned char v133 = *(char *)(2 * v3 + v124); // 0x41756d
                    *(char *)(v127 + v3) = *(char *)(v128 + (int64_t)v133);
                    int64_t v134 = v3 + 1; // 0x417578
                    int64_t v135 = v134; // 0x41757f
                    if (v132 != v134) {
                        unsigned char v136 = *(char *)(v135 + v3 + v124); // 0x41756d
                        *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                        int64_t v137 = v135 + 1; // 0x417578
                        v135 = v137;
                        while (v132 != v137) {
                            // 0x417550
                            v136 = *(char *)(v135 + v3 + v124);
                            *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                            v137 = v135 + 1;
                            v135 = v137;
                        }
                    }
                }
            }
            // 0x417581
            result = 0;
            v52 = &v124;
            v53 = v126;
        }
        goto lab_0x417599;
    } else {
        // 0x4174a8
        v51 = &v124;
        if (v126 < 2) {
            // 0x417db8
            function_40b4e0(v51);
            result = 0;
            v52 = v51;
            v53 = v51;
            goto lab_0x417599;
        } else {
            int64_t v138 = function_40b710(v51); // 0x4174b6
            v93 = v138;
            v94 = v51;
            // 0x4174b1
            while ((int32_t)v138 == 0) {
                if (v3 >= a3) {
                    goto lab_0x417e90_2;
                }
                // 0x4174d1
                if (v4 > v3 + (int64_t)*v22) {
                    goto lab_0x417e90_2;
                }
                int64_t v139 = function_40b170(v51, 2 * v4); // 0x4174f9
                v93 = v139;
                v94 = v51;
                if ((int32_t)v139 != 0) {
                    // break -> 0x4179a8
                    break;
                }
                v138 = function_40b710(v51);
                v93 = v138;
                v94 = v51;
            }
            goto lab_0x4179a8_2;
        }
    }
  lab_0x417bb8:;
    int64_t * v119 = (int64_t *)(v67 + 112); // 0x417bb8
    int64_t v120 = *v119; // 0x417bb8
    if (v120 != 0) {
        int64_t * v121 = (int64_t *)v120; // 0x417bc8
        int64_t v122 = *v121; // 0x417bc8
        free(v121);
        while (v122 != 0) {
            // 0x417bc8
            v121 = (int64_t *)v122;
            v122 = *v121;
            free(v121);
        }
    }
    // 0x417bd8
    *v119 = 0;
    int64_t * v123 = (int64_t *)(v67 + 32); // 0x417be0
    *(int32_t *)(v67 + 128) = 15;
    *(int64_t *)(v67 + 104) = 0;
    free((int64_t *)*v123);
    *v123 = 0;
    function_40c4c0(&v124);
    goto lab_0x417c0e;
  lab_0x417599:;
    int64_t v54 = v53;
    int64_t v55 = v52;
    *v9 = 0;
    *(int64_t *)(v54 + 216) = a4;
    int32_t v56; // bp-264, 0x417250
    function_415350((int64_t *)&v56, v55, a4 | 0x800000);
    int64_t v57 = &v56; // 0x4175d1
    int64_t v58 = function_4170f0(v55, a1, v57, a4, 0, (int64_t)&result); // 0x4175e8
    int64_t v59; // 0x417250
    int64_t v60; // 0x417250
    int64_t v61; // 0x417250
    int64_t v62; // 0x417250
    int64_t v63; // 0x417e39
    int64_t v64; // 0x417e47
    int64_t v65; // 0x417250
    int64_t v66; // 0x417e62
    if (result != 0) {
        if (v58 == 0) {
            // 0x417fb2
            *(int64_t *)(v11 + 104) = 0;
            v67 = v55;
            goto lab_0x417bb8;
        } else {
            // 0x417e39
            v63 = v54 + 112;
            v64 = v54 + 128;
            v65 = &v68;
            v66 = function_40d500(v63, v64, 0, 0, v65);
            goto lab_0x417637;
        }
    } else {
        int64_t v69 = v54 + 112; // 0x4175f9
        int64_t v70 = v54 + 128; // 0x417607
        int64_t v71 = &v68;
        int64_t v72 = function_40d500(v69, v70, 0, 0, v71); // 0x417622
        v65 = v71;
        v64 = v70;
        v66 = v72;
        v63 = v69;
        v62 = 2;
        v61 = v72;
        v60 = v69;
        v59 = v72;
        if (v58 == 0) {
            goto lab_0x417656;
        } else {
            goto lab_0x417637;
        }
    }
  lab_0x417656:
    // 0x417656
    v73 = v60;
    int64_t * v74; // 0x417250
    int64_t * v75; // 0x417672
    int64_t * v76; // 0x41770d
    int64_t * v77; // 0x417250
    if (v61 == 0 || v59 == 0) {
        // 0x417e78
        result = 12;
        *(int64_t *)(v11 + 104) = 0;
        v67 = v73;
        goto lab_0x417bb8;
    } else {
        // 0x41766e
        v78 = v62;
        v75 = (int64_t *)(v11 + 104);
        *v75 = v59;
        int32_t v79 = (int32_t)*(int64_t *)(v73 + 8);
        int32_t size2 = 8 * v79; // 0x41768f
        int64_t * mem4 = malloc(size2); // 0x41768f
        *(int64_t *)(v73 + 24) = (int64_t)mem4;
        int64_t * mem5 = malloc(size2); // 0x4176a3
        *(int64_t *)(v73 + 32) = (int64_t)mem5;
        int32_t size3 = 24 * v79; // 0x4176b4
        int64_t * mem6 = malloc(size3); // 0x4176b4
        *(int64_t *)(v73 + 40) = (int64_t)mem6;
        int64_t * mem7 = malloc(size3); // 0x4176c5
        v80 = (int64_t *)(v73 + 48);
        *v80 = (int64_t)mem7;
        if (mem4 == NULL | mem5 == NULL || mem6 == NULL || mem7 == NULL) {
            // 0x417bb0
            result = 12;
            v67 = v73;
            goto lab_0x417bb8;
        } else {
            int64_t v81 = *v9; // 0x4176fc
            int64_t * mem8 = malloc(8 * (int32_t)v81); // 0x417708
            int64_t v82 = (int64_t)mem8; // 0x417708
            v76 = (int64_t *)(v73 + 224);
            *v76 = v82;
            if (mem8 == NULL) {
                // 0x4176fc
                v83 = (int64_t *)(v73 + 104);
                goto lab_0x417780;
            } else {
                // 0x417719
                if (v81 != 0) {
                    int64_t v84 = 0;
                    *(int64_t *)(8 * v84 + v82) = v84;
                    int64_t v85 = v84 + 1; // 0x417724
                    while (v85 != v81) {
                        // 0x417720
                        v84 = v85;
                        *(int64_t *)(8 * v84 + v82) = v84;
                        v85 = v84 + 1;
                    }
                }
                // 0x41772d
                v77 = (int64_t *)(v73 + 104);
                function_40cd70(*v77, 0x40ca30, v73);
                int64_t v86 = *v9; // 0x41773e
                int64_t v87 = *v76;
                v74 = (int64_t *)v87;
                if (v86 == 0) {
                    goto lab_0x41776f;
                } else {
                    // 0x41774b
                    v83 = v77;
                    if (*v74 == 0) {
                        int64_t v88 = 1; // 0x417766
                        while (v88 != v86) {
                            int64_t v89 = v88; // 0x417764
                            v83 = v77;
                            if (*(int64_t *)(8 * v88 + v87) != v88) {
                                goto lab_0x417780;
                            }
                            v88 = v89 + 1;
                        }
                        goto lab_0x41776f;
                    } else {
                        goto lab_0x417780;
                    }
                }
            }
        }
    }
  lab_0x417637:;
    int64_t v90 = function_40d500(v63, v64, (int32_t)v58, (int32_t)v66, v65); // 0x41764b
    v62 = 16;
    v61 = v66;
    v60 = v63;
    v59 = v90;
    goto lab_0x417656;
  lab_0x41776f:
    // 0x41776f
    free(v74);
    *v76 = 0;
    v83 = v77;
    goto lab_0x417780;
  lab_0x4179b8:
    // 0x4179b8
    if (*(int64_t *)(v73 + 152) != 0) {
        goto lab_0x4178c3;
    } else {
        goto lab_0x4179c6;
    }
  lab_0x4178c3:;
    int64_t size4 = 24 * v95; // 0x4178c7
    int64_t * mem9 = malloc((int32_t)size4); // 0x4178cb
    int64_t v161 = (int64_t)mem9; // 0x4178cb
    int64_t * v162 = (int64_t *)(v73 + 56); // 0x4178d0
    *v162 = v161;
    if (mem9 == NULL) {
        // 0x417f90
        result = 12;
        v67 = size4;
        goto lab_0x417bb8;
    } else {
        if (v95 != 0) {
            int128_t v163 = __asm_pxor(v2, v2); // 0x4178f8
            __asm_movups(*(int128_t *)mem9, v163);
            *(int64_t *)(v161 + 16) = 0;
            uint64_t v164 = *v97; // 0x41790f
            int64_t v165 = 1; // 0x417916
            int128_t v166 = v163; // 0x417916
            int64_t v167 = v164; // 0x417916
            if (v164 > 1) {
                int128_t v168 = v166;
                int128_t v169 = __asm_pxor(v168, v168); // 0x4178f8
                int64_t v170 = v165 + 1; // 0x4178fc
                int64_t v171 = *v162 + 24 * v165; // 0x417900
                __asm_movups(*(int128_t *)v171, v169);
                *(int64_t *)(v171 + 16) = 0;
                uint64_t v172 = *v97; // 0x41790f
                v165 = v170;
                v167 = v172;
                while (v172 > v170) {
                    // 0x4178f0
                    v168 = v169;
                    v169 = __asm_pxor(v168, v168);
                    v170 = v165 + 1;
                    v171 = *v162 + 24 * v165;
                    __asm_movups(*(int128_t *)v171, v169);
                    *(int64_t *)(v171 + 16) = 0;
                    v172 = *v97;
                    v165 = v170;
                    v167 = v172;
                }
            }
            int64_t v173 = v167;
            if (v173 != 0) {
                int64_t v174 = *v80; // 0x41792a
                int64_t v175 = 0;
                int64_t v176 = 24 * v175; // 0x41793a
                int64_t v177 = v176 + v174; // 0x417947
                int64_t v178 = *(int64_t *)(v177 + 8); // 0x41794a
                int64_t v179 = v173; // 0x417953
                int64_t v180 = v174; // 0x417953
                int64_t v181; // 0x417250
                int64_t v182; // 0x41798e
                int64_t v183; // 0x417997
                int64_t v184; // 0x417960
                int64_t v185; // 0x417969
                if (v178 >= 0 == (v178 != 0)) {
                    // 0x41797d
                    v181 = *(int64_t *)(v177 + 16);
                    v185 = 0;
                    v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                    v183 = function_40b210(v182, v175);
                    v93 = 12;
                    v94 = v182;
                    if ((char)v183 == 0) {
                        goto lab_0x4179a8_2;
                    }
                    // 0x417960
                    v184 = *v80;
                    v185++;
                    v181 = 0x100000000 * v181 >> 32;
                    while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                        // 0x41797d
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_40b210(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x4179a8_2;
                        }
                        // 0x417960
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                    }
                    // 0x417e10
                    v179 = *v97;
                    v180 = v184;
                }
                // 0x417e10
                v174 = v180;
                int64_t v186 = v179; // 0x417e1b
                int64_t v187 = v175 + 1; // 0x417e10
                while (v186 > v187) {
                    // 0x41792e
                    v175 = v187;
                    v176 = 24 * v175;
                    v177 = v176 + v174;
                    v178 = *(int64_t *)(v177 + 8);
                    v179 = v186;
                    v180 = v174;
                    if (v178 >= 0 == (v178 != 0)) {
                        // 0x41797d
                        v181 = *(int64_t *)(v177 + 16);
                        v185 = 0;
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_40b210(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x4179a8_2;
                        }
                        // 0x417960
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                        while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                            // 0x41797d
                            v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                            v183 = function_40b210(v182, v175);
                            v93 = 12;
                            v94 = v182;
                            if ((char)v183 == 0) {
                                goto lab_0x4179a8_2;
                            }
                            // 0x417960
                            v184 = *v80;
                            v185++;
                            v181 = 0x100000000 * v181 >> 32;
                        }
                        // 0x417e10
                        v179 = *v97;
                        v180 = v184;
                    }
                    // 0x417e10
                    v174 = v180;
                    v186 = v179;
                    v187 = v175 + 1;
                }
            }
        }
        goto lab_0x4179c6;
    }
  lab_0x4179c6:
    // 0x4179c6
    result = 0;
    unsigned char result2 = *v23 / 4 & (char)(v125 == 0); // 0x4179e0
    if (result2 != 0) {
        // 0x417d00
        if (*v158 == 0) {
            // 0x417d0b
            if (*(int64_t *)(v11 + 16) != 0) {
                // 0x417d18
                return result2;
            }
            int64_t v188 = *(int64_t *)(v11 + 152); // 0x417fc6
            *v22 = 1;
            *v23 = 2 * (char)(v188 >= 0 == (v188 != 0)) | *v23 & -7;
        }
    }
    int64_t v155 = &v68; // 0x4179ec
    int64_t v189 = *(int64_t *)(*(int64_t *)(*v75 + 24) + 56); // 0x4179f3
    *(int64_t *)(v11 + 144) = v189;
    int64_t * v153 = (int64_t *)(v11 + 48); // 0x417a02
    int64_t v190 = function_40d930(v155, *v153 + 24 * v189); // 0x417a0a
    int64_t v191 = v190 & 0xffffffff; // 0x417a0f
    int32_t v192 = v190; // 0x417a12
    v56 = v192;
    int64_t v154 = v155; // 0x417a18
    int64_t v156 = v191; // 0x417a18
    if (v192 != 0) {
        goto lab_0x417b2f;
    } else {
        // 0x417a1e
        if (*(int64_t *)(v11 + 152) >= 1) {
            int64_t v152 = &v96;
            v142 = 0;
            while (true) {
              lab_0x417a55_2:
                // 0x417a55
                v140 = v142;
                int64_t v143 = *v14; // 0x417a5a
                int64_t v144 = *(int64_t *)(v96 + 8 * v140); // 0x417a5d
                int64_t v145 = 16 * v144 + v143; // 0x417a68
                if (*(char *)(v145 + 8) == 4) {
                    int64_t * v146 = (int64_t *)v145;
                    int64_t v147 = 0;
                    int64_t v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143; // 0x417a89
                    int64_t v149; // 0x417a9a
                    int64_t v150; // 0x417ab0
                    int64_t v151; // 0x417acf
                    if (*(char *)(v148 + 8) == 9) {
                        // 0x417a92
                        if (*(int64_t *)v148 == *v146) {
                            // 0x417a9a
                            v149 = *(int64_t *)(v11 + 40);
                            v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                            if (function_40c890(v78, v152, v150) != 0) {
                                goto lab_0x417a48;
                            } else {
                                // 0x417ac0
                                v151 = function_40cdd0(&v68, (int128_t *)(*v153 + 24 * v150));
                                if ((int32_t)v151 != 0) {
                                    // 0x417f50
                                    v154 = v155;
                                    v156 = v151 & 0xffffffff;
                                    goto lab_0x417b2f;
                                } else {
                                    // 0x417a55
                                    v142 = 1;
                                    goto lab_0x417a55_2;
                                }
                            }
                        }
                    }
                    int64_t v157 = v147 + 1; // 0x417a78
                    while (v78 != v157) {
                        // 0x417a81
                        v147 = v157;
                        v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143;
                        if (*(char *)(v148 + 8) == 9) {
                            // 0x417a92
                            if (*(int64_t *)v148 == *v146) {
                                // 0x417a9a
                                v149 = *(int64_t *)(v11 + 40);
                                v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                                if (function_40c890(v78, v152, v150) != 0) {
                                    goto lab_0x417a48;
                                } else {
                                    // 0x417ac0
                                    v151 = function_40cdd0(&v68, (int128_t *)(*v153 + 24 * v150));
                                    if ((int32_t)v151 != 0) {
                                        // 0x417f50
                                        v154 = v155;
                                        v156 = v151 & 0xffffffff;
                                        goto lab_0x417b2f;
                                    } else {
                                        // 0x417a55
                                        v142 = 1;
                                        goto lab_0x417a55_2;
                                    }
                                }
                            }
                        }
                        // 0x417a78
                        v157 = v147 + 1;
                    }
                }
                goto lab_0x417a48;
            }
        }
      lab_0x417af0:;
        int64_t v193 = function_40db40((int128_t *)&v56, v11, &v68, 0); // 0x417afd
        *(int64_t *)(v11 + 72) = v193;
        if (v193 == 0) {
            goto lab_0x417da8;
        } else {
            // 0x417b0f
            if (*(char *)(v193 + 104) < 0) {
                int64_t v194 = function_40db40((int128_t *)&v56, v11, &v68, 1); // 0x417d50
                int64_t * v195 = (int64_t *)(v11 + 80); // 0x417d60
                *v195 = v194;
                int64_t v196 = function_40db40((int128_t *)&v56, v11, &v68, 2); // 0x417d69
                int64_t * v197 = (int64_t *)(v11 + 88); // 0x417d79
                *v197 = v196;
                int64_t v198 = function_40db40((int128_t *)&v56, v11, &v68, 6); // 0x417d82
                *(int64_t *)(v11 + 96) = v198;
                if (*v195 == 0) {
                    goto lab_0x417da8;
                } else {
                    // 0x417d92
                    if (v198 != 0 == (*v197 != 0)) {
                        goto lab_0x417b25;
                    } else {
                        goto lab_0x417da8;
                    }
                }
            } else {
                // 0x417b19
                *(int64_t *)(v11 + 96) = v193;
                *(int64_t *)(v11 + 88) = v193;
                *(int64_t *)(v11 + 80) = v193;
                goto lab_0x417b25;
            }
        }
    }
  lab_0x417b2f:
    // 0x417b2f
    result = v156;
    int64_t * v199 = (int64_t *)(v154 + 112); // 0x417b38
    int64_t v200 = *v199; // 0x417b38
    if (v200 != 0) {
        int64_t * v201 = (int64_t *)v200; // 0x417b48
        int64_t v202 = *v201; // 0x417b48
        free(v201);
        while (v202 != 0) {
            // 0x417b48
            v201 = (int64_t *)v202;
            v202 = *v201;
            free(v201);
        }
    }
    // 0x417b58
    *v199 = 0;
    int64_t * v203 = (int64_t *)(v154 + 32); // 0x417b61
    *(int32_t *)(v154 + 128) = 15;
    *(int64_t *)(v154 + 104) = 0;
    free((int64_t *)*v203);
    *v203 = 0;
    function_40c4c0(&v124);
    if (result == 0) {
        // 0x417b9b
        return result;
    }
    goto lab_0x417c0e;
  lab_0x417da8:
    // 0x417da8
    v154 = v57;
    v156 = v56;
    goto lab_0x417b2f;
  lab_0x417b25:
    // 0x417b25
    free((int64_t *)v96);
    v154 = v96;
    v156 = v191;
    goto lab_0x417b2f;
}
// Address range: 0x418000 - 0x418067
int64_t function_418000(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 56); // 0x418020
    *v1 = *v1 & 111 | (char)(g124 / 0x200000) & 16 | -128;
    int64_t v2; // 0x418000
    int64_t v3 = function_417250(a3, a1, a2, g124, a1, v2); // 0x418035
    if ((int32_t)v3 == 0) {
        // 0x418060
        return 0;
    }
    int64_t v4 = *(int64_t *)((0x100000000 * v3 >> 29) + (int64_t)&g21); // 0x418047
    return (int64_t)dcgettext(NULL, (char *)(v4 + (int64_t)"Success"), 5);
}
// Address range: 0x418070 - 0x41807f
int64_t function_418070(int64_t a1) {
    int64_t result = g124; // 0x418070
    g124 = a1;
    return result;
}
// Address range: 0x418080 - 0x418143
int64_t function_418080(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x418086
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 248) = 0;
    int64_t v2 = v1 + 8 & -8; // 0x4180aa
    __asm_rep_stosq_memset((char *)v2, 0, (v1 + 256 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x4180c3
    int64_t v4 = *v3; // 0x4180c3
    function_410b30(a1, v4 + 16, v4 + 24, v1);
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x4180d5
    int64_t v6 = v5; // 0x4180df
    if (*v3 != v5) {
        // 0x4180e1
        function_410b30(a1, v5 + 16, v5 + 24, v1);
        v6 = *v3;
    }
    int64_t v7 = *(int64_t *)(a1 + 88); // 0x4180f9
    int64_t v8 = v6; // 0x418101
    if (v7 != v6) {
        // 0x418103
        function_410b30(a1, v7 + 16, v7 + 24, v1);
        v8 = *v3;
    }
    int64_t v9 = *(int64_t *)(a1 + 96); // 0x41811b
    if (v9 != v8) {
        // 0x418125
        function_410b30(a1, v9 + 16, v9 + 24, v1);
    }
    char * v10 = (char *)(a1 + 56); // 0x418138
    *v10 = *v10 | 8;
    return 0;
}
// Address range: 0x418150 - 0x4186db
int64_t function_418150(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x418150
    if (a4 < 0 || a4 > a3) {
        // 0x41827f
        return -1;
    }
    int64_t v1 = a5 + a4; // 0x418155
    int64_t v2 = a3; // 0x418191
    if (v1 > a3) {
        goto lab_0x4181bc;
    } else {
        // 0x418197
        v2 = a3;
        if (a5 > -1 == v1 < a4) {
            goto lab_0x4181bc;
        } else {
            if (v1 < 0) {
                goto lab_0x418478;
            } else {
                // 0x4181ae
                v2 = v1;
                if (a5 >= 0 || v1 < a4) {
                    goto lab_0x4181bc;
                } else {
                    goto lab_0x418478;
                }
            }
        }
    }
  lab_0x4181bc:;
    char * v3 = (char *)(a1 + 56); // 0x4181bc
    int64_t v4 = (int64_t)*v3; // 0x4181bc
    int64_t v5 = v4; // 0x4181d2
    int64_t v6 = v2; // 0x4181d2
    if (v2 > a4) {
        // 0x4181d4
        v5 = v4;
        v6 = v2;
        if ((v4 & 8) == 0 == (*(int64_t *)(a1 + 32) != 0)) {
            // 0x4183d0
            function_418080(a1);
            v5 = (int64_t)*v3;
            v6 = v2;
        }
    }
    goto lab_0x4181e3;
  lab_0x4181e3:;
    int64_t size = 16; // 0x4181e5
    int64_t v7 = 0; // 0x4181e5
    int64_t v8 = 1; // 0x4181e5
    int64_t v9; // 0x418150
    if (a7 == 0 || (v5 & 16) != 0) {
        goto lab_0x418211;
    } else {
        uint64_t v10 = *(int64_t *)(a1 + 48); // 0x4181f7
        if ((v5 & 6) == 4) {
            int64_t v11 = *(int64_t *)a7; // 0x418390
            if (v11 > v10) {
                // 0x418203
                v9 = v10 + 1;
                goto lab_0x41820a;
            } else {
                // 0x41839d
                v9 = v11;
                size = 16;
                v7 = 0;
                v8 = 1;
                if (v11 >= 0 == (v11 != 0)) {
                    goto lab_0x41820a;
                } else {
                    goto lab_0x418211;
                }
            }
        } else {
            // 0x418203
            v9 = v10 + 1;
            goto lab_0x41820a;
        }
    }
  lab_0x418211:;
    int64_t * mem = malloc((int32_t)size); // 0x418220
    if (mem == NULL) {
        // 0x41827f
        return -2;
    }
    uint64_t v12 = v8;
    int64_t v13 = (int64_t)mem; // 0x418220
    int64_t result = -1; // 0x418150
    int64_t v14; // 0x418150
    int64_t v15; // 0x418150
    int64_t v16; // 0x418150
    int64_t v17; // 0x418150
    int64_t v18; // 0x418150
    int64_t v19; // 0x418150
    int64_t v20; // 0x418150
    int64_t v21; // 0x418150
    int64_t v22; // 0x418150
    int64_t v23; // 0x418150
    int64_t v24; // 0x418150
    int64_t v25; // 0x418150
    int64_t v26; // 0x418150
    int64_t v27; // 0x418150
    int64_t v28; // 0x418150
    int64_t v29; // 0x418150
    int64_t v30; // 0x418150
    int64_t v31; // 0x418150
    int64_t v32; // 0x418150
    int64_t v33; // 0x418150
    int64_t v34; // 0x418150
    int64_t v35; // 0x418150
    int64_t v36; // 0x418150
    int64_t v37; // 0x418150
    int64_t v38; // 0x418150
    char * v39; // 0x4182a1
    switch ((int32_t)v40) {
        case 0: {
            // 0x418298
            v14 = v7;
            v36 = a2;
            v26 = a3;
            v31 = v6;
            v16 = v6;
            v21 = a6;
            if (v14 == 0) {
                goto lab_0x418368;
            } else {
                // 0x4182a1
                v39 = (char *)(a1 + 56);
                int64_t v41 = v12 + 1; // 0x4182a6
                unsigned char v42 = *v39 / 2 % 4;
                switch (v42) {
                    case 0: {
                        int32_t size2 = 8 * (int32_t)v41; // 0x418420
                        int64_t * mem2 = malloc(size2); // 0x418420
                        int64_t v43 = (int64_t)mem2; // 0x418420
                        *(int64_t *)(v14 + 8) = v43;
                        v35 = v41;
                        v25 = a3;
                        int64_t v44; // 0x418150
                        v30 = v44;
                        v15 = v44;
                        v20 = 0;
                        if (mem2 == NULL) {
                            goto lab_0x41834d;
                        } else {
                            int64_t * mem3 = malloc(size2); // 0x418445
                            *(int64_t *)(v14 + 16) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x41853a
                                free(mem2);
                                v35 = v41;
                                v25 = a3;
                                v30 = v43;
                                v15 = v44;
                                v20 = 0;
                                goto lab_0x41834d;
                            } else {
                                // 0x418462
                                *(int64_t *)v14 = v41;
                                v34 = v41;
                                v24 = a3;
                                v29 = v43;
                                v19 = 1;
                                goto lab_0x4182d7;
                            }
                        }
                    }
                    case 1: {
                        int64_t * v45 = (int64_t *)v14; // 0x4184be
                        v34 = a2;
                        v24 = a3;
                        v29 = v6;
                        v19 = 1;
                        if (*v45 >= v41) {
                            goto lab_0x4182d7;
                        } else {
                            int64_t v46 = 8 * v41; // 0x4184c8
                            int64_t * v47 = (int64_t *)(v14 + 8); // 0x4184d0
                            int32_t v48 = v46; // 0x4184e7
                            int64_t * mem4 = realloc((int64_t *)*v47, v48); // 0x4184e7
                            v35 = v46;
                            v25 = 1;
                            v30 = v41;
                            v15 = v6;
                            v20 = 0;
                            if (mem4 == NULL) {
                                goto lab_0x41834d;
                            } else {
                                int64_t * v49 = (int64_t *)(v14 + 16); // 0x4184f9
                                int64_t * mem5 = realloc((int64_t *)*v49, v48); // 0x418501
                                if (mem5 == NULL) {
                                    // 0x41854a
                                    free(mem4);
                                    v35 = v46;
                                    v25 = 1;
                                    v30 = v41;
                                    v15 = v6;
                                    v20 = 0;
                                    goto lab_0x41834d;
                                } else {
                                    // 0x418516
                                    *v47 = (int64_t)mem4;
                                    *v49 = (int64_t)mem5;
                                    *v45 = v41;
                                    v34 = v46;
                                    v24 = 1;
                                    v29 = v41;
                                    v19 = 1;
                                    goto lab_0x4182d7;
                                }
                            }
                        }
                    }
                    default: {
                        // 0x4182be
                        v38 = a2;
                        v28 = a3;
                        v33 = v6;
                        v18 = v6;
                        v23 = a6;
                        if (v42 != 2) {
                            goto lab_0x41858c;
                        } else {
                            // 0x4182c7
                            v34 = a2;
                            v24 = a3;
                            v29 = v6;
                            v19 = 2;
                            v37 = a2;
                            v27 = a3;
                            v32 = v6;
                            v17 = v6;
                            v22 = a6;
                            if (v12 > *(int64_t *)v14) {
                                goto lab_0x418573;
                            } else {
                                goto lab_0x4182d7;
                            }
                        }
                    }
                }
            }
        }
        case 1: {
            goto lab_0x418277;
        }
        default: {
            goto lab_0x418270;
        }
    }
  lab_0x418478:
    // 0x418478
    v5 = (int64_t)*(char *)(a1 + 56);
    v6 = 0;
    goto lab_0x4181e3;
  lab_0x418270:
    // 0x418270
    result = -2;
  lab_0x418277:
    // 0x418277
    free(mem);
    // 0x41827f
    return result;
  lab_0x418368:;
    int64_t v50 = *mem; // 0x41836d
    result = v50;
    if ((char)a8 == 0) {
        // 0x418277
        free(mem);
        // 0x41827f
        return result;
    }
    if (v50 == a4) {
        // 0x418277
        free(mem);
        // 0x41827f
        return *(int64_t *)(v13 + 8) - v50;
    }
    // 0x41855a
    __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 445, "re_search_stub");
    v37 = v36;
    v27 = v26;
    v32 = v31;
    v17 = v16;
    v22 = v21;
    goto lab_0x418573;
  lab_0x41820a:
    // 0x41820a
    size = 16 * v9;
    v7 = a7;
    v8 = v9;
    goto lab_0x418211;
  lab_0x418573:
    // 0x418573
    __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 506, "re_copy_regs");
    v38 = v37;
    v28 = v27;
    v33 = v32;
    v18 = v17;
    v23 = v22;
    goto lab_0x41858c;
  lab_0x41858c:
    // 0x41858c
    __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 504, "re_copy_regs");
    if ((v18 || v28) <= -1) {
        // 0x41827f
        return -2;
    }
    int64_t size3 = v18 + 504; // 0x4185fc
    if ((size3 & (v18 ^ -0x8000000000000000)) < 0) {
        // 0x41827f
        return -2;
    }
    int64_t * v51 = NULL; // 0x418608
    int64_t v52 = (int64_t)"lib/regexec.c"; // 0x418608
    if (v18 != 0) {
        int64_t * mem6 = malloc((int32_t)size3); // 0x418672
        if (mem6 == NULL) {
            // 0x41827f
            return -2;
        }
        int64_t v53 = (int64_t)mem6; // 0x418672
        memcpy(mem6, (int64_t *)"lib/regexec.c", 504);
        memcpy((int64_t *)(v53 + 504), (int64_t *)"re_copy_regs", (int32_t)v18);
        v51 = mem6;
        v52 = v53;
    }
    int64_t result2 = function_418150((int64_t)"regs_allocated == REGS_FIXED", v52, size3, v23, v38, v28, v33, a6 % 256); // 0x418633
    free(v51);
    // 0x41827f
    return result2;
  lab_0x41834d:
    // 0x41834d
    *v39 = *v39 & -7 | 2 * (char)v20;
    v36 = v35;
    v26 = v25;
    v31 = v30;
    v16 = v15;
    v21 = v20;
    if (v20 == 0) {
        goto lab_0x418270;
    } else {
        goto lab_0x418368;
    }
  lab_0x4182d7:;
    int64_t v54 = v19;
    int64_t v55 = v29;
    int64_t v56 = v24;
    int64_t v57 = v34;
    int64_t v58 = 0; // 0x4182da
    int64_t v59 = v6; // 0x4182da
    if (v12 >= 1) {
        int64_t v60 = *(int64_t *)(v14 + 8); // 0x4182e0
        int64_t v61 = 0; // 0x4182f7
        int64_t v62 = 2 * v61; // 0x418300
        *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
        int64_t v63 = *(int64_t *)(v13 + 8 + v62); // 0x418309
        *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
        v61 += 8;
        v58 = v12;
        v59 = v60;
        while (v61 != 8 * v12) {
            // 0x418300
            v62 = 2 * v61;
            *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
            v63 = *(int64_t *)(v13 + 8 + v62);
            *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
            v61 += 8;
            v58 = v12;
            v59 = v60;
        }
    }
    int64_t v64 = v59;
    int64_t v65 = v58;
    int64_t * v66 = (int64_t *)v14; // 0x41831b
    v35 = v57;
    v25 = v56;
    v30 = v55;
    v15 = v64;
    v20 = v54;
    if (*v66 > v65) {
        int64_t v67 = v65 + 1; // 0x418338
        int64_t v68 = 8 * v65; // 0x41833c
        *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
        *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
        v35 = v57;
        v25 = v56;
        v30 = v55;
        v15 = v64;
        v20 = v54;
        while (*v66 > v67) {
            int64_t v69 = v67;
            v67 = v69 + 1;
            v68 = 8 * v69;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 16)) = -1;
            *(int64_t *)(v68 + *(int64_t *)(v14 + 8)) = -1;
            v35 = v57;
            v25 = v56;
            v30 = v55;
            v15 = v64;
            v20 = v54;
        }
    }
    goto lab_0x41834d;
}
// Address range: 0x4186e0 - 0x4187f0
int64_t function_4186e0(int64_t a1, int64_t str, uint64_t a3) {
    // 0x4186e0
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t * mem = malloc(256); // 0x418725
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x41872a
    *v1 = (int64_t)mem;
    if (mem == NULL) {
        // 0x4187e0
        return 12;
    }
    int64_t v2 = (a3 % 2 == 0 ? 0x10102c6 : 0x3b2fc) | 0x200000 * a3 & 0x400000; // 0x418747
    int64_t v3 = (a3 & 4) != 0 ? v2 & 0x143b2be | 256 : v2;
    *(int64_t *)(a1 + 40) = 0;
    char * v4 = (char *)(a1 + 56); // 0x418762
    *v4 = ((a3 & 4) != 0 ? -128 : 0) | 2 * (char)a3 & 16 | *v4 & 111;
    int64_t v5; // 0x4186e0
    int64_t v6 = function_417250(a1, str, (int64_t)strlen((char *)str), v3, v5, v5); // 0x418787
    int32_t v7 = v6; // 0x41878e
    int64_t v8 = 8; // 0x418791
    if (v7 != 16) {
        // 0x418793
        v8 = v6 & 0xffffffff;
        if (v7 == 0) {
            // 0x418797
            function_418080(a1);
            // 0x41879f
            return v8 & 0xffffffff;
        }
    }
    // 0x4187cd
    free((int64_t *)*v1);
    *v1 = 0;
    // 0x41879f
    return v8 & 0xffffffff;
}
// Address range: 0x4187f0 - 0x41886d
int64_t function_4187f0(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = *(int64_t *)((0x100000000 * a1 >> 29) + (int64_t)&g21); // 0x418811
    char * str = dcgettext(NULL, (char *)(v1 + (int64_t)"Success"), 5); // 0x418822
    int64_t result = (int64_t)strlen(str) + 1; // 0x418832
    if (a4 == 0) {
        // 0x41884e
        return result;
    }
    int64_t v2 = result; // 0x418841
    if (result > a4) {
        // 0x418860
        v2 = a4 - 1;
        *(char *)(v2 + a3) = 0;
    }
    // 0x418843
    memcpy((int64_t *)a3, (int64_t *)str, (int32_t)v2);
    // 0x41884e
    return result;
}
// Address range: 0x418870 - 0x4188b4
int64_t function_418870(int64_t a1) {
    if (a1 != 0) {
        // 0x41887c
        function_40fe70(a1);
    }
    // 0x418881
    *(int64_t *)a1 = 0;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x418888
    *(int64_t *)(a1 + 8) = 0;
    free((int64_t *)*v1);
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x4188a1
    free((int64_t *)*v2);
    *v2 = 0;
    return &g127;
}
// Address range: 0x4188c0 - 0x418956
int64_t function_4188c0(int64_t a1, int64_t str, int64_t a3, int64_t a4, int64_t a5) {
    if ((a5 & 0xfffffff8) != 0) {
        // 0x418950
        return 2;
    }
    int64_t v1; // 0x4188c0
    int64_t v2; // 0x4188c0
    int64_t v3; // 0x4188c0
    int64_t v4; // 0x4188c0
    int64_t v5; // 0x4188c0
    int64_t v6; // 0x4188c0
    if ((a5 & 4) != 0) {
        int64_t v7 = *(int64_t *)(a4 + 8); // 0x418933
        v5 = 0;
        v1 = a4;
        v3 = v7;
        v6 = 0;
        v2 = a4;
        v4 = v7;
        if ((*(char *)(a1 + 56) & 16) != 0) {
            goto lab_0x418906;
        } else {
            goto lab_0x41893d;
        }
    } else {
        int64_t len = strlen((char *)str); // 0x4188ed
        v5 = 0;
        v1 = 0;
        v3 = len;
        v6 = 0;
        v2 = 0;
        v4 = len;
        if ((*(char *)(a1 + 56) & 16) == 0) {
            goto lab_0x41893d;
        } else {
            goto lab_0x418906;
        }
    }
  lab_0x418906:;
    int64_t v8 = v3;
    return (int32_t)function_4131a0(a1, str, v8, v1, v8, v8, v6, v5, a5 & 0xffffffff) != 0;
  lab_0x41893d:
    // 0x41893d
    v5 = a4;
    v1 = v2;
    v3 = v4;
    v6 = a3;
    goto lab_0x418906;
}
// Address range: 0x418960 - 0x418978
int64_t function_418960(int64_t * a1, int64_t a2, int64_t a3, int32_t a4, int32_t a5) {
    // 0x418960
    return function_418150((int64_t)a1, a2, a3, (int64_t)a4, 0, a3, (int64_t)a5, 1);
}
// Address range: 0x418980 - 0x418995
int64_t function_418980(int64_t * a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int64_t * a6) {
    // 0x418980
    return function_418150((int64_t)a1, a2, a3, (int64_t)a4, a5, a3, (int64_t)a6, 0);
}
// Address range: 0x4189a0 - 0x4189ba
int64_t function_4189a0(int64_t a1, int64_t a2) {
    // 0x4189a0
    int64_t result; // 0x4189a0
    return result;
}
// Address range: 0x4189c0 - 0x4189dc
int64_t function_4189c0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4189c0
    int64_t result; // 0x4189c0
    return result;
}
// Address range: 0x4189e0 - 0x418a1c
int64_t function_4189e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 56);
    char v2 = *v1 & -7;
    if (a3 == 0) {
        // 0x418a00
        *v1 = v2;
        *(int64_t *)a2 = 0;
        *(int64_t *)(a2 + 16) = 0;
        *(int64_t *)(a2 + 8) = 0;
        int64_t result; // 0x4189e0
        return result;
    }
    unsigned char result2 = v2 | 2;
    *v1 = result2;
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 8) = a4;
    *(int64_t *)(a2 + 16) = a5;
    return result2;
}
// Address range: 0x418a20 - 0x418a79
int64_t function_418a20(int64_t a1, char * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (v1 == a1) {
        // 0x418a78
        return 0;
    }
    int64_t v2 = 0; // 0x418a25
    unsigned char v3 = *(char *)(v2 + a1); // 0x418a38
    int64_t v4 = v3; // 0x418a38
    uint64_t v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
    unsigned char v6 = *(char *)(v2 + v1); // 0x418a50
    bool v7 = v6 == 90 | (int32_t)v6 < 90; // 0x418a60
    char v8 = v5; // 0x418a69
    while (v8 != 0) {
        // 0x418a30
        v2++;
        if ((v7 ? v6 + 32 : v6) != v8) {
            // break -> 0x418a6d
            break;
        }
        v3 = *(char *)(v2 + a1);
        v4 = v3;
        v5 = v3 == 90 | (int32_t)v3 < 90 ? v4 + 32 : v4;
        v6 = *(char *)(v2 + v1);
        v7 = v6 == 90 | (int32_t)v6 < 90;
        v8 = v5;
    }
    int64_t v9 = v6; // 0x418a50
    // 0x418a78
    return v5 % 256 - (v7 ? v9 + 32 : v9) % 256 & 0xffffffff;
}
// Address range: 0x418a80 - 0x418add
int64_t function_418a80(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x418a87
    int64_t v2; // 0x418a80
    int64_t result = function_409bc0(a1, v2); // 0x418a98
    if ((v2 & 32) != 0) {
        // 0x418ac0
        if ((int32_t)result == 0) {
            // 0x418ac4
            *__errno_location() = 0;
        }
        // 0x418aba
        return 0xffffffff;
    }
    // 0x418aa1
    if ((int32_t)result == 0) {
        // 0x418aba
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x418aa8
    if (v1 == 0) {
        // 0x418aaa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x418aba
    return result2;
}
// Address range: 0x418ae0 - 0x418b3e
int64_t function_418ae0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x418ae6
    if (locale == NULL) {
        // 0x418b13
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x418ae6
    bool v2; // 0x418ae0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g23; // 0x418ae0
    int64_t v5 = v1; // 0x418ae0
    int64_t v6 = 2; // 0x418b05
    unsigned char v7 = *(char *)v5; // 0x418b05
    char v8 = *(char *)v4; // 0x418b05
    char v9 = v8; // 0x418b05
    bool v10 = false; // 0x418b05
    while (v7 == v8) {
        // 0x418af8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x418b11
    int64_t v13 = v1; // 0x418b11
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x418b13
        return 0;
    }
    int64_t v14 = 6; // 0x418b11
    unsigned char v15 = *(char *)v13; // 0x418b2d
    char v16 = *(char *)v12; // 0x418b2d
    char v17 = v16; // 0x418b2d
    bool v18 = false; // 0x418b2d
    while (v15 == v16) {
        // 0x418b20
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
// Address range: 0x418b40 - 0x4190a2
int64_t function_418b40(void) {
    char * v1 = nl_langinfo(14); // 0x418b56
    char * v2 = g121; // 0x418b5b
    char * v3; // 0x418b40
    int64_t v4; // 0x418b40
    int64_t v5; // 0x418b40
    int64_t v6; // 0x418b40
    int64_t v7; // 0x418b40
    int32_t size; // 0x418b40
    int32_t size2; // 0x418b40
    int32_t len; // 0x418c12
    int64_t v8; // 0x418c12
    char * env_val; // 0x418bfd
    if (v2 == NULL) {
        // 0x418bf8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x418c65;
        } else {
            // 0x418c0a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x418c65;
            } else {
                // 0x418c0f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x418bfd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x419095
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x418c65;
                    } else {
                        // 0x419009
                        size2 = len + 14;
                        goto lab_0x418c2b;
                    }
                } else {
                    goto lab_0x418c2b;
                }
            }
        }
    } else {
        // 0x418b40
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x418b7a;
    }
  lab_0x418eac:;
    // 0x418eac
    struct _IO_FILE * stream; // 0x418ceb
    int32_t v10 = __uflow(stream); // 0x418eaf
    int64_t v11; // 0x418b40
    int64_t v12 = v11; // 0x418eb9
    int64_t v13; // 0x418b40
    int64_t v14 = v13; // 0x418eb9
    int32_t v15 = v10; // 0x418eb9
    int64_t v16; // 0x418b40
    int64_t v17 = v16; // 0x418eb9
    int64_t v18 = v11; // 0x418eb9
    int64_t v19 = v13; // 0x418eb9
    int64_t v20 = v16; // 0x418eb9
    if (v10 == -1) {
        // break -> 0x418ebf
        goto lab_0x418ebf;
    }
    goto lab_0x418d39;
  lab_0x418d2e:;
    // 0x418d2e
    int64_t v90; // 0x418b40
    int64_t * v32; // 0x418d20
    *v32 = v90 + 1;
    int64_t v89; // 0x418b40
    v12 = v89;
    int64_t v91; // 0x418b40
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x418b40
    v17 = v92;
    goto lab_0x418d39;
  lab_0x418d39:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x418b40
    int32_t v25; // bp-120, 0x418b40
    int32_t v26; // bp-184, 0x418b40
    int64_t v27; // 0x418ceb
    int64_t v28; // 0x418d08
    int64_t v29; // 0x418d0d
    int64_t * v30; // 0x418d24
    switch (c) {
        case 32: {
            goto lab_0x418d20;
        }
        case 10: {
            goto lab_0x418d20;
        }
        case 9: {
            goto lab_0x418d20;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x418f11
            int32_t v33; // 0x418b40
            char v34; // 0x418b40
            int32_t v35; // 0x418f1e
            if (v31 < *v30) {
                // 0x418ef0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x418f1b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x418f11
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x418ef0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x418f1b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x418f00
                v36 = v33;
            }
            // 0x418fef
            if (v36 == -1) {
                // break -> 0x418ebf
                break;
            }
            goto lab_0x418d20;
        }
        default: {
            // 0x418d4f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x418ebf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x418d78
            int64_t v39 = v37 + 4; // 0x418d7a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x418d86
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x418d88
            while (v41 == 0) {
                // 0x418d78
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x418da6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x418db2
            int64_t v45 = v43 + 4; // 0x418db4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x418dc0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x418dc2
            while (v47 == 0) {
                // 0x418db2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x418daf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x418dd8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x418de8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x418dec
            int64_t v52 = v51 + v48; // 0x418df5
            int64_t * mem; // 0x418b40
            int64_t v53; // 0x418b40
            int64_t v54; // 0x418b40
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x418f2b
                int64_t v56 = v55 + 3; // 0x418f37
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x418e11
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x418e20
            if (mem == NULL) {
                // 0x41904c
                free((int64_t *)v21);
                function_409bc0(v27, v53);
                v24 = (int64_t)&g19;
                goto lab_0x418cc4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x418e38
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x418e42
            uint32_t v62 = (int32_t)v59; // 0x418e45
            int64_t v63; // 0x418b40
            if (v62 >= 8) {
                // 0x418f54
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x418f6e
                int64_t v66 = v61 - v65; // 0x418f72
                uint32_t v67 = (int32_t)(v66 + v59); // 0x418f7d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x418f8e
                    int64_t v70 = v69 & 0xffffffff; // 0x418f8e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x418f8b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x41901f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x418e57
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x418e5b
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
            int64_t v73 = v51 + 1; // 0x418e6b
            int64_t v74 = v60 - 1; // 0x418e6f
            uint32_t v75 = (int32_t)v73; // 0x418e74
            int64_t v76; // 0x418b40
            if (v75 >= 8) {
                // 0x418fa2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x418fac
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x418fbc
                int64_t v80 = v74 - v79; // 0x418fc0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x418fcb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x418fdb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x418fd9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x419036
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41903e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x418e86
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x418e8a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x419083
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x418e9e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x418d2e;
            } else {
                goto lab_0x418eac;
            }
        }
    }
  lab_0x418d20:;
    int64_t v93 = v23; // 0x418b40
    int64_t v94 = v22; // 0x418b40
    int64_t v95 = v21; // 0x418b40
    goto lab_0x418d20_2;
  lab_0x418c65:;
    int64_t * mem3 = malloc(size); // 0x418c65
    int64_t v97 = (int64_t)&g19; // 0x418c70
    int64_t v98; // 0x418b40
    int64_t path; // 0x418b40
    if (mem3 == NULL) {
        goto lab_0x418c42;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x418c65
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x418c86;
    }
  lab_0x418b7a:;
    int64_t str = v1 == NULL ? (int64_t)&g19 : (int64_t)v1; // 0x418b6d
    char v100 = *v3; // 0x418b7a
    int64_t v101; // 0x418b40
    if (v100 == 0) {
        // 0x418bd4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x418b40
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x418b40
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x418bc0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x418bc7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x418b90
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x418b9d
        char v107 = *(char *)v106; // 0x418ba2
        v102 = v107;
        if (v107 == 0) {
            // 0x418bd4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x418bab
    v104 = v103 + 1;
  lab_0x418bc7:
    // 0x418bd4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x418c42:;
    char * v108 = (char *)v97;
    g121 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x418b7a;
  lab_0x418c86:;
    int64_t v109 = v98 + path; // 0x418c86
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x418cb2
    v24 = (int64_t)&g19;
    if (fd >= 0) {
        // 0x418ce1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x419012
            close(fd);
            v24 = (int64_t)&g19;
        } else {
            // 0x418d05
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x418d20_2:;
                uint64_t v96 = *v32; // 0x418d20
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x418eac;
                } else {
                    goto lab_0x418d2e;
                }
            }
          lab_0x418ebf:
            // 0x418ebf
            function_409bc0(v27, v19);
            v24 = (int64_t)&g19;
            if (v18 != 0) {
                // 0x418ede
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x418cc4;
  lab_0x418c2b:;
    int64_t * mem4 = malloc(size2); // 0x418c2b
    v97 = (int64_t)&g19;
    if (mem4 != NULL) {
        // 0x418cd1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x418c86;
    } else {
        goto lab_0x418c42;
    }
  lab_0x418cc4:
    // 0x418cc4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x418c42;
}
// Address range: 0x4190b0 - 0x4190d1
int64_t function_4190b0(int64_t a1) {
    int32_t wc = a1; // 0x4190b3
    int32_t result = wcwidth(wc); // 0x4190b3
    if (result < 0) {
        // 0x4190c0
        return iswcntrl(wc) == 0;
    }
    // 0x4190bc
    return result;
}
// Address range: 0x4190e0 - 0x419136
int64_t function_4190e0(int64_t a1, int64_t a2) {
    // 0x4190e0
    *(int64_t *)a1 = a2;
    char v1 = *(char *)(a2 + 16); // 0x4190ff
    *(int64_t *)(a1 + 8) = *(int64_t *)(a2 + 8);
    *(char *)(a1 + 16) = v1;
    int64_t result = 0; // 0x41910c
    if (v1 != 0) {
        uint32_t v2 = *(int32_t *)(a2 + 20); // 0x41910e
        *(int32_t *)(a1 + 20) = v2;
        result = v2;
    }
    // 0x419114
    return result;
}
// Address range: 0x419140 - 0x419157
int64_t function_419140(uint64_t a1) {
    uint32_t v1 = *(int32_t *)((a1 / 8 & 28) + (int64_t)&g24); // 0x41914a
    return (v1 >> (int32_t)a1 % 32) % 2;
}
// Address range: 0x419160 - 0x4192e3
int64_t function_419160(int64_t a1, int64_t a2, uint64_t a3, int64_t * a4, int64_t a5) {
    int64_t v1 = 8 * a3; // 0x419179
    int64_t v2 = v1; // 0x419179
    if (v1 < 0) {
        // 0x419280
        return 0;
    }
    if (a3 >= 0x2000000000000000) {
        // 0x419280
        return 0;
    }
    int64_t v3; // 0x419160
    if (v1 < 4016) {
        // 0x41919c
        int64_t v4; // bp-56, 0x419160
        int64_t v5 = 31 - (v1 + 39 & -16) + (int64_t)&v4 & -16; // 0x4191b0
        v2 = v5;
        v3 = v5;
        if (v5 == 0) {
            // 0x419280
            return 0;
        }
    } else {
        int64_t v6 = function_41b0d0(v1, a2, a3, (int64_t)a4); // 0x419263
        v2 = v6;
        v3 = v6;
        if (v6 == 0) {
            // 0x419280
            return 0;
        }
    }
    // 0x4191bd
    *(int64_t *)(v3 + 8) = 1;
    if (a3 >= 3) {
        int64_t v7 = 0;
        int64_t v8 = 2;
        char v9 = *(char *)(a2 - 1 + v8); // 0x4191d8
        int64_t v10 = v7; // 0x4191e2
        int64_t v11 = v7; // 0x4191e2
        int64_t v12; // 0x419160
        int64_t v13; // 0x419160
        int64_t v14; // 0x4192c8
        int64_t v15; // 0x4191f0
        if (v9 != *(char *)(v7 + a2)) {
            v12 = v10;
            while (v12 != 0) {
                // 0x4191f0
                v15 = v12 - *(int64_t *)(8 * v12 + v2);
                if (*(char *)(v15 + a2) == v9) {
                    goto lab_0x4192c8;
                }
                v12 = v15;
            }
            // 0x419203
            *(int64_t *)(v2 + 8 * v8) = v8;
            v13 = 0;
        } else {
            // 0x4192c8
            v14 = v11 + 1;
            *(int64_t *)(v2 + 8 * v8) = v8 - v14;
            v13 = v14;
        }
        // 0x41920a
        v7 = v13;
        int64_t v16 = v8 + 1; // 0x41920a
        while (v16 != a3) {
            // 0x4191d8
            v8 = v16;
            v9 = *(char *)(a2 - 1 + v8);
            v10 = v7;
            v11 = v7;
            if (v9 != *(char *)(v7 + a2)) {
                v12 = v10;
                while (v12 != 0) {
                    // 0x4191f0
                    v15 = v12 - *(int64_t *)(8 * v12 + v2);
                    if (*(char *)(v15 + a2) == v9) {
                        goto lab_0x4192c8;
                    }
                    v12 = v15;
                }
                // 0x419203
                *(int64_t *)(v2 + 8 * v8) = v8;
                v13 = 0;
            } else {
                // 0x4192c8
                v14 = v11 + 1;
                *(int64_t *)(v2 + 8 * v8) = v8 - v14;
                v13 = v14;
            }
            // 0x41920a
            v7 = v13;
            v16 = v8 + 1;
        }
    }
    // 0x419213
    *a4 = 0;
    char v17 = *(char *)&v2;
    char v18 = v17; // 0x41922b
    int64_t v19 = a1; // 0x41922b
    int64_t v20 = a1; // 0x41922b
    int64_t v21 = 0; // 0x41922b
    if (v17 == 0) {
        // 0x419247
        function_41b140(v2);
        return 1;
    }
    int64_t v22; // 0x419160
    while (true) {
        char v23 = v18;
        int64_t v24 = v20; // 0x419231
        int64_t v25 = v21; // 0x419231
        int64_t v26 = v21; // 0x419231
        int64_t v27 = v20; // 0x419231
        if (*(char *)(v21 + a2) == v23) {
          lab_0x419290:
            // 0x419290
            v22 = v27;
            int64_t v28 = v26 + 1; // 0x419290
            v21 = v28;
            v20 = v22;
            if (v28 == a3) {
                // break -> 0x4192db
                break;
            }
        } else {
            int64_t v29 = v25;
            int64_t v30 = v24;
            while (v29 != 0) {
                int64_t v31 = *(int64_t *)(8 * v29 + v2); // 0x419238
                int64_t v32 = v31 + v30; // 0x41923c
                int64_t v33 = v29 - v31; // 0x41923f
                v24 = v32;
                v25 = v33;
                v26 = v33;
                v27 = v32;
                if (*(char *)(v33 + a2) == v23) {
                    goto lab_0x419290;
                }
                v29 = v25;
                v30 = v24;
            }
            // 0x4192b0
            v21 = 0;
            v20 = v30 + 1;
        }
        // 0x419228
        v19++;
        v18 = *(char *)v19;
        if (v18 == 0) {
            // 0x419247
            function_41b140(v2);
            return 1;
        }
    }
    // 0x4192db
    *a4 = v22;
    // 0x419247
    function_41b140(v2);
    return 1;
}
// Address range: 0x4192f0 - 0x419310
int64_t function_4192f0(void) {
    // 0x4192f0
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g127;
}
// Address range: 0x419310 - 0x419cf0
int64_t function_419310(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3; // bp-280, 0x419331
    uint64_t v2 = function_41b1d0(a2); // 0x419338
    uint128_t v3 = 56 * (int128_t)v2; // 0x41934f
    if ((int64_t)v3 < 0 || v3 % 0x3f0000000000000001 != 0) {
        // 0x419721
        return 0;
    }
    int64_t v4 = 0x100000000 * v2 / 0x100000000; // 0x41936a
    uint64_t v5 = 56 * v4; // 0x41937c
    int64_t v6; // 0x419310
    if (v5 < 4015) {
        // 0x41938d
        v6 = (int64_t)&v1 + 31 - (v5 + 39 & -16) & -16;
    } else {
        // 0x4197fe
        v6 = function_41b0d0(v5, a2, (int64_t)(v3 % 0x3f0000000000000001 != 0), v2);
    }
    int64_t len3 = 0; // 0x4193a8
    if (v6 == 0) {
      lab_0x419721:
        // 0x419721
        return len3;
    }
    int64_t ps = 0; // bp-244, 0x4193d1
    int64_t v7 = v6 + 48 * v4; // 0x4193e0
    int64_t v8 = a2; // 0x4193e3
    char v9 = 0; // 0x4193e3
    int64_t v10 = v6; // 0x4193e3
    int64_t v11; // 0x419310
    int32_t v12; // bp-212, 0x419310
    char v13; // 0x419310
    int32_t len; // 0x419310
    int64_t str; // 0x419310
    char v14; // 0x419310
    while (true) {
      lab_0x419495:
        // 0x419495
        v11 = v10;
        str = v8;
        v14 = v9;
        if (v9 == 0) {
            unsigned char v15 = *(char *)str; // 0x4193f7
            int32_t v16 = *(int32_t *)((int64_t)(4 * v15 / 32) + (int64_t)&g24); // 0x419402
            if ((1 << (int32_t)(v15 % 32) & v16) == 0) {
                int32_t v17 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x41981b
                v14 = 1;
                if (v17 == 0) {
                    // break -> 0x419caf
                    break;
                }
                goto lab_0x4194a2;
            } else {
                // 0x419413
                v12 = v15;
                v9 = 0;
                len = 1;
                v13 = 1;
                if (v15 == 0) {
                    goto lab_0x419557_2;
                }
                goto lab_0x41944a;
            }
        } else {
            goto lab_0x4194a2;
        }
    }
  lab_0x419caf:
    // 0x419caf
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x419cc8
    function_4192f0();
    // 0x419ccd
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return &g127;
  lab_0x419557_2:
    // 0x419557
    *(int64_t *)(v7 + 8) = 1;
    struct _TYPEDEF___mbstate_t * v18 = (struct _TYPEDEF___mbstate_t *)2; // 0x41957a
    int64_t v19 = v6; // 0x41957a
    int64_t v20 = 0; // 0x41957a
    if ((int32_t)v2 < 3) {
        goto lab_0x41960b;
    } else {
        goto lab_0x419580;
    }
  lab_0x4194a2:;
    char v21 = v14;
    int64_t v22 = function_4085c0(str, (int64_t)__ctype_get_mb_cur_max()); // 0x4194b4
    int64_t v23 = function_40ab50((int64_t *)&v12, str, v22); // 0x4194ce
    v9 = v21;
    len = 1;
    v13 = 0;
    switch (v23) {
        case -1: {
            goto lab_0x41944a;
        }
        case -2: {
            // 0x419880
            v9 = v21;
            len = strlen((char *)str);
            v13 = 0;
            goto lab_0x41944a;
        }
        default: {
            int32_t v24 = v23; // 0x4194f1
            if (v23 == 0) {
                // 0x4194f3
                if (*(char *)str != 0) {
                    // 0x419c96
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x419caf;
                }
                // 0x41950e
                v24 = 1;
                if (v12 != 0) {
                    // 0x419cc8
                    function_4192f0();
                    // 0x419ccd
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return &g127;
                }
            }
            int32_t v25 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x419530
            v9 = v25 == 0 ? v21 : 0;
            len = v24;
            v13 = 1;
            if (v12 == 0) {
                goto lab_0x419557_2;
            }
            goto lab_0x41944a;
        }
    }
  lab_0x41944a:;
    int32_t v26 = len;
    int64_t v27; // bp-208, 0x419310
    if (str == (int64_t)&v27) {
        int64_t * dest_mem = memcpy((int64_t *)(v11 + 24), &v27, v26); // 0x41983f
        *(int64_t *)v11 = (int64_t)dest_mem;
    } else {
        // 0x41946c
        *(int64_t *)v11 = str;
    }
    int64_t v28 = v26;
    *(int64_t *)(v11 + 8) = v28;
    *(char *)(v11 + 16) = v13;
    if (v13 != 0) {
        // 0x41947a
        *(int32_t *)(v11 + 20) = v12;
    }
    // 0x419483
    v8 = str + v28;
    v10 = v11 + 48;
    goto lab_0x419495;
  lab_0x41960b:
    // 0x41960b
    *(int64_t *)v1 = 0;
    int64_t ps3 = 0; // bp-180, 0x41964f
    int64_t ps2 = 0; // bp-116, 0x41965a
    char v29 = 0; // 0x41967a
    char v30 = 0; // 0x41967a
    char v31 = 0; // 0x41967a
    int64_t v32 = a1; // 0x41967a
    int64_t v33 = a1; // 0x41967a
    int64_t v34 = 0; // 0x41967a
    goto lab_0x419680;
  lab_0x419580:;
    struct _TYPEDEF___mbstate_t * v137 = v18;
    int64_t v142 = v19 + 48;
    int32_t * v67 = (int32_t *)(v19 + 68);
    int64_t * v77 = (int64_t *)(v19 + 56);
    int64_t * str2 = (int64_t *)v142;
    int64_t v65 = v20; // 0x419585
    goto lab_0x4195ad;
  lab_0x419680:;
    int64_t v35 = v34;
    int64_t v36 = v33;
    int64_t v37 = v32;
    char v38 = v31;
    char v39 = v30;
    char v40 = v29;
    char v41 = v40; // 0x419682
    char v42 = v39; // 0x419682
    int64_t v43 = v37; // 0x419682
    int64_t v44 = v36; // 0x419682
    int64_t v45 = v35; // 0x419682
    int64_t v46; // 0x419310
    int64_t v47; // 0x419310
    int64_t v48; // 0x419310
    int64_t v49; // 0x419310
    char v50; // 0x419310
    char v51; // 0x419310
    char v52; // 0x419310
    char v53; // 0x419310
    int64_t v54; // 0x419310
    int64_t v55; // 0x419310
    char v56; // 0x419310
    char v57; // 0x419310
    char v58; // 0x419310
    char v59; // 0x419310
    char v60; // 0x419310
    int64_t v61; // 0x419310
    int64_t v62; // 0x419310
    int64_t v63; // 0x419310
    if (v38 == 0) {
        goto lab_0x419742;
    } else {
        // 0x419688
        v52 = v40;
        v56 = v39;
        v50 = v38;
        v54 = v37;
        v48 = v36;
        v59 = v58;
        v62 = v61;
        v46 = v35;
        v53 = v40;
        v57 = v39;
        v51 = v38;
        v55 = v37;
        v49 = v36;
        v60 = v58;
        v63 = v61;
        v47 = v35;
        if (v58 != 0) {
            goto lab_0x419782;
        } else {
            goto lab_0x419692;
        }
    }
  lab_0x4195ad:;
    int64_t v64 = v65;
    int64_t v66 = 48 * v64 + v6; // 0x4195b5
    if (*(char *)(v19 + 64) != 0) {
        // 0x419590
        if (*(char *)(v66 + 16) == 0) {
            goto lab_0x4195bc;
        } else {
            // 0x419596
            if (*v67 == *(int32_t *)(v66 + 20)) {
                goto lab_0x4195d5;
            } else {
                goto lab_0x41959f;
            }
        }
    } else {
        goto lab_0x4195bc;
    }
  lab_0x419742:;
    int64_t v68 = v45;
    int64_t str4 = v44;
    int64_t v69 = v43;
    char v70 = v42;
    char v71 = v41;
    char v72 = v71; // 0x419746
    int32_t v73; // bp-84, 0x419310
    if (v71 != 0) {
        goto lab_0x4198c8;
    } else {
        unsigned char v74 = *(char *)str4; // 0x419750
        int32_t v75 = *(int32_t *)((int64_t)(4 * v74 / 32) + (int64_t)&g24); // 0x41975b
        if ((1 << (int32_t)(v74 % 32) & v75) == 0) {
            int32_t v76 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x4198b7
            v72 = 1;
            if (v76 == 0) {
                goto lab_0x419caf;
            } else {
                goto lab_0x4198c8;
            }
        } else {
            // 0x41976c
            v73 = v74;
            v53 = v71;
            v57 = v70;
            v51 = 1;
            v55 = v69;
            v49 = str4;
            v60 = 1;
            v63 = 1;
            v47 = v68;
            goto lab_0x419782;
        }
    }
  lab_0x4195bc:;
    int64_t n = *v77; // 0x4195bc
    if (n != *(int64_t *)(v66 + 8)) {
        goto lab_0x41959f;
    } else {
        int64_t str3 = *(int64_t *)v66; // 0x4195c6
        if (memcmp((int64_t *)*str2, (int64_t *)str3, (int32_t)n) != 0) {
            goto lab_0x41959f;
        } else {
            goto lab_0x4195d5;
        }
    }
  lab_0x4198c8:;
    char v78 = v72;
    int64_t v79 = function_4085c0(str4, (int64_t)__ctype_get_mb_cur_max()); // 0x4198d7
    int64_t v80 = function_40ab50((int64_t *)&v73, str4, v79); // 0x4198ee
    v52 = v78;
    v56 = v70;
    v50 = 1;
    v54 = v69;
    v48 = str4;
    v59 = 0;
    v62 = 1;
    v46 = v68;
    int64_t v81; // 0x419310
    switch (v80) {
        case -1: {
            goto lab_0x419692;
        }
        case -2: {
            int32_t len2 = strlen((char *)str4); // 0x419c2c
            v52 = v78;
            v56 = v70;
            v50 = 1;
            v54 = v69;
            v48 = str4;
            v59 = 0;
            v62 = len2;
            v46 = v68;
            goto lab_0x419692;
        }
        default: {
            // 0x41990b
            v81 = v80;
            if (v80 != 0) {
                goto lab_0x419930;
            } else {
                // 0x419910
                if (*(char *)str4 != 0) {
                    // 0x419c96
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x419caf;
                } else {
                    // 0x419925
                    v81 = 1;
                    if (v73 != 0) {
                        goto lab_0x419cc8;
                    } else {
                        goto lab_0x419930;
                    }
                }
            }
        }
    }
  lab_0x419782:;
    int32_t v82 = v73; // 0x419782
    if (v82 == 0) {
        // 0x4197d1
        function_41b140(v6);
        return 1;
    }
    int64_t v83 = v47;
    int64_t v84 = v63;
    char v85 = v60;
    int64_t v86 = v49;
    int64_t v87 = v55;
    char v88 = v51;
    char v89 = v57;
    char v90 = v53;
    int64_t v91 = 48 * v83 + v6; // 0x419791
    char v92 = v90; // 0x419798
    char v93 = v89; // 0x419798
    char v94 = v88; // 0x419798
    int64_t v95 = v87; // 0x419798
    int64_t v96 = v86; // 0x419798
    char v97 = v85; // 0x419798
    int64_t v98 = v84; // 0x419798
    int64_t v99 = v91; // 0x419798
    int64_t v100 = v83; // 0x419798
    int64_t v101; // 0x419310
    int64_t v102; // 0x419310
    int64_t v103; // 0x419310
    int64_t v104; // 0x419310
    char v105; // 0x419310
    char v106; // 0x419310
    char v107; // 0x419310
    int64_t v108; // 0x419310
    int64_t v109; // 0x419310
    char v110; // 0x419310
    char v111; // 0x419310
    char v112; // 0x419310
    int64_t v113; // 0x419310
    int64_t v114; // 0x419310
    if (*(char *)(v91 + 16) == 0) {
        goto lab_0x41969d;
    } else {
        // 0x41979e
        v106 = v90;
        v110 = v89;
        v105 = v88;
        v108 = v87;
        v103 = v86;
        v112 = v85;
        v113 = v84;
        v102 = v83;
        v107 = v90;
        v111 = v89;
        v109 = v87;
        v104 = v86;
        v114 = v84;
        v101 = v83;
        if (*(int32_t *)(v91 + 20) != v82) {
            goto lab_0x4196ab;
        } else {
            goto lab_0x4197a7;
        }
    }
  lab_0x419692:
    // 0x419692
    v92 = v52;
    v93 = v56;
    v94 = v50;
    v95 = v54;
    v96 = v48;
    v97 = v59;
    v98 = v62;
    v99 = 48 * v46 + v6;
    v100 = v46;
    goto lab_0x41969d;
  lab_0x41959f:;
    int64_t v139; // 0x419310
    int64_t v140; // 0x419310
    if (v64 == 0) {
        int64_t v184 = (int64_t)v137;
        *(int64_t *)(8 * v184 + v7) = v184;
        v139 = v184;
        v140 = 0;
        goto lab_0x4195eb;
    } else {
        // 0x4195a8
        v65 = v64 - *(int64_t *)(8 * v64 + v7);
        goto lab_0x4195ad;
    }
  lab_0x41969d:;
    int64_t v115 = v100;
    int64_t v116 = v99;
    int64_t n2 = v98;
    char v117 = v97;
    int64_t str6 = v96;
    int64_t v118 = v95;
    char v119 = v94;
    char v120 = v93;
    char v121 = v92;
    v106 = v121;
    v110 = v120;
    v105 = v119;
    v108 = v118;
    v103 = str6;
    v112 = v117;
    v113 = n2;
    v102 = v115;
    int64_t v122; // 0x419310
    int64_t v123; // 0x419310
    int64_t v124; // 0x419310
    int64_t v125; // 0x419310
    char v126; // 0x419310
    char v127; // 0x419310
    char v128; // 0x419310
    int64_t v129; // 0x419310
    int64_t v130; // 0x419310
    char v131; // 0x419310
    char v132; // 0x419310
    char v133; // 0x419310
    int64_t v134; // 0x419310
    int64_t v135; // 0x419310
    if (*(int64_t *)(v116 + 8) == n2) {
        int64_t str5 = *(int64_t *)v116; // 0x41995c
        int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str6, (int32_t)n2); // 0x41995f
        v107 = v121;
        v111 = v120;
        v109 = v118;
        v104 = str6;
        v114 = n2;
        v101 = v115;
        if (memcmp_rc == 0) {
            goto lab_0x4197a7;
        } else {
            // 0x41996c
            v128 = v121;
            v131 = v120;
            v129 = v118;
            v124 = str6;
            v134 = n2;
            v123 = 0;
            v127 = v121;
            v132 = v120;
            v126 = v119;
            v130 = v118;
            v125 = str6;
            v133 = v117;
            v135 = n2;
            v122 = v115;
            if (v115 == 0) {
                goto lab_0x4196c1;
            } else {
                goto lab_0x419975;
            }
        }
    } else {
        goto lab_0x4196ab;
    }
  lab_0x4195d5:;
    int64_t v136 = (int64_t)v137;
    int64_t v138 = v64 + 1; // 0x4195dc
    *(int64_t *)(8 * v136 + v7) = v136 - v138;
    v139 = v136;
    v140 = v138;
    goto lab_0x4195eb;
  lab_0x419930:;
    int32_t v183 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x41993c
    v53 = v183 == 0 ? v78 : 0;
    v57 = v70;
    v51 = 1;
    v55 = v69;
    v49 = str4;
    v60 = 1;
    v63 = v81;
    v47 = v68;
    goto lab_0x419782;
  lab_0x4196ab:
    // 0x4196ab
    v128 = v106;
    v131 = v110;
    v129 = v108;
    v124 = v103;
    v134 = v113;
    v123 = v102;
    v127 = v106;
    v132 = v110;
    v126 = v105;
    v130 = v108;
    v125 = v103;
    v133 = v112;
    v135 = v113;
    v122 = v102;
    if (v102 != 0) {
        goto lab_0x419975;
    } else {
        goto lab_0x4196c1;
    }
  lab_0x4195eb:;
    int64_t v141 = v139 + 1; // 0x4195eb
    v18 = (struct _TYPEDEF___mbstate_t *)v141;
    v19 = v142;
    v20 = v140;
    if (v141 != v4) {
        goto lab_0x419580;
    } else {
        goto lab_0x41960b;
    }
  lab_0x4197a7:;
    int64_t v143 = v109;
    int64_t v144 = v101 + 1; // 0x4197ab
    v41 = v107;
    v42 = v111;
    v43 = v143;
    v44 = v114 + v104;
    v45 = v144;
    if (v144 == v4) {
        // 0x4197c0
        *(int64_t *)v1 = v143;
        // 0x4197d1
        function_41b140(v6);
        return 1;
    }
    goto lab_0x419742;
  lab_0x419975:;
    int64_t v145 = *(int64_t *)(8 * v122 + v7); // 0x419975
    int64_t v146 = v122 - v145; // 0x419981
    char v147 = v132; // 0x419987
    int64_t v148 = v130; // 0x419987
    int64_t v149 = v122; // 0x419987
    char v150 = v132; // 0x419987
    int64_t v151 = v130; // 0x419987
    int64_t v152 = v145; // 0x419987
    if (v145 == 0) {
        goto lab_0x419680_2;
    } else {
        goto lab_0x4199be;
    }
  lab_0x4196c1:;
    int64_t str7 = v129;
    char v153 = v131;
    char v154 = v153; // 0x4196c8
    int32_t v155; // bp-148, 0x419310
    int64_t v156; // 0x419310
    char v157; // 0x419310
    if (v153 != 0) {
        goto lab_0x419b63;
    } else {
        unsigned char v158 = *(char *)str7; // 0x4196d5
        int32_t v159 = *(int32_t *)((int64_t)(4 * v158 / 32) + (int64_t)&g24); // 0x4196e0
        if ((1 << (int32_t)(v158 % 32) & v159) == 0) {
            int32_t v160 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x419b4f
            v154 = 1;
            if (v160 == 0) {
                goto lab_0x419caf;
            } else {
                goto lab_0x419b63;
            }
        } else {
            // 0x4196f1
            v155 = v158;
            v157 = v153;
            v156 = 1;
            goto lab_0x419713;
        }
    }
  lab_0x419680_2:
    // 0x419680
    v29 = v127;
    v30 = v147;
    v31 = v126;
    v32 = v148;
    v33 = v125;
    v58 = v133;
    v61 = v135;
    v34 = v149;
    goto lab_0x419680;
  lab_0x4199be:;
    int64_t str8 = v151;
    char v161 = v150;
    char v162 = v161; // 0x4199c5
    int32_t v163; // 0x419310
    int64_t v164; // 0x419310
    int64_t v165; // 0x419310
    char v166; // 0x419310
    if (v161 != 0) {
        goto lab_0x419a3b;
    } else {
        unsigned char v167 = *(char *)str8; // 0x4199ce
        int32_t v168 = *(int32_t *)((int64_t)(4 * v167 / 32) + (int64_t)&g24); // 0x4199d9
        if ((1 << (int32_t)(v167 % 32) & v168) == 0) {
            int32_t v169 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x419a27
            v162 = 1;
            if (v169 == 0) {
                goto lab_0x419caf;
            } else {
                goto lab_0x419a3b;
            }
        } else {
            int32_t v170 = v167; // 0x4199fb
            v155 = v170;
            v163 = v170;
            v166 = v161;
            v165 = 1;
            v164 = v167;
            goto lab_0x419a08;
        }
    }
  lab_0x419b63:;
    int64_t v171 = function_4085c0(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x419b75
    int64_t v172 = function_40ab50((int64_t *)&v155, str7, v171); // 0x419b92
    len3 = -1;
    int64_t v173; // 0x419310
    switch (v172) {
        case -1: {
            goto lab_0x419721;
        }
        case -2: {
            // 0x419c77
            len3 = strlen((char *)str7);
            goto lab_0x419721;
        }
        default: {
            // 0x419bb2
            v173 = v172;
            if (v172 != 0) {
                goto lab_0x419be0;
            } else {
                // 0x419bb7
                if (*(char *)str7 != 0) {
                    // 0x419c96
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x419caf;
                } else {
                    // 0x419bd2
                    v173 = 1;
                    if (v155 != 0) {
                        goto lab_0x419cc8;
                    } else {
                        goto lab_0x419be0;
                    }
                }
            }
        }
    }
  lab_0x419a3b:;
    char v174 = v162;
    int64_t v175 = function_4085c0(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x419a4d
    int64_t v176 = function_40ab50((int64_t *)&v155, str8, v175); // 0x419a67
    char v177 = v174; // 0x419310
    int64_t len4 = 1; // 0x419310
    int64_t v178; // 0x419310
    switch (v176) {
        case -1: {
            goto lab_0x41999f;
        }
        case -2: {
            // 0x419b00
            v177 = v174;
            len4 = strlen((char *)str8);
            goto lab_0x41999f;
        }
        default: {
            // 0x419a83
            v178 = v176;
            if (v176 != 0) {
                goto lab_0x419ab1;
            } else {
                // 0x419a88
                if (*(char *)str8 != 0) {
                    // 0x419c96
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    goto lab_0x419caf;
                } else {
                    // 0x419aa3
                    v178 = 1;
                    if (v155 != 0) {
                        goto lab_0x419ccd;
                    } else {
                        goto lab_0x419ab1;
                    }
                }
            }
        }
    }
  lab_0x41999f:;
    int64_t v179 = len4 + str8; // 0x4199ad
    int64_t v180 = v152 - 1; // 0x4199b4
    v147 = v177;
    v148 = v179;
    v149 = v146;
    v150 = v177;
    v151 = v179;
    v152 = v180;
    if (v180 == 0) {
        goto lab_0x419680_2;
    } else {
        goto lab_0x4199be;
    }
  lab_0x419be0:;
    int32_t v181 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x419bf2
    v157 = v181 == 0 ? v154 : 0;
    v156 = v173;
    goto lab_0x419713;
  lab_0x419713:
    // 0x419713
    v41 = v128;
    v42 = v157;
    v43 = v156 + str7;
    v44 = v134 + v124;
    v45 = v123;
    goto lab_0x419742;
  lab_0x419ab1:;
    int32_t v182 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x419ac3
    v163 = v155;
    v166 = v182 == 0 ? v174 : 0;
    v165 = v178;
    v164 = v182;
    goto lab_0x419a08;
  lab_0x419a08:
    // 0x419a08
    len3 = v164;
    v177 = v166;
    len4 = v165;
    if (v163 != 0) {
        goto lab_0x41999f;
    } else {
        goto lab_0x419721;
    }
}
// Address range: 0x419cf0 - 0x41abc0
int64_t function_419cf0(int64_t result, int64_t str2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x419cf0
    int64_t v1; // 0x419cf0
    char v2 = v1;
    int64_t v3; // 0x419cf0
    int64_t v4; // 0x419cf0
    int64_t v5; // 0x419cf0
    int64_t v6; // 0x419cf0
    int64_t v7; // 0x419cf0
    int64_t v8; // 0x419cf0
    int64_t v9; // 0x419cf0
    int64_t v10; // 0x419cf0
    int64_t result2; // 0x419cf0
    int64_t v11; // 0x419cf0
    int64_t v12; // 0x419cf0
    char v13; // 0x419cf0
    int64_t v14; // 0x419cf0
    int64_t v15; // 0x419db2
    int64_t v16; // 0x419daa
    if (__ctype_get_mb_cur_max() < 2) {
        // 0x419d16
        if (v2 == 0) {
            // 0x419e4d
            return result;
        }
        char v17 = v1;
        if (v17 == 0) {
            // 0x419e4d
            return 0;
        }
        // 0x419daa
        v10 = 1;
        v13 = v17;
        v14 = 0;
        v11 = result;
        v6 = 0;
        v8 = str2;
        v3 = 0;
        while (true) {
          lab_0x419daa:;
            int64_t str = v8;
            int64_t v18 = v6;
            int64_t v19 = v11;
            int64_t v20 = v14;
            v15 = v19 + 1;
            int64_t v21; // 0x419cf0
            if (v13 == v2) {
                char v22 = *(char *)(str2 + 1); // 0x419e60
                result2 = v19;
                if (v22 == 0) {
                    // break -> 0x419e4d
                    break;
                }
                char v23 = *(char *)v15; // 0x419e69
                result2 = 0;
                if (v23 == 0) {
                    // break -> 0x419e4d
                    break;
                }
                int64_t v24 = v20 + 2; // 0x419e76
                v21 = v24;
                if (v22 == v23) {
                    int64_t v25 = v24; // 0x419e8e
                    char v26 = *(char *)(str2 - v20 + v25); // 0x419eaa
                    result2 = v19;
                    if (v26 == 0) {
                        return result2;
                    }
                    char v27 = *(char *)(v19 - v20 + v25); // 0x419e90
                    result2 = 0;
                    if (v27 == 0) {
                        return result2;
                    }
                    // 0x419e9d
                    v25++;
                    v21 = v25;
                    while (v26 == v27) {
                        // 0x419eaa
                        v26 = *(char *)(str2 - v20 + v25);
                        result2 = v19;
                        if (v26 == 0) {
                            return result2;
                        }
                        // 0x419e90
                        v27 = *(char *)(v19 - v20 + v25);
                        result2 = 0;
                        if (v27 == 0) {
                            return result2;
                        }
                        // 0x419e9d
                        v25++;
                        v21 = v25;
                    }
                }
            } else {
                // 0x419dbf
                v21 = v20 + 1;
                result2 = 0;
                if (*(char *)v15 == 0) {
                    // break -> 0x419e4d
                    break;
                }
            }
            // 0x419dc9
            v16 = v3 + 1;
            v12 = v21;
            unsigned char v28 = (char)(v16 >= 10) & (char)v10; // 0x419dd0
            v9 = v10;
            v5 = v18;
            v7 = str;
            if (v28 == 0) {
                goto lab_0x419da0;
            } else {
                int64_t v29 = v28; // 0x419dd0
                v9 = v29;
                v5 = v18;
                v7 = str;
                if (v12 >= 5 * v16) {
                    // 0x419d48
                    v4 = v18;
                    if (str == 0) {
                        goto lab_0x419d6f;
                    } else {
                        int64_t v30 = str + (int64_t)strnlen((char *)str, (int32_t)(v12 - v18)); // 0x419d66
                        v4 = v12;
                        v9 = v29;
                        v5 = v12;
                        v7 = v30;
                        if (*(char *)v30 != 0) {
                            goto lab_0x419da0;
                        } else {
                            goto lab_0x419d6f;
                        }
                    }
                } else {
                    goto lab_0x419da0;
                }
            }
        }
      lab_0x419e4d_2:
        // 0x419e4d
        return result2;
    }
    int64_t ps = 0; // bp-372, 0x419e0b
    int32_t * v31 = (int32_t *)((v1 / 8 & 28) + (int64_t)&g24); // 0x419e1a
    int32_t v32 = 1 << (int32_t)(v2 % 32);
    int32_t v33; // 0x419cf0
    int32_t v34; // 0x419cf0
    char v35; // 0x419cf0
    int64_t v36; // 0x419cf0
    int32_t v37; // bp-340, 0x419cf0
    bool v38; // 0x419cf0
    int64_t v39; // 0x419cf0
    int64_t len; // 0x419cf0
    if ((*v31 & v32) == 0) {
        // 0x41aa30
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps) == 0) {
          lab_0x41ab8c_5:
            // 0x41ab8c
            __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
            // 0x41aba5
            __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
            return &g127;
        }
        int64_t v40 = function_4085c0(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x41aa55
        int64_t v41 = function_40ab50((int64_t *)&v37, str2, v40); // 0x41aa68
        len = 1;
        v38 = true;
        switch (v41) {
            case -1: {
                goto lab_0x419ec7;
            }
            case -2: {
                // 0x41ab3e
                len = strlen((char *)str2);
                v38 = true;
                goto lab_0x419ec7;
            }
            default: {
                // 0x41aa86
                if (v41 == 0) {
                    if (v2 != 0) {
                        // 0x41aba5
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    }
                    int32_t v42; // 0x41aaa2
                    if (v42 != 0) {
                      lab_0x41aaaa_6:
                        // 0x41aaaa
                        function_4192f0();
                    }
                }
                // 0x41aab0
                mbsinit((struct _TYPEDEF___mbstate_t *)&ps);
                v33 = v37;
                v39 = v41;
                int32_t v43; // 0x419cf0
                v34 = v43;
                char v44; // 0x419cf0
                v35 = v44;
                int64_t v45; // 0x419cf0
                v36 = v45;
                goto lab_0x419e42;
            }
        }
    } else {
        int32_t v46 = v2; // 0x419e34
        v37 = v46;
        v33 = v46;
        v39 = 1;
        goto lab_0x419e42;
    }
  lab_0x419da0:
    // 0x419da0
    v10 = v9;
    v13 = *(char *)v15;
    v14 = v12;
    v11 = v15;
    v6 = v5;
    v8 = v7;
    v3 = v16;
    goto lab_0x419daa;
  lab_0x419d6f:;
    int32_t len2 = strlen((char *)str2); // 0x419d76
    char v47; // bp-120, 0x419cf0
    int64_t v48 = function_419160(v15, str2, (int64_t)len2, (int64_t *)&v47, v4); // 0x419d8c
    v9 = v48;
    v5 = v4;
    v7 = 0;
    if ((char)v48 != 0) {
        // 0x41ab31
        result2 = v47;
        goto lab_0x419e4d_2;
    }
    goto lab_0x419da0;
  lab_0x41a203:;
    // 0x41a203
    int64_t str3; // 0x419cf0
    int64_t v49 = function_4085c0(str3, (int64_t)__ctype_get_mb_cur_max()); // 0x41a216
    int32_t v50; // bp-84, 0x419cf0
    int64_t v51 = function_40ab50((int64_t *)&v50, str3, v49); // 0x41a235
    int64_t len3 = 1; // 0x419cf0
    char v52 = 0; // 0x419cf0
    int64_t ps2; // bp-116, 0x419cf0
    int64_t str6; // 0x419cf0
    switch (v51) {
        case -1: {
            goto lab_0x41a137;
        }
        case -2: {
            // 0x41a5e8
            len3 = strlen((char *)str3);
            v52 = 0;
            goto lab_0x41a137;
        }
        default: {
            // 0x41a256
            if (v51 == 0) {
                char v53 = *(char *)str3; // 0x41a26f
                if (v53 != 0) {
                    // 0x41aba5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g127;
                }
                int32_t v54 = v50; // 0x41a278
                if (v54 != 0) {
                    goto lab_0x41aaaa_6;
                }
            }
            // 0x41a287
            if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) != 0) {
                // 0x41a2a0
                v47 = 0;
            }
            // 0x41a2a8
            result2 = str6;
            len3 = v51;
            v52 = 1;
            if (v50 == 0) {
                // 0x419e4d
                return result2;
            }
            goto lab_0x41a137;
        }
    }
  lab_0x41a137:;
    // 0x41a137
    int64_t v55; // 0x419cf0
    int64_t v56 = v55 + 1;
    int64_t str5; // 0x419cf0
    char * str4 = (char *)str5;
    char v57 = v52;
    int64_t v58 = len3;
    char v59; // 0x419cf0
    char v60 = v59; // 0x41a13f
    int32_t v61; // 0x419cf0
    int32_t v62; // bp-148, 0x419cf0
    int32_t v63; // 0x419cf0
    int64_t ps3; // bp-180, 0x419cf0
    char v64; // 0x419cf0
    if (v59 != 0) {
        goto lab_0x41a345;
    } else {
        unsigned char v65 = *str4; // 0x41a14d
        int32_t v66 = *(int32_t *)((int64_t)(4 * v65 / 32) + (int64_t)&g24); // 0x41a158
        if ((1 << (int32_t)(v65 % 32) & v66) == 0) {
            int32_t v67 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x41a330
            v60 = 1;
            if (v67 == 0) {
                // break (via goto) -> 0x41ab8c
                goto lab_0x41ab8c_5;
            }
            goto lab_0x41a345;
        } else {
            int32_t v68 = v65; // 0x41a180
            v62 = v68;
            v63 = 1;
            v64 = v59;
            v61 = v68;
            if (v65 == 0) {
                // 0x419e4d
                return 0;
            }
            goto lab_0x41a19e;
        }
    }
  lab_0x41a345:;
    char v69 = v60;
    int64_t v70 = function_4085c0(str5, (int64_t)__ctype_get_mb_cur_max()); // 0x41a358
    int64_t v71 = function_40ab50((int64_t *)&v62, str5, v70); // 0x41a377
    int32_t len4 = 1; // 0x419cf0
    char v72 = v69; // 0x419cf0
    switch (v71) {
        case -1: {
            goto lab_0x41a2ec;
        }
        case -2: {
            // 0x41a618
            len4 = strlen(str4);
            v72 = v69;
            goto lab_0x41a2ec;
        }
        default: {
            int32_t v73 = v71; // 0x41a39b
            if (v71 == 0) {
                // 0x41a39d
                if (*str4 != 0) {
                    // 0x41aba5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g127;
                }
                // 0x41a3ba
                v73 = 1;
                if (v62 != 0) {
                    goto lab_0x41aaaa_6;
                }
            }
            int32_t v74 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps3); // 0x41a3d9
            v63 = v73;
            v64 = v74 == 0 ? v69 : 0;
            v61 = v62;
            if (v62 == 0) {
                // 0x419e4d
                return 0;
            }
            goto lab_0x41a19e;
        }
    }
  lab_0x41a2ec:;
    int32_t n = len4;
    int64_t v75; // 0x419cf0
    int64_t v76 = v75; // 0x41a2fc
    char v77; // 0x419cf0
    char v78 = v77; // 0x41a2fc
    char v79; // 0x419cf0
    char v80 = v79; // 0x41a2fc
    int128_t v81; // 0x419cf0
    int128_t v82 = v81; // 0x41a2fc
    int64_t v83; // 0x419cf0
    int64_t v84 = v83; // 0x41a2fc
    int32_t v85; // 0x419cf0
    int32_t v86 = v85; // 0x41a2fc
    int32_t v87 = n; // 0x41a2fc
    char v88; // 0x419cf0
    char v89 = v88; // 0x41a2fc
    int64_t v90; // 0x419cf0
    int64_t v91 = v90; // 0x41a2fc
    int64_t v92 = v56; // 0x41a2fc
    int64_t v93; // 0x419cf0
    int64_t v94 = v93; // 0x41a2fc
    if (v58 != (int64_t)n) {
        // break -> 0x41a302
        goto lab_0x41a302_3;
    }
    int32_t memcmp_rc = memcmp((int64_t *)str5, (int64_t *)str3, n); // 0x41a438
    int32_t v95 = n; // 0x41a442
    char v96 = v72; // 0x41a442
    bool v97 = memcmp_rc == 0; // 0x41a442
    goto lab_0x41a1b6;
  lab_0x41a19e:;
    char v305 = v64;
    int32_t v306 = v63;
    len4 = v306;
    v72 = v305;
    if (v57 == 0) {
        goto lab_0x41a2ec;
    } else {
        // 0x41a1ac
        v95 = v306;
        v96 = v305;
        v97 = v50 == v61;
        goto lab_0x41a1b6;
    }
  lab_0x41a1b6:;
    int32_t v98 = v95;
    v76 = v75;
    v78 = v77;
    v80 = v79;
    v82 = v81;
    v84 = v83;
    v86 = v85;
    v87 = v98;
    v89 = v88;
    v91 = v90;
    v92 = v56;
    v94 = v93;
    if (!v97) {
        // break -> 0x41a302
        goto lab_0x41a302_3;
    }
    int64_t v99 = v58 + str3; // 0x41a1ed
    int64_t v100 = str5 + (int64_t)v98; // 0x41a1ed
    char v101 = v96; // 0x41a1ed
    v55 = v56;
    goto lab_0x41a1f5;
  lab_0x41a539:;
    // 0x41a539
    int128_t v104; // 0x419cf0
    int128_t v105 = v104;
    int64_t v106 = function_4085c0(str6, (int64_t)__ctype_get_mb_cur_max()); // 0x41a550
    int32_t v107; // bp-212, 0x419cf0
    int64_t v108 = function_40ab50((int64_t *)&v107, str6, v106); // 0x41a567
    int32_t len5 = 1; // 0x419cf0
    int32_t v109; // 0x419cf0
    int32_t v110; // 0x419cf0
    int64_t ps4; // bp-244, 0x419cf0
    int128_t v111; // 0x419cf0
    switch (v108) {
        case -1: {
            goto lab_0x41a494;
        }
        case -2: {
            // 0x41a808
            len5 = strlen((char *)str6);
            goto lab_0x41a494;
        }
        default: {
            int32_t v112 = v108; // 0x41a58b
            if (v108 == 0) {
                // 0x41a58d
                if (*(char *)str6 != 0) {
                    // 0x41aba5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g127;
                }
                // 0x41a5aa
                v112 = 1;
                if (v107 != 0) {
                    goto lab_0x41aaaa_6;
                }
            }
            int32_t v113 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x41a5c5
            v109 = v107;
            v111 = v113 == 0 ? v105 : 0;
            v110 = v112;
            goto lab_0x419f80;
        }
    }
  lab_0x41a494:;
    int32_t v114 = len5;
    uint64_t v115; // 0x419cf0
    int64_t v116; // 0x419cf0
    unsigned char v117 = (char)(v115 >= 10) & (char)v116; // 0x41a49b
    int64_t v118; // 0x419cf0
    int64_t v119; // 0x419cf0
    int64_t v120; // 0x419cf0
    int128_t v121; // 0x419cf0
    int128_t v122; // 0x419cf0
    int32_t v123; // 0x419cf0
    int32_t v124; // 0x419cf0
    int128_t v125; // 0x419cf0
    int128_t v126; // 0x419cf0
    char v127; // 0x419cf0
    char v128; // 0x419cf0
    int64_t v129; // 0x419cf0
    int64_t v130; // 0x419cf0
    int64_t v131; // 0x419cf0
    int64_t v132; // 0x419cf0
    char v133; // 0x419cf0
    char v134; // 0x419cf0
    char v135; // 0x419cf0
    char v136; // 0x419cf0
    int64_t v137; // 0x419cf0
    int64_t v138; // 0x419cf0
    if (v117 == 0) {
        // 0x41a658
        v132 = v131;
        v136 = v135;
        v134 = v133;
        v125 = v105;
        v138 = v137;
        v123 = v114;
        v121 = 0;
        v128 = v127;
        v130 = v129;
        v120 = v119 + 1;
        v118 = v116;
        goto lab_0x41a4b8;
    } else {
        // 0x41a4a4
        v126 = v105;
        v124 = v114;
        v122 = 0;
        if (v119 >= 5 * v115) {
            goto lab_0x41a668;
        } else {
            // 0x41a4b1
            v132 = v131;
            v136 = v135;
            v134 = v133;
            v125 = v105;
            v138 = v137;
            v123 = v114;
            v121 = 0;
            v128 = v127;
            v130 = v129;
            v120 = v119 + 1;
            v118 = v117;
            goto lab_0x41a4b8;
        }
    }
  lab_0x419f80:
    // 0x419f80
    if (v109 == 0) {
        // 0x419e4d
        return 0;
    }
    int32_t v139 = v110;
    int128_t v140 = v111;
    unsigned char v141 = (char)(v115 >= 10) & (char)v116; // 0x419f98
    int64_t v142; // 0x419cf0
    int64_t v143; // 0x419cf0
    int128_t v144; // 0x419cf0
    int32_t v145; // 0x419cf0
    int128_t v146; // 0x419cf0
    char v147; // 0x419cf0
    int64_t v148; // 0x419cf0
    int64_t v149; // 0x419cf0
    char v150; // 0x419cf0
    char v151; // 0x419cf0
    int64_t v152; // 0x419cf0
    if (v141 == 0) {
        // 0x41a648
        v149 = v131;
        v151 = v135;
        v150 = v133;
        v146 = v140;
        v152 = v137;
        v145 = v139;
        v144 = 1;
        v147 = v127;
        v148 = v129;
        v143 = v119 + 1;
        v142 = v116;
        goto lab_0x419fb5;
    } else {
        // 0x419fa1
        v126 = v140;
        v124 = v139;
        v122 = 1;
        if (v119 >= 5 * v115) {
            goto lab_0x41a668;
        } else {
            // 0x419fae
            v149 = v131;
            v151 = v135;
            v150 = v133;
            v146 = v140;
            v152 = v137;
            v145 = v139;
            v144 = 1;
            v147 = v127;
            v148 = v129;
            v143 = v119 + 1;
            v142 = v141;
            goto lab_0x419fb5;
        }
    }
  lab_0x41a4b8:;
    int64_t v153 = v118;
    int64_t v154 = v120;
    int64_t v155 = v130;
    char v156 = v128;
    int32_t n2 = v123;
    int64_t v157 = v138;
    int128_t v158 = v125;
    char v159 = v134;
    char v160 = v136;
    int64_t v161 = v132;
    int64_t v162 = n2; // 0x41a4b8
    int64_t v163 = v161; // 0x41a4c5
    char v164 = v160; // 0x41a4c5
    char v165 = v159; // 0x41a4c5
    int128_t v166 = v158; // 0x41a4c5
    int64_t v167 = v157; // 0x41a4c5
    int32_t v168; // 0x419cf0
    int32_t v169 = v168; // 0x41a4c5
    char v170 = v156; // 0x41a4c5
    int64_t v171 = v155; // 0x41a4c5
    int64_t v172 = v154; // 0x41a4c5
    int64_t v173 = v153; // 0x41a4c5
    int64_t v174 = v162; // 0x41a4c5
    int64_t v175; // 0x419cf0
    int64_t v176; // 0x419cf0
    int128_t v177; // 0x419cf0
    int32_t v178; // 0x419cf0
    int128_t v179; // 0x419cf0
    char v180; // 0x419cf0
    int64_t v181; // 0x419cf0
    int64_t v182; // 0x419cf0
    char v183; // 0x419cf0
    char v184; // 0x419cf0
    int64_t v185; // 0x419cf0
    int64_t v186; // 0x419cf0
    if (v185 != v162) {
        goto lab_0x41a30a;
    } else {
        int32_t memcmp_rc2 = memcmp((int64_t *)str6, (int64_t *)str2, n2); // 0x41a4db
        v182 = v161;
        v184 = v160;
        v183 = v159;
        v179 = v158;
        v186 = v157;
        v178 = n2;
        v177 = v121;
        v180 = v156;
        v181 = v155;
        v176 = v154;
        v175 = v153;
        v163 = v161;
        v164 = v160;
        v165 = v159;
        v166 = v158;
        v167 = v157;
        v169 = v168;
        v170 = v156;
        v171 = v155;
        v172 = v154;
        v173 = v153;
        v174 = v162;
        if (memcmp_rc2 != 0) {
            goto lab_0x41a30a;
        } else {
            goto lab_0x419fd1;
        }
    }
  lab_0x41a668:;
    int128_t v187 = v122;
    int32_t v188 = v124;
    int128_t v189 = v126;
    int64_t v190 = v119 - v137; // 0x41a670
    int64_t v191; // 0x419cf0
    int64_t v192; // 0x419cf0
    char v193; // 0x419cf0
    char v194; // 0x419cf0
    char v195; // 0x419cf0
    int64_t v196; // 0x419cf0
    int64_t v197; // 0x419cf0
    int64_t v198; // 0x419cf0
    int64_t v199; // 0x419cf0
    int64_t v200; // 0x419cf0
    int64_t v201; // 0x419cf0
    int64_t v202; // 0x419cf0
    int64_t v203; // 0x419cf0
    int64_t v204; // 0x419cf0
    int64_t v205; // 0x419cf0
    char v206; // 0x419cf0
    char v207; // 0x419cf0
    char v208; // 0x419cf0
    char v209; // 0x419cf0
    char v210; // 0x419cf0
    char v211; // 0x419cf0
    char v212; // 0x419cf0
    char v213; // 0x419cf0
    char v214; // 0x419cf0
    if (v190 == 0) {
        // 0x41ab74
        v200 = v131;
        v209 = v135;
        if (v133 == 0) {
            goto lab_0x41a838;
        } else {
            // 0x41ab7c
            v201 = v131;
            v210 = v135;
            v207 = v133;
            v194 = v127;
            v196 = v129;
            v202 = v131;
            v211 = v135;
            v208 = v133;
            v195 = 0;
            v197 = v129;
            if (v127 == 0) {
                goto lab_0x41a88c;
            } else {
                goto lab_0x41a87e;
            }
        }
    } else {
        // 0x41a67b
        v204 = v131;
        v213 = v135;
        v192 = v190;
        if (v133 == 0) {
            goto lab_0x41a69f;
        } else {
            // 0x41a67f
            v203 = v131;
            v212 = v135;
            v198 = v129;
            v191 = v190;
            v205 = v131;
            v214 = v135;
            v206 = v133;
            v193 = v127;
            v199 = v129;
            if (v127 != 0) {
                goto lab_0x41a6e1;
            } else {
                goto lab_0x41a686;
            }
        }
    }
  lab_0x419fb5:;
    int64_t v215 = v142;
    int64_t v216 = v143;
    int64_t v217 = v148;
    char v218 = v147;
    int128_t v219 = v144;
    int32_t v220 = v145;
    int64_t v221 = v152;
    int128_t v222 = v146;
    char v223 = v150;
    char v224 = v151;
    int64_t v225 = v149;
    v132 = v225;
    v136 = v224;
    v134 = v223;
    v125 = v222;
    v138 = v221;
    v123 = v220;
    v121 = v219;
    v128 = v218;
    v130 = v217;
    v120 = v216;
    v118 = v215;
    bool v226; // 0x419cf0
    if (v226) {
        goto lab_0x41a4b8;
    } else {
        // 0x419fc0
        v182 = v225;
        v184 = v224;
        v183 = v223;
        v179 = v222;
        v186 = v221;
        v178 = v220;
        v177 = v219;
        v180 = v218;
        v181 = v217;
        v176 = v216;
        v175 = v215;
        v76 = v225;
        v78 = v224;
        v80 = v223;
        v82 = v222;
        v84 = v221;
        v86 = v220;
        v87 = v168;
        v89 = v218;
        v91 = v217;
        v92 = v216;
        v94 = v215;
        if (v107 != v37) {
            goto lab_0x41a302_3;
        } else {
            goto lab_0x419fd1;
        }
    }
  lab_0x41a30a:;
    int64_t v227 = v163; // 0x41a31e
    char v228 = v164; // 0x41a31e
    char v229 = v165; // 0x41a31e
    int64_t v230 = v174 + str6; // 0x41a31e
    int128_t v231 = v166; // 0x41a31e
    int64_t v232 = v167; // 0x41a31e
    int32_t v233 = v169; // 0x41a31e
    char v234 = v170; // 0x41a31e
    int64_t v235 = v171; // 0x41a31e
    int64_t v236 = v172; // 0x41a31e
    int64_t v237 = v115 + 1; // 0x41a31e
    int64_t v238 = v173; // 0x41a31e
    goto lab_0x419f20;
  lab_0x419fd1:
    // 0x419fd1
    v93 = v175;
    int64_t v244 = v176;
    v90 = v181;
    v88 = v180;
    v85 = v178;
    v83 = v186;
    v81 = v179;
    v79 = v183;
    v77 = v184;
    v75 = v182;
    int128_t v245 = __asm_movdqa((int128_t)str6); // 0x419fd6
    int128_t v246 = __asm_movdqa(0); // 0x419fef
    v47 = 0;
    int64_t v247 = __asm_movaps(v245); // 0x41a000
    int128_t v248 = __asm_movdqa(v177); // 0x41a010
    int128_t v249; // 0x419cf0
    int128_t v250 = __asm_movdqa(v249); // 0x41a023
    int64_t v251 = __asm_movaps(v246); // 0x41a02f
    __asm_movaps(v248);
    __asm_movaps(v250);
    ps2 = 0;
    int64_t v252; // 0x419cf0
    if ((*v31 & v32) == 0) {
        // 0x41a8b8
        if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
            // break -> 0x41ab8c
            goto lab_0x41ab8c_5;
        }
        // 0x41a8c8
        v47 = 1;
        int64_t v253 = function_4085c0(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x41a8e7
        int64_t v254 = function_40ab50((int64_t *)&v50, str2, v253); // 0x41a901
        result2 = -1;
        switch (v254) {
            case -1: {
                goto lab_0x419e4d_2;
            }
            case -2: {
                // 0x419e4d
                return strlen((char *)str2);
            }
            default: {
                int64_t v255 = v254; // 0x41a925
                if (v254 == 0) {
                    if (v2 != 0) {
                        // 0x41aba5
                        __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                        return &g127;
                    }
                    // 0x41a944
                    v255 = 1;
                    if (v50 != 0) {
                        goto lab_0x41aaaa_6;
                    }
                }
                int64_t v256 = v255;
                int32_t v257 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps2); // 0x41a963
                v252 = v256;
                if (v257 != 0) {
                    // 0x41a96c
                    v47 = 0;
                    v252 = v256;
                }
                goto lab_0x41a09a;
            }
        }
    } else {
        // 0x41a077
        v50 = v2;
        v252 = 1;
        goto lab_0x41a09a;
    }
  lab_0x41a838:;
    char v258 = v209;
    int64_t str7 = v200;
    char v259 = v258; // 0x41a83d
    int32_t v260; // 0x419cf0
    int32_t v261; // bp-276, 0x419cf0
    char v262; // 0x419cf0
    int64_t v263; // 0x419cf0
    int64_t v264; // 0x419cf0
    char v265; // 0x419cf0
    int64_t ps5; // bp-308, 0x419cf0
    char v266; // 0x419cf0
    if (v258 != 0) {
        goto lab_0x41a998;
    } else {
        unsigned char v267 = *(char *)str7; // 0x41a848
        int32_t v268 = *(int32_t *)((int64_t)(4 * v267 / 32) + (int64_t)&g24); // 0x41a853
        if ((1 << (int32_t)(v267 % 32) & v268) == 0) {
            int32_t v269 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x41a986
            v259 = 1;
            if (v269 == 0) {
                // break -> 0x41ab8c
                goto lab_0x41ab8c_5;
            }
            goto lab_0x41a998;
        } else {
            int32_t v270 = v267; // 0x41a875
            v261 = v270;
            v260 = v270;
            v264 = str7;
            v266 = v258;
            v265 = 1;
            v262 = 1;
            v263 = 1;
            goto lab_0x41a87e_2;
        }
    }
  lab_0x41a69f:;
    int64_t v271 = v192;
    char v272 = v213;
    int64_t str8 = v204;
    char v273 = v272; // 0x41a6a4
    if (v272 != 0) {
        goto lab_0x41a73f;
    } else {
        unsigned char v274 = *(char *)str8; // 0x41a6af
        int32_t v275 = *(int32_t *)((int64_t)(4 * v274 / 32) + (int64_t)&g24); // 0x41a6ba
        if ((1 << (int32_t)(v274 % 32) & v275) == 0) {
            int32_t v276 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x41a72d
            v273 = 1;
            if (v276 == 0) {
                // break -> 0x41ab8c
                goto lab_0x41ab8c_5;
            }
            goto lab_0x41a73f;
        } else {
            // 0x41a6c7
            v261 = v274;
            v205 = str8;
            v214 = v272;
            v206 = 1;
            v193 = 1;
            v199 = 1;
            goto lab_0x41a6e1;
        }
    }
  lab_0x41a302_3:
    // 0x41a302
    v163 = v76;
    v164 = v78;
    v165 = v80;
    v166 = v82;
    v167 = v84;
    v169 = v87;
    v170 = v89;
    v171 = v91;
    v172 = v92;
    v173 = v94;
    v174 = v86;
    goto lab_0x41a30a;
  lab_0x41a998:;
    char v277 = v259;
    int64_t v278 = function_4085c0(str7, (int64_t)__ctype_get_mb_cur_max()); // 0x41a9a8
    int64_t v279 = function_40ab50((int64_t *)&v261, str7, v278); // 0x41a9c1
    v202 = str7;
    v211 = v277;
    v208 = 1;
    v195 = 0;
    v197 = 1;
    switch (v279) {
        case -1: {
            goto lab_0x41a88c;
        }
        case -2: {
            int32_t len6 = strlen((char *)str7); // 0x41ab18
            v202 = str7;
            v211 = v277;
            v208 = 1;
            v195 = 0;
            v197 = len6;
            goto lab_0x41a88c;
        }
        default: {
            int64_t v280 = v279; // 0x41a9e2
            if (v279 == 0) {
                // 0x41a9e4
                if (*(char *)str7 != 0) {
                    // 0x41aba5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g127;
                }
                // 0x41a9fb
                v280 = 1;
                if (v261 != 0) {
                    goto lab_0x41aaaa_6;
                }
            }
            int32_t v281 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x41aa13
            v201 = str7;
            v210 = v281 == 0 ? v277 : 0;
            v207 = 1;
            v194 = 1;
            v196 = v280;
            goto lab_0x41a87e;
        }
    }
  lab_0x41a88c:;
    int64_t v282 = v202; // 0x41a894
    char v283 = v211; // 0x41a894
    char v284 = v208; // 0x41a894
    char v285 = v195; // 0x41a894
    int64_t v286 = v197; // 0x41a894
    int64_t v287 = 1; // 0x41a894
    goto lab_0x41a89a;
  lab_0x41a87e:
    // 0x41a87e
    v260 = v261;
    v264 = v201;
    v266 = v210;
    v265 = v207;
    v262 = v194;
    v263 = v196;
    goto lab_0x41a87e_2;
  lab_0x41a73f:;
    char v298 = v273;
    int64_t v299 = function_4085c0(str8, (int64_t)__ctype_get_mb_cur_max()); // 0x41a74f
    int64_t v300 = function_40ab50((int64_t *)&v261, str8, v299); // 0x41a768
    v203 = str8;
    v212 = v298;
    v198 = 1;
    v191 = v271;
    switch (v300) {
        case -1: {
            goto lab_0x41a686;
        }
        case -2: {
            int32_t len7 = strlen((char *)str8); // 0x41a7ed
            v203 = str8;
            v212 = v298;
            v198 = len7;
            v191 = v271;
            goto lab_0x41a686;
        }
        default: {
            int64_t v301 = v300; // 0x41a781
            if (v300 == 0) {
                // 0x41a783
                if (*(char *)str8 != 0) {
                    // 0x41aba5
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    return &g127;
                }
                // 0x41a79a
                v301 = 1;
                if (v261 != 0) {
                    goto lab_0x41aaaa_6;
                }
            }
            int32_t v302 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps5); // 0x41a7b2
            v205 = str8;
            v214 = v302 == 0 ? v298 : 0;
            v206 = 1;
            v193 = 1;
            v199 = v301;
            goto lab_0x41a6e1;
        }
    }
  lab_0x41a6e1:;
    int64_t v289 = v205; // 0x41a6e9
    char v290 = v214; // 0x41a6e9
    char v291 = v206; // 0x41a6e9
    char v292 = v193; // 0x41a6e9
    int64_t v293 = v199; // 0x41a6e9
    if (v261 != 0) {
        goto lab_0x41a686;
    } else {
        goto lab_0x41a6f6;
    }
  lab_0x41a686:;
    int64_t v303 = v198 + v203; // 0x41a690
    int64_t v304 = v191 - 1; // 0x41a695
    v204 = v303;
    v213 = v212;
    v192 = v304;
    v200 = v303;
    v209 = v212;
    if (v304 == 0) {
        goto lab_0x41a838;
    } else {
        goto lab_0x41a69f;
    }
  lab_0x41a09a:
    // 0x41a09a
    v99 = v252 + str2;
    v100 = v247 + (int64_t)v168;
    v101 = v251;
    v55 = v244;
    while (true) {
      lab_0x41a1f5:
        // 0x41a1f5
        v59 = v101;
        str5 = v100;
        str3 = v99;
        if (v47 == 0) {
            unsigned char v102 = *(char *)str3; // 0x41a0d8
            int32_t v103 = *(int32_t *)((int64_t)(4 * v102 / 32) + (int64_t)&g24); // 0x41a0e3
            if ((1 << (int32_t)(v102 % 32) & v103) == 0) {
                // 0x41a450
                if (mbsinit((struct _TYPEDEF___mbstate_t *)&ps2) == 0) {
                    // break (via goto) -> 0x41ab8c
                    goto lab_0x41ab8c_5;
                }
                // 0x41a465
                v47 = 1;
                goto lab_0x41a203;
            } else {
                // 0x41a0f4
                v50 = v102;
                result2 = str6;
                len3 = 1;
                v52 = 1;
                if (v102 == 0) {
                    // 0x419e4d
                    return result2;
                }
                goto lab_0x41a137;
            }
        } else {
            goto lab_0x41a203;
        }
    }
    goto lab_0x41a302_3;
  lab_0x41a89a:;
    int64_t v288 = v119 + 1; // 0x41a89a
    v149 = v282;
    v151 = v283;
    v150 = v284;
    v146 = v189;
    v152 = v119;
    v145 = v188;
    v144 = v187;
    v147 = v285;
    v148 = v286;
    v143 = v288;
    v142 = v287;
    v132 = v282;
    v136 = v283;
    v134 = v284;
    v125 = v189;
    v138 = v119;
    v123 = v188;
    v121 = v187;
    v128 = v285;
    v130 = v286;
    v120 = v288;
    v118 = v287;
    if ((char)v187 != 0) {
        goto lab_0x419fb5;
    } else {
        goto lab_0x41a4b8;
    }
  lab_0x41a87e_2:
    // 0x41a87e
    v289 = v264;
    v290 = v266;
    v291 = v265;
    v292 = v262;
    v293 = v263;
    v202 = v264;
    v211 = v266;
    v208 = v265;
    v195 = v262;
    v197 = v263;
    if (v260 == 0) {
        goto lab_0x41a6f6;
    } else {
        goto lab_0x41a88c;
    }
  lab_0x41a6f6:;
    int64_t v294 = function_419310(result, str2, (int64_t *)&v47); // 0x41a704
    if ((char)v294 != 0) {
        // 0x41ab31
        result2 = v47;
        goto lab_0x419e4d_2;
    }
    // 0x41a714
    v282 = v289;
    v283 = v290;
    v284 = v291;
    v285 = v292;
    v286 = v293;
    v287 = v294 & 0xffffffff;
    goto lab_0x41a89a;
  lab_0x419ec7:
    // 0x419ec7
    v226 = v38;
    v185 = len;
    ps5 = 0;
    ps4 = 0;
    v227 = str2;
    v228 = 0;
    v229 = 0;
    v230 = result;
    v231 = 0;
    v232 = 0;
    int32_t v295; // 0x419cf0
    v233 = v295;
    char v296; // 0x419cf0
    v234 = v296;
    int64_t v297; // 0x419cf0
    v235 = v297;
    v236 = 0;
    v237 = 0;
    v238 = 1;
    while (true) {
      lab_0x419f20:
        // 0x419f20
        v116 = v238;
        v115 = v237;
        v119 = v236;
        v129 = v235;
        v127 = v234;
        v168 = v233;
        v137 = v232;
        int128_t v239 = v231;
        str6 = v230;
        v133 = v229;
        v135 = v228;
        v131 = v227;
        v104 = v239;
        if ((char)v239 != 0) {
            goto lab_0x41a539;
        } else {
            unsigned char v240 = *(char *)str6; // 0x419f3e
            int32_t v241 = *(int32_t *)((int64_t)(4 * v240 / 32) + (int64_t)&g24); // 0x419f49
            if ((1 << (int32_t)(v240 % 32) & v241) == 0) {
                int32_t v242 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps4); // 0x41a524
                v104 = 1;
                if (v242 == 0) {
                    // break -> 0x41ab8c
                    break;
                }
                goto lab_0x41a539;
            } else {
                int32_t v243 = v240; // 0x419f71
                v107 = v243;
                v109 = v243;
                v111 = v239;
                v110 = 1;
                goto lab_0x419f80;
            }
        }
    }
  lab_0x41ab8c_5:
    // 0x41ab8c
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x41aba5
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    return &g127;
  lab_0x419e42:
    // 0x419e42
    len = v39;
    v38 = false;
    v295 = v34;
    v296 = v35;
    v297 = v36;
    if (v33 == 0) {
        // 0x419e4d
        return result;
    }
    goto lab_0x419ec7;
}
// Address range: 0x41abc0 - 0x41ae09
int64_t function_41abc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x41abc0
    int64_t outbytesleft3; // bp-4152, 0x41abc0
    int64_t v1 = &outbytesleft3; // 0x41abe6
    int64_t * cd = (int64_t *)a3; // 0x41ac04
    iconv(cd, NULL, NULL, NULL, NULL);
    int64_t inbuf = a1; // bp-4184, 0x41ac09
    int64_t inbytesleft = a2; // bp-4176, 0x41ac11
    char ** outbuf2; // 0x41abc0
    int32_t * outbytesleft2; // 0x41abc0
    int64_t v2; // 0x41abc0
    int64_t outbytesleft; // bp-4160, 0x41abc0
    int64_t outbuf; // bp-4168, 0x41abc0
    if (a2 != 0) {
        int64_t v3 = 0; // 0x41ac28
        outbuf = v1;
        outbytesleft = 0x1000;
        int32_t v4 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft); // 0x41ac54
        if (v4 == -1) {
            // 0x41ac5f
            if (*__errno_location() != 7) {
                // 0x41ac6b
            }
        }
        // 0x41ac20
        v3 += outbuf - v1;
        outbytesleft2 = (int32_t *)&outbytesleft;
        outbuf2 = (char **)&outbuf;
        v2 = v3;
        while (inbytesleft != 0) {
            // 0x41ac33
            outbuf = v1;
            outbytesleft = 0x1000;
            v4 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, (char **)&outbuf, (int32_t *)&outbytesleft);
            if (v4 == -1) {
                // 0x41ac5f
                if (*__errno_location() != 7) {
                    // 0x41ac6b
                    outbytesleft2 = (int32_t *)&outbytesleft;
                }
            }
            // 0x41ac20
            v3 += outbuf - v1;
            outbytesleft2 = (int32_t *)&outbytesleft;
            outbuf2 = (char **)&outbuf;
            v2 = v3;
        }
    } else {
        // 0x41abc0
        outbytesleft2 = (int32_t *)&outbytesleft;
        outbuf2 = (char **)&outbuf;
        v2 = 0;
    }
    goto lab_0x41ac74;
  lab_0x41ad3a:;
    // 0x41ad3a
    int64_t v8; // 0x41abc0
    int64_t v5; // 0x41acc9
    if (iconv(cd, NULL, NULL, (char **)&outbytesleft, (int32_t *)&outbytesleft3) != -1) {
        // 0x41ad56
        *(int64_t *)a4 = v8;
        *(int64_t *)a5 = v5;
        // 0x41ad78
        return 0;
    }
    goto lab_0x41adde;
  lab_0x41ac74:
    // 0x41ac74
    outbuf = v1;
    outbytesleft = 0x1000;
    if (iconv(cd, NULL, NULL, outbuf2, outbytesleft2) == -1) {
        // 0x41ad78
        return 0xffffffff;
    }
    int64_t size = outbuf - v1 + v2; // 0x41aca6
    if (size == 0) {
        // 0x41adc0
        *(int64_t *)a5 = 0;
        // 0x41ad78
        return 0;
    }
    // 0x41acc4
    v5 = 0x100000000 * size >> 32;
    int64_t * v6 = &outbuf; // 0x41acd0
    if (v5 > (int64_t)&outbytesleft) {
        int64_t * mem = malloc((int32_t)size); // 0x41ad94
        v6 = mem;
        if (mem == NULL) {
            // 0x41ada5
            *__errno_location() = 12;
            // 0x41ad78
            return 0xffffffff;
        }
    }
    int64_t * v7 = v6;
    v8 = (int64_t)v7;
    iconv(cd, NULL, NULL, NULL, NULL);
    outbuf = a2;
    outbytesleft = v8;
    inbytesleft = a1;
    outbytesleft3 = v5;
    if (a2 != 0) {
        while (iconv(cd, (char **)&inbytesleft, (int32_t *)&outbuf, (char **)&outbytesleft, (int32_t *)&outbytesleft3) != -1) {
            // 0x41ad30
            if (outbuf == 0) {
                goto lab_0x41ad3a;
            }
        }
        // 0x41add0
        if (*__errno_location() == 22) {
            goto lab_0x41ad3a;
        } else {
            goto lab_0x41adde;
        }
    } else {
        // 0x41acd6
        goto lab_0x41ad3a;
    }
  lab_0x41adde:
    // 0x41adde
    if (&outbytesleft != v7) {
        int32_t * v9 = __errno_location(); // 0x41aded
        free(v7);
    }
    // 0x41ad78
    return 0xffffffff;
}
// Address range: 0x41ae10 - 0x41afd5
int64_t function_41ae10(int64_t str, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t inbuf = str; // bp-88, 0x41ae21
    int32_t len = strlen((char *)str); // 0x41ae25
    int64_t v1 = len; // 0x41ae25
    int64_t inbytesleft = v1; // bp-80, 0x41ae2d
    int64_t v2 = len >= 0x10000000 ? v1 : 16 * v1; // 0x41ae3c
    int64_t size = v2 + 1; // 0x41ae40
    int64_t * mem = malloc((int32_t)size); // 0x41ae47
    int64_t result = (int64_t)mem; // 0x41ae47
    if (mem == NULL) {
        // 0x41afc8
        *__errno_location() = 12;
        // 0x41afb2
        return result;
    }
    int64_t * cd = (int64_t *)a2; // 0x41ae64
    iconv(cd, NULL, NULL, NULL, NULL);
    char * outbuf = (char *)mem; // bp-72, 0x41ae69
    int64_t outbytesleft = v2;
    int32_t v3 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, &outbuf, (int32_t *)&outbytesleft); // 0x41aeee
    int64_t v4 = result; // 0x41aef7
    int64_t v5 = result; // 0x41aef7
    int64_t v6 = size; // 0x41aef7
    int64_t v7; // 0x41ae10
    int64_t v8; // 0x41ae10
    int32_t * v9; // 0x41ae10
    if (v3 == -1) {
        int64_t v10 = size;
        int32_t * v11 = __errno_location(); // 0x41ae78
        int32_t v12 = *v11; // 0x41ae80
        v5 = v4;
        v6 = v10;
        while (v12 != 22) {
            // 0x41ae8b
            v8 = v4;
            if (v12 != 7) {
                goto lab_0x41afa7;
            }
            int64_t v13 = 2 * v10; // 0x41ae99
            v7 = v4;
            v9 = v11;
            if (v10 >= v13) {
                goto lab_0x41afa0_4;
            }
            int64_t * mem2 = realloc((int64_t *)v4, (int32_t)v13); // 0x41aeb0
            v7 = v4;
            v9 = v11;
            if (mem2 == NULL) {
                goto lab_0x41afa0_4;
            }
            int64_t v14 = (int64_t)outbuf - v4; // 0x41ae9e
            v4 = (int64_t)mem2;
            outbuf = (char *)(v14 + v4);
            outbytesleft = v13 + -1 - v14;
            int32_t v15 = iconv(cd, (char **)&inbuf, (int32_t *)&inbytesleft, &outbuf, (int32_t *)&outbytesleft); // 0x41aeee
            v5 = v4;
            v6 = v13;
            if (v15 != -1) {
                // break -> 0x41af4e
                break;
            }
            v10 = v13;
            v11 = __errno_location();
            v12 = *v11;
            v5 = v4;
            v6 = v10;
        }
    }
    int32_t v16 = iconv(cd, NULL, NULL, &outbuf, (int32_t *)&outbytesleft); // 0x41af5f
    int64_t v17 = v6; // 0x41af68
    int64_t v18 = v5; // 0x41af68
    int64_t v19 = v5; // 0x41af68
    int64_t v20 = v6; // 0x41af68
    if (v16 == -1) {
        int32_t * v21 = __errno_location(); // 0x41af00
        v8 = v18;
        while (*v21 == 7) {
            uint64_t v22 = v17;
            v17 = 2 * v22;
            v7 = v18;
            v9 = v21;
            if (v22 >= v17) {
                goto lab_0x41afa0_4;
            }
            int64_t * mem3 = realloc((int64_t *)v18, (int32_t)v17); // 0x41af29
            v7 = v18;
            v9 = v21;
            if (mem3 == NULL) {
                goto lab_0x41afa0_4;
            }
            int64_t v23 = (int64_t)outbuf - v18; // 0x41af1b
            v18 = (int64_t)mem3;
            outbuf = (char *)(v23 + v18);
            outbytesleft = v17 + -1 - v23;
            int32_t v24 = iconv(cd, NULL, NULL, &outbuf, (int32_t *)&outbytesleft); // 0x41af5f
            v19 = v18;
            v20 = v17;
            if (v24 != -1) {
                goto lab_0x41af6a;
            }
            v21 = __errno_location();
            v8 = v18;
        }
      lab_0x41afa7:
        // 0x41afa7
        free((int64_t *)v8);
        // 0x41afb2
        return 0;
    }
  lab_0x41af6a:;
    char * v25 = outbuf; // 0x41af6a
    outbuf = (char *)((int64_t)v25 + 1);
    *v25 = 0;
    uint64_t v26 = (int64_t)outbuf - v19; // 0x41af80
    int64_t result2 = v19; // 0x41af86
    if (v20 > v26) {
        int64_t * mem4 = realloc((int64_t *)v19, (int32_t)v26); // 0x41af8b
        result2 = mem4 != NULL ? (int64_t)mem4 : v19;
    }
    // 0x41afb2
    return result2;
  lab_0x41afa0_4:
    // 0x41afa0
    *v9 = 12;
    v8 = v7;
    goto lab_0x41afa7;
}
// Address range: 0x41afe0 - 0x41b0cc
int64_t function_41afe0(int64_t str, int64_t fromcode, int64_t a3) {
    // 0x41afe0
    int64_t v1; // 0x41afe0
    if ((char)v1 != 0) {
        char * tocode = (char *)a3; // 0x41affe
        if ((int32_t)function_418a20(fromcode, tocode, a3) != 0) {
            int64_t * cd = iconv_open(tocode, (char *)fromcode); // 0x41b02e
            if (cd == (int64_t *)-1) {
                // 0x41b017
                return 0;
            }
            int64_t v2 = function_41ae10(str, (int64_t)cd, a3, v1, v1); // 0x41b042
            if (v2 == 0) {
                int32_t * v3 = __errno_location(); // 0x41b0b0
                iconv_close(cd);
                // 0x41b017
                return 0;
            }
            int64_t result = v2; // 0x41b059
            if (iconv_close(cd) < 0) {
                int32_t * v4 = __errno_location(); // 0x41b05b
                free((int64_t *)v2);
                result = 0;
            }
            // 0x41b017
            return result;
        }
    }
    char * v5 = strdup((char *)str); // 0x41b00a
    int64_t result2 = (int64_t)v5; // 0x41b00a
    if (v5 != NULL) {
        // 0x41b017
        return result2;
    }
    // 0x41b080
    *__errno_location() = 12;
    return result2;
}
// Address range: 0x41b0d0 - 0x41b13c
int64_t function_41b0d0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x41b0d0
    if (a1 > 0xffffffffffffffef) {
        // 0x41b12e
        return 0;
    }
    int64_t * mem = malloc((int32_t)a1 + 16); // 0x41b0da
    int64_t result = 0; // 0x41b0e7
    if (mem != NULL) {
        int64_t v1 = (int64_t)mem; // 0x41b0da
        result = v1 + 16;
        *(int32_t *)(v1 + 12) = 0x1415fb4a;
        int64_t v2 = g122; // 0x41b11b
        g122 = result;
        *mem = v2;
    }
    // 0x41b12e
    return result;
}
// Address range: 0x41b140 - 0x41b1c6
int64_t function_41b140(int64_t a1) {
    if (a1 == 0 || *(int32_t *)(a1 - 4) != 0x1415fb4a) {
        // 0x41b14e
        int64_t result; // 0x41b140
        return result;
    }
    // 0x41b150
    if (g122 == 0) {
        // 0x41b14e
        return 0;
    }
    int64_t * v1 = &g122; // 0x41b184
    if (g122 == a1) {
      lab_0x41b1ac:;
        int64_t * v2 = (int64_t *)(a1 - 16); // 0x41b1ac
        *v1 = *v2;
        free(v2);
        return &g127;
    }
    int64_t * v3 = (int64_t *)(g122 - 16);
    int64_t result2 = *v3; // 0x41b198
    while (result2 != 0) {
        // 0x41b190
        v1 = v3;
        if (result2 == a1) {
            goto lab_0x41b1ac;
        }
        v3 = (int64_t *)(result2 - 16);
        result2 = *v3;
    }
    // 0x41b14e
    return result2;
}
// Address range: 0x41b1d0 - 0x41b3fd
int64_t function_41b1d0(int64_t str) {
    // 0x41b1d0
    if ((uint32_t)__ctype_get_mb_cur_max() < 2) {
        // 0x41b1ef
        return strlen((char *)str);
    }
    int64_t ps = 0; // bp-84, 0x41b20b
    char v1 = 0; // 0x41b219
    int64_t v2 = str; // 0x41b219
    int64_t v3 = 0; // 0x41b219
    int32_t v4; // 0x41b1d0
    int64_t v5; // 0x41b1d0
    int32_t v6; // bp-52, 0x41b1d0
    int64_t v7; // 0x41b1d0
    int64_t str2; // 0x41b1d0
    char v8; // 0x41b1d0
    char v9; // 0x41b1d0
    while (true) {
      lab_0x41b271:
        // 0x41b271
        v5 = v3;
        str2 = v2;
        v9 = v1;
        if (v1 == 0) {
            unsigned char v10 = *(char *)str2; // 0x41b225
            int32_t v11 = *(int32_t *)((int64_t)(4 * v10 / 32) + (int64_t)&g24); // 0x41b230
            if ((1 << (int32_t)(v10 % 32) & v11) == 0) {
                int32_t v12 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x41b305
                v9 = 1;
                if (v12 == 0) {
                    // break -> 0x41b351
                    break;
                }
                goto lab_0x41b277;
            } else {
                int32_t v13 = v10; // 0x41b252
                v6 = v13;
                v4 = v13;
                v8 = 0;
                v7 = 1;
                goto lab_0x41b256;
            }
        } else {
            goto lab_0x41b277;
        }
    }
    // 0x41b351
    __assert_fail("mbsinit (&iter->state)", "lib/mbuiter.h", 150, "mbuiter_multi_next");
    // 0x41b36a
    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
    // 0x41b383
    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
    return function_401a88();
  lab_0x41b277:;
    char v14 = v9;
    int64_t v15 = function_4085c0(str2, (int64_t)__ctype_get_mb_cur_max()); // 0x41b287
    int64_t v16 = function_40ab50((int64_t *)&v6, str2, v15); // 0x41b29c
    v1 = v14;
    int64_t len = 1; // 0x41b1d0
    switch (v16) {
        case -1: {
            goto lab_0x41b25e;
        }
        case -2: {
            // 0x41b338
            v1 = v14;
            len = strlen((char *)str2);
            goto lab_0x41b25e;
        }
        default: {
            int64_t v17 = v16; // 0x41b2b9
            if (v16 == 0) {
                // 0x41b2bb
                if (*(char *)str2 != 0) {
                    // 0x41b36a
                    __assert_fail("*iter->cur.ptr == '\\0'", "lib/mbuiter.h", 178, "mbuiter_multi_next");
                    // 0x41b383
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401a88();
                }
                // 0x41b2d2
                v17 = 1;
                if (v6 != 0) {
                    // 0x41b383
                    __assert_fail("iter->cur.wc == 0", "lib/mbuiter.h", 179, "mbuiter_multi_next");
                    return function_401a88();
                }
            }
            int32_t v18 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x41b2e8
            v4 = v6;
            v8 = v18 == 0 ? v14 : 0;
            v7 = v17;
            goto lab_0x41b256;
        }
    }
  lab_0x41b25e:
    // 0x41b25e
    v2 = len + str2;
    v3 = v5 + 1;
    goto lab_0x41b271;
  lab_0x41b256:;
    int64_t result = v5; // 0x41b25c
    v1 = v8;
    len = v7;
    if (v4 == 0) {
        // 0x41b1ef
        return result;
    }
    goto lab_0x41b25e;
}
// Address range: 0x41b400 - 0x41b401
int64_t function_41b400(void) {
    // 0x41b400
    int64_t result; // 0x41b400
    return result;
}
// Address range: 0x41b410 - 0x41b428
int64_t function_41b410(int64_t a1, int64_t a2, int64_t a3) {
    // 0x41b410
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g29);
}
// Address range: 0x41b428 - 0x41b448
int64_t function_41b428(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g25; // 0x41b432
    while (*(int64_t *)v1 != -1) {
        // 0x41b433
        v1 -= 8;
    }
    // 0x41b444
    return result;
}
