#include "decompile_retdec.h"
// Address range: 0x401bf0 - 0x401bf5
int64_t function_401bf0(void) {
    // 0x401bf0
    return abort();
}
// Address range: 0x401bf5 - 0x401bfa
int64_t function_401bf5(void) {
    // 0x401bf5
    return abort();
}
// Address range: 0x401bfa - 0x401bff
int64_t function_401bfa(void) {
    // 0x401bfa
    abort();
    // UNREACHABLE
}
// Address range: 0x401bff - 0x401c04
int64_t function_401bff(void) {
    // 0x401bff
    abort();
    // UNREACHABLE
}
// Address range: 0x401c04 - 0x401c09
int64_t function_401c04(void) {
    // 0x401c04
    abort();
    // UNREACHABLE
}
// Address range: 0x401c09 - 0x401c0e
int64_t function_401c09(void) {
    // 0x401c09
    abort();
    // UNREACHABLE
}
// Address range: 0x401c0e - 0x401c13
int64_t function_401c0e(void) {
    // 0x401c0e
    abort();
    // UNREACHABLE
}
// Address range: 0x401c13 - 0x401c18
int64_t function_401c13(void) {
    // 0x401c13
    abort();
    // UNREACHABLE
}
// Address range: 0x401c18 - 0x401c1d
int64_t function_401c18(void) {
    // 0x401c18
    abort();
    // UNREACHABLE
}
// Address range: 0x401c1d - 0x401c22
int64_t function_401c1d(void) {
    // 0x401c1d
    abort();
    // UNREACHABLE
}
// Address range: 0x401c22 - 0x401c27
int64_t function_401c22(void) {
    // 0x401c22
    abort();
    // UNREACHABLE
}
// Address range: 0x401c27 - 0x401c2c
int64_t function_401c27(void) {
    // 0x401c27
    abort();
    // UNREACHABLE
}
// Address range: 0x401c2c - 0x401c31
int64_t function_401c2c(void) {
    // 0x401c2c
    return abort();
}
// Address range: 0x401c31 - 0x401c36
int64_t function_401c31(void) {
    // 0x401c31
    abort();
    // UNREACHABLE
}
// Address range: 0x401c40 - 0x4028e0
int64_t function_401c40(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x401c55
    int64_t v3; // bp-280, 0x401c40
    int64_t v4 = &v3; // 0x401c5c
    int64_t v5 = 0; // bp-224, 0x401c66
    function_403510(a2);
    setlocale(LC_ALL, (char *)&g12);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v6; // 0x401c40
    function_40a910(0x402d90, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v6);
    *(char *)&g40 = 0;
    *(char *)&g41 = 0;
    g42 = 0;
    int64_t v7 = v2 & 0xffffffff; // 0x401cd0
    int64_t v8 = a2 - 8;
    int64_t v9 = 0; // 0x401cbb
    int64_t v10 = 0; // 0x401cbb
    int64_t v11 = 0; // 0x401cbb
    int64_t v12 = 0; // 0x401cbb
    int64_t v13; // 0x401c40
    int64_t v14; // 0x401c40
    int64_t v15; // 0x401c40
    int64_t v16; // 0x401c40
    int64_t v17; // 0x401c40
    int64_t v18; // 0x401c40
    while (true) {
      lab_0x401cc0_2:
        // 0x401cc0
        v16 = v12;
        v15 = v11;
        v14 = v10;
        v13 = v9;
        int64_t v19 = v18;
        int64_t v20 = function_408a70(v7, a2, "Rcfvr::w::x::X::s::t::u::g::o::a::,::+::=::0::1::2::3::4::5::6::7::", &g2, 0, v19); // 0x401cd2
        int32_t v21 = v20;
        switch (v21) {
            case -1: {
                goto lab_0x401f35;
            }
            case 99: {
                // 0x401ed0
                g20 = 1;
                v17 = v19;
                v9 = v13;
                v10 = v14;
                v11 = v15;
                v12 = v16;
                goto lab_0x401cc0;
            }
            default: {
                if (v21 > 99) {
                    if (v21 == 118) {
                        // 0x401ee0
                        g20 = 0;
                        v17 = v19;
                        v9 = v13;
                        v10 = v14;
                        v11 = v15;
                        v12 = v16;
                        goto lab_0x401cc0;
                    } else {
                        if (v21 > 118) {
                            // 0x401cfa
                            v17 = v19;
                            v9 = 0;
                            v10 = v14;
                            v11 = v15;
                            v12 = v16;
                            if (v21 == 128) {
                                goto lab_0x401cc0;
                            } else {
                                if (v21 > 128) {
                                    // 0x401d0b
                                    v17 = v19;
                                    v9 = 1;
                                    v10 = v14;
                                    v11 = v15;
                                    v12 = v16;
                                    if (v21 != 129) {
                                        if (v21 != 130) {
                                            // 0x401e41
                                            function_4029c0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401d93
                                        v17 = v19;
                                        v9 = v13;
                                        v10 = v14;
                                        v11 = v15;
                                        v12 = g58;
                                    }
                                    goto lab_0x401cc0;
                                } else {
                                    if (v21 >= 121) {
                                        // 0x401e41
                                        function_4029c0(1);
                                        // UNREACHABLE
                                    }
                                    goto lab_0x401db0;
                                }
                            }
                        } else {
                            if (v21 == 111) {
                                goto lab_0x401db0;
                            } else {
                                if (v21 > 111) {
                                    if (v21 <= 113) {
                                        // 0x401e41
                                        function_4029c0(1);
                                        // UNREACHABLE
                                    }
                                    goto lab_0x401db0;
                                } else {
                                    if (v21 != 102) {
                                        if (v21 != 103) {
                                          lab_0x401e41:
                                            // 0x401e41
                                            function_4029c0(1);
                                            // UNREACHABLE
                                        }
                                        goto lab_0x401db0;
                                    } else {
                                        // 0x401e60
                                        *(char *)&g41 = 1;
                                        v17 = v19;
                                        v9 = v13;
                                        v10 = v14;
                                        v11 = v15;
                                        v12 = v16;
                                        goto lab_0x401cc0;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (v21 > 55) {
                        if (v21 != 82) {
                            if (v21 > 82) {
                                switch (v21) {
                                    case 88: {
                                        goto lab_0x401db0;
                                    }
                                    case 97: {
                                        goto lab_0x401db0;
                                    }
                                    default: {
                                        goto lab_0x401e41;
                                    }
                                }
                            } else {
                                if (v21 != 61) {
                                    // 0x401e41
                                    function_4029c0(1);
                                    // UNREACHABLE
                                }
                                goto lab_0x401db0;
                            }
                        } else {
                            // 0x401e25
                            g42 = 1;
                            v17 = v19;
                            v9 = v13;
                            v10 = v14;
                            v11 = v15;
                            v12 = v16;
                            goto lab_0x401cc0;
                        }
                    } else {
                        if (v21 <= 47) {
                            if (v21 == -130) {
                                // 0x40281b
                                function_4029c0(0);
                                // UNREACHABLE
                            }
                            if (v21 <= 0xffffff7e) {
                                if (v21 == -131) {
                                    // 0x401d4a
                                    function_405600((int64_t)g33, "chmod", "GNU coreutils", (int64_t)g21, "David MacKenzie", "Jim Meyering");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401e41;
                            }
                            if (v21 >= 45) {
                                // 0x401e41
                                function_4029c0(1);
                                // UNREACHABLE
                            }
                        }
                        goto lab_0x401db0;
                    }
                }
            }
        }
    }
  lab_0x401f35:;
    int64_t v22; // 0x401c40
    int64_t v23; // 0x401c40
    int64_t v24; // 0x401c40
    int64_t v25; // 0x401c40
    if (v16 == 0) {
        int64_t v26 = g30; // 0x4022ce
        if (v15 == 0) {
            int64_t v27 = *(int64_t *)(8 * v26 + a2); // 0x4025de
            g30 = &g31;
            v23 = v27;
            if (v2 > (int64_t)&g31) {
                goto lab_0x4022e6;
            } else {
                // 0x4025f0
                v25 = v26 + 1;
                v24 = v27;
                if (v27 == 0) {
                    // 0x40260d
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing operand", 5));
                    // 0x401e41
                    function_4029c0(1);
                    // UNREACHABLE
                }
                goto lab_0x4025f5;
            }
        } else {
            // 0x4022de
            v23 = v15;
            v25 = v26;
            v24 = v15;
            if (v2 > v26) {
                goto lab_0x4022e6;
            } else {
                goto lab_0x4025f5;
            }
        }
    } else {
        // 0x401f3e
        if (v15 != 0) {
            // 0x40260d
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot combine mode and --reference options", 5));
            // 0x401e41
            function_4029c0(1);
            // UNREACHABLE
        }
        // 0x401f47
        if (g30 >= (int32_t)v2) {
            // 0x40260d
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing operand", 5));
            // 0x401e41
            function_4029c0(1);
            // UNREACHABLE
        }
        int64_t v28 = function_403330(v16); // 0x401f56
        g44 = v28;
        v22 = v15;
        if (v28 == 0) {
            // 0x4028a3
            function_404ee0(4, v16);
            error(1, *__errno_location(), dcgettext(NULL, "failed to get attributes of %s", 5));
            return &g62;
        }
        goto lab_0x401f6b;
    }
  lab_0x401cc0:
    // 0x401cc0
    v18 = v17;
    goto lab_0x401cc0_2;
  lab_0x401db0:;
    int64_t str = *(int64_t *)(8 * (int64_t)*(int32_t *)0x60f2dc + v8); // 0x401db7
    int32_t len = strlen((char *)str); // 0x401dc4
    int64_t v29 = v14 + (int64_t)(v14 != 0); // 0x401dd9
    int64_t v30 = v29 + (int64_t)len; // 0x401ddc
    int64_t v31 = v15; // 0x401de5
    if (v5 <= v30) {
        // 0x401eef
        v5 = v30 + 1;
        v31 = function_4058a0(v15, &v5);
    }
    // 0x401deb
    *(char *)(v31 + v14) = 44;
    memcpy((int64_t *)(v31 + v29), (int64_t *)str, len + 1);
    *(char *)&g40 = 1;
    v17 = v30;
    v9 = v13;
    v10 = v30;
    v11 = v31;
    v12 = v16;
    goto lab_0x401cc0;
  lab_0x401f6b:;
    int32_t * err_num = __errno_location(); // 0x401f6b
    unsigned char v32 = g42 & (char)v13; // 0x401f70
    int64_t v33; // 0x401c40
    int64_t v34; // 0x401c40
    int64_t v35; // 0x401c40
    int64_t v36; // 0x401c40
    int64_t v37; // 0x401c40
    if (v32 != 0) {
        int64_t v38 = function_405150(&g38); // 0x402691
        g39 = v38;
        if (v38 != 0) {
            goto lab_0x401f90;
        } else {
            int64_t v39 = function_404ee0(4, (int64_t)"/"); // 0x4026b0
            error(1, *err_num, dcgettext(NULL, "failed to get attributes of %s", 5));
            v37 = v39;
            v36 = v2;
            v33 = v32;
            v34 = v14;
            v35 = v22;
            goto lab_0x4026e2;
        }
    } else {
        // 0x401f85
        g39 = 0;
        goto lab_0x401f90;
    }
  lab_0x4022e6:;
    int64_t v40 = function_402fc0(v23); // 0x4022e9
    g44 = v40;
    if (v40 == 0) {
        // 0x402831
        function_405130(v23);
        error(0, (int32_t)"invalid mode: %s" ^ (int32_t)"invalid mode: %s", dcgettext(NULL, "invalid mode: %s", 5));
        function_4029c0(1);
        // UNREACHABLE
    }
    // 0x4022fe
    g43 = umask(0);
    v22 = v23;
    goto lab_0x401f6b;
  lab_0x4025f5:
    // 0x4025f5
    if (*(int64_t *)((0x100000000 * v25 >> 29) + v8) != v24) {
        // 0x40260d
        int64_t v41; // 0x401c40
        int64_t v42 = v41;
        error(0, 0, dcgettext(NULL, (char *)v42, 5));
        // 0x401e41
        function_4029c0(1);
        // UNREACHABLE
    }
    // 0x40286f
    function_405130(*(int64_t *)(v8 + (v1 >> 29)));
    error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
    // 0x401e41
    function_4029c0(1);
    // UNREACHABLE
  lab_0x401f90:;
    int64_t v43 = function_4059d0(8 * (int64_t)g30 + a2, 1041); // 0x401faa
    int64_t v44 = fts_read(v43); // 0x401fbf
    g59 = v44;
    int64_t v45 = 1; // 0x401fca
    int64_t v46 = v43; // 0x401fca
    if (v44 == 0) {
        goto lab_0x402003;
    } else {
        goto lab_0x401fd0;
    }
  lab_0x402003:;
    int64_t * err_num2 = (int64_t *)(v4 + 32); // 0x402003
    int64_t v47 = v45; // 0x40200b
    if (*(int32_t *)*err_num2 != 0) {
        // 0x40200d
        v47 = 0;
        if (*(char *)&g41 == 0) {
            // 0x402663
            error(0, *(int32_t *)*err_num2, dcgettext(NULL, "fts_read failed", 5));
            v47 = 0;
        }
    }
    int64_t v48 = v47; // 0x402028
    if ((int32_t)fts_close(v46) != 0) {
        // 0x4025b0
        error(0, *(int32_t *)*err_num2, dcgettext(NULL, "fts_close failed", 5));
        v48 = 0;
    }
    // 0x40202e
    return v48 % 256 ^ 1;
  lab_0x401fd0:;
    int64_t v49 = 0;
    int64_t v50 = 1;
    int64_t str2 = *(int64_t *)(v44 + 56); // 0x401fd5
    int64_t v51 = v50; // 0x401fe3
    int64_t v52 = v43; // 0x401fe3
    int64_t v53 = 1; // 0x401fe3
    int64_t v54; // 0x401c40
    switch (v44) {
        case 2: {
            // 0x40211a
            if ((char)function_405a20(v43, v44) != 0) {
                // 0x402627
                function_404fb0(0, 3, str2);
                error(0, (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5));
                v51 = v50;
                v52 = v43;
                v53 = 0;
                goto lab_0x401ff0;
            } else {
                goto lab_0x40212d;
            }
        }
        case 4: {
            // 0x402046
            if (*(char *)&g41 == 0) {
                // 0x402591
                function_404ee0(4, str2);
                v54 = (int64_t)"cannot read directory %s";
                goto lab_0x402279;
            } else {
                goto lab_0x402058;
            }
        }
        case 6: {
            goto lab_0x401ff0;
        }
        case 7: {
            // 0x402298
            if (*(char *)&g41 == 0) {
                // 0x4022a5
                error(0, *(int32_t *)(v44 + 64), "%s", (char *)function_404fb0(0, 3, str2));
            }
            goto lab_0x402058;
        }
        case 10: {
            // 0x402240
            if (*(int64_t *)(v44 + 88) != 0) {
                goto lab_0x402252;
            } else {
                int64_t * v55 = (int64_t *)(v44 + 32); // 0x402247
                if (*v55 == 0) {
                    // 0x402769
                    *v55 = 1;
                    fts_set(v43, v44, 1);
                    v51 = v50;
                    v52 = v43;
                    v53 = 1;
                    goto lab_0x401ff0;
                } else {
                    goto lab_0x402252;
                }
            }
        }
        case 13: {
            // 0x4021fc
            if (*(char *)&g41 == 0) {
                // 0x402209
                function_404ee0(4, str2);
                error(0, (int32_t)"cannot operate on dangling symlink %s" ^ (int32_t)"cannot operate on dangling symlink %s", dcgettext(NULL, "cannot operate on dangling symlink %s", 5));
            }
            goto lab_0x402058;
        }
        default: {
            goto lab_0x40212d;
        }
    }
  lab_0x4026e2:;
    int64_t v56 = v37; // 0x4026e9
    int64_t v57 = v36; // 0x4026e9
    int64_t v58 = v33; // 0x4026e9
    int64_t v59 = v34; // 0x4026e9
    int64_t v60 = v35; // 0x4026e9
    if (*(char *)&g41 == 0) {
        // 0x40278c
        function_404ee0(4, v33);
        char * format = dcgettext(NULL, "getting new attributes of %s", 5); // 0x4027a8
        error(0, *(int32_t *)*(int64_t *)(v4 + 32), format);
        v56 = v37;
        v57 = v36;
        v58 = v33;
        v59 = v34;
        v60 = v35;
    }
    goto lab_0x4026ef;
  lab_0x401ff0:;
    int64_t v78 = fts_read(v52); // 0x401ff6
    v45 = v51 & 0xffffffff & v53;
    v46 = v52;
    if (v78 != 0) {
        // 0x401ff0
        goto lab_0x401fd0;
    } else {
        goto lab_0x402003;
    }
  lab_0x40212d:
    // 0x40212d
    if (g39 == 0) {
        goto lab_0x402149;
    } else {
        // 0x402139
        if (*(int64_t *)(v44 + 128) == *(int64_t *)g39) {
            // 0x4024d2
            if (*(int64_t *)(v44 + 120) != *(int64_t *)(g39 + 8)) {
                goto lab_0x402149;
            } else {
                // 0x4024e0
                if (strcmp((char *)str2, "/") != 0) {
                    // 0x4027c8
                    function_404e00(1, 4, (int64_t *)"/");
                    function_404e00(0, 4, (int64_t *)str2);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
                } else {
                    // 0x4024f5
                    function_404ee0(4, str2);
                    error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
                }
                // 0x402527
                error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
                fts_set(v43, v44, 4);
                fts_read(v43);
                v51 = v50;
                v52 = v43;
                v53 = 0;
                goto lab_0x401ff0;
            }
        } else {
            goto lab_0x402149;
        }
    }
  lab_0x4026ef:;
    int64_t v61 = v56; // 0x4026f6
    int64_t v62 = v57; // 0x4026f6
    int64_t v63 = v58; // 0x4026f6
    int64_t v64 = v59; // 0x4026f6
    int64_t v65 = v60; // 0x4026f6
    if (g20 == 0) {
        // 0x4026fc
        function_402e30(*(int32_t *)(v4 + 8), v4 + 68);
        char v66 = v60; // 0x402713
        *(char *)(v4 + 78) = v66;
        function_402e30(*(int32_t *)(v4 + 12), v4 + 80);
        *(char *)(v4 + 90) = v66;
        char * v67 = dcgettext(NULL, "mode of %s retained as %04lo (%s)\n", 5); // 0x40272e
        function_404ee0(4, v58);
        __printf_chk(1, v67);
        v61 = v56;
        v62 = v57;
        v63 = v58;
        v64 = v59;
        v65 = v60;
    }
    goto lab_0x40241a;
  lab_0x402149:;
    int32_t v87 = *(int32_t *)(v44 + 144); // 0x402149
    int64_t * path = (int64_t *)(v4 + 16); // 0x402166
    *path = *(int64_t *)(v44 + 48);
    int32_t v88 = v87 & 0xf000; // 0x40216b
    int32_t * v79 = (int32_t *)(v4 + 12); // 0x402172
    *v79 = v87;
    int32_t mode = function_403390(v87, (int64_t)(v88 == 0x4000), g43, (int64_t)g44, 0); // 0x40218b
    int32_t * v81 = (int32_t *)(v4 + 8); // 0x40218b
    *v81 = mode;
    int64_t v71; // 0x401c40
    int64_t v72; // 0x401c40
    int32_t v80; // 0x401c40
    int64_t v70; // 0x401c40
    int64_t v69; // 0x401c40
    if (v88 == 0xa000) {
        int32_t v89 = g20; // 0x402318
        v69 = v50;
        v70 = v43;
        v71 = v44;
        v72 = 1;
        if (v89 != 2 && v89 == 0) {
            // 0x402327
            function_404ee0(4, str2);
            __printf_chk(1, dcgettext(NULL, "neither symbolic link %s nor referent has been changed\n", 5));
            v69 = v50;
            v70 = v43;
            v71 = v44;
            v72 = 1;
        }
        goto lab_0x4020f8;
    } else {
        int32_t * fd = (int32_t *)(v43 + 44); // 0x40219c
        if (fchmodat(*fd, (char *)*path, mode, 0) == 0) {
            // 0x402370
            v61 = v50;
            v62 = v43;
            v63 = str2;
            v64 = v44;
            v65 = v49;
            if (g20 == 2) {
                goto lab_0x40241a;
            } else {
                int32_t v90 = *v81; // 0x40237d
                v80 = v90;
                if ((v90 & 3584) != 0) {
                    // 0x402566
                    v37 = v50;
                    v36 = v43;
                    v33 = str2;
                    v34 = v44;
                    v35 = v49;
                    if (__fxstatat(1, *fd, (char *)*path, (struct stat *)(v4 + 80), 0) != 0) {
                        goto lab_0x4026e2;
                    } else {
                        // 0x402588
                        v80 = *(int32_t *)(v4 + 104);
                        goto lab_0x40238c;
                    }
                } else {
                    goto lab_0x40238c;
                }
            }
        } else {
            // 0x4021b3
            if (*(char *)&g41 == 0) {
                // 0x4021c0
                function_404ee0(4, str2);
                char * format2 = dcgettext(NULL, "changing permissions of %s", 5); // 0x4021dc
                error(0, *(int32_t *)*(int64_t *)(v4 + 32), format2);
            }
            goto lab_0x402058;
        }
    }
  lab_0x402058:;
    int32_t v84 = g20; // 0x402058
    v69 = v50;
    v70 = v43;
    v71 = v44;
    v72 = 0;
    if (v84 != 2 && v84 == 0) {
        // 0x402072
        function_402e30(*(int32_t *)(v4 + 8), v4 + 68);
        char v85 = v49; // 0x402089
        *(char *)(v4 + 78) = v85;
        function_402e30(*(int32_t *)(v4 + 12), v4 + 80);
        *(char *)(v4 + 90) = v85;
        char * v86 = dcgettext(NULL, "failed to change mode of %s from %04lo (%s) to %04lo (%s)\n", 5); // 0x4020a4
        function_404ee0(4, str2);
        *(int64_t *)(v4 - 8) = 5;
        *(int64_t *)(v4 - 16) = v4 + 69;
        __printf_chk(1, v86);
        v69 = v50;
        v70 = v43;
        v71 = v44;
        v72 = 0;
    }
    goto lab_0x4020f8;
  lab_0x402252:
    // 0x402252
    if (*(char *)&g41 != 0) {
        goto lab_0x402058;
    } else {
        // 0x40225f
        function_404ee0(4, str2);
        v54 = (int64_t)"cannot access %s";
        goto lab_0x402279;
    }
  lab_0x40241a:;
    unsigned char v68 = *(char *)&g40; // 0x40241a
    v69 = v61;
    v70 = v62;
    v71 = v64;
    v72 = 1;
    if (v68 != 0) {
        int32_t v73 = *(int32_t *)(v4 + 12); // 0x40242b
        int32_t v74 = function_403390(v73, (int64_t)((v73 & 0xf000) == 0x4000), 0, (int64_t)g44, 0); // 0x402452
        int32_t v75 = *(int32_t *)(v4 + 8); // 0x402456
        v69 = v61;
        v70 = v62;
        v71 = v64;
        v72 = v68;
        if ((v75 & -1 - v74) != 0) {
            int32_t * v76 = (int32_t *)(v4 + 16); // 0x402469
            *v76 = v74;
            function_402e30(v75, v4 + 68);
            function_402e30(*v76, v4 + 80);
            char v77 = v65; // 0x40248f
            *(char *)(v4 + 90) = v77;
            *(char *)(v4 + 78) = v77;
            function_404fb0(0, 3, v63);
            error(0, (int32_t)"%s: new permissions are %s, not %s" ^ (int32_t)"%s: new permissions are %s, not %s", dcgettext(NULL, "%s: new permissions are %s, not %s", 5));
            v69 = v61;
            v70 = v62;
            v71 = v64;
            v72 = 0;
        }
    }
    goto lab_0x4020f8;
  lab_0x402279:
    // 0x402279
    error(0, *(int32_t *)(v44 + 64), dcgettext(NULL, (char *)v54, 5));
    goto lab_0x402058;
  lab_0x4020f8:
    // 0x4020f8
    v51 = v69;
    v52 = v70;
    v53 = v72;
    if (g42 == 0) {
        // 0x402105
        fts_set(v70, v71, 4);
        v51 = v69;
        v52 = v70;
        v53 = v72;
    }
    goto lab_0x401ff0;
  lab_0x40238c:
    // 0x40238c
    v56 = v50;
    v57 = v43;
    v58 = str2;
    v59 = v44;
    v60 = v49;
    if ((*v79 ^ v80) % 0x1000 == 0) {
        goto lab_0x4026ef;
    } else {
        // 0x40239b
        function_402e30(*v81, v4 + 68);
        char v82 = v49; // 0x4023b2
        *(char *)(v4 + 78) = v82;
        function_402e30(*v79, v4 + 80);
        *(char *)(v4 + 90) = v82;
        char * v83 = dcgettext(NULL, "mode of %s changed from %04lo (%s) to %04lo (%s)\n", 5); // 0x4023cd
        function_404ee0(4, str2);
        *(int64_t *)(v4 - 8) = 4;
        *(int64_t *)(v4 - 16) = v4 + 69;
        __printf_chk(1, v83);
        v61 = v50;
        v62 = v43;
        v63 = str2;
        v64 = v44;
        v65 = v49;
        goto lab_0x40241a;
    }
}
// Address range: 0x4028e0 - 0x40290b
// Address range: 0x40290b - 0x40292a
int64_t function_40290b(void) {
    // 0x40290b
    return &g32;
}
// Address range: 0x40292a - 0x402961
int64_t function_40292a(void) {
    // 0x40292a
    return 0;
}
// Address range: 0x402961 - 0x4029b8
int64_t function_402961(void) {
    // 0x402961
    if (g36 != 0) {
        // 0x4029b7
        int64_t result; // 0x402961
        return result;
    }
    int64_t v1 = g37; // 0x402994
    int64_t result2; // 0x4029a6
    if (g37 >= ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x4029a6
        result2 = function_40290b();
        g36 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g17 - (int64_t)&g16 >> 3) - 1) {
        // 0x402996
        v1++;
    }
    // 0x40298a
    g37 = v1;
    // 0x4029a6
    result2 = function_40290b();
    g36 = 1;
    return result2;
}
// Address range: 0x4029b8 - 0x4029bd
int64_t function_4029b8(void) {
    // 0x4029b8
    return function_40292a();
}
// Address range: 0x4029c0 - 0x402d65
int64_t function_4029c0(int64_t a1) {
    int32_t status = a1; // 0x4029d6
    if (status != 0) {
        // 0x4029da
        __fprintf_chk(g35, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4029ff
        exit(status);
        // UNREACHABLE
    }
    // 0x402a06
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... MODE[,MODE]... FILE...\n  or:  %s [OPTION]... OCTAL-MODE FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Change the mode of each FILE to MODE.\nWith --reference, change the mode of each FILE to that of RFILE.\n\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -c, --changes          like verbose but report only when a change is made\n  -f, --silent, --quiet  suppress most error messages\n  -v, --verbose          output a diagnostic for every file processed\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --no-preserve-root  do not treat '/' specially (the default)\n      --preserve-root    fail to operate recursively on '/'\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --reference=RFILE  use RFILE's mode instead of MODE values\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -R, --recursive        change files and directories recursively\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nEach MODE is of the form '[ugoa]*([-+=]([rwxXst]*|[ugo]))+|[-+=][0-7]+'.\n", 5), g33);
    int64_t v1 = &g1; // bp-136, 0x402b42
    bool v2; // 0x4029c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402bc8
    int64_t v6 = *(int64_t *)v5; // 0x402bcc
    int64_t v7 = 6; // 0x402bd2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"chmod";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402bde
        char v11 = *(char *)v9; // 0x402bde
        char v12 = v11; // 0x402bde
        bool v13 = false; // 0x402bde
        while (v10 == v11) {
            // 0x402bd4
            v7--;
            int64_t v14 = v9 + v3; // 0x402bde
            int64_t v15 = v8 + v3; // 0x402bde
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
            // break -> 0x402bea
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402bea
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402cfc;
        } else {
            // 0x402ce6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c4c;
            } else {
                goto lab_0x402cfc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402c4c;
        } else {
            // 0x402c32
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402d3b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402c4c;
            } else {
                goto lab_0x402c4c;
            }
        }
    }
  lab_0x402cfc:
    // 0x402cfc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4029ff
    exit(status);
    // UNREACHABLE
  lab_0x402c4c:
    // 0x402c4c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c8c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4029ff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402d70 - 0x402d78
int64_t function_402d70(int64_t a1) {
    // 0x402d70
    g46 = a1;
    int64_t result; // 0x402d70
    return result;
}
// Address range: 0x402d80 - 0x402d88
int64_t function_402d80(int64_t a1) {
    // 0x402d80
    g45 = a1;
    int64_t result; // 0x402d80
    return result;
}
// Address range: 0x402d90 - 0x402e2e
int64_t function_402d90(void) {
    // 0x402d90
    int32_t * err_num; // 0x402da6
    if ((int32_t)function_408b70((int64_t)g33) == 0) {
        goto lab_0x402dbc;
    } else {
        // 0x402da6
        err_num = __errno_location();
        if (g45 == 0) {
            goto lab_0x402dd3;
        } else {
            // 0x402db7
            if (*err_num != 32) {
                goto lab_0x402dd3;
            } else {
                goto lab_0x402dbc;
            }
        }
    }
  lab_0x402dbc:;
    int64_t result = function_408b70((int64_t)g35); // 0x402dc3
    if ((int32_t)result == 0) {
        // 0x402dcc
        return result;
    }
    // 0x402e0e
    _exit(g22);
    // UNREACHABLE
  lab_0x402dd3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402ddf
    if (g46 == 0) {
        // 0x402e19
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402df3
        error(0, *err_num, "%s: %s", (char *)function_404f80((int64_t)g46), v1);
    }
    // 0x402e0e
    _exit(g22);
    // UNREACHABLE
}
// Address range: 0x402e30 - 0x402fa3
int64_t function_402e30(int32_t a1, int64_t a2) {
    int32_t v1 = a1 & 0xf000; // 0x402e37
    char v2 = 45; // 0x402e30
    int64_t v3; // 0x402e30
    uint64_t v4; // 0x402e30
    switch ((v1 - 0x1000) / 0x1000) {
        case 3: {
            // 0x402e99
            v2 = 100;
        }
        case 7: {
          lab_0x402e99:
            // 0x402e99
            v4 = (int64_t)a1;
            *(char *)a2 = v2;
            *(char *)(a2 + 1) = (v4 & 256) == 0 ? 45 : 114;
            int64_t v5 = v4 & 128; // 0x402eb2
            char v6 = v5; // 0x402eba
            *(char *)(a2 + 2) = (v6 - ((char)(v5 == 0) | v6) & -74) + 119;
            int64_t v7 = v4 & 64; // 0x402ec7
            int64_t v8 = v7 - (v7 | (int64_t)(v7 == 0)); // 0x402ecd
            if ((v4 & 2048) == 0) {
                // 0x402f70
                v3 = (v8 & 0xffffffb5) + 120 & 0xfffffffd;
            } else {
                // 0x402edb
                v3 = (v8 & 0xffffffe0) + 115 & 0xfffffff3;
            }
            // break -> 0x402ee1
            break;
        }
        case 5: {
            // 0x402e99
            v2 = 98;
            // branch (via goto) -> 0x402e99
            goto lab_0x402e99;
        }
        case 1: {
            // 0x402e99
            v2 = 99;
            // branch (via goto) -> 0x402e99
            goto lab_0x402e99;
        }
        case 9: {
            // 0x402e99
            v2 = 108;
            // branch (via goto) -> 0x402e99
            goto lab_0x402e99;
        }
        case 0: {
            // 0x402e99
            v2 = 112;
            // branch (via goto) -> 0x402e99
            goto lab_0x402e99;
        }
        default: {
            // 0x402e86
            v2 = v1 != 0xc000 ? 63 : 115;
            // branch (via goto) -> 0x402e99
            goto lab_0x402e99;
        }
    }
    // 0x402ee1
    *(char *)(a2 + 3) = (char)v3;
    int64_t v9 = v4 & 32; // 0x402ee6
    char v10 = v9; // 0x402eec
    *(char *)(a2 + 4) = (v10 - ((char)(v9 == 0) | v10) & -69) + 114;
    int64_t v11 = v4 & 16; // 0x402ef9
    char v12 = v11; // 0x402eff
    *(char *)(a2 + 5) = (v12 - ((char)(v11 == 0) | v12) & -74) + 119;
    int64_t v13 = v4 & 8; // 0x402f0c
    int64_t v14 = v13 - (v13 | (int64_t)(v13 == 0)); // 0x402f12
    int64_t v15; // 0x402e30
    if ((v4 & 1024) == 0) {
        // 0x402f80
        v15 = (v14 & 0xffffffb5) + 120 & 0xfffffffd;
    } else {
        // 0x402f1c
        v15 = (v14 & 0xffffffe0) + 115 & 0xfffffff3;
    }
    // 0x402f22
    *(char *)(a2 + 6) = (char)v15;
    int64_t v16 = v4 & 4; // 0x402f27
    char v17 = v16; // 0x402f2d
    *(char *)(a2 + 7) = (v17 - ((char)(v16 == 0) | v17) & -69) + 114;
    int64_t v18 = v4 & 2; // 0x402f3a
    char v19 = v18; // 0x402f40
    *(char *)(a2 + 8) = (v19 - ((char)(v18 == 0) | v19) & -74) + 119;
    char v20 = v4 % 2 == 0; // 0x402f53
    if ((v4 & 512) == 0) {
        // 0x402f90
        *(char *)(a2 + 9) = (v20 & -75) + 120;
        *(int16_t *)(a2 + 10) = 32;
        return 32;
    }
    // 0x402f5d
    *(char *)(a2 + 9) = (v20 & -32) + 116;
    *(int16_t *)(a2 + 10) = 32;
    return 32;
}
// Address range: 0x402fb0 - 0x402fb8
int64_t function_402fb0(int64_t a1) {
    // 0x402fb0
    int64_t v1; // 0x402fb0
    return function_402e30(*(int32_t *)(a1 + 24), v1);
}
// Address range: 0x402fc0 - 0x403321
int64_t function_402fc0(int64_t a1) {
    // 0x402fc0
    int64_t v1; // 0x402fc0
    char v2 = v1;
    int64_t v3 = 0x100000000000000 * v1 >> 56; // 0x402fcc
    int64_t v4 = a1; // 0x402fd4
    if ((v2 & -8) == 48) {
        int64_t v5 = 0xffffffd0 + v3; // 0x403096
        uint32_t v6 = (int32_t)v5;
        while (v6 < 0x1000) {
            // 0x403088
            v4++;
            char v7 = *(char *)v4; // 0x403088
            if ((v7 & -8) != 48) {
                // 0x403290
                if (v7 == 0) {
                    int64_t v8 = v4 - a1; // 0x40329a
                    int32_t v9 = v8 < 5 == (4 - v8 & v8) < 0 ? 4095 : v6 & 3072 | 1023; // 0x4032b9
                    int64_t result = function_405740(32); // 0x4032bc
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
      lab_0x403075:
        // 0x403075
        return 0;
    }
    int64_t v10 = 1; // 0x402fe1
    int64_t v11 = a1; // 0x402fe1
    int64_t v12; // 0x402fc0
    if (v2 == 0) {
        // 0x4032e8
        v12 = 16;
    } else {
        int64_t v13 = v3;
        v11++;
        unsigned char v14 = *(char *)v11; // 0x403006
        v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        while (v14 != 0) {
            // 0x402ff0
            v13 = v14;
            v11++;
            v14 = *(char *)v11;
            v10 += (int64_t)((v13 & 239) == 45 | (char)v13 == 43);
        }
        int64_t v15 = 16 * v10; // 0x40301d
        if (v15 < 0) {
            // 0x40331c
            function_405990(v15);
            // UNREACHABLE
        }
        // 0x40302a
        v12 = v15;
        if (v10 >= 0x1000000000000000) {
            // 0x40331c
            function_405990(v15);
            // UNREACHABLE
        }
    }
    int64_t v16 = function_405740(v12); // 0x403033
    int64_t v17; // 0x402fc0
    int64_t v18; // 0x402fc0
    int64_t v19; // 0x402fc0
    int64_t v20; // 0x402fc0
    int64_t v21; // 0x402fc0
    int64_t v22; // 0x402fc0
    int64_t v23; // 0x402fc0
    int64_t v24; // 0x402fc0
    int64_t v25; // 0x402fc0
    int64_t v26; // 0x402fc0
    int64_t v27; // 0x402fc0
    int64_t v28; // 0x402fc0
    int64_t v29; // 0x402fc0
    int64_t v30; // 0x402fc0
    int64_t v31; // 0x402fc0
    int64_t v32; // 0x402fc0
    int64_t v33; // 0x403123
    int64_t v34; // 0x403123
    char v35; // 0x402fc0
    while (true) {
        int64_t v36 = 0;
        v32 = 0;
        v18 = 0;
        v26 = a1;
        unsigned char v37; // 0x40303d
        while (true) {
          lab_0x40303d:
            // 0x40303d
            v27 = v26;
            v37 = *(char *)v27;
            if (v37 == 97) {
                // 0x403250
                v32 = 4095;
                v19 = 4095;
                goto lab_0x403255;
            } else {
                if (v37 <= 97) {
                    // break -> 0x4030b0
                    break;
                }
                int64_t v38 = v18; // 0x403280
                switch (v37) {
                    case 111: {
                        int64_t v39 = v38 & 0xfffffdf8 | 519; // 0x403280
                        v32 = v39;
                        v19 = v39;
                        goto lab_0x403255;
                    }
                    case 117: {
                        int64_t v40 = v38 & 0xfffff63f | 2496; // 0x403270
                        v32 = v40;
                        v19 = v40;
                        goto lab_0x403255;
                    }
                    case 103: {
                        int64_t v41 = v38 & 0xfffffbc7 | 1080; // 0x403260
                        v32 = v41;
                        v19 = v41;
                        goto lab_0x403255;
                    }
                    default: {
                        goto lab_0x40306b_3;
                    }
                }
            }
        }
        switch (v37) {
            default: {
                if (v37 != 43) {
                    // break -> 0x40306b
                    break;
                }
            }
            case 45: {
            }
            case 61: {
                // 0x4030c2
                v29 = v27;
                v24 = v37;
                v20 = 16 * v36 + v16;
                v22 = v36;
                // break -> 0x403123
                break;
            }
        }
        while (true) {
          lab_0x403123:
            // 0x403123
            v21 = v20;
            v25 = v24;
            int64_t v42 = v29;
            v33 = v42 + 1;
            char v43 = *(char *)v33; // 0x403123
            if (v43 == 103) {
                // 0x403240
                v17 = v42 + 2;
                v30 = 56;
                goto lab_0x4030de;
            } else {
                // 0x403134
                v34 = v43;
                if (v43 > 103) {
                    int64_t v44 = v42 + 2;
                    v17 = v44;
                    v30 = 7;
                    if (v43 != 111) {
                        // 0x4030d0
                        v17 = v44;
                        v30 = 448;
                        if (v43 != 117) {
                            goto lab_0x4031c0;
                        } else {
                            goto lab_0x4030de;
                        }
                    } else {
                        goto lab_0x4030de;
                    }
                } else {
                    int64_t v45 = v34; // 0x403156
                    int64_t v46 = v33; // 0x403156
                    if ((v43 & -8) == 48) {
                        int64_t v47 = 0xffffffd0 + v45; // 0x40315a
                        uint32_t v48 = (int32_t)v47;
                        if (v48 >= 0x1000) {
                            // break (via goto) -> 0x40306b
                            goto lab_0x40306b_3;
                        }
                        int64_t v49 = v46 + 1; // 0x40315e
                        char v50 = *(char *)v49; // 0x40316e
                        int64_t v51 = v50; // 0x40316e
                        int64_t v52 = v47 & 0xffffffff; // 0x403179
                        v46 = v49;
                        while ((v50 & -8) == 48) {
                            // 0x40315a
                            v47 = v51 + 0xffffffd0 + 8 * v52;
                            v48 = (int32_t)v47;
                            if (v48 >= 0x1000) {
                                // break (via goto) -> 0x40306b
                                goto lab_0x40306b_3;
                            }
                            // 0x40316e
                            v49 = v46 + 1;
                            v50 = *(char *)v49;
                            v51 = v50;
                            v52 = v47 & 0xffffffff;
                            v46 = v49;
                        }
                        // 0x40317b
                        if ((int32_t)v32 != 0) {
                            // break (via goto) -> 0x40306b
                            goto lab_0x40306b_3;
                        }
                        if (v50 != 0 == (v50 != 44)) {
                            // break (via goto) -> 0x40306b
                            goto lab_0x40306b_3;
                        }
                        // 0x403190
                        *(char *)v21 = (char)v25;
                        v32 = 4095;
                        *(int32_t *)(v21 + 8) = v48;
                        *(char *)(v21 + 1) = 1;
                        *(int32_t *)(v21 + 4) = 4095;
                        v31 = 4095;
                        v28 = v49;
                        v23 = v51 & 0xffffffff;
                        goto lab_0x4030ff;
                    } else {
                        goto lab_0x4031c0;
                    }
                }
            }
        }
      lab_0x4032f2:
        // 0x4032f2
        if (v35 != 44) {
            if (v35 != 0) {
                goto lab_0x40306b_3;
            } else {
                // 0x40330d
                int64_t v53; // 0x402fc0
                *(char *)(v16 + 1 + 16 * v53) = 0;
                return 0;
            }
        }
    }
  lab_0x40306b_3:
    // 0x40306b
    free((int64_t *)v16);
    // 0x403075
    return (int32_t)&g62 ^ (int32_t)&g62;
  lab_0x4031e8:;
    // 0x4031e8
    int64_t v54; // 0x402fc0
    int64_t v55 = v54 + 1; // 0x4031e8
    int64_t v56 = (int64_t)*(char *)v55; // 0x4031ec
    int64_t v57 = v56 + 0xffffffa8; // 0x4031f0
    int64_t v58; // 0x402fc0
    int64_t v59 = v58; // 0x4031f7
    int64_t v60 = v56; // 0x4031f7
    int64_t v61; // 0x402fc0
    int64_t v62 = v61; // 0x4031f7
    int64_t v63 = v57; // 0x4031f7
    int64_t v64 = v55; // 0x4031f7
    if ((char)v57 >= 33) {
        // break -> 0x4031f9
        goto lab_0x4031f9_2;
    }
    goto lab_0x4031d0;
  lab_0x4030de:
    // 0x4030de
    *(char *)(v21 + 1) = 3;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v30;
    *(char *)v21 = (char)v25;
    int64_t v72 = v30; // 0x4030f3
    int64_t v73 = v17; // 0x4030f3
    int64_t v74 = (int64_t)*(char *)v17; // 0x4030f3
    goto lab_0x4030f6;
  lab_0x4030f6:;
    int64_t v75 = v32;
    v31 = v72 & 0xffffffff & ((int32_t)v75 != 0 ? v75 : 0xffffffff);
    v28 = v73;
    v23 = v74;
    goto lab_0x4030ff;
  lab_0x4031c0:
    // 0x4031c0
    v59 = 0;
    v60 = v34;
    v62 = 1;
    v63 = v34 + 0xffffffa8;
    v64 = v33;
    int64_t v70; // 0x402fc0
    int64_t v69; // 0x402fc0
    int64_t v67; // 0x402fc0
    int64_t v68; // 0x402fc0
    while (true) {
      lab_0x4031d0:
        // 0x4031d0
        v54 = v64;
        int64_t v65 = v62;
        int64_t v66 = v59;
        g60 = v63 % 256;
        v58 = v66;
        v61 = 2;
        v67 = v66;
        v68 = v60;
        v69 = v65;
        v70 = v54;
        uint64_t v71; // 0x402fc0
        switch ((char)v71) {
            case 0: {
                goto lab_0x4031e8;
            }
            case 26: {
                // 0x403238
                v58 = v66 & 0xfffffedb | 292;
                v61 = v65;
                goto lab_0x4031e8;
            }
            case 27: {
                // 0x403230
                v58 = v66 | 3072;
                v61 = v65;
                goto lab_0x4031e8;
            }
            case 28: {
                // 0x403228
                v58 = v66 | 512;
                v61 = v65;
                goto lab_0x4031e8;
            }
            case 31: {
                // 0x403220
                v58 = v66 | 146;
                v61 = v65;
                goto lab_0x4031e8;
            }
            case 32: {
                // 0x403218
                v58 = v66 & 0xffffffb6 | 73;
                v61 = v65;
                goto lab_0x4031e8;
            }
            default: {
                goto lab_0x4031f9_2;
            }
        }
    }
  lab_0x4031f9_2:
    // 0x4031f9
    *(char *)v21 = (char)v25;
    *(char *)(v21 + 1) = (char)v69;
    *(int32_t *)(v21 + 4) = (int32_t)v32;
    *(int32_t *)(v21 + 8) = (int32_t)v67;
    v72 = v67;
    v73 = v70;
    v74 = v68 & 0xffffffff;
    goto lab_0x4030f6;
  lab_0x4030ff:
    // 0x4030ff
    *(int32_t *)(v21 + 12) = (int32_t)v31;
    if ((v23 & 239) != 45) {
        // 0x403116
        int64_t v76; // 0x402fc0
        v35 = v76;
        if (v35 != 43) {
            // break -> 0x4032f2
            goto lab_0x4032f2;
        }
    }
    // 0x403120
    v29 = v28;
    v24 = v23;
    v20 = v21 + 16;
    v22++;
    goto lab_0x403123;
  lab_0x403255:
    // 0x403255
    v18 = v19;
    v26 = v27 + 1;
    goto lab_0x40303d;
}
// Address range: 0x403330 - 0x403384
int64_t function_403330(int64_t a1) {
    // 0x403330
    int64_t v1; // bp-152, 0x403330
    int32_t v2 = __xstat(1, (char *)a1, (struct stat *)&v1); // 0x403343
    int64_t result = 0; // 0x40334e
    if (v2 == 0) {
        // 0x403350
        result = function_405740(32);
        *(int16_t *)result = 317;
        *(int32_t *)(result + 4) = 4095;
        *(int32_t *)(result + 12) = 4095;
        *(char *)(result + 17) = 0;
    }
    // 0x40337b
    return result;
}
// Address range: 0x403390 - 0x40350d
int64_t function_403390(uint32_t a1, int64_t a2, int32_t a3, int64_t a4, int32_t a5) {
    char v1 = *(char *)(a4 + 1); // 0x403390
    int64_t v2 = a1 % 0x1000; // 0x403399
    int64_t result = v2; // 0x4033a7
    int64_t v3 = 0; // 0x4033a7
    int64_t v4; // 0x403390
    int64_t v5; // 0x403390
    int64_t v6; // 0x403390
    char v7; // 0x403390
    char v8; // 0x403390
    int64_t v9; // 0x403390
    int64_t v10; // 0x403390
    int64_t v11; // 0x403390
    int64_t v12; // 0x403390
    int64_t v13; // 0x403390
    int64_t v14; // 0x403390
    int64_t v15; // 0x403390
    int64_t v16; // 0x403390
    int64_t v17; // 0x403390
    int64_t v18; // 0x403390
    uint32_t v19; // 0x40344b
    int64_t v20; // 0x40344f
    if (v1 != 0) {
        // 0x4033ad
        v10 = v2;
        v14 = a4;
        v12 = 0;
        v7 = v1;
        while (true) {
          lab_0x40344b_2:
            // 0x40344b
            v8 = v7;
            v13 = v12;
            v15 = v14;
            v11 = v10;
            v19 = *(int32_t *)(v15 + 4);
            v20 = (int64_t)*(int32_t *)(v15 + 8);
            if ((char)a2 == 0) {
                // 0x4033c0
                v16 = 0;
                v4 = 0xffffffff;
                if (v8 == 2) {
                    // 0x403500
                    v17 = 0;
                    v9 = v20;
                    v5 = 0xffffffff;
                    v18 = 0;
                    v6 = 0xffffffff;
                    if ((v11 & 73) == 0) {
                        goto lab_0x403414;
                    } else {
                        goto lab_0x40347c;
                    }
                } else {
                    goto lab_0x4033cf;
                }
            } else {
                int32_t v21 = *(int32_t *)(v15 + 12); // 0x40345c
                int64_t v22 = v21 | -3073; // 0x403463
                int64_t v23 = v21 & 3072 ^ 3072; // 0x40346c
                v16 = v23;
                v4 = v22;
                v18 = v23;
                v6 = v22;
                if (v8 != 2) {
                    goto lab_0x4033cf;
                } else {
                    goto lab_0x40347c;
                }
            }
        }
    }
  lab_0x4034c8_2:
    // 0x4034c8
    if (a5 != 0) {
        // 0x4034cd
        *(int32_t *)(int64_t)a5 = (int32_t)v3;
    }
    // 0x4034d0
    return result;
  lab_0x4033cf:;
    int64_t v24 = v4;
    int64_t v25 = v16;
    v17 = v25;
    v9 = v20;
    v5 = v24;
    if (v8 == 3) {
        int64_t v26 = v11 & v20;
        int64_t v27 = v26 & 292; // 0x4033db
        int64_t v28 = (v27 | (int64_t)(v27 == 0)) + (v27 ^ 511) & 292;
        int64_t v29 = (v26 & 146) != 0 ? v28 | 146 : v28; // 0x4033fe
        v17 = v25;
        v9 = ((v26 & 73) != 0 ? v29 | 73 : v29) | v26;
        v5 = v24;
    }
    goto lab_0x403414;
  lab_0x40347c:;
    int64_t v60 = (int64_t)*(char *)v15; // 0x403480
    int64_t v61 = v6 & (v20 | 73); // 0x403484
    int64_t v32 = v18; // 0x40348a
    int64_t v33 = v61; // 0x40348a
    int64_t v34 = v6; // 0x40348a
    int64_t v35 = v60; // 0x40348a
    int64_t v36 = v18; // 0x40348a
    int64_t v37 = v61; // 0x40348a
    int64_t v38 = v60; // 0x40348a
    if (v19 == 0) {
        goto lab_0x403420;
    } else {
        goto lab_0x403490;
    }
  lab_0x403414:;
    int64_t v30 = (int64_t)*(char *)v15; // 0x403414
    int64_t v31 = v9 & 0xffffffff & v5; // 0x403418
    v32 = v17;
    v33 = v31;
    v34 = v5;
    v35 = v30;
    v36 = v17;
    v37 = v31;
    v38 = v30;
    if (v19 != 0) {
        goto lab_0x403490;
    } else {
        goto lab_0x403420;
    }
  lab_0x403420:;
    int64_t v39 = v33 & (int64_t)(-1 - a3);
    int64_t v40 = v39; // 0x403390
    int64_t v41 = v35; // 0x403390
    int64_t v42 = v32; // 0x403390
    int64_t v43 = v39; // 0x403390
    int64_t v44 = v34; // 0x403390
    int64_t v45 = v39; // 0x403390
    int64_t v46; // 0x403390
    switch ((char)v46) {
        case 45: {
            goto lab_0x4034e0;
        }
        case 61: {
            goto lab_0x4034ab;
        }
        default: {
            goto lab_0x403433;
        }
    }
  lab_0x403490:;
    int64_t v47 = v19; // 0x40344b
    int64_t v48 = v37 & v47;
    char v49 = v38; // 0x403493
    v45 = v48;
    if (v49 == 45) {
        goto lab_0x4034e0;
    } else {
        // 0x403499
        if (v49 != 61) {
            goto lab_0x403433;
        } else {
            int64_t v50 = v36 & 0xffffffff | v47 ^ 0xffffffff; // 0x4034a2
            v42 = v50;
            v43 = v48;
            v44 = v50 ^ 0xffffffff;
            goto lab_0x4034ab;
        }
    }
  lab_0x4034e0:;
    int64_t v51 = v11 & 0xffffffff & (v45 ^ 0xffffffff); // 0x4034e9
    int64_t v52 = (v45 | v13) & 0xffffffff; // 0x4034e9
    goto lab_0x40343d;
  lab_0x4034ab:;
    char v57 = *(char *)(v15 + 17); // 0x4034af
    int64_t v58 = v44 % 0x1000 | v13 & 0xffffffff; // 0x4034bd
    int64_t v59 = (v42 & v11 | v43) & 0xffffffff; // 0x4034c0
    int64_t v54 = v59; // 0x4034c6
    int64_t v55 = v58; // 0x4034c6
    char v56 = v57; // 0x4034c6
    result = v59;
    v3 = v58;
    if (v57 == 0) {
        // break -> 0x4034c8
        goto lab_0x4034c8_2;
    }
    goto lab_0x40344b;
  lab_0x403433:
    // 0x403433
    v51 = v11;
    v52 = v13;
    if ((char)v41 == 43) {
        // 0x4034f0
        v51 = (v40 | v11) & 0xffffffff;
        v52 = (v40 | v13) & 0xffffffff;
    }
    goto lab_0x40343d;
  lab_0x40343d:;
    char v53 = *(char *)(v15 + 17); // 0x403441
    v54 = v51;
    v55 = v52;
    v56 = v53;
    result = v51;
    v3 = v52;
    if (v53 == 0) {
        // break -> 0x4034c8
        goto lab_0x4034c8_2;
    }
    goto lab_0x40344b;
  lab_0x40344b:
    // 0x40344b
    v10 = v54;
    v14 = v15 + 16;
    v12 = v55;
    v7 = v56;
    goto lab_0x40344b_2;
}
// Address range: 0x403510 - 0x4035a9
int64_t function_403510(int64_t str) {
    // 0x403510
    if (str == 0) {
        // 0x403589
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g35);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40351e
    int64_t result = (int64_t)found_char_pos; // 0x40351e
    if (found_char_pos == NULL) {
        // 0x403579
        g47 = str;
        g34 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403528
    if (v1 - str < 7) {
        // 0x403579
        g47 = str;
        g34 = str;
        return result;
    }
    // 0x403538
    bool v2; // 0x403510
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403510
    int64_t v5 = result - 6; // 0x403510
    int64_t v6 = 7; // 0x403546
    unsigned char v7 = *(char *)v5; // 0x403546
    char v8 = *(char *)v4; // 0x403546
    char v9 = v8; // 0x403546
    bool v10 = false; // 0x403546
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
    int64_t v12 = (int64_t)"lt-"; // 0x403550
    int64_t v13 = v1; // 0x403550
    int64_t v14 = 3; // 0x403550
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x403579
        g47 = str;
        g34 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403562
    char v16 = *(char *)v12; // 0x403562
    char v17 = v16; // 0x403562
    bool v18 = false; // 0x403562
    while (v15 == v16) {
        // 0x403552
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
    int64_t v20 = v1; // 0x40356c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40356e
        v20 = result + 4;
        g32 = v20;
    }
    // 0x403579
    g47 = v20;
    g34 = v20;
    return result;
}
// Address range: 0x4035b0 - 0x4036a2
int64_t function_4035b0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4035c4
    int64_t result = (int64_t)v1; // 0x4035c4
    if (result != a1) {
        // 0x4035d1
        return result;
    }
    int64_t v2 = function_40a020(); // 0x4035e0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403696
    if (v3 == 85) {
        // 0x4035f0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403688
            result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40361e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40362b
        // 0x4035d1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403688
        result2 = (int32_t)a2 != 9 ? (int64_t)&g10 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x40366d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x40367a
    // 0x4035d1
    return result4;
}
// Address range: 0x4036b0 - 0x403707
int64_t function_4036b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4036b0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4036f8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403707 - 0x4048d1
int64_t function_403707(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403751
    int64_t v3 = 0; // 0x403751
    int64_t v4; // 0x403707
    int64_t v5; // 0x403707
    int64_t v6; // 0x403707
    int64_t v7; // 0x403707
    int64_t v8; // 0x403707
    int64_t v9; // 0x403707
    int64_t v10; // 0x403707
    int64_t v11; // 0x403707
    int64_t v12; // 0x403707
    int64_t v13; // 0x403707
    int64_t v14; // 0x403707
    int64_t v15; // 0x403707
    int64_t v16; // 0x403707
    int64_t v17; // 0x403707
    int64_t v18; // 0x403707
    int64_t result; // 0x403707
    int64_t v19; // 0x403707
    int32_t wc; // bp+132, 0x403707
    int64_t ps; // bp+136, 0x403707
    char v20; // 0x403cc0
    int64_t v21; // 0x403cc0
    int64_t v22; // 0x404068
    int64_t v23; // 0x403707
    int64_t v24; // 0x404087
    int32_t v25; // 0x403707
    while (true) {
      lab_0x403758_2:
        // 0x403758
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403707
        int64_t v27; // 0x40378c
        while (true) {
          lab_0x403758:
            // 0x403758
            v5 = v26;
            bool v28 = v15 == v5; // 0x403763
            if (v15 == -1) {
                // 0x403765
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403773
            if (v28) {
                // break (via goto) -> 0x403ed8
                goto lab_0x403ed8;
            }
            // 0x40377c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g61 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403d6b
                    if (v25 % 2 == 0) {
                        goto lab_0x4038b1;
                    }
                    // 0x40418d
                    v26 = v5 + 1;
                    goto lab_0x403758;
                }
                case 7: {
                    goto lab_0x4038b1;
                }
                case 8: {
                    goto lab_0x4038b1;
                }
                case 9: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4038b1;
                }
                case 12: {
                    goto lab_0x4038b1;
                }
                case 13: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40387d;
                }
                case 36: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4038b1;
                }
                case 38: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4038b1;
                }
                case 44: {
                    goto lab_0x4038b1;
                }
                case 45: {
                    goto lab_0x4038b1;
                }
                case 46: {
                    goto lab_0x4038b1;
                }
                case 47: {
                    goto lab_0x4038b1;
                }
                case 48: {
                    goto lab_0x4038b1;
                }
                case 49: {
                    goto lab_0x4038b1;
                }
                case 50: {
                    goto lab_0x4038b1;
                }
                case 51: {
                    goto lab_0x4038b1;
                }
                case 52: {
                    goto lab_0x4038b1;
                }
                case 53: {
                    goto lab_0x4038b1;
                }
                case 54: {
                    goto lab_0x4038b1;
                }
                case 55: {
                    goto lab_0x4038b1;
                }
                case 56: {
                    goto lab_0x4038b1;
                }
                case 57: {
                    goto lab_0x4038b1;
                }
                case 58: {
                    goto lab_0x4038b1;
                }
                case 59: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4038b1;
                }
                case 66: {
                    goto lab_0x4038b1;
                }
                case 67: {
                    goto lab_0x4038b1;
                }
                case 68: {
                    goto lab_0x4038b1;
                }
                case 69: {
                    goto lab_0x4038b1;
                }
                case 70: {
                    goto lab_0x4038b1;
                }
                case 71: {
                    goto lab_0x4038b1;
                }
                case 72: {
                    goto lab_0x4038b1;
                }
                case 73: {
                    goto lab_0x4038b1;
                }
                case 74: {
                    goto lab_0x4038b1;
                }
                case 75: {
                    goto lab_0x4038b1;
                }
                case 76: {
                    goto lab_0x4038b1;
                }
                case 77: {
                    goto lab_0x4038b1;
                }
                case 78: {
                    goto lab_0x4038b1;
                }
                case 79: {
                    goto lab_0x4038b1;
                }
                case 80: {
                    goto lab_0x4038b1;
                }
                case 81: {
                    goto lab_0x4038b1;
                }
                case 82: {
                    goto lab_0x4038b1;
                }
                case 83: {
                    goto lab_0x4038b1;
                }
                case 84: {
                    goto lab_0x4038b1;
                }
                case 85: {
                    goto lab_0x4038b1;
                }
                case 86: {
                    goto lab_0x4038b1;
                }
                case 87: {
                    goto lab_0x4038b1;
                }
                case 88: {
                    goto lab_0x4038b1;
                }
                case 89: {
                    goto lab_0x4038b1;
                }
                case 90: {
                    goto lab_0x4038b1;
                }
                case 91: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4038b1;
                }
                case 94: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4038b1;
                }
                case 96: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4038b1;
                }
                case 98: {
                    goto lab_0x4038b1;
                }
                case 99: {
                    goto lab_0x4038b1;
                }
                case 100: {
                    goto lab_0x4038b1;
                }
                case 101: {
                    goto lab_0x4038b1;
                }
                case 102: {
                    goto lab_0x4038b1;
                }
                case 103: {
                    goto lab_0x4038b1;
                }
                case 104: {
                    goto lab_0x4038b1;
                }
                case 105: {
                    goto lab_0x4038b1;
                }
                case 106: {
                    goto lab_0x4038b1;
                }
                case 107: {
                    goto lab_0x4038b1;
                }
                case 108: {
                    goto lab_0x4038b1;
                }
                case 109: {
                    goto lab_0x4038b1;
                }
                case 110: {
                    goto lab_0x4038b1;
                }
                case 111: {
                    goto lab_0x4038b1;
                }
                case 112: {
                    goto lab_0x4038b1;
                }
                case 113: {
                    goto lab_0x4038b1;
                }
                case 114: {
                    goto lab_0x4038b1;
                }
                case 115: {
                    goto lab_0x4038b1;
                }
                case 116: {
                    goto lab_0x4038b1;
                }
                case 117: {
                    goto lab_0x4038b1;
                }
                case 118: {
                    goto lab_0x4038b1;
                }
                case 119: {
                    goto lab_0x4038b1;
                }
                case 120: {
                    goto lab_0x4038b1;
                }
                case 121: {
                    goto lab_0x4038b1;
                }
                case 122: {
                    goto lab_0x4038b1;
                }
                case 123: {
                    goto lab_0x403855;
                }
                case 124: {
                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403855;
                }
                case 126: {
                    goto lab_0x40387d;
                }
                default: {
                    goto lab_0x403c55;
                }
            }
        }
      lab_0x403c55:
        if (v23 != 1) {
            // 0x403fc0
            ps = 0;
            int64_t len = v15; // 0x403fd0
            if (v15 == -1) {
                // 0x403fd2
                len = strlen((char *)str);
            }
            // 0x403ffe
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40405f:
                // 0x40405f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x404064
                int64_t v30 = v29 + str;
                v24 = function_408af0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4045da_2;
                    }
                    case -1: {
                        goto lab_0x4045da_2;
                    }
                    case -2: {
                        // 0x4046bd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4046f7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4046fa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404707
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404700
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4045da
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4045da_2;
                    }
                    case 1: {
                        goto lab_0x404030;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4040dc
                        char v34 = *(char *)v33; // 0x4040ed
                        unsigned char v35; // 0x403707
                        if (v34 < 125) {
                            // 0x4040f8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40410f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4040e0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4040ed
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4040f8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40410f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4040e0
                            v33++;
                        }
                        goto lab_0x404030;
                    }
                }
            }
            goto lab_0x4045da_2;
        } else {
            // 0x403ca4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4038b1;
        }
    }
  lab_0x403ed8:
    // 0x403ed8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4047da
        if (v8 > result) {
            // 0x4047e3
            *(char *)(v12 + result) = 0;
        }
        // 0x403b07
        return result;
    }
    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4038b1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4038c0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x403aca_2;
        }
    }
    int64_t v39 = result; // 0x4039c1
    char v40 = v20; // 0x4039c1
    int64_t v41 = v38; // 0x4039c1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4039c1
    int64_t v43 = v36; // 0x4039c1
    goto lab_0x40393d;
  lab_0x403aca_2:
    // 0x403b07
    return function_4036b0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4045da_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4038b1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4041ae
        int64_t v50 = v5 + 1; // 0x404291
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404298
        char v52 = v20; // 0x404298
        int64_t v53 = result; // 0x404298
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x404261
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x404265
            int64_t v56 = v54 + 1; // 0x40426a
            int64_t v57 = v51 + 1; // 0x404291
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40425c
                v54 = v56;
                if (v47 > v54) {
                    // 0x404261
                    *(char *)(v54 + v48) = v55;
                }
                // 0x404265
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
        goto lab_0x40393d;
    }
  lab_0x404030:
    // 0x404030
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40404f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x404052
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4045da
        goto lab_0x4045da_2;
    }
    goto lab_0x40405f;
  lab_0x40387d:
    // 0x40387d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x403aca_2;
    }
    goto lab_0x4038b1;
  lab_0x403855:;
    bool v60 = v15 == 1; // 0x403860
    if (v15 == -1) {
        // 0x403862
        v60 = *(char *)v1 == 0;
    }
    // 0x40386e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4038b1;
    } else {
        goto lab_0x40387d;
    }
  lab_0x40393d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403942
        *(char *)(v44 + v45) = v40;
    }
    // 0x403946
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403758_2;
}
// Address range: 0x4048e0 - 0x404a7e
int64_t function_4048e0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4048e2
    int32_t * v3 = __errno_location(); // 0x4048fc
    int32_t v4 = v2; // 0x404911
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g24; // 0x404901
    int32_t v6 = *v3; // 0x40490b
    int64_t v7 = v5; // 0x404921
    if (v2 >= (int64_t)*(int32_t *)&g27) {
        if (v4 == 0x7fffffff) {
            // 0x404a79
            function_405990(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x404930
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x404937
        int64_t v10; // 0x4048e0
        if (g24 == &g25) {
            int64_t v11 = function_4057a0(0, v9); // 0x404a5a
            int128_t v12 = __asm_movdqa(*(int128_t *)&g25); // 0x404a5f
            *(int64_t *)&g24 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_4057a0(v5, v9); // 0x40494b
            *(int64_t *)&g24 = v13;
            v10 = v13;
        }
        // 0x40495a
        v7 = v10;
        int32_t v14 = *(int32_t *)&g27; // 0x40495a
        int32_t v15 = v8; // 0x404961
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g27 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x404991
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40499b
    int64_t * v18 = (int64_t *)v16; // 0x40499e
    uint64_t v19 = *v18; // 0x40499e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x4049a1
    int64_t result = *v20; // 0x4049a1
    int64_t v21; // 0x4048e0
    uint64_t v22 = function_4036b0(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x4049c4
    if (v19 > v22) {
        // 0x404a3b
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x4049d7
    *v18 = v23;
    if (result != (int64_t)&g48) {
        // 0x4049e7
        free((int64_t *)result);
    }
    int64_t result2 = function_405740(v23); // 0x404a01
    *v20 = result2;
    int64_t v24; // 0x4048e0
    function_4036b0(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x404a3b
    *v3 = v6;
    return result2;
}
// Address range: 0x404a80 - 0x404ab4
int64_t function_404a80(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404a87
    int64_t result = function_405940(a1 == 0 ? (int64_t)&g49 : a1, 56); // 0x404aa6
    return result;
}
// Address range: 0x404ac0 - 0x404acf
int64_t function_404ac0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g49 : a1); // 0x404acc
    return result;
}
// Address range: 0x404ad0 - 0x404adf
int64_t function_404ad0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404ad8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g49;
}
// Address range: 0x404ae0 - 0x404b13
int64_t function_404ae0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 + 8 : a1 + 8; // 0x404af9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x404afe
    uint32_t v3 = *v2; // 0x404afe
    uint32_t v4 = (int32_t)a2 % 32; // 0x404b02
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404b20 - 0x404b33
int64_t function_404b20(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g49 + 4 : a1 + 4); // 0x404b2c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404b40 - 0x404b6b
int64_t function_404b40(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g49 : a1; // 0x404b48
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404b65
        abort();
        // UNREACHABLE
    }
    // 0x404b5c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g49;
}
// Address range: 0x404b70 - 0x404be2
int64_t function_404b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g49 : a5; // 0x404b92
    int32_t * v2 = __errno_location(); // 0x404b9b
    uint32_t v3 = *(int32_t *)v1; // 0x404bbb
    int64_t result = function_4036b0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404bca
    return result;
}
// Address range: 0x404bf0 - 0x404cd1
int64_t function_404bf0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g49 : a4; // 0x404c12
    int32_t * v2 = __errno_location(); // 0x404c18
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404c37
    int32_t * v4 = (int32_t *)v1; // 0x404c3a
    int64_t v5 = function_4036b0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404c55
    int64_t v6 = v5 + 1; // 0x404c5a
    int64_t result = function_405740(v6); // 0x404c6f
    function_4036b0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404cb4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404cbd
    return result;
}
// Address range: 0x404ce0 - 0x404cea
int64_t function_404ce0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ce0
    return function_404bf0(a1, a2, 0, a3);
}
// Address range: 0x404cf0 - 0x404d85
int64_t function_404cf0(void) {
    uint32_t v1 = *(int32_t *)&g27; // 0x404cf0
    int64_t v2 = v1; // 0x404cf0
    int64_t v3 = v2; // 0x404d04
    if (v1 >= 2) {
        int64_t v4 = &g27;
        int64_t v5 = v4 + 16; // 0x404d23
        free((int64_t *)*(int64_t *)v4);
        v3 = &g62;
        while (v5 != (int64_t)g24 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404d20
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g62;
        }
    }
    int64_t v6 = v3; // 0x404d3d
    if (g25 != 0x60f360) {
        // 0x404d3f
        free((int64_t *)g25);
        g25 = 256;
        *(int64_t *)&g26 = (int64_t)&g48;
        v6 = &g62;
    }
    int64_t result = v6; // 0x404d61
    if (g24 != &g25) {
        // 0x404d63
        free(g24);
        *(int64_t *)&g24 = (int64_t)&g25;
        result = &g62;
    }
    // 0x404d76
    *(int32_t *)&g27 = 1;
    return result;
}
// Address range: 0x404d90 - 0x404da1
int64_t function_404d90(void) {
    // 0x404d90
    int64_t v1; // 0x404d90
    return function_4048e0(v1, v1, -1, (int64_t *)&g49);
}
// Address range: 0x404db0 - 0x404dba
int64_t function_404db0(void) {
    // 0x404db0
    int64_t v1; // 0x404db0
    return function_4048e0(v1, v1, v1, (int64_t *)&g49);
}
// Address range: 0x404dc0 - 0x404dd6
int64_t function_404dc0(int64_t a1) {
    // 0x404dc0
    return function_4048e0(0, a1, -1, (int64_t *)&g49);
}
// Address range: 0x404de0 - 0x404df2
int64_t function_404de0(int64_t a1, int64_t a2) {
    // 0x404de0
    return function_4048e0(0, a1, a2, (int64_t *)&g49);
}
// Address range: 0x404e00 - 0x404e68
int64_t function_404e00(int64_t a1, int64_t a2, int64_t * a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404e10
    return function_4048e0(a1, (int64_t)a3, -1, &v1);
}
// Address range: 0x404e70 - 0x404ed4
int64_t function_404e70(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404e80
    return function_4048e0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404ee0 - 0x404eec
int64_t function_404ee0(int64_t a1, int64_t a2) {
    // 0x404ee0
    return function_404e00(0, a1 & 0xffffffff, (int64_t *)a2);
}
// Address range: 0x404ef0 - 0x404eff
int64_t function_404ef0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404ef0
    return function_404e70(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404f00 - 0x404f70
int64_t function_404f00(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x404f0d
    int128_t v2 = __asm_movdqa(g50); // 0x404f15
    int128_t v3 = __asm_movdqa(g51); // 0x404f1d
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x404f32
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404f48
    uint32_t v6 = *v5; // 0x404f48
    uint32_t v7 = (int32_t)a3 % 32; // 0x404f4d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4048e0(0, a1, a2, &v4);
}
// Address range: 0x404f70 - 0x404f7d
int64_t function_404f70(int64_t a1, int64_t a2) {
    // 0x404f70
    return function_404f00(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404f80 - 0x404f91
int64_t function_404f80(int64_t a1) {
    // 0x404f80
    return function_404f00(a1, -1, 58);
}
// Address range: 0x404fa0 - 0x404faa
int64_t function_404fa0(void) {
    // 0x404fa0
    int64_t v1; // 0x404fa0
    return function_404f00(v1, v1, 58);
}
// Address range: 0x404fb0 - 0x40501e
int64_t function_404fb0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404fca
    return function_4048e0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x405020 - 0x40508c
int64_t function_405020(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g49); // 0x405027
    int128_t v2 = __asm_movdqa(g50); // 0x40502f
    int128_t v3 = __asm_movdqa(g51); // 0x405037
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x405059
    if (a2 == 0 || a3 == 0) {
        // 0x405087
        abort();
        // UNREACHABLE
    }
    // 0x40506a
    return function_4048e0(a1, a4, a5, &v4);
}
// Address range: 0x405090 - 0x405099
int64_t function_405090(void) {
    // 0x405090
    int64_t v1; // 0x405090
    return function_405020(v1, v1, v1, v1, -1);
}
// Address range: 0x4050a0 - 0x4050b7
int64_t function_4050a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4050a0
    return function_405020(0, a1, a2, a3, -1);
}
// Address range: 0x4050c0 - 0x4050d3
int64_t function_4050c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4050c0
    return function_405020(0, a1, a2, a3, a4);
}
// Address range: 0x4050e0 - 0x4050ea
int64_t function_4050e0(void) {
    // 0x4050e0
    int64_t v1; // 0x4050e0
    return function_4048e0(v1, v1, v1, &g23);
}
// Address range: 0x4050f0 - 0x405102
int64_t function_4050f0(int64_t a1, int64_t a2) {
    // 0x4050f0
    return function_4048e0(0, a1, a2, &g23);
}
// Address range: 0x405110 - 0x405121
int64_t function_405110(void) {
    // 0x405110
    int64_t v1; // 0x405110
    return function_4048e0(v1, v1, -1, &g23);
}
// Address range: 0x405130 - 0x405146
int64_t function_405130(int64_t a1) {
    // 0x405130
    return function_4048e0(0, a1, -1, &g23);
}
// Address range: 0x405150 - 0x40519b
int64_t function_405150(int64_t * a1) {
    // 0x405150
    int64_t v1; // bp-152, 0x405150
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x405190
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x4051a0 - 0x40557d
int64_t function_4051a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405238
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4051bc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4051d6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40521b
    if (a6 < 10) {
        // 0x40522a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405322
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405580 - 0x4055a0
int64_t function_405580(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405580
    if (a5 == 0) {
        // 0x40559b
        return function_4051a0(a1, a2, a3, a4, a5, 0, (int64_t)&g62);
    }
    int64_t v1 = 0; // 0x405587
    v1++;
    int64_t v2 = v1; // 0x405599
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405590
        v1++;
        v2 = v1;
    }
    // 0x40559b
    return function_4051a0(a1, a2, a3, a4, a5, v2, (int64_t)&g62);
}
// Address range: 0x4055a0 - 0x405600
int64_t function_4055a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4055a0
    int64_t v3 = &v2; // 0x4055a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4055d3
    int64_t v6; // 0x4055bd
    int64_t * v7; // 0x4055db
    int64_t v8; // 0x4055db
    int64_t v9; // 0x4055e7
    if (v5 < 48) {
        // 0x4055b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4055f3
            break;
        }
    } else {
        // 0x4055db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4055f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4055d1
    while (v4 != 9) {
        // 0x4055c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4055b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4055f3
                break;
            }
        } else {
            // 0x4055db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4055f3
                break;
            }
        }
        // 0x4055c9
        v10 = 10;
    }
    // 0x4055f3
    return function_4051a0(a1, a2, a3, a4, v3, v10, (int64_t)&g62);
}
// Address range: 0x405600 - 0x4056bc
int64_t function_405600(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405600
    int64_t v1; // bp-168, 0x405600
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405600
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405600
    int64_t v8; // 0x405600
    int64_t v9; // bp-56, 0x405600
    int64_t v10; // 0x405665
    int64_t v11; // 0x405689
    if ((int32_t)v6 < 48) {
        // 0x405650
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4056a0
            break;
        }
    } else {
        // 0x405682
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4056a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40567a
    int64_t v13 = 10; // 0x40567a
    while (v5 != 9) {
        // 0x40567c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405650
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4056a0
                break;
            }
        } else {
            // 0x405682
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4056a0
                break;
            }
        }
        // 0x405672
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4056a0
    int64_t v14; // bp-136, 0x405600
    int64_t result = function_4051a0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g62); // 0x4056af
    return result;
}
// Address range: 0x4056c0 - 0x405734
int64_t function_4056c0(int64_t a1) {
    // 0x4056c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405723
    return fputs_unlocked(v1, g33);
}
// Address range: 0x405740 - 0x40575a
int64_t function_405740(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405744
    if (size != 0 != (mem == NULL)) {
        // 0x405753
        return (int64_t)mem;
    }
    // 0x405755
    function_405990(size);
    // UNREACHABLE
}
// Address range: 0x405760 - 0x405781
int64_t function_405760(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405763
    int64_t v2 = v1; // 0x405763
    if (v2 < 0) {
        // 0x40577b
        function_405990(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405779
        return function_405740(v2);
    }
    // 0x40577b
    function_405990(v2);
    // UNREACHABLE
}
// Address range: 0x405790 - 0x405792
int64_t function_405790(void) {
    // 0x405790
    int64_t v1; // 0x405790
    return function_405740(v1);
}
// Address range: 0x4057a0 - 0x4057d6
int64_t function_4057a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4057c8
        free(v1);
        return (int32_t)&g62 ^ (int32_t)&g62;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4057b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4057c0
        return (int64_t)mem;
    }
    // 0x4057d1
    function_405990(a1);
    // UNREACHABLE
}
// Address range: 0x4057e0 - 0x405801
int64_t function_4057e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4057e3
    int64_t v2 = v1; // 0x4057e3
    if (v2 < 0) {
        // 0x4057fb
        function_405990(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4057f9
        return function_4057a0(a1, v2);
    }
    // 0x4057fb
    function_405990(a1);
    // UNREACHABLE
}
// Address range: 0x405810 - 0x405896
int64_t function_405810(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40586b
            function_405990(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4057a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405853
    if (a2 == 0) {
        // 0x405878
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405858
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40586b
        function_405990(a1);
        // UNREACHABLE
    }
    // 0x40583a
    *(int64_t *)a2 = v2;
    return function_4057a0(a1, v2 * a3);
}
// Address range: 0x4058a0 - 0x4058f0
int64_t function_4058a0(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (a2 >= (int64_t *)0x5555555555555554) {
            // 0x4058ea
            function_405990(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_4057a0(a1, v2);
    }
    if (a2 == NULL) {
        // 0x4058d5
        *a2 = 128;
        return function_4057a0(0, 128);
    }
    // 0x4058e8
    if (a2 < NULL) {
        // 0x4058ea
        function_405990(a1);
        // UNREACHABLE
    }
    // 0x4058c2
    *a2 = v1;
    return function_4057a0(a1, v1);
}
// Address range: 0x4058f0 - 0x405907
int64_t function_4058f0(int64_t a1, int64_t a2) {
    // 0x4058f0
    return (int64_t)memset((int64_t *)function_405740(a1), 0, (int32_t)a1);
}
// Address range: 0x405910 - 0x40593e
int64_t function_405910(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405917
    if ((int64_t)v1 < 0) {
        // 0x405939
        function_405990(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405939
        function_405990(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40592a
    if (mem != NULL) {
        // 0x405934
        return (int64_t)mem;
    }
    // 0x405939
    function_405990(nmemb);
    // UNREACHABLE
}
// Address range: 0x405940 - 0x405968
int64_t function_405940(int64_t a1, int64_t a2) {
    int64_t v1 = function_405740(a2); // 0x40594f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405970 - 0x405983
int64_t function_405970(int64_t str) {
    // 0x405970
    return function_405940(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405990 - 0x4059c1
int64_t function_405990(int64_t a1) {
    // 0x405990
    error(g22, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4059d0 - 0x405a20
int64_t function_4059d0(int64_t a1, int64_t a2) {
    // 0x4059d0
    int64_t v1; // 0x4059d0
    int64_t result = fts_open(a1, (int32_t)a2 | 512, v1); // 0x4059da
    if (result != 0) {
        // 0x4059e4
        return result;
    }
    // 0x4059f0
    if (*__errno_location() == 22) {
        // 0x405a00
        __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
        return &g62;
    }
    // 0x4059fa
    function_405990(a1);
    // UNREACHABLE
}
// Address range: 0x405a20 - 0x405a49
int64_t function_405a20(int64_t a1, int64_t a2) {
    int64_t result = 1; // 0x405a20
    int32_t v1; // 0x405a20
    switch (v1 & 17) {
        case 17: {
            // 0x405a40
            return *(int64_t *)(a2 + 88) != 0;
        }
        default: {
            // 0x405a37
            result = 0;
        }
        case 16: {
            // 0x405a37
            return result;
        }
    }
}
// Address range: 0x405a50 - 0x405a6a
int64_t function_405a50(int64_t a1, int64_t a2) {
    // 0x405a50
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x405a60
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x405a5c
    return 0;
}
// Address range: 0x405a70 - 0x405a7d
int64_t function_405a70(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x405a70
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x405a80 - 0x405a8c
int64_t function_405a80(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x405a80
    return a1 % a2;
}
// Address range: 0x405a90 - 0x405a9a
int64_t function_405a90(int64_t a1, int64_t a2) {
    // 0x405a90
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x405aa0 - 0x405ac2
int64_t function_405aa0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x405aab
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x405ab2
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x405ad0 - 0x405c7a
int64_t function_405ad0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x405ad6
    int64_t v2 = a1 + 72; // 0x405ade
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x405ade
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x405ae1
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x405ae6
    int64_t v6 = *v5; // 0x405ae6
    int32_t v7; // 0x405ad0
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x405af0;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x405af0;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x405b4b
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x405ba0
                    v7 = *__errno_location();
                    goto lab_0x405ba7;
                } else {
                    goto lab_0x405b67;
                }
            }
        }
    } else {
        goto lab_0x405af0;
    }
  lab_0x405af0:;
    struct stat * v9 = (struct stat *)v1; // 0x405af8
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x405b67;
    } else {
        int32_t * v10 = __errno_location(); // 0x405b01
        int32_t v11 = *v10; // 0x405b09
        v7 = v11;
        if (v11 == 2) {
            // 0x405b14
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x405b2d
                *v10 = 0;
                return 13;
            }
            // 0x405c50
            v7 = *v10;
        }
        goto lab_0x405ba7;
    }
  lab_0x405b67:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x405b6d
    int64_t v13; // 0x405ad0
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x405be0
            v13 = -1;
            if (v14 >= 2) {
                // 0x405bed
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x405bf4
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x405c02
            break;
        }
        case -0x6000: {
            // 0x405b93
            return 12;
        }
        default: {
            // 0x405b93
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x405c02
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x405b93
        return 1;
    }
    // 0x405c18
    if (*(char *)(a2 + 265) == 0) {
        // 0x405b93
        return *v4 == 0 ? 1 : 5;
    }
    // 0x405c21
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x405b93
        return 1;
    }
    // 0x405b93
    return *v4 == 0 ? 1 : 5;
  lab_0x405ba7:
    // 0x405ba7
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x405bb0
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x405c80 - 0x405d7d
int64_t function_405c80(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x405c93
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x405c97
    int64_t v3 = *v2; // 0x405c97
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x405c9b
    int64_t base = v3; // 0x405c9f
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x405cab
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x405d51
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x405cc0
        if (mem == NULL) {
            // 0x405d51
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x405cd1
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x405cdb
    int64_t v7 = result; // 0x405cdb
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x405ce0
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x405cf1
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x405d01
    int64_t result2 = *(int64_t *)v8; // 0x405d08
    if (nmemb == 1) {
        // 0x405d3a
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x405d23
    int64_t * v10 = (int64_t *)v9; // 0x405d23
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x405d2f
    int64_t v12 = v11; // 0x405d33
    int64_t v13 = v9; // 0x405d33
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x405d23
        *(int64_t *)(*v10 + 16) = *v14;
        v12--;
        while (v12 != 0) {
            int64_t * v15 = v14;
            v13 += 8;
            v14 = (int64_t *)v13;
            *(int64_t *)(*v15 + 16) = *v14;
            v12--;
        }
    }
    // 0x405d3a
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x405d80 - 0x405e0a
int64_t function_405d80(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x405d9e
    int64_t result = (int64_t)mem; // 0x405d9e
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x405dab
        memcpy((int64_t *)v2, (int64_t *)a2, v1);
        *(char *)(v2 + a3) = 0;
        *(int64_t *)(result + 96) = a3;
        *(int64_t *)(result + 80) = a1;
        *(int64_t *)(result + 56) = *(int64_t *)(a1 + 32);
        *(int32_t *)(result + 64) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int32_t *)(result + 114) = 0x30000;
        *(int64_t *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
    }
    // 0x405dfc
    return result;
}
// Address range: 0x405e10 - 0x405e51
int64_t function_405e10(int64_t a1) {
    // 0x405e10
    if (a1 == 0) {
        // 0x405e42
        int64_t result; // 0x405e10
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x405e20
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x405e24
    if (dirp != 0) {
        // 0x405e2d
        closedir((struct __dirstream *)dirp);
    }
    // 0x405e32
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x405e2d
            closedir((struct __dirstream *)dirp);
        }
        // 0x405e32
        free((int64_t *)v2);
    }
    // 0x405e42
    return &g62;
}
// Address range: 0x405e60 - 0x405e99
int64_t function_405e60(int64_t a1) {
    int64_t result = function_409f80(a1); // 0x405e7f
    if ((char)result != 0) {
        // 0x405e88
        return result;
    }
    int32_t fd = function_409fd0(a1); // 0x405e78
    if (fd >= 0) {
        // 0x405e90
        close(fd);
    }
    int64_t result2 = function_409f80(a1); // 0x405e7f
    while ((char)result2 == 0) {
        // 0x405e70
        fd = function_409fd0(a1);
        if (fd >= 0) {
            // 0x405e90
            close(fd);
        }
        // 0x405e7c
        result2 = function_409f80(a1);
    }
    // 0x405e88
    return result2;
}
// Address range: 0x405ea0 - 0x405fb1
int64_t function_405ea0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x405ea8
    int64_t v2 = *v1; // 0x405ea8
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x405ee2
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x405eb6
    int64_t v4 = *v3; // 0x405eb6
    int64_t v5 = v4; // 0x405ec0
    int64_t result; // bp-152, 0x405ea0
    if (v4 == 0) {
        // 0x405f50
        v5 = function_4095a0(13, 0, 0x405a80, 0x405a90, 0x4017f0);
        *v3 = v5;
        if (v5 == 0) {
            // 0x405f7c
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x405ee2
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x405ec6
    result = *v6;
    int64_t v7 = function_409330(v5, &result); // 0x405ed4
    if (v7 != 0) {
        // 0x405ee2
        return *(int64_t *)(v7 + 8);
    }
    // 0x405ef0
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x405ee2
        return 0;
    }
    int64_t * mem = malloc(16); // 0x405f0c
    if (mem == NULL) {
        // 0x405ee2
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x405f0c
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_409d40(v5, v8) != 0) {
        // 0x405f38
        return result;
    }
    // 0x405fa0
    free(mem);
    // 0x405ee2
    return result;
}
// Address range: 0x405fc0 - 0x406024
int64_t function_405fc0(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_405ea0(a1, a2); // 0x405fc4
    if (v1 == 0x9fa0) {
        // 0x405ff6
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x406000
        if (v1 != 0) {
            // 0x406007
            return v1 != 0x6969;
        }
        // 0x405ff6
        return 0;
    }
    // 0x405fd3
    switch (v1) {
        case 0x5346414f: {
            // 0x405ff6
            return 0;
        }
        case 0x58465342: {
            // 0x405ff6
            return 2;
        }
    }
    // 0x405ff6
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x406030 - 0x406096
int64_t function_406030(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x40603b
    int32_t fd = *v1; // 0x40603b
    int32_t v2 = a2; // 0x40603e
    if (fd == v2 == (fd != -100)) {
        // 0x406091
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x40604b
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x406055
            *v1 = v2;
            int64_t result; // 0x406030
            return result;
        }
        int32_t result2 = close(fd); // 0x406082
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_409f90(a1 + 96, fd); // 0x406064
    uint32_t fd2 = (int32_t)result3; // 0x406069
    if (fd2 < 0) {
        // 0x406055
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x40606f
    *v1 = v2;
    return result4;
}
// Address range: 0x4060a0 - 0x4060fa
int64_t function_4060a0(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x4060a9
    uint32_t v2 = v1 & 4; // 0x4060ae
    if (v2 != 0) {
        // 0x4060d2
        function_405e60(a1 + 96);
        return 0;
    }
    int64_t result; // 0x4060a0
    if ((v1 & 512) == 0) {
        // 0x4060e8
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x4060b8
        function_406030(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x4060d2
    function_405e60(a1 + 96);
    return result;
}
// Address range: 0x406100 - 0x40616b
int64_t function_406100(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x40610a
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x406138
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x406117
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x40611d
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x40611d
    if (mem != NULL) {
        // 0x406127
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x406158
    free(v3);
    *v3 = 0;
    return (int32_t)&g62 ^ (int32_t)&g62;
}
// Address range: 0x406170 - 0x4061cb
int64_t function_406170(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_4095a0(31, 0, 0x405a70, 0x405a50, 0x4017f0); // 0x406193
        *(int64_t *)a2 = v1;
        // 0x4061a1
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x4061ad
    int64_t v2 = (int64_t)mem; // 0x4061ad
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x4061a1
        return 0;
    }
    // 0x4061bf
    function_408bd0(v2);
    return 1;
}
// Address range: 0x4061d0 - 0x406214
int64_t function_4061d0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x4061ea
    if ((a2 & 512) == 0) {
        // 0x406208
        return function_408c60(a3, v1, (int32_t)v1);
    }
    // 0x4061f8
    return function_40a590((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x406220 - 0x4063e6
int64_t function_406220(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x40622f
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x40623c
    uint32_t v4 = *v3; // 0x40623c
    int64_t v5 = v4; // 0x40623c
    int32_t v6 = v4 & 4; // 0x406243
    int64_t v7; // 0x406220
    int64_t v8; // 0x406220
    int64_t v9; // 0x406220
    int64_t v10; // 0x406220
    int64_t v11; // 0x406220
    if (a4 == 0) {
        goto lab_0x4062c0;
    } else {
        // 0x40624b
        bool v12; // 0x406220
        int64_t v13 = v12 ? -1 : 1; // 0x406258
        int64_t v14 = (int64_t)".."; // 0x406220
        int64_t v15 = v1; // 0x406220
        int64_t v16 = 3; // 0x406258
        unsigned char v17 = *(char *)v15; // 0x406258
        char v18 = *(char *)v14; // 0x406258
        char v19 = v18; // 0x406258
        bool v20 = false; // 0x406258
        while (v17 == v18) {
            // 0x40624b
            v16--;
            v14 += v13;
            v15 += v13;
            v19 = v17;
            v20 = true;
            if (v16 == 0) {
                // break -> 
                break;
            }
            v17 = *(char *)v15;
            v18 = *(char *)v14;
            v19 = v18;
            v20 = false;
        }
        unsigned char v21 = v19;
        if ((v17 >= v21 && !v20) != v17 < v21) {
            goto lab_0x4062c0;
        } else {
            if (v6 != 0) {
                goto lab_0x406330;
            } else {
                // 0x40626b
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x4062d2;
                } else {
                    // 0x406273
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x40635e;
                    } else {
                        int64_t v22 = a1 + 96; // 0x406280
                        int64_t v23 = function_409f80(v22); // 0x40628c
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x40635e;
                        } else {
                            int64_t v24 = function_409fd0(v22); // 0x4062a4
                            if ((int32_t)v24 < 0) {
                                // 0x4063a8
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x40635e;
                            } else {
                                // 0x4062b4
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x4062d2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x4062c0:
    if (v6 != 0) {
        goto lab_0x406330;
    } else {
        // 0x4062c4
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x40635e;
        } else {
            goto lab_0x4062d2;
        }
    }
  lab_0x406330:
    // 0x406330
    if ((v5 & 512) == 0) {
        // 0x40633f
        return 0;
    }
    int32_t fd = a3; // 0x406339
    if (fd >= 0) {
        // 0x406398
        close(fd);
        // 0x40633f
        return 0;
    }
    // 0x40633f
    return 0;
  lab_0x40635e:;
    int64_t v25 = function_4061d0(*(int32_t *)(a1 + 44), v8, v1); // 0x406368
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x40633f
        return 0xffffffff;
    }
    goto lab_0x4062d2;
  lab_0x4062d2:;
    int32_t fd2 = v7; // 0x4062d7
    int64_t v26; // bp-200, 0x406220
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x4062df
    int64_t v28 = 0xffffffff; // 0x4062e8
    if (v27 != 0) {
        goto lab_0x406313;
    } else {
        // 0x4062ea
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x406303;
        } else {
            // 0x4062f5
            int64_t v29; // 0x406220
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x406380
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x4063b8
                    function_406030(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x40633f
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x406387
                v28 = fchdir(fd2);
                goto lab_0x406313;
            } else {
                goto lab_0x406303;
            }
        }
    }
  lab_0x406313:
    // 0x406313
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x406317
        close(fd2);
    }
    // 0x40633f
    return v28 & 0xffffffff;
  lab_0x406303:
    // 0x406303
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x406313;
}
// Address range: 0x4063f0 - 0x40649f
int64_t function_4063f0(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_408be0(a2, a3 + 120); // 0x406478
        if ((char)result == 0) {
            // 0x406461
            return 1;
        }
        // 0x406481
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x406407
    if (mem == NULL) {
        // 0x406461
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x406407
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_409d40(a2, v1); // 0x406436
    if (v2 == v1) {
        // 0x406461
        return 1;
    }
    // 0x406443
    free(mem);
    int64_t result2 = 0; // 0x40644e
    if (v2 != 0) {
        // 0x406450
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x406461
    return result2;
}
// Address range: 0x4064a0 - 0x406536
int64_t function_4064a0(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x4064e0
        free((int64_t *)function_409d80(a2));
        return &g62;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x4064af
    if (result == 0) {
        // 0x4064d9
        return 0;
    }
    // 0x4064b8
    if (*(int64_t *)(result + 88) < 0) {
        // 0x4064d9
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40651c
    int64_t result2 = result; // 0x406520
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x406522
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x4064d9
    return result2;
}
// Address range: 0x406540 - 0x406ef3
int64_t function_406540(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x406554
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x406558
    int64_t dirp = *dirp2; // 0x406558
    int64_t v2; // 0x406540
    int32_t * v3; // 0x406540
    int64_t v4; // 0x406540
    int64_t v5; // 0x406540
    int64_t v6; // 0x406540
    int64_t v7; // 0x406540
    int64_t v8; // 0x406540
    int64_t v9; // 0x406540
    char v10; // 0x406540
    int64_t v11; // 0x406540
    int64_t v12; // 0x406540
    int64_t v13; // 0x406976
    int64_t v14; // 0x406540
    int64_t v15; // 0x4069b5
    int32_t * v16; // 0x406540
    int64_t v17; // 0x4069c2
    int32_t v18; // 0x4069c6
    if (dirp == 0) {
        // 0x406930
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x406930
        uint64_t v20 = (int64_t)v19; // 0x406930
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x40693b
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x406b10
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x40694f
        int64_t v22 = 0xffffff9c; // 0x406968
        if ((v20 & 516) == 512) {
            // 0x40696a
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x40696e
        v13 = function_40a590(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x40697d
        if (fd < 0) {
            goto lab_0x406cb2;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x406987
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x406c9c
                close(fd);
                goto lab_0x406cb2;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x406995
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x406d4c
                    *v26 = (int16_t)function_405ad0(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x4069a5
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x406d00
                        function_4064a0(v27, v28, a1);
                        function_405ad0(a1, a1, 0);
                        int64_t v29 = function_4063f0(*v16, v28, a1); // 0x406d26
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x406d33
                            *__errno_location() = 12;
                          lab_0x406af2:
                            // 0x406af2
                            return 0;
                        }
                    }
                }
                // 0x4069b5
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x406cf0;
                } else {
                    // 0x4069d6
                    if ((*v16 & 56) == 24) {
                        // 0x406b22
                    } else {
                        // 0x4069e6
                        goto lab_0x4069f5;
                    }
                }
            }
        }
    } else {
        // 0x40656a
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x406dcd
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x406af2
                return 0;
            }
            goto lab_0x406de9;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x406cd8
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x406594;
            } else {
                goto lab_0x40658b;
            }
        }
    }
  lab_0x406aa0_2:;
    // 0x406aa0
    int64_t v32; // 0x4066c4
    free((int64_t *)v32);
    int64_t v33; // 0x406540
    function_405e10(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x406540
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x40681c_2:;
    // 0x40681c
    int64_t v35; // 0x406540
    int64_t v36 = v35; // 0x406829
    int64_t v37; // 0x406540
    int64_t v38 = v37; // 0x406829
    int64_t v39; // 0x406540
    int64_t v40 = v39; // 0x406829
    char * v41; // 0x406540
    char * v42 = v41; // 0x406829
    int64_t v43 = v35; // 0x406829
    int64_t result2 = v37; // 0x406829
    int64_t v44 = v39; // 0x406829
    char v45; // 0x406540
    if (v45 == 0) {
        goto lab_0x406b71;
    } else {
        goto lab_0x40682f;
    }
  lab_0x4066ac:;
    // 0x4066ac
    char * str; // 0x406540
    uint64_t len = (int64_t)strlen(str); // 0x4066b3
    int64_t v46; // 0x406540
    v32 = function_405d80(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x406aa0_2;
    }
    // 0x4066d5
    int64_t v47; // 0x406540
    int64_t v48 = v47; // 0x4066da
    char v49; // 0x406540
    char v50 = v49; // 0x4066da
    int64_t v51; // 0x406540
    int64_t v52 = v51; // 0x4066da
    int64_t v53 = a1; // 0x4066da
    int64_t v54; // 0x406540
    int64_t v55; // 0x406540
    int64_t v56; // 0x4065e2
    int64_t * v57; // 0x4065e2
    int64_t v58; // 0x406540
    int64_t * v59; // 0x406540
    if (v51 <= len) {
        char v60 = function_406100(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x406aa0_2;
        }
        int64_t v61 = *v59; // 0x4067a0
        char v62 = v49; // 0x4067a9
        int64_t v63 = v47; // 0x4067a9
        if (v61 != *v59) {
            // 0x4067af
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x4067c3
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x4066e3
    int32_t * v65; // 0x40667a
    if (v64 < len) {
        // 0x406ea0
        free((int64_t *)v32);
        function_405e10(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x406af2;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x4066f3
    int64_t * v68; // 0x4065f7
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x40668b
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x406713
    int32_t v71; // 0x406540
    if ((v70 & 4) != 0) {
        // 0x4067e0
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x4067ed
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x40671e
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x406540
    int64_t v75; // 0x406540
    int64_t v76; // 0x406540
    int64_t v77; // 0x406540
    int64_t v78; // 0x40673c
    int64_t v79; // 0x40673c
    int64_t v80; // 0x406540
    int64_t v81; // 0x40668b
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x406908
        *(int16_t *)(v32 + 112) = (int16_t)function_405ad0(a1, v32, 0);
        v76 = v32;
        goto lab_0x406637;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x406732
        int64_t v83 = v82; // 0x40673a
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x406748;
            } else {
                int64_t v85 = v84; // 0x4068d0
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g9); // 0x406a88
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x4068ef
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x406630;
            }
        } else {
            goto lab_0x406748;
        }
    }
  lab_0x406637:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x406540
    v39 = v88 + 1;
    int64_t v89; // 0x406540
    int64_t v90; // 0x406540
    int64_t v91; // 0x406540
    int64_t v92; // 0x406540
    int64_t v93; // 0x406540
    int64_t v94; // 0x406540
    char v95; // 0x406540
    int64_t v96; // 0x406540
    if (v33 == 0) {
        // 0x406808
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x40681c_2;
        }
    } else {
        // 0x40664b
        *(int64_t *)(v94 + 16) = v32;
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v33;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v33;
        if (v39 >= v12) {
            goto lab_0x40681c_2;
        }
    }
    goto lab_0x406663;
  lab_0x406748:
    // 0x406748
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g9); // 0x40675b
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x406540
        v75 = v167;
    } else {
        // 0x406620
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x406630;
  lab_0x406663:;
    int64_t v97 = *dirp2; // 0x40666d
    int64_t dirp3 = v97; // 0x406674
    int64_t v98 = v91; // 0x406674
    int64_t v99 = v90; // 0x406674
    int64_t v100 = v93; // 0x406674
    int64_t v101 = v89; // 0x406674
    int64_t v102 = v92; // 0x406674
    char v103 = v95; // 0x406674
    int64_t v104 = v96; // 0x406674
    int64_t v105 = v96; // 0x406674
    char v106 = v95; // 0x406674
    int64_t v107 = v93; // 0x406674
    int64_t v108 = v90; // 0x406674
    if (v97 == 0) {
        goto lab_0x406b66;
    }
    goto lab_0x40667a;
  lab_0x406630:
    // 0x406630
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x406637;
  lab_0x406cb2:
    // 0x406cb2
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x406af2
        return 0;
    }
    goto lab_0x406de9;
  lab_0x406de9:
    // 0x406de9
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x406af2
    return 0;
  lab_0x40658b:
    // 0x40658b
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x406594;
  lab_0x406cf0:
    // 0x406cf0
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x406594;
  lab_0x406594:;
    int64_t v111 = *(int64_t *)v4; // 0x406594
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x4065aa
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x4065cb
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x4065d2
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x4065e2
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x40666d
    if (v115 == 0) {
        // 0x4065e2
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x406b71;
    } else {
        // 0x40667a
        v41 = (char *)v4;
        v58 = a1 + 32;
        v59 = (int64_t *)v58;
        v34 = (int32_t *)v4;
        v80 = a1 + 64;
        dirp3 = v115;
        v98 = v9;
        v99 = 0;
        v100 = 0;
        v101 = 0;
        v102 = *v57 - v54;
        v103 = 0;
        v104 = v113;
        while (true) {
          lab_0x40667a:
            // 0x40667a
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x406c50
                break;
            }
            // 0x40669c
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x4066ac;
            } else {
                // 0x4066a2
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x4068b0
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x406663;
                    } else {
                        // 0x4068b6
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x4066ac;
                        } else {
                            goto lab_0x406663;
                        }
                    }
                } else {
                    goto lab_0x4066ac;
                }
            }
        }
        int32_t v116 = *v65; // 0x406c50
        if (v116 != 0) {
            // 0x406c60
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x406c7d
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x406c8a
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x406b66:
        // 0x406b66
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x40682f;
        } else {
            goto lab_0x406b71;
        }
    }
  lab_0x4069f5:;
    int64_t v117 = v13 & 0xffffffff; // 0x40697b
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x4069fa
    int16_t * v121; // 0x406540
    int16_t v122; // 0x406540
    int64_t v123; // 0x406540
    int64_t v124; // 0x406540
    int64_t v125; // 0x406540
    int64_t v126; // 0x406540
    int64_t v127; // 0x406540
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_40a6b0(v117, 1030, 3, v5); // 0x406d71
        int64_t v129 = v128 & 0xffffffff; // 0x406d76
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x406a00;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x406d85
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x406a2d;
            } else {
                // 0x406d9a
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x406a6f;
            }
        }
    } else {
        goto lab_0x406a00;
    }
  lab_0x406b71:
    // 0x406b71
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x406b7d
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x406b96
    if (dirp != 0 || v10 == 0) {
        goto lab_0x406c08;
    } else {
        // 0x406ba5
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x406be8
            int64_t v133; // 0x406540
            if (*v68 != 0) {
                int64_t v134 = function_406220(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x406dbe
                v133 = v134;
            } else {
                // 0x406bf3
                v133 = function_4060a0(a1);
            }
            // 0x406c00
            if ((int32_t)v133 != 0) {
                // 0x406e04
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x406e13
                *v135 = *v135 | 0x4000;
                function_405e10(result2);
                // 0x406af2
                return 0;
            }
            goto lab_0x406c08;
        } else {
            goto lab_0x406bb1;
        }
    }
  lab_0x40682f:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x40682f
    int64_t v137 = *v59; // 0x406833
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x406840
        int64_t v139 = *v138; // 0x406840
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x406850
            *v138 = v139 + v137 - *v140;
        }
        // 0x40685b
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x40685f
        int64_t v142 = v141; // 0x406866
        while (v141 != 0) {
            // 0x406840
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x406850
                *v138 = v139 + v137 - *v140;
            }
            // 0x40685b
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x406868
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x40687e
        int64_t v144 = *v143; // 0x40687e
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x40688e
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x406899
        *v145 = v137;
        int64_t v147 = v146; // 0x4068a4
        if (v146 == 0) {
            // 0x4068a6
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x406870
        v42 = v41;
        v43 = v36;
        result2 = v38;
        v44 = v40;
        while (*(int64_t *)(v147 + 88) >= 0) {
            int64_t v148 = v147;
            v143 = (int64_t *)(v148 + 48);
            v144 = *v143;
            v145 = (int64_t *)(v148 + 56);
            if (v144 != v148 + 264) {
                // 0x40688e
                *v143 = v144 + v137 - *v145;
            }
            // 0x406899
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x4068a6
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x406870
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x406b71;
  lab_0x406a00:;
    int64_t v149 = function_406220(a1, a1, v120, 0); // 0x406a0a
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x406540
    int16_t v151; // 0x406540
    int64_t v152; // 0x406540
    int64_t dirp6; // 0x406540
    int64_t v153; // 0x406540
    if ((int32_t)v149 == 0) {
        goto lab_0x40658b;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x406a1c
        int16_t v156 = *v154 | 1;
        v121 = v154;
        v123 = v120;
        v122 = v156;
        v126 = a1;
        v124 = v155;
        v150 = v154;
        v152 = v120;
        v151 = v156;
        v153 = a1;
        dirp6 = v155;
        if (v119 == 0 || v118 == 0) {
            goto lab_0x406a42;
        } else {
            goto lab_0x406a2d;
        }
    }
  lab_0x406c08:
    // 0x406c08
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x406c18
            function_405e10(result2);
            // 0x406af2
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x406e78
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x406c18
                function_405e10(result2);
                // 0x406af2
                return 0;
            }
        }
        // 0x406e91
        *v157 = 6;
        // 0x406c18
        function_405e10(result2);
        // 0x406af2
        return 0;
    }
    goto lab_0x406bb1;
  lab_0x406bb1:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x406bb1
    int64_t v159 = *v158; // 0x406bb1
    int64_t v160 = v159; // 0x406bbc
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x406bc7
            uint64_t v161; // 0x406540
            int64_t v162; // 0x406540
            return function_405c80(a1, v162, v161);
        }
        // 0x406e2e
        int64_t v163; // 0x406540
        switch (function_405ea0(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x406c30
                v160 = *v158;
                // break -> 0x406c38
                break;
            }
            default: {
                // 0x406e4e
                *v158 = 0x405aa0;
                int64_t result = function_405c80(a1, result2, v44); // 0x406e61
                *v158 = 0;
                // 0x406af2
                return result;
            }
        }
    }
    // 0x406c38
    if (v44 == 1 || v160 == 0) {
        // 0x406af2
        return result2;
    }
    // 0x406bc7
    return function_405c80(a1, result2, v44);
  lab_0x406a2d:
    // 0x406a2d
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x406a42;
  lab_0x406a42:
    // 0x406a42
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x406a4c
    int64_t v165 = v164; // 0x406a4c
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x406a60
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x406a64
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x406a6f;
  lab_0x406a6f:
    // 0x406a6f
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x406594;
}
// Address range: 0x406f00 - 0x407299
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x4071a0
        *__errno_location() = 22;
        // 0x40718d
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x406f48
    int64_t result = (int64_t)mem; // 0x406f48
    if (mem == NULL) {
        // 0x40718d
        return result;
    }
    // 0x406f59
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x4071e0
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x406f67
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x406f6e
    *v2 = -100;
    int64_t v3 = a1; // 0x406f84
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x406f88
    int64_t v5 = v4 < len ? len : v4; // 0x406f90
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x406f98
    while (str != 0) {
        // 0x406f88
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x406fa0
    int64_t v7 = result + 32; // 0x406fb9
    char v8 = function_406100(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x406fc2
    if (v8 == 0) {
        // 0x4071cb
        free(mem);
        // 0x40718d
        return 0;
    }
    int64_t v9; // 0x406f00
    int64_t v10; // 0x406f00
    int64_t v11; // 0x406f00
    char v12; // 0x406f00
    char * v13; // 0x406f00
    char * v14; // 0x406fed
    if (v7 == 0) {
        // 0x4071f0
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x407013;
        } else {
            goto lab_0x40713c;
        }
    } else {
        int64_t v15 = function_405d80(result, (int64_t)&g12, 0); // 0x406fe5
        if (v15 == 0) {
            goto lab_0x4071c2;
        } else {
            // 0x406ffb
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x407020;
            } else {
                goto lab_0x407013;
            }
        }
    }
  lab_0x4070b8:;
    // 0x4070b8
    int64_t v16; // 0x406f00
    int64_t v17; // 0x407059
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x406f00
    int64_t v19 = v18; // 0x4070bc
    int64_t v20 = v17; // 0x4070bc
    goto lab_0x4070bf;
  lab_0x4070bf:;
    int64_t v21 = v20;
    int64_t v22; // 0x406f00
    int64_t v23 = v22 + 1; // 0x4070bf
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x4070c3
    int64_t v25 = v19; // 0x4070cb
    int64_t v26 = v23; // 0x4070cb
    int64_t v27 = v21; // 0x4070cb
    int64_t v28 = v24; // 0x4070cb
    if (v24 == 0) {
        // 0x407120
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x40713c;
        } else {
            // 0x40712b
            v13 = v14;
            v9 = function_405c80(result, v21, v23);
            goto lab_0x40713c;
        }
    }
    goto lab_0x4070cd;
  lab_0x407250:
    // 0x407250
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x4070bf;
  lab_0x407013:
    // 0x407013
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x407020;
  lab_0x40713c:;
    int64_t v35 = function_405d80(result, (int64_t)&g12, 0); // 0x407146
    *mem = v35;
    char * v33 = v13; // 0x407151
    int64_t v34 = v9; // 0x407151
    if (v35 != 0) {
        // 0x407153
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x40715c
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_406170(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x407170
            if ((v37 & 516) == 0) {
                int64_t v38 = function_4061d0(*v2, (int64_t)v37, (int64_t)&g8); // 0x407280
                int32_t v39 = v38; // 0x407285
                *(int32_t *)(result + 40) = v39;
                if (v39 < 0) {
                    int32_t v40 = *v36; // 0x407290
                    *v36 = v40 | 4;
                }
            }
            // 0x40717f
            function_409f60(result + 96, 0xffffffff);
            // 0x40718d
            return result;
        }
    }
    goto lab_0x4071b0;
  lab_0x4071c2:
    // 0x4071c2
    free((int64_t *)*(int64_t *)v7);
    // 0x4071cb
    free(mem);
    // 0x40718d
    return 0;
  lab_0x407020:
    // 0x407020
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x40713c;
    } else {
        // 0x4070cd
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x4070cd:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x4070d0
            int64_t v29 = len2; // 0x4070d0
            int64_t v30 = v29; // 0x4070d9
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x4070ea
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x40710c
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x407050
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x407050
            v17 = function_405d80(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x4071b0
                break;
            }
            // 0x40706a
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x407210
                *(int16_t *)(v17 + 112) = (int16_t)function_405ad0(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x4070b8;
                } else {
                    // 0x40722b
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x407250;
                    } else {
                        goto lab_0x4070bf;
                    }
                }
            } else {
                // 0x40709a
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x407248
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x407250;
                } else {
                    goto lab_0x4070b8;
                }
            }
        }
        goto lab_0x4071b0;
    }
  lab_0x4071b0:
    // 0x4071b0
    function_405e10(v34);
    free((int64_t *)v33);
    goto lab_0x4071c2;
}
// Address range: 0x4072a0 - 0x407419
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x4072b4
        int64_t v2 = a1; // 0x4072b4
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x4072cf
                int64_t v5; // 0x4072a0
                if (v4 != 0) {
                    // 0x4072c0
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x4072eb
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x4072d8
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x4072eb
                        break;
                    }
                }
                // 0x4072cf
                v1 = v5;
            }
        }
        // 0x4072eb
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x4072f3
    if (v7 != 0) {
        // 0x4072fc
        function_405e10(v7);
    }
    // 0x407301
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x407313
    int32_t v9 = *v8; // 0x407313
    int32_t * v10; // 0x4072a0
    int32_t v11; // 0x4072a0
    if ((v9 & 512) == 0) {
        // 0x407370
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x407324;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x407374
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x4073d0
                int32_t v13 = *v12; // 0x4073db
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x407324;
                } else {
                    goto lab_0x4073f2;
                }
            } else {
                // 0x407380
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x407324;
                } else {
                    // 0x40738c
                    v10 = __errno_location();
                    goto lab_0x4073f2;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x40731b
        v11 = 0;
        if (fd2 >= 0) {
            // 0x4073a0
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x4073ad
                v11 = *__errno_location();
            }
        }
        goto lab_0x407324;
    }
  lab_0x407324:
    // 0x407324
    function_405e60(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x40732d
    if (v14 != 0) {
        // 0x407336
        function_4097e0(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x40733b
    if ((*v8 & 258) == 0) {
        // 0x4073c0
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x40734d
            function_4097e0(v15);
        }
    }
    // 0x407352
    free((int64_t *)a1);
    int64_t result = v11; // 0x40735c
    if (v11 != 0) {
        // 0x407408
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x407362
    return result;
  lab_0x4073f2:
    // 0x4073f2
    v11 = *v10;
    goto lab_0x407324;
}
// Address range: 0x407420 - 0x407b79
int64_t fts_read(int64_t result) {
    // 0x407420
    if (result == 0) {
        // 0x40754a
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x407434
    uint32_t v2 = *v1; // 0x407434
    if ((v2 & 0x4000) != 0) {
        // 0x40754a
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x407440
    int16_t v4 = *v3; // 0x407440
    *v3 = 3;
    if (v4 == 1) {
        // 0x407810
        *(int16_t *)(result + 112) = (int16_t)function_405ad0(result, result, 0);
        // 0x40754a
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x40745a
    int16_t v6 = *v5; // 0x40745a
    int64_t v7; // 0x407420
    int64_t v8; // 0x407420
    int64_t v9; // 0x407420
    int64_t v10; // 0x407420
    int64_t v11; // 0x407420
    int64_t v12; // 0x407420
    int64_t v13; // 0x407420
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_405ad0(result, result, 1); // 0x4077ba
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x407aa0
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x407aa0
                    int64_t v17 = function_4061d0(*(int32_t *)(result + 44), v16, (int64_t)&g8); // 0x407b1d
                    int32_t v18 = v17; // 0x407b22
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x407b4e
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x40754a
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x407b29
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = &g8;
                    v12 = v16;
                    goto lab_0x407757;
                } else {
                    // 0x407aab
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x40776e;
                }
            } else {
                // 0x4077c8
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x40754a
                    return result;
                }
                goto lab_0x4077e0;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x4074a0;
            } else {
                goto lab_0x407577;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x4074a0;
        } else {
            if (v4 != 4) {
                goto lab_0x407577;
            } else {
                goto lab_0x407612;
            }
        }
    }
  lab_0x4074a0:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x4074a0
    int64_t result2; // 0x407420
    int64_t v24; // 0x407420
    int64_t v25; // 0x407670
    while (v23 != 0) {
        // 0x407478
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x407660
            if ((int32_t)function_4060a0(result) != 0) {
                // 0x4079ff
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x407670
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x407670
                if ((*v1 & 258) == 0) {
                    // 0x407a0d
                    free((int64_t *)v26);
                    goto lab_0x40768e;
                } else {
                    if (v26 == 0) {
                        goto lab_0x40768e;
                    } else {
                        // 0x407689
                        function_4097e0(v26);
                        goto lab_0x40768e;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x40748f
        if (v28 != 4) {
            // 0x407710
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_405ad0(result, v23, 1); // 0x407a34
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x407a34
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x407ab7
                    if ((v31 & 4) != 0) {
                        // 0x407a3e
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x40771a;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x407ac6
                        int64_t v33 = function_4061d0(v32, (int64_t)v31, (int64_t)&g8); // 0x407ad0
                        int32_t v34 = v33; // 0x407ad5
                        *(int32_t *)(v23 + 68) = v34;
                        if (v34 < 0) {
                            int32_t v35 = *__errno_location(); // 0x407b6b
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v35;
                            // 0x407a3e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40771a;
                        } else {
                            int16_t * v36 = (int16_t *)(v23 + 114); // 0x407ae0
                            *v36 = *v36 | 2;
                            // 0x407a3e
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x40771a;
                        }
                    }
                } else {
                    // 0x407a3e
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x40771a;
                }
            } else {
                goto lab_0x40771a;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v37 = (int64_t *)(v22 + 8); // 0x4074a9
    int64_t v38 = *v37; // 0x4074a9
    int64_t result6 = v38; // 0x4074b2
    if (*(int64_t *)(v38 + 24) != 0) {
        // 0x4079c0
        *v21 = v38;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v38 + 72)) = 0;
        int64_t v39 = function_406540(result, 3); // 0x4079d9
        if (v39 != 0) {
            // 0x407a6f
            free((int64_t *)v22);
            v24 = v39;
            goto lab_0x40771a;
        } else {
            // 0x4079ea
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x40754a
                return 0;
            }
            // 0x4079f6
            result6 = *v37;
            goto lab_0x4074b8;
        }
    } else {
        goto lab_0x4074b8;
    }
  lab_0x407577:;
    int64_t v40 = v2; // 0x407434
    if ((v40 & 64) == 0) {
        goto lab_0x40758b;
    } else {
        // 0x40757c
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x407612;
        } else {
            goto lab_0x40758b;
        }
    }
  lab_0x4074b8:
    // 0x4074b8
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v41 = (int64_t *)(result6 + 88); // 0x4074c4
    if (*v41 == -1) {
        // 0x4078df
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x40754a
        return 0;
    }
    // 0x4074cf
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v41 == 0) {
        // 0x40790f
        if ((int32_t)function_4060a0(result) == 0) {
            goto lab_0x407506;
        } else {
            goto lab_0x40791f;
        }
    } else {
        uint16_t v42 = *(int16_t *)(result6 + 114); // 0x4074f2
        if ((v42 & 2) != 0) {
            int32_t v43 = *v1; // 0x407895
            int32_t * v44 = (int32_t *)(result6 + 68); // 0x40789a
            uint32_t fd = *v44; // 0x40789a
            int32_t fd2 = fd; // 0x40789f
            if ((v43 & 4) == 0) {
                if ((v43 & 512) == 0) {
                    // 0x407a7c
                    if (fchdir(fd) != 0) {
                        // 0x407a85
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x407a98
                    fd2 = *v44;
                } else {
                    // 0x4078aa
                    function_406030(result, (int64_t)fd, 1);
                    fd2 = *v44;
                }
            }
            // 0x4078bc
            close(fd2);
            goto lab_0x407506;
        } else {
            if (v42 % 2 == 0) {
                int64_t v45 = *(int64_t *)(result6 + 8); // 0x407a4c
                if ((int32_t)function_406220(result, v45, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x407506;
                } else {
                    goto lab_0x40791f;
                }
            } else {
                goto lab_0x407506;
            }
        }
    }
  lab_0x407612:
    // 0x407612
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x407a17
        close(*(int32_t *)(result + 68));
    }
    int64_t * v46 = (int64_t *)(result + 8); // 0x40761c
    int64_t v47 = *v46; // 0x40761c
    if (v47 != 0) {
        // 0x407626
        function_405e10(v47);
        *v46 = 0;
    }
    // 0x407634
    *v5 = 6;
    function_4064a0(*v1, result + 88, result);
    // 0x40754a
    return result;
  lab_0x4077e0:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x4077eb
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x40754a
        return result3;
    }
    int64_t v48 = *(int64_t *)(result5 + 8); // 0x407947
    int64_t * v49 = (int64_t *)(v48 + 104); // 0x40794b
    int64_t v50; // 0x407420
    int64_t v51; // 0x407420
    if (*v49 != 0) {
        goto lab_0x407963;
    } else {
        // 0x407952
        if ((*v1 & 24) == 24) {
            // 0x407af9
            if ((int32_t)function_405fc0(v48, v13, v11) != 2) {
                goto lab_0x407963;
            } else {
                // 0x407b0a
                v50 = (int64_t)*(int16_t *)(result5 + 112);
                v51 = result5;
                goto lab_0x407761;
            }
        } else {
            goto lab_0x407963;
        }
    }
  lab_0x40758b:;
    int64_t * v52 = (int64_t *)(result + 8); // 0x40758b
    int64_t v53 = *v52; // 0x40758b
    int64_t v54; // 0x407420
    if (v53 == 0) {
        goto lab_0x407839;
    } else {
        if ((v40 & 0x2000) != 0) {
            // 0x407823
            *v1 = v2 & -0x2001;
            function_405e10(v53);
            *v52 = 0;
            goto lab_0x407839;
        } else {
            int64_t v55 = *(int64_t *)(result + 48); // 0x4075a2
            if ((int32_t)function_406220(result, result, 0xffffffff, (int32_t)v55) == 0) {
                // 0x4078c6
                v54 = *v52;
            } else {
                int32_t * v56 = __errno_location(); // 0x4075be
                int64_t v57 = *v52; // 0x4075c3
                int16_t * v58 = (int16_t *)(result + 114); // 0x4075ca
                *v58 = *v58 | 1;
                *(int32_t *)(result + 64) = *v56;
                v54 = 0;
                if (v57 != 0) {
                    *(int64_t *)(v57 + 48) = *(int64_t *)(*(int64_t *)(v57 + 8) + 48);
                    int64_t v59 = *(int64_t *)(v57 + 16); // 0x4075ec
                    int64_t v60 = v59; // 0x4075f3
                    v54 = v57;
                    while (v59 != 0) {
                        int64_t v61 = *(int64_t *)(*(int64_t *)(v60 + 8) + 48); // 0x4075e4
                        *(int64_t *)(v60 + 48) = v61;
                        v59 = *(int64_t *)(v60 + 16);
                        v60 = v59;
                        v54 = v57;
                    }
                }
            }
            goto lab_0x4075f5;
        }
    }
  lab_0x407757:;
    uint16_t v62 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v50 = v62;
    v51 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v62 == 11) {
        goto lab_0x4077e0;
    } else {
        goto lab_0x407761;
    }
  lab_0x40776e:;
    int64_t v63 = v8; // 0x407773
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x40777e;
    } else {
        goto lab_0x407775;
    }
  lab_0x407963:;
    int64_t v64 = function_405ad0(result, result5, 0); // 0x40796b
    int16_t v65 = v64; // 0x407976
    *(int16_t *)(result5 + 112) = v65;
    v50 = v64;
    v51 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x407761;
    } else {
        // 0x40798c
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x407aea
            result3 = result5;
            if (v65 != 1) {
                int64_t v66 = result3;
                result2 = v66;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x407775;
        } else {
            uint64_t v67 = *v49 - 1; // 0x40799b
            if (v67 < 0xfffffffffffffffe) {
                // 0x407b3a
                *v49 = v67;
            }
            // 0x4079a9
            v63 = result5;
            if (v65 != 1) {
                // 0x40754a
                return result5;
            }
            goto lab_0x40777e;
        }
    }
  lab_0x407839:;
    int64_t v68 = function_406540(result, 3); // 0x407841
    *v52 = v68;
    v54 = v68;
    if (v68 == 0) {
        int32_t v69 = *v1; // 0x407857
        if ((v69 & 0x4000) != 0) {
            // 0x40754a
            return 0;
        }
        // 0x407868
        if (*(int32_t *)(result + 64) == 0) {
            // 0x407883
            function_4064a0(v69, result + 88, result);
            result2 = result;
          lab_0x40754a:
            // 0x40754a
            return result2;
        }
        // 0x407871
        if (*v5 != 4) {
            // 0x407878
            *v5 = 7;
        }
        // 0x407883
        function_4064a0(v69, result + 88, result);
        // 0x40754a
        return result;
    }
    goto lab_0x4075f5;
  lab_0x40771a:;
    int64_t v70 = *(int64_t *)(v24 + 8); // 0x40771a
    int64_t v71 = *(int64_t *)(v70 + 72); // 0x40771e
    char v72 = *(char *)(v71 - 1 + *(int64_t *)(v70 + 56)); // 0x40772a
    int64_t v73 = *(int64_t *)(result + 32) + v71 + (int64_t)(v72 == 47); // 0x407733
    *(char *)v73 = 47;
    int64_t v74 = *(int64_t *)(v24 + 96) + 1; // 0x407743
    int64_t v75 = v24 + 264; // 0x407747
    memmove((int64_t *)(v73 + 1), (int64_t *)v75, (int32_t)v74);
    v7 = v24;
    v10 = v74;
    v12 = v75;
    goto lab_0x407757;
  lab_0x407506:;
    int64_t v76 = (int64_t)*v1; // 0x40750b
    int64_t v77 = v76; // 0x407510
    int32_t * v78; // 0x407420
    int64_t v79; // 0x407420
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x407538;
    } else {
        // 0x407506
        v78 = (int32_t *)(result6 + 64);
        v79 = v76;
        goto lab_0x407512;
    }
  lab_0x40791f:;
    int32_t v80 = *__errno_location(); // 0x407924
    int32_t * v81 = (int32_t *)(result6 + 64);
    *v81 = v80;
    uint32_t v82 = *v1 | 0x4000; // 0x407929
    *v1 = v82;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x40754a
        return 0;
    }
    // 0x40793d
    v78 = v81;
    v79 = v82;
    goto lab_0x407512;
  lab_0x407761:
    // 0x407761
    result2 = v51;
    v8 = v51;
    if ((int16_t)v50 != 1) {
        // 0x40754a
        return result2;
    }
    goto lab_0x40776e;
  lab_0x40777e:;
    int64_t v94 = function_4063f0(*v1, result + 88, v63); // 0x40778e
    result2 = v63;
    if ((char)v94 == 0) {
        // 0x40779b
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x40754a
    return result2;
  lab_0x407775:
    // 0x407775
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v63 = v8;
    goto lab_0x40777e;
  lab_0x4075f5:
    // 0x4075f5
    *v52 = 0;
    v24 = v54;
    goto lab_0x40771a;
  lab_0x407538:
    // 0x407538
    if ((v77 & 0x4000) != 0) {
        // 0x40754a
        return 0;
    }
    // 0x40754a
    return result6;
  lab_0x407512:
    // 0x407512
    if (*v78 != 0) {
        // 0x407901
        int64_t v83; // 0x407420
        *(int16_t *)(v83 + 112) = 7;
        int64_t v84; // 0x407420
        v77 = v84;
    } else {
        // 0x40751d
        *(int16_t *)(result6 + 112) = 6;
        function_4064a0((int32_t)v79, result + 88, result6);
        v77 = (int64_t)*v1;
    }
    goto lab_0x407538;
  lab_0x40768e:;
    int64_t * v85 = (int64_t *)(v23 + 96); // 0x40768e
    int64_t v86 = *v85; // 0x40768e
    int64_t str = v23 + 264; // 0x407692
    int64_t * v87 = (int64_t *)(result + 32); // 0x407699
    *(int64_t *)(v23 + 72) = v86;
    int64_t v88 = v86 + 1; // 0x4076a5
    int64_t * v89 = (int64_t *)str; // 0x4076a9
    memmove((int64_t *)*v87, v89, (int32_t)v88);
    char * found_char_pos = strrchr((char *)str, 47); // 0x4076b6
    int64_t v90 = v88; // 0x4076be
    int64_t v91; // 0x4076b6
    if (found_char_pos == NULL) {
        goto lab_0x4076eb;
    } else {
        // 0x4076c0
        v91 = (int64_t)found_char_pos;
        if (str == v91) {
            // 0x4078d0
            v90 = v88;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x4076eb;
            } else {
                goto lab_0x4076c9;
            }
        } else {
            goto lab_0x4076c9;
        }
    }
  lab_0x4076eb:;
    int64_t v92 = *v87; // 0x4076eb
    *(int64_t *)(v23 + 56) = v92;
    *(int64_t *)(v23 + 48) = v92;
    function_406170(*v1, v25);
    v7 = v23;
    v10 = v90;
    v12 = v25;
    goto lab_0x407757;
  lab_0x4076c9:;
    int64_t str2 = v91 + 1; // 0x4076c9
    int64_t len = strlen((char *)str2); // 0x4076d0
    int64_t v93 = len + 1; // 0x4076de
    memmove(v89, (int64_t *)str2, (int32_t)v93);
    *v85 = len;
    v90 = v93;
    goto lab_0x4076eb;
}
// Address range: 0x407b80 - 0x407ba9
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x407b85
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x407b90
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x407bb0 - 0x407d1d
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x407bbd
    if ((a2 & 0xffffdfff) != 0) {
        // 0x407ca8
        *v1 = 22;
        return 0;
    }
    // 0x407bd1
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x407bda
    if ((*v2 & 64) != 0) {
        // 0x407c4f
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x407be4
    if (v3 == 9) {
        // 0x407cd0
        return *(int64_t *)(a1 + 16);
    }
    // 0x407bf4
    if (v3 != 1) {
        // 0x407c4f
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x407bfc
    int64_t v5 = *v4; // 0x407bfc
    if (v5 != 0) {
        // 0x407c05
        function_405e10(v5);
    }
    int64_t v6 = 1; // 0x407c16
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x407c18
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x407c25
    int64_t result; // 0x407c46
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x407c40
        result = function_406540(a1, v6);
        *v4 = result;
        // 0x407c4f
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x407c37
    if ((v8 & 4) != 0) {
        // 0x407c40
        result = function_406540(a1, v6);
        *v4 = result;
        // 0x407c4f
        return result;
    }
    int32_t v9 = *(int32_t *)(a1 + 44); // 0x407c60
    int64_t v10 = function_4061d0(v9, (int64_t)v8, (int64_t)&g8); // 0x407c68
    int32_t fd = v10; // 0x407c6f
    if (fd < 0) {
        // 0x407cf8
        *v4 = 0;
        // 0x407c4f
        return 0;
    }
    // 0x407c77
    *v4 = function_406540(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x407ce0
        function_406030(a1, v10 & 0xffffffff, 1);
        // 0x407c4f
        return *v4;
    }
    // 0x407c8c
    if (fchdir(fd) == 0) {
        // 0x407c97
        close(fd);
        // 0x407c4f
        return *v4;
    }
    // 0x407d07
    close(fd);
    // 0x407c4f
    return 0;
}
// Address range: 0x407d20 - 0x407dff
int64_t function_407d20(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x407d2c
    uint32_t v2 = *v1; // 0x407d2c
    int64_t v3 = a2 & 0xffffffff; // 0x407d31
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x407d34
    uint64_t v5 = (int64_t)*v4; // 0x407d34
    int64_t v6; // 0x407da2
    if (v3 <= v5) {
      lab_0x407d9c_2:
        // 0x407d9c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x407d22
    int64_t v8 = v2; // 0x407d20
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x407d9c
        goto lab_0x407d9c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x407d58
    int64_t v17; // 0x407d66
    int64_t * v18; // 0x407d80
    int64_t * v19; // 0x407d83
    int64_t v20; // 0x407d8e
    int64_t v21; // 0x407d66
    while ((v16 & 0xffffffff) > v10) {
        // 0x407d63
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407d80
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407d97
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x407d9c
            goto lab_0x407d9c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x407d9c
            goto lab_0x407d9c_2;
        }
        // 0x407d52
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x407ddb
    int64_t * v23 = (int64_t *)v22; // 0x407de0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407de3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407de0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407df7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x407d4d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x407d9c
            goto lab_0x407d9c_2;
        }
        // 0x407d52
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407d63
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407d80
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407d97
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x407d9c
                goto lab_0x407d9c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x407d9c
                goto lab_0x407d9c_2;
            }
            // 0x407d52
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x407dc0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407de0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407df7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x407d9c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x407e00 - 0x40841c
int64_t function_407e00(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x407e1f
    int64_t v2 = *v1; // 0x407e1f
    char * str2 = (char *)v2; // 0x407e2c
    char c = *str2; // 0x407e2c
    int64_t v3 = v2; // 0x407e58
    int64_t v4 = 0; // 0x407e00
    int32_t v5; // 0x407e00
    int64_t v6; // 0x407e00
    int64_t v7; // 0x407e00
    int64_t v8; // 0x407e00
    int64_t v9; // 0x407e00
    int64_t v10; // 0x407e00
    int64_t v11; // 0x407e00
    int64_t v12; // 0x407e00
    int64_t v13; // 0x407e00
    int64_t str3; // 0x407e00
    int64_t v14; // 0x407e00
    int64_t v15; // 0x407e00
    int64_t v16; // 0x407e00
    int64_t v17; // 0x407e00
    int32_t v18; // 0x407e00
    int32_t v19; // 0x407e00
    int32_t v20; // 0x407e00
    int32_t v21; // 0x407e00
    int32_t v22; // 0x407e00
    int32_t v23; // 0x407e00
    int32_t v24; // 0x407e00
    int32_t v25; // 0x407e00
    int32_t v26; // 0x407e00
    int32_t v27; // 0x407e00
    int32_t v28; // 0x407e00
    int32_t v29; // 0x407e00
    int64_t nmemb; // 0x407e00
    int64_t v30; // 0x407e00
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x407e5c
            while (v31 != 0 == (v31 != 61)) {
                // 0x407e58
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407e68
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x407e6e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x407e38
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x407e9c
                int64_t v34; // 0x407e00
                int64_t v35; // 0x407e00
                if (strncmp(str, str2, n) == 0) {
                    // 0x407ea5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x408020;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407eb6
                int64_t v37 = *(int64_t *)v36; // 0x407eba
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407e90
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407ea5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x408020;
                        }
                    }
                    // 0x407eb6
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
                  lab_0x407f06:
                    // 0x407f06
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
                        goto lab_0x407f60;
                    } else {
                        if (v11 == 0) {
                            // 0x4080d0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407f60;
                        } else {
                            if (v39 == 0) {
                                // 0x408080
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x407f2a;
                                } else {
                                    // 0x40808c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x407f2a;
                                    } else {
                                        // 0x40809a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x407f2a;
                                        } else {
                                            goto lab_0x407f60;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x407f2a;
                            }
                        }
                    }
                }
              lab_0x407f71:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x408146
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4082f2
                            flockfile(g35);
                            int64_t v41 = *v1; // 0x408312
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40835f
                            int64_t v43 = (int64_t)g35;
                            int64_t v44 = v43; // 0x408379
                            int64_t v45; // 0x40837b
                            if (*(char *)v42 != 0) {
                                // 0x40837b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g35;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x408373
                            while (v17 + nmemb != v42) {
                                // 0x408375
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40837b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g35;
                                }
                                // 0x408368
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4083a0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g35);
                            v40 = *v1;
                        } else {
                            // 0x408154
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4082af
                        free((int64_t *)v17);
                    }
                    // 0x4081a9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4081c0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40806e
                    return 63;
                }
                // 0x407f90
                v5 = v39;
                if (v13 != 0) {
                    // 0x408014
                    v35 = v13;
                    v34 = v25;
                  lab_0x408020:;
                    int32_t * v49 = (int32_t *)a7; // 0x408030
                    uint32_t v50 = *v49; // 0x408030
                    int64_t v51 = v50; // 0x408030
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40803a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x408043
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40826f
                                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40821a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40806e
                            return 63;
                        }
                        // 0x4080b8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4083cf
                                    __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4082cd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4082e0
                                // 0x40806e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4081de
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4081f2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40805b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40805e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x408062
                    int64_t result = v59; // 0x408068
                    if (v58 != 0) {
                        // 0x40806a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40806e
                    return result;
                }
            } else {
                // 0x407e6e
                v5 = v32;
            }
            // break -> 0x407f95
            break;
        }
    }
    // 0x407f95
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x407fad
        if (*(char *)(v60 + 1) != 45) {
            // 0x407fb7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40806e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4080f9
        __fprintf_chk(g35, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407fe6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407ff6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407f60:
    // 0x407f60
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407f60
    int64_t v63 = *(int64_t *)v62; // 0x407f64
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407f71
        goto lab_0x407f71;
    }
    goto lab_0x407f06;
  lab_0x407f2a:
    // 0x407f2a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x407e00
    int32_t v65; // 0x407e00
    int32_t v66; // 0x407e00
    if (v27 != 0) {
        goto lab_0x407f60;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4080e0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407f60;
            } else {
                goto lab_0x407f51;
            }
        } else {
            // 0x407f45
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40823c
                int64_t v67 = (int64_t)mem; // 0x40823c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407f60;
                } else {
                    // 0x40824f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x407f51;
                }
            } else {
                goto lab_0x407f51;
            }
        }
    }
  lab_0x407f51:
    // 0x407f51
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407f60;
}
// Address range: 0x408420 - 0x4089e6
int64_t function_408420(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x408441
    if (v3 < 1) {
        // 0x4085fe
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40843d
    int32_t v5 = *(int32_t *)a7; // 0x408449
    uint64_t v6 = a1 & 0xffffffff; // 0x40844b
    int64_t v7 = v2; // 0x408450
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x408453
    *v8 = 0;
    int64_t v9; // 0x408420
    int64_t v10; // 0x408420
    int64_t v11; // 0x408420
    int64_t v12; // 0x408420
    int64_t str; // 0x408420
    int64_t v13; // 0x408420
    int64_t v14; // 0x408420
    int64_t v15; // 0x408420
    int64_t v16; // 0x408420
    int64_t v17; // 0x408420
    int32_t v18; // 0x408420
    char v19; // 0x408420
    if (v5 == 0) {
        // 0x408638
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40846a;
    } else {
        // 0x408463
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4084b0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4084b3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x408578;
            } else {
                int64_t v22 = v7 + 1; // 0x4084c6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4084d6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40858c;
                } else {
                    goto lab_0x4084e8;
                }
            }
        } else {
            goto lab_0x40846a;
        }
    }
  lab_0x40846a:
    // 0x40846a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x408470
    *v24 = 0;
    int64_t v25; // 0x408420
    int64_t v26; // 0x408420
    int64_t v27; // 0x408420
    switch (*(char *)&v2) {
        case 45: {
            // 0x408560
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40856d;
        }
        case 43: {
            // 0x408870
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40856d;
        }
        default: {
            // 0x40848c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4087ef
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x408908
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40856d;
                } else {
                    // 0x4087fd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40849a;
                }
            } else {
                goto lab_0x40849a;
            }
        }
    }
  lab_0x408578:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40857f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4084e8;
    } else {
        goto lab_0x40858c;
    }
  lab_0x40849a:
    // 0x40849a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40856d;
  lab_0x40856d:
    // 0x40856d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x408578;
  lab_0x4084e8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4084e8
    int64_t v31 = v30; // 0x4084e8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4084ea
    if ((int64_t)*v32 > v31) {
        // 0x4084ef
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4084f2
    if (*v33 > v30) {
        // 0x4084f7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4084fa
    int64_t v35 = v31; // 0x4084fe
    int64_t v36 = v15; // 0x4084fe
    int64_t v37; // 0x408420
    int64_t v38; // 0x408420
    int64_t v39; // 0x408420
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x408668
        int64_t v41 = v40; // 0x408668
        v2 = v41;
        int64_t v42; // 0x408420
        if (*v33 == v40) {
            // 0x408850
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408858
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x408674
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x408678
                function_407d20(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x408688
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x408691
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40869a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4086b1
            int64_t v47 = v45 & 0xffffffff; // 0x4086b5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4086be
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4086c4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4086c6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4086a0
            int64_t v49 = v48 & 0xffffffff; // 0x4086a0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4086b1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4086be
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4086c4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4086c6;
                    }
                }
                // 0x4086a0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408868
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4086c6;
    } else {
        goto lab_0x408504;
    }
  lab_0x40858c:
    // 0x40858c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40858f
    int64_t v51 = v12; // 0x40858f
    int64_t v52 = v14; // 0x40858f
    if (*(char *)v10 == 0) {
        goto lab_0x4084e8;
    } else {
        goto lab_0x408595;
    }
  lab_0x408504:;
    int32_t v53 = v35; // 0x408504
    int64_t v54; // 0x408420
    int64_t v55; // 0x408420
    int64_t v56; // 0x408420
    int64_t v57; // 0x408420
    int64_t v58; // 0x408420
    int64_t v59; // 0x408420
    char * v60; // 0x408420
    int64_t v61; // 0x408420
    int64_t v62; // 0x408519
    int64_t v63; // 0x408420
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x408653
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x408656;
    } else {
        // 0x40850c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x408420
        int64_t v66 = v65 ? -1 : 1; // 0x408520
        int64_t v67 = (int64_t)"--"; // 0x408420
        int64_t v68 = v62; // 0x408420
        int64_t v69 = 3; // 0x408520
        unsigned char v70 = *(char *)v68; // 0x408520
        char v71 = *(char *)v67; // 0x408520
        char v72 = v71; // 0x408520
        bool v73 = false; // 0x408520
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
            // 0x408610
            if (*(char *)v62 == 45) {
                // 0x4086d0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4086d0
                if (c == 0) {
                    goto lab_0x40861a;
                } else {
                    // 0x4086dd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408760;
                    } else {
                        if (c == 45) {
                            // 0x408943
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4087b5;
                        } else {
                            // 0x4086ee
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408760;
                            } else {
                                // 0x4086f3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x408714;
                                } else {
                                    // 0x4086fa
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408760;
                                    } else {
                                        goto lab_0x408714;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40861a;
            }
        } else {
            uint32_t v75 = *v33; // 0x408530
            v2 = v75;
            int32_t v76 = *v32; // 0x408533
            int64_t v77 = v35 + 1; // 0x408536
            int32_t v78 = v77; // 0x408539
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4088a0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x408547
                    function_407d20(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x408555
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x408656;
        }
    }
  lab_0x408595:;
    // 0x408595
    int64_t v79; // bp-104, 0x408420
    int64_t v80 = &v79; // 0x40842a
    int64_t v81 = v50 + 1; // 0x408595
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40859c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4085a1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4085a5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4085a9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4085b1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4085b6
    int32_t c2 = v84; // 0x4085b6
    char * found_char_pos = strchr(str2, c2); // 0x4085b6
    int64_t v87 = *v82; // 0x4085bb
    v2 = v87;
    int64_t v88 = *v85; // 0x4085c5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4085d0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4088c0
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40888d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4085fe
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4085b6
    char v91 = *(char *)(v90 + 1); // 0x4085eb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4085a5
        if (v91 != 58) {
            // 0x4085fe
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x408814
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x408918
                *v8 = 0;
            } else {
                // 0x4088fc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40883e
            *v83 = 0;
            // 0x4085fe
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40881e
        if (v93 != 0) {
            // 0x4088b0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40883e
            *v83 = 0;
            // 0x4085fe
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x408831
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40883e
            *v83 = 0;
            // 0x4085fe
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40897a
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40892a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x408931
        // 0x40883e
        *v83 = 0;
        // 0x4085fe
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x408789
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40878b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4089b0
                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408961
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408968
            // 0x4085fe
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408796
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40879a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4087b5;
  lab_0x4086c6:
    // 0x4086c6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x408504;
  lab_0x4087b5:;
    int64_t v99 = function_407e00(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4087d3
    // 0x4085fe
    return v99 & 0xffffffff;
  lab_0x408656:;
    int32_t v100 = v55; // 0x408656
    if (v100 != (int32_t)v59) {
        // 0x40865a
        *(int32_t *)a7 = v100;
    }
    // 0x4085fe
    return 0xffffffff;
  lab_0x40861a:
    // 0x40861a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x408621
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4085fe
    return v99 & 0xffffffff;
  lab_0x408760:
    // 0x408760
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x408595;
  lab_0x408714:
    // 0x408714
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_407e00(v6, a2, str, a4, a5, v57, v1, v11, &g11); // 0x40873a
    if ((int32_t)v101 != -1) {
        // 0x4085fe
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40874f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408760;
}
// Address range: 0x4089f0 - 0x408a46
int64_t function_4089f0(int64_t a1) {
    // 0x4089f0
    *(int32_t *)&g52 = g30;
    *(int32_t *)&g53 = g29;
    int64_t v1; // 0x4089f0
    int64_t result = function_408420(v1, v1, v1, v1, v1, v1, &g52, a1 & 0xffffffff); // 0x408a16
    g30 = *(int32_t *)&g52;
    g58 = g55;
    *(int32_t *)&g28 = g54;
    return result;
}
// Address range: 0x408a50 - 0x408a68
int64_t function_408a50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408a50
    return function_4089f0(1);
}
// Address range: 0x408a70 - 0x408a83
int64_t function_408a70(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x408a70
    return function_4089f0(0);
}
// Address range: 0x408a90 - 0x408aa5
int64_t function_408a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408a90
    return function_408420(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408ab0 - 0x408ac6
int64_t function_408ab0(void) {
    // 0x408ab0
    return function_4089f0(0);
}
// Address range: 0x408ad0 - 0x408ae8
int64_t function_408ad0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408ad0
    return function_408420(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408af0 - 0x408b6a
int64_t function_408af0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x408afb
    int64_t v2 = (int64_t)&g12; // 0x408afb
    int32_t * pwc; // 0x408af0
    int64_t v3; // 0x408af0
    int64_t n; // 0x408af0
    if (a2 == 0) {
        goto lab_0x408b42;
    } else {
        // 0x408afd
        if (a3 == 0) {
            // 0x408b28
            return -2;
        }
        // 0x408b09
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x408b42;
        } else {
            goto lab_0x408b14;
        }
    }
  lab_0x408b42:
    // 0x408b42
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408af0
    pwc = (int32_t *)&v4;
    goto lab_0x408b14;
  lab_0x408b14:;
    char * wstr = (char *)v3; // 0x408b1a
    int64_t ps; // 0x408af0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x408b1a
    int64_t result = v5; // 0x408b1a
    if (v5 < 0xfffffffe) {
        // 0x408b28
        return result;
    }
    int64_t result2 = result; // 0x408b59
    if ((char)function_408cb0(0, v3) == 0) {
        // 0x408b5b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x408b28
    return result2;
}
// Address range: 0x408b70 - 0x408bcd
int64_t function_408b70(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x408b77
    int64_t v2; // 0x408b70
    int64_t result = function_40a630(a1, v2); // 0x408b88
    if ((v2 & 32) != 0) {
        // 0x408bb0
        if ((int32_t)result == 0) {
            // 0x408bb4
            *__errno_location() = 0;
        }
        // 0x408baa
        return 0xffffffff;
    }
    // 0x408b91
    if ((int32_t)result == 0) {
        // 0x408baa
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x408b98
    if (v1 == 0) {
        // 0x408b9a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x408baa
    return result2;
}
// Address range: 0x408bd0 - 0x408be0
int64_t function_408bd0(int64_t a1) {
    // 0x408bd0
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x408bd0
    return result;
}
// Address range: 0x408be0 - 0x408c60
int64_t function_408be0(int64_t a1, int64_t a2) {
    // 0x408be0
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x408c42
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g62;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x408be9
    int64_t v2 = *v1; // 0x408be9
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x408bed
    if (v2 == 0) {
        // 0x408c10
        *v1 = 1;
        // 0x408c18
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x408c28
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x408c08
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x408bfb
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x408c08
        return 0;
    }
    // 0x408c37
    if (v4 == 0) {
        // 0x408c08
        return 1;
    }
    // 0x408c18
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x408c60 - 0x408caa
int64_t function_408c60(int64_t path, int64_t oflag, int32_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x408c73
    return function_40a5e0((int64_t)fd);
}
// Address range: 0x408cb0 - 0x408d0e
int64_t function_408cb0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x408cb6
    if (locale == NULL) {
        // 0x408ce3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x408cb6
    bool v2; // 0x408cb0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g13; // 0x408cb0
    int64_t v5 = v1; // 0x408cb0
    int64_t v6 = 2; // 0x408cd5
    unsigned char v7 = *(char *)v5; // 0x408cd5
    char v8 = *(char *)v4; // 0x408cd5
    char v9 = v8; // 0x408cd5
    bool v10 = false; // 0x408cd5
    while (v7 == v8) {
        // 0x408cc8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x408ce1
    int64_t v13 = v1; // 0x408ce1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x408ce3
        return 0;
    }
    int64_t v14 = 6; // 0x408ce1
    unsigned char v15 = *(char *)v13; // 0x408cfd
    char v16 = *(char *)v12; // 0x408cfd
    char v17 = v16; // 0x408cfd
    bool v18 = false; // 0x408cfd
    while (v15 == v16) {
        // 0x408cf0
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
// Address range: 0x408d10 - 0x408da3
int64_t function_408d10(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x408d27
    if (v1 == -1) {
        // 0x408d9f
        return -1;
    }
    int64_t v2 = v1; // 0x408d2f
    int64_t v3; // 0x408d10
    while (true) {
      lab_0x408d38:
        // 0x408d38
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x408d90;
        } else {
            goto lab_0x408d95;
        }
    }
  lab_0x408d9f_2:;
    // 0x408d9f
    int64_t result; // 0x408d10
    return result;
  lab_0x408d95:;
    int64_t v4 = v3 + 2; // 0x408d95
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x408d9f
        goto lab_0x408d9f_2;
    }
    goto lab_0x408d38;
  lab_0x408d90:
    // 0x408d90
    result = v3;
    goto lab_0x408d95;
}
// Address range: 0x408db0 - 0x408dc0
int64_t function_408db0(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x408db0
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x408dc0 - 0x408dc7
int64_t function_408dc0(int64_t a1, int64_t a2) {
    // 0x408dc0
    int64_t v1; // 0x408dc0
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x408dd0 - 0x408df1
int64_t function_408dd0(int64_t a1, int64_t a2) {
    // 0x408dd0
    int64_t v1; // 0x408dd0
    return 16 * v1 + a2;
}
// Address range: 0x408e00 - 0x408f19
int64_t function_408e00(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_408dd0(a1, a2); // 0x408e14
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x408e1c
    int64_t result2 = *v2; // 0x408e1c
    if (result2 == 0) {
        // 0x408eae
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x408e44
            if (v3 == 0) {
                // 0x408eae
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x408e51
            int64_t v5 = v3; // 0x408e57
            int64_t v6 = v1; // 0x408e57
            int64_t result = v4; // 0x408e57
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x408e8c_2:
                // 0x408e8c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x408e91
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x408ea0
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x408eae
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x408e64
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x408e71
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x408e8c_2;
                }
                // 0x408e79
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x408e8c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x408eae
            return 0;
        }
    }
    // 0x408ec3
    if ((char)a4 == 0) {
        // 0x408eae
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x408ec8
    if (v12 == 0) {
        // 0x408f10
        *v2 = 0;
        // 0x408eae
        return result2;
    }
    // 0x408ed1
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x408edf
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x408f20 - 0x408f9e
int64_t function_408f20(uint64_t a1) {
    if (a1 == (int64_t)&g14) {
        // 0x408f9d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x408f2b
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g14) {
        // 0x408f8a
        *(int64_t *)a1 = (int64_t)&g14;
        return 0;
    }
    // 0x408f39
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x408f54
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x408f61
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x408f69
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x408f9d
    return 1;
}
// Address range: 0x408fa0 - 0x4090ea
int64_t function_408fa0(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x408fba
    uint64_t v2 = *v1; // 0x408fba
    if (v2 <= a2) {
        // 0x4090a4
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x408fa0
    int64_t v8 = a2; // 0x408fa0
    int64_t v9; // 0x408fa0
    int64_t result; // 0x408fa0
    int64_t v10; // 0x408fa0
    while (true) {
      lab_0x408fd6_2:
        // 0x408fd6
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x408fd6
        int64_t v12 = *v11; // 0x408fd6
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x408fc8;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x408fdf
            int64_t v14 = *v13; // 0x408fdf
            int64_t v15 = v14; // 0x408fe7
            int64_t v16 = v12; // 0x408fe7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x409004
                    int64_t v19 = *v18; // 0x409004
                    int64_t v20 = function_408dd0(v3, v19); // 0x40900d
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x409012
                    int64_t v22 = *v21; // 0x409012
                    int64_t * v23 = (int64_t *)v20; // 0x409016
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x408ff0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x40903f
                            break;
                        }
                    } else {
                        // 0x40901c
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x40903f
                            break;
                        }
                    }
                    // 0x409004
                    v15 = v22;
                }
                // 0x40903f
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x409043
                v9 = *v1;
                goto lab_0x408fc8;
            } else {
                int64_t v26 = function_408dd0(v3, v25); // 0x40905b
                int64_t * v27 = (int64_t *)v26; // 0x409060
                if (*v27 == 0) {
                    // 0x4090c0
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x409069
                    int64_t * v29; // 0x408fa0
                    int64_t v30; // 0x408fa0
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x4090cf
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x4090a4
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x4090cf
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x40907a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x409089
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x409091
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x40909a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x4090a4
                    break;
                }
                goto lab_0x408fd6_2;
            }
        }
    }
    // 0x4090a4
    return result;
  lab_0x408fc8:;
    int64_t v36 = v10 + 16; // 0x408fc8
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x408fd6_2;
    // 0x408fd6
    goto lab_0x408fd6_2;
}
// Address range: 0x4090f0 - 0x4090f5
int64_t function_4090f0(int64_t a1) {
    // 0x4090f0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x409100 - 0x409105
int64_t function_409100(int64_t a1) {
    // 0x409100
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x409110 - 0x409115
int64_t function_409110(int64_t a1) {
    // 0x409110
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x409120 - 0x40916f
int64_t function_409120(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409123
    int64_t result = 0; // 0x40912c
    if (v1 <= a1) {
      lab_0x40916d:
        // 0x40916d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x409130
    while (*(int64_t *)v3 == 0) {
        // 0x409130
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40913f
    int64_t v6 = v5; // 0x40914b
    int64_t v7 = 1; // 0x40914b
    int64_t v8; // 0x409120
    int64_t v9; // 0x409150
    int64_t v10; // 0x409154
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x409150
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x409160
    int64_t v12 = v3 + 16; // 0x409164
    while (v12 < v1) {
        // 0x409139
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x409130
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x40913f
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
                // 0x409150
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x40915d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x40916d
    return result2;
}
// Address range: 0x409170 - 0x4091d7
int64_t function_409170(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x409173
    int64_t v2 = a1; // 0x40917f
    int64_t v3 = 0; // 0x40917f
    int64_t v4 = 0; // 0x40917f
    int64_t v5 = 0; // 0x40917f
    int64_t v6 = 0; // 0x40917f
    int64_t v7; // 0x409170
    int64_t v8; // 0x409170
    int64_t v9; // 0x409170
    if (v1 > a1) {
        while (true) {
          lab_0x409191_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x409188;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x409197
                int64_t v13 = v10 + 1; // 0x40919b
                int64_t v14 = v11 + 1; // 0x40919f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x4091a6
                int64_t v16 = v14; // 0x4091a6
                if (v12 == 0) {
                    goto lab_0x409188;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x4091b0
                    int64_t v18 = v16 + 1; // 0x4091b4
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x4091b0
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x4091bd
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x4091c6
                        break;
                    }
                    goto lab_0x409191_2;
                }
            }
        }
    }
  lab_0x4091c6:
    // 0x4091c6
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x4091cf
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x4091ce
    return 0;
  lab_0x409188:;
    int64_t v20 = v8 + 16; // 0x409188
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x4091c6
        goto lab_0x4091c6;
    }
    goto lab_0x409191_2;
    // 0x409191
    goto lab_0x409191_2;
}
// Address range: 0x4091e0 - 0x409328
int64_t function_4091e0(uint64_t a1, int64_t a2) {
    // 0x4091e0
    int128_t v1; // 0x4091e0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x4091f3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x4091f7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x4091fe
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x409210
            while (*(int64_t *)v7 == 0) {
                // 0x409210
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x40924d
                    goto lab_0x40924d;
                }
            }
        }
    }
  lab_0x40924d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x40925c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x4091e0
    int128_t v10; // 0x4091e0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x4092f3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x4092fc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x409293;
        } else {
            goto lab_0x409309;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x409286
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x409309;
        } else {
            goto lab_0x409293;
        }
    }
  lab_0x409293:
    // 0x409293
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x409297
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x409297
    goto lab_0x40929c;
  lab_0x409309:
    // 0x409309
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x40931a
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x40929c;
  lab_0x40929c:
    // 0x40929c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x409330 - 0x409383
int64_t function_409330(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_408dd0(a1, result); // 0x40933a
    int64_t v2 = *(int64_t *)v1; // 0x40933f
    if (v2 == 0) {
        // 0x40936d
        return 0;
    }
    // 0x409353
    if (v2 == result) {
        // 0x40936d
        return result;
    }
    int64_t v3 = v1; // 0x409364
    int64_t result2 = v2; // 0x409362
    while ((char)v1 == 0) {
        // 0x409364
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x40936d
            break;
        }
        // 0x409350
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x40936d
            break;
        }
        result2 = v2;
    }
    // 0x40936d
    return result2;
}
// Address range: 0x409390 - 0x4093d8
int64_t function_409390(uint64_t a1) {
    int64_t result = 0; // 0x409395
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x4093a7
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x40939e
    if (v1 <= a1) {
        // 0x4093a7
        return result;
    }
    int64_t v2 = a1; // 0x4093a5
    int64_t v3 = *(int64_t *)v2; // 0x4093b9
    result = v3;
    while (v3 == 0) {
        // 0x4093b0
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x4093a7
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x4093a7
    return result;
}
// Address range: 0x4093e0 - 0x40944a
int64_t function_4093e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_408dd0(a1, a2); // 0x4093ec
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x409408
    while (*(int64_t *)v2 != a2) {
        // 0x409400
        if (v3 == 0) {
            goto lab_0x409416;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x409440
        return *(int64_t *)v3;
    }
  lab_0x409416:;
    int64_t v4 = v1 + 16; // 0x409428
    int64_t result = 0; // 0x40942f
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x409420
        result = v5;
        if (v5 != 0) {
            // break -> 0x409433
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x409433
    return result;
}
// Address range: 0x409450 - 0x4094b4
int64_t function_409450(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x409456
    int64_t result = 0; // 0x40945a
    if (*v1 <= a1) {
      lab_0x409471:
        // 0x409471
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x40945f
    int64_t v4 = v2; // 0x409465
    int64_t v5; // 0x409450
    int64_t v6; // 0x409450
    int64_t v7; // 0x409498
    int64_t v8; // 0x4094a1
    int64_t v9; // 0x409481
    int64_t v10; // 0x409485
    if (v3 != 0) {
        // 0x409478
        if (v2 >= a3) {
            // break -> 0x409471
            break;
        }
        // 0x40947d
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
            // 0x409495
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x409490
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x409495
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
    int64_t v12 = a1 + 16; // 0x409467
    result = v11;
    while (*v1 > v12) {
        // 0x40945f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x409478
            result = v2;
            if (v2 >= a3) {
                // break -> 0x409471
                break;
            }
            // 0x40947d
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
                // 0x409495
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x409490
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x409495
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x409467
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x409471
    return result;
}
// Address range: 0x4094c0 - 0x409538
int64_t function_4094c0(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x4094d1
    int64_t result = 0; // 0x4094d5
    if (v1 <= a1) {
      lab_0x4094f4:
        // 0x4094f4
        return result;
    }
    int64_t v2 = a1; // 0x4094ea
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x4094e8
    int64_t v5 = v2; // 0x4094e8
    int64_t v6 = v3; // 0x4094e8
    int64_t v7; // 0x4094c0
    int64_t v8; // 0x409518
    int64_t v9; // 0x40951c
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x409518
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x409528
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x409518
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
        // 0x4094e2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x409518
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x409528
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x409518
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x4094ea
        result2 = v4;
        v2 += 16;
    }
    // 0x4094f4
    return result2;
}
// Address range: 0x409540 - 0x409571
int64_t function_409540(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x409547
    if (v1 == 0) {
        // 0x40956d
        return 0;
    }
    int64_t result = 0; // 0x409547
    v2++;
    char v3 = *(char *)v2; // 0x409563
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40956d
    return result;
}
// Address range: 0x409580 - 0x4095a0
int64_t function_409580(int64_t a1) {
    // 0x409580
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x4095a0 - 0x40972a
int64_t function_4095a0(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4095a0
    int128_t v1; // 0x4095a0
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x4095da
    int64_t result = (int64_t)mem; // 0x4095da
    if (mem == NULL) {
        // 0x40968a
        return result;
    }
    int64_t v3 = result + 40; // 0x4095eb
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x4095a0
    int128_t v6; // 0x4095a0
    if (a2 == 0) {
        // 0x4096a0
        *v4 = (int64_t)&g14;
        int64_t v7 = function_408f20(v3); // 0x4096a8
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x4096ad
        if ((char)v7 == 0) {
            // 0x409680
            free(mem);
            // 0x40968a
            return 0;
        }
        // 0x4096b9
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x409703;
        } else {
            goto lab_0x4096be;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_408f20(v3) == 0) {
            // 0x409680
            free(mem);
            // 0x40968a
            return 0;
        }
        // 0x409605
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_408d10(a1); // 0x409613
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x409680
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x409680
                free(mem);
                // 0x40968a
                return 0;
            }
            // 0x409631
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x409680
                free(mem);
                // 0x40968a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x409642
            int64_t v10 = (int64_t)mem2; // 0x409642
            *mem = v10;
            if (mem2 == NULL) {
                // 0x409680
                free(mem);
                // 0x40968a
                return 0;
            }
            // 0x40964f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x408db0 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x408dc0 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40968a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x4096f8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x4096be;
        } else {
            goto lab_0x409703;
        }
    }
  lab_0x409703:
    // 0x409703
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x409713
    int128_t v13 = v6; // 0x40971c
    int128_t v14 = __asm_addss(v12, v12); // 0x40971c
    goto lab_0x4096c7;
  lab_0x4096be:
    // 0x4096be
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x4096c7;
  lab_0x4096c7:
    // 0x4096c7
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x409680
    free(mem);
    // 0x40968a
    return 0;
}
// Address range: 0x409730 - 0x4097d8
int64_t function_409730(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x40973a
    uint64_t v2 = *v1; // 0x40973a
    int64_t result; // 0x409730
    if (v2 <= a1) {
      lab_0x4097c3:
        // 0x4097c3
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x409748
    while (*v6 == 0) {
        // 0x409748
        v7 = v5 + 16;
        int64_t v8; // 0x409730
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x4097c3
            goto lab_0x4097c3;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x409759
    int64_t v10 = *v9; // 0x409759
    int64_t v11 = *v3; // 0x40975e
    int64_t v12 = v11; // 0x409765
    int64_t v13 = v10; // 0x409765
    int64_t result2 = v11; // 0x409765
    int64_t * v14; // 0x40977e
    int64_t v15; // 0x40977e
    int64_t v16; // 0x40977a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x409775
            v16 = *v3;
        }
        // 0x40977e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x409770
            v16 = 0;
            if (v12 != 0) {
                // 0x409775
                v16 = *v3;
            }
            // 0x40977e
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
    // 0x40979d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x4097b0
    *v9 = 0;
    uint64_t v18 = *v1; // 0x4097bd
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40974c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x409748
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x4097c3
                goto lab_0x4097c3;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x409759
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x409775
                v16 = *v3;
            }
            // 0x40977e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x409770
                v16 = 0;
                if (v12 != 0) {
                    // 0x409775
                    v16 = *v3;
                }
                // 0x40977e
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
        // 0x40979d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x4097c3
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x4097e0 - 0x4098b6
int64_t function_4097e0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4097ef
    uint64_t v2 = *v1; // 0x4097ef
    int64_t v3 = a1; // 0x4097f3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x409843;
    } else {
        // 0x4097f5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x409843;
        } else {
            // 0x4097fc
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x409811
                int64_t v6; // 0x409808
                while (v5 == 0) {
                    // 0x409808
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x409843
                        goto lab_0x409843;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x409828
                int64_t v8 = v7; // 0x40982f
                int64_t v9 = v5; // 0x40982f
                int64_t v10; // 0x4097e0
                int64_t v11; // 0x409828
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x409820
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x409823
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x409836
                v3 = v9;
                while (v2 > v12) {
                    // 0x409811
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x409808
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x409843
                            goto lab_0x409843;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x409823
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x409820
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x409823
                        v9 = *(int64_t *)v10;
                    }
                    // 0x409831
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x409843;
            } else {
                goto lab_0x40987c;
            }
        }
    }
  lab_0x409843:
    // 0x409843
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x409850
        int64_t v14 = v13; // 0x409857
        int64_t v15 = v2; // 0x409857
        int64_t v16; // 0x409860
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x409860
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x409871
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x409871
        int64_t v18 = v15; // 0x40987a
        int64_t v19 = v17; // 0x40987a
        while (v15 > v17) {
            // 0x409850
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x409860
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x409871
                v15 = *v1;
            }
            // 0x409871
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40987c;
  lab_0x40987c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40987c
    if (v20 == 0) {
        // 0x4098a1
        free(NULL);
        free((int64_t *)a1);
        return &g62;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x409890
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40989f
    while (v21 != 0) {
        // 0x409890
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x4098a1
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g62;
}
// Address range: 0x4098c0 - 0x409aba
int64_t function_4098c0(int64_t a1, uint64_t a2) {
    // 0x4098c0
    int128_t v1; // 0x4098c0
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x4098cb
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x4098c0
        if (a2 < 0) {
            // 0x409a40
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x409a50
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x4098e0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x4098e9
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x409a32
        return 0;
    }
    uint64_t nmemb = function_408d10(a2); // 0x409923
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x409a32
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40995b
    if (*v6 == nmemb) {
        // 0x409a32
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40996d
    int64_t v7 = (int64_t)mem; // 0x40996d
    int64_t v8 = v7; // bp-104, 0x409972
    if (mem == NULL) {
        // 0x409a32
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x4099ca
    int64_t v10 = *v9; // 0x4099ca
    int64_t v11 = function_408fa0(&v8, a1, 0); // 0x4099d3
    int64_t result = v11 & 0xffffffff; // 0x4099d8
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x409994
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x4099f6
        function_408fa0(v13, v12, 1);
        function_408fa0(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x409a80
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x409a32
    return result;
}
// Address range: 0x409ac0 - 0x409d34
int64_t function_409ac0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x409ac0
    int128_t v1; // 0x409ac0
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x409ac0
    int64_t v5 = function_408e00(a1, a2, &v4, 0); // 0x409ae1
    if (v5 != 0) {
        // 0x409aee
        if (a3 != NULL) {
            // 0x409af5
            *a3 = v5;
        }
        // 0x409af9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x409b08
    uint64_t v7 = *v6; // 0x409b08
    int64_t v8; // 0x409ac0
    int64_t v9; // 0x409ac0
    int64_t v10; // 0x409ac0
    int128_t v11; // 0x409ac0
    int128_t v12; // 0x409ac0
    int64_t v13; // 0x409ac0
    if (v7 < 0) {
        // 0x409b90
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x409ba0
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x409ba4
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x409ba9
        int128_t v17 = __asm_addss(v15, v15); // 0x409bad
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x409b2b;
        } else {
            goto lab_0x409bba;
        }
    } else {
        // 0x409b11
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x409b15
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x409b19
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x409b1e
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x409bba;
        } else {
            goto lab_0x409b2b;
        }
    }
  lab_0x409b2b:
    // 0x409b2b
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x409b34
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x409b3c
    int128_t v23 = v11; // 0x409b3c
    if (v13 == 0) {
        goto lab_0x409b42;
    } else {
        goto lab_0x409be1;
    }
  lab_0x409bba:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x409bc7
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x409bca
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x409bd3
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x409b42;
    } else {
        goto lab_0x409be1;
    }
  lab_0x409b42:;
    int64_t * v28 = (int64_t *)v4; // 0x409b47
    if (*v28 == 0) {
        // 0x409c58
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x409c61
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x409b52
    int64_t v31 = *v30; // 0x409b52
    int64_t * v32; // 0x409ac0
    int64_t v33; // 0x409ac0
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x409c7d
        if (mem == NULL) {
            // 0x409af9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x409c7d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x409b67
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x409b7d
    *v37 = *v37 + 1;
    return 1;
  lab_0x409be1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x409be1
    function_408f20(v40);
    int64_t v41 = *(int64_t *)v40; // 0x409bea
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x409bee
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x409bf2
    int128_t v44; // 0x409ac0
    if (v42 < 0) {
        // 0x409cb0
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x409cc0
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x409c00
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x409c09
    int128_t v47; // 0x409ac0
    int64_t v48; // 0x409ac0
    if (v46 < 0) {
        // 0x409c90
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x409c9d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x409ca0
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x409c12
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x409c16
        v48 = v46;
        v47 = v51;
    }
    // 0x409c1b
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x409c2b
        int128_t v53 = v52; // 0x409c34
        if (*(char *)(v41 + 16) == 0) {
            // 0x409cd0
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x409c3a
        __asm_comiss(v53, 0x5f800000);
        // 0x409af9
        return 0xffffffff;
    }
    goto lab_0x409b42;
}
// Address range: 0x409d40 - 0x409d7b
int64_t function_409d40(int64_t a1, int64_t a2) {
    // 0x409d40
    int64_t v1; // bp-16, 0x409d40
    int64_t v2; // 0x409d40
    int32_t v3 = function_409ac0(a1, a2, &v1, v2); // 0x409d52
    if (v3 == -1) {
        // 0x409d60
        return 0;
    }
    // 0x409d57
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x409d80 - 0x409f57
int64_t function_409d80(int64_t a1) {
    // 0x409d80
    int128_t v1; // 0x409d80
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x409d80
    int64_t v5; // 0x409d80
    int64_t result = function_408e00(a1, v5, &v4, 1); // 0x409d95
    if (result == 0) {
        // 0x409db2
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x409da7
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x409db2
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x409dc0
    uint64_t v8 = *v7 - 1; // 0x409dc4
    *v7 = v8;
    int64_t v9; // 0x409d80
    int64_t v10; // 0x409d80
    int64_t v11; // 0x409d80
    int128_t v12; // 0x409d80
    int128_t v13; // 0x409d80
    int64_t v14; // 0x409d80
    if (v8 < 0) {
        // 0x409eb0
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x409ec0
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x409ec4
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x409ec9
        int128_t v18 = __asm_addss(v16, v16); // 0x409ecd
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x409dec;
        } else {
            goto lab_0x409eda;
        }
    } else {
        // 0x409dd2
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x409dd6
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x409dda
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x409ddf
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x409eda;
        } else {
            goto lab_0x409dec;
        }
    }
  lab_0x409dec:
    // 0x409dec
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x409df0
    int64_t v23 = v14; // 0x409df0
    int128_t v24 = v12; // 0x409df0
    int64_t v25 = v10; // 0x409df0
    int128_t v26 = v22; // 0x409df0
    goto lab_0x409df5;
  lab_0x409eda:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x409ee7
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x409eea
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x409df5;
  lab_0x409df5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x409df5
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x409db2
        return result;
    }
    int64_t v29 = a1 + 40; // 0x409dfe
    function_408f20(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x409e07
    int64_t v31 = *(int64_t *)v29; // 0x409e0b
    int128_t v32; // 0x409d80
    if (v30 < 0) {
        // 0x409f20
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x409f30
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x409e18
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x409e21
    int128_t v35; // 0x409d80
    int64_t v36; // 0x409d80
    if (v34 < 0) {
        // 0x409f00
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x409f0d
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x409f10
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x409e2e
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x409e32
        v36 = v34;
        v35 = v39;
    }
    // 0x409e37
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x409db2
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x409e48
    int128_t v41 = v40; // 0x409e51
    if (*(char *)(v31 + 16) == 0) {
        // 0x409e53
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x409e58
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x409f48
    if ((char)function_4098c0(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x409db2
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x409e7a
    if (*v43 != 0) {
        int64_t v44; // 0x409d80
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x409e88
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x409e99
    *v43 = 0;
    // 0x409db2
    return result;
}
// Address range: 0x409f60 - 0x409f7b
int64_t function_409f60(int64_t a1, int64_t a2) {
    // 0x409f60
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x409f6c
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x409f60
    return result;
}
// Address range: 0x409f80 - 0x409f85
int64_t function_409f80(int64_t a1) {
    // 0x409f80
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x409f90 - 0x409fc5
int64_t function_409f90(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x409f90
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x409f94
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x409f9d
    uint32_t v4 = (*v2 + v3) % 4; // 0x409f9f
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x409fa8
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x409fae
    int32_t v7 = *v6; // 0x409fae
    *v2 = v4;
    if (v7 == v4) {
        // 0x409fb8
        *v6 = (v7 + v3) % 4;
    }
    // 0x409fc0
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x409fd0 - 0x40a011
int64_t function_409fd0(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x409fd4
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x409fde
    uint32_t v3 = *v2; // 0x409fde
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x409feb
    int64_t result = (int64_t)*v4; // 0x409feb
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x40a008
        *v1 = 1;
        return result;
    }
    // 0x409ff4
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x40a020 - 0x40a582
int64_t function_40a020(void) {
    char * v1 = nl_langinfo(14); // 0x40a036
    char * v2 = g56; // 0x40a03b
    char * v3; // 0x40a020
    int64_t v4; // 0x40a020
    int64_t v5; // 0x40a020
    int64_t v6; // 0x40a020
    int64_t v7; // 0x40a020
    int32_t size; // 0x40a020
    int32_t size2; // 0x40a020
    int32_t len; // 0x40a0f2
    int64_t v8; // 0x40a0f2
    char * env_val; // 0x40a0dd
    if (v2 == NULL) {
        // 0x40a0d8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40a145;
        } else {
            // 0x40a0ea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40a145;
            } else {
                // 0x40a0ef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40a0dd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40a575
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40a145;
                    } else {
                        // 0x40a4e9
                        size2 = len + 14;
                        goto lab_0x40a10b;
                    }
                } else {
                    goto lab_0x40a10b;
                }
            }
        }
    } else {
        // 0x40a020
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40a05a;
    }
  lab_0x40a38c:;
    // 0x40a38c
    struct _IO_FILE * stream; // 0x40a1cb
    int32_t v10 = __uflow(stream); // 0x40a38f
    int64_t v11; // 0x40a020
    int64_t v12 = v11; // 0x40a399
    int64_t v13; // 0x40a020
    int64_t v14 = v13; // 0x40a399
    int32_t v15 = v10; // 0x40a399
    int64_t v16; // 0x40a020
    int64_t v17 = v16; // 0x40a399
    int64_t v18 = v11; // 0x40a399
    int64_t v19 = v13; // 0x40a399
    int64_t v20 = v16; // 0x40a399
    if (v10 == -1) {
        // break -> 0x40a39f
        goto lab_0x40a39f;
    }
    goto lab_0x40a219;
  lab_0x40a20e:;
    // 0x40a20e
    int64_t v90; // 0x40a020
    int64_t * v32; // 0x40a200
    *v32 = v90 + 1;
    int64_t v89; // 0x40a020
    v12 = v89;
    int64_t v91; // 0x40a020
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40a020
    v17 = v92;
    goto lab_0x40a219;
  lab_0x40a219:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40a020
    int32_t v25; // bp-120, 0x40a020
    int32_t v26; // bp-184, 0x40a020
    int64_t v27; // 0x40a1cb
    int64_t v28; // 0x40a1e8
    int64_t v29; // 0x40a1ed
    int64_t * v30; // 0x40a204
    switch (c) {
        case 32: {
            goto lab_0x40a200;
        }
        case 10: {
            goto lab_0x40a200;
        }
        case 9: {
            goto lab_0x40a200;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40a3f1
            int32_t v33; // 0x40a020
            char v34; // 0x40a020
            int32_t v35; // 0x40a3fe
            if (v31 < *v30) {
                // 0x40a3d0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40a3fb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40a3f1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40a3d0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40a3fb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40a3e0
                v36 = v33;
            }
            // 0x40a4cf
            if (v36 == -1) {
                // break -> 0x40a39f
                break;
            }
            goto lab_0x40a200;
        }
        default: {
            // 0x40a22f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40a39f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40a258
            int64_t v39 = v37 + 4; // 0x40a25a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40a266
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40a268
            while (v41 == 0) {
                // 0x40a258
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40a286
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40a292
            int64_t v45 = v43 + 4; // 0x40a294
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40a2a0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40a2a2
            while (v47 == 0) {
                // 0x40a292
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40a28f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40a2b8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40a2c8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40a2cc
            int64_t v52 = v51 + v48; // 0x40a2d5
            int64_t * mem; // 0x40a020
            int64_t v53; // 0x40a020
            int64_t v54; // 0x40a020
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40a40b
                int64_t v56 = v55 + 3; // 0x40a417
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40a2f1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40a300
            if (mem == NULL) {
                // 0x40a52c
                free((int64_t *)v21);
                function_40a630(v27, v53);
                v24 = (int64_t)&g12;
                goto lab_0x40a1a4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40a318
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40a322
            uint32_t v62 = (int32_t)v59; // 0x40a325
            int64_t v63; // 0x40a020
            if (v62 >= 8) {
                // 0x40a434
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40a44e
                int64_t v66 = v61 - v65; // 0x40a452
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40a45d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40a46e
                    int64_t v70 = v69 & 0xffffffff; // 0x40a46e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40a46b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40a4ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40a337
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40a33b
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
            int64_t v73 = v51 + 1; // 0x40a34b
            int64_t v74 = v60 - 1; // 0x40a34f
            uint32_t v75 = (int32_t)v73; // 0x40a354
            int64_t v76; // 0x40a020
            if (v75 >= 8) {
                // 0x40a482
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40a48c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40a49c
                int64_t v80 = v74 - v79; // 0x40a4a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40a4ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40a4bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40a4b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40a516
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40a51e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40a366
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40a36a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40a563
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40a37e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40a20e;
            } else {
                goto lab_0x40a38c;
            }
        }
    }
  lab_0x40a200:;
    int64_t v93 = v23; // 0x40a020
    int64_t v94 = v22; // 0x40a020
    int64_t v95 = v21; // 0x40a020
    goto lab_0x40a200_2;
  lab_0x40a145:;
    int64_t * mem3 = malloc(size); // 0x40a145
    int64_t v97 = (int64_t)&g12; // 0x40a150
    int64_t v98; // 0x40a020
    int64_t path; // 0x40a020
    if (mem3 == NULL) {
        goto lab_0x40a122;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40a145
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40a166;
    }
  lab_0x40a05a:;
    int64_t str = v1 == NULL ? (int64_t)&g12 : (int64_t)v1; // 0x40a04d
    char v100 = *v3; // 0x40a05a
    int64_t v101; // 0x40a020
    if (v100 == 0) {
        // 0x40a0b4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40a020
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40a020
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40a0a0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40a0a7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40a070
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40a07d
        char v107 = *(char *)v106; // 0x40a082
        v102 = v107;
        if (v107 == 0) {
            // 0x40a0b4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40a08b
    v104 = v103 + 1;
  lab_0x40a0a7:
    // 0x40a0b4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40a122:;
    char * v108 = (char *)v97;
    g56 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40a05a;
  lab_0x40a166:;
    int64_t v109 = v98 + path; // 0x40a166
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40a192
    v24 = (int64_t)&g12;
    if (fd >= 0) {
        // 0x40a1c1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40a4f2
            close(fd);
            v24 = (int64_t)&g12;
        } else {
            // 0x40a1e5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40a200_2:;
                uint64_t v96 = *v32; // 0x40a200
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40a38c;
                } else {
                    goto lab_0x40a20e;
                }
            }
          lab_0x40a39f:
            // 0x40a39f
            function_40a630(v27, v19);
            v24 = (int64_t)&g12;
            if (v18 != 0) {
                // 0x40a3be
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40a1a4;
  lab_0x40a10b:;
    int64_t * mem4 = malloc(size2); // 0x40a10b
    v97 = (int64_t)&g12;
    if (mem4 != NULL) {
        // 0x40a1b1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40a166;
    } else {
        goto lab_0x40a122;
    }
  lab_0x40a1a4:
    // 0x40a1a4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40a122;
}
// Address range: 0x40a590 - 0x40a5da
int64_t function_40a590(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x40a5a2
    return function_40a5e0((int64_t)v1);
}
// Address range: 0x40a5e0 - 0x40a62e
int64_t function_40a5e0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40a5ec
    if (fd >= 3) {
        // 0x40a5f1
        return a1 & 0xffffffff;
    }
    // 0x40a600
    int64_t v1; // 0x40a5e0
    int64_t v2 = function_40a890(a1, v1); // 0x40a600
    int32_t * v3 = __errno_location(); // 0x40a608
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40a630 - 0x40a6ab
int64_t function_40a630(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40a637
    if (fileno(stream) < 0) {
        // 0x40a697
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40a64a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40a67b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40a697
            return fclose(stream);
        }
    }
    // 0x40a64c
    if ((int32_t)function_40a7f0(a1, v1) == 0) {
        // 0x40a697
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40a658
    int32_t v3 = *v2; // 0x40a660
    int64_t result = fclose(stream); // 0x40a66e
    if (v3 != 0) {
        // 0x40a6a0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40a670
    return result;
}
// Address range: 0x40a6b0 - 0x40a7e5
int64_t function_40a6b0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40a6e0
    if (cmd != 1030) {
        // 0x40a790
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40a6ec
    int64_t v2; // 0x40a6b0
    if (g57 < 0) {
        int64_t v3 = function_40a6b0(fd, 0, v1, a4); // 0x40a734
        int64_t v4 = v3 & 0xffffffff; // 0x40a739
        if ((int32_t)v3 < 0) {
            // 0x40a720
            return v4 & 0xffffffff;
        }
        // 0x40a73f
        v2 = v4;
        if (g57 != -1) {
            // 0x40a720
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40a707
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40a716
            g57 = 1;
            // 0x40a720
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40a6b0(fd & 0xffffffff, 0, v1, a4); // 0x40a7c7
        int64_t v7 = v6 & 0xffffffff; // 0x40a7cc
        if ((int32_t)v6 < 0) {
            // 0x40a720
            return v7 & 0xffffffff;
        }
        // 0x40a7d6
        g57 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40a74f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40a75a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40a720
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40a772
    close(fd2);
    // 0x40a720
    return 0xffffffff;
}
// Address range: 0x40a7f0 - 0x40a830
int64_t function_40a7f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40a80a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40a80a
        return fflush(stream);
    }
    // 0x40a818
    function_40a830(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40a830 - 0x40a887
int64_t function_40a830(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40a830
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40a83a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40a86b
    int64_t result = -1; // 0x40a874
    if (v1 != -1) {
        // 0x40a876
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40a882
    return result;
}
// Address range: 0x40a890 - 0x40a89e
int64_t function_40a890(int64_t a1, int64_t a2) {
    // 0x40a890
    int64_t v1; // 0x40a890
    return function_40a6b0(a1, 0, 3, v1);
}
// Address range: 0x40a8a0 - 0x40a8fd
int64_t function_40a8a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a8a0
    return function_401790();
}
// Address range: 0x40a900 - 0x40a901
int64_t function_40a900(void) {
    // 0x40a900
    int64_t result; // 0x40a900
    return result;
}
// Address range: 0x40a910 - 0x40a928
int64_t function_40a910(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a910
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g19);
}
// Address range: 0x40a928 - 0x40a948
int64_t function_40a928(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g15; // 0x40a932
    while (*(int64_t *)v1 != -1) {
        // 0x40a933
        v1 -= 8;
    }
    // 0x40a944
    return result;
}
