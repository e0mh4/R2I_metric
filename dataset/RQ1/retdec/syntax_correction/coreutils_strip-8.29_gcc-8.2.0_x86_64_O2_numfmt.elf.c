#include "decompile_retdec.h"
// Address range: 0x401b40 - 0x401b45
int64_t function_401b40(void) {
    // 0x401b40
    abort();
    // UNREACHABLE
}
// Address range: 0x401b45 - 0x401b4a
int64_t function_401b45(void) {
    // 0x401b45
    abort();
    // UNREACHABLE
}
// Address range: 0x401b4a - 0x401b4f
int64_t function_401b4a(void) {
    // 0x401b4a
    abort();
    // UNREACHABLE
}
// Address range: 0x401b4f - 0x401b54
int64_t function_401b4f(void) {
    // 0x401b4f
    abort();
    // UNREACHABLE
}
// Address range: 0x401b54 - 0x401b59
int64_t function_401b54(void) {
    // 0x401b54
    abort();
    // UNREACHABLE
}
// Address range: 0x401b59 - 0x401b5e
int64_t function_401b59(void) {
    // 0x401b59
    abort();
    // UNREACHABLE
}
// Address range: 0x401b60 - 0x4028d0
int64_t function_401b60(int64_t a1, int64_t a2) {
    // 0x401b60
    function_405970(a2);
    char * locale = setlocale(LC_ALL, (char *)&g21); // 0x401b86
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    char * v1 = nl_langinfo(0x10000); // 0x401bac
    g57 = v1;
    char * str3; // 0x401b60
    if (v1 == NULL) {
        // 0x401ca0
        g57 = (char *)&g2;
        str3 = (char *)&g2;
        goto lab_0x401bca;
    } else {
        // 0x401bc1
        str3 = v1;
        if (*v1 == 0) {
            // 0x401ca0
            g57 = (char *)&g2;
            str3 = (char *)&g2;
            goto lab_0x401bca;
        } else {
            goto lab_0x401bca;
        }
    }
  lab_0x4023c0:;
    // 0x4023c0
    int64_t v2; // 0x401b60
    int64_t v3 = v2 + 1;
    int64_t v4; // 0x401b60
    int64_t str = v3 + v4; // 0x401b60
    int64_t v5 = v3; // 0x401b60
    goto lab_0x4023c0_2;
  lab_0x401f60:;
    int64_t v11 = g37; // 0x401f70
    int64_t v12 = function_4053b0("--round", (int64_t)g91, g9, (int64_t *)&g8, 4, v11); // 0x401f83
    g35 = *(int32_t *)(4 * v12 + (int64_t)&g8);
    int64_t v13; // 0x401b60
    int64_t v14 = v13; // 0x401f95
    int64_t v15 = v11; // 0x401f95
    goto lab_0x401bf0;
  lab_0x401bf0:;
    int64_t v16 = v14; // 0x401b60
    int64_t v17 = v15; // 0x401b60
    goto lab_0x401bf0_2;
  lab_0x401e87:
    // 0x401e87
    g58 = 1;
    int64_t v19; // 0x401b60
    v14 = v19;
    int64_t v18; // 0x401b60
    v15 = v18;
    goto lab_0x401bf0;
  lab_0x401f29:;
    int64_t v31 = function_407590((int64_t)g91); // 0x401f30
    error(1, (int32_t)"invalid header value %s" ^ (int32_t)"invalid header value %s", dcgettext(NULL, "invalid header value %s", 5));
    v13 = v31;
    goto lab_0x401f60;
  lab_0x401bca:;
    uint64_t v21 = a1 & 0xffffffff; // 0x401b68
    g56 = strlen(str3);
    int64_t v32; // 0x401b60
    function_409fa0(0x405490, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v32);
    v16 = (int64_t)locale;
    char * format2; // 0x4028ab
    char * format; // 0x402889
    while (true) {
      lab_0x401bf0_2:
        // 0x401bf0
        v18 = v17;
        v19 = v16;
        int32_t v20 = function_4096e0(v21, a2, "d:z", &g5, 0, v18);
        v13 = v19;
        switch (v20) {
            case -1: {
                goto lab_0x401fdf;
            }
            case 132: {
                goto lab_0x401f60;
            }
            default: {
                if (v20 > 132) {
                    if (v20 == 137) {
                        goto lab_0x401e87;
                    } else {
                        if (v20 > 137) {
                            if (v20 == 139) {
                                // 0x401ef0
                                if (g91 == NULL) {
                                    // 0x401fcf
                                    g59 = 1;
                                    v14 = v19;
                                    v15 = v18;
                                    goto lab_0x401bf0;
                                } else {
                                    int64_t v22 = function_408550((int64_t)g91, 0, 10, &g59, (int64_t *)&g21, v18); // 0x401f12
                                    if ((int32_t)v22 != 0) {
                                        goto lab_0x401f29;
                                    } else {
                                        // 0x401f1b
                                        if (g59 != 0) {
                                            goto lab_0x401bf0;
                                        } else {
                                            goto lab_0x401f29;
                                        }
                                    }
                                }
                            } else {
                                if (v20 < 139) {
                                    // 0x401e80
                                    g55 = 1;
                                    goto lab_0x401e87;
                                } else {
                                    if (v20 != 140) {
                                        if (v20 != 141) {
                                            // 0x401e73
                                            function_404360(1);
                                            // UNREACHABLE
                                        }
                                        int64_t v23 = g37; // 0x401d93
                                        int64_t v24 = function_4053b0("--invalid", (int64_t)g91, g7, (int64_t *)&g6, 4, v23); // 0x401da6
                                        g70 = *(int32_t *)(4 * v24 + (int64_t)&g6);
                                        v14 = v19;
                                        v15 = v23;
                                    } else {
                                        // 0x401cfc
                                        *(int64_t *)&g63 = (int64_t)g91;
                                        v14 = v19;
                                        v15 = v18;
                                    }
                                    goto lab_0x401bf0;
                                }
                            }
                        } else {
                            if (v20 == 134) {
                                // 0x401ed8
                                g68 = 1;
                                v14 = v19;
                                v15 = v18;
                            } else {
                                if (v20 < 134) {
                                    // 0x401ec0
                                    *(int64_t *)&g69 = (int64_t)g91;
                                    v14 = v19;
                                    v15 = v18;
                                } else {
                                    if (v20 != 135) {
                                        if (v20 != 136) {
                                            // 0x401e73
                                            function_404360(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401cbb
                                        if (g90 != 0) {
                                            // 0x40287d
                                            format = dcgettext(NULL, "multiple field specifications", 5);
                                            error(1, (int32_t)"multiple field specifications" ^ (int32_t)"multiple field specifications", format);
                                            // 0x40289f
                                            format2 = dcgettext(NULL, "the delimiter must be a single character", 5);
                                            error(1, (int32_t)"the delimiter must be a single character" ^ (int32_t)"the delimiter must be a single character", format2);
                                            return &g93;
                                        }
                                        // 0x401cc9
                                        function_404b00((int64_t)g91, 1);
                                        v14 = v19;
                                        v15 = v18;
                                    } else {
                                        int64_t v25 = function_407e00((int64_t)g91, 0, 10, (int64_t *)&g65, (int64_t *)&g21); // 0x401c64
                                        if ((int32_t)v25 != 0) {
                                            goto lab_0x402849_2;
                                        }
                                        // 0x401c71
                                        if (g65 == NULL) {
                                            goto lab_0x402849_2;
                                        }
                                        // 0x401c81
                                        v14 = v19;
                                        v15 = v18;
                                        if (g65 < NULL) {
                                            // 0x401c87
                                            g30 = 0;
                                            g65 = (char *)-(int64_t)g65;
                                            v14 = v19;
                                            v15 = v18;
                                        }
                                    }
                                }
                            }
                            goto lab_0x401bf0;
                        }
                    }
                } else {
                    if (v20 == 122) {
                        // 0x401eb0
                        *(char *)&g28 = 0;
                        v14 = v19;
                        v15 = v18;
                    } else {
                        if (v20 > 122) {
                            if (v20 == 129) {
                                // 0x401e98
                                g34 = function_4029b0((int64_t)g91);
                                v14 = v19;
                                v15 = v18;
                            } else {
                                if (v20 > 129) {
                                    if (v20 != 130) {
                                        if (v20 != 131) {
                                          lab_0x401e73:
                                            // 0x401e73
                                            function_404360(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401dcb
                                        g33 = function_4029b0((int64_t)g91);
                                        v14 = v19;
                                        v15 = v18;
                                    } else {
                                        int64_t v26 = g37; // 0x401d4b
                                        int64_t v27 = function_4053b0("--to", (int64_t)g91, g11, (int64_t *)&g10, 4, v26); // 0x401d5e
                                        g72 = *(int32_t *)(4 * v27 + (int64_t)&g10);
                                        v14 = v19;
                                        v15 = v26;
                                    }
                                } else {
                                    if (v20 != 128) {
                                        // 0x401e73
                                        function_404360(1);
                                        // UNREACHABLE
                                    }
                                    int64_t v28 = g37; // 0x401e03
                                    int64_t v29 = function_4053b0("--from", (int64_t)g91, g13, (int64_t *)&g12, 4, v28); // 0x401e16
                                    g74 = *(int32_t *)(4 * v29 + (int64_t)&g12);
                                    v14 = v19;
                                    v15 = v28;
                                }
                            }
                        } else {
                            if (v20 == -130) {
                                // 0x4026de
                                function_404360(0);
                                // UNREACHABLE
                            }
                            if (v20 != 100) {
                                if (v20 == -131) {
                                    // 0x401fa0
                                    function_407a10((int64_t)g49, "numfmt", "GNU coreutils", (int64_t)g36, "Assaf Gordon", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401e73;
                            }
                            char v30 = *g91; // 0x401e47
                            if (v30 != 0) {
                                // 0x401e4e
                                if (*(char *)((int64_t)g91 + 1) != 0) {
                                    // 0x40289f
                                    format2 = dcgettext(NULL, "the delimiter must be a single character", 5);
                                    error(1, (int32_t)"the delimiter must be a single character" ^ (int32_t)"the delimiter must be a single character", format2);
                                    return &g93;
                                }
                            }
                            // 0x401e58
                            g29 = v30;
                            v14 = v19;
                            v15 = v18;
                        }
                    }
                    goto lab_0x401bf0;
                }
            }
        }
    }
  lab_0x401fdf:;
    // 0x401fdf
    int64_t v33; // 0x401b60
    if (g63 == NULL) {
        goto lab_0x401ff6;
    } else {
        // 0x401fe9
        v33 = v19;
        if (g68 != 0) {
            goto lab_0x402745;
        } else {
            goto lab_0x401ff6;
        }
    }
  lab_0x401ff6:
    if (v19 != 0) {
        // 0x402008
        goto lab_0x402008_2;
    } else {
        // 0x401ffb
        if (g58 != 0) {
            // 0x40254f
            error(0, (int32_t)"failed to set locale" ^ (int32_t)"failed to set locale", dcgettext(NULL, "failed to set locale", 5));
            // 0x402008
            goto lab_0x402008_2;
        } else {
            goto lab_0x402008_2;
        }
    }
  lab_0x402745:
    // 0x402745
    error(1, (int32_t)"--grouping cannot be combined with --format" ^ (int32_t)"--grouping cannot be combined with --format", dcgettext(NULL, "--grouping cannot be combined with --format", 5));
    int64_t v34 = v33; // 0x402762
    goto lab_0x402767;
  lab_0x402008_2:;
    // 0x402008
    int64_t v39; // 0x401b60
    if (g58 == 0) {
        goto lab_0x402065;
    } else {
        // 0x402011
        if ((g72 || g74) != 0) {
            goto lab_0x402065;
        } else {
            int64_t v67 = (int64_t)g63; // 0x402026
            if (g68 != 0) {
                // 0x4025a6
                v39 = v67;
                if (g63 != NULL) {
                    goto lab_0x402075;
                } else {
                    goto lab_0x40237d;
                }
            } else {
                // 0x402033
                if (g65 != NULL) {
                    // 0x4026c2
                    if (g63 != NULL) {
                        goto lab_0x402075;
                    } else {
                        goto lab_0x4021af;
                    }
                } else {
                    // 0x402041
                    v39 = v67;
                    if (g63 != NULL) {
                        goto lab_0x402075;
                    } else {
                        // 0x402046
                        error(0, (int32_t)"no conversion option specified" ^ (int32_t)"no conversion option specified", dcgettext(NULL, "no conversion option specified", 5));
                        goto lab_0x402065;
                    }
                }
            }
        }
    }
  lab_0x402767:
    // 0x402767
    error(1, (int32_t)"grouping cannot be combined with --to" ^ (int32_t)"grouping cannot be combined with --to", dcgettext(NULL, "grouping cannot be combined with --to", 5));
    int64_t v35 = function_407590(v34); // 0x40278c
    error(1, (int32_t)"format %s has too many %% directives" ^ (int32_t)"format %s has too many %% directives", dcgettext(NULL, "format %s has too many %% directives", 5));
    int64_t v36 = function_407590(v35); // 0x4027bc
    error(1, (int32_t)"invalid format %s, directive must be %%[0]['][-][N][.][N]f" ^ (int32_t)"invalid format %s, directive must be %%[0]['][-][N][.][N]f", dcgettext(NULL, "invalid format %s, directive must be %%[0]['][-][N][.][N]f", 5));
    int64_t v37 = function_407590(v36); // 0x4027ec
    error(1, (int32_t)"format %s ends in %%" ^ (int32_t)"format %s ends in %%", dcgettext(NULL, "format %s ends in %%", 5));
    // 0x402819
    function_407590(v37);
    error(1, (int32_t)"invalid precision in format %s" ^ (int32_t)"invalid precision in format %s", dcgettext(NULL, "invalid precision in format %s", 5));
  lab_0x402849_2:
    // 0x402849
    function_407590((int64_t)g91);
    error(1, (int32_t)"invalid padding value %s" ^ (int32_t)"invalid padding value %s", dcgettext(NULL, "invalid padding value %s", 5));
    // 0x40287d
    format = dcgettext(NULL, "multiple field specifications", 5);
    error(1, (int32_t)"multiple field specifications" ^ (int32_t)"multiple field specifications", format);
    // 0x40289f
    format2 = dcgettext(NULL, "the delimiter must be a single character", 5);
    error(1, (int32_t)"the delimiter must be a single character" ^ (int32_t)"the delimiter must be a single character", format2);
    return &g93;
  lab_0x402065:;
    int64_t v38 = (int64_t)g63; // 0x402065
    v39 = v38;
    if (g63 == NULL) {
        // 0x4021a2
        if (g68 != 0) {
            // 0x402363
            v34 = v38;
            if (g72 != 0) {
                goto lab_0x402767;
            } else {
                // 0x402370
                if (g58 == 0) {
                    goto lab_0x4021af;
                } else {
                    goto lab_0x40237d;
                }
            }
        } else {
            goto lab_0x4021af;
        }
    } else {
        goto lab_0x402075;
    }
  lab_0x402075:
    // 0x402075
    v4 = v39;
    char * endptr = NULL; // bp-64, 0x402075
    int64_t v40 = 0; // 0x402083
    int64_t v41 = 0; // 0x402083
    while (true) {
        int64_t v42 = v40;
        char v43 = *(char *)(v42 + v4); // 0x40209c
        int64_t v44; // 0x401b60
        if (v43 != 37) {
            // 0x402088
            v44 = 1;
            if (v43 == 0) {
                // break -> 0x4026e5
                break;
            }
        } else {
            // 0x4020a5
            v44 = 2;
            v2 = v42;
            if (*(char *)(v42 + v4 + 1) != 37) {
                goto lab_0x4023c0;
            }
        }
        // 0x402095
        v40 = v44 + v42;
        v41++;
    }
    int64_t v45 = function_407590(v4); // 0x4026e8
    error(1, (int32_t)"format %s has no %% directive" ^ (int32_t)"format %s has no %% directive", dcgettext(NULL, "format %s has no %% directive", 5));
    int64_t v46 = function_407590(v45); // 0x402718
    error(1, (int32_t)"invalid format %s (width overflow)" ^ (int32_t)"invalid format %s (width overflow)", dcgettext(NULL, "invalid format %s (width overflow)", 5));
    v33 = v46;
    goto lab_0x402745;
  lab_0x4021af:;
    uint64_t v47 = (int64_t)g65; // 0x4021af
    if (g66 <= v47) {
        // 0x402359
        function_402bd0(v47);
    }
    // 0x4021c3
    g60 = g65 == NULL == g29 == 128;
    if (g70 != 0) {
        // 0x4021ed
        g31 = 0;
    }
    int64_t v48 = (int64_t)*(int32_t *)0x6102fc; // 0x4021f7
    int64_t v49; // 0x401b60
    if (v21 > v48) {
        int64_t v50 = v48; // 0x40231a
        if (g58 != 0) {
            // 0x40231c
            v50 = v48;
            if (g59 != 0) {
                // 0x402573
                error(0, (int32_t)"--header ignored with command-line input" ^ (int32_t)"--header ignored with command-line input", dcgettext(NULL, "--header ignored with command-line input", 5));
                int64_t v51 = g46; // 0x402592
                v50 = v51;
                if (v21 <= v51) {
                    // 0x402304
                    return 0;
                }
            }
        }
        int64_t v52 = 1; // 0x40232f
        v52 &= function_4041a0(*(int64_t *)((0x100000000 * v50 >> 29) + a2), 1);
        g46 = &g47;
        v49 = v52;
        int64_t v53 = &g47; // 0x402355
        while (v21 > (int64_t)&g47) {
            // 0x402330
            v52 &= function_4041a0(*(int64_t *)((0x100000000 * v53 >> 29) + a2), 1);
            g46 = &g47;
            v49 = v52;
            v53 = &g47;
        }
    } else {
        int64_t v54 = g59; // 0x402206
        char * lineptr = NULL; // bp-72, 0x402217
        endptr = NULL;
        g59 = v54 - 1;
        if (v54 != 0) {
            unsigned char delim = *(char *)&g28; // 0x402268
            int32_t v55 = getdelim(&lineptr, (int32_t *)&endptr, (int32_t)delim, g50); // 0x40227c
            while (v55 >= 0 == (v55 != 0)) {
                // 0x402240
                fputs_unlocked(lineptr, g49);
                int64_t v56 = g59; // 0x402251
                g59 = v56 - 1;
                if (v56 == 0) {
                    // break -> 0x402286
                    break;
                }
                delim = *(char *)&g28;
                v55 = getdelim(&lineptr, (int32_t *)&endptr, (int32_t)delim, g50);
            }
        }
        unsigned char delim2 = *(char *)&g28; // 0x4022bf
        int32_t v57 = getdelim(&lineptr, (int32_t *)&endptr, (int32_t)delim2, g50); // 0x4022d3
        int64_t v58 = 1; // 0x4022db
        if (v57 >= 0 == (v57 != 0)) {
            int64_t v59 = (int64_t)lineptr; // 0x402290
            unsigned char v60 = *(char *)&g28; // 0x40229a
            char * v61 = (char *)((int64_t)v57 - 1 + v59); // 0x4022a1
            char v62 = *v61; // 0x4022a1
            int64_t v63 = v59; // 0x4022aa
            if ((int32_t)v62 == (int32_t)v60) {
                // 0x4022ac
                *v61 = 0;
                v63 = (int64_t)lineptr;
            }
            int64_t v64 = function_4041a0(v63, (int64_t)((int32_t)v62 == (int32_t)v60)) & 1;
            unsigned char delim3 = *(char *)&g28; // 0x4022bf
            int32_t v65 = getdelim(&lineptr, (int32_t *)&endptr, (int32_t)delim3, g50); // 0x4022d3
            int64_t v66 = v64; // 0x4022db
            v58 = v64;
            while (v65 >= 0 == (v65 != 0)) {
                // 0x402290
                v59 = (int64_t)lineptr;
                v60 = *(char *)&g28;
                v61 = (char *)((int64_t)v65 - 1 + v59);
                v62 = *v61;
                v63 = v59;
                if ((int32_t)v62 == (int32_t)v60) {
                    // 0x4022ac
                    *v61 = 0;
                    v63 = (int64_t)lineptr;
                }
                // 0x4022b4
                v64 = function_4041a0(v63, (int64_t)((int32_t)v62 == (int32_t)v60)) & v66;
                delim3 = *(char *)&g28;
                v65 = getdelim(&lineptr, (int32_t *)&endptr, (int32_t)delim3, g50);
                v66 = v64;
                v58 = v64;
            }
        }
        // 0x4022dd
        v49 = v58;
        if ((*(char *)g50 & 32) != 0) {
            // 0x4025c8
            error(0, *__errno_location(), dcgettext(NULL, "error reading input", 5));
            v49 = v58;
        }
    }
    // 0x4022ed
    if (g58 == 0) {
        // 0x40250a
        if ((int32_t)v49 != 0) {
            // 0x402304
            return 0;
        }
        // 0x402304
        return (g70 | 1) == 3 ? 0 : 2;
    }
    // 0x4022fa
    if ((int32_t)v49 != 0) {
        // 0x402304
        return 0;
    }
    // 0x40252e
    error(0, (int32_t)"failed to convert some of the input numbers" ^ (int32_t)"failed to convert some of the input numbers", dcgettext(NULL, "failed to convert some of the input numbers", 5));
    // 0x402304
    return (g70 | 1) == 3 ? 0 : 2;
  lab_0x40237d:
    // 0x40237d
    if (*nl_langinfo(0x10001) == 0) {
        // 0x402390
        error(0, (int32_t)"grouping has no effect in this locale" ^ (int32_t)"grouping has no effect in this locale", dcgettext(NULL, "grouping has no effect in this locale", 5));
    }
    goto lab_0x4021af;
  lab_0x4023c0_2:;
    int32_t ini_seg_bytes = strspn((char *)str, " "); // 0x4023c8
    int64_t v6 = v5 + (int64_t)ini_seg_bytes; // 0x4023cd
    int64_t v7 = v6 + v4; // 0x4023d0
    char * str2 = (char *)v7;
    v2 = v6;
    int64_t v8; // 0x401b60
    int64_t v9; // 0x401b60
    switch (*str2) {
        case 39: {
            // 0x4024e0
            g68 = 1;
            int64_t v10 = v6 + 1; // 0x4024ea
            v9 = v10 + v4;
            v8 = v10;
            goto lab_0x4023c0_3;
        }
        case 48: {
            goto lab_0x4023c0;
        }
        default: {
            // 0x4023e9
            v9 = v7;
            v8 = v6;
            if (ini_seg_bytes != 0) {
                goto lab_0x4023c0_3;
            } else {
                // 0x4023ee
                *__errno_location() = 0;
                strtol(str2, &endptr, 10);
            }
        }
    }
  lab_0x4023c0_3:
    // 0x4023c0
    str = v9;
    v5 = v8;
    goto lab_0x4023c0_2;
}
// Address range: 0x4028d0 - 0x4028fb
// Address range: 0x4028fb - 0x40291a
int64_t function_4028fb(void) {
    // 0x4028fb
    return &g48;
}
// Address range: 0x40291a - 0x402951
int64_t function_40291a(void) {
    // 0x40291a
    return 0;
}
// Address range: 0x402951 - 0x4029a8
int64_t function_402951(void) {
    // 0x402951
    if (g53 != 0) {
        // 0x4029a7
        int64_t result; // 0x402951
        return result;
    }
    int64_t v1 = g54; // 0x402984
    int64_t result2; // 0x402996
    if (g54 >= ((int64_t)&g25 - (int64_t)&g24 >> 3) - 1) {
        // 0x402996
        result2 = function_4028fb();
        g53 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g25 - (int64_t)&g24 >> 3) - 1) {
        // 0x402986
        v1++;
    }
    // 0x40297a
    g54 = v1;
    // 0x402996
    result2 = function_4028fb();
    g53 = 1;
    return result2;
}
// Address range: 0x4029a8 - 0x4029ad
int64_t function_4029a8(void) {
    // 0x4029a8
    return function_40291a();
}
// Address range: 0x4029b0 - 0x402bc9
int64_t function_4029b0(int64_t str) {
    int32_t len = strlen((char *)str); // 0x4029bb
    char * v1 = NULL; // bp-40, 0x4029c0
    int64_t v2 = (int64_t)"KMGTPEZY"; // 0x4029cb
    int64_t v3 = str; // 0x4029cb
    int64_t v4 = 0; // 0x4029cb
    int64_t v5; // 0x402a44
    int64_t v6; // 0x402a4f
    int64_t dest_mem; // 0x402a59
    int64_t v7; // 0x4029bb
    if (len == 0) {
        goto lab_0x4029ed;
    } else {
        // 0x4029cd
        v7 = len;
        int64_t v8 = v7 - 1;
        char v9 = *(char *)(v8 + str); // 0x4029d4
        v2 = (int64_t)"KMGTPEZY";
        v3 = str;
        v4 = 0;
        if (v9 == 57 || (int32_t)v9 < 57) {
            goto lab_0x4029ed;
        } else {
            // 0x402a40
            v5 = function_407b50(v7 + 2);
            v6 = v5 + v8;
            char * v10 = (char *)v6; // 0x402a55
            v1 = v10;
            dest_mem = (int64_t)memcpy((int64_t *)v5, (int64_t *)str, len);
            if (len == 1 | *v10 != 105) {
                goto lab_0x402a90;
            } else {
                char v11 = *(char *)(v6 - 1); // 0x402a6e
                if (v11 == 57 || (int32_t)v11 < 57) {
                    goto lab_0x402a90;
                } else {
                    // 0x402a7c
                    *v10 = 0;
                    v2 = (int64_t)"KMGTPEZY";
                    v3 = dest_mem;
                    v4 = dest_mem;
                    goto lab_0x4029ed;
                }
            }
        }
    }
  lab_0x402b35:;
    // 0x402b35
    int64_t v12; // 0x4029b0
    uint32_t v13 = (int32_t)v12; // 0x402b35
    int64_t v14; // 0x4029b0
    int64_t v15 = v14; // 0x402b39
    int64_t result; // 0x4029b0
    int3_t v16; // 0x402b1e
    if (v13 >= 19) {
        // 0x402b3b
        v15 = 1;
        if (v13 >= 28) {
            // 0x402bc0
            __frontend_reg_store_fpr(v16, __frontend_reg_load_fpr(v16));
            result = 2;
            return result;
        }
    }
    // 0x402b46
    int64_t v17; // 0x4029b0
    int64_t v18 = v17 + 1;
    int3_t v19; // 0x402b20
    __frontend_reg_store_fpr(v19, 10.0L);
    *(int64_t *)1 = v18;
    __frontend_reg_store_fpr(v16, __frontend_reg_load_fpr(v19) * __frontend_reg_load_fpr(v16));
    int64_t v20; // 0x4029b0
    __frontend_reg_store_fpr(v19, (float80_t)(int32_t)v20);
    __frontend_reg_store_fpr(v16, __frontend_reg_load_fpr(v19) + __frontend_reg_load_fpr(v16));
    int3_t v21 = v16; // 0x402b5e
    int64_t v22 = v15; // 0x402b5e
    if (v18 == 0) {
        // break -> 0x402b9d
        goto lab_0x402b9d_3;
    }
    int64_t v23 = (int64_t)*(char *)v18 + 0xffffffd0; // 0x402b67
    v14 = v15;
    v17 = v18;
    int64_t v24 = v23; // 0x402b6d
    int64_t v25 = v12; // 0x402b6d
    v21 = v16;
    v22 = v15;
    if ((int32_t)v23 >= 10) {
        // break -> 0x402b9d
        goto lab_0x402b9d_3;
    }
    goto lab_0x402b20;
  lab_0x4029ed:;
    int64_t v27 = v3;
    int64_t result2; // bp-32, 0x4029b0
    int64_t v28 = function_408550(v27, (int32_t)(int64_t)&v1, 10, &result2, (int64_t *)v2, v27); // 0x4029fd
    if ((int32_t)v28 == 0) {
        // 0x402a0a
        if (*v1 == 0) {
            // 0x402a17
            if (result2 != 0) {
                // 0x402a25
                free((int64_t *)v4);
                return result2;
            }
        }
    }
    // 0x402ab2
    free((int64_t *)v4);
    function_407590(str);
    char * format = dcgettext(NULL, "invalid unit size: %s", 5); // 0x402ad1
    error(1, (int32_t)"invalid unit size: %s" ^ (int32_t)"invalid unit size: %s", format);
    int64_t v29 = *(int64_t *)1; // 0x402afc
    char * str2 = (char *)v29;
    int3_t v30; // 0x4029b0
    if (v29 == 0) {
        goto lab_0x402b78;
    } else {
        int64_t v31 = (int64_t)*str2 + 0xffffffd0; // 0x402b07
        if ((int32_t)v31 < 10) {
            // 0x402b0f
            v16 = v30 - 1;
            __frontend_reg_store_fpr(v16, 0.0L);
            v19 = v30 - 2;
            v14 = 0;
            v17 = v29;
            v24 = v31;
            v25 = 0;
            while (true) {
              lab_0x402b20:;
                int64_t v26 = v25;
                v20 = v24;
                __frontend_reg_store_fpr(v19, 0.0L);
                if (__frontend_reg_load_fpr(v19) != __frontend_reg_load_fpr(v16)) {
                    // 0x402bb0
                    v12 = v26 + 1 & 0xffffffff;
                    goto lab_0x402b35;
                } else {
                    // 0x402b31
                    v12 = v26;
                    if ((int32_t)v20 != 0) {
                        // 0x402bb0
                        v12 = v26 + 1 & 0xffffffff;
                        goto lab_0x402b35;
                    } else {
                        goto lab_0x402b35;
                    }
                }
            }
            goto lab_0x402b9d_3;
        } else {
            goto lab_0x402b78;
        }
    }
  lab_0x402b78:
    // 0x402b78
    if (strncmp(str2, g57, g56) != 0) {
        // 0x402ba7
        return 3;
    }
    int3_t v32 = v30 - 1; // 0x402b9b
    __frontend_reg_store_fpr(v32, 0.0L);
    v21 = v32;
    v22 = 0;
    goto lab_0x402b9d_3;
  lab_0x402b9d_3:;
    int3_t v33 = v21;
    if (*format != 0) {
        // 0x402ba2
        __frontend_reg_store_fpr(v33, -__frontend_reg_load_fpr(v33));
    }
    float80_t v34 = __frontend_reg_load_fpr(v33); // 0x402ba4
    *(float80_t *)((int32_t)"invalid unit size: %s" ^ (int32_t)"invalid unit size: %s") = v34;
    result = v22;
    // 0x402ba7
    return result;
  lab_0x402a90:
    // 0x402a90
    v1 = (char *)(v6 + 2);
    *(int16_t *)(v5 + v7) = 66;
    v2 = (int64_t)"KMGTPEZY0";
    v3 = dest_mem;
    v4 = dest_mem;
    goto lab_0x4029ed;
}
// Address range: 0x402bd0 - 0x402bf7
int64_t function_402bd0(int64_t a1) {
    int64_t v1 = a1 + 1; // 0x402bd4
    g66 = v1;
    int64_t result = function_407bb0((int64_t)g67, v1); // 0x402be6
    g67 = (char *)result;
    return result;
}
// Address range: 0x402c00 - 0x4041a0
int64_t function_402c00(int64_t str, uint64_t a2, int64_t a3, int64_t a4) {
    // 0x402c00
    int128_t v1; // 0x402c00
    int128_t v2 = v1;
    int128_t v3 = v1;
    float80_t v4; // 0x402c00
    float80_t v5 = v4;
    if (g89 != 0) {
        int64_t v6 = *(int64_t *)g89; // 0x402c37
        if (v6 != -1) {
            if (v6 <= a2) {
                // 0x402c2d
                if (*(int64_t *)(g89 + 8) >= a2) {
                    goto lab_0x402c76;
                }
            }
            int64_t v7 = g89 + 16; // 0x402c33
            int64_t v8 = *(int64_t *)v7; // 0x402c37
            while (v8 != -1) {
                int64_t v9 = v7;
                if (v8 <= a2) {
                    // 0x402c2d
                    if (*(int64_t *)(v9 + 8) >= a2) {
                        goto lab_0x402c76;
                    }
                }
                // 0x402c33
                v7 = v9 + 16;
                v8 = *(int64_t *)v7;
            }
        }
        // 0x402c40
        fputs_unlocked((char *)str, g49);
        // 0x402c54
        return 1;
    }
    if (a2 != 1) {
        // 0x402c40
        fputs_unlocked((char *)str, g49);
        // 0x402c54
        return 1;
    }
  lab_0x402c76:;
    // 0x402c76
    int64_t v10; // 0x402c00
    if (g69 != NULL) {
        int32_t len = strlen((char *)str); // 0x402c85
        int32_t len2 = strlen(g69); // 0x402c90
        if (len > len2) {
            char * str2 = (char *)((int64_t)len + str - (int64_t)len2); // 0x402ca6
            if (strcmp(g69, str2) != 0) {
                if (g55 != 0) {
                    // 0x403447
                    fwrite((int64_t *)"no valid suffix found\n", 1, 22, g52);
                    v10 = (int64_t)g52;
                }
            } else {
                // 0x402cba
                *str2 = 0;
                if (g55 != 0) {
                    int64_t v11 = function_407590((int64_t)g69); // 0x4035d7
                    __fprintf_chk(g52, 1, "trimming suffix %s\n", (char *)v11);
                    v10 = v11;
                }
            }
        }
    }
    // 0x402cc8
    int64_t v12; // 0x402c00
    char v13 = *(char *)&v12; // 0x402cc8
    int64_t v14 = str; // 0x402ccf
    int64_t v15 = 0; // 0x402ccf
    if (v13 != 0) {
        int16_t * v16 = *__ctype_b_loc(); // 0x402cdd
        char v17 = v13; // 0x402ce0
        int64_t v18 = str; // 0x402ce0
        int64_t v19 = v18; // 0x402cf9
        while (*(char *)(2 * (int64_t)v17 + (int64_t)v16) % 2 != 0) {
            // 0x402ce8
            v18++;
            v17 = *(char *)v18;
            v19 = v18;
            if (v17 == 0) {
                // break -> 0x402cfb
                break;
            }
            v19 = v18;
        }
        // 0x402cfb
        v14 = v19;
        v15 = str - v19 & 0xffffffff;
    }
    // 0x402d01
    int64_t v20; // 0x402c00
    int64_t v21; // 0x402c00
    int32_t v22; // 0x402c00
    float32_t v23; // bp-360, 0x402c00
    int80_t v24; // 0x402c00
    if (g60 == 0) {
        goto lab_0x402fcd;
    } else {
        // 0x402d0f
        if (a2 > 1 || v15 != 0) {
            uint64_t len3 = (int64_t)strlen((char *)str); // 0x403133
            g65 = (char *)len3;
            if (g66 <= len3) {
                // 0x40314c
                function_402bd0(len3);
            }
        } else {
            // 0x402d21
            g65 = NULL;
        }
        // 0x402d2c
        if (g55 != 0) {
            // 0x402fae
            __fprintf_chk(g52, 1, "setting Auto-Padding to %ld characters\n", (int32_t)(int64_t)g65);
            goto lab_0x402fcd;
        } else {
            // 0x402d39
            v23 = (int32_t)__asm_movss(__asm_pxor(v2, v2));
            v24 = v3;
            v22 = g74;
            v21 = v10;
            v20 = g74 < 5 ? 1024 : 1000;
            goto lab_0x402d64;
        }
    }
  lab_0x402fcd:;
    int64_t v25 = g74; // 0x402fcd
    int128_t v26 = __asm_pxor(v3, v3); // 0x402fd3
    int64_t v27 = 0; // bp-264, 0x402fde
    v23 = (int32_t)__asm_movss(v26);
    int80_t v28 = v26;
    v24 = v28;
    v22 = g74;
    v21 = v25;
    v20 = (-(int32_t)((int32_t)&g73 < 2) & 24) + 1000;
    if (g55 != 0) {
        int64_t v29 = function_407570(1, (int64_t *)g57, (int64_t)&g73, v25); // 0x40301c
        int64_t v30 = function_407570(0, (int64_t *)v14, (int64_t)&g73, v25); // 0x403029
        __fprintf_chk(g52, 1, "simple_strtod_human:\n  input string: %s\n  locale decimal-point: %s\n  MAX_UNSCALED_DIGITS: %d\n", (char *)v30, (char *)v29, 18);
        v24 = v28;
        v22 = g74;
        v21 = v30;
        v20 = (-(int32_t)((int32_t)&g73 < 2) & 24) + 1000;
    }
    goto lab_0x402d64;
  lab_0x402d64:;
    int64_t v31 = &v23; // 0x402c10
    char v32 = *(char *)v14; // 0x402d66
    int64_t str3 = v14 + (int64_t)(v32 == 45);
    v12 = &v27;
    v27 = str3;
    int64_t v33 = str3 & 0xffffffff; // 0x402d96
    uint32_t v34 = (int32_t)str3; // 0x402d98
    int64_t v35; // 0x402c00
    int64_t v36; // 0x402c00
    int64_t v37; // 0x402c00
    int64_t v38; // 0x402c00
    float80_t v39; // 0x402c00
    if (v34 < 2) {
        // 0x402da1
        v12 = str3;
        v35 = 0;
        if (strncmp((char *)str3, g57, g56) == 0) {
            int64_t v40 = str3 + (int64_t)g56; // 0x403063
            v27 = v40;
            char v41 = *(char *)v40; // 0x403072
            int64_t v42 = v41 == 45;
            int64_t v43 = v40 + v42;
            int64_t v44; // bp-256, 0x402c00
            v12 = &v44;
            v44 = v43;
            if (v41 == 45) {
                goto lab_0x4036e4;
            } else {
                // 0x4030fb
                v27 = v43;
                v39 = v4 + (v32 == 45 ? -v5 : v5);
                v35 = v42;
                goto lab_0x402dca;
            }
        } else {
            goto lab_0x402dca;
        }
    } else {
        // 0x4031b3
        g94 = v33;
        v38 = (int64_t)"value too large to be converted: %s";
        v37 = v33;
        v36 = 0;
        switch (v34) {
            case 2: {
                goto lab_0x4034ed;
            }
            case 3: {
                goto lab_0x4036e4;
            }
            case 4: {
                // 0x4035fc
                v38 = (int64_t)"rejecting suffix in input: %s (consider using --from)";
                v37 = v33;
                v36 = 0;
                goto lab_0x4034ed;
            }
            case 5: {
                // 0x403551
                v38 = (int64_t)"invalid suffix in input: %s";
                v37 = v33;
                v36 = 0;
                goto lab_0x4034ed;
            }
            case 6: {
                // 0x40361a
                v38 = (int64_t)"missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
                v37 = v33;
                v36 = 0;
                goto lab_0x4034ed;
            }
            default: {
                // 0x403687
                v38 = 0;
                v37 = v33;
                v36 = 0;
                goto lab_0x4034ed;
            }
        }
    }
  lab_0x402dca:;
    int64_t v45 = v21; // 0x402dd1
    if (g55 != 0) {
        // 0x403414
        v12 = (int64_t)g52;
        __fprintf_chk(g52, 1, "  parsed numeric value: %Lf\n  input precision = %d\n", (float80_t)(int80_t)v1, v35);
        v45 = v35;
    }
    int64_t v46 = v27; // 0x402dd7
    unsigned char v47 = *(char *)v46; // 0x402ddc
    int64_t v48; // 0x402c00
    int64_t v49; // 0x402c00
    int64_t v50; // 0x402c00
    int64_t v51; // 0x402c00
    int64_t v52; // 0x402c00
    int64_t v53; // 0x402c00
    int64_t v54; // 0x402c00
    int64_t v55; // 0x402c00
    int64_t v56; // 0x402c00
    int64_t v57; // 0x402c00
    int64_t v58; // 0x402c00
    int64_t v59; // 0x402c00
    int64_t v60; // 0x402c00
    int64_t v61; // 0x402c00
    if (v47 == 0) {
        // 0x4033f8
        v38 = (int64_t)"missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
        v37 = 6;
        v36 = v35;
        if (v22 == 4) {
            goto lab_0x4034ed;
        } else {
            // 0x403403
            v57 = v45;
            v60 = g55;
            v55 = v20;
            v61 = v31;
            v53 = v33;
            v52 = 0;
            v48 = str;
            v49 = v14;
            v50 = v35;
            goto lab_0x402eb4;
        }
    } else {
        int16_t * v62 = *__ctype_b_loc(); // 0x402df6
        v58 = v47;
        if (*(char *)(2 * v58 + (int64_t)v62) % 2 != 0) {
            int64_t v63; // 0x402c00
            v27 = v63;
            int64_t v64; // 0x402df6
            while (*(char *)(2 * (int64_t)*(char *)v63 + v64) % 2 != 0) {
                int64_t v65 = v63;
                v27 = v65;
                unsigned char v66 = *(char *)v65; // 0x402e05
                int64_t v67 = v66;
                int64_t v68 = v65 + 1; // 0x402e10
                unsigned char v69 = *(char *)(2 * v67 + v64); // 0x402e14
                v63 = v68;
            }
        }
        // 0x402e1a
        v12 = (int64_t)"KMGTPEZY";
        uint32_t c = (int32_t)v47; // 0x402e22
        v38 = (int64_t)"invalid suffix in input: %s";
        v37 = 5;
        v36 = v35;
        if (strchr("KMGTPEZY", c) == NULL) {
            goto lab_0x4034ed;
        } else {
            // 0x402e34
            v38 = (int64_t)"rejecting suffix in input: %s (consider using --from)";
            v37 = 4;
            v36 = v35;
            if (v22 == 0) {
                goto lab_0x4034ed;
            } else {
                int64_t v70 = v46 + 1;
                uint32_t v71 = c % 256 - 69; // 0x402e4a
                v51 = 0;
                if ((char)v71 < 22) {
                    uint32_t v72 = *(int32_t *)((4 * (int64_t)v71 & 1020) + (int64_t)&g4); // 0x402e55
                    v51 = v72;
                }
                // 0x402e5d
                v27 = v70;
                switch (v22) {
                    case 1: {
                        int64_t v73 = g55; // 0x403c6d
                        v56 = v58;
                        v59 = v73;
                        v54 = v20;
                        if (*(char *)v70 == 105) {
                            // 0x403de1
                            v27 = v46 + 2;
                            v56 = v58;
                            v59 = v73;
                            v54 = 1024;
                            if (g55 != 0) {
                                // 0x403ffe
                                v12 = (int64_t)g52;
                                __fprintf_chk(g52, 1, "  Auto-scaling, found 'i', switching to base %d\n", 1024);
                                v56 = 1024;
                                v59 = g55;
                                v54 = 1024;
                            }
                        }
                        goto lab_0x402e8b;
                    }
                    case 4: {
                        // 0x40352e
                        v38 = (int64_t)"missing 'i' suffix in input: %s (e.g Ki/Mi/Gi)";
                        v37 = 6;
                        v36 = 0;
                        if (*(char *)v70 != 105) {
                            goto lab_0x4034ed;
                        } else {
                            // 0x403539
                            v27 = v46 + 2;
                            goto lab_0x402e7c;
                        }
                    }
                    default: {
                        goto lab_0x402e7c;
                    }
                }
            }
        }
    }
  lab_0x4034ed:;
    int64_t v74 = v31; // 0x4034f4
    int64_t v75 = v37; // 0x4034f4
    int64_t v76 = str; // 0x4034f4
    int64_t v77 = v36; // 0x4034f4
    if (g70 != 3) {
        // 0x4034fa
        function_407590(v14);
        v12 = g31;
        error(g31, 0, dcgettext(NULL, (char *)v38, 5));
        v74 = v31;
        v75 = v37;
        v76 = str;
        v77 = v36;
    }
    goto lab_0x402f40;
  lab_0x4036e4:
    // 0x4036e4
    v38 = (int64_t)"invalid number: %s";
    v37 = 3;
    v36 = 0;
    goto lab_0x4034ed;
  lab_0x402f40:;
    int64_t v78 = v76;
    int64_t v79 = v74;
    float80_t v80; // 0x402c00
    float80_t v81 = v80;
    float80_t v82; // 0x402c00
    float80_t v83 = v82; // 0x402f56
    if (g34 != 1 || g33 != 1) {
        // 0x402f5c
        *(int64_t *)(v79 + 16) = (int64_t)g33;
        float80_t v84 = g33; // 0x402f77
        v83 = g33 < 0 ? v84 + 18446744073709551616.0L : v84;
    }
    if ((int32_t)v75 >= 2) {
        // 0x402f98
        fputs_unlocked((char *)v78, g49);
        // 0x402c54
        return 0;
    }
    // 0x4031d0
    if (v83 >= -1.18973e+4932L) {
        while (true) {
            // continue -> 0x403210
        }
    }
    int32_t v85 = g32; // 0x4031d0
    uint64_t v86 = v85 != -1 ? (int64_t)v85 : v77; // 0x4031e3
    if (v86 >= 19 && g72 == 0) {
        // 0x403691
        if (g70 != 3) {
            float80_t * v87 = (float80_t *)v79; // 0x4036a4
            *v87 = -1.18973e+4932L;
            char * format = dcgettext(NULL, "value/precision too large to be printed: '%Lg/%lu' (consider using --to)", 5); // 0x4036bc
            *(float80_t *)(v79 - 16) = *v87;
            error(g31, (int32_t)"value/precision too large to be printed: '%Lg/%lu' (consider using --to)" ^ (int32_t)"value/precision too large to be printed: '%Lg/%lu' (consider using --to)", format);
        }
        // 0x402f98
        fputs_unlocked((char *)v78, g49);
        // 0x402c54
        return 0;
    }
    int64_t v88 = v79 + 112; // 0x4032b2
    char * v89 = (char *)v88; // 0x4032b2
    *v89 = 37;
    int64_t v90 = v79 + 113; // 0x4032bc
    int64_t v91 = v90; // 0x4032cb
    if (g68 != 0) {
        // 0x4032cd
        *(char *)v90 = 39;
        v91 = v79 + 114;
    }
    int64_t v92 = v91;
    float80_t v93 = -1.18973e+4932L; // 0x4032e0
    int64_t v94 = v92; // 0x4032e0
    if (g64 != 0) {
        // 0x403656
        v12 = v92;
        float80_t * v95 = (float80_t *)(v79 + 16); // 0x403670
        *v95 = -1.18973e+4932L;
        int32_t v96 = __snprintf_chk((char *)v92, 62, 1, 63, "0%ld", g64); // 0x403674
        v93 = *v95;
        v94 = v92 + (int64_t)v96;
    }
    int64_t v97 = v94;
    float80_t v98 = v93;
    float80_t v99 = v98; // 0x4032ef
    if (g55 != 0) {
        // 0x403627
        v12 = (int64_t)"double_to_human:\n";
        float80_t * v100 = (float80_t *)(v79 + 16); // 0x40363d
        *v100 = v98;
        fwrite((int64_t *)"double_to_human:\n", 1, 17, g52);
        v99 = *v100;
    }
    float80_t v101 = v99;
    int64_t * v102; // 0x402c00
    int64_t v103; // 0x402c00
    int64_t v104; // 0x402c00
    int32_t v105; // 0x402c00
    int64_t v106; // 0x402c00
    int64_t v107; // 0x402c00
    int64_t v108; // 0x402c00
    int64_t v109; // 0x402c00
    int64_t v110; // 0x402c00
    float80_t v111; // 0x402c00
    float80_t * v112; // 0x402c00
    float80_t v113; // 0x402c00
    float80_t v114; // 0x402c00
    float80_t v115; // 0x402c00
    float80_t v116; // 0x402c00
    float80_t v117; // 0x402c00
    float80_t v118; // 0x402c00
    float80_t v119; // 0x402c00
    float80_t v120; // 0x402c00
    float80_t v121; // 0x402c00
    float80_t v122; // 0x402c00
    float80_t v123; // 0x402c00
    float80_t v124; // 0x402c00
    float80_t v125; // 0x402c00
    float80_t v126; // 0x402c00
    float80_t v127; // 0x402c00
    float80_t v128; // 0x403f06
    int64_t v129; // 0x4032ac
    int80_t v130; // 0x402c00
    int80_t v131; // 0x402c00
    int80_t v132; // 0x402c00
    if (g72 == 0) {
        int32_t v133 = v86; // 0x40355e
        int64_t v134; // 0x402c00
        int64_t result; // 0x402c00
        float80_t v135; // 0x402c00
        float80_t v136; // 0x402c00
        float80_t v137; // 0x402c00
        if (v133 == 0) {
            uint16_t v138 = *(int16_t *)(v79 + 78) | 3072;
            *(int16_t *)(v79 + 76) = v138;
            int64_t v139 = v79 + 16;
            *(int64_t *)v139 = (int64_t)(v101 / 9.22337e+18L);
            result = v138;
            v134 = v139;
            v135 = v101;
            v136 = 0.0L;
            v137 = v81;
            if (g35 < 5) {
                // 0x402c54
                return result;
            }
        } else {
            int32_t v140 = v133 - 1; // 0x40356a
            int64_t v141 = v140; // 0x40356a
            float80_t v142 = v101; // 0x40356d
            int32_t v143 = v140; // 0x40356d
            if (v140 == 0) {
                // 0x40406e
                *(int16_t *)(v79 + 76) = *(int16_t *)(v79 + 78) | 3072;
                int64_t v144 = v79 + 16;
                *(int64_t *)v144 = (int64_t)(10.0L * v101 / 9.22337e+18L);
                v134 = v144;
                v135 = v101;
                v136 = 0.0L;
                v137 = v81;
                if (g35 < 5) {
                    int64_t result2 = result;
                    return result2;
                }
            } else {
                float80_t v145 = -1.18973e+4932L * v142; // 0x403580
                int32_t v146 = v143 - 1; // 0x403582
                v142 = v145;
                v143 = v146;
                while (v146 != 0) {
                    // 0x403580
                    v145 = -1.18973e+4932L * v142;
                    v146 = v143 - 1;
                    v142 = v145;
                    v143 = v146;
                }
                float80_t v147 = v81 * v145; // 0x40358b
                float80_t v148 = v147 / 9.22337e+18L; // 0x40359d
                *(int16_t *)(v79 + 76) = *(int16_t *)(v79 + 78) | 3072;
                int64_t v149 = v79 + 16;
                *(int64_t *)v149 = (int64_t)v148;
                result = v141;
                if (g35 < 5) {
                    // 0x402c54
                    return result;
                }
                int32_t v150 = v140; // 0x40371f
                float80_t v151 = v81 * (v147 - 9.22337e+18L * v148); // 0x403720
                v150--;
                float80_t v152 = v151; // 0x403725
                while (v150 != 0) {
                    // 0x403720
                    v151 = v81 * v152;
                    v150--;
                    v152 = v151;
                }
                // 0x403727
                v134 = v149;
                v135 = v151;
                v136 = v151;
                v137 = 0.0L;
            }
        }
        float80_t v153 = v136;
        float80_t v154 = v135;
        float80_t * v155 = (float80_t *)v134;
        int64_t v156; // 0x402c00
        float80_t * v157; // 0x402c00
        float80_t * v158; // 0x402c00
        float80_t v159; // 0x402c00
        float80_t v160; // 0x402c00
        if (g55 == 0) {
            int64_t v161 = v79 - 16; // 0x40379d
            v158 = (float80_t *)v79;
            v157 = (float80_t *)v161;
            v156 = v161;
            v159 = v153;
            v160 = v154;
        } else {
            // 0x403732
            *v155 = v153;
            *(int32_t *)(v79 + 32) = v133;
            int64_t v162 = v79 - 16;
            float80_t * v163 = (float80_t *)v162;
            *v163 = v154;
            float80_t * v164 = (float80_t *)v79;
            *v164 = v154;
            char * v165 = g68 == 0 ? "  no scaling, returning value: %.*Lf\n" : "  no scaling, returning (grouped) value: %'.*Lf\n"; // 0x40376c
            __fprintf_chk(g52, 1, v165);
            v158 = v164;
            v157 = v163;
            v156 = v162;
            v159 = *v155;
            v160 = *v164;
        }
        // 0x403785
        *v155 = v159;
        int64_t v166 = v79 + 176; // 0x403795
        *(int32_t *)v97 = 0x664c2a2e;
        v12 = v166;
        *(char *)(v97 + 4) = 0;
        *v157 = v160;
        *v158 = v160;
        if (__snprintf_chk((char *)v166, 128, 1, 128, v89) < 128) {
            // 0x4037dd
            v112 = v155;
            v131 = v1;
            v110 = v79;
            v106 = v166;
            goto lab_0x4037ea;
        } else {
            int64_t v167 = g72;
            int64_t * v168 = (int64_t *)(v79 - 8); // 0x4037cf
            int64_t * v169 = (int64_t *)v156; // 0x4037cd
            *v158 = v160;
            char * format2 = dcgettext(NULL, "failed to prepare value '%Lf' for printing", 5); // 0x4040fe
            v12 = 1;
            *v168 = v167;
            *v169 = v167;
            *v157 = *v158;
            error(1, (int32_t)"failed to prepare value '%Lf' for printing" ^ (int32_t)"failed to prepare value '%Lf' for printing", format2);
            v115 = 1.0L;
            v126 = v137;
            v57 = 128;
            v60 = (int64_t)format2;
            v55 = v167;
            v61 = v156;
            v53 = v166;
            v52 = v88;
            v48 = *v169;
            v49 = *v168;
            v50 = 0;
            goto lab_0x402eb4;
        }
    } else {
        if ((int32_t)&g71 < 1 || (int32_t)&g71 == 1) {
            int128_t v170 = __asm_movsd(0x4090000000000000); // 0x403cbf
            *(int32_t *)(v79 + 32) = 1024;
            *(int64_t *)(v79 + 16) = __asm_movsd_1(v170);
        } else {
            int128_t v171 = __asm_movsd(0x408f400000000000); // 0x403309
            *(int32_t *)(v79 + 32) = 1000;
            *(int64_t *)(v79 + 16) = __asm_movsd_1(v171);
        }
        int64_t v172 = 0; // 0x40332b
        float80_t v173 = -1.18973e+4932L; // 0x40332b
        v103 = 0;
        if (v101 >= -1.18973e+4932L) {
            float80_t v174 = -1.18973e+4932L;
            bool v175 = false; // 0x403358
            bool v176 = false; // 0x403358
            if (v174 >= 0.0L) {
                v175 = true;
                v176 = false;
                if (v174 <= 0.0L) {
                    v175 = v174 != 0.0L;
                    v176 = true;
                }
            }
            v173 = v174;
            v103 = v172;
            while ((v175 | v176 ? v174 : -v174) >= -1.18973e+4932L) {
                // 0x40334a
                v172 = v172 + 1 & 0xffffffff;
                v174 /= -1.18973e+4932L;
                v175 = false;
                v176 = false;
                if (v174 >= 0.0L) {
                    v175 = true;
                    v176 = false;
                    if (v174 <= 0.0L) {
                        v175 = v174 != 0.0L;
                        v176 = true;
                    }
                }
                v173 = v174;
                v103 = v172;
            }
        }
        float80_t v177 = v173; // 0x403364
        v128 = v173;
        v130 = v1;
        if (g55 != 0) {
            float80_t * v178 = (float80_t *)(v79 + 48); // 0x403ec6
            *v178 = v173;
            int128_t v179 = __asm_movsd(*(int64_t *)(v79 + 16)); // 0x403ed6
            v12 = (int64_t)g52;
            *(float80_t *)(v79 - 16) = v173;
            float80_t * v180 = (float80_t *)(v79 + 32); // 0x403ef2
            *v180 = v173;
            __fprintf_chk(g52, 1, "  scaled value to %Lf * %0.f ^ %u\n");
            v128 = *v178;
            v177 = *v180;
            v130 = v179;
        }
        // 0x40336a
        v129 = g35;
        v111 = v177;
        v107 = g55;
        if (g32 == -1) {
            bool v181 = false; // 0x403e69
            bool v182 = false; // 0x403e69
            if (v111 >= 0.0L) {
                v181 = true;
                v182 = false;
                if (v111 <= 0.0L) {
                    v181 = v111 != 0.0L;
                    v182 = true;
                }
            }
            if ((v181 || v182 ? v111 : -v111) >= 10.0L) {
                goto lab_0x403d0d;
            } else {
                goto lab_0x403e7f;
            }
        } else {
            int64_t v183 = g32; // 0x40336a
            int64_t v184 = 3 * v103 & 0xffffffff; // 0x40337b
            int64_t v185 = v184 - v183; // 0x403380
            int64_t v186 = v185 < 0 == (v185 & v183) < 0 == (v185 != 0) ? v183 : v184; // 0x403383
            v12 = v186 & 0xffffffff;
            int32_t v187 = v186; // 0x403389
            if (v187 == 0) {
                goto lab_0x403d0d;
            } else {
                int32_t v188 = v187 - 1; // 0x403391
                if (v188 == 0) {
                    goto lab_0x403e7f;
                } else {
                    float80_t v189 = v128 * v111; // 0x4033a8
                    int32_t v190 = v188 - 1; // 0x4033aa
                    float80_t v191 = v189; // 0x4033ad
                    int32_t v192 = v190; // 0x4033ad
                    while (v190 != 0) {
                        // 0x4033a8
                        v189 = v128 * v191;
                        v190 = v192 - 1;
                        v191 = v189;
                        v192 = v190;
                    }
                    float80_t v193 = v81 * v189; // 0x4033b3
                    *(int16_t *)(v79 + 76) = *(int16_t *)(v79 + 78) | 3072;
                    float80_t v194 = v193 / 9.22337e+18L; // 0x4033ca
                    int64_t * v195 = (int64_t *)(v79 + 32);
                    *v195 = (int64_t)v194;
                    float80_t v196 = 9.22337e+18L * v194; // 0x4033dc
                    float80_t v197 = v193 - v196; // 0x4033de
                    g95 = v129;
                    v102 = v195;
                    v113 = v196;
                    v127 = v128;
                    v114 = v196;
                    v119 = v197;
                    v122 = 0.0L;
                    v132 = v130;
                    v105 = v188;
                    v108 = v107;
                    v109 = v79;
                    v104 = v103;
                    v116 = v196;
                    v120 = v196;
                    v123 = v128;
                    v117 = v196;
                    v121 = v196;
                    v124 = v128;
                    v118 = v196;
                    v125 = v128;
                    switch (g35) {
                        case 0: {
                            goto lab_0x403a1f;
                        }
                        case 1: {
                            goto lab_0x403c10;
                        }
                        case 2: {
                            goto lab_0x403b7e;
                        }
                        case 3: {
                            // 0x403c25
                            *v195 = (int64_t)v4;
                            v119 = v197;
                            v122 = v128 + v4;
                            v132 = v130;
                            v105 = v188;
                            v108 = v107;
                            v109 = v79;
                            v104 = v103;
                            goto lab_0x403a62;
                        }
                        case 4: {
                            goto lab_0x403bd6;
                        }
                        default: {
                            goto lab_0x403a62;
                        }
                    }
                }
            }
        }
    }
  lab_0x402eb4:;
    int64_t v198 = v50;
    int64_t v199 = v49;
    int64_t v200 = v48;
    int64_t v201 = v53;
    int64_t v202 = v61;
    int64_t v203 = v60;
    float80_t v204 = v126;
    float80_t v205 = v115;
    int64_t v206; // 0x402c00
    int64_t v207; // 0x402c00
    float80_t v208; // 0x402c00
    if ((char)v203 != 0) {
        // 0x403467
        v12 = (int64_t)g52;
        int64_t v209 = v55 & 0xffffffff; // 0x403474
        float80_t * v210 = (float80_t *)(v202 - 16); // 0x403478
        *v210 = v205;
        float80_t * v211 = (float80_t *)(v202 + 16); // 0x403485
        *v211 = v205;
        __fprintf_chk(g52, 1, "  suffix power=%d^%d = %Lf\n", v209, v52, (float80_t)(int80_t)v1);
        float80_t * v212 = (float80_t *)(v202 + 112); // 0x40348e
        float80_t v213 = *v212 * *v211; // 0x4034a0
        *v212 = v213;
        v208 = v213;
        v206 = v209;
        v207 = (int64_t)"  suffix power=%d^%d = %Lf\n";
        if (g55 != 0) {
            // 0x4034b5
            *v210 = v213;
            v12 = (int64_t)g52;
            *(float80_t *)(v202 - 32) = v213;
            __fprintf_chk(g52, 1, "  returning value: %Lf (%LG)\n", (float80_t)(int80_t)v1, (float80_t)v24);
            v208 = v213;
            v206 = v209;
            v207 = (int64_t)"  returning value: %Lf (%LG)\n";
        }
    } else {
        float80_t * v214 = (float80_t *)(v202 + 112); // 0x402ebc
        float80_t v215 = v205 * *v214; // 0x402ec0
        *v214 = v215;
        v208 = v215;
        v206 = v57;
        v207 = v203;
    }
    float80_t v216 = v208;
    int64_t v217 = *(int64_t *)(v202 + 96); // 0x402ed0
    if (v217 == 0) {
        goto lab_0x403160;
    } else {
        // 0x402ede
        if (*(char *)v217 == 0) {
            goto lab_0x403160;
        } else {
            // 0x402ee7
            v82 = v216;
            v80 = v204;
            v74 = v202;
            v75 = 5;
            v76 = v200;
            v77 = v198;
            if (g70 != 3) {
                // 0x402ef5
                function_407570(1, (int64_t *)v217, v207, v206);
                function_407570(0, (int64_t *)v199, v207, v206);
                v12 = g31;
                error(g31, (int32_t)"invalid suffix in input %s: %s" ^ (int32_t)"invalid suffix in input %s: %s", dcgettext(NULL, "invalid suffix in input %s: %s", 5));
                v82 = v216;
                v80 = v204;
                v74 = v202;
                v75 = 5;
                v76 = v200;
                v77 = v198;
            }
            goto lab_0x402f40;
        }
    }
  lab_0x403160:
    // 0x403160
    v82 = v216;
    v80 = v204;
    v74 = v202;
    v75 = v201;
    v76 = v200;
    v77 = v198;
    if ((int32_t)v201 == 1 && g58 != 0) {
        // 0x403176
        function_407590(v199);
        v12 = 0;
        error(0, (int32_t)"large input value %s: possible precision loss" ^ (int32_t)"large input value %s: possible precision loss", dcgettext(NULL, "large input value %s: possible precision loss", 5));
        v82 = v216;
        v80 = v204;
        v74 = v202;
        v75 = v201;
        v76 = v200;
        v77 = v198;
    }
    goto lab_0x402f40;
  lab_0x402e7c:
    // 0x402e7c
    v56 = v58;
    v59 = g55;
    v54 = v20;
    goto lab_0x402e8b;
  lab_0x4037ea:;
    float80_t v367 = *v112;
    float80_t v328 = v367; // 0x4037f4
    int80_t v329 = v131; // 0x4037f4
    char v330 = g55; // 0x4037f4
    int64_t v331 = v110; // 0x4037f4
    int64_t v332 = v106; // 0x4037f4
    char * v333 = g69; // 0x4037f4
    float80_t v229 = v367; // 0x4037f4
    int80_t v231 = v131; // 0x4037f4
    char v227 = g55; // 0x4037f4
    int64_t v225 = v110; // 0x4037f4
    int64_t v226 = v106; // 0x4037f4
    if (g69 == NULL) {
        goto lab_0x40384a;
    } else {
        goto lab_0x4037f6;
    }
  lab_0x403d0d:;
    float80_t v368 = v111 / 9.22337e+18L; // 0x403d1e
    *(int16_t *)(v79 + 76) = *(int16_t *)(v79 + 78) | 3072;
    int64_t * v369 = (int64_t *)(v79 + 32);
    *v369 = (int64_t)v368;
    float80_t v370 = v111 - 9.22337e+18L * v368; // 0x403d3a
    g96 = v129;
    float80_t v364 = v370; // 0x403d49
    float80_t v365 = v128; // 0x403d49
    float80_t v366 = v370; // 0x403d49
    int64_t v276; // 0x402c00
    int64_t v274; // 0x402c00
    int64_t v275; // 0x402c00
    float80_t v270; // 0x402c00
    float80_t v271; // 0x402c00
    float80_t v337; // 0x402c00
    float80_t v266; // 0x402c00
    float80_t v272; // 0x402c00
    int80_t v273; // 0x402c00
    switch (g35) {
        case 0: {
            // 0x403d60
            v12 = 0;
            v102 = v369;
            v113 = v81;
            v266 = v128;
            v127 = v370;
            goto lab_0x403a1f;
        }
        case 1: {
            // 0x403d57
            v12 = 0;
            v118 = v81;
            v337 = v128;
            v125 = v370;
            goto lab_0x403c10;
        }
        case 2: {
            // 0x403d50
            v12 = 0;
            v116 = v370;
            v120 = v128;
            v123 = v81;
            goto lab_0x403b7e;
        }
        case 3: {
            // 0x403d70
            *v369 = (int64_t)v81;
            v270 = v81;
            v271 = v128 + v81;
            v272 = v370;
            v273 = v130;
            v274 = v107;
            v275 = v79;
            v276 = v103;
            goto lab_0x403a73;
        }
        case 4: {
            // 0x403d69
            v12 = 0;
            v117 = v370;
            v121 = v128;
            v124 = v81;
            goto lab_0x403bd6;
        }
        default: {
            goto lab_0x40418c;
        }
    }
  lab_0x403e7f:;
    float80_t v371 = v111 * v128; // 0x403e83
    float80_t v372 = v371 / 9.22337e+18L; // 0x403e95
    *(int16_t *)(v79 + 76) = *(int16_t *)(v79 + 78) | 3072;
    int64_t * v373 = (int64_t *)(v79 + 32);
    *v373 = (int64_t)v372;
    float80_t v374 = v371 - 9.22337e+18L * v372; // 0x403eae
    g97 = v129;
    v364 = v111;
    v365 = v374;
    v366 = v81;
    float80_t v279; // 0x402c00
    float80_t v280; // 0x402c00
    switch (g35) {
        case 0: {
            // 0x403a08
            v12 = 1;
            v102 = v373;
            v113 = v111;
            v127 = v374;
            goto lab_0x403a1f;
        }
        case 1: {
            // 0x403bfd
            v12 = 1;
            v118 = v111;
            v125 = v374;
            goto lab_0x403c10;
        }
        case 2: {
            // 0x403b6f
            v12 = 1;
            v116 = v111;
            v120 = v111;
            v123 = v374;
            goto lab_0x403b7e;
        }
        case 3: {
            // 0x403c47
            *v373 = (int64_t)v4;
            v279 = v81;
            v280 = v374 + v4;
            goto lab_0x403c5d;
        }
        case 4: {
            // 0x403bc7
            v12 = 1;
            v117 = v111;
            v121 = v111;
            v124 = v374;
            goto lab_0x403bd6;
        }
        default: {
            goto lab_0x40418c;
        }
    }
  lab_0x402e8b:;
    int32_t v218 = v51; // 0x402e8b
    v115 = 1.0L;
    v57 = v56;
    v60 = v59;
    v55 = v54;
    v61 = v31;
    v53 = v33;
    v52 = v51;
    v48 = str;
    v49 = v14;
    v50 = 0;
    if (v218 != 0) {
        int32_t v219 = v218 - 1; // 0x402e99
        v57 = v56;
        v60 = v59;
        v55 = v54;
        v61 = v31;
        v53 = v33;
        v52 = 1;
        v48 = str;
        v49 = v14;
        v50 = 0;
        if (v219 != 0) {
            float80_t v220; // 0x402c00
            float80_t v221 = v39 * v220; // 0x402ea8
            int32_t v222 = v219 - 1; // 0x402eaa
            v220 = v221;
            int32_t v223 = v222; // 0x402ead
            v115 = v221;
            v57 = v56;
            v60 = v59;
            v55 = v54;
            v61 = v31;
            v53 = v33;
            v52 = v51;
            v48 = str;
            v49 = v14;
            v50 = 0;
            while (v222 != 0) {
                // 0x402ea8
                v221 = v39 * v220;
                v222 = v223 - 1;
                v220 = v221;
                v223 = v222;
                v115 = v221;
                v57 = v56;
                v60 = v59;
                v55 = v54;
                v61 = v31;
                v53 = v33;
                v52 = v51;
                v48 = str;
                v49 = v14;
                v50 = 0;
            }
        }
    }
    goto lab_0x402eb4;
  lab_0x40384a:;
    int64_t v224 = v225; // 0x40384c
    int64_t str4 = v226; // 0x40384c
    if (v227 != 0) {
        float80_t * v228 = (float80_t *)v225; // 0x403851
        *v228 = v229;
        int64_t v230 = function_407590(v226); // 0x403854
        *(float80_t *)(v225 - 16) = *v228;
        __fprintf_chk(g52, 1, "formatting output:\n  value: %Lf\n  humanized: %s\n", (float80_t)v231, (char *)v230);
        v224 = v225;
        str4 = v226;
    }
    goto lab_0x403884;
  lab_0x4037f6:;
    int64_t v354 = v332;
    int64_t v355 = v354;
    int32_t v356 = *(int32_t *)v355; // 0x4037f9
    int64_t v357 = v355 + 4; // 0x4037fb
    int32_t v358 = v356 - 0x1010101 & (v356 ^ -0x7f7f7f80); // 0x403807
    uint32_t v359 = v358 & -0x7f7f7f80; // 0x403809
    while (v359 == 0) {
        // 0x4037f9
        v355 = v357;
        v356 = *(int32_t *)v355;
        v357 = v355 + 4;
        v358 = v356 - 0x1010101 & (v356 ^ -0x7f7f7f80);
        v359 = v358 & -0x7f7f7f80;
    }
    float80_t * v360 = (float80_t *)v331; // 0x403815
    *v360 = v328;
    int64_t v361 = (v358 & 0x8080) == 0 ? v355 + 6 : v357; // 0x403827
    unsigned char v362 = (char)((v358 & 0x8080) == 0 ? v359 / 0x10000 : v359); // 0x40382d
    int64_t v363 = -1 - v362 < v362 ? 4 : 3; // 0x403837
    __strncat_chk((char *)v354, v333, (int32_t)(v354 - v361 + v363) + 127, 128);
    v229 = *v360;
    v231 = v329;
    v227 = v330;
    v225 = v331;
    v226 = v354;
    goto lab_0x40384a;
  lab_0x40418c:;
    float80_t v246 = v364; // 0x40418e
    float80_t v263 = v365; // 0x40418e
    float80_t v248 = v366; // 0x40418e
    int80_t v250 = v130; // 0x40418e
    int64_t v252 = v107; // 0x40418e
    int64_t v254 = v79; // 0x40418e
    int64_t v256 = v103; // 0x40418e
    goto lab_0x403a7d;
  lab_0x403884:;
    int64_t v232 = str4;
    int32_t v233 = *(int32_t *)v232; // 0x40388e
    int64_t v234 = v232 + 4; // 0x403890
    int32_t v235 = v233 - 0x1010101 & (v233 ^ -0x7f7f7f80); // 0x40389c
    uint32_t v236 = v235 & -0x7f7f7f80; // 0x40389e
    while (v236 == 0) {
        // 0x40388e
        v232 = v234;
        v233 = *(int32_t *)v232;
        v234 = v232 + 4;
        v235 = v233 - 0x1010101 & (v233 ^ -0x7f7f7f80);
        v236 = v235 & -0x7f7f7f80;
    }
    uint64_t v237 = (int64_t)g65; // 0x403884
    unsigned char v238 = (char)((v235 & 0x8080) == 0 ? v236 / 0x10000 : v236); // 0x4038c3
    int64_t v239 = -1 - v238 < v238 ? 4 : 3; // 0x4038c6
    uint64_t v240 = ((v235 & 0x8080) == 0 ? v232 + 6 : v234) - v239 - str4; // 0x4038ca
    if (g65 != NULL == v240 < v237) {
        int64_t v241 = v224 + 112; // 0x403e02
        *(int64_t *)v241 = v237;
        function_405530(str4, (int64_t)g67, g66, v241, g30, 2);
        if (g55 != 0) {
            int64_t v242 = function_407590((int64_t)g67); // 0x403e3c
            __fprintf_chk(g52, 1, "  After padding: %s\n", (char *)v242);
        }
    } else {
        int64_t v243 = v240 + 1; // 0x4038db
        v12 = v243;
        if (v243 >= g66) {
            // 0x4038e4
            function_402bd0(v243);
        }
        // 0x4038e9
        strcpy(g67, (char *)str4);
    }
    // 0x4038f8
    v12 = (int64_t)g62;
    struct _IO_FILE * v244 = g49; // 0x403909
    if (g62 != NULL) {
        // 0x40390b
        fputs_unlocked(g62, g49);
        v244 = g49;
    }
    // 0x403917
    fputs_unlocked(g67, v244);
    v12 = (int64_t)g61;
    if (g61 != NULL) {
        // 0x403938
        fputs_unlocked(g61, g49);
    }
    // 0x402c54
    return 1;
  lab_0x403a7d:;
    float80_t v245 = v246; // 0x403a7f
    float80_t v247 = v248; // 0x403a7f
    int80_t v249 = v250; // 0x403a7f
    int64_t v251 = v252; // 0x403a7f
    int64_t v253 = v254; // 0x403a7f
    int64_t v255 = v256; // 0x403a7f
    float80_t v257 = v246; // 0x403a7f
    float80_t v258 = v248; // 0x403a7f
    int80_t v259 = v250; // 0x403a7f
    int64_t v260 = v252; // 0x403a7f
    int64_t v261 = v254; // 0x403a7f
    int64_t v262 = v256; // 0x403a7f
    if (v246 < v263) {
        goto lab_0x403a8f;
    } else {
        goto lab_0x403a85;
    }
  lab_0x403a1f:
    // 0x403a1f
    *v102 = (int64_t)v113;
    float80_t v264 = v113; // 0x403a33
    float80_t v265 = v266; // 0x403a33
    float80_t v267 = v127; // 0x403a33
    goto lab_0x403a4b;
  lab_0x403c10:;
    float80_t v335 = -v118; // 0x403c10
    int64_t v336 = v335; // 0x403c18
    *(int64_t *)(v79 + 64) = v336;
    int64_t v282 = v336; // 0x403c20
    float80_t v286 = v335; // 0x403c20
    float80_t v288 = v337; // 0x403c20
    float80_t v289 = v125; // 0x403c20
    goto lab_0x403b9a;
  lab_0x403b7e:
    // 0x403b7e
    if (v123 >= 0.0L) {
        // 0x403b7e
        v102 = (int64_t *)(v79 + 32);
        v113 = v123;
        v266 = v120;
        v127 = v116;
        goto lab_0x403a1f;
    } else {
        float80_t v338 = -v123; // 0x403b8a
        int64_t v339 = v338; // 0x403b92
        *(int64_t *)(v79 + 64) = v339;
        v282 = v339;
        v286 = v338;
        v288 = v120;
        v289 = v116;
        goto lab_0x403b9a;
    }
  lab_0x403a73:;
    int64_t v340 = v276;
    int64_t v341 = v275;
    int64_t v342 = v274;
    int80_t v343 = v273;
    float80_t v344 = v272;
    float80_t v345 = v271;
    float80_t v346 = v270;
    bool v347 = false; // 0x403a75
    bool v348 = false; // 0x403a75
    if (v346 >= 0.0L) {
        v347 = true;
        v348 = false;
        if (v346 <= 0.0L) {
            v347 = v346 != 0.0L;
            v348 = true;
        }
    }
    v246 = v346;
    v263 = v345;
    v248 = v344;
    v250 = v343;
    v252 = v342;
    v254 = v341;
    v256 = v340;
    int64_t v304; // 0x402c00
    int64_t v300; // 0x402c00
    int64_t v302; // 0x402c00
    float80_t v291; // 0x402c00
    float80_t v296; // 0x402c00
    int80_t v298; // 0x402c00
    if (v347 || v348) {
        goto lab_0x403a7d;
    } else {
        // 0x403cda
        v245 = v346;
        v247 = v344;
        v249 = v343;
        v251 = v342;
        v253 = v341;
        v255 = v340;
        v291 = v346;
        v296 = v345;
        v298 = v343;
        v300 = v342;
        v302 = v341;
        v304 = v340;
        if (v345 <= -v346) {
            goto lab_0x403a85;
        } else {
            goto lab_0x403cec;
        }
    }
  lab_0x403bd6:
    // 0x403bd6
    if (v124 >= 0.0L) {
        // 0x403be0
        *(int64_t *)(v79 + 32) = (int64_t)v121;
        v264 = v124 + 0.5L;
        v265 = v121;
        v267 = v117;
    } else {
        float80_t v349 = v124 - 0.5L; // 0x4040c2
        *(int64_t *)(v79 + 32) = (int64_t)v349;
        v264 = v349;
        v265 = v121;
        v267 = v117;
    }
    goto lab_0x403a4b;
  lab_0x403c5d:;
    // 0x403c5d
    float80_t v278; // 0x402c00
    v270 = v278;
    v271 = v279 / v278;
    v272 = v280;
    v273 = v130;
    v274 = v107;
    v275 = v79;
    v276 = v103;
    goto lab_0x403a73;
  lab_0x403a62:;
    float80_t v350 = v119 * v114; // 0x403a68
    int32_t v351 = v105 - 1; // 0x403a6a
    float80_t v352 = v350; // 0x403a6d
    int32_t v353 = v351; // 0x403a6d
    while (v351 != 0) {
        // 0x403a68
        v350 = v119 * v352;
        v351 = v353 - 1;
        v352 = v350;
        v353 = v351;
    }
    // 0x403a6f
    v270 = v350;
    v271 = v350;
    v272 = v122 / v350;
    v273 = v132;
    v274 = v108;
    v275 = v109;
    v276 = v104;
    goto lab_0x403a73;
  lab_0x403a8f:;
    float80_t v294 = 0.0L; // 0x403a97
    float80_t v295 = v258; // 0x403a97
    int80_t v297 = v259; // 0x403a97
    int64_t v299 = v260; // 0x403a97
    int64_t v301 = v261; // 0x403a97
    int64_t v303 = v262; // 0x403a97
    int32_t v305 = 0; // 0x403a97
    v291 = 0.0L;
    v296 = v258;
    v298 = v259;
    v300 = v260;
    v302 = v261;
    v304 = v262;
    if (v257 != 0.0L) {
        goto lab_0x403cec;
    } else {
        goto lab_0x403aa6;
    }
  lab_0x403a85:
    // 0x403a85
    v257 = v245;
    v258 = v247;
    v259 = v249;
    v260 = v251;
    v261 = v253;
    v262 = v255 + 1 & 0xffffffff;
    goto lab_0x403a8f;
  lab_0x403a4b:;
    float80_t v268 = v264 + v265; // 0x403a4b
    int32_t v269 = v12; // 0x403a4d
    v270 = v264;
    v271 = v268;
    v272 = v267;
    v273 = v130;
    v274 = v107;
    v275 = v79;
    v276 = v103;
    if (v269 == 0) {
        goto lab_0x403a73;
    } else {
        int32_t v277 = v269 - 1; // 0x403a59
        v114 = v264;
        v119 = v268;
        v122 = v267;
        v132 = v130;
        v105 = v277;
        v108 = v107;
        v109 = v79;
        v104 = v103;
        v278 = v264;
        v279 = v268;
        v280 = v267;
        if (v277 == 0) {
            goto lab_0x403c5d;
        } else {
            goto lab_0x403a62;
        }
    }
  lab_0x403b9a:;
    int64_t * v281 = (int64_t *)(v79 + 32); // 0x403ba1
    *v281 = v282;
    float80_t v283 = v282; // 0x403ba6
    bool v284 = false; // 0x403bac
    bool v285 = false; // 0x403bac
    if (v286 <= v283) {
        v284 = true;
        v285 = false;
        if (v286 >= v283) {
            v284 = v286 != v283;
            v285 = true;
        }
    }
    int64_t v287 = -((v282 + (int64_t)!((v284 | v285)))); // 0x403bb6
    *v281 = v287;
    v264 = v287;
    v265 = v288;
    v267 = v289;
    goto lab_0x403a4b;
  lab_0x403cec:;
    float80_t v290 = v291;
    bool v292 = false; // 0x403cfb
    bool v293 = false; // 0x403cfb
    if (v290 >= 10.0L) {
        v292 = true;
        v293 = false;
        if (v290 <= 10.0L) {
            v292 = v290 != 10.0L;
            v293 = true;
        }
    }
    v294 = v290;
    v295 = v296;
    v297 = v298;
    v299 = v300;
    v301 = v302;
    v303 = v304;
    v305 = !(((int32_t)v304 == 0 | v292 | v293));
    goto lab_0x403aa6;
  lab_0x403aa6:;
    int64_t v306 = v303;
    int64_t v307 = v301;
    float80_t v308 = v294;
    float80_t v309 = v308; // 0x403aa8
    float80_t v310 = v308; // 0x403aa8
    int80_t v311 = v297; // 0x403aa8
    if ((char)v299 != 0) {
        float80_t * v312 = (float80_t *)(v307 + 32); // 0x403d8b
        *v312 = v308;
        *(int32_t *)(v307 + 48) = v305;
        int128_t v313 = __asm_movsd(*(int64_t *)(v307 + 16)); // 0x403db1
        *(float80_t *)(v307 - 16) = v308;
        float80_t * v314 = (float80_t *)v307; // 0x403dbc
        *v314 = v308;
        __fprintf_chk(g52, 1, "  after rounding, value=%Lf * %0.f ^ %u\n");
        v309 = *v314;
        v310 = *v312;
        v311 = v313;
    }
    int80_t v315 = v311;
    float80_t v316 = v309;
    *(int32_t *)v97 = 0x664c2a2e;
    *(int16_t *)(v97 + 4) = 0x7325;
    *(char *)(v97 + 6) = 0;
    uint32_t v317 = (int32_t)v306; // 0x403ad4
    int64_t v318 = (int64_t)"(error)"; // 0x403ad8
    if (v317 < 9) {
        int64_t v319 = *(int64_t *)((8 * v306 & 0x7fffffff8) + (int64_t)&g3); // 0x403adf
        v318 = v319;
    }
    // 0x403aeb
    *(float80_t *)(v307 + 16) = v310;
    int64_t v320 = v307 + 176; // 0x403af9
    v12 = v320;
    int64_t v321 = v307 - 16; // 0x403b0d
    int64_t * v322 = (int64_t *)v321; // 0x403b0d
    *v322 = v318;
    *(float80_t *)(v307 - 32) = v316;
    float80_t * v323 = (float80_t *)v307;
    *v323 = v316;
    char * v324 = (char *)v320; // 0x403b25
    uint32_t v325 = __snprintf_chk(v324, 127, 1, 128, (char *)(v307 + 112)); // 0x403b25
    if (v325 < 127) {
        float80_t v326 = v316; // 0x403b3e
        if (g72 == 4 == (v317 != 0)) {
            // 0x403fcc
            *v323 = v316;
            __strncat_chk(v324, "i", 127 - v325, 128);
            v326 = *v323;
        }
        // 0x403b49
        if (g55 != 0) {
            // 0x403f13
            *v323 = v326;
            int64_t v327 = function_407590(v320); // 0x403f19
            __fprintf_chk(g52, 1, "  returning value: %s\n", (char *)v327);
            v112 = v323;
            v131 = v315;
            v110 = v307;
            v106 = v320;
            goto lab_0x4037ea;
        } else {
            // 0x403b58
            v328 = v326;
            v329 = v315;
            v330 = g55;
            v331 = v307;
            v332 = v320;
            v333 = g69;
            v224 = v307;
            str4 = v320;
            if (g69 != NULL) {
                goto lab_0x4037f6;
            } else {
                goto lab_0x403884;
            }
        }
    } else {
        char * format3 = dcgettext(NULL, "failed to prepare value '%Lf' for printing", 5); // 0x40414a
        float80_t v334 = *v323; // 0x40414f
        *(int64_t *)(v307 - 8) = 128;
        *v322 = 128;
        *(float80_t *)v321 = v334;
        error(1, (int32_t)"failed to prepare value '%Lf' for printing" ^ (int32_t)"failed to prepare value '%Lf' for printing", format3);
        v114 = v334;
        v119 = v295;
        v122 = 0.0L;
        v132 = v315;
        v105 = &g93;
        v108 = 128;
        v109 = v321;
        v104 = v306;
        goto lab_0x403a62;
    }
}
// Address range: 0x4041a0 - 0x40435e
int64_t function_4041a0(int64_t a1, int64_t a2) {
    int32_t v1 = g29; // 0x4041c7
    int64_t v2 = 1; // 0x4041c7
    int64_t v3 = 0; // 0x4041c7
    int64_t v4 = a1; // 0x4041c7
    char * v5; // 0x4041a0
    int64_t v6; // 0x4041a0
    int64_t v7; // 0x4041a0
    char v8; // 0x4041a0
    int64_t v9; // 0x4041a0
    int64_t v10; // 0x4041a0
    int64_t v11; // 0x4041a0
    int64_t v12; // 0x4041a0
    int64_t v13; // 0x4041a0
    int64_t v14; // 0x4041a0
    int64_t v15; // 0x4041a0
    int64_t v16; // 0x4041a0
    while (true) {
      lab_0x4041d0:
        // 0x4041d0
        v7 = v4;
        v6 = v2;
        int32_t v17 = v1;
        v3++;
        char v18 = *(char *)v7; // 0x4041d4
        if (v17 == 128) {
            // 0x404270
            v13 = v12;
            if (v18 == 0) {
                // break -> 0x404213
                break;
            }
            int64_t v19 = (int64_t)*__ctype_b_loc(); // 0x40427d
            char v20 = v18; // 0x40427d
            int64_t v21 = v7;
            int64_t v22 = v20;
            while (v20 == 10 | *(char *)(2 * v22 + v19) % 2 != 0) {
                int64_t v23 = v21 + 1; // 0x404308
                v20 = *(char *)v23;
                v13 = v22;
                if (v20 == 0) {
                    // break (via goto) -> 0x404213
                    goto lab_0x404213_4;
                }
                v21 = v23;
                v22 = v20;
            }
            unsigned char v24 = *(char *)v21; // 0x404290
            v13 = 0;
            if (v24 == 0) {
                // break -> 0x404213
                break;
            }
            int64_t v25 = v24; // 0x404290
            v9 = v21;
            v14 = v25;
            int64_t v26 = v21; // 0x4042a2
            if (v24 != 10 == *(char *)(2 * v25 + v19) % 2 == 0) {
                int64_t v27 = v26 + 1; // 0x404320
                unsigned char v28 = *(char *)v27; // 0x404324
                int64_t v29 = v28; // 0x404324
                v13 = v29;
                if (v28 == 0) {
                    // break (via goto) -> 0x404213
                    goto lab_0x404213_4;
                }
                // 0x40429b
                v15 = v29;
                v10 = v27;
                v8 = v28;
                v26 = v27;
                while (v28 != 10 == *(char *)(2 * v29 + v19) % 2 == 0) {
                    // 0x404320
                    v27 = v26 + 1;
                    v28 = *(char *)v27;
                    v29 = v28;
                    v13 = v29;
                    if (v28 == 0) {
                        // break (via goto) -> 0x404213
                        goto lab_0x404213_4;
                    }
                    // 0x40429b
                    v15 = v29;
                    v10 = v27;
                    v8 = v28;
                    v26 = v27;
                }
                goto lab_0x4042ac_2;
            } else {
                goto lab_0x4042ac;
            }
        } else {
            // 0x4041e3
            v15 = v18;
            v10 = v7;
            v8 = v18;
            if (v17 == (int32_t)v18) {
                goto lab_0x4042ac_2;
            } else {
                // 0x4041ef
                if (v18 == 0) {
                    // break -> 0x404213
                    break;
                }
                int64_t v30 = v7 + 1; // 0x404208
                char * v31 = (char *)v30;
                char v32 = *v31; // 0x40420c
                if (v32 == 0) {
                    // 0x404213
                    v13 = v32;
                    goto lab_0x404213_4;
                }
                int64_t v33 = v30; // 0x404202
                while (v17 != (int32_t)v32) {
                    // 0x404208
                    v30 = v33 + 1;
                    v31 = (char *)v30;
                    v32 = *v31;
                    if (v32 == 0) {
                        // 0x404213
                        v13 = v32;
                        goto lab_0x404213_4;
                    }
                    // 0x404200
                    v33 = v30;
                }
                // 0x4042b5
                v5 = v31;
                v16 = v32;
                v11 = v30;
                goto lab_0x4042b5;
            }
        }
    }
    goto lab_0x404213_4;
  lab_0x404213_4:;
    int64_t v34 = function_402c00(v7, v3, v13, (int64_t)&g93); // 0x404219
    if ((char)a2 == 0) {
        // 0x404256
        return (char)v34 == 0 ? 0 : v6;
    }
    int64_t v35 = (int64_t)g49; // 0x404230
    unsigned char v36 = *(char *)&g28; // 0x404237
    int64_t * v37 = (int64_t *)(v35 + 40); // 0x40423e
    uint64_t v38 = *v37; // 0x40423e
    if (v38 >= *(int64_t *)(v35 + 48)) {
        // 0x404351
        __overflow(g49, (int32_t)v36);
    } else {
        // 0x40424c
        *v37 = v38 + 1;
        *(char *)v38 = v36;
    }
    // 0x404256
    return (char)v34 == 0 ? 0 : v6;
  lab_0x4042ac:
    // 0x4042ac
    v5 = (char *)v9;
    v16 = v14;
    v11 = v9;
    goto lab_0x4042b5;
  lab_0x4042ac_2:
    // 0x4042ac
    v13 = v15;
    v9 = v10;
    v14 = v15;
    if (v8 == 0) {
        // break -> 0x404213
        goto lab_0x404213_4;
    }
    goto lab_0x4042ac;
  lab_0x4042b5:
    // 0x4042b5
    *v5 = 0;
    int64_t v39 = function_402c00(v7, v3, v16, (int64_t)&g93); // 0x4042be
    int64_t v40 = (int64_t)g49; // 0x4042c3
    int32_t v41 = g29; // 0x4042d1
    int64_t * v42 = (int64_t *)(v40 + 40); // 0x4042db
    uint64_t v43 = *v42; // 0x4042db
    int64_t v44 = v41 != 128 ? (int64_t)v41 : 32; // 0x4042e4
    if (v43 >= *(int64_t *)(v40 + 48)) {
        // 0x404340
        __overflow(g49, (int32_t)v44 % 256);
        v1 = g29;
    } else {
        // 0x4042ed
        *v42 = v43 + 1;
        *(char *)v43 = (char)v44;
        v1 = v41;
    }
    // 0x4042f8
    v12 = v43;
    v2 = (char)v39 == 0 ? 0 : v6;
    v4 = v11 + 1;
    goto lab_0x4041d0;
}
// Address range: 0x404360 - 0x404a0d
int64_t function_404360(int64_t a1) {
    int32_t status = a1; // 0x404376
    if (status != 0) {
        // 0x40437a
        __fprintf_chk(g52, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40439f
        exit(status);
        // UNREACHABLE
    }
    // 0x4043a6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [NUMBER]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Reformat NUMBER(s), or the numbers from standard input if none are specified.\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --debug          print warnings about invalid input\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  -d, --delimiter=X    use X instead of whitespace for field delimiter\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --field=FIELDS   replace the numbers in these input fields (default=1)\n                         see FIELDS below\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --format=FORMAT  use printf style floating-point FORMAT;\n                         see FORMAT below for details\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --from=UNIT      auto-scale input numbers to UNITs; default is 'none';\n                         see UNIT below\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --from-unit=N    specify the input unit size (instead of the default 1)\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --grouping       use locale-defined grouping of digits, e.g. 1,000,000\n                         (which means it has no effect in the C/POSIX locale)\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --header[=N]     print (without converting) the first N header lines;\n                         N defaults to 1 if not specified\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --invalid=MODE   failure mode for invalid numbers: MODE can be:\n                         abort (default), fail, warn, ignore\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --padding=N      pad the output to N characters; positive N will\n                         right-align; negative N will left-align;\n                         padding is ignored if the output is wider than N;\n                         the default is to automatically pad if a whitespace\n                         is found\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --round=METHOD   use METHOD for rounding when scaling; METHOD can be:\n                         up, down, from-zero (default), towards-zero, nearest\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --suffix=SUFFIX  add SUFFIX to output numbers, and accept optional\n                         SUFFIX in input numbers\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --to=UNIT        auto-scale output numbers to UNITs; see UNIT below\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --to-unit=N      the output unit size (instead of the default 1)\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "\nUNIT options:\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  none       no auto-scaling is done; suffixes will trigger an error\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  auto       accept optional single/two letter suffix:\n               1K = 1000,\n               1Ki = 1024,\n               1M = 1000000,\n               1Mi = 1048576,\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  si         accept optional single letter suffix:\n               1K = 1000,\n               1M = 1000000,\n               ...\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  iec        accept optional single letter suffix:\n               1K = 1024,\n               1M = 1048576,\n               ...\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "  iec-i      accept optional two-letter suffix:\n               1Ki = 1024,\n               1Mi = 1048576,\n               ...\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "\nFIELDS supports cut(1) style field ranges:\n  N    N'th field, counted from 1\n  N-   from N'th field, to end of line\n  N-M  from N'th to M'th field (inclusive)\n  -M   from first to M'th field (inclusive)\n  -    all fields\nMultiple fields/ranges can be separated with commas\n", 5), g49);
    fputs_unlocked(dcgettext(NULL, "\nFORMAT must be suitable for printing one floating-point argument '%f'.\nOptional quote (%'f) will enable --grouping (if supported by current locale).\nOptional width value (%10f) will pad output. Optional zero (%010f) width\nwill zero pad the number. Optional negative values (%-10f) will left align.\nOptional precision (%.1f) will override the input determined precision.\n", 5), g49);
    __printf_chk(1, dcgettext(NULL, "\nExit status is 0 if all input numbers were successfully converted.\nBy default, %s will stop at the first conversion error with exit status 2.\nWith --invalid='fail' a warning is printed for each conversion error\nand the exit status is 2.  With --invalid='warn' each conversion error is\ndiagnosed, but the exit status is 0.  With --invalid='ignore' conversion\nerrors are not diagnosed and the exit status is 0.\n", 5));
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  $ %s --to=si 1000\n            -> \"1.0K\"\n  $ %s --to=iec 2048\n           -> \"2.0K\"\n  $ %s --to=iec-i 4096\n           -> \"4.0Ki\"\n  $ echo 1K | %s --from=si\n           -> \"1000\"\n  $ echo 1K | %s --from=iec\n           -> \"1024\"\n  $ df -B1 | %s --header --field 2-4 --to=si\n  $ ls -l  | %s --header --field 5 --to=iec\n  $ ls -lh | %s --header --field 5 --from=iec --padding=10\n  $ ls -lh | %s --header --field 5 --from=iec --format %%10f\n", 5));
    int64_t v1 = &g1; // bp-136, 0x4047d8
    bool v2; // 0x404360
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x404870
    int64_t v6 = *(int64_t *)v5; // 0x404874
    int64_t v7 = 7; // 0x40487a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"numfmt";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x404886
        char v11 = *(char *)v9; // 0x404886
        char v12 = v11; // 0x404886
        bool v13 = false; // 0x404886
        while (v10 == v11) {
            // 0x40487c
            v7--;
            int64_t v14 = v9 + v3; // 0x404886
            int64_t v15 = v8 + v3; // 0x404886
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
            // break -> 0x404892
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x404892
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4049a4;
        } else {
            // 0x40498e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4049e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4048f4;
            } else {
                goto lab_0x4049a4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4048f4;
        } else {
            // 0x4048da
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4049e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4048f4;
            } else {
                goto lab_0x4048f4;
            }
        }
    }
  lab_0x4049a4:
    // 0x4049a4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404934
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40439f
    exit(status);
    // UNREACHABLE
  lab_0x4048f4:
    // 0x4048f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x404934
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40439f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x404a10 - 0x404a22
int64_t function_404a10(void) {
    int64_t result = 0xffffffff; // 0x404a19
    int64_t v1; // 0x404a10
    if (0x100000000 * v1 >> 32 >= (v1 & 0xffffffff)) {
        int32_t v2 = v1;
        int32_t v3 = v2 - (int32_t)v1; // 0x404a17
        result = v3 < 0 == ((v3 ^ v2) & (int32_t)(v1 ^ v1)) < 0 == (v3 != 0);
    }
    // 0x404a21
    return result;
}
// Address range: 0x404a30 - 0x404afc
int64_t function_404a30(int64_t a1, int64_t a2) {
    int32_t v1 = g90; // 0x404a3c
    int64_t v2 = v1; // 0x404a3c
    int64_t v3 = g89; // 0x404a54
    int64_t v4 = v2; // 0x404a54
    if (g76 == v2) {
        int64_t v5; // 0x404a30
        int64_t v6; // 0x404a30
        if (g89 == 0) {
            // 0x404ac8
            v5 = 8;
            v6 = 128;
            if (v1 != 0) {
                // 0x404acd
                v5 = v2;
                v6 = 16 * v2;
                if (v1 > -1 != v1 > -1) {
                    // 0x404ae7
                    function_407da0(a1);
                    // UNREACHABLE
                }
            }
        } else {
            if (v1 <= 0xffffffff) {
                // 0x404ae7
                function_407da0(a1);
                // UNREACHABLE
            }
            int64_t v7 = v2 + 1 + v2 / 2; // 0x404a9a
            v5 = v7;
            v6 = 16 * v7;
        }
        // 0x404aa6
        g76 = v5;
        v3 = function_407bb0(g89, v6);
        g89 = v3;
        v4 = g90;
    }
    int64_t result = 16 * v4 + v3; // 0x404a61
    *(int64_t *)result = a1;
    *(int64_t *)(result + 8) = a2;
    g90 = (int32_t)v4 + 1;
    return result;
}
// Address range: 0x404b00 - 0x40509e
int64_t function_404b00(int64_t a1, uint64_t a2) {
    int64_t v1 = a1; // 0x404b1e
    int64_t v2 = 0; // 0x404b1e
    if (a2 % 2 != 0) {
        // 0x404b20
        bool v3; // 0x404b00
        int64_t v4 = v3 ? -1 : 1; // 0x404b2d
        int64_t v5 = (int64_t)&g20; // 0x404b00
        int64_t v6 = a1; // 0x404b00
        int64_t v7 = 2; // 0x404b2d
        unsigned char v8 = *(char *)v6; // 0x404b2d
        char v9 = *(char *)v5; // 0x404b2d
        char v10 = v9; // 0x404b2d
        bool v11 = false; // 0x404b2d
        while (v8 == v9) {
            // 0x404b20
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
        v2 = !((v8 < v12 | v11)) == v8 < v12;
        v1 = v2 + a1;
    }
    int32_t v13 = 1; // 0x404b51
    int64_t v14 = v2; // 0x404b51
    int64_t v15 = v2; // 0x404b51
    int64_t v16 = v2; // 0x404b51
    int64_t v17 = 0; // 0x404b51
    int64_t v18 = 0; // 0x404b51
    int64_t v19 = v1; // 0x404b51
    char * str; // 0x404f23
    int64_t v20; // 0x404b00
    int64_t v21; // 0x404b00
    int64_t v22; // 0x404b00
    char * format; // 0x404b00
    int64_t v23; // 0x404b00
    int64_t v24; // 0x404b00
    uint64_t v25; // 0x404b00
    int32_t v26; // 0x404b00
    int32_t v27; // 0x404b00
    char * format2; // 0x404b00
    char * v28; // 0x404be2
    while (true) {
      lab_0x404be2:
        // 0x404be2
        v22 = v19;
        v21 = v18;
        v25 = v16;
        v23 = v15;
        v24 = v14;
        v28 = (char *)v22;
        char v29 = *v28; // 0x404be2
        if (v29 != 45) {
            // 0x404b60
            v27 = v13;
            if (v29 == 44) {
                goto lab_0x404b8c;
            } else {
                unsigned char v30 = *(char *)(2 * (int64_t)v29 + (int64_t)*__ctype_b_loc()); // 0x404b7c
                if (v29 != 0 == v30 % 2 == 0) {
                    if ((int32_t)v29 >= 58) {
                        // 0x405048
                        function_407590(v22);
                        if ((a2 & 4) == 0) {
                            // 0x405090
                            format2 = dcgettext(NULL, "invalid field value %s", 5);
                            goto lab_0x40506b;
                        } else {
                            // 0x40505f
                            format2 = dcgettext(NULL, "invalid byte/character position %s", 5);
                            goto lab_0x40506b;
                        }
                    }
                    char * v31 = g75; // 0x404dc5
                    if ((char)v17 == 0 || g75 == NULL) {
                        // 0x404e28
                        g75 = v28;
                        v31 = v28;
                    }
                    // 0x404dd1
                    str = v31;
                    if (v25 >= 0x199999999999999a) {
                        goto lab_0x404f23_2;
                    }
                    int64_t v32 = (0x100000000 * (int64_t)v29 - 0x3000000000 >> 32) + 10 * v25; // 0x404dfc
                    v26 = v27;
                    v14 = (char)v23 == 0 ? 1 : v24 & 0xffffffff;
                    v15 = v23;
                    v16 = v32;
                    v20 = 1;
                    v18 = ((char)v23 != 0 ? v23 : v21) & 0xffffffff;
                    if (v32 < v25 || v32 == -1) {
                        goto lab_0x404f23_2;
                    }
                    goto lab_0x404bde;
                } else {
                    goto lab_0x404b8c;
                }
            }
        } else {
            if ((char)v23 != 0) {
                // break -> 0x404fbb
                break;
            }
            char v33 = v24; // 0x404bff
            unsigned char v34 = (char)(v25 == 0) & v33; // 0x404bff
            if (v34 != 0) {
                if ((a2 & 4) == 0) {
                    // 0x404fd8
                    format = dcgettext(NULL, "fields are numbered from 1", 5);
                    goto lab_0x404f0b;
                } else {
                    // 0x404faa
                    format = dcgettext(NULL, "byte/character positions are numbered from 1", 5);
                    goto lab_0x404f0b;
                }
            }
            if (v33 != 0) {
                // 0x404da0
                v26 = v25;
                v14 = v24;
                v15 = v24 & 0xffffffff;
                v16 = 0;
                v20 = v34;
                v18 = v21;
            } else {
                // 0x404c12
                v26 = 1;
                v14 = v24;
                v15 = 1;
                v16 = 0;
                v20 = v24 & 0xffffffff;
                v18 = v21;
            }
            goto lab_0x404bde;
        }
    }
    if ((a2 & 4) == 0) {
        // 0x404fe9
        format = dcgettext(NULL, "invalid field range", 5);
    } else {
        // 0x404fc7
        format = dcgettext(NULL, "invalid byte or character range", 5);
    }
  lab_0x404f0b:
    // 0x404f0b
    error(0, 0, format);
    function_404360(1);
    // UNREACHABLE
  lab_0x404c47_2:;
    // 0x404c47
    int64_t v35; // 0x404b00
    int64_t v36; // 0x404b00
    int64_t v37; // 0x404b00
    int64_t v38; // 0x404b00
    int64_t v39; // 0x404b00
    int64_t v40; // 0x404b00
    if (g90 == 0) {
        // 0x405026
        v40 = (int64_t)"missing list of fields";
        if ((a2 & 4) == 0) {
            goto lab_0x404f04_2;
        } else {
            // 0x405032
            format = dcgettext(NULL, "missing list of byte/character positions", 5);
            goto lab_0x404f0b;
        }
    } else {
        // 0x404c57
        qsort((int64_t *)g89, g90, 16, (int32_t (*)(int64_t *, int64_t *))0x404a10);
        int64_t v41 = g90; // 0x404c70
        v37 = 0;
        v35 = g89;
        v38 = v41;
        v39 = v41;
        v36 = g89;
        if (g90 == 0) {
            goto lab_0x404d11;
        } else {
            goto lab_0x404c89;
        }
    }
  lab_0x404f04_2:
    // 0x404f04
    format = dcgettext(NULL, (char *)v40, 5);
    goto lab_0x404f0b;
  lab_0x404f23_2:
    // 0x404f23
    strspn(str, "0123456789");
    int64_t v42 = function_407de0(); // 0x404f3d
    function_407590(v42);
    char * format3; // 0x404b00
    if ((a2 & 4) == 0) {
        // 0x405015
        format3 = dcgettext(NULL, "field number %s is too large", 5);
        goto lab_0x404f6c;
    } else {
        // 0x404f60
        format3 = dcgettext(NULL, "byte/character offset %s is too large", 5);
        goto lab_0x404f6c;
    }
  lab_0x404b8c:
    if ((char)v23 == 0) {
        if (v25 == 0) {
            if ((a2 & 4) == 0) {
                // 0x404fd8
                format = dcgettext(NULL, "fields are numbered from 1", 5);
                goto lab_0x404f0b;
            } else {
                // 0x405006
                format = dcgettext(NULL, "byte/character positions are numbered from 1", 5);
                goto lab_0x404f0b;
            }
        }
        // 0x404c39
        function_404a30(v25, v25);
        v26 = v27;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v20 = 0;
        v18 = 0;
        if (*v28 == 0) {
            goto lab_0x404c47_2;
        }
        goto lab_0x404bde;
    } else {
        if ((char)v24 != 0) {
            // 0x404d70
            if ((char)v21 == 0) {
                goto lab_0x404bbb;
            } else {
                goto lab_0x404d79;
            }
        } else {
            if ((char)v21 != 0) {
                goto lab_0x404d79;
            } else {
                // 0x404ba6
                v40 = (int64_t)"invalid range with no endpoint: -";
                if (a2 % 2 == 0) {
                    goto lab_0x404f04_2;
                }
                goto lab_0x404bbb;
            }
        }
    }
  lab_0x404bde:
    // 0x404bde
    v13 = v26;
    v17 = v20;
    v19 = v22 + 1;
    goto lab_0x404be2;
  lab_0x404bbb:;
    int32_t v43 = 1;
    function_404a30((int64_t)v43, -1);
    int32_t v44 = v43; // 0x404bc7
    goto lab_0x404bcc;
  lab_0x404d79:;
    uint64_t v86 = (int64_t)v27; // 0x404d79
    v40 = (int64_t)"invalid decreasing range";
    if (v25 < v86) {
        goto lab_0x404f04_2;
    }
    // 0x404d84
    function_404a30(v86, v25);
    v44 = v27;
    goto lab_0x404bcc;
  lab_0x404bcc:
    // 0x404bcc
    v26 = v44;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v20 = 0;
    v18 = 0;
    if (*v28 == 0) {
        goto lab_0x404c47_2;
    }
    goto lab_0x404bde;
  lab_0x40506b:
    // 0x40506b
    error(0, 0, format2);
    function_404360(1);
    // UNREACHABLE
  lab_0x404d11:;
    int64_t v45 = v39; // 0x404d16
    int64_t v46 = v36; // 0x404d16
    int64_t * v47; // 0x404e4f
    if ((a2 & 2) != 0) {
        // 0x404e44
        g89 = 0;
        v47 = (int64_t *)v36;
        uint64_t v48 = *v47; // 0x404e4f
        g90 = 0;
        g76 = 0;
        if (v48 < 2) {
            goto lab_0x404e6e;
        } else {
            // 0x404ee7
            function_404a30(1, v48 - 1);
            goto lab_0x404e6e;
        }
    } else {
        goto lab_0x404d1c;
    }
  lab_0x404c89:;
    int64_t v49 = v37 + 1; // 0x404c89
    int64_t v50 = v49; // 0x404c90
    int64_t v51 = v38; // 0x404c90
    int64_t v52 = v35; // 0x404c90
    int64_t v53 = v49; // 0x404c90
    int64_t v54 = v35; // 0x404c90
    int64_t v55 = v38; // 0x404c90
    if (v49 >= v38) {
        goto lab_0x404c80;
    } else {
        goto lab_0x404c92;
    }
  lab_0x404d1c:;
    int64_t v56 = v45 + 1; // 0x404d1c
    g90 = v56;
    int64_t v57 = function_407bb0(v46, 16 * v56); // 0x404d31
    g89 = v57;
    int64_t result = v57 - 16 + 16 * (int64_t)g90; // 0x404d48
    *(int64_t *)(result + 8) = -1;
    *(int64_t *)result = -1;
    return result;
  lab_0x404c80:
    // 0x404c80
    v37 = v50;
    v35 = v52;
    v38 = v51;
    v39 = v51;
    v36 = v52;
    if (v50 >= v51) {
        goto lab_0x404d11;
    } else {
        goto lab_0x404c89;
    }
  lab_0x404c92:;
    int64_t v58 = v55;
    int64_t v59 = v54;
    int64_t v60 = v53;
    int64_t v61 = 16 * v60; // 0x404c95
    int64_t v62 = v61 - 16; // 0x404c99
    int64_t v63 = v61 + v59; // 0x404c9d
    int64_t v64 = v62 + v59; // 0x404ca1
    uint64_t v65 = *(int64_t *)(v64 + 8); // 0x404ca5
    v50 = v60;
    v51 = v58;
    v52 = v59;
    int64_t v66; // 0x404b00
    int64_t v67; // 0x404b00
    int64_t v68; // 0x404b00
    int64_t v69; // 0x404b00
    int64_t v70; // 0x404b00
    int64_t v71; // 0x404cae
    if (v65 < *(int64_t *)v63) {
        goto lab_0x404c80;
    } else {
        // 0x404cae
        v71 = v61 + 16;
        v67 = v65;
        v70 = v64;
        v68 = v58;
        v69 = v63;
        v66 = v59;
        goto lab_0x404cb8;
    }
  lab_0x404e6e:;
    int64_t v72 = 16 * v39 + v36;
    int64_t v73; // 0x404b00
    if (v39 < 2) {
        goto lab_0x404eab;
    } else {
        // 0x404e88
        v73 = v36 + 16;
        goto lab_0x404e88_2;
    }
  lab_0x404eab:;
    int64_t v74 = *(int64_t *)(v72 - 8); // 0x404eaf
    if (v74 != -1) {
        // 0x404ed5
        function_404a30(v74 + 1, -1);
        goto lab_0x404eba;
    } else {
        goto lab_0x404eba;
    }
  lab_0x404cb8:;
    uint64_t v75 = v67;
    uint64_t v76 = *(int64_t *)(v69 + 8); // 0x404cb8
    *(int64_t *)(v70 + 8) = v76 >= v75 ? v76 : v75;
    memmove((int64_t *)v69, (int64_t *)(v71 + v66), 16 * (int32_t)(v68 - v60) - 16);
    int64_t v77 = g89; // 0x404ce0
    int64_t v78 = (int64_t)g90 - 1; // 0x404ce7
    g90 = v78;
    v50 = v60;
    v51 = v78;
    v52 = v77;
    if (v78 > v60) {
        int64_t v79 = v77 + v62; // 0x404cf7
        int64_t v80 = v77 + v61; // 0x404cfb
        uint64_t v81 = *(int64_t *)(v79 + 8); // 0x404cff
        v67 = v81;
        v70 = v79;
        v68 = v78;
        v69 = v80;
        v66 = v77;
        if (*(int64_t *)v80 > v81) {
            int64_t v82 = v60 + 1; // 0x404c89
            v50 = v82;
            v51 = v78;
            v52 = v77;
            v53 = v82;
            v54 = v77;
            v55 = v78;
            if (v82 >= v78) {
                goto lab_0x404c80;
            } else {
                goto lab_0x404c92;
            }
        } else {
            goto lab_0x404cb8;
        }
    } else {
        goto lab_0x404c80;
    }
  lab_0x404eba:
    // 0x404eba
    free(v47);
    v45 = g90;
    v46 = g89;
    goto lab_0x404d1c;
  lab_0x404e88_2:;
    int64_t v83 = *(int64_t *)v73; // 0x404e8c
    int64_t v84 = *(int64_t *)(v73 - 8) + 1; // 0x404e90
    if (v84 == v83) {
        goto lab_0x404ea2;
    } else {
        // 0x404e99
        function_404a30(v84, v83 - 1);
        goto lab_0x404ea2;
    }
  lab_0x404ea2:;
    int64_t v85 = v73 + 16; // 0x404ea2
    v73 = v85;
    if (v72 != v85) {
        goto lab_0x404e88_2;
    } else {
        goto lab_0x404eab;
    }
  lab_0x404f6c:
    // 0x404f6c
    error(0, 0, format3);
    free((int64_t *)v42);
    function_404360(1);
    // UNREACHABLE
}
// Address range: 0x4050a0 - 0x4050d6
int64_t function_4050a0(void) {
    // 0x4050a0
    g90 = 0;
    g76 = 0;
    free((int64_t *)g89);
    g89 = 0;
    return &g93;
}
// Address range: 0x4050e0 - 0x4050ea
int64_t function_4050e0(void) {
    // 0x4050e0
    return function_404360(1);
}
// Address range: 0x4050f0 - 0x405206
int64_t function_4050f0(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x405111
    int32_t len = strlen(str); // 0x405111
    if (a2 == 0) {
        // 0x4051dd
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x405177
    int64_t v4 = a3; // 0x4050f0
    int64_t v5 = a2; // 0x40517e
    int64_t str4; // 0x4050f0
    int64_t v6; // 0x4050f0
    int32_t v7; // 0x4050f0
    int32_t v8; // 0x4050f0
    int32_t v9; // 0x4050f0
    int64_t v10; // 0x4050f0
    int64_t result; // 0x4050f0
    int32_t v11; // 0x405173
    char * str2; // 0x405192
    while (true) {
        // 0x405187
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x40519b
            result = v6;
            if (len == strlen(str2)) {
                // 0x4051dd
                return result;
            }
            if (v1 == -1) {
                // break -> 0x4051af
                break;
            }
            // 0x405140
            v7 = 1;
            if (a3 != 0) {
                // 0x40514e
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x405177
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
    int64_t v12 = v6 + 1; // 0x4051b3
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x4051ba
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x405187
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x405187
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x40519b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x4051dd
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x4051af
                    break;
                }
                // 0x405140
                v7 = 1;
                if (a3 != 0) {
                    // 0x40514e
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x405177
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
        // 0x4051af
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x4051c8:
    // 0x4051dd
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x405210 - 0x405281
int64_t function_405210(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405210
    char * format; // 0x405210
    if (a3 == -1) {
        // 0x405270
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x405225
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x405234
    int64_t v1; // 0x405210
    function_407570(1, (int64_t *)a1, 5, v1);
    function_407260(0, 8, a2);
    error(0, 0, format);
    return &g93;
}
// Address range: 0x405290 - 0x4053a8
int64_t function_405290(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x4052bd
    fputs_unlocked(v1, g52);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x405330
        int64_t v5; // 0x405337
        int64_t v6; // 0x405357
        while (v3 != 0) {
            // 0x40531b
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x4052e0
                break;
            }
            // 0x40532d
            v4 = v3 + 1;
            v5 = function_407590(v2);
            __fprintf_chk(g52, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x405360
                goto lab_0x405360;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x4052e3
        int64_t v8 = function_407590(v2); // 0x4052ed
        __fprintf_chk(g52, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40530d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x40531b
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x4052e0
                    break;
                }
                // 0x40532d
                v4 = v3 + 1;
                v5 = function_407590(v2);
                __fprintf_chk(g52, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x405360
                    goto lab_0x405360;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x4052e0
            v7 = v3 + 1;
            v8 = function_407590(v2);
            __fprintf_chk(g52, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x405360:;
    int64_t v10 = (int64_t)g52; // 0x405360
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x405367
    uint64_t result = *v11; // 0x405367
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x405390
        return __overflow(g52, 10);
    }
    // 0x405371
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x4053b0 - 0x405420
int64_t function_4053b0(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_4050f0(a2, v2, v1, a5); // 0x4053dc
    int64_t result = v3; // 0x4053e4
    if (v3 < 0) {
        // 0x4053f8
        function_405210((int64_t)a1, a2, v3);
        function_405290(v2, v1, a5);
        result = -1;
    }
    // 0x4053e6
    return result;
}
// Address range: 0x405420 - 0x40546d
int64_t function_405420(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x405420
    if (result == 0) {
        // 0x405461
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x405458
    int32_t n = a4; // 0x405458
    int64_t v1 = result; // 0x40545f
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x405461
        return result;
    }
    int64_t str3 = str2; // 0x40545f
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x405440
    int64_t result2 = 0; // 0x40544d
    while (v2 != 0) {
        // 0x40544f
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x405461
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x405461
    return result2;
}
// Address range: 0x405470 - 0x405478
int64_t function_405470(int64_t a1) {
    // 0x405470
    g78 = a1;
    int64_t result; // 0x405470
    return result;
}
// Address range: 0x405480 - 0x405488
int64_t function_405480(int64_t a1) {
    // 0x405480
    g77 = a1;
    int64_t result; // 0x405480
    return result;
}
// Address range: 0x405490 - 0x40552e
int64_t function_405490(void) {
    // 0x405490
    int32_t * err_num; // 0x4054a6
    if ((int32_t)function_4097e0((int64_t)g49) == 0) {
        goto lab_0x4054bc;
    } else {
        // 0x4054a6
        err_num = __errno_location();
        if (g77 == 0) {
            goto lab_0x4054d3;
        } else {
            // 0x4054b7
            if (*err_num != 32) {
                goto lab_0x4054d3;
            } else {
                goto lab_0x4054bc;
            }
        }
    }
  lab_0x4054bc:;
    int64_t result = function_4097e0((int64_t)g52); // 0x4054c3
    if ((int32_t)result == 0) {
        // 0x4054cc
        return result;
    }
    // 0x40550e
    _exit(g38);
    // UNREACHABLE
  lab_0x4054d3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4054df
    if (g78 == 0) {
        // 0x405519
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4054f3
        error(0, *err_num, "%s: %s", (char *)function_4073e0((int64_t)g78), v1);
    }
    // 0x40550e
    _exit(g38);
    // UNREACHABLE
}
// Address range: 0x405530 - 0x4058cb
int64_t function_405530(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int32_t a5, uint64_t a6) {
    char * str = (char *)a1; // 0x405556
    int32_t len = strlen(str); // 0x405556
    int64_t v1 = len; // 0x405556
    int32_t * v2 = NULL; // 0x405562
    int64_t v3 = a1; // 0x405562
    int64_t v4 = 0; // 0x405562
    int64_t v5 = v1; // 0x405562
    int64_t v6 = v1; // 0x405562
    int64_t v7; // 0x405530
    int64_t result; // 0x405530
    int64_t v8; // 0x405530
    int64_t v9; // 0x405530
    int32_t * v10; // 0x405530
    int32_t v11; // 0x405530
    int64_t v12; // 0x405740
    int64_t * mem; // 0x405714
    if ((a6 & 2) == 0) {
        // 0x4056b0
        v2 = NULL;
        v3 = a1;
        v4 = 0;
        v5 = v1;
        v6 = v1;
        if (__ctype_get_mb_cur_max() < 2) {
            goto lab_0x405576;
        } else {
            int32_t v13 = mbstowcs(NULL, str, 0); // 0x4056cb
            if (v13 != -1) {
                int32_t n = v13 + 1; // 0x405700
                int32_t size = 4 * n; // 0x40570f
                mem = malloc(size);
                if (mem == NULL) {
                    // 0x40582a
                    v2 = (int32_t *)mem;
                    v3 = a1;
                    v4 = 0;
                    v5 = v1;
                    v6 = v1;
                    v10 = NULL;
                    v7 = 0;
                    result = -1;
                    if (a6 % 2 != 0) {
                        goto lab_0x405576;
                    } else {
                        goto lab_0x40564e;
                    }
                } else {
                    int32_t v14 = mbstowcs((int32_t *)mem, str, n); // 0x405732
                    v2 = (int32_t *)mem;
                    v3 = a1;
                    v4 = 0;
                    v5 = v1;
                    v6 = v1;
                    if (v14 == 0) {
                        goto lab_0x405576;
                    } else {
                        // 0x405740
                        v12 = (int64_t)mem;
                        *(int32_t *)((int64_t)size - 4 + v12) = 0;
                        int32_t wc = *(int32_t *)mem; // 0x405751
                        if (wc == 0) {
                            // 0x40583f
                            v9 = wcswidth((int32_t *)mem, n);
                            goto lab_0x405850;
                        } else {
                            int32_t v15 = 0; // 0x405779
                            if (iswprint(wc) == 0) {
                                // 0x40577b
                                *(int32_t *)v12 = 0xfffd;
                                v15 = 1;
                            }
                            int32_t v16 = v15;
                            int64_t v17 = v12 + 4; // 0x405786
                            int32_t v18 = *(int32_t *)v17; // 0x40578a
                            int32_t wc2 = v18; // 0x40578e
                            while (v18 != 0) {
                                int64_t v19 = v17;
                                v15 = v16;
                                if (iswprint(wc2) == 0) {
                                    // 0x40577b
                                    *(int32_t *)v19 = 0xfffd;
                                    v15 = 1;
                                }
                                // 0x405786
                                v16 = v15;
                                v17 = v19 + 4;
                                v18 = *(int32_t *)v17;
                                wc2 = v18;
                            }
                            int64_t v20 = wcswidth((int32_t *)mem, n); // 0x405797
                            v9 = v20;
                            if ((char)v16 == 0) {
                                goto lab_0x405850;
                            } else {
                                // 0x4057aa
                                v8 = v20;
                                v11 = wcstombs(NULL, (int32_t *)mem, 0);
                                goto lab_0x4057c0;
                            }
                        }
                    }
                }
            } else {
                // 0x4056d6
                v2 = NULL;
                v3 = a1;
                v4 = 0;
                v5 = v1;
                v6 = v1;
                v10 = NULL;
                v7 = 0;
                result = -1;
                if (a6 % 2 != 0) {
                    goto lab_0x405576;
                } else {
                    goto lab_0x40564e;
                }
            }
        }
    } else {
        goto lab_0x405576;
    }
  lab_0x405576:;
    int32_t * v21 = v2; // 0x40557d
    int64_t v22 = v3; // 0x40557d
    int64_t v23 = a4; // 0x40557d
    int64_t v24 = v4; // 0x40557d
    int64_t v25 = a4; // 0x40557d
    int32_t * v26 = v2; // 0x40557d
    int64_t v27 = v3; // 0x40557d
    int64_t v28 = v4; // 0x40557d
    int64_t v29 = v5; // 0x40557d
    int64_t v30 = v6; // 0x40557d
    if (v6 <= a4) {
        goto lab_0x40567b;
    } else {
        goto lab_0x405588;
    }
  lab_0x40567b:
    // 0x40567b
    v21 = v26;
    v22 = v27;
    v23 = v30;
    v24 = v28;
    v25 = v29;
    int64_t v31; // 0x405530
    int64_t v32; // 0x405530
    int64_t v33; // 0x405530
    int64_t v34; // 0x405530
    int64_t v35; // 0x405530
    int64_t v36; // 0x405530
    int64_t v37; // 0x405530
    int32_t * v38; // 0x405530
    int32_t * v39; // 0x405530
    int64_t v40; // 0x405530
    int64_t v41; // 0x405530
    if (v30 >= a4) {
        goto lab_0x405588;
    } else {
        int64_t v42 = a4 - v30; // 0x40568e
        *(int64_t *)a4 = v30;
        v38 = v26;
        v40 = v27;
        v36 = v42;
        v31 = v28;
        v34 = v29;
        v39 = v26;
        v41 = v27;
        v37 = 0;
        v32 = v28;
        v33 = v42;
        v35 = v29;
        if (a5 != 0) {
            goto lab_0x405598;
        } else {
            goto lab_0x4055ac;
        }
    }
  lab_0x405588:
    // 0x405588
    *(int64_t *)a4 = v23;
    v38 = v21;
    v40 = v22;
    v36 = 0;
    v31 = v24;
    v34 = v25;
    v39 = v21;
    v41 = v22;
    v37 = 0;
    v32 = v24;
    v33 = 0;
    v35 = v25;
    if (a5 == 0) {
        goto lab_0x4055ac;
    } else {
        goto lab_0x405598;
    }
  lab_0x4055ac:;
    uint64_t v43 = v35;
    int64_t v44 = (a6 & 4) == 0 ? v37 : 0;
    int64_t v45 = (a6 & 8) != 0 ? 0 : v33; // 0x4055c8
    if (a3 != 0) {
        uint64_t v46 = a2 - 1 + a3; // 0x4055d1
        if (v46 > a2 == (v44 != 0)) {
            int64_t v47 = -v44; // 0x4055fb
            int64_t v48 = a2; // 0x405530
            int64_t v49 = v48;
            int64_t v50 = v49 + 1; // 0x4055ed
            *(char *)v49 = 32;
            v48 = v50;
            while (v46 > v50 == (a2 - v50 != v47)) {
                // 0x4055ed
                v49 = v48;
                v50 = v49 + 1;
                *(char *)v49 = 32;
                v48 = v50;
            }
        }
        // 0x405600
        *(char *)a2 = 0;
        uint64_t v51 = v46 - a2; // 0x40560b
        int64_t v52 = v51 > v43 ? v43 : v51; // 0x405611
        int64_t v53 = (int64_t)mempcpy((int64_t *)a2, (int64_t *)v41, (int32_t)v52); // 0x405615
        int64_t v54 = v53; // 0x405620
        if (v45 != 0 == v46 > v53) {
            int64_t v55 = v53 + 1; // 0x405635
            *(char *)v53 = 32;
            v54 = v55;
            while (v46 > v55 == (v45 - v55 != -v53)) {
                int64_t v56 = v55;
                v55 = v56 + 1;
                *(char *)v56 = 32;
                v54 = v55;
            }
        }
        // 0x405648
        *(char *)v54 = 0;
    }
    // 0x40564b
    v10 = v39;
    v7 = v32;
    result = v43 + v44 + v45;
    goto lab_0x40564e;
  lab_0x405598:
    // 0x405598
    v39 = v38;
    v41 = v40;
    v37 = v36;
    v32 = v31;
    v33 = 0;
    v35 = v34;
    if (a5 != 1) {
        int64_t v70 = v36 / 2; // 0x4055a6
        v39 = v38;
        v41 = v40;
        v37 = v36 % 2 + v70;
        v32 = v31;
        v33 = v70;
        v35 = v34;
    }
    goto lab_0x4055ac;
  lab_0x40564e:
    // 0x40564e
    free((int64_t *)v10);
    free((int64_t *)v7);
    return result;
  lab_0x405850:
    // 0x405850
    v26 = (int32_t *)mem;
    v27 = a1;
    v28 = 0;
    v29 = v1;
    v30 = v9;
    v8 = v9;
    v11 = len;
    if (v9 <= a4) {
        goto lab_0x40567b;
    } else {
        goto lab_0x4057c0;
    }
  lab_0x4057c0:;
    int32_t size2 = v11 + 1;
    int64_t * mem2 = malloc(size2); // 0x4057c5
    int64_t v57 = (int64_t)mem2; // 0x4057c5
    if (mem2 == NULL) {
        // 0x4058a0
        v2 = (int32_t *)mem;
        v3 = a1;
        v4 = v57;
        v5 = v1;
        v6 = v8;
        v10 = (int32_t *)mem;
        v7 = v57;
        result = -1;
        if (a6 % 2 != 0) {
            goto lab_0x405576;
        } else {
            goto lab_0x40564e;
        }
    } else {
        int32_t v58 = *(int32_t *)mem; // 0x4057de
        int32_t * v59 = (int32_t *)mem; // 0x4057e8
        int64_t v60 = 0; // 0x4057e8
        if (v58 != 0) {
            int64_t v61 = 0;
            int64_t v62 = v12;
            int32_t v63 = wcwidth(v58); // 0x405812
            int64_t v64; // 0x405530
            if (v63 != -1) {
                // 0x4057f8
                v64 = v63;
            } else {
                // 0x40581c
                *(int32_t *)v62 = 0xfffd;
                v64 = 1;
            }
            int64_t v65 = v64 + v61; // 0x4057fa
            while (v65 <= a4) {
                int64_t v66 = v62 + 4; // 0x405804
                int32_t * v67 = (int32_t *)v66;
                int32_t v68 = *v67; // 0x405808
                v59 = v67;
                v60 = v65;
                if (v68 == 0) {
                    goto lab_0x405878;
                }
                v61 = v65;
                v62 = v66;
                v63 = wcwidth(v68);
                if (v63 != -1) {
                    // 0x4057f8
                    v64 = v63;
                } else {
                    // 0x40581c
                    *(int32_t *)v62 = 0xfffd;
                    v64 = 1;
                }
                // 0x4057fa
                v65 = v64 + v61;
            }
            // 0x405878
            v59 = (int32_t *)v62;
            v60 = v61;
        }
      lab_0x405878:
        // 0x405878
        *v59 = 0;
        int32_t v69 = wcstombs((char *)mem2, (int32_t *)mem, size2); // 0x40588b
        v2 = (int32_t *)mem;
        v3 = v57;
        v4 = v57;
        v5 = v69;
        v6 = v60;
        goto lab_0x405576;
    }
}
// Address range: 0x4058d0 - 0x40596d
int64_t function_4058d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    uint64_t v1 = a2 + 1; // 0x4058f8
    int64_t * v2 = (int64_t *)0;
    int64_t * mem = realloc(v2, (int32_t)v1); // 0x405902
    while (mem != NULL) {
        int64_t v3 = (int64_t)mem;
        *(int64_t *)a2 = a2;
        int64_t v4 = function_405530(a1, v3, v1, a2, (int32_t)a3, a4 & 0xffffffff); // 0x405929
        int64_t result; // 0x4058d0
        if (v4 == -1) {
            // 0x405960
            free(mem);
            result = 0;
            return result;
        }
        // 0x405934
        result = v3;
        if (v1 > v4) {
            // 0x40593c
            return result;
        }
        v1 = v4 + 1;
        v2 = (int64_t *)v3;
        mem = realloc(v2, (int32_t)v1);
    }
    // 0x405950
    free(v2);
    // 0x40593c
    return 0;
}
// Address range: 0x405970 - 0x405a09
int64_t function_405970(int64_t str) {
    // 0x405970
    if (str == 0) {
        // 0x4059e9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g52);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40597e
    int64_t result = (int64_t)found_char_pos; // 0x40597e
    if (found_char_pos == NULL) {
        // 0x4059d9
        g79 = str;
        g51 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x405988
    if (v1 - str < 7) {
        // 0x4059d9
        g79 = str;
        g51 = str;
        return result;
    }
    // 0x405998
    bool v2; // 0x405970
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x405970
    int64_t v5 = result - 6; // 0x405970
    int64_t v6 = 7; // 0x4059a6
    unsigned char v7 = *(char *)v5; // 0x4059a6
    char v8 = *(char *)v4; // 0x4059a6
    char v9 = v8; // 0x4059a6
    bool v10 = false; // 0x4059a6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4059b0
    int64_t v13 = v1; // 0x4059b0
    int64_t v14 = 3; // 0x4059b0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4059d9
        g79 = str;
        g51 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4059c2
    char v16 = *(char *)v12; // 0x4059c2
    char v17 = v16; // 0x4059c2
    bool v18 = false; // 0x4059c2
    while (v15 == v16) {
        // 0x4059b2
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
    int64_t v20 = v1; // 0x4059cc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4059ce
        v20 = result + 4;
        g48 = v20;
    }
    // 0x4059d9
    g79 = v20;
    g51 = v20;
    return result;
}
// Address range: 0x405a10 - 0x405b02
int64_t function_405a10(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x405a24
    int64_t result = (int64_t)v1; // 0x405a24
    if (result != a1) {
        // 0x405a31
        return result;
    }
    int64_t v2 = function_4098a0(); // 0x405a40
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x405af6
    if (v3 == 85) {
        // 0x405a50
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x405ae8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g19 : (int64_t)&g14;
            return result2;
        }
        char v4 = *v1; // 0x405a7e
        int64_t result3 = v4 != 96 ? (int64_t)&g15 : (int64_t)&g18; // 0x405a8b
        // 0x405a31
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x405ae8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g19 : (int64_t)&g14;
        return result2;
    }
    char v5 = *v1; // 0x405acd
    int64_t result4 = v5 != 96 ? (int64_t)&g16 : (int64_t)&g17; // 0x405ada
    // 0x405a31
    return result4;
}
// Address range: 0x405b10 - 0x405b67
int64_t function_405b10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x405b10
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x405b58
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x405b67 - 0x406d31
int64_t function_405b67(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x405bb1
    int64_t v3 = 0; // 0x405bb1
    int64_t v4; // 0x405b67
    int64_t v5; // 0x405b67
    int64_t v6; // 0x405b67
    int64_t v7; // 0x405b67
    int64_t v8; // 0x405b67
    int64_t v9; // 0x405b67
    int64_t v10; // 0x405b67
    int64_t v11; // 0x405b67
    int64_t v12; // 0x405b67
    int64_t v13; // 0x405b67
    int64_t v14; // 0x405b67
    int64_t v15; // 0x405b67
    int64_t v16; // 0x405b67
    int64_t v17; // 0x405b67
    int64_t v18; // 0x405b67
    int64_t result; // 0x405b67
    int64_t v19; // 0x405b67
    int32_t wc; // bp+132, 0x405b67
    int64_t ps; // bp+136, 0x405b67
    char v20; // 0x406120
    int64_t v21; // 0x406120
    int64_t v22; // 0x4064c8
    int64_t v23; // 0x405b67
    int64_t v24; // 0x4064e7
    int32_t v25; // 0x405b67
    while (true) {
      lab_0x405bb8_2:
        // 0x405bb8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x405b67
        int64_t v27; // 0x405bec
        while (true) {
          lab_0x405bb8:
            // 0x405bb8
            v5 = v26;
            bool v28 = v15 == v5; // 0x405bc3
            if (v15 == -1) {
                // 0x405bc5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x405bd3
            if (v28) {
                // break (via goto) -> 0x406338
                goto lab_0x406338;
            }
            // 0x405bdc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g92 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4061cb
                    if (v25 % 2 == 0) {
                        goto lab_0x405d11;
                    }
                    // 0x4065ed
                    v26 = v5 + 1;
                    goto lab_0x405bb8;
                }
                case 7: {
                    goto lab_0x405d11;
                }
                case 8: {
                    goto lab_0x405d11;
                }
                case 9: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x405d11;
                }
                case 12: {
                    goto lab_0x405d11;
                }
                case 13: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x405cdd;
                }
                case 36: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x405d11;
                }
                case 38: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x405d11;
                }
                case 44: {
                    goto lab_0x405d11;
                }
                case 45: {
                    goto lab_0x405d11;
                }
                case 46: {
                    goto lab_0x405d11;
                }
                case 47: {
                    goto lab_0x405d11;
                }
                case 48: {
                    goto lab_0x405d11;
                }
                case 49: {
                    goto lab_0x405d11;
                }
                case 50: {
                    goto lab_0x405d11;
                }
                case 51: {
                    goto lab_0x405d11;
                }
                case 52: {
                    goto lab_0x405d11;
                }
                case 53: {
                    goto lab_0x405d11;
                }
                case 54: {
                    goto lab_0x405d11;
                }
                case 55: {
                    goto lab_0x405d11;
                }
                case 56: {
                    goto lab_0x405d11;
                }
                case 57: {
                    goto lab_0x405d11;
                }
                case 58: {
                    goto lab_0x405d11;
                }
                case 59: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x405d11;
                }
                case 66: {
                    goto lab_0x405d11;
                }
                case 67: {
                    goto lab_0x405d11;
                }
                case 68: {
                    goto lab_0x405d11;
                }
                case 69: {
                    goto lab_0x405d11;
                }
                case 70: {
                    goto lab_0x405d11;
                }
                case 71: {
                    goto lab_0x405d11;
                }
                case 72: {
                    goto lab_0x405d11;
                }
                case 73: {
                    goto lab_0x405d11;
                }
                case 74: {
                    goto lab_0x405d11;
                }
                case 75: {
                    goto lab_0x405d11;
                }
                case 76: {
                    goto lab_0x405d11;
                }
                case 77: {
                    goto lab_0x405d11;
                }
                case 78: {
                    goto lab_0x405d11;
                }
                case 79: {
                    goto lab_0x405d11;
                }
                case 80: {
                    goto lab_0x405d11;
                }
                case 81: {
                    goto lab_0x405d11;
                }
                case 82: {
                    goto lab_0x405d11;
                }
                case 83: {
                    goto lab_0x405d11;
                }
                case 84: {
                    goto lab_0x405d11;
                }
                case 85: {
                    goto lab_0x405d11;
                }
                case 86: {
                    goto lab_0x405d11;
                }
                case 87: {
                    goto lab_0x405d11;
                }
                case 88: {
                    goto lab_0x405d11;
                }
                case 89: {
                    goto lab_0x405d11;
                }
                case 90: {
                    goto lab_0x405d11;
                }
                case 91: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x405d11;
                }
                case 94: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x405d11;
                }
                case 96: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x405d11;
                }
                case 98: {
                    goto lab_0x405d11;
                }
                case 99: {
                    goto lab_0x405d11;
                }
                case 100: {
                    goto lab_0x405d11;
                }
                case 101: {
                    goto lab_0x405d11;
                }
                case 102: {
                    goto lab_0x405d11;
                }
                case 103: {
                    goto lab_0x405d11;
                }
                case 104: {
                    goto lab_0x405d11;
                }
                case 105: {
                    goto lab_0x405d11;
                }
                case 106: {
                    goto lab_0x405d11;
                }
                case 107: {
                    goto lab_0x405d11;
                }
                case 108: {
                    goto lab_0x405d11;
                }
                case 109: {
                    goto lab_0x405d11;
                }
                case 110: {
                    goto lab_0x405d11;
                }
                case 111: {
                    goto lab_0x405d11;
                }
                case 112: {
                    goto lab_0x405d11;
                }
                case 113: {
                    goto lab_0x405d11;
                }
                case 114: {
                    goto lab_0x405d11;
                }
                case 115: {
                    goto lab_0x405d11;
                }
                case 116: {
                    goto lab_0x405d11;
                }
                case 117: {
                    goto lab_0x405d11;
                }
                case 118: {
                    goto lab_0x405d11;
                }
                case 119: {
                    goto lab_0x405d11;
                }
                case 120: {
                    goto lab_0x405d11;
                }
                case 121: {
                    goto lab_0x405d11;
                }
                case 122: {
                    goto lab_0x405d11;
                }
                case 123: {
                    goto lab_0x405cb5;
                }
                case 124: {
                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x405cb5;
                }
                case 126: {
                    goto lab_0x405cdd;
                }
                default: {
                    goto lab_0x4060b5;
                }
            }
        }
      lab_0x4060b5:
        if (v23 != 1) {
            // 0x406420
            ps = 0;
            int64_t len = v15; // 0x406430
            if (v15 == -1) {
                // 0x406432
                len = strlen((char *)str);
            }
            // 0x40645e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4064bf:
                // 0x4064bf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4064c4
                int64_t v30 = v29 + str;
                v24 = function_409760(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x406a3a_2;
                    }
                    case -1: {
                        goto lab_0x406a3a_2;
                    }
                    case -2: {
                        // 0x406b1d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x406b57
                            v19 = v18;
                            int64_t v31 = v18; // 0x406b5a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x406b67
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x406b60
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x406a3a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x406a3a_2;
                    }
                    case 1: {
                        goto lab_0x406490;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40653c
                        char v34 = *(char *)v33; // 0x40654d
                        unsigned char v35; // 0x405b67
                        if (v34 < 125) {
                            // 0x406558
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40656f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x406540
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40654d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x406558
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40656f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x406540
                            v33++;
                        }
                        goto lab_0x406490;
                    }
                }
            }
            goto lab_0x406a3a_2;
        } else {
            // 0x406104
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x405d11;
        }
    }
  lab_0x406338:
    // 0x406338
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x406c3a
        if (v8 > result) {
            // 0x406c43
            *(char *)(v12 + result) = 0;
        }
        // 0x405f67
        return result;
    }
    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
  lab_0x405d11:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x405d20
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x405f2a_2;
        }
    }
    int64_t v39 = result; // 0x405e21
    char v40 = v20; // 0x405e21
    int64_t v41 = v38; // 0x405e21
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x405e21
    int64_t v43 = v36; // 0x405e21
    goto lab_0x405d9d;
  lab_0x405f2a_2:
    // 0x405f67
    return function_405b10(v10, v6, str, v4, 2, v25 & -3);
  lab_0x406a3a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x405d11;
    } else {
        uint64_t v49 = v46 + v5; // 0x40660e
        int64_t v50 = v5 + 1; // 0x4066f1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4066f8
        char v52 = v20; // 0x4066f8
        int64_t v53 = result; // 0x4066f8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4066c1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4066c5
            int64_t v56 = v54 + 1; // 0x4066ca
            int64_t v57 = v51 + 1; // 0x4066f1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4066bc
                v54 = v56;
                if (v47 > v54) {
                    // 0x4066c1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4066c5
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
        goto lab_0x405d9d;
    }
  lab_0x406490:
    // 0x406490
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4064af
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4064b2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x406a3a
        goto lab_0x406a3a_2;
    }
    goto lab_0x4064bf;
  lab_0x405cdd:
    // 0x405cdd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x405f2a_2;
    }
    goto lab_0x405d11;
  lab_0x405cb5:;
    bool v60 = v15 == 1; // 0x405cc0
    if (v15 == -1) {
        // 0x405cc2
        v60 = *(char *)v1 == 0;
    }
    // 0x405cce
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x405d11;
    } else {
        goto lab_0x405cdd;
    }
  lab_0x405d9d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x405da2
        *(char *)(v44 + v45) = v40;
    }
    // 0x405da6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x405bb8_2;
}
// Address range: 0x406d40 - 0x406ede
int64_t function_406d40(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x406d42
    int32_t * v3 = __errno_location(); // 0x406d5c
    int64_t v4 = (int64_t)g40; // 0x406d61
    int32_t v5 = *v3; // 0x406d6b
    int64_t v6 = v4; // 0x406d81
    if (v2 >= (int64_t)*(int32_t *)&g43) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x406ed9
            function_407da0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x406d90
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x406d97
        int64_t v9; // 0x406d40
        if (g40 == &g41) {
            int64_t v10 = function_407bb0(0, v8); // 0x406eba
            int128_t v11 = __asm_movdqa(*(int128_t *)&g41); // 0x406ebf
            *(int64_t *)&g40 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_407bb0(v4, v8); // 0x406dab
            *(int64_t *)&g40 = v12;
            v9 = v12;
        }
        // 0x406dba
        v6 = v9;
        int32_t v13 = *(int32_t *)&g43; // 0x406dba
        int32_t v14 = v7; // 0x406dc1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g43 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x406df1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x406dfb
    int64_t * v17 = (int64_t *)v15; // 0x406dfe
    uint64_t v18 = *v17; // 0x406dfe
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x406e01
    int64_t result = *v19; // 0x406e01
    int64_t v20; // 0x406d40
    uint64_t v21 = function_405b10(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x406e24
    if (v18 > v21) {
        // 0x406e9b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x406e37
    *v17 = v22;
    if (result != (int64_t)&g80) {
        // 0x406e47
        free((int64_t *)result);
    }
    int64_t result2 = function_407b50(v22); // 0x406e61
    *v19 = result2;
    int64_t v23; // 0x406d40
    function_405b10(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x406e9b
    *v3 = v5;
    return result2;
}
// Address range: 0x406ee0 - 0x406f14
int64_t function_406ee0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x406ee7
    int64_t result = function_407d50(a1 == 0 ? (int64_t)&g81 : a1, 56); // 0x406f06
    return result;
}
// Address range: 0x406f20 - 0x406f2f
int64_t function_406f20(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g81 : a1); // 0x406f2c
    return result;
}
// Address range: 0x406f30 - 0x406f3f
int64_t function_406f30(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g81 : a1; // 0x406f38
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g81;
}
// Address range: 0x406f40 - 0x406f73
int64_t function_406f40(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g81 + 8 : a1 + 8; // 0x406f59
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x406f5e
    uint32_t v3 = *v2; // 0x406f5e
    uint32_t v4 = (int32_t)a2 % 32; // 0x406f62
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x406f80 - 0x406f93
int64_t function_406f80(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g81 + 4 : a1 + 4); // 0x406f8c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x406fa0 - 0x406fcb
int64_t function_406fa0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g81 : a1; // 0x406fa8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x406fc5
        abort();
        // UNREACHABLE
    }
    // 0x406fbc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g81;
}
// Address range: 0x406fd0 - 0x407042
int64_t function_406fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g81 : a5; // 0x406ff2
    int32_t * v2 = __errno_location(); // 0x406ffb
    uint32_t v3 = *(int32_t *)v1; // 0x40701b
    int64_t result = function_405b10(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40702a
    return result;
}
// Address range: 0x407050 - 0x407131
int64_t function_407050(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g81 : a4; // 0x407072
    int32_t * v2 = __errno_location(); // 0x407078
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x407097
    int32_t * v4 = (int32_t *)v1; // 0x40709a
    int64_t v5 = function_405b10(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4070b5
    int64_t v6 = v5 + 1; // 0x4070ba
    int64_t result = function_407b50(v6); // 0x4070cf
    function_405b10(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x407114
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40711d
    return result;
}
// Address range: 0x407140 - 0x40714a
int64_t function_407140(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407140
    return function_407050(a1, a2, 0, a3);
}
// Address range: 0x407150 - 0x4071e5
int64_t function_407150(void) {
    uint32_t v1 = *(int32_t *)&g43; // 0x407150
    int64_t v2 = v1; // 0x407150
    int64_t v3 = v2; // 0x407164
    if (v1 >= 2) {
        int64_t v4 = &g43;
        int64_t v5 = v4 + 16; // 0x407183
        free((int64_t *)*(int64_t *)v4);
        v3 = &g93;
        while (v5 != (int64_t)g40 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x407180
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g93;
        }
    }
    int64_t v6 = v3; // 0x40719d
    if (g41 != 0x6103e0) {
        // 0x40719f
        free((int64_t *)g41);
        g41 = 256;
        *(int64_t *)&g42 = (int64_t)&g80;
        v6 = &g93;
    }
    int64_t result = v6; // 0x4071c1
    if (g40 != &g41) {
        // 0x4071c3
        free(g40);
        *(int64_t *)&g40 = (int64_t)&g41;
        result = &g93;
    }
    // 0x4071d6
    *(int32_t *)&g43 = 1;
    return result;
}
// Address range: 0x4071f0 - 0x407201
int64_t function_4071f0(void) {
    // 0x4071f0
    int64_t v1; // 0x4071f0
    return function_406d40(v1, v1, -1, (int64_t *)&g81);
}
// Address range: 0x407210 - 0x40721a
int64_t function_407210(void) {
    // 0x407210
    int64_t v1; // 0x407210
    return function_406d40(v1, v1, v1, (int64_t *)&g81);
}
// Address range: 0x407220 - 0x407236
int64_t function_407220(int64_t a1) {
    // 0x407220
    return function_406d40(0, a1, -1, (int64_t *)&g81);
}
// Address range: 0x407240 - 0x407252
int64_t function_407240(int64_t a1, int64_t a2) {
    // 0x407240
    return function_406d40(0, a1, a2, (int64_t *)&g81);
}
// Address range: 0x407260 - 0x4072c8
int64_t function_407260(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x407270
    return function_406d40((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4072d0 - 0x407334
int64_t function_4072d0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4072e0
    return function_406d40((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x407340 - 0x40734c
int64_t function_407340(int64_t a1, int64_t a2) {
    // 0x407340
    return function_407260(0, a1 & 0xffffffff, a2);
}
// Address range: 0x407350 - 0x40735f
int64_t function_407350(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407350
    return function_4072d0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x407360 - 0x4073d0
int64_t function_407360(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g81); // 0x40736d
    int128_t v2 = __asm_movdqa(g82); // 0x407375
    int128_t v3 = __asm_movdqa(g83); // 0x40737d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x407392
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4073a8
    uint32_t v6 = *v5; // 0x4073a8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4073ad
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_406d40(0, a1, a2, &v4);
}
// Address range: 0x4073d0 - 0x4073dd
int64_t function_4073d0(int64_t a1, int64_t a2) {
    // 0x4073d0
    return function_407360(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4073e0 - 0x4073f1
int64_t function_4073e0(int64_t a1) {
    // 0x4073e0
    return function_407360(a1, -1, 58);
}
// Address range: 0x407400 - 0x40740a
int64_t function_407400(void) {
    // 0x407400
    int64_t v1; // 0x407400
    return function_407360(v1, v1, 58);
}
// Address range: 0x407410 - 0x40747e
int64_t function_407410(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40742a
    return function_406d40(a1, a3, -1, &v1);
}
// Address range: 0x407480 - 0x4074ec
int64_t function_407480(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g81); // 0x407487
    int128_t v2 = __asm_movdqa(g82); // 0x40748f
    int128_t v3 = __asm_movdqa(g83); // 0x407497
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4074b9
    if (a2 == 0 || a3 == 0) {
        // 0x4074e7
        abort();
        // UNREACHABLE
    }
    // 0x4074ca
    return function_406d40(a1, a4, a5, &v4);
}
// Address range: 0x4074f0 - 0x4074f9
int64_t function_4074f0(void) {
    // 0x4074f0
    int64_t v1; // 0x4074f0
    return function_407480(v1, v1, v1, v1, -1);
}
// Address range: 0x407500 - 0x407517
int64_t function_407500(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407500
    return function_407480(0, a1, a2, a3, -1);
}
// Address range: 0x407520 - 0x407533
int64_t function_407520(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x407520
    return function_407480(0, a1, a2, a3, a4);
}
// Address range: 0x407540 - 0x40754a
int64_t function_407540(void) {
    // 0x407540
    int64_t v1; // 0x407540
    return function_406d40(v1, v1, v1, &g39);
}
// Address range: 0x407550 - 0x407562
int64_t function_407550(int64_t a1, int64_t a2) {
    // 0x407550
    return function_406d40(0, a1, a2, &g39);
}
// Address range: 0x407570 - 0x407581
int64_t function_407570(int64_t a1, int64_t * a2, int64_t a3, int64_t a4) {
    // 0x407570
    return function_406d40(a1, (int64_t)a2, -1, &g39);
}
// Address range: 0x407590 - 0x4075a6
int64_t function_407590(int64_t a1) {
    // 0x407590
    return function_406d40(0, a1, -1, &g39);
}
// Address range: 0x4075b0 - 0x40798d
int64_t function_4075b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x407648
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4075cc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4075e6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40762b
    if (a6 < 10) {
        // 0x40763a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x407732
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x407990 - 0x4079b0
int64_t function_407990(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x407990
    if (a5 == 0) {
        // 0x4079ab
        return function_4075b0(a1, a2, a3, a4, a5, 0, (int64_t)&g93);
    }
    int64_t v1 = 0; // 0x407997
    v1++;
    int64_t v2 = v1; // 0x4079a9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4079a0
        v1++;
        v2 = v1;
    }
    // 0x4079ab
    return function_4075b0(a1, a2, a3, a4, a5, v2, (int64_t)&g93);
}
// Address range: 0x4079b0 - 0x407a10
int64_t function_4079b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4079b0
    int64_t v3 = &v2; // 0x4079b0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4079e3
    int64_t v6; // 0x4079cd
    int64_t * v7; // 0x4079eb
    int64_t v8; // 0x4079eb
    int64_t v9; // 0x4079f7
    if (v5 < 48) {
        // 0x4079c0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x407a03
            break;
        }
    } else {
        // 0x4079eb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x407a03
            break;
        }
    }
    int64_t v10 = 10; // 0x4079e1
    while (v4 != 9) {
        // 0x4079d9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4079c0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x407a03
                break;
            }
        } else {
            // 0x4079eb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x407a03
                break;
            }
        }
        // 0x4079d9
        v10 = 10;
    }
    // 0x407a03
    return function_4075b0(a1, a2, a3, a4, v3, v10, (int64_t)&g93);
}
// Address range: 0x407a10 - 0x407acc
int64_t function_407a10(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x407a10
    int64_t v1; // bp-168, 0x407a10
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x407a10
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x407a10
    int64_t v8; // 0x407a10
    int64_t v9; // bp-56, 0x407a10
    int64_t v10; // 0x407a75
    int64_t v11; // 0x407a99
    if ((int32_t)v6 < 48) {
        // 0x407a60
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x407ab0
            break;
        }
    } else {
        // 0x407a92
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x407ab0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x407a8a
    int64_t v13 = 10; // 0x407a8a
    while (v5 != 9) {
        // 0x407a8c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x407a60
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x407ab0
                break;
            }
        } else {
            // 0x407a92
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x407ab0
                break;
            }
        }
        // 0x407a82
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x407ab0
    int64_t v14; // bp-136, 0x407a10
    int64_t result = function_4075b0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g93); // 0x407abf
    return result;
}
// Address range: 0x407ad0 - 0x407b44
int64_t function_407ad0(int64_t a1) {
    // 0x407ad0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x407b33
    return fputs_unlocked(v1, g49);
}
// Address range: 0x407b50 - 0x407b6a
int64_t function_407b50(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x407b54
    if (size != 0 != (mem == NULL)) {
        // 0x407b63
        return (int64_t)mem;
    }
    // 0x407b65
    function_407da0(size);
    // UNREACHABLE
}
// Address range: 0x407b70 - 0x407b91
int64_t function_407b70(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x407b73
    int64_t v2 = v1; // 0x407b73
    if (v2 < 0) {
        // 0x407b8b
        function_407da0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407b89
        return function_407b50(v2);
    }
    // 0x407b8b
    function_407da0(v2);
    // UNREACHABLE
}
// Address range: 0x407ba0 - 0x407ba2
int64_t function_407ba0(void) {
    // 0x407ba0
    int64_t v1; // 0x407ba0
    return function_407b50(v1);
}
// Address range: 0x407bb0 - 0x407be6
int64_t function_407bb0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x407bd8
        free(v1);
        return (int32_t)&g93 ^ (int32_t)&g93;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x407bc1
    if (a2 != 0 != (mem == NULL)) {
        // 0x407bd0
        return (int64_t)mem;
    }
    // 0x407be1
    function_407da0(a1);
    // UNREACHABLE
}
// Address range: 0x407bf0 - 0x407c11
int64_t function_407bf0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x407bf3
    int64_t v2 = v1; // 0x407bf3
    if (v2 < 0) {
        // 0x407c0b
        function_407da0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x407c09
        return function_407bb0(a1, v2);
    }
    // 0x407c0b
    function_407da0(a1);
    // UNREACHABLE
}
// Address range: 0x407c20 - 0x407ca6
int64_t function_407c20(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x407c7b
            function_407da0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407bb0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x407c63
    if (a2 == 0) {
        // 0x407c88
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x407c68
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x407c7b
        function_407da0(a1);
        // UNREACHABLE
    }
    // 0x407c4a
    *(int64_t *)a2 = v2;
    return function_407bb0(a1, v2 * a3);
}
// Address range: 0x407cb0 - 0x407d00
int64_t function_407cb0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x407cb0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x407cfa
            function_407da0(a1);
            // UNREACHABLE
        }
        // 0x407cd2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_407bb0(a1, v1);
    }
    if (a2 == 0) {
        // 0x407ce5
        *(int64_t *)a2 = 128;
        return function_407bb0(0, 128);
    }
    // 0x407cf8
    if (a2 < 0) {
        // 0x407cfa
        function_407da0(a1);
        // UNREACHABLE
    }
    // 0x407cd2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_407bb0(a1, v1);
}
// Address range: 0x407d00 - 0x407d17
int64_t function_407d00(int64_t a1, int64_t a2) {
    // 0x407d00
    return (int64_t)memset((int64_t *)function_407b50(a1), 0, (int32_t)a1);
}
// Address range: 0x407d20 - 0x407d4e
int64_t function_407d20(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x407d27
    if ((int64_t)v1 < 0) {
        // 0x407d49
        function_407da0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x407d49
        function_407da0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x407d3a
    if (mem != NULL) {
        // 0x407d44
        return (int64_t)mem;
    }
    // 0x407d49
    function_407da0(nmemb);
    // UNREACHABLE
}
// Address range: 0x407d50 - 0x407d78
int64_t function_407d50(int64_t a1, int64_t a2) {
    int64_t v1 = function_407b50(a2); // 0x407d5f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x407d80 - 0x407d93
int64_t function_407d80(int64_t str) {
    // 0x407d80
    return function_407d50(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x407da0 - 0x407dd1
int64_t function_407da0(int64_t a1) {
    // 0x407da0
    error(g38, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x407de0 - 0x407df8
int64_t function_407de0(void) {
    // 0x407de0
    int64_t str; // 0x407de0
    char * v1 = strndup((char *)str, (int32_t)str); // 0x407de4
    if (v1 != NULL) {
        // 0x407dee
        return (int64_t)v1;
    }
    // 0x407df3
    function_407da0(str);
    // UNREACHABLE
}
// Address range: 0x407e00 - 0x408550
int64_t function_407e00(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2) {
    uint32_t base = (int32_t)a3; // 0x407e12
    if (base >= 37) {
        // 0x408529
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtol");
        return &g93;
    }
    // 0x407e1b
    int64_t v1; // bp-64, 0x407e00
    int64_t endptr = a2 == 0 ? (int64_t)&v1 : (int64_t)a2; // 0x407e28
    int32_t * v2 = __errno_location(); // 0x407e32
    *v2 = 0;
    char * str = (char *)a1;
    int32_t str_as_l = strtol(str, (char **)endptr, base); // 0x407e48
    int64_t * v3 = (int64_t *)endptr; // 0x407e4d
    int64_t v4 = *v3; // 0x407e4d
    int64_t v5; // 0x407e00
    int64_t v6; // 0x407e00
    int64_t v7; // 0x407e00
    char v8; // 0x407e00
    int64_t v9; // 0x407e00
    int64_t v10; // 0x407e00
    int64_t v11; // 0x407e00
    if (v4 == a1) {
        // 0x407ea8
        if (str2 == NULL) {
            // 0x407e7c
            return 4;
        }
        char c = *str; // 0x407eb1
        if (c == 0) {
            // 0x407e7c
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x407ecf
        v10 = 1;
        v6 = 0;
        v8 = c;
        if (found_char_pos == NULL) {
            // 0x407e7c
            return 4;
        }
        goto lab_0x407edd;
    } else {
        int32_t v12 = *v2; // 0x407e58
        int64_t v13 = 0; // 0x407e5e
        if (v12 != 0) {
            // 0x407e90
            v13 = 1;
            if (v12 != 34) {
                // 0x407e7c
                return 4;
            }
        }
        int64_t v14 = str_as_l; // 0x407e48
        v9 = v14;
        v5 = v13;
        if (str2 == NULL) {
            goto lab_0x407e75;
        } else {
            char c2 = *(char *)v4; // 0x407e68
            v9 = v14;
            v5 = v13;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x407f77
                v10 = v14;
                v6 = v13;
                v8 = c2;
                v11 = v14;
                v7 = v13;
                if (found_char_pos2 != NULL) {
                    goto lab_0x407edd;
                } else {
                    goto lab_0x407f85;
                }
            } else {
                goto lab_0x407e75;
            }
        }
    }
  lab_0x407edd:;
    int64_t v15 = v6;
    int64_t v16 = v10;
    unsigned char v17 = v8 - 69;
    int64_t v18 = 1024; // 0x407ee4
    int64_t v19 = 1; // 0x407ee4
    int64_t v20; // 0x407e00
    int64_t v21; // 0x407e00
    int64_t v22; // 0x407e00
    int64_t v23; // 0x407e00
    int64_t v24; // 0x407e00
    int64_t v25; // 0x407e00
    int64_t v26; // 0x407e00
    int64_t v27; // 0x407e00
    int64_t v28; // 0x407e00
    int64_t v29; // 0x407e00
    int64_t v30; // 0x407e00
    int64_t v31; // 0x407e00
    int64_t v32; // 0x407e00
    int64_t v33; // 0x407e00
    int64_t v34; // 0x407e00
    int64_t v35; // 0x407e00
    int64_t v36; // 0x407e00
    int64_t v37; // 0x407e00
    int64_t v38; // 0x407e00
    if (v17 < 48) {
        // 0x407f10
        v18 = 1024;
        v19 = 1;
        if ((1 << (int64_t)((v8 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x407ef0;
        } else {
            // 0x407f24
            v18 = 1024;
            v19 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x407ef0;
            } else {
                // 0x407f36
                v18 = 1000;
                v19 = 2;
                switch (*(char *)(v4 + 1)) {
                    case 68: {
                        goto lab_0x407ef0;
                    }
                    case 105: {
                        char v39 = *(char *)(v4 + 2); // 0x408512
                        v18 = 1024;
                        v19 = (v39 == 66 ? 2 : 1) + (int64_t)(v39 == 66);
                        goto lab_0x407ef0;
                    }
                    default: {
                        // 0x407f4b
                        g99 = v17;
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
                                goto lab_0x4081d8;
                            }
                            case 70: {
                                goto lab_0x407f85;
                            }
                            case 71: {
                                goto lab_0x408240;
                            }
                            case 72: {
                                goto lab_0x407f85;
                            }
                            case 73: {
                                goto lab_0x407f85;
                            }
                            case 74: {
                                goto lab_0x407f85;
                            }
                            case 75: {
                                goto lab_0x408025;
                            }
                            case 76: {
                                goto lab_0x407f85;
                            }
                            case 77: {
                                goto lab_0x408068;
                            }
                            case 78: {
                                goto lab_0x407f85;
                            }
                            case 79: {
                                goto lab_0x407f85;
                            }
                            case 80: {
                                goto lab_0x408108;
                            }
                            case 81: {
                                goto lab_0x407f85;
                            }
                            case 82: {
                                goto lab_0x407f85;
                            }
                            case 83: {
                                goto lab_0x407f85;
                            }
                            case 84: {
                                goto lab_0x408170;
                            }
                            case 85: {
                                goto lab_0x407f85;
                            }
                            case 86: {
                                goto lab_0x407f85;
                            }
                            case 87: {
                                goto lab_0x407f85;
                            }
                            case 88: {
                                goto lab_0x407f85;
                            }
                            case 89: {
                                goto lab_0x4082a8;
                            }
                            case 90: {
                                goto lab_0x408310;
                            }
                            case 91: {
                                goto lab_0x407f85;
                            }
                            case 92: {
                                goto lab_0x407f85;
                            }
                            case 93: {
                                goto lab_0x407f85;
                            }
                            case 94: {
                                goto lab_0x407f85;
                            }
                            case 95: {
                                goto lab_0x407f85;
                            }
                            case 96: {
                                goto lab_0x407f85;
                            }
                            case 97: {
                                goto lab_0x407f85;
                            }
                            case 98: {
                                goto lab_0x4080d5;
                            }
                            case 99: {
                                goto lab_0x407fc8;
                            }
                            case 100: {
                                goto lab_0x407f85;
                            }
                            case 101: {
                                goto lab_0x407f85;
                            }
                            case 102: {
                                goto lab_0x407f85;
                            }
                            case 103: {
                                goto lab_0x408240;
                            }
                            case 104: {
                                goto lab_0x407f85;
                            }
                            case 105: {
                                goto lab_0x407f85;
                            }
                            case 106: {
                                goto lab_0x407f85;
                            }
                            case 107: {
                                goto lab_0x408025;
                            }
                            case 108: {
                                goto lab_0x407f85;
                            }
                            case 109: {
                                goto lab_0x408068;
                            }
                            case 110: {
                                goto lab_0x407f85;
                            }
                            case 111: {
                                goto lab_0x407f85;
                            }
                            case 112: {
                                goto lab_0x407f85;
                            }
                            case 113: {
                                goto lab_0x407f85;
                            }
                            case 114: {
                                goto lab_0x407f85;
                            }
                            case 115: {
                                goto lab_0x407f85;
                            }
                            case 116: {
                                goto lab_0x408170;
                            }
                            default: {
                                goto lab_0x407ef0;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x407ef0;
    }
  lab_0x407e75:
    // 0x407e75
    *a4 = v9;
    // 0x407e7c
    return v5 & 0xffffffff;
  lab_0x407ef0:
    // 0x407ef0
    g98 = v8 - 66;
    v11 = v16;
    v7 = v15;
    v21 = v16;
    v28 = v19;
    v20 = v15;
    v34 = v19;
    switch (v8) {
        case 66: {
            // 0x407fc1
            v21 = 1024 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x407fc8;
        }
        case 69: {
            // 0x4081c0
            v25 = v18;
            v32 = v19;
            v37 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x4081d8;
        }
        case 71: {
            goto lab_0x408240;
        }
        case 75: {
            goto lab_0x408025;
        }
        case 77: {
            goto lab_0x408050;
        }
        case 80: {
            // 0x4080f0
            v23 = v18;
            v30 = v19;
            v36 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x408108;
        }
        case 84: {
            goto lab_0x408158;
        }
        case 89: {
            // 0x408290
            goto lab_0x4082a8;
        }
        case 90: {
            // 0x4082f8
            v26 = v18;
            v27 = v19;
            v35 = -0x8000000000000000 / (int128_t)v18;
            goto lab_0x408310;
        }
        case 98: {
            goto lab_0x4080d5;
        }
        case 99: {
            goto lab_0x407fc8;
        }
        case 103: {
            goto lab_0x408240;
        }
        case 107: {
            goto lab_0x408025;
        }
        case 109: {
            goto lab_0x408050;
        }
        case 116: {
            goto lab_0x408158;
        }
        case 119: {
            // 0x408009
            v21 = 2 * v16;
            v28 = v19;
            v20 = v15;
            goto lab_0x407fc8;
        }
        default: {
            goto lab_0x407f85;
        }
    }
    // 0x408228
    goto lab_0x408240;
    // 0x408010
    goto lab_0x408025;
  lab_0x408050:
    // 0x408050
    v22 = v18;
    v29 = v19;
    v33 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x408068;
  lab_0x408158:
    // 0x408158
    v24 = v18;
    v31 = v19;
    v38 = -0x8000000000000000 / (int128_t)v18;
    goto lab_0x408170;
  lab_0x4080d5:
    // 0x4080d5
    v21 = 512 * v16;
    v28 = v34;
    v20 = v15;
    goto lab_0x407fc8;
  lab_0x407fc8:;
    int64_t v59 = v20;
    int64_t v60 = v28 + v4; // 0x407fc8
    *v3 = v60;
    v9 = v21;
    v5 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x407e75;
  lab_0x407f85:
    // 0x407f85
    *a4 = v11;
    // 0x407e7c
    return (v7 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4081d8:;
    uint64_t v61 = v25;
    int64_t v62 = v16;
    int64_t v63 = -0x8000000000000000; // 0x408211
    int64_t v64 = 1; // 0x408211
    if (v62 >= v37) {
        // 0x4081f0
        v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
        v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : 0;
    }
    int32_t v65 = 5; // 0x408205
    int32_t v66 = v65; // 0x408208
    int64_t v67 = v64; // 0x408208
    int64_t v55 = v63; // 0x408208
    int64_t v57 = v32; // 0x408208
    int64_t v58 = v64; // 0x408208
    while (v65 != 0) {
        // 0x40820e
        v62 = v63;
        v63 = -0x8000000000000000;
        v64 = 1;
        if (v62 >= v37) {
            // 0x4081f0
            v63 = v62 > 0x7fffffffffffffff / v61 ? 0x7fffffffffffffff : v62 * v61;
            v64 = v62 > 0x7fffffffffffffff / v61 ? 1 : v67;
        }
        // 0x408205
        v65 = v66 - 1;
        v66 = v65;
        v67 = v64;
        v55 = v63;
        v57 = v32;
        v58 = v64;
    }
    goto lab_0x408440;
  lab_0x408240:
    // 0x408240
    while (true) {
        // 0x408276
        int32_t v40; // 0x407e00
        int32_t v41 = v40;
        int64_t v42; // 0x407e00
        int64_t v43 = v42;
        int64_t v44 = -0x8000000000000000; // 0x408279
        int64_t v45 = 1; // 0x408279
        int64_t v46; // 0x407e00
        uint64_t v47; // 0x407e00
        if (v43 >= v47) {
            int64_t v48 = v46;
            uint64_t v49; // 0x407e00
            int64_t v50 = v43 > 0x7fffffffffffffff / v49 ? 0x7fffffffffffffff : v43 * v49;
            int64_t v51 = v43 > 0x7fffffffffffffff / v49 ? 1 : v48;
            v44 = v50;
            v45 = v51;
        }
        int64_t v52 = v45;
        int64_t v53 = v44;
        int32_t v54 = v41 - 1; // 0x40826d
        v42 = v53;
        v40 = v54;
        v46 = v52;
        v55 = v53;
        int64_t v56; // 0x407e00
        v57 = v56;
        v58 = v52;
        if (v54 == 0) {
            // break -> 0x408440
            break;
        }
    }
    goto lab_0x408440;
  lab_0x408025:;
    int64_t v72 = 1;
    v21 = -0x8000000000000000;
    v28 = v72;
    v20 = 1;
    int64_t v69; // 0x407e00
    int64_t v70; // 0x407e00
    int64_t v71; // 0x407e00
    int64_t v68; // 0x407e00
    if (v16 < -0x20000000000000) {
        goto lab_0x407fc8;
    } else {
        int64_t v73 = 1024;
        v69 = 0x7fffffffffffffff / v73;
        v71 = v73;
        v70 = v16;
        v68 = v72;
        goto lab_0x40803c;
    }
  lab_0x408068:
    // 0x408068
    v21 = -0x8000000000000000;
    v28 = v29;
    v20 = 1;
    if (v16 < v33) {
        goto lab_0x407fc8;
    } else {
        int64_t v74 = 0x7fffffffffffffff / v22;
        v21 = 0x7fffffffffffffff;
        v28 = v29;
        v20 = 1;
        if (v16 > v74) {
            goto lab_0x407fc8;
        } else {
            int64_t v75 = v22 * v16; // 0x408088
            v21 = -0x8000000000000000;
            v28 = v29;
            v20 = 1;
            v69 = v74;
            v71 = v22;
            v70 = v75;
            v68 = v29;
            if (v75 < v33) {
                goto lab_0x407fc8;
            } else {
                goto lab_0x40803c;
            }
        }
    }
  lab_0x408108:;
    uint64_t v76 = v23;
    int64_t v77 = v16;
    int64_t v78 = -0x8000000000000000; // 0x408141
    int64_t v79 = 1; // 0x408141
    if (v36 <= v77) {
        // 0x408120
        v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
        v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : 0;
    }
    int32_t v80 = 4; // 0x408135
    int32_t v81 = v80; // 0x408138
    int64_t v82 = v79; // 0x408138
    v55 = v78;
    v57 = v30;
    v58 = v79;
    while (v80 != 0) {
        // 0x40813e
        v77 = v78;
        v78 = -0x8000000000000000;
        v79 = 1;
        if (v36 <= v77) {
            // 0x408120
            v78 = v77 > 0x7fffffffffffffff / v76 ? 0x7fffffffffffffff : v77 * v76;
            v79 = v77 > 0x7fffffffffffffff / v76 ? 1 : v82;
        }
        // 0x408135
        v80 = v81 - 1;
        v81 = v80;
        v82 = v79;
        v55 = v78;
        v57 = v30;
        v58 = v79;
    }
    goto lab_0x408440;
  lab_0x408170:;
    uint64_t v83 = v24;
    int64_t v84 = v16;
    int64_t v85 = -0x8000000000000000; // 0x4081a9
    int64_t v86 = 1; // 0x4081a9
    if (v38 <= v84) {
        // 0x408188
        v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
        v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : 0;
    }
    int32_t v87 = 3; // 0x40819d
    int32_t v88 = v87; // 0x4081a0
    int64_t v89 = v86; // 0x4081a0
    v55 = v85;
    v57 = v31;
    v58 = v86;
    while (v87 != 0) {
        // 0x4081a6
        v84 = v85;
        v85 = -0x8000000000000000;
        v86 = 1;
        if (v38 <= v84) {
            // 0x408188
            v85 = v84 > 0x7fffffffffffffff / v83 ? 0x7fffffffffffffff : v84 * v83;
            v86 = v84 > 0x7fffffffffffffff / v83 ? 1 : v89;
        }
        // 0x40819d
        v87 = v88 - 1;
        v88 = v87;
        v89 = v86;
        v55 = v85;
        v57 = v31;
        v58 = v86;
    }
    goto lab_0x408440;
  lab_0x4082a8:
    // 0x4082a8
    while (true) {
        // 0x4082de
        int32_t v90; // 0x407e00
        int32_t v91 = v90;
        int64_t v92; // 0x407e00
        int64_t v93 = v92;
        int64_t v94 = -0x8000000000000000; // 0x4082e1
        int64_t v95 = 1; // 0x4082e1
        int64_t v96; // 0x407e00
        uint64_t v97; // 0x407e00
        if (v97 <= v93) {
            int64_t v98 = v96;
            uint64_t v99; // 0x407e00
            int64_t v100 = v93 > 0x7fffffffffffffff / v99 ? 0x7fffffffffffffff : v93 * v99;
            int64_t v101 = v93 > 0x7fffffffffffffff / v99 ? 1 : v98;
            v94 = v100;
            v95 = v101;
        }
        int64_t v102 = v95;
        int64_t v103 = v94;
        int32_t v104 = v91 - 1; // 0x4082d5
        v92 = v103;
        v90 = v104;
        v96 = v102;
        v55 = v103;
        int64_t v105; // 0x407e00
        v57 = v105;
        v58 = v102;
        if (v104 == 0) {
            // break -> 0x408440
            break;
        }
    }
    goto lab_0x408440;
  lab_0x408310:;
    uint64_t v106 = v26;
    int64_t v107 = v16;
    int64_t v108 = -0x8000000000000000; // 0x408349
    int64_t v109 = 1; // 0x408349
    if (v35 <= v107) {
        // 0x408328
        v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
        v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : 0;
    }
    int32_t v110 = 6; // 0x40833d
    int32_t v111 = v110; // 0x408340
    int64_t v112 = v109; // 0x408340
    v55 = v108;
    v57 = v27;
    v58 = v109;
    while (v110 != 0) {
        // 0x408346
        v107 = v108;
        v108 = -0x8000000000000000;
        v109 = 1;
        if (v35 <= v107) {
            // 0x408328
            v108 = v107 > 0x7fffffffffffffff / v106 ? 0x7fffffffffffffff : v107 * v106;
            v109 = v107 > 0x7fffffffffffffff / v106 ? 1 : v112;
        }
        // 0x40833d
        v110 = v111 - 1;
        v111 = v110;
        v112 = v109;
        v55 = v108;
        v57 = v27;
        v58 = v109;
    }
    goto lab_0x408440;
  lab_0x408440:
    // 0x408440
    v21 = v55;
    v28 = v57;
    v20 = (v58 | v15) & 0xffffffff;
    goto lab_0x407fc8;
  lab_0x40803c:
    // 0x40803c
    v21 = 0x7fffffffffffffff;
    v28 = v68;
    v20 = 1;
    if (v69 >= v70) {
        // 0x408045
        v21 = v70 * v71;
        v28 = v68;
        v20 = v15;
    }
    goto lab_0x407fc8;
}
// Address range: 0x408550 - 0x408a6f
int64_t function_408550(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40855e
    if (v1 >= 37) {
        // 0x408a0c
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x408582
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x4085b2
    int64_t v4 = a1; // 0x4085b7
    char v5 = c; // 0x4085b7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x4085ac
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x4085a8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x4085b9
    if (v5 == 45) {
        // 0x4085f5
        return 4;
    }
    // 0x4085be
    int64_t v7; // bp-64, 0x408550
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x40857e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x4085c6
    int64_t * v10 = (int64_t *)v8; // 0x4085cb
    int64_t v11 = *v10; // 0x4085cb
    char v12; // 0x408550
    int64_t v13; // 0x408550
    int64_t v14; // 0x408550
    int64_t v15; // 0x408550
    int64_t v16; // 0x408550
    int64_t v17; // 0x408550
    int64_t v18; // 0x408550
    if (v11 == a1) {
        // 0x408628
        if (c == 0 || str == NULL) {
            // 0x4085f5
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x408649
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x4085f5
            return 4;
        }
        goto lab_0x408657;
    } else {
        int32_t v19 = *v2; // 0x4085d6
        int64_t v20 = 0; // 0x4085dc
        if (v19 != 0) {
            // 0x408610
            v20 = 1;
            if (v19 != 34) {
                // 0x4085f5
                return 4;
            }
        }
        int64_t v21 = v9; // 0x4085c6
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x4085f2;
        } else {
            char c2 = *(char *)v11; // 0x4085e5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x408753
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x408657;
                } else {
                    goto lab_0x408765;
                }
            } else {
                goto lab_0x4085f2;
            }
        }
    }
  lab_0x408657:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40865f
    int64_t v24 = 1; // 0x40865f
    int64_t v25; // 0x408550
    int64_t v26; // 0x408550
    int64_t v27; // 0x408550
    int64_t v28; // 0x408550
    int64_t v29; // 0x408550
    int64_t v30; // 0x408550
    int64_t v31; // 0x408550
    int64_t v32; // 0x408550
    int64_t v33; // 0x408550
    int64_t v34; // 0x408550
    int64_t v35; // 0x408550
    int64_t v36; // 0x408550
    int64_t v37; // 0x408550
    int64_t v38; // 0x408550
    int64_t v39; // 0x408550
    int64_t v40; // 0x408550
    int64_t v41; // 0x408550
    int64_t v42; // 0x408550
    int64_t v43; // 0x408550
    int64_t v44; // 0x408550
    if (v22 < 48) {
        // 0x408661
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4086ca;
        } else {
            // 0x408674
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x4086ca;
            } else {
                // 0x408690
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x4086ca;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x4088f9
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x4086ca;
                    }
                    default: {
                        // 0x4086a5
                        g100 = v22;
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
                                goto lab_0x40886b;
                            }
                            case 70: {
                                goto lab_0x408765;
                            }
                            case 71: {
                                goto lab_0x4088a3;
                            }
                            case 72: {
                                goto lab_0x408765;
                            }
                            case 73: {
                                goto lab_0x408765;
                            }
                            case 74: {
                                goto lab_0x408765;
                            }
                            case 75: {
                                goto lab_0x40872c;
                            }
                            case 76: {
                                goto lab_0x408765;
                            }
                            case 77: {
                                goto lab_0x4086ee;
                            }
                            case 78: {
                                goto lab_0x408765;
                            }
                            case 79: {
                                goto lab_0x408765;
                            }
                            case 80: {
                                goto lab_0x408838;
                            }
                            case 81: {
                                goto lab_0x408765;
                            }
                            case 82: {
                                goto lab_0x408765;
                            }
                            case 83: {
                                goto lab_0x408765;
                            }
                            case 84: {
                                goto lab_0x408808;
                            }
                            case 85: {
                                goto lab_0x408765;
                            }
                            case 86: {
                                goto lab_0x408765;
                            }
                            case 87: {
                                goto lab_0x408765;
                            }
                            case 88: {
                                goto lab_0x408765;
                            }
                            case 89: {
                                goto lab_0x4087d6;
                            }
                            case 90: {
                                goto lab_0x40879b;
                            }
                            case 91: {
                                goto lab_0x408765;
                            }
                            case 92: {
                                goto lab_0x408765;
                            }
                            case 93: {
                                goto lab_0x408765;
                            }
                            case 94: {
                                goto lab_0x408765;
                            }
                            case 95: {
                                goto lab_0x408765;
                            }
                            case 96: {
                                goto lab_0x408765;
                            }
                            case 97: {
                                goto lab_0x408765;
                            }
                            case 98: {
                                goto lab_0x40877f;
                            }
                            case 99: {
                                goto lab_0x408708;
                            }
                            case 100: {
                                goto lab_0x408765;
                            }
                            case 101: {
                                goto lab_0x408765;
                            }
                            case 102: {
                                goto lab_0x408765;
                            }
                            case 103: {
                                goto lab_0x4088a3;
                            }
                            case 104: {
                                goto lab_0x408765;
                            }
                            case 105: {
                                goto lab_0x408765;
                            }
                            case 106: {
                                goto lab_0x408765;
                            }
                            case 107: {
                                goto lab_0x40872c;
                            }
                            case 108: {
                                goto lab_0x408765;
                            }
                            case 109: {
                                goto lab_0x4086ee;
                            }
                            case 110: {
                                goto lab_0x408765;
                            }
                            case 111: {
                                goto lab_0x408765;
                            }
                            case 112: {
                                goto lab_0x408765;
                            }
                            case 113: {
                                goto lab_0x408765;
                            }
                            case 114: {
                                goto lab_0x408765;
                            }
                            case 115: {
                                goto lab_0x408765;
                            }
                            case 116: {
                                goto lab_0x408808;
                            }
                            default: {
                                goto lab_0x4086ca;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4086ca;
    }
  lab_0x4085f2:
    // 0x4085f2
    *a4 = v16;
    // 0x4085f5
    return v13 & 0xffffffff;
  lab_0x4086ca:
    // 0x4086ca
    g101 = v12 - 66;
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
    int64_t v46; // 0x408550
    switch (v12) {
        case 66: {
            // 0x4088c4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x408737;
            } else {
                // 0x4088d1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x408708;
            }
        }
        case 69: {
            goto lab_0x40886b;
        }
        case 71: {
            goto lab_0x4088a3;
        }
        case 75: {
            goto lab_0x40872c;
        }
        case 77: {
            goto lab_0x4086ee;
        }
        case 80: {
            goto lab_0x408838;
        }
        case 84: {
            goto lab_0x408808;
        }
        case 89: {
            goto lab_0x4087d6;
        }
        case 90: {
            goto lab_0x40879b;
        }
        case 98: {
            goto lab_0x40877f;
        }
        case 99: {
            goto lab_0x408708;
        }
        case 103: {
            goto lab_0x4088a3;
        }
        case 107: {
            goto lab_0x40872c;
        }
        case 109: {
            goto lab_0x4086ee;
        }
        case 116: {
            goto lab_0x408808;
        }
        case 119: {
            // 0x408770
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x408737;
            } else {
                // 0x408775
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x408708;
            }
        }
        default: {
            goto lab_0x408765;
        }
    }
  lab_0x40886b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x408883
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40888f
    int64_t v51 = v48; // 0x408892
    int64_t v52 = v37; // 0x408892
    int64_t v53 = v49; // 0x408892
    int32_t v54 = v50; // 0x408892
    int64_t v55 = v49; // 0x408892
    while (v50 != 0) {
        // 0x408880
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
    goto lab_0x4087c4;
  lab_0x4088a3:
    // 0x4088a3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x4088ae
        int128_t v56; // 0x4088a9
        uint128_t v57; // 0x4088a9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x4088ae
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x408550
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x4088b3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x4088b8
                v26 = v60;
                int64_t v61; // 0x408550
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x408708;
  lab_0x40872c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40872f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x408708;
    } else {
        goto lab_0x408737;
    }
  lab_0x4086ee:;
    int128_t v65 = v27; // 0x4086f4
    uint128_t v66 = v65 * (int128_t)v17; // 0x4086f4
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x408737;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x4086f9
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x408737;
        } else {
            // 0x4086fe
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x408708;
        }
    }
  lab_0x408838:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40884b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x408857
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40885a
    int64_t v73 = v70; // 0x40885a
    while (v71 != 0) {
        // 0x408848
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
    goto lab_0x4087c4;
  lab_0x408808:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40881b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x408827
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40882a
    int64_t v79 = v76; // 0x40882a
    while (v77 != 0) {
        // 0x408818
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
    goto lab_0x4087c4;
  lab_0x4087d6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x4087eb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x4087f7
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x4087fa
    int64_t v85 = v82; // 0x4087fa
    while (v83 != 0) {
        // 0x4087e8
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
    goto lab_0x4087c4;
  lab_0x40879b:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x4087b3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x4087bf
    int32_t v90 = v89; // 0x4087c2
    int64_t v91 = v88; // 0x4087c2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x4087b0
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
    goto lab_0x4087c4;
  lab_0x40877f:
    // 0x40877f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x408737;
    } else {
        // 0x408788
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x408708;
    }
  lab_0x408708:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40870d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x4085f2;
  lab_0x408765:
    // 0x408765
    *a4 = v18;
    // 0x4085f5
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x408737:
    // 0x408737
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x408708;
  lab_0x4087c4:
    // 0x4087c4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x408708;
}
// Address range: 0x408a70 - 0x40908c
int64_t function_408a70(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x408a8f
    int64_t v2 = *v1; // 0x408a8f
    char * str2 = (char *)v2; // 0x408a9c
    char c = *str2; // 0x408a9c
    int64_t v3 = v2; // 0x408ac8
    int64_t v4 = 0; // 0x408a70
    int32_t v5; // 0x408a70
    int64_t v6; // 0x408a70
    int64_t v7; // 0x408a70
    int64_t v8; // 0x408a70
    int64_t v9; // 0x408a70
    int64_t v10; // 0x408a70
    int64_t v11; // 0x408a70
    int64_t v12; // 0x408a70
    int64_t v13; // 0x408a70
    int64_t str3; // 0x408a70
    int64_t v14; // 0x408a70
    int64_t v15; // 0x408a70
    int64_t v16; // 0x408a70
    int64_t v17; // 0x408a70
    int32_t v18; // 0x408a70
    int32_t v19; // 0x408a70
    int32_t v20; // 0x408a70
    int32_t v21; // 0x408a70
    int32_t v22; // 0x408a70
    int32_t v23; // 0x408a70
    int32_t v24; // 0x408a70
    int32_t v25; // 0x408a70
    int32_t v26; // 0x408a70
    int32_t v27; // 0x408a70
    int32_t v28; // 0x408a70
    int32_t v29; // 0x408a70
    int64_t nmemb; // 0x408a70
    int64_t v30; // 0x408a70
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x408acc
            while (v31 != 0 == (v31 != 61)) {
                // 0x408ac8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x408ad8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x408ade
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x408aa8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x408b0c
                int64_t v34; // 0x408a70
                int64_t v35; // 0x408a70
                if (strncmp(str, str2, n) == 0) {
                    // 0x408b15
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408c90;
                    }
                }
                int64_t v36 = a4 + 32; // 0x408b26
                int64_t v37 = *(int64_t *)v36; // 0x408b2a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x408b00
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x408b15
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408c90;
                        }
                    }
                    // 0x408b26
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
                  lab_0x408b76:
                    // 0x408b76
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
                        goto lab_0x408bd0;
                    } else {
                        if (v11 == 0) {
                            // 0x408d40
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x408bd0;
                        } else {
                            if (v39 == 0) {
                                // 0x408cf0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x408b9a;
                                } else {
                                    // 0x408cfc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x408b9a;
                                    } else {
                                        // 0x408d0a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x408b9a;
                                        } else {
                                            goto lab_0x408bd0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x408b9a;
                            }
                        }
                    }
                }
              lab_0x408be1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408db6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x408f62
                            flockfile(g52);
                            int64_t v41 = *v1; // 0x408f82
                            __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x408fcf
                            int64_t v43 = (int64_t)g52;
                            int64_t v44 = v43; // 0x408fe9
                            int64_t v45; // 0x408feb
                            if (*(char *)v42 != 0) {
                                // 0x408feb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g52;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408fe3
                            while (v17 + nmemb != v42) {
                                // 0x408fe5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x408feb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g52;
                                }
                                // 0x408fd8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x409010
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g52);
                            v40 = *v1;
                        } else {
                            // 0x408dc4
                            __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x408f1f
                        free((int64_t *)v17);
                    }
                    // 0x408e19
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x408e30
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x408cde
                    return 63;
                }
                // 0x408c00
                v5 = v39;
                if (v13 != 0) {
                    // 0x408c84
                    v35 = v13;
                    v34 = v25;
                  lab_0x408c90:;
                    int32_t * v49 = (int32_t *)a7; // 0x408ca0
                    uint32_t v50 = *v49; // 0x408ca0
                    int64_t v51 = v50; // 0x408ca0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x408caa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408cb3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x408edf
                                __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x408e8a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x408cde
                            return 63;
                        }
                        // 0x408d28
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40903f
                                    __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x408f3d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x408f50
                                // 0x408cde
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x408e4e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x408e62
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x408ccb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x408cce
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408cd2
                    int64_t result = v59; // 0x408cd8
                    if (v58 != 0) {
                        // 0x408cda
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x408cde
                    return result;
                }
            } else {
                // 0x408ade
                v5 = v32;
            }
            // break -> 0x408c05
            break;
        }
    }
    // 0x408c05
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x408c1d
        if (*(char *)(v60 + 1) != 45) {
            // 0x408c27
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x408cde
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x408d69
        __fprintf_chk(g52, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x408c56
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x408c66
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x408bd0:
    // 0x408bd0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x408bd0
    int64_t v63 = *(int64_t *)v62; // 0x408bd4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x408be1
        goto lab_0x408be1;
    }
    goto lab_0x408b76;
  lab_0x408b9a:
    // 0x408b9a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x408a70
    int32_t v65; // 0x408a70
    int32_t v66; // 0x408a70
    if (v27 != 0) {
        goto lab_0x408bd0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x408d50
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x408bd0;
            } else {
                goto lab_0x408bc1;
            }
        } else {
            // 0x408bb5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x408eac
                int64_t v67 = (int64_t)mem; // 0x408eac
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x408bd0;
                } else {
                    // 0x408ebf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x408bc1;
                }
            } else {
                goto lab_0x408bc1;
            }
        }
    }
  lab_0x408bc1:
    // 0x408bc1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x408bd0;
}
// Address range: 0x409090 - 0x409656
int64_t function_409090(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4090b1
    if (v3 < 1) {
        // 0x40926e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4090ad
    int32_t v5 = *(int32_t *)a7; // 0x4090b9
    uint64_t v6 = a1 & 0xffffffff; // 0x4090bb
    int64_t v7 = v2; // 0x4090c0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4090c3
    *v8 = 0;
    int64_t v9; // 0x409090
    int64_t v10; // 0x409090
    int64_t v11; // 0x409090
    int64_t v12; // 0x409090
    int64_t str; // 0x409090
    int64_t v13; // 0x409090
    int64_t v14; // 0x409090
    int64_t v15; // 0x409090
    int64_t v16; // 0x409090
    int64_t v17; // 0x409090
    int32_t v18; // 0x409090
    char v19; // 0x409090
    if (v5 == 0) {
        // 0x4092a8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4090da;
    } else {
        // 0x4090d3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x409120
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x409123
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4091e8;
            } else {
                int64_t v22 = v7 + 1; // 0x409136
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x409146
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4091fc;
                } else {
                    goto lab_0x409158;
                }
            }
        } else {
            goto lab_0x4090da;
        }
    }
  lab_0x4090da:
    // 0x4090da
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4090e0
    *v24 = 0;
    int64_t v25; // 0x409090
    int64_t v26; // 0x409090
    int64_t v27; // 0x409090
    switch (*(char *)&v2) {
        case 45: {
            // 0x4091d0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4091dd;
        }
        case 43: {
            // 0x4094e0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4091dd;
        }
        default: {
            // 0x4090fc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40945f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x409578
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4091dd;
                } else {
                    // 0x40946d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40910a;
                }
            } else {
                goto lab_0x40910a;
            }
        }
    }
  lab_0x4091e8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4091ef
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x409158;
    } else {
        goto lab_0x4091fc;
    }
  lab_0x40910a:
    // 0x40910a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4091dd;
  lab_0x4091dd:
    // 0x4091dd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4091e8;
  lab_0x409158:;
    uint32_t v30 = *(int32_t *)a7; // 0x409158
    int64_t v31 = v30; // 0x409158
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40915a
    if ((int64_t)*v32 > v31) {
        // 0x40915f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x409162
    if (*v33 > v30) {
        // 0x409167
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40916a
    int64_t v35 = v31; // 0x40916e
    int64_t v36 = v15; // 0x40916e
    int64_t v37; // 0x409090
    int64_t v38; // 0x409090
    int64_t v39; // 0x409090
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4092d8
        int64_t v41 = v40; // 0x4092d8
        v2 = v41;
        int64_t v42; // 0x409090
        if (*v33 == v40) {
            // 0x4094c0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4094c8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4092e4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4092f8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x409301
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40930a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x409321
            int64_t v47 = v45 & 0xffffffff; // 0x409325
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40932e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x409334
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x409336;
                }
            }
            int64_t v48 = v47 + 1; // 0x409310
            int64_t v49 = v48 & 0xffffffff; // 0x409310
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x409321
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40932e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x409334
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x409336;
                    }
                }
                // 0x409310
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4094d8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x409336;
    } else {
        goto lab_0x409174;
    }
  lab_0x4091fc:
    // 0x4091fc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4091ff
    int64_t v51 = v12; // 0x4091ff
    int64_t v52 = v14; // 0x4091ff
    if (*(char *)v10 == 0) {
        goto lab_0x409158;
    } else {
        goto lab_0x409205;
    }
  lab_0x409174:;
    int32_t v53 = v35; // 0x409174
    int64_t v54; // 0x409090
    int64_t v55; // 0x409090
    int64_t v56; // 0x409090
    int64_t v57; // 0x409090
    int64_t v58; // 0x409090
    int64_t v59; // 0x409090
    char * v60; // 0x409090
    int64_t v61; // 0x409090
    int64_t v62; // 0x409189
    int64_t v63; // 0x409090
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4092c3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4092c6;
    } else {
        // 0x40917c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x409090
        int64_t v66 = v65 ? -1 : 1; // 0x409190
        int64_t v67 = (int64_t)"--"; // 0x409090
        int64_t v68 = v62; // 0x409090
        int64_t v69 = 3; // 0x409190
        unsigned char v70 = *(char *)v68; // 0x409190
        char v71 = *(char *)v67; // 0x409190
        char v72 = v71; // 0x409190
        bool v73 = false; // 0x409190
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
            // 0x409280
            if (*(char *)v62 == 45) {
                // 0x409340
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x409340
                if (c == 0) {
                    goto lab_0x40928a;
                } else {
                    // 0x40934d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4093d0;
                    } else {
                        if (c == 45) {
                            // 0x4095b3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x409425;
                        } else {
                            // 0x40935e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4093d0;
                            } else {
                                // 0x409363
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x409384;
                                } else {
                                    // 0x40936a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4093d0;
                                    } else {
                                        goto lab_0x409384;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40928a;
            }
        } else {
            uint32_t v75 = *v33; // 0x4091a0
            v2 = v75;
            int32_t v76 = *v32; // 0x4091a3
            int64_t v77 = v35 + 1; // 0x4091a6
            int32_t v78 = v77; // 0x4091a9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x409510
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x4091b7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4091c5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4092c6;
        }
    }
  lab_0x409205:;
    // 0x409205
    int64_t v79; // bp-104, 0x409090
    int64_t v80 = &v79; // 0x40909a
    int64_t v81 = v50 + 1; // 0x409205
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40920c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x409211
    *v83 = v81;
    char v84 = *(char *)v2; // 0x409215
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x409219
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x409221
    *v86 = v84;
    char * str2 = (char *)v52; // 0x409226
    int32_t c2 = v84; // 0x409226
    char * found_char_pos = strchr(str2, c2); // 0x409226
    int64_t v87 = *v82; // 0x40922b
    v2 = v87;
    int64_t v88 = *v85; // 0x409235
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x409240
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x409530
            __fprintf_chk(g52, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4094fd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40926e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x409226
    char v91 = *(char *)(v90 + 1); // 0x40925b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x409215
        if (v91 != 58) {
            // 0x40926e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x409484
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x409588
                *v8 = 0;
            } else {
                // 0x40956c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4094ae
            *v83 = 0;
            // 0x40926e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40948e
        if (v93 != 0) {
            // 0x409520
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4094ae
            *v83 = 0;
            // 0x40926e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4094a1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4094ae
            *v83 = 0;
            // 0x40926e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4095ea
            __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40959a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4095a1
        // 0x4094ae
        *v83 = 0;
        // 0x40926e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4093f9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4093fb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x409620
                __fprintf_chk(g52, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4095d1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4095d8
            // 0x40926e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x409406
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40940a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x409425;
  lab_0x409336:
    // 0x409336
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x409174;
  lab_0x409425:;
    int64_t v99 = function_408a70(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x409443
    // 0x40926e
    return v99 & 0xffffffff;
  lab_0x4092c6:;
    int32_t v100 = v55; // 0x4092c6
    if (v100 != (int32_t)v59) {
        // 0x4092ca
        *(int32_t *)a7 = v100;
    }
    // 0x40926e
    return 0xffffffff;
  lab_0x40928a:
    // 0x40928a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x409291
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40926e
    return v99 & 0xffffffff;
  lab_0x4093d0:
    // 0x4093d0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x409205;
  lab_0x409384:
    // 0x409384
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_408a70(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g20); // 0x4093aa
    if ((int32_t)v101 != -1) {
        // 0x40926e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4093bf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4093d0;
}
// Address range: 0x409660 - 0x4096b6
int64_t function_409660(int64_t a1) {
    // 0x409660
    *(int32_t *)&g84 = g46;
    *(int32_t *)&g85 = g45;
    int64_t v1; // 0x409660
    int64_t result = function_409090(v1, v1, v1, v1, v1, v1, &g84, a1 & 0xffffffff); // 0x409686
    g46 = *(int32_t *)&g84;
    g91 = (char *)g87;
    *(int32_t *)&g44 = g86;
    return result;
}
// Address range: 0x4096c0 - 0x4096d8
int64_t function_4096c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4096c0
    return function_409660(1);
}
// Address range: 0x4096e0 - 0x4096f3
int64_t function_4096e0(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x4096e0
    return function_409660(0);
}
// Address range: 0x409700 - 0x409715
int64_t function_409700(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409700
    return function_409090(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x409720 - 0x409736
int64_t function_409720(void) {
    // 0x409720
    return function_409660(0);
}
// Address range: 0x409740 - 0x409758
int64_t function_409740(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409740
    return function_409090(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x409760 - 0x4097da
int64_t function_409760(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40976b
    int64_t v2 = (int64_t)&g21; // 0x40976b
    int32_t * pwc; // 0x409760
    int64_t v3; // 0x409760
    int64_t n; // 0x409760
    if (a2 == 0) {
        goto lab_0x4097b2;
    } else {
        // 0x40976d
        if (a3 == 0) {
            // 0x409798
            return -2;
        }
        // 0x409779
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4097b2;
        } else {
            goto lab_0x409784;
        }
    }
  lab_0x4097b2:
    // 0x4097b2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x409760
    pwc = (int32_t *)&v4;
    goto lab_0x409784;
  lab_0x409784:;
    char * wstr = (char *)v3; // 0x40978a
    int64_t ps; // 0x409760
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40978a
    int64_t result = v5; // 0x40978a
    if (v5 < 0xfffffffe) {
        // 0x409798
        return result;
    }
    int64_t result2 = result; // 0x4097c9
    if ((char)function_409840(0, v3) == 0) {
        // 0x4097cb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x409798
    return result2;
}
// Address range: 0x4097e0 - 0x40983d
int64_t function_4097e0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4097e7
    int64_t v2; // 0x4097e0
    int64_t result = function_409e10(a1, v2); // 0x4097f8
    if ((v2 & 32) != 0) {
        // 0x409820
        if ((int32_t)result == 0) {
            // 0x409824
            *__errno_location() = 0;
        }
        // 0x40981a
        return 0xffffffff;
    }
    // 0x409801
    if ((int32_t)result == 0) {
        // 0x40981a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x409808
    if (v1 == 0) {
        // 0x40980a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40981a
    return result2;
}
// Address range: 0x409840 - 0x40989e
int64_t function_409840(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x409846
    if (locale == NULL) {
        // 0x409873
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x409846
    bool v2; // 0x409840
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g22; // 0x409840
    int64_t v5 = v1; // 0x409840
    int64_t v6 = 2; // 0x409865
    unsigned char v7 = *(char *)v5; // 0x409865
    char v8 = *(char *)v4; // 0x409865
    char v9 = v8; // 0x409865
    bool v10 = false; // 0x409865
    while (v7 == v8) {
        // 0x409858
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
    int64_t v12 = (int64_t)"POSIX"; // 0x409871
    int64_t v13 = v1; // 0x409871
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x409873
        return 0;
    }
    int64_t v14 = 6; // 0x409871
    unsigned char v15 = *(char *)v13; // 0x40988d
    char v16 = *(char *)v12; // 0x40988d
    char v17 = v16; // 0x40988d
    bool v18 = false; // 0x40988d
    while (v15 == v16) {
        // 0x409880
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
// Address range: 0x4098a0 - 0x409e02
int64_t function_4098a0(void) {
    char * v1 = nl_langinfo(14); // 0x4098b6
    char * v2 = g88; // 0x4098bb
    char * v3; // 0x4098a0
    int64_t v4; // 0x4098a0
    int64_t v5; // 0x4098a0
    int64_t v6; // 0x4098a0
    int64_t v7; // 0x4098a0
    int32_t size; // 0x4098a0
    int32_t size2; // 0x4098a0
    int32_t len; // 0x409972
    int64_t v8; // 0x409972
    char * env_val; // 0x40995d
    if (v2 == NULL) {
        // 0x409958
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4099c5;
        } else {
            // 0x40996a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4099c5;
            } else {
                // 0x40996f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40995d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409df5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4099c5;
                    } else {
                        // 0x409d69
                        size2 = len + 14;
                        goto lab_0x40998b;
                    }
                } else {
                    goto lab_0x40998b;
                }
            }
        }
    } else {
        // 0x4098a0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4098da;
    }
  lab_0x409c0c:;
    // 0x409c0c
    struct _IO_FILE * stream; // 0x409a4b
    int32_t v10 = __uflow(stream); // 0x409c0f
    int64_t v11; // 0x4098a0
    int64_t v12 = v11; // 0x409c19
    int64_t v13; // 0x4098a0
    int64_t v14 = v13; // 0x409c19
    int32_t v15 = v10; // 0x409c19
    int64_t v16; // 0x4098a0
    int64_t v17 = v16; // 0x409c19
    int64_t v18 = v11; // 0x409c19
    int64_t v19 = v13; // 0x409c19
    int64_t v20 = v16; // 0x409c19
    if (v10 == -1) {
        // break -> 0x409c1f
        goto lab_0x409c1f;
    }
    goto lab_0x409a99;
  lab_0x409a8e:;
    // 0x409a8e
    int64_t v90; // 0x4098a0
    int64_t * v32; // 0x409a80
    *v32 = v90 + 1;
    int64_t v89; // 0x4098a0
    v12 = v89;
    int64_t v91; // 0x4098a0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4098a0
    v17 = v92;
    goto lab_0x409a99;
  lab_0x409a99:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4098a0
    int32_t v25; // bp-120, 0x4098a0
    int32_t v26; // bp-184, 0x4098a0
    int64_t v27; // 0x409a4b
    int64_t v28; // 0x409a68
    int64_t v29; // 0x409a6d
    int64_t * v30; // 0x409a84
    switch (c) {
        case 32: {
            goto lab_0x409a80;
        }
        case 10: {
            goto lab_0x409a80;
        }
        case 9: {
            goto lab_0x409a80;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409c71
            int32_t v33; // 0x4098a0
            char v34; // 0x4098a0
            int32_t v35; // 0x409c7e
            if (v31 < *v30) {
                // 0x409c50
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x409c7b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409c71
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409c50
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x409c7b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409c60
                v36 = v33;
            }
            // 0x409d4f
            if (v36 == -1) {
                // break -> 0x409c1f
                break;
            }
            goto lab_0x409a80;
        }
        default: {
            // 0x409aaf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x409c1f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409ad8
            int64_t v39 = v37 + 4; // 0x409ada
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409ae6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409ae8
            while (v41 == 0) {
                // 0x409ad8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409b06
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409b12
            int64_t v45 = v43 + 4; // 0x409b14
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409b20
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409b22
            while (v47 == 0) {
                // 0x409b12
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x409b0f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409b38
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409b48
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x409b4c
            int64_t v52 = v51 + v48; // 0x409b55
            int64_t * mem; // 0x4098a0
            int64_t v53; // 0x4098a0
            int64_t v54; // 0x4098a0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x409c8b
                int64_t v56 = v55 + 3; // 0x409c97
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409b71
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409b80
            if (mem == NULL) {
                // 0x409dac
                free((int64_t *)v21);
                function_409e10(v27, v53);
                v24 = (int64_t)&g21;
                goto lab_0x409a24;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409b98
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409ba2
            uint32_t v62 = (int32_t)v59; // 0x409ba5
            int64_t v63; // 0x4098a0
            if (v62 >= 8) {
                // 0x409cb4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x409cce
                int64_t v66 = v61 - v65; // 0x409cd2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x409cdd
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x409cee
                    int64_t v70 = v69 & 0xffffffff; // 0x409cee
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x409ceb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x409d7f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409bb7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x409bbb
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
            int64_t v73 = v51 + 1; // 0x409bcb
            int64_t v74 = v60 - 1; // 0x409bcf
            uint32_t v75 = (int32_t)v73; // 0x409bd4
            int64_t v76; // 0x4098a0
            if (v75 >= 8) {
                // 0x409d02
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x409d0c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x409d1c
                int64_t v80 = v74 - v79; // 0x409d20
                uint32_t v81 = (int32_t)(v80 + v73); // 0x409d2b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x409d3b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409d39
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409d96
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x409d9e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409be6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x409bea
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409de3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x409bfe
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x409a8e;
            } else {
                goto lab_0x409c0c;
            }
        }
    }
  lab_0x409a80:;
    int64_t v93 = v23; // 0x4098a0
    int64_t v94 = v22; // 0x4098a0
    int64_t v95 = v21; // 0x4098a0
    goto lab_0x409a80_2;
  lab_0x4099c5:;
    int64_t * mem3 = malloc(size); // 0x4099c5
    int64_t v97 = (int64_t)&g21; // 0x4099d0
    int64_t v98; // 0x4098a0
    int64_t path; // 0x4098a0
    if (mem3 == NULL) {
        goto lab_0x4099a2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4099c5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4099e6;
    }
  lab_0x4098da:;
    int64_t str = v1 == NULL ? (int64_t)&g21 : (int64_t)v1; // 0x4098cd
    char v100 = *v3; // 0x4098da
    int64_t v101; // 0x4098a0
    if (v100 == 0) {
        // 0x409934
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4098a0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4098a0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x409920
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x409927;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4098f0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4098fd
        char v107 = *(char *)v106; // 0x409902
        v102 = v107;
        if (v107 == 0) {
            // 0x409934
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40990b
    v104 = v103 + 1;
  lab_0x409927:
    // 0x409934
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4099a2:;
    char * v108 = (char *)v97;
    g88 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4098da;
  lab_0x4099e6:;
    int64_t v109 = v98 + path; // 0x4099e6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x409a12
    v24 = (int64_t)&g21;
    if (fd >= 0) {
        // 0x409a41
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409d72
            close(fd);
            v24 = (int64_t)&g21;
        } else {
            // 0x409a65
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409a80_2:;
                uint64_t v96 = *v32; // 0x409a80
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x409c0c;
                } else {
                    goto lab_0x409a8e;
                }
            }
          lab_0x409c1f:
            // 0x409c1f
            function_409e10(v27, v19);
            v24 = (int64_t)&g21;
            if (v18 != 0) {
                // 0x409c3e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x409a24;
  lab_0x40998b:;
    int64_t * mem4 = malloc(size2); // 0x40998b
    v97 = (int64_t)&g21;
    if (mem4 != NULL) {
        // 0x409a31
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4099e6;
    } else {
        goto lab_0x4099a2;
    }
  lab_0x409a24:
    // 0x409a24
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4099a2;
}
// Address range: 0x409e10 - 0x409e8b
int64_t function_409e10(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x409e17
    if (fileno(stream) < 0) {
        // 0x409e77
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x409e2a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x409e5b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x409e77
            return fclose(stream);
        }
    }
    // 0x409e2c
    if ((int32_t)function_409e90(a1, v1) == 0) {
        // 0x409e77
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x409e38
    int32_t v3 = *v2; // 0x409e40
    int64_t result = fclose(stream); // 0x409e4e
    if (v3 != 0) {
        // 0x409e80
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x409e50
    return result;
}
// Address range: 0x409e90 - 0x409ed0
int64_t function_409e90(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x409eaa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x409eaa
        return fflush(stream);
    }
    // 0x409eb8
    function_409ed0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x409ed0 - 0x409f27
int64_t function_409ed0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x409ed0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x409eda
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x409f0b
    int64_t result = -1; // 0x409f14
    if (v1 != -1) {
        // 0x409f16
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x409f22
    return result;
}
// Address range: 0x409f30 - 0x409f8d
int64_t function_409f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409f30
    return function_4016e8();
}
// Address range: 0x409f90 - 0x409f91
int64_t function_409f90(void) {
    // 0x409f90
    int64_t result; // 0x409f90
    return result;
}
// Address range: 0x409fa0 - 0x409fb8
int64_t function_409fa0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409fa0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g27);
}
// Address range: 0x409fb8 - 0x409fd8
int64_t function_409fb8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g23; // 0x409fc2
    while (*(int64_t *)v1 != -1) {
        // 0x409fc3
        v1 -= 8;
    }
    // 0x409fd4
    return result;
}
