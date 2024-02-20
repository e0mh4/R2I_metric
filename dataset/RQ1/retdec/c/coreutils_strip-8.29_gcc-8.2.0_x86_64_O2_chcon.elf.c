// Address range: 0x401d70 - 0x401d75
int64_t function_401d70(void) {
    // 0x401d70
    return abort();
}
// Address range: 0x401d75 - 0x401d7a
int64_t function_401d75(void) {
    // 0x401d75
    return abort();
}
// Address range: 0x401d7a - 0x401d7f
int64_t function_401d7a(void) {
    // 0x401d7a
    abort();
    // UNREACHABLE
}
// Address range: 0x401d7f - 0x401d84
int64_t function_401d7f(void) {
    // 0x401d7f
    abort();
    // UNREACHABLE
}
// Address range: 0x401d84 - 0x401d89
int64_t function_401d84(void) {
    // 0x401d84
    abort();
    // UNREACHABLE
}
// Address range: 0x401d89 - 0x401d8e
int64_t function_401d89(void) {
    // 0x401d89
    abort();
    // UNREACHABLE
}
// Address range: 0x401d8e - 0x401d93
int64_t function_401d8e(void) {
    // 0x401d8e
    abort();
    // UNREACHABLE
}
// Address range: 0x401d93 - 0x401d98
int64_t function_401d93(void) {
    // 0x401d93
    abort();
    // UNREACHABLE
}
// Address range: 0x401d98 - 0x401d9d
int64_t function_401d98(void) {
    // 0x401d98
    abort();
    // UNREACHABLE
}
// Address range: 0x401d9d - 0x401da2
int64_t function_401d9d(void) {
    // 0x401d9d
    abort();
    // UNREACHABLE
}
// Address range: 0x401da2 - 0x401da7
int64_t function_401da2(void) {
    // 0x401da2
    abort();
    // UNREACHABLE
}
// Address range: 0x401da7 - 0x401dac
int64_t function_401da7(void) {
    // 0x401da7
    abort();
    // UNREACHABLE
}
// Address range: 0x401dac - 0x401db1
int64_t function_401dac(void) {
    // 0x401dac
    return abort();
}
// Address range: 0x401db1 - 0x401db6
int64_t function_401db1(void) {
    // 0x401db1
    abort();
    // UNREACHABLE
}
// Address range: 0x401dc0 - 0x4027f8
int64_t function_401dc0(int64_t a1, int64_t a2) {
    int64_t err_num3 = 0x100000000 * a1 >> 32; // 0x401dcf
    function_402db0(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v1; // 0x401dc0
    function_40adc0(0x402d10, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    int64_t v2 = 0; // 0x401e26
    int64_t v3 = 0; // 0x401e26
    int64_t v4 = 16; // 0x401e26
    int64_t v5 = 0; // 0x401e26
    int64_t v6 = 0xffffffff; // 0x401e26
    int64_t v7; // 0x401dc0
    int64_t v8; // 0x401dc0
    int64_t v9; // 0x401dc0
    int64_t v10; // 0x401dc0
    int64_t v11; // 0x401dc0
    while (true) {
      lab_0x401e30_2:
        // 0x401e30
        v8 = v6;
        v7 = v5;
        v9 = v4;
        v10 = v3;
        v11 = v2;
        int32_t v12 = function_408310(err_num3 & 0xffffffff, a2, "HLPRhvu:r:t:l:", &g2, 0, v1);
        v2 = v11;
        v3 = 1;
        v4 = v9;
        v5 = v7;
        v6 = v8;
        switch (v12) {
            case -1: {
                goto lab_0x401fb8;
            }
            case 108: {
                goto lab_0x401e30_2;
            }
            default: {
                if (v12 > 108) {
                    if (v12 == 118) {
                        // 0x401f70
                        g38 = 1;
                        v2 = v11;
                        v3 = v10;
                        v4 = v9;
                        v5 = v7;
                        v6 = v8;
                    } else {
                        if (v12 > 118) {
                            // 0x401e67
                            v2 = v11;
                            v3 = v10;
                            v4 = v9;
                            v5 = 0;
                            v6 = v8;
                            if (v12 != 129) {
                                if (v12 > 129) {
                                    // 0x401e74
                                    v2 = v11;
                                    v3 = v10;
                                    v4 = v9;
                                    v5 = 1;
                                    v6 = v8;
                                    if (v12 != 130) {
                                        if (v12 != 131) {
                                            // 0x401f37
                                            function_4028e0(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401eab
                                        v2 = g55;
                                        v3 = v10;
                                        v4 = v9;
                                        v5 = v7;
                                        v6 = v8;
                                    }
                                } else {
                                    // 0x401ec0
                                    v2 = v11;
                                    v3 = v10;
                                    v4 = v9;
                                    v5 = v7;
                                    v6 = 1;
                                    if (v12 != 128) {
                                        // 0x401f37
                                        function_4028e0(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                        } else {
                            // 0x401e88
                            v2 = v11;
                            v3 = 1;
                            v4 = v9;
                            v5 = v7;
                            v6 = v8;
                            if (v12 < 116 == (v12 != 114)) {
                                // 0x401f37
                                function_4028e0(1);
                                // UNREACHABLE
                            }
                        }
                    }
                } else {
                    // 0x401ed8
                    v2 = v11;
                    v3 = v10;
                    v4 = 2;
                    v5 = v7;
                    v6 = v8;
                    if (v12 != 76) {
                        if (v12 > 76) {
                            if (v12 == 82) {
                                // 0x401f60
                                *(char *)&g39 = 1;
                                v2 = v11;
                                v3 = v10;
                                v4 = v9;
                                v5 = v7;
                                v6 = v8;
                            } else {
                                if (v12 > 82) {
                                    // 0x401ee6
                                    v2 = v11;
                                    v3 = v10;
                                    v4 = v9;
                                    v5 = v7;
                                    v6 = v8;
                                    if (v12 != 102) {
                                        // 0x401eef
                                        v2 = v11;
                                        v3 = v10;
                                        v4 = v9;
                                        v5 = v7;
                                        v6 = 0;
                                        if (v12 != 104) {
                                          lab_0x401f37:
                                            // 0x401f37
                                            function_4028e0(1);
                                            // UNREACHABLE
                                        }
                                    }
                                } else {
                                    // 0x401f20
                                    v2 = v11;
                                    v3 = v10;
                                    v4 = 16;
                                    v5 = v7;
                                    v6 = v8;
                                    if (v12 != 80) {
                                        // 0x401f37
                                        function_4028e0(1);
                                        // UNREACHABLE
                                    }
                                }
                            }
                        } else {
                            if (v12 == -130) {
                                // 0x4026e8
                                function_4028e0(0);
                                // UNREACHABLE
                            }
                            // 0x401f0b
                            v2 = v11;
                            v3 = v10;
                            v4 = 17;
                            v5 = v7;
                            v6 = v8;
                            if (v12 != 72) {
                                if (v12 == -131) {
                                    // 0x401f80
                                    function_404ea0((int64_t)g30, "chcon", "GNU coreutils", (int64_t)g19, "Russell Coker", "Jim Meyering");
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401f37;
                            }
                        }
                    }
                }
                goto lab_0x401e30_2;
            }
        }
    }
  lab_0x401fb8:;
    char v13 = *(char *)&g39; // 0x401fb8
    int64_t v14; // 0x401dc0
    int64_t v15; // 0x401dc0
    int64_t v16; // 0x401dc0
    if (v13 != 0) {
        int32_t v17 = v8;
        if (v9 == 16) {
            if (v17 == 1) {
                // 0x4026ef
                error(1, (int32_t)"-R --dereference requires either -H or -L" ^ (int32_t)"-R --dereference requires either -H or -L", dcgettext(NULL, "-R --dereference requires either -H or -L", 5));
                goto lab_0x402711;
            } else {
                // 0x4025a2
                g40 = 0;
                v16 = 16;
                goto lab_0x401fd6;
            }
        } else {
            // 0x402318
            v14 = err_num3;
            v15 = v8;
            if (v17 == 0) {
                goto lab_0x40274f;
            } else {
                // 0x402321
                g40 = 1;
                v16 = v9;
                goto lab_0x401fd6;
            }
        }
    } else {
        // 0x401fc7
        g40 = v8 != 0;
        v16 = 16;
        goto lab_0x401fd6;
    }
    // 0x401e30
    goto lab_0x401e30_2;
  lab_0x401fd6:;
    int32_t v18 = *(int32_t *)0x6102dc; // 0x401fd6
    int64_t v19 = v18; // 0x401fd6
    int32_t v20 = (int32_t)err_num3 - v18; // 0x401fe0
    unsigned char v21 = (char)(v11 != 0) | (char)v10; // 0x401feb
    int64_t v22; // 0x401dc0
    int64_t v23; // 0x401dc0
    int64_t v24; // 0x401dc0
    int64_t v25; // 0x401dc0
    int64_t v26; // 0x401dc0
    int32_t * err_num; // 0x402003
    if (v21 == 0) {
        // 0x402462
        if (v20 > 1) {
            goto lab_0x402771;
        } else {
            goto lab_0x40246b;
        }
    } else {
        if (v20 < 1) {
            goto lab_0x40246b;
        } else {
            // 0x401fff
            err_num = __errno_location();
            if (v11 != 0) {
                goto lab_0x402711;
            } else {
                // 0x40201b
                g36 = 0;
                if (v7 != 0 == (v13 != 0)) {
                    int64_t v27 = function_4049f0(&g35); // 0x4025b3
                    g37 = v27;
                    v24 = g28;
                    if (v27 != 0) {
                        goto lab_0x40203e;
                    } else {
                        int64_t v28 = function_404780(4, (int64_t)"/"); // 0x4025d9
                        error(1, *err_num, dcgettext(NULL, "failed to get attributes of %s", 5));
                        v26 = v28;
                        v25 = v16;
                        v22 = a2;
                        v23 = v7;
                        goto lab_0x402608;
                    }
                } else {
                    // 0x402033
                    g37 = 0;
                    v24 = v19;
                    goto lab_0x40203e;
                }
            }
        }
    }
  lab_0x40274f:
    // 0x40274f
    error(1, (int32_t)"-R -h requires -P" ^ (int32_t)"-R -h requires -P", dcgettext(NULL, "-R -h requires -P", 5));
    int64_t v29 = v14; // 0x40276c
    int64_t v30 = v15; // 0x40276c
    goto lab_0x402771;
  lab_0x402711:
    // 0x402711
    *(int32_t *)(int64_t)&g58 = 95;
    function_404780(4, v11);
    error(1, *(int32_t *)err_num3, dcgettext(NULL, "failed to get security context of %s", 5));
    v14 = err_num3;
    v15 = 0;
    goto lab_0x40274f;
  lab_0x402771:;
    int64_t v31 = *(int64_t *)(8 * v30 + a2); // 0x402771
    g28 = (int32_t)v30 + 1;
    g36 = v31;
    int32_t * err_num2 = __errno_location(); // 0x402786
    *err_num2 = 95;
    function_4049d0(v31);
    error(1, *err_num2, dcgettext(NULL, "invalid context: %s", 5));
    int64_t v32 = v29; // 0x4027bf
    goto lab_0x4027c4;
  lab_0x40246b:
    // 0x40246b
    v32 = err_num3;
    if (err_num3 <= v19) {
        // 0x402474
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x401f37
        function_4028e0(1);
        // UNREACHABLE
    }
    goto lab_0x4027c4;
  lab_0x4027c4:
    // 0x4027c4
    function_4049d0(*(int64_t *)(a2 - 8 + 8 * v32));
    error(0, (int32_t)"missing operand after %s" ^ (int32_t)"missing operand after %s", dcgettext(NULL, "missing operand after %s", 5));
    // 0x401f37
    function_4028e0(1);
    // UNREACHABLE
  lab_0x40203e:;
    int64_t v33 = function_405270(8 * v24 + a2, (int32_t)v16 | 8); // 0x402049
    int64_t v34 = v21; // 0x40204e
    int64_t v35 = fts_read(v33); // 0x402059
    g56 = v35;
    int64_t v36 = v35; // 0x402064
    int64_t v37 = v35; // 0x402064
    int64_t v38 = v34; // 0x402064
    int64_t v39 = v33; // 0x402064
    int64_t v40 = v34; // 0x402064
    int64_t v41 = v33; // 0x402064
    if (v35 == 0) {
        goto lab_0x4020f6;
    } else {
        goto lab_0x402070;
    }
  lab_0x4020f6:;
    int64_t v42 = v40; // 0x4020fb
    if (*err_num != 0) {
        // 0x4024f4
        error(0, *err_num, dcgettext(NULL, "fts_read failed", 5));
        v42 = 0;
    }
    int64_t v43 = v42; // 0x40210b
    if ((int32_t)fts_close(v41) != 0) {
        // 0x4024cc
        error(0, *err_num, dcgettext(NULL, "fts_close failed", 5));
        v43 = 0;
    }
    // 0x402111
    return v43 % 256 ^ 1;
  lab_0x402070:;
    int64_t v44 = v39;
    int64_t v45 = v38;
    int64_t v46 = v37;
    int64_t str = *(int64_t *)(v46 + 56); // 0x402075
    int64_t v47; // 0x401dc0
    int64_t v48; // 0x401dc0
    int64_t v49; // 0x401dc0
    int64_t v50; // 0x401dc0
    int64_t v51; // 0x401dc0
    int64_t v52; // 0x401dc0
    int64_t v53; // 0x401dc0
    int64_t v54; // 0x401dc0
    switch (v36) {
        case 1: {
            unsigned char v55 = *(char *)&g39; // 0x40224a
            if (v55 == 0) {
                goto lab_0x402180;
            } else {
                int64_t v56 = v55; // 0x40224a
                v52 = v45;
                v48 = v44;
                v50 = v56;
                if (g37 != 0) {
                    // 0x40226b
                    v52 = v45;
                    v48 = v44;
                    v50 = v56;
                    if (*(int64_t *)(v46 + 128) == *(int64_t *)g37) {
                        // 0x40227b
                        v52 = v45;
                        v48 = v44;
                        v50 = v56;
                        if (*(int64_t *)(v46 + 120) == *(int64_t *)(g37 + 8)) {
                            // 0x402289
                            if (strcmp((char *)str, (char *)0x40d2a8) != 0) {
                                // 0x402695
                                function_4046a0(1, 4, (int64_t)"/");
                                function_4046a0(0, 4, str);
                                error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
                            } else {
                                // 0x40229e
                                function_404780(4, str);
                                error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
                            }
                            // 0x4022d0
                            error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
                            fts_set(v44, v46, 4);
                            fts_read(v44);
                            v52 = v45;
                            v48 = v44;
                            v50 = 0;
                        }
                    }
                }
                goto lab_0x4020df;
            }
        }
        case 2: {
            // 0x4021fb
            if ((char)function_4052c0(v44, v46) == 0) {
                goto lab_0x402180;
            } else {
                // 0x40220e
                function_404850(0, 3, str);
                error(0, (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n" ^ (int32_t)"WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", dcgettext(NULL, "WARNING: Circular directory structure.\nThis almost certainly means that you have a corrupted file system.\nNOTIFY YOUR SYSTEM MANAGER.\nThe following directory is part of the cycle:\n  %s\n", 5));
                v52 = v45;
                v48 = v44;
                v50 = 0;
                goto lab_0x4020df;
            }
        }
        case 4: {
            // 0x4021dc
            function_404780(4, str);
            v54 = (int64_t)"cannot read directory %s";
            goto lab_0x4020b6;
        }
        case 6: {
            // 0x40214f
            if (*(char *)&g39 == 0) {
                goto lab_0x402457;
            } else {
                // 0x40215c
                if (g37 == 0) {
                    goto lab_0x402180;
                } else {
                    // 0x402168
                    if (*(int64_t *)(v46 + 128) == *(int64_t *)g37) {
                        // 0x40251c
                        if (*(int64_t *)(v46 + 120) != *(int64_t *)(g37 + 8)) {
                            goto lab_0x402180;
                        } else {
                            // 0x40252a
                            if (strcmp((char *)str, "/") != 0) {
                                // 0x402642
                                function_4046a0(1, 4, (int64_t)"/");
                                function_4046a0(0, 4, str);
                                error(0, (int32_t)"it is dangerous to operate recursively on %s (same as %s)" ^ (int32_t)"it is dangerous to operate recursively on %s (same as %s)", dcgettext(NULL, "it is dangerous to operate recursively on %s (same as %s)", 5));
                            } else {
                                // 0x40253f
                                function_404780(4, str);
                                error(0, (int32_t)"it is dangerous to operate recursively on %s" ^ (int32_t)"it is dangerous to operate recursively on %s", dcgettext(NULL, "it is dangerous to operate recursively on %s", 5));
                            }
                            // 0x402571
                            error(0, (int32_t)"use --no-preserve-root to override this failsafe" ^ (int32_t)"use --no-preserve-root to override this failsafe", dcgettext(NULL, "use --no-preserve-root to override this failsafe", 5));
                            v53 = v46;
                            v51 = v45;
                            v47 = v44;
                            v49 = 0;
                            goto lab_0x4020d2;
                        }
                    } else {
                        goto lab_0x402180;
                    }
                }
            }
        }
        case 7: {
            // 0x402127
            error(0, *(int32_t *)(v46 + 64), "%s", (char *)function_404850(0, 3, str));
            v53 = v46;
            v51 = v45;
            v47 = v44;
            v49 = 0;
            goto lab_0x4020d2;
        }
        case 10: {
            // 0x40208a
            if (*(int64_t *)(v46 + 88) != 0) {
                // 0x40209c
                function_404780(4, str);
                v54 = (int64_t)"cannot access %s";
                goto lab_0x4020b6;
            } else {
                int64_t * v57 = (int64_t *)(v46 + 32); // 0x402091
                if (*v57 == 0) {
                    // 0x40243f
                    *v57 = 1;
                    fts_set(v44, v46, 1);
                    goto lab_0x402457;
                } else {
                    // 0x40209c
                    function_404780(4, str);
                    v54 = (int64_t)"cannot access %s";
                    goto lab_0x4020b6;
                }
            }
        }
        default: {
            goto lab_0x402180;
        }
    }
  lab_0x402608:
    // 0x402608
    function_404780(4, v23);
    error(0, (int32_t)"can't apply partial context to unlabeled file %s" ^ (int32_t)"can't apply partial context to unlabeled file %s", dcgettext(NULL, "can't apply partial context to unlabeled file %s", 5));
    v53 = v26;
    v51 = v25;
    v47 = v22;
    v49 = 0;
    goto lab_0x4020d2;
  lab_0x402180:;
    int64_t v65 = *(int64_t *)(v46 + 48); // 0x402187
    if (g38 != 0) {
        // 0x402345
        function_404780(4, str);
        __printf_chk(1, dcgettext(NULL, "changing security context of %s\n", 5));
    }
    int32_t v67 = *(int32_t *)(v44 + 44); // 0x402198
    int32_t v64 = 0; // bp-64, 0x40219d
    int64_t v66; // 0x401dc0
    if (g36 == 0) {
        int64_t v68; // 0x401dc0
        if (g40 == 0) {
            // 0x402498
            v68 = function_408500(v67, v65, (int64_t *)&v64);
        } else {
            // 0x40238d
            v68 = function_408410(v67, v65);
        }
        // 0x402392
        if ((int32_t)v68 < 0) {
            // 0x4024a2
            if (*err_num == 61) {
                goto lab_0x40239a;
            } else {
                // 0x4024ad
                function_404780(4, v65);
                v66 = (int64_t)"failed to get security context of %s";
                goto lab_0x4023c2;
            }
        } else {
            goto lab_0x40239a;
        }
    } else {
        int64_t v69; // 0x401dc0
        if (g40 == 0) {
            // 0x4023e4
            v69 = function_408520(v67, v65, g36);
        } else {
            // 0x4021c4
            v69 = function_408510(v67, v65, g36);
        }
        // 0x4021c9
        if ((int32_t)v69 != 0) {
            // 0x4023ee
            function_4049b0(1, g36);
            function_4046a0(0, 4, v65);
            error(0, *err_num, dcgettext(NULL, "failed to change context of %s to %s", 5));
            v53 = v46;
            v51 = v45;
            v47 = v44;
            v49 = 0;
        } else {
            // 0x4021d1
            v53 = v46;
            v51 = v45;
            v47 = v44;
            v49 = v21;
        }
        goto lab_0x4020d2;
    }
  lab_0x4020d2:;
    int64_t v58 = v49;
    int64_t v59 = v47;
    int64_t v60 = v51;
    v52 = v60;
    v48 = v59;
    v50 = v58;
    if (*(char *)&g39 == 0) {
        // 0x402330
        fts_set(v59, v53, 4);
        v52 = v60;
        v48 = v59;
        v50 = v58;
    }
    goto lab_0x4020df;
  lab_0x4020b6:
    // 0x4020b6
    error(0, *(int32_t *)(v46 + 64), dcgettext(NULL, (char *)v54, 5));
    v53 = v46;
    v51 = v45;
    v47 = v44;
    v49 = 0;
    goto lab_0x4020d2;
  lab_0x402457:
    // 0x402457
    v52 = v45;
    v48 = v44;
    v50 = v21;
    goto lab_0x4020df;
  lab_0x4020df:;
    int64_t v61 = v52 & 0xffffffff & v50; // 0x4020e2
    int64_t v62 = fts_read(v48); // 0x4020e5
    v40 = v61;
    v41 = v48;
    if (v62 != 0) {
        // 0x402070
        v36 = g56;
        v37 = v62;
        v38 = v61;
        v39 = v48;
        goto lab_0x402070;
    } else {
        goto lab_0x4020f6;
    }
  lab_0x40239a:;
    int32_t v63 = v64; // 0x40239a
    v26 = v46;
    v25 = v45;
    v22 = v44;
    v23 = v65;
    if (v63 == 0) {
        goto lab_0x402608;
    } else {
        // 0x4023a8
        *err_num = 95;
        function_4049d0((int64_t)v63);
        v66 = (int64_t)"failed to create security context: %s";
        goto lab_0x4023c2;
    }
  lab_0x4023c2:
    // 0x4023c2
    error(0, *err_num, dcgettext(NULL, (char *)v66, 5));
    v53 = v46;
    v51 = v45;
    v47 = v44;
    v49 = 0;
    goto lab_0x4020d2;
}
// Address range: 0x402800 - 0x40282b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402800
    int64_t v1; // 0x402800
    __libc_start_main(0x401dc0, (int32_t)a4, (char **)&v1, (void (*)())0x40ad50, (void (*)())0x40adb0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40282b - 0x40284a
int64_t function_40282b(void) {
    // 0x40282b
    return &g29;
}
// Address range: 0x40284a - 0x402881
int64_t function_40284a(void) {
    // 0x40284a
    return 0;
}
// Address range: 0x402881 - 0x4028d8
int64_t function_402881(void) {
    // 0x402881
    if (g33 != 0) {
        // 0x4028d7
        int64_t result; // 0x402881
        return result;
    }
    int64_t v1 = g34; // 0x4028b4
    int64_t result2; // 0x4028c6
    if (g34 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4028c6
        result2 = function_40282b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4028b6
        v1++;
    }
    // 0x4028aa
    g34 = v1;
    // 0x4028c6
    result2 = function_40282b();
    g33 = 1;
    return result2;
}
// Address range: 0x4028d8 - 0x4028dd
int64_t function_4028d8(void) {
    // 0x4028d8
    return function_40284a();
}
// Address range: 0x4028e0 - 0x402ced
int64_t function_4028e0(int64_t a1) {
    int32_t status = a1; // 0x4028f6
    if (status != 0) {
        // 0x4028fa
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40291f
        exit(status);
        // UNREACHABLE
    }
    // 0x402926
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... CONTEXT FILE...\n  or:  %s [OPTION]... [-u USER] [-r ROLE] [-l RANGE] [-t TYPE] FILE...\n  or:  %s [OPTION]... --reference=RFILE FILE...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Change the SELinux security context of each FILE to CONTEXT.\nWith --reference, change the security context of each FILE to that of RFILE.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --dereference      affect the referent of each symbolic link (this is\n                         the default), rather than the symbolic link itself\n  -h, --no-dereference   affect symbolic links instead of any referenced file\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -u, --user=USER        set user USER in the target security context\n  -r, --role=ROLE        set role ROLE in the target security context\n  -t, --type=TYPE        set type TYPE in the target security context\n  -l, --range=RANGE      set range RANGE in the target security context\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --no-preserve-root  do not treat '/' specially (the default)\n      --preserve-root    fail to operate recursively on '/'\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --reference=RFILE  use RFILE's security context rather than specifying\n                         a CONTEXT value\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -R, --recursive        operate on files and directories recursively\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -v, --verbose          output a diagnostic for every file processed\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nThe following options modify how a hierarchy is traversed when the -R\noption is also specified.  If more than one is specified, only the final\none takes effect.\n\n  -H                     if a command line argument is a symbolic link\n                         to a directory, traverse it\n  -L                     traverse every symbolic link to a directory\n                         encountered\n  -P                     do not traverse any symbolic links (default)\n\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    int64_t v1 = &g1; // bp-136, 0x402acb
    bool v2; // 0x4028e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402b50
    int64_t v6 = *(int64_t *)v5; // 0x402b54
    int64_t v7 = 6; // 0x402b5a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"chcon";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402b66
        char v11 = *(char *)v9; // 0x402b66
        char v12 = v11; // 0x402b66
        bool v13 = false; // 0x402b66
        while (v10 == v11) {
            // 0x402b5c
            v7--;
            int64_t v14 = v9 + v3; // 0x402b66
            int64_t v15 = v8 + v3; // 0x402b66
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
            // break -> 0x402b72
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 6;
    }
    // 0x402b72
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402c84;
        } else {
            // 0x402c6e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402cc3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402bd4;
            } else {
                goto lab_0x402c84;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402bd4;
        } else {
            // 0x402bba
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402cc3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402bd4;
            } else {
                goto lab_0x402bd4;
            }
        }
    }
  lab_0x402c84:
    // 0x402c84
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c14
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40291f
    exit(status);
    // UNREACHABLE
  lab_0x402bd4:
    // 0x402bd4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402c14
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40291f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402cf0 - 0x402cf8
int64_t function_402cf0(int64_t a1) {
    // 0x402cf0
    g42 = a1;
    int64_t result; // 0x402cf0
    return result;
}
// Address range: 0x402d00 - 0x402d08
int64_t function_402d00(int64_t a1) {
    // 0x402d00
    g41 = a1;
    int64_t result; // 0x402d00
    return result;
}
// Address range: 0x402d10 - 0x402dae
int64_t function_402d10(void) {
    // 0x402d10
    int32_t * err_num; // 0x402d26
    if ((int32_t)function_408530((int64_t)g30) == 0) {
        goto lab_0x402d3c;
    } else {
        // 0x402d26
        err_num = __errno_location();
        if (g41 == 0) {
            goto lab_0x402d53;
        } else {
            // 0x402d37
            if (*err_num != 32) {
                goto lab_0x402d53;
            } else {
                goto lab_0x402d3c;
            }
        }
    }
  lab_0x402d3c:;
    int64_t result = function_408530((int64_t)g32); // 0x402d43
    if ((int32_t)result == 0) {
        // 0x402d4c
        return result;
    }
    // 0x402d8e
    _exit(g20);
    // UNREACHABLE
  lab_0x402d53:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402d5f
    if (g42 == 0) {
        // 0x402d99
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402d73
        error(0, *err_num, "%s: %s", (char *)function_404820((int64_t)g42), v1);
    }
    // 0x402d8e
    _exit(g20);
    // UNREACHABLE
}
// Address range: 0x402db0 - 0x402e49
int64_t function_402db0(int64_t str) {
    // 0x402db0
    if (str == 0) {
        // 0x402e29
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402dbe
    int64_t result = (int64_t)found_char_pos; // 0x402dbe
    if (found_char_pos == NULL) {
        // 0x402e19
        g43 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402dc8
    if (v1 - str < 7) {
        // 0x402e19
        g43 = str;
        g31 = str;
        return result;
    }
    // 0x402dd8
    bool v2; // 0x402db0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402db0
    int64_t v5 = result - 6; // 0x402db0
    int64_t v6 = 7; // 0x402de6
    unsigned char v7 = *(char *)v5; // 0x402de6
    char v8 = *(char *)v4; // 0x402de6
    char v9 = v8; // 0x402de6
    bool v10 = false; // 0x402de6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402df0
    int64_t v13 = v1; // 0x402df0
    int64_t v14 = 3; // 0x402df0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402e19
        g43 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402e02
    char v16 = *(char *)v12; // 0x402e02
    char v17 = v16; // 0x402e02
    bool v18 = false; // 0x402e02
    while (v15 == v16) {
        // 0x402df2
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
    int64_t v20 = v1; // 0x402e0c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402e0e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x402e19
    g43 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402e50 - 0x402f42
int64_t function_402e50(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402e64
    int64_t result = (int64_t)v1; // 0x402e64
    if (result != a1) {
        // 0x402e71
        return result;
    }
    int64_t v2 = function_4099e0(); // 0x402e80
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402f36
    if (v3 == 85) {
        // 0x402e90
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402f28
            result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x402ebe
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x402ecb
        // 0x402e71
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402f28
        result2 = (int32_t)a2 != 9 ? (int64_t)&g13 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x402f0d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x402f1a
    // 0x402e71
    return result4;
}
// Address range: 0x402f50 - 0x402fa7
int64_t function_402f50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402f50
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402f98
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402fa7 - 0x404171
int64_t function_402fa7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402ff1
    int64_t v3 = 0; // 0x402ff1
    int64_t v4; // 0x402fa7
    int64_t v5; // 0x402fa7
    int64_t v6; // 0x402fa7
    int64_t v7; // 0x402fa7
    int64_t v8; // 0x402fa7
    int64_t v9; // 0x402fa7
    int64_t v10; // 0x402fa7
    int64_t v11; // 0x402fa7
    int64_t v12; // 0x402fa7
    int64_t v13; // 0x402fa7
    int64_t v14; // 0x402fa7
    int64_t v15; // 0x402fa7
    int64_t v16; // 0x402fa7
    int64_t v17; // 0x402fa7
    int64_t v18; // 0x402fa7
    int64_t result; // 0x402fa7
    int64_t v19; // 0x402fa7
    int32_t wc; // bp+132, 0x402fa7
    int64_t ps; // bp+136, 0x402fa7
    char v20; // 0x403560
    int64_t v21; // 0x403560
    int64_t v22; // 0x403908
    int64_t v23; // 0x402fa7
    int64_t v24; // 0x403927
    int32_t v25; // 0x402fa7
    while (true) {
      lab_0x402ff8_2:
        // 0x402ff8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402fa7
        int64_t v27; // 0x40302c
        while (true) {
          lab_0x402ff8:
            // 0x402ff8
            v5 = v26;
            bool v28 = v15 == v5; // 0x403003
            if (v15 == -1) {
                // 0x403005
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403013
            if (v28) {
                // break (via goto) -> 0x403778
                goto lab_0x403778;
            }
            // 0x40301c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g57 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40360b
                    if (v25 % 2 == 0) {
                        goto lab_0x403151;
                    }
                    // 0x403a2d
                    v26 = v5 + 1;
                    goto lab_0x402ff8;
                }
                case 7: {
                    goto lab_0x403151;
                }
                case 8: {
                    goto lab_0x403151;
                }
                case 9: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403151;
                }
                case 12: {
                    goto lab_0x403151;
                }
                case 13: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40311d;
                }
                case 36: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403151;
                }
                case 38: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403151;
                }
                case 44: {
                    goto lab_0x403151;
                }
                case 45: {
                    goto lab_0x403151;
                }
                case 46: {
                    goto lab_0x403151;
                }
                case 47: {
                    goto lab_0x403151;
                }
                case 48: {
                    goto lab_0x403151;
                }
                case 49: {
                    goto lab_0x403151;
                }
                case 50: {
                    goto lab_0x403151;
                }
                case 51: {
                    goto lab_0x403151;
                }
                case 52: {
                    goto lab_0x403151;
                }
                case 53: {
                    goto lab_0x403151;
                }
                case 54: {
                    goto lab_0x403151;
                }
                case 55: {
                    goto lab_0x403151;
                }
                case 56: {
                    goto lab_0x403151;
                }
                case 57: {
                    goto lab_0x403151;
                }
                case 58: {
                    goto lab_0x403151;
                }
                case 59: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403151;
                }
                case 66: {
                    goto lab_0x403151;
                }
                case 67: {
                    goto lab_0x403151;
                }
                case 68: {
                    goto lab_0x403151;
                }
                case 69: {
                    goto lab_0x403151;
                }
                case 70: {
                    goto lab_0x403151;
                }
                case 71: {
                    goto lab_0x403151;
                }
                case 72: {
                    goto lab_0x403151;
                }
                case 73: {
                    goto lab_0x403151;
                }
                case 74: {
                    goto lab_0x403151;
                }
                case 75: {
                    goto lab_0x403151;
                }
                case 76: {
                    goto lab_0x403151;
                }
                case 77: {
                    goto lab_0x403151;
                }
                case 78: {
                    goto lab_0x403151;
                }
                case 79: {
                    goto lab_0x403151;
                }
                case 80: {
                    goto lab_0x403151;
                }
                case 81: {
                    goto lab_0x403151;
                }
                case 82: {
                    goto lab_0x403151;
                }
                case 83: {
                    goto lab_0x403151;
                }
                case 84: {
                    goto lab_0x403151;
                }
                case 85: {
                    goto lab_0x403151;
                }
                case 86: {
                    goto lab_0x403151;
                }
                case 87: {
                    goto lab_0x403151;
                }
                case 88: {
                    goto lab_0x403151;
                }
                case 89: {
                    goto lab_0x403151;
                }
                case 90: {
                    goto lab_0x403151;
                }
                case 91: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403151;
                }
                case 94: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403151;
                }
                case 96: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403151;
                }
                case 98: {
                    goto lab_0x403151;
                }
                case 99: {
                    goto lab_0x403151;
                }
                case 100: {
                    goto lab_0x403151;
                }
                case 101: {
                    goto lab_0x403151;
                }
                case 102: {
                    goto lab_0x403151;
                }
                case 103: {
                    goto lab_0x403151;
                }
                case 104: {
                    goto lab_0x403151;
                }
                case 105: {
                    goto lab_0x403151;
                }
                case 106: {
                    goto lab_0x403151;
                }
                case 107: {
                    goto lab_0x403151;
                }
                case 108: {
                    goto lab_0x403151;
                }
                case 109: {
                    goto lab_0x403151;
                }
                case 110: {
                    goto lab_0x403151;
                }
                case 111: {
                    goto lab_0x403151;
                }
                case 112: {
                    goto lab_0x403151;
                }
                case 113: {
                    goto lab_0x403151;
                }
                case 114: {
                    goto lab_0x403151;
                }
                case 115: {
                    goto lab_0x403151;
                }
                case 116: {
                    goto lab_0x403151;
                }
                case 117: {
                    goto lab_0x403151;
                }
                case 118: {
                    goto lab_0x403151;
                }
                case 119: {
                    goto lab_0x403151;
                }
                case 120: {
                    goto lab_0x403151;
                }
                case 121: {
                    goto lab_0x403151;
                }
                case 122: {
                    goto lab_0x403151;
                }
                case 123: {
                    goto lab_0x4030f5;
                }
                case 124: {
                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4030f5;
                }
                case 126: {
                    goto lab_0x40311d;
                }
                default: {
                    goto lab_0x4034f5;
                }
            }
        }
      lab_0x4034f5:
        if (v23 != 1) {
            // 0x403860
            ps = 0;
            int64_t len = v15; // 0x403870
            if (v15 == -1) {
                // 0x403872
                len = strlen((char *)str);
            }
            // 0x40389e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4038ff:
                // 0x4038ff
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403904
                int64_t v30 = v29 + str;
                v24 = function_408390(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403e7a_2;
                    }
                    case -1: {
                        goto lab_0x403e7a_2;
                    }
                    case -2: {
                        // 0x403f5d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403f97
                            v19 = v18;
                            int64_t v31 = v18; // 0x403f9a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403fa7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403fa0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403e7a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403e7a_2;
                    }
                    case 1: {
                        goto lab_0x4038d0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40397c
                        char v34 = *(char *)v33; // 0x40398d
                        unsigned char v35; // 0x402fa7
                        if (v34 < 125) {
                            // 0x403998
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4039af
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403980
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40398d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403998
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4039af
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403980
                            v33++;
                        }
                        goto lab_0x4038d0;
                    }
                }
            }
            goto lab_0x403e7a_2;
        } else {
            // 0x403544
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403151;
        }
    }
  lab_0x403778:
    // 0x403778
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40407a
        if (v8 > result) {
            // 0x404083
            *(char *)(v12 + result) = 0;
        }
        // 0x4033a7
        return result;
    }
    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403151:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403160
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40336a_2;
        }
    }
    int64_t v39 = result; // 0x403261
    char v40 = v20; // 0x403261
    int64_t v41 = v38; // 0x403261
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403261
    int64_t v43 = v36; // 0x403261
    goto lab_0x4031dd;
  lab_0x40336a_2:
    // 0x4033a7
    return function_402f50(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403e7a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403151;
    } else {
        uint64_t v49 = v46 + v5; // 0x403a4e
        int64_t v50 = v5 + 1; // 0x403b31
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403b38
        char v52 = v20; // 0x403b38
        int64_t v53 = result; // 0x403b38
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403b01
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403b05
            int64_t v56 = v54 + 1; // 0x403b0a
            int64_t v57 = v51 + 1; // 0x403b31
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403afc
                v54 = v56;
                if (v47 > v54) {
                    // 0x403b01
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403b05
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
        goto lab_0x4031dd;
    }
  lab_0x4038d0:
    // 0x4038d0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4038ef
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4038f2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403e7a
        goto lab_0x403e7a_2;
    }
    goto lab_0x4038ff;
  lab_0x40311d:
    // 0x40311d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40336a_2;
    }
    goto lab_0x403151;
  lab_0x4030f5:;
    bool v60 = v15 == 1; // 0x403100
    if (v15 == -1) {
        // 0x403102
        v60 = *(char *)v1 == 0;
    }
    // 0x40310e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403151;
    } else {
        goto lab_0x40311d;
    }
  lab_0x4031dd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4031e2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4031e6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402ff8_2;
}
// Address range: 0x404180 - 0x40431e
int64_t function_404180(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404182
    int32_t * v3 = __errno_location(); // 0x40419c
    int32_t v4 = v2; // 0x4041b1
    if (v4 < 0) {
        abort();
        // UNREACHABLE
    }
    int64_t v5 = (int64_t)g22; // 0x4041a1
    int32_t v6 = *v3; // 0x4041ab
    int64_t v7 = v5; // 0x4041c1
    if (v2 >= (int64_t)*(int32_t *)&g25) {
        if (v4 == 0x7fffffff) {
            // 0x404319
            function_405230(a1);
            // UNREACHABLE
        }
        int64_t v8 = v2 + 1; // 0x4041d0
        int64_t v9 = 0x100000000 * v8 >> 28; // 0x4041d7
        int64_t v10; // 0x404180
        if (g22 == &g23) {
            int64_t v11 = function_405040(0, v9); // 0x4042fa
            int128_t v12 = __asm_movdqa(*(int128_t *)&g23); // 0x4042ff
            *(int64_t *)&g22 = v11;
            __asm_movups(*(int128_t *)v11, v12);
            v10 = v11;
        } else {
            int64_t v13 = function_405040(v5, v9); // 0x4041eb
            *(int64_t *)&g22 = v13;
            v10 = v13;
        }
        // 0x4041fa
        v7 = v10;
        int32_t v14 = *(int32_t *)&g25; // 0x4041fa
        int32_t v15 = v8; // 0x404201
        memset((int64_t *)(16 * (int64_t)v14 + v7), 0, 16 * (v15 - v14));
        *(int32_t *)&g25 = v15;
    }
    int64_t v16 = v7 + (v1 >> 28); // 0x404231
    int32_t v17 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40423b
    int64_t * v18 = (int64_t *)v16; // 0x40423e
    uint64_t v19 = *v18; // 0x40423e
    int64_t * v20 = (int64_t *)(v16 + 8); // 0x404241
    int64_t result = *v20; // 0x404241
    int64_t v21; // 0x404180
    uint64_t v22 = function_402f50(result, v19, a2, a3, v21 & 0xffffffff, v17); // 0x404264
    if (v19 > v22) {
        // 0x4042db
        *v3 = v6;
        return result;
    }
    int64_t v23 = v22 + 1; // 0x404277
    *v18 = v23;
    if (result != (int64_t)&g44) {
        // 0x404287
        free((int64_t *)result);
    }
    int64_t result2 = function_404fe0(v23); // 0x4042a1
    *v20 = result2;
    int64_t v24; // 0x404180
    function_402f50(result2, v23, a2, a3, (int64_t)*(int32_t *)&v24, v17);
    // 0x4042db
    *v3 = v6;
    return result2;
}
// Address range: 0x404320 - 0x404354
int64_t function_404320(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404327
    int64_t result = function_4051e0(a1 == 0 ? (int64_t)&g45 : a1, 56); // 0x404346
    return result;
}
// Address range: 0x404360 - 0x40436f
int64_t function_404360(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g45 : a1); // 0x40436c
    return result;
}
// Address range: 0x404370 - 0x40437f
int64_t function_404370(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g45 : a1; // 0x404378
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g45;
}
// Address range: 0x404380 - 0x4043b3
int64_t function_404380(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g45 + 8 : a1 + 8; // 0x404399
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40439e
    uint32_t v3 = *v2; // 0x40439e
    uint32_t v4 = (int32_t)a2 % 32; // 0x4043a2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4043c0 - 0x4043d3
int64_t function_4043c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g45 + 4 : a1 + 4); // 0x4043cc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4043e0 - 0x40440b
int64_t function_4043e0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g45 : a1; // 0x4043e8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404405
        abort();
        // UNREACHABLE
    }
    // 0x4043fc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g45;
}
// Address range: 0x404410 - 0x404482
int64_t function_404410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g45 : a5; // 0x404432
    int32_t * v2 = __errno_location(); // 0x40443b
    uint32_t v3 = *(int32_t *)v1; // 0x40445b
    int64_t result = function_402f50(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40446a
    return result;
}
// Address range: 0x404490 - 0x404571
int64_t function_404490(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g45 : a4; // 0x4044b2
    int32_t * v2 = __errno_location(); // 0x4044b8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4044d7
    int32_t * v4 = (int32_t *)v1; // 0x4044da
    int64_t v5 = function_402f50(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4044f5
    int64_t v6 = v5 + 1; // 0x4044fa
    int64_t result = function_404fe0(v6); // 0x40450f
    function_402f50(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404554
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40455d
    return result;
}
// Address range: 0x404580 - 0x40458a
int64_t function_404580(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404580
    return function_404490(a1, a2, 0, a3);
}
// Address range: 0x404590 - 0x404625
int64_t function_404590(void) {
    uint32_t v1 = *(int32_t *)&g25; // 0x404590
    int64_t v2 = v1; // 0x404590
    int64_t v3 = v2; // 0x4045a4
    if (v1 >= 2) {
        int64_t v4 = &g25;
        int64_t v5 = v4 + 16; // 0x4045c3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g58;
        while (v5 != (int64_t)g22 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4045c0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g58;
        }
    }
    int64_t v6 = v3; // 0x4045dd
    if (g23 != 0x610360) {
        // 0x4045df
        free((int64_t *)g23);
        g23 = 256;
        *(int64_t *)&g24 = (int64_t)&g44;
        v6 = &g58;
    }
    int64_t result = v6; // 0x404601
    if (g22 != &g23) {
        // 0x404603
        free(g22);
        *(int64_t *)&g22 = (int64_t)&g23;
        result = &g58;
    }
    // 0x404616
    *(int32_t *)&g25 = 1;
    return result;
}
// Address range: 0x404630 - 0x404641
int64_t function_404630(void) {
    // 0x404630
    int64_t v1; // 0x404630
    return function_404180(v1, v1, -1, (int64_t *)&g45);
}
// Address range: 0x404650 - 0x40465a
int64_t function_404650(void) {
    // 0x404650
    int64_t v1; // 0x404650
    return function_404180(v1, v1, v1, (int64_t *)&g45);
}
// Address range: 0x404660 - 0x404676
int64_t function_404660(int64_t a1) {
    // 0x404660
    return function_404180(0, a1, -1, (int64_t *)&g45);
}
// Address range: 0x404680 - 0x404692
int64_t function_404680(int64_t a1, int64_t a2) {
    // 0x404680
    return function_404180(0, a1, a2, (int64_t *)&g45);
}
// Address range: 0x4046a0 - 0x404708
int64_t function_4046a0(int32_t a1, int64_t a2, int64_t a3) {
    if ((int32_t)a2 == 10) {
        abort();
        // UNREACHABLE
    }
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4046b0
    return function_404180((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404710 - 0x404774
int64_t function_404710(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404720
    return function_404180((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404780 - 0x40478c
int64_t function_404780(int64_t a1, int64_t a2) {
    // 0x404780
    return function_4046a0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404790 - 0x40479f
int64_t function_404790(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404790
    return function_404710(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4047a0 - 0x404810
int64_t function_4047a0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g45); // 0x4047ad
    int128_t v2 = __asm_movdqa(g46); // 0x4047b5
    int128_t v3 = __asm_movdqa(g47); // 0x4047bd
    int64_t v4 = __asm_movaps_6(v1); // bp-72, 0x4047d2
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4047e8
    uint32_t v6 = *v5; // 0x4047e8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4047ed
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404180(0, a1, a2, &v4);
}
// Address range: 0x404810 - 0x40481d
int64_t function_404810(int64_t a1, int64_t a2) {
    // 0x404810
    return function_4047a0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404820 - 0x404831
int64_t function_404820(int64_t a1) {
    // 0x404820
    return function_4047a0(a1, -1, 58);
}
// Address range: 0x404840 - 0x40484a
int64_t function_404840(void) {
    // 0x404840
    int64_t v1; // 0x404840
    return function_4047a0(v1, v1, 58);
}
// Address range: 0x404850 - 0x4048be
int64_t function_404850(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40486a
    return function_404180((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4048c0 - 0x40492c
int64_t function_4048c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g45); // 0x4048c7
    int128_t v2 = __asm_movdqa(g46); // 0x4048cf
    int128_t v3 = __asm_movdqa(g47); // 0x4048d7
    __asm_movaps_6(v1);
    __asm_movaps_6(v2);
    __asm_movaps_6(v3);
    int64_t v4 = 10; // bp-72, 0x4048f9
    if (a2 == 0 || a3 == 0) {
        // 0x404927
        abort();
        // UNREACHABLE
    }
    // 0x40490a
    return function_404180(a1, a4, a5, &v4);
}
// Address range: 0x404930 - 0x404939
int64_t function_404930(void) {
    // 0x404930
    int64_t v1; // 0x404930
    return function_4048c0(v1, v1, v1, v1, -1);
}
// Address range: 0x404940 - 0x404957
int64_t function_404940(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404940
    return function_4048c0(0, a1, a2, a3, -1);
}
// Address range: 0x404960 - 0x404973
int64_t function_404960(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404960
    return function_4048c0(0, a1, a2, a3, a4);
}
// Address range: 0x404980 - 0x40498a
int64_t function_404980(void) {
    // 0x404980
    int64_t v1; // 0x404980
    return function_404180(v1, v1, v1, &g21);
}
// Address range: 0x404990 - 0x4049a2
int64_t function_404990(int64_t a1, int64_t a2) {
    // 0x404990
    return function_404180(0, a1, a2, &g21);
}
// Address range: 0x4049b0 - 0x4049c1
int64_t function_4049b0(int64_t a1, int64_t a2) {
    // 0x4049b0
    return function_404180(a1, a2, -1, &g21);
}
// Address range: 0x4049d0 - 0x4049e6
int64_t function_4049d0(int64_t a1) {
    // 0x4049d0
    return function_404180(0, a1, -1, &g21);
}
// Address range: 0x4049f0 - 0x404a3b
int64_t function_4049f0(int64_t * a1) {
    // 0x4049f0
    int64_t v1; // bp-152, 0x4049f0
    if (__lxstat(1, "/", (struct stat *)&v1) != 0) {
        // 0x404a30
        return 0;
    }
    int64_t result = (int64_t)a1;
    *(int64_t *)(result + 8) = v1;
    return result;
}
// Address range: 0x404a40 - 0x404e1d
int64_t function_404a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404ad8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404a5c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404a76
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404abb
    if (a6 < 10) {
        // 0x404aca
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404bc2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404e20 - 0x404e40
int64_t function_404e20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404e20
    if (a5 == 0) {
        // 0x404e3b
        return function_404a40(a1, a2, a3, a4, a5, 0, (int64_t)&g58);
    }
    int64_t v1 = 0; // 0x404e27
    v1++;
    int64_t v2 = v1; // 0x404e39
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404e30
        v1++;
        v2 = v1;
    }
    // 0x404e3b
    return function_404a40(a1, a2, a3, a4, a5, v2, (int64_t)&g58);
}
// Address range: 0x404e40 - 0x404ea0
int64_t function_404e40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404e40
    int64_t v3 = &v2; // 0x404e40
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404e73
    int64_t v6; // 0x404e5d
    int64_t * v7; // 0x404e7b
    int64_t v8; // 0x404e7b
    int64_t v9; // 0x404e87
    if (v5 < 48) {
        // 0x404e50
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404e93
            break;
        }
    } else {
        // 0x404e7b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404e93
            break;
        }
    }
    int64_t v10 = 10; // 0x404e71
    while (v4 != 9) {
        // 0x404e69
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404e50
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404e93
                break;
            }
        } else {
            // 0x404e7b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404e93
                break;
            }
        }
        // 0x404e69
        v10 = 10;
    }
    // 0x404e93
    return function_404a40(a1, a2, a3, a4, v3, v10, (int64_t)&g58);
}
// Address range: 0x404ea0 - 0x404f5c
int64_t function_404ea0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404ea0
    int64_t v1; // bp-168, 0x404ea0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404ea0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404ea0
    int64_t v8; // 0x404ea0
    int64_t v9; // bp-56, 0x404ea0
    int64_t v10; // 0x404f05
    int64_t v11; // 0x404f29
    if ((int32_t)v6 < 48) {
        // 0x404ef0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404f40
            break;
        }
    } else {
        // 0x404f22
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404f40
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404f1a
    int64_t v13 = 10; // 0x404f1a
    while (v5 != 9) {
        // 0x404f1c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404ef0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404f40
                break;
            }
        } else {
            // 0x404f22
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404f40
                break;
            }
        }
        // 0x404f12
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404f40
    int64_t v14; // bp-136, 0x404ea0
    int64_t result = function_404a40(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g58); // 0x404f4f
    return result;
}
// Address range: 0x404f60 - 0x404fd4
int64_t function_404f60(int64_t a1) {
    // 0x404f60
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404fc3
    return fputs_unlocked(v1, g30);
}
// Address range: 0x404fe0 - 0x404ffa
int64_t function_404fe0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404fe4
    if (size != 0 != (mem == NULL)) {
        // 0x404ff3
        return (int64_t)mem;
    }
    // 0x404ff5
    function_405230(size);
    // UNREACHABLE
}
// Address range: 0x405000 - 0x405021
int64_t function_405000(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405003
    int64_t v2 = v1; // 0x405003
    if (v2 < 0) {
        // 0x40501b
        function_405230(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405019
        return function_404fe0(v2);
    }
    // 0x40501b
    function_405230(v2);
    // UNREACHABLE
}
// Address range: 0x405030 - 0x405032
int64_t function_405030(void) {
    // 0x405030
    int64_t v1; // 0x405030
    return function_404fe0(v1);
}
// Address range: 0x405040 - 0x405076
int64_t function_405040(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405068
        free(v1);
        return (int32_t)&g58 ^ (int32_t)&g58;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405051
    if (a2 != 0 != (mem == NULL)) {
        // 0x405060
        return (int64_t)mem;
    }
    // 0x405071
    function_405230(a1);
    // UNREACHABLE
}
// Address range: 0x405080 - 0x4050a1
int64_t function_405080(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405083
    int64_t v2 = v1; // 0x405083
    if (v2 < 0) {
        // 0x40509b
        function_405230(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405099
        return function_405040(a1, v2);
    }
    // 0x40509b
    function_405230(a1);
    // UNREACHABLE
}
// Address range: 0x4050b0 - 0x405136
int64_t function_4050b0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40510b
            function_405230(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405040(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4050f3
    if (a2 == 0) {
        // 0x405118
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4050f8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40510b
        function_405230(a1);
        // UNREACHABLE
    }
    // 0x4050da
    *(int64_t *)a2 = v2;
    return function_405040(a1, v2 * a3);
}
// Address range: 0x405140 - 0x405190
int64_t function_405140(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405140
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40518a
            function_405230(a1);
            // UNREACHABLE
        }
        // 0x405162
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405040(a1, v1);
    }
    if (a2 == 0) {
        // 0x405175
        *(int64_t *)a2 = 128;
        return function_405040(0, 128);
    }
    // 0x405188
    if (a2 < 0) {
        // 0x40518a
        function_405230(a1);
        // UNREACHABLE
    }
    // 0x405162
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405040(a1, v1);
}
// Address range: 0x405190 - 0x4051a7
int64_t function_405190(int64_t a1, int64_t a2) {
    // 0x405190
    return (int64_t)memset((int64_t *)function_404fe0(a1), 0, (int32_t)a1);
}
// Address range: 0x4051b0 - 0x4051de
int64_t function_4051b0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4051b7
    if ((int64_t)v1 < 0) {
        // 0x4051d9
        function_405230(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x4051d9
        function_405230(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x4051ca
    if (mem != NULL) {
        // 0x4051d4
        return (int64_t)mem;
    }
    // 0x4051d9
    function_405230(nmemb);
    // UNREACHABLE
}
// Address range: 0x4051e0 - 0x405208
int64_t function_4051e0(int64_t a1, int64_t a2) {
    int64_t v1 = function_404fe0(a2); // 0x4051ef
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405210 - 0x405223
int64_t function_405210(int64_t str) {
    // 0x405210
    return function_4051e0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405230 - 0x405261
int64_t function_405230(int64_t a1) {
    // 0x405230
    error(g20, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405270 - 0x4052c0
int64_t function_405270(int64_t a1, int32_t a2) {
    // 0x405270
    int64_t v1; // 0x405270
    int64_t result = fts_open(a1, a2 | 512, v1); // 0x40527a
    if (result != 0) {
        // 0x405284
        return result;
    }
    // 0x405290
    if (*__errno_location() == 22) {
        // 0x4052a0
        __assert_fail("errno != EINVAL", "lib/xfts.c", 41, "xfts_open");
        return &g58;
    }
    // 0x40529a
    function_405230(a1);
    // UNREACHABLE
}
// Address range: 0x4052c0 - 0x4052e9
int64_t function_4052c0(int64_t a1, int64_t a2) {
    int64_t result = 1; // 0x4052c0
    int32_t v1; // 0x4052c0
    switch (v1 & 17) {
        case 17: {
            // 0x4052e0
            return *(int64_t *)(a2 + 88) != 0;
        }
        default: {
            // 0x4052d7
            result = 0;
        }
        case 16: {
            // 0x4052d7
            return result;
        }
    }
}
// Address range: 0x4052f0 - 0x40530a
int64_t function_4052f0(int64_t a1, int64_t a2) {
    // 0x4052f0
    if (*(int64_t *)(a1 + 8) == *(int64_t *)(a2 + 8)) {
        // 0x405300
        return a2 & -256 | (int64_t)(a1 == a2);
    }
    // 0x4052fc
    return 0;
}
// Address range: 0x405310 - 0x40531d
int64_t function_405310(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x405310
    return *(int64_t *)(a1 + 8) % a2;
}
// Address range: 0x405320 - 0x40532c
int64_t function_405320(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x405320
    return a1 % a2;
}
// Address range: 0x405330 - 0x40533a
int64_t function_405330(int64_t a1, int64_t a2) {
    // 0x405330
    return a2 & -256 | (int64_t)(bool)(a1 == a2);
}
// Address range: 0x405340 - 0x405362
int64_t function_405340(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a2 + 128); // 0x40534b
    uint64_t v2 = *(int64_t *)(a1 + 128); // 0x405352
    return v2 < v1 ? 0xffffffff : (int64_t)(v2 > v1);
}
// Address range: 0x405370 - 0x40551a
int64_t function_405370(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a2 + 120; // 0x405376
    int64_t v2 = a1 + 72; // 0x40537e
    uint64_t v3 = (int64_t)*(int32_t *)v2; // 0x40537e
    int64_t * v4 = (int64_t *)(a2 + 88); // 0x405381
    int64_t * v5 = (int64_t *)(a2 + 48); // 0x405386
    int64_t v6 = *v5; // 0x405386
    int32_t v7; // 0x405370
    if (*v4 != 0 || v3 % 2 == 0) {
        if ((v3 & 2) != 0) {
            goto lab_0x405390;
        } else {
            if ((char)a3 != 0) {
                goto lab_0x405390;
            } else {
                int32_t v8 = *(int32_t *)(a1 + 44); // 0x4053eb
                if (__fxstatat(1, v8, (char *)v6, (struct stat *)v1, 256) != 0) {
                    // 0x405440
                    v7 = *__errno_location();
                    goto lab_0x405447;
                } else {
                    goto lab_0x405407;
                }
            }
        }
    } else {
        goto lab_0x405390;
    }
  lab_0x405390:;
    struct stat * v9 = (struct stat *)v1; // 0x405398
    if (__xstat(1, (char *)v6, v9) == 0) {
        goto lab_0x405407;
    } else {
        int32_t * v10 = __errno_location(); // 0x4053a1
        int32_t v11 = *v10; // 0x4053a9
        v7 = v11;
        if (v11 == 2) {
            // 0x4053b4
            if (__lxstat(1, (char *)*v5, v9) == 0) {
                // 0x4053cd
                *v10 = 0;
                return 13;
            }
            // 0x4054f0
            v7 = *v10;
        }
        goto lab_0x405447;
    }
  lab_0x405407:;
    int32_t v12 = *(int32_t *)(a2 + 144) & 0xf000; // 0x40540d
    int64_t v13; // 0x405370
    switch ((int16_t)v12) {
        case 0x4000: {
            uint64_t v14 = *(int64_t *)(a2 + 136); // 0x405480
            v13 = -1;
            if (v14 >= 2) {
                // 0x40548d
                v13 = -1;
                if (*v4 >= 1) {
                    // 0x405494
                    v13 = (*(char *)v2 & 32) == 0 ? v14 - 2 : v14;
                }
            }
            // break -> 0x4054a2
            break;
        }
        case -0x6000: {
            // 0x405433
            return 12;
        }
        default: {
            // 0x405433
            return 4 * (int64_t)(v12 == 0x8000) + (v12 == 0x8000 ? 4 : 3);
        }
    }
    int64_t v15 = a2 + 264; // 0x4054a2
    *(int64_t *)(a2 + 104) = v13;
    if (*(char *)v15 != 46) {
        // 0x405433
        return 1;
    }
    // 0x4054b8
    if (*(char *)(a2 + 265) == 0) {
        // 0x405433
        return *v4 == 0 ? 1 : 5;
    }
    // 0x4054c1
    if ((*(int32_t *)v15 & 0xffff00) != 0x2e00) {
        // 0x405433
        return 1;
    }
    // 0x405433
    return *v4 == 0 ? 1 : 5;
  lab_0x405447:
    // 0x405447
    *(int32_t *)(a2 + 64) = v7;
    int64_t v16 = a2 + 128 & -8; // 0x405450
    *(int64_t *)v1 = 0;
    *(int64_t *)(a2 + 256) = 0;
    __asm_rep_stosq_memset((char *)v16, 0, (a2 + 264 - v16) / 8 % 0x20000000);
    return 10;
}
// Address range: 0x405520 - 0x40561d
int64_t function_405520(int64_t a1, int64_t result, uint64_t nmemb) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x405533
    int64_t * v2 = (int64_t *)(a1 + 16); // 0x405537
    int64_t v3 = *v2; // 0x405537
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40553b
    int64_t base = v3; // 0x40553f
    if (*v4 < nmemb) {
        uint64_t v5 = nmemb + 40; // 0x40554b
        *v4 = v5;
        if (v5 >= 0x2000000000000000) {
            // 0x4055f1
            free((int64_t *)v3);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        int64_t * mem = realloc((int64_t *)v3, 8 * (int32_t)v5); // 0x405560
        if (mem == NULL) {
            // 0x4055f1
            free((int64_t *)*v2);
            *v2 = 0;
            *v4 = 0;
            return result;
        }
        // 0x405571
        base = (int64_t)mem;
        *v2 = base;
    }
    int64_t v6 = base; // 0x40557b
    int64_t v7 = result; // 0x40557b
    if (result != 0) {
        *(int64_t *)v6 = v7;
        v7 += 16;
        v6 += 8;
        while (v7 != 0) {
            // 0x405580
            *(int64_t *)v6 = v7;
            v7 += 16;
            v6 += 8;
        }
    }
    // 0x405591
    qsort((int64_t *)base, (int32_t)nmemb, 8, (int32_t (*)(int64_t *, int64_t *))v1);
    int64_t v8 = *v2; // 0x4055a1
    int64_t result2 = *(int64_t *)v8; // 0x4055a8
    if (nmemb == 1) {
        // 0x4055da
        *(int64_t *)(result2 + 16) = 0;
        return result2;
    }
    int64_t v9 = v8 + 8; // 0x4055c3
    int64_t * v10 = (int64_t *)v9; // 0x4055c3
    *(int64_t *)(result2 + 16) = *v10;
    int64_t v11 = nmemb - 2; // 0x4055cf
    int64_t v12 = v11; // 0x4055d3
    int64_t v13 = v9; // 0x4055d3
    if (v11 != 0) {
        v13 += 8;
        int64_t * v14 = (int64_t *)v13; // 0x4055c3
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
    // 0x4055da
    *(int64_t *)(*(int64_t *)(8 * nmemb - 8 + v8) + 16) = 0;
    return result2;
}
// Address range: 0x405620 - 0x4056aa
int64_t function_405620(int64_t a1, int64_t a2, int64_t a3) {
    int32_t v1 = a3;
    int64_t * mem = malloc(v1 + 272 & -8); // 0x40563e
    int64_t result = (int64_t)mem; // 0x40563e
    if (mem != NULL) {
        int64_t v2 = result + 264; // 0x40564b
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
    // 0x40569c
    return result;
}
// Address range: 0x4056b0 - 0x4056f1
int64_t function_4056b0(int64_t a1) {
    // 0x4056b0
    if (a1 == 0) {
        // 0x4056e2
        int64_t result; // 0x4056b0
        return result;
    }
    int64_t dirp = *(int64_t *)(a1 + 24); // 0x4056c0
    int64_t v1 = *(int64_t *)(a1 + 16); // 0x4056c4
    if (dirp != 0) {
        // 0x4056cd
        closedir((struct __dirstream *)dirp);
    }
    // 0x4056d2
    free((int64_t *)a1);
    while (v1 != 0) {
        int64_t v2 = v1;
        dirp = *(int64_t *)(v2 + 24);
        v1 = *(int64_t *)(v2 + 16);
        if (dirp != 0) {
            // 0x4056cd
            closedir((struct __dirstream *)dirp);
        }
        // 0x4056d2
        free((int64_t *)v2);
    }
    // 0x4056e2
    return &g58;
}
// Address range: 0x405700 - 0x405739
int64_t function_405700(int64_t a1) {
    int64_t result = function_409940(a1); // 0x40571f
    if ((char)result != 0) {
        // 0x405728
        return result;
    }
    int32_t fd = function_409990(a1); // 0x405718
    if (fd >= 0) {
        // 0x405730
        close(fd);
    }
    int64_t result2 = function_409940(a1); // 0x40571f
    while ((char)result2 == 0) {
        // 0x405710
        fd = function_409990(a1);
        if (fd >= 0) {
            // 0x405730
            close(fd);
        }
        // 0x40571c
        result2 = function_409940(a1);
    }
    // 0x405728
    return result2;
}
// Address range: 0x405740 - 0x405851
int64_t function_405740(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x405748
    int64_t v2 = *v1; // 0x405748
    if ((*(char *)(v2 + 73) & 2) == 0) {
        // 0x405782
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 80); // 0x405756
    int64_t v4 = *v3; // 0x405756
    int64_t v5 = v4; // 0x405760
    int64_t result; // bp-152, 0x405740
    if (v4 == 0) {
        // 0x4057f0
        v5 = function_408f60(13, 0, 0x405320, 0x405330, 0x401920);
        *v3 = v5;
        if (v5 == 0) {
            // 0x40581c
            fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result);
            // 0x405782
            return 0;
        }
    }
    int64_t * v6 = (int64_t *)(a1 + 120); // 0x405766
    result = *v6;
    int64_t v7 = function_408cf0(v5, &result); // 0x405774
    if (v7 != 0) {
        // 0x405782
        return *(int64_t *)(v7 + 8);
    }
    // 0x405790
    if (fstatfs(*(int32_t *)(*v1 + 44), (struct statfs *)&result) != 0) {
        // 0x405782
        return 0;
    }
    int64_t * mem = malloc(16); // 0x4057ac
    if (mem == NULL) {
        // 0x405782
        return result;
    }
    int64_t v8 = (int64_t)mem; // 0x4057ac
    *(int64_t *)(v8 + 8) = result;
    *mem = *v6;
    if (function_409700(v5, v8) != 0) {
        // 0x4057d8
        return result;
    }
    // 0x405840
    free(mem);
    // 0x405782
    return result;
}
// Address range: 0x405860 - 0x4058c4
int64_t function_405860(int64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = function_405740(a1, a2); // 0x405864
    if (v1 == 0x9fa0) {
        // 0x405896
        return 0;
    }
    if (v1 <= 0x9fa0) {
        // 0x4058a0
        if (v1 != 0) {
            // 0x4058a7
            return v1 != 0x6969;
        }
        // 0x405896
        return 0;
    }
    // 0x405873
    switch (v1) {
        case 0x5346414f: {
            // 0x405896
            return 0;
        }
        case 0x58465342: {
            // 0x405896
            return 2;
        }
    }
    // 0x405896
    return v1 == 0x52654973 ? 2 : 1;
}
// Address range: 0x4058d0 - 0x405936
int64_t function_4058d0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 44); // 0x4058db
    int32_t fd = *v1; // 0x4058db
    int32_t v2 = a2; // 0x4058de
    if (fd == v2 == (fd != -100)) {
        // 0x405931
        abort();
        // UNREACHABLE
    }
    if ((char)a3 == 0) {
        // 0x4058eb
        if (fd >= 0 != ((*(char *)(a1 + 72) & 4) == 0)) {
            // 0x4058f5
            *v1 = v2;
            int64_t result; // 0x4058d0
            return result;
        }
        int32_t result2 = close(fd); // 0x405922
        *v1 = v2;
        return result2;
    }
    int64_t result3 = function_409950(a1 + 96, fd); // 0x405904
    uint32_t fd2 = (int32_t)result3; // 0x405909
    if (fd2 < 0) {
        // 0x4058f5
        *v1 = v2;
        return result3;
    }
    int32_t result4 = close(fd2); // 0x40590f
    *v1 = v2;
    return result4;
}
// Address range: 0x405940 - 0x40599a
int64_t function_405940(int64_t a1) {
    int32_t v1 = *(int32_t *)(a1 + 72); // 0x405949
    uint32_t v2 = v1 & 4; // 0x40594e
    if (v2 != 0) {
        // 0x405972
        function_405700(a1 + 96);
        return 0;
    }
    int64_t result; // 0x405940
    if ((v1 & 512) == 0) {
        // 0x405988
        result = fchdir(*(int32_t *)(a1 + 40)) != 0;
    } else {
        // 0x405958
        function_4058d0(a1, 0xffffff9c, 1);
        result = v2;
    }
    // 0x405972
    function_405700(a1 + 96);
    return result;
}
// Address range: 0x4059a0 - 0x405a0b
int64_t function_4059a0(int64_t a1, uint64_t a2, int64_t a3) {
    uint64_t v1 = a2 + 256 + a3; // 0x4059aa
    if (v1 < a2) {
        int64_t * v2 = (int64_t *)a1; // 0x4059d8
        free(v2);
        *v2 = 0;
        *__errno_location() = 36;
        return 0;
    }
    // 0x4059b7
    *(int64_t *)a2 = v1;
    int64_t * v3 = (int64_t *)a1; // 0x4059bd
    int64_t * mem = realloc(v3, (int32_t)v1); // 0x4059bd
    if (mem != NULL) {
        // 0x4059c7
        *v3 = (int64_t)mem;
        return 1;
    }
    // 0x4059f8
    free(v3);
    *v3 = 0;
    return (int32_t)&g58 ^ (int32_t)&g58;
}
// Address range: 0x405a10 - 0x405a6b
int64_t function_405a10(int32_t a1, int64_t a2) {
    if ((a1 & 258) != 0) {
        int64_t v1 = function_408f60(31, 0, 0x405310, 0x4052f0, 0x401920); // 0x405a33
        *(int64_t *)a2 = v1;
        // 0x405a41
        return v1 & -256 | (int64_t)(v1 != 0);
    }
    int64_t * mem = malloc(32); // 0x405a4d
    int64_t v2 = (int64_t)mem; // 0x405a4d
    *(int64_t *)a2 = v2;
    if (mem == NULL) {
        // 0x405a41
        return 0;
    }
    // 0x405a5f
    function_408590(v2);
    return 1;
}
// Address range: 0x405a70 - 0x405ab4
int64_t function_405a70(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x2000 * a2 & 0x20000 | 128 * a2 & 0x40000 | 0x90900; // 0x405a8a
    if ((a2 & 512) == 0) {
        // 0x405aa8
        return function_408620(a3, v1, (int32_t)v1);
    }
    // 0x405a98
    return function_409fb0((int64_t)a1, a3, (int32_t)v1, a3);
}
// Address range: 0x405ac0 - 0x405c86
int64_t function_405ac0(int64_t a1, int64_t a2, int64_t a3, int32_t a4) {
    int64_t v1 = a4;
    int64_t v2 = a3 & 0xffffffff; // 0x405acf
    int32_t * v3 = (int32_t *)(a1 + 72); // 0x405adc
    uint32_t v4 = *v3; // 0x405adc
    int64_t v5 = v4; // 0x405adc
    int32_t v6 = v4 & 4; // 0x405ae3
    int64_t v7; // 0x405ac0
    int64_t v8; // 0x405ac0
    int64_t v9; // 0x405ac0
    int64_t v10; // 0x405ac0
    int64_t v11; // 0x405ac0
    if (a4 == 0) {
        goto lab_0x405b60;
    } else {
        // 0x405aeb
        bool v12; // 0x405ac0
        int64_t v13 = v12 ? -1 : 1; // 0x405af8
        int64_t v14 = (int64_t)".."; // 0x405ac0
        int64_t v15 = v1; // 0x405ac0
        int64_t v16 = 3; // 0x405af8
        unsigned char v17 = *(char *)v15; // 0x405af8
        char v18 = *(char *)v14; // 0x405af8
        char v19 = v18; // 0x405af8
        bool v20 = false; // 0x405af8
        while (v17 == v18) {
            // 0x405aeb
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
            goto lab_0x405b60;
        } else {
            if (v6 != 0) {
                goto lab_0x405bd0;
            } else {
                // 0x405b0b
                v11 = v2;
                v7 = v2;
                v9 = 1;
                if ((int32_t)a3 >= 0) {
                    goto lab_0x405b72;
                } else {
                    // 0x405b13
                    v8 = v5;
                    v10 = 1;
                    if ((v5 & 512) == 0) {
                        goto lab_0x405bfe;
                    } else {
                        int64_t v22 = a1 + 96; // 0x405b20
                        int64_t v23 = function_409940(v22); // 0x405b2c
                        v8 = v5;
                        v10 = v23 & 0xffffffff;
                        if ((char)v23 != 0) {
                            goto lab_0x405bfe;
                        } else {
                            int64_t v24 = function_409990(v22); // 0x405b44
                            if ((int32_t)v24 < 0) {
                                // 0x405c48
                                v8 = (int64_t)*v3;
                                v10 = 1;
                                goto lab_0x405bfe;
                            } else {
                                // 0x405b54
                                v11 = v24 & 0xffffffff;
                                v7 = v24;
                                v9 = 1;
                                goto lab_0x405b72;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x405b60:
    if (v6 != 0) {
        goto lab_0x405bd0;
    } else {
        // 0x405b64
        v11 = v2;
        v7 = v2;
        v9 = 0;
        v8 = v5;
        v10 = 0;
        if ((int32_t)a3 < 0) {
            goto lab_0x405bfe;
        } else {
            goto lab_0x405b72;
        }
    }
  lab_0x405bd0:
    // 0x405bd0
    if ((v5 & 512) == 0) {
        // 0x405bdf
        return 0;
    }
    int32_t fd = a3; // 0x405bd9
    if (fd >= 0) {
        // 0x405c38
        close(fd);
        // 0x405bdf
        return 0;
    }
    // 0x405bdf
    return 0;
  lab_0x405bfe:;
    int64_t v25 = function_405a70(*(int32_t *)(a1 + 44), v8, v1); // 0x405c08
    v11 = v2;
    v7 = v25;
    v9 = v10;
    if ((int32_t)v25 < 0) {
        // 0x405bdf
        return 0xffffffff;
    }
    goto lab_0x405b72;
  lab_0x405b72:;
    int32_t fd2 = v7; // 0x405b77
    int64_t v26; // bp-200, 0x405ac0
    uint32_t v27 = __fxstat(1, fd2, (struct stat *)&v26); // 0x405b7f
    int64_t v28 = 0xffffffff; // 0x405b88
    if (v27 != 0) {
        goto lab_0x405bb3;
    } else {
        // 0x405b8a
        if (*(int64_t *)(a2 + 120) != v26) {
            goto lab_0x405ba3;
        } else {
            // 0x405b95
            int64_t v29; // 0x405ac0
            if (*(int64_t *)(a2 + 128) == v29) {
                // 0x405c20
                if ((*(char *)(a1 + 73) & 2) != 0) {
                    // 0x405c58
                    function_4058d0(a1, v7 & 0xffffffff, v9 % 256 ^ 1);
                    // 0x405bdf
                    return (int64_t)v27 & 0xffffffff;
                }
                // 0x405c27
                v28 = fchdir(fd2);
                goto lab_0x405bb3;
            } else {
                goto lab_0x405ba3;
            }
        }
    }
  lab_0x405bb3:
    // 0x405bb3
    if ((int32_t)v11 < 0) {
        int32_t * v30 = __errno_location(); // 0x405bb7
        close(fd2);
    }
    // 0x405bdf
    return v28 & 0xffffffff;
  lab_0x405ba3:
    // 0x405ba3
    *__errno_location() = 2;
    v28 = 0xffffffff;
    goto lab_0x405bb3;
}
// Address range: 0x405c90 - 0x405d3f
int64_t function_405c90(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) == 0) {
        int64_t result = function_4085a0(a2, a3 + 120); // 0x405d18
        if ((char)result == 0) {
            // 0x405d01
            return 1;
        }
        // 0x405d21
        *(int64_t *)a3 = a3;
        *(int16_t *)(a3 + 112) = 2;
        return result;
    }
    int64_t * mem = malloc(24); // 0x405ca7
    if (mem == NULL) {
        // 0x405d01
        return 0;
    }
    int64_t v1 = (int64_t)mem; // 0x405ca7
    *(int64_t *)(v1 + 16) = a3;
    *mem = *(int64_t *)(a3 + 120);
    *(int64_t *)(v1 + 8) = *(int64_t *)(a3 + 128);
    int64_t v2 = function_409700(a2, v1); // 0x405cd6
    if (v2 == v1) {
        // 0x405d01
        return 1;
    }
    // 0x405ce3
    free(mem);
    int64_t result2 = 0; // 0x405cee
    if (v2 != 0) {
        // 0x405cf0
        *(int16_t *)(a3 + 112) = 2;
        *(int64_t *)a3 = *(int64_t *)(v2 + 16);
        result2 = 1;
    }
    // 0x405d01
    return result2;
}
// Address range: 0x405d40 - 0x405dd6
int64_t function_405d40(int32_t a1, int64_t a2, int64_t a3) {
    if ((a1 & 258) != 0) {
        // 0x405d80
        free((int64_t *)function_409740(a2));
        return &g58;
    }
    int64_t result = *(int64_t *)(a3 + 8); // 0x405d4f
    if (result == 0) {
        // 0x405d79
        return 0;
    }
    // 0x405d58
    if (*(int64_t *)(result + 88) < 0) {
        // 0x405d79
        return result;
    }
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x405dbc
    int64_t result2 = result; // 0x405dc0
    if (*v1 == *(int64_t *)(a3 + 120)) {
        // 0x405dc2
        result2 = *(int64_t *)(result + 128);
        *v1 = *(int64_t *)(result + 120);
        *(int64_t *)a2 = result2;
    }
    // 0x405d79
    return result2;
}
// Address range: 0x405de0 - 0x406793
int64_t function_405de0(int64_t a1, int64_t a2) {
    int64_t v1 = 0x100000000 * a2 >> 32; // 0x405df4
    int64_t * dirp2 = (int64_t *)(a1 + 24); // 0x405df8
    int64_t dirp = *dirp2; // 0x405df8
    int64_t v2; // 0x405de0
    int32_t * v3; // 0x405de0
    int64_t v4; // 0x405de0
    int64_t v5; // 0x405de0
    int64_t v6; // 0x405de0
    int64_t v7; // 0x405de0
    int64_t v8; // 0x405de0
    int64_t v9; // 0x405de0
    char v10; // 0x405de0
    int64_t v11; // 0x405de0
    int64_t v12; // 0x405de0
    int64_t v13; // 0x406216
    int64_t v14; // 0x405de0
    int64_t v15; // 0x406255
    int32_t * v16; // 0x405de0
    int64_t v17; // 0x406262
    int32_t v18; // 0x406266
    if (dirp == 0) {
        // 0x4061d0
        v14 = a1 + 72;
        v16 = (int32_t *)v14;
        uint32_t v19 = *v16; // 0x4061d0
        uint64_t v20 = (int64_t)v19; // 0x4061d0
        v5 = 0;
        if ((v19 & 16) != 0) {
            // 0x4061db
            v5 = 0x20000;
            if (v20 % 2 != 0) {
                // 0x4063b0
                v5 = 0x20000 * (int64_t)(*(int64_t *)(a1 + 88) != 0);
            }
        }
        int64_t v21 = *(int64_t *)(a1 + 48); // 0x4061ef
        int64_t v22 = 0xffffff9c; // 0x406208
        if ((v20 & 516) == 512) {
            // 0x40620a
            v22 = (int64_t)*(int32_t *)(a1 + 44);
        }
        int64_t v23 = 128 * v20 & 0x40000 | v5 & 0xfff60000 | 0x90900; // 0x40620e
        v13 = function_409fb0(v22, v21, (int32_t)v23, v5);
        int32_t fd = v13; // 0x40621d
        if (fd < 0) {
            goto lab_0x406552;
        } else {
            struct __dirstream * v24 = fdopendir(fd); // 0x406227
            if (v24 == NULL) {
                int32_t * v25 = __errno_location(); // 0x40653c
                close(fd);
                goto lab_0x406552;
            } else {
                int16_t * v26 = (int16_t *)(a1 + 112); // 0x406235
                *dirp2 = (int64_t)v24;
                if (*v26 == 11) {
                    // 0x4065ec
                    *v26 = (int16_t)function_405370(a1, a1, 0);
                    v8 = a1;
                } else {
                    int32_t v27 = *v16; // 0x406245
                    v8 = v21;
                    if ((v27 & 256) != 0) {
                        int64_t v28 = a1 + 88; // 0x4065a0
                        function_405d40(v27, v28, a1);
                        function_405370(a1, a1, 0);
                        int64_t v29 = function_405c90(*v16, v28, a1); // 0x4065c6
                        v8 = v28;
                        if ((char)v29 == 0) {
                            // 0x4065d3
                            *__errno_location() = 12;
                          lab_0x406392:
                            // 0x406392
                            return 0;
                        }
                    }
                }
                // 0x406255
                v15 = a1 + 64;
                v17 = *(int64_t *)v15 == 0 ? 0x186a0 : -1;
                v18 = v1;
                if (v18 == 2) {
                    goto lab_0x406590;
                } else {
                    // 0x406276
                    if ((*v16 & 56) == 24) {
                        // 0x4063c2
                    } else {
                        // 0x406286
                        goto lab_0x406295;
                    }
                }
            }
        }
    } else {
        // 0x405e0a
        if (dirfd((struct __dirstream *)dirp) < 0) {
            // 0x40666d
            closedir((struct __dirstream *)*dirp2);
            *dirp2 = 0;
            if ((int32_t)v1 != 3) {
                // 0x406392
                return 0;
            }
            goto lab_0x406689;
        } else {
            int64_t v30 = a1 + 72;
            int32_t * v31 = (int32_t *)v30;
            v3 = v31;
            v2 = v30;
            v11 = -1;
            v7 = a2;
            if (*(int64_t *)(a1 + 64) == 0) {
                // 0x406578
                v4 = v30;
                v12 = 0x186a0;
                v10 = 1;
                v9 = a2;
                v6 = (int64_t)*v31;
                goto lab_0x405e34;
            } else {
                goto lab_0x405e2b;
            }
        }
    }
  lab_0x406340_2:;
    // 0x406340
    int64_t v32; // 0x405f64
    free((int64_t *)v32);
    int64_t v33; // 0x405de0
    function_4056b0(v33);
    closedir((struct __dirstream *)*dirp2);
    *dirp2 = 0;
    *(int16_t *)(a1 + 112) = 7;
    int32_t * v34; // 0x405de0
    *v34 = *v34 | 0x4000;
    return 0;
  lab_0x4060bc_2:;
    // 0x4060bc
    int64_t v35; // 0x405de0
    int64_t v36 = v35; // 0x4060c9
    int64_t v37; // 0x405de0
    int64_t v38 = v37; // 0x4060c9
    int64_t v39; // 0x405de0
    int64_t v40 = v39; // 0x4060c9
    char * v41; // 0x405de0
    char * v42 = v41; // 0x4060c9
    int64_t v43 = v35; // 0x4060c9
    int64_t result2 = v37; // 0x4060c9
    int64_t v44 = v39; // 0x4060c9
    char v45; // 0x405de0
    if (v45 == 0) {
        goto lab_0x406411;
    } else {
        goto lab_0x4060cf;
    }
  lab_0x405f4c:;
    // 0x405f4c
    char * str; // 0x405de0
    uint64_t len = (int64_t)strlen(str); // 0x405f53
    int64_t v46; // 0x405de0
    v32 = function_405620(a1, v46, len);
    if (v32 == 0) {
        goto lab_0x406340_2;
    }
    // 0x405f75
    int64_t v47; // 0x405de0
    int64_t v48 = v47; // 0x405f7a
    char v49; // 0x405de0
    char v50 = v49; // 0x405f7a
    int64_t v51; // 0x405de0
    int64_t v52 = v51; // 0x405f7a
    int64_t v53 = a1; // 0x405f7a
    int64_t v54; // 0x405de0
    int64_t v55; // 0x405de0
    int64_t v56; // 0x405e82
    int64_t * v57; // 0x405e82
    int64_t v58; // 0x405de0
    int64_t * v59; // 0x405de0
    if (v51 <= len) {
        char v60 = function_4059a0(v58, v56, v55 + 2 + len);
        if (v60 == 0) {
            goto lab_0x406340_2;
        }
        int64_t v61 = *v59; // 0x406040
        char v62 = v49; // 0x406049
        int64_t v63 = v47; // 0x406049
        if (v61 != *v59) {
            // 0x40604f
            v63 = (*v41 & 4) == 0 ? v47 : v61 + v54;
            v62 = v60;
        }
        // 0x406063
        v48 = v63;
        v50 = v62;
        v52 = *v57 - v54;
        v53 = v58;
    }
    uint64_t v64 = v54 + len; // 0x405f83
    int32_t * v65; // 0x405f1a
    if (v64 < len) {
        // 0x406740
        free((int64_t *)v32);
        function_4056b0(v33);
        closedir((struct __dirstream *)*dirp2);
        *dirp2 = 0;
        *(int16_t *)(a1 + 112) = 7;
        *v34 = *v34 | 0x4000;
        *v65 = 36;
        goto lab_0x406392;
    }
    int64_t v66 = v52;
    v45 = v50;
    v35 = v48;
    int64_t v67 = v32 + 264; // 0x405f93
    int64_t * v68; // 0x405e97
    *(int64_t *)(v32 + 88) = *v68 + 1;
    *(int64_t *)(v32 + 72) = v64;
    *(int64_t *)(v32 + 8) = v53;
    struct dirent * v69; // 0x405f2b
    *(int64_t *)(v32 + 128) = *(int64_t *)v69;
    int32_t v70 = *v34; // 0x405fb3
    int32_t v71; // 0x405de0
    if ((v70 & 4) != 0) {
        // 0x406080
        *(int64_t *)(v32 + 48) = *(int64_t *)(v32 + 56);
        int64_t v72 = *(int64_t *)(v32 + 96); // 0x40608d
        memmove((int64_t *)v35, (int64_t *)v67, (int32_t)v72 + 1);
        v71 = *v34;
    } else {
        // 0x405fbe
        *(int64_t *)(v32 + 48) = v67;
        v71 = v70;
    }
    int64_t v73 = v71;
    int64_t v74; // 0x405de0
    int64_t v75; // 0x405de0
    int64_t v76; // 0x405de0
    int64_t v77; // 0x405de0
    int64_t v78; // 0x405fdc
    int64_t v79; // 0x405fdc
    int64_t v80; // 0x405de0
    int64_t v81; // 0x405f2b
    if (*(int64_t *)v80 != 0 == (v73 & 1024) == 0) {
        // 0x4061a8
        *(int16_t *)(v32 + 112) = (int16_t)function_405370(a1, v32, 0);
        v76 = v32;
        goto lab_0x405ed7;
    } else {
        unsigned char v82 = *(char *)(v81 + 18); // 0x405fd2
        int64_t v83 = v82; // 0x405fda
        v78 = v83 + 0xffffffff;
        v79 = v78 & 0xffffffff;
        v77 = v83;
        if ((v73 & 24) == 24) {
            unsigned char v84 = v82 & -5;
            v77 = 0;
            if (v84 == 0) {
                goto lab_0x405fe8;
            } else {
                int64_t v85 = v84; // 0x406170
                *(int16_t *)(v32 + 112) = 11;
                if ((int32_t)v78 < 12) {
                    int32_t v86 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x406328
                    *(int32_t *)(v32 + 144) = v86;
                    v74 = 1;
                    v75 = v85;
                } else {
                    // 0x40618f
                    *(int32_t *)(v32 + 144) = 0;
                    v74 = 1;
                    v75 = v85;
                }
                goto lab_0x405ed0;
            }
        } else {
            goto lab_0x405fe8;
        }
    }
  lab_0x405ed7:;
    int64_t v87 = v76;
    *(int64_t *)(v32 + 16) = 0;
    int64_t v88; // 0x405de0
    v39 = v88 + 1;
    int64_t v89; // 0x405de0
    int64_t v90; // 0x405de0
    int64_t v91; // 0x405de0
    int64_t v92; // 0x405de0
    int64_t v93; // 0x405de0
    int64_t v94; // 0x405de0
    char v95; // 0x405de0
    int64_t v96; // 0x405de0
    if (v33 == 0) {
        // 0x4060a8
        v96 = v35;
        v95 = v45;
        v92 = v66;
        v93 = v32;
        v90 = v39;
        v91 = v87;
        v89 = v32;
        v37 = v32;
        if (v39 >= v12) {
            goto lab_0x4060bc_2;
        }
    } else {
        // 0x405eeb
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
            goto lab_0x4060bc_2;
        }
    }
    goto lab_0x405f03;
  lab_0x405fe8:
    // 0x405fe8
    *(int16_t *)(v32 + 112) = 11;
    if ((int32_t)v78 < 12) {
        int32_t v166 = *(int32_t *)(4 * v79 + (int64_t)&g8); // 0x405ffb
        *(int32_t *)(v32 + 144) = v166;
        v74 = 2;
        int64_t v167; // 0x405de0
        v75 = v167;
    } else {
        // 0x405ec0
        *(int32_t *)(v32 + 144) = 0;
        v74 = 2;
        v75 = v77;
    }
    goto lab_0x405ed0;
  lab_0x405f03:;
    int64_t v97 = *dirp2; // 0x405f0d
    int64_t dirp3 = v97; // 0x405f14
    int64_t v98 = v91; // 0x405f14
    int64_t v99 = v90; // 0x405f14
    int64_t v100 = v93; // 0x405f14
    int64_t v101 = v89; // 0x405f14
    int64_t v102 = v92; // 0x405f14
    char v103 = v95; // 0x405f14
    int64_t v104 = v96; // 0x405f14
    int64_t v105 = v96; // 0x405f14
    char v106 = v95; // 0x405f14
    int64_t v107 = v93; // 0x405f14
    int64_t v108 = v90; // 0x405f14
    if (v97 == 0) {
        goto lab_0x406406;
    }
    goto lab_0x405f1a;
  lab_0x405ed0:
    // 0x405ed0
    *(int64_t *)(v32 + 168) = v74;
    v76 = v75;
    goto lab_0x405ed7;
  lab_0x406552:
    // 0x406552
    *dirp2 = 0;
    if ((int32_t)v1 != 3) {
        // 0x406392
        return 0;
    }
    goto lab_0x406689;
  lab_0x406689:
    // 0x406689
    *(int16_t *)(a1 + 112) = 4;
    *(int32_t *)(a1 + 64) = *__errno_location();
    // 0x406392
    return 0;
  lab_0x405e2b:
    // 0x405e2b
    v4 = v2;
    v12 = v11;
    v10 = 1;
    v9 = v7;
    v6 = (int64_t)*v3;
    goto lab_0x405e34;
  lab_0x406590:
    // 0x406590
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v8;
    v6 = (int64_t)*v16;
    goto lab_0x405e34;
  lab_0x405e34:;
    int64_t v111 = *(int64_t *)v4; // 0x405e34
    char v112 = *(char *)(v111 - 1 + *(int64_t *)(a1 + 56)); // 0x405e4a
    v55 = v111 + (int64_t)(v112 == 47);
    int64_t v113 = 0; // 0x405e6b
    if ((v6 & 4) != 0) {
        int64_t v114 = *(int64_t *)(a1 + 32) + v55; // 0x405e72
        *(char *)v114 = 47;
        v113 = v114 + 1;
    }
    // 0x405e82
    v54 = v111 + (int64_t)(v112 != 47);
    v56 = a1 + 48;
    v57 = (int64_t *)v56;
    v68 = (int64_t *)(a1 + 88);
    int64_t v115 = *dirp2; // 0x405f0d
    if (v115 == 0) {
        // 0x405e82
        v42 = (char *)v4;
        v43 = v113;
        result2 = 0;
        v44 = 0;
        goto lab_0x406411;
    } else {
        // 0x405f1a
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
          lab_0x405f1a:
            // 0x405f1a
            v47 = v104;
            v49 = v103;
            v33 = v100;
            v88 = v99;
            int64_t v109 = v98;
            v65 = __errno_location();
            *v65 = 0;
            v69 = readdir((struct __dirstream *)dirp3);
            if (v69 == NULL) {
                // break -> 0x4064f0
                break;
            }
            // 0x405f3c
            v51 = v102;
            v94 = v101;
            v81 = (int64_t)v69;
            v46 = v81 + 19;
            str = (char *)v46;
            if ((*v41 & 32) != 0) {
                goto lab_0x405f4c;
            } else {
                // 0x405f42
                if (*str == 46) {
                    int64_t v110 = v81 + 20; // 0x406150
                    v96 = v47;
                    v95 = v49;
                    v92 = v51;
                    v93 = v33;
                    v90 = v88;
                    v91 = v109;
                    v89 = v94;
                    if (*(char *)v110 == 0) {
                        goto lab_0x405f03;
                    } else {
                        // 0x406156
                        v96 = v47;
                        v95 = v49;
                        v92 = v51;
                        v93 = v33;
                        v90 = v88;
                        v91 = v109;
                        v89 = v94;
                        if (*(int16_t *)v110 != 46) {
                            goto lab_0x405f4c;
                        } else {
                            goto lab_0x405f03;
                        }
                    }
                } else {
                    goto lab_0x405f4c;
                }
            }
        }
        int32_t v116 = *v65; // 0x4064f0
        if (v116 != 0) {
            // 0x406500
            *(int32_t *)v80 = v116;
            *(int16_t *)(a1 + 112) = (v88 | dirp) == 0 ? 4 : 7;
        }
        int64_t dirp4 = *dirp2; // 0x40651d
        v105 = v47;
        v106 = v49;
        v107 = v33;
        v108 = v88;
        if (dirp4 != 0) {
            // 0x40652a
            closedir((struct __dirstream *)dirp4);
            *dirp2 = 0;
            v105 = v47;
            v106 = v49;
            v107 = v33;
            v108 = v88;
        }
      lab_0x406406:
        // 0x406406
        v36 = v105;
        v38 = v107;
        v40 = v108;
        v42 = v41;
        v43 = v105;
        result2 = v107;
        v44 = v108;
        if (v106 != 0) {
            goto lab_0x4060cf;
        } else {
            goto lab_0x406411;
        }
    }
  lab_0x406295:;
    int64_t v117 = v13 & 0xffffffff; // 0x40621b
    int64_t v118 = v18 == 3;
    char v119 = 1;
    int64_t v120 = v117; // 0x40629a
    int16_t * v121; // 0x405de0
    int16_t v122; // 0x405de0
    int64_t v123; // 0x405de0
    int64_t v124; // 0x405de0
    int64_t v125; // 0x405de0
    int64_t v126; // 0x405de0
    int64_t v127; // 0x405de0
    if ((*(char *)(a1 + 73) & 2) != 0) {
        int64_t v128 = function_40a450(v117, 1030, 3, v5); // 0x406611
        int64_t v129 = v128 & 0xffffffff; // 0x406616
        v120 = v129;
        if ((int32_t)v128 >= 0) {
            goto lab_0x4062a0;
        } else {
            int16_t * v130 = (int16_t *)(a1 + 114);
            int64_t dirp5 = *dirp2; // 0x406625
            int16_t v131 = *v130 | 1;
            v121 = v130;
            v123 = v129;
            v122 = v131;
            v126 = 1030;
            v124 = dirp5;
            if (v119 != 0 == (v118 != 0)) {
                goto lab_0x4062cd;
            } else {
                // 0x40663a
                *v130 = v131;
                closedir((struct __dirstream *)dirp5);
                v127 = 1030;
                v125 = (int64_t)*v16;
                goto lab_0x40630f;
            }
        }
    } else {
        goto lab_0x4062a0;
    }
  lab_0x406411:
    // 0x406411
    if ((*v42 & 4) != 0) {
        int64_t v132 = *v57; // 0x40641d
        *(char *)(v43 + (int64_t)(v44 == 0 | v132 == v54)) = 0;
    }
    // 0x406436
    if (dirp != 0 || v10 == 0) {
        goto lab_0x4064a8;
    } else {
        // 0x406445
        if ((int32_t)v1 == 1 || v44 == 0) {
            // 0x406488
            int64_t v133; // 0x405de0
            if (*v68 != 0) {
                int64_t v134 = function_405ac0(a1, *(int64_t *)(a1 + 8), 0xffffffff, (int32_t)".."); // 0x40665e
                v133 = v134;
            } else {
                // 0x406493
                v133 = function_405940(a1);
            }
            // 0x4064a0
            if ((int32_t)v133 != 0) {
                // 0x4066a4
                *(int16_t *)(a1 + 112) = 7;
                int32_t * v135 = (int32_t *)v4; // 0x4066b3
                *v135 = *v135 | 0x4000;
                function_4056b0(result2);
                // 0x406392
                return 0;
            }
            goto lab_0x4064a8;
        } else {
            goto lab_0x406451;
        }
    }
  lab_0x4060cf:;
    int64_t v136 = *(int64_t *)(a1 + 8); // 0x4060cf
    int64_t v137 = *v59; // 0x4060d3
    if (v136 != 0) {
        int64_t * v138 = (int64_t *)(v136 + 48); // 0x4060e0
        int64_t v139 = *v138; // 0x4060e0
        int64_t * v140 = (int64_t *)(v136 + 56);
        if (v139 != v136 + 264) {
            // 0x4060f0
            *v138 = v139 + v137 - *v140;
        }
        // 0x4060fb
        *v140 = v137;
        int64_t v141 = *(int64_t *)(v136 + 16); // 0x4060ff
        int64_t v142 = v141; // 0x406106
        while (v141 != 0) {
            // 0x4060e0
            v138 = (int64_t *)(v142 + 48);
            v139 = *v138;
            v140 = (int64_t *)(v142 + 56);
            if (v139 != v142 + 264) {
                // 0x4060f0
                *v138 = v139 + v137 - *v140;
            }
            // 0x4060fb
            *v140 = v137;
            v141 = *(int64_t *)(v142 + 16);
            v142 = v141;
        }
    }
    // 0x406108
    v42 = v41;
    v43 = v36;
    result2 = v38;
    v44 = v40;
    if (*(int64_t *)(v38 + 88) >= 0) {
        int64_t * v143 = (int64_t *)(v38 + 48); // 0x40611e
        int64_t v144 = *v143; // 0x40611e
        int64_t * v145 = (int64_t *)(v38 + 56);
        if (v144 != v38 + 264) {
            // 0x40612e
            *v143 = v144 + v137 - *v145;
        }
        int64_t v146 = *(int64_t *)(v38 + 16); // 0x406139
        *v145 = v137;
        int64_t v147 = v146; // 0x406144
        if (v146 == 0) {
            // 0x406146
            v147 = *(int64_t *)(v38 + 8);
        }
        // 0x406110
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
                // 0x40612e
                *v143 = v144 + v137 - *v145;
            }
            // 0x406139
            v146 = *(int64_t *)(v148 + 16);
            *v145 = v137;
            v147 = v146;
            if (v146 == 0) {
                // 0x406146
                v147 = *(int64_t *)(v148 + 8);
            }
            // 0x406110
            v42 = v41;
            v43 = v36;
            result2 = v38;
            v44 = v40;
        }
    }
    goto lab_0x406411;
  lab_0x4062a0:;
    int64_t v149 = function_405ac0(a1, a1, v120, 0); // 0x4062aa
    v3 = v16;
    v2 = v14;
    v11 = v17;
    v7 = a1;
    int16_t * v150; // 0x405de0
    int16_t v151; // 0x405de0
    int64_t v152; // 0x405de0
    int64_t dirp6; // 0x405de0
    int64_t v153; // 0x405de0
    if ((int32_t)v149 == 0) {
        goto lab_0x405e2b;
    } else {
        int16_t * v154 = (int16_t *)(a1 + 114);
        int64_t v155 = *dirp2; // 0x4062bc
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
            goto lab_0x4062e2;
        } else {
            goto lab_0x4062cd;
        }
    }
  lab_0x4064a8:
    // 0x4064a8
    if (v44 == 0) {
        if ((int32_t)v1 != 3) {
            // 0x4064b8
            function_4056b0(result2);
            // 0x406392
            return 0;
        }
        int16_t * v157 = (int16_t *)(a1 + 112); // 0x406718
        switch (*v157) {
            case 4: {
            }
            case 7: {
                // 0x4064b8
                function_4056b0(result2);
                // 0x406392
                return 0;
            }
        }
        // 0x406731
        *v157 = 6;
        // 0x4064b8
        function_4056b0(result2);
        // 0x406392
        return 0;
    }
    goto lab_0x406451;
  lab_0x406451:;
    int64_t * v158 = (int64_t *)(a1 + 64); // 0x406451
    int64_t v159 = *v158; // 0x406451
    int64_t v160 = v159; // 0x40645c
    if (v44 >= 0x2711) {
        if (v159 != 0) {
            // 0x406467
            uint64_t v161; // 0x405de0
            int64_t v162; // 0x405de0
            return function_405520(a1, v162, v161);
        }
        // 0x4066ce
        int64_t v163; // 0x405de0
        switch (function_405740(a1, v163)) {
            case 0x1021994: {
            }
            case 0x6969: {
                // 0x4064d0
                v160 = *v158;
                // break -> 0x4064d8
                break;
            }
            default: {
                // 0x4066ee
                *v158 = 0x405340;
                int64_t result = function_405520(a1, result2, v44); // 0x406701
                *v158 = 0;
                // 0x406392
                return result;
            }
        }
    }
    // 0x4064d8
    if (v44 == 1 || v160 == 0) {
        // 0x406392
        return result2;
    }
    // 0x406467
    return function_405520(a1, result2, v44);
  lab_0x4062cd:
    // 0x4062cd
    *(int32_t *)v15 = *__errno_location();
    v150 = v121;
    v152 = v123;
    v151 = v122;
    v153 = v126;
    dirp6 = v124;
    goto lab_0x4062e2;
  lab_0x4062e2:
    // 0x4062e2
    *v150 = v151;
    closedir((struct __dirstream *)dirp6);
    uint32_t v164 = *v16; // 0x4062ec
    int64_t v165 = v164; // 0x4062ec
    *dirp2 = 0;
    v127 = v153;
    v125 = v165;
    if ((v164 & 512) != 0) {
        uint32_t fd2 = (int32_t)v152; // 0x406300
        v127 = v153;
        v125 = v165;
        if (fd2 >= 0) {
            // 0x406304
            close(fd2);
            v127 = v153;
            v125 = (int64_t)*v16;
        }
    }
    goto lab_0x40630f;
  lab_0x40630f:
    // 0x40630f
    *dirp2 = 0;
    v4 = v14;
    v12 = v17;
    v10 = 0;
    v9 = v127;
    v6 = v125;
    goto lab_0x405e34;
}
// Address range: 0x4067a0 - 0x406b39
int64_t fts_open(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = a2;
    if ((v1 & 18) == 0 || a2 >= 0x2000 || (v1 & 516) == 516) {
        // 0x406a40
        *__errno_location() = 22;
        // 0x406a2d
        return 0;
    }
    int64_t * mem = calloc(128, 1); // 0x4067e8
    int64_t result = (int64_t)mem; // 0x4067e8
    if (mem == NULL) {
        // 0x406a2d
        return result;
    }
    // 0x4067f9
    *(int64_t *)(result + 64) = a3;
    if ((v1 & 2) != 0) {
        // 0x406a80
        *(int32_t *)(result + 72) = a2 & -517 | 4;
    } else {
        // 0x406807
        *(int32_t *)(result + 72) = a2;
    }
    int32_t * v2 = (int32_t *)(result + 44); // 0x40680e
    *v2 = -100;
    int64_t v3 = a1; // 0x406824
    uint64_t v4 = 0;
    uint64_t len = (int64_t)strlen((char *)128); // 0x406828
    int64_t v5 = v4 < len ? len : v4; // 0x406830
    v3 += 8;
    int64_t str = *(int64_t *)v3; // 0x406838
    while (str != 0) {
        // 0x406828
        v4 = v5;
        len = (int64_t)strlen((char *)str);
        v5 = v4 < len ? len : v4;
        v3 += 8;
        str = *(int64_t *)v3;
    }
    uint64_t v6 = v5 + 1; // 0x406840
    int64_t v7 = result + 32; // 0x406859
    char v8 = function_4059a0(v7, result + 48, v6 > 0x1000 ? v6 : 0x1000); // 0x406862
    if (v8 == 0) {
        // 0x406a6b
        free(mem);
        // 0x406a2d
        return 0;
    }
    int64_t v9; // 0x4067a0
    int64_t v10; // 0x4067a0
    int64_t v11; // 0x4067a0
    char v12; // 0x4067a0
    char * v13; // 0x4067a0
    char * v14; // 0x40688d
    if (v7 == 0) {
        // 0x406a90
        v14 = NULL;
        v10 = 0;
        v13 = NULL;
        v9 = 0;
        if (a3 != 0) {
            goto lab_0x4068b3;
        } else {
            goto lab_0x4069dc;
        }
    } else {
        int64_t v15 = function_405620(result, (int64_t)&g10, 0); // 0x406885
        if (v15 == 0) {
            goto lab_0x406a62;
        } else {
            // 0x40689b
            v14 = (char *)v15;
            *(int64_t *)(v15 + 88) = -1;
            *(int64_t *)(v15 + 104) = -1;
            v10 = result;
            v12 = v8;
            v11 = result;
            if (a3 == 0) {
                goto lab_0x4068c0;
            } else {
                goto lab_0x4068b3;
            }
        }
    }
  lab_0x406958:;
    // 0x406958
    int64_t v16; // 0x4067a0
    int64_t v17; // 0x4068f9
    *(int64_t *)(v17 + 16) = v16;
    int64_t v18; // 0x4067a0
    int64_t v19 = v18; // 0x40695c
    int64_t v20 = v17; // 0x40695c
    goto lab_0x40695f;
  lab_0x40695f:;
    int64_t v21 = v20;
    int64_t v22; // 0x4067a0
    int64_t v23 = v22 + 1; // 0x40695f
    int64_t v24 = *(int64_t *)(8 * v23 + a1); // 0x406963
    int64_t v25 = v19; // 0x40696b
    int64_t v26 = v23; // 0x40696b
    int64_t v27 = v21; // 0x40696b
    int64_t v28 = v24; // 0x40696b
    if (v24 == 0) {
        // 0x4069c0
        v13 = v14;
        v9 = v21;
        if (a3 == 0 || v23 < 2) {
            goto lab_0x4069dc;
        } else {
            // 0x4069cb
            v13 = v14;
            v9 = function_405520(result, v21, v23);
            goto lab_0x4069dc;
        }
    }
    goto lab_0x40696d;
  lab_0x406af0:
    // 0x406af0
    *(int64_t *)(v18 + 16) = v17;
    v19 = v17;
    v20 = v16;
    goto lab_0x40695f;
  lab_0x4068b3:
    // 0x4068b3
    v12 = (char)(*(int32_t *)(result + 72) / 1024) % 2;
    v11 = v10;
    goto lab_0x4068c0;
  lab_0x4069dc:;
    int64_t v35 = function_405620(result, (int64_t)&g10, 0); // 0x4069e6
    *mem = v35;
    char * v33 = v13; // 0x4069f1
    int64_t v34 = v9; // 0x4069f1
    if (v35 != 0) {
        // 0x4069f3
        *(int64_t *)(v35 + 16) = v9;
        int32_t * v36 = (int32_t *)(result + 72); // 0x4069fc
        *(int16_t *)(v35 + 112) = 9;
        v33 = v13;
        v34 = v9;
        if ((char)function_405a10(*v36, result + 88) != 0) {
            uint32_t v37 = *v36; // 0x406a10
            if ((v37 & 516) == 0) {
                int32_t v38 = function_405a70(*v2, (int64_t)v37, (int64_t)"."); // 0x406b25
                *(int32_t *)(result + 40) = v38;
                if (v38 < 0) {
                    int32_t v39 = *v36; // 0x406b30
                    *v36 = v39 | 4;
                }
            }
            // 0x406a1f
            function_409920(result + 96, 0xffffffff);
            // 0x406a2d
            return result;
        }
    }
    goto lab_0x406a50;
  lab_0x406a62:
    // 0x406a62
    free((int64_t *)*(int64_t *)v7);
    // 0x406a6b
    free(mem);
    // 0x406a2d
    return 0;
  lab_0x4068c0:
    // 0x4068c0
    v13 = v14;
    v9 = 0;
    if (v11 == 0) {
        goto lab_0x4069dc;
    } else {
        // 0x40696d
        v25 = 0;
        v26 = 0;
        v27 = 0;
        v28 = v11;
        while (true) {
          lab_0x40696d:;
            int64_t str2 = v28;
            v16 = v27;
            v22 = v26;
            v18 = v25;
            int32_t len2 = strlen((char *)str2); // 0x406970
            int64_t v29 = len2; // 0x406970
            int64_t v30 = v29; // 0x406979
            if ((v1 & 0x1000) == 0 && len2 >= 3) {
                // 0x40698a
                v30 = v29;
                if (*(char *)(str2 - 1 + v29) == 47) {
                    int64_t v31 = v29;
                    v30 = v31;
                    while (*(char *)(str2 - 2 + v31) == 47) {
                        int64_t v32 = v31 - 1; // 0x4069ac
                        v30 = v32;
                        if (v31 == 2) {
                            // break -> 0x4068f0
                            break;
                        }
                        v31 = v32;
                        v30 = v31;
                    }
                }
            }
            // 0x4068f0
            v17 = function_405620(result, str2, v30);
            v33 = v14;
            v34 = v16;
            if (v17 == 0) {
                // break -> 0x406a50
                break;
            }
            // 0x40690a
            *(int64_t *)(v17 + 88) = 0;
            *(int64_t *)(v17 + 8) = (int64_t)v14;
            *(int64_t *)(v17 + 48) = v17 + 264;
            if (v12 == 0 || v16 == 0) {
                // 0x406ab0
                *(int16_t *)(v17 + 112) = (int16_t)function_405370(result, v17, 0);
                if (a3 != 0) {
                    goto lab_0x406958;
                } else {
                    // 0x406acb
                    *(int64_t *)(v17 + 16) = 0;
                    v19 = v17;
                    v20 = v17;
                    if (v16 != 0) {
                        goto lab_0x406af0;
                    } else {
                        goto lab_0x40695f;
                    }
                }
            } else {
                // 0x40693a
                *(int64_t *)(v17 + 168) = 2;
                *(int16_t *)(v17 + 112) = 11;
                if (a3 == 0) {
                    // 0x406ae8
                    *(int64_t *)(v17 + 16) = 0;
                    goto lab_0x406af0;
                } else {
                    goto lab_0x406958;
                }
            }
        }
        goto lab_0x406a50;
    }
  lab_0x406a50:
    // 0x406a50
    function_4056b0(v34);
    free((int64_t *)v33);
    goto lab_0x406a62;
}
// Address range: 0x406b40 - 0x406cb9
int64_t fts_close(int64_t a1) {
    if (a1 != 0) {
        int64_t v1 = a1; // 0x406b54
        int64_t v2 = a1; // 0x406b54
        if (*(int64_t *)(a1 + 88) >= 0) {
            while (true) {
                int64_t v3 = v1;
                int64_t v4 = *(int64_t *)(v3 + 16); // 0x406b6f
                int64_t v5; // 0x406b40
                if (v4 != 0) {
                    // 0x406b60
                    free((int64_t *)v3);
                    v5 = v4;
                    v2 = v4;
                    if (*(int64_t *)(v4 + 88) < 0) {
                        // break -> 0x406b8b
                        break;
                    }
                } else {
                    int64_t v6 = *(int64_t *)(v3 + 8); // 0x406b78
                    free((int64_t *)v3);
                    v5 = v6;
                    v2 = v6;
                    if (*(int64_t *)(v6 + 88) < 0) {
                        // break -> 0x406b8b
                        break;
                    }
                }
                // 0x406b6f
                v1 = v5;
            }
        }
        // 0x406b8b
        free((int64_t *)v2);
    }
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x406b93
    if (v7 != 0) {
        // 0x406b9c
        function_4056b0(v7);
    }
    // 0x406ba1
    free((int64_t *)*(int64_t *)(a1 + 16));
    free((int64_t *)*(int64_t *)(a1 + 32));
    int32_t * v8 = (int32_t *)(a1 + 72); // 0x406bb3
    int32_t v9 = *v8; // 0x406bb3
    int32_t * v10; // 0x406b40
    int32_t v11; // 0x406b40
    if ((v9 & 512) == 0) {
        // 0x406c10
        v11 = 0;
        if ((v9 & 4) != 0) {
            goto lab_0x406bc4;
        } else {
            int32_t * fd = (int32_t *)(a1 + 40); // 0x406c14
            if (fchdir(*fd) != 0) {
                int32_t * v12 = __errno_location(); // 0x406c70
                int32_t v13 = *v12; // 0x406c7b
                v11 = v13;
                v10 = v12;
                if (close(*fd) == 0 || v13 != 0) {
                    goto lab_0x406bc4;
                } else {
                    goto lab_0x406c92;
                }
            } else {
                // 0x406c20
                v11 = 0;
                if (close(*fd) == 0) {
                    goto lab_0x406bc4;
                } else {
                    // 0x406c2c
                    v10 = __errno_location();
                    goto lab_0x406c92;
                }
            }
        }
    } else {
        int32_t fd2 = *(int32_t *)(a1 + 44); // 0x406bbb
        v11 = 0;
        if (fd2 >= 0) {
            // 0x406c40
            v11 = 0;
            if (close(fd2) != 0) {
                // 0x406c4d
                v11 = *__errno_location();
            }
        }
        goto lab_0x406bc4;
    }
  lab_0x406bc4:
    // 0x406bc4
    function_405700(a1 + 96);
    int64_t v14 = *(int64_t *)(a1 + 80); // 0x406bcd
    if (v14 != 0) {
        // 0x406bd6
        function_4091a0(v14);
    }
    int64_t v15 = *(int64_t *)(a1 + 88); // 0x406bdb
    if ((*v8 & 258) == 0) {
        // 0x406c60
        free((int64_t *)v15);
    } else {
        if (v15 != 0) {
            // 0x406bed
            function_4091a0(v15);
        }
    }
    // 0x406bf2
    free((int64_t *)a1);
    int64_t result = v11; // 0x406bfc
    if (v11 != 0) {
        // 0x406ca8
        *__errno_location() = v11;
        result = 0xffffffff;
    }
    // 0x406c02
    return result;
  lab_0x406c92:
    // 0x406c92
    v11 = *v10;
    goto lab_0x406bc4;
}
// Address range: 0x406cc0 - 0x407419
int64_t fts_read(int64_t result) {
    // 0x406cc0
    if (result == 0) {
        // 0x406dea
        return 0;
    }
    int32_t * v1 = (int32_t *)(result + 72); // 0x406cd4
    uint32_t v2 = *v1; // 0x406cd4
    if ((v2 & 0x4000) != 0) {
        // 0x406dea
        return 0;
    }
    int16_t * v3 = (int16_t *)(result + 116); // 0x406ce0
    int16_t v4 = *v3; // 0x406ce0
    *v3 = 3;
    if (v4 == 1) {
        // 0x4070b0
        *(int16_t *)(result + 112) = (int16_t)function_405370(result, result, 0);
        // 0x406dea
        return result;
    }
    int16_t * v5 = (int16_t *)(result + 112); // 0x406cfa
    int16_t v6 = *v5; // 0x406cfa
    int64_t v7; // 0x406cc0
    int64_t v8; // 0x406cc0
    int64_t v9; // 0x406cc0
    int64_t v10; // 0x406cc0
    int64_t v11; // 0x406cc0
    int64_t v12; // 0x406cc0
    int64_t v13; // 0x406cc0
    if (v4 == 2) {
        if ((v6 || 1) == 13) {
            int16_t v14 = function_405370(result, result, 1); // 0x40705a
            *v5 = v14;
            if (v14 == 1) {
                uint32_t v15 = *v1; // 0x407340
                if ((v15 & 4) == 0) {
                    int64_t v16 = v15; // 0x407340
                    int32_t v17 = *(int32_t *)(result + 44); // 0x4073b3
                    int32_t v18 = function_405a70(v17, v16, (int64_t)"."); // 0x4073c2
                    *(int32_t *)(result + 68) = v18;
                    if (v18 < 0) {
                        int32_t v19 = *__errno_location(); // 0x4073ee
                        *v5 = 7;
                        *(int32_t *)(result + 64) = v19;
                        *(int64_t *)result = result;
                        // 0x406dea
                        return result;
                    }
                    int16_t * v20 = (int16_t *)(result + 114); // 0x4073c9
                    *v20 = *v20 | 2;
                    v7 = result;
                    v10 = (int64_t)".";
                    v12 = v16;
                    goto lab_0x406ff7;
                } else {
                    // 0x40734b
                    *(int64_t *)result = result;
                    v8 = result;
                    goto lab_0x40700e;
                }
            } else {
                // 0x407068
                *(int64_t *)result = result;
                v11 = 1;
                v9 = result;
                v13 = result;
                if (v14 != 11) {
                    // 0x406dea
                    return result;
                }
                goto lab_0x407080;
            }
        } else {
            if (v6 != 1) {
                goto lab_0x406d40;
            } else {
                goto lab_0x406e17;
            }
        }
    } else {
        if (v6 != 1) {
            goto lab_0x406d40;
        } else {
            if (v4 != 4) {
                goto lab_0x406e17;
            } else {
                goto lab_0x406eb2;
            }
        }
    }
  lab_0x406d40:;
    int64_t * v21 = (int64_t *)result;
    int64_t v22 = result;
    int64_t v23 = *(int64_t *)(v22 + 16); // 0x406d40
    int64_t result2; // 0x406cc0
    int64_t v24; // 0x406cc0
    int64_t v25; // 0x406f10
    while (v23 != 0) {
        // 0x406d18
        *v21 = v23;
        free((int64_t *)v22);
        if (*(int64_t *)(v23 + 88) == 0) {
            // 0x406f00
            if ((int32_t)function_405940(result) != 0) {
                // 0x40729f
                *v1 = *v1 | 0x4000;
                result2 = 0;
                return result2;
            } else {
                // 0x406f10
                v25 = result + 88;
                int64_t v26 = *(int64_t *)v25; // 0x406f10
                if ((*v1 & 258) == 0) {
                    // 0x4072ad
                    free((int64_t *)v26);
                    goto lab_0x406f2e;
                } else {
                    if (v26 == 0) {
                        goto lab_0x406f2e;
                    } else {
                        // 0x406f29
                        function_4091a0(v26);
                        goto lab_0x406f2e;
                    }
                }
            }
        }
        int16_t * v27 = (int16_t *)(v23 + 116);
        int16_t v28 = *v27; // 0x406d2f
        if (v28 != 4) {
            // 0x406fb0
            v24 = v23;
            if (v28 == 2) {
                int16_t v29 = function_405370(result, v23, 1); // 0x4072d4
                int16_t * v30 = (int16_t *)(v23 + 112); // 0x4072d4
                *v30 = v29;
                if (v29 == 1) {
                    uint32_t v31 = *v1; // 0x407357
                    if ((v31 & 4) != 0) {
                        // 0x4072de
                        *v27 = 3;
                        v24 = v23;
                        goto lab_0x406fba;
                    } else {
                        int32_t v32 = *(int32_t *)(result + 44); // 0x407366
                        int32_t v33 = function_405a70(v32, (int64_t)v31, (int64_t)"."); // 0x407375
                        *(int32_t *)(v23 + 68) = v33;
                        if (v33 < 0) {
                            int32_t v34 = *__errno_location(); // 0x40740b
                            *v30 = 7;
                            *(int32_t *)(v23 + 64) = v34;
                            // 0x4072de
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x406fba;
                        } else {
                            int16_t * v35 = (int16_t *)(v23 + 114); // 0x407380
                            *v35 = *v35 | 2;
                            // 0x4072de
                            *v27 = 3;
                            v24 = v23;
                            goto lab_0x406fba;
                        }
                    }
                } else {
                    // 0x4072de
                    *v27 = 3;
                    v24 = v23;
                    goto lab_0x406fba;
                }
            } else {
                goto lab_0x406fba;
            }
        }
        v22 = v23;
        v23 = *(int64_t *)(v22 + 16);
    }
    int64_t * v36 = (int64_t *)(v22 + 8); // 0x406d49
    int64_t v37 = *v36; // 0x406d49
    int64_t result6 = v37; // 0x406d52
    if (*(int64_t *)(v37 + 24) != 0) {
        // 0x407260
        *v21 = v37;
        *(char *)(*(int64_t *)(result + 32) + *(int64_t *)(v37 + 72)) = 0;
        int64_t v38 = function_405de0(result, 3); // 0x407279
        if (v38 != 0) {
            // 0x40730f
            free((int64_t *)v22);
            v24 = v38;
            goto lab_0x406fba;
        } else {
            // 0x40728a
            if ((*(char *)(result + 73) & 64) != 0) {
                // 0x406dea
                return 0;
            }
            // 0x407296
            result6 = *v36;
            goto lab_0x406d58;
        }
    } else {
        goto lab_0x406d58;
    }
  lab_0x406e17:;
    int64_t v39 = v2; // 0x406cd4
    if ((v39 & 64) == 0) {
        goto lab_0x406e2b;
    } else {
        // 0x406e1c
        if (*(int64_t *)(result + 120) != *(int64_t *)(result + 24)) {
            goto lab_0x406eb2;
        } else {
            goto lab_0x406e2b;
        }
    }
  lab_0x406d58:
    // 0x406d58
    *v21 = result6;
    free((int64_t *)v22);
    int64_t * v40 = (int64_t *)(result6 + 88); // 0x406d64
    if (*v40 == -1) {
        // 0x40717f
        free((int64_t *)result6);
        *__errno_location() = 0;
        *v21 = 0;
        // 0x406dea
        return 0;
    }
    // 0x406d6f
    *(char *)(*(int64_t *)(result6 + 72) + *(int64_t *)(result + 32)) = 0;
    if (*v40 == 0) {
        // 0x4071af
        if ((int32_t)function_405940(result) == 0) {
            goto lab_0x406da6;
        } else {
            goto lab_0x4071bf;
        }
    } else {
        uint16_t v41 = *(int16_t *)(result6 + 114); // 0x406d92
        if ((v41 & 2) != 0) {
            int32_t v42 = *v1; // 0x407135
            int32_t * v43 = (int32_t *)(result6 + 68); // 0x40713a
            uint32_t fd = *v43; // 0x40713a
            int32_t fd2 = fd; // 0x40713f
            if ((v42 & 4) == 0) {
                if ((v42 & 512) == 0) {
                    // 0x40731c
                    if (fchdir(fd) != 0) {
                        // 0x407325
                        *(int32_t *)(result6 + 64) = *__errno_location();
                        *v1 = *v1 | 0x4000;
                    }
                    // 0x407338
                    fd2 = *v43;
                } else {
                    // 0x40714a
                    function_4058d0(result, (int64_t)fd, 1);
                    fd2 = *v43;
                }
            }
            // 0x40715c
            close(fd2);
            goto lab_0x406da6;
        } else {
            if (v41 % 2 == 0) {
                int64_t v44 = *(int64_t *)(result6 + 8); // 0x4072ec
                if ((int32_t)function_405ac0(result, v44, 0xffffffff, (int32_t)"..") == 0) {
                    goto lab_0x406da6;
                } else {
                    goto lab_0x4071bf;
                }
            } else {
                goto lab_0x406da6;
            }
        }
    }
  lab_0x406eb2:
    // 0x406eb2
    if ((*(char *)(result + 114) & 2) != 0) {
        // 0x4072b7
        close(*(int32_t *)(result + 68));
    }
    int64_t * v45 = (int64_t *)(result + 8); // 0x406ebc
    int64_t v46 = *v45; // 0x406ebc
    if (v46 != 0) {
        // 0x406ec6
        function_4056b0(v46);
        *v45 = 0;
    }
    // 0x406ed4
    *v5 = 6;
    function_405d40(*v1, result + 88, result);
    // 0x406dea
    return result;
  lab_0x407080:;
    int64_t result5 = v9;
    int64_t result3 = result5; // 0x40708b
    if (*(int64_t *)(result5 + 168) != 2) {
        // 0x406dea
        return result3;
    }
    int64_t v47 = *(int64_t *)(result5 + 8); // 0x4071e7
    int64_t * v48 = (int64_t *)(v47 + 104); // 0x4071eb
    int64_t v49; // 0x406cc0
    int64_t v50; // 0x406cc0
    if (*v48 != 0) {
        goto lab_0x407203;
    } else {
        // 0x4071f2
        if ((*v1 & 24) == 24) {
            // 0x407399
            if ((int32_t)function_405860(v47, v13, v11) != 2) {
                goto lab_0x407203;
            } else {
                // 0x4073aa
                v49 = (int64_t)*(int16_t *)(result5 + 112);
                v50 = result5;
                goto lab_0x407001;
            }
        } else {
            goto lab_0x407203;
        }
    }
  lab_0x406e2b:;
    int64_t * v51 = (int64_t *)(result + 8); // 0x406e2b
    int64_t v52 = *v51; // 0x406e2b
    int64_t v53; // 0x406cc0
    if (v52 == 0) {
        goto lab_0x4070d9;
    } else {
        if ((v39 & 0x2000) != 0) {
            // 0x4070c3
            *v1 = v2 & -0x2001;
            function_4056b0(v52);
            *v51 = 0;
            goto lab_0x4070d9;
        } else {
            int64_t v54 = *(int64_t *)(result + 48); // 0x406e42
            if ((int32_t)function_405ac0(result, result, 0xffffffff, (int32_t)v54) == 0) {
                // 0x407166
                v53 = *v51;
            } else {
                int32_t * v55 = __errno_location(); // 0x406e5e
                int64_t v56 = *v51; // 0x406e63
                int16_t * v57 = (int16_t *)(result + 114); // 0x406e6a
                *v57 = *v57 | 1;
                *(int32_t *)(result + 64) = *v55;
                v53 = 0;
                if (v56 != 0) {
                    *(int64_t *)(v56 + 48) = *(int64_t *)(*(int64_t *)(v56 + 8) + 48);
                    int64_t v58 = *(int64_t *)(v56 + 16); // 0x406e8c
                    int64_t v59 = v58; // 0x406e93
                    v53 = v56;
                    while (v58 != 0) {
                        int64_t v60 = *(int64_t *)(*(int64_t *)(v59 + 8) + 48); // 0x406e84
                        *(int64_t *)(v59 + 48) = v60;
                        v58 = *(int64_t *)(v59 + 16);
                        v59 = v58;
                        v53 = v56;
                    }
                }
            }
            goto lab_0x406e95;
        }
    }
  lab_0x406ff7:;
    uint16_t v61 = *(int16_t *)(v7 + 112);
    *(int64_t *)result = v7;
    v49 = v61;
    v50 = v7;
    v11 = v10;
    v9 = v7;
    v13 = v12;
    if (v61 == 11) {
        goto lab_0x407080;
    } else {
        goto lab_0x407001;
    }
  lab_0x40700e:;
    int64_t v62 = v8; // 0x407013
    if (*(int64_t *)(v8 + 88) != 0) {
        goto lab_0x40701e;
    } else {
        goto lab_0x407015;
    }
  lab_0x407203:;
    int64_t v63 = function_405370(result, result5, 0); // 0x40720b
    int16_t v64 = v63; // 0x407216
    *(int16_t *)(result5 + 112) = v64;
    v49 = v63;
    v50 = result5;
    if ((*(int32_t *)(result5 + 144) & 0xf000) != 0x4000) {
        goto lab_0x407001;
    } else {
        // 0x40722c
        if (*(int64_t *)(result5 + 88) == 0) {
            // 0x40738a
            result3 = result5;
            if (v64 != 1) {
                int64_t v65 = result3;
                result2 = v65;
                int64_t result4 = result2;
                return result4;
            }
            goto lab_0x407015;
        } else {
            uint64_t v66 = *v48 - 1; // 0x40723b
            if (v66 < 0xfffffffffffffffe) {
                // 0x4073da
                *v48 = v66;
            }
            // 0x407249
            v62 = result5;
            if (v64 != 1) {
                // 0x406dea
                return result5;
            }
            goto lab_0x40701e;
        }
    }
  lab_0x4070d9:;
    int64_t v67 = function_405de0(result, 3); // 0x4070e1
    *v51 = v67;
    v53 = v67;
    if (v67 == 0) {
        int32_t v68 = *v1; // 0x4070f7
        if ((v68 & 0x4000) != 0) {
            // 0x406dea
            return 0;
        }
        // 0x407108
        if (*(int32_t *)(result + 64) == 0) {
            // 0x407123
            function_405d40(v68, result + 88, result);
            result2 = result;
          lab_0x406dea:
            // 0x406dea
            return result2;
        }
        // 0x407111
        if (*v5 != 4) {
            // 0x407118
            *v5 = 7;
        }
        // 0x407123
        function_405d40(v68, result + 88, result);
        // 0x406dea
        return result;
    }
    goto lab_0x406e95;
  lab_0x406fba:;
    int64_t v69 = *(int64_t *)(v24 + 8); // 0x406fba
    int64_t v70 = *(int64_t *)(v69 + 72); // 0x406fbe
    char v71 = *(char *)(v70 - 1 + *(int64_t *)(v69 + 56)); // 0x406fca
    int64_t v72 = *(int64_t *)(result + 32) + v70 + (int64_t)(v71 == 47); // 0x406fd3
    *(char *)v72 = 47;
    int64_t v73 = *(int64_t *)(v24 + 96) + 1; // 0x406fe3
    int64_t v74 = v24 + 264; // 0x406fe7
    memmove((int64_t *)(v72 + 1), (int64_t *)v74, (int32_t)v73);
    v7 = v24;
    v10 = v73;
    v12 = v74;
    goto lab_0x406ff7;
  lab_0x406da6:;
    int64_t v75 = (int64_t)*v1; // 0x406dab
    int64_t v76 = v75; // 0x406db0
    int32_t * v77; // 0x406cc0
    int64_t v78; // 0x406cc0
    if (*(int16_t *)(result6 + 112) == 2) {
        goto lab_0x406dd8;
    } else {
        // 0x406da6
        v77 = (int32_t *)(result6 + 64);
        v78 = v75;
        goto lab_0x406db2;
    }
  lab_0x4071bf:;
    int32_t v79 = *__errno_location(); // 0x4071c4
    int32_t * v80 = (int32_t *)(result6 + 64);
    *v80 = v79;
    uint32_t v81 = *v1 | 0x4000; // 0x4071c9
    *v1 = v81;
    if (*(int16_t *)(result6 + 112) == 2) {
        // 0x406dea
        return 0;
    }
    // 0x4071dd
    v77 = v80;
    v78 = v81;
    goto lab_0x406db2;
  lab_0x407001:
    // 0x407001
    result2 = v50;
    v8 = v50;
    if ((int16_t)v49 != 1) {
        // 0x406dea
        return result2;
    }
    goto lab_0x40700e;
  lab_0x40701e:;
    int64_t v93 = function_405c90(*v1, result + 88, v62); // 0x40702e
    result2 = v62;
    if ((char)v93 == 0) {
        // 0x40703b
        *__errno_location() = 12;
        result2 = 0;
    }
    // 0x406dea
    return result2;
  lab_0x407015:
    // 0x407015
    *(int64_t *)(result + 24) = *(int64_t *)(v8 + 120);
    v62 = v8;
    goto lab_0x40701e;
  lab_0x406e95:
    // 0x406e95
    *v51 = 0;
    v24 = v53;
    goto lab_0x406fba;
  lab_0x406dd8:
    // 0x406dd8
    if ((v76 & 0x4000) != 0) {
        // 0x406dea
        return 0;
    }
    // 0x406dea
    return result6;
  lab_0x406db2:
    // 0x406db2
    if (*v77 != 0) {
        // 0x4071a1
        int64_t v82; // 0x406cc0
        *(int16_t *)(v82 + 112) = 7;
        int64_t v83; // 0x406cc0
        v76 = v83;
    } else {
        // 0x406dbd
        *(int16_t *)(result6 + 112) = 6;
        function_405d40((int32_t)v78, result + 88, result6);
        v76 = (int64_t)*v1;
    }
    goto lab_0x406dd8;
  lab_0x406f2e:;
    int64_t * v84 = (int64_t *)(v23 + 96); // 0x406f2e
    int64_t v85 = *v84; // 0x406f2e
    int64_t str = v23 + 264; // 0x406f32
    int64_t * v86 = (int64_t *)(result + 32); // 0x406f39
    *(int64_t *)(v23 + 72) = v85;
    int64_t v87 = v85 + 1; // 0x406f45
    int64_t * v88 = (int64_t *)str; // 0x406f49
    memmove((int64_t *)*v86, v88, (int32_t)v87);
    char * found_char_pos = strrchr((char *)str, 47); // 0x406f56
    int64_t v89 = v87; // 0x406f5e
    int64_t v90; // 0x406f56
    if (found_char_pos == NULL) {
        goto lab_0x406f8b;
    } else {
        // 0x406f60
        v90 = (int64_t)found_char_pos;
        if (str == v90) {
            // 0x407170
            v89 = v87;
            if (*(char *)(v23 + 265) == 0) {
                goto lab_0x406f8b;
            } else {
                goto lab_0x406f69;
            }
        } else {
            goto lab_0x406f69;
        }
    }
  lab_0x406f8b:;
    int64_t v91 = *v86; // 0x406f8b
    *(int64_t *)(v23 + 56) = v91;
    *(int64_t *)(v23 + 48) = v91;
    function_405a10(*v1, v25);
    v7 = v23;
    v10 = v89;
    v12 = v25;
    goto lab_0x406ff7;
  lab_0x406f69:;
    int64_t str2 = v90 + 1; // 0x406f69
    int64_t len = strlen((char *)str2); // 0x406f70
    int64_t v92 = len + 1; // 0x406f7e
    memmove(v88, (int64_t *)str2, (int32_t)v92);
    *v84 = len;
    v89 = v92;
    goto lab_0x406f8b;
}
// Address range: 0x407420 - 0x407449
int64_t fts_set(int64_t a1, int64_t a2, int64_t a3) {
    if ((uint32_t)(int32_t)a3 < 5) {
        // 0x407425
        *(int16_t *)(a2 + 116) = (int16_t)a3;
        return 0;
    }
    // 0x407430
    *__errno_location() = 22;
    return 1;
}
// Address range: 0x407450 - 0x4075bd
int64_t fts_children(int64_t a1, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x40745d
    if ((a2 & 0xffffdfff) != 0) {
        // 0x407548
        *v1 = 22;
        return 0;
    }
    // 0x407471
    *v1 = 0;
    char * v2 = (char *)(a1 + 73); // 0x40747a
    if ((*v2 & 64) != 0) {
        // 0x4074ef
        return 0;
    }
    int16_t v3 = *(int16_t *)(a1 + 112); // 0x407484
    if (v3 == 9) {
        // 0x407570
        return *(int64_t *)(a1 + 16);
    }
    // 0x407494
    if (v3 != 1) {
        // 0x4074ef
        return 0;
    }
    int64_t * v4 = (int64_t *)(a1 + 8); // 0x40749c
    int64_t v5 = *v4; // 0x40749c
    if (v5 != 0) {
        // 0x4074a5
        function_4056b0(v5);
    }
    int64_t v6 = 1; // 0x4074b6
    if ((int32_t)a2 == 0x2000) {
        int32_t * v7 = (int32_t *)(a1 + 72); // 0x4074b8
        *v7 = *v7 | 0x2000;
        v6 = 2;
    }
    // 0x4074c5
    int64_t result; // 0x4074e6
    if (*(int64_t *)(a1 + 88) != 0 || *(char *)*(int64_t *)(a1 + 48) == 47) {
        // 0x4074e0
        result = function_405de0(a1, v6);
        *v4 = result;
        // 0x4074ef
        return result;
    }
    uint32_t v8 = *(int32_t *)(a1 + 72); // 0x4074d7
    if ((v8 & 4) != 0) {
        // 0x4074e0
        result = function_405de0(a1, v6);
        *v4 = result;
        // 0x4074ef
        return result;
    }
    int64_t v9 = function_405a70(*(int32_t *)(a1 + 44), (int64_t)v8, (int64_t)"."); // 0x407508
    int32_t fd = v9; // 0x40750f
    if (fd < 0) {
        // 0x407598
        *v4 = 0;
        // 0x4074ef
        return 0;
    }
    // 0x407517
    *v4 = function_405de0(a1, v6);
    if ((*v2 & 2) != 0) {
        // 0x407580
        function_4058d0(a1, v9 & 0xffffffff, 1);
        // 0x4074ef
        return *v4;
    }
    // 0x40752c
    if (fchdir(fd) == 0) {
        // 0x407537
        close(fd);
        // 0x4074ef
        return *v4;
    }
    // 0x4075a7
    close(fd);
    // 0x4074ef
    return 0;
}
// Address range: 0x4075c0 - 0x40769f
int64_t function_4075c0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4075cc
    uint32_t v2 = *v1; // 0x4075cc
    int64_t v3 = a2 & 0xffffffff; // 0x4075d1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4075d4
    uint64_t v5 = (int64_t)*v4; // 0x4075d4
    int64_t v6; // 0x407642
    if (v3 <= v5) {
      lab_0x40763c_2:
        // 0x40763c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4075c2
    int64_t v8 = v2; // 0x4075c0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40763c
        goto lab_0x40763c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4075f8
    int64_t v17; // 0x407606
    int64_t * v18; // 0x407620
    int64_t * v19; // 0x407623
    int64_t v20; // 0x40762e
    int64_t v21; // 0x407606
    while ((v16 & 0xffffffff) > v10) {
        // 0x407603
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x407620
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x407637
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40763c
            goto lab_0x40763c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40763c
            goto lab_0x40763c_2;
        }
        // 0x4075f2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40767b
    int64_t * v23 = (int64_t *)v22; // 0x407680
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x407683
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x407680
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x407697
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4075ed
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40763c
            goto lab_0x40763c_2;
        }
        // 0x4075f2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x407603
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x407620
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x407637
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40763c
                goto lab_0x40763c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40763c
                goto lab_0x40763c_2;
            }
            // 0x4075f2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x407660
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x407680
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x407697
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40763c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x4076a0 - 0x407cbc
int64_t function_4076a0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x4076bf
    int64_t v2 = *v1; // 0x4076bf
    char * str2 = (char *)v2; // 0x4076cc
    char c = *str2; // 0x4076cc
    int64_t v3 = v2; // 0x4076f8
    int64_t v4 = 0; // 0x4076a0
    int32_t v5; // 0x4076a0
    int64_t v6; // 0x4076a0
    int64_t v7; // 0x4076a0
    int64_t v8; // 0x4076a0
    int64_t v9; // 0x4076a0
    int64_t v10; // 0x4076a0
    int64_t v11; // 0x4076a0
    int64_t v12; // 0x4076a0
    int64_t v13; // 0x4076a0
    int64_t str3; // 0x4076a0
    int64_t v14; // 0x4076a0
    int64_t v15; // 0x4076a0
    int64_t v16; // 0x4076a0
    int64_t v17; // 0x4076a0
    int32_t v18; // 0x4076a0
    int32_t v19; // 0x4076a0
    int32_t v20; // 0x4076a0
    int32_t v21; // 0x4076a0
    int32_t v22; // 0x4076a0
    int32_t v23; // 0x4076a0
    int32_t v24; // 0x4076a0
    int32_t v25; // 0x4076a0
    int32_t v26; // 0x4076a0
    int32_t v27; // 0x4076a0
    int32_t v28; // 0x4076a0
    int32_t v29; // 0x4076a0
    int64_t nmemb; // 0x4076a0
    int64_t v30; // 0x4076a0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4076fc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4076f8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x407708
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40770e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4076d8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40773c
                int64_t v34; // 0x4076a0
                int64_t v35; // 0x4076a0
                if (strncmp(str, str2, n) == 0) {
                    // 0x407745
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4078c0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x407756
                int64_t v37 = *(int64_t *)v36; // 0x40775a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x407730
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x407745
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4078c0;
                        }
                    }
                    // 0x407756
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
                  lab_0x4077a6:
                    // 0x4077a6
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
                        goto lab_0x407800;
                    } else {
                        if (v11 == 0) {
                            // 0x407970
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x407800;
                        } else {
                            if (v39 == 0) {
                                // 0x407920
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4077ca;
                                } else {
                                    // 0x40792c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4077ca;
                                    } else {
                                        // 0x40793a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4077ca;
                                        } else {
                                            goto lab_0x407800;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4077ca;
                            }
                        }
                    }
                }
              lab_0x407811:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4079e6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x407b92
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x407bb2
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x407bff
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x407c19
                            int64_t v45; // 0x407c1b
                            if (*(char *)v42 != 0) {
                                // 0x407c1b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x407c13
                            while (v17 + nmemb != v42) {
                                // 0x407c15
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x407c1b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x407c08
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x407c40
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x4079f4
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x407b4f
                        free((int64_t *)v17);
                    }
                    // 0x407a49
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x407a60
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40790e
                    return 63;
                }
                // 0x407830
                v5 = v39;
                if (v13 != 0) {
                    // 0x4078b4
                    v35 = v13;
                    v34 = v25;
                  lab_0x4078c0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4078d0
                    uint32_t v50 = *v49; // 0x4078d0
                    int64_t v51 = v50; // 0x4078d0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4078da
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4078e3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x407b0f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x407aba
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40790e
                            return 63;
                        }
                        // 0x407958
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x407c6f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x407b6d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x407b80
                                // 0x40790e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x407a7e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x407a92
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4078fb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4078fe
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x407902
                    int64_t result = v59; // 0x407908
                    if (v58 != 0) {
                        // 0x40790a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40790e
                    return result;
                }
            } else {
                // 0x40770e
                v5 = v32;
            }
            // break -> 0x407835
            break;
        }
    }
    // 0x407835
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40784d
        if (*(char *)(v60 + 1) != 45) {
            // 0x407857
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40790e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x407999
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x407886
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x407896
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x407800:
    // 0x407800
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x407800
    int64_t v63 = *(int64_t *)v62; // 0x407804
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x407811
        goto lab_0x407811;
    }
    goto lab_0x4077a6;
  lab_0x4077ca:
    // 0x4077ca
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x4076a0
    int32_t v65; // 0x4076a0
    int32_t v66; // 0x4076a0
    if (v27 != 0) {
        goto lab_0x407800;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x407980
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x407800;
            } else {
                goto lab_0x4077f1;
            }
        } else {
            // 0x4077e5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x407adc
                int64_t v67 = (int64_t)mem; // 0x407adc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x407800;
                } else {
                    // 0x407aef
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4077f1;
                }
            } else {
                goto lab_0x4077f1;
            }
        }
    }
  lab_0x4077f1:
    // 0x4077f1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x407800;
}
// Address range: 0x407cc0 - 0x408286
int64_t function_407cc0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x407ce1
    if (v3 < 1) {
        // 0x407e9e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x407cdd
    int32_t v5 = *(int32_t *)a7; // 0x407ce9
    uint64_t v6 = a1 & 0xffffffff; // 0x407ceb
    int64_t v7 = v2; // 0x407cf0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x407cf3
    *v8 = 0;
    int64_t v9; // 0x407cc0
    int64_t v10; // 0x407cc0
    int64_t v11; // 0x407cc0
    int64_t v12; // 0x407cc0
    int64_t str; // 0x407cc0
    int64_t v13; // 0x407cc0
    int64_t v14; // 0x407cc0
    int64_t v15; // 0x407cc0
    int64_t v16; // 0x407cc0
    int64_t v17; // 0x407cc0
    int32_t v18; // 0x407cc0
    char v19; // 0x407cc0
    if (v5 == 0) {
        // 0x407ed8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x407d0a;
    } else {
        // 0x407d03
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x407d50
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x407d53
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x407e18;
            } else {
                int64_t v22 = v7 + 1; // 0x407d66
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x407d76
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x407e2c;
                } else {
                    goto lab_0x407d88;
                }
            }
        } else {
            goto lab_0x407d0a;
        }
    }
  lab_0x407d0a:
    // 0x407d0a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x407d10
    *v24 = 0;
    int64_t v25; // 0x407cc0
    int64_t v26; // 0x407cc0
    int64_t v27; // 0x407cc0
    switch (*(char *)&v2) {
        case 45: {
            // 0x407e00
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407e0d;
        }
        case 43: {
            // 0x408110
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x407e0d;
        }
        default: {
            // 0x407d2c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40808f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4081a8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x407e0d;
                } else {
                    // 0x40809d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x407d3a;
                }
            } else {
                goto lab_0x407d3a;
            }
        }
    }
  lab_0x407e18:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x407e1f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x407d88;
    } else {
        goto lab_0x407e2c;
    }
  lab_0x407d3a:
    // 0x407d3a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x407e0d;
  lab_0x407e0d:
    // 0x407e0d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x407e18;
  lab_0x407d88:;
    uint32_t v30 = *(int32_t *)a7; // 0x407d88
    int64_t v31 = v30; // 0x407d88
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x407d8a
    if ((int64_t)*v32 > v31) {
        // 0x407d8f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x407d92
    if (*v33 > v30) {
        // 0x407d97
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x407d9a
    int64_t v35 = v31; // 0x407d9e
    int64_t v36 = v15; // 0x407d9e
    int64_t v37; // 0x407cc0
    int64_t v38; // 0x407cc0
    int64_t v39; // 0x407cc0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x407f08
        int64_t v41 = v40; // 0x407f08
        v2 = v41;
        int64_t v42; // 0x407cc0
        if (*v33 == v40) {
            // 0x4080f0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4080f8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x407f14
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x407f18
                function_4075c0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x407f28
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x407f31
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x407f3a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x407f51
            int64_t v47 = v45 & 0xffffffff; // 0x407f55
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x407f5e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x407f64
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x407f66;
                }
            }
            int64_t v48 = v47 + 1; // 0x407f40
            int64_t v49 = v48 & 0xffffffff; // 0x407f40
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x407f51
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x407f5e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x407f64
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x407f66;
                    }
                }
                // 0x407f40
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x408108
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x407f66;
    } else {
        goto lab_0x407da4;
    }
  lab_0x407e2c:
    // 0x407e2c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x407e2f
    int64_t v51 = v12; // 0x407e2f
    int64_t v52 = v14; // 0x407e2f
    if (*(char *)v10 == 0) {
        goto lab_0x407d88;
    } else {
        goto lab_0x407e35;
    }
  lab_0x407da4:;
    int32_t v53 = v35; // 0x407da4
    int64_t v54; // 0x407cc0
    int64_t v55; // 0x407cc0
    int64_t v56; // 0x407cc0
    int64_t v57; // 0x407cc0
    int64_t v58; // 0x407cc0
    int64_t v59; // 0x407cc0
    char * v60; // 0x407cc0
    int64_t v61; // 0x407cc0
    int64_t v62; // 0x407db9
    int64_t v63; // 0x407cc0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x407ef3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x407ef6;
    } else {
        // 0x407dac
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x407cc0
        int64_t v66 = v65 ? -1 : 1; // 0x407dc0
        int64_t v67 = (int64_t)"--"; // 0x407cc0
        int64_t v68 = v62; // 0x407cc0
        int64_t v69 = 3; // 0x407dc0
        unsigned char v70 = *(char *)v68; // 0x407dc0
        char v71 = *(char *)v67; // 0x407dc0
        char v72 = v71; // 0x407dc0
        bool v73 = false; // 0x407dc0
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
            // 0x407eb0
            if (*(char *)v62 == 45) {
                // 0x407f70
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x407f70
                if (c == 0) {
                    goto lab_0x407eba;
                } else {
                    // 0x407f7d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x408000;
                    } else {
                        if (c == 45) {
                            // 0x4081e3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x408055;
                        } else {
                            // 0x407f8e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x408000;
                            } else {
                                // 0x407f93
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x407fb4;
                                } else {
                                    // 0x407f9a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x408000;
                                    } else {
                                        goto lab_0x407fb4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x407eba;
            }
        } else {
            uint32_t v75 = *v33; // 0x407dd0
            v2 = v75;
            int32_t v76 = *v32; // 0x407dd3
            int64_t v77 = v35 + 1; // 0x407dd6
            int32_t v78 = v77; // 0x407dd9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x408140
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x407de7
                    function_4075c0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x407df5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x407ef6;
        }
    }
  lab_0x407e35:;
    // 0x407e35
    int64_t v79; // bp-104, 0x407cc0
    int64_t v80 = &v79; // 0x407cca
    int64_t v81 = v50 + 1; // 0x407e35
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x407e3c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x407e41
    *v83 = v81;
    char v84 = *(char *)v2; // 0x407e45
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x407e49
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x407e51
    *v86 = v84;
    char * str2 = (char *)v52; // 0x407e56
    int32_t c2 = v84; // 0x407e56
    char * found_char_pos = strchr(str2, c2); // 0x407e56
    int64_t v87 = *v82; // 0x407e5b
    v2 = v87;
    int64_t v88 = *v85; // 0x407e65
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x407e70
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x408160
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40812d
        *(int32_t *)(v1 + 8) = c2;
        // 0x407e9e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x407e56
    char v91 = *(char *)(v90 + 1); // 0x407e8b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x407e45
        if (v91 != 58) {
            // 0x407e9e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4080b4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4081b8
                *v8 = 0;
            } else {
                // 0x40819c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x4080de
            *v83 = 0;
            // 0x407e9e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4080be
        if (v93 != 0) {
            // 0x408150
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x4080de
            *v83 = 0;
            // 0x407e9e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x4080d1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x4080de
            *v83 = 0;
            // 0x407e9e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40821a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x4081ca
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x4081d1
        // 0x4080de
        *v83 = 0;
        // 0x407e9e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x408029
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40802b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x408250
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x408201
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x408208
            // 0x407e9e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x408036
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40803a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x408055;
  lab_0x407f66:
    // 0x407f66
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x407da4;
  lab_0x408055:;
    int64_t v99 = function_4076a0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x408073
    // 0x407e9e
    return v99 & 0xffffffff;
  lab_0x407ef6:;
    int32_t v100 = v55; // 0x407ef6
    if (v100 != (int32_t)v59) {
        // 0x407efa
        *(int32_t *)a7 = v100;
    }
    // 0x407e9e
    return 0xffffffff;
  lab_0x407eba:
    // 0x407eba
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x407ec1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x407e9e
    return v99 & 0xffffffff;
  lab_0x408000:
    // 0x408000
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x407e35;
  lab_0x407fb4:
    // 0x407fb4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_4076a0(v6, a2, str, a4, a5, v57, v1, v11, &g9); // 0x407fda
    if ((int32_t)v101 != -1) {
        // 0x407e9e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x407fef
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x408000;
}
// Address range: 0x408290 - 0x4082e6
int64_t function_408290(int64_t a1) {
    // 0x408290
    *(int32_t *)&g48 = g28;
    *(int32_t *)&g49 = g27;
    int64_t v1; // 0x408290
    int64_t result = function_407cc0(v1, v1, v1, v1, v1, v1, &g48, a1 & 0xffffffff); // 0x4082b6
    g28 = *(int32_t *)&g48;
    g55 = g51;
    *(int32_t *)&g26 = g50;
    return result;
}
// Address range: 0x4082f0 - 0x408308
int64_t function_4082f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4082f0
    return function_408290(1);
}
// Address range: 0x408310 - 0x408323
int64_t function_408310(int64_t a1, int64_t a2, char * a3, char (**a4)[10], int32_t a5, int64_t a6) {
    // 0x408310
    return function_408290(0);
}
// Address range: 0x408330 - 0x408345
int64_t function_408330(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408330
    return function_407cc0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x408350 - 0x408366
int64_t function_408350(void) {
    // 0x408350
    return function_408290(0);
}
// Address range: 0x408370 - 0x408388
int64_t function_408370(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x408370
    return function_407cc0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x408390 - 0x40840a
int64_t function_408390(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40839b
    int64_t v2 = (int64_t)&g10; // 0x40839b
    int32_t * pwc; // 0x408390
    int64_t v3; // 0x408390
    int64_t n; // 0x408390
    if (a2 == 0) {
        goto lab_0x4083e2;
    } else {
        // 0x40839d
        if (a3 == 0) {
            // 0x4083c8
            return -2;
        }
        // 0x4083a9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4083e2;
        } else {
            goto lab_0x4083b4;
        }
    }
  lab_0x4083e2:
    // 0x4083e2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x408390
    pwc = (int32_t *)&v4;
    goto lab_0x4083b4;
  lab_0x4083b4:;
    char * wstr = (char *)v3; // 0x4083ba
    int64_t ps; // 0x408390
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4083ba
    int64_t result = v5; // 0x4083ba
    if (v5 < 0xfffffffe) {
        // 0x4083c8
        return result;
    }
    int64_t result2 = result; // 0x4083f9
    if ((char)function_408670(0, v3) == 0) {
        // 0x4083fb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4083c8
    return result2;
}
// Address range: 0x408410 - 0x4084f1
int64_t function_408410(uint32_t fd, int64_t a2) {
    int32_t * v1 = __errno_location(); // 0x408422
    int64_t v2; // 0x408410
    if (fd == -100 || (char)v2 == 47) {
        // 0x40849a
        *v1 = 95;
        // 0x4084a1
        return 0xffffffff;
    }
    // 0x408436
    int32_t v3; // bp-4072, 0x408410
    int64_t v4 = function_40ac10((int64_t *)&v3, (int64_t)fd, a2); // 0x408441
    if (v4 != 0) {
        // 0x40844b
        *v1 = 95;
        if (v4 != (int64_t)&v3) {
            // 0x408457
            free((int64_t *)v4);
        }
    }
    // 0x40845f
    if ((int32_t)function_40a000((int64_t *)&v3) != 0) {
        // 0x4084e1
        function_409f50(*v1);
        // UNREACHABLE
    }
    // 0x40846b
    if (fd > -1 == v3 == fd) {
        // 0x4084d0
        function_40a070((int64_t *)&v3);
        *v1 = 9;
        // 0x4084a1
        return 0xffffffff;
    }
    // 0x408474
    if (fchdir(fd) != 0) {
        // 0x4084b8
        function_40a070((int64_t *)&v3);
        // 0x4084a1
        return 0xffffffff;
    }
    // 0x40847f
    *v1 = 95;
    if ((int32_t)function_40a050((int64_t *)&v3) != 0) {
        // 0x4084e9
        function_409f80(*v1);
        // UNREACHABLE
    }
    // 0x408492
    function_40a070((int64_t *)&v3);
    // 0x40849a
    *v1 = 95;
    // 0x4084a1
    return 0xffffffff;
}
// Address range: 0x408500 - 0x408505
int64_t function_408500(int32_t a1, int64_t a2, int64_t * a3) {
    // 0x408500
    return function_408410(a1, a2);
}
// Address range: 0x408510 - 0x408515
int64_t function_408510(int32_t a1, int64_t a2, int64_t a3) {
    // 0x408510
    return function_408410(a1, a2);
}
// Address range: 0x408520 - 0x408525
int64_t function_408520(int32_t a1, int64_t a2, int64_t a3) {
    // 0x408520
    return function_408410(a1, a2);
}
// Address range: 0x408530 - 0x40858d
int64_t function_408530(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x408537
    int64_t v2; // 0x408530
    int64_t result = function_40a3d0(a1, v2); // 0x408548
    if ((v2 & 32) != 0) {
        // 0x408570
        if ((int32_t)result == 0) {
            // 0x408574
            *__errno_location() = 0;
        }
        // 0x40856a
        return 0xffffffff;
    }
    // 0x408551
    if ((int32_t)result == 0) {
        // 0x40856a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x408558
    if (v1 == 0) {
        // 0x40855a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40856a
    return result2;
}
// Address range: 0x408590 - 0x4085a0
int64_t function_408590(int64_t a1) {
    // 0x408590
    *(int64_t *)(a1 + 16) = 0;
    *(int32_t *)(a1 + 24) = 0x95f616;
    int64_t result; // 0x408590
    return result;
}
// Address range: 0x4085a0 - 0x408620
int64_t function_4085a0(int64_t a1, int64_t a2) {
    // 0x4085a0
    if (*(int32_t *)(a1 + 24) != 0x95f616) {
        // 0x408602
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 60, "cycle_check");
        return &g58;
    }
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x4085a9
    int64_t v2 = *v1; // 0x4085a9
    int64_t v3 = *(int64_t *)(a2 + 8); // 0x4085ad
    if (v2 == 0) {
        // 0x4085d0
        *v1 = 1;
        // 0x4085d8
        *(int64_t *)a1 = v3;
        *(int64_t *)(a1 + 8) = a2;
        return 0;
    }
    if (v3 == a1) {
        // 0x4085e8
        if (*(int64_t *)(a1 + 8) == a2) {
            // 0x4085c8
            return 1;
        }
    }
    int64_t v4 = v2 + 1; // 0x4085bb
    *v1 = v4;
    if ((v4 & v2) != 0) {
        // 0x4085c8
        return 0;
    }
    // 0x4085f7
    if (v4 == 0) {
        // 0x4085c8
        return 1;
    }
    // 0x4085d8
    *(int64_t *)a1 = v3;
    *(int64_t *)(a1 + 8) = a2;
    return 0;
}
// Address range: 0x408620 - 0x40866a
int64_t function_408620(int64_t path, int64_t oflag, int32_t a3) {
    uint32_t fd = open((char *)path, (int32_t)oflag); // 0x408633
    return function_40a090((int64_t)fd);
}
// Address range: 0x408670 - 0x4086ce
int64_t function_408670(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x408676
    if (locale == NULL) {
        // 0x4086a3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x408676
    bool v2; // 0x408670
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x408670
    int64_t v5 = v1; // 0x408670
    int64_t v6 = 2; // 0x408695
    unsigned char v7 = *(char *)v5; // 0x408695
    char v8 = *(char *)v4; // 0x408695
    char v9 = v8; // 0x408695
    bool v10 = false; // 0x408695
    while (v7 == v8) {
        // 0x408688
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
    int64_t v12 = (int64_t)"POSIX"; // 0x4086a1
    int64_t v13 = v1; // 0x4086a1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x4086a3
        return 0;
    }
    int64_t v14 = 6; // 0x4086a1
    unsigned char v15 = *(char *)v13; // 0x4086bd
    char v16 = *(char *)v12; // 0x4086bd
    char v17 = v16; // 0x4086bd
    bool v18 = false; // 0x4086bd
    while (v15 == v16) {
        // 0x4086b0
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
// Address range: 0x4086d0 - 0x408763
int64_t function_4086d0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x4086e7
    if (v1 == -1) {
        // 0x40875f
        return -1;
    }
    int64_t v2 = v1; // 0x4086ef
    int64_t v3; // 0x4086d0
    while (true) {
      lab_0x4086f8:
        // 0x4086f8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x408750;
        } else {
            goto lab_0x408755;
        }
    }
  lab_0x40875f_2:;
    // 0x40875f
    int64_t result; // 0x4086d0
    return result;
  lab_0x408755:;
    int64_t v4 = v3 + 2; // 0x408755
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40875f
        goto lab_0x40875f_2;
    }
    goto lab_0x4086f8;
  lab_0x408750:
    // 0x408750
    result = v3;
    goto lab_0x408755;
}
// Address range: 0x408770 - 0x408780
int64_t function_408770(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x408770
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x408780 - 0x408787
int64_t function_408780(int64_t a1, int64_t a2) {
    // 0x408780
    int64_t v1; // 0x408780
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x408790 - 0x4087b1
int64_t function_408790(int64_t a1, int64_t a2) {
    // 0x408790
    int64_t v1; // 0x408790
    return 16 * v1 + a2;
}
// Address range: 0x4087c0 - 0x4088d9
int64_t function_4087c0(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_408790(a1, a2); // 0x4087d4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x4087dc
    int64_t result2 = *v2; // 0x4087dc
    if (result2 == 0) {
        // 0x40886e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x408804
            if (v3 == 0) {
                // 0x40886e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x408811
            int64_t v5 = v3; // 0x408817
            int64_t v6 = v1; // 0x408817
            int64_t result = v4; // 0x408817
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40884c_2:
                // 0x40884c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x408851
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x408860
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40886e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x408824
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x408831
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40884c_2;
                }
                // 0x408839
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40884c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40886e
            return 0;
        }
    }
    // 0x408883
    if ((char)a4 == 0) {
        // 0x40886e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x408888
    if (v12 == 0) {
        // 0x4088d0
        *v2 = 0;
        // 0x40886e
        return result2;
    }
    // 0x408891
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40889f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x4088e0 - 0x40895e
int64_t function_4088e0(uint64_t a1) {
    if (a1 == (int64_t)&g12) {
        // 0x40895d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x4088eb
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g12) {
        // 0x40894a
        *(int64_t *)a1 = (int64_t)&g12;
        return 0;
    }
    // 0x4088f9
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x408914
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x408921
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x408929
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x40895d
    return 1;
}
// Address range: 0x408960 - 0x408aaa
int64_t function_408960(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40897a
    uint64_t v2 = *v1; // 0x40897a
    if (v2 <= a2) {
        // 0x408a64
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x408960
    int64_t v8 = a2; // 0x408960
    int64_t v9; // 0x408960
    int64_t result; // 0x408960
    int64_t v10; // 0x408960
    while (true) {
      lab_0x408996_2:
        // 0x408996
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x408996
        int64_t v12 = *v11; // 0x408996
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x408988;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x40899f
            int64_t v14 = *v13; // 0x40899f
            int64_t v15 = v14; // 0x4089a7
            int64_t v16 = v12; // 0x4089a7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x4089c4
                    int64_t v19 = *v18; // 0x4089c4
                    int64_t v20 = function_408790(v3, v19); // 0x4089cd
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x4089d2
                    int64_t v22 = *v21; // 0x4089d2
                    int64_t * v23 = (int64_t *)v20; // 0x4089d6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x4089b0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x4089ff
                            break;
                        }
                    } else {
                        // 0x4089dc
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x4089ff
                            break;
                        }
                    }
                    // 0x4089c4
                    v15 = v22;
                }
                // 0x4089ff
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x408a03
                v9 = *v1;
                goto lab_0x408988;
            } else {
                int64_t v26 = function_408790(v3, v25); // 0x408a1b
                int64_t * v27 = (int64_t *)v26; // 0x408a20
                if (*v27 == 0) {
                    // 0x408a80
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x408a29
                    int64_t * v29; // 0x408960
                    int64_t v30; // 0x408960
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x408a8f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x408a64
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x408a8f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x408a3a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x408a49
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x408a51
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x408a5a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x408a64
                    break;
                }
                goto lab_0x408996_2;
            }
        }
    }
    // 0x408a64
    return result;
  lab_0x408988:;
    int64_t v36 = v10 + 16; // 0x408988
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x408996_2;
    // 0x408996
    goto lab_0x408996_2;
}
// Address range: 0x408ab0 - 0x408ab5
int64_t function_408ab0(int64_t a1) {
    // 0x408ab0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x408ac0 - 0x408ac5
int64_t function_408ac0(int64_t a1) {
    // 0x408ac0
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x408ad0 - 0x408ad5
int64_t function_408ad0(int64_t a1) {
    // 0x408ad0
    return *(int64_t *)(a1 + 32);
}
// Address range: 0x408ae0 - 0x408b2f
int64_t function_408ae0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408ae3
    int64_t result = 0; // 0x408aec
    if (v1 <= a1) {
      lab_0x408b2d:
        // 0x408b2d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x408af0
    while (*(int64_t *)v3 == 0) {
        // 0x408af0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x408aff
    int64_t v6 = v5; // 0x408b0b
    int64_t v7 = 1; // 0x408b0b
    int64_t v8; // 0x408ae0
    int64_t v9; // 0x408b10
    int64_t v10; // 0x408b14
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x408b10
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x408b20
    int64_t v12 = v3 + 16; // 0x408b24
    while (v12 < v1) {
        // 0x408af9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x408af0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x408aff
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
                // 0x408b10
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x408b1d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x408b2d
    return result2;
}
// Address range: 0x408b30 - 0x408b97
int64_t function_408b30(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408b33
    int64_t v2 = a1; // 0x408b3f
    int64_t v3 = 0; // 0x408b3f
    int64_t v4 = 0; // 0x408b3f
    int64_t v5 = 0; // 0x408b3f
    int64_t v6 = 0; // 0x408b3f
    int64_t v7; // 0x408b30
    int64_t v8; // 0x408b30
    int64_t v9; // 0x408b30
    if (v1 > a1) {
        while (true) {
          lab_0x408b51_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x408b48;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x408b57
                int64_t v13 = v10 + 1; // 0x408b5b
                int64_t v14 = v11 + 1; // 0x408b5f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x408b66
                int64_t v16 = v14; // 0x408b66
                if (v12 == 0) {
                    goto lab_0x408b48;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x408b70
                    int64_t v18 = v16 + 1; // 0x408b74
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x408b70
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x408b7d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x408b86
                        break;
                    }
                    goto lab_0x408b51_2;
                }
            }
        }
    }
  lab_0x408b86:
    // 0x408b86
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x408b8f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x408b8e
    return 0;
  lab_0x408b48:;
    int64_t v20 = v8 + 16; // 0x408b48
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x408b86
        goto lab_0x408b86;
    }
    goto lab_0x408b51_2;
    // 0x408b51
    goto lab_0x408b51_2;
}
// Address range: 0x408ba0 - 0x408ce8
int64_t function_408ba0(uint64_t a1, int64_t a2) {
    // 0x408ba0
    int128_t v1; // 0x408ba0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x408bb3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x408bb7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x408bbe
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x408bd0
            while (*(int64_t *)v7 == 0) {
                // 0x408bd0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x408c0d
                    goto lab_0x408c0d;
                }
            }
        }
    }
  lab_0x408c0d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x408c1c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x408ba0
    int128_t v10; // 0x408ba0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x408cb3
        int128_t v12 = __asm_mulsd(__asm_addsd(v11, v11), 0x4059000000000000); // 0x408cbc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x408c53;
        } else {
            goto lab_0x408cc9;
        }
    } else {
        int128_t v13 = __asm_mulsd(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x408c46
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x408cc9;
        } else {
            goto lab_0x408c53;
        }
    }
  lab_0x408c53:
    // 0x408c53
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x408c57
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x408c57
    goto lab_0x408c5c;
  lab_0x408cc9:
    // 0x408cc9
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x408cda
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x408c5c;
  lab_0x408c5c:
    // 0x408c5c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x408cf0 - 0x408d43
