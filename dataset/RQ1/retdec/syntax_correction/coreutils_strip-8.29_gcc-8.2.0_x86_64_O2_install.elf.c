#include "decompile_retdec.h"
// Address range: 0x403010 - 0x403015
int64_t function_403010(void) {
    // 0x403010
    abort();
    // UNREACHABLE
}
// Address range: 0x403015 - 0x40301a
int64_t function_403015(void) {
    // 0x403015
    abort();
    // UNREACHABLE
}
// Address range: 0x40301a - 0x40301f
int64_t function_40301a(void) {
    // 0x40301a
    abort();
    // UNREACHABLE
}
// Address range: 0x40301f - 0x403024
int64_t function_40301f(void) {
    // 0x40301f
    abort();
    // UNREACHABLE
}
// Address range: 0x403024 - 0x403029
int64_t function_403024(void) {
    // 0x403024
    abort();
    // UNREACHABLE
}
// Address range: 0x403029 - 0x40302e
int64_t function_403029(void) {
    // 0x403029
    abort();
    // UNREACHABLE
}
// Address range: 0x40302e - 0x403033
int64_t function_40302e(void) {
    // 0x40302e
    abort();
    // UNREACHABLE
}
// Address range: 0x403033 - 0x403038
int64_t function_403033(void) {
    // 0x403033
    abort();
    // UNREACHABLE
}
// Address range: 0x403038 - 0x40303d
int64_t function_403038(void) {
    // 0x403038
    abort();
    // UNREACHABLE
}
// Address range: 0x40303d - 0x403042
int64_t function_40303d(void) {
    // 0x40303d
    abort();
    // UNREACHABLE
}
// Address range: 0x403042 - 0x403047
int64_t function_403042(void) {
    // 0x403042
    abort();
    // UNREACHABLE
}
// Address range: 0x403047 - 0x40304c
int64_t function_403047(void) {
    // 0x403047
    abort();
    // UNREACHABLE
}
// Address range: 0x403050 - 0x403cd0
int64_t function_403050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x403068
    g59 = 0;
    function_40cfd0(a2);
    setlocale(LC_ALL, (char *)&g17);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_416fd0(0x40aa00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v2; // bp-280, 0x403050
    function_405700(&v2);
    v2 = 0x400000000;
    g58 = NULL;
    g56 = NULL;
    g53 = 0;
    *(char *)&g52 = 0;
    umask(0);
    int64_t v3 = 0; // 0x403183
    int64_t v4 = 0; // 0x403183
    char v5 = 0; // 0x403183
    char * v6 = NULL; // 0x403183
    int64_t v7 = 0; // 0x403183
    int64_t v8 = 0; // 0x403183
    int64_t v9 = 0; // 0x403183
    int64_t v10 = 0; // 0x403183
    int64_t v11 = 0; // 0x403183
    int64_t v12; // 0x403050
    int64_t v13; // 0x403050
    int64_t v14; // 0x403050
    int64_t v15; // 0x403050
    int64_t v16; // 0x403050
    int64_t v17; // 0x403050
    int64_t v18; // 0x403050
    char v19; // 0x403050
    char v20; // 0x403050
    char v21; // 0x403050
    char v22; // 0x403050
    char v23; // 0x403050
    char v24; // 0x403050
    char v25; // 0x403050
    char v26; // 0x403050
    char v27; // 0x403050
    char * v28; // 0x403050
    int64_t v29; // 0x403050
    while (true) {
      lab_0x403188_2:
        // 0x403188
        v16 = v11;
        v15 = v10;
        v14 = v9;
        v17 = v8;
        v24 = v23;
        v21 = v20;
        v27 = v26;
        v29 = v7;
        v28 = v6;
        v13 = v4;
        v12 = v3;
        int32_t v30 = function_412970(v1, a2, "bcCsDdg:m:o:pt:TvS:Z", &g3, 0, a6);
        switch (v30) {
            case -1: {
                goto lab_0x40346e;
            }
            case 100: {
                // 0x4033d0
                *(char *)&g52 = 1;
                v3 = v12;
                v4 = v13;
                v6 = v28;
                v7 = v29;
                v25 = v27;
                v19 = v21;
                v22 = v24;
                v8 = v17;
                v9 = v14;
                v10 = v15;
                v11 = v16;
                goto lab_0x403188;
            }
            default: {
                if (v30 > 100) {
                    if (v30 == 115) {
                        // 0x4033a0
                        g53 = 1;
                        signal(SIGSTOP, SIG_DFL);
                        v3 = v12;
                        v4 = v13;
                        v6 = v28;
                        v7 = v29;
                        v25 = v27;
                        v19 = v21;
                        v22 = v24;
                        v8 = v17;
                        v9 = v14;
                        v10 = v15;
                        v11 = v16;
                        goto lab_0x403188;
                    } else {
                        if (v30 > 115) {
                            // 0x4032b0
                            v3 = v12;
                            v4 = v13;
                            v6 = v28;
                            v7 = v29;
                            v25 = v27;
                            v19 = v21;
                            v22 = v24;
                            v8 = v17;
                            v9 = v14;
                            v10 = v15;
                            v11 = v16;
                            if (v30 == 118) {
                                goto lab_0x403188;
                            } else {
                                if (v30 > 118) {
                                    if (v30 != 128) {
                                        if (v30 != 129) {
                                            // 0x403249
                                            function_4046f0(1);
                                            // UNREACHABLE
                                        }
                                        char * v31 = g86; // 0x40335b
                                        int64_t v32 = function_411510((int64_t)v31); // 0x403362
                                        *(int64_t *)&g25 = v32;
                                        v3 = v12;
                                        v4 = v13;
                                        v6 = v28;
                                        v7 = v29;
                                        v25 = v27;
                                        v19 = v21;
                                        v22 = v24;
                                        v8 = v17;
                                        v9 = v14;
                                        v10 = v15;
                                        v11 = v16;
                                        goto lab_0x403188;
                                    } else {
                                        // 0x4032ca
                                        v18 = (int64_t)"WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
                                        if (g59 == 0) {
                                            goto lab_0x403454;
                                        } else {
                                            // 0x4032e2
                                            g29 = 0;
                                            v3 = v12;
                                            v4 = v13;
                                            v6 = v28;
                                            v7 = v29;
                                            v25 = v27;
                                            v19 = 1;
                                            v22 = v24;
                                            v8 = v17;
                                            v9 = v14;
                                            v10 = v15;
                                            v11 = v16;
                                            goto lab_0x403188;
                                        }
                                    }
                                } else {
                                    if (v30 != 116) {
                                        // 0x403249
                                        function_4046f0(1);
                                        // UNREACHABLE
                                    }
                                    if (v14 != 0) {
                                        // 0x403a9b
                                        error(1, (int32_t)"multiple target directories specified" ^ (int32_t)"multiple target directories specified", dcgettext(NULL, "multiple target directories specified", 5));
                                        goto lab_0x403abd;
                                    }
                                    // 0x403392
                                    v3 = v12;
                                    v4 = v13;
                                    v6 = v28;
                                    v7 = v29;
                                    v25 = v27;
                                    v19 = v21;
                                    v22 = v24;
                                    v8 = v17;
                                    v9 = (int64_t)g86;
                                    v10 = v15;
                                    v11 = v16;
                                    goto lab_0x403188;
                                }
                            }
                        } else {
                            if (v30 == 109) {
                                // 0x403430
                                v3 = (int64_t)g86;
                                v4 = v13;
                                v6 = v28;
                                v7 = v29;
                                v25 = v27;
                                v19 = v21;
                                v22 = v24;
                                v8 = v17;
                                v9 = v14;
                                v10 = v15;
                                v11 = v16;
                            } else {
                                if (v30 > 109) {
                                    if (v30 != 111) {
                                        // 0x403230
                                        v3 = v12;
                                        v4 = v13;
                                        v6 = v28;
                                        v7 = v29;
                                        v25 = 1;
                                        v19 = v21;
                                        v22 = v24;
                                        v8 = v17;
                                        v9 = v14;
                                        v10 = v15;
                                        v11 = v16;
                                        if (v30 != 112) {
                                            // 0x403249
                                            function_4046f0(1);
                                            // UNREACHABLE
                                        }
                                    } else {
                                        // 0x4031d6
                                        *(int64_t *)&g58 = (int64_t)g86;
                                        v3 = v12;
                                        v4 = v13;
                                        v6 = v28;
                                        v7 = v29;
                                        v25 = v27;
                                        v19 = v21;
                                        v22 = v24;
                                        v8 = v17;
                                        v9 = v14;
                                        v10 = v15;
                                        v11 = v16;
                                    }
                                } else {
                                    if (v30 != 103) {
                                        // 0x403249
                                        function_4046f0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x40329d
                                    *(int64_t *)&g56 = (int64_t)g86;
                                    v3 = v12;
                                    v4 = v13;
                                    v6 = v28;
                                    v7 = v29;
                                    v25 = v27;
                                    v19 = v21;
                                    v22 = v24;
                                    v8 = v17;
                                    v9 = v14;
                                    v10 = v15;
                                    v11 = v16;
                                }
                            }
                            goto lab_0x403188;
                        }
                    }
                } else {
                    if (v30 == 83) {
                        // 0x403410
                        v3 = v12;
                        v4 = (int64_t)g86;
                        v6 = v28;
                        v7 = v29;
                        v25 = v27;
                        v19 = v21;
                        v22 = v24;
                        v8 = v17;
                        v9 = v14;
                        v10 = v15;
                        v11 = 1;
                        goto lab_0x403188;
                    } else {
                        if (v30 > 83) {
                            if (v30 == 90) {
                                char * v33 = g86; // 0x4033e6
                                if (g59 == 0) {
                                    // 0x403441
                                    v3 = v12;
                                    v4 = v13;
                                    v6 = v28;
                                    v7 = v29;
                                    v25 = v27;
                                    v19 = v21;
                                    v22 = v24;
                                    v8 = v17;
                                    v9 = v14;
                                    v10 = v15;
                                    v11 = v16;
                                    v18 = (int64_t)"warning: ignoring --context; it requires an SELinux-enabled kernel";
                                    if (v33 == NULL) {
                                        goto lab_0x403188;
                                    } else {
                                        goto lab_0x403454;
                                    }
                                } else {
                                    // 0x4033f1
                                    g29 = 0;
                                    v3 = v12;
                                    v4 = v13;
                                    v6 = v33 == NULL ? v28 : v33;
                                    v7 = v29;
                                    v25 = v27;
                                    v19 = v21;
                                    v22 = v33 == NULL ? 1 : v24;
                                    v8 = v17;
                                    v9 = v14;
                                    v10 = v15;
                                    v11 = v16;
                                    goto lab_0x403188;
                                }
                            } else {
                                if (v30 > 90) {
                                    if (v30 != 98) {
                                        // 0x403240
                                        v3 = v12;
                                        v4 = v13;
                                        v6 = v28;
                                        v7 = v29;
                                        v25 = v27;
                                        v19 = v21;
                                        v22 = v24;
                                        v8 = v17;
                                        v9 = v14;
                                        v10 = v15;
                                        v11 = v16;
                                        if (v30 != 99) {
                                            // 0x403249
                                            function_4046f0(1);
                                            // UNREACHABLE
                                        }
                                    } else {
                                        char * v34 = g86; // 0x40320b
                                        v3 = v12;
                                        v4 = v13;
                                        v6 = v28;
                                        v7 = v34 == NULL ? v29 : (int64_t)v34;
                                        v25 = v27;
                                        v19 = v21;
                                        v22 = v24;
                                        v8 = v17;
                                        v9 = v14;
                                        v10 = v15;
                                        v11 = 1;
                                    }
                                } else {
                                    // 0x403258
                                    v3 = v12;
                                    v4 = v13;
                                    v6 = v28;
                                    v7 = v29;
                                    v25 = v27;
                                    v19 = v21;
                                    v22 = v24;
                                    v8 = v17;
                                    v9 = v14;
                                    v10 = 1;
                                    v11 = v16;
                                    if (v30 != 84) {
                                        // 0x403249
                                        function_4046f0(1);
                                        // UNREACHABLE
                                    }
                                }
                                goto lab_0x403188;
                            }
                        } else {
                            if (v30 == -130) {
                                // 0x403a80
                                function_4046f0(0);
                                // UNREACHABLE
                            }
                            if (v30 <= 0xffffff7e) {
                                if (v30 == -131) {
                                    // 0x40331b
                                    function_411160((int64_t)g44, "install", "GNU coreutils", (int64_t)g32, "David MacKenzie", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x403249;
                            }
                            if (v30 != 67) {
                                // 0x4032f8
                                v3 = v12;
                                v4 = v13;
                                v6 = v28;
                                v7 = v29;
                                v25 = v27;
                                v19 = v21;
                                v22 = v24;
                                v8 = 1;
                                v9 = v14;
                                v10 = v15;
                                v11 = v16;
                                if (v30 != 68) {
                                    // 0x403249
                                    function_4046f0(1);
                                    // UNREACHABLE
                                }
                            } else {
                                // 0x403286
                                g54 = 1;
                                v3 = v12;
                                v4 = v13;
                                v6 = v28;
                                v7 = v29;
                                v25 = v27;
                                v19 = v21;
                                v22 = v24;
                                v8 = v17;
                                v9 = v14;
                                v10 = v15;
                                v11 = v16;
                            }
                            goto lab_0x403188;
                        }
                    }
                }
            }
        }
    }
  lab_0x40346e:;
    // 0x40346e
    int64_t v35; // 0x403050
    int64_t v36; // 0x403050
    int64_t v37; // 0x403050
    int64_t v38; // 0x403050
    int64_t v39; // 0x403050
    int64_t v40; // 0x403050
    int64_t v41; // 0x403050
    int64_t v42; // 0x403050
    int64_t v43; // 0x403050
    int32_t v44; // bp-200, 0x403050
    char * v45; // 0x403050
    int64_t v46; // 0x403050
    int32_t v47; // 0x403050
    if (*(char *)&g52 != 0) {
        // 0x403681
        v36 = v14;
        v38 = v15;
        if (g53 != 0) {
            goto lab_0x403c38;
        } else {
            // 0x40368e
            v43 = a2;
            if (v14 == 0) {
                goto lab_0x4034bd;
            } else {
                // 0x403697
                error(1, (int32_t)"target directory not allowed when installing a directory" ^ (int32_t)"target directory not allowed when installing a directory", dcgettext(NULL, "target directory not allowed when installing a directory", 5));
                v45 = v28;
                v40 = v17;
                v46 = v29;
                v39 = &g90;
                v41 = v1;
                v42 = (int32_t)"target directory not allowed when installing a directory" ^ (int32_t)"target directory not allowed when installing a directory";
                v35 = v14;
                v37 = v15;
                goto lab_0x4036b9;
            }
        }
    } else {
        // 0x40347b
        v43 = a2;
        if (v14 == 0) {
            goto lab_0x4034bd;
        } else {
            int32_t v48 = __xstat(1, (char *)v14, (struct stat *)&v44); // 0x403490
            if (v17 == 0 == (v48 != 0)) {
                goto lab_0x403af2;
            } else {
                // 0x4034a2
                v43 = v14;
                if (v48 != 0) {
                    goto lab_0x4034bd;
                } else {
                    // 0x4034a6
                    v43 = v14;
                    if ((v47 & 0xf000) != 0x4000) {
                        goto lab_0x403abd;
                    } else {
                        goto lab_0x4034bd;
                    }
                }
            }
        }
    }
  lab_0x403874:;
    // 0x403874
    char * v49; // 0x403050
    char * v50; // 0x403050
    int64_t v51; // 0x403850
    int64_t v52; // 0x403867
    if ((char)function_404090(v51, v52, &v2) == 0) {
        // 0x403825
        free((int64_t *)v52);
        v49 = (char *)1;
        goto lab_0x403835;
    } else {
        // 0x403888
        free((int64_t *)v52);
        v49 = v50;
        goto lab_0x403835;
    }
  lab_0x403835:;
    // 0x403835
    int64_t v53; // 0x403050
    int64_t v54 = v53 + 1; // 0x403835
    char * v55 = v49; // 0x40383e
    char * v56 = v49; // 0x40383e
    int64_t v57 = v52; // 0x40383e
    v53 = v54;
    int64_t v58; // 0x403050
    if (0x100000000 * v58 >> 32 <= v54) {
        return (int64_t)v55 & 0xffffffff;
    }
    goto lab_0x403844;
  lab_0x403188:
    // 0x403188
    v26 = v25;
    v20 = v19;
    v23 = v22;
    goto lab_0x403188_2;
  lab_0x403454:
    // 0x403454
    error(0, 0, dcgettext(NULL, (char *)v18, 5));
    v3 = v12;
    v4 = v13;
    v6 = v28;
    v7 = v29;
    v25 = v27;
    v19 = v21;
    v22 = v24;
    v8 = v17;
    v9 = v14;
    v10 = v15;
    v11 = v16;
    goto lab_0x403188;
  lab_0x403c38:
    // 0x403c38
    error(1, (int32_t)"the strip option may not be used when installing a directory" ^ (int32_t)"the strip option may not be used when installing a directory", dcgettext(NULL, "the strip option may not be used when installing a directory", 5));
    int64_t v61 = v36; // 0x403c55
    int64_t v62 = v38; // 0x403c55
    goto lab_0x403c5a;
  lab_0x4034bd:;
    int64_t v165 = 0; // 0x4034c2
    int64_t v166 = v43; // 0x4034c2
    if (v16 != 0) {
        // 0x4038ba
        v165 = function_40a930((int64_t)dcgettext(NULL, "backup type", 5), v29);
        v166 = v29;
    }
    // 0x4034c8
    v2 = 0x100000000 * v165 >> 32;
    function_40a380(v13);
    char * v140 = v28; // 0x4034db
    int64_t v141 = v17; // 0x4034db
    int64_t v142 = v29; // 0x4034db
    int64_t v143 = v1; // 0x4034db
    int64_t v144 = v166; // 0x4034db
    int64_t v145 = v14; // 0x4034db
    int64_t v146 = a2; // 0x4034db
    int64_t v147 = v15; // 0x4034db
    int64_t v91; // 0x403050
    int64_t v96; // 0x403050
    int64_t v99; // 0x403050
    int64_t v103; // 0x403050
    int64_t v93; // 0x403050
    int64_t v101; // 0x403050
    if (v21 == 0) {
        goto lab_0x403797;
    } else {
        // 0x4034e1
        v103 = v17;
        v93 = v1;
        v101 = v166;
        v91 = v14;
        v96 = a2;
        v99 = v15;
        if (v28 == NULL != (v24 == 0)) {
            // 0x403bb4
            error(1, (int32_t)"cannot set target context and preserve it" ^ (int32_t)"cannot set target context and preserve it", dcgettext(NULL, "cannot set target context and preserve it", 5));
            int64_t v167 = (int64_t)"missing file operand"; // 0x403bd1
            int64_t v168 = v167;
            error(0, 0, dcgettext(NULL, (char *)v168, 5));
            // 0x403249
            function_4046f0(1);
            // UNREACHABLE
        }
        goto lab_0x4034f8;
    }
  lab_0x403c5a:
    // 0x403c5a
    function_40ea00(4, v61);
    int32_t err_num = v62;
    error(1, err_num, dcgettext(NULL, "failed to access %s", 5));
    int32_t err_num2 = err_num; // 0x403c8b
    int64_t v63 = v61; // 0x403c8b
    goto lab_0x403c90;
  lab_0x403797:;
    int64_t v161 = v145;
    char * v162 = v140;
    v103 = v141;
    v93 = v143;
    v101 = v144;
    v91 = v161;
    v96 = v146;
    v99 = v147;
    int64_t v116; // 0x403050
    int64_t v113; // 0x403050
    int64_t v115; // 0x403050
    int64_t v112; // 0x403050
    int64_t v114; // 0x403050
    if (v162 == NULL) {
        goto lab_0x4034f8;
    } else {
        int32_t * v163 = __errno_location(); // 0x4037a3
        *v163 = 95;
        int64_t v164 = function_40ec50((int64_t)v162); // 0x4037b6
        char * format = dcgettext(NULL, "failed to set default file creation context to %s", 5); // 0x4037ca
        uint32_t err_num3 = *v163; // 0x4037cf
        error(1, err_num3, format);
        v114 = v142;
        v58 = (int64_t)v163;
        v113 = v164;
        v112 = err_num3;
        v115 = 1;
        v116 = v161;
        goto lab_0x4037e3;
    }
  lab_0x403af2:
    // 0x403af2
    function_40ea00(4, v14);
    error(1, *__errno_location(), dcgettext(NULL, "failed to access %s", 5));
    int64_t v104 = v29; // 0x403b2a
    goto lab_0x403b2f;
  lab_0x403c90:
    // 0x403c90
    function_40ea00(4, v63);
    error(1, err_num2, dcgettext(NULL, "target %s is not a directory", 5));
    return &g90;
  lab_0x4036b9:;
    int64_t v64 = v41;
    int64_t v65 = v46;
    int64_t v66 = v40;
    int64_t v67 = v66; // 0x4036bb
    int64_t v68 = v65; // 0x4036bb
    int64_t v69 = v64; // 0x4036bb
    int64_t v70 = v42; // 0x4036bb
    int64_t v71 = v35; // 0x4036bb
    int64_t v72 = v37; // 0x4036bb
    int64_t v73; // 0x403050
    int64_t v74; // 0x403050
    int64_t v75; // 0x403050
    int64_t * v76; // 0x4036e0
    int64_t v77; // 0x4036e0
    if ((char)v39 == 0) {
        goto lab_0x403543;
    } else {
        // 0x4036c1
        v67 = v66;
        v68 = v65;
        v69 = 1;
        v70 = v42;
        v71 = 0;
        v72 = v37;
        if (v64 == 1) {
            goto lab_0x403543;
        } else {
            // 0x4036cd
            v76 = (int64_t *)(v65 - 8 + (0x100000000 * v64 >> 29));
            v77 = *v76;
            int64_t v78 = function_40ad40(v77, v42); // 0x4036e9
            char v79 = v37;
            int64_t v80 = v78; // 0x4036fb
            int64_t v81 = -1; // 0x4036fb
            int64_t v82 = 0; // 0x4036fb
            while (v81 != 0) {
                int64_t v83 = v80;
                v81--;
                bool v84; // 0x403050
                v80 = v83 + (v84 ? -1 : 1);
                v82 = v81;
                if (*(char *)v83 == v79) {
                    // break -> 
                    break;
                }
                v82 = 0;
            }
            int64_t v85 = -2 - v82; // 0x403703
            int64_t v86 = 1; // 0x403707
            if (v85 != 0) {
                // 0x403709
                v86 = *(char *)(v78 - 1 + v85) == 47;
            }
            // 0x403715
            v73 = v86;
            int32_t v87 = __xstat(1, (char *)v77, (struct stat *)&v44); // 0x403725
            v75 = v37;
            if (v87 == 0) {
                goto lab_0x403a65;
            } else {
                uint32_t v88 = *__errno_location(); // 0x403737
                v75 = 0;
                if (v88 == 0) {
                    goto lab_0x403a65;
                } else {
                    int64_t v89 = v88; // 0x403737
                    v74 = v89;
                    v61 = v77;
                    v62 = v89;
                    if (v88 != 2) {
                        goto lab_0x403c5a;
                    } else {
                        goto lab_0x40374d;
                    }
                }
            }
        }
    }
  lab_0x4034f8:;
    int64_t v90 = v91;
    int32_t v92 = (int32_t)v93 - g41; // 0x4034ff
    int64_t v94 = v92; // 0x4034ff
    int64_t v95 = 8 * (int64_t)g41 + v96; // 0x403501
    int64_t v97 = (int64_t)(*(char *)&g52 ^ 1) & (int64_t)(v90 == 0); // 0x40351b
    if (v97 < v94) {
        int64_t v98 = v99;
        int64_t v100 = v101;
        int64_t v102 = v103;
        v45 = NULL;
        v40 = v102;
        v46 = v95;
        v39 = v97;
        v41 = v94;
        v42 = v100;
        v35 = v90;
        v37 = v98;
        if ((char)v98 == 0) {
            goto lab_0x4036b9;
        } else {
            if (v90 != 0) {
                // 0x403b6c
                error(1, (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)" ^ (int32_t)"cannot combine --target-directory (-t) and --no-target-directory (-T)", dcgettext(NULL, "cannot combine --target-directory (-t) and --no-target-directory (-T)", 5));
                goto lab_0x403b8e;
            } else {
                // 0x40353a
                v67 = v102;
                v68 = v95;
                v69 = v94;
                v70 = v100;
                v71 = v90;
                v72 = v98;
                v104 = v95;
                if (v92 > 2) {
                    goto lab_0x403b2f;
                } else {
                    goto lab_0x403543;
                }
            }
        }
    } else {
        goto lab_0x403b8e;
    }
  lab_0x403b2f:
    // 0x403b2f
    function_40ea00(4, *(int64_t *)(v104 + 16));
    // 0x403b4f
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"extra operand %s", 5));
    // 0x403249
    function_4046f0(1);
    // UNREACHABLE
  lab_0x403543:;
    int64_t v105 = v71;
    int64_t v106 = v69;
    int64_t v107 = v68;
    int64_t v108 = v67;
    int64_t v109 = v70; // 0x40354b
    if (v12 == 0) {
        goto lab_0x40359d;
    } else {
        int64_t v110 = function_40ca80(v12); // 0x403550
        if (v110 == 0) {
            // 0x403c06
            function_40ec50(v12);
            error(1, (int32_t)"invalid mode %s" ^ (int32_t)"invalid mode %s", dcgettext(NULL, "invalid mode %s", 5));
            v36 = v105;
            v38 = v72;
            goto lab_0x403c38;
        } else {
            // 0x403561
            g28 = function_40ce50(0, 0, 0, v110, 0);
            g27 = function_40ce50(0, 1, 0, v110, (int32_t)&g26);
            free((int64_t *)v110);
            v109 = 1;
            goto lab_0x40359d;
        }
    }
  lab_0x403b8e:
    // 0x403b8e
    if (v92 != 1) {
        // 0x403be0
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing file operand", 5));
      lab_0x403249:
        // 0x403249
        function_4046f0(1);
        // UNREACHABLE
    }
    // 0x403b93
    function_40ea00(4, *(int64_t *)v95);
    // 0x403b4f
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing destination file operand after %s", 5));
    // 0x403249
    function_4046f0(1);
    // UNREACHABLE
  lab_0x4037e3:;
    int64_t v111 = v112;
    int64_t v60 = v113;
    int64_t v59 = v114;
    function_409a90(v115, v111);
    if (v116 != 0) {
        // 0x4037f1
        function_4056a0(&v2, v111);
        v56 = NULL;
        v57 = v111;
        v53 = 0;
        while (true) {
          lab_0x403844:
            // 0x403844
            v50 = v56;
            v51 = *(int64_t *)(8 * v53 + v59);
            function_40ad40(v51, v57);
            v52 = function_40b0c0();
            if ((v60 & (int64_t)(v53 == 0)) != 0) {
                // 0x40380c
                if ((char)function_403db0(v51, v52, &v2, 1) != 0) {
                    goto lab_0x403874;
                } else {
                    // 0x403825
                    free((int64_t *)v52);
                    v49 = (char *)1;
                    goto lab_0x403835;
                }
            } else {
                goto lab_0x403874;
            }
        }
        // 0x40366b
        return (int64_t)v55 & 0xffffffff;
    }
    int64_t v117 = *(int64_t *)(v59 + 8); // 0x4038e2
    int64_t v118 = *(int64_t *)v59; // 0x4038e6
    if ((char)v60 == 0) {
        uint64_t v119 = function_404090(v118, v117, &v2) & 0xffffffff;
        // 0x40366b
        return (int64_t)(char *)(v119 % 256 ^ 1) & 0xffffffff;
    }
    int64_t v120 = function_403db0(v118, v117, &v2, 0); // 0x4038fb
    int64_t v121 = v118; // 0x403904
    int64_t v122 = v117; // 0x403904
    if ((char)v120 == 0) {
        // 0x40366b
        return (int64_t)(char *)1 & 0xffffffff;
    }
    goto lab_0x403a4d;
  lab_0x403abd:
    // 0x403abd
    function_40ea00(4, v14);
    error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
    goto lab_0x403af2;
  lab_0x40359d:;
    int64_t v156 = v109; // 0x4035a2
    if (v5 != 0 == g53 == 0) {
        // 0x403957
        error(0, (int32_t)"WARNING: ignoring --strip-program option as -s option was not specified" ^ (int32_t)"WARNING: ignoring --strip-program option as -s option was not specified", dcgettext(NULL, "WARNING: ignoring --strip-program option as -s option was not specified", 5));
        v156 = (int32_t)"WARNING: ignoring --strip-program option as -s option was not specified" ^ (int32_t)"WARNING: ignoring --strip-program option as -s option was not specified";
    }
    int64_t v157 = v156; // 0x4035b8
    if (g54 != 0) {
        // 0x4035ba
        if (v27 != 0) {
            // 0x403be0
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"options --compare (-C) and --preserve-timestamps are mutually exclusive", 5));
            // 0x403249
            function_4046f0(1);
            // UNREACHABLE
        }
        // 0x4035c5
        if (g53 != 0) {
            // 0x403be0
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"options --compare (-C) and --strip are mutually exclusive", 5));
            // 0x403249
            function_4046f0(1);
            // UNREACHABLE
        }
        // 0x4035dc
        v157 = (int64_t)"options --compare (-C) and --strip are mutually exclusive";
        if ((g28 & -0xf200) != 0) {
            // 0x403933
            error(0, (int32_t)"the --compare (-C) option is ignored when you specify a mode with non-permission bits" ^ (int32_t)"the --compare (-C) option is ignored when you specify a mode with non-permission bits", dcgettext(NULL, "the --compare (-C) option is ignored when you specify a mode with non-permission bits", 5));
            v157 = (int32_t)"the --compare (-C) option is ignored when you specify a mode with non-permission bits" ^ (int32_t)"the --compare (-C) option is ignored when you specify a mode with non-permission bits";
        }
    }
    int64_t v158 = v157;
    int32_t v154; // 0x403050
    int64_t v155; // 0x403050
    int64_t v126; // 0x403050
    if (g58 == NULL) {
        // 0x4038a1
        g57 = -1;
        v126 = v158;
        goto lab_0x403618;
    } else {
        struct passwd * v159 = getpwnam(g58); // 0x4035fc
        if (v159 == NULL) {
            int64_t v160 = function_411570((int64_t)g58, 0, 0, (int64_t *)&v44, 0, a6); // 0x403991
            if ((int32_t)v160 != 0) {
                goto lab_0x4039b0;
            } else {
                // 0x40399a
                v154 = v44;
                v155 = 0;
                if (v44 > -1) {
                    goto lab_0x40360d;
                } else {
                    goto lab_0x4039b0;
                }
            }
        } else {
            // 0x40360a
            v154 = *(int32_t *)((int64_t)v159 + 16);
            v155 = v158;
            goto lab_0x40360d;
        }
    }
  lab_0x403a4d:;
    uint64_t v123 = function_404090(v121, v122, &v2); // 0x403a58
    // 0x40366b
    return (int64_t)(char *)(v123 % 2 % 256 ^ 1) & 0xffffffff;
  lab_0x403a65:
    // 0x403a65
    v74 = 0;
    if ((v47 & 0xf000) == 0x4000) {
        int64_t v124 = v64 + 0xffffffff; // 0x403a87
        v67 = v66;
        v68 = v65;
        v69 = v124 & 0xffffffff;
        v70 = v77;
        v71 = *(int64_t *)((0x100000000 * v124 >> 29) + v65);
        v72 = v75;
        goto lab_0x403543;
    } else {
        goto lab_0x40374d;
    }
  lab_0x403618:;
    int64_t v125 = v126;
    int64_t v127 = (int64_t)g56; // 0x403618
    int64_t * v128; // 0x403050
    int32_t v129; // 0x403050
    int64_t v130; // 0x403050
    int64_t v131; // 0x403050
    int64_t v132; // 0x403050
    int64_t v133; // 0x403050
    int64_t v134; // 0x403050
    int64_t v135; // 0x403050
    int64_t v136; // 0x403050
    if (g56 == NULL) {
        // 0x403892
        g55 = -1;
        v131 = v106;
        v136 = v125;
        v134 = v127;
        goto lab_0x403644;
    } else {
        struct group * v137 = getgrnam(g56); // 0x403628
        if (v137 == NULL) {
            // 0x403628
            v128 = (int64_t *)&v44;
            v132 = v106;
            goto lab_0x4039e4;
        } else {
            // 0x403636
            v129 = *(int32_t *)((int64_t)v137 + 16);
            v130 = v106;
            v135 = v125;
            v133 = v127;
            goto lab_0x403639;
        }
    }
  lab_0x40374d:;
    int64_t v138 = v74;
    if (v73 != 0) {
        // 0x40374d
        err_num2 = v138;
        v63 = v77;
        goto lab_0x403c90;
    } else {
        // 0x403756
        v67 = v66;
        v68 = v65;
        v69 = 2;
        v70 = v77;
        v71 = 0;
        v72 = v138;
        if (v64 == 2) {
            goto lab_0x403543;
        } else {
            int64_t v139 = function_40ea00(4, *v76); // 0x40376a
            error(1, (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory", dcgettext(NULL, "target %s is not a directory", 5));
            v140 = v45;
            v141 = v66;
            v142 = v65;
            v143 = v139;
            v144 = (int32_t)"target %s is not a directory" ^ (int32_t)"target %s is not a directory";
            v145 = 0;
            v146 = v73;
            v147 = v138;
            goto lab_0x403797;
        }
    }
  lab_0x4039b0:;
    int64_t v148 = function_40ec50((int64_t)g58); // 0x4039b7
    error(1, (int32_t)"invalid user %s" ^ (int32_t)"invalid user %s", dcgettext(NULL, "invalid user %s", 5));
    v128 = (int64_t *)&v44;
    v132 = v148;
    goto lab_0x4039e4;
  lab_0x40360d:
    // 0x40360d
    g57 = v154;
    endpwent();
    v126 = v155;
    goto lab_0x403618;
  lab_0x403644:
    // 0x403644
    v114 = v107;
    v58 = v131;
    v113 = v108;
    v112 = v136;
    v115 = v134;
    v116 = v105;
    if (*(char *)&g52 != 0) {
        // 0x403651
        int64_t v150; // 0x403050
        int64_t v151 = function_40f910(v150 & 0xffffffff, v107, 0x403f50, &v2); // 0x403662
        v55 = (char *)(0x100000000 * v151 >> 32);
        char * v152 = v55; // 0x40366b
        return (int64_t)v152 & 0xffffffff;
    }
    goto lab_0x4037e3;
  lab_0x4039e4:;
    int64_t v149 = (int64_t)g56; // 0x4039e4
    if ((int32_t)function_411570(v149, 0, 0, v128, 0, a6) != 0) {
        goto lab_0x403a19;
    } else {
        // 0x403a03
        v129 = v44;
        v130 = v132;
        v135 = 0;
        v133 = v149;
        if (v44 > -1) {
            goto lab_0x403639;
        } else {
            goto lab_0x403a19;
        }
    }
  lab_0x403639:
    // 0x403639
    g55 = v129;
    endgrent();
    v131 = v130;
    v136 = v135;
    v134 = v133;
    goto lab_0x403644;
  lab_0x403a19:;
    int64_t v153 = function_40ec50((int64_t)g56); // 0x403a20
    error(1, (int32_t)"invalid group %s" ^ (int32_t)"invalid group %s", dcgettext(NULL, "invalid group %s", 5));
    v121 = v153;
    v122 = v105;
    goto lab_0x403a4d;
}
// Address range: 0x403cd0 - 0x403cfb
// Address range: 0x403cfb - 0x403d1a
int64_t function_403cfb(void) {
    // 0x403cfb
    return 0x61f4e8;
}
// Address range: 0x403d1a - 0x403d51
int64_t function_403d1a(void) {
    // 0x403d1a
    return 0;
}
// Address range: 0x403d51 - 0x403da8
int64_t function_403d51(void) {
    // 0x403d51
    if (g48 != 0) {
        // 0x403da7
        int64_t result; // 0x403d51
        return result;
    }
    int64_t v1 = g49; // 0x403d84
    int64_t result2; // 0x403d96
    if (g49 >= ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x403d96
        result2 = function_403cfb();
        g48 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g21 - (int64_t)&g20 >> 3) - 1) {
        // 0x403d86
        v1++;
    }
    // 0x403d7a
    g49 = v1;
    // 0x403d96
    result2 = function_403cfb();
    g48 = 1;
    return result2;
}
// Address range: 0x403da8 - 0x403dad
int64_t function_403da8(void) {
    // 0x403da8
    return function_403d1a();
}
// Address range: 0x403db0 - 0x403f4a
int64_t function_403db0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = 0;
    int64_t result; // 0x403db0
    int64_t v3; // 0x403db0
    if ((char)a4 == 0 && (char)v3 == 47 && (char)v3 == 47) {
        // 0x403ea1
        function_40f8a0(&v2);
        int64_t v4 = function_40c5e0(a2, &v2, 0x404020, v1); // 0x403ec3
        result = 1;
        if (v4 == -1) {
            // 0x403ece
            function_40ea00(4, a2);
            error(0, *__errno_location(), dcgettext(NULL, "cannot create directory %s", 5));
            result = (int32_t)&g90 ^ (int32_t)&g90;
        }
        // 0x403e52
        return result;
    }
    int64_t v5 = function_40c5e0(a2, &v2, 0x404020, v1); // 0x403de3
    int32_t * err_num = __errno_location(); // 0x403deb
    if (v5 == -1) {
        // 0x403df9
        function_40ea00(4, a2);
        error(0, *err_num, dcgettext(NULL, "cannot create directory %s", 5));
        function_40f770(&v2);
        function_40f8a0(&v2);
        // 0x403e52
        return 0;
    }
    int64_t v6 = function_40f770(&v2); // 0x403e67
    function_40f8a0(&v2);
    int32_t v7 = v6; // 0x403e7c
    result = v7 >= 0 != v7 != 0;
    if (v7 >= 0 != v7 != 0 && v7 != 0) {
        // 0x403f10
        function_40ea00(4, a2);
        error(0, *err_num, dcgettext(NULL, "cannot create directory %s", 5));
        result = (int32_t)&g90 ^ (int32_t)&g90;
    }
    // 0x403e52
    return result;
}
// Address range: 0x403f50 - 0x403fb2
int64_t function_403f50(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_40c770(a1, a2, 0x404020, a3, g27, 0x404000, (int64_t)g26, (int64_t)g57, (int64_t)g55, 0) & 0xffffffff ^ 1; // 0x403f8e
    if ((char)v1 != 0) {
        // 0x403fa9
        return v1 % 256;
    }
    // 0x403f98
    if (*(char *)(a3 + 33) != 0) {
        // 0x403f9e
        *__errno_location() = 95;
    }
    // 0x403fa9
    return v1 % 256;
}
// Address range: 0x403fc0 - 0x403ff7
int64_t function_403fc0(int64_t a1) {
    int64_t v1 = function_40ea00(4, a1); // 0x403fc9
    char * v2 = dcgettext(NULL, "creating directory %s", 5); // 0x403fdd
    int64_t v3; // 0x403fc0
    return function_404ae0((int64_t)g44, (int64_t)v2, v1, v3, v3, v3);
}
// Address range: 0x404000 - 0x404012
int64_t function_404000(int64_t a1, int64_t a2) {
    // 0x404000
    if (*(char *)(a2 + 46) != 0) {
        // 0x404010
        return function_403fc0(a1);
    }
    // 0x404006
    int64_t result; // 0x404000
    return result;
}
// Address range: 0x404020 - 0x404081
int64_t function_404020(int64_t a1, int64_t path, int64_t a3) {
    // 0x404020
    if (*(char *)(a3 + 33) != 0) {
        // 0x404037
        *__errno_location() = 95;
    }
    int32_t v1 = mkdir((char *)path, 493); // 0x40404a
    int64_t result = v1; // 0x40404a
    if (v1 != 0 || *(char *)(a3 + 46) == 0) {
        // 0x404059
        return result;
    }
    // 0x404068
    function_403fc0(a1);
    return result & 0xffffffff;
}
// Address range: 0x404090 - 0x4046eb
int64_t function_404090(int64_t a1, int64_t a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2; // 0x404090
    if (*(char *)(v1 + 31) == 0) {
        goto lab_0x4040ca;
    } else {
        // 0x4040b0
        int64_t v3; // bp-488, 0x404090
        if (__xstat(1, (char *)a1, (struct stat *)&v3) != 0) {
            // 0x404430
            function_40ea00(4, a1);
            v2 = (int64_t)"cannot stat %s";
            goto lab_0x40444a;
        } else {
            goto lab_0x4040ca;
        }
    }
  lab_0x4046d6_2:;
    // 0x4046d6
    int32_t fd; // 0x4041e2
    close(fd);
    int32_t fd2; // 0x4041f9
    close(fd2);
    int64_t v4 = a2; // 0x4046e6
    int64_t v5 = v1; // 0x4046e6
    goto lab_0x404378;
  lab_0x4040ca:;
    // 0x4040ca
    int32_t v38; // 0x404090
    int32_t stat_loc; // bp-200, 0x404090
    char * path3; // 0x4040fb
    char * path4; // 0x40411b
    int32_t v37; // 0x404090
    if (g54 == 0) {
        // 0x404370
        v4 = a2;
        v5 = v1;
        goto lab_0x404378;
    } else {
        // 0x4040d7
        if ((g28 & -0xf200) != 0) {
            // 0x404370
            v4 = a2;
            v5 = v1;
            goto lab_0x404378;
        } else {
            // 0x4040eb
            path3 = (char *)a1;
            int64_t v42; // bp-344, 0x404090
            int32_t v43 = __lxstat(1, path3, (struct stat *)&v42); // 0x4040fb
            v4 = a2;
            v5 = v1;
            if (v43 != 0) {
                goto lab_0x404378;
            } else {
                // 0x404110
                path4 = (char *)a2;
                int32_t v44 = __lxstat(1, path4, (struct stat *)&stat_loc); // 0x40411b
                v4 = a2;
                v5 = v1;
                if (v44 != 0) {
                    goto lab_0x404378;
                } else {
                    // 0x404128
                    v4 = a2;
                    v5 = v1;
                    if ((v37 & 0xf000) != 0x8000) {
                        goto lab_0x404378;
                    } else {
                        // 0x404143
                        v4 = a2;
                        v5 = v1;
                        if ((v37 & 0xf000) != 0x8000) {
                            goto lab_0x404378;
                        } else {
                            // 0x40415e
                            v4 = a2;
                            v5 = v1;
                            if (true == ((v37 | v37) & -0xf200) == 0) {
                                // 0x404181
                                if (g28 != v37 % 0x1000) {
                                    goto lab_0x404378;
                                } else {
                                    // 0x404190
                                    v38 = g57;
                                    if (g57 == -1) {
                                        int32_t * v45 = __errno_location(); // 0x40460d
                                        *v45 = 0;
                                        int32_t v46 = getuid(); // 0x40461b
                                        v38 = v46;
                                        if (v46 != -1) {
                                            goto lab_0x40419f;
                                        } else {
                                            // 0x404629
                                            v38 = v46;
                                            v4 = a2;
                                            v5 = v1;
                                            if (*v45 == 0) {
                                                goto lab_0x40419f;
                                            } else {
                                                goto lab_0x404378;
                                            }
                                        }
                                    } else {
                                        goto lab_0x40419f;
                                    }
                                }
                            } else {
                                goto lab_0x404378;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x404378:;
    int64_t v6 = function_409810(a1, v4, 0, v5, (int64_t *)&stat_loc, 0); // 0x404389
    int64_t v7 = v4; // 0x404390
    int64_t v8 = v5; // 0x404390
    if ((char)v6 == 0) {
        // 0x404398
        return 0;
    }
    goto lab_0x404279;
  lab_0x40444a:
    // 0x40444a
    error(0, *__errno_location(), dcgettext(NULL, (char *)v2, 5));
    // 0x404398
    return 0;
  lab_0x404279:;
    // 0x404279
    int64_t v9; // 0x404090
    if (g53 != 0) {
        int32_t pid = fork(); // 0x4043b0
        v9 = (int64_t)"fork system call failed";
        if (pid != -1) {
            if (pid == 0) {
                char (*file)[6] = g25; // 0x404670
                execlp(file, file);
                int64_t v10 = function_40ea00(4, (int64_t)file); // 0x404691
                char * format = dcgettext(NULL, "cannot run %s", 5); // 0x4046a5
                int32_t * v11 = __errno_location(); // 0x4046ad
                int32_t err_num = *v11; // 0x4046bd
                error(1, err_num, format);
                goto lab_0x4046c6;
            } else {
                int32_t v12 = waitpid(pid, &stat_loc, 0); // 0x40447f
                v9 = (int64_t)"waiting for strip";
                if (v12 < 0) {
                    goto lab_0x4043c8;
                } else {
                    uint32_t v13 = stat_loc; // 0x40448c
                    if ((v13 / 256 % 256 || v13 % 128) != 0) {
                        // 0x404550
                        error(0, (int32_t)"strip process terminated abnormally" ^ (int32_t)"strip process terminated abnormally", dcgettext(NULL, "strip process terminated abnormally", 5));
                        goto lab_0x4043e5;
                    } else {
                        // 0x4044a1
                        int64_t v14; // 0x404090
                        char v15 = *(char *)(v14 + 31); // 0x4044a1
                        if (v15 == 0) {
                            goto lab_0x4042e3;
                        } else {
                            char v16 = g53; // 0x4044ab
                            if (v16 != 0) {
                                goto lab_0x40429c;
                            } else {
                                goto lab_0x40428c;
                            }
                        }
                    }
                }
            }
        } else {
            goto lab_0x4043c8;
        }
    } else {
        // 0x404286
        if (*(char *)(v8 + 31) == 0) {
            goto lab_0x4042e3;
        } else {
            goto lab_0x40428c;
        }
    }
  lab_0x4043c8:;
    int64_t v17 = v9;
    char * format2 = dcgettext(NULL, (char *)v17, 5); // 0x4043ca
    int32_t * v18 = __errno_location(); // 0x4043d2
    int32_t err_num2 = *v18; // 0x4043dc
    error(0, err_num2, format2);
    goto lab_0x4043e5;
  lab_0x4042e3:;
    char * path2 = (char *)v7;
    int64_t v23; // 0x404090
    if ((g55 & g57) == -1) {
        goto lab_0x404308;
    } else {
        // 0x4042f8
        if (lchown(path2, g57, g55) != 0) {
            // 0x4044c0
            function_40ea00(4, v7);
            v23 = (int64_t)"cannot change ownership of %s";
            goto lab_0x4044da;
        } else {
            goto lab_0x404308;
        }
    }
  lab_0x40428c:
    if ((v37 & 0xf000) == 0x8000) {
        goto lab_0x4042e3;
    } else {
        goto lab_0x40429c;
    }
  lab_0x4043e5:;
    int64_t v19 = 0; // 0x4043ef
    int64_t path; // 0x404090
    if (unlink((char *)path) == 0) {
        int64_t v20 = v19;
        return v20 & 0xffffffff;
    }
    // 0x4043f1
    function_40ea00(4, path);
    char * format3 = dcgettext(NULL, "cannot unlink %s", 5); // 0x40440d
    int32_t * v21 = __errno_location(); // 0x404415
    int32_t err_num3 = *v21; // 0x404425
    error(1, err_num3, format3);
    // 0x404430
    function_40ea00(4, a1);
    v2 = (int64_t)"cannot stat %s";
    goto lab_0x40444a;
  lab_0x404308:;
    int64_t v22 = 1; // 0x40431d
    if (chmod(path2, g28) != 0) {
        // 0x404508
        function_40ea00(4, v7);
        v23 = (int64_t)"cannot change permissions of %s";
        goto lab_0x4044da;
    } else {
        goto lab_0x404323;
    }
  lab_0x40429c:
    // 0x40429c
    if ((int32_t)function_410aa0(v7, (int64_t *)&stat_loc) != 0) {
        // 0x404528
        function_40ea00(4, v7);
        v2 = (int64_t)"cannot set timestamps for %s";
        goto lab_0x40444a;
    } else {
        goto lab_0x4042e3;
    }
  lab_0x4046c6:
    // 0x4046c6
    *__errno_location() = 95;
    v4 = a2;
    v5 = v1;
    goto lab_0x404378;
  lab_0x404323:
    // 0x404323
    v19 = v22;
    if (g29 == 0) {
        // 0x404398
        return v19 & 0xffffffff;
    }
    // 0x40432c
    v19 = v22;
    if (g59 != 1) {
        // 0x404398
        return v19 & 0xffffffff;
    }
    int32_t v24 = __lxstat(1, path2, (struct stat *)&stat_loc); // 0x404340
    v19 = v22;
    if (v24 != 0) {
        // 0x404398
        return v19 & 0xffffffff;
    }
    // 0x404349
    if (g24 != 0) {
        // 0x404352
        if (*path2 == 47) {
            int64_t v25 = v7 + 1; // 0x404587
            char v26 = *(char *)v25; // 0x404587
            int64_t v27 = v25; // 0x404591
            char v28 = v26; // 0x404591
            int64_t v29 = v25; // 0x404591
            int64_t v30 = v7; // 0x404591
            if (v26 == 47) {
                int64_t v31 = v27 + 1; // 0x40459b
                char v32 = *(char *)v31; // 0x40459b
                v28 = v32;
                v29 = v31;
                v30 = v27;
                while (v32 == 47) {
                    int64_t v33 = v31;
                    v31 = v33 + 1;
                    v32 = *(char *)v31;
                    v28 = v32;
                    v29 = v31;
                    v30 = v33;
                }
            }
            int64_t str = v30;
            int64_t v34 = v29; // 0x4045ac
            if (v28 != 0) {
                int64_t v35; // 0x4045bc
                while (true) {
                  lab_0x4045bc:
                    // 0x4045bc
                    v35 = v34 + 1;
                    v34 = v35;
                    switch (*(char *)v35) {
                        case 47: {
                            goto lab_0x4045c7;
                        }
                        case 0: {
                            goto lab_0x4045c7;
                        }
                        default: {
                            goto lab_0x4045bc;
                        }
                    }
                }
              lab_0x4045c7:;
                int32_t n = v35 - str;
                int64_t * mem = malloc(n + 2); // 0x4045d1
                if (mem != NULL) {
                    // 0x4045e2
                    *(int16_t *)stpncpy((char *)mem, (char *)str, n) = 47;
                    free(mem);
                }
            }
        }
    }
    // 0x40435b
    g24 = 0;
    *__errno_location() = 95;
    // 0x404398
    return v22 & 0xffffffff;
  lab_0x4044da:
    // 0x4044da
    error(0, *__errno_location(), dcgettext(NULL, (char *)v23, 5));
    v22 = 0;
    goto lab_0x404323;
  lab_0x40419f:
    // 0x40419f
    v4 = a2;
    v5 = v1;
    int32_t v36; // 0x404090
    if (v37 != v38) {
        goto lab_0x404378;
    } else {
        // 0x4041ac
        v36 = g55;
        if (g55 == -1) {
            int32_t * v39 = __errno_location(); // 0x404638
            *v39 = 0;
            int32_t v40 = getgid(); // 0x404646
            v36 = v40;
            if (v40 != -1) {
                goto lab_0x4041bb;
            } else {
                // 0x404654
                v36 = v40;
                v4 = a2;
                v5 = v1;
                if (*v39 == 0) {
                    goto lab_0x4041bb;
                } else {
                    goto lab_0x404378;
                }
            }
        } else {
            goto lab_0x4041bb;
        }
    }
  lab_0x4041bb:
    // 0x4041bb
    v4 = a2;
    v5 = v1;
    if (v37 != v36) {
        goto lab_0x404378;
    } else {
        // 0x4041c8
        if (g59 == 0) {
            goto lab_0x4041db;
        } else {
            // 0x4041d1
            if (*(char *)(v1 + 37) != 0) {
                goto lab_0x4046c6;
            } else {
                goto lab_0x4041db;
            }
        }
    }
  lab_0x4041db:
    // 0x4041db
    fd = open(path3, O_RDONLY);
    v4 = a2;
    v5 = v1;
    if (fd < 0) {
        goto lab_0x404378;
    } else {
        // 0x4041f2
        fd2 = open(path4, O_RDONLY);
        if (fd2 >= 0) {
            int64_t v41 = function_40b1c0((int64_t)fd, &g50, 0x1000); // 0x40425c
            while (v41 != 0) {
                int64_t n2 = function_40b1c0((int64_t)fd2, &g51, 0x1000); // 0x404222
                if (n2 != v41) {
                    goto lab_0x4046d6_2;
                }
                // 0x404235
                if (memcmp(&g50, &g51, (int32_t)n2) != 0) {
                    goto lab_0x4046d6_2;
                }
                v41 = function_40b1c0((int64_t)fd, &g50, 0x1000);
            }
            // 0x404269
            close(fd);
            close(fd2);
            v7 = a2;
            v8 = v1;
            goto lab_0x404279;
        } else {
            // 0x404663
            close(fd);
            v4 = a2;
            v5 = v1;
            goto lab_0x404378;
        }
    }
}
// Address range: 0x4046f0 - 0x404add
int64_t function_4046f0(int64_t a1) {
    int32_t status = a1; // 0x404706
    if (status != 0) {
        // 0x40470a
        __fprintf_chk(g47, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40472f
        exit(status);
        // UNREACHABLE
    }
    // 0x404736
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [-T] SOURCE DEST\n  or:  %s [OPTION]... SOURCE... DIRECTORY\n  or:  %s [OPTION]... -t DIRECTORY SOURCE...\n  or:  %s [OPTION]... -d DIRECTORY...\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nThis install program copies files (often just compiled) into destination\nlocations you choose.  If you want to download and install a ready-to-use\npackage on a GNU/Linux system, you should instead be using a package manager\nlike yum(1) or apt-get(1).\n\nIn the first three forms, copy SOURCE to DEST or multiple SOURCE(s) to\nthe existing DIRECTORY, while setting permission modes and owner/group.\nIn the 4th form, create all components of the given DIRECTORY(ies).\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --backup[=CONTROL]  make a backup of each existing destination file\n  -b                  like --backup but does not accept an argument\n  -c                  (ignored)\n  -C, --compare       compare each pair of source and destination files, and\n                        in some cases, do not modify the destination at all\n  -d, --directory     treat all arguments as directory names; create all\n                        components of the specified directories\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -D                  create all leading components of DEST except the last,\n                        or all components of --target-directory,\n                        then copy SOURCE to DEST\n  -g, --group=GROUP   set group ownership, instead of process' current group\n  -m, --mode=MODE     set permission mode (as in chmod), instead of rwxr-xr-x\n  -o, --owner=OWNER   set ownership (super-user only)\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  -p, --preserve-timestamps   apply access/modification times of SOURCE files\n                        to corresponding destination files\n  -s, --strip         strip symbol tables\n      --strip-program=PROGRAM  program used to strip binaries\n  -S, --suffix=SUFFIX  override the usual backup suffix\n  -t, --target-directory=DIRECTORY  copy all SOURCE arguments into DIRECTORY\n  -T, --no-target-directory  treat DEST as a normal file\n  -v, --verbose       print the name of each directory as it is created\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --preserve-context  preserve SELinux security context\n  -Z                      set SELinux security context of destination\n                            file and each created directory to default type\n      --context[=CTX]     like -Z, or if CTX is specified then set the\n                            SELinux or SMACK security context to CTX\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "\nThe backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n", 5), g44);
    fputs_unlocked(dcgettext(NULL, "  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups\n", 5), g44);
    int64_t v1 = &g1; // bp-136, 0x4048bb
    bool v2; // 0x4046f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404940
    int64_t v6 = *(int64_t *)v5; // 0x404944
    int64_t v7 = 8; // 0x40494a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"install";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404956
        char v11 = *(char *)v9; // 0x404956
        char v12 = v11; // 0x404956
        bool v13 = false; // 0x404956
        while (v10 == v11) {
            // 0x40494c
            v7--;
            int64_t v14 = v9 + v3; // 0x404956
            int64_t v15 = v8 + v3; // 0x404956
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
            // break -> 0x404962
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x404962
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x404a74;
        } else {
            // 0x404a5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4049c4;
            } else {
                goto lab_0x404a74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4049c4;
        } else {
            // 0x4049aa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x404ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4049c4;
            } else {
                goto lab_0x4049c4;
            }
        }
    }
  lab_0x404a74:
    // 0x404a74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40472f
    exit(status);
    // UNREACHABLE
  lab_0x4049c4:
    // 0x4049c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40472f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404ae0 - 0x404bcf
int64_t function_404ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404ae0
    int64_t v1; // 0x404ae0
    if ((char)v1 != 0) {
        // 0x404b07
        int128_t v2; // 0x404ae0
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x404b48
    fputs_unlocked(g69, stream);
    fwrite_unlocked((int64_t *)": ", 1, 2, stream);
    int64_t v3 = 16; // bp-224, 0x404b77
    function_412a70(a1, a2, &v3);
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x404b9b
    uint64_t v5 = *v4; // 0x404b9b
    int64_t result; // 0x404ae0
    if (v5 >= *(int64_t *)(a1 + 48)) {
        // 0x404bc0
        result = __overflow(stream, 10);
    } else {
        // 0x404ba5
        *v4 = v5 + 1;
        *(char *)v5 = 10;
        result = v5;
    }
    // 0x404bb0
    return result;
}
// Address range: 0x404bd0 - 0x404c14
int64_t function_404bd0(int64_t a1, int32_t a2) {
    if ((a2 & 0xf000) == 0xa000 || (char)function_4112a0() != 0) {
        // 0x404bde
        return 1;
    }
    int32_t v1 = euidaccess((char *)a1, 2); // 0x404c08
    return (int64_t)(v1 & -256) | (int64_t)(v1 == 0);
}
// Address range: 0x404c20 - 0x404cc2
int64_t function_404c20(int64_t a1, uint64_t a2) {
    int64_t v1 = g61; // 0x404c32
    if (g61 == 0) {
        int64_t * mem = calloc(g31, 1); // 0x404c94
        if (mem == NULL) {
            // 0x404ca7
            g61 = &g60;
            g31 = 1024;
            v1 = &g60;
        } else {
            int64_t v2 = (int64_t)mem; // 0x404c94
            g61 = v2;
            v1 = v2;
        }
    }
    // 0x404c34
    if (a2 == 0) {
        // 0x404c6e
        return 1;
    }
    int64_t v3 = a1 & 0xffffffff; // 0x404c2a
    uint64_t v4 = (int64_t)g31; // 0x404c45
    int64_t v5 = v4 > a2 ? a2 : v4; // 0x404c59
    if (function_40b240(v3, v1, v5) != v5) {
        // 0x404c6e
        return 0;
    }
    int64_t v6 = a2; // 0x404c6c
    v6 -= v5;
    int64_t result = 1; // 0x404c43
    while (v6 != 0) {
        uint64_t v7 = (int64_t)g31; // 0x404c45
        int64_t v8 = v6 < v7 ? v6 : v7; // 0x404c59
        result = 0;
        if (function_40b240(v3, g61, v8) != v8) {
            // break -> 0x404c6e
            break;
        }
        v6 -= v8;
        result = 1;
    }
    // 0x404c6e
    return result;
}
// Address range: 0x404cd0 - 0x404d07
int64_t function_404cd0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = fallocate((int32_t)a1, 3, (int32_t)a2, (int32_t)a3); // 0x404cdc
    int64_t result = v1; // 0x404ce1
    if (v1 >= 0) {
        // 0x404ce7
        return result;
    }
    int32_t v2 = *__errno_location(); // 0x404cf5
    return v2 != 38 == (v2 != 95) ? result : 0;
}
// Address range: 0x404d10 - 0x404d2d
int64_t function_404d10(int64_t a1, int64_t path, int64_t mode) {
    int32_t fd = a1; // 0x404d15
    if (fd >= 0) {
        // 0x404d28
        return fchmod(fd, (int32_t)mode);
    }
    // 0x404d19
    return chmod((char *)path, (int32_t)mode);
}
// Address range: 0x404d30 - 0x404d70
int64_t function_404d30(int64_t a1) {
    int32_t * err_num = __errno_location(); // 0x404d31
    *err_num = 95;
    error(1, *err_num, dcgettext(NULL, "failed to restore the default file creation context", 5));
    return &g90;
}
// Address range: 0x404d70 - 0x404e1e
int64_t function_404d70(int64_t a1, int64_t a2, char a3) {
    int64_t v1 = function_40e920(1, 4, a2); // 0x404d87
    __printf_chk(1, "%s -> %s", (char *)function_40e920(0, 4, a1), (char *)v1);
    if (a3 != 0) {
        // 0x404dba
        function_40ea00(4, (int64_t)a3);
        __printf_chk(1, dcgettext(NULL, " (backup: %s)", 5));
    }
    int64_t v2 = (int64_t)g44; // 0x404ded
    int64_t * v3 = (int64_t *)(v2 + 40); // 0x404df4
    uint64_t result = *v3; // 0x404df4
    if (result >= *(int64_t *)(v2 + 48)) {
        // 0x404e10
        return __overflow(g44, 10);
    }
    // 0x404dfe
    *v3 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x404e20 - 0x404f4c
int64_t function_404e20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404e20
    int64_t v1; // 0x404e20
    int32_t v2 = v1;
    if ((char)function_404bd0(a2, v2) != 0) {
        // 0x404ee0
        function_40ea00(4, a2);
        __fprintf_chk(g47, 1, dcgettext(NULL, "%s: overwrite %s? ", 5));
        return function_4119a0();
    }
    // 0x404e45
    int64_t v3; // bp-52, 0x404e20
    function_40af30(v2, &v3);
    function_40ea00(4, a2);
    if (*(char *)(a1 + 24) == 0) {
        // 0x404e84
        if ((*(int32_t *)(a1 + 20) & 0xffff00) == 0) {
            // 0x404ea2
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: unwritable %s (mode %04lo, %s); try anyway? ", 5));
            return function_4119a0();
        }
    }
    // 0x404ea2
    __fprintf_chk(g47, 1, dcgettext(NULL, "%s: replace %s, overriding mode %04lo (%s)? ", 5));
    return function_4119a0();
}
// Address range: 0x404f50 - 0x405053
int64_t function_404f50(int64_t a1, int64_t a2, uint64_t a3, char a4, int32_t a5) {
    int32_t v1 = function_409e90(0xffffff9c, a1, 0xffffff9c, a2, 1024 * (int32_t)(bool)((char)a5 != 0), a3 % 256); // 0x404f87
    if (v1 < 0) {
        // 0x404ff0
        function_40e920(1, 4, a1);
        function_40e920(0, 4, a2);
        error(0, *__errno_location(), dcgettext(NULL, "cannot create hard link %s to %s", 5));
        return 0;
    }
    unsigned char v2 = (char)(v1 != 0) & a4; // 0x404f8e
    if (v2 == 0) {
        // 0x404f93
        return 1;
    }
    // 0x404fa8
    function_40ea00(4, a2);
    __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
    return a1 & 0xffffff00 | (int64_t)v2;
}
// Address range: 0x405060 - 0x405117
int64_t function_405060(uint32_t fd, int64_t a2, char a3, int64_t offset) {
    int32_t v1 = lseek(fd, (int32_t)offset, SEEK_CUR); // 0x40507d
    int64_t v2; // 0x405060
    if (v1 < 0) {
        // 0x4050d0
        function_40ea00(4, a2);
        v2 = (int64_t)"cannot lseek %s";
    } else {
        if (a3 == 0 || (int32_t)function_404cd0((int64_t)fd, (int64_t)v1 - offset, offset) >= 0) {
            // 0x40508c
            return 1;
        }
        // 0x4050b4
        function_40ea00(4, a2);
        v2 = (int64_t)"error deallocating %s";
    }
    // 0x4050ea
    error(0, *__errno_location(), dcgettext(NULL, (char *)v2, 5));
    return (int32_t)&g90 ^ (int32_t)&g90;
}
// Address range: 0x405120 - 0x405543
int64_t function_405120(char fd, int64_t a2, int64_t buf, uint64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10, int64_t a11) {
    char * v1 = (char *)a11; // 0x405158
    *v1 = 0;
    int64_t * v2 = (int64_t *)a10; // 0x405178
    *v2 = 0;
    if (a9 == 0) {
        // 0x405229
        return 1;
    }
    int64_t v3 = 0x100000000 * a2 >> 32; // 0x4051af
    int32_t v4 = v3;
    char v5 = a6;
    int64_t v6 = a9; // 0x4051b7
    int64_t v7 = 0; // 0x4051b7
    int64_t v8 = 0; // 0x4051b7
    char v9; // 0x405120
    int64_t v10; // 0x405120
    int64_t v11; // 0x405120
    int64_t v12; // 0x405120
    uint64_t v13; // 0x405120
    int64_t v14; // 0x405120
    int64_t v15; // 0x405120
    int64_t v16; // 0x405120
    int64_t v17; // 0x405120
    int64_t v18; // 0x405120
    int64_t result; // 0x405120
    int64_t v19; // 0x405120
    int64_t v20; // 0x405120
    int64_t v21; // 0x405120
    int64_t v22; // 0x405120
    int64_t v23; // 0x405120
    int64_t v24; // 0x405120
    int64_t v25; // 0x405120
    int64_t v26; // 0x405120
    int64_t v27; // 0x405120
    int64_t v28; // 0x405120
    int64_t v29; // 0x405120
    int64_t v30; // 0x405120
    int64_t v31; // 0x405120
    int64_t v32; // 0x405120
    int64_t v33; // 0x405120
    uint64_t v34; // 0x405120
    int64_t v35; // 0x405120
    uint64_t v36; // 0x405120
    int64_t v37; // 0x4051d6
    int64_t v38; // 0x405273
    while (true) {
      lab_0x4051bc:
        // 0x4051bc
        v18 = v8;
        v15 = v7;
        v36 = v6;
        int32_t nbyte = v36 < a4 ? v36 : a4; // 0x4051d6
        int32_t v39 = read((int32_t)fd, (int64_t *)buf, nbyte); // 0x4051d6
        while (v39 < 0) {
            int32_t * err_num = __errno_location(); // 0x4051e5
            if (*err_num != 4) {
                // 0x4051ef
                function_40ea00(4, a7);
                error(0, *err_num, dcgettext(NULL, "error reading %s", 5));
                result = 0;
                return result;
            }
            v39 = read((int32_t)fd, (int64_t *)buf, nbyte);
        }
        if (v39 == 0) {
            // break -> 0x405240
            break;
        }
        // 0x405246
        v37 = v39;
        *v2 = *v2 + v37;
        int64_t v40 = a5 == 0 ? a4 : a5; // 0x40526b
        int64_t v41 = v25; // 0x40526b
        int64_t v42 = buf; // 0x40526b
        int64_t v43 = v37; // 0x40526b
        int64_t v44 = buf; // 0x40526b
        int64_t v45 = v15; // 0x40526b
        int64_t v46 = v18; // 0x40526b
        while (true) {
            // 0x405270
            v14 = v44;
            v13 = v43;
            int64_t * str = (int64_t *)v14;
            v33 = v40;
            v28 = v41;
            v10 = v42;
            v16 = v45;
            v19 = v46;
            while (true) {
              lab_0x405270:
                // 0x405270
                v20 = v19;
                v17 = v16;
                v11 = v10;
                v34 = v33;
                v38 = v34 > v13 ? v13 : v34;
                int64_t v47 = v28 & -256; // 0x40527a
                int64_t v48 = v47 | (int64_t)!((a5 == 0 | v38 == 0)); // 0x40527e
                int64_t v49 = v38; // 0x405283
                int64_t v50 = v14; // 0x405283
                if (a5 == 0 || v38 == 0) {
                    char v51 = v17;
                    int64_t v52 = v17 & 0xffffffff; // 0x40535e
                    v9 = v51;
                    v30 = v52;
                    v32 = v52;
                    if (v38 != 0 == ((v51 ^ 1) & (char)(v13 <= v34)) == 0) {
                        // break -> 0x4053d9
                        break;
                    }
                    goto lab_0x405370;
                } else {
                    int64_t v53 = v50;
                    while (*(char *)v53 == 0) {
                        int64_t n = v49 - 1; // 0x40529c
                        if (n == 0) {
                            // 0x4053c0
                            v31 = v48;
                            v23 = (v17 ^ 1) & (int64_t)(v20 != 0);
                            goto lab_0x4053d0;
                        }
                        int64_t str2 = v53 + 1; // 0x405298
                        v49 = n;
                        v50 = str2;
                        if (n % 16 == 0) {
                            int32_t memcmp_rc = memcmp(str, (int64_t *)str2, (int32_t)n); // 0x4052b3
                            int64_t v54 = v47 | (int64_t)(memcmp_rc == 0); // 0x4052bf
                            v24 = memcmp_rc != 0;
                            v35 = v54 ^ v17;
                            v29 = v54;
                            goto lab_0x4052cd;
                        }
                        v53 = v50;
                    }
                    // 0x4054a0
                    v24 = v48 & 0xffffff01;
                    v35 = v17;
                    v29 = 0;
                    goto lab_0x4052cd;
                }
            }
          lab_0x4053d9:
            if (0x7fffffffffffffff - v38 < v20) {
                // 0x405460
                function_40ea00(4, a7);
                error(0, (int32_t)"overflow reading %s" ^ (int32_t)"overflow reading %s", dcgettext(NULL, "overflow reading %s", 5));
                result = 0;
                return result;
            }
            // 0x4053eb
            v26 = v32;
            v12 = v11;
            v21 = v20 + v38;
          lab_0x4053f7_2:
            // 0x4053f7
            v46 = v21;
            v42 = v12;
            v41 = v26;
            v45 = v41 & 0xffffffff;
            v43 = v13 - v38;
            v40 = v38;
            v44 = v38 + v14;
            v7 = v45;
            v27 = v41;
            v22 = v46;
            if (v43 == 0) {
                // break -> 0x405423
                break;
            }
        }
        goto lab_0x405423_2;
    }
    char v55 = v15; // 0x405120
    int64_t v56 = v18; // 0x405120
  lab_0x4054f3:
    // 0x4054f3
    result = 1;
    if (v55 != 0) {
        // 0x4054f8
        return function_405060(v4, a8, v5, v56);
    }
  lab_0x405229:
    // 0x405229
    return result;
  lab_0x405370:;
    int64_t v57 = v20 + v38; // 0x405373
    int32_t v58 = 1; // 0x405386
    int64_t v59 = 0; // 0x405386
    int64_t v60 = v30; // 0x405386
    int64_t v61 = v57; // 0x405386
    int32_t v62 = 1; // 0x405386
    int64_t v63 = 0; // 0x405386
    int64_t v64 = v30; // 0x405386
    int64_t v65 = v57; // 0x405386
    if (v9 == 0) {
        goto lab_0x405309;
    } else {
        goto lab_0x40538c;
    }
  lab_0x4052cd:;
    int64_t v66 = v35 & (int64_t)(v20 != 0);
    v31 = v29;
    v23 = v66;
    int64_t v67; // 0x405120
    int64_t v68; // 0x405120
    int32_t v69; // 0x405120
    if (v13 > v34 || (char)v24 == 0) {
        goto lab_0x4053d0;
    } else {
        // 0x4052e8
        v69 = 1;
        v68 = 0;
        v67 = 1;
        if (v66 == 0) {
            // 0x4052e8
            v9 = v17;
            v30 = 0;
            goto lab_0x405370;
        } else {
            goto lab_0x4052fb;
        }
    }
  lab_0x405309:;
    int64_t v70 = v61;
    int32_t v71 = v58; // 0x405321
    int64_t v72 = v60; // 0x405321
    int64_t v73 = v59; // 0x405321
    if (v70 != function_40b240(v3 & 0xffffffff, v11, v70)) {
        // 0x4054ac
        function_40ea00(4, a8);
        error(0, *__errno_location(), dcgettext(NULL, "error writing %s", 5));
        result = v17 & 0xffffffff;
        return result;
    }
    goto lab_0x405327;
  lab_0x40538c:;
    int64_t v76 = function_405060(v4, a8, v5, v65); // 0x40539d
    v71 = v62;
    v72 = v64;
    v73 = v63;
    if ((char)v76 == 0) {
        // 0x4053b0
        result = v76 & 0xffffffff;
        goto lab_0x405229;
    }
    goto lab_0x405327;
  lab_0x4053d0:
    // 0x4053d0
    v69 = 0;
    v68 = v31;
    v67 = v23;
    v32 = v31;
    if ((char)v23 == 0) {
        // break -> 0x4053d9
        goto lab_0x4053d9;
    }
    goto lab_0x4052fb;
  lab_0x405327:;
    int64_t v74 = v72;
    v26 = v74;
    v12 = v14;
    v21 = v38;
    if (v71 == 0) {
        goto lab_0x4053f7_2;
    }
    if (v38 == 0) {
        // 0x405423
        v7 = v74 & 0xffffffff;
        v27 = v74;
        v22 = 0;
        goto lab_0x405423_2;
    }
    // 0x40533c
    v26 = v74;
    v12 = v14;
    v21 = 0;
    if (v73 % 256 == 0) {
        goto lab_0x4053f7_2;
    }
    // 0x405345
    v33 = 0;
    v28 = v74;
    v10 = v14;
    v16 = v74 & 0xffffffff;
    v19 = v38;
    goto lab_0x405270;
  lab_0x4052fb:
    // 0x4052fb
    v58 = v69;
    v59 = v67;
    v60 = v68;
    v61 = v20;
    v62 = v69;
    v63 = v67;
    v64 = v68;
    v65 = v20;
    if ((char)v17 != 0) {
        goto lab_0x40538c;
    } else {
        goto lab_0x405309;
    }
  lab_0x405423_2:
    // 0x405423
    v8 = v22;
    v6 = v36 - v37;
    char v75 = v27;
    *v1 = v75;
    v25 = v27;
    v55 = v75;
    v56 = v8;
    if (v6 == 0) {
        goto lab_0x4054f3;
    }
    goto lab_0x4051bc;
}
// Address range: 0x405550 - 0x405618
int64_t function_405550(int64_t a1, int64_t a2, int32_t a3, char a4, int64_t a5) {
    // 0x405550
    if (*(char *)(a5 + 37) == 0) {
        unsigned char v1 = *(char *)(a5 + 33) & a4; // 0x4055e2
        if (v1 == 0) {
            // 0x4055e8
            return 1;
        }
        // 0x405600
        *__errno_location() = 95;
        return (int64_t)a4 & 0xffffff00 | (int64_t)v1;
    }
    int32_t * err_num = __errno_location(); // 0x405567
    char * v2 = (char *)(a5 + 38);
    if (*(char *)(a5 + 35) != 0) {
        char v3 = *v2; // 0x4055c8
        if (v3 == 0) {
            // 0x4055d0
            *err_num = 95;
            // 0x4055b5
            return v3 ^ 1;
        }
    }
    // 0x405575
    *err_num = 95;
    function_40ea00(4, a1);
    error(0, *err_num, dcgettext(NULL, "failed to get security context of %s", 5));
    // 0x4055b5
    return (int64_t)(*v2 ^ 1);
}
// Address range: 0x405620 - 0x405693
int64_t function_405620(int64_t a1, char a2, int32_t a3, int64_t a4) {
    int32_t * err_num = __errno_location(); // 0x40562a
    if (*(char *)(a4 + 35) != 0) {
        // 0x405680
        if (*(char *)(a4 + 38) == 0) {
            // 0x405686
            *err_num = 95;
            return 0;
        }
    }
    // 0x405638
    *err_num = 95;
    function_40e920(0, 4, a1);
    error(0, *err_num, dcgettext(NULL, "failed to set the security context of %s", 5));
    return (int32_t)&g90 ^ (int32_t)&g90;
}
// Address range: 0x4056a0 - 0x4056c6
int64_t function_4056a0(int64_t * a1, int64_t a2) {
    int64_t result = function_40bb50(61, 0, 0x40c510, 0x40c550, 0x40c5c0); // 0x4056bb
    *(int64_t *)((int64_t)a1 + 56) = result;
    return result;
}
// Address range: 0x4056d0 - 0x4056f6
int64_t function_4056d0(int64_t a1, int64_t a2) {
    int64_t result = function_40bb50(61, 0, 0x40c540, 0x40c550, 0x40c5c0); // 0x4056eb
    *(int64_t *)(a1 + 64) = result;
    return result;
}
// Address range: 0x405700 - 0x405731
int64_t function_405700(int64_t * a1) {
    // 0x405700
    int128_t v1; // 0x405700
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    int128_t v4 = __asm_pxor(v2, v2); // 0x405701
    *(int64_t *)(v3 + 64) = 0;
    int64_t v5; // 0x405700
    __asm_movups(*(int128_t *)&v5, v4);
    __asm_movups(*(int128_t *)(v3 + 16), v4);
    __asm_movups(*(int128_t *)(v3 + 32), v4);
    __asm_movups(*(int128_t *)(v3 + 48), v4);
    int32_t v6 = geteuid(); // 0x40571f
    char v7 = v6 == 0; // 0x405729
    *(char *)(v3 + 27) = v7;
    *(char *)(v3 + 26) = v7;
    return (int64_t)(v6 & -256) | (int64_t)(v6 == 0);
}
// Address range: 0x405740 - 0x405764
int64_t function_405740(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x405744
    int32_t v2 = *v1; // 0x405749
    bool v3 = v2 == 1 | v2 == 22;
    int64_t result = (int64_t)v1 & -256 | (int64_t)v3; // 0x405759
    if (v3) {
        // 0x40575b
        result = (int64_t)(*(char *)(a1 + 26) ^ 1);
    }
    // 0x405762
    return result;
}
// Address range: 0x405770 - 0x40595b
int64_t function_405770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, char a5, int64_t * a6) {
    int32_t owner = *(int32_t *)(a4 + 28); // 0x405786
    int32_t group = *(int32_t *)(a4 + 32); // 0x40578a
    int64_t v1; // 0x405770
    if (a5 != 0) {
        goto lab_0x4057e0;
    } else {
        // 0x405793
        if (*(int64_t *)(a1 + 24) % 0xff000000000100 == 0) {
            // 0x405838
            if (*(char *)(a1 + 43) == 0) {
                goto lab_0x4057e0;
            } else {
                // 0x40583e
                v1 = a1 + 16;
                goto lab_0x4057ae;
            }
        } else {
            // 0x4057a7
            v1 = a4 + 24;
            goto lab_0x4057ae;
        }
    }
  lab_0x4057e0:;
    int32_t fd = a3; // 0x4057e6
    if (fd == -1) {
        char * path = (char *)a2; // 0x405863
        if (lchown(path, owner, group) == 0) {
            // 0x405823
            return 1;
        }
        int32_t * v2 = __errno_location(); // 0x40586c
        int32_t v3 = *v2; // 0x405871
        if (v3 != 1 != v3 != 22) {
            // 0x405880
            lchown(path, -1, group);
            *v2 = v3;
        }
    } else {
        // 0x4057eb
        if (fchown(fd, owner, group) == 0) {
            // 0x405823
            return 1;
        }
        int32_t * v4 = __errno_location(); // 0x4057f6
        int32_t v5 = *v4; // 0x4057fb
        switch (v5) {
            case 1: {
            }
            case 22: {
                // 0x4058e0
                fchown(fd, -1, group);
                *v4 = v5;
                // break -> 0x405815
                break;
            }
        }
    }
    // 0x405815
    if ((char)function_405740(a1) != 0) {
        // 0x405823
        return 0;
    }
    // 0x405898
    function_40ea00(4, a2);
    error(0, *__errno_location(), dcgettext(NULL, "failed to preserve ownership for %s", 5));
    // 0x405823
    return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
  lab_0x4057ae:;
    int32_t v6 = *(int32_t *)((int64_t)a6 + 24);
    uint32_t v7 = *(int32_t *)v1;
    if (((v7 % 512 ^ 4095) & v6) != 0) {
        // 0x4057be
        if ((int32_t)function_40d0b0(a2, a3 & 0xffffffff, v6 & 448 & v7) != 0) {
            int32_t * err_num = __errno_location(); // 0x405900
            switch (*err_num) {
                case 1: {
                }
                case 22: {
                    // 0x405950
                    if (*(char *)(a1 + 27) == 0) {
                        // 0x405823
                        return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
                    }
                    // break -> 0x405914
                    break;
                }
            }
            // 0x405914
            function_40ea00(4, a2);
            error(0, *err_num, dcgettext(NULL, "clearing permissions for %s", 5));
            // 0x405823
            return -(int64_t)*(char *)(a1 + 36) & 0xffffffff;
        }
    }
    goto lab_0x4057e0;
}
// Address range: 0x405960 - 0x40598a
int64_t function_405960(int64_t a1) {
    uint32_t result = g30; // 0x405961
    if (result != -1) {
        // 0x40596c
        return result;
    }
    int32_t cmask = umask(0); // 0x405972
    g30 = cmask;
    umask(cmask);
    return cmask;
}
// Address range: 0x405990 - 0x40980c
int64_t function_405990(int64_t a1, int64_t str3, char a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x405990
    int64_t v1; // 0x405990
    int64_t v2 = v1;
    int64_t v3 = a6 + 24; // 0x4059c0
    char * v4 = (char *)v3; // 0x4059c0
    if (!((a10 == 0 | *v4 == 0))) {
        // 0x4059e3
        *(char *)a10 = 0;
    }
    int32_t * v5 = (int32_t *)(a6 + 4); // 0x4059ee
    int64_t v6 = 1; // 0x4059f6
    char * v7 = (char *)a9; // 0x4059fb
    *v7 = 0;
    int32_t v8 = v6;
    char * file_path = (char *)a1;
    int64_t v9; // 0x405990
    int64_t v10; // 0x405990
    int64_t v11; // bp-632, 0x405990
    if (*v5 == 2) {
        int32_t v12 = __lxstat(v8, file_path, (struct stat *)&v11); // 0x406220
        v10 = v1 & -256 | (int64_t)(v12 != 0);
        v9 = a1;
        if (v12 == 0) {
            goto lab_0x405a2c;
        } else {
            goto lab_0x406237;
        }
    } else {
        int32_t v13 = __xstat(v8, file_path, (struct stat *)&v11); // 0x405a15
        v10 = v1 & -256 | (int64_t)(v13 != 0);
        v9 = a1;
        if (v13 != 0) {
            goto lab_0x406237;
        } else {
            goto lab_0x405a2c;
        }
    }
  lab_0x408fc4:;
    // 0x408fc4
    int64_t v14; // 0x405990
    free((int64_t *)v14);
    int32_t fd3; // 0x405990
    int32_t fd = fd3; // 0x408fd0
    int64_t v15; // 0x405990
    int64_t v16 = v15; // 0x408fd0
    int64_t v17; // 0x405990
    int64_t v18 = v17; // 0x408fd0
    int64_t v19; // 0x405990
    int64_t v20 = v19; // 0x408fd0
    int64_t v21; // 0x408df9
    int64_t v22 = v21 & 0xffffffff; // 0x408fd0
    int64_t v23 = 0; // 0x408fd0
    int64_t v24; // 0x405990
    int64_t v25 = v24; // 0x408fd0
    int64_t v26 = v10 % 256; // 0x408fd0
    goto lab_0x408940;
  lab_0x405a2c:;
    int64_t v192 = &v11; // 0x405a05
    int32_t owner; // 0x405990
    int32_t v138 = owner & 0xf000; // 0x405a38
    int64_t * v470; // 0x405990
    int64_t v89; // 0x405990
    int64_t v473; // 0x405990
    int64_t v242; // 0x405990
    if (v138 == 0x4000) {
        // 0x406288
        if (*(char *)(a6 + 42) == 0) {
            // 0x406cb0
            v6 = 4;
            function_40ea00(4, a1);
            v242 = (int64_t)"omitting directory %s";
            v473 = 5;
            if (*(char *)(a6 + 25) == 0) {
                goto lab_0x406e18;
            } else {
                goto lab_0x406cd2;
            }
        } else {
            if ((char)a7 == 0) {
                goto lab_0x405a72;
            } else {
                // 0x406293
                v470 = (int64_t *)(a6 + 64);
                goto lab_0x40669f;
            }
        }
    } else {
        if ((char)a7 == 0) {
            goto lab_0x405a72;
        } else {
            int64_t * v694 = (int64_t *)(a6 + 64);
            int64_t v695 = *v694; // 0x405a56
            v6 = v695;
            if (*(int32_t *)&v89 == 0) {
                uint64_t v696 = function_40aef0(v695, a1, v192); // 0x406692
                v470 = v694;
                if ((char)v696 != 0) {
                    // 0x407670
                    function_40ea00(4, a1);
                    error(0, (int32_t)"warning: source file %s specified more than once" ^ (int32_t)"warning: source file %s specified more than once", dcgettext(NULL, "warning: source file %s specified more than once", 5));
                    // 0x406271
                    return v696 % 256 & 0xffffffff;
                }
                goto lab_0x40669f;
            } else {
                // 0x405a63
                function_40ae60(v695, a1, v192);
                goto lab_0x405a72;
            }
        }
    }
  lab_0x406237:
    // 0x406237
    function_40ea00(4, v9);
    error(0, *__errno_location(), dcgettext(NULL, "cannot stat %s", 5));
    // 0x406271
    return 0;
  lab_0x405a72:;
    // 0x405a72
    int64_t v471; // bp-888, 0x405990
    int64_t v135 = &v471; // 0x4059a6
    int64_t v79 = a7 & 0xffffffff; // 0x4059c5
    int32_t v472 = *v5; // 0x405a7c
    int32_t v397 = v472 == 4 ? 1 : (int32_t)((int64_t)(v472 == 3) & a7);
    int64_t v278; // 0x4059a2
    if (a3 != 0) {
        goto lab_0x405dd0;
    } else {
        // 0x405a9f
        v278 = (int64_t)a3 & 0xffffffff;
        if (v138 == 0x8000) {
            goto lab_0x405acd;
        } else {
            // 0x405aac
            if (*(char *)(a6 + 20) == 0) {
                goto lab_0x406540;
            } else {
                switch ((int16_t)v138) {
                    case -0x6000: {
                        goto lab_0x406540;
                    }
                    case 0x4000: {
                        goto lab_0x406540;
                    }
                    default: {
                        goto lab_0x405acd;
                    }
                }
            }
        }
    }
  lab_0x406e18:
    // 0x406e18
    v6 = 0;
    // 0x406cd9
    error(0, 0, dcgettext(NULL, "-r not specified; omitting directory %s", (int32_t)v473));
    // 0x406271
    return 0;
  lab_0x406cd2:
    // 0x406cd2
    v6 = 0;
    // 0x406cd9
    error(0, 0, dcgettext(NULL, (char *)v242, 5));
    // 0x406271
    return 0;
  lab_0x405dd0:;
    // 0x405dd0
    int128_t v93; // 0x405990
    int32_t v123 = v93; // 0x405dd9
    char v125 = 0; // 0x405dd9
    int64_t v126 = 1; // 0x405dd9
    int64_t v130 = v93; // 0x405dd9
    int64_t v132 = 0; // 0x405dd9
    int64_t v134 = v135; // 0x405dd9
    goto lab_0x405de4;
  lab_0x40669f:
    // 0x40669f
    function_40ae60(*v470, a1, v192);
    goto lab_0x405a72;
  lab_0x405de4:;
    int32_t v243 = v123; // 0x405de6
    char v244 = v125; // 0x405de6
    int64_t v245 = v126; // 0x405de6
    int128_t v128; // 0x405990
    int128_t v246 = v128; // 0x405de6
    int64_t v247 = v130; // 0x405de6
    int64_t v248 = v134; // 0x405de6
    int64_t v249; // 0x405990
    int64_t v250; // 0x405990
    int32_t v251; // 0x405990
    int64_t v252; // 0x405990
    int128_t v253; // 0x405990
    int64_t v254; // 0x405990
    char v255; // 0x405990
    if ((char)a7 != 0) {
        // 0x406210
        v251 = v123;
        v255 = v125;
        v254 = v126;
        v253 = v128;
        v252 = v130;
        v249 = v132;
        v250 = v134;
        v243 = v123;
        v244 = v125;
        v245 = v126;
        v246 = v128;
        v247 = v130;
        v248 = v134;
        if (*(int64_t *)(a6 + 56) != 0) {
            goto lab_0x405d20;
        } else {
            goto lab_0x405dec;
        }
    } else {
        goto lab_0x405dec;
    }
  lab_0x405acd:;
    // 0x405acd
    int64_t v256; // 0x405990
    int32_t v165; // bp-488, 0x405990
    bool v257; // 0x405990
    if (*v4 != 0) {
        goto lab_0x406540;
    } else {
        // 0x405ad8
        if (*(char *)(a6 + 44) != 0) {
            goto lab_0x406540;
        } else {
            // 0x405ae3
            if (*(char *)(a6 + 23) != 0) {
                goto lab_0x406540;
            } else {
                // 0x405aee
                if (*(int32_t *)&v89 != 0) {
                    goto lab_0x406540;
                } else {
                    // 0x405afb
                    if (*(char *)(a6 + 21) != 0) {
                        goto lab_0x406540;
                    } else {
                        // 0x405b06
                        v6 = 1;
                        int32_t v258 = __xstat(1, (char *)str3, (struct stat *)&v165); // 0x405b23
                        v257 = v258 != 0;
                        v256 = 1;
                        if (v258 != 0) {
                            goto lab_0x40657b;
                        } else {
                            goto lab_0x405b44;
                        }
                    }
                }
            }
        }
    }
  lab_0x405dec:;
    int32_t v259 = v243; // 0x405df1
    char v260 = v244; // 0x405df1
    int64_t v261 = v245; // 0x405df1
    int128_t v262 = v246; // 0x405df1
    int64_t v263 = v247; // 0x405df1
    int64_t v264 = v248; // 0x405df1
    int64_t v265; // 0x405990
    int64_t v266; // 0x405990
    int32_t v267; // 0x405990
    int32_t v268; // 0x405990
    int64_t v269; // 0x405990
    int64_t v270; // 0x405990
    int128_t v271; // 0x405990
    int128_t v272; // 0x405990
    int64_t v273; // 0x405990
    int64_t v274; // 0x405990
    char v275; // 0x405990
    char v276; // 0x405990
    if (*(char *)(a6 + 46) == 0) {
        goto lab_0x4062b0;
    } else {
        // 0x405df7
        v268 = v243;
        v276 = v244;
        v274 = v245;
        v272 = v246;
        v270 = v247;
        v266 = v248;
        v267 = v243;
        v275 = v244;
        v273 = v245;
        v271 = v246;
        v269 = v247;
        v265 = v248;
        if (*v4 != 0) {
            goto lab_0x406470;
        } else {
            goto lab_0x405e02;
        }
    }
  lab_0x406540:
    // 0x406540
    v6 = 1;
    int32_t v277 = __lxstat(1, (char *)str3, (struct stat *)&v165); // 0x40655d
    v257 = false;
    v256 = v278;
    if (v277 == 0) {
        goto lab_0x405b44;
    } else {
        goto lab_0x40657b;
    }
  lab_0x405d20:;
    // 0x405d20
    int64_t v279; // 0x405990
    int64_t v280; // 0x405990
    int64_t v281; // 0x405990
    int32_t v282; // 0x405990
    int32_t v283; // 0x405990
    int64_t v86; // bp-200, 0x405990
    int64_t v284; // 0x405990
    int64_t v285; // 0x405990
    int128_t v286; // 0x405990
    int128_t v287; // 0x405990
    int64_t v288; // 0x405990
    int64_t v289; // 0x405990
    char v290; // 0x405990
    char v291; // 0x405990
    if (*v4 != 0) {
        // 0x4062a0
        v259 = v251;
        v260 = v255;
        v261 = v254;
        v262 = v253;
        v263 = v252;
        v264 = v250;
        v267 = v251;
        v275 = v255;
        v273 = v254;
        v271 = v253;
        v269 = v252;
        v265 = v250;
        if (*(char *)(a6 + 46) != 0) {
            goto lab_0x406470;
        } else {
            goto lab_0x4062b0;
        }
    } else {
        // 0x405d2b
        if (*(int32_t *)&v89 != 0) {
            // 0x4067d0
            v268 = v251;
            v276 = v255;
            v274 = v254;
            v272 = v253;
            v270 = v252;
            v266 = v250;
            if (*(char *)(a6 + 46) != 0) {
                goto lab_0x405e02;
            } else {
                // 0x4067db
                v283 = v251;
                v291 = v255;
                v289 = v254;
                v287 = v253;
                v285 = v252;
                v281 = v250;
                v282 = v251;
                v290 = v255;
                v288 = v254;
                v286 = v253;
                v284 = v252;
                v280 = v250;
                if (v138 != 0x4000) {
                    goto lab_0x405e33;
                } else {
                    goto lab_0x4067f0;
                }
            }
        } else {
            // 0x405d37
            v279 = &v165;
            if ((char)v249 == 0) {
                int32_t v292 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x407751
                v243 = v251;
                v244 = v255;
                v245 = v254;
                v246 = v253;
                v247 = v252;
                v248 = v250;
                if (v292 != 0) {
                    goto lab_0x405dec;
                } else {
                    // 0x40775e
                    v279 = &v86;
                    goto lab_0x405d46;
                }
            } else {
                goto lab_0x405d46;
            }
        }
    }
  lab_0x4062b0:;
    int32_t v293 = v259; // 0x4062b5
    char v294 = v260; // 0x4062b5
    int64_t v295 = v261; // 0x4062b5
    int128_t v296 = v262; // 0x4062b5
    int64_t v297 = v263; // 0x4062b5
    int64_t v298 = v264; // 0x4062b5
    int32_t v299 = v259; // 0x4062b5
    char v300 = v260; // 0x4062b5
    int64_t v301 = v261; // 0x4062b5
    int128_t v302 = v262; // 0x4062b5
    int64_t v303 = v263; // 0x4062b5
    int64_t v304 = v264; // 0x4062b5
    if (v138 != 0x4000 | *(char *)(a6 + 42) == 0) {
        goto lab_0x405e28;
    } else {
        goto lab_0x4062cb;
    }
  lab_0x405b44:;
    int64_t v305 = &v165;
    int64_t v97 = v257;
    int64_t v150 = owner; // 0x405b4b
    int64_t v306; // 0x405990
    int32_t v307; // 0x405990
    int64_t v308; // 0x405990
    int64_t v99; // 0x405990
    int64_t v309; // 0x405990
    int64_t v310; // 0x405990
    int64_t v94; // 0x405990
    int64_t v311; // 0x405990
    int32_t v95; // 0x405990
    int64_t v98; // 0x405990
    char v70; // bp-344, 0x405990
    int64_t v96; // 0x405990
    int64_t v312; // 0x405990
    if (v1 == v150) {
        // 0x407008
        if (v11 != (int64_t)v165) {
            goto lab_0x405b58;
        } else {
            unsigned char v313 = *(char *)(a6 + 23); // 0x40701c
            int32_t v314 = v93;
            v94 = str3;
            v95 = v314;
            v96 = 1;
            v98 = v93;
            v99 = v256;
            if (v313 != 0) {
                goto lab_0x405b63;
            } else {
                // 0x40702a
                v312 = 1;
                if (*v5 == 2) {
                    goto lab_0x406e35;
                } else {
                    // 0x407035
                    v6 = 1;
                    int32_t v315 = __lxstat(1, (char *)str3, (struct stat *)&v70); // 0x407059
                    int64_t v316 = v256 % 256; // 0x40705e
                    v94 = str3;
                    v95 = v314;
                    v96 = v97;
                    v98 = v93;
                    v99 = v316;
                    if (v315 != 0) {
                        goto lab_0x405b63;
                    } else {
                        // 0x40706e
                        v6 = 1;
                        int32_t v317 = __lxstat(1, file_path, (struct stat *)&v86); // 0x407087
                        v94 = a1;
                        v95 = v314;
                        v96 = v97;
                        v98 = v93;
                        v99 = v316;
                        if (v317 != 0) {
                            goto lab_0x405b63;
                        } else {
                            int64_t v318 = v313; // 0x4070aa
                            // 0x4070ac
                            v318 = v86 == (int64_t)v70;
                            int64_t v319 = &v70; // 0x4070c4
                            v89 = v319;
                            int64_t v320 = &v86; // 0x4070cb
                            int32_t v321 = v319;
                            v311 = a1;
                            v306 = v319;
                            v307 = v321;
                            v310 = v320;
                            v309 = v316;
                            v308 = v318;
                            if ((owner & 0xf000) != 0xa000) {
                                goto lab_0x406e59;
                            } else {
                                // 0x4070e2
                                v311 = a1;
                                v306 = v319;
                                v307 = v321;
                                v310 = v320;
                                v309 = v316;
                                v308 = v318;
                                if ((owner & 0xf000) != 0xa000) {
                                    goto lab_0x406e59;
                                } else {
                                    // 0x4070f8
                                    v94 = a1;
                                    v95 = v314;
                                    v96 = v97;
                                    v98 = v93;
                                    v99 = v316;
                                    v311 = a1;
                                    v306 = v319;
                                    v307 = v321;
                                    v310 = v320;
                                    v309 = v316;
                                    v308 = v318;
                                    if (*(char *)(a6 + 21) == 0) {
                                        goto lab_0x406e59;
                                    } else {
                                        goto lab_0x405b63;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x405b58;
    }
  lab_0x40657b:;
    int32_t * v322 = __errno_location(); // 0x40657b
    if (*v322 != 2) {
        // 0x406589
        function_40ea00(4, str3);
        char * format7 = dcgettext(NULL, "cannot stat %s", 5); // 0x4065b3
        error(0, *(int32_t *)(0x100000000000000 * (int64_t)v322 >> 56), format7);
        // 0x406271
        return v278 & 0xffffffff;
    }
    goto lab_0x405dd0;
  lab_0x405e28:
    // 0x405e28
    v283 = v293;
    v291 = v294;
    v289 = v295;
    v287 = v296;
    v285 = v297;
    v281 = v298;
    int32_t v323 = v293; // 0x405e2d
    char v324 = v294; // 0x405e2d
    int64_t v325 = v295; // 0x405e2d
    int128_t v326 = v296; // 0x405e2d
    int64_t v327 = v297; // 0x405e2d
    int64_t v328 = v298; // 0x405e2d
    if (*v4 != 0) {
        goto lab_0x406487;
    } else {
        goto lab_0x405e33;
    }
  lab_0x4062cb:;
    int64_t v329 = owner; // 0x4062d2
    v6 = v329;
    int64_t v330 = v329; // 0x4062db
    int32_t v331 = v299; // 0x4062db
    char v332 = v300; // 0x4062db
    int64_t v333 = v301; // 0x4062db
    int128_t v334 = v302; // 0x4062db
    int64_t v335 = v303; // 0x4062db
    int64_t v336 = v304; // 0x4062db
    int64_t v337; // 0x405990
    int32_t v338; // 0x405990
    int64_t v339; // 0x405990
    int128_t v340; // 0x405990
    int64_t v341; // 0x405990
    char v342; // 0x405990
    int64_t v343; // 0x405990
    if ((char)a7 == 0) {
        goto lab_0x406d10;
    } else {
        // 0x4062e1
        v338 = v299;
        v342 = v300;
        v341 = v301;
        v340 = v302;
        v339 = v303;
        v337 = v304;
        v343 = function_409a10(str3, v329, v11);
        goto lab_0x4062f7;
    }
  lab_0x406470:
    // 0x406470
    v323 = v267;
    v324 = v275;
    v325 = v273;
    v326 = v271;
    v327 = v269;
    v328 = v265;
    if (v138 != 0x4000) {
        goto lab_0x406487;
    } else {
        // 0x40647c
        v299 = v267;
        v300 = v275;
        v301 = v273;
        v302 = v271;
        v303 = v269;
        v304 = v265;
        v323 = v267;
        v324 = v275;
        v325 = v273;
        v326 = v271;
        v327 = v269;
        v328 = v265;
        if (*(char *)(a6 + 42) != 0) {
            goto lab_0x4062cb;
        } else {
            goto lab_0x406487;
        }
    }
  lab_0x405e02:
    // 0x405e02
    v282 = v268;
    v290 = v276;
    v288 = v274;
    v286 = v272;
    v284 = v270;
    v280 = v266;
    if (v138 == 0x4000) {
        goto lab_0x4067f0;
    } else {
        // 0x405e12
        function_404d70(a1, str3, v276);
        v293 = v268;
        v294 = v276;
        v295 = v274;
        v296 = v272;
        v297 = v270;
        v298 = v266;
        goto lab_0x405e28;
    }
  lab_0x405b58:
    // 0x405b58
    v94 = str3;
    v95 = v93;
    v96 = v97;
    v98 = v93;
    v99 = v256;
    v312 = 0;
    if (*v5 == 2) {
        goto lab_0x406e35;
    } else {
        goto lab_0x405b63;
    }
  lab_0x406487:;
    // 0x406487
    int64_t v344; // 0x405990
    int64_t v345; // 0x405990
    int64_t v346; // 0x405990
    int32_t v347; // 0x405990
    int32_t v348; // 0x405990
    int32_t v349; // 0x405990
    int64_t v350; // 0x405990
    int64_t v351; // 0x405990
    int64_t v352; // 0x405990
    int128_t v353; // 0x405990
    int128_t v354; // 0x405990
    int128_t v355; // 0x405990
    int64_t v356; // 0x405990
    int64_t v357; // 0x405990
    int64_t v358; // 0x405990
    char v359; // 0x405990
    char v360; // 0x405990
    char v361; // 0x405990
    int64_t v362; // 0x405990
    if (v1 == 1) {
        // 0x406d28
        v349 = v323;
        v361 = v324;
        v357 = v325;
        v355 = v326;
        v352 = v327;
        v346 = v328;
        v362 = function_4099d0((int64_t)owner, v11);
        goto lab_0x40662c;
    } else {
        // 0x406495
        v347 = v323;
        v359 = v324;
        v356 = v325;
        v353 = v326;
        v350 = v327;
        v344 = v328;
        v348 = v323;
        v360 = v324;
        v354 = v326;
        v351 = v327;
        v358 = 0;
        v345 = v328;
        if (*(char *)(a6 + 34) != 0) {
            goto lab_0x406440;
        } else {
            goto lab_0x4064a7;
        }
    }
  lab_0x405e33:
    // 0x405e33
    v347 = v283;
    v359 = v291;
    v356 = v289;
    v353 = v287;
    v350 = v285;
    v344 = v281;
    int64_t v190; // 0x405990
    int32_t v363; // 0x405990
    int64_t v364; // 0x405990
    int128_t v365; // 0x405990
    int64_t v185; // 0x405990
    int64_t v72; // 0x405990
    int64_t v366; // 0x405990
    char v367; // 0x405990
    if (*(char *)(a6 + 34) != 0) {
        goto lab_0x406440;
    } else {
        // 0x405e3e
        v363 = v283;
        v367 = v291;
        v72 = v289;
        v365 = v287;
        v364 = v285;
        v366 = 0;
        v185 = 0x100000000000000 * v289 >> 56;
        v190 = v281;
        goto lab_0x405e56;
    }
  lab_0x406d10:
    // 0x406d10
    v338 = v331;
    v342 = v332;
    v341 = v333;
    v340 = v334;
    v339 = v335;
    v337 = v336;
    v343 = function_4099d0(v330, v11);
    goto lab_0x4062f7;
  lab_0x4067f0:
    // 0x4067f0
    v283 = v282;
    v291 = v290;
    v289 = v288;
    v287 = v286;
    v285 = v284;
    v281 = v280;
    v299 = v282;
    v300 = v290;
    v301 = v288;
    v302 = v286;
    v303 = v284;
    v304 = v280;
    if (*(char *)(a6 + 42) == 0) {
        goto lab_0x405e33;
    } else {
        goto lab_0x4062cb;
    }
  lab_0x406e35:
    // 0x406e35
    v89 = v305;
    int32_t v462 = v305;
    v311 = str3;
    v306 = v305;
    v307 = v462;
    v310 = v192;
    v309 = v256;
    v308 = v312;
    int64_t v222; // 0x405990
    int64_t v221; // 0x405990
    int64_t v220; // 0x405990
    int64_t v219; // 0x405990
    if (v138 == 0xa000) {
        // 0x407bd0
        v311 = str3;
        v306 = v305;
        v307 = v462;
        v310 = v192;
        v309 = v256;
        v308 = v312;
        if ((owner & 0xf000) != 0xa000) {
            goto lab_0x406e59;
        } else {
            // 0x407be6
            v6 = a1;
            if ((char)function_40ef80(a1, str3) != 0) {
                goto lab_0x406eb0;
            } else {
                int64_t v463 = v256 % 256; // 0x407c11
                v94 = str3;
                v95 = v93;
                v96 = v97;
                v98 = v93;
                v99 = v463;
                if (v312 == 0 | *(int32_t *)&v89 != 0) {
                    goto lab_0x405b63;
                } else {
                    // 0x407c2d
                    v219 = str3;
                    v220 = 1;
                    v221 = v463;
                    v222 = (int64_t)(*v4 ^ 1);
                    goto lab_0x407c3b;
                }
            }
        }
    } else {
        goto lab_0x406e59;
    }
  lab_0x405b63:;
    int64_t v131 = v98;
    int128_t v464; // 0x405990
    int128_t v129 = v464;
    int64_t v127 = v96;
    int32_t v124 = v95;
    int64_t v419; // 0x405990
    int64_t v409; // 0x405990
    int64_t v418; // 0x405990
    int32_t v417; // 0x405990
    int64_t v51; // 0x405990
    int64_t v416; // 0x405990
    int64_t v103; // 0x405990
    int64_t v415; // 0x405990
    if (v138 == 0x4000) {
        // 0x407110
        v103 = v94;
        v409 = v99;
        if (*v4 == 0) {
            goto lab_0x405b9f;
        } else {
            // 0x40711b
            v415 = v94;
            v417 = *(int32_t *)(a6 + 8);
            v418 = v99;
            goto lab_0x40711f;
        }
    } else {
        // 0x405b73
        v416 = v94;
        v419 = v99;
        if (*(char *)(a6 + 45) != 0) {
            int64_t v465 = 0; // 0x406d57
            if (*(char *)(a6 + 31) != 0) {
                // 0x406d59
                v465 = 1;
                if (*v4 != 0) {
                    // 0x406d65
                    v465 = v11 != (int64_t)v165;
                }
            }
            // 0x406d78
            v6 = str3;
            int64_t v466 = function_40fd60(str3, v305, v192, v465); // 0x406d94
            v416 = v305;
            v419 = v99 % 256;
            if ((int32_t)v466 < 0) {
                goto lab_0x405b7e;
            } else {
                if (a10 != 0) {
                    // 0x406db0
                    *(char *)a10 = 1;
                }
                int64_t v467 = function_409a10(str3, v150, v11); // 0x406dcc
                if (v467 == 0) {
                    // 0x406271
                    return 1;
                }
                char v468 = *(char *)(a6 + 46); // 0x406dda
                v6 = v467;
                if ((char)function_404f50(v467, str3, 1, v468, v397) != 0) {
                    // 0x406271
                    return 1;
                }
                // 0x406e02
                v51 = 1;
                if (*(char *)(a6 + 37) == 0) {
                    // 0x406271
                    return v10 & 0xffffffff;
                }
                goto lab_0x406e0d;
            }
        } else {
            goto lab_0x405b7e;
        }
    }
  lab_0x405d46:
    // 0x405d46
    v243 = v251;
    v244 = v255;
    v245 = v254;
    v246 = v253;
    v247 = v252;
    v248 = v250;
    int64_t v108; // 0x405990
    if ((*(int32_t *)(v279 + 24) & 0xf000) != 0xa000) {
        goto lab_0x405dec;
    } else {
        // 0x405d59
        v243 = v251;
        v244 = v255;
        v245 = v254;
        v246 = v253;
        v247 = v252;
        v248 = v250;
        if ((char)function_40aef0(*(int64_t *)(a6 + 56), str3, v279) == 0) {
            goto lab_0x405dec;
        } else {
            // 0x405d6d
            function_40e920(1, 4, str3);
            v6 = 0;
            function_40e920(0, 4, a1);
            v108 = (int64_t)"will not copy %s through just-created symlink %s";
            goto lab_0x405da8;
        }
    }
  lab_0x406440:;
    int32_t v375 = v347; // 0x406445
    char v376 = v359; // 0x406445
    int64_t v377 = v356; // 0x406445
    int128_t v378 = v353; // 0x406445
    int64_t v379 = v350; // 0x406445
    int64_t v380 = 0; // 0x406445
    int64_t v381 = v344; // 0x406445
    if (*(char *)(a6 + 23) == 0) {
        if (v1 < 2) {
            int32_t v469 = *v5; // 0x4065ea
            v375 = v347;
            v376 = v359;
            v377 = v356;
            v378 = v353;
            v379 = v350;
            v380 = 0;
            v381 = v344;
            if (((char)a7 == 0 || v469 != 3) == (v469 != 4)) {
                goto lab_0x406456;
            } else {
                goto lab_0x40660b;
            }
        } else {
            goto lab_0x40660b;
        }
    } else {
        goto lab_0x406456;
    }
  lab_0x4062f7:;
    int32_t v368 = v338; // 0x4062ff
    char v369 = v342; // 0x4062ff
    int64_t v370 = v341; // 0x4062ff
    int128_t v371 = v340; // 0x4062ff
    int64_t v372 = v339; // 0x4062ff
    int64_t v373 = v343; // 0x4062ff
    int64_t v374 = v337; // 0x4062ff
    v375 = v338;
    v376 = v342;
    v377 = v341;
    v378 = v340;
    v379 = v339;
    v380 = 0;
    v381 = v337;
    if (v343 == 0) {
        goto lab_0x406456;
    } else {
        goto lab_0x406305;
    }
  lab_0x406e59:;
    int64_t v382 = v308;
    int64_t v383 = v309;
    int64_t v384 = v310;
    int64_t v385 = v306; // 0x408312
    int64_t v386 = v311;
    v6 = v307;
    int64_t v387; // 0x405990
    int64_t v209; // 0x405990
    int64_t v388; // 0x405990
    int64_t v211; // 0x405990
    int64_t v389; // 0x405990
    int64_t v210; // 0x405990
    int64_t v208; // 0x405990
    int64_t v390; // 0x405990
    char v391; // 0x4074a0
    if (v307 == 0) {
        // 0x4074a0
        v391 = *v4;
        if (v391 != 0) {
            goto lab_0x407810;
        } else {
            // 0x4074ad
            if (*(char *)(a6 + 21) != 0) {
                goto lab_0x407810;
            } else {
                // 0x4074b8
                v390 = v386;
                v387 = v385;
                v389 = v384;
                v388 = v383;
                v208 = v386;
                v209 = v385;
                v210 = v384;
                v211 = v383;
                if ((*(int32_t *)(v384 + 24) & 0xf000) == 0xa000) {
                    goto lab_0x4074fa;
                } else {
                    goto lab_0x4074c7;
                }
            }
        }
    } else {
        if ((char)v382 != 0) {
            // 0x408105
            v6 = a1;
            int64_t v392 = function_40ef80(a1, str3); // 0x408116
            v219 = str3;
            v220 = 0;
            v221 = v383 % 256;
            v222 = v392 & 0xffffffff ^ 1;
            goto lab_0x407c3b;
        } else {
            int32_t v393 = v93;
            v94 = v386;
            v95 = v393;
            v96 = v97;
            v98 = v93;
            v99 = v383;
            if (*v4 != 0) {
                goto lab_0x405b63;
            } else {
                // 0x406e79
                v94 = v386;
                v95 = v393;
                v96 = v97;
                v98 = v93;
                v99 = v383;
                if (*v5 == 2) {
                    goto lab_0x405b63;
                } else {
                    // 0x406e84
                    v94 = v386;
                    v95 = v393;
                    v96 = v97;
                    v98 = v93;
                    v99 = v383;
                    if ((*(int32_t *)(v384 + 24) & 0xf000) != 0xa000) {
                        goto lab_0x405b63;
                    } else {
                        // 0x406e97
                        v94 = v386;
                        v95 = v393;
                        v96 = v97;
                        v98 = v93;
                        v99 = v383;
                        if ((*(int32_t *)(v385 + 24) & 0xf000) == 0xa000) {
                            goto lab_0x405b63;
                        } else {
                            goto lab_0x406eb0;
                        }
                    }
                }
            }
        }
    }
  lab_0x40662c:
    // 0x40662c
    v375 = v349;
    v376 = v361;
    v377 = v357;
    v378 = v355;
    v379 = v352;
    v380 = 0;
    v381 = v346;
    int64_t v394; // 0x405990
    char v395; // 0x405990
    if (v362 == 0) {
        goto lab_0x406456;
    } else {
        // 0x40663a
        v368 = v349;
        v369 = v361;
        v370 = v357;
        v371 = v355;
        v372 = v352;
        v373 = v362;
        v374 = v346;
        if (v138 == 0x4000) {
            goto lab_0x406305;
        } else {
            char v396 = *(char *)(a6 + 46); // 0x40664a
            v6 = v362;
            v395 = v361;
            v394 = 1;
            if ((char)function_404f50(v362, str3, 1, v396, v397) != 0) {
                // 0x406271
                return 1;
            }
            goto lab_0x4063a8;
        }
    }
  lab_0x4064a7:
    // 0x4064a7
    v6 = a1;
    char * file_path2 = (char *)str3; // 0x4064b1
    int64_t v398; // 0x405990
    if (rename(file_path, file_path2) == 0) {
        // 0x406fb8
        if (*(char *)(a6 + 46) != 0) {
            // 0x407898
            __printf_chk(1, dcgettext(NULL, "renamed ", 5));
            function_404d70(a1, str3, v360);
        }
        // 0x406fc3
        if (*(char *)(a6 + 33) != 0) {
            // 0x407878
            function_405620(str3, 0, 1, a6);
        }
        if (a10 != 0) {
            // 0x406fd5
            *(char *)a10 = 1;
        }
        // 0x406fdc
        v398 = 1;
        if ((char)a7 != 0) {
            // 0x406fe4
            function_40ae60(*(int64_t *)(a6 + 56), str3, v192);
            v398 = v79;
        }
        // 0x406271
        return v398 & 0xffffffff;
    }
    int32_t * err_num3 = __errno_location(); // 0x4064be
    int32_t v399 = *err_num3; // 0x4064c6
    if (v399 == 22) {
        // 0x407c98
        function_40e920(1, 4, g62);
        function_40e920(0, 4, g63);
        error(0, (int32_t)"cannot move %s to a subdirectory of itself, %s" ^ (int32_t)"cannot move %s to a subdirectory of itself, %s", dcgettext(NULL, "cannot move %s to a subdirectory of itself, %s", 5));
        *v7 = 1;
        // 0x406271
        return 1;
    }
    int64_t v400; // 0x405990
    if (v399 != 18) {
        // 0x407208
        function_40e920(1, 4, str3);
        v6 = 0;
        function_40e920(0, 4, a1);
        v400 = (int64_t)"cannot move %s to %s";
        goto lab_0x406f7d;
    } else {
        // 0x4064da
        v6 = str3;
        if (v138 == 0x4000) {
            // 0x406f30
            v363 = v348;
            v367 = v360;
            v72 = 1;
            v365 = v354;
            v364 = v351;
            v366 = v358;
            v185 = 1;
            v190 = v345;
            if (rmdir(file_path2) == 0) {
                goto lab_0x405e56;
            } else {
                // 0x406f3d
                v363 = v348;
                v367 = v360;
                v72 = 1;
                v365 = v354;
                v364 = v351;
                v366 = v358;
                v185 = 1;
                v190 = v345;
                if (*err_num3 == 2) {
                    goto lab_0x405e56;
                } else {
                    goto lab_0x406f48;
                }
            }
        } else {
            // 0x4064f1
            if (unlink(file_path2) == 0) {
                goto lab_0x406505;
            } else {
                // 0x4064fa
                if (*err_num3 != 2) {
                    goto lab_0x406f48;
                } else {
                    goto lab_0x406505;
                }
            }
        }
    }
  lab_0x406456:
    // 0x406456
    v348 = v375;
    v360 = v376;
    v354 = v378;
    v351 = v379;
    v358 = v380;
    v345 = v381;
    if (*v4 != 0) {
        goto lab_0x4064a7;
    } else {
        // 0x40645d
        v363 = v375;
        v367 = v376;
        v72 = v377;
        v365 = v378;
        v364 = v379;
        v366 = v380;
        v185 = 0x100000000000000 * v377 >> 56;
        v190 = v381;
        goto lab_0x405e56;
    }
  lab_0x405e56:;
    int64_t v55 = v366;
    char v53 = v367;
    char * v401 = (char *)(a6 + 43); // 0x405e64
    int32_t v73; // 0x405990
    if (*v401 != 0) {
        // 0x405e6b
        v73 = *(int32_t *)(a6 + 16);
    }
    uint32_t v402 = v73 % 0x1000;
    uint64_t v403 = (int64_t)v402;
    char * v404 = (char *)(a6 + 29); // 0x405e76
    int64_t * v405; // 0x405990
    int64_t * v171; // 0x405990
    int32_t v74; // 0x405e91
    if (*v404 != 0) {
        int32_t v406 = 0x1000000 * (int32_t)v185 >> 24; // 0x406710
        v6 = a1;
        if ((char)function_405550(a1, str3, owner, (char)v406, a6) == 0) {
            // 0x406271
            return v10 & 0xffffffff;
        }
        int64_t * v407 = (int64_t *)(v403 % 64); // 0x406746
        v405 = v407;
        v74 = v406;
        v171 = v407;
        if (v138 != 0x4000) {
            goto lab_0x405ec1;
        } else {
            goto lab_0x406752;
        }
    } else {
        if (v138 == 0x4000) {
            // 0x406c70
            v6 = a1;
            if ((char)function_405550(a1, str3, owner, (char)v185, a6) == 0) {
                // 0x406271
                return v10 & 0xffffffff;
            }
            // 0x406c96
            v171 = (int64_t *)(v403 & 18);
            goto lab_0x406752;
        } else {
            // 0x405e91
            v74 = 0x1000000 * (int32_t)v185 >> 24;
            v6 = a1;
            v405 = NULL;
            if ((char)function_405550(a1, str3, owner, (char)v74, a6) == 0) {
                // 0x406271
                return v10 & 0xffffffff;
            }
            goto lab_0x405ec1;
        }
    }
  lab_0x406305:
    // 0x406305
    if ((char)function_40ef80(a1, v373) != 0) {
        // 0x4076c0
        function_40e920(1, 4, g62);
        function_40e920(0, 4, g63);
        char * format8 = dcgettext(NULL, "cannot copy a directory, %s, into itself, %s", 5); // 0x4076fb
        v6 = 0;
        error(0, (int32_t)"cannot copy a directory, %s, into itself, %s" ^ (int32_t)"cannot copy a directory, %s, into itself, %s", format8);
        *v7 = 1;
        v395 = v369;
        v394 = (int64_t)format8;
        goto lab_0x4063a8;
    } else {
        // 0x40631c
        if ((char)function_40ef80(str3, v373) != 0) {
            // 0x407f10
            function_40ea00(4, g63);
            error(0, (int32_t)"warning: source directory %s specified more than once" ^ (int32_t)"warning: source directory %s specified more than once", dcgettext(NULL, "warning: source directory %s specified more than once", 5));
            if (a10 != 0 != *v4 != 0) {
                // 0x406271
                return 1;
            }
            // 0x4071ab
            *(char *)a10 = 1;
            // 0x406271
            return 1;
        }
        int32_t v408 = *v5; // 0x406337
        v375 = v368;
        v376 = v369;
        v377 = v370;
        v378 = v371;
        v379 = v372;
        v380 = v373;
        v381 = v374;
        if (v408 == 4) {
            goto lab_0x406456;
        } else {
            if (v408 != 3) {
                goto lab_0x406351;
            } else {
                // 0x406349
                v375 = v368;
                v376 = v369;
                v377 = v370;
                v378 = v371;
                v379 = v372;
                v380 = v373;
                v381 = v374;
                if ((char)a7 != 0) {
                    goto lab_0x406456;
                } else {
                    goto lab_0x406351;
                }
            }
        }
    }
  lab_0x405b9f:
    // 0x405b9f
    if ((char)v127 != 0) {
        // 0x406271
        return 1;
    }
    int64_t v105 = v409 & 0xffffffff ^ 1; // 0x405bb5
    int64_t v410; // 0x405990
    int64_t v106; // 0x405990
    int64_t v236; // 0x405990
    int64_t v235; // 0x405990
    int64_t v104; // 0x405990
    int64_t v234; // 0x405990
    int64_t v102; // 0x405990
    int64_t v233; // 0x405990
    int64_t v232; // 0x405990
    int64_t v107; // 0x407df5
    if ((owner & 0xf000) == 0x4000) {
        // 0x407900
        v233 = v103;
        v235 = v105;
        if (v138 == 0x4000) {
            goto lab_0x405c40;
        } else {
            // 0x407910
            if (*v4 == 0) {
                goto lab_0x408225;
            } else {
                uint32_t v411 = *(int32_t *)&v89; // 0x40791b
                v102 = v103;
                v104 = v105;
                v106 = v411;
                if (v411 == 0) {
                    goto lab_0x408225;
                } else {
                    goto lab_0x407940;
                }
            }
        }
    } else {
        if (v138 == 0x4000) {
            // 0x407dea
            if (*v4 == 0) {
                goto lab_0x408141;
            } else {
                uint32_t v412 = *(int32_t *)&v89; // 0x407df5
                if (v412 == 0) {
                    goto lab_0x408141;
                } else {
                    // 0x407e02
                    v107 = v412;
                    v410 = v107;
                    if ((char)a7 != 0) {
                        goto lab_0x405be4;
                    } else {
                        goto lab_0x408078;
                    }
                }
            }
        } else {
            int64_t v413 = (int64_t)*(int32_t *)&v89; // 0x405bdc
            v410 = v413;
            v232 = v103;
            v234 = v105;
            v236 = v413;
            if ((char)a7 == 0) {
                goto lab_0x405c44;
            } else {
                goto lab_0x405be4;
            }
        }
    }
  lab_0x405b7e:;
    int32_t v414 = *(int32_t *)(a6 + 8); // 0x405b83
    v415 = v416;
    v417 = v414;
    v418 = v419;
    if (*v4 != 0) {
        goto lab_0x40711f;
    } else {
        // 0x405b8d
        v103 = v416;
        v409 = v419;
        switch (v414) {
            case 2: {
                int64_t v420 = v398;
                return v420 & 0xffffffff;
            }
            case 3: {
                // 0x407fb9
                v6 = a6;
                int64_t v421 = function_404e20(a6, str3, v305 + 24); // 0x407fd5
                v103 = str3;
                v409 = v419 % 256;
                if ((char)v421 == 0) {
                    // 0x406271
                    return 1;
                }
                // break -> 0x405b9f
                break;
            }
        }
        goto lab_0x405b9f;
    }
  lab_0x40660b:
    // 0x40660b
    v349 = v347;
    v361 = v359;
    v357 = v356;
    v355 = v353;
    v352 = v350;
    v346 = v344;
    v362 = function_409a10(str3, (int64_t)owner, v11);
    goto lab_0x40662c;
  lab_0x406eb0:
    // 0x406eb0
    function_40e920(1, 4, str3);
    v6 = 0;
    function_40e920(0, 4, a1);
    v108 = (int64_t)"%s and %s are the same file";
    goto lab_0x405da8;
  lab_0x407810:;
    int32_t v454 = v93;
    v94 = v386;
    v95 = v454;
    v96 = v97;
    v98 = v93;
    v99 = v383;
    int64_t v229; // 0x405990
    int64_t v231; // 0x405990
    int64_t v230; // 0x405990
    int64_t v228; // 0x405990
    if ((*(int32_t *)(v385 + 24) & 0xf000) == 0xa000) {
        goto lab_0x405b63;
    } else {
        if ((char)v382 == 0) {
            goto lab_0x407834;
        } else {
            // 0x407829
            if (*(int64_t *)(v385 + 16) < 2) {
                goto lab_0x407834;
            } else {
                // 0x408301
                v6 = a1;
                int64_t v455 = function_40ef80(a1, str3); // 0x408320
                int64_t v456 = 0x100000000 * v385 >> 32; // 0x40832c
                v89 = v456;
                int64_t v457 = v383 % 256; // 0x408335
                if ((char)v455 == 0) {
                    // 0x408ae2
                    v219 = str3;
                    v220 = v455;
                    v221 = v457;
                    v222 = (int64_t)(*v4 ^ 1);
                    goto lab_0x407c3b;
                } else {
                    int64_t v458 = 0x100000000000000 * v384 >> 56; // 0x408325
                    v390 = str3;
                    v387 = v456;
                    v389 = v458;
                    v388 = v457;
                    v228 = str3;
                    v229 = v456;
                    v230 = v458;
                    v231 = v457;
                    if ((*(int32_t *)(v458 + 24) & 0xf000) != 0xa000) {
                        goto lab_0x4074c7;
                    } else {
                        goto lab_0x4074db;
                    }
                }
            }
        }
    }
  lab_0x40711f:;
    int64_t v459 = v418; // 0x405990
    switch (v417) {
        case 2: {
            goto lab_0x4071a0;
        }
        case 3: {
            goto lab_0x407166;
        }
        default: {
            // 0x407129
            v103 = v415;
            v409 = v418;
            if (v417 != 4) {
                goto lab_0x405b9f;
            } else {
                // 0x407132
                v103 = v415;
                v409 = v418;
                if (*(char *)(a6 + 47) == 0) {
                    goto lab_0x405b9f;
                } else {
                    // 0x40713d
                    v6 = str3;
                    int64_t v460 = function_404bd0(str3, owner); // 0x407151
                    int64_t v461 = v418 % 256; // 0x407156
                    v103 = owner;
                    v409 = v461;
                    v459 = v461;
                    if ((char)v460 != 0) {
                        goto lab_0x405b9f;
                    } else {
                        goto lab_0x407166;
                    }
                }
            }
        }
    }
  lab_0x405da8:
    // 0x405da8
    v6 = 0;
    // 0x405db8
    error(0, 0, dcgettext(NULL, (char *)v108, 5));
    // 0x406271
    return 0;
  lab_0x406f7d:
    // 0x406f7d
    error(0, *err_num3, dcgettext(NULL, (char *)v400, 5));
    function_409980((int64_t)owner, v11);
    // 0x406271
    return v10 & 0xffffffff;
  lab_0x405ec1:;
    int64_t * v41 = v405;
    char v422 = *(char *)(a6 + 44); // 0x405ec1
    int64_t v50; // 0x405990
    int64_t v69; // 0x405990
    int64_t v48; // 0x405990
    int64_t v49; // 0x405990
    int64_t v36; // 0x405990
    int64_t v47; // 0x405990
    int64_t v46; // 0x405990
    int64_t v59; // 0x405990
    int64_t v423; // 0x405990
    int64_t v45; // 0x405990
    int64_t v35; // 0x405990
    int64_t v42; // 0x405990
    int64_t v43; // 0x405990
    int64_t v44; // 0x405990
    int64_t * v40; // 0x405990
    int64_t v38; // 0x405990
    char v39; // 0x406800
    int64_t v424; // 0x405ee1
    bool v425; // 0x405990
    int64_t str7; // 0x407d75
    int32_t v426; // 0x4084b9
    if (v422 == 0) {
        // 0x406800
        v39 = *(char *)(a6 + 23);
        if (v39 != 0) {
            int64_t v427 = (int64_t)*(char *)(a6 + 22); // 0x406ef7
            v6 = a1;
            int64_t v428 = function_404f50(a1, str3, v427, 0, v397); // 0x406f08
            v38 = 0;
            v40 = v41;
            v42 = v72;
            v43 = 0x100000000000000 * v428 >> 56;
            v44 = 0;
            v45 = v427;
            v46 = v79;
            v47 = 0;
            v48 = a1;
            v49 = v10;
            v35 = v427;
            v36 = v10;
            if ((char)v428 != 0) {
                goto lab_0x405f45;
            } else {
                goto lab_0x406910;
            }
        } else {
            // 0x406813
            v59 = owner;
            if (v138 == 0x8000) {
                goto lab_0x407248;
            } else {
                unsigned char v429 = *(char *)(a6 + 20) & (char)(v138 != 0xa000); // 0x40682d
                if (v429 != 0) {
                    goto lab_0x407248;
                } else {
                    int64_t v430 = v429; // 0x40682d
                    if (v138 == 0x1000) {
                        // 0x408005
                        v6 = 0;
                        v86 = 0;
                        uint32_t v431 = owner & -1 - (int32_t)(int64_t)v41; // 0x408028
                        int64_t v432 = v431; // 0x40802e
                        char * pathname = (char *)str3; // 0x408033
                        int32_t v433 = __xmknod(0, pathname, v431, (int32_t *)&v86); // 0x408033
                        v38 = v430;
                        v40 = v41;
                        v42 = v72;
                        v43 = 1;
                        v44 = v430;
                        v45 = v432;
                        v46 = v79;
                        v47 = v430;
                        v48 = a1;
                        v49 = v10;
                        if (v433 != 0) {
                            // 0x40846c
                            v6 = str3;
                            v38 = v430;
                            v40 = v41;
                            v42 = v72;
                            v43 = 1;
                            v44 = v430;
                            v45 = v432;
                            v46 = v79;
                            v47 = v430;
                            v48 = a1;
                            v49 = v10;
                            if (mkfifo(pathname, v431 & -0x1001) == 0) {
                                goto lab_0x405f45;
                            } else {
                                // 0x408491
                                v6 = 4;
                                function_40ea00(4, str3);
                                v69 = (int64_t)"cannot create fifo %s";
                                goto lab_0x4068f0;
                            }
                        } else {
                            goto lab_0x405f45;
                        }
                    } else {
                        if ((owner & 0xb000) != 0x2000 && v138 != 0xc000) {
                            if (v138 != 0xa000) {
                                // 0x4080b8
                                v6 = 4;
                                function_40ea00(4, a1);
                                v50 = (int64_t)"%s has unknown file type";
                                goto lab_0x4067b2;
                            } else {
                                // 0x407d6b
                                str7 = function_40a1c0(a1, v1);
                                if (str7 == 0) {
                                    // 0x408b00
                                    v6 = 4;
                                    function_40ea00(4, a1);
                                    v69 = (int64_t)"cannot read symbolic link %s";
                                    goto lab_0x4068f0;
                                } else {
                                    int64_t v434 = function_409fd0(str7, 0xffffff9c, str3, *(char *)(a6 + 22)); // 0x407d9a
                                    v423 = str3;
                                    if ((int32_t)v434 < 0) {
                                        // 0x4084b4
                                        v426 = *__errno_location();
                                        v423 = str3;
                                        if (v426 == 0) {
                                            goto lab_0x407da7;
                                        } else {
                                            // 0x4084c9
                                            if ((char)v72 == 0 == *(char *)(a6 + 45) == 1) {
                                                if ((owner & 0xf000) != 0xa000) {
                                                    goto lab_0x4084dd;
                                                } else {
                                                    // 0x4093eb
                                                    v6 = str7;
                                                    int64_t v435 = str7; // 0x409400
                                                    int64_t v436 = -1; // 0x409400
                                                    int64_t v437 = 0; // 0x409400
                                                    while (v436 != 0) {
                                                        int64_t v438 = v435;
                                                        v435 = v438 + (v425 ? -1 : 1);
                                                        v6 = v435;
                                                        v436--;
                                                        v437 = v436;
                                                        if (*(char *)v438 == 0) {
                                                            // break -> 
                                                            break;
                                                        }
                                                        v437 = 0;
                                                    }
                                                    if (v1 != -2 - v437) {
                                                        goto lab_0x4084dd;
                                                    } else {
                                                        int64_t str6 = function_40a1c0(str3, v1); // 0x409419
                                                        if (str6 == 0) {
                                                            goto lab_0x4084dd;
                                                        } else {
                                                            int32_t strcmp_rc = strcmp((char *)str6, (char *)str7); // 0x409434
                                                            int64_t v439 = 0x100000000 * str6 >> 32; // 0x409439
                                                            v6 = v439;
                                                            free((int64_t *)v439);
                                                            v423 = v439;
                                                            if (strcmp_rc != 0) {
                                                                goto lab_0x4084dd;
                                                            } else {
                                                                goto lab_0x407da7;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                goto lab_0x4084dd;
                                            }
                                        }
                                    } else {
                                        goto lab_0x407da7;
                                    }
                                }
                            }
                        } else {
                            // 0x406881
                            v6 = 0;
                            int64_t v440 = ((int64_t)v41 ^ 0xffffffff) & v59; // 0x4068a0
                            int32_t v441 = __xmknod(0, (char *)str3, (int32_t)v440, (int32_t *)&v86); // 0x4068a9
                            v38 = v430;
                            v40 = v41;
                            v42 = v72;
                            v43 = 1;
                            v44 = v430;
                            v45 = v440;
                            v46 = v79;
                            v47 = v430;
                            v48 = a1;
                            v49 = v10;
                            if (v441 == 0) {
                                goto lab_0x405f45;
                            } else {
                                // 0x4068cc
                                v6 = 4;
                                function_40ea00(4, str3);
                                v69 = (int64_t)"cannot create special file %s";
                                goto lab_0x4068f0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x405ed4
        if (*(char *)&v6 == 47) {
            goto lab_0x405f0d;
        } else {
            // 0x405eda
            v424 = function_40ac60();
            v6 = v424;
            int64_t v442 = v425 ? -1 : 1; // 0x405ef6
            int64_t v443 = v424; // 0x405ef6
            int64_t v444 = (int64_t)"."; // 0x405990
            int64_t v445 = 2; // 0x405ef6
            unsigned char v446 = *(char *)v444; // 0x405ef6
            char v447 = *(char *)v443; // 0x405ef6
            v443 += v442;
            v6 = v443;
            char v448 = v447; // 0x405ef6
            bool v449 = false; // 0x405ef6
            while (v446 == v447) {
                v445--;
                v444 += v442;
                v448 = v446;
                v449 = true;
                if (v445 == 0) {
                    // break -> 
                    break;
                }
                v446 = *(char *)v444;
                v447 = *(char *)v443;
                v443 += v442;
                v6 = v443;
                v448 = v447;
                v449 = false;
            }
            unsigned char v450 = v448;
            if ((v446 >= v450 && !v449) != v446 < v450) {
                // 0x407790
                if (__xstat(1, ".", (struct stat *)&v70) != 0) {
                    // 0x405f05
                    free((int64_t *)v424);
                    goto lab_0x405f0d;
                } else {
                    // 0x4077ae
                    if (__xstat(1, (char *)v424, (struct stat *)&v86) != 0) {
                        // 0x405f05
                        free((int64_t *)v424);
                        goto lab_0x405f0d;
                    } else {
                        // 0x408a0a
                        if (v86 != (int64_t)v70) {
                            goto lab_0x4077de;
                        } else {
                            // 0x405f05
                            free((int64_t *)v424);
                            goto lab_0x405f0d;
                        }
                    }
                }
            } else {
                // 0x405f05
                free((int64_t *)v424);
                goto lab_0x405f0d;
            }
        }
    }
  lab_0x406752:;
    int64_t v451 = owner; // 0x40675a
    if (a5 != 0) {
        if (*(int64_t *)(a5 + 8) == v451) {
            // 0x406792
            if (*(int64_t *)(a5 + 16) == v11) {
                // 0x406798
                v6 = 4;
                function_40ea00(4, a1);
                v50 = (int64_t)"cannot copy cyclic symbolic link %s";
                goto lab_0x4067b2;
            }
        }
        int64_t v452 = *(int64_t *)a5; // 0x406780
        while (v452 != 0) {
            int64_t v453 = v452;
            if (*(int64_t *)(v453 + 8) == v451) {
                // 0x406792
                if (*(int64_t *)(v453 + 16) == v11) {
                    // 0x406798
                    v6 = 4;
                    function_40ea00(4, a1);
                    v50 = (int64_t)"cannot copy cyclic symbolic link %s";
                    goto lab_0x4067b2;
                }
            }
            // 0x406780
            v452 = *(int64_t *)v453;
        }
    }
    int64_t v184 = v190 - 17 & -16; // 0x406958
    *(int64_t *)v184 = a5;
    *(int64_t *)(v184 | 8) = v451;
    *(int64_t *)(v184 + 16) = v11;
    int64_t * v170; // 0x405990
    int64_t v169; // 0x405990
    int64_t v168; // 0x405990
    if ((owner & 0xf000) == 0x4000 == (char)v72 == 0) {
        // 0x407b70
        v168 = 0;
        v170 = NULL;
        if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) != 0) {
            // 0x4080d7
            v6 = str3;
            v168 = 0;
            v170 = NULL;
            if ((char)function_405620(str3, *(char *)(a6 + 37), 0, a6) != 0) {
                goto lab_0x406a8f;
            } else {
                // 0x4080f5
                v35 = 0;
                v36 = v10;
                v168 = 0;
                v170 = NULL;
                if (*(char *)(a6 + 38) == 0) {
                    goto lab_0x406a8f;
                } else {
                    goto lab_0x406910;
                }
            }
        } else {
            goto lab_0x406a8f;
        }
    } else {
        char * path = (char *)str3; // 0x40699f
        if (mkdir(path, v402 & -1 - (int32_t)(int64_t)v171) != 0) {
            // 0x4078d8
            v6 = 4;
            function_40ea00(4, str3);
            v69 = (int64_t)"cannot create directory %s";
            goto lab_0x4068f0;
        } else {
            // 0x4069ac
            v6 = 1;
            if (__lxstat(1, path, (struct stat *)&v165) != 0) {
                // 0x407f63
                v6 = 4;
                function_40ea00(4, str3);
                v69 = (int64_t)"cannot stat %s";
                goto lab_0x4068f0;
            } else {
                // 0x4069cc
                v169 = 0;
                if ((owner & 448) == 448) {
                    goto lab_0x406a14;
                } else {
                    // 0x4069e9
                    v6 = str3;
                    v169 = 1;
                    if (chmod(path, owner || 448) != 0) {
                        // 0x4083b0
                        v6 = 4;
                        function_40ea00(4, str3);
                        v69 = (int64_t)"setting permissions for %s";
                        goto lab_0x4068f0;
                    } else {
                        goto lab_0x406a14;
                    }
                }
            }
        }
    }
  lab_0x4063a8:;
    char v52 = v395; // 0x4063ad
    int64_t v54 = v10; // 0x4063ad
    v51 = v394;
    if (*(char *)(a6 + 37) != 0) {
        goto lab_0x406e0d;
    } else {
        goto lab_0x4063b3;
    }
  lab_0x407c3b:
    // 0x407c3b
    if ((char)v222 == 0) {
        goto lab_0x406eb0;
    } else {
        // 0x407c44
        v94 = v219;
        v95 = v93;
        v96 = 0x100000000000000 * v220 >> 56;
        v98 = v93;
        v99 = v221;
        goto lab_0x405b63;
    }
  lab_0x405c40:
    // 0x405c40
    v232 = v233;
    v234 = v235;
    v236 = (int64_t)*(int32_t *)&v89;
    goto lab_0x405c44;
  lab_0x4071a0:
    // 0x4071a0
    if (a10 == 0) {
        // 0x406271
        return 1;
    }
    // 0x4071ab
    *(char *)a10 = 1;
    // 0x406271
    return 1;
  lab_0x407166:
    // 0x407166
    v6 = a6;
    int64_t v478 = function_404e20(a6, str3, v305 + 24); // 0x407182
    v103 = str3;
    v409 = v459 % 256;
    if ((char)v478 != 0) {
        goto lab_0x405b9f;
    } else {
        goto lab_0x4071a0;
    }
  lab_0x406e0d:
    // 0x406e0d
    function_404d30(v6);
    v473 = v51;
    goto lab_0x406e18;
  lab_0x406505:;
    unsigned char v479 = *(char *)(a6 + 46) % 2; // 0x406512
    v363 = v348;
    v367 = v360;
    v72 = 1;
    v365 = v354;
    v364 = v351;
    v366 = v358;
    v185 = 1;
    v190 = v345;
    if (v479 != 0) {
        // 0x407c50
        __printf_chk(1, dcgettext(NULL, "copied ", 5));
        function_404d70(a1, str3, v360);
        v363 = v348;
        v367 = v360;
        v72 = v479;
        v365 = v354;
        v364 = v351;
        v366 = v358;
        v185 = 1;
        v190 = v345;
    }
    goto lab_0x405e56;
  lab_0x4063b3:;
    int64_t file_path3 = v52; // 0x4063b3
    v6 = file_path3;
    if (v52 == 0) {
        // 0x406271
        return v54 & 0xffffffff;
    }
    // 0x4063c3
    if (rename((char *)file_path3, (char *)str3) != 0) {
        // 0x4071c0
        function_40ea00(4, str3);
        error(0, *__errno_location(), dcgettext(NULL, "cannot un-backup %s", 5));
        // 0x406271
        return v54 & 0xffffffff;
    }
    // 0x4063d7
    if (*(char *)(a6 + 46) != 0) {
        // 0x4063e2
        function_40e920(1, 4, str3);
        function_40e920(0, 4, file_path3);
        __printf_chk(1, dcgettext(NULL, "%s -> %s (unbackup)\n", 5));
    }
    // 0x406271
    return v54 & 0xffffffff;
  lab_0x406351:
    // 0x406351
    function_40e920(1, 4, v373);
    function_40e920(0, 4, str3);
    char * format10 = dcgettext(NULL, "will not create hard link %s to directory %s", 5); // 0x40638c
    v6 = 0;
    error(0, (int32_t)"will not create hard link %s to directory %s" ^ (int32_t)"will not create hard link %s to directory %s", format10);
    v395 = v369;
    v394 = (int64_t)format10;
    goto lab_0x4063a8;
  lab_0x407834:;
    int64_t v207 = v386; // 0x407841
    int64_t v205 = v385; // 0x407841
    char v212 = v391; // 0x407841
    int64_t v203 = v384; // 0x407841
    int64_t v201 = v383; // 0x407841
    int64_t v223 = v386; // 0x407841
    int32_t v224 = v454; // 0x407841
    int64_t v227 = v385; // 0x407841
    int64_t v226 = v384; // 0x407841
    int64_t v225 = v383; // 0x407841
    if ((*(int32_t *)(v384 + 24) & 0xf000) == 0xa000) {
        goto lab_0x4074e0;
    } else {
        goto lab_0x407847;
    }
  lab_0x4074fa:;
    int64_t v91 = v211;
    int64_t v84 = v210;
    int64_t v88 = v209; // 0x408133
    int64_t v101 = v208;
    if (*(char *)(a6 + 44) != 0) {
        goto lab_0x408130;
    } else {
        // 0x407505
        if ((*(int32_t *)(a6 + 20) & -0xff0100) == 0) {
            goto lab_0x407523;
        } else {
            // 0x40750f
            if ((*(int32_t *)(v88 + 24) & 0xf000) == 0xa000) {
                goto lab_0x408130;
            } else {
                goto lab_0x407523;
            }
        }
    }
  lab_0x4074c7:;
    int64_t v480 = v388;
    int64_t v481 = v389;
    int64_t v482 = v387; // 0x4074c7
    int64_t v483 = v390;
    v228 = v483;
    v229 = v482;
    v230 = v481;
    v231 = v480;
    if ((*(int32_t *)(v482 + 24) & 0xf000) != 0xa000) {
        // 0x4074c7
        v223 = v483;
        v224 = v93;
        v227 = v482;
        v226 = v481;
        v225 = v480;
        goto lab_0x407847;
    } else {
        goto lab_0x4074db;
    }
  lab_0x405c44:;
    unsigned char v237 = *v4; // 0x405c44
    int64_t v117; // 0x405990
    int64_t v136; // 0x405990
    int64_t v112; // 0x405990
    int64_t v133; // 0x405990
    int64_t v110; // 0x405990
    if (v237 != 0) {
        // 0x407eef
        uint32_t v238; // 0x405990
        if ((v238 & 0xf000) == 0x4000 || v138 != 0x4000) {
            // 0x407f05
            v123 = v124;
            v125 = 0;
            v126 = v127;
            v128 = v129;
            v130 = v131;
            int64_t v239; // 0x405990
            v132 = v239;
            v134 = v135;
            int64_t v240; // 0x405990
            v102 = v240;
            v104 = v239;
            int64_t v241; // 0x405990
            v106 = v241;
            if (v241 == 0) {
                goto lab_0x405de4;
            } else {
                goto lab_0x407940;
            }
        } else {
            goto lab_0x408078;
        }
    } else {
        // 0x405c51
        v136 = v237;
        v133 = v234;
        v110 = v232;
        v112 = v234;
        v117 = v236;
        if (v236 != 0) {
            goto lab_0x407ea8;
        } else {
            goto lab_0x405c5a;
        }
    }
  lab_0x408225:
    // 0x408225
    v6 = 4;
    function_40ea00(4, str3);
    v242 = (int64_t)"cannot overwrite directory %s with non-directory";
    goto lab_0x406cd2;
  lab_0x408141:
    // 0x408141
    function_40e920(1, 4, a1);
    v6 = 0;
    function_40e920(0, 4, str3);
    v108 = (int64_t)"cannot overwrite non-directory %s with directory %s";
    goto lab_0x405da8;
  lab_0x405be4:
    // 0x405be4
    if (v410 == 3) {
        // 0x407e9d
        v102 = v103;
        v104 = v105;
        v106 = 3;
        v110 = v103;
        v112 = v105;
        v117 = 3;
        if (*v4 != 0) {
            goto lab_0x407940;
        } else {
            goto lab_0x407ea8;
        }
    } else {
        int64_t v474 = *(int64_t *)(a6 + 56); // 0x405bee
        v6 = v474;
        int64_t v475 = function_40aef0(v474, str3, v305); // 0x405c06
        v233 = str3;
        v235 = v105 % 256;
        if ((char)v475 != 0) {
            // 0x408533
            function_40e920(1, 4, a1);
            v6 = 0;
            function_40e920(0, 4, str3);
            v108 = (int64_t)"will not overwrite just-created %s with %s";
            goto lab_0x405da8;
        } else {
            goto lab_0x405c40;
        }
    }
  lab_0x406f48:
    // 0x406f48
    function_40e920(1, 4, str3);
    v6 = 0;
    function_40e920(0, 4, a1);
    v400 = (int64_t)"inter-device move failed: %s to %s; unable to remove target";
    goto lab_0x406f7d;
  lab_0x405f0d:;
    int64_t v476 = v422; // 0x405ec6
    v6 = a1;
    int64_t v477 = function_409fd0(a1, 0xffffff9c, str3, *(char *)(a6 + 22)); // 0x405f21
    v38 = 0;
    v40 = v41;
    v42 = v72;
    v43 = v476;
    v44 = v476;
    v45 = str3;
    v46 = v79;
    v47 = 0;
    v48 = a1;
    v49 = v10;
    if ((int32_t)v477 < 0) {
        // 0x407cfe
        function_40e920(1, 4, a1);
        function_40e920(0, 4, str3);
        char * format9 = dcgettext(NULL, "cannot create symbolic link %s to %s", 5); // 0x407d35
        int32_t err_num4 = *__errno_location(); // 0x407d4b
        v6 = 0;
        error(0, err_num4, format9);
        v35 = (int64_t)format9;
        v36 = v10;
        goto lab_0x406910;
    } else {
        goto lab_0x405f45;
    }
  lab_0x406a8f:;
    int128_t v172 = __asm_movdqu(*(int128_t *)&v89); // 0x406a8f
    int128_t v173 = __asm_movdqu(*(int128_t *)(a6 + 16)); // 0x406a95
    int128_t v174 = __asm_movdqu(*(int128_t *)(a6 + 32)); // 0x406aa3
    int128_t v175 = __asm_movdqu(*(int128_t *)(a6 + 48)); // 0x406aa9
    v86 = __asm_movaps(v172);
    __asm_movaps(v173);
    __asm_movaps(v174);
    __asm_movaps(v175);
    int64_t v176 = function_40f480(a1, 2); // 0x406ad3
    int32_t length2; // bp-680, 0x405990
    int32_t v177; // 0x405990
    int32_t v167; // 0x405990
    if (v176 == 0) {
        // 0x408362
        function_40ea00(4, a1);
        char * format6 = dcgettext(NULL, "cannot access %s", 5); // 0x408382
        int32_t * err_num2 = __errno_location(); // 0x40838a
        v6 = 0;
        error(0, *err_num2, format6);
        v177 = v167;
        v38 = v168;
        v40 = v170;
        v42 = v72;
        v43 = 0;
        v44 = 0;
        v45 = (int64_t)format6;
        v46 = v79;
        v47 = 0;
        v48 = a1;
        v49 = v10;
    } else {
        // 0x406ae8
        int64_t v178; // 0x405990
        uint32_t v179; // 0x405990
        char * v180; // 0x405990
        int64_t v181; // 0x406bfa
        if (*(char *)v176 == 0) {
            // branch -> 0x406c4b
        } else {
            int64_t v182 = &v86;
            int64_t v183 = 0x100000000 * v184 >> 32;
            v179 = 0x1000000 * (int32_t)v185 >> 24;
            v180 = (char *)a8;
            int64_t v186 = 0; // 0x406b65
            int64_t str5 = v176; // 0x406b7f
            int64_t v187 = function_40b0c0(); // 0x406b9b
            int64_t v188 = function_40b0c0(); // 0x406baf
            char v189 = *v180; // 0x406bdc
            *(int64_t *)(v190 - 40) = 0;
            *(int64_t *)(v190 - 48) = (int64_t)&length2;
            *(int64_t *)(v190 - 56) = (int64_t)&v70;
            *(int64_t *)(v190 - 64) = 0;
            v70 = v189;
            int64_t v191 = function_405990(v187, v188, (char)v179, v192, v183, v182, (int64_t)v189, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90); // 0x406bf5
            v181 = 0x100000000000000 * (v191 & 1) >> 56;
            *v7 = *v7 | (char)length2;
            free((int64_t *)v188);
            free((int64_t *)v187);
            while ((char)length2 == 0) {
                // 0x406b70
                v186 = v70 | (char)v186;
                str5 = str5 + 1 + (int64_t)strlen((char *)str5);
                v178 = v186;
                if (*(char *)str5 == 0) {
                    // break -> 0x406c2c
                    break;
                }
                v187 = function_40b0c0();
                v188 = function_40b0c0();
                v189 = *v180;
                *(int64_t *)(v190 - 40) = 0;
                *(int64_t *)(v190 - 48) = (int64_t)&length2;
                *(int64_t *)(v190 - 56) = (int64_t)&v70;
                *(int64_t *)(v190 - 64) = 0;
                v70 = v189;
                v191 = function_405990(v187, v188, (char)v179, v192, v183, v182, (int64_t)v189, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90);
                v181 = 0x100000000000000 * (v191 & v181) >> 56;
                *v7 = *v7 | (char)length2;
                free((int64_t *)v188);
                free((int64_t *)v187);
            }
        }
        // 0x406c4b
        v6 = v176;
        free((int64_t *)v176);
        *v180 = (char)(v178 & 0xffffffff);
        v177 = v167;
        v38 = v168;
        v40 = v170;
        v42 = v72;
        v43 = v181;
        v44 = 0;
        v45 = v179;
        v46 = v79;
        v47 = 0;
        v48 = a1;
        v49 = v10 % 256;
    }
    goto lab_0x405f45;
  lab_0x4074e0:;
    int64_t v200 = v201;
    int64_t v202 = v203;
    int64_t v204 = v205; // 0x4083f9
    int64_t v206 = v207;
    v208 = v206;
    v209 = v204;
    v210 = v202;
    v211 = v200;
    if (v138 == 0xa000 == (v212 != 0)) {
        // 0x4083e4
        v208 = v206;
        v209 = v204;
        v210 = v202;
        v211 = v200;
        if (*(int64_t *)(v204 + 16) < 2) {
            goto lab_0x4074fa;
        } else {
            // 0x4083ef
            v6 = a1;
            char * v213 = canonicalize_file_name(file_path); // 0x408407
            int64_t v214 = 0x100000000 * v204 >> 32; // 0x408413
            v89 = v214;
            int64_t v215 = v200 % 256; // 0x40841d
            v208 = v206;
            v209 = v214;
            v210 = 0x100000000000000 * v202 >> 56;
            v211 = v215;
            if (v213 == NULL) {
                goto lab_0x4074fa;
            } else {
                int64_t v216 = (int64_t)v213; // 0x408407
                int64_t v217 = function_40ef80(v216, str3); // 0x408443
                int64_t v218 = 0x100000000000000 * v216 >> 56; // 0x408448
                v6 = v218;
                free((int64_t *)v218);
                v219 = str3;
                v220 = (int32_t)&g90 ^ (int32_t)&g90;
                v221 = v215;
                v222 = v217 & 0xffffffff ^ 1;
                goto lab_0x407c3b;
            }
        }
    } else {
        goto lab_0x4074fa;
    }
  lab_0x407847:
    // 0x407847
    v94 = v223;
    v95 = v224;
    v96 = v97;
    v98 = v93;
    v99 = v225;
    if (*(int64_t *)(v226 + 8) != *(int64_t *)(v227 + 8)) {
        goto lab_0x405b63;
    } else {
        // 0x407855
        v94 = v223;
        v95 = v224;
        v96 = v97;
        v98 = v93;
        v99 = v225;
        if (*(int64_t *)v226 != *(int64_t *)v227) {
            goto lab_0x405b63;
        } else {
            // 0x407861
            v94 = v223;
            v95 = v224;
            v96 = 1;
            v98 = v93;
            v99 = v225;
            v228 = v223;
            v229 = v227;
            v230 = v226;
            v231 = v225;
            if (*(char *)(a6 + 23) == 0) {
                goto lab_0x4074db;
            } else {
                goto lab_0x405b63;
            }
        }
    }
  lab_0x408130:
    // 0x408130
    v219 = v101;
    v220 = 0;
    v221 = v91;
    v222 = *(int64_t *)v88 == *(int64_t *)v84;
    goto lab_0x407c3b;
  lab_0x4074db:
    // 0x4074db
    v207 = v228;
    v205 = v229;
    v212 = *v4;
    v203 = v230;
    v201 = v231;
    goto lab_0x4074e0;
  lab_0x407940:;
    int64_t v484 = function_40ad40(a1, v102); // 0x407949
    int64_t v485 = v104 % 256; // 0x40794e
    int64_t v141 = v102; // 0x40795b
    int64_t v142 = v485; // 0x40795b
    int64_t str = v484; // 0x40795b
    int64_t v143 = v106; // 0x40795b
    int64_t v118 = v102; // 0x40795b
    int64_t v119 = v485; // 0x40795b
    int64_t v120 = v484; // 0x40795b
    int64_t v121 = v106; // 0x40795b
    int64_t v122 = 1; // 0x40795b
    if (*(char *)v484 == 46) {
        goto lab_0x4082d3;
    } else {
        goto lab_0x407961;
    }
  lab_0x405f45:;
    int64_t v193 = v49;
    int64_t v194 = v48;
    int64_t v195 = v45;
    uint64_t v162 = v43;
    int64_t * v196 = v40;
    int64_t v197 = v38;
    int32_t v198 = v177;
    char v199 = v42; // 0x405f53
    int64_t v156 = v195; // 0x405f5a
    if (v199 != 0) {
        goto lab_0x405fb0;
    } else {
        // 0x405f5c
        v156 = v195;
        if (v138 == 0x4000 | *(char *)(a6 + 20) == 1) {
            goto lab_0x405fb0;
        } else {
            // 0x405f68
            v156 = v195;
            if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) == 0) {
                goto lab_0x405fb0;
            } else {
                // 0x405f78
                v6 = str3;
                v156 = 0;
                if ((char)function_405620(str3, *(char *)(a6 + 37), 0, a6) != 0) {
                    goto lab_0x405fb0;
                } else {
                    // 0x405fa1
                    v156 = 0;
                    v35 = 0;
                    v36 = v193;
                    if (*(char *)(a6 + 38) != 0) {
                        goto lab_0x406910;
                    } else {
                        goto lab_0x405fb0;
                    }
                }
            }
        }
    }
  lab_0x406910:
    // 0x406910
    v51 = v35;
    if (*(char *)(a6 + 37) != 0) {
        goto lab_0x406e0d;
    } else {
        // 0x40691b
        v52 = v53;
        v54 = v36;
        if (v55 == 0) {
            // 0x406929
            function_409980((int64_t)owner, v11);
            v52 = v53;
            v54 = v36;
        }
        goto lab_0x4063b3;
    }
  lab_0x407248:;
    char * v56 = (char *)(a6 + 35); // 0x407262
    unsigned char v57 = *v56; // 0x407262
    int64_t v58 = function_40ae10(a1, 0x20000 * (int32_t)(*v5 == 2), v59); // 0x407272
    int32_t v60 = v58; // 0x40727d
    int32_t err_num5; // 0x405990
    int64_t v61; // 0x405990
    int64_t v62; // 0x405990
    int64_t v63; // 0x405990
    char * format11; // 0x405990
    int64_t v64; // 0x405990
    int64_t v65; // 0x405990
    int32_t v66; // 0x405990
    int32_t v67; // 0x405990
    uint32_t fd2; // 0x407285
    uint32_t v68; // 0x4072cc
    if (v60 < 0) {
        // 0x407f86
        v6 = 4;
        function_40ea00(4, a1);
        v69 = (int64_t)"cannot open %s for reading";
        goto lab_0x4068f0;
    } else {
        // 0x407285
        fd2 = 0x1000000 * v60 >> 24;
        if (__fxstat(1, fd2, (struct stat *)&v70) != 0) {
            // 0x40825f
            function_40ea00(4, a1);
            v6 = 0;
            char * v71 = dcgettext(NULL, "cannot fstat %s", 5); // 0x40827f
            err_num5 = *__errno_location();
            v64 = v72;
            format11 = v71;
            goto lab_0x407430;
        } else {
            if (v1 != (int64_t)owner) {
                goto lab_0x407e0f;
            } else {
                // 0x4072b8
                if (v11 != (int64_t)v70) {
                    goto lab_0x407e0f;
                } else {
                    // 0x4072cc
                    v68 = v73 % 512;
                    if ((char)v72 != 0) {
                        // 0x4072cc
                        v66 = (int64_t)v41;
                        v61 = v74;
                        goto lab_0x407380;
                    } else {
                        int64_t v75 = function_40ae10(str3, *v56 == 0 ? 1 : 513, (int64_t)&v70); // 0x407306
                        int64_t v76 = 0x100000000 * v75 >> 32; // 0x40730d
                        if ((*(int64_t *)(a6 + 32) & 0xff000000ff00) == 0) {
                            int64_t v77 = v76 & 0xffffffff; // 0x4085f5
                            v63 = v77;
                            v15 = v72;
                            v67 = 0;
                            v65 = v76;
                            v62 = v77;
                            if ((int32_t)v76 < 0) {
                                goto lab_0x40732f;
                            } else {
                                goto lab_0x40860d;
                            }
                        } else {
                            // 0x407327
                            v63 = v75 & 0xffffffff;
                            if ((int32_t)v75 >= 0) {
                                int64_t v78 = function_405620(str3, *(char *)(a6 + 37), 0, a6); // 0x408c43
                                v15 = v72;
                                v67 = 0;
                                v65 = v76;
                                v62 = a6;
                                if ((char)v78 != 0) {
                                    goto lab_0x40860d;
                                } else {
                                    // 0x408c53
                                    v15 = 0;
                                    v67 = 0;
                                    v65 = v76;
                                    v62 = a6;
                                    if (*(char *)(a6 + 38) == 0) {
                                        goto lab_0x40860d;
                                    } else {
                                        // 0x408c53
                                        fd = v76;
                                        v16 = 0;
                                        v18 = 0;
                                        v20 = 0;
                                        v22 = v79;
                                        v23 = v78 & 0xffffffff;
                                        v25 = a1;
                                        v26 = v10;
                                        goto lab_0x408940;
                                    }
                                }
                            } else {
                                goto lab_0x40732f;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4068f0:;
    char * format4 = dcgettext(NULL, (char *)v69, 5); // 0x4068f2
    int32_t * err_num = __errno_location(); // 0x4068fa
    v6 = 0;
    error(0, *err_num, format4);
    v35 = (int64_t)format4;
    v36 = v10;
    goto lab_0x406910;
  lab_0x407523:;
    // 0x407523
    int64_t v80; // 0x405990
    int64_t v81; // 0x405990
    int64_t v82; // 0x405990
    int32_t v83; // 0x405990
    if (*v5 != 2) {
        goto lab_0x406eb0;
    } else {
        // 0x40752e
        if ((*(int32_t *)(v84 + 24) & 0xf000) == 0xa000) {
            // 0x408cb4
            v6 = 1;
            int32_t v85 = __xstat(1, file_path, (struct stat *)&v86); // 0x408cd4
            int64_t v87 = 0x100000000000000 * v88 >> 56; // 0x408cd9
            v89 = v87;
            int64_t v90 = v91 % 256; // 0x408ce0
            int32_t v92 = v93;
            v94 = a1;
            v95 = v92;
            v96 = v97;
            v98 = v93;
            v99 = v90;
            v82 = a1;
            v80 = v87;
            v83 = v92;
            v81 = v90;
            if (v85 == 0) {
                goto lab_0x4075a0;
            } else {
                goto lab_0x405b63;
            }
        } else {
            // 0x407541
            v86 = __asm_movaps(__asm_movdqa(*(int128_t *)v84));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 16)));
            int64_t v100 = __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 32))); // 0x40755d
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 48)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 64)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 80)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 96)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 112)));
            __asm_movaps(__asm_movdqa(*(int128_t *)(v84 + 128)));
            v82 = v101;
            v80 = v89;
            v83 = v100;
            v81 = v91;
            goto lab_0x4075a0;
        }
    }
  lab_0x408078:
    // 0x408078
    v102 = v103;
    v104 = v105;
    v106 = v107;
    if ((int32_t)v107 != 0) {
        goto lab_0x407940;
    } else {
        // 0x408081
        function_40ead0(0, 3, str3);
        v6 = 0;
        function_40ead0(0, 3, a1);
        v108 = (int64_t)"cannot move directory onto non-directory: %s -> %s";
        goto lab_0x405da8;
    }
  lab_0x407ea8:;
    int64_t v109 = function_40ad40(a1, v110); // 0x407eb1
    int64_t v111 = v112 % 256; // 0x407eb6
    int64_t v113 = v110; // 0x407ec3
    int64_t v114 = v111; // 0x407ec3
    int64_t v115 = v109; // 0x407ec3
    int64_t v116 = v117; // 0x407ec3
    v118 = v110;
    v119 = v111;
    v120 = v109;
    v121 = v117;
    v122 = 0;
    if (*(char *)v109 == 46) {
        goto lab_0x4082d3;
    } else {
        goto lab_0x407ec9;
    }
  lab_0x405c5a:
    // 0x405c5a
    v123 = v124;
    v125 = 0;
    v126 = v127;
    v128 = v129;
    v130 = v131;
    v132 = v133;
    v134 = v135;
    if (((char)v136 || (char)((owner & 0xf000) == 0x4000)) != 0) {
        goto lab_0x405de4;
    } else {
        char v137 = *(char *)(a6 + 21); // 0x405c82
        if (v137 != 0) {
            goto lab_0x405caa;
        } else {
            // 0x405c91
            if (v1 < 2 | *(char *)(a6 + 34) == 0) {
                // 0x40829d
                v123 = v124;
                v125 = 0;
                v126 = v137;
                v128 = v129;
                v130 = v131;
                v132 = v133;
                v134 = v135;
                if (v138 != 0x8000 == *v5 == 2) {
                    goto lab_0x405caa;
                } else {
                    goto lab_0x405de4;
                }
            } else {
                goto lab_0x405caa;
            }
        }
    }
  lab_0x4082d3:;
    int64_t v139 = v120 + 1; // 0x4082d5
    char v140 = *(char *)(v139 + (int64_t)(*(char *)v139 == 46)); // 0x4082dd
    v136 = v122;
    v133 = v119;
    switch (v140) {
        case 0: {
            goto lab_0x405c5a;
        }
        case 47: {
            goto lab_0x405c5a;
        }
        default: {
            // 0x4082f4
            v141 = v118;
            v142 = v119;
            str = v120;
            v143 = v121;
            v113 = v118;
            v114 = v119;
            v115 = v120;
            v116 = v121;
            if (v122 == 0) {
                goto lab_0x407ec9;
            } else {
                goto lab_0x407961;
            }
        }
    }
  lab_0x407961:;
    int64_t v144 = v142; // 0x407965
    if ((int32_t)v143 != 3) {
        uint32_t len = strlen((char *)str); // 0x40797b
        int64_t str2 = function_40ad40(str3, v141); // 0x40798e
        int32_t len2 = strlen((char *)str2); // 0x40799d
        int64_t v145 = len2; // 0x40799d
        int64_t len3 = strlen(g65); // 0x4079b6
        int64_t v146 = v142 % 256; // 0x4079bb
        v144 = v146;
        if (0x100000000000000 * (int64_t)len >> 56 == len3 + v145) {
            // 0x4079dd
            v144 = v146;
            if (memcmp((int64_t *)(str & 0xffffffff), (int64_t *)(0x100000000000000 * str2 >> 56), len2) == 0) {
                // 0x407a12
                v144 = v146;
                if (strcmp((char *)((0x100000000 * str >> 32) + v145), g65) == 0) {
                    int32_t len4 = strlen((char *)str3); // 0x407a45
                    int64_t v147 = function_4112e0(len3 + 1 + (int64_t)len4); // 0x407a5d
                    int64_t * v148 = (int64_t *)v147; // 0x407a84
                    strcpy((char *)mempcpy(v148, (int64_t *)str3, len4), g65);
                    uint32_t v149 = __xstat(1, (char *)v147, (struct stat *)&v86); // 0x407aaa
                    v6 = v147;
                    free(v148);
                    v144 = v146;
                    if (v1 == v150 == v149 % 256 == 0) {
                        // 0x409164
                        v144 = v146;
                        if (v11 == v86) {
                            // 0x409178
                            char * format5; // 0x405990
                            if (*v4 == 0) {
                                // 0x4091c9
                                format5 = dcgettext(NULL, "backing up %s might destroy source;  %s not copied", 5);
                            } else {
                                // 0x40917f
                                format5 = dcgettext(NULL, "backing up %s might destroy source;  %s not moved", 5);
                            }
                            // 0x409193
                            function_40e920(1, 4, a1);
                            v6 = 0;
                            function_40e920(0, 4, str3);
                            // 0x405db8
                            error(0, 0, format5);
                            // 0x406271
                            return 0;
                        }
                    }
                }
            }
        }
    }
    int64_t str4 = function_40a8b0(str3, *(int32_t *)&v89); // 0x407af9
    uint64_t v151 = 0x100000000000000 * v144 >> 56; // 0x407b12
    int32_t * err_num6; // 0x405990
    int64_t v152; // 0x405990
    if (str4 == 0) {
        int32_t * v153 = __errno_location(); // 0x4081c6
        v123 = v124;
        v125 = 0;
        v126 = 1;
        v128 = v129;
        v130 = v131;
        v132 = v151 % 256;
        v134 = v135;
        if (*v153 == 2) {
            goto lab_0x405de4;
        } else {
            // 0x4081e5
            v6 = 4;
            function_40ea00(4, str3);
            err_num6 = v153;
            v152 = (int64_t)"cannot backup %s";
            goto lab_0x408203;
        }
    } else {
        int32_t len5 = strlen((char *)str4); // 0x407b21
        int64_t v154 = v135 - ((int64_t)len5 + 24 & -16); // 0x407b35
        int64_t * dest_mem = memcpy((int64_t *)(v154 + 15 & -16), (int64_t *)str4, len5 + 1); // 0x407b41
        free((int64_t *)(0x100000000000000 * str4 >> 56));
        v123 = v124;
        v125 = (int64_t)dest_mem;
        v126 = 1;
        v128 = v129;
        v130 = v131;
        v132 = v151 % 256;
        v134 = v154;
        goto lab_0x405de4;
    }
  lab_0x405fb0:;
    int64_t v155 = v156;
    int64_t v157 = v155; // 0x405fb2
    if ((char)v46 != 0) {
        int64_t * v158 = (int64_t *)(a6 + 56); // 0x405fb4
        v157 = v155;
        if (*v158 != 0) {
            int64_t v159 = &v86; // 0x405fc2
            v6 = 1;
            int32_t v160 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x405fd5
            v157 = v159;
            if (v160 == 0) {
                int64_t v161 = *v158; // 0x405fe6
                v6 = v161;
                function_40ae60(v161, str3, v159);
                v157 = v159;
            }
        }
    }
    // 0x406008
    if (v47 != 0 || v138 != 0x4000 == (*(char *)(a6 + 23) != 0)) {
        // 0x406271
        return v162 % 256 & 0xffffffff;
    }
    char v163 = v44;
    if (*(char *)(a6 + 31) == 0) {
        goto lab_0x4060e0;
    } else {
        // 0x40602c
        v6 = str3;
        if (v163 == 0) {
            // 0x407720
            if ((int32_t)function_410aa0(str3, &v86) == 0) {
                goto lab_0x4060ed;
            } else {
                goto lab_0x406092;
            }
        } else {
            // 0x40607f
            if ((int32_t)function_410ab0(str3, &v86, v157) == 0 || *__errno_location() == 38) {
                // 0x406271
                return v162 % 256 & 0xffffffff;
            }
            goto lab_0x406092;
        }
    }
  lab_0x406a14:;
    char * v164 = (char *)a8; // 0x406a18
    if (*v164 == 0) {
        // 0x407e77
        v6 = str3;
        function_409a10(str3, v1, (int64_t)v165);
        *v164 = 1;
    }
    // 0x406a21
    int32_t v166; // 0x405990
    v167 = v166;
    v168 = v169;
    v170 = v171;
    if (*(char *)(a6 + 46) != 0) {
        // 0x406a28
        if (*v4 == 0) {
            // 0x407fef
            v6 = a1;
            function_404d70(a1, str3, 0);
            v167 = v166;
            v168 = v169;
            v170 = v171;
        } else {
            // 0x406a33
            function_40ea00(4, str3);
            v6 = 1;
            __printf_chk(1, dcgettext(NULL, "created directory %s\n", 5));
            v167 = v166;
            v168 = v169;
            v170 = v171;
        }
    }
    goto lab_0x406a8f;
  lab_0x407ec9:
    // 0x407ec9
    v123 = v124;
    v125 = 0;
    v126 = v127;
    v128 = v129;
    v130 = v131;
    v132 = v114;
    v134 = v135;
    v141 = v113;
    v142 = v114;
    str = v115;
    v143 = v116;
    if ((owner & 0xf000) != 0x4000) {
        goto lab_0x407961;
    } else {
        goto lab_0x405de4;
    }
  lab_0x4060e0:
    if (v163 != 0) {
        // 0x406271
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x4060ed;
  lab_0x405caa:
    // 0x405caa
    if (unlink((char *)str3) == 0) {
        goto lab_0x405cdf;
    } else {
        int32_t * v555 = __errno_location(); // 0x405cc7
        if (*v555 != 2) {
            // 0x408b1f
            v6 = 4;
            function_40ea00(4, str3);
            err_num6 = v555;
            v152 = (int64_t)"cannot remove %s";
            goto lab_0x408203;
        } else {
            goto lab_0x405cdf;
        }
    }
  lab_0x4060ed:
    // 0x4060ed
    if (*v404 != 0) {
        if (true != (true == v199 == 0)) {
            // 0x40610f
            v6 = a6;
            int64_t v486 = function_405770(a6, str3, 0xffffffff, v192, v199, (int64_t *)&v165); // 0x406134
            if ((int32_t)v486 == -1) {
                // 0x406271
                return 0;
            }
        }
    }
    // 0x406158
    char v487; // 0x406202
    if (*(int64_t *)v3 % 0xff000000000100 != 0) {
        // 0x407ba0
        if ((int32_t)function_40a0d0(v194, 0xffffffff, str3) == 0) {
            // 0x406271
            return v162 % 256 & 0xffffffff;
        }
        // 0x4061fb
        v487 = *(char *)(a6 + 36);
        // 0x406271
        return (v487 != 0 ? v193 : v162 % 256) & 0xffffffff & 0xffffffff;
    }
    // 0x40616c
    int64_t v488; // 0x407e5b
    if (*v401 != 0) {
        // 0x407e41
        v488 = (int32_t)function_40a160(str3) != 0 ? v193 : v162 % 256;
        // 0x406271
        return v488 & 0xffffffff & 0xffffffff;
    }
    // 0x406177
    if (*(char *)(a6 + 32) != 0) {
        // 0x407fa5
        function_405960(v6);
        // 0x407e41
        v488 = (int32_t)function_40a160(str3) != 0 ? v193 : v162 % 256;
        // 0x406271
        return v488 & 0xffffffff & 0xffffffff;
    }
    int32_t v489 = (int64_t)v196; // 0x406188
    int64_t * v490 = v196; // 0x40618a
    int64_t * v491; // 0x405990
    int32_t v492; // 0x405990
    uint32_t v493; // 0x4066be
    int64_t * v494; // 0x4066be
    if (v489 != 0) {
        // 0x4066b7
        v493 = -1 - (int32_t)function_405960(v6) & v489;
        v494 = (int64_t *)(int64_t)v493;
        v490 = v494;
        if (v493 == 0) {
            goto lab_0x406190;
        } else {
            // 0x4066ca
            v492 = v198;
            v491 = v494;
            if ((char)v197 == 1) {
                goto lab_0x40619d;
            } else {
                if (v199 != 0) {
                    int32_t v495 = __lxstat(1, (char *)str3, (struct stat *)&v165); // 0x408b55
                    v9 = str3;
                    if (v495 == 0) {
                        goto lab_0x4066e4;
                    } else {
                        goto lab_0x406237;
                    }
                } else {
                    goto lab_0x4066e4;
                }
            }
        }
    } else {
        goto lab_0x406190;
    }
  lab_0x407430:
    // 0x407430
    error(0, err_num5, format11);
    int64_t v27 = v64; // 0x40743c
    int64_t v28 = 0; // 0x40743c
    int64_t v29 = (int64_t)format11; // 0x40743c
    int64_t v30 = v79; // 0x40743c
    int64_t v31 = 0; // 0x40743c
    int64_t v32 = a1; // 0x40743c
    int64_t v33 = v10; // 0x40743c
    goto lab_0x407447;
  lab_0x407e0f:
    // 0x407e0f
    function_40ea00(4, a1);
    v6 = 0;
    err_num5 = (int32_t)"skipping file %s, as it was replaced while being copied" ^ (int32_t)"skipping file %s, as it was replaced while being copied";
    v64 = v72;
    format11 = dcgettext(NULL, "skipping file %s, as it was replaced while being copied", 5);
    goto lab_0x407430;
  lab_0x4077de:
    // 0x4077de
    free((int64_t *)v424);
    v6 = 0;
    function_40ead0(0, 3, str3);
    v50 = (int64_t)"%s: can make relative symbolic links only in current directory";
    goto lab_0x4067b2;
  lab_0x4075a0:;
    // 0x4075a0
    int64_t v496; // 0x405990
    int64_t v497; // 0x405990
    int64_t v498; // 0x405990
    int128_t v499; // 0x405990
    if ((*(int32_t *)(v80 + 24) & 0xf000) == 0xa000) {
        // 0x408c7d
        v6 = 1;
        int32_t v500 = __xstat(1, (char *)str3, (struct stat *)&v70); // 0x408c9a
        int64_t v501 = v81 % 256; // 0x408c9f
        v94 = str3;
        v95 = v83;
        v96 = v97;
        v98 = v93;
        v99 = v501;
        v497 = str3;
        v498 = v93;
        v496 = v501;
        if (v500 == 0) {
            goto lab_0x40762b;
        } else {
            goto lab_0x405b63;
        }
    } else {
        // 0x4075b4
        v70 = __asm_movaps(__asm_movdqa(*(int128_t *)v80));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 16)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 32)));
        int64_t v502 = __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 48))); // 0x4075e0
        int64_t v503 = __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 64))); // 0x4075ed
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 80)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 96)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 112)));
        __asm_movaps(__asm_movdqa(*(int128_t *)(v89 + 128)));
        v497 = v82;
        v499 = v502;
        v498 = v503;
        v496 = v81;
        goto lab_0x40762b;
    }
  lab_0x405cdf:;
    int64_t v504 = v133 % 256;
    char v505 = *(char *)(a6 + 46); // 0x405cdf
    if (v505 != 0) {
        // 0x4085a1
        function_40ea00(4, str3);
        __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
        v123 = v124;
        v125 = 0;
        v126 = v505;
        v128 = v129;
        v130 = v131;
        v132 = v504;
        v134 = v135;
        goto lab_0x405de4;
    } else {
        if ((char)a7 == 0) {
            unsigned char v506 = *(char *)(a6 + 42) & (char)(v138 == 0x4000); // 0x40857a
            v293 = v124;
            v294 = 0;
            v295 = 1;
            v296 = v129;
            v297 = v131;
            v298 = v135;
            if (v506 != 0) {
                // 0x406cf2
                v6 = v150;
                v330 = v150;
                v331 = v124;
                v332 = 0;
                v333 = v506;
                v334 = v129;
                v335 = v131;
                v336 = v135;
                goto lab_0x406d10;
            } else {
                goto lab_0x405e28;
            }
        } else {
            int64_t v507 = 0x100000000000000 * a7 >> 56; // 0x405cff
            v251 = v124;
            v255 = 0;
            v254 = v507;
            v253 = v129;
            v252 = v131;
            v249 = v504;
            v250 = v135;
            v259 = v124;
            v260 = 0;
            v261 = v507;
            v262 = v129;
            v263 = v131;
            v264 = v135;
            if (*(int64_t *)(a6 + 56) == 0) {
                goto lab_0x4062b0;
            } else {
                goto lab_0x405d20;
            }
        }
    }
  lab_0x408203:
    // 0x408203
    error(0, *err_num6, dcgettext(NULL, (char *)v152, 5));
    // 0x406271
    return 0;
  lab_0x406190:
    // 0x406190
    v492 = v198;
    v491 = v490;
    if ((char)v197 == 0) {
        // 0x406271
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x40619d;
  lab_0x406092:
    // 0x406092
    function_40ea00(4, str3);
    char * format17 = dcgettext(NULL, "preserving times for %s", 5); // 0x4060b2
    int32_t * err_num8 = __errno_location(); // 0x4060ba
    v6 = 0;
    error(0, *err_num8, format17);
    if (*(char *)(a6 + 36) != 0) {
        // 0x406271
        return 0;
    }
    goto lab_0x4060e0;
  lab_0x407447:
    // 0x407447
    if (close(fd2) < 0) {
        // 0x40817b
        function_40ea00(4, v32);
        char * format2 = dcgettext(NULL, "failed to close %s", 5); // 0x408197
        error(0, *__errno_location(), format2);
        int64_t v34 = 0x100000000 * v28 >> 32; // 0x4081b5
        v6 = v34;
        free((int64_t *)v34);
        v35 = (int64_t)format2;
        v36 = v33;
        goto lab_0x406910;
    } else {
        int64_t v37 = 0x100000000 * v28 >> 32; // 0x407469
        v6 = v37;
        free((int64_t *)v37);
        v38 = v39;
        v40 = v41;
        v42 = v27;
        v43 = 0x100000000000000 * v31 >> 56;
        v44 = 0;
        v45 = v29;
        v46 = v30;
        v47 = v31 % 256;
        v48 = v32;
        v49 = v33;
        v35 = v29;
        v36 = v33;
        if ((char)v31 != 0) {
            goto lab_0x405f45;
        } else {
            goto lab_0x406910;
        }
    }
  lab_0x4067b2:;
    char * format3 = dcgettext(NULL, (char *)v50, 5); // 0x4067b4
    v6 = 0;
    error(0, 0, format3);
    v35 = (int64_t)format3;
    v36 = v10;
    goto lab_0x406910;
  lab_0x40619d:
    // 0x40619d
    if (chmod((char *)str3, v492 || (int32_t)(int64_t)v491) == 0) {
        // 0x406271
        return v162 % 256 & 0xffffffff;
    }
    // 0x4061bd
    function_40ea00(4, str3);
    error(0, *__errno_location(), dcgettext(NULL, "preserving permissions for %s", 5));
    // 0x4061fb
    v487 = *(char *)(a6 + 36);
    // 0x406271
    return (v487 != 0 ? v193 : v162 % 256) & 0xffffffff & 0xffffffff;
  lab_0x40762b:
    // 0x40762b
    v94 = v497;
    v95 = v83;
    v96 = v97;
    v464 = v499;
    v98 = v498;
    v99 = v496;
    // 0x40763f
    v94 = v497;
    v95 = v83;
    v96 = v97;
    v464 = v499;
    v98 = v498;
    v99 = v496;
    if (v86 != (int64_t)v70) {
        goto lab_0x405b63;
    } else {
        // 0x407653
        v94 = v497;
        v95 = v83;
        v96 = 1;
        v464 = v499;
        v98 = v498;
        v99 = v496;
        if (*(char *)(a6 + 23) == 0) {
            goto lab_0x406eb0;
        } else {
            goto lab_0x405b63;
        }
    }
  lab_0x407380:;
    int64_t v508 = v68 & -1 - v66; // 0x40739f
    int64_t v509 = 0x100000000 * function_40ae10(str3, 193, v508);
    int64_t v510 = v509 >> 32; // 0x4073ae
    int32_t * v511 = __errno_location(); // 0x4073b4
    int32_t v512 = *v511; // 0x4073bf
    char v513 = v509 < 0;
    char v514 = v513; // 0x4073db
    int64_t v515 = v510; // 0x4073db
    int32_t v516 = v512; // 0x4073db
    int32_t v517; // 0x405990
    int64_t v518; // 0x405990
    if (v509 < 0 != (v512 == 17)) {
        goto lab_0x408a88;
    } else {
        char v519 = *v4; // 0x4073e1
        v518 = v519;
        v517 = 17;
        if (v519 == 0) {
            int32_t v520 = __lxstat(1, (char *)str3, (struct stat *)&v86); // 0x408a36
            v514 = v513;
            v515 = v510;
            v516 = 17;
            if (v520 != 0) {
                goto lab_0x408a88;
            } else {
                // 0x408a3f
                v514 = v513;
                v515 = v510;
                v516 = 17;
                if ((owner & 0xf000) != 0xa000) {
                    goto lab_0x408a88;
                } else {
                    // 0x408a51
                    if (*(char *)(a6 + 48) == 0) {
                        // 0x4097aa
                        function_40ea00(4, str3);
                        char * format12 = dcgettext(NULL, "not writing through dangling symlink %s", 5); // 0x4097d1
                        error(0, (int32_t)"not writing through dangling symlink %s" ^ (int32_t)"not writing through dangling symlink %s", format12);
                        v27 = v509 < 0 == v512 == 17;
                        v28 = 0;
                        v29 = (int64_t)format12;
                        v30 = v79;
                        v31 = 0;
                        v32 = a1;
                        v33 = v10;
                        goto lab_0x407447;
                    } else {
                        int64_t v521 = 0x100000000 * function_40ae10(str3, 65, v508);
                        v514 = v521 < 0;
                        v515 = v521 >> 32;
                        v516 = *v511;
                        goto lab_0x408a88;
                    }
                }
            }
        } else {
            goto lab_0x4073fa;
        }
    }
  lab_0x407da7:
    // 0x407da7
    v6 = str7;
    free((int64_t *)str7);
    char v522 = *(char *)(a6 + 37); // 0x407daf
    v51 = v423;
    if (v522 != 0) {
        goto lab_0x406e0d;
    } else {
        char v523 = *v404; // 0x407dc2
        if (v523 != 0) {
            int64_t v524 = v522; // 0x407db4
            int64_t v525 = owner; // 0x4089b0
            v6 = str3;
            if (lchown((char *)str3, owner, owner) == 0) {
                int64_t v526 = v523; // 0x408b6e
                v38 = v524;
                v40 = v41;
                v42 = v72;
                v43 = v526;
                v44 = v526;
                v45 = v525;
                v46 = v79;
                v47 = 0;
                v48 = a1;
                v49 = v10;
                goto lab_0x405f45;
            } else {
                // 0x4089df
                v6 = a6;
                int64_t v527 = function_405740(a6); // 0x4089e2
                int64_t v528 = 0x100000000000000 * v527 >> 56; // 0x4089e7
                v38 = v524;
                v40 = v41;
                v42 = v72;
                v43 = v528;
                v44 = v528;
                v45 = v525;
                v46 = v79;
                v47 = 0;
                v48 = a1;
                v49 = v10;
                if ((char)v527 == 0) {
                    char * format13 = dcgettext(NULL, "failed to preserve ownership for %s", 5); // 0x409382
                    int64_t v529 = (int64_t)format13; // 0x409382
                    int32_t * err_num7 = __errno_location(); // 0x40938a
                    v6 = 0;
                    error(0, *err_num7, format13);
                    char v530 = *(char *)(a6 + 36); // 0x4093a4
                    v35 = v529;
                    v36 = v10;
                    if (v530 != 0) {
                        goto lab_0x406910;
                    } else {
                        int64_t v531 = v523; // 0x4093bf
                        v38 = v530;
                        v40 = v41;
                        v42 = v72;
                        v43 = v531;
                        v44 = v531;
                        v45 = v529;
                        v46 = v79;
                        v47 = 0;
                        v48 = a1;
                        v49 = v10;
                        goto lab_0x405f45;
                    }
                } else {
                    goto lab_0x405f45;
                }
            }
        } else {
            // 0x407dd0
            v38 = v523;
            v40 = v41;
            v42 = v72;
            v43 = 1;
            v44 = 1;
            v45 = v423;
            v46 = v79;
            v47 = v523;
            v48 = a1;
            v49 = v10;
            goto lab_0x405f45;
        }
    }
  lab_0x4066e4:
    // 0x4066e4
    v491 = v494;
    if ((v493 & -1 - owner) == 0) {
        // 0x406271
        return v162 % 256 & 0xffffffff;
    }
    goto lab_0x40619d;
  lab_0x408a88:;
    unsigned char v532 = v514 & (char)(v516 == 21); // 0x408a98
    if (v532 == 0) {
        // 0x40912a
        v518 = 1;
        v517 = v516;
        v15 = 1;
        v67 = v66;
        v65 = v515;
        v62 = v61;
        if ((int32_t)v515 < 0) {
            goto lab_0x4073fa;
        } else {
            goto lab_0x40860d;
        }
    } else {
        int64_t v533 = v532;
        v6 = str3;
        v518 = v533;
        v517 = 21;
        if ((char)str3 != 0) {
            int64_t v534 = str3; // 0x408ac8
            int64_t v535 = -1; // 0x408ac8
            int64_t v536 = 0; // 0x408ac8
            while (v535 != 0) {
                int64_t v537 = v534;
                v534 = v537 + (v425 ? -1 : 1);
                v6 = v534;
                v535--;
                v536 = v535;
                if (*(char *)v537 == 0) {
                    // break -> 
                    break;
                }
                v536 = 0;
            }
            v518 = v533;
            v517 = (int32_t)(*(char *)(str3 - 3 - v536) != 47) | 20;
        }
        goto lab_0x4073fa;
    }
  lab_0x40732f:;
    int32_t * v538 = __errno_location(); // 0x40732f
    if (*(char *)(a6 + 22) == 0) {
        int32_t v539 = *v538; // 0x408d8c
        v518 = 0;
        v517 = v539;
        if (v539 != 2) {
            goto lab_0x4073fa;
        } else {
            // 0x408d96
            v66 = 0;
            v61 = v63;
            v518 = 0;
            v517 = v539;
            if (*v4 == 0) {
                goto lab_0x407380;
            } else {
                goto lab_0x4073fa;
            }
        }
    } else {
        // 0x407342
        if (unlink((char *)str3) != 0) {
            // 0x4095ca
            function_40ea00(4, str3);
            v6 = 0;
            char * v540 = dcgettext(NULL, "cannot remove %s", 5); // 0x4095ee
            err_num5 = *v538;
            v64 = v72;
            format11 = v540;
            goto lab_0x407430;
        } else {
            // 0x407356
            if (*(char *)(a6 + 46) != 0) {
                // 0x40952b
                function_40ea00(4, str3);
                __printf_chk(1, dcgettext(NULL, "removed %s\n", 5));
            }
            char v541 = *(char *)(a6 + 33); // 0x407361
            int64_t v542 = (int64_t)v41;
            int32_t v543 = v542;
            v66 = v543;
            v61 = v542 & 0xffffffff;
            if (v541 != 0) {
                int64_t v544 = function_405550(a1, str3, v68, 1, a6); // 0x40946d
                v66 = v543;
                v61 = 1;
                if ((char)v544 != 0) {
                    goto lab_0x407380;
                } else {
                    // 0x40947d
                    v27 = v541;
                    v28 = 0;
                    v29 = v68;
                    v30 = v79;
                    v31 = v544 & 0xffffffff;
                    v32 = a1;
                    v33 = v10;
                    goto lab_0x407447;
                }
            } else {
                goto lab_0x407380;
            }
        }
    }
  lab_0x40860d:
    // 0x40860d
    v6 = 1;
    fd3 = v65;
    int32_t v545 = __fxstat(1, fd3, (struct stat *)&v86); // 0x408629
    int64_t v546; // 0x405990
    int64_t v547; // 0x405990
    int64_t v548; // 0x405990
    int64_t v549; // 0x405990
    int64_t v550; // 0x405990
    int64_t v551; // 0x405990
    int64_t v552; // 0x407285
    int64_t v553; // 0x408614
    if (v545 != 0) {
        // 0x408cf5
        function_40ea00(4, str3);
        char * format14 = dcgettext(NULL, "cannot fstat %s", 5); // 0x408d19
        error(0, *__errno_location(), format14);
        fd = fd3;
        v16 = v15;
        v18 = 0;
        v20 = (int64_t)format14;
        v22 = v79;
        v23 = 0;
        v25 = a1;
        v26 = v10;
        goto lab_0x408940;
    } else {
        // 0x40863c
        v552 = fd2;
        v553 = v65 & 0xffffffff;
        v551 = 0;
        v549 = v62;
        v550 = &v86;
        v548 = v79;
        v546 = a1;
        v547 = v10;
        if (v57 == 0) {
            goto lab_0x40887f;
        } else {
            int32_t * v554 = (int32_t *)(a6 + 52); // 0x408649
            if (*v554 != 0) {
                // 0x4092d0
                v6 = v553;
                v551 = 0;
                v549 = v62;
                v550 = v552;
                v548 = v79;
                v546 = a1;
                v547 = v10;
                if (ioctl(fd3, 0x40049409) == 0) {
                    goto lab_0x40887f;
                } else {
                    // 0x4092f0
                    if (*v554 != 2) {
                        goto lab_0x408654;
                    } else {
                        // 0x4092fb
                        function_40e920(1, 4, a1);
                        function_40e920(0, 4, str3);
                        char * format15 = dcgettext(NULL, "failed to clone %s from %s", 5); // 0x409336
                        error(0, *__errno_location(), format15);
                        fd = fd3;
                        v16 = v15;
                        v18 = 0;
                        v20 = 0x100000000 * (int64_t)format15 >> 32;
                        v22 = v79;
                        v23 = 0;
                        v25 = a1;
                        v26 = v10;
                        goto lab_0x408940;
                    }
                }
            } else {
                goto lab_0x408654;
            }
        }
    }
  lab_0x4073fa:
    // 0x4073fa
    function_40ea00(4, str3);
    v6 = 0;
    err_num5 = v517;
    v64 = v518;
    format11 = dcgettext(NULL, "cannot create regular file %s", 5);
    goto lab_0x407430;
  lab_0x4084dd:
    // 0x4084dd
    free((int64_t *)str7);
    function_40ea00(4, str3);
    char * format16 = dcgettext(NULL, "cannot create symbolic link %s", 5); // 0x408505
    v6 = 0;
    error(0, 0x1000000 * v426 >> 24, format16);
    v35 = (int64_t)format16;
    v36 = v10;
    goto lab_0x406910;
  lab_0x408940:
    // 0x408940
    v27 = v16;
    v28 = v18;
    v29 = v20;
    v30 = v22;
    v31 = v23 % 256;
    v32 = v25;
    v33 = v26;
    if (close(fd) < 0) {
        // 0x408962
        function_40ea00(4, str3);
        char * format = dcgettext(NULL, "failed to close %s", 5); // 0x408986
        error(0, *__errno_location(), format);
        v27 = v16;
        v28 = v18;
        v29 = (int64_t)format;
        v30 = v22;
        v31 = 0;
        v32 = v25;
        v33 = v26;
    }
    goto lab_0x407447;
  lab_0x40887f:;
    int64_t v556 = v550; // 0x408884
    if (*(char *)(a6 + 31) != 0) {
        // 0x408b84
        v6 = v553;
        length2 = v1;
        int64_t v557 = function_410660(v553, str3, (int64_t *)&length2, v549); // 0x408bd0
        v556 = &length2;
        if ((int32_t)v557 == 0) {
            goto lab_0x40888a;
        } else {
            // 0x408bdd
            function_40ea00(4, str3);
            char * format18 = dcgettext(NULL, "preserving times for %s", 5); // 0x408c01
            int64_t v558 = (int64_t)format18; // 0x408c01
            int32_t * err_num9 = __errno_location(); // 0x408c09
            v6 = 0;
            error(0, *err_num9, format18);
            v556 = v558;
            fd = fd3;
            v16 = v15;
            v18 = v551;
            v20 = v558;
            v22 = v548;
            v23 = 0;
            v25 = v546;
            v26 = v547;
            if (*(char *)(a6 + 36) == 0) {
                goto lab_0x40888a;
            } else {
                goto lab_0x408940;
            }
        }
    } else {
        goto lab_0x40888a;
    }
  lab_0x40888a:;
    int64_t v559 = v556; // 0x40888f
    if (*v404 == 0) {
        goto lab_0x4088ef;
    } else {
        // 0x408891
        v559 = v556;
        if (true == owner == v363) {
            goto lab_0x4088ef;
        } else {
            // 0x4088ad
            v6 = a6;
            int64_t v560 = function_405770(a6, str3, v553, v192, (char)v15, &v86); // 0x4088d3
            v559 = v553;
            fd = fd3;
            v16 = v15;
            v18 = v551;
            v20 = v553;
            v22 = v548;
            v23 = 0;
            v25 = v546;
            v26 = v547;
            if ((int32_t)v560 == -1) {
                goto lab_0x408940;
            } else {
                goto lab_0x4088ef;
            }
        }
    }
  lab_0x408654:;
    int32_t v561 = getpagesize(); // 0x408654
    char * v562; // 0x405990
    int64_t v563 = (int64_t)v562; // 0x40865c
    int64_t v564 = v563; // 0x408685
    char * v565; // 0x405990
    if (v562 != (char *)0x2000000000000000 && v563 >= 0x2000000000000000) {
        // 0x408687
        v565 = (char *)0x20000;
        v564 = v563 < 0x2000000000000001 ? v563 : 512;
    }
    // 0x4086ba
    posix_fadvise(fd2, 0, 0, POSIX_FADV_SEQUENTIAL);
    uint32_t v566 = owner & 0xf000; // 0x4086d5
    v89 = v566;
    int64_t v567 = v545; // 0x4086e3
    if (v566 == 0x8000) {
        int64_t v568 = v364 - (int64_t)((v365 & 0xfffffffffffffe00) / 512); // 0x4086f6
        v567 = v568 < 0 != (v364 & (v568 ^ -0x8000000000000000)) < 0;
    }
    uint64_t v569 = (int64_t)v561; // 0x408659
    int64_t v570; // 0x405990
    int64_t v571; // 0x405990
    int64_t v572; // 0x405990
    int64_t v573; // 0x405990
    int64_t v574; // 0x405990
    int64_t v575; // 0x405990
    int64_t v576; // 0x405990
    int64_t v577; // 0x405990
    int64_t v578; // 0x405990
    int64_t v579; // 0x405990
    int64_t v580; // 0x405990
    int32_t * v581; // 0x409260
    int64_t v582; // 0x405990
    if ((owner & 0xf000) == 0x8000) {
        // 0x409260
        v581 = (int32_t *)(a6 + 12);
        int32_t v583 = *v581; // 0x409260
        if (v583 == 3) {
            int64_t v584 = (int64_t)v565;
            int64_t v585 = function_4112e0(v584 + v569); // 0x409498
            uint64_t v586 = v569 - 1 + v585; // 0x4094a4
            int64_t v587 = 0x100000000 * v585 >> 32; // 0x4094a7
            int64_t v588 = v586 % v569;
            int64_t v589 = v586 - v588; // 0x4094b4
            v575 = v587;
            v580 = v589;
            v582 = v588;
            if ((int32_t)v567 != 0) {
                goto lab_0x4092b4;
            } else {
                // 0x4094cb
                v89 = *v581 == 3;
                v570 = v584;
                v578 = v564;
                v576 = v587;
                v579 = v589;
                v577 = &length2;
                v574 = v588;
                v573 = v79;
                v571 = a1;
                v572 = v10;
                goto lab_0x408827;
            }
        } else {
            if (v567 % 2 == 0 || v583 != 2) {
                goto lab_0x40872b;
            } else {
                int64_t v590 = function_4112e0((int64_t)v565 + v569); // 0x40928e
                uint64_t v591 = v569 - 1 + v590; // 0x40929a
                v582 = v591 % v569;
                v575 = 0x100000000 * v590 >> 32;
                v580 = v591 - v582;
                goto lab_0x4092b4;
            }
        }
    } else {
        goto lab_0x40872b;
    }
  lab_0x4088ef:;
    int64_t v592 = v559; // 0x4088f4
    if ((char)owner > -1 == (*(char *)(a6 + 39) != 0)) {
        // 0x4091df
        v592 = v559;
        if (geteuid() != 0) {
            // 0x4091ec
            v6 = v553;
            v592 = 384;
            if ((int32_t)function_404d10(v553, str3, 384) == 0) {
                // 0x40920b
                v6 = v553;
                int64_t v593 = v68 & -1 - v67; // 0x409220
                function_404d10(v553, str3, v593);
                v592 = v593;
            }
        }
    }
    // 0x408903
    int64_t v594; // 0x405990
    if (*(int64_t *)v3 % 0xff000000000100 != 0) {
        int64_t v595 = function_40a0d0(v546, v552, str3); // 0x408d6b
        fd = fd3;
        v16 = v15;
        v18 = v551;
        v20 = str3;
        v22 = v548;
        v23 = 1;
        v25 = v546;
        v26 = v547;
        if ((int32_t)v595 == 0) {
            goto lab_0x408940;
        } else {
            goto lab_0x408d7e;
        }
    } else {
        // 0x408917
        if (*v401 != 0) {
            // 0x409143
            v594 = (int64_t)*(int32_t *)(a6 + 16);
            goto lab_0x409147;
        } else {
            // 0x408922
            if (*(char *)(a6 + 32) != 0) {
                // 0x40969b
                v594 = function_405960(v6) & 438 ^ 438;
                goto lab_0x409147;
            } else {
                // 0x40892d
                fd = fd3;
                v16 = v15;
                v18 = v551;
                v20 = v592;
                v22 = v548;
                v23 = 1;
                v25 = v546;
                v26 = v547;
                if (v67 != 0) {
                    int64_t v596 = v6; // 0x40960d
                    fd = fd3;
                    int64_t v597; // 0x405990
                    v16 = v597;
                    int64_t v598; // 0x405990
                    v18 = v598;
                    int64_t v599; // 0x405990
                    v20 = v599;
                    int64_t v600; // 0x405990
                    v22 = v600;
                    v23 = 1;
                    int64_t v601; // 0x405990
                    v25 = v601;
                    int64_t v602; // 0x405990
                    v26 = v602;
                    int32_t v603; // 0x405990
                    if ((v603 & -1 - (int32_t)function_405960(v596)) == 0) {
                        goto lab_0x408940;
                    } else {
                        int64_t v604 = v68; // 0x409628
                        int64_t v605 = function_404d10(v553, str3, v604); // 0x40963b
                        fd = fd3;
                        v16 = v597;
                        v18 = v598;
                        v20 = v604;
                        v22 = v600;
                        v23 = 1;
                        v25 = v601;
                        v26 = v602;
                        if ((int32_t)v605 == 0) {
                            goto lab_0x408940;
                        } else {
                            // 0x409650
                            function_40ea00(4, str3);
                            char * format19 = dcgettext(NULL, "preserving permissions for %s", 5); // 0x409674
                            int32_t * v606 = __errno_location(); // 0x40967c
                            int32_t err_num10 = *v606; // 0x40968d
                            error(0, err_num10, format19);
                            goto lab_0x408d7e;
                        }
                    }
                } else {
                    goto lab_0x408940;
                }
            }
        }
    }
  lab_0x40872b:;
    int64_t v607 = (int64_t)v565; // 0x408732
    int64_t v608 = 0x7fffffffffffffff - v569; // 0x40874d
    uint64_t v609 = function_40a980(v2 < 0x2000000000000001 ? v2 : 0x20000, v607, v608); // 0x408774
    v89 = 0;
    uint64_t v610 = v607 - 1 + v609; // 0x4087a0
    int64_t v611 = v610 - v610 % v609; // 0x4087ab
    int64_t v612 = v611 - 1 < 0x100000000 * v608 >> 32 ? v611 : v609;
    int64_t v613 = function_4112e0(v612 + v569); // 0x4087cf
    uint64_t v614 = v569 - 1 + v613; // 0x4087db
    int64_t v615 = 0x100000000 * v613 >> 32; // 0x4087de
    int64_t v616 = v614 % v569;
    int64_t v617 = v614 - v616; // 0x4087eb
    char * v618 = (char *)v612; // 0x4087fc
    int32_t v619 = 1; // 0x4087fc
    int64_t v620 = v615; // 0x4087fc
    int64_t v621 = v617; // 0x4087fc
    char v622 = 0; // 0x4087fc
    int64_t v623 = v616; // 0x4087fc
    if ((int32_t)v567 != 0) {
        goto lab_0x408dc9;
    } else {
        // 0x408802
        v89 = *(int32_t *)(a6 + 12) == 3;
        v570 = v612;
        v578 = 0;
        v576 = v615;
        v579 = v617;
        v577 = &length2;
        v574 = v616;
        v573 = v79;
        v571 = a1;
        v572 = v10;
        goto lab_0x408827;
    }
  lab_0x408dc9:
    // 0x408dc9
    v17 = v620;
    int32_t v624 = v619;
    int64_t v625 = v365; // 0x408dd0
    int64_t v626 = &length2; // 0x408de3
    int32_t length = v365; // 0x408dea
    char v627 = v58; // 0x408df1
    function_409ae0(v627, (int64_t *)&length2);
    v21 = 0x100000000 * a7 >> 32;
    int64_t v628 = v624 == 3 ? v564 : 0;
    int64_t v629 = (int64_t)v618;
    v24 = 0x100000000000000 * a1 >> 56;
    int64_t v630 = 0; // 0x408e25
    int64_t v631 = 0; // 0x408e25
    int64_t v632 = v57;
    int64_t v633 = v623;
    int64_t v634 = 0;
    char v635; // 0x405990
    char v636 = v635;
    v6 = v626;
    int64_t v637; // 0x405990
    int64_t v638; // 0x405990
    int64_t v639; // 0x405990
    int64_t v640; // 0x405990
    char v641; // bp-688, 0x405990
    int64_t v642; // 0x405990
    int64_t v643; // 0x405990
    while ((char)function_409b10(v626) != 0) {
        // 0x408e4a
        int64_t v644; // 0x405990
        v14 = v644;
        int64_t v645; // 0x405990
        uint64_t v646 = v645;
        int64_t v647 = v630; // 0x408e52
        int64_t v648 = v631; // 0x408e52
        char v649 = v636; // 0x408e52
        int64_t v650 = v634; // 0x408e52
        int64_t v651 = v633; // 0x408e52
        int64_t v652 = v630; // 0x408e52
        int64_t v653 = v631; // 0x408e52
        int64_t v654 = v632; // 0x408e52
        if (v646 != 0) {
            int64_t v655 = 0;
            int64_t v656 = 24 * v655 + v14; // 0x408f1e
            int64_t v657 = *(int64_t *)v656; // 0x408f22
            int64_t v658 = *(int64_t *)(v656 + 8); // 0x408f25
            int64_t v659 = v657; // 0x408f30
            int64_t v660 = v658; // 0x408f30
            int64_t v661; // 0x408f32
            if (v658 + v657 > v625) {
                // 0x408f32
                v661 = v657 - v625;
                v659 = v661 < 0 == ((v661 ^ v657) & (v657 ^ v625)) < 0 == (v661 != 0) ? v625 : v657;
                v660 = v625 - v659;
            }
            int64_t v662 = v660;
            int64_t offset = v659;
            int64_t v663 = offset - v647 - v648; // 0x408f48
            int64_t v664 = 0; // 0x408f4b
            int64_t v665 = v628; // 0x408f4b
            int64_t v666; // 0x408f98
            if (v663 != 0) {
                // 0x408f51
                if (lseek(fd2, (int32_t)offset, SEEK_SET) < 0) {
                    // 0x409567
                    v6 = 4;
                    function_40ea00(4, v24);
                    v643 = (int64_t)"cannot lseek %s";
                    goto lab_0x4095a1;
                }
                if (v624 == 1) {
                    // 0x408fd5
                    v6 = v553;
                    v664 = 0;
                    v665 = 0;
                    if ((char)function_404c20(v553, v663) == 0) {
                        // 0x409714
                        v6 = 0;
                        function_40ead0(0, 3, str3);
                        v643 = (int64_t)"%s: write failed";
                        goto lab_0x4095a1;
                    }
                } else {
                    // 0x408f83
                    v666 = function_405060(fd3, str3, (char)(v624 == 3), v663);
                    v664 = v666 & 0xffffffff;
                    v665 = v628;
                    if ((char)v666 == 0) {
                        // 0x408fa8
                        v19 = v624 == 3;
                        goto lab_0x408fc4;
                    }
                }
            }
            int64_t v667 = v664;
            char v668; // bp-689, 0x405990
            *(int64_t *)(v190 - 16) = (int64_t)&v668;
            v89 = 1;
            *(int64_t *)(v190 - 24) = (int64_t)&v641;
            *(int64_t *)(v190 - 32) = v662;
            *(int64_t *)(v190 - 40) = str3;
            *(int64_t *)(v190 - 48) = v24;
            int64_t v669 = function_405120(v627, v553, v621, v629, v665, 1, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90); // 0x408ec7
            v19 = v621;
            if ((char)v669 == 0) {
                goto lab_0x408fc4;
            }
            int64_t v670 = offset + (int64_t)v641; // 0x408edf
            int64_t v671 = v625; // 0x408ef3
            char v672 = 1; // 0x408ef3
            int64_t v673 = v621; // 0x408ef3
            while (v670 != v625) {
                int64_t v674 = v655 + 1 & 0xffffffff; // 0x408ef9
                v647 = offset;
                int64_t v675 = v674; // 0x408f0d
                v648 = v662;
                v671 = v670;
                v672 = v636;
                v673 = v662;
                if (v674 >= v646) {
                    // break -> 0x408ffa
                    break;
                }
                v655 = v675;
                v656 = 24 * v655 + v14;
                v657 = *(int64_t *)v656;
                v658 = *(int64_t *)(v656 + 8);
                v659 = v657;
                v660 = v658;
                if (v658 + v657 > v625) {
                    // 0x408f32
                    v661 = v657 - v625;
                    v659 = v661 < 0 == ((v661 ^ v657) & (v657 ^ v625)) < 0 == (v661 != 0) ? v625 : v657;
                    v660 = v625 - v659;
                }
                // 0x408f3f
                v662 = v660;
                offset = v659;
                v663 = offset - v647 - v648;
                v664 = 0;
                v665 = v628;
                if (v663 != 0) {
                    // 0x408f51
                    if (lseek(fd2, (int32_t)offset, SEEK_SET) < 0) {
                        // 0x409567
                        v6 = 4;
                        function_40ea00(4, v24);
                        v643 = (int64_t)"cannot lseek %s";
                        goto lab_0x4095a1;
                    }
                    if (v624 == 1) {
                        // 0x408fd5
                        v6 = v553;
                        v664 = 0;
                        v665 = 0;
                        if ((char)function_404c20(v553, v663) == 0) {
                            // 0x409714
                            v6 = 0;
                            function_40ead0(0, 3, str3);
                            v643 = (int64_t)"%s: write failed";
                            goto lab_0x4095a1;
                        }
                    } else {
                        // 0x408f83
                        v666 = function_405060(fd3, str3, (char)(v624 == 3), v663);
                        v664 = v666 & 0xffffffff;
                        v665 = v628;
                        if ((char)v666 == 0) {
                            // 0x408fa8
                            v19 = v624 == 3;
                            goto lab_0x408fc4;
                        }
                    }
                }
                // 0x408e85
                v667 = v664;
                *(int64_t *)(v190 - 16) = (int64_t)&v668;
                v89 = 1;
                *(int64_t *)(v190 - 24) = (int64_t)&v641;
                *(int64_t *)(v190 - 32) = v662;
                *(int64_t *)(v190 - 40) = str3;
                *(int64_t *)(v190 - 48) = v24;
                v669 = function_405120(v627, v553, v621, v629, v665, 1, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90);
                v19 = v621;
                if ((char)v669 == 0) {
                    goto lab_0x408fc4;
                }
                // 0x408ed8
                v670 = offset + (int64_t)v641;
                v671 = v625;
                v672 = 1;
                v673 = v621;
            }
            // 0x408ffa
            v649 = v672;
            v650 = v671;
            v651 = v673;
            v652 = offset;
            v653 = v662;
            v654 = v641 == 0 ? v667 : (int64_t)v668;
        }
        int64_t v676 = v654;
        int64_t v677 = v651;
        int64_t v678 = v650;
        v6 = v14;
        free((int64_t *)v14);
        v645 = 0;
        v644 = 0;
        v630 = v652;
        v631 = v653;
        if (v649 != 0) {
            // 0x409037
            v642 = v676;
            v639 = v678;
            v640 = v677;
            v638 = v21 & 0xffffffff;
            v637 = v10 % 256;
            goto lab_0x40905a;
        }
        v632 = v676;
        v633 = v677;
        v634 = v678;
        v636 = 0;
        v6 = v626;
    }
    int64_t v679 = v10 % 256; // 0x4096c4
    int64_t v680 = v21 & 0xffffffff; // 0x4096d3
    v642 = v632;
    v639 = v634;
    v640 = v633;
    v638 = v680;
    v637 = v679;
    int64_t v681; // 0x405990
    int64_t v682; // 0x405990
    int64_t v683; // 0x405990
    int64_t v684; // 0x405990
    int64_t v685; // 0x405990
    if (v636 != 0) {
        goto lab_0x40905a;
    } else {
        char v686; // 0x405990
        if (v686 == 0) {
            // 0x409759
            v6 = 0;
            function_40ead0(0, 3, v24);
            v681 = (int64_t)"%s: failed to get extents info";
            v685 = v17;
            v684 = v680;
            v682 = v24;
            v683 = v679;
            goto lab_0x409101;
        } else {
            // 0x4096e8
            v89 = *(int32_t *)(a6 + 12) == 3;
            v570 = v629;
            v578 = v622 != 0 ? v564 : 0;
            v576 = v17;
            v579 = v621;
            v577 = v626;
            v574 = v633;
            v573 = v680;
            v571 = v24;
            v572 = v679;
            goto lab_0x408827;
        }
    }
  lab_0x408d7e:
    // 0x408d7e
    fd = fd3;
    v16 = v15;
    v18 = v551;
    v20 = str3;
    v22 = v548;
    v23 = (int64_t)(*(char *)(a6 + 36) ^ 1);
    v25 = v546;
    v26 = v547;
    goto lab_0x408940;
  lab_0x4092b4:
    // 0x4092b4
    v618 = v565;
    v619 = *v581;
    v620 = v575;
    v621 = v580;
    v622 = v57;
    v623 = v582;
    goto lab_0x408dc9;
  lab_0x40905a:;
    int64_t v687 = length; // 0x40905a
    v551 = v17;
    v549 = v639;
    v550 = v640;
    v548 = v638;
    v546 = v24;
    v547 = v637;
    int64_t v688; // 0x405990
    int64_t v689; // 0x405990
    int64_t v690; // 0x405990
    int64_t v691; // 0x405990
    if (v639 >= v687 == v642 % 256 == 0) {
        goto lab_0x40887f;
    } else {
        int64_t v692 = v687 - v639; // 0x40905a
        v6 = v553;
        if (v624 == 1) {
            // 0x40977e
            v551 = v17;
            v549 = v639;
            v550 = v640;
            v548 = v638;
            v546 = v24;
            v547 = v637;
            v691 = v17;
            v690 = v638;
            v688 = v24;
            v689 = v637;
            if ((char)function_404c20(v553, v692) != 0) {
                goto lab_0x40887f;
            } else {
                goto lab_0x409504;
            }
        } else {
            // 0x409081
            v691 = v17;
            v690 = v638;
            v688 = v24;
            v689 = v637;
            if (ftruncate(fd3, length) != 0) {
                goto lab_0x409504;
            } else {
                // 0x4090a9
                v551 = v17;
                v549 = v639;
                v550 = v640;
                v548 = v638;
                v546 = v24;
                v547 = v637;
                if (v624 == 3 == v692 < 0 == ((v692 ^ v687) & (v639 ^ v687)) < 0 == (v692 != 0)) {
                    // 0x4090bf
                    v6 = v553;
                    if ((int32_t)function_404cd0(v553, v639, v692) >= 0) {
                        goto lab_0x40887f;
                    } else {
                        // 0x4090df
                        v6 = 4;
                        function_40ea00(4, str3);
                        v681 = (int64_t)"error deallocating %s";
                        v685 = v17;
                        v684 = v638;
                        v682 = v24;
                        v683 = v637;
                        goto lab_0x409101;
                    }
                } else {
                    goto lab_0x40887f;
                }
            }
        }
    }
  lab_0x408827:
    // 0x408827
    *(int64_t *)(v190 - 8) = v574;
    *(int64_t *)(v190 - 16) = (int64_t)&v641;
    *(int64_t *)(v190 - 24) = v577;
    v6 = v552;
    *(int64_t *)(v190 - 32) = -1;
    *(int64_t *)(v190 - 40) = str3;
    *(int64_t *)(v190 - 48) = v571;
    int64_t v693 = function_405120((char)fd2, v553, v579, v570, v578, v89, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90, (int64_t)&g90); // 0x408861
    fd = fd3;
    v16 = v15;
    v18 = v576;
    v20 = v579;
    v22 = v573;
    v23 = 0;
    v25 = v571;
    v26 = v572;
    if ((char)v693 == 0) {
        goto lab_0x408940;
    } else {
        // 0x408872
        v551 = v576;
        v549 = v570;
        v550 = v579;
        v548 = v573;
        v546 = v571;
        v547 = v572;
        if (v641 != 0) {
            // 0x4094ea
            v6 = v553;
            v551 = v576;
            v549 = v570;
            v550 = v579;
            v548 = v573;
            v546 = v571;
            v547 = v572;
            v691 = v576;
            v690 = v573;
            v688 = v571;
            v689 = v572;
            if (ftruncate(fd3, length2) >= 0) {
                goto lab_0x40887f;
            } else {
                goto lab_0x409504;
            }
        } else {
            goto lab_0x40887f;
        }
    }
  lab_0x409147:
    // 0x409147
    fd = fd3;
    v16 = v15;
    v18 = v551;
    v20 = v594;
    v22 = v548;
    v23 = (int32_t)function_40a160(str3) == 0;
    v25 = v546;
    v26 = v547;
    goto lab_0x408940;
  lab_0x409101:;
    char * format20 = dcgettext(NULL, (char *)v681, 5); // 0x409103
    error(0, *__errno_location(), format20);
    fd = fd3;
    v16 = v15;
    v18 = v685;
    v20 = (int64_t)format20;
    v22 = v684;
    v23 = 0;
    v25 = v682;
    v26 = v683;
    goto lab_0x408940;
  lab_0x409504:
    // 0x409504
    v6 = 4;
    function_40ea00(4, str3);
    v681 = (int64_t)"failed to extend %s";
    v685 = v691;
    v684 = v690;
    v682 = v688;
    v683 = v689;
    goto lab_0x409101;
  lab_0x4095a1:;
    char * format21 = dcgettext(NULL, (char *)v643, 5); // 0x4095a3
    error(0, *__errno_location(), format21);
    v19 = (int64_t)format21;
    goto lab_0x408fc4;
}
// Address range: 0x409810 - 0x40993c
int64_t function_409810(int64_t a1, int64_t a2, int32_t a3, int64_t a4, int64_t * a5, int32_t a6) {
    if (a4 == 0) {
        // 0x4098e1
        __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
        // 0x4098fa
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x409913
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (uint128_t)(int128_t)(uint64_t)(int64_t)"src/copy.c";
    }
    if ((uint32_t)(int32_t)a4 >= 4) {
        // 0x409913
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (uint128_t)(int128_t)(uint64_t)(int64_t)"src/copy.c";
    }
    int32_t v1 = *(int32_t *)(a4 + 12); // 0x409826
    if (v1 >= 4) {
        // 0x4098fa
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x409913
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
    }
    uint32_t v2 = *(int32_t *)(a4 + 52); // 0x409837
    if (v2 >= 3) {
        // 0x4098c8
        __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 2915, "valid_options");
        // 0x4098e1
        __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
        // 0x4098fa
        __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
        // 0x409913
        __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
        return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
    }
    // 0x409845
    if (*(char *)(a4 + 23) != 0) {
        // 0x409890
        if (*(char *)(a4 + 44) == 0) {
            goto lab_0x40984b;
        } else {
            // 0x409896
            __assert_fail("!(co->hard_link && co->symbolic_link)", "src/copy.c", 2916, "valid_options");
            goto lab_0x4098af;
        }
    } else {
        goto lab_0x40984b;
    }
  lab_0x40984b:
    if (v1 != 2 != (v2 == 2)) {
        char v3 = 0; // bp-9, 0x409856
        g63 = a1;
        g62 = a2;
        int64_t result = function_405990(a1, a2, (char)a3, 0, 0, a4, 1, (int64_t)&v3, (int64_t)a5, (int64_t)a6); // 0x409880
        return result;
    }
    goto lab_0x4098af;
  lab_0x4098af:
    // 0x4098af
    __assert_fail("! (co->reflink_mode == REFLINK_ALWAYS && co->sparse_mode != SPARSE_AUTO)", "src/copy.c", 2919, "valid_options");
    // 0x4098c8
    __assert_fail("VALID_REFLINK_MODE (co->reflink_mode)", "src/copy.c", 2915, "valid_options");
    // 0x4098e1
    __assert_fail("co != NULL", "src/copy.c", 2912, "valid_options");
    // 0x4098fa
    __assert_fail("VALID_SPARSE_MODE (co->sparse_mode)", "src/copy.c", 2914, "valid_options");
    // 0x409913
    __assert_fail("VALID_BACKUP_TYPE (co->backup_type)", "src/copy.c", 2913, "valid_options");
    return 0x41425f44494c4156 % (int128_t)(int64_t)"src/copy.c";
}
// Address range: 0x409940 - 0x40995c
int64_t function_409940(int64_t a1, int64_t a2) {
    if (a1 == a2) {
        // 0x409950
        return *(int64_t *)(a1 + 8) & -256 | 1;
    }
    // 0x40994a
    return 0;
}
// Address range: 0x409960 - 0x409976
int64_t function_409960(int64_t a1) {
    // 0x409960
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)a1);
    return &g90;
}
// Address range: 0x409980 - 0x4099c5
int64_t function_409980(int64_t a1, int64_t a2) {
    int64_t v1 = function_40c330(g64); // 0x4099a1
    int64_t result = 0; // 0x4099a9
    if (v1 != 0) {
        // 0x4099ab
        free((int64_t *)*(int64_t *)(v1 + 16));
        free((int64_t *)v1);
        result = &g90;
    }
    // 0x4099bf
    return result;
}
// Address range: 0x4099d0 - 0x409a07
int64_t function_4099d0(int64_t a1, int64_t a2) {
    int64_t v1 = a1; // bp-40, 0x4099d4
    int64_t v2 = function_40b8e0(g64, &v1); // 0x4099e7
    if (v2 == 0) {
        // 0x409a00
        return 0;
    }
    // 0x4099f1
    return *(int64_t *)(v2 + 16);
}
// Address range: 0x409a10 - 0x409a86
int64_t function_409a10(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_4112e0(24); // 0x409a28
    int64_t v2 = function_411510(a1); // 0x409a33
    int64_t * v3 = (int64_t *)v1; // 0x409a42
    *v3 = a2;
    int64_t * v4 = (int64_t *)(v1 + 16); // 0x409a45
    *v4 = v2;
    *(int64_t *)(v1 + 8) = a3;
    int64_t v5 = function_40c2f0(g64, v1); // 0x409a4d
    if (v5 == 0) {
        // 0x409a81
        function_411530(g64);
        // UNREACHABLE
    }
    int64_t result = 0; // 0x409a5f
    if (v1 != v5) {
        // 0x409a61
        free((int64_t *)*v4);
        free(v3);
        result = *(int64_t *)(v5 + 16);
    }
    // 0x409a76
    return result;
}
// Address range: 0x409a90 - 0x409ac6
int64_t function_409a90(int64_t a1, int64_t a2) {
    int64_t result = function_40bb50(103, 0, 0x409930, 0x409940, 0x409960); // 0x409aab
    g64 = result;
    if (result != 0) {
        // 0x409abc
        return result;
    }
    // 0x409ac1
    function_411530(103);
    // UNREACHABLE
}
// Address range: 0x409ad0 - 0x409adc
int64_t function_409ad0(void) {
    // 0x409ad0
    return function_40bd90(g64);
}
// Address range: 0x409ae0 - 0x409b08
int64_t function_409ae0(char a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    *(int32_t *)a2 = (int32_t)a1;
    *(int64_t *)(v1 + 40) = 0;
    *(int64_t *)(v1 + 8) = 0;
    *(int64_t *)(v1 + 24) = 0;
    *(int16_t *)(v1 + 32) = 0;
    *(int32_t *)(v1 + 16) = 1;
    return 0;
}
// Address range: 0x409b10 - 0x409df8
int64_t function_409b10(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 40); // 0x409b31
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x409b35
    int64_t v3; // bp-4120, 0x409b10
    int64_t v4 = &v3; // 0x409b3c
    int32_t v5; // 0x409b10
    int64_t v6 = v5;
    int64_t * v7 = (int64_t *)(a1 + 24);
    int64_t v8 = v5;
    char * v9 = (char *)(a1 + 33);
    int64_t v10; // bp-4152, 0x409b10
    __asm_rep_stosq_memset((char *)&v10, 0, 512);
    v10 = *v2;
    int64_t v11 = 0; // 0x409b7f
    int64_t v12 = *v1; // 0x409b7f
    int64_t result; // 0x409b10
    int64_t fd; // 0x409b10
    if (ioctl((int32_t)fd, -0x3fdf99f5) < 0) {
      lab_0x409d30_2:
        // 0x409d30
        result = 0;
        if (*v2 == 0) {
            // 0x409d3a
            *(char *)(a1 + 32) = 1;
            result = 0;
        }
      lab_0x409d19:
        // 0x409d19
        return result;
    }
    int64_t v13; // 0x409b10
    int64_t v14; // 0x409b10
    int64_t v15; // 0x409b10
    int64_t v16; // 0x409b10
    int64_t v17; // 0x409b10
    int64_t v18; // 0x409b10
    int64_t v19; // 0x409b10
    int64_t fd2; // 0x409b10
    int64_t v20; // 0x409b10
    while (true) {
      lab_0x409b85:
        if (v5 == 0) {
            // break -> 0x409da3
            break;
        }
        uint64_t v21 = *v7; // 0x409b94
        if (v21 > -1 - v6) {
            // 0x409dbc
            __assert_fail("scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", "src/extent-scan.c", 126, "extent_scan_read");
            return linkat(0x2f637273, (char *)0x2e6e6163732d746e, 0x63730063, "scan->ei_count <= SIZE_MAX - fiemap->fm_mapped_extents", 0x3e2d6e61);
        }
        int64_t v22 = v11;
        int64_t v23 = *v1; // 0x409baa
        fd2 = v23;
        uint64_t v24 = v21 + v6; // 0x409baf
        *v7 = v24;
        uint128_t v25 = 24 * (int128_t)v24; // 0x409bbd
        if ((int64_t)v25 < 0) {
            // 0x409db7
            function_411530(fd2);
            // UNREACHABLE
        }
        if (v25 % 0x1f0000000000000001 != 0) {
            // 0x409db7
            function_411530(fd2);
            // UNREACHABLE
        }
        int64_t v26 = function_411340(fd2, 24 * v24); // 0x409be0
        *v1 = v26;
        int64_t v27 = v26 + v12 - v23; // 0x409bef
        v18 = v27;
        v15 = v22;
        if (v3 > 0x7fffffffffffffff - v8) {
            goto lab_0x409c86;
        } else {
            // 0x409c10
            fd2 = 0;
            v13 = 0;
            v16 = v8;
            v19 = v4;
            v20 = v3;
            v17 = v27;
            v14 = v22;
            goto lab_0x409c15;
        }
    }
    // 0x409da3
    *v9 = 1;
    // 0x409d19
    return v6 & 0xffffff00 | (int64_t)(*v2 != 0);
  lab_0x409c86:
    // 0x409c86
    fd2 = (int64_t)"fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length";
    __assert_fail("fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length", "src/extent-scan.c", 141, "extent_scan_read");
    int64_t v28 = (int64_t)"fm_extents[i].fe_logical <= OFF_T_MAX - fm_extents[i].fe_length"; // 0x409c9f
    int64_t v29 = &g90; // 0x409c9f
    int64_t v30 = (int64_t)"extent_scan_read"; // 0x409c9f
    int64_t v31 = 141; // 0x409c9f
    int64_t v32 = v18; // 0x409c9f
    int64_t v33 = v15; // 0x409c9f
    goto lab_0x409ca0;
  lab_0x409ca0:;
    int64_t v34 = v33;
    int64_t v35 = v31;
    int64_t v36 = v30;
    int64_t v37 = v29;
    uint64_t v38 = *v2; // 0x409ca0
    int64_t v39 = v37; // 0x409ca8
    int64_t v40 = v36; // 0x409ca8
    int64_t v41 = v35; // 0x409ca8
    int64_t v42 = v32; // 0x409ca8
    int64_t v43 = v38; // 0x409ca8
    int64_t v44 = v34; // 0x409ca8
    int64_t v45; // 0x409b10
    int64_t v46; // 0x409b10
    int32_t v47; // 0x409b10
    int64_t v48; // 0x409b10
    int64_t v49; // 0x409b10
    if (v38 > v35) {
        goto lab_0x409c42;
    } else {
        // 0x409caa
        v45 = v28;
        v48 = v37;
        v49 = v35;
        v47 = *(int32_t *)(v36 + 40);
        v46 = v34;
        goto lab_0x409cae;
    }
  lab_0x409c15:;
    int64_t v50 = v14;
    int64_t v51 = v17;
    int64_t v52 = v20;
    int64_t v53 = v19;
    int64_t v54 = v16;
    int64_t v55 = v13;
    v28 = v55;
    v29 = v54;
    v30 = v53;
    v31 = v52;
    v32 = v51;
    v33 = v50;
    int64_t v56; // 0x409b10
    int64_t v57; // 0x409b10
    if ((int32_t)v50 == 0) {
        goto lab_0x409ca0;
    } else {
        int32_t v58 = *(int32_t *)(v53 + 40); // 0x409c1e
        int64_t * v59 = (int64_t *)(v51 + 8); // 0x409c22
        int64_t v60 = *v59; // 0x409c22
        int64_t v61 = *(int64_t *)v51 + v60; // 0x409c2c
        int32_t * v62 = (int32_t *)(v51 + 16); // 0x409c33
        if (*v62 != (v58 & -2) || v52 != v61) {
            // 0x409c3d
            v39 = v54;
            v40 = v53;
            v41 = v52;
            v42 = v51;
            v43 = v61;
            v44 = v50;
            v45 = v55;
            v48 = v54;
            v49 = v52;
            v47 = v58;
            v46 = v50;
            if (v61 > v52) {
                goto lab_0x409c42;
            } else {
                goto lab_0x409cae;
            }
        } else {
            // 0x409d51
            *v62 = v58;
            fd2 = fd2 + 1 & 0xffffffff;
            *v59 = v60 + v54;
            v57 = v51;
            v56 = v50;
            goto lab_0x409c5e;
        }
    }
  lab_0x409c42:
    // 0x409c42
    if (v43 - v41 < v39) {
        goto lab_0x409d30_2;
    }
    // 0x409c51
    *(int64_t *)v40 = v43;
    *(int64_t *)(v40 + 16) = v41 + v39 - v43;
    v57 = v42;
    v56 = v44;
    goto lab_0x409c5e;
  lab_0x409c5e:;
    int64_t v63 = v56;
    int64_t v64 = v57;
    int64_t v65 = fd2; // 0x409c61
    int64_t v66 = v64; // 0x409c61
    int64_t v67 = v63; // 0x409c61
    int64_t v68; // 0x409b10
    int64_t v69; // 0x409b10
    int64_t v70; // 0x409b10
    if (v5 <= (int32_t)fd2) {
        // 0x409c5e
        v68 = v64 + 16;
        v70 = v64;
        v69 = v63;
        goto lab_0x409cd5;
    } else {
        goto lab_0x409c63;
    }
  lab_0x409cae:;
    int64_t v71 = v45 + 1; // 0x409cb1
    fd2 = v71 & 0xffffffff;
    int64_t v72 = v46 + 1 & 0xffffffff; // 0x409cb4
    int64_t v73 = *v1 + 24 * (v46 & 0xffffffff); // 0x409cc1
    *(int64_t *)v73 = v49;
    *(int64_t *)(v73 + 8) = v48;
    int64_t v74 = v73 + 16;
    *(int32_t *)v74 = v47;
    v68 = v74;
    v70 = v73;
    v69 = v72;
    if (v5 > (int32_t)v71) {
        // 0x409cae
        v65 = fd2;
        v66 = v73;
        v67 = v72;
        goto lab_0x409c63;
    } else {
        goto lab_0x409cd5;
    }
  lab_0x409c63:;
    int64_t v75 = 56 * (v65 & 0xffffffff) + v4; // 0x409c73
    int64_t v76 = *(int64_t *)(v75 + 16); // 0x409c77
    uint64_t v77 = *(int64_t *)v75; // 0x409c7b
    v13 = v65;
    v16 = v76;
    v19 = v75;
    v20 = v77;
    v17 = v66;
    v14 = v67;
    v18 = v66;
    v15 = v67;
    if (v77 > 0x7fffffffffffffff - v76) {
        goto lab_0x409c86;
    } else {
        goto lab_0x409c15;
    }
  lab_0x409cd5:
    // 0x409cd5
    v11 = v69;
    if (*(char *)v68 % 2 != 0) {
        // 0x409d90
        *v9 = 1;
        // 0x409d96
        *v7 = v11 & 0xffffffff;
        result = 1;
        goto lab_0x409d19;
    }
    char v78 = *v9; // 0x409cdf
    uint32_t v79 = (int32_t)v11; // 0x409ce5
    if (v79 >= 73) {
        if (v78 != 0) {
            // 0x409d96
            *v7 = v11 & 0xffffffff;
            result = 1;
            goto lab_0x409d19;
        } else {
            int64_t v80 = v11 + 0xffffffff & 0xffffffff; // 0x409cf3
            *v7 = v80;
            int64_t v81 = *v1 + 24 * v80;
            *v2 = *(int64_t *)(v81 - 24) + *(int64_t *)(v81 - 16);
            result = 1;
            goto lab_0x409d19;
        }
    }
    // 0x409d64
    v12 = v70;
    *v7 = v11 & 0xffffffff;
    if (v78 != 0) {
        // 0x409d19
        return 1;
    }
    int64_t v82 = *(int64_t *)v12 + *(int64_t *)(v12 + 8); // 0x409d74
    *v2 = v82;
    if (v79 == 72) {
        // 0x409d19
        return 1;
    }
    // 0x409d70
    __asm_rep_stosq_memset((char *)&v10, 0, 512);
    v10 = v82;
    if (ioctl(*(int32_t *)&fd2, -0x3fdf99f5) < 0) {
        goto lab_0x409d30_2;
    }
    goto lab_0x409b85;
}
// Address range: 0x409e00 - 0x409e64
int64_t function_409e00(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = function_40ad40(a1, v1) - a1; // 0x409e0f
    uint64_t size = v2 + 9; // 0x409e12
    int64_t result = v1; // 0x409e20
    if (size >= 257) {
        int64_t * mem = malloc((int32_t)size); // 0x409e22
        result = (int64_t)mem;
        if (mem == NULL) {
            // 0x409e54
            return 0;
        }
    }
    int64_t * v3 = mempcpy((int64_t *)result, (int64_t *)a1, (int32_t)v2); // 0x409e38
    *v3 = 0x5858585858587543;
    *(char *)((int64_t)v3 + 8) = 0;
    // 0x409e54
    return result;
}
// Address range: 0x409e70 - 0x409e81
int64_t function_409e70(int64_t path2, int64_t a2) {
    uint32_t path1 = *(int32_t *)(a2 + 8); // 0x409e76
    return symlinkat((char *)(int64_t)path1, path1, (char *)path2);
}
// Address range: 0x409e90 - 0x409fc5
int64_t function_409e90(int64_t fd, int64_t path1, int64_t a3, int64_t a4, int32_t flag, int64_t a6) {
    int32_t fd2 = a3; // 0x409eb4
    char * path2 = (char *)a4; // 0x409eb4
    uint32_t v1 = linkat((int32_t)fd, (char *)path1, fd2, path2, flag); // 0x409eb4
    int64_t result = v1; // 0x409ebe
    if ((char)a6 != 1 || v1 == 0) {
        // 0x409ed4
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x409eca
    if (*v2 != 17) {
        // 0x409ed4
        return result;
    }
    // 0x409ef0
    int64_t v3; // bp-312, 0x409e90
    int64_t v4 = function_409e00(a4, &v3); // 0x409efd
    if (v4 == 0) {
        // 0x409ed4
        return 0xffffffff;
    }
    int64_t v5 = 0x100000000 * fd >> 32; // bp-344, 0x409f23
    int64_t v6 = function_40fb10(v4, 0, &v5, 0x409de0, 6); // 0x409f36
    int64_t v7 = 0x100000000 * (int64_t)v2 >> 32; // 0x409f3b
    int32_t v8; // 0x409e90
    if ((int32_t)v6 == 0) {
        char * path = (char *)v4; // 0x409f8f
        int32_t v9 = 0; // 0x409f9e
        if (renameat(fd2, path, fd2, path2) != 0) {
            // 0x409fa0
            v9 = *(int32_t *)v7;
        }
        // 0x409fa3
        unlinkat(fd2, path, 0);
        v8 = v9;
    } else {
        // 0x409f44
        v8 = *(int32_t *)v7;
    }
    // 0x409f47
    if (v4 != (int64_t)&v3) {
        // 0x409f51
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x409f6b
    if (v8 != 0) {
        // 0x409f71
        *(int32_t *)v7 = v8;
        result2 = 0xffffffff;
    }
    // 0x409ed4
    return result2;
}
// Address range: 0x409fd0 - 0x40a0d0
int64_t function_409fd0(int64_t path1, int64_t a2, int64_t a3, char a4) {
    int32_t fd = a2; // 0x409fec
    char * path2 = (char *)a3; // 0x409fec
    uint32_t v1 = symlinkat((char *)path1, fd, path2); // 0x409fec
    int64_t result = v1; // 0x409ff1
    if (a4 != 1 || v1 == 0) {
        // 0x40a00a
        return result;
    }
    int32_t * v2 = __errno_location(); // 0x409ffd
    if (*v2 != 17) {
        // 0x40a00a
        return result;
    }
    // 0x40a020
    int64_t v3; // bp-312, 0x409fd0
    int64_t v4 = function_409e00(a3, &v3); // 0x40a02b
    if (v4 == 0) {
        // 0x40a00a
        return 0xffffffff;
    }
    int64_t v5 = &v3; // 0x40a020
    int64_t v6 = path1; // bp-328, 0x40a04f
    int32_t v7; // 0x409fd0
    if ((int32_t)function_40fb10(v4, 0, &v6, 0x409e70, 6) == 0) {
        char * path = (char *)v4; // 0x40a08a
        if (renameat(fd, path, fd, path2) == 0) {
            // 0x40a093
            if (v4 != v5) {
                // 0x40a098
                free((int64_t *)v4);
            }
            // 0x40a00a
            return 1;
        }
        // 0x40a0a8
        unlinkat(fd, path, 0);
        v7 = *v2;
    } else {
        // 0x40a060
        v7 = *v2;
    }
    // 0x40a063
    if (v4 != v5) {
        // 0x40a068
        free((int64_t *)v4);
    }
    int64_t result2 = 1; // 0x40a073
    if (v7 != 0) {
        // 0x40a0b9
        *v2 = v7;
        result2 = 0xffffffff;
    }
    // 0x40a00a
    return result2;
}
// Address range: 0x40a0d0 - 0x40a15a
int64_t function_40a0d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a0d0
    int64_t v1; // 0x40a0d0
    int64_t v2 = function_40d070(a1, a2, a3, v1, v1); // 0x40a0da
    int64_t result = v2 & 0xffffffff; // 0x40a0df
    int32_t v3 = v2; // 0x40a0e1
    if (v3 == -2) {
        // 0x40a130
        error(0, *__errno_location(), "%s", (char *)function_40ec50(a1));
        return result;
    }
    if (v3 == -1) {
        // 0x40a0eb
        function_40ec50(a3);
        error(0, *__errno_location(), dcgettext(NULL, "preserving permissions for %s", 5));
    }
    // 0x40a120
    return result;
}
// Address range: 0x40a160 - 0x40a1bc
int64_t function_40a160(int64_t a1) {
    // 0x40a160
    int64_t v1; // 0x40a160
    int64_t v2 = function_40d0b0(a1, v1, (int32_t)v1); // 0x40a167
    int64_t result = v2 & 0xffffffff; // 0x40a16c
    if ((int32_t)v2 == 0) {
        // 0x40a172
        return result;
    }
    // 0x40a180
    function_40ec50(a1);
    error(0, *__errno_location(), dcgettext(NULL, "setting permissions for %s", 5));
    return result;
}
// Address range: 0x40a1c0 - 0x40a2af
int64_t function_40a1c0(int64_t path, uint64_t a2) {
    int64_t size = a2 >= 1025 ? 1025 : a2 + 1; // 0x40a1f9
    int64_t * mem = malloc((int32_t)size); // 0x40a203
    int64_t result = 0; // 0x40a20e
    while (mem != NULL) {
        uint64_t buf_size = size;
        int64_t * buf = mem;
        int32_t v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size); // 0x40a219
        if (v1 < 0) {
            // 0x40a278
            if (*__errno_location() != 34) {
                // 0x40a282
                free(buf);
                result = 0;
                return result;
            }
        }
        uint64_t v2 = (int64_t)v1; // 0x40a219
        int64_t v3; // 0x40a1c0
        if (buf_size > v2) {
            // 0x40a290
            v3 = (int64_t)buf;
            *(char *)(v2 + v3) = 0;
            result = v3;
            return result;
        }
        // 0x40a22b
        free(buf);
        while (buf_size <= 0x3fffffffffffffff) {
            int64_t size2 = 2 * buf_size; // 0x40a238
            int64_t * mem2 = malloc((int32_t)size2); // 0x40a23e
            if (mem2 == NULL) {
                // 0x40a24b
                result = (int64_t)mem2;
                return result;
            }
            buf_size = size2;
            buf = mem2;
            v1 = readlink((char *)path, (char *)buf, (int32_t)buf_size);
            if (v1 < 0) {
                // 0x40a278
                if (*__errno_location() != 34) {
                    // 0x40a282
                    free(buf);
                    result = 0;
                    return result;
                }
            }
            // 0x40a226
            v2 = (int64_t)v1;
            if (buf_size > v2) {
                // 0x40a290
                v3 = (int64_t)buf;
                *(char *)(v2 + v3) = 0;
                result = v3;
                return result;
            }
            // 0x40a22b
            free(buf);
        }
        // 0x40a260
        size = 0x7fffffffffffffff;
        if (buf_size > 0x7ffffffffffffffe) {
            // 0x40a2a0
            *__errno_location() = 12;
            result = 0;
            return result;
        }
        mem = malloc((int32_t)size);
        result = 0;
    }
  lab_0x40a24b_2:
    // 0x40a24b
    return result;
}
// Address range: 0x40a2b0 - 0x40a37e
int64_t function_40a2b0(int64_t path, int64_t a2) {
    int64_t v1 = function_40ad40(path, a2); // 0x40a2c4
    uint64_t result = function_40ada0(v1); // 0x40a2cf
    if (result < 15) {
        // 0x40a2da
        return result;
    }
    int16_t * v2 = (int16_t *)v1; // 0x40a2f5
    *v2 = 46;
    int32_t * v3 = __errno_location(); // 0x40a301
    *v3 = 0;
    int32_t v4 = pathconf((char *)path, _PC_NAME_MAX); // 0x40a317
    int64_t result2 = v4; // 0x40a317
    int64_t v5; // 0x40a2b0
    if (v4 < 0) {
        // 0x40a370
        v5 = 255;
        if (*v3 != 0) {
            goto lab_0x40a324;
        } else {
            // 0x40a321
            v5 = result2;
            goto lab_0x40a324;
        }
    } else {
        // 0x40a321
        v5 = result2;
        goto lab_0x40a324;
    }
  lab_0x40a324:;
    uint64_t v6 = v5;
    if (result <= v6) {
        // 0x40a2da
        return result2;
    }
    int64_t v7 = a2 + path; // 0x40a32e
    uint64_t result3 = v7 - v1; // 0x40a335
    *(char *)(result3 >= v6 ? v1 - 1 + v6 : v7) = 126;
    *(char *)((result3 >= v6 ? v6 : result3 + 1) + v1) = 0;
    return result3;
}
// Address range: 0x40a380 - 0x40a3d4
int64_t function_40a380(int64_t a1) {
    int64_t result = a1; // 0x40a387
    int64_t result2; // 0x40a380
    if (a1 == 0) {
        char * env_val = getenv("SIMPLE_BACKUP_SUFFIX"); // 0x40a3c5
        result = (int64_t)env_val;
        result2 = result;
        if (env_val == NULL) {
            // 0x40a38e
            g65 = (char *)&g4;
            return result;
        }
    }
    char * v1 = (char *)result; // 0x40a389
    if (*v1 == 0) {
        // 0x40a38e
        g65 = (char *)&g4;
        return result2;
    }
    // 0x40a3a0
    int64_t v2; // 0x40a380
    int64_t result3 = function_40ad40(result, v2); // 0x40a3a3
    if (result3 != result) {
        // 0x40a38e
        g65 = (char *)&g4;
        return result3;
    }
    // 0x40a3ad
    g65 = v1;
    return result3;
}
// Address range: 0x40a3e0 - 0x40a8a1
int64_t function_40a3e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t str = function_40ad40(a1, a2); // 0x40a3fe
    int32_t len = strlen((char *)str); // 0x40a409
    int64_t v1 = (int64_t)g65; // 0x40a411
    int64_t str2 = v1; // 0x40a423
    if (g65 == NULL) {
        // 0x40a890
        function_40a380(v1);
        str2 = (int64_t)g65;
    }
    int64_t v2 = str - a1; // 0x40a40e
    int64_t v3 = len + (int32_t)v2; // 0x40a42e
    uint64_t v4 = (int64_t)strlen((char *)str2) + 1; // 0x40a433
    int64_t v5 = v3 + 1; // 0x40a43b
    int32_t size = (int32_t)((v4 >= 9 ? v4 : 9) + v5); // 0x40a460
    int64_t * mem = malloc(size); // 0x40a460
    int64_t result = (int64_t)mem; // 0x40a460
    if (mem == NULL) {
        // 0x40a73d
        return result;
    }
    int32_t v6 = v4; // 0x40a43f
    int64_t v7 = v3 + 2;
    int64_t v8 = 0x100000000 * a2 >> 32;
    int64_t dirp2 = 0;
    int64_t v9 = v2; // 0x40a3e0
    int64_t result2 = result;
    struct __dirstream * v10; // 0x40a3e0
    int64_t v11; // 0x40a3e0
    int64_t v12; // 0x40a3e0
    int64_t v13; // 0x40a3e0
    int64_t v14; // 0x40a3e0
    int64_t v15; // 0x40a3e0
    int64_t v16; // 0x40a3e0
    int64_t v17; // 0x40a3e0
    int64_t v18; // 0x40a3e0
    int64_t v19; // 0x40a3e0
    int32_t v20; // 0x40a486
    int64_t v21; // 0x40a498
    while (true) {
      lab_0x40a474:
        // 0x40a474
        v15 = result2;
        v14 = v9;
        int64_t v22 = dirp2;
        v18 = v8;
        memcpy((int64_t *)v15, (int64_t *)a1, (int32_t)v5);
        v20 = v18;
        if (v20 == 1) {
            // 0x40a760
            memcpy((int64_t *)(v15 + v3), (int64_t *)g65, v6);
            v19 = v18;
            v13 = v22;
            v17 = v15;
            goto lab_0x40a6cb;
        } else {
            int64_t v23 = v15 + v14; // 0x40a491
            v21 = function_40ada0(v23);
            if (v22 == 0) {
                int16_t * v24 = (int16_t *)v23; // 0x40a7cd
                int16_t v25 = *v24; // 0x40a7cd
                *v24 = 46;
                int64_t v26 = function_40abc0(); // 0x40a7db
                int64_t v27 = v21 + v23; // 0x40a7e0
                if (v26 == 0) {
                    // 0x40a840
                    __errno_location();
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v12 = 0;
                    v16 = v15;
                    goto lab_0x40a6b0;
                } else {
                    // 0x40a7ec
                    *v24 = v25;
                    *(int32_t *)v27 = 0x7e317e2e;
                    *(char *)(v27 + 4) = 0;
                    v10 = (struct __dirstream *)v26;
                    v11 = v26;
                    goto lab_0x40a4b1;
                }
            } else {
                struct __dirstream * dirp = (struct __dirstream *)v22;
                rewinddir(dirp);
                v10 = dirp;
                v11 = v22;
                goto lab_0x40a4b1;
            }
        }
    }
  lab_0x40a878_2:
    // 0x40a878
    if (dirp2 != 0) {
        // 0x40a881
        closedir((struct __dirstream *)dirp2);
    }
    // 0x40a73d
    return result2;
  lab_0x40a6b0:;
    int64_t v28 = v16;
    v19 = v18;
    v13 = v12;
    v17 = v28;
    int64_t v29 = v28; // 0x40a3e0
    int64_t v30 = v12; // 0x40a3e0
    int64_t v31 = v28; // 0x40a3e0
    int64_t v32 = v12; // 0x40a3e0
    int64_t v33 = v18; // 0x40a3e0
    int64_t * v34; // 0x40a3e0
    int64_t v35; // 0x40a3e0
    switch ((int32_t)v35) {
        case 2: {
            goto lab_0x40a780;
        }
        case 3: {
            // 0x40a808
            v34 = (int64_t *)v28;
          lab_0x40a808:
            // 0x40a808
            free(v34);
            *__errno_location() = 12;
            // 0x40a73d
            return 0;
        }
        case 1: {
            goto lab_0x40a7b0;
        }
        default: {
            goto lab_0x40a6cb;
        }
    }
  lab_0x40a62a:;
    // 0x40a62a
    int64_t v36; // 0x40a3e0
    int64_t v37 = v36;
    int32_t v38; // 0x40a3e0
    int32_t v39 = v38;
    int64_t v40 = v37 + v3; // 0x40a63e
    *(int16_t *)v40 = 0x7e2e;
    int64_t v41 = v40 + 2; // 0x40a644
    *(char *)v41 = 48;
    uint64_t v42; // 0x40a3e0
    int64_t str4; // 0x40a51d
    int64_t v43; // 0x40a5b4
    int64_t v44 = v42 - 1 + (int64_t)memcpy((int64_t *)(v41 + v43), (int64_t *)str4, (int32_t)v42 + 2); // 0x40a669
    char * v45 = (char *)v44;
    char v46 = *v45; // 0x40a669
    int64_t v47 = v44; // 0x40a674
    char * v48 = v45; // 0x40a674
    char v49 = v46; // 0x40a674
    if (v46 == 57) {
        *(char *)v47 = 48;
        int64_t v50 = v47 - 1; // 0x40a683
        char * v51 = (char *)v50;
        char v52 = *v51; // 0x40a687
        v47 = v50;
        v48 = v51;
        v49 = v52;
        while (v52 == 57) {
            // 0x40a680
            *(char *)v47 = 48;
            v50 = v47 - 1;
            v51 = (char *)v50;
            v52 = *v51;
            v47 = v50;
            v48 = v51;
            v49 = v52;
        }
    }
    // 0x40a68f
    *v48 = v49 + 1;
    struct __dirstream * dirp3; // 0x40a3e0
    struct dirent * v53 = readdir(dirp3); // 0x40a69a
    int64_t v54; // 0x40a3e0
    v12 = v54;
    v16 = v37;
    if (v53 == NULL) {
        // break (via goto) -> 0x40a6b0
        goto lab_0x40a6b0;
    }
    // 0x40a4e9
    int64_t v55; // 0x40a5c1
    int32_t v56 = v55;
    int64_t str3 = (int64_t)v53 + 19; // 0x40a4e9
    int32_t v57 = v56; // 0x40a4fa
    int32_t v58 = v39; // 0x40a4fa
    int64_t v59 = v43; // 0x40a4fa
    int64_t v60 = v37; // 0x40a4fa
    uint64_t v61; // 0x40a4c9
    if (v61 > (int64_t)strlen((char *)str3)) {
        // break -> 0x40a4d8
        goto lab_0x40a4d8_2;
    }
    // 0x40a4fc
    int32_t n; // 0x40a3e0
    int32_t memcmp_rc = memcmp((int64_t *)(v37 + v14), (int64_t *)str3, n); // 0x40a50f
    v57 = v56;
    v58 = v39;
    v59 = v43;
    v60 = v37;
    int32_t v62 = v56; // 0x40a516
    int32_t v63 = v39; // 0x40a516
    int64_t v64 = v43; // 0x40a516
    int64_t v65 = v37; // 0x40a516
    int64_t v66 = str3; // 0x40a516
    if (memcmp_rc != 0) {
        // break -> 0x40a4d8
        goto lab_0x40a4d8_2;
    }
    goto lab_0x40a518;
  lab_0x40a5fd:;
    // 0x40a5fd
    int64_t v91; // 0x40a3e0
    int32_t v92 = v91;
    int64_t v67; // 0x40a3e0
    int64_t * v93 = (int64_t *)v67;
    int64_t * mem2 = realloc(v93, v92); // 0x40a60f
    v38 = v92;
    v36 = (int64_t)mem2;
    v34 = v93;
    if (mem2 == NULL) {
        goto lab_0x40a808;
    }
    goto lab_0x40a62a;
  lab_0x40a6cb:
    // 0x40a6cb
    result2 = v17;
    dirp2 = v13;
    if ((char)a3 == 0) {
        // break -> 0x40a878
        goto lab_0x40a878_2;
    }
    // 0x40a6d6
    v8 = v19;
    int64_t v94; // 0x40a3e0
    int64_t v95; // 0x40a3e0
    if (dirp2 == 0) {
        goto lab_0x40a750;
    } else {
        int32_t v96 = dirfd((struct __dirstream *)dirp2); // 0x40a6de
        v94 = result2 + v14;
        v95 = v96;
        v9 = v14;
        if (v96 < 0) {
            goto lab_0x40a750;
        } else {
            goto lab_0x40a6ed;
        }
    }
  lab_0x40a750:
    // 0x40a750
    v94 = result2;
    v95 = 0xffffff9c;
    v9 = 0;
    goto lab_0x40a6ed;
  lab_0x40a4b1:
    // 0x40a4b1
    v54 = v11;
    dirp3 = v10;
    struct dirent * v101 = readdir(dirp3); // 0x40a4db
    v29 = v15;
    v30 = v54;
    if (v101 == NULL) {
        goto lab_0x40a780;
    } else {
        // 0x40a4e9
        v61 = v21 + 4;
        n = (int32_t)v21 + 2;
        int64_t v70 = n;
        struct dirent * v102 = v101; // 0x40a4db
        int64_t v103 = v15;
        int64_t v104 = 2;
        int32_t v105 = size;
        int32_t v106 = 1;
        while (true) {
            int32_t v107 = v106;
            int32_t v108 = v105;
            int64_t v109 = v104;
            int64_t v110 = v103;
            int64_t str5 = (int64_t)v102 + 19; // 0x40a4e9
            v57 = v107;
            v58 = v108;
            v59 = v109;
            v60 = v110;
            if (v61 <= (int64_t)strlen((char *)str5)) {
                int32_t memcmp_rc3 = memcmp((int64_t *)(v110 + v14), (int64_t *)str5, n); // 0x40a50f
                v57 = v107;
                v58 = v108;
                v59 = v109;
                v60 = v110;
                v62 = v107;
                v63 = v108;
                v64 = v109;
                v65 = v110;
                v66 = str5;
                if (memcmp_rc3 == 0) {
                    while (true) {
                      lab_0x40a518:
                        // 0x40a518
                        v67 = v65;
                        int64_t v68 = v64;
                        int32_t v69 = v63;
                        int32_t n2 = v62;
                        str4 = v66 + v70;
                        char v71 = *(char *)str4; // 0x40a520
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (v71 >= 58) {
                            // break -> 0x40a4d8
                            break;
                        }
                        int64_t v72 = str4 + 1; // 0x40a52b
                        char v73 = *(char *)v72; // 0x40a52b
                        int64_t v74 = v71 == 57; // 0x40a536
                        int64_t v75 = (int64_t)v73 & 0xffffffff; // 0x40a53a
                        int64_t v76 = v75; // 0x40a542
                        int64_t v77 = v74; // 0x40a542
                        int64_t v78 = v75; // 0x40a542
                        int64_t v79 = 1; // 0x40a542
                        int64_t v80 = v74; // 0x40a542
                        if (v73 == 57 || (int32_t)v73 < 57) {
                            int64_t v81 = 2; // 0x40a54d
                            char v82 = *(char *)(v81 + str4); // 0x40a551
                            int64_t v83 = v77 & (int64_t)((char)v76 == 57);
                            int64_t v84 = (int64_t)v82 & 0xffffffff; // 0x40a558
                            int64_t v85 = v81; // 0x40a560
                            v77 = v83;
                            v78 = v84;
                            v79 = v81;
                            v80 = v83;
                            while (v82 == 57 || (int32_t)v82 < 57) {
                                // 0x40a548
                                v81 = v85 + 1;
                                v82 = *(char *)(v81 + str4);
                                v83 = v77 & (int64_t)((char)v84 == 57);
                                v84 = (int64_t)v82 & 0xffffffff;
                                v85 = v81;
                                v77 = v83;
                                v78 = v84;
                                v79 = v81;
                                v80 = v83;
                            }
                        }
                        // 0x40a562
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if ((char)v78 != 126) {
                            // break -> 0x40a4d8
                            break;
                        }
                        // 0x40a56a
                        v42 = v79;
                        v57 = n2;
                        v58 = v69;
                        v59 = v68;
                        v60 = v67;
                        if (*(char *)(v42 + v72) != 0) {
                            // break -> 0x40a4d8
                            break;
                        }
                        int64_t v86 = v80;
                        uint64_t v87 = (int64_t)n2; // 0x40a575
                        int64_t v88 = v86; // 0x40a57d
                        if (v42 <= v87) {
                            // 0x40a57f
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            if (v42 != v87) {
                                // break -> 0x40a4d8
                                break;
                            }
                            int32_t memcmp_rc2 = memcmp((int64_t *)(v7 + v67), (int64_t *)str4, n2); // 0x40a59c
                            v57 = n2;
                            v58 = v69;
                            v59 = v68;
                            v60 = v67;
                            v88 = v86 % 256;
                            if (memcmp_rc2 >= 0 == (memcmp_rc2 != 0)) {
                                // break -> 0x40a4d8
                                break;
                            }
                        }
                        // 0x40a5b4
                        v43 = v88 % 256;
                        v55 = v43 + v42;
                        int64_t v89 = v3 + 4 + v55; // 0x40a5ca
                        v38 = v69;
                        v36 = v67;
                        if (v89 > (int64_t)v69) {
                            int64_t v90 = 2 * v89; // 0x40a5e6
                            if (v90 < 0) {
                                // 0x40a828
                                v91 = v89;
                                goto lab_0x40a5fd;
                            } else {
                                // 0x40a5ef
                                v91 = v90;
                                if (v89 < 0) {
                                    // 0x40a828
                                    v91 = v89;
                                    goto lab_0x40a5fd;
                                } else {
                                    goto lab_0x40a5fd;
                                }
                            }
                        } else {
                            goto lab_0x40a62a;
                        }
                    }
                }
            }
          lab_0x40a4d8_2:
            // 0x40a4d8
            v103 = v60;
            v104 = v59;
            v105 = v58;
            v106 = v57;
            v102 = readdir(dirp3);
            v12 = v54;
            v16 = v103;
            if (v102 == NULL) {
                // break -> 0x40a6b0
                break;
            }
        }
        goto lab_0x40a6b0;
    }
  lab_0x40a6ed:
    // 0x40a6ed
    if ((int32_t)function_40ec70(0xffffff9c, a1, v95, v94, (int64_t)((int32_t)v8 != 1)) == 0) {
        // break -> 0x40a878
        goto lab_0x40a878_2;
    }
    int32_t * v97 = __errno_location(); // 0x40a710
    int32_t v98 = *v97; // 0x40a715
    if (v98 != 17) {
        if (dirp2 != 0) {
            // 0x40a728
            closedir((struct __dirstream *)dirp2);
        }
        // 0x40a730
        free((int64_t *)result2);
        *v97 = v98;
        // 0x40a73d
        return 0;
    }
    goto lab_0x40a474;
  lab_0x40a780:;
    int64_t v99 = v30;
    int64_t v100 = v29;
    v31 = v100;
    v32 = v99;
    v33 = v18;
    if (v20 == 2) {
        // 0x40a787
        memcpy((int64_t *)(v100 + v3), (int64_t *)g65, v6);
        v31 = v100;
        v32 = v99;
        v33 = 1;
    }
    goto lab_0x40a7b0;
  lab_0x40a7b0:
    // 0x40a7b0
    function_40a2b0(v31, v3);
    v19 = v33;
    v13 = v32;
    v17 = v31;
    goto lab_0x40a6cb;
}
// Address range: 0x40a8b0 - 0x40a8ba
int64_t function_40a8b0(int64_t a1, int32_t a2) {
    // 0x40a8b0
    return function_40a3e0(a1, (int64_t)a2, 1);
}
// Address range: 0x40a8c0 - 0x40a8ec
int64_t function_40a8c0(void) {
    // 0x40a8c0
    int64_t v1; // 0x40a8c0
    int64_t v2 = function_412e60(v1, v1, g6, (int64_t *)&g5, 4, g42); // 0x40a8db
    return (int64_t)*(int32_t *)(4 * v2 + (int64_t)&g5);
}
// Address range: 0x40a8f0 - 0x40a90a
int64_t function_40a8f0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t result = function_40a3e0(a1, a2, 0); // 0x40a8f6
    if (result != 0) {
        // 0x40a900
        return result;
    }
    // 0x40a905
    function_411530(a1);
    // UNREACHABLE
}
// Address range: 0x40a910 - 0x40a922
int64_t function_40a910(int64_t a1, int64_t a2) {
    // 0x40a910
    if (a2 == 0) {
        // 0x40a91a
        return 2;
    }
    int64_t v1; // 0x40a910
    if ((char)v1 != 0) {
        // 0x40a920
        return function_40a8c0();
    }
    // 0x40a91a
    return 2;
}
// Address range: 0x40a930 - 0x40a971
int64_t function_40a930(int64_t a1, int64_t a2) {
    // 0x40a930
    if (a2 != 0) {
        int64_t v1; // 0x40a930
        if ((char)v1 != 0) {
            // 0x40a96c
            return function_40a8c0();
        }
    }
    char * env_val = getenv("VERSION_CONTROL"); // 0x40a943
    if (env_val == NULL) {
        // 0x40a952
        return 2;
    }
    // 0x40a94d
    if (*env_val != 0) {
        // 0x40a96c
        return function_40a8c0();
    }
    // 0x40a952
    return 2;
}
// Address range: 0x40a980 - 0x40a9f0
int64_t function_40a980(int64_t a1, uint64_t a2, uint64_t a3) {
    uint64_t v1; // 0x40a980
    if (a1 == 0) {
        // 0x40a994
        v1 = a2 != 0 ? a2 : 0x2000;
        // 0x40a99e
        return v1 > a3 ? a3 : v1;
    }
    // 0x40a9a8
    if (a2 == 0) {
        // 0x40a994
        v1 = a1;
        // 0x40a99e
        return v1 > a3 ? a3 : v1;
    }
    uint64_t v2 = a2;
    int64_t v3 = a1 % v2;
    int64_t v4 = v2; // 0x40a9bb
    while (v3 != 0) {
        // 0x40a9b3
        v2 = v3;
        v3 = v4 % v2;
        v4 = v2;
    }
    uint64_t v5 = a1 / v2; // 0x40a9c2
    uint64_t result = v5 * a2; // 0x40a9c8
    if (result > a3) {
        // 0x40a994
        v1 = a1;
        // 0x40a99e
        return v1 > a3 ? a3 : v1;
    }
    // 0x40a9d4
    if (result / a2 == v5) {
        // 0x40a99e
        return result;
    }
    // 0x40a994
    v1 = a1;
    // 0x40a99e
    return v1 > a3 ? a3 : v1;
}
// Address range: 0x40a9f0 - 0x40a9f8
int64_t function_40a9f0(int64_t a1) {
    // 0x40a9f0
    g66 = a1;
    int64_t result; // 0x40a9f0
    return result;
}
// Address range: 0x40aa00 - 0x40aafd
int64_t function_40aa00(int64_t a1, int64_t a2) {
    int64_t v1 = (int64_t)g45; // 0x40aa04
    int64_t v2; // 0x40aa00
    if (function_411b90(v1) != 0) {
        int64_t v3 = function_411bc0(v1, 0, 1); // 0x40aaba
        int64_t v4 = (int64_t)g45; // 0x40aabf
        v2 = v4;
        if ((int32_t)v3 == 0) {
            int64_t v5 = function_411b50(v4, 0); // 0x40aa38
            int64_t v6 = (int64_t)g45; // 0x40aa3d
            v2 = v6;
            if ((int32_t)v5 == 0) {
                goto lab_0x40aace;
            } else {
                // 0x40aa4c
                function_412f20(v6);
                goto lab_0x40aa58;
            }
        } else {
            goto lab_0x40aace;
        }
    } else {
        // 0x40aa1c
        if ((int32_t)function_412f20(v1) == 0) {
            // 0x40aa28
            return function_40ab20();
        }
        goto lab_0x40aa58;
    }
  lab_0x40aace:
    // 0x40aace
    if ((int32_t)function_412f20(v2) == 0) {
        // 0x40aadb
        return function_40ab20();
    }
    goto lab_0x40aa58;
  lab_0x40aa58:;
    char * v7 = dcgettext(NULL, "error closing file", 5); // 0x40aa64
    int32_t * err_num = __errno_location(); // 0x40aa73
    if (g66 == 0) {
        // 0x40aae8
        error(0, *err_num, "%s", v7);
    } else {
        // 0x40aa80
        error(0, *err_num, "%s: %s", (char *)function_40eaa0((int64_t)g66), v7);
    }
    // 0x40aa9f
    function_40ab20();
    _exit(g33);
    // UNREACHABLE
}
// Address range: 0x40ab00 - 0x40ab08
int64_t function_40ab00(int64_t a1) {
    // 0x40ab00
    g68 = a1;
    int64_t result; // 0x40ab00
    return result;
}
// Address range: 0x40ab10 - 0x40ab18
int64_t function_40ab10(int64_t a1) {
    // 0x40ab10
    g67 = a1;
    int64_t result; // 0x40ab10
    return result;
}
// Address range: 0x40ab20 - 0x40abbe
int64_t function_40ab20(void) {
    // 0x40ab20
    int32_t * err_num; // 0x40ab36
    if ((int32_t)function_412f20((int64_t)g44) == 0) {
        goto lab_0x40ab4c;
    } else {
        // 0x40ab36
        err_num = __errno_location();
        if (g67 == 0) {
            goto lab_0x40ab63;
        } else {
            // 0x40ab47
            if (*err_num != 32) {
                goto lab_0x40ab63;
            } else {
                goto lab_0x40ab4c;
            }
        }
    }
  lab_0x40ab4c:;
    int64_t result = function_412f20((int64_t)g47); // 0x40ab53
    if ((int32_t)result == 0) {
        // 0x40ab5c
        return result;
    }
    // 0x40ab9e
    _exit(g33);
    // UNREACHABLE
  lab_0x40ab63:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40ab6f
    if (g68 == 0) {
        // 0x40aba9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x40ab83
        error(0, *err_num, "%s: %s", (char *)function_40eaa0((int64_t)g68), v1);
    }
    // 0x40ab9e
    _exit(g33);
    // UNREACHABLE
}
// Address range: 0x40abc0 - 0x40ac56
int64_t function_40abc0(void) {
    // 0x40abc0
    int64_t name; // 0x40abc0
    struct __dirstream * dirp = opendir((char *)name); // 0x40abc8
    if (dirp == NULL) {
        // 0x40abe2
        return (int64_t)dirp;
    }
    uint32_t v1 = dirfd(dirp); // 0x40abd8
    if (v1 >= 3) {
        // 0x40abe2
        return (int64_t)dirp;
    }
    int64_t v2 = function_411a10((int64_t)v1, 1030, 3, name); // 0x40abfe
    int32_t * v3 = __errno_location(); // 0x40ac06
    int32_t fd = v2; // 0x40ac0e
    if (fd < 0) {
        // 0x40ac19
        closedir(dirp);
        return 0;
    }
    struct __dirstream * v4 = fdopendir(fd); // 0x40ac3b
    if (v4 == NULL) {
        // 0x40ac4c
        close(fd);
    }
    // 0x40ac19
    closedir(dirp);
    return (int64_t)v4;
}
// Address range: 0x40ac60 - 0x40ac78
int64_t function_40ac60(void) {
    // 0x40ac60
    int64_t v1; // 0x40ac60
    int64_t result = function_40ace0(v1); // 0x40ac64
    if (result != 0) {
        // 0x40ac6e
        return result;
    }
    // 0x40ac73
    function_411530(v1);
    // UNREACHABLE
}
// Address range: 0x40ac80 - 0x40acdd
int64_t function_40ac80(int64_t a1) {
    // 0x40ac80
    int64_t v1; // 0x40ac80
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x40ac8e
    int64_t v3 = function_40ad40(a1, v1); // 0x40ac92
    int64_t result = v3 - a1; // 0x40ac9a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x40acc3
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x40acb0
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x40acc3
            break;
        }
        result2--;
    }
    // 0x40acc3
    return result2;
}
// Address range: 0x40ace0 - 0x40ad3a
int64_t function_40ace0(int64_t a1) {
    // 0x40ace0
    int64_t v1; // 0x40ace0
    int64_t v2 = v1;
    int64_t * mem = malloc((int32_t)(v2 + 1 + (int64_t)(v2 == 0))); // 0x40acff
    if (mem == NULL) {
        // 0x40ad26
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v2); // 0x40ad15
    int64_t v3; // 0x40ace0
    if (v2 == 0) {
        // 0x40ad30
        *(char *)dest_mem = 46;
        v3 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x40ad15
    *(char *)(v3 + result) = 0;
    // 0x40ad26
    return result;
}
// Address range: 0x40ad40 - 0x40ad9b
int64_t function_40ad40(int64_t a1, int64_t a2) {
    // 0x40ad40
    int64_t v1; // 0x40ad40
    char v2 = v1;
    int64_t v3 = a1; // 0x40ad49
    int64_t v4 = a1; // 0x40ad49
    char v5 = v2; // 0x40ad49
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x40ad54
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x40ad50
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40ad5e
    if (v5 == 0) {
      lab_0x40ad9a:
        // 0x40ad9a
        return result;
    }
    int64_t v7 = v4; // 0x40ad88
    int64_t v8 = 0; // 0x40ad88
    int64_t v9; // 0x40ad40
    int64_t v10; // 0x40ad8a
    char v11; // 0x40ad8e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x40ad85
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40ad8a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x40ad85
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40ad7a
    char v14 = *(char *)v13; // 0x40ad7e
    while (v14 != 0) {
        int64_t v15 = result2;
        v7 = v13;
        v8 = (char)v12 == 0 ? v12 : 0;
        v9 = v13;
        if (v14 == 47) {
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v15;
            if (v11 == 0) {
                return result;
            }
            // 0x40ad85
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40ad8a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x40ad85
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x40ad70
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40ad9a
    return result2;
}
// Address range: 0x40ada0 - 0x40adcb
int64_t function_40ada0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x40ada4
    int64_t result = len; // 0x40ada4
    if (len < 2) {
        // 0x40adba
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x40adb8
    while (*(char *)(v1 + str) == 47) {
        // 0x40adc0
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40adba
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40adba
    return result2;
}
// Address range: 0x40add0 - 0x40add5
int64_t function_40add0(char fd, int32_t offset, int32_t length, int64_t advice) {
    // 0x40add0
    return posix_fadvise((int32_t)fd, offset, length, (int32_t)advice);
}
// Address range: 0x40ade0 - 0x40ae01
int64_t function_40ade0(int64_t stream, int64_t advice, int64_t a3) {
    // 0x40ade0
    if (stream == 0) {
        // 0x40ae00
        int64_t result; // 0x40ade0
        return result;
    }
    // 0x40ade5
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x40ae10 - 0x40ae5a
int64_t function_40ae10(int64_t path, int32_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, oflag); // 0x40ae23
    return function_40fcf0((int64_t)fd);
}
// Address range: 0x40ae60 - 0x40aee6
int64_t function_40ae60(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x40aed0
        int64_t result; // 0x40ae60
        return result;
    }
    int64_t result2 = function_4112e0(24); // 0x40ae7d
    *(int64_t *)result2 = function_411510(a2);
    *(int64_t *)(result2 + 8) = *(int64_t *)(a3 + 8);
    *(int64_t *)(result2 + 16) = a3;
    int64_t v1 = function_40c2f0(a1, result2); // 0x40aea6
    if (v1 == 0) {
        // 0x40aee1
        function_411530(a1);
        // UNREACHABLE
    }
    // 0x40aeb0
    if (result2 == v1) {
        // 0x40aed0
        return result2;
    }
    // 0x40aeb5
    return function_40c5c0(result2);
}
// Address range: 0x40aef0 - 0x40af2b
int64_t function_40aef0(int64_t a1, int64_t a2, int64_t a3) {
    if (a1 == 0) {
        // 0x40af28
        return 0;
    }
    int64_t v1 = a2; // bp-40, 0x40aefd
    int64_t v2 = function_40b8e0(a1, &v1); // 0x40af11
    return v2 & -256 | (int64_t)(v2 != 0);
}
// Address range: 0x40af30 - 0x40b0a3
int64_t function_40af30(int32_t a1, int64_t * a2) {
    int32_t v1 = a1 & 0xf000; // 0x40af37
    char v2 = 45; // 0x40af30
    int64_t v3; // 0x40af30
    int64_t v4; // 0x40af30
    uint64_t v5; // 0x40af30
    switch ((v1 - 0x1000) / 0x1000) {
        case 3: {
            // 0x40af99
            v2 = 100;
        }
        case 7: {
          lab_0x40af99:
            // 0x40af99
            v4 = (int64_t)a2;
            v5 = (int64_t)a1;
            *(char *)a2 = v2;
            *(char *)(v4 + 1) = (v5 & 256) == 0 ? 45 : 114;
            int64_t v6 = v5 & 128; // 0x40afb2
            char v7 = v6; // 0x40afba
            *(char *)(v4 + 2) = (v7 - ((char)(v6 == 0) | v7) & -74) + 119;
            int64_t v8 = v5 & 64; // 0x40afc7
            int64_t v9 = v8 - (v8 | (int64_t)(v8 == 0)); // 0x40afcd
            if ((v5 & 2048) == 0) {
                // 0x40b070
                v3 = (v9 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0x40afdb
                v3 = (v9 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0x40afe1
            break;
        }
        case 5: {
            // 0x40af99
            v2 = 98;
            // branch (via goto) -> 0x40af99
            goto lab_0x40af99;
        }
        case 1: {
            // 0x40af99
            v2 = 99;
            // branch (via goto) -> 0x40af99
            goto lab_0x40af99;
        }
        case 9: {
            // 0x40af99
            v2 = 108;
            // branch (via goto) -> 0x40af99
            goto lab_0x40af99;
        }
        case 0: {
            // 0x40af99
            v2 = 112;
            // branch (via goto) -> 0x40af99
            goto lab_0x40af99;
        }
        default: {
            // 0x40af86
            v2 = v1 != 0xc000 ? 63 : 115;
            // branch (via goto) -> 0x40af99
            goto lab_0x40af99;
        }
    }
    // 0x40afe1
    *(char *)(v4 + 3) = (char)v3;
    int64_t v10 = v5 & 32; // 0x40afe6
    char v11 = v10; // 0x40afec
    *(char *)(v4 + 4) = (v11 - ((char)(v10 == 0) | v11) & -69) + 114;
    int64_t v12 = v5 & 16; // 0x40aff9
    char v13 = v12; // 0x40afff
    *(char *)(v4 + 5) = (v13 - ((char)(v12 == 0) | v13) & -74) + 119;
    int64_t v14 = v5 & 8; // 0x40b00c
    int64_t v15 = v14 - (v14 | (int64_t)(v14 == 0)); // 0x40b012
    int64_t v16; // 0x40af30
    if ((v5 & 1024) == 0) {
        // 0x40b080
        v16 = (v15 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0x40b01c
        v16 = (v15 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0x40b022
    *(char *)(v4 + 6) = (char)v16;
    int64_t v17 = v5 & 4; // 0x40b027
    char v18 = v17; // 0x40b02d
    *(char *)(v4 + 7) = (v18 - ((char)(v17 == 0) | v18) & -69) + 114;
    int64_t v19 = v5 & 2; // 0x40b03a
    char v20 = v19; // 0x40b040
    *(char *)(v4 + 8) = (v20 - ((char)(v19 == 0) | v20) & -74) + 119;
    char v21 = v5 % 2 == 0; // 0x40b053
    if ((v5 & 512) == 0) {
        // 0x40b090
        *(char *)(v4 + 9) = (v21 & -75) + 120;
        *(int16_t *)(v4 + 10) = 32;
        return 32;
    }
    // 0x40b05d
    *(char *)(v4 + 9) = (v21 & -32) + 116;
    *(int16_t *)(v4 + 10) = 32;
    return 32;
}
// Address range: 0x40b0b0 - 0x40b0b8
int64_t function_40b0b0(int64_t a1) {
    // 0x40b0b0
    int64_t v1; // 0x40b0b0
    return function_40af30(*(int32_t *)(a1 + 24), (int64_t *)v1);
}
// Address range: 0x40b0c0 - 0x40b0d8
int64_t function_40b0c0(void) {
    // 0x40b0c0
    int64_t v1; // 0x40b0c0
    int64_t result = function_40b0e0(v1, v1, v1); // 0x40b0c4
    if (result != 0) {
        // 0x40b0ce
        return result;
    }
    // 0x40b0d3
    function_411530(v1);
    // UNREACHABLE
}
// Address range: 0x40b0e0 - 0x40b1b9
int64_t function_40b0e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = function_40ad40(a1, a2); // 0x40b0f8
    int64_t v2 = function_40ada0(v1); // 0x40b103
    int64_t v3 = 0; // 0x40b117
    if (v2 != 0) {
        // 0x40b119
        v3 = *(char *)(v1 - 1 + v2) != 47;
    }
    int64_t str = a2; // 0x40b130
    int64_t v4 = a2; // 0x40b130
    int64_t v5; // 0x40b0e0
    if ((char)v5 == 47) {
        v4++;
        str = v4;
        while (*(char *)v4 == 47) {
            // 0x40b1a8
            v4++;
            str = v4;
        }
    }
    int64_t v6 = v1 - a1 + v2; // 0x40b111
    int32_t len = strlen((char *)str); // 0x40b135
    int64_t * mem = malloc(len + (int32_t)(v6 + 1 + v3)); // 0x40b145
    if (mem == NULL) {
        // 0x40b191
        return (int64_t)mem;
    }
    int64_t * v7 = mempcpy(mem, (int64_t *)a1, (int32_t)v6); // 0x40b15b
    *(char *)v7 = 47;
    int64_t v8 = v3 + (int64_t)v7; // 0x40b167
    if (a3 != 0) {
        // 0x40b170
        *(int64_t *)a3 = v8 - (int64_t)((char)v5 == 47);
    }
    // 0x40b183
    *(char *)mempcpy((int64_t *)v8, (int64_t *)str, len) = 0;
    // 0x40b191
    return (int64_t)mem;
}
// Address range: 0x40b1c0 - 0x40b236
int64_t function_40b1c0(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x40b1c0
    if (a3 == 0) {
        // 0x40b204
        return 0;
    }
    int64_t v1 = a3; // 0x40b1db
    int64_t v2 = (int64_t)a2; // 0x40b1db
    int64_t result = 0;
    int64_t v3 = function_40eec0(a1 & 0xffffffff, v2, v1); // 0x40b1f9
    int64_t result2 = result; // 0x40b202
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x40b218
            *__errno_location() = 0;
            return result;
        }
        int64_t v4 = v3 + result; // 0x40b1e5
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x40b204
            break;
        }
        result = v4;
        v3 = function_40eec0(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x40b204
    return result2;
}
// Address range: 0x40b240 - 0x40b2b6
int64_t function_40b240(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40b240
    if (a3 == 0) {
        // 0x40b284
        return 0;
    }
    int64_t v1 = a3; // 0x40b25b
    int64_t v2 = a2; // 0x40b25b
    int64_t result = 0;
    int64_t v3 = function_40ef20(a1 & 0xffffffff, v2, v1); // 0x40b279
    int64_t result2 = result; // 0x40b282
    while (v3 != -1) {
        if (v3 == 0) {
            // 0x40b298
            *__errno_location() = 28;
            return result;
        }
        int64_t v4 = v3 + result; // 0x40b265
        v1 -= v3;
        v2 += v3;
        result2 = v4;
        if (v1 == 0) {
            // break -> 0x40b284
            break;
        }
        result = v4;
        v3 = function_40ef20(a1 & 0xffffffff, v2, v1);
        result2 = result;
    }
    // 0x40b284
    return result2;
}
// Address range: 0x40b2c0 - 0x40b353
int64_t function_40b2c0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x40b2d7
    if (v1 == -1) {
        // 0x40b34f
        return -1;
    }
    int64_t v2 = v1; // 0x40b2df
    int64_t v3; // 0x40b2c0
    while (true) {
      lab_0x40b2e8:
        // 0x40b2e8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x40b340;
        } else {
            goto lab_0x40b345;
        }
    }
  lab_0x40b34f_2:;
    // 0x40b34f
    int64_t result; // 0x40b2c0
    return result;
  lab_0x40b345:;
    int64_t v4 = v3 + 2; // 0x40b345
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40b34f
        goto lab_0x40b34f_2;
    }
    goto lab_0x40b2e8;
  lab_0x40b340:
    // 0x40b340
    result = v3;
    goto lab_0x40b345;
}
// Address range: 0x40b360 - 0x40b370
int64_t function_40b360(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40b360
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x40b370 - 0x40b377
int64_t function_40b370(int64_t a1, int64_t a2) {
    // 0x40b370
    int64_t v1; // 0x40b370
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x40b380 - 0x40b3a1
int64_t function_40b380(int64_t a1, int64_t a2) {
    // 0x40b380
    int64_t v1; // 0x40b380
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x40b398
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x40b3b0 - 0x40b4c9
int64_t function_40b3b0(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_40b380(a1, a2); // 0x40b3c4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x40b3cc
    int64_t result2 = *v2; // 0x40b3cc
    if (result2 == 0) {
        // 0x40b45e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x40b3f4
            if (v3 == 0) {
                // 0x40b45e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x40b401
            int64_t v5 = v3; // 0x40b407
            int64_t v6 = v1; // 0x40b407
            int64_t result = v4; // 0x40b407
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40b43c_2:
                // 0x40b43c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x40b441
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x40b450
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40b45e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x40b414
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x40b421
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40b43c_2;
                }
                // 0x40b429
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40b43c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40b45e
            return 0;
        }
    }
    // 0x40b473
    if ((char)a4 == 0) {
        // 0x40b45e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x40b478
    if (v12 == 0) {
        // 0x40b4c0
        *v2 = 0;
        // 0x40b45e
        return result2;
    }
    // 0x40b481
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40b48f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x40b4d0 - 0x40b54e
int64_t function_40b4d0(uint64_t a1) {
    if (a1 == (int64_t)&g7) {
        // 0x40b54d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x40b4db
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g7) {
        // 0x40b53a
        *(int64_t *)a1 = (int64_t)&g7;
        return 0;
    }
    // 0x40b4e9
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x40b504
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x40b511
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x40b519
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40b54d
    return 1;
}
// Address range: 0x40b550 - 0x40b69a
int64_t function_40b550(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40b56a
    uint64_t v2 = *v1; // 0x40b56a
    if (v2 <= a2) {
        // 0x40b654
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x40b550
    int64_t v8 = a2; // 0x40b550
    int64_t v9; // 0x40b550
    int64_t result; // 0x40b550
    int64_t v10; // 0x40b550
    while (true) {
      lab_0x40b586_2:
        // 0x40b586
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x40b586
        int64_t v12 = *v11; // 0x40b586
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x40b578;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40b58f
            int64_t v14 = *v13; // 0x40b58f
            int64_t v15 = v14; // 0x40b597
            int64_t v16 = v12; // 0x40b597
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x40b5b4
                    int64_t v19 = *v18; // 0x40b5b4
                    int64_t v20 = function_40b380(v3, v19); // 0x40b5bd
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x40b5c2
                    int64_t v22 = *v21; // 0x40b5c2
                    int64_t * v23 = (int64_t *)v20; // 0x40b5c6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x40b5a0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40b5ef
                            break;
                        }
                    } else {
                        // 0x40b5cc
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40b5ef
                            break;
                        }
                    }
                    // 0x40b5b4
                    v15 = v22;
                }
                // 0x40b5ef
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x40b5f3
                v9 = *v1;
                goto lab_0x40b578;
            } else {
                int64_t v26 = function_40b380(v3, v25); // 0x40b60b
                int64_t * v27 = (int64_t *)v26; // 0x40b610
                if (*v27 == 0) {
                    // 0x40b670
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x40b619
                    int64_t * v29; // 0x40b550
                    int64_t v30; // 0x40b550
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x40b67f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x40b654
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x40b67f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40b62a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x40b639
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x40b641
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40b64a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x40b654
                    break;
                }
                goto lab_0x40b586_2;
            }
        }
    }
    // 0x40b654
    return result;
  lab_0x40b578:;
    int64_t v36 = v10 + 16; // 0x40b578
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x40b586_2;
    // 0x40b586
    goto lab_0x40b586_2;
}
// Address range: 0x40b6a0 - 0x40b6a5
int64_t function_40b6a0(int64_t a1) {
    // 0x40b6a0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x40b6b0 - 0x40b6b5
int64_t function_40b6b0(int64_t a1) {
    // 0x40b6b0
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x40b6c0 - 0x40b6c5
int64_t function_40b6c0(int64_t a1) {
    // 0x40b6c0
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x40b6d0 - 0x40b71f
int64_t function_40b6d0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b6d3
    int64_t result = 0; // 0x40b6dc
    if (v1 <= a1) {
      lab_0x40b71d:
        // 0x40b71d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x40b6e0
    while (*(int64_t *)v3 == 0) {
        // 0x40b6e0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40b6ef
    int64_t v6 = v5; // 0x40b6fb
    int64_t v7 = 1; // 0x40b6fb
    int64_t v8; // 0x40b6d0
    int64_t v9; // 0x40b700
    int64_t v10; // 0x40b704
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x40b700
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x40b710
    int64_t v12 = v3 + 16; // 0x40b714
    while (v12 < v1) {
        // 0x40b6e9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x40b6e0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40b6ef
        v5 = *(int64_t *)(v3 + 8);
        v6 = v5;
        v7 = 1;
        if (v5 != 0) {
            v9 = *(int64_t *)(v6 + 8);
            v10 = 2;
            v8 = v10;
            v6 = v9;
            v7 = v10;
            while (v9 != 0) {
                // 0x40b700
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40b70d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40b71d
    return result2;
}
// Address range: 0x40b720 - 0x40b787
int64_t function_40b720(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b723
    int64_t v2 = a1; // 0x40b72f
    int64_t v3 = 0; // 0x40b72f
    int64_t v4 = 0; // 0x40b72f
    int64_t v5 = 0; // 0x40b72f
    int64_t v6 = 0; // 0x40b72f
    int64_t v7; // 0x40b720
    int64_t v8; // 0x40b720
    int64_t v9; // 0x40b720
    if (v1 > a1) {
        while (true) {
          lab_0x40b741_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x40b738;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x40b747
                int64_t v13 = v10 + 1; // 0x40b74b
                int64_t v14 = v11 + 1; // 0x40b74f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x40b756
                int64_t v16 = v14; // 0x40b756
                if (v12 == 0) {
                    goto lab_0x40b738;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x40b760
                    int64_t v18 = v16 + 1; // 0x40b764
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x40b760
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x40b76d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x40b776
                        break;
                    }
                    goto lab_0x40b741_2;
                }
            }
        }
    }
  lab_0x40b776:
    // 0x40b776
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x40b77f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x40b77e
    return 0;
  lab_0x40b738:;
    int64_t v20 = v8 + 16; // 0x40b738
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x40b776
        goto lab_0x40b776;
    }
    goto lab_0x40b741_2;
    // 0x40b741
    goto lab_0x40b741_2;
}
// Address range: 0x40b790 - 0x40b8d8
int64_t function_40b790(uint64_t a1, int64_t a2) {
    // 0x40b790
    int128_t v1; // 0x40b790
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x40b7a3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x40b7a7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x40b7ae
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x40b7c0
            while (*(int64_t *)v7 == 0) {
                // 0x40b7c0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40b7fd
                    goto lab_0x40b7fd;
                }
            }
        }
    }
  lab_0x40b7fd:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40b80c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x40b790
    int128_t v10; // 0x40b790
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x40b8a3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x40b8ac
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x40b843;
        } else {
            goto lab_0x40b8b9;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x40b836
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x40b8b9;
        } else {
            goto lab_0x40b843;
        }
    }
  lab_0x40b843:
    // 0x40b843
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x40b847
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x40b847
    goto lab_0x40b84c;
  lab_0x40b8b9:
    // 0x40b8b9
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40b8ca
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40b84c;
  lab_0x40b84c:
    // 0x40b84c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x40b8e0 - 0x40b933
int64_t function_40b8e0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_40b380(a1, result); // 0x40b8ea
    int64_t v2 = *(int64_t *)v1; // 0x40b8ef
    if (v2 == 0) {
        // 0x40b91d
        return 0;
    }
    // 0x40b903
    if (v2 == result) {
        // 0x40b91d
        return result;
    }
    int64_t v3 = v1; // 0x40b914
    int64_t result2 = v2; // 0x40b912
    while ((char)v1 == 0) {
        // 0x40b914
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40b91d
            break;
        }
        // 0x40b900
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40b91d
            break;
        }
        result2 = v2;
    }
    // 0x40b91d
    return result2;
}
// Address range: 0x40b940 - 0x40b988
int64_t function_40b940(uint64_t a1) {
    int64_t result = 0; // 0x40b945
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x40b957
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40b94e
    if (v1 <= a1) {
        // 0x40b957
        return result;
    }
    int64_t v2 = a1; // 0x40b955
    int64_t v3 = *(int64_t *)v2; // 0x40b969
    result = v3;
    while (v3 == 0) {
        // 0x40b960
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x40b957
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x40b957
    return result;
}
// Address range: 0x40b990 - 0x40b9fa
int64_t function_40b990(int64_t a1, int64_t a2) {
    int64_t v1 = function_40b380(a1, a2); // 0x40b99c
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x40b9b8
    while (*(int64_t *)v2 != a2) {
        // 0x40b9b0
        if (v3 == 0) {
            goto lab_0x40b9c6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x40b9f0
        return *(int64_t *)v3;
    }
  lab_0x40b9c6:;
    int64_t v4 = v1 + 16; // 0x40b9d8
    int64_t result = 0; // 0x40b9df
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x40b9d0
        result = v5;
        if (v5 != 0) {
            // break -> 0x40b9e3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x40b9e3
    return result;
}
// Address range: 0x40ba00 - 0x40ba64
int64_t function_40ba00(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40ba06
    int64_t result = 0; // 0x40ba0a
    if (*v1 <= a1) {
      lab_0x40ba21:
        // 0x40ba21
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40ba0f
    int64_t v4 = v2; // 0x40ba15
    int64_t v5; // 0x40ba00
    int64_t v6; // 0x40ba00
    int64_t v7; // 0x40ba48
    int64_t v8; // 0x40ba51
    int64_t v9; // 0x40ba31
    int64_t v10; // 0x40ba35
    if (v3 != 0) {
        // 0x40ba28
        if (v2 >= a3) {
            // break -> 0x40ba21
            break;
        }
        // 0x40ba2d
        *(int64_t *)(8 * v2 + a2) = v3;
        v9 = *(int64_t *)(a1 + 8);
        v10 = v2 + 1;
        v4 = v10;
        v6 = v10;
        v5 = v9;
        if (v9 != 0) {
            result = a3;
            if (v6 == a3) {
                return result;
            }
            // 0x40ba45
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x40ba40
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40ba45
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
            }
        }
    }
    int64_t v11 = v4;
    int64_t v12 = a1 + 16; // 0x40ba17
    result = v11;
    while (*v1 > v12) {
        // 0x40ba0f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x40ba28
            result = v2;
            if (v2 >= a3) {
                // break -> 0x40ba21
                break;
            }
            // 0x40ba2d
            *(int64_t *)(8 * v2 + a2) = v3;
            v9 = *(int64_t *)(v13 + 8);
            v10 = v2 + 1;
            v4 = v10;
            v6 = v10;
            v5 = v9;
            if (v9 != 0) {
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x40ba45
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x40ba40
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x40ba45
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x40ba17
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x40ba21
    return result;
}
// Address range: 0x40ba70 - 0x40bae8
int64_t function_40ba70(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40ba81
    int64_t result = 0; // 0x40ba85
    if (v1 <= a1) {
      lab_0x40baa4:
        // 0x40baa4
        return result;
    }
    int64_t v2 = a1; // 0x40ba9a
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x40ba98
    int64_t v5 = v2; // 0x40ba98
    int64_t v6 = v3; // 0x40ba98
    int64_t v7; // 0x40ba70
    int64_t v8; // 0x40bac8
    int64_t v9; // 0x40bacc
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x40bac8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x40bad8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40bac8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
        }
    }
    int64_t result2 = v4;
    v2 += 16;
    while (v1 > v2) {
        // 0x40ba92
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x40bac8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x40bad8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x40bac8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x40ba9a
        result2 = v4;
        v2 += 16;
    }
    // 0x40baa4
    return result2;
}
// Address range: 0x40baf0 - 0x40bb21
int64_t function_40baf0(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x40baf7
    if (v1 == 0) {
        // 0x40bb1d
        return 0;
    }
    int64_t result = 0; // 0x40baf7
    v2++;
    char v3 = *(char *)v2; // 0x40bb13
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40bb1d
    return result;
}
// Address range: 0x40bb30 - 0x40bb50
int64_t function_40bb30(int64_t a1) {
    // 0x40bb30
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x40bb50 - 0x40bcda
int64_t function_40bb50(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40bb50
    int128_t v1; // 0x40bb50
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40bb8a
    int64_t result = (int64_t)mem; // 0x40bb8a
    if (mem == NULL) {
        // 0x40bc3a
        return result;
    }
    int64_t v3 = result + 40; // 0x40bb9b
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x40bb50
    int128_t v6; // 0x40bb50
    if (a2 == 0) {
        // 0x40bc50
        *v4 = (int64_t)&g7;
        int64_t v7 = function_40b4d0(v3); // 0x40bc58
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40bc5d
        if ((char)v7 == 0) {
            // 0x40bc30
            free(mem);
            // 0x40bc3a
            return 0;
        }
        // 0x40bc69
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x40bcb3;
        } else {
            goto lab_0x40bc6e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_40b4d0(v3) == 0) {
            // 0x40bc30
            free(mem);
            // 0x40bc3a
            return 0;
        }
        // 0x40bbb5
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_40b2c0(a1); // 0x40bbc3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x40bc30
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x40bc30
                free(mem);
                // 0x40bc3a
                return 0;
            }
            // 0x40bbe1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x40bc30
                free(mem);
                // 0x40bc3a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x40bbf2
            int64_t v10 = (int64_t)mem2; // 0x40bbf2
            *mem = v10;
            if (mem2 == NULL) {
                // 0x40bc30
                free(mem);
                // 0x40bc3a
                return 0;
            }
            // 0x40bbff
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x40b360 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x40b370 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40bc3a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x40bca8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40bc6e;
        } else {
            goto lab_0x40bcb3;
        }
    }
  lab_0x40bcb3:
    // 0x40bcb3
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x40bcc3
    int128_t v13 = v6; // 0x40bccc
    int128_t v14 = __asm_addss(v12, v12); // 0x40bccc
    goto lab_0x40bc77;
  lab_0x40bc6e:
    // 0x40bc6e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x40bc77;
  lab_0x40bc77:
    // 0x40bc77
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x40bc30
    free(mem);
    // 0x40bc3a
    return 0;
}
// Address range: 0x40bce0 - 0x40bd88
int64_t function_40bce0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40bcea
    uint64_t v2 = *v1; // 0x40bcea
    int64_t result; // 0x40bce0
    if (v2 <= a1) {
      lab_0x40bd73:
        // 0x40bd73
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x40bcf8
    while (*v6 == 0) {
        // 0x40bcf8
        v7 = v5 + 16;
        int64_t v8; // 0x40bce0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x40bd73
            goto lab_0x40bd73;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x40bd09
    int64_t v10 = *v9; // 0x40bd09
    int64_t v11 = *v3; // 0x40bd0e
    int64_t v12 = v11; // 0x40bd15
    int64_t v13 = v10; // 0x40bd15
    int64_t result2 = v11; // 0x40bd15
    int64_t * v14; // 0x40bd2e
    int64_t v15; // 0x40bd2e
    int64_t v16; // 0x40bd2a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x40bd25
            v16 = *v3;
        }
        // 0x40bd2e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x40bd20
            v16 = 0;
            if (v12 != 0) {
                // 0x40bd25
                v16 = *v3;
            }
            // 0x40bd2e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
        }
    }
    // 0x40bd4d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x40bd60
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40bd6d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40bcfc
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x40bcf8
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x40bd73
                goto lab_0x40bd73;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x40bd09
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x40bd25
                v16 = *v3;
            }
            // 0x40bd2e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x40bd20
                v16 = 0;
                if (v12 != 0) {
                    // 0x40bd25
                    v16 = *v3;
                }
                // 0x40bd2e
                v14 = (int64_t *)(v13 + 8);
                v15 = *v14;
                *(int64_t *)v13 = 0;
                *v14 = *v4;
                *v4 = v13;
                v12 = v16;
                v13 = v15;
                result2 = v16;
            }
        }
        // 0x40bd4d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x40bd73
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x40bd90 - 0x40be66
int64_t function_40bd90(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40bd9f
    uint64_t v2 = *v1; // 0x40bd9f
    int64_t v3 = a1; // 0x40bda3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x40bdf3;
    } else {
        // 0x40bda5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x40bdf3;
        } else {
            // 0x40bdac
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x40bdc1
                int64_t v6; // 0x40bdb8
                while (v5 == 0) {
                    // 0x40bdb8
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x40bdf3
                        goto lab_0x40bdf3;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x40bdd8
                int64_t v8 = v7; // 0x40bddf
                int64_t v9 = v5; // 0x40bddf
                int64_t v10; // 0x40bd90
                int64_t v11; // 0x40bdd8
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x40bdd0
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x40bdd3
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x40bde6
                v3 = v9;
                while (v2 > v12) {
                    // 0x40bdc1
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x40bdb8
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x40bdf3
                            goto lab_0x40bdf3;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x40bdd3
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x40bdd0
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x40bdd3
                        v9 = *(int64_t *)v10;
                    }
                    // 0x40bde1
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x40bdf3;
            } else {
                goto lab_0x40be2c;
            }
        }
    }
  lab_0x40bdf3:
    // 0x40bdf3
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x40be00
        int64_t v14 = v13; // 0x40be07
        int64_t v15 = v2; // 0x40be07
        int64_t v16; // 0x40be10
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x40be10
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x40be21
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x40be21
        int64_t v18 = v15; // 0x40be2a
        int64_t v19 = v17; // 0x40be2a
        while (v15 > v17) {
            // 0x40be00
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x40be10
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x40be21
                v15 = *v1;
            }
            // 0x40be21
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40be2c;
  lab_0x40be2c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40be2c
    if (v20 == 0) {
        // 0x40be51
        free(NULL);
        free((int64_t *)a1);
        return &g90;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x40be40
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40be4f
    while (v21 != 0) {
        // 0x40be40
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x40be51
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g90;
}
// Address range: 0x40be70 - 0x40c06a
int64_t function_40be70(int64_t a1, uint64_t a2) {
    // 0x40be70
    int128_t v1; // 0x40be70
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40be7b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x40be70
        if (a2 < 0) {
            // 0x40bff0
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x40c000
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x40be90
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x40be99
        __asm_comiss(__asm_divss_6(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x40bfe2
        return 0;
    }
    uint64_t nmemb = function_40b2c0(a2); // 0x40bed3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x40bfe2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40bf0b
    if (*v6 == nmemb) {
        // 0x40bfe2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40bf1d
    int64_t v7 = (int64_t)mem; // 0x40bf1d
    int64_t v8 = v7; // bp-104, 0x40bf22
    if (mem == NULL) {
        // 0x40bfe2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40bf7a
    int64_t v10 = *v9; // 0x40bf7a
    int64_t v11 = function_40b550(&v8, a1, 0); // 0x40bf83
    int64_t result = v11 & 0xffffffff; // 0x40bf88
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x40bf44
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x40bfa6
        function_40b550(v13, v12, 1);
        function_40b550(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x40c030
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x40bfe2
    return result;
}
// Address range: 0x40c070 - 0x40c2e4
int64_t function_40c070(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x40c070
    int128_t v1; // 0x40c070
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40c070
    int64_t v5 = function_40b3b0(a1, a2, &v4, 0); // 0x40c091
    if (v5 != 0) {
        // 0x40c09e
        if (a3 != NULL) {
            // 0x40c0a5
            *a3 = v5;
        }
        // 0x40c0a9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x40c0b8
    uint64_t v7 = *v6; // 0x40c0b8
    int64_t v8; // 0x40c070
    int64_t v9; // 0x40c070
    int64_t v10; // 0x40c070
    int128_t v11; // 0x40c070
    int128_t v12; // 0x40c070
    int64_t v13; // 0x40c070
    if (v7 < 0) {
        // 0x40c140
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x40c150
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x40c154
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x40c159
        int128_t v17 = __asm_addss(v15, v15); // 0x40c15d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x40c0db;
        } else {
            goto lab_0x40c16a;
        }
    } else {
        // 0x40c0c1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x40c0c5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x40c0c9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x40c0ce
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40c16a;
        } else {
            goto lab_0x40c0db;
        }
    }
  lab_0x40c0db:
    // 0x40c0db
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x40c0e4
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x40c0ec
    int128_t v23 = v11; // 0x40c0ec
    if (v13 == 0) {
        goto lab_0x40c0f2;
    } else {
        goto lab_0x40c191;
    }
  lab_0x40c16a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x40c177
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40c17a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x40c183
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x40c0f2;
    } else {
        goto lab_0x40c191;
    }
  lab_0x40c0f2:;
    int64_t * v28 = (int64_t *)v4; // 0x40c0f7
    if (*v28 == 0) {
        // 0x40c208
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x40c211
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x40c102
    int64_t v31 = *v30; // 0x40c102
    int64_t * v32; // 0x40c070
    int64_t v33; // 0x40c070
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40c22d
        if (mem == NULL) {
            // 0x40c0a9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40c22d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x40c117
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40c12d
    *v37 = *v37 + 1;
    return 1;
  lab_0x40c191:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x40c191
    function_40b4d0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x40c19a
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x40c19e
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x40c1a2
    int128_t v44; // 0x40c070
    if (v42 < 0) {
        // 0x40c260
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x40c270
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x40c1b0
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x40c1b9
    int128_t v47; // 0x40c070
    int64_t v48; // 0x40c070
    if (v46 < 0) {
        // 0x40c240
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40c24d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x40c250
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x40c1c2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x40c1c6
        v48 = v46;
        v47 = v51;
    }
    // 0x40c1cb
    __asm_comiss_2(v47, __asm_mulss_5(__asm_movaps_4(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x40c1db
        int128_t v53 = v52; // 0x40c1e4
        if (*(char *)(v41 + 16) == 0) {
            // 0x40c280
            v53 = __asm_mulss_5(v52, v43);
        }
        // 0x40c1ea
        __asm_comiss(v53, 0x5f800000);
        // 0x40c0a9
        return 0xffffffff;
    }
    goto lab_0x40c0f2;
}
// Address range: 0x40c2f0 - 0x40c32b
int64_t function_40c2f0(int64_t a1, int64_t a2) {
    // 0x40c2f0
    int64_t v1; // bp-16, 0x40c2f0
    int64_t v2; // 0x40c2f0
    int32_t v3 = function_40c070(a1, a2, &v1, v2); // 0x40c302
    if (v3 == -1) {
        // 0x40c310
        return 0;
    }
    // 0x40c307
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x40c330 - 0x40c507
int64_t function_40c330(int64_t a1) {
    // 0x40c330
    int128_t v1; // 0x40c330
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x40c330
    int64_t v5; // 0x40c330
    int64_t result = function_40b3b0(a1, v5, &v4, 1); // 0x40c345
    if (result == 0) {
        // 0x40c362
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x40c357
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x40c362
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x40c370
    uint64_t v8 = *v7 - 1; // 0x40c374
    *v7 = v8;
    int64_t v9; // 0x40c330
    int64_t v10; // 0x40c330
    int64_t v11; // 0x40c330
    int128_t v12; // 0x40c330
    int128_t v13; // 0x40c330
    int64_t v14; // 0x40c330
    if (v8 < 0) {
        // 0x40c460
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x40c470
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x40c474
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x40c479
        int128_t v18 = __asm_addss(v16, v16); // 0x40c47d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x40c39c;
        } else {
            goto lab_0x40c48a;
        }
    } else {
        // 0x40c382
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x40c386
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40c38a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40c38f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40c48a;
        } else {
            goto lab_0x40c39c;
        }
    }
  lab_0x40c39c:
    // 0x40c39c
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x40c3a0
    int64_t v23 = v14; // 0x40c3a0
    int128_t v24 = v12; // 0x40c3a0
    int64_t v25 = v10; // 0x40c3a0
    int128_t v26 = v22; // 0x40c3a0
    goto lab_0x40c3a5;
  lab_0x40c48a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x40c497
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x40c49a
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x40c3a5;
  lab_0x40c3a5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x40c3a5
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x40c362
        return result;
    }
    int64_t v29 = a1 + 40; // 0x40c3ae
    function_40b4d0(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x40c3b7
    int64_t v31 = *(int64_t *)v29; // 0x40c3bb
    int128_t v32; // 0x40c330
    if (v30 < 0) {
        // 0x40c4d0
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x40c4e0
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x40c3c8
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x40c3d1
    int128_t v35; // 0x40c330
    int64_t v36; // 0x40c330
    if (v34 < 0) {
        // 0x40c4b0
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x40c4bd
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x40c4c0
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x40c3de
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x40c3e2
        v36 = v34;
        v35 = v39;
    }
    // 0x40c3e7
    __asm_comiss_2(__asm_mulss_5(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x40c362
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x40c3f8
    int128_t v41 = v40; // 0x40c401
    if (*(char *)(v31 + 16) == 0) {
        // 0x40c403
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x40c408
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x40c4f8
    if ((char)function_40be70(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x40c362
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40c42a
    if (*v43 != 0) {
        int64_t v44; // 0x40c330
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x40c438
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x40c449
    *v43 = 0;
    // 0x40c362
    return result;
}
// Address range: 0x40c510 - 0x40c537
int64_t function_40c510(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40c510
    return (*(int64_t *)(a1 + 8) ^ function_413020(a1, a2, a3)) % a2;
}
// Address range: 0x40c540 - 0x40c54d
int64_t function_40c540(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x40c540
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x40c550 - 0x40c575
int64_t function_40c550(int64_t a1, int64_t a2) {
    // 0x40c550
    if (*(int64_t *)(a1 + 8) != *(int64_t *)(a2 + 8) || *(int64_t *)(a1 + 16) != *(int64_t *)(a2 + 16)) {
        // 0x40c55a
        return 0;
    }
    // 0x40c56a
    return function_40ef80(a1, a2);
}
// Address range: 0x40c580 - 0x40c5b3
int64_t function_40c580(int64_t str, int64_t str2) {
    // 0x40c580
    if (*(int64_t *)(str + 8) != *(int64_t *)(str2 + 8) || *(int64_t *)(str + 16) != *(int64_t *)(str2 + 16)) {
        // 0x40c58c
        return 0;
    }
    int32_t strcmp_rc = strcmp((char *)str, (char *)str2); // 0x40c5a4
    return (int64_t)(strcmp_rc & -256) | (int64_t)(strcmp_rc == 0);
}
// Address range: 0x40c5c0 - 0x40c5d5
int64_t function_40c5c0(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x40c5c7
    free(v1);
    free(v1);
    return &g90;
}
// Address range: 0x40c5e0 - 0x40c768
int64_t function_40c5e0(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    char v1 = *(char *)a1; // 0x40c614
    char v2 = v1; // 0x40c61c
    int64_t v3 = a1; // 0x40c61c
    int64_t v4 = a1; // 0x40c61c
    int64_t v5 = 0; // 0x40c61c
    int32_t v6 = 0; // 0x40c61c
    int64_t v7 = a1; // 0x40c61c
    char v8; // 0x40c5e0
    int64_t v9; // 0x40c5e0
    int64_t v10; // 0x40c5e0
    int64_t v11; // 0x40c5e0
    char v12; // 0x40c5e0
    int32_t v13; // 0x40c5e0
    int32_t v14; // 0x40c5e0
    int32_t v15; // 0x40c5e0
    int32_t v16; // 0x40c5e0
    char * v17; // 0x40c5e0
    char * v18; // 0x40c5e0
    int64_t v19; // 0x40c648
    if (v1 != 0) {
        while (true) {
            int64_t v20 = v5;
            v17 = (char *)v20;
            char v21 = v2; // 0x40c5e0
            char v22; // 0x40c5e0
            while (true) {
                // 0x40c622
                v14 = v6;
                v12 = v21;
                v9 = v4;
                v10 = v3;
                char v23; // 0x40c622
                while (true) {
                  lab_0x40c622:
                    // 0x40c622
                    v3 = v10;
                    v22 = v12;
                    v6 = v14;
                    v4 = v9 + 1;
                    v18 = (char *)v4;
                    v23 = *v18;
                    if (v23 == 47) {
                        // break (via goto) -> 0x40c6e0
                        goto lab_0x40c6e0;
                    }
                    if (v20 == 0 || v22 == 47 != v23 != 0) {
                        // break -> 0x40c610
                        break;
                    }
                    // 0x40c645
                    v19 = v20 - v3;
                    if (v19 == 1) {
                        // 0x40c730
                        v8 = v23;
                        v16 = v6;
                        if (*(char *)v3 == 46) {
                            goto lab_0x40c6ad;
                        } else {
                            // 0x40c73b
                            *v17 = 0;
                            goto lab_0x40c663;
                        }
                    } else {
                        // 0x40c655
                        *v17 = 0;
                        if (v19 == 2) {
                            // 0x40c6f0
                            if (*(char *)v3 != 46) {
                                goto lab_0x40c663;
                            } else {
                                // 0x40c6fb
                                v15 = 0;
                                v13 = 0;
                                v11 = 0;
                                if (*(char *)(v3 + 1) != 46) {
                                    goto lab_0x40c663;
                                } else {
                                    goto lab_0x40c686;
                                }
                            }
                        } else {
                            goto lab_0x40c663;
                        }
                    }
                }
                // 0x40c610
                v21 = v23;
                v7 = v3;
                if (v23 == 0) {
                    // break (via goto) -> 0x40c6c8
                    goto lab_0x40c6c8_2;
                }
            }
          lab_0x40c6e0:
            // 0x40c6e0
            v5 = v22 != 47 ? v4 : v20;
            v2 = 47;
        }
    }
  lab_0x40c6c8_2:;
    int64_t result = v7 - a1; // 0x40c6cb
  lab_0x40c6ce:
    // 0x40c6ce
    return result;
  lab_0x40c748_2:;
    int64_t v24; // 0x40c5e0
    int64_t v25; // 0x40c690
    if (v24 == 0) {
        // 0x40c760
        result = 0x100000000 * v25 >> 32;
        return result;
    } else {
        int32_t * v26 = __errno_location(); // 0x40c74d
        if (*v26 != 2) {
            // 0x40c760
            result = 0x100000000 * v25 >> 32;
            return result;
        } else {
            // 0x40c757
            *v26 = (int32_t)v24;
            // 0x40c760
            result = 0x100000000 * v25 >> 32;
            return result;
        }
    }
  lab_0x40c6ad:
    // 0x40c6ad
    v14 = v16;
    v12 = v8;
    v9 = v4;
    v10 = v4;
    v7 = v4;
    if (v8 == 0) {
        // break (via goto) -> 0x40c6c8
        goto lab_0x40c6c8_2;
    }
    goto lab_0x40c622;
  lab_0x40c663:
    // 0x40c663
    v15 = 1;
    v13 = 1;
    v11 = 0;
    if ((int32_t)v19 < 0) {
        uint32_t v27 = *__errno_location(); // 0x40c721
        v15 = v6;
        v13 = v6 % 2;
        v11 = v27;
    }
    goto lab_0x40c686;
  lab_0x40c686:
    // 0x40c686
    v24 = v11;
    v25 = function_40f520((int64_t)a2, v3, v13, 0);
    int32_t v28 = v25; // 0x40c698
    if (v28 == -1) {
        goto lab_0x40c748_2;
    }
    // 0x40c6a1
    *v17 = 47;
    if (v28 != 0) {
        goto lab_0x40c748_2;
    }
    // 0x40c6a1
    v8 = *v18;
    v16 = v15;
    goto lab_0x40c6ad;
}
// Address range: 0x40c770 - 0x40ca78
int64_t function_40c770(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint32_t mode, int64_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    // 0x40c770
    int64_t err_num; // 0x40c770
    int64_t path; // 0x40c770
    int64_t v1; // 0x40c770
    if ((int32_t)a2 == 4 == ((char)v1 != 47)) {
        uint32_t v2 = *(int32_t *)(a2 + 4); // 0x40c8c0
        err_num = v2;
        if (v2 != 0) {
            goto lab_0x40c870;
        } else {
            // 0x40c8c9
            path = a1;
            if (a3 != 0) {
                goto lab_0x40c7b8;
            } else {
                goto lab_0x40c7d9;
            }
        }
    } else {
        // 0x40c7af
        path = a1;
        if (a3 == 0) {
            goto lab_0x40c7d9;
        } else {
            goto lab_0x40c7b8;
        }
    }
  lab_0x40c870:
    // 0x40c870
    function_40ec50(a1);
    error(0, (int32_t)err_num, dcgettext(NULL, "cannot create directory %s", 5));
    // 0x40c8a0
    return (int32_t)&g90 ^ (int32_t)&g90;
  lab_0x40c7d9:;
    int64_t v3 = 0x100000000 * a9 >> 32;
    int64_t v4 = 0x100000000 * a8 >> 32;
    int64_t v5 = 0x100000000 * a7 >> 32;
    uint64_t v6 = (int64_t)mode; // 0x40c77e
    int64_t v7; // 0x40c770
    int32_t v8; // 0x40c770
    int32_t v9; // 0x40c770
    int32_t mode2; // 0x40c770
    if ((int32_t)(v3 & v4) == -1) {
        if ((v5 & 3072 || v6 & 512) != 0) {
            // 0x40c920
            mode2 = mode & -19;
            goto lab_0x40c815;
        } else {
            uint32_t v10 = mkdir((char *)path, mode); // 0x40c8e2
            if (v10 != 0) {
                goto lab_0x40c82c;
            } else {
                // 0x40c8f2
                v9 = mode;
                v8 = 3;
                v7 = v10;
                if ((v6 % 512 & v5) == 0) {
                    // 0x40c8a0
                    return 1;
                }
                goto lab_0x40c95d;
            }
        }
    } else {
        // 0x40c80b
        mode2 = mode & -64;
        goto lab_0x40c815;
    }
  lab_0x40c7b8:;
    int64_t v11 = function_40c5e0(a1, (int64_t *)a2, a3, a4); // 0x40c7c5
    if (v11 < 0) {
        // 0x40c930
        if (v11 != -1) {
            // 0x40c8a0
            return 1;
        }
        // 0x40c93f
        err_num = (int64_t)*__errno_location();
        goto lab_0x40c870;
    } else {
        // 0x40c7d6
        path = v11 + a1;
        goto lab_0x40c7d9;
    }
  lab_0x40c815:;
    int32_t v12 = mkdir((char *)path, mode2); // 0x40c81c
    v9 = mode2;
    v8 = 3;
    v7 = 0;
    if (v12 == 0) {
        goto lab_0x40c95d;
    } else {
        goto lab_0x40c82c;
    }
  lab_0x40c82c:;
    uint32_t v13 = *__errno_location(); // 0x40c836
    int64_t v14 = v13; // 0x40c836
    v9 = -1;
    v8 = 2;
    v7 = v14;
    int32_t v15; // bp-200, 0x40c770
    if ((char)a10 == 0) {
        goto lab_0x40c95d;
    } else {
        // 0x40c83f
        if (v13 == 0) {
            // 0x40c8a0
            return 1;
        }
        // 0x40c848
        err_num = v14;
        if (a3 != 0 && v13 != 2) {
            int32_t v16 = __xstat(1, (char *)path, (struct stat *)&v15); // 0x40c860
            err_num = v14;
            if (v16 == 0) {
                // 0x40ca50
                err_num = v14;
                int32_t v17; // 0x40c770
                if ((v17 & 0xf000) == 0x4000) {
                    // 0x40c8a0
                    return 1;
                }
            }
        }
        goto lab_0x40c870;
    }
  lab_0x40c95d:;
    int64_t v18 = function_40f520(a2, path, v8, (int32_t)(int64_t)&v15); // 0x40c968
    int32_t v19 = v18; // 0x40c970
    if (v19 < -1) {
        // 0x40c8a0
        return 1;
    }
    int64_t v20 = v19 == 0 ? (int64_t)"." : path; // 0x40c97c
    if ((int32_t)function_4135d0((int64_t)v15, v20, v9, (int32_t)v4, (int32_t)v3, v6, v5 & 0xffffffff) == 0) {
        // 0x40c8a0
        return 1;
    }
    int32_t v21 = v7; // 0x40c9b5
    if (v21 == 0) {
        goto lab_0x40c9db;
    } else {
        // 0x40c9ba
        err_num = v7;
        if (a3 == 0 || v21 == 2) {
            goto lab_0x40c870;
        } else {
            int32_t v22 = *__errno_location(); // 0x40c9d2
            err_num = v7;
            if (v22 == 20) {
                goto lab_0x40c870;
            } else {
                goto lab_0x40c9db;
            }
        }
    }
  lab_0x40c9db:;
    int32_t * err_num2 = __errno_location(); // 0x40c9db
    function_40ec50(a1);
    char * v23 = (int32_t)(v3 & v4) != -1 ? "cannot change owner and permissions of %s" : "cannot change permissions of %s"; // 0x40ca08
    error(0, *err_num2, dcgettext(NULL, v23, 5));
    // 0x40c8a0
    return (int32_t)&g90 ^ (int32_t)&g90;
}
// Address range: 0x40ca80 - 0x40cde1
int64_t function_40ca80(int64_t a1) {
    // 0x40ca80
    int64_t v1; // 0x40ca80
    char v2 = v1;
    int64_t v3 = 0x100000000000000 * v1 >> 56; // 0x40ca8c
    int64_t v4 = a1; // 0x40ca94
    if ((v2 & -8) == 48) {
        int64_t v5 = 0xffffffd0 + v3; // 0x40cb56
        uint32_t v6 = (int32_t)v5;
        while (v6 < 0x1000) {
            // 0x40cb48
            v4++;
            char v7 = *(char *)v4; // 0x40cb48
            if ((v7 & -8) != 48) {
                // 0x40cd50
                if (v7 == 0) {
                    int64_t v8 = v4 - a1; // 0x40cd5a
                    int32_t v9 = v8 < 5 == (4 - v8 & v8) < 0 ? 4095 : v6 & 3072 | 1023; // 0x40cd79
                    int64_t result = function_4112e0(32); // 0x40cd7c
                    *(int16_t *)result = 317;
                    *(int32_t *)(result + 4) = 4095;
                    *(int32_t *)(result + 8) = v6;
                    *(int32_t *)(result + 12) = v9;
                    *(char *)(result + 17) = 0;
                    return result;
                }
                return 0;
            }
            v5 = (int64_t)v7 + 0xffffffd0 + 8 * (v5 & 0xffffffff);
            v6 = (int32_t)v5;
        }
      lab_0x40cb35:
        // 0x40cb35
        return 0;
    }
    int64_t v10 = 1; // 0x40caa1
    int64_t v11 = a1; // 0x40caa1
    int64_t v12; // 0x40ca80
    if (v2 == 0) {
        // 0x40cda8
        v12 = 16;
    } else {
        int64_t v13 = v3;
        v11++;
        unsigned char v14 = *(char *)v11; // 0x40cac6
        v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        while (v14 != 0) {
            // 0x40cab0
            v13 = v14;
            v11++;
            v14 = *(char *)v11;
            v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        }
        int64_t v15 = 16 * v10; // 0x40cadd
        if (v15 < 0) {
            // 0x40cddc
            function_411530(v15);
            // UNREACHABLE
        }
        // 0x40caea
        v12 = v15;
        if (v10 >= 0x1000000000000000) {
            // 0x40cddc
            function_411530(v15);
            // UNREACHABLE
        }
    }
    int64_t v16 = function_4112e0(v12); // 0x40caf3
    int64_t v17; // 0x40ca80
    int64_t v18; // 0x40ca80
    int64_t v19; // 0x40ca80
    int64_t v20; // 0x40ca80
    int64_t v21; // 0x40ca80
    int64_t v22; // 0x40ca80
    int64_t v23; // 0x40ca80
    int64_t v24; // 0x40ca80
    int64_t v25; // 0x40ca80
    int64_t v26; // 0x40ca80
    int64_t v27; // 0x40ca80
    int64_t v28; // 0x40ca80
    int64_t v29; // 0x40ca80
    int64_t v30; // 0x40ca80
    int64_t v31; // 0x40ca80
    int64_t v32; // 0x40ca80
    int64_t v33; // 0x40cbe3
    int64_t v34; // 0x40cbe3
    char v35; // 0x40ca80
    while (true) {
        int64_t v36 = 0;
        v32 = 0;
        v18 = 0;
        v26 = a1;
        unsigned char v37; // 0x40cafd
        while (true) {
          lab_0x40cafd:
            // 0x40cafd
            v27 = v26;
            v37 = *(char *)v27;
            if (v37 == 97) {
                // 0x40cd10
                v32 = 4095;
                v19 = 4095;
                goto lab_0x40cd15;
            } else {
                if (v37 <= 97) {
                    // break -> 0x40cb70
                    break;
                }
                int64_t v38 = v18; // 0x40cd40
                switch (v37) {
                    case 111: {
                        int64_t v39 = v38 & 0xfffffdf8 | 519; // 0x40cd40
                        v32 = v39;
                        v19 = v39;
                        goto lab_0x40cd15;
                    }
                    case 117: {
                        int64_t v40 = v38 & 0xfffff63f | 2496; // 0x40cd30
                        v32 = v40;
                        v19 = v40;
                        goto lab_0x40cd15;
                    }
                    case 103: {
                        int64_t v41 = v38 & 0xfffffbc7 | 1080; // 0x40cd20
                        v32 = v41;
                        v19 = v41;
                        goto lab_0x40cd15;
                    }
                    default: {
                        goto lab_0x40cb2b_3;
                    }
                }
            }
        }
        switch (v37) {
            default: {
                if (v37 != 43) {
                    // break -> 0x40cb2b
                    break;
                }
            }
            case 45: {
            }
            case 61: {
                // 0x40cb82
                v29 = v27;
                v24 = v37;
                v20 = 16 * v36 + v16;
                v22 = v36;
                // break -> 0x40cbe3
                break;
            }
        }
        while (true) {
          lab_0x40cbe3:
            // 0x40cbe3
            v21 = v20;
            v25 = v24;
            int64_t v42 = v29;
            v33 = v42 + 1;
            char v43 = *(char *)v33; // 0x40cbe3
            if (v43 == 103) {
                // 0x40cd00
                v17 = v42 + 2;
                v30 = 56;
                goto lab_0x40cb9e;
            } else {
                // 0x40cbf4
                v34 = v43;
                if (v43 > 103) {
                    int64_t v44 = v42 + 2;
                    v17 = v44;
                    v30 = 7;
                    if (v43 != 111) {
                        // 0x40cb90
                        v17 = v44;
                        v30 = 448;
                        if (v43 != 117) {
                            goto lab_0x40cc80;
                        } else {
                            goto lab_0x40cb9e;
                        }
                    } else {
                        goto lab_0x40cb9e;
                    }
                } else {
                    int64_t v45 = v34; // 0x40cc16
                    int64_t v46 = v33; // 0x40cc16
                    if ((v43 & -8) == 48) {
                        int64_t v47 = 0xffffffd0 + v45; // 0x40cc1a
                        uint32_t v48 = (int32_t)v47;
                        if (v48 >= 0x1000) {
                            // break (via goto) -> 0x40cb2b
                            goto lab_0x40cb2b_3;
                        }
                        int64_t v49 = v46 + 1; // 0x40cc1e
                        char v50 = *(char *)v49; // 0x40cc2e
                        int64_t v51 = v50; // 0x40cc2e
                        int64_t v52 = v47 & 0xffffffff; // 0x40cc39
                        v46 = v49;
                        while ((v50 & -8) == 48) {
                            // 0x40cc1a
                            v47 = v51 + 0xffffffd0 + 8 * v52;
                            v48 = (int32_t)v47;
                            if (v48 >= 0x1000) {
                                // break (via goto) -> 0x40cb2b
                                goto lab_0x40cb2b_3;
                            }
                            // 0x40cc2e
                            v49 = v46 + 1;
                            v50 = *(char *)v49;
                            v51 = v50;
                            v52 = v47 & 0xffffffff;
                            v46 = v49;
                        }
                        // 0x40cc3b
                        if ((int32_t)v32 != 0) {
                            // break (via goto) -> 0x40cb2b
                            goto lab_0x40cb2b_3;
                        }
                        if (v50 != 0 == (v50 != 44)) {
                            // break (via goto) -> 0x40cb2b
                            goto lab_0x40cb2b_3;
                        }
                        // 0x40cc50
                        *(char *)v21 = (char)v25;
                        v32 = 4095;
                        *(int32_t *)(v21 + 8) = v48;
                        *(char *)(v21 + 1) = 1;
                        *(int32_t *)(v21 + 4) = 4095;
                        v31 = 4095;
                        v28 = v49;
                        v23 = v51 & 0xffffffff;
                        goto lab_0x40cbbf;
                    } else {
                        goto lab_0x40cc80;
                    }
                }
            }
        }
      lab_0x40cdb2:
        // 0x40cdb2
        if (v35 != 44) {
            if (v35 != 0) {
                goto lab_0x40cb2b_3;
            } else {
                // 0x40cdcd
                int64_t v53; // 0x40ca80
                *(char *)(v16 + 1 + 16 * v53) = 0;
                return 0;
            }
        }
    }
  lab_0x40cb2b_3:
    // 0x40cb2b
    free((int64_t *)v16);
    // 0x40cb35
    return (int32_t)&g90 ^ (int32_t)&g90;
  lab_0x40cca8:;
    // 0x40cca8
    int64_t v54; // 0x40ca80
    int64_t v55 = v54 + 1; // 0x40cca8
    int64_t v56 = (int64_t)*(char *)v55; // 0x40ccac
    int64_t v57 = v56 + 0xffffffa8; // 0x40ccb0
    int64_t v58; // 0x40ca80
    int64_t v59 = v58; // 0x40ccb7
    int64_t v60 = v56; // 0x40ccb7
    int64_t v61; // 0x40ca80
    int64_t v62 = v61; // 0x40ccb7
    int64_t v63 = v57; // 0x40ccb7
    int64_t v64 = v55; // 0x40ccb7
    if ((char)v57 >= 33) {
        // break -> 0x40ccb9
        goto lab_0x40ccb9_2;
    }
    goto lab_0x40cc90;
  lab_0x40cb9e:
    // 0x40cb9e
    *(char *)(v21 + 1) = 3;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v30;
    *(char *)v21 = (char)v25;
    int64_t v72 = v30; // 0x40cbb3
    int64_t v73 = v17; // 0x40cbb3
    int64_t v74 = (int64_t)*(char *)v17; // 0x40cbb3
    goto lab_0x40cbb6;
  lab_0x40cbb6:;
    int64_t v75 = v32;
    v31 = v72 & 0xffffffff & ((int32_t)v75 != 0 ? v75 : 0xffffffff);
    v28 = v73;
    v23 = v74;
    goto lab_0x40cbbf;
  lab_0x40cc80:
    // 0x40cc80
    v59 = 0;
    v60 = v34;
    v62 = 1;
    v63 = v34 + 0xffffffa8;
    v64 = v33;
    int64_t v70; // 0x40ca80
    int64_t v69; // 0x40ca80
    int64_t v67; // 0x40ca80
    int64_t v68; // 0x40ca80
    while (true) {
      lab_0x40cc90:
        // 0x40cc90
        v54 = v64;
        int64_t v65 = v62;
        int64_t v66 = v59;
        g91 = v63 % 256;
        v58 = v66;
        v61 = 2;
        v67 = v66;
        v68 = v60;
        v69 = v65;
        v70 = v54;
        uint64_t v71; // 0x40ca80
        switch ((char)v71) {
            case 0: {
                goto lab_0x40cca8;
            }
            case 26: {
                // 0x40ccf8
                v58 = v66 & 0xfffffedb | 292;
                v61 = v65;
                goto lab_0x40cca8;
            }
            case 27: {
                // 0x40ccf0
                v58 = v66 | 3072;
                v61 = v65;
                goto lab_0x40cca8;
            }
            case 28: {
                // 0x40cce8
                v58 = v66 | 512;
                v61 = v65;
                goto lab_0x40cca8;
            }
            case 31: {
                // 0x40cce0
                v58 = v66 | 146;
                v61 = v65;
                goto lab_0x40cca8;
            }
            case 32: {
                // 0x40ccd8
                v58 = v66 & 0xffffffb6 | 73;
                v61 = v65;
                goto lab_0x40cca8;
            }
            default: {
                goto lab_0x40ccb9_2;
            }
        }
    }
  lab_0x40ccb9_2:
    // 0x40ccb9
    *(char *)v21 = (char)v25;
    *(char *)(v21 + 1) = (char)v69;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v67;
    v72 = v67;
    v73 = v70;
    v74 = v68 & 0xffffffff;
    goto lab_0x40cbb6;
  lab_0x40cbbf:
    // 0x40cbbf
    *(int32_t *)(v21 + 12) = (int32_t)v31;
    if ((v23 & 239) != 45) {
        // 0x40cbd6
        int64_t v76; // 0x40ca80
        v35 = v76;
        if (v35 != 43) {
            // break -> 0x40cdb2
            goto lab_0x40cdb2;
        }
    }
    // 0x40cbe0
    v29 = v28;
    v24 = v23;
    v20 = v21 + 16;
    v22++;
    goto lab_0x40cbe3;
  lab_0x40cd15:
    // 0x40cd15
    v18 = v19;
    v26 = v27 + 1;
    goto lab_0x40cafd;
}
// Address range: 0x40cdf0 - 0x40ce44
int64_t function_40cdf0(int64_t a1) {
    // 0x40cdf0
    int64_t v1; // bp-152, 0x40cdf0
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x40ce03
    int64_t result = 0; // 0x40ce0e
    if (v2 == 0) {
        // 0x40ce10
        result = function_4112e0(32);
        *(int16_t *)result = 317;
        *(int32_t *)(result + 4) = 4095;
        *(int32_t *)(result + 12) = 4095;
        *(char *)(result + 17) = 0;
    }
    // 0x40ce3b
    return result;
}
// Address range: 0x40ce50 - 0x40cfcd
int64_t function_40ce50(uint32_t a1, int32_t a2, int32_t a3, int64_t a4, int32_t a5) {
    char v1 = *(char *)(a4 + 1); // 0x40ce50
    int64_t v2 = a1 % 0x1000; // 0x40ce59
    int64_t result = v2; // 0x40ce67
    int64_t v3 = 0; // 0x40ce67
    int64_t v4; // 0x40ce50
    int64_t v5; // 0x40ce50
    int64_t v6; // 0x40ce50
    char v7; // 0x40ce50
    char v8; // 0x40ce50
    int64_t v9; // 0x40ce50
    int64_t v10; // 0x40ce50
    int64_t v11; // 0x40ce50
    int64_t v12; // 0x40ce50
    int64_t v13; // 0x40ce50
    int64_t v14; // 0x40ce50
    int64_t v15; // 0x40ce50
    int64_t v16; // 0x40ce50
    int64_t v17; // 0x40ce50
    int64_t v18; // 0x40ce50
    uint32_t v19; // 0x40cf0b
    int64_t v20; // 0x40cf0f
    if (v1 != 0) {
        // 0x40ce6d
        v10 = v2;
        v14 = a4;
        v12 = 0;
        v7 = v1;
        while (true) {
          lab_0x40cf0b_2:
            // 0x40cf0b
            v8 = v7;
            v13 = v12;
            v15 = v14;
            v11 = v10;
            v19 = *(int32_t *)(v15 + 4);
            v20 = (int64_t)*(int32_t *)(v15 + 8);
            if ((char)a2 == 0) {
                // 0x40ce80
                v16 = 0;
                v4 = 0xffffffff;
                if (v8 == 2) {
                    // 0x40cfc0
                    v17 = 0;
                    v9 = v20;
                    v5 = 0xffffffff;
                    v18 = 0;
                    v6 = 0xffffffff;
                    if ((v11 & 73) == 0) {
                        goto lab_0x40ced4;
                    } else {
                        goto lab_0x40cf3c;
                    }
                } else {
                    goto lab_0x40ce8f;
                }
            } else {
                int32_t v21 = *(int32_t *)(v15 + 12); // 0x40cf1c
                int64_t v22 = v21 | -3073; // 0x40cf23
                int64_t v23 = v21 & 3072 ^ 3072; // 0x40cf2c
                v16 = v23;
                v4 = v22;
                v18 = v23;
                v6 = v22;
                if (v8 != 2) {
                    goto lab_0x40ce8f;
                } else {
                    goto lab_0x40cf3c;
                }
            }
        }
    }
  lab_0x40cf88_2:
    // 0x40cf88
    if (a5 != 0) {
        // 0x40cf8d
        *(int32_t *)(int64_t)a5 = (int32_t)v3;
    }
    // 0x40cf90
    return result;
  lab_0x40ce8f:;
    int64_t v24 = v4;
    int64_t v25 = v16;
    v17 = v25;
    v9 = v20;
    v5 = v24;
    if (v8 == 3) {
        int64_t v26 = v11 & v20;
        int64_t v27 = v26 & 292; // 0x40ce9b
        int64_t v28 = (v27 | (int64_t)(v27 == 0)) + (v27 ^ 511) & 292;
        int64_t v29 = (v26 & 146) != 0 ? v28 | 146 : v28; // 0x40cebe
        v17 = v25;
        v9 = ((v26 & 73) != 0 ? v29 | 73 : v29) | v26;
        v5 = v24;
    }
    goto lab_0x40ced4;
  lab_0x40cf3c:;
    int64_t v60 = (int64_t)*(char *)v15; // 0x40cf40
    int64_t v61 = v6 & (v20 | 73); // 0x40cf44
    int64_t v32 = v18; // 0x40cf4a
    int64_t v33 = v61; // 0x40cf4a
    int64_t v34 = v6; // 0x40cf4a
    int64_t v35 = v60; // 0x40cf4a
    int64_t v36 = v18; // 0x40cf4a
    int64_t v37 = v61; // 0x40cf4a
    int64_t v38 = v60; // 0x40cf4a
    if (v19 == 0) {
        goto lab_0x40cee0;
    } else {
        goto lab_0x40cf50;
    }
  lab_0x40ced4:;
    int64_t v30 = (int64_t)*(char *)v15; // 0x40ced4
    int64_t v31 = v9 & 0xffffffff & v5; // 0x40ced8
    v32 = v17;
    v33 = v31;
    v34 = v5;
    v35 = v30;
    v36 = v17;
    v37 = v31;
    v38 = v30;
    if (v19 != 0) {
        goto lab_0x40cf50;
    } else {
        goto lab_0x40cee0;
    }
  lab_0x40cee0:;
    int64_t v39 = v33 & (int64_t)(-1 - a3);
    int64_t v40 = v39; // 0x40ce50
    int64_t v41 = v35; // 0x40ce50
    int64_t v42 = v32; // 0x40ce50
    int64_t v43 = v39; // 0x40ce50
    int64_t v44 = v34; // 0x40ce50
    int64_t v45 = v39; // 0x40ce50
    int64_t v46; // 0x40ce50
    switch ((char)v46) {
        case 45: {
            goto lab_0x40cfa0;
        }
        case 61: {
            goto lab_0x40cf6b;
        }
        default: {
            goto lab_0x40cef3;
        }
    }
  lab_0x40cf50:;
    int64_t v47 = v19; // 0x40cf0b
    int64_t v48 = v37 & v47;
    char v49 = v38; // 0x40cf53
    v45 = v48;
    if (v49 == 45) {
        goto lab_0x40cfa0;
    } else {
        // 0x40cf59
        if (v49 != 61) {
            goto lab_0x40cef3;
        } else {
            int64_t v50 = v36 & 0xffffffff | v47 ^ 0xffffffff; // 0x40cf62
            v42 = v50;
            v43 = v48;
            v44 = v50 ^ 0xffffffff;
            goto lab_0x40cf6b;
        }
    }
  lab_0x40cfa0:;
    int64_t v51 = v11 & 0xffffffff & (v45 ^ 0xffffffff); // 0x40cfa9
    int64_t v52 = (v45 | v13) & 0xffffffff; // 0x40cfa9
    goto lab_0x40cefd;
  lab_0x40cf6b:;
    char v57 = *(char *)(v15 + 17); // 0x40cf6f
    int64_t v58 = v44 % 0x1000 | v13 & 0xffffffff; // 0x40cf7d
    int64_t v59 = (v42 & v11 | v43) & 0xffffffff; // 0x40cf80
    int64_t v54 = v59; // 0x40cf86
    int64_t v55 = v58; // 0x40cf86
    char v56 = v57; // 0x40cf86
    result = v59;
    v3 = v58;
    if (v57 == 0) {
        // break -> 0x40cf88
        goto lab_0x40cf88_2;
    }
    goto lab_0x40cf0b;
  lab_0x40cef3:
    // 0x40cef3
    v51 = v11;
    v52 = v13;
    if ((char)v41 == 43) {
        // 0x40cfb0
        v51 = (v40 | v11) & 0xffffffff;
        v52 = (v40 | v13) & 0xffffffff;
    }
    goto lab_0x40cefd;
  lab_0x40cefd:;
    char v53 = *(char *)(v15 + 17); // 0x40cf01
    v54 = v51;
    v55 = v52;
    v56 = v53;
    result = v51;
    v3 = v52;
    if (v53 == 0) {
        // break -> 0x40cf88
        goto lab_0x40cf88_2;
    }
    goto lab_0x40cf0b;
  lab_0x40cf0b:
    // 0x40cf0b
    v10 = v54;
    v14 = v15 + 16;
    v12 = v55;
    v7 = v56;
    goto lab_0x40cf0b_2;
}
// Address range: 0x40cfd0 - 0x40d069
int64_t function_40cfd0(int64_t str) {
    // 0x40cfd0
    if (str == 0) {
        // 0x40d049
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g47);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40cfde
    int64_t result = (int64_t)found_char_pos; // 0x40cfde
    if (found_char_pos == NULL) {
        // 0x40d039
        g69 = (char *)str;
        g46 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x40cfe8
    if (v1 - str < 7) {
        // 0x40d039
        g69 = (char *)str;
        g46 = str;
        return result;
    }
    // 0x40cff8
    bool v2; // 0x40cfd0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x40cfd0
    int64_t v5 = result - 6; // 0x40cfd0
    int64_t v6 = 7; // 0x40d006
    unsigned char v7 = *(char *)v5; // 0x40d006
    char v8 = *(char *)v4; // 0x40d006
    char v9 = v8; // 0x40d006
    bool v10 = false; // 0x40d006
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
    int64_t v12 = (int64_t)"lt-"; // 0x40d010
    int64_t v13 = v1; // 0x40d010
    int64_t v14 = 3; // 0x40d010
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x40d039
        g69 = (char *)str;
        g46 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x40d022
    char v16 = *(char *)v12; // 0x40d022
    char v17 = v16; // 0x40d022
    bool v18 = false; // 0x40d022
    while (v15 == v16) {
        // 0x40d012
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
    int64_t v20 = v1; // 0x40d02c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40d02e
        v20 = result + 4;
        g43 = v20;
    }
    // 0x40d039
    g69 = (char *)v20;
    g46 = v20;
    return result;
}
// Address range: 0x40d070 - 0x40d0af
int64_t function_40d070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d070
    int64_t v1; // bp-28, 0x40d070
    int64_t v2 = function_412b30(a1, a2, a5 & 0xffffffff, &v1); // 0x40d083
    int64_t result = 0xfffffffe; // 0x40d08a
    if ((int32_t)v2 == 0) {
        // 0x40d08c
        result = function_412b60(&v1, a3, a4 & 0xffffffff);
    }
    // 0x40d09b
    return result;
}
// Address range: 0x40d0b0 - 0x40d0cc
int64_t function_40d0b0(int64_t a1, int64_t a2, int32_t a3) {
    int32_t v1 = a3; // bp-12, 0x40d0b4
    return function_412b60((int64_t *)&v1, a1, a2 & 0xffffffff);
}
// Address range: 0x40d0d0 - 0x40d1c2
int64_t function_40d0d0(int64_t * a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x40d0e4
    if ((int64_t *)v1 != a1) {
        // 0x40d0f1
        return (int64_t)v1;
    }
    int64_t v2 = function_413060(); // 0x40d100
    char v3 = *(char *)v2 & -33;
    int64_t result; // 0x40d1b6
    if (v3 == 85) {
        // 0x40d110
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x40d1a8
            result = (int32_t)a2 != 9 ? (int64_t)&g15 : (int64_t)&g8;
            return result;
        }
        char v4 = *v1; // 0x40d13e
        int64_t result2 = v4 != 96 ? (int64_t)&g9 : (int64_t)&g12; // 0x40d14b
        // 0x40d0f1
        return result2;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x40d1a8
        result = (int32_t)a2 != 9 ? (int64_t)&g15 : (int64_t)&g8;
        return result;
    }
    char v5 = *v1; // 0x40d18d
    int64_t result3 = v5 != 96 ? (int64_t)&g10 : (int64_t)&g11; // 0x40d19a
    // 0x40d0f1
    return result3;
}
// Address range: 0x40d1d0 - 0x40d227
int64_t function_40d1d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x40d1d0
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x40d227 - 0x40e3f1
int64_t function_40d227(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x40d271
    int64_t v3 = 0; // 0x40d271
    int64_t v4; // 0x40d227
    int64_t v5; // 0x40d227
    int64_t v6; // 0x40d227
    int64_t v7; // 0x40d227
    int64_t v8; // 0x40d227
    int64_t v9; // 0x40d227
    int64_t v10; // 0x40d227
    int64_t v11; // 0x40d227
    int64_t v12; // 0x40d227
    int64_t v13; // 0x40d227
    int64_t v14; // 0x40d227
    int64_t v15; // 0x40d227
    int64_t v16; // 0x40d227
    int64_t v17; // 0x40d227
    int64_t v18; // 0x40d227
    int64_t result; // 0x40d227
    int64_t v19; // 0x40d227
    int32_t wc; // bp+132, 0x40d227
    int64_t ps; // bp+136, 0x40d227
    char v20; // 0x40d7e0
    int64_t v21; // 0x40d7e0
    int64_t v22; // 0x40db88
    int64_t v23; // 0x40d227
    int64_t v24; // 0x40dba7
    int32_t v25; // 0x40d227
    while (true) {
      lab_0x40d278_2:
        // 0x40d278
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x40d227
        int64_t v27; // 0x40d2ac
        while (true) {
          lab_0x40d278:
            // 0x40d278
            v5 = v26;
            bool v28 = v15 == v5; // 0x40d283
            if (v15 == -1) {
                // 0x40d285
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x40d293
            if (v28) {
                // break (via goto) -> 0x40d9f8
                goto lab_0x40d9f8;
            }
            // 0x40d29c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g89 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40d88b
                    if (v25 % 2 == 0) {
                        goto lab_0x40d3d1;
                    }
                    // 0x40dcad
                    v26 = v5 + 1;
                    goto lab_0x40d278;
                }
                case 7: {
                    goto lab_0x40d3d1;
                }
                case 8: {
                    goto lab_0x40d3d1;
                }
                case 9: {
                    goto lab_0x40d5ea_2;
                }
                case 10: {
                    goto lab_0x40d5ea_2;
                }
                case 11: {
                    goto lab_0x40d3d1;
                }
                case 12: {
                    goto lab_0x40d3d1;
                }
                case 13: {
                    goto lab_0x40d5ea_2;
                }
                case 32: {
                    goto lab_0x40d5ea_2;
                }
                case 33: {
                    goto lab_0x40d5ea_2;
                }
                case 34: {
                    goto lab_0x40d5ea_2;
                }
                case 35: {
                    goto lab_0x40d39d;
                }
                case 36: {
                    goto lab_0x40d5ea_2;
                }
                case 37: {
                    goto lab_0x40d3d1;
                }
                case 38: {
                    goto lab_0x40d5ea_2;
                }
                case 39: {
                    goto lab_0x40d5ea_2;
                }
                case 40: {
                    goto lab_0x40d5ea_2;
                }
                case 41: {
                    goto lab_0x40d5ea_2;
                }
                case 42: {
                    goto lab_0x40d5ea_2;
                }
                case 43: {
                    goto lab_0x40d3d1;
                }
                case 44: {
                    goto lab_0x40d3d1;
                }
                case 45: {
                    goto lab_0x40d3d1;
                }
                case 46: {
                    goto lab_0x40d3d1;
                }
                case 47: {
                    goto lab_0x40d3d1;
                }
                case 48: {
                    goto lab_0x40d3d1;
                }
                case 49: {
                    goto lab_0x40d3d1;
                }
                case 50: {
                    goto lab_0x40d3d1;
                }
                case 51: {
                    goto lab_0x40d3d1;
                }
                case 52: {
                    goto lab_0x40d3d1;
                }
                case 53: {
                    goto lab_0x40d3d1;
                }
                case 54: {
                    goto lab_0x40d3d1;
                }
                case 55: {
                    goto lab_0x40d3d1;
                }
                case 56: {
                    goto lab_0x40d3d1;
                }
                case 57: {
                    goto lab_0x40d3d1;
                }
                case 58: {
                    goto lab_0x40d3d1;
                }
                case 59: {
                    goto lab_0x40d5ea_2;
                }
                case 60: {
                    goto lab_0x40d5ea_2;
                }
                case 61: {
                    goto lab_0x40d5ea_2;
                }
                case 62: {
                    goto lab_0x40d5ea_2;
                }
                case 63: {
                    goto lab_0x40d5ea_2;
                }
                case 65: {
                    goto lab_0x40d3d1;
                }
                case 66: {
                    goto lab_0x40d3d1;
                }
                case 67: {
                    goto lab_0x40d3d1;
                }
                case 68: {
                    goto lab_0x40d3d1;
                }
                case 69: {
                    goto lab_0x40d3d1;
                }
                case 70: {
                    goto lab_0x40d3d1;
                }
                case 71: {
                    goto lab_0x40d3d1;
                }
                case 72: {
                    goto lab_0x40d3d1;
                }
                case 73: {
                    goto lab_0x40d3d1;
                }
                case 74: {
                    goto lab_0x40d3d1;
                }
                case 75: {
                    goto lab_0x40d3d1;
                }
                case 76: {
                    goto lab_0x40d3d1;
                }
                case 77: {
                    goto lab_0x40d3d1;
                }
                case 78: {
                    goto lab_0x40d3d1;
                }
                case 79: {
                    goto lab_0x40d3d1;
                }
                case 80: {
                    goto lab_0x40d3d1;
                }
                case 81: {
                    goto lab_0x40d3d1;
                }
                case 82: {
                    goto lab_0x40d3d1;
                }
                case 83: {
                    goto lab_0x40d3d1;
                }
                case 84: {
                    goto lab_0x40d3d1;
                }
                case 85: {
                    goto lab_0x40d3d1;
                }
                case 86: {
                    goto lab_0x40d3d1;
                }
                case 87: {
                    goto lab_0x40d3d1;
                }
                case 88: {
                    goto lab_0x40d3d1;
                }
                case 89: {
                    goto lab_0x40d3d1;
                }
                case 90: {
                    goto lab_0x40d3d1;
                }
                case 91: {
                    goto lab_0x40d5ea_2;
                }
                case 92: {
                    goto lab_0x40d5ea_2;
                }
                case 93: {
                    goto lab_0x40d3d1;
                }
                case 94: {
                    goto lab_0x40d5ea_2;
                }
                case 95: {
                    goto lab_0x40d3d1;
                }
                case 96: {
                    goto lab_0x40d5ea_2;
                }
                case 97: {
                    goto lab_0x40d3d1;
                }
                case 98: {
                    goto lab_0x40d3d1;
                }
                case 99: {
                    goto lab_0x40d3d1;
                }
                case 100: {
                    goto lab_0x40d3d1;
                }
                case 101: {
                    goto lab_0x40d3d1;
                }
                case 102: {
                    goto lab_0x40d3d1;
                }
                case 103: {
                    goto lab_0x40d3d1;
                }
                case 104: {
                    goto lab_0x40d3d1;
                }
                case 105: {
                    goto lab_0x40d3d1;
                }
                case 106: {
                    goto lab_0x40d3d1;
                }
                case 107: {
                    goto lab_0x40d3d1;
                }
                case 108: {
                    goto lab_0x40d3d1;
                }
                case 109: {
                    goto lab_0x40d3d1;
                }
                case 110: {
                    goto lab_0x40d3d1;
                }
                case 111: {
                    goto lab_0x40d3d1;
                }
                case 112: {
                    goto lab_0x40d3d1;
                }
                case 113: {
                    goto lab_0x40d3d1;
                }
                case 114: {
                    goto lab_0x40d3d1;
                }
                case 115: {
                    goto lab_0x40d3d1;
                }
                case 116: {
                    goto lab_0x40d3d1;
                }
                case 117: {
                    goto lab_0x40d3d1;
                }
                case 118: {
                    goto lab_0x40d3d1;
                }
                case 119: {
                    goto lab_0x40d3d1;
                }
                case 120: {
                    goto lab_0x40d3d1;
                }
                case 121: {
                    goto lab_0x40d3d1;
                }
                case 122: {
                    goto lab_0x40d3d1;
                }
                case 123: {
                    goto lab_0x40d375;
                }
                case 124: {
                    goto lab_0x40d5ea_2;
                }
                case 125: {
                    goto lab_0x40d375;
                }
                case 126: {
                    goto lab_0x40d39d;
                }
                default: {
                    goto lab_0x40d775;
                }
            }
        }
      lab_0x40d775:
        if (v23 != 1) {
            // 0x40dae0
            ps = 0;
            int64_t len = v15; // 0x40daf0
            if (v15 == -1) {
                // 0x40daf2
                len = strlen((char *)str);
            }
            // 0x40db1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40db7f:
                // 0x40db7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x40db84
                int64_t v30 = v29 + str;
                v24 = function_4129f0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40e0fa_2;
                    }
                    case -1: {
                        goto lab_0x40e0fa_2;
                    }
                    case -2: {
                        // 0x40e1dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x40e217
                            v19 = v18;
                            int64_t v31 = v18; // 0x40e21a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x40e227
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x40e220
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40e0fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40e0fa_2;
                    }
                    case 1: {
                        goto lab_0x40db50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40dbfc
                        char v34 = *(char *)v33; // 0x40dc0d
                        unsigned char v35; // 0x40d227
                        if (v34 < 125) {
                            // 0x40dc18
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40dc2f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x40d5ea_2;
                            }
                        }
                        // 0x40dc00
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40dc0d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x40dc18
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40dc2f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x40d5ea_2;
                                }
                            }
                            // 0x40dc00
                            v33++;
                        }
                        goto lab_0x40db50;
                    }
                }
            }
            goto lab_0x40e0fa_2;
        } else {
            // 0x40d7c4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x40d3d1;
        }
    }
  lab_0x40d9f8:
    // 0x40d9f8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40e2fa
        if (v8 > result) {
            // 0x40e303
            *(char *)(v12 + result) = 0;
        }
        // 0x40d627
        return result;
    }
    goto lab_0x40d5ea_2;
  lab_0x40d3d1:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x40d3e0
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40d5ea_2;
        }
    }
    int64_t v42 = result; // 0x40d4e1
    char v43 = v20; // 0x40d4e1
    int64_t v44 = v58; // 0x40d4e1
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x40d4e1
    int64_t v46 = v56; // 0x40d4e1
    goto lab_0x40d45d;
  lab_0x40d5ea_2:;
    // 0x40d627
    char * v36; // 0x40d227
    return function_40d1d0(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x40e0fa_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x40d3d1;
    } else {
        uint64_t v40 = v37 + v5; // 0x40dcce
        int64_t v41 = v5 + 1; // 0x40ddb1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x40ddb8
        char v48 = v20; // 0x40ddb8
        int64_t v49 = result; // 0x40ddb8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x40dd81
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x40dd85
            int64_t v52 = v50 + 1; // 0x40dd8a
            int64_t v53 = v47 + 1; // 0x40ddb1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40dd7c
                v50 = v52;
                if (v38 > v50) {
                    // 0x40dd81
                    *(char *)(v50 + v39) = v51;
                }
                // 0x40dd85
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
        goto lab_0x40d45d;
    }
  lab_0x40db50:
    // 0x40db50
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40db6f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x40db72
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x40e0fa
        goto lab_0x40e0fa_2;
    }
    goto lab_0x40db7f;
  lab_0x40d39d:
    // 0x40d39d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40d5ea_2;
    }
    goto lab_0x40d3d1;
  lab_0x40d375:;
    bool v61 = v15 == 1; // 0x40d380
    if (v15 == -1) {
        // 0x40d382
        v61 = *(char *)v1 == 0;
    }
    // 0x40d38e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x40d3d1;
    } else {
        goto lab_0x40d39d;
    }
  lab_0x40d45d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x40d462
        *(char *)(v59 + v60) = v43;
    }
    // 0x40d466
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x40d278_2;
}
// Address range: 0x40e400 - 0x40e59e
int64_t function_40e400(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x40e402
    int32_t * v3 = __errno_location(); // 0x40e41c
    int64_t v4 = (int64_t)g35; // 0x40e421
    int32_t v5 = *v3; // 0x40e42b
    int64_t v6 = v4; // 0x40e441
    if (v2 >= (int64_t)*(int32_t *)&g38) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x40e599
            function_411530(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x40e450
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x40e457
        int64_t v9; // 0x40e400
        if (g35 == &g36) {
            int64_t v10 = function_411340(0, v8); // 0x40e57a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g36); // 0x40e57f
            *(int64_t *)&g35 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_411340(v4, v8); // 0x40e46b
            *(int64_t *)&g35 = v12;
            v9 = v12;
        }
        // 0x40e47a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g38; // 0x40e47a
        int32_t v14 = v7; // 0x40e481
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g38 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x40e4b1
    int64_t v17 = v15 + 8; // 0x40e4b4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x40e4bb
    int64_t * v19 = (int64_t *)v16; // 0x40e4be
    uint64_t v20 = *v19; // 0x40e4be
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x40e4c1
    int64_t result = *v21; // 0x40e4c1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x40e4cc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x40e4d5
    int64_t v24; // 0x40e400
    uint64_t v25 = function_40d1d0(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x40e4e4
    if (v20 > v25) {
        // 0x40e55b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x40e4f7
    *v19 = v26;
    if (result != (int64_t)&g70) {
        // 0x40e507
        free((int64_t *)result);
    }
    int64_t result2 = function_4112e0(v26); // 0x40e521
    *v21 = result2;
    int64_t v27 = *v22; // 0x40e53b
    int64_t v28 = *v23; // 0x40e53e
    int64_t v29; // 0x40e400
    function_40d1d0(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40e55b
    *v3 = v5;
    return result2;
}
// Address range: 0x40e5a0 - 0x40e5d4
int64_t function_40e5a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40e5a7
    int64_t result = function_4114e0(a1 == 0 ? (int64_t)&g71 : a1, 56); // 0x40e5c6
    return result;
}
// Address range: 0x40e5e0 - 0x40e5ef
int64_t function_40e5e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g71 : a1); // 0x40e5ec
    return result;
}
// Address range: 0x40e5f0 - 0x40e5ff
int64_t function_40e5f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 : a1; // 0x40e5f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g71;
}
// Address range: 0x40e600 - 0x40e633
int64_t function_40e600(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 + 8 : a1 + 8; // 0x40e619
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40e61e
    uint32_t v3 = *v2; // 0x40e61e
    uint32_t v4 = (int32_t)a2 % 32; // 0x40e622
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x40e640 - 0x40e653
int64_t function_40e640(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g71 + 4 : a1 + 4); // 0x40e64c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x40e660 - 0x40e68b
int64_t function_40e660(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g71 : a1; // 0x40e668
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x40e685
        abort();
        // UNREACHABLE
    }
    // 0x40e67c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g71;
}
// Address range: 0x40e690 - 0x40e702
int64_t function_40e690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g71 : a5; // 0x40e6b2
    int32_t * v2 = __errno_location(); // 0x40e6bb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x40e6d4
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x40e6d8
    uint32_t v5 = *(int32_t *)v1; // 0x40e6db
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x40e6e1
    int64_t result = function_40d1d0(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x40e6ea
    return result;
}
// Address range: 0x40e710 - 0x40e7f1
int64_t function_40e710(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g71 : a4; // 0x40e732
    int32_t * v2 = __errno_location(); // 0x40e738
    int64_t v3 = v1 + 8; // 0x40e74f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x40e757
    int32_t * v5 = (int32_t *)v1; // 0x40e75a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x40e768
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40e76b
    int64_t v8 = function_40d1d0(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x40e775
    int64_t v9 = v8 + 1; // 0x40e77a
    int64_t result = function_4112e0(v9); // 0x40e78f
    function_40d1d0(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x40e7d4
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x40e7dd
    return result;
}
// Address range: 0x40e800 - 0x40e80a
int64_t function_40e800(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40e800
    return function_40e710(a1, a2, 0, a3);
}
// Address range: 0x40e810 - 0x40e8a5
int64_t function_40e810(void) {
    uint32_t v1 = *(int32_t *)&g38; // 0x40e810
    int64_t v2 = v1; // 0x40e810
    int64_t v3 = v2; // 0x40e824
    if (v1 >= 2) {
        int64_t v4 = &g38;
        int64_t v5 = v4 + 16; // 0x40e843
        free((int64_t *)*(int64_t *)v4);
        v3 = &g90;
        while (v5 != (int64_t)g35 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x40e840
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g90;
        }
    }
    int64_t v6 = v3; // 0x40e85d
    if (g36 != 0x6219e0) {
        // 0x40e85f
        free((int64_t *)g36);
        g36 = 256;
        *(int64_t *)&g37 = (int64_t)&g70;
        v6 = &g90;
    }
    int64_t result = v6; // 0x40e881
    if (g35 != &g36) {
        // 0x40e883
        free(g35);
        *(int64_t *)&g35 = (int64_t)&g36;
        result = &g90;
    }
    // 0x40e896
    *(int32_t *)&g38 = 1;
    return result;
}
// Address range: 0x40e8b0 - 0x40e8c1
int64_t function_40e8b0(void) {
    // 0x40e8b0
    int64_t v1; // 0x40e8b0
    return function_40e400(v1, v1, -1, (int64_t *)&g71);
}
// Address range: 0x40e8d0 - 0x40e8da
int64_t function_40e8d0(void) {
    // 0x40e8d0
    int64_t v1; // 0x40e8d0
    return function_40e400(v1, v1, v1, (int64_t *)&g71);
}
// Address range: 0x40e8e0 - 0x40e8f6
int64_t function_40e8e0(int64_t a1) {
    // 0x40e8e0
    return function_40e400(0, a1, -1, (int64_t *)&g71);
}
// Address range: 0x40e900 - 0x40e912
int64_t function_40e900(int64_t a1, int64_t a2) {
    // 0x40e900
    return function_40e400(0, a1, a2, (int64_t *)&g71);
}
// Address range: 0x40e920 - 0x40e988
int64_t function_40e920(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40e930
    return function_40e400(a1, a3, -1, &v1);
}
// Address range: 0x40e990 - 0x40e9f4
int64_t function_40e990(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40e9a0
    return function_40e400((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x40ea00 - 0x40ea0c
int64_t function_40ea00(int64_t a1, int64_t a2) {
    // 0x40ea00
    return function_40e920(0, a1 & 0xffffffff, a2);
}
// Address range: 0x40ea10 - 0x40ea1f
int64_t function_40ea10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40ea10
    return function_40e990(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x40ea20 - 0x40ea90
int64_t function_40ea20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g71); // 0x40ea2d
    int128_t v2 = __asm_movdqa(g72); // 0x40ea35
    int128_t v3 = __asm_movdqa(g73); // 0x40ea3d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x40ea52
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x40ea68
    uint32_t v6 = *v5; // 0x40ea68
    uint32_t v7 = (int32_t)a3 % 32; // 0x40ea6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_40e400(0, a1, a2, &v4);
}
// Address range: 0x40ea90 - 0x40ea9d
int64_t function_40ea90(int64_t a1, int64_t a2) {
    // 0x40ea90
    return function_40ea20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x40eaa0 - 0x40eab1
int64_t function_40eaa0(int64_t a1) {
    // 0x40eaa0
    return function_40ea20(a1, -1, 58);
}
// Address range: 0x40eac0 - 0x40eaca
int64_t function_40eac0(void) {
    // 0x40eac0
    int64_t v1; // 0x40eac0
    return function_40ea20(v1, v1, 58);
}
// Address range: 0x40ead0 - 0x40eb3e
int64_t function_40ead0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40eaea
    return function_40e400((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x40eb40 - 0x40ebac
int64_t function_40eb40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g71); // 0x40eb47
    int128_t v2 = __asm_movdqa(g72); // 0x40eb4f
    int128_t v3 = __asm_movdqa(g73); // 0x40eb57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x40eb79
    if (a2 == 0 || a3 == 0) {
        // 0x40eba7
        abort();
        // UNREACHABLE
    }
    // 0x40eb8a
    return function_40e400(a1, a4, a5, &v4);
}
// Address range: 0x40ebb0 - 0x40ebb9
int64_t function_40ebb0(void) {
    // 0x40ebb0
    int64_t v1; // 0x40ebb0
    return function_40eb40(v1, v1, v1, v1, -1);
}
// Address range: 0x40ebc0 - 0x40ebd7
int64_t function_40ebc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40ebc0
    return function_40eb40(0, a1, a2, a3, -1);
}
// Address range: 0x40ebe0 - 0x40ebf3
int64_t function_40ebe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40ebe0
    return function_40eb40(0, a1, a2, a3, a4);
}
// Address range: 0x40ec00 - 0x40ec0a
int64_t function_40ec00(void) {
    // 0x40ec00
    int64_t v1; // 0x40ec00
    return function_40e400(v1, v1, v1, &g34);
}
// Address range: 0x40ec10 - 0x40ec22
int64_t function_40ec10(int64_t a1, int64_t a2) {
    // 0x40ec10
    return function_40e400(0, a1, a2, &g34);
}
// Address range: 0x40ec30 - 0x40ec41
int64_t function_40ec30(int64_t a1, int64_t a2) {
    // 0x40ec30
    return function_40e400(a1, a2, -1, &g34);
}
// Address range: 0x40ec50 - 0x40ec66
int64_t function_40ec50(int64_t a1) {
    // 0x40ec50
    return function_40e400(0, a1, -1, &g34);
}
// Address range: 0x40ec70 - 0x40eeb2
int64_t function_40ec70(int64_t fd, int64_t a2, int64_t fd2, int64_t a4, int64_t a5) {
    int32_t result = syscall(SYS_vmsplice); // 0x40eca4
    if (result >= 0) {
        // 0x40eceb
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x40ecb3
    int32_t v2 = *v1; // 0x40ecbf
    if (v2 != 95 && (v2 - 22 & -17) != 0) {
        // 0x40eceb
        return result;
    }
    int64_t v3 = (int64_t)v1; // 0x40ecb3
    char * str2; // 0x40ec70
    char v4; // 0x40ec70
    int64_t v5; // 0x40ec70
    int64_t v6; // bp-200, 0x40ec70
    if ((int32_t)a5 == 0) {
        // 0x40ecd6
        str2 = (char *)a4;
        v5 = v3;
        v4 = !((v2 == 95 | (v2 - 22 & -17) == 0));
    } else {
        if ((a5 & 0xfffffffe) != 0) {
            // 0x40ecdf
            *v1 = 95;
            // 0x40eceb
            return -1;
        }
        char * v7 = (char *)a4;
        int32_t v8 = __fxstatat(1, (int32_t)fd2, v7, (struct stat *)&v6, 256); // 0x40ed1e
        int64_t v9 = 0x100000000 * v3 >> 32; // 0x40ed23
        int32_t * v10 = (int32_t *)v9;
        if (v8 == 0) {
            // 0x40ee80
            *v10 = 17;
            // 0x40eceb
            return -1;
        }
        int32_t v11 = *v10; // 0x40ed30
        if (v11 == 75) {
            // 0x40ee80
            *v10 = 17;
            // 0x40eceb
            return -1;
        }
        // 0x40ed3c
        str2 = v7;
        v5 = v9;
        v4 = 1;
        if (v11 != 2) {
            // 0x40eceb
            return -1;
        }
    }
    char * str = (char *)a2; // 0x40ed58
    int32_t len = strlen(str); // 0x40ed58
    int32_t len2 = strlen(str2); // 0x40ed63
    if (len == 0 || len2 == 0) {
        // 0x40eceb
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x40ed7f
    if (*(char *)(a2 - 1 + (int64_t)len) != 47) {
        // 0x40ed86
        if (*(char *)(a4 - 1 + (int64_t)len2) != 47) {
            // 0x40eceb
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
    }
    // 0x40ed92
    int64_t v12; // bp-344, 0x40ec70
    if (__fxstatat(1, (int32_t)fd, str, (struct stat *)&v12, 256) != 0) {
        // 0x40eceb
        return -1;
    }
    int64_t v13 = 0x100000000 * v5 >> 32; // 0x40edb9
    int32_t v14; // 0x40ec70
    if (v4 != 0) {
        if ((v14 & 0xf000) == 0x4000) {
            // 0x40eceb
            return renameat((int32_t)fd, str, (int32_t)fd2, str2);
        }
        // 0x40edd4
        *(int32_t *)v13 = 2;
        // 0x40eceb
        return -1;
    }
    // 0x40ee20
    if (__fxstatat(1, (int32_t)fd2, str2, (struct stat *)&v6, 256) != 0) {
        // 0x40ee4c
        if (*(int32_t *)v13 != 2 || (v14 & 0xf000) != 0x4000) {
            // 0x40eceb
            return -1;
        }
        // 0x40eceb
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    if ((v14 & 0xf000) != 0x4000) {
        // 0x40edff
        *(int32_t *)v13 = 20;
        // 0x40eceb
        return -1;
    }
    if ((v14 & 0xf000) == 0x4000) {
        // 0x40eceb
        return renameat((int32_t)fd, str, (int32_t)fd2, str2);
    }
    // 0x40eea1
    *(int32_t *)v13 = 21;
    // 0x40eceb
    return -1;
}
// Address range: 0x40eec0 - 0x40ef1e
int64_t function_40eec0(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x40eee1
    while (result < 0) {
        // 0x40eeee
        if (*__errno_location() != 4) {
            // break -> 0x40eefa
            break;
        }
        result = read((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x40ef20 - 0x40ef7e
int64_t function_40ef20(int64_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte); // 0x40ef41
    while (result < 0) {
        // 0x40ef4e
        if (*__errno_location() != 4) {
            // break -> 0x40ef5a
            break;
        }
        result = write((int32_t)fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x40ef80 - 0x40f0b0
int64_t function_40ef80(int64_t a1, int64_t a2) {
    int64_t str = function_40ad40(a1, a2); // 0x40ef99
    int64_t str2 = function_40ad40(a2, a2); // 0x40efa4
    int64_t n = function_40ada0(str); // 0x40efaf
    if (n != function_40ada0(str2) || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x40efc4
        return 0;
    }
    int64_t v1 = function_40ac60(); // 0x40eff5
    int64_t v2 = function_40ac60(); // 0x40f000
    char * v3 = (char *)v1; // 0x40f013
    int64_t v4; // bp-344, 0x40ef80
    if (__xstat(1, v3, (struct stat *)&v4) != 0) {
        // 0x40f090
        error(1, *__errno_location(), "%s", v3);
    }
    char * v5 = (char *)v2; // 0x40f02c
    int64_t v6; // bp-200, 0x40ef80
    if (__xstat(1, v5, (struct stat *)&v6) != 0) {
        // 0x40f070
        error(1, *__errno_location(), "%s", v5);
    }
    int64_t v7 = 0; // 0x40f044
    // 0x40f046
    v7 = v4 == v6;
    // 0x40f055
    free((int64_t *)v1);
    free((int64_t *)v2);
    // 0x40efc4
    return v7 & 0xffffffff;
}
// Address range: 0x40f0b0 - 0x40f0c6
int64_t function_40f0b0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 8); // 0x40f0b5
    uint64_t v2 = *(int64_t *)(a1 + 8); // 0x40f0b9
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x40f0d0 - 0x40f0db
int64_t function_40f0d0(int64_t str, int64_t str2) {
    // 0x40f0d0
    return strcmp((char *)str, (char *)str2);
}
// Address range: 0x40f0e0 - 0x40f474
int64_t function_40f0e0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)((8 * a2 & 0x7fffffff8) + (int64_t)&g13); // 0x40f0f0
    if (a1 == 0) {
        // 0x40f2a9
        return 0;
    }
    int32_t * v2 = __errno_location(); // 0x40f112
    *v2 = 0;
    struct __dirstream * dirp = (struct __dirstream *)a1; // 0x40f146
    struct dirent * v3 = readdir(dirp); // 0x40f146
    int64_t nmemb = 0; // 0x40f151
    int64_t v4 = 0; // 0x40f151
    int64_t v5 = 0; // 0x40f151
    int64_t v6 = 0; // 0x40f151
    int64_t v7 = 0; // 0x40f151
    struct dirent * v8; // 0x40f0e0
    int64_t v9; // 0x40f0e0
    int64_t v10; // 0x40f0e0
    int64_t v11; // 0x40f0e0
    int64_t v12; // 0x40f0e0
    char v13; // 0x40f0e0
    int64_t v14; // 0x40f0e0
    if (v3 != NULL) {
        struct dirent * v15 = v3; // 0x40f146
        int32_t v16 = 0;
        v9 = 0;
        v11 = 0;
        struct dirent * v17 = v15; // 0x40f146
        int64_t v18 = 0; // 0x40f349
        int64_t v19 = 0;
        int64_t v20 = 0;
        struct dirent * v21; // 0x40f0e0
        int64_t v22; // 0x40f0e0
        int64_t v23; // 0x40f0e0
        int64_t v24; // 0x40f0e0
        int64_t v25; // 0x40f157
        char * str; // 0x40f0e0
        char v26; // 0x40f15b
        uint64_t v27; // 0x40f192
        int64_t v28; // 0x40f2cb
        int64_t v29; // 0x40f32a
        uint64_t v30; // 0x40f2fa
        while (true) {
            // 0x40f157
            v14 = v20;
            v10 = v19;
            v12 = v18;
            v8 = v17;
            while (true) {
                // 0x40f157
                v21 = v8;
                v24 = (int64_t)v21;
                v25 = v24 + 19;
                str = (char *)v25;
                v26 = *str;
                v13 = v26;
                if (v26 != 46) {
                    goto lab_0x40f138;
                } else {
                    // 0x40f163
                    switch (*(char *)(v24 + 20)) {
                        case 46: {
                            // 0x40f1f8
                            v13 = *(char *)(v24 + 21);
                            goto lab_0x40f138;
                        }
                        case 0: {
                            goto lab_0x40f13c;
                        }
                        default: {
                            goto lab_0x40f175_2;
                        }
                    }
                }
            }
            // 0x40f175
            v27 = (int64_t)strlen(str) + 1;
            if (v1 != 0) {
                // break -> 0x40f19c
                break;
            }
            // 0x40f2c0
            v28 = v27 + v12;
            v23 = v14;
            v29 = v10;
            if (v14 - v12 <= v27) {
                if (v28 < v12) {
                    // 0x40f418
                    function_411530(v25);
                    // UNREACHABLE
                }
                if (v10 == 0) {
                    // 0x40f40a
                    v22 = 128;
                    if (v28 != 0) {
                        // 0x40f412
                        v22 = v28;
                        if (v28 < 0) {
                            // 0x40f418
                            function_411530(v25);
                            // UNREACHABLE
                        }
                    }
                } else {
                    if ((int32_t)v28 <= 0xffffffff) {
                        // 0x40f418
                        function_411530(v25);
                        // UNREACHABLE
                    }
                    // 0x40f308
                    v30 = 0x100000000 * v28 >> 32;
                    v22 = v30 + 1 + v30 / 2;
                }
                // 0x40f318
                v23 = v22;
                v29 = function_411340(v10, v23);
            }
            // 0x40f33c
            v19 = v29;
            v20 = v23;
            memcpy((int64_t *)(v19 + v12), (int64_t *)v25, (int32_t)v27);
            v18 = 0x100000000 * v28 >> 32;
            *v2 = 0;
            v17 = readdir(dirp);
            nmemb = v9;
            v4 = v11;
            v5 = v20;
            v6 = v19;
            v7 = v18;
            if (v17 == NULL) {
                // break (via goto) -> 0x40f208
                goto lab_0x40f208_2;
            }
        }
        int32_t v31 = (int32_t)v9 + 1; // 0x40f1ab
        int32_t v32 = v16; // 0x40f1b0
        int32_t v33 = v31; // 0x40f1b0
        int64_t v34 = v11; // 0x40f1b0
        int64_t v35; // 0x40f0e0
        int32_t v36; // 0x40f0e0
        int32_t v37; // 0x40f0e0
        int64_t v38; // 0x40f38b
        if (v9 == (int64_t)v16) {
            if (v11 == 0) {
                // 0x40f42e
                v36 = 8;
                v37 = 1;
                v35 = 128;
                if (v9 != 0) {
                    // 0x40f433
                    v36 = v16;
                    v37 = v31;
                    v35 = 16 * v9;
                    if (v9 > -1 != v9 < 0x1000000000000000) {
                        // 0x40f418
                        function_411530(v25);
                        // UNREACHABLE
                    }
                }
            } else {
                if (v9 >= 0x555555555555555) {
                    // 0x40f418
                    function_411530(v25);
                    // UNREACHABLE
                }
                // 0x40f385
                v38 = v9 / 2 + (int64_t)v31;
                v36 = v38;
                v37 = v31;
                v35 = 16 * v38;
            }
            // 0x40f39c
            v33 = v37;
            v32 = v36;
            v34 = function_411340(v11, v35);
        }
        int64_t v39 = v34;
        int32_t v40 = v32;
        int64_t v41 = v39 + 16 * v9; // 0x40f1c7
        *(int64_t *)v41 = function_411510(v25);
        int64_t v42 = v27 + v12; // 0x40f1e0
        *(int64_t *)(v41 + 8) = *(int64_t *)v21;
        int64_t v43 = v33; // 0x40f1e8
        *v2 = 0;
        v15 = readdir(dirp);
        int64_t v44 = v10; // 0x40f151
        int64_t v45 = v14; // 0x40f151
        nmemb = v43;
        v4 = v39;
        v5 = v14;
        v6 = v10;
        v7 = v42;
        while (v15 != NULL) {
            // 0x40f157
            v16 = v40;
            v9 = v43;
            v11 = v39;
            v17 = v15;
            v18 = v42;
            v19 = v44;
            v20 = v45;
            while (true) {
                // 0x40f157
                v14 = v20;
                v10 = v19;
                v12 = v18;
                v8 = v17;
                while (true) {
                    // 0x40f157
                    v21 = v8;
                    v24 = (int64_t)v21;
                    v25 = v24 + 19;
                    str = (char *)v25;
                    v26 = *str;
                    v13 = v26;
                    if (v26 != 46) {
                        goto lab_0x40f138;
                    } else {
                        // 0x40f163
                        switch (*(char *)(v24 + 20)) {
                            case 46: {
                                // 0x40f1f8
                                v13 = *(char *)(v24 + 21);
                                goto lab_0x40f138;
                            }
                            case 0: {
                                goto lab_0x40f13c;
                            }
                            default: {
                                goto lab_0x40f175_2;
                            }
                        }
                    }
                }
                // 0x40f175
                v27 = (int64_t)strlen(str) + 1;
                if (v1 != 0) {
                    // break -> 0x40f19c
                    break;
                }
                // 0x40f2c0
                v28 = v27 + v12;
                v23 = v14;
                v29 = v10;
                if (v14 - v12 <= v27) {
                    if (v28 < v12) {
                        // 0x40f418
                        function_411530(v25);
                        // UNREACHABLE
                    }
                    if (v10 == 0) {
                        // 0x40f40a
                        v22 = 128;
                        if (v28 != 0) {
                            // 0x40f412
                            v22 = v28;
                            if (v28 < 0) {
                                // 0x40f418
                                function_411530(v25);
                                // UNREACHABLE
                            }
                        }
                    } else {
                        if ((int32_t)v28 <= 0xffffffff) {
                            // 0x40f418
                            function_411530(v25);
                            // UNREACHABLE
                        }
                        // 0x40f308
                        v30 = 0x100000000 * v28 >> 32;
                        v22 = v30 + 1 + v30 / 2;
                    }
                    // 0x40f318
                    v23 = v22;
                    v29 = function_411340(v10, v23);
                }
                // 0x40f33c
                v19 = v29;
                v20 = v23;
                memcpy((int64_t *)(v19 + v12), (int64_t *)v25, (int32_t)v27);
                v18 = 0x100000000 * v28 >> 32;
                *v2 = 0;
                v17 = readdir(dirp);
                nmemb = v9;
                v4 = v11;
                v5 = v20;
                v6 = v19;
                v7 = v18;
                if (v17 == NULL) {
                    // break (via goto) -> 0x40f208
                    goto lab_0x40f208_2;
                }
            }
            // 0x40f19c
            v31 = (int32_t)v9 + 1;
            v32 = v16;
            v33 = v31;
            v34 = v11;
            if (v9 == (int64_t)v16) {
                if (v11 == 0) {
                    // 0x40f42e
                    v36 = 8;
                    v37 = 1;
                    v35 = 128;
                    if (v9 != 0) {
                        // 0x40f433
                        v36 = v16;
                        v37 = v31;
                        v35 = 16 * v9;
                        if (v9 > -1 != v9 < 0x1000000000000000) {
                            // 0x40f418
                            function_411530(v25);
                            // UNREACHABLE
                        }
                    }
                } else {
                    if (v9 >= 0x555555555555555) {
                        // 0x40f418
                        function_411530(v25);
                        // UNREACHABLE
                    }
                    // 0x40f385
                    v38 = v9 / 2 + (int64_t)v31;
                    v36 = v38;
                    v37 = v31;
                    v35 = 16 * v38;
                }
                // 0x40f39c
                v33 = v37;
                v32 = v36;
                v34 = function_411340(v11, v35);
            }
            // 0x40f1b6
            v39 = v34;
            v40 = v32;
            v41 = v39 + 16 * v9;
            *(int64_t *)v41 = function_411510(v25);
            v42 = v27 + v12;
            *(int64_t *)(v41 + 8) = *(int64_t *)v21;
            v43 = v33;
            *v2 = 0;
            v15 = readdir(dirp);
            v44 = v10;
            v45 = v14;
            nmemb = v43;
            v4 = v39;
            v5 = v14;
            v6 = v10;
            v7 = v42;
        }
    }
  lab_0x40f208_2:;
    int32_t v46 = *v2; // 0x40f208
    if (v46 != 0) {
        // 0x40f3e7
        free((int64_t *)v4);
        free((int64_t *)v6);
        *v2 = v46;
        // 0x40f2a9
        return 0;
    }
    // 0x40f213
    int64_t result; // 0x40f0e0
    int64_t v47; // 0x40f0e0
    if (v1 == 0) {
        // 0x40f358
        if (v5 == v7) {
            int64_t v48 = function_411340(v6, v5 + 1); // 0x40f3d6
            v47 = v48 + v5;
            result = v48;
        } else {
            // 0x40f35f
            v47 = v7 + v6;
            result = v6;
        }
    } else {
        int64_t v49 = v7 + 1; // 0x40f21f
        int64_t * v50; // 0x40f0e0
        int64_t v51; // 0x40f0e0
        int64_t v52; // 0x40f0e0
        if (nmemb != 0) {
            int64_t * base = (int64_t *)v4;
            qsort(base, (int32_t)nmemb, 16, (int32_t (*)(int64_t *, int64_t *))v1);
            int64_t v53 = function_4112e0(v49); // 0x40f264
            int64_t v54 = v4; // 0x40f26c
            int64_t v55 = 0; // 0x40f26c
            int64_t str2 = v55 + v53; // 0x40f270
            int64_t * str3 = (int64_t *)v54; // 0x40f275
            v54 += 16;
            char * v56 = stpcpy((char *)str2, (char *)*str3); // 0x40f27f
            int64_t v57 = v55 + 1 + (int64_t)v56 - str2; // 0x40f28b
            free((int64_t *)*str3);
            v55 = v57;
            while (v54 != v4 + 16 * nmemb) {
                // 0x40f270
                str2 = v55 + v53;
                str3 = (int64_t *)v54;
                v54 += 16;
                v56 = stpcpy((char *)str2, (char *)*str3);
                v57 = v55 + 1 + (int64_t)v56 - str2;
                free((int64_t *)*str3);
                v55 = v57;
            }
            // 0x40f29a
            v50 = base;
            v51 = v53;
            v52 = v57 + v53;
        } else {
            int64_t v58 = function_4112e0(v49); // 0x40f22b
            v50 = (int64_t *)v4;
            v51 = v58;
            v52 = v58;
        }
        // 0x40f29d
        free(v50);
        v47 = v52;
        result = v51;
    }
    // 0x40f2a5
    *(char *)v47 = 0;
    // 0x40f2a9
    return result;
  lab_0x40f138:
    // 0x40f138
    if (v13 != 0) {
        // break -> 0x40f175
        goto lab_0x40f175_2;
    }
    goto lab_0x40f13c;
  lab_0x40f13c:
    // 0x40f13c
    *v2 = 0;
    struct dirent * v59 = readdir(dirp); // 0x40f146
    v8 = v59;
    nmemb = v9;
    v4 = v11;
    v5 = v14;
    v6 = v10;
    v7 = v12;
    if (v59 == NULL) {
        // break (via goto) -> 0x40f208
        goto lab_0x40f208_2;
    }
    goto lab_0x40f157;
}
// Address range: 0x40f480 - 0x40f4e8
int64_t function_40f480(int64_t a1, int64_t a2) {
    int64_t dirp = function_40abc0(); // 0x40f486
    if (dirp == 0) {
        // 0x40f4ac
        return 0;
    }
    int64_t result = function_40f0e0(dirp, a2 & 0xffffffff); // 0x40f498
    if (closedir((struct __dirstream *)dirp) == 0) {
        // 0x40f4ac
        return result;
    }
    int32_t * v1 = __errno_location(); // 0x40f4c8
    free((int64_t *)result);
    return 0;
}
// Address range: 0x40f4f0 - 0x40f4f7
int64_t function_40f4f0(int64_t a1) {
    // 0x40f4f0
    *(int32_t *)a1 = 0;
    int64_t result; // 0x40f4f0
    return result;
}
// Address range: 0x40f500 - 0x40f514
int64_t function_40f500(int64_t a1) {
    if ((int32_t)a1 == 4) {
        // 0x40f510
        return (int64_t)*(int32_t *)(a1 + 4);
    }
    // 0x40f507
    return 0;
}
// Address range: 0x40f520 - 0x40f770
int64_t function_40f520(int64_t a1, int64_t a2, int32_t a3, int32_t a4) {
    int64_t v1 = a3;
    int64_t v2 = 0xffffffff; // 0x40f534
    if (a4 != 0) {
        int64_t v3 = a4;
        int32_t v4 = __open_2((char *)a2, 0x20000 * a3 & 0x20000 | 0x10900); // 0x40f551
        *(int32_t *)v3 = v4;
        int64_t v5 = v4; // 0x40f558
        int32_t v6 = *__errno_location(); // 0x40f560
        *(int32_t *)(v3 + 4) = v6;
        if (v4 < 0) {
            // 0x40f5f0
            v2 = v5;
            if (v6 != 13) {
                // 0x40f5e3
                return 0xffffffff;
            }
        } else {
            // 0x40f56e
            v2 = v5;
            if ((v1 & 2) != 0) {
                // 0x40f5e3
                return 0;
            }
        }
    }
    // 0x40f574
    int64_t v7; // 0x40f520
    uint32_t v8 = *(int32_t *)&v7; // 0x40f574
    if (v8 >= 6) {
        // 0x40f750
        __assert_fail("0", "lib/savewd.c", 99, "savewd_save");
        return &g90;
    }
    uint32_t v9 = v8 % 64;
    int64_t v10 = v9 == 0 ? 1 : 1 << (int64_t)v9;
    int64_t path = a2; // 0x40f58a
    int32_t * v11; // 0x40f520
    int64_t v12; // 0x40f520
    int64_t v13; // 0x40f520
    if ((v10 & 54) != 0) {
        goto lab_0x40f5c0;
    } else {
        if ((v10 & 8) != 0) {
            int32_t * v14 = (int32_t *)(a1 + 4);
            path = a2;
            v11 = v14;
            v12 = a2;
            if (*v14 >= 0) {
                goto lab_0x40f5c0;
            } else {
                goto lab_0x40f68b;
            }
        } else {
            if (v8 != 0) {
                // 0x40f750
                __assert_fail("0", "lib/savewd.c", 99, "savewd_save");
                return &g90;
            }
            int32_t v15 = function_40ae10((int64_t)".", 0, v1); // 0x40f5aa
            v13 = a2;
            if (v15 < 0) {
                goto lab_0x40f6e8;
            } else {
                // 0x40f5b2
                *(int32_t *)a1 = 1;
                *(int32_t *)(a1 + 4) = v15;
                path = a2;
                goto lab_0x40f5c0;
            }
        }
    }
  lab_0x40f5c0:;
    int32_t fd = v2;
    int32_t fd2; // 0x40f520
    int64_t v16; // 0x40f520
    int64_t result; // 0x40f520
    bool v17; // 0x40f520
    if (fd < 0) {
        uint32_t v18 = chdir((char *)path); // 0x40f60b
        int64_t v19 = v18; // 0x40f610
        int64_t v20 = v19; // 0x40f615
        v16 = v19;
        if (v18 != 0) {
            // 0x40f5e3
            return v20 & 0xffffffff;
        }
        goto lab_0x40f621;
    } else {
        uint32_t v21 = fchdir(fd); // 0x40f5c8
        v16 = 0;
        if (v21 == 0) {
            goto lab_0x40f621;
        } else {
            // 0x40f5d4
            fd2 = fd;
            v17 = a4 == 0;
            result = v21;
            goto lab_0x40f640;
        }
    }
  lab_0x40f621:;
    uint32_t v22 = *(int32_t *)&v7; // 0x40f621
    g92 = v22;
    fd2 = fd;
    v17 = a4 == 0;
    result = 0;
    switch (v22) {
        case 1: {
            // 0x40f630
            *(int32_t *)a1 = 2;
            fd2 = fd;
            v17 = a4 == 0;
            result = 0;
            goto lab_0x40f640;
        }
        case 2: {
            goto lab_0x40f640;
        }
        case 3: {
            // 0x40f6c0
            fd2 = fd;
            v17 = a4 == 0;
            result = 0;
            if (*(int32_t *)(a1 + 4) == 0) {
                goto lab_0x40f640;
            } else {
                // 0x40f6cb
                __assert_fail("wd->val.child == 0", "lib/savewd.c", 155, "savewd_chdir");
                v13 = v16;
                goto lab_0x40f6e8;
            }
        }
        case 4: {
            goto lab_0x40f640;
        }
        case 5: {
            goto lab_0x40f640;
        }
        default: {
            // 0x40f723
            __assert_fail("0", "lib/savewd.c", 159, "savewd_chdir");
            fd2 = fd;
            v17 = true;
            result = 0xfffffffe;
            goto lab_0x40f640;
        }
    }
  lab_0x40f68b:;
    int64_t v23 = v12;
    int32_t * v24 = v11;
    int32_t v25 = fork(); // 0x40f68b
    *v24 = v25;
    path = v23;
    if (v25 == 0) {
        goto lab_0x40f5c0;
    } else {
        if (v25 >= 0) {
            // 0x40f69b
            fd2 = v2;
            v17 = true;
            result = 0xfffffffe;
            goto lab_0x40f640;
        } else {
            // 0x40f6a1
            *(int32_t *)a1 = 4;
            *v24 = *__errno_location();
            path = v23;
            goto lab_0x40f5c0;
        }
    }
  lab_0x40f6e8:;
    int64_t v26 = v13;
    int32_t v27 = *__errno_location(); // 0x40f6ed
    switch (v27) {
        case 13: {
            goto lab_0x40f710;
        }
        case 116: {
            goto lab_0x40f710;
        }
        default: {
            // 0x40f6f9
            *(int32_t *)a1 = 4;
            *(int32_t *)(a1 + 4) = v27;
            path = v26;
            goto lab_0x40f5c0;
        }
    }
  lab_0x40f640:
    // 0x40f640
    if (fd2 < 0 || !v17) {
        // 0x40f5e3
        return result & 0xffffffff;
    }
    int32_t * v28 = __errno_location(); // 0x40f649
    close(fd2);
    return result;
  lab_0x40f710:
    // 0x40f710
    *(int64_t *)a1 = -0xfffffffd;
    v11 = (int32_t *)(a1 + 4);
    v12 = v26;
    goto lab_0x40f68b;
}
// Address range: 0x40f770 - 0x40f896
int64_t function_40f770(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    g93 = v1 & 0xffffffff;
    switch ((int32_t)v1) {
        case 0: {
        }
        case 1: {
            // 0x40f79d
            return 0;
        }
        case 2: {
            int32_t * fd = (int32_t *)(v1 + 4);
            int32_t result = fchdir(*fd); // 0x40f813
            if (result == 0) {
                // 0x40f81c
                *(int32_t *)a1 = 1;
                return result;
            }
            int32_t * v2 = __errno_location(); // 0x40f83b
            int32_t v3 = *v2; // 0x40f843
            close(*fd);
            *(int32_t *)a1 = 4;
            *fd = v3;
            // 0x40f7bc
            *v2 = v3;
            return 0xffffffff;
        }
        case 3: {
            int32_t * v4 = (int32_t *)(v1 + 4);
            int32_t pid = *v4; // 0x40f790
            if (pid == 0) {
                // 0x40f88f
                int64_t status; // 0x40f770
                _exit((int32_t)status);
                // UNREACHABLE
            }
            if (pid < 0) {
                // 0x40f79d
                return 0;
            }
            int32_t stat_loc; // bp-28, 0x40f770
            while (waitpid(pid, &stat_loc, 0) < 0) {
                // 0x40f7d0
                if (*__errno_location() != 4) {
                    // 0x40f85d
                    __assert_fail("(*__errno_location ()) == 4", "lib/savewd.c", 216, "savewd_restore");
                    goto lab_0x40f876;
                }
            }
            // 0x40f7f0
            *v4 = -1;
            uint32_t sig_num = stat_loc % 128; // 0x40f7fd
            if (sig_num != 0) {
                // 0x40f830
                raise(sig_num);
            }
            // 0x40f802
            return stat_loc / 256 % 256;
        }
        case 4: {
            // 0x40f7bc
            *__errno_location() = *(int32_t *)(v1 + 4);
            return 0xffffffff;
        }
    }
  lab_0x40f876:
    // 0x40f876
    __assert_fail("0", "lib/savewd.c", 226, "savewd_restore");
    // 0x40f88f
    _exit((int32_t)(int64_t)"lib/savewd.c");
    // UNREACHABLE
}
// Address range: 0x40f8a0 - 0x40f910
int64_t function_40f8a0(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t result = v1 & 0xffffffff; // 0x40f8a6
    g94 = result;
    switch ((int32_t)v1) {
        case 0: {
        }
        case 4: {
            // 0x40f8c0
            *(int32_t *)a1 = 5;
            return result;
        }
        case 1: {
        }
        case 2: {
            int64_t result2 = close(*(int32_t *)(v1 + 4));
            *(int32_t *)a1 = 5;
            return result2;
        }
        case 3: {
            uint32_t result3 = *(int32_t *)(v1 + 4); // 0x40f8d0
            if (result3 < 0) {
                // 0x40f8c0
                *(int32_t *)a1 = 5;
                return result3;
            }
            // break -> 0x40f8d7
            break;
        }
        default: {
            // 0x40f8f0
            __assert_fail("0", "lib/savewd.c", 251, "savewd_finish");
            return &g90;
        }
    }
    // 0x40f8d7
    __assert_fail("wd->val.child < 0", "lib/savewd.c", 247, "savewd_finish");
    // 0x40f8f0
    __assert_fail("0", "lib/savewd.c", 251, "savewd_finish");
    return &g90;
}
// Address range: 0x40f910 - 0x40fa58
int64_t function_40f910(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x40f910
    int32_t v1; // 0x40f910
    int32_t v2 = v1;
    int64_t v3 = a1 + 0xffffffff; // 0x40f912
    int64_t v4 = 0x100000000 * a1;
    int32_t v5 = 0; // bp-64, 0x40f930
    int32_t v6 = v3;
    int64_t v7 = 0; // 0x40f93e
    int64_t v8 = 0; // 0x40f93e
    if (v6 >= 0) {
        int32_t v9 = v6; // 0x40f94f
        int64_t v10 = v3; // 0x40f94f
        if (*(char *)*(int64_t *)((0x100000000 * v3 >> 29) + a2) == 47) {
            int64_t v11 = v4 - 0x200000000 >> 32;
            int32_t v12 = v11;
            v9 = v12;
            v10 = v11;
            while (v12 >= 0) {
                // 0x40f960
                v9 = v12;
                v10 = v11;
                if (*(char *)*(int64_t *)(8 * v11 + a2) != 47) {
                    // break -> 0x40f973
                    break;
                }
                v11--;
                v12 = v11;
                v9 = v12;
                v10 = v11;
            }
        }
        // 0x40f973
        v7 = 0;
        v8 = 0;
        if (v9 >= 1) {
            int64_t v13 = v10 & 0xffffffff;
            int64_t v14 = a2; // 0x40f991
            int64_t v15 = 0;
            int64_t v16 = 0;
            int64_t v17 = v16; // 0x40f9da
            int64_t v18; // 0x40f910
            int64_t v19; // 0x40f910
            int32_t v20; // 0x40f9a6
            int32_t v21; // 0x40f9a6
            if (v2 >= 0 != v2 != 0 || v15 != 3) {
                // 0x40f998
                v19 = v15 != 3 ? v15 : (int64_t)v2;
                v20 = v16;
                v21 = v20 - (int32_t)v19;
                v18 = v21 < 0 == ((v21 ^ v20) & (int32_t)(v19 ^ v16)) < 0 ? v16 : v19;
                v17 = v18 & 0xffffffff;
            }
            int64_t v22 = v17;
            v14 += 8;
            int64_t v23 = v22; // 0x40f9b4
            int64_t v24; // 0x40f910
            int64_t v25; // 0x40f9bc
            int32_t v26; // 0x40f9c1
            int32_t v27; // 0x40f9c1
            if (*(char *)*(int64_t *)v14 != 47) {
                // 0x40f9b6
                v25 = function_40f770((int64_t *)&v5);
                v26 = v22;
                v27 = v26 - (int32_t)v25;
                v24 = v27 < 0 == ((v27 ^ v26) & (int32_t)(v25 ^ v22)) < 0 ? v22 : v25;
                v23 = v24 & 0xffffffff;
            }
            int64_t v28 = v23;
            v7 = v13;
            v8 = v28;
            while (v14 != a2 + 8 + (8 * v13 + 0x7fffffff8 & 0x7fffffff8)) {
                // 0x40f9d3
                v15 = v5;
                v16 = v28;
                v17 = v16;
                if (v2 >= 0 != v2 != 0 || v15 != 3) {
                    // 0x40f998
                    v19 = v15 != 3 ? v15 : (int64_t)v2;
                    v20 = v16;
                    v21 = v20 - (int32_t)v19;
                    v18 = v21 < 0 == ((v21 ^ v20) & (int32_t)(v19 ^ v16)) < 0 ? v16 : v19;
                    v17 = v18 & 0xffffffff;
                }
                // 0x40f9ad
                v22 = v17;
                v14 += 8;
                v23 = v22;
                if (*(char *)*(int64_t *)v14 != 47) {
                    // 0x40f9b6
                    v25 = function_40f770((int64_t *)&v5);
                    v26 = v22;
                    v27 = v26 - (int32_t)v25;
                    v24 = v27 < 0 == ((v27 ^ v26) & (int32_t)(v25 ^ v22)) < 0 ? v22 : v25;
                    v23 = v24 & 0xffffffff;
                }
                // 0x40f9c8
                v28 = v23;
                v7 = v13;
                v8 = v28;
            }
        }
    }
    // 0x40fa00
    function_40f8a0((int64_t *)&v5);
    if (v4 >> 32 <= v7) {
        // 0x40fa46
        return v8 & 0xffffffff;
    }
    int64_t v29 = 0x100000000 * v7;
    int64_t v30 = (v29 >> 32) + (v3 - v7 & 0xffffffff); // 0x40fa1b
    int64_t v31 = (v29 >> 29) + a2; // 0x40fa23
    int64_t v32 = v8;
    int32_t v33 = v32; // 0x40fa36
    int32_t v34 = v33 - (int32_t)v30; // 0x40fa36
    int64_t v35 = v34 < 0 == ((v34 ^ v33) & (int32_t)(v32 ^ v30)) < 0 ? v32 : v30;
    int64_t v36 = v35 & 0xffffffff; // 0x40fa39
    v31 += 8;
    while (v31 != a2 + 8 + 8 * v30) {
        // 0x40fa28
        v32 = v36;
        v33 = v32;
        v34 = v33 - (int32_t)v30;
        v35 = v34 < 0 == ((v34 ^ v33) & (int32_t)(v32 ^ v30)) < 0 ? v32 : v30;
        v36 = v35 & 0xffffffff;
        v31 += 8;
    }
    // 0x40fa46
    return v36 & 0xffffffff;
}
// Address range: 0x40fa60 - 0x40fab4
int64_t function_40fa60(int64_t a1) {
    // 0x40fa60
    int64_t v1; // bp-152, 0x40fa60
    int32_t v2 = __lxstat(1, (char *)a1, (struct stat *)&v1); // 0x40fa73
    int32_t * v3 = __errno_location(); // 0x40fa7a
    if (v2 == 0) {
        // 0x40faa0
        *v3 = 17;
        return 0xffffffff;
    }
    int32_t v4 = *v3; // 0x40fa83
    if (v4 != 75) {
        // 0x40fa8a
        return v4 != 2 ? 0xffffffff : 0;
    }
    // 0x40faa0
    *v3 = 17;
    return 0xffffffff;
}
// Address range: 0x40fac0 - 0x40faca
int64_t function_40fac0(void) {
    // 0x40fac0
    int64_t path; // 0x40fac0
    return mkdir((char *)path, 448);
}
// Address range: 0x40fad0 - 0x40fae6
int64_t function_40fad0(void) {
    // 0x40fad0
    int64_t path; // 0x40fad0
    return open((char *)path, (int32_t)path & -196 | 194);
}
// Address range: 0x40faf0 - 0x40faf1
int64_t function_40faf0(void) {
    // 0x40faf0
    int64_t result; // 0x40faf0
    return result;
}
// Address range: 0x40fb10 - 0x40fc6d
int64_t function_40fb10(int64_t str, int32_t a2, int64_t * a3, int64_t a4, uint64_t a5) {
    int32_t * v1 = __errno_location(); // 0x40fb35
    int32_t v2 = *v1; // 0x40fb40
    uint64_t len = (int64_t)strlen((char *)str); // 0x40fb46
    uint64_t v3 = (int64_t)a2 + a5; // 0x40fb4e
    if (v3 > len) {
        // 0x40fc58
        *v1 = 22;
        // 0x40fc40
        return 0xffffffff;
    }
    int64_t str2 = len - v3 + str;
    if ((int64_t)strspn((char *)str2, "X") < a5) {
        // 0x40fc58
        *v1 = 22;
        // 0x40fc40
        return 0xffffffff;
    }
    int64_t v4 = function_413800(); // 0x40fb84
    if (v4 == 0) {
        // 0x40fc40
        return 0xffffffff;
    }
    int32_t v5 = 0x3a2f8; // 0x40fba6
    int64_t v6; // 0x40fb10
    int64_t v7; // 0x40fbc8
    int64_t v8; // 0x40fbcc
    char v9; // 0x40fbd1
    if (a5 != 0) {
        v7 = str2 + 1;
        v8 = function_413840(v4, 61);
        v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
        *(char *)str2 = v9;
        v6 = v7;
        while (v7 != str2 + a5) {
            // 0x40fbc0
            v7 = v6 + 1;
            v8 = function_413840(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)v6 = v9;
            v6 = v7;
        }
    }
    int32_t v10; // 0x40fb10
    int64_t v11; // 0x40fb10
    int64_t result; // 0x40fb10
    while ((int32_t)a4 < 0) {
        int32_t v12 = *v1; // 0x40fbf8
        v10 = v12;
        v11 = 0xffffffff;
        if (v12 != 17) {
            goto lab_0x40fc25;
        }
        // 0x40fc00
        v5--;
        if (v5 == 0) {
            // 0x40fc06
            function_413960(v4);
            *v1 = 17;
            result = 0xffffffff;
            return result;
        }
        if (a5 != 0) {
            v7 = str2 + 1;
            v8 = function_413840(v4, 61);
            v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
            *(char *)str2 = v9;
            v6 = v7;
            while (v7 != str2 + a5) {
                // 0x40fbc0
                v7 = v6 + 1;
                v8 = function_413840(v4, 61);
                v9 = *(char *)(v8 + (int64_t)"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789");
                *(char *)v6 = v9;
                v6 = v7;
            }
        }
    }
    // 0x40fc1c
    *v1 = v2;
    v10 = v2;
    v11 = a4 & 0xffffffff;
  lab_0x40fc25:
    // 0x40fc25
    function_413960(v4);
    *v1 = v10;
    result = v11;
  lab_0x40fc40:
    // 0x40fc40
    return result;
}
// Address range: 0x40fc70 - 0x40fceb
int64_t function_40fc70(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a3 >> 32; // bp-12, 0x40fc74
    if ((int32_t)a4 < 3) {
        int64_t v2 = *(int64_t *)((8 * a4 & 0x7fffffff8) + (int64_t)&g14); // 0x40fc84
        int64_t v3; // 0x40fc70
        return function_40fb10(a1, (int32_t)a2, &v1, v2, v3);
    }
    // 0x40fccc
    function_40faf0();
    function_40faf0();
    return function_40fb10(a1, (int32_t)a2, (int64_t *)a3, a4, 6);
}
// Address range: 0x40fcf0 - 0x40fd3e
int64_t function_40fcf0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40fcfc
    if (fd >= 3) {
        // 0x40fd01
        return a1 & 0xffffffff;
    }
    // 0x40fd10
    int64_t v1; // 0x40fcf0
    int64_t v2 = function_4143d0(a1, v1); // 0x40fd10
    int32_t * v3 = __errno_location(); // 0x40fd18
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40fd40 - 0x40fd4c
int64_t function_40fd40(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x40fd40
    return a1 % a2;
}
// Address range: 0x40fd50 - 0x40fd5a
int64_t function_40fd50(int64_t a1, int64_t a2) {
    // 0x40fd50
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x40fd60 - 0x4104c9
int64_t function_40fd60(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a3 + 96); // 0x40fd73
    int64_t v2 = *(int64_t *)(a2 + 88); // 0x40fd77
    int64_t v3 = *(int64_t *)(a3 + 88); // 0x40fd7b
    int64_t v4 = *(int64_t *)(a2 + 96); // 0x40fd7f
    int64_t v5 = v1 & 0xffffffff; // 0x40fd83
    uint32_t v6 = (int32_t)a4 % 2; // 0x40fd86
    int64_t v7 = v3; // 0x40fd89
    int64_t v8 = v5; // 0x40fd89
    int64_t v9; // 0x40fd60
    int64_t v10; // bp-248, 0x40fd60
    int32_t v11; // 0x40fd60
    int32_t v12; // 0x40fd96
    int32_t v13; // 0x40fd60
    int64_t result; // 0x40fd86
    int64_t v14; // 0x40fec7
    if (v6 == 0) {
        goto lab_0x40fe50;
    } else {
        // 0x40fd8f
        v12 = v4;
        v13 = v1;
        if (v2 == v3 == v12 == v13) {
            // 0x40fe67
            return 0;
        }
        // 0x40fdac
        if (v3 - 1 > v2) {
            // 0x40fe67
            return 0xffffffff;
        }
        // 0x40fdb9
        result = v6;
        if (v2 - 1 > v3) {
            // 0x40fe67
            return result;
        }
        // 0x40fdc7
        v14 = g75;
        if (g75 == 0) {
            // 0x40feb0
            v14 = function_40bb50(16, 0, 0x40fd40, 0x40fd50, 0x402860);
            g75 = v14;
            if (v14 != 0) {
                goto lab_0x40fde1;
            } else {
                // 0x40fedf
                v11 = 0x77359400;
                v9 = &v10;
                goto lab_0x40fefc;
            }
        } else {
            goto lab_0x40fde1;
        }
    }
  lab_0x40fe50:
    // 0x40fe50
    if (v7 > v2) {
        // 0x40fe67
        return 0xffffffff;
    }
    // 0x40fe55
    if (v7 != v2) {
        // 0x40fe67
        return 1;
    }
    int64_t result2 = 0xffffffff; // 0x40fe5f
    if (v8 <= v4) {
        int32_t v15 = v8; // 0x40fe5c
        int32_t v16 = v15 - (int32_t)v4; // 0x40fe5c
        result2 = v16 < 0 != ((v16 ^ v15) & (int32_t)(v8 ^ v4)) < 0;
    }
    // 0x40fe67
    return result2;
  lab_0x40fde1:;
    int64_t v17 = v14; // 0x40fdeb
    int64_t v18 = g74; // 0x40fdeb
    int32_t v19; // 0x40fd60
    if (g74 == 0) {
        int64_t * mem = malloc(16); // 0x41034a
        int64_t v20 = (int64_t)mem; // 0x41034a
        g74 = v20;
        if (mem == NULL) {
            // 0x41042f
            v19 = g75;
            goto lab_0x410390;
        } else {
            // 0x410362
            *(int32_t *)(v20 + 8) = 0x77359400;
            *(char *)(v20 + 12) = 0;
            v17 = 0x100000000 * v14 >> 32;
            v18 = v20;
            goto lab_0x40fdf1;
        }
    } else {
        goto lab_0x40fdf1;
    }
  lab_0x40fdf1:;
    int64_t v21 = v18;
    *(int64_t *)v21 = v21;
    int64_t v22 = function_40c2f0(v17, v21); // 0x40fdff
    int64_t v23; // 0x40fd60
    if (v22 == 0) {
        // 0x410380
        v19 = g75;
        if (g75 == 0) {
            // 0x40fedf
            v11 = 0x77359400;
            v9 = &v10;
            goto lab_0x40fefc;
        } else {
            goto lab_0x410390;
        }
    } else {
        // 0x40fe10
        v23 = v22;
        if (g74 == v22) {
            // 0x4103c8
            g74 = 0;
            v23 = v22;
        }
        goto lab_0x40fe1d;
    }
  lab_0x40fefc:;
    int64_t v24 = *(int64_t *)(a2 + 80); // 0x40ff07
    int64_t v25 = *(int64_t *)(a2 + 112); // 0x40ff0b
    int32_t v26 = v24; // 0x40ff11
    int32_t v27 = ((int32_t)(0x66666667 * (0x100000000 * v24 >> 32) / 0x100000000) >> 2) - (v26 >> 31); // 0x40ff21
    int32_t v28 = v25; // 0x40ff25
    int32_t v29 = ((int32_t)(0x66666667 * (0x100000000 * v25 >> 32) / 0x100000000) >> 2) - (v28 >> 31); // 0x40ff3c
    int64_t v30 = 0x100000000 * v4 >> 32; // 0x40ff51
    int32_t v31 = ((int32_t)(0x66666667 * v30 / 0x100000000) >> 2) - (v12 >> 31); // 0x40ff5c
    int64_t v32 = result; // 0x40ff6d
    int64_t v33 = v3; // 0x40ff6d
    int64_t v34 = v9; // 0x40ff6d
    int64_t v35 = v5; // 0x40ff6d
    int64_t v36; // 0x40fd60
    int64_t v37; // 0x40fd60
    int64_t v38; // 0x40fd60
    int64_t v39; // 0x40fd60
    int64_t v40; // 0x40ff83
    if ((-10 * v27 + v26 || -10 * v31 + v12 || -10 * v29 + v28) != 0) {
        goto lab_0x410330;
    } else {
        // 0x40ff73
        v40 = *(int64_t *)(a2 + 72);
        if (v11 < 11) {
            // 0x410463
            *(int32_t *)(v9 + 8) = 10;
            v38 = v3;
            v39 = v3;
            v36 = 10;
            v37 = v9;
        } else {
            if ((v27 % 10 || v31 % 10 || v29 % 10) != 0) {
                // 0x410453
                *(int32_t *)(v9 + 8) = 10;
                v38 = v3;
                v39 = v3;
                v36 = 10;
                v37 = v9;
            } else {
                int32_t v41 = v27; // 0x410019
                int32_t v42 = v29; // 0x410019
                int32_t v43 = v31; // 0x410019
                int32_t v44 = 8; // 0x410019
                int64_t v45 = 100; // 0x410031
                int64_t v46 = v45 & 0xfffffffc; // 0x410031
                while (v46 < (int64_t)v11) {
                    int32_t v47 = v43;
                    int32_t v48 = v42;
                    int32_t v49 = v41;
                    v41 = v49 / 10;
                    v42 = v48 / 10;
                    v43 = v47 / 10;
                    if ((-10 * v48 / 100 + v42 || -10 * v49 / 100 + v41 || -10 * v47 / 100 + v43) != 0) {
                        // break -> 0x4103e0
                        break;
                    }
                    // 0x4100b2
                    v44--;
                    if (v44 == 0) {
                        int64_t v50 = 0x100000000 * v3 >> 32; // 0x4100c6
                        int64_t v51 = 0x100000000000000 * v9 >> 56; // 0x4100d7
                        int32_t * v52 = (int32_t *)(v51 + 8);
                        if ((v40 | v2 | *(int64_t *)(a2 + 104)) % 2 == 0) {
                            // 0x410410
                            *v52 = 0x77359400;
                            v38 = v50 & -2;
                            v39 = v50;
                            v36 = 0x77359400;
                            v37 = v51;
                            goto lab_0x4100f5;
                        } else {
                            // 0x4100e4
                            *v52 = 0x3b9aca00;
                            v38 = v50;
                            v39 = v50;
                            v36 = 0x3b9aca00;
                            v37 = v51;
                            goto lab_0x4100f5;
                        }
                    }
                    v45 = 10 * v46;
                    v46 = v45 & 0xfffffffc;
                }
                int32_t v53 = v45; // 0x4103e0
                int64_t v54 = 0x100000000 * v3 >> 32; // 0x4103e7
                int64_t v55 = 0x100000000000000 * v9 >> 56; // 0x4103ec
                *(int32_t *)(v55 + 8) = v53;
                v38 = v54 & (int64_t)(v53 == 0x77359400) - 1;
                v39 = v54;
                v36 = v46;
                v37 = v55;
            }
        }
        goto lab_0x4100f5;
    }
  lab_0x410330:
    // 0x410330
    *(int32_t *)(v34 + 8) = (int32_t)v32;
    *(char *)(v34 + 12) = 1;
    v7 = v33;
    v8 = v35;
    goto lab_0x40fe50;
  lab_0x410390:;
    int64_t v56 = &v10; // 0x41039a
    v10 = v56;
    int64_t v57 = function_40b8e0((int64_t)v19, &v10); // 0x4103aa
    v23 = v57;
    v11 = 0x77359400;
    v9 = 0x100000000 * v56 >> 32;
    if (v57 != 0) {
        goto lab_0x40fe1d;
    } else {
        goto lab_0x40fefc;
    }
  lab_0x40fe1d:;
    uint32_t v58 = *(int32_t *)(v23 + 8); // 0x40fe1d
    v11 = v58;
    v9 = v23;
    if (*(char *)(v23 + 12) == 0) {
        goto lab_0x40fefc;
    } else {
        // 0x40fe30
        v7 = v3 & (int64_t)(v58 == 0x77359400) - 1;
        v8 = v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % (int64_t)v58 & 0xffffffff;
        goto lab_0x40fe50;
    }
  lab_0x4100f5:
    // 0x4100f5
    if (v2 > v39 || v4 >= v1 == v2 == v3) {
        // 0x40fe67
        return result;
    }
    // 0x41010d
    if (v2 < v38) {
        // 0x40fe67
        return 0xffffffff;
    }
    // 0x410116
    if (v2 == v38) {
        // 0x40fe84
        if ((v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % v36 & 0xffffffff) > v4) {
            // 0x40fe67
            return 0xffffffff;
        }
    }
    int64_t v59 = v40; // bp-232, 0x410130
    int32_t * v60 = (int32_t *)(a2 + 24); // 0x410163
    int64_t v61; // 0x40fd60
    if ((*v60 & 0xf000) == 0xa000) {
        // 0x41043b
        v61 = function_410ab0(a1, &v59, 0x38e38e39 * v36 / 0x200000000);
    } else {
        // 0x41018a
        v61 = function_410aa0(a1, &v59);
    }
    // 0x41019d
    if ((int32_t)v61 != 0) {
        // 0x40fe67
        return 0xfffffffe;
    }
    char * v62 = (char *)a1;
    int64_t v63; // bp-200, 0x40fd60
    int32_t v64; // 0x40fd60
    if ((*v60 & 0xf000) == 0xa000) {
        // 0x410479
        v64 = __lxstat(1, v62, (struct stat *)&v63);
    } else {
        // 0x4101db
        v64 = __xstat(1, v62, (struct stat *)&v63);
    }
    // 0x4101ec
    int32_t v65; // 0x40fd60
    uint64_t v66 = (int64_t)v65; // 0x4101ec
    int64_t v67 = v65; // 0x4101f4
    int64_t v68 = v30 ^ v67 | v2 ^ v66 | (int64_t)v64; // 0x410211
    if (v68 != 0) {
        int64_t * v69 = (int64_t *)(0x100000000000000 * (int64_t)&v59 >> 56);
        if ((*v60 & 0xf000) == 0xa000) {
            // 0x4104a3
            function_410ab0(a1, v69, v68);
        } else {
            // 0x410250
            function_410aa0(a1, v69);
        }
        // 0x410263
        if (v64 != 0) {
            // 0x40fe67
            return 0xfffffffe;
        }
    }
    int64_t v70 = 0x3b9aca00 * (v66 % 2) + v67; // 0x410290
    int32_t v71 = v70; // 0x410298
    int64_t v72 = -1; // 0x4102a9
    int64_t v73 = result; // 0x4102a9
    if (10 * (((int32_t)(0x66666667 * (0x100000000 * v70 >> 32) / 0x100000000) >> 2) - (v71 >> 31)) == v71) {
        // 0x4102af
        v72 = -1;
        v73 = 10;
        if (v36 != 10) {
            int64_t v74 = 10; // 0x4102d3
            int32_t v75 = 9; // 0x410307
            int64_t v76 = v70 & 0xffffffff;
            int32_t v77 = ((int32_t)(0x66666667 * (0x100000000 * v76 >> 32) / 0x100000000) >> 2) - ((int32_t)v76 >> 31); // 0x4102e8
            int64_t v78 = v74; // 0x410301
            while (v77 % 10 == 0) {
                // 0x410307
                v75--;
                v72 = -2;
                v73 = 0x77359400;
                if (v75 == 0) {
                    goto lab_0x410318;
                }
                int64_t v79 = 10 * v74; // 0x4102d3
                v74 = v79 & 0xfffffffc;
                v78 = v74;
                if ((int32_t)v79 == (int32_t)v36) {
                    // break -> 0x41048f
                    break;
                }
                v76 = v77;
                v77 = ((int32_t)(0x66666667 * (0x100000000 * v76 >> 32) / 0x100000000) >> 2) - ((int32_t)v76 >> 31);
                v78 = v74;
            }
            // 0x41048f
            v72 = (int64_t)((int32_t)v78 == 0x77359400) - 1;
            v73 = v78;
        }
    }
  lab_0x410318:
    // 0x410318
    v32 = v73;
    v33 = v72 & v39;
    v34 = 0x100000000000000 * v37 >> 56;
    v35 = v1 - (0x100000000 * (int64_t)(v13 >> 31) | v5) % (v73 & 0xffffffff) & 0xffffffff;
    goto lab_0x410330;
}
// Address range: 0x4104d0 - 0x41059e
int64_t function_4104d0(int64_t * a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    int64_t v2 = (int64_t)a1;
    int64_t * v3 = (int64_t *)(v1 + 8); // 0x4104dc
    int64_t * v4 = (int64_t *)(v1 + 24); // 0x4104e0
    int64_t v5 = *v4; // 0x4104e0
    int64_t v6; // 0x4104d0
    switch (*v3) {
        case 0x3ffffffe: {
            // 0x410520
            if (v5 == 0x3ffffffe) {
                // 0x41050f
                return 1;
            }
            // 0x41052e
            *a2 = *(int64_t *)(v2 + 72);
            *v3 = *(int64_t *)(v2 + 80);
            v6 = v5;
            goto lab_0x41053d;
        }
        case 0x3fffffff: {
            if (v5 == 0x3fffffff) {
                // 0x410590
                *a2 = 0;
                // 0x41050f
                return 0;
            }
            // 0x410571
            function_412f80(v1);
            int64_t v7 = *v4; // 0x410579
            v6 = v7;
            if (v7 == 0x3ffffffe) {
                goto lab_0x4104fd;
            } else {
                goto lab_0x41053d;
            }
        }
        default: {
            // 0x4104f4
            v6 = v5;
            if (v5 != 0x3ffffffe) {
                goto lab_0x41053d;
            } else {
                goto lab_0x4104fd;
            }
        }
    }
  lab_0x41053d:
    // 0x41053d
    if (v6 == 0x3fffffff) {
        // 0x410548
        function_412f80(v1 + 16);
        return 0;
    }
    // 0x41050f
    return 0;
  lab_0x4104fd:
    // 0x4104fd
    *(int64_t *)(v1 + 16) = *(int64_t *)(v2 + 88);
    *v4 = *(int64_t *)(v2 + 96);
    // 0x41050f
    return 0;
}
// Address range: 0x4105a0 - 0x410649
int64_t function_4105a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4105a0
    uint64_t v2 = v1 - 0x3ffffffe; // 0x4105a4
    if (v1 >= 0x3b9aca00 && v1 != 0x3fffffff && v2 != 0) {
        // 0x410630
        *__errno_location() = 22;
        return 0xffffffff;
    }
    uint64_t v3 = *(int64_t *)(a1 + 24); // 0x4105ba
    uint64_t v4 = v3 - 0x3ffffffe; // 0x4105be
    if (v3 >= 0x3b9aca00 && v3 != 0x3fffffff && v4 != 0) {
        // 0x410630
        *__errno_location() = 22;
        return 0xffffffff;
    }
    int64_t v5 = 0; // 0x4105dd
    int64_t v6 = 0; // 0x4105dd
    if (v2 < 2) {
        // 0x4105df
        *(int64_t *)a1 = 0;
        v5 = v1 == 0x3ffffffe;
        v6 = 1;
    }
    int64_t v7 = v5; // 0x4105fc
    int64_t v8 = v6; // 0x4105fc
    if (v4 < 2) {
        // 0x4105fe
        *(int64_t *)(a1 + 16) = 0;
        v7 = v5 + (int64_t)(v3 == 0x3ffffffe);
        v8 = 1;
    }
    // 0x41061a
    return v8 + (int64_t)((int32_t)v7 == 1) & 0xffffffff;
}
// Address range: 0x410650 - 0x41065a
int64_t function_410650(void) {
    struct timespec v1; // 0x410655
    struct timespec times[2]; // 0x410655
    // 0x410650
    v1 = (struct {int64_t e0; int32_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    int64_t fd; // 0x410650
    v1.e0 = fd;
    times[0] = v1;
    return utimensat((int32_t)fd, (char *)fd, times, AT_SYMLINK_NOFOLLOW);
}
// Address range: 0x410660 - 0x410a9e
int64_t function_410660(int64_t a1, int64_t path, int64_t * a3, int64_t a4) {
    struct timeval v1; // 0x4107d0
    struct timeval v2[2]; // 0x4107d0
    struct timeval v3; // 0x410842
    struct timeval v4[2]; // 0x410842
    struct timespec v5; // 0x4108fd
    struct timespec times[2]; // 0x4108fd
    struct timespec v6; // 0x4106da
    struct timespec times2[2]; // 0x4106da
    struct timeval v7; // 0x4109f0
    struct timeval v8[2]; // 0x4109f0
    int64_t v9 = (int64_t)a3;
    int64_t v10; // 0x410660
    int64_t v11; // bp-288, 0x410660
    if (a3 == NULL) {
        // 0x410850
        v11 = 0;
        v10 = 0;
    } else {
        int128_t v12 = *(int128_t *)&v9; // 0x41067d
        int128_t v13 = __asm_movdqu(v12); // 0x41067d
        int64_t v14 = v12;
        int128_t v15 = __asm_movdqu(*(int128_t *)(v14 + 16)); // 0x410681
        int64_t v16; // bp-280, 0x410660
        int64_t v17 = &v16; // 0x410686
        v11 = v17;
        v16 = __asm_movaps(v13);
        __asm_movaps(v15);
        int64_t v18 = function_4105a0(v17, path, v14, a4); // 0x41069a
        v10 = v18 & 0xffffffff;
        if ((int32_t)v18 < 0) {
            // 0x410818
            return -1;
        }
    }
    int32_t fd = a1; // 0x4106aa
    if (fd < 0 == path == 0) {
        // 0x410a48
        *__errno_location() = 9;
        // 0x410818
        return -1;
    }
    // 0x4106b7
    int32_t result; // 0x410660
    int64_t v19; // bp-184, 0x410660
    bool v20; // 0x410660
    if (g77 < 0) {
        goto lab_0x4106f5;
    } else {
        int64_t v21; // 0x410660
        if (v10 == 2) {
            // 0x410868
            v9 = &v19;
            int32_t v22; // 0x410660
            if (fd < 0) {
                // 0x410a00
                v22 = __xstat(1, (char *)path, (struct stat *)&v19);
            } else {
                // 0x410875
                v22 = __fxstat(1, fd, (struct stat *)&v19);
            }
            // 0x410886
            if (v22 != 0) {
                // 0x410818
                return -1;
            }
            // 0x41088e
            if (*(int64_t *)(v11 + 8) == 0x3ffffffe) {
                // 0x410a20
                v21 = v11;
            } else {
                // 0x4108a1
                v21 = v11;
                if (*(int64_t *)(v11 + 24) == 0x3ffffffe) {
                    // 0x4108b5
                    v21 = v11;
                }
            }
        } else {
            // 0x4106cb
            v21 = v11;
        }
        // 0x4106d0
        if (fd < 0) {
            // 0x4108f0
            v5 = (struct {int64_t e0; int32_t e1;}){
                .e0 = 0,
                .e1 = 0
            };
            v5.e0 = v21;
            times[0] = v5;
            int32_t v23 = utimensat(-100, (char *)path, times, 0); // 0x4108fd
            v20 = v23 == 0;
            result = v23;
            if (v23 >= 0 == (v23 != 0)) {
                goto lab_0x4106ea;
            } else {
                goto lab_0x41090d;
            }
        } else {
            // 0x4106d8
            v6 = (struct {int64_t e0; int32_t e1;}){
                .e0 = 0,
                .e1 = 0
            };
            v6.e0 = v21;
            times2[0] = v6;
            int32_t v24 = futimens(fd, times2); // 0x4106da
            v20 = v24 == 0;
            result = v24;
            if (v24 < 1) {
                goto lab_0x41090d;
            } else {
                goto lab_0x4106ea;
            }
        }
    }
  lab_0x4106f5:
    // 0x4106f5
    g77 = -1;
    g76 = -1;
    int64_t v25; // 0x410660
    switch ((int32_t)v25) {
        case 0: {
            goto lab_0x410760;
        }
        case 3: {
            goto lab_0x41073a;
        }
        default: {
            // 0x410714
            v9 = &v19;
            int32_t v26; // 0x410660
            if (fd < 0) {
                // 0x4108d8
                v26 = __xstat(1, (char *)path, (struct stat *)&v19);
            } else {
                // 0x410721
                v26 = __fxstat(1, fd, (struct stat *)&v19);
            }
            // 0x410732
            if (v26 != 0) {
                // 0x410818
                return -1;
            }
            goto lab_0x41073a;
        }
    }
  lab_0x410760:;
    // 0x410760
    int64_t v27; // 0x410660
    int64_t v28; // 0x410660
    if (v11 == 0) {
        goto lab_0x410830;
    } else {
        // 0x41076e
        int64_t v29; // bp-248, 0x410660
        int64_t v30 = &v29; // 0x410775
        v29 = *(int64_t *)v11;
        v9 = v30;
        v27 = v30;
        v28 = v30;
        if (fd < 0) {
            goto lab_0x41083a;
        } else {
            goto lab_0x4107cc;
        }
    }
  lab_0x41073a:
    // 0x41073a
    if (v11 == 0) {
        goto lab_0x410830;
    } else {
        // 0x410746
        if ((char)function_4104d0(&v19, &v11) != 0) {
            // 0x410818
            return 0;
        }
        goto lab_0x410760;
    }
  lab_0x410830:
    // 0x410830
    v9 = 0;
    v27 = 0;
    v28 = 0;
    if (fd >= 0) {
        goto lab_0x4107cc;
    } else {
        goto lab_0x41083a;
    }
  lab_0x4106ea:
    // 0x4106ea
    *__errno_location() = 38;
    goto lab_0x4106f5;
  lab_0x41090d:
    // 0x41090d
    if (v20 || *__errno_location() != 38) {
        // 0x410913
        g77 = 1;
        // 0x410818
        return result;
    }
    goto lab_0x4106f5;
  lab_0x4107cc:
    // 0x4107cc
    v1 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v1.e0 = v27;
    v2[0] = v1;
    int64_t v31; // bp-216, 0x410660
    if (futimesat(fd, NULL, v2) != 0) {
        // 0x4107e0
        if (path == 0) {
            // 0x410818
            int32_t v32; // 0x410660
            uint32_t result2 = v32;
            return result2;
        }
        struct utimbuf * times3 = NULL; // 0x4107f5
        if (v11 != 0) {
            // 0x4107f7
            v31 = *(int64_t *)v11;
            times3 = (struct utimbuf *)&v31;
        }
        // 0x410818
        return utime((char *)path, times3);
    }
    // 0x410928
    if (v27 == 0) {
        // 0x410818
        return 0;
    }
    int64_t v33 = *(int64_t *)(v27 + 8); // 0x410931
    int64_t v34 = v33 - 0x7a11f; // 0x410931
    int64_t v35 = *(int64_t *)(v27 + 24); // 0x41093d
    int64_t v36 = v35 - 0x7a11f; // 0x41093d
    if (v34 < 0 == (0x7a11e - v33 & v33) < 0 != v34 != 0 && v36 < 0 == (0x7a11e - v35 & v35) < 0 != v36 != 0 || __fxstat(1, fd, (struct stat *)&v19) != 0) {
        // 0x410818
        return 0;
    }
    int64_t v37 = v27 + 16; // 0x410978
    int64_t v38 = *(int64_t *)v37; // 0x410978
    int128_t v39 = __asm_movdqa(*(int128_t *)v27); // 0x410984
    int64_t v40 = *(int64_t *)v27; // 0x41098a
    int128_t v41 = __asm_movdqa(*(int128_t *)v37); // 0x41098e
    v31 = __asm_movaps(v39);
    __asm_movaps(v41);
    int64_t v42; // 0x410660
    if (v42 == 0 != (v34 < 0 == (0x7a11e - v33 & v33) < 0 == (v34 != 0) == v42 == v40 + 1)) {
        // 0x410a78
        if (v42 == 0 != (v36 < 0 == (0x7a11e - v35 & v35) < 0 == (v36 != 0) == v42 - v38 == 1)) {
            // 0x410818
            return 0;
        }
    }
    // 0x4109e7
    v7 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v7.e0 = &v31;
    v8[0] = v7;
    futimesat(fd, NULL, v8);
    // 0x410818
    return 0;
  lab_0x41083a:
    // 0x41083a
    v3 = (struct {int64_t e0; int64_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v3.e0 = v28;
    v4[0] = v3;
    // 0x410818
    return futimesat(-100, (char *)path, v4);
}
// Address range: 0x410aa0 - 0x410ab0
int64_t function_410aa0(int64_t a1, int64_t * a2) {
    // 0x410aa0
    int64_t v1; // 0x410aa0
    return function_410660(0xffffffff, a1, a2, v1);
}
// Address range: 0x410ab0 - 0x410cf8
int64_t function_410ab0(int64_t path, int64_t * a2, int64_t a3) {
    struct timespec v1; // 0x410b18
    struct timespec times[2]; // 0x410b18
    int64_t v2 = (int64_t)a2;
    int64_t v3; // 0x410ab0
    int64_t v4; // 0x410ab0
    int64_t v5; // 0x410ab0
    int64_t v6; // 0x410ab0
    int64_t v7; // bp-168, 0x410ab0
    int64_t v8; // bp-208, 0x410ab0
    if (a2 == NULL) {
        int32_t v9 = g76; // 0x410ba0
        v8 = 0;
        v6 = 0;
        v3 = 0;
        if (v9 >= 0) {
            goto lab_0x410b0b;
        } else {
            // 0x410bbb
            g76 = -1;
            v5 = v9;
            goto lab_0x410bc5;
        }
    } else {
        int128_t v10 = *(int128_t *)&v2; // 0x410ac7
        int128_t v11 = __asm_movdqu(v10); // 0x410ac7
        int64_t v12 = v10;
        int128_t v13 = __asm_movdqu(*(int128_t *)(v12 + 16)); // 0x410acb
        int64_t v14; // bp-200, 0x410ab0
        int64_t v15 = &v14; // 0x410ad0
        v8 = v15;
        v14 = __asm_movaps(v11);
        __asm_movaps(v13);
        int64_t v16; // 0x410ab0
        int64_t v17 = function_4105a0(v15, v12, a3, v16); // 0x410ae4
        int32_t v18 = v17; // 0x410aeb
        if (v18 < 0) {
            // 0x410b92
            return 0xffffffff;
        }
        int64_t v19 = v17 & 0xffffffff; // 0x410ae9
        v4 = v19;
        if (g76 < 0) {
            goto lab_0x410b32;
        } else {
            if (v18 == 2) {
                // 0x410c50
                if (__lxstat(1, (char *)path, (struct stat *)&v7) != 0) {
                    // 0x410b92
                    return 0xffffffff;
                }
                // 0x410c6a
                if (*(int64_t *)(v8 + 8) == 0x3ffffffe) {
                    // 0x410cb0
                    v6 = v8;
                    v3 = 3;
                } else {
                    // 0x410c79
                    v6 = v8;
                    v3 = 3;
                    if (*(int64_t *)(v8 + 24) == 0x3ffffffe) {
                        // 0x410c8c
                        v6 = v8;
                        v3 = 3;
                    }
                }
            } else {
                // 0x410b06
                v6 = v8;
                v3 = v19;
            }
            goto lab_0x410b0b;
        }
    }
  lab_0x410b0b:
    // 0x410b0b
    v1 = (struct {int64_t e0; int32_t e1;}){
        .e0 = 0,
        .e1 = 0
    };
    v1.e0 = v6;
    times[0] = v1;
    uint32_t result = utimensat(-100, (char *)path, times, AT_SYMLINK_NOFOLLOW); // 0x410b18
    int64_t v20; // 0x410ab0
    if (result < 1) {
        if (result == 0) {
            // 0x410bf6
            g77 = 1;
            g76 = 1;
            return result;
        }
        int32_t v21 = *__errno_location(); // 0x410cd5
        v20 = 256;
        v4 = v3;
        if (v21 != 38) {
            // 0x410bf6
            g77 = 1;
            g76 = 1;
            return result;
        }
    } else {
        // 0x410b27
        *__errno_location() = 38;
        v20 = 256;
        v4 = v3;
    }
    goto lab_0x410b32;
  lab_0x410b32:
    // 0x410b32
    g76 = -1;
    int32_t v22 = v4; // 0x410b3c
    v5 = v20;
    int64_t v23; // 0x410ab0
    if (v22 == 0) {
        goto lab_0x410bc5;
    } else {
        if (v22 != 3) {
            // 0x410c20
            if (__lxstat(1, (char *)path, (struct stat *)&v7) != 0) {
                // 0x410b92
                return 0xffffffff;
            }
            // 0x410c36
            v23 = v20;
            if (v8 != 0) {
                goto lab_0x410b55;
            } else {
                goto lab_0x410b6a;
            }
        } else {
            // 0x410b4d
            v23 = v20;
            if (v8 == 0) {
                goto lab_0x410b6a;
            } else {
                goto lab_0x410b55;
            }
        }
    }
  lab_0x410bc5:;
    int32_t v24 = __lxstat(1, (char *)path, (struct stat *)&v7); // 0x410bd2
    v23 = v5;
    if (v24 != 0) {
        // 0x410b92
        return 0xffffffff;
    }
    goto lab_0x410b6a;
  lab_0x410b6a:;
    int64_t result2; // 0x410ab0
    int32_t v25; // 0x410ab0
    if ((v25 & 0xf000) == 0xa000) {
        // 0x410ce8
        *__errno_location() = 38;
        result2 = 0xffffffff;
    } else {
        // 0x410b7e
        result2 = function_410660(0xffffffff, path, (int64_t *)v8, v23) & 0xffffffff;
    }
    // 0x410b92
    return result2;
  lab_0x410b55:;
    int64_t v26 = function_4104d0(&v7, &v8); // 0x410b61
    v23 = v20;
    if ((char)v26 != 0) {
        // 0x410b92
        return 0;
    }
    goto lab_0x410b6a;
}
// Address range: 0x410d00 - 0x4110dd
int64_t function_410d00(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x410d98
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x410d1c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x410d36
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x410d7b
    if (a6 < 10) {
        // 0x410d8a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x410e82
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4110e0 - 0x411100
int64_t function_4110e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4110e0
    if (a5 == 0) {
        // 0x4110fb
        return function_410d00(a1, a2, a3, a4, a5, 0, (int64_t)&g90);
    }
    int64_t v1 = 0; // 0x4110e7
    v1++;
    int64_t v2 = v1; // 0x4110f9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4110f0
        v1++;
        v2 = v1;
    }
    // 0x4110fb
    return function_410d00(a1, a2, a3, a4, a5, v2, (int64_t)&g90);
}
// Address range: 0x411100 - 0x411160
int64_t function_411100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x411100
    int64_t v3 = &v2; // 0x411100
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x411133
    int64_t v6; // 0x41111d
    int64_t * v7; // 0x41113b
    int64_t v8; // 0x41113b
    int64_t v9; // 0x411147
    if (v5 < 48) {
        // 0x411110
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x411153
            break;
        }
    } else {
        // 0x41113b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x411153
            break;
        }
    }
    int64_t v10 = 10; // 0x411131
    while (v4 != 9) {
        // 0x411129
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x411110
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x411153
                break;
            }
        } else {
            // 0x41113b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x411153
                break;
            }
        }
        // 0x411129
        v10 = 10;
    }
    // 0x411153
    return function_410d00(a1, a2, a3, a4, v3, v10, (int64_t)&g90);
}
// Address range: 0x411160 - 0x41121c
int64_t function_411160(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x411160
    int64_t v1; // bp-168, 0x411160
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x411160
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x411160
    int64_t v8; // 0x411160
    int64_t v9; // bp-56, 0x411160
    int64_t v10; // 0x4111c5
    int64_t v11; // 0x4111e9
    if ((int32_t)v6 < 48) {
        // 0x4111b0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x411200
            break;
        }
    } else {
        // 0x4111e2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x411200
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4111da
    int64_t v13 = 10; // 0x4111da
    while (v5 != 9) {
        // 0x4111dc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4111b0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x411200
                break;
            }
        } else {
            // 0x4111e2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x411200
                break;
            }
        }
        // 0x4111d2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x411200
    int64_t v14; // bp-136, 0x411160
    int64_t result = function_410d00(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g90); // 0x41120f
    return result;
}
// Address range: 0x411220 - 0x411294
int64_t function_411220(int64_t a1) {
    // 0x411220
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x411283
    return fputs_unlocked(v1, g44);
}
// Address range: 0x4112a0 - 0x4112d8
int64_t function_4112a0(void) {
    // 0x4112a0
    if (g79 != 0) {
        // 0x4112a9
        return g78;
    }
    int32_t v1 = geteuid(); // 0x4112bc
    g79 = 1;
    g78 = v1 == 0;
    return (int64_t)(v1 & -256) | (int64_t)(v1 == 0);
}
// Address range: 0x4112e0 - 0x4112fa
int64_t function_4112e0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4112e4
    if (size != 0 != (mem == NULL)) {
        // 0x4112f3
        return (int64_t)mem;
    }
    // 0x4112f5
    function_411530(size);
    // UNREACHABLE
}
// Address range: 0x411300 - 0x411321
int64_t function_411300(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x411303
    int64_t v2 = v1; // 0x411303
    if (v2 < 0) {
        // 0x41131b
        function_411530(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x411319
        return function_4112e0(v2);
    }
    // 0x41131b
    function_411530(v2);
    // UNREACHABLE
}
// Address range: 0x411330 - 0x411332
int64_t function_411330(void) {
    // 0x411330
    int64_t v1; // 0x411330
    return function_4112e0(v1);
}
// Address range: 0x411340 - 0x411376
int64_t function_411340(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x411368
        free(v1);
        return (int32_t)&g90 ^ (int32_t)&g90;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x411351
    if (a2 != 0 != (mem == NULL)) {
        // 0x411360
        return (int64_t)mem;
    }
    // 0x411371
    function_411530(a1);
    // UNREACHABLE
}
// Address range: 0x411380 - 0x4113a1
int64_t function_411380(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x411383
    int64_t v2 = v1; // 0x411383
    if (v2 < 0) {
        // 0x41139b
        function_411530(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x411399
        return function_411340(a1, v2);
    }
    // 0x41139b
    function_411530(a1);
    // UNREACHABLE
}
// Address range: 0x4113b0 - 0x411436
int64_t function_4113b0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x41140b
            function_411530(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_411340(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4113f3
    if (a2 == 0) {
        // 0x411418
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4113f8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x41140b
        function_411530(a1);
        // UNREACHABLE
    }
    // 0x4113da
    *(int64_t *)a2 = v2;
    return function_411340(a1, v2 * a3);
}
// Address range: 0x411440 - 0x411490
int64_t function_411440(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x411440
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x41148a
            function_411530(a1);
            // UNREACHABLE
        }
        // 0x411462
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_411340(a1, v1);
    }
    if (a2 == 0) {
        // 0x411475
        *(int64_t *)a2 = 128;
        return function_411340(0, 128);
    }
    // 0x411488
    if (a2 < 0) {
        // 0x41148a
        function_411530(a1);
        // UNREACHABLE
    }
    // 0x411462
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_411340(a1, v1);
}
// Address range: 0x411490 - 0x4114a7
int64_t function_411490(int64_t a1, int64_t a2) {
    // 0x411490
    return (int64_t)memset((int64_t *)function_4112e0(a1), 0, (int32_t)a1);
}
// Address range: 0x4114b0 - 0x4114de
int64_t function_4114b0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4114b7
    if ((int64_t)v1 < 0) {
        // 0x4114d9
        function_411530(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4114d9
        function_411530(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4114ca
    if (mem != NULL) {
        // 0x4114d4
        return (int64_t)mem;
    }
    // 0x4114d9
    function_411530(nmemb);
    // UNREACHABLE
}
// Address range: 0x4114e0 - 0x411508
int64_t function_4114e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4112e0(a2); // 0x4114ef
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x411510 - 0x411523
int64_t function_411510(int64_t str) {
    // 0x411510
    return function_4114e0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x411530 - 0x411561
int64_t function_411530(int64_t a1) {
    // 0x411530
    error(g33, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x411570 - 0x4119a0
int64_t function_411570(int64_t str, int32_t a2, uint32_t base, int64_t * a4, int32_t a5, int64_t a6) {
    if (base >= 37) {
        // 0x41197b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        return &g90;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x4115a2
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x4115d2
    int64_t v3 = str; // 0x4115d7
    char v4 = c; // 0x4115d7
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x4115cc
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x4115c8
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x4115d9
    if (v4 == 45) {
        // 0x411613
        return 4;
    }
    int64_t str2 = a5;
    int64_t v6; // bp-64, 0x411570
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x41159e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x4115e4
    int64_t * v7 = (int64_t *)endptr; // 0x4115e9
    int64_t v8 = *v7; // 0x4115e9
    char v9; // 0x411570
    int64_t v10; // 0x411570
    int64_t v11; // 0x411570
    int64_t v12; // 0x411570
    int64_t v13; // 0x411570
    int64_t v14; // 0x411570
    int64_t v15; // 0x411570
    if (v8 == str) {
        // 0x411640
        if (c == 0 || a5 == 0) {
            // 0x411613
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x411661
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x411613
            return 4;
        }
        goto lab_0x41166f;
    } else {
        int32_t v16 = *v1; // 0x4115f4
        int64_t v17 = 0; // 0x4115fa
        if (v16 != 0) {
            // 0x411628
            v17 = 1;
            if (v16 != 34) {
                // 0x411613
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x4115e4
        v13 = v18;
        v10 = v17;
        if (a5 == 0) {
            goto lab_0x411610;
        } else {
            char c2 = *(char *)v8; // 0x411603
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x411763
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x41166f;
                } else {
                    goto lab_0x411775;
                }
            } else {
                goto lab_0x411610;
            }
        }
    }
  lab_0x41166f:;
    int64_t v19 = 0x100000000 * v8 >> 32;
    unsigned char v20 = v9 - 69;
    int64_t v21 = 1024; // 0x411677
    int64_t v22 = 1; // 0x411677
    int64_t v23; // 0x411570
    int64_t v24; // 0x411570
    int64_t v25; // 0x411570
    int64_t v26; // 0x411570
    int64_t v27; // 0x411570
    int64_t v28; // 0x411570
    int64_t v29; // 0x411570
    int64_t v30; // 0x411570
    int64_t v31; // 0x411570
    int64_t v32; // 0x411570
    int64_t v33; // 0x411570
    int64_t v34; // 0x411570
    int64_t v35; // 0x411570
    int64_t v36; // 0x411570
    int64_t v37; // 0x411570
    int64_t v38; // 0x411570
    int64_t v39; // 0x411570
    int64_t v40; // 0x411570
    int64_t v41; // 0x411570
    int64_t v42; // 0x411570
    if (v20 < 48) {
        // 0x411679
        v21 = 1024;
        v22 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4116da;
        } else {
            // 0x41168c
            v21 = 1024;
            v22 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x4116da;
            } else {
                // 0x4116a8
                v21 = 1000;
                v22 = 2;
                switch (*(char *)(v19 + 1)) {
                    case 68: {
                        goto lab_0x4116da;
                    }
                    case 105: {
                        char v43 = *(char *)(v19 + 2); // 0x411909
                        v21 = 1024;
                        v22 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x4116da;
                    }
                    default: {
                        // 0x4116bd
                        g95 = v20;
                        v21 = 1000;
                        v22 = 2;
                        v25 = 1024;
                        v37 = 1;
                        v24 = v14;
                        v23 = v11;
                        v38 = 1;
                        v26 = 1024;
                        v39 = 1;
                        v15 = v14;
                        v12 = v11;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v42 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x41187b;
                            }
                            case 70: {
                                goto lab_0x411775;
                            }
                            case 71: {
                                goto lab_0x4118b3;
                            }
                            case 72: {
                                goto lab_0x411775;
                            }
                            case 73: {
                                goto lab_0x411775;
                            }
                            case 74: {
                                goto lab_0x411775;
                            }
                            case 75: {
                                goto lab_0x41173c;
                            }
                            case 76: {
                                goto lab_0x411775;
                            }
                            case 77: {
                                goto lab_0x4116fe;
                            }
                            case 78: {
                                goto lab_0x411775;
                            }
                            case 79: {
                                goto lab_0x411775;
                            }
                            case 80: {
                                goto lab_0x411848;
                            }
                            case 81: {
                                goto lab_0x411775;
                            }
                            case 82: {
                                goto lab_0x411775;
                            }
                            case 83: {
                                goto lab_0x411775;
                            }
                            case 84: {
                                goto lab_0x411818;
                            }
                            case 85: {
                                goto lab_0x411775;
                            }
                            case 86: {
                                goto lab_0x411775;
                            }
                            case 87: {
                                goto lab_0x411775;
                            }
                            case 88: {
                                goto lab_0x411775;
                            }
                            case 89: {
                                goto lab_0x4117e6;
                            }
                            case 90: {
                                goto lab_0x4117ab;
                            }
                            case 91: {
                                goto lab_0x411775;
                            }
                            case 92: {
                                goto lab_0x411775;
                            }
                            case 93: {
                                goto lab_0x411775;
                            }
                            case 94: {
                                goto lab_0x411775;
                            }
                            case 95: {
                                goto lab_0x411775;
                            }
                            case 96: {
                                goto lab_0x411775;
                            }
                            case 97: {
                                goto lab_0x411775;
                            }
                            case 98: {
                                goto lab_0x41178f;
                            }
                            case 99: {
                                goto lab_0x411718;
                            }
                            case 100: {
                                goto lab_0x411775;
                            }
                            case 101: {
                                goto lab_0x411775;
                            }
                            case 102: {
                                goto lab_0x411775;
                            }
                            case 103: {
                                goto lab_0x4118b3;
                            }
                            case 104: {
                                goto lab_0x411775;
                            }
                            case 105: {
                                goto lab_0x411775;
                            }
                            case 106: {
                                goto lab_0x411775;
                            }
                            case 107: {
                                goto lab_0x41173c;
                            }
                            case 108: {
                                goto lab_0x411775;
                            }
                            case 109: {
                                goto lab_0x4116fe;
                            }
                            case 110: {
                                goto lab_0x411775;
                            }
                            case 111: {
                                goto lab_0x411775;
                            }
                            case 112: {
                                goto lab_0x411775;
                            }
                            case 113: {
                                goto lab_0x411775;
                            }
                            case 114: {
                                goto lab_0x411775;
                            }
                            case 115: {
                                goto lab_0x411775;
                            }
                            case 116: {
                                goto lab_0x411818;
                            }
                            default: {
                                goto lab_0x4116da;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4116da;
    }
  lab_0x411610:
    // 0x411610
    *a4 = v13;
    // 0x411613
    return v10 & 0xffffffff;
  lab_0x4116da:
    // 0x4116da
    g96 = v9 - 66;
    v25 = v21;
    v37 = v22;
    v24 = v14;
    v23 = v11;
    v38 = v22;
    v26 = v21;
    v39 = v22;
    v15 = v14;
    v12 = v11;
    v40 = v22;
    v27 = v21;
    v41 = v22;
    v28 = v21;
    v42 = v22;
    v29 = v21;
    v33 = v22;
    v30 = v21;
    v34 = v22;
    v31 = v21;
    v35 = v22;
    v32 = v21;
    v36 = v22;
    int64_t v44; // 0x411570
    switch (v9) {
        case 66: {
            // 0x4118d4
            v44 = v22;
            if (v14 >= 0x40000000000000) {
                goto lab_0x411747;
            } else {
                // 0x4118e1
                v24 = 1024 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x411718;
            }
        }
        case 69: {
            goto lab_0x41187b;
        }
        case 71: {
            goto lab_0x4118b3;
        }
        case 75: {
            goto lab_0x41173c;
        }
        case 77: {
            goto lab_0x4116fe;
        }
        case 80: {
            goto lab_0x411848;
        }
        case 84: {
            goto lab_0x411818;
        }
        case 89: {
            goto lab_0x4117e6;
        }
        case 90: {
            goto lab_0x4117ab;
        }
        case 98: {
            goto lab_0x41178f;
        }
        case 99: {
            goto lab_0x411718;
        }
        case 103: {
            goto lab_0x4118b3;
        }
        case 107: {
            goto lab_0x41173c;
        }
        case 109: {
            goto lab_0x4116fe;
        }
        case 116: {
            goto lab_0x411818;
        }
        case 119: {
            // 0x411780
            v44 = v22;
            if (v14 < 0) {
                goto lab_0x411747;
            } else {
                // 0x411785
                v24 = 2 * v14;
                v23 = v11;
                v38 = v22;
                goto lab_0x411718;
            }
        }
        default: {
            goto lab_0x411775;
        }
    }
  lab_0x41187b:;
    uint128_t v45 = (int128_t)v14 * (int128_t)v31; // 0x411893
    int64_t v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
    int64_t v47 = v45 > 0xffffffffffffffff ? 1 : 0;
    int32_t v48 = 5; // 0x41189f
    int64_t v49 = v46; // 0x4118a2
    int64_t v50 = v35; // 0x4118a2
    int64_t v51 = v47; // 0x4118a2
    int32_t v52 = v48; // 0x4118a2
    int64_t v53 = v47; // 0x4118a2
    while (v48 != 0) {
        // 0x411890
        v45 = (int128_t)v46 * (int128_t)v31;
        v46 = (int64_t)(v45 < 0xffffffffffffffff ? v45 : 0xffffffffffffffff);
        v47 = v45 > 0xffffffffffffffff ? 1 : v53;
        v48 = v52 - 1;
        v49 = v46;
        v50 = v35;
        v51 = v47;
        v52 = v48;
        v53 = v47;
    }
    goto lab_0x4117d4;
  lab_0x4118b3:
    // 0x4118b3
    v24 = -1;
    v23 = 1;
    v38 = v36;
    if ((int128_t)v32 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x4118be
        int128_t v54; // 0x4118b9
        uint128_t v55; // 0x4118b9
        uint128_t v56 = (v55 & 0xffffffffffffffff) * v54; // 0x4118be
        v24 = -1;
        v23 = 1;
        int64_t v57; // 0x411570
        v38 = v57;
        if (v56 <= 0xffffffffffffffff) {
            uint128_t v58 = (v56 & 0xffffffffffffffff) * v54; // 0x4118c3
            v24 = -1;
            v23 = 1;
            v38 = v57;
            if (v58 <= 0xffffffffffffffff) {
                // 0x4118c8
                v24 = v58;
                int64_t v59; // 0x411570
                v23 = v59 & 0xffffffff;
                v38 = v57;
            }
        }
    }
    goto lab_0x411718;
  lab_0x41173c:;
    uint128_t v62 = (int128_t)v26 * (int128_t)v14; // 0x41173f
    v24 = v62;
    v23 = v11;
    v38 = v39;
    v44 = v39;
    if (v62 <= 0xffffffffffffffff) {
        goto lab_0x411718;
    } else {
        goto lab_0x411747;
    }
  lab_0x4116fe:;
    int128_t v63 = v25; // 0x411704
    uint128_t v64 = v63 * (int128_t)v14; // 0x411704
    v44 = v37;
    if (v64 > 0xffffffffffffffff) {
        goto lab_0x411747;
    } else {
        uint128_t v65 = (v64 & 0xffffffffffffffff) * v63; // 0x411709
        v44 = v37;
        if (v65 > 0xffffffffffffffff) {
            goto lab_0x411747;
        } else {
            // 0x41170e
            v24 = v65;
            v23 = v11;
            v38 = v37;
            goto lab_0x411718;
        }
    }
  lab_0x411848:;
    uint128_t v66 = (int128_t)v14 * (int128_t)v30; // 0x41185b
    int64_t v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
    int64_t v68 = v66 > 0xffffffffffffffff ? 1 : 0;
    int32_t v69 = 4; // 0x411867
    v49 = v67;
    v50 = v34;
    v51 = v68;
    int32_t v70 = v69; // 0x41186a
    int64_t v71 = v68; // 0x41186a
    while (v69 != 0) {
        // 0x411858
        v66 = (int128_t)v67 * (int128_t)v30;
        v67 = (int64_t)(v66 < 0xffffffffffffffff ? v66 : 0xffffffffffffffff);
        v68 = v66 > 0xffffffffffffffff ? 1 : v71;
        v69 = v70 - 1;
        v49 = v67;
        v50 = v34;
        v51 = v68;
        v70 = v69;
        v71 = v68;
    }
    goto lab_0x4117d4;
  lab_0x411818:;
    uint128_t v72 = (int128_t)v14 * (int128_t)v29; // 0x41182b
    int64_t v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
    int64_t v74 = v72 > 0xffffffffffffffff ? 1 : 0;
    int32_t v75 = 3; // 0x411837
    v49 = v73;
    v50 = v33;
    v51 = v74;
    int32_t v76 = v75; // 0x41183a
    int64_t v77 = v74; // 0x41183a
    while (v75 != 0) {
        // 0x411828
        v72 = (int128_t)v73 * (int128_t)v29;
        v73 = (int64_t)(v72 < 0xffffffffffffffff ? v72 : 0xffffffffffffffff);
        v74 = v72 > 0xffffffffffffffff ? 1 : v77;
        v75 = v76 - 1;
        v49 = v73;
        v50 = v33;
        v51 = v74;
        v76 = v75;
        v77 = v74;
    }
    goto lab_0x4117d4;
  lab_0x4117e6:;
    uint128_t v78 = (int128_t)v14 * (int128_t)v28; // 0x4117fb
    int64_t v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
    int64_t v80 = v78 > 0xffffffffffffffff ? 1 : 0;
    int32_t v81 = 7; // 0x411807
    v49 = v79;
    v50 = v42;
    v51 = v80;
    int32_t v82 = v81; // 0x41180a
    int64_t v83 = v80; // 0x41180a
    while (v81 != 0) {
        // 0x4117f8
        v78 = (int128_t)v79 * (int128_t)v28;
        v79 = (int64_t)(v78 < 0xffffffffffffffff ? v78 : 0xffffffffffffffff);
        v80 = v78 > 0xffffffffffffffff ? 1 : v83;
        v81 = v82 - 1;
        v49 = v79;
        v50 = v42;
        v51 = v80;
        v82 = v81;
        v83 = v80;
    }
    goto lab_0x4117d4;
  lab_0x4117ab:;
    uint128_t v84 = (int128_t)v14 * (int128_t)v27; // 0x4117c3
    int64_t v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
    int64_t v86 = v84 > 0xffffffffffffffff ? 1 : 0;
    int32_t v87 = 6; // 0x4117cf
    int32_t v88 = v87; // 0x4117d2
    int64_t v89 = v86; // 0x4117d2
    v49 = v85;
    v50 = v41;
    v51 = v86;
    while (v87 != 0) {
        // 0x4117c0
        v84 = (int128_t)v85 * (int128_t)v27;
        v85 = (int64_t)(v84 < 0xffffffffffffffff ? v84 : 0xffffffffffffffff);
        v86 = v84 > 0xffffffffffffffff ? 1 : v89;
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v49 = v85;
        v50 = v41;
        v51 = v86;
    }
    goto lab_0x4117d4;
  lab_0x41178f:
    // 0x41178f
    v44 = v40;
    if (v14 >= 0x80000000000000) {
        goto lab_0x411747;
    } else {
        // 0x411798
        v24 = 512 * v14;
        v23 = v11;
        v38 = v40;
        goto lab_0x411718;
    }
  lab_0x411718:;
    int64_t v60 = v23;
    int64_t v61 = (0x100000000 * v38 >> 32) + v19; // 0x41171d
    *v7 = v61;
    v13 = v24;
    v10 = (*(char *)v61 != 0 ? v60 | 2 : v60) & 0xffffffff;
    goto lab_0x411610;
  lab_0x411775:
    // 0x411775
    *a4 = v15;
    // 0x411613
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x411747:
    // 0x411747
    v24 = -1;
    v23 = 1;
    v38 = v44;
    goto lab_0x411718;
  lab_0x4117d4:
    // 0x4117d4
    v24 = v49;
    v23 = (v51 | v11) & 0xffffffff;
    v38 = v50;
    goto lab_0x411718;
}
// Address range: 0x4119a0 - 0x411a09
int64_t function_4119a0(void) {
    char * v1 = NULL; // bp-24, 0x4119bb
    int64_t v2 = 0; // bp-16, 0x4119c3
    int32_t v3 = __getdelim(&v1, (int32_t *)&v2, 10, g45); // 0x4119cc
    if (v3 < 1) {
        // 0x4119ee
        free((int64_t *)v1);
        return 0;
    }
    int64_t v4 = (int64_t)v1; // 0x4119d6
    char * v5 = (char *)((int64_t)v3 - 1 + v4); // 0x4119df
    int64_t response = v4; // 0x4119e2
    if (*v5 == 10) {
        // 0x411a00
        *v5 = 0;
        response = (int64_t)v1;
    }
    int32_t v6 = rpmatch((char *)response); // 0x4119e4
    // 0x4119ee
    free((int64_t *)v1);
    return v6 >= 0 == (v6 != 0);
}
// Address range: 0x411a10 - 0x411b45
int64_t function_411a10(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x411a40
    if (cmd != 1030) {
        // 0x411af0
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x411a4c
    int64_t v2; // 0x411a10
    if (g80 < 0) {
        int64_t v3 = function_411a10(fd, 0, v1, a4); // 0x411a94
        int64_t v4 = v3 & 0xffffffff; // 0x411a99
        if ((int32_t)v3 < 0) {
            // 0x411a80
            return v4 & 0xffffffff;
        }
        // 0x411a9f
        v2 = v4;
        if (g80 != -1) {
            // 0x411a80
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x411a67
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x411a76
            g80 = 1;
            // 0x411a80
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_411a10(fd & 0xffffffff, 0, v1, a4); // 0x411b27
        int64_t v7 = v6 & 0xffffffff; // 0x411b2c
        if ((int32_t)v6 < 0) {
            // 0x411a80
            return v7 & 0xffffffff;
        }
        // 0x411b36
        g80 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x411aaf
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x411aba
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x411a80
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x411ad2
    close(fd2);
    // 0x411a80
    return 0xffffffff;
}
// Address range: 0x411b50 - 0x411b90
int64_t function_411b50(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x411b6a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x411b6a
        return fflush(stream);
    }
    // 0x411b78
    function_411bc0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x411b90 - 0x411bb8
int64_t function_411b90(int64_t a1) {
    // 0x411b90
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x411bb7
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x411ba0
    int64_t result = v1; // 0x411baa
    if ((a1 & 256) != 0) {
        // 0x411bac
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x411bb7
    return result;
}
// Address range: 0x411bc0 - 0x411c17
int64_t function_411bc0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x411bc0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x411bca
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x411bfb
    int64_t result = -1; // 0x411c04
    if (v1 != -1) {
        // 0x411c06
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x411c12
    return result;
}
// Address range: 0x411c20 - 0x411cff
int64_t function_411c20(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x411c2c
    uint32_t v2 = *v1; // 0x411c2c
    int64_t v3 = a2 & 0xffffffff; // 0x411c31
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x411c34
    uint64_t v5 = (int64_t)*v4; // 0x411c34
    int64_t v6; // 0x411ca2
    if (v3 <= v5) {
      lab_0x411c9c_2:
        // 0x411c9c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x411c22
    int64_t v8 = v2; // 0x411c20
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x411c9c
        goto lab_0x411c9c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x411c58
    int64_t v17; // 0x411c66
    int64_t * v18; // 0x411c80
    int64_t * v19; // 0x411c83
    int64_t v20; // 0x411c8e
    int64_t v21; // 0x411c66
    while ((v16 & 0xffffffff) > v10) {
        // 0x411c63
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x411c80
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x411c97
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x411c9c
            goto lab_0x411c9c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x411c9c
            goto lab_0x411c9c_2;
        }
        // 0x411c52
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x411cdb
    int64_t * v23 = (int64_t *)v22; // 0x411ce0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x411ce3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x411ce0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x411cf7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x411c4d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x411c9c
            goto lab_0x411c9c_2;
        }
        // 0x411c52
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x411c63
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x411c80
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x411c97
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x411c9c
                goto lab_0x411c9c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x411c9c
                goto lab_0x411c9c_2;
            }
            // 0x411c52
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x411cc0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x411ce0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x411cf7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x411c9c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x411d00 - 0x41231c
int64_t function_411d00(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x411d1f
    int64_t v2 = *v1; // 0x411d1f
    char * str2 = (char *)v2; // 0x411d2c
    char c = *str2; // 0x411d2c
    int64_t v3 = v2; // 0x411d58
    int64_t v4 = 0; // 0x411d00
    int32_t v5; // 0x411d00
    int64_t v6; // 0x411d00
    int64_t v7; // 0x411d00
    int64_t v8; // 0x411d00
    int64_t v9; // 0x411d00
    int64_t v10; // 0x411d00
    int64_t v11; // 0x411d00
    int64_t v12; // 0x411d00
    int64_t v13; // 0x411d00
    int64_t str3; // 0x411d00
    int64_t v14; // 0x411d00
    int64_t v15; // 0x411d00
    int64_t v16; // 0x411d00
    int64_t v17; // 0x411d00
    int32_t v18; // 0x411d00
    int32_t v19; // 0x411d00
    int32_t v20; // 0x411d00
    int32_t v21; // 0x411d00
    int32_t v22; // 0x411d00
    int32_t v23; // 0x411d00
    int32_t v24; // 0x411d00
    int32_t v25; // 0x411d00
    int32_t v26; // 0x411d00
    int32_t v27; // 0x411d00
    int32_t v28; // 0x411d00
    int32_t v29; // 0x411d00
    int64_t nmemb; // 0x411d00
    int64_t v30; // 0x411d00
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x411d5c
            while (v31 != 0 == (v31 != 61)) {
                // 0x411d58
                v3++;
                v31 = *(char *)v3;
            }
            // 0x411d68
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x411d6e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x411d38
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x411d9c
                int64_t v34; // 0x411d00
                int64_t v35; // 0x411d00
                if (strncmp(str, str2, n) == 0) {
                    // 0x411da5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x411f20;
                    }
                }
                int64_t v36 = a4 + 32; // 0x411db6
                int64_t v37 = *(int64_t *)v36; // 0x411dba
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x411d90
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x411da5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x411f20;
                        }
                    }
                    // 0x411db6
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
                  lab_0x411e06:
                    // 0x411e06
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
                        goto lab_0x411e60;
                    } else {
                        if (v11 == 0) {
                            // 0x411fd0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x411e60;
                        } else {
                            if (v39 == 0) {
                                // 0x411f80
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x411e2a;
                                } else {
                                    // 0x411f8c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x411e2a;
                                    } else {
                                        // 0x411f9a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x411e2a;
                                        } else {
                                            goto lab_0x411e60;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x411e2a;
                            }
                        }
                    }
                }
              lab_0x411e71:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x412046
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4121f2
                            flockfile(g47);
                            int64_t v41 = *v1; // 0x412212
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x41225f
                            int64_t v43 = (int64_t)g47;
                            int64_t v44 = v43; // 0x412279
                            int64_t v45; // 0x41227b
                            if (*(char *)v42 != 0) {
                                // 0x41227b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g47;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x412273
                            while (v17 + nmemb != v42) {
                                // 0x412275
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x41227b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g47;
                                }
                                // 0x412268
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4122a0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g47);
                            v40 = *v1;
                        } else {
                            // 0x412054
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4121af
                        free((int64_t *)v17);
                    }
                    // 0x4120a9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4120c0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x411f6e
                    return 63;
                }
                // 0x411e90
                v5 = v39;
                if (v13 != 0) {
                    // 0x411f14
                    v35 = v13;
                    v34 = v25;
                  lab_0x411f20:;
                    int32_t * v49 = (int32_t *)a7; // 0x411f30
                    uint32_t v50 = *v49; // 0x411f30
                    int64_t v51 = v50; // 0x411f30
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x411f3a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x411f43
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x41216f
                                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x41211a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x411f6e
                            return 63;
                        }
                        // 0x411fb8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4122cf
                                    __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4121cd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4121e0
                                // 0x411f6e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4120de
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4120f2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x411f5b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x411f5e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x411f62
                    int64_t result = v59; // 0x411f68
                    if (v58 != 0) {
                        // 0x411f6a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x411f6e
                    return result;
                }
            } else {
                // 0x411d6e
                v5 = v32;
            }
            // break -> 0x411e95
            break;
        }
    }
    // 0x411e95
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x411ead
        if (*(char *)(v60 + 1) != 45) {
            // 0x411eb7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x411f6e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x411ff9
        __fprintf_chk(g47, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x411ee6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x411ef6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x411e60:
    // 0x411e60
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x411e60
    int64_t v63 = *(int64_t *)v62; // 0x411e64
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x411e71
        goto lab_0x411e71;
    }
    goto lab_0x411e06;
  lab_0x411e2a:
    // 0x411e2a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x411d00
    int32_t v65; // 0x411d00
    int32_t v66; // 0x411d00
    if (v27 != 0) {
        goto lab_0x411e60;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x411fe0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x411e60;
            } else {
                goto lab_0x411e51;
            }
        } else {
            // 0x411e45
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x41213c
                int64_t v67 = (int64_t)mem; // 0x41213c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x411e60;
                } else {
                    // 0x41214f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x411e51;
                }
            } else {
                goto lab_0x411e51;
            }
        }
    }
  lab_0x411e51:
    // 0x411e51
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x411e60;
}
// Address range: 0x412320 - 0x4128e6
int64_t function_412320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x412341
    if (v3 < 1) {
        // 0x4124fe
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x41233d
    int32_t v5 = *(int32_t *)a7; // 0x412349
    uint64_t v6 = a1 & 0xffffffff; // 0x41234b
    int64_t v7 = v2; // 0x412350
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x412353
    *v8 = 0;
    int64_t v9; // 0x412320
    int64_t v10; // 0x412320
    int64_t v11; // 0x412320
    int64_t v12; // 0x412320
    int64_t str; // 0x412320
    int64_t v13; // 0x412320
    int64_t v14; // 0x412320
    int64_t v15; // 0x412320
    int64_t v16; // 0x412320
    int64_t v17; // 0x412320
    int32_t v18; // 0x412320
    char v19; // 0x412320
    if (v5 == 0) {
        // 0x412538
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x41236a;
    } else {
        // 0x412363
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4123b0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4123b3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x412478;
            } else {
                int64_t v22 = v7 + 1; // 0x4123c6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4123d6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x41248c;
                } else {
                    goto lab_0x4123e8;
                }
            }
        } else {
            goto lab_0x41236a;
        }
    }
  lab_0x41236a:
    // 0x41236a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x412370
    *v24 = 0;
    int64_t v25; // 0x412320
    int64_t v26; // 0x412320
    int64_t v27; // 0x412320
    switch (*(char *)&v2) {
        case 45: {
            // 0x412460
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x41246d;
        }
        case 43: {
            // 0x412770
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x41246d;
        }
        default: {
            // 0x41238c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4126ef
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x412808
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x41246d;
                } else {
                    // 0x4126fd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x41239a;
                }
            } else {
                goto lab_0x41239a;
            }
        }
    }
  lab_0x412478:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x41247f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4123e8;
    } else {
        goto lab_0x41248c;
    }
  lab_0x41239a:
    // 0x41239a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x41246d;
  lab_0x41246d:
    // 0x41246d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x412478;
  lab_0x4123e8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4123e8
    int64_t v31 = v30; // 0x4123e8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4123ea
    if ((int64_t)*v32 > v31) {
        // 0x4123ef
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4123f2
    if (*v33 > v30) {
        // 0x4123f7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4123fa
    int64_t v35 = v31; // 0x4123fe
    int64_t v36 = v15; // 0x4123fe
    int64_t v37; // 0x412320
    int64_t v38; // 0x412320
    int64_t v39; // 0x412320
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x412568
        int64_t v41 = v40; // 0x412568
        v2 = v41;
        int64_t v42; // 0x412320
        if (*v33 == v40) {
            // 0x412750
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x412758
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x412574
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x412578
                function_411c20(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x412588
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x412591
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x41259a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4125b1
            int64_t v47 = v45 & 0xffffffff; // 0x4125b5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4125be
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4125c4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4125c6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4125a0
            int64_t v49 = v48 & 0xffffffff; // 0x4125a0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4125b1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4125be
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4125c4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4125c6;
                    }
                }
                // 0x4125a0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x412768
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4125c6;
    } else {
        goto lab_0x412404;
    }
  lab_0x41248c:
    // 0x41248c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x41248f
    int64_t v51 = v12; // 0x41248f
    int64_t v52 = v14; // 0x41248f
    if (*(char *)v10 == 0) {
        goto lab_0x4123e8;
    } else {
        goto lab_0x412495;
    }
  lab_0x412404:;
    int32_t v53 = v35; // 0x412404
    int64_t v54; // 0x412320
    int64_t v55; // 0x412320
    int64_t v56; // 0x412320
    int64_t v57; // 0x412320
    int64_t v58; // 0x412320
    int64_t v59; // 0x412320
    char * v60; // 0x412320
    int64_t v61; // 0x412320
    int64_t v62; // 0x412419
    int64_t v63; // 0x412320
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x412553
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x412556;
    } else {
        // 0x41240c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x412320
        int64_t v66 = v65 ? -1 : 1; // 0x412420
        int64_t v67 = (int64_t)"--"; // 0x412320
        int64_t v68 = v62; // 0x412320
        int64_t v69 = 3; // 0x412420
        unsigned char v70 = *(char *)v68; // 0x412420
        char v71 = *(char *)v67; // 0x412420
        char v72 = v71; // 0x412420
        bool v73 = false; // 0x412420
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
            // 0x412510
            if (*(char *)v62 == 45) {
                // 0x4125d0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4125d0
                if (c == 0) {
                    goto lab_0x41251a;
                } else {
                    // 0x4125dd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x412660;
                    } else {
                        if (c == 45) {
                            // 0x412843
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4126b5;
                        } else {
                            // 0x4125ee
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x412660;
                            } else {
                                // 0x4125f3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x412614;
                                } else {
                                    // 0x4125fa
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x412660;
                                    } else {
                                        goto lab_0x412614;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x41251a;
            }
        } else {
            uint32_t v75 = *v33; // 0x412430
            v2 = v75;
            int32_t v76 = *v32; // 0x412433
            int64_t v77 = v35 + 1; // 0x412436
            int32_t v78 = v77; // 0x412439
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4127a0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x412447
                    function_411c20(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x412455
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x412556;
        }
    }
  lab_0x412495:;
    // 0x412495
    int64_t v79; // bp-104, 0x412320
    int64_t v80 = &v79; // 0x41232a
    int64_t v81 = v50 + 1; // 0x412495
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x41249c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4124a1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4124a5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4124a9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4124b1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4124b6
    int32_t c2 = v84; // 0x4124b6
    char * found_char_pos = strchr(str2, c2); // 0x4124b6
    int64_t v87 = *v82; // 0x4124bb
    v2 = v87;
    int64_t v88 = *v85; // 0x4124c5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4124d0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4127c0
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x41278d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4124fe
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4124b6
    char v91 = *(char *)(v90 + 1); // 0x4124eb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4124a5
        if (v91 != 58) {
            // 0x4124fe
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x412714
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x412818
                *v8 = 0;
            } else {
                // 0x4127fc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x41273e
            *v83 = 0;
            // 0x4124fe
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x41271e
        if (v93 != 0) {
            // 0x4127b0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x41273e
            *v83 = 0;
            // 0x4124fe
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x412731
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x41273e
            *v83 = 0;
            // 0x4124fe
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x41287a
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x41282a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x412831
        // 0x41273e
        *v83 = 0;
        // 0x4124fe
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x412689
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x41268b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4128b0
                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x412861
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x412868
            // 0x4124fe
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x412696
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x41269a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4126b5;
  lab_0x4125c6:
    // 0x4125c6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x412404;
  lab_0x4126b5:;
    int64_t v99 = function_411d00(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4126d3
    // 0x4124fe
    return v99 & 0xffffffff;
  lab_0x412556:;
    int32_t v100 = v55; // 0x412556
    if (v100 != (int32_t)v59) {
        // 0x41255a
        *(int32_t *)a7 = v100;
    }
    // 0x4124fe
    return 0xffffffff;
  lab_0x41251a:
    // 0x41251a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x412521
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4124fe
    return v99 & 0xffffffff;
  lab_0x412660:
    // 0x412660
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x412495;
  lab_0x412614:
    // 0x412614
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_411d00(v6, a2, str, a4, a5, v57, v1, v11, &g16); // 0x41263a
    if ((int32_t)v101 != -1) {
        // 0x4124fe
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x41264f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x412660;
}
// Address range: 0x4128f0 - 0x412946
int64_t function_4128f0(int64_t a1) {
    // 0x4128f0
    *(int32_t *)&g81 = g41;
    *(int32_t *)&g82 = g40;
    int64_t v1; // 0x4128f0
    int64_t result = function_412320(v1, v1, v1, v1, v1, v1, &g81, a1 & 0xffffffff); // 0x412916
    g41 = *(int32_t *)&g81;
    g86 = (char *)g84;
    *(int32_t *)&g39 = g83;
    return result;
}
// Address range: 0x412950 - 0x412968
int64_t function_412950(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412950
    return function_4128f0(1);
}
// Address range: 0x412970 - 0x412983
int64_t function_412970(int64_t a1, int64_t a2, char * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x412970
    return function_4128f0(0);
}
// Address range: 0x412990 - 0x4129a5
int64_t function_412990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412990
    return function_412320(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4129b0 - 0x4129c6
int64_t function_4129b0(void) {
    // 0x4129b0
    return function_4128f0(0);
}
// Address range: 0x4129d0 - 0x4129e8
int64_t function_4129d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4129d0
    return function_412320(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4129f0 - 0x412a6a
int64_t function_4129f0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4129fb
    int64_t v2 = (int64_t)&g17; // 0x4129fb
    int32_t * pwc; // 0x4129f0
    int64_t v3; // 0x4129f0
    int64_t n; // 0x4129f0
    if (a2 == 0) {
        goto lab_0x412a42;
    } else {
        // 0x4129fd
        if (a3 == 0) {
            // 0x412a28
            return -2;
        }
        // 0x412a09
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x412a42;
        } else {
            goto lab_0x412a14;
        }
    }
  lab_0x412a42:
    // 0x412a42
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4129f0
    pwc = (int32_t *)&v4;
    goto lab_0x412a14;
  lab_0x412a14:;
    char * wstr = (char *)v3; // 0x412a1a
    int64_t ps; // 0x4129f0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x412a1a
    int64_t result = v5; // 0x412a1a
    if (v5 < 0xfffffffe) {
        // 0x412a28
        return result;
    }
    int64_t result2 = result; // 0x412a59
    if ((char)function_412fc0(0, v3) == 0) {
        // 0x412a5b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x412a28
    return result2;
}
// Address range: 0x412a70 - 0x412b2d
int64_t function_412a70(int64_t stream, int64_t a2, int64_t * a3) {
    int32_t v1 = 2000; // bp-2048, 0x412a90
    int64_t v2; // bp-2040, 0x412a70
    int64_t v3; // 0x412a70
    int64_t v4 = function_414470(&v2, (int64_t *)&v1, a2, (int64_t)a3, v3, v3, 2000, (int64_t)&g90); // 0x412a9c
    if (v4 == 0) {
        // 0x412b1e
        function_414460(stream);
        // 0x412adc
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x412aa1
    int64_t * data = (int64_t *)v4; // 0x412abc
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x412af0
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x412afa
            free(data);
        }
        // 0x412adc
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x412acb
        free(data);
    }
    // 0x412ad3
    if (nmemb > -1) {
        // 0x412adc
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x412b13
    *__errno_location() = 75;
    // 0x412b1e
    function_414460(stream);
    // 0x412adc
    return 0xffffffff;
}
// Address range: 0x412b30 - 0x412b35
int64_t function_412b30(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    // 0x412b30
    *(int32_t *)a4 = (int32_t)a3;
    return 0;
}
// Address range: 0x412b40 - 0x412b55
int64_t function_412b40(int64_t path, int64_t a2, int32_t mode) {
    int32_t fd = a2; // 0x412b44
    if (fd == -1) {
        // 0x412b50
        return chmod((char *)path, mode);
    }
    // 0x412b49
    return fchmod(fd, mode);
}
// Address range: 0x412b60 - 0x412b82
int64_t function_412b60(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x412b60
    int64_t v1; // 0x412b60
    int64_t result = (int32_t)function_412b40(a2, a3 & 0xffffffff, (int32_t)v1) != 0 ? 0xffffffff : 0; // 0x412b7f
    return result;
}
// Address range: 0x412b90 - 0x412b9a
int64_t function_412b90(void) {
    // 0x412b90
    return function_4046f0(1);
}
// Address range: 0x412ba0 - 0x412cb6
int64_t function_412ba0(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x412bc1
    int32_t len = strlen(str); // 0x412bc1
    if (a2 == 0) {
        // 0x412c8d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x412c27
    int64_t v4 = a3; // 0x412ba0
    int64_t v5 = a2; // 0x412c2e
    int64_t str4; // 0x412ba0
    int64_t v6; // 0x412ba0
    int32_t v7; // 0x412ba0
    int32_t v8; // 0x412ba0
    int32_t v9; // 0x412ba0
    int64_t v10; // 0x412ba0
    int64_t result; // 0x412ba0
    int32_t v11; // 0x412c23
    char * str2; // 0x412c42
    while (true) {
        // 0x412c37
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x412c4b
            result = v6;
            if (len == strlen(str2)) {
                // 0x412c8d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x412c5f
                break;
            }
            // 0x412bf0
            v7 = 1;
            if (a3 != 0) {
                // 0x412bfe
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x412c27
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
    int64_t v12 = v6 + 1; // 0x412c63
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x412c6a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x412c37
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x412c37
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x412c4b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x412c8d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x412c5f
                    break;
                }
                // 0x412bf0
                v7 = 1;
                if (a3 != 0) {
                    // 0x412bfe
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x412c27
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
        // 0x412c5f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x412c78:
    // 0x412c8d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x412cc0 - 0x412d31
int64_t function_412cc0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x412cc0
    if (a3 == -1) {
        // 0x412d20
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x412cd5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x412ce4
    function_40ec30(1, a1);
    function_40e920(0, 8, a2);
    error(0, 0, format);
    return &g90;
}
// Address range: 0x412d40 - 0x412e58
int64_t function_412d40(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x412d6d
    fputs_unlocked(v1, g47);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x412de0
        int64_t v5; // 0x412de7
        int64_t v6; // 0x412e07
        while (v3 != 0) {
            // 0x412dcb
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x412d90
                break;
            }
            // 0x412ddd
            v4 = v3 + 1;
            v5 = function_40ec50(v2);
            __fprintf_chk(g47, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x412e10
                goto lab_0x412e10;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x412d93
        int64_t v8 = function_40ec50(v2); // 0x412d9d
        __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x412dbd
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x412dcb
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x412d90
                    break;
                }
                // 0x412ddd
                v4 = v3 + 1;
                v5 = function_40ec50(v2);
                __fprintf_chk(g47, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x412e10
                    goto lab_0x412e10;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x412d90
            v7 = v3 + 1;
            v8 = function_40ec50(v2);
            __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x412e10:;
    int64_t v10 = (int64_t)g47; // 0x412e10
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x412e17
    uint64_t result = *v11; // 0x412e17
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x412e40
        return __overflow(g47, 10);
    }
    // 0x412e21
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x412e60 - 0x412ed0
int64_t function_412e60(int64_t a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_412ba0(a2, v2, v1, a5); // 0x412e8c
    int64_t result = v3; // 0x412e94
    if (v3 < 0) {
        // 0x412ea8
        function_412cc0(a1, a2, v3);
        function_412d40(v2, v1, a5);
        result = -1;
    }
    // 0x412e96
    return result;
}
// Address range: 0x412ed0 - 0x412f1d
int64_t function_412ed0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x412ed0
    if (result == 0) {
        // 0x412f11
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x412f08
    int32_t n = a4; // 0x412f08
    int64_t v1 = result; // 0x412f0f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x412f11
        return result;
    }
    int64_t str3 = str2; // 0x412f0f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x412ef0
    int64_t result2 = 0; // 0x412efd
    while (v2 != 0) {
        // 0x412eff
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x412f11
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x412f11
    return result2;
}
// Address range: 0x412f20 - 0x412f7d
int64_t function_412f20(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x412f27
    int64_t v2; // 0x412f20
    int64_t result = function_4143e0(a1, v2); // 0x412f38
    if ((v2 & 32) != 0) {
        // 0x412f60
        if ((int32_t)result == 0) {
            // 0x412f64
            *__errno_location() = 0;
        }
        // 0x412f5a
        return 0xffffffff;
    }
    // 0x412f41
    if ((int32_t)result == 0) {
        // 0x412f5a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x412f48
    if (v1 == 0) {
        // 0x412f4a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x412f5a
    return result2;
}
// Address range: 0x412f80 - 0x412fba
int64_t function_412f80(int64_t tp) {
    int64_t result = 0; // 0x412f94
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x412f96
        int64_t tp2; // bp-24, 0x412f80
        gettimeofday((struct timeval *)&tp2, NULL);
        *(int64_t *)tp = tp2;
        int128_t v1; // 0x412f80
        result = 1000 * (int64_t)v1;
        *(int64_t *)(tp + 8) = result;
    }
    // 0x412fb4
    return result;
}
// Address range: 0x412fc0 - 0x41301e
int64_t function_412fc0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x412fc6
    if (locale == NULL) {
        // 0x412ff3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x412fc6
    bool v2; // 0x412fc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g18; // 0x412fc0
    int64_t v5 = v1; // 0x412fc0
    int64_t v6 = 2; // 0x412fe5
    unsigned char v7 = *(char *)v5; // 0x412fe5
    char v8 = *(char *)v4; // 0x412fe5
    char v9 = v8; // 0x412fe5
    bool v10 = false; // 0x412fe5
    while (v7 == v8) {
        // 0x412fd8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x412ff1
    int64_t v13 = v1; // 0x412ff1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x412ff3
        return 0;
    }
    int64_t v14 = 6; // 0x412ff1
    unsigned char v15 = *(char *)v13; // 0x41300d
    char v16 = *(char *)v12; // 0x41300d
    char v17 = v16; // 0x41300d
    bool v18 = false; // 0x41300d
    while (v15 == v16) {
        // 0x413000
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
// Address range: 0x413020 - 0x413056
int64_t function_413020(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x413026
    if (v1 == 0) {
        // 0x413050
        return 0;
    }
    uint64_t v3 = 0;
    v2++;
    int64_t v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v1; // 0x413038
    char v5 = *(char *)v2; // 0x41303b
    while (v5 != 0) {
        // 0x413030
        v3 = v4;
        v2++;
        v4 = (v3 / 0x80000000000000 | 512 * v3) + (int64_t)v5;
        v5 = *(char *)v2;
    }
    // 0x413043
    return v4 % a2;
}
// Address range: 0x413060 - 0x4135c2
int64_t function_413060(void) {
    char * v1 = nl_langinfo(14); // 0x413076
    char * v2 = g85; // 0x41307b
    char * v3; // 0x413060
    int64_t v4; // 0x413060
    int64_t v5; // 0x413060
    int64_t v6; // 0x413060
    int64_t v7; // 0x413060
    int32_t size; // 0x413060
    int32_t size2; // 0x413060
    int32_t len; // 0x413132
    int64_t v8; // 0x413132
    char * env_val; // 0x41311d
    if (v2 == NULL) {
        // 0x413118
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x413185;
        } else {
            // 0x41312a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x413185;
            } else {
                // 0x41312f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x41311d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4135b5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x413185;
                    } else {
                        // 0x413529
                        size2 = len + 14;
                        goto lab_0x41314b;
                    }
                } else {
                    goto lab_0x41314b;
                }
            }
        }
    } else {
        // 0x413060
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x41309a;
    }
  lab_0x4133cc:;
    // 0x4133cc
    struct _IO_FILE * stream; // 0x41320b
    int32_t v10 = __uflow(stream); // 0x4133cf
    int64_t v11; // 0x413060
    int64_t v12 = v11; // 0x4133d9
    int64_t v13; // 0x413060
    int64_t v14 = v13; // 0x4133d9
    int32_t v15 = v10; // 0x4133d9
    int64_t v16; // 0x413060
    int64_t v17 = v16; // 0x4133d9
    int64_t v18 = v11; // 0x4133d9
    int64_t v19 = v13; // 0x4133d9
    int64_t v20 = v16; // 0x4133d9
    if (v10 == -1) {
        // break -> 0x4133df
        goto lab_0x4133df;
    }
    goto lab_0x413259;
  lab_0x41324e:;
    // 0x41324e
    int64_t v90; // 0x413060
    int64_t * v32; // 0x413240
    *v32 = v90 + 1;
    int64_t v89; // 0x413060
    v12 = v89;
    int64_t v91; // 0x413060
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x413060
    v17 = v92;
    goto lab_0x413259;
  lab_0x413259:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x413060
    int32_t v25; // bp-120, 0x413060
    int32_t v26; // bp-184, 0x413060
    int64_t v27; // 0x41320b
    int64_t v28; // 0x413228
    int64_t v29; // 0x41322d
    int64_t * v30; // 0x413244
    switch (c) {
        case 32: {
            goto lab_0x413240;
        }
        case 10: {
            goto lab_0x413240;
        }
        case 9: {
            goto lab_0x413240;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x413431
            int32_t v33; // 0x413060
            char v34; // 0x413060
            int32_t v35; // 0x41343e
            if (v31 < *v30) {
                // 0x413410
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x41343b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x413431
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x413410
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x41343b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x413420
                v36 = v33;
            }
            // 0x41350f
            if (v36 == -1) {
                // break -> 0x4133df
                break;
            }
            goto lab_0x413240;
        }
        default: {
            // 0x41326f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4133df
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x413298
            int64_t v39 = v37 + 4; // 0x41329a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4132a6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4132a8
            while (v41 == 0) {
                // 0x413298
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4132c6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4132d2
            int64_t v45 = v43 + 4; // 0x4132d4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4132e0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4132e2
            while (v47 == 0) {
                // 0x4132d2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4132cf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4132f8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x413308
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x41330c
            int64_t v52 = v51 + v48; // 0x413315
            int64_t * mem; // 0x413060
            int64_t v53; // 0x413060
            int64_t v54; // 0x413060
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x41344b
                int64_t v56 = v55 + 3; // 0x413457
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x413331
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x413340
            if (mem == NULL) {
                // 0x41356c
                free((int64_t *)v21);
                function_4143e0(v27, v53);
                v24 = (int64_t)&g17;
                goto lab_0x4131e4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x413358
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x413362
            uint32_t v62 = (int32_t)v59; // 0x413365
            int64_t v63; // 0x413060
            if (v62 >= 8) {
                // 0x413474
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x41348e
                int64_t v66 = v61 - v65; // 0x413492
                uint32_t v67 = (int32_t)(v66 + v59); // 0x41349d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x4134ae
                    int64_t v70 = v69 & 0xffffffff; // 0x4134ae
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x4134ab
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x41353f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x413377
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x41337b
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
            int64_t v73 = v51 + 1; // 0x41338b
            int64_t v74 = v60 - 1; // 0x41338f
            uint32_t v75 = (int32_t)v73; // 0x413394
            int64_t v76; // 0x413060
            if (v75 >= 8) {
                // 0x4134c2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4134cc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4134dc
                int64_t v80 = v74 - v79; // 0x4134e0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4134eb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4134fb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4134f9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x413556
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x41355e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4133a6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4133aa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x4135a3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4133be
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x41324e;
            } else {
                goto lab_0x4133cc;
            }
        }
    }
  lab_0x413240:;
    int64_t v93 = v23; // 0x413060
    int64_t v94 = v22; // 0x413060
    int64_t v95 = v21; // 0x413060
    goto lab_0x413240_2;
  lab_0x413185:;
    int64_t * mem3 = malloc(size); // 0x413185
    int64_t v97 = (int64_t)&g17; // 0x413190
    int64_t v98; // 0x413060
    int64_t path; // 0x413060
    if (mem3 == NULL) {
        goto lab_0x413162;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x413185
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4131a6;
    }
  lab_0x41309a:;
    int64_t str = v1 == NULL ? (int64_t)&g17 : (int64_t)v1; // 0x41308d
    char v100 = *v3; // 0x41309a
    int64_t v101; // 0x413060
    if (v100 == 0) {
        // 0x4130f4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x413060
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x413060
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4130e0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4130e7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4130b0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4130bd
        char v107 = *(char *)v106; // 0x4130c2
        v102 = v107;
        if (v107 == 0) {
            // 0x4130f4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4130cb
    v104 = v103 + 1;
  lab_0x4130e7:
    // 0x4130f4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x413162:;
    char * v108 = (char *)v97;
    g85 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x41309a;
  lab_0x4131a6:;
    int64_t v109 = v98 + path; // 0x4131a6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4131d2
    v24 = (int64_t)&g17;
    if (fd >= 0) {
        // 0x413201
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x413532
            close(fd);
            v24 = (int64_t)&g17;
        } else {
            // 0x413225
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x413240_2:;
                uint64_t v96 = *v32; // 0x413240
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4133cc;
                } else {
                    goto lab_0x41324e;
                }
            }
          lab_0x4133df:
            // 0x4133df
            function_4143e0(v27, v19);
            v24 = (int64_t)&g17;
            if (v18 != 0) {
                // 0x4133fe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4131e4;
  lab_0x41314b:;
    int64_t * mem4 = malloc(size2); // 0x41314b
    v97 = (int64_t)&g17;
    if (mem4 != NULL) {
        // 0x4131f1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4131a6;
    } else {
        goto lab_0x413162;
    }
  lab_0x4131e4:
    // 0x4131e4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x413162;
}
// Address range: 0x4135d0 - 0x4137c9
int64_t function_4135d0(int64_t a1, int64_t path, int32_t a3, int32_t owner, int32_t group, int64_t a6, int64_t a7) {
    int32_t fd = a1; // 0x4135f9
    int32_t v1; // 0x4135d0
    int32_t * v2; // 0x4135d0
    int64_t v3; // 0x4135d0
    int32_t v4; // 0x4135d0
    int64_t v5; // bp-200, 0x4135d0
    int32_t v6; // 0x4135d0
    if (fd < 0) {
        uint32_t v7 = __xstat(1, (char *)path, (struct stat *)&v5); // 0x41368d
        if (v7 != 0) {
            // 0x41369c
            return (int64_t)v7 & 0xffffffff;
        }
        if ((v6 & 0xf000) != 0x4000) {
            // 0x4137b6
            *__errno_location() = 20;
            // 0x41369c
            return 0xffffffff;
        }
        goto lab_0x41362d;
    } else {
        int32_t v8 = __fxstat(1, fd, (struct stat *)&v5); // 0x413608
        v4 = v8;
        if (v8 != 0) {
            goto lab_0x413750;
        } else {
            if ((v6 & 0xf000) != 0x4000) {
                int32_t * v9 = __errno_location(); // 0x4136b0
                *v9 = 20;
                v3 = 0xffffffff;
                v2 = v9;
                v1 = 20;
                goto lab_0x4136c9;
            } else {
                goto lab_0x41362d;
            }
        }
    }
  lab_0x41362d:;
    int64_t v10 = v6;
    int64_t v11; // 0x4135d0
    if (owner == -1 || v6 == owner) {
        // 0x4136e0
        v11 = 0;
        if (group != -1 == (v6 != group)) {
            goto lab_0x413642;
        } else {
            goto lab_0x4136f3;
        }
    } else {
        goto lab_0x413642;
    }
  lab_0x413750:;
    int32_t * v12 = __errno_location(); // 0x413750
    v3 = v4;
    v2 = v12;
    v1 = *v12;
    goto lab_0x4136c9;
  lab_0x413642:
    if (fd >= 0) {
        int32_t v15 = fchown(fd, owner, group); // 0x41373d
        v4 = v15;
        if (v15 == 0) {
            // 0x413672
            v11 = (v10 & 73) == 0 ? 0 : v10 & 3072;
            goto lab_0x4136f3;
        } else {
            goto lab_0x413750;
        }
    } else {
        char * path2 = (char *)path;
        int32_t v16; // 0x4135d0
        if (a3 == -1) {
            // 0x413780
            v16 = chown(path2, owner, group);
        } else {
            // 0x413663
            v16 = lchown(path2, owner, group);
        }
        // 0x41366e
        if (v16 != 0) {
            // 0x41369c
            return (int64_t)v16 & 0xffffffff;
        }
        // 0x413672
        v11 = (v10 & 73) == 0 ? 0 : v10 & 3072;
        goto lab_0x4136f3;
    }
  lab_0x4136c9:
    // 0x4136c9
    close(fd);
    *v2 = v1;
    // 0x41369c
    return v3 & 0xffffffff;
  lab_0x4136f3:;
    uint64_t v13 = 0x100000000 * a7 >> 32;
    if ((int32_t)((v11 | v10 ^ a6) & v13) == 0) {
        // 0x413760
        if (fd < 0) {
            // 0x41369c
            return 0;
        }
        // 0x41369c
        return (int64_t)close(fd) & 0xffffffff;
    }
    int64_t mode = (v13 % 0x1000 ^ 4095) & v10 | a6 & 0xffffffff; // 0x413714
    if (fd < 0) {
        // 0x41369c
        return (int64_t)chmod((char *)path, (int32_t)mode) & 0xffffffff;
    }
    int32_t v14 = fchmod(fd, (int32_t)mode); // 0x413793
    v4 = v14;
    if (v14 == 0) {
        // 0x41369c
        return (int64_t)close(fd) & 0xffffffff;
    }
    goto lab_0x413750;
}
// Address range: 0x4137d0 - 0x4137f3
int64_t function_4137d0(int64_t a1) {
    int64_t result = function_4112e0(24); // 0x4137d9
    *(int64_t *)result = a1;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}
// Address range: 0x413800 - 0x41382f
int64_t function_413800(void) {
    // 0x413800
    int64_t v1; // 0x413800
    int64_t v2 = function_413a20(v1, v1, v1); // 0x413801
    int64_t result = 0; // 0x41380e
    if (v2 != 0) {
        // 0x413810
        result = function_4112e0(24);
        *(int64_t *)result = v2;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x41382d
    return result;
}
// Address range: 0x413830 - 0x413834
int64_t function_413830(int64_t result) {
    // 0x413830
    return result;
}
// Address range: 0x413840 - 0x413935
int64_t function_413840(int64_t a1, uint64_t a2) {
    uint64_t v1 = a2 + 1; // 0x413847
    int64_t * v2 = (int64_t *)(a1 + 8); // 0x41385b
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x41385f
    int64_t v4 = *v3; // 0x413863
    int64_t result = *v2; // 0x413863
    int64_t v5; // 0x413840
    while (true) {
        int64_t v6 = result;
        int64_t v7 = v4;
        int64_t v8 = v7; // 0x4138a0
        int64_t v9; // 0x413840
        int64_t v10; // 0x413840
        if (v7 >= a2) {
            // 0x413868
            v10 = v7;
            v9 = v6;
            v5 = v6;
            if (v7 == a2) {
                // break -> 0x4138ff
                break;
            }
        } else {
            int64_t v11 = 1; // 0x4138b4
            int64_t v12 = 256 * v8 | 255; // 0x4138b8
            v8 = v12;
            int64_t v13 = v11; // 0x4138c1
            while (v12 < a2) {
                // 0x4138b0
                v11 = v13 + 1;
                v12 = 256 * v8 | 255;
                v8 = v12;
                v13 = v11;
            }
            // 0x4138c3
            int64_t v14; // bp-64, 0x413840
            function_413d30(a1, &v14, v11);
            int64_t v15 = &v14; // 0x4138d5
            int64_t v16 = 256 * v7 | 255; // 0x4138e7
            int64_t v17 = 256 * v6 | (int64_t)*(char *)v15; // 0x4138ee
            v15++;
            int64_t v18 = v16; // 0x4138f4
            int64_t v19 = v17; // 0x4138f4
            while (v16 < a2) {
                // 0x4138d8
                v16 = 256 * v18 | 255;
                v17 = 256 * v19 | (int64_t)*(char *)v15;
                v15++;
                v18 = v16;
                v19 = v17;
            }
            // 0x4138f6
            v10 = v16;
            v9 = v17;
            v5 = v17;
            if (v16 == a2) {
                // break -> 0x4138ff
                break;
            }
        }
        uint64_t v20 = v9;
        uint64_t v21 = v10 - a2; // 0x413876
        uint64_t v22 = v21 % v1;
        result = v20 % v1;
        v4 = v22 - 1;
        if (v20 <= v10 - v22) {
            // 0x413928
            *v2 = v20 / v1;
            *v3 = v21 / v1;
            return result;
        }
    }
    // 0x4138ff
    *v3 = 0;
    *v2 = 0;
    result = v5;
  lab_0x41390f:
    // 0x41390f
    return result;
}
// Address range: 0x413940 - 0x41395e
int64_t function_413940(int64_t a1) {
    // 0x413940
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return &g90;
}
// Address range: 0x413960 - 0x4139b1
int64_t function_413960(int64_t a1) {
    int64_t v1 = function_413e90(a1); // 0x413970
    int32_t * v2 = __errno_location(); // 0x413978
    __explicit_bzero_chk(a1, 24, -1);
    free((int64_t *)a1);
    return v1 & 0xffffffff;
}
// Address range: 0x4139c0 - 0x413a1d
int64_t function_4139c0(int64_t a1) {
    // 0x4139c0
    function_40ec50(a1);
    int32_t * err_num = __errno_location(); // 0x4139d7
    char * format; // 0x4139c0
    if (*err_num == 0) {
        // 0x413a0f
        format = dcgettext(NULL, "%s: end of file", 5);
    } else {
        // 0x4139e9
        format = dcgettext(NULL, "%s: read error", 5);
    }
    // 0x4139f5
    error(g33, *err_num, format);
    return &g90;
}
// Address range: 0x413a20 - 0x413d0f
int64_t function_413a20(int64_t a1, uint64_t a2, int64_t a3) {
    if (a2 == 0) {
        int64_t result = function_4112e0(0x1038); // 0x413b3d
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0x4139c0;
        *(int64_t *)(result + 16) = 0;
        // 0x413a92
        return result;
    }
    if (a1 != 0) {
        int64_t stream = function_415f90(a1, "rb"); // 0x413a47
        int64_t result2 = 0; // 0x413a52
        if (stream != 0) {
            // 0x413a58
            result2 = function_4112e0(0x1038);
            *(int64_t *)result2 = stream;
            int64_t size = a2 < 0x1000 ? a2 : 0x1000; // 0x413a74
            *(int64_t *)(result2 + 8) = 0x4139c0;
            *(int64_t *)(result2 + 16) = a1;
            setvbuf((struct _IO_FILE *)stream, (char *)(result2 + 24), 0, (int32_t)size);
        }
        // 0x413a92
        return result2;
    }
    int64_t result3 = function_4112e0(0x1038); // 0x413aad
    *(int64_t *)result3 = 0;
    int64_t v1 = result3 + 32; // 0x413ac3
    *(int64_t *)(result3 + 8) = 0x4139c0;
    *(int64_t *)(result3 + 16) = 0;
    *(int64_t *)(result3 + 24) = 0;
    int32_t fd = open("/dev/urandom", O_RDONLY); // 0x413ae1
    int64_t v2; // 0x413a20
    int128_t pid2; // bp-72, 0x413a20
    if (fd < 0) {
        // 0x413b68
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_movups(*(int128_t *)v1, __asm_movdqa(0));
        int32_t pid = getpid(); // 0x413b87
        pid2 = pid;
        *(int32_t *)(result3 + 48) = pid;
        v2 = 20;
    } else {
        int32_t v3 = __read_chk(fd, (int64_t *)v1, (int32_t)(a2 < 2048 ? a2 : 2048), 0x1018); // 0x413b0b
        close(fd);
        if (v3 >= 2048) {
            // 0x413b28
            function_414190(v1);
            // 0x413a92
            return result3;
        }
        int64_t v4 = v3 > 0 ? v3 : 0;
        uint64_t v5 = 2048 - v4; // 0x413c96
        int64_t v6 = v5 < 16 ? v5 : 16; // 0x413ca2
        uint64_t v7 = v6 + v4; // 0x413ca8
        gettimeofday((struct timeval *)&pid2, NULL);
        __asm_rep_movsb_memcpy((char *)(v1 + v4), (char *)&pid2, v6);
        if (v7 > 2047) {
            // 0x413b28
            function_414190(v1);
            // 0x413a92
            return result3;
        }
        uint64_t v8 = 2048 - v7; // 0x413cd1
        int64_t v9 = v8 < 4 ? v8 : 4; // 0x413cdd
        pid2 = getpid();
        int64_t v10 = v9 + v7; // 0x413cf5
        __asm_rep_movsb_memcpy((char *)(v7 + v1), (char *)&pid2, v9);
        v2 = v10;
        if (v10 >= 2048) {
            // 0x413b28
            function_414190(v1);
            // 0x413a92
            return result3;
        }
    }
    int64_t v11 = &pid2;
    uint64_t v12 = 2048 - v2; // 0x413b9d
    int64_t v13 = v12 < 4 ? v12 : 4; // 0x413ba4
    pid2 = getppid();
    if (v13 != 0) {
        int64_t v14 = 0;
        int64_t v15 = v14 + 1; // 0x413bc0
        *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        while ((int32_t)v15 < (int32_t)v13) {
            // 0x413bbe
            v14 = v15 & 0xffffffff;
            v15 = v14 + 1;
            *(char *)(v2 + v1 + v14) = *(char *)(v14 + v11);
        }
    }
    uint64_t v16 = v13 + v2; // 0x413bcf
    if (v16 >= 2048) {
        // 0x413b28
        function_414190(v1);
        // 0x413a92
        return result3;
    }
    uint64_t v17 = 2048 - v16; // 0x413bea
    int64_t v18 = v17 < 4 ? v17 : 4; // 0x413bf1
    pid2 = getuid();
    if (v18 != 0) {
        int64_t v19 = 0;
        int64_t v20 = v19 + 1; // 0x413c0f
        *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        while ((int32_t)v20 < (int32_t)v18) {
            // 0x413c0d
            v19 = v20 & 0xffffffff;
            v20 = v19 + 1;
            *(char *)(v16 + v1 + v19) = *(char *)(v19 + v11);
        }
    }
    uint64_t v21 = v18 + v16; // 0x413c1e
    if (v21 >= 2048) {
        // 0x413b28
        function_414190(v1);
        // 0x413a92
        return result3;
    }
    // 0x413c2e
    pid2 = getgid();
    uint64_t v22 = 2048 - v21; // 0x413c46
    int64_t v23 = v22 < 4 ? v22 : 4; // 0x413c4d
    if (v23 == 0) {
        // 0x413b28
        function_414190(v1);
        // 0x413a92
        return result3;
    }
    int64_t v24 = 0;
    int64_t v25 = v24 + 1; // 0x413c5f
    *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    while ((int32_t)v25 < (int32_t)v23) {
        // 0x413c5d
        v24 = v25 & 0xffffffff;
        v25 = v24 + 1;
        *(char *)(v21 + v1 + v24) = *(char *)(v24 + v11);
    }
    // 0x413b28
    function_414190(v1);
    // 0x413a92
    return result3;
}
// Address range: 0x413d10 - 0x413d15
int64_t function_413d10(int64_t a1, int64_t a2) {
    // 0x413d10
    *(int64_t *)(a1 + 8) = a2;
    int64_t result; // 0x413d10
    return result;
}
// Address range: 0x413d20 - 0x413d25
int64_t function_413d20(int64_t a1, int64_t a2) {
    // 0x413d20
    *(int64_t *)(a1 + 16) = a2;
    int64_t result; // 0x413d20
    return result;
}
// Address range: 0x413d30 - 0x413e8c
int64_t function_413d30(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        int32_t * v2 = __errno_location(); // 0x413d4f
        int64_t result = fread_unlocked(a2, 1, (int32_t)a3, (struct _IO_FILE *)a1); // 0x413d8a
        int64_t v3 = a3 - result; // 0x413d95
        if (v3 == 0) {
            // 0x413d9a
            return result;
        }
        int64_t v4 = v3; // 0x413d95
        int64_t v5 = result + v1; // 0x413d92
        int64_t v6 = *(int64_t *)(a1 + 16); // 0x413d64
        *v2 = (v1 & 32) == 0 ? 0 : *v2;
        int64_t result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6); // 0x413d8a
        v4 -= result2;
        while (v4 != 0) {
            int64_t v7 = v5;
            v5 = result2 + v7;
            v6 = *(int64_t *)(a1 + 16);
            *v2 = (v7 & 32) == 0 ? 0 : *v2;
            result2 = fread_unlocked((int64_t *)v5, 1, (int32_t)v4, (struct _IO_FILE *)v6);
            v4 -= result2;
        }
        // 0x413d9a
        return result2;
    }
    int64_t v8 = *(int64_t *)24; // 0x413db0
    int64_t v9 = a3; // 0x413dc2
    int64_t * v10; // 0x413d30
    int64_t v11; // 0x413d30
    int64_t v12; // 0x413d30
    int64_t v13; // 0x413d30
    if (v8 < a3) {
        int64_t v14 = v8;
        int64_t v15 = v14 + v1; // 0x413dd3
        v9 -= v14;
        memcpy((int64_t *)v1, (int64_t *)(0x1038 - v14), (int32_t)v14);
        while (v15 % 8 != 0) {
            // 0x413dea
            function_413ee0(32, 2104);
            v13 = v9;
            v12 = v15;
            v10 = (int64_t *)2104;
            v11 = 2048;
            if (v9 < 2049) {
                goto lab_0x413e45;
            }
            v14 = 2048;
            int64_t v16 = v15;
            v15 = v14 + v16;
            v9 -= v14;
            memcpy((int64_t *)v16, (int64_t *)(0x1038 - v14), (int32_t)v14);
        }
        int64_t v17 = v15;
        int64_t v18 = v9;
        while (v18 >= 2048) {
            int64_t result3 = function_413ee0(32, v17); // 0x413e1d
            int64_t v19 = v18 - 2048; // 0x413e22
            if (v19 == 0) {
                // 0x413e68
                *(int64_t *)24 = 0;
                return result3;
            }
            v17 += 2048;
            v18 = v19;
        }
        // 0x413e34
        function_413ee0(32, 2104);
        v13 = v18;
        v12 = v17;
        v10 = (int64_t *)2104;
        v11 = 2048;
    } else {
        // 0x413e80
        v13 = a3;
        v12 = v1;
        v10 = (int64_t *)(0x1038 - v8);
        v11 = v8;
    }
  lab_0x413e45:;
    int64_t * dest_mem = memcpy((int64_t *)v12, v10, (int32_t)v13); // 0x413e4e
    *(int64_t *)24 = v11 - v13;
    // 0x413d9a
    return (int64_t)dest_mem;
}
// Address range: 0x413e90 - 0x413ed9
int64_t function_413e90(int64_t a1) {
    // 0x413e90
    __explicit_bzero_chk(a1, 0x1038, -1);
    free((int64_t *)a1);
    if (a1 == 0) {
        // 0x413ed0
        return 0;
    }
    // 0x413eba
    return function_4143e0(a1, 0x1038);
}
// Address range: 0x413ee0 - 0x414185
int64_t function_413ee0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 2064); // 0x413ee0
    int64_t * v2 = (int64_t *)(a1 + 2056); // 0x413ee7
    int64_t * v3 = (int64_t *)(a1 + 2048); // 0x413ef6
    int64_t v4 = *v1 + 1; // 0x413f00
    *v1 = v4;
    int64_t v5 = a2; // 0x413f11
    int64_t v6 = *v3;
    int64_t v7 = a1;
    int64_t * v8 = (int64_t *)v7; // 0x413f22
    int64_t v9 = *v8; // 0x413f22
    uint64_t v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6); // 0x413f28
    uint64_t v11 = v10 + *v2 + v4 + *(int64_t *)((v9 & 2040) + a1); // 0x413f43
    *v8 = v11;
    int64_t v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9; // 0x413f62
    *(int64_t *)v5 = v12;
    int64_t * v13 = (int64_t *)(v7 + 8); // 0x413f68
    int64_t v14 = *v13; // 0x413f68
    int64_t v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10); // 0x413f6c
    uint64_t v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1); // 0x413f90
    *v13 = v16;
    int64_t v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14; // 0x413fa5
    *(int64_t *)(v5 + 8) = v17;
    int64_t * v18 = (int64_t *)(v7 + 16); // 0x413fac
    int64_t v19 = *v18; // 0x413fac
    uint64_t v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15); // 0x413fb0
    uint64_t v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1); // 0x413fcb
    *v18 = v21;
    int64_t v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19; // 0x413fdd
    *(int64_t *)(v5 + 16) = v22;
    int64_t * v23 = (int64_t *)(v7 + 24); // 0x413fe8
    int64_t v24 = *v23; // 0x413fe8
    int64_t v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20); // 0x413ff9
    uint64_t v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1); // 0x414010
    int64_t v27 = v7 + 32; // 0x414013
    *v23 = v26;
    int64_t v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24; // 0x41402d
    *(int64_t *)(v5 + 24) = v28;
    v5 += 32;
    while (v7 != a1 + 992) {
        // 0x413f18
        v6 = v25;
        v7 = v27;
        v8 = (int64_t *)v7;
        v9 = *v8;
        v10 = *(int64_t *)(v7 + 1024) + (0x200000 * v6 ^ -1 - v6);
        v11 = v10 + v28 + *(int64_t *)((v9 & 2040) + a1);
        *v8 = v11;
        v12 = *(int64_t *)((v11 / 256 & 2040) + a1) + v9;
        *(int64_t *)v5 = v12;
        v13 = (int64_t *)(v7 + 8);
        v14 = *v13;
        v15 = *(int64_t *)(v7 + 1032) + (v10 / 32 ^ v10);
        v16 = v15 + v12 + *(int64_t *)((v14 & 2040) + a1);
        *v13 = v16;
        v17 = *(int64_t *)((v16 / 256 & 2040) + a1) + v14;
        *(int64_t *)(v5 + 8) = v17;
        v18 = (int64_t *)(v7 + 16);
        v19 = *v18;
        v20 = *(int64_t *)(v7 + 1040) + (0x1000 * v15 ^ v15);
        v21 = v20 + v17 + *(int64_t *)((v19 & 2040) + a1);
        *v18 = v21;
        v22 = *(int64_t *)((v21 / 256 & 2040) + a1) + v19;
        *(int64_t *)(v5 + 16) = v22;
        v23 = (int64_t *)(v7 + 24);
        v24 = *v23;
        v25 = *(int64_t *)(v7 + 1048) + (v20 / 0x200000000 ^ v20);
        v26 = v25 + v22 + *(int64_t *)((v24 & 2040) + a1);
        v27 = v7 + 32;
        *v23 = v26;
        v28 = *(int64_t *)((v26 / 256 & 2040) + a1) + v24;
        *(int64_t *)(v5 + 24) = v28;
        v5 += 32;
    }
    int64_t v29 = a2 + 1024; // 0x41404b
    int64_t v30 = v25;
    int64_t v31 = v27;
    int64_t * v32 = (int64_t *)v31; // 0x41405a
    int64_t v33 = *v32; // 0x41405a
    uint64_t v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30); // 0x414060
    uint64_t v35 = v34 + v28 + *(int64_t *)((v33 & 2040) + a1); // 0x414085
    *v32 = v35;
    int64_t v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33; // 0x414096
    *(int64_t *)v29 = v36;
    int64_t * v37 = (int64_t *)(v31 + 8); // 0x41409d
    int64_t v38 = *v37; // 0x41409d
    int64_t v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34); // 0x4140a4
    uint64_t v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1); // 0x4140c8
    *v37 = v40;
    int64_t v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38; // 0x4140dd
    *(int64_t *)(v29 + 8) = v41;
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x4140e4
    int64_t v43 = *v42; // 0x4140e4
    uint64_t v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39); // 0x4140e8
    uint64_t v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1); // 0x414103
    *v42 = v45;
    int64_t v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43; // 0x414115
    *(int64_t *)(v29 + 16) = v46;
    int64_t * v47 = (int64_t *)(v31 + 24); // 0x414120
    int64_t v48 = *v47; // 0x414120
    int64_t v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44); // 0x414131
    uint64_t v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1); // 0x414148
    int64_t result = v31 + 32; // 0x41414b
    *v47 = v50;
    int64_t v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48; // 0x414165
    *(int64_t *)(v29 + 24) = v51;
    v29 += 32;
    while (v31 != a1 + 2016) {
        // 0x414050
        v30 = v49;
        v31 = result;
        v32 = (int64_t *)v31;
        v33 = *v32;
        v34 = *(int64_t *)(v31 - 1024) + (0x200000 * v30 ^ -1 - v30);
        v35 = v34 + v51 + *(int64_t *)((v33 & 2040) + a1);
        *v32 = v35;
        v36 = *(int64_t *)((v35 / 256 & 2040) + a1) + v33;
        *(int64_t *)v29 = v36;
        v37 = (int64_t *)(v31 + 8);
        v38 = *v37;
        v39 = *(int64_t *)(v31 - 1016) + (v34 / 32 ^ v34);
        v40 = v39 + v36 + *(int64_t *)((v38 & 2040) + a1);
        *v37 = v40;
        v41 = *(int64_t *)((v40 / 256 & 2040) + a1) + v38;
        *(int64_t *)(v29 + 8) = v41;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v42;
        v44 = *(int64_t *)(v31 - 1008) + (0x1000 * v39 ^ v39);
        v45 = v44 + v41 + *(int64_t *)((v43 & 2040) + a1);
        *v42 = v45;
        v46 = *(int64_t *)((v45 / 256 & 2040) + a1) + v43;
        *(int64_t *)(v29 + 16) = v46;
        v47 = (int64_t *)(v31 + 24);
        v48 = *v47;
        v49 = *(int64_t *)(v31 - 1000) + (v44 / 0x200000000 ^ v44);
        v50 = v49 + v46 + *(int64_t *)((v48 & 2040) + a1);
        result = v31 + 32;
        *v47 = v50;
        v51 = *(int64_t *)((v50 / 256 & 2040) + a1) + v48;
        *(int64_t *)(v29 + 24) = v51;
        v29 += 32;
    }
    // 0x414175
    *v3 = v49;
    *v2 = v51;
    return result;
}
// Address range: 0x414190 - 0x4143c4
int64_t function_414190(int64_t a1) {
    int64_t v1 = a1 + 2048; // 0x4141d7
    int64_t v2 = a1; // 0x4141f3
    int64_t * v3 = (int64_t *)v2; // 0x4141f8
    int64_t * v4 = (int64_t *)(v2 + 32); // 0x4141fb
    int64_t v5 = *v4 - 0x7d0fac247caa1f32; // 0x4141fb
    int64_t * v6 = (int64_t *)(v2 + 56); // 0x4141ff
    uint64_t v7 = *v6 - 0x670a8fb093bb3f55; // 0x4141ff
    int64_t * v8 = (int64_t *)(v2 + 40); // 0x414203
    int64_t * v9 = (int64_t *)(v2 + 48); // 0x41420a
    int64_t v10 = *v3 - v5 + 0x647c4677a2884b7c; // 0x41420e
    int64_t v11 = *v8 + 0x48fe4a0fa5a09315 ^ v7 / 512; // 0x41421b
    int64_t * v12 = (int64_t *)(v2 + 8); // 0x41421e
    uint64_t v13 = *v12 - v11 - 0x46074cdd38c5379e; // 0x414225
    int64_t v14 = *v9 - 0x5167a40d34037613 ^ 512 * v10; // 0x414232
    int64_t * v15 = (int64_t *)(v2 + 16); // 0x414235
    int64_t v16 = *v15 - v14 - 0x73f15afac2b8ed60; // 0x41423c
    int64_t v17 = v13 / 0x800000 ^ v10 + v7; // 0x414249
    int64_t * v18 = (int64_t *)(v2 + 24); // 0x41424c
    uint64_t v19 = *v18 - v17 - 0x4d64d17db5a6aadc; // 0x414253
    int64_t v20 = 0x8000 * v16 ^ v13 + v10; // 0x414260
    int64_t v21 = v5 - v20; // 0x414266
    *v3 = v20;
    int64_t v22 = v19 / 0x4000 ^ v16 + v13; // 0x414270
    uint64_t v23 = v11 - v22; // 0x414279
    *v12 = v22;
    int64_t v24 = v19 + v16 ^ 0x100000 * v21; // 0x414284
    int64_t v25 = v14 - v24; // 0x41428e
    *v15 = v24;
    v2 += 64;
    int64_t v26 = v23 / 0x20000 ^ v19 + v21; // 0x41429d
    int64_t v27 = v23 + v25; // 0x4142a3
    int64_t v28 = v17 - v26; // 0x4142a6
    *v18 = v26;
    int64_t v29 = 0x4000 * v25 ^ v23 + v21; // 0x4142b1
    int64_t v30 = v28 + v25; // 0x4142b4
    *v8 = v27;
    *v4 = v29;
    *v9 = v30;
    *v6 = v28;
    int64_t v31 = a1; // 0x4142ca
    while (v1 != v2) {
        // 0x4141f8
        v3 = (int64_t *)v2;
        v4 = (int64_t *)(v2 + 32);
        v5 = *v4 + v29;
        v6 = (int64_t *)(v2 + 56);
        v7 = *v6 + v28;
        v8 = (int64_t *)(v2 + 40);
        v9 = (int64_t *)(v2 + 48);
        v10 = *v3 - v5 + v20;
        v11 = *v8 + v27 ^ v7 / 512;
        v12 = (int64_t *)(v2 + 8);
        v13 = *v12 - v11 + v22;
        v14 = *v9 + v30 ^ 512 * v10;
        v15 = (int64_t *)(v2 + 16);
        v16 = *v15 - v14 + v24;
        v17 = v13 / 0x800000 ^ v10 + v7;
        v18 = (int64_t *)(v2 + 24);
        v19 = *v18 - v17 + v26;
        v20 = 0x8000 * v16 ^ v13 + v10;
        v21 = v5 - v20;
        *v3 = v20;
        v22 = v19 / 0x4000 ^ v16 + v13;
        v23 = v11 - v22;
        *v12 = v22;
        v24 = v19 + v16 ^ 0x100000 * v21;
        v25 = v14 - v24;
        *v15 = v24;
        v2 += 64;
        v26 = v23 / 0x20000 ^ v19 + v21;
        v27 = v23 + v25;
        v28 = v17 - v26;
        *v18 = v26;
        v29 = 0x4000 * v25 ^ v23 + v21;
        v30 = v28 + v25;
        *v8 = v27;
        *v4 = v29;
        *v9 = v30;
        *v6 = v28;
        v31 = a1;
    }
    int64_t * v32 = (int64_t *)(v31 + 56); // 0x4142d0
    uint64_t v33 = *v32 + v28; // 0x4142d0
    int64_t * v34 = (int64_t *)(v31 + 32); // 0x4142d4
    int64_t v35 = *v34 + v29; // 0x4142d4
    int64_t * v36 = (int64_t *)v31; // 0x4142d8
    int64_t * v37 = (int64_t *)(v31 + 40); // 0x4142de
    int64_t v38 = *v36 + v20 - v35; // 0x4142e2
    int64_t * v39 = (int64_t *)(v31 + 8); // 0x4142e9
    int64_t * v40 = (int64_t *)(v31 + 48); // 0x4142ed
    int64_t v41 = *v37 + v27 ^ v33 / 512; // 0x4142f1
    int64_t * v42 = (int64_t *)(v31 + 16); // 0x4142f7
    uint64_t v43 = *v39 + v22 - v41; // 0x4142fe
    int64_t * v44 = (int64_t *)(v31 + 24); // 0x414305
    int64_t v45 = *v40 + v30 ^ 512 * v38; // 0x414309
    int64_t v46 = *v42 + v24 - v45; // 0x414312
    int64_t v47 = v43 / 0x800000 ^ v38 + v33; // 0x414319
    uint64_t v48 = *v44 + v26 - v47; // 0x414322
    int64_t v49 = 0x8000 * v46 ^ v43 + v38; // 0x414329
    int64_t v50 = v35 - v49; // 0x414332
    *v36 = v49;
    int64_t v51 = v48 / 0x4000 ^ v46 + v43; // 0x41433c
    uint64_t v52 = v41 - v51; // 0x414345
    *v39 = v51;
    int64_t v53 = 0x100000 * v50 ^ v48 + v46; // 0x414350
    int64_t result = v52 + v50; // 0x414353
    int64_t v54 = v45 - v53; // 0x41435a
    *v42 = v53;
    int64_t v55 = v31 + 64; // 0x414365
    int64_t v56 = v52 / 0x20000 ^ v50 + v48; // 0x414369
    int64_t v57 = v54 + v52; // 0x41436f
    int64_t v58 = v47 - v56; // 0x414372
    *v44 = v56;
    int64_t v59 = 0x4000 * v54 ^ result; // 0x41437d
    int64_t v60 = v58 + v54; // 0x414380
    *v37 = v57;
    *v34 = v59;
    *v40 = v60;
    *v32 = v58;
    v31 = v55;
    while (v1 != v55) {
        // 0x4142d0
        v32 = (int64_t *)(v31 + 56);
        v33 = *v32 + v58;
        v34 = (int64_t *)(v31 + 32);
        v35 = *v34 + v59;
        v36 = (int64_t *)v31;
        v37 = (int64_t *)(v31 + 40);
        v38 = *v36 + v49 - v35;
        v39 = (int64_t *)(v31 + 8);
        v40 = (int64_t *)(v31 + 48);
        v41 = *v37 + v57 ^ v33 / 512;
        v42 = (int64_t *)(v31 + 16);
        v43 = *v39 + v51 - v41;
        v44 = (int64_t *)(v31 + 24);
        v45 = *v40 + v60 ^ 512 * v38;
        v46 = *v42 + v53 - v45;
        v47 = v43 / 0x800000 ^ v38 + v33;
        v48 = *v44 + v56 - v47;
        v49 = 0x8000 * v46 ^ v43 + v38;
        v50 = v35 - v49;
        *v36 = v49;
        v51 = v48 / 0x4000 ^ v46 + v43;
        v52 = v41 - v51;
        *v39 = v51;
        v53 = 0x100000 * v50 ^ v48 + v46;
        result = v52 + v50;
        v54 = v45 - v53;
        *v42 = v53;
        v55 = v31 + 64;
        v56 = v52 / 0x20000 ^ v50 + v48;
        v57 = v54 + v52;
        v58 = v47 - v56;
        *v44 = v56;
        v59 = 0x4000 * v54 ^ result;
        v60 = v58 + v54;
        *v37 = v57;
        *v34 = v59;
        *v40 = v60;
        *v32 = v58;
        v31 = v55;
    }
    // 0x41439c
    *(int64_t *)(a1 + 2064) = 0;
    *(int64_t *)(a1 + 2056) = 0;
    *(int64_t *)v1 = 0;
    return result;
}
// Address range: 0x4143d0 - 0x4143de
int64_t function_4143d0(int64_t a1, int64_t a2) {
    // 0x4143d0
    int64_t v1; // 0x4143d0
    return function_411a10(a1, 0, 3, v1);
}
// Address range: 0x4143e0 - 0x41445b
int64_t function_4143e0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4143e7
    if (fileno(stream) < 0) {
        // 0x414447
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x4143fa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x41442b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x414447
            return fclose(stream);
        }
    }
    // 0x4143fc
    if ((int32_t)function_411b50(a1, v1) == 0) {
        // 0x414447
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x414408
    int32_t v3 = *v2; // 0x414410
    int64_t result = fclose(stream); // 0x41441e
    if (v3 != 0) {
        // 0x414450
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x414420
    return result;
}
// Address range: 0x414460 - 0x414464
int64_t function_414460(int64_t a1) {
    // 0x414460
    int64_t result; // 0x414460
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x414470 - 0x415f89
int64_t function_414470(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x414470
    int64_t v1; // bp-1416, 0x414470
    int64_t v2; // bp-1656, 0x414470
    if ((int32_t)function_416250(a3, &v1, &v2) < 0) {
        // 0x414ae0
        return 0;
    }
    int64_t v3 = &v2; // 0x41447b
    int64_t v4; // bp-1384, 0x414470
    int64_t v5; // bp-1640, 0x414470
    int64_t v6; // 0x414470
    if ((int32_t)function_416030(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x4153c7
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x4153e3
            free((int64_t *)v6);
        }
        // 0x4153e8
        *__errno_location() = 22;
        // 0x414ae0
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x4144db
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x4144e3
    uint64_t v9 = v8 + v6; // 0x4144e7
    int64_t v10; // 0x414470
    char * v11; // 0x414470
    int64_t v12; // 0x414470
    if (v9 < v8) {
        // 0x414b90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x414a99;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x414b90
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x414a99;
        } else {
            uint64_t size = v9 + 6; // 0x4144f7
            if (size < 4000) {
                // 0x414640
                v12 = 0;
                int64_t v13; // bp-1784, 0x414470
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x414534;
            } else {
                if (size == -1) {
                    // 0x414b90
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x414a99;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x414518
                    if (mem == NULL) {
                        // 0x414b90
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x414a99;
                    } else {
                        // 0x41452d
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x414534;
                    }
                }
            }
        }
    }
  lab_0x414a60_2:;
    // 0x414a60
    int64_t v14; // 0x414470
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x414a68
    int64_t v17 = v16; // 0x414a76
    int64_t v18 = v16; // 0x414a76
    int64_t v19 = v15; // 0x414a76
    int64_t v20; // 0x414470
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x414c88;
    } else {
        goto lab_0x414a81;
    }
  lab_0x414a99:
    // 0x414a99
    if (v6 != (int64_t)&v4) {
        // 0x414ab0
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x414acc
        free((int64_t *)v6);
    }
    // 0x414ad1
    *(int32_t *)v10 = 12;
    // 0x414ae0
    return 0;
  lab_0x414534:
    // 0x414534
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x41456d
    int64_t v23 = *v22; // 0x41456d
    int64_t v24 = 0; // 0x414573
    int64_t v25 = v20; // 0x414573
    int64_t v26 = v21; // 0x414573
    int64_t v27 = 0; // 0x414573
    int64_t v28; // 0x414470
    int64_t v29; // 0x414470
    int64_t v30; // 0x414470
    int64_t v31; // 0x414470
    int64_t v32; // 0x414470
    int64_t v33; // 0x414470
    int64_t v34; // 0x414470
    if (v23 == a3) {
        goto lab_0x414b83;
    } else {
        int64_t v35 = v23 - a3; // 0x414579
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x41458b;
    }
  lab_0x414b83:;
    int64_t v36 = v24; // 0x414b86
    float80_t v37; // 0x414470
    float80_t v38 = v37; // 0x414b86
    float80_t v39; // 0x414470
    float80_t v40 = v39; // 0x414b86
    int64_t v41 = v25; // 0x414b86
    int64_t v42 = v26; // 0x414b86
    int64_t v43 = v27; // 0x414b86
    int64_t v44; // 0x414470
    int64_t v45 = v44; // 0x414b86
    goto lab_0x4146e8;
  lab_0x4146e8:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x414470
    int64_t v51; // 0x414470
    int64_t v52; // 0x414470
    int64_t v53; // 0x414470
    int64_t v54; // 0x414470
    int64_t v55; // 0x414470
    int64_t v56; // 0x414470
    int64_t v57; // 0x414470
    int64_t dest_mem2; // 0x414470
    int64_t dest_mem3; // 0x414470
    int64_t v58; // 0x414470
    float80_t v59; // 0x414470
    float80_t v60; // 0x414470
    float80_t v61; // 0x414470
    float80_t v62; // 0x414470
    float80_t v63; // 0x414470
    uint64_t v64; // 0x415816
    char * v65; // 0x4146fc
    char v66; // 0x4146fc
    int64_t v67; // 0x414724
    uint32_t v68; // 0x414728
    int64_t v69; // 0x414b05
    char v70; // 0x414470
    if (v1 == v49) {
        // 0x415810
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x415f7a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x415872;
            } else {
                goto lab_0x414a60_2;
            }
        } else {
            // 0x415820
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x415872;
            } else {
                if (v47 != 0) {
                    // 0x415e3d
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x414a60_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x415e43
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x41583e;
                        } else {
                            goto lab_0x415e4f;
                        }
                    }
                } else {
                    // 0x41582e
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x41583e;
                    } else {
                        goto lab_0x415e4f;
                    }
                }
            }
        }
    } else {
        // 0x4146fc
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x414701
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x4152d0
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x414a60_2;
                } else {
                    goto lab_0x414b62;
                }
            } else {
                // 0x414b12
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x414b62;
                } else {
                    if (v47 != 0) {
                        // 0x415400
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x414a60_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x415406
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x414b30;
                            } else {
                                goto lab_0x415412;
                            }
                        }
                    } else {
                        // 0x414b20
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x414b30;
                        } else {
                            goto lab_0x415412;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            // 0x414719
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g97 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x415090
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x414b67;
                }
                case 19: {
                    // 0x415080
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x414b67;
                }
                case 20: {
                    // 0x415068
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x414b67;
                }
                case 21: {
                    goto lab_0x414c50;
                }
                case 22: {
                    goto lab_0x414c50;
                }
                default: {
                    // 0x41473a
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x414be0
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x414bfd;
                        } else {
                            // 0x414be7
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x414770;
                            } else {
                                goto lab_0x414bfd;
                            }
                        }
                    } else {
                        goto lab_0x414770;
                    }
                }
            }
        }
    }
  lab_0x41458b:;
    int64_t v75 = v34;
    float80_t v76; // 0x414470
    float80_t v77 = v76;
    float80_t v78; // 0x414470
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x414470
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x41458e
    int64_t v89 = v85; // 0x41458e
    int64_t v90 = v84; // 0x41458e
    float80_t v91 = v79; // 0x41458e
    float80_t v92 = v77; // 0x41458e
    int64_t v93 = v75; // 0x41458e
    int64_t v94 = v80; // 0x41458e
    int64_t v95 = v81; // 0x41458e
    int64_t v96 = v82; // 0x41458e
    int64_t v97 = v87; // 0x41458e
    int64_t v98; // 0x414470
    int64_t v99; // 0x414470
    int64_t v100; // 0x414470
    int64_t v101; // 0x414470
    int64_t v102; // 0x414470
    if (v82 >= v87) {
        goto lab_0x4146d9;
    } else {
        if (v82 != 0) {
            // 0x414670
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x414a60_2;
            } else {
                int64_t v103 = 2 * v82; // 0x414676
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x41468b;
                } else {
                    goto lab_0x41467e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x4145b4
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x41469e;
                } else {
                    goto lab_0x4145c0;
                }
            } else {
                goto lab_0x41467e;
            }
        }
    }
  lab_0x4146d9:
    // 0x4146d9
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x4146e8;
  lab_0x415872:
    // 0x415872
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x41587a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x41588b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x415897
    if (v12 != 0) {
        // 0x4158a3
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x4158c2
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x4158de
        free((int64_t *)v6);
    }
    // 0x4158e3
    *a2 = v46;
    // 0x414ae0
    return result;
  lab_0x414c50:
    // 0x414c50
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x414b67;
  lab_0x41467e:
    // 0x41467e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x414a60_2;
    } else {
        goto lab_0x41468b;
    }
  lab_0x414c88:
    // 0x414c88
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x414a81;
  lab_0x414a81:
    if (v12 == 0) {
        // 0x414b90
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x414a99;
    } else {
        // 0x414a91
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x414a99;
    }
  lab_0x414b62:
    // 0x414b62
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x414b67;
  lab_0x414770:;
    int64_t v273 = (int64_t)v11; // 0x414770
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x414777
    int64_t v275 = v273 + 1; // 0x41477b
    *v11 = 37;
    int64_t v276 = v275; // 0x414784
    if (v274 % 2 != 0) {
        // 0x414786
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x414777
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x414797
    if ((v277 & 2) != 0) {
        // 0x414799
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x4147a3
    if ((v277 & 4) != 0) {
        // 0x4147a5
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x4147af
    if ((v277 & 8) != 0) {
        // 0x4147b1
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x4147bb
    if ((v277 & 16) != 0) {
        // 0x4147bd
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x4147c7
    if ((v277 & 64) != 0) {
        // 0x4147c9
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x4147d3
    if ((v277 & 32) != 0) {
        // 0x4147d5
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x4147dd
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x4147e1
    int64_t v293 = v290; // 0x4147e8
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x4147f7
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x41481a
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x41481e
    int64_t v298 = v295; // 0x414825
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x414834
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x41472a
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x414860
    int64_t v272; // 0x414470
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x414869
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x414c68;
        } else {
            if (v301 == 12) {
                // 0x415428
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x414890;
            } else {
                // 0x414880
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x414c60
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x414c68;
                } else {
                    goto lab_0x414890;
                }
            }
        }
    } else {
        goto lab_0x414890;
    }
  lab_0x414b67:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x414b67
    int64_t v111 = v55 + 88; // 0x414b6b
    int64_t v112 = *(int64_t *)v111; // 0x414b6f
    int64_t v113 = v49 + 1; // 0x414b72
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x414579
        int64_t v115 = v114 + v105; // 0x41457f
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
            // 0x414ba8
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
                goto lab_0x414a60_2;
            } else {
                goto lab_0x4146d9;
            }
        } else {
            goto lab_0x41458b;
        }
    } else {
        goto lab_0x414b83;
    }
  lab_0x41468b:;
    int64_t v116 = v80 == v20; // 0x414692
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x4145c0;
    } else {
        goto lab_0x41469e;
    }
  lab_0x41469e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x414470
    if (v102 != 0) {
        goto lab_0x4145c0;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x4146ba
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x414c75;
        } else {
            // 0x4146c8
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
            goto lab_0x4146d9;
        }
    }
  lab_0x4145c0:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x4145d7
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x414a60_2;
    } else {
        // 0x4145fd
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x414625
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
        goto lab_0x4146d9;
    }
  lab_0x41583e:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x415e04
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x414a60_2;
        } else {
            // 0x415e15
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x415e2a
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x415872;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x415861
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x414c75;
        } else {
            // 0x41586f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x415872;
        }
    }
  lab_0x415e4f:
    // 0x415e4f
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x414a60_2;
    } else {
        goto lab_0x41583e;
    }
  lab_0x414bfd:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x414bfd
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x414c01
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x414c05
    int64_t v123 = 0; // 0x414c0c
    int64_t v124 = v122; // 0x414c0c
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x414c12
        int64_t v126 = v120; // 0x414c1a
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x415ba1
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x415bb9
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x415bcb
            int64_t v131 = v128; // 0x415bd4
            int64_t v132 = v130; // 0x415bd4
            int64_t v133; // 0x414470
            int64_t v134; // 0x415be6
            if (v130 < v129) {
                // 0x415bd6
                if (v121 == v128) {
                    // break -> 0x4149f0
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x4149db
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x4149f0
                        goto lab_0x4149f0;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x415b98
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x415ba1
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x415bd6
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x4149f0
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x4149db
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x4149f0
                            goto lab_0x4149f0;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x415b98
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x414c24
            if (*(int32_t *)v135 != 5) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x414c30
            int64_t v137 = v136; // 0x414c30
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x414c3d
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x4149f0:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x4149f0
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x4149f4
    int64_t v142; // 0x414470
    int64_t v143; // 0x414470
    int64_t v144; // 0x414470
    if (v140 == v141) {
        goto lab_0x4150a0;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x414a01
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x415c04
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x415c0d
            if (v141 == v146) {
                goto lab_0x4150be;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x415c33
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x415c3a
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x415c53
                int64_t v152 = v151; // 0x415c5c
                int64_t v153 = v149; // 0x415c5c
                int64_t v154; // 0x414470
                int64_t v155; // 0x415c67
                if (v151 < v150) {
                    // 0x415c5e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x414a60_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x415c7a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x414a60_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x415c20
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x415c29
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x415c5e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x414a60_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x415c7a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x414a60_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x415c20
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x414a2c;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x414a13
            if (*(int32_t *)v156 != 5) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x414a20
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x4150a0;
            } else {
                goto lab_0x414a2c;
            }
        }
    }
  lab_0x414890:
    // 0x414890
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x41489d
    int64_t v160 = 0; // 0x4148a5
    if (v159 != -1) {
        // 0x4148ab
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x41519c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x4148ce
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x4148dc
        if (*(int32_t *)v162 != 5) {
            // 0x41519c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x4148ef
        int64_t v164; // bp-8, 0x414470
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x414470
    uint64_t v165; // 0x414906
    if (v46 > 0xfffffffffffffffd) {
        // 0x415338
        v14 = v48;
        if (v47 == -1) {
            // 0x414964
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x414a60_2;
    } else {
        // 0x414910
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x414964
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x415040
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x414a60_2;
            } else {
                int64_t v167 = 2 * v47; // 0x415046
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x414932;
                } else {
                    goto lab_0x415052;
                }
            }
        } else {
            // 0x414922
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x414932;
            } else {
                goto lab_0x415052;
            }
        }
    }
  lab_0x414b30:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x415359
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x414a60_2;
        } else {
            // 0x415371
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x415382
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x414b62;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x414b51
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x414c75;
        } else {
            // 0x414b5f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x414b62;
        }
    }
  lab_0x415412:
    // 0x415412
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x414a60_2;
    } else {
        goto lab_0x414b30;
    }
  lab_0x4150a0:
    // 0x4150a0
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x4150be;
  lab_0x414c68:
    // 0x414c68
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x414890;
  lab_0x414c75:
    // 0x414c75
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x414c88;
  lab_0x4150be:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x4150c4
    v14 = v48;
    int64_t v170; // 0x414470
    int64_t v171; // 0x414470
    int64_t * v172; // 0x414470
    int64_t v173; // 0x414470
    int64_t v174; // bp-760, 0x414470
    uint64_t size5; // 0x4150c8
    if (v169 == -1) {
        goto lab_0x414a60_2;
    } else {
        // 0x4150d9
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x415139;
        } else {
            // 0x4150e5
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x414a60_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x41510d
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x414a60_2;
                } else {
                    goto lab_0x415139;
                }
            }
        }
    }
  lab_0x414a2c:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x4150be;
    } else {
        // 0x414a35
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x4150be;
        } else {
            goto lab_0x414a60_2;
        }
    }
  lab_0x414932:
    // 0x414932
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x4152f9
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x415314
            if (v48 == v20 && v46 != 0) {
                // 0x415322
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x414964
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x414953
        v14 = v48;
        if (mem11 != NULL) {
            // 0x414964
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x414a60_2;
  lab_0x415052:
    // 0x415052
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x414a60_2;
    } else {
        goto lab_0x414932;
    }
  lab_0x415139:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x414470
    int64_t v181; // 0x414470
    int64_t v182; // 0x414470
    int64_t v183; // 0x414470
    int64_t v184; // 0x414470
    int64_t v185; // 0x414470
    int64_t v186; // 0x414470
    int64_t v187; // 0x414470
    int64_t v188; // 0x414470
    int64_t v189; // 0x414470
    int64_t v190; // 0x414470
    int64_t v191; // 0x414470
    int64_t v192; // 0x414470
    int64_t v193; // 0x414470
    float80_t v194; // 0x414470
    float80_t v195; // 0x414470
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x415cb2
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x415cc0
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
            // 0x415ded
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
        goto lab_0x4155f9;
    } else {
        // 0x415141
        int64_t v198; // 0x414470
        float80_t v199; // 0x414470
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x415901
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x41590e
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x41576a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x41516f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x415178
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x41519c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x415ce6
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x415ce6
                            v181 = v187 + 3;
                            goto lab_0x415e61;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x415e61;
                            } else {
                                goto lab_0x415d22;
                            }
                        }
                    } else {
                        // 0x4159f3
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x4155e7;
                        } else {
                            int64_t v202 = v187 + 2; // 0x415a01
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x415f4a
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x415a48
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x415a5b
                                int64_t v207 = v176 & 0xffffffff; // 0x415a5e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x415a6c
                                int64_t v209 = v187 + 1; // 0x415a89
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x415a9e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x415aab
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x4155f9;
                        }
                    }
                } else {
                    // 0x415798
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x415798
                        v180 = v187 + 1;
                        goto lab_0x415d47;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x415d47;
                        } else {
                            goto lab_0x4157b8;
                        }
                    }
                }
            } else {
                // 0x4155d0
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x4155e7;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x415b1c
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x415b2d
                    char v215 = *v213; // 0x415b34
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x415b70
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x415b7d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x415b45
                        v182 = v218;
                        int64_t v219; // 0x415b37
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x4155f9;
                }
            }
        } else {
            float80_t v220; // 0x414470
            if (v220 != 0.0L) {
                // 0x41519c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x4157eb
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x4157fa
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
                // 0x415ad3
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
            goto lab_0x4155f9;
        }
    }
  lab_0x4155f9:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x4155fc
    int64_t v229 = v228; // 0x415602
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x415604
        int64_t v232 = v231 + v224; // 0x415607
        int64_t v233 = v232 - v225; // 0x41560e
        if ((v230 & 2) != 0) {
            // 0x415ab3
            v229 = v233;
            int64_t v234 = v224; // 0x415ab6
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x415ac0
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x415ac0
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x415925
                int64_t v238 = v224; // 0x41592b
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x415939
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x415930
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x415945
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x415958
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
                int64_t v243 = v224; // 0x415631
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x415651
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x415648
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x41565a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x415668
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
        // 0x41519c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x415698
    int64_t dest_mem5 = v48; // 0x4156a5
    int64_t v250 = v248; // 0x4156a5
    int64_t v251 = v47; // 0x4156a5
    int64_t v252; // 0x414470
    if (v47 - v46 > v248) {
        goto lab_0x415720;
    } else {
        if (v249 < v46) {
            // 0x4158f2
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x414a60_2;
            } else {
                goto lab_0x415720;
            }
        } else {
            // 0x4156b0
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x415720;
            } else {
                if (v47 != 0) {
                    // 0x415c88
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x414a60_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x415c8e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x4156ce;
                        } else {
                            goto lab_0x415c9a;
                        }
                    }
                } else {
                    // 0x4156be
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x4156ce;
                    } else {
                        goto lab_0x415c9a;
                    }
                }
            }
        }
    }
  lab_0x415720:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x415731
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x41574d
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x414b67;
  lab_0x4155e7:
    // 0x4155e7
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x4155f9;
  lab_0x415d47:;
    char * v257 = nl_langinfo(0x10000); // 0x415d7a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x415d8b
    char v259 = *v257; // 0x415d92
    int64_t v260 = v176 & 0xffffffff; // 0x415d95
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x415da3
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x415dd0
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x415ddd
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x4157b8;
  lab_0x4157b8:
    // 0x4157b8
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
    goto lab_0x4155f9;
  lab_0x4156ce:
    // 0x4156ce
    if (v48 == 0 || v48 == v20) {
        // 0x41596b
        int64_t size7; // 0x414470
        int64_t * mem12 = malloc((int32_t)size7); // 0x415982
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x414a60_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x41598e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x4159b9
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x415720;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x4156fd
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x414a60_2;
        } else {
            // 0x41570b
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x415720;
        }
    }
  lab_0x415c9a:
    // 0x415c9a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x414a60_2;
    } else {
        goto lab_0x4156ce;
    }
  lab_0x415e61:;
    int64_t v265 = v187 + 4; // 0x415e61
    char v266 = *nl_langinfo(0x10000); // 0x415eac
    int64_t v267 = v176 & 0xffffffff; // 0x415eaf
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x415eb6
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x415edd
        int64_t v270 = v265 + 1; // 0x415ee5
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
    goto lab_0x415d22;
  lab_0x415d22:
    // 0x415d22
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x4155f9;
}
// Address range: 0x415f90 - 0x416023
int64_t function_415f90(int64_t file_path, char * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, mode); // 0x415f97
    int64_t result = (int64_t)file; // 0x415f97
    if (file == NULL) {
        // 0x415fb1
        return result;
    }
    uint32_t v1 = fileno(file); // 0x415fa7
    if (v1 >= 3) {
        // 0x415fb1
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_4143d0((int64_t)v1, v2); // 0x415fca
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x416008
        function_4143e0(result, v2);
        // 0x415fb1
        return 0;
    }
    // 0x415fce
    if ((int32_t)function_4143e0(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, mode); // 0x415fe0
        if (v4 != NULL) {
            // 0x415fb1
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x415fed
    close(fd);
    // 0x415fb1
    return 0;
}
// Address range: 0x416030 - 0x416249
int64_t function_416030(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x416093
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x416048
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x416059
    g87 = v5;
    int64_t v6; // 0x416030
    int64_t v7; // 0x416030
    int64_t v8; // 0x416030
    int64_t v9; // 0x416030
    int64_t v10; // 0x416030
    int64_t v11; // 0x416030
    int64_t v12; // 0x416030
    uint32_t v13; // 0x416150
    int64_t * v14; // 0x416180
    int64_t v15; // 0x416188
    uint32_t v16; // 0x4161d0
    uint32_t v17; // 0x4161a0
    int64_t * v18; // 0x416130
    int64_t v19; // 0x416130
    int64_t * v20; // 0x416140
    int64_t v21; // 0x416140
    int64_t * v22; // 0x416118
    int64_t v23; // 0x416118
    int64_t * v24; // 0x416100
    int64_t v25; // 0x416100
    int64_t * v26; // 0x416220
    uint32_t v27; // 0x4160e0
    int64_t v28; // 0x416220
    int64_t * v29; // 0x416210
    int64_t v30; // 0x416210
    uint32_t v31; // 0x4160c0
    int64_t * v32; // 0x416238
    int64_t v33; // 0x416238
    int64_t v34; // 0x4161e3
    uint32_t v35; // 0x4160a0
    int64_t v36; // 0x4161b7
    uint32_t v37; // 0x416068
    int32_t * v38; // 0x416150
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x4160e0
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x4160e7
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x416130
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x4160f3
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x416086
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x4160c0
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x4160c7
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x416140
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x4160d3
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x416086
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x4160a0
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x4160a7
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x416118
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x4160b3
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x416086
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
            // 0x416068
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x416073
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x416100
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x41607f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x416086
            break;
        }
        case 11: {
            // 0x416150
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x41615f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x416220
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x41616c
            *(int64_t *)(v4 + 16) = __asm_movsd_7(__asm_movsd(*(int64_t *)v10));
            // break -> 0x416086
            break;
        }
        case 12: {
            // 0x416180
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x416086
            break;
        }
        case 15: {
            // 0x4161d0
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x4161d7
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x416210
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x4161e3
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x416086
            break;
        }
        case 16: {
            // 0x4161a0
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x4161ab
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x416238
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x4161b7
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x416086
            break;
        }
        default: {
            // 0x416093
            return 0xffffffff;
        }
    }
    // 0x416086
    v3++;
    int64_t v39 = v4 + 32; // 0x416091
    while (v3 < v2) {
        // 0x416050
        v4 = v39;
        v5 = *(int32_t *)v4;
        g87 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x4160e0
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x4160e7
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x416130
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x4160f3
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x416086
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x4160c0
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x4160c7
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x416140
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x4160d3
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x416086
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x4160a0
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x4160a7
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x416118
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x4160b3
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x416086
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
                // 0x416068
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x416073
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x416100
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x41607f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x416086
                break;
            }
            case 11: {
                // 0x416150
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x41615f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x416220
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x41616c
                *(int64_t *)(v4 + 16) = __asm_movsd_7(__asm_movsd(*(int64_t *)v10));
                // break -> 0x416086
                break;
            }
            case 12: {
                // 0x416180
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x416086
                break;
            }
            case 15: {
                // 0x4161d0
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x4161d7
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x416210
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x4161e3
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x416086
                break;
            }
            case 16: {
                // 0x4161a0
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x4161ab
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x416238
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x4161b7
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x416086
                break;
            }
            default: {
                // 0x416093
                return 0xffffffff;
            }
        }
        // 0x416086
        v3++;
        v39 = v4 + 32;
    }
    // 0x416093
    return 0;
}
// Address range: 0x416250 - 0x416f59
int64_t function_416250(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x416252
    int64_t v4 = v1 + 16; // 0x416256
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x416289
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x41629e
    *v6 = v4;
    char v7 = *(char *)a1; // 0x4162cb
    int32_t v8 = 0; // 0x4162d0
    int64_t v9 = 0; // 0x4162d0
    int64_t v10 = v3; // 0x4162d0
    int64_t v11 = a1; // 0x4162d0
    int64_t v12 = 0; // 0x4162d0
    char v13; // 0x416250
    int64_t v14; // 0x416250
    int64_t v15; // 0x416250
    int64_t v16; // 0x416250
    int64_t v17; // 0x416250
    int64_t v18; // 0x416250
    int64_t v19; // 0x416250
    int64_t v20; // 0x416250
    int64_t v21; // 0x416250
    int64_t v22; // 0x416250
    int64_t v23; // 0x416250
    int64_t v24; // 0x416250
    int64_t v25; // 0x416250
    int64_t v26; // 0x416250
    int64_t v27; // 0x416250
    int64_t v28; // 0x416250
    int64_t v29; // 0x416250
    int64_t v30; // 0x416250
    int32_t v31; // 0x416250
    int64_t v32; // 0x416250
    int64_t v33; // 0x4162c0
    int64_t v34; // 0x416310
    int64_t * v35; // 0x416333
    int64_t v36; // 0x416396
    if (v7 != 0) {
        // 0x4162c0
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x416250
        int64_t v38 = 7; // 0x416250
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x416250
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x4162c0:
            // 0x4162c0
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x416303
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x416318
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x416354
                int64_t v43 = v42; // 0x416354
                int64_t v44 = v43; // 0x41635d
                int64_t v45 = v33; // 0x41635d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x4166f0
                    char v47 = *(char *)v46; // 0x4166f4
                    int64_t v48 = v46; // 0x4166fd
                    while (v47 < 58) {
                        // 0x4166f0
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x4166ff
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x416d95
                        char v52 = *(char *)v51; // 0x416d95
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x416d99
                        int64_t v54 = v33; // 0x416dad
                        int64_t v55 = v51; // 0x416dad
                        char v56 = v52; // 0x416dad
                        int64_t v57 = v53; // 0x416dad
                        bool v58 = v52 < 58; // 0x416dad
                        bool v59 = v52 < 58; // 0x416dad
                        char v60 = v52; // 0x416dad
                        int64_t v61 = v51; // 0x416dad
                        int64_t v62; // 0x416dc2
                        int64_t v63; // 0x416d95
                        char v64; // 0x416d95
                        int64_t v65; // 0x416d99
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x416a18_9;
                            }
                            // 0x416d93
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
                                // 0x416daf
                                if (v64 >= 58) {
                                    goto lab_0x416a18_9;
                                }
                                // 0x416d93
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
                        int64_t v67 = v55; // 0x416d68
                        while (v58) {
                            // 0x416d6e
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
                                    goto lab_0x416a18_9;
                                }
                                // 0x416d93
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
                                    // 0x416daf
                                    if (v64 >= 58) {
                                        goto lab_0x416a18_9;
                                    }
                                    // 0x416d93
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
                            // 0x416d64
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x416e6d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x416a18_9;
                        }
                        int64_t v68 = v54 + 2; // 0x416e7e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x416250
                v36 = v45;
                char v70; // 0x416250
                while (true) {
                    // 0x416396
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x4163b0
                                *v41 = *v41 | 2;
                                // break -> 0x416390
                                break;
                            }
                            case 43: {
                                // 0x4163c0
                                *v41 = *v41 | 4;
                                // break -> 0x416390
                                break;
                            }
                            case 32: {
                                // 0x4163d0
                                *v41 = *v41 | 8;
                                // break -> 0x416390
                                break;
                            }
                            case 35: {
                                // 0x4163e0
                                *v41 = *v41 | 16;
                                // break -> 0x416390
                                break;
                            }
                            case 48: {
                                // 0x4163f0
                                *v41 = *v41 | 32;
                                // break -> 0x416390
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x4163f8
                                    break;
                                }
                                // 0x416386
                                *v41 = *v41 | 64;
                                // break -> 0x416390
                                break;
                            }
                        }
                    } else {
                        // 0x41639f
                        *v41 = *v41 | 1;
                    }
                    // 0x416390
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x416250
                int64_t * v72; // 0x416321
                int64_t * v73; // 0x41632a
                if (v70 == 42) {
                    // 0x41646d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x41648d
                    int64_t v75 = v74; // 0x41648d
                    int64_t v76 = v75 + 0xffffffd0; // 0x416491
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x416497
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x41686d
                        char v80 = *(char *)v79; // 0x416871
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x41686d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x41687d
                        v26 = v79;
                        int64_t v81 = v75; // 0x416881
                        int64_t v82 = v36; // 0x416881
                        int64_t v83 = 0; // 0x416881
                        if (v80 != 36) {
                            goto lab_0x41649d;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x4168b2
                            int64_t v89 = v85; // 0x4168b2
                            int64_t v90 = v87; // 0x4168b2
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x4168b7
                            int64_t v95 = v92 + 1; // 0x4168ba
                            char v96 = *(char *)v95; // 0x4168ba
                            int64_t v97 = v96; // 0x4168ba
                            while (v94 < v91) {
                                // 0x4168d1
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x416a18_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x41688b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x416894
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
                                    // 0x4168d1
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x416a18_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x41688b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x416f0b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x416a18_9;
                            }
                            // 0x416f19
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x4164ac;
                        }
                    } else {
                        goto lab_0x41649d;
                    }
                } else {
                    // 0x4163fd
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x416250
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x416b1b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x416b20
                        int64_t v102 = v71; // 0x416b29
                        char * v103 = v100; // 0x416b29
                        int64_t v104 = v36; // 0x416b29
                        int64_t v105 = v71; // 0x416b29
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x416b33
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x416b33
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x416b33
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x416b42
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x416b65
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x416408;
                }
            } else {
                goto lab_0x4162c8;
            }
        }
    }
  lab_0x4162d2:
    // 0x4162d2
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x4162f4
    return 0;
  lab_0x416a18_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x416a23
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x416a35
    if (v3 != v115) {
        // 0x416a40
        free((int64_t *)v115);
    }
    // 0x416a45
    *__errno_location() = 22;
    // 0x4162f4
    return 0xffffffff;
  lab_0x416bf0_5:;
    // 0x416bf0
    int64_t v116; // 0x416250
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x416bf5
    int64_t v119; // 0x416250
    if (v4 == v117) {
        goto lab_0x416c09_3;
    } else {
        // 0x416bf7
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x416c09_3;
    }
  lab_0x416c09_3:;
    int64_t v120 = *v5; // 0x416c09
    int32_t * v121; // 0x416c19
    if (v3 == v120) {
        // 0x416c19
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x416c14
    free((int64_t *)v120);
    // 0x416c19
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x4162c8:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x4162cb
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
        // break -> 0x4162d2
        goto lab_0x4162d2;
    }
    goto lab_0x4162c0;
  lab_0x41649d:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x41649d
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x416843
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x416a18_9;
        }
        // 0x41685b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x4164ac;
  lab_0x416408:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x41640b
    int64_t v147 = v339; // 0x41640b
    int64_t v145 = v338; // 0x41640b
    int64_t v143 = v337; // 0x41640b
    int64_t v186; // 0x416250
    int64_t v190; // 0x416250
    int64_t v189; // 0x416250
    int64_t v188; // 0x416250
    int64_t v187; // 0x416250
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x416510;
    } else {
        goto lab_0x416411;
    }
  lab_0x4164ac:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x4164ac
    int64_t v132 = v128; // 0x4164b3
    int64_t v133 = v16; // 0x4164b3
    int64_t v134 = v131; // 0x4164b3
    int64_t v135; // 0x416250
    int64_t v136; // 0x416250
    int64_t v137; // 0x416250
    int64_t v138; // 0x41675f
    if (v16 > v127) {
        goto lab_0x4164bc;
    } else {
        uint64_t v139 = 2 * v16; // 0x416755
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x416bf0_5;
        }
        int64_t size = 32 * v138; // 0x41677e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x416cdc
            if (mem == NULL) {
                goto lab_0x416c09_3;
            }
            // 0x416cfe
            v135 = (int64_t)mem;
            goto lab_0x416d09;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x41679f
            int64_t v140 = *v6; // 0x4167a4
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x416bf0_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x41679f
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x416d09;
            } else {
                goto lab_0x4167dd;
            }
        }
    }
  lab_0x416411:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x416418
    int64_t v151 = v146; // 0x416418
    int64_t v152 = v144; // 0x416418
    uint64_t v153; // 0x416250
    int64_t v154; // 0x416250
    int64_t v155; // 0x416457
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x41645b
        int64_t v158; // 0x416250
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x4165c0
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x416453
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x4165c8
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x416450
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x416453
                    break;
                }
            }
        } else {
            // 0x416460
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x416453
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x4165c8
    int64_t v162 = v161 % 256; // 0x4165d4
    g88 = v162;
    int64_t v163 = 17; // 0x4165d7
    int64_t v164 = v154; // 0x4165d7
    int64_t v165 = v154; // 0x4165d7
    switch ((char)v161) {
        case 0: {
            goto lab_0x416641;
        }
        case 28: {
            goto lab_0x416992;
        }
        case 30: {
            // 0x4169be
            v163 = 14;
            v164 = 99;
            goto lab_0x4165e9;
        }
        case 32: {
            goto lab_0x416992;
        }
        case 33: {
            goto lab_0x416992;
        }
        case 34: {
            goto lab_0x416992;
        }
        case 46: {
            // 0x4169af
            v163 = 16;
            v164 = 115;
            goto lab_0x4165e9;
        }
        case 51: {
            goto lab_0x4169cd;
        }
        case 60: {
            goto lab_0x416992;
        }
        case 62: {
            int32_t v166 = v153; // 0x4168e9
            int32_t v167 = v166 - 7; // 0x4168e9
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x4168ef
            v163 = v168;
            v164 = v154;
            goto lab_0x4165e9;
        }
        case 63: {
            goto lab_0x416940;
        }
        case 64: {
            goto lab_0x416992;
        }
        case 65: {
            goto lab_0x416992;
        }
        case 66: {
            goto lab_0x416992;
        }
        case 68: {
            goto lab_0x416940;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x4168ff
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x416905
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x41690d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x41691b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x41692f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x4165e9;
        }
        case 74: {
            goto lab_0x4169cd;
        }
        case 75: {
            goto lab_0x4165e9;
        }
        case 78: {
            int32_t v171 = v153; // 0x4165e0
            int32_t v172 = v171 - 7; // 0x4165e0
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x4165e6
            v163 = v173;
            v164 = v154;
            goto lab_0x4165e9;
        }
        case 80: {
            goto lab_0x4169cd;
        }
        case 83: {
            goto lab_0x4169cd;
        }
        default: {
            goto lab_0x416a18_9;
        }
    }
  lab_0x4164bc:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x4164d3
        int64_t v178 = v176; // 0x416250
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x4164c8
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x4164c8
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x4164e1
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x4164ed
    int32_t v182 = *v181; // 0x4164ed
    if (v182 != 0) {
        // 0x416b6e
        if (v182 != 5) {
            goto lab_0x416a18_9;
        }
        unsigned char v183 = *(char *)v129; // 0x416b77
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x416408;
    } else {
        // 0x4164f7
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x4164fd
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
            goto lab_0x416411;
        } else {
            goto lab_0x416510;
        }
    }
  lab_0x416510:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x416510
    char v197 = *v196; // 0x416510
    int64_t * v198; // 0x416338
    *v198 = v192;
    int64_t v199; // 0x416250
    int64_t v200; // 0x416250
    int64_t v201; // 0x416250
    int64_t v202; // 0x416250
    int64_t v203; // 0x416250
    int64_t * v204; // 0x416341
    int64_t * v205; // 0x41634a
    int64_t v206; // 0x416529
    if (v197 != 42) {
        char v207 = *v196; // 0x416710
        int64_t v208 = v193; // 0x416719
        char * v209; // 0x416250
        int64_t v210; // 0x416250
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x416720
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x416724
            v208 = v212;
            while (v214 < 58) {
                // 0x416720
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x41672e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x416710
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x416741
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x416411;
    } else {
        // 0x41651f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x41653f
        int64_t v219 = v218; // 0x41653f
        int64_t v220 = v219 + 0xffffffd0; // 0x416543
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x416549
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x416df4
            char v224 = *(char *)v223; // 0x416df8
            v221 = v223;
            while (v224 < 58) {
                // 0x416df4
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x416e04
            v201 = v223;
            int64_t v225 = v219; // 0x416e08
            int64_t v226 = v206; // 0x416e08
            int64_t v227 = 0; // 0x416e08
            if (v224 != 36) {
                goto lab_0x41654f;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x416e39
                int64_t v233 = v229; // 0x416e39
                int64_t v234 = v231; // 0x416e39
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x416e3e
                int64_t v239 = v236 + 1; // 0x416e45
                char v240 = *(char *)v239; // 0x416e49
                int64_t v241 = v240; // 0x416e49
                while (v238 < v235) {
                    // 0x416e57
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x416a18_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x416e12
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x416e1b
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
                        // 0x416e57
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x416a18_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x416e12
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x416f27
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x416a18_9;
                }
                // 0x416f35
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x41655e;
            }
        } else {
            goto lab_0x41654f;
        }
    }
  lab_0x416641:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x416646
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x41664e
    *a2 = v245;
    int64_t v246; // 0x416250
    int64_t v247; // 0x416250
    int64_t dest_mem; // 0x416250
    int64_t v248; // 0x416250
    int64_t v249; // 0x416f43
    if (v246 > v245) {
        // 0x41665a
        goto lab_0x4162c8;
    } else {
        if (v246 < 0) {
            // 0x416f43
            v249 = *v6;
            v116 = v249;
            goto lab_0x416bf0_5;
        }
        int64_t v250 = 2 * v246; // 0x416676
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x416f43
            v249 = *v6;
            v116 = v249;
            goto lab_0x416bf0_5;
        }
        int64_t v251 = *v5; // 0x416687
        int64_t size2 = 176 * v246; // 0x416699
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x4167e9
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x416d4c
                v118 = v252;
                if (v4 == v252) {
                    // 0x416c19
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x416bf7
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x416c09_3;
            }
            goto lab_0x416804;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x4166ab
            if (mem4 == NULL) {
                // 0x416f43
                v249 = *v6;
                v116 = v249;
                goto lab_0x416bf0_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x4166ab
            int64_t v254 = *v5; // 0x4166cd
            int64_t v255 = *a2; // 0x4166d1
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x416804;
            } else {
                goto lab_0x4166df;
            }
        }
    }
  lab_0x416992:
    // 0x416992
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x4169a7
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x4165e9;
  lab_0x4169cd:;
    uint32_t v335 = (int32_t)v153; // 0x4169d5
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x4169db
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4169e3
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x4169f1
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x4169fe
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4165e9;
  lab_0x416940:;
    uint32_t v336 = (int32_t)v153; // 0x416948
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x41694e
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x416956
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x416964
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x416971
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4165e9;
  lab_0x4165e9:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x416250
    int64_t v260; // 0x416250
    int64_t * v261; // 0x41634f
    if (v259 == -1) {
        // 0x416af4
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x416a18_9;
        }
        // 0x416b0c
        v260 = v148;
    } else {
        // 0x4165f3
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x4165f8
    int64_t v264 = v258; // 0x4165ff
    int64_t v265 = v162; // 0x4165ff
    int64_t v266 = v263; // 0x4165ff
    int64_t v267; // 0x416250
    int64_t v268; // 0x416250
    int64_t v269; // 0x416250
    int64_t v270; // 0x416250
    int64_t v271; // 0x416250
    if (v142 > v262) {
        goto lab_0x416605;
    } else {
        uint64_t v272 = 2 * v142; // 0x416a68
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x416a72
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x416bf0_5;
        }
        int64_t size3 = 32 * v273; // 0x416a91
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x416aa4
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x416b89
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x416c09_3;
            }
            goto lab_0x416ba6;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x416ab1
            if (mem6 == NULL) {
                // 0x416f43
                v249 = *v6;
                v116 = v249;
                goto lab_0x416bf0_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x416ab1
            int64_t v276 = v274 & 0xffffffff; // 0x416ab6
            int64_t v277 = *v6; // 0x416ae1
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x416ba6;
            } else {
                goto lab_0x416aeb;
            }
        }
    }
  lab_0x416605:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x41661b
        int64_t v282 = v279; // 0x416250
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x416610
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x416610
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x416629
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x416635
    int32_t v286 = *v285; // 0x416635
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x416a5a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x416a18_9;
        }
    } else {
        // 0x41663f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x416641;
  lab_0x416d09:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x416d09
    int64_t * v290; // 0x416250
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x4167dd;
  lab_0x4167dd:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x4164bc;
  lab_0x41654f:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x41654f
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x416dca
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x416a18_9;
        }
        // 0x416de2
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x41655e;
  lab_0x41655e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x41655e
    int64_t v300 = v296; // 0x416565
    int64_t v301 = v191; // 0x416565
    int64_t v302 = v299; // 0x416565
    int64_t v303; // 0x416250
    int64_t v304; // 0x416250
    int64_t v305; // 0x416250
    int64_t v306; // 0x416c42
    if (v191 > v295) {
        goto lab_0x41656e;
    } else {
        uint64_t v307 = 2 * v191; // 0x416c38
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x416bf0_5;
        }
        int64_t size4 = 32 * v306; // 0x416c5d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x416e8e
            if (mem7 == NULL) {
                goto lab_0x416c09_3;
            }
            // 0x416eb0
            v304 = (int64_t)mem7;
            goto lab_0x416ebb;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x416c7e
            int64_t v308 = *v6; // 0x416c83
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x416bf0_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x416c7e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x416ebb;
            } else {
                goto lab_0x416cbc;
            }
        }
    }
  lab_0x416804:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x416250
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x4166df;
  lab_0x4166df:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x4162c8;
  lab_0x416ba6:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x416bbc
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x416aeb;
  lab_0x416aeb:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x416605;
  lab_0x41656e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x416583
        int64_t v324 = v322; // 0x416250
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x416578
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x416578
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x416591
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x41659e
    int32_t v328 = *v327; // 0x41659e
    if (v328 != 0) {
        // 0x416cc5
        if (v328 != 5) {
            goto lab_0x416a18_9;
        }
        unsigned char v329 = *(char *)v297; // 0x416cce
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x4165a8
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x4165b1
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x416411;
  lab_0x416ebb:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x416ebb
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x416cbc;
  lab_0x416cbc:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x41656e;
}
// Address range: 0x416f60 - 0x416fbd
int64_t function_416f60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416f60
    return function_4027c8();
}
// Address range: 0x416fc0 - 0x416fc1
int64_t function_416fc0(void) {
    // 0x416fc0
    int64_t result; // 0x416fc0
    return result;
}
// Address range: 0x416fd0 - 0x416fe8
int64_t function_416fd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x416fd0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g23);
}
// Address range: 0x416fe8 - 0x417008
int64_t function_416fe8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g19; // 0x416ff2
    while (*(int64_t *)v1 != -1) {
        // 0x416ff3
        v1 -= 8;
    }
    // 0x417004
    return result;
}
