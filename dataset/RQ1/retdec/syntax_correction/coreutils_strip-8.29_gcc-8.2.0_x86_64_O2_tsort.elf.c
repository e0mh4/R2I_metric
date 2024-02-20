#include "decompile_retdec.h"
// Address range: 0x401700 - 0x401705
int64_t function_401700(void) {
    // 0x401700
    abort();
    // UNREACHABLE
}
// Address range: 0x401705 - 0x40170a
int64_t function_401705(void) {
    // 0x401705
    abort();
    // UNREACHABLE
}
// Address range: 0x40170a - 0x40170f
int64_t function_40170a(void) {
    // 0x40170a
    abort();
    // UNREACHABLE
}
// Address range: 0x40170f - 0x401714
int64_t function_40170f(void) {
    // 0x40170f
    abort();
    // UNREACHABLE
}
// Address range: 0x401714 - 0x401719
int64_t function_401714(void) {
    // 0x401714
    abort();
    // UNREACHABLE
}
// Address range: 0x401719 - 0x40171e
int64_t function_401719(void) {
    // 0x401719
    abort();
    // UNREACHABLE
}
// Address range: 0x401720 - 0x401e17
int64_t function_401720(int64_t a1, int64_t a2) {
    int64_t v1 = a1 & 0xffffffff; // 0x40172d
    function_402870(a2);
    setlocale(LC_ALL, (char *)&g2);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401720
    function_406700(0x402480, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    function_402760(v1, a2, "tsort", "coreutils", (int64_t)g18, 0x402150);
    int64_t v3 = function_405f60(v1, a2, (int64_t *)&g2, &g3, 0, 0x402150); // 0x4017a9
    if ((int32_t)v3 != -1) {
        // 0x401d88
        function_402150(1);
        // UNREACHABLE
    }
    int32_t v4 = *(int32_t *)0x60a25c; // 0x4017bd
    int64_t v5 = v4; // 0x4017bd
    int32_t v6 = a1; // 0x4017c4
    int32_t v7 = v6 - v4; // 0x4017c6
    int64_t v8 = v5; // 0x4017cb
    int64_t v9 = a2; // 0x4017cb
    int64_t v10; // 0x401720
    int64_t v11; // 0x401720
    char * v12; // 0x401720
    char * str; // 0x4017e6
    if (v7 > 1) {
        goto lab_0x401d59;
    } else {
        int64_t v13 = v7; // 0x4017c6
        if (v4 == v6) {
            // 0x401ca6
            v12 = "-";
            v11 = v13;
            v10 = function_401f80(0);
            goto lab_0x401823;
        } else {
            int64_t v14 = *(int64_t *)(8 * v5 + a2); // 0x4017d9
            str = (char *)v14;
            int32_t strcmp_rc = strcmp(str, "-"); // 0x4017eb
            int64_t v15 = function_401f80(0); // 0x4017f9
            v12 = str;
            v11 = v13;
            v10 = v15;
            if (strcmp_rc == 0) {
                goto lab_0x401823;
            } else {
                int64_t v16 = g30; // 0x401806
                int64_t v17 = function_4025b0(v14, (int64_t *)"r", v16); // 0x401815
                v12 = str;
                v11 = v16;
                v10 = v15;
                if (v17 == 0) {
                    goto lab_0x401cdf;
                } else {
                    goto lab_0x401823;
                }
            }
        }
    }
  lab_0x4018d8:;
    // 0x4018d8
    int64_t v18; // 0x401720
    int64_t v19 = v18; // 0x4018db
    int64_t v20; // 0x401720
    int64_t v21 = v20; // 0x4018db
    int64_t v22 = v18; // 0x4018db
    int64_t v23 = v20; // 0x4018db
    int64_t v24; // 0x401720
    if (v24 != 0) {
        // break -> 0x401900
        goto lab_0x401900;
    }
    goto lab_0x4018dd;
  lab_0x401cc6_2:
    // 0x401cc6
    __assert_fail("!STREQ (str, p->str)", "src/tsort.c", 188, "search_item");
    goto lab_0x401cdf;
  lab_0x401b60:;
    // 0x401b60
    int64_t str10; // 0x401720
    int64_t v98 = *(int64_t *)(str10 + 48); // 0x401b63
    puts((char *)*(int64_t *)str10);
    int64_t v99 = g37; // 0x401b7d
    int64_t v100 = g35 - 1; // 0x401b84
    *(int64_t *)g38 = 0;
    g35 = v100;
    int64_t v101 = v99; // 0x401b99
    int64_t v102 = v98; // 0x401b99
    int64_t v103 = v99; // 0x401b99
    int64_t v104; // 0x401720
    int64_t v105; // 0x401720
    int64_t v106; // 0x401720
    int64_t v107; // 0x401720
    int64_t v108; // 0x401720
    int64_t v109; // 0x401bb8
    int64_t v110; // 0x401ba0
    int64_t * v111; // 0x401ba4
    int64_t v112; // 0x401ba4
    if (v98 != 0) {
        v106 = v101;
        v110 = *(int64_t *)v102;
        v111 = (int64_t *)(v110 + 32);
        v112 = *v111 - 1;
        *v111 = v112;
        v107 = v106;
        v104 = 0;
        if (v112 == 0) {
            // 0x401bab
            *(int64_t *)(v106 + 40) = v110;
            v107 = v110;
            v104 = 1;
        }
        // 0x401bb8
        v105 = v104;
        v108 = v107;
        v109 = *(int64_t *)(v102 + 8);
        while (v109 != 0) {
            // 0x401ba0
            v106 = v108;
            v110 = *(int64_t *)v109;
            v111 = (int64_t *)(v110 + 32);
            v112 = *v111 - 1;
            *v111 = v112;
            v107 = v106;
            v104 = v105;
            if (v112 == 0) {
                // 0x401bab
                *(int64_t *)(v106 + 40) = v110;
                v107 = v110;
                v104 = 1;
            }
            // 0x401bb8
            v105 = v104;
            v108 = v107;
            v109 += 8;
        }
        // 0x401bc2
        v103 = v108;
        if ((char)v105 != 0) {
            // 0x401bc7
            g37 = v108;
            v103 = v108;
        }
    }
    int64_t str11 = *(int64_t *)(g38 + 40); // 0x401bce
    g38 = str11;
    int64_t v94 = v100; // 0x401bdc
    int64_t v95 = v103; // 0x401bdc
    while (str11 != 0) {
        // 0x401b60
        v98 = *(int64_t *)(str11 + 48);
        puts((char *)*(int64_t *)str11);
        v99 = g37;
        v100 = g35 - 1;
        *(int64_t *)g38 = 0;
        g35 = v100;
        v101 = v99;
        v102 = v98;
        v103 = v99;
        if (v98 != 0) {
            v106 = v101;
            v110 = *(int64_t *)v102;
            v111 = (int64_t *)(v110 + 32);
            v112 = *v111 - 1;
            *v111 = v112;
            v107 = v106;
            v104 = 0;
            if (v112 == 0) {
                // 0x401bab
                *(int64_t *)(v106 + 40) = v110;
                v107 = v110;
                v104 = 1;
            }
            // 0x401bb8
            v105 = v104;
            v108 = v107;
            v109 = *(int64_t *)(v102 + 8);
            while (v109 != 0) {
                // 0x401ba0
                v106 = v108;
                v110 = *(int64_t *)v109;
                v111 = (int64_t *)(v110 + 32);
                v112 = *v111 - 1;
                *v111 = v112;
                v107 = v106;
                v104 = v105;
                if (v112 == 0) {
                    // 0x401bab
                    *(int64_t *)(v106 + 40) = v110;
                    v107 = v110;
                    v104 = 1;
                }
                // 0x401bb8
                v105 = v104;
                v108 = v107;
                v109 += 8;
            }
            // 0x401bc2
            v103 = v108;
            if ((char)v105 != 0) {
                // 0x401bc7
                g37 = v108;
                v103 = v108;
            }
        }
        // 0x401bce
        str11 = *(int64_t *)(g38 + 40);
        g38 = str11;
        v94 = v100;
        v95 = v103;
    }
    goto lab_0x401bde;
  lab_0x401c20:;
    // 0x401c20
    int64_t v90; // 0x401720
    function_404310(0, 3, v90);
    error(0, (int32_t)"%s: input contains a loop:" ^ (int32_t)"%s: input contains a loop:", dcgettext(NULL, "%s: input contains a loop:", 5));
    int64_t v113 = (int32_t)"%s: input contains a loop:" ^ (int32_t)"%s: input contains a loop:"; // 0x401c58
    int64_t * v30; // 0x401720
    int64_t v114 = *v30; // 0x401c60
    int64_t v115 = v113; // 0x401c67
    if (v114 != 0) {
        // 0x401c69
        function_401f10(v114, 0x402030);
        v115 = 0x402030;
    }
    int64_t v116 = v115;
    while (g36 != 0) {
        // 0x401c60
        v114 = *v30;
        v115 = v116;
        if (v114 != 0) {
            // 0x401c69
            function_401f10(v114, 0x402030);
            v115 = 0x402030;
        }
        // 0x401c73
        v116 = v115;
    }
    int64_t result = 1; // 0x401b29
    int64_t v89 = v116; // 0x401b29
    if (g35 == 0) {
        // break -> 0x401be3
        goto lab_0x401be3_2;
    }
    goto lab_0x401b2f;
  lab_0x401bde:;
    // 0x401bde
    int64_t v92; // 0x401720
    result = v92;
    v89 = v95;
    if (v94 == 0) {
        // break -> 0x401be3
        goto lab_0x401be3_2;
    }
    goto lab_0x401c20;
  lab_0x4018dd:;
    int64_t v25 = v19; // 0x4018e0
    int64_t v26 = v21; // 0x4018e0
    goto lab_0x401848;
  lab_0x401ae0:;
    // 0x401ae0
    int32_t v57; // 0x401720
    int32_t * v55; // 0x4019ed
    int32_t v56; // 0x4019ed
    *v55 = v56 + v57;
    int64_t v76; // 0x401720
    v18 = v76;
    int64_t v39; // 0x401949
    v20 = v39;
    goto lab_0x4018d8;
  lab_0x401d59:
    // 0x401d59
    function_404490(*(int64_t *)(v9 + 8 + 8 * v8));
    error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
    // 0x401d88
    function_402150(1);
    // UNREACHABLE
  lab_0x401823:;
    char * v78 = v12;
    function_402530((int64_t)g30, 2, v11);
    int64_t v28; // bp-72, 0x401720
    function_4044b0(&v28);
    char * str2 = (char *)v2;
    v30 = (int64_t *)(v10 + 16);
    int64_t v79 = a2; // 0x401839
    int64_t v29; // 0x401720
    while (true) {
        // 0x40183e
        v25 = v79;
        v26 = 0;
        while (true) {
          lab_0x401848:
            // 0x401848
            v24 = v26;
            int64_t v27 = function_4044c0((int64_t)g30, " \t\n", 3, &v28); // 0x40185e
            v29 = v25;
            switch (v27) {
                case -1: {
                    goto lab_0x401b00;
                }
                case 0: {
                    goto lab_0x401d0e;
                }
                default: {
                    // 0x401876
                    v9 = v25;
                    if (v10 == 0) {
                        goto lab_0x401d27;
                    }
                    int64_t str3 = *v30; // 0x401889
                    if (str3 != 0) {
                        int32_t strcmp_rc2 = strcmp(str2, (char *)*(int64_t *)str3); // 0x4018ca
                        int32_t v31 = strcmp_rc2; // 0x4018d3
                        int64_t v32 = str3; // 0x4018d3
                        int64_t v33 = str3; // 0x4018d3
                        int64_t v34 = v10; // 0x4018d3
                        v18 = v10;
                        v20 = str3;
                        if (strcmp_rc2 != 0) {
                            int64_t v35 = *(int64_t *)(v32 + 8); // 0x4018a4
                            int64_t str4 = v31 < 0 ? v35 : *(int64_t *)(v32 + 16); // 0x4018a4
                            while (str4 != 0) {
                                int32_t v36 = *(int32_t *)(str4 + 24); // 0x4018b2
                                int64_t v37 = v36 != 0 ? v32 : v34; // 0x4018bb
                                int32_t strcmp_rc3 = strcmp(str2, (char *)*(int64_t *)str4); // 0x4018ca
                                v32 = str4;
                                v33 = v36 != 0 ? str4 : v33;
                                v34 = v37;
                                if (strcmp_rc3 == 0) {
                                    goto lab_0x4018d8;
                                }
                                v35 = *(int64_t *)(v32 + 8);
                                str4 = strcmp_rc3 < 0 ? v35 : *(int64_t *)(v32 + 16);
                            }
                            // 0x401940
                            int32_t v38; // 0x401720
                            v39 = function_401f80(v38);
                            int32_t v40; // 0x401720
                            if (v40 < 0) {
                                // 0x401af0
                                int64_t * v41; // 0x401720
                                *v41 = v39;
                            } else {
                                // 0x40195d
                                int64_t * v42; // 0x401720
                                *v42 = v39;
                            }
                            // 0x401961
                            int64_t str5; // 0x401720
                            int32_t strcmp_rc4 = strcmp(str2, (char *)*(int64_t *)str5); // 0x40196a
                            if (strcmp_rc4 == 0) {
                                goto lab_0x401d40;
                            }
                            int64_t * v43 = (int64_t *)(str5 + 16); // 0x401977
                            int64_t * v44 = (int64_t *)(str5 + 8); // 0x40197c
                            int64_t str6 = strcmp_rc4 < 0 ? *v44 : *v43; // 0x40197c
                            int64_t v45; // 0x401720
                            int64_t v46 = strcmp_rc4 < 0 ? v45 : 1; // 0x401988
                            int64_t v47 = v46; // 0x401997
                            if (v39 != str6) {
                                int32_t strcmp_rc5 = strcmp(str2, (char *)*(int64_t *)str6); // 0x4019c3
                                int64_t v48 = v46; // 0x4019d4
                                int64_t str7 = str6; // 0x4019d4
                                int32_t strcmp_rc6 = strcmp_rc5; // 0x4019d4
                                if (strcmp_rc5 == 0) {
                                    goto lab_0x401cc6_2;
                                }
                                while (true) {
                                    int64_t v49 = v48;
                                    int64_t v50 = 0x100000000 * str7 >> 32;
                                    int64_t v51; // 0x401720
                                    if (strcmp_rc6 >= 0) {
                                        // 0x4019a0
                                        int32_t * v52; // 0x401720
                                        *v52 = 1;
                                        int64_t v53 = *(int64_t *)(v50 + 16); // 0x4019a8
                                        v51 = v53;
                                        v47 = v49;
                                        if (v39 == v53) {
                                            // break -> 0x4019ed
                                            break;
                                        }
                                    } else {
                                        // 0x4019dc
                                        *(int32_t *)(v50 + 24) = -1;
                                        int64_t v54 = *(int64_t *)(v50 + 8); // 0x4019e4
                                        v51 = v54;
                                        v47 = v49;
                                        if (v39 == v54) {
                                            // break -> 0x4019ed
                                            break;
                                        }
                                    }
                                    // 0x4019b1
                                    str7 = v51;
                                    strcmp_rc6 = strcmp(str2, (char *)*(int64_t *)str7);
                                    v48 = v49 & 0xffffffff;
                                    if (strcmp_rc6 == 0) {
                                        goto lab_0x401cc6_2;
                                    }
                                }
                            }
                            // 0x4019ed
                            v55 = (int32_t *)(str5 + 24);
                            v56 = *v55;
                            v57 = v47;
                            if (v56 == 0) {
                                goto lab_0x401ae0;
                            } else {
                                int32_t v58 = -v57; // 0x4019ff
                                if (v56 == v58) {
                                    goto lab_0x401ae0;
                                } else {
                                    int32_t * v59 = (int32_t *)(str6 + 24); // 0x401a07
                                    int64_t v60; // 0x401720
                                    if (*v59 == v57) {
                                        if (v57 < 0) {
                                            int64_t * v61 = (int64_t *)(str6 + 16); // 0x401c94
                                            *v44 = *v61;
                                            *v61 = str5;
                                        } else {
                                            int64_t * v62 = (int64_t *)(str6 + 8); // 0x401ab9
                                            *v43 = *v62;
                                            *v62 = str5;
                                        }
                                        // 0x401ac6
                                        *v59 = 0;
                                        *v55 = 0;
                                        v60 = str6;
                                    } else {
                                        int64_t v63; // 0x401720
                                        if (v57 < 0) {
                                            int64_t * v64 = (int64_t *)(str6 + 16); // 0x401a15
                                            int64_t v65 = *v64; // 0x401a15
                                            int64_t * v66 = (int64_t *)(v65 + 8); // 0x401a90
                                            *v64 = *v66;
                                            int64_t * v67 = (int64_t *)(v65 + 16); // 0x401a98
                                            *v66 = str6;
                                            *v44 = *v67;
                                            *v67 = str5;
                                            v63 = v65;
                                        } else {
                                            int64_t * v68 = (int64_t *)(str6 + 8); // 0x401a11
                                            int64_t v69 = *v68; // 0x401a11
                                            int64_t * v70 = (int64_t *)(v69 + 16); // 0x401a1e
                                            *v68 = *v70;
                                            int64_t * v71 = (int64_t *)(v69 + 8); // 0x401a26
                                            *v70 = str6;
                                            *v43 = *v71;
                                            *v71 = str5;
                                            v63 = v69;
                                        }
                                        // 0x401a3a
                                        *v55 = 0;
                                        *v59 = 0;
                                        int32_t * v72 = (int32_t *)(v63 + 24); // 0x401a4b
                                        int32_t v73 = *v72; // 0x401a4b
                                        if (v73 == v57) {
                                            // 0x401a78
                                            *v55 = v58;
                                        } else {
                                            if (v73 == v58) {
                                                // 0x401a57
                                                *v59 = v57;
                                            }
                                        }
                                        // 0x401a5b
                                        *v72 = 0;
                                        v60 = v63;
                                    }
                                    int64_t v74 = v60;
                                    int64_t * v75 = (int64_t *)(v76 + 16); // 0x401a62
                                    if (*v75 == str5) {
                                        // 0x401a80
                                        *v75 = v74;
                                        v18 = v76;
                                        v20 = v39;
                                    } else {
                                        // 0x401a68
                                        *(int64_t *)(v76 + 8) = v74;
                                        v18 = v76;
                                        v20 = v39;
                                    }
                                    goto lab_0x4018d8;
                                }
                            }
                        } else {
                            goto lab_0x4018d8;
                        }
                    } else {
                        int64_t v77 = function_401f80((int32_t)v2); // 0x4018ed
                        *v30 = v77;
                        v19 = v10;
                        v21 = v77;
                        if (v24 != 0) {
                            // break -> 0x401900
                            break;
                        }
                        goto lab_0x4018dd;
                    }
                }
            }
        }
      lab_0x401900:;
        int64_t str9 = v23;
        int64_t str8 = *(int64_t *)v24; // 0x401903
        if (strcmp((char *)str8, (char *)*(int64_t *)str9) != 0) {
            int64_t * v80 = (int64_t *)(str9 + 32); // 0x401914
            *v80 = *v80 + 1;
            int64_t v81 = function_404dc0(16); // 0x40191e
            int64_t * v82 = (int64_t *)(v24 + 48); // 0x401923
            *(int64_t *)v81 = str9;
            *(int64_t *)(v81 + 8) = *v82;
            *v82 = v81;
        }
        // 0x40183e
        v79 = v22;
    }
  lab_0x401b00:;
    int64_t v83; // 0x401720
    int64_t v84; // 0x401720
    if (v24 != 0) {
        goto lab_0x401dc8;
    } else {
        int64_t v85 = *v30; // 0x401b09
        int64_t v86 = (int64_t)" \t\n"; // 0x401b10
        if (v85 != 0) {
            // 0x401b12
            function_401f10(v85, 0x401f00);
            v86 = 0x401f00;
        }
        int64_t v87 = v86;
        int64_t v88 = g35; // 0x401b21
        result = 0;
        v89 = v87;
        if (v88 != 0) {
            // 0x401b2f
            v90 = (int64_t)v78;
            int64_t v91 = 0; // 0x401720
            while (true) {
              lab_0x401b2f:
                // 0x401b2f
                v92 = 1;
                int64_t v93 = *v30; // 0x401b2f
                if (v93 == 0) {
                    // 0x401c10
                    str10 = g38;
                    if (g38 != 0) {
                        goto lab_0x401b60;
                    } else {
                        goto lab_0x401c20;
                    }
                } else {
                    // 0x401b3c
                    function_401f10(v93, 0x401ff0);
                    str10 = g38;
                    if (g38 == 0) {
                        // 0x401c88
                        v94 = g35;
                        v95 = 0x401ff0;
                        goto lab_0x401bde;
                    } else {
                        goto lab_0x401b60;
                    }
                }
            }
        }
      lab_0x401be3_2:
        // 0x401be3
        if ((int32_t)function_405050((int64_t)g30, v89) == 0) {
            // 0x401bf7
            return result;
        }
        int32_t v96; // 0x401720
        if (v96 != 0) {
            // 0x401d92
            v83 = (int64_t)v78;
            goto lab_0x401e01;
        } else {
            // 0x401d99
            v84 = (int64_t)dcgettext(NULL, "standard input", 5);
            goto lab_0x401dad;
        }
    }
  lab_0x401dc8:;
    int64_t v97 = (int64_t)v78;
    function_404310(0, 3, v97);
    error(1, (int32_t)"%s: input contains an odd number of tokens" ^ (int32_t)"%s: input contains an odd number of tokens", dcgettext(NULL, "%s: input contains an odd number of tokens", 5));
    v83 = v97;
    goto lab_0x401e01;
  lab_0x401cdf:
    // 0x401cdf
    error(1, *__errno_location(), "%s", (char *)function_404310(0, 3, (int64_t)str));
    v29 = a2;
  lab_0x401d0e:
    // 0x401d0e
    __assert_fail("len != 0", "src/tsort.c", 467, "tsort");
    v9 = v29;
  lab_0x401d27:
    // 0x401d27
    __assert_fail("root", "src/tsort.c", 138, "search_item");
  lab_0x401d40:
    // 0x401d40
    __assert_fail("!STREQ (str, s->str)", "src/tsort.c", 174, "search_item");
    v8 = &g53;
    goto lab_0x401d59;
  lab_0x401e01:
    // 0x401e01
    v84 = function_404310(0, 3, v83);
    goto lab_0x401dad;
  lab_0x401dad:
    // 0x401dad
    error(1, *__errno_location(), "%s", (char *)v84);
    goto lab_0x401dc8;
}
// Address range: 0x401e20 - 0x401e4b
// Address range: 0x401e4b - 0x401e6a
int64_t function_401e4b(void) {
    // 0x401e4b
    return &g28;
}
// Address range: 0x401e6a - 0x401ea1
int64_t function_401e6a(void) {
    // 0x401e6a
    return 0;
}
// Address range: 0x401ea1 - 0x401ef8
int64_t function_401ea1(void) {
    // 0x401ea1
    if (g33 != 0) {
        // 0x401ef7
        int64_t result; // 0x401ea1
        return result;
    }
    int64_t v1 = g34; // 0x401ed4
    int64_t result2; // 0x401ee6
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401ee6
        result2 = function_401e4b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401ed6
        v1++;
    }
    // 0x401eca
    g34 = v1;
    // 0x401ee6
    result2 = function_401e4b();
    g33 = 1;
    return result2;
}
// Address range: 0x401ef8 - 0x401efd
int64_t function_401ef8(void) {
    // 0x401ef8
    return function_401e6a();
}
// Address range: 0x401f00 - 0x401f0b
int64_t function_401f00(void) {
    // 0x401f00
    g35++;
    return 0;
}
// Address range: 0x401f10 - 0x401f75
int64_t function_401f10(int64_t a1, int64_t a2) {
    int64_t v1 = a1;
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x401f1c
    char v3; // 0x401f10
    int64_t v4; // 0x401f10
    int64_t v5; // 0x401f10
    int64_t v6; // 0x401f28
    char v7; // 0x401f10
    if (v2 == 0) {
        // 0x401f60
        if (*(int64_t *)(v1 + 16) == 0) {
            // break -> 0x401f43
            break;
        }
        // 0x401f60
        v3 = v4;
        v5 = v4;
    } else {
        // 0x401f25
        v6 = function_401f10(v2, a2);
        v7 = v6;
        v3 = v7;
        v5 = v6;
        if (v7 != 0) {
            // break -> 0x401f43
            break;
        }
    }
    int64_t result = 1; // 0x401f38
    while (v3 == 0) {
        int64_t v8 = *(int64_t *)(v1 + 16); // 0x401f3a
        v4 = v5;
        result = v5;
        if (v8 == 0) {
            // break -> 0x401f43
            break;
        }
        v1 = v8;
        v2 = *(int64_t *)(v1 + 8);
        if (v2 == 0) {
            // 0x401f60
            result = a2;
            if (*(int64_t *)(v1 + 16) == 0) {
                // break -> 0x401f43
                break;
            }
            // 0x401f60
            v3 = v4;
            v5 = v4;
        } else {
            // 0x401f25
            v6 = function_401f10(v2, a2);
            v7 = v6;
            v3 = v7;
            v5 = v6;
            result = 1;
            if (v7 != 0) {
                // break -> 0x401f43
                break;
            }
        }
        // 0x401f31
        result = 1;
    }
    // 0x401f43
    return result;
}
// Address range: 0x401f80 - 0x401fe2
int64_t function_401f80(int32_t a1) {
    int64_t result = function_404dc0(56); // 0x401f8e
    int64_t v1 = 0; // 0x401f99
    if (a1 != 0) {
        // 0x401f9b
        v1 = function_404ff0((int64_t)a1);
    }
    // 0x401fa6
    *(int64_t *)result = v1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    *(int32_t *)(result + 24) = 0;
    *(int64_t *)(result + 32) = 0;
    *(int64_t *)(result + 40) = 0;
    *(int64_t *)(result + 48) = 0;
    return result;
}
// Address range: 0x401ff0 - 0x402029
int64_t function_401ff0(int64_t a1) {
    // 0x401ff0
    if (a1 == 0 | *(int64_t *)(a1 + 32) != 0) {
        // 0x402019
        return 0;
    }
    // 0x401ffd
    if (g38 == 0) {
        // 0x402020
        g38 = a1;
    } else {
        // 0x402007
        *(int64_t *)((int64_t)g37 + 40) = a1;
    }
    // 0x402012
    g37 = a1;
    // 0x402019
    return 0;
}
// Address range: 0x402030 - 0x40214b
int64_t function_402030(int64_t a1) {
    // 0x402030
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x402071
        return 0;
    }
    int64_t v1 = g36; // 0x402039
    if (v1 == 0) {
        // 0x402120
        g36 = a1;
        return 0;
    }
    int64_t v2 = a1 + 48; // 0x402049
    int64_t v3 = *(int64_t *)v2; // 0x402049
    if (v3 == 0) {
        // 0x402071
        return 0;
    }
    int64_t v4 = v2; // 0x402059
    if (v1 != *(int64_t *)v3) {
        int64_t v5 = v3 + 8; // 0x402068
        int64_t result = *(int64_t *)v5; // 0x402068
        while (result != 0) {
            // 0x402060
            v4 = v5;
            if (v1 == *(int64_t *)result) {
                goto lab_0x40208c;
            }
            v5 = result + 8;
            result = *(int64_t *)v5;
        }
        // 0x402071
        return result;
    }
  lab_0x40208c:;
    int64_t * v6 = (int64_t *)(a1 + 40); // 0x40208c
    if (*v6 == 0) {
        // 0x402130
        *v6 = v1;
        g36 = a1;
        // 0x402071
        return 0;
    }
    int64_t v7 = *(int64_t *)(v1 + 40); // 0x4020ba
    error(0, 0, "%s", (char *)*(int64_t *)v1);
    int64_t v8 = g36; // 0x4020ce
    while (v8 != a1) {
        // 0x4020a0
        *(int64_t *)(v8 + 40) = 0;
        g36 = v7;
        int64_t v9 = v7; // 0x4020b5
        if (v7 == 0) {
            // 0x402071
            return 1;
        }
        v7 = *(int64_t *)(v9 + 40);
        error(0, 0, "%s", (char *)*(int64_t *)v9);
        v8 = g36;
    }
    int64_t * v10 = (int64_t *)v4; // 0x4020da
    int64_t v11 = *v10; // 0x4020da
    int64_t * v12 = (int64_t *)(*(int64_t *)v11 + 32); // 0x4020e4
    *v12 = *v12 - 1;
    *v10 = *(int64_t *)(v11 + 8);
    int64_t * v13 = (int64_t *)(v8 + 40); // 0x4020f0
    int64_t v14 = *v13; // 0x4020f0
    *v13 = 0;
    while (v14 != 0) {
        // 0x4020f0
        v13 = (int64_t *)(v14 + 40);
        v14 = *v13;
        *v13 = 0;
    }
    // 0x402104
    g36 = 0;
    // 0x402071
    return 1;
}
// Address range: 0x402150 - 0x40245d
int64_t function_402150(int64_t a1) {
    int32_t status = a1; // 0x402166
    if (status != 0) {
        // 0x40216a
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40218f
        exit(status);
        // UNREACHABLE
    }
    // 0x402196
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] [FILE]\nWrite totally ordered list consistent with the partial ordering in FILE.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x402240
    bool v2; // 0x402150
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4022c0
    int64_t v6 = *(int64_t *)v5; // 0x4022c4
    int64_t v7 = 6; // 0x4022ca
    while (v6 != 0) {
        int64_t v8 = (int64_t)"tsort";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4022d6
        char v11 = *(char *)v9; // 0x4022d6
        char v12 = v11; // 0x4022d6
        bool v13 = false; // 0x4022d6
        while (v10 == v11) {
            // 0x4022cc
            v7--;
            int64_t v14 = v9 + v3; // 0x4022d6
            int64_t v15 = v8 + v3; // 0x4022d6
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
            // break -> 0x4022e2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x4022e2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4023f4;
        } else {
            // 0x4023de
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402433
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402344;
            } else {
                goto lab_0x4023f4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402344;
        } else {
            // 0x40232a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402433
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402344;
            } else {
                goto lab_0x402344;
            }
        }
    }
  lab_0x4023f4:
    // 0x4023f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402384
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40218f
    exit(status);
    // UNREACHABLE
  lab_0x402344:
    // 0x402344
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402384
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40218f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402460 - 0x402468
int64_t function_402460(int64_t a1) {
    // 0x402460
    g40 = a1;
    int64_t result; // 0x402460
    return result;
}
// Address range: 0x402470 - 0x402478
int64_t function_402470(int64_t a1) {
    // 0x402470
    g39 = a1;
    int64_t result; // 0x402470
    return result;
}
// Address range: 0x402480 - 0x40251e
int64_t function_402480(void) {
    // 0x402480
    int32_t * err_num; // 0x402496
    if ((int32_t)function_406060((int64_t)g29) == 0) {
        goto lab_0x4024ac;
    } else {
        // 0x402496
        err_num = __errno_location();
        if (g39 == 0) {
            goto lab_0x4024c3;
        } else {
            // 0x4024a7
            if (*err_num != 32) {
                goto lab_0x4024c3;
            } else {
                goto lab_0x4024ac;
            }
        }
    }
  lab_0x4024ac:;
    int64_t result = function_406060((int64_t)g32); // 0x4024b3
    if ((int32_t)result == 0) {
        // 0x4024bc
        return result;
    }
    // 0x4024fe
    _exit(g19);
    // UNREACHABLE
  lab_0x4024c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4024cf
    if (g40 == 0) {
        // 0x402509
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4024e3
        error(0, *err_num, "%s: %s", (char *)function_4042e0((int64_t)g40), v1);
    }
    // 0x4024fe
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x402520 - 0x402525
int64_t function_402520(void) {
    // 0x402520
    int64_t fd; // 0x402520
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402530 - 0x402551
int64_t function_402530(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402530
    if (stream == 0) {
        // 0x402550
        int64_t result; // 0x402530
        return result;
    }
    // 0x402535
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402560 - 0x4025ab
int64_t function_402560(int32_t a1, int64_t a2) {
    int32_t fd = open("/dev/null", O_RDONLY); // 0x402576
    if (fd == a1) {
        // 0x402585
        return 1;
    }
    // 0x40257f
    if (fd < 0) {
        // 0x402585
        return 0;
    }
    // 0x402590
    close(fd);
    *__errno_location() = 9;
    return 0;
}
// Address range: 0x4025b0 - 0x40275f
int64_t function_4025b0(int64_t a1, int64_t * a2, int64_t stream) {
    int32_t v1 = fileno((struct _IO_FILE *)stream); // 0x4025cc
    int32_t * v2 = __errno_location(); // 0x4025d3
    int64_t v3 = 0; // 0x4025b0
    int64_t v4 = 0; // 0x4025b0
    int64_t v5 = 0; // 0x4025b0
    int64_t v6 = 0; // 0x4025b0
    int64_t v7 = 0; // 0x4025b0
    switch (v1) {
        case 1: {
            goto lab_0x402620;
        }
        case 2: {
            goto lab_0x40260a;
        }
        case 0: {
            goto lab_0x40265c;
        }
        default: {
            // 0x4025f5
            v3 = dup2(2, 2) != 2;
            goto lab_0x40260a;
        }
    }
  lab_0x402620:;
    // 0x402620
    int64_t v8; // 0x4025b0
    int64_t v9; // 0x4025b0
    int64_t v10; // 0x4025b0
    int64_t v11; // 0x4025b0
    int64_t v12; // 0x4025b0
    int64_t v13; // 0x4025b0
    int64_t v14; // 0x402634
    if (dup2(0, 0) == 0) {
        // 0x4026a0
        v10 = 0;
        v8 = 0;
        v14 = 0;
        if (v4 == 0) {
            goto lab_0x402644;
        } else {
            goto lab_0x4026a8;
        }
    } else {
        int64_t v15 = function_402560(0, 0); // 0x40262f
        v12 = v3;
        v11 = v4;
        v9 = 1;
        v13 = 0;
        if ((char)v15 == 0) {
            goto lab_0x40266f;
        } else {
            // 0x40263f
            v14 = v15 & 0xffffffff;
            v10 = v4;
            v8 = v14;
            if (v4 != 0) {
                goto lab_0x4026a8;
            } else {
                goto lab_0x402644;
            }
        }
    }
  lab_0x40260a:
    // 0x40260a
    v4 = dup2(1, 1) != 1;
    goto lab_0x402620;
  lab_0x40265c:
    // 0x40265c
    v12 = v5;
    v11 = v6;
    v9 = v7;
    v13 = function_405110(a1, (int64_t)a2);
    goto lab_0x40266f;
  lab_0x40266f:;
    int64_t v16 = (int64_t)*v2; // 0x40266f
    int64_t v17 = v11; // 0x402674
    int64_t v18 = v13; // 0x402674
    int64_t v19 = v9; // 0x402674
    int64_t v20 = v16; // 0x402674
    int64_t v21 = v11; // 0x402674
    int64_t v22 = v13; // 0x402674
    int64_t v23 = v9; // 0x402674
    int64_t v24 = v16; // 0x402674
    if ((char)v12 != 0) {
        goto lab_0x402716;
    } else {
        goto lab_0x40267a;
    }
  lab_0x402644:
    // 0x402644
    v5 = v3;
    v6 = v10;
    v7 = v8;
    if ((char)v3 == 0) {
        goto lab_0x40265c;
    } else {
        int64_t v25 = function_402560(2, 0); // 0x40264d
        v5 = v25 & 0xffffffff;
        v6 = v10;
        v7 = v8;
        if ((char)v25 == 0) {
            // 0x402710
            v21 = v10;
            v22 = 0;
            v23 = v8;
            v24 = (int64_t)*v2;
            goto lab_0x402716;
        } else {
            goto lab_0x40265c;
        }
    }
  lab_0x4026a8:;
    int64_t v26 = function_402560(1, 0); // 0x4026ad
    v10 = v26 & 0xffffffff;
    v8 = v14;
    int64_t v27; // 0x4025b0
    int64_t v28; // 0x4025b0
    int64_t v29; // 0x4025b0
    if ((char)v26 != 0) {
        goto lab_0x402644;
    } else {
        int64_t v30 = (int64_t)*v2; // 0x4026b8
        v27 = 0;
        v28 = v14;
        v29 = v30;
        if ((char)v3 != 0) {
            // 0x402750
            close(2);
            v27 = 0;
            v28 = v14;
            v29 = v30;
        }
        goto lab_0x4026d0;
    }
  lab_0x402716:
    // 0x402716
    close(2);
    v17 = v21;
    v18 = v22;
    v19 = v23;
    v20 = v24;
    goto lab_0x40267a;
  lab_0x40267a:
    // 0x40267a
    v27 = v18;
    v28 = v19;
    v29 = v20;
    int64_t result; // 0x4025b0
    int64_t v31; // 0x4025b0
    int64_t v32; // 0x4025b0
    int64_t v33; // 0x4025b0
    if ((char)v17 != 0) {
        goto lab_0x4026d0;
    } else {
        // 0x40267f
        result = v18;
        v32 = v20;
        v31 = v18;
        v33 = v20;
        if ((char)v19 != 0) {
            goto lab_0x4026df;
        } else {
            goto lab_0x402684;
        }
    }
  lab_0x4026d0:
    // 0x4026d0
    close(1);
    result = v27;
    v32 = v29;
    v31 = v27;
    v33 = v29;
    if ((char)v28 == 0) {
        goto lab_0x402684;
    } else {
        goto lab_0x4026df;
    }
  lab_0x402684:;
    int64_t result2 = 0; // 0x402687
    int64_t v34 = v32; // 0x402687
    if (result != 0) {
        // 0x402689
        return result;
    }
    goto lab_0x4026eb;
  lab_0x4026df:
    // 0x4026df
    close(0);
    result2 = v31;
    v34 = v33;
    if (v31 != 0) {
        // 0x402689
        int64_t v35; // 0x4025b0
        int64_t result3 = v35;
        return result3;
    }
    goto lab_0x4026eb;
  lab_0x4026eb:
    // 0x4026eb
    *v2 = (int32_t)v34;
    // 0x402689
    return result2;
}
// Address range: 0x402760 - 0x402862
int64_t function_402760(int64_t a1, int64_t a2, char * a3, char * a4, int64_t a5, int64_t a6) {
    // 0x402760
    int64_t v1; // 0x402760
    if ((char)v1 != 0) {
        // 0x402773
        int128_t v2; // 0x402760
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    int32_t v3 = g26; // 0x4027aa
    g26 = 0;
    if ((int32_t)a1 != 2) {
        // 0x4027bf
        g26 = v3;
        g27 = 0;
        int64_t result; // 0x402760
        return result;
    }
    int64_t result2 = function_405f60(a1, a2, &g4, (int64_t *)&g5, 0, a6); // 0x4027f9
    int32_t v4 = result2; // 0x4027fe
    switch (v4) {
        default: {
            // 0x402808
            if (v4 == 118) {
                int64_t v5 = 48; // bp-240, 0x40282a
                function_404c20((int64_t)g29, (int64_t)a3, (int64_t)a4, a5, &v5, a6);
                exit(0);
                // UNREACHABLE
            }
        }
        case -1: {
        }
        case 104: {
            // 0x4027bf
            g26 = v3;
            g27 = 0;
            return result2;
        }
    }
}
// Address range: 0x402870 - 0x402909
int64_t function_402870(int64_t str) {
    // 0x402870
    if (str == 0) {
        // 0x4028e9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40287e
    int64_t result = (int64_t)found_char_pos; // 0x40287e
    if (found_char_pos == NULL) {
        // 0x4028d9
        g41 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402888
    if (v1 - str < 7) {
        // 0x4028d9
        g41 = str;
        g31 = str;
        return result;
    }
    // 0x402898
    bool v2; // 0x402870
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402870
    int64_t v5 = result - 6; // 0x402870
    int64_t v6 = 7; // 0x4028a6
    unsigned char v7 = *(char *)v5; // 0x4028a6
    char v8 = *(char *)v4; // 0x4028a6
    char v9 = v8; // 0x4028a6
    bool v10 = false; // 0x4028a6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4028b0
    int64_t v13 = v1; // 0x4028b0
    int64_t v14 = 3; // 0x4028b0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4028d9
        g41 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4028c2
    char v16 = *(char *)v12; // 0x4028c2
    char v17 = v16; // 0x4028c2
    bool v18 = false; // 0x4028c2
    while (v15 == v16) {
        // 0x4028b2
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
    int64_t v20 = v1; // 0x4028cc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4028ce
        v20 = result + 4;
        g28 = v20;
    }
    // 0x4028d9
    g41 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402910 - 0x402a02
int64_t function_402910(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402924
    int64_t result = (int64_t)v1; // 0x402924
    if (result != a1) {
        // 0x402931
        return result;
    }
    int64_t v2 = function_406120(); // 0x402940
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4029f6
    if (v3 == 85) {
        // 0x402950
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4029e8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x40297e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x40298b
        // 0x402931
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4029e8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x4029cd
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x4029da
    // 0x402931
    return result4;
}
// Address range: 0x402a10 - 0x402a67
int64_t function_402a10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402a10
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402a58
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402a67 - 0x403c31
int64_t function_402a67(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402ab1
    int64_t v3 = 0; // 0x402ab1
    int64_t v4; // 0x402a67
    int64_t v5; // 0x402a67
    int64_t v6; // 0x402a67
    int64_t v7; // 0x402a67
    int64_t v8; // 0x402a67
    int64_t v9; // 0x402a67
    int64_t v10; // 0x402a67
    int64_t v11; // 0x402a67
    int64_t v12; // 0x402a67
    int64_t v13; // 0x402a67
    int64_t v14; // 0x402a67
    int64_t v15; // 0x402a67
    int64_t v16; // 0x402a67
    int64_t v17; // 0x402a67
    int64_t v18; // 0x402a67
    int64_t result; // 0x402a67
    int64_t v19; // 0x402a67
    int32_t wc; // bp+132, 0x402a67
    int64_t ps; // bp+136, 0x402a67
    char v20; // 0x403020
    int64_t v21; // 0x403020
    int64_t v22; // 0x4033c8
    int64_t v23; // 0x402a67
    int64_t v24; // 0x4033e7
    int32_t v25; // 0x402a67
    while (true) {
      lab_0x402ab8_2:
        // 0x402ab8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402a67
        int64_t v27; // 0x402aec
        while (true) {
          lab_0x402ab8:
            // 0x402ab8
            v5 = v26;
            bool v28 = v15 == v5; // 0x402ac3
            if (v15 == -1) {
                // 0x402ac5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402ad3
            if (v28) {
                // break (via goto) -> 0x403238
                goto lab_0x403238;
            }
            // 0x402adc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g52 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4030cb
                    if (v25 % 2 == 0) {
                        goto lab_0x402c11;
                    }
                    // 0x4034ed
                    v26 = v5 + 1;
                    goto lab_0x402ab8;
                }
                case 7: {
                    goto lab_0x402c11;
                }
                case 8: {
                    goto lab_0x402c11;
                }
                case 9: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402c11;
                }
                case 12: {
                    goto lab_0x402c11;
                }
                case 13: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402bdd;
                }
                case 36: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402c11;
                }
                case 38: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402c11;
                }
                case 44: {
                    goto lab_0x402c11;
                }
                case 45: {
                    goto lab_0x402c11;
                }
                case 46: {
                    goto lab_0x402c11;
                }
                case 47: {
                    goto lab_0x402c11;
                }
                case 48: {
                    goto lab_0x402c11;
                }
                case 49: {
                    goto lab_0x402c11;
                }
                case 50: {
                    goto lab_0x402c11;
                }
                case 51: {
                    goto lab_0x402c11;
                }
                case 52: {
                    goto lab_0x402c11;
                }
                case 53: {
                    goto lab_0x402c11;
                }
                case 54: {
                    goto lab_0x402c11;
                }
                case 55: {
                    goto lab_0x402c11;
                }
                case 56: {
                    goto lab_0x402c11;
                }
                case 57: {
                    goto lab_0x402c11;
                }
                case 58: {
                    goto lab_0x402c11;
                }
                case 59: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402c11;
                }
                case 66: {
                    goto lab_0x402c11;
                }
                case 67: {
                    goto lab_0x402c11;
                }
                case 68: {
                    goto lab_0x402c11;
                }
                case 69: {
                    goto lab_0x402c11;
                }
                case 70: {
                    goto lab_0x402c11;
                }
                case 71: {
                    goto lab_0x402c11;
                }
                case 72: {
                    goto lab_0x402c11;
                }
                case 73: {
                    goto lab_0x402c11;
                }
                case 74: {
                    goto lab_0x402c11;
                }
                case 75: {
                    goto lab_0x402c11;
                }
                case 76: {
                    goto lab_0x402c11;
                }
                case 77: {
                    goto lab_0x402c11;
                }
                case 78: {
                    goto lab_0x402c11;
                }
                case 79: {
                    goto lab_0x402c11;
                }
                case 80: {
                    goto lab_0x402c11;
                }
                case 81: {
                    goto lab_0x402c11;
                }
                case 82: {
                    goto lab_0x402c11;
                }
                case 83: {
                    goto lab_0x402c11;
                }
                case 84: {
                    goto lab_0x402c11;
                }
                case 85: {
                    goto lab_0x402c11;
                }
                case 86: {
                    goto lab_0x402c11;
                }
                case 87: {
                    goto lab_0x402c11;
                }
                case 88: {
                    goto lab_0x402c11;
                }
                case 89: {
                    goto lab_0x402c11;
                }
                case 90: {
                    goto lab_0x402c11;
                }
                case 91: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402c11;
                }
                case 94: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402c11;
                }
                case 96: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402c11;
                }
                case 98: {
                    goto lab_0x402c11;
                }
                case 99: {
                    goto lab_0x402c11;
                }
                case 100: {
                    goto lab_0x402c11;
                }
                case 101: {
                    goto lab_0x402c11;
                }
                case 102: {
                    goto lab_0x402c11;
                }
                case 103: {
                    goto lab_0x402c11;
                }
                case 104: {
                    goto lab_0x402c11;
                }
                case 105: {
                    goto lab_0x402c11;
                }
                case 106: {
                    goto lab_0x402c11;
                }
                case 107: {
                    goto lab_0x402c11;
                }
                case 108: {
                    goto lab_0x402c11;
                }
                case 109: {
                    goto lab_0x402c11;
                }
                case 110: {
                    goto lab_0x402c11;
                }
                case 111: {
                    goto lab_0x402c11;
                }
                case 112: {
                    goto lab_0x402c11;
                }
                case 113: {
                    goto lab_0x402c11;
                }
                case 114: {
                    goto lab_0x402c11;
                }
                case 115: {
                    goto lab_0x402c11;
                }
                case 116: {
                    goto lab_0x402c11;
                }
                case 117: {
                    goto lab_0x402c11;
                }
                case 118: {
                    goto lab_0x402c11;
                }
                case 119: {
                    goto lab_0x402c11;
                }
                case 120: {
                    goto lab_0x402c11;
                }
                case 121: {
                    goto lab_0x402c11;
                }
                case 122: {
                    goto lab_0x402c11;
                }
                case 123: {
                    goto lab_0x402bb5;
                }
                case 124: {
                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402bb5;
                }
                case 126: {
                    goto lab_0x402bdd;
                }
                default: {
                    goto lab_0x402fb5;
                }
            }
        }
      lab_0x402fb5:
        if (v23 != 1) {
            // 0x403320
            ps = 0;
            int64_t len = v15; // 0x403330
            if (v15 == -1) {
                // 0x403332
                len = strlen((char *)str);
            }
            // 0x40335e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4033bf:
                // 0x4033bf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4033c4
                int64_t v30 = v29 + str;
                v24 = function_405fe0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40393a_2;
                    }
                    case -1: {
                        goto lab_0x40393a_2;
                    }
                    case -2: {
                        // 0x403a1d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403a57
                            v19 = v18;
                            int64_t v31 = v18; // 0x403a5a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403a67
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403a60
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40393a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40393a_2;
                    }
                    case 1: {
                        goto lab_0x403390;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40343c
                        char v34 = *(char *)v33; // 0x40344d
                        unsigned char v35; // 0x402a67
                        if (v34 < 125) {
                            // 0x403458
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40346f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403440
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40344d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403458
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40346f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403440
                            v33++;
                        }
                        goto lab_0x403390;
                    }
                }
            }
            goto lab_0x40393a_2;
        } else {
            // 0x403004
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402c11;
        }
    }
  lab_0x403238:
    // 0x403238
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403b3a
        if (v8 > result) {
            // 0x403b43
            *(char *)(v12 + result) = 0;
        }
        // 0x402e67
        return result;
    }
    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402c11:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402c20
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402e2a_2;
        }
    }
    int64_t v39 = result; // 0x402d21
    char v40 = v20; // 0x402d21
    int64_t v41 = v38; // 0x402d21
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402d21
    int64_t v43 = v36; // 0x402d21
    goto lab_0x402c9d;
  lab_0x402e2a_2:
    // 0x402e67
    return function_402a10(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40393a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402c11;
    } else {
        uint64_t v49 = v46 + v5; // 0x40350e
        int64_t v50 = v5 + 1; // 0x4035f1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4035f8
        char v52 = v20; // 0x4035f8
        int64_t v53 = result; // 0x4035f8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4035c1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4035c5
            int64_t v56 = v54 + 1; // 0x4035ca
            int64_t v57 = v51 + 1; // 0x4035f1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4035bc
                v54 = v56;
                if (v47 > v54) {
                    // 0x4035c1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4035c5
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
        goto lab_0x402c9d;
    }
  lab_0x403390:
    // 0x403390
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4033af
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4033b2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40393a
        goto lab_0x40393a_2;
    }
    goto lab_0x4033bf;
  lab_0x402bdd:
    // 0x402bdd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402e2a_2;
    }
    goto lab_0x402c11;
  lab_0x402bb5:;
    bool v60 = v15 == 1; // 0x402bc0
    if (v15 == -1) {
        // 0x402bc2
        v60 = *(char *)v1 == 0;
    }
    // 0x402bce
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402c11;
    } else {
        goto lab_0x402bdd;
    }
  lab_0x402c9d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402ca2
        *(char *)(v44 + v45) = v40;
    }
    // 0x402ca6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402ab8_2;
}
// Address range: 0x403c40 - 0x403dde
int64_t function_403c40(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403c42
    int32_t * v3 = __errno_location(); // 0x403c5c
    int64_t v4 = (int64_t)g21; // 0x403c61
    int32_t v5 = *v3; // 0x403c6b
    int64_t v6 = v4; // 0x403c81
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403dd9
            function_405010(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403c90
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403c97
        int64_t v9; // 0x403c40
        if (g21 == &g22) {
            int64_t v10 = function_404e20(0, v8); // 0x403dba
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x403dbf
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404e20(v4, v8); // 0x403cab
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x403cba
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x403cba
        int32_t v14 = v7; // 0x403cc1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403cf1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403cfb
    int64_t * v17 = (int64_t *)v15; // 0x403cfe
    uint64_t v18 = *v17; // 0x403cfe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403d01
    int64_t result = *v19; // 0x403d01
    int64_t v20; // 0x403c40
    uint64_t v21 = function_402a10(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403d24
    if (v18 > v21) {
        // 0x403d9b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403d37
    *v17 = v22;
    if (result != (int64_t)&g42) {
        // 0x403d47
        free((int64_t *)result);
    }
    int64_t result2 = function_404dc0(v22); // 0x403d61
    *v19 = result2;
    int64_t v23; // 0x403c40
    function_402a10(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403d9b
    *v3 = v5;
    return result2;
}
// Address range: 0x403de0 - 0x403e14
int64_t function_403de0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403de7
    int64_t result = function_404fc0(a1 == 0 ? (int64_t)&g43 : a1, 56); // 0x403e06
    return result;
}
// Address range: 0x403e20 - 0x403e2f
int64_t function_403e20(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g43 : a1); // 0x403e2c
    return result;
}
// Address range: 0x403e30 - 0x403e3f
int64_t function_403e30(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x403e38
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g43;
}
// Address range: 0x403e40 - 0x403e73
int64_t function_403e40(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 + 8 : a1 + 8; // 0x403e59
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403e5e
    uint32_t v3 = *v2; // 0x403e5e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403e62
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403e80 - 0x403e93
int64_t function_403e80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g43 + 4 : a1 + 4); // 0x403e8c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403ea0 - 0x403ecb
int64_t function_403ea0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g43 : a1; // 0x403ea8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403ec5
        abort();
        // UNREACHABLE
    }
    // 0x403ebc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g43;
}
// Address range: 0x403ed0 - 0x403f42
int64_t function_403ed0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g43 : a5; // 0x403ef2
    int32_t * v2 = __errno_location(); // 0x403efb
    uint32_t v3 = *(int32_t *)v1; // 0x403f1b
    int64_t result = function_402a10(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403f2a
    return result;
}
// Address range: 0x403f50 - 0x404031
int64_t function_403f50(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g43 : a4; // 0x403f72
    int32_t * v2 = __errno_location(); // 0x403f78
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403f97
    int32_t * v4 = (int32_t *)v1; // 0x403f9a
    int64_t v5 = function_402a10(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403fb5
    int64_t v6 = v5 + 1; // 0x403fba
    int64_t result = function_404dc0(v6); // 0x403fcf
    function_402a10(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404014
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40401d
    return result;
}
// Address range: 0x404040 - 0x40404a
int64_t function_404040(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404040
    return function_403f50(a1, a2, 0, a3);
}
// Address range: 0x404050 - 0x4040e5
int64_t function_404050(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x404050
    int64_t v2 = v1; // 0x404050
    int64_t v3 = v2; // 0x404064
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x404083
        free((int64_t *)*(int64_t *)v4);
        v3 = &g53;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404080
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g53;
        }
    }
    int64_t v6 = v3; // 0x40409d
    if (g22 != 0x60a2e0) {
        // 0x40409f
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g42;
        v6 = &g53;
    }
    int64_t result = v6; // 0x4040c1
    if (g21 != &g22) {
        // 0x4040c3
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g53;
    }
    // 0x4040d6
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x4040f0 - 0x404101
int64_t function_4040f0(void) {
    // 0x4040f0
    int64_t v1; // 0x4040f0
    return function_403c40(v1, v1, -1, (int64_t *)&g43);
}
// Address range: 0x404110 - 0x40411a
int64_t function_404110(void) {
    // 0x404110
    int64_t v1; // 0x404110
    return function_403c40(v1, v1, v1, (int64_t *)&g43);
}
// Address range: 0x404120 - 0x404136
int64_t function_404120(int64_t a1) {
    // 0x404120
    return function_403c40(0, a1, -1, (int64_t *)&g43);
}
// Address range: 0x404140 - 0x404152
int64_t function_404140(int64_t a1, int64_t a2) {
    // 0x404140
    return function_403c40(0, a1, a2, (int64_t *)&g43);
}
// Address range: 0x404160 - 0x4041c8
int64_t function_404160(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404170
    return function_403c40((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4041d0 - 0x404234
int64_t function_4041d0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4041e0
    return function_403c40((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404240 - 0x40424c
int64_t function_404240(int64_t a1, int64_t a2) {
    // 0x404240
    return function_404160(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404250 - 0x40425f
int64_t function_404250(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404250
    return function_4041d0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404260 - 0x4042d0
int64_t function_404260(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x40426d
    int128_t v2 = __asm_movdqa(g44); // 0x404275
    int128_t v3 = __asm_movdqa(g45); // 0x40427d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404292
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4042a8
    uint32_t v6 = *v5; // 0x4042a8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4042ad
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403c40(0, a1, a2, &v4);
}
// Address range: 0x4042d0 - 0x4042dd
int64_t function_4042d0(int64_t a1, int64_t a2) {
    // 0x4042d0
    return function_404260(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4042e0 - 0x4042f1
int64_t function_4042e0(int64_t a1) {
    // 0x4042e0
    return function_404260(a1, -1, 58);
}
// Address range: 0x404300 - 0x40430a
int64_t function_404300(void) {
    // 0x404300
    int64_t v1; // 0x404300
    return function_404260(v1, v1, 58);
}
// Address range: 0x404310 - 0x40437e
int64_t function_404310(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40432a
    return function_403c40((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404380 - 0x4043ec
int64_t function_404380(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g43); // 0x404387
    int128_t v2 = __asm_movdqa(g44); // 0x40438f
    int128_t v3 = __asm_movdqa(g45); // 0x404397
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4043b9
    if (a2 == 0 || a3 == 0) {
        // 0x4043e7
        abort();
        // UNREACHABLE
    }
    // 0x4043ca
    return function_403c40(a1, a4, a5, &v4);
}
// Address range: 0x4043f0 - 0x4043f9
int64_t function_4043f0(void) {
    // 0x4043f0
    int64_t v1; // 0x4043f0
    return function_404380(v1, v1, v1, v1, -1);
}
// Address range: 0x404400 - 0x404417
int64_t function_404400(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404400
    return function_404380(0, a1, a2, a3, -1);
}
// Address range: 0x404420 - 0x404433
int64_t function_404420(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404420
    return function_404380(0, a1, a2, a3, a4);
}
// Address range: 0x404440 - 0x40444a
int64_t function_404440(void) {
    // 0x404440
    int64_t v1; // 0x404440
    return function_403c40(v1, v1, v1, &g20);
}
// Address range: 0x404450 - 0x404462
int64_t function_404450(int64_t a1, int64_t a2) {
    // 0x404450
    return function_403c40(0, a1, a2, &g20);
}
// Address range: 0x404470 - 0x404481
int64_t function_404470(void) {
    // 0x404470
    int64_t v1; // 0x404470
    return function_403c40(v1, v1, -1, &g20);
}
// Address range: 0x404490 - 0x4044a6
int64_t function_404490(int64_t a1) {
    // 0x404490
    return function_403c40(0, a1, -1, &g20);
}
// Address range: 0x4044b0 - 0x4044c0
int64_t function_4044b0(int64_t * a1) {
    // 0x4044b0
    *a1 = 0;
    *(int64_t *)((int64_t)a1 + 8) = 0;
    int64_t result; // 0x4044b0
    return result;
}
// Address range: 0x4044c0 - 0x404639
int64_t function_4044c0(int64_t a1, char * a2, int64_t a3, int64_t * a4) {
    // 0x4044c0
    int128_t v1; // 0x4044c0
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a4;
    int128_t v4 = __asm_pxor(v2, v2); // 0x4044c2
    int64_t v5; // bp-88, 0x4044c0
    int64_t v6 = &v5; // 0x4044d4
    v5 = __asm_movaps(v4);
    __asm_movaps(v4);
    int64_t v7 = v3; // 0x4044e4
    int64_t v8 = a1; // 0x4044e4
    int64_t * v9; // 0x4044c0
    int64_t v10; // 0x4044c0
    int64_t v11; // 0x4044c0
    int64_t v12; // 0x4044c0
    int64_t v13; // 0x4044c0
    if (a3 == 0) {
        goto lab_0x40453c;
    } else {
        int64_t v14 = (int64_t)a2;
        int64_t v15 = v14; // 0x4044ee
        unsigned char v16 = *(char *)v15; // 0x4044f0
        int64_t v17 = v16; // 0x4044f0
        v15++;
        unsigned char v18 = v16 % 64;
        int64_t * v19 = (int64_t *)((v17 / 8 & 24) + v6); // 0x404507
        *v19 = (v18 == 0 ? 1 : 1 << (int64_t)v18) | *v19;
        while (v14 + a3 != v15) {
            // 0x4044f0
            v16 = *(char *)v15;
            v17 = v16;
            v15++;
            v18 = v16 % 64;
            v19 = (int64_t *)((v17 / 8 & 24) + v6);
            *v19 = (v18 == 0 ? 1 : 1 << (int64_t)v18) | *v19;
        }
        int64_t * v20 = (int64_t *)(a1 + 8);
        uint64_t v21 = *v20; // 0x404510
        v9 = v20;
        v10 = v21;
        v11 = v17;
        v13 = 1;
        v12 = v17;
        if (v21 >= *(int64_t *)(a1 + 16)) {
            goto lab_0x404546;
        } else {
            goto lab_0x404520;
        }
    }
  lab_0x40453c:;
    int64_t * v22 = (int64_t *)(a1 + 8);
    uint64_t v23 = *v22; // 0x40453c
    v9 = v22;
    v10 = v23;
    v11 = v7;
    v13 = v8;
    v12 = v7;
    if (v23 < *(int64_t *)(a1 + 16)) {
        goto lab_0x404520;
    } else {
        goto lab_0x404546;
    }
  lab_0x404520:
    // 0x404520
    *v9 = v10 + 1;
    int64_t v24 = v11; // 0x404528
    int64_t v25 = (int64_t)*(char *)v10; // 0x404528
    int64_t v26 = v13; // 0x404528
    goto lab_0x40452b;
  lab_0x404546:;
    int32_t v56 = __uflow((struct _IO_FILE *)a1); // 0x404549
    int64_t v57 = v56; // 0x40454e
    v24 = v12;
    v25 = v57;
    v26 = a1;
    int64_t v28 = v12; // 0x404552
    int64_t v29 = v57; // 0x404552
    int64_t v30 = a1; // 0x404552
    if (v56 >= 0) {
        goto lab_0x40452b;
    } else {
        goto lab_0x404554;
    }
  lab_0x40452b:
    // 0x40452b
    v8 = v26;
    v7 = v24;
    int64_t v27 = *(int64_t *)(8 * (0x100000000 * v25 >> 32) / 64 + v6); // 0x404532
    v28 = v7;
    v29 = v25;
    v30 = v8;
    if ((1 << v25 % 64 & v27) == 0) {
        goto lab_0x404554;
    } else {
        goto lab_0x40453c;
    }
  lab_0x404554:
    // 0x404554
    if ((int32_t)v29 < 0) {
        // 0x4045f3
        return -1;
    }
    int64_t * v31 = (int64_t *)(v3 + 8); // 0x404554
    int64_t * v32 = (int64_t *)(a1 + 8);
    int64_t v33 = v29; // 0x4044c0
    int64_t result = 0;
    int64_t v34 = *v31;
    bool v35 = false;
    int64_t v36; // 0x4044c0
    int64_t v37; // 0x4044c0
    int64_t v38; // 0x4044c0
    int64_t v39; // 0x4044c0
    int64_t v40; // 0x4044c0
    int64_t v41; // 0x4045d3
    if (result != v28) {
        // 0x404568
        v40 = result + v34;
        v39 = v30;
        v36 = v28;
        v38 = v34;
        if (v35) {
            // break -> 0x4045e8
            break;
        }
    } else {
        if (v34 == 0) {
            // 0x404618
            v37 = 128;
        } else {
            if (result >= 0x5555555555555554) {
                // 0x40462a
                function_405010(v30);
                // UNREACHABLE
            }
            // 0x4045c2
            v37 = result + 1 + result / 2;
        }
        // 0x4045cd
        v41 = function_404e20(v34, v37);
        v40 = v41 + result;
        v39 = v34;
        v36 = v37;
        v38 = v41;
        if (v35) {
            // break -> 0x4045e8
            break;
        }
    }
    int64_t v42 = *(int64_t *)(8 * (0x100000000 * v33 >> 32) / 64 + v6); // 0x404577
    int64_t v43 = v40; // 0x40457f
    int64_t v44 = v36; // 0x40457f
    int64_t v45 = v38; // 0x40457f
    while ((v42 & 1 << v33 % 64) == 0) {
        int64_t v46 = v39;
        *(char *)v40 = (char)v33;
        uint64_t v47 = *v32; // 0x404587
        int64_t v48; // 0x4044c0
        int64_t v49; // 0x4044c0
        if (v47 >= *(int64_t *)(a1 + 16)) {
            // 0x404608
            v48 = __uflow((struct _IO_FILE *)a1);
            v49 = a1;
        } else {
            // 0x404591
            *v32 = v47 + 1;
            v48 = (int64_t)*(char *)v47;
            v49 = v46;
        }
        int64_t v50 = result + 1; // 0x404583
        bool v51 = v50 == 0; // 0x40459e
        v33 = v48;
        if (v50 == 0 == (int32_t)v48 < 0) {
            // 0x4045f3
            return -1;
        }
        int64_t v52 = v49;
        result = v50;
        int64_t v53 = v36;
        v34 = v38;
        v35 = (int32_t)v48 < 0;
        if (result != v53) {
            int64_t v54 = result + v34; // 0x404568
            v40 = v54;
            v39 = v52;
            v36 = v53;
            v38 = v34;
            v43 = v54;
            v44 = v53;
            v45 = v34;
            if (v35) {
                // break -> 0x4045e8
                break;
            }
        } else {
            if (v34 == 0) {
                // 0x404618
                v37 = 128;
                if (!v51) {
                    // 0x404628
                    v37 = v53;
                    if (result < 0) {
                        // 0x40462a
                        function_405010(v52);
                        // UNREACHABLE
                    }
                }
            } else {
                if (result >= 0x5555555555555554) {
                    // 0x40462a
                    function_405010(v52);
                    // UNREACHABLE
                }
                // 0x4045c2
                v37 = result + 1 + result / 2;
            }
            // 0x4045cd
            v41 = function_404e20(v34, v37);
            int64_t v55 = v41 + result; // 0x4045db
            v40 = v55;
            v39 = v34;
            v36 = v37;
            v38 = v41;
            v43 = v55;
            v44 = v37;
            v45 = v41;
            if (v35) {
                // break -> 0x4045e8
                break;
            }
        }
        // 0x404570
        v42 = *(int64_t *)(8 * (0x100000000 * v33 >> 32) / 64 + v6);
        v43 = v40;
        v44 = v36;
        v45 = v38;
    }
    // 0x4045e8
    *(char *)v43 = 0;
    *v31 = v45;
    *a4 = v44;
    // 0x4045f3
    return result;
}
// Address range: 0x404640 - 0x404819
int64_t function_404640(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 512; // 0x404669
    int64_t v2 = 64; // 0x404669
    if (a2 != 0) {
        // 0x40466b
        v2 = a2 + 1;
        v1 = 8 * v2;
        if (v1 > -1 != v2 < 0x2000000000000000) {
            // 0x40468a
            function_405010(a1);
            // UNREACHABLE
        }
    }
    int64_t v3 = 0; // bp-72, 0x4046af
    int64_t v4 = 0; // 0x4046c4
    int64_t v5 = v2; // 0x4046c4
    int64_t v6 = function_404dc0(v1); // 0x4046c4
    int64_t v7 = function_404dc0(v1); // 0x4046c4
    int64_t v8; // 0x404640
    int64_t v9; // 0x404640
    uint64_t result; // 0x404640
    while (true) {
        int64_t v10 = v7;
        int64_t v11 = v6;
        uint64_t v12 = v5;
        result = v4;
        int64_t v13 = function_4044c0(a1, (char *)a3, a4, &v3); // 0x40471b
        int64_t v14; // 0x404640
        int64_t v15; // 0x404640
        int64_t v16; // 0x404640
        if (result < v12) {
            // 0x4046d0
            v5 = v12;
            v16 = a1;
            v14 = v11;
            v15 = v10;
            v8 = v11;
            v9 = v10;
            if (v13 == -1) {
                // break -> 0x404787
                break;
            }
        } else {
            int64_t v17; // 0x404640
            int64_t v18; // 0x404640
            if (v11 == 0) {
                // 0x4047d0
                v18 = 128;
                v17 = 16;
                if (v12 != 0) {
                    int64_t v19 = 8 * v12; // 0x4047e2
                    v18 = v19;
                    v17 = v12;
                    if (v19 > -1 != v12 < 0x2000000000000000) {
                        // 0x40468a
                        function_405010(a1);
                        // UNREACHABLE
                    }
                }
            } else {
                // 0x404731
                if (v12 >= 0xaaaaaaaaaaaaaaa) {
                    // 0x40468a
                    function_405010(a1);
                    // UNREACHABLE
                }
                int64_t v20 = v12 + 1 + v12 / 2; // 0x40474a
                v18 = 8 * v20;
                v17 = v20;
            }
            int64_t v21 = function_404e20(v11, v18); // 0x404762
            int64_t v22 = function_404e20(v10, v18); // 0x404775
            v5 = v17;
            v16 = v10;
            v14 = v21;
            v15 = v22;
            v8 = v21;
            v9 = v22;
            if (v13 == -1) {
                // break -> 0x404787
                break;
            }
        }
        int64_t v23 = v13 + 1; // 0x4046dd
        int64_t v24 = v16; // 0x4046e1
        if (v23 < 0) {
            // 0x40468a
            function_405010(v24);
            // UNREACHABLE
        }
        // 0x4046e3
        v7 = v15;
        v6 = v14;
        int64_t v25 = function_404dc0(v23); // 0x4046e6
        int64_t v26 = 8 * result; // 0x4046eb
        *(int64_t *)(v7 + v26) = v13;
        int64_t * dest_mem = memcpy((int64_t *)v25, NULL, (int32_t)v23); // 0x4046fb
        *(int64_t *)(v6 + v26) = (int64_t)dest_mem;
        v4 = result + 1;
    }
    int64_t v27 = 8 * result; // 0x404787
    *(int64_t *)(v8 + v27) = 0;
    *(int64_t *)(v9 + v27) = 0;
    free(NULL);
    *(int64_t *)a5 = v8;
    if (a6 == 0) {
        // 0x40480f
        free((int64_t *)v9);
    } else {
        // 0x4047b2
        *(int64_t *)a6 = v9;
    }
    // 0x4047ba
    return result;
}
// Address range: 0x404820 - 0x404bfd
int64_t function_404820(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4048b8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40483c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404856
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40489b
    if (a6 < 10) {
        // 0x4048aa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4049a2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404c00 - 0x404c20
int64_t function_404c00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404c00
    if (a5 == 0) {
        // 0x404c1b
        return function_404820(a1, a2, a3, a4, a5, 0, (int64_t)&g53);
    }
    int64_t v1 = 0; // 0x404c07
    v1++;
    int64_t v2 = v1; // 0x404c19
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404c10
        v1++;
        v2 = v1;
    }
    // 0x404c1b
    return function_404820(a1, a2, a3, a4, a5, v2, (int64_t)&g53);
}
// Address range: 0x404c20 - 0x404c80
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = v1;
    int64_t v3; // bp-88, 0x404c20
    int64_t v4 = &v3; // 0x404c20
    int64_t v5 = 0;
    uint32_t v6 = (int32_t)v1; // 0x404c53
    int64_t v7; // 0x404c3d
    int64_t * v8; // 0x404c5b
    int64_t v9; // 0x404c5b
    int64_t v10; // 0x404c67
    if (v6 < 48) {
        // 0x404c30
        *(int32_t *)v2 = v6 + 8;
        v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
        *(int64_t *)(8 * v5 + v4) = v7;
        if (v7 == 0) {
            // break -> 0x404c73
            break;
        }
    } else {
        // 0x404c5b
        v8 = (int64_t *)(v2 + 8);
        v9 = *v8;
        *v8 = v9 + 8;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * v5 + v4) = v10;
        if (v10 == 0) {
            // break -> 0x404c73
            break;
        }
    }
    int64_t v11 = 10; // 0x404c51
    while (v5 != 9) {
        // 0x404c49
        v5++;
        v6 = *(int32_t *)&v2;
        if (v6 < 48) {
            // 0x404c30
            *(int32_t *)v2 = v6 + 8;
            v7 = *(int64_t *)(*(int64_t *)(v2 + 16) + (int64_t)v6);
            *(int64_t *)(8 * v5 + v4) = v7;
            v11 = v5;
            if (v7 == 0) {
                // break -> 0x404c73
                break;
            }
        } else {
            // 0x404c5b
            v8 = (int64_t *)(v2 + 8);
            v9 = *v8;
            *v8 = v9 + 8;
            v10 = *(int64_t *)v9;
            *(int64_t *)(8 * v5 + v4) = v10;
            v11 = v5;
            if (v10 == 0) {
                // break -> 0x404c73
                break;
            }
        }
        // 0x404c49
        v11 = 10;
    }
    // 0x404c73
    return function_404820(a1, a2, a3, a4, v4, v11, (int64_t)&g53);
}
// Address range: 0x404c80 - 0x404d3c
int64_t function_404c80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404c80
    int64_t v1; // bp-168, 0x404c80
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404c80
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404c80
    int64_t v8; // 0x404c80
    int64_t v9; // bp-56, 0x404c80
    int64_t v10; // 0x404ce5
    int64_t v11; // 0x404d09
    if ((int32_t)v6 < 48) {
        // 0x404cd0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404d20
            break;
        }
    } else {
        // 0x404d02
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404d20
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404cfa
    int64_t v13 = 10; // 0x404cfa
    while (v5 != 9) {
        // 0x404cfc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404cd0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404d20
                break;
            }
        } else {
            // 0x404d02
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404d20
                break;
            }
        }
        // 0x404cf2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404d20
    int64_t v14; // bp-136, 0x404c80
    int64_t result = function_404820(a1, a2, a3, a4, (int64_t)&v14, v13, (int64_t)&g53); // 0x404d2f
    return result;
}
// Address range: 0x404d40 - 0x404db4
int64_t function_404d40(int64_t a1) {
    // 0x404d40
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404da3
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404dc0 - 0x404dda
int64_t function_404dc0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404dc4
    if (size != 0 != (mem == NULL)) {
        // 0x404dd3
        return (int64_t)mem;
    }
    // 0x404dd5
    function_405010(size);
    // UNREACHABLE
}
// Address range: 0x404de0 - 0x404e01
int64_t function_404de0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404de3
    int64_t v2 = v1; // 0x404de3
    if (v2 < 0) {
        // 0x404dfb
        function_405010(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404df9
        return function_404dc0(v2);
    }
    // 0x404dfb
    function_405010(v2);
    // UNREACHABLE
}
// Address range: 0x404e10 - 0x404e12
int64_t function_404e10(void) {
    // 0x404e10
    int64_t v1; // 0x404e10
    return function_404dc0(v1);
}
// Address range: 0x404e20 - 0x404e56
int64_t function_404e20(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404e48
        free(v1);
        return (int32_t)&g53 ^ (int32_t)&g53;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404e31
    if (a2 != 0 != (mem == NULL)) {
        // 0x404e40
        return (int64_t)mem;
    }
    // 0x404e51
    function_405010(a1);
    // UNREACHABLE
}
// Address range: 0x404e60 - 0x404e81
int64_t function_404e60(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404e63
    int64_t v2 = v1; // 0x404e63
    if (v2 < 0) {
        // 0x404e7b
        function_405010(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404e79
        return function_404e20(a1, v2);
    }
    // 0x404e7b
    function_405010(a1);
    // UNREACHABLE
}
// Address range: 0x404e90 - 0x404f16
int64_t function_404e90(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404eeb
            function_405010(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404e20(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404ed3
    if (a2 == 0) {
        // 0x404ef8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404ed8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404eeb
        function_405010(a1);
        // UNREACHABLE
    }
    // 0x404eba
    *(int64_t *)a2 = v2;
    return function_404e20(a1, v2 * a3);
}
// Address range: 0x404f20 - 0x404f70
int64_t function_404f20(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404f20
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404f6a
            function_405010(a1);
            // UNREACHABLE
        }
        // 0x404f42
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404e20(a1, v1);
    }
    if (a2 == 0) {
        // 0x404f55
        *(int64_t *)a2 = 128;
        return function_404e20(0, 128);
    }
    // 0x404f68
    if (a2 < 0) {
        // 0x404f6a
        function_405010(a1);
        // UNREACHABLE
    }
    // 0x404f42
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404e20(a1, v1);
}
// Address range: 0x404f70 - 0x404f87
int64_t function_404f70(int64_t a1, int64_t a2) {
    // 0x404f70
    return (int64_t)memset((int64_t *)function_404dc0(a1), 0, (int32_t)a1);
}
// Address range: 0x404f90 - 0x404fbe
int64_t function_404f90(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404f97
    if ((int64_t)v1 < 0) {
        // 0x404fb9
        function_405010(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404fb9
        function_405010(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404faa
    if (mem != NULL) {
        // 0x404fb4
        return (int64_t)mem;
    }
    // 0x404fb9
    function_405010(nmemb);
    // UNREACHABLE
}
// Address range: 0x404fc0 - 0x404fe8
int64_t function_404fc0(int64_t a1, int64_t a2) {
    int64_t v1 = function_404dc0(a2); // 0x404fcf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404ff0 - 0x405003
int64_t function_404ff0(int64_t str) {
    // 0x404ff0
    return function_404fc0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405010 - 0x405041
int64_t function_405010(int64_t a1) {
    // 0x405010
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405050 - 0x4050cb
int64_t function_405050(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405057
    if (fileno(stream) < 0) {
        // 0x4050b7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40506a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40509b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4050b7
            return fclose(stream);
        }
    }
    // 0x40506c
    if ((int32_t)function_4050d0(a1, v1) == 0) {
        // 0x4050b7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405078
    int32_t v3 = *v2; // 0x405080
    int64_t result = fclose(stream); // 0x40508e
    if (v3 != 0) {
        // 0x4050c0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405090
    return result;
}
// Address range: 0x4050d0 - 0x405110
int64_t function_4050d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x4050ea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x4050ea
        return fflush(stream);
    }
    // 0x4050f8
    function_4051b0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405110 - 0x4051ae
int64_t function_405110(int64_t a1, int64_t a2) {
    char * file_path = (char *)a1; // 0x40511e
    char * mode = (char *)a2; // 0x40511e
    int64_t stream; // 0x405110
    struct _IO_FILE * file = freopen(file_path, mode, (struct _IO_FILE *)stream); // 0x40511e
    if (a1 == 0 || file == NULL) {
        // 0x405148
        return (int64_t)file;
    }
    int32_t fd2 = fileno(file); // 0x405133
    if (dup2(fd2, fd2) >= 0 || *__errno_location() != 9) {
        // 0x405148
        return (int64_t)file;
    }
    int32_t fd = open("/dev/null", O_CLOEXEC); // 0x40516e
    if (fd == fd2) {
        // 0x405191
        return (int64_t)freopen(file_path, mode, file);
    }
    int32_t v1 = dup2(fd, fd2); // 0x405180
    close(fd);
    if (v1 < 0) {
        // 0x405148
        return (int64_t)file;
    }
    // 0x405191
    return (int64_t)freopen(file_path, mode, file);
}
// Address range: 0x4051b0 - 0x405207
int64_t function_4051b0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4051b0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4051ba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4051eb
    int64_t result = -1; // 0x4051f4
    if (v1 != -1) {
        // 0x4051f6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405202
    return result;
}
// Address range: 0x405210 - 0x4052ef
int64_t function_405210(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40521c
    uint32_t v2 = *v1; // 0x40521c
    int64_t v3 = a2 & 0xffffffff; // 0x405221
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405224
    uint64_t v5 = (int64_t)*v4; // 0x405224
    int64_t v6; // 0x405292
    if (v3 <= v5) {
      lab_0x40528c_2:
        // 0x40528c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405212
    int64_t v8 = v2; // 0x405210
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40528c
        goto lab_0x40528c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405248
    int64_t v17; // 0x405256
    int64_t * v18; // 0x405270
    int64_t * v19; // 0x405273
    int64_t v20; // 0x40527e
    int64_t v21; // 0x405256
    while ((v16 & 0xffffffff) > v10) {
        // 0x405253
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405270
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405287
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40528c
            goto lab_0x40528c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40528c
            goto lab_0x40528c_2;
        }
        // 0x405242
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4052cb
    int64_t * v23 = (int64_t *)v22; // 0x4052d0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4052d3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4052d0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x4052e7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40523d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40528c
            goto lab_0x40528c_2;
        }
        // 0x405242
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405253
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405270
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405287
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40528c
                goto lab_0x40528c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40528c
                goto lab_0x40528c_2;
            }
            // 0x405242
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4052b0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4052d0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x4052e7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40528c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4052f0 - 0x40590c
int64_t function_4052f0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40530f
    int64_t v2 = *v1; // 0x40530f
    char * str2 = (char *)v2; // 0x40531c
    char c = *str2; // 0x40531c
    int64_t v3 = v2; // 0x405348
    int64_t v4 = 0; // 0x4052f0
    int32_t v5; // 0x4052f0
    int64_t v6; // 0x4052f0
    int64_t v7; // 0x4052f0
    int64_t v8; // 0x4052f0
    int64_t v9; // 0x4052f0
    int64_t v10; // 0x4052f0
    int64_t v11; // 0x4052f0
    int64_t v12; // 0x4052f0
    int64_t v13; // 0x4052f0
    int64_t str3; // 0x4052f0
    int64_t v14; // 0x4052f0
    int64_t v15; // 0x4052f0
    int64_t v16; // 0x4052f0
    int64_t v17; // 0x4052f0
    int32_t v18; // 0x4052f0
    int32_t v19; // 0x4052f0
    int32_t v20; // 0x4052f0
    int32_t v21; // 0x4052f0
    int32_t v22; // 0x4052f0
    int32_t v23; // 0x4052f0
    int32_t v24; // 0x4052f0
    int32_t v25; // 0x4052f0
    int32_t v26; // 0x4052f0
    int32_t v27; // 0x4052f0
    int32_t v28; // 0x4052f0
    int32_t v29; // 0x4052f0
    int64_t nmemb; // 0x4052f0
    int64_t v30; // 0x4052f0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40534c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405348
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405358
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40535e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405328
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40538c
                int64_t v34; // 0x4052f0
                int64_t v35; // 0x4052f0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405395
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405510;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4053a6
                int64_t v37 = *(int64_t *)v36; // 0x4053aa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405380
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405395
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405510;
                        }
                    }
                    // 0x4053a6
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
                  lab_0x4053f6:
                    // 0x4053f6
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
                        goto lab_0x405450;
                    } else {
                        if (v11 == 0) {
                            // 0x4055c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405450;
                        } else {
                            if (v39 == 0) {
                                // 0x405570
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40541a;
                                } else {
                                    // 0x40557c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40541a;
                                    } else {
                                        // 0x40558a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40541a;
                                        } else {
                                            goto lab_0x405450;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40541a;
                            }
                        }
                    }
                }
              lab_0x405461:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405636
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4057e2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x405802
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40584f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x405869
                            int64_t v45; // 0x40586b
                            if (*(char *)v42 != 0) {
                                // 0x40586b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405863
                            while (v17 + nmemb != v42) {
                                // 0x405865
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40586b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x405858
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405890
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x405644
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40579f
                        free((int64_t *)v17);
                    }
                    // 0x405699
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4056b0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40555e
                    return 63;
                }
                // 0x405480
                v5 = v39;
                if (v13 != 0) {
                    // 0x405504
                    v35 = v13;
                    v34 = v25;
                  lab_0x405510:;
                    int32_t * v49 = (int32_t *)a7; // 0x405520
                    uint32_t v50 = *v49; // 0x405520
                    int64_t v51 = v50; // 0x405520
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40552a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405533
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40575f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40570a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40555e
                            return 63;
                        }
                        // 0x4055a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4058bf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4057bd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4057d0
                                // 0x40555e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4056ce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4056e2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40554b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40554e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405552
                    int64_t result = v59; // 0x405558
                    if (v58 != 0) {
                        // 0x40555a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40555e
                    return result;
                }
            } else {
                // 0x40535e
                v5 = v32;
            }
            // break -> 0x405485
            break;
        }
    }
    // 0x405485
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40549d
        if (*(char *)(v60 + 1) != 45) {
            // 0x4054a7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40555e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4055e9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x4054d6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x4054e6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405450:
    // 0x405450
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405450
    int64_t v63 = *(int64_t *)v62; // 0x405454
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405461
        goto lab_0x405461;
    }
    goto lab_0x4053f6;
  lab_0x40541a:
    // 0x40541a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4052f0
    int32_t v65; // 0x4052f0
    int32_t v66; // 0x4052f0
    if (v27 != 0) {
        goto lab_0x405450;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4055d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405450;
            } else {
                goto lab_0x405441;
            }
        } else {
            // 0x405435
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40572c
                int64_t v67 = (int64_t)mem; // 0x40572c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405450;
                } else {
                    // 0x40573f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405441;
                }
            } else {
                goto lab_0x405441;
            }
        }
    }
  lab_0x405441:
    // 0x405441
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405450;
}
// Address range: 0x405910 - 0x405ed6
int64_t function_405910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405931
    if (v3 < 1) {
        // 0x405aee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40592d
    int32_t v5 = *(int32_t *)a7; // 0x405939
    uint64_t v6 = a1 & 0xffffffff; // 0x40593b
    int64_t v7 = v2; // 0x405940
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405943
    *v8 = 0;
    int64_t v9; // 0x405910
    int64_t v10; // 0x405910
    int64_t v11; // 0x405910
    int64_t v12; // 0x405910
    int64_t str; // 0x405910
    int64_t v13; // 0x405910
    int64_t v14; // 0x405910
    int64_t v15; // 0x405910
    int64_t v16; // 0x405910
    int64_t v17; // 0x405910
    int32_t v18; // 0x405910
    char v19; // 0x405910
    if (v5 == 0) {
        // 0x405b28
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40595a;
    } else {
        // 0x405953
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4059a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4059a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405a68;
            } else {
                int64_t v22 = v7 + 1; // 0x4059b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4059c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405a7c;
                } else {
                    goto lab_0x4059d8;
                }
            }
        } else {
            goto lab_0x40595a;
        }
    }
  lab_0x40595a:
    // 0x40595a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405960
    *v24 = 0;
    int64_t v25; // 0x405910
    int64_t v26; // 0x405910
    int64_t v27; // 0x405910
    switch (*(char *)&v2) {
        case 45: {
            // 0x405a50
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a5d;
        }
        case 43: {
            // 0x405d60
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405a5d;
        }
        default: {
            // 0x40597c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405cdf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405df8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405a5d;
                } else {
                    // 0x405ced
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40598a;
                }
            } else {
                goto lab_0x40598a;
            }
        }
    }
  lab_0x405a68:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405a6f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4059d8;
    } else {
        goto lab_0x405a7c;
    }
  lab_0x40598a:
    // 0x40598a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405a5d;
  lab_0x405a5d:
    // 0x405a5d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405a68;
  lab_0x4059d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4059d8
    int64_t v31 = v30; // 0x4059d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4059da
    if ((int64_t)*v32 > v31) {
        // 0x4059df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4059e2
    if (*v33 > v30) {
        // 0x4059e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4059ea
    int64_t v35 = v31; // 0x4059ee
    int64_t v36 = v15; // 0x4059ee
    int64_t v37; // 0x405910
    int64_t v38; // 0x405910
    int64_t v39; // 0x405910
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405b58
        int64_t v41 = v40; // 0x405b58
        v2 = v41;
        int64_t v42; // 0x405910
        if (*v33 == v40) {
            // 0x405d40
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405d48
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405b64
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405b68
                function_405210(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405b78
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405b81
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405b8a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405ba1
            int64_t v47 = v45 & 0xffffffff; // 0x405ba5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405bae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405bb4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405bb6;
                }
            }
            int64_t v48 = v47 + 1; // 0x405b90
            int64_t v49 = v48 & 0xffffffff; // 0x405b90
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405ba1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405bae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405bb4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405bb6;
                    }
                }
                // 0x405b90
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405d58
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405bb6;
    } else {
        goto lab_0x4059f4;
    }
  lab_0x405a7c:
    // 0x405a7c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405a7f
    int64_t v51 = v12; // 0x405a7f
    int64_t v52 = v14; // 0x405a7f
    if (*(char *)v10 == 0) {
        goto lab_0x4059d8;
    } else {
        goto lab_0x405a85;
    }
  lab_0x4059f4:;
    int32_t v53 = v35; // 0x4059f4
    int64_t v54; // 0x405910
    int64_t v55; // 0x405910
    int64_t v56; // 0x405910
    int64_t v57; // 0x405910
    int64_t v58; // 0x405910
    int64_t v59; // 0x405910
    char * v60; // 0x405910
    int64_t v61; // 0x405910
    int64_t v62; // 0x405a09
    int64_t v63; // 0x405910
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405b43
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405b46;
    } else {
        // 0x4059fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405910
        int64_t v66 = v65 ? -1 : 1; // 0x405a10
        int64_t v67 = (int64_t)"--"; // 0x405910
        int64_t v68 = v62; // 0x405910
        int64_t v69 = 3; // 0x405a10
        unsigned char v70 = *(char *)v68; // 0x405a10
        char v71 = *(char *)v67; // 0x405a10
        char v72 = v71; // 0x405a10
        bool v73 = false; // 0x405a10
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
            // 0x405b00
            if (*(char *)v62 == 45) {
                // 0x405bc0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405bc0
                if (c == 0) {
                    goto lab_0x405b0a;
                } else {
                    // 0x405bcd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405c50;
                    } else {
                        if (c == 45) {
                            // 0x405e33
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405ca5;
                        } else {
                            // 0x405bde
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405c50;
                            } else {
                                // 0x405be3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405c04;
                                } else {
                                    // 0x405bea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405c50;
                                    } else {
                                        goto lab_0x405c04;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405b0a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405a20
            v2 = v75;
            int32_t v76 = *v32; // 0x405a23
            int64_t v77 = v35 + 1; // 0x405a26
            int32_t v78 = v77; // 0x405a29
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405d90
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405a37
                    function_405210(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405a45
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405b46;
        }
    }
  lab_0x405a85:;
    // 0x405a85
    int64_t v79; // bp-104, 0x405910
    int64_t v80 = &v79; // 0x40591a
    int64_t v81 = v50 + 1; // 0x405a85
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405a8c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405a91
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405a95
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405a99
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405aa1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405aa6
    int32_t c2 = v84; // 0x405aa6
    char * found_char_pos = strchr(str2, c2); // 0x405aa6
    int64_t v87 = *v82; // 0x405aab
    v2 = v87;
    int64_t v88 = *v85; // 0x405ab5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405ac0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405db0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405d7d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405aee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405aa6
    char v91 = *(char *)(v90 + 1); // 0x405adb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405a95
        if (v91 != 58) {
            // 0x405aee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405d04
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405e08
                *v8 = 0;
            } else {
                // 0x405dec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405d2e
            *v83 = 0;
            // 0x405aee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405d0e
        if (v93 != 0) {
            // 0x405da0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405d2e
            *v83 = 0;
            // 0x405aee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405d21
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405d2e
            *v83 = 0;
            // 0x405aee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405e6a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405e1a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405e21
        // 0x405d2e
        *v83 = 0;
        // 0x405aee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405c79
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405c7b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405ea0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405e51
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405e58
            // 0x405aee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405c86
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405c8a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405ca5;
  lab_0x405bb6:
    // 0x405bb6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4059f4;
  lab_0x405ca5:;
    int64_t v99 = function_4052f0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405cc3
    // 0x405aee
    return v99 & 0xffffffff;
  lab_0x405b46:;
    int32_t v100 = v55; // 0x405b46
    if (v100 != (int32_t)v59) {
        // 0x405b4a
        *(int32_t *)a7 = v100;
    }
    // 0x405aee
    return 0xffffffff;
  lab_0x405b0a:
    // 0x405b0a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405b11
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405aee
    return v99 & 0xffffffff;
  lab_0x405c50:
    // 0x405c50
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405a85;
  lab_0x405c04:
    // 0x405c04
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4052f0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x405c2a
    if ((int32_t)v101 != -1) {
        // 0x405aee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405c3f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405c50;
}
// Address range: 0x405ee0 - 0x405f36
int64_t function_405ee0(int64_t a1) {
    // 0x405ee0
    *(int32_t *)&g46 = g27;
    *(int32_t *)&g47 = g26;
    int64_t v1; // 0x405ee0
    int64_t result = function_405910(v1, v1, v1, v1, v1, v1, &g46, a1 & 0xffffffff); // 0x405f06
    g27 = *(int32_t *)&g46;
    g51 = g49;
    *(int32_t *)&g25 = g48;
    return result;
}
// Address range: 0x405f40 - 0x405f58
int64_t function_405f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f40
    return function_405ee0(1);
}
// Address range: 0x405f60 - 0x405f73
int64_t function_405f60(int64_t a1, int64_t a2, int64_t * a3, int64_t * a4, int32_t a5, int64_t a6) {
    // 0x405f60
    return function_405ee0(0);
}
// Address range: 0x405f80 - 0x405f95
int64_t function_405f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405f80
    return function_405910(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405fa0 - 0x405fb6
int64_t function_405fa0(void) {
    // 0x405fa0
    return function_405ee0(0);
}
// Address range: 0x405fc0 - 0x405fd8
int64_t function_405fc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fc0
    return function_405910(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405fe0 - 0x40605a
int64_t function_405fe0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x405feb
    int64_t v2 = (int64_t)&g2; // 0x405feb
    int32_t * pwc; // 0x405fe0
    int64_t v3; // 0x405fe0
    int64_t n; // 0x405fe0
    if (a2 == 0) {
        goto lab_0x406032;
    } else {
        // 0x405fed
        if (a3 == 0) {
            // 0x406018
            return -2;
        }
        // 0x405ff9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406032;
        } else {
            goto lab_0x406004;
        }
    }
  lab_0x406032:
    // 0x406032
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405fe0
    pwc = (int32_t *)&v4;
    goto lab_0x406004;
  lab_0x406004:;
    char * wstr = (char *)v3; // 0x40600a
    int64_t ps; // 0x405fe0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40600a
    int64_t result = v5; // 0x40600a
    if (v5 < 0xfffffffe) {
        // 0x406018
        return result;
    }
    int64_t result2 = result; // 0x406049
    if ((char)function_4060c0(0, v3) == 0) {
        // 0x40604b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406018
    return result2;
}
// Address range: 0x406060 - 0x4060bd
int64_t function_406060(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406067
    int64_t v2; // 0x406060
    int64_t result = function_405050(a1, v2); // 0x406078
    if ((v2 & 32) != 0) {
        // 0x4060a0
        if ((int32_t)result == 0) {
            // 0x4060a4
            *__errno_location() = 0;
        }
        // 0x40609a
        return 0xffffffff;
    }
    // 0x406081
    if ((int32_t)result == 0) {
        // 0x40609a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406088
    if (v1 == 0) {
        // 0x40608a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40609a
    return result2;
}
// Address range: 0x4060c0 - 0x40611e
int64_t function_4060c0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4060c6
    if (locale == NULL) {
        // 0x4060f3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4060c6
    bool v2; // 0x4060c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x4060c0
    int64_t v5 = v1; // 0x4060c0
    int64_t v6 = 2; // 0x4060e5
    unsigned char v7 = *(char *)v5; // 0x4060e5
    char v8 = *(char *)v4; // 0x4060e5
    char v9 = v8; // 0x4060e5
    bool v10 = false; // 0x4060e5
    while (v7 == v8) {
        // 0x4060d8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4060f1
    int64_t v13 = v1; // 0x4060f1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4060f3
        return 0;
    }
    int64_t v14 = 6; // 0x4060f1
    unsigned char v15 = *(char *)v13; // 0x40610d
    char v16 = *(char *)v12; // 0x40610d
    char v17 = v16; // 0x40610d
    bool v18 = false; // 0x40610d
    while (v15 == v16) {
        // 0x406100
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
// Address range: 0x406120 - 0x406682
int64_t function_406120(void) {
    char * v1 = nl_langinfo(14); // 0x406136
    char * v2 = g50; // 0x40613b
    char * v3; // 0x406120
    int64_t v4; // 0x406120
    int64_t v5; // 0x406120
    int64_t v6; // 0x406120
    int64_t v7; // 0x406120
    int32_t size; // 0x406120
    int32_t size2; // 0x406120
    int32_t len; // 0x4061f2
    int64_t v8; // 0x4061f2
    char * env_val; // 0x4061dd
    if (v2 == NULL) {
        // 0x4061d8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406245;
        } else {
            // 0x4061ea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406245;
            } else {
                // 0x4061ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4061dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406675
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406245;
                    } else {
                        // 0x4065e9
                        size2 = len + 14;
                        goto lab_0x40620b;
                    }
                } else {
                    goto lab_0x40620b;
                }
            }
        }
    } else {
        // 0x406120
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40615a;
    }
  lab_0x40648c:;
    // 0x40648c
    struct _IO_FILE * stream; // 0x4062cb
    int32_t v10 = __uflow(stream); // 0x40648f
    int64_t v11; // 0x406120
    int64_t v12 = v11; // 0x406499
    int64_t v13; // 0x406120
    int64_t v14 = v13; // 0x406499
    int32_t v15 = v10; // 0x406499
    int64_t v16; // 0x406120
    int64_t v17 = v16; // 0x406499
    int64_t v18 = v11; // 0x406499
    int64_t v19 = v13; // 0x406499
    int64_t v20 = v16; // 0x406499
    if (v10 == -1) {
        // break -> 0x40649f
        goto lab_0x40649f;
    }
    goto lab_0x406319;
  lab_0x40630e:;
    // 0x40630e
    int64_t v90; // 0x406120
    int64_t * v32; // 0x406300
    *v32 = v90 + 1;
    int64_t v89; // 0x406120
    v12 = v89;
    int64_t v91; // 0x406120
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406120
    v17 = v92;
    goto lab_0x406319;
  lab_0x406319:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406120
    int32_t v25; // bp-120, 0x406120
    int32_t v26; // bp-184, 0x406120
    int64_t v27; // 0x4062cb
    int64_t v28; // 0x4062e8
    int64_t v29; // 0x4062ed
    int64_t * v30; // 0x406304
    switch (c) {
        case 32: {
            goto lab_0x406300;
        }
        case 10: {
            goto lab_0x406300;
        }
        case 9: {
            goto lab_0x406300;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4064f1
            int32_t v33; // 0x406120
            char v34; // 0x406120
            int32_t v35; // 0x4064fe
            if (v31 < *v30) {
                // 0x4064d0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4064fb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4064f1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x4064d0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4064fb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4064e0
                v36 = v33;
            }
            // 0x4065cf
            if (v36 == -1) {
                // break -> 0x40649f
                break;
            }
            goto lab_0x406300;
        }
        default: {
            // 0x40632f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40649f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406358
            int64_t v39 = v37 + 4; // 0x40635a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406366
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406368
            while (v41 == 0) {
                // 0x406358
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406386
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406392
            int64_t v45 = v43 + 4; // 0x406394
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4063a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4063a2
            while (v47 == 0) {
                // 0x406392
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40638f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4063b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4063c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4063cc
            int64_t v52 = v51 + v48; // 0x4063d5
            int64_t * mem; // 0x406120
            int64_t v53; // 0x406120
            int64_t v54; // 0x406120
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40650b
                int64_t v56 = v55 + 3; // 0x406517
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4063f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406400
            if (mem == NULL) {
                // 0x40662c
                free((int64_t *)v21);
                function_405050(v27, v53);
                v24 = (int64_t)&g2;
                goto lab_0x4062a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406418
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406422
            uint32_t v62 = (int32_t)v59; // 0x406425
            int64_t v63; // 0x406120
            if (v62 >= 8) {
                // 0x406534
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40654e
                int64_t v66 = v61 - v65; // 0x406552
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40655d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40656e
                    int64_t v70 = v69 & 0xffffffff; // 0x40656e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40656b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4065ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406437
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40643b
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
            int64_t v73 = v51 + 1; // 0x40644b
            int64_t v74 = v60 - 1; // 0x40644f
            uint32_t v75 = (int32_t)v73; // 0x406454
            int64_t v76; // 0x406120
            if (v75 >= 8) {
                // 0x406582
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40658c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40659c
                int64_t v80 = v74 - v79; // 0x4065a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4065ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4065bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4065b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406616
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40661e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406466
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40646a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406663
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40647e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40630e;
            } else {
                goto lab_0x40648c;
            }
        }
    }
  lab_0x406300:;
    int64_t v93 = v23; // 0x406120
    int64_t v94 = v22; // 0x406120
    int64_t v95 = v21; // 0x406120
    goto lab_0x406300_2;
  lab_0x406245:;
    int64_t * mem3 = malloc(size); // 0x406245
    int64_t v97 = (int64_t)&g2; // 0x406250
    int64_t v98; // 0x406120
    int64_t path; // 0x406120
    if (mem3 == NULL) {
        goto lab_0x406222;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406245
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406266;
    }
  lab_0x40615a:;
    int64_t str = v1 == NULL ? (int64_t)&g2 : (int64_t)v1; // 0x40614d
    char v100 = *v3; // 0x40615a
    int64_t v101; // 0x406120
    if (v100 == 0) {
        // 0x4061b4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406120
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406120
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4061a0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4061a7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406170
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40617d
        char v107 = *(char *)v106; // 0x406182
        v102 = v107;
        if (v107 == 0) {
            // 0x4061b4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40618b
    v104 = v103 + 1;
  lab_0x4061a7:
    // 0x4061b4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406222:;
    char * v108 = (char *)v97;
    g50 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40615a;
  lab_0x406266:;
    int64_t v109 = v98 + path; // 0x406266
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406292
    v24 = (int64_t)&g2;
    if (fd >= 0) {
        // 0x4062c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4065f2
            close(fd);
            v24 = (int64_t)&g2;
        } else {
            // 0x4062e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406300_2:;
                uint64_t v96 = *v32; // 0x406300
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40648c;
                } else {
                    goto lab_0x40630e;
                }
            }
          lab_0x40649f:
            // 0x40649f
            function_405050(v27, v19);
            v24 = (int64_t)&g2;
            if (v18 != 0) {
                // 0x4064be
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4062a4;
  lab_0x40620b:;
    int64_t * mem4 = malloc(size2); // 0x40620b
    v97 = (int64_t)&g2;
    if (mem4 != NULL) {
        // 0x4062b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406266;
    } else {
        goto lab_0x406222;
    }
  lab_0x4062a4:
    // 0x4062a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406222;
}
// Address range: 0x406690 - 0x4066ed
int64_t function_406690(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406690
    return function_401368();
}
// Address range: 0x4066f0 - 0x4066f1
int64_t function_4066f0(void) {
    // 0x4066f0
    int64_t result; // 0x4066f0
    return result;
}
// Address range: 0x406700 - 0x406718
int64_t function_406700(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406700
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x406718 - 0x406738
int64_t function_406718(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x406722
    while (*(int64_t *)v1 != -1) {
        // 0x406723
        v1 -= 8;
    }
    // 0x406734
    return result;
}