int64_t function_408cf0(int64_t a1, int64_t * a2) {
    int64_t result = (int64_t)a2;
    int64_t v1 = function_408790(a1, result); // 0x408cfa
    int64_t v2 = *(int64_t *)v1; // 0x408cff
    if (v2 == 0) {
        // 0x408d2d
        return 0;
    }
    // 0x408d13
    if (v2 == result) {
        // 0x408d2d
        return result;
    }
    int64_t v3 = v1; // 0x408d24
    int64_t result2 = v2; // 0x408d22
    while ((char)v1 == 0) {
        // 0x408d24
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x408d2d
            break;
        }
        // 0x408d10
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x408d2d
            break;
        }
        result2 = v2;
    }
    // 0x408d2d
    return result2;
}
// Address range: 0x408d50 - 0x408d98
int64_t function_408d50(uint64_t a1) {
    int64_t result = 0; // 0x408d55
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x408d67
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408d5e
    if (v1 <= a1) {
        // 0x408d67
        return result;
    }
    int64_t v2 = a1; // 0x408d65
    int64_t v3 = *(int64_t *)v2; // 0x408d79
    result = v3;
    while (v3 == 0) {
        // 0x408d70
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x408d67
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x408d67
    return result;
}
// Address range: 0x408da0 - 0x408e0a
int64_t function_408da0(int64_t a1, int64_t a2) {
    int64_t v1 = function_408790(a1, a2); // 0x408dac
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x408dc8
    while (*(int64_t *)v2 != a2) {
        // 0x408dc0
        if (v3 == 0) {
            goto lab_0x408dd6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x408e00
        return *(int64_t *)v3;
    }
  lab_0x408dd6:;
    int64_t v4 = v1 + 16; // 0x408de8
    int64_t result = 0; // 0x408def
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x408de0
        result = v5;
        if (v5 != 0) {
            // break -> 0x408df3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x408df3
    return result;
}
// Address range: 0x408e10 - 0x408e74
int64_t function_408e10(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x408e16
    int64_t result = 0; // 0x408e1a
    if (*v1 <= a1) {
      lab_0x408e31:
        // 0x408e31
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x408e1f
    int64_t v4 = v2; // 0x408e25
    int64_t v5; // 0x408e10
    int64_t v6; // 0x408e10
    int64_t v7; // 0x408e58
    int64_t v8; // 0x408e61
    int64_t v9; // 0x408e41
    int64_t v10; // 0x408e45
    if (v3 != 0) {
        // 0x408e38
        if (v2 >= a3) {
            // break -> 0x408e31
            break;
        }
        // 0x408e3d
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
            // 0x408e55
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x408e50
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x408e55
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
    int64_t v12 = a1 + 16; // 0x408e27
    result = v11;
    while (*v1 > v12) {
        // 0x408e1f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x408e38
            result = v2;
            if (v2 >= a3) {
                // break -> 0x408e31
                break;
            }
            // 0x408e3d
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
                // 0x408e55
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x408e50
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x408e55
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x408e27
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x408e31
    return result;
}
// Address range: 0x408e80 - 0x408ef8
int64_t function_408e80(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x408e91
    int64_t result = 0; // 0x408e95
    if (v1 <= a1) {
      lab_0x408eb4:
        // 0x408eb4
        return result;
    }
    int64_t v2 = a1; // 0x408eaa
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x408ea8
    int64_t v5 = v2; // 0x408ea8
    int64_t v6 = v3; // 0x408ea8
    int64_t v7; // 0x408e80
    int64_t v8; // 0x408ed8
    int64_t v9; // 0x408edc
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x408ed8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x408ee8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x408ed8
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
        // 0x408ea2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x408ed8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x408ee8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x408ed8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x408eaa
        result2 = v4;
        v2 += 16;
    }
    // 0x408eb4
    return result2;
}
// Address range: 0x408f00 - 0x408f31
int64_t function_408f00(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x408f07
    if (v1 == 0) {
        // 0x408f2d
        return 0;
    }
    int64_t result = 0; // 0x408f07
    v2++;
    char v3 = *(char *)v2; // 0x408f23
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x408f2d
    return result;
}
// Address range: 0x408f40 - 0x408f60
int64_t function_408f40(int64_t a1) {
    // 0x408f40
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x408f60 - 0x4090ea
int64_t function_408f60(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x408f60
    int128_t v1; // 0x408f60
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x408f9a
    int64_t result = (int64_t)mem; // 0x408f9a
    if (mem == NULL) {
        // 0x40904a
        return result;
    }
    int64_t v3 = result + 40; // 0x408fab
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x408f60
    int128_t v6; // 0x408f60
    if (a2 == 0) {
        // 0x409060
        *v4 = (int64_t)&g12;
        int64_t v7 = function_4088e0(v3); // 0x409068
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40906d
        if ((char)v7 == 0) {
            // 0x409040
            free(mem);
            // 0x40904a
            return 0;
        }
        // 0x409079
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x4090c3;
        } else {
            goto lab_0x40907e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_4088e0(v3) == 0) {
            // 0x409040
            free(mem);
            // 0x40904a
            return 0;
        }
        // 0x408fc5
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_4086d0(a1); // 0x408fd3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x409040
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x409040
                free(mem);
                // 0x40904a
                return 0;
            }
            // 0x408ff1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x409040
                free(mem);
                // 0x40904a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x409002
            int64_t v10 = (int64_t)mem2; // 0x409002
            *mem = v10;
            if (mem2 == NULL) {
                // 0x409040
                free(mem);
                // 0x40904a
                return 0;
            }
            // 0x40900f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x408770 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x408780 : a4;
            *(int64_t *)(result + 64) = a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40904a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x4090b8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40907e;
        } else {
            goto lab_0x4090c3;
        }
    }
  lab_0x4090c3:
    // 0x4090c3
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x4090d3
    int128_t v13 = v6; // 0x4090dc
    int128_t v14 = __asm_addss(v12, v12); // 0x4090dc
    goto lab_0x409087;
  lab_0x40907e:
    // 0x40907e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x409087;
  lab_0x409087:
    // 0x409087
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x409040
    free(mem);
    // 0x40904a
    return 0;
}
// Address range: 0x4090f0 - 0x409198
int64_t function_4090f0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4090fa
    uint64_t v2 = *v1; // 0x4090fa
    int64_t result; // 0x4090f0
    if (v2 <= a1) {
      lab_0x409183:
        // 0x409183
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x409108
    while (*v6 == 0) {
        // 0x409108
        v7 = v5 + 16;
        int64_t v8; // 0x4090f0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x409183
            goto lab_0x409183;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x409119
    int64_t v10 = *v9; // 0x409119
    int64_t v11 = *v3; // 0x40911e
    int64_t v12 = v11; // 0x409125
    int64_t v13 = v10; // 0x409125
    int64_t result2 = v11; // 0x409125
    int64_t * v14; // 0x40913e
    int64_t v15; // 0x40913e
    int64_t v16; // 0x40913a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x409135
            v16 = *v3;
        }
        // 0x40913e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x409130
            v16 = 0;
            if (v12 != 0) {
                // 0x409135
                v16 = *v3;
            }
            // 0x40913e
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
    // 0x40915d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x409170
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40917d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40910c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x409108
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x409183
                goto lab_0x409183;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x409119
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x409135
                v16 = *v3;
            }
            // 0x40913e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x409130
                v16 = 0;
                if (v12 != 0) {
                    // 0x409135
                    v16 = *v3;
                }
                // 0x40913e
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
        // 0x40915d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x409183
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x4091a0 - 0x409276
int64_t function_4091a0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4091af
    uint64_t v2 = *v1; // 0x4091af
    int64_t v3 = a1; // 0x4091b3
    if (*(int64_t *)(a1 + 64) == 0) {
        goto lab_0x409203;
    } else {
        // 0x4091b5
        v3 = a1;
        if (*(int64_t *)(a1 + 32) == 0) {
            goto lab_0x409203;
        } else {
            // 0x4091bc
            if (v2 > a1) {
                int64_t v4 = a1;
                int64_t v5 = *(int64_t *)v4; // 0x4091d1
                int64_t v6; // 0x4091c8
                while (v5 == 0) {
                    // 0x4091c8
                    v6 = v4 + 16;
                    v3 = 0;
                    if (v2 <= v6) {
                        // break (via goto) -> 0x409203
                        goto lab_0x409203;
                    }
                    v4 = v6;
                    v5 = *(int64_t *)v4;
                }
                int64_t v7 = *(int64_t *)(v4 + 8); // 0x4091e8
                int64_t v8 = v7; // 0x4091ef
                int64_t v9 = v5; // 0x4091ef
                int64_t v10; // 0x4091a0
                int64_t v11; // 0x4091e8
                if (v7 != 0) {
                    v10 = v8;
                    v11 = *(int64_t *)(v10 + 8);
                    while (v11 != 0) {
                        // 0x4091e0
                        v10 = v11;
                        v11 = *(int64_t *)(v10 + 8);
                    }
                    // 0x4091e3
                    v9 = *(int64_t *)v10;
                }
                int64_t v12 = v4 + 16; // 0x4091f6
                v3 = v9;
                while (v2 > v12) {
                    // 0x4091d1
                    v4 = v12;
                    v5 = *(int64_t *)v4;
                    while (v5 == 0) {
                        // 0x4091c8
                        v6 = v4 + 16;
                        v3 = 0;
                        if (v2 <= v6) {
                            // break (via goto) -> 0x409203
                            goto lab_0x409203;
                        }
                        v4 = v6;
                        v5 = *(int64_t *)v4;
                    }
                    // 0x4091e3
                    v7 = *(int64_t *)(v4 + 8);
                    v8 = v7;
                    v9 = v5;
                    if (v7 != 0) {
                        v10 = v8;
                        v11 = *(int64_t *)(v10 + 8);
                        while (v11 != 0) {
                            // 0x4091e0
                            v10 = v11;
                            v11 = *(int64_t *)(v10 + 8);
                        }
                        // 0x4091e3
                        v9 = *(int64_t *)v10;
                    }
                    // 0x4091f1
                    v12 = v4 + 16;
                    v3 = v9;
                }
                goto lab_0x409203;
            } else {
                goto lab_0x40923c;
            }
        }
    }
  lab_0x409203:
    // 0x409203
    if (v3 < v2) {
        int64_t v13 = *(int64_t *)(v3 + 8); // 0x409210
        int64_t v14 = v13; // 0x409217
        int64_t v15 = v2; // 0x409217
        int64_t v16; // 0x409220
        if (v13 != 0) {
            v16 = *(int64_t *)(v14 + 8);
            free((int64_t *)v14);
            v14 = v16;
            while (v16 != 0) {
                // 0x409220
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
            }
            // 0x409231
            v15 = *v1;
        }
        int64_t v17 = v3 + 16; // 0x409231
        int64_t v18 = v15; // 0x40923a
        int64_t v19 = v17; // 0x40923a
        while (v15 > v17) {
            // 0x409210
            v13 = *(int64_t *)(v19 + 8);
            v14 = v13;
            v15 = v18;
            if (v13 != 0) {
                v16 = *(int64_t *)(v14 + 8);
                free((int64_t *)v14);
                v14 = v16;
                while (v16 != 0) {
                    // 0x409220
                    v16 = *(int64_t *)(v14 + 8);
                    free((int64_t *)v14);
                    v14 = v16;
                }
                // 0x409231
                v15 = *v1;
            }
            // 0x409231
            v17 = v19 + 16;
            v18 = v15;
            v19 = v17;
        }
    }
    goto lab_0x40923c;
  lab_0x40923c:;
    int64_t v20 = *(int64_t *)(a1 + 72); // 0x40923c
    if (v20 == 0) {
        // 0x409261
        free(NULL);
        free((int64_t *)a1);
        return &g58;
    }
    int64_t v21 = *(int64_t *)(v20 + 8); // 0x409250
    free((int64_t *)v20);
    int64_t v22 = v21; // 0x40925f
    while (v21 != 0) {
        // 0x409250
        v21 = *(int64_t *)(v22 + 8);
        free((int64_t *)v22);
        v22 = v21;
    }
    // 0x409261
    free((int64_t *)v21);
    free((int64_t *)a1);
    return &g58;
}
// Address range: 0x409280 - 0x40947a
int64_t function_409280(int64_t a1, uint64_t a2) {
    // 0x409280
    int128_t v1; // 0x409280
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40928b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x409280
        if (a2 < 0) {
            // 0x409400
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x409410
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x4092a0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x4092a9
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x4093f2
        return 0;
    }
    uint64_t nmemb = function_4086d0(a2); // 0x4092e3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x4093f2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40931b
    if (*v6 == nmemb) {
        // 0x4093f2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40932d
    int64_t v7 = (int64_t)mem; // 0x40932d
    int64_t v8 = v7; // bp-104, 0x409332
    if (mem == NULL) {
        // 0x4093f2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40938a
    int64_t v10 = *v9; // 0x40938a
    int64_t v11 = function_408960(&v8, a1, 0); // 0x409393
    int64_t result = v11 & 0xffffffff; // 0x409398
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x409354
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x4093b6
        function_408960(v13, v12, 1);
        function_408960(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x409440
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x4093f2
    return result;
}
// Address range: 0x409480 - 0x4096f4
int64_t function_409480(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x409480
    int128_t v1; // 0x409480
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x409480
    int64_t v5 = function_4087c0(a1, a2, &v4, 0); // 0x4094a1
    if (v5 != 0) {
        // 0x4094ae
        if (a3 != NULL) {
            // 0x4094b5
            *a3 = v5;
        }
        // 0x4094b9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x4094c8
    uint64_t v7 = *v6; // 0x4094c8
    int64_t v8; // 0x409480
    int64_t v9; // 0x409480
    int64_t v10; // 0x409480
    int128_t v11; // 0x409480
    int128_t v12; // 0x409480
    int64_t v13; // 0x409480
    if (v7 < 0) {
        // 0x409550
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x409560
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x409564
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x409569
        int128_t v17 = __asm_addss(v15, v15); // 0x40956d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x4094eb;
        } else {
            goto lab_0x40957a;
        }
    } else {
        // 0x4094d1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x4094d5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x4094d9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x4094de
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40957a;
        } else {
            goto lab_0x4094eb;
        }
    }
  lab_0x4094eb:
    // 0x4094eb
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x4094f4
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x4094fc
    int128_t v23 = v11; // 0x4094fc
    if (v13 == 0) {
        goto lab_0x409502;
    } else {
        goto lab_0x4095a1;
    }
  lab_0x40957a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x409587
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40958a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x409593
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x409502;
    } else {
        goto lab_0x4095a1;
    }
  lab_0x409502:;
    int64_t * v28 = (int64_t *)v4; // 0x409507
    if (*v28 == 0) {
        // 0x409618
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x409621
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x409512
    int64_t v31 = *v30; // 0x409512
    int64_t * v32; // 0x409480
    int64_t v33; // 0x409480
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40963d
        if (mem == NULL) {
            // 0x4094b9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40963d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x409527
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40953d
    *v37 = *v37 + 1;
    return 1;
  lab_0x4095a1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x4095a1
    function_4088e0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x4095aa
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x4095ae
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x4095b2
    int128_t v44; // 0x409480
    if (v42 < 0) {
        // 0x409670
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x409680
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x4095c0
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x4095c9
    int128_t v47; // 0x409480
    int64_t v48; // 0x409480
    if (v46 < 0) {
        // 0x409650
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40965d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x409660
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x4095d2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x4095d6
        v48 = v46;
        v47 = v51;
    }
    // 0x4095db
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x4095eb
        int128_t v53 = v52; // 0x4095f4
        if (*(char *)(v41 + 16) == 0) {
            // 0x409690
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x4095fa
        __asm_comiss(v53, 0x5f800000);
        // 0x4094b9
        return 0xffffffff;
    }
    goto lab_0x409502;
}
// Address range: 0x409700 - 0x40973b
int64_t function_409700(int64_t a1, int64_t a2) {
    // 0x409700
    int64_t v1; // bp-16, 0x409700
    int64_t v2; // 0x409700
    int32_t v3 = function_409480(a1, a2, &v1, v2); // 0x409712
    if (v3 == -1) {
        // 0x409720
        return 0;
    }
    // 0x409717
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x409740 - 0x409917
int64_t function_409740(int64_t a1) {
    // 0x409740
    int128_t v1; // 0x409740
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x409740
    int64_t v5; // 0x409740
    int64_t result = function_4087c0(a1, v5, &v4, 1); // 0x409755
    if (result == 0) {
        // 0x409772
        return result;
    }
    int64_t * v6 = (int64_t *)(a1 + 32); // 0x409767
    *v6 = *v6 - 1;
    if (*(int64_t *)v4 != 0) {
        // 0x409772
        return result;
    }
    int64_t * v7 = (int64_t *)(a1 + 24); // 0x409780
    uint64_t v8 = *v7 - 1; // 0x409784
    *v7 = v8;
    int64_t v9; // 0x409740
    int64_t v10; // 0x409740
    int64_t v11; // 0x409740
    int128_t v12; // 0x409740
    int128_t v13; // 0x409740
    int64_t v14; // 0x409740
    if (v8 < 0) {
        // 0x409870
        __asm_pxor(v3, v3);
        int64_t v15 = *(int64_t *)(a1 + 16); // 0x409880
        int128_t v16 = __asm_cvtsi2ss(v8 / 2 | v8 % 2); // 0x409884
        int64_t v17 = *(int64_t *)(a1 + 40); // 0x409889
        int128_t v18 = __asm_addss(v16, v16); // 0x40988d
        v14 = v15;
        v12 = v18;
        v10 = v17;
        v13 = v18;
        v9 = v15;
        v11 = v17;
        if (v15 >= 0) {
            goto lab_0x4097ac;
        } else {
            goto lab_0x40989a;
        }
    } else {
        // 0x409792
        __asm_pxor(v3, v3);
        int64_t v19 = *(int64_t *)(a1 + 40); // 0x409796
        int128_t v20 = __asm_cvtsi2ss(v8); // 0x40979a
        int64_t v21 = *(int64_t *)(a1 + 16); // 0x40979f
        v14 = v21;
        v12 = v20;
        v10 = v19;
        v13 = v20;
        v9 = v21;
        v11 = v19;
        if (v21 < 0) {
            goto lab_0x40989a;
        } else {
            goto lab_0x4097ac;
        }
    }
  lab_0x4097ac:
    // 0x4097ac
    __asm_pxor(v2, v2);
    int128_t v22 = __asm_cvtsi2ss(v14); // 0x4097b0
    int64_t v23 = v14; // 0x4097b0
    int128_t v24 = v12; // 0x4097b0
    int64_t v25 = v10; // 0x4097b0
    int128_t v26 = v22; // 0x4097b0
    goto lab_0x4097b5;
  lab_0x40989a:;
    uint64_t v47 = v9;
    __asm_pxor(v2, v2);
    int64_t v48 = v47 / 2 | v47 % 2; // 0x4098a7
    int128_t v49 = __asm_cvtsi2ss(v48); // 0x4098aa
    v23 = v48;
    v24 = v13;
    v25 = v11;
    v26 = __asm_addss(v49, v49);
    goto lab_0x4097b5;
  lab_0x4097b5:;
    int128_t v27 = v24;
    int128_t v28 = __asm_mulss(v26, *(int32_t *)v25); // 0x4097b5
    __asm_comiss_2(v28, v27);
    if (v23 == 0) {
        // 0x409772
        return result;
    }
    int64_t v29 = a1 + 40; // 0x4097be
    function_4088e0(v29);
    uint64_t v30 = *(int64_t *)(a1 + 16); // 0x4097c7
    int64_t v31 = *(int64_t *)v29; // 0x4097cb
    int128_t v32; // 0x409740
    if (v30 < 0) {
        // 0x4098e0
        __asm_pxor(v27, v27);
        int128_t v33 = __asm_cvtsi2ss(v30 / 2 | v30 % 2); // 0x4098f0
        v32 = __asm_addss(v33, v33);
    } else {
        // 0x4097d8
        __asm_pxor(v27, v27);
        v32 = __asm_cvtsi2ss(v30);
    }
    uint64_t v34 = *v7; // 0x4097e1
    int128_t v35; // 0x409740
    int64_t v36; // 0x409740
    if (v34 < 0) {
        // 0x4098c0
        __asm_pxor(v28, v28);
        int64_t v37 = v34 / 2 | v34 % 2; // 0x4098cd
        int128_t v38 = __asm_cvtsi2ss(v37); // 0x4098d0
        v36 = v37;
        v35 = __asm_addss(v38, v38);
    } else {
        // 0x4097ee
        __asm_pxor(v28, v28);
        int128_t v39 = __asm_cvtsi2ss(v34); // 0x4097f2
        v36 = v34;
        v35 = v39;
    }
    // 0x4097f7
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v31), v32), v35);
    if (v36 == 0) {
        // 0x409772
        return result;
    }
    int128_t v40 = __asm_mulss(v32, *(int32_t *)(v31 + 4)); // 0x409808
    int128_t v41 = v40; // 0x409811
    if (*(char *)(v31 + 16) == 0) {
        // 0x409813
        v41 = __asm_mulss(v40, *(int32_t *)(v31 + 8));
    }
    // 0x409818
    __asm_comiss(v41, 0x5f000000);
    int64_t v42 = __asm_cvttss2si(__asm_subss(v41, 0x5f000000)); // 0x409908
    if ((char)function_409280(a1, v42 ^ -0x8000000000000000) != 0) {
        // 0x409772
        return result;
    }
    int64_t * v43 = (int64_t *)(a1 + 72); // 0x40983a
    if (*v43 != 0) {
        int64_t v44; // 0x409740
        free((int64_t *)v44);
        while (*(int64_t *)(v44 + 8) != 0) {
            int64_t v45 = v44;
            int64_t v46 = *(int64_t *)(v45 + 8); // 0x409848
            free((int64_t *)v45);
            v44 = v46;
        }
    }
    // 0x409859
    *v43 = 0;
    // 0x409772
    return result;
}
// Address range: 0x409920 - 0x40993b
int64_t function_409920(int64_t a1, int64_t a2) {
    // 0x409920
    *(int64_t *)(a1 + 20) = 0;
    *(char *)(a1 + 28) = 1;
    int32_t v1 = a2; // 0x40992c
    *(int32_t *)a1 = v1;
    *(int32_t *)(a1 + 4) = v1;
    *(int32_t *)(a1 + 8) = v1;
    *(int32_t *)(a1 + 12) = v1;
    *(int32_t *)(a1 + 16) = v1;
    int64_t result; // 0x409920
    return result;
}
// Address range: 0x409940 - 0x409945
int64_t function_409940(int64_t a1) {
    // 0x409940
    return (int64_t)*(char *)(a1 + 28);
}
// Address range: 0x409950 - 0x409985
int64_t function_409950(int64_t a1, int32_t a2) {
    char * v1 = (char *)(a1 + 28); // 0x409950
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x409954
    int32_t v3 = (int32_t)(*v1 ^ 1); // 0x40995d
    uint32_t v4 = (*v2 + v3) % 4; // 0x40995f
    int32_t * v5 = (int32_t *)((int64_t)(4 * v4) + a1); // 0x409968
    *v5 = a2;
    int32_t * v6 = (int32_t *)(a1 + 24); // 0x40996e
    int32_t v7 = *v6; // 0x40996e
    *v2 = v4;
    if (v7 == v4) {
        // 0x409978
        *v6 = (v7 + v3) % 4;
    }
    // 0x409980
    *v1 = 0;
    return (int64_t)*v5;
}
// Address range: 0x409990 - 0x4099d1
int64_t function_409990(int64_t a1) {
    char * v1 = (char *)(a1 + 28); // 0x409994
    if (*v1 != 0) {
        abort();
        // UNREACHABLE
    }
    int32_t * v2 = (int32_t *)(a1 + 20); // 0x40999e
    uint32_t v3 = *v2; // 0x40999e
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + a1); // 0x4099ab
    int64_t result = (int64_t)*v4; // 0x4099ab
    *v4 = *(int32_t *)(a1 + 16);
    if (v3 == *(int32_t *)(a1 + 24)) {
        // 0x4099c8
        *v1 = 1;
        return result;
    }
    // 0x4099b4
    *v2 = (v3 + 3) % 4;
    return result;
}
// Address range: 0x4099e0 - 0x409f42
int64_t function_4099e0(void) {
    char * v1 = nl_langinfo(14); // 0x4099f6
    char * v2 = g52; // 0x4099fb
    char * v3; // 0x4099e0
    int64_t v4; // 0x4099e0
    int64_t v5; // 0x4099e0
    int64_t v6; // 0x4099e0
    int64_t v7; // 0x4099e0
    int32_t size; // 0x4099e0
    int32_t size2; // 0x4099e0
    int32_t len; // 0x409ab2
    int64_t v8; // 0x409ab2
    char * env_val; // 0x409a9d
    if (v2 == NULL) {
        // 0x409a98
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x409b05;
        } else {
            // 0x409aaa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x409b05;
            } else {
                // 0x409aaf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x409a9d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x409f35
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x409b05;
                    } else {
                        // 0x409ea9
                        size2 = len + 14;
                        goto lab_0x409acb;
                    }
                } else {
                    goto lab_0x409acb;
                }
            }
        }
    } else {
        // 0x4099e0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x409a1a;
    }
  lab_0x409d4c:;
    // 0x409d4c
    struct _IO_FILE * stream; // 0x409b8b
    int32_t v10 = __uflow(stream); // 0x409d4f
    int64_t v11; // 0x4099e0
    int64_t v12 = v11; // 0x409d59
    int64_t v13; // 0x4099e0
    int64_t v14 = v13; // 0x409d59
    int32_t v15 = v10; // 0x409d59
    int64_t v16; // 0x4099e0
    int64_t v17 = v16; // 0x409d59
    int64_t v18 = v11; // 0x409d59
    int64_t v19 = v13; // 0x409d59
    int64_t v20 = v16; // 0x409d59
    if (v10 == -1) {
        // break -> 0x409d5f
        goto lab_0x409d5f;
    }
    goto lab_0x409bd9;
  lab_0x409bce:;
    // 0x409bce
    int64_t v90; // 0x4099e0
    int64_t * v32; // 0x409bc0
    *v32 = v90 + 1;
    int64_t v89; // 0x4099e0
    v12 = v89;
    int64_t v91; // 0x4099e0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4099e0
    v17 = v92;
    goto lab_0x409bd9;
  lab_0x409bd9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4099e0
    int32_t v25; // bp-120, 0x4099e0
    int32_t v26; // bp-184, 0x4099e0
    int64_t v27; // 0x409b8b
    int64_t v28; // 0x409ba8
    int64_t v29; // 0x409bad
    int64_t * v30; // 0x409bc4
    switch (c) {
        case 32: {
            goto lab_0x409bc0;
        }
        case 10: {
            goto lab_0x409bc0;
        }
        case 9: {
            goto lab_0x409bc0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x409db1
            int32_t v33; // 0x4099e0
            char v34; // 0x4099e0
            int32_t v35; // 0x409dbe
            if (v31 < *v30) {
                // 0x409d90
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x409dbb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x409db1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x409d90
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x409dbb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x409da0
                v36 = v33;
            }
            // 0x409e8f
            if (v36 == -1) {
                // break -> 0x409d5f
                break;
            }
            goto lab_0x409bc0;
        }
        default: {
            // 0x409bef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x409d5f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x409c18
            int64_t v39 = v37 + 4; // 0x409c1a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x409c26
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x409c28
            while (v41 == 0) {
                // 0x409c18
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x409c46
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x409c52
            int64_t v45 = v43 + 4; // 0x409c54
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x409c60
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x409c62
            while (v47 == 0) {
                // 0x409c52
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x409c4f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x409c78
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x409c88
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x409c8c
            int64_t v52 = v51 + v48; // 0x409c95
            int64_t * mem; // 0x4099e0
            int64_t v53; // 0x4099e0
            int64_t v54; // 0x4099e0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x409dcb
                int64_t v56 = v55 + 3; // 0x409dd7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x409cb1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x409cc0
            if (mem == NULL) {
                // 0x409eec
                free((int64_t *)v21);
                function_40a3d0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x409b64;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x409cd8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x409ce2
            uint32_t v62 = (int32_t)v59; // 0x409ce5
            int64_t v63; // 0x4099e0
            if (v62 >= 8) {
                // 0x409df4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x409e0e
                int64_t v66 = v61 - v65; // 0x409e12
                uint32_t v67 = (int32_t)(v66 + v59); // 0x409e1d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x409e2e
                    int64_t v70 = v69 & 0xffffffff; // 0x409e2e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x409e2b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x409ebf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x409cf7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x409cfb
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
            int64_t v73 = v51 + 1; // 0x409d0b
            int64_t v74 = v60 - 1; // 0x409d0f
            uint32_t v75 = (int32_t)v73; // 0x409d14
            int64_t v76; // 0x4099e0
            if (v75 >= 8) {
                // 0x409e42
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x409e4c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x409e5c
                int64_t v80 = v74 - v79; // 0x409e60
                uint32_t v81 = (int32_t)(v80 + v73); // 0x409e6b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x409e7b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x409e79
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x409ed6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x409ede
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x409d26
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x409d2a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x409f23
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x409d3e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x409bce;
            } else {
                goto lab_0x409d4c;
            }
        }
    }
  lab_0x409bc0:;
    int64_t v93 = v23; // 0x4099e0
    int64_t v94 = v22; // 0x4099e0
    int64_t v95 = v21; // 0x4099e0
    goto lab_0x409bc0_2;
  lab_0x409b05:;
    int64_t * mem3 = malloc(size); // 0x409b05
    int64_t v97 = (int64_t)&g10; // 0x409b10
    int64_t v98; // 0x4099e0
    int64_t path; // 0x4099e0
    if (mem3 == NULL) {
        goto lab_0x409ae2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x409b05
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x409b26;
    }
  lab_0x409a1a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x409a0d
    char v100 = *v3; // 0x409a1a
    int64_t v101; // 0x4099e0
    if (v100 == 0) {
        // 0x409a74
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4099e0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4099e0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x409a60
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x409a67;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x409a30
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x409a3d
        char v107 = *(char *)v106; // 0x409a42
        v102 = v107;
        if (v107 == 0) {
            // 0x409a74
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x409a4b
    v104 = v103 + 1;
  lab_0x409a67:
    // 0x409a74
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x409ae2:;
    char * v108 = (char *)v97;
    g52 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x409a1a;
  lab_0x409b26:;
    int64_t v109 = v98 + path; // 0x409b26
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x409b52
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x409b81
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x409eb2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x409ba5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x409bc0_2:;
                uint64_t v96 = *v32; // 0x409bc0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x409d4c;
                } else {
                    goto lab_0x409bce;
                }
            }
          lab_0x409d5f:
            // 0x409d5f
            function_40a3d0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x409d7e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x409b64;
  lab_0x409acb:;
    int64_t * mem4 = malloc(size2); // 0x409acb
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x409b71
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x409b26;
    } else {
        goto lab_0x409ae2;
    }
  lab_0x409b64:
    // 0x409b64
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x409ae2;
}
// Address range: 0x409f50 - 0x409f7b
int64_t function_409f50(int32_t err_num) {
    // 0x409f50
    error(g20, err_num, dcgettext(NULL, "unable to record current working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x409f80 - 0x409fab
int64_t function_409f80(int32_t err_num) {
    // 0x409f80
    error(g20, err_num, dcgettext(NULL, "failed to return to initial working directory", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x409fb0 - 0x409ffa
int64_t function_409fb0(int64_t fd, int64_t path, int32_t oflag, int64_t a4) {
    uint32_t v1 = openat((int32_t)fd, (char *)path, oflag); // 0x409fc2
    return function_40a090((int64_t)v1);
}
// Address range: 0x40a000 - 0x40a04a
int64_t function_40a000(int64_t * a1) {
    int64_t * v1 = (int64_t *)((int64_t)a1 + 8); // 0x40a00b
    *v1 = 0;
    int64_t v2; // 0x40a000
    int32_t v3 = function_408620((int64_t)".", 0x80000, (int32_t)v2); // 0x40a01f
    *(int32_t *)a1 = v3;
    if (v3 >= 0) {
        // 0x40a027
        return 0;
    }
    int64_t v4 = function_40a630(0, 0); // 0x40a034
    *v1 = v4;
    return v4 == 0 ? 0xffffffff : 0;
}
// Address range: 0x40a050 - 0x40a069
int64_t function_40a050(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int32_t fd = v1;
    if (fd < 0) {
        // 0x40a060
        return function_40a160(*(int64_t *)(v1 + 8));
    }
    // 0x40a056
    return fchdir(fd);
}
// Address range: 0x40a070 - 0x40a089
int64_t function_40a070(int64_t * a1) {
    // 0x40a070
    int64_t v1; // 0x40a070
    uint32_t fd = (int32_t)v1;
    if (fd >= 0) {
        // 0x40a07a
        close(fd);
    }
    // 0x40a07f
    free((int64_t *)*(int64_t *)((int64_t)a1 + 8));
    return &g58;
}
// Address range: 0x40a090 - 0x40a0de
int64_t function_40a090(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x40a09c
    if (fd >= 3) {
        // 0x40a0a1
        return a1 & 0xffffffff;
    }
    // 0x40a0b0
    int64_t v1; // 0x40a090
    int64_t v2 = function_40ad40(a1, v1); // 0x40a0b0
    int32_t * v3 = __errno_location(); // 0x40a0b8
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x40a0e0 - 0x40a120
int64_t function_40a0e0(int32_t fd) {
    // 0x40a0e0
    if (fd < 0) {
        // 0x40a0e4
        int64_t result; // 0x40a0e0
        return result;
    }
    int32_t result2 = close(fd); // 0x40a0ec
    if (result2 == 0) {
        // 0x40a0f5
        return result2;
    }
    // 0x40a0fa
    __assert_fail("! close_fail", "lib/chdir-long.c", 64, "cdb_free");
    return &g58;
}
// Address range: 0x40a120 - 0x40a157
int64_t function_40a120(int32_t * a1) {
    // 0x40a120
    int64_t path; // 0x40a120
    int32_t fd = path;
    uint32_t v1 = openat(fd, (char *)path, O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x40a132
    int64_t result = 0xffffffff; // 0x40a139
    if (v1 >= 0) {
        // 0x40a13b
        function_40a0e0(fd);
        *a1 = v1;
        result = 0;
    }
    // 0x40a148
    return result;
}
// Address range: 0x40a160 - 0x40a3d0
int64_t function_40a160(int64_t a1) {
    char * path = (char *)a1; // 0x40a16f
    uint32_t result = chdir(path); // 0x40a16f
    if (result == 0) {
        // 0x40a2a6
        return 0;
    }
    int32_t * v1 = __errno_location(); // 0x40a17e
    if (*v1 != 36) {
        // 0x40a2a6
        return result;
    }
    int32_t len = strlen(path); // 0x40a192
    int32_t fd = -100; // bp-44, 0x40a197
    if (len == 0) {
        // 0x40a3b2
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g58;
    }
    if (len < 0x1000) {
        // 0x40a399
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40a3b2
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g58;
    }
    int64_t v2 = len; // 0x40a192
    int32_t ini_seg_bytes = strspn(path, "/"); // 0x40a1bf
    int64_t v3; // 0x40a160
    if (ini_seg_bytes == 2) {
        int64_t v4 = function_40ab00(a1 + 3, 47, v2 - 3); // 0x40a2e5
        if (v4 == 0) {
            // 0x40a2a6
            return 0xffffffff;
        }
        char * v5 = (char *)v4; // 0x40a2f2
        *v5 = 0;
        int64_t v6 = function_40a120(&fd); // 0x40a2fd
        *v5 = 47;
        if ((int32_t)v6 != 0) {
            goto lab_0x40a290;
        } else {
            int64_t str = v4 + 1; // 0x40a309
            v3 = str + (int64_t)strspn((char *)str, "/");
            goto lab_0x40a1dd;
        }
    } else {
        // 0x40a1d1
        v3 = a1;
        if (ini_seg_bytes != 0) {
            // 0x40a2b8
            if ((int32_t)function_40a120(&fd) != 0) {
                goto lab_0x40a290;
            } else {
                // 0x40a2cb
                v3 = (int64_t)ini_seg_bytes + a1;
                goto lab_0x40a1dd;
            }
        } else {
            goto lab_0x40a1dd;
        }
    }
  lab_0x40a290:
    // 0x40a290
    function_40a0e0(fd);
    // 0x40a2a6
    return 0xffffffff;
  lab_0x40a1dd:
    // 0x40a1dd
    if (*(char *)v3 == 47) {
      lab_0x40a367:
        // 0x40a367
        __assert_fail("*dir != '/'", "lib/chdir-long.c", 162, "chdir_long");
        // 0x40a380
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40a399
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40a3b2
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g58;
    }
    uint64_t v7 = v2 + a1; // 0x40a1e7
    if (v7 < v3) {
        // 0x40a380
        __assert_fail("dir <= dir_end", "lib/chdir-long.c", 163, "chdir_long");
        // 0x40a399
        __assert_fail("4096 <= len", "lib/chdir-long.c", 127, "chdir_long");
        // 0x40a3b2
        __assert_fail("0 < len", "lib/chdir-long.c", 126, "chdir_long");
        return &g58;
    }
    int64_t v8 = v3; // 0x40a25d
    int64_t v9 = v3; // 0x40a25d
    if (v7 - v3 > 4095) {
        int64_t * v10 = memrchr((int64_t *)v8, 47, 0x1000); // 0x40a205
        while (v10 != NULL) {
            int64_t v11 = (int64_t)v10; // 0x40a205
            *(char *)v10 = 0;
            if (v11 - v8 > 4095) {
                // 0x40a34e
                __assert_fail("slash - dir < 4096", "lib/chdir-long.c", 179, "chdir_long");
                goto lab_0x40a367;
            }
            int64_t v12 = function_40a120(&fd); // 0x40a230
            *(char *)v10 = 47;
            if ((int32_t)v12 != 0) {
                goto lab_0x40a290;
            }
            int64_t str2 = v11 + 1; // 0x40a23c
            int64_t v13 = str2 + (int64_t)strspn((char *)str2, "/"); // 0x40a24d
            v8 = v13;
            v9 = v13;
            if (v7 - v13 <= 4095) {
                goto lab_0x40a25f;
            }
            v10 = memrchr((int64_t *)v8, 47, 0x1000);
        }
        // 0x40a328
        *v1 = 36;
        // 0x40a2a6
        return 0xffffffff;
    }
  lab_0x40a25f:
    // 0x40a25f
    if (v7 > v9) {
        // 0x40a264
        if ((int32_t)function_40a120(&fd) != 0) {
            goto lab_0x40a290;
        } else {
            goto lab_0x40a275;
        }
    } else {
        goto lab_0x40a275;
    }
  lab_0x40a275:
    // 0x40a275
    if (fchdir(fd) == 0) {
        // 0x40a340
        function_40a0e0(fd);
        // 0x40a2a6
        return 0;
    }
    goto lab_0x40a290;
}
// Address range: 0x40a3d0 - 0x40a44b
int64_t function_40a3d0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40a3d7
    if (fileno(stream) < 0) {
        // 0x40a437
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40a3ea
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40a41b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40a437
            return fclose(stream);
        }
    }
    // 0x40a3ec
    if ((int32_t)function_40a590(a1, v1) == 0) {
        // 0x40a437
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40a3f8
    int32_t v3 = *v2; // 0x40a400
    int64_t result = fclose(stream); // 0x40a40e
    if (v3 != 0) {
        // 0x40a440
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40a410
    return result;
}
// Address range: 0x40a450 - 0x40a585
int64_t function_40a450(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40a480
    if (cmd != 1030) {
        // 0x40a530
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40a48c
    int64_t v2; // 0x40a450
    if (g53 < 0) {
        int64_t v3 = function_40a450(fd, 0, v1, a4); // 0x40a4d4
        int64_t v4 = v3 & 0xffffffff; // 0x40a4d9
        if ((int32_t)v3 < 0) {
            // 0x40a4c0
            return v4 & 0xffffffff;
        }
        // 0x40a4df
        v2 = v4;
        if (g53 != -1) {
            // 0x40a4c0
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40a4a7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40a4b6
            g53 = 1;
            // 0x40a4c0
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40a450(fd & 0xffffffff, 0, v1, a4); // 0x40a567
        int64_t v7 = v6 & 0xffffffff; // 0x40a56c
        if ((int32_t)v6 < 0) {
            // 0x40a4c0
            return v7 & 0xffffffff;
        }
        // 0x40a576
        g53 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40a4ef
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40a4fa
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40a4c0
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40a512
    close(fd2);
    // 0x40a4c0
    return 0xffffffff;
}
// Address range: 0x40a590 - 0x40a5d0
int64_t function_40a590(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40a5aa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40a5aa
        return fflush(stream);
    }
    // 0x40a5b8
    function_40a5d0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40a5d0 - 0x40a627
int64_t function_40a5d0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40a5d0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40a5da
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40a60b
    int64_t result = -1; // 0x40a614
    if (v1 != -1) {
        // 0x40a616
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40a622
    return result;
}
// Address range: 0x40a630 - 0x40aaf2
int64_t function_40a630(int32_t a1, int32_t a2) {
    // 0x40a630
    int32_t size; // 0x40a630
    int32_t v1; // 0x40a630
    int32_t v2; // 0x40a630
    if (a2 != 0) {
        // 0x40a690
        size = a2;
        v1 = a2;
        v2 = a1;
        if (a1 == 0) {
            goto lab_0x40a662;
        } else {
            goto lab_0x40a6ac;
        }
    } else {
        // 0x40a650
        size = 0x1000;
        if (a1 != 0) {
            // 0x40aa50
            *__errno_location() = 22;
            // 0x40a676
            return 0;
        }
        goto lab_0x40a662;
    }
  lab_0x40a9f0:;
    // 0x40a9f0
    int32_t v3; // 0x40a9ea
    int64_t v4 = v3; // 0x40a9f2
    int64_t v5; // 0x40a630
    int64_t dirp2 = v5; // 0x40a9f2
    int32_t * v6; // 0x40a736
    if (v3 != 0) {
        goto lab_0x40aa01;
    } else {
        // 0x40a9f4
        *v6 = 2;
        v4 = 2;
        dirp2 = v5;
        goto lab_0x40aa01;
    }
  lab_0x40a802:;
    // 0x40a802
    int64_t v7; // 0x40a630
    int64_t v8 = v7;
    int64_t v9; // 0x40a630
    int64_t v10 = v9 + 19; // 0x40a802
    char * str = (char *)v10;
    int64_t v11; // bp-200, 0x40a630
    int64_t v12; // 0x40a630
    int32_t v13; // 0x40a630
    int32_t fd; // 0x40a752
    if ((v13 & 0xf000) == 0x4000 == __fxstatat(1, fd, str, (struct stat *)&v11, 256) == 0) {
        // 0x40a835
        if (v11 == v12) {
            // break -> 0x40a850
            goto lab_0x40a850;
        }
    }
    int64_t v14 = v8; // 0x40a630
    goto lab_0x40a7c0_2;
  lab_0x40aace_2:
    // 0x40aace
    *v6 = 12;
    v4 = 12;
    dirp2 = v5;
    goto lab_0x40aa01;
  lab_0x40a662:;
    int64_t * mem = malloc(size); // 0x40a667
    int32_t v41 = (int64_t)mem; // 0x40a66c
    int32_t result = v41; // 0x40a674
    v1 = size;
    v2 = v41;
    if (mem == NULL) {
        // 0x40a676
        return result;
    }
    goto lab_0x40a6ac;
  lab_0x40a6ac:;
    int32_t v42 = v2;
    int64_t v43 = v42;
    int64_t v44 = v1;
    int64_t v45 = v43 + v44; // 0x40a6b1
    int64_t v46 = v45 - 1; // 0x40a6c0
    *(char *)v46 = 0;
    int64_t v47; // 0x40a630
    int64_t v48; // 0x40a630
    int32_t * v49; // 0x40a630
    int64_t v50; // 0x40a630
    int64_t v33; // 0x40a630
    int64_t v40; // 0x40a630
    int64_t v51; // 0x40a630
    int32_t v38; // 0x40a630
    int32_t v52; // 0x40a630
    int32_t v53; // 0x40a630
    if (__lxstat(1, ".", (struct stat *)&v11) < 0) {
        goto lab_0x40aa28;
    } else {
        // 0x40a6d6
        if (__lxstat(1, "/", (struct stat *)&v11) < 0) {
            goto lab_0x40aa28;
        } else {
            // 0x40a701
            v47 = v44;
            v48 = v43;
            v52 = v42;
            v51 = v46;
            v50 = v45;
            if (true) {
                goto lab_0x40a948;
            } else {
                // 0x40a736
                v6 = __errno_location();
                int32_t v54 = v1; // 0x40a743
                int32_t v55 = v42; // 0x40a743
                int64_t v56 = v11; // 0x40a743
                int64_t v57 = v46; // 0x40a743
                int64_t v58 = 0; // 0x40a743
                int32_t fd2 = -100; // 0x40a743
                int64_t dirp3; // 0x40a630
                while (true) {
                    // 0x40a746
                    dirp3 = v58;
                    v38 = v55;
                    fd = openat(fd2, "..", O_RDONLY);
                    if (fd < 0) {
                        // break -> 0x40aa77
                        break;
                    }
                    // 0x40a762
                    if (__fxstat(1, fd, (struct stat *)&v11) != 0) {
                        int64_t v59 = (int64_t)*v6; // 0x40aa88
                        v40 = v59;
                        if (dirp3 == 0) {
                            goto lab_0x40aa6d;
                        } else {
                            // 0x40aa91
                            closedir((struct __dirstream *)dirp3);
                            v40 = v59;
                            goto lab_0x40aa6d;
                        }
                    }
                    // 0x40a77b
                    v12 = v56;
                    int32_t v60 = v54;
                    if (dirp3 != 0) {
                        // 0x40a780
                        if (closedir((struct __dirstream *)dirp3) != 0) {
                            // 0x40aa69
                            v40 = (int64_t)*v6;
                            goto lab_0x40aa6d;
                        }
                    }
                    struct __dirstream * dirp = fdopendir(fd); // 0x40a7a7
                    if (dirp == NULL) {
                        // 0x40aa69
                        v40 = (int64_t)*v6;
                        goto lab_0x40aa6d;
                    }
                    // 0x40a7b8
                    v5 = (int64_t)dirp;
                    v14 = false;
                    while (true) {
                      lab_0x40a7c0_2:;
                        int64_t v15 = v14; // 0x40a630
                        int64_t v16; // 0x40a630
                        int64_t v17; // 0x40a630
                        while (true) {
                            int64_t v18 = v15;
                            *v6 = 0;
                            struct dirent * v19 = readdir(dirp); // 0x40a7cb
                            int64_t v20; // 0x40a630
                            int64_t v21; // 0x40a630
                            if (v19 == NULL) {
                                int32_t v22 = *v6; // 0x40a9a0
                                v3 = v22;
                                if ((char)v18 == 0 || v22 != 0) {
                                    goto lab_0x40a9f0;
                                }
                                // 0x40a9ad
                                rewinddir(dirp);
                                struct dirent * v23 = readdir(dirp); // 0x40a9b8
                                if (v23 == NULL) {
                                    // 0x40a9ea
                                    v3 = *v6;
                                    goto lab_0x40a9f0;
                                }
                                int64_t v24 = (int64_t)v23;
                                v9 = v24;
                                v7 = 0;
                                v21 = v24;
                                v20 = 0;
                                if (*(char *)(v24 + 19) != 46) {
                                    goto lab_0x40a802;
                                }
                            } else {
                                int64_t v25 = (int64_t)v19;
                                v17 = v25;
                                v16 = v18;
                                v21 = v25;
                                v20 = v18;
                                if (*(char *)(v25 + 19) != 46) {
                                    // break -> 0x40a7e3
                                    break;
                                }
                            }
                            int64_t v26 = v20;
                            int64_t v27 = v21;
                            int64_t v28 = v27 + 20; // 0x40a9d0
                            if (*(char *)v28 != 0) {
                                // 0x40a9da
                                v17 = v27;
                                v16 = v26;
                                if (*(int16_t *)v28 != 46) {
                                    // break -> 0x40a7e3
                                    break;
                                }
                            }
                            // 0x40a7c0
                            v15 = v26;
                        }
                        int64_t v29 = v16;
                        int64_t v30 = v17;
                        v9 = v30;
                        v7 = v29;
                        if ((char)v29 == 0) {
                            goto lab_0x40a802;
                        } else {
                            // 0x40a7e8
                            v9 = v30;
                            v7 = 1;
                            int64_t v31 = v29; // 0x40a7fd
                            int64_t v32; // 0x40a630
                            if (v11 == v12 && *(int64_t *)v30 != v32) {
                                // 0x40a7c0
                                v14 = v31;
                                goto lab_0x40a7c0_2;
                            } else {
                                goto lab_0x40a802;
                            }
                        }
                    }
                  lab_0x40a850:;
                    int64_t v61 = v38; // 0x40a858
                    uint64_t v62 = v57 - v61; // 0x40a858
                    int32_t len = strlen(str); // 0x40a85d
                    uint64_t v63 = (int64_t)len; // 0x40a85d
                    int32_t v64 = v60; // 0x40a868
                    int32_t v65 = v38; // 0x40a868
                    int64_t dest_mem = v57; // 0x40a868
                    if (v62 <= v63) {
                        if (a2 != 0) {
                            // 0x40aae0
                            *v6 = 34;
                            v4 = 34;
                            dirp2 = v5;
                            goto lab_0x40aa01;
                        }
                        uint64_t v66 = (int64_t)v60; // 0x40a876
                        int64_t v67 = len >= v60 ? v63 : v66; // 0x40a881
                        uint64_t v68 = v67 + v66; // 0x40a885
                        if (v68 < v66) {
                            goto lab_0x40aace_2;
                        }
                        // 0x40a898
                        v64 = v68;
                        int64_t * mem2 = realloc((int64_t *)v61, v64); // 0x40a8a0
                        if (mem2 == NULL) {
                            goto lab_0x40aace_2;
                        }
                        int64_t v69 = (int64_t)mem2; // 0x40a8a0
                        int64_t v70 = v62 + v69;
                        v65 = v69;
                        dest_mem = (int64_t)memcpy((int64_t *)(v70 + v67), (int64_t *)v70, v60 - (int32_t)v62);
                    }
                    int32_t v71 = v65;
                    int32_t v72 = v64;
                    int64_t v73 = (int64_t)memcpy((int64_t *)(dest_mem - v63), (int64_t *)v10, len) - 1; // 0x40a8fd
                    *(char *)v73 = 47;
                    v54 = v72;
                    v55 = v71;
                    v56 = v11;
                    v57 = v73;
                    v58 = v5;
                    fd2 = fd;
                    // 0x40a92e
                    v53 = v71;
                    v49 = v6;
                    if (closedir(dirp) != 0) {
                        goto lab_0x40aa30;
                    } else {
                        int64_t v74 = v71;
                        int64_t v75 = v72;
                        v47 = v75;
                        v48 = v74;
                        v52 = v71;
                        v51 = v73;
                        v50 = v74 + v75;
                        goto lab_0x40a948;
                    }
                }
                int64_t v76 = (int64_t)*v6; // 0x40aa77
                v4 = v76;
                dirp2 = dirp3;
                v33 = v76;
                if (dirp3 == 0) {
                    goto lab_0x40aa09;
                } else {
                    goto lab_0x40aa01;
                }
            }
        }
    }
  lab_0x40aa28:
    // 0x40aa28
    v53 = v42;
    v49 = __errno_location();
    goto lab_0x40aa30;
  lab_0x40aa30:;
    int64_t v77 = (int64_t)*v49; // 0x40aa36
    int64_t v34 = v77; // 0x40aa3a
    int32_t * v35 = v49; // 0x40aa3a
    int32_t * v36 = v49; // 0x40aa3a
    int32_t v37 = v53; // 0x40aa3a
    int64_t v39 = v77; // 0x40aa3a
    if (a1 != 0) {
        goto lab_0x40aa11;
    } else {
        goto lab_0x40aa3c;
    }
  lab_0x40aa11:
    // 0x40aa11
    *v35 = (int32_t)v34;
    // 0x40a676
    return 0;
  lab_0x40aa3c:
    // 0x40aa3c
    free((int64_t *)(int64_t)v37);
    v34 = v39;
    v35 = v36;
    goto lab_0x40aa11;
  lab_0x40a948:
    // 0x40a948
    if (v51 == v47 - 1 + v48) {
        // 0x40aab7
        int64_t v78; // 0x40a630
        int64_t v79 = v78 - 1; // 0x40aabc
        *(char *)v79 = 47;
    }
    int64_t * v80 = (int64_t *)v48; // 0x40a972
    int32_t v81 = v50 - v51; // 0x40a972
    memmove(v80, (int64_t *)v51, v81);
    int32_t mem3 = a1; // 0x40a97d
    if (a2 == 0) {
        // 0x40aaa0
        mem3 = (int64_t)realloc(v80, v81);
    }
    int32_t v82 = mem3;
    int32_t result2 = v82 == 0 ? v52 : v82;
    // 0x40a676
    return result2;
  lab_0x40aa09:
    // 0x40aa09
    v34 = v33;
    v35 = v6;
    v36 = v6;
    v37 = v38;
    v39 = v33;
    if (a1 == 0) {
        goto lab_0x40aa3c;
    } else {
        goto lab_0x40aa11;
    }
  lab_0x40aa01:
    // 0x40aa01
    closedir((struct __dirstream *)dirp2);
    v33 = v4;
    goto lab_0x40aa09;
  lab_0x40aa6d:
    // 0x40aa6d
    close(fd);
    v33 = v40;
    goto lab_0x40aa09;
}
// Address range: 0x40ab00 - 0x40ac04
int64_t function_40ab00(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40ab00
    if (a3 == 0) {
        // 0x40ab39
        return 0;
    }
    int64_t v1 = result; // 0x40ab0c
    int64_t v2 = a3; // 0x40ab0c
    int64_t result2; // 0x40ab00
    if (result % 8 != 0) {
        char v3 = a2; // 0x40ab0e
        int64_t v4 = result; // 0x40ab11
        if ((char)result == v3) {
            // 0x40ab39
            return result;
        }
        int64_t v5 = a3; // 0x40ab11
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40ab20
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40ab40;
            }
            // 0x40ab26
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40ab39
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40ab39
        return result2;
    }
  lab_0x40ab40:;
    int64_t result3 = v1; // 0x40ab6d
    int64_t v6 = v2; // 0x40ab6d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40ab4f
        int64_t v8 = 0x10000 * v7 | v7; // 0x40ab5c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40ab66
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40ab86
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40abb5
            int64_t v12 = v1 + 8; // 0x40abb9
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40aba3
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40abcc;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40abc3
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40ab39
                return 0;
            }
        }
    }
  lab_0x40abcc:;
    char v14 = a2; // 0x40abcc
    if (*(char *)result3 == v14) {
        // 0x40ab39
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40abe0
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40ab39
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40ab39
    return result2;
}
// Address range: 0x40ac10 - 0x40ad3a
int64_t function_40ac10(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t result = (int64_t)a1;
    if ((char)a3 == 0) {
        // 0x40acd8
        *(char *)a1 = 0;
        return result;
    }
    // 0x40ac26
    if (g54 == 0) {
        int32_t fd = open("/proc/self/fd", O_NOCTTY | O_NONBLOCK | O_DIRECTORY); // 0x40acb2
        if (fd < 0) {
            // 0x40acbe
            g54 = -1;
            return 0;
        }
        // 0x40acf0
        int64_t path; // bp-72, 0x40ac10
        __sprintf_chk((char *)&path, 1, 32, "/proc/self/fd/%d/../fd", (int64_t)fd);
        g54 = access((char *)&path, F_OK) == 0 ? 1 : -1;
        close(fd);
    }
    // 0x40ac36
    if (g54 < 0) {
        // 0x40ac7e
        return 0;
    }
    char * str = (char *)a3; // 0x40ac3d
    int32_t len = strlen(str); // 0x40ac3d
    uint64_t size = (int64_t)len + 27; // 0x40ac42
    int64_t v1 = result; // 0x40ac4d
    if (len != 4005 && size >= 4032) {
        int64_t * mem = malloc((int32_t)size); // 0x40ac90
        v1 = (int64_t)mem;
        if (mem == NULL) {
            // 0x40ac7e
            return 0;
        }
    }
    int64_t result2 = v1;
    strcpy((char *)(result2 + (int64_t)__sprintf_chk((char *)result2, 1, -1, "/proc/self/fd/%d/", a2 & 0xffffffff)), str);
    // 0x40ac7e
    return result2;
}
// Address range: 0x40ad40 - 0x40ad4e
int64_t function_40ad40(int64_t a1, int64_t a2) {
    // 0x40ad40
    int64_t v1; // 0x40ad40
    return function_40a450(a1, 0, 3, v1);
}
// Address range: 0x40ad50 - 0x40adad
int64_t function_40ad50(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40ad50
    return function_4018c0();
}
// Address range: 0x40adb0 - 0x40adb1
int64_t function_40adb0(void) {
    // 0x40adb0
    int64_t result; // 0x40adb0
    return result;
}
// Address range: 0x40adc0 - 0x40add8
int64_t function_40adc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40adc0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x40add8 - 0x40adf8
int64_t function_40add8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x40ade2
    while (*(int64_t *)v1 != -1) {
        // 0x40ade3
        v1 -= 8;
    }
    // 0x40adf4
    return result;
}
