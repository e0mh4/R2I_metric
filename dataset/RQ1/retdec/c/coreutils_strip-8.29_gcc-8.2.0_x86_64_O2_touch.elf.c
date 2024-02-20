// Address range: 0x401dc0 - 0x401dc5
int64_t function_401dc0(void) {
    // 0x401dc0
    abort();
    // UNREACHABLE
}
// Address range: 0x401dc5 - 0x401dca
int64_t function_401dc5(void) {
    // 0x401dc5
    abort();
    // UNREACHABLE
}
// Address range: 0x401dca - 0x401dcf
int64_t function_401dca(void) {
    // 0x401dca
    abort();
    // UNREACHABLE
}
// Address range: 0x401dcf - 0x401dd4
int64_t function_401dcf(void) {
    // 0x401dcf
    abort();
    // UNREACHABLE
}
// Address range: 0x401dd4 - 0x401dd9
int64_t function_401dd4(void) {
    // 0x401dd4
    abort();
    // UNREACHABLE
}
// Address range: 0x401dd9 - 0x401dde
int64_t function_401dd9(void) {
    // 0x401dd9
    abort();
    // UNREACHABLE
}
// Address range: 0x401dde - 0x401de3
int64_t function_401dde(void) {
    // 0x401dde
    abort();
    // UNREACHABLE
}
// Address range: 0x401df0 - 0x4026c0
int64_t function_401df0(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401dfe
    int64_t v2; // bp-264, 0x401df0
    int64_t v3 = &v2; // 0x401e06
    function_408430(a2);
    setlocale(LC_ALL, (char *)&g25);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v4; // 0x401df0
    function_410ee0(0x402f30, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v4);
    g57 = 0;
    g59 = 0;
    g58 = 0;
    int64_t v5 = 0; // 0x401e5f
    int64_t v6 = 0; // 0x401e5f
    int64_t v7; // 0x401df0
    int64_t v8; // 0x401df0
    int64_t v9; // 0x401df0
    int64_t v10; // 0x401df0
    int64_t v11; // 0x401e73
    while (true) {
      lab_0x401e60_2:
        // 0x401e60
        v8 = v6;
        v7 = v5;
        int64_t v12 = v10;
        v11 = function_40b5f0(v1, a2, "acd:fhmr:t:", &g4, 0, v12);
        int32_t v13 = v11;
        v9 = v12;
        v5 = v7;
        v6 = v8;
        switch (v13) {
            case -1: {
                goto lab_0x40202a;
            }
            case 102: {
                goto lab_0x401e60;
            }
            default: {
                if (v13 > 102) {
                    if (v13 == 114) {
                        char * v14 = g74;
                        g57 = 1;
                        *(int64_t *)&g50 = (int64_t)v14;
                        v9 = v12;
                        v5 = v7;
                        v6 = v8;
                    } else {
                        if (v13 > 114) {
                            if (v13 != 116) {
                                if (v13 != 128) {
                                    // 0x402576
                                    function_4027e0(1);
                                    // UNREACHABLE
                                }
                                int64_t v15 = g33; // 0x401fcc
                                char * v16 = g74; // 0x401fd3
                                int64_t v17 = function_402e50("--time", (int64_t)v16, g3, (int64_t *)&g2, 4, v15); // 0x401fdf
                                int32_t v18 = *(int32_t *)(4 * v17 + (int64_t)&g2); // 0x401fe4
                                int32_t v19 = g59; // 0x401feb
                                g59 = v19 | v18;
                                v9 = v15;
                                v5 = v7;
                                v6 = v8;
                            } else {
                                char * v20 = g74; // 0x401f5d
                                int64_t v21 = function_408100((int64_t *)&g51, (int64_t)v20, 6); // 0x401f6e
                                if ((char)v21 == 0) {
                                    char * v22 = g74; // 0x402682
                                    function_40a050((int64_t)v22);
                                    error(1, (int32_t)"invalid date format %s" ^ (int32_t)"invalid date format %s", dcgettext(NULL, "invalid date format %s", 5));
                                    return &g81;
                                }
                                // 0x401f7e
                                g52 = 0;
                                int128_t v23 = *(int128_t *)&g51; // 0x401f89
                                int64_t v24 = __asm_movaps(__asm_movdqa(v23)); // 0x401f91
                                *(int128_t *)&g53 = (int128_t)v24;
                                v9 = v12;
                                v5 = v21 & 0xffffffff;
                                v6 = v8;
                            }
                        } else {
                            if (v13 != 104) {
                                if (v13 != 109) {
                                    // 0x402576
                                    function_4027e0(1);
                                    // UNREACHABLE
                                }
                                int32_t v25 = g59; // 0x401ed9
                                g59 = v25 | 2;
                                v9 = v12;
                                v5 = v7;
                                v6 = v8;
                            } else {
                                // 0x401e9e
                                g56 = 1;
                                v9 = v12;
                                v5 = v7;
                                v6 = v8;
                            }
                        }
                    }
                } else {
                    if (v13 == 97) {
                        // 0x402000
                        g59 |= 1;
                        v9 = v12;
                        v5 = v7;
                        v6 = v8;
                    } else {
                        if (v13 <= 97) {
                            if (v13 == -131) {
                                // 0x401f0c
                                function_40a4d0((int64_t)g45, "touch", "GNU coreutils", (int64_t)g32, "Paul Rubin", "Arnold Robbins");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v13 == -130) {
                                // 0x401fa9
                                function_4027e0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x402576;
                        }
                        if (v13 != 99) {
                            if (v13 != 100) {
                              lab_0x402576:
                                // 0x402576
                                function_4027e0(1);
                                // UNREACHABLE
                            }
                            // 0x401ef1
                            v9 = v12;
                            v5 = v7;
                            v6 = (int64_t)g74;
                        } else {
                            // 0x401ec0
                            g58 = 1;
                            v9 = v12;
                            v5 = v7;
                            v6 = v8;
                        }
                    }
                }
                goto lab_0x401e60;
            }
        }
    }
  lab_0x40202a:
    // 0x40202a
    if (g59 == 0) {
        // 0x402033
        g59 = 3;
    }
    int64_t v26 = v11 & 0xffffffff; // 0x401e78
    int64_t v27; // 0x401df0
    int64_t v28; // 0x401df0
    int64_t v29; // 0x401df0
    int64_t v30; // 0x401df0
    if ((char)v7 == 0) {
        int64_t v31; // bp-200, 0x401df0
        if (g57 != 0) {
            // 0x402427
            int32_t v32; // 0x401df0
            if (g56 != 0) {
                // 0x4024bf
                v32 = __lxstat(1, g50, (struct stat *)&v31);
            } else {
                // 0x402441
                v32 = __xstat(1, g50, (struct stat *)&v31);
            }
            // 0x40244b
            if (v32 != 0) {
                int64_t v33 = function_409e00(4, (int64_t)g50); // 0x40258c
                char * format = dcgettext(NULL, "failed to get attributes of %s", 5); // 0x4025a0
                error(1, *__errno_location(), format);
                v30 = (int64_t)format;
                v28 = v33;
                goto lab_0x4025c1;
            } else {
                // 0x402453
                g51 = (int32_t *)v4;
                v29 = v26;
                v27 = a2;
                if (v8 != 0) {
                    // 0x402498
                    if (g59 % 2 != 0) {
                        // 0x4024d7
                        function_4027a0((int64_t *)&g51, v8);
                    }
                    // 0x4024a2
                    v29 = v26;
                    v27 = a2;
                    if ((g59 & 2) != 0) {
                        // 0x4024aa
                        function_4027a0(&g53, v8);
                        v29 = v26;
                        v27 = a2;
                    }
                }
                goto lab_0x40205e;
            }
        } else {
            if (v8 == 0) {
                goto lab_0x4023ed;
            } else {
                // 0x402351
                int64_t v34; // bp-232, 0x401df0
                function_4030d0(&v34);
                function_4027a0((int64_t *)&g51, v8);
                int64_t v35 = __asm_movaps(__asm_movdqa(*(int128_t *)&g51)); // 0x40237c
                *(int128_t *)&g53 = (int128_t)v35;
                v29 = v26;
                v27 = a2;
                if (g59 != 3) {
                    goto lab_0x40205e;
                } else {
                    // 0x402389
                    v29 = v26;
                    v27 = a2;
                    if (v34 != (int64_t)g51) {
                        goto lab_0x40205e;
                    } else {
                        // 0x40239b
                        if (g52 != v4) {
                            goto lab_0x40205e;
                        } else {
                            // 0x4023ad
                            function_4027a0(&v31, v8);
                            v29 = v26;
                            v27 = a2;
                            if (true == v31 == (v34 ^ 1)) {
                                goto lab_0x4023ed;
                            } else {
                                goto lab_0x40205e;
                            }
                        }
                    }
                }
            }
        }
    } else {
        // 0x40204d
        v29 = v26;
        v27 = a2;
        if (v8 == 0 != (g57 == 0)) {
            // 0x402561
            error(0, 0, dcgettext(NULL, (char *)(int64_t)"cannot specify times from more than one source", 5));
            // 0x402576
            function_4027e0(1);
            // UNREACHABLE
        }
        goto lab_0x40205e;
    }
  lab_0x40213b:;
    // 0x40213b
    int64_t v36; // 0x401df0
    int64_t v37 = v36;
    int64_t v38; // 0x401df0
    int64_t v39 = v38;
    int32_t v40 = g59; // 0x40213b
    switch (v40) {
        case 3: {
            goto lab_0x402163;
        }
        case 2: {
            // 0x402264
            g52 = 0x3ffffffe;
            goto lab_0x402163;
        }
        default: {
            if (v40 != 1) {
                // break -> 0x40265a
                break;
            }
            // 0x402158
            g54 = 0x3ffffffe;
            goto lab_0x402163;
        }
    }
  lab_0x402163:;
    int64_t v41 = g55 != 0 ? 0 : (int64_t)&g51; // 0x402174
    char v42 = g56 & (char)(v39 == 0xffffffff); // 0x402180
    int32_t err_num; // 0x401df0
    int64_t v43; // 0x401df0
    int64_t v44; // 0x401df0
    int32_t * v45; // 0x401df0
    char * v46; // 0x401df0
    int32_t * v47; // 0x401df0
    char * v48; // 0x401df0
    int64_t v49; // 0x402104
    if (v42 != 0) {
        // 0x402274
        v44 = function_403040(0xffffffff, 0xffffff9c, v49, v41, 256) & 0xffffffff;
        goto lab_0x4021de;
    } else {
        if (v39 == 1) {
            // 0x4021f1
            v43 = 1;
            if ((int32_t)function_403040(1, 0xffffff9c, 0, v41, 0) == 0) {
                goto lab_0x4020d7;
            } else {
                // 0x402209
                if (*__errno_location() != 9) {
                    goto lab_0x40207a;
                } else {
                    // 0x402217
                    v43 = 1;
                    if (g58 != 0) {
                        goto lab_0x4020d7;
                    } else {
                        int32_t v50 = v37;
                        err_num = v50;
                        if (v50 == 0) {
                            goto lab_0x40209a;
                        } else {
                            goto lab_0x402229;
                        }
                    }
                }
            }
        } else {
            // 0x402193
            *v46 = v42;
            *v45 = (int32_t)v39;
            int64_t v51 = function_403040(v39, 0xffffff9c, v49, v41, 0); // 0x4021ab
            v44 = v51 & 0xffffffff;
            if (*v45 != 0) {
                goto lab_0x4021de;
            } else {
                // 0x4021c2
                *v47 = (int32_t)v51;
                *v48 = *v46;
                int32_t v52 = close(0); // 0x4021cd
                v44 = (int64_t)*v47;
                if (v52 != 0) {
                    // 0x4022fb
                    function_409e00(4, v49);
                    error(0, *__errno_location(), dcgettext(NULL, "failed to close %s", 5));
                    v43 = (int64_t)*v48;
                    goto lab_0x4020d7;
                } else {
                    goto lab_0x4021de;
                }
            }
        }
    }
  lab_0x4021de:
    // 0x4021de
    v43 = 1;
    if (v44 != 0) {
        goto lab_0x40207a;
    } else {
        goto lab_0x4020d7;
    }
  lab_0x40207a:;
    int32_t v53 = v37;
    err_num = v53;
    if (v53 != 0) {
        goto lab_0x402229;
    } else {
        int32_t * v54 = __errno_location(); // 0x402083
        if (g58 == 0) {
            goto lab_0x40209a;
        } else {
            // 0x402091
            if (*v54 == 2) {
                goto lab_0x4020d7;
            } else {
                goto lab_0x40209a;
            }
        }
    }
  lab_0x4020d7:;
    // 0x4020d7
    int64_t v55; // 0x401df0
    int64_t v56 = v43 & v55;
    g42 = &g43;
    int64_t v57 = &g43; // 0x4020ec
    int64_t v58 = v56; // 0x4020ec
    int64_t result; // 0x401df0
    if (v1 <= (int64_t)&g43) {
        // 0x402291
        result = v56 ^ 1;
        return result;
    }
    goto lab_0x4020f2;
  lab_0x402229:
    // 0x402229
    function_409e00(4, v49);
    error(0, err_num, dcgettext(NULL, "cannot touch %s", 5));
    v43 = 0;
    goto lab_0x4020d7;
  lab_0x40209a:
    // 0x40209a
    function_409e00(4, v49);
    error(0, *__errno_location(), dcgettext(NULL, "setting times of %s", 5));
    v43 = 0;
    goto lab_0x4020d7;
  lab_0x401e60:
    // 0x401e60
    v10 = v9;
    goto lab_0x401e60_2;
  lab_0x40205e:;
    uint32_t v75 = *(int32_t *)0x61831c; // 0x40205e
    if (v75 == (int32_t)a1) {
        // 0x402561
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing file operand", 5));
        // 0x402576
        function_4027e0(1);
        // UNREACHABLE
    }
    int64_t v76 = v75; // 0x40205e
    result = 0;
    if (v1 <= v76) {
        // 0x402291
        return result;
    }
    // 0x4020f2
    bool v77; // 0x401df0
    int64_t v67 = v77 ? -1 : 1; // 0x40210c
    int64_t v78 = v3 + 12;
    v45 = (int32_t *)v78;
    int64_t v74 = v29 & 0xffffffff;
    int64_t v79 = v3 + 16;
    v46 = (char *)v79;
    v47 = (int32_t *)v79;
    v48 = (char *)v78;
    v57 = v76;
    v58 = 1;
    while (true) {
      lab_0x4020f2:
        // 0x4020f2
        v55 = v58;
        v49 = *(int64_t *)((0x100000000 * v57 >> 29) + v27);
        int64_t v59 = 2; // 0x40210c
        int64_t v60 = v49;
        int64_t v61 = (int64_t)&g5;
        unsigned char v62 = *(char *)v60; // 0x40210c
        char v63 = *(char *)v61; // 0x40210c
        char v64 = v63; // 0x40210c
        bool v65 = false; // 0x40210c
        while (v62 == v63) {
            v59--;
            int64_t v66 = v61 + v67; // 0x40210c
            int64_t v68 = v60 + v67; // 0x40210c
            v64 = v62;
            v65 = true;
            if (v59 == 0) {
                // break -> 
                break;
            }
            v60 = v68;
            v61 = v66;
            v62 = *(char *)v60;
            v63 = *(char *)v61;
            v64 = v63;
            v65 = false;
        }
        unsigned char v69 = v64;
        int64_t v70 = (int64_t)!((v62 < v69 | v65)) - (int64_t)(v62 < v69); // 0x402112
        v38 = 1;
        v36 = v70;
        if ((int32_t)v70 == 0) {
            goto lab_0x40213b;
        } else {
            // 0x40211f
            if ((g56 || g58) == 0) {
                int64_t v71 = function_402fd0(0, v49, 2369, 438); // 0x4022ba
                int32_t v72 = v71; // 0x4022c5
                v38 = v71 & 0xffffffff;
                v36 = 0;
                if (v72 != -1) {
                    goto lab_0x40213b;
                } else {
                    // 0x4022ce
                    *v45 = v72;
                    uint32_t v73 = *__errno_location(); // 0x4022d7
                    if (v73 < 23) {
                        // 0x402135
                        v38 = v74;
                        v36 = 0;
                        goto lab_0x40213b;
                    } else {
                        // 0x4022e7
                        v38 = (int64_t)*v45;
                        v36 = v73;
                        if (v73 != 1) {
                            goto lab_0x40213b;
                        } else {
                            // 0x402135
                            v38 = v74;
                            v36 = 0;
                            goto lab_0x40213b;
                        }
                    }
                }
            } else {
                // 0x402135
                v38 = v74;
                v36 = 0;
                goto lab_0x40213b;
            }
        }
    }
    // 0x40265a
    __assert_fail("change_times == CH_ATIME", "src/touch.c", 153, "touch");
    int64_t v80 = (int64_t)"cannot specify times from more than one source"; // 0x40266e
    int64_t v81 = v80;
    error(0, 0, dcgettext(NULL, (char *)v81, 5));
    // 0x402576
    function_4027e0(1);
    // UNREACHABLE
  lab_0x4023ed:;
    // 0x4023ed
    int64_t v82; // 0x401df0
    int64_t v83; // 0x401df0
    if ((int32_t)a1 - g42 > 1) {
        // 0x4024ef
        if ((int32_t)function_4083b0() > 0x30daf) {
            goto lab_0x4023ff;
        } else {
            int64_t v84 = *(int64_t *)(8 * (int64_t)g42 + a2); // 0x402510
            if ((char)function_408100((int64_t *)&g51, v84, 9) == 0) {
                goto lab_0x4023ff;
            } else {
                // 0x402522
                g52 = 0;
                int64_t v85 = __asm_movaps(__asm_movdqa(*(int128_t *)&g51)); // 0x40253a
                *(int128_t *)&g53 = (int128_t)v85;
                v83 = v26;
                v82 = a2;
                v30 = v26;
                v28 = a2;
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    goto lab_0x4025c1;
                } else {
                    goto lab_0x40254b;
                }
            }
        }
    } else {
        goto lab_0x4023ff;
    }
  lab_0x4025c1:;
    int64_t v86 = v28;
    int64_t v87 = v30;
    struct tm * time_info = localtime((int32_t *)&g51); // 0x4025c6
    v83 = v87;
    v82 = v86;
    if (time_info != NULL) {
        // 0x4025d4
        error(0, (int32_t)"warning: 'touch %s' is obsolete; use 'touch -t %04ld%02d%02d%02d%02d.%02d'" ^ (int32_t)"warning: 'touch %s' is obsolete; use 'touch -t %04ld%02d%02d%02d%02d.%02d'", dcgettext(NULL, "warning: 'touch %s' is obsolete; use 'touch -t %04ld%02d%02d%02d%02d.%02d'", 5));
        v83 = v87;
        v82 = v86;
    }
    goto lab_0x40254b;
  lab_0x4023ff:
    // 0x4023ff
    if (g59 == 3) {
        // 0x4024cb
        g55 = 1;
        v29 = v26;
        v27 = a2;
    } else {
        // 0x40240c
        g52 = 0x3fffffff;
        g54 = 0x3fffffff;
        v29 = v26;
        v27 = a2;
    }
    goto lab_0x40205e;
  lab_0x40254b:
    // 0x40254b
    g42 = &g43;
    v29 = v83;
    v27 = v82;
    goto lab_0x40205e;
}
// Address range: 0x4026c0 - 0x4026eb
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4026c0
    int64_t v1; // 0x4026c0
    __libc_start_main(0x401df0, (int32_t)a4, (char **)&v1, (void (*)())0x410e70, (void (*)())0x410ed0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4026eb - 0x40270a
int64_t function_4026eb(void) {
    // 0x4026eb
    return &g44;
}
// Address range: 0x40270a - 0x402741
int64_t function_40270a(void) {
    // 0x40270a
    return 0;
}
// Address range: 0x402741 - 0x402798
int64_t function_402741(void) {
    // 0x402741
    if (g48 != 0) {
        // 0x402797
        int64_t result; // 0x402741
        return result;
    }
    int64_t v1 = g49; // 0x402774
    int64_t result2; // 0x402786
    if (g49 >= ((int64_t)&g29 - (int64_t)&g28 >> 3) - 1) {
        // 0x402786
        result2 = function_4026eb();
        g48 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g29 - (int64_t)&g28 >> 3) - 1) {
        // 0x402776
        v1++;
    }
    // 0x40276a
    g49 = v1;
    // 0x402786
    result2 = function_4026eb();
    g48 = 1;
    return result2;
}
// Address range: 0x402798 - 0x40279d
int64_t function_402798(void) {
    // 0x402798
    return function_40270a();
}
// Address range: 0x4027a0 - 0x4027e0
int64_t function_4027a0(int64_t * a1, int64_t a2) {
    // 0x4027a0
    int64_t v1; // 0x4027a0
    int64_t result = function_408000((int64_t)a1, a2, v1, v1); // 0x4027a4
    if ((char)result != 0) {
        // 0x4027ad
        return result;
    }
    // 0x4027af
    function_40a050(a2);
    error(1, (int32_t)"invalid date format %s" ^ (int32_t)"invalid date format %s", dcgettext(NULL, "invalid date format %s", 5));
    return &g81;
}
// Address range: 0x4027e0 - 0x402b7d
int64_t function_4027e0(int32_t status) {
    // 0x4027e0
    if (status != 0) {
        // 0x4027fa
        __fprintf_chk(g47, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40281f
        exit(status);
        // UNREACHABLE
    }
    // 0x402826
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Update the access and modification times of each FILE to the current time.\n\nA FILE argument that does not exist is created empty, unless -c or -h\nis supplied.\n\nA FILE argument string of - is handled specially and causes touch to\nchange the times of the file associated with standard output.\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "  -a                     change only the access time\n  -c, --no-create        do not create any files\n  -d, --date=STRING      parse STRING and use it instead of current time\n  -f                     (ignored)\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "  -h, --no-dereference   affect each symbolic link instead of any referenced\n                         file (useful only on systems that can change the\n                         timestamps of a symlink)\n  -m                     change only the modification time\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "  -r, --reference=FILE   use this file's times instead of current time\n  -t STAMP               use [[CC]YY]MMDDhhmm[.ss] instead of current time\n      --time=WORD        change the specified time:\n                           WORD is access, atime, or use: equivalent to -a\n                           WORD is modify or mtime: equivalent to -m\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g45);
    fputs_unlocked(dcgettext(NULL, "\nNote that the -d and -t options accept different time-date formats.\n", 5), g45);
    int64_t v1 = &g1; // bp-136, 0x40295c
    bool v2; // 0x4027e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4029e0
    int64_t v6 = *(int64_t *)v5; // 0x4029e4
    int64_t v7 = 6; // 0x4029ea
    while (v6 != 0) {
        int64_t v8 = (int64_t)"touch";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4029f6
        char v11 = *(char *)v9; // 0x4029f6
        char v12 = v11; // 0x4029f6
        bool v13 = false; // 0x4029f6
        while (v10 == v11) {
            // 0x4029ec
            v7--;
            int64_t v14 = v9 + v3; // 0x4029f6
            int64_t v15 = v8 + v3; // 0x4029f6
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
            // break -> 0x402a02
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402a02
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402b14;
        } else {
            // 0x402afe
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402b53
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402a64;
            } else {
                goto lab_0x402b14;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402a64;
        } else {
            // 0x402a4a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402b53
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402a64;
            } else {
                goto lab_0x402a64;
            }
        }
    }
  lab_0x402b14:
    // 0x402b14
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402aa4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40281f
    exit(status);
    // UNREACHABLE
  lab_0x402a64:
    // 0x402a64
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402aa4
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40281f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402b80 - 0x402b8a
int64_t function_402b80(void) {
    // 0x402b80
    return function_4027e0(1);
}
// Address range: 0x402b90 - 0x402ca6
int64_t function_402b90(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x402bb1
    int32_t len = strlen(str); // 0x402bb1
    if (a2 == 0) {
        // 0x402c7d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x402c17
    int64_t v4 = a3; // 0x402b90
    int64_t v5 = a2; // 0x402c1e
    int64_t str4; // 0x402b90
    int64_t v6; // 0x402b90
    int32_t v7; // 0x402b90
    int32_t v8; // 0x402b90
    int32_t v9; // 0x402b90
    int64_t v10; // 0x402b90
    int64_t result; // 0x402b90
    int32_t v11; // 0x402c13
    char * str2; // 0x402c32
    while (true) {
        // 0x402c27
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x402c3b
            result = v6;
            if (len == strlen(str2)) {
                // 0x402c7d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x402c4f
                break;
            }
            // 0x402be0
            v7 = 1;
            if (a3 != 0) {
                // 0x402bee
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x402c17
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
    int64_t v12 = v6 + 1; // 0x402c53
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x402c5a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x402c27
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x402c27
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x402c3b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x402c7d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x402c4f
                    break;
                }
                // 0x402be0
                v7 = 1;
                if (a3 != 0) {
                    // 0x402bee
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x402c17
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
        // 0x402c4f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x402c68:
    // 0x402c7d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x402cb0 - 0x402d21
int64_t function_402cb0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x402cb0
    if (a3 == -1) {
        // 0x402d10
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x402cc5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x402cd4
    function_40a030(1, a1);
    function_409d20(0, 8, a2);
    error(0, 0, format);
    return &g81;
}
// Address range: 0x402d30 - 0x402e48
int64_t function_402d30(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x402d5d
    fputs_unlocked(v1, g47);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x402dd0
        int64_t v5; // 0x402dd7
        int64_t v6; // 0x402df7
        while (v3 != 0) {
            // 0x402dbb
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x402d80
                break;
            }
            // 0x402dcd
            v4 = v3 + 1;
            v5 = function_40a050(v2);
            __fprintf_chk(g47, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x402e00
                goto lab_0x402e00;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x402d83
        int64_t v8 = function_40a050(v2); // 0x402d8d
        __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x402dad
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x402dbb
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x402d80
                    break;
                }
                // 0x402dcd
                v4 = v3 + 1;
                v5 = function_40a050(v2);
                __fprintf_chk(g47, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x402e00
                    goto lab_0x402e00;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x402d80
            v7 = v3 + 1;
            v8 = function_40a050(v2);
            __fprintf_chk(g47, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x402e00:;
    int64_t v10 = (int64_t)g47; // 0x402e00
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x402e07
    uint64_t result = *v11; // 0x402e07
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x402e30
        return __overflow(g47, 10);
    }
    // 0x402e11
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x402e50 - 0x402ec0
int64_t function_402e50(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_402b90(a2, v2, v1, a5); // 0x402e7c
    int64_t result = v3; // 0x402e84
    if (v3 < 0) {
        // 0x402e98
        function_402cb0((int64_t)a1, a2, v3);
        function_402d30(v2, v1, a5);
        result = -1;
    }
    // 0x402e86
    return result;
}
// Address range: 0x402ec0 - 0x402f0d
int64_t function_402ec0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x402ec0
    if (result == 0) {
        // 0x402f01
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x402ef8
    int32_t n = a4; // 0x402ef8
    int64_t v1 = result; // 0x402eff
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x402f01
        return result;
    }
    int64_t str3 = str2; // 0x402eff
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x402ee0
    int64_t result2 = 0; // 0x402eed
    while (v2 != 0) {
        // 0x402eef
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x402f01
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x402f01
    return result2;
}
// Address range: 0x402f10 - 0x402f18
int64_t function_402f10(int64_t a1) {
    // 0x402f10
    g61 = a1;
    int64_t result; // 0x402f10
    return result;
}
// Address range: 0x402f20 - 0x402f28
int64_t function_402f20(int64_t a1) {
    // 0x402f20
    g60 = a1;
    int64_t result; // 0x402f20
    return result;
}
// Address range: 0x402f30 - 0x402fce
int64_t function_402f30(void) {
    // 0x402f30
    int32_t * err_num; // 0x402f46
    if ((int32_t)function_40c430((int64_t)g45) == 0) {
        goto lab_0x402f5c;
    } else {
        // 0x402f46
        err_num = __errno_location();
        if (g60 == 0) {
            goto lab_0x402f73;
        } else {
            // 0x402f57
            if (*err_num != 32) {
                goto lab_0x402f73;
            } else {
                goto lab_0x402f5c;
            }
        }
    }
  lab_0x402f5c:;
    int64_t result = function_40c430((int64_t)g47); // 0x402f63
    if ((int32_t)result == 0) {
        // 0x402f6c
        return result;
    }
    // 0x402fae
    _exit(g34);
    // UNREACHABLE
  lab_0x402f73:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402f7f
    if (g61 == 0) {
        // 0x402fb9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402f93
        error(0, *err_num, "%s: %s", (char *)function_409ea0((int64_t)g61), v1);
    }
    // 0x402fae
    _exit(g34);
    // UNREACHABLE
}
// Address range: 0x402fd0 - 0x40303a
int64_t function_402fd0(int32_t fd2, int64_t path, int64_t oflag, int64_t a4) {
    int32_t fd = open((char *)path, (int32_t)oflag); // 0x402fe5
    if (fd != fd2 != fd >= 0) {
        // 0x402ff4
        return fd;
    }
    uint32_t result = dup2(fd, fd2); // 0x40300c
    int32_t * v1 = __errno_location(); // 0x403014
    close(fd);
    return result;
}
// Address range: 0x403040 - 0x4030cb
int64_t function_403040(int64_t a1, int64_t fd2, int64_t path, int64_t a4, int32_t flag) {
    struct timespec v1; // 0x40306b
    struct timespec times2[2]; // 0x403040
    struct timespec v2[2]; // 0x40306b
    struct timespec v3; // 0x403040
    struct timespec times[2]; // 0x403040
    int32_t fd = a1; // 0x403056
    int32_t result; // 0x403040
    if (fd >= 0) {
        // 0x403080
        v3 = (struct {int64_t e0; int32_t e1;}){
            .e0 = 0,
            .e1 = 0
        };
        v3.e0 = a4;
        times[0] = v3;
        int32_t v4 = futimens(fd, times); // 0x403083
        result = v4;
        if (path == 0 || v4 != -1) {
            goto lab_0x403070;
        } else {
            int32_t v5 = *__errno_location(); // 0x403097
            times2 = times;
            if (v5 != 38) {
                // 0x403075
                return 0xffffffff;
            }
            goto lab_0x40305f;
        }
    } else {
        if (path == 0) {
            // 0x4030b0
            *__errno_location() = 9;
            return 0xffffffff;
        }
        // 0x40305a
        v1 = (struct {int64_t e0; int32_t e1;}){
            .e0 = 0,
            .e1 = 0
        };
        v1.e0 = a4;
        v2[0] = v1;
        times2 = v2;
        goto lab_0x40305f;
    }
  lab_0x403070:
    // 0x403070
    if (result == 1) {
        // 0x4030b0
        *__errno_location() = 9;
        return 0xffffffff;
    }
    // 0x403075
    return result;
  lab_0x40305f:
    // 0x40305f
    result = utimensat((int32_t)fd2, (char *)path, times2, flag);
    goto lab_0x403070;
}
// Address range: 0x4030d0 - 0x40310a
int64_t function_4030d0(int64_t * tp) {
    int64_t result = 0; // 0x4030e4
    if (clock_gettime(0, (struct timespec *)tp) != 0) {
        // 0x4030e6
        int64_t tp2; // bp-24, 0x4030d0
        gettimeofday((struct timeval *)&tp2, NULL);
        *tp = tp2;
        int128_t v1; // 0x4030d0
        result = 1000 * (int64_t)v1;
        *(int64_t *)((int64_t)tp + 8) = result;
    }
    // 0x403104
    return result;
}
// Address range: 0x403110 - 0x40328e
int64_t function_403110(int64_t a1, int64_t a2, uint64_t a3, uint64_t result) {
    int64_t * v1 = (int64_t *)(a1 + 168); // 0x403110
    int64_t result3 = *v1; // 0x403110
    if (result3 == 0) {
        goto lab_0x403168;
    } else {
        int64_t * v2 = (int64_t *)(a1 + 48); // 0x403126
        if (*v2 != 0) {
            goto lab_0x403168;
        } else {
            // 0x40312d
            if (*(char *)(a1 + 161) != 0) {
                goto lab_0x403168;
            } else {
                int64_t * v3 = (int64_t *)(a1 + 200); // 0x403136
                if (result < 3 != (*v3 == 0)) {
                    int128_t v4 = __asm_movdqu((int128_t)a2); // 0x40314a
                    *(char *)(a1 + 216) = 1;
                    __asm_movups(*(int128_t *)(a1 + 32), v4);
                    *v2 = result;
                    return result;
                }
                // 0x403270
                *v3 = 1;
                goto lab_0x403280;
            }
        }
    }
  lab_0x403168:
    if (result >= 5) {
        // 0x403172
        *v1 = result3 + 1;
        *(int64_t *)(a1 + 48) = result - 4;
        *(int64_t *)(a1 + 64) = (a3 / 0x8000000000000000 & -100) + a3;
        *(int64_t *)(a1 + 56) = a3 / 0x8000000000000000;
        *(int64_t *)(a1 + 40) = a3 / 0x8000000000000000;
        return 0x346dc5d63886594b * a3;
    }
    int64_t * v5 = (int64_t *)(a1 + 200); // 0x403208
    *v5 = *v5 + 1;
    if (result >= 3) {
        // 0x403216
        *(int64_t *)(a1 + 72) = a3 / 0x8000000000000000;
        int64_t result2 = a3 / 0x8000000000000000 & 100; // 0x403243
        *(int64_t *)(a1 + 80) = a3 - result2;
        // 0x40324e
        *(int64_t *)(a1 + 88) = 0;
        *(int64_t *)(a1 + 96) = 0;
        *(int32_t *)(a1 + 28) = 2;
        return result2;
    }
    goto lab_0x403280;
  lab_0x403280:
    // 0x403280
    *(int64_t *)(a1 + 72) = a3;
    *(int64_t *)(a1 + 80) = 0;
    // 0x40324e
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 96) = 0;
    *(int32_t *)(a1 + 28) = 2;
    return result3;
}
// Address range: 0x403290 - 0x403389
int64_t function_403290(int32_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int32_t v1 = a1 / 797; // 0x4032cd
    int32_t v2 = __sprintf_chk((char *)a2, 1, -1, "%c%02d", 43, (int64_t)(v1 < 0 ? -v1 : v1)); // 0x4032e5
    int32_t v3 = -3600 * v1 + a1; // 0x4032ea
    if (v3 == 0) {
        // 0x403350
        return result;
    }
    int64_t v4 = (int64_t)v2 + result; // 0x4032fb
    *(char *)v4 = 58;
    *(char *)(v4 + 1) = 48;
    uint32_t v5 = (v3 < 0 ? -v3 : v3) % 60;
    if (v5 != 0) {
        // 0x403360
        *(char *)(v4 + 3) = 58;
        char v6 = v5 / 10;
        *(char *)(v4 + 4) = v6 | 48;
        *(char *)(v4 + 5) = (char)v5 + 48 + -10 * v6;
        *(char *)(v4 + 6) = 0;
    } else {
        // 0x40334d
        *(char *)(v4 + 3) = 0;
    }
    // 0x403350
    return result;
}
// Address range: 0x403390 - 0x4033fe
int64_t function_403390(int32_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int32_t v1 = a1 + 1900; // 0x4033d2
    char * v2 = v1 < 0 == ((v1 ^ a1) & (a1 ^ -0x80000000)) < 0 ? (char *)((int64_t)"-%02d%02d" + 1) : "-%02d%02d"; // 0x4033f4
    __sprintf_chk((char *)a2, 1, -1, v2);
    return (int64_t)a2;
}
// Address range: 0x403400 - 0x4034be
int64_t function_403400(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403400
    int64_t v1; // 0x403400
    if ((char)v1 != 0) {
        // 0x403428
        int128_t v2; // 0x403400
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
        __asm_movaps(v2);
    }
    // 0x40345f
    fwrite((int64_t *)"date: ", 1, 6, g47);
    int64_t v3 = 8; // bp-208, 0x40349b
    return function_40c370((int64_t)g47, a1, &v3);
}
// Address range: 0x4034c0 - 0x40352b
int64_t function_4034c0(int64_t a1, int32_t * a2, int64_t * a3, int64_t a4) {
    int64_t v1 = a4; // bp-80, 0x4034c8
    int64_t v2 = (int64_t)a3; // 0x4034d1
    if (a4 == -1) {
        // 0x403510
        int64_t v3; // bp-72, 0x4034c0
        v2 = function_40c180(a1, &v1, &v3);
        if (v2 == 0) {
            // 0x403502
            return 0;
        }
    }
    int64_t v4 = (int64_t)a2;
    int32_t v5 = *(int32_t *)(v4 + 4); // 0x4034d5
    int32_t v6 = *(int32_t *)v2; // 0x4034d8
    int32_t v7 = *(int32_t *)(v2 + 4); // 0x4034da
    int32_t v8 = *(int32_t *)(v4 + 8); // 0x4034df
    int32_t v9 = *(int32_t *)(v2 + 8); // 0x4034e2
    int32_t v10 = *(int32_t *)(v4 + 12); // 0x4034e7
    int32_t v11 = *(int32_t *)(v2 + 12); // 0x4034ea
    int32_t v12 = *(int32_t *)(v4 + 16); // 0x4034ef
    int32_t v13 = *(int32_t *)(v2 + 16); // 0x4034f2
    int32_t v14 = *(int32_t *)(v2 + 20) ^ *(int32_t *)(v4 + 20); // 0x4034fa
    int64_t v15; // 0x4034c0
    int64_t result = (int64_t)((v7 ^ v5 | v6 ^ (int32_t)v15 | v9 ^ v8 | v11 ^ v10 | v13 ^ v12 | v14) == 0) | (int64_t)(v14 & -256); // 0x4034ff
    // 0x403502
    return result;
}
// Address range: 0x403530 - 0x403565
int64_t function_403530(uint64_t a1, int64_t a2, char * a3) {
    // 0x403530
    __fprintf_chk(g47, 1, (char *)((a1 % 256 ^ 1) + (int64_t)" %+ld %s"));
    return 1;
}
// Address range: 0x403570 - 0x403625
int64_t function_403570(int64_t a1, char a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x403570
    int64_t v2; // 0x403570
    if (a4 > 2) {
        if (a5 >= 0) {
            goto lab_0x40357e;
        } else {
            // 0x4035ed
            v1 = (uint64_t)a3 / 0x8000000000000000;
            v2 = (a3 >> 63 & -100) + a3;
            goto lab_0x4035d2;
        }
    } else {
        // 0x403579
        v1 = a3;
        v2 = 0;
        if (a5 < 0) {
            goto lab_0x4035d2;
        } else {
            goto lab_0x40357e;
        }
    }
  lab_0x40357e:;
    int128_t v3 = a3; // 0x403580
    int128_t v4 = 60 * v3; // 0x403580
    int64_t v5 = v4; // 0x403580
    int64_t v6; // 0x403570
    int64_t v7; // 0x403570
    if (a2 != 0) {
        int64_t v8 = v5 - a5; // 0x4035c2
        v6 = v8;
        v7 = (v8 ^ v5) & (v5 ^ a5);
    } else {
        int64_t v9 = v5 + a5; // 0x40358e
        v6 = v9;
        v7 = (v9 ^ v5) & (v9 ^ a5);
    }
    int64_t v10 = v6; // 0x403598
    if (v4 != 0x3c0000000000000000 * v3 >> 64 || v7 < 0) {
        // 0x4035b8
        return 0;
    }
    goto lab_0x40359a;
  lab_0x4035d2:
    // 0x4035d2
    v10 = v2 + 60 * v1;
    goto lab_0x40359a;
  lab_0x40359a:;
    int64_t result = 0; // 0x4035aa
    if (v10 < 1441) {
        // 0x4035ac
        *(int32_t *)a1 = 60 * (int32_t)v10;
        result = 1;
    }
    // 0x4035b8
    return result;
}
// Address range: 0x403630 - 0x4036ea
int64_t function_403630(int64_t a1, int64_t a2) {
    char * str = (char *)a2;
    int64_t v1 = (int64_t)&g10; // 0x403644
    int64_t str2 = (int64_t)"GMT"; // 0x403644
    int64_t result = v1; // 0x403666
    int64_t v2; // 0x403630
    int64_t v3; // 0x403630
    int64_t str4; // 0x403630
    int64_t str3; // 0x403630
    while (strcmp(str, (char *)str2) != 0) {
        // 0x403650
        v1 += 16;
        str2 = *(int64_t *)v1;
        if (str2 == 0) {
            int64_t v4 = a1 + 232; // 0x403670
            int64_t v5 = *(int64_t *)v4; // 0x403670
            v3 = v4;
            str3 = v5;
            if (v5 != 0) {
                goto lab_0x4036c4;
            } else {
                // 0x403688
                v2 = (int64_t)&g9;
                str4 = (int64_t)"WET";
                goto lab_0x4036a4;
            }
        }
        result = v1;
    }
    // 0x403668
    return result;
  lab_0x4036c4:
    // 0x4036c4
    result = v3;
    if (strcmp(str, (char *)str3) != 0) {
        int64_t v6 = v3 + 16; // 0x4036b8
        int64_t v7 = *(int64_t *)v6; // 0x4036bc
        v3 = v6;
        str3 = v7;
        if (v7 == 0) {
            // 0x403688
            v2 = (int64_t)&g9;
            str4 = (int64_t)"WET";
            goto lab_0x4036a4;
        } else {
            goto lab_0x4036c4;
        }
    } else {
        return result;
    }
  lab_0x4036a4:
    // 0x4036a4
    result = v2;
    if (strcmp(str, (char *)str4) != 0) {
        int64_t v8 = v2 + 16; // 0x403698
        int64_t v9 = *(int64_t *)v8; // 0x40369c
        result = 0;
        v2 = v8;
        str4 = v9;
        if (v9 == 0) {
            return result;
        } else {
            goto lab_0x4036a4;
        }
    } else {
        return result;
    }
}
// Address range: 0x4036f0 - 0x403875
int64_t function_4036f0(int64_t a1, int64_t a2) {
    // 0x4036f0
    int64_t v1; // 0x4036f0
    function_403400((int64_t)dcgettext(NULL, "parsed %s part: ", 5), a1, 5, v1, v1, v1);
    int64_t v2 = *(int64_t *)(a2 + 104); // 0x40371a
    int64_t v3; // 0x4036f0
    int64_t v4; // 0x4036f0
    int64_t v5; // 0x4036f0
    int64_t v6; // 0x4036f0
    int64_t v7; // 0x4036f0
    int64_t v8; // 0x4036f0
    if (v2 != 0) {
        uint64_t v9 = function_403530(0, v2, "year(s)"); // 0x403857
        int64_t v10 = *(int64_t *)(a2 + 112); // 0x40385c
        int64_t v11 = v9 % 256; // 0x403860
        v3 = v11;
        v7 = v10;
        v4 = v11;
        if (v10 != 0) {
            goto lab_0x403736;
        } else {
            goto lab_0x403747;
        }
    } else {
        int64_t v12 = *(int64_t *)(a2 + 112); // 0x403727
        v3 = 0;
        v7 = v12;
        if (v12 == 0) {
            int64_t v13 = *(int64_t *)(a2 + 120); // 0x4037d8
            v5 = 0;
            v8 = v13;
            if (v13 != 0) {
                goto lab_0x40374c;
            } else {
                // 0x4037e7
                v6 = 0;
                if (*(int64_t *)(a2 + 128) == 0) {
                    // 0x4037f5
                    v6 = 0;
                    if (*(int64_t *)(a2 + 136) == 0) {
                        // 0x403803
                        v6 = 0;
                        if (*(int64_t *)(a2 + 144) == 0) {
                            // 0x403811
                            v6 = 0;
                            if (*(int32_t *)(a2 + 152) == 0) {
                                // 0x40381f
                                return fputs(dcgettext(NULL, "today/this/now\n", 5), g47);
                            }
                        }
                    }
                }
                goto lab_0x403759;
            }
        } else {
            goto lab_0x403736;
        }
    }
  lab_0x403736:
    // 0x403736
    v4 = function_403530(v3, v7, "month(s)") % 256;
    goto lab_0x403747;
  lab_0x403747:;
    int64_t v14 = *(int64_t *)(a2 + 120);
    v5 = v4;
    v8 = v14;
    v6 = v4;
    if (v14 == 0) {
        goto lab_0x403759;
    } else {
        goto lab_0x40374c;
    }
  lab_0x403759:;
    int64_t v15 = *(int64_t *)(a2 + 128); // 0x403759
    int64_t v16 = v6; // 0x403763
    if (v15 != 0) {
        // 0x403765
        v16 = function_403530(v6, v15, "hour(s)") % 256;
    }
    int64_t v17 = *(int64_t *)(a2 + 136); // 0x403772
    int64_t v18 = v16; // 0x40377c
    if (v17 != 0) {
        // 0x40377e
        v18 = function_403530(v16, v17, "minutes") % 256;
    }
    int64_t v19 = *(int64_t *)(a2 + 144); // 0x40378b
    int64_t v20 = v18; // 0x403795
    if (v19 != 0) {
        // 0x403797
        v20 = function_403530(v18, v19, "seconds") % 256;
    }
    int32_t v21 = *(int32_t *)(a2 + 152); // 0x4037a4
    if (v21 != 0) {
        // 0x4037b0
        function_403530(v20, (int64_t)v21, "nanoseconds");
    }
    // 0x4037ba
    return fputc(10, g47);
  lab_0x40374c:
    // 0x40374c
    v6 = function_403530(v5, v8, "day(s)") % 256;
    goto lab_0x403759;
}
// Address range: 0x403880 - 0x403915
int64_t function_403880(int32_t * a1, int64_t * a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = (int64_t)a3;
    int64_t v1; // 0x403880
    int64_t v2 = function_40e2d0(result, 100, "(Y-M-D) %Y-%m-%d %H:%M:%S", (int64_t)a1, 0, 0, v1, v1, v1); // 0x4038a4
    int32_t v3 = v2; // 0x4038b4
    if (a2 == NULL || v3 > 99) {
        // 0x4038c1
        return result;
    }
    int64_t v4 = (int64_t)a2;
    if (*(int64_t *)(v4 + 208) == 0) {
        // 0x4038c1
        return result;
    }
    // 0x4038d0
    int64_t v5; // bp-56, 0x403880
    int64_t v6 = function_403290(*(int32_t *)(v4 + 24), &v5); // 0x4038d8
    __snprintf_chk((char *)((0x100000000 * v2 >> 32) + result), 100 - v3, 1, -1, " TZ=%s", (char *)v6);
    return result;
}
// Address range: 0x403920 - 0x403a0d
int64_t function_403920(int64_t a1, int64_t * str) {
    int64_t result = (int64_t)str;
    if (*(char *)(a1 + 224) == 0) {
        // 0x4039c8
        *(char *)str = 0;
        if (*(int32_t *)(a1 + 16) >= 7) {
            // 0x4039ba
            return result;
        }
        // 0x4039e1
        __snprintf_chk((char *)result, 100, 1, -1, (char *)0x411a7c);
        return result;
    }
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x403939
    uint64_t v2 = v1 + 1; // 0x40393d
    int32_t v3; // 0x403920
    if (v2 < 14) {
        int32_t chars_printed = snprintf((char *)str, 100, "%s", (char *)(v1 + (int64_t)"last" + 1 + 10 * v2)); // 0x403962
        v3 = chars_printed;
        if (chars_printed < 100 != *(int32_t *)(a1 + 16) < 7) {
            // 0x4039ba
            return result;
        }
    } else {
        // 0x403990
        v3 = __snprintf_chk((char *)str, 100, 1, -1, "%ld", (int32_t)v1);
        if (*(int32_t *)(a1 + 16) >= 7) {
            // 0x4039ba
            return result;
        }
    }
    char * v4 = v3 == 0 ? (char *)0x411a7c : (char *)0x411a7b; // 0x40398d
    int32_t v5 = (0x6400000000 - 0x100000000 * (int64_t)v3) / 0x100000000;
    __snprintf_chk((char *)((int64_t)v3 + result), v5, 1, -1, v4);
    return result;
}
// Address range: 0x403a10 - 0x403db0
int64_t function_403a10(int64_t a1, int64_t a2) {
    // 0x403a10
    int64_t v1; // 0x403a10
    function_403400((int64_t)dcgettext(NULL, "parsed %s part: ", 5), a1, 5, v1, v1, v1);
    char * v2; // 0x403a10
    char * v3; // 0x403a10
    int64_t v4; // 0x403a10
    if (*(int64_t *)(a2 + 168) == 0) {
        goto lab_0x403a55;
    } else {
        char * v5 = (char *)(a2 + 218); // 0x403a48
        if (*v5 == 0) {
            int64_t v6 = *(int64_t *)(a2 + 40); // 0x403c30
            int64_t v7 = *(int64_t *)(a2 + 64); // 0x403c34
            int64_t v8 = *(int64_t *)(a2 + 56); // 0x403c3f
            __fprintf_chk(g47, 1, "(Y-M-D) %04ld-%02ld-%02ld", (int32_t)v6, (int32_t)v8, (int32_t)v7);
            *v5 = 1;
            char * v9 = (char *)(a2 + 223);
            char * v10 = (char *)(a2 + 216);
            v4 = 1;
            if (*v10 == *v9) {
                goto lab_0x403aa6;
            } else {
                // 0x403c73
                fputc(32, g47);
                v3 = v9;
                v2 = v10;
                goto lab_0x403a66;
            }
        } else {
            goto lab_0x403a55;
        }
    }
  lab_0x403a55:;
    char * v11 = (char *)(a2 + 223);
    char * v12 = (char *)(a2 + 216);
    v3 = v11;
    v2 = v12;
    v4 = 0;
    if (*v12 == *v11) {
        goto lab_0x403aa6;
    } else {
        goto lab_0x403a66;
    }
  lab_0x403aa6:;
    // 0x403aa6
    char * v13; // 0x403a10
    int64_t v14; // 0x403a10
    if (*(int64_t *)(a2 + 200) == 0) {
        goto lab_0x403abd;
    } else {
        char * v15 = (char *)(a2 + 221); // 0x403ab0
        if (*v15 == 0) {
            // 0x403c90
            __fprintf_chk(g47, 1, (char *)((v4 | (int64_t)" %02ld:%02ld:%02ld") ^ 1));
            int64_t v16 = *(int64_t *)(a2 + 96); // 0x403cbc
            if (v16 != 0) {
                // 0x403d68
                __fprintf_chk(g47, 1, ".%09d", v16);
            }
            // 0x403cc9
            if (*(int32_t *)(a2 + 28) == 1) {
                // 0x403d90
                fwrite((int64_t *)"pm", 1, 2, g47);
            }
            // 0x403cd3
            *v15 = 1;
            v14 = 1;
            if (*(int64_t *)(a2 + 176) == 0) {
                goto lab_0x403b2a;
            } else {
                char * v17 = (char *)(a2 + 219);
                unsigned char v18 = *v17; // 0x403ced
                v14 = v18;
                v13 = v17;
                if (v18 != 0) {
                    goto lab_0x403b2a;
                } else {
                    goto lab_0x403cfc;
                }
            }
        } else {
            goto lab_0x403abd;
        }
    }
  lab_0x403a66:
    // 0x403a66
    __fprintf_chk(g47, 1, dcgettext(NULL, "year: %04ld", 5));
    *v3 = *v2;
    v4 = 1;
    goto lab_0x403aa6;
  lab_0x403abd:
    // 0x403abd
    v14 = v4;
    char * v19; // 0x403a10
    if (*(int64_t *)(a2 + 176) == 0) {
        goto lab_0x403b2a;
    } else {
        char * v20 = (char *)(a2 + 219);
        v14 = v4;
        if (*v20 != 0) {
            goto lab_0x403b2a;
        } else {
            // 0x403ad0
            v19 = v20;
            v13 = v20;
            if (v4 != 0) {
                goto lab_0x403cfc;
            } else {
                goto lab_0x403ad8;
            }
        }
    }
  lab_0x403b2a:;
    // 0x403b2a
    char * v21; // 0x403a10
    int64_t v22; // 0x403a10
    if (*(int64_t *)(a2 + 184) == 0) {
        goto lab_0x403bc0;
    } else {
        char * v23 = (char *)(a2 + 220); // 0x403b38
        if (*v23 != 0) {
            goto lab_0x403bc0;
        } else {
            // 0x403b41
            __fprintf_chk(g47, 1, (char *)((v14 ^ 1) + (int64_t)" isdst=%d%s"));
            *v23 = 1;
            if (*(int64_t *)(a2 + 208) == 0) {
                goto lab_0x403b99;
            } else {
                char * v24 = (char *)(a2 + 222);
                v21 = v24;
                v22 = (int64_t)" UTC%s";
                if (*v24 == 0) {
                    goto lab_0x403d25;
                } else {
                    goto lab_0x403b99;
                }
            }
        }
    }
  lab_0x403bc0:
    // 0x403bc0
    if (*(int64_t *)(a2 + 208) == 0) {
        goto lab_0x403bd7;
    } else {
        char * v25 = (char *)(a2 + 222);
        if (*v25 == 0) {
            // 0x403d18
            v21 = v25;
            v22 = (v14 ^ 1) + (int64_t)" UTC%s";
            goto lab_0x403d25;
        } else {
            goto lab_0x403bd7;
        }
    }
  lab_0x403bd7:
    // 0x403bd7
    if (*(char *)(a2 + 160) == 0) {
        // 0x403c12
        return fputc(10, g47);
    }
    if ((char)v14 != 0) {
        // 0x403ba6
        fputc(32, g47);
        goto lab_0x403be8;
    } else {
        goto lab_0x403be8;
    }
  lab_0x403cfc:
    // 0x403cfc
    fputc(32, g47);
    v19 = v13;
    goto lab_0x403ad8;
  lab_0x403ad8:;
    // 0x403ad8
    int64_t v26; // bp-152, 0x403a10
    function_403920(a2, &v26);
    __fprintf_chk(g47, 1, dcgettext(NULL, "%s (day ordinal=%ld number=%d)", 5));
    *v19 = 1;
    v14 = 1;
    goto lab_0x403b2a;
  lab_0x403be8:
    // 0x403be8
    __fprintf_chk(g47, 1, dcgettext(NULL, "number of seconds: %ld", 5));
    // 0x403c12
    return fputc(10, g47);
  lab_0x403b99:
    // 0x403b99
    if (*(char *)(a2 + 160) == 0) {
        // 0x403c12
        return fputc(10, g47);
    }
    // 0x403ba6
    fputc(32, g47);
    goto lab_0x403be8;
  lab_0x403d25:
    // 0x403d25
    function_403290(*(int32_t *)(a2 + 24), &v26);
    __fprintf_chk(g47, 1, (char *)v22);
    *v21 = 1;
    if (*(char *)(a2 + 160) == 0) {
        // 0x403c12
        return fputc(10, g47);
    }
    // 0x403ba6
    fputc(32, g47);
    goto lab_0x403be8;
}
// Address range: 0x403db0 - 0x406022
int64_t function_403db0(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403db0
    int64_t v1; // bp-1512, 0x403db0
    int64_t v2 = &v1; // 0x403dd8
    int64_t v3; // bp-1352, 0x403db0
    int64_t v4 = &v3; // 0x403ddf
    v3 = 0;
    int64_t * v5 = (int64_t *)(v2 + 16);
    int64_t v6 = v2 + 56;
    int64_t * v7 = (int64_t *)v6;
    int64_t v8 = v2 + 64;
    int64_t * v9 = (int64_t *)(v2 + 8);
    int64_t * v10 = (int64_t *)v8;
    int64_t v11 = v2 + 208;
    int64_t * v12 = (int64_t *)(v2 + 40);
    int64_t * v13 = (int64_t *)(v2 + 48);
    int32_t * v14 = (int32_t *)(v2 + 36);
    int64_t v15 = v2 + 224;
    int64_t v16 = v2 + 272;
    int128_t * v17 = (int128_t *)v16;
    int64_t v18 = v2 + 320;
    int64_t * v19 = (int64_t *)v18;
    int64_t v20 = v2 + 288;
    int128_t * v21 = (int128_t *)v20;
    int64_t v22 = v2 + 304;
    int128_t * v23 = (int128_t *)v22;
    int32_t * v24 = (int32_t *)(v2 + 24);
    int64_t v25 = v2 + 72;
    int64_t * v26 = (int64_t *)v25;
    int64_t * v27 = (int64_t *)(v2 - 16);
    int64_t * v28 = (int64_t *)(v2 - 24);
    int64_t * v29 = (int64_t *)(v2 - 32);
    int32_t * v30 = (int32_t *)(v2 + 324);
    char * v31 = (char *)v8;
    int64_t v32 = v2 + 88;
    int64_t * v33 = (int64_t *)v32;
    int64_t * v34 = (int64_t *)(v2 + 96);
    int64_t v35 = v2 + 104;
    int64_t * v36 = (int64_t *)v35;
    int64_t * v37 = (int64_t *)(v2 + 80);
    int64_t * v38 = (int64_t *)(v2 + 112);
    int64_t * v39 = (int64_t *)(v2 + 120);
    int32_t * v40 = (int32_t *)v35;
    int32_t * v41 = (int32_t *)v32;
    int64_t v42; // bp-1176, 0x403db0
    int64_t v43 = &v42; // 0x403db0
    int64_t v44 = 0xfffffffe; // 0x403db0
    int64_t v45 = 0; // 0x403db0
    int64_t v46 = (int64_t)a1; // 0x403db0
    int64_t v47 = v4; // 0x403db0
    int64_t v48 = 38; // 0x403db0
    int64_t v49; // 0x403db0
    int64_t v50; // 0x403db0
    int64_t v51; // 0x403db0
    int64_t v52; // 0x403db0
    int64_t v53; // 0x403db0
    int64_t v54; // 0x403db0
    int64_t v55; // 0x403db0
    int64_t v56; // 0x403db0
    int64_t v57; // 0x403db0
    int64_t v58; // 0x403db0
    int64_t v59; // 0x403db0
    int64_t v60; // 0x403db0
    int64_t v61; // 0x403db0
    int64_t v62; // 0x403db0
    int64_t v63; // 0x403db0
    int64_t v64; // 0x403db0
    int64_t v65; // 0x403db0
    int64_t v66; // 0x403db0
    int64_t v67; // 0x403db0
    int64_t v68; // 0x403db0
    int64_t v69; // 0x403db0
    int64_t v70; // 0x403db0
    int64_t * v71; // 0x404060
    int128_t v72; // 0x403db0
    int128_t v73; // 0x403db0
    while (true) {
      lab_0x403e0c:
        // 0x403e0c
        v53 = v48;
        v52 = v47;
        v59 = v46;
        v56 = v45;
        v65 = v43;
        v73 = v72;
        int32_t v74 = v44;
        int32_t v75 = v74; // 0x403e0f
        int64_t v76 = v65; // 0x403e0f
        int64_t v77 = v44; // 0x403e0f
        int64_t v78 = v56; // 0x403e0f
        int64_t v79 = v59; // 0x403e0f
        int64_t v80 = v53; // 0x403e0f
        if (v74 == -2) {
            // 0x404060
            v71 = (int64_t *)v59;
            int64_t v81 = *v71; // 0x404060
            v49 = v81;
            v68 = (int64_t)*(char *)v81;
            while (true) {
              lab_0x404077_2:;
                int64_t v82 = v68;
                int64_t v83 = v49;
                v51 = v83;
                v70 = v82;
                if (v82 < 33) {
                    int64_t v84 = v83; // 0x404098
                    v50 = v83;
                    v69 = v82;
                    if ((1 << v82 % 64 & 0x100003e00) == 0) {
                        goto lab_0x4040d1;
                    } else {
                        int64_t v85 = v84 + 1;
                        *v71 = v85;
                        unsigned char v86 = *(char *)v85; // 0x4040a1
                        int64_t v87 = v86; // 0x4040a1
                        v51 = v85;
                        v70 = v87;
                        while (v86 < 33) {
                            // 0x4040b3
                            v84 = v85;
                            v50 = v85;
                            v69 = v87;
                            if ((1 << v87 % 64 & 0x100003e00) == 0) {
                                goto lab_0x4040d1;
                            }
                            v85 = v84 + 1;
                            *v71 = v85;
                            v86 = *(char *)v85;
                            v87 = v86;
                            v51 = v85;
                            v70 = v87;
                        }
                        goto lab_0x4041f0;
                    }
                } else {
                    goto lab_0x4041f0;
                }
            }
            goto lab_0x404319_3;
        } else {
            int64_t v88 = v80;
            int64_t v89 = v79;
            int64_t v90 = v78;
            int64_t v91 = v76;
            int32_t v92 = v75;
            v62 = 0;
            v66 = v91;
            v64 = 0;
            v57 = v90;
            v60 = v89;
            v54 = v88;
            if (v92 < 1) {
                goto lab_0x403e32;
            } else {
                int64_t v93 = v77;
                v67 = v91;
                v63 = v93;
                v58 = v90;
                v61 = v89;
                v55 = v88;
                if (v92 < 278) {
                    goto lab_0x4042c8;
                } else {
                    // 0x403e29
                    v62 = 2;
                    v66 = v91;
                    v64 = v93;
                    v57 = v90;
                    v60 = v89;
                    v54 = v88 + 2 & 0xffffffff;
                    goto lab_0x403e32;
                }
            }
        }
    }
  lab_0x403f2d_8:;
    // 0x403f2d
    int64_t result; // 0x403db0
    return result;
  lab_0x4040d1:;
    int64_t v94 = v69;
    int64_t v95 = v50;
    int64_t v96 = v95; // 0x4040d7
    int64_t v97 = v94; // 0x4040d7
    int64_t v98 = 0; // 0x4040d7
    if ((int32_t)v94 < 58) {
        // break -> 0x404319
        goto lab_0x404319_3;
    }
    int64_t v99 = v94 + 0xffffffbf; // 0x4040dd
    int64_t v100 = v95; // 0x4040e3
    int64_t v101 = v95; // 0x4040e3
    int64_t v102 = v99; // 0x4040e3
    int64_t v103 = v94; // 0x4040e3
    if ((int32_t)v99 >= 58) {
        goto lab_0x404025_2;
    }
    goto lab_0x4040e9;
  lab_0x404077:;
    // 0x404077
    int64_t v114; // 0x403db0
    v49 = v114;
    int64_t v115; // 0x403db0
    v68 = v115;
    goto lab_0x404077_2;
  lab_0x404124:;
    // 0x404124
    int64_t v106; // 0x403db0
    int64_t v116 = v106;
    int64_t v105; // 0x403db0
    int64_t v117 = v105;
    int64_t v118 = v117; // 0x404127
    int64_t v104; // 0x403db0
    if (v117 >= v2 + 147) {
        goto lab_0x40412f;
    } else {
        // 0x404129
        *(char *)v117 = (char)v104;
        v118 = v117 + 1;
        goto lab_0x40412f;
    }
  lab_0x404025_2:
    // 0x404025
    *v71 = v100 + 1;
    unsigned char v119 = *(char *)v100; // 0x40402c
    v62 = 0;
    v66 = v65;
    v64 = 0;
    v57 = v56;
    v60 = v59;
    v54 = v53;
    v67 = v65;
    v63 = v119;
    v58 = v56;
    v61 = v59;
    v55 = v53;
    if (v119 != 0) {
        goto lab_0x4042c8;
    } else {
        goto lab_0x403e32;
    }
  lab_0x403e32:;
    int64_t v120 = v54;
    int64_t v121 = v60;
    int64_t v122 = v57;
    int64_t v123 = v64;
    int64_t v124 = v66;
    int128_t v125 = v73; // 0x403e36
    int64_t v126 = v124; // 0x403e36
    int64_t v127 = v123; // 0x403e36
    int64_t v128 = v122; // 0x403e36
    int64_t v129 = v121; // 0x403e36
    int64_t v130 = v52; // 0x403e36
    int64_t v131; // 0x403db0
    int64_t v132; // 0x403db0
    int64_t v133; // 0x403db0
    int64_t v134; // 0x403db0
    int64_t v135; // 0x403db0
    int64_t v136; // 0x403db0
    int64_t v137; // 0x403db0
    int64_t v138; // 0x403db0
    int64_t v139; // 0x403db0
    int64_t v140; // 0x403db0
    int64_t v141; // 0x403db0
    int64_t v142; // 0x403db0
    int64_t v143; // 0x403db0
    int64_t v144; // 0x403db0
    int64_t v145; // 0x403db0
    int128_t v146; // 0x403db0
    int128_t v147; // 0x403db0
    if ((int32_t)v120 < 113) {
        int64_t v148 = 0x100000000 * v120 >> 32; // 0x403e3c
        char v149 = *(char *)(v148 + (int64_t)&g13); // 0x403e3f
        v125 = v73;
        v126 = v124;
        v127 = v123;
        v128 = v122;
        v129 = v121;
        v130 = v52;
        if ((int32_t)v149 != (int32_t)v62) {
            goto lab_0x403f00;
        } else {
            unsigned char v150 = *(char *)(v148 + (int64_t)&g14); // 0x403e4f
            if (v150 == 0) {
                int64_t v151 = v124 + 104; // 0x4044d0
                int64_t v152 = v124 + 56; // 0x4044d4
                int128_t v153 = __asm_movdqu(*(int128_t *)v152); // 0x4044d4
                int64_t v154 = v124 + 72; // 0x4044df
                int128_t v155 = __asm_movdqu(*(int128_t *)v154); // 0x4044df
                *v17 = (int128_t)__asm_movaps(v153);
                int64_t v156 = v124 + 88; // 0x4044f0
                int128_t v157 = __asm_movdqu(*(int128_t *)v156); // 0x4044f0
                *v19 = *(int64_t *)v151;
                *v21 = (int128_t)__asm_movaps(v155);
                *v23 = (int128_t)__asm_movaps(v157);
                *v5 = *(int64_t *)v156;
                *v9 = *(int64_t *)(v124 + 96);
                *v24 = *(int32_t *)v151;
                v147 = v155;
                v139 = 0xffffffe4;
                v144 = v52;
                v145 = v124;
                v140 = v123;
                v135 = 0;
                v138 = v121;
                v131 = *(int64_t *)(v124 + 64);
                v132 = *(int64_t *)(v124 + 80);
                v133 = *(int64_t *)v154;
                v134 = *(int64_t *)v152;
                goto lab_0x404540;
            } else {
                int32_t v158 = *v14; // 0x403e60
                int64_t v159 = v124 + 56; // 0x403e72
                *v14 = v158 - 1 + (int32_t)(v158 == 0);
                *(int64_t *)(v2 + 216) = *v12;
                int128_t v160 = __asm_movdqa(*(int128_t *)v11); // 0x403e8c
                *(int64_t *)v15 = *v13;
                int128_t v161 = __asm_movdqa(*(int128_t *)v15); // 0x403ea5
                __asm_movups(*(int128_t *)v159, v160);
                int128_t v162 = __asm_movdqa(*(int128_t *)(v2 + 240)); // 0x403eb1
                *(int64_t *)(v124 + 104) = *(int64_t *)(v2 + 256);
                __asm_movups(*(int128_t *)(v124 + 72), v161);
                __asm_movups(*(int128_t *)(v124 + 88), v162);
                v146 = v161;
                v143 = v52;
                v142 = v159;
                v141 = 0xfffffffe;
                v136 = v150;
                v137 = v121;
                goto lab_0x403ec6;
            }
        }
    } else {
        goto lab_0x403f00;
    }
  lab_0x4042d2_2:;
    // 0x4042d2
    int64_t v163; // 0x403db0
    v62 = v163;
    int64_t v164; // 0x403db0
    v66 = v164;
    int64_t v165; // 0x403db0
    v64 = v165;
    int64_t v166; // 0x403db0
    v57 = v166;
    int64_t v167; // 0x403db0
    v60 = v167;
    int64_t v168; // 0x403db0
    v54 = v168 + v163 & 0xffffffff;
    goto lab_0x403e32;
  lab_0x4041f0:;
    int64_t v169 = v70;
    int64_t v170 = v51; // 0x404270
    char v171 = v169;
    char v107; // 0x403db0
    int64_t v108; // 0x403db0
    if ((int32_t)v169 < 58) {
        // 0x404260
        v96 = v170;
        v97 = v169;
        v98 = 0;
        if ((v171 - 43 & -3) != 0) {
            // break -> 0x404319
            goto lab_0x404319_3;
        }
        goto lab_0x40426e;
    } else {
        if ((v171 - 43 & -3) == 0) {
            goto lab_0x40426e;
        } else {
            int64_t v172 = v169 + 0xffffffbf; // 0x404206
            v101 = v170;
            v102 = v172;
            v103 = v169;
            v107 = v171;
            v108 = v170;
            if ((int32_t)v172 < 58) {
                goto lab_0x4040e9;
            } else {
                goto lab_0x404212;
            }
        }
    }
  lab_0x4040e9:
    // 0x4040e9
    v104 = v103;
    v105 = v2 + 128;
    v106 = v101;
    if ((1 << v102 % 64) % 0x3ffffff04000000 != 0) {
        goto lab_0x404124;
    }
    // 0x4040e9
    v107 = v103;
    v108 = v101;
    goto lab_0x404212;
  lab_0x40426e:;
    int64_t v563 = v170 + 1;
    *v71 = v563;
    unsigned char v564 = *(char *)v563; // 0x404282
    int64_t v565 = v564; // 0x404282
    while (v564 < 33) {
        int64_t v566 = v563; // 0x4042a6
        v114 = v563;
        v115 = v565;
        if ((1 << v565 % 64 & 0x100003e00) == 0) {
            goto lab_0x404077;
        }
        v563 = v566 + 1;
        *v71 = v563;
        v564 = *(char *)v563;
        v565 = v564;
    }
    // 0x4042e0
    v114 = v563;
    v115 = v565;
    if ((int32_t)v564 < 58) {
        // 0x4042f1
        v96 = v563;
        v97 = v565;
        v98 = v171 != 45 ? 1 : 0xffffffff;
        goto lab_0x404319_3;
    }
    goto lab_0x404077;
  lab_0x404212:
    // 0x404212
    v100 = v108;
    int64_t v109 = v108; // 0x404215
    if (v107 != 40) {
        goto lab_0x404025_2;
    }
    int64_t v110 = v109 + 1; // 0x404240
    *v71 = v110;
    char v111 = *(char *)v109; // 0x404247
    v62 = 0;
    v66 = v65;
    v64 = 0;
    v57 = v56;
    v60 = v59;
    v54 = v53;
    if (v111 == 0) {
        goto lab_0x403e32;
    }
    int64_t v112 = v111 != 40 ? (int64_t)(v111 == 41) : 1;
    v109 = v110;
    while (v112 != 0) {
        int64_t v113 = v112;
        v110 = v109 + 1;
        *v71 = v110;
        v111 = *(char *)v109;
        v62 = 0;
        v66 = v65;
        v64 = 0;
        v57 = v56;
        v60 = v59;
        v54 = v53;
        if (v111 == 0) {
            goto lab_0x403e32;
        }
        // 0x404253
        v112 = (v111 != 40 ? (int64_t)(v111 == 41) : 1) + v113;
        v109 = v110;
    }
    // 0x4044bb
    v114 = v110;
    v115 = (int64_t)*(char *)v110;
    goto lab_0x404077;
  lab_0x404319_3:;
    int64_t v173 = v98;
    int64_t v174 = v96;
    uint64_t v175 = v97 % 256; // 0x4042f6
    int64_t v176 = v174;
    int64_t v177 = 0x100000000 * (v173 == 0xffffffff ? 48 - v175 : v175 + 0xffffffd0) / 0x100000000;
    int64_t v178 = v176 + 1; // 0x404319
    unsigned char v179 = *(char *)v178; // 0x404319
    while (v179 == 57 || (int32_t)v179 < 57) {
        int128_t v180 = v177; // 0x404400
        int128_t v181 = 10 * v180; // 0x404400
        v163 = 2;
        v164 = v65;
        v165 = 63;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        if (v181 != 0xa0000000000000000 * v180 >> 64) {
            goto lab_0x4042d2_2;
        }
        int64_t v182 = v179; // 0x404319
        int64_t v183 = v181; // 0x404400
        int64_t v184 = 0x100000000 * (v173 == 0xffffffff ? 48 - v182 : v182 + 0xffffffd0) >> 32; // 0x40430d
        int64_t v185 = v184 + v183; // 0x404310
        v163 = 2;
        v164 = v65;
        v165 = 63;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        int64_t v186 = v185; // 0x404313
        int64_t v187 = v178; // 0x404313
        if (((v185 ^ v183) & (v185 ^ v184)) < 0) {
            goto lab_0x4042d2_2;
        }
        v176 = v187;
        v177 = v186;
        v178 = v176 + 1;
        v179 = *(char *)v178;
    }
    int64_t v188; // 0x403db0
    int64_t v189; // 0x403db0
    int64_t v190; // 0x403db0
    int64_t v191; // 0x403db0
    int64_t v192; // 0x403db0
    int64_t v193; // 0x403db0
    int64_t v194; // 0x403db0
    int64_t v195; // 0x403db0
    if ((v179 - 44 & -3) != 0) {
        goto lab_0x404480;
    } else {
        // 0x40433e
        if ((int32_t)((int64_t)*(char *)(v176 + 2) + 0xffffffd0) < 10) {
            int64_t v196; // 0x403db0
            int64_t v197 = v196 + 0xffffffd0; // 0x404363
            int64_t v198; // 0x403db0
            int64_t v199; // 0x403db0
            int64_t v200; // 0x403db0
            int64_t v201; // 0x403db0
            int64_t v202; // 0x403db0
            int64_t v203; // 0x403db0
            int64_t v204; // 0x404367
            int64_t v205; // 0x40436e
            char v206; // 0x40436e
            int64_t v207; // 0x40436e
            if ((int32_t)v197 < 10) {
                // 0x40436e
                v205 = v200 + 1;
                v206 = *(char *)v205;
                v207 = v206;
                v203 = v197 + v204 & 0xffffffff;
                v201 = v205;
                v202 = v207 + 0xffffffd0;
                v198 = v207;
                v199 = v207 & 0xffffffff;
            }
            // 0x404380
            int64_t v208; // 0x403db0
            int64_t v209 = v208;
            int64_t v210; // 0x403db0
            int64_t v211 = v210;
            int64_t v212; // 0x403db0
            v195 = 10 * v212 & 0xfffffffe;
            int32_t v213; // 0x403db0
            int32_t v214 = v213 - 1; // 0x404380
            v213 = v214;
            v212 = v195;
            v210 = v211;
            v208 = v209;
            // 0x40434e
            while (v214 != 0) {
                // 0x404360
                v197 = v196 + 0xffffffd0;
                if ((int32_t)v197 < 10) {
                    // 0x40436e
                    v205 = v200 + 1;
                    v206 = *(char *)v205;
                    v207 = v206;
                    v203 = v197 + v204 & 0xffffffff;
                    v201 = v205;
                    v202 = v207 + 0xffffffd0;
                    v198 = v207;
                    v199 = v207 & 0xffffffff;
                }
                // 0x404380
                v209 = v208;
                v211 = v210;
                v195 = 10 * v212 & 0xfffffffe;
                v214 = v213 - 1;
                v213 = v214;
                v212 = v195;
                v210 = v211;
                v208 = v209;
            }
            int64_t v215 = v197;
            if (v173 == 0xffffffff) {
                // 0x404721
                v191 = v211;
                if ((int32_t)v215 < 10) {
                    int64_t v216 = v211; // 0x40472e
                    int32_t v217; // 0x403db0
                    char v218; // 0x403db0
                    int64_t v219; // 0x403db0
                    if ((char)v209 != 48) {
                        char v220 = *(char *)v211;
                        v217 = (int32_t)v220 - 48;
                        v218 = v220;
                        v219 = v211;
                      lab_0x40474c:;
                        int64_t v221 = v195 + 1 & 0xffffffff; // 0x404750
                        v192 = v221;
                        v188 = v219;
                        v193 = v221;
                        v189 = v219;
                        if (v217 < 9 || v218 == 57) {
                            goto lab_0x404397;
                        } else {
                            goto lab_0x4043b7;
                        }
                    } else {
                        int64_t v222 = v216 + 1; // 0x404730
                        char v223 = *(char *)v222; // 0x404734
                        int32_t v224 = (int32_t)v223 - 48;
                        v191 = v222;
                        while (v223 == 57 || v224 < 9) {
                            // 0x404746
                            v216 = v222;
                            v217 = v224;
                            v218 = v223;
                            v219 = v222;
                            if (v223 != 48) {
                                goto lab_0x40474c;
                            }
                            v222 = v216 + 1;
                            v223 = *(char *)v222;
                            v224 = (int32_t)v223 - 48;
                            v191 = v222;
                        }
                        goto lab_0x405b40;
                    }
                } else {
                    goto lab_0x405b40;
                }
            } else {
                // 0x40438e
                v192 = v195;
                v188 = v211;
                v194 = v195;
                v190 = v211;
                if ((int32_t)v215 < 10) {
                    goto lab_0x404397;
                } else {
                    goto lab_0x405b11;
                }
            }
        } else {
            goto lab_0x404480;
        }
    }
  lab_0x404480:
    // 0x404480
    *v71 = v178;
    *v12 = v177;
    *(char *)v11 = (char)((int32_t)v173 < 0);
    *v13 = v178 - v174;
    v163 = v174 + 20 + (v174 ^ 0xffffffff) + (int64_t)(v173 == 0) & 0xffffffff;
    v164 = v65;
    v165 = v178 + (v173 == 0 ? 276 : 275) + (v178 ^ 0xffffffff) & 0xffffffff;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    goto lab_0x4042d2_2;
  lab_0x403f00:;
    int64_t v225 = v130;
    int64_t v226 = v129;
    int64_t v227 = v128;
    int64_t v228 = v127;
    int64_t v229 = v126;
    unsigned char v230 = *(char *)(v227 + (int64_t)&g17); // 0x403f00
    int64_t v231; // 0x403db0
    int64_t v232; // 0x403db0
    int64_t v233; // 0x403db0
    int64_t v234; // 0x403db0
    int64_t v235; // 0x403db0
    int64_t v236; // 0x403db0
    int64_t v237; // 0x403db0
    int64_t v238; // 0x403db0
    int64_t v239; // 0x403db0
    int64_t v240; // 0x403db0
    int64_t v241; // 0x403db0
    int64_t v242; // 0x403db0
    int64_t v243; // 0x403db0
    int64_t v244; // 0x403db0
    int64_t v245; // 0x403db0
    int64_t v246; // 0x403db0
    int64_t v247; // 0x403db0
    int64_t v248; // 0x403db0
    int64_t v249; // 0x403db0
    int64_t v250; // 0x403db0
    int64_t v251; // 0x403db0
    int64_t v252; // 0x403db0
    int64_t v253; // 0x403db0
    int64_t v254; // 0x403db0
    int64_t v255; // 0x403db0
    int64_t v256; // 0x403db0
    int64_t v257; // 0x403db0
    int64_t v258; // 0x403db0
    char * v259; // 0x403db0
    int64_t v260; // 0x403db0
    int64_t v261; // 0x403db0
    int64_t v262; // 0x403db0
    int64_t v263; // 0x403db0
    int64_t v264; // 0x403db0
    int64_t v265; // 0x403db0
    int64_t v266; // 0x403db0
    int64_t v267; // 0x403fca
    int64_t v268; // 0x403fcd
    int64_t v269; // 0x403fdd
    int64_t v270; // 0x403fe9
    int128_t v271; // 0x403db0
    int128_t v272; // 0x403db0
    int128_t v273; // 0x403db0
    int128_t v274; // 0x403db0
    int128_t v275; // 0x403db0
    if (v230 != 0) {
        // 0x403f90
        v271 = v125;
        int64_t v276 = v230; // 0x403f00
        int64_t v277 = (int64_t)*(char *)(v276 + (int64_t)&g11); // 0x403f9b
        int64_t v278 = 56 * (1 - v277) + v229; // 0x403fb4
        int64_t v279 = v278 + 48; // 0x403fb8
        int128_t v280 = __asm_movdqu(*(int128_t *)v278); // 0x403fbc
        int64_t v281 = v278 + 16; // 0x403fc0
        int128_t v282 = __asm_movdqu(*(int128_t *)v281); // 0x403fc0
        int64_t v283 = v278 + 32; // 0x403fc5
        int128_t v284 = __asm_movdqu(*(int128_t *)v283); // 0x403fc5
        v267 = *(int64_t *)v278;
        v268 = *(int64_t *)(v278 + 8);
        *v19 = *(int64_t *)v279;
        v269 = *(int64_t *)v281;
        *v17 = (int128_t)__asm_movaps(v280);
        v270 = *(int64_t *)(v278 + 24);
        *v21 = (int128_t)__asm_movaps(v282);
        *v5 = *(int64_t *)v283;
        *v23 = (int128_t)__asm_movaps(v284);
        *v9 = *(int64_t *)(v278 + 40);
        *v24 = *(int32_t *)v279;
        g75 = v230 - 4;
        v252 = (int64_t)"hybrid";
        switch (v230) {
            case 4: {
                int128_t v285 = __asm_movdqu(*(int128_t *)v229); // 0x404be2
                *(char *)(v226 + 160) = 1;
                __asm_movups(*(int128_t *)(v226 + 88), v285);
                *v26 = v268;
                *v10 = v270;
                *v7 = v226;
                v274 = v285;
                v247 = v225 - 4;
                v251 = v229 - 112;
                v259 = dcgettext(NULL, "number of seconds", 5);
                v257 = 2;
                goto lab_0x404c29;
            }
            case 7: {
                // 0x405134
                *v26 = v268;
                *v10 = v270;
                int64_t * v286 = (int64_t *)(v226 + 200); // 0x405148
                *v286 = *v286 + 1;
                int64_t * v287 = (int64_t *)(v226 + 168); // 0x405150
                *v287 = *v287 + 1;
                *v7 = v226;
                v253 = (int64_t)"datetime";
                goto lab_0x404cae;
            }
            case 8: {
                // 0x40510e
                *v26 = v268;
                *v10 = v270;
                int64_t * v288 = (int64_t *)(v226 + 200); // 0x405122
                *v288 = *v288 + 1;
                *v7 = v226;
                v253 = (int64_t)"time";
                goto lab_0x404cae;
            }
            case 9: {
                // 0x404cd0
                *v26 = v268;
                *v10 = v270;
                int64_t * v289 = (int64_t *)(v226 + 184); // 0x404ce4
                *v289 = *v289 + 1;
                *v7 = v226;
                v253 = (int64_t)"local_zone";
                goto lab_0x404cae;
            }
            case 10: {
                // 0x404c8d
                *v26 = v268;
                int64_t * v290 = (int64_t *)(v226 + 208); // 0x404c9c
                *v290 = *v290 + 1;
                *v10 = v270;
                *v7 = v226;
                v253 = (int64_t)"zone";
                goto lab_0x404cae;
            }
            case 11: {
                // 0x405371
                *v26 = v268;
                *v10 = v270;
                int64_t * v291 = (int64_t *)(v226 + 168); // 0x405385
                *v291 = *v291 + 1;
                *v7 = v226;
                v253 = (int64_t)"date";
                goto lab_0x404cae;
            }
            case 12: {
                // 0x40534b
                *v26 = v268;
                *v10 = v270;
                int64_t * v292 = (int64_t *)(v226 + 176); // 0x40535f
                *v292 = *v292 + 1;
                *v7 = v226;
                v253 = (int64_t)"day";
                goto lab_0x404cae;
            }
            case 13: {
                // 0x40532d
                v252 = (int64_t)"relative";
                goto lab_0x405247;
            }
            case 14: {
                // 0x4052ab
                *v26 = v226;
                *v10 = v268;
                *v7 = v270;
                char * v293 = dcgettext(NULL, "number", 5); // 0x4052c6
                int64_t v294 = *v26; // 0x4052cb
                int64_t v295 = v229 - 56; // 0x4052d0
                int64_t v296 = v225 - 2; // 0x4052d4
                int64_t v297 = *v7; // 0x4052e6
                int64_t v298 = *v10; // 0x4052f3
                v147 = v271;
                v139 = 4;
                v144 = v296;
                v145 = v295;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v294;
                v131 = v298;
                v132 = v297;
                v133 = v269;
                v134 = v267;
                if (*(char *)(v294 + 217) == 0) {
                    goto lab_0x404540;
                } else {
                    // 0x4052fe
                    *v40 = -93;
                    *v34 = v295;
                    *v41 = 4;
                    *v37 = v298;
                    *v26 = v296;
                    *v10 = v297;
                    *v7 = v294;
                    function_403a10((int64_t)v293, v294);
                    v275 = v271;
                    goto lab_0x404c66;
                }
            }
            case 15: {
                goto lab_0x405247;
            }
            case 18: {
                // 0x4051ef
                *(int64_t *)(v226 + 80) = 0;
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 96) = 0;
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 19: {
                // 0x4051aa
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 96) = 0;
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 160);
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 20: {
                // 0x405162
                *(int64_t *)(v226 + 88) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 272);
                *(int64_t *)(v226 + 96) = (int64_t)*(int32_t *)(v229 - 48);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 160);
                *(int32_t *)(v226 + 28) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 7;
                v144 = v225 - 12;
                v145 = v229 - 336;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 22: {
                // 0x404f77
                *(int64_t *)(v226 + 80) = 0;
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 96) = 0;
                *(int32_t *)(v226 + 28) = 2;
                v147 = v271;
                v139 = 8;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 23: {
                // 0x404f31
                *(int64_t *)(v226 + 88) = 0;
                *(int64_t *)(v226 + 96) = 0;
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 160);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 48);
                *(int32_t *)(v226 + 28) = 2;
                v147 = v271;
                v139 = 8;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 24: {
                // 0x40488f
                *(int32_t *)(v226 + 28) = 2;
                *(int64_t *)(v226 + 88) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 72) = *(int64_t *)(v229 - 272);
                *(int64_t *)(v226 + 80) = *(int64_t *)(v229 - 160);
                *(int64_t *)(v226 + 96) = (int64_t)*(int32_t *)(v229 - 48);
                v147 = v271;
                v139 = 8;
                v144 = v225 - 12;
                v145 = v229 - 336;
                v140 = v228;
                v135 = 20;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 27: {
                int64_t v299 = *(int64_t *)(v229 - 40); // 0x404831
                int64_t v300 = *(int64_t *)v229; // 0x404835
                *v26 = v268;
                int64_t v301 = *(int64_t *)(v229 - 48); // 0x404841
                char v302 = *(char *)(v229 - 56); // 0x404845
                *v10 = v270;
                int64_t * v303 = (int64_t *)(v226 + 208); // 0x40484e
                *v303 = *v303 + 1;
                *v7 = v226;
                if ((char)function_403570(v226 + 24, v302, v301, v299, v300) == 0) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x404877
                v147 = v271;
                v139 = 10;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffe5;
                v138 = *v7;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 28: {
                // 0x404812
                *(int32_t *)(v226 + 20) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 11;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 29: {
                // 0x4047ea
                *(int32_t *)(v226 + 20) = 1;
                int64_t * v304 = (int64_t *)(v226 + 192); // 0x404800
                *v304 = *v304 + 1;
                v147 = v271;
                v139 = 11;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 30: {
                // 0x4047cb
                v256 = *(int64_t *)v229;
                goto lab_0x4047ce;
            }
            case 31: {
                // 0x4047ab
                *(int32_t *)(v226 + 24) = 0x6270;
                v147 = v271;
                v139 = 12;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 32: {
                // 0x4050f7
                *v26 = v268;
                *v10 = v270;
                *(int32_t *)(v226 + 24) = (int32_t)*(int64_t *)(v229 - 56);
                goto lab_0x404fc9;
            }
            case 33: {
                // 0x404fb7
                *v26 = v268;
                *v10 = v270;
                *(int32_t *)(v226 + 24) = 0x6270;
                goto lab_0x404fc9;
            }
            case 34: {
                int64_t v305 = *(int64_t *)(v229 - 40); // 0x405445
                int64_t v306 = *(int64_t *)v229; // 0x405449
                *v26 = v268;
                int64_t v307 = *(int64_t *)(v229 - 48); // 0x405455
                char v308 = *(char *)(v229 - 56); // 0x405459
                *v10 = v270;
                *v7 = v226;
                if ((char)function_403570(v226 + 24, v308, v307, v305, v306) == 0) {
                    // break -> 0x403f2d
                    break;
                }
                int64_t v309 = *v7; // 0x405474
                int32_t * v310 = (int32_t *)(v309 + 24); // 0x40547b
                int64_t v311 = (int64_t)*v310; // 0x40547b
                int64_t v312 = *(int64_t *)(v229 - 112); // 0x40547f
                int64_t v313 = v312 + v311; // 0x40547f
                *v310 = (int32_t)v313;
                if (v313 >= 0x80000000 || ((v313 ^ v311) & (v313 ^ v312)) < 0) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x4054a0
                v147 = v271;
                v139 = 12;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v309;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 35: {
                // 0x405439
                v256 = (int64_t)(*(int32_t *)v229 + 3600);
                goto lab_0x4047ce;
            }
            case 36: {
                // 0x405415
                *(int32_t *)(v226 + 24) = *(int32_t *)(v229 - 56) + 3600;
                v147 = v271;
                v139 = 12;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 37: {
                // 0x4053ee
                *(int64_t *)(v226 + 8) = 0;
                *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)v229;
                v147 = v271;
                v139 = 13;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 38: {
                // 0x4053c6
                *(int64_t *)(v226 + 8) = 0;
                *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)(v229 - 56);
                v147 = v271;
                v139 = 13;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 39: {
                // 0x405397
                v255 = v229 - 56;
                goto lab_0x40539b;
            }
            case 40: {
                // 0x40589f
                v255 = v229 - 48;
                goto lab_0x40539b;
            }
            case 41: {
                // 0x405874
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 + 8);
                v147 = v271;
                v139 = 14;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 42: {
                int64_t * v314 = (int64_t *)(v229 - 208); // 0x405810
                int64_t v315 = *v314; // 0x405810
                char v316 = *(char *)(v226 + 217); // 0x405817
                if (v315 < 4) {
                    int64_t v317 = *(int64_t *)(v229 - 216); // 0x405c39
                    *v7 = v317;
                    int64_t v318 = v317; // 0x405c47
                    int64_t v319 = v226; // 0x405c47
                    int64_t v320 = v268; // 0x405c47
                    int64_t v321 = v270; // 0x405c47
                    if (v316 != 0) {
                        // 0x405d90
                        *v37 = v226;
                        *v26 = v268;
                        *v10 = v270;
                        char * v322 = dcgettext(NULL, "warning: value %ld has less than 4 digits. Assuming MM/DD/YY[YY]\n", 5); // 0x405dab
                        function_403400((int64_t)v322, *v7, 5, v315, v227, v226);
                        v319 = *v37;
                        v320 = *v26;
                        v321 = *v10;
                        v318 = *v7;
                    }
                    int128_t v323 = __asm_movdqu(*(int128_t *)v229); // 0x405c52
                    *(int64_t *)(v319 + 56) = v318;
                    __asm_movups(*(int128_t *)(v319 + 32), v323);
                    *(int64_t *)(v319 + 64) = *(int64_t *)(v229 - 104);
                    *(int64_t *)(v319 + 48) = *(int64_t *)(v229 + 16);
                    v147 = v271;
                    v139 = 14;
                    v144 = v225 - 10;
                    v145 = v229 - 280;
                    v140 = v228;
                    v135 = 0xffffffa3;
                    v138 = v319;
                    v131 = v320;
                    v132 = v321;
                    v133 = v269;
                    v134 = v267;
                } else {
                    int64_t v324 = v315; // 0x40582b
                    int64_t v325 = v226; // 0x40582b
                    int64_t v326 = v268; // 0x40582b
                    int64_t v327 = v270; // 0x40582b
                    if (v316 != 0) {
                        // 0x405d34
                        *v33 = v226;
                        *v37 = v268;
                        *v26 = v270;
                        *v10 = v315;
                        *v7 = *(int64_t *)(v229 - 216);
                        char * v328 = dcgettext(NULL, "warning: value %ld has %ld digits. Assuming YYYY/MM/DD\n", 5); // 0x405d60
                        int64_t v329 = *v10; // 0x405d65
                        function_403400((int64_t)v328, *v7, v329, v329, v227, v226);
                        v325 = *v33;
                        v326 = *v37;
                        v327 = *v26;
                        v324 = *v314;
                    }
                    int128_t v330 = __asm_movdqu(*(int128_t *)(v229 - 224)); // 0x405838
                    *(int64_t *)(v325 + 48) = v324;
                    __asm_movups(*(int128_t *)(v325 + 32), v330);
                    *(int64_t *)(v325 + 56) = *(int64_t *)(v229 - 104);
                    *(int64_t *)(v325 + 64) = *(int64_t *)(v229 + 8);
                    v147 = v330;
                    v139 = 14;
                    v144 = v225 - 10;
                    v145 = v229 - 280;
                    v140 = v228;
                    v135 = 0xffffffa3;
                    v138 = v325;
                    v131 = v326;
                    v132 = v327;
                    v133 = v269;
                    v134 = v267;
                }
                goto lab_0x404540;
            }
            case 43: {
                // 0x4057d0
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                int64_t v331 = *(int64_t *)(v229 + 8); // 0x4057ea
                *(int64_t *)(v226 + 40) = -v331;
                if (v331 == -0x8000000000000000) {
                    // break -> 0x403f2d
                    break;
                }
                goto lab_0x4056d3;
            }
            case 44: {
                // 0x405784
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 112);
                int64_t v332 = *(int64_t *)(v229 - 48); // 0x405796
                *(int64_t *)(v226 + 64) = -v332;
                if (v332 == -0x8000000000000000) {
                    // break -> 0x403f2d
                    break;
                }
                int64_t v333 = *(int64_t *)(v229 + 8); // 0x4057ad
                *(int64_t *)(v226 + 40) = -v333;
                if (v333 == -0x8000000000000000) {
                    // break -> 0x403f2d
                    break;
                }
                goto lab_0x4056d3;
            }
            case 45: {
                // 0x40575c
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 + 8);
                v147 = v271;
                v139 = 14;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 46: {
                int128_t v334 = __asm_movdqu(*(int128_t *)v229); // 0x405724
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 168);
                __asm_movups(*(int128_t *)(v226 + 32), v334);
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                *(int64_t *)(v226 + 48) = *(int64_t *)(v229 + 16);
                v147 = v334;
                v139 = 14;
                v144 = v225 - 8;
                v145 = v229 - 224;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 47: {
                // 0x4056f6
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 48);
                *(int64_t *)(v226 + 56) = *(int64_t *)v229;
                v147 = v271;
                v139 = 14;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 48: {
                int128_t v335 = __asm_movdqu(*(int128_t *)v229); // 0x4056be
                *(int64_t *)(v226 + 64) = *(int64_t *)(v229 - 104);
                __asm_movups(*(int128_t *)(v226 + 32), v335);
                *(int64_t *)(v226 + 56) = *(int64_t *)(v229 - 56);
                goto lab_0x4056d3;
            }
            case 50: {
                int128_t v336 = __asm_movdqu(*(int128_t *)(v229 - 112)); // 0x405659
                *(int64_t *)(v226 + 48) = *(int64_t *)(v229 - 96);
                int64_t v337 = *(int64_t *)(v229 - 48); // 0x40566c
                __asm_movups(*(int128_t *)(v226 + 32), v336);
                *(int64_t *)(v226 + 56) = -v337;
                if (v337 == -0x8000000000000000) {
                    // break -> 0x403f2d
                    break;
                }
                int64_t v338 = *(int64_t *)(v229 + 8); // 0x405688
                *(int64_t *)(v226 + 64) = -v338;
                if (v338 == -0x8000000000000000) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x40569f
                v147 = v336;
                v139 = 15;
                v144 = v225 - 6;
                v145 = v229 - 168;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 51: {
                int64_t * v339 = (int64_t *)(v226 + 144); // 0x40550e
                int32_t v340 = *(int32_t *)(v229 - 8); // 0x405525
                *v33 = *v339;
                int64_t * v341 = (int64_t *)(v226 + 128); // 0x40552e
                *v7 = *(int64_t *)(v229 - 56);
                *v10 = *(int64_t *)(v229 - 48);
                int64_t * v342 = (int64_t *)(v226 + 136); // 0x40553f
                int64_t v343 = *v342; // 0x40553f
                *v34 = *v341;
                int64_t * v344 = (int64_t *)(v226 + 120); // 0x40554b
                *v26 = *(int64_t *)(v229 - 40);
                int64_t v345 = *(int64_t *)(v229 - 16); // 0x405554
                *v36 = *v344;
                int64_t * v346 = (int64_t *)(v226 + 112); // 0x40555d
                *v37 = *(int64_t *)(v229 - 32);
                int64_t v347 = *(int64_t *)(v229 - 24); // 0x405566
                *v38 = *v346;
                int64_t * v348 = (int64_t *)(v226 + 104); // 0x40556f
                int32_t * v349 = (int32_t *)(v226 + 152); // 0x405573
                int32_t v350 = *v349; // 0x405573
                *v39 = *v348;
                int64_t v351 = *v33;
                char v352; // 0x403db0
                if (*(int32_t *)v229 < 0) {
                    int32_t v353 = v350 - v340; // 0x405c8f
                    *v349 = v353;
                    int64_t v354 = v351 - v345; // 0x405c9f
                    *v339 = v354;
                    int64_t v355 = v343 - v347; // 0x405cb2
                    *v342 = v355;
                    int64_t v356 = *v34; // 0x405cc1
                    int64_t v357 = *v37; // 0x405cc6
                    int64_t v358 = v356 - v357; // 0x405cc6
                    *v341 = v358;
                    int64_t v359 = *v36; // 0x405cd8
                    int64_t v360 = *v26; // 0x405cdd
                    int64_t v361 = v359 - v360; // 0x405cdd
                    *v344 = v361;
                    int64_t v362 = *v38; // 0x405cea
                    *v26 = (int64_t)(((v361 ^ v359) & (v360 ^ v359)) < 0);
                    int64_t v363 = *v10; // 0x405cf6
                    int64_t v364 = v362 - v363; // 0x405cf6
                    *v346 = v364;
                    int64_t v365 = *v39; // 0x405d03
                    *v10 = (int64_t)(((v364 ^ v362) & (v363 ^ v362)) < 0);
                    int64_t v366 = *v7; // 0x405d0f
                    int64_t v367 = v365 - v366; // 0x405d0f
                    *v348 = v367;
                    char v368 = *(char *)v25; // 0x405d25
                    char v369 = *v31; // 0x405d29
                    v352 = v368 | (char)(((v355 ^ v343) & (v347 ^ v343)) < 0 | ((v353 ^ v350) & (v350 ^ v340)) < 0 | ((v354 ^ v351) & (v351 ^ v345)) < 0 | ((v358 ^ v356) & (v357 ^ v356)) < 0) | v369 | (char)(((v367 ^ v365) & (v366 ^ v365)) < 0);
                } else {
                    int32_t v370 = v350 + v340; // 0x40558e
                    *v349 = v370;
                    int64_t v371 = v351 + v345; // 0x40559e
                    int64_t v372 = v347 + v343; // 0x4055aa
                    *v339 = v371;
                    *v342 = v372;
                    int64_t v373 = *v34; // 0x4055c1
                    int64_t v374 = *v37; // 0x4055c6
                    int64_t v375 = v374 + v373; // 0x4055c6
                    *v33 = (int64_t)(((v372 ^ v343) & (v372 ^ v347)) < 0);
                    *v341 = v375;
                    int64_t v376 = *v36; // 0x4055dd
                    int64_t v377 = *v26; // 0x4055e2
                    int64_t v378 = v377 + v376; // 0x4055e2
                    *v344 = v378;
                    int64_t v379 = *v38; // 0x4055f1
                    int64_t v380 = *v10; // 0x4055f6
                    int64_t v381 = v380 + v379; // 0x4055f6
                    *v346 = v381;
                    int64_t v382 = *v39; // 0x405602
                    *v10 = (int64_t)(((v381 ^ v379) & (v381 ^ v380)) < 0);
                    int64_t v383 = *v7; // 0x40560e
                    int64_t v384 = v383 + v382; // 0x40560e
                    *v348 = v384;
                    char v385 = *(char *)v32; // 0x40561f
                    char v386 = *v31; // 0x405627
                    v352 = v385 | (char)(((v370 ^ v350) & (v370 ^ v340)) < 0 | ((v371 ^ v351) & (v371 ^ v345)) < 0 | ((v375 ^ v373) & (v375 ^ v374)) < 0 | ((v378 ^ v376) & (v378 ^ v377)) < 0) | v386 | (char)(((v384 ^ v382) & (v384 ^ v383)) < 0);
                }
                // 0x40562d
                if (v352 != 0) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x405635
                *(char *)(v226 + 161) = 1;
                v147 = v271;
                v139 = 16;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 52: {
                goto lab_0x4045f8;
            }
            case 53: {
                goto lab_0x4045f8;
            }
            case 54: {
                // 0x404e2c
                *v30 = 0;
                v254 = v229 - 56;
                goto lab_0x404e3b;
            }
            case 55: {
                // 0x4054c5
                *v30 = 0;
                v254 = v229 - 48;
                goto lab_0x404e3b;
            }
            case 56: {
                // 0x404e53
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 0;
                v133 = 0;
                v134 = 1;
                goto lab_0x404540;
            }
            case 57: {
                // 0x404bbe
                *v30 = 0;
                v245 = 17;
                v241 = 0xffffffa3;
                v231 = *(int64_t *)(v229 - 56);
                goto lab_0x404b96;
            }
            case 58: {
                // 0x404b74
                *v30 = 0;
                v245 = 17;
                v241 = 0xffffffa3;
                v231 = *(int64_t *)(v229 - 48);
                goto lab_0x404b96;
            }
            case 59: {
                // 0x404b28
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 1;
                v132 = 0;
                v133 = 0;
                v134 = 0;
                goto lab_0x404540;
            }
            case 60: {
                int64_t v387 = *(int64_t *)v229; // 0x404aef
                int128_t v388 = (int128_t)v387 * (int128_t)*(int64_t *)(v229 - 56); // 0x404aef
                int128_t v389 = __asm_pxor(v271, v271); // 0x404af3
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v389);
                *v21 = (int128_t)__asm_movaps(v389);
                *v23 = (int128_t)__asm_movaps(v389);
                v273 = v389;
                v234 = v388;
                if (v388 > 0x7fffffffffffffff) {
                    // break -> 0x403f2d
                    break;
                }
                goto lab_0x404ad6;
            }
            case 61: {
                int64_t v390 = *(int64_t *)v229; // 0x404aa1
                int128_t v391 = (int128_t)v390 * (int128_t)*(int64_t *)(v229 - 48); // 0x404aa1
                int128_t v392 = __asm_pxor(v271, v271); // 0x404aa5
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v392);
                *v21 = (int128_t)__asm_movaps(v392);
                *v23 = (int128_t)__asm_movaps(v392);
                v273 = v392;
                v234 = v391;
                if (v391 > 0x7fffffffffffffff) {
                    // break -> 0x403f2d
                    break;
                }
                goto lab_0x404ad6;
            }
            case 62: {
                // 0x404a54
                *v30 = 0;
                v272 = v271;
                v244 = 17;
                v246 = v225 - 2;
                v250 = v229 - 56;
                v240 = 0xffffffa3;
                v233 = *(int64_t *)v229;
                goto lab_0x404a75;
            }
            case 63: {
                // 0x404a30
                *v30 = 0;
                v243 = 17;
                v239 = 0xffffffa3;
                v232 = *(int64_t *)(v229 - 56);
                goto lab_0x404a08;
            }
            case 64: {
                // 0x4049e6
                *v30 = 0;
                v243 = 17;
                v239 = 0xffffffa3;
                v232 = *(int64_t *)(v229 - 48);
                goto lab_0x404a08;
            }
            case 65: {
                // 0x40499a
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 0;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 1;
                v133 = 0;
                v134 = 0;
                goto lab_0x404540;
            }
            case 66: {
                // 0x404989
                *v30 = 0;
                v264 = v229 - 56;
                goto lab_0x40494f;
            }
            case 67: {
                // 0x404940
                *v30 = 0;
                v264 = v229 - 48;
                goto lab_0x40494f;
            }
            case 68: {
                // 0x4048f7
                *v30 = 0;
                *v24 = 0;
                *v9 = 0;
                *v5 = 1;
                v147 = v271;
                v139 = 17;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = 0;
                v133 = 0;
                v134 = 0;
                goto lab_0x404540;
            }
            case 69: {
                // 0x404e9f
                *v30 = 0;
                v262 = v229 - 56;
                goto lab_0x404786;
            }
            case 70: {
                // 0x404777
                *v30 = 0;
                v262 = v229 - 48;
                goto lab_0x404786;
            }
            case 71: {
                goto lab_0x4046d9;
            }
            case 72: {
                goto lab_0x4046d9;
            }
            case 73: {
                // 0x404ddc
                *v30 = 0;
                *v24 = 0;
                *v9 = 1;
                v242 = 17;
                v248 = v225 - 2;
                v249 = v229 - 56;
                v236 = 0xffffffa3;
                goto lab_0x404707;
            }
            case 75: {
                // 0x404d92
                *v30 = 0;
                v235 = *(int64_t *)(v229 - 48);
                v258 = 60;
                v265 = 18;
                goto lab_0x404db4;
            }
            case 76: {
                // 0x404d6b
                *v30 = 0;
                v245 = 18;
                v241 = 60;
                v231 = *(int64_t *)(v229 - 48);
                goto lab_0x404b96;
            }
            case 77: {
                int64_t v393 = *(int64_t *)v229; // 0x404d1e
                int128_t v394 = (int128_t)v393 * (int128_t)*(int64_t *)(v229 - 48); // 0x404d1e
                int128_t v395 = __asm_pxor(v271, v271); // 0x404d22
                *v19 = 0;
                *v17 = (int128_t)__asm_movaps(v395);
                *v21 = (int128_t)__asm_movaps(v395);
                *v23 = (int128_t)__asm_movaps(v395);
                if (v394 > 0x7fffffffffffffff) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x404d53
                v272 = v395;
                v244 = 18;
                v246 = v225 - 4;
                v250 = v229 - 112;
                v240 = 60;
                v233 = v394;
                goto lab_0x404a75;
            }
            case 78: {
                // 0x404cf3
                *v30 = 0;
                v243 = 18;
                v239 = 60;
                v232 = *(int64_t *)(v229 - 48);
                goto lab_0x404a08;
            }
            case 79: {
                // 0x404f05
                *v30 = 0;
                v261 = *(int64_t *)(v229 - 48);
                v238 = 60;
                v263 = 18;
                goto lab_0x404967;
            }
            case 80: {
                // 0x404ed9
                *v30 = 0;
                v260 = *(int64_t *)(v229 - 48);
                v237 = 60;
                v266 = 18;
                goto lab_0x40479e;
            }
            case 81: {
                // 0x404eb3
                *v30 = 0;
                v272 = v271;
                v244 = 19;
                v246 = v225 - 2;
                v250 = v229 - 56;
                v240 = 0xffffffa3;
                v233 = *(int64_t *)v229;
                goto lab_0x404a75;
            }
            case 85: {
                // 0x4048d8
                v147 = v271;
                v139 = 21;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v226;
                v131 = 0;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x404540;
            }
            case 87: {
                // 0x405a05
                v147 = v271;
                v139 = 22;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa4;
                v138 = v226;
                v131 = 0;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x404540;
            }
            case 88: {
                // 0x4059b7
                *v26 = v268;
                *v10 = v270;
                *v27 = *(int64_t *)(v229 + 16);
                *v28 = *(int64_t *)(v229 + 8);
                *v29 = *(int64_t *)v229;
                *v7 = v226;
                function_403110(v226, (int64_t)&g81, (int64_t)&g81, (int64_t)&g81);
                v147 = v271;
                v139 = 23;
                v144 = v225 - 2;
                v145 = v229 - 56;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = *v7;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 89: {
                // 0x4058a8
                *v26 = v268;
                *v10 = v270;
                *v27 = *(int64_t *)(v229 - 40);
                *v28 = *(int64_t *)(v229 - 48);
                *v29 = *(int64_t *)(v229 - 56);
                *v7 = v226;
                function_403110(v226, (int64_t)&g81, (int64_t)&g81, (int64_t)&g81);
                int32_t v396 = *(int32_t *)(v229 + 48); // 0x4058d0
                int64_t v397 = *v7; // 0x4058d6
                int32_t * v398 = (int32_t *)(v397 + 152); // 0x4058db
                int32_t v399 = *v398; // 0x4058db
                int32_t v400 = v399 + v396; // 0x4058db
                *v398 = v400;
                int64_t * v401 = (int64_t *)(v397 + 144); // 0x4058ed
                int64_t v402 = *v401; // 0x4058ed
                int64_t v403 = *(int64_t *)(v229 + 40); // 0x4058f4
                int64_t v404 = v403 + v402; // 0x4058f4
                *v401 = v404;
                int64_t * v405 = (int64_t *)(v397 + 136); // 0x405907
                int64_t v406 = *v405; // 0x405907
                int64_t v407 = *(int64_t *)(v229 + 32); // 0x405911
                int64_t v408 = v407 + v406; // 0x405911
                *v405 = v408;
                int64_t * v409 = (int64_t *)(v397 + 128); // 0x405922
                int64_t v410 = *v409; // 0x405922
                int64_t v411 = *(int64_t *)(v229 + 24); // 0x405929
                int64_t v412 = v411 + v410; // 0x405929
                *v409 = v412;
                int64_t * v413 = (int64_t *)(v397 + 120); // 0x40593b
                int64_t v414 = *v413; // 0x40593b
                int64_t v415 = *(int64_t *)(v229 + 16); // 0x40593f
                int64_t v416 = v415 + v414; // 0x40593f
                *v413 = v416;
                int64_t * v417 = (int64_t *)(v397 + 112); // 0x40594e
                int64_t v418 = *v417; // 0x40594e
                int64_t v419 = *(int64_t *)(v229 + 8); // 0x405952
                int64_t v420 = v419 + v418; // 0x405952
                *v417 = v420;
                int64_t * v421 = (int64_t *)(v397 + 104); // 0x405960
                int64_t v422 = *v421; // 0x405960
                int64_t v423 = *(int64_t *)v229; // 0x405964
                int64_t v424 = v423 + v422; // 0x405964
                *v421 = v424;
                if (((v400 ^ v396) & (v400 ^ v399)) < 0 | ((v404 ^ v402) & (v404 ^ v403)) < 0 | ((v408 ^ v406) & (v408 ^ v407)) < 0 | ((v412 ^ v410) & (v412 ^ v411)) < 0 || ((v416 ^ v414) & (v416 ^ v415)) < 0 || ((v420 ^ v418) & (v420 ^ v419)) < 0) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x405984
                if (((v424 ^ v422) & (v424 ^ v423)) < 0) {
                    // break -> 0x403f2d
                    break;
                }
                // 0x40598d
                *(char *)(v397 + 161) = 1;
                v147 = v271;
                v139 = 24;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 0xffffffa3;
                v138 = v397;
                v131 = *v26;
                v132 = *v10;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
            case 90: {
                // 0x4054d9
                v147 = v271;
                v139 = 25;
                v144 = v225 - 2 * v277;
                v145 = -56 * v277 + v229;
                v140 = v228;
                v135 = 43;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = -1;
                goto lab_0x404540;
            }
            case 91: {
                // 0x404e10
                v147 = v271;
                v139 = 25;
                v144 = v225 - 4;
                v145 = v229 - 112;
                v140 = v228;
                v135 = 43;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = *(int64_t *)(v229 + 8);
                goto lab_0x404540;
            }
            default: {
                unsigned char v425 = *(char *)(v276 + (int64_t)&g12); // 0x405f97
                int64_t v426 = (int64_t)v425 + 0xffffffe4; // 0x405fa1
                char v427 = *(char *)((0x100000000 * v426 >> 32) + (int64_t)&g16); // 0x405fa7
                v147 = v271;
                v139 = v426 & 0xffffffff;
                v144 = v225 - 2 * v277;
                v145 = -56 * v277 + v229;
                v140 = v228;
                v135 = v427;
                v138 = v226;
                v131 = v268;
                v132 = v270;
                v133 = v269;
                v134 = v267;
                goto lab_0x404540;
            }
        }
    } else {
        // 0x403f12
        if (*v14 == 3) {
            int32_t v428 = v228; // 0x403f19
            result = 1;
            if (v428 == 0 && v428 >= 0 != v428 != 0) {
                // break -> 0x403f2d
                goto lab_0x403f2d_8;
            }
        }
        int64_t v429 = v229; // 0x403db0
        int64_t v430 = v227; // 0x403db0
        int64_t v431 = v225; // 0x403f5d
        unsigned char v432; // 0x403f40
        while (true) {
            char v433 = *(char *)(v430 + (int64_t)&g18); // 0x403f69
            if (v433 != -93) {
                if ((int32_t)v433 < 112) {
                    int64_t v434 = v433; // 0x403f69
                    char v435 = *(char *)(v434 + 0x4135e1); // 0x403f80
                    if (v435 == 1) {
                        // 0x403f89
                        v432 = *(char *)(v434 + 0x413661);
                        if (v432 != 0) {
                            // break -> 0x404420
                            break;
                        }
                    }
                }
            }
            // 0x403f58
            result = 1;
            if (v431 == v4) {
                // break (via goto) -> 0x403f2d
                goto lab_0x403f2d_8;
            }
            // 0x403f5d
            v431 -= 2;
            v429 -= 56;
            v430 = (int64_t)*(int16_t *)v431;
        }
        int64_t v436 = *v12; // 0x404420
        int64_t v437; // 0x403db0
        int64_t v438 = v437 + 56; // 0x404425
        *v14 = 3;
        int64_t * v439; // 0x403db0
        *v439 = v436;
        int64_t v440 = *v13; // 0x40443c
        int128_t * v441; // 0x403db0
        int128_t v442 = *v441; // 0x404441
        int128_t v443 = __asm_movdqa(v442); // 0x404441
        int64_t * v444; // 0x403db0
        *v444 = v440;
        int64_t * v445; // 0x403db0
        int64_t v446 = *v445; // 0x404452
        int128_t v447 = *(int128_t *)v438; // 0x40445a
        __asm_movups(v447, v443);
        int128_t * v448; // 0x403db0
        int128_t v449 = *v448; // 0x40445d
        int128_t v450 = __asm_movdqa(v449); // 0x40445d
        *(int64_t *)(v437 + 104) = v446;
        int128_t v451 = *(int128_t *)(v437 + 72); // 0x40446a
        __asm_movups(v451, v450);
        int128_t * v452; // 0x403db0
        int128_t v453 = *v452; // 0x40446e
        int128_t v454 = __asm_movdqa(v453); // 0x40446e
        int128_t v455 = *(int128_t *)(v437 + 88); // 0x404477
        __asm_movups(v455, v454);
        v146 = v454;
        int64_t v456; // 0x403db0
        v143 = v456;
        v142 = v438;
        int64_t v457; // 0x403db0
        v141 = v457;
        v136 = v432;
        v137 = v226;
        goto lab_0x403ec6;
    }
  lab_0x4042c8:;
    unsigned char v458 = *(char *)((0x100000000 * v63 >> 32) + (int64_t)&g19); // 0x4042cb
    v163 = v458;
    v164 = v67;
    v165 = v63;
    v166 = v58;
    v167 = v61;
    v168 = v55;
    goto lab_0x4042d2_2;
  lab_0x405247:
    // 0x405247
    *v26 = v226;
    *v10 = v268;
    *v7 = v270;
    char * v459 = dcgettext(NULL, (char *)v252, 5); // 0x405249
    int64_t v460 = *v26; // 0x40524e
    int64_t v461 = v229 - 56; // 0x405253
    int64_t v462 = v225 - 2; // 0x405257
    int64_t v463 = *v7; // 0x405269
    int64_t v464 = *v10; // 0x405276
    v147 = v271;
    v139 = 4;
    v144 = v462;
    v145 = v461;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v460;
    v131 = v464;
    v132 = v463;
    v133 = v269;
    v134 = v267;
    char * v465; // 0x403db0
    int64_t v466; // 0x403db0
    if (*(char *)(v460 + 217) == 0) {
        goto lab_0x404540;
    } else {
        // 0x405281
        *v40 = -93;
        *v34 = v461;
        *v41 = 4;
        *v37 = v464;
        *v26 = v462;
        *v10 = v463;
        *v7 = v460;
        v466 = v460;
        v465 = v459;
        goto lab_0x4050ed;
    }
  lab_0x4045f8:;
    int32_t v467 = *(int32_t *)(v229 + 48); // 0x4045f8
    int32_t * v468 = (int32_t *)(v226 + 152); // 0x4045fe
    int32_t v469 = *v468; // 0x4045fe
    int32_t v470 = v469 + v467; // 0x4045fe
    *v468 = v470;
    int64_t * v471 = (int64_t *)(v226 + 144); // 0x404610
    int64_t v472 = *v471; // 0x404610
    int64_t v473 = *(int64_t *)(v229 + 40); // 0x404617
    int64_t v474 = v473 + v472; // 0x404617
    *v471 = v474;
    int64_t * v475 = (int64_t *)(v226 + 136); // 0x40462a
    int64_t v476 = *v475; // 0x40462a
    int64_t v477 = *(int64_t *)(v229 + 32); // 0x404634
    int64_t v478 = v477 + v476; // 0x404634
    *v475 = v478;
    int64_t * v479 = (int64_t *)(v226 + 128); // 0x404645
    int64_t v480 = *v479; // 0x404645
    int64_t v481 = *(int64_t *)(v229 + 24); // 0x40464c
    int64_t v482 = v481 + v480; // 0x40464c
    *v479 = v482;
    int64_t * v483 = (int64_t *)(v226 + 120); // 0x40465d
    int64_t v484 = *v483; // 0x40465d
    int64_t v485 = *(int64_t *)(v229 + 16); // 0x404661
    int64_t v486 = v485 + v484; // 0x404661
    *v483 = v486;
    int64_t * v487 = (int64_t *)(v226 + 112); // 0x40466c
    int64_t v488 = *v487; // 0x40466c
    *v7 = (int64_t)(((v486 ^ v484) & (v486 ^ v485)) < 0);
    int64_t v489 = *(int64_t *)(v229 + 8); // 0x404677
    int64_t v490 = v489 + v488; // 0x404677
    *v487 = v490;
    *v10 = (int64_t)(((v490 ^ v488) & (v490 ^ v489)) < 0);
    int64_t * v491 = (int64_t *)(v226 + 104); // 0x404687
    int64_t v492 = *v491; // 0x404687
    int64_t v493 = *(int64_t *)v229; // 0x40468d
    int64_t v494 = v493 + v492; // 0x40468d
    *v491 = v494;
    char v495 = *v31; // 0x40469c
    char v496 = *(char *)v6; // 0x4046a3
    result = 1;
    if ((v495 || (char)(((v470 ^ v467) & (v470 ^ v469)) < 0 | ((v474 ^ v472) & (v474 ^ v473)) < 0 | ((v478 ^ v476) & (v478 ^ v477)) < 0 || ((v482 ^ v480) & (v482 ^ v481)) < 0) || v496) != 0) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    // 0x4046b0
    result = 1;
    if (((v494 ^ v492) & (v494 ^ v493)) < 0) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    // 0x4046b9
    *(char *)(v226 + 161) = 1;
    v147 = v271;
    v139 = 16;
    v144 = v225 - 2;
    v145 = v229 - 56;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x404540;
  lab_0x4046d9:
    // 0x4046d9
    *v30 = 0;
    *v9 = *(int64_t *)(v229 - 56);
    *v24 = *(int32_t *)(v229 - 48);
    v242 = 17;
    v248 = v225 - 4;
    v249 = v229 - 112;
    v236 = 0xffffffa3;
    goto lab_0x404707;
  lab_0x403ec6:;
    int64_t v551 = v143 + 2; // 0x403ec6
    *(int16_t *)v551 = (int16_t)v136;
    result = 2;
    int64_t v552; // bp-1314, 0x403db0
    if (v551 >= (int64_t)&v552) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    // 0x403edd
    result = 0;
    if ((int32_t)v136 == 12) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    char v553 = *(char *)(v136 + (int64_t)&g18); // 0x403eea
    v72 = v146;
    v43 = v142;
    v44 = v141;
    v45 = v136;
    v46 = v137;
    v47 = v551;
    v48 = v553;
    v125 = v146;
    v126 = v142;
    v127 = v141;
    v128 = v136;
    v129 = v137;
    v130 = v551;
    if (v553 != -93) {
        goto lab_0x403e0c;
    } else {
        goto lab_0x403f00;
    }
  lab_0x405b40:;
    int64_t v554 = v191;
    v193 = v195;
    v189 = v554;
    int64_t * v549; // 0x403db0
    if (v195 != 0) {
        goto lab_0x4043b7;
    } else {
        // 0x405b48
        *v71 = v554;
        *v549 = v177;
        *v12 = 0;
        v163 = 21;
        v164 = v65;
        v165 = 276;
        v166 = v56;
        v167 = v59;
        v168 = v53;
        goto lab_0x4042d2_2;
    }
  lab_0x404397:;
    int64_t v555 = v188 + 1; // 0x404397
    char v556 = *(char *)v555; // 0x40439b
    while (v556 == 57 || (int32_t)v556 < 57) {
        // 0x404397
        v555++;
        v556 = *(char *)v555;
    }
    // 0x4043a7
    v193 = v192;
    v189 = v555;
    v194 = v192;
    v190 = v555;
    if ((int32_t)v173 >= 0 || (int32_t)v192 == 0) {
        goto lab_0x405b11;
    } else {
        goto lab_0x4043b7;
    }
  lab_0x405b11:;
    int64_t v557 = v190;
    int64_t v558 = 0x100000000 * v194 >> 32; // 0x405b14
    *v71 = v557;
    *v12 = v558;
    *v549 = v177;
    v163 = v558 + (v173 == 0 ? 23 : 22) + (v558 ^ 0xffffffff) & 0xffffffff;
    v164 = v65;
    v165 = v557 + (v173 == 0 ? 278 : 277) + (v557 ^ 0xffffffff) & 0xffffffff;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    goto lab_0x4042d2_2;
  lab_0x404540:;
    int64_t v497 = v138;
    int64_t v498 = v140;
    int64_t v499 = v144;
    int64_t v500 = v139;
    int128_t v501 = v147;
    *(int64_t *)v16 = v134;
    int64_t v502 = v145 + 56; // 0x404551
    *(int64_t *)(v2 + 280) = v131;
    int128_t v503 = __asm_movdqa(*v17); // 0x40455d
    *(int64_t *)v22 = *v5;
    *(int64_t *)v20 = v133;
    *(int64_t *)(v2 + 296) = v132;
    int128_t v504 = __asm_movdqa(*v21); // 0x404583
    *(int64_t *)(v2 + 312) = *v9;
    int128_t v505 = __asm_movdqa(*v23); // 0x404594
    *(int32_t *)v18 = *v24;
    __asm_movups(*(int128_t *)v502, v503);
    *(int64_t *)(v145 + 104) = *v19;
    __asm_movups(*(int128_t *)(v145 + 72), v504);
    __asm_movups(*(int128_t *)(v145 + 88), v505);
    int16_t v506 = *(int16_t *)v499; // 0x4045bc
    int64_t v507 = v135 + (int64_t)v506; // 0x4045bf
    if ((int32_t)v507 < 113) {
        int64_t v508 = 0x100000000 * v507 >> 32; // 0x4045ca
        char v509 = *(char *)(v508 + (int64_t)&g13); // 0x4045cd
        if (v506 == (int16_t)v509) {
            // 0x405a28
            v146 = v501;
            v143 = v499;
            v142 = v502;
            v141 = v498;
            v136 = (int64_t)*(char *)(v508 + (int64_t)&g14);
            v137 = v497;
            goto lab_0x403ec6;
        } else {
            goto lab_0x4045df;
        }
    } else {
        goto lab_0x4045df;
    }
  lab_0x404c29:;
    int64_t v510 = v257;
    int64_t v511 = v251;
    int64_t v512 = v247;
    int128_t v513 = v274;
    int64_t v514 = *v7; // 0x404c29
    int64_t v515 = *v26; // 0x404c33
    v147 = v513;
    v139 = v510;
    v144 = v512;
    v145 = v511;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v514;
    v131 = v515;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    if (*(char *)(v514 + 217) == 0) {
        goto lab_0x404540;
    } else {
        // 0x404c46
        *v40 = -93;
        *v34 = v511;
        *v41 = (int32_t)v510;
        *v37 = v515;
        *v26 = v512;
        function_403a10((int64_t)v259, v514);
        v275 = v513;
        goto lab_0x404c66;
    }
  lab_0x404cae:
    // 0x404cae
    v274 = v271;
    v247 = v225 - 2;
    v251 = v229 - 56;
    v259 = dcgettext(NULL, (char *)v253, 5);
    v257 = 4;
    goto lab_0x404c29;
  lab_0x4047ce:
    // 0x4047ce
    *(int32_t *)(v226 + 24) = (int32_t)v256;
    v147 = v271;
    v139 = 12;
    v144 = v225 - 2;
    v145 = v229 - 56;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x404540;
  lab_0x404fc9:;
    int32_t v516 = *(int32_t *)(v229 + 48); // 0x404fc9
    int32_t * v517 = (int32_t *)(v226 + 152); // 0x404fcf
    int32_t v518 = *v517; // 0x404fcf
    int32_t v519 = v518 + v516; // 0x404fcf
    *v517 = v519;
    int64_t * v520 = (int64_t *)(v226 + 144); // 0x404fe1
    int64_t v521 = *v520; // 0x404fe1
    int64_t v522 = *(int64_t *)(v229 + 40); // 0x404fe8
    int64_t v523 = v522 + v521; // 0x404fe8
    *v520 = v523;
    int64_t * v524 = (int64_t *)(v226 + 136); // 0x404ffb
    int64_t v525 = *v524; // 0x404ffb
    int64_t v526 = *(int64_t *)(v229 + 32); // 0x405005
    int64_t v527 = v526 + v525; // 0x405005
    *v524 = v527;
    int64_t * v528 = (int64_t *)(v226 + 128); // 0x405016
    int64_t v529 = *v528; // 0x405016
    int64_t v530 = *(int64_t *)(v229 + 24); // 0x40501d
    int64_t v531 = v530 + v529; // 0x40501d
    *v528 = v531;
    int64_t * v532 = (int64_t *)(v226 + 120); // 0x40502f
    int64_t v533 = *v532; // 0x40502f
    int64_t v534 = *(int64_t *)(v229 + 16); // 0x405033
    int64_t v535 = v534 + v533; // 0x405033
    *v532 = v535;
    int64_t * v536 = (int64_t *)(v226 + 112); // 0x405042
    int64_t v537 = *v536; // 0x405042
    int64_t v538 = *(int64_t *)(v229 + 8); // 0x405046
    int64_t v539 = v538 + v537; // 0x405046
    *v536 = v539;
    int64_t * v540 = (int64_t *)(v226 + 104); // 0x405054
    int64_t v541 = *v540; // 0x405054
    int64_t v542 = *(int64_t *)v229; // 0x405058
    int64_t v543 = v542 + v541; // 0x405058
    *v540 = v543;
    result = 1;
    if (((v519 ^ v516) & (v519 ^ v518)) < 0 | ((v523 ^ v521) & (v523 ^ v522)) < 0 | ((v527 ^ v525) & (v527 ^ v526)) < 0 | ((v531 ^ v529) & (v531 ^ v530)) < 0 || ((v535 ^ v533) & (v535 ^ v534)) < 0 || ((v539 ^ v537) & (v539 ^ v538)) < 0) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    // 0x405078
    result = 1;
    if (((v543 ^ v541) & (v543 ^ v542)) < 0) {
        // break -> 0x403f2d
        goto lab_0x403f2d_8;
    }
    // 0x405081
    *(char *)(v226 + 161) = 1;
    *v7 = v226;
    char * v544 = dcgettext(NULL, "relative", 5); // 0x40509a
    int64_t v545 = *v7; // 0x40509f
    int64_t v546 = v225 - 4; // 0x4050a4
    int64_t v547 = v229 - 112; // 0x4050a8
    int64_t v548 = *v26; // 0x4050c7
    v147 = v271;
    v139 = 12;
    v144 = v546;
    v145 = v547;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v545;
    v131 = v548;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    if (*(char *)(v545 + 217) == 0) {
        goto lab_0x404540;
    } else {
        // 0x4050d2
        *v40 = -93;
        *v34 = v547;
        *v41 = 12;
        *v37 = v548;
        *v26 = v546;
        v466 = v545;
        v465 = v544;
        goto lab_0x4050ed;
    }
  lab_0x40539b:
    // 0x40539b
    *(int64_t *)(v226 + 8) = *(int64_t *)v255;
    *(char *)(v226 + 224) = 1;
    *(int32_t *)(v226 + 16) = (int32_t)*(int64_t *)v229;
    v147 = v271;
    v139 = 13;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x404540;
  lab_0x4056d3:
    // 0x4056d3
    *(int64_t *)(v226 + 48) = *(int64_t *)(v229 + 16);
    v147 = v271;
    v139 = 14;
    v144 = v225 - 6;
    v145 = v229 - 168;
    v140 = v228;
    v135 = 0xffffffa3;
    v138 = v226;
    v131 = v268;
    v132 = v270;
    v133 = v269;
    v134 = v267;
    goto lab_0x404540;
  lab_0x404e3b:
    // 0x404e3b
    v235 = *(int64_t *)v254;
    v258 = 0xffffffa3;
    v265 = 17;
    goto lab_0x404db4;
  lab_0x404b96:
    // 0x404b96
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v245;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v241;
    v138 = v226;
    v131 = v231;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x404540;
  lab_0x404ad6:
    // 0x404ad6
    v272 = v273;
    v244 = 17;
    v246 = v225 - 4;
    v250 = v229 - 112;
    v240 = 0xffffffa3;
    v233 = v234;
    goto lab_0x404a75;
  lab_0x404a75:
    // 0x404a75
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v272;
    v139 = v244;
    v144 = v246;
    v145 = v250;
    v140 = v228;
    v135 = v240;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = v233;
    v134 = 0;
    goto lab_0x404540;
  lab_0x404a08:
    // 0x404a08
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v243;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v239;
    v138 = v226;
    v131 = 0;
    v132 = v232;
    v133 = 0;
    v134 = 0;
    goto lab_0x404540;
  lab_0x40494f:
    // 0x40494f
    v261 = *(int64_t *)v264;
    v238 = 0xffffffa3;
    v263 = 17;
    goto lab_0x404967;
  lab_0x404786:
    // 0x404786
    v260 = *(int64_t *)v262;
    v237 = 0xffffffa3;
    v266 = 17;
    goto lab_0x40479e;
  lab_0x404707:
    // 0x404707
    *v5 = 0;
    v147 = v271;
    v139 = v242;
    v144 = v248;
    v145 = v249;
    v140 = v228;
    v135 = v236;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x404540;
  lab_0x404db4:
    // 0x404db4
    *v24 = 0;
    *v9 = 0;
    *v5 = 0;
    v147 = v271;
    v139 = v265;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v258;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = v235;
    goto lab_0x404540;
  lab_0x404967:
    // 0x404967
    *v5 = v261;
    *v24 = 0;
    *v9 = 0;
    v147 = v271;
    v139 = v263;
    v144 = v225 - 4;
    v145 = v229 - 112;
    v140 = v228;
    v135 = v238;
    v138 = v226;
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v134 = 0;
    goto lab_0x404540;
  lab_0x40479e:
    // 0x40479e
    *v9 = v260;
    *v24 = 0;
    v242 = v266;
    v248 = v225 - 4;
    v249 = v229 - 112;
    v236 = v237;
    goto lab_0x404707;
  lab_0x4043b7:
    // 0x4043b7
    v163 = 2;
    v164 = v65;
    v165 = 63;
    v166 = v56;
    v167 = v59;
    v168 = v53;
    if (v177 != -0x8000000000000000) {
        // 0x4043ca
        *v71 = v189;
        *v549 = v177 - 1;
        *v12 = 0x3b9aca0000000000 - 0x100000000 * v193 >> 32;
        v163 = 21;
        v164 = v65;
        v165 = 276;
        v166 = v56;
        v167 = v59;
        v168 = v53;
    }
    goto lab_0x4042d2_2;
  lab_0x4045df:;
    char v550 = *(char *)((0x100000000 * v500 >> 32) + (int64_t)&g15); // 0x4045e1
    v146 = v501;
    v143 = v499;
    v142 = v502;
    v141 = v498;
    v136 = v550;
    v137 = v497;
    goto lab_0x403ec6;
  lab_0x404c66:
    // 0x404c66
    v147 = v275;
    v139 = (int64_t)*v41;
    v144 = *v26;
    v145 = *v34;
    v140 = v228;
    v135 = (int64_t)*v40;
    v138 = *v7;
    v131 = *v37;
    v132 = *v10;
    v133 = v269;
    v134 = v267;
    goto lab_0x404540;
  lab_0x4050ed:
    // 0x4050ed
    function_4036f0((int64_t)v465, v466);
    v275 = v271;
    goto lab_0x404c66;
  lab_0x40412f:;
    int64_t v559 = v116 + 1;
    int64_t v560 = v118;
    *v71 = v559;
    unsigned char v561 = *(char *)v559; // 0x404132
    if ((int32_t)v561 < 123) {
        unsigned char v562 = (v561 + 63) % 64;
        if (v561 == 46 || v562 != 0 != ((1 << (int64_t)v562) % 0x3ffffff04000000 == 0)) {
            goto lab_0x404120;
        } else {
            goto lab_0x40414f;
        }
    } else {
        if (v561 == 46) {
            goto lab_0x404120;
        } else {
            goto lab_0x40414f;
        }
    }
  lab_0x404120:
    // 0x404120
    v104 = v561;
    v105 = v560;
    v106 = v559;
    goto lab_0x404124;
  lab_0x40414f:
    // 0x40414f
    *(char *)v560 = 0;
}
// Address range: 0x406030 - 0x407ff6
int64_t function_406030(int64_t a1, int64_t str, int64_t a3, uint32_t a4, int64_t a5, int64_t a6) {
    // 0x406030
    int128_t v1; // 0x406030
    int128_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x40605b
    int64_t v3 = a3; // 0x406068
    if (a3 == 0) {
        // 0x406ad0
        int64_t v4; // bp-984, 0x406030
        function_4030d0(&v4);
        v3 = &v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x40606e
    int64_t * v6 = (int64_t *)v3; // 0x406072
    int64_t v7 = *v6; // 0x406072
    int64_t v8; // 0x406030
    unsigned char v9 = *(char *)&v8; // 0x40607e
    int64_t v10 = str; // 0x406084
    if (v9 < 33) {
        // 0x406086
        v10 = str;
        if ((1 << (int64_t)(v9 % 64) & 0x100003e00) != 0) {
            int64_t v11 = str + 1; // 0x406875
            unsigned char v12 = *(char *)v11; // 0x406879
            v10 = v11;
            while (v12 < 33) {
                unsigned char v13 = v12 % 64;
                int64_t v14 = v13 == 0 ? 1 : 1 << (int64_t)v13;
                v8 = v14;
                v10 = v11;
                if ((v14 & 0x100003e00) == 0) {
                    // break -> 0x40609a
                    break;
                }
                v11++;
                v12 = *(char *)v11;
                v10 = v11;
            }
        }
    }
    // 0x40609a
    int64_t v15; // bp-1080, 0x406030
    int64_t v16 = &v15; // 0x406043
    v8 = v10;
    bool v17; // 0x406030
    int64_t v18 = v17 ? -1 : 1;
    int64_t v19 = (int64_t)"TZ=\""; // 0x406030
    int64_t v20 = v10; // 0x4060a7
    int64_t v21 = 4; // 0x4060a7
    unsigned char v22 = *(char *)v20; // 0x4060a7
    char v23 = *(char *)v19; // 0x4060a7
    v20 += v18;
    v8 = v20;
    v21--;
    char v24 = v23; // 0x4060a7
    bool v25 = false; // 0x4060a7
    while (v22 == v23) {
        v19 += v18;
        v24 = v22;
        v25 = true;
        if (v21 == 0) {
            // break -> 
            break;
        }
        v22 = *(char *)v20;
        v23 = *(char *)v19;
        v20 += v18;
        v8 = v20;
        v21--;
        v24 = v23;
        v25 = false;
    }
    unsigned char v26 = v24;
    int64_t v27; // 0x406030
    int64_t size; // 0x4068f0
    int64_t v28; // 0x406030
    int64_t v29; // 0x406030
    int64_t v30; // 0x406030
    int64_t v31; // 0x406030
    char v32; // 0x406030
    int64_t v33; // 0x406030
    int64_t v34; // 0x406030
    int64_t v35; // 0x406030
    int64_t v36; // 0x406030
    int32_t v37; // bp-808, 0x406030
    if ((v22 >= v26 && !v25) != v22 < v26) {
        goto lab_0x406108;
    } else {
        int64_t v38 = v10 + 4; // 0x4060b2
        char v39 = *(char *)v38; // 0x4060b2
        v8 = v38;
        v27 = 1;
        v32 = v39;
        v35 = v38;
        if (v39 == 0) {
            goto lab_0x406108;
        } else {
            while (true) {
              lab_0x4060eb:;
                int64_t v40 = v35;
                char v41 = v32;
                size = v27;
                if (v41 != 92) {
                    // 0x4060d0
                    v31 = v40;
                    if (v41 == 34) {
                        // break -> 0x4068f0
                        break;
                    }
                    goto lab_0x4060db;
                } else {
                    int64_t v42 = v40 + 1; // 0x4060ef
                    v31 = v42;
                    switch (*(char *)v42) {
                        case 92: {
                            goto lab_0x4060db;
                        }
                        case 34: {
                            goto lab_0x4060db;
                        }
                        default: {
                            goto lab_0x406108;
                        }
                    }
                }
            }
            int64_t v43 = v38; // 0x4068f4
            int64_t v44; // bp-568, 0x406030
            int64_t * mem = &v44; // 0x4068f4
            if (size > 100) {
                // 0x406a9b
                mem = malloc((int32_t)size);
                v43 = 0x100000000 * v38 >> 32;
                v8 = v43;
                if (mem == NULL) {
                    // 0x40684f
                    free((int64_t *)*(int64_t *)(v16 + 8));
                    return 0;
                }
            }
            int64_t v45 = (int64_t)mem;
            int64_t v46 = v21; // 0x406919
            int64_t v47 = v45; // 0x406919
            if (v39 != 34) {
                int64_t v48 = v45 + 1; // 0x406929
                int64_t v49 = v43 + (int64_t)(v39 == 92); // 0x40692d
                char v50 = *(char *)v49; // 0x406930
                int64_t v51 = v49 + 1; // 0x406933
                char v52 = *(char *)v51; // 0x406933
                v8 = v51;
                *(char *)mem = v50;
                int64_t v53 = v48; // 0x406943
                char v54 = v50; // 0x406943
                if (v52 != 34) {
                    int64_t v55 = v48 + 1; // 0x406929
                    int64_t v56 = v8 + (int64_t)(v52 == 92); // 0x40692d
                    char v57 = *(char *)v56; // 0x406930
                    int64_t v58 = v56 + 1; // 0x406933
                    char v59 = *(char *)v58; // 0x406933
                    v8 = v58;
                    *(char *)v48 = v57;
                    int64_t v60 = v55; // 0x406943
                    v53 = v55;
                    v54 = v57;
                    while (v59 != 34) {
                        // 0x406920
                        v55 = v60 + 1;
                        v56 = v8 + (int64_t)(v59 == 92);
                        v57 = *(char *)v56;
                        v58 = v56 + 1;
                        v59 = *(char *)v58;
                        v8 = v58;
                        *(char *)v60 = v57;
                        v60 = v55;
                        v53 = v55;
                        v54 = v57;
                    }
                }
                // 0x406945
                v46 = v54;
                v47 = v53;
            }
            // 0x406945
            *(char *)v47 = 0;
            int64_t v61 = function_40bea0(v45, v8, v47); // 0x406952
            if (v61 == 0) {
                // 0x40684f
                free((int64_t *)*(int64_t *)(v16 + 8));
                return 0;
            }
            int64_t v62 = (0x100000000 * v8 >> 32) + 1; // 0x406968
            unsigned char v63 = *(char *)v62; // 0x406968
            int64_t v64 = v46; // 0x406972
            int64_t v65 = v62; // 0x406972
            if (v63 < 33) {
                // 0x406974
                v64 = v46;
                v65 = v62;
                if ((1 << (int64_t)(v63 % 64) & 0x100003e00) != 0) {
                    int64_t v66 = v62 + 1; // 0x406989
                    unsigned char v67 = *(char *)v66; // 0x40698d
                    int64_t v68 = v67; // 0x40698d
                    v64 = v68;
                    v65 = v66;
                    while (v67 < 33) {
                        int64_t v69 = 1 << v68 % 64;
                        v8 = v69;
                        v64 = v68;
                        v65 = v66;
                        if ((v69 & 0x100003e00) == 0) {
                            // break -> 0x4069a8
                            break;
                        }
                        v66++;
                        v67 = *(char *)v66;
                        v68 = v67;
                        v64 = v68;
                        v65 = v66;
                    }
                }
            }
            // 0x4069a8
            v8 = v3;
            int64_t v70 = function_40c180(v61, v6, (int64_t *)&v37); // 0x4069b6
            v36 = v45;
            v34 = v64;
            v28 = v65;
            v29 = v61;
            v33 = 0;
            v30 = v61;
            if (v70 != 0) {
                goto lab_0x406130;
            } else {
                goto lab_0x406842;
            }
        }
    }
  lab_0x406108:
    // 0x406108
    v8 = v3;
    int64_t v71 = function_40c180(a5, v6, (int64_t *)&v37); // 0x406116
    v36 = a6;
    v34 = v21;
    v28 = v10;
    v29 = a5;
    if (v71 == 0) {
        // 0x40684f
        free((int64_t *)*(int64_t *)(v16 + 8));
        return 0;
    }
    goto lab_0x406130;
  lab_0x4060db:;
    int64_t v305 = v31 + 1; // 0x4060db
    char v306 = *(char *)v305; // 0x4060df
    v27 = size + 1;
    v32 = v306;
    v35 = v305;
    if (v306 == 0) {
        goto lab_0x406108;
    }
    goto lab_0x4060eb;
  lab_0x406130:;
    char v72 = *(char *)v28; // 0x406130
    int128_t v73 = __asm_pxor(v2, v2); // 0x406135
    __asm_movups(v1, v73);
    int32_t v74 = v72 == 0 ? (int32_t)&g7 : (int32_t)v28; // 0x40617b
    int32_t v75 = v74; // bp-344, 0x40617b
    __asm_movups(v1, v73);
    __asm_movups(v1, v73);
    int64_t v76 = v7 + 0x76a700; // 0x4062d0
    char * str3 = NULL; // 0x4062d3
    int64_t v77; // 0x406030
    int64_t v78; // bp-456, 0x406030
    int64_t v79; // bp-680, 0x406030
    int32_t v80; // 0x406030
    if ((v76 & (v7 ^ -0x8000000000000000)) >= 0) {
        int64_t v81 = v80;
        int64_t v82 = &v78; // 0x4062d5
        int64_t v83 = 0x76a700; // 0x406030
        v8 = &v79;
        v79 = v76;
        char * v84; // 0x406030
        bool v85 = v84 == NULL | function_40c180(v29, &v79, &v78) == 0;
        v77 = v81;
        while (true || v85) {
            int64_t v86 = v83 + 0x76a700; // 0x40631b
            if ((int32_t)v86 == 0x1da9c00) {
                // 0x40632b
                str3 = NULL;
                v77 = v85 ? v82 : v81;
                goto lab_0x40632b_3;
            }
            int64_t v87 = 0x100000000 * v86 >> 32; // 0x4062cd
            int64_t v88 = v87 + v7; // 0x4062d0
            v83 = v86 & 0xffffffff;
            if (((v88 ^ v87) & (v88 ^ v7)) < 0) {
                // 0x40632b
                str3 = NULL;
                v77 = v85 ? v82 : v81;
                goto lab_0x40632b_3;
            }
            v8 = &v79;
            v79 = v88;
            v85 = v84 == NULL | function_40c180(v29, &v79, &v78) == 0;
            v77 = v81;
        }
    }
    goto lab_0x40632b_3;
  lab_0x40632b_3:;
    // 0x40632b
    int64_t str2; // 0x406030
    if (str2 != 0) {
        // 0x406338
        v8 = (int64_t)str3;
        if (str3 != NULL) {
            // 0x406345
            strcmp((char *)str2, str3);
        }
    }
    uint32_t v89 = a4 % 2; // 0x40618e
    int64_t v90 = function_403db0((int64_t *)&v75, v8, v77, v34); // 0x40635a
    int64_t v91; // 0x406030
    char * v92; // 0x406030
    char v93; // 0x406030
    int64_t v94; // 0x406030
    if ((int32_t)v90 != 0) {
        // 0x4068a0
        v33 = 0;
        v30 = v29;
        if (v89 != 0) {
            uint64_t v95 = (int64_t)v75; // 0x4068ac
            char * v96; // 0x406030
            if ((int64_t)len + str > v95) {
                // 0x406dc0
                v96 = dcgettext(NULL, "error: parsing failed, stopped at '%s'\n", 5);
            } else {
                // 0x4068c7
                v96 = dcgettext(NULL, "error: parsing failed\n", 5);
            }
            // 0x4068d3
            function_403400((int64_t)v96, v95, 5, v34, a5, a6);
            v33 = 0;
            v30 = v29;
        }
        goto lab_0x406842;
    } else {
        // 0x406367
        v94 = v34;
        v93 = 0;
        if (v89 != 0) {
            // 0x406a10
            function_403400((int64_t)dcgettext(NULL, "input timezone: ", 5), (int64_t)"input timezone: ", 5, v34, a5, a6);
            v8 = (int64_t)"parsed date/time string";
            if (v36 == 0) {
                // 0x406ae4
                v8 = (int64_t)"system default";
                v91 = (int64_t)"system default";
                goto lab_0x406af0;
            } else {
                if (v29 == a5) {
                    // 0x406e50
                    v8 = v36;
                    int64_t v97 = (int64_t)"UTC0"; // 0x406030
                    int64_t v98 = v36; // 0x406e64
                    int64_t v99 = 5; // 0x406e64
                    unsigned char v100 = *(char *)v98; // 0x406e64
                    char v101 = *(char *)v97; // 0x406e64
                    v98 += v18;
                    v8 = v98;
                    char v102 = v101; // 0x406e64
                    bool v103 = false; // 0x406e64
                    while (v100 == v101) {
                        v99--;
                        v97 += v18;
                        v102 = v100;
                        v103 = true;
                        if (v99 == 0) {
                            // break -> 
                            break;
                        }
                        v100 = *(char *)v98;
                        v101 = *(char *)v97;
                        v98 += v18;
                        v8 = v98;
                        v102 = v101;
                        v103 = false;
                    }
                    unsigned char v104 = v102;
                    v8 = (int64_t)"TZ=\"UTC0\" environment value or -u";
                    v91 = (int64_t)"TZ=\"UTC0\" environment value or -u";
                    if ((v100 >= v104 && !v103) == v100 < v104) {
                        goto lab_0x406af0;
                    } else {
                        // 0x406e78
                        v92 = dcgettext(NULL, "TZ=\"%s\" environment value", 5);
                        goto lab_0x406a83;
                    }
                } else {
                    // 0x406a6f
                    v92 = dcgettext(NULL, "TZ=\"%s\" in date string", 5);
                    goto lab_0x406a83;
                }
            }
        } else {
            goto lab_0x4063c2;
        }
    }
  lab_0x406842:
    // 0x406842
    if (v30 != a5) {
        // 0x406847
        function_40c160(v30);
    }
    // 0x40684f
    free((int64_t *)*(int64_t *)(v16 + 8));
    return v33 & 0xffffffff;
  lab_0x4063c2:;
    int64_t v105 = v80; // 0x406173
    int64_t v106 = v105 + 1900; // 0x406188
    int64_t v107; // 0x406030
    int32_t v108; // 0x406030
    int64_t v109; // 0x406030
    if (v106 < 0) {
        int64_t v110 = -3800 - v105; // 0x406ef6
        v108 = v110;
        v109 = (v105 - 0x7ffffffffffff894 & 0x7ffffffffffff128 - v105) < 0 | v110 >= 0x80000000;
        goto lab_0x40641a;
    } else {
        if (v106 >= 1900) {
            // 0x406e3a
            v107 = 0;
            if (v80 >= 0) {
                goto lab_0x406402;
            } else {
                // 0x406e43
                v107 = 1;
                goto lab_0x406402;
            }
        } else {
            // 0x4063f9
            v107 = 0;
            if (v80 >= 0) {
                // 0x406e43
                v107 = 1;
                goto lab_0x406402;
            } else {
                goto lab_0x406402;
            }
        }
    }
  lab_0x406af0:
    // 0x406af0
    __fprintf_chk(g47, 1, dcgettext(NULL, (char *)v91, 5));
    goto lab_0x406d10;
  lab_0x40641a:;
    // 0x40641a
    int32_t v111; // 0x406030
    int32_t v112; // 0x406030
    int64_t v113; // 0x406030
    int64_t v114; // 0x406030
    int64_t v115; // 0x406030
    int32_t v116; // 0x406030
    int32_t v117; // 0x406030
    int32_t v118; // bp-936, 0x406030
    char v119; // 0x406030
    int64_t v120; // 0x406470
    int64_t v121; // 0x406423
    int64_t v122; // 0x40642d
    int64_t v123; // 0x406437
    int64_t v124; // 0x40644b
    if ((char)v109 != 0) {
        if (v93 != 0) {
            // 0x407321
            function_403400((int64_t)dcgettext(NULL, "error: out-of-range year %ld\n", 5), v106, 5, v94, a5, a6);
        }
        // 0x406ebb
        v113 = v89;
        goto lab_0x406ec3;
    } else {
        // 0x406423
        v121 = v80 + 1;
        v122 = v121 - 1;
        v123 = v122 & 0xffffffff;
        v8 = v123;
        v124 = v89;
        v113 = v124;
        if (v121 >= 0x80000001 || ((v122 ^ v121) & -v121) < 0) {
            goto lab_0x406ec3;
        } else {
            // 0x40645b
            v120 = v80;
            if (v119 == 0) {
                // 0x407344
                v118 = 0;
                v111 = 0;
                v116 = 0;
                v114 = 0;
                v112 = 0;
                if (v89 != 0) {
                    // 0x4077c0
                    function_403400((int64_t)"warning: using midnight as starting time: 00:00:00\n", v123, v120, v124, a5, a6);
                    v117 = 0;
                    v115 = 0;
                    goto lab_0x4077cc;
                } else {
                    goto lab_0x4072f0;
                }
            } else {
                int64_t v125 = v80; // 0x40728a
                if (v80 < 24) {
                    // 0x4072af
                    v118 = v37;
                    v111 = v37;
                    v114 = v5;
                    if (v89 != 0) {
                        int64_t v126 = v125 & 0xffffffff; // 0x4072af
                        int64_t v127 = v37; // 0x4072c2
                        __snprintf_chk((char *)&v79, 100, 1, 100, "%02d:%02d:%02d", v126, (int64_t)v80, v127);
                        char * v128 = dcgettext(NULL, "using current time as starting value: '%s'\n", 5); // 0x4079d9
                        function_403400((int64_t)v128, (int64_t)&v79, 5, 100, v127, v126);
                        v115 = v5;
                        goto lab_0x4077cc;
                    } else {
                        goto lab_0x4072f0;
                    }
                } else {
                    // 0x4079f3
                    v33 = 0;
                    v30 = v29;
                    if (v89 != 0) {
                        char * v129 = dcgettext(NULL, "error: invalid hour %ld%s\n", 5); // 0x407a07
                        function_403400((int64_t)v129, v125, (int64_t)&g25, v124, a5, 2);
                        v33 = 0;
                        v30 = v29;
                    }
                    goto lab_0x406842;
                }
            }
        }
    }
  lab_0x406d10:
    // 0x406d10
    v8 = (int64_t)g47;
    fputc(10, g47);
    v8 = 0;
    v94 = 0;
    v93 = v89;
    goto lab_0x4063c2;
  lab_0x406a83:
    // 0x406a83
    __fprintf_chk(g47, 1, v92);
    goto lab_0x406d10;
  lab_0x406402:
    // 0x406402
    v109 = v105 >= 0x80000000 ? 1 : v107;
    goto lab_0x40641a;
  lab_0x406ec3:
    // 0x406ec3
    v8 = (int64_t)"error: year, month, or day overflow\n";
    int64_t v130 = (int64_t)"error: year, month, or day overflow\n"; // 0x406ecf
    int64_t v131 = v113; // 0x406ecf
    int64_t v132 = a5; // 0x406ecf
    int64_t v133 = a6; // 0x406ecf
    if ((char)v113 == 0) {
        goto lab_0x406842;
    } else {
        goto lab_0x406ed5;
    }
  lab_0x406ed5:
    // 0x406ed5
    function_403400((int64_t)dcgettext(NULL, (char *)v130, 5), v8, 5, v131, v132, v133);
    v33 = 0;
    v30 = v29;
    goto lab_0x406842;
  lab_0x4072f0:;
    int64_t v134 = v112;
    int32_t v135 = v111; // bp-872, 0x406521
    int64_t v136 = function_40c230(v29, (int64_t *)&v118, v108, 0); // 0x406558
    v8 = &v135;
    int64_t v137 = function_4034c0(v29, &v135, (int64_t *)&v118, v136); // 0x406576
    int64_t v138; // 0x406030
    int64_t v139; // 0x406030
    int64_t v140; // 0x406030
    int64_t v141; // 0x406030
    int64_t v142; // 0x406030
    int64_t v143; // 0x406030
    int64_t v144; // 0x406030
    int64_t v145; // 0x406030
    int64_t v146; // 0x406030
    int64_t v147; // 0x406030
    int64_t v148; // 0x406030
    int64_t v149; // 0x406030
    int64_t v150; // 0x406030
    int32_t v151; // 0x406030
    int32_t v152; // 0x406030
    int64_t v153; // 0x406030
    int64_t v154; // bp-744, 0x406030
    int32_t v155; // 0x406030
    int64_t v156; // 0x407a75
    int64_t * v157; // 0x407447
    int64_t * v158; // 0x40744f
    if ((char)v137 != 0) {
        // 0x40700b
        v153 = v114;
        if (v89 == 0) {
            int64_t v159 = v116;
            int64_t v160 = v80; // 0x4070f6
            int64_t v161 = v1; // 0x4070fe
            v151 = 0;
            v143 = 0;
            v146 = v136;
            v145 = v136;
            v139 = v134;
            v141 = v159;
            v148 = v160;
            v152 = 0;
            v149 = v161;
            v138 = v134;
            v140 = v159;
            if (((int64_t)v1 || v160 || v161) != 0) {
                goto lab_0x407792;
            } else {
                goto lab_0x40711c;
            }
        } else {
            // 0x4073fd
            v156 = function_403390(v108, &v154, v80, v136);
            __snprintf_chk((char *)&v79, 100, 1, 100, "(Y-M-D) %s-%02d-%02d", (char *)v156, v121 & 0xffffffff, v120);
            char * v162 = dcgettext(NULL, "using current date as starting value: '%s'\n", 5); // 0x407aaf
            function_403400((int64_t)v162, (int64_t)&v79, 5, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
            int64_t v163 = function_403880((int32_t *)(v16 + 144), (int64_t *)(v16 + 736), &v79, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156); // 0x407421
            function_403400((int64_t)dcgettext(NULL, "starting date/time: '%s'\n", 5), v163, 5, 100, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
            v157 = (int64_t *)(v16 + 840);
            int64_t v164 = *v157; // 0x407447
            v158 = (int64_t *)(v16 + 848);
            int64_t v165 = *v158; // 0x40744f
            int64_t * v166 = (int64_t *)(v16 + 856); // 0x407457
            int64_t v167 = *v166; // 0x407457
            unsigned char v168 = *(char *)(v16 + 953); // 0x40745f
            int64_t v169 = v165 | v164; // 0x40746a
            v8 = v169;
            v143 = v168;
            v146 = v167;
            v145 = v136;
            v139 = (int64_t)"(Y-M-D) %s-%02d-%02d";
            v141 = v156;
            if ((v167 || v169) == 0) {
                goto lab_0x40711c;
            } else {
                // 0x407479
                v148 = v165;
                v149 = v164;
                v138 = (int64_t)"(Y-M-D) %s-%02d-%02d";
                v140 = v156;
                if (v168 == 0) {
                    goto lab_0x407792;
                } else {
                    // 0x407481
                    v147 = v167;
                    if (v169 == 0) {
                        goto lab_0x4079a4;
                    } else {
                        int64_t v170 = v167; // 0x407492
                        if (*(int32_t *)(v16 + 156) != 15) {
                            // 0x407494
                            function_403400((int64_t)dcgettext(NULL, "warning: when adding relative months/years, it is recommended to specify the 15th of the months\n", 5), (int64_t)"warning: when adding relative months/years, it is recommended to specify the 15th of the months\n", 5, v167, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
                            v170 = *v166;
                        }
                        // 0x4074b7
                        v147 = v170;
                        if (v147 != 0) {
                            goto lab_0x4079a4;
                        } else {
                            goto lab_0x4074c0;
                        }
                    }
                }
            }
        }
    } else {
        int64_t v171 = v118; // 0x4065a8
        int64_t v172 = v155; // 0x4065c3
        if (v155 == v112 == v135 == v118) {
            // 0x407de1
            v33 = 0;
            v30 = v29;
            if (v89 == 0) {
                goto lab_0x406842;
            } else {
                // 0x407de9
                function_403400((int64_t)dcgettext(NULL, "error: invalid date/time value:\n", 5), (int64_t)"error: invalid date/time value:\n", 5, v172, v134, v171);
                int64_t v173 = function_403880(&v135, (int64_t *)&v75, &v78, v172, v134, v171); // 0x407e1f
                function_403400((int64_t)dcgettext(NULL, "    user provided time: '%s'\n", 5), v173, 5, v172, v134, v171);
                int64_t v174 = function_403880(&v118, (int64_t *)&v75, &v78, v172, v134, v171); // 0x407e58
                function_403400((int64_t)dcgettext(NULL, "       normalized time: '%s'\n", 5), v174, 5, v172, v134, v171);
                v142 = (int64_t)&g25;
                v150 = (int64_t)&g25;
                v144 = &v78;
                goto lab_0x407c05;
            }
        } else {
            // 0x407b28
            v33 = 0;
            v30 = v29;
            if (v89 == 0) {
                goto lab_0x406842;
            } else {
                char * v175 = dcgettext(NULL, "error: invalid date/time value:\n", 5); // 0x407b4f
                int64_t v176 = &v78; // 0x407b54
                function_403400((int64_t)v175, (int64_t)"error: invalid date/time value:\n", 5, v172, v134, v171);
                int64_t v177 = function_403880(&v135, (int64_t *)&v75, &v78, v172, v134, v171); // 0x407b79
                function_403400((int64_t)dcgettext(NULL, "    user provided time: '%s'\n", 5), v177, 5, v172, v134, v171);
                int64_t v178 = function_403880(&v118, (int64_t *)&v75, &v78, v172, v134, v171); // 0x407bb2
                function_403400((int64_t)dcgettext(NULL, "       normalized time: '%s'\n", 5), v178, 5, v172, v134, v171);
                v142 = (int64_t)"--";
                v150 = (int64_t)&g25;
                v144 = v176;
                if (v135 != v118) {
                    int64_t v179 = v155 != v112 ? (int64_t)"--" : (int64_t)&g25; // 0x407c01
                    v142 = v179;
                    v150 = (int64_t)"--";
                    v144 = v176;
                }
                goto lab_0x407c05;
            }
        }
    }
  lab_0x4077cc:
    // 0x4077cc
    v8 = v123;
    v111 = v118;
    v116 = v117;
    int32_t v180; // 0x406030
    v155 = v180;
    v114 = v115;
    v112 = v180;
    goto lab_0x4072f0;
  lab_0x407792:;
    int64_t v181 = (int64_t)*(int32_t *)(v16 + 164); // 0x407792
    int64_t v182 = v149 + v181; // 0x40779a
    int64_t v183 = 0x100000000 * v182 >> 32; // 0x4077a0
    v33 = 0;
    v30 = v29;
    int64_t v184; // 0x406030
    int64_t v185; // 0x406030
    int64_t v186; // 0x406030
    int64_t v187; // 0x406030
    int32_t v188; // 0x406030
    if (v182 != v183) {
        goto lab_0x406842;
    } else {
        // 0x4077af
        v33 = 0;
        v30 = v29;
        if (((v182 ^ v181) & (v182 ^ v149)) < 0) {
            goto lab_0x406842;
        } else {
            // 0x4077b7
            *(int32_t *)(v16 + 24) = (int32_t)v182;
            v184 = v148;
            v188 = v152;
            v187 = v183;
            v185 = v138;
            v186 = v140;
            goto lab_0x4074f5;
        }
    }
  lab_0x40711c:;
    int64_t v189 = v145;
    int32_t v190 = v151; // 0x407125
    int64_t v191 = v143; // 0x407125
    int64_t v192 = v146; // 0x407125
    int64_t v193 = v189; // 0x407125
    int64_t v194 = v139; // 0x407125
    int64_t v195 = v141; // 0x407125
    if (*(int64_t *)(v16 + 944) == 0) {
        goto lab_0x407151;
    } else {
        int64_t v196 = (int64_t)*(int32_t *)(v16 + 760); // 0x407127
        int64_t v197 = *(int64_t *)(v16 + 184); // 0x407134
        int64_t v198 = v196 - v197; // 0x407134
        int64_t v199 = v189 - v198; // 0x40713f
        bool v200 = ((v198 ^ v196) & (v197 ^ v196)) < 0 | ((v199 ^ v189) & (v198 ^ v189)) < 0;
        int64_t v201 = v200; // 0x407148
        v190 = v151;
        v191 = v143;
        v192 = v201;
        v193 = v199;
        v194 = v139;
        v195 = v141;
        if (v200) {
            // 0x407a23
            v33 = 0;
            v30 = v29;
            if ((char)v143 != 0) {
                // 0x407a2b
                function_403400((int64_t)dcgettext(NULL, "error: timezone %d caused time_t overflow\n", 5), v196 & 0xffffffff, 5, v201, v139, v141);
                v33 = 0;
                v30 = v29;
            }
            goto lab_0x406842;
        } else {
            goto lab_0x407151;
        }
    }
  lab_0x407151:;
    // 0x407151
    int64_t v202; // 0x406030
    int64_t v203; // 0x406030
    int64_t v204; // 0x406030
    int64_t v205; // 0x406030
    int64_t v206; // 0x406030
    int64_t v207; // 0x406030
    int64_t v208; // 0x406030
    int64_t v209; // 0x406030
    int64_t v210; // 0x406030
    int64_t v211; // 0x406030
    int64_t v212; // 0x406030
    int64_t v213; // 0x406030
    int64_t v214; // 0x406030
    int32_t v215; // 0x406030
    int32_t v216; // 0x406030
    if ((char)v191 != 0) {
        int64_t v217 = function_403880(&v118, (int64_t *)&v75, &v79, v192, v194, v195); // 0x4078ac
        function_403400((int64_t)dcgettext(NULL, "'%s' = %ld epoch-seconds\n", 5), v217, v193, v192, v194, v195);
        v213 = v192;
        v209 = v124;
        v204 = v194;
        v207 = 0;
        // 0x4078ef
        v8 = 0;
        int64_t v218 = (0x100000000 * v153 >> 32) + 0x3b9aca00 + -0x3b9aca00 * ((int64_t)(v153 < 0) % 2); // 0x407945
        v213 = v218;
        v209 = v124;
        v204 = 0;
        v207 = 0;
        int64_t v219 = v1; // 0x40798d
        int128_t v220 = v219; // 0x407995
        int128_t v221 = 60 * v220; // 0x407995
        v216 = v1;
        v212 = v218;
        v214 = v221;
        v211 = v193;
        v208 = v124;
        v205 = 0;
        v206 = 0;
        v203 = v219;
        v213 = v218;
        v209 = v124;
        v204 = 0;
        v207 = 0;
        if (v221 == 0x3c0000000000000000 * v220 >> 64) {
            goto lab_0x40721b;
        } else {
            goto lab_0x407866;
        }
    } else {
        // 0x407151
        v202 = v16 + 24;
        v215 = v190;
        v210 = v193;
        goto lab_0x407159;
    }
  lab_0x407c05:
    // 0x407c05
    __snprintf_chk((char *)v144, 100, 1, 100, "                                 %4s %2s %2s %2s %2s %2s", (char *)&g25, (char *)&g25, (char *)&g25, (char *)&g25, (char *)v142, (char *)v150);
    int64_t v222 = 52; // 0x406773
    if (v119 == 32) {
        int64_t v223 = 51;
        while (v223 != 0) {
            int64_t v224 = v223 - 1; // 0x406780
            if (*(char *)(v224 + v144) != 32) {
                // break -> 0x406791
                break;
            }
            v223 = v224;
        }
        // 0x406791
        v222 = 0x100000000 * v223 >> 32;
    }
    // 0x4067cf
    *(char *)(v16 + 624 + v222) = 0;
    function_403400((int64_t)"%s\n", v144, v222, 100, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v225 = dcgettext((char *)((int32_t)"%s\n" ^ (int32_t)"%s\n"), "     possible reasons:\n", 5); // 0x4067b4
    function_403400((int64_t)v225, (int64_t)"     possible reasons:\n", 5, 100, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v226 = dcgettext(NULL, "       numeric values overflow;\n", 5); // 0x406805
    function_403400((int64_t)v226, (int64_t)"       numeric values overflow;\n", 5, v120, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    char * v227 = dcgettext(NULL, "missing timezone", 5); // 0x407e92
    function_403400((int64_t)"       %s\n", (int64_t)v227, 5, v120, (int64_t)"                                 %4s %2s %2s %2s %2s %2s", (int64_t)&g25);
    v33 = 0;
    v30 = v29;
    goto lab_0x406842;
  lab_0x4079a4:
    if (v116 != 12) {
        // 0x4079b2
        function_403400((int64_t)dcgettext(NULL, "warning: when adding relative days, it is recommended to specify noon\n", 5), (int64_t)"warning: when adding relative days, it is recommended to specify noon\n", 5, v147, (int64_t)"(Y-M-D) %s-%02d-%02d", v156);
    }
    goto lab_0x4074c0;
  lab_0x4074f5:;
    int32_t * v276 = (int32_t *)(v16 + 160); // 0x4074f5
    int64_t v277 = (int64_t)*v276; // 0x4074f5
    int64_t v272 = v184 + v277; // 0x4074fd
    int64_t v232 = v187; // 0x40750f
    int64_t v233 = v185; // 0x40750f
    int64_t v234 = v186; // 0x40750f
    int64_t v273; // 0x407527
    int64_t v275; // 0x407598
    int64_t v269; // 0x407c69
    if (v272 >= 0x80000000) {
        goto lab_0x407629;
    } else {
        // 0x407515
        v232 = v187;
        v233 = v185;
        v234 = v186;
        if (((v272 ^ v277) & (v272 ^ v184)) < 0) {
            goto lab_0x407629;
        } else {
            int32_t * v278 = (int32_t *)(v16 + 156); // 0x40751f
            int64_t v279 = (int64_t)*v278; // 0x40751f
            int64_t v280 = *(int64_t *)(v16 + 856); // 0x407527
            v273 = v280 + v279;
            int64_t v281 = 0x100000000 * v273 >> 32; // 0x40752f
            v232 = v187;
            v233 = v185;
            v234 = v186;
            if (v273 != v281) {
                goto lab_0x407629;
            } else {
                // 0x40753e
                v232 = v187;
                v233 = v185;
                v234 = v186;
                if (((v273 ^ v279) & (v273 ^ v280)) < 0) {
                    goto lab_0x407629;
                } else {
                    int64_t v282 = v16 + 24;
                    int32_t v283 = v272; // 0x407555
                    *v276 = v283;
                    int32_t v284 = v273; // 0x40755d
                    *v278 = v284;
                    *(int32_t *)(v16 + 164) = *(int32_t *)v282;
                    int64_t * v285 = (int64_t *)(v16 + 144); // 0x407574
                    *v285 = *(int64_t *)(v16 + 208);
                    *(int32_t *)(v16 + 152) = *(int32_t *)(v16 + 216);
                    *(int32_t *)(v16 + 176) = *(int32_t *)(v16 + 240);
                    v275 = function_40c230(v29, v285, (int32_t)v281, v187);
                    if (v275 == -1) {
                        // 0x407ee6
                        v33 = 0;
                        v30 = v29;
                        if (v89 != 0) {
                            int64_t v286 = function_403880(&v118, (int64_t *)&v75, &v79, v187, v185, v186); // 0x407f0c
                            function_403400((int64_t)dcgettext(NULL, "error: adding relative date resulted in an invalid date: '%s'\n", 5), v286, 5, v187, v185, v186);
                            v33 = 0;
                            v30 = v29;
                        }
                        goto lab_0x406842;
                    } else {
                        unsigned char v287 = *(char *)(v16 + 953); // 0x4075aa
                        if (v287 != 0) {
                            int64_t v288 = v1; // 0x407c4d
                            v269 = 0x100000000 * v288 >> 32;
                            function_403400((int64_t)dcgettext(NULL, "after date adjustment (%+ld years, %+ld months, %+ld days),\n", 5), (int64_t)v1, (int64_t)v80, v269, v185, v186);
                            int64_t v289 = function_403880(&v118, (int64_t *)&v75, &v79, v269, v185, v186); // 0x407c9a
                            function_403400((int64_t)dcgettext(NULL, "    new date/time = '%s'\n", 5), v289, 5, v269, v185, v186);
                            v151 = v188;
                            v143 = v124;
                            v146 = v269;
                            v145 = v275;
                            v139 = v185;
                            v141 = v186;
                            if (v288 != 0) {
                                goto lab_0x40711c;
                            } else {
                                if (v80 != v284) {
                                    goto lab_0x407d2a;
                                } else {
                                    // 0x407d0d
                                    v151 = v188;
                                    if (v80 != 0 || (int32_t)v122 == v283) {
                                        goto lab_0x40711c;
                                    } else {
                                        goto lab_0x407d2a;
                                    }
                                }
                            }
                        } else {
                            // 0x4075ba
                            v202 = v282;
                            v215 = v188;
                            v210 = v275;
                            if (*(int64_t *)(v16 + 944) == 0) {
                                goto lab_0x407159;
                            } else {
                                int64_t v290 = (int64_t)*(int32_t *)(v16 + 760); // 0x4075cb
                                int64_t v291 = *(int64_t *)(v16 + 184); // 0x4075d3
                                int64_t v292 = v290 - v291; // 0x4075d3
                                int64_t v293 = v275 - v292; // 0x4075de
                                v33 = 0;
                                v30 = v29;
                                v190 = v188;
                                v191 = v287;
                                v192 = 0;
                                v193 = v293;
                                v194 = v185;
                                v195 = v186;
                                if (((v292 ^ v290) & (v291 ^ v290)) >= 0 && ((v293 ^ v275) & (v292 ^ v275)) >= 0) {
                                    goto lab_0x407151;
                                } else {
                                    goto lab_0x406842;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x407866:
    // 0x407866
    v33 = 0;
    v30 = v29;
    if ((char)v209 == 0) {
        goto lab_0x406842;
    } else {
        // 0x40786f
        v8 = (int64_t)"error: adding relative time caused an overflow\n";
        v130 = (int64_t)"error: adding relative time caused an overflow\n";
        v131 = v213;
        v132 = v204;
        v133 = v207;
        goto lab_0x406ed5;
    }
  lab_0x407159:;
    int64_t v294 = *(int64_t *)(v16 + 864); // 0x407159
    int128_t v295 = v294; // 0x407161
    int128_t v296 = 3600 * v295; // 0x407161
    *(int64_t *)v202 = v294;
    v33 = 0;
    v30 = v29;
    if (v296 == 0xe100000000000000000 * v295 >> 64) {
        int64_t v297 = v296; // 0x407161
        int64_t v298 = (int64_t)*(int32_t *)(v16 + 888); // 0x407173
        v8 = v298;
        int64_t v299 = v210 + v297; // 0x407200
        v33 = 0;
        v30 = v29;
        if (((v299 ^ v210) & (v299 ^ v297)) < 0) {
            goto lab_0x406842;
        } else {
            int64_t v300 = *(int64_t *)(v16 + 832) + v298; // 0x40718d
            int64_t v301 = v300 + 0x3b9aca00 + (v300 >> 63 & -0x3b9aca00); // 0x4071c1
            int64_t v302 = *(int64_t *)(v16 + 872); // 0x407209
            int128_t v303 = v302; // 0x407211
            int128_t v304 = 60 * v303; // 0x407211
            v33 = 0;
            v30 = v29;
            v216 = v215;
            v212 = v301;
            v214 = v304;
            v211 = v299;
            v208 = v109;
            v205 = v298;
            v206 = v300 - v301 >> 63;
            v203 = v302;
            if (v304 == 0x3c0000000000000000 * v303 >> 64) {
                goto lab_0x40721b;
            } else {
                goto lab_0x406842;
            }
        }
    } else {
        goto lab_0x406842;
    }
  lab_0x4074c0:;
    int64_t v228 = (int64_t)*(int32_t *)(v16 + 164); // 0x4074c2
    int64_t v229 = *v157; // 0x4074ca
    int64_t v230 = v229 + v228; // 0x4074ca
    int64_t v231 = 0x100000000 * v230 >> 32; // 0x4074d2
    v232 = v231;
    v233 = (int64_t)"(Y-M-D) %s-%02d-%02d";
    v234 = v156;
    if (v230 != v231) {
        goto lab_0x407629;
    } else {
        // 0x4074e1
        v232 = v231;
        v233 = (int64_t)"(Y-M-D) %s-%02d-%02d";
        v234 = v156;
        if (((v230 ^ v228) & (v230 ^ v229)) < 0) {
            goto lab_0x407629;
        } else {
            // 0x4074e9
            *(int32_t *)(v16 + 24) = (int32_t)v230;
            v184 = *v158;
            v187 = v231;
            v185 = (int64_t)"(Y-M-D) %s-%02d-%02d";
            v186 = v156;
            goto lab_0x4074f5;
        }
    }
  lab_0x407629:
    // 0x407629
    v33 = 0;
    v30 = v29;
    if (*(char *)(v16 + 953) != 0) {
        // 0x407637
        function_403400((int64_t)dcgettext(NULL, "error: %s:%d\n", 5), (int64_t)"parse-datetime.y", 2167, v232, v233, v234);
        v33 = 0;
        v30 = v29;
    }
    goto lab_0x406842;
  lab_0x40721b:;
    int64_t v235 = v206;
    int64_t v236 = v211 + v214; // 0x40721b
    v213 = v212;
    v209 = v208;
    v204 = v205;
    v207 = v235;
    int64_t v237; // 0x406030
    int64_t v238; // 0x406030
    int64_t v239; // 0x406030
    int64_t v240; // 0x406030
    int64_t * v241; // 0x407240
    unsigned char v242; // 0x407265
    if (((v236 ^ v211) & (v236 ^ v214)) < 0) {
        goto lab_0x407866;
    } else {
        int64_t v243 = *(int64_t *)(v16 + 880); // 0x407224
        int64_t v244 = v243 + v236; // 0x40722c
        v213 = v212;
        v209 = v208;
        v204 = v205;
        v207 = v235;
        if (((v244 ^ v236) & (v244 ^ v243)) < 0) {
            goto lab_0x407866;
        } else {
            // 0x407235
            v213 = v212;
            v209 = v208;
            v204 = v205;
            v207 = v235;
            // 0x407240
            v241 = (int64_t *)(v16 + 40);
            int64_t v245 = *v241; // 0x407240
            *(int64_t *)v245 = v244;
            *(int64_t *)(v245 + 8) = v212;
            int64_t v246 = v212; // 0x40724f
            int64_t v247 = v205; // 0x40724f
            if ((char)v208 != 0) {
                // 0x407251
                v246 = v212;
                v247 = v205;
                if ((v243 | v203 | v8 | *(int64_t *)(v16 + 24)) != 0) {
                    int64_t v248 = v205 & 0xffffffff; // 0x407f4f
                    function_403400((int64_t)dcgettext(NULL, "after time adjustment (%+ld hours, %+ld minutes, %+ld seconds, %+d ns),\n", 5), (int64_t)v216, v203, v243, v248, v235);
                    function_403400((int64_t)dcgettext(NULL, "    new time = %ld epoch-seconds\n", 5), v244, 5, v243, v248, v235);
                    v246 = v243;
                    v247 = v248;
                    if (v80 != -1) {
                        int64_t v249 = function_40c180(v29, (int64_t *)a1, &v154); // 0x407fa5
                        v246 = v243;
                        v247 = v248;
                        if (false && v249 != 0) {
                            // 0x407fc7
                            function_403400((int64_t)dcgettext(NULL, "warning: daylight saving time changed after time adjustment\n", 5), (int64_t)"warning: daylight saving time changed after time adjustment\n", 5, v243, v248, v235);
                            v246 = v243;
                            v247 = v248;
                        }
                    }
                }
            }
            // 0x407265
            v242 = *(char *)(v16 + 953);
            v33 = 1;
            v30 = v29;
            if (v242 == 0) {
                goto lab_0x406842;
            } else {
                // 0x406b99
                v238 = v247;
                int64_t * v250 = (int64_t *)(v16 + 16); // 0x406b99
                v8 = (int64_t)"timezone: system default\n";
                v237 = (int64_t)"timezone: system default\n";
                v239 = v246;
                if (*v250 == 0) {
                    goto lab_0x406bd3;
                } else {
                    int64_t v251 = *v250; // 0x406bab
                    v8 = v251;
                    int64_t v252 = (int64_t)"UTC0"; // 0x406030
                    int64_t v253 = v251; // 0x406bbf
                    unsigned char v254 = *(char *)v253; // 0x406bbf
                    char v255 = *(char *)v252; // 0x406bbf
                    v253 += v18;
                    v8 = v253;
                    int64_t v256 = 4; // 0x406bbf
                    char v257 = v255; // 0x406bbf
                    bool v258 = false; // 0x406bbf
                    while (v254 == v255) {
                        v252 += v18;
                        v257 = v254;
                        v258 = true;
                        if (v256 == 0) {
                            // break -> 
                            break;
                        }
                        v254 = *(char *)v253;
                        v255 = *(char *)v252;
                        v253 += v18;
                        v8 = v253;
                        v256--;
                        v257 = v255;
                        v258 = false;
                    }
                    unsigned char v259 = v257;
                    if ((v254 >= v259 && !v258) != v254 < v259) {
                        char * v260 = dcgettext(NULL, "timezone: TZ=\"%s\" environment value\n", 5); // 0x406dd8
                        function_403400((int64_t)v260, *v250, 5, v256, v238, v235);
                        v240 = v256;
                        goto lab_0x406be4;
                    } else {
                        // 0x406bce
                        v8 = (int64_t)"timezone: Universal Time\n";
                        v237 = (int64_t)"timezone: Universal Time\n";
                        v239 = v256;
                        goto lab_0x406bd3;
                    }
                }
            }
        }
    }
  lab_0x406bd3:
    // 0x406bd3
    function_403400((int64_t)dcgettext(NULL, (char *)v237, 5), v8, 5, v239, v238, v235);
    v240 = v239;
    goto lab_0x406be4;
  lab_0x407d2a:
    // 0x407d2a
    function_403400((int64_t)dcgettext(NULL, "warning: month/year adjustment resulted in shifted dates:\n", 5), (int64_t)"warning: month/year adjustment resulted in shifted dates:\n", 5, v269, v185, v186);
    int64_t v270 = function_403390(v188, &v154, 5, v269); // 0x407d51
    int64_t v271 = v272 + 1; // 0x407d71
    function_403400((int64_t)dcgettext(NULL, "     adjusted Y M D: %s %02d %02d\n", 5), 0x100000000 * v270 >> 32, v271 & 0xffffffff, v273 & 0xffffffff, v185, v186);
    int64_t v274 = function_403390(v108, &v154, (int32_t)v271, v120); // 0x407da7
    function_403400((int64_t)dcgettext(NULL, "   normalized Y M D: %s %02d %02d\n", 5), v274, v121 & 0xffffffff, v120, v185, v186);
    v143 = v124;
    v146 = v120;
    v145 = v275;
    v139 = v185;
    v141 = v186;
    goto lab_0x40711c;
  lab_0x406be4:;
    int64_t timep = *v241; // 0x406be4
    int64_t v261 = *(int64_t *)timep; // 0x406bf5
    int64_t v262 = *(int64_t *)(timep + 8); // 0x406bf9
    function_403400((int64_t)dcgettext(NULL, "final: %ld.%09d (epoch-seconds)\n", 5), v261, v262 & 0xffffffff, v240, v238, v235);
    int64_t time2 = v16 + 336; // 0x406c12
    v8 = time2;
    if (gmtime_r((int32_t *)timep, (struct tm *)time2) != NULL) {
        int64_t v263 = function_403880((int32_t *)time2, NULL, (int64_t *)(v16 + 400), v240, v238, v235); // 0x406c39
        function_403400((int64_t)dcgettext(NULL, "final: %s (UTC)\n", 5), v263, 5, v240, v238, v235);
    }
    int64_t v264 = v242; // 0x407265
    int64_t v265 = v16 + 624; // 0x406c64
    int64_t v266 = function_40c180(v29, (int64_t *)*v241, (int64_t *)v265); // 0x406c6f
    v33 = v264;
    v30 = v29;
    if (v266 != 0) {
        int64_t v267 = function_403290(*(int32_t *)(v16 + 664), (int64_t *)(v16 + 112)); // 0x406c89
        int64_t v268 = function_403880((int32_t *)v265, NULL, (int64_t *)(v16 + 400), v240, v238, v235); // 0x406ca3
        function_403400((int64_t)dcgettext(NULL, "final: %s (UTC%s)\n", 5), v268, v267, v240, v238, v235);
        v33 = v264;
        v30 = v29;
    }
    goto lab_0x406842;
}
// Address range: 0x408000 - 0x408067
int64_t function_408000(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t env_val = (int64_t)getenv("TZ"); // 0x40801e
    int64_t v1 = function_40bea0(env_val, a2, a3); // 0x408029
    int64_t result = 0; // 0x408031
    if (v1 != 0) {
        int64_t v2 = function_406030(a1, a2, a3, 0, v1, env_val); // 0x408047
        function_40c160(v1);
        result = v2 & 0xffffffff;
    }
    // 0x408056
    return result;
}
// Address range: 0x408070 - 0x4080fb
int64_t function_408070(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int32_t v2 = v1;
    int64_t result; // 0x408070
    if (a3 == 1) {
        // 0x4080d0
        *(int32_t *)a1 = v2;
        if (v2 > 68) {
            // 0x4080c3
            return 1;
        }
        // 0x4080de
        result = 0;
        if ((a4 & 8) == 0) {
            // 0x4080e3
            *(int32_t *)a1 = v2 + 100;
            return 1;
        }
    } else {
        if (a3 != 2) {
            // 0x408098
            int64_t t; // bp-16, 0x408070
            time((int32_t *)&t);
            struct tm * time_info = localtime((int32_t *)&t); // 0x4080af
            int64_t v3 = (int64_t)time_info; // 0x4080af
            result = v3;
            if (time_info != NULL) {
                // 0x4080b9
                *(int32_t *)a1 = *(int32_t *)(v3 + 20);
                result = 1;
            }
        } else {
            // 0x40807c
            result = 0;
            if ((a4 & 2) != 0) {
                // 0x408081
                *(int32_t *)a1 = 100 * v2 - 1900 + *(int32_t *)(v1 + 4);
                return 1;
            }
        }
    }
    // 0x4080c3
    return result;
}
// Address range: 0x408100 - 0x4083a7
int64_t function_408100(int64_t * a1, int64_t a2, uint64_t a3) {
    char * str = (char *)a2; // 0x40811a
    int64_t len = strlen(str); // 0x40811a
    int64_t v1 = len; // 0x408126
    int64_t v2 = 0; // 0x408126
    if ((a3 & 4) != 0) {
        char * found_char_pos = strchr(str, 46); // 0x408134
        int64_t v3 = (int64_t)found_char_pos; // 0x408134
        v1 = len;
        v2 = v3;
        if (found_char_pos != NULL) {
            int64_t v4 = v3 - a2; // 0x408141
            v1 = v4;
            v2 = v3;
            if (len - v4 != 3) {
                // 0x408152
                return 0;
            }
        }
    }
    // 0x40816b
    if (v1 >= 13 || v1 % 2 != 0) {
        // 0x408152
        return 0;
    }
    int64_t v5 = a3 & 0xffffffff; // 0x40810d
    int64_t timep; // bp-200, 0x408100
    int64_t v6 = &timep; // 0x408113
    int64_t v7 = a2; // 0x408183
    int64_t result = 0; // 0x408191
    int64_t v8; // 0x408100
    uint64_t v9; // 0x40819c
    int64_t v10; // 0x4081bc
    while ((int32_t)*(char *)v7 < 58) {
        // 0x408193
        v7++;
        if (v1 + a2 == v7) {
            // 0x40819c
            v9 = v1 / 2;
            v10 = v6 + 96;
            v8 = 0;
            goto lab_0x4081a8;
        }
        result = 0;
    }
    // 0x408152
    return result;
  lab_0x4081a8:;
    int64_t v11 = 2 * v8 + a2;
    int64_t v12 = (int64_t)*(char *)v11; // 0x4081a8
    char v13 = *(char *)(v11 + 1); // 0x4081b3
    *(int32_t *)(v10 + 4 * v8) = (int32_t)((int64_t)v13 + 0xffffffd0 + 2 * (v12 + 0xffffff10 + 4 * v12));
    int64_t v14 = v8 + 1; // 0x4081c0
    v8 = v14;
    int32_t v15; // bp-104, 0x408100
    int32_t v16; // bp-148, 0x408100
    int32_t v17; // 0x408100
    int32_t v18; // 0x408100
    int32_t v19; // 0x408100
    int32_t v20; // bp-88, 0x408100
    int32_t v21; // 0x40834e
    if (v9 != v14) {
        goto lab_0x4081a8;
    } else {
        int64_t v22 = v9 - 4; // 0x4081c9
        if (a3 % 2 == 0) {
            int64_t v23 = function_408070((int64_t *)&v16, (int64_t *)&v15, v22, v5); // 0x40833c
            result = 0;
            if ((char)v23 == 0) {
                return result;
            } else {
                int64_t v24 = v6 + 80 + 4 * v9; // 0x408349
                v21 = *(int32_t *)v24;
                v17 = *(int32_t *)(v24 + 4);
                v18 = *(int32_t *)(v24 + 8);
                v19 = *(int32_t *)(v24 + 12);
                goto lab_0x408213;
            }
        } else {
            int64_t v25 = function_408070((int64_t *)&v16, (int64_t *)&v20, v22, v5); // 0x408206
            result = 0;
            v21 = v15;
            if ((char)v25 == 0) {
                return result;
            } else {
                goto lab_0x408213;
            }
        }
    }
  lab_0x408213:;
    int32_t v26 = 0; // 0x408216
    if (v2 == 0) {
        goto lab_0x408249;
    } else {
        int64_t v27 = (int64_t)*(char *)(v2 + 1) + 0xffffffd0; // 0x408221
        result = 0;
        if ((int32_t)v27 < 10) {
            char v28 = *(char *)(v2 + 2); // 0x40822d
            result = 0;
            if (v28 == 57 || (int32_t)v28 < 57) {
                // 0x40823e
                v26 = 10 * (v27 & 0xffffffff) + 0xffffffd0 + (int64_t)v28;
                goto lab_0x408249;
            } else {
                return result;
            }
        } else {
            return result;
        }
    }
  lab_0x408249:;
    int32_t v29 = v21 - 1;
    v15 = v26;
    v20 = v29;
    int64_t v30 = function_40bdb0(&v15); // 0x408279
    timep = v30;
    int64_t v31 = &v15; // 0x40828b
    if (v30 == -1) {
        struct tm * time_info = localtime((int32_t *)&timep); // 0x40837b
        result = 0;
        v31 = (int64_t)time_info;
        if (time_info != NULL) {
            goto lab_0x408291;
        } else {
            return result;
        }
    } else {
        goto lab_0x408291;
    }
  lab_0x408291:;
    int32_t v32 = *(int32_t *)(v31 + 20); // 0x408299
    int32_t v33 = *(int32_t *)(v31 + 16); // 0x40829c
    int32_t v34 = *(int32_t *)(v31 + 12); // 0x4082a5
    int32_t v35 = *(int32_t *)v31; // 0x4082b2
    int32_t v36 = *(int32_t *)(v31 + 8); // 0x4082b4
    int32_t v37 = *(int32_t *)(v31 + 4); // 0x4082bd
    if ((v33 ^ v29 | v32 ^ v16 | v34 ^ v17 | v35 ^ v26 || v36 ^ v18 || v37 ^ v19) == 0) {
        // 0x408308
        *a1 = timep;
        return 1;
    }
    // 0x4082c8
    result = 0;
    if (v26 != 60) {
        return result;
    } else {
        // 0x4082d1
        int64_t v38; // bp-184, 0x408100
        int64_t * v39 = __stpcpy_chk((char *)&v38, str, 16); // 0x4082de
        *(int16_t *)((int64_t)v39 - 2) = 0x3935;
        *(char *)v39 = 0;
        int64_t v40; // bp-192, 0x408100
        int64_t v41 = function_408100(&v40, (int64_t)&v38, v5); // 0x4082fb
        result = v41;
        if ((char)v41 != 0) {
            // 0x408308
            *a1 = timep;
            return 1;
        }
        return result;
    }
}
// Address range: 0x4083b0 - 0x408422
int64_t function_4083b0(void) {
    char * env_val = getenv("_POSIX2_VERSION"); // 0x4083bf
    if (env_val == NULL || *env_val == 0) {
        // 0x4083ce
        return 0x31069;
    }
    // 0x4083e0
    char * endptr; // bp-16, 0x4083b0
    int32_t str_as_l = strtol(env_val, &endptr, 10); // 0x4083ed
    if (*endptr != 0) {
        // 0x4083ce
        return 0x31069;
    }
    int64_t v1 = str_as_l; // 0x4083ed
    int64_t v2 = v1 - 0x7fffffff; // 0x408404
    return v2 == 0 | v2 < 0 != (0x7ffffffe - v1 & v1) < 0 ? v1 & 0xffffffff : 0x7fffffff;
}
// Address range: 0x408430 - 0x4084c9
int64_t function_408430(int64_t str) {
    // 0x408430
    if (str == 0) {
        // 0x4084a9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g47);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40843e
    int64_t result = (int64_t)found_char_pos; // 0x40843e
    if (found_char_pos == NULL) {
        // 0x408499
        g62 = str;
        g46 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x408448
    if (v1 - str < 7) {
        // 0x408499
        g62 = str;
        g46 = str;
        return result;
    }
    // 0x408458
    bool v2; // 0x408430
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x408430
    int64_t v5 = result - 6; // 0x408430
    int64_t v6 = 7; // 0x408466
    unsigned char v7 = *(char *)v5; // 0x408466
    char v8 = *(char *)v4; // 0x408466
    char v9 = v8; // 0x408466
    bool v10 = false; // 0x408466
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
    int64_t v12 = (int64_t)"lt-"; // 0x408470
    int64_t v13 = v1; // 0x408470
    int64_t v14 = 3; // 0x408470
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x408499
        g62 = str;
        g46 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x408482
    char v16 = *(char *)v12; // 0x408482
    char v17 = v16; // 0x408482
    bool v18 = false; // 0x408482
    while (v15 == v16) {
        // 0x408472
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
    int64_t v20 = v1; // 0x40848c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40848e
        v20 = result + 4;
        g44 = v20;
    }
    // 0x408499
    g62 = v20;
    g46 = v20;
    return result;
}
// Address range: 0x4084d0 - 0x4085c2
int64_t function_4084d0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4084e4
    int64_t result = (int64_t)v1; // 0x4084e4
    if (result != a1) {
        // 0x4084f1
        return result;
    }
    int64_t v2 = function_40c4f0(); // 0x408500
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4085b6
    if (v3 == 85) {
        // 0x408510
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4085a8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g24 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x40853e
        int64_t result3 = v4 != 96 ? (int64_t)&g20 : (int64_t)&g23; // 0x40854b
        // 0x4084f1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4085a8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g24 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x40858d
    int64_t result4 = v5 != 96 ? (int64_t)&g21 : (int64_t)&g22; // 0x40859a
    // 0x4084f1
    return result4;
}
// Address range: 0x4085d0 - 0x408627
int64_t function_4085d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4085d0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x408618
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x408627 - 0x4097f1
int64_t function_408627(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x408671
    int64_t v3 = 0; // 0x408671
    int64_t v4; // 0x408627
    int64_t v5; // 0x408627
    int64_t v6; // 0x408627
    int64_t v7; // 0x408627
    int64_t v8; // 0x408627
    int64_t v9; // 0x408627
    int64_t v10; // 0x408627
    int64_t v11; // 0x408627
    int64_t v12; // 0x408627
    int64_t v13; // 0x408627
    int64_t v14; // 0x408627
    int64_t v15; // 0x408627
    int64_t v16; // 0x408627
    int64_t v17; // 0x408627
    int64_t v18; // 0x408627
    int64_t result; // 0x408627
    int64_t v19; // 0x408627
    int32_t wc; // bp+132, 0x408627
    int64_t ps; // bp+136, 0x408627
    char v20; // 0x408be0
    int64_t v21; // 0x408be0
    int64_t v22; // 0x408f88
    int64_t v23; // 0x408627
    int64_t v24; // 0x408fa7
    int32_t v25; // 0x408627
    while (true) {
      lab_0x408678_2:
        // 0x408678
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x408627
        int64_t v27; // 0x4086ac
        while (true) {
          lab_0x408678:
            // 0x408678
            v5 = v26;
            bool v28 = v15 == v5; // 0x408683
            if (v15 == -1) {
                // 0x408685
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x408693
            if (v28) {
                // break (via goto) -> 0x408df8
                goto lab_0x408df8;
            }
            // 0x40869c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g80 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x408c8b
                    if (v25 % 2 == 0) {
                        goto lab_0x4087d1;
                    }
                    // 0x4090ad
                    v26 = v5 + 1;
                    goto lab_0x408678;
                }
                case 7: {
                    goto lab_0x4087d1;
                }
                case 8: {
                    goto lab_0x4087d1;
                }
                case 9: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4087d1;
                }
                case 12: {
                    goto lab_0x4087d1;
                }
                case 13: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40879d;
                }
                case 36: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4087d1;
                }
                case 38: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4087d1;
                }
                case 44: {
                    goto lab_0x4087d1;
                }
                case 45: {
                    goto lab_0x4087d1;
                }
                case 46: {
                    goto lab_0x4087d1;
                }
                case 47: {
                    goto lab_0x4087d1;
                }
                case 48: {
                    goto lab_0x4087d1;
                }
                case 49: {
                    goto lab_0x4087d1;
                }
                case 50: {
                    goto lab_0x4087d1;
                }
                case 51: {
                    goto lab_0x4087d1;
                }
                case 52: {
                    goto lab_0x4087d1;
                }
                case 53: {
                    goto lab_0x4087d1;
                }
                case 54: {
                    goto lab_0x4087d1;
                }
                case 55: {
                    goto lab_0x4087d1;
                }
                case 56: {
                    goto lab_0x4087d1;
                }
                case 57: {
                    goto lab_0x4087d1;
                }
                case 58: {
                    goto lab_0x4087d1;
                }
                case 59: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4087d1;
                }
                case 66: {
                    goto lab_0x4087d1;
                }
                case 67: {
                    goto lab_0x4087d1;
                }
                case 68: {
                    goto lab_0x4087d1;
                }
                case 69: {
                    goto lab_0x4087d1;
                }
                case 70: {
                    goto lab_0x4087d1;
                }
                case 71: {
                    goto lab_0x4087d1;
                }
                case 72: {
                    goto lab_0x4087d1;
                }
                case 73: {
                    goto lab_0x4087d1;
                }
                case 74: {
                    goto lab_0x4087d1;
                }
                case 75: {
                    goto lab_0x4087d1;
                }
                case 76: {
                    goto lab_0x4087d1;
                }
                case 77: {
                    goto lab_0x4087d1;
                }
                case 78: {
                    goto lab_0x4087d1;
                }
                case 79: {
                    goto lab_0x4087d1;
                }
                case 80: {
                    goto lab_0x4087d1;
                }
                case 81: {
                    goto lab_0x4087d1;
                }
                case 82: {
                    goto lab_0x4087d1;
                }
                case 83: {
                    goto lab_0x4087d1;
                }
                case 84: {
                    goto lab_0x4087d1;
                }
                case 85: {
                    goto lab_0x4087d1;
                }
                case 86: {
                    goto lab_0x4087d1;
                }
                case 87: {
                    goto lab_0x4087d1;
                }
                case 88: {
                    goto lab_0x4087d1;
                }
                case 89: {
                    goto lab_0x4087d1;
                }
                case 90: {
                    goto lab_0x4087d1;
                }
                case 91: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4087d1;
                }
                case 94: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4087d1;
                }
                case 96: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4087d1;
                }
                case 98: {
                    goto lab_0x4087d1;
                }
                case 99: {
                    goto lab_0x4087d1;
                }
                case 100: {
                    goto lab_0x4087d1;
                }
                case 101: {
                    goto lab_0x4087d1;
                }
                case 102: {
                    goto lab_0x4087d1;
                }
                case 103: {
                    goto lab_0x4087d1;
                }
                case 104: {
                    goto lab_0x4087d1;
                }
                case 105: {
                    goto lab_0x4087d1;
                }
                case 106: {
                    goto lab_0x4087d1;
                }
                case 107: {
                    goto lab_0x4087d1;
                }
                case 108: {
                    goto lab_0x4087d1;
                }
                case 109: {
                    goto lab_0x4087d1;
                }
                case 110: {
                    goto lab_0x4087d1;
                }
                case 111: {
                    goto lab_0x4087d1;
                }
                case 112: {
                    goto lab_0x4087d1;
                }
                case 113: {
                    goto lab_0x4087d1;
                }
                case 114: {
                    goto lab_0x4087d1;
                }
                case 115: {
                    goto lab_0x4087d1;
                }
                case 116: {
                    goto lab_0x4087d1;
                }
                case 117: {
                    goto lab_0x4087d1;
                }
                case 118: {
                    goto lab_0x4087d1;
                }
                case 119: {
                    goto lab_0x4087d1;
                }
                case 120: {
                    goto lab_0x4087d1;
                }
                case 121: {
                    goto lab_0x4087d1;
                }
                case 122: {
                    goto lab_0x4087d1;
                }
                case 123: {
                    goto lab_0x408775;
                }
                case 124: {
                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x408775;
                }
                case 126: {
                    goto lab_0x40879d;
                }
                default: {
                    goto lab_0x408b75;
                }
            }
        }
      lab_0x408b75:
        if (v23 != 1) {
            // 0x408ee0
            ps = 0;
            int64_t len = v15; // 0x408ef0
            if (v15 == -1) {
                // 0x408ef2
                len = strlen((char *)str);
            }
            // 0x408f1e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x408f7f:
                // 0x408f7f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x408f84
                int64_t v30 = v29 + str;
                v24 = function_40b670(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x4094fa_2;
                    }
                    case -1: {
                        goto lab_0x4094fa_2;
                    }
                    case -2: {
                        // 0x4095dd
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x409617
                            v19 = v18;
                            int64_t v31 = v18; // 0x40961a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x409627
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x409620
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x4094fa
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x4094fa_2;
                    }
                    case 1: {
                        goto lab_0x408f50;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x408ffc
                        char v34 = *(char *)v33; // 0x40900d
                        unsigned char v35; // 0x408627
                        if (v34 < 125) {
                            // 0x409018
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40902f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x409000
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40900d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x409018
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40902f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x409000
                            v33++;
                        }
                        goto lab_0x408f50;
                    }
                }
            }
            goto lab_0x4094fa_2;
        } else {
            // 0x408bc4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4087d1;
        }
    }
  lab_0x408df8:
    // 0x408df8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4096fa
        if (v8 > result) {
            // 0x409703
            *(char *)(v12 + result) = 0;
        }
        // 0x408a27
        return result;
    }
    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4087d1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4087e0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4089ea_2;
        }
    }
    int64_t v39 = result; // 0x4088e1
    char v40 = v20; // 0x4088e1
    int64_t v41 = v38; // 0x4088e1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4088e1
    int64_t v43 = v36; // 0x4088e1
    goto lab_0x40885d;
  lab_0x4089ea_2:
    // 0x408a27
    return function_4085d0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4094fa_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4087d1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4090ce
        int64_t v50 = v5 + 1; // 0x4091b1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4091b8
        char v52 = v20; // 0x4091b8
        int64_t v53 = result; // 0x4091b8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x409181
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x409185
            int64_t v56 = v54 + 1; // 0x40918a
            int64_t v57 = v51 + 1; // 0x4091b1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40917c
                v54 = v56;
                if (v47 > v54) {
                    // 0x409181
                    *(char *)(v54 + v48) = v55;
                }
                // 0x409185
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
        goto lab_0x40885d;
    }
  lab_0x408f50:
    // 0x408f50
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x408f6f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408f72
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x4094fa
        goto lab_0x4094fa_2;
    }
    goto lab_0x408f7f;
  lab_0x40879d:
    // 0x40879d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4089ea_2;
    }
    goto lab_0x4087d1;
  lab_0x408775:;
    bool v60 = v15 == 1; // 0x408780
    if (v15 == -1) {
        // 0x408782
        v60 = *(char *)v1 == 0;
    }
    // 0x40878e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4087d1;
    } else {
        goto lab_0x40879d;
    }
  lab_0x40885d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x408862
        *(char *)(v44 + v45) = v40;
    }
    // 0x408866
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x408678_2;
}
// Address range: 0x409800 - 0x40999e
int64_t function_409800(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x409802
    int32_t * v3 = __errno_location(); // 0x40981c
    int64_t v4 = (int64_t)g36; // 0x409821
    int32_t v5 = *v3; // 0x40982b
    int64_t v6 = v4; // 0x409841
    if (v2 >= (int64_t)*(int32_t *)&g39) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x409999
            function_40a860(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x409850
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x409857
        int64_t v9; // 0x409800
        if (g36 == &g37) {
            int64_t v10 = function_40a670(0, v8); // 0x40997a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g37); // 0x40997f
            *(int64_t *)&g36 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_40a670(v4, v8); // 0x40986b
            *(int64_t *)&g36 = v12;
            v9 = v12;
        }
        // 0x40987a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g39; // 0x40987a
        int32_t v14 = v7; // 0x409881
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g39 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4098b1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4098bb
    int64_t * v17 = (int64_t *)v15; // 0x4098be
    uint64_t v18 = *v17; // 0x4098be
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4098c1
    int64_t result = *v19; // 0x4098c1
    int64_t v20; // 0x409800
    uint64_t v21 = function_4085d0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4098e4
    if (v18 > v21) {
        // 0x40995b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4098f7
    *v17 = v22;
    if (result != (int64_t)&g63) {
        // 0x409907
        free((int64_t *)result);
    }
    int64_t result2 = function_40a610(v22); // 0x409921
    *v19 = result2;
    int64_t v23; // 0x409800
    function_4085d0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40995b
    *v3 = v5;
    return result2;
}
// Address range: 0x4099a0 - 0x4099d4
int64_t function_4099a0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4099a7
    int64_t result = function_40a810(a1 == 0 ? (int64_t)&g64 : a1, 56); // 0x4099c6
    return result;
}
// Address range: 0x4099e0 - 0x4099ef
int64_t function_4099e0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g64 : a1); // 0x4099ec
    return result;
}
// Address range: 0x4099f0 - 0x4099ff
int64_t function_4099f0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g64 : a1; // 0x4099f8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g64;
}
// Address range: 0x409a00 - 0x409a33
int64_t function_409a00(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g64 + 8 : a1 + 8; // 0x409a19
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x409a1e
    uint32_t v3 = *v2; // 0x409a1e
    uint32_t v4 = (int32_t)a2 % 32; // 0x409a22
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x409a40 - 0x409a53
int64_t function_409a40(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g64 + 4 : a1 + 4); // 0x409a4c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x409a60 - 0x409a8b
int64_t function_409a60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g64 : a1; // 0x409a68
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x409a85
        abort();
        // UNREACHABLE
    }
    // 0x409a7c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g64;
}
// Address range: 0x409a90 - 0x409b02
int64_t function_409a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g64 : a5; // 0x409ab2
    int32_t * v2 = __errno_location(); // 0x409abb
    uint32_t v3 = *(int32_t *)v1; // 0x409adb
    int64_t result = function_4085d0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x409aea
    return result;
}
// Address range: 0x409b10 - 0x409bf1
int64_t function_409b10(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g64 : a4; // 0x409b32
    int32_t * v2 = __errno_location(); // 0x409b38
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x409b57
    int32_t * v4 = (int32_t *)v1; // 0x409b5a
    int64_t v5 = function_4085d0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x409b75
    int64_t v6 = v5 + 1; // 0x409b7a
    int64_t result = function_40a610(v6); // 0x409b8f
    function_4085d0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x409bd4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x409bdd
    return result;
}
// Address range: 0x409c00 - 0x409c0a
int64_t function_409c00(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409c00
    return function_409b10(a1, a2, 0, a3);
}
// Address range: 0x409c10 - 0x409ca5
int64_t function_409c10(void) {
    uint32_t v1 = *(int32_t *)&g39; // 0x409c10
    int64_t v2 = v1; // 0x409c10
    int64_t v3 = v2; // 0x409c24
    if (v1 >= 2) {
        int64_t v4 = &g39;
        int64_t v5 = v4 + 16; // 0x409c43
        free((int64_t *)*(int64_t *)v4);
        v3 = &g81;
        while (v5 != (int64_t)g36 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x409c40
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g81;
        }
    }
    int64_t v6 = v3; // 0x409c5d
    if (g37 != 0x6183c0) {
        // 0x409c5f
        free((int64_t *)g37);
        g37 = 256;
        *(int64_t *)&g38 = (int64_t)&g63;
        v6 = &g81;
    }
    int64_t result = v6; // 0x409c81
    if (g36 != &g37) {
        // 0x409c83
        free(g36);
        *(int64_t *)&g36 = (int64_t)&g37;
        result = &g81;
    }
    // 0x409c96
    *(int32_t *)&g39 = 1;
    return result;
}
// Address range: 0x409cb0 - 0x409cc1
int64_t function_409cb0(void) {
    // 0x409cb0
    int64_t v1; // 0x409cb0
    return function_409800(v1, v1, -1, (int64_t *)&g64);
}
// Address range: 0x409cd0 - 0x409cda
int64_t function_409cd0(void) {
    // 0x409cd0
    int64_t v1; // 0x409cd0
    return function_409800(v1, v1, v1, (int64_t *)&g64);
}
// Address range: 0x409ce0 - 0x409cf6
int64_t function_409ce0(int64_t a1) {
    // 0x409ce0
    return function_409800(0, a1, -1, (int64_t *)&g64);
}
// Address range: 0x409d00 - 0x409d12
int64_t function_409d00(int64_t a1, int64_t a2) {
    // 0x409d00
    return function_409800(0, a1, a2, (int64_t *)&g64);
}
// Address range: 0x409d20 - 0x409d88
int64_t function_409d20(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409d30
    return function_409800((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409d90 - 0x409df4
int64_t function_409d90(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409da0
    return function_409800((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x409e00 - 0x409e0c
int64_t function_409e00(int64_t a1, int64_t a2) {
    // 0x409e00
    return function_409d20(0, a1 & 0xffffffff, a2);
}
// Address range: 0x409e10 - 0x409e1f
int64_t function_409e10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409e10
    return function_409d90(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x409e20 - 0x409e90
int64_t function_409e20(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g64); // 0x409e2d
    int128_t v2 = __asm_movdqa(g65); // 0x409e35
    int128_t v3 = __asm_movdqa(g66); // 0x409e3d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x409e52
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x409e68
    uint32_t v6 = *v5; // 0x409e68
    uint32_t v7 = (int32_t)a3 % 32; // 0x409e6d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_409800(0, a1, a2, &v4);
}
// Address range: 0x409e90 - 0x409e9d
int64_t function_409e90(int64_t a1, int64_t a2) {
    // 0x409e90
    return function_409e20(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x409ea0 - 0x409eb1
int64_t function_409ea0(int64_t a1) {
    // 0x409ea0
    return function_409e20(a1, -1, 58);
}
// Address range: 0x409ec0 - 0x409eca
int64_t function_409ec0(void) {
    // 0x409ec0
    int64_t v1; // 0x409ec0
    return function_409e20(v1, v1, 58);
}
// Address range: 0x409ed0 - 0x409f3e
int64_t function_409ed0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409eea
    return function_409800(a1, a3, -1, &v1);
}
// Address range: 0x409f40 - 0x409fac
int64_t function_409f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g64); // 0x409f47
    int128_t v2 = __asm_movdqa(g65); // 0x409f4f
    int128_t v3 = __asm_movdqa(g66); // 0x409f57
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x409f79
    if (a2 == 0 || a3 == 0) {
        // 0x409fa7
        abort();
        // UNREACHABLE
    }
    // 0x409f8a
    return function_409800(a1, a4, a5, &v4);
}
// Address range: 0x409fb0 - 0x409fb9
int64_t function_409fb0(void) {
    // 0x409fb0
    int64_t v1; // 0x409fb0
    return function_409f40(v1, v1, v1, v1, -1);
}
// Address range: 0x409fc0 - 0x409fd7
int64_t function_409fc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409fc0
    return function_409f40(0, a1, a2, a3, -1);
}
// Address range: 0x409fe0 - 0x409ff3
int64_t function_409fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409fe0
    return function_409f40(0, a1, a2, a3, a4);
}
// Address range: 0x40a000 - 0x40a00a
int64_t function_40a000(void) {
    // 0x40a000
    int64_t v1; // 0x40a000
    return function_409800(v1, v1, v1, &g35);
}
// Address range: 0x40a010 - 0x40a022
int64_t function_40a010(int64_t a1, int64_t a2) {
    // 0x40a010
    return function_409800(0, a1, a2, &g35);
}
// Address range: 0x40a030 - 0x40a041
int64_t function_40a030(int64_t a1, int64_t a2) {
    // 0x40a030
    return function_409800(a1, a2, -1, &g35);
}
// Address range: 0x40a050 - 0x40a066
int64_t function_40a050(int64_t a1) {
    // 0x40a050
    return function_409800(0, a1, -1, &g35);
}
// Address range: 0x40a070 - 0x40a44d
int64_t function_40a070(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x40a108
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40a08c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x40a0a6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40a0eb
    if (a6 < 10) {
        // 0x40a0fa
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x40a1f2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x40a450 - 0x40a470
int64_t function_40a450(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40a450
    if (a5 == 0) {
        // 0x40a46b
        return function_40a070(a1, a2, a3, a4, a5, 0, (int64_t)&g81);
    }
    int64_t v1 = 0; // 0x40a457
    v1++;
    int64_t v2 = v1; // 0x40a469
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x40a460
        v1++;
        v2 = v1;
    }
    // 0x40a46b
    return function_40a070(a1, a2, a3, a4, a5, v2, (int64_t)&g81);
}
// Address range: 0x40a470 - 0x40a4d0
int64_t function_40a470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x40a470
    int64_t v3 = &v2; // 0x40a470
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x40a4a3
    int64_t v6; // 0x40a48d
    int64_t * v7; // 0x40a4ab
    int64_t v8; // 0x40a4ab
    int64_t v9; // 0x40a4b7
    if (v5 < 48) {
        // 0x40a480
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x40a4c3
            break;
        }
    } else {
        // 0x40a4ab
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x40a4c3
            break;
        }
    }
    int64_t v10 = 10; // 0x40a4a1
    while (v4 != 9) {
        // 0x40a499
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x40a480
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x40a4c3
                break;
            }
        } else {
            // 0x40a4ab
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x40a4c3
                break;
            }
        }
        // 0x40a499
        v10 = 10;
    }
    // 0x40a4c3
    return function_40a070(a1, a2, a3, a4, v3, v10, (int64_t)&g81);
}
// Address range: 0x40a4d0 - 0x40a58c
int64_t function_40a4d0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x40a4d0
    int64_t v1; // bp-168, 0x40a4d0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x40a4d0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x40a4d0
    int64_t v8; // 0x40a4d0
    int64_t v9; // bp-56, 0x40a4d0
    int64_t v10; // 0x40a535
    int64_t v11; // 0x40a559
    if ((int32_t)v6 < 48) {
        // 0x40a520
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x40a570
            break;
        }
    } else {
        // 0x40a552
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x40a570
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40a54a
    int64_t v13 = 10; // 0x40a54a
    while (v5 != 9) {
        // 0x40a54c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x40a520
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x40a570
                break;
            }
        } else {
            // 0x40a552
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x40a570
                break;
            }
        }
        // 0x40a542
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x40a570
    int64_t v14; // bp-136, 0x40a4d0
    int64_t result = function_40a070(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g81); // 0x40a57f
    return result;
}
// Address range: 0x40a590 - 0x40a604
int64_t function_40a590(int64_t a1) {
    // 0x40a590
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x40a5f3
    return fputs_unlocked(v1, g45);
}
// Address range: 0x40a610 - 0x40a62a
int64_t function_40a610(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x40a614
    if (size != 0 != (mem == NULL)) {
        // 0x40a623
        return (int64_t)mem;
    }
    // 0x40a625
    function_40a860(size);
    // UNREACHABLE
}
// Address range: 0x40a630 - 0x40a651
int64_t function_40a630(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x40a633
    int64_t v2 = v1; // 0x40a633
    if (v2 < 0) {
        // 0x40a64b
        function_40a860(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40a649
        return function_40a610(v2);
    }
    // 0x40a64b
    function_40a860(v2);
    // UNREACHABLE
}
// Address range: 0x40a660 - 0x40a662
int64_t function_40a660(void) {
    // 0x40a660
    int64_t v1; // 0x40a660
    return function_40a610(v1);
}
// Address range: 0x40a670 - 0x40a6a6
int64_t function_40a670(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x40a698
        free(v1);
        return (int32_t)&g81 ^ (int32_t)&g81;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x40a681
    if (a2 != 0 != (mem == NULL)) {
        // 0x40a690
        return (int64_t)mem;
    }
    // 0x40a6a1
    function_40a860(a1);
    // UNREACHABLE
}
// Address range: 0x40a6b0 - 0x40a6d1
int64_t function_40a6b0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x40a6b3
    int64_t v2 = v1; // 0x40a6b3
    if (v2 < 0) {
        // 0x40a6cb
        function_40a860(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x40a6c9
        return function_40a670(a1, v2);
    }
    // 0x40a6cb
    function_40a860(a1);
    // UNREACHABLE
}
// Address range: 0x40a6e0 - 0x40a766
int64_t function_40a6e0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40a73b
            function_40a860(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40a670(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x40a723
    if (a2 == 0) {
        // 0x40a748
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x40a728
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40a73b
        function_40a860(a1);
        // UNREACHABLE
    }
    // 0x40a70a
    *(int64_t *)a2 = v2;
    return function_40a670(a1, v2 * a3);
}
// Address range: 0x40a770 - 0x40a7c0
int64_t function_40a770(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x40a770
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40a7ba
            function_40a860(a1);
            // UNREACHABLE
        }
        // 0x40a792
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_40a670(a1, v1);
    }
    if (a2 == 0) {
        // 0x40a7a5
        *(int64_t *)a2 = 128;
        return function_40a670(0, 128);
    }
    // 0x40a7b8
    if (a2 < 0) {
        // 0x40a7ba
        function_40a860(a1);
        // UNREACHABLE
    }
    // 0x40a792
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_40a670(a1, v1);
}
// Address range: 0x40a7c0 - 0x40a7d7
int64_t function_40a7c0(int64_t a1, int64_t a2) {
    // 0x40a7c0
    return (int64_t)memset((int64_t *)function_40a610(a1), 0, (int32_t)a1);
}
// Address range: 0x40a7e0 - 0x40a80e
int64_t function_40a7e0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x40a7e7
    if ((int64_t)v1 < 0) {
        // 0x40a809
        function_40a860(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x40a809
        function_40a860(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40a7fa
    if (mem != NULL) {
        // 0x40a804
        return (int64_t)mem;
    }
    // 0x40a809
    function_40a860(nmemb);
    // UNREACHABLE
}
// Address range: 0x40a810 - 0x40a838
int64_t function_40a810(int64_t a1, int64_t a2) {
    int64_t v1 = function_40a610(a2); // 0x40a81f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x40a840 - 0x40a853
int64_t function_40a840(int64_t str) {
    // 0x40a840
    return function_40a810(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x40a860 - 0x40a891
int64_t function_40a860(int64_t a1) {
    // 0x40a860
    error(g34, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40a8a0 - 0x40a97f
int64_t function_40a8a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40a8ac
    uint32_t v2 = *v1; // 0x40a8ac
    int64_t v3 = a2 & 0xffffffff; // 0x40a8b1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40a8b4
    uint64_t v5 = (int64_t)*v4; // 0x40a8b4
    int64_t v6; // 0x40a922
    if (v3 <= v5) {
      lab_0x40a91c_2:
        // 0x40a91c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40a8a2
    int64_t v8 = v2; // 0x40a8a0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40a91c
        goto lab_0x40a91c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40a8d8
    int64_t v17; // 0x40a8e6
    int64_t * v18; // 0x40a900
    int64_t * v19; // 0x40a903
    int64_t v20; // 0x40a90e
    int64_t v21; // 0x40a8e6
    while ((v16 & 0xffffffff) > v10) {
        // 0x40a8e3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40a900
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40a917
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40a91c
            goto lab_0x40a91c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40a91c
            goto lab_0x40a91c_2;
        }
        // 0x40a8d2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40a95b
    int64_t * v23 = (int64_t *)v22; // 0x40a960
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40a963
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40a960
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40a977
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40a8cd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40a91c
            goto lab_0x40a91c_2;
        }
        // 0x40a8d2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40a8e3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40a900
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40a917
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40a91c
                goto lab_0x40a91c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40a91c
                goto lab_0x40a91c_2;
            }
            // 0x40a8d2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40a940
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40a960
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40a977
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40a91c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40a980 - 0x40af9c
int64_t function_40a980(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40a99f
    int64_t v2 = *v1; // 0x40a99f
    char * str2 = (char *)v2; // 0x40a9ac
    char c = *str2; // 0x40a9ac
    int64_t v3 = v2; // 0x40a9d8
    int64_t v4 = 0; // 0x40a980
    int32_t v5; // 0x40a980
    int64_t v6; // 0x40a980
    int64_t v7; // 0x40a980
    int64_t v8; // 0x40a980
    int64_t v9; // 0x40a980
    int64_t v10; // 0x40a980
    int64_t v11; // 0x40a980
    int64_t v12; // 0x40a980
    int64_t v13; // 0x40a980
    int64_t str3; // 0x40a980
    int64_t v14; // 0x40a980
    int64_t v15; // 0x40a980
    int64_t v16; // 0x40a980
    int64_t v17; // 0x40a980
    int32_t v18; // 0x40a980
    int32_t v19; // 0x40a980
    int32_t v20; // 0x40a980
    int32_t v21; // 0x40a980
    int32_t v22; // 0x40a980
    int32_t v23; // 0x40a980
    int32_t v24; // 0x40a980
    int32_t v25; // 0x40a980
    int32_t v26; // 0x40a980
    int32_t v27; // 0x40a980
    int32_t v28; // 0x40a980
    int32_t v29; // 0x40a980
    int64_t nmemb; // 0x40a980
    int64_t v30; // 0x40a980
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40a9dc
            while (v31 != 0 == (v31 != 61)) {
                // 0x40a9d8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40a9e8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40a9ee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40a9b8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40aa1c
                int64_t v34; // 0x40a980
                int64_t v35; // 0x40a980
                if (strncmp(str, str2, n) == 0) {
                    // 0x40aa25
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40aba0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40aa36
                int64_t v37 = *(int64_t *)v36; // 0x40aa3a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40aa10
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40aa25
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40aba0;
                        }
                    }
                    // 0x40aa36
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
                  lab_0x40aa86:
                    // 0x40aa86
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
                        goto lab_0x40aae0;
                    } else {
                        if (v11 == 0) {
                            // 0x40ac50
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40aae0;
                        } else {
                            if (v39 == 0) {
                                // 0x40ac00
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40aaaa;
                                } else {
                                    // 0x40ac0c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40aaaa;
                                    } else {
                                        // 0x40ac1a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40aaaa;
                                        } else {
                                            goto lab_0x40aae0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40aaaa;
                            }
                        }
                    }
                }
              lab_0x40aaf1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40acc6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40ae72
                            flockfile(g47);
                            int64_t v41 = *v1; // 0x40ae92
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40aedf
                            int64_t v43 = (int64_t)g47;
                            int64_t v44 = v43; // 0x40aef9
                            int64_t v45; // 0x40aefb
                            if (*(char *)v42 != 0) {
                                // 0x40aefb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g47;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40aef3
                            while (v17 + nmemb != v42) {
                                // 0x40aef5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40aefb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g47;
                                }
                                // 0x40aee8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40af20
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g47);
                            v40 = *v1;
                        } else {
                            // 0x40acd4
                            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40ae2f
                        free((int64_t *)v17);
                    }
                    // 0x40ad29
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40ad40
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40abee
                    return 63;
                }
                // 0x40ab10
                v5 = v39;
                if (v13 != 0) {
                    // 0x40ab94
                    v35 = v13;
                    v34 = v25;
                  lab_0x40aba0:;
                    int32_t * v49 = (int32_t *)a7; // 0x40abb0
                    uint32_t v50 = *v49; // 0x40abb0
                    int64_t v51 = v50; // 0x40abb0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40abba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40abc3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40adef
                                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40ad9a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40abee
                            return 63;
                        }
                        // 0x40ac38
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40af4f
                                    __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40ae4d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40ae60
                                // 0x40abee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40ad5e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40ad72
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40abdb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40abde
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40abe2
                    int64_t result = v59; // 0x40abe8
                    if (v58 != 0) {
                        // 0x40abea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40abee
                    return result;
                }
            } else {
                // 0x40a9ee
                v5 = v32;
            }
            // break -> 0x40ab15
            break;
        }
    }
    // 0x40ab15
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40ab2d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40ab37
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40abee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40ac79
        __fprintf_chk(g47, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40ab66
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40ab76
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40aae0:
    // 0x40aae0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40aae0
    int64_t v63 = *(int64_t *)v62; // 0x40aae4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40aaf1
        goto lab_0x40aaf1;
    }
    goto lab_0x40aa86;
  lab_0x40aaaa:
    // 0x40aaaa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40a980
    int32_t v65; // 0x40a980
    int32_t v66; // 0x40a980
    if (v27 != 0) {
        goto lab_0x40aae0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40ac60
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40aae0;
            } else {
                goto lab_0x40aad1;
            }
        } else {
            // 0x40aac5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40adbc
                int64_t v67 = (int64_t)mem; // 0x40adbc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40aae0;
                } else {
                    // 0x40adcf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40aad1;
                }
            } else {
                goto lab_0x40aad1;
            }
        }
    }
  lab_0x40aad1:
    // 0x40aad1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40aae0;
}
// Address range: 0x40afa0 - 0x40b566
int64_t function_40afa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40afc1
    if (v3 < 1) {
        // 0x40b17e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40afbd
    int32_t v5 = *(int32_t *)a7; // 0x40afc9
    uint64_t v6 = a1 & 0xffffffff; // 0x40afcb
    int64_t v7 = v2; // 0x40afd0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40afd3
    *v8 = 0;
    int64_t v9; // 0x40afa0
    int64_t v10; // 0x40afa0
    int64_t v11; // 0x40afa0
    int64_t v12; // 0x40afa0
    int64_t str; // 0x40afa0
    int64_t v13; // 0x40afa0
    int64_t v14; // 0x40afa0
    int64_t v15; // 0x40afa0
    int64_t v16; // 0x40afa0
    int64_t v17; // 0x40afa0
    int32_t v18; // 0x40afa0
    char v19; // 0x40afa0
    if (v5 == 0) {
        // 0x40b1b8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40afea;
    } else {
        // 0x40afe3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40b030
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40b033
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40b0f8;
            } else {
                int64_t v22 = v7 + 1; // 0x40b046
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40b056
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40b10c;
                } else {
                    goto lab_0x40b068;
                }
            }
        } else {
            goto lab_0x40afea;
        }
    }
  lab_0x40afea:
    // 0x40afea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40aff0
    *v24 = 0;
    int64_t v25; // 0x40afa0
    int64_t v26; // 0x40afa0
    int64_t v27; // 0x40afa0
    switch (*(char *)&v2) {
        case 45: {
            // 0x40b0e0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b0ed;
        }
        case 43: {
            // 0x40b3f0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b0ed;
        }
        default: {
            // 0x40b00c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40b36f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40b488
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40b0ed;
                } else {
                    // 0x40b37d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40b01a;
                }
            } else {
                goto lab_0x40b01a;
            }
        }
    }
  lab_0x40b0f8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40b0ff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40b068;
    } else {
        goto lab_0x40b10c;
    }
  lab_0x40b01a:
    // 0x40b01a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40b0ed;
  lab_0x40b0ed:
    // 0x40b0ed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40b0f8;
  lab_0x40b068:;
    uint32_t v30 = *(int32_t *)a7; // 0x40b068
    int64_t v31 = v30; // 0x40b068
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40b06a
    if ((int64_t)*v32 > v31) {
        // 0x40b06f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40b072
    if (*v33 > v30) {
        // 0x40b077
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40b07a
    int64_t v35 = v31; // 0x40b07e
    int64_t v36 = v15; // 0x40b07e
    int64_t v37; // 0x40afa0
    int64_t v38; // 0x40afa0
    int64_t v39; // 0x40afa0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40b1e8
        int64_t v41 = v40; // 0x40b1e8
        v2 = v41;
        int64_t v42; // 0x40afa0
        if (*v33 == v40) {
            // 0x40b3d0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40b3d8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40b1f4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40b208
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40b211
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40b21a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40b231
            int64_t v47 = v45 & 0xffffffff; // 0x40b235
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40b23e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40b244
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40b246;
                }
            }
            int64_t v48 = v47 + 1; // 0x40b220
            int64_t v49 = v48 & 0xffffffff; // 0x40b220
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40b231
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40b23e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40b244
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40b246;
                    }
                }
                // 0x40b220
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40b3e8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40b246;
    } else {
        goto lab_0x40b084;
    }
  lab_0x40b10c:
    // 0x40b10c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40b10f
    int64_t v51 = v12; // 0x40b10f
    int64_t v52 = v14; // 0x40b10f
    if (*(char *)v10 == 0) {
        goto lab_0x40b068;
    } else {
        goto lab_0x40b115;
    }
  lab_0x40b084:;
    int32_t v53 = v35; // 0x40b084
    int64_t v54; // 0x40afa0
    int64_t v55; // 0x40afa0
    int64_t v56; // 0x40afa0
    int64_t v57; // 0x40afa0
    int64_t v58; // 0x40afa0
    int64_t v59; // 0x40afa0
    char * v60; // 0x40afa0
    int64_t v61; // 0x40afa0
    int64_t v62; // 0x40b099
    int64_t v63; // 0x40afa0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40b1d3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40b1d6;
    } else {
        // 0x40b08c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40afa0
        int64_t v66 = v65 ? -1 : 1; // 0x40b0a0
        int64_t v67 = (int64_t)"--"; // 0x40afa0
        int64_t v68 = v62; // 0x40afa0
        int64_t v69 = 3; // 0x40b0a0
        unsigned char v70 = *(char *)v68; // 0x40b0a0
        char v71 = *(char *)v67; // 0x40b0a0
        char v72 = v71; // 0x40b0a0
        bool v73 = false; // 0x40b0a0
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
            // 0x40b190
            if (*(char *)v62 == 45) {
                // 0x40b250
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40b250
                if (c == 0) {
                    goto lab_0x40b19a;
                } else {
                    // 0x40b25d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40b2e0;
                    } else {
                        if (c == 45) {
                            // 0x40b4c3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40b335;
                        } else {
                            // 0x40b26e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40b2e0;
                            } else {
                                // 0x40b273
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40b294;
                                } else {
                                    // 0x40b27a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40b2e0;
                                    } else {
                                        goto lab_0x40b294;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40b19a;
            }
        } else {
            uint32_t v75 = *v33; // 0x40b0b0
            v2 = v75;
            int32_t v76 = *v32; // 0x40b0b3
            int64_t v77 = v35 + 1; // 0x40b0b6
            int32_t v78 = v77; // 0x40b0b9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40b420
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40b0c7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40b0d5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40b1d6;
        }
    }
  lab_0x40b115:;
    // 0x40b115
    int64_t v79; // bp-104, 0x40afa0
    int64_t v80 = &v79; // 0x40afaa
    int64_t v81 = v50 + 1; // 0x40b115
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40b11c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40b121
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40b125
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40b129
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40b131
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40b136
    int32_t c2 = v84; // 0x40b136
    char * found_char_pos = strchr(str2, c2); // 0x40b136
    int64_t v87 = *v82; // 0x40b13b
    v2 = v87;
    int64_t v88 = *v85; // 0x40b145
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40b150
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40b440
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40b40d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40b17e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40b136
    char v91 = *(char *)(v90 + 1); // 0x40b16b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40b125
        if (v91 != 58) {
            // 0x40b17e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40b394
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40b498
                *v8 = 0;
            } else {
                // 0x40b47c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40b3be
            *v83 = 0;
            // 0x40b17e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40b39e
        if (v93 != 0) {
            // 0x40b430
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40b3be
            *v83 = 0;
            // 0x40b17e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40b3b1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40b3be
            *v83 = 0;
            // 0x40b17e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40b4fa
            __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40b4aa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40b4b1
        // 0x40b3be
        *v83 = 0;
        // 0x40b17e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40b309
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40b30b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40b530
                __fprintf_chk(g47, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40b4e1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40b4e8
            // 0x40b17e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40b316
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40b31a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40b335;
  lab_0x40b246:
    // 0x40b246
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40b084;
  lab_0x40b335:;
    int64_t v99 = function_40a980(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40b353
    // 0x40b17e
    return v99 & 0xffffffff;
  lab_0x40b1d6:;
    int32_t v100 = v55; // 0x40b1d6
    if (v100 != (int32_t)v59) {
        // 0x40b1da
        *(int32_t *)a7 = v100;
    }
    // 0x40b17e
    return 0xffffffff;
  lab_0x40b19a:
    // 0x40b19a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40b1a1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40b17e
    return v99 & 0xffffffff;
  lab_0x40b2e0:
    // 0x40b2e0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40b115;
  lab_0x40b294:
    // 0x40b294
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40a980(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g5); // 0x40b2ba
    if ((int32_t)v101 != -1) {
        // 0x40b17e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40b2cf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40b2e0;
}
// Address range: 0x40b570 - 0x40b5c6
int64_t function_40b570(int64_t a1) {
    // 0x40b570
    *(int32_t *)&g67 = g42;
    *(int32_t *)&g68 = g41;
    int64_t v1; // 0x40b570
    int64_t result = function_40afa0(v1, v1, v1, v1, v1, v1, &g67, a1 & 0xffffffff); // 0x40b596
    g42 = *(int32_t *)&g67;
    g74 = (char *)g70;
    *(int32_t *)&g40 = g69;
    return result;
}
// Address range: 0x40b5d0 - 0x40b5e8
int64_t function_40b5d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b5d0
    return function_40b570(1);
}
// Address range: 0x40b5f0 - 0x40b603
int64_t function_40b5f0(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x40b5f0
    return function_40b570(0);
}
// Address range: 0x40b610 - 0x40b625
int64_t function_40b610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b610
    return function_40afa0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40b630 - 0x40b646
int64_t function_40b630(void) {
    // 0x40b630
    return function_40b570(0);
}
// Address range: 0x40b650 - 0x40b668
int64_t function_40b650(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b650
    return function_40afa0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40b670 - 0x40b6ea
int64_t function_40b670(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40b67b
    int64_t v2 = (int64_t)&g25; // 0x40b67b
    int32_t * pwc; // 0x40b670
    int64_t v3; // 0x40b670
    int64_t n; // 0x40b670
    if (a2 == 0) {
        goto lab_0x40b6c2;
    } else {
        // 0x40b67d
        if (a3 == 0) {
            // 0x40b6a8
            return -2;
        }
        // 0x40b689
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40b6c2;
        } else {
            goto lab_0x40b694;
        }
    }
  lab_0x40b6c2:
    // 0x40b6c2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40b670
    pwc = (int32_t *)&v4;
    goto lab_0x40b694;
  lab_0x40b694:;
    char * wstr = (char *)v3; // 0x40b69a
    int64_t ps; // 0x40b670
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40b69a
    int64_t result = v5; // 0x40b69a
    if (v5 < 0xfffffffe) {
        // 0x40b6a8
        return result;
    }
    int64_t result2 = result; // 0x40b6d9
    if ((char)function_40c490(0, v3) == 0) {
        // 0x40b6db
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40b6a8
    return result2;
}
// Address range: 0x40b6f0 - 0x40b807
int64_t function_40b6f0(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9, int64_t a10) {
    int64_t v1 = a1 / 4 + 475 + (int64_t)(a1 % 4 == 0); // 0x40b71e
    int32_t v2 = (a6 >> 2) + 475 + (int32_t)(a6 % 4 == 0); // 0x40b73a
    int32_t v3 = v1; // 0x40b743
    int32_t v4 = ((int32_t)(0x51eb851f * (0x100000000 * v1 >> 32) / 0x100000000) >> 3) - (v3 >> 31); // 0x40b754
    int32_t v5 = v4 - (int32_t)(-25 * v4 + v3 < 0); // 0x40b764
    int32_t v6 = v2 / 25; // 0x40b778
    int32_t v7 = v6 - (int32_t)(-25 * v6 + v2 < 0); // 0x40b789
    return (0x100000000 * a5 >> 32) - (0x100000000 * a10 >> 32) + 60 * ((0x100000000 * a4 >> 32) - (0x100000000 * a9 >> 32) + 60 * ((0x100000000 * a3 >> 32) - (0x100000000 * a8 >> 32) + 24 * (365 * (a1 - (int64_t)a6) + a2 - (0x100000000 * a7 >> 32) + (int64_t)(v3 - v2 - v5 + (v5 >> 2) + v7 - (v7 >> 2)))));
}
// Address range: 0x40b810 - 0x40b8a1
int64_t function_40b810(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int32_t a5, uint64_t a6, int64_t a7) {
    if (a7 != 0) {
        uint32_t v1 = *(int32_t *)a7; // 0x40b81e
        uint32_t v2 = *(int32_t *)(a7 + 4); // 0x40b823
        uint32_t v3 = *(int32_t *)(a7 + 8); // 0x40b829
        uint32_t v4 = *(int32_t *)(a7 + 28); // 0x40b82f
        int32_t v5 = *(int32_t *)(a7 + 20); // 0x40b835
        int64_t v6 = function_40b6f0(a1, a2, (int64_t)a3, (int64_t)a4, (int64_t)a5, v5, (int64_t)v4, (int64_t)v3, (int64_t)v2, (int64_t)v1); // 0x40b839
        int64_t result = v6 + a6; // 0x40b842
        if (((result ^ v6) & (result ^ a6)) >= 0) {
            // 0x40b847
            return result;
        }
    }
    if (a6 >= 0) {
        int64_t v7 = a6 - 0x7ffffffffffffffd; // 0x40b86d
        int64_t result2 = v7 < 0 == (0x7ffffffffffffffc - a6 & a6) < 0 == (v7 != 0) ? a6 - 1 : 0x7fffffffffffffff; // 0x40b871
        return result2;
    }
    // 0x40b880
    if (a6 > -0x7fffffffffffffff) {
        // 0x40b847
        return -0x8000000000000000;
    }
    // 0x40b88f
    return a6 + 1;
}
// Address range: 0x40b8b0 - 0x40b96f
int64_t function_40b8b0(int64_t a1, int64_t result, uint64_t a3) {
    if (result == 0 != a3 != 0) {
        // 0x40b8dd
        return result;
    }
    int64_t v1 = ((int64_t)a3 >> 1) + a3 % 2; // 0x40b91b
    if (v1 != 0 == (v1 != a3)) {
        // 0x40b8dd
        return result;
    }
    int64_t v2 = v1; // 0x40b921
    while (v2 != 0) {
        // 0x40b928
        v2 = (v2 >> 1) + v2 % 2;
    }
    // 0x40b8dd
    return result;
}
// Address range: 0x40b970 - 0x40bdaa
int64_t function_40b970(int64_t a1, int64_t a2, int64_t * a3) {
    int32_t v1 = *(int32_t *)(a1 + 12); // 0x40b98b
    uint32_t v2 = *(int32_t *)(a1 + 4); // 0x40b993
    uint32_t v3 = *(int32_t *)(a1 + 8); // 0x40b9a4
    int32_t v4 = *(int32_t *)(a1 + 16); // 0x40b9a7
    int32_t v5 = v4 / 12; // 0x40b9c5
    int32_t v6 = -12 * v5 + v4; // 0x40b9cf
    int32_t v7 = *(int32_t *)(a1 + 20); // 0x40b9da
    int64_t v8 = (int64_t)(v5 - (int32_t)(v6 < 0)) + (int64_t)v7; // 0x40b9e1
    int64_t v9 = 0; // 0x40b9e7
    if (v8 % 4 == 0) {
        // 0x40b9e9
        v9 = 1;
        if (v8 == (v8 >> 63 & 100)) {
            // 0x40bc50
            v9 = v8 < 0;
        }
    }
    // 0x40ba25
    int64_t v10; // 0x40b970
    int32_t v11 = v10;
    int64_t v12 = v9;
    uint16_t v13 = *(int16_t *)(2 * (v12 + (int64_t)((v6 >> 31 & 12) + v6) + 4 * v12) + (int64_t)&g26); // 0x40ba57
    int32_t v14 = v11 - 59; // 0x40ba70
    int64_t v15 = v14 == 0 | v14 < 0 != (58 - v11 & v11) < 0 ? v10 & 0xffffffff : 59; // 0x40ba73
    int64_t v16 = (int32_t)v15 >= 0 ? v15 : 0; // 0x40ba87
    int64_t v17 = function_40b6f0(v8, (int64_t)v1 - 1 + (int64_t)v13, (int64_t)v3, (int64_t)v2, v16, 70, 0, 0, 0, -v12 & 0xffffffff); // 0x40bab0
    int64_t v18; // bp-280, 0x40b970
    int64_t v19 = &v18; // 0x40bab5
    int64_t * v20 = (int64_t *)(v19 + 16);
    int64_t v21 = v19 + 96; // 0x40bb03
    int64_t v22 = v19 + 80; // 0x40bb08
    int64_t * v23 = (int64_t *)v22;
    int64_t * v24 = (int64_t *)(v19 - 16);
    int32_t * v25 = (int32_t *)(v19 + 28);
    int32_t * v26 = (int32_t *)(v19 + 12);
    int32_t * v27 = (int32_t *)(v19 + 24);
    int64_t * v28 = (int64_t *)(v19 + 32);
    int64_t v29 = v19 + 128;
    int32_t * v30 = (int32_t *)v29;
    int64_t v31 = v19 + 40;
    int32_t * v32 = (int32_t *)v31;
    int32_t v33 = 6; // 0x40bad3
    int64_t v34 = v17; // 0x40bad3
    int64_t v35 = v17;
    uint64_t v36 = 0;
    int64_t v37 = function_40b8b0(*v20, v22, v21); // 0x40bb0d
    int64_t v38 = *v23; // 0x40bb12
    *v24 = v37;
    int64_t v39 = function_40b810(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g81); // 0x40bb34
    while (v38 != v39) {
        // 0x40bb44
        if (v38 != v35 && v38 == v34) {
            int32_t v40 = *v30; // 0x40bb4e
            if (v40 < 0) {
                goto lab_0x40bb77_3;
            }
            int32_t v41 = *v32; // 0x40bb5b
            if (v41 < 0) {
                if (v36 <= (int64_t)(v40 != 0)) {
                    goto lab_0x40bb77_3;
                }
            } else {
                if (v41 != 0 != v40 != 0) {
                    goto lab_0x40bb77_3;
                }
            }
        }
        // 0x40bad8
        v33--;
        if (v33 == 0) {
            // 0x40bc37
            return -1;
        }
        // 0x40bae1
        *v23 = v39;
        v34 = v35;
        v35 = v38;
        v36 = (int64_t)(*v30 != 0);
        v37 = function_40b8b0(*v20, v22, v21);
        v38 = *v23;
        *v24 = v37;
        v39 = function_40b810(v8, *v28, *v27, *v26, *v25, v38, (int64_t)&g81);
    }
    int32_t v42 = *v32; // 0x40bc80
    int32_t v43 = *v30; // 0x40bc84
    int64_t v44 = *(int64_t *)(v19 + 72); // 0x40bc8b
    *(char *)v31 = (char)(v42 == 0);
    int64_t v45 = v38; // 0x40bca4
    int64_t v46 = v44; // 0x40bca4
    if (v43 >= 0 && v42 >= 0 && v42 == 0 != (v43 == 0)) {
        int64_t * v47 = (int64_t *)v31; // 0x40bcc0
        *v47 = v8;
        int64_t v48 = v19 + 88; // 0x40bcfb
        int64_t * v49 = (int64_t *)v48;
        int64_t v50 = v19 + 160;
        int64_t v51 = v38; // 0x40bcc5
        int64_t v52 = 0x92c70; // 0x40bcc5
        while (true) {
            int64_t v53 = -v52; // 0x40bcf2
            int64_t v54 = v53 & 0xffffffff; // 0x40bcf2
            int64_t v55 = 0x100000000 * v53 >> 32; // 0x40bcf5
            int64_t v56 = v55 + v51; // 0x40bcf8
            *v49 = v56;
            int64_t v57 = v51; // 0x40bd00
            int32_t v58 = 2; // 0x40bd00
            int64_t v59 = v54; // 0x40bd00
            int32_t v60 = 2; // 0x40bd00
            int64_t v61 = v54; // 0x40bd00
            if (((v56 ^ v55) & (v56 ^ v51)) >= 0) {
              lab_0x40bd1e:
                // 0x40bd1e
                function_40b8b0(*v20, v48, v50);
                int32_t v62 = *(int32_t *)(v19 + 192); // 0x40bd35
                if (v42 == 0 != (v62 == 0) != v62 >= 0) {
                    // break -> 0x40bd4a
                    break;
                }
                // 0x40bda0
                v59 = v61;
                v58 = v60;
                v57 = *v23;
            }
            int64_t v63 = 2 * v52; // 0x40bce7
            int64_t v64 = v57;
            int32_t v65 = v58; // 0x40b970
            int64_t v66 = v59; // 0x40bd02
            while (v65 != 1) {
                int64_t v67 = v66 + v63; // 0x40bd02
                v66 = v67 & 0xffffffff;
                int64_t v68 = 0x100000000 * v67 >> 32; // 0x40bd0b
                int64_t v69 = v68 + v64; // 0x40bd14
                *v49 = v69;
                v65 = 1;
                v60 = 1;
                v61 = v66;
                if (((v69 ^ v68) & (v69 ^ v64)) >= 0) {
                    goto lab_0x40bd1e;
                }
            }
            int64_t v70 = v52 + 0x92c70; // 0x40bcd0
            v45 = v64;
            v46 = v44;
            v51 = v64;
            v52 = v70 & 0xffffffff;
            if ((int32_t)v70 == 0x100dc400) {
                goto lab_0x40bb80;
            }
        }
        // 0x40bd4a
        *v24 = v50;
        *v23 = function_40b810(*v47, *v28, *v27, *v26, *v25, *v49, (int64_t)&g81);
        function_40b8b0(*v20, v22, v21);
        v45 = *v23;
        v46 = v44;
    }
    goto lab_0x40bb80;
  lab_0x40bb77_3:
    // 0x40bb77
    v45 = v38;
    v46 = *(int64_t *)(v19 + 72);
    goto lab_0x40bb80;
  lab_0x40bb80:;
    int64_t v71 = *(int64_t *)(v19 + 56); // 0x40bb88
    int32_t v72 = *(int32_t *)v21; // 0x40bb90
    int32_t v73 = *(int32_t *)(v19 + 64); // 0x40bb94
    int64_t v74 = *(int64_t *)(v19 + 48); // 0x40bb9b
    *(int64_t *)v74 = v45 - (int64_t)*(int32_t *)(v19 + 68) - v71;
    int64_t result = v45; // 0x40bba5
    if (v72 != v73) {
        int32_t v75 = *v25; // 0x40bba9
        int64_t v76 = (int64_t)(v72 == 60 == v73 < 1) - (int64_t)v75 + (int64_t)v73; // 0x40bbc5
        int64_t v77 = v76 + v45; // 0x40bbc8
        *v23 = v77;
        if (((v77 ^ v45) & (v77 ^ v76)) < 0) {
            // 0x40bc37
            return -1;
        }
        // 0x40bbd2
        *(int64_t *)(v19 + 160) = v77;
        if (*v20 == 0) {
            // 0x40bc37
            return -1;
        }
        // 0x40bbf3
        result = *v23;
    }
    int128_t v78 = __asm_movdqa(*(int128_t *)v21); // 0x40bbf8
    int128_t v79 = __asm_movdqa(*(int128_t *)(v19 + 112)); // 0x40bbfe
    int128_t v80 = __asm_movdqa(*(int128_t *)v29); // 0x40bc04
    __asm_movups(*(int128_t *)v46, v78);
    __asm_movups(*(int128_t *)(v46 + 16), v79);
    __asm_movups(*(int128_t *)(v46 + 32), v80);
    *(int64_t *)(v46 + 48) = *(int64_t *)(v19 + 144);
    // 0x40bc37
    return result;
}
// Address range: 0x40bdb0 - 0x40bdcc
int64_t function_40bdb0(int32_t * a1) {
    // 0x40bdb0
    tzset();
    return function_40b970((int64_t)a1, 0x4019d0, &g71);
}
// Address range: 0x40bdd0 - 0x40be15
int64_t function_40bdd0(int64_t a1) {
    // 0x40bdd0
    int32_t v1; // 0x40bdd0
    if (*(char *)(a1 + 8) != 0) {
        // 0x40be00
        v1 = setenv("TZ", (char *)(a1 + 9), 1);
    } else {
        // 0x40bdda
        v1 = unsetenv("TZ");
    }
    int64_t result = 0; // 0x40bde8
    if (v1 == 0) {
        // 0x40bdea
        tzset();
        result = 1;
    }
    // 0x40bdf4
    return result;
}
// Address range: 0x40be20 - 0x40be49
int64_t function_40be20(int64_t a1) {
    // 0x40be20
    if (a1 == 0) {
        // 0x40be40
        int64_t result; // 0x40be20
        return result;
    }
    int64_t * v1 = (int64_t *)a1; // 0x40be30
    int64_t v2 = *v1; // 0x40be30
    free(v1);
    while (v2 != 0) {
        // 0x40be30
        v1 = (int64_t *)v2;
        v2 = *v1;
        free(v1);
    }
    // 0x40be40
    return &g81;
}
// Address range: 0x40be50 - 0x40be91
int64_t function_40be50(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x40be5d
    int64_t v2 = function_40bdd0(a1); // 0x40be6b
    int32_t v3 = *v1; // 0x40be74
    if ((char)v2 == 0) {
        // 0x40be76
        v3 = *v1;
    }
    // 0x40be79
    function_40be20(a1);
    *v1 = v3;
    return v2 & 0xffffffff;
}
// Address range: 0x40bea0 - 0x40bf2f
int64_t function_40bea0(int64_t str, int64_t a2, int64_t a3) {
    int64_t result2; // 0x40bea0
    if (str == 0) {
        int64_t * mem = malloc(128); // 0x40bf0d
        int64_t result = (int64_t)mem; // 0x40bf0d
        result2 = result;
        if (mem != NULL) {
            // 0x40bf1a
            *mem = 0;
            *(int16_t *)(result + 8) = 0;
            return result;
        }
    } else {
        int32_t len = strlen((char *)str); // 0x40beac
        uint64_t v1 = (int64_t)len + 1; // 0x40beb6
        int64_t * mem2 = malloc(v1 >= 118 ? len + 18 & -8 : 128); // 0x40beca
        int64_t v2 = (int64_t)mem2; // 0x40beca
        result2 = v2;
        if (mem2 != NULL) {
            // 0x40bed7
            *mem2 = 0;
            int64_t v3 = v2 + 9; // 0x40bee3
            *(int16_t *)(v2 + 8) = 1;
            memcpy((int64_t *)v3, (int64_t *)str, (int32_t)v1);
            *(char *)(v3 + v1) = 0;
            result2 = v2;
        }
    }
    // 0x40befb
    return result2;
}
// Address range: 0x40bf30 - 0x40c0a5
int64_t function_40bf30(int64_t a1, uint64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 48); // 0x40bf3e
    uint64_t v2 = *v1; // 0x40bf3e
    if (v2 == 0) {
        // 0x40bfe1
        return 1;
    }
    int64_t v3; // 0x40bf30
    if (v2 >= a2) {
        int64_t v4 = a2 + 56; // 0x40bf56
        v3 = v4;
        if (v2 < v4) {
            // 0x40bfe1
            return 1;
        }
    }
    char * str2 = (char *)v2; // 0x40bf64
    if (*str2 == 0) {
        // 0x40bfd8
        *v1 = (int64_t)&g25;
        // 0x40bfe1
        return 1;
    }
    int64_t str = a1 + 9; // 0x40bf69
    if (strcmp((char *)str, str2) == 0) {
        // 0x40bfd8
        *v1 = str;
        // 0x40bfe1
        return 1;
    }
    int64_t v5 = a1;
    int64_t v6 = str;
    char * str3 = (char *)v6; // 0x40bf87
    int64_t v7; // 0x40bf30
    int64_t v8; // 0x40bf30
    int64_t v9; // 0x40bf30
    int64_t v10; // 0x40bf8c
    if (*str3 == 0) {
        // 0x40bf8c
        v10 = v5 + 9;
        if (v6 != v10) {
            // break (via goto) -> 0x40c018
            goto lab_0x40c018;
        }
        // 0x40bf99
        if (*(char *)(v5 + 8) == 0) {
            // 0x40c048
            v8 = 0;
            v9 = v3;
            v7 = (int64_t)strlen(str2) + 1;
            goto lab_0x40c056;
        }
    }
    int64_t v11 = v6 + 1 + (int64_t)strlen(str3); // 0x40bfab
    char * str5 = (char *)v11;
    int64_t v12; // 0x40bf30
    int64_t v13; // 0x40bfb5
    int64_t str4; // 0x40bfbe
    int32_t strcmp_rc; // 0x40bfcb
    while (*str5 == 0) {
        // 0x40bfb5
        v13 = *(int64_t *)v5;
        if (v13 == 0) {
            // break -> 0x40bf78
            break;
        }
        // 0x40bfbe
        str4 = v13 + 9;
        strcmp_rc = strcmp((char *)str4, str2);
        v12 = str4;
        if (strcmp_rc == 0) {
            // 0x40bfd8
            *v1 = v12;
            // 0x40bfe1
            return 1;
        }
        v5 = v13;
        v6 = str4;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40bf8c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40c018
                goto lab_0x40c018;
            }
            // 0x40bf99
            if (*(char *)(v5 + 8) == 0) {
                // 0x40c048
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40c056;
            }
        }
        // 0x40bfa3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
    }
    // 0x40bfd8
    *v1 = v11;
    while (strcmp(str5, str2) != 0) {
        // 0x40bf87
        v6 = v11;
        str3 = (char *)v6;
        if (*str3 == 0) {
            // 0x40bf8c
            v10 = v5 + 9;
            if (v6 != v10) {
                // break (via goto) -> 0x40c018
                goto lab_0x40c018;
            }
            // 0x40bf99
            if (*(char *)(v5 + 8) == 0) {
                // 0x40c048
                v8 = 0;
                v9 = v3;
                v7 = (int64_t)strlen(str2) + 1;
                goto lab_0x40c056;
            }
        }
        // 0x40bfa3
        v11 = v6 + 1 + (int64_t)strlen(str3);
        str5 = (char *)v11;
        while (*str5 == 0) {
            // 0x40bfb5
            v13 = *(int64_t *)v5;
            if (v13 == 0) {
                // break -> 0x40bf78
                break;
            }
            // 0x40bfbe
            str4 = v13 + 9;
            strcmp_rc = strcmp((char *)str4, str2);
            v12 = str4;
            if (strcmp_rc == 0) {
                // 0x40bfd8
                *v1 = v12;
                // 0x40bfe1
                return 1;
            }
            v5 = v13;
            v6 = str4;
            str3 = (char *)v6;
            if (*str3 == 0) {
                // 0x40bf8c
                v10 = v5 + 9;
                if (v6 != v10) {
                    // break (via goto) -> 0x40c018
                    goto lab_0x40c018;
                }
                // 0x40bf99
                if (*(char *)(v5 + 8) == 0) {
                    // 0x40c048
                    v8 = 0;
                    v9 = v3;
                    v7 = (int64_t)strlen(str2) + 1;
                    goto lab_0x40c056;
                }
            }
            // 0x40bfa3
            v11 = v6 + 1 + (int64_t)strlen(str3);
            str5 = (char *)v11;
        }
        // 0x40bfd8
        *v1 = v11;
    }
    // 0x40bfe1
    return 1;
  lab_0x40c018:;
    int64_t v14 = (int64_t)strlen(str2) + 1; // 0x40c020
    int64_t v15 = v6 - v10; // 0x40c027
    int64_t v16 = -1 - v15;
    v8 = v15;
    v9 = v16;
    v7 = v14;
    if (v14 > v16) {
        // 0x40c035
        *__errno_location() = 12;
        // 0x40bfe1
        return 0;
    }
    goto lab_0x40c056;
  lab_0x40c056:
    // 0x40c056
    if (v7 + v8 < 119) {
        // 0x40c05f
        memcpy((int64_t *)v6, (int64_t *)v2, (int32_t)v7);
        *(char *)(v7 + v6) = 0;
        // 0x40bfd8
        *v1 = v6;
        // 0x40bfe1
        return 1;
    }
    int64_t v17 = function_40bea0(v2, v2, v9); // 0x40c083
    *(int64_t *)v5 = v17;
    if (v17 == 0) {
        // 0x40bfe1
        return 0;
    }
    // 0x40c091
    *(char *)(v17 + 8) = 0;
    // 0x40bfd8
    *v1 = v17 + 9;
    // 0x40bfe1
    return 1;
}
// Address range: 0x40c0b0 - 0x40c15f
int64_t function_40c0b0(int64_t a1) {
    char * env_val = getenv("TZ"); // 0x40c0bc
    int64_t v1 = (int64_t)env_val; // 0x40c0bc
    char v2 = *(char *)(a1 + 8);
    int64_t v3; // 0x40c0b0
    if (env_val == NULL) {
        // 0x40c120
        if (v2 == 0) {
            // 0x40c0ed
            return 1;
        }
    } else {
        if (v2 != 0) {
            // 0x40c0f8
            v3 = v1;
            if (strcmp((char *)(a1 + 9), env_val) == 0) {
                // 0x40c0ed
                return 1;
            }
        }
    }
    // 0x40c0d1
    int64_t v4; // 0x40c0b0
    int64_t result = function_40bea0(v1, v3, v4); // 0x40c0d4
    if (result == 0) {
        // 0x40c0ed
        return 0;
    }
    // 0x40c0e1
    if ((char)function_40bdd0(a1) != 0) {
        // 0x40c0ed
        return result;
    }
    int32_t * v5 = __errno_location(); // 0x40c138
    if (result != 1) {
        // 0x40c149
        function_40be20(result);
    }
    // 0x40c151
    return 0;
}
// Address range: 0x40c160 - 0x40c171
int64_t function_40c160(int64_t a1) {
    // 0x40c160
    if (a1 == 1) {
        // 0x40c170
        int64_t result; // 0x40c160
        return result;
    }
    // 0x40c166
    return function_40be20(a1);
}
// Address range: 0x40c180 - 0x40c225
int64_t function_40c180(int64_t a1, int64_t * timep, int64_t * time2) {
    if (a1 == 0) {
        // 0x40c210
        return (int64_t)gmtime_r((int32_t *)timep, (struct tm *)time2);
    }
    int64_t v1 = function_40c0b0(a1); // 0x40c198
    if (v1 == 0) {
        // 0x40c1ca
        return 0;
    }
    // 0x40c1a5
    if (localtime_r((int32_t *)timep, (struct tm *)time2) != NULL) {
        int64_t result = (int64_t)time2;
        if ((char)function_40bf30(a1, result) != 0) {
            // 0x40c1c4
            if (v1 == 1 || (char)function_40be50(v1) != 0) {
                // 0x40c1ca
                return result;
            }
            // 0x40c1ca
            return 0;
        }
    }
    if (v1 != 1) {
        // 0x40c1e6
        function_40be50(v1);
    }
    // 0x40c1ca
    return 0;
}
// Address range: 0x40c230 - 0x40c34c
int64_t function_40c230(int64_t a1, int64_t * a2, int32_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a2;
    int32_t v2; // 0x40c230
    int32_t v3 = v2;
    if (a1 == 0) {
        // 0x40c328
        return function_40c350(v1);
    }
    int64_t v4 = function_40c0b0(a1); // 0x40c247
    if (v4 == 0) {
        // 0x40c29e
        return -1;
    }
    int64_t v5 = function_40bdb0((int32_t *)a2); // 0x40c25b
    int64_t timep = v5; // bp-96, 0x40c260
    if (v5 == -1) {
        // 0x40c2b0
        int32_t time2; // bp-88, 0x40c230
        if (localtime_r((int32_t *)&timep, (struct tm *)&time2) == NULL) {
            goto lab_0x40c283;
        } else {
            int32_t v6 = *(int32_t *)(v1 + 32); // 0x40c2c4
            if (v3 >= 0 == v6 > -1 == (v6 == 0 != (v3 == 0))) {
                goto lab_0x40c283;
            } else {
                int32_t v7 = *(int32_t *)(v1 + 16); // 0x40c2e3
                int32_t v8 = *(int32_t *)(v1 + 20); // 0x40c2e6
                int32_t v9 = *(int32_t *)(v1 + 12); // 0x40c2f3
                int32_t v10 = *(int32_t *)(v1 + 8); // 0x40c2fc
                int32_t v11 = *(int32_t *)(v1 + 4); // 0x40c305
                if ((v8 ^ v2 | v7 ^ v2 | v9 ^ v2 | v10 ^ v2 || v11 ^ v2 || time2 ^ (int32_t)(int64_t)&time2) == 0) {
                    goto lab_0x40c26b;
                } else {
                    goto lab_0x40c283;
                }
            }
        }
    } else {
        goto lab_0x40c26b;
    }
  lab_0x40c26b:
    // 0x40c26b
    if ((char)function_40bf30(a1, v1) == 0) {
        // 0x40c27a
        timep = -1;
    }
    goto lab_0x40c283;
  lab_0x40c283:
    if (v4 != 1) {
        // 0x40c289
        if ((char)function_40be50(v4) == 0) {
            // 0x40c29e
            return -1;
        }
    }
    // 0x40c29e
    return timep;
}
// Address range: 0x40c350 - 0x40c366
int64_t function_40c350(int64_t a1) {
    // 0x40c350
    *(int32_t *)(a1 + 32) = 0;
    return function_40b970(a1, 0x401af0, &g72);
}
// Address range: 0x40c370 - 0x40c42d
int64_t function_40c370(int64_t stream, int64_t a2, int64_t * a3) {
    int32_t v1 = 2000; // bp-2048, 0x40c390
    int64_t v2; // bp-2040, 0x40c370
    int64_t v3; // 0x40c370
    int64_t v4 = function_40e420(&v2, (int64_t *)&v1, a2, (int64_t)a3, v3, v3, 2000, (int64_t)&g81); // 0x40c39c
    if (v4 == 0) {
        // 0x40c41e
        function_40e410(stream);
        // 0x40c3dc
        return 0xffffffff;
    }
    int32_t nmemb = v1; // 0x40c3a1
    int64_t * data = (int64_t *)v4; // 0x40c3bc
    if (nmemb > fwrite(data, 1, nmemb, (struct _IO_FILE *)stream)) {
        // 0x40c3f0
        if (v4 != (int64_t)&v2) {
            int32_t * v5 = __errno_location(); // 0x40c3fa
            free(data);
        }
        // 0x40c3dc
        return 0xffffffff;
    }
    if (v4 != (int64_t)&v2) {
        // 0x40c3cb
        free(data);
    }
    // 0x40c3d3
    if (nmemb > -1) {
        // 0x40c3dc
        return (int64_t)nmemb & 0xffffffff;
    }
    // 0x40c413
    *__errno_location() = 75;
    // 0x40c41e
    function_40e410(stream);
    // 0x40c3dc
    return 0xffffffff;
}
// Address range: 0x40c430 - 0x40c48d
int64_t function_40c430(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40c437
    int64_t v2; // 0x40c430
    int64_t result = function_40e2f0(a1, v2); // 0x40c448
    if ((v2 & 32) != 0) {
        // 0x40c470
        if ((int32_t)result == 0) {
            // 0x40c474
            *__errno_location() = 0;
        }
        // 0x40c46a
        return 0xffffffff;
    }
    // 0x40c451
    if ((int32_t)result == 0) {
        // 0x40c46a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40c458
    if (v1 == 0) {
        // 0x40c45a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40c46a
    return result2;
}
// Address range: 0x40c490 - 0x40c4ee
int64_t function_40c490(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40c496
    if (locale == NULL) {
        // 0x40c4c3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40c496
    bool v2; // 0x40c490
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g8; // 0x40c490
    int64_t v5 = v1; // 0x40c490
    int64_t v6 = 2; // 0x40c4b5
    unsigned char v7 = *(char *)v5; // 0x40c4b5
    char v8 = *(char *)v4; // 0x40c4b5
    char v9 = v8; // 0x40c4b5
    bool v10 = false; // 0x40c4b5
    while (v7 == v8) {
        // 0x40c4a8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40c4c1
    int64_t v13 = v1; // 0x40c4c1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40c4c3
        return 0;
    }
    int64_t v14 = 6; // 0x40c4c1
    unsigned char v15 = *(char *)v13; // 0x40c4dd
    char v16 = *(char *)v12; // 0x40c4dd
    char v17 = v16; // 0x40c4dd
    bool v18 = false; // 0x40c4dd
    while (v15 == v16) {
        // 0x40c4d0
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
// Address range: 0x40c4f0 - 0x40ca52
int64_t function_40c4f0(void) {
    char * v1 = nl_langinfo(14); // 0x40c506
    char * v2 = g73; // 0x40c50b
    char * v3; // 0x40c4f0
    int64_t v4; // 0x40c4f0
    int64_t v5; // 0x40c4f0
    int64_t v6; // 0x40c4f0
    int64_t v7; // 0x40c4f0
    int32_t size; // 0x40c4f0
    int32_t size2; // 0x40c4f0
    int32_t len; // 0x40c5c2
    int64_t v8; // 0x40c5c2
    char * env_val; // 0x40c5ad
    if (v2 == NULL) {
        // 0x40c5a8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40c615;
        } else {
            // 0x40c5ba
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40c615;
            } else {
                // 0x40c5bf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40c5ad
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40ca45
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40c615;
                    } else {
                        // 0x40c9b9
                        size2 = len + 14;
                        goto lab_0x40c5db;
                    }
                } else {
                    goto lab_0x40c5db;
                }
            }
        }
    } else {
        // 0x40c4f0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40c52a;
    }
  lab_0x40c85c:;
    // 0x40c85c
    struct _IO_FILE * stream; // 0x40c69b
    int32_t v10 = __uflow(stream); // 0x40c85f
    int64_t v11; // 0x40c4f0
    int64_t v12 = v11; // 0x40c869
    int64_t v13; // 0x40c4f0
    int64_t v14 = v13; // 0x40c869
    int32_t v15 = v10; // 0x40c869
    int64_t v16; // 0x40c4f0
    int64_t v17 = v16; // 0x40c869
    int64_t v18 = v11; // 0x40c869
    int64_t v19 = v13; // 0x40c869
    int64_t v20 = v16; // 0x40c869
    if (v10 == -1) {
        // break -> 0x40c86f
        goto lab_0x40c86f;
    }
    goto lab_0x40c6e9;
  lab_0x40c6de:;
    // 0x40c6de
    int64_t v90; // 0x40c4f0
    int64_t * v32; // 0x40c6d0
    *v32 = v90 + 1;
    int64_t v89; // 0x40c4f0
    v12 = v89;
    int64_t v91; // 0x40c4f0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40c4f0
    v17 = v92;
    goto lab_0x40c6e9;
  lab_0x40c6e9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40c4f0
    int32_t v25; // bp-120, 0x40c4f0
    int32_t v26; // bp-184, 0x40c4f0
    int64_t v27; // 0x40c69b
    int64_t v28; // 0x40c6b8
    int64_t v29; // 0x40c6bd
    int64_t * v30; // 0x40c6d4
    switch (c) {
        case 32: {
            goto lab_0x40c6d0;
        }
        case 10: {
            goto lab_0x40c6d0;
        }
        case 9: {
            goto lab_0x40c6d0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40c8c1
            int32_t v33; // 0x40c4f0
            char v34; // 0x40c4f0
            int32_t v35; // 0x40c8ce
            if (v31 < *v30) {
                // 0x40c8a0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40c8cb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40c8c1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40c8a0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40c8cb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40c8b0
                v36 = v33;
            }
            // 0x40c99f
            if (v36 == -1) {
                // break -> 0x40c86f
                break;
            }
            goto lab_0x40c6d0;
        }
        default: {
            // 0x40c6ff
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40c86f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40c728
            int64_t v39 = v37 + 4; // 0x40c72a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40c736
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40c738
            while (v41 == 0) {
                // 0x40c728
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40c756
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40c762
            int64_t v45 = v43 + 4; // 0x40c764
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40c770
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40c772
            while (v47 == 0) {
                // 0x40c762
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40c75f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40c788
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40c798
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40c79c
            int64_t v52 = v51 + v48; // 0x40c7a5
            int64_t * mem; // 0x40c4f0
            int64_t v53; // 0x40c4f0
            int64_t v54; // 0x40c4f0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40c8db
                int64_t v56 = v55 + 3; // 0x40c8e7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40c7c1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40c7d0
            if (mem == NULL) {
                // 0x40c9fc
                free((int64_t *)v21);
                function_40e2f0(v27, v53);
                v24 = (int64_t)&g25;
                goto lab_0x40c674;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40c7e8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40c7f2
            uint32_t v62 = (int32_t)v59; // 0x40c7f5
            int64_t v63; // 0x40c4f0
            if (v62 >= 8) {
                // 0x40c904
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40c91e
                int64_t v66 = v61 - v65; // 0x40c922
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40c92d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40c93e
                    int64_t v70 = v69 & 0xffffffff; // 0x40c93e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40c93b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40c9cf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40c807
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40c80b
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
            int64_t v73 = v51 + 1; // 0x40c81b
            int64_t v74 = v60 - 1; // 0x40c81f
            uint32_t v75 = (int32_t)v73; // 0x40c824
            int64_t v76; // 0x40c4f0
            if (v75 >= 8) {
                // 0x40c952
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40c95c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40c96c
                int64_t v80 = v74 - v79; // 0x40c970
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40c97b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40c98b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40c989
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40c9e6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40c9ee
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40c836
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40c83a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40ca33
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40c84e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40c6de;
            } else {
                goto lab_0x40c85c;
            }
        }
    }
  lab_0x40c6d0:;
    int64_t v93 = v23; // 0x40c4f0
    int64_t v94 = v22; // 0x40c4f0
    int64_t v95 = v21; // 0x40c4f0
    goto lab_0x40c6d0_2;
  lab_0x40c615:;
    int64_t * mem3 = malloc(size); // 0x40c615
    int64_t v97 = (int64_t)&g25; // 0x40c620
    int64_t v98; // 0x40c4f0
    int64_t path; // 0x40c4f0
    if (mem3 == NULL) {
        goto lab_0x40c5f2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40c615
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40c636;
    }
  lab_0x40c52a:;
    int64_t str = v1 == NULL ? (int64_t)&g25 : (int64_t)v1; // 0x40c51d
    char v100 = *v3; // 0x40c52a
    int64_t v101; // 0x40c4f0
    if (v100 == 0) {
        // 0x40c584
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40c4f0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40c4f0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40c570
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40c577;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40c540
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40c54d
        char v107 = *(char *)v106; // 0x40c552
        v102 = v107;
        if (v107 == 0) {
            // 0x40c584
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40c55b
    v104 = v103 + 1;
  lab_0x40c577:
    // 0x40c584
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40c5f2:;
    char * v108 = (char *)v97;
    g73 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40c52a;
  lab_0x40c636:;
    int64_t v109 = v98 + path; // 0x40c636
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40c662
    v24 = (int64_t)&g25;
    if (fd >= 0) {
        // 0x40c691
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40c9c2
            close(fd);
            v24 = (int64_t)&g25;
        } else {
            // 0x40c6b5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40c6d0_2:;
                uint64_t v96 = *v32; // 0x40c6d0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40c85c;
                } else {
                    goto lab_0x40c6de;
                }
            }
          lab_0x40c86f:
            // 0x40c86f
            function_40e2f0(v27, v19);
            v24 = (int64_t)&g25;
            if (v18 != 0) {
                // 0x40c88e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40c674;
  lab_0x40c5db:;
    int64_t * mem4 = malloc(size2); // 0x40c5db
    v97 = (int64_t)&g25;
    if (mem4 != NULL) {
        // 0x40c681
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40c636;
    } else {
        goto lab_0x40c5f2;
    }
  lab_0x40c674:
    // 0x40c674
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40c5f2;
}
// Address range: 0x40ca60 - 0x40caa1
int64_t function_40ca60(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40ca99
        return result;
    }
    int32_t ** v1 = __ctype_tolower_loc(); // 0x40ca73
    int64_t v2 = a3; // 0x40ca78
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40ca80
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40ca88
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40ca80
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40ca99
    return result;
}
// Address range: 0x40cab0 - 0x40caf1
int64_t function_40cab0(int64_t result, int64_t a2, int64_t a3) {
    if (a3 == 0) {
        // 0x40cae9
        return result;
    }
    int32_t ** v1 = __ctype_toupper_loc(); // 0x40cac3
    int64_t v2 = a3; // 0x40cac8
    v2--;
    unsigned char v3 = *(char *)(v2 + a2); // 0x40cad0
    int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1); // 0x40cad8
    *(char *)(v2 + result) = (char)v4;
    while (v2 != 0) {
        // 0x40cad0
        v2--;
        v3 = *(char *)(v2 + a2);
        v4 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)*v1);
        *(char *)(v2 + result) = (char)v4;
    }
    // 0x40cae9
    return result;
}
// Address range: 0x40cb00 - 0x40e2c5
int64_t function_40cb00(int32_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a3;
    int64_t v2 = a1;
    int64_t v3 = a2; // bp-1224, 0x40cb24
    char v4 = *(char *)&v1; // 0x40cb4c
    v3 = a2;
    int64_t result = 0; // 0x40cb54
    int64_t v5 = v2; // 0x40cb54
    char v6; // 0x40cb00
    char v7; // 0x40cb00
    char v8; // 0x40cb00
    char v9; // 0x40cb00
    char v10; // 0x40cb00
    char v11; // 0x40cb00
    char v12; // 0x40cb00
    char v13; // 0x40cb00
    char v14; // 0x40cb00
    char v15; // 0x40cb00
    int64_t v16; // 0x40cb00
    int64_t v17; // 0x40cb00
    int64_t v18; // 0x40cb00
    int64_t v19; // 0x40cb00
    int64_t v20; // 0x40cb00
    int64_t v21; // 0x40cb00
    int64_t v22; // 0x40cb00
    int64_t v23; // 0x40cb00
    int64_t v24; // 0x40cb00
    int64_t v25; // 0x40cb00
    int64_t v26; // 0x40cb00
    int64_t v27; // 0x40cb00
    int64_t v28; // 0x40cb00
    int64_t v29; // 0x40cb00
    char v30; // 0x40cb00
    int64_t v31; // 0x40cb00
    int64_t v32; // 0x40cb00
    int64_t v33; // 0x40cb00
    int64_t v34; // 0x40cb00
    int64_t v35; // 0x40cb00
    int64_t v36; // 0x40cb00
    int64_t v37; // 0x40cb00
    int64_t v38; // 0x40cb00
    char * v39; // 0x40cb00
    int64_t v40; // 0x40cb00
    char * v41; // 0x40cb00
    int64_t v42; // 0x40cb00
    int64_t * str; // 0x40cb00
    char * v43; // 0x40cb00
    int64_t * v44; // 0x40cb00
    int64_t format; // 0x40cb00
    int16_t * v45; // 0x40cb00
    int64_t * v46; // 0x40cb00
    int32_t * v47; // 0x40cb00
    int64_t v48; // 0x40cb15
    int32_t * v49; // 0x40cb00
    int64_t * v50; // 0x40cb00
    int64_t * v51; // 0x40cb00
    int64_t * v52; // 0x40cb00
    int64_t * v53; // 0x40cb00
    int64_t * v54; // 0x40cb00
    int64_t * v55; // 0x40cb00
    int32_t * v56; // 0x40cb00
    int64_t v57; // 0x40cb00
    char * v58; // 0x40cb00
    int64_t * v59; // 0x40cb00
    int32_t * v60; // 0x40cb00
    int64_t * v61; // 0x40cb00
    int64_t * v62; // 0x40cb00
    int64_t * tm; // 0x40cb00
    int64_t v63; // 0x40cb00
    int32_t * v64; // 0x40cb00
    int64_t * v65; // 0x40cb00
    int64_t str2; // 0x40cb00
    if (v4 != 0) {
        // 0x40cb6a
        v48 = &v3;
        tm = (int64_t *)(v48 + 8);
        v63 = v48 + 48;
        v64 = (int32_t *)v63;
        v65 = (int64_t *)(v48 + 1232);
        str2 = v48 + 144;
        int64_t v66 = v48 + 64;
        v39 = (char *)v66;
        v40 = v48 + 135;
        v41 = (char *)v63;
        v42 = v48 + 44;
        str = (int64_t *)(v48 + 32);
        int64_t v67 = v48 + 72;
        v43 = (char *)v67;
        v44 = (int64_t *)v63;
        format = v48 + 112;
        v45 = (int16_t *)format;
        v46 = (int64_t *)(v48 + 16);
        v47 = (int32_t *)(v48 + 1240);
        v49 = (int32_t *)v66;
        v50 = (int64_t *)(v48 - 8);
        v51 = (int64_t *)(v48 - 16);
        v52 = (int64_t *)(v48 + 24);
        v53 = (int64_t *)v66;
        int64_t v68 = v48 + 80;
        v54 = (int64_t *)v68;
        v55 = (int64_t *)v67;
        v56 = (int32_t *)v67;
        v57 = v48 + 145;
        int64_t v69 = v48 + 88;
        v58 = (char *)v69;
        v59 = (int64_t *)v69;
        v60 = (int32_t *)v68;
        v61 = (int64_t *)(v48 + 104);
        v62 = (int64_t *)(v48 + 96);
        v30 = v4;
        v33 = a3;
        v19 = 0;
        v22 = v2;
        while (true) {
          lab_0x40cb6a:
            // 0x40cb6a
            v23 = v22;
            v20 = v19;
            int64_t v70 = v33;
            char v71 = v30;
            char v72 = v7;
            char v73 = v6;
            if (v71 == 37) {
                char v74 = v73; // 0x40cbf4
                char v75 = v72; // 0x40cbf4
                int64_t v76 = v70; // 0x40cbf4
                int64_t v77 = 0; // 0x40cbf4
                int64_t v78 = (int64_t)*(char *)(v48 + 43); // 0x40cbf4
                int64_t v79 = 0; // 0x40cbf4
                int64_t v80; // 0x40cb00
                while (true) {
                  lab_0x40cbf8_2:
                    // 0x40cbf8
                    v16 = v78;
                    v10 = v74;
                    v11 = v75;
                    v34 = v76;
                    v26 = v77;
                    v17 = v79;
                    while (true) {
                      lab_0x40cbf8:;
                        int64_t v81 = v26;
                        char v82 = v11;
                        char v83 = v10;
                        int64_t v84 = v34 + 1; // 0x40cbf8
                        char v85 = *(char *)v84; // 0x40cbfc
                        v14 = v83;
                        v15 = v82;
                        v31 = 48;
                        v36 = v84;
                        v28 = v81;
                        if (v85 == 48) {
                            goto lab_0x40cc28;
                        } else {
                            // 0x40cc08
                            v18 = v17;
                            v27 = v81;
                            v35 = v84;
                            v80 = v85;
                            v13 = v82;
                            v12 = v83;
                            while (v12 <= v13) {
                                if (v80 != 35) {
                                    // 0x40cc30
                                    v14 = v12;
                                    v15 = v13;
                                    v31 = v80;
                                    v36 = v35;
                                    v28 = v27;
                                    if ((char)v80 == 45) {
                                        goto lab_0x40cc28;
                                    } else {
                                        int64_t v86 = v80 & 0xffffffff;
                                        v38 = v86;
                                        v37 = v35;
                                        v32 = 0xffffffff;
                                        v29 = v86;
                                        if ((int32_t)v80 < 58) {
                                            goto lab_0x40cc91;
                                        } else {
                                            goto lab_0x40cc48_2;
                                        }
                                    }
                                }
                                int64_t v87 = v35 + 1; // 0x40cc0e
                                char v88 = *(char *)v87; // 0x40cc12
                                int64_t v89 = v88; // 0x40cc12
                                v14 = v88;
                                v15 = 48;
                                v31 = v89;
                                v36 = v87;
                                v28 = 1;
                                if (v88 == 48) {
                                    goto lab_0x40cc28;
                                }
                                v27 = 1;
                                v35 = v87;
                                v80 = v89;
                                v13 = 48;
                                v12 = v88;
                            }
                            char v90 = v80;
                            v74 = v12;
                            v75 = v13;
                            v76 = v35;
                            v77 = v27;
                            v78 = 1;
                            v79 = v18;
                            if (v90 != 94) {
                                // 0x40cc80
                                v14 = v12;
                                v15 = v13;
                                v31 = v80;
                                v36 = v35;
                                v28 = v27;
                                if (v90 != 95) {
                                    // break (via goto) -> 0x40cc84
                                    goto lab_0x40cc84;
                                }
                                goto lab_0x40cc28;
                            } else {
                                goto lab_0x40cbf8_2;
                            }
                        }
                    }
                }
              lab_0x40cc84:;
                int64_t v91 = v80 & 0xffffffff;
                v38 = v91;
                v37 = v35;
                v32 = 0xffffffff;
                v29 = v91;
                if ((int32_t)v80 < 58) {
                    goto lab_0x40cc91;
                } else {
                    goto lab_0x40cc48_2;
                }
            } else {
                int64_t v92 = v3 - v20; // 0x40cb72
                v1 = v92;
                if (v92 < 2) {
                    // break -> 0x40cbb3
                    break;
                }
                int64_t v93 = 0; // 0x40cb7e
                if (v23 != 0) {
                    // 0x40cb80
                    *(char *)v23 = v71;
                    v93 = v23 + 1;
                }
                // 0x40cb87
                v8 = v73;
                v9 = v72;
                v25 = v70;
                v21 = v20 + 1;
                v24 = v93;
                goto lab_0x40cb8e;
            }
        }
      lab_0x40cbb3_11:
        // 0x40cbb3
        return 0;
    }
    goto lab_0x40cb9b_2;
  lab_0x40cc28:
    // 0x40cc28
    v10 = v14;
    v11 = v15;
    v34 = v36;
    v26 = v28;
    v17 = v31 & 0xffffffff;
    goto lab_0x40cbf8;
  lab_0x40ccde:;
    // 0x40ccde
    int64_t v94; // 0x40cc9b
    v38 = v94;
    int64_t v95; // 0x40cc93
    v37 = v95;
    v32 = 0x7fffffff;
    v29 = v94;
    int64_t v96; // 0x40cc9d
    if ((int32_t)v96 >= 10) {
        // break -> 0x40cc48
        goto lab_0x40cc48_2;
    }
    // 0x40cce3
    int64_t v97; // 0x40cb00
    int64_t v98 = v97 + 2; // 0x40cce3
    int64_t v99 = (int64_t)*(char *)v98; // 0x40cce3
    int64_t v100 = v99 + 0xffffffd0 & 0xffffffff; // 0x40ccf2
    v1 = v100;
    int64_t v101 = v100; // 0x40ccf5
    int64_t v102 = v99; // 0x40ccf5
    int64_t v103 = v99 & 0xffffffff; // 0x40ccf5
    int64_t v104 = v98; // 0x40ccf5
    int64_t v105 = 0x7fffffff; // 0x40ccf5
    goto lab_0x40ccba;
  lab_0x40ccba:;
    int64_t v106 = v105;
    int64_t v107 = v104;
    int64_t v108 = v107; // 0x40ccbd
    int64_t v109 = v106; // 0x40ccbd
    if ((int32_t)v101 >= 10) {
        // 0x40ccbf
        v38 = v103;
        v37 = v107;
        v32 = v106;
        v29 = v102 & 0xffffffff;
        goto lab_0x40cc48_2;
    }
    goto lab_0x40cc93;
  lab_0x40cc91:
    // 0x40cc91
    v108 = v35;
    v109 = 0;
    while (true) {
      lab_0x40cc93:;
        int64_t v110 = v109;
        v97 = v108;
        v95 = v97 + 1;
        int64_t v111 = (int64_t)*(char *)v95; // 0x40cc93
        v94 = v111 & 0xffffffff;
        v96 = v111 + 0xffffffd0;
        int64_t v112 = v96 & 0xffffffff; // 0x40cc9d
        v1 = v112;
        int32_t v113 = v110; // 0x40cca0
        if (v113 > 0xccccccc) {
            goto lab_0x40ccde;
        } else {
            char v114 = *(char *)v97; // 0x40cca8
            if (v113 != 0xccccccc || v114 < 56) {
                // 0x40ccad
                v101 = v112;
                v102 = v111;
                v103 = v94;
                v104 = v95;
                v105 = 10 * v110 + 0xffffffd0 + (int64_t)v114 & 0xffffffff;
                goto lab_0x40ccba;
            } else {
                goto lab_0x40ccde;
            }
        }
    }
    goto lab_0x40cc48_2;
  lab_0x40cc48_2:;
    int64_t v115 = v32;
    int64_t v116 = v37;
    int64_t v117 = v38; // 0x40cb00
    int64_t v118 = v116; // 0x40cb00
    int64_t v119 = 0; // 0x40cb00
    int64_t v120; // 0x40cb00
    switch ((char)v120) {
        case 69: {
        }
        case 79: {
            int64_t v121 = v116 + 1; // 0x40ccc8
            v117 = (int64_t)*(char *)v121;
            v118 = v121;
            v119 = v29;
            // break -> 0x40cc5e
            break;
        }
    }
    int64_t v122 = v119;
    int64_t v123 = v118;
    int64_t v124 = v117;
    g76 = v124 % 256;
    char v125 = v124;
    int64_t v126 = v124; // 0x40cc61
    int64_t v127 = v16; // 0x40cc61
    int64_t v128 = 0; // 0x40cc61
    int64_t v129 = 1; // 0x40cc61
    int64_t v130 = v123; // 0x40cc61
    int64_t v131 = v16; // 0x40cc61
    int64_t v132 = v123; // 0x40cc61
    int64_t v133 = 0; // 0x40cc61
    int64_t v134; // 0x40cb00
    int64_t v135; // 0x40cb00
    int64_t v136; // 0x40cb00
    int64_t v137; // 0x40cb00
    int64_t v138; // 0x40cb00
    int64_t v139; // 0x40cb00
    int64_t v140; // 0x40cb00
    int64_t v141; // 0x40cb00
    int64_t v142; // 0x40cb00
    int64_t v143; // 0x40cb00
    int64_t v144; // 0x40cb00
    int64_t v145; // 0x40cb00
    int64_t v146; // 0x40cb00
    int64_t v147; // 0x40cb00
    int64_t v148; // 0x40cb00
    int64_t v149; // 0x40cb00
    int64_t v150; // 0x40cb00
    int64_t v151; // 0x40cb00
    int64_t v152; // 0x40cb00
    int64_t v153; // 0x40cb00
    int64_t v154; // 0x40cb00
    int64_t v155; // 0x40cb00
    int64_t v156; // 0x40cb00
    int64_t v157; // 0x40cb00
    int64_t v158; // 0x40cb00
    int64_t v159; // 0x40cb00
    int64_t v160; // 0x40cb00
    int64_t v161; // 0x40cb00
    int64_t v162; // 0x40cb00
    int64_t v163; // 0x40cb00
    int64_t v164; // 0x40cb00
    int64_t v165; // 0x40cb00
    int64_t v166; // 0x40cb00
    int64_t v167; // 0x40cb00
    int64_t v168; // 0x40cb00
    int64_t v169; // 0x40cb00
    int64_t v170; // 0x40cb00
    int64_t v171; // 0x40cb00
    int64_t v172; // 0x40cb00
    int64_t v173; // 0x40cb00
    int64_t v174; // 0x40cb00
    int64_t v175; // 0x40cb00
    int64_t v176; // 0x40cb00
    int64_t v177; // 0x40cb00
    int64_t v178; // 0x40cb00
    int64_t v179; // 0x40cb00
    int64_t v180; // 0x40cb00
    int64_t v181; // 0x40cb00
    int64_t v182; // 0x40cb00
    int64_t v183; // 0x40cb00
    int64_t v184; // 0x40cb00
    int64_t v185; // 0x40cb00
    int32_t v186; // 0x40cb00
    switch (v125) {
        case 0: {
            // 0x40dbe3
            v177 = v123 - 1;
            goto lab_0x40dad7;
        }
        case 37: {
            int64_t v187 = v3 - v20; // 0x40db7e
            v1 = v187;
            int32_t v188 = v115; // 0x40db81
            int64_t v189 = 0x100000000 * v115 >> 32;
            int64_t v190 = v188 >= 0 ? v189 : 0; // 0x40db86
            int64_t v191 = v190 != 0 ? v190 : 1; // 0x40db8b
            v134 = v187;
            v162 = v190;
            v176 = 1;
            v160 = v123;
            v161 = v123;
            v142 = v16;
            v152 = v191;
            if ((int32_t)v122 != 0) {
                goto lab_0x40d983;
            } else {
                // 0x40db98
                if (v191 >= v187) {
                    // break -> 0x40cbb3
                    break;
                }
                // 0x40dba1
                v155 = v191;
                v156 = 0;
                if (v23 != 0) {
                    int64_t v192 = v124; // 0x40dbad
                    int64_t v193 = v23; // 0x40dbad
                    if (v188 >= 2) {
                        int64_t v194 = v189 - 1; // 0x40dbb2
                        v1 = v194;
                        int64_t v195 = v194 + v23; // 0x40dbb6
                        int64_t * v196 = (int64_t *)v23;
                        int32_t v197 = v194;
                        if (v18 == 48) {
                            // 0x40e246
                            memset(v196, 48, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        } else {
                            // 0x40dbc4
                            memset(v196, 32, v197);
                            v192 = (int64_t)*(char *)v123;
                            v193 = v195;
                        }
                    }
                    // 0x40dbd7
                    *(char *)v193 = (char)v192;
                    v155 = v191;
                    v156 = v193 + 1;
                }
                goto lab_0x40d526;
            }
        }
        case 58: {
            int64_t v198 = v123 + 1; // 0x40dc3f
            char v199 = *(char *)v198; // 0x40dc3f
            v1 = v198;
            int64_t v200 = v198; // 0x40dc4f
            char v201 = v199; // 0x40dc4f
            int64_t v202 = 1; // 0x40dc4f
            if (v199 == 58) {
                int64_t v203 = 2; // 0x40dc77
                int64_t v204 = v203 + v123; // 0x40dc7b
                char v205 = *(char *)v204; // 0x40dc7b
                v1 = v204;
                v200 = v204;
                v201 = v205;
                v202 = v203;
                int64_t v206 = v203; // 0x40dc86
                while (v205 == 58) {
                    // 0x40dc77
                    v203 = v206 + 1;
                    v204 = v203 + v123;
                    v205 = *(char *)v204;
                    v1 = v204;
                    v200 = v204;
                    v201 = v205;
                    v202 = v203;
                    v206 = v203;
                }
            }
            // 0x40dc51
            v130 = v123;
            v131 = v16;
            v132 = v200;
            v133 = v202;
            if (v201 != 122) {
                goto lab_0x40d948;
            } else {
                goto lab_0x40da20;
            }
        }
        case 65: {
            goto lab_0x40cd10;
        }
        case 66: {
            goto lab_0x40cd10;
        }
        case 67: {
            // 0x40d873
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d2b2;
            } else {
                // 0x40d87d
                *v41 = 0;
                int32_t v207 = *(int32_t *)(*tm + 20); // 0x40d892
                int32_t v208 = v207 / 100; // 0x40d8a3
                int32_t v209 = v208 + 19; // 0x40d8a7
                int32_t v210 = v207 + 1900; // 0x40d8bb
                v171 = v123;
                v168 = v115;
                v182 = v209 - (int32_t)(-100 * v208 + v207 < 0 == v209 >= 0 == (v209 != 0));
                v178 = 0;
                v157 = v210 < 0 != ((v210 ^ v207) & (v207 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40d29f;
            }
        }
        case 68: {
            // 0x40d007
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40d948;
            } else {
                // 0x40d010
                *v44 = (int64_t)"%m/%d/%y";
                goto lab_0x40d019;
            }
        }
        case 70: {
            // 0x40d109
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 != 0) {
                goto lab_0x40d948;
            } else {
                // 0x40d112
                *v44 = (int64_t)"%Y-%m-%d";
                goto lab_0x40d019;
            }
        }
        case 71: {
            goto lab_0x40d120;
        }
        case 72: {
            // 0x40d3b2
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d3bc
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 8);
                v138 = 2;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 73: {
            // 0x40d3cf
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d3d9
                v167 = v115;
                v181 = (int64_t)*(int32_t *)v42;
                v138 = 2;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 77: {
            // 0x40d3e8
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d3f2
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 4);
                v138 = 2;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 78: {
            // 0x40d405
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                uint32_t v211 = (int32_t)v115; // 0x40d40f
                if (v211 != -1) {
                    int64_t v212 = (int64_t)*v47;
                    int64_t v213 = v212; // 0x40e0a1
                    int64_t v214 = v115; // 0x40e0a1
                    int64_t v215 = v212; // 0x40e0a1
                    if (v211 <= 8) {
                        int64_t v216 = v213;
                        int64_t v217 = (v214 & 0xffffffff) + 1; // 0x40e0c5
                        int64_t v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31); // 0x40e0d0
                        v214 = v217;
                        v215 = v218;
                        while ((int32_t)v217 != 9) {
                            // 0x40e0c0
                            v216 = v218;
                            v217 = (v214 & 0xffffffff) + 1;
                            v218 = ((int32_t)(0x66666667 * (0x100000000 * v216 >> 32) / 0x100000000) >> 2) - ((int32_t)v216 >> 31);
                            v214 = v217;
                            v215 = v218;
                        }
                    }
                    // 0x40e0d7
                    v167 = v115;
                    v181 = v215;
                    v138 = v115 & 0xffffffff;
                    v148 = v18;
                } else {
                    // 0x40d418
                    v167 = 9;
                    v181 = (int64_t)*v47;
                    v138 = 9;
                    v148 = v18;
                }
                goto lab_0x40d290;
            }
        }
        case 80: {
            goto lab_0x40d435;
        }
        case 82: {
            // 0x40d3a4
            *v44 = (int64_t)"%H:%M";
            goto lab_0x40d019;
        }
        case 83: {
            // 0x40d820
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d82a
                v167 = v115;
                v181 = (int64_t)*(int32_t *)*tm;
                v138 = 2;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 84: {
            // 0x40dc69
            *v44 = (int64_t)"%H:%M:%S";
            goto lab_0x40d019;
        }
        case 85: {
            // 0x40d83c
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                int64_t v219 = *tm; // 0x40d846
                v186 = *(int32_t *)(v219 + 28) + 7 - *(int32_t *)(v219 + 24);
                goto lab_0x40d85d;
            }
        }
        case 86: {
            goto lab_0x40d120;
        }
        case 87: {
            // 0x40d8ce
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                int64_t v220 = *tm; // 0x40d8d4
                int32_t v221 = *(int32_t *)(v220 + 24); // 0x40d8de
                int32_t v222 = v221 + 6; // 0x40d8e2
                *v64 = v221;
                int32_t v223 = *(int32_t *)(v220 + 28); // 0x40d905
                v186 = 1 - v221 + v223 + 7 * ((v222 + (int32_t)(-0x6db6db6d * (int64_t)v222 / 0x100000000) >> 2) - (v222 >> 31));
                goto lab_0x40d85d;
            }
        }
        case 88: {
            goto lab_0x40ce50;
        }
        case 89: {
            // 0x40d7cd
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            v130 = v123;
            v131 = v16;
            switch ((int32_t)v122) {
                case 69: {
                    goto lab_0x40d2b2;
                }
                case 79: {
                    goto lab_0x40d948;
                }
                default: {
                    // 0x40d7e1
                    *v41 = 0;
                    int32_t v224 = *(int32_t *)(*tm + 20); // 0x40d7f1
                    int32_t v225 = v224 + 1900; // 0x40d7f4
                    v174 = v123;
                    v164 = v115;
                    v185 = v225;
                    v180 = 0;
                    v159 = v225 < 0 != ((v225 ^ v224) & (v224 ^ -0x80000000)) < 0;
                    v136 = 4;
                    v145 = v18;
                    goto lab_0x40d810;
                }
            }
        }
        case 90: {
            char v226 = v27; // 0x40d2d4
            *v43 = v226;
            *v39 = v226 != 0 ? 0 : (char)v16;
            int32_t len = strlen((char *)*str); // 0x40d2ef
            uint64_t v227 = (int64_t)len; // 0x40d2ef
            int64_t v228 = 0x100000000 * v115 >> 32;
            uint64_t v229 = (int32_t)v115 >= 0 ? v228 : 0; // 0x40d305
            int64_t v230 = v229 <= v227 ? v227 : v229; // 0x40d30d
            int64_t v231 = v3 - v20; // 0x40d311
            v1 = v231;
            *v44 = v230;
            if (v231 <= v230) {
                // break -> 0x40cbb3
                break;
            }
            int64_t v232 = v230; // 0x40d325
            int64_t v233 = 0; // 0x40d325
            if (v23 != 0) {
                char v234 = *v39; // 0x40d32a
                char v235 = *v43; // 0x40d330
                char v236 = v235; // 0x40d336
                char v237 = v234; // 0x40d336
                int64_t v238 = v23; // 0x40d336
                if (v229 > v227) {
                    int64_t v239 = v228 - v227; // 0x40d33b
                    v1 = v239;
                    int64_t v240 = v239 + v23; // 0x40d33e
                    if (v18 == 48) {
                        // 0x40e25e
                        memset((int64_t *)v23, 48, (int32_t)v239);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    } else {
                        // 0x40d34c
                        *v43 = v235;
                        *v39 = v234;
                        memset((int64_t *)v23, 32, (int32_t)v1);
                        v236 = *v43;
                        v237 = *v39;
                        v238 = v240;
                    }
                }
                int64_t v241 = v238;
                v1 = v227;
                int64_t v242 = *str; // 0x40d375
                if (v236 != 0) {
                    // 0x40e19c
                    function_40ca60(v241, v242, v227);
                } else {
                    // 0x40d386
                    if (v237 == 0) {
                        // 0x40e192
                        memcpy((int64_t *)v241, (int64_t *)v242, len);
                    } else {
                        // 0x40d38f
                        function_40cab0(v241, v242, v227);
                    }
                }
                // 0x40d394
                v232 = *v44;
                v233 = v241 + v227;
            }
            // 0x40d397
            v8 = v12;
            v9 = v13;
            v25 = v123;
            v21 = v232 + v20;
            v24 = v233;
            goto lab_0x40cb8e;
        }
        case 97: {
            goto lab_0x40cd10;
        }
        case 98: {
            goto lab_0x40d931;
        }
        case 99: {
            goto lab_0x40ce50;
        }
        case 100: {
            // 0x40db0d
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40db17
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 12);
                v138 = 2;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 101: {
            // 0x40db2a
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40db34
                v183 = *tm + 12;
                goto lab_0x40d461;
            }
        }
        case 103: {
            goto lab_0x40d120;
        }
        case 104: {
            goto lab_0x40d931;
        }
        case 106: {
            // 0x40db41
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40db4b
                *v41 = 0;
                int32_t v243 = *(int32_t *)(*tm + 28); // 0x40db5b
                int32_t v244 = v243 + 1; // 0x40db5e
                v171 = v123;
                v168 = v115;
                v182 = v244;
                v178 = 0;
                v157 = v244 < 0 != (v244 & (v243 ^ -0x80000000)) < 0;
                v139 = 3;
                v149 = v18;
                goto lab_0x40d29f;
            }
        }
        case 107: {
            // 0x40d44f
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d459
                v183 = *tm + 8;
                goto lab_0x40d461;
            }
        }
        case 108: {
            // 0x40d486
            v183 = v42;
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                goto lab_0x40d461;
            }
        }
        case 109: {
            // 0x40d496
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d4a0
                *v41 = 0;
                int32_t v245 = *(int32_t *)(*tm + 16); // 0x40d4b0
                int32_t v246 = v245 + 1; // 0x40d4b3
                v171 = v123;
                v168 = v115;
                v182 = v246;
                v178 = 0;
                v157 = v246 < 0 != (v246 & (v245 ^ -0x80000000)) < 0;
                v139 = 2;
                v149 = v18;
                goto lab_0x40d29f;
            }
        }
        case 110: {
            int32_t v247 = v115; // 0x40d4c4
            int64_t v248 = 0x100000000 * v115 >> 32;
            int64_t v249 = v247 >= 0 ? v248 : 0; // 0x40d4d5
            int64_t v250 = v249 == 0 ? 1 : v249; // 0x40d4db
            if (v3 - v20 <= v250) {
                // break -> 0x40cbb3
                break;
            }
            // 0x40d4ef
            v155 = v250;
            v156 = 0;
            if (v23 != 0) {
                int64_t v251 = v23; // 0x40d4f7
                if (v247 >= 2) {
                    int64_t v252 = v248 - 1; // 0x40d4fc
                    v1 = v252;
                    int64_t v253 = v252 + v23; // 0x40d500
                    int64_t * v254 = (int64_t *)v23;
                    int32_t v255 = v252;
                    if (v18 == 48) {
                        // 0x40e1eb
                        memset(v254, 48, v255);
                        v251 = v253;
                    } else {
                        // 0x40d50e
                        memset(v254, 32, v255);
                        v251 = v253;
                    }
                }
                // 0x40d51e
                *(char *)v251 = 10;
                v155 = v250;
                v156 = v251 + 1;
            }
            goto lab_0x40d526;
        }
        case 112: {
            // 0x40dc61
            v129 = 0;
            goto lab_0x40d435;
        }
        case 113: {
            // 0x40d531
            v172 = v123;
            v169 = v115;
            v140 = 1;
            v150 = v18;
            if ((int32_t)v122 == 79) {
                goto lab_0x40d2b2;
            } else {
                // 0x40d549
                *v41 = 0;
                v173 = v123;
                v163 = v115;
                v184 = (int64_t)((11 * *(int32_t *)(*tm + 16) >> 5) + 1);
                v179 = 0;
                v158 = 0;
                v141 = 1;
                v151 = v18;
                goto lab_0x40d560;
            }
        }
        case 114: {
            goto lab_0x40ce5d;
        }
        case 115: {
            int64_t v256 = *tm; // 0x40ce7d
            *v39 = (char)v16;
            int128_t v257 = __asm_movdqu(*(int128_t *)(v256 + 32)); // 0x40ce9f
            int128_t v258 = __asm_movdqu(*(int128_t *)v256); // 0x40cea4
            int128_t v259 = __asm_movdqu(*(int128_t *)(v256 + 16)); // 0x40cea8
            *(int128_t *)str2 = (int128_t)__asm_movaps(v258);
            *(int128_t *)(v48 + 160) = (int128_t)__asm_movaps(v259);
            *(int128_t *)v63 = (int128_t)__asm_movaps(v257);
            *(int128_t *)(v48 + 176) = (int128_t)__asm_movaps(v257);
            *(int64_t *)(v48 + 192) = *(int64_t *)(v256 + 48);
            int64_t v260 = function_40c230(*v65, (int64_t *)str2, (int32_t)v1, v124); // 0x40ced6
            int64_t v261 = v260;
            int64_t v262 = v261 >> 63; // 0x40cf08
            int64_t v263 = (v261 >> 63 & -10) + v261; // 0x40cf15
            int64_t v264 = (v260 < 0 ? -v263 : v263) + 48; // 0x40cf28
            v1 = v264 & 0xffffffff;
            int64_t v265 = v40 - 1; // 0x40cf2b
            *(char *)v265 = (char)v264;
            int64_t v266 = v265; // 0x40cf36
            while (v262 != 0) {
                // 0x40cef0
                v261 = v262;
                v262 = v261 >> 63;
                v263 = (v261 >> 63 & -10) + v261;
                v264 = (v260 < 0 ? -v263 : v263) + 48;
                v1 = v264 & 0xffffffff;
                v265 = v266 - 1;
                *(char *)v265 = (char)v264;
                v266 = v265;
            }
            int64_t v267 = (int64_t)*v39; // 0x40cedb
            int32_t v268 = v115; // 0x40cf38
            int64_t v269 = v268 >= 0 == (v268 != 0) ? v115 & 0xffffffff : 1; // 0x40cf40
            v170 = v123;
            v166 = v115;
            v135 = v269;
            v144 = v267;
            v147 = v18;
            v154 = v265;
            v175 = v123;
            v165 = v115;
            v137 = v269;
            v143 = v267;
            v146 = v18;
            v153 = v265;
            if (v260 < 0) {
                goto lab_0x40dca8;
            } else {
                goto lab_0x40cf4d;
            }
        }
        case 116: {
            int32_t v270 = v115; // 0x40d724
            int64_t v271 = 0x100000000 * v115 >> 32;
            int64_t v272 = v270 >= 0 ? v271 : 0; // 0x40d735
            int64_t v273 = v272 == 0 ? 1 : v272; // 0x40d73b
            if (v3 - v20 <= v273) {
                // break -> 0x40cbb3
                break;
            }
            // 0x40d74f
            v155 = v273;
            v156 = 0;
            if (v23 != 0) {
                int64_t v274 = v23; // 0x40d75b
                if (v270 >= 2) {
                    int64_t v275 = v271 - 1; // 0x40d760
                    v1 = v275;
                    int64_t v276 = v275 + v23; // 0x40d764
                    int64_t * v277 = (int64_t *)v23;
                    int32_t v278 = v275;
                    if (v18 == 48) {
                        // 0x40e200
                        memset(v277, 48, v278);
                        v274 = v276;
                    } else {
                        // 0x40d772
                        memset(v277, 32, v278);
                        v274 = v276;
                    }
                }
                // 0x40d782
                *(char *)v274 = 9;
                v155 = v273;
                v156 = v274 + 1;
            }
            goto lab_0x40d526;
        }
        case 117: {
            int32_t v279 = *(int32_t *)(*tm + 24); // 0x40d79f
            int32_t v280 = v279 + 6; // 0x40d7a2
            *v64 = v279;
            v167 = v115;
            v181 = v279 + 7 + -7 * ((v280 + (int32_t)(-0x6db6db6d * (int64_t)v280 / 0x100000000) >> 2) - (v280 >> 31));
            v138 = 1;
            v148 = v18;
            goto lab_0x40d290;
        }
        case 119: {
            // 0x40d918
            v130 = v123;
            v131 = v16;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d948;
            } else {
                // 0x40d91e
                v167 = v115;
                v181 = (int64_t)*(int32_t *)(*tm + 24);
                v138 = 1;
                v148 = v18;
                goto lab_0x40d290;
            }
        }
        case 120: {
            goto lab_0x40ce50;
        }
        case 121: {
            // 0x40dbf0
            v172 = v123;
            v169 = v115;
            v140 = 0;
            v150 = v18;
            if ((int32_t)v122 == 69) {
                goto lab_0x40d2b2;
            } else {
                int32_t v281 = *(int32_t *)(*tm + 20); // 0x40dc0a
                int32_t v282 = v281 % 100;
                int64_t v283 = v282; // 0x40dc22
                v167 = v115;
                v181 = v283;
                v138 = 2;
                v148 = v18;
                if (v282 < 0) {
                    int32_t v284 = v281 + 1901; // 0x40dc31
                    int64_t v285 = v284 == 0 | v284 < 0 != ((v284 ^ v281) & (v281 ^ -0x80000000)) < 0 ? -v283 : v283 + 100; // 0x40dc37
                    v167 = v115;
                    v181 = v285 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
                goto lab_0x40d290;
            }
        }
        case 122: {
            goto lab_0x40da20;
        }
        default: {
            goto lab_0x40d948;
        }
    }
  lab_0x40cb8e:
    // 0x40cb8e
    v5 = v24;
    result = v21;
    int64_t v286 = v25 + 1; // 0x40cb8e
    char v287 = *(char *)v286; // 0x40cb8e
    v6 = v8;
    v7 = v9;
    v30 = v287;
    v33 = v286;
    v19 = result;
    v22 = v5;
    if (v287 == 0) {
        // 0x40cb9b
        goto lab_0x40cb9b_2;
    }
    goto lab_0x40cb6a;
  lab_0x40cd10:
    // 0x40cd10
    v130 = v123;
    v131 = v16;
    int64_t v288; // 0x40cb00
    if ((int32_t)v122 != 0) {
        goto lab_0x40d948;
    } else {
        // 0x40cd19
        v288 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff;
        goto lab_0x40cd20;
    }
  lab_0x40d120:
    // 0x40d120
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 69) {
        goto lab_0x40d948;
    } else {
        int64_t v289 = *tm; // 0x40d12a
        int32_t v290 = *(int32_t *)(v289 + 20); // 0x40d12f
        uint32_t v291 = *(int32_t *)(v289 + 28); // 0x40d132
        uint32_t v292 = *(int32_t *)(v289 + 24); // 0x40d136
        *v64 = v290;
        int32_t v293 = v290 - 100 + (v290 >> 31 & 400); // 0x40d14d
        int32_t v294 = v291 - v292; // 0x40d154
        int32_t v295 = v294 + 382; // 0x40d157
        int32_t v296 = v291 - 379 - v294 + 7 * ((v295 + (int32_t)(-0x6db6db6d * (int64_t)v295 / 0x100000000) >> 2) - (v295 >> 31)); // 0x40d17e
        int32_t v297; // 0x40cb00
        int32_t v298; // 0x40d209
        if (v296 < 0) {
            // 0x40e017
            v1 = 365;
            int64_t v299 = 365; // 0x40e023
            if ((v293 + 3) % 4 == 0) {
                int32_t v300 = v293 - 1;
                v1 = 366;
                v299 = 366;
                if (v300 % 100 - v300 == 1 - v293) {
                    uint32_t v301 = v300 % 400;
                    int64_t v302 = v301; // 0x40e04e
                    int64_t v303 = v302 + 366 + (v302 ^ 0xffffffff) + (int64_t)(v301 == 0) & 0xffffffff; // 0x40e057
                    v1 = v303;
                    v299 = v303;
                }
            }
            int64_t v304 = v299; // 0x40e05d
            int64_t v305; // 0x40d132
            int64_t v306 = v304 + v305; // 0x40e05d
            int64_t v307; // 0x40d136
            int64_t v308 = v306 - v307 + 382; // 0x40e071
            v297 = (int32_t)(v306 - v308) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v308 >> 32) / 0x100000000 + v308) >> 2) - ((int32_t)v308 >> 31));
        } else {
            int64_t v309 = 365; // 0x40d195
            if (v293 % 4 == 0) {
                // 0x40d197
                v309 = 366;
                if (v293 % 100 == 0) {
                    // 0x40d1bc
                    v309 = v293 == 0 ? 366 : 365;
                }
            }
            int64_t v310 = (int64_t)v291 - v309; // 0x40d1e0
            int64_t v311 = v310 - (int64_t)v292 + 382; // 0x40d1e7
            v298 = (int32_t)(v310 - v311) + 3 + 7 * (((int32_t)(-0x6db6db6d * (0x100000000 * v311 >> 32) / 0x100000000 + v311) >> 2) - ((int32_t)v311 >> 31));
            v297 = v298 >= 0 ? v298 : v296;
        }
        int64_t v312 = (v298 >> 31) + 1;
        if (v125 == 71) {
            uint32_t v313 = *v64; // 0x40e105
            *v41 = 0;
            int32_t v314 = -1900 - (int32_t)v312; // 0x40e119
            int32_t v315 = v313 - v314; // 0x40e11c
            v171 = v123;
            v168 = v115;
            v182 = v312 + 1900 + (int64_t)v313 & 0xffffffff;
            v178 = 0;
            v157 = v315 < 0 != ((v315 ^ v313) & (v313 ^ v314)) < 0;
            v139 = 4;
            v149 = v18;
            goto lab_0x40d29f;
        } else {
            if (v125 != 103) {
                int32_t v316 = v297;
                int32_t v317 = v316 < 0 ? 2 : 1; // 0x40e0fa
                v167 = v115;
                v181 = v317 + (v316 + (int32_t)(-0x6db6db6d * (int64_t)v316 / 0x100000000) >> 2);
                v138 = 2;
                v148 = v18;
            } else {
                int32_t v318 = *v64; // 0x40d22f
                int32_t v319 = v312; // 0x40d25a
                int32_t v320 = (v318 % 100 + v319) % 100;
                int64_t v321 = v320; // 0x40d270
                v167 = v115;
                v181 = v321;
                v138 = 2;
                v148 = v18;
                if (v320 < 0) {
                    int32_t v322 = -1900 - v319; // 0x40d280
                    int32_t v323 = v318 - v322; // 0x40d285
                    int64_t v324 = v323 < 0 == ((v323 ^ v318) & (v318 ^ v322)) < 0 ? v321 + 100 : -v321; // 0x40d288
                    v167 = v115;
                    v181 = v324 & 0xffffffff;
                    v138 = 2;
                    v148 = v18;
                }
            }
            goto lab_0x40d290;
        }
    }
  lab_0x40d435:
    // 0x40d435
    v126 = 112;
    v127 = (char)v27 != 0 ? 0 : v16;
    v128 = ((char)v27 != 0 ? v27 : v129) & 0xffffffff;
    goto lab_0x40ce5d;
  lab_0x40ce50:
    // 0x40ce50
    v126 = v124;
    v127 = v16;
    v128 = 0;
    v130 = v123;
    v131 = v16;
    if ((int32_t)v122 == 79) {
        goto lab_0x40d948;
    } else {
        goto lab_0x40ce5d;
    }
  lab_0x40d931:;
    int64_t v660 = ((char)v27 != 0 ? v27 : v16) & 0xffffffff; // 0x40d934
    v288 = v660;
    v130 = v123;
    v131 = v660;
    if ((int32_t)v122 == 0) {
        goto lab_0x40cd20;
    } else {
        goto lab_0x40d948;
    }
  lab_0x40ce5d:;
    int64_t v325 = v128;
    int64_t v326 = v127;
    int64_t v327 = v126;
    *v45 = 0x2520;
    int64_t v328 = v327; // 0x40ce6a
    int64_t v329 = v123; // 0x40ce6a
    int64_t v330 = v115; // 0x40ce6a
    int64_t v331 = 0; // 0x40ce6a
    int64_t v332 = v326; // 0x40ce6a
    int64_t v333 = v18; // 0x40ce6a
    int64_t v334 = v325; // 0x40ce6a
    int64_t v335; // 0x40cb00
    int64_t v336; // 0x40cb00
    int64_t v337; // 0x40cb00
    int64_t v338; // 0x40cb00
    int64_t v339; // 0x40cb00
    int64_t v340; // 0x40cb00
    int64_t v341; // 0x40cb00
    int64_t v342; // 0x40cb00
    if ((int32_t)v122 != 0) {
        goto lab_0x40d2bf;
    } else {
        // 0x40ce70
        v340 = *v46;
        v342 = v327;
        v341 = v115;
        v338 = v123;
        v339 = v122;
        v335 = v326;
        v336 = v18;
        v337 = v325;
        goto lab_0x40cd40;
    }
  lab_0x40da20:;
    int64_t v343 = v132;
    int64_t v344 = *tm; // 0x40da20
    v8 = v12;
    v9 = v13;
    v25 = v343;
    v21 = v20;
    v24 = v23;
    int64_t v345; // 0x40cb00
    uint32_t v346; // 0x40da6e
    uint32_t v347; // 0x40daa3
    int32_t v348; // 0x40daa7
    if (*(int32_t *)(v344 + 32) < 0) {
        goto lab_0x40cb8e;
    } else {
        int64_t v349 = *(int64_t *)(v344 + 40); // 0x40da30
        int32_t v350 = v349; // 0x40da3a
        int64_t v351 = 1; // 0x40da3c
        if (v350 >= 0) {
            // 0x40da3e
            v351 = 0;
            if (v350 == 0) {
                // 0x40da46
                v351 = *(char *)*str == 45;
            }
        }
        // 0x40da52
        v345 = v351;
        int64_t v352 = 0x100000000 * v349 >> 32; // 0x40da5e
        int32_t v353 = v350 >> 31; // 0x40da62
        *v49 = v353;
        v346 = ((int32_t)(-0x6e5d4c3b * v352 / 0x100000000) + v350 >> 11) - v353;
        *v64 = v346;
        int32_t v354 = ((int32_t)(-0x77777777 * v352 / 0x100000000 + v349) >> 5) - *v49; // 0x40da80
        v347 = -60 * ((v354 + (int32_t)(-0x77777777 * (int64_t)v354 / 0x100000000) >> 5) - (v354 >> 31)) + v354;
        v348 = -60 * v354 + v350;
        v177 = v343;
        switch (v133) {
            case 1: {
                goto lab_0x40e176;
            }
            case 0: {
                // 0x40e1a6
                *v41 = 1;
                v171 = v343;
                v168 = v115;
                v182 = v347 + 100 * v346;
                v178 = 0;
                v157 = v345;
                v139 = 5;
                v149 = v18;
                goto lab_0x40d29f;
            }
            case 2: {
                goto lab_0x40e152;
            }
            case 3: {
                if (v348 != 0) {
                    goto lab_0x40e152;
                } else {
                    if (v347 != 0) {
                        goto lab_0x40e176;
                    } else {
                        // 0x40e1c7
                        *v41 = 1;
                        v171 = v343;
                        v168 = v115;
                        v182 = v346;
                        v178 = v347;
                        v157 = v345;
                        v139 = 3;
                        v149 = v18;
                        goto lab_0x40d29f;
                    }
                }
            }
            default: {
                goto lab_0x40dad7;
            }
        }
    }
  lab_0x40d948:;
    int64_t v355 = v130 + 1; // 0x40d94c
    v1 = v355 & 0xffffffff;
    int64_t v356 = v130 - 1;
    int64_t v357 = v356; // 0x40d95e
    while (*(char *)v356 != 37) {
        // 0x40d94f
        v356 = v357 - 1;
        v357 = v356;
    }
    int64_t v358 = 0x100000000 * (v355 - v356) >> 32; // 0x40d969
    int64_t v359 = v3 - v20; // 0x40d96f
    v1 = v359;
    int64_t v360 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40d977
    v134 = v359;
    v162 = v360;
    v176 = v358;
    v160 = v130;
    v161 = v356;
    v142 = v131;
    v152 = v358 >= v360 ? v358 : v360;
    goto lab_0x40d983;
  lab_0x40d983:
    // 0x40d983
    if (v134 <= v152) {
        // break -> 0x40cbb3
        goto lab_0x40cbb3_11;
    }
    int64_t v361 = v160;
    int64_t v362 = v361; // 0x40d98f
    int64_t v363 = 0; // 0x40d98f
    if (v23 != 0) {
        int64_t v364 = v142;
        int64_t v365 = v161;
        int64_t v366 = v176;
        int64_t v367 = v366; // 0x40d998
        int64_t v368 = v361; // 0x40d998
        int64_t v369 = v365; // 0x40d998
        int64_t v370 = v364; // 0x40d998
        int64_t v371 = v23; // 0x40d998
        if (v366 < v162) {
            // 0x40d99a
            *v54 = v366;
            int64_t v372 = (0x100000000 * v115 >> 32) - v366; // 0x40d9a2
            v1 = v372;
            *v55 = v361;
            int64_t v373 = v372 + v23; // 0x40d9aa
            *v53 = v365;
            *v41 = (char)v364;
            int64_t * v374 = (int64_t *)v23;
            int32_t v375 = v1;
            if (v18 == 48) {
                // 0x40df24
                memset(v374, 48, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            } else {
                // 0x40d9c2
                memset(v374, 32, v375);
                v367 = *v54;
                v368 = *v55;
                v369 = *v53;
                v370 = (int64_t)*v41;
                v371 = v373;
            }
        }
        int64_t v376 = v371;
        int64_t v377 = v369;
        *v53 = v368;
        v1 = v367;
        *v44 = v367;
        if ((char)v370 == 0) {
            // 0x40dd6e
            memcpy((int64_t *)v376, (int64_t *)v377, (int32_t)v1);
        } else {
            // 0x40da03
            function_40cab0(v376, v377, v1);
        }
        // 0x40da12
        v362 = *v53;
        v363 = *v44 + v376;
    }
    // 0x40da15
    v8 = v12;
    v9 = v13;
    v25 = v362;
    v21 = v152 + v20;
    v24 = v363;
    goto lab_0x40cb8e;
  lab_0x40dad7:;
    int64_t v378 = v177;
    int64_t v379 = v3 - v20; // 0x40dae0
    v1 = v379;
    v130 = v378;
    v131 = v16;
    if (*(char *)v378 != 37) {
        goto lab_0x40d948;
    } else {
        int64_t v380 = (int32_t)v115 >= 0 ? 0x100000000 * v115 >> 32 : 0; // 0x40dae8
        v134 = v379;
        v162 = v380;
        v176 = 1;
        v160 = v378;
        v161 = v378;
        v142 = v16;
        v152 = v380 != 0 ? v380 : 1;
        goto lab_0x40d983;
    }
  lab_0x40d2b2:
    // 0x40d2b2
    *v45 = 0x2520;
    v328 = v124;
    v329 = v172;
    v330 = v169;
    v331 = v140;
    v332 = v16;
    v333 = v150;
    v334 = 0;
    goto lab_0x40d2bf;
  lab_0x40d019:
    // 0x40d019
    *v50 = (int64_t)*v47;
    *v51 = *v65;
    int64_t v643 = *v44; // 0x40d042
    v1 = v643;
    uint64_t v644 = function_40cb00(0, -1, v643, *tm, v16, *v52); // 0x40d047
    int64_t v645 = 0x100000000 * v115 >> 32;
    uint64_t v646 = (int32_t)v115 >= 0 ? v645 : 0; // 0x40d060
    int64_t v647 = v644 >= v646 ? v644 : v646; // 0x40d068
    int64_t v648 = v3 - v20; // 0x40d06c
    *v53 = v647;
    if (v648 <= v647) {
        // break -> 0x40cbb3
        goto lab_0x40cbb3_11;
    }
    int64_t v649 = v647; // 0x40d080
    int64_t v650 = 0; // 0x40d080
    if (v23 != 0) {
        int64_t v651 = v644; // 0x40d085
        int64_t v652 = v648; // 0x40d085
        int64_t v653 = v23; // 0x40d085
        if (v644 < v646) {
            // 0x40d087
            *v54 = v644;
            int64_t v654 = v645 - v644; // 0x40d08f
            v1 = v654;
            *v55 = v648;
            int64_t v655 = v654 + v23; // 0x40d097
            int64_t * v656 = (int64_t *)v23;
            int32_t v657 = v1;
            if (v18 == 48) {
                // 0x40dff8
                memset(v656, 48, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            } else {
                // 0x40d0a5
                memset(v656, 32, v657);
                v651 = *v54;
                v652 = *v55;
                v653 = v655;
            }
        }
        // 0x40d0bf
        *v55 = v651;
        *v50 = (int64_t)*v47;
        *v51 = *v65;
        int64_t v658 = *v44; // 0x40d0e6
        v1 = v658;
        function_40cb00((int32_t)v653, v652, v658, *tm, v16, *v52);
        v649 = *v53;
        v650 = *v55 + v653;
    }
    // 0x40d0fc
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v649 + v20;
    v24 = v650;
    goto lab_0x40cb8e;
  lab_0x40cd20:
    // 0x40cd20
    *v45 = 0x2520;
    v340 = *v46;
    v342 = v124;
    v341 = v115;
    v338 = v123;
    v339 = 0;
    v335 = v288;
    v336 = v18;
    v337 = 0;
    goto lab_0x40cd40;
  lab_0x40d461:;
    int64_t v659 = (int64_t)*(int32_t *)v183;
    v167 = v115;
    v181 = v659;
    v138 = 2;
    v148 = v18;
    switch ((int32_t)v18) {
        case 48: {
            goto lab_0x40d290;
        }
        case 45: {
            goto lab_0x40d290;
        }
        default: {
            // 0x40d47b
            v167 = v115;
            v181 = v659;
            v138 = 2;
            v148 = 95;
            goto lab_0x40d290;
        }
    }
  lab_0x40d526:
    // 0x40d526
    v8 = v12;
    v9 = v13;
    v25 = v123;
    v21 = v155 + v20;
    v24 = v156;
    goto lab_0x40cb8e;
  lab_0x40d2bf:
    // 0x40d2bf
    *(char *)(v48 + 114) = (char)v122;
    v340 = v48 + 115;
    v342 = v328;
    v341 = v330;
    v338 = v329;
    v339 = v331 & 0xffffffff;
    v335 = v332;
    v336 = v333;
    v337 = v334;
    goto lab_0x40cd40;
  lab_0x40dca8:;
    int64_t v630 = v153;
    int64_t v631 = v143;
    int64_t v632 = v137;
    int64_t v633 = v165;
    int64_t v634 = v175;
    *v41 = 45;
    char v436 = 45; // 0x40dcb6
    int64_t v437 = v634; // 0x40dcb6
    int64_t v438 = v633; // 0x40dcb6
    int64_t v439 = v632; // 0x40dcb6
    int64_t v440 = v631; // 0x40dcb6
    int64_t v441 = v146; // 0x40dcb6
    int64_t v442 = v630; // 0x40dcb6
    int32_t v429; // 0x40cb00
    int64_t v433; // 0x40cb00
    int64_t v434; // 0x40cb00
    int64_t v435; // 0x40cb00
    int64_t v432; // 0x40cb00
    int64_t v431; // 0x40cb00
    int64_t v430; // 0x40cb00
    if ((int32_t)v146 != 45) {
        goto lab_0x40d5f0;
    } else {
        // 0x40dca8
        v429 = v633;
        v430 = 45;
        v431 = v634;
        v432 = v633;
        v433 = v632;
        v434 = v631;
        v435 = v630;
        goto lab_0x40dcbc;
    }
  lab_0x40cf4d:;
    int64_t v524 = v135;
    int64_t v523 = v166;
    int64_t v522 = v40 - v154; // 0x40cf59
    char v505; // 0x40cb00
    int64_t v510; // 0x40cb00
    int64_t v511; // 0x40cb00
    int64_t v512; // 0x40cb00
    int64_t v509; // 0x40cb00
    int64_t v506; // 0x40cb00
    int64_t v508; // 0x40cb00
    int64_t v507; // 0x40cb00
    if ((int32_t)v147 == 45) {
        goto lab_0x40cf74;
    } else {
        int32_t v635 = v524 - v522; // 0x40cf6b
        if (v635 >= 0 == (v635 != 0)) {
            int64_t v636; // 0x40cf5c
            int32_t v637; // 0x40cf5f
            if (v637 == 95) {
                // 0x40de6e
                *v41 = 0;
                v505 = 0;
                v506 = v636;
                int64_t v638; // 0x40cb00
                v507 = v638;
                v508 = v523;
                int64_t v639; // 0x40cf68
                v509 = v639;
                v510 = v524;
                int64_t v640; // 0x40cb00
                v511 = v640;
                int64_t v641; // 0x40cb00
                v512 = v641;
                goto lab_0x40de73;
            } else {
                int64_t v642 = 0x100000000 * v524 >> 32; // 0x40e13b
                v1 = v642;
                if (v642 >= v636) {
                    // break -> 0x40cbb3
                    goto lab_0x40cbb3_11;
                }
                // 0x40e147
                goto lab_0x40d6c5;
            }
        } else {
            goto lab_0x40cf74;
        }
    }
  lab_0x40d290:
    // 0x40d290
    *v41 = 0;
    v171 = v123;
    v168 = v167;
    v182 = v181;
    v178 = 0;
    v157 = 0;
    v139 = v138;
    v149 = v148;
    goto lab_0x40d29f;
  lab_0x40d29f:;
    int64_t v596 = v149;
    int64_t v597 = v139;
    int64_t v598 = v157;
    int64_t v599 = v178;
    int64_t v600 = v182;
    int64_t v601 = v168;
    int64_t v602 = v171;
    v174 = v602;
    v164 = v601;
    v185 = v600;
    v180 = v599;
    v159 = v598;
    v136 = v597;
    v145 = v596;
    int64_t v603; // 0x40cb00
    int64_t v604; // 0x40cb00
    int64_t v605; // 0x40cb00
    int64_t v606; // 0x40cb00
    int64_t v607; // 0x40cb00
    int64_t v608; // 0x40cb00
    int64_t v609; // 0x40cb00
    if ((int32_t)v122 != 79) {
        goto lab_0x40d810;
    } else {
        // 0x40d2a9
        v172 = v602;
        v169 = v601;
        v140 = v597;
        v150 = v596;
        v607 = v602;
        v606 = v601;
        v609 = v600;
        v608 = v599;
        v605 = v598;
        v603 = v597;
        v604 = v596;
        if ((char)v598 != 0) {
            goto lab_0x40d819;
        } else {
            goto lab_0x40d2b2;
        }
    }
  lab_0x40d85d:;
    int32_t v610 = v186;
    int64_t v611 = -0x6db6db6d * (int64_t)v610 / 0x100000000;
    v1 = v611;
    v167 = v115;
    v181 = (v610 + (int32_t)v611 >> 2) - (v610 >> 31);
    v138 = 2;
    v148 = v18;
    goto lab_0x40d290;
  lab_0x40d810:
    // 0x40d810
    v173 = v174;
    v163 = v164;
    v184 = v185;
    v179 = v180;
    v158 = v159;
    v141 = v136;
    v151 = v145;
    v607 = v174;
    v606 = v164;
    v609 = v185;
    v608 = v180;
    v605 = v159;
    v603 = v136;
    v604 = v145;
    if ((char)v159 == 0) {
        goto lab_0x40d560;
    } else {
        goto lab_0x40d819;
    }
  lab_0x40cd40:;
    int64_t v381 = v337;
    int64_t v382 = v336;
    int64_t v383 = v341;
    *(char *)v340 = (char)v342;
    v1 = format;
    *(char *)(v340 + 1) = 0;
    *v44 = v338;
    *v56 = (int32_t)v339;
    *v39 = (char)v335;
    int32_t copied_chars = strftime((char *)str2, 1024, (char *)format, (struct tm *)*tm); // 0x40cd6c
    int64_t v384 = *v44; // 0x40cd71
    v8 = v12;
    v9 = v13;
    v25 = v384;
    v21 = v20;
    v24 = v23;
    int64_t v385; // 0x40cb00
    int64_t v386; // 0x40cb00
    int64_t v387; // 0x40cb00
    int64_t v388; // 0x40cb00
    int64_t v389; // 0x40cb00
    int64_t v390; // 0x40cb00
    int64_t v391; // 0x40cb00
    int64_t v392; // 0x40cb00
    int64_t v393; // 0x40cb00
    int64_t v394; // 0x40cb00
    int64_t v395; // 0x40cb00
    int64_t v396; // 0x40cb00
    if (copied_chars == 0) {
        goto lab_0x40cb8e;
    } else {
        uint64_t v397 = (int64_t)copied_chars - 1; // 0x40cd7f
        int64_t v398 = 0x100000000 * v383 >> 32;
        uint64_t v399 = (int32_t)v383 >= 0 ? v398 : 0; // 0x40cd91
        int64_t v400 = v397 >= v399 ? v397 : v399; // 0x40cd99
        int64_t v401 = v3 - v20; // 0x40cd9d
        v1 = v401;
        if (v401 <= v400) {
            // break -> 0x40cbb3
            goto lab_0x40cbb3_11;
        }
        // 0x40cda9
        v392 = v400;
        v391 = v384;
        v388 = v20;
        v390 = 0;
        if (v23 == 0) {
            goto lab_0x40ce46;
        } else {
            char v402 = *v39; // 0x40cdb7
            int64_t v403 = v397; // 0x40cdc0
            int64_t v404 = v384; // 0x40cdc0
            char v405 = v402; // 0x40cdc0
            int64_t v406 = v23; // 0x40cdc0
            if (v397 < v399 == *v56 == 0) {
                // 0x40cdc7
                *v55 = v397;
                int64_t v407 = v398 - v397; // 0x40cdcf
                v1 = v407;
                *v53 = v384;
                int64_t v408 = v407 + v23; // 0x40cdd7
                *v41 = v402;
                int64_t * v409 = (int64_t *)v23;
                int32_t v410 = v1;
                if ((int32_t)v382 == 48) {
                    // 0x40dd96
                    memset(v409, 48, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                } else {
                    // 0x40cdea
                    memset(v409, 32, v410);
                    v403 = *v55;
                    v404 = *v53;
                    v405 = *v41;
                    v406 = v408;
                }
            }
            int64_t v411 = v406;
            *v53 = v404;
            v1 = v403;
            *v44 = v403;
            v393 = v400;
            v396 = v57;
            v395 = v411;
            v385 = v405;
            v386 = v20;
            if ((char)v381 != 0) {
                // 0x40dd82
                function_40ca60(v411, v57, v1);
                v394 = v400;
                v387 = v20;
                v389 = v411;
                goto lab_0x40ce43;
            } else {
                goto lab_0x40ce2b;
            }
        }
    }
  lab_0x40d560:;
    int64_t v412 = v151;
    int64_t v413 = v141;
    int64_t v414 = v163;
    int64_t v415 = v173;
    *v39 = (char)v158;
    int64_t v416 = v184; // 0x40d573
    int64_t v417 = v40 - 1;
    int64_t v418 = v417; // 0x40d580
    if (v179 % 2 != 0) {
        // 0x40d582
        *(char *)v417 = 58;
        v418 = v40 - 2;
    }
    int64_t v419 = v418;
    uint32_t v420 = (int32_t)v179 >> 1; // 0x40d595
    int64_t v421 = 0xcccccccd * v416 / 0x800000000; // 0x40d597
    v1 = v421;
    *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    while (v416 < 10 != (v420 == 0)) {
        // 0x40d5ba
        v416 = v1 & 0xffffffff;
        int64_t v422 = v420; // 0x40d5bc
        int64_t v423 = v419;
        v417 = v423 - 1;
        v418 = v417;
        if (v422 % 2 != 0) {
            // 0x40d582
            *(char *)v417 = 58;
            v418 = v423 - 2;
        }
        // 0x40d590
        v419 = v418;
        v420 = (int32_t)v422 >> 1;
        v421 = 0xcccccccd * v416 / 0x800000000;
        v1 = v421;
        *(char *)v419 = (char)v416 + 48 + -10 * (char)v421;
    }
    int32_t v424 = v413; // 0x40d5c6
    int32_t v425 = v414;
    int32_t v426 = v424 - v425; // 0x40d5c6
    int64_t v427 = v426 < 0 == ((v426 ^ v424) & (int32_t)(v413 ^ v414)) < 0 ? v413 : v414;
    int64_t v428 = v427 & 0xffffffff; // 0x40d5c9
    v175 = v415;
    v165 = v414;
    v137 = v428;
    v143 = v16;
    v146 = v412;
    v153 = v419;
    if (*v39 != 0) {
        goto lab_0x40dca8;
    } else {
        // 0x40d5d6
        v170 = v415;
        v166 = v414;
        v135 = v428;
        v144 = v16;
        v147 = v412;
        v154 = v419;
        if (*v41 == 0) {
            goto lab_0x40cf4d;
        } else {
            // 0x40d5e1
            v429 = v425;
            v430 = 43;
            v431 = v415;
            v432 = v414;
            v433 = v428;
            v434 = v16;
            v435 = v419;
            if ((int32_t)v412 == 45) {
                goto lab_0x40dcbc;
            } else {
                // 0x40d5eb
                *v41 = 43;
                v436 = 43;
                v437 = v415;
                v438 = v414;
                v439 = v428;
                v440 = v16;
                v441 = v412;
                v442 = v419;
                goto lab_0x40d5f0;
            }
        }
    }
  lab_0x40d5f0:;
    int64_t v443 = v442;
    int64_t v444 = v441;
    int64_t v445 = v440;
    int64_t v446 = v439;
    int64_t v447 = v438;
    int64_t v448 = v437;
    int64_t v449 = v40 - v443; // 0x40d600
    int64_t v450 = (v449 ^ 0xffffffff) + v446; // 0x40d603
    uint64_t v451 = v3 - v20; // 0x40d606
    int64_t v452; // 0x40cb00
    int64_t v453; // 0x40cb00
    int64_t v454; // 0x40cb00
    int64_t v455; // 0x40cb00
    int64_t v456; // 0x40cb00
    int64_t v457; // 0x40cb00
    int64_t v458; // 0x40cb00
    int64_t v459; // 0x40cb00
    int64_t v460; // 0x40cb00
    int64_t v461; // 0x40cb00
    int64_t v462; // 0x40cb00
    int64_t v463; // 0x40cb00
    int64_t v464; // 0x40cb00
    int64_t v465; // 0x40cb00
    int64_t v466; // 0x40cb00
    int64_t v467; // 0x40cb00
    int64_t v468; // 0x40cb00
    int64_t v469; // 0x40cb00
    int64_t v470; // 0x40cb00
    int64_t v471; // 0x40cb00
    int64_t v472; // 0x40cb00
    int64_t v473; // 0x40cb00
    int64_t v474; // 0x40cb00
    int64_t v475; // 0x40cb00
    int64_t v476; // 0x40cb00
    int64_t v477; // 0x40d64a
    if ((int32_t)v450 < 1) {
        int64_t v478 = 0x100000000 * v447 >> 32;
        int64_t v479 = (int32_t)v447 >= 0 ? v478 : 0; // 0x40ddcd
        int64_t v480 = v479 != 0 ? v479 : 1; // 0x40ddd3
        if (v480 >= v451) {
            // break -> 0x40cbb3
            goto lab_0x40cbb3_11;
        }
        int64_t v481 = v449; // 0x40dde3
        int64_t v482 = v480; // 0x40dde3
        int64_t v483 = v479; // 0x40dde3
        int64_t v484 = v446; // 0x40dde3
        int64_t v485 = v445; // 0x40dde3
        int64_t v486 = 0; // 0x40dde3
        if (v23 != 0) {
            int32_t v487 = v446; // 0x40dde5
            int64_t v488 = v449; // 0x40dde8
            int64_t v489 = v480; // 0x40dde8
            int64_t v490 = v479; // 0x40dde8
            int64_t v491 = v446; // 0x40dde8
            int64_t v492 = v445; // 0x40dde8
            int64_t v493 = v23; // 0x40dde8
            if (v487 == 0 && v479 >= 2) {
                // 0x40ddf0
                *v61 = v449;
                int64_t v494 = v478 - 1; // 0x40ddf8
                v1 = v494;
                *v62 = v480;
                *v59 = v479;
                *v53 = v494 + v23;
                *v60 = v487;
                *v43 = (char)v445;
                if ((int32_t)v444 == 48) {
                    // 0x40e215
                    int64_t * v495; // 0x40cb00
                    int32_t v496; // 0x40cb00
                    memset(v495, 48, v496);
                    int64_t v497 = *v53; // 0x40e222
                    unsigned char v498 = *v43; // 0x40e227
                    uint32_t v499 = *v60; // 0x40e22d
                    int64_t v500 = *v59; // 0x40e232
                    int64_t v501 = *v62; // 0x40e237
                    int64_t v502 = *v61; // 0x40e23c
                    v488 = v502;
                    v489 = v501;
                    v490 = v500;
                    v491 = v499;
                    v492 = v498;
                    v493 = v497;
                } else {
                    // 0x40de23
                    memset((int64_t *)v23, 32, (int32_t)v1);
                    v488 = *v61;
                    v489 = *v62;
                    v490 = *v59;
                    v491 = (int64_t)*v60;
                    v492 = (int64_t)*v43;
                    v493 = *v53;
                }
            }
            // 0x40de4f
            *(char *)v493 = *v41;
            v481 = v488;
            v482 = v489;
            v483 = v490;
            v484 = v491;
            v485 = v492;
            v486 = v493 + 1;
        }
        int64_t v503 = v482 + v20; // 0x40de60
        v472 = v3 - v503;
        v476 = v481;
        v473 = v447;
        v468 = v448;
        v469 = v483;
        v453 = v484;
        v457 = v485;
        v459 = v444;
        v461 = v443;
        v462 = v503;
        v466 = v486;
        goto lab_0x40cf86;
    } else {
        int32_t v504 = v444; // 0x40d612
        v505 = v436;
        v506 = v451;
        v507 = v448;
        v508 = v447;
        v509 = v450;
        v510 = v446;
        v511 = v445;
        v512 = v443;
        if (v504 == 95) {
            goto lab_0x40de73;
        } else {
            // 0x40d61c
            if (0x100000000 * v446 >> 32 >= v451) {
                // break -> 0x40cbb3
                goto lab_0x40cbb3_11;
            }
            int64_t v513 = 0x100000000 * v447 >> 32;
            int64_t v514 = (int32_t)v447 >= 0 ? v513 : 0; // 0x40d637
            v1 = v514;
            uint64_t v515 = v514 != 0 ? v514 : 1; // 0x40d63d
            if (v515 >= v451) {
                // break -> 0x40cbb3
                goto lab_0x40cbb3_11;
            }
            // 0x40d64a
            v477 = v515 + v20;
            int64_t v516 = 0x100000000 * v450 >> 32; // 0x40d64d
            v475 = v449;
            v467 = v448;
            v471 = v516;
            v452 = v446;
            v456 = v445;
            v458 = v444;
            v460 = v443;
            v463 = v477;
            v465 = 0;
            if (v23 == 0) {
                goto lab_0x40d710;
            } else {
                int32_t v517 = v446; // 0x40d65c
                v474 = v449;
                v470 = v516;
                v454 = v446;
                v455 = v445;
                v464 = v23;
                if (v517 == 0 && v514 >= 2) {
                    // 0x40d667
                    *v59 = v516;
                    int64_t v518 = v513 - 1; // 0x40d66f
                    v1 = v518;
                    *v54 = v449;
                    int64_t v519 = v518 + v23; // 0x40d678
                    *v56 = v517;
                    *v39 = (char)v445;
                    int64_t * v520 = (int64_t *)v23;
                    int32_t v521 = v1;
                    if (v504 == 48) {
                        // 0x40e27f
                        memset(v520, 48, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    } else {
                        // 0x40d690
                        memset(v520, 32, v521);
                        v474 = *v54;
                        v470 = *v59;
                        v454 = (int64_t)*v56;
                        v455 = (int64_t)*v39;
                        v464 = v519;
                    }
                }
                // 0x40d6b5
                *(char *)v464 = *v41;
                goto lab_0x40d6c5;
            }
        }
    }
  lab_0x40cf74:
    // 0x40cf74
    v472 = v3 - v20;
    v476 = v522;
    v473 = v523;
    v468 = v170;
    v469 = (int32_t)v523 >= 0 ? 0x100000000 * v523 >> 32 : 0;
    v453 = v524;
    v457 = v144;
    v459 = v147;
    v461 = v154;
    v462 = v20;
    v466 = v23;
    goto lab_0x40cf86;
  lab_0x40e176:
    // 0x40e176
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v347 + 100 * v346;
    v178 = 4;
    v157 = v345;
    v139 = 6;
    v149 = v18;
    goto lab_0x40d29f;
  lab_0x40e152:
    // 0x40e152
    *v41 = 1;
    v171 = v343;
    v168 = v115;
    v182 = v348 + 0x2710 * v346 + 100 * v347;
    v178 = 20;
    v157 = v345;
    v139 = 9;
    v149 = v18;
    goto lab_0x40d29f;
  lab_0x40d819:
    // 0x40d819
    v173 = v607;
    v163 = v606;
    v184 = -v609 & 0xffffffff;
    v179 = v608;
    v158 = v605;
    v141 = v603;
    v151 = v604;
    goto lab_0x40d560;
  lab_0x40dcbc:;
    int64_t v612 = 0x100000000 * v432 >> 32;
    int64_t v613 = v429 >= 0 ? v612 : 0; // 0x40dcd2
    uint64_t v614 = v613 != 0 ? v613 : 1; // 0x40dcd8
    if (v3 - v20 <= v614) {
        // break -> 0x40cbb3
        goto lab_0x40cbb3_11;
    }
    int64_t v615 = v434;
    int64_t v616 = v433;
    int64_t v617 = v613; // 0x40dceb
    int64_t v618 = v616; // 0x40dceb
    int64_t v619 = v615; // 0x40dceb
    int64_t v620 = 0; // 0x40dceb
    if (v23 != 0) {
        int64_t v621 = v430;
        int32_t v622 = v616; // 0x40dced
        int64_t v623 = v621; // 0x40dcf0
        int64_t v624 = v613; // 0x40dcf0
        int64_t v625 = v616; // 0x40dcf0
        int64_t v626 = v615; // 0x40dcf0
        int64_t v627 = v23; // 0x40dcf0
        if (v622 == 0 && v613 >= 2) {
            // 0x40dcf8
            *v58 = (char)v621;
            int64_t v628 = v612 - 1; // 0x40dd07
            *v54 = v613;
            v1 = v628;
            *v56 = v622;
            *v39 = (char)v615;
            *v44 = v628;
            memset((int64_t *)v23, 32, (int32_t)v628);
            v624 = *v54;
            v623 = (int64_t)*v58;
            v625 = (int64_t)*v56;
            v626 = (int64_t)*v39;
            v627 = *v44 + v23;
        }
        // 0x40dd44
        *(char *)v627 = (char)v623;
        v617 = v624;
        v618 = v625;
        v619 = v626;
        v620 = v627 + 1;
    }
    int64_t v629 = v614 + v20; // 0x40dd4f
    v472 = v3 - v629;
    v476 = v40 - v435;
    v473 = v432;
    v468 = v431;
    v469 = v617;
    v453 = v618;
    v457 = v619;
    v459 = 45;
    v461 = v435;
    v462 = v629;
    v466 = v620;
    goto lab_0x40cf86;
  lab_0x40cf86:;
    uint64_t v525 = v469;
    uint64_t v526 = v476;
    int64_t v527 = v526 >= v525 ? v526 : v525; // 0x40cf8c
    if (v527 >= v472) {
        // break -> 0x40cbb3
        goto lab_0x40cbb3_11;
    }
    int64_t v528 = v466;
    int64_t v529 = v462;
    int64_t v530 = v468;
    v392 = v527;
    v391 = v530;
    v388 = v529;
    v390 = 0;
    if (v528 == 0) {
        goto lab_0x40ce46;
    } else {
        int64_t v531 = v457;
        int64_t v532 = v526; // 0x40cfa5
        int64_t v533 = v530; // 0x40cfa5
        int64_t v534 = v531; // 0x40cfa5
        int64_t v535 = v528; // 0x40cfa5
        if (v526 < v525 == (int32_t)v453 == 0) {
            // 0x40cfac
            *v55 = v526;
            int64_t v536 = (0x100000000 * v473 >> 32) - v526; // 0x40cfb4
            v1 = v536;
            *v53 = v530;
            *v41 = (char)v531;
            if ((int32_t)v459 == 48) {
                // 0x40def7
                int64_t * v537; // 0x40cb00
                int32_t v538; // 0x40cb00
                memset(v537, 48, v538);
                unsigned char v539 = *v41; // 0x40df07
                int64_t v540 = *v53; // 0x40df0d
                int64_t v541 = *v55; // 0x40df12
                v532 = v541;
                v533 = v540;
                v534 = v539;
                int64_t v542; // 0x40cfbc
                v535 = v542;
            } else {
                // 0x40cfcf
                memset((int64_t *)v528, 32, (int32_t)v1);
                v532 = *v55;
                v533 = *v53;
                v534 = (int64_t)*v41;
                v535 = v528 + v536;
            }
        }
        // 0x40cfef
        *v53 = v533;
        v1 = v532;
        *v44 = v532;
        v393 = v527;
        v396 = v461;
        v395 = v535;
        v385 = v534;
        v386 = v529;
        goto lab_0x40ce2b;
    }
  lab_0x40ce46:
    // 0x40ce46
    v8 = v12;
    v9 = v13;
    v25 = v391;
    v21 = v388 + v392;
    v24 = v390;
    goto lab_0x40cb8e;
  lab_0x40de73:;
    int64_t v543 = v509;
    int64_t v544 = 0x100000000 * v543 >> 32; // 0x40de73
    if (v544 >= v506) {
        // break -> 0x40cbb3
        goto lab_0x40cbb3_11;
    }
    int64_t v545 = v512;
    int64_t v546 = v511;
    int64_t v547 = v510;
    int64_t v548 = v508;
    int64_t v549 = v507;
    char v550 = v505; // 0x40de82
    int64_t v551 = v543 & 0xffffffff; // 0x40de82
    int64_t v552 = v547; // 0x40de82
    int64_t v553 = v546; // 0x40de82
    int64_t v554 = 0; // 0x40de82
    if (v23 != 0) {
        // 0x40de84
        v1 = v544;
        *v60 = (int32_t)v543;
        *v56 = (int32_t)v547;
        *v39 = (char)v546;
        memset((int64_t *)v23, 32, (int32_t)v544);
        v550 = *v41;
        v551 = (int64_t)*v60;
        v552 = (int64_t)*v56;
        v553 = (int64_t)*v39;
        v554 = v544 + v23;
    }
    int64_t v555 = v554;
    int64_t v556 = v553;
    int64_t v557 = v552;
    int64_t v558 = v551;
    char v559 = v550; // 0x40ded0
    int64_t v560 = v544 + v20; // 0x40deb8
    int32_t v561 = v558; // 0x40debe
    int32_t v562 = v561 - (int32_t)v548; // 0x40debe
    int64_t v563 = v562 < 0 == ((v562 ^ v561) & (int32_t)(v558 ^ v548)) < 0 ? 0 : v548 - v558 & 0xffffffff; // 0x40dec6
    int64_t v564 = v3 - v560; // 0x40decd
    int64_t v565 = 0x100000000 * v563 >> 32;
    if (v559 != 0) {
        int64_t v566 = v563 != 0 ? v565 : 1; // 0x40df6b
        if (v566 >= v564) {
            // break -> 0x40cbb3
            goto lab_0x40cbb3_11;
        }
        int64_t v567 = v566; // 0x40df7b
        int64_t v568 = v565; // 0x40df7b
        int64_t v569 = v557; // 0x40df7b
        int64_t v570 = v556; // 0x40df7b
        int64_t v571 = 0; // 0x40df7b
        if (v555 != 0) {
            int32_t v572 = v557; // 0x40df7d
            char v573 = v559; // 0x40df80
            int64_t v574 = v566; // 0x40df80
            int64_t v575 = v565; // 0x40df80
            int64_t v576 = v557; // 0x40df80
            int64_t v577 = v556; // 0x40df80
            int64_t v578 = v555; // 0x40df80
            if (v572 == 0 && v565 >= 2) {
                int64_t v579 = v565 - 1; // 0x40df88
                *v59 = v566;
                v1 = v579;
                *v60 = v572;
                *v43 = (char)v556;
                *v53 = v565;
                memset((int64_t *)v555, 32, (int32_t)v579);
                v574 = *v59;
                v575 = *v53;
                v573 = *v41;
                v576 = (int64_t)*v60;
                v577 = (int64_t)*v43;
                v578 = v579 + v555;
            }
            // 0x40dfc8
            v568 = v575;
            v567 = v574;
            *(char *)v578 = v573;
            v569 = v576;
            v570 = v577;
            v571 = v578 + 1;
        }
        int64_t v580 = v567 + v560; // 0x40dfd9
        v472 = v3 - v580;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v568;
        v453 = v569;
        v457 = v570;
        v459 = 95;
        v461 = v545;
        v462 = v580;
        v466 = v571;
    } else {
        // 0x40dedb
        v472 = v564;
        v476 = v40 - v545;
        v473 = v563;
        v468 = v549;
        v469 = v565;
        v453 = v557;
        v457 = v556;
        v459 = 95;
        v461 = v545;
        v462 = v560;
        v466 = v555;
    }
    goto lab_0x40cf86;
  lab_0x40ce2b:;
    int64_t v581 = v386;
    int64_t v582 = v395;
    int64_t v583 = v396;
    int64_t v584 = v393;
    if ((char)v385 == 0) {
        // 0x40dc90
        memcpy((int64_t *)v582, (int64_t *)v583, (int32_t)v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    } else {
        // 0x40ce34
        function_40cab0(v582, v583, v1);
        v394 = v584;
        v387 = v581;
        v389 = v582;
    }
    goto lab_0x40ce43;
  lab_0x40d710:;
    int64_t v585 = v463 + v471; // 0x40d714
    v472 = v3 - v585;
    v476 = v475;
    v473 = 0;
    v468 = v467;
    v469 = 0;
    v453 = v452;
    v457 = v456;
    v459 = v458;
    v461 = v460;
    v462 = v585;
    v466 = v465;
    goto lab_0x40cf86;
  lab_0x40d6c5:;
    int64_t v586 = v464 + 1;
    int64_t v587 = v477;
    int64_t v588 = v443;
    int64_t v589 = v444;
    int64_t v590 = v455;
    int64_t v591 = v454;
    int64_t v592 = v470;
    int64_t v593 = v448;
    int64_t v594 = v474;
    v475 = v594;
    v467 = v593;
    v471 = v592;
    v452 = v591;
    v456 = v590;
    v458 = v589;
    v460 = v588;
    v463 = v587;
    v465 = 0;
    if (v586 != 0) {
        // 0x40d6ca
        v1 = v592;
        *v59 = v594;
        *v60 = (int32_t)v591;
        *v55 = v593;
        *v39 = (char)v590;
        *v44 = v592;
        memset((int64_t *)v586, 48, (int32_t)v592);
        int64_t v595 = *v44; // 0x40d6f3
        v475 = *v59;
        v467 = *v55;
        v471 = v595;
        v452 = (int64_t)*v60;
        v456 = (int64_t)*v39;
        v458 = v589;
        v460 = v588;
        v463 = v587;
        v465 = v595 + v586;
    }
    goto lab_0x40d710;
  lab_0x40ce43:
    // 0x40ce43
    v392 = v394;
    v391 = *v53;
    v388 = v387;
    v390 = *v44 + v389;
    goto lab_0x40ce46;
  lab_0x40cb9b_2:
    // 0x40cb9b
    if (v3 != 0 && v5 != 0) {
        // 0x40cba7
        *(char *)v5 = 0;
    }
    // 0x40cbb3
    return result;
}
// Address range: 0x40e2d0 - 0x40e2ef
int64_t function_40e2d0(int64_t a1, int64_t a2, char * a3, int64_t a4, int32_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    char v1 = 0; // bp-9, 0x40e2d4
    int64_t result = function_40cb00((int32_t)a1, a2, (int64_t)a3, a4, 0, (int64_t)&v1); // 0x40e2e5
    return result;
}
// Address range: 0x40e2f0 - 0x40e36b
int64_t function_40e2f0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40e2f7
    if (fileno(stream) < 0) {
        // 0x40e357
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40e30a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40e33b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40e357
            return fclose(stream);
        }
    }
    // 0x40e30c
    if ((int32_t)function_40e370(a1, v1) == 0) {
        // 0x40e357
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40e318
    int32_t v3 = *v2; // 0x40e320
    int64_t result = fclose(stream); // 0x40e32e
    if (v3 != 0) {
        // 0x40e360
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40e330
    return result;
}
// Address range: 0x40e370 - 0x40e3b0
int64_t function_40e370(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40e38a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40e38a
        return fflush(stream);
    }
    // 0x40e398
    function_40e3b0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40e3b0 - 0x40e407
int64_t function_40e3b0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40e3b0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40e3ba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40e3eb
    int64_t result = -1; // 0x40e3f4
    if (v1 != -1) {
        // 0x40e3f6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40e402
    return result;
}
// Address range: 0x40e410 - 0x40e414
int64_t function_40e410(int64_t a1) {
    // 0x40e410
    int64_t result; // 0x40e410
    *(int32_t *)a1 = (int32_t)result | 32;
    return result;
}
// Address range: 0x40e420 - 0x40ff39
int64_t function_40e420(int64_t * a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x40e420
    int64_t v1; // bp-1416, 0x40e420
    int64_t v2; // bp-1656, 0x40e420
    if ((int32_t)function_410160(a3, &v1, &v2) < 0) {
        // 0x40ea90
        return 0;
    }
    int64_t v3 = &v2; // 0x40e42b
    int64_t v4; // bp-1384, 0x40e420
    int64_t v5; // bp-1640, 0x40e420
    int64_t v6; // 0x40e420
    if ((int32_t)function_40ff40(a4, &v2, v3) < 0) {
        if (v6 != (int64_t)&v4) {
            // 0x40f377
            free((int64_t *)v6);
        }
        if (v6 != (int64_t)&v5) {
            // 0x40f393
            free((int64_t *)v6);
        }
        // 0x40f398
        *__errno_location() = 22;
        // 0x40ea90
        return 0;
    }
    uint64_t v7 = v6 + 7; // 0x40e48b
    uint64_t v8 = v7 < 7 ? -1 : v7; // 0x40e493
    uint64_t v9 = v8 + v6; // 0x40e497
    int64_t v10; // 0x40e420
    char * v11; // 0x40e420
    int64_t v12; // 0x40e420
    if (v9 < v8) {
        // 0x40eb40
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40ea49;
    } else {
        if (v9 > 0xfffffffffffffff9) {
            // 0x40eb40
            v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
            goto lab_0x40ea49;
        } else {
            uint64_t size = v9 + 6; // 0x40e4a7
            if (size < 4000) {
                // 0x40e5f0
                v12 = 0;
                int64_t v13; // bp-1784, 0x40e420
                v11 = (char *)(15 - (v9 + 29 & -16) + (int64_t)&v13 & -16);
                goto lab_0x40e4e4;
            } else {
                if (size == -1) {
                    // 0x40eb40
                    v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                    goto lab_0x40ea49;
                } else {
                    int64_t * mem = malloc((int32_t)size); // 0x40e4c8
                    if (mem == NULL) {
                        // 0x40eb40
                        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
                        goto lab_0x40ea49;
                    } else {
                        // 0x40e4dd
                        v12 = (int64_t)mem;
                        v11 = (char *)mem;
                        goto lab_0x40e4e4;
                    }
                }
            }
        }
    }
  lab_0x40ea10_2:;
    // 0x40ea10
    int64_t v14; // 0x40e420
    int64_t v15 = v14;
    int64_t v16 = 0x100000000000000 * (int64_t)__errno_location() >> 56; // 0x40ea18
    int64_t v17 = v16; // 0x40ea26
    int64_t v18 = v16; // 0x40ea26
    int64_t v19 = v15; // 0x40ea26
    int64_t v20; // 0x40e420
    if (v15 != v20 == (v15 != 0)) {
        goto lab_0x40ec38;
    } else {
        goto lab_0x40ea31;
    }
  lab_0x40ea49:
    // 0x40ea49
    if (v6 != (int64_t)&v4) {
        // 0x40ea60
        free((int64_t *)v6);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40ea7c
        free((int64_t *)v6);
    }
    // 0x40ea81
    *(int32_t *)v10 = 12;
    // 0x40ea90
    return 0;
  lab_0x40e4e4:
    // 0x40e4e4
    v20 = (int64_t)a1;
    int64_t v21 = a1 == NULL ? 0 : v3;
    int64_t * v22 = (int64_t *)v6; // 0x40e51d
    int64_t v23 = *v22; // 0x40e51d
    int64_t v24 = 0; // 0x40e523
    int64_t v25 = v20; // 0x40e523
    int64_t v26 = v21; // 0x40e523
    int64_t v27 = 0; // 0x40e523
    int64_t v28; // 0x40e420
    int64_t v29; // 0x40e420
    int64_t v30; // 0x40e420
    int64_t v31; // 0x40e420
    int64_t v32; // 0x40e420
    int64_t v33; // 0x40e420
    int64_t v34; // 0x40e420
    if (v23 == a3) {
        goto lab_0x40eb33;
    } else {
        int64_t v35 = v23 - a3; // 0x40e529
        v28 = v35;
        v29 = v35;
        v31 = 0;
        v30 = v21;
        v32 = a3;
        v33 = v20;
        v34 = 0;
        goto lab_0x40e53b;
    }
  lab_0x40eb33:;
    int64_t v36 = v24; // 0x40eb36
    float80_t v37; // 0x40e420
    float80_t v38 = v37; // 0x40eb36
    float80_t v39; // 0x40e420
    float80_t v40 = v39; // 0x40eb36
    int64_t v41 = v25; // 0x40eb36
    int64_t v42 = v26; // 0x40eb36
    int64_t v43 = v27; // 0x40eb36
    int64_t v44; // 0x40e420
    int64_t v45 = v44; // 0x40eb36
    goto lab_0x40e698;
  lab_0x40e698:;
    int64_t v46 = v43;
    int64_t v47 = v42;
    int64_t v48 = v41;
    int64_t v49 = v36;
    int64_t v50; // 0x40e420
    int64_t v51; // 0x40e420
    int64_t v52; // 0x40e420
    int64_t v53; // 0x40e420
    int64_t v54; // 0x40e420
    int64_t v55; // 0x40e420
    int64_t v56; // 0x40e420
    int64_t v57; // 0x40e420
    int64_t dest_mem2; // 0x40e420
    int64_t dest_mem3; // 0x40e420
    int64_t v58; // 0x40e420
    float80_t v59; // 0x40e420
    float80_t v60; // 0x40e420
    float80_t v61; // 0x40e420
    float80_t v62; // 0x40e420
    float80_t v63; // 0x40e420
    uint64_t v64; // 0x40f7c6
    char * v65; // 0x40e6ac
    char v66; // 0x40e6ac
    int64_t v67; // 0x40e6d4
    uint32_t v68; // 0x40e6d8
    int64_t v69; // 0x40eab5
    char v70; // 0x40e420
    if (v1 == v49) {
        // 0x40f7c0
        v64 = v46 + 1;
        if (v46 == -1) {
            // 0x40ff2a
            v14 = v48;
            dest_mem2 = v48;
            v52 = -1;
            if (v47 == -1) {
                goto lab_0x40f822;
            } else {
                goto lab_0x40ea10_2;
            }
        } else {
            // 0x40f7d0
            dest_mem2 = v48;
            v52 = v47;
            if (v47 >= v64) {
                goto lab_0x40f822;
            } else {
                if (v47 != 0) {
                    // 0x40fded
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40ea10_2;
                    } else {
                        int64_t v71 = 2 * v47; // 0x40fdf3
                        v51 = v71;
                        if (v71 >= v64) {
                            goto lab_0x40f7ee;
                        } else {
                            goto lab_0x40fdff;
                        }
                    }
                } else {
                    // 0x40f7de
                    v51 = 12;
                    if (v64 < 13) {
                        goto lab_0x40f7ee;
                    } else {
                        goto lab_0x40fdff;
                    }
                }
            }
        }
    } else {
        // 0x40e6ac
        v55 = v45;
        v62 = v40;
        v59 = v38;
        v65 = (char *)(v55 + 72);
        v66 = *v65;
        int64_t v72 = *(int64_t *)(v55 + 80); // 0x40e6b1
        if (v66 == 37) {
            if (v72 != -1) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            if (v46 == -1) {
                // 0x40f280
                v14 = v48;
                dest_mem3 = v48;
                v54 = v47;
                v56 = -1;
                if (v47 != -1) {
                    goto lab_0x40ea10_2;
                } else {
                    goto lab_0x40eb12;
                }
            } else {
                // 0x40eac2
                v69 = v46 + 1;
                dest_mem3 = v48;
                v54 = v47;
                v56 = v69;
                if (v47 >= v69) {
                    goto lab_0x40eb12;
                } else {
                    if (v47 != 0) {
                        // 0x40f3b0
                        v14 = v48;
                        if (v47 < 0) {
                            goto lab_0x40ea10_2;
                        } else {
                            int64_t v73 = 2 * v47; // 0x40f3b6
                            v53 = v73;
                            if (v73 >= v69) {
                                goto lab_0x40eae0;
                            } else {
                                goto lab_0x40f3c2;
                            }
                        }
                    } else {
                        // 0x40ead0
                        v53 = 12;
                        if (v69 < 13) {
                            goto lab_0x40eae0;
                        } else {
                            goto lab_0x40f3c2;
                        }
                    }
                }
            }
        } else {
            if (v72 == -1) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            // 0x40e6c9
            v67 = 32 * v72 + v6;
            v68 = *(int32_t *)v67;
            g77 = v68 - 18;
            switch (v68) {
                case 18: {
                    // 0x40f040
                    *(char *)*(int64_t *)(v67 + 16) = (char)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40eb17;
                }
                case 19: {
                    // 0x40f030
                    *(int16_t *)*(int64_t *)(v67 + 16) = (int16_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40eb17;
                }
                case 20: {
                    // 0x40f018
                    *(int32_t *)*(int64_t *)(v67 + 16) = (int32_t)v46;
                    v60 = v59;
                    v63 = v62;
                    v58 = v48;
                    v50 = v47;
                    v57 = v46;
                    goto lab_0x40eb17;
                }
                case 21: {
                    goto lab_0x40ec00;
                }
                case 22: {
                    goto lab_0x40ec00;
                }
                default: {
                    // 0x40e6ea
                    v70 = v66 & -33;
                    if (v68 == 12 == (v70 > 71 != v70 != 65)) {
                        float80_t v74 = *(float80_t *)(v67 + 16); // 0x40eb90
                        v61 = v59;
                        if (v74 != v74 || 0.0L != 0.0L) {
                            goto lab_0x40ebad;
                        } else {
                            // 0x40eb97
                            v61 = v62;
                            if (v62 != v59) {
                                goto lab_0x40e720;
                            } else {
                                goto lab_0x40ebad;
                            }
                        }
                    } else {
                        goto lab_0x40e720;
                    }
                }
            }
        }
    }
  lab_0x40e53b:;
    int64_t v75 = v34;
    float80_t v76; // 0x40e420
    float80_t v77 = v76;
    float80_t v78; // 0x40e420
    float80_t v79 = v78;
    int64_t v80 = v33;
    int64_t v81 = v32;
    int64_t v82 = v30;
    int64_t v83; // 0x40e420
    int64_t v84 = v83;
    int64_t v85 = v31;
    int64_t v86 = v29;
    int64_t v87 = v28;
    int64_t v88 = v86; // 0x40e53e
    int64_t v89 = v85; // 0x40e53e
    int64_t v90 = v84; // 0x40e53e
    float80_t v91 = v79; // 0x40e53e
    float80_t v92 = v77; // 0x40e53e
    int64_t v93 = v75; // 0x40e53e
    int64_t v94 = v80; // 0x40e53e
    int64_t v95 = v81; // 0x40e53e
    int64_t v96 = v82; // 0x40e53e
    int64_t v97 = v87; // 0x40e53e
    int64_t v98; // 0x40e420
    int64_t v99; // 0x40e420
    int64_t v100; // 0x40e420
    int64_t v101; // 0x40e420
    int64_t v102; // 0x40e420
    if (v82 >= v87) {
        goto lab_0x40e689;
    } else {
        if (v82 != 0) {
            // 0x40e620
            v14 = v80;
            if (v82 < 0) {
                goto lab_0x40ea10_2;
            } else {
                int64_t v103 = 2 * v82; // 0x40e626
                v99 = v103;
                if (v103 >= v87) {
                    goto lab_0x40e63b;
                } else {
                    goto lab_0x40e62e;
                }
            }
        } else {
            if (v87 < 13) {
                int64_t v104 = v80 == v20; // 0x40e564
                v101 = v104;
                v98 = 12;
                v102 = v104;
                v100 = 12;
                if (v80 != 0) {
                    goto lab_0x40e64e;
                } else {
                    goto lab_0x40e570;
                }
            } else {
                goto lab_0x40e62e;
            }
        }
    }
  lab_0x40e689:
    // 0x40e689
    memcpy((int64_t *)(v94 + v89), (int64_t *)v95, (int32_t)v88);
    v36 = v93;
    v38 = v92;
    v40 = v91;
    v41 = v94;
    v42 = v96;
    v43 = v97;
    v45 = v90;
    goto lab_0x40e698;
  lab_0x40f822:
    // 0x40f822
    *(char *)(dest_mem2 + v46) = 0;
    int64_t result = dest_mem2; // 0x40f82a
    if (dest_mem2 != v20 && v52 > v64) {
        int64_t * mem2 = realloc((int64_t *)dest_mem2, (int32_t)v64); // 0x40f83b
        result = mem2 != NULL ? (int64_t)mem2 : dest_mem2;
    }
    // 0x40f847
    if (v12 != 0) {
        // 0x40f853
        free((int64_t *)v12);
    }
    if (v6 != (int64_t)&v4) {
        // 0x40f872
        free(v22);
    }
    if (v6 != (int64_t)&v5) {
        // 0x40f88e
        free((int64_t *)v6);
    }
    // 0x40f893
    *a2 = v46;
    // 0x40ea90
    return result;
  lab_0x40ec00:
    // 0x40ec00
    *(int64_t *)*(int64_t *)(v67 + 16) = v46;
    v60 = v59;
    v63 = v62;
    v58 = v48;
    v50 = v47;
    v57 = v46;
    goto lab_0x40eb17;
  lab_0x40e62e:
    // 0x40e62e
    v99 = v87;
    v14 = v80;
    if (v87 == -1) {
        goto lab_0x40ea10_2;
    } else {
        goto lab_0x40e63b;
    }
  lab_0x40ec38:
    // 0x40ec38
    free((int64_t *)v19);
    v17 = v18;
    goto lab_0x40ea31;
  lab_0x40ea31:
    if (v12 == 0) {
        // 0x40eb40
        v10 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
        goto lab_0x40ea49;
    } else {
        // 0x40ea41
        free((int64_t *)v12);
        v10 = v17;
        goto lab_0x40ea49;
    }
  lab_0x40eb12:
    // 0x40eb12
    *(char *)(dest_mem3 + v46) = 37;
    v60 = v59;
    v63 = v62;
    v58 = dest_mem3;
    v50 = v54;
    v57 = v56;
    goto lab_0x40eb17;
  lab_0x40e720:;
    int64_t v273 = (int64_t)v11; // 0x40e720
    uint32_t v274 = *(int32_t *)(v55 + 16); // 0x40e727
    int64_t v275 = v273 + 1; // 0x40e72b
    *v11 = 37;
    int64_t v276 = v275; // 0x40e734
    if (v274 % 2 != 0) {
        // 0x40e736
        *(char *)v275 = 39;
        v276 = v273 + 2;
    }
    int64_t v277 = v274; // 0x40e727
    int64_t v278 = v276;
    int64_t v279 = v278; // 0x40e747
    if ((v277 & 2) != 0) {
        // 0x40e749
        *(char *)v278 = 45;
        v279 = v278 + 1;
    }
    int64_t v280 = v279;
    int64_t v281 = v280; // 0x40e753
    if ((v277 & 4) != 0) {
        // 0x40e755
        *(char *)v280 = 43;
        v281 = v280 + 1;
    }
    int64_t v282 = v281;
    int64_t v283 = v282; // 0x40e75f
    if ((v277 & 8) != 0) {
        // 0x40e761
        *(char *)v282 = 32;
        v283 = v282 + 1;
    }
    int64_t v284 = v283;
    int64_t v285 = v284; // 0x40e76b
    if ((v277 & 16) != 0) {
        // 0x40e76d
        *(char *)v284 = 35;
        v285 = v284 + 1;
    }
    int64_t v286 = v285;
    int64_t v287 = v286; // 0x40e777
    if ((v277 & 64) != 0) {
        // 0x40e779
        *(char *)v286 = 73;
        v287 = v286 + 1;
    }
    int64_t v288 = v287;
    int64_t v289 = v288; // 0x40e783
    if ((v277 & 32) != 0) {
        // 0x40e785
        *(char *)v288 = 48;
        v289 = v288 + 1;
    }
    int64_t v290 = v289;
    int64_t v291 = *(int64_t *)(v55 + 24); // 0x40e78d
    int64_t v292 = *(int64_t *)(v55 + 32); // 0x40e791
    int64_t v293 = v290; // 0x40e798
    if (v292 != v291) {
        int64_t v294 = v292 - v291; // 0x40e7a7
        memcpy((int64_t *)v290, (int64_t *)v291, (int32_t)v294);
        v293 = (0x100000000000000 * v294 >> 56) + v290;
    }
    int64_t v295 = v293;
    int64_t v296 = *(int64_t *)(v55 + 48); // 0x40e7ca
    int64_t v297 = *(int64_t *)(v55 + 56); // 0x40e7ce
    int64_t v298 = v295; // 0x40e7d5
    if (v297 != v296) {
        int64_t v299 = v297 - v296; // 0x40e7e4
        memcpy((int64_t *)v295, (int64_t *)v296, (int32_t)v299);
        v298 = (0x100000000000000 * v299 >> 56) + v295;
    }
    uint64_t v166 = (int64_t)v68; // 0x40e6da
    int64_t v300 = v298;
    int64_t v158 = v300; // 0x40e810
    int64_t v272; // 0x40e420
    if (v68 < 17) {
        uint64_t v301 = v166 % 64; // 0x40e819
        int64_t v302 = 1 << v301;
        v272 = v300;
        if ((v302 & 0x14180) != 0) {
            goto lab_0x40ec18;
        } else {
            if (v301 == 12) {
                // 0x40f3d8
                *(char *)v300 = 76;
                v158 = v300 + 1;
                goto lab_0x40e840;
            } else {
                // 0x40e830
                v158 = v300;
                if ((v302 & 1536) != 0) {
                    // 0x40ec10
                    *(char *)v300 = 108;
                    v272 = v300 + 1;
                    goto lab_0x40ec18;
                } else {
                    goto lab_0x40e840;
                }
            }
        }
    } else {
        goto lab_0x40e840;
    }
  lab_0x40eb17:;
    int64_t v105 = v57;
    int64_t v106 = v50;
    int64_t v107 = v58;
    float80_t v108 = v63;
    float80_t v109 = v60;
    int64_t v110 = *(int64_t *)(v55 + 8); // 0x40eb17
    int64_t v111 = v55 + 88; // 0x40eb1b
    int64_t v112 = *(int64_t *)v111; // 0x40eb1f
    int64_t v113 = v49 + 1; // 0x40eb22
    v24 = v113;
    v37 = v109;
    v39 = v108;
    v25 = v107;
    v26 = v106;
    v44 = v111;
    v27 = v105;
    if (v112 != v110) {
        int64_t v114 = v112 - v110; // 0x40e529
        int64_t v115 = v114 + v105; // 0x40e52f
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
            // 0x40eb58
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
                goto lab_0x40ea10_2;
            } else {
                goto lab_0x40e689;
            }
        } else {
            goto lab_0x40e53b;
        }
    } else {
        goto lab_0x40eb33;
    }
  lab_0x40e63b:;
    int64_t v116 = v80 == v20; // 0x40e642
    v101 = v116;
    v98 = v99;
    v102 = v116;
    v100 = v99;
    if (v80 == 0) {
        goto lab_0x40e570;
    } else {
        goto lab_0x40e64e;
    }
  lab_0x40e64e:;
    int64_t v117 = v100;
    v101 = v102;
    v98 = v117;
    int64_t v118; // 0x40e420
    if (v102 != 0) {
        goto lab_0x40e570;
    } else {
        int64_t * mem3 = realloc((int64_t *)v80, (int32_t)v117); // 0x40e66a
        v118 = v80;
        if (mem3 == NULL) {
            goto lab_0x40ec25;
        } else {
            // 0x40e678
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
            goto lab_0x40e689;
        }
    }
  lab_0x40e570:;
    int64_t size2 = v98;
    int64_t * mem4 = malloc((int32_t)size2); // 0x40e587
    v14 = v80;
    if (mem4 == NULL) {
        goto lab_0x40ea10_2;
    } else {
        // 0x40e5ad
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
            int64_t * dest_mem = memcpy(mem4, (int64_t *)v80, (int32_t)v85); // 0x40e5d5
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
        goto lab_0x40e689;
    }
  lab_0x40f7ee:;
    int64_t size3 = v51;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem5 = malloc((int32_t)size3); // 0x40fdb4
        v14 = v48;
        if (mem5 == NULL) {
            goto lab_0x40ea10_2;
        } else {
            // 0x40fdc5
            dest_mem2 = (int64_t)mem5;
            v52 = size3;
            if (v48 == v20 && v46 != 0) {
                // 0x40fdda
                dest_mem2 = (int64_t)memcpy(mem5, (int64_t *)v48, (int32_t)v46);
                v52 = size3;
            }
            goto lab_0x40f822;
        }
    } else {
        int64_t * mem6 = realloc((int64_t *)v48, (int32_t)size3); // 0x40f811
        v118 = v48;
        if (mem6 == NULL) {
            goto lab_0x40ec25;
        } else {
            // 0x40f81f
            dest_mem2 = (int64_t)mem6;
            v52 = size3;
            goto lab_0x40f822;
        }
    }
  lab_0x40fdff:
    // 0x40fdff
    v14 = v48;
    v51 = v64;
    if (v64 == -1) {
        goto lab_0x40ea10_2;
    } else {
        goto lab_0x40f7ee;
    }
  lab_0x40ebad:;
    float80_t v119 = v61;
    int64_t v120 = *(int64_t *)(v55 + 24); // 0x40ebad
    int64_t v121 = *(int64_t *)(v55 + 32); // 0x40ebb1
    int64_t v122 = (int64_t)*(int32_t *)(v55 + 16); // 0x40ebb5
    int64_t v123 = 0; // 0x40ebbc
    int64_t v124 = v122; // 0x40ebbc
    if (v120 != v121) {
        int64_t v125 = *(int64_t *)(v55 + 40); // 0x40ebc2
        int64_t v126 = v120; // 0x40ebca
        if (v125 == -1) {
            uint64_t v127 = 0;
            int64_t v128 = v126 + 1; // 0x40fb51
            uint64_t v129 = (int64_t)*(char *)v126 - 48; // 0x40fb69
            int64_t v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1); // 0x40fb7b
            int64_t v131 = v128; // 0x40fb84
            int64_t v132 = v130; // 0x40fb84
            int64_t v133; // 0x40e420
            int64_t v134; // 0x40fb96
            if (v130 < v129) {
                // 0x40fb86
                if (v121 == v128) {
                    // break -> 0x40e9a0
                    break;
                }
                v133 = v128;
                v134 = v133 + 1;
                v131 = v134;
                v132 = -1;
                while (*(char *)v133 != 48) {
                    // 0x40e98b
                    v123 = -1;
                    v124 = v122;
                    if (v121 == v134) {
                        // break (via goto) -> 0x40e9a0
                        goto lab_0x40e9a0;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                }
            }
            // 0x40fb48
            v123 = v132;
            v124 = v122;
            v126 = v131;
            while (v121 != v131) {
                // 0x40fb51
                v127 = v132;
                v128 = v126 + 1;
                v129 = (int64_t)*(char *)v126 - 48;
                v130 = v129 + (v127 < 0x199999999999999a ? 10 * v127 : -1);
                v131 = v128;
                v132 = v130;
                if (v130 < v129) {
                    // 0x40fb86
                    v123 = -1;
                    v124 = v122;
                    v134 = v128;
                    if (v121 == v128) {
                        // break -> 0x40e9a0
                        break;
                    }
                    v133 = v134;
                    v134 = v133 + 1;
                    v131 = v134;
                    v132 = -1;
                    while (*(char *)v133 != 48) {
                        // 0x40e98b
                        v123 = -1;
                        v124 = v122;
                        if (v121 == v134) {
                            // break (via goto) -> 0x40e9a0
                            goto lab_0x40e9a0;
                        }
                        v133 = v134;
                        v134 = v133 + 1;
                        v131 = v134;
                        v132 = -1;
                    }
                }
                // 0x40fb48
                v123 = v132;
                v124 = v122;
                v126 = v131;
            }
        } else {
            int64_t v135 = 32 * v125 + v6; // 0x40ebd4
            if (*(int32_t *)v135 != 5) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            int32_t v136 = *(int32_t *)(v135 + 16); // 0x40ebe0
            int64_t v137 = v136; // 0x40ebe0
            v123 = v137;
            v124 = v122;
            if (v136 < 0) {
                // 0x40ebed
                v123 = -v137;
                v124 = v122 | 2;
            }
        }
    }
  lab_0x40e9a0:;
    int64_t v138 = v124;
    int64_t v139 = v123;
    int64_t v140 = *(int64_t *)(v55 + 48); // 0x40e9a0
    int64_t v141 = *(int64_t *)(v55 + 56); // 0x40e9a4
    int64_t v142; // 0x40e420
    int64_t v143; // 0x40e420
    int64_t v144; // 0x40e420
    if (v140 == v141) {
        goto lab_0x40f050;
    } else {
        int64_t v145 = *(int64_t *)(v55 + 64); // 0x40e9b1
        if (v145 == -1) {
            int64_t v146 = v140 + 1; // 0x40fbb4
            v142 = 12;
            v143 = 0;
            int64_t v147 = v146; // 0x40fbbd
            if (v141 == v146) {
                goto lab_0x40f06e;
            } else {
                uint64_t v148 = 0;
                int64_t v149 = v147 + 1; // 0x40fbe3
                uint64_t v150 = (int64_t)*(char *)v147 - 48; // 0x40fbea
                int64_t v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1); // 0x40fc03
                int64_t v152 = v151; // 0x40fc0c
                int64_t v153 = v149; // 0x40fc0c
                int64_t v154; // 0x40e420
                int64_t v155; // 0x40fc17
                if (v151 < v150) {
                    // 0x40fc0e
                    v14 = v48;
                    if (v141 == v149) {
                        goto lab_0x40ea10_2;
                    }
                    v154 = v149;
                    v155 = v154 + 1;
                    v152 = -1;
                    v153 = v155;
                    while (*(char *)v154 != 48) {
                        // 0x40fc2a
                        v14 = v48;
                        if (v141 == v155) {
                            goto lab_0x40ea10_2;
                        }
                        v154 = v155;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                    }
                }
                // 0x40fbd0
                v144 = v152;
                v147 = v153;
                while (v141 != v153) {
                    // 0x40fbd9
                    v148 = v152;
                    v149 = v147 + 1;
                    v150 = (int64_t)*(char *)v147 - 48;
                    v151 = v150 + (v148 < 0x199999999999999a ? 10 * v148 : -1);
                    v152 = v151;
                    v153 = v149;
                    if (v151 < v150) {
                        // 0x40fc0e
                        v14 = v48;
                        if (v141 == v149) {
                            goto lab_0x40ea10_2;
                        }
                        v154 = v149;
                        v155 = v154 + 1;
                        v152 = -1;
                        v153 = v155;
                        while (*(char *)v154 != 48) {
                            // 0x40fc2a
                            v14 = v48;
                            if (v141 == v155) {
                                goto lab_0x40ea10_2;
                            }
                            v154 = v155;
                            v155 = v154 + 1;
                            v152 = -1;
                            v153 = v155;
                        }
                    }
                    // 0x40fbd0
                    v144 = v152;
                    v147 = v153;
                }
                goto lab_0x40e9dc;
            }
        } else {
            int64_t v156 = 32 * v145 + v6; // 0x40e9c3
            if (*(int32_t *)v156 != 5) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            int32_t v157 = *(int32_t *)(v156 + 16); // 0x40e9d0
            v144 = v157;
            if (v157 < 0) {
                goto lab_0x40f050;
            } else {
                goto lab_0x40e9dc;
            }
        }
    }
  lab_0x40e840:
    // 0x40e840
    *(char *)(v158 + 1) = 0;
    *(char *)v158 = *v65;
    int64_t v159 = *(int64_t *)(v55 + 40); // 0x40e84d
    int64_t v160 = 0; // 0x40e855
    if (v159 != -1) {
        // 0x40e85b
        v160 = 4;
        if (*(int32_t *)(32 * v159 + v6) != 5) {
            // 0x40f14c
            abort();
            // UNREACHABLE
        }
    }
    int64_t v161 = *(int64_t *)(v55 + 64); // 0x40e87e
    if (v161 != -1) {
        int64_t v162 = 32 * v161 + v6; // 0x40e88c
        if (*(int32_t *)v162 != 5) {
            // 0x40f14c
            abort();
            // UNREACHABLE
        }
        int32_t v163 = *(int32_t *)(v162 + 16); // 0x40e89f
        int64_t v164; // bp-8, 0x40e420
        *(int32_t *)(v160 | (int64_t)&v164 - 1656) = v163;
    }
    int64_t size6; // 0x40e420
    uint64_t v165; // 0x40e8b6
    if (v46 > 0xfffffffffffffffd) {
        // 0x40f2e8
        v14 = v48;
        if (v47 == -1) {
            // 0x40e914
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        goto lab_0x40ea10_2;
    } else {
        // 0x40e8c0
        v165 = v46 + 2;
        if (v47 >= v165) {
            // 0x40e914
            *(char *)(v48 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
        if (v47 != 0) {
            // 0x40eff0
            v14 = v48;
            if (v47 < 0) {
                goto lab_0x40ea10_2;
            } else {
                int64_t v167 = 2 * v47; // 0x40eff6
                size6 = v167;
                if (v167 >= v165) {
                    goto lab_0x40e8e2;
                } else {
                    goto lab_0x40f002;
                }
            }
        } else {
            // 0x40e8d2
            size6 = 12;
            if (v165 < 13) {
                goto lab_0x40e8e2;
            } else {
                goto lab_0x40f002;
            }
        }
    }
  lab_0x40eae0:;
    int64_t size4 = v53;
    if (v48 == 0 || v48 == v20) {
        int64_t * mem7 = malloc((int32_t)size4); // 0x40f309
        v14 = v48;
        if (mem7 == NULL) {
            goto lab_0x40ea10_2;
        } else {
            // 0x40f321
            dest_mem3 = (int64_t)mem7;
            v54 = size4;
            v56 = v69;
            if (v48 == v20 && v46 != 0) {
                // 0x40f332
                dest_mem3 = (int64_t)memcpy(mem7, (int64_t *)v48, (int32_t)v46);
                v54 = size4;
                v56 = v69;
            }
            goto lab_0x40eb12;
        }
    } else {
        int64_t * mem8 = realloc((int64_t *)v48, (int32_t)size4); // 0x40eb01
        v118 = v48;
        if (mem8 == NULL) {
            goto lab_0x40ec25;
        } else {
            // 0x40eb0f
            dest_mem3 = (int64_t)mem8;
            v54 = size4;
            v56 = v69;
            goto lab_0x40eb12;
        }
    }
  lab_0x40f3c2:
    // 0x40f3c2
    v14 = v48;
    v53 = v69;
    if (v69 == -1) {
        goto lab_0x40ea10_2;
    } else {
        goto lab_0x40eae0;
    }
  lab_0x40f050:
    // 0x40f050
    v142 = v70 != 65 ? 18 : 12;
    v143 = v70 != 65 ? 6 : 0;
    goto lab_0x40f06e;
  lab_0x40ec18:
    // 0x40ec18
    *(char *)v272 = 108;
    v158 = v272 + 1;
    goto lab_0x40e840;
  lab_0x40ec25:
    // 0x40ec25
    v18 = 0x100000000000000 * (int64_t)__errno_location() >> 56;
    v19 = v118;
    goto lab_0x40ec38;
  lab_0x40f06e:;
    uint64_t v168 = v142;
    int64_t v169 = v139 >= v168 ? v139 : v168; // 0x40f074
    v14 = v48;
    int64_t v170; // 0x40e420
    int64_t v171; // 0x40e420
    int64_t * v172; // 0x40e420
    int64_t v173; // 0x40e420
    int64_t v174; // bp-760, 0x40e420
    uint64_t size5; // 0x40f078
    if (v169 == -1) {
        goto lab_0x40ea10_2;
    } else {
        // 0x40f089
        v173 = v143;
        size5 = v169 + 1;
        v172 = &v174;
        v170 = v139;
        v171 = v138;
        if (size5 < 701) {
            goto lab_0x40f0e9;
        } else {
            // 0x40f095
            v14 = v48;
            if (size5 == -1) {
                goto lab_0x40ea10_2;
            } else {
                int64_t * mem9 = malloc((int32_t)size5); // 0x40f0bd
                v14 = v48;
                v172 = mem9;
                v170 = 0x100000000 * v139 >> 32;
                v171 = v138 & 0xffffffff;
                if (mem9 == NULL) {
                    goto lab_0x40ea10_2;
                } else {
                    goto lab_0x40f0e9;
                }
            }
        }
    }
  lab_0x40e9dc:;
    int64_t v175 = v144;
    v142 = 12;
    v143 = 0;
    if (v175 == 0) {
        goto lab_0x40f06e;
    } else {
        // 0x40e9e5
        v14 = v48;
        v142 = v175 + 12;
        v143 = v175;
        if (v175 <= 0xfffffffffffffff3) {
            goto lab_0x40f06e;
        } else {
            goto lab_0x40ea10_2;
        }
    }
  lab_0x40e8e2:
    // 0x40e8e2
    if (v48 == 0 || v48 == v20) {
        int64_t * mem10 = malloc((int32_t)size6); // 0x40f2a9
        v14 = v48;
        if (mem10 != NULL) {
            int64_t dest_mem4 = (int64_t)mem10; // 0x40f2c4
            if (v48 == v20 && v46 != 0) {
                // 0x40f2d2
                dest_mem4 = (int64_t)memcpy(mem10, (int64_t *)v48, (int32_t)v46);
            }
            // 0x40e914
            *(char *)(dest_mem4 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    } else {
        int64_t * mem11 = realloc((int64_t *)v48, (int32_t)size6); // 0x40e903
        v14 = v48;
        if (mem11 != NULL) {
            // 0x40e914
            *(char *)((int64_t)mem11 + v46) = 0;
            *(int32_t *)(0x100000000000000 * (int64_t)__errno_location() >> 56) = 0;
            return v166 & 0xffffffff;
        }
    }
    goto lab_0x40ea10_2;
  lab_0x40f002:
    // 0x40f002
    size6 = v165;
    v14 = v48;
    if (v165 == -1) {
        goto lab_0x40ea10_2;
    } else {
        goto lab_0x40e8e2;
    }
  lab_0x40f0e9:;
    int64_t v176 = v171;
    int64_t v177 = v170;
    int64_t * v178 = v172;
    int64_t v179 = (int64_t)v178;
    int64_t v180; // 0x40e420
    int64_t v181; // 0x40e420
    int64_t v182; // 0x40e420
    int64_t v183; // 0x40e420
    int64_t v184; // 0x40e420
    int64_t v185; // 0x40e420
    int64_t v186; // 0x40e420
    int64_t v187; // 0x40e420
    int64_t v188; // 0x40e420
    int64_t v189; // 0x40e420
    int64_t v190; // 0x40e420
    int64_t v191; // 0x40e420
    int64_t v192; // 0x40e420
    int64_t v193; // 0x40e420
    float80_t v194; // 0x40e420
    float80_t v195; // 0x40e420
    if (v119 != v119 || 0.0L != 0.0L) {
        int64_t v196 = v179 + 3; // 0x40fc62
        char * v197 = (char *)(v179 + 2);
        if (v66 < 91) {
            // 0x40fc70
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
            // 0x40fd9d
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
        goto lab_0x40f5a9;
    } else {
        // 0x40f0f1
        int64_t v198; // 0x40e420
        float80_t v199; // 0x40e420
        if ((__asm_fxam(v119) & 512) == 0) {
            if ((v176 & 4) == 0) {
                // 0x40f8b1
                v199 = v119;
                v198 = v179;
                if ((v176 & 8) != 0) {
                    // 0x40f8be
                    *(char *)v178 = 32;
                    v199 = v119;
                    v198 = v179 + 1;
                }
            } else {
                // 0x40f71a
                *(char *)v178 = 43;
                v199 = v119;
                v198 = v179 + 1;
            }
        } else {
            // 0x40f11f
            *(char *)v178 = 45;
            v199 = -v119;
            v198 = v179 + 1;
        }
        // 0x40f128
        v187 = v198;
        if (v199 <= 0.0L) {
            if (v62 != 0.0L) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            char v200 = *v65 & -33;
            if (v200 != 70) {
                if (v200 != 69) {
                    if (v200 != 71) {
                        if (v200 != 65) {
                            // 0x40f14c
                            abort();
                            // UNREACHABLE
                        }
                        // 0x40fc96
                        *(char *)v187 = 48;
                        *(char *)(v187 + 2) = 48;
                        *(char *)(v187 + 1) = *v65 + 23;
                        if ((v176 & 16) != 0) {
                            // 0x40fc96
                            v181 = v187 + 3;
                            goto lab_0x40fe11;
                        } else {
                            int64_t v201 = v187 + 3;
                            v191 = v179;
                            v193 = v201;
                            v186 = v176;
                            v181 = v201;
                            if (v173 != 0) {
                                goto lab_0x40fe11;
                            } else {
                                goto lab_0x40fcd2;
                            }
                        }
                    } else {
                        // 0x40f9a3
                        *(char *)v187 = 48;
                        if ((v176 & 16) == 0) {
                            goto lab_0x40f597;
                        } else {
                            int64_t v202 = v187 + 2; // 0x40f9b1
                            if (v173 == 0) {
                                char v203 = *nl_langinfo(0x10000); // 0x40fefa
                                *(char *)(v187 + 1) = v203 == 0 ? 46 : v203;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v202;
                                v182 = v177;
                                v184 = 0x1000000 * (int32_t)v176 >> 24;
                                v188 = v187;
                            } else {
                                char * v204 = nl_langinfo(0x10000); // 0x40f9f8
                                int64_t v205 = 0x100000000000000 * v173 - 0x100000000000000;
                                char v206 = *v204; // 0x40fa0b
                                int64_t v207 = v176 & 0xffffffff; // 0x40fa0e
                                int64_t v208 = 0x100000000 * v202 >> 32; // 0x40fa1c
                                int64_t v209 = v187 + 1; // 0x40fa39
                                *(char *)v209 = v206 == 0 ? 46 : v206;
                                v194 = 0.0L;
                                v195 = v62;
                                v190 = v179;
                                v189 = v208;
                                v182 = v177;
                                v184 = v207;
                                v188 = v187;
                                if (v205 != 0) {
                                    int64_t v210 = v208 + 1; // 0x40fa4e
                                    *(char *)v208 = 48;
                                    while (v210 != v209 + v173) {
                                        int64_t v211 = v210;
                                        v210 = v211 + 1;
                                        *(char *)v211 = 48;
                                    }
                                    // 0x40fa5b
                                    v194 = 0.0L;
                                    v195 = v62;
                                    v190 = v179;
                                    v189 = v208 + (v205 >> 56);
                                    v182 = v177;
                                    v184 = v207;
                                    v188 = v187;
                                }
                            }
                            goto lab_0x40f5a9;
                        }
                    }
                } else {
                    // 0x40f748
                    *(char *)v187 = 48;
                    if ((v176 & 16) != 0) {
                        // 0x40f748
                        v180 = v187 + 1;
                        goto lab_0x40fcf7;
                    } else {
                        int64_t v212 = v187 + 1;
                        v192 = v212;
                        v183 = v177;
                        v185 = v176;
                        v180 = v212;
                        if (v173 != 0) {
                            goto lab_0x40fcf7;
                        } else {
                            goto lab_0x40f768;
                        }
                    }
                }
            } else {
                // 0x40f580
                *(char *)v187 = 48;
                if ((v176 & 16 || v173) == 0) {
                    goto lab_0x40f597;
                } else {
                    char * v213 = nl_langinfo(0x10000); // 0x40facc
                    int64_t v214 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40fadd
                    char v215 = *v213; // 0x40fae4
                    *(char *)(v187 + 1) = v215 == 0 ? 46 : v215;
                    v194 = 0.0L;
                    v195 = v62;
                    v190 = v179;
                    v189 = v214;
                    v182 = 0x100000000 * v177 >> 32;
                    v184 = v176 & 0xffffffff;
                    v188 = v187;
                    if (v173 != 0) {
                        int64_t v216 = v214 + 1; // 0x40fb20
                        *(char *)v214 = 48;
                        while (v216 != v187 + 2 + v173) {
                            int64_t v217 = v216;
                            v216 = v217 + 1;
                            *(char *)v217 = 48;
                        }
                        // 0x40fb2d
                        v194 = 0.0L;
                        v195 = v62;
                        v190 = v179;
                        v189 = v214 + v173;
                        int64_t v218; // 0x40faf5
                        v182 = v218;
                        int64_t v219; // 0x40fae7
                        v184 = v219;
                        v188 = v187;
                    }
                    goto lab_0x40f5a9;
                }
            }
        } else {
            float80_t v220; // 0x40e420
            if (v220 != 0.0L) {
                // 0x40f14c
                abort();
                // UNREACHABLE
            }
            int64_t v221 = v187 + 3; // 0x40f79b
            char * v222 = (char *)(v187 + 2);
            if (*v65 < 91) {
                // 0x40f7aa
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
                // 0x40fa83
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
            goto lab_0x40f5a9;
        }
    }
  lab_0x40f5a9:;
    uint64_t v223 = v182;
    int64_t v224 = v189;
    int64_t v225 = v190;
    float80_t v226 = v195;
    float80_t v227 = v194;
    int64_t v228 = v224 - v225; // 0x40f5ac
    int64_t v229 = v228; // 0x40f5b2
    if (v223 > v228) {
        int64_t v230 = v184;
        int64_t v231 = v223 - v228; // 0x40f5b4
        int64_t v232 = v231 + v224; // 0x40f5b7
        int64_t v233 = v232 - v225; // 0x40f5be
        if ((v230 & 2) != 0) {
            // 0x40fa63
            v229 = v233;
            int64_t v234 = v224; // 0x40fa66
            if (v231 != 0) {
                int64_t v235 = v234 + 1; // 0x40fa70
                *(char *)v234 = 32;
                v229 = v233;
                v234 = v235;
                while (v232 != v235) {
                    // 0x40fa70
                    v235 = v234 + 1;
                    *(char *)v234 = 32;
                    v229 = v233;
                    v234 = v235;
                }
            }
        } else {
            int64_t v236 = v188;
            if ((v230 & 32) == 0 || v236 == 0) {
                int64_t v237 = v225 + -1 - v224; // 0x40f8d5
                int64_t v238 = v224; // 0x40f8db
                if (v224 > v225) {
                    int64_t v239 = -1;
                    *(char *)(v239 + v232) = *(char *)(v239 + v224);
                    int64_t v240 = v239 - 1; // 0x40f8e9
                    v238 = v225;
                    while (v237 != v240) {
                        // 0x40f8e0
                        v239 = v240;
                        *(char *)(v239 + v232) = *(char *)(v239 + v224);
                        v240 = v239 - 1;
                        v238 = v225;
                    }
                }
                // 0x40f8f5
                v229 = v233;
                if (v231 != 0) {
                    int64_t v241 = v238 + 1; // 0x40f908
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
                int64_t v243 = v224; // 0x40f5e1
                if (v236 < v224) {
                    int64_t v244 = -1;
                    *(char *)(v244 + v232) = *(char *)(v244 + v224);
                    int64_t v245 = v244 - 1; // 0x40f601
                    v243 = v236;
                    while (v245 != v236 + -1 - v224) {
                        // 0x40f5f8
                        v244 = v245;
                        *(char *)(v244 + v232) = *(char *)(v244 + v224);
                        v245 = v244 - 1;
                        v243 = v236;
                    }
                }
                // 0x40f60a
                v229 = v233;
                if (v231 != 0) {
                    int64_t v246 = v243 + 1; // 0x40f618
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
        // 0x40f14c
        abort();
        // UNREACHABLE
    }
    uint64_t v249 = v248 + v46; // 0x40f648
    int64_t dest_mem5 = v48; // 0x40f655
    int64_t v250 = v248; // 0x40f655
    int64_t v251 = v47; // 0x40f655
    int64_t v252; // 0x40e420
    if (v47 - v46 > v248) {
        goto lab_0x40f6d0;
    } else {
        if (v249 < v46) {
            // 0x40f8a2
            v14 = v48;
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 != -1) {
                goto lab_0x40ea10_2;
            } else {
                goto lab_0x40f6d0;
            }
        } else {
            // 0x40f660
            dest_mem5 = v48;
            v250 = v248;
            v251 = v47;
            if (v47 >= v249) {
                goto lab_0x40f6d0;
            } else {
                if (v47 != 0) {
                    // 0x40fc38
                    v14 = v48;
                    if (v47 < 0) {
                        goto lab_0x40ea10_2;
                    } else {
                        int64_t v253 = 2 * v47; // 0x40fc3e
                        v252 = v253;
                        if (v253 >= v249) {
                            goto lab_0x40f67e;
                        } else {
                            goto lab_0x40fc4a;
                        }
                    }
                } else {
                    // 0x40f66e
                    v252 = 12;
                    if (v249 < 13) {
                        goto lab_0x40f67e;
                    } else {
                        goto lab_0x40fc4a;
                    }
                }
            }
        }
    }
  lab_0x40f6d0:;
    int64_t v254 = v251;
    int64_t v255 = dest_mem5;
    int64_t * v256 = (int64_t *)v225; // 0x40f6e1
    memcpy((int64_t *)(v255 + v46), v256, (int32_t)v250);
    v60 = v227;
    v63 = v226;
    v58 = v255;
    v50 = v254;
    v57 = v249;
    if (v225 != (int64_t)&v174) {
        // 0x40f6fd
        free(v256);
        v60 = v227;
        v63 = v226;
        v58 = v255;
        v50 = v254;
        v57 = v249;
    }
    goto lab_0x40eb17;
  lab_0x40f597:
    // 0x40f597
    v194 = 0.0L;
    v195 = v62;
    v190 = v179;
    v189 = v187 + 1;
    v182 = v177;
    v184 = v176;
    v188 = v187;
    goto lab_0x40f5a9;
  lab_0x40fcf7:;
    char * v257 = nl_langinfo(0x10000); // 0x40fd2a
    int64_t v258 = 0x100000000000000 * v187 + 0x200000000000000 >> 56; // 0x40fd3b
    char v259 = *v257; // 0x40fd42
    int64_t v260 = v176 & 0xffffffff; // 0x40fd45
    int64_t v261 = 0x100000000 * v177 >> 32; // 0x40fd53
    *(char *)v180 = v259 == 0 ? 46 : v259;
    v192 = v258;
    v183 = v261;
    v185 = v260;
    if (v173 != 0) {
        int64_t v262 = v258 + 1; // 0x40fd80
        *(char *)v258 = 48;
        while (v262 != v187 + 2 + v173) {
            int64_t v263 = v262;
            v262 = v263 + 1;
            *(char *)v263 = 48;
        }
        // 0x40fd8d
        v192 = v258 + v173;
        v183 = v261;
        v185 = v260;
    }
    goto lab_0x40f768;
  lab_0x40f768:
    // 0x40f768
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
    goto lab_0x40f5a9;
  lab_0x40f67e:
    // 0x40f67e
    if (v48 == 0 || v48 == v20) {
        // 0x40f91b
        int64_t size7; // 0x40e420
        int64_t * mem12 = malloc((int32_t)size7); // 0x40f932
        v14 = v48;
        if (mem12 == NULL) {
            goto lab_0x40ea10_2;
        } else {
            int64_t v264 = 0x100000000000000 * v248 >> 56; // 0x40f93e
            dest_mem5 = (int64_t)mem12;
            v250 = v264;
            v251 = size7;
            if (v48 == v20 && v46 != 0) {
                // 0x40f969
                dest_mem5 = (int64_t)memcpy(mem12, (int64_t *)v48, (int32_t)v46);
                v250 = v264;
                v251 = size7;
            }
            goto lab_0x40f6d0;
        }
    } else {
        int64_t * mem13 = realloc((int64_t *)v48, (int32_t)v252); // 0x40f6ad
        v14 = v48;
        if (mem13 == NULL) {
            goto lab_0x40ea10_2;
        } else {
            // 0x40f6bb
            dest_mem5 = (int64_t)mem13;
            v250 = 0x100000000000000 * v248 >> 56;
            v251 = v252;
            goto lab_0x40f6d0;
        }
    }
  lab_0x40fc4a:
    // 0x40fc4a
    v14 = v48;
    v252 = v249;
    if (v249 == -1) {
        goto lab_0x40ea10_2;
    } else {
        goto lab_0x40f67e;
    }
  lab_0x40fe11:;
    int64_t v265 = v187 + 4; // 0x40fe11
    char v266 = *nl_langinfo(0x10000); // 0x40fe5c
    int64_t v267 = v176 & 0xffffffff; // 0x40fe5f
    int64_t v268 = 0x100000000 * v179 >> 32; // 0x40fe66
    *(char *)v181 = v266 == 0 ? 46 : v266;
    v191 = v268;
    v193 = v265;
    v186 = v267;
    if (v173 != 0) {
        int64_t v269 = v265 + v173; // 0x40fe8d
        int64_t v270 = v265 + 1; // 0x40fe95
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
    goto lab_0x40fcd2;
  lab_0x40fcd2:
    // 0x40fcd2
    *(int16_t *)(v193 + 1) = 0x302b;
    *(char *)v193 = *v65 + 15;
    v194 = 0.0L;
    v195 = v62;
    v190 = v191;
    v189 = v193 + 3;
    v182 = v177;
    v184 = v186;
    v188 = 0x100000000000000 * v187 + 0x200000000000000 >> 56;
    goto lab_0x40f5a9;
}
// Address range: 0x40ff40 - 0x410159
int64_t function_40ff40(int64_t a1, int64_t * a2, int64_t a3) {
    int64_t v1 = a1;
    if (a2 == NULL) {
        // 0x40ffa3
        return 0;
    }
    uint64_t v2 = (int64_t)a2;
    int64_t v3 = 0; // 0x40ff58
    int64_t v4 = *(int64_t *)(v2 + 8);
    uint32_t v5 = *(int32_t *)v4; // 0x40ff69
    g78 = v5;
    int64_t v6; // 0x40ff40
    int64_t v7; // 0x40ff40
    int64_t v8; // 0x40ff40
    int64_t v9; // 0x40ff40
    int64_t v10; // 0x40ff40
    int64_t v11; // 0x40ff40
    int64_t v12; // 0x40ff40
    uint32_t v13; // 0x410060
    int64_t * v14; // 0x410090
    int64_t v15; // 0x410098
    uint32_t v16; // 0x4100e0
    uint32_t v17; // 0x4100b0
    int64_t * v18; // 0x410040
    int64_t v19; // 0x410040
    int64_t * v20; // 0x410050
    int64_t v21; // 0x410050
    int64_t * v22; // 0x410028
    int64_t v23; // 0x410028
    int64_t * v24; // 0x410010
    int64_t v25; // 0x410010
    int64_t * v26; // 0x410130
    uint32_t v27; // 0x40fff0
    int64_t v28; // 0x410130
    int64_t * v29; // 0x410120
    int64_t v30; // 0x410120
    uint32_t v31; // 0x40ffd0
    int64_t * v32; // 0x410148
    int64_t v33; // 0x410148
    int64_t v34; // 0x4100f3
    uint32_t v35; // 0x40ffb0
    int64_t v36; // 0x4100c7
    uint32_t v37; // 0x40ff78
    int32_t * v38; // 0x410060
    switch (v5) {
        case 1: {
        }
        case 2: {
            // 0x40fff0
            v27 = *(int32_t *)&v1;
            if (v27 < 48) {
                // 0x40fff7
                *(int32_t *)v1 = v27 + 8;
                v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
            } else {
                // 0x410040
                v18 = (int64_t *)(v1 + 8);
                v19 = *v18;
                *v18 = v19 + 8;
                v9 = v19;
            }
            // 0x410003
            *(char *)(v4 + 16) = (char)*(int32_t *)v9;
            // break -> 0x40ff96
            break;
        }
        case 3: {
        }
        case 4: {
            // 0x40ffd0
            v31 = *(int32_t *)&v1;
            if (v31 < 48) {
                // 0x40ffd7
                *(int32_t *)v1 = v31 + 8;
                v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
            } else {
                // 0x410050
                v20 = (int64_t *)(v1 + 8);
                v21 = *v20;
                *v20 = v21 + 8;
                v8 = v21;
            }
            // 0x40ffe3
            *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
            // break -> 0x40ff96
            break;
        }
        case 5: {
        }
        case 6: {
        }
        case 13: {
        }
        case 14: {
            // 0x40ffb0
            v35 = *(int32_t *)&v1;
            if (v35 < 48) {
                // 0x40ffb7
                *(int32_t *)v1 = v35 + 8;
                v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
            } else {
                // 0x410028
                v22 = (int64_t *)(v1 + 8);
                v23 = *v22;
                *v22 = v23 + 8;
                v7 = v23;
            }
            // 0x40ffc3
            *(int32_t *)(v4 + 16) = *(int32_t *)v7;
            // break -> 0x40ff96
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
            // 0x40ff78
            v37 = *(int32_t *)&v1;
            if (v37 < 48) {
                // 0x40ff83
                *(int32_t *)v1 = v37 + 8;
                v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
            } else {
                // 0x410010
                v24 = (int64_t *)(v1 + 8);
                v25 = *v24;
                *v24 = v25 + 8;
                v6 = v25;
            }
            // 0x40ff8f
            *(int64_t *)(v4 + 16) = *(int64_t *)v6;
            // break -> 0x40ff96
            break;
        }
        case 11: {
            // 0x410060
            v38 = (int32_t *)(v1 + 4);
            v13 = *v38;
            if (v13 < 176) {
                // 0x41006f
                *v38 = v13 + 16;
                v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
            } else {
                // 0x410130
                v26 = (int64_t *)(v1 + 8);
                v28 = *v26;
                *v26 = v28 + 8;
                v10 = v28;
            }
            // 0x41007c
            *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
            // break -> 0x40ff96
            break;
        }
        case 12: {
            // 0x410090
            v14 = (int64_t *)(v1 + 8);
            v15 = *v14 + 15 & -16;
            *v14 = v15 + 16;
            *(float80_t *)(v4 + 16) = *(float80_t *)v15;
            // break -> 0x40ff96
            break;
        }
        case 15: {
            // 0x4100e0
            v16 = *(int32_t *)&v1;
            if (v16 < 48) {
                // 0x4100e7
                *(int32_t *)v1 = v16 + 8;
                v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
            } else {
                // 0x410120
                v29 = (int64_t *)(v1 + 8);
                v30 = *v29;
                *v29 = v30 + 8;
                v12 = v30;
            }
            // 0x4100f3
            v34 = *(int64_t *)v12;
            *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
            // break -> 0x40ff96
            break;
        }
        case 16: {
            // 0x4100b0
            v17 = *(int32_t *)&v1;
            if (v17 < 48) {
                // 0x4100bb
                *(int32_t *)v1 = v17 + 8;
                v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
            } else {
                // 0x410148
                v32 = (int64_t *)(v1 + 8);
                v33 = *v32;
                *v32 = v33 + 8;
                v11 = v33;
            }
            // 0x4100c7
            v36 = *(int64_t *)v11;
            *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
            // break -> 0x40ff96
            break;
        }
        default: {
            // 0x40ffa3
            return 0xffffffff;
        }
    }
    // 0x40ff96
    v3++;
    int64_t v39 = v4 + 32; // 0x40ffa1
    while (v3 < v2) {
        // 0x40ff60
        v4 = v39;
        v5 = *(int32_t *)v4;
        g78 = v5;
        switch (v5) {
            case 1: {
            }
            case 2: {
                // 0x40fff0
                v27 = *(int32_t *)&v1;
                if (v27 < 48) {
                    // 0x40fff7
                    *(int32_t *)v1 = v27 + 8;
                    v9 = *(int64_t *)(v1 + 16) + (int64_t)v27;
                } else {
                    // 0x410040
                    v18 = (int64_t *)(v1 + 8);
                    v19 = *v18;
                    *v18 = v19 + 8;
                    v9 = v19;
                }
                // 0x410003
                *(char *)(v4 + 16) = (char)*(int32_t *)v9;
                // break -> 0x40ff96
                break;
            }
            case 3: {
            }
            case 4: {
                // 0x40ffd0
                v31 = *(int32_t *)&v1;
                if (v31 < 48) {
                    // 0x40ffd7
                    *(int32_t *)v1 = v31 + 8;
                    v8 = *(int64_t *)(v1 + 16) + (int64_t)v31;
                } else {
                    // 0x410050
                    v20 = (int64_t *)(v1 + 8);
                    v21 = *v20;
                    *v20 = v21 + 8;
                    v8 = v21;
                }
                // 0x40ffe3
                *(int16_t *)(v4 + 16) = (int16_t)*(int32_t *)v8;
                // break -> 0x40ff96
                break;
            }
            case 5: {
            }
            case 6: {
            }
            case 13: {
            }
            case 14: {
                // 0x40ffb0
                v35 = *(int32_t *)&v1;
                if (v35 < 48) {
                    // 0x40ffb7
                    *(int32_t *)v1 = v35 + 8;
                    v7 = *(int64_t *)(v1 + 16) + (int64_t)v35;
                } else {
                    // 0x410028
                    v22 = (int64_t *)(v1 + 8);
                    v23 = *v22;
                    *v22 = v23 + 8;
                    v7 = v23;
                }
                // 0x40ffc3
                *(int32_t *)(v4 + 16) = *(int32_t *)v7;
                // break -> 0x40ff96
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
                // 0x40ff78
                v37 = *(int32_t *)&v1;
                if (v37 < 48) {
                    // 0x40ff83
                    *(int32_t *)v1 = v37 + 8;
                    v6 = *(int64_t *)(v1 + 16) + (int64_t)v37;
                } else {
                    // 0x410010
                    v24 = (int64_t *)(v1 + 8);
                    v25 = *v24;
                    *v24 = v25 + 8;
                    v6 = v25;
                }
                // 0x40ff8f
                *(int64_t *)(v4 + 16) = *(int64_t *)v6;
                // break -> 0x40ff96
                break;
            }
            case 11: {
                // 0x410060
                v38 = (int32_t *)(v1 + 4);
                v13 = *v38;
                if (v13 < 176) {
                    // 0x41006f
                    *v38 = v13 + 16;
                    v10 = *(int64_t *)(v1 + 16) + (int64_t)v13;
                } else {
                    // 0x410130
                    v26 = (int64_t *)(v1 + 8);
                    v28 = *v26;
                    *v26 = v28 + 8;
                    v10 = v28;
                }
                // 0x41007c
                *(int64_t *)(v4 + 16) = __asm_movsd_3(__asm_movsd(*(int64_t *)v10));
                // break -> 0x40ff96
                break;
            }
            case 12: {
                // 0x410090
                v14 = (int64_t *)(v1 + 8);
                v15 = *v14 + 15 & -16;
                *v14 = v15 + 16;
                *(float80_t *)(v4 + 16) = *(float80_t *)v15;
                // break -> 0x40ff96
                break;
            }
            case 15: {
                // 0x4100e0
                v16 = *(int32_t *)&v1;
                if (v16 < 48) {
                    // 0x4100e7
                    *(int32_t *)v1 = v16 + 8;
                    v12 = *(int64_t *)(v1 + 16) + (int64_t)v16;
                } else {
                    // 0x410120
                    v29 = (int64_t *)(v1 + 8);
                    v30 = *v29;
                    *v29 = v30 + 8;
                    v12 = v30;
                }
                // 0x4100f3
                v34 = *(int64_t *)v12;
                *(int64_t *)(v4 + 16) = v34 == 0 ? (int64_t)"(NULL)" : v34;
                // break -> 0x40ff96
                break;
            }
            case 16: {
                // 0x4100b0
                v17 = *(int32_t *)&v1;
                if (v17 < 48) {
                    // 0x4100bb
                    *(int32_t *)v1 = v17 + 8;
                    v11 = *(int64_t *)(v1 + 16) + (int64_t)v17;
                } else {
                    // 0x410148
                    v32 = (int64_t *)(v1 + 8);
                    v33 = *v32;
                    *v32 = v33 + 8;
                    v11 = v33;
                }
                // 0x4100c7
                v36 = *(int64_t *)v11;
                *(int64_t *)(v4 + 16) = v36 == 0 ? (int64_t)L"(NULL)" : v36;
                // break -> 0x40ff96
                break;
            }
            default: {
                // 0x40ffa3
                return 0xffffffff;
            }
        }
        // 0x40ff96
        v3++;
        v39 = v4 + 32;
    }
    // 0x40ffa3
    return 0;
}
// Address range: 0x410160 - 0x410e69
int64_t function_410160(int64_t a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)a3;
    int64_t v2 = (int64_t)a2;
    int64_t v3 = v2 + 32; // 0x410162
    int64_t v4 = v1 + 16; // 0x410166
    *a2 = 0;
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x410199
    *v5 = v3;
    *a3 = 0;
    int64_t * v6 = (int64_t *)(v1 + 8); // 0x4101ae
    *v6 = v4;
    char v7 = *(char *)a1; // 0x4101db
    int32_t v8 = 0; // 0x4101e0
    int64_t v9 = 0; // 0x4101e0
    int64_t v10 = v3; // 0x4101e0
    int64_t v11 = a1; // 0x4101e0
    int64_t v12 = 0; // 0x4101e0
    char v13; // 0x410160
    int64_t v14; // 0x410160
    int64_t v15; // 0x410160
    int64_t v16; // 0x410160
    int64_t v17; // 0x410160
    int64_t v18; // 0x410160
    int64_t v19; // 0x410160
    int64_t v20; // 0x410160
    int64_t v21; // 0x410160
    int64_t v22; // 0x410160
    int64_t v23; // 0x410160
    int64_t v24; // 0x410160
    int64_t v25; // 0x410160
    int64_t v26; // 0x410160
    int64_t v27; // 0x410160
    int64_t v28; // 0x410160
    int64_t v29; // 0x410160
    int64_t v30; // 0x410160
    int32_t v31; // 0x410160
    int64_t v32; // 0x410160
    int64_t v33; // 0x4101d0
    int64_t v34; // 0x410220
    int64_t * v35; // 0x410243
    int64_t v36; // 0x4102a6
    if (v7 != 0) {
        // 0x4101d0
        v13 = v7;
        v14 = 0;
        int64_t v37 = 7; // 0x410160
        int64_t v38 = 7; // 0x410160
        v25 = a1;
        v21 = v3;
        int64_t v39 = 0; // 0x410160
        v32 = 0;
        v31 = 0;
        while (true) {
          lab_0x4101d0:
            // 0x4101d0
            v22 = v21;
            int64_t v40 = v25;
            v15 = v14;
            v33 = v40 + 1;
            if (v13 == 37) {
                // 0x410213
                v34 = v22 + 88 * v15;
                *(int64_t *)v34 = v40;
                int32_t * v41 = (int32_t *)(v34 + 16); // 0x410228
                *v41 = 0;
                *(int64_t *)(v34 + 24) = 0;
                *(int64_t *)(v34 + 32) = 0;
                *(int64_t *)(v34 + 40) = -1;
                *(int64_t *)(v34 + 48) = 0;
                *(int64_t *)(v34 + 56) = 0;
                *(int64_t *)(v34 + 64) = -1;
                *(int64_t *)(v34 + 80) = -1;
                unsigned char v42 = *(char *)v33; // 0x410264
                int64_t v43 = v42; // 0x410264
                int64_t v44 = v43; // 0x41026d
                int64_t v45 = v33; // 0x41026d
                if (v42 < 58) {
                    int64_t v46 = v33 + 1; // 0x410600
                    char v47 = *(char *)v46; // 0x410604
                    int64_t v48 = v46; // 0x41060d
                    while (v47 < 58) {
                        // 0x410600
                        v46 = v48 + 1;
                        v47 = *(char *)v46;
                        v48 = v46;
                    }
                    // 0x41060f
                    v44 = v43;
                    v45 = v33;
                    if (v47 == 36) {
                        uint64_t v49 = 0;
                        uint64_t v50 = (int64_t)((0x1000000 * (int32_t)v43 >> 24) - 48);
                        int64_t v51 = v33 + 1; // 0x410ca5
                        char v52 = *(char *)v51; // 0x410ca5
                        int64_t v53 = (v49 < 0x199999999999999a ? 10 * v49 : -1) + v50; // 0x410ca9
                        int64_t v54 = v33; // 0x410cbd
                        int64_t v55 = v51; // 0x410cbd
                        char v56 = v52; // 0x410cbd
                        int64_t v57 = v53; // 0x410cbd
                        bool v58 = v52 < 58; // 0x410cbd
                        bool v59 = v52 < 58; // 0x410cbd
                        char v60 = v52; // 0x410cbd
                        int64_t v61 = v51; // 0x410cbd
                        int64_t v62; // 0x410cd2
                        int64_t v63; // 0x410ca5
                        char v64; // 0x410ca5
                        int64_t v65; // 0x410ca9
                        if (v53 < v50) {
                            if (!v59) {
                                goto lab_0x410928_9;
                            }
                            // 0x410ca3
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
                                // 0x410cbf
                                if (v64 >= 58) {
                                    goto lab_0x410928_9;
                                }
                                // 0x410ca3
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
                        int64_t v67 = v55; // 0x410c78
                        while (v58) {
                            // 0x410c7e
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
                                    goto lab_0x410928_9;
                                }
                                // 0x410ca3
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
                                    // 0x410cbf
                                    if (v64 >= 58) {
                                        goto lab_0x410928_9;
                                    }
                                    // 0x410ca3
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
                            // 0x410c74
                            v66 = v57;
                            v67 = v55;
                        }
                        // 0x410d7d
                        if (v66 >= 0xffffffffffffffff) {
                            goto lab_0x410928_9;
                        }
                        int64_t v68 = v54 + 2; // 0x410d8e
                        v44 = (int64_t)*(char *)v68;
                        v45 = v68;
                    }
                }
                int64_t v69 = v44; // 0x410160
                v36 = v45;
                char v70; // 0x410160
                while (true) {
                    // 0x4102a6
                    v36++;
                    v70 = v69;
                    if (v70 != 39) {
                        switch (v70) {
                            case 45: {
                                // 0x4102c0
                                *v41 = *v41 | 2;
                                // break -> 0x4102a0
                                break;
                            }
                            case 43: {
                                // 0x4102d0
                                *v41 = *v41 | 4;
                                // break -> 0x4102a0
                                break;
                            }
                            case 32: {
                                // 0x4102e0
                                *v41 = *v41 | 8;
                                // break -> 0x4102a0
                                break;
                            }
                            case 35: {
                                // 0x4102f0
                                *v41 = *v41 | 16;
                                // break -> 0x4102a0
                                break;
                            }
                            case 48: {
                                // 0x410300
                                *v41 = *v41 | 32;
                                // break -> 0x4102a0
                                break;
                            }
                            default: {
                                if (v70 != 73) {
                                    // break -> 0x410308
                                    break;
                                }
                                // 0x410296
                                *v41 = *v41 | 64;
                                // break -> 0x4102a0
                                break;
                            }
                        }
                    } else {
                        // 0x4102af
                        *v41 = *v41 | 1;
                    }
                    // 0x4102a0
                    v69 = (int64_t)*(char *)v36;
                }
                int64_t v71; // 0x410160
                int64_t * v72; // 0x410231
                int64_t * v73; // 0x41023a
                if (v70 == 42) {
                    // 0x41037d
                    *v72 = v71;
                    *v73 = v36;
                    char v74 = *(char *)v36; // 0x41039d
                    int64_t v75 = v74; // 0x41039d
                    int64_t v76 = v75 + 0xffffffd0; // 0x4103a1
                    v26 = v76 & 0xffffffff;
                    int64_t v77 = v36; // 0x4103a7
                    if ((char)v76 < 10) {
                        int64_t v78 = v77;
                        int64_t v79 = v78 + 1; // 0x41077d
                        char v80 = *(char *)v79; // 0x410781
                        v77 = v79;
                        while (v80 < 58) {
                            // 0x41077d
                            v78 = v77;
                            v79 = v78 + 1;
                            v80 = *(char *)v79;
                            v77 = v79;
                        }
                        // 0x41078d
                        v26 = v79;
                        int64_t v81 = v75; // 0x410791
                        int64_t v82 = v36; // 0x410791
                        int64_t v83 = 0; // 0x410791
                        if (v80 != 36) {
                            goto lab_0x4103ad;
                        } else {
                            uint64_t v84 = v83;
                            int64_t v85 = v82;
                            int64_t v86 = v81;
                            int64_t v87 = v84 < 0x199999999999999a ? 10 * v84 : -1;
                            int64_t v88 = v86; // 0x4107c2
                            int64_t v89 = v85; // 0x4107c2
                            int64_t v90 = v87; // 0x4107c2
                            uint64_t v91 = v90;
                            int64_t v92 = v89;
                            int64_t v93 = v88;
                            int64_t v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91; // 0x4107c7
                            int64_t v95 = v92 + 1; // 0x4107ca
                            char v96 = *(char *)v95; // 0x4107ca
                            int64_t v97 = v96; // 0x4107ca
                            while (v94 < v91) {
                                // 0x4107e1
                                v88 = v97;
                                v89 = v95;
                                v90 = -1;
                                if (v96 >= 58) {
                                    goto lab_0x410928_9;
                                }
                                v91 = v90;
                                v92 = v89;
                                v93 = v88;
                                v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                v95 = v92 + 1;
                                v96 = *(char *)v95;
                                v97 = v96;
                            }
                            // 0x41079b
                            v81 = v97;
                            v82 = v95;
                            v83 = v94;
                            while (v96 < 58) {
                                // 0x4107a4
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
                                    // 0x4107e1
                                    v88 = v97;
                                    v89 = v95;
                                    v90 = -1;
                                    if (v96 >= 58) {
                                        goto lab_0x410928_9;
                                    }
                                    v91 = v90;
                                    v92 = v89;
                                    v93 = v88;
                                    v94 = (0x100000000 * v93 - 0x3000000000 >> 32) + v91;
                                    v95 = v92 + 1;
                                    v96 = *(char *)v95;
                                    v97 = v96;
                                }
                                // 0x41079b
                                v81 = v97;
                                v82 = v95;
                                v83 = v94;
                            }
                            int64_t v98 = v94 - 1; // 0x410e1b
                            if (v98 >= 0xfffffffffffffffe) {
                                goto lab_0x410928_9;
                            }
                            // 0x410e29
                            *v35 = v98;
                            v30 = v28;
                            v24 = v92 + 2;
                            v27 = v94;
                            v20 = v98;
                            goto lab_0x4103bc;
                        }
                    } else {
                        goto lab_0x4103ad;
                    }
                } else {
                    // 0x41030d
                    v29 = v28;
                    v23 = v36;
                    int64_t v99; // 0x410160
                    v19 = v99;
                    v18 = v71;
                    v17 = v16;
                    if (v70 < 58) {
                        // 0x410a2b
                        *v72 = v71;
                        char * v100 = (char *)v71;
                        char v101 = *v100; // 0x410a30
                        int64_t v102 = v71; // 0x410a39
                        char * v103 = v100; // 0x410a39
                        int64_t v104 = v36; // 0x410a39
                        int64_t v105 = v71; // 0x410a39
                        if (v101 < 58) {
                            int64_t v106 = v102;
                            int64_t v107 = v106 + 1; // 0x410a43
                            char * v108 = (char *)v107;
                            char v109 = *v108; // 0x410a43
                            v102 = v107;
                            while (v109 < 58) {
                                // 0x410a43
                                v106 = v102;
                                v107 = v106 + 1;
                                v108 = (char *)v107;
                                v109 = *v108;
                                v102 = v107;
                            }
                            // 0x410a52
                            v103 = v108;
                            v104 = v106 + 2;
                            v105 = v107;
                        }
                        int64_t v110 = v105;
                        int64_t v111 = v104;
                        char * v112 = v103;
                        *v73 = v110;
                        unsigned char v113 = *v112; // 0x410a75
                        v29 = v28;
                        v23 = v111;
                        v19 = v113;
                        v18 = v110;
                        v17 = v16;
                    }
                    goto lab_0x410318;
                }
            } else {
                goto lab_0x4101d8;
            }
        }
    }
  lab_0x4101e2:
    // 0x4101e2
    *(int64_t *)(88 * v12 + v10) = v11;
    *(int64_t *)(v2 + 16) = v9;
    *(int64_t *)(v2 + 24) = (int64_t)v8;
    // 0x410204
    return 0;
  lab_0x410928_9:;
    int64_t v114 = *v6;
    if (v4 != v114) {
        // 0x410933
        free((int64_t *)v114);
    }
    int64_t v115 = *v5; // 0x410945
    if (v3 != v115) {
        // 0x410950
        free((int64_t *)v115);
    }
    // 0x410955
    *__errno_location() = 22;
    // 0x410204
    return 0xffffffff;
  lab_0x410b00_5:;
    // 0x410b00
    int64_t v116; // 0x410160
    int64_t v117 = v116;
    int64_t v118 = v117; // 0x410b05
    int64_t v119; // 0x410160
    if (v4 == v117) {
        goto lab_0x410b19_3;
    } else {
        // 0x410b07
        v119 = v118;
        free((int64_t *)v119);
        goto lab_0x410b19_3;
    }
  lab_0x410b19_3:;
    int64_t v120 = *v5; // 0x410b19
    int32_t * v121; // 0x410b29
    if (v3 == v120) {
        // 0x410b29
        v121 = __errno_location();
        *v121 = 12;
        return 0xffffffff;
    }
    // 0x410b24
    free((int64_t *)v120);
    // 0x410b29
    v121 = __errno_location();
    *v121 = 12;
    return 0xffffffff;
  lab_0x4101d8:;
    int64_t v122 = v32;
    int32_t v123 = v31;
    char v124 = *(char *)v33; // 0x4101db
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
        // break -> 0x4101e2
        goto lab_0x4101e2;
    }
    goto lab_0x4101d0;
  lab_0x4103ad:;
    int64_t v125 = v26;
    int64_t v126 = *v35; // 0x4103ad
    v30 = v28;
    v24 = v36;
    v27 = v125;
    v20 = v126;
    if (v126 == -1) {
        // 0x410753
        *v35 = v28;
        if (v28 == -1) {
            goto lab_0x410928_9;
        }
        // 0x41076b
        v30 = v28 + 1;
        v24 = v36;
        v27 = v125;
        v20 = v28;
    }
    goto lab_0x4103bc;
  lab_0x410318:;
    int64_t v337 = v17;
    int64_t v338 = v18;
    int64_t v339 = v19;
    int64_t v340 = v29;
    int64_t v149 = v340; // 0x41031b
    int64_t v147 = v339; // 0x41031b
    int64_t v145 = v338; // 0x41031b
    int64_t v143 = v337; // 0x41031b
    int64_t v186; // 0x410160
    int64_t v190; // 0x410160
    int64_t v189; // 0x410160
    int64_t v188; // 0x410160
    int64_t v187; // 0x410160
    if ((char)v339 == 46) {
        int64_t v341 = v23;
        v186 = v338 + 1;
        v187 = v340;
        v188 = v341;
        v189 = v338;
        v190 = v337;
        goto lab_0x410420;
    } else {
        goto lab_0x410321;
    }
  lab_0x4103bc:;
    uint64_t v127 = v20;
    int64_t v128 = v27;
    int64_t v129 = v24;
    int64_t v130 = v30;
    int64_t v131 = *v6; // 0x4103bc
    int64_t v132 = v128; // 0x4103c3
    int64_t v133 = v16; // 0x4103c3
    int64_t v134 = v131; // 0x4103c3
    int64_t v135; // 0x410160
    int64_t v136; // 0x410160
    int64_t v137; // 0x410160
    int64_t v138; // 0x41066f
    if (v16 > v127) {
        goto lab_0x4103cc;
    } else {
        uint64_t v139 = 2 * v16; // 0x410665
        v138 = v139 > v127 ? v139 : v127 + 1;
        v116 = v131;
        if (v138 >= 0x800000000000000) {
            goto lab_0x410b00_5;
        }
        int64_t size = 32 * v138; // 0x41068e
        if (v4 == v131) {
            int64_t * mem = malloc((int32_t)size); // 0x410bec
            if (mem == NULL) {
                goto lab_0x410b19_3;
            }
            // 0x410c0e
            v135 = (int64_t)mem;
            goto lab_0x410c19;
        } else {
            int64_t * mem2 = realloc((int64_t *)v131, (int32_t)size); // 0x4106af
            int64_t v140 = *v6; // 0x4106b4
            v116 = v140;
            if (mem2 == NULL) {
                goto lab_0x410b00_5;
            }
            int64_t v141 = (int64_t)mem2; // 0x4106af
            v137 = v128;
            v136 = v141;
            v135 = v141;
            if (v4 == v140) {
                goto lab_0x410c19;
            } else {
                goto lab_0x4106ed;
            }
        }
    }
  lab_0x410321:;
    int64_t v142 = v143;
    int64_t v144 = v145;
    int64_t v146 = v147;
    int64_t v148 = v149;
    int64_t v150 = 0; // 0x410328
    int64_t v151 = v146; // 0x410328
    int64_t v152 = v144; // 0x410328
    uint64_t v153; // 0x410160
    int64_t v154; // 0x410160
    int64_t v155; // 0x410367
    while (true) {
        int64_t v156 = v152;
        v154 = v151;
        v153 = v150;
        v155 = v156 + 1;
        char v157 = v154; // 0x41036b
        int64_t v158; // 0x410160
        if (v157 != 104) {
            switch (v157) {
                case 76: {
                    // 0x4104d0
                    v158 = v153 & 0xfffffffb | 4;
                    // break -> 0x410363
                    break;
                }
                default: {
                    if ((v154 & 223) != 90 == (v157 != 116)) {
                        // break -> 0x4104d8
                        break;
                    }
                }
                case 108: {
                }
                case 106: {
                    // 0x410360
                    v158 = v153 + 8 & 0xffffffff;
                    // break -> 0x410363
                    break;
                }
            }
        } else {
            // 0x410370
            v158 = v153 & 0xffffffff | (int64_t)(1 << (int32_t)v153 % 2);
        }
        int64_t v159 = v158;
        unsigned char v160 = *(char *)v155; // 0x410363
        v150 = v159;
        v151 = v160;
        v152 = v155;
    }
    uint64_t v161 = v154 + 0xffffffdb; // 0x4104d8
    int64_t v162 = v161 % 256; // 0x4104e4
    g79 = v162;
    int64_t v163 = 17; // 0x4104e7
    int64_t v164 = v154; // 0x4104e7
    int64_t v165 = v154; // 0x4104e7
    switch ((char)v161) {
        case 0: {
            goto lab_0x410551;
        }
        case 28: {
            goto lab_0x4108a2;
        }
        case 30: {
            // 0x4108ce
            v163 = 14;
            v164 = 99;
            goto lab_0x4104f9;
        }
        case 32: {
            goto lab_0x4108a2;
        }
        case 33: {
            goto lab_0x4108a2;
        }
        case 34: {
            goto lab_0x4108a2;
        }
        case 46: {
            // 0x4108bf
            v163 = 16;
            v164 = 115;
            goto lab_0x4104f9;
        }
        case 51: {
            goto lab_0x4108dd;
        }
        case 60: {
            goto lab_0x4108a2;
        }
        case 62: {
            int32_t v166 = v153; // 0x4107f9
            int32_t v167 = v166 - 7; // 0x4107f9
            int64_t v168 = v167 < 0 == (6 - v166 & v166) < 0 == (v167 != 0) ? 14 : 13; // 0x4107ff
            v163 = v168;
            v164 = v154;
            goto lab_0x4104f9;
        }
        case 63: {
            goto lab_0x410850;
        }
        case 64: {
            goto lab_0x4108a2;
        }
        case 65: {
            goto lab_0x4108a2;
        }
        case 66: {
            goto lab_0x4108a2;
        }
        case 68: {
            goto lab_0x410850;
        }
        case 73: {
            uint32_t v169 = (int32_t)v153; // 0x41080f
            v163 = 22;
            v164 = v154;
            if (v169 <= 15) {
                // 0x410815
                v163 = 22;
                v164 = v154;
                if ((v153 & 4) == 0) {
                    // 0x41081d
                    v163 = 21;
                    v164 = v154;
                    if (v169 <= 7) {
                        // 0x41082b
                        v163 = 18;
                        v164 = v154;
                        if ((v153 & 2) == 0) {
                            int64_t v170 = v153 % 2 == 0 ? 20 : 19; // 0x41083f
                            v163 = v170;
                            v164 = v154;
                        }
                    }
                }
            }
            goto lab_0x4104f9;
        }
        case 74: {
            goto lab_0x4108dd;
        }
        case 75: {
            goto lab_0x4104f9;
        }
        case 78: {
            int32_t v171 = v153; // 0x4104f0
            int32_t v172 = v171 - 7; // 0x4104f0
            int64_t v173 = v172 < 0 == (6 - v171 & v171) < 0 == (v172 != 0) ? 16 : 15; // 0x4104f6
            v163 = v173;
            v164 = v154;
            goto lab_0x4104f9;
        }
        case 80: {
            goto lab_0x4108dd;
        }
        case 83: {
            goto lab_0x4108dd;
        }
        default: {
            goto lab_0x410928_9;
        }
    }
  lab_0x4103cc:;
    int64_t v174 = v134;
    int64_t v175 = v133;
    int64_t v176 = v132;
    if (v176 <= v127) {
        int64_t v177 = v174 - 32; // 0x4103e3
        int64_t v178 = v176; // 0x410160
        int64_t v179 = v178;
        int64_t v180 = v179 + 1; // 0x4103d8
        *(int32_t *)(v177 + 32 * v180) = 0;
        v178 = v180;
        while (v180 <= v127) {
            // 0x4103d8
            v179 = v178;
            v180 = v179 + 1;
            *(int32_t *)(v177 + 32 * v180) = 0;
            v178 = v180;
        }
        // 0x4103f1
        *a3 = v180;
    }
    int32_t * v181 = (int32_t *)(v174 + 32 * v127); // 0x4103fd
    int32_t v182 = *v181; // 0x4103fd
    if (v182 != 0) {
        // 0x410a7e
        if (v182 != 5) {
            goto lab_0x410928_9;
        }
        unsigned char v183 = *(char *)v129; // 0x410a87
        v29 = v130;
        v23 = v129 + 1;
        v19 = v183;
        v18 = v129;
        v17 = v175;
        goto lab_0x410318;
    } else {
        // 0x410407
        *v181 = 5;
        unsigned char v184 = *(char *)v129; // 0x41040d
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
            goto lab_0x410321;
        } else {
            goto lab_0x410420;
        }
    }
  lab_0x410420:;
    int64_t v191 = v190;
    int64_t v192 = v189;
    int64_t v193 = v188;
    int64_t v194 = v187;
    int64_t v195 = v186;
    char * v196 = (char *)v195; // 0x410420
    char v197 = *v196; // 0x410420
    int64_t * v198; // 0x410248
    *v198 = v192;
    int64_t v199; // 0x410160
    int64_t v200; // 0x410160
    int64_t v201; // 0x410160
    int64_t v202; // 0x410160
    int64_t v203; // 0x410160
    int64_t * v204; // 0x410251
    int64_t * v205; // 0x41025a
    int64_t v206; // 0x410439
    if (v197 != 42) {
        char v207 = *v196; // 0x410620
        int64_t v208 = v193; // 0x410629
        char * v209; // 0x410160
        int64_t v210; // 0x410160
        if (v207 < 58) {
            int64_t v211 = v208;
            int64_t v212 = v211 + 1; // 0x410630
            char * v213 = (char *)v212;
            char v214 = *v213; // 0x410634
            v208 = v212;
            while (v214 < 58) {
                // 0x410630
                v211 = v208;
                v212 = v211 + 1;
                v213 = (char *)v212;
                v214 = *v213;
                v208 = v212;
            }
            // 0x41063e
            v209 = v213;
            v210 = v212;
        } else {
            // 0x410620
            v209 = (char *)v193;
            v210 = v193;
        }
        int64_t v215 = v210;
        char * v216 = v209;
        *v204 = v215;
        unsigned char v217 = *v216; // 0x410651
        v149 = v194;
        v147 = v217;
        v145 = v215;
        v143 = v191;
        goto lab_0x410321;
    } else {
        // 0x41042f
        v206 = v192 + 2;
        *v204 = v206;
        char v218 = *(char *)v206; // 0x41044f
        int64_t v219 = v218; // 0x41044f
        int64_t v220 = v219 + 0xffffffd0; // 0x410453
        v201 = v220 & 0xffffffff;
        int64_t v221 = v206; // 0x410459
        if ((char)v220 < 10) {
            int64_t v222 = v221;
            int64_t v223 = v222 + 1; // 0x410d04
            char v224 = *(char *)v223; // 0x410d08
            v221 = v223;
            while (v224 < 58) {
                // 0x410d04
                v222 = v221;
                v223 = v222 + 1;
                v224 = *(char *)v223;
                v221 = v223;
            }
            // 0x410d14
            v201 = v223;
            int64_t v225 = v219; // 0x410d18
            int64_t v226 = v206; // 0x410d18
            int64_t v227 = 0; // 0x410d18
            if (v224 != 36) {
                goto lab_0x41045f;
            } else {
                uint64_t v228 = v227;
                int64_t v229 = v226;
                int64_t v230 = v225;
                int64_t v231 = v228 < 0x199999999999999a ? 10 * v228 : -1;
                int64_t v232 = v230; // 0x410d49
                int64_t v233 = v229; // 0x410d49
                int64_t v234 = v231; // 0x410d49
                uint64_t v235 = v234;
                int64_t v236 = v233;
                int64_t v237 = v232;
                int64_t v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235; // 0x410d4e
                int64_t v239 = v236 + 1; // 0x410d55
                char v240 = *(char *)v239; // 0x410d59
                int64_t v241 = v240; // 0x410d59
                while (v238 < v235) {
                    // 0x410d67
                    v232 = v241;
                    v233 = v239;
                    v234 = -1;
                    if (v240 >= 58) {
                        goto lab_0x410928_9;
                    }
                    v235 = v234;
                    v236 = v233;
                    v237 = v232;
                    v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                    v239 = v236 + 1;
                    v240 = *(char *)v239;
                    v241 = v240;
                }
                // 0x410d22
                v225 = v241;
                v226 = v239;
                v227 = v238;
                while (v240 < 58) {
                    // 0x410d2b
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
                        // 0x410d67
                        v232 = v241;
                        v233 = v239;
                        v234 = -1;
                        if (v240 >= 58) {
                            goto lab_0x410928_9;
                        }
                        v235 = v234;
                        v236 = v233;
                        v237 = v232;
                        v238 = (0x100000000 * v237 - 0x3000000000 >> 32) + v235;
                        v239 = v236 + 1;
                        v240 = *(char *)v239;
                        v241 = v240;
                    }
                    // 0x410d22
                    v225 = v241;
                    v226 = v239;
                    v227 = v238;
                }
                int64_t v242 = v238 - 1; // 0x410e37
                if (v242 >= 0xfffffffffffffffe) {
                    goto lab_0x410928_9;
                }
                // 0x410e45
                *v205 = v242;
                v203 = v194;
                v200 = v236 + 2;
                v202 = v238;
                v199 = v242;
                goto lab_0x41046e;
            }
        } else {
            goto lab_0x41045f;
        }
    }
  lab_0x410551:;
    int64_t v243 = v165;
    *(char *)(v34 + 72) = (char)v243;
    int64_t v244 = *a2; // 0x410556
    *(int64_t *)(v34 + 8) = v155;
    int64_t v245 = v244 + 1; // 0x41055e
    *a2 = v245;
    int64_t v246; // 0x410160
    int64_t v247; // 0x410160
    int64_t dest_mem; // 0x410160
    int64_t v248; // 0x410160
    int64_t v249; // 0x410e53
    if (v246 > v245) {
        // 0x41056a
        goto lab_0x4101d8;
    } else {
        if (v246 < 0) {
            // 0x410e53
            v249 = *v6;
            v116 = v249;
            goto lab_0x410b00_5;
        }
        int64_t v250 = 2 * v246; // 0x410586
        if (v250 >= 0x2e8ba2e8ba2e8bb) {
            // 0x410e53
            v249 = *v6;
            v116 = v249;
            goto lab_0x410b00_5;
        }
        int64_t v251 = *v5; // 0x410597
        int64_t size2 = 176 * v246; // 0x4105a9
        if (v3 == v251) {
            int64_t * mem3 = malloc((int32_t)size2); // 0x4106f9
            v248 = (int64_t)mem3;
            v247 = v245;
            if (mem3 == NULL) {
                int64_t v252 = *v6; // 0x410c5c
                v118 = v252;
                if (v4 == v252) {
                    // 0x410b29
                    v121 = __errno_location();
                    *v121 = 12;
                    return 0xffffffff;
                }
                // 0x410b07
                v119 = v118;
                free((int64_t *)v119);
                goto lab_0x410b19_3;
            }
            goto lab_0x410714;
        } else {
            int64_t * mem4 = realloc((int64_t *)v251, (int32_t)size2); // 0x4105bb
            if (mem4 == NULL) {
                // 0x410e53
                v249 = *v6;
                v116 = v249;
                goto lab_0x410b00_5;
            }
            int64_t v253 = (int64_t)mem4; // 0x4105bb
            int64_t v254 = *v5; // 0x4105dd
            int64_t v255 = *a2; // 0x4105e1
            dest_mem = v253;
            v248 = v253;
            v247 = v255;
            if (v3 == v254) {
                goto lab_0x410714;
            } else {
                goto lab_0x4105ef;
            }
        }
    }
  lab_0x4108a2:
    // 0x4108a2
    v163 = 12;
    v164 = v154;
    if ((int32_t)v153 <= 15) {
        int64_t v256 = (v153 & 4) != 0 ? 12 : 11; // 0x4108b7
        v163 = v256;
        v164 = v154;
    }
    goto lab_0x4104f9;
  lab_0x4108dd:;
    uint32_t v335 = (int32_t)v153; // 0x4108e5
    v163 = 10;
    v164 = v154;
    if (v335 <= 15) {
        // 0x4108eb
        v163 = 10;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x4108f3
            v163 = 8;
            v164 = v154;
            if (v335 <= 7) {
                // 0x410901
                v163 = 2;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x41090e
                    v163 = 2 * v153 & 2 ^ 6;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4104f9;
  lab_0x410850:;
    uint32_t v336 = (int32_t)v153; // 0x410858
    v163 = 9;
    v164 = v154;
    if (v336 <= 15) {
        // 0x41085e
        v163 = 9;
        v164 = v154;
        if ((v153 & 4) == 0) {
            // 0x410866
            v163 = 7;
            v164 = v154;
            if (v336 <= 7) {
                // 0x410874
                v163 = 1;
                v164 = v154;
                if ((v153 & 2) == 0) {
                    // 0x410881
                    v163 = (2 * v153 & 2 ^ 2) + 3;
                    v164 = v154;
                }
            }
        }
    }
    goto lab_0x4104f9;
  lab_0x4104f9:;
    int64_t v257 = v164;
    int64_t v258 = v163;
    int64_t v259; // 0x410160
    int64_t v260; // 0x410160
    int64_t * v261; // 0x41025f
    if (v259 == -1) {
        // 0x410a04
        *v261 = v148;
        if (v148 == -1) {
            goto lab_0x410928_9;
        }
        // 0x410a1c
        v260 = v148;
    } else {
        // 0x410503
        *v261 = v259;
        v260 = v259;
    }
    uint64_t v262 = v260;
    int64_t v263 = *v6; // 0x410508
    int64_t v264 = v258; // 0x41050f
    int64_t v265 = v162; // 0x41050f
    int64_t v266 = v263; // 0x41050f
    int64_t v267; // 0x410160
    int64_t v268; // 0x410160
    int64_t v269; // 0x410160
    int64_t v270; // 0x410160
    int64_t v271; // 0x410160
    if (v142 > v262) {
        goto lab_0x410515;
    } else {
        uint64_t v272 = 2 * v142; // 0x410978
        int64_t v273 = v272 > v262 ? v272 : v262 + 1; // 0x410982
        v116 = v263;
        if (v273 >= 0x800000000000000) {
            goto lab_0x410b00_5;
        }
        int64_t size3 = 32 * v273; // 0x4109a1
        int64_t v274 = 0x100000000 * v258 >> 32; // 0x4109b4
        if (v4 == v263) {
            int64_t * mem5 = malloc((int32_t)size3); // 0x410a99
            v268 = (int64_t)mem5;
            v270 = v274 & 0xffffffff;
            if (mem5 == NULL) {
                goto lab_0x410b19_3;
            }
            goto lab_0x410ab6;
        } else {
            int64_t * mem6 = realloc((int64_t *)v263, (int32_t)size3); // 0x4109c1
            if (mem6 == NULL) {
                // 0x410e53
                v249 = *v6;
                v116 = v249;
                goto lab_0x410b00_5;
            }
            int64_t v275 = (int64_t)mem6; // 0x4109c1
            int64_t v276 = v274 & 0xffffffff; // 0x4109c6
            int64_t v277 = *v6; // 0x4109f1
            v269 = v276;
            v271 = v162;
            v267 = v275;
            v268 = v275;
            v270 = v276;
            if (v4 == v277) {
                goto lab_0x410ab6;
            } else {
                goto lab_0x4109fb;
            }
        }
    }
  lab_0x410515:;
    int64_t v278 = v266;
    int64_t v279 = v265;
    int64_t v280 = v264;
    if (v279 <= v262) {
        int64_t v281 = v278 - 32; // 0x41052b
        int64_t v282 = v279; // 0x410160
        int64_t v283 = v282;
        int64_t v284 = v283 + 1; // 0x410520
        *(int32_t *)(v281 + 32 * v284) = 0;
        v282 = v284;
        while (v284 <= v262) {
            // 0x410520
            v283 = v282;
            v284 = v283 + 1;
            *(int32_t *)(v281 + 32 * v284) = 0;
            v282 = v284;
        }
        // 0x410539
        *a3 = v284;
    }
    int32_t * v285 = (int32_t *)(v278 + 32 * v262); // 0x410545
    int32_t v286 = *v285; // 0x410545
    int32_t v287 = v280;
    if (v286 != 0) {
        // 0x41096a
        v165 = v257;
        if (v286 != v287) {
            goto lab_0x410928_9;
        }
    } else {
        // 0x41054f
        *v285 = v287;
        v165 = v257;
    }
    goto lab_0x410551;
  lab_0x410c19:;
    int64_t v288 = v135;
    int64_t v289 = 32 * v128; // 0x410c19
    int64_t * v290; // 0x410160
    memcpy((int64_t *)v288, v290, (int32_t)v289);
    v137 = v289;
    v136 = v288;
    goto lab_0x4106ed;
  lab_0x4106ed:;
    int64_t v291 = v136;
    int64_t v292 = v137;
    *v6 = v291;
    v132 = v292;
    v133 = v138;
    v134 = v291;
    goto lab_0x4103cc;
  lab_0x41045f:;
    int64_t v293 = v201;
    int64_t v294 = *v205; // 0x41045f
    v203 = v194;
    v200 = v206;
    v202 = v293;
    v199 = v294;
    if (v294 == -1) {
        // 0x410cda
        *v205 = v194;
        if (v194 == -1) {
            goto lab_0x410928_9;
        }
        // 0x410cf2
        v203 = v194 + 1;
        v200 = v206;
        v202 = v293;
        v199 = v194;
    }
    goto lab_0x41046e;
  lab_0x41046e:;
    uint64_t v295 = v199;
    int64_t v296 = v202;
    int64_t v297 = v200;
    int64_t v298 = v203;
    int64_t v299 = *v6; // 0x41046e
    int64_t v300 = v296; // 0x410475
    int64_t v301 = v191; // 0x410475
    int64_t v302 = v299; // 0x410475
    int64_t v303; // 0x410160
    int64_t v304; // 0x410160
    int64_t v305; // 0x410160
    int64_t v306; // 0x410b52
    if (v191 > v295) {
        goto lab_0x41047e;
    } else {
        uint64_t v307 = 2 * v191; // 0x410b48
        v306 = v307 > v295 ? v307 : v295 + 1;
        v116 = v299;
        if (v306 >= 0x800000000000000) {
            goto lab_0x410b00_5;
        }
        int64_t size4 = 32 * v306; // 0x410b6d
        if (v4 == v299) {
            int64_t * mem7 = malloc((int32_t)size4); // 0x410d9e
            if (mem7 == NULL) {
                goto lab_0x410b19_3;
            }
            // 0x410dc0
            v304 = (int64_t)mem7;
            goto lab_0x410dcb;
        } else {
            int64_t * mem8 = realloc((int64_t *)v299, (int32_t)size4); // 0x410b8e
            int64_t v308 = *v6; // 0x410b93
            v116 = v308;
            if (mem8 == NULL) {
                goto lab_0x410b00_5;
            }
            int64_t v309 = (int64_t)mem8; // 0x410b8e
            v305 = v296;
            v303 = v309;
            v304 = v309;
            if (v4 == v308) {
                goto lab_0x410dcb;
            } else {
                goto lab_0x410bcc;
            }
        }
    }
  lab_0x410714:;
    int64_t v310 = v247;
    int64_t v311 = v248;
    int64_t * v312; // 0x410160
    dest_mem = (int64_t)memcpy((int64_t *)v311, v312, 88 * (int32_t)v310);
    goto lab_0x4105ef;
  lab_0x4105ef:;
    int64_t v313 = dest_mem;
    *v5 = v313;
    goto lab_0x4101d8;
  lab_0x410ab6:;
    int64_t v314 = v270;
    int64_t v315 = v268;
    int64_t v316 = 32 * v162; // 0x410acc
    memcpy((int64_t *)v315, v290, (int32_t)v316);
    v269 = v314;
    v271 = v316;
    v267 = v315;
    goto lab_0x4109fb;
  lab_0x4109fb:;
    int64_t v317 = v267;
    int64_t v318 = v271;
    int64_t v319 = v269;
    *v6 = v317;
    v264 = v319;
    v265 = v318;
    v266 = v317;
    goto lab_0x410515;
  lab_0x41047e:;
    int64_t v320 = v302;
    int64_t v321 = v301;
    int64_t v322 = v300;
    if (v322 <= v295) {
        int64_t v323 = v320 - 32; // 0x410493
        int64_t v324 = v322; // 0x410160
        int64_t v325 = v324;
        int64_t v326 = v325 + 1; // 0x410488
        *(int32_t *)(v323 + 32 * v326) = 0;
        v324 = v326;
        while (v326 <= v295) {
            // 0x410488
            v325 = v324;
            v326 = v325 + 1;
            *(int32_t *)(v323 + 32 * v326) = 0;
            v324 = v326;
        }
        // 0x4104a1
        *a3 = v326;
    }
    int32_t * v327 = (int32_t *)(v320 + 32 * v295); // 0x4104ae
    int32_t v328 = *v327; // 0x4104ae
    if (v328 != 0) {
        // 0x410bd5
        if (v328 != 5) {
            goto lab_0x410928_9;
        }
        unsigned char v329 = *(char *)v297; // 0x410bde
        v149 = v298;
        v147 = v329;
        v145 = v297;
        v143 = v321;
    } else {
        // 0x4104b8
        *v327 = 5;
        unsigned char v330 = *(char *)v297; // 0x4104c1
        v149 = v298;
        v147 = v330;
        v145 = v297;
        v143 = v321;
    }
    goto lab_0x410321;
  lab_0x410dcb:;
    int64_t v331 = v304;
    int64_t v332 = 32 * v296; // 0x410dcb
    memcpy((int64_t *)v331, v290, (int32_t)v332);
    v305 = v332;
    v303 = v331;
    goto lab_0x410bcc;
  lab_0x410bcc:;
    int64_t v333 = v303;
    int64_t v334 = v305;
    *v6 = v333;
    v300 = v334;
    v301 = v306;
    v302 = v333;
    goto lab_0x41047e;
}
// Address range: 0x410e70 - 0x410ecd
int64_t function_410e70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410e70
    return function_4018e8();
}
// Address range: 0x410ed0 - 0x410ed1
int64_t function_410ed0(void) {
    // 0x410ed0
    int64_t result; // 0x410ed0
    return result;
}
// Address range: 0x410ee0 - 0x410ef8
int64_t function_410ee0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x410ee0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g31);
}
// Address range: 0x410ef8 - 0x410f18
int64_t function_410ef8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g27; // 0x410f02
    while (*(int64_t *)v1 != -1) {
        // 0x410f03
        v1 -= 8;
    }
    // 0x410f14
    return result;
}
