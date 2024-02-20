// Address range: 0x401bf0 - 0x401bf5
int64_t function_401bf0(void) {
    // 0x401bf0
    abort();
    // UNREACHABLE
}
// Address range: 0x401bf5 - 0x401bfa
int64_t function_401bf5(void) {
    // 0x401bf5
    abort();
    // UNREACHABLE
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
// Address range: 0x401c20 - 0x4021f8
int64_t function_401c20(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401c32
    function_402e00(a2);
    setlocale(LC_ALL, (char *)&g5);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401c20
    function_414e30(0x402bd0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    g53 = 0;
    bool v3; // 0x401c20
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = 1; // 0x401c84
    int64_t v6 = 0x7fffffffffffffff; // 0x401c84
    int64_t v7; // 0x401c20
    int64_t v8; // 0x401c20
    int64_t v9; // 0x401c20
    int64_t v10; // 0x401c20
    int64_t v11; // 0x401c20
    int64_t v12; // 0x401c20
    int64_t v13; // 0x401c20
    int64_t v14; // 0x401c20
    int64_t v15; // 0x401c20
    while (true) {
      lab_0x401c88_2:;
        int64_t v16 = v6;
        v13 = v12;
        int64_t v17 = v5;
        int32_t v18 = function_406950(v1, a2, "h:b:f:v:i:pl:s:w:n:d:", &g6, 0, v13); // 0x401ca0
        switch (v18) {
            case -1: {
                if (v17 == 0) {
                    // break -> 0x4021ee
                    break;
                }
                int64_t v19 = (int64_t)g29; // 0x402008
                int64_t v20 = -1; // 0x402008
                int64_t v21 = 0; // 0x402008
                while (v20 != 0) {
                    int64_t v22 = v19;
                    v20--;
                    v19 = v22 + v4;
                    v21 = v20;
                    if (*(char *)v22 == 0) {
                        // break -> 
                        break;
                    }
                    v21 = 0;
                }
                int64_t v23 = -1 - v21;
                int64_t v24 = -2 - v21; // 0x40200d
                int64_t v25 = 3 * v24; // 0x402014
                g63 = v25;
                int64_t str = function_404fe0(v25 + 1); // 0x402024
                char (*str2)[3] = g29; // 0x402029
                g64 = str;
                strcpy(stpcpy(stpcpy((char *)str, str2), str2), str2);
                int64_t v26 = 2 * v24; // 0x402058
                g61 = v26;
                int64_t str3 = function_404fe0(v26 | 1); // 0x402068
                char (*str4)[3] = g29; // 0x40206d
                g62 = str3;
                strcpy(stpcpy((char *)str3, str4), str4);
                g59 = v24;
                int64_t str5 = function_404fe0(v23); // 0x40209b
                g60 = str5;
                strcpy((char *)str5, g29);
                function_402cb0(&g56);
                int64_t v27 = (int64_t)g30; // 0x4020d2
                int64_t v28 = -1; // 0x4020d2
                int64_t v29 = 0; // 0x4020d2
                while (v28 != 0) {
                    int64_t v30 = v27;
                    v28--;
                    v27 = v30 + v4;
                    v29 = v28;
                    if (*(char *)v30 == 0) {
                        // break -> 
                        break;
                    }
                    v29 = 0;
                }
                int64_t v31 = -2 - v29; // 0x4020e1
                int64_t v32 = function_404fe0(v31 + 1 + (int64_t)g24); // 0x4020e9
                g55 = (char *)v32;
                int64_t v33 = v31 + (int64_t)g24; // 0x402107
                int64_t * set_mem = memset((int64_t *)v32, 32, (int32_t)v33); // 0x40210d
                g65 = &g71;
                *(char *)(v33 + (int64_t)set_mem) = 0;
                g54 = g28;
                g72 = (int64_t **)g33;
                uint32_t v34 = *(int32_t *)0x61b31c; // 0x40213e
                int64_t v35; // 0x401c20
                if (v34 == (int32_t)a1) {
                    // 0x4021e0
                    v35 = function_402420((int64_t)"-") & 0xffffffff;
                } else {
                    int64_t v36 = v34; // 0x40213e
                    int64_t v37 = v36; // 0x40214d
                    int64_t v38 = v17; // 0x40214d
                    v35 = v17;
                    if (v1 > v36) {
                        int64_t v39 = *(int64_t *)((0x100000000 * v37 >> 29) + a2); // 0x402152
                        int64_t v40 = v38 & 0xffffffff & function_402420(v39); // 0x40215c
                        g43 = &g44;
                        v38 = v40;
                        v35 = v40;
                        while (v1 > (int64_t)&g44) {
                            // 0x402150
                            v39 = *(int64_t *)((0x100000000 * (int64_t)&g44 >> 29) + a2);
                            v40 = v38 & 0xffffffff & function_402420(v39);
                            g43 = &g44;
                            v38 = v40;
                            v35 = v40;
                        }
                    }
                }
                uint64_t v41 = v35;
                if (g53 == 0 || (int32_t)function_405ae0((int64_t)g47, 32) != -1) {
                    // 0x40217b
                    return v41 % 256 ^ 1;
                }
                // 0x4021ae
                error(1, *__errno_location(), "-");
                v9 = v33;
                v10 = v23;
                goto lab_0x4021c6;
            }
            case 105: {
                char * v42 = dcgettext(NULL, "invalid line number increment", 5); // 0x401f34
                int64_t v43 = function_405360((int64_t)g85, 1, v16, (int64_t *)&g5, (int64_t)v42, 0); // 0x401f53
                g27 = v43;
                v14 = v17;
                v11 = 0;
                v7 = v16;
                goto lab_0x401c88;
            }
            default: {
                if (v18 > 105) {
                    if (v18 == 112) {
                        // 0x401f68
                        g26 = 0;
                        v14 = v17;
                        v11 = v13;
                        v7 = v16;
                        goto lab_0x401c88;
                    } else {
                        if (v18 > 112) {
                            // 0x401cc3
                            v14 = 0;
                            v11 = v13;
                            v7 = v16;
                            switch (v18) {
                                case 118: {
                                    char * v44 = dcgettext(NULL, "invalid starting line number", 5); // 0x401e14
                                    int64_t v45 = function_405360((int64_t)g85, -0x8000000000000000, v16, (int64_t *)&g5, (int64_t)v44, 0); // 0x401e38
                                    g28 = v45;
                                    v14 = v17;
                                    v11 = 0;
                                    v7 = v16;
                                    // break -> 0x401c88
                                    break;
                                }
                                case 119: {
                                    char * v46 = dcgettext(NULL, "invalid line number field width", 5); // 0x401ef4
                                    int64_t v47 = function_405360((int64_t)g85, 1, 0x7fffffff, (int64_t *)&g5, (int64_t)v46, 0); // 0x401f15
                                    g24 = v47;
                                    v14 = v17;
                                    v11 = 0;
                                    v7 = v16;
                                    // break -> 0x401c88
                                    break;
                                }
                                case 115: {
                                    // 0x401ce0
                                    *(int64_t *)0x61b288 = (int64_t)g85;
                                    v14 = v17;
                                    v11 = v13;
                                    v7 = v16;
                                    // break -> 0x401c88
                                    break;
                                }
                            }
                            goto lab_0x401c88;
                        } else {
                            if (v18 == 108) {
                                char * v48 = dcgettext(NULL, "invalid line number of blank lines", 5); // 0x401f84
                                int64_t v49 = function_405360((int64_t)g85, 1, v16, (int64_t *)&g5, (int64_t)v48, 0); // 0x401fa3
                                g25 = v49;
                                v14 = v17;
                                v11 = 0;
                                v7 = v16;
                                goto lab_0x401c88;
                            } else {
                                // 0x401cf9
                                v14 = 0;
                                v11 = v13;
                                v7 = v16;
                                if (v18 != 110) {
                                    goto lab_0x401c88;
                                } else {
                                    int64_t v50 = (int64_t)g85; // 0x401cfe
                                    int64_t v51 = 3; // 0x401d12
                                    int64_t v52 = v50;
                                    int64_t v53 = (int64_t)"ln";
                                    unsigned char v54 = *(char *)v52; // 0x401d12
                                    char v55 = *(char *)v53; // 0x401d12
                                    char v56 = v55; // 0x401d12
                                    bool v57 = false; // 0x401d12
                                    while (v54 == v55) {
                                        v51--;
                                        int64_t v58 = v53 + v4; // 0x401d12
                                        int64_t v59 = v52 + v4; // 0x401d12
                                        v56 = v54;
                                        v57 = true;
                                        if (v51 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v52 = v59;
                                        v53 = v58;
                                        v54 = *(char *)v52;
                                        v55 = *(char *)v53;
                                        v56 = v55;
                                        v57 = false;
                                    }
                                    unsigned char v60 = v56;
                                    if ((v54 >= v60 && !v57) != v54 < v60) {
                                        // 0x401fb4
                                        if (strcmp(g85, "rn") == 0) {
                                            // 0x40218d
                                            *(int64_t *)&g23 = (int64_t)"%*ld%s";
                                            v14 = v17;
                                            v11 = v13;
                                            v7 = v16;
                                            goto lab_0x401c88;
                                        } else {
                                            // 0x401fc9
                                            v9 = v16;
                                            v10 = v50;
                                            if (strcmp(g85, "rz") != 0) {
                                                goto lab_0x4021c6;
                                            } else {
                                                // 0x401fde
                                                *(int64_t *)&g23 = (int64_t)"%0*ld%s";
                                                v14 = v17;
                                                v11 = v13;
                                                v7 = v16;
                                                goto lab_0x401c88;
                                            }
                                        }
                                    } else {
                                        // 0x401d21
                                        *(int64_t *)&g23 = (int64_t)"%-*ld%s";
                                        v14 = v17;
                                        v11 = v13;
                                        v7 = v16;
                                        goto lab_0x401c88;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (v18 == 98) {
                        int64_t v61 = function_4022e0(&g33, &g71, &g68); // 0x401dd7
                        v14 = v17;
                        v11 = v13;
                        v7 = v16;
                        if ((char)v61 != 0) {
                            goto lab_0x401c88;
                        } else {
                            // 0x401de4
                            function_404a20((int64_t)g85);
                            v15 = (int64_t)"invalid body numbering style: %s";
                            v8 = v16;
                            goto lab_0x401ec5;
                        }
                    } else {
                        if (v18 > 98) {
                            switch (v18) {
                                case 102: {
                                    int64_t v62 = function_4022e0(&g31, &g69, &g66); // 0x401e9f
                                    v14 = v17;
                                    v11 = v13;
                                    v7 = v16;
                                    if ((char)v62 != 0) {
                                        goto lab_0x401c88;
                                    } else {
                                        // 0x401eac
                                        function_404a20((int64_t)g85);
                                        v15 = (int64_t)"invalid footer numbering style: %s";
                                        v8 = v16;
                                        goto lab_0x401ec5;
                                    }
                                }
                                case 104: {
                                    int64_t v63 = function_4022e0(&g32, &g70, &g67); // 0x401e5f
                                    v14 = v17;
                                    v11 = v13;
                                    v7 = v16;
                                    if ((char)v63 != 0) {
                                        goto lab_0x401c88;
                                    } else {
                                        // 0x401e6c
                                        function_404a20((int64_t)g85);
                                        v15 = (int64_t)"invalid header numbering style: %s";
                                        v8 = v16;
                                        goto lab_0x401ec5;
                                    }
                                }
                                default: {
                                    // 0x401d55
                                    v14 = 0;
                                    v11 = v13;
                                    v7 = v16;
                                    if (v18 == 100) {
                                        // 0x401d5a
                                        *(int64_t *)&g29 = (int64_t)g85;
                                        v14 = v17;
                                        v11 = v13;
                                        v7 = v16;
                                    }
                                    goto lab_0x401c88;
                                }
                            }
                        } else {
                            if (v18 == -131) {
                                // 0x401d77
                                function_404ea0((int64_t)g46, "nl", "GNU coreutils", (int64_t)g34, "Scott Bartram", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            // 0x401db0
                            v14 = 0;
                            v11 = v13;
                            v7 = v16;
                            if (v18 == -130) {
                                // 0x401dbd
                                function_4027c0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x401c88;
                        }
                    }
                }
            }
        }
    }
  lab_0x4021c6:
    // 0x4021c6
    function_404a20(v10);
    v15 = (int64_t)"invalid line numbering format: %s";
    v8 = v9;
    goto lab_0x401ec5;
  lab_0x401c88:
    // 0x401c88
    v5 = v14;
    v12 = v11;
    v6 = v7;
    goto lab_0x401c88_2;
  lab_0x401ec5:
    // 0x401ec5
    error(0, 0, dcgettext(NULL, (char *)v15, 5));
    v14 = 0;
    v11 = v13;
    v7 = v8;
    goto lab_0x401c88;
}
// Address range: 0x402200 - 0x40222b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402200
    int64_t v1; // 0x402200
    __libc_start_main(0x401c20, (int32_t)a4, (char **)&v1, (void (*)())0x414dc0, (void (*)())0x414e20, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40222b - 0x40224a
int64_t function_40222b(void) {
    // 0x40222b
    return &g45;
}
// Address range: 0x40224a - 0x402281
int64_t function_40224a(void) {
    // 0x40224a
    return 0;
}
// Address range: 0x402281 - 0x4022d8
int64_t function_402281(void) {
    // 0x402281
    if (g50 != 0) {
        // 0x4022d7
        int64_t result; // 0x402281
        return result;
    }
    int64_t v1 = g51; // 0x4022b4
    int64_t result2; // 0x4022c6
    if (g51 >= ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x4022c6
        result2 = function_40222b();
        g50 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x4022b6
        v1++;
    }
    // 0x4022aa
    g51 = v1;
    // 0x4022c6
    result2 = function_40222b();
    g50 = 1;
    return result2;
}
// Address range: 0x4022d8 - 0x4022dd
int64_t function_4022d8(void) {
    // 0x4022d8
    return function_40224a();
}
// Address range: 0x4022e0 - 0x402420
int64_t function_4022e0(int64_t ** a1, int64_t * a2, int64_t * a3) {
    int64_t v1 = (int64_t)g85; // 0x4022e0
    unsigned char v2 = *g85; // 0x4022e7
    if (v2 == 110) {
        // 0x402390
        *(int64_t *)a1 = v1;
        return 1;
    }
    if (v2 <= 110) {
        // 0x402370
        if (v2 != 97) {
            // 0x40235e
            return 0;
        }
        // 0x402390
        *(int64_t *)a1 = v1;
        return 1;
    }
    if (v2 != 112) {
        // 0x402380
        if (v2 != 116) {
            // 0x40235e
            return 0;
        }
        // 0x402390
        *(int64_t *)a1 = v1;
        return 1;
    }
    int64_t v3 = (int64_t)a2;
    g85 = (char *)(v1 + 1);
    *(int64_t *)a1 = v1;
    char * str = g85; // 0x402316
    *a2 = 0;
    *(int64_t *)(v3 + 32) = (int64_t)a3;
    *(int64_t *)(v3 + 8) = 0;
    *(int64_t *)(v3 + 40) = 0;
    g86 = 710;
    int64_t v4 = function_413d70((int64_t)str, (int64_t)strlen(str), v3); // 0x402354
    if (v4 == 0) {
        // 0x40235e
        return 1;
    }
    // 0x402399
    error(1, 0, "%s", (char *)v4);
    __printf_chk(1, g23);
    int64_t result = g54; // 0x4023db
    int64_t v5 = g27 + result; // 0x4023e9
    if (result > v5) {
        // 0x4023fd
        error(1, (int32_t)"line number overflow" ^ (int32_t)"line number overflow", dcgettext(NULL, "line number overflow", 5));
        return &g88;
    }
    // 0x4023f1
    g54 = v5;
    return result;
}
// Address range: 0x402420 - 0x4027c0
int64_t function_402420(int64_t file_path) {
    // 0x402420
    bool v1; // 0x402420
    int64_t v2 = v1 ? -1 : 1;
    int64_t v3 = (int64_t)"-"; // 0x402420
    int64_t v4 = file_path; // 0x402420
    int64_t v5 = 2; // 0x402442
    unsigned char v6 = *(char *)v4; // 0x402442
    char v7 = *(char *)v3; // 0x402442
    char v8 = v7; // 0x402442
    bool v9 = false; // 0x402442
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    struct _IO_FILE * stream; // 0x402420
    if ((v6 >= v10 && !v9) != v6 < v10) {
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x402748
        stream = file;
        if (file == NULL) {
            // 0x402759
            error(0, *__errno_location(), "%s", (char *)function_4048a0(0, 3, file_path));
            return (int32_t)&g88 ^ (int32_t)&g88;
        }
    } else {
        // 0x402451
        g53 = 1;
        stream = g47;
    }
    int64_t v11 = (int64_t)stream;
    int64_t v12; // 0x402420
    function_402c80(v11, 2, v12);
    int64_t n; // 0x40248d
    if (function_402de0(&g56, v11) != 0) {
        while (true) {
          lab_0x402486:
            // 0x402486
            n = (int64_t)g57 - 1;
            if (g57 == 2 || n == 0) {
                goto lab_0x4024d5;
            } else {
                // 0x402497
                if (*(int16_t *)g58 != *(int16_t *)&g29) {
                    goto lab_0x4024d5;
                } else {
                    // 0x4024ae
                    if (n == g63) {
                        // 0x402680
                        if (memcmp((int64_t *)g58, (int64_t *)g64, (int32_t)n) != 0) {
                            goto lab_0x4024bb;
                        } else {
                            // 0x40269a
                            g65 = &g70;
                            g72 = (int64_t **)g32;
                            if (g26 == 0) {
                                goto lab_0x40261a;
                            } else {
                                // 0x40260c
                                g54 = g28;
                                goto lab_0x40261a;
                            }
                        }
                    } else {
                        goto lab_0x4024bb;
                    }
                }
            }
        }
    }
  lab_0x4026e0:;
    int64_t v13 = (int64_t)"-"; // 0x4026e5
    int64_t v14 = 2; // 0x4026e5
    if ((*(char *)stream & 32) != 0) {
        // 0x402759
        error(0, *__errno_location(), "%s", (char *)function_4048a0(0, 3, file_path));
        return (int32_t)&g88 ^ (int32_t)&g88;
    }
    unsigned char v15 = *(char *)file_path; // 0x4026f2
    char v16 = *(char *)v13; // 0x4026f2
    int64_t v17 = file_path + v2; // 0x4026f2
    char v18 = v16; // 0x4026f2
    bool v19 = false; // 0x4026f2
    while (v15 == v16) {
        int64_t v20 = v14 - 1; // 0x4026f2
        v13 += v2;
        v14 = v20;
        v18 = v15;
        v19 = true;
        if (v20 == 0) {
            // break -> 
            break;
        }
        v15 = *(char *)v17;
        v16 = *(char *)v13;
        v17 += v2;
        v18 = v16;
        v19 = false;
    }
    unsigned char v21 = v18;
    if ((v15 >= v21 && !v19) == v15 < v21) {
        // 0x402720
        clearerr_unlocked(stream);
        return 1;
    }
    // 0x402700
    if ((int32_t)function_405ae0(v11, v17) == -1) {
        // 0x402759
        error(0, *__errno_location(), "%s", (char *)function_4048a0(0, 3, file_path));
        return (int32_t)&g88 ^ (int32_t)&g88;
    }
    // 0x402711
    return 1;
  lab_0x4024d5:;
    char v22 = *(char *)g72; // 0x4024dc
    int32_t n2; // 0x402420
    if (v22 == 110) {
        goto lab_0x40255e;
    } else {
        if (v22 > 110) {
            if (v22 == 112) {
                int64_t v23 = function_4146f0(g65, g58, n, 0, n, 0); // 0x402549
                if (v23 == -2) {
                    // 0x402794
                    error(1, *__errno_location(), dcgettext(NULL, "error in regular expression search", 5));
                    return &g88;
                }
                if (v23 != -1) {
                    // 0x4024f7
                    n2 = g57;
                    goto lab_0x402508;
                } else {
                    goto lab_0x40255e;
                }
            } else {
                // 0x4024ed
                n2 = g57;
                if (v22 != 116) {
                    goto lab_0x402508;
                } else {
                    if (g57 < 2) {
                        goto lab_0x40255e;
                    } else {
                        // 0x4024f7
                        n2 = g57;
                        goto lab_0x402508;
                    }
                }
            }
        } else {
            // 0x402580
            n2 = g57;
            if (v22 != 97) {
                goto lab_0x402508;
            } else {
                // 0x402584
                if (g25 < 2) {
                    // 0x4024f7
                    n2 = g57;
                    goto lab_0x402508;
                } else {
                    if (g57 < 2) {
                        int64_t v24 = g52 + 1; // 0x4025a2
                        g52 = v24;
                        if (g25 != v24) {
                            goto lab_0x40255e;
                        } else {
                            goto lab_0x4025b2;
                        }
                    } else {
                        goto lab_0x4025b2;
                    }
                }
            }
        }
    }
  lab_0x40255e:
    // 0x40255e
    fputs_unlocked(g55, g46);
    n2 = g57;
    goto lab_0x402508;
  lab_0x402508:
    // 0x402508
    fwrite_unlocked((int64_t *)g58, 1, n2, g46);
    goto lab_0x402470;
  lab_0x4024bb:
    // 0x4024bb
    if (n == g61) {
        // 0x402640
        if (memcmp((int64_t *)g58, (int64_t *)g62, (int32_t)n) != 0) {
            goto lab_0x4024c8;
        } else {
            // 0x40265a
            g65 = &g71;
            g72 = (int64_t **)g33;
            if (g26 != 0) {
                // 0x40260c
                g54 = g28;
                goto lab_0x40261a;
            } else {
                goto lab_0x40261a;
            }
        }
    } else {
        goto lab_0x4024c8;
    }
  lab_0x402470:
    // 0x402470
    if (function_402de0(&g56, v11) == 0) {
        // break -> 0x4026e0
        goto lab_0x4026e0;
    }
    goto lab_0x402486;
  lab_0x4024c8:
    // 0x4024c8
    if (n == g59) {
        // 0x4025d0
        if (memcmp((int64_t *)g58, (int64_t *)g60, (int32_t)n) != 0) {
            goto lab_0x4024d5;
        } else {
            // 0x4025ea
            g65 = &g69;
            g72 = (int64_t **)g31;
            if (g26 == 0) {
                goto lab_0x40261a;
            } else {
                // 0x40260c
                g54 = g28;
                goto lab_0x40261a;
            }
        }
    } else {
        goto lab_0x4024d5;
    }
  lab_0x40261a:;
    int64_t v25 = (int64_t)g46; // 0x40261a
    int64_t * v26 = (int64_t *)(v25 + 40); // 0x402621
    uint64_t v27 = *v26; // 0x402621
    if (v27 >= *(int64_t *)(v25 + 48)) {
        // 0x4026c8
        __overflow(g46, 10);
    } else {
        // 0x40262f
        *v26 = v27 + 1;
        *(char *)v27 = 10;
    }
    goto lab_0x402470;
  lab_0x4025b2:
    // 0x4025b2
    g52 = 0;
    n2 = g57;
    goto lab_0x402508;
}
// Address range: 0x4027c0 - 0x402ba5
int64_t function_4027c0(int32_t status) {
    // 0x4027c0
    if (status != 0) {
        // 0x4027da
        __fprintf_chk(g49, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4027ff
        exit(status);
        // UNREACHABLE
    }
    // 0x402806
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Write each FILE to standard output, with line numbers added.\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "  -b, --body-numbering=STYLE      use STYLE for numbering body lines\n  -d, --section-delimiter=CC      use CC for logical page delimiters\n  -f, --footer-numbering=STYLE    use STYLE for numbering footer lines\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "  -h, --header-numbering=STYLE    use STYLE for numbering header lines\n  -i, --line-increment=NUMBER     line number increment at each line\n  -l, --join-blank-lines=NUMBER   group of NUMBER empty lines counted as one\n  -n, --number-format=FORMAT      insert line numbers according to FORMAT\n  -p, --no-renumber               do not reset line numbers for each section\n  -s, --number-separator=STRING   add STRING after (possible) line number\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "  -v, --starting-line-number=NUMBER  first line number for each section\n  -w, --number-width=NUMBER       use NUMBER columns for line numbers\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "\nBy default, selects -v1 -i1 -l1 -sTAB -w6 -nrn -hn -bt -fn.\nCC are two delimiter characters used to construct logical page delimiters,\na missing second character implies :.  Type \\\\ for \\.  STYLE is one of:\n", 5), g46);
    fputs_unlocked(dcgettext(NULL, "\n  a         number all lines\n  t         number only nonempty lines\n  n         number no lines\n  pBRE      number only lines that contain a match for the basic regular\n            expression, BRE\n\nFORMAT is one of:\n\n  ln   left justified, no leading zeros\n  rn   right justified, no leading zeros\n  rz   right justified, leading zeros\n\n", 5), g46);
    int64_t v1 = &g1; // bp-136, 0x402982
    bool v2; // 0x4027c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402a08
    int64_t v6 = *(int64_t *)v5; // 0x402a0c
    int64_t v7 = 3; // 0x402a12
    while (v6 != 0) {
        int64_t v8 = (int64_t)"nl";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402a1e
        char v11 = *(char *)v9; // 0x402a1e
        char v12 = v11; // 0x402a1e
        bool v13 = false; // 0x402a1e
        while (v10 == v11) {
            // 0x402a14
            v7--;
            int64_t v14 = v9 + v3; // 0x402a1e
            int64_t v15 = v8 + v3; // 0x402a1e
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
            // break -> 0x402a2a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x402a2a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402b3c;
        } else {
            // 0x402b26
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402b7b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402a8c;
            } else {
                goto lab_0x402b3c;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402a8c;
        } else {
            // 0x402a72
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402b7b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402a8c;
            } else {
                goto lab_0x402a8c;
            }
        }
    }
  lab_0x402b3c:
    // 0x402b3c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402acc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4027ff
    exit(status);
    // UNREACHABLE
  lab_0x402a8c:
    // 0x402a8c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402acc
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4027ff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402bb0 - 0x402bb8
int64_t function_402bb0(int64_t a1) {
    // 0x402bb0
    g74 = a1;
    int64_t result; // 0x402bb0
    return result;
}
// Address range: 0x402bc0 - 0x402bc8
int64_t function_402bc0(int64_t a1) {
    // 0x402bc0
    g73 = a1;
    int64_t result; // 0x402bc0
    return result;
}
// Address range: 0x402bd0 - 0x402c6e
int64_t function_402bd0(void) {
    // 0x402bd0
    int32_t * err_num; // 0x402be6
    if ((int32_t)function_414790((int64_t)g46) == 0) {
        goto lab_0x402bfc;
    } else {
        // 0x402be6
        err_num = __errno_location();
        if (g73 == 0) {
            goto lab_0x402c13;
        } else {
            // 0x402bf7
            if (*err_num != 32) {
                goto lab_0x402c13;
            } else {
                goto lab_0x402bfc;
            }
        }
    }
  lab_0x402bfc:;
    int64_t result = function_414790((int64_t)g49); // 0x402c03
    if ((int32_t)result == 0) {
        // 0x402c0c
        return result;
    }
    // 0x402c4e
    _exit(g35);
    // UNREACHABLE
  lab_0x402c13:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402c1f
    if (g74 == 0) {
        // 0x402c59
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402c33
        error(0, *err_num, "%s: %s", (char *)function_404870((int64_t)g74), v1);
    }
    // 0x402c4e
    _exit(g35);
    // UNREACHABLE
}
// Address range: 0x402c70 - 0x402c75
int64_t function_402c70(void) {
    // 0x402c70
    int64_t fd; // 0x402c70
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402c80 - 0x402ca1
int64_t function_402c80(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402c80
    if (stream == 0) {
        // 0x402ca0
        int64_t result; // 0x402c80
        return result;
    }
    // 0x402c85
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402cb0 - 0x402cc0
int64_t function_402cb0(int64_t * a1) {
    // 0x402cb0
    int128_t v1; // 0x402cb0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x402cb0
    *(int64_t *)((int64_t)a1 + 16) = 0;
    int64_t v4; // 0x402cb0
    __asm_movups(*(int128_t *)&v4, v3);
    int64_t result; // 0x402cb0
    return result;
}
// Address range: 0x402cc0 - 0x402ddb
int64_t function_402cc0(int64_t result, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x402cd8
    int64_t v2 = *v1; // 0x402cd8
    int64_t v3 = v2 + result; // 0x402ce8
    if ((v3 & 16) != 0) {
        // 0x402d98
        return 0;
    }
    uint64_t v4 = 0x100000000000000 * a3 >> 56; // 0x402cc6
    int64_t * v5 = (int64_t *)(a2 + 8); // 0x402d24
    int64_t v6 = v3; // 0x402cc0
    int64_t v7 = v2;
    int64_t v8 = v2; // 0x402d15
    int64_t v9; // 0x402cc0
    int64_t v10; // 0x402cc0
    int64_t v11; // 0x402cc0
    int64_t v12; // 0x402cc0
    int64_t v13; // 0x402cc0
    int64_t v14; // 0x402cc0
    int64_t v15; // 0x402cc0
    while (true) {
      lab_0x402d24:
        // 0x402d24
        v10 = v8;
        v9 = v7;
        v15 = v6;
        uint64_t v16 = *v5; // 0x402d24
        if (v16 < *(int64_t *)(a2 + 16)) {
            // 0x402d00
            *v5 = v16 + 1;
            v12 = (int64_t)*(char *)v16;
            goto lab_0x402d0b;
        } else {
            uint32_t v17 = __uflow((struct _IO_FILE *)a2); // 0x402d35
            v12 = v17;
            if (v17 != -1) {
                goto lab_0x402d0b;
            } else {
                if (v9 == v10) {
                    // break -> 0x402d98
                    break;
                }
                if ((v15 & 32) != 0) {
                    // break -> 0x402d98
                    break;
                }
                // 0x402d4f
                v11 = v10;
                if (*(char *)(v10 - 1) == (char)v4) {
                  lab_0x402dbc:
                    // 0x402dbc
                    *(int64_t *)(result + 8) = v11 - v9;
                    return result;
                }
                // 0x402d5a
                v14 = v4 % 256;
                v13 = v4 & 0xffffffff;
                if (v10 != v15) {
                    // 0x402db0
                    *(char *)v10 = (char)a3;
                    v11 = v10 + 1;
                    goto lab_0x402dbc;
                }
                goto lab_0x402d67;
            }
        }
    }
    // 0x402d98
    return 0;
  lab_0x402d0b:
    // 0x402d0b
    v6 = v15;
    int64_t v18 = v10; // 0x402d10
    int64_t v19 = v12; // 0x402d10
    int64_t v20 = v12; // 0x402d10
    int64_t v21 = v9; // 0x402d10
    v14 = v12;
    v13 = v12;
    if (v10 == v15) {
        goto lab_0x402d67;
    } else {
        goto lab_0x402d15;
    }
  lab_0x402d67:;
    int64_t v22 = function_405140(v9, result); // 0x402d74
    int64_t v23 = v22 + v9; // 0x402d84
    *v1 = v22;
    v6 = v23;
    v18 = v23;
    v19 = v14 % 256;
    v20 = v13;
    v21 = v22;
    goto lab_0x402d15;
  lab_0x402d15:
    // 0x402d15
    v7 = v21;
    v8 = v18 + 1;
    *(char *)v18 = (char)v19;
    v11 = v8;
    int64_t v24 = v7; // 0x402d1e
    if ((int32_t)v20 == (int32_t)v4) {
        // 0x402dbc
        *(int64_t *)(result + 8) = v11 - v24;
        return result;
    }
    goto lab_0x402d24;
}
// Address range: 0x402de0 - 0x402dea
int64_t function_402de0(int64_t * a1, int64_t a2) {
    // 0x402de0
    return function_402cc0((int64_t)a1, a2, 10);
}
// Address range: 0x402df0 - 0x402df9
int64_t function_402df0(int64_t a1) {
    // 0x402df0
    free((int64_t *)*(int64_t *)(a1 + 16));
    return &g88;
}
// Address range: 0x402e00 - 0x402e99
int64_t function_402e00(int64_t str) {
    // 0x402e00
    if (str == 0) {
        // 0x402e79
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g49);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402e0e
    int64_t result = (int64_t)found_char_pos; // 0x402e0e
    if (found_char_pos == NULL) {
        // 0x402e69
        g75 = str;
        g48 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402e18
    if (v1 - str < 7) {
        // 0x402e69
        g75 = str;
        g48 = str;
        return result;
    }
    // 0x402e28
    bool v2; // 0x402e00
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402e00
    int64_t v5 = result - 6; // 0x402e00
    int64_t v6 = 7; // 0x402e36
    unsigned char v7 = *(char *)v5; // 0x402e36
    char v8 = *(char *)v4; // 0x402e36
    char v9 = v8; // 0x402e36
    bool v10 = false; // 0x402e36
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
    int64_t v12 = (int64_t)"lt-"; // 0x402e40
    int64_t v13 = v1; // 0x402e40
    int64_t v14 = 3; // 0x402e40
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402e69
        g75 = str;
        g48 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402e52
    char v16 = *(char *)v12; // 0x402e52
    char v17 = v16; // 0x402e52
    bool v18 = false; // 0x402e52
    while (v15 == v16) {
        // 0x402e42
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
    int64_t v20 = v1; // 0x402e5c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402e5e
        v20 = result + 4;
        g45 = v20;
    }
    // 0x402e69
    g75 = v20;
    g48 = v20;
    return result;
}
// Address range: 0x402ea0 - 0x402f92
int64_t function_402ea0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402eb4
    int64_t result = (int64_t)v1; // 0x402eb4
    if (result != a1) {
        // 0x402ec1
        return result;
    }
    int64_t v2 = function_414850(); // 0x402ed0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402f86
    if (v3 == 85) {
        // 0x402ee0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402f78
            result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
            return result2;
        }
        char v4 = *v1; // 0x402f0e
        int64_t result3 = v4 != 96 ? (int64_t)&g8 : (int64_t)&g11; // 0x402f1b
        // 0x402ec1
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402f78
        result2 = (int32_t)a2 != 9 ? (int64_t)&g12 : (int64_t)&g7;
        return result2;
    }
    char v5 = *v1; // 0x402f5d
    int64_t result4 = v5 != 96 ? (int64_t)&g9 : (int64_t)&g10; // 0x402f6a
    // 0x402ec1
    return result4;
}
// Address range: 0x402fa0 - 0x402ff7
int64_t function_402fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402fa0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402fe8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402ff7 - 0x4041c1
int64_t function_402ff7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403041
    int64_t v3 = 0; // 0x403041
    int64_t v4; // 0x402ff7
    int64_t v5; // 0x402ff7
    int64_t v6; // 0x402ff7
    int64_t v7; // 0x402ff7
    int64_t v8; // 0x402ff7
    int64_t v9; // 0x402ff7
    int64_t v10; // 0x402ff7
    int64_t v11; // 0x402ff7
    int64_t v12; // 0x402ff7
    int64_t v13; // 0x402ff7
    int64_t v14; // 0x402ff7
    int64_t v15; // 0x402ff7
    int64_t v16; // 0x402ff7
    int64_t v17; // 0x402ff7
    int64_t v18; // 0x402ff7
    int64_t result; // 0x402ff7
    int64_t v19; // 0x402ff7
    int32_t wc; // bp+132, 0x402ff7
    int64_t ps; // bp+136, 0x402ff7
    char v20; // 0x4035b0
    int64_t v21; // 0x4035b0
    int64_t v22; // 0x403958
    int64_t v23; // 0x402ff7
    int64_t v24; // 0x403977
    int32_t v25; // 0x402ff7
    while (true) {
      lab_0x403048_2:
        // 0x403048
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402ff7
        int64_t v27; // 0x40307c
        while (true) {
          lab_0x403048:
            // 0x403048
            v5 = v26;
            bool v28 = v15 == v5; // 0x403053
            if (v15 == -1) {
                // 0x403055
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x403063
            if (v28) {
                // break (via goto) -> 0x4037c8
                goto lab_0x4037c8;
            }
            // 0x40306c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g95 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40365b
                    if (v25 % 2 == 0) {
                        goto lab_0x4031a1;
                    }
                    // 0x403a7d
                    v26 = v5 + 1;
                    goto lab_0x403048;
                }
                case 7: {
                    goto lab_0x4031a1;
                }
                case 8: {
                    goto lab_0x4031a1;
                }
                case 9: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4031a1;
                }
                case 12: {
                    goto lab_0x4031a1;
                }
                case 13: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40316d;
                }
                case 36: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4031a1;
                }
                case 38: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4031a1;
                }
                case 44: {
                    goto lab_0x4031a1;
                }
                case 45: {
                    goto lab_0x4031a1;
                }
                case 46: {
                    goto lab_0x4031a1;
                }
                case 47: {
                    goto lab_0x4031a1;
                }
                case 48: {
                    goto lab_0x4031a1;
                }
                case 49: {
                    goto lab_0x4031a1;
                }
                case 50: {
                    goto lab_0x4031a1;
                }
                case 51: {
                    goto lab_0x4031a1;
                }
                case 52: {
                    goto lab_0x4031a1;
                }
                case 53: {
                    goto lab_0x4031a1;
                }
                case 54: {
                    goto lab_0x4031a1;
                }
                case 55: {
                    goto lab_0x4031a1;
                }
                case 56: {
                    goto lab_0x4031a1;
                }
                case 57: {
                    goto lab_0x4031a1;
                }
                case 58: {
                    goto lab_0x4031a1;
                }
                case 59: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4031a1;
                }
                case 66: {
                    goto lab_0x4031a1;
                }
                case 67: {
                    goto lab_0x4031a1;
                }
                case 68: {
                    goto lab_0x4031a1;
                }
                case 69: {
                    goto lab_0x4031a1;
                }
                case 70: {
                    goto lab_0x4031a1;
                }
                case 71: {
                    goto lab_0x4031a1;
                }
                case 72: {
                    goto lab_0x4031a1;
                }
                case 73: {
                    goto lab_0x4031a1;
                }
                case 74: {
                    goto lab_0x4031a1;
                }
                case 75: {
                    goto lab_0x4031a1;
                }
                case 76: {
                    goto lab_0x4031a1;
                }
                case 77: {
                    goto lab_0x4031a1;
                }
                case 78: {
                    goto lab_0x4031a1;
                }
                case 79: {
                    goto lab_0x4031a1;
                }
                case 80: {
                    goto lab_0x4031a1;
                }
                case 81: {
                    goto lab_0x4031a1;
                }
                case 82: {
                    goto lab_0x4031a1;
                }
                case 83: {
                    goto lab_0x4031a1;
                }
                case 84: {
                    goto lab_0x4031a1;
                }
                case 85: {
                    goto lab_0x4031a1;
                }
                case 86: {
                    goto lab_0x4031a1;
                }
                case 87: {
                    goto lab_0x4031a1;
                }
                case 88: {
                    goto lab_0x4031a1;
                }
                case 89: {
                    goto lab_0x4031a1;
                }
                case 90: {
                    goto lab_0x4031a1;
                }
                case 91: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4031a1;
                }
                case 94: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4031a1;
                }
                case 96: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4031a1;
                }
                case 98: {
                    goto lab_0x4031a1;
                }
                case 99: {
                    goto lab_0x4031a1;
                }
                case 100: {
                    goto lab_0x4031a1;
                }
                case 101: {
                    goto lab_0x4031a1;
                }
                case 102: {
                    goto lab_0x4031a1;
                }
                case 103: {
                    goto lab_0x4031a1;
                }
                case 104: {
                    goto lab_0x4031a1;
                }
                case 105: {
                    goto lab_0x4031a1;
                }
                case 106: {
                    goto lab_0x4031a1;
                }
                case 107: {
                    goto lab_0x4031a1;
                }
                case 108: {
                    goto lab_0x4031a1;
                }
                case 109: {
                    goto lab_0x4031a1;
                }
                case 110: {
                    goto lab_0x4031a1;
                }
                case 111: {
                    goto lab_0x4031a1;
                }
                case 112: {
                    goto lab_0x4031a1;
                }
                case 113: {
                    goto lab_0x4031a1;
                }
                case 114: {
                    goto lab_0x4031a1;
                }
                case 115: {
                    goto lab_0x4031a1;
                }
                case 116: {
                    goto lab_0x4031a1;
                }
                case 117: {
                    goto lab_0x4031a1;
                }
                case 118: {
                    goto lab_0x4031a1;
                }
                case 119: {
                    goto lab_0x4031a1;
                }
                case 120: {
                    goto lab_0x4031a1;
                }
                case 121: {
                    goto lab_0x4031a1;
                }
                case 122: {
                    goto lab_0x4031a1;
                }
                case 123: {
                    goto lab_0x403145;
                }
                case 124: {
                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403145;
                }
                case 126: {
                    goto lab_0x40316d;
                }
                default: {
                    goto lab_0x403545;
                }
            }
        }
      lab_0x403545:
        if (v23 != 1) {
            // 0x4038b0
            ps = 0;
            int64_t len = v15; // 0x4038c0
            if (v15 == -1) {
                // 0x4038c2
                len = strlen((char *)str);
            }
            // 0x4038ee
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40394f:
                // 0x40394f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403954
                int64_t v30 = v29 + str;
                v24 = function_4069d0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403eca_2;
                    }
                    case -1: {
                        goto lab_0x403eca_2;
                    }
                    case -2: {
                        // 0x403fad
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403fe7
                            v19 = v18;
                            int64_t v31 = v18; // 0x403fea
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403ff7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403ff0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403eca
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403eca_2;
                    }
                    case 1: {
                        goto lab_0x403920;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x4039cc
                        char v34 = *(char *)v33; // 0x4039dd
                        unsigned char v35; // 0x402ff7
                        if (v34 < 125) {
                            // 0x4039e8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4039ff
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4039d0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4039dd
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4039e8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4039ff
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4039d0
                            v33++;
                        }
                        goto lab_0x403920;
                    }
                }
            }
            goto lab_0x403eca_2;
        } else {
            // 0x403594
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4031a1;
        }
    }
  lab_0x4037c8:
    // 0x4037c8
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x4040ca
        if (v8 > result) {
            // 0x4040d3
            *(char *)(v12 + result) = 0;
        }
        // 0x4033f7
        return result;
    }
    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4031a1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4031b0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4033ba_2;
        }
    }
    int64_t v39 = result; // 0x4032b1
    char v40 = v20; // 0x4032b1
    int64_t v41 = v38; // 0x4032b1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4032b1
    int64_t v43 = v36; // 0x4032b1
    goto lab_0x40322d;
  lab_0x4033ba_2:
    // 0x4033f7
    return function_402fa0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403eca_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4031a1;
    } else {
        uint64_t v49 = v46 + v5; // 0x403a9e
        int64_t v50 = v5 + 1; // 0x403b81
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403b88
        char v52 = v20; // 0x403b88
        int64_t v53 = result; // 0x403b88
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403b51
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403b55
            int64_t v56 = v54 + 1; // 0x403b5a
            int64_t v57 = v51 + 1; // 0x403b81
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403b4c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403b51
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403b55
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
        goto lab_0x40322d;
    }
  lab_0x403920:
    // 0x403920
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40393f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403942
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403eca
        goto lab_0x403eca_2;
    }
    goto lab_0x40394f;
  lab_0x40316d:
    // 0x40316d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4033ba_2;
    }
    goto lab_0x4031a1;
  lab_0x403145:;
    bool v60 = v15 == 1; // 0x403150
    if (v15 == -1) {
        // 0x403152
        v60 = *(char *)v1 == 0;
    }
    // 0x40315e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4031a1;
    } else {
        goto lab_0x40316d;
    }
  lab_0x40322d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403232
        *(char *)(v44 + v45) = v40;
    }
    // 0x403236
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403048_2;
}
// Address range: 0x4041d0 - 0x40436e
int64_t function_4041d0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x4041d2
    int32_t * v3 = __errno_location(); // 0x4041ec
    int64_t v4 = (int64_t)g37; // 0x4041f1
    int32_t v5 = *v3; // 0x4041fb
    int64_t v6 = v4; // 0x404211
    if (v2 >= (int64_t)*(int32_t *)&g40) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404369
            function_405230(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404220
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404227
        int64_t v9; // 0x4041d0
        if (g37 == &g38) {
            int64_t v10 = function_405040(0, v8); // 0x40434a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g38); // 0x40434f
            *(int64_t *)&g37 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405040(v4, v8); // 0x40423b
            *(int64_t *)&g37 = v12;
            v9 = v12;
        }
        // 0x40424a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g40; // 0x40424a
        int32_t v14 = v7; // 0x404251
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g40 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404281
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40428b
    int64_t * v17 = (int64_t *)v15; // 0x40428e
    uint64_t v18 = *v17; // 0x40428e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404291
    int64_t result = *v19; // 0x404291
    int64_t v20; // 0x4041d0
    uint64_t v21 = function_402fa0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4042b4
    if (v18 > v21) {
        // 0x40432b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x4042c7
    *v17 = v22;
    if (result != (int64_t)&g76) {
        // 0x4042d7
        free((int64_t *)result);
    }
    int64_t result2 = function_404fe0(v22); // 0x4042f1
    *v19 = result2;
    int64_t v23; // 0x4041d0
    function_402fa0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40432b
    *v3 = v5;
    return result2;
}
// Address range: 0x404370 - 0x4043a4
int64_t function_404370(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404377
    int64_t result = function_4051e0(a1 == 0 ? (int64_t)&g77 : a1, 56); // 0x404396
    return result;
}
// Address range: 0x4043b0 - 0x4043bf
int64_t function_4043b0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g77 : a1); // 0x4043bc
    return result;
}
// Address range: 0x4043c0 - 0x4043cf
int64_t function_4043c0(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g77 : a1; // 0x4043c8
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g77;
}
// Address range: 0x4043d0 - 0x404403
int64_t function_4043d0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g77 + 8 : a1 + 8; // 0x4043e9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x4043ee
    uint32_t v3 = *v2; // 0x4043ee
    uint32_t v4 = (int32_t)a2 % 32; // 0x4043f2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404410 - 0x404423
int64_t function_404410(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g77 + 4 : a1 + 4); // 0x40441c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404430 - 0x40445b
int64_t function_404430(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g77 : a1; // 0x404438
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404455
        abort();
        // UNREACHABLE
    }
    // 0x40444c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g77;
}
// Address range: 0x404460 - 0x4044d2
int64_t function_404460(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g77 : a5; // 0x404482
    int32_t * v2 = __errno_location(); // 0x40448b
    uint32_t v3 = *(int32_t *)v1; // 0x4044ab
    int64_t result = function_402fa0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4044ba
    return result;
}
// Address range: 0x4044e0 - 0x4045c1
int64_t function_4044e0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g77 : a4; // 0x404502
    int32_t * v2 = __errno_location(); // 0x404508
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404527
    int32_t * v4 = (int32_t *)v1; // 0x40452a
    int64_t v5 = function_402fa0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404545
    int64_t v6 = v5 + 1; // 0x40454a
    int64_t result = function_404fe0(v6); // 0x40455f
    function_402fa0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4045a4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4045ad
    return result;
}
// Address range: 0x4045d0 - 0x4045da
int64_t function_4045d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045d0
    return function_4044e0(a1, a2, 0, a3);
}
// Address range: 0x4045e0 - 0x404675
int64_t function_4045e0(void) {
    uint32_t v1 = *(int32_t *)&g40; // 0x4045e0
    int64_t v2 = v1; // 0x4045e0
    int64_t v3 = v2; // 0x4045f4
    if (v1 >= 2) {
        int64_t v4 = &g40;
        int64_t v5 = v4 + 16; // 0x404613
        free((int64_t *)*(int64_t *)v4);
        v3 = &g88;
        while (v5 != (int64_t)g37 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404610
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g88;
        }
    }
    int64_t v6 = v3; // 0x40462d
    if (g38 != 0x61b7c0) {
        // 0x40462f
        free((int64_t *)g38);
        g38 = 256;
        *(int64_t *)&g39 = (int64_t)&g76;
        v6 = &g88;
    }
    int64_t result = v6; // 0x404651
    if (g37 != &g38) {
        // 0x404653
        free(g37);
        *(int64_t *)&g37 = (int64_t)&g38;
        result = &g88;
    }
    // 0x404666
    *(int32_t *)&g40 = 1;
    return result;
}
// Address range: 0x404680 - 0x404691
int64_t function_404680(void) {
    // 0x404680
    int64_t v1; // 0x404680
    return function_4041d0(v1, v1, -1, (int64_t *)&g77);
}
// Address range: 0x4046a0 - 0x4046aa
int64_t function_4046a0(void) {
    // 0x4046a0
    int64_t v1; // 0x4046a0
    return function_4041d0(v1, v1, v1, (int64_t *)&g77);
}
// Address range: 0x4046b0 - 0x4046c6
int64_t function_4046b0(int64_t a1) {
    // 0x4046b0
    return function_4041d0(0, a1, -1, (int64_t *)&g77);
}
// Address range: 0x4046d0 - 0x4046e2
int64_t function_4046d0(int64_t a1, int64_t a2) {
    // 0x4046d0
    return function_4041d0(0, a1, a2, (int64_t *)&g77);
}
// Address range: 0x4046f0 - 0x404758
int64_t function_4046f0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404700
    return function_4041d0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404760 - 0x4047c4
int64_t function_404760(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404770
    return function_4041d0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4047d0 - 0x4047dc
int64_t function_4047d0(int64_t a1, int64_t a2) {
    // 0x4047d0
    return function_4046f0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4047e0 - 0x4047ef
int64_t function_4047e0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4047e0
    return function_404760(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4047f0 - 0x404860
int64_t function_4047f0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g77); // 0x4047fd
    int128_t v2 = __asm_movdqa(g78); // 0x404805
    int128_t v3 = __asm_movdqa(g79); // 0x40480d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404822
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404838
    uint32_t v6 = *v5; // 0x404838
    uint32_t v7 = (int32_t)a3 % 32; // 0x40483d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_4041d0(0, a1, a2, &v4);
}
// Address range: 0x404860 - 0x40486d
int64_t function_404860(int64_t a1, int64_t a2) {
    // 0x404860
    return function_4047f0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404870 - 0x404881
int64_t function_404870(int64_t a1) {
    // 0x404870
    return function_4047f0(a1, -1, 58);
}
// Address range: 0x404890 - 0x40489a
int64_t function_404890(void) {
    // 0x404890
    int64_t v1; // 0x404890
    return function_4047f0(v1, v1, 58);
}
// Address range: 0x4048a0 - 0x40490e
int64_t function_4048a0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4048ba
    return function_4041d0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404910 - 0x40497c
int64_t function_404910(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g77); // 0x404917
    int128_t v2 = __asm_movdqa(g78); // 0x40491f
    int128_t v3 = __asm_movdqa(g79); // 0x404927
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404949
    if (a2 == 0 || a3 == 0) {
        // 0x404977
        abort();
        // UNREACHABLE
    }
    // 0x40495a
    return function_4041d0(a1, a4, a5, &v4);
}
// Address range: 0x404980 - 0x404989
int64_t function_404980(void) {
    // 0x404980
    int64_t v1; // 0x404980
    return function_404910(v1, v1, v1, v1, -1);
}
// Address range: 0x404990 - 0x4049a7
int64_t function_404990(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404990
    return function_404910(0, a1, a2, a3, -1);
}
// Address range: 0x4049b0 - 0x4049c3
int64_t function_4049b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4049b0
    return function_404910(0, a1, a2, a3, a4);
}
// Address range: 0x4049d0 - 0x4049da
int64_t function_4049d0(void) {
    // 0x4049d0
    int64_t v1; // 0x4049d0
    return function_4041d0(v1, v1, v1, &g36);
}
// Address range: 0x4049e0 - 0x4049f2
int64_t function_4049e0(int64_t a1, int64_t a2) {
    // 0x4049e0
    return function_4041d0(0, a1, a2, &g36);
}
// Address range: 0x404a00 - 0x404a11
int64_t function_404a00(void) {
    // 0x404a00
    int64_t v1; // 0x404a00
    return function_4041d0(v1, v1, -1, &g36);
}
// Address range: 0x404a20 - 0x404a36
int64_t function_404a20(int64_t a1) {
    // 0x404a20
    return function_4041d0(0, a1, -1, &g36);
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
        return function_404a40(a1, a2, a3, a4, a5, 0, (int64_t)&g88);
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
    return function_404a40(a1, a2, a3, a4, a5, v2, (int64_t)&g88);
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
    return function_404a40(a1, a2, a3, a4, v3, v10, (int64_t)&g88);
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
    int64_t result = function_404a40(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g88); // 0x404f4f
    return result;
}
// Address range: 0x404f60 - 0x404fd4
int64_t function_404f60(int64_t a1) {
    // 0x404f60
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404fc3
    return fputs_unlocked(v1, g46);
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
        return (int32_t)&g88 ^ (int32_t)&g88;
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
    error(g35, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405270 - 0x405354
int64_t function_405270(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x405270
    int64_t result2; // bp-64, 0x405270
    int32_t v1 = function_405390(a1, 0, a2 & 0xffffffff, &result2, a5); // 0x40529c
    int32_t * v2; // 0x405270
    int32_t * v3; // 0x405270
    if (v1 != 0) {
        int32_t * v4 = __errno_location(); // 0x40531a
        v2 = v4;
        if (v1 == 1) {
            goto lab_0x4052c0;
        } else {
            // 0x405327
            v3 = v4;
            if (v1 == 3) {
                // 0x40532c
                *v4 = 0;
                v3 = v4;
            }
            goto lab_0x4052c7;
        }
    } else {
        int64_t result = result2; // 0x4052a0
        if (result >= a3 && result <= a4) {
            // 0x405300
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x4052af
        v2 = v5;
        if (result < 0x40000000) {
            int64_t v6 = result + 0x40000001; // 0x405338
            *v5 = v6 == 0 | v6 < 0 != ((v6 ^ result) & (result ^ -0x8000000000000000)) < 0 ? 75 : 34;
            v3 = v5;
            goto lab_0x4052c7;
        } else {
            goto lab_0x4052c0;
        }
    }
  lab_0x4052c0:
    // 0x4052c0
    *v2 = 75;
    v3 = v2;
    goto lab_0x4052c7;
  lab_0x4052c7:;
    int64_t v7 = function_404a20(a1); // 0x4052ca
    int32_t v8 = *v3; // 0x4052cf
    int32_t status = a7 == 0 ? 1 : a7; // 0x4052ef
    error(status, v8 == 22 ? 0 : v8, "%s: %s", (char *)a6, (char *)v7);
    // 0x405300
    return result2;
}
// Address range: 0x405360 - 0x405381
int64_t function_405360(int64_t a1, int64_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x405360
    int64_t result; // 0x405360
    return result;
}
// Address range: 0x405390 - 0x405ae0
int64_t function_405390(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str) {
    uint32_t v1 = (int32_t)a3; // 0x4053a2
    if (v1 >= 37) {
        // 0x405ab9
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoimax");
        return &g88;
    }
    // 0x4053ab
    int64_t v2; // bp-64, 0x405390
    int64_t v3 = a2 == 0 ? (int64_t)&v2 : (int64_t)a2; // 0x4053b8
    int32_t * v4 = __errno_location(); // 0x4053c2
    *v4 = 0;
    char * v5 = (char *)a1;
    int32_t v6 = __strtol_internal(v5, (char **)v3, v1, 0); // 0x4053da
    int64_t * v7 = (int64_t *)v3; // 0x4053df
    int64_t v8 = *v7; // 0x4053df
    int64_t v9; // 0x405390
    int64_t v10; // 0x405390
    int64_t v11; // 0x405390
    char v12; // 0x405390
    int64_t v13; // 0x405390
    int64_t v14; // 0x405390
    int64_t v15; // 0x405390
    if (v8 == a1) {
        // 0x405438
        if (str == 0) {
            // 0x40540e
            return 4;
        }
        char c = *v5; // 0x405441
        if (c == 0) {
            // 0x40540e
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40545f
        v14 = 1;
        v10 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x40540e
            return 4;
        }
        goto lab_0x40546d;
    } else {
        int32_t v16 = *v4; // 0x4053ea
        int64_t v17 = 0; // 0x4053f0
        if (v16 != 0) {
            // 0x405420
            v17 = 1;
            if (v16 != 34) {
                // 0x40540e
                return 4;
            }
        }
        int64_t v18 = v6; // 0x4053da
        v13 = v18;
        v9 = v17;
        if (str == 0) {
            goto lab_0x405407;
        } else {
            char c2 = *(char *)v8; // 0x4053fa
            v13 = v18;
            v9 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x405507
                v14 = v18;
                v10 = v17;
                v12 = c2;
                v15 = v18;
                v11 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40546d;
                } else {
                    goto lab_0x405515;
                }
            } else {
                goto lab_0x405407;
            }
        }
    }
  lab_0x40546d:;
    int64_t v19 = v10;
    int64_t v20 = v14;
    unsigned char v21 = v12 - 69;
    int64_t v22 = 1024; // 0x405474
    int64_t v23 = 1; // 0x405474
    int64_t v24; // 0x405390
    int64_t v25; // 0x405390
    int64_t v26; // 0x405390
    int64_t v27; // 0x405390
    int64_t v28; // 0x405390
    int64_t v29; // 0x405390
    int64_t v30; // 0x405390
    int64_t v31; // 0x405390
    int64_t v32; // 0x405390
    int64_t v33; // 0x405390
    int64_t v34; // 0x405390
    int64_t v35; // 0x405390
    int64_t v36; // 0x405390
    int64_t v37; // 0x405390
    int64_t v38; // 0x405390
    int64_t v39; // 0x405390
    int64_t v40; // 0x405390
    int64_t v41; // 0x405390
    int64_t v42; // 0x405390
    if (v21 < 48) {
        // 0x4054a0
        v22 = 1024;
        v23 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x405480;
        } else {
            // 0x4054b4
            v22 = 1024;
            v23 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x405480;
            } else {
                // 0x4054c6
                v22 = 1000;
                v23 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x405480;
                    }
                    case 105: {
                        char v43 = *(char *)(v8 + 2); // 0x405aa2
                        v22 = 1024;
                        v23 = (v43 == 66 ? 2 : 1) + (int64_t)(v43 == 66);
                        goto lab_0x405480;
                    }
                    default: {
                        // 0x4054db
                        g89 = v21;
                        v22 = 1000;
                        v23 = 2;
                        v15 = v20;
                        v11 = v19;
                        v25 = v20;
                        v32 = 1;
                        v24 = v19;
                        v26 = 1024;
                        v33 = 1;
                        v37 = -0x20000000000000;
                        v38 = 1;
                        v27 = 1024;
                        v34 = 1;
                        v40 = -0x20000000000000;
                        v28 = 1024;
                        v35 = 1;
                        v42 = -0x20000000000000;
                        v29 = 1024;
                        v36 = 1;
                        v41 = -0x20000000000000;
                        v30 = 1024;
                        v31 = 1;
                        v39 = -0x20000000000000;
                        switch (v12) {
                            case 69: {
                                goto lab_0x405768;
                            }
                            case 70: {
                                goto lab_0x405515;
                            }
                            case 71: {
                                goto lab_0x4057d0;
                            }
                            case 72: {
                                goto lab_0x405515;
                            }
                            case 73: {
                                goto lab_0x405515;
                            }
                            case 74: {
                                goto lab_0x405515;
                            }
                            case 75: {
                                goto lab_0x4055b5;
                            }
                            case 76: {
                                goto lab_0x405515;
                            }
                            case 77: {
                                goto lab_0x4055f8;
                            }
                            case 78: {
                                goto lab_0x405515;
                            }
                            case 79: {
                                goto lab_0x405515;
                            }
                            case 80: {
                                goto lab_0x405698;
                            }
                            case 81: {
                                goto lab_0x405515;
                            }
                            case 82: {
                                goto lab_0x405515;
                            }
                            case 83: {
                                goto lab_0x405515;
                            }
                            case 84: {
                                goto lab_0x405700;
                            }
                            case 85: {
                                goto lab_0x405515;
                            }
                            case 86: {
                                goto lab_0x405515;
                            }
                            case 87: {
                                goto lab_0x405515;
                            }
                            case 88: {
                                goto lab_0x405515;
                            }
                            case 89: {
                                goto lab_0x405838;
                            }
                            case 90: {
                                goto lab_0x4058a0;
                            }
                            case 91: {
                                goto lab_0x405515;
                            }
                            case 92: {
                                goto lab_0x405515;
                            }
                            case 93: {
                                goto lab_0x405515;
                            }
                            case 94: {
                                goto lab_0x405515;
                            }
                            case 95: {
                                goto lab_0x405515;
                            }
                            case 96: {
                                goto lab_0x405515;
                            }
                            case 97: {
                                goto lab_0x405515;
                            }
                            case 98: {
                                goto lab_0x405665;
                            }
                            case 99: {
                                goto lab_0x405558;
                            }
                            case 100: {
                                goto lab_0x405515;
                            }
                            case 101: {
                                goto lab_0x405515;
                            }
                            case 102: {
                                goto lab_0x405515;
                            }
                            case 103: {
                                goto lab_0x4057d0;
                            }
                            case 104: {
                                goto lab_0x405515;
                            }
                            case 105: {
                                goto lab_0x405515;
                            }
                            case 106: {
                                goto lab_0x405515;
                            }
                            case 107: {
                                goto lab_0x4055b5;
                            }
                            case 108: {
                                goto lab_0x405515;
                            }
                            case 109: {
                                goto lab_0x4055f8;
                            }
                            case 110: {
                                goto lab_0x405515;
                            }
                            case 111: {
                                goto lab_0x405515;
                            }
                            case 112: {
                                goto lab_0x405515;
                            }
                            case 113: {
                                goto lab_0x405515;
                            }
                            case 114: {
                                goto lab_0x405515;
                            }
                            case 115: {
                                goto lab_0x405515;
                            }
                            case 116: {
                                goto lab_0x405700;
                            }
                            default: {
                                goto lab_0x405480;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x405480;
    }
  lab_0x405407:
    // 0x405407
    *a4 = v13;
    // 0x40540e
    return v9 & 0xffffffff;
  lab_0x405480:
    // 0x405480
    g87 = v12 - 66;
    v15 = v20;
    v11 = v19;
    v25 = v20;
    v32 = v23;
    v24 = v19;
    v38 = v23;
    switch (v12) {
        case 66: {
            // 0x405551
            v25 = 1024 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x405558;
        }
        case 69: {
            // 0x405750
            v29 = v22;
            v36 = v23;
            v41 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x405768;
        }
        case 71: {
            goto lab_0x4057d0;
        }
        case 75: {
            goto lab_0x4055b5;
        }
        case 77: {
            goto lab_0x4055e0;
        }
        case 80: {
            // 0x405680
            v27 = v22;
            v34 = v23;
            v40 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x405698;
        }
        case 84: {
            goto lab_0x4056e8;
        }
        case 89: {
            // 0x405820
            goto lab_0x405838;
        }
        case 90: {
            // 0x405888
            v30 = v22;
            v31 = v23;
            v39 = -0x8000000000000000 / (int128_t)v22;
            goto lab_0x4058a0;
        }
        case 98: {
            goto lab_0x405665;
        }
        case 99: {
            goto lab_0x405558;
        }
        case 103: {
            goto lab_0x4057d0;
        }
        case 107: {
            goto lab_0x4055b5;
        }
        case 109: {
            goto lab_0x4055e0;
        }
        case 116: {
            goto lab_0x4056e8;
        }
        case 119: {
            // 0x405599
            v25 = 2 * v20;
            v32 = v23;
            v24 = v19;
            goto lab_0x405558;
        }
        default: {
            goto lab_0x405515;
        }
    }
    // 0x4057b8
    goto lab_0x4057d0;
    // 0x4055a0
    goto lab_0x4055b5;
  lab_0x4055e0:
    // 0x4055e0
    v26 = v22;
    v33 = v23;
    v37 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x4055f8;
  lab_0x4056e8:
    // 0x4056e8
    v28 = v22;
    v35 = v23;
    v42 = -0x8000000000000000 / (int128_t)v22;
    goto lab_0x405700;
  lab_0x405665:
    // 0x405665
    v25 = 512 * v20;
    v32 = v38;
    v24 = v19;
    goto lab_0x405558;
  lab_0x405558:;
    int64_t v63 = v24;
    int64_t v64 = v32 + v8; // 0x405558
    *v7 = v64;
    v13 = v25;
    v9 = (*(char *)v64 != 0 ? v63 | 2 : v63) & 0xffffffff;
    goto lab_0x405407;
  lab_0x405515:
    // 0x405515
    *a4 = v15;
    // 0x40540e
    return (v11 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405768:;
    uint64_t v65 = v29;
    int64_t v66 = v20;
    int64_t v67 = -0x8000000000000000; // 0x4057a1
    int64_t v68 = 1; // 0x4057a1
    if (v66 >= v41) {
        // 0x405780
        v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
        v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : 0;
    }
    int32_t v69 = 5; // 0x405795
    int32_t v70 = v69; // 0x405798
    int64_t v71 = v68; // 0x405798
    int64_t v59 = v67; // 0x405798
    int64_t v61 = v36; // 0x405798
    int64_t v62 = v68; // 0x405798
    while (v69 != 0) {
        // 0x40579e
        v66 = v67;
        v67 = -0x8000000000000000;
        v68 = 1;
        if (v66 >= v41) {
            // 0x405780
            v67 = v66 > 0x7fffffffffffffff / v65 ? 0x7fffffffffffffff : v66 * v65;
            v68 = v66 > 0x7fffffffffffffff / v65 ? 1 : v71;
        }
        // 0x405795
        v69 = v70 - 1;
        v70 = v69;
        v71 = v68;
        v59 = v67;
        v61 = v36;
        v62 = v68;
    }
    goto lab_0x4059d0;
  lab_0x4057d0:
    // 0x4057d0
    while (true) {
        // 0x405806
        int32_t v44; // 0x405390
        int32_t v45 = v44;
        int64_t v46; // 0x405390
        int64_t v47 = v46;
        int64_t v48 = -0x8000000000000000; // 0x405809
        int64_t v49 = 1; // 0x405809
        int64_t v50; // 0x405390
        uint64_t v51; // 0x405390
        if (v47 >= v51) {
            int64_t v52 = v50;
            uint64_t v53; // 0x405390
            int64_t v54 = v47 > 0x7fffffffffffffff / v53 ? 0x7fffffffffffffff : v47 * v53;
            int64_t v55 = v47 > 0x7fffffffffffffff / v53 ? 1 : v52;
            v48 = v54;
            v49 = v55;
        }
        int64_t v56 = v49;
        int64_t v57 = v48;
        int32_t v58 = v45 - 1; // 0x4057fd
        v46 = v57;
        v44 = v58;
        v50 = v56;
        v59 = v57;
        int64_t v60; // 0x405390
        v61 = v60;
        v62 = v56;
        if (v58 == 0) {
            // break -> 0x4059d0
            break;
        }
    }
    goto lab_0x4059d0;
  lab_0x4055b5:;
    int64_t v76 = 1;
    v25 = -0x8000000000000000;
    v32 = v76;
    v24 = 1;
    int64_t v73; // 0x405390
    int64_t v74; // 0x405390
    int64_t v75; // 0x405390
    int64_t v72; // 0x405390
    if (v20 < -0x20000000000000) {
        goto lab_0x405558;
    } else {
        int64_t v77 = 1024;
        v73 = 0x7fffffffffffffff / v77;
        v75 = v77;
        v74 = v20;
        v72 = v76;
        goto lab_0x4055cc;
    }
  lab_0x4055f8:
    // 0x4055f8
    v25 = -0x8000000000000000;
    v32 = v33;
    v24 = 1;
    if (v20 < v37) {
        goto lab_0x405558;
    } else {
        int64_t v78 = 0x7fffffffffffffff / v26;
        v25 = 0x7fffffffffffffff;
        v32 = v33;
        v24 = 1;
        if (v20 > v78) {
            goto lab_0x405558;
        } else {
            int64_t v79 = v26 * v20; // 0x405618
            v25 = -0x8000000000000000;
            v32 = v33;
            v24 = 1;
            v73 = v78;
            v75 = v26;
            v74 = v79;
            v72 = v33;
            if (v79 < v37) {
                goto lab_0x405558;
            } else {
                goto lab_0x4055cc;
            }
        }
    }
  lab_0x405698:;
    uint64_t v80 = v27;
    int64_t v81 = v20;
    int64_t v82 = -0x8000000000000000; // 0x4056d1
    int64_t v83 = 1; // 0x4056d1
    if (v40 <= v81) {
        // 0x4056b0
        v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
        v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : 0;
    }
    int32_t v84 = 4; // 0x4056c5
    int32_t v85 = v84; // 0x4056c8
    int64_t v86 = v83; // 0x4056c8
    v59 = v82;
    v61 = v34;
    v62 = v83;
    while (v84 != 0) {
        // 0x4056ce
        v81 = v82;
        v82 = -0x8000000000000000;
        v83 = 1;
        if (v40 <= v81) {
            // 0x4056b0
            v82 = v81 > 0x7fffffffffffffff / v80 ? 0x7fffffffffffffff : v81 * v80;
            v83 = v81 > 0x7fffffffffffffff / v80 ? 1 : v86;
        }
        // 0x4056c5
        v84 = v85 - 1;
        v85 = v84;
        v86 = v83;
        v59 = v82;
        v61 = v34;
        v62 = v83;
    }
    goto lab_0x4059d0;
  lab_0x405700:;
    uint64_t v87 = v28;
    int64_t v88 = v20;
    int64_t v89 = -0x8000000000000000; // 0x405739
    int64_t v90 = 1; // 0x405739
    if (v42 <= v88) {
        // 0x405718
        v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
        v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : 0;
    }
    int32_t v91 = 3; // 0x40572d
    int32_t v92 = v91; // 0x405730
    int64_t v93 = v90; // 0x405730
    v59 = v89;
    v61 = v35;
    v62 = v90;
    while (v91 != 0) {
        // 0x405736
        v88 = v89;
        v89 = -0x8000000000000000;
        v90 = 1;
        if (v42 <= v88) {
            // 0x405718
            v89 = v88 > 0x7fffffffffffffff / v87 ? 0x7fffffffffffffff : v88 * v87;
            v90 = v88 > 0x7fffffffffffffff / v87 ? 1 : v93;
        }
        // 0x40572d
        v91 = v92 - 1;
        v92 = v91;
        v93 = v90;
        v59 = v89;
        v61 = v35;
        v62 = v90;
    }
    goto lab_0x4059d0;
  lab_0x405838:
    // 0x405838
    while (true) {
        // 0x40586e
        int32_t v94; // 0x405390
        int32_t v95 = v94;
        int64_t v96; // 0x405390
        int64_t v97 = v96;
        int64_t v98 = -0x8000000000000000; // 0x405871
        int64_t v99 = 1; // 0x405871
        int64_t v100; // 0x405390
        uint64_t v101; // 0x405390
        if (v101 <= v97) {
            int64_t v102 = v100;
            uint64_t v103; // 0x405390
            int64_t v104 = v97 > 0x7fffffffffffffff / v103 ? 0x7fffffffffffffff : v97 * v103;
            int64_t v105 = v97 > 0x7fffffffffffffff / v103 ? 1 : v102;
            v98 = v104;
            v99 = v105;
        }
        int64_t v106 = v99;
        int64_t v107 = v98;
        int32_t v108 = v95 - 1; // 0x405865
        v96 = v107;
        v94 = v108;
        v100 = v106;
        v59 = v107;
        int64_t v109; // 0x405390
        v61 = v109;
        v62 = v106;
        if (v108 == 0) {
            // break -> 0x4059d0
            break;
        }
    }
    goto lab_0x4059d0;
  lab_0x4058a0:;
    uint64_t v110 = v30;
    int64_t v111 = v20;
    int64_t v112 = -0x8000000000000000; // 0x4058d9
    int64_t v113 = 1; // 0x4058d9
    if (v39 <= v111) {
        // 0x4058b8
        v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
        v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : 0;
    }
    int32_t v114 = 6; // 0x4058cd
    int32_t v115 = v114; // 0x4058d0
    int64_t v116 = v113; // 0x4058d0
    v59 = v112;
    v61 = v31;
    v62 = v113;
    while (v114 != 0) {
        // 0x4058d6
        v111 = v112;
        v112 = -0x8000000000000000;
        v113 = 1;
        if (v39 <= v111) {
            // 0x4058b8
            v112 = v111 > 0x7fffffffffffffff / v110 ? 0x7fffffffffffffff : v111 * v110;
            v113 = v111 > 0x7fffffffffffffff / v110 ? 1 : v116;
        }
        // 0x4058cd
        v114 = v115 - 1;
        v115 = v114;
        v116 = v113;
        v59 = v112;
        v61 = v31;
        v62 = v113;
    }
    goto lab_0x4059d0;
  lab_0x4059d0:
    // 0x4059d0
    v25 = v59;
    v32 = v61;
    v24 = (v62 | v19) & 0xffffffff;
    goto lab_0x405558;
  lab_0x4055cc:
    // 0x4055cc
    v25 = 0x7fffffffffffffff;
    v32 = v72;
    v24 = 1;
    if (v73 >= v74) {
        // 0x4055d5
        v25 = v74 * v75;
        v32 = v72;
        v24 = v19;
    }
    goto lab_0x405558;
}
// Address range: 0x405ae0 - 0x405b5b
int64_t function_405ae0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405ae7
    if (fileno(stream) < 0) {
        // 0x405b47
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405afa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405b2b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405b47
            return fclose(stream);
        }
    }
    // 0x405afc
    if ((int32_t)function_405b60(a1, v1) == 0) {
        // 0x405b47
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405b08
    int32_t v3 = *v2; // 0x405b10
    int64_t result = fclose(stream); // 0x405b1e
    if (v3 != 0) {
        // 0x405b50
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405b20
    return result;
}
// Address range: 0x405b60 - 0x405ba0
int64_t function_405b60(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405b7a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405b7a
        return fflush(stream);
    }
    // 0x405b88
    function_405ba0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405ba0 - 0x405bf7
int64_t function_405ba0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405ba0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405baa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405bdb
    int64_t result = -1; // 0x405be4
    if (v1 != -1) {
        // 0x405be6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405bf2
    return result;
}
// Address range: 0x405c00 - 0x405cdf
int64_t function_405c00(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405c0c
    uint32_t v2 = *v1; // 0x405c0c
    int64_t v3 = a2 & 0xffffffff; // 0x405c11
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405c14
    uint64_t v5 = (int64_t)*v4; // 0x405c14
    int64_t v6; // 0x405c82
    if (v3 <= v5) {
      lab_0x405c7c_2:
        // 0x405c7c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405c02
    int64_t v8 = v2; // 0x405c00
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x405c7c
        goto lab_0x405c7c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405c38
    int64_t v17; // 0x405c46
    int64_t * v18; // 0x405c60
    int64_t * v19; // 0x405c63
    int64_t v20; // 0x405c6e
    int64_t v21; // 0x405c46
    while ((v16 & 0xffffffff) > v10) {
        // 0x405c43
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405c60
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405c77
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x405c7c
            goto lab_0x405c7c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x405c7c
            goto lab_0x405c7c_2;
        }
        // 0x405c32
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x405cbb
    int64_t * v23 = (int64_t *)v22; // 0x405cc0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405cc3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405cc0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405cd7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x405c2d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x405c7c
            goto lab_0x405c7c_2;
        }
        // 0x405c32
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405c43
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405c60
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405c77
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x405c7c
                goto lab_0x405c7c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x405c7c
                goto lab_0x405c7c_2;
            }
            // 0x405c32
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405ca0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405cc0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405cd7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x405c7c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405ce0 - 0x4062fc
int64_t function_405ce0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x405cff
    int64_t v2 = *v1; // 0x405cff
    char * str2 = (char *)v2; // 0x405d0c
    char c = *str2; // 0x405d0c
    int64_t v3 = v2; // 0x405d38
    int64_t v4 = 0; // 0x405ce0
    int32_t v5; // 0x405ce0
    int64_t v6; // 0x405ce0
    int64_t v7; // 0x405ce0
    int64_t v8; // 0x405ce0
    int64_t v9; // 0x405ce0
    int64_t v10; // 0x405ce0
    int64_t v11; // 0x405ce0
    int64_t v12; // 0x405ce0
    int64_t v13; // 0x405ce0
    int64_t str3; // 0x405ce0
    int64_t v14; // 0x405ce0
    int64_t v15; // 0x405ce0
    int64_t v16; // 0x405ce0
    int64_t v17; // 0x405ce0
    int32_t v18; // 0x405ce0
    int32_t v19; // 0x405ce0
    int32_t v20; // 0x405ce0
    int32_t v21; // 0x405ce0
    int32_t v22; // 0x405ce0
    int32_t v23; // 0x405ce0
    int32_t v24; // 0x405ce0
    int32_t v25; // 0x405ce0
    int32_t v26; // 0x405ce0
    int32_t v27; // 0x405ce0
    int32_t v28; // 0x405ce0
    int32_t v29; // 0x405ce0
    int64_t nmemb; // 0x405ce0
    int64_t v30; // 0x405ce0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x405d3c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405d38
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405d48
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x405d4e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405d18
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x405d7c
                int64_t v34; // 0x405ce0
                int64_t v35; // 0x405ce0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405d85
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405f00;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405d96
                int64_t v37 = *(int64_t *)v36; // 0x405d9a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405d70
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405d85
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405f00;
                        }
                    }
                    // 0x405d96
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
                  lab_0x405de6:
                    // 0x405de6
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
                        goto lab_0x405e40;
                    } else {
                        if (v11 == 0) {
                            // 0x405fb0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405e40;
                        } else {
                            if (v39 == 0) {
                                // 0x405f60
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405e0a;
                                } else {
                                    // 0x405f6c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405e0a;
                                    } else {
                                        // 0x405f7a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405e0a;
                                        } else {
                                            goto lab_0x405e40;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405e0a;
                            }
                        }
                    }
                }
              lab_0x405e51:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406026
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4061d2
                            flockfile(g49);
                            int64_t v41 = *v1; // 0x4061f2
                            __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40623f
                            int64_t v43 = (int64_t)g49;
                            int64_t v44 = v43; // 0x406259
                            int64_t v45; // 0x40625b
                            if (*(char *)v42 != 0) {
                                // 0x40625b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g49;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406253
                            while (v17 + nmemb != v42) {
                                // 0x406255
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40625b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g49;
                                }
                                // 0x406248
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406280
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g49);
                            v40 = *v1;
                        } else {
                            // 0x406034
                            __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40618f
                        free((int64_t *)v17);
                    }
                    // 0x406089
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4060a0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405f4e
                    return 63;
                }
                // 0x405e70
                v5 = v39;
                if (v13 != 0) {
                    // 0x405ef4
                    v35 = v13;
                    v34 = v25;
                  lab_0x405f00:;
                    int32_t * v49 = (int32_t *)a7; // 0x405f10
                    uint32_t v50 = *v49; // 0x405f10
                    int64_t v51 = v50; // 0x405f10
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405f1a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405f23
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40614f
                                __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x4060fa
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405f4e
                            return 63;
                        }
                        // 0x405f98
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4062af
                                    __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4061ad
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4061c0
                                // 0x405f4e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4060be
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4060d2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405f3b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405f3e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405f42
                    int64_t result = v59; // 0x405f48
                    if (v58 != 0) {
                        // 0x405f4a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405f4e
                    return result;
                }
            } else {
                // 0x405d4e
                v5 = v32;
            }
            // break -> 0x405e75
            break;
        }
    }
    // 0x405e75
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405e8d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405e97
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405f4e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405fd9
        __fprintf_chk(g49, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405ec6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405ed6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405e40:
    // 0x405e40
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405e40
    int64_t v63 = *(int64_t *)v62; // 0x405e44
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405e51
        goto lab_0x405e51;
    }
    goto lab_0x405de6;
  lab_0x405e0a:
    // 0x405e0a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405ce0
    int32_t v65; // 0x405ce0
    int32_t v66; // 0x405ce0
    if (v27 != 0) {
        goto lab_0x405e40;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405fc0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405e40;
            } else {
                goto lab_0x405e31;
            }
        } else {
            // 0x405e25
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40611c
                int64_t v67 = (int64_t)mem; // 0x40611c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405e40;
                } else {
                    // 0x40612f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405e31;
                }
            } else {
                goto lab_0x405e31;
            }
        }
    }
  lab_0x405e31:
    // 0x405e31
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405e40;
}
// Address range: 0x406300 - 0x4068c6
int64_t function_406300(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406321
    if (v3 < 1) {
        // 0x4064de
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40631d
    int32_t v5 = *(int32_t *)a7; // 0x406329
    uint64_t v6 = a1 & 0xffffffff; // 0x40632b
    int64_t v7 = v2; // 0x406330
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406333
    *v8 = 0;
    int64_t v9; // 0x406300
    int64_t v10; // 0x406300
    int64_t v11; // 0x406300
    int64_t v12; // 0x406300
    int64_t str; // 0x406300
    int64_t v13; // 0x406300
    int64_t v14; // 0x406300
    int64_t v15; // 0x406300
    int64_t v16; // 0x406300
    int64_t v17; // 0x406300
    int32_t v18; // 0x406300
    char v19; // 0x406300
    if (v5 == 0) {
        // 0x406518
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40634a;
    } else {
        // 0x406343
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406390
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406393
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406458;
            } else {
                int64_t v22 = v7 + 1; // 0x4063a6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4063b6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40646c;
                } else {
                    goto lab_0x4063c8;
                }
            }
        } else {
            goto lab_0x40634a;
        }
    }
  lab_0x40634a:
    // 0x40634a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406350
    *v24 = 0;
    int64_t v25; // 0x406300
    int64_t v26; // 0x406300
    int64_t v27; // 0x406300
    switch (*(char *)&v2) {
        case 45: {
            // 0x406440
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40644d;
        }
        case 43: {
            // 0x406750
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40644d;
        }
        default: {
            // 0x40636c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4066cf
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4067e8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40644d;
                } else {
                    // 0x4066dd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40637a;
                }
            } else {
                goto lab_0x40637a;
            }
        }
    }
  lab_0x406458:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40645f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4063c8;
    } else {
        goto lab_0x40646c;
    }
  lab_0x40637a:
    // 0x40637a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40644d;
  lab_0x40644d:
    // 0x40644d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406458;
  lab_0x4063c8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4063c8
    int64_t v31 = v30; // 0x4063c8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4063ca
    if ((int64_t)*v32 > v31) {
        // 0x4063cf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4063d2
    if (*v33 > v30) {
        // 0x4063d7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4063da
    int64_t v35 = v31; // 0x4063de
    int64_t v36 = v15; // 0x4063de
    int64_t v37; // 0x406300
    int64_t v38; // 0x406300
    int64_t v39; // 0x406300
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406548
        int64_t v41 = v40; // 0x406548
        v2 = v41;
        int64_t v42; // 0x406300
        if (*v33 == v40) {
            // 0x406730
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406738
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406554
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406558
                function_405c00(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406568
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406571
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40657a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406591
            int64_t v47 = v45 & 0xffffffff; // 0x406595
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40659e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4065a4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4065a6;
                }
            }
            int64_t v48 = v47 + 1; // 0x406580
            int64_t v49 = v48 & 0xffffffff; // 0x406580
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406591
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40659e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4065a4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4065a6;
                    }
                }
                // 0x406580
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406748
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4065a6;
    } else {
        goto lab_0x4063e4;
    }
  lab_0x40646c:
    // 0x40646c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40646f
    int64_t v51 = v12; // 0x40646f
    int64_t v52 = v14; // 0x40646f
    if (*(char *)v10 == 0) {
        goto lab_0x4063c8;
    } else {
        goto lab_0x406475;
    }
  lab_0x4063e4:;
    int32_t v53 = v35; // 0x4063e4
    int64_t v54; // 0x406300
    int64_t v55; // 0x406300
    int64_t v56; // 0x406300
    int64_t v57; // 0x406300
    int64_t v58; // 0x406300
    int64_t v59; // 0x406300
    char * v60; // 0x406300
    int64_t v61; // 0x406300
    int64_t v62; // 0x4063f9
    int64_t v63; // 0x406300
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406533
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406536;
    } else {
        // 0x4063ec
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406300
        int64_t v66 = v65 ? -1 : 1; // 0x406400
        int64_t v67 = (int64_t)"--"; // 0x406300
        int64_t v68 = v62; // 0x406300
        int64_t v69 = 3; // 0x406400
        unsigned char v70 = *(char *)v68; // 0x406400
        char v71 = *(char *)v67; // 0x406400
        char v72 = v71; // 0x406400
        bool v73 = false; // 0x406400
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
            // 0x4064f0
            if (*(char *)v62 == 45) {
                // 0x4065b0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4065b0
                if (c == 0) {
                    goto lab_0x4064fa;
                } else {
                    // 0x4065bd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406640;
                    } else {
                        if (c == 45) {
                            // 0x406823
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406695;
                        } else {
                            // 0x4065ce
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406640;
                            } else {
                                // 0x4065d3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x4065f4;
                                } else {
                                    // 0x4065da
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406640;
                                    } else {
                                        goto lab_0x4065f4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x4064fa;
            }
        } else {
            uint32_t v75 = *v33; // 0x406410
            v2 = v75;
            int32_t v76 = *v32; // 0x406413
            int64_t v77 = v35 + 1; // 0x406416
            int32_t v78 = v77; // 0x406419
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406780
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406427
                    function_405c00(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406435
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406536;
        }
    }
  lab_0x406475:;
    // 0x406475
    int64_t v79; // bp-104, 0x406300
    int64_t v80 = &v79; // 0x40630a
    int64_t v81 = v50 + 1; // 0x406475
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40647c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406481
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406485
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406489
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406491
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406496
    int32_t c2 = v84; // 0x406496
    char * found_char_pos = strchr(str2, c2); // 0x406496
    int64_t v87 = *v82; // 0x40649b
    v2 = v87;
    int64_t v88 = *v85; // 0x4064a5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4064b0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4067a0
            __fprintf_chk(g49, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40676d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4064de
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406496
    char v91 = *(char *)(v90 + 1); // 0x4064cb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406485
        if (v91 != 58) {
            // 0x4064de
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x4066f4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x4067f8
                *v8 = 0;
            } else {
                // 0x4067dc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40671e
            *v83 = 0;
            // 0x4064de
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x4066fe
        if (v93 != 0) {
            // 0x406790
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40671e
            *v83 = 0;
            // 0x4064de
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406711
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40671e
            *v83 = 0;
            // 0x4064de
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40685a
            __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40680a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406811
        // 0x40671e
        *v83 = 0;
        // 0x4064de
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406669
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40666b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406890
                __fprintf_chk(g49, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406841
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406848
            // 0x4064de
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406676
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40667a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406695;
  lab_0x4065a6:
    // 0x4065a6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4063e4;
  lab_0x406695:;
    int64_t v99 = function_405ce0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4066b3
    // 0x4064de
    return v99 & 0xffffffff;
  lab_0x406536:;
    int32_t v100 = v55; // 0x406536
    if (v100 != (int32_t)v59) {
        // 0x40653a
        *(int32_t *)a7 = v100;
    }
    // 0x4064de
    return 0xffffffff;
  lab_0x4064fa:
    // 0x4064fa
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406501
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4064de
    return v99 & 0xffffffff;
  lab_0x406640:
    // 0x406640
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406475;
  lab_0x4065f4:
    // 0x4065f4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405ce0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40661a
    if ((int32_t)v101 != -1) {
        // 0x4064de
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40662f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406640;
}
// Address range: 0x4068d0 - 0x406926
int64_t function_4068d0(int64_t a1) {
    // 0x4068d0
    *(int32_t *)&g80 = g43;
    *(int32_t *)&g81 = g42;
    int64_t v1; // 0x4068d0
    int64_t result = function_406300(v1, v1, v1, v1, v1, v1, &g80, a1 & 0xffffffff); // 0x4068f6
    g43 = *(int32_t *)&g80;
    g85 = (char *)g83;
    *(int32_t *)&g41 = g82;
    return result;
}
// Address range: 0x406930 - 0x406948
int64_t function_406930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406930
    return function_4068d0(1);
}
// Address range: 0x406950 - 0x406963
int64_t function_406950(int64_t a1, int64_t a2, char * a3, char (**a4)[17], int32_t a5, int64_t a6) {
    // 0x406950
    return function_4068d0(0);
}
// Address range: 0x406970 - 0x406985
int64_t function_406970(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406970
    return function_406300(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406990 - 0x4069a6
int64_t function_406990(void) {
    // 0x406990
    return function_4068d0(0);
}
// Address range: 0x4069b0 - 0x4069c8
int64_t function_4069b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4069b0
    return function_406300(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x4069d0 - 0x406a4a
int64_t function_4069d0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x4069db
    int64_t v2 = (int64_t)&g5; // 0x4069db
    int32_t * pwc; // 0x4069d0
    int64_t v3; // 0x4069d0
    int64_t n; // 0x4069d0
    if (a2 == 0) {
        goto lab_0x406a22;
    } else {
        // 0x4069dd
        if (a3 == 0) {
            // 0x406a08
            return -2;
        }
        // 0x4069e9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406a22;
        } else {
            goto lab_0x4069f4;
        }
    }
  lab_0x406a22:
    // 0x406a22
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x4069d0
    pwc = (int32_t *)&v4;
    goto lab_0x4069f4;
  lab_0x4069f4:;
    char * wstr = (char *)v3; // 0x4069fa
    int64_t ps; // 0x4069d0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x4069fa
    int64_t result = v5; // 0x4069fa
    if (v5 < 0xfffffffe) {
        // 0x406a08
        return result;
    }
    int64_t result2 = result; // 0x406a39
    if ((char)function_4147f0(0, v3) == 0) {
        // 0x406a3b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406a08
    return result2;
}
// Address range: 0x406a50 - 0x406a93
int64_t function_406a50(int64_t a1, int64_t a2, int64_t a3) {
    bool v1 = a1 == 0 | a2 == 0;
    if (v1) {
        // 0x406a6a
        return 0;
    }
    // 0x406a60
    int64_t v2; // 0x406a50
    int64_t result = v2 & -256 | (int64_t)v1; // 0x406a5c
    int64_t v3 = *(int64_t *)(a1 + 8); // 0x406a60
    if (v3 != *(int64_t *)(a2 + 8)) {
        // 0x406a6a
        return result;
    }
    int64_t v4 = v3; // 0x406a82
    v4--;
    int64_t result2 = 1; // 0x406a86
    while (v4 >= 0) {
        int64_t v5 = 8 * v4; // 0x406a78
        int64_t v6 = *(int64_t *)(*(int64_t *)(a1 + 16) + v5); // 0x406a7c
        result2 = result;
        if (v6 != *(int64_t *)(*(int64_t *)(a2 + 16) + v5)) {
            // break -> 0x406a6a
            break;
        }
        v4--;
        result2 = 1;
    }
    // 0x406a6a
    return result2;
}
// Address range: 0x406aa0 - 0x406b0b
int64_t function_406aa0(int64_t a1, int64_t a2, int32_t a3) {
    int64_t v1 = a1; // 0x406aad
    int64_t result; // 0x406aa0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = *(int64_t *)(v2 + 8); // 0x406ab3
        v1 = v3;
        if (v3 == 0) {
            int64_t v4 = *(int64_t *)(v2 + 16); // 0x406abc
            v1 = v4;
            if (v4 == 0) {
                // 0x406ac5
                result = v4;
                if ((int32_t)v4 != 0) {
                    // break -> 0x406b06
                    break;
                }
                int64_t v5 = *(int64_t *)v2; // 0x406ad8
                result = v4;
                if (v5 == 0) {
                    // break -> 0x406b06
                    break;
                }
                int64_t v6 = v2;
                int64_t v7 = v5;
                int64_t v8 = *(int64_t *)(v7 + 16); // 0x406ae0
                v1 = v8;
                while (v8 == 0 || v8 == v6) {
                    // 0x406af9
                    result = v8;
                    if ((int32_t)v8 != 0) {
                        return result;
                    }
                    int64_t v9 = *(int64_t *)v7; // 0x406ad8
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
  lab_0x406b06_2:
    // 0x406b06
    return result;
}
// Address range: 0x406b10 - 0x406c3f
int64_t function_406b10(int64_t * a1, int64_t a2, uint64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x406b10
    uint64_t v3 = *v2; // 0x406b10
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x406ba0
        *(char *)(v1 + 8) = 2;
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x406b1e
    char v5 = *(char *)(v4 + v3); // 0x406b29
    *(char *)a1 = v5;
    if (*(int32_t *)(a2 + 144) >= 2) {
        // 0x406b32
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x406b38
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                // 0x406b77
                *(char *)(v1 + 8) = 1;
                return 1;
            }
        }
    }
    switch (v5) {
        case 92: {
            if (a3 % 2 == 0) {
                // 0x406b77
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            int64_t v6 = v3 + 1;
            if (v6 >= *(int64_t *)(a2 + 88)) {
                // 0x406b77
                *(char *)(v1 + 8) = 1;
                return 1;
            }
            // 0x406bf0
            *v2 = v6;
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = *(char *)(v4 + v6);
            return 1;
        }
        case 91: {
            uint64_t v7 = v3 + 1;
            if (v7 >= *(int64_t *)(a2 + 88)) {
                // 0x406bce
                *(char *)(v1 + 8) = 1;
                *(char *)a1 = 91;
                return 1;
            }
            char v8 = *(char *)(v4 + v7); // 0x406bba
            *(char *)a1 = v8;
            switch (v8) {
                case 58: {
                    if ((a3 & 4) != 0) {
                        // 0x406c35
                        *(char *)(v1 + 8) = 30;
                        return 2;
                    }
                    // 0x406bce
                    *(char *)(v1 + 8) = 1;
                    *(char *)a1 = 91;
                    return 1;
                }
                case 61: {
                    // 0x406c20
                    *(char *)(v1 + 8) = 28;
                    return 2;
                }
                case 46: {
                    // 0x406c10
                    *(char *)(v1 + 8) = 26;
                    return 2;
                }
            }
            // 0x406bce
            *(char *)(v1 + 8) = 1;
            *(char *)a1 = 91;
            return 1;
        }
        case 93: {
            // 0x406be0
            *(char *)(v1 + 8) = 21;
            return 1;
        }
    }
    if (v5 == 94) {
        // 0x406b5b
        *(char *)(v1 + 8) = 25;
        return 1;
    }
    if (v5 == 45) {
        // 0x406b8d
        *(char *)(v1 + 8) = 22;
        return 1;
    }
    // 0x406b77
    *(char *)(v1 + 8) = 1;
    return 1;
}
// Address range: 0x406c40 - 0x406c5d
int64_t function_406c40(int64_t a1, int64_t a2) {
    // 0x406c40
    if (*(char *)(a2 + 48) != 17 || *(int64_t *)(a2 + 40) != a1) {
        // 0x406c46
        return 0;
    }
    char * v1 = (char *)(a2 + 50); // 0x406c56
    *v1 = *v1 | 8;
    return 0;
}
// Address range: 0x406c60 - 0x406e6f
int64_t function_406c60(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x406c75
    uint64_t v2 = 0x100000000 * a2 >> 32; // 0x406c85
    int64_t v3 = *(int64_t *)(v1 + 48) + 24 * a4; // 0x406c8d
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x406c91
    int64_t v5 = *v4; // 0x406c91
    if (v5 < 1) {
        // 0x406e3d
        return (int32_t)v2 >> 1;
    }
    int64_t v6 = 1 << a3 % 64;
    int32_t v7 = v2;
    int64_t v8 = v5; // 0x406cde
    int64_t v9 = 0; // 0x406cde
    int64_t v10; // 0x406ce9
    int64_t v11; // 0x406c60
    int64_t v12; // 0x406c60
    int64_t v13; // 0x406c60
    int64_t v14; // 0x406c60
    while (true) {
      lab_0x406cf3_2:
        // 0x406cf3
        v13 = v9;
        v10 = v8;
        int64_t v15 = *(int64_t *)(*(int64_t *)(v3 + 16) + 8 * v13); // 0x406cf7
        int64_t v16 = 16 * v15 + *(int64_t *)v1; // 0x406d02
        char v17 = *(char *)(v16 + 8); // 0x406d05
        if (v17 == 8) {
            if (v7 % 2 != 0) {
                // 0x406d40
                if (*(int64_t *)v16 == a3) {
                    // 0x406d20
                    return 0xffffffff;
                }
            }
            goto lab_0x406ce5;
        } else {
            if (v17 != 9) {
                if (a5 == -1 || v17 != 4) {
                    goto lab_0x406ce5;
                } else {
                    // 0x406d6a
                    v14 = 24 * v15 + 16;
                    v11 = *(int64_t *)(a1 + 216) + 40 * a5;
                    while (true) {
                      lab_0x406da0:
                        // 0x406da0
                        v12 = v11;
                        if (*(int64_t *)v12 != v15) {
                            goto lab_0x406e10;
                        } else {
                            if (a3 > 63) {
                                goto lab_0x406db9;
                            } else {
                                // 0x406dac
                                if ((v6 & (int64_t)*(int16_t *)(v12 + 34)) == 0) {
                                    goto lab_0x406e10;
                                } else {
                                    goto lab_0x406db9;
                                }
                            }
                        }
                    }
                  lab_0x406e1c:;
                    int64_t v18 = v13 + 1; // 0x406e2f
                    uint64_t v19 = *v4; // 0x406e33
                    v8 = v19;
                    v9 = v18;
                    if (v19 <= v18) {
                        // break -> 0x406e3d
                        break;
                    }
                    goto lab_0x406cf3_2;
                }
            } else {
                if ((v7 & 2) != 0) {
                    // 0x406d1b
                    if (*(int64_t *)v16 == a3) {
                        // 0x406d20
                        return 0;
                    }
                }
                goto lab_0x406ce5;
            }
        }
    }
  lab_0x406e3d:
    // 0x406e3d
    return v7 >> 1;
  lab_0x406e10:
    // 0x406e10
    v11 = v12 + 40;
    if (*(char *)(v12 + 32) == 0) {
        // break -> 0x406e1c
        goto lab_0x406e1c;
    }
    goto lab_0x406da0;
  lab_0x406db9:;
    int64_t v20 = *(int64_t *)*(int64_t *)(v14 + *(int64_t *)(v1 + 40)); // 0x406dc2
    if (v20 == a4) {
        // 0x406e58
        return -((v2 % 2)) & 0xffffffff;
    }
    int32_t v21 = function_406c60(a1, v2 & 0xffffffff, a3, v20, a5); // 0x406de3
    if (v21 == -1) {
        // 0x406d20
        return 0xffffffff;
    }
    // 0x406dec
    if ((v7 & 2) != 0 == v21 == 0) {
        // 0x406d20
        return 0;
    }
    if (a3 <= 63) {
        int16_t * v22 = (int16_t *)(v12 + 34); // 0x406e07
        *v22 = *v22 & -1 - (int16_t)v6;
    }
    goto lab_0x406e10;
  lab_0x406ce5:;
    int64_t v23 = v13 + 1; // 0x406ce5
    v8 = v10;
    v9 = v23;
    if (v10 <= v23) {
        // break -> 0x406e3d
        goto lab_0x406e3d;
    }
    goto lab_0x406cf3;
  lab_0x406cf3:
    // 0x406cf3
    goto lab_0x406cf3_2;
}
// Address range: 0x406e70 - 0x406ed6
int64_t function_406e70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = *(int64_t *)(a1 + 216) + 40 * a2; // 0x406e7b
    int64_t v2 = *(int64_t *)(v1 + 16); // 0x406e7f
    if (v2 > a5) {
        // 0x406ea6
        return 0xffffffff;
    }
    int64_t v3 = *(int64_t *)(v1 + 24); // 0x406e88
    if (v3 < a5) {
        // 0x406ea6
        return 1;
    }
    if (v3 == a5) {
        // 0x406eb3
        return function_406c60(a1, (int64_t)(v2 == a5) | 2, a3, a4, a6);
    }
    // 0x406e9f
    if (v2 == a5) {
        // 0x406eb3
        return function_406c60(a1, 1, a3, a4, a6);
    }
    // 0x406ea6
    return 0;
}
// Address range: 0x406ee0 - 0x406f7c
int64_t function_406ee0(int64_t a1, uint64_t a2) {
    // 0x406ee0
    if (*(int32_t *)(a1 + 144) >= 2) {
        if (a2 >= 0x2000000000000000) {
            // 0x406f70
            return 12;
        }
        int64_t * v1 = (int64_t *)(a1 + 16); // 0x406f04
        int32_t v2 = a2;
        int64_t * mem = realloc((int64_t *)*v1, 4 * v2); // 0x406f10
        if (mem == NULL) {
            // 0x406f70
            return 12;
        }
        int64_t * v3 = (int64_t *)(a1 + 24); // 0x406f1a
        int64_t v4 = *v3; // 0x406f1a
        *v1 = (int64_t)mem;
        if (v4 != 0) {
            int64_t * mem2 = realloc((int64_t *)v4, 8 * v2); // 0x406f2f
            if (mem2 == NULL) {
                // 0x406f70
                return 12;
            }
            // 0x406f39
            *v3 = (int64_t)mem2;
        }
    }
    // 0x406f3d
    if (*(char *)(a1 + 139) == 0) {
        // 0x406f46
        *(int64_t *)(a1 + 64) = a2;
        return 0;
    }
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x406f58
    int64_t * mem3 = realloc((int64_t *)*v5, (int32_t)a2); // 0x406f5f
    if (mem3 == NULL) {
        // 0x406f70
        return 12;
    }
    // 0x406f69
    *v5 = (int64_t)mem3;
    // 0x406f46
    *(int64_t *)(a1 + 64) = a2;
    return 0;
}
// Address range: 0x406f80 - 0x406fe4
int64_t function_406f80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x406f8c
    int64_t v2 = *v1; // 0x406f8c
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x406f90
    int64_t v4 = *v3; // 0x406f90
    int64_t v5 = v4; // 0x406f97
    int64_t v6 = v2; // 0x406f97
    if (v2 == a1) {
        int64_t v7 = a1 + 1; // 0x406fb8
        *(int64_t *)a1 = 2 * v7;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)v7); // 0x406fca
        if (mem == NULL) {
            // 0x406faa
            return 0;
        }
        // 0x406fd4
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    // 0x406f99
    *v1 = v6 + 1;
    *(int64_t *)(8 * v6 + v5) = a2;
    // 0x406faa
    return 1;
}
// Address range: 0x406ff0 - 0x40711c
int64_t function_406ff0(int64_t a1, int64_t a2) {
    if (a1 == 0) {
        // 0x407028
        abort();
        // UNREACHABLE
    }
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x407004
    int64_t v2 = *v1; // 0x407004
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x407008
    int64_t v4 = *v3; // 0x407008
    if (v2 == 0) {
        // 0x407011
        *(int64_t *)v4 = a2;
        *v1 = *v1 + 1;
        // 0x40701e
        return 1;
    }
    int64_t v5 = v4; // 0x407063
    int64_t v6 = v2; // 0x407063
    if (v2 == a1) {
        // 0x4070f0
        *(int64_t *)a1 = 2 * a1;
        int64_t * mem = realloc((int64_t *)v4, 16 * (int32_t)a1); // 0x4070fe
        if (mem == NULL) {
            // 0x40701e
            return 0;
        }
        // 0x407108
        v5 = (int64_t)mem;
        *v3 = v5;
        v6 = *v1;
    }
    int64_t v7 = 8 * v6; // 0x407069
    int64_t v8; // 0x406ff0
    if (*(int64_t *)v5 > a2) {
        // 0x407076
        v8 = v7;
        if (v6 >= 1) {
            int64_t v9 = v7 + v5;
            int64_t v10 = v9 - 8; // 0x407080
            *(int64_t *)v9 = *(int64_t *)v10;
            v8 = 0;
            while (v10 != v5) {
                // 0x407080
                v9 = v10;
                v10 = v9 - 8;
                *(int64_t *)v9 = *(int64_t *)v10;
                v8 = 0;
            }
        }
    } else {
        int64_t v11 = v5 - 8; // 0x4070b0
        int64_t v12 = *(int64_t *)(v7 + v11); // 0x4070b0
        v8 = v7;
        if (v12 > a2) {
            *(int64_t *)(v7 + v5) = v12;
            int64_t v13 = v7 - 8; // 0x4070c4
            uint64_t v14 = *(int64_t *)(v13 + v11); // 0x4070c8
            v8 = v13;
            int64_t v15 = v13; // 0x4070d0
            while (v14 > a2) {
                // 0x4070c0
                *(int64_t *)(v15 + v5) = v14;
                v13 = v15 - 8;
                v14 = *(int64_t *)(v13 + v11);
                v8 = v13;
                v15 = v13;
            }
        }
    }
    // 0x407093
    *(int64_t *)(v8 + v5) = a2;
    *v1 = *v1 + 1;
    // 0x40701e
    return 1;
}
// Address range: 0x407120 - 0x40721b
int64_t function_407120(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a2 + 32; // 0x40712e
    int64_t * v2 = (int64_t *)(a2 + 16); // 0x40713b
    int64_t v3 = *v2; // 0x40713b
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 40) = 0;
    *(int64_t *)v1 = v3;
    int64_t size = 8 * v3; // 0x40714e
    int64_t * mem = malloc((int32_t)size); // 0x407156
    *(int64_t *)(a2 + 48) = (int64_t)mem;
    if (mem == NULL) {
        // 0x40719e
        return 12;
    }
    if (v3 >= 0 == (v3 != 0)) {
        int64_t v4 = 0; // 0x407170
        int64_t v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4); // 0x40717e
        int64_t v6 = size; // 0x407190
        int64_t v7; // 0x407195
        if ((*(char *)(size + 8 + 16 * v5) & 8) == 0) {
            // 0x407192
            v7 = function_406f80(v1, v5);
            v6 = v1;
            if ((char)v7 == 0) {
                // 0x40719e
                return 12;
            }
        }
        // 0x407170
        v4++;
        int64_t v8 = v6; // 0x407178
        while (*v2 > v4) {
            // 0x40717a
            v5 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v4);
            v6 = v8;
            if ((*(char *)(v8 + 8 + 16 * v5) & 8) == 0) {
                // 0x407192
                v7 = function_406f80(v1, v5);
                v6 = v1;
                if ((char)v7 == 0) {
                    // 0x40719e
                    return 12;
                }
            }
            // 0x407170
            v4++;
            v8 = v6;
        }
    }
    int64_t v9 = 24 * (*(int64_t *)(a1 + 136) & a3) + *(int64_t *)(a1 + 64); // 0x4071c8
    int64_t * v10 = (int64_t *)v9; // 0x4071cc
    uint64_t v11 = *v10; // 0x4071cc
    int64_t * v12 = (int64_t *)(v9 + 16); // 0x4071cf
    int64_t v13 = *v12; // 0x4071cf
    int64_t v14 = v11 + 1; // 0x4071d3
    int64_t * v15 = (int64_t *)(v9 + 8); // 0x4071d7
    int64_t v16 = v13; // 0x4071db
    int64_t v17 = v11; // 0x4071db
    int64_t v18 = v14; // 0x4071db
    if (*v15 <= v11) {
        int64_t * mem2 = realloc((int64_t *)v13, 16 * (int32_t)v14); // 0x407200
        if (mem2 == NULL) {
            // 0x40719e
            return 12;
        }
        // 0x40720a
        v16 = (int64_t)mem2;
        v17 = *v10;
        *v12 = v16;
        *v15 = 2 * v14;
        v18 = v17 + 1;
    }
    // 0x4071dd
    *v10 = v18;
    *(int64_t *)(8 * v17 + v16) = a2;
    return 0;
}
// Address range: 0x407220 - 0x407246
int64_t function_407220(uint64_t a1, int64_t a2) {
    uint64_t wc = a1 % 256; // 0x407225
    int32_t v1 = btowc((int32_t)wc); // 0x40722f
    int64_t v2 = v1; // 0x40722f
    int64_t result = v2; // 0x407237
    if (v1 == -1) {
        // 0x407239
        result = (a2 == 0 ? wc : v2) & 0xffffffff;
    }
    // 0x40723f
    return result;
}
// Address range: 0x407250 - 0x4072d0
int64_t function_407250(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 88); // 0x407252
    int64_t v2 = *(int64_t *)(a1 + 64); // 0x407257
    int64_t v3 = v2 - v1; // 0x407257
    uint64_t v4 = v3 == 0 | v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0 ? v2 : v1; // 0x40725f
    int64_t * v5 = (int64_t *)(a1 + 48); // 0x407264
    uint64_t v6 = *v5; // 0x407264
    if (v4 <= v6) {
        // 0x4072c0
        *(int64_t *)(a1 + 56) = v6;
        int64_t result; // 0x407250
        return result;
    }
    int32_t ** v7 = __ctype_toupper_loc(); // 0x40726d
    int64_t v8 = v6; // 0x407272
    int64_t v9 = *(int64_t *)(a1 + 120); // 0x40727c
    int64_t v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40)); // 0x407287
    int64_t v11 = v10; // 0x40728d
    if (v9 != 0) {
        // 0x4072b8
        v11 = (int64_t)*(char *)(v9 + v10);
    }
    int32_t v12 = *(int32_t *)(4 * v11 + (int64_t)*v7); // 0x407296
    *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
    v8++;
    while (v4 != v8) {
        // 0x407278
        v9 = *(int64_t *)(a1 + 120);
        v10 = (int64_t)*(char *)(v8 + a1 + *(int64_t *)(a1 + 40));
        v11 = v10;
        if (v9 != 0) {
            // 0x4072b8
            v11 = (int64_t)*(char *)(v9 + v10);
        }
        // 0x40728f
        v12 = *(int32_t *)(4 * v11 + (int64_t)*v7);
        *(char *)(*(int64_t *)(a1 + 8) + v8) = (char)v12;
        v8++;
    }
    // 0x4072a5
    *v5 = v4;
    *(int64_t *)(a1 + 56) = v4;
    return (int64_t)v7;
}
// Address range: 0x4072d0 - 0x407476
int64_t function_4072d0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x4072df
    int64_t v2 = *v1; // 0x4072df
    int64_t * v3 = (int64_t *)(a1 + 48); // 0x4072e3
    int64_t v4 = *v3; // 0x4072e3
    int64_t * v5 = (int64_t *)(a1 + 64); // 0x4072e7
    int64_t v6 = *v5; // 0x4072e7
    int64_t v7 = v6 - v2; // 0x4072e7
    uint64_t v8 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0 ? v6 : v2; // 0x4072eb
    int64_t result; // 0x4072d0
    if (v8 <= v4) {
        // 0x407388
        *v3 = v4;
        *(int64_t *)(a1 + 56) = v4;
        return result;
    }
    int64_t * v9 = (int64_t *)(a1 + 120); // 0x407300
    int64_t * v10 = (int64_t *)(a1 + 32);
    int64_t * v11 = (int64_t *)(a1 + 40);
    int32_t * v12 = (int32_t *)(a1 + 144);
    int64_t v13; // bp-104, 0x4072d0
    int64_t v14 = &v13;
    int64_t v15 = v4; // 0x4072d0
    int64_t v16; // 0x4072d0
    int64_t v17; // 0x4072d0
    int64_t v18; // 0x4072d0
    int32_t v19; // bp-108, 0x4072d0
    int64_t v20; // 0x407307
    int64_t result2; // 0x407448
    while (true) {
      lab_0x407300:
        // 0x407300
        v17 = v15;
        int64_t v21 = *v9; // 0x407300
        v20 = *v10;
        int64_t v22 = v8 - v17; // 0x40730b
        int64_t v23; // 0x4072d0
        if (v21 != 0) {
            // 0x4073e0
            v23 = v14;
            if (*v12 >= 1) {
                // 0x4073ee
                v23 = v14;
                int64_t v24 = 0; // 0x4073f8
                int64_t v25 = v21; // 0x4073f8
                if (v22 >= 0 == (v22 != 0)) {
                    int64_t v26 = v24 + v17;
                    unsigned char v27 = *(char *)(v26 + v25 + *v11); // 0x40741e
                    char v28 = *(char *)(v25 + (int64_t)v27); // 0x407421
                    *(char *)(*(int64_t *)(a1 + 8) + v26) = v28;
                    *(char *)(v24 + v14) = v28;
                    int64_t v29 = v24 + 1; // 0x407432
                    v23 = v14;
                    while (!((v22 == v29 | (v29 & 0xffffffff) >= (int64_t)*v12))) {
                        // 0x40740d
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
            // 0x407317
            v23 = v21 + v17 + *v11;
        }
        int64_t v30 = function_4069d0(&v19, v23, v22); // 0x407329
        if (v30 < 0xffffffffffffffff) {
            // 0x407338
            v16 = v30;
            v18 = v19;
            if (v30 == -2) {
                // 0x407448
                result2 = *v1;
                if (*v5 < result2) {
                    // break -> 0x407456
                    break;
                }
                goto lab_0x4073a0;
            } else {
                goto lab_0x407346;
            }
        } else {
            goto lab_0x4073a0;
        }
    }
    // 0x407456
    *v10 = v20;
    // 0x407388
    *v3 = v17;
    *(int64_t *)(a1 + 56) = v17;
    return result2;
  lab_0x4073a0:;
    int64_t v31 = *v9; // 0x4073a3
    unsigned char v32 = *(char *)(v17 + (int64_t)&v19 + *v11); // 0x4073ae
    int64_t v33 = v32; // 0x4073ae
    v19 = v32;
    int64_t v34 = v33; // 0x4073b8
    if (v31 != 0) {
        unsigned char v35 = *(char *)(v31 + v33); // 0x40745f
        v19 = v35;
        v34 = v35;
    }
    // 0x4073be
    *v10 = v20;
    v16 = 1;
    v18 = v34;
    goto lab_0x407346;
  lab_0x407346:;
    int64_t v36 = v16;
    int64_t v37 = *(int64_t *)(a1 + 16); // 0x407346
    int64_t v38 = v17 + 1; // 0x40734a
    int64_t v39 = v37 + 4 * v17;
    *(int32_t *)v39 = (int32_t)v18;
    int64_t v40 = v36 + v17; // 0x407359
    int64_t v41; // 0x4072d0
    if (v38 < v40) {
        int64_t v42 = v39 + 4; // 0x40736a
        *(int32_t *)v42 = -1;
        v42 += 4;
        while (v37 + 4 * v40 != v42) {
            // 0x407370
            *(int32_t *)v42 = -1;
            v42 += 4;
        }
        // 0x40737f
        v15 = v40;
        result = v36;
        v41 = v40;
        if (v40 >= v8) {
            // 0x407388
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    } else {
        // 0x4073d0
        v15 = v38;
        result = v36;
        v41 = v38;
        if (v38 >= v8) {
            // 0x407388
            *v3 = v41;
            *(int64_t *)(a1 + 56) = v41;
            return result;
        }
    }
    // 0x407300
    goto lab_0x407300;
}
// Address range: 0x407480 - 0x407a7d
int64_t function_407480(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 88); // 0x407491
    int64_t v2 = *v1; // 0x407491
    int64_t * v3 = (int64_t *)(a1 + 64); // 0x407495
    int64_t v4 = *v3; // 0x407495
    int64_t v5 = v4 - v2; // 0x407495
    int64_t v6 = v5 == 0 | v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0 ? v4 : v2; // 0x407499
    int64_t * v7 = (int64_t *)(a1 + 48); // 0x4074a5
    int64_t v8 = *v7; // 0x4074a5
    int64_t * v9; // 0x407480
    int64_t * v10; // 0x407480
    int64_t v11; // 0x407480
    int64_t v12; // 0x407480
    int64_t v13; // 0x407480
    int64_t v14; // 0x407480
    int64_t v15; // 0x407480
    int64_t v16; // 0x407480
    int64_t v17; // 0x407480
    int64_t v18; // 0x407480
    int64_t v19; // 0x407480
    int64_t v20; // 0x407480
    int64_t wstr; // bp-120, 0x407480
    struct _TYPEDEF___mbstate_t * v21; // bp-132, 0x407480
    int32_t * v22; // 0x407480
    int64_t v23; // 0x407480
    int64_t * v24; // 0x407640
    int64_t * v25; // 0x407480
    int64_t * v26; // 0x407480
    int64_t * v27; // 0x407480
    int64_t v28; // 0x40764a
    int64_t v29; // 0x407677
    if (*(char *)(a1 + 138) != 0) {
        goto lab_0x4074b6;
    } else {
        int64_t * v30 = (int64_t *)(a1 + 120);
        if (*v30 == 0) {
            // 0x407620
            if (*(char *)(a1 + 140) != 0) {
                goto lab_0x4074b6;
            } else {
                // 0x40762d
                v16 = v8;
                if (v8 < v6) {
                    while (true) {
                      lab_0x407640:
                        // 0x407640
                        v14 = v13;
                        v28 = v14 + v19 + *v24;
                        unsigned char v31 = *(char *)v28; // 0x40764d
                        if (v31 <= -1) {
                            goto lab_0x407669;
                        } else {
                            // 0x407658
                            struct _TYPEDEF___mbstate_t * ps; // 0x40763a
                            if (mbsinit(ps) != 0) {
                                int32_t v32 = *(int32_t *)(4 * (int64_t)v31 + (int64_t)*__ctype_toupper_loc()); // 0x407774
                                *(char *)(*v25 + v14) = (char)v32;
                                unsigned char v33 = *(char *)(*v25 + v14); // 0x407784
                                *(int32_t *)(*v26 + 4 * v14) = (int32_t)v33;
                                int64_t v34; // 0x407480
                                v20 = v34;
                                v15 = v14 + 1;
                                goto lab_0x40772a;
                            } else {
                                goto lab_0x407669;
                            }
                        }
                    }
                  lab_0x407860:
                    // 0x407860
                    v10 = v30;
                    v9 = v27;
                    v22 = (int32_t *)&v21;
                    v23 = v29;
                    v17 = v6;
                    v18 = &wstr;
                    v11 = v14;
                    v12 = v14;
                    goto lab_0x4074e0;
                } else {
                    goto lab_0x407733;
                }
            }
        } else {
            goto lab_0x4074b6;
        }
    }
  lab_0x407733:
    // 0x407733
    *v7 = v16;
    *(int64_t *)(a1 + 56) = v16;
    // 0x40760a
    return 0;
  lab_0x4074ba:;
    // 0x4074ba
    int64_t v35; // 0x407480
    int64_t v36 = v35;
    int64_t v37; // 0x407480
    int64_t v38 = v37;
    int64_t v39; // 0x407480
    int64_t v40 = v39;
    int64_t v41 = v38; // 0x4074bd
    int64_t v42 = v36; // 0x4074bd
    int64_t v43; // 0x407480
    if (v40 > v36) {
        // 0x4074c3
        v10 = (int64_t *)(a1 + 120);
        v9 = (int64_t *)(a1 + 32);
        v22 = (int32_t *)&v21;
        v23 = v40 - v36;
        v17 = v40;
        v18 = v43;
        v11 = v38;
        v12 = v36;
        goto lab_0x4074e0;
    } else {
        goto lab_0x407600;
    }
  lab_0x407669:
    // 0x407669
    v29 = v6 - v14;
    int32_t ps2 = (int32_t)*v27; // bp-128, 0x40767a
    uint64_t v44 = function_4069d0((int32_t *)&v21, v28, v29); // 0x407691
    if (v44 < 0xfffffffffffffffe) {
        int32_t wc = (int64_t)v21; // 0x4076a7
        int32_t wc2 = towupper(wc); // 0x4076ad
        int64_t v45; // 0x4076e7
        if (wc2 == wc) {
            int64_t v46 = *v25; // 0x407748
            int64_t v47 = *v24; // 0x40774c
            int64_t v48 = v46 + v14; // 0x407756
            memcpy((int64_t *)v48, (int64_t *)(v47 + v14 + v48), (int32_t)v44);
        } else {
            int32_t v49 = wcrtomb((char *)&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x4076cd
            if (v44 != (int64_t)v49) {
                // break -> 0x407860
                goto lab_0x407860;
            }
            // 0x4076db
            v45 = *v25 + v14;
            memcpy((int64_t *)v45, &wstr, (int32_t)v44);
        }
        int64_t v50 = v45;
        int64_t v51 = *v26; // 0x4076ef
        int64_t v52 = v14 + 1; // 0x4076fb
        int64_t v53 = v51 + 4 * v14;
        *(int32_t *)v53 = wc2;
        int64_t v54 = v44 + v14; // 0x407703
        v20 = v50;
        v15 = v52;
        if (v52 < v54) {
            int64_t v55 = v53 + 4; // 0x407714
            *(int32_t *)v55 = -1;
            v55 += 4;
            v20 = v50;
            v15 = v54;
            while (v51 + 4 * v54 != v55) {
                // 0x407718
                *(int32_t *)v55 = -1;
                v55 += 4;
                v20 = v50;
                v15 = v54;
            }
        }
    } else {
        int64_t v56; // 0x407480
        if (v44 != -2) {
            unsigned char v57 = *(char *)(v14 + v56 + *v24); // 0x4077df
            *(char *)(*v25 + v14) = v57;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v57;
            *v27 = (int64_t)ps2;
            v20 = v56;
            v15 = v14 + 1;
        } else {
            // 0x40779e
            if (*v3 < *v1) {
                // 0x407a17
                *v27 = (int64_t)ps2;
                v16 = v14;
                goto lab_0x407733;
            }
            unsigned char v58 = *(char *)(v14 + v56 + *v24); // 0x4077ba
            *(char *)(*v25 + v14) = v58;
            *(int32_t *)(*v26 + 4 * v14) = (int32_t)v58;
            v20 = v56;
            v15 = v14 + 1;
        }
    }
    goto lab_0x40772a;
  lab_0x40772a:
    // 0x40772a
    v19 = v20;
    v13 = v15;
    v16 = v15;
    if (v6 <= v15) {
        goto lab_0x407733;
    }
    goto lab_0x407640;
  lab_0x4074b6:
    // 0x4074b6
    v39 = v6;
    v43 = a1;
    v37 = *(int64_t *)(a1 + 56);
    v35 = v8;
    goto lab_0x4074ba;
  lab_0x407600:
    // 0x407600
    *v7 = v42;
    *(int64_t *)(a1 + 56) = v41;
    // 0x40760a
    return 0;
  lab_0x4074e0:;
    int64_t v59 = v12;
    int64_t v60 = v11;
    int64_t v61 = v17;
    int64_t v62 = v23;
    int64_t * v63 = v9;
    int64_t * v64 = v10;
    int64_t v65 = *v64; // 0x4074e4
    ps2 = (int32_t)*v63;
    int64_t v66; // 0x407480
    if (v65 != 0) {
        int32_t v67 = *(int32_t *)(a1 + 144); // 0x4077ff
        if (v62 < 1 || v67 < 1) {
            // 0x4077ff
            v66 = &wstr;
        } else {
            int64_t v68 = &wstr;
            int64_t v69 = 2 * (*(int64_t *)(a1 + 40) + v60); // 0x40782c
            int64_t v70 = 0;
            char v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69)); // 0x407840
            *(char *)(v70 + v68) = v71;
            v66 = v68;
            while (v70 != (int64_t)(v67 - 1)) {
                int64_t v72 = v70 + 1; // 0x407831
                v66 = v68;
                if (v62 == v72) {
                    // break -> 0x407505
                    break;
                }
                v70 = v72;
                v71 = *(char *)(v65 + (int64_t)*(char *)(v70 + v69));
                *(char *)(v70 + v68) = v71;
                v66 = v68;
            }
        }
    } else {
        // 0x4074f6
        v66 = v60 + v18 + *(int64_t *)(a1 + 40);
    }
    int64_t v73 = v66;
    uint64_t v74 = function_4069d0(v22, v73, v62); // 0x407518
    int64_t v75; // 0x407480
    int32_t wc4; // 0x407533
    if (v74 < 0xfffffffffffffffe) {
        int32_t wc3 = (int64_t)v21; // 0x40752e
        wc4 = towupper(wc3);
        if (wc4 == wc3) {
            goto lab_0x407868;
        } else {
            int32_t v76 = wcrtomb((char *)&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps2); // 0x407561
            int64_t v77 = v76; // 0x407561
            if (v74 != v77) {
                if (v76 == -1) {
                    goto lab_0x407868;
                } else {
                    int64_t v78 = v59 + v77; // 0x40793b
                    uint64_t v79 = *v3; // 0x407946
                    if (v78 > v79) {
                        goto lab_0x4075ef;
                    } else {
                        int64_t * v80 = (int64_t *)(a1 + 24); // 0x407953
                        int64_t v81 = *v80; // 0x407953
                        int64_t v82 = v81; // 0x407958
                        if (v81 == 0) {
                            int64_t * mem = malloc(8 * (int32_t)v79); // 0x407a37
                            int64_t v83 = (int64_t)mem; // 0x407a37
                            *v80 = v83;
                            v82 = v83;
                            if (mem == NULL) {
                                // 0x40760a
                                return 12;
                            }
                        }
                        char * v84 = (char *)(a1 + 140); // 0x40795e
                        if (*v84 == 0) {
                            int64_t v85 = v82; // 0x40796d
                            if (v59 != 0) {
                                int64_t v86 = 0;
                                *(int64_t *)(8 * v86 + v85) = v86;
                                int64_t v87 = v86 + 1; // 0x407977
                                while (v59 != v87) {
                                    // 0x407973
                                    v86 = v87;
                                    *(int64_t *)(8 * v86 + v85) = v86;
                                    v87 = v86 + 1;
                                }
                            }
                            // 0x407980
                            *v84 = 1;
                        }
                        // 0x407988
                        memcpy((int64_t *)(*(int64_t *)(a1 + 8) + v59), &wstr, v76);
                        int64_t v88 = v74 - 1; // 0x4079a8
                        int64_t v89 = *(int64_t *)(a1 + 16) + 4 * v59; // 0x4079ac
                        *(int32_t *)v89 = wc4;
                        int64_t v90 = *v80 + 8 * v59; // 0x4079b7
                        *(int64_t *)v90 = v60;
                        if (v76 >= 2) {
                            uint64_t v91 = 1;
                            int64_t v92 = v91 >= v74 ? v88 : v91; // 0x4079cf
                            *(int64_t *)(8 * v91 + v90) = v92 + v60;
                            *(int32_t *)(4 * v91 + v89) = -1;
                            int64_t v93 = v91 + 1; // 0x4079e1
                            while (v93 != v77) {
                                // 0x4079c9
                                v91 = v93;
                                v92 = v91 >= v74 ? v88 : v91;
                                *(int64_t *)(8 * v91 + v90) = v92 + v60;
                                *(int32_t *)(4 * v91 + v89) = -1;
                                v93 = v91 + 1;
                            }
                        }
                        int64_t v94 = v77 - v74; // 0x4079ee
                        int64_t v95 = *v1 + v94; // 0x4079f1
                        *v1 = v95;
                        if (v60 < *(int64_t *)(a1 + 96)) {
                            int64_t * v96 = (int64_t *)(a1 + 104); // 0x4079fe
                            *v96 = *v96 + v94;
                        }
                        int64_t v97 = *v3; // 0x407a02
                        int64_t v98 = v97 - v95; // 0x407a02
                        int64_t v99 = v98 == 0 | v98 < 0 != ((v98 ^ v97) & (v97 ^ v95)) < 0 ? v97 : v95; // 0x407a0a
                        v39 = v99;
                        v43 = v88;
                        v37 = v74 + v60;
                        v35 = v78;
                        goto lab_0x4074ba;
                    }
                }
            } else {
                int64_t v100 = *(int64_t *)(a1 + 8) + v59; // 0x407589
                memcpy((int64_t *)v100, &wstr, (int32_t)v74);
                v75 = v100;
                goto lab_0x407595;
            }
        }
    } else {
        if (v74 != -2) {
            goto lab_0x40789d;
        } else {
            // 0x40788f
            if (*v3 < *v1) {
                goto lab_0x4075ef;
            } else {
                goto lab_0x40789d;
            }
        }
    }
  lab_0x407868:;
    int64_t v101 = *(int64_t *)(a1 + 8) + v59; // 0x407878
    memcpy((int64_t *)v101, (int64_t *)v73, (int32_t)v74);
    v75 = v101;
    goto lab_0x407595;
  lab_0x40789d:;
    int64_t v114 = (int64_t)&v21; // 0x407513
    int64_t v115 = *v64; // 0x4078a0
    int64_t v116 = (int64_t)*(char *)(v60 + v114 + *(int64_t *)(a1 + 40)); // 0x4078ab
    int64_t v117 = v116; // 0x4078b1
    if (v115 != 0) {
        // 0x407a74
        v117 = (int64_t)*(char *)(v115 + v116);
    }
    // 0x4078b7
    *(char *)(*(int64_t *)(a1 + 8) + v59) = (char)v117;
    if (*(char *)(a1 + 140) != 0) {
        // 0x407a67
        *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v59) = v60;
    }
    int64_t v118 = *(int64_t *)(a1 + 16); // 0x4078d0
    int64_t v119 = v60 + 1; // 0x4078d4
    int64_t v120 = v59 + 1; // 0x4078d8
    *(int32_t *)(v118 + 4 * v59) = (int32_t)v117;
    v39 = v61;
    v43 = v114;
    v37 = v119;
    v35 = v120;
    if (v74 == -1) {
        // 0x4078e9
        *v63 = (int64_t)ps2;
        v39 = v61;
        v43 = v114;
        v37 = v119;
        v35 = v120;
    }
    goto lab_0x4074ba;
  lab_0x407595:;
    int64_t v102 = v75;
    int64_t v103; // 0x407480
    if (*(char *)(a1 + 140) != 0) {
        // 0x407900
        v103 = v60;
        if (v74 != 0) {
            int64_t v104 = v74 + v60; // 0x407913
            int64_t v105 = v59 - v60; // 0x407918
            int64_t v106 = v60;
            *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
            int64_t v107 = v106 + 1; // 0x407923
            v103 = v104;
            while (v104 != v107) {
                // 0x40791f
                v106 = v107;
                *(int64_t *)(8 * (v105 + v106) + *(int64_t *)(a1 + 24)) = v106;
                v107 = v106 + 1;
                v103 = v104;
            }
        }
    } else {
        // 0x4075a3
        v103 = v74 + v60;
    }
    int64_t v108 = v103;
    int64_t v109 = *(int64_t *)(a1 + 16); // 0x4075aa
    int64_t v110 = v59 + 1; // 0x4075ae
    int64_t v111 = v74 + v59; // 0x4075b2
    int64_t v112 = v109 + 4 * v59;
    *(int32_t *)v112 = wc4;
    v39 = v61;
    v43 = v102;
    v37 = v108;
    v35 = v110;
    if (v110 < v111) {
        int64_t v113 = v112 + 4; // 0x4075d4
        while (true) {
            // 0x4075d8
            *(int32_t *)v113 = -1;
            v113 += 4;
            v39 = v61;
            v43 = v102;
            v37 = v108;
            v35 = v111;
            if (v109 + 4 * v111 == v113) {
                goto lab_0x4074ba;
            }
        }
    }
    goto lab_0x4074ba;
  lab_0x4075ef:
    // 0x4075ef
    *v63 = (int64_t)ps2;
    v41 = v60;
    v42 = v59;
    goto lab_0x407600;
}
// Address range: 0x407a80 - 0x407bce
int64_t function_407a80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 64); // 0x407a90
    uint64_t v2 = *v1; // 0x407a90
    if (v2 >= 0xfffffffffffffff) {
        // 0x407b2b
        return 12;
    }
    int64_t * v3 = (int64_t *)(a1 + 88); // 0x407a9d
    int64_t v4 = *v3; // 0x407a9d
    int64_t v5 = 2 * v2; // 0x407aa1
    int64_t v6 = 0x100000000 * a2 >> 32; // 0x407aa4
    int64_t v7 = v5 - v4; // 0x407aaa
    int64_t v8 = v7 < 0 == ((v7 ^ v5) & (v4 ^ v5)) < 0 == (v7 != 0) ? v4 : v5; // 0x407aad
    int64_t v9 = v8 - v6; // 0x407ab1
    int64_t v10 = function_406ee0(a1, v9 < 0 == ((v9 ^ v8) & (v8 ^ v6)) < 0 ? v8 : v6); // 0x407ab8
    int64_t result = v10 & 0xffffffff; // 0x407abd
    if ((int32_t)v10 != 0) {
        // 0x407b2b
        return result;
    }
    int64_t * v11 = (int64_t *)(a1 + 184); // 0x407ac3
    int64_t v12 = *v11; // 0x407ac3
    if (v12 != 0) {
        int64_t * mem = realloc((int64_t *)v12, 8 * (int32_t)*v1 + 8); // 0x407adb
        if (mem == NULL) {
            // 0x407b2b
            return 12;
        }
        // 0x407ae9
        *v11 = (int64_t)mem;
    }
    int32_t v13 = *(int32_t *)(a1 + 144); // 0x407af7
    if (*(char *)(a1 + 136) != 0) {
        if (v13 >= 2) {
            // 0x407b0b
            return function_407480(a1);
        }
        // 0x407ba8
        function_407250(a1);
        return result;
    }
    if (v13 > 1) {
        // 0x407b90
        function_4072d0(a1);
        return result;
    }
    int64_t * v14 = (int64_t *)(a1 + 120); // 0x407b3d
    int64_t v15 = *v14; // 0x407b3d
    if (v15 == 0) {
        // 0x407b2b
        return result;
    }
    int64_t v16 = *v3; // 0x407b46
    int64_t * v17 = (int64_t *)(a1 + 48); // 0x407b4a
    uint64_t v18 = *v17; // 0x407b4a
    int64_t v19 = *v1; // 0x407b4e
    int64_t v20 = v19 - v16; // 0x407b4e
    uint64_t v21 = v20 == 0 | v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0 ? v19 : v16; // 0x407b52
    if (v21 <= v18) {
        // 0x407b5c
        *(int64_t *)(a1 + 56) = v18;
        // 0x407b2b
        return result;
    }
    int64_t * v22 = (int64_t *)(a1 + 40); // 0x407b6a
    unsigned char v23 = *(char *)(v18 + v12 + *v22); // 0x407b6e
    int64_t * v24 = (int64_t *)(a1 + 8); // 0x407b75
    *(char *)(*v24 + v18) = *(char *)(v15 + (int64_t)v23);
    int64_t v25 = v18 + 1; // 0x407b7c
    int64_t v26 = v25; // 0x407b83
    if (v21 != v25) {
        unsigned char v27 = *(char *)(v26 + v12 + *v22); // 0x407b6e
        *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
        v26++;
        while (v21 != v26) {
            // 0x407b60
            v27 = *(char *)(v26 + v12 + *v22);
            *(char *)(*v24 + v26) = *(char *)(*v14 + (int64_t)v27);
            v26++;
        }
    }
    // 0x407b85
    *v17 = v21;
    *(int64_t *)(a1 + 56) = v21;
    // 0x407b2b
    return result;
}
// Address range: 0x407bd0 - 0x407c56
int64_t function_407bd0(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a1 + 64); // 0x407bd7
    int64_t * v2 = (int64_t *)(a1 + 192); // 0x407bde
    int64_t v3 = *v2; // 0x407bde
    if (v1 > a2) {
        goto lab_0x407c10;
    } else {
        // 0x407bea
        if (v1 < *(int64_t *)(a1 + 88)) {
            int64_t result = function_407a80(a1, a2 + 1 & 0xffffffff); // 0x407bf6
            if ((int32_t)result != 0) {
                // 0x407c06
                return result;
            }
            goto lab_0x407bff;
        } else {
            goto lab_0x407c10;
        }
    }
  lab_0x407c10:;
    uint64_t v4 = *(int64_t *)(a1 + 48); // 0x407c10
    if (v4 <= a2) {
        // 0x407c19
        if (v4 < *(int64_t *)(a1 + 88)) {
            int64_t result2 = function_407a80(a1, a2 + 1 & 0xffffffff); // 0x407c25
            if ((int32_t)result2 != 0) {
                // 0x407c06
                return result2;
            }
        }
    }
    goto lab_0x407bff;
  lab_0x407bff:
    // 0x407bff
    if (v3 < a2) {
        int64_t v5 = *(int64_t *)(a1 + 184); // 0x407c30
        memset((int64_t *)(8 * v3 + 8 + v5), 0, 8 * (int32_t)(a2 - v3));
        *v2 = a2;
    }
    // 0x407c06
    return 0;
}
// Address range: 0x407c60 - 0x407c7e
int64_t function_407c60(int64_t a1) {
    int64_t * v1 = (int64_t *)a1; // 0x407c67
    free(v1);
    free((int64_t *)*(int64_t *)(a1 + 24));
    free(v1);
    return &g88;
}
// Address range: 0x407c80 - 0x407ca8
int64_t function_407c80(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 + 8) & 0x400ff; // 0x407c83
    switch (result) {
        case 6: {
            // 0x407c98
            return function_407c60(a1);
        }
        case 3: {
            // 0x407ca0
            free((int64_t *)a1);
            return &g88;
        }
    }
    // 0x407c92
    return result;
}
// Address range: 0x407cb0 - 0x407cc4
int64_t function_407cb0(int64_t a1, int64_t a2) {
    // 0x407cb0
    function_407c80(a2 + 40);
    return 0;
}
// Address range: 0x407cd0 - 0x407e9e
int64_t function_407cd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407cd0
    int128_t v1; // 0x407cd0
    int128_t v2 = v1;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x407ce4
    uint64_t v4 = *v3; // 0x407ce4
    int64_t * v5 = (int64_t *)(a1 + 8); // 0x407ce8
    uint64_t v6 = *v5; // 0x407ce8
    int64_t v7; // 0x407cd0
    int64_t v8; // 0x407cd0
    int64_t v9; // 0x407cd0
    if (v4 >= v6) {
        uint64_t v10 = 2 * v6; // 0x407daa
        if (v10 >= 0xaaaaaaaaaaaaaab) {
            // 0x407d88
            return -1;
        }
        int32_t v11 = v6;
        int64_t * mem = realloc((int64_t *)v4, 32 * v11); // 0x407dc7
        if (mem == NULL) {
            // 0x407d88
            return -1;
        }
        // 0x407dd5
        *(int64_t *)a1 = (int64_t)mem;
        int64_t * v12 = (int64_t *)(a1 + 24); // 0x407ddb
        int32_t v13 = 16 * v11; // 0x407ded
        int64_t * mem2 = realloc((int64_t *)*v12, v13); // 0x407ded
        int64_t * v14 = (int64_t *)(a1 + 32); // 0x407df2
        int64_t * mem3 = realloc((int64_t *)*v14, v13); // 0x407dfc
        int64_t * v15 = (int64_t *)(a1 + 40); // 0x407e01
        int32_t v16 = 48 * v11; // 0x407e0c
        int64_t * mem4 = realloc((int64_t *)*v15, v16); // 0x407e0c
        int64_t * v17 = (int64_t *)(a1 + 48); // 0x407e11
        int64_t * mem5 = realloc((int64_t *)*v17, v16); // 0x407e1b
        if (mem2 == NULL | mem3 == NULL || mem4 == NULL || mem5 == NULL) {
            // 0x407e60
            free(mem2);
            free(mem3);
            free(mem4);
            free(mem5);
            // 0x407d88
            return -1;
        }
        int64_t v18 = (int64_t)mem2; // 0x407ded
        int64_t v19 = (int64_t)mem4; // 0x407e0c
        *v12 = v18;
        *v14 = (int64_t)mem3;
        *v15 = v19;
        *v17 = (int64_t)mem5;
        *v5 = v10;
        v9 = *v3;
        v7 = v18;
        v8 = v19;
    } else {
        // 0x407cf5
        v9 = v4;
        v7 = *(int64_t *)(a1 + 24);
        v8 = *(int64_t *)(a1 + 40);
    }
    int64_t v20 = 17 * v9; // 0x407d0c
    char v21 = a3; // 0x407d0f
    int64_t v22 = v20 + 8; // 0x407d12
    *(int64_t *)v22 = a3;
    *(int64_t *)v20 = a2;
    *(int32_t *)v22 = (int32_t)a3 & -0x3ff01;
    bool v23 = v21 == 6; // 0x407d22
    if (v21 == 5) {
        int32_t v24 = *(int32_t *)(a1 + 180); // 0x407d24
        int32_t v25 = v24 - 1; // 0x407d24
        v23 = v25 < 0 == (v24 & -v24) < 0 == (v25 != 0);
    }
    char * v26 = (char *)(v20 + 10); // 0x407d2e
    int128_t v27 = __asm_pxor(v2, v2); // 0x407d35
    *v26 = 16 * (char)v23 | *v26 & -17;
    *(int64_t *)(v7 + 8 * v9) = -1;
    int64_t v28 = 24 * *v3 + v8; // 0x407d51
    __asm_movups(*(int128_t *)v28, v27);
    *(int64_t *)(v28 + 16) = 0;
    int64_t v29 = *(int64_t *)(a1 + 48) + 24 * *v3; // 0x407d6d
    __asm_movups(*(int128_t *)v29, v27);
    *(int64_t *)(v29 + 16) = 0;
    int64_t result = *v3; // 0x407d7c
    *v3 = result + 1;
    // 0x407d88
    return result;
}
// Address range: 0x407ea0 - 0x407f3f
int64_t function_407ea0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 16 * a2; // 0x407ea7
    int64_t v2 = v1 + a1;
    int64_t result = function_407cd0(a1, *(int64_t *)v2, *(int64_t *)(v2 + 8)); // 0x407ec6
    if (result != -1) {
        int64_t v3 = a3 & 0xffffffff; // 0x407eab
        int64_t v4 = 16 * result + v3; // 0x407ee5
        int32_t v5 = 256 * (int32_t)a3; // 0x407ee8
        int32_t * v6 = (int32_t *)(v4 + 8); // 0x407ef3
        int32_t v7 = *v6 & -0x3ff01; // 0x407ef6
        *v6 = v7 | v5 & 0x3ff00;
        uint32_t v8 = (*(int32_t *)((v1 | 8) + v3) | v5) & 0x3ff00 | v7; // 0x407f1a
        *v6 = v8;
        *(char *)(v4 + 10) = (char)(v8 / 0x10000) | 4;
        *(int64_t *)(*(int64_t *)(a1 + 32) + 8 * result) = a2;
    }
    // 0x407f34
    return result;
}
// Address range: 0x407f40 - 0x4081c4
int64_t function_407f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t * v1 = (int64_t *)(a1 + 40);
    int64_t * v2 = (int64_t *)(a1 + 24);
    int64_t v3 = a1; // 0x407f5a
    int64_t v4 = a2; // 0x407f5a
    int64_t v5 = a3; // 0x407f5a
    int64_t v6 = a5 & 0xffffffff;
    int32_t v7 = v6;
    int64_t v8; // 0x407f40
    int64_t v9; // 0x407f40
    int64_t v10; // 0x407f40
    int64_t v11; // 0x407f40
    int64_t result; // 0x407f40
    int64_t v12; // 0x407f40
    int64_t v13; // 0x407f40
    int64_t v14; // 0x407f40
    int64_t v15; // 0x407f40
    int64_t v16; // 0x4080f4
    int64_t v17; // 0x4080f8
    int64_t v18; // 0x4080f8
    int64_t v19; // 0x40810f
    int64_t v20; // 0x407f81
    int64_t v21; // 0x407f85
    int64_t v22; // 0x407f89
    int64_t v23; // 0x408125
    int64_t v24; // 0x408198
    int64_t v25; // 0x407f9f
    int64_t v26; // 0x407fa3
    int64_t v27; // 0x407fbb
    int64_t v28; // 0x407fbf
    int64_t v29; // 0x407fc6
    int64_t v30; // 0x407fca
    int64_t v31; // 0x408149
    int64_t v32; // 0x407f40
    int64_t v33; // 0x408183
    int64_t v34; // 0x407ff8
    int64_t v35; // 0x407ffb
    int64_t v36; // 0x407f65
    int64_t v37; // 0x407f73
    while (true) {
        // 0x407f5f
        v8 = v5;
        v10 = v4;
        v13 = v3;
        v36 = *v1;
        v37 = v13 + 8 + 16 * v10;
        if (*(char *)v37 == 4) {
            // 0x4080e0
            v16 = 24 * v8;
            v17 = 8 * v10;
            v18 = *(int64_t *)(*v2 + v17);
            *(int64_t *)(v36 + 8 + v16) = 0;
            v19 = function_407ea0(a1, v18, v6);
            if (v19 == -1) {
                return 12;
            }
            // 0x408125
            v23 = *v2;
            *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
            v15 = v18;
            v12 = v16;
            v9 = v19;
            goto lab_0x40805a;
        } else {
            // 0x407f7d
            v20 = 24 * v10;
            v21 = v36 + v20;
            v22 = *(int64_t *)(v21 + 8);
            if (v22 == 0) {
                // 0x408198
                v24 = *v2;
                *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                result = 0;
                return result;
            }
            // 0x407f96
            v25 = 24 * v8;
            v26 = v36 + v25;
            v4 = *(int64_t *)*(int64_t *)(v21 + 16);
            *(int64_t *)(v26 + 8) = 0;
            if (v22 == 1) {
                // break -> 0x408090
                break;
            }
            // 0x407fbb
            v27 = *(int64_t *)(a1 + 16);
            v28 = v27 - 1;
            v29 = 16 * v28;
            v30 = v29 + v13;
            if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                // 0x407fe0
                v32 = 16 * v27 - 32 - v29;
                v14 = v28;
                v11 = v30;
                if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                    // 0x408018
                    if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                        // 0x408029
                        if ((char)function_406ff0(v26, v14) == 0) {
                            return 12;
                        } else {
                            goto lab_0x408032;
                        }
                    }
                }
                // 0x407ff8
                v34 = v32 + v11;
                v35 = v14 - 1;
                while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                    // 0x408012
                    v14 = v35;
                    v11 = v34;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x408018
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x408029
                            if ((char)function_406ff0(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x408032;
                            }
                        }
                    }
                    // 0x407ff8
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                }
            }
            // 0x408140
            v31 = function_407ea0(a1, v4, v6);
            if (v31 == -1) {
                return 12;
            }
            // 0x40815b
            if ((char)function_406ff0(*v1 + v25, v31) == 0) {
                return 12;
            }
            // 0x408172
            v33 = function_407f40(a1, v4, v31, a4, v6);
            result = v33;
            if ((int32_t)v33 != 0) {
                // 0x40807a
                return result;
            }
            goto lab_0x408032;
        }
    }
    if (v10 == a4 == (v10 != v8)) {
        // 0x4081ab
        result = 0;
        if ((char)function_406ff0(v26, v4) != 0) {
            return result;
        } else {
            return 12;
        }
    }
    int64_t v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7); // 0x4080b1
    v5 = function_407ea0(a1, v4, v38);
    while (v5 != -1) {
        // 0x4080c5
        v3 = *v1 + v25;
        if ((char)function_406ff0(v3, v5) == 0) {
            // break -> 0x408075
            break;
        }
        v6 = v38;
        v7 = v6;
        while (true) {
            // 0x407f5f
            v8 = v5;
            v10 = v4;
            v13 = v3;
            v36 = *v1;
            v37 = v13 + 8 + 16 * v10;
            if (*(char *)v37 == 4) {
                // 0x4080e0
                v16 = 24 * v8;
                v17 = 8 * v10;
                v18 = *(int64_t *)(*v2 + v17);
                *(int64_t *)(v36 + 8 + v16) = 0;
                v19 = function_407ea0(a1, v18, v6);
                if (v19 == -1) {
                    return 12;
                }
                // 0x408125
                v23 = *v2;
                *(int64_t *)(v23 + 8 * v8) = *(int64_t *)(v23 + v17);
                v15 = v18;
                v12 = v16;
                v9 = v19;
                goto lab_0x40805a;
            } else {
                // 0x407f7d
                v20 = 24 * v10;
                v21 = v36 + v20;
                v22 = *(int64_t *)(v21 + 8);
                if (v22 == 0) {
                    // 0x408198
                    v24 = *v2;
                    *(int64_t *)(v24 + 8 * v8) = *(int64_t *)(v24 + 8 * v10);
                    result = 0;
                    return result;
                }
                // 0x407f96
                v25 = 24 * v8;
                v26 = v36 + v25;
                v4 = *(int64_t *)*(int64_t *)(v21 + 16);
                *(int64_t *)(v26 + 8) = 0;
                if (v22 == 1) {
                    // break -> 0x408090
                    break;
                }
                // 0x407fbb
                v27 = *(int64_t *)(a1 + 16);
                v28 = v27 - 1;
                v29 = 16 * v28;
                v30 = v29 + v13;
                if (!((v28 < 1 | (*(char *)(v30 + 10) & 4) == 0))) {
                    // 0x407fe0
                    v32 = 16 * v27 - 32 - v29;
                    v14 = v28;
                    v11 = v30;
                    if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                        // 0x408018
                        if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                            // 0x408029
                            if ((char)function_406ff0(v26, v14) == 0) {
                                return 12;
                            } else {
                                goto lab_0x408032;
                            }
                        }
                    }
                    // 0x407ff8
                    v34 = v32 + v11;
                    v35 = v14 - 1;
                    while (!((v35 < 1 | (*(char *)(v34 + 10) & 4) == 0))) {
                        // 0x408012
                        v14 = v35;
                        v11 = v34;
                        if (*(int64_t *)(8 * v14 + *(int64_t *)(a1 + 32)) == v4) {
                            // 0x408018
                            if (*(int32_t *)(v11 + 8) / 256 % 1024 == v7) {
                                // 0x408029
                                if ((char)function_406ff0(v26, v14) == 0) {
                                    return 12;
                                } else {
                                    goto lab_0x408032;
                                }
                            }
                        }
                        // 0x407ff8
                        v34 = v32 + v11;
                        v35 = v14 - 1;
                    }
                }
                // 0x408140
                v31 = function_407ea0(a1, v4, v6);
                if (v31 == -1) {
                    return 12;
                }
                // 0x40815b
                if ((char)function_406ff0(*v1 + v25, v31) == 0) {
                    return 12;
                }
                // 0x408172
                v33 = function_407f40(a1, v4, v31, a4, v6);
                result = v33;
                if ((int32_t)v33 != 0) {
                    // 0x40807a
                    return result;
                }
                goto lab_0x408032;
            }
        }
        if (v10 == a4 == (v10 != v8)) {
            // 0x4081ab
            result = 0;
            if ((char)function_406ff0(v26, v4) != 0) {
                return result;
            } else {
                return 12;
            }
        }
        // 0x4080a0
        v38 = (int64_t)(*(int32_t *)v37 / 256 % 1024 | v7);
        v5 = function_407ea0(a1, v4, v38);
    }
  lab_0x408075_5:
    // 0x40807a
    return 12;
  lab_0x40805a:;
    int64_t v39 = *v1 + v12; // 0x408061
    if ((char)function_406ff0(v39, v9) == 0) {
        return 12;
    }
    goto lab_0x407f5f;
  lab_0x408032:;
    int64_t v40 = *(int64_t *)(*(int64_t *)(v20 + 16 + *v1) + 8); // 0x408041
    int64_t v41 = function_407ea0(a1, v40, v6); // 0x40804c
    v15 = v40;
    v12 = v25;
    v9 = v41;
    if (v41 == -1) {
        // break (via goto) -> 0x408075
        goto lab_0x408075_5;
    }
    goto lab_0x40805a;
}
// Address range: 0x4081d0 - 0x408229
int64_t function_4081d0(int64_t a1) {
    // 0x4081d0
    free((int64_t *)*(int64_t *)(a1 + 48));
    free((int64_t *)*(int64_t *)(a1 + 72));
    int64_t * v1 = (int64_t *)(a1 + 80); // 0x4081e6
    int64_t v2 = *v1; // 0x4081e6
    if (v2 != a1 + 8) {
        // 0x4081f3
        free((int64_t *)*(int64_t *)(v2 + 16));
        free((int64_t *)*v1);
    }
    // 0x408205
    free((int64_t *)*(int64_t *)(a1 + 24));
    free((int64_t *)*(int64_t *)(a1 + 96));
    free((int64_t *)*(int64_t *)(a1 + 88));
    free((int64_t *)a1);
    return &g88;
}
// Address range: 0x408230 - 0x408262
int64_t function_408230(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    free((int64_t *)*(int64_t *)(v1 + 16));
    free((int64_t *)*(int64_t *)(v1 + 24));
    if (*(char *)(v1 + 139) == 0) {
        // 0x40824f
        return &g88;
    }
    // 0x408258
    free((int64_t *)*(int64_t *)(v1 + 8));
    return &g88;
}
// Address range: 0x408270 - 0x408328
int64_t function_408270(int64_t * a1) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 232); // 0x40827b
    if (*v2 < 1) {
        // 0x408309
        *v2 = 0;
        *(int64_t *)(v1 + 200) = 0;
        int64_t result; // 0x408270
        return result;
    }
    int64_t v3 = 0; // 0x4082f7
    int64_t v4 = *(int64_t *)(*(int64_t *)(v1 + 248) + 8 * v3); // 0x408297
    int64_t * v5 = (int64_t *)(v4 + 32); // 0x40829b
    int64_t * v6 = (int64_t *)(v4 + 40);
    int64_t v7 = 0; // 0x4082a1
    int64_t v8; // 0x4082ad
    int64_t v9; // 0x4082b1
    if (*v5 >= 1) {
        v8 = *(int64_t *)(*v6 + 8 * v7);
        v9 = v7 + 1;
        free((int64_t *)*(int64_t *)(v8 + 32));
        free((int64_t *)v8);
        v7 = v9;
        while (*v5 > v9) {
            // 0x4082a8
            v8 = *(int64_t *)(*v6 + 8 * v7);
            v9 = v7 + 1;
            free((int64_t *)*(int64_t *)(v8 + 32));
            free((int64_t *)v8);
            v7 = v9;
        }
    }
    // 0x4082cd
    free((int64_t *)*v6);
    int64_t * v10 = (int64_t *)(v4 + 16); // 0x4082d7
    int64_t v11 = *v10; // 0x4082d7
    if (v11 != 0) {
        // 0x4082e1
        free((int64_t *)*(int64_t *)(v11 + 16));
        free((int64_t *)*v10);
    }
    // 0x4082f4
    v3++;
    free((int64_t *)v4);
    while (*v2 > v3) {
        // 0x408290
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
                // 0x4082a8
                v8 = *(int64_t *)(*v6 + 8 * v7);
                v9 = v7 + 1;
                free((int64_t *)*(int64_t *)(v8 + 32));
                free((int64_t *)v8);
                v7 = v9;
            }
        }
        // 0x4082cd
        free((int64_t *)*v6);
        v10 = (int64_t *)(v4 + 16);
        v11 = *v10;
        if (v11 != 0) {
            // 0x4082e1
            free((int64_t *)*(int64_t *)(v11 + 16));
            free((int64_t *)*v10);
        }
        // 0x4082f4
        v3++;
        free((int64_t *)v4);
    }
    // 0x408309
    *v2 = 0;
    *(int64_t *)(v1 + 200) = 0;
    return &g88;
}
// Address range: 0x408330 - 0x4085b0
int64_t function_408330(int64_t a1, int64_t a2) {
    unsigned char v1 = *(char *)(a2 + 48); // 0x408334
    int64_t v2 = v1; // 0x408334
    int64_t v3 = *(int64_t *)(a2 + 56); // 0x408338
    g96 = v2;
    int64_t v4 = v3; // 0x408343
    switch (v1) {
        case 2: {
            // 0x408408
            if (*(int64_t *)(a2 + 32) == 0) {
                // 0x40836a
                return 0;
            }
            // 0x408413
            __assert_fail("node->next == NULL", "lib/regcomp.c", 1449, "link_nfa_nodes");
            v4 = 1449;
        }
        case 4: {
            // 0x408430
            *(int64_t *)(8 * v4 + 0x312d203e) = *(int64_t *)0x203e207466656c38;
            // 0x40836a
            return 0;
        }
        case 8: {
        }
        case 9: {
        }
        case 12: {
            int64_t v5 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x4084a5
            int64_t * v6 = (int64_t *)v5; // 0x4084a9
            *v6 = 1;
            int64_t * v7 = (int64_t *)(v5 + 8); // 0x4084b0
            *v7 = 1;
            int64_t * mem = malloc(8); // 0x4084b8
            *(int64_t *)(v5 + 16) = (int64_t)mem;
            if (mem != NULL) {
                // 0x4084c6
                *mem = *(int64_t *)(*(int64_t *)(a2 + 32) + 56);
                return 0;
            }
            // 0x408520
            *v7 = 0;
            *v6 = 0;
            // 0x40836a
            return 12;
        }
        case 10: {
        }
        case 11: {
            char * v8 = (char *)(a1 + 176); // 0x408370
            *v8 = *v8 | 1;
            int64_t v9 = *(int64_t *)(a2 + 8); // 0x408377
            int64_t v10 = a2 + 32;
            int64_t v11 = *(int64_t *)(*(int64_t *)(v9 == 0 ? v10 : v9 + 24) + 56);
            if (v11 < 0) {
                // 0x408596
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g88;
            }
            int64_t v12 = *(int64_t *)(a2 + 16); // 0x40838c
            int64_t v13 = *(int64_t *)(*(int64_t *)(v12 == 0 ? v10 : v12 + 24) + 56);
            if (v13 < 0) {
                // 0x40857d
                __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
                // 0x408596
                __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
                return &g88;
            }
            int64_t v14 = *(int64_t *)(a1 + 40) + 24 * v3; // 0x4083c0
            *(int64_t *)v14 = 2;
            int64_t * mem2 = malloc(16); // 0x4083cb
            int64_t v15 = (int64_t)mem2; // 0x4083cb
            *(int64_t *)(v14 + 16) = v15;
            if (mem2 == NULL) {
                // 0x40836a
                return 12;
            }
            int64_t * v16 = (int64_t *)(v14 + 8);
            if (v11 == v13) {
                // 0x4084d0
                *v16 = 1;
                *mem2 = v11;
                // 0x40836a
                return 0;
            }
            // 0x4083e6
            *v16 = 2;
            if (v11 < v13) {
                // 0x4083f4
                *mem2 = v11;
                *(int64_t *)(v15 + 8) = v13;
            } else {
                // 0x408508
                *mem2 = v13;
                *(int64_t *)(v15 + 8) = v11;
            }
            // 0x40836a
            return 0;
        }
        case 16: {
            // 0x40836a
            return 0;
        }
        default: {
            if ((v2 & 8) == 0) {
                int64_t v17 = *(int64_t *)(*(int64_t *)(a2 + 32) + 56); // 0x40835c
                *(int64_t *)(*(int64_t *)(a1 + 24) + 8 * v3) = v17;
                // 0x40836a
                return 0;
            }
            // 0x408564
            __assert_fail("!IS_EPSILON_NODE (node->token.type)", "lib/regcomp.c", 1484, "link_nfa_nodes");
            // 0x40857d
            __assert_fail("right > -1", "lib/regcomp.c", 1466, "link_nfa_nodes");
            // 0x408596
            __assert_fail("left > -1", "lib/regcomp.c", 1465, "link_nfa_nodes");
            return &g88;
        }
    }
}
// Address range: 0x4085b0 - 0x4085fe
int64_t function_4085b0(int64_t a1, int64_t a2) {
    uint64_t v1 = *(int64_t *)(a1 + 48); // 0x4085b0
    uint64_t v2 = a2 + 1; // 0x4085b4
    if (v2 >= v1) {
        // 0x4085f2
        return 1;
    }
    int64_t v3 = *(int64_t *)(a1 + 16) + 4 * v2;
    if (*(int32_t *)v3 != -1) {
        // 0x4085f2
        return 1;
    }
    int64_t v4 = 2;
    while (v4 != v1 - a2) {
        int64_t v5 = v4 + 1; // 0x4085e0
        if (*(int32_t *)(v3 - 8 + 4 * v5) != -1) {
            // break -> 0x4085f2
            break;
        }
        v4 = v5;
    }
    // 0x4085f2
    return v4 & 0xffffffff;
}
// Address range: 0x408600 - 0x408665
int64_t function_408600(int64_t a1, int64_t a2, uint64_t a3) {
    if (a1 < 1) {
        // 0x408645
        return 0;
    }
    int64_t v1 = a1 - 1; // 0x40860a
    int64_t v2 = 0; // 0x408613
    if (v1 != 0) {
        int64_t v3 = 0;
        int64_t v4 = (v3 + v1) / 2; // 0x408619
        int64_t v5 = v4; // 0x408620
        int64_t v6 = v4; // 0x408620
        int64_t v7 = v1; // 0x408620
        int64_t v8; // 0x408600
        int64_t v9; // 0x40862c
        if (*(int64_t *)(8 * v4 + a2) >= a3) {
            v2 = v3;
            if (v3 >= v5) {
                // break (via goto) -> 0x40863d
                goto lab_0x40863d;
            }
            // 0x408628
            v9 = (v5 + v3) / 2;
            v6 = v9;
            v7 = v5;
            while (*(int64_t *)(8 * v9 + a2) >= a3) {
                // 0x408638
                v8 = v9;
                v2 = v3;
                if (v3 >= v8) {
                    // break (via goto) -> 0x40863d
                    goto lab_0x40863d;
                }
                // 0x408628
                v9 = (v8 + v3) / 2;
                v6 = v9;
                v7 = v8;
            }
        }
        int64_t v10 = v7;
        int64_t v11 = v6 + 1; // 0x408650
        v2 = v11;
        while (v11 < v10) {
            // 0x408615
            v3 = v11;
            v4 = (v3 + v10) / 2;
            v5 = v4;
            v6 = v4;
            v7 = v10;
            if (*(int64_t *)(8 * v4 + a2) >= a3) {
                v2 = v3;
                if (v3 >= v5) {
                    // break (via goto) -> 0x40863d
                    goto lab_0x40863d;
                }
                // 0x408628
                v9 = (v5 + v3) / 2;
                v6 = v9;
                v7 = v5;
                while (*(int64_t *)(8 * v9 + a2) >= a3) {
                    // 0x408638
                    v8 = v9;
                    v2 = v3;
                    if (v3 >= v8) {
                        // break (via goto) -> 0x40863d
                        goto lab_0x40863d;
                    }
                    // 0x408628
                    v9 = (v8 + v3) / 2;
                    v6 = v9;
                    v7 = v8;
                }
            }
            // 0x408650
            v10 = v7;
            v11 = v6 + 1;
            v2 = v11;
        }
    }
  lab_0x40863d:
    // 0x40863d
    if (*(int64_t *)(8 * v2 + a2) == a3) {
        // 0x408660
        return v2 + 1;
    }
    // 0x408645
    return 0;
}
// Address range: 0x408670 - 0x408769
int64_t function_408670(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a2 + 16; // 0x408677
    int64_t * v2 = (int64_t *)(a2 + 8); // 0x408691
    int64_t v3 = *v2; // 0x408691
    if (function_408600(v3, v1, a3) != 0) {
      lab_0x408758:
        // 0x408745
        return 0;
    }
    int32_t v4 = a5;
    int64_t * v5 = (int64_t *)(a1 + 40);
    int64_t v6 = a3;
    int64_t v7 = 16 * v6 + v3; // 0x4086b0
    int64_t result; // 0x408670
    if ((int32_t)*(char *)(v7 + 8) == v4) {
        // 0x4086bd
        if (*(int64_t *)v7 == a4) {
            if (v4 != 9) {
                return 0;
            } else {
                // 0x40872e
                result = 12;
                if ((char)function_406ff0(a2, v6) != 0) {
                    return 0;
                } else {
                    return result;
                }
            }
        }
    }
    // 0x4086c2
    result = 12;
    while ((char)function_406ff0(a2, v6) != 0) {
        int64_t v8 = 24 * v6; // 0x4086da
        int64_t v9 = *v5 + v8; // 0x4086de
        int64_t v10 = *(int64_t *)(v9 + 8); // 0x4086e1
        if (v10 == 0) {
            // 0x408745
            return 0;
        }
        int64_t v11 = *(int64_t *)(v9 + 16); // 0x4086ea
        int64_t v12 = v11; // 0x4086f2
        if (v10 == 2) {
            int64_t v13 = function_408670(a1, a2, *(int64_t *)(v11 + 8), a4, a5 & 0xffffffff); // 0x408710
            result = v13;
            if ((int32_t)v13 != 0) {
                // break -> 0x408745
                break;
            }
            // 0x408719
            v12 = *(int64_t *)(v8 + 16 + *v5);
        }
        int64_t v14 = *(int64_t *)v12; // 0x4086f4
        int64_t v15 = *v2; // 0x408691
        if (function_408600(v15, v1, v14) != 0) {
            // 0x408745
            return 0;
        }
        v6 = v14;
        v7 = 16 * v6 + v15;
        if ((int32_t)*(char *)(v7 + 8) == v4) {
            // 0x4086bd
            if (*(int64_t *)v7 == a4) {
                if (v4 != 9) {
                    return 0;
                } else {
                    // 0x40872e
                    result = 12;
                    if ((char)function_406ff0(a2, v6) != 0) {
                        return 0;
                    } else {
                        return result;
                    }
                }
            }
        }
        // 0x4086c2
        result = 12;
    }
  lab_0x408745:
    // 0x408745
    return result;
}
// Address range: 0x408770 - 0x408793
int64_t function_408770(uint64_t a1, int64_t result2, uint64_t a3) {
    // 0x408770
    if (a3 >= a1) {
        // 0x408792
        int64_t result; // 0x408770
        return result;
    }
    int64_t v1 = a3; // 0x408773
    int64_t v2 = 8 * v1 + result2;
    *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    v1++;
    while (v1 != a1) {
        // 0x408780
        v2 = 8 * v1 + result2;
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
        v1++;
    }
    // 0x408792
    return result2;
}
// Address range: 0x4087a0 - 0x40882b
int64_t function_4087a0(int64_t a1, int64_t a2) {
    // 0x4087a0
    int64_t * v1; // 0x4087b0
    int64_t v2; // 0x4087b0
    switch (*(char *)(a2 + 48)) {
        case 4: {
            int64_t v3 = *(int64_t *)(a1 + 224); // 0x408800
            if (v3 == 0) {
                // 0x4087ac
                return 0;
            }
            int64_t v4 = a2 + 40; // 0x40880c
            int64_t v5 = *(int64_t *)(8 * (int64_t)*(int32_t *)v4 + v3); // 0x408810
            *(int64_t *)v4 = v5;
            int64_t * v6 = (int64_t *)(a1 + 160); // 0x408821
            *v6 = *v6 | (int64_t)(1 << (int32_t)v5 % 32);
            return 0;
        }
        case 17: {
            // 0x4087b0
            v1 = (int64_t *)(a2 + 8);
            v2 = *v1;
            if (v2 == 0 || *(char *)(v2 + 48) != 17) {
                // 0x4087ac
                return 0;
            }
            // break -> 0x4087bf
            break;
        }
        default: {
            // 0x4087ac
            return 0;
        }
    }
    uint64_t v7 = *(int64_t *)(v2 + 40); // 0x4087bf
    int64_t v8 = *(int64_t *)(v2 + 8); // 0x4087c3
    *v1 = v8;
    if (v8 != 0) {
        // 0x4087d0
        *(int64_t *)v8 = a2;
    }
    int64_t v9 = *(int64_t *)(a1 + 224); // 0x4087d3
    int64_t v10 = *(int64_t *)(8 * *(int64_t *)(a2 + 40) + v9); // 0x4087de
    *(int64_t *)(v9 + 8 * v7) = v10;
    if (v7 > 63) {
        // 0x4087ac
        return 0;
    }
    uint64_t v11 = v7 % 64; // 0x4087f3
    int64_t v12 = -2; // 0x4087f3
    if (v11 != 0) {
        v12 = 0xfffffffffffffffe >> 64 - v11 | -2 << v11;
    }
    int64_t * v13 = (int64_t *)(a1 + 160); // 0x4087f6
    *v13 = *v13 & v12;
    // 0x4087ac
    return 0;
}
// Address range: 0x408830 - 0x408887
int64_t function_408830(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x408834
    switch (*(char *)(a2 + 48)) {
        case 11: {
            // 0x408868
            *(int64_t *)(v1 + 32) = a2;
            return 0;
        }
        case 16: {
            int64_t v2 = *(int64_t *)(a2 + 16); // 0x408870
            *(int64_t *)(v1 + 32) = *(int64_t *)(v2 + 24);
            *(int64_t *)(v2 + 32) = *(int64_t *)(a2 + 32);
            return 0;
        }
    }
    if (v1 != 0) {
        // 0x408845
        *(int64_t *)(v1 + 32) = *(int64_t *)(a2 + 32);
    }
    int64_t v3 = *(int64_t *)(a2 + 16); // 0x40884d
    if (v3 != 0) {
        // 0x408856
        *(int64_t *)(v3 + 32) = *(int64_t *)(a2 + 32);
    }
    // 0x40885e
    return 0;
}
// Address range: 0x408890 - 0x408ade
int64_t function_408890(int64_t a1, int64_t a2, int64_t a3, int64_t a4, uint64_t a5, int64_t a6, uint64_t a7) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x4088a7
    int64_t v2 = -1; // 0x4088c1
    int64_t v3 = -1; // 0x4088c1
    if (v1 > 0) {
        int64_t v4 = *(int64_t *)(a1 + 216); // 0x4088c7
        int64_t v5 = v4 + 8;
        int64_t v6 = 0;
        uint64_t v7 = v6 + v1; // 0x4088c3
        int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x4088d8
        int64_t v9 = v8; // 0x4088e4
        int64_t v10 = v1; // 0x4088e4
        int64_t v11 = v8; // 0x4088e4
        int64_t v12; // 0x408890
        int64_t v13; // 0x408890
        uint64_t v14; // 0x4088f0
        int64_t v15; // 0x4088fe
        if (*(int64_t *)(40 * v8 + v5) >= a5) {
            v13 = v6;
            if (v6 >= v9) {
                // break (via goto) -> 0x40891b
                goto lab_0x40891b;
            }
            // 0x4088f0
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v9;
            v11 = v15;
            while (*(int64_t *)(40 * v15 + v5) >= a5) {
                // 0x408916
                v12 = v15;
                v13 = v6;
                if (v6 >= v12) {
                    // break (via goto) -> 0x40891b
                    goto lab_0x40891b;
                }
                // 0x4088f0
                v14 = v12 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v12;
                v11 = v15;
            }
        }
        int64_t v16 = v10;
        int64_t v17 = v11 + 1; // 0x408a88
        v13 = v17;
        while (v17 < v16) {
            // 0x4088c3
            v6 = v17;
            v7 = v6 + v16;
            v8 = (v7 / 0x8000000000000000 + v7) / 2;
            v9 = v8;
            v10 = v16;
            v11 = v8;
            if (*(int64_t *)(40 * v8 + v5) >= a5) {
                v13 = v6;
                if (v6 >= v9) {
                    // break (via goto) -> 0x40891b
                    goto lab_0x40891b;
                }
                // 0x4088f0
                v14 = v9 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v9;
                v11 = v15;
                while (*(int64_t *)(40 * v15 + v5) >= a5) {
                    // 0x408916
                    v12 = v15;
                    v13 = v6;
                    if (v6 >= v12) {
                        // break (via goto) -> 0x40891b
                        goto lab_0x40891b;
                    }
                    // 0x4088f0
                    v14 = v12 + v6;
                    v15 = (v14 / 0x8000000000000000 + v14) / 2;
                    v10 = v12;
                    v11 = v15;
                }
            }
            // 0x408a88
            v16 = v10;
            v17 = v11 + 1;
            v13 = v17;
        }
      lab_0x40891b:;
        int64_t v18 = v13;
        int64_t v19 = -1; // 0x40891e
        if (v1 > v18) {
            // 0x408924
            v19 = *(int64_t *)(40 * v18 + 8 + v4) != a5 ? -1 : v18;
        }
        int64_t v20 = 0;
        uint64_t v21 = v1 + v20; // 0x40894c
        int64_t v22 = (v21 / 0x8000000000000000 + v21) / 2; // 0x408962
        int64_t v23 = v22; // 0x40896e
        int64_t v24 = v1; // 0x40896e
        int64_t v25 = v22; // 0x40896e
        int64_t v26; // 0x408890
        int64_t v27; // 0x408890
        uint64_t v28; // 0x408978
        int64_t v29; // 0x408987
        if (*(int64_t *)(40 * v22 + v5) >= a7) {
            v27 = v20;
            if (v20 >= v23) {
                // break (via goto) -> 0x4089a4
                goto lab_0x4089a4;
            }
            // 0x408978
            v28 = v23 + v20;
            v29 = (v28 / 0x8000000000000000 + v28) / 2;
            v24 = v23;
            v25 = v29;
            while (*(int64_t *)(40 * v29 + v5) >= a7) {
                // 0x40899f
                v26 = v29;
                v27 = v20;
                if (v20 >= v26) {
                    // break (via goto) -> 0x4089a4
                    goto lab_0x4089a4;
                }
                // 0x408978
                v28 = v26 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v26;
                v25 = v29;
            }
        }
        int64_t v30 = v24;
        int64_t v31 = v25 + 1; // 0x408aa0
        v27 = v31;
        while (v31 < v30) {
            // 0x40894c
            v20 = v31;
            v21 = v30 + v20;
            v22 = (v21 / 0x8000000000000000 + v21) / 2;
            v23 = v22;
            v24 = v30;
            v25 = v22;
            if (*(int64_t *)(40 * v22 + v5) >= a7) {
                v27 = v20;
                if (v20 >= v23) {
                    // break (via goto) -> 0x4089a4
                    goto lab_0x4089a4;
                }
                // 0x408978
                v28 = v23 + v20;
                v29 = (v28 / 0x8000000000000000 + v28) / 2;
                v24 = v23;
                v25 = v29;
                while (*(int64_t *)(40 * v29 + v5) >= a7) {
                    // 0x40899f
                    v26 = v29;
                    v27 = v20;
                    if (v20 >= v26) {
                        // break (via goto) -> 0x4089a4
                        goto lab_0x4089a4;
                    }
                    // 0x408978
                    v28 = v26 + v20;
                    v29 = (v28 / 0x8000000000000000 + v28) / 2;
                    v24 = v26;
                    v25 = v29;
                }
            }
            // 0x408aa0
            v30 = v24;
            v31 = v25 + 1;
            v27 = v31;
        }
      lab_0x4089a4:;
        int64_t v32 = v27;
        v2 = v19;
        v3 = -1;
        if (v1 > v32) {
            // 0x4089ad
            v2 = v19;
            v3 = *(int64_t *)(40 * v32 + 8 + v4) != a7 ? -1 : v32;
        }
    }
    // 0x4089cc
    if (a2 < 1) {
        // 0x408a6e
        return 0;
    }
    int64_t * v33 = (int64_t *)(a1 + 216); // 0x408a04
    int64_t * v34 = (int64_t *)*(int64_t *)(a1 + 152); // 0x408a35
    int64_t v35 = 0; // 0x408ab5
    int64_t v36 = 8 * v35; // 0x408a18
    int64_t v37 = *(int64_t *)(v36 + a3); // 0x408a18
    int64_t v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34); // 0x408a38
    int64_t v39 = function_406e70(a1, v37, v38, a4, a5, v2); // 0x408a3e
    uint64_t v40 = *(int64_t *)(v38 + v36); // 0x408a5c
    int64_t result = 1; // 0x408a67
    while ((int32_t)v39 == (int32_t)function_406e70(a1, v40, v38, a6, a7, v3)) {
        // 0x408ab0
        v35++;
        result = 0;
        if (v35 >= v40) {
            // break -> 0x408a6e
            break;
        }
        v36 = 8 * v35;
        v37 = *(int64_t *)(v36 + v38);
        v38 = *(int64_t *)(16 * *(int64_t *)(40 * v37 + *v33) + *v34);
        v39 = function_406e70(a1, v37, v38, a4, a5, v2);
        v40 = *(int64_t *)(v38 + v36);
        result = 1;
    }
    // 0x408a6e
    return result;
}
// Address range: 0x408ae0 - 0x408b31
int64_t function_408ae0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x408ae0
    int64_t result; // 0x408ae0
    if ((int32_t)result != 0) {
        // 0x408b2c
        return result;
    }
    int64_t v1 = a1; // 0x408afe
    while (true) {
        int64_t v2 = *(int64_t *)(v1 + 8); // 0x408b00
        int64_t v3 = v2; // 0x408b09
        int64_t v4 = 0; // 0x408b09
        int64_t v5 = v1; // 0x408b09
        if (v2 == 0) {
            int64_t v6 = v5;
            int64_t v7 = *(int64_t *)(v6 + 16); // 0x408b13
            v3 = v7;
            while (v7 != v4 != v7 != 0) {
                int64_t v8 = *(int64_t *)v6; // 0x408b21
                v4 = v6;
                if (v8 == 0) {
                    return result;
                }
                v6 = v8;
                v7 = *(int64_t *)(v6 + 16);
                v3 = v7;
            }
        }
        // 0x408af0
        v1 = v3;
    }
}
// Address range: 0x408b40 - 0x408d03
int64_t function_408b40(int64_t * a1, int128_t * a2) {
    // 0x408b40
    if (a2 == NULL) {
        // 0x408c44
        return 0;
    }
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x408b49
    int64_t v3 = *v2; // 0x408b49
    if (v3 == 0) {
        // 0x408c44
        return 0;
    }
    int64_t v4 = (int64_t)a1;
    int64_t * v5 = (int64_t *)(v4 + 8); // 0x408b5d
    int64_t v6 = *v5; // 0x408b5d
    int64_t v7 = v6 + 2 * v3;
    int64_t v8; // 0x408b40
    int64_t * v9; // 0x408b40
    int64_t v10; // 0x408b40
    int64_t v11; // 0x408b40
    int64_t v12; // 0x408b40
    if (v7 > v4) {
        int64_t v13 = v3 + v4; // 0x408ca0
        int64_t * v14 = (int64_t *)(v4 + 16);
        int64_t * mem = realloc((int64_t *)*v14, 16 * (int32_t)v13); // 0x408cb2
        if (mem == NULL) {
            // 0x408c44
            return 12;
        }
        int64_t v15 = *v5; // 0x408cbc
        *v14 = (int64_t)mem;
        *a1 = 2 * v13;
        int64_t v16 = *v2; // 0x408cc7
        v9 = v14;
        v11 = v16;
        if (v15 != 0) {
            // 0x408cbc
            v8 = 2 * v16 + v15;
            v10 = v16;
            v12 = v15;
            goto lab_0x408b7d;
        } else {
            goto lab_0x408cd5;
        }
    } else {
        // 0x408b74
        v8 = v7;
        v10 = v3;
        v12 = v6;
        if (v6 == 0) {
            // 0x408b74
            v9 = (int64_t *)(v4 + 16);
            v11 = v3;
            goto lab_0x408cd5;
        } else {
            goto lab_0x408b7d;
        }
    }
  lab_0x408cd5:;
    int64_t v17 = *v9; // 0x408cd5
    int64_t v18 = *(int64_t *)(v1 + 16); // 0x408cd9
    *v5 = v11;
    memcpy((int64_t *)v17, (int64_t *)v18, 8 * (int32_t)*v2);
    // 0x408c44
    return 0;
  lab_0x408b7d:;
    int64_t v19 = v10 - 1; // 0x408b81
    int64_t v20 = -v10; // 0x408b8c
    int64_t v21 = v19; // 0x408b93
    int64_t v22 = v8; // 0x408b93
    if (v20 < 0) {
        int64_t v23 = v12; // 0x408b40
        int64_t v24 = v20;
        int64_t v25 = v8; // 0x408b40
        int64_t v26 = v19;
        while (true) {
            int64_t v27 = v23 - 1;
            int64_t v28 = v24; // 0x408bc6
            v21 = v26;
            v22 = v25;
            if (v27 < 0) {
                // break (via goto) -> 0x408bd0
                goto lab_0x408bd0_2;
            }
            int64_t v29 = v25;
            int64_t v30 = v26;
            int64_t v31 = *(int64_t *)(v4 + 16); // 0x408b9f
            uint64_t v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30); // 0x408ba3
            uint64_t v33 = *(int64_t *)(v31 + 8 * v27); // 0x408ba7
            int64_t v34; // 0x408b40
            int64_t v35; // 0x408b40
            while (v33 != v32) {
                // 0x408bb1
                v34 = v30;
                v35 = v28;
                if (v33 >= v32) {
                    goto lab_0x408b90;
                }
                int64_t v36 = v30 - 1; // 0x408bb7
                int64_t v37 = v29 - 1; // 0x408bbb
                *(int64_t *)(v31 + 8 * v37) = v32;
                v28 = -v30;
                v21 = v36;
                v22 = v37;
                if (v28 >= 0) {
                    // break (via goto) -> 0x408bd0
                    goto lab_0x408bd0_2;
                }
                v21 = v26;
                v22 = v25;
                if (v27 < 0) {
                    // break (via goto) -> 0x408bd0
                    goto lab_0x408bd0_2;
                }
                // 0x408b9a
                v29 = v37;
                v30 = v36;
                v31 = *(int64_t *)(v4 + 16);
                v32 = *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v30);
                v33 = *(int64_t *)(v31 + 8 * v27);
            }
            // 0x408c70
            v34 = v30 - 1;
            v35 = -v30;
          lab_0x408b90:
            // 0x408b90
            v24 = v35;
            v26 = v34;
            v23 = v27;
            v25 = v29;
            v21 = v26;
            v22 = v29;
            if (v24 >= 0) {
                // break -> 0x408bd0
                break;
            }
        }
    }
  lab_0x408bd0_2:;
    int64_t v38 = v22; // 0x408bd3
    if (v21 >= 0) {
        int64_t v39 = v21 + 1; // 0x408bd5
        int64_t v40 = *(int64_t *)(v4 + 16); // 0x408bd9
        int64_t v41 = *(int64_t *)(v1 + 16); // 0x408bdd
        int64_t v42 = v22 - v39; // 0x408be2
        memcpy((int64_t *)(v40 + 8 * v42), (int64_t *)v41, 8 * (int32_t)v39);
        v38 = v42;
    }
    int64_t v43 = *v5; // 0x408bf6
    int64_t v44 = v43 - 1; // 0x408bff
    int64_t v45 = 2 * *v2 + v44; // 0x408bff
    int64_t v46 = v45 - v38 + 1; // 0x408c0a
    if (v46 == 0) {
      lab_0x408c44:
        // 0x408c44
        return 0;
    }
    int64_t v47 = *(int64_t *)(v4 + 16); // 0x408c17
    *v5 = v46 + v43;
    int64_t v48 = v44; // 0x408c1f
    int64_t v49 = v46; // 0x408c1f
    int64_t v50 = v45; // 0x408c1f
    while (true) {
        int64_t v51 = v50;
        int64_t v52 = v49;
        uint64_t v53 = *(int64_t *)(8 * v51 + v47); // 0x408c20
        uint64_t v54 = *(int64_t *)(8 * v48 + v47); // 0x408c24
        int64_t v55 = 8 * (v52 + v48) + v47; // 0x408c2c
        while (v53 > v54) {
            // 0x408c35
            *(int64_t *)v55 = v53;
            int64_t v56 = v52 - 1; // 0x408c3c
            if (v56 == 0) {
                return 0;
            }
            v51--;
            v52 = v56;
            v53 = *(int64_t *)(8 * v51 + v47);
            v54 = *(int64_t *)(8 * v48 + v47);
            v55 = 8 * (v52 + v48) + v47;
        }
        // 0x408c50
        *(int64_t *)v55 = v54;
        int64_t v57 = v48 - 1; // 0x408c53
        v48 = v57;
        v49 = v52;
        v50 = v51;
        if (v57 < 0) {
            // 0x408c59
            memcpy((int64_t *)v47, (int64_t *)(v47 + 8 * v38), 8 * (int32_t)v52);
            return 0;
        }
    }
    // 0x408c44
    int64_t v58; // 0x408b40
    int64_t result = v58;
    return result;
}
// Address range: 0x408d10 - 0x408f64
int64_t function_408d10(int128_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 24 * a3; // 0x408d24
    int64_t * v2 = (int64_t *)(a2 + 40); // 0x408d2c
    int64_t v3 = *v2 + v1; // 0x408d34
    int64_t * v4 = (int64_t *)(v3 + 8); // 0x408d3b
    int64_t v5 = *v4 + 1; // 0x408d48
    int128_t v6 = v5; // bp-120, 0x408d4c
    int64_t * mem = malloc(8 * (int32_t)v5); // 0x408d55
    if (mem == NULL) {
        // 0x408e3a
        return 12;
    }
    int64_t v7 = (int64_t)mem; // 0x408d55
    int64_t * v8 = (int64_t *)(a2 + 48); // 0x408d68
    int64_t v9 = v1 + 8;
    *(int64_t *)(*v8 + v9) = -1;
    int64_t v10 = a2 + 8 + 16 * a3;
    uint32_t v11 = *(int32_t *)v10; // 0x408d83
    int64_t v12 = v10; // 0x408d8e
    if ((v11 & 0x3ff00) != 0) {
        // 0x408eb0
        if (*v4 == 0) {
            goto lab_0x408f00;
        } else {
            int64_t v13 = *(int64_t *)*(int64_t *)(v3 + 16); // 0x408ebb
            v12 = v10;
            if ((*(char *)(a2 + 10 + 16 * v13) & 4) == 0) {
                int64_t result = function_407f40(a2, a3, a3, a3, (int64_t)(v11 / 256 % 1024)); // 0x408ee4
                if ((int32_t)result != 0) {
                    // 0x408e3a
                    return result;
                }
                // 0x408ef1
                v12 = 17 * a3 + 8;
            }
            goto lab_0x408d94;
        }
    } else {
        goto lab_0x408d94;
    }
  lab_0x408d94:;
    // 0x408d94
    int64_t v14; // 0x408d10
    int64_t v15; // 0x408d10
    if ((*(char *)v12 & 8) == 0) {
        goto lab_0x408f00;
    } else {
        int64_t v16 = *v2; // 0x408d9e
        int64_t v17 = v16 + v1; // 0x408da2
        if (*(int64_t *)(v17 + 8) < 1) {
            goto lab_0x408f00;
        } else {
            int64_t v18 = 0;
            int64_t v19 = *(int64_t *)(*(int64_t *)(v17 + 16) + 8 * v18); // 0x408e07
            int64_t v20 = *v8; // 0x408e0b
            int64_t v21 = 24 * v19; // 0x408e13
            int64_t v22 = v20 + v21; // 0x408e17
            int64_t v23 = *(int64_t *)(v22 + 8); // 0x408e1a
            int64_t v24 = 0; // 0x408e22
            int64_t v25 = v18; // 0x408e22
            int64_t v26 = v19; // 0x408e22
            int64_t v27 = v21; // 0x408e22
            int64_t v28 = v22; // 0x408e22
            int64_t v29 = v23; // 0x408e22
            int64_t v30; // 0x408d10
            int64_t v31; // 0x408e68
            int64_t v32; // 0x408e72
            int64_t v33; // 0x408e07
            int64_t v34; // 0x408e13
            int64_t v35; // 0x408e17
            int64_t v36; // 0x408e1a
            if (v23 == -1) {
                // 0x408e68
                v31 = v16 + v1;
                v32 = v18;
                v32++;
                v30 = 1;
                if (*(int64_t *)(v31 + 8) <= v32) {
                    // break (via goto) -> 0x408e7c
                    goto lab_0x408e7c;
                }
                // 0x408e03
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
                    // 0x408e68
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x408e7c
                        goto lab_0x408e7c;
                    }
                    // 0x408e03
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
            int64_t result2; // 0x408d10
            int64_t v38; // 0x408d10
            int128_t v39; // bp-88, 0x408d10
            int64_t v40; // 0x408e31
            if (v37 != 0) {
                // 0x408dc0
                v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                v38 = *(int64_t *)(v28 + 16);
            } else {
                // 0x408e29
                v40 = function_408d10(&v39, a2, v26, v37);
                int64_t v41; // 0x408d10
                v38 = v41;
                result2 = v40;
                if ((int32_t)v40 != 0) {
                    // 0x408e3a
                    return result2;
                }
            }
            int64_t v42 = function_408b40((int64_t *)&v6, &v39); // 0x408ddc
            result2 = v42;
            while ((int32_t)v42 == 0) {
                int64_t v43 = v38;
                int64_t v44 = v24; // 0x408def
                if (*(int64_t *)(v27 + 8 + *v8) == 0) {
                    // 0x408e50
                    free((int64_t *)v43);
                    v44 = 1;
                }
                int64_t v45 = *v2; // 0x408df1
                int64_t v46 = v25 + 1; // 0x408df5
                int64_t v47 = v45 + v1; // 0x408df9
                int64_t v48 = v45; // 0x408e01
                if (*(int64_t *)(v47 + 8) <= v46) {
                    // break -> 0x408e7c
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
                    // 0x408e68
                    v31 = v48 + v1;
                    v32 = v18;
                    v32++;
                    v30 = 1;
                    if (*(int64_t *)(v31 + 8) <= v32) {
                        // break (via goto) -> 0x408e7c
                        goto lab_0x408e7c;
                    }
                    // 0x408e03
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
                        // 0x408e68
                        v32++;
                        v30 = 1;
                        if (*(int64_t *)(v31 + 8) <= v32) {
                            // break (via goto) -> 0x408e7c
                            goto lab_0x408e7c;
                        }
                        // 0x408e03
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
                // 0x408e24
                v37 = v29;
                if (v37 != 0) {
                    // 0x408dc0
                    v39 = __asm_movaps(__asm_movdqu(*(int128_t *)v28));
                    v38 = *(int64_t *)(v28 + 16);
                } else {
                    // 0x408e29
                    v40 = function_408d10(&v39, a2, v26, v37);
                    v38 = v49;
                    result2 = v40;
                    if ((int32_t)v40 != 0) {
                        // 0x408e3a
                        return result2;
                    }
                }
                // 0x408dd2
                v42 = function_408b40((int64_t *)&v6, &v39);
                result2 = v42;
            }
            // 0x408e3a
            return result2;
          lab_0x408e7c:
            // 0x408e7c
            if ((char)function_406ff0((int64_t)&v6, a3) == 0) {
                // 0x408e3a
                return 12;
            }
            int64_t v50 = *v8; // 0x408e91
            v15 = v50;
            if ((char)a4 == 1 || (char)v30 == 0) {
                goto lab_0x408f15;
            } else {
                // 0x408ea5
                *(int64_t *)(v50 + v9) = 0;
                v14 = 0x100000000 * v7 >> 32;
                goto lab_0x408f29;
            }
        }
    }
  lab_0x408f00:
    // 0x408f00
    if ((char)function_406ff0((int64_t)&v6, a3) == 0) {
        // 0x408e3a
        return 12;
    }
    // 0x408f11
    v15 = *v8;
    goto lab_0x408f15;
  lab_0x408f15:;
    int128_t v51 = __asm_movdqa(0); // 0x408f15
    int64_t v52 = v15 + v1;
    __asm_movups(*(int128_t *)v52, v51);
    int64_t v53 = 0x100000000 * v7 >> 32;
    *(int64_t *)(v52 + 16) = v53;
    v14 = v53;
    goto lab_0x408f29;
  lab_0x408f29:;
    int128_t v54 = __asm_movdqa(0); // 0x408f32
    *(int64_t *)((int64_t)a1 + 16) = v14;
    *a1 = (int128_t)__asm_movaps(v54);
    return 0;
}
// Address range: 0x408f70 - 0x4090af
int64_t function_408f70(int64_t a1, int64_t * a2, int64_t a3, uint32_t a4) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x408f87
    int64_t v3 = *v2; // 0x408f87
    int64_t size = 8 * v3; // 0x408f94
    int128_t v4 = v3; // bp-72, 0x408f9c
    int64_t * mem = malloc((int32_t)size); // 0x408fa1
    if (mem == NULL) {
        // 0x40909d
        return 12;
    }
    int64_t * v5 = (int64_t *)(v1 + 16);
    if (v3 < 1) {
      lab_0x40903d:
        // 0x40903d
        free((int64_t *)*v5);
        int128_t v6 = __asm_movdqa(0); // 0x40904b
        *v5 = (int64_t)mem;
        *(int128_t *)a2 = (int128_t)__asm_movaps(v6);
        return 0;
    }
    int64_t v7 = &v4;
    int64_t v8 = size; // 0x408f70
    int64_t v9 = 0; // 0x409033
    int64_t v10; // 0x408f70
    int64_t v11; // 0x408f70
    int64_t v12; // 0x408fd0
    while (true) {
      lab_0x408fc0:;
        int64_t v13 = *(int64_t *)(*v5 + 8 * v9); // 0x408fc4
        v12 = *(int64_t *)(a1 + 48) + 24 * v13;
        uint64_t v14 = *(int64_t *)(v12 + 8); // 0x408fd4
        if (v14 >= 1) {
            int64_t v15 = 0;
            int64_t v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16)); // 0x408ff9
            int64_t v17 = 16 * v16 + v8; // 0x409004
            int64_t v18; // 0x40902a
            if ((int32_t)*(char *)(v17 + 8) == a4) {
                // 0x409011
                if (*(int64_t *)v17 == a3) {
                    if (v16 == -1) {
                        goto lab_0x409070;
                    } else {
                        // 0x40901c
                        v18 = function_408670(a1, v7, v13, a3, (int64_t)a4);
                        v11 = a1;
                        v10 = v18;
                        if ((int32_t)v18 != 0) {
                            goto lab_0x40907e_2;
                        } else {
                            goto lab_0x409033;
                        }
                    }
                }
            }
            int64_t v19 = v15 + 1; // 0x408ff0
            while (v14 != v19) {
                // 0x408ff9
                v15 = v19;
                v16 = *(int64_t *)(8 * v15 + *(int64_t *)(v12 + 16));
                v17 = 16 * v16 + v8;
                if ((int32_t)*(char *)(v17 + 8) == a4) {
                    // 0x409011
                    if (*(int64_t *)v17 == a3) {
                        if (v16 == -1) {
                            goto lab_0x409070;
                        } else {
                            // 0x40901c
                            v18 = function_408670(a1, v7, v13, a3, (int64_t)a4);
                            v11 = a1;
                            v10 = v18;
                            if ((int32_t)v18 != 0) {
                                goto lab_0x40907e_2;
                            } else {
                                goto lab_0x409033;
                            }
                        }
                    }
                }
                // 0x408ff0
                v19 = v15 + 1;
            }
        }
        goto lab_0x409070;
    }
  lab_0x40907e_2:
    // 0x40907e
    free(mem);
    return v10 & 0xffffffff;
  lab_0x409070:;
    int64_t v20 = function_408b40((int64_t *)&v4, (int128_t *)v12); // 0x409075
    v11 = v7;
    v10 = v20;
    if ((int32_t)v20 != 0) {
        // break -> 0x40907e
        goto lab_0x40907e_2;
    }
    goto lab_0x409033;
  lab_0x409033:
    // 0x409033
    v9++;
    v8 = v11;
    if (*v2 <= v9) {
        goto lab_0x40903d;
    }
    goto lab_0x408fc0;
}
// Address range: 0x4090b0 - 0x409262
int64_t function_4090b0(int128_t * a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x4090b0
    int64_t v2 = *v1; // 0x4090b0
    if (v2 == 0) {
        // 0x409178
        return 0;
    }
    int64_t * v3 = (int64_t *)(a3 + 8); // 0x4090bf
    int64_t v4 = *v3; // 0x4090bf
    if (v4 == 0) {
        // 0x409178
        return 0;
    }
    int64_t v5 = (int64_t)a1;
    int64_t v6 = v4 + v2; // 0x4090ce
    int64_t * v7 = (int64_t *)(v5 + 8); // 0x4090e3
    int64_t v8 = *v7; // 0x4090e3
    int64_t * v9 = (int64_t *)(v5 + 16); // 0x4090ea
    int64_t v10 = *v9; // 0x4090ea
    int64_t v11 = v8; // 0x4090f5
    int64_t v12 = v10; // 0x4090f5
    int64_t v13 = v4; // 0x4090f5
    int64_t v14 = v2; // 0x4090f5
    if (v8 + v6 > v5) {
        int64_t v15 = v6 + v5; // 0x40922a
        int64_t * mem = realloc((int64_t *)v10, 8 * (int32_t)v15); // 0x409235
        if (mem == NULL) {
            // 0x409178
            return 12;
        }
        // 0x409242
        v12 = (int64_t)mem;
        v11 = *v7;
        v14 = *v1;
        *v9 = v12;
        *(int64_t *)a1 = v15;
        v13 = *v3;
    }
    int64_t v16 = *(int64_t *)(a2 + 16); // 0x4090fb
    int64_t v17 = *(int64_t *)(a3 + 16); // 0x4090ff
    int64_t v18 = v13 - 1; // 0x409108
    int64_t v19 = v18; // 0x40911c
    int64_t v20 = v11 - 1; // 0x40911c
    int64_t v21 = *(int64_t *)(v17 + 8 * v18); // 0x40911c
    int64_t v22 = v13 + v11 + v14; // 0x40911c
    int64_t v23 = v14 - 1; // 0x40911c
    int64_t v24; // 0x4090b0
    int64_t v25; // 0x4090b0
    int64_t v26; // 0x4090b0
    int64_t v27; // 0x4090b0
    int64_t v28; // 0x4090b0
    int64_t v29; // 0x4090b0
    int64_t v30; // 0x4090b0
    int64_t v31; // 0x4090b0
    int64_t v32; // 0x4090b0
    int64_t v33; // 0x4090b0
    int64_t v34; // 0x4090b0
    int64_t v35; // 0x4090b0
    int64_t v36; // 0x4090b0
    int64_t v37; // 0x4090b0
    while (true) {
      lab_0x409120:;
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
            goto lab_0x409136;
        } else {
            goto lab_0x409125;
        }
    }
  lab_0x409190_4:;
    int64_t v40 = *v7; // 0x409190
    int64_t v41 = *v1 + v40 + *v3; // 0x40919b
    int64_t v42 = v40 - 1; // 0x4091a0
    int64_t v43; // 0x4090b0
    int64_t v44 = v41 - v43; // 0x4091a8
    *v7 = v44 + v40;
    int64_t v45; // 0x4090b0
    int64_t v46; // 0x4090b0
    if (v42 < 0 || v44 < 1) {
        // 0x409210
        v46 = 8 * v44;
        v45 = v12;
    } else {
        int64_t v47 = v42; // 0x4090b0
        int64_t v48 = v44; // 0x4090b0
        int64_t v49 = v41 - 1; // 0x4090b0
        while (true) {
            int64_t v50 = v47;
            int64_t v51 = v49;
            int64_t v52 = v48;
            uint64_t v53 = *(int64_t *)(8 * v51 + v12); // 0x4091c0
            uint64_t v54 = *(int64_t *)(8 * v50 + v12); // 0x4091c4
            int64_t v55 = 8 * (v52 + v50) + v12; // 0x4091cc
            while (v53 > v54) {
                // 0x4091d5
                *(int64_t *)v55 = v53;
                int64_t v56 = v52 - 1; // 0x4091dc
                if (v56 == 0) {
                    // break (via goto) -> 0x4091e2
                    goto lab_0x4091e2;
                }
                v51--;
                v52 = v56;
                v53 = *(int64_t *)(8 * v51 + v12);
                v54 = *(int64_t *)(8 * v50 + v12);
                v55 = 8 * (v52 + v50) + v12;
            }
            // 0x4091f0
            *(int64_t *)v55 = v54;
            v47 = v50 - 1;
            v48 = v52;
            v49 = v51;
            if (v50 == 0) {
                // 0x4091fd
                v46 = 8 * v52;
                v45 = *v9;
                goto lab_0x409214;
            }
        }
      lab_0x4091e2:
        // 0x4091e2
        v46 = 0;
        v45 = *v9;
    }
    goto lab_0x409214;
  lab_0x409158:;
    // 0x409158
    int64_t v58; // 0x4090b0
    int64_t v59 = v58 - 1; // 0x409158
    uint64_t v60; // 0x4090b0
    *(int64_t *)(8 * v59 + v12) = v60;
    int64_t v61; // 0x4090b0
    int64_t v62 = v61; // 0x40915c
    int64_t v63 = v59; // 0x40915c
    goto lab_0x409160;
  lab_0x409136:
    // 0x409136
    v60 = v31;
    v58 = v37;
    int64_t v72 = v35; // 0x409139
    v61 = v35;
    if (v35 >= 0) {
        int64_t v73 = v72;
        uint64_t v74 = *(int64_t *)(8 * v73 + v12); // 0x40914a
        while (v74 > v60) {
            // 0x409140
            v72 = v73 - 1;
            v61 = -1;
            if (v73 == 0) {
                goto lab_0x409158;
            }
            v73 = v72;
            v74 = *(int64_t *)(8 * v73 + v12);
        }
        // 0x409153
        v61 = v73;
        v62 = v73;
        v63 = v58;
        if (v74 == v60) {
            goto lab_0x409160;
        } else {
            goto lab_0x409158;
        }
    } else {
        goto lab_0x409158;
    }
  lab_0x409125:;
    int64_t v75 = v28;
    v22 = v36;
    v20 = v34;
    v19 = v32;
    int64_t v76 = v27;
    int64_t v77 = v26;
    int64_t v70; // 0x4090b0
    int64_t v69; // 0x4090b0
    int64_t v66; // 0x4090b0
    int64_t v67; // 0x4090b0
    int64_t v68; // 0x4090b0
    if (v77 < v76) {
        int64_t v78 = v19 - 1; // 0x409127
        v66 = v78;
        v67 = v20;
        v68 = v22;
        v69 = v30;
        v70 = v75;
        if (v78 < 0) {
            // break -> 0x409190
            goto lab_0x409190_4;
        }
        goto lab_0x40912d;
    } else {
        // 0x409180
        v23 = v75 - 1;
        v24 = v77;
        v25 = v76;
        v43 = v22;
        if (v23 < 0) {
            // break -> 0x409190
            goto lab_0x409190_4;
        }
        goto lab_0x409120;
    }
  lab_0x409160:;
    int64_t v64 = v29 - 1; // 0x409160
    v43 = v63;
    if (v64 < 0) {
        // break -> 0x409190
        goto lab_0x409190_4;
    }
    int64_t v65 = v33 - 1; // 0x409166
    v43 = v63;
    if (v65 < 0) {
        // break -> 0x409190
        goto lab_0x409190_4;
    }
    // 0x40916c
    v66 = v65;
    v67 = v62;
    v68 = v63;
    v69 = *(int64_t *)(8 * v64 + v16);
    v70 = v64;
    goto lab_0x40912d;
  lab_0x40912d:;
    int64_t v71 = *(int64_t *)(8 * v66 + v17); // 0x40912d
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
        goto lab_0x409125;
    } else {
        goto lab_0x409136;
    }
  lab_0x409214:;
    int64_t v57 = v45;
    memcpy((int64_t *)v57, (int64_t *)(v57 + 8 * v43), (int32_t)v46);
    // 0x409178
    return 0;
}
// Address range: 0x409270 - 0x409347
int64_t function_409270(int64_t a1, int64_t a2, int32_t a3, int32_t a4, int64_t a5) {
    int64_t v1 = a5;
    int32_t v2 = a2;
    int64_t v3; // 0x409270
    int64_t v4; // 0x409270
    int32_t v5; // 0x409270
    int64_t v6; // 0x409270
    if (v2 == 15) {
        int64_t * mem = malloc(968); // 0x409308
        if (mem == NULL) {
            // 0x4092e9
            return 0;
        }
        int64_t v7 = (int64_t)mem; // 0x409308
        *(int64_t *)a1 = v7;
        *mem = 968;
        v5 = 1;
        v6 = 0;
        v4 = 8;
        v3 = v7;
    } else {
        int64_t v8 = 0x100000000 * a2;
        int64_t v9 = v8 >> 26; // 0x409289
        v5 = v2 + 1;
        v6 = v9;
        v4 = v9 | 8;
        v3 = v8 >> 32;
    }
    int64_t v10 = a3;
    int64_t v11 = a4;
    *(int32_t *)a2 = v5;
    int64_t result = v3 + v4; // 0x409296
    int64_t v12 = v3 + v6;
    *(int64_t *)(v12 + 8) = 0;
    *(int64_t *)(v12 + 16) = v10;
    *(int64_t *)(v12 + 24) = v11;
    __asm_movups(*(int128_t *)(v12 + 48), __asm_movdqu(*(int128_t *)&v1));
    char * v13 = (char *)(v12 + 58); // 0x4092bb
    *v13 = *v13 & -13;
    *(int64_t *)(v12 + 32) = 0;
    *(int64_t *)(v12 + 40) = 0;
    *(int64_t *)(v12 + 64) = -1;
    if (a3 != 0) {
        // 0x4092de
        *(int64_t *)v10 = result;
    }
    // 0x4092e1
    if (a4 != 0) {
        // 0x4092e6
        *(int64_t *)v11 = result;
    }
    // 0x4092e9
    return result;
}
// Address range: 0x409350 - 0x4093f9
int64_t function_409350(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 112; // 0x409354
    int64_t v2 = a2 + 128; // 0x40935a
    int64_t v3 = function_409270(v1, v2, 0, 0, a1 + 40); // 0x40938d
    int64_t v4 = v3; // bp-48, 0x409392
    if (v3 == 0) {
        // 0x4093dd
        return 0;
    }
    *(int64_t *)v3 = a1;
    int64_t v5 = *&v4; // 0x40939d
    char * v6 = (char *)(v5 + 50); // 0x4093a0
    *v6 = *v6 | 4;
    int64_t v7 = *(int64_t *)(a1 + 8); // 0x4093a4
    int64_t v8; // 0x409350
    int64_t v9; // 0x409350
    int64_t result; // 0x409350
    int64_t v10; // 0x409350
    int64_t v11; // 0x409350
    int64_t v12; // 0x409350
    int64_t v13; // 0x409350
    int64_t v14; // 0x409350
    int64_t v15; // 0x4093c9
    int64_t v16; // 0x4093cc
    int64_t v17; // 0x4093bb
    int64_t v18; // 0x4093bb
    if (v7 != 0) {
        // 0x409378
        v13 = v7;
        v10 = v5;
        v9 = v5 + 8;
    } else {
        // 0x4093bb
        v18 = *(int64_t *)(a1 + 16);
        v11 = v5;
        v12 = v5;
        v8 = v18;
        if (v18 != 0 != v18 != 0) {
            v14 = a1;
            v15 = *(int64_t *)v14;
            if (v15 == 0) {
                // 0x4093d8
                result = v4;
                return result;
            }
            // 0x4093b8
            v16 = *(int64_t *)v11;
            v17 = *(int64_t *)(v15 + 16);
            v11 = v16;
            v12 = v16;
            v8 = v17;
            while (v17 != 0 != v17 != v14) {
                // 0x4093c9
                v14 = v15;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x4093d8
                    result = v4;
                    return result;
                }
                // 0x4093b8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
            }
        }
        // 0x4093f0
        v13 = v8;
        v10 = v12;
        v9 = v12 + 16;
    }
    int64_t v19 = v13;
    int64_t v20 = function_409270(v1, v2, 0, 0, v19 + 40); // 0x40938d
    int64_t * v21 = (int64_t *)v9; // 0x409392
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
            // 0x409378
            v13 = v7;
            v10 = v5;
            v9 = v5 + 8;
        } else {
            // 0x4093bb
            v18 = *(int64_t *)(v22 + 16);
            v11 = v5;
            int64_t v23 = v22; // 0x4093c2
            v12 = v5;
            v8 = v18;
            if (v18 != 0 != v18 != 0) {
                v14 = v23;
                v15 = *(int64_t *)v14;
                if (v15 == 0) {
                    // 0x4093d8
                    result = v4;
                    return result;
                }
                // 0x4093b8
                v16 = *(int64_t *)v11;
                v17 = *(int64_t *)(v15 + 16);
                v11 = v16;
                v12 = v16;
                v8 = v17;
                while (v17 != 0 != v17 != v14) {
                    // 0x4093c9
                    v14 = v15;
                    v15 = *(int64_t *)v14;
                    if (v15 == 0) {
                        // 0x4093d8
                        result = v4;
                        return result;
                    }
                    // 0x4093b8
                    v16 = *(int64_t *)v11;
                    v17 = *(int64_t *)(v15 + 16);
                    v11 = v16;
                    v12 = v16;
                    v8 = v17;
                }
            }
            // 0x4093f0
            v13 = v8;
            v10 = v12;
            v9 = v12 + 16;
        }
        // 0x40937f
        v19 = v13;
        v20 = function_409270(v1, v2, 0, 0, v19 + 40);
        v21 = (int64_t *)v9;
        *v21 = v20;
        result = 0;
    }
  lab_0x4093dd:
    // 0x4093dd
    return result;
}
// Address range: 0x409400 - 0x40961a
int64_t function_409400(int32_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t result = *(int64_t *)(a3 + 8); // 0x409414
    int64_t v1; // 0x409400
    int64_t v2; // 0x409400
    int64_t v3; // 0x409400
    int64_t v4; // 0x409400
    int64_t v5; // 0x409400
    int64_t v6; // bp-72, 0x409400
    int64_t v7; // 0x409400
    int64_t v8; // 0x40944f
    int64_t v9; // 0x409456
    int64_t v10; // 0x409400
    int64_t v11; // 0x409479
    int64_t v12; // 0x409493
    if ((*(char *)(a2 + 56) & 16) == 0) {
        int64_t v13 = a2 + 128; // 0x4095a8
        int64_t v14 = a2 + 112; // 0x4095af
        int64_t v15 = &v6;
        int64_t v16 = function_409270(v14, v13, 0, 0, v15); // 0x4095d2
        int64_t v17 = function_409270(v14, v13, 0, 0, v15); // 0x4095ec
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
            goto lab_0x40949b;
        } else {
            goto lab_0x4094b9;
        }
    } else {
        if (result == 0) {
            int64_t v18 = a2 + 128; // 0x409550
            int64_t v19 = a2 + 112; // 0x409557
            int64_t v20 = &v6;
            int64_t v21 = function_409270(v19, v18, 0, 0, v20); // 0x40957a
            int64_t v22 = function_409270(v19, v18, 0, 0, v20); // 0x409594
            v1 = v20;
            v7 = v18;
            v5 = v21;
            v2 = v22;
            v3 = v19;
            v4 = v22;
            goto lab_0x4094b9;
        } else {
            uint64_t v23 = *(int64_t *)(a3 + 40); // 0x409430
            if (v23 > 63 || (*(int64_t *)(a2 + 160) & 1 << v23 % 64) == 0) {
                // 0x409537
                return result;
            }
            // 0x40944f
            v8 = a2 + 128;
            v9 = a2 + 112;
            v10 = &v6;
            v11 = function_409270(v9, v8, 0, 0, v10);
            v12 = function_409270(v9, v8, 0, 0, v10);
            goto lab_0x40949b;
        }
    }
  lab_0x40949b:;
    int64_t v24 = function_409270(v9, v8, (int32_t)result, (int32_t)v12, v10); // 0x4094b1
    v1 = v10;
    v7 = v8;
    v5 = v11;
    v2 = v24;
    v3 = v9;
    v4 = v12;
    goto lab_0x4094b9;
  lab_0x4094b9:;
    int64_t v25 = function_409270(v3, v7, (int32_t)v5, (int32_t)v2, v1); // 0x4094d4
    int64_t result2; // 0x409400
    if (v4 == 0 || v5 == 0 || v2 == 0 || v25 == 0) {
        // 0x409608
        *a1 = 12;
        result2 = 0;
    } else {
        int64_t v26 = *(int64_t *)(a3 + 40); // 0x409505
        *(int64_t *)(v4 + 40) = v26;
        *(int64_t *)(v5 + 40) = v26;
        char * v27 = (char *)(v4 + 50); // 0x409518
        char v28 = *(char *)(a3 + 50) & 8;
        *v27 = *v27 & -9 | v28;
        char * v29 = (char *)(v5 + 50); // 0x40952b
        *v29 = *v29 & -9 | v28;
        result2 = v25;
    }
    // 0x409537
    return result2;
}
// Address range: 0x409620 - 0x40969b
int64_t function_409620(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x40962c
    int64_t v2 = *v1; // 0x40962c
    int32_t result = 0; // bp-28, 0x409630
    int64_t v3; // 0x409620
    if (v2 != 0) {
        // 0x40963d
        if (*(char *)(v2 + 48) == 17) {
            int64_t v4 = function_409400(&result, a1, v2, v3); // 0x409668
            *v1 = v4;
            if (v4 != 0) {
                // 0x409676
                *(int64_t *)v4 = a2;
            }
        }
    }
    int64_t * v5 = (int64_t *)(a2 + 16); // 0x409643
    int64_t v6 = *v5; // 0x409643
    if (v6 == 0 || *(char *)(v6 + 48) != 17) {
        // 0x409652
        return result;
    }
    int64_t v7 = function_409400(&result, a1, v6, v3); // 0x409688
    *v5 = v7;
    if (v7 != 0) {
        // 0x409696
        *(int64_t *)v7 = a2;
    }
    // 0x409652
    return result;
}
// Address range: 0x4096a0 - 0x40971f
int64_t function_4096a0(int64_t a1, int64_t a2) {
    // 0x4096a0
    int128_t v1; // 0x4096a0
    int128_t v2 = v1;
    int64_t v3 = a1;
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x4096a0
    *(int64_t *)(a1 + 8) = v4;
    if (v4 < 1) {
        int128_t v5 = __asm_pxor(v2, v2); // 0x4096f0
        *(int64_t *)(v3 + 16) = 0;
        __asm_movups(*(int128_t *)&v3, v5);
        return 0;
    }
    int64_t * v6 = (int64_t *)v3; // 0x4096bf
    *v6 = v4;
    int32_t size = 8 * (int32_t)v4; // 0x4096c5
    int64_t * mem = malloc(size); // 0x4096c5
    *(int64_t *)(v3 + 16) = (int64_t)mem;
    int64_t result; // 0x4096a0
    if (mem == NULL) {
        // 0x409708
        *(int64_t *)(v3 + 8) = 0;
        *v6 = 0;
        result = 12;
    } else {
        // 0x4096d3
        memcpy(mem, (int64_t *)*(int64_t *)(a2 + 16), size);
        result = 0;
    }
    // 0x4096e5
    return result;
}
// Address range: 0x409720 - 0x4098a2
int64_t function_409720(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409720
    int128_t v1; // 0x409720
    int128_t v2 = v1;
    int64_t v3 = (int64_t)a1;
    if (a2 != 0) {
        int64_t * v4 = (int64_t *)(a2 + 8); // 0x409737
        int64_t v5 = *v4; // 0x409737
        if (a3 != 0 && v5 >= 1) {
            int64_t * v6 = (int64_t *)(a3 + 8); // 0x40974d
            uint64_t v7 = *v6; // 0x40974d
            if (v7 < 1) {
                // 0x409823
                return function_4096a0(v3, a2);
            }
            int64_t v8 = v7 + v5; // 0x40975d
            *a1 = v8;
            int64_t * mem = malloc(8 * (int32_t)v8); // 0x40976f
            int64_t v9 = (int64_t)mem; // 0x40976f
            *(int64_t *)(v3 + 16) = v9;
            if (mem == NULL) {
                // 0x40980a
                return 12;
            }
            int64_t v10 = *(int64_t *)(a2 + 16); // 0x409784
            int64_t v11 = 0;
            int64_t v12 = 0;
            int64_t v13 = v9;
            int64_t v14 = *(int64_t *)(a3 + 16); // 0x4097c8
            int64_t v15 = *(int64_t *)v10; // 0x4097cc
            int64_t v16 = *(int64_t *)(v14 + 8 * v11); // 0x4097d3
            int64_t v17; // 0x409720
            int64_t v18; // 0x409720
            if (v15 > v16) {
                // 0x4097dc
                *(int64_t *)v13 = v16;
                v17 = v11 + 1;
                v18 = v12;
            } else {
                // 0x409798
                *(int64_t *)v13 = v15;
                v17 = v11 + (int64_t)(v15 == v16);
                v18 = v12 + 1;
            }
            int64_t v19 = 1; // 0x4097cf
            int64_t v20 = v18;
            int64_t v21 = v17;
            uint64_t v22 = *v4; // 0x4097aa
            int64_t v23; // 0x409720
            while (v22 > v20) {
                int64_t v24 = v13 + 8; // 0x4097ae
                int64_t v25 = 8 * v20 + v10; // 0x4097bb
                if (v7 <= v21) {
                    int64_t v26 = v22 - v20; // 0x409880
                    memcpy((int64_t *)v24, (int64_t *)v25, 8 * (int32_t)v26);
                    v23 = v26 + v19;
                    goto lab_0x409849;
                }
                v11 = v21;
                v12 = v20;
                v13 = v24;
                v14 = *(int64_t *)(a3 + 16);
                v15 = *(int64_t *)v25;
                v16 = *(int64_t *)(v14 + 8 * v11);
                if (v15 > v16) {
                    // 0x4097dc
                    *(int64_t *)v13 = v16;
                    v17 = v11 + 1;
                    v18 = v12;
                } else {
                    // 0x409798
                    *(int64_t *)v13 = v15;
                    v17 = v11 + (int64_t)(v15 == v16);
                    v18 = v12 + 1;
                }
                // 0x4097aa
                v19++;
                v20 = v18;
                v21 = v17;
                v22 = *v4;
            }
            int64_t v27 = *v6; // 0x409840
            v23 = v19;
            if (v27 > v21) {
                int64_t v28 = v27 - v21; // 0x40986b
                memcpy((int64_t *)(8 * v19 + v9), (int64_t *)(8 * v21 + v14), 8 * (int32_t)v28);
                v23 = v28 + v19;
            }
          lab_0x409849:
            // 0x409849
            *(int64_t *)(v3 + 8) = v23;
            return 0;
        }
        // 0x4097e8
        if (v5 >= 0 == (v5 != 0)) {
            // 0x409823
            return function_4096a0(v3, a2);
        }
    }
    if (a3 != 0) {
        int64_t v29 = *(int64_t *)(a3 + 8); // 0x4097f2
        if (v29 >= 0 == (v29 != 0)) {
            // 0x409823
            return function_4096a0(v3, a3);
        }
    }
    // 0x4097f9
    *(int64_t *)(v3 + 16) = 0;
    *(int128_t *)a1 = (int128_t)__asm_movaps(__asm_pxor(v2, v2));
    // 0x40980a
    return 0;
}
// Address range: 0x4098b0 - 0x409bb0
int64_t function_4098b0(int128_t * a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x4098be
    uint64_t v3 = *v2; // 0x4098be
    if (v3 == 0) {
        // 0x409b88
        *(int32_t *)a1 = 0;
        // 0x409957
        return 0;
    }
    uint64_t v4 = (int64_t)a4;
    int64_t v5 = v3 + (v4 & 0xffffffff); // 0x4098ce
    int64_t v6 = v5; // 0x4098d2
    if (v3 >= 1) {
        int64_t v7 = *(int64_t *)(v1 + 16); // 0x4098d4
        int64_t v8 = v7; // 0x4098dc
        int64_t v9 = v5; // 0x4098dc
        v9 += *(int64_t *)v8;
        v8 += 8;
        v6 = v9;
        while (v7 + 8 * v3 != v8) {
            // 0x4098e0
            v9 += *(int64_t *)v8;
            v8 += 8;
            v6 = v9;
        }
    }
    int64_t v10 = *(int64_t *)(a2 + 136) & v6; // 0x409901
    int64_t v11 = 24 * v10 + *(int64_t *)(a2 + 64); // 0x40990c
    uint64_t v12 = *(int64_t *)v11; // 0x409910
    if (v12 >= 1) {
        int64_t v13 = 0; // 0x409922
        int64_t v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16)); // 0x409931
        int64_t result; // 0x4098b0
        if (*(int64_t *)v14 == v6) {
            // 0x40993a
            if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                // 0x409947
                result = v14;
                if ((char)function_406a50(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                    // 0x409957
                    return result;
                }
            }
        }
        // 0x409928
        v13++;
        while (v13 != v12) {
            // 0x409931
            v14 = *(int64_t *)(8 * v13 + *(int64_t *)(v11 + 16));
            if (*(int64_t *)v14 == v6) {
                // 0x40993a
                if ((int32_t)(*(char *)(v14 + 104) % 16) == a4) {
                    // 0x409947
                    result = v14;
                    if ((char)function_406a50(*(int64_t *)(v14 + 80), v1, 3 * v10) != 0) {
                        // 0x409957
                        return result;
                    }
                }
            }
            // 0x409928
            v13++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x40997a
    if (mem == NULL) {
        // 0x409b08
        *(int32_t *)a1 = 12;
        // 0x409957
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x40997a
    int64_t v15 = result2 + 8; // 0x40998b
    if ((int32_t)function_4096a0(v15, v1) != 0) {
        // 0x409ba3
        free(mem);
        // 0x409b08
        *(int32_t *)a1 = 12;
        // 0x409957
        return 0;
    }
    char * v16 = (char *)(result2 + 104); // 0x4099a6
    *v16 = *v16 & -16 | (char)a4 % 16;
    int64_t * v17 = (int64_t *)(result2 + 80); // 0x4099c6
    *v17 = v15;
    int64_t v18; // 0x4098b0
    int64_t v19; // 0x4098b0
    int64_t v20; // 0x4098b0
    int64_t v21; // 0x4098b0
    int64_t v22; // 0x4098b0
    int64_t v23; // 0x4098b0
    int64_t v24; // 0x4098b0
    int64_t v25; // 0x4098b0
    int64_t v26; // 0x4099d0
    int64_t v27; // 0x4098b0
    int64_t * v28; // 0x4098b0
    uint64_t v29; // 0x409a0a
    if (*v2 >= 1) {
        // 0x4099d0
        v26 = result2 + 24;
        v27 = result2 + 16;
        v28 = (int64_t *)v27;
        v23 = v1;
        v18 = 0;
        v21 = 0;
        while (true) {
          lab_0x4099f0:
            // 0x4099f0
            v22 = v21;
            int64_t v30 = v18;
            int64_t v31 = 16 * *(int64_t *)(*(int64_t *)(v1 + 16) + 8 * v22) + v23; // 0x4099fc
            int64_t v32 = v31 + 8; // 0x409a00
            uint32_t v33 = *(int32_t *)v32; // 0x409a00
            unsigned char v34 = *(char *)v32; // 0x409a03
            v25 = 1;
            v20 = v30;
            if (v34 == 1 == (v33 & 0x3ff00) == 0) {
                goto lab_0x409ace;
            } else {
                char v35 = 2 * *(char *)(v31 + 10) & 32 | *v16;
                *v16 = v35;
                if (v34 == 2) {
                    // 0x409b20
                    *v16 = v35 | 16;
                } else {
                    if (v34 == 4) {
                        // 0x409a54
                        *v16 = v35 | 64;
                    }
                }
                int64_t v36 = v34; // 0x409a03
                v25 = v36;
                v20 = v30;
                if ((v33 & 0x3ff00) == 0) {
                    goto lab_0x409ace;
                } else {
                    int64_t v37 = v36; // 0x409a69
                    int64_t v38 = v30; // 0x409a69
                    if (v15 == *v17) {
                        int64_t * mem2 = malloc(24); // 0x409b55
                        int64_t v39 = (int64_t)mem2; // 0x409b55
                        *v17 = v39;
                        if (mem2 == NULL) {
                            // 0x409b96
                            function_4081d0(result2);
                            goto lab_0x409b08;
                        }
                        // 0x409b64
                        if ((int32_t)function_4096a0(v39, v1) != 0) {
                          lab_0x409b08:
                            // 0x409b08
                            *(int32_t *)a1 = 12;
                            // 0x409957
                            return 0;
                        }
                        // 0x409b73
                        *v16 = *v16 | -128;
                        v37 = v1;
                        v38 = 0;
                    }
                    // 0x409a6f
                    v29 = (int64_t)(v33 / 256 & 0xff03ff);
                    v19 = v38;
                    v24 = v37;
                    if (v29 % 2 == 0) {
                        if (v4 % 2 == 0 || (v29 & 2) == 0) {
                            goto lab_0x409a83;
                        } else {
                            goto lab_0x409aa0;
                        }
                    } else {
                        if (v4 % 2 == 0) {
                            goto lab_0x409aa0;
                        } else {
                            if ((v29 & 2) != 0) {
                                goto lab_0x409aa0;
                            } else {
                                goto lab_0x409a83;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x409ae4:
    // 0x409ae4
    if ((int32_t)function_407120(a2, result2, v6) == 0) {
        // 0x409957
        return result2;
    }
    // 0x409afa
    function_4081d0(result2);
    // 0x409b08
    *(int32_t *)a1 = 12;
    // 0x409957
    return 0;
  lab_0x409ace:;
    int64_t v40 = v22 + 1; // 0x409ace
    v23 = v25;
    v18 = v20;
    v21 = v40;
    if (v40 >= *v2) {
        // break -> 0x409ae4
        goto lab_0x409ae4;
    }
    goto lab_0x4099f0;
  lab_0x409a83:
    if ((v4 & 2) == 0 == ((v29 & 16) != 0)) {
        goto lab_0x409aa0;
    } else {
        // 0x409a8e
        v25 = v24;
        v20 = v19;
        if ((v4 & 4) != 0 || (v29 & 64) == 0) {
            goto lab_0x409ace;
        } else {
            goto lab_0x409aa0;
        }
    }
  lab_0x409aa0:;
    int64_t v41 = v22 - v19; // 0x409aa3
    int64_t v42 = v24; // 0x409aa6
    if (v41 >= 0) {
        int64_t v43 = *v28; // 0x409aa8
        v42 = v24;
        if (v41 < v43) {
            // 0x409ab2
            *v28 = v43 - 1;
            function_408770(v27, v26, v41);
            v42 = v26;
        }
    }
    // 0x409aca
    v25 = v42;
    v20 = v19 + 1;
    goto lab_0x409ace;
}
// Address range: 0x409bb0 - 0x409d98
int64_t function_409bb0(int32_t * a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a3;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x409bbe
    int64_t v3 = *v2; // 0x409bbe
    if (v3 == 0) {
        // 0x409d84
        *a1 = 0;
        // 0x409d2f
        return 0;
    }
    int64_t v4 = v3; // 0x409bcb
    if (v3 >= 1) {
        int64_t v5 = *(int64_t *)(v1 + 16); // 0x409bcd
        int64_t v6 = v5; // 0x409bd5
        int64_t v7 = v3; // 0x409bd5
        v7 += *(int64_t *)v6;
        v6 += 8;
        v4 = v7;
        while (v5 + 8 * v3 != v6) {
            // 0x409bd8
            v7 += *(int64_t *)v6;
            v6 += 8;
            v4 = v7;
        }
    }
    int64_t v8 = *(int64_t *)(a2 + 136) & v4; // 0x409bf4
    int64_t v9 = 24 * v8 + *(int64_t *)(a2 + 64); // 0x409bff
    uint64_t v10 = *(int64_t *)v9; // 0x409c03
    if (v10 >= 1) {
        int64_t v11 = 0; // 0x409c12
        int64_t v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16)); // 0x409c18
        int64_t result; // 0x409bb0
        int64_t v13; // 0x409c28
        if (*(int64_t *)v12 == v4) {
            // 0x409c21
            v13 = function_406a50(v12 + 8, v1, 3 * v8);
            result = v12;
            if ((char)v13 != 0) {
                // 0x409d2f
                return result;
            }
        }
        // 0x409c35
        v11++;
        while (v10 != v11) {
            // 0x409c18
            v12 = *(int64_t *)(8 * v11 + *(int64_t *)(v9 + 16));
            if (*(int64_t *)v12 == v4) {
                // 0x409c21
                v13 = function_406a50(v12 + 8, v1, 3 * v8);
                result = v12;
                if ((char)v13 != 0) {
                    // 0x409d2f
                    return result;
                }
            }
            // 0x409c35
            v11++;
        }
    }
    int64_t * mem = calloc(112, 1); // 0x409c48
    if (mem == NULL) {
        // 0x409d78
        *a1 = 12;
        // 0x409d2f
        return 0;
    }
    int64_t result2 = (int64_t)mem; // 0x409c48
    int64_t v14 = result2 + 8; // 0x409c59
    if ((int32_t)function_4096a0(v14, v1) != 0) {
        // 0x409d70
        free(mem);
        // 0x409d78
        *a1 = 12;
        // 0x409d2f
        return 0;
    }
    uint64_t v15 = *v2; // 0x409c70
    *(int64_t *)(result2 + 80) = v14;
    char v16; // 0x409bb0
    int64_t v17; // 0x409bb0
    int64_t v18; // 0x409bb0
    int64_t v19; // 0x409c89
    char * v20; // 0x409bb0
    if (v15 >= 1) {
        int64_t v21 = *(int64_t *)(v1 + 16); // 0x409c81
        v19 = v21 + 8 * v15;
        v20 = (char *)(result2 + 104);
        v17 = v21;
        while (true) {
          lab_0x409cd4_2:
            // 0x409cd4
            v18 = v17;
            int64_t v22 = 16 * *(int64_t *)v18 + v21; // 0x409cdb
            int64_t v23 = v22 + 8; // 0x409cde
            char v24 = *(char *)v23; // 0x409cde
            if (v24 != 1) {
                char v25 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                *v20 = v25;
                if (v24 == 2) {
                    // 0x409d48
                    *v20 = v25 | 16;
                    goto lab_0x409ccb;
                } else {
                    if (v24 != 4) {
                        // 0x409d58
                        v16 = v25;
                        if (v24 == 12) {
                            goto lab_0x409d10;
                        } else {
                            // 0x409d5d
                            v16 = v25;
                            if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                                goto lab_0x409ccb;
                            } else {
                                goto lab_0x409d10;
                            }
                        }
                    } else {
                        // 0x409cc5
                        *v20 = v25 | 64;
                        goto lab_0x409ccb;
                    }
                }
            } else {
                // 0x409ce7
                if ((*(int32_t *)v23 & 0x3ff00) == 0) {
                    goto lab_0x409ccb;
                } else {
                    char v26 = 2 * *(char *)(v22 + 10) & 32 | *v20;
                    *v20 = v26;
                    v16 = v26;
                    goto lab_0x409d10;
                }
            }
        }
    }
  lab_0x409d1d_2:
    // 0x409d1d
    if ((int32_t)function_407120(a2, result2, v4) == 0) {
        // 0x409d2f
        return result2;
    }
    // 0x409d8e
    function_4081d0(result2);
    // 0x409d78
    *a1 = 12;
    // 0x409d2f
    return 0;
  lab_0x409ccb:;
    int64_t v27 = v18 + 8; // 0x409ccb
    if (v19 == v27) {
        // break -> 0x409d1d
        goto lab_0x409d1d_2;
    }
    // 0x409cd4
    v17 = v27;
    goto lab_0x409cd4_2;
  lab_0x409d10:;
    int64_t v28 = v18 + 8; // 0x409d10
    *v20 = v16 | -128;
    if (v19 == v28) {
        // break -> 0x409d1d
        goto lab_0x409d1d_2;
    }
    // 0x409cd4
    v17 = v28;
    goto lab_0x409cd4_2;
}
// Address range: 0x409da0 - 0x409e48
int64_t function_409da0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x409da0
    if (a4 < 1) {
        // 0x409e38
        return 0;
    }
    int64_t v1 = 0; // 0x409da0
    int64_t result; // 0x409da0
    while (true) {
        int64_t v2 = v1;
        int64_t v3 = 8 * v2; // 0x409e19
        int64_t * v4 = (int64_t *)(v3 + a2); // 0x409e19
        int64_t v5 = *v4; // 0x409e19
        int64_t v6 = *(int64_t *)(v3 + a3); // 0x409e1e
        if (v5 != 0) {
            if (v6 != 0) {
                // 0x409dcd
                int64_t v7; // bp-72, 0x409da0
                int64_t v8 = function_409720(&v7, v5 + 8, v6 + 8, a4); // 0x409dda
                int32_t v9 = v8; // 0x409ddf
                int32_t v10 = v9; // bp-76, 0x409ddf
                result = v8;
                if (v9 != 0) {
                    // break -> 0x409e38
                    break;
                }
                // 0x409de7
                int64_t v11; // 0x409da0
                *v4 = function_409bb0(&v10, a1, &v7, a4, v11, v11);
                free((int64_t *)v11);
                uint32_t v12 = v10; // 0x409e08
                if (v12 != 0) {
                    // 0x409e38
                    result = v12;
                    return result;
                }
            }
            int64_t v13 = v2 + 1; // 0x409e10
            v1 = v13;
            result = 0;
            if (v13 == a4) {
                // break -> 0x409e38
                break;
            }
        } else {
            // 0x409e28
            *v4 = v6;
            int64_t v14 = v2 + 1; // 0x409e2d
            v1 = v14;
            result = 0;
            if (v14 == a4) {
                // break -> 0x409e38
                break;
            }
        }
    }
  lab_0x409e38_2:
    // 0x409e38
    return result;
}
// Address range: 0x409e50 - 0x40a1d2
int64_t function_409e50(int64_t a1, int128_t * a2, uint64_t a3, int64_t a4, int32_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 200); // 0x409e61
    if (v1 <= 0) {
        // 0x40a152
        return 0;
    }
    int64_t v2 = (int64_t)a2;
    int64_t * v3 = (int64_t *)(a1 + 216); // 0x409e74
    int64_t v4 = *v3; // 0x409e74
    int64_t v5 = v4 + 8; // 0x409e8c
    int64_t v6 = 0;
    uint64_t v7 = v6 + v1; // 0x409e70
    int64_t v8 = (v7 / 0x8000000000000000 + v7) / 2; // 0x409e85
    int64_t v9 = v8; // 0x409e91
    int64_t v10 = v8; // 0x409e91
    int64_t v11 = v1; // 0x409e91
    int64_t v12; // 0x409e50
    int64_t v13; // 0x409e50
    uint64_t v14; // 0x409ea0
    int64_t v15; // 0x409eae
    if (*(int64_t *)(40 * v8 + v5) >= a3) {
        v12 = v6;
        if (v9 <= v6) {
            // break (via goto) -> 0x409ecb
            goto lab_0x409ecb;
        }
        // 0x409ea0
        v14 = v9 + v6;
        v15 = (v14 / 0x8000000000000000 + v14) / 2;
        v10 = v15;
        v11 = v9;
        while (*(int64_t *)(40 * v15 + v5) >= a3) {
            // 0x409ec6
            v13 = v15;
            v12 = v6;
            if (v13 <= v6) {
                // break (via goto) -> 0x409ecb
                goto lab_0x409ecb;
            }
            // 0x409ea0
            v14 = v13 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v13;
        }
    }
    int64_t v16 = v10 + 1; // 0x40a140
    v12 = v16;
    while (v16 < v11) {
        // 0x409e70
        v6 = v16;
        v7 = v6 + v11;
        v8 = (v7 / 0x8000000000000000 + v7) / 2;
        v9 = v8;
        v10 = v8;
        if (*(int64_t *)(40 * v8 + v5) >= a3) {
            v12 = v6;
            if (v9 <= v6) {
                // break (via goto) -> 0x409ecb
                goto lab_0x409ecb;
            }
            // 0x409ea0
            v14 = v9 + v6;
            v15 = (v14 / 0x8000000000000000 + v14) / 2;
            v10 = v15;
            v11 = v9;
            while (*(int64_t *)(40 * v15 + v5) >= a3) {
                // 0x409ec6
                v13 = v15;
                v12 = v6;
                if (v13 <= v6) {
                    // break (via goto) -> 0x409ecb
                    goto lab_0x409ecb;
                }
                // 0x409ea0
                v14 = v13 + v6;
                v15 = (v14 / 0x8000000000000000 + v14) / 2;
                v10 = v15;
                v11 = v13;
            }
        }
        // 0x40a140
        v16 = v10 + 1;
        v12 = v16;
    }
  lab_0x409ecb:
    // 0x409ecb
    if (v1 <= v12) {
        // 0x40a152
        return 0;
    }
    int64_t v17 = 40 * v12; // 0x409edf
    if (v12 == -1 | *(int64_t *)(v17 + 8 + v4) != a3) {
        // 0x40a152
        return 0;
    }
    int64_t v18 = v2 + 16; // 0x409f06
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x409f15
    int64_t * v20 = (int64_t *)(a1 + 184);
    int64_t v21; // bp-88, 0x409e50
    int64_t v22 = &v21;
    int64_t v23 = v4; // 0x409f1f
    int64_t * v24; // 0x409e50
    int64_t v25; // 0x409e50
    int64_t v26; // 0x409e50
    int64_t result; // 0x409e50
    int64_t v27; // 0x409e50
    int64_t v28; // 0x409e50
    int64_t v29; // 0x409e50
    int64_t v30; // 0x409e50
    int32_t v31; // bp-92, 0x409e50
    int64_t v32; // 0x40a028
    int64_t v33; // 0x409f43
    int64_t v34; // 0x409f47
    int64_t v35; // 0x409f57
    while (true) {
        // 0x409f23
        int64_t v36; // 0x409e50
        v29 = v36;
        v25 = v23 + v17;
        int64_t v37; // 0x40a052
        while (true) {
          lab_0x40a008:
            // 0x40a008
            v26 = v25;
            v30 = v29;
            int64_t v38 = *(int64_t *)v26; // 0x40a008
            int64_t v39 = *(int64_t *)(v2 + 8); // 0x40a00b
            v28 = v30;
            if (function_408600(v39, v18, v38) == 0) {
                goto lab_0x409ff9;
            } else {
                // 0x40a024
                v32 = *(int64_t *)(v26 + 24) + a3;
                int64_t v40 = v32 - *(int64_t *)(v26 + 16); // 0x40a02e
                if (v40 != a3) {
                    // 0x409f38
                    v33 = *(int64_t *)(*(int64_t *)(v19 + 24) + 8 * v38);
                    v34 = 8 * v40;
                    int64_t * v41 = (int64_t *)(*v20 + v34);
                    v35 = *v41;
                    if (v35 == 0) {
                        // 0x40a0f0
                        v21 = 1;
                        int64_t * mem = malloc(8); // 0x40a10c
                        if (mem == NULL) {
                            // 0x40a192
                            result = 12;
                            return result;
                        }
                        // 0x40a11b
                        v31 = 0;
                        *mem = v33;
                        v24 = v41;
                        v27 = (int64_t)mem;
                        goto lab_0x409fbe;
                    } else {
                        // 0x409f68
                        v28 = v30;
                        if (function_408600(*(int64_t *)(v35 + 16), v35 + 24, v33) != 0) {
                            goto lab_0x409ff9;
                        } else {
                            // 0x409f7d
                            v31 = function_4096a0(v22, v35 + 8);
                            int64_t v42 = function_406ff0(v22, v33); // 0x409f99
                            if (v31 != 0) {
                                goto lab_0x40a180_2;
                            }
                            if ((char)v42 != 1) {
                                goto lab_0x40a180_2;
                            }
                            // 0x409fb2
                            v24 = (int64_t *)(*v20 + v34);
                            v27 = v30;
                            goto lab_0x409fbe;
                        }
                    }
                } else {
                    int64_t v43 = *(int64_t *)(v19 + 40); // 0x40a03b
                    v37 = *(int64_t *)*(int64_t *)(24 * v38 + 16 + v43);
                    v28 = v30;
                    if (function_408600(v39, v18, v37) == 0) {
                        // break -> 0x40a062
                        break;
                    }
                    goto lab_0x409ff9;
                }
            }
        }
        // 0x40a062
        v21 = 1;
        int64_t * mem2 = malloc(8); // 0x40a079
        int32_t v44; // 0x409e50
        if (mem2 == NULL) {
            // 0x40a1b6
            v21 = 0;
            v44 = 12;
        } else {
            // 0x40a08c
            *mem2 = v37;
            v44 = 0;
        }
        // 0x40a091
        v31 = v44;
        int64_t v45 = function_408f70(v19, &v21, a4, a5); // 0x40a0a6
        int64_t v46 = function_408b40((int64_t *)a2, (int128_t *)&v21); // 0x40a0b6
        free(mem2);
        uint32_t v47 = v31; // 0x40a0c8
        if ((v47 || (int32_t)(v46 || v45)) != 0) {
            // 0x40a1a6
            result = v47;
            if (v47 != 0) {
                return result;
            } else {
                // 0x40a1aa
                result = ((int32_t)v45 != 0 ? v45 : v46) & 0xffffffff;
                return result;
            }
        }
        // 0x40a0da
        v36 = (int64_t)mem2;
        v23 = *v3;
    }
  lab_0x40a152:
    // 0x40a152
    return result;
  lab_0x40a180_2:
    // 0x40a180
    free((int64_t *)v30);
    result = v31;
    if (v31 != 0) {
        return result;
    } else {
        // 0x40a192
        result = 12;
        return result;
    }
  lab_0x409ff9:
    // 0x409ff9
    v29 = v28;
    v25 = v26 + 40;
    result = 0;
    if (*(char *)(v26 + 32) == 0) {
        return result;
    }
    goto lab_0x40a008;
  lab_0x409fbe:;
    int64_t v48 = v27;
    *v24 = function_409bb0(&v31, v19, &v21, v33, v32, v35);
    free((int64_t *)v48);
    v28 = v48;
    if (*(int64_t *)(*v20 + v34) == 0) {
        uint32_t v49 = v31; // 0x40a168
        v28 = v48;
        if (v49 != 0) {
            // 0x40a152
            result = v49;
            goto lab_0x40a152;
        }
    }
    goto lab_0x409ff9;
}
// Address range: 0x40a1e0 - 0x40a321
int64_t function_40a1e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = *(int64_t *)(a1 + 152); // 0x40a1f2
    if (a2 < 1) {
      lab_0x40a2c2:
        // 0x40a2c2
        return 0;
    }
    int64_t * v2 = (int64_t *)(a1 + 232);
    int64_t * v3 = (int64_t *)(a1 + 248);
    int64_t * v4 = (int64_t *)(a1 + 240);
    int64_t v5 = 0; // 0x40a210
    int64_t v6; // 0x40a1e0
    int64_t v7; // 0x40a220
    int64_t v8; // 0x40a22b
    uint64_t v9; // 0x40a235
    while (true) {
        // 0x40a21d
        v6 = v5;
        v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
        v8 = 16 * v7 + *(int64_t *)v1;
        if (*(char *)(v8 + 8) == 8) {
            // 0x40a235
            v9 = *(int64_t *)v8;
            if (v9 <= 63) {
                // 0x40a23e
                if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                    // break -> 0x40a24c
                    break;
                }
            }
        }
        // 0x40a210
        v5 = v6 + 1;
        if (v5 >= a2) {
            return 0;
        }
    }
    int64_t v10 = *v2; // 0x40a24c
    int64_t v11 = *v3; // 0x40a253
    int64_t v12 = v10; // 0x40a261
    int64_t v13 = v11; // 0x40a261
    int64_t * mem; // 0x40a2f0
    if (v10 == *v4) {
        // 0x40a2d8
        mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
        if (mem == NULL) {
            // break -> 0x40a2c2
            break;
        }
        // 0x40a302
        v13 = (int64_t)mem;
        *v3 = v13;
        v12 = *v2;
        *v4 = 2 * v10;
    }
    int64_t * mem2 = calloc(1, 48); // 0x40a27c
    int64_t v14 = (int64_t)mem2; // 0x40a27c
    *(int64_t *)(v13 + 8 * v12) = v14;
    int64_t result = 12; // 0x40a292
    while (mem2 != NULL) {
        // 0x40a294
        *mem2 = a4;
        int64_t v15 = v6 + 1; // 0x40a2a0
        *(int64_t *)(v14 + 8) = v7;
        *v2 = v12 + 1;
        result = 0;
        if (v15 >= 48) {
            // break -> 0x40a2c2
            break;
        }
        v5 = v15;
        while (true) {
            // 0x40a21d
            v6 = v5;
            v7 = *(int64_t *)(8 * v6 + *(int64_t *)a3);
            v8 = 16 * v7 + *(int64_t *)v1;
            if (*(char *)(v8 + 8) == 8) {
                // 0x40a235
                v9 = *(int64_t *)v8;
                if (v9 <= 63) {
                    // 0x40a23e
                    if ((*(int64_t *)(v1 + 160) & 1 << v9 % 64) != 0) {
                        // break -> 0x40a24c
                        break;
                    }
                }
            }
            // 0x40a210
            v5 = v6 + 1;
            if (v5 >= 48) {
                return 0;
            }
        }
        // 0x40a24c
        v10 = *v2;
        v11 = *v3;
        v12 = v10;
        v13 = v11;
        if (v10 == *v4) {
            // 0x40a2d8
            mem = realloc((int64_t *)v11, 16 * (int32_t)v10);
            result = 12;
            if (mem == NULL) {
                // break -> 0x40a2c2
                break;
            }
            // 0x40a302
            v13 = (int64_t)mem;
            *v3 = v13;
            v12 = *v2;
            *v4 = 2 * v10;
        }
        // 0x40a263
        mem2 = calloc(1, 48);
        v14 = (int64_t)mem2;
        *(int64_t *)(v13 + 8 * v12) = v14;
        result = 12;
    }
    // 0x40a2c2
    return result;
}
// Address range: 0x40a330 - 0x40a41e
int64_t function_40a330(int64_t a1, int64_t a2, int32_t a3) {
    if (a2 < 0) {
        // 0x40a3e0
        return (int64_t)*(int32_t *)(a1 + 112);
    }
    // 0x40a342
    if (*(int64_t *)(a1 + 88) == a2) {
        // 0x40a386
        return a3 & 2 ^ 10;
    }
    // 0x40a34c
    if (*(int32_t *)(a1 + 144) < 2) {
        unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a2); // 0x40a39b
        int64_t v2 = *(int64_t *)(*(int64_t *)(a1 + 128) + (int64_t)(8 * v1 / 64)); // 0x40a3a6
        if ((1 << (int64_t)(v1 % 64) & v2) != 0) {
            // 0x40a386
            return 1;
        }
        // 0x40a3ba
        if (v1 != 10) {
            // 0x40a386
            return 0;
        }
        // 0x40a3c1
        return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
    }
    int64_t v3 = a2;
    int32_t wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16)); // 0x40a36a
    while (wc == -1) {
        // 0x40a360
        if (v3 == 0) {
            // 0x40a3e0
            return (int64_t)*(int32_t *)(a1 + 112);
        }
        v3--;
        wc = *(int32_t *)(4 * v3 + *(int64_t *)(a1 + 16));
    }
    // 0x40a372
    if (*(char *)(a1 + 142) != 0) {
        // 0x40a400
        if (wc != 95 != (iswalnum(wc) == 0)) {
            // 0x40a386
            return 1;
        }
    }
    // 0x40a37f
    if (wc != 10) {
        // 0x40a386
        return 0;
    }
    // 0x40a3c1
    return 2 * (int64_t)(*(char *)(a1 + 141) != 0);
}
// Address range: 0x40a420 - 0x40a54b
int64_t function_40a420(int64_t a1, int64_t a2, int64_t a3) {
    unsigned char v1 = *(char *)(*(int64_t *)(a1 + 8) + a3); // 0x40a424
    int64_t v2 = a2 + 8;
    unsigned char v3 = *(char *)v2; // 0x40a428
    if (v3 == 3) {
        uint64_t v4 = (int64_t)v1; // 0x40a424
        if ((*(int64_t *)((v4 / 8 & 24) + a2) & 1 << v4 % 64) == 0) {
            // 0x40a4cf
            return 0;
        }
    } else {
        if (v3 < 4) {
            // 0x40a4d8
            if (v1 == (char)a2 != (v3 == 1)) {
                // 0x40a4cf
                return 0;
            }
        } else {
            if (v3 != 5) {
                // 0x40a43e
                if (v1 < 0 || v3 != 7) {
                    // 0x40a4cf
                    return 0;
                }
            }
            if (v1 == 10) {
                // 0x40a530
                if ((*(char *)(*(int64_t *)(a1 + 152) + 216) & 64) == 0) {
                    // 0x40a4cf
                    return 0;
                }
            } else {
                if (v1 == 0) {
                    // 0x40a460
                    if (*(char *)(*(int64_t *)(a1 + 152) + 216) <= -1) {
                        // 0x40a4cf
                        return 0;
                    }
                }
            }
        }
    }
    uint32_t v5 = *(int32_t *)v2; // 0x40a473
    if ((v5 & 0x3ff00) == 0) {
        // 0x40a4cf
        return 1;
    }
    int64_t v6 = v5; // 0x40a473
    uint64_t v7 = function_40a330(a1, a3, *(int32_t *)(a1 + 160)); // 0x40a48f
    if ((v6 & 1024) != 0) {
        // 0x40a520
        if ((v6 & 2048) == 0 != v7 % 2 != 0) {
            // 0x40a4cf
            return 0;
        }
    } else {
        if ((v6 & 2048) != 0) {
            // 0x40a4a7
            if (v7 % 2 != 0) {
                // 0x40a4cf
                return 0;
            }
        }
    }
    int64_t result = 0; // 0x40a4b2
    if ((v6 & 0x2000) != 0 != ((v7 & 2) == 0)) {
        // 0x40a4bb
        result = (char)(v5 / 256) <= -1 ? v7 / 8 % 2 : 1;
    }
    // 0x40a4cf
    return result;
}
// Address range: 0x40a550 - 0x40a618
int64_t function_40a550(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = (int64_t)a1;
    uint64_t v2 = function_40a330(v1, a4, *(int32_t *)(v1 + 160)); // 0x40a566
    if (a2 < 1) {
        // 0x40a5ec
        return 0;
    }
    int64_t v3 = *(int64_t *)(v1 + 152); // 0x40a574
    int64_t v4 = 0; // 0x40a596
    int64_t result; // 0x40a550
    uint32_t v5; // 0x40a5ae
    uint32_t v6; // 0x40a5b1
    int64_t v7; // 0x40a5a0
    while (true) {
      lab_0x40a5a0:
        // 0x40a5a0
        v7 = *(int64_t *)(8 * v4 + v3);
        int64_t v8 = *(int64_t *)v3 + 8 + 16 * v7; // 0x40a5ae
        if (*(char *)v8 != 2) {
            goto lab_0x40a608;
        } else {
            // 0x40a5c1
            v5 = *(int32_t *)v8;
            result = v7;
            if ((v5 & 0x3ff00) == 0) {
                // break -> 0x40a5ec
                break;
            }
            // 0x40a5c6
            v6 = v5 / 256;
            int64_t v9 = v6; // 0x40a5b1
            if ((v9 & 4) == 0) {
                if (v2 % 2 == 0 || (v9 & 8) == 0) {
                    goto lab_0x40a5d5;
                } else {
                    goto lab_0x40a608;
                }
            } else {
                if (v2 % 2 == 0) {
                    goto lab_0x40a608;
                } else {
                    if ((v9 & 8) != 0) {
                        goto lab_0x40a608;
                    } else {
                        goto lab_0x40a5d5;
                    }
                }
            }
        }
    }
  lab_0x40a5ec_2:
    // 0x40a5ec
    return result;
  lab_0x40a608:
    // 0x40a608
    v4++;
    result = 0;
    if (v4 == a2) {
        return result;
    }
    goto lab_0x40a5a0;
  lab_0x40a5d5:
    if ((v2 & 2) == 0 != (v5 & 0x2000) != 0) {
        // 0x40a5e0
        result = v7;
        if ((v2 & 8) == 0 != (char)v6 < 0) {
            // break -> 0x40a5ec
            goto lab_0x40a5ec_2;
        }
    }
    goto lab_0x40a608;
}
// Address range: 0x40a620 - 0x40ae07
int64_t function_40a620(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(v1 + 40); // 0x40a63a
    int64_t v3 = *v2; // 0x40a63a
    int64_t v4 = a2 - v3; // 0x40a644
    int64_t * v5; // 0x40a620
    char * v6; // 0x40a620
    int64_t * v7; // 0x40a620
    int32_t * v8; // 0x40a620
    int64_t * v9; // 0x40a620
    int64_t * v10; // 0x40a620
    int64_t v11; // 0x40a620
    if (v3 > a2) {
        int32_t * v12 = (int32_t *)(v1 + 144);
        if (*v12 >= 2) {
            // 0x40a64f
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
            // 0x40a770
            *(int64_t *)(v1 + 8) = v1;
            v7 = v13;
            v6 = v17;
            v5 = v15;
            v11 = a2;
            v10 = v16;
            v9 = v14;
            v8 = v12;
            if (a2 != 0) {
                goto lab_0x40a6b3;
            } else {
                goto lab_0x40a780;
            }
        } else {
            goto lab_0x40a6aa;
        }
    } else {
        goto lab_0x40a6aa;
    }
  lab_0x40aca8:
    // 0x40aca8
    *v7 = 0;
    int64_t v18; // 0x40aaa7
    int64_t v19 = v18; // 0x40acb2
    int64_t v20; // 0x40aaaa
    int64_t v21 = v20; // 0x40acb2
    int64_t v22 = 0; // 0x40acb2
    int64_t v23 = v1; // 0x40acb2
    goto lab_0x40ab4f;
  lab_0x40a8a1:;
    // 0x40a8a1
    int64_t v41; // 0x40a620
    int64_t v38; // 0x40a620
    int64_t v42 = v41 + v38; // 0x40a8a1
    int64_t v43; // 0x40a620
    int64_t v44; // 0x40a620
    int64_t v39; // 0x40a620
    int64_t v45; // 0x40a620
    int64_t v46; // 0x40a620
    int32_t v47; // bp-64, 0x40a620
    if (v42 < a2) {
        int64_t * v48 = (int64_t *)(v1 + 32); // 0x40a8d4
        int64_t v49 = &v47;
        int64_t v50 = *(int64_t *)(v1 + 80) - v42; // 0x40a8dd
        int64_t v51 = function_4069d0(&v47, v42 + v39, v50); // 0x40a8f0
        int64_t v52 = v51; // 0x40a906
        int64_t v53 = v47; // 0x40a906
        int64_t v54; // 0x40a620
        if (v51 >= 0xfffffffffffffffe) {
            // 0x40ad35
            v54 = 0;
            if (v50 != 0 && v51 != 0) {
                // 0x40ad3f
                v54 = (int64_t)*(char *)(v42 + v49);
            }
            // 0x40ad47
            v52 = 1;
            v53 = v54;
        }
        int64_t v55 = v52 + v42; // 0x40a90c
        int64_t v56 = v49; // 0x40a912
        while (v55 < a2) {
            int64_t v57 = v55;
            v50 = *(int64_t *)(v1 + 80) - v57;
            v51 = function_4069d0(&v47, v57 + v56, v50);
            v52 = v51;
            v53 = v47;
            if (v51 >= 0xfffffffffffffffe) {
                // 0x40ad35
                v54 = 0;
                if (v50 != 0 && v51 != 0) {
                    // 0x40ad3f
                    v54 = (int64_t)*(char *)(v57 + v49);
                }
                // 0x40ad47
                v52 = 1;
                v53 = v54;
            }
            // 0x40a90c
            v55 = v52 + v57;
            v56 = v49;
        }
        int64_t v58 = v55 - a2; // 0x40a914
        *v7 = v58;
        v46 = v53;
        v45 = v49;
        v43 = v58;
        v44 = v58;
        if ((int32_t)v53 == -1) {
            goto lab_0x40acc1;
        } else {
            goto lab_0x40a927;
        }
    } else {
        int64_t v59 = v42 - a2; // 0x40acb7
        *v7 = v59;
        v44 = v59;
        goto lab_0x40acc1;
    }
  lab_0x40a6aa:
    // 0x40a6aa
    if (v4 == 0) {
        // 0x40a6aa
        v10 = (int64_t *)(v1 + 104);
        v9 = (int64_t *)(v1 + 88);
        v8 = (int32_t *)(v1 + 144);
        goto lab_0x40a780;
    } else {
        // 0x40a6aa
        v7 = (int64_t *)(v1 + 48);
        v6 = (char *)(v1 + 140);
        v5 = (int64_t *)(v1 + 56);
        v11 = v4;
        goto lab_0x40a6b3;
    }
  lab_0x40a6b3:;
    int64_t v60 = v11;
    int64_t * v24 = v5;
    int64_t v61 = *v24; // 0x40a6b3
    char v62 = *v6; // 0x40a6b7
    int64_t v63 = *v7; // 0x40a6be
    char * v64; // 0x40a620
    int64_t v30; // 0x40a620
    int64_t v65; // 0x40a620
    int64_t v31; // 0x40a620
    int64_t v66; // 0x40a620
    int64_t v33; // 0x40a620
    int64_t v67; // 0x40a620
    char v68; // 0x40a620
    int32_t v32; // 0x40a620
    int64_t v40; // 0x40abc9
    int64_t * v69; // 0x40a968
    int64_t v70; // 0x40a968
    int64_t v71; // 0x40a995
    uint64_t v72; // 0x40a998
    if (v61 > v60) {
        if (v62 != 0) {
            // 0x40a968
            v69 = (int64_t *)(v1 + 24);
            v70 = *v69;
            int64_t v73 = 0; // 0x40a971
            uint64_t v74 = v73 + v63; // 0x40a987
            v71 = (v74 / 0x8000000000000000 + v74) / 2;
            v72 = *(int64_t *)(8 * v71 + v70);
            int64_t v75 = v71; // 0x40a9a3
            int64_t v76 = v73; // 0x40a9a3
            if (v72 <= v60) {
                if (v72 >= v60) {
                    // 0x40ac90
                    goto lab_0x40a9e5;
                }
                // 0x40a97e
                v75 = v63;
                v76 = v71 + 1;
            }
            // 0x40a982
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
                        // 0x40ac90
                        goto lab_0x40a9e5;
                    }
                    // 0x40a97e
                    v75 = v78;
                    v76 = v71 + 1;
                }
                // 0x40a982
                v73 = v76;
                v77 = v75;
            }
            // 0x40a9d8
            goto lab_0x40a9e5;
        } else {
            // 0x40a6d3
            *(int32_t *)(v1 + 112) = (int32_t)function_40a330(v1, v60 - 1, a3);
            if (*(int32_t *)(v1 + 144) > 1) {
                int64_t v79 = *(int64_t *)(v1 + 16); // 0x40a790
                int64_t v80; // 0x40a6dd
                memmove((int64_t *)v79, (int64_t *)(v79 + 4 * v60), 4 * (int32_t)v80);
            }
            int64_t v81 = v63 - v60;
            char * v82 = (char *)(v1 + 139); // 0x40a6f5
            char v83 = *v82; // 0x40a6f5
            char v84 = v83; // 0x40a6fe
            int64_t v85 = v1; // 0x40a6fe
            int64_t v86 = v81; // 0x40a6fe
            if (v83 != 0) {
                // 0x40a9b0
                v85 = *(int64_t *)(v1 + 8);
                memmove((int64_t *)v85, (int64_t *)(v85 + v60), (int32_t)v81);
                v84 = *v82;
                v86 = *v7 - v60;
            }
            // 0x40a704
            *v24 = *v24 - v60;
            *v7 = v86;
            v68 = v84;
            v66 = v85;
            goto lab_0x40a70c;
        }
    } else {
        if (v62 != 0) {
            // 0x40ad0d
            *v6 = 0;
            int64_t v87 = v60 - a2;
            *(int64_t *)(v1 + 88) = *(int64_t *)(v1 + 80) + v87;
            *(int64_t *)(v1 + 104) = *(int64_t *)(v1 + 96) + v87;
        }
        int32_t v88 = *(int32_t *)(v1 + 144); // 0x40a878
        int64_t v89 = *v2; // 0x40a87f
        *v7 = 0;
        if (v88 < 2) {
            int64_t v90 = (int64_t)*(char *)(v60 - 1 + v1 + v89); // 0x40a7ce
            int64_t v91 = *(int64_t *)(v1 + 120); // 0x40a7d4
            *v24 = 0;
            int64_t v92 = v90; // 0x40a7e3
            if (v91 != 0) {
                // 0x40a7e5
                v92 = (int64_t)*(char *)(v91 + v90);
            }
            int64_t v93 = *(int64_t *)((v92 / 8 & 24) + *(int64_t *)(v1 + 128)); // 0x40a7f7
            int32_t v94 = 1; // 0x40a805
            if ((v93 & 1 << v92 % 64) == 0) {
                // 0x40a807
                v94 = 0;
                if (v92 == 10) {
                    // 0x40a80e
                    v94 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
                }
            }
            int64_t * v95 = (int64_t *)(v1 + 88); // 0x40a820
            int64_t * v96 = (int64_t *)(v1 + 104); // 0x40a824
            *(int32_t *)(v1 + 112) = v94;
            int64_t v97 = *v95 - v60; // 0x40a82b
            int64_t v98 = *v96 - v60; // 0x40a82e
            char * v99 = (char *)(v1 + 139);
            v30 = v97;
            v31 = v98;
            v32 = v88;
            v33 = v1;
            if (*v99 == 0) {
                goto lab_0x40a724;
            } else {
                // 0x40a83e
                *v2 = a2;
                *v95 = v97;
                *v96 = v98;
                v64 = v99;
                v65 = v97;
                v67 = v1;
                goto lab_0x40a850;
            }
        } else {
            // 0x40a894
            v38 = v61;
            v39 = v1;
            v41 = v89;
            if (*(char *)(v1 + 137) != 0) {
                int64_t v100 = v89 + v1; // 0x40ab71
                uint64_t v101 = v60 - (int64_t)v88 + v100; // 0x40ab75
                int64_t v102 = v60 - 1 + v100; // 0x40ab78
                uint64_t v103 = v101 > v1 ? v101 : v1; // 0x40ab80
                v38 = v61;
                v39 = v1;
                v41 = v89;
                if (v103 > v102) {
                    goto lab_0x40a8a1;
                } else {
                    int64_t v104 = v102;
                    while ((*(char *)v104 & -64) == -128) {
                        int64_t v105 = v104 - 1; // 0x40ab90
                        v38 = v61;
                        v39 = v1;
                        v41 = v89;
                        if (v103 > v105) {
                            goto lab_0x40a8a1;
                        }
                        v104 = v105;
                    }
                    int64_t v106 = *(int64_t *)(v1 + 120); // 0x40abae
                    int64_t v107 = *(int64_t *)(v1 + 88) + v100 - v104; // 0x40abb8
                    int64_t v108 = v104; // 0x40abbe
                    if (v106 != 0) {
                        int64_t v109 = v107 - 6; // 0x40add2
                        int32_t v110 = v109 == 0 | v109 < 0 != (5 - v107 & v107) < 0 ? (int32_t)v107 - 1 : 5; // 0x40addf
                        if (v110 >= 0) {
                            int64_t v111 = v110; // 0x40adf5
                            char v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104)); // 0x40adec
                            int64_t v113; // bp-120, 0x40a620
                            *(char *)((int64_t)&v113 + 50 + v111) = v112;
                            v111--;
                            while ((int32_t)v111 >= 0) {
                                // 0x40ade7
                                v112 = *(char *)(v106 + (int64_t)*(char *)(v111 + v104));
                                *(char *)((int64_t)&v113 + 50 + v111) = v112;
                                v111--;
                            }
                        }
                        // 0x40adfd
                        int64_t v114; // bp-70, 0x40a620
                        v108 = &v114;
                    }
                    // 0x40abc4
                    int32_t v115; // bp-76, 0x40a620
                    v40 = &v115;
                    v47 = 0;
                    uint64_t v116 = function_4069d0(&v115, v108, v107); // 0x40abdf
                    uint64_t v117 = v100 + v60 - v104; // 0x40abee
                    if (v116 >= v117 == v116 < 0xfffffffffffffffe) {
                        int64_t v118 = v116 - v117; // 0x40acd8
                        *(int64_t *)(v1 + 32) = 0;
                        *v7 = v118;
                        v46 = v115;
                        v45 = v40;
                        v43 = v118;
                        if (v115 != -1) {
                            goto lab_0x40a927;
                        } else {
                            goto lab_0x40ac00;
                        }
                    } else {
                        goto lab_0x40ac00;
                    }
                }
            } else {
                goto lab_0x40a8a1;
            }
        }
    }
  lab_0x40a780:;
    int64_t v34 = *v9; // 0x40a78e
    int64_t v35 = *v10; // 0x40a78e
    int32_t v36 = *v8; // 0x40a78e
    int64_t v37 = v1; // 0x40a78e
    goto lab_0x40a728;
  lab_0x40a728:
    // 0x40a728
    *v2 = a2;
    *(int64_t *)(v1 + 88) = v34;
    *(int64_t *)(v1 + 104) = v35;
    if (v36 >= 2) {
        // 0x40a73d
        if (*(char *)(v1 + 136) != 0) {
            int64_t result = function_407480(v1); // 0x40a7b8
            if ((int32_t)result != 0) {
                // 0x40a758
                return result;
            }
        } else {
            // 0x40a749
            function_4072d0(v1);
        }
        // 0x40a74e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a758
        return 0;
    }
    // 0x40a728
    v64 = (char *)(v1 + 139);
    v65 = v34;
    v67 = v37;
    goto lab_0x40a850;
  lab_0x40a850:;
    int64_t v119 = v65;
    if (*v64 == 0) {
        // 0x40a85d
        *(int64_t *)(v1 + 48) = v119;
        // 0x40a74e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a758
        return 0;
    }
    // 0x40ac20
    if (*(char *)(v1 + 136) != 0) {
        // 0x40ad00
        function_407250(v1);
        // 0x40a74e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a758
        return 0;
    }
    int64_t * v120 = (int64_t *)(v1 + 120); // 0x40ac2d
    int64_t v121 = *v120; // 0x40ac2d
    if (v121 == 0) {
        // 0x40a74e
        *(int64_t *)(v1 + 72) = 0;
        // 0x40a758
        return 0;
    }
    int64_t v122 = *(int64_t *)(v1 + 64); // 0x40ac3a
    int64_t v123 = v122 - v119; // 0x40ac3a
    int64_t * v124 = (int64_t *)(v1 + 48); // 0x40ac3e
    int64_t v125 = *v124; // 0x40ac3e
    int64_t v126 = v123 == 0 | v123 < 0 != ((v123 ^ v122) & (v122 ^ v119)) < 0 ? v122 : v119; // 0x40ac42
    int64_t v127 = v125; // 0x40ac4a
    if (v126 > v125) {
        unsigned char v128 = *(char *)(v67 + a2 + v125); // 0x40ac66
        int64_t * v129 = (int64_t *)(v1 + 8); // 0x40ac6f
        *(char *)(*v129 + v125) = *(char *)(v121 + (int64_t)v128);
        int64_t v130 = v125 + 1; // 0x40ac77
        v127 = v126;
        if (v126 != v130) {
            unsigned char v131 = *(char *)(v130 + v67 + *v2); // 0x40ac66
            *(char *)(*v129 + v130) = *(char *)(*v120 + (int64_t)v131);
            int64_t v132 = v130 + 1; // 0x40ac77
            int64_t v133 = v132; // 0x40ac7e
            v127 = v126;
            while (v126 != v132) {
                // 0x40ac58
                v131 = *(char *)(v133 + v67 + *v2);
                *(char *)(*v129 + v133) = *(char *)(*v120 + (int64_t)v131);
                v132 = v133 + 1;
                v133 = v132;
                v127 = v126;
            }
        }
    }
    // 0x40ac80
    *v124 = v127;
    *(int64_t *)(v1 + 56) = v127;
    // 0x40a74e
    *(int64_t *)(v1 + 72) = 0;
    // 0x40a758
    return 0;
  lab_0x40a9e5:;
    int64_t v134 = v71 + (int64_t)(v72 < v60);
    int64_t v135 = v71 + (int64_t)(v72 >= v60);
    *(int32_t *)(v1 + 112) = (int32_t)function_40a330(v1, v135, a3);
    int64_t v25; // 0x40a620
    int64_t v26; // 0x40a620
    int64_t v28; // 0x40a620
    char v27; // 0x40a620
    if (v63 > v60 == v60 == v134) {
        int64_t v136 = 8 * v60;
        if (*(int64_t *)(v70 + v136) != v60) {
            goto lab_0x40aa98;
        } else {
            int64_t v137 = *(int64_t *)(v1 + 16); // 0x40aa10
            memmove((int64_t *)v137, (int64_t *)(v137 + 4 * v60), 4 * (int32_t)(v63 - v60));
            int64_t v138 = *(int64_t *)(v1 + 8); // 0x40aa2b
            int64_t v139 = *v7; // 0x40aa2f
            memmove((int64_t *)v138, (int64_t *)(v138 + v60), (int32_t)(v139 - v60));
            *v24 = *v24 - v60;
            uint64_t v140 = *v7 - v60; // 0x40aa47
            *v7 = v140;
            if (v140 >= 1) {
                for (int64_t i = 0; i < *v7; i++) {
                    int64_t v141 = 8 * i + *v69;
                    *(int64_t *)v141 = *(int64_t *)(v141 + v136) - v60;
                }
            }
            // 0x40aa75
            v25 = *(int64_t *)(v1 + 88) - v60;
            v26 = *(int64_t *)(v1 + 104) - v60;
            v27 = *(char *)(v1 + 139);
            v28 = v138;
            goto lab_0x40a720;
        }
    } else {
        goto lab_0x40aa98;
    }
  lab_0x40a70c:
    // 0x40a70c
    v25 = *(int64_t *)(v1 + 88) - v60;
    v26 = *(int64_t *)(v1 + 104) - v60;
    v27 = v68;
    v28 = v66;
    goto lab_0x40a720;
  lab_0x40a724:;
    int64_t * v142 = (int64_t *)(v1 + 8); // 0x40a724
    *v142 = *v142 + v60;
    v34 = v30;
    v35 = v31;
    v36 = v32;
    v37 = v33;
    goto lab_0x40a728;
  lab_0x40aa98:
    // 0x40aa98
    *v6 = 0;
    v18 = *(int64_t *)(v1 + 80) - a2;
    v20 = *(int64_t *)(v1 + 96) - a2;
    int64_t * v143 = (int64_t *)(v1 + 88); // 0x40aab1
    *v143 = v18 + v60;
    int64_t * v144 = (int64_t *)(v1 + 104); // 0x40aab9
    *v144 = v20 + v60;
    int64_t v145 = v134; // 0x40aac0
    if (v134 >= 0 == (v134 != 0)) {
        int64_t v146 = v134; // 0x40aac8
        v145 = v146;
        while (*(int64_t *)(v70 - 8 + 8 * v146) == v60) {
            // 0x40aac8
            v146--;
            if (v146 == 0) {
                // break -> 0x40aad5
                break;
            }
            v145 = v146;
        }
    }
    // 0x40aad5
    int64_t v147; // 0x40a620
    if (v145 < v63) {
        int64_t v148 = v145; // 0x40aae2
        v147 = v148;
        while (*(int32_t *)(4 * v148 + *(int64_t *)(v1 + 16)) == -1) {
            // 0x40aae8
            v148++;
            if (v148 == v63) {
                goto lab_0x40aca8;
            }
            v147 = v148;
        }
        goto lab_0x40aafc;
    } else {
        // 0x40ac9c
        v147 = v145;
        if (v145 != v63) {
            goto lab_0x40aafc;
        } else {
            goto lab_0x40aca8;
        }
    }
  lab_0x40a720:;
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
        goto lab_0x40a728;
    } else {
        goto lab_0x40a724;
    }
  lab_0x40ac00:
    // 0x40ac00
    v38 = *v24;
    v39 = v40;
    v41 = *v2;
    goto lab_0x40a8a1;
  lab_0x40acc1:
    // 0x40acc1
    *(int32_t *)(v1 + 112) = (int32_t)function_40a330(v1, v63 - 1, a3);
    int64_t v149 = v1; // 0x40acd3
    int64_t v150 = v44; // 0x40acd3
    goto lab_0x40a94c;
  lab_0x40a927:;
    int64_t v164 = v46; // 0x40a92e
    int64_t v163 = v45; // 0x40a92e
    int32_t v161; // 0x40a620
    int64_t v162; // 0x40a620
    if (*(char *)(v1 + 142) != 0) {
        int64_t v165 = v46 & 0xffffffff; // 0x40ada4
        int32_t wc = v46; // 0x40ada6
        v164 = v165;
        v163 = v165;
        v161 = 1;
        v162 = v165;
        if (wc != 95 == iswalnum(wc) == 0) {
            goto lab_0x40a934;
        } else {
            goto lab_0x40a949;
        }
    } else {
        goto lab_0x40a934;
    }
  lab_0x40aafc:;
    uint64_t v166 = *(int64_t *)(8 * v147 + v70) - v60; // 0x40ab01
    *v7 = v166;
    v19 = v18;
    v21 = v20;
    v22 = 0;
    v23 = v1;
    if (v166 != 0) {
        if (v166 >= 1) {
            int64_t v167 = *(int64_t *)(v1 + 16); // 0x40ab0f
            int64_t v168 = v167; // 0x40ab17
            *(int32_t *)v168 = -1;
            v168 += 4;
            while (v167 + 4 * v166 != v168) {
                // 0x40ab20
                *(int32_t *)v168 = -1;
                v168 += 4;
            }
        }
        int64_t v169 = *(int64_t *)(v1 + 8); // 0x40ab2f
        memset((int64_t *)v169, 255, (int32_t)v166);
        v19 = *v143 - v60;
        v21 = *v144 - v60;
        v22 = *v7;
        v23 = v169;
    }
    goto lab_0x40ab4f;
  lab_0x40a94c:;
    // 0x40a94c
    char * v151; // 0x40a620
    int64_t v152; // 0x40a620
    int64_t v153; // 0x40a620
    int64_t v154; // 0x40a620
    int64_t v155; // 0x40a620
    char v156; // 0x40a620
    if (v150 != 0) {
        if (v150 >= 1) {
            int64_t v157 = *(int64_t *)(v1 + 16); // 0x40ad5c
            int64_t v158 = v157; // 0x40ad64
            *(int32_t *)v158 = -1;
            v158 += 4;
            while (v157 + 4 * v150 != v158) {
                // 0x40ad68
                *(int32_t *)v158 = -1;
                v158 += 4;
            }
        }
        char * v159 = (char *)(v1 + 139);
        v156 = 0;
        v155 = v149;
        v153 = v150;
        if (*v159 == 0) {
            goto lab_0x40a95c;
        } else {
            int64_t v160 = *(int64_t *)(v1 + 8); // 0x40ad86
            memset((int64_t *)v160, 255, (int32_t)v150);
            v151 = v159;
            v154 = v160;
            v152 = *v7;
            goto lab_0x40a955;
        }
    } else {
        // 0x40a94c
        v151 = (char *)(v1 + 139);
        v154 = v149;
        v152 = v150;
        goto lab_0x40a955;
    }
  lab_0x40a934:
    // 0x40a934
    v161 = 0;
    v162 = v163;
    if ((int32_t)v164 == 10) {
        // 0x40a93b
        v161 = 2 * (int32_t)(*(char *)(v1 + 141) != 0);
        v162 = v163;
    }
    goto lab_0x40a949;
  lab_0x40ab4f:
    // 0x40ab4f
    *v24 = v22;
    v25 = v19;
    v26 = v21;
    v27 = *(char *)(v1 + 139);
    v28 = v23;
    goto lab_0x40a720;
  lab_0x40a949:
    // 0x40a949
    *(int32_t *)(v1 + 112) = v161;
    v149 = v162;
    v150 = v43;
    goto lab_0x40a94c;
  lab_0x40a95c:
    // 0x40a95c
    *v24 = v153;
    v68 = v156;
    v66 = v155;
    goto lab_0x40a70c;
  lab_0x40a955:
    // 0x40a955
    v156 = *v151;
    v155 = v154;
    v153 = v152;
    goto lab_0x40a95c;
}
// Address range: 0x40ae10 - 0x40b035
int64_t function_40ae10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40ae10
    int128_t v1; // 0x40ae10
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x40ae12
    int64_t * v4 = (int64_t *)(a1 + 56); // 0x40ae29
    int128_t v5 = __asm_movaps(v3); // bp-88, 0x40ae2d
    int64_t v6 = *v4 + 24 * a2; // 0x40ae32
    int64_t v7 = 0; // bp-72, 0x40ae3b
    int64_t * v8 = (int64_t *)(v6 + 8); // 0x40ae44
    int64_t v9 = *v8; // 0x40ae44
    if (v9 < 1) {
        // 0x40aff1
        free(NULL);
        return (int32_t)&g88 ^ (int32_t)&g88;
    }
    int64_t v10 = v6 + 16; // 0x40aeb5
    int64_t * v11 = (int64_t *)v10;
    int64_t v12 = a3 + 8;
    int64_t * v13 = (int64_t *)v12;
    int64_t v14 = a3 + 16;
    int64_t v15 = 0; // 0x40aea8
    int64_t v16 = a1; // 0x40ae10
    int64_t v17 = v9;
    int64_t v18; // 0x40ae10
    int64_t v19; // 0x40ae10
    int64_t v20; // 0x40ae10
    int64_t v21; // 0x40aee3
    int64_t v22; // 0x40aeed
    while (true) {
      lab_0x40aeb5:
        // 0x40aeb5
        v19 = v17;
        int64_t v23 = v16;
        int64_t v24 = *(int64_t *)(*v11 + 8 * v15); // 0x40aeb9
        v16 = v23;
        v18 = v19;
        if (v24 == a2) {
            goto lab_0x40aea8;
        } else {
            // 0x40aec2
            v16 = v23;
            v18 = v19;
            if ((*(char *)(v23 + 8 + 16 * v24) & 8) == 0) {
                goto lab_0x40aea8;
            } else {
                // 0x40aed3
                v21 = 24 * v24;
                int64_t v25 = *(int64_t *)(a1 + 40) + v21; // 0x40aeea
                v22 = *(int64_t *)(v25 + 16);
                int64_t v26 = *(int64_t *)v22; // 0x40aef6
                int64_t v27 = function_408600(v19, v10, v26); // 0x40af01
                if (*(int64_t *)(v25 + 8) > 1) {
                    // 0x40ae60
                    v20 = v19;
                    if (v27 != 0) {
                        goto lab_0x40af40;
                    } else {
                        int64_t v28 = *v13; // 0x40ae69
                        int64_t v29 = function_408600(v28, v14, v26); // 0x40ae74
                        v20 = v28;
                        if (v29 == 0) {
                            goto lab_0x40af40;
                        } else {
                            goto lab_0x40ae82;
                        }
                    }
                } else {
                    // 0x40af1b
                    v16 = v19;
                    v18 = v19;
                    if (v27 != 0) {
                        goto lab_0x40aea8;
                    } else {
                        int64_t v30 = *v13; // 0x40af20
                        int64_t v31 = function_408600(v30, v14, v26); // 0x40af2b
                        v16 = v30;
                        v18 = v19;
                        if (v31 != 0) {
                            goto lab_0x40ae82;
                        } else {
                            goto lab_0x40aea8;
                        }
                    }
                }
            }
        }
    }
  lab_0x40af80:
    if (v17 < 1) {
        // 0x40aff1
        free((int64_t *)v7);
        return (int32_t)&g88 ^ (int32_t)&g88;
    }
    int64_t v32 = 0; // 0x40ae10
    int64_t v33 = *(int64_t *)(*v11 + 8 * v32); // 0x40af9c
    int64_t v34; // 0x40ae10
    int64_t v35; // 0x40afad
    int64_t v36; // 0x40afc0
    if (function_408600(v34, (int64_t)&v7, v33) == 0) {
        // 0x40afad
        v35 = *v13;
        v36 = function_408600(v35, v14, v33) - 1;
        if (v36 > -1 == v36 < v35) {
            // 0x40afce
            *v13 = v35 - 1;
            function_408770(v12, v14, v36);
        }
    }
    int64_t v37 = v32 + 1; // 0x40afe2
    v32 = v37;
    while (*v8 > v37) {
        // 0x40af90
        v33 = *(int64_t *)(*v11 + 8 * v32);
        if (function_408600(v34, (int64_t)&v7, v33) == 0) {
            // 0x40afad
            v35 = *v13;
            v36 = function_408600(v35, v14, v33) - 1;
            if (v36 > -1 == v36 < v35) {
                // 0x40afce
                *v13 = v35 - 1;
                function_408770(v12, v14, v36);
            }
        }
        // 0x40afe2
        v37 = v32 + 1;
        v32 = v37;
    }
    // 0x40aff1
    free((int64_t *)v7);
    return (int32_t)&g88 ^ (int32_t)&g88;
  lab_0x40aea8:
    // 0x40aea8
    v17 = v18;
    v15++;
    if (v17 <= v15) {
        // break -> 0x40af80
        goto lab_0x40af80;
    }
    goto lab_0x40aeb5;
  lab_0x40af40:;
    int64_t v38 = *(int64_t *)(v22 + 8); // 0x40af40
    v16 = v20;
    v18 = v19;
    if (v38 < 1) {
        goto lab_0x40aea8;
    } else {
        int64_t v39 = function_408600(v19, v10, v38); // 0x40af56
        v16 = v19;
        v18 = v19;
        if (v39 != 0) {
            goto lab_0x40aea8;
        } else {
            int64_t v40 = *v13; // 0x40af64
            int64_t v41 = function_408600(v40, v14, v38); // 0x40af6c
            v16 = v40;
            v18 = v19;
            if (v41 == 0) {
                goto lab_0x40aea8;
            } else {
                goto lab_0x40ae82;
            }
        }
    }
  lab_0x40ae82:;
    int64_t v42 = function_4090b0(&v5, a4, *v4 + v21); // 0x40ae94
    if ((int32_t)v42 != 0) {
        // 0x40b010
        free((int64_t *)v7);
        return v42 & 0xffffffff;
    }
    // 0x40aea1
    v16 = &v5;
    v18 = *v8;
    goto lab_0x40aea8;
}
// Address range: 0x40b040 - 0x40bb4d
int64_t function_40b040(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40b040
    int128_t v1; // 0x40b040
    int128_t v2 = v1;
    int64_t * mem = malloc(0x3800); // 0x40b05e
    if (mem == NULL) {
        // 0x40b402
        return 0;
    }
    int128_t v3 = __asm_pxor(v2, v2); // 0x40b07b
    int128_t v4 = __asm_movaps(v3); // bp-152, 0x40b07f
    int64_t v5 = __asm_movaps(v3); // 0x40b08f
    int64_t * v6 = (int64_t *)(a2 + 88); // 0x40b099
    *v6 = 0;
    int64_t * v7 = (int64_t *)(a2 + 96); // 0x40b0a1
    *v7 = 0;
    int64_t v8; // 0x40b040
    int64_t v9; // 0x40b040
    int64_t v10; // 0x40b040
    int64_t v11; // 0x40b040
    int64_t v12; // 0x40b040
    int64_t v13; // 0x40b040
    int64_t v14; // 0x40b040
    int64_t v15; // 0x40b040
    int64_t v16; // 0x40b040
    int64_t v17; // 0x40b040
    int64_t v18; // 0x40b040
    int64_t v19; // 0x40b040
    int64_t v20; // 0x40b040
    int64_t v21; // 0x40b040
    int64_t v22; // 0x40b040
    int128_t v23; // 0x40b040
    int128_t v24; // 0x40b040
    int128_t v25; // 0x40b040
    int128_t v26; // 0x40b040
    int64_t v27; // 0x40b040
    int64_t v28; // 0x40b040
    int128_t v29; // bp-88, 0x40b040
    int64_t v30; // 0x40b05e
    int64_t v31; // 0x40b084
    int64_t v32; // 0x40b040
    int64_t v33; // 0x40b040
    int64_t v34; // 0x40ba82
    int64_t v35; // 0x40b2e7
    int128_t * v36; // 0x40b040
    int64_t v37; // 0x40b0c2
    int64_t v38; // 0x40b0db
    uint32_t v39; // 0x40b0de
    char v40; // 0x40b0e2
    int64_t * mem2; // 0x40b149
    int32_t size2; // 0x40b188
    int64_t * mem3; // 0x40b18d
    int64_t v41; // 0x40b18d
    int64_t v42; // 0x40b1ba
    int64_t v43; // 0x40b1ca
    int128_t v44; // 0x40b040
    int128_t v45; // 0x40b040
    int128_t v46; // 0x40b040
    int128_t v47; // 0x40b040
    int128_t v48; // 0x40b040
    if (*(int64_t *)(a2 + 16) < 1) {
        // 0x40ba22
        free(mem);
        goto lab_0x40ba2c;
    } else {
        // 0x40b0af
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
          lab_0x40b0bd:
            // 0x40b0bd
            v11 = v10;
            v19 = v18;
            v15 = v14;
            int128_t v49 = v44;
            int128_t v50 = v23;
            v37 = 8 * v28;
            int64_t v51 = *(int64_t *)(*(int64_t *)(v19 + 24) + v37); // 0x40b0d3
            v38 = 16 * v51 + *(int64_t *)v15;
            int64_t v52 = v38 + 8; // 0x40b0de
            v39 = *(int32_t *)v52;
            v40 = *(char *)v52;
            v24 = v50;
            v45 = v49;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            switch (v40) {
                case 1: {
                    unsigned char v53 = *(char *)v38; // 0x40b418
                    unsigned char v54 = v53 % 64;
                    int64_t * v55 = (int64_t *)((int64_t)(v53 / 8 & 24) + v32); // 0x40b433
                    *v55 = (v54 == 0 ? 1 : 1 << (int64_t)v54) | *v55;
                    v25 = v50;
                    v47 = v49;
                    goto lab_0x40b437;
                }
                case 3: {
                    int64_t v56 = 0;
                    int64_t * v57 = (int64_t *)(v56 + v32); // 0x40b8a2
                    *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                    v25 = v50;
                    v47 = v49;
                    int64_t v58 = v56 + 8; // 0x40b8b6
                    while (v56 != 24) {
                        // 0x40b8a2
                        v56 = v58;
                        v57 = (int64_t *)(v56 + v32);
                        *v57 = *(int64_t *)(v56 + *(int64_t *)v38) | *v57;
                        v25 = v50;
                        v47 = v49;
                        v58 = v56 + 8;
                    }
                    goto lab_0x40b437;
                }
                case 5: {
                    // 0x40b750
                    if (*(int32_t *)(v15 + 180) < 2) {
                        int128_t v59 = __asm_pcmpeqd(v49, v49); // 0x40b7e0
                        v4 = __asm_movaps(v59);
                        v26 = __asm_movaps(v59);
                        v48 = v59;
                    } else {
                        int64_t v60 = 0;
                        int64_t * v61 = (int64_t *)(v60 + v32); // 0x40b769
                        *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                        int64_t v62 = v60 + 8; // 0x40b77d
                        v26 = v50;
                        v48 = v49;
                        while (v60 != 24) {
                            // 0x40b769
                            v60 = v62;
                            v61 = (int64_t *)(v60 + v32);
                            *v61 = *(int64_t *)(v60 + *(int64_t *)(v15 + 120)) | *v61;
                            v62 = v60 + 8;
                            v26 = v50;
                            v48 = v49;
                        }
                    }
                    goto lab_0x40b77f;
                }
                case 7: {
                    int128_t v63 = __asm_pcmpeqd(v49, v49); // 0x40b880
                    v4 = __asm_movaps(v63);
                    v26 = v50;
                    v48 = v63;
                    goto lab_0x40b77f;
                }
                default: {
                    goto lab_0x40b112;
                }
            }
        }
      lab_0x40b123:
        if (v13 < 1) {
            // 0x40bb35
            free(mem);
            if (v13 != 0) {
                // 0x40b402
                return 0;
            }
            goto lab_0x40ba2c;
        } else {
            int64_t v64 = v13 + 1; // 0x40b138
            int128_t v65 = v64; // bp-120, 0x40b13d
            int64_t size = 8 * v64; // 0x40b142
            mem2 = malloc((int32_t)size);
            if (mem2 == NULL) {
                goto lab_0x40b8f7;
            } else {
                // 0x40b162
                v4 = 0;
                if (v13 > 0xaaaaaaaaaaaa855) {
                    goto lab_0x40b8f7;
                } else {
                    // 0x40b17d
                    size2 = 24 * (int32_t)v13;
                    mem3 = malloc(size2);
                    if (mem3 == NULL) {
                        goto lab_0x40b8f7;
                    } else {
                        // 0x40b1a0
                        v41 = (int64_t)mem3;
                        int64_t v66 = size - 8; // 0x40b1a5
                        int128_t v67 = __asm_pxor(v46, v46); // 0x40b1a9
                        v42 = v66 + v41;
                        v43 = v42 + v66;
                        v29 = __asm_movaps(v67);
                        __asm_movaps(v67);
                        int64_t * v68 = (int64_t *)(v17 + 48);
                        int64_t v69 = 0; // 0x40b1e6
                        int64_t v70 = v30 + 8; // 0x40b1e6
                        int64_t v71 = v30; // 0x40b1e6
                        int64_t v72 = 0; // 0x40b1e6
                        while (true) {
                            int64_t v73 = v70;
                            int64_t v74 = v69;
                            int64_t * v75 = (int64_t *)v73; // 0x40b1fa
                            uint64_t v76 = *v75; // 0x40b1fa
                            if (v76 >= 1) {
                                int64_t v77 = v76; // 0x40b244
                                for (int64_t i = 0; i < v77; i++) {
                                    int64_t v78 = *(int64_t *)(v73 + 8); // 0x40b208
                                    int64_t v79 = *(int64_t *)(v17 + 24); // 0x40b210
                                    int64_t v80 = *(int64_t *)(v79 + 8 * *(int64_t *)(v78 + 8 * i)); // 0x40b215
                                    int64_t v81 = v77; // 0x40b21d
                                    if (v80 != -1) {
                                        int64_t v82 = function_408b40((int64_t *)&v65, (int128_t *)(*v68 + 24 * v80)); // 0x40b22f
                                        int32_t v83 = v82; // 0x40b234
                                        v4 = v83;
                                        if (v83 != 0) {
                                            // 0x40b8e5
                                            free(mem3);
                                            goto lab_0x40b8f7;
                                        }
                                        // 0x40b21f
                                        v81 = *v75;
                                    }
                                    // 0x40b240
                                    v77 = v81;
                                }
                            }
                            int64_t v84 = function_4098b0(&v4, v17, (int64_t *)&v65, 0); // 0x40b257
                            int64_t v85 = 8 * v72; // 0x40b261
                            int64_t * v86 = (int64_t *)(v85 + v41); // 0x40b261
                            *v86 = v84;
                            if (v84 == 0) {
                                // 0x40b9b8
                                if ((int32_t)v4 != 0) {
                                    // break -> 0x40b8e5
                                    break;
                                }
                            }
                            // 0x40b26e
                            int64_t v87; // 0x40b040
                            if (*(char *)(v84 + 104) < 0) {
                                int64_t v88 = function_4098b0(&v4, v17, (int64_t *)&v65, 1); // 0x40b940
                                *(int64_t *)(v85 + v42) = v88;
                                if (v88 == 0) {
                                    // 0x40b8d0
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40b8e5
                                        break;
                                    }
                                }
                                int64_t v89 = v74; // 0x40b960
                                if (v88 != *v86) {
                                    int32_t v90 = *(int32_t *)(v17 + 180); // 0x40b96c
                                    v89 = v90 < 2 == (1 - v90 & v90) < 0 ? 1 : 0x100000000000000 * v74 >> 56;
                                }
                                int64_t v91 = v89;
                                int64_t v92 = function_4098b0(&v4, v17, (int64_t *)&v65, 2); // 0x40b98d
                                *(int64_t *)(v85 + v43) = v92;
                                v87 = v91;
                                if (v92 == 0) {
                                    // 0x40b9a4
                                    v87 = v91;
                                    if ((int32_t)v4 != 0) {
                                        // break -> 0x40b8e5
                                        break;
                                    }
                                }
                            } else {
                                // 0x40b278
                                *(int64_t *)(v85 + v42) = v84;
                                *(int64_t *)(v85 + v43) = v84;
                                v87 = v74;
                            }
                            // 0x40b28a
                            v27 = v87;
                            int64_t v93 = 0;
                            int64_t * v94 = (int64_t *)(v93 + v33); // 0x40b294
                            *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                            int64_t v95 = v93 + 8; // 0x40b2ac
                            while (v93 != 24) {
                                // 0x40b294
                                v93 = v95;
                                v94 = (int64_t *)(v93 + v33);
                                *v94 = *(int64_t *)(v71 + 0x1800 + v93) | *v94;
                                v95 = v93 + 8;
                            }
                            // 0x40b2ae
                            v72++;
                            v69 = v27;
                            v70 = v73 + 24;
                            v71 += 32;
                            if (v72 == v13) {
                                if ((char)v27 != 0) {
                                    int64_t * mem4 = calloc(8, 512); // 0x40ba82
                                    v34 = (int64_t)mem4;
                                    *v7 = v34;
                                    if (mem4 == NULL) {
                                        // 0x40b8e5
                                        free(mem3);
                                        goto lab_0x40b8f7;
                                    } else {
                                        // 0x40ba9c
                                        v22 = v33;
                                        v21 = v34;
                                        v9 = v30 + 0x1820;
                                        goto lab_0x40bac2;
                                    }
                                } else {
                                    int64_t * mem5 = calloc(8, 256); // 0x40b2e7
                                    v35 = (int64_t)mem5;
                                    *v6 = v35;
                                    if (mem5 == NULL) {
                                        // 0x40b8e5
                                        free(mem3);
                                        goto lab_0x40b8f7;
                                    } else {
                                        // 0x40b301
                                        v8 = 0;
                                        goto lab_0x40b31f;
                                    }
                                }
                            }
                        }
                        // 0x40b8e5
                        free(mem3);
                        goto lab_0x40b8f7;
                    }
                }
            }
        }
    }
  lab_0x40b713:;
    int64_t v96 = v30 + 16; // 0x40b718
    int64_t v97; // 0x40b040
    int64_t v98 = v97 + v96; // 0x40b720
    int64_t v99 = v96; // 0x40b724
    goto lab_0x40b728;
  lab_0x40b55d:;
    // 0x40b55d
    int64_t v145; // 0x40b040
    int64_t v146; // 0x40b576
    while (true) {
        // 0x40b566
        int64_t v147; // 0x40b040
        int64_t v148 = v147;
        int64_t v149; // 0x40b040
        int64_t v150 = v149;
        int64_t v151 = 8 * v150; // 0x40b566
        int64_t v152 = *(int64_t *)(v151 + v32); // 0x40b566
        int64_t v153 = *(int64_t *)(v151 + v145); // 0x40b56a
        int64_t v154 = v153 & v152; // 0x40b56a
        int64_t v155; // 0x40b040
        *(int64_t *)(v151 + v155) = v154;
        int64_t v156 = v150 + 1; // 0x40b572
        v146 = v154 | v148;
        v149 = v156;
        v147 = v146;
        if (v156 == 4) {
            // break -> 0x40b57f
            break;
        }
    }
    int64_t v157 = 0; // 0x40b582
    int64_t v158 = 0; // 0x40b582
    int64_t v159 = 0; // 0x40b582
    int64_t v160; // 0x40b040
    int64_t v161; // 0x40b040
    int64_t v162; // 0x40b040
    if (v146 != 0) {
        int64_t v163 = v159;
        int64_t v164 = v158;
        int64_t v165 = v157;
        int64_t v166 = 8 * v165; // 0x40b592
        int64_t * v167 = (int64_t *)(v166 + v32); // 0x40b592
        int64_t v168 = *v167; // 0x40b592
        int64_t v169 = *(int64_t *)(v166 + v145); // 0x40b596
        int64_t v170 = v169 & -1 - v168; // 0x40b5a0
        int64_t v171 = v168 & -1 - v169; // 0x40b5a6
        *(int64_t *)(v166 + v33) = v170;
        int64_t v172 = v170 | v163; // 0x40b5ad
        *v167 = v171;
        int64_t v173 = v165 + 1; // 0x40b5b4
        int64_t v174 = v171 | v164; // 0x40b5b8
        v157 = v173;
        v158 = v174;
        v159 = v172;
        while (v173 != 4) {
            // 0x40b592
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
        // 0x40b5c1
        int64_t v175; // 0x40b040
        int64_t v176 = 24 * v175 + v30; // 0x40b5cb
        int64_t v177 = v176; // 0x40b5d2
        int64_t v178; // 0x40b040
        int64_t v179 = v178; // 0x40b5d2
        if (v172 != 0) {
            int128_t v180 = v29; // 0x40b5d4
            int128_t v181 = __asm_movdqa(v180); // 0x40b5d4
            int64_t v182 = 32 * v178 + v31; // 0x40b5e9
            int128_t v183 = *(int128_t *)v182; // 0x40b5ee
            __asm_movups(v183, v181);
            int128_t v184; // 0x40b040
            int128_t v185 = __asm_movdqa(v184); // 0x40b5f1
            int128_t v186 = *(int128_t *)(v182 + 16); // 0x40b5fa
            __asm_movups(v186, v185);
            int128_t v187 = __asm_movdqa(0); // 0x40b5fe
            int64_t v188 = 24 * v178;
            int128_t v189 = *(int128_t *)v145; // 0x40b610
            __asm_movups(v189, v187);
            int128_t v190; // 0x40b040
            int128_t v191 = __asm_movdqa(v190); // 0x40b615
            int128_t v192 = *(int128_t *)(v145 + 16); // 0x40b61e
            __asm_movups(v192, v191);
            if ((int32_t)function_4096a0(v188 + v30, v176) != 0) {
                goto lab_0x40b713;
            }
            // 0x40b631
            v177 = 0x100000000 * v176 >> 32;
            v179 = v178 + 1;
        }
        int64_t v193 = v179;
        int64_t v194 = v177;
        int64_t * v195; // 0x40b040
        int64_t v196 = *v195; // 0x40b644
        int64_t v197 = *(int64_t *)(v196 + v37); // 0x40b648
        if ((char)function_406ff0(v194, v197) == 0) {
            // 0x40b63a
            goto lab_0x40b713;
        }
        // 0x40b65c
        int64_t v198; // 0x40b040
        v162 = v198;
        v160 = v193;
        v161 = v175;
        if (v174 == 0) {
            // break -> 0x40b675
            goto lab_0x40b675_2;
        }
    }
    goto lab_0x40b53e;
  lab_0x40b53e:;
    // 0x40b53e
    int64_t v199; // 0x40b040
    int64_t v200 = v199;
    int64_t v201; // 0x40b040
    int64_t v202 = v201 + 1; // 0x40b53e
    v199 = v200;
    int64_t v203; // 0x40b040
    v203 += 32;
    v201 = v202;
    v162 = 0x100000000000000 * v19 >> 56;
    v160 = v200;
    v161 = v202;
    if (v202 >= v200) {
        // break -> 0x40b675
        goto lab_0x40b675_2;
    }
    goto lab_0x40b54f;
  lab_0x40b112:
    // 0x40b112
    v13 = v12;
    v17 = v16;
    v46 = v45;
    int64_t v206 = v28 + 1; // 0x40b112
    v23 = v24;
    v28 = v206;
    v44 = v46;
    v14 = v17;
    v18 = v20;
    v10 = v13;
    if (v206 >= *(int64_t *)(v20 + 16)) {
        // break -> 0x40b123
        goto lab_0x40b123;
    }
    goto lab_0x40b0bd;
  lab_0x40b437:;
    uint32_t v207 = v39 / 256; // 0x40b0e7
    uint32_t v208 = v207 & 0xff03ff;
    int128_t v209 = v47;
    int128_t v210 = v25;
    int128_t v211 = v209; // 0x40b43a
    int64_t v212; // 0x40b0ea
    int128_t v213; // 0x40b040
    if ((int16_t)v208 == 0) {
        goto lab_0x40b4f0;
    } else {
        // 0x40b440
        v212 = v208;
        v213 = v209;
        if ((v212 & 32) != 0) {
            int128_t v214 = v4; // 0x40b7b0
            int128_t v215 = __asm_pxor(v209, v209); // 0x40b7b5
            v4 = __asm_movaps(v215);
            *v36 = (int128_t)__asm_movaps(v215);
            v24 = v210;
            v45 = v215;
            v16 = v15;
            v20 = v19;
            v12 = v11;
            if ((v214 & 1024) == 0) {
                goto lab_0x40b112;
            } else {
                // 0x40b7c9
                v4 = 1024;
                v213 = v215;
                goto lab_0x40b448;
            }
        } else {
            goto lab_0x40b448;
        }
    }
  lab_0x40b77f:;
    int128_t v216 = v48;
    int128_t v217 = v26;
    int64_t v218 = *(int64_t *)(v15 + 216); // 0x40b77f
    if ((v218 & 64) == 0) {
        // 0x40b78b
        v4 = (int64_t)v4 & -1025;
    }
    // 0x40b794
    v25 = v217;
    v47 = v216;
    if ((char)v218 <= 255) {
        // 0x40b7a0
        v4 = (int64_t)v4 & -2;
        v25 = v217;
        v47 = v216;
    }
    goto lab_0x40b437;
  lab_0x40b4f0:;
    int128_t v219 = v211;
    v162 = v19;
    v160 = v11;
    v161 = 0;
    if (v11 >= 1) {
        // 0x40b501
        v199 = v11;
        v203 = v31;
        v201 = 0;
        while (true) {
          lab_0x40b54f:
            // 0x40b54f
            if (v40 == 1) {
                unsigned char v204 = *(char *)v38; // 0x40b520
                int64_t v205 = *(int64_t *)(32 * v201 + v31 + (int64_t)(v204 / 8 & 24)); // 0x40b533
                if ((1 << (int64_t)(v204 % 64) & v205) != 0) {
                    goto lab_0x40b55d;
                } else {
                    goto lab_0x40b53e;
                }
            } else {
                goto lab_0x40b55d;
            }
        }
    }
  lab_0x40b675_2:;
    int64_t v220 = v160;
    int64_t v221 = v162;
    v24 = v210;
    v45 = v219;
    v16 = v15;
    v20 = v221;
    v12 = v220;
    int64_t v222; // 0x40b040
    int64_t v223; // 0x40b040
    int64_t v224; // 0x40b040
    int64_t result; // 0x40b040
    int128_t v225; // 0x40b040
    if (v220 != v161) {
        goto lab_0x40b112;
    } else {
        int128_t v226 = __asm_movdqa(v4); // 0x40b67e
        int64_t v227 = 32 * v220 + v31; // 0x40b695
        __asm_movups(*(int128_t *)v227, v226);
        __asm_movups(*(int128_t *)(v227 + 16), __asm_movdqa(v210));
        v97 = 24 * v220;
        int64_t v228 = v97 + v30; // 0x40b6bd
        int64_t * v229 = (int64_t *)v228;
        *v229 = 1;
        int64_t * v230 = (int64_t *)(v228 + 8);
        *v230 = 1;
        int64_t * mem6 = malloc(8); // 0x40b6d6
        *(int64_t *)(v228 + 16) = (int64_t)mem6;
        if (mem6 == NULL) {
            // 0x40b3db
            *v230 = 0;
            *v229 = 0;
            if (v220 != 0) {
                goto lab_0x40b713;
            } else {
                // 0x40b3f4
                free(mem);
                result = 0;
                goto lab_0x40b402;
            }
        }
        // 0x40b6f2
        *mem6 = *(int64_t *)(*(int64_t *)(v221 + 24) + v37);
        v225 = v219;
        v223 = 0x100000000000000 * v15 >> 56;
        v224 = v221;
        v222 = v220 + 1;
        goto lab_0x40b6f9;
    }
  lab_0x40b448:;
    int128_t v231 = v213;
    v225 = v231;
    v223 = v15;
    v224 = v19;
    v222 = v11;
    if ((char)v207 <= -1) {
        goto lab_0x40b6f9;
    } else {
        if ((v212 & 4) == 0) {
            goto lab_0x40b4a0;
        } else {
            if (v40 == 1) {
                // 0x40b860
                v225 = v231;
                v223 = v15;
                v224 = v19;
                v222 = v11;
                if ((*(char *)(v38 + 10) & 64) == 0) {
                    goto lab_0x40b6f9;
                } else {
                    // 0x40b86b
                    if (*(int32_t *)(v15 + 180) > 1) {
                        goto lab_0x40b46b;
                    } else {
                        goto lab_0x40b830;
                    }
                }
            } else {
                // 0x40b45d
                if (*(int32_t *)(v15 + 180) < 2) {
                    goto lab_0x40b830;
                } else {
                    goto lab_0x40b46b;
                }
            }
        }
    }
  lab_0x40b6f9:;
    int128_t v232 = v225;
    int128_t v233 = __asm_pxor(v232, v232); // 0x40b6f9
    v4 = __asm_movaps(v233);
    *v36 = (int128_t)__asm_movaps(v233);
    v24 = v210;
    v45 = v233;
    v16 = v223;
    v20 = v224;
    v12 = v222;
    goto lab_0x40b112;
  lab_0x40b4a0:
    // 0x40b4a0
    v211 = v231;
    if ((v212 & 8) == 0) {
        goto lab_0x40b4f0;
    } else {
        if (v40 == 1) {
            // 0x40b8c0
            v225 = v231;
            v223 = v15;
            v224 = v19;
            v222 = v11;
            if ((*(char *)(v38 + 10) & 64) == 0) {
                goto lab_0x40b4ad;
            } else {
                goto lab_0x40b6f9;
            }
        } else {
            goto lab_0x40b4ad;
        }
    }
  lab_0x40b4ad:
    // 0x40b4ad
    if (*(int32_t *)(v15 + 180) < 2) {
        int64_t v234 = 0; // 0x40b80f
        int64_t v235 = 8 * v234; // 0x40b7fc
        int64_t * v236 = (int64_t *)(v235 + v32); // 0x40b807
        int64_t v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235); // 0x40b807
        *v236 = v237;
        v234++;
        int64_t v238 = v237; // 0x40b813
        int64_t v239 = v238; // 0x40b81a
        while (v234 != 4) {
            // 0x40b7fc
            v235 = 8 * v234;
            v236 = (int64_t *)(v235 + v32);
            v237 = *v236 & -1 - *(int64_t *)(v15 + 184 + v235);
            *v236 = v237;
            v234++;
            v238 = v237 | v239;
            v239 = v238;
        }
        // 0x40b81c
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v238 == 0) {
            goto lab_0x40b112;
        } else {
            goto lab_0x40b4f0;
        }
    } else {
        int64_t v240 = 0; // 0x40b4c1
        int64_t v241 = 8 * v240; // 0x40b4c3
        int64_t v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120)); // 0x40b4cb
        int64_t * v243 = (int64_t *)(v241 + v32); // 0x40b4d2
        int64_t v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241)); // 0x40b4d2
        *v243 = v244;
        v240++;
        int64_t v245 = v244; // 0x40b4de
        int64_t v246 = v245; // 0x40b4e5
        while (v240 != 4) {
            // 0x40b4c3
            v241 = 8 * v240;
            v242 = *(int64_t *)(v241 + *(int64_t *)(v15 + 120));
            v243 = (int64_t *)(v241 + v32);
            v244 = *v243 & -1 - (v242 & *(int64_t *)(v15 + 184 + v241));
            *v243 = v244;
            v240++;
            v245 = v244 | v246;
            v246 = v245;
        }
        // 0x40b4e7
        v24 = v210;
        v45 = v231;
        v16 = v15;
        v20 = v19;
        v12 = v11;
        v211 = v231;
        if (v245 == 0) {
            goto lab_0x40b112;
        } else {
            goto lab_0x40b4f0;
        }
    }
  lab_0x40b830:;
    int64_t v247 = 0; // 0x40b832
    int64_t v248 = 8 * v247; // 0x40b834
    int64_t * v249 = (int64_t *)(v248 + v32); // 0x40b834
    int64_t v250 = *(int64_t *)(v15 + 184 + v248) & *v249; // 0x40b838
    *v249 = v250;
    int64_t v251 = v247 + 1; // 0x40b844
    int64_t v252 = v250; // 0x40b848
    v247 = v251;
    int64_t v253 = v252; // 0x40b84f
    while (v251 != 4) {
        // 0x40b834
        v248 = 8 * v247;
        v249 = (int64_t *)(v248 + v32);
        v250 = *(int64_t *)(v15 + 184 + v248) & *v249;
        *v249 = v250;
        v251 = v247 + 1;
        v252 = v250 | v253;
        v247 = v251;
        v253 = v252;
    }
    // 0x40b851
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v252 != 0) {
        goto lab_0x40b4a0;
    } else {
        goto lab_0x40b112;
    }
  lab_0x40b46b:;
    int64_t v254 = 0; // 0x40b471
    int64_t v255 = 8 * v254; // 0x40b473
    int64_t v256 = *(int64_t *)(v255 + *(int64_t *)(v15 + 120)); // 0x40b473
    int64_t * v257 = (int64_t *)(v255 + v32); // 0x40b482
    int64_t v258 = (*(int64_t *)(v15 + 184 + v255) | -1 - v256) & *v257; // 0x40b482
    *v257 = v258;
    int64_t v259 = v254 + 1; // 0x40b48a
    int64_t v260 = v258; // 0x40b48e
    v254 = v259;
    int64_t v261 = v260; // 0x40b495
    while (v259 != 4) {
        // 0x40b473
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
    // 0x40b497
    v24 = v210;
    v45 = v231;
    v16 = v15;
    v20 = v19;
    v12 = v11;
    if (v260 == 0) {
        goto lab_0x40b112;
    } else {
        goto lab_0x40b4a0;
    }
  lab_0x40ba2c:;
    int64_t * mem7 = calloc(8, 256); // 0x40ba36
    int64_t v262 = (int64_t)mem7; // 0x40ba36
    *v6 = v262;
    // 0x40b402
    return v262 & -256 | (int64_t)(mem7 != NULL);
  lab_0x40b8f7:
    // 0x40b8f7
    free(mem2);
    int64_t v263 = v30 + 16; // 0x40b904
    int64_t v264 = v263 + 24; // 0x40b913
    free((int64_t *)*(int64_t *)v263);
    int64_t v265 = v264; // 0x40b91f
    while (v264 != 24 * v13 + v263) {
        // 0x40b910
        v264 = v265 + 24;
        free((int64_t *)*(int64_t *)v265);
        v265 = v264;
    }
    // 0x40b921
    free(mem);
    result = 0;
  lab_0x40b402:
    // 0x40b402
    return result;
  lab_0x40b728:;
    int64_t v100 = v99 + 24; // 0x40b72b
    free((int64_t *)*(int64_t *)v99);
    v99 = v100;
    if (v98 != v100) {
        goto lab_0x40b728;
    } else {
        // 0x40b739
        free(mem);
        result = 0;
        goto lab_0x40b402;
    }
  lab_0x40bac2:;
    int64_t v101 = v9;
    int64_t v102 = v21;
    int64_t v103 = *(int64_t *)v22; // 0x40bac2
    int64_t v104; // 0x40b040
    int64_t v105; // 0x40b040
    int64_t v106; // 0x40b040
    int64_t * v107; // 0x40b040
    if (v103 == 0) {
        goto lab_0x40bae2;
    } else {
        // 0x40bad2
        v107 = (int64_t *)(v101 - 32);
        v105 = v103;
        v106 = 1;
        v104 = v102;
        goto lab_0x40bad2_2;
    }
  lab_0x40b31f:;
    int64_t v108 = v8;
    int64_t v109 = *(int64_t *)(v108 + v33); // 0x40b322
    int64_t v110; // 0x40b040
    int64_t v111; // 0x40b040
    int64_t v112; // 0x40b040
    int64_t * v113; // 0x40b040
    int64_t v114; // 0x40b040
    int64_t * v115; // 0x40b040
    if (v109 == 0) {
        goto lab_0x40b354;
    } else {
        // 0x40b340
        v113 = (int64_t *)(v108 + v31);
        v114 = v30 + 0x1820 + v108;
        v115 = (int64_t *)(v17 + 184 + v108);
        v110 = v109;
        v111 = 1;
        v112 = 64 * v108 + v35;
        goto lab_0x40b340_2;
    }
  lab_0x40bae2:;
    int64_t v116 = v22 + 8; // 0x40bae2
    int64_t v117 = v34; // 0x40baf4
    v22 = v116;
    v21 = v102 + 512;
    v9 = v101 + 8;
    int64_t v118; // bp-56, 0x40b040
    if (v116 != (int64_t)&v118) {
        goto lab_0x40bac2;
    } else {
        goto lab_0x40b35e;
    }
  lab_0x40b354:
    // 0x40b354
    v8 = v108 + 8;
    v117 = v35;
    if (v108 != 24) {
        goto lab_0x40b31f;
    } else {
        goto lab_0x40b35e;
    }
  lab_0x40b35e:;
    int64_t v119; // 0x40b040
    char v120; // 0x40b040
    if ((v120 & 4) == 0) {
        goto lab_0x40b38d;
    } else {
        // 0x40b36f
        v119 = 0;
        goto lab_0x40b36f_2;
    }
  lab_0x40bad2_2:;
    int64_t v121 = v104;
    int64_t v122 = v106;
    uint64_t v123 = v105;
    int64_t v124; // 0x40b040
    int64_t v125; // 0x40b040
    int64_t v126; // 0x40b040
    if (v123 % 2 != 0) {
        // 0x40bafb
        v126 = 0;
        v125 = v101;
        v124 = 0;
        if ((*v107 & v122) != 0) {
            goto lab_0x40bb1c;
        } else {
            goto lab_0x40bb06;
        }
    } else {
        goto lab_0x40bad6;
    }
  lab_0x40b340_2:;
    int64_t v127 = v112;
    int64_t v128 = v111;
    uint64_t v129 = v110;
    int64_t v130; // 0x40b040
    int64_t v131; // 0x40b040
    int64_t v132; // 0x40b040
    if (v129 % 2 != 0) {
        // 0x40b9d0
        v131 = v114;
        v130 = 0;
        v132 = 0;
        if ((*v113 & v128) != 0) {
            goto lab_0x40b9ff;
        } else {
            goto lab_0x40b9e8;
        }
    } else {
        goto lab_0x40b348;
    }
  lab_0x40b38d:
    // 0x40b38d
    free(mem3);
    free(mem2);
    int64_t v133 = v30 + 16; // 0x40b3ae
    int64_t v134 = v133; // 0x40b3b5
    goto lab_0x40b3b8;
  lab_0x40bad6:
    // 0x40bad6
    v105 = v123 / 2;
    v106 = 2 * v122;
    v104 = v121 + 8;
    if (v123 >= 2) {
        goto lab_0x40bad2_2;
    } else {
        goto lab_0x40bae2;
    }
  lab_0x40b348:
    // 0x40b348
    v110 = v129 / 2;
    v111 = 2 * v128;
    v112 = v127 + 8;
    if (v129 >= 2) {
        goto lab_0x40b340_2;
    } else {
        goto lab_0x40b354;
    }
  lab_0x40b3b8:;
    int64_t v135 = v134 + 24; // 0x40b3bc
    free((int64_t *)*(int64_t *)v134);
    v134 = v135;
    if (v133 + (int64_t)size2 != v135) {
        goto lab_0x40b3b8;
    } else {
        // 0x40b3ca
        free(mem);
        result = 1;
        goto lab_0x40b402;
    }
  lab_0x40b36f_2:;
    int64_t v136 = v119;
    if ((*(char *)(v30 + 0x1801 + 32 * v136) & 4) != 0) {
        int64_t v137 = *(int64_t *)(8 * v136 + v43); // 0x40ba5e
        *(int64_t *)(v117 + 80) = v137;
        if ((char)v27 == 0) {
            goto lab_0x40b38d;
        } else {
            // 0x40ba6c
            *(int64_t *)(v117 + 2128) = v137;
            goto lab_0x40b38d;
        }
    } else {
        int64_t v138 = v136 + 1; // 0x40b384
        v119 = v138;
        if (v138 != v13) {
            goto lab_0x40b36f_2;
        } else {
            goto lab_0x40b38d;
        }
    }
  lab_0x40bb1c:;
    int64_t v139 = 8 * v124; // 0x40bb1c
    *(int64_t *)v121 = *(int64_t *)(v139 + v41);
    *(int64_t *)(v121 + 2048) = *(int64_t *)(v139 + v42);
    goto lab_0x40bad6;
  lab_0x40bb06:;
    int64_t v140 = v125;
    int64_t v141 = v126 + 1; // 0x40bb09
    v126 = v141;
    v125 = v140 + 32;
    v124 = v141;
    if ((*(int64_t *)v140 & v122) == 0) {
        goto lab_0x40bb06;
    } else {
        goto lab_0x40bb1c;
    }
  lab_0x40b9ff:;
    int64_t v142 = v132;
    if ((*v115 & v128) == 0) {
        // 0x40ba15
        *(int64_t *)v127 = *(int64_t *)(v142 + v41);
        goto lab_0x40b348;
    } else {
        // 0x40ba09
        *(int64_t *)v127 = *(int64_t *)(v142 + v42);
        goto lab_0x40b348;
    }
  lab_0x40b9e8:;
    int64_t v143 = v131;
    int64_t v144 = v130 + 1; // 0x40b9eb
    v131 = v143 + 32;
    v130 = v144;
    if ((*(int64_t *)v143 & v128) == 0) {
        goto lab_0x40b9e8;
    } else {
        // 0x40b9fb
        v132 = 8 * v144;
        goto lab_0x40b9ff;
    }
}
// Address range: 0x40bb50 - 0x40bbd7
int64_t function_40bb50(int64_t a1, int64_t a2) {
    int64_t v1 = a2 + 48; // 0x40bb50
    char * v2 = (char *)v1; // 0x40bb50
    if (*v2 == 16) {
        int64_t v3 = *(int64_t *)(a2 + 8); // 0x40bb56
        *(int64_t *)(a2 + 24) = *(int64_t *)(v3 + 24);
        *(int64_t *)(a2 + 56) = *(int64_t *)(v3 + 56);
        return 0;
    }
    // 0x40bb70
    *(int64_t *)(a2 + 24) = a2;
    int64_t v4 = a2 + 40; // 0x40bb84
    int64_t v5 = function_407cd0(a1, *(int64_t *)v4, *(int64_t *)v1); // 0x40bb88
    *(int64_t *)(a2 + 56) = v5;
    if (v5 == -1) {
        // 0x40bbc6
        return 12;
    }
    // 0x40bb9a
    if (*v2 == 12) {
        int32_t * v6 = (int32_t *)(a1 + 8 + 16 * v5); // 0x40bbb8
        *v6 = *v6 & -0x3ff01 | 256 * *(int32_t *)v4 & 0x3ff00;
    }
    // 0x40bbc6
    return 0;
}
// Address range: 0x40bbe0 - 0x40bd5c
int64_t function_40bbe0(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 != 0) {
        int64_t v2 = 0; // 0x40bbfb
        if (*v1 != 0) {
            int64_t v3 = v2 + 1; // 0x40bc0f
            int64_t v4 = a1 + 16 * v2; // 0x40bc17
            function_407c80(v4);
            v2 = v3;
            int64_t v5 = v4; // 0x40bc24
            while (*v1 > v3) {
                // 0x40bc0c
                v3 = v2 + 1;
                v4 = v5 + 16 * v2;
                function_407c80(v4);
                v2 = v3;
                v5 = v4;
            }
        }
    }
    // 0x40bc26
    free((int64_t *)*(int64_t *)(a1 + 24));
    int64_t * v6; // 0x40bbe0
    int64_t * v7; // 0x40bbe0
    int64_t * v8; // 0x40bbe0
    if (*v1 == 0) {
        // 0x40bc26
        v7 = (int64_t *)(a1 + 56);
        v6 = (int64_t *)(a1 + 48);
        v8 = (int64_t *)(a1 + 40);
    } else {
        int64_t * v9 = (int64_t *)(a1 + 48);
        int64_t * v10 = (int64_t *)(a1 + 56);
        int64_t * v11 = (int64_t *)(a1 + 40);
        int64_t v12 = 0;
        int64_t v13 = *v9; // 0x40bc40
        if (v13 != 0) {
            // 0x40bc4a
            free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
        }
        int64_t v14 = *v10; // 0x40bc58
        if (v14 != 0) {
            // 0x40bc62
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
        }
        int64_t v15 = *v11; // 0x40bc70
        if (v15 != 0) {
            // 0x40bc7a
            free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
        }
        int64_t v16 = v12 + 1; // 0x40bc88
        v7 = v10;
        v6 = v9;
        v8 = v11;
        while (*v1 > v16) {
            // 0x40bc40
            v12 = v16;
            v13 = *v9;
            if (v13 != 0) {
                // 0x40bc4a
                free((int64_t *)*(int64_t *)(v13 + 16 + 24 * v12));
            }
            // 0x40bc58
            v14 = *v10;
            if (v14 != 0) {
                // 0x40bc62
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v14));
            }
            // 0x40bc70
            v15 = *v11;
            if (v15 != 0) {
                // 0x40bc7a
                free((int64_t *)*(int64_t *)(24 * v12 + 16 + v15));
            }
            // 0x40bc88
            v16 = v12 + 1;
            v7 = v10;
            v6 = v9;
            v8 = v11;
        }
    }
    // 0x40bc93
    free((int64_t *)*v8);
    free((int64_t *)*v6);
    int64_t * v17 = (int64_t *)*v7; // 0x40bcaf
    free(v17);
    free(v17);
    int64_t * v18 = (int64_t *)(a1 + 64); // 0x40bcbd
    int64_t v19 = *v18; // 0x40bcbd
    int64_t * v20 = NULL; // 0x40bcc5
    if (v19 != 0) {
        int64_t v21 = 0; // 0x40bd03
        int64_t v22 = 24 * v21 + v19; // 0x40bcd7
        int64_t * v23 = (int64_t *)v22; // 0x40bcdb
        int64_t * v24 = (int64_t *)(v22 + 16);
        int64_t v25 = 0; // 0x40bce0
        int64_t v26; // 0x40bcf0
        if (*v23 >= 1) {
            v26 = v25 + 1;
            function_4081d0(*(int64_t *)(*v24 + 8 * v25));
            v25 = v26;
            while (v26 < *v23) {
                // 0x40bce8
                v26 = v25 + 1;
                function_4081d0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
            }
        }
        // 0x40bcff
        v21++;
        free((int64_t *)*v24);
        int64_t v27 = *v18;
        while (*(int64_t *)(a1 + 136) >= v21) {
            // 0x40bcd0
            v22 = 24 * v21 + v27;
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 16);
            v25 = 0;
            if (*v23 >= 1) {
                v26 = v25 + 1;
                function_4081d0(*(int64_t *)(*v24 + 8 * v25));
                v25 = v26;
                while (v26 < *v23) {
                    // 0x40bce8
                    v26 = v25 + 1;
                    function_4081d0(*(int64_t *)(*v24 + 8 * v25));
                    v25 = v26;
                }
            }
            // 0x40bcff
            v21++;
            free((int64_t *)*v24);
            v27 = *v18;
        }
        // 0x40bd25
        v20 = (int64_t *)v27;
    }
    // 0x40bd25
    free(v20);
    int64_t v28 = *(int64_t *)(a1 + 120); // 0x40bd2a
    if (v28 != (int64_t)&g14) {
        // 0x40bd38
        free((int64_t *)v28);
    }
    // 0x40bd3d
    free((int64_t *)*(int64_t *)(a1 + 224));
    free((int64_t *)a1);
    return &g88;
}
// Address range: 0x40bd60 - 0x40bdae
int64_t function_40bd60(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 16);
    if (a1 < 1) {
        // 0x40bda0
        free((int64_t *)*v1);
        return &g88;
    }
    int64_t v2 = 0;
    int64_t v3 = v2 + 1; // 0x40bd79
    int64_t v4 = 48 * v2; // 0x40bd7d
    free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
    uint64_t v5 = *(int64_t *)(v4 + 16 + *v1); // 0x40bd90
    free((int64_t *)v5);
    while (v3 < v5) {
        // 0x40bd70
        v2 = v3;
        v3 = v2 + 1;
        v4 = 48 * v2;
        free((int64_t *)*(int64_t *)(*v1 + 40 + v4));
        v5 = *(int64_t *)(v4 + 16 + *v1);
        free((int64_t *)v5);
    }
    // 0x40bda0
    free((int64_t *)*v1);
    return &g88;
}
// Address range: 0x40bdb0 - 0x40be40
int64_t function_40bdb0(int64_t a1, int64_t a2, int64_t * a3, int64_t a4, int64_t a5, int128_t * a6) {
    int64_t v1 = a1 - 1; // 0x40bdb7
    *(int64_t *)a1 = v1;
    if (v1 < 0) {
        // 0x40be22
        __assert_fail("num >= 0", "lib/regexec.c", 1359, "pop_fail_stack");
        return &g88;
    }
    int64_t v2 = 48 * v1; // 0x40bdce
    int64_t v3 = v2 + a2; // 0x40bdd8
    *a3 = *(int64_t *)v3;
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x40bde1
    memcpy((int64_t *)a5, (int64_t *)v4, 16 * (int32_t)a4);
    int64_t * v5 = (int64_t *)((int64_t)a6 + 16); // 0x40bded
    free((int64_t *)*v5);
    int64_t v6 = v4 + v2;
    free((int64_t *)*(int64_t *)(v6 + 16));
    *a6 = (int128_t)__asm_movaps(__asm_movdqu(*(int128_t *)(v6 + 24)));
    *v5 = *(int64_t *)(v6 + 40);
    return *(int64_t *)(v6 + 8);
}
// Address range: 0x40be40 - 0x40be8c
int64_t function_40be40(int64_t a1, int64_t str) {
    // 0x40be40
    int64_t v1; // 0x40be40
    uint64_t v2 = v1;
    int32_t len = strlen((char *)str); // 0x40be4f
    if (len != 1) {
        // 0x40be80
        return 3;
    }
    int64_t * v3 = (int64_t *)((v2 / 8 & 24) + a1); // 0x40be6a
    *v3 = *v3 | (int64_t)len << v2 % 64;
    return 0;
}
// Address range: 0x40be90 - 0x40c656
int64_t function_40be90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t * a5, int64_t a6, int64_t a7) {
    int64_t v1 = (int64_t)a5;
    int64_t v2 = a4; // 0x40beb1
    int64_t v3 = a6; // 0x40beb1
    int64_t v4; // 0x40be90
    int64_t v5; // 0x40be90
    int64_t v6; // 0x40be90
    int64_t v7; // 0x40be90
    int64_t v8; // 0x40be90
    bool v9; // 0x40be90
    if ((a7 & 0x400000) == 0) {
        goto lab_0x40bed5;
    } else {
        int64_t v10 = v9 ? -1 : 1;
        int64_t v11 = (int64_t)"upper"; // 0x40be90
        int64_t v12 = a6; // 0x40be90
        unsigned char v13 = *(char *)v12; // 0x40bec0
        char v14 = *(char *)v11; // 0x40bec0
        v2 = 5;
        char v15 = v14; // 0x40bec0
        bool v16 = false; // 0x40bec0
        while (v13 == v14) {
            // 0x40beb3
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
        int64_t v18 = (int64_t)"lower"; // 0x40bec9
        int64_t v19 = a6; // 0x40bec9
        if ((v13 >= v17 && !v16) != v13 < v17) {
            unsigned char v20 = *(char *)v19; // 0x40bfd3
            char v21 = *(char *)v18; // 0x40bfd3
            int64_t v22 = 5; // 0x40bfd3
            char v23 = v21; // 0x40bfd3
            bool v24 = false; // 0x40bfd3
            while (v20 == v21) {
                // 0x40bfc6
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
            int64_t v26 = !((v20 < v25 | v24)) == v20 < v25 ? (int64_t)"alpha" : a6; // 0x40bfe5
            v6 = a3;
            v8 = v22;
            v4 = v26;
            v7 = v22;
            v5 = v26;
            if (v22 != v1) {
                goto lab_0x40bee5;
            } else {
                goto lab_0x40bff5;
            }
        } else {
            goto lab_0x40bed5;
        }
    }
  lab_0x40bed5:
    // 0x40bed5
    v6 = a3;
    v8 = v2;
    v4 = v3;
    v7 = v1;
    v5 = v3;
    if (v2 == v1) {
        goto lab_0x40bff5;
    } else {
        goto lab_0x40bee5;
    }
  lab_0x40bff5:;
    int64_t v27 = 2 * v7 | 1; // 0x40bff5
    int64_t * v28 = (int64_t *)a3; // 0x40c00e
    int64_t * mem = realloc(v28, 8 * (int32_t)v27); // 0x40c00e
    if (mem == NULL) {
        // 0x40bf76
        return 12;
    }
    int64_t v29 = (int64_t)mem; // 0x40c00e
    *v28 = v29;
    *a5 = v27;
    v6 = v29;
    v8 = v7;
    v4 = v5;
    goto lab_0x40bee5;
  lab_0x40bee5:
    // 0x40bee5
    *(int64_t *)a4 = v8 + 1;
    char * name = (char *)v4; // 0x40bef4
    *(int64_t *)(8 * v8 + v6) = (int64_t)wctype(name);
    int64_t v30 = v9 ? -1 : 1;
    int64_t v31 = (int64_t)"alnum"; // 0x40be90
    int64_t v32 = v4; // 0x40be90
    int64_t v33 = 6; // 0x40be90
    unsigned char v34 = *(char *)v32; // 0x40bf0a
    char v35 = *(char *)v31; // 0x40bf0a
    char v36 = v35; // 0x40bf0a
    bool v37 = false; // 0x40bf0a
    while (v34 == v35) {
        int64_t v38 = v33 - 1; // 0x40bf0a
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
    int64_t v40 = (int64_t)"cntrl"; // 0x40bf13
    int64_t v41 = v4; // 0x40bf13
    int64_t v42 = 6; // 0x40bf13
    if ((v34 >= v39 && !v37) == v34 < v39) {
        int64_t v43 = (int64_t)*__ctype_b_loc(); // 0x40bf94
        if (a1 != 0) {
            int64_t v44 = 0;
            unsigned char v45; // 0x40c1be
            unsigned char v46; // 0x40be90
            int64_t * v47; // 0x40c1d3
            if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                // 0x40c1be
                v45 = *(char *)(v44 + a1);
                v46 = v45 % 64;
                v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
            }
            int64_t v48 = v44 + 1; // 0x40c1e1
            while (v44 != 255) {
                // 0x40c1b8
                v44 = v48;
                if ((*(char *)(2 * v44 + v43) & 8) != 0) {
                    // 0x40c1be
                    v45 = *(char *)(v44 + a1);
                    v46 = v45 % 64;
                    v47 = (int64_t *)((int64_t)(v45 / 8 & 24) + a2);
                    *v47 = (v46 == 0 ? 1 : 1 << (int64_t)v46) | *v47;
                }
                // 0x40c1d7
                v48 = v44 + 1;
            }
        } else {
            int64_t v49 = 0;
            int64_t * v50; // 0x40bfb3
            if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                // 0x40bfa6
                v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                *v50 = *v50 | 1 << v49 % 64;
            }
            int64_t v51 = v49 + 1; // 0x40bfc2
            while (v49 != 255) {
                // 0x40bfa0
                v49 = v51;
                if ((*(char *)(2 * v49 + v43) & 8) != 0) {
                    // 0x40bfa6
                    v50 = (int64_t *)(8 * (v49 >> 6) + a2);
                    *v50 = *v50 | 1 << v49 % 64;
                }
                // 0x40bfb7
                v51 = v49 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v52 = *(char *)v41; // 0x40bf22
    char v53 = *(char *)v40; // 0x40bf22
    char v54 = v53; // 0x40bf22
    bool v55 = false; // 0x40bf22
    while (v52 == v53) {
        int64_t v56 = v42 - 1; // 0x40bf22
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
    int64_t v58 = (int64_t)"lower"; // 0x40bf2b
    int64_t v59 = v4; // 0x40bf2b
    int64_t v60 = 6; // 0x40bf2b
    if ((v52 >= v57 && !v55) == v52 < v57) {
        int64_t v61 = (int64_t)*__ctype_b_loc(); // 0x40bf3d
        if (a1 != 0) {
            int64_t v62 = 0;
            unsigned char v63; // 0x40c1f6
            unsigned char v64; // 0x40be90
            int64_t * v65; // 0x40c20b
            if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                // 0x40c1f6
                v63 = *(char *)(v62 + a1);
                v64 = v63 % 64;
                v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
            }
            int64_t v66 = v62 + 1; // 0x40c219
            while (v62 != 255) {
                // 0x40c1f0
                v62 = v66;
                if ((*(char *)(2 * v62 + v61) & 2) != 0) {
                    // 0x40c1f6
                    v63 = *(char *)(v62 + a1);
                    v64 = v63 % 64;
                    v65 = (int64_t *)((int64_t)(v63 / 8 & 24) + a2);
                    *v65 = (v64 == 0 ? 1 : 1 << (int64_t)v64) | *v65;
                }
                // 0x40c20f
                v66 = v62 + 1;
            }
        } else {
            int64_t v67 = 0;
            int64_t * v68; // 0x40bf63
            if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                // 0x40bf56
                v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                *v68 = *v68 | 1 << v67 % 64;
            }
            int64_t v69 = v67 + 1; // 0x40bf72
            while (v67 != 255) {
                // 0x40bf50
                v67 = v69;
                if ((*(char *)(2 * v67 + v61) & 2) != 0) {
                    // 0x40bf56
                    v68 = (int64_t *)(8 * (v67 >> 6) + a2);
                    *v68 = *v68 | 1 << v67 % 64;
                }
                // 0x40bf67
                v69 = v67 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v70 = *(char *)v59; // 0x40c041
    char v71 = *(char *)v58; // 0x40c041
    char v72 = v71; // 0x40c041
    bool v73 = false; // 0x40c041
    while (v70 == v71) {
        int64_t v74 = v60 - 1; // 0x40c041
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
    int64_t v76 = (int64_t)"space"; // 0x40c04a
    int64_t v77 = v4; // 0x40c04a
    int64_t v78 = 6; // 0x40c04a
    if ((v70 >= v75 && !v73) == v70 < v75) {
        int64_t v79 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v80 = 0;
            unsigned char v81; // 0x40c22f
            unsigned char v82; // 0x40be90
            int64_t * v83; // 0x40c244
            if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                // 0x40c22f
                v81 = *(char *)(v80 + a1);
                v82 = v81 % 64;
                v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
            }
            int64_t v84 = v80 + 1; // 0x40c252
            while (v80 != 255) {
                // 0x40c228
                v80 = v84;
                if ((*(char *)(2 * v80 + v79) & 2) != 0) {
                    // 0x40c22f
                    v81 = *(char *)(v80 + a1);
                    v82 = v81 % 64;
                    v83 = (int64_t *)((int64_t)(v81 / 8 & 24) + a2);
                    *v83 = (v82 == 0 ? 1 : 1 << (int64_t)v82) | *v83;
                }
                // 0x40c248
                v84 = v80 + 1;
            }
        } else {
            int64_t v85 = 0;
            int64_t * v86; // 0x40c0dc
            if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                // 0x40c0cf
                v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                *v86 = *v86 | 1 << v85 % 64;
            }
            int64_t v87 = v85 + 1; // 0x40c0eb
            while (v85 != 255) {
                // 0x40c0c8
                v85 = v87;
                if ((*(char *)(2 * v85 + v79) & 2) != 0) {
                    // 0x40c0cf
                    v86 = (int64_t *)(8 * (v85 >> 6) + a2);
                    *v86 = *v86 | 1 << v85 % 64;
                }
                // 0x40c0e0
                v87 = v85 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v88 = *(char *)v77; // 0x40c059
    char v89 = *(char *)v76; // 0x40c059
    char v90 = v89; // 0x40c059
    bool v91 = false; // 0x40c059
    while (v88 == v89) {
        // 0x40c04c
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
    int64_t v93 = (int64_t)"alpha"; // 0x40c062
    int64_t v94 = v4; // 0x40c062
    int64_t v95 = 6; // 0x40c062
    if ((v88 >= v92 && !v91) == v88 < v92) {
        int64_t v96 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v97 = 0;
            unsigned char v98; // 0x40c3b7
            unsigned char v99; // 0x40be90
            int64_t * v100; // 0x40c3cc
            if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                // 0x40c3b7
                v98 = *(char *)(v97 + a1);
                v99 = v98 % 64;
                v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
            }
            int64_t v101 = v97 + 1; // 0x40c3da
            while (v97 != 255) {
                // 0x40c3b0
                v97 = v101;
                if ((*(char *)(2 * v97 + v96) & 32) != 0) {
                    // 0x40c3b7
                    v98 = *(char *)(v97 + a1);
                    v99 = v98 % 64;
                    v100 = (int64_t *)((int64_t)(v98 / 8 & 24) + a2);
                    *v100 = (v99 == 0 ? 1 : 1 << (int64_t)v99) | *v100;
                }
                // 0x40c3d0
                v101 = v97 + 1;
            }
        } else {
            int64_t v102 = 0;
            int64_t * v103; // 0x40c094
            if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                // 0x40c087
                v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                *v103 = *v103 | 1 << v102 % 64;
            }
            int64_t v104 = v102 + 1; // 0x40c0a3
            while (v102 != 255) {
                // 0x40c080
                v102 = v104;
                if ((*(char *)(2 * v102 + v96) & 32) != 0) {
                    // 0x40c087
                    v103 = (int64_t *)(8 * (v102 >> 6) + a2);
                    *v103 = *v103 | 1 << v102 % 64;
                }
                // 0x40c098
                v104 = v102 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v105 = *(char *)v94; // 0x40c0ff
    char v106 = *(char *)v93; // 0x40c0ff
    char v107 = v106; // 0x40c0ff
    bool v108 = false; // 0x40c0ff
    while (v105 == v106) {
        int64_t v109 = v95 - 1; // 0x40c0ff
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
    int64_t v111 = (int64_t)"digit"; // 0x40c108
    int64_t v112 = v4; // 0x40c108
    int64_t v113 = 6; // 0x40c108
    if ((v105 >= v110 && !v108) == v105 < v110) {
        int64_t v114 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v115 = 0;
            unsigned char v116; // 0x40c384
            unsigned char v117; // 0x40be90
            int64_t * v118; // 0x40c399
            if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                // 0x40c384
                v116 = *(char *)(v115 + a1);
                v117 = v116 % 64;
                v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
            }
            int64_t v119 = v115 + 1; // 0x40c3a7
            while (v115 != 255) {
                // 0x40c37d
                v115 = v119;
                if ((*(char *)(2 * v115 + v114) & 4) != 0) {
                    // 0x40c384
                    v116 = *(char *)(v115 + a1);
                    v117 = v116 % 64;
                    v118 = (int64_t *)((int64_t)(v116 / 8 & 24) + a2);
                    *v118 = (v117 == 0 ? 1 : 1 << (int64_t)v117) | *v118;
                }
                // 0x40c39d
                v119 = v115 + 1;
            }
        } else {
            int64_t v120 = 0;
            int64_t * v121; // 0x40c19c
            if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                // 0x40c18f
                v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                *v121 = *v121 | 1 << v120 % 64;
            }
            int64_t v122 = v120 + 1; // 0x40c1ab
            while (v120 != 255) {
                // 0x40c188
                v120 = v122;
                if ((*(char *)(2 * v120 + v114) & 4) != 0) {
                    // 0x40c18f
                    v121 = (int64_t *)(8 * (v120 >> 6) + a2);
                    *v121 = *v121 | 1 << v120 % 64;
                }
                // 0x40c1a0
                v122 = v120 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v123 = *(char *)v112; // 0x40c117
    char v124 = *(char *)v111; // 0x40c117
    char v125 = v124; // 0x40c117
    bool v126 = false; // 0x40c117
    while (v123 == v124) {
        // 0x40c10a
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
    int64_t v128 = (int64_t)"print"; // 0x40c120
    int64_t v129 = v4; // 0x40c120
    int64_t v130 = 6; // 0x40c120
    if ((v123 >= v127 && !v126) == v123 < v127) {
        int64_t v131 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v132 = 0;
            unsigned char v133; // 0x40c3ea
            unsigned char v134; // 0x40be90
            int64_t * v135; // 0x40c3ff
            if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                // 0x40c3ea
                v133 = *(char *)(v132 + a1);
                v134 = v133 % 64;
                v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
            }
            int64_t v136 = v132 + 1; // 0x40c40d
            while (v132 != 255) {
                // 0x40c3e3
                v132 = v136;
                if ((*(char *)(2 * v132 + v131) & 8) != 0) {
                    // 0x40c3ea
                    v133 = *(char *)(v132 + a1);
                    v134 = v133 % 64;
                    v135 = (int64_t *)((int64_t)(v133 / 8 & 24) + a2);
                    *v135 = (v134 == 0 ? 1 : 1 << (int64_t)v134) | *v135;
                }
                // 0x40c403
                v136 = v132 + 1;
            }
        } else {
            int64_t v137 = 0;
            int64_t * v138; // 0x40c154
            if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                // 0x40c147
                v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                *v138 = *v138 | 1 << v137 % 64;
            }
            int64_t v139 = v137 + 1; // 0x40c163
            while (v137 != 255) {
                // 0x40c140
                v137 = v139;
                if ((*(char *)(2 * v137 + v131) & 8) != 0) {
                    // 0x40c147
                    v138 = (int64_t *)(8 * (v137 >> 6) + a2);
                    *v138 = *v138 | 1 << v137 % 64;
                }
                // 0x40c158
                v139 = v137 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v140 = *(char *)v129; // 0x40c266
    char v141 = *(char *)v128; // 0x40c266
    char v142 = v141; // 0x40c266
    bool v143 = false; // 0x40c266
    while (v140 == v141) {
        int64_t v144 = v130 - 1; // 0x40c266
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
    int64_t v146 = (int64_t)"upper"; // 0x40c26f
    int64_t v147 = v4; // 0x40c26f
    int64_t v148 = 6; // 0x40c26f
    if ((v140 >= v145 && !v143) == v140 < v145) {
        int64_t v149 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v150 = 0;
            unsigned char v151; // 0x40c5c1
            unsigned char v152; // 0x40be90
            int64_t * v153; // 0x40c5d6
            if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                // 0x40c5c1
                v151 = *(char *)(v150 + a1);
                v152 = v151 % 64;
                v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
            }
            int64_t v154 = v150 + 1; // 0x40c5e4
            while (v150 != 255) {
                // 0x40c5ba
                v150 = v154;
                if ((*(char *)(2 * v150 + v149) & 64) != 0) {
                    // 0x40c5c1
                    v151 = *(char *)(v150 + a1);
                    v152 = v151 % 64;
                    v153 = (int64_t *)((int64_t)(v151 / 8 & 24) + a2);
                    *v153 = (v152 == 0 ? 1 : 1 << (int64_t)v152) | *v153;
                }
                // 0x40c5da
                v154 = v150 + 1;
            }
        } else {
            int64_t v155 = 0;
            int64_t * v156; // 0x40c2a4
            if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                // 0x40c297
                v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                *v156 = *v156 | 1 << v155 % 64;
            }
            int64_t v157 = v155 + 1; // 0x40c2b3
            while (v155 != 255) {
                // 0x40c290
                v155 = v157;
                if ((*(char *)(2 * v155 + v149) & 64) != 0) {
                    // 0x40c297
                    v156 = (int64_t *)(8 * (v155 >> 6) + a2);
                    *v156 = *v156 | 1 << v155 % 64;
                }
                // 0x40c2a8
                v157 = v155 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v158 = *(char *)v147; // 0x40c2c7
    char v159 = *(char *)v146; // 0x40c2c7
    char v160 = v159; // 0x40c2c7
    bool v161 = false; // 0x40c2c7
    while (v158 == v159) {
        int64_t v162 = v148 - 1; // 0x40c2c7
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
    int64_t v164 = (int64_t)"blank"; // 0x40c2d0
    int64_t v165 = v4; // 0x40c2d0
    int64_t v166 = 6; // 0x40c2d0
    if ((v158 >= v163 && !v161) == v158 < v163) {
        int64_t v167 = (int64_t)*__ctype_b_loc() + 1;
        if (a1 != 0) {
            int64_t v168 = 0;
            unsigned char v169; // 0x40c62b
            unsigned char v170; // 0x40be90
            int64_t * v171; // 0x40c640
            if (*(char *)(2 * v168 + v167) % 2 != 0) {
                // 0x40c62b
                v169 = *(char *)(v168 + a1);
                v170 = v169 % 64;
                v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
            }
            int64_t v172 = v168 + 1; // 0x40c64f
            while (v168 != 255) {
                // 0x40c624
                v168 = v172;
                if (*(char *)(2 * v168 + v167) % 2 != 0) {
                    // 0x40c62b
                    v169 = *(char *)(v168 + a1);
                    v170 = v169 % 64;
                    v171 = (int64_t *)((int64_t)(v169 / 8 & 24) + a2);
                    *v171 = (v170 == 0 ? 1 : 1 << (int64_t)v170) | *v171;
                }
                // 0x40c644
                v172 = v168 + 1;
            }
        } else {
            int64_t v173 = 0;
            int64_t * v174; // 0x40c2fe
            if (*(char *)(2 * v173 + v167) % 2 != 0) {
                // 0x40c2f1
                v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                *v174 = *v174 | 1 << v173 % 64;
            }
            int64_t v175 = v173 + 1; // 0x40c30d
            while (v173 != 255) {
                // 0x40c2ea
                v173 = v175;
                if (*(char *)(2 * v173 + v167) % 2 != 0) {
                    // 0x40c2f1
                    v174 = (int64_t *)(8 * (v173 >> 6) + a2);
                    *v174 = *v174 | 1 << v173 % 64;
                }
                // 0x40c302
                v175 = v173 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v176 = *(char *)v165; // 0x40c32b
    char v177 = *(char *)v164; // 0x40c32b
    char v178 = v177; // 0x40c32b
    bool v179 = false; // 0x40c32b
    while (v176 == v177) {
        int64_t v180 = v166 - 1; // 0x40c32b
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
    int64_t v182 = (int64_t)"graph"; // 0x40c334
    int64_t v183 = v4; // 0x40c334
    int64_t v184 = 6; // 0x40c334
    if ((v176 >= v181 && !v179) == v176 < v181) {
        int64_t v185 = (int64_t)*__ctype_b_loc(); // 0x40c346
        if (a1 != 0) {
            int64_t v186 = 0;
            unsigned char v187; // 0x40c5f8
            unsigned char v188; // 0x40be90
            int64_t * v189; // 0x40c60d
            if (*(char *)(2 * v186 + v185) % 2 != 0) {
                // 0x40c5f8
                v187 = *(char *)(v186 + a1);
                v188 = v187 % 64;
                v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
            }
            int64_t v190 = v186 + 1; // 0x40c61b
            while (v186 != 255) {
                // 0x40c5f2
                v186 = v190;
                if (*(char *)(2 * v186 + v185) % 2 != 0) {
                    // 0x40c5f8
                    v187 = *(char *)(v186 + a1);
                    v188 = v187 % 64;
                    v189 = (int64_t *)((int64_t)(v187 / 8 & 24) + a2);
                    *v189 = (v188 == 0 ? 1 : 1 << (int64_t)v188) | *v189;
                }
                // 0x40c611
                v190 = v186 + 1;
            }
        } else {
            int64_t v191 = 0;
            int64_t * v192; // 0x40c365
            if (*(char *)(2 * v191 + v185) % 2 != 0) {
                // 0x40c358
                v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                *v192 = *v192 | 1 << v191 % 64;
            }
            int64_t v193 = v191 + 1; // 0x40c374
            while (v191 != 255) {
                // 0x40c352
                v191 = v193;
                if (*(char *)(2 * v191 + v185) % 2 != 0) {
                    // 0x40c358
                    v192 = (int64_t *)(8 * (v191 >> 6) + a2);
                    *v192 = *v192 | 1 << v191 % 64;
                }
                // 0x40c369
                v193 = v191 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    unsigned char v194 = *(char *)v183; // 0x40c421
    char v195 = *(char *)v182; // 0x40c421
    char v196 = v195; // 0x40c421
    bool v197 = false; // 0x40c421
    while (v194 == v195) {
        int64_t v198 = v184 - 1; // 0x40c421
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
        int64_t v200 = (int64_t)*__ctype_b_loc(); // 0x40c438
        if (a1 != 0) {
            int64_t v201 = 0;
            unsigned char v202; // 0x40c478
            unsigned char v203; // 0x40be90
            int64_t * v204; // 0x40c48d
            if (*(int16_t *)(2 * v201 + v200) < 0) {
                // 0x40c478
                v202 = *(char *)(v201 + a1);
                v203 = v202 % 64;
                v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
            }
            int64_t v205 = v201 + 1; // 0x40c49b
            while (v201 != 255) {
                // 0x40c471
                v201 = v205;
                if (*(int16_t *)(2 * v201 + v200) < 0) {
                    // 0x40c478
                    v202 = *(char *)(v201 + a1);
                    v203 = v202 % 64;
                    v204 = (int64_t *)((int64_t)(v202 / 8 & 24) + a2);
                    *v204 = (v203 == 0 ? 1 : 1 << (int64_t)v203) | *v204;
                }
                // 0x40c491
                v205 = v201 + 1;
            }
        } else {
            int64_t v206 = 0;
            int64_t * v207; // 0x40c454
            if (*(int16_t *)(2 * v206 + v200) < 0) {
                // 0x40c447
                v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                *v207 = *v207 | 1 << v206 % 64;
            }
            int64_t v208 = v206 + 1; // 0x40c463
            while (v206 != 255) {
                // 0x40c440
                v206 = v208;
                if (*(int16_t *)(2 * v206 + v200) < 0) {
                    // 0x40c447
                    v207 = (int64_t *)(8 * (v206 >> 6) + a2);
                    *v207 = *v207 | 1 << v206 % 64;
                }
                // 0x40c458
                v208 = v206 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    // 0x40c4a2
    if (strcmp(name, "punct") == 0) {
        int64_t v209 = (int64_t)*__ctype_b_loc(); // 0x40c4bf
        if (a1 != 0) {
            int64_t v210 = 0;
            unsigned char v211; // 0x40c4fd
            unsigned char v212; // 0x40be90
            int64_t * v213; // 0x40c512
            if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                // 0x40c4fd
                v211 = *(char *)(v210 + a1);
                v212 = v211 % 64;
                v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
            }
            int64_t v214 = v210 + 1; // 0x40c520
            while (v210 != 255) {
                // 0x40c4f7
                v210 = v214;
                if ((*(char *)(2 * v210 + v209) & 4) != 0) {
                    // 0x40c4fd
                    v211 = *(char *)(v210 + a1);
                    v212 = v211 % 64;
                    v213 = (int64_t *)((int64_t)(v211 / 8 & 24) + a2);
                    *v213 = (v212 == 0 ? 1 : 1 << (int64_t)v212) | *v213;
                }
                // 0x40c516
                v214 = v210 + 1;
            }
        } else {
            int64_t v215 = 0;
            int64_t * v216; // 0x40c4da
            if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                // 0x40c4cd
                v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                *v216 = *v216 | 1 << v215 % 64;
            }
            int64_t v217 = v215 + 1; // 0x40c4e9
            while (v215 != 255) {
                // 0x40c4c7
                v215 = v217;
                if ((*(char *)(2 * v215 + v209) & 4) != 0) {
                    // 0x40c4cd
                    v216 = (int64_t *)(8 * (v215 >> 6) + a2);
                    *v216 = *v216 | 1 << v215 % 64;
                }
                // 0x40c4de
                v217 = v215 + 1;
            }
        }
        // 0x40bf76
        return 0;
    }
    // 0x40c527
    if (strcmp(name, "xdigit") != 0) {
        // 0x40bf76
        return 4;
    }
    int64_t v218 = (int64_t)*__ctype_b_loc() + 1;
    if (a1 == 0) {
        int64_t v219 = 0;
        int64_t * v220; // 0x40c560
        if ((*(char *)(2 * v219 + v218) & 16) != 0) {
            // 0x40c553
            v220 = (int64_t *)(8 * (v219 >> 6) + a2);
            *v220 = *v220 | 1 << v219 % 64;
        }
        int64_t v221 = v219 + 1; // 0x40c56f
        while (v219 != 255) {
            // 0x40c54c
            v219 = v221;
            if ((*(char *)(2 * v219 + v218) & 16) != 0) {
                // 0x40c553
                v220 = (int64_t *)(8 * (v219 >> 6) + a2);
                *v220 = *v220 | 1 << v219 % 64;
            }
            // 0x40c564
            v221 = v219 + 1;
        }
        // 0x40bf76
        return 0;
    }
    int64_t v222 = 0;
    unsigned char v223; // 0x40c584
    unsigned char v224; // 0x40be90
    int64_t * v225; // 0x40c599
    if ((*(char *)(2 * v222 + v218) & 16) != 0) {
        // 0x40c584
        v223 = *(char *)(v222 + a1);
        v224 = v223 % 64;
        v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
        *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
    }
    int64_t v226 = v222 + 1; // 0x40c5a7
    while (v222 != 255) {
        // 0x40c57d
        v222 = v226;
        if ((*(char *)(2 * v222 + v218) & 16) != 0) {
            // 0x40c584
            v223 = *(char *)(v222 + a1);
            v224 = v223 % 64;
            v225 = (int64_t *)((int64_t)(v223 / 8 & 24) + a2);
            *v225 = (v224 == 0 ? 1 : 1 << (int64_t)v224) | *v225;
        }
        // 0x40c59d
        v226 = v222 + 1;
    }
    // 0x40bf76
    return 0;
}
// Address range: 0x40c660 - 0x40c895
int64_t function_40c660(int64_t a1, int64_t a2, char * a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // bp-96, 0x40c68d
    int64_t * mem = calloc(32, 1); // 0x40c696
    if (mem == NULL) {
        // 0x40c830
        *(int32_t *)a6 = 12;
        // 0x40c809
        return 0;
    }
    int64_t * mem2 = calloc(80, 1); // 0x40c6b1
    if (mem2 == NULL) {
        // 0x40c850
        free(mem);
        *(int32_t *)a6 = 12;
        // 0x40c809
        return 0;
    }
    int64_t v2 = (int64_t)mem; // 0x40c696
    int64_t v3 = (int64_t)mem2; // 0x40c6b1
    char * v4 = (char *)(v3 + 32); // 0x40c6c6
    unsigned char v5 = (char)a5; // 0x40c6ca
    *v4 = *v4 & -2 | v5 % 2;
    int64_t v6 = function_40be90(a2, v2, v3 + 24, v3 + 72, &v1, (int64_t)a3, 0); // 0x40c6f3
    int32_t v7 = v6; // 0x40c6fa
    if (v7 != 0) {
        // 0x40c870
        free(mem);
        function_407c60(v3);
        *(int32_t *)a6 = v7;
        // 0x40c809
        return 0;
    }
    // 0x40c702
    int64_t v8; // 0x40c660
    char v9 = *(char *)&v8; // 0x40c702
    int64_t v10 = v9; // 0x40c702
    v8 = v10;
    v8 = v10;
    int64_t v11 = (int64_t)a4; // 0x40c70e
    if (v9 != 0) {
        int64_t v12 = v8;
        v11++;
        char v13 = *(char *)v11; // 0x40c73d
        v8 = v13;
        int64_t * v14 = (int64_t *)(8 * ((v12 >= 0 ? v12 : v12 + 63) >> 6) + v2); // 0x40c742
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
        int64_t * v16 = (int64_t *)v15; // 0x40c756
        *v16 = -1 - *v16;
        int64_t v17 = v15 + 8; // 0x40c760
        while (v2 + 24 != v15) {
            // 0x40c756
            v15 = v17;
            v16 = (int64_t *)v15;
            *v16 = -1 - *v16;
            v17 = v15 + 8;
        }
    }
    int32_t * v18 = (int32_t *)(a1 + 180); // 0x40c762
    if (*v18 >= 2) {
        int64_t v19 = *(int64_t *)(a1 + 120); // 0x40c76b
        v8 = v19;
        *mem = *mem & *(int64_t *)v19;
        int64_t v20 = 0; // 0x40c779
        v20 += 8;
        int64_t * v21 = (int64_t *)(v20 + v2); // 0x40c775
        *v21 = *v21 & *(int64_t *)(v20 + v19);
        while (v20 != 24) {
            // 0x40c771
            v20 += 8;
            v21 = (int64_t *)(v20 + v2);
            *v21 = *v21 & *(int64_t *)(v20 + v8);
        }
    }
    int64_t v22 = a1 + 112; // 0x40c783
    int64_t v23 = a1 + 128; // 0x40c787
    v8 = 0;
    int64_t v24; // bp-88, 0x40c660
    int64_t v25 = &v24; // 0x40c792
    v24 = v2;
    int64_t result = function_409270(v22, v23, 0, 0, v25); // 0x40c7a7
    if (result != 0) {
        // 0x40c7b4
        if (*v18 < 2) {
            // 0x40c840
            function_407c60(v3);
            // 0x40c809
            return result;
        }
        char * v26 = (char *)(a1 + 176); // 0x40c7c1
        *v26 = *v26 | 2;
        v24 = v3;
        int64_t v27 = function_409270(v22, v23, 0, 0, v25); // 0x40c7e1
        if (v27 != 0) {
            // 0x40c7eb
            int64_t v28; // bp-72, 0x40c660
            int64_t result2 = function_409270(v22, v23, (int32_t)result, (int32_t)v27, (int64_t)&v28); // 0x40c801
            // 0x40c809
            return result2;
        }
    }
    // 0x40c820
    free(mem);
    function_407c60(v3);
    // 0x40c830
    *(int32_t *)a6 = 12;
    // 0x40c809
    return 0;
}
// Address range: 0x40c8a0 - 0x40cd78
int64_t function_40c8a0(int64_t result, int64_t result2, int64_t a3, int64_t a4) {
    int64_t v1 = a4;
    int32_t * v2 = (int32_t *)(result + 180); // 0x40c8b7
    int32_t v3 = 0; // 0x40c8c2
    if (*v2 == 1) {
        // 0x40c8c4
        v3 = (int32_t)(*(int64_t *)(result + 24) / 0x400000) % 2;
    }
    // 0x40c8d3
    if (result2 < 1) {
        // 0x40ca93
        return result;
    }
    char * v4 = (char *)(result + 26);
    int64_t * v5 = (int64_t *)(result + 16);
    char wstr; // bp-312, 0x40c8a0
    int64_t v6 = &wstr;
    char ps; // bp-320, 0x40c8a0
    int64_t v7 = &ps;
    int64_t v8 = a3; // 0x40c8f1
    int64_t v9 = 0; // 0x40c8f1
    int64_t v10 = result; // 0x40c8f1
    int64_t v11; // 0x40c8a0
    int64_t v12; // 0x40c8a0
    int64_t v13; // 0x40c8a0
    int64_t v14; // 0x40c8a0
    int64_t v15; // 0x40c8a0
    int64_t v16; // 0x40c8a0
    unsigned char v17; // 0x40c954
    int64_t v18; // 0x40caa9
    while (true) {
      lab_0x40c931_2:
        // 0x40c931
        v13 = v10;
        v11 = v9;
        int64_t v19 = *(int64_t *)(8 * v11 + v8); // 0x40c939
        v1 = v13;
        int64_t v20 = 16 * v19; // 0x40c947
        v16 = v20 + v13;
        v17 = *(char *)(v16 + 8);
        if (v17 != 1) {
            int64_t v21 = v17; // 0x40c954
            char * v22 = NULL; // 0x40c8a0
            int64_t v23 = v13; // 0x40c8a0
            switch (v17) {
                case 3: {
                    int64_t v24 = (int64_t)v22; // 0x40cbf8
                    int64_t v25 = *(int64_t *)(*(int64_t *)(v23 + v20) + v24); // 0x40cbfd
                    int64_t v26 = 0; // 0x40cc09
                    int64_t v27 = 8 * v24;
                    int64_t v28 = v23;
                    int64_t v29 = v28; // 0x40cc14
                    char * v30; // 0x40c8a0
                    char * v31; // 0x40c8a0
                    int64_t v32; // 0x40cc24
                    int32_t v33; // 0x40cc3b
                    if ((1 << v26 % 64 & v25) != 0) {
                        // 0x40cc16
                        v31 = (char *)(v27 + a4);
                        *v31 = 1;
                        v29 = v28;
                        if (v3 != 0) {
                            // 0x40cc24
                            v32 = v27 + 128;
                            v30 = v31;
                            if ((int32_t)v32 < 384) {
                                // 0x40cc33
                                v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                v30 = (char *)((int64_t)v33 + a4);
                            }
                            // 0x40cc42
                            *v30 = 1;
                            v29 = v32 & 0xffffffff;
                        }
                    }
                    int64_t v34 = v29;
                    int64_t v35 = v27 + 1; // 0x40cc49
                    v26 = v26 + 1 & 0xffffffff;
                    while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                        // 0x40cc10
                        v27 = v35;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40cc16
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40cc24
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40cc33
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40cc42
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40cc45
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                    }
                    // 0x40cc53
                    v14 = v21;
                    v15 = v16;
                    v12 = v34;
                    while (v22 != (char *)24) {
                        // 0x40cc68
                        v1 = v34;
                        v22 = (char *)(v24 + 8);
                        v24 = (int64_t)v22;
                        v25 = *(int64_t *)(*(int64_t *)(v34 + v20) + v24);
                        v26 = 0;
                        v27 = 8 * v24;
                        v28 = v34;
                        v29 = v28;
                        if ((1 << v26 % 64 & v25) != 0) {
                            // 0x40cc16
                            v31 = (char *)(v27 + a4);
                            *v31 = 1;
                            v29 = v28;
                            if (v3 != 0) {
                                // 0x40cc24
                                v32 = v27 + 128;
                                v30 = v31;
                                if ((int32_t)v32 < 384) {
                                    // 0x40cc33
                                    v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                    v30 = (char *)((int64_t)v33 + a4);
                                }
                                // 0x40cc42
                                *v30 = 1;
                                v29 = v32 & 0xffffffff;
                            }
                        }
                        // 0x40cc45
                        v34 = v29;
                        v35 = v27 + 1;
                        v26 = v26 + 1 & 0xffffffff;
                        while (8 * (int32_t)v24 + 64 != (int32_t)v35) {
                            // 0x40cc10
                            v27 = v35;
                            v28 = v34;
                            v29 = v28;
                            if ((1 << v26 % 64 & v25) != 0) {
                                // 0x40cc16
                                v31 = (char *)(v27 + a4);
                                *v31 = 1;
                                v29 = v28;
                                if (v3 != 0) {
                                    // 0x40cc24
                                    v32 = v27 + 128;
                                    v30 = v31;
                                    if ((int32_t)v32 < 384) {
                                        // 0x40cc33
                                        v33 = *(int32_t *)(4 * v27 + (int64_t)*__ctype_tolower_loc());
                                        v30 = (char *)((int64_t)v33 + a4);
                                    }
                                    // 0x40cc42
                                    *v30 = 1;
                                    v29 = v32 & 0xffffffff;
                                }
                            }
                            // 0x40cc45
                            v34 = v29;
                            v35 = v27 + 1;
                            v26 = v26 + 1 & 0xffffffff;
                        }
                        // 0x40cc53
                        v14 = v21;
                        v15 = v16;
                        v12 = v34;
                    }
                    goto lab_0x40c91f;
                }
                case 6: {
                    // 0x40caa5
                    v18 = *(int64_t *)v16;
                    if (*v2 < 2) {
                        goto lab_0x40cad6;
                    } else {
                        // 0x40cab5
                        if (*(int64_t *)(v18 + 72) != 0) {
                            goto lab_0x40cb9c;
                        } else {
                            // 0x40cac0
                            if (*(char *)(v18 + 32) % 2 != 0) {
                                goto lab_0x40cb9c;
                            } else {
                                // 0x40cacb
                                if (*(int64_t *)(v18 + 64) != 0) {
                                    goto lab_0x40cb9c;
                                } else {
                                    goto lab_0x40cad6;
                                }
                            }
                        }
                    }
                }
                default: {
                    int64_t v36 = v21 & 253; // 0x40c90a
                    if (v36 == 5) {
                        // break -> 0x40cc74
                        break;
                    }
                    // 0x40c916
                    v14 = v36;
                    v15 = v16;
                    v12 = v13;
                    if (v17 == 2) {
                        int128_t v37 = __asm_movdqa(g16); // 0x40ccf0
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
                        goto lab_0x40cd5f;
                    }
                    goto lab_0x40c91f;
                }
            }
        } else {
            char * v38 = (char *)v16; // 0x40c95f
            int64_t v39 = (int64_t)*v38; // 0x40c95f
            *(char *)(v39 + a4) = 1;
            if (v3 != 0) {
                int32_t v40 = *(int32_t *)(4 * v39 + (int64_t)*__ctype_tolower_loc()); // 0x40c97e
                *(char *)((int64_t)v40 + a4) = 1;
            }
            // 0x40c987
            v14 = v39;
            v15 = v16;
            v12 = v13;
            if ((*v4 & 64) == 0) {
                goto lab_0x40c91f;
            } else {
                // 0x40c992
                v14 = v39;
                v15 = v16;
                v12 = v13;
                if (*v2 < 2) {
                    goto lab_0x40c91f;
                } else {
                    // 0x40c99f
                    v1 = v20;
                    wstr = *v38;
                    int64_t v41 = v19 + 1; // 0x40c9b2
                    int64_t v42 = 1; // 0x40c9ba
                    if (*v5 > v41) {
                        // 0x40c9c0
                        v42 = 1;
                        if ((*(int32_t *)(v16 + 24) & 0x2000ff) == 0x200001) {
                            int64_t v43 = v41; // 0x40ca0e
                            int64_t v44; // bp-311, 0x40c8a0
                            int64_t v45 = &v44; // 0x40c8a0
                            int64_t v46 = v45 + 1; // 0x40ca0a
                            v43++;
                            *(char *)v45 = *(char *)(v16 + 16);
                            while (*v5 > v43) {
                                int64_t v47 = 16 * v43 + v13; // 0x40c9f3
                                v45 = v46;
                                if ((*(int32_t *)(v47 + 8) & 0x2000ff) != 0x200001) {
                                    // break -> 0x40ca1f
                                    break;
                                }
                                v46 = v45 + 1;
                                v43++;
                                *(char *)v45 = *(char *)v47;
                            }
                            // 0x40ca1f
                            v42 = v46 - v6;
                        }
                    }
                    // 0x40ca2a
                    ps = 0;
                    int32_t wc; // bp-324, 0x40c8a0
                    int64_t v48 = function_4069d0(&wc, v6, v42); // 0x40ca45
                    v14 = v42;
                    v15 = v6;
                    v12 = &wc;
                    if (v48 != v42) {
                        goto lab_0x40c91f;
                    } else {
                        uint32_t wc2 = towlower(wc); // 0x40ca57
                        int64_t v49 = wc2; // 0x40ca66
                        int32_t v50 = wcrtomb(&wstr, wc2, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40ca68
                        v14 = v7;
                        v15 = v49;
                        v12 = v6;
                        if (v50 == -1) {
                            goto lab_0x40c91f;
                        } else {
                            int64_t v51 = v11 + 1; // 0x40ca7c
                            *(char *)((int64_t)wstr + a4) = 1;
                            v8 = v7;
                            v9 = v51;
                            v10 = v6;
                            if (v51 >= v49) {
                                // 0x40ca93
                                return result2;
                            }
                            goto lab_0x40c931_2;
                        }
                    }
                }
            }
        }
    }
    if (v17 != 2) {
        // 0x40ca93
    }
  lab_0x40c91f:;
    int64_t v52 = v11 + 1; // 0x40c924
    v8 = v14;
    v9 = v52;
    v10 = v12;
    if (v52 >= v15) {
        // 0x40ca93
        return result2;
    }
    goto lab_0x40c931_2;
  lab_0x40cad6:;
    int64_t * v53 = (int64_t *)(v18 + 40); // 0x40cad9
    int64_t v54 = *v53; // 0x40cad9
    v14 = 6;
    v15 = v16;
    v12 = v13;
    if (v54 >= 0 == (v54 != 0)) {
        int64_t * v55 = (int64_t *)v18; // 0x40caff
        int64_t v56 = 0; // 0x40cae8
        ps = 0;
        int64_t v57 = 4 * v56; // 0x40cb0d
        uint32_t wc3 = *(int32_t *)(*v55 + v57); // 0x40cb15
        int32_t v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps); // 0x40cb19
        int64_t v59 = v7; // 0x40cb22
        int32_t v60; // 0x40cb45
        int64_t v61; // 0x40cb24
        if (v58 != -1) {
            // 0x40cb24
            v61 = wstr;
            *(char *)(v61 + a4) = 1;
            v59 = v61;
            if (v3 != 0) {
                // 0x40cb38
                v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                *(char *)((int64_t)v60 + a4) = 1;
                v59 = v61;
            }
        }
        int64_t v62 = wc3; // 0x40cb15
        int64_t v63 = v59;
        int64_t v64 = v63; // 0x40cb57
        int64_t v65 = v62; // 0x40cb57
        uint32_t wc4; // 0x40cb6d
        int64_t v66; // 0x40cb7c
        int32_t v67; // 0x40cb7e
        if ((*v4 & 64) != 0) {
            // 0x40cb59
            v64 = v63;
            v65 = v62;
            if (*v2 >= 2) {
                // 0x40cb66
                wc4 = towlower(*(int32_t *)(*v55 + v57));
                v66 = wc4;
                v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                v64 = v7;
                v65 = v66;
                if (v67 != -1) {
                    // 0x40cb8d
                    *(char *)((int64_t)wstr + a4) = 1;
                    v64 = v7;
                    v65 = v66;
                }
            }
        }
        // 0x40cae8
        v56++;
        v14 = v64;
        v15 = v65;
        v12 = v6;
        while (v56 < *v53) {
            // 0x40caf6
            ps = 0;
            v57 = 4 * v56;
            wc3 = *(int32_t *)(*v55 + v57);
            v58 = wcrtomb(&wstr, wc3, (struct _TYPEDEF___mbstate_t *)&ps);
            v59 = v7;
            if (v58 != -1) {
                // 0x40cb24
                v61 = wstr;
                *(char *)(v61 + a4) = 1;
                v59 = v61;
                if (v3 != 0) {
                    // 0x40cb38
                    v60 = *(int32_t *)(4 * v61 + (int64_t)*__ctype_tolower_loc());
                    *(char *)((int64_t)v60 + a4) = 1;
                    v59 = v61;
                }
            }
            // 0x40cb4e
            v62 = wc3;
            v63 = v59;
            v64 = v63;
            v65 = v62;
            if ((*v4 & 64) != 0) {
                // 0x40cb59
                v64 = v63;
                v65 = v62;
                if (*v2 >= 2) {
                    // 0x40cb66
                    wc4 = towlower(*(int32_t *)(*v55 + v57));
                    v66 = wc4;
                    v67 = wcrtomb(&wstr, wc4, (struct _TYPEDEF___mbstate_t *)&ps);
                    v64 = v7;
                    v65 = v66;
                    if (v67 != -1) {
                        // 0x40cb8d
                        *(char *)((int64_t)wstr + a4) = 1;
                        v64 = v7;
                        v65 = v66;
                    }
                }
            }
            // 0x40cae8
            v56++;
            v14 = v64;
            v15 = v65;
            v12 = v6;
        }
    }
    goto lab_0x40c91f;
    // 0x40c931
    goto lab_0x40c931_2;
  lab_0x40cb9c:
    // 0x40cb9c
    ps = 0;
    wstr = 0;
    if (function_4069d0(NULL, v7, 1) == -2) {
        // 0x40cbcd
        *(char *)((int64_t)ps + a4) = 1;
    }
    char v68 = ps + 1; // 0x40cbd7
    ps = v68;
    v14 = 1;
    v15 = v7;
    v12 = 0;
    while (v68 != 0) {
        // 0x40cba8
        wstr = 0;
        if (function_4069d0(NULL, v7, 1) == -2) {
            // 0x40cbcd
            *(char *)((int64_t)ps + a4) = 1;
        }
        // 0x40cbd7
        v68 = ps + 1;
        ps = v68;
        v14 = 1;
        v15 = v7;
        v12 = 0;
    }
    goto lab_0x40c91f;
  lab_0x40cd5f:;
    char * v69 = (char *)(result + 56); // 0x40cd64
    *v69 = *v69 | 1;
    // 0x40ca93
    return result;
}
// Address range: 0x40cd80 - 0x40d004
int64_t function_40cd80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = 16 * a3 + a1; // 0x40cd88
    char v2 = *(char *)(v1 + 8); // 0x40cd92
    if (v2 == 7) {
        int64_t v3 = *(int64_t *)(a4 + 8); // 0x40cea8
        int64_t v4 = v3 + a5; // 0x40ceac
        unsigned char v5 = *(char *)v4; // 0x40ceac
        if (v5 < 194) {
            // 0x40cdd0
            return 0;
        }
        uint64_t v6 = *(int64_t *)(a4 + 88); // 0x40ceba
        uint64_t v7 = a5 + 1;
        if (v7 >= v6) {
            // 0x40cdd0
            return 0;
        }
        int64_t v8 = v3 + v7;
        unsigned char v9 = *(char *)v8; // 0x40cecb
        if (v5 < 224) {
            // 0x40cfa3
            if (v9 == -65 || (v9 ^ -128) < 63) {
                // 0x40cdd0
                return 2;
            }
            // 0x40cdd0
            return 0;
        }
        int64_t v10; // 0x40cd80
        if (v5 < 240) {
            // 0x40cee3
            v10 = 3;
            if (v5 == -32 == v9 < 160) {
                // 0x40cdd0
                return 0;
            }
        } else {
            if (v5 < 248) {
                // 0x40cf85
                v10 = 4;
                if (v5 == -16 == v9 < 144) {
                    // 0x40cdd0
                    return 0;
                }
            } else {
                if (v5 < 252) {
                    // 0x40cfbf
                    v10 = 5;
                    if (v5 == -8 == v9 < 136) {
                        // 0x40cdd0
                        return 0;
                    }
                } else {
                    if (v5 >= 254) {
                        // 0x40cdd0
                        return 0;
                    }
                    // 0x40cfe6
                    v10 = 6;
                    if (v5 == -4 == v9 < 132) {
                        // 0x40cdd0
                        return 0;
                    }
                }
            }
        }
        // 0x40cefc
        if (v6 < v10 + a5) {
            // 0x40cdd0
            return 0;
        }
        // 0x40cf09
        if (v9 != -65 && (v9 ^ -128) >= 63) {
            // 0x40cdd0
            return 0;
        }
        int64_t v11 = v8; // 0x40cf2e
        v11++;
        while (v10 + v4 != v11) {
            char v12 = *(char *)v11;
            if (v12 != -65 && (v12 ^ -128) >= 63) {
                // 0x40cdd0
                return 0;
            }
            v11++;
        }
        // 0x40cdd0
        return v10 & 0xffffffff;
    }
    // 0x40cda1
    if (*(int32_t *)(a4 + 144) == 1) {
        // 0x40cdd0
        return 0;
    }
    int64_t v13 = function_4085b0(a4, a5); // 0x40cdb6
    int64_t v14 = v13 & 0xffffffff; // 0x40cdbb
    if (v2 == 5) {
        if ((int32_t)v13 < 2) {
            // 0x40cdd0
            return 0;
        }
        if ((a5 & 64) == 0) {
            // 0x40cdec
            if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 10) {
                // 0x40cdd0
                return 0;
            }
        }
        // 0x40cdf7
        if ((char)a5 > -1) {
            // 0x40cdd0
            return v14 & 0xffffffff;
        }
        // 0x40cdfb
        if (*(char *)(*(int64_t *)(a4 + 8) + a5) == 0) {
            // 0x40cdd0
            return 0;
        }
        // 0x40cdd0
        return v14 & 0xffffffff;
    }
    if (v2 == 6 != (int32_t)v13 > 1) {
        // 0x40cdd0
        return 0;
    }
    int64_t v15 = *(int64_t *)v1; // 0x40ce10
    int64_t * v16 = (int64_t *)(v15 + 64); // 0x40ce13
    int64_t v17 = *v16; // 0x40ce13
    int64_t v18 = *(int64_t *)(v15 + 40); // 0x40ce17
    if (v17 != 0) {
        goto lab_0x40ce2d;
    } else {
        // 0x40ce20
        if ((*(int64_t *)(v15 + 72) || v18) == 0) {
            goto lab_0x40cf6d;
        } else {
            goto lab_0x40ce2d;
        }
    }
  lab_0x40ce92_2:
    // 0x40ce92
    if (*(char *)(v15 + 32) % 2 == 0) {
        // 0x40cdd0
        return v14 & 0xffffffff;
    }
    // 0x40cdd0
    return 0;
  lab_0x40ce2d:;
    uint32_t wc = *(int32_t *)(*(int64_t *)(a4 + 16) + 4 * a5); // 0x40ce31
    if (v18 < 1) {
        goto lab_0x40ce5f;
    } else {
        int64_t v19 = *(int64_t *)v15; // 0x40ce3a
        if (*(int32_t *)v19 == wc) {
            goto lab_0x40ce92_2;
        } else {
            int64_t v20 = 1; // 0x40ce56
            while (v18 != v20) {
                // 0x40ce50
                if (*(int32_t *)(4 * v20 + v19) == wc) {
                    goto lab_0x40ce92_2;
                }
                v20++;
            }
            goto lab_0x40ce5f;
        }
    }
  lab_0x40ce5f:;
    int64_t * v21 = (int64_t *)(v15 + 72); // 0x40ce5f
    int64_t v22 = v17; // 0x40ce66
    if (*v21 < 1) {
        goto lab_0x40cf3c;
    } else {
        int64_t v23 = 0; // 0x40ce70
        int64_t v24 = *(int64_t *)(v15 + 24); // 0x40ce7e
        while (iswctype(wc, (int32_t)*(int64_t *)(v24 + 8 * v23)) == 0) {
            // 0x40ce70
            v23++;
            if (v23 >= *v21) {
                // 0x40cf38
                v22 = *v16;
                goto lab_0x40cf3c;
            }
            v24 = *(int64_t *)(v15 + 24);
        }
        goto lab_0x40ce92_2;
    }
  lab_0x40cf6d:
    // 0x40cf6d
    if (*(char *)(v15 + 32) % 2 != 0) {
        // 0x40cdd0
        return v14 & 0xffffffff;
    }
    // 0x40cdd0
    return 0;
  lab_0x40cf3c:
    // 0x40cf3c
    if (v22 >= 1) {
        int64_t v25 = 0; // 0x40cf47
        int64_t v26 = 4 * v25; // 0x40cf50
        if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
            // 0x40cf56
            if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                goto lab_0x40ce92_2;
            }
        }
        // 0x40cf64
        v25++;
        while (v25 != v22) {
            // 0x40cf50
            v26 = 4 * v25;
            if (*(int32_t *)(v26 + *(int64_t *)(v15 + 8)) <= wc) {
                // 0x40cf56
                if (*(int32_t *)(*(int64_t *)(v15 + 16) + v26) >= wc) {
                    goto lab_0x40ce92_2;
                }
            }
            // 0x40cf64
            v25++;
        }
    }
    goto lab_0x40cf6d;
}
// Address range: 0x40d010 - 0x40d72f
int64_t function_40d010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    // 0x40d010
    int128_t v1; // 0x40d010
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 152); // 0x40d031
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x40d038
    int64_t v5 = *v4; // 0x40d038
    int64_t v6 = *(int64_t *)(*(int64_t *)v3 + 16 * a3); // 0x40d049
    int32_t * v7 = (int32_t *)(a1 + 224); // 0x40d05b
    int32_t result = 0; // bp-128, 0x40d062
    int64_t v8 = (int64_t)*v7 + a6; // 0x40d06a
    int64_t * v9; // 0x40d010
    int64_t v10; // 0x40d010
    if (v8 < v5) {
        // 0x40d010
        v9 = (int64_t *)(a2 + 16);
        v10 = a2;
    } else {
        int64_t v11 = v8 + 1; // 0x40d660
        if (0x7fffffffffffffff - v5 < v11) {
            // 0x40d4d6
            return 12;
        }
        uint64_t v12 = v11 + v5; // 0x40d680
        if (v12 >= 0x2000000000000000) {
            // 0x40d4d6
            return 12;
        }
        int64_t * v13 = (int64_t *)(a2 + 16);
        int64_t * mem = realloc((int64_t *)*v13, 8 * (int32_t)v12); // 0x40d69a
        if (mem == NULL) {
            // 0x40d4d6
            return 12;
        }
        int64_t v14 = (int64_t)mem; // 0x40d69a
        *v13 = v14;
        *v4 = v12;
        memset((int64_t *)(8 * v5 + v14), 0, 8 * (int32_t)v11);
        v9 = v13;
        v10 = 0;
    }
    int64_t * v15 = (int64_t *)(a1 + 184); // 0x40d076
    int64_t v16 = *v15; // 0x40d076
    int32_t * v17 = (int32_t *)(a1 + 160); // 0x40d083
    int32_t v18 = *v17; // 0x40d083
    int64_t v19 = *v9; // 0x40d08e
    int64_t * v20 = (int64_t *)(a1 + 72); // 0x40d097
    int64_t v21 = *v20; // 0x40d097
    *v15 = v19;
    int128_t v22; // bp-120, 0x40d010
    int32_t v23; // 0x40d010
    int64_t v24; // 0x40d0cf
    if (v10 == 0) {
        // 0x40d5d0
        *v20 = a4;
        v23 = function_40a330(a1, a4 - 1, v18);
        goto lab_0x40d5e4;
    } else {
        // 0x40d0b2
        *v20 = v10;
        v23 = function_40a330(a1, v10 - 1, v18);
        if (v10 == a4) {
            goto lab_0x40d5e4;
        } else {
            // 0x40d0cf
            v24 = *(int64_t *)(v19 + 8 * v10);
            if (v24 == 0) {
                goto lab_0x40d0e3;
            } else {
                // 0x40d0d8
                if ((*(char *)(v24 + 104) & 64) != 0) {
                    int64_t v25 = function_4096a0((int64_t)&v22, v24 + 8); // 0x40d4ff
                } else {
                    goto lab_0x40d0e3;
                }
            }
        }
    }
  lab_0x40d4b0_2:
    // 0x40d4b0
    free(NULL);
    result = 12;
    int64_t v26; // 0x40d010
    int64_t v27 = v26; // 0x40d4bd
    goto lab_0x40d4c5_2;
  lab_0x40d320_2:
    // 0x40d320
    free(NULL);
    int32_t v52; // bp-124, 0x40d010
    int32_t v53 = v52; // 0x40d332
    result = v53;
    int128_t v54; // 0x40d182
    int128_t v45 = v54; // 0x40d33c
    v27 = v26;
    if (v53 != 0) {
        goto lab_0x40d4c5_2;
    } else {
        goto lab_0x40d3ac;
    }
  lab_0x40d41d_2:
    // 0x40d41d
    free((int64_t *)v26);
    int64_t v55 = *(int64_t *)(*v15 + 8 * a6); // 0x40d437
    int64_t result2; // 0x40d010
    int64_t v33; // 0x40d010
    if (v55 == 0) {
        // 0x40d6f8
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = 1;
    } else {
        // 0x40d444
        *(int64_t *)a2 = v33;
        *v15 = v16;
        *v20 = v21;
        result2 = function_408600(*(int64_t *)(v55 + 16), v55 + 24, a5) == 0;
    }
    // 0x40d4d6
    return result2;
  lab_0x40d1d0:;
    // 0x40d1d0
    int64_t v56; // 0x40d010
    int64_t v57 = v56;
    int64_t v58; // 0x40d010
    if ((char)function_40a420(a1, v57, v58) == 0) {
        goto lab_0x40d20f;
    } else {
        goto lab_0x40d1ed;
    }
  lab_0x40d20f:;
    // 0x40d20f
    int64_t v59; // 0x40d010
    int64_t v60 = v59 + 1; // 0x40d20f
    int64_t * v61; // 0x40d186
    uint64_t v62 = *v61; // 0x40d213
    int64_t v63 = v60; // 0x40d217
    if (v60 >= v62) {
        // break -> 0x40d58d
        goto lab_0x40d58d;
    }
    goto lab_0x40d21d;
  lab_0x40d1ed:;
    // 0x40d1ed
    int64_t * v77; // 0x40d010
    int64_t v92 = *v77; // 0x40d1ed
    int64_t v68; // 0x40d225
    int64_t v93 = *(int64_t *)(v92 + 8 * v68); // 0x40d1fe
    int64_t v94; // 0x40d010
    if ((char)function_406ff0(v94, v93) == 0) {
        goto lab_0x40d4b0_2;
    }
    goto lab_0x40d20f;
  lab_0x40d182:;
    // 0x40d182
    int128_t v40; // 0x40d010
    v54 = __asm_pxor(v40, v40);
    v52 = 0;
    int128_t v83 = __asm_movaps(v54); // bp-88, 0x40d19b
    int64_t v39; // 0x40d010
    if (*(int64_t *)(v39 + 40) >= 1) {
        // 0x40d1b5
        int64_t v88; // 0x40d18b
        int64_t v73 = v88 + 216; // 0x40d1b7
        int64_t * v65 = (int64_t *)(v39 + 48); // 0x40d21d
        int64_t * v67 = (int64_t *)v88; // 0x40d221
        int32_t v95; // 0x40d142
        v58 = v95;
        v77 = (int64_t *)(v88 + 24);
        v63 = 0;
        while (true) {
          lab_0x40d21d:
            // 0x40d21d
            v59 = v63;
            int64_t v64 = *v65; // 0x40d21d
            int64_t v66 = *v67; // 0x40d221
            v68 = *(int64_t *)(v64 + 8 * v59);
            int64_t v69 = 16 * v68; // 0x40d22c
            int64_t v70 = v69 + v66; // 0x40d230
            char v71 = *(char *)(v70 + 10); // 0x40d234
            v56 = v70;
            if ((v71 & 16) == 0) {
                goto lab_0x40d1d0;
            } else {
                int64_t v72 = function_40cd80(v66, v73, v68, a1, v58); // 0x40d249
                int32_t v74 = v72; // 0x40d251
                if (v74 < 2) {
                    if (v74 != 0) {
                        goto lab_0x40d1ed;
                    } else {
                        int64_t v75 = *v67; // 0x40d488
                        v56 = v75 + v69;
                        goto lab_0x40d1d0;
                    }
                } else {
                    int64_t v76 = *v77; // 0x40d265
                    int64_t v78 = *v15; // 0x40d272
                    int64_t v79 = *(int64_t *)(v76 + 8 * v68); // 0x40d27a
                    int64_t v80 = 8 * ((0x100000000 * v72 >> 32) + v58); // 0x40d27e
                    int64_t v81 = *(int64_t *)(v78 + v80); // 0x40d286
                    if (v81 != 0) {
                        int64_t v82 = function_408b40((int64_t *)&v83, (int128_t *)(v81 + 8)); // 0x40d2ac
                        int32_t v84 = v82; // 0x40d2b6
                        v52 = v84;
                        if (v84 != 0) {
                            goto lab_0x40d320_2;
                        }
                    }
                    // 0x40d2be
                    int64_t v85; // 0x40d010
                    if ((char)function_406ff0(v85, v79) == 0) {
                        goto lab_0x40d4b0_2;
                    }
                    int64_t v86 = *v15; // 0x40d2e6
                    int64_t v87 = function_409bb0(&v52, v88, (int64_t *)&v83, v58, v58, a6); // 0x40d2ee
                    *(int64_t *)(v86 + v80) = v87;
                    int64_t v89 = *v15; // 0x40d2f7
                    int64_t v90 = *(int64_t *)(v89 + v80); // 0x40d2ff
                    int32_t v91 = v52; // 0x40d30a
                    if (v90 == 0 && v91 != 0) {
                        goto lab_0x40d320_2;
                    }
                    goto lab_0x40d1ed;
                }
            }
        }
    }
  lab_0x40d58d:
    // 0x40d58d
    free(NULL);
    result = 0;
    v45 = v54;
    goto lab_0x40d3ac;
  lab_0x40d3ac:;
    // 0x40d3ac
    int64_t v42; // 0x40d010
    int64_t v96 = function_40a330(a1, (int64_t)((int32_t)v42 - 1), *v17); // 0x40d3bb
    int64_t v97 = function_4098b0((int128_t *)&result, v3, (int64_t *)&v22, (int32_t)v96); // 0x40d3d4
    int64_t v98; // 0x40d010
    int64_t v41; // 0x40d010
    int64_t v99; // 0x40d010
    int64_t v43; // 0x40d132
    if (v97 == 0) {
        // 0x40d5a0
        v27 = v26;
        if (result != 0) {
            // break -> 0x40d4c5
            goto lab_0x40d4c5_2;
        }
        int64_t v100 = *v15; // 0x40d5ac
        *(int64_t *)(v100 + v43) = 0;
        v99 = v41 + 1;
        v98 = v100;
    } else {
        int64_t v101 = *v15; // 0x40d3e5
        *(int64_t *)(v101 + v43) = v97;
        v99 = 0;
        v98 = v101;
    }
    // 0x40d3ff
    v33 = v42;
    if (v42 >= a6) {
        goto lab_0x40d41d_2;
    }
    int64_t v34 = v99; // 0x40d417
    int128_t v35 = v45; // 0x40d417
    int64_t v36 = v98; // 0x40d417
    int64_t v37 = v42; // 0x40d417
    int64_t v38 = v97; // 0x40d417
    v33 = v42;
    if (v99 > (int64_t)*v7) {
        goto lab_0x40d41d_2;
    }
    goto lab_0x40d12e;
  lab_0x40d5e4:
    // 0x40d5e4
    v22 = 1;
    int64_t * mem2 = malloc(8); // 0x40d601
    if (mem2 == NULL) {
        // 0x40d4d6
        return 12;
    }
    int64_t v102 = (int64_t)mem2; // 0x40d601
    *mem2 = a3;
    int32_t v103 = 0x100000000 * a7 >> 32;
    result = 0;
    int32_t v104 = function_408f70(v3, (int64_t *)&v22, v6, v103); // 0x40d646
    result = v104;
    v27 = v102;
    if (v104 == 0) {
        goto lab_0x40d522;
    } else {
        goto lab_0x40d4c5_2;
    }
  lab_0x40d522:;
    int32_t v105 = function_409e50(a1, &v22, a4, v6, v103); // 0x40d53d
    result = v105;
    v27 = v102;
    int64_t v51 = a4; // 0x40d543
    int64_t v50 = v102; // 0x40d543
    int32_t v49 = v23; // 0x40d543
    if (v105 != 0) {
        goto lab_0x40d4c5_2;
    } else {
        goto lab_0x40d545;
    }
  lab_0x40d4c5_2:
    // 0x40d4c5
    free((int64_t *)v27);
    // 0x40d4d6
    return result;
  lab_0x40d0e3:;
    int128_t v28 = __asm_pxor(v2, v2); // 0x40d0ef
    v22 = __asm_movaps(v28);
    int64_t v29 = 0; // 0x40d0f3
    int128_t v30 = v28; // 0x40d0f3
    int64_t v31 = v10; // 0x40d0f3
    int64_t v32 = v24; // 0x40d0f3
    goto lab_0x40d0fb;
  lab_0x40d545:;
    int64_t v48 = function_4098b0((int128_t *)&result, v3, (int64_t *)&v22, v49); // 0x40d555
    v27 = v50;
    if (v48 != 0 || result == 0) {
        // 0x40d566
        *(int64_t *)(*v15 + 8 * v51) = v48;
        v29 = v50;
        v31 = v51;
        v32 = v48;
        goto lab_0x40d0fb;
    } else {
        goto lab_0x40d4c5_2;
    }
  lab_0x40d0fb:
    // 0x40d0fb
    v26 = v29;
    v33 = v31;
    if (v31 < a6) {
        // 0x40d106
        v33 = v31;
        if (*v7 < 0) {
            goto lab_0x40d41d_2;
        } else {
            // 0x40d116
            v34 = 0;
            v35 = v30;
            v36 = *v15;
            v37 = v31;
            v38 = v32;
            while (true) {
              lab_0x40d12e:
                // 0x40d12e
                v39 = v38;
                v40 = v35;
                v41 = v34;
                v42 = v37 + 1;
                v43 = 8 * v42;
                int64_t v44 = *(int64_t *)(v43 + v36); // 0x40d132
                if (v44 == 0) {
                    // 0x40d498
                    v45 = v40;
                    if (v39 != 0) {
                        goto lab_0x40d182;
                    } else {
                        goto lab_0x40d3ac;
                    }
                } else {
                    int64_t v46 = function_408b40((int64_t *)&v22, (int128_t *)(v44 + 8)); // 0x40d168
                    int32_t v47 = v46; // 0x40d16d
                    result = v47;
                    v27 = v26;
                    if (v47 != 0) {
                        // break -> 0x40d4c5
                        break;
                    }
                    // 0x40d179
                    v45 = v40;
                    if (v39 == 0) {
                        goto lab_0x40d3ac;
                    } else {
                        goto lab_0x40d182;
                    }
                }
            }
            goto lab_0x40d4c5_2;
        }
    } else {
        goto lab_0x40d41d_2;
    }
}
// Address range: 0x40d730 - 0x40dff3
int64_t function_40d730(int64_t a1, int64_t * a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x40d730
    int128_t v1; // 0x40d730
    int128_t v2 = v1;
    int64_t v3 = 0; // bp-88, 0x40d754
    int64_t v4 = 0; // 0x40d776
    if ((char)a5 != 0) {
        int64_t * mem = malloc(96); // 0x40d785
        v4 = &v3;
        if (mem == NULL) {
            // 0x40da99
            return 12;
        }
    }
    int128_t v5 = __asm_pxor(v2, v2); // 0x40d7a5
    int64_t v6 = 0; // bp-104, 0x40d7a9
    int128_t v7 = __asm_movaps(v5); // bp-120, 0x40d7b1
    uint64_t v8 = 16 * a3; // 0x40d7c3
    int32_t size = v8; // 0x40d7c7
    int64_t result; // 0x40d730
    int64_t v9; // 0x40d730
    char v10; // 0x40d730
    if (v8 < 4031) {
        // 0x40d7da
        v10 = 0;
        int64_t v11; // bp-216, 0x40d730
        v9 = (int64_t)&v11 + -1 - v8 & -16;
    } else {
        int64_t * mem2 = malloc(size); // 0x40df17
        v10 = 1;
        v9 = (int64_t)mem2;
        if (mem2 == NULL) {
            // 0x40df33
            result = 12;
            if (v4 != 0) {
                // 0x40df43
                function_40bd60(v4);
                result = 12;
            }
          lab_0x40da99:
            // 0x40da99
            return result;
        }
    }
    int64_t * v12 = (int64_t *)v9; // 0x40d809
    int64_t * v13 = (int64_t *)a4; // 0x40d809
    memcpy(v12, v13, size);
    int64_t v14 = a4; // bp-128, 0x40d81a
    int64_t * v15 = (int64_t *)(a4 + 8); // 0x40d909
    int64_t v16 = *v15; // 0x40d909
    if (v16 < a4) {
      lab_0x40da70_2:
        // 0x40da70
        free((int64_t *)v6);
        if (v10 != 0) {
            // 0x40df4d
            free(v12);
            if (v4 == 0) {
                // 0x40da99
                return 0;
            }
        } else {
            // 0x40da86
            if (v4 == 0) {
                // 0x40da99
                return 0;
            }
        }
        // 0x40da92
        function_40bd60(v4);
        // 0x40da99
        return 0;
    }
    int64_t v17 = (int64_t)a2;
    int64_t v18 = v4 + 16;
    int64_t v19 = &v7;
    int64_t * v20 = (int64_t *)(v17 + 184);
    int64_t * v21 = (int64_t *)v4;
    int64_t * v22 = (int64_t *)(v4 + 8);
    int64_t * v23 = (int64_t *)v18;
    int64_t v24 = v16; // 0x40d909
    int64_t v25 = *(int64_t *)(a1 + 144); // 0x40d730
    int64_t v26 = a4; // 0x40d905
    int64_t v27; // 0x40d730
    int64_t v28; // 0x40d730
    int64_t v29; // 0x40d730
    int64_t v30; // 0x40d730
    int64_t v31; // 0x40d730
    int64_t v32; // 0x40d730
    int64_t v33; // 0x40d730
    int64_t v34; // 0x40d730
    int64_t v35; // 0x40d730
    int64_t v36; // 0x40d923
    int64_t v37; // 0x40dac8
    while (true) {
        // 0x40d916
        int64_t v38; // 0x40d730
        v34 = v38;
        v28 = v24;
        v31 = v26;
        v29 = v25;
        while (true) {
          lab_0x40d916:
            // 0x40d916
            v30 = v29;
            v32 = v31;
            int64_t v39 = v28;
            v35 = v34;
            v36 = 16 * v30;
            int64_t v40 = v36 + a1; // 0x40d92a
            char v41 = *(char *)(v40 + 8); // 0x40d92d
            if (v41 != 8) {
                // 0x40d830
                v27 = v39;
                if (v41 == 9) {
                    int64_t v42 = *(int64_t *)v40 + 1; // 0x40dab3
                    v27 = v39;
                    if (v42 < a3) {
                        int64_t v43 = 16 * v42; // 0x40dac4
                        v37 = v43 + a4;
                        if (*(int64_t *)v37 < v32) {
                            // 0x40de40
                            *(int64_t *)(v37 + 8) = v32;
                            memcpy(v12, v13, size);
                            v27 = *v15;
                            goto lab_0x40d839;
                        } else {
                            // 0x40dad6
                            if ((*(char *)(v40 + 10) & 8) == 0) {
                                goto lab_0x40daee;
                            } else {
                                // 0x40dadc
                                if (*(int64_t *)(v43 + v9) != -1) {
                                    // 0x40de80
                                    memcpy(v13, v12, size);
                                    int64_t v44 = *v15; // 0x40de9d
                                    v27 = v44;
                                    goto lab_0x40d839;
                                } else {
                                    goto lab_0x40daee;
                                }
                            }
                        }
                    } else {
                        goto lab_0x40d839;
                    }
                } else {
                    goto lab_0x40d839;
                }
            } else {
                int64_t v45 = *(int64_t *)v40 + 1; // 0x40d93d
                v27 = v39;
                if (v45 < a3) {
                    int64_t v46 = 16 * v45 + a4; // 0x40d952
                    *(int64_t *)(v46 + 8) = -1;
                    *(int64_t *)v46 = v32;
                    v27 = *v15;
                }
                goto lab_0x40d839;
            }
        }
      lab_0x40d905_2:
        // 0x40d905
        v26 = v14;
        v24 = *v15;
        v38 = v33;
        if (v24 < v26) {
            goto lab_0x40da70_2;
        }
    }
  lab_0x40de00_3:
    // 0x40de00
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40df70
        free(v12);
        goto lab_0x40de16;
    } else {
        goto lab_0x40de16;
    }
  lab_0x40dd0a_3:
    // 0x40dd0a
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40dfe2
        free(v12);
        // 0x40dd20
        function_40bd60(v4);
        result = 0;
        return result;
    } else {
        // 0x40dd20
        function_40bd60(v4);
        result = 0;
        return result;
    }
  lab_0x40d839:;
    int64_t v47 = v30; // 0x40d83c
    int64_t v48 = v36; // 0x40d83c
    if (v32 == v27) {
        // 0x40d83e
        v47 = v30;
        v48 = v36;
        if (*(int64_t *)(v17 + 176) == v30) {
            if (v4 == 0) {
                // 0x40dfb9
                free((int64_t *)v6);
                result = 0;
                if (v10 == 0) {
                    return result;
                } else {
                    // 0x40dfcf
                    free(v12);
                    result = (int32_t)&g88 ^ (int32_t)&g88;
                    return result;
                }
            }
            int64_t v49 = a4; // 0x40dce0
            int64_t v50 = 0; // 0x40dce0
            if (a3 == 0) {
                goto lab_0x40dd0a_3;
            }
            int64_t v51; // 0x40d730
            while (true) {
                // 0x40dcf0
                v51 = v50;
                int64_t v52 = v49;
                if (*(int64_t *)v52 >= 0) {
                    // 0x40dcf6
                    if (*(int64_t *)(v52 + 8) == -1) {
                        // break -> 0x40dd38
                        break;
                    }
                }
                // 0x40dcfd
                v50 = v51 + 1;
                v49 = v52 + 16;
                if (v50 == a3) {
                    goto lab_0x40dd0a_3;
                }
            }
            if (v51 == a3) {
                goto lab_0x40dd0a_3;
            }
            int64_t v53 = function_40bdb0(v4, v18, &v14, a3, a4, &v7); // 0x40dd5e
            v47 = v53;
            v48 = 16 * v53;
        }
    }
    int64_t v54 = v48;
    int64_t v55 = v47;
    int64_t v56 = *(int64_t *)(v17 + 152); // 0x40d84c
    int64_t * v57 = (int64_t *)v56; // 0x40d854
    int64_t v58 = *v57; // 0x40d854
    int64_t v59 = v58 + v54; // 0x40d857
    char v60 = *(char *)(v59 + 8); // 0x40d85b
    int64_t v61; // 0x40d730
    int64_t v62; // 0x40d730
    int64_t v63; // 0x40d730
    int64_t v64; // 0x40d730
    int64_t v65; // 0x40d730
    int64_t v66; // 0x40d730
    int64_t v67; // 0x40d730
    int64_t v68; // 0x40d730
    int64_t v69; // 0x40d730
    int64_t v70; // 0x40d730
    int64_t v71; // 0x40d730
    int64_t v72; // 0x40d730
    int64_t v73; // 0x40dbfe
    int64_t v74; // 0x40d9e0
    if ((v60 & 8) != 0) {
        int64_t v75 = *(int64_t *)(8 * v14 + *v20); // 0x40d983
        if ((char)function_406ff0(v19, v55) == 0) {
            // break (via goto) -> 0x40de00
            goto lab_0x40de00_3;
        }
        int64_t v76 = *(int64_t *)(v56 + 40) + 24 * v55; // 0x40d996
        int64_t v77 = *(int64_t *)(v76 + 8); // 0x40d9ae
        v71 = v35;
        if (v77 < 1) {
            goto lab_0x40da2a;
        } else {
            // 0x40d9b7
            v61 = -1;
            int64_t v78 = 0;
            v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
            int64_t v79 = v61; // 0x40d9f5
            int64_t v80; // 0x40dc05
            int64_t v81; // 0x40d730
            int64_t * mem3; // 0x40ded2
            int64_t v82; // 0x40ded2
            int64_t v83; // 0x40dbe0
            if (function_408600(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                // 0x40d9f7
                v79 = v74;
                if (v61 != -1) {
                    // 0x40dbc8
                    v83 = function_408600(v35, (int64_t)&v6, v61);
                    v69 = v35;
                    v63 = v83 != 0 ? v74 : v61;
                    if (v4 == 0 || v83 != 0) {
                        goto lab_0x40d8fc;
                    } else {
                        // 0x40dbfe
                        v73 = *v21;
                        v80 = v73 + 1;
                        *v21 = v80;
                        v81 = *v23;
                        v62 = v81;
                        if (v80 == *v22) {
                            // 0x40deb8
                            mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                            if (mem3 == NULL) {
                                goto lab_0x40dc70;
                            } else {
                                // 0x40dee0
                                v82 = (int64_t)mem3;
                                *v22 = 2 * *v22;
                                *v23 = v82;
                                v62 = v82;
                                goto lab_0x40dc1a;
                            }
                        } else {
                            goto lab_0x40dc1a;
                        }
                    }
                }
            }
            int64_t v84 = v79;
            int64_t v85 = v78 + 1; // 0x40da04
            while (v77 != v85) {
                // 0x40d9e0
                v61 = v84;
                v78 = v85;
                v74 = *(int64_t *)(8 * v78 + *(int64_t *)(v76 + 16));
                v79 = v61;
                if (function_408600(*(int64_t *)(v75 + 16), v75 + 24, v74) != 0) {
                    // 0x40d9f7
                    v79 = v74;
                    if (v61 != -1) {
                        // 0x40dbc8
                        v83 = function_408600(v35, (int64_t)&v6, v61);
                        v69 = v35;
                        v63 = v83 != 0 ? v74 : v61;
                        if (v4 == 0 || v83 != 0) {
                            goto lab_0x40d8fc;
                        } else {
                            // 0x40dbfe
                            v73 = *v21;
                            v80 = v73 + 1;
                            *v21 = v80;
                            v81 = *v23;
                            v62 = v81;
                            if (v80 == *v22) {
                                // 0x40deb8
                                mem3 = realloc((int64_t *)v81, 96 * (int32_t)v80);
                                if (mem3 == NULL) {
                                    goto lab_0x40dc70;
                                } else {
                                    // 0x40dee0
                                    v82 = (int64_t)mem3;
                                    *v22 = 2 * *v22;
                                    *v23 = v82;
                                    v62 = v82;
                                    goto lab_0x40dc1a;
                                }
                            } else {
                                goto lab_0x40dc1a;
                            }
                        }
                    }
                }
                // 0x40da04
                v84 = v79;
                v85 = v78 + 1;
            }
            // 0x40da0d
            v33 = v35;
            v25 = v84;
            v70 = v35;
            v64 = v84;
            if (v84 >= 0) {
                // break -> 0x40d905
                goto lab_0x40d905_2;
            }
            goto lab_0x40da20;
        }
    } else {
        // 0x40d867
        if ((*(char *)(v59 + 10) & 16) != 0) {
            int64_t v86 = 0x100000000 * function_40cd80(v58, v56 + 216, v55, v17, v14);
            v67 = v86 >> 32;
            if (v86 != 0) {
                goto lab_0x40dcb9;
            } else {
                // 0x40db29
                v65 = v14;
                v68 = *v57 + v54;
                goto lab_0x40d87d;
            }
        } else {
            if (v60 == 4) {
                int64_t v87 = a4 + 16 + 16 * *(int64_t *)v59; // 0x40db4b
                int64_t v88 = *(int64_t *)(v87 + 8); // 0x40db4e
                int64_t v89 = *(int64_t *)v87; // 0x40db52
                int64_t n = v88 - v89; // 0x40db58
                if (v4 == 0) {
                    // 0x40dcb0
                    v67 = n;
                    if (n == 0) {
                        goto lab_0x40dd78;
                    } else {
                        goto lab_0x40dcb9;
                    }
                } else {
                    // 0x40db69
                    v72 = v35;
                    if (v88 == -1 || v89 == -1) {
                        goto lab_0x40da38;
                    } else {
                        if (n == 0) {
                            goto lab_0x40dd78;
                        } else {
                            int64_t v90 = *(int64_t *)(v17 + 8); // 0x40db86
                            int32_t memcmp_rc = memcmp((int64_t *)(v90 + v89), (int64_t *)(v14 + v90), (int32_t)n); // 0x40dba0
                            v72 = v35;
                            v66 = n;
                            if (memcmp_rc != 0) {
                                goto lab_0x40da38;
                            } else {
                                goto lab_0x40dbb4;
                            }
                        }
                    }
                }
            } else {
                // 0x40d879
                v65 = v14;
                v68 = v59;
                goto lab_0x40d87d;
            }
        }
    }
  lab_0x40da2a:
    // 0x40da2a
    v72 = v71;
    if (v4 == 0) {
        // 0x40df81
        free((int64_t *)v6);
        result = 1;
        if (v10 == 0) {
            return result;
        } else {
            // 0x40df9c
            free(v12);
            result = 1;
            return result;
        }
    }
    goto lab_0x40da38;
  lab_0x40daee:
    // 0x40daee
    *(int64_t *)(v37 + 8) = v32;
    v27 = *v15;
    goto lab_0x40d839;
  lab_0x40da38:;
    int64_t v91 = function_40bdb0(v4, v18, &v14, a3, a4, &v7); // 0x40da55
    int64_t v92 = *v15; // 0x40da61
    v34 = v72;
    v28 = v92;
    v31 = v14;
    v29 = v91;
    if (v92 < v14) {
        goto lab_0x40da70_2;
    }
    goto lab_0x40d916;
  lab_0x40da20:
    // 0x40da20
    v71 = v70;
    if (v64 == -2) {
        // break (via goto) -> 0x40de00
        goto lab_0x40de00_3;
    }
    goto lab_0x40da2a;
  lab_0x40dcb9:
    // 0x40dcb9
    v66 = v67;
    goto lab_0x40dbb4;
  lab_0x40dbb4:;
    int64_t v93 = v14 + v66; // 0x40dbc0
    goto lab_0x40d8aa;
  lab_0x40d87d:
    // 0x40d87d
    if ((char)function_40a420(v17, v68, v65) == 0) {
        goto lab_0x40da2a;
    } else {
        // 0x40d89e
        v93 = v65 + 1;
        goto lab_0x40d8aa;
    }
  lab_0x40d8aa:;
    int64_t v94 = v93;
    int64_t v95 = *(int64_t *)(*(int64_t *)(v56 + 24) + 8 * v55);
    v14 = v94;
    v69 = 0;
    v63 = v95;
    if (v4 == 0) {
        goto lab_0x40d8fc;
    } else {
        // 0x40d8b8
        v72 = v35;
        if (v94 > *(int64_t *)(v17 + 168)) {
            goto lab_0x40da38;
        } else {
            int64_t v96 = *(int64_t *)(*v20 + 8 * v94); // 0x40d8ce
            v72 = v35;
            if (v96 == 0) {
                goto lab_0x40da38;
            } else {
                int64_t v97 = function_408600(*(int64_t *)(v96 + 16), v96 + 24, v95); // 0x40d8e6
                v69 = 0;
                v63 = v95;
                v72 = v35;
                if (v97 == 0) {
                    goto lab_0x40da38;
                } else {
                    goto lab_0x40d8fc;
                }
            }
        }
    }
  lab_0x40dd78:
    // 0x40dd78
    if ((char)function_406ff0(v19, v55) == 0) {
        // break (via goto) -> 0x40de00
        goto lab_0x40de00_3;
    }
    int64_t v98 = v14; // 0x40dd97
    int64_t v99 = *(int64_t *)(24 * v55 + 16 + *(int64_t *)(v56 + 40)); // 0x40dda6
    int64_t v100 = *(int64_t *)v99; // 0x40ddaa
    int64_t v101 = *(int64_t *)(*v20 + 8 * v98); // 0x40ddb5
    int64_t v102 = function_408600(*(int64_t *)(v101 + 16), v101 + 24, v100); // 0x40ddc4
    v69 = v35;
    v63 = v100;
    if (v102 != 0) {
        goto lab_0x40d8fc;
    } else {
        // 0x40ddd2
        v65 = v98;
        v68 = *v57 + v54;
        goto lab_0x40d87d;
    }
  lab_0x40d8fc:
    // 0x40d8fc
    v33 = v69;
    v25 = v63;
    v70 = v69;
    v64 = v63;
    if (v63 >= 0) {
        // break -> 0x40d905
        goto lab_0x40d905_2;
    }
    goto lab_0x40da20;
  lab_0x40de16:
    // 0x40de16
    if (v4 != 0) {
      lab_0x40dc86:
        // 0x40dc86
        function_40bd60(v4);
        return 12;
    }
    // 0x40da99
    return 12;
  lab_0x40dc1a:;
    int64_t v103 = v62 + 48 * v73; // 0x40dc22
    *(int64_t *)(v103 + 8) = v74;
    *(int64_t *)v103 = v14;
    int64_t * mem4 = malloc(size); // 0x40dc36
    *(int64_t *)(v103 + 16) = (int64_t)mem4;
    if (mem4 == NULL) {
        goto lab_0x40dc70;
    } else {
        // 0x40dc44
        memcpy(mem4, v13, size);
        v69 = v35;
        v63 = v61;
        if ((int32_t)function_4096a0(v103 + 24, v19) == 0) {
            goto lab_0x40d8fc;
        } else {
            goto lab_0x40dc70;
        }
    }
  lab_0x40dc70:
    // 0x40dc70
    free((int64_t *)v6);
    if (v10 != 0) {
        // 0x40df70
        free(v12);
        goto lab_0x40de16;
    } else {
        goto lab_0x40dc86;
    }
}
// Address range: 0x40e000 - 0x40e196
int64_t function_40e000(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a3 + 16; // 0x40e014
    int64_t * v2 = (int64_t *)(a3 + 8); // 0x40e027
    int64_t result = function_40d010(a1, v1, a3, *v2, a4, a5, 8); // 0x40e030
    if ((int32_t)result != 0) {
        // 0x40e03b
        return result;
    }
    int64_t v3 = *v2; // 0x40e050
    int64_t * v4 = (int64_t *)(a1 + 200); // 0x40e054
    uint64_t v5 = *v4; // 0x40e054
    int64_t * v6 = (int64_t *)(a1 + 208); // 0x40e05b
    uint64_t v7 = *v6; // 0x40e05b
    int64_t * v8 = (int64_t *)(a1 + 216); // 0x40e066
    int64_t v9 = *v8; // 0x40e066
    int64_t v10 = v5; // 0x40e073
    int64_t v11 = v9; // 0x40e073
    if (v5 >= v7) {
        int64_t * mem = realloc((int64_t *)v9, 80 * (int32_t)v7); // 0x40e11d
        if (mem == NULL) {
            // 0x40e180
            free((int64_t *)*v8);
            // 0x40e03b
            return 12;
        }
        int64_t v12 = (int64_t)mem; // 0x40e11d
        *v8 = v12;
        memset((int64_t *)(40 * *v4 + v12), 0, 40 * (int32_t)*v6);
        *v6 = 2 * *v6;
        v10 = *v4;
        v11 = *v8;
    }
    int64_t v13 = 40 * v10; // 0x40e07d
    int64_t v14; // 0x40e000
    if (v10 < 1) {
        // 0x40e079
        v14 = v11 + v13;
    } else {
        int64_t v15 = v13 + v11;
        v14 = v15;
        if (*(int64_t *)(v15 - 32) == a5) {
            // 0x40e100
            *(char *)(v15 - 8) = 1;
            v14 = v15;
        }
    }
    // 0x40e091
    *(int64_t *)v14 = a4;
    *(int64_t *)(v14 + 8) = a5;
    *(int16_t *)(v14 + 34) = (int16_t)(v3 == v1);
    *(int64_t *)(v14 + 16) = v1;
    *(int64_t *)(v14 + 24) = v3;
    *v4 = v10 + 1;
    *(char *)(v14 + 32) = 0;
    int32_t * v16 = (int32_t *)(a1 + 224); // 0x40e0c3
    if (v3 - v1 > (int64_t)*v16) {
        // 0x40e0d2
        *v16 = (int32_t)v3 - (int32_t)v1;
    }
    // 0x40e0dc
    return function_407bd0(a1, 0);
}
// Address range: 0x40e1a0 - 0x40ea12
int64_t function_40e1a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40e1a0
    if (a2 >= 0 != a2 != 0) {
        // 0x40e62b
        return 0;
    }
    // 0x40e239
    int64_t v1; // bp-232, 0x40e1a0
    int64_t v2 = &v1; // 0x40e1ad
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x40e23e
    int64_t * v4 = (int64_t *)(v2 + 56); // 0x40e24a
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
    int64_t v29 = *v3; // 0x40e225
    int64_t v30 = *(int64_t *)(a1 + 72); // 0x40e1a0
    int64_t v31; // 0x40e1a0
    int64_t v32; // 0x40e246
    int64_t v33; // 0x40e255
    uint32_t v34; // 0x40e262
    int64_t v35; // 0x40e262
    uint64_t v36; // 0x40e27d
    while (true) {
      lab_0x40e239:
        // 0x40e239
        v31 = v30;
        v32 = *(int64_t *)(*(int64_t *)*(int64_t *)(v2 + 72) + 8 * v29);
        v33 = 16 * v32;
        int64_t v37 = (v33 | 8) + *(int64_t *)*v4; // 0x40e25c
        v30 = v31;
        if (*(char *)v37 != 4) {
            goto lab_0x40e220_3;
        } else {
            // 0x40e262
            v34 = *(int32_t *)v37;
            if ((v34 & 0x3ff00) == 0) {
                goto lab_0x40e2b0;
            } else {
                // 0x40e26d
                v35 = v34;
                v36 = function_40a330(a1, v31, *v5);
                if ((v35 & 1024) != 0) {
                    // 0x40e1f0
                    v30 = v31;
                    if (v36 % 2 == 0) {
                        goto lab_0x40e220_3;
                    } else {
                        // 0x40e1f4
                        v30 = v31;
                        if ((v35 & 2048) != 0) {
                            goto lab_0x40e220_3;
                        } else {
                            goto lab_0x40e1f9;
                        }
                    }
                } else {
                    // 0x40e294
                    v30 = v31;
                    if ((v35 & 2048) == 0 || v36 % 2 == 0) {
                        goto lab_0x40e1f9;
                    } else {
                        goto lab_0x40e220_3;
                    }
                }
            }
        }
    }
  lab_0x40e62b_7:;
    // 0x40e62b
    int64_t result; // 0x40e1a0
    return result;
  lab_0x40e378:;
    int64_t v38 = *(int64_t *)(a1 + 152); // 0x40e378
    int64_t v39 = *(int64_t *)v38; // 0x40e387
    *v9 = v38;
    *v10 = *(int64_t *)(v39 + v33);
    int64_t v40; // 0x40e1a0
    int64_t v41; // 0x40e1a0
    int64_t v42; // 0x40e1a0
    int64_t v43; // 0x40e1a0
    int64_t v44; // 0x40e1a0
    int64_t v45; // 0x40e1a0
    int64_t v46; // 0x40e1a0
    int64_t v47; // 0x40e1a0
    int64_t v48; // 0x40e1a0
    int64_t v49; // 0x40e1a0
    int64_t v50; // 0x40e1a0
    int64_t v51; // 0x40e1a0
    int64_t v52; // 0x40e1a0
    int64_t v53; // 0x40e1a0
    int64_t v54; // 0x40e2b0
    int64_t v55; // 0x40e3cc
    int64_t * v56; // 0x40e3d0
    int64_t * v57; // 0x40e640
    int64_t * v58; // 0x40e645
    int64_t v59; // 0x40e400
    if (*v8 < 1) {
        // 0x40e34f
        *v23 = 0;
        v30 = v31;
        goto lab_0x40e220_3;
    } else {
        // 0x40e39a
        *v12 = v31;
        *v13 = 0;
        *v14 = *v11;
        *v15 = v32;
        *v16 = v54;
        v40 = *v13;
        v51 = v39;
        while (true) {
          lab_0x40e3bb:
            // 0x40e3bb
            v55 = *(int64_t *)(*(int64_t *)(a1 + 248) + 8 * v40);
            v56 = (int64_t *)(v55 + 8);
            if (*v10 == *(int64_t *)(16 * *v56 + v51)) {
                // 0x40e640
                v57 = (int64_t *)(v55 + 32);
                v58 = (int64_t *)v55;
                int64_t v60 = *v58; // 0x40e645
                int64_t v61 = *v12; // 0x40e648
                v41 = v61;
                v42 = v60;
                if (*v57 < 1) {
                    goto lab_0x40e7f3;
                } else {
                    int64_t v62 = v61;
                    v49 = 0;
                    int64_t v63 = v60;
                    int64_t v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49); // 0x40e680
                    int64_t v65 = *(int64_t *)(v64 + 8); // 0x40e684
                    int64_t v66 = v65 - v63; // 0x40e68b
                    int64_t v67 = v66 + v62; // 0x40e68e
                    int64_t v68 = v64; // 0x40e695
                    int64_t v69; // 0x40e1a0
                    int64_t v70; // 0x40e1a0
                    int32_t memcmp_rc; // 0x40e6b8
                    int64_t v71; // 0x40e794
                    int64_t v72; // 0x40e7a1
                    int64_t n; // 0x40e7a5
                    int64_t v73; // 0x40e7aa
                    int64_t v74; // 0x40e7af
                    int64_t v75; // 0x40e7b4
                    if (v66 >= 1) {
                        // 0x40e697
                        v69 = *v14;
                        v75 = v63;
                        n = v66;
                        v74 = v62;
                        v73 = v64;
                        v72 = v69;
                        if (*(int64_t *)(a1 + 48) < v67) {
                            // 0x40e770
                            *v18 = v66;
                            *v14 = v64;
                            v50 = v63;
                            v48 = v62;
                            v43 = v69;
                            if (*(int64_t *)(a1 + 88) < v67) {
                                goto lab_0x40e980_2;
                            }
                            // 0x40e784
                            *v19 = v62;
                            *v20 = v63;
                            v71 = function_407bd0(a1, v67);
                            result = v71;
                            if ((int32_t)v71 != 0) {
                                // break (via goto) -> 0x40e62b
                                goto lab_0x40e62b_7;
                            }
                            // 0x40e7a1
                            v72 = *v11;
                            n = *v18;
                            v73 = *v14;
                            v74 = *v19;
                            v75 = *v20;
                        }
                        // 0x40e6a1
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
                            goto lab_0x40e980_2;
                        }
                    }
                    int64_t v76 = function_40e000(a1, v55, v68, *v15, *v12); // 0x40e6e7
                    int64_t v77 = *v11; // 0x40e6ec
                    result = v76;
                    if ((int32_t)v76 >= 2) {
                        // break (via goto) -> 0x40e62b
                        goto lab_0x40e62b_7;
                    }
                    int64_t v78 = v49 + 1; // 0x40e668
                    while (v78 < *v57) {
                        // 0x40e67c
                        v62 = v67;
                        v49 = v78;
                        v63 = v65;
                        v64 = *(int64_t *)(*(int64_t *)(v55 + 40) + 8 * v49);
                        v65 = *(int64_t *)(v64 + 8);
                        v66 = v65 - v63;
                        v67 = v66 + v62;
                        v68 = v64;
                        if (v66 >= 1) {
                            // 0x40e697
                            v69 = v77;
                            v75 = v63;
                            n = v66;
                            v74 = v62;
                            v73 = v64;
                            v72 = v69;
                            if (*(int64_t *)(a1 + 48) < v67) {
                                // 0x40e770
                                *v18 = v66;
                                *v14 = v64;
                                v50 = v63;
                                v48 = v62;
                                v43 = v69;
                                if (*(int64_t *)(a1 + 88) < v67) {
                                    goto lab_0x40e980_2;
                                }
                                // 0x40e784
                                *v19 = v62;
                                *v20 = v63;
                                v71 = function_407bd0(a1, v67);
                                result = v71;
                                if ((int32_t)v71 != 0) {
                                    // break (via goto) -> 0x40e62b
                                    goto lab_0x40e62b_7;
                                }
                                // 0x40e7a1
                                v72 = *v11;
                                n = *v18;
                                v73 = *v14;
                                v74 = *v19;
                                v75 = *v20;
                            }
                            // 0x40e6a1
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
                                goto lab_0x40e980_2;
                            }
                        }
                        // 0x40e6d4
                        v76 = function_40e000(a1, v55, v68, *v15, *v12);
                        v77 = *v11;
                        result = v76;
                        if ((int32_t)v76 >= 2) {
                            // break (via goto) -> 0x40e62b
                            goto lab_0x40e62b_7;
                        }
                        // 0x40e668
                        v78 = v49 + 1;
                    }
                    // 0x40e7e7
                    *v14 = v77;
                    v44 = v65;
                    v47 = v67;
                    goto lab_0x40e7ec;
                }
            } else {
                goto lab_0x40e3e2_2;
            }
        }
      lab_0x40e400:
        // 0x40e400
        v59 = *v12;
        int64_t v79 = *v15; // 0x40e405
        *v23 = 0;
        int64_t v80 = *v16; // 0x40e415
        v30 = v59;
        if (v80 < *v6) {
            int64_t v81 = *v4; // 0x40e42f
            *v15 = 8 * v79;
            *v10 = 24 * v79;
            int64_t * v82 = (int64_t *)(v81 + 48);
            int64_t * v83 = (int64_t *)(v81 + 24);
            int64_t * v84 = (int64_t *)(v81 + 40);
            v45 = v80;
            while (true) {
              lab_0x40e589_2:
                // 0x40e589
                v46 = v45;
                int64_t v85 = *v7 + 40 * v46; // 0x40e594
                if (v79 != *(int64_t *)v85) {
                    goto lab_0x40e578;
                } else {
                    // 0x40e59d
                    if (v59 != *(int64_t *)(v85 + 8)) {
                        goto lab_0x40e578;
                    } else {
                        int64_t v86 = *(int64_t *)(v85 + 24); // 0x40e5a3
                        int64_t v87 = *(int64_t *)(v85 + 16); // 0x40e5a7
                        int64_t v88 = v86 - v87; // 0x40e5b3
                        *v14 = v88;
                        int64_t v89; // 0x40e1a0
                        if (v88 == 0) {
                            // 0x40e458
                            v89 = *(int64_t *)(*v84 + 16 + *v10);
                        } else {
                            // 0x40e5c1
                            v89 = *v15 + *v83;
                        }
                        // 0x40e477
                        *v12 = 24 * *(int64_t *)v89 + *v82;
                        int64_t v90 = v86 + v59 - v87; // 0x40e483
                        int64_t v91 = function_40a330(a1, v90 - 1, *v5); // 0x40e48a
                        int64_t v92 = 8 * v90; // 0x40e494
                        *v13 = 0;
                        int64_t v93 = *v21; // 0x40e4a7
                        int64_t v94 = v93 + v92; // 0x40e4ae
                        int64_t v95 = *(int64_t *)(v93 + *v24); // 0x40e4b2
                        int64_t v96 = *(int64_t *)v94; // 0x40e4b6
                        if (v95 != 0) {
                            // 0x40e4be
                            *v13 = *(int64_t *)(v95 + 16);
                        }
                        if (v96 == 0) {
                            // 0x40e5e8
                            *v18 = v94;
                            int64_t v97 = function_4098b0(v27, v81, (int64_t *)*v12, (int32_t)v91); // 0x40e5fd
                            int64_t v98 = *v21; // 0x40e607
                            *(int64_t *)*v18 = v97;
                            v52 = v98;
                            v53 = v98;
                            if (*(int64_t *)(v98 + v92) != 0) {
                                goto lab_0x40e552;
                            } else {
                                goto lab_0x40e61c;
                            }
                        } else {
                            // 0x40e4d0
                            *v25 = (int32_t)v91;
                            *v20 = v92;
                            int64_t v99 = function_409720(v26, *(int64_t *)(v96 + 80), *v12, v91 & 0xffffffff); // 0x40e4ea
                            int32_t v100 = v99; // 0x40e4f8
                            *v23 = v100;
                            if (v100 != 0) {
                                // 0x40e7c0
                                free((int64_t *)*v28);
                                result = (int64_t)*v23;
                                goto lab_0x40e62b_7;
                            }
                            // 0x40e507
                            *v18 = *v21 + *v20;
                            *(int64_t *)*v18 = function_4098b0(v27, v81, v26, *v25);
                            free((int64_t *)*v28);
                            int64_t v101 = *v21; // 0x40e540
                            v52 = v101;
                            v53 = v101;
                            if (*(int64_t *)(v101 + v92) == 0) {
                                goto lab_0x40e61c;
                            } else {
                                goto lab_0x40e552;
                            }
                        }
                    }
                }
            }
        }
        goto lab_0x40e220_3;
    }
  lab_0x40e980_2:;
    int64_t v102 = v48;
    int64_t v103 = v50;
    *v14 = v43;
    if (*v57 > v49) {
        goto lab_0x40e3e2_2;
    } else {
        // 0x40e995
        v44 = v103;
        v47 = v102;
        v41 = v102;
        v42 = v103;
        if (v49 == 0) {
            goto lab_0x40e7f3;
        } else {
            goto lab_0x40e7ec;
        }
    }
  lab_0x40e934:;
    // 0x40e934
    int64_t v104; // 0x40e1a0
    int64_t v105 = v104 + 1; // 0x40e934
    int64_t v106 = v105; // 0x40e93d
    if (*v12 < v105) {
        // break -> 0x40e3e2
        goto lab_0x40e3e2_2;
    }
    goto lab_0x40e810;
  lab_0x40e578:;
    int64_t v130 = v46 + 1; // 0x40e578
    v30 = v59;
    int64_t v131 = v130; // 0x40e583
    if (v130 >= *v6) {
        // break -> 0x40e220
        goto lab_0x40e220_3;
    }
    // 0x40e589
    v45 = v131;
    goto lab_0x40e589_2;
  lab_0x40e552:
    // 0x40e552
    if (*v14 != 0) {
        goto lab_0x40e578;
    } else {
        // 0x40e55a
        if (*(int64_t *)(*(int64_t *)(*v24 + v52) + 16) > *v13) {
            int64_t v132 = *v12; // 0x40e700
            int64_t v133 = v132 + 16; // 0x40e70b
            int64_t v134 = v132 + 8; // 0x40e70f
            *v13 = v133;
            int64_t v135 = function_40a1e0(a1, v134, v133, v59); // 0x40e71e
            int32_t v136 = v135; // 0x40e723
            *v23 = v136;
            result = v135;
            if (v136 != 0) {
                // break (via goto) -> 0x40e62b
                goto lab_0x40e62b_7;
            }
            int64_t v137 = function_40e1a0(a1, v134, *v13); // 0x40e740
            int32_t v138 = v137; // 0x40e745
            *v23 = v138;
            result = v137;
            if (v138 != 0) {
                // break (via goto) -> 0x40e62b
                goto lab_0x40e62b_7;
            }
            int64_t v139 = v46 + 1; // 0x40e754
            v30 = v59;
            v131 = v139;
            if (v139 >= *v6) {
                // break -> 0x40e220
                goto lab_0x40e220_3;
            }
            // 0x40e589
            v45 = v131;
            goto lab_0x40e589_2;
        } else {
            goto lab_0x40e578;
        }
    }
  lab_0x40e61c:;
    uint32_t v140 = *v23; // 0x40e61c
    v52 = v53;
    if (v140 != 0) {
        // 0x40e62b
        result = v140;
        goto lab_0x40e62b_7;
    }
    goto lab_0x40e552;
  lab_0x40e3e2_2:;
    int64_t v141 = *v13 + 1; // 0x40e3e2
    *v13 = v141;
    if (v141 >= *v8) {
        // break -> 0x40e400
        goto lab_0x40e400;
    }
    // 0x40e3f6
    v40 = v141;
    v51 = *(int64_t *)*v9;
    goto lab_0x40e3bb;
  lab_0x40e7f3:;
    int64_t v142 = v42;
    int64_t v122; // 0x40e885
    int64_t v128; // 0x40e95c
    int64_t v127; // 0x40e961
    int64_t * v143; // 0x40e1a0
    int64_t * v144; // 0x40e1a0
    if (*v12 >= v142) {
        int64_t * v126 = (int64_t *)(v55 + 16);
        v143 = (int64_t *)(v55 + 24);
        v144 = (int64_t *)(v55 + 40);
        v106 = v142;
        int64_t v145 = v41; // 0x40e806
        while (true) {
          lab_0x40e810:
            // 0x40e810
            v104 = v106;
            if (v104 - *v58 >= 1) {
                // 0x40e81b
                int64_t * v107; // 0x40e1a0
                int64_t v108 = *v107; // 0x40e81b
                int64_t v109; // 0x40e1a0
                int64_t v110; // 0x40e1a0
                if (v108 > v110) {
                    int64_t v111 = *v14;
                    v109 = v111;
                } else {
                    // 0x40e9b0
                    int64_t * v112; // 0x40e1a0
                    uint64_t v113 = *v112; // 0x40e9b0
                    if (v113 <= v110) {
                        // break -> 0x40e3e2
                        break;
                    }
                    int64_t v114 = function_407a80(a1, v110 + 1 & 0xffffffff); // 0x40e9c1
                    result = v114;
                    if ((int32_t)v114 != 0) {
                        // break (via goto) -> 0x40e62b
                        goto lab_0x40e62b_7;
                    }
                    int64_t v115 = *v11; // 0x40e9ce
                    *v14 = v115;
                    v109 = v115;
                }
                int64_t v116 = v109; // 0x40e825
                char v117 = *(char *)(v104 - 1 + v116); // 0x40e82e
                char v118 = *(char *)(v116 + v110); // 0x40e834
                if (v118 != v117) {
                    // break -> 0x40e3e2
                    break;
                }
            }
            int64_t v119 = *(int64_t *)(*v21 + 8 * v104); // 0x40e848
            if (v119 != 0) {
                uint64_t v120 = *(int64_t *)(v119 + 16); // 0x40e855
                if (v120 >= 1) {
                    int64_t v121 = 0;
                    v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                    int64_t v123 = 16 * v122 + *(int64_t *)*v9; // 0x40e890
                    int64_t v124; // 0x40e8a8
                    int64_t v125; // 0x40e8ac
                    int64_t * mem; // 0x40e95c
                    if (*(char *)(v123 + 8) == 9) {
                        // 0x40e899
                        if (*v10 == *(int64_t *)v123) {
                            if (v122 == -1) {
                                goto lab_0x40e934;
                            } else {
                                // 0x40e8a8
                                v124 = *v126;
                                v127 = *v58;
                                v128 = v124;
                                if (v124 == 0) {
                                    // 0x40e948
                                    *v18 = v125;
                                    mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                    v128 = (int64_t)mem;
                                    v127 = *v18;
                                    *v126 = v128;
                                    result = 12;
                                    if (mem != NULL) {
                                        goto lab_0x40e8b8;
                                    } else {
                                        goto lab_0x40e62b_7;
                                    }
                                } else {
                                    goto lab_0x40e8b8;
                                }
                            }
                        }
                    }
                    int64_t v129 = v121 + 1; // 0x40e878
                    while (v120 != v129) {
                        // 0x40e885
                        v121 = v129;
                        v122 = *(int64_t *)(8 * v121 + *(int64_t *)(v119 + 24));
                        v123 = 16 * v122 + *(int64_t *)*v9;
                        if (*(char *)(v123 + 8) == 9) {
                            // 0x40e899
                            if (*v10 == *(int64_t *)v123) {
                                if (v122 == -1) {
                                    goto lab_0x40e934;
                                } else {
                                    // 0x40e8a8
                                    v124 = *v126;
                                    v125 = *v58;
                                    v127 = v125;
                                    v128 = v124;
                                    if (v124 == 0) {
                                        // 0x40e948
                                        *v18 = v125;
                                        mem = calloc(24, (int32_t)(v104 - v125) + 1);
                                        v128 = (int64_t)mem;
                                        v127 = *v18;
                                        *v126 = v128;
                                        result = 12;
                                        if (mem != NULL) {
                                            goto lab_0x40e8b8;
                                        } else {
                                            goto lab_0x40e62b_7;
                                        }
                                    } else {
                                        goto lab_0x40e8b8;
                                    }
                                }
                            }
                        }
                        // 0x40e878
                        v129 = v121 + 1;
                    }
                }
            }
            goto lab_0x40e934;
        }
    }
    goto lab_0x40e3e2_2;
  lab_0x40e7ec:
    // 0x40e7ec
    v41 = v47;
    v42 = v44 + 1;
    goto lab_0x40e7f3;
  lab_0x40e220_3:
    // 0x40e220
    v29 = *v3 + 1;
    *v3 = v29;
    if (v29 >= *(int64_t *)*(int64_t *)(v2 + 80)) {
        // break -> 0x40e62b
        goto lab_0x40e62b_7;
    }
    goto lab_0x40e239;
  lab_0x40e2b0:
    // 0x40e2b0
    v54 = *v6;
    if (v54 > 0) {
        int64_t v146 = *v7; // 0x40e2c5
        int64_t v147 = v146 + 8; // 0x40e2dd
        int64_t v148 = 0;
        uint64_t v149 = v148 + v54; // 0x40e2c1
        int64_t v150 = (v149 / 0x8000000000000000 + v149) / 2; // 0x40e2d6
        int64_t v151 = v150; // 0x40e2e2
        int64_t v152 = v54; // 0x40e2e2
        int64_t v153 = v150; // 0x40e2e2
        int64_t v154; // 0x40e1a0
        int64_t v155; // 0x40e1a0
        uint64_t v156; // 0x40e2f0
        int64_t v157; // 0x40e2fe
        if (v31 <= *(int64_t *)(40 * v150 + v147)) {
            v155 = v151;
            v154 = v148;
            if (v155 <= v148) {
                // break (via goto) -> 0x40e317
                goto lab_0x40e317;
            }
            // 0x40e2f0
            v156 = v155 + v148;
            v157 = (v156 / 0x8000000000000000 + v156) / 2;
            v152 = v155;
            v153 = v157;
            while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                // 0x40e312
                v155 = v157;
                v154 = v148;
                if (v155 <= v148) {
                    // break (via goto) -> 0x40e317
                    goto lab_0x40e317;
                }
                // 0x40e2f0
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
            }
        }
        int64_t v158 = v152;
        int64_t v159 = v153 + 1; // 0x40e368
        v154 = v159;
        while (v159 < v158) {
            // 0x40e2c1
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
                    // break (via goto) -> 0x40e317
                    goto lab_0x40e317;
                }
                // 0x40e2f0
                v156 = v155 + v148;
                v157 = (v156 / 0x8000000000000000 + v156) / 2;
                v152 = v155;
                v153 = v157;
                while (v31 <= *(int64_t *)(40 * v157 + v147)) {
                    // 0x40e312
                    v155 = v157;
                    v154 = v148;
                    if (v155 <= v148) {
                        // break (via goto) -> 0x40e317
                        goto lab_0x40e317;
                    }
                    // 0x40e2f0
                    v156 = v155 + v148;
                    v157 = (v156 / 0x8000000000000000 + v156) / 2;
                    v152 = v155;
                    v153 = v157;
                }
            }
            // 0x40e368
            v158 = v152;
            v159 = v153 + 1;
            v154 = v159;
        }
      lab_0x40e317:;
        int64_t v160 = v154;
        if (v54 > v160) {
            int64_t v161 = v146 + 40 * v160; // 0x40e327
            int64_t v162 = v161; // 0x40e32f
            if (v160 != -1 == *(int64_t *)(v161 + 8) == v31) {
                int64_t v163 = v162;
                while (v32 != *(int64_t *)v163) {
                    // 0x40e340
                    v162 = v163 + 40;
                    if (*(char *)(v163 + 32) == 0) {
                        goto lab_0x40e378;
                    }
                    v163 = v162;
                }
                // 0x40e34f
                *v23 = 0;
                v30 = v31;
                goto lab_0x40e220_3;
            } else {
                goto lab_0x40e378;
            }
        } else {
            goto lab_0x40e378;
        }
    } else {
        goto lab_0x40e378;
    }
  lab_0x40e1f9:
    // 0x40e1f9
    v30 = v31;
    if ((v35 & 0x2000) != 0 == (v36 & 2) == 0) {
        goto lab_0x40e220_3;
    } else {
        if ((char)(v34 / 256) > -1) {
            goto lab_0x40e2b0;
        } else {
            // 0x40e20e
            v30 = v31;
            if ((v36 & 8) != 0) {
                goto lab_0x40e2b0;
            } else {
                goto lab_0x40e220_3;
            }
        }
    }
  lab_0x40e8b8:
    // 0x40e8b8
    *(int64_t *)(v2 - 16) = 9;
    int64_t v164 = function_40d010(a1, v128, *v56, v127, v122, v104, (int64_t)&g88); // 0x40e8cb
    int32_t v165 = v164; // 0x40e8d2
    if (v165 == 1) {
        goto lab_0x40e934;
    } else {
        // 0x40e8d7
        result = v164;
        if (v165 != 0) {
            goto lab_0x40e62b_7;
        } else {
            int64_t v166 = *v143; // 0x40e8df
            if (*v57 == v166) {
                int64_t v167 = 2 * v166 | 1; // 0x40e9dc
                *v18 = v167;
                int64_t * mem2 = realloc((int64_t *)*v144, 8 * (int32_t)v167); // 0x40e9f2
                result = 12;
                if (mem2 == NULL) {
                    goto lab_0x40e62b_7;
                } else {
                    // 0x40ea00
                    *v144 = (int64_t)mem2;
                    *v143 = *v18;
                    goto lab_0x40e8ed;
                }
            } else {
                goto lab_0x40e8ed;
            }
        }
    }
  lab_0x40e8ed:;
    int64_t * mem3 = calloc(1, 40); // 0x40e8f7
    result = 12;
    if (mem3 == NULL) {
        goto lab_0x40e62b_7;
    } else {
        int64_t v168 = (int64_t)mem3; // 0x40e8f7
        int64_t v169 = *v57; // 0x40e901
        *(int64_t *)(*v144 + 8 * v169) = v168;
        *mem3 = v122;
        *(int64_t *)(v168 + 8) = v104;
        *v57 = v169 + 1;
        function_40e000(a1, v55, v168, *v15, *v12);
        goto lab_0x40e934;
    }
}
// Address range: 0x40ea20 - 0x40ebd7
int64_t function_40ea20(int32_t * a1, int64_t * a2, int64_t a3) {
    int64_t v1 = (int64_t)a2;
    int64_t * v2 = (int64_t *)(v1 + 72); // 0x40ea34
    int64_t v3 = *v2; // 0x40ea34
    int64_t * v4 = (int64_t *)(v1 + 184); // 0x40ea38
    int64_t v5 = *(int64_t *)(v1 + 152); // 0x40ea3f
    int64_t v6 = 8 * v3; // 0x40ea46
    int64_t * v7 = (int64_t *)(v1 + 192); // 0x40ea51
    int64_t * v8 = (int64_t *)(*v4 + v6);
    int64_t result; // 0x40ea20
    if (*v7 < v3) {
        // 0x40ea5a
        *v8 = a3;
        *v7 = v3;
        result = a3;
    } else {
        int64_t v9 = *v8; // 0x40ea90
        if (v9 == 0) {
            // 0x40eb68
            *v8 = a3;
            result = a3;
        } else {
            int64_t v10 = *(int64_t *)(v9 + 80); // 0x40ea9c
            int64_t v11; // bp-88, 0x40ea20
            if (a3 == 0) {
                // 0x40eb20
                v11 = __asm_movaps(__asm_movdqu(*(int128_t *)v10));
                int64_t v12 = function_40a330(v1, v3 - 1, *(int32_t *)(v1 + 160)); // 0x40eb40
                int64_t v13 = function_4098b0((int128_t *)a1, v5, &v11, (int32_t)v12); // 0x40eb52
                *v8 = v13;
                result = v13;
            } else {
                int64_t v14 = *(int64_t *)(a3 + 80); // 0x40eaa5
                int64_t v15; // 0x40ea20
                int32_t v16 = function_409720(&v11, v14, v10, v15); // 0x40eab9
                *a1 = v16;
                if (v16 != 0) {
                    // 0x40ea75
                    return 0;
                }
                int64_t v17 = function_40a330(v1, *v2 - 1, *(int32_t *)(v1 + 160)); // 0x40ead6
                int64_t v18 = function_4098b0((int128_t *)a1, v5, &v11, (int32_t)v17); // 0x40eaf7
                *(int64_t *)(*v4 + v6) = v18;
                result = v18;
                if (v14 != 0) {
                    // 0x40eb10
                    free((int64_t *)v15);
                    result = v18;
                }
            }
        }
    }
    // 0x40ea67
    if (*(int64_t *)(v5 + 152) == 0) {
        // 0x40ea75
        return result;
    }
    // 0x40eb78
    if (result == 0) {
        // 0x40ea75
        return 0;
    }
    int64_t v19 = result + 16; // 0x40eb7d
    int64_t v20 = result + 24; // 0x40eb81
    int32_t v21 = function_40a1e0(v1, v19, v20, v3); // 0x40eb96
    *a1 = v21;
    if (v21 != 0) {
        // 0x40ea75
        return 0;
    }
    // 0x40eb9e
    if ((*(char *)(result + 104) & 64) == 0) {
        // 0x40ea75
        return result;
    }
    int32_t v22 = function_40e1a0(v1, v19, v20); // 0x40ebb6
    *a1 = v22;
    int64_t result2 = 0; // 0x40ebbc
    if (v22 == 0) {
        // 0x40ebbe
        result2 = *(int64_t *)(*v4 + v6);
    }
    // 0x40ea75
    return result2;
}
// Address range: 0x40ebe0 - 0x40ef04
int64_t function_40ebe0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a2 + 24); // 0x40ebf9
    uint64_t v2 = *v1; // 0x40ebf9
    int64_t * mem = malloc(8); // 0x40ec13
    if (mem == NULL) {
        // 0x40eef0
        return 12;
    }
    // 0x40ec26
    int64_t v3; // bp-152, 0x40ebe0
    int64_t v4 = &v3; // 0x40ebf5
    int64_t v5 = (int64_t)mem; // 0x40ec13
    *mem = *(int64_t *)(a2 + 16);
    int64_t v6 = v5; // 0x40ec3e
    int64_t v7; // 0x40ebe0
    int64_t v8; // 0x40ebe0
    int64_t v9; // 0x40ebe0
    int64_t v10; // 0x40ebe0
    int64_t * v11; // 0x40ebe0
    int64_t * v12; // 0x40ebe0
    int64_t v13; // 0x40ebe0
    int64_t v14; // 0x40ec9e
    int64_t * v15; // 0x40ecb9
    int64_t * v16; // 0x40ebe0
    int64_t v17; // 0x40ed8e
    if ((int32_t)v5 == 0) {
        // 0x40ec44
        v6 = 0;
        if (v2 >= 1) {
            // 0x40ec5e
            v11 = (int64_t *)(v4 + 16);
            int32_t * v18 = (int32_t *)(v4 + 28);
            int32_t * v19 = (int32_t *)(a1 + 224);
            int64_t * v20 = (int64_t *)(a1 + 152);
            v12 = (int64_t *)(v4 + 8);
            int64_t * v21 = (int64_t *)(v4 + 40);
            int64_t * v22 = (int64_t *)(v4 + 48);
            int64_t * v23 = (int64_t *)(v4 + 32);
            v13 = a2 + 40;
            int64_t v24 = v2; // 0x40ebe0
            while (true) {
                int64_t v25 = 8 * v24; // 0x40ec61
                *v11 = v25;
                if (*(int64_t *)(v25 + a2) == 0) {
                    uint32_t v26 = *v18 + 1; // 0x40eeb0
                    *v18 = v26;
                    if ((int64_t)*v19 < (int64_t)v26) {
                        // break -> 0x40eec6
                        break;
                    }
                } else {
                    // 0x40ec79
                    *v18 = 0;
                    if (*v19 < 0) {
                        // break -> 0x40eec6
                        break;
                    }
                }
                int64_t v27 = *(int64_t *)(a1 + 184); // 0x40ec92
                v14 = v24 - 1;
                *(int64_t *)(v4 + 72) = 0;
                int64_t v28 = *(int64_t *)(v27 - 8 + *v11); // 0x40ecab
                v9 = v27;
                if (v28 != 0) {
                    // 0x40ecb9
                    v15 = (int64_t *)(v28 + 40);
                    int64_t v29 = *v20; // 0x40ecbe
                    v9 = v27;
                    if (*v15 >= 1) {
                        // 0x40eccb
                        *v12 = 0;
                        int64_t * v30 = (int64_t *)v29; // 0x40ed8a
                        v16 = (int64_t *)(v29 + 24);
                        v7 = 0;
                        while (true) {
                          lab_0x40ed81:
                            // 0x40ed81
                            v17 = *(int64_t *)(8 * v7 + *(int64_t *)(v28 + 48));
                            int64_t v31 = 16 * v17; // 0x40ed95
                            int64_t v32 = v31 + *v30; // 0x40ed99
                            v10 = v32;
                            if ((*(char *)(v32 + 10) & 16) == 0) {
                                goto lab_0x40ece0;
                            } else {
                                int64_t v33 = *v20; // 0x40eda6
                                *v21 = v31;
                                int64_t v34 = v33 + 216; // 0x40edc2
                                *v22 = v33;
                                *v23 = *v1;
                                int64_t v35 = function_40cd80(*(int64_t *)v33, v34, v17, a1, v14); // 0x40edd3
                                int64_t v36 = *v21; // 0x40edd8
                                int32_t v37 = v35; // 0x40eddd
                                int64_t v38 = v35 & 0xffffffff; // 0x40eddf
                                if (v37 < 1) {
                                    // 0x40ee40
                                    v8 = v38;
                                    if (v37 != 0) {
                                        goto lab_0x40ed21;
                                    } else {
                                        // 0x40ee46
                                        v10 = *v30 + v36;
                                        goto lab_0x40ece0;
                                    }
                                } else {
                                    int64_t v39 = (0x100000000 * v35 >> 32) + v14; // 0x40ede6
                                    v8 = v38;
                                    if (*v23 < v39) {
                                        goto lab_0x40ed21;
                                    } else {
                                        int64_t v40 = *(int64_t *)(8 * v39 + v34); // 0x40edfc
                                        if (v40 == 0) {
                                            // 0x40ee46
                                            v10 = *v30 + v36;
                                            goto lab_0x40ece0;
                                        } else {
                                            // 0x40ee05
                                            *v23 = v36;
                                            int64_t v41 = *(int64_t *)(*(int64_t *)(*v22 + 24) + 8 * v17); // 0x40ee16
                                            v8 = v38;
                                            if (function_408600(*(int64_t *)(v40 + 16), v40 + 24, v41) != 0) {
                                                goto lab_0x40ed21;
                                            } else {
                                                // 0x40ee28
                                                v10 = *v30 + *v23;
                                                goto lab_0x40ece0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
              lab_0x40ee58:
                // 0x40ee58
                v6 = v9;
                if ((int32_t)v9 != 0) {
                    goto lab_0x40ee85_3;
                }
                // 0x40ee6f
                v24 = v14;
                v6 = 0;
                if (v14 == 0) {
                    goto lab_0x40ee85_3;
                }
            }
            // 0x40eec6
            memset((int64_t *)a2, 0, (int32_t)*v11);
            free((int64_t *)*(int64_t *)(v4 + 80));
            return (int32_t)&g88 ^ (int32_t)&g88;
        }
    }
  lab_0x40ee85_3:;
    int32_t * v42 = (int32_t *)(v4 + 8); // 0x40ee8a
    *v42 = (int32_t)v6;
    free((int64_t *)*(int64_t *)(v4 + 80));
    return (int64_t)*v42;
  lab_0x40ece0:;
    int64_t v43 = v10;
    if ((char)function_40a420(a1, v43, v14) == 0) {
        goto lab_0x40ed6c;
    } else {
        int64_t v44 = *(int64_t *)(*v11 + v43); // 0x40ecf7
        if (v44 == 0) {
            goto lab_0x40ed6c;
        } else {
            int64_t v45 = *(int64_t *)(*v16 + 8 * v17); // 0x40ed0d
            v8 = 1;
            if (function_408600(*(int64_t *)(v44 + 16), v44 + 24, v45) == 0) {
                goto lab_0x40ed6c;
            } else {
                goto lab_0x40ed21;
            }
        }
    }
  lab_0x40ed6c:;
    int64_t v46 = *v12 + 1; // 0x40ed6c
    *v12 = v46;
    v7 = v46;
    v9 = v46;
    if (v46 >= *v15) {
        // break -> 0x40ee58
        goto lab_0x40ee58;
    }
    goto lab_0x40ed81;
  lab_0x40ed21:
    // 0x40ed21
    if (*(int64_t *)v13 == 0) {
        goto lab_0x40ed57;
    } else {
        int64_t v47 = *(int64_t *)(*v16 + 8 * v17); // 0x40ed42
        *(int64_t *)(v4 - 16) = v14;
        int64_t v48 = *(int64_t *)(v4 + 56); // 0x40ed47
        int64_t v49 = function_408890(a1, v13, v48, v47, (0x100000000 * v8 >> 32) + v14, v17, (int64_t)&g88); // 0x40ed4c
        if ((char)v49 != 0) {
            goto lab_0x40ed6c;
        } else {
            goto lab_0x40ed57;
        }
    }
  lab_0x40ed57:
    // 0x40ed57
    v6 = 12;
    if ((char)function_406ff0(v4 + 64, v17) == 0) {
        goto lab_0x40ee85_3;
    }
    goto lab_0x40ed6c;
}
// Address range: 0x40ef10 - 0x410e99
int64_t function_40ef10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, uint64_t a7, int64_t a8, int64_t a9) {
    // 0x40ef10
    int64_t v1; // 0x40ef10
    int64_t v2 = v1;
    int64_t v3; // bp-312, 0x40ef10
    __asm_rep_stosq_memset((char *)&v3, 0, 32);
    int64_t v4 = *(int64_t *)(a1 + 32); // 0x40ef5c
    char * v5 = (char *)v4; // 0x40ef68
    char * v6 = v5; // 0x40ef70
    if (v4 != 0) {
        unsigned char v7 = *(char *)(a1 + 56); // 0x40ef72
        v6 = NULL;
        if (a4 != a5 && (v7 & 8) != 0) {
            // 0x40ef88
            v6 = v7 % 2 == 0 ? v5 : NULL;
        }
    }
    int64_t * v8 = (int64_t *)(a1 + 48); // 0x40efa5
    uint64_t v9 = *v8; // 0x40efa5
    int64_t v10 = 0; // 0x40efb1
    int64_t v11 = a7; // 0x40efb1
    if (v9 < a7) {
        // 0x40efb3
        v10 = -1 - v9 + a7;
        v11 = v9 + 1;
    }
    int64_t v12 = *(int64_t *)(a1 + 16); // 0x40efdd
    if (v12 == 0) {
        // 0x40f980
        return 1;
    }
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40efed
    int64_t v14 = *v13; // 0x40efed
    if (v14 == 0) {
        // 0x40f980
        return 1;
    }
    int64_t * v15 = (int64_t *)(a1 + 80); // 0x40effa
    int64_t v16 = *v15; // 0x40effa
    if (v16 == 0) {
        // 0x40f980
        return 1;
    }
    int64_t * v17 = (int64_t *)(a1 + 88); // 0x40f007
    int64_t v18 = *v17; // 0x40f007
    if (v18 == 0) {
        // 0x40f980
        return 1;
    }
    int64_t * v19 = (int64_t *)(a1 + 96); // 0x40f014
    if (*v19 == 0) {
        // 0x40f980
        return 1;
    }
    int64_t v20 = a4; // 0x40f024
    int64_t v21 = a5; // 0x40f024
    if (*(int64_t *)(v14 + 16) != 0) {
        goto lab_0x40f058;
    } else {
        // 0x40f026
        v20 = a4;
        v21 = a5;
        if (*(int64_t *)(v16 + 16) != 0) {
            goto lab_0x40f058;
        } else {
            // 0x40f02d
            if (*(int64_t *)(v18 + 16) == 0) {
                goto lab_0x40f03a;
            } else {
                // 0x40f034
                if (*(char *)(a1 + 56) < 0) {
                    goto lab_0x40f058;
                } else {
                    goto lab_0x40f03a;
                }
            }
        }
    }
  lab_0x40f960_9:;
    // 0x40f960
    int64_t v22; // 0x40ef10
    free((int64_t *)v22);
    int64_t * v23; // 0x40ef10
    int64_t v24; // 0x40ef10
    int64_t v25; // 0x40ef10
    if (*v23 != 0) {
        // 0x410178
        function_408270(&v3);
        free((int64_t *)v24);
        free((int64_t *)v25);
    }
    // 0x40f978
    function_408230(&v3);
    // 0x40f980
    int64_t v26; // 0x40ef10
    return v26 & 0xffffffff;
  lab_0x40fec8_3:;
    // 0x40fec8
    int32_t v27; // 0x40ef10
    int32_t v28 = v27; // bp-392, 0x40fec8
    int32_t v29; // 0x40ef10
    int32_t v30 = v29; // 0x40fed2
    int64_t v31; // 0x40ef10
    int64_t v32 = v31; // 0x40fed2
    int64_t v33 = 0; // 0x40fed2
    int64_t v34; // 0x40ef10
    int64_t v35 = v34; // 0x40fed2
    int64_t v36; // 0x40ef10
    int64_t v37 = v36; // 0x40fed2
    int64_t v38; // 0x40ef10
    int64_t v39 = v38; // 0x40fed2
    int64_t * v40; // 0x40ef10
    v23 = v40;
    v26 = 12;
    int64_t v41; // 0x40ef10
    v25 = v41;
    int64_t v42; // 0x40ef10
    v24 = v42;
    v22 = 0;
    int64_t v43; // 0x40ef10
    if (v43 == 0) {
        goto lab_0x40f960_9;
    } else {
        goto lab_0x40f6b8;
    }
  lab_0x40f75f:;
    // 0x40f75f
    int64_t v44; // 0x40ef10
    int64_t v45 = v44;
    int64_t v46; // 0x40ef10
    int64_t v47 = v46;
    int64_t v48; // 0x40ef10
    int64_t v49 = v48;
    int32_t v50; // 0x40ef10
    int32_t v51 = v50;
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v52; // 0x40ef10
    int64_t v53 = v52; // 0x40ef10
    int128_t v54; // 0x40ef10
    int128_t v55 = v54; // 0x40ef10
    int64_t v56; // 0x40ef10
    int64_t v57 = v56; // 0x40ef10
    int32_t v58; // 0x40ef10
    int64_t v59; // 0x40ef10
    int64_t v60; // 0x40ef10
    int64_t v61; // 0x40ef10
    int64_t v62; // 0x40ef10
    int64_t v63; // 0x40ef10
    int64_t v64; // 0x40ef10
    int64_t v65; // 0x40ef10
    int64_t v66; // 0x40ef10
    int64_t v67; // bp-376, 0x40ef10
    int64_t v68; // 0x40ef10
    int64_t * mem; // 0x40ffdf
    int64_t v69; // 0x40ef10
    int64_t * mem2; // 0x410006
    int64_t v70; // 0x410006
    int128_t v71; // 0x41002e
    int64_t v72; // 0x40f10d
    char * v73; // 0x40ef10
    char * v74; // 0x40ef10
    int64_t v75; // 0x40ef10
    int128_t v76; // 0x40ef10
    switch (v45) {
        case -1: {
            goto lab_0x40fdc0;
        }
        case -2: {
            goto lab_0x40f960_9;
        }
        default: {
            // 0x40f773
            int64_t v77; // 0x40ef10
            if (v11 < 2 | (*v73 & 16) != 0) {
                // 0x40f930
                v65 = v45;
                v64 = v43;
                if (*v40 == 0) {
                    goto lab_0x40f943_2;
                }
                int64_t v78 = *(int64_t *)(8 * v45 + v43); // 0x40ff8e
                int64_t v79 = function_40a550(&v3, *(int64_t *)(v78 + 16), v78 + 24, v45); // 0x40ff9a
                v77 = v79;
            } else {
                int64_t v80 = *(int64_t *)(8 * v45 + v43); // 0x40f7a7
                int64_t v81 = function_40a550(&v3, *(int64_t *)(v80 + 16), v80 + 24, v45); // 0x40f7b3
                v77 = v81;
                if (*v74 % 2 == 0) {
                    // 0x40f7d5
                    v65 = v45;
                    v64 = v43;
                    v77 = v81;
                    if (*v40 == 0) {
                        goto lab_0x40f943_2;
                    }
                }
            }
            // 0x40ffaf
            if (v45 >= 0x1fffffffffffffff) {
                // break -> 0x40f960
                break;
            }
            int64_t v82 = v45 + 1; // 0x40ffcf
            int32_t size = 8 * (int32_t)v82; // 0x40ffdf
            mem = malloc(size);
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if (mem == NULL) {
                // break -> 0x40f960
                break;
            }
            int64_t v83 = v77;
            v69 = (int64_t)mem;
            if (*v40 == 0) {
                int128_t v84 = __asm_pxor(v54, v54); // 0x40fd40
                v67 = v69;
                __asm_movaps(v84);
                int64_t v85 = function_40ebe0(v72, v75); // 0x40fd87
                free(NULL);
                int32_t v86 = v85;
                v58 = v86;
                v68 = 0;
                v66 = v83;
                v76 = v84;
                v63 = v85;
                if (v86 != 0) {
                    goto lab_0x410572;
                } else {
                    // 0x40fda5
                    v60 = v45;
                    if (*mem != 0) {
                        goto lab_0x410118;
                    }
                    // 0x40fdaf
                    free(mem);
                    v53 = v83;
                    v55 = v84;
                    v57 = v69;
                    goto lab_0x40fdc0;
                }
            } else {
                // 0x410003
                mem2 = malloc(size);
                v70 = (int64_t)mem2;
                int64_t v87 = v45; // 0x410016
                if (mem2 == NULL) {
                    // 0x4105b4
                    free(mem);
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    goto lab_0x40f960_9;
                }
                v61 = v83;
                v62 = v82;
                int128_t v88 = v54;
                memset(mem2, 0, 8 * (int32_t)v62);
                v71 = __asm_pxor(v88, v88);
                __asm_movaps(v71);
                v67 = v69;
                int64_t v89 = function_40ebe0(v72, v75); // 0x410071
                free(NULL);
                int32_t v90 = v89;
                v58 = v90;
                v68 = v70;
                v66 = v61;
                v76 = v71;
                v63 = v89;
                while (v90 == 0) {
                    // 0x410093
                    v59 = v87;
                    if (*mem != 0) {
                        goto lab_0x4100ed_2;
                    }
                    // 0x410099
                    if (*mem2 != 0) {
                        goto lab_0x4100ed_2;
                    }
                    int64_t v91 = v59; // 0x4100b8
                    if (v59 == 0) {
                        goto lab_0x4101a0_2;
                    }
                    int64_t v92; // 0x40ef10
                    int64_t v93; // 0x40ef10
                    int64_t v94; // 0x4100be
                    while (true) {
                        // 0x4100be
                        v92 = v91;
                        v93 = v92 - 1;
                        v94 = *(int64_t *)(8 * v93 + v43);
                        if (v94 != 0) {
                            // 0x4100c7
                            if ((*(char *)(v94 + 104) & 16) != 0) {
                                // break -> 0x4100cd
                                break;
                            }
                        }
                        // 0x4100b0
                        v91 = v93;
                        if (v93 == 0) {
                            goto lab_0x4101a0_2;
                        }
                    }
                    int64_t v95 = function_40a550(&v3, *(int64_t *)(v94 + 16), v94 + 24, v93); // 0x4100e0
                    v87 = v93;
                    v61 = v95;
                    v62 = v92;
                    v88 = v71;
                    memset(mem2, 0, 8 * (int32_t)v62);
                    v71 = __asm_pxor(v88, v88);
                    __asm_movaps(v71);
                    v67 = v69;
                    v89 = function_40ebe0(v72, v75);
                    free(NULL);
                    v90 = v89;
                    v58 = v90;
                    v68 = v70;
                    v66 = v61;
                    v76 = v71;
                    v63 = v89;
                }
                goto lab_0x410572;
            }
        }
    }
  lab_0x40fbde:;
    // 0x40fbde
    int64_t v96; // 0x40ef10
    int64_t v97 = v96 + 1; // 0x40fbde
    int64_t v98; // 0x40ef10
    int64_t v99 = v98; // 0x40fbe6
    int64_t v100; // 0x40ef10
    int64_t v101 = v100; // 0x40fbe6
    int64_t v102; // 0x40ef10
    int64_t v103 = v102; // 0x40fbe6
    int64_t v104; // 0x40ef10
    int64_t v105 = v104; // 0x40fbe6
    int64_t v106; // 0x40ef10
    int64_t v107 = v106; // 0x40fbe6
    int64_t v108 = v97; // 0x40fbe6
    int64_t v109 = v98; // 0x40fbe6
    int64_t v110 = v100; // 0x40fbe6
    int64_t v111 = v102; // 0x40fbe6
    int64_t v112 = v106; // 0x40fbe6
    int64_t v113 = v104; // 0x40fbe6
    int64_t v114 = v106; // 0x40fbe6
    int64_t v115 = v36; // 0x40fbe6
    int64_t v116; // 0x40ef10
    int64_t v117 = v116; // 0x40fbe6
    int64_t * v118; // 0x40fa70
    if (v97 >= *v118) {
        // break -> 0x40ff33
        goto lab_0x40ff33;
    }
    goto lab_0x40fbec;
  lab_0x40fad0:;
    // 0x40fad0
    int64_t v119; // 0x40ef10
    int64_t v121; // 0x40fbf4
    int64_t v135 = function_40cd80(v36, a1 + 216, v121, v72, v119); // 0x40fade
    int64_t v120; // 0x40ef10
    v98 = v120;
    v100 = v72;
    v102 = v121;
    v104 = v36;
    int64_t v136; // 0x40ef10
    v106 = v136;
    v116 = v121;
    int64_t v137; // 0x40ef10
    int64_t v138; // 0x40ef10
    int64_t v139; // 0x40ef10
    int64_t v140; // 0x40ef10
    int32_t v141; // bp-388, 0x40ef10
    int64_t v142; // 0x40fb3e
    int64_t * v143; // 0x40f082
    int32_t v127; // 0x40ef10
    int64_t v144; // 0x40ef10
    if ((int32_t)v135 == 0) {
        goto lab_0x40fbde;
    } else {
        int64_t v145 = (0x100000000 * v135 >> 32) + v136; // 0x40faee
        int32_t v146 = function_407bd0(v72, v145);
        v141 = v146;
        v27 = v146;
        v31 = v120;
        v34 = v119;
        v38 = v121;
        if (v146 != 0) {
            goto lab_0x40fec8_3;
        }
        int64_t v147 = 8 * v145; // 0x40fb36
        v142 = v147 + v43;
        int64_t v148 = *v8 + 24 * *(int64_t *)(*v143 + 8 * v121); // 0x40fb4e
        int64_t * v149 = (int64_t *)v142; // 0x40fb52
        int64_t v150 = *v149; // 0x40fb52
        if (v150 == 0) {
            // 0x40fc70
            v67 = __asm_movaps(__asm_movdqu(*(int128_t *)v148));
            int64_t v151 = *(int64_t *)(v148 + 16); // 0x40fc83
            int64_t v152 = function_40a330(v72, v145 - 1, v127); // 0x40fc96
            int64_t v153 = v152 & 0xffffffff; // 0x40fcae
            int64_t v154 = function_4098b0((int128_t *)&v141, a1, &v67, (int32_t)v152); // 0x40fcb0
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
                goto lab_0x40fbde;
            } else {
                goto lab_0x40fcd0;
            }
        } else {
            int64_t v155 = function_409720(&v67, *(int64_t *)(v150 + 80), v148, v72); // 0x40fb6a
            int32_t v156 = v155;
            v141 = v156;
            v27 = v156;
            v31 = v120;
            v34 = v142;
            v38 = v147;
            if (v156 != 0) {
                goto lab_0x40fec8_3;
            }
            int64_t v157 = function_40a330(v72, v145 - 1, v127); // 0x40fb8c
            int64_t v158 = v157 & 0xffffffff; // 0x40fba4
            int64_t v159 = function_4098b0((int128_t *)&v141, a1, &v67, (int32_t)v157); // 0x40fbae
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
                goto lab_0x40fcd0;
            } else {
                goto lab_0x40fbde;
            }
        }
    }
  lab_0x40fab1:;
    // 0x40fab1
    int64_t v132; // 0x40ef10
    int64_t v160 = v132;
    v98 = v120;
    int64_t v129; // 0x40fc44
    v100 = v129;
    v102 = v160;
    v104 = v72;
    v106 = v119;
    v116 = v121;
    uint64_t v125; // 0x40fc08
    uint64_t v126; // 0x40fc2e
    int64_t v128; // 0x40fc3f
    if ((v125 & 0x2000) != 0 == (v126 & 2) == 0) {
        goto lab_0x40fbde;
    } else {
        uint32_t v161 = (int32_t)v128 & 128; // 0x40fabe
        if (v161 == 0) {
            goto lab_0x40fad0;
        } else {
            // 0x40fac6
            v98 = v120;
            v100 = v161;
            v102 = v160;
            v104 = v72;
            v106 = v119;
            v116 = v121;
            if ((v126 & 8) == 0) {
                goto lab_0x40fbde;
            } else {
                goto lab_0x40fad0;
            }
        }
    }
  lab_0x40fcd0:
    // 0x40fcd0
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
        goto lab_0x40fec8_3;
    }
    goto lab_0x40fbde;
  lab_0x40f943_2:
    // 0x40f943
    v23 = v40;
    int64_t v162; // 0x40f495
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v163; // 0x40ef10
    int64_t v164; // 0x40ef10
    int64_t v165; // 0x40ef10
    int64_t v166; // 0x410307
    if (v11 != 0) {
        // 0x4102e8
        v165 = a8 + 16;
        v166 = 16 * v11 + a8;
        v163 = v165;
        if (v11 < 2) {
            // 0x4105f4
            *(int64_t *)a8 = 0;
            *(int64_t *)(a8 + 8) = v65;
            v164 = 0;
            goto lab_0x4103c2;
        } else {
            goto lab_0x410320;
        }
    } else {
        goto lab_0x40f960_9;
    }
  lab_0x410118:
    // 0x410118
    free((int64_t *)v43);
    v65 = v60;
    v64 = v69;
    goto lab_0x40f943_2;
  lab_0x4100ed_2:;
    int64_t v167 = function_409da0(a1, v69, v70, v62); // 0x4100fb
    free(mem2);
    int32_t v168 = v167;
    v60 = v59;
    v58 = v168;
    v68 = 0;
    v66 = v61;
    v76 = v71;
    v63 = v167;
    if (v168 != 0) {
        goto lab_0x410572;
    } else {
        goto lab_0x410118;
    }
  lab_0x4101a0_2:
    // 0x4101a0
    free(mem);
    free(mem2);
    function_408270(&v3);
    int32_t v169 = v51; // 0x4101c0
    int64_t v170 = v61; // 0x4101c0
    int128_t v171 = v71; // 0x4101c0
    int64_t v172; // bp-384, 0x40ef10
    int64_t v173 = v172; // 0x4101c0
    int64_t v174 = v49; // 0x4101c0
    int64_t v175 = v47; // 0x4101c0
    int64_t v176 = v69; // 0x4101c0
    goto lab_0x40fdd0;
  lab_0x40f684:;
    // 0x40f684
    int64_t v298; // 0x40ef10
    int64_t v469 = v298;
    int64_t v297; // 0x40ef10
    int64_t v470 = v297;
    int64_t v296; // 0x40ef10
    int64_t v471 = v296;
    int64_t v293; // 0x40ef10
    int64_t v472 = v293;
    int64_t v291; // 0x40ef10
    int64_t v473 = v291;
    int64_t v294; // 0x40ef10
    int32_t v474 = (int32_t)v294 + 1; // 0x40f688
    int64_t v326; // 0x40ef10
    int64_t v475 = (int64_t)*(char *)(v294 + v326); // 0x40f698
    int64_t v282; // 0x40ef10
    int64_t * v476 = (int64_t *)(v282 + 88); // 0x40f69c
    int64_t v477 = *v476; // 0x40f69c
    int64_t v295; // 0x40ef10
    int64_t v478 = v295; // 0x40f6a3
    int64_t v479 = v477; // 0x40f6a3
    int64_t v480; // 0x40ef10
    int64_t v292; // 0x40ef10
    int64_t v481; // 0x40ef10
    int64_t v482; // 0x40ef10
    int64_t v347; // 0x40ef10
    if (v477 == 0) {
        int64_t v483 = v292;
        int64_t v484 = *(int64_t *)(v282 + 96); // 0x40fce8
        while (v484 == 0) {
            // 0x40fee0
            if ((char)function_40b040(a1, v282, v472, v483, v471) == 0) {
                // 0x40fef8
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
                    goto lab_0x40f6b8;
                } else {
                    goto lab_0x40f960_9;
                }
            }
            int64_t v485 = *v476; // 0x40f69c
            v478 = a1;
            v479 = v485;
            if (v485 != 0) {
                goto lab_0x40f6a9;
            }
            v484 = *(int64_t *)(v282 + 96);
        }
        int64_t v486 = v484 + 8 * v475;
        int64_t v487 = function_40a330(v72, (int64_t)v474 - 1, v127) % 2 == 0 ? v486 : v486 + 2048;
        v482 = v347;
        v480 = v487;
        v481 = v72;
    } else {
      lab_0x40f6a9:
        // 0x40f6a9
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
    int32_t v489 = v474; // 0x40f6b6
    int64_t v490 = v473; // 0x40f6b6
    int64_t v491 = v482; // 0x40f6b6
    int64_t v492 = v488; // 0x40f6b6
    int64_t v493 = v481; // 0x40f6b6
    int64_t v494 = v471; // 0x40f6b6
    int64_t v495 = v470; // 0x40f6b6
    int64_t v496 = v469; // 0x40f6b6
    if (v43 == 0) {
        goto lab_0x40f6ce;
    } else {
        goto lab_0x40f6b8;
    }
  lab_0x40fa70:;
    // 0x40fa70
    int64_t v300; // 0x40ef10
    int64_t v497 = v300;
    int64_t v299; // 0x40ef10
    int64_t v498 = v299;
    v118 = (int64_t *)(v282 + 16);
    int64_t v277; // 0x40ef10
    v109 = v277;
    int64_t v284; // 0x40f649
    v110 = v284;
    int64_t v278; // 0x40ef10
    v111 = v278;
    v112 = v498;
    v113 = v497;
    int64_t v280; // 0x40ef10
    v114 = v280;
    int64_t v281; // 0x40ef10
    v115 = v281;
    int64_t v283; // 0x40ef10
    v117 = v283;
    if (*v118 >= 1) {
        int64_t * v122 = (int64_t *)(v282 + 24); // 0x40fbec
        v136 = v29;
        v99 = v277;
        v101 = v284;
        v103 = v278;
        v105 = v497;
        v107 = v498;
        v108 = 0;
        while (true) {
          lab_0x40fbec:
            // 0x40fbec
            v96 = v108;
            v119 = v107;
            v36 = v105;
            v120 = v99;
            v121 = *(int64_t *)(*v122 + 8 * v96);
            int64_t v123 = 16 * v121 + v36; // 0x40fbff
            v98 = v120;
            v100 = v101;
            v102 = v103;
            v104 = v36;
            v106 = v119;
            v116 = v121;
            if ((*(char *)(v123 + 10) & 16) == 0) {
                goto lab_0x40fbde;
            } else {
                uint32_t v124 = *(int32_t *)(v123 + 8); // 0x40fc08
                if ((v124 & 0x3ff00) == 0) {
                    goto lab_0x40fad0;
                } else {
                    // 0x40fc17
                    v125 = (int64_t)v124;
                    v126 = function_40a330(v72, v119, v127);
                    v128 = v125 / 256;
                    v129 = v128 & 0xff03ff;
                    if ((v125 & 1024) != 0) {
                        // 0x40faa0
                        v98 = v120;
                        v100 = v129;
                        v102 = v128;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v126 % 2 == 0) {
                            goto lab_0x40fbde;
                        } else {
                            uint32_t v130 = (int32_t)v128 & 8; // 0x40faa8
                            int64_t v131 = v130; // 0x40faa8
                            v132 = v131;
                            v98 = v120;
                            v100 = v129;
                            v102 = v131;
                            v104 = v72;
                            v106 = v119;
                            v116 = v121;
                            if (v130 != 0) {
                                goto lab_0x40fbde;
                            } else {
                                goto lab_0x40fab1;
                            }
                        }
                    } else {
                        uint32_t v133 = (int32_t)v128 & 8; // 0x40fc52
                        int64_t v134 = v133; // 0x40fc52
                        v132 = v134;
                        v98 = v120;
                        v100 = v129;
                        v102 = v134;
                        v104 = v72;
                        v106 = v119;
                        v116 = v121;
                        if (v133 == 0 || v126 % 2 == 0) {
                            goto lab_0x40fab1;
                        } else {
                            goto lab_0x40fbde;
                        }
                    }
                }
            }
        }
    }
  lab_0x40ff33:
    // 0x40ff33
    v28 = 0;
    v291 = v109;
    v292 = v110;
    v293 = v111;
    v294 = v112;
    v295 = v113;
    v296 = v114;
    v297 = v115;
    v298 = v117;
    goto lab_0x40f684;
  lab_0x40f6ce:;
    int64_t v499 = v496;
    int64_t v500 = v495;
    int64_t v501 = v494;
    int64_t v502 = v490;
    int32_t v503 = v489;
    int32_t v504 = v503; // 0x40f6d1
    int64_t v505 = v491; // 0x40f6d1
    int64_t v506 = v492; // 0x40f6d1
    int64_t v507 = v493; // 0x40f6d1
    int64_t v265; // 0x40ef10
    int64_t v263; // 0x40ef10
    int64_t v264; // 0x40ef10
    int32_t v261; // 0x40ef10
    int64_t v262; // 0x40ef10
    int64_t v260; // 0x40ef10
    int64_t v276; // 0x40ef10
    int64_t v259; // 0x40ef10
    int64_t v275; // 0x40ef10
    int64_t v274; // 0x40ef10
    int32_t v258; // 0x40ef10
    int32_t v272; // 0x40ef10
    int64_t v348; // 0x40ef10
    char v349; // 0x40ef10
    if (v492 == 0) {
        // 0x40f6d7
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 != 0) {
            // break (via goto) -> 0x40f960
            goto lab_0x40f960_9;
        }
        // 0x40f6ee
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if (v43 == 0) {
            // break -> 0x40f74d
            goto lab_0x40f74d_6;
        }
        int32_t v508 = v503; // 0x40f706
        v258 = v272;
        v259 = v275;
        v260 = v276;
        v261 = v503;
        v262 = v502;
        v263 = v501;
        v264 = v500;
        v265 = v499;
        if ((v349 & (char)v274) != 0) {
            // break -> 0x40f74d
            goto lab_0x40f74d_6;
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
            // break (via goto) -> 0x40f74d
            goto lab_0x40f74d_6;
        }
        int64_t v510 = (int64_t)v509 + 1;
        int64_t v511; // 0x40f733
        while (*(int64_t *)(8 * v510 + v43) == 0) {
            // 0x40f733
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
                // break (via goto) -> 0x40f74d
                goto lab_0x40f74d_6;
            }
            v510 = v511;
        }
        int64_t v512 = function_40ea20(&v28, &v3, 0); // 0x40f9b5
        uint32_t v513 = v28; // 0x40f9ba
        int32_t v514 = v510;
        while (v513 == 0) {
            // 0x40f9c5
            v508 = v514;
            if (v512 != 0) {
                // 0x40f5e0
                v504 = v514;
                v505 = v513;
                v506 = v512;
                v507 = v348;
                goto lab_0x40f5e0_2;
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
                // break (via goto) -> 0x40f74d
                goto lab_0x40f74d_6;
            }
            // 0x40f720
            v510 = (int64_t)v509 + 1;
            while (*(int64_t *)(8 * v510 + v43) == 0) {
                // 0x40f733
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
                    // break (via goto) -> 0x40f74d
                    goto lab_0x40f74d_6;
                }
                v510 = v511;
            }
            // 0x40f9a0
            v512 = function_40ea20(&v28, &v3, 0);
            v513 = v28;
            v514 = v510;
        }
        // 0x40f9e0
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
            // break -> 0x40f74d
            goto lab_0x40f74d_6;
        }
    }
    goto lab_0x40f5e0_2;
  lab_0x40f6b8:;
    int64_t v564 = function_40ea20(&v28, &v3, v33); // 0x40f6c6
    v489 = v30;
    v490 = v32;
    v491 = v33;
    v492 = v564;
    v493 = v348;
    v494 = v35;
    v495 = v37;
    v496 = v39;
    goto lab_0x40f6ce;
  lab_0x40f5e0_2:;
    int64_t v515 = v507;
    int64_t v516 = v506;
    int64_t v517 = v505;
    int32_t v518 = v504;
    int64_t v519 = v518; // 0x40f5e3
    char v520 = *(char *)(v516 + 104); // 0x40f605
    int64_t v521 = v274; // 0x40f60b
    int64_t v522 = v275; // 0x40f60b
    int64_t v523 = v276; // 0x40f60b
    int64_t v524 = v517; // 0x40f60b
    int64_t v525 = v515; // 0x40f60b
    int64_t v526; // 0x40ef10
    int64_t v527; // 0x40ef10
    if ((v520 & 16) == 0) {
        goto lab_0x40f638;
    } else {
        // 0x40f60d
        v527 = v517;
        v526 = v515;
        if (v520 < 0) {
            int64_t v528 = v516 + 24; // 0x40fa04
            int64_t v529 = function_40a550(&v3, *(int64_t *)(v516 + 16), v528, v519); // 0x40fa0e
            v527 = v528;
            v526 = v72;
            v521 = v274;
            v522 = v275;
            v523 = v276;
            v524 = v528;
            v525 = v72;
            if (v529 == 0) {
                goto lab_0x40f638;
            } else {
                goto lab_0x40f615;
            }
        } else {
            goto lab_0x40f615;
        }
    }
  lab_0x40f638:;
    // 0x40f638
    char v273; // 0x40ef10
    char v530 = v273 & (char)(v282 == v516); // 0x40f5ee
    int32_t v531 = v530 == 0 ? (int64_t)v272 : v284;
    int64_t v243 = v499; // 0x40f643
    int64_t v244 = v516; // 0x40f643
    int64_t v245 = v500; // 0x40f643
    int64_t v246 = v501; // 0x40f643
    int64_t v247 = v525; // 0x40f643
    int64_t v248 = v519; // 0x40f643
    int64_t v249 = v524; // 0x40f643
    int64_t v250 = v502; // 0x40f643
    int64_t v252 = v523; // 0x40f643
    int64_t v253 = v522; // 0x40f643
    int64_t v254 = v521; // 0x40f643
    char v255 = v530; // 0x40f643
    int32_t v256 = v518; // 0x40f643
    int32_t v257 = v531; // 0x40f643
    v258 = v531;
    v259 = v522;
    v260 = v523;
    v261 = v518;
    v262 = v502;
    v263 = v501;
    v264 = v500;
    v265 = v499;
    if (v519 >= a6) {
        // break -> 0x40f74d
        goto lab_0x40f74d_6;
    }
    goto lab_0x40f649;
  lab_0x40f615:
    // 0x40f615
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
    int32_t v309; // 0x40ef10
    if (v309 == 0) {
        goto lab_0x40f75f;
    }
    goto lab_0x40f638;
  lab_0x40f410:
    // 0x40f410
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    int64_t v353; // 0x40ef10
    int64_t v179; // 0x40f2fc
    if (v179 > v353) {
        // break -> 0x40f960
        goto lab_0x40f960_9;
    }
    char v532 = 0;
    int64_t v533 = v353;
    int64_t v534 = 0; // 0x40f45f
    if (v533 < a3) {
        // 0x40f461
        v534 = (int64_t)*(char *)(v533 + a2);
    }
    int64_t v535 = v534;
    int64_t v536 = v535; // 0x40f469
    int64_t v313; // 0x40f07e
    if (v313 != 0) {
        // 0x40f46b
        v536 = (int64_t)*(char *)(v535 + v313);
    }
    int64_t v345; // 0x40ef10
    while (*(char *)(v536 + v345) == 0) {
        int64_t v537 = v533 - 1; // 0x40f448
        if (v537 < v179) {
            // 0x410218
            v172 = v537;
            v23 = v40;
            v26 = 1;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            goto lab_0x40f960_9;
        }
        v532 = 1;
        v533 = v537;
        v534 = 0;
        if (v533 < a3) {
            // 0x40f461
            v534 = (int64_t)*(char *)(v533 + a2);
        }
        // 0x40f466
        v535 = v534;
        v536 = v535;
        if (v313 != 0) {
            // 0x40f46b
            v536 = (int64_t)*(char *)(v535 + v313);
        }
    }
    // 0x40f475
    int32_t v356; // 0x40ef10
    int32_t v235 = v356; // 0x40f477
    int64_t v355; // 0x40ef10
    int64_t v236 = v355; // 0x40f477
    int128_t v354; // 0x40ef10
    int128_t v237 = v354; // 0x40f477
    int64_t v238 = v353; // 0x40f477
    int64_t v239 = a3; // 0x40f477
    int64_t v240 = v179; // 0x40f477
    int64_t v350; // 0x40ef10
    int64_t v241 = v350; // 0x40f477
    if (v532 != 0) {
        // 0x40f479
        v172 = v533;
        v235 = v356;
        v236 = v355;
        v237 = v354;
        v238 = v533;
        v239 = a3;
        v240 = v179;
        v241 = v350;
    }
    goto lab_0x40f488;
  lab_0x40f488:;
    int64_t v538 = v238;
    v162 = function_40a620(&v3, v538, v127);
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if ((int32_t)v162 != 0) {
        // break -> 0x40f960
        goto lab_0x40f960_9;
    }
    int64_t v234 = v241;
    int64_t v233 = v240;
    int64_t v232 = v239;
    v54 = v237;
    int64_t v231 = v236;
    int32_t v215 = v235;
    int64_t v285; // 0x40ef10
    int32_t v339; // 0x40f31f
    if (v285 == 0 || v339 == 1) {
        goto lab_0x40f4cc;
    } else {
        // 0x40f4bb
        v169 = v215;
        v170 = v231;
        v171 = v54;
        v173 = v538;
        v174 = v232;
        v175 = v233;
        v176 = v234;
        int32_t * v539; // 0x40ef10
        if (*v539 == -1) {
            goto lab_0x40fdd0;
        } else {
            goto lab_0x40f4cc;
        }
    }
  lab_0x40fe0c:;
    // 0x40fe0c
    int64_t v191; // 0x40ef10
    int64_t v540 = v191;
    uint64_t v541 = v540 - v1; // 0x40fe73
    int64_t v542; // 0x40fe97
    if (v285 <= v541) {
        // 0x40fe85
        v542 = function_40a620(&v3, v540, v127);
        v23 = v40;
        v26 = v542;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if ((int32_t)v542 != 0) {
            // break (via goto) -> 0x40f960
            goto lab_0x40f960_9;
        }
    }
    int64_t v543 = v345; // 0x40fe36
    if (v540 < a3) {
        // 0x40fe38
        v543 = (int64_t)*(char *)(v541 + v326) + v345;
    }
    // 0x40fe47
    int32_t v188; // 0x40ef10
    v235 = v188;
    int64_t v189; // 0x40ef10
    v236 = v189;
    int128_t v190; // 0x40ef10
    v237 = v190;
    v238 = v540;
    int64_t v192; // 0x40ef10
    v239 = v192;
    int64_t v193; // 0x40ef10
    v240 = v193;
    v241 = v179;
    int64_t v180; // 0x40f30b
    int64_t v178; // 0x40ef10
    while (*(char *)v543 == 0) {
        int64_t v544 = v540 + v178; // 0x40fe53
        v172 = v544;
        v23 = v40;
        v26 = 1;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v544 < v179 || v544 > v180) {
            // break (via goto) -> 0x40f960
            goto lab_0x40f960_9;
        }
        v540 = v544;
        v541 = v540 - v1;
        if (v285 <= v541) {
            // 0x40fe85
            v542 = function_40a620(&v3, v540, v127);
            v23 = v40;
            v26 = v542;
            v25 = v41;
            v24 = v42;
            v22 = v43;
            if ((int32_t)v542 != 0) {
                // break (via goto) -> 0x40f960
                goto lab_0x40f960_9;
            }
        }
        // 0x40fe30
        v543 = v345;
        if (v540 < a3) {
            // 0x40fe38
            v543 = (int64_t)*(char *)(v541 + v326) + v345;
        }
        // 0x40fe47
        v235 = v188;
        v236 = v189;
        v237 = v190;
        v238 = v540;
        v239 = v192;
        v240 = v193;
        v241 = v179;
    }
    goto lab_0x40f488;
  lab_0x40f86c:;
    // 0x40f86c
    int64_t v358; // 0x40ef10
    int64_t v545 = v358;
    int64_t v357; // 0x40ef10
    int64_t v546 = v357;
    v235 = v356;
    v236 = v355;
    v237 = v354;
    v238 = v546;
    v239 = v545;
    int64_t v351; // 0x40ef10
    v240 = v351;
    v241 = v350;
    char * v346; // 0x40ef10
    if (v180 == v546) {
        int64_t v547 = 0; // 0x40f883
        if (v180 < a3) {
            // 0x40f885
            v547 = (int64_t)*v346;
        }
        int64_t v548 = v547;
        int64_t v549 = v548; // 0x40f899
        if (v313 != 0) {
            // 0x40f89b
            v549 = (int64_t)*(char *)(v548 + v313);
        }
        // 0x40f89f
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
            // break -> 0x40f960
            goto lab_0x40f960_9;
        }
    }
    goto lab_0x40f488;
  lab_0x40f4cc:;
    int64_t v550 = *v13; // 0x40f4f3
    v28 = 0;
    int64_t v218 = v347; // 0x40f527
    int64_t v220 = v72; // 0x40f527
    int64_t v222 = v550; // 0x40f527
    int64_t v223; // 0x40ef10
    int64_t v221; // 0x40ef10
    int64_t v219; // 0x40ef10
    if (*(char *)(v550 + 104) >= 0) {
        goto lab_0x40f570;
    } else {
        uint64_t v551 = function_40a330(v72, (int64_t)v215 - 1, v127); // 0x40f537
        if (v551 % 2 != 0) {
            // 0x4101c8
            v219 = v347;
            v221 = v72;
            v223 = *v15;
            goto lab_0x4101cc;
        } else {
            int32_t v552 = v551; // 0x40f544
            v218 = v347;
            v220 = v72;
            v222 = v550;
            if (v552 == 0) {
                goto lab_0x40f570;
            } else {
                int64_t v553 = v551 & 6; // 0x40f54a
                if (v553 == 6) {
                    // 0x410560
                    v219 = 6;
                    v221 = v72;
                    v223 = *v19;
                    goto lab_0x4101cc;
                } else {
                    if ((v551 & 2) != 0) {
                        // 0x410290
                        v219 = v553;
                        v221 = v72;
                        v223 = *v17;
                        goto lab_0x4101cc;
                    } else {
                        // 0x40f55e
                        v218 = v553;
                        v220 = v72;
                        v222 = v550;
                        if ((v551 & 4) != 0) {
                            int64_t v554 = *(int64_t *)(v550 + 80); // 0x4102a0
                            int64_t v555 = function_4098b0((int128_t *)&v28, a1, (int64_t *)v554, v552); // 0x4102b1
                            v219 = v554;
                            v221 = v348;
                            v223 = v555;
                            goto lab_0x4101cc;
                        } else {
                            goto lab_0x40f570;
                        }
                    }
                }
            }
        }
    }
  lab_0x40f570:;
    int64_t v198 = v222;
    int64_t v202 = v220;
    int64_t v200 = v218;
    int64_t v242; // 0x40ef10
    char v197; // 0x40ef10
    int64_t v201; // 0x40ef10
    int64_t v199; // 0x40ef10
    char v196; // 0x40ef10
    if (v43 == 0) {
        goto lab_0x40f594;
    } else {
        // 0x40f57d
        *(int64_t *)(8 * (int64_t)v215 + v43) = v198;
        if (*v40 != 0) {
            int64_t v556 = v198 + 16; // 0x410518
            int64_t v557 = v198 + 24; // 0x41051c
            int64_t v558 = function_40a1e0(v72, v556, v557, 0); // 0x41052b
            int32_t v559 = v558; // 0x410530
            v28 = v559;
            v242 = v558;
            if (v559 != 0) {
                goto lab_0x41061e;
            } else {
                char * v560 = (char *)(v198 + 104); // 0x41053f
                char v561 = *v560; // 0x41053f
                v196 = 0;
                v197 = v561;
                v199 = v557;
                v201 = v72;
                if ((v561 & 64) != 0) {
                    int64_t v562 = function_40e1a0(v72, v556, v557); // 0x4105da
                    int32_t v563 = v562; // 0x4105df
                    v28 = v563;
                    v242 = v562;
                    if (v563 != 0) {
                        goto lab_0x41061e;
                    } else {
                        // 0x4105ea
                        v196 = 0;
                        v197 = *v560;
                        v199 = v557;
                        v201 = v72;
                        goto lab_0x40f5a8;
                    }
                } else {
                    goto lab_0x40f5a8;
                }
            }
        } else {
            goto lab_0x40f594;
        }
    }
  lab_0x40fdd0:;
    int64_t v177 = v173 + v178; // 0x40fdd8
    v172 = v177;
    v23 = v40;
    v26 = 1;
    v25 = v41;
    v24 = v42;
    v22 = v43;
    if (v177 < v179 || v177 > v180) {
        // break -> 0x40f960
        goto lab_0x40f960_9;
    }
    int32_t v181 = v169; // 0x40fe06
    int64_t v182 = v170; // 0x40fe06
    int128_t v183 = v171; // 0x40fe06
    int64_t v184 = v177; // 0x40fe06
    int64_t v185 = v174; // 0x40fe06
    int64_t v186 = v175; // 0x40fe06
    int64_t v187 = v176; // 0x40fe06
    v188 = v169;
    v189 = v170;
    v190 = v171;
    v191 = v177;
    v192 = v174;
    v193 = v175;
    int32_t v194; // 0x40ef10
    if (v194 < 9) {
        goto lab_0x40f3d8;
    } else {
        goto lab_0x40fe0c;
    }
  lab_0x40f594:;
    // 0x40f594
    char v195; // 0x40f3b6
    v196 = v195;
    v197 = *(char *)(v198 + 104);
    v199 = v200;
    v201 = v202;
    goto lab_0x40f5a8;
  lab_0x40f5a8:;
    int64_t v203 = v201;
    int64_t v204 = v199;
    char v205 = v196;
    int64_t v206; // 0x40ef10
    int64_t v207; // 0x40ef10
    int64_t v208; // 0x40ef10
    int64_t v209; // 0x40ef10
    int64_t v210; // 0x40ef10
    int64_t v211; // 0x40ef10
    int64_t v212; // 0x40ef10
    int64_t v213; // 0x40ef10
    if ((v197 & 16) != 0) {
        // 0x410238
        if (*(char *)(v198 + 104) < 0) {
            int64_t v214 = v215;
            int64_t v216 = v198 + 24; // 0x4102c9
            int64_t v217 = function_40a550(&v3, *(int64_t *)(v198 + 16), v216, v214); // 0x4102d0
            v206 = v214;
            v213 = 0;
            v212 = v216;
            v210 = v72;
            v208 = -1;
            v207 = v214;
            v211 = v216;
            v209 = v72;
            if (v217 == 0) {
                goto lab_0x40f5c0;
            } else {
                goto lab_0x410243;
            }
        } else {
            // 0x410238
            v207 = v215;
            v211 = v204;
            v209 = v203;
            goto lab_0x410243;
        }
    } else {
        // 0x40f5a8
        v206 = v215;
        v213 = 0;
        v212 = v204;
        v210 = v203;
        v208 = -1;
        goto lab_0x40f5c0;
    }
  lab_0x4101cc:
    // 0x4101cc
    v218 = v219;
    v220 = v221;
    v222 = v223;
    int64_t v224; // 0x40ef10
    int64_t v225; // 0x40ef10
    int64_t v226; // 0x40ef10
    int64_t v227; // 0x40ef10
    int32_t v228; // 0x40ef10
    int64_t v229; // 0x40ef10
    int128_t v230; // 0x40ef10
    if (v223 != 0) {
        goto lab_0x40f570;
    } else {
        // 0x4101d5
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        if (v28 == 12) {
            // break -> 0x40f960
            goto lab_0x40f960_9;
        }
        // 0x4101e9
        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1073, "check_matching");
        v228 = v215;
        v229 = v231;
        v230 = v54;
        v227 = a1;
        v225 = v232;
        v226 = v233;
        v224 = v234;
      lab_0x410208_2:
        // 0x410208
        v172 = v227;
        v235 = v228;
        v236 = v229;
        v237 = v230;
        v238 = v227;
        v239 = v225;
        v240 = v226;
        v241 = v224;
        goto lab_0x40f488;
    }
  lab_0x41061e:
    // 0x41061e
    v50 = v215;
    v52 = v231;
    v48 = v232;
    v46 = v233;
    v44 = 0x100000000 * v242 >> 32;
    v56 = v234;
    goto lab_0x40f75f;
  lab_0x40f5c0:
    // 0x40f5c0
    v243 = v234;
    v244 = v198;
    v245 = v233;
    v246 = v232;
    v247 = v210;
    v248 = v206;
    v249 = v212;
    v250 = v231;
    int64_t v251; // 0x40f3a7
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
    int64_t v266; // 0x40ef10
    int64_t v267; // bp-576, 0x40ef10
    int32_t v268; // bp-688, 0x40ef10
    int32_t result; // bp-692, 0x40ef10
    int64_t v269; // 0x4106ae
    int64_t v270; // 0x410723
    int64_t * v271; // 0x410723
    if (v206 < a6) {
        while (true) {
          lab_0x40f649:
            // 0x40f649
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
                int32_t v286 = function_407a80(v72, v279 + 2 & 0xffffffff);
                v28 = v286;
                if (v286 != 0) {
                    // 0x40ff58
                    v23 = v40;
                    v26 = 12;
                    v25 = v41;
                    v24 = v42;
                    v22 = v43;
                    if (v286 != 12) {
                        // 0x41064d
                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 1128, "check_matching");
                        v267 = v283;
                        v269 = *(int64_t *)0x40835000002340;
                        result = 0;
                        if (v269 == 0) {
                            int64_t v287 = function_409bb0(&result, 0x40840800000000, (int64_t *)"check_matching", 0x40835000002340, v280, v281); // 0x410b6b
                            *(int64_t *)0x656765722f628cac = v287;
                            // 0x4106e9
                            return result;
                        }
                        // 0x410700
                        v268 = 0;
                        int64_t v288 = function_409bb0(&v268, 0x40840800000000, (int64_t *)"check_matching", 0x40835000002340, v280, v281); // 0x410713
                        uint32_t result2 = v268; // 0x41071b
                        if (result2 != 0) {
                            // 0x4106e9
                            return result2;
                        }
                        // 0x410723
                        v270 = v288 + 56;
                        v271 = (int64_t *)v270;
                        int64_t v289 = *v271; // 0x410723
                        if (v289 != 0) {
                            goto lab_0x4107b0;
                        } else {
                            // 0x410735
                            *(int64_t *)(v288 + 64) = 0;
                            *v271 = 0x676e69686374;
                            int64_t * mem3 = malloc(0x4b431ba0); // 0x410749
                            *(int64_t *)(v288 + 72) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x4106e9
                                return 12;
                            }
                            // 0x410757
                            v268 = 0;
                            v266 = v289;
                            goto lab_0x41077a;
                        }
                    } else {
                        goto lab_0x40f960_9;
                    }
                }
                int64_t v290 = v29; // 0x40fa54
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
                    goto lab_0x40f684;
                } else {
                    goto lab_0x40fa70;
                }
            } else {
                // 0x40f679
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
                    goto lab_0x40fa70;
                } else {
                    goto lab_0x40f684;
                }
            }
        }
    }
  lab_0x40f74d_6:;
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
        int64_t * v308 = (int64_t *)v306; // 0x40f75c
        *v308 = *v308 + (int64_t)v258;
        v50 = v305;
        v52 = v304;
        v48 = v303;
        v46 = v302;
        v44 = v307;
        v56 = v301;
    }
    goto lab_0x40f75f;
  lab_0x410243:
    // 0x410243
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
        goto lab_0x40f5c0;
    } else {
        goto lab_0x40f75f;
    }
  lab_0x40fdc0:
    // 0x40fdc0
    function_408270(&v3);
    v169 = v51;
    v170 = v53;
    v171 = v55;
    v173 = v172;
    v174 = v49;
    v175 = v47;
    v176 = v57;
    goto lab_0x40fdd0;
  lab_0x410572:
    // 0x410572
    free(mem);
    free((int64_t *)v68);
    v53 = v66;
    v55 = v76;
    v57 = v69;
    if (v58 != 1) {
        // 0x40f960
        v23 = v40;
        v26 = v63 & 0xffffffff;
        v25 = v41;
        v24 = v42;
        v22 = v43;
        goto lab_0x40f960_9;
    }
    goto lab_0x40fdc0;
  lab_0x40f058:;
    int64_t v310 = v21;
    int64_t v311 = v20;
    int32_t v312 = 1; // 0x40f069
    if (v11 == 0) {
        // 0x40f3e0
        v312 = *(int64_t *)(a1 + 152) != 0;
    }
    // 0x40f06f
    v313 = *(int64_t *)(a1 + 40);
    v143 = (int64_t *)(a1 + 24);
    int32_t * v314 = (int32_t *)(a1 + 180); // 0x40f086
    int64_t v315 = v12 + 1; // 0x40f09d
    int64_t v316 = (int64_t)*v314; // 0x40f0a6
    int64_t v317 = v315 - v316; // 0x40f0a9
    int64_t v318 = v317 < 0 == ((v317 ^ v315) & (v315 ^ v316)) < 0 ? v315 : v316; // 0x40f0b4
    int64_t v319 = a3 + 1; // 0x40f0b8
    int64_t v320 = v318 - v319; // 0x40f0cc
    int64_t v321 = v320 < 0 == ((v320 ^ v318) & (v318 ^ v319)) < 0 == (v320 != 0) ? v319 : v318; // 0x40f0d7
    v3 = a2;
    v72 = &v3;
    int64_t v322 = function_406ee0(v72, v321); // 0x40f13c
    int64_t v323; // 0x40ef10
    int64_t v324; // 0x40ef10
    int64_t v325; // 0x40ef10
    if ((int32_t)v322 != 0) {
        // 0x40f06f
        v23 = (int64_t *)(a1 + 152);
        v26 = v322;
        goto lab_0x40f960_9;
    } else {
        // 0x40f14d
        v309 = v312;
        if ((*v143 & 0x400000 || v313) != 0) {
            goto lab_0x40f1a3;
        } else {
            // 0x40f183
            v323 = a2;
            v324 = a2;
            v325 = a3;
            if (*v314 < 2) {
                goto lab_0x40f1a5;
            } else {
                goto lab_0x40f1a3;
            }
        }
    }
  lab_0x40f1a3:
    // 0x40f1a3
    v324 = v323;
    v325 = 0;
    goto lab_0x40f1a5;
  lab_0x40f03a:
    // 0x40f03a
    v20 = 0;
    v21 = 0;
    if (a4 != 0 == (a5 != 0)) {
        // 0x40f980
        return 1;
    }
    goto lab_0x40f058;
  lab_0x40f1a5:
    // 0x40f1a5
    v285 = v325;
    v326 = v324;
    v40 = (int64_t *)(a1 + 152);
    int64_t v327 = *v40; // 0x40f1e1
    int64_t v328 = 2 * v327; // 0x40f1fb
    int64_t v329; // 0x40ef10
    int64_t v330; // 0x40ef10
    if (v328 < 1) {
        goto lab_0x40f25c;
    } else {
        // 0x40f20b
        v23 = v40;
        v26 = 12;
        if (v328 > 0x666666666666666) {
            goto lab_0x40f960_9;
        } else {
            int32_t v331 = v327;
            int64_t * mem4 = malloc(80 * v331); // 0x40f226
            int64_t v332 = (int64_t)mem4; // 0x40f226
            int64_t * mem5 = malloc(16 * v331); // 0x40f23d
            int64_t v333 = (int64_t)mem5; // 0x40f23d
            v330 = v332;
            v329 = v333;
            v23 = v40;
            v26 = 12;
            v25 = v332;
            v24 = v333;
            if (mem4 == NULL || mem5 == NULL) {
                goto lab_0x40f960_9;
            } else {
                goto lab_0x40f25c;
            }
        }
    }
  lab_0x40f25c:
    // 0x40f25c
    v42 = v329;
    v41 = v330;
    int64_t v334; // 0x40ef10
    if (v11 < 2) {
        // 0x410150
        v334 = 0;
        if ((*(char *)(a1 + 176) & 2) != 0) {
            goto lab_0x40f286;
        } else {
            goto lab_0x40f2c2;
        }
    } else {
        goto lab_0x40f286;
    }
  lab_0x40f286:
    // 0x40f286
    v23 = v40;
    v26 = 12;
    v25 = v41;
    v24 = v42;
    if (v2 < 0x1fffffffffffffff) {
        // 0x40f2a1
        g94 = &v267;
        int64_t * mem6 = malloc(8 * (int32_t)v2 + 8); // 0x40f2a9
        int64_t v335 = (int64_t)mem6; // 0x40f2a9
        v334 = v335;
        v23 = v40;
        v26 = 12;
        v25 = v41;
        v24 = v42;
        v22 = v335;
        if (mem6 == NULL) {
            goto lab_0x40f960_9;
        } else {
            goto lab_0x40f2c2;
        }
    } else {
        goto lab_0x40f960_9;
    }
  lab_0x40f2c2:
    // 0x40f2c2
    v43 = v334;
    v172 = v311;
    int64_t v336 = v311 - v310; // 0x40f2e8
    bool v337 = v336 == 0 | v336 < 0 != ((v336 ^ v311) & (v310 ^ v311)) < 0;
    int32_t v338 = v337; // 0x40f2eb
    v339 = *v314;
    int32_t v340 = 8; // 0x40f331
    if (v6 != NULL) {
        int32_t v341 = 4; // 0x40f33b
        if (v339 != 1) {
            // 0x40f33d
            v341 = 4 * (int32_t)((*v143 & 0x400000 | v313) == 0);
        }
        // 0x40f360
        v340 = 2 * v338 | (int32_t)(v313 != 0) | v341;
    }
    // 0x40f37c
    v179 = v337 ? v311 : v310;
    v180 = v336 < 0 == ((v336 ^ v311) & (v310 ^ v311)) < 0 ? v311 : v310;
    int64_t v342 = v311 - v180; // 0x40f37c
    int64_t v343 = v311 - v179; // 0x40f384
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
          lab_0x40f3d8:
            // 0x40f3d8
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
            switch (g94) {
                case 0: {
                    goto lab_0x40f410;
                }
                case 1: {
                    goto lab_0x40f410;
                }
                case 2: {
                    // 0x40f8c8
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        // 0x40f8cf
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v359 = v353; // 0x40f8e5
                        if (*(char *)((int64_t)*(char *)(v353 + a2) + v345) != 0) {
                            goto lab_0x40f488;
                        } else {
                            int64_t v360 = v359 + 1;
                            while (v180 != v360) {
                                // 0x40f900
                                v359 = v360;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v360;
                                v225 = v352;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)*(char *)(v360 + a2) + v345) != 0) {
                                    goto lab_0x410208_2;
                                }
                                v360 = v359 + 1;
                            }
                            // 0x40f91a
                            v172 = v180;
                            v357 = v360;
                            v358 = v352;
                            goto lab_0x40f86c;
                        }
                    } else {
                        goto lab_0x40f86c;
                    }
                }
                case 3: {
                    // 0x40f7f0
                    v357 = v353;
                    v358 = v352;
                    if (v180 > v353) {
                        unsigned char v361 = *(char *)(v313 + (int64_t)*(char *)(v353 + a2)); // 0x40f808
                        v235 = v356;
                        v236 = v355;
                        v237 = v354;
                        v238 = v353;
                        v239 = v352;
                        v240 = v351;
                        v241 = v350;
                        int64_t v362 = v353; // 0x40f819
                        if (*(char *)((int64_t)v361 + v345) != 0) {
                            goto lab_0x40f488;
                        } else {
                            int64_t v363 = v362 + 1;
                            while (v180 != v363) {
                                unsigned char v364 = *(char *)(v313 + (int64_t)*(char *)(v363 + a2)); // 0x40f845
                                v362 = v363;
                                v228 = v356;
                                v229 = v355;
                                v230 = v354;
                                v227 = v363;
                                v225 = a2;
                                v226 = v351;
                                v224 = v350;
                                if (*(char *)((int64_t)v364 + v345) != 0) {
                                    goto lab_0x410208_2;
                                }
                                v363 = v362 + 1;
                            }
                            // 0x40f85f
                            v172 = v180;
                            v357 = v363;
                            v358 = a2;
                            goto lab_0x40f86c;
                        }
                    } else {
                        goto lab_0x40f86c;
                    }
                }
                case 4: {
                    goto lab_0x40f488;
                }
                default: {
                    goto lab_0x40fe0c;
                }
            }
        }
    }
    goto lab_0x40f960_9;
  lab_0x4107b0:;
    int64_t v365 = v269 + 8; // 0x4107bd
    int64_t result3 = function_4090b0((int128_t *)"check_matching", v365, v270); // 0x4107c9
    int32_t v366 = result3; // 0x4107ce
    result = v366;
    int64_t v367 = v280; // 0x4107d4
    int64_t v368 = v281; // 0x4107d4
    int64_t v369 = 0; // 0x4107d4
    if (v366 != 0) {
        // 0x4106e9
        return result3;
    }
    goto lab_0x410c60;
  lab_0x410c60:;
    int64_t v370 = v368;
    int64_t v371 = v367;
    int64_t v372 = *(int64_t *)((int64_t)"lib/regexec.c" + 48); // 0x410c60
    int64_t v373 = 40 * *(int64_t *)(v372 + 8 * v369); // 0x410c71
    int64_t v374 = 0x40837000000000; // 0x410c79
    int64_t v375 = v371; // 0x410c79
    int64_t v376 = v370; // 0x410c79
    int64_t v377; // 0x40ef10
    int64_t v378; // 0x40ef10
    int64_t v379; // 0x40ef10
    int64_t v380; // 0x40ef10
    int64_t v381; // 0x40ef10
    int64_t v382; // 0x40ef10
    int64_t v383; // 0x410c8c
    int64_t v384; // 0x410c98
    if (*(int64_t *)(v373 + 0x40837000000010) < 1128) {
        // 0x410c7f
        v374 = 0x40837000000000;
        v375 = v371;
        v376 = v370;
        if (*(int64_t *)(v373 + 0x40837000000008) < 1128) {
            goto lab_0x410d1d;
        } else {
            // 0x410c89
            v383 = *(int64_t *)0x40840800000000;
            int64_t v385 = 16 * *(int64_t *)(v373 + 0x40837000000000); // 0x410c94
            v384 = *(int64_t *)(v383 + v385);
            v377 = v383;
            v380 = v385;
            v378 = 0;
            v381 = 0x61666e5f6b6e696c;
            v382 = -1;
            v379 = -1;
            if (*(int64_t *)(v373 + 0x40837000000018) == 1128) {
                goto lab_0x410d76;
            } else {
                goto lab_0x410cce;
            }
        }
    } else {
        goto lab_0x410d1d;
    }
  lab_0x410d1d:;
    int64_t v386 = v376;
    int64_t v387 = v375;
    int64_t v388 = v369 + 1; // 0x410d1d
    v367 = v387;
    v368 = v386;
    v369 = v388;
    if (v388 >= *(int64_t *)((int64_t)"lib/regexec.c" + 40)) {
        // 0x410d2b
        result = 0;
        int64_t v389 = function_409bb0(&result, 0x40840800000000, (int64_t *)"check_matching", v374, v387, v386); // 0x4107f8
        *(int64_t *)0x656765722f628cac = v389;
        uint32_t v390 = result; // 0x410801
        // 0x4106e9
        return v390 != 0 ? (int64_t)v390 : 0;
    }
    goto lab_0x410c60;
  lab_0x41077a:;
    int64_t v391 = *(int64_t *)(8 * v266 + 0x61666e5f6b6e696c); // 0x410781
    int64_t v392 = *(int64_t *)0x40840800000038; // 0x410789
    int32_t v393 = function_408b40(v271, (int128_t *)(v392 + 24 * v391)); // 0x410797
    v268 = v393;
    if (v393 != 0) {
        // 0x4106e9
        return 12;
    }
    int64_t v394 = v266 + 1; // 0x410770
    v266 = v394;
    if (v394 > 0x676e69686373) {
        goto lab_0x4107b0;
    } else {
        goto lab_0x41077a;
    }
  lab_0x410d76:;
    int64_t v395 = v382;
    int64_t v396 = v381; // 0x40ef10
    int64_t v397 = v379; // 0x40ef10
    goto lab_0x410d76_2;
  lab_0x410cce:;
    int64_t v410 = v378;
    int64_t v414 = v380;
    int64_t v412 = v377;
    int64_t v416 = *(int64_t *)(8 * v410 + 0x61666e5f6b6e696c); // 0x410cd2
    int64_t v417 = 16 * v416 + v412; // 0x410cdd
    int64_t v411; // 0x40ef10
    int64_t v415; // 0x40ef10
    int64_t result4; // 0x40ef10
    int64_t v413; // 0x40ef10
    if ((*(char *)(v417 + 8) || 1) == 9) {
        // 0x410cec
        if (v384 != *(int64_t *)v417) {
            goto lab_0x410cc0;
        } else {
            int64_t v418 = function_40ae10(0x40840800000000, v416, (int64_t)"check_matching", v365); // 0x410cfc
            result4 = v418;
            if ((int32_t)v418 != 0) {
                // 0x4106e9
                return result4;
            }
            int64_t v419 = v410 + 1; // 0x410d09
            v374 = v365;
            v375 = v384;
            v376 = v370;
            if (v419 < 0x676e69686374) {
                // 0x410d09
                v411 = *(int64_t *)0x40840800000000;
                v413 = v365;
                v415 = v419;
                goto lab_0x410cca;
            } else {
                goto lab_0x410d1d;
            }
        }
    } else {
        goto lab_0x410cc0;
    }
  lab_0x410d76_2:;
    int64_t v398 = v397;
    int64_t v399 = v396;
    int64_t v400 = *(int64_t *)v399; // 0x410d76
    int64_t v401 = 16 * v400 + v383; // 0x410d80
    char v402 = *(char *)(v401 + 8); // 0x410d83
    int64_t v403; // 0x40ef10
    int64_t v404; // 0x40ef10
    int64_t v405; // 0x40ef10
    int64_t v406; // 0x410d69
    if (v402 != 8) {
        // 0x410d60
        v406 = v398;
        if (v402 != 9) {
            goto lab_0x410d6d;
        } else {
            // 0x410d66
            v406 = v384 == *(int64_t *)v401 ? v400 : v398;
            goto lab_0x410d6d;
        }
    } else {
        int64_t v407 = v384 == *(int64_t *)v401 ? v400 : v395; // 0x410d91
        int64_t v408 = v399 + 8; // 0x410d95
        v381 = v408;
        v382 = v407;
        v379 = v398;
        v404 = v408;
        v405 = v407;
        v403 = v398;
        if (v408 != 0x6169a9d2b6b1850c) {
            goto lab_0x410d76;
        } else {
            goto lab_0x410d9e;
        }
    }
  lab_0x410cc0:;
    int64_t v409 = v410 + 1; // 0x410cc0
    v411 = v412;
    v413 = v414;
    v415 = v409;
    v374 = v414;
    v375 = v384;
    v376 = v370;
    if (v409 > 0x676e69686373) {
        goto lab_0x410d1d;
    } else {
        goto lab_0x410cca;
    }
  lab_0x410cca:
    // 0x410cca
    v377 = v411;
    v380 = v413;
    v378 = v415;
    goto lab_0x410cce;
  lab_0x410d6d:;
    int64_t v420 = v399 + 8; // 0x410d6d
    v396 = v420;
    v397 = v406;
    v404 = 0x6169a9d2b6b1850c;
    v405 = v395;
    v403 = v406;
    if (v420 == 0x6169a9d2b6b1850c) {
        goto lab_0x410d9e;
    } else {
        goto lab_0x410d76_2;
    }
  lab_0x410d9e:;
    int64_t v421 = v403;
    int64_t v422 = v405;
    int64_t v423; // 0x40ef10
    if (v422 >= 0) {
        int64_t v424 = function_40ae10(0x40840800000000, v422, (int64_t)"check_matching", v365); // 0x410e4b
        result4 = v424;
        if ((int32_t)v424 != 0) {
            // 0x4106e9
            return result4;
        }
        // 0x410e58
        v374 = v365;
        v375 = v384;
        v376 = v421;
        v423 = v365;
        if (v421 < 0) {
            goto lab_0x410d1d;
        } else {
            goto lab_0x410dbb;
        }
    } else {
        // 0x410daf
        v374 = v404;
        v375 = v384;
        v376 = v421;
        v423 = v404;
        if (v421 < 0) {
            goto lab_0x410d1d;
        } else {
            goto lab_0x410dbb;
        }
    }
  lab_0x410dbb:;
    int64_t v425 = v423; // 0x410dcb
    int64_t v426 = 0; // 0x410dcb
    goto lab_0x410de2;
  lab_0x410de2:;
    int64_t v427 = v426;
    int64_t v428 = v425;
    int64_t v429 = *(int64_t *)(8 * v427 + 0x61666e5f6b6e696c); // 0x410de2
    int64_t v430 = 24 * v429; // 0x410df2
    int64_t v431 = *(int64_t *)0x40840800000038 + v430; // 0x410df6
    int64_t v432 = v430; // 0x410e09
    int64_t v433; // 0x40ef10
    int64_t v434; // 0x40ef10
    int64_t v435; // 0x40ef10
    if (function_408600(*(int64_t *)(v431 + 8), v431 + 16, v421) != 0) {
        goto lab_0x410dd0;
    } else {
        int64_t v436 = *(int64_t *)0x40840800000030 + v430; // 0x410e0b
        int64_t v437 = function_408600(*(int64_t *)(v436 + 8), v436 + 16, v421); // 0x410e18
        v432 = v436;
        if (v437 != 0) {
            goto lab_0x410dd0;
        } else {
            int64_t v438 = function_40ae10(0x40840800000000, v429, (int64_t)"check_matching", v365); // 0x410e30
            result4 = v438;
            v435 = v365;
            v434 = v427;
            v433 = v436;
            if ((int32_t)v438 != 0) {
                // 0x4106e9
                return result4;
            }
            goto lab_0x410dd4;
        }
    }
  lab_0x410dd0:
    // 0x410dd0
    v435 = v428;
    v434 = v427 + 1;
    v433 = v432;
    goto lab_0x410dd4;
  lab_0x410dd4:
    // 0x410dd4
    v374 = v435;
    v375 = v384;
    v376 = v433;
    v425 = v435;
    v426 = v434;
    if (v434 > 0x676e69686373) {
        goto lab_0x410d1d;
    } else {
        goto lab_0x410de2;
    }
  lab_0x410320:
    // 0x410320
    *(int64_t *)(v163 + 8) = -1;
    int64_t v439 = v163 + 16; // 0x410324
    *(int64_t *)v163 = -1;
    v163 = v439;
    int64_t v440; // 0x40ef10
    int64_t * v441; // 0x410341
    if (v166 != v439) {
        goto lab_0x410320;
    } else {
        // 0x410331
        v441 = (int64_t *)a8;
        *v441 = 0;
        *(int64_t *)(a8 + 8) = v65;
        v164 = 0;
        if (v11 == 1 | (*v73 & 16) != 0) {
            goto lab_0x4103c2;
        } else {
            // 0x410372
            v440 = 0;
            if (*v74 % 2 == 0) {
                goto lab_0x410392;
            } else {
                int64_t v442 = *v40; // 0x410386
                v440 = v442 >= 0 == (v442 != 0);
                goto lab_0x410392;
            }
        }
    }
  lab_0x4103c2:;
    int64_t v443 = a8; // 0x4103fd
    int64_t v444 = 0; // 0x4103fd
    int64_t v445 = v164; // 0x4103fd
    goto lab_0x410403;
  lab_0x410403:;
    int64_t v446 = v445;
    int64_t v447 = v443;
    int64_t * v448; // 0x40ef10
    int64_t v449; // 0x40ef10
    int64_t v450; // 0x40ef10
    int64_t * v451; // 0x410409
    int64_t v452; // 0x410409
    int64_t v453; // 0x41062b
    if (v446 == -1) {
        goto lab_0x410423;
    } else {
        // 0x410409
        v451 = (int64_t *)(v447 + 8);
        v452 = *v451;
        char v454; // 0x40ef10
        if (v454 != 0) {
            // 0x410626
            v453 = v285;
            if (v285 == v446) {
                goto lab_0x41062f;
            } else {
                // 0x41062b
                v453 = *(int64_t *)(8 * v446 + v1);
                goto lab_0x41062f;
            }
        } else {
            // 0x410409
            v448 = (int64_t *)v447;
            v449 = v446;
            v450 = v452;
            goto lab_0x410416;
        }
    }
  lab_0x410423:;
    int64_t v455 = v444 + 1; // 0x410423
    if (v455 != v11) {
        int64_t v456 = v447 + 16; // 0x410427
        v443 = v456;
        v444 = v455;
        v445 = *(int64_t *)v456;
        goto lab_0x410403;
    } else {
        if (v10 < 1) {
            goto lab_0x410488;
        } else {
            // 0x41043b
            goto lab_0x410478;
        }
    }
  lab_0x410392:;
    int64_t v457 = function_40d730(a1, &v3, v11, a8, v440); // 0x4103aa
    v23 = v40;
    v26 = v457;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    if ((int32_t)v457 != 0) {
        goto lab_0x40f960_9;
    } else {
        // 0x4103b7
        v164 = *v441;
        goto lab_0x4103c2;
    }
  lab_0x410488:;
    int64_t v458 = *(int64_t *)(a1 + 224); // 0x410495
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    int64_t v459; // 0x40ef10
    int64_t v460; // 0x4104ad
    int64_t v461; // 0x40ef10
    if (v458 == 0) {
        goto lab_0x40f960_9;
    } else {
        // 0x4104a5
        v460 = v11 - 1;
        v23 = v40;
        v26 = v162;
        v25 = v41;
        v24 = v42;
        v22 = v64;
        if (v460 != 0) {
            // 0x4104b8
            v461 = a8 + 24;
            v459 = 0;
            goto lab_0x4104b8_2;
        } else {
            goto lab_0x40f960_9;
        }
    }
  lab_0x41062f:;
    int64_t v462 = v453;
    int64_t * v463 = (int64_t *)v447;
    *v463 = v462;
    v448 = v463;
    v449 = v462;
    v450 = v285;
    if (v285 == v452) {
        goto lab_0x410416;
    } else {
        // 0x410637
        v448 = v463;
        v449 = v462;
        v450 = *(int64_t *)(8 * v452 + v1);
        goto lab_0x410416;
    }
  lab_0x410416:
    // 0x410416
    *v448 = v449 + v172;
    *v451 = v450 + v172;
    goto lab_0x410423;
  lab_0x410478:
    // 0x410478
    *(int64_t *)v166 = -1;
    *(int64_t *)(v166 + 8) = -1;
    if (16 * (v11 + v10) + a8 != v166 + 16) {
        goto lab_0x410478;
    } else {
        goto lab_0x410488;
    }
  lab_0x4104b8_2:;
    int64_t v464 = v459;
    int64_t * v465 = (int64_t *)(8 * v464 + v458); // 0x4104b8
    int64_t v466 = *v465; // 0x4104b8
    if (v466 == v464) {
        goto lab_0x410507;
    } else {
        int64_t v467 = 16 * v464; // 0x4104e0
        *(int64_t *)(v467 + v165) = *(int64_t *)(16 * v466 + v165);
        *(int64_t *)(v467 + v461) = *(int64_t *)(16 * *v465 + v461);
        goto lab_0x410507;
    }
  lab_0x410507:;
    int64_t v468 = v464 + 1; // 0x410507
    v23 = v40;
    v26 = v162;
    v25 = v41;
    v24 = v42;
    v22 = v64;
    v459 = v468;
    if (v468 != v460) {
        goto lab_0x4104b8_2;
    } else {
        goto lab_0x40f960_9;
    }
}
// Address range: 0x410ea0 - 0x4110bd
int64_t function_410ea0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    int32_t * v1 = (int32_t *)(a2 + 144); // 0x410eb6
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x410ebd
    if (*v1 != 1) {
        int64_t v3 = function_4085b0(a2, a2); // 0x410ec9
        if ((int32_t)v3 > 1) {
            // 0x410f18
            *(int32_t *)a1 = 1;
            *(int32_t *)(a1 + 8) = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * a2);
            *v2 = (0x100000000 * v3 >> 32) + a2;
            return 0;
        }
    }
    char * v4 = (char *)(a3 + 8); // 0x410ed3
    char v5 = *v4; // 0x410ed3
    int64_t v6 = a2 + (0x100000000 * a4 >> 32); // 0x410ed7
    *v2 = v6;
    int64_t v7; // 0x410ea0
    int64_t v8; // 0x410ea0
    char v9; // 0x410ea0
    int64_t v10; // 0x410ea0
    int64_t v11; // 0x410ea0
    char v12; // 0x410ea0
    int64_t v13; // 0x410ea0
    int64_t v14; // 0x410ea0
    int64_t v15; // 0x410ea0
    int64_t v16; // 0x410ea0
    int64_t * v17; // 0x410f40
    int64_t * v18; // 0x410ea0
    int64_t * v19; // 0x410ea0
    int64_t * v20; // 0x410ea0
    switch (v5) {
        case 30: {
        }
        case 28: {
        }
        case 26: {
            // 0x410f40
            v17 = (int64_t *)(a2 + 104);
            if (v6 >= *v17) {
                // 0x410f08
                return 7;
            }
            // 0x410f4a
            v18 = (int64_t *)(a2 + 40);
            v19 = (int64_t *)(a2 + 8);
            v20 = (int64_t *)(a1 + 8);
            v12 = v5;
            v14 = a2;
            v10 = 0;
            v7 = v6;
            while (true) {
              lab_0x410f72:
                // 0x410f72
                v8 = v7;
                v11 = v10;
                v15 = v14;
                if (v12 == 30) {
                    // 0x410ff0
                    if (*(char *)(a2 + 139) == 0) {
                        goto lab_0x410f79;
                    } else {
                        // 0x410ffe
                        if (*(char *)(a2 + 140) == 0) {
                            int64_t v21 = v8 + 1; // 0x411068
                            *v2 = v21;
                            v13 = v21;
                            v16 = v15;
                            v9 = *(char *)(v8 + v15 + *v18);
                            goto lab_0x410f8a;
                        } else {
                            // 0x411008
                            if (v8 == *(int64_t *)(a2 + 48)) {
                                goto lab_0x41101d;
                            } else {
                                // 0x41100e
                                if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v8) == -1) {
                                    goto lab_0x410f79;
                                } else {
                                    goto lab_0x41101d;
                                }
                            }
                        }
                    }
                } else {
                    goto lab_0x410f79;
                }
            }
          lab_0x410f08_3:
            // 0x410f08
            return 0;
        }
    }
    if ((char)a6 == 0 == v5 == 22) {
        // 0x411080
        int64_t v22; // bp-56, 0x410ea0
        function_406b10(&v22, a2, a5);
        char v23; // 0x410ea0
        if (v23 != 21) {
            // 0x410f08
            return 11;
        }
    }
    // 0x410ef9
    *(int32_t *)a1 = 0;
    int64_t v24; // 0x410ea0
    *(char *)(a1 + 8) = *(char *)&v24;
    // 0x410f08
    return 0;
  lab_0x410f79:;
    int64_t v25 = v8 + 1; // 0x410f7d
    *v2 = v25;
    v13 = v25;
    v16 = v15;
    v9 = *(char *)(*v19 + v8);
    goto lab_0x410f8a;
  lab_0x410f8a:;
    uint64_t v26 = v13;
    if (*v17 <= v26) {
        // break -> 0x410f08
        goto lab_0x410f08_3;
    }
    // 0x410f90
    if (*(char *)&v24 == v9) {
        // 0x410f95
        if (*(char *)(*v19 + v26) == 93) {
            // 0x410f9f
            *v2 = v26 + 1;
            *(char *)(*v20 + (0x100000000 * v11 >> 32)) = 0;
            unsigned char v27 = *v4; // 0x410fb0
            v24 = v27;
            switch (v27) {
                case 28: {
                    // 0x4110b0
                    *(int32_t *)a1 = 2;
                    goto lab_0x410f08_3;
                }
                case 30: {
                    // 0x4110a3
                    *(int32_t *)a1 = 4;
                    goto lab_0x410f08_3;
                }
                default: {
                    // 0x410fc6
                    if (v27 != 26) {
                        goto lab_0x410f08_3;
                    } else {
                        // 0x410fd1
                        *(int32_t *)a1 = 3;
                        goto lab_0x410f08_3;
                    }
                }
            }
        }
    }
    // 0x410f58
    *(char *)(*v20 + v11) = v9;
    if (v11 == 31) {
        // break -> 0x410f08
        goto lab_0x410f08_3;
    }
    // 0x410f6a
    v12 = *v4;
    v14 = v16;
    v10 = v11 + 1;
    v7 = *v2;
    goto lab_0x410f72;
  lab_0x41101d:;
    int64_t v28 = *(int64_t *)(a2 + 24); // 0x41101d
    char v29 = *(char *)(*(int64_t *)(v28 + 8 * v8) + v15 + *v18); // 0x41102c
    if (v29 <= -1) {
        goto lab_0x410f79;
    } else {
        int64_t v30 = 1; // 0x411047
        int64_t v31 = v15; // 0x411047
        if (*v1 != 1) {
            // 0x411049
            v30 = 0x100000000 * function_4085b0(a2, v8) >> 32;
            v31 = v8;
        }
        int64_t v32 = v30 + v8; // 0x411056
        *v2 = v32;
        v13 = v32;
        v16 = v31;
        v9 = v29;
        goto lab_0x410f8a;
    }
}
// Address range: 0x4110c0 - 0x411763
int64_t function_4110c0(int64_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = (int64_t)a1;
    int64_t * v2 = (int64_t *)(a2 + 72); // 0x4110ce
    uint64_t v3 = *v2; // 0x4110ce
    if (*(int64_t *)(a2 + 104) <= v3) {
        // 0x4111e8
        *(char *)(v1 + 8) = 2;
        // 0x4111ee
        return 0;
    }
    int64_t v4 = *(int64_t *)(a2 + 8); // 0x4110df
    char * v5 = (char *)(v1 + 10); // 0x4110e3
    int32_t v6 = *(int32_t *)(a2 + 144); // 0x4110eb
    int64_t v7 = v4 + v3;
    unsigned char v8 = *(char *)v7; // 0x4110f4
    char v9 = *v5 & -97;
    *v5 = v9;
    *(char *)a1 = v8;
    char v10; // 0x4110c0
    if (v6 < 2) {
        if (v8 == 92) {
            goto lab_0x4111c0;
        } else {
            // 0x411186
            *(char *)(v1 + 8) = 1;
            uint16_t v11 = *(int16_t *)(2 * (int64_t)v8 + (int64_t)*__ctype_b_loc()); // 0x41119b
            v10 = 64 * ((char)(v11 / 8) % 2 | (char)(v8 == 95)) | v9;
            goto lab_0x411165;
        }
    } else {
        // 0x411109
        if (v3 != *(int64_t *)(a2 + 48)) {
            // 0x41110f
            if (*(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3) == -1) {
                int32_t * v12 = (int32_t *)(v1 + 8); // 0x411270
                *v12 = *v12 & -0x200100 | 0x200001;
                // 0x4111ee
                return 1;
            }
        }
        if (v8 == 92) {
            goto lab_0x4111c0;
        } else {
            // 0x411128
            *(char *)(v1 + 8) = 1;
            int32_t wc = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v3); // 0x411135
            v10 = 64 * (char)(wc == 95 | iswalnum(wc) != 0) | *v5 & -65;
            goto lab_0x411165;
        }
    }
  lab_0x4111c0:;
    uint64_t v13 = v3 + 1;
    if (v13 >= *(int64_t *)(a2 + 88)) {
        // 0x4111cb
        *(char *)(v1 + 8) = 36;
        return 1;
    }
    // 0x411200
    char v14; // 0x4110c0
    int32_t v15; // 0x4116c7
    if (*(char *)(a2 + 139) != 0) {
        if (v6 < 2) {
            goto lab_0x4116e2;
        } else {
            int64_t v16 = *(int64_t *)(a2 + 16) + 4 * v13;
            v15 = *(int32_t *)v16;
            if (v15 == -1) {
                goto lab_0x41174b;
            } else {
                // 0x4116cf
                if (*(int64_t *)(a2 + 48) == v3 + 2) {
                    goto lab_0x4116e2;
                } else {
                    // 0x4116da
                    if (*(int32_t *)(v16 + 4) == -1) {
                        goto lab_0x41174b;
                    } else {
                        goto lab_0x4116e2;
                    }
                }
            }
        }
    } else {
        // 0x41120e
        v14 = *(char *)(v4 + v13);
        goto lab_0x41121b;
    }
  lab_0x411165:
    // 0x411165
    *v5 = v10;
    g90 = v8 - 10;
    switch (v8) {
        case 10: {
            // 0x4113f8
            if ((a3 & 2048) == 0) {
                // 0x4111ee
                return 1;
            }
            // 0x41140a
            *(char *)(v1 + 8) = 10;
            // 0x4111ee
            return 1;
        }
        case 36: {
            if ((a3 & 8) != 0) {
                // 0x411460
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4111ee
                return 1;
            }
            int64_t v17 = v3 + 1; // 0x411426
            if (v17 == *(int64_t *)(a2 + 88)) {
                // 0x411460
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4111ee
                return 1;
            }
            // 0x411430
            *v2 = v17;
            int64_t v18; // bp-72, 0x4110c0
            function_4110c0(&v18, a2, a3);
            *v2 = *v2 - 1;
            char v19; // 0x4110c0
            if (v19 < 11) {
                // 0x411460
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 32;
                // 0x4111ee
                return 1;
            }
            // break -> 0x4111ee
            break;
        }
        case 40: {
            // 0x4112c8
            if ((a3 & 0x2000) == 0) {
                // 0x4111ee
                return 1;
            }
            // 0x4112da
            *(char *)(v1 + 8) = 8;
            // 0x4111ee
            return 1;
        }
        case 41: {
            // 0x4112e8
            if ((a3 & 0x2000) == 0) {
                // 0x4111ee
                return 1;
            }
            // 0x4112fa
            *(char *)(v1 + 8) = 9;
            // 0x4111ee
            return 1;
        }
        case 42: {
            // 0x411308
            *(char *)(v1 + 8) = 11;
            // 0x4111ee
            return 1;
        }
        case 43: {
            // 0x411320
            if ((a3 & 1026) != 0) {
                // 0x4111ee
                return 1;
            }
            // 0x411332
            *(char *)(v1 + 8) = 18;
            // 0x4111ee
            return 1;
        }
        case 46: {
            // 0x411340
            *(char *)(v1 + 8) = 5;
            // 0x4111ee
            return 1;
        }
        case 63: {
            // 0x411350
            if ((a3 & 1026) != 0) {
                // 0x4111ee
                return 1;
            }
            // 0x411362
            *(char *)(v1 + 8) = 19;
            // 0x4111ee
            return 1;
        }
        case 91: {
            // 0x411370
            *(char *)(v1 + 8) = 20;
            // 0x4111ee
            return 1;
        }
        case 94: {
            if ((a3 & 0x800008) == 0 == (v3 != 0)) {
                // 0x41171a
                if ((a3 & 2048) == 0 | *(char *)(v7 - 1) != 10) {
                    // 0x4111ee
                    return 1;
                }
            }
            // 0x411392
            *(char *)(v1 + 8) = 12;
            *(int32_t *)a1 = 16;
            // 0x4111ee
            return 1;
        }
        case 123: {
            // 0x4113b0
            if ((a3 & 0x1200) != 0x1200) {
                // 0x4111ee
                return 1;
            }
            // 0x4113c9
            *(char *)(v1 + 8) = 23;
            // 0x4111ee
            return 1;
        }
        case 124: {
            // 0x4113d8
            if ((a3 & 0x8400) != 0x8000) {
                // 0x4111ee
                return 1;
            }
            // 0x41140a
            *(char *)(v1 + 8) = 10;
            // 0x4111ee
            return 1;
        }
        case 125: {
            // 0x411478
            if ((a3 & 0x1200) != 0x1200) {
                // 0x4111ee
                return 1;
            }
            // 0x411491
            *(char *)(v1 + 8) = 24;
            // 0x4111ee
            return 1;
        }
    }
    // 0x4111ee
    return 1;
  lab_0x4116e2:;
    int64_t v20 = *(int64_t *)(a2 + 40); // 0x4116ee
    if (*(char *)(a2 + 140) == 0) {
        // 0x411738
        v14 = *(char *)(v20 + a2 + v13);
        goto lab_0x41121b;
    } else {
        int64_t v21 = *(int64_t *)(*(int64_t *)(a2 + 24) + 8 * v13); // 0x4116fb
        char v22 = *(char *)(v20 + a2 + v21); // 0x4116ff
        v14 = v22;
        if (v22 > -1) {
            goto lab_0x41121b;
        } else {
            // 0x41120e
            v14 = *(char *)(v4 + v13);
            goto lab_0x41121b;
        }
    }
  lab_0x41121b:;
    int64_t v23 = v14;
    int32_t v24 = v14;
    *(char *)a1 = v14;
    *(char *)(v1 + 8) = 1;
    int64_t v25; // 0x4110c0
    int64_t v26; // 0x4110c0
    int32_t wc2; // 0x4110c0
    int32_t v27; // 0x4110c0
    int32_t v28; // 0x4110c0
    char v29; // 0x4110c0
    if (v6 < 2) {
        uint16_t v30 = *(int16_t *)(2 * v23 + (int64_t)*__ctype_b_loc()); // 0x41129c
        char v31 = *v5; // 0x4112b0
        v29 = 64 * ((char)(v30 / 8) % 2 | (char)(v14 == 95)) | v31 & -65;
        v28 = v24;
        v26 = v23;
        goto lab_0x411253;
    } else {
        // 0x411227
        v27 = v24;
        wc2 = *(int32_t *)(*(int64_t *)(a2 + 16) + 4 * v13);
        v25 = v23;
        goto lab_0x41122e;
    }
  lab_0x41174b:;
    unsigned char v32 = *(char *)(v4 + v13); // 0x41174b
    *(char *)(v1 + 8) = 1;
    *(char *)a1 = v32;
    v27 = v32;
    wc2 = v15;
    v25 = v32;
    goto lab_0x41122e;
  lab_0x41122e:;
    int32_t v33 = iswalnum(wc2); // 0x411230
    v29 = 64 * (char)(wc2 == 95 | v33 != 0) | *v5 & -65;
    v28 = v27;
    v26 = v25;
    goto lab_0x411253;
  lab_0x411253:
    // 0x411253
    *v5 = v29;
    uint64_t v34 = v26 + 0xffffffd9; // 0x411253
    g91 = v34 % 256;
    switch ((char)v34) {
        case 0: {
            // 0x41168b
            if ((a3 & 0x80000) == 0) {
                // 0x41169d
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 128;
            }
            // 0x4111ee
            return 2;
        }
        case 1: {
            // 0x411674
            if ((a3 & 0x2000) != 0) {
                // 0x4111ee
                return 2;
            }
            // 0x4112da
            *(char *)(v1 + 8) = 8;
            // 0x4111ee
            return 2;
        }
        case 2: {
            // 0x41165d
            if ((a3 & 0x2000) != 0) {
                // 0x4111ee
                return 2;
            }
            // 0x4112fa
            *(char *)(v1 + 8) = 9;
            // 0x4111ee
            return 2;
        }
        case 4: {
            // 0x411642
            if ((a3 & 1026) != 2) {
                // 0x4111ee
                return 2;
            }
            // 0x411332
            *(char *)(v1 + 8) = 18;
            // 0x4111ee
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
            // 0x41161a
            if ((a3 & 0x4000) == 0) {
                // 0x41162c
                *(char *)(v1 + 8) = 4;
                *a1 = (int64_t)(v28 - 49);
            }
            // 0x4111ee
            return 2;
        }
        case 21: {
            // 0x4115f9
            if ((a3 & 0x80000) == 0) {
                // 0x41160b
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 6;
            }
            // 0x4111ee
            return 2;
        }
        case 23: {
            // 0x4115d8
            if ((a3 & 0x80000) == 0) {
                // 0x4115ea
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 9;
            }
            // 0x4111ee
            return 2;
        }
        case 24: {
            // 0x4115bd
            if ((a3 & 1026) != 2) {
                // 0x4111ee
                return 2;
            }
            // 0x411362
            *(char *)(v1 + 8) = 19;
            // 0x4111ee
            return 2;
        }
        case 27: {
            // 0x41159c
            if ((a3 & 0x80000) == 0) {
                // 0x4115ae
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 512;
            }
            // 0x4111ee
            return 2;
        }
        case 44: {
            // 0x411581
            if ((a3 & 0x80000) == 0) {
                // 0x411593
                *(char *)(v1 + 8) = 35;
            }
            // 0x4111ee
            return 2;
        }
        case 48: {
            // 0x411566
            if ((a3 & 0x80000) == 0) {
                // 0x411578
                *(char *)(v1 + 8) = 33;
            }
            // 0x4111ee
            return 2;
        }
        case 57: {
            // 0x411545
            if ((a3 & 0x80000) == 0) {
                // 0x411557
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 64;
            }
            // 0x4111ee
            return 2;
        }
        case 59: {
            // 0x411524
            if ((a3 & 0x80000) == 0) {
                // 0x411536
                *(char *)(v1 + 8) = 12;
                *(int32_t *)a1 = 256;
            }
            // 0x4111ee
            return 2;
        }
        case 76: {
            // 0x411509
            if ((a3 & 0x80000) == 0) {
                // 0x41151b
                *(char *)(v1 + 8) = 34;
            }
            // 0x4111ee
            return 2;
        }
        case 80: {
            // 0x4114ee
            if ((a3 & 0x80000) == 0) {
                // 0x411500
                *(char *)(v1 + 8) = 32;
            }
            // 0x4111ee
            return 2;
        }
        case 84: {
            // 0x4114d0
            if ((a3 & 0x1200) != 512) {
                // 0x4111ee
                return 2;
            }
            // 0x4113c9
            *(char *)(v1 + 8) = 23;
            // 0x4111ee
            return 2;
        }
        case 85: {
            // 0x4114b5
            if ((a3 & 0x8400) == 0) {
                // 0x4114c7
                *(char *)(v1 + 8) = 10;
            }
            // 0x4111ee
            return 2;
        }
        case 86: {
            // 0x41149a
            if ((a3 & 0x1200) != 512) {
                // 0x4111ee
                return 2;
            }
            // 0x411491
            *(char *)(v1 + 8) = 24;
            // 0x4111ee
            return 2;
        }
    }
    // 0x4111ee
    return 2;
}
// Address range: 0x411770 - 0x411826
int64_t function_411770(int64_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = (int64_t *)(a1 + 72);
    int64_t result2 = -1;
    *v1 = (0x100000000 * function_4110c0((int64_t *)a2, a1, a3) >> 32) + *v1;
    char v2 = *(char *)(a2 + 8); // 0x4117a9
    int64_t result = result2; // 0x411770
    switch (v2) {
        case 2: {
            // 0x411807
            return -2;
        }
        case 24: {
            // 0x411807
            return result;
        }
    }
    // 0x4117b6
    int64_t v3; // 0x411770
    unsigned char v4 = (char)v3; // 0x41179e
    while (v4 != 44) {
        int64_t v5 = -2; // 0x4117bd
        if (v2 == 1) {
            // 0x4117c8
            v5 = -2;
            if (result2 != -2 && v4 <= 57) {
                int64_t v6 = v4; // 0x41179e
                if (result2 == -1) {
                    // 0x411818
                    v5 = v6 - 48;
                } else {
                    int64_t v7 = 10 * result2 + v6; // 0x4117df
                    int64_t v8 = v7 - 0x8030; // 0x4117e8
                    v5 = v8 < 0 == (0x802f - v7 & v7) < 0 == (v8 != 0) ? 0x8000 : v7 - 48;
                }
            }
        }
        // 0x411790
        result2 = v5;
        *v1 = (0x100000000 * function_4110c0((int64_t *)a2, a1, a3) >> 32) + *v1;
        v2 = *(char *)(a2 + 8);
        result = result2;
        switch (v2) {
            case 2: {
                // 0x411807
                return -2;
            }
            case 24: {
                // 0x411807
                return result;
            }
        }
        // 0x4117b6
        int64_t v9; // 0x411770
        v4 = *(char *)&v9;
    }
    // 0x411807
    return result2;
}
// Address range: 0x411830 - 0x412d14
int64_t function_411830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x411830
    int128_t v1; // 0x411830
    int128_t v2 = v1;
    int64_t v3 = a6;
    int64_t v4 = a3;
    int64_t v5; // bp-280, 0x411830
    int64_t v6 = &v5; // 0x41183a
    unsigned char v7 = *(char *)(a3 + 8); // 0x411849
    int64_t v8 = v7; // 0x411849
    int64_t v9 = v4; // 0x411855
    v4 = v8;
    g92 = v8;
    int32_t v10 = v7;
    int64_t * v11; // 0x411830
    int32_t v12; // 0x411830
    int64_t v13; // 0x411830
    int64_t v14; // bp-88, 0x411830
    int64_t v15; // 0x411830
    int64_t v16; // 0x41258b
    char v17; // 0x412592
    int64_t * mem2; // 0x411f79
    int64_t v18; // 0x411f79
    int64_t * v19; // 0x411fa0
    char * v20; // 0x411fa7
    switch (v7) {
        case 1: {
            int64_t v21 = a2 + 112; // 0x4120f7
            int64_t v22 = a2 + 128; // 0x4120fb
            int64_t v23 = function_409270(v21, v22, 0, 0, v9); // 0x412108
            if (v23 == 0) {
                // 0x4121c1
                *(int32_t *)a6 = 12;
                // 0x4119a8
                *(int64_t *)(v6 + 24) = 0;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            // 0x41211b
            if (*(int32_t *)(a2 + 180) >= 2) {
                int64_t * v24 = (int64_t *)(a1 + 72); // 0x412138
                int64_t v25 = &v14;
                int64_t v26 = 0x100000000 * v23 >> 32; // 0x4121a5
                uint64_t v27 = *v24; // 0x412138
                while (*(int64_t *)(a1 + 104) > v27) {
                    // 0x412146
                    if (v27 == *(int64_t *)(a1 + 48)) {
                        // break -> 0x4118d0
                        break;
                    }
                    // 0x412150
                    if (*(int32_t *)(*(int64_t *)(a1 + 16) + 4 * v27) != -1) {
                        // break -> 0x4118d0
                        break;
                    }
                    // 0x41215e
                    *v24 = (0x100000000 * function_4110c0((int64_t *)v9, a1, a4) >> 32) + *v24;
                    int64_t v28 = function_409270(v21, v22, 0, 0, v9); // 0x412181
                    v26 = function_409270(v21, v22, (int32_t)v26, (int32_t)v28, v25);
                    if (v28 == 0 || v26 == 0) {
                        // 0x4121c1
                        *(int32_t *)a6 = 12;
                        // 0x4119a8
                        *(int64_t *)(v6 + 24) = 0;
                        // 0x4118fa
                        return *(int64_t *)(v6 + 24);
                    }
                    v27 = *v24;
                }
            }
            goto lab_0x4118d0;
        }
        case 4: {
            int64_t v29 = 1 << v10 % 32; // 0x4121e1
            if ((*(int64_t *)(a2 + 168) & v29) == 0) {
                // 0x41285c
                *(int32_t *)a6 = 6;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v30 = (int64_t *)(a2 + 160); // 0x4121fc
            *v30 = *v30 | v29;
            if (function_409270(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x4121c1
                *(int32_t *)a6 = 12;
                // 0x4119a8
                *(int64_t *)(v6 + 24) = 0;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            int64_t * v31 = (int64_t *)(a2 + 152); // 0x41221d
            *v31 = *v31 + 1;
            char * v32 = (char *)(a2 + 176); // 0x412225
            *v32 = *v32 | 2;
            goto lab_0x4118d0;
        }
        case 5: {
            // 0x412231
            if (function_409270(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
                // 0x4121c1
                *(int32_t *)a6 = 12;
                // 0x4119a8
                *(int64_t *)(v6 + 24) = 0;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            // 0x41225b
            if (*(int32_t *)(a2 + 180) >= 2) {
                char * v33 = (char *)(a2 + 176); // 0x412268
                *v33 = *v33 | 2;
            }
            goto lab_0x4118d0;
        }
        case 8: {
            int64_t * v34 = (int64_t *)(a2 + 48); // 0x411911
            uint64_t v35 = *v34; // 0x411911
            v5 = a5;
            *v34 = v35 + 1;
            int64_t v36 = function_4110c0((int64_t *)v9, a1, a4 | 0x800000); // 0x411936
            int64_t * v37 = (int64_t *)(a1 + 72); // 0x41193d
            *v37 = (0x100000000 * v36 >> 32) + *v37;
            char * v38 = (char *)(v9 + 8); // 0x411943
            int64_t v39 = 0; // 0x411949
            if (*v38 != 9) {
                // 0x41194f
                v4 = v9;
                int64_t v40 = function_412e60(a1, a2, v9, a4, v5 + 1, a6); // 0x41196b
                if (*(int32_t *)&v3 != 0) {
                    // 0x4119a8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x4118fa
                    return *(int64_t *)(v6 + 24);
                }
                // 0x411979
                v39 = v40;
                if (*v38 != 9) {
                    if (v40 != 0) {
                        // 0x41198a
                        function_406aa0(v40, 0x407cb0, 0);
                    }
                    // 0x411999
                    *(int32_t *)a6 = 8;
                  lab_0x4119a8:
                    // 0x4119a8
                    *(int64_t *)(v6 + 24) = 0;
                    // 0x4118fa
                    return *(int64_t *)(v6 + 24);
                }
            }
            // 0x4123d2
            if (v35 < 9) {
                int32_t v41 = 1 << (int32_t)v35 % 32;
                v4 = v41;
                int64_t * v42 = (int64_t *)(a2 + 168); // 0x41242a
                *v42 = *v42 | (int64_t)v41;
            }
            int64_t v43 = function_409270(a2 + 112, a2 + 128, (int32_t)v39, 0, (int64_t)&v14); // 0x4123fd
            if (v43 == 0) {
                // 0x4121c1
                *(int32_t *)a6 = 12;
                // 0x4119a8
                *(int64_t *)(v6 + 24) = 0;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            // 0x412410
            *(int64_t *)(v43 + 40) = v35;
            goto lab_0x4118d0;
        }
        case 9: {
            if ((a4 & 0x20000) == 0) {
                // 0x4123b9
                *(int32_t *)a6 = 16;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x4118a0;
        }
        case 11: {
            goto lab_0x411881;
        }
        case 12: {
            char * v44 = (char *)(a2 + 176); // 0x412286
            unsigned char v45 = *v44; // 0x412286
            if ((v45 & 16) != 0) {
                // 0x4122e0
            } else {
                int64_t v46 = v45; // 0x412286
                *v44 = v45 | 16;
                v13 = 0;
                v15 = 0;
                if ((v46 & 8) != 0) {
                    goto lab_0x412ad5;
                } else {
                    // 0x4122a7
                    *(int64_t *)(a2 + 184) = 0x3ff000000000000;
                    *(int64_t *)(a2 + 192) = 0x7fffffe87fffffe;
                    v13 = 128;
                    v15 = 2;
                    if ((v46 & 4) == 0) {
                        goto lab_0x412ad5;
                    } else {
                        // 0x4122d1
                        __asm_movups(*(int128_t *)(a2 + 200), __asm_pxor(v2, v2));
                        v12 = *(int32_t *)&v4;
                        goto lab_0x4122e0_2;
                    }
                }
            }
        }
        case 18: {
            goto lab_0x411881;
        }
        case 19: {
            goto lab_0x411881;
        }
        case 20: {
            int64_t * mem = calloc(32, 1); // 0x411f63
            v5 = (int64_t)mem;
            mem2 = calloc(80, 1);
            if (mem == NULL || mem2 == NULL) {
                // 0x412846
                free((int64_t *)v5);
                free(mem2);
                // 0x4121c1
                *(int32_t *)a6 = 12;
                // 0x4119a8
                *(int64_t *)(v6 + 24) = 0;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            // 0x411f95
            v18 = (int64_t)mem2;
            v19 = (int64_t *)v9;
            int64_t v47 = function_406b10(v19, a1, a4); // 0x411fa0
            v20 = (char *)(v9 + 8);
            char v48 = *v20; // 0x411fa7
            v17 = v48;
            v16 = v47;
            switch (v48) {
                case 2: {
                    // 0x41281a
                    *(int32_t *)a6 = 2;
                    v11 = (int64_t *)(v6 + 48);
                    goto lab_0x4124eb_3;
                }
                case 25: {
                    char * v49 = (char *)(v18 + 32); // 0x41255e
                    *v49 = *v49 | 1;
                    if ((a4 & 256) != 0) {
                        int64_t * v50 = (int64_t *)v5; // 0x412572
                        *v50 = *v50 | 1024;
                    }
                    int64_t * v51 = (int64_t *)(a1 + 72); // 0x41257c
                    *v51 = *v51 + (0x100000000 * v47 >> 32);
                    v16 = function_406b10(v19, a1, a4);
                    v17 = *v20;
                    if (v17 == 2) {
                        // 0x41281a
                        *(int32_t *)a6 = 2;
                        v11 = (int64_t *)(v6 + 48);
                        goto lab_0x4124eb_3;
                    } else {
                        goto lab_0x411fc2;
                    }
                }
                default: {
                    goto lab_0x411fc2;
                }
            }
        }
        case 23: {
            if ((a4 & 0x1000000) != 0) {
              lab_0x411ba5:
                // 0x411ba5
                *(int64_t *)(v6 + 24) = 0;
                *(int32_t *)*(int64_t *)(v6 + 48) = 13;
                // 0x4118fa
                return *(int64_t *)(v6 + 24);
            }
            goto lab_0x411881;
        }
        case 24: {
            goto lab_0x4118a0;
        }
        case 32: {
            goto lab_0x412064;
        }
        case 33: {
            goto lab_0x412064;
        }
        case 34: {
            goto lab_0x4120b0;
        }
        case 35: {
            goto lab_0x4120b0;
        }
        case 36: {
            // 0x4120d2
            *(int32_t *)a6 = 5;
            // 0x4118fa
            return *(int64_t *)(v6 + 24);
        }
        default: {
            goto lab_0x4119a8;
        }
    }
  lab_0x411ebb:;
    // 0x411ebb
    int64_t * v52; // 0x411830
    if (*v52 == 0) {
        goto lab_0x4119a8;
    } else {
        goto lab_0x411c5b;
    }
  lab_0x411c5b:
    // 0x411c5b
    function_406aa0(*v52, 0x407cb0, 0);
    *v52 = 0;
    return *(int64_t *)(v6 + 24);
  lab_0x411d52:;
    // 0x411d52
    int64_t v53; // 0x411830
    char * v54 = (char *)(v53 + 8);
    char * v55 = v54; // 0x411d5b
    int128_t v56; // 0x411830
    int128_t v57 = v56; // 0x411d5b
    int64_t * v58; // 0x4118d0
    int64_t * v59; // 0x411830
    if ((*v58 & 0x200000) == 0) {
        // 0x41282a
        if (*v54 != 2) {
            // 0x411eb0
            *(int32_t *)*v59 = 10;
            goto lab_0x411ebb;
        } else {
            // 0x412836
            *(int32_t *)*v59 = 9;
            goto lab_0x411ebb;
        }
    }
    goto lab_0x411d61;
  lab_0x411e74:;
    // 0x411e74
    int64_t v83; // 0x411830
    int64_t v336 = v83; // 0x411e76
    int64_t v337 = v336 - 0x7fff; // 0x411e76
    int64_t v84; // 0x411830
    int64_t v316 = v84; // 0x411e84
    if (v337 < 0 == (0x7ffe - v336 & v336) < 0 == (v337 != 0)) {
        // 0x411e86
        *(int32_t *)*v59 = 15;
        goto lab_0x411ebb;
    }
    goto lab_0x411e19;
  lab_0x411db9:;
    int64_t v338 = *v58; // 0x411db9
    v4 = v338;
    int128_t v80; // 0x411d25
    int128_t * v78; // 0x411830
    *v78 = (int128_t)__asm_movaps(v80);
    int64_t v66; // 0x411830
    int64_t v339 = function_411770(v66, v53, v338); // 0x411dc9
    v5 = v339;
    v56 = __asm_movdqa(*v78);
    int64_t v81; // 0x411830
    if (v339 == -2) {
        goto lab_0x411d52;
    } else {
        int64_t v340 = v81;
        if (v339 != -1 == v339 < v340) {
            // 0x411eb0
            *(int32_t *)*v59 = 10;
            goto lab_0x411ebb;
        }
        // 0x411df5
        if (*(char *)(v53 + 8) != 24) {
            // 0x411eb0
            *(int32_t *)*v59 = 10;
            goto lab_0x411ebb;
        }
        // 0x411e01
        v83 = v339;
        v84 = v340;
        if (v339 != -1) {
            goto lab_0x411e74;
        } else {
            int64_t v341 = v340 - 0x7fff; // 0x411e0a
            v316 = v340;
            if (v341 < 0 == (0x7ffe - v340 & v340) < 0 == (v341 != 0)) {
                // 0x411e86
                *(int32_t *)*v59 = 15;
                goto lab_0x411ebb;
            }
            goto lab_0x411e19;
        }
    }
  lab_0x411d61:;
    // 0x411d61
    int64_t * v60; // 0x4119d6
    int64_t v61; // 0x4119d6
    *v60 = v61;
    int128_t * v62; // 0x4119da
    *v62 = (int128_t)__asm_movaps(v57);
    *v55 = 1;
    int64_t v63 = *v52; // 0x411d75
    int64_t v64 = v53; // 0x411d75
    int64_t v65 = v66; // 0x411d75
    goto lab_0x411b4e;
  lab_0x411d80:
    // 0x411d80
    if (*(int32_t *)*v59 != 0) {
        // 0x4119a8
        *(int64_t *)(v6 + 24) = 0;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x411d8f;
  lab_0x411e19:;
    int64_t v315 = v316;
    int64_t v317 = *v58; // 0x411e19
    v4 = v317;
    int64_t v318 = function_4110c0((int64_t *)v53, v66, v317); // 0x411e24
    int64_t v319 = *v52; // 0x411e29
    *v60 = *v60 + (0x100000000 * v318 >> 32);
    int64_t v127; // 0x411830
    int64_t v99; // 0x411830
    int64_t v132; // 0x411830
    int64_t v128; // 0x411830
    int64_t v101; // 0x411830
    int64_t v135; // 0x411830
    int64_t v102; // 0x411830
    int64_t v103; // 0x411830
    int64_t v136; // 0x411830
    int64_t v129; // 0x411830
    int64_t v134; // 0x411830
    int64_t v100; // 0x411830
    int64_t v133; // 0x411830
    int64_t * v89; // 0x411830
    int64_t * v110; // 0x411830
    int64_t * v118; // 0x411830
    int64_t v114; // 0x411830
    char * v108; // 0x411830
    if (v319 == 0) {
        goto lab_0x411d80;
    } else {
        int64_t v320 = v5; // 0x411e3d
        if ((v320 || v315) != 0) {
            if (v315 < 1) {
                // 0x412d08
                v4 = 0;
                v132 = 0;
                v133 = v315;
                v134 = *v52;
                v135 = v53;
                v136 = v66;
                goto lab_0x411f32;
            } else {
                int64_t v321; // 0x411830
                int64_t v322; // 0x411830
                int64_t v323; // 0x411830
                int64_t v324; // 0x411830
                int64_t v325; // 0x411830
                if (v315 == 1) {
                    int64_t v326 = *v52; // 0x412cd7
                    v321 = v320;
                    v322 = v53;
                    v323 = v326;
                    v324 = v66;
                    v325 = v326;
                } else {
                    int64_t v327 = *v110; // 0x411bd3
                    int64_t v328 = *v52; // 0x411bd8
                    *v89 = v66;
                    *v118 = v53;
                    int64_t v329 = v327 + 112; // 0x411bef
                    int64_t v330 = v327 + 128; // 0x411bf3
                    int64_t v331 = 2; // 0x411bfd
                    int64_t v332 = function_409350(v328, *v110); // 0x411c1a
                    v4 = v328;
                    *v108 = 16;
                    int64_t v333 = function_409270(v329, v330, (int32_t)v328, (int32_t)v332, v114); // 0x411c3e
                    if (v332 == 0 || v333 == 0) {
                        // 0x411c50
                        *(int32_t *)*v59 = 12;
                        goto lab_0x411c5b;
                    }
                    // 0x411c05
                    v331++;
                    int64_t v334 = v333; // 0x411c0c
                    int64_t v335 = v332; // 0x411c0c
                    while (v315 >= v331) {
                        // 0x411c12
                        v332 = function_409350(v335, *v110);
                        v4 = v334;
                        *v108 = 16;
                        v333 = function_409270(v329, v330, (int32_t)v334, (int32_t)v332, v114);
                        if (v332 == 0 || v333 == 0) {
                            // 0x411c50
                            *(int32_t *)*v59 = 12;
                            goto lab_0x411c5b;
                        }
                        // 0x411c05
                        v331++;
                        v334 = v333;
                        v335 = v332;
                    }
                    // 0x411ed0
                    v321 = v5;
                    v322 = *v118;
                    v323 = v332;
                    v324 = *v89;
                    v325 = v333;
                }
                // 0x411ee3
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
                    goto lab_0x411f0f;
                } else {
                    goto lab_0x411ef0;
                }
            }
        } else {
            // 0x411e4a
            v4 = 0;
            function_406aa0(v319, 0x407cb0, 0);
            if (*(int32_t *)*v59 != 0) {
                goto lab_0x411c5b;
            }
            goto lab_0x411d8f;
        }
    }
  lab_0x411b4e:;
    uint32_t v67 = *(int32_t *)*v59; // 0x411b53
    v4 = v67;
    if (v63 == 0 == (v67 != 0)) {
        goto lab_0x411ebb;
    }
    // 0x411b62
    *v52 = v63;
    int64_t v68 = v63; // 0x411b62
    int64_t v69 = v64; // 0x411b62
    int64_t v70 = v65; // 0x411b62
    goto lab_0x411b67;
  lab_0x411d8f:
    // 0x411d8f
    *v52 = 0;
    v68 = 0;
    v69 = v53;
    v70 = v66;
    goto lab_0x411b67;
  lab_0x411ce8:;
    // 0x411ce8
    int64_t v96; // 0x411830
    int64_t v104 = v96;
    function_406aa0(v104, 0x406c40, (int32_t)*(int64_t *)(v104 + 40));
    goto lab_0x411cf9;
  lab_0x411a4a:;
    // 0x411a4a
    int64_t v94; // 0x411830
    int64_t v105 = v94;
    int64_t v93; // 0x411830
    int64_t v106 = v93;
    int64_t v92; // 0x411830
    int64_t v107 = v92;
    char v90; // 0x411830
    *v108 = v90;
    int64_t v109 = *v110; // 0x411a51
    int64_t v111 = v109 + 112; // 0x411a63
    int64_t v112 = v109 + 128; // 0x411a67
    int64_t v113 = function_409270(v111, v112, (int32_t)v107, 0, v114); // 0x411a74
    v4 = v113;
    if (v113 == 0) {
        // 0x411c50
        *(int32_t *)*v59 = 12;
        goto lab_0x411c5b;
    }
    // 0x411a85
    int64_t v91; // 0x411830
    int64_t v115 = v91 + 2; // 0x411a85
    int64_t v116 = v113; // 0x411a8d
    int64_t v117 = v106; // 0x411a8d
    if (v115 <= v5) {
        // 0x411a93
        *v118 = v106;
        int64_t v119 = v115; // 0x411a9b
        int64_t v120 = v107; // 0x411a9b
        v120 = function_409350(v120, *v110);
        v4 = v113;
        *v108 = 16;
        int64_t v121 = function_409270(v111, v112, (int32_t)v113, (int32_t)v120, v114); // 0x411aca
        if (v120 == 0 || v121 == 0) {
            // 0x411c50
            *(int32_t *)*v59 = 12;
            goto lab_0x411c5b;
        }
        // 0x411ae1
        v4 = v121;
        *v108 = 10;
        int64_t v122 = function_409270(v111, v112, (int32_t)v121, 0, v114); // 0x411afc
        if (v122 == 0) {
            // 0x411c50
            *(int32_t *)*v59 = 12;
            goto lab_0x411c5b;
        }
        // 0x411b0d
        v119++;
        int64_t v123 = v122; // 0x411b15
        while (v119 <= v5) {
            // 0x411a9e
            v120 = function_409350(v120, *v110);
            v4 = v123;
            *v108 = 16;
            v121 = function_409270(v111, v112, (int32_t)v123, (int32_t)v120, v114);
            if (v120 == 0 || v121 == 0) {
                // 0x411c50
                *(int32_t *)*v59 = 12;
                goto lab_0x411c5b;
            }
            // 0x411ae1
            v4 = v121;
            *v108 = 10;
            v122 = function_409270(v111, v112, (int32_t)v121, 0, v114);
            if (v122 == 0) {
                // 0x411c50
                *(int32_t *)*v59 = 12;
                goto lab_0x411c5b;
            }
            // 0x411b0d
            v119++;
            v123 = v122;
        }
        // 0x411b17
        v4 = v122;
        v116 = v122;
        v117 = *v118;
    }
    int64_t v124 = v117;
    int64_t v125 = v116; // 0x411b2d
    int64_t v126 = *v89; // 0x411b1f
    v127 = v125;
    v128 = v124;
    v129 = v105;
    if (v126 == 0) {
        goto lab_0x411ef0;
    } else {
        // 0x411b2d
        *v108 = 16;
        v63 = function_409270(v111, v112, (int32_t)v126, (int32_t)v125, v114);
        v64 = v124;
        v65 = v105;
        goto lab_0x411b4e;
    }
  lab_0x411b67:;
    unsigned char v71 = *(char *)(v69 + 8); // 0x411b67
    if ((*v58 & 0x1000000) != 0) {
        if (v71 != 11 != v71 != 23) {
            // 0x411b8c
            if (v68 == 0) {
                goto lab_0x411ba5;
            } else {
                // 0x411b96
                function_406aa0(v68, 0x407cb0, 0);
                goto lab_0x411ba5;
            }
        }
    }
    char v72 = v71; // 0x4118f4
    int64_t v73 = v70; // 0x4118f4
    int64_t v74 = v69; // 0x4118f4
    if (v71 >= 24) {
        // break -> 0x4118fa
        goto lab_0x4118fa_2;
    }
    goto lab_0x4119c0;
  lab_0x411cf9:
    // 0x411cf9
    v90 = v5 == -1 ? 11 : 10;
    int64_t v95; // 0x411830
    v91 = v95;
    v92 = v104;
    int64_t v97; // 0x411830
    v93 = v97;
    int64_t v98; // 0x411830
    v94 = v98;
    goto lab_0x411a4a;
  lab_0x411ef0:
    // 0x411ef0
    *v52 = v127;
    v68 = v127;
    v69 = v128;
    v70 = v129;
    goto lab_0x411b67;
  lab_0x411f0f:
    // 0x411f0f
    *v89 = v99;
    int64_t v130 = function_409350(v102, *v110); // 0x411f1c
    int64_t v131 = *v89; // 0x411f21
    v4 = v131;
    v132 = v131;
    v133 = v100;
    v134 = v130;
    v135 = v101;
    v136 = v103;
    if (v130 == 0) {
        // 0x411c50
        *(int32_t *)*v59 = 12;
        goto lab_0x411c5b;
    }
    goto lab_0x411f32;
  lab_0x411f32:
    // 0x411f32
    *v89 = v132;
    v95 = v133;
    v96 = v134;
    v97 = v135;
    v98 = v136;
    if (*(char *)(v134 + 48) != 17) {
        goto lab_0x411cf9;
    } else {
        goto lab_0x411ce8;
    }
  lab_0x412b2a:;
    // 0x412b2a
    uint64_t v137; // 0x411830
    int64_t v138 = 1 << v137;
    v4 = v138;
    int64_t * v139; // 0x411830
    *v139 = *v139 | v138;
    goto lab_0x412b18;
  lab_0x412b18:;
    int64_t v140 = v137 + 1; // 0x412b20
    if (v137 == 63) {
        // break -> 0x412b39
        goto lab_0x412b39;
    }
    goto lab_0x412b22;
  lab_0x4124eb_3:
    // 0x4124eb
    free((int64_t *)v5);
    function_407c60(v18);
    if (*(int32_t *)*v11 != 0) {
        // 0x4119a8
        *(int64_t *)(v6 + 24) = 0;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    // 0x41250d
    *(int64_t *)(v6 + 24) = 0;
    goto lab_0x4118d0;
  lab_0x41298e:;
    // 0x41298e
    int64_t * v177; // 0x411830
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x412b96_3:
    // 0x412b96
    *(int32_t *)*v177 = 11;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x412a95_5:
    // 0x412a95
    *(int32_t *)*v177 = 3;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x412054:;
    // 0x412054
    int64_t v188; // 0x412029
    int64_t v254 = v188 & 0xffffffff; // 0x41202e
    int64_t v234; // 0x411830
    int64_t v255; // 0x411830
    int64_t v235; // 0x411830
    int64_t * v152; // 0x412004
    int32_t * v168; // 0x411830
    int64_t v178; // 0x411830
    int64_t * v179; // 0x411830
    int64_t * v180; // 0x411830
    int64_t * v181; // 0x411830
    int64_t * v182; // 0x411830
    int64_t v148; // 0x411fd3
    int64_t * v149; // 0x411fee
    int64_t v151; // 0x412004
    switch (g93) {
        case 0: {
            unsigned char v256 = *(char *)v151; // 0x412491
            unsigned char v257 = v256 % 64;
            int64_t v258 = v257 == 0 ? 1 : 1 << (int64_t)v257;
            v4 = v258;
            int64_t * v259 = (int64_t *)(v148 + (int64_t)(v256 / 8 & 24)); // 0x4124a8
            *v259 = v258 | *v259;
            v255 = v254;
            goto lab_0x41244f;
        }
        case 1: {
            int64_t v260 = *v181; // 0x41246d
            v4 = v260;
            int64_t v261 = *mem2; // 0x412471
            int64_t v262 = v260; // 0x41247a
            int64_t v263 = v261; // 0x41247a
            if (v260 == *v182) {
                int64_t v264 = 2 * v260 | 1; // 0x412896
                *v182 = v264;
                int64_t * mem3 = realloc((int64_t *)v261, 4 * (int32_t)v264); // 0x4128a8
                if (mem3 == NULL) {
                    goto lab_0x41298e;
                }
                // 0x4128b6
                v263 = (int64_t)mem3;
                *mem2 = v263;
                v262 = *v181;
                v4 = v262;
            }
            // 0x412480
            *v181 = v262 + 1;
            *(int32_t *)(4 * v4 + v263) = *v168;
            v255 = v254;
            goto lab_0x41244f;
        }
        case 2: {
            int32_t v265 = function_40be40(v148, *v152); // 0x412445
            *(int32_t *)*v177 = v265;
            v255 = v254;
            v11 = v177;
            if (v265 != 0) {
                goto lab_0x4124eb_3;
            }
            goto lab_0x41244f;
        }
        case 3: {
            int32_t v266 = function_40be40(v148, *v152); // 0x41252d
            *(int32_t *)*v177 = v266;
            v255 = v254;
            v11 = v177;
            if (v266 != 0) {
                goto lab_0x4124eb_3;
            }
            goto lab_0x41244f;
        }
        case 4: {
            int64_t v267 = *(int64_t *)(a1 + 120); // 0x4124b3
            *v179 = *v149;
            int64_t v268 = function_40be90(v267, v148, v18 + 24, v178, v180, *v152, (int64_t)&g88); // 0x4124d3
            int32_t v269 = v268; // 0x4124dd
            *(int32_t *)*v177 = v269;
            v3 = *v179;
            v255 = v254;
            v11 = v177;
            if (v269 != 0) {
                goto lab_0x4124eb_3;
            }
            goto lab_0x41244f;
        }
        default: {
            // 0x412c94
            __assert_fail("0", "lib/regcomp.c", 3315, "parse_bracket_exp");
            v234 = &g88;
            v235 = (int64_t)"parse_bracket_exp";
            goto lab_0x412cad_3;
        }
    }
  lab_0x4125b5:
    // 0x4125b5
    *(int32_t *)*v177 = 7;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x41244f:;
    int64_t v270 = v255;
    int64_t v183 = v270; // 0x411830
    int64_t v184 = 0; // 0x411830
    int64_t * v156; // 0x411830
    int64_t * v163; // 0x411830
    switch (*v20) {
        case 2: {
            goto lab_0x4125b5;
        }
        case 21: {
            // 0x4128c3
            *v156 = *v156 + (0x100000000 * v270 >> 32);
            if (*(char *)(v6 + 56) != 0) {
                // 0x4128d1
                v4 = v5 + 32;
                int64_t v271 = v5; // 0x4128d8
                int64_t * v272 = (int64_t *)v271; // 0x4128dc
                *v272 = -1 - *v272;
                v271 += 8;
                while (v4 != v271) {
                    // 0x4128dc
                    v272 = (int64_t *)v271;
                    *v272 = -1 - *v272;
                    v271 += 8;
                }
            }
            uint32_t v273 = *(int32_t *)(*v163 + 180); // 0x4128ed
            v4 = v273;
            if (v273 >= 2) {
                int64_t v274 = 0;
                int64_t * v275 = (int64_t *)(v274 + v5); // 0x41290b
                *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                int64_t v276 = v274 + 8; // 0x412917
                while (v274 != 24) {
                    // 0x412907
                    v274 = v276;
                    v275 = (int64_t *)(v274 + v5);
                    *v275 = *v275 & *(int64_t *)(v274 + *(int64_t *)(*v163 + 120));
                    v276 = v274 + 8;
                }
            }
            // 0x412919
            if (*v181 != 0) {
                goto lab_0x41299e;
            } else {
                // 0x412920
                if (*(int64_t *)(v18 + 48) != 0) {
                    goto lab_0x41299e;
                } else {
                    // 0x412927
                    if (*(int64_t *)(v18 + 56) != 0) {
                        goto lab_0x41299e;
                    } else {
                        // 0x41292e
                        if (*(int64_t *)(v18 + 64) != 0) {
                            goto lab_0x41299e;
                        } else {
                            int64_t v277 = v4; // 0x412935
                            v4 = v277 + 0xffffffff & 0xffffffff;
                            if ((int32_t)v277 < 2) {
                                goto lab_0x412948;
                            } else {
                                // 0x41293a
                                if (*(int64_t *)v178 != 0) {
                                    goto lab_0x41299e;
                                } else {
                                    // 0x412941
                                    if (*(char *)(v18 + 32) % 2 != 0) {
                                        goto lab_0x41299e;
                                    } else {
                                        goto lab_0x412948;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        default: {
            goto lab_0x411fee;
        }
    }
  lab_0x41272f:;
    // 0x41272f
    int64_t v203; // 0x411830
    int64_t v278 = (int64_t)*(char *)v203;
    int64_t v220 = v278; // 0x412731
    int64_t v216; // 0x411830
    char v218; // 0x411830
    int64_t v217; // 0x411830
    int64_t v219; // 0x411830
    int64_t * v162; // 0x411830
    int32_t v197; // 0x4126f6
    if (v197 == 0) {
        goto lab_0x412b89;
    } else {
        // 0x412737
        v218 = 0;
        v219 = v278;
        if (v197 != 3) {
            goto lab_0x41274a;
        } else {
            int64_t v279 = *v162; // 0x41273e
            v3 = v279;
            v216 = v279;
            v217 = v278;
            goto lab_0x412746;
        }
    }
  lab_0x412b89:;
    // 0x412b89
    int64_t v161; // 0x411830
    v218 = *(char *)v161;
    v219 = v220;
    goto lab_0x41274a;
  lab_0x412746:
    // 0x412746
    v218 = *(char *)v216;
    v219 = v217;
    goto lab_0x41274a;
  lab_0x41274a:;
    int64_t v280 = v219;
    unsigned char v281 = v218;
    int64_t v282; // 0x411830
    int64_t v283; // 0x411830
    int32_t v284; // 0x411830
    char * v165; // 0x411830
    int32_t v195; // 0x4126cd
    if (v195 == 0) {
        goto lab_0x412b54;
    } else {
        // 0x412753
        v283 = v281;
        v284 = v197;
        v282 = (int64_t)*v168;
        if (*v165 != 0) {
            goto lab_0x412b54;
        } else {
            goto lab_0x412763;
        }
    }
  lab_0x412b54:;
    // 0x412b54
    int32_t * v170; // 0x411830
    *v170 = (int32_t)v281;
    int64_t * v171; // 0x411830
    *v171 = v4;
    int64_t v285 = function_407220(v280, v4); // 0x412b60
    v4 = *v171;
    v283 = (int64_t)*v170;
    int32_t * v160; // 0x411830
    v284 = *v160;
    v282 = v285 & 0xffffffff;
    goto lab_0x412763;
  lab_0x412763:;
    int64_t v286 = v282;
    int32_t v287 = v284;
    int64_t v288 = v283;
    int64_t v289; // 0x411830
    int64_t v290; // 0x411830
    if (v287 == 0) {
        goto lab_0x412aa5;
    } else {
        int64_t v291 = (int64_t)*(int32_t *)v161; // 0x41276b
        v3 = v291;
        v289 = v291;
        v290 = v286;
        if (v287 == 3) {
            goto lab_0x412aa5;
        } else {
            goto lab_0x41277c;
        }
    }
  lab_0x412aa5:
    // 0x412aa5
    *v170 = (int32_t)v286;
    *v171 = v4;
    int64_t v292 = function_407220(v288, v4); // 0x412ab4
    v4 = *v171;
    int64_t v293 = v292 & 0xffffffff; // 0x412ac3
    v3 = v293;
    v289 = v293;
    v290 = (int64_t)*v170;
    goto lab_0x41277c;
  lab_0x41277c:;
    int32_t v294 = v290;
    if (v294 == -1) {
        goto lab_0x412a95_5;
    }
    uint32_t v295 = (int32_t)v289; // 0x412786
    if (v295 == -1) {
        goto lab_0x412a95_5;
    }
    // 0x412790
    if (v294 > v295 == ((*v149 & 0x10000) != 0)) {
        goto lab_0x412b96_3;
    }
    int64_t v296 = v4; // 0x4127a4
    int32_t v297 = v294; // 0x4127a7
    int64_t * v172; // 0x411830
    int32_t * v173; // 0x411830
    int32_t * v174; // 0x411830
    int64_t * v175; // 0x411830
    int64_t * v176; // 0x411830
    if (v296 != 0) {
        int64_t v298 = *(int64_t *)(v296 + 64); // 0x4127a9
        int64_t v299 = *(int64_t *)(v296 + 8); // 0x4127ad
        int32_t v300 = v294; // 0x4127b6
        int64_t v301 = v298; // 0x4127b6
        int64_t v302 = v299; // 0x4127b6
        if (v298 == *v172) {
            // 0x412c12
            *v173 = v295;
            *v174 = v294;
            *v171 = v4;
            int64_t v303 = 2 * v298 | 1; // 0x412c2c
            int64_t v304 = 4 * v303; // 0x412c30
            *v172 = v303;
            *v175 = v304;
            *v176 = (int64_t)realloc((int64_t *)v299, (int32_t)v304);
            int64_t * mem4 = realloc((int64_t *)*(int64_t *)(*v171 + 16), (int32_t)*v175); // 0x412c60
            int64_t v305 = *v176; // 0x412c65
            if (v305 == 0) {
                // 0x412cad
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x412cad_3;
            }
            int64_t v306 = *v171; // 0x412c72
            v4 = v306;
            v300 = *v174;
            v3 = (int64_t)*v173;
            if (mem4 == NULL) {
                // 0x412cad
                v234 = (int64_t)mem4;
                v235 = v305;
                goto lab_0x412cad_3;
            }
            // 0x412c83
            *(int64_t *)(v306 + 16) = (int64_t)mem4;
            v301 = *(int64_t *)(v4 + 64);
            *(int64_t *)(v4 + 8) = v305;
            v302 = v305;
        }
        int64_t v307 = 4 * v301; // 0x4127bc
        *(int32_t *)(v302 + v307) = v300;
        *(int64_t *)(v4 + 64) = v301 + 1;
        *(int32_t *)(*(int64_t *)(v4 + 16) + v307) = (int32_t)v3;
        v297 = v300;
    }
    int64_t v308 = 0;
    uint32_t v309 = (int32_t)v308; // 0x4127e2
    int64_t v310; // 0x4127f2
    int64_t * v311; // 0x4127f9
    if (v297 <= v309) {
        // 0x4127e7
        if ((int32_t)v3 >= v309) {
            // 0x4127ec
            v310 = v308 >> 6;
            v4 = v310;
            v311 = (int64_t *)(8 * v310 + v148);
            *v311 = *v311 | 1 << v308 % 64;
        }
    }
    int64_t v312 = v308 + 1; // 0x412808
    while (v308 != 255) {
        // 0x4127e0
        v308 = v312;
        v309 = (int32_t)v308;
        if (v297 <= v309) {
            // 0x4127e7
            if ((int32_t)v3 >= v309) {
                // 0x4127ec
                v310 = v308 >> 6;
                v4 = v310;
                v311 = (int64_t *)(8 * v310 + v148);
                *v311 = *v311 | 1 << v308 % 64;
            }
        }
        // 0x4127fe
        v312 = v308 + 1;
    }
    // 0x41280a
    *(int32_t *)*v177 = 0;
    int64_t v194; // 0x4126c8
    v255 = v194 & 0xffffffff;
    goto lab_0x41244f;
  lab_0x411881:
    if ((a4 & 32) != 0) {
        // 0x411ba5
        *(int64_t *)(v6 + 24) = 0;
        *(int32_t *)*(int64_t *)(v6 + 48) = 13;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    if ((a4 & 16) != 0) {
        // 0x4125c5
        v5 = a5;
        int64_t v313 = function_4110c0((int64_t *)v9, a1, a4); // 0x4125d5
        int64_t * v314 = (int64_t *)(a1 + 72); // 0x4125e7
        *v314 = (0x100000000 * v313 >> 32) + *v314;
        function_411830(a1, a2, v9, a4, v5, a6);
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4118a0;
  lab_0x4118a0:
    // 0x4118a0
    *(char *)(v9 + 8) = 1;
    if (function_409270(a2 + 112, a2 + 128, 0, 0, v9) == 0) {
        // 0x4121c1
        *(int32_t *)a6 = 12;
        // 0x4119a8
        *(int64_t *)(v6 + 24) = 0;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4118d0;
  lab_0x412064:;
    int64_t v223 = &g2; // 0x412080
    int64_t v222 = (int64_t)"alnum"; // 0x412080
    bool v224 = v7 == 33; // 0x412080
    goto lab_0x412084;
  lab_0x4120b0:
    // 0x4120b0
    v223 = (int64_t)&g5;
    v222 = (int64_t)"space";
    v224 = v7 == 35;
    goto lab_0x412084;
  lab_0x4118d0:
    // 0x4118d0
    v58 = (int64_t *)(v6 + 8);
    int64_t v144 = function_4110c0((int64_t *)v9, a1, *v58); // 0x4118db
    unsigned char v145 = *(char *)(v9 + 8); // 0x4118e0
    int64_t * v146 = (int64_t *)(a1 + 72); // 0x4118e8
    *v146 = *v146 + (0x100000000 * v144 >> 32);
    if (v145 >= 24) {
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    // 0x4119c0
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
      lab_0x4119c0:;
        unsigned char v75 = v72;
        if ((1 << (int64_t)(v75 % 64) & 0x8c0800) == 0) {
            // break -> 0x4118fa
            break;
        }
        // 0x4119d6
        v53 = v74;
        v66 = v73;
        v60 = (int64_t *)(v66 + 72);
        v61 = *v60;
        v62 = (int128_t *)v53;
        int128_t v76 = __asm_movdqa(*v62); // 0x4119da
        if (v75 == 23) {
            int64_t v77 = *v58; // 0x411d10
            v4 = v77;
            *v78 = (int128_t)__asm_movaps(v76);
            int64_t v79 = function_411770(v66, v53, v77); // 0x411d20
            v80 = __asm_movdqa(*v78);
            v5 = v79;
            v56 = v80;
            switch (v79) {
                case -1: {
                    // 0x411da0
                    if (*(char *)(v53 + 8) != 1) {
                        // 0x411eb0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x411ebb;
                    }
                    // 0x411dac
                    v81 = 0;
                    if (*(char *)v53 != 44) {
                        // 0x411eb0
                        *(int32_t *)*v59 = 10;
                        goto lab_0x411ebb;
                    }
                    goto lab_0x411db9;
                }
                case -2: {
                    goto lab_0x411d52;
                }
                default: {
                    char * v82 = (char *)(v53 + 8);
                    v56 = v80;
                    v83 = v79;
                    v84 = v79;
                    switch (*v82) {
                        case 24: {
                            goto lab_0x411e74;
                        }
                        case 1: {
                            // 0x411e93
                            v81 = v79;
                            if (*(char *)v53 == 44) {
                                goto lab_0x411db9;
                            } else {
                                // 0x411e9e
                                v55 = v82;
                                v57 = v80;
                                if ((*v58 & 0x200000) == 0) {
                                    // 0x411eb0
                                    *(int32_t *)*v59 = 10;
                                    goto lab_0x411ebb;
                                }
                                goto lab_0x411d61;
                            }
                        }
                        default: {
                            goto lab_0x411d52;
                        }
                    }
                }
            }
        } else {
            int64_t v85 = *v58;
            v4 = v85;
            int64_t v86 = function_4110c0((int64_t *)v53, v66, v85);
            *v60 = (0x100000000 * v86 >> 32) + *v60;
            int64_t v87 = *v52;
            if (v75 == 19) {
                if (v87 == 0) {
                    goto lab_0x411d80;
                } else {
                    int64_t v88 = v75 == 18; // 0x4119c9
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
                        goto lab_0x411ce8;
                    } else {
                        goto lab_0x411a4a;
                    }
                }
            } else {
                if (v87 == 0) {
                    goto lab_0x411d80;
                } else {
                    if (v75 == 18) {
                        // 0x411efa
                        v5 = -1;
                        v4 = v87;
                        v99 = v87;
                        v100 = 1;
                        v101 = v53;
                        v102 = v87;
                        v103 = v66;
                        goto lab_0x411f0f;
                    } else {
                        // 0x411a23
                        v5 = -1;
                        if (*(char *)(v87 + 48) == 17) {
                            // 0x411cd0
                            *v89 = 0;
                            v95 = 0;
                            v96 = *v52;
                            v97 = v53;
                            v98 = v66;
                            goto lab_0x411ce8;
                        } else {
                            // 0x411a32
                            *v89 = 0;
                            v90 = 11;
                            v91 = 0;
                            v92 = v87;
                            v93 = v53;
                            v94 = v66;
                            goto lab_0x411a4a;
                        }
                    }
                }
            }
        }
    }
    // 0x4118fa
    return *(int64_t *)(v6 + 24);
  lab_0x411fc2:
    // 0x411fc2
    if (v17 == 21) {
        // 0x4125aa
        *v20 = 1;
    }
    // 0x411fca
    v148 = v5;
    v149 = (int64_t *)(v6 + 8);
    int64_t v150 = v6 + 112; // 0x411fff
    v151 = v6 + 120;
    v152 = (int64_t *)v151;
    int64_t v153; // bp-120, 0x411830
    int64_t v154 = &v153;
    int32_t * v155 = (int32_t *)v150; // 0x412009
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
    bool v166; // 0x411830
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
    int32_t v185; // 0x411830
    while (true) {
      lab_0x411fee:
        // 0x411fee
        v3 = v184;
        int64_t v186 = *v149; // 0x411fee
        v3 = v184;
        *v152 = v154;
        *v155 = 3;
        int32_t v187 = function_410ea0(v150, a1, v9, v183, v186, (int32_t)v184);
        v185 = v187;
        if (v187 != 0) {
            // break -> 0x412604
            break;
        }
        // 0x41201e
        g93 = v6 - 8;
        v188 = function_406b10(v19, a1, *v149);
        if ((*v155 - 2 & -3) == 0) {
            goto lab_0x412054;
        } else {
            unsigned char v189 = *v20; // 0x41203c
            v4 = v189;
            switch (v189) {
                case 2: {
                    goto lab_0x4125b5;
                }
                case 22: {
                    int64_t v190 = 0x100000000 * v188;
                    *v156 = *v156 + (v190 >> 32);
                    int64_t v191 = *v149; // 0x41264b
                    int64_t v192 = function_406b10((int64_t *)v157, a1, v191); // 0x41265b
                    unsigned char v193 = *(char *)(v6 + 152); // 0x412660
                    v4 = v193;
                    switch (v193) {
                        case 2: {
                            goto lab_0x4125b5;
                        }
                        case 21: {
                            // 0x412875
                            *v156 = *v156 + (-v190 >> 32);
                            *v20 = 1;
                            goto lab_0x412054;
                        }
                        default: {
                            // 0x41267a
                            *v160 = 3;
                            *v162 = v158;
                            if ((int32_t)function_410ea0(v159, a1, v157, v192 & 0xffffffff, v191, 1) != 0) {
                                // break -> 0x412604
                                break;
                            }
                            // 0x4126bd
                            v194 = function_406b10(v19, a1, *v149);
                            v195 = *v155;
                            int32_t v196 = *(int32_t *)(*v163 + 180); // 0x4126de
                            v4 = v196 < 2 == (1 - v196 & v196) < 0 ? v18 : 0;
                            if ((v195 - 2 & -3) == 0) {
                                goto lab_0x412b96_3;
                            }
                            // 0x4126f6
                            v197 = *v160;
                            if ((v197 - 2 & -3) == 0) {
                                goto lab_0x412b96_3;
                            }
                            // 0x412709
                            *v165 = (char)(v195 == 3);
                            if (v195 == 3) {
                                int64_t v198 = *v152; // 0x412bdd
                                int64_t v199 = -1; // 0x412bee
                                int64_t v200 = v198; // 0x412bee
                                int64_t v201; // 0x411830
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
                                    goto lab_0x412a95_5;
                                }
                                // 0x412c00
                                v203 = v198;
                                if (v197 == 3) {
                                    // 0x412a71
                                    int64_t v204; // 0x411830
                                    while (v204 != 0) {
                                        int64_t v205; // 0x411830
                                        int64_t v206 = v205;
                                        char v207 = *(char *)v206; // 0x412a7f
                                        int64_t v208; // 0x411830
                                        int64_t v209 = v208 - 1; // 0x412a7f
                                        v204 = v209;
                                        v205 = v206 + v167;
                                        int64_t v210 = v209; // 0x412a7f
                                        if (v207 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v208 = v204;
                                        v210 = 0;
                                    }
                                    v203 = v198;
                                }
                                goto lab_0x41272f;
                            } else {
                                if (v197 == 3) {
                                    int64_t v211 = *v162; // 0x412ba6
                                    v3 = v211;
                                    int64_t v212 = v211; // 0x412bb7
                                    int64_t v213 = -1; // 0x412bb7
                                    int64_t v214 = 0; // 0x412bb7
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
                                        goto lab_0x412a95_5;
                                    }
                                    // 0x412bcd
                                    v203 = v151;
                                    v216 = v211;
                                    v217 = 0;
                                    if (v195 != 0) {
                                        goto lab_0x412746;
                                    } else {
                                        goto lab_0x41272f;
                                    }
                                } else {
                                    // 0x412721
                                    v203 = v151;
                                    if (v195 != 0) {
                                        // 0x412b7d
                                        v218 = 0;
                                        v219 = 0;
                                        v220 = 0;
                                        if (v197 != 0) {
                                            goto lab_0x41274a;
                                        } else {
                                            goto lab_0x412b89;
                                        }
                                    } else {
                                        goto lab_0x41272f;
                                    }
                                }
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x412054;
                }
            }
        }
    }
    // 0x412604
    *(int32_t *)*v177 = v185;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x412084:;
    int64_t v221 = *(int64_t *)(a1 + 120);
    v4 = v222;
    v3 = a6;
    if (!(((int32_t)a6 == 0 | function_40c660(a2, v221, (char *)v222, (int64_t *)v223, (int64_t)v224, a6) != 0))) {
        // 0x4119a8
        *(int64_t *)(v6 + 24) = 0;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x4118d0;
  lab_0x412539:;
    // 0x412539
    int64_t v225; // 0x4122e5
    int64_t v226; // 0x4122e9
    if (function_409270(v225, v226, 0, 0, v9) == 0) {
        // 0x4121c1
        *(int32_t *)a6 = 12;
        // 0x4119a8
        *(int64_t *)(v6 + 24) = 0;
        // 0x4118fa
        return *(int64_t *)(v6 + 24);
    }
    goto lab_0x41238f;
  lab_0x412ad5:;
    int16_t * v250 = *__ctype_b_loc(); // 0x412ae9
    v3 = (v13 | 256) - 64 * v15;
    int64_t v251 = v13; // 0x412aff
    int64_t v252 = 8 * v15 + a2; // 0x412aff
    int64_t v141 = 2 * v13 + (int64_t)v250; // 0x412aff
    while (true) {
        int64_t v143 = v251;
        v139 = (int64_t *)(v252 + 184);
        v140 = 0;
        while (true) {
          lab_0x412b22:
            // 0x412b22
            v137 = v140;
            if ((*(char *)(2 * v137 + v141) & 8) == 0) {
                int64_t v142 = v137 + v143; // 0x412b10
                v4 = v142 & 0xffffffff;
                if ((int32_t)v142 == 95) {
                    goto lab_0x412b2a;
                } else {
                    goto lab_0x412b18;
                }
            } else {
                goto lab_0x412b2a;
            }
        }
      lab_0x412b39:;
        int64_t v253 = v143 + 64; // 0x412b39
        v12 = v10;
        v251 = v253 & 0xffffffff;
        v252 += 8;
        v141 += 128;
        if ((int32_t)v3 == (int32_t)v253) {
            // break -> 0x4122e0
            break;
        }
    }
    goto lab_0x4122e0_2;
  lab_0x41238f:;
    int64_t v227 = function_4110c0((int64_t *)v9, a1, a4); // 0x41239a
    int64_t * v228 = (int64_t *)(a1 + 72); // 0x4123a1
    *v228 = (0x100000000 * v227 >> 32) + *v228;
    // 0x4118fa
    return *(int64_t *)(v6 + 24);
  lab_0x4122e0_2:;
    int32_t v229 = v12;
    v225 = a2 + 112;
    v226 = a2 + 128;
    if ((v229 - 256 & -257) != 0) {
        goto lab_0x412539;
    } else {
        int32_t * v230 = (int32_t *)v9;
        int64_t v231; // 0x411830
        if (v229 == 256) {
            // 0x41261a
            *v230 = 6;
            v4 = 0;
            v231 = function_409270(v225, v226, 0, 0, v9);
        } else {
            // 0x41230f
            *v230 = 5;
            v4 = 0;
            v231 = function_409270(v225, v226, 0, 0, v9);
        }
        // 0x412334
        *v230 = 10;
        int64_t v232 = function_409270(v225, v226, 0, 0, v9); // 0x412341
        int64_t v233 = function_409270(v225, v226, (int32_t)v231, (int32_t)v232, (int64_t)&v14); // 0x412365
        if (v233 == 0 || v231 == 0 || v232 == 0) {
            // 0x4121c1
            *(int32_t *)a6 = 12;
            // 0x4119a8
            *(int64_t *)(v6 + 24) = 0;
            // 0x4118fa
            return *(int64_t *)(v6 + 24);
        }
        goto lab_0x41238f;
    }
  lab_0x412cad_3:
    // 0x412cad
    *v182 = v234;
    free((int64_t *)v235);
    free((int64_t *)*v182);
    *(int32_t *)*v177 = 12;
    v11 = v177;
    goto lab_0x4124eb_3;
  lab_0x41299e:;
    int64_t v236 = *v163; // 0x41299e
    char * v237 = (char *)(v236 + 176); // 0x4129aa
    *v237 = *v237 | 2;
    int64_t v238 = v236 + 112; // 0x4129b1
    int64_t v239 = v236 + 128; // 0x4129b5
    char * v240 = (char *)(v6 + 168); // 0x4129c2
    *v240 = 6;
    int64_t * v241 = (int64_t *)(v6 + 160); // 0x4129ca
    *v241 = v18;
    int64_t v242 = function_409270(v238, v239, 0, 0, v154); // 0x4129d2
    *v182 = v242;
    int64_t v243 = v5 + 32; // 0x4129e3
    v4 = v243;
    int64_t v244 = v5; // 0x4129ed
    if (v242 == 0) {
        goto lab_0x41298e;
    } else {
        while (*(int64_t *)v244 == 0) {
            int64_t v245 = v244 + 8; // 0x4129f5
            v244 = v245;
            if (v243 == v245) {
                // 0x4129fe
                free((int64_t *)v5);
                goto lab_0x4118d0;
            }
        }
        // 0x412a0c
        *v240 = 3;
        *v241 = v5;
        int64_t v246 = function_409270(v238, v239, 0, 0, v154); // 0x412a2d
        if (v246 == 0) {
            goto lab_0x41298e;
        } else {
            // 0x412a3b
            *(char *)(v6 + 200) = 10;
            int64_t v247 = function_409270(v238, v239, (int32_t)v246, (int32_t)*v182, v158); // 0x412a59
            *v182 = v247;
            if (v247 != 0) {
                goto lab_0x4118d0;
            } else {
                goto lab_0x41298e;
            }
        }
    }
  lab_0x412948:
    // 0x412948
    function_407c60(v18);
    *(char *)(v6 + 168) = 3;
    *(int64_t *)(v6 + 160) = v5;
    int64_t v248 = *v163; // 0x41296b
    int64_t v249 = function_409270(v248 + 112, v248 + 128, 0, 0, v154); // 0x41297b
    *v182 = v249;
    if (v249 != 0) {
        goto lab_0x4118d0;
    } else {
        goto lab_0x41298e;
    }
}
// Address range: 0x412d20 - 0x412e5e
int64_t function_412d20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t result = function_411830(a1, a2, a3, a4, a5, a6); // 0x412d4a
    int64_t v1; // 0x412d20
    if ((int32_t)v1 != 0 == result == 0) {
        // 0x412df5
        return 0;
    }
    char * v2 = (char *)(a3 + 8); // 0x412d68
    char v3 = *v2; // 0x412d68
    if ((v3 & -9) == 2) {
        // 0x412df5
        return result;
    }
    // 0x412d76
    int64_t v4; // bp-72, 0x412d20
    int64_t v5 = &v4;
    int64_t v6 = result;
    int64_t result2 = v6; // 0x412d78
    if (a5 != 0 == v3 == 9) {
        return result2;
    }
    int64_t v7 = function_411830(a1, a2, a3, a4, a5, a6); // 0x412d93
    int32_t v8 = v7;
    if (v7 == 0 == (v8 != 0)) {
        // 0x412e1c
        result2 = 0;
        if (v6 == 0) {
            return result2;
        } else {
            // 0x412e21
            function_406aa0(v6, 0x407cb0, 0);
            result2 = 0;
            return result2;
        }
    }
    int64_t v9; // 0x412dd5
    char v10; // 0x412de7
    while (v6 != 0 && v7 != 0) {
        // 0x412db0
        v9 = function_409270(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
        if (v9 == 0) {
            // 0x412e35
            function_406aa0(v7, 0x407cb0, 0);
            function_406aa0(v6, 0x407cb0, 0);
            *(int32_t *)a6 = 12;
            result2 = 0;
            return result2;
        }
        // 0x412de4
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
        // 0x412d7f
        v7 = function_411830(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x412e1c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x412e21
                function_406aa0(v6, 0x407cb0, 0);
                result2 = 0;
                return result2;
            }
        }
    }
    int64_t v11 = v6 == 0 ? v7 : v6; // 0x412e13
    char v12 = *v2; // 0x412d68
    result2 = v11;
    while ((v12 & -9) != 2) {
        // 0x412d76
        v6 = v11;
        result2 = v6;
        if (a5 != 0 == v12 == 9) {
            return result2;
        }
        // 0x412d7f
        v7 = function_411830(a1, a2, a3, a4, a5, a6);
        v8 = v7;
        if (v7 == 0 == (v8 != 0)) {
            // 0x412e1c
            result2 = 0;
            if (v6 == 0) {
                return result2;
            } else {
                // 0x412e21
                function_406aa0(v6, 0x407cb0, 0);
                result2 = 0;
                return result2;
            }
        }
        while (v6 != 0 && v7 != 0) {
            // 0x412db0
            v9 = function_409270(a2 + 112, a2 + 128, (int32_t)v6, v8, v5);
            if (v9 == 0) {
                // 0x412e35
                function_406aa0(v7, 0x407cb0, 0);
                function_406aa0(v6, 0x407cb0, 0);
                *(int32_t *)a6 = 12;
                result2 = 0;
                return result2;
            }
            // 0x412de4
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
            // 0x412d7f
            v7 = function_411830(a1, a2, a3, a4, a5, a6);
            v8 = v7;
            if (v7 == 0 == (v8 != 0)) {
                // 0x412e1c
                result2 = 0;
                if (v6 == 0) {
                    return result2;
                } else {
                    // 0x412e21
                    function_406aa0(v6, 0x407cb0, 0);
                    result2 = 0;
                    return result2;
                }
            }
        }
        // 0x412e10
        v11 = v6 == 0 ? v7 : v6;
        v12 = *v2;
        result2 = v11;
    }
  lab_0x412df5_2:
    // 0x412df5
    return result2;
}
// Address range: 0x412e60 - 0x412fb1
int64_t function_412e60(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a2 + 168); // 0x412e82
    int64_t v2 = function_412d20(a1, a2, a3, a4, a5, a6); // 0x412e92
    int64_t v3; // 0x412e60
    if ((int32_t)v3 != 0 && v2 == 0) {
        // 0x412eb1
        return 0;
    }
    char * v4 = (char *)(a3 + 8); // 0x412f49
    int64_t * v5 = (int64_t *)(a1 + 72);
    int64_t v6 = a2 + 112;
    int64_t v7; // bp-72, 0x412e60
    int64_t v8 = &v7;
    int64_t v9 = v2;
    int64_t result = v9; // 0x412f4d
    while (*v4 == 10) {
        // 0x412f53
        *v5 = (0x100000000 * function_4110c0((int64_t *)a3, a1, a4 | 0x800000) >> 32) + *v5;
        char v10 = *v4; // 0x412f6f
        int64_t v11 = 0; // 0x412f7b
        if ((v10 & -9) != 2 && a5 != 0 != (v10 == 9)) {
            // 0x412ed7
            v11 = function_412d20(a1, a2, a3, a4, a5, a6);
            int64_t v12; // 0x412e60
            if (v11 == 0 == (*(int32_t *)&v12 != 0)) {
                // 0x412f94
                result = 0;
                if (v9 == 0) {
                    return result;
                } else {
                    // 0x412f9d
                    function_406aa0(v9, 0x407cb0, 0);
                    result = 0;
                    return result;
                }
            }
        }
        int64_t v13 = function_409270(v6, a2 + 128, (int32_t)v9, (int32_t)v11, v8); // 0x412f3c
        if (v13 == 0) {
            // 0x412f88
            *(int32_t *)a6 = 12;
            result = 0;
            return result;
        }
        v9 = v13;
        result = v9;
    }
  lab_0x412eb1:
    // 0x412eb1
    return result;
}
// Address range: 0x412fc0 - 0x413d6a
int64_t function_412fc0(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x412fc0
    int128_t v1; // 0x412fc0
    int128_t v2 = v1;
    int64_t v3; // 0x412fc0
    int64_t v4 = v3;
    char * v5 = (char *)(a1 + 56); // 0x412fdd
    *v5 = *v5 & -112;
    int64_t v6 = a1 + 8;
    int64_t * v7 = (int64_t *)v6; // 0x412fe1
    int32_t result = 0; // bp-268, 0x412fe9
    *(int64_t *)(a1 + 24) = a4;
    int64_t * v8 = (int64_t *)(a1 + 16); // 0x412ff8
    *v8 = 0;
    int64_t * v9 = (int64_t *)(a1 + 48); // 0x413000
    *v9 = 0;
    int64_t v10 = v6; // 0x413008
    int64_t v11 = a1; // 0x413008
    if (*v7 < 232) {
        int64_t * v12 = (int64_t *)a1; // 0x413b48
        int64_t * mem = realloc(v12, 232); // 0x413b48
        if (mem == NULL) {
            // 0x41390b
            return 12;
        }
        // 0x413b59
        v11 = (int64_t)mem;
        *v7 = 232;
        *v12 = v11;
        v10 = v11 + 8;
    }
    // 0x41300e
    *v8 = 232;
    int64_t v13 = v10 & -8; // 0x41301f
    int64_t * v14 = (int64_t *)v11; // 0x413023
    *v14 = 0;
    *(int64_t *)(v11 + 224) = 0;
    __asm_rep_stosq_memset((char *)v13, 0, (v11 + 232 - v13) / 8 % 0x20000000);
    *(int32_t *)(v11 + 128) = 15;
    int64_t v15; // 0x412fc0
    int64_t v16; // 0x412fc0
    uint64_t v17; // 0x412fc0
    int64_t v18; // 0x412fc0
    int64_t v19; // 0x412fc0
    int64_t v20; // 0x413061
    int64_t * v21; // 0x4130ad
    int32_t * v22; // 0x4130bb
    char * v23; // 0x413118
    if (a3 < 0x555555555555555) {
        // 0x413061
        v20 = a3 + 1;
        *(int64_t *)v10 = v20;
        *v14 = (int64_t)malloc(16 * (int32_t)v20);
        int64_t size = 1; // 0x413081
        int64_t v24 = 0; // 0x413081
        if (a3 != 0) {
            int64_t v25 = 2; // 0x413090
            int64_t v26 = v25; // 0x413096
            while (v25 <= a3) {
                // 0x413090
                v25 = 2 * v26;
                v26 = v25;
            }
            // 0x413098
            size = v25;
            v24 = v25 - 1;
        }
        int64_t * mem2 = calloc(24, (int32_t)size); // 0x4130a1
        *(int64_t *)(v11 + 136) = v24;
        v21 = (int64_t *)(v11 + 64);
        *v21 = (int64_t)mem2;
        int32_t v27 = __ctype_get_mb_cur_max(); // 0x4130b1
        v22 = (int32_t *)(v11 + 180);
        *v22 = v27;
        char * v28 = nl_langinfo(14); // 0x4130c1
        if ((*v28 & -33) == 85) {
            int64_t v29 = (int64_t)v28; // 0x4130c1
            if ((*(char *)(v29 + 1) & -33) == 84) {
                // 0x4130dd
                if ((*(char *)(v29 + 2) & -33) == 70) {
                    int64_t v30 = v29 + 3; // 0x4130eb
                    bool v31; // 0x412fc0
                    int64_t v32 = v31 ? -1 : 1; // 0x413101
                    int64_t v33 = (int64_t)&g13; // 0x412fc0
                    int64_t v34 = v30 + (int64_t)(*(char *)v30 == 45); // 0x412fc0
                    int64_t v35 = 2; // 0x413101
                    unsigned char v36 = *(char *)v34; // 0x413101
                    char v37 = *(char *)v33; // 0x413101
                    char v38 = v37; // 0x413101
                    bool v39 = false; // 0x413101
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
                        char * v41 = (char *)(v11 + 176); // 0x41310c
                        *v41 = *v41 | 4;
                    }
                }
            }
        }
        // 0x413118
        v23 = (char *)(v11 + 176);
        char v42 = *v23; // 0x413118
        *v23 = v42 & -9;
        if (*v22 < 2) {
            goto lab_0x413143;
        } else {
            if ((v42 & 4) == 0) {
                int64_t * mem3 = calloc(32, 1); // 0x4139ba
                int64_t * v43 = (int64_t *)(v11 + 120); // 0x4139bf
                *v43 = (int64_t)mem3;
                int64_t v44 = 0; // 0x4139c6
                if (mem3 == NULL) {
                    // 0x4139a0
                    result = 12;
                    goto lab_0x41397e;
                } else {
                    while (true) {
                        int64_t v45 = v44;
                        v16 = 0;
                        v18 = 8 * v45;
                        while (true) {
                          lab_0x4139f6_2:
                            // 0x4139f6
                            v19 = v18;
                            v17 = v16;
                            int32_t wc = v19; // 0x4139f6
                            int32_t v46 = btowc(wc); // 0x4139ff
                            int64_t v47 = v19 & 0xffffff80; // 0x413a0d
                            if (v46 == -1) {
                                if (v47 != 0) {
                                    goto lab_0x4139eb;
                                } else {
                                    // 0x4139e4
                                    *v23 = *v23 | 8;
                                    goto lab_0x4139eb;
                                }
                            } else {
                                int64_t * v48 = (int64_t *)(*v43 + v45); // 0x413a25
                                *v48 = *v48 | 1 << v17 % 64;
                                if (v47 != 0) {
                                    goto lab_0x4139eb;
                                } else {
                                    if (v46 != wc) {
                                        // 0x4139e4
                                        *v23 = *v23 | 8;
                                        goto lab_0x4139eb;
                                    } else {
                                        int64_t v49 = v17 + 1; // 0x413a30
                                        v15 = v49;
                                        if ((int32_t)v49 == 64) {
                                            // break -> 0x413a40
                                            break;
                                        }
                                        goto lab_0x4139f6;
                                    }
                                }
                            }
                        }
                      lab_0x413a40:
                        // 0x413a40
                        v44 = v45 + 8;
                        if (v45 == 24) {
                            // break -> 0x413143
                            break;
                        }
                    }
                    goto lab_0x413143;
                }
            } else {
                // 0x41313b
                *(int64_t *)(v11 + 120) = (int64_t)&g14;
                goto lab_0x413143;
            }
        }
    } else {
        // 0x4139a0
        result = 12;
        goto lab_0x41397e;
    }
  lab_0x4139eb:;
    int64_t v50 = v17 + 1; // 0x4139eb
    v15 = v50;
    if ((int32_t)v50 == 64) {
        // break -> 0x413a40
        goto lab_0x413a40;
    }
    goto lab_0x4139f6;
  lab_0x4139f6:
    // 0x4139f6
    v16 = v15 & 0xffffffff;
    v18 = v19 + 1 & 0xffffffff;
    goto lab_0x4139f6_2;
  lab_0x413c00_2:
    // 0x413c00
    result = 0;
    int64_t v51; // 0x412fc0
    int64_t v52 = v51; // 0x413c08
    int64_t v53 = v51; // 0x413c08
    goto lab_0x413309;
  lab_0x4134f0:;
    // 0x4134f0
    int64_t * v83; // 0x412fc0
    int64_t v91 = *v83; // 0x4134f0
    int64_t v92 = function_406aa0(v91, 0x409620, (int32_t)a1); // 0x4134fc
    int64_t v93 = v92; // 0x413503
    int64_t v94 = v91; // 0x413503
    int64_t v95; // 0x412fc0
    int64_t v73; // 0x412fc0
    int64_t v96; // bp-232, 0x412fc0
    int64_t v68; // bp-248, 0x412fc0
    int64_t * v80; // 0x413447
    int64_t * v97; // 0x412fc0
    if ((int32_t)v92 != 0) {
        goto lab_0x413718_2;
    } else {
        int64_t v98 = *v83; // 0x413509
        int64_t v99 = function_406aa0(v98, 0x40bb50, (int32_t)v73); // 0x413515
        v93 = v99;
        v94 = v98;
        if ((int32_t)v99 != 0) {
            goto lab_0x413718_2;
        } else {
            // 0x413522
            function_408ae0(*v83, 0x408830, v73);
            int64_t v100 = *v83; // 0x413533
            int64_t v101 = function_408ae0(v100, 0x408330, v73); // 0x41353f
            v93 = v101;
            v94 = v100;
            if ((int32_t)v101 != 0) {
                goto lab_0x413718_2;
            } else {
                // 0x413558
                v97 = (int64_t *)(v73 + 16);
                int64_t v102 = 0; // 0x412fc0
                int64_t v103 = 0; // 0x412fc0
                int64_t v104; // 0x412fc0
                while (true) {
                    int64_t v105 = *v97; // 0x413558
                    int64_t v106 = v105; // 0x41355c
                    int64_t v107 = v102; // 0x41355c
                    int64_t v108 = v103; // 0x41355c
                    int64_t v109 = v103; // 0x41355c
                    int64_t v110 = v102; // 0x41355c
                    v104 = v103;
                    int64_t v111; // 0x412fc0
                    if (v105 == v103) {
                      lab_0x41357c:
                        // 0x41357c
                        v111 = v109;
                        if ((char)v110 == 0) {
                            // break -> 0x413610
                            break;
                        }
                      lab_0x413585:
                        // 0x413585
                        v106 = v111;
                        v107 = 0;
                        v108 = 0;
                    }
                    int64_t v112 = v107;
                    int64_t v113 = v106; // 0x413576
                    int64_t v114 = v108;
                    int64_t v115; // 0x413572
                    while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                        // 0x413572
                        v115 = v114 + 1;
                        v109 = v113;
                        v110 = v112;
                        v104 = v115;
                        if (v113 == v115) {
                            goto lab_0x41357c;
                        }
                        v114 = v115;
                    }
                    int64_t v116 = function_408d10((int128_t *)&v68, v73, v114, 1); // 0x4135a3
                    if ((int32_t)v116 != 0) {
                        // 0x413718
                        v93 = v116;
                        v94 = &v68;
                        goto lab_0x413718_2;
                    }
                    int64_t v117 = v114 + 1; // 0x4135b9
                    v102 = v112;
                    v103 = v117;
                    while (*(int64_t *)((0x1800000000 * v114 >> 32) + 8 + *v80) == 0) {
                        // 0x4135c5
                        free((int64_t *)v96);
                        int64_t v118 = *v97; // 0x4135d5
                        v111 = v118;
                        if (v118 == v117) {
                            goto lab_0x413585;
                        }
                        v112 = 1;
                        v113 = v118;
                        v114 = v117;
                        while (*(int64_t *)(*v80 + 8 + 24 * v114) != 0) {
                            // 0x413572
                            v115 = v114 + 1;
                            v109 = v113;
                            v110 = v112;
                            v104 = v115;
                            if (v113 == v115) {
                                goto lab_0x41357c;
                            }
                            v114 = v115;
                        }
                        // 0x413590
                        v116 = function_408d10((int128_t *)&v68, v73, v114, 1);
                        if ((int32_t)v116 != 0) {
                            // 0x413718
                            v93 = v116;
                            v94 = &v68;
                            goto lab_0x413718_2;
                        }
                        // 0x4135b0
                        v117 = v114 + 1;
                        v102 = v112;
                        v103 = v117;
                    }
                }
                // 0x413610
                v95 = v104;
                if ((*v5 & 16) != 0) {
                    goto lab_0x413728;
                } else {
                    // 0x41361a
                    if (*v9 == 0) {
                        goto lab_0x413728;
                    } else {
                        // 0x413625
                        if (*(char *)(v73 + 176) % 2 == 0) {
                            goto lab_0x413728;
                        } else {
                            goto lab_0x413633;
                        }
                    }
                }
            }
        }
    }
  lab_0x413718_2:
    // 0x413718
    result = v93;
    int64_t v67 = v94; // 0x413720
    goto lab_0x413928;
  lab_0x4137b8:;
    // 0x4137b8
    int64_t v140; // 0x412fc0
    int64_t v141 = v140 + 1; // 0x4137b8
    uint64_t v78; // 0x412fc0
    if (v78 <= v141) {
        // break -> 0x413860
        goto lab_0x413860;
    }
    int64_t v142 = v141; // 0x412fc0
    goto lab_0x4137c5_2;
  lab_0x413143:;
    // 0x413143
    int64_t v129; // bp-208, 0x412fc0
    int64_t v124; // bp-216, 0x412fc0
    int64_t * v158; // 0x413164
    int64_t v128; // 0x413164
    if (*v14 == 0) {
        // 0x4139a0
        result = 12;
        goto lab_0x41397e;
    } else {
        // 0x41314d
        if (*v21 == 0) {
            // 0x4139a0
            result = 12;
            goto lab_0x41397e;
        } else {
            // 0x413158
            v158 = (int64_t *)(a1 + 40);
            v128 = *v158;
            result = 0;
            __asm_rep_stosq_memset((char *)&v129, 0, 18);
            v124 = a2;
            if (a3 != 0) {
                int64_t v159 = &v124; // 0x4135e5
                int64_t v160 = function_406ee0(v159, v20); // 0x4135ea
                v93 = v160;
                v94 = v159;
                if ((int32_t)v160 != 0) {
                    goto lab_0x413718_2;
                } else {
                    // 0x4135f7
                    goto lab_0x413202;
                }
            } else {
                goto lab_0x413202;
            }
        }
    }
  lab_0x41397e:
    // 0x41397e
    function_40bbe0(v11);
    *(int64_t *)a1 = 0;
    *v7 = 0;
    // 0x41390b
    return result;
  lab_0x413202:;
    int64_t v125 = a4 & 0x400000; // 0x413187
    int32_t v126 = *v22;
    int64_t v127 = (v128 | v125) == 0 ? a2 : v129;
    v129 = v127;
    if (v125 == 0) {
        if (v126 > 1) {
            int64_t v130 = &v124;
            function_4072d0(v130);
            result = 0;
            v52 = v130;
            v53 = v130;
        } else {
            if ((v128 || v125) != 0) {
                int64_t v131 = a3 - v4; // 0x413296
                int64_t v132 = v131 == 0 | v131 < 0 != ((v131 ^ a3) & (v4 ^ a3)) < 0 ? a3 : v4; // 0x4132a6
                if (v132 > v3) {
                    unsigned char v133 = *(char *)(2 * v3 + v124); // 0x4132dd
                    *(char *)(v127 + v3) = *(char *)(v128 + (int64_t)v133);
                    int64_t v134 = v3 + 1; // 0x4132e8
                    int64_t v135 = v134; // 0x4132ef
                    if (v132 != v134) {
                        unsigned char v136 = *(char *)(v135 + v3 + v124); // 0x4132dd
                        *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                        int64_t v137 = v135 + 1; // 0x4132e8
                        v135 = v137;
                        while (v132 != v137) {
                            // 0x4132c0
                            v136 = *(char *)(v135 + v3 + v124);
                            *(char *)(v129 + v135) = *(char *)(v128 + (int64_t)v136);
                            v137 = v135 + 1;
                            v135 = v137;
                        }
                    }
                }
            }
            // 0x4132f1
            result = 0;
            v52 = &v124;
            v53 = v126;
        }
        goto lab_0x413309;
    } else {
        // 0x413218
        v51 = &v124;
        if (v126 < 2) {
            // 0x413b28
            function_407250(v51);
            result = 0;
            v52 = v51;
            v53 = v51;
            goto lab_0x413309;
        } else {
            int64_t v138 = function_407480(v51); // 0x413226
            v93 = v138;
            v94 = v51;
            // 0x413221
            while ((int32_t)v138 == 0) {
                if (v3 >= a3) {
                    goto lab_0x413c00_2;
                }
                // 0x413241
                if (v4 > v3 + (int64_t)*v22) {
                    goto lab_0x413c00_2;
                }
                int64_t v139 = function_406ee0(v51, 2 * v4); // 0x413269
                v93 = v139;
                v94 = v51;
                if ((int32_t)v139 != 0) {
                    // break -> 0x413718
                    break;
                }
                v138 = function_407480(v51);
                v93 = v138;
                v94 = v51;
            }
            goto lab_0x413718_2;
        }
    }
  lab_0x413928:;
    int64_t * v119 = (int64_t *)(v67 + 112); // 0x413928
    int64_t v120 = *v119; // 0x413928
    if (v120 != 0) {
        int64_t * v121 = (int64_t *)v120; // 0x413938
        int64_t v122 = *v121; // 0x413938
        free(v121);
        while (v122 != 0) {
            // 0x413938
            v121 = (int64_t *)v122;
            v122 = *v121;
            free(v121);
        }
    }
    // 0x413948
    *v119 = 0;
    int64_t * v123 = (int64_t *)(v67 + 32); // 0x413950
    *(int32_t *)(v67 + 128) = 15;
    *(int64_t *)(v67 + 104) = 0;
    free((int64_t *)*v123);
    *v123 = 0;
    function_408230(&v124);
    goto lab_0x41397e;
  lab_0x413309:;
    int64_t v54 = v53;
    int64_t v55 = v52;
    *v9 = 0;
    *(int64_t *)(v54 + 216) = a4;
    int32_t v56; // bp-264, 0x412fc0
    function_4110c0((int64_t *)&v56, v55, a4 | 0x800000);
    int64_t v57 = &v56; // 0x413341
    int64_t v58 = function_412e60(v55, a1, v57, a4, 0, (int64_t)&result); // 0x413358
    int64_t v59; // 0x412fc0
    int64_t v60; // 0x412fc0
    int64_t v61; // 0x412fc0
    int64_t v62; // 0x412fc0
    int64_t v63; // 0x413ba9
    int64_t v64; // 0x413bb7
    int64_t v65; // 0x412fc0
    int64_t v66; // 0x413bd2
    if (result != 0) {
        if (v58 == 0) {
            // 0x413d22
            *(int64_t *)(v11 + 104) = 0;
            v67 = v55;
            goto lab_0x413928;
        } else {
            // 0x413ba9
            v63 = v54 + 112;
            v64 = v54 + 128;
            v65 = &v68;
            v66 = function_409270(v63, v64, 0, 0, v65);
            goto lab_0x4133a7;
        }
    } else {
        int64_t v69 = v54 + 112; // 0x413369
        int64_t v70 = v54 + 128; // 0x413377
        int64_t v71 = &v68;
        int64_t v72 = function_409270(v69, v70, 0, 0, v71); // 0x413392
        v65 = v71;
        v64 = v70;
        v66 = v72;
        v63 = v69;
        v62 = 2;
        v61 = v72;
        v60 = v69;
        v59 = v72;
        if (v58 == 0) {
            goto lab_0x4133c6;
        } else {
            goto lab_0x4133a7;
        }
    }
  lab_0x4133c6:
    // 0x4133c6
    v73 = v60;
    int64_t * v74; // 0x412fc0
    int64_t * v75; // 0x4133e2
    int64_t * v76; // 0x41347d
    int64_t * v77; // 0x412fc0
    if (v61 == 0 || v59 == 0) {
        // 0x413be8
        result = 12;
        *(int64_t *)(v11 + 104) = 0;
        v67 = v73;
        goto lab_0x413928;
    } else {
        // 0x4133de
        v78 = v62;
        v75 = (int64_t *)(v11 + 104);
        *v75 = v59;
        int32_t v79 = (int32_t)*(int64_t *)(v73 + 8);
        int32_t size2 = 8 * v79; // 0x4133ff
        int64_t * mem4 = malloc(size2); // 0x4133ff
        *(int64_t *)(v73 + 24) = (int64_t)mem4;
        int64_t * mem5 = malloc(size2); // 0x413413
        *(int64_t *)(v73 + 32) = (int64_t)mem5;
        int32_t size3 = 24 * v79; // 0x413424
        int64_t * mem6 = malloc(size3); // 0x413424
        *(int64_t *)(v73 + 40) = (int64_t)mem6;
        int64_t * mem7 = malloc(size3); // 0x413435
        v80 = (int64_t *)(v73 + 48);
        *v80 = (int64_t)mem7;
        if (mem4 == NULL | mem5 == NULL || mem6 == NULL || mem7 == NULL) {
            // 0x413920
            result = 12;
            v67 = v73;
            goto lab_0x413928;
        } else {
            int64_t v81 = *v9; // 0x41346c
            int64_t * mem8 = malloc(8 * (int32_t)v81); // 0x413478
            int64_t v82 = (int64_t)mem8; // 0x413478
            v76 = (int64_t *)(v73 + 224);
            *v76 = v82;
            if (mem8 == NULL) {
                // 0x41346c
                v83 = (int64_t *)(v73 + 104);
                goto lab_0x4134f0;
            } else {
                // 0x413489
                if (v81 != 0) {
                    int64_t v84 = 0;
                    *(int64_t *)(8 * v84 + v82) = v84;
                    int64_t v85 = v84 + 1; // 0x413494
                    while (v85 != v81) {
                        // 0x413490
                        v84 = v85;
                        *(int64_t *)(8 * v84 + v82) = v84;
                        v85 = v84 + 1;
                    }
                }
                // 0x41349d
                v77 = (int64_t *)(v73 + 104);
                function_408ae0(*v77, 0x4087a0, v73);
                int64_t v86 = *v9; // 0x4134ae
                int64_t v87 = *v76;
                v74 = (int64_t *)v87;
                if (v86 == 0) {
                    goto lab_0x4134df;
                } else {
                    // 0x4134bb
                    v83 = v77;
                    if (*v74 == 0) {
                        int64_t v88 = 1; // 0x4134d6
                        while (v88 != v86) {
                            int64_t v89 = v88; // 0x4134d4
                            v83 = v77;
                            if (*(int64_t *)(8 * v88 + v87) != v88) {
                                goto lab_0x4134f0;
                            }
                            v88 = v89 + 1;
                        }
                        goto lab_0x4134df;
                    } else {
                        goto lab_0x4134f0;
                    }
                }
            }
        }
    }
  lab_0x4133a7:;
    int64_t v90 = function_409270(v63, v64, (int32_t)v58, (int32_t)v66, v65); // 0x4133bb
    v62 = 16;
    v61 = v66;
    v60 = v63;
    v59 = v90;
    goto lab_0x4133c6;
  lab_0x4134df:
    // 0x4134df
    free(v74);
    *v76 = 0;
    v83 = v77;
    goto lab_0x4134f0;
  lab_0x413728:
    // 0x413728
    if (*(int64_t *)(v73 + 152) != 0) {
        goto lab_0x413633;
    } else {
        goto lab_0x413736;
    }
  lab_0x413633:;
    int64_t size4 = 24 * v95; // 0x413637
    int64_t * mem9 = malloc((int32_t)size4); // 0x41363b
    int64_t v161 = (int64_t)mem9; // 0x41363b
    int64_t * v162 = (int64_t *)(v73 + 56); // 0x413640
    *v162 = v161;
    if (mem9 == NULL) {
        // 0x413d00
        result = 12;
        v67 = size4;
        goto lab_0x413928;
    } else {
        if (v95 != 0) {
            int128_t v163 = __asm_pxor(v2, v2); // 0x413668
            __asm_movups(*(int128_t *)mem9, v163);
            *(int64_t *)(v161 + 16) = 0;
            uint64_t v164 = *v97; // 0x41367f
            int64_t v165 = 1; // 0x413686
            int128_t v166 = v163; // 0x413686
            int64_t v167 = v164; // 0x413686
            if (v164 > 1) {
                int128_t v168 = v166;
                int128_t v169 = __asm_pxor(v168, v168); // 0x413668
                int64_t v170 = v165 + 1; // 0x41366c
                int64_t v171 = *v162 + 24 * v165; // 0x413670
                __asm_movups(*(int128_t *)v171, v169);
                *(int64_t *)(v171 + 16) = 0;
                uint64_t v172 = *v97; // 0x41367f
                v165 = v170;
                v167 = v172;
                while (v172 > v170) {
                    // 0x413660
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
                int64_t v174 = *v80; // 0x41369a
                int64_t v175 = 0;
                int64_t v176 = 24 * v175; // 0x4136aa
                int64_t v177 = v176 + v174; // 0x4136b7
                int64_t v178 = *(int64_t *)(v177 + 8); // 0x4136ba
                int64_t v179 = v173; // 0x4136c3
                int64_t v180 = v174; // 0x4136c3
                int64_t v181; // 0x412fc0
                int64_t v182; // 0x4136fe
                int64_t v183; // 0x413707
                int64_t v184; // 0x4136d0
                int64_t v185; // 0x4136d9
                if (v178 >= 0 == (v178 != 0)) {
                    // 0x4136ed
                    v181 = *(int64_t *)(v177 + 16);
                    v185 = 0;
                    v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                    v183 = function_406f80(v182, v175);
                    v93 = 12;
                    v94 = v182;
                    if ((char)v183 == 0) {
                        goto lab_0x413718_2;
                    }
                    // 0x4136d0
                    v184 = *v80;
                    v185++;
                    v181 = 0x100000000 * v181 >> 32;
                    while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                        // 0x4136ed
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_406f80(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x413718_2;
                        }
                        // 0x4136d0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                    }
                    // 0x413b80
                    v179 = *v97;
                    v180 = v184;
                }
                // 0x413b80
                v174 = v180;
                int64_t v186 = v179; // 0x413b8b
                int64_t v187 = v175 + 1; // 0x413b80
                while (v186 > v187) {
                    // 0x41369e
                    v175 = v187;
                    v176 = 24 * v175;
                    v177 = v176 + v174;
                    v178 = *(int64_t *)(v177 + 8);
                    v179 = v186;
                    v180 = v174;
                    if (v178 >= 0 == (v178 != 0)) {
                        // 0x4136ed
                        v181 = *(int64_t *)(v177 + 16);
                        v185 = 0;
                        v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                        v183 = function_406f80(v182, v175);
                        v93 = 12;
                        v94 = v182;
                        if ((char)v183 == 0) {
                            goto lab_0x413718_2;
                        }
                        // 0x4136d0
                        v184 = *v80;
                        v185++;
                        v181 = 0x100000000 * v181 >> 32;
                        while (v185 < *(int64_t *)(v176 + 8 + v184)) {
                            // 0x4136ed
                            v182 = *v162 + 24 * *(int64_t *)(8 * v185 + v181);
                            v183 = function_406f80(v182, v175);
                            v93 = 12;
                            v94 = v182;
                            if ((char)v183 == 0) {
                                goto lab_0x413718_2;
                            }
                            // 0x4136d0
                            v184 = *v80;
                            v185++;
                            v181 = 0x100000000 * v181 >> 32;
                        }
                        // 0x413b80
                        v179 = *v97;
                        v180 = v184;
                    }
                    // 0x413b80
                    v174 = v180;
                    v186 = v179;
                    v187 = v175 + 1;
                }
            }
        }
        goto lab_0x413736;
    }
  lab_0x413736:
    // 0x413736
    result = 0;
    unsigned char result2 = *v23 / 4 & (char)(v125 == 0); // 0x413750
    if (result2 != 0) {
        // 0x413a70
        if (*v158 == 0) {
            // 0x413a7b
            if (*(int64_t *)(v11 + 16) != 0) {
                // 0x413a88
                return result2;
            }
            int64_t v188 = *(int64_t *)(v11 + 152); // 0x413d36
            *v22 = 1;
            *v23 = 2 * (char)(v188 >= 0 == (v188 != 0)) | *v23 & -7;
        }
    }
    int64_t v155 = &v68; // 0x41375c
    int64_t v189 = *(int64_t *)(*(int64_t *)(*v75 + 24) + 56); // 0x413763
    *(int64_t *)(v11 + 144) = v189;
    int64_t * v153 = (int64_t *)(v11 + 48); // 0x413772
    int64_t v190 = function_4096a0(v155, *v153 + 24 * v189); // 0x41377a
    int64_t v191 = v190 & 0xffffffff; // 0x41377f
    int32_t v192 = v190; // 0x413782
    v56 = v192;
    int64_t v154 = v155; // 0x413788
    int64_t v156 = v191; // 0x413788
    if (v192 != 0) {
        goto lab_0x41389f;
    } else {
        // 0x41378e
        if (*(int64_t *)(v11 + 152) >= 1) {
            int64_t v152 = &v96;
            v142 = 0;
            while (true) {
              lab_0x4137c5_2:
                // 0x4137c5
                v140 = v142;
                int64_t v143 = *v14; // 0x4137ca
                int64_t v144 = *(int64_t *)(v96 + 8 * v140); // 0x4137cd
                int64_t v145 = 16 * v144 + v143; // 0x4137d8
                if (*(char *)(v145 + 8) == 4) {
                    int64_t * v146 = (int64_t *)v145;
                    int64_t v147 = 0;
                    int64_t v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143; // 0x4137f9
                    int64_t v149; // 0x41380a
                    int64_t v150; // 0x413820
                    int64_t v151; // 0x41383f
                    if (*(char *)(v148 + 8) == 9) {
                        // 0x413802
                        if (*(int64_t *)v148 == *v146) {
                            // 0x41380a
                            v149 = *(int64_t *)(v11 + 40);
                            v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                            if (function_408600(v78, v152, v150) != 0) {
                                goto lab_0x4137b8;
                            } else {
                                // 0x413830
                                v151 = function_408b40(&v68, (int128_t *)(*v153 + 24 * v150));
                                if ((int32_t)v151 != 0) {
                                    // 0x413cc0
                                    v154 = v155;
                                    v156 = v151 & 0xffffffff;
                                    goto lab_0x41389f;
                                } else {
                                    // 0x4137c5
                                    v142 = 1;
                                    goto lab_0x4137c5_2;
                                }
                            }
                        }
                    }
                    int64_t v157 = v147 + 1; // 0x4137e8
                    while (v78 != v157) {
                        // 0x4137f1
                        v147 = v157;
                        v148 = 16 * *(int64_t *)(8 * v147 + v96) + v143;
                        if (*(char *)(v148 + 8) == 9) {
                            // 0x413802
                            if (*(int64_t *)v148 == *v146) {
                                // 0x41380a
                                v149 = *(int64_t *)(v11 + 40);
                                v150 = *(int64_t *)*(int64_t *)(24 * v144 + 16 + v149);
                                if (function_408600(v78, v152, v150) != 0) {
                                    goto lab_0x4137b8;
                                } else {
                                    // 0x413830
                                    v151 = function_408b40(&v68, (int128_t *)(*v153 + 24 * v150));
                                    if ((int32_t)v151 != 0) {
                                        // 0x413cc0
                                        v154 = v155;
                                        v156 = v151 & 0xffffffff;
                                        goto lab_0x41389f;
                                    } else {
                                        // 0x4137c5
                                        v142 = 1;
                                        goto lab_0x4137c5_2;
                                    }
                                }
                            }
                        }
                        // 0x4137e8
                        v157 = v147 + 1;
                    }
                }
                goto lab_0x4137b8;
            }
        }
      lab_0x413860:;
        int64_t v193 = function_4098b0((int128_t *)&v56, v11, &v68, 0); // 0x41386d
        *(int64_t *)(v11 + 72) = v193;
        if (v193 == 0) {
            goto lab_0x413b18;
        } else {
            // 0x41387f
            if (*(char *)(v193 + 104) < 0) {
                int64_t v194 = function_4098b0((int128_t *)&v56, v11, &v68, 1); // 0x413ac0
                int64_t * v195 = (int64_t *)(v11 + 80); // 0x413ad0
                *v195 = v194;
                int64_t v196 = function_4098b0((int128_t *)&v56, v11, &v68, 2); // 0x413ad9
                int64_t * v197 = (int64_t *)(v11 + 88); // 0x413ae9
                *v197 = v196;
                int64_t v198 = function_4098b0((int128_t *)&v56, v11, &v68, 6); // 0x413af2
                *(int64_t *)(v11 + 96) = v198;
                if (*v195 == 0) {
                    goto lab_0x413b18;
                } else {
                    // 0x413b02
                    if (v198 != 0 == (*v197 != 0)) {
                        goto lab_0x413895;
                    } else {
                        goto lab_0x413b18;
                    }
                }
            } else {
                // 0x413889
                *(int64_t *)(v11 + 96) = v193;
                *(int64_t *)(v11 + 88) = v193;
                *(int64_t *)(v11 + 80) = v193;
                goto lab_0x413895;
            }
        }
    }
  lab_0x41389f:
    // 0x41389f
    result = v156;
    int64_t * v199 = (int64_t *)(v154 + 112); // 0x4138a8
    int64_t v200 = *v199; // 0x4138a8
    if (v200 != 0) {
        int64_t * v201 = (int64_t *)v200; // 0x4138b8
        int64_t v202 = *v201; // 0x4138b8
        free(v201);
        while (v202 != 0) {
            // 0x4138b8
            v201 = (int64_t *)v202;
            v202 = *v201;
            free(v201);
        }
    }
    // 0x4138c8
    *v199 = 0;
    int64_t * v203 = (int64_t *)(v154 + 32); // 0x4138d1
    *(int32_t *)(v154 + 128) = 15;
    *(int64_t *)(v154 + 104) = 0;
    free((int64_t *)*v203);
    *v203 = 0;
    function_408230(&v124);
    if (result == 0) {
        // 0x41390b
        return result;
    }
    goto lab_0x41397e;
  lab_0x413b18:
    // 0x413b18
    v154 = v57;
    v156 = v56;
    goto lab_0x41389f;
  lab_0x413895:
    // 0x413895
    free((int64_t *)v96);
    v154 = v96;
    v156 = v191;
    goto lab_0x41389f;
}
// Address range: 0x413d70 - 0x413dd7
int64_t function_413d70(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a3 + 56); // 0x413d90
    *v1 = *v1 & 111 | (char)(g86 / 0x200000) & 16 | -128;
    int64_t v2; // 0x413d70
    int64_t v3 = function_412fc0(a3, a1, a2, g86, a1, v2); // 0x413da5
    if ((int32_t)v3 == 0) {
        // 0x413dd0
        return 0;
    }
    int64_t v4 = *(int64_t *)((0x100000000 * v3 >> 29) + (int64_t)&g15); // 0x413db7
    return (int64_t)dcgettext(NULL, (char *)(v4 + (int64_t)"Success"), 5);
}
// Address range: 0x413de0 - 0x413def
int64_t function_413de0(int64_t a1) {
    int64_t result = g86; // 0x413de0
    g86 = a1;
    return result;
}
// Address range: 0x413df0 - 0x413eb3
int64_t function_413df0(int64_t a1) {
    int64_t v1 = *(int64_t *)(a1 + 32); // 0x413df6
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 248) = 0;
    int64_t v2 = v1 + 8 & -8; // 0x413e1a
    __asm_rep_stosq_memset((char *)v2, 0, (v1 + 256 - v2) / 8 % 0x20000000);
    int64_t * v3 = (int64_t *)(a1 + 72); // 0x413e33
    int64_t v4 = *v3; // 0x413e33
    function_40c8a0(a1, v4 + 16, v4 + 24, v1);
    int64_t v5 = *(int64_t *)(a1 + 80); // 0x413e45
    int64_t v6 = v5; // 0x413e4f
    if (*v3 != v5) {
        // 0x413e51
        function_40c8a0(a1, v5 + 16, v5 + 24, v1);
        v6 = *v3;
    }
    int64_t v7 = *(int64_t *)(a1 + 88); // 0x413e69
    int64_t v8 = v6; // 0x413e71
    if (v7 != v6) {
        // 0x413e73
        function_40c8a0(a1, v7 + 16, v7 + 24, v1);
        v8 = *v3;
    }
    int64_t v9 = *(int64_t *)(a1 + 96); // 0x413e8b
    if (v9 != v8) {
        // 0x413e95
        function_40c8a0(a1, v9 + 16, v9 + 24, v1);
    }
    char * v10 = (char *)(a1 + 56); // 0x413ea8
    *v10 = *v10 | 8;
    return 0;
}
// Address range: 0x413ec0 - 0x41444b
int64_t function_413ec0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    // 0x413ec0
    if (a4 < 0 || a4 > a3) {
        // 0x413fef
        return -1;
    }
    int64_t v1 = a5 + a4; // 0x413ec5
    int64_t v2 = a3; // 0x413f01
    if (v1 > a3) {
        goto lab_0x413f2c;
    } else {
        // 0x413f07
        v2 = a3;
        if (a5 > -1 == v1 < a4) {
            goto lab_0x413f2c;
        } else {
            if (v1 < 0) {
                goto lab_0x4141e8;
            } else {
                // 0x413f1e
                v2 = v1;
                if (a5 >= 0 || v1 < a4) {
                    goto lab_0x413f2c;
                } else {
                    goto lab_0x4141e8;
                }
            }
        }
    }
  lab_0x413f2c:;
    char * v3 = (char *)(a1 + 56); // 0x413f2c
    int64_t v4 = (int64_t)*v3; // 0x413f2c
    int64_t v5 = v4; // 0x413f42
    int64_t v6 = v2; // 0x413f42
    if (v2 > a4) {
        // 0x413f44
        v5 = v4;
        v6 = v2;
        if ((v4 & 8) == 0 == (*(int64_t *)(a1 + 32) != 0)) {
            // 0x414140
            function_413df0(a1);
            v5 = (int64_t)*v3;
            v6 = v2;
        }
    }
    goto lab_0x413f53;
  lab_0x413f53:;
    int64_t size = 16; // 0x413f55
    int64_t v7 = 0; // 0x413f55
    int64_t v8 = 1; // 0x413f55
    int64_t v9; // 0x413ec0
    if (a7 == 0 || (v5 & 16) != 0) {
        goto lab_0x413f81;
    } else {
        uint64_t v10 = *(int64_t *)(a1 + 48); // 0x413f67
        if ((v5 & 6) == 4) {
            int64_t v11 = *(int64_t *)a7; // 0x414100
            if (v11 > v10) {
                // 0x413f73
                v9 = v10 + 1;
                goto lab_0x413f7a;
            } else {
                // 0x41410d
                v9 = v11;
                size = 16;
                v7 = 0;
                v8 = 1;
                if (v11 >= 0 == (v11 != 0)) {
                    goto lab_0x413f7a;
                } else {
                    goto lab_0x413f81;
                }
            }
        } else {
            // 0x413f73
            v9 = v10 + 1;
            goto lab_0x413f7a;
        }
    }
  lab_0x413f81:;
    int64_t * mem = malloc((int32_t)size); // 0x413f90
    if (mem == NULL) {
        // 0x413fef
        return -2;
    }
    uint64_t v12 = v8;
    int64_t v13 = (int64_t)mem; // 0x413f90
    int64_t result = -1; // 0x413ec0
    int64_t v14; // 0x413ec0
    int64_t v15; // 0x413ec0
    int64_t v16; // 0x413ec0
    int64_t v17; // 0x413ec0
    int64_t v18; // 0x413ec0
    int64_t v19; // 0x413ec0
    int64_t v20; // 0x413ec0
    int64_t v21; // 0x413ec0
    int64_t v22; // 0x413ec0
    int64_t v23; // 0x413ec0
    int64_t v24; // 0x413ec0
    int64_t v25; // 0x413ec0
    int64_t v26; // 0x413ec0
    int64_t v27; // 0x413ec0
    int64_t v28; // 0x413ec0
    int64_t v29; // 0x413ec0
    int64_t v30; // 0x413ec0
    int64_t v31; // 0x413ec0
    int64_t v32; // 0x413ec0
    int64_t v33; // 0x413ec0
    int64_t v34; // 0x413ec0
    int64_t v35; // 0x413ec0
    int64_t v36; // 0x413ec0
    int64_t v37; // 0x413ec0
    int64_t v38; // 0x413ec0
    char * v39; // 0x414011
    switch ((int32_t)v40) {
        case 0: {
            // 0x414008
            v14 = v7;
            v36 = a2;
            v26 = a3;
            v31 = v6;
            v16 = v6;
            v21 = a6;
            if (v14 == 0) {
                goto lab_0x4140d8;
            } else {
                // 0x414011
                v39 = (char *)(a1 + 56);
                int64_t v41 = v12 + 1; // 0x414016
                unsigned char v42 = *v39 / 2 % 4;
                switch (v42) {
                    case 0: {
                        int32_t size2 = 8 * (int32_t)v41; // 0x414190
                        int64_t * mem2 = malloc(size2); // 0x414190
                        int64_t v43 = (int64_t)mem2; // 0x414190
                        *(int64_t *)(v14 + 8) = v43;
                        v35 = v41;
                        v25 = a3;
                        int64_t v44; // 0x413ec0
                        v30 = v44;
                        v15 = v44;
                        v20 = 0;
                        if (mem2 == NULL) {
                            goto lab_0x4140bd;
                        } else {
                            int64_t * mem3 = malloc(size2); // 0x4141b5
                            *(int64_t *)(v14 + 16) = (int64_t)mem3;
                            if (mem3 == NULL) {
                                // 0x4142aa
                                free(mem2);
                                v35 = v41;
                                v25 = a3;
                                v30 = v43;
                                v15 = v44;
                                v20 = 0;
                                goto lab_0x4140bd;
                            } else {
                                // 0x4141d2
                                *(int64_t *)v14 = v41;
                                v34 = v41;
                                v24 = a3;
                                v29 = v43;
                                v19 = 1;
                                goto lab_0x414047;
                            }
                        }
                    }
                    case 1: {
                        int64_t * v45 = (int64_t *)v14; // 0x41422e
                        v34 = a2;
                        v24 = a3;
                        v29 = v6;
                        v19 = 1;
                        if (*v45 >= v41) {
                            goto lab_0x414047;
                        } else {
                            int64_t v46 = 8 * v41; // 0x414238
                            int64_t * v47 = (int64_t *)(v14 + 8); // 0x414240
                            int32_t v48 = v46; // 0x414257
                            int64_t * mem4 = realloc((int64_t *)*v47, v48); // 0x414257
                            v35 = v46;
                            v25 = 1;
                            v30 = v41;
                            v15 = v6;
                            v20 = 0;
                            if (mem4 == NULL) {
                                goto lab_0x4140bd;
                            } else {
                                int64_t * v49 = (int64_t *)(v14 + 16); // 0x414269
                                int64_t * mem5 = realloc((int64_t *)*v49, v48); // 0x414271
                                if (mem5 == NULL) {
                                    // 0x4142ba
                                    free(mem4);
                                    v35 = v46;
                                    v25 = 1;
                                    v30 = v41;
                                    v15 = v6;
                                    v20 = 0;
                                    goto lab_0x4140bd;
                                } else {
                                    // 0x414286
                                    *v47 = (int64_t)mem4;
                                    *v49 = (int64_t)mem5;
                                    *v45 = v41;
                                    v34 = v46;
                                    v24 = 1;
                                    v29 = v41;
                                    v19 = 1;
                                    goto lab_0x414047;
                                }
                            }
                        }
                    }
                    default: {
                        // 0x41402e
                        v38 = a2;
                        v28 = a3;
                        v33 = v6;
                        v18 = v6;
                        v23 = a6;
                        if (v42 != 2) {
                            goto lab_0x4142fc;
                        } else {
                            // 0x414037
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
                                goto lab_0x4142e3;
                            } else {
                                goto lab_0x414047;
                            }
                        }
                    }
                }
            }
        }
        case 1: {
            goto lab_0x413fe7;
        }
        default: {
            goto lab_0x413fe0;
        }
    }
  lab_0x4141e8:
    // 0x4141e8
    v5 = (int64_t)*(char *)(a1 + 56);
    v6 = 0;
    goto lab_0x413f53;
  lab_0x413fe0:
    // 0x413fe0
    result = -2;
  lab_0x413fe7:
    // 0x413fe7
    free(mem);
    // 0x413fef
    return result;
  lab_0x4140d8:;
    int64_t v50 = *mem; // 0x4140dd
    result = v50;
    if ((char)a8 == 0) {
        // 0x413fe7
        free(mem);
        // 0x413fef
        return result;
    }
    if (v50 == a4) {
        // 0x413fe7
        free(mem);
        // 0x413fef
        return *(int64_t *)(v13 + 8) - v50;
    }
    // 0x4142ca
    __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 445, "re_search_stub");
    v37 = v36;
    v27 = v26;
    v32 = v31;
    v17 = v16;
    v22 = v21;
    goto lab_0x4142e3;
  lab_0x413f7a:
    // 0x413f7a
    size = 16 * v9;
    v7 = a7;
    v8 = v9;
    goto lab_0x413f81;
  lab_0x4142e3:
    // 0x4142e3
    __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 506, "re_copy_regs");
    v38 = v37;
    v28 = v27;
    v33 = v32;
    v18 = v17;
    v23 = v22;
    goto lab_0x4142fc;
  lab_0x4142fc:
    // 0x4142fc
    __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 504, "re_copy_regs");
    if ((v18 || v28) <= -1) {
        // 0x413fef
        return -2;
    }
    int64_t size3 = v18 + 504; // 0x41436c
    if ((size3 & (v18 ^ -0x8000000000000000)) < 0) {
        // 0x413fef
        return -2;
    }
    int64_t * v51 = NULL; // 0x414378
    int64_t v52 = (int64_t)"lib/regexec.c"; // 0x414378
    if (v18 != 0) {
        int64_t * mem6 = malloc((int32_t)size3); // 0x4143e2
        if (mem6 == NULL) {
            // 0x413fef
            return -2;
        }
        int64_t v53 = (int64_t)mem6; // 0x4143e2
        memcpy(mem6, (int64_t *)"lib/regexec.c", 504);
        memcpy((int64_t *)(v53 + 504), (int64_t *)"re_copy_regs", (int32_t)v18);
        v51 = mem6;
        v52 = v53;
    }
    int64_t result2 = function_413ec0((int64_t)"regs_allocated == REGS_FIXED", v52, size3, v23, v38, v28, v33, a6 % 256); // 0x4143a3
    free(v51);
    // 0x413fef
    return result2;
  lab_0x4140bd:
    // 0x4140bd
    *v39 = *v39 & -7 | 2 * (char)v20;
    v36 = v35;
    v26 = v25;
    v31 = v30;
    v16 = v15;
    v21 = v20;
    if (v20 == 0) {
        goto lab_0x413fe0;
    } else {
        goto lab_0x4140d8;
    }
  lab_0x414047:;
    int64_t v54 = v19;
    int64_t v55 = v29;
    int64_t v56 = v24;
    int64_t v57 = v34;
    int64_t v58 = 0; // 0x41404a
    int64_t v59 = v6; // 0x41404a
    if (v12 >= 1) {
        int64_t v60 = *(int64_t *)(v14 + 8); // 0x414050
        int64_t v61 = 0; // 0x414067
        int64_t v62 = 2 * v61; // 0x414070
        *(int64_t *)(v61 + v60) = *(int64_t *)(v62 + v13);
        int64_t v63 = *(int64_t *)(v13 + 8 + v62); // 0x414079
        *(int64_t *)(v61 + *(int64_t *)(v14 + 16)) = v63;
        v61 += 8;
        v58 = v12;
        v59 = v60;
        while (v61 != 8 * v12) {
            // 0x414070
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
    int64_t * v66 = (int64_t *)v14; // 0x41408b
    v35 = v57;
    v25 = v56;
    v30 = v55;
    v15 = v64;
    v20 = v54;
    if (*v66 > v65) {
        int64_t v67 = v65 + 1; // 0x4140a8
        int64_t v68 = 8 * v65; // 0x4140ac
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
    goto lab_0x4140bd;
}
// Address range: 0x414450 - 0x414560
int64_t function_414450(int64_t a1, int64_t str, uint64_t a3) {
    // 0x414450
    *(int64_t *)a1 = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int64_t *)(a1 + 16) = 0;
    int64_t * mem = malloc(256); // 0x414495
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x41449a
    *v1 = (int64_t)mem;
    if (mem == NULL) {
        // 0x414550
        return 12;
    }
    int64_t v2 = (a3 % 2 == 0 ? 0x10102c6 : 0x3b2fc) | 0x200000 * a3 & 0x400000; // 0x4144b7
    int64_t v3 = (a3 & 4) != 0 ? v2 & 0x143b2be | 256 : v2;
    *(int64_t *)(a1 + 40) = 0;
    char * v4 = (char *)(a1 + 56); // 0x4144d2
    *v4 = ((a3 & 4) != 0 ? -128 : 0) | 2 * (char)a3 & 16 | *v4 & 111;
    int64_t v5; // 0x414450
    int64_t v6 = function_412fc0(a1, str, (int64_t)strlen((char *)str), v3, v5, v5); // 0x4144f7
    int32_t v7 = v6; // 0x4144fe
    int64_t v8 = 8; // 0x414501
    if (v7 != 16) {
        // 0x414503
        v8 = v6 & 0xffffffff;
        if (v7 == 0) {
            // 0x414507
            function_413df0(a1);
            // 0x41450f
            return v8 & 0xffffffff;
        }
    }
    // 0x41453d
    free((int64_t *)*v1);
    *v1 = 0;
    // 0x41450f
    return v8 & 0xffffffff;
}
// Address range: 0x414560 - 0x4145dd
int64_t function_414560(int64_t a1, int64_t a2, int64_t a3, uint64_t a4) {
    int64_t v1 = *(int64_t *)((0x100000000 * a1 >> 29) + (int64_t)&g15); // 0x414581
    char * str = dcgettext(NULL, (char *)(v1 + (int64_t)"Success"), 5); // 0x414592
    int64_t result = (int64_t)strlen(str) + 1; // 0x4145a2
    if (a4 == 0) {
        // 0x4145be
        return result;
    }
    int64_t v2 = result; // 0x4145b1
    if (result > a4) {
        // 0x4145d0
        v2 = a4 - 1;
        *(char *)(v2 + a3) = 0;
    }
    // 0x4145b3
    memcpy((int64_t *)a3, (int64_t *)str, (int32_t)v2);
    // 0x4145be
    return result;
}
// Address range: 0x4145e0 - 0x414624
int64_t function_4145e0(int64_t a1) {
    if (a1 != 0) {
        // 0x4145ec
        function_40bbe0(a1);
    }
    // 0x4145f1
    *(int64_t *)a1 = 0;
    int64_t * v1 = (int64_t *)(a1 + 32); // 0x4145f8
    *(int64_t *)(a1 + 8) = 0;
    free((int64_t *)*v1);
    *v1 = 0;
    int64_t * v2 = (int64_t *)(a1 + 40); // 0x414611
    free((int64_t *)*v2);
    *v2 = 0;
    return &g88;
}
// Address range: 0x414630 - 0x4146c6
int64_t function_414630(int64_t a1, int64_t str, int64_t a3, int64_t a4, int64_t a5) {
    if ((a5 & 0xfffffff8) != 0) {
        // 0x4146c0
        return 2;
    }
    int64_t v1; // 0x414630
    int64_t v2; // 0x414630
    int64_t v3; // 0x414630
    int64_t v4; // 0x414630
    int64_t v5; // 0x414630
    int64_t v6; // 0x414630
    if ((a5 & 4) != 0) {
        int64_t v7 = *(int64_t *)(a4 + 8); // 0x4146a3
        v5 = 0;
        v1 = a4;
        v3 = v7;
        v6 = 0;
        v2 = a4;
        v4 = v7;
        if ((*(char *)(a1 + 56) & 16) != 0) {
            goto lab_0x414676;
        } else {
            goto lab_0x4146ad;
        }
    } else {
        int64_t len = strlen((char *)str); // 0x41465d
        v5 = 0;
        v1 = 0;
        v3 = len;
        v6 = 0;
        v2 = 0;
        v4 = len;
        if ((*(char *)(a1 + 56) & 16) == 0) {
            goto lab_0x4146ad;
        } else {
            goto lab_0x414676;
        }
    }
  lab_0x414676:;
    int64_t v8 = v3;
    return (int32_t)function_40ef10(a1, str, v8, v1, v8, v8, v6, v5, a5 & 0xffffffff) != 0;
  lab_0x4146ad:
    // 0x4146ad
    v5 = a4;
    v1 = v2;
    v3 = v4;
    v6 = a3;
    goto lab_0x414676;
}
// Address range: 0x4146d0 - 0x4146e8
int64_t function_4146d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4146d0
    return function_413ec0(a1, a2, a3, a4, 0, a3, a5, 1);
}
// Address range: 0x4146f0 - 0x414705
int64_t function_4146f0(int64_t a1, int64_t a2, int64_t a3, int32_t a4, int64_t a5, int32_t a6) {
    // 0x4146f0
    return function_413ec0(a1, a2, a3, (int64_t)a4, a5, a3, (int64_t)a6, 0);
}
// Address range: 0x414710 - 0x41472a
int64_t function_414710(int64_t a1, int64_t a2) {
    // 0x414710
    int64_t result; // 0x414710
    return result;
}
// Address range: 0x414730 - 0x41474c
int64_t function_414730(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414730
    int64_t result; // 0x414730
    return result;
}
// Address range: 0x414750 - 0x41478c
int64_t function_414750(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)(a1 + 56);
    char v2 = *v1 & -7;
    if (a3 == 0) {
        // 0x414770
        *v1 = v2;
        *(int64_t *)a2 = 0;
        *(int64_t *)(a2 + 16) = 0;
        *(int64_t *)(a2 + 8) = 0;
        int64_t result; // 0x414750
        return result;
    }
    unsigned char result2 = v2 | 2;
    *v1 = result2;
    *(int64_t *)a2 = a3;
    *(int64_t *)(a2 + 8) = a4;
    *(int64_t *)(a2 + 16) = a5;
    return result2;
}
// Address range: 0x414790 - 0x4147ed
int64_t function_414790(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x414797
    int64_t v2; // 0x414790
    int64_t result = function_405ae0(a1, v2); // 0x4147a8
    if ((v2 & 32) != 0) {
        // 0x4147d0
        if ((int32_t)result == 0) {
            // 0x4147d4
            *__errno_location() = 0;
        }
        // 0x4147ca
        return 0xffffffff;
    }
    // 0x4147b1
    if ((int32_t)result == 0) {
        // 0x4147ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4147b8
    if (v1 == 0) {
        // 0x4147ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4147ca
    return result2;
}
// Address range: 0x4147f0 - 0x41484e
int64_t function_4147f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4147f6
    if (locale == NULL) {
        // 0x414823
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4147f6
    bool v2; // 0x4147f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g17; // 0x4147f0
    int64_t v5 = v1; // 0x4147f0
    int64_t v6 = 2; // 0x414815
    unsigned char v7 = *(char *)v5; // 0x414815
    char v8 = *(char *)v4; // 0x414815
    char v9 = v8; // 0x414815
    bool v10 = false; // 0x414815
    while (v7 == v8) {
        // 0x414808
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
    int64_t v12 = (int64_t)"POSIX"; // 0x414821
    int64_t v13 = v1; // 0x414821
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x414823
        return 0;
    }
    int64_t v14 = 6; // 0x414821
    unsigned char v15 = *(char *)v13; // 0x41483d
    char v16 = *(char *)v12; // 0x41483d
    char v17 = v16; // 0x41483d
    bool v18 = false; // 0x41483d
    while (v15 == v16) {
        // 0x414830
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
// Address range: 0x414850 - 0x414db2
int64_t function_414850(void) {
    char * v1 = nl_langinfo(14); // 0x414866
    char * v2 = g84; // 0x41486b
    char * v3; // 0x414850
    int64_t v4; // 0x414850
    int64_t v5; // 0x414850
    int64_t v6; // 0x414850
    int64_t v7; // 0x414850
    int32_t size; // 0x414850
    int32_t size2; // 0x414850
    int32_t len; // 0x414922
    int64_t v8; // 0x414922
    char * env_val; // 0x41490d
    if (v2 == NULL) {
        // 0x414908
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x414975;
        } else {
            // 0x41491a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x414975;
            } else {
                // 0x41491f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x41490d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x414da5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x414975;
                    } else {
                        // 0x414d19
                        size2 = len + 14;
                        goto lab_0x41493b;
                    }
                } else {
                    goto lab_0x41493b;
                }
            }
        }
    } else {
        // 0x414850
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x41488a;
    }
  lab_0x414bbc:;
    // 0x414bbc
    struct _IO_FILE * stream; // 0x4149fb
    int32_t v10 = __uflow(stream); // 0x414bbf
    int64_t v11; // 0x414850
    int64_t v12 = v11; // 0x414bc9
    int64_t v13; // 0x414850
    int64_t v14 = v13; // 0x414bc9
    int32_t v15 = v10; // 0x414bc9
    int64_t v16; // 0x414850
    int64_t v17 = v16; // 0x414bc9
    int64_t v18 = v11; // 0x414bc9
    int64_t v19 = v13; // 0x414bc9
    int64_t v20 = v16; // 0x414bc9
    if (v10 == -1) {
        // break -> 0x414bcf
        goto lab_0x414bcf;
    }
    goto lab_0x414a49;
  lab_0x414a3e:;
    // 0x414a3e
    int64_t v90; // 0x414850
    int64_t * v32; // 0x414a30
    *v32 = v90 + 1;
    int64_t v89; // 0x414850
    v12 = v89;
    int64_t v91; // 0x414850
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x414850
    v17 = v92;
    goto lab_0x414a49;
  lab_0x414a49:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x414850
    int32_t v25; // bp-120, 0x414850
    int32_t v26; // bp-184, 0x414850
    int64_t v27; // 0x4149fb
    int64_t v28; // 0x414a18
    int64_t v29; // 0x414a1d
    int64_t * v30; // 0x414a34
    switch (c) {
        case 32: {
            goto lab_0x414a30;
        }
        case 10: {
            goto lab_0x414a30;
        }
        case 9: {
            goto lab_0x414a30;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x414c21
            int32_t v33; // 0x414850
            char v34; // 0x414850
            int32_t v35; // 0x414c2e
            if (v31 < *v30) {
                // 0x414c00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x414c2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x414c21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x414c00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x414c2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x414c10
                v36 = v33;
            }
            // 0x414cff
            if (v36 == -1) {
                // break -> 0x414bcf
                break;
            }
            goto lab_0x414a30;
        }
        default: {
            // 0x414a5f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x414bcf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x414a88
            int64_t v39 = v37 + 4; // 0x414a8a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x414a96
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x414a98
            while (v41 == 0) {
                // 0x414a88
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x414ab6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x414ac2
            int64_t v45 = v43 + 4; // 0x414ac4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x414ad0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x414ad2
            while (v47 == 0) {
                // 0x414ac2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x414abf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x414ae8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x414af8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x414afc
            int64_t v52 = v51 + v48; // 0x414b05
            int64_t * mem; // 0x414850
            int64_t v53; // 0x414850
            int64_t v54; // 0x414850
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x414c3b
                int64_t v56 = v55 + 3; // 0x414c47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x414b21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x414b30
            if (mem == NULL) {
                // 0x414d5c
                free((int64_t *)v21);
                function_405ae0(v27, v53);
                v24 = (int64_t)&g5;
                goto lab_0x4149d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x414b48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x414b52
            uint32_t v62 = (int32_t)v59; // 0x414b55
            int64_t v63; // 0x414850
            if (v62 >= 8) {
                // 0x414c64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x414c7e
                int64_t v66 = v61 - v65; // 0x414c82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x414c8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x414c9e
                    int64_t v70 = v69 & 0xffffffff; // 0x414c9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x414c9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x414d2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x414b67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x414b6b
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
            int64_t v73 = v51 + 1; // 0x414b7b
            int64_t v74 = v60 - 1; // 0x414b7f
            uint32_t v75 = (int32_t)v73; // 0x414b84
            int64_t v76; // 0x414850
            if (v75 >= 8) {
                // 0x414cb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x414cbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x414ccc
                int64_t v80 = v74 - v79; // 0x414cd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x414cdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x414ceb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x414ce9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x414d46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x414d4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x414b96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x414b9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x414d93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x414bae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x414a3e;
            } else {
                goto lab_0x414bbc;
            }
        }
    }
  lab_0x414a30:;
    int64_t v93 = v23; // 0x414850
    int64_t v94 = v22; // 0x414850
    int64_t v95 = v21; // 0x414850
    goto lab_0x414a30_2;
  lab_0x414975:;
    int64_t * mem3 = malloc(size); // 0x414975
    int64_t v97 = (int64_t)&g5; // 0x414980
    int64_t v98; // 0x414850
    int64_t path; // 0x414850
    if (mem3 == NULL) {
        goto lab_0x414952;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x414975
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x414996;
    }
  lab_0x41488a:;
    int64_t str = v1 == NULL ? (int64_t)&g5 : (int64_t)v1; // 0x41487d
    char v100 = *v3; // 0x41488a
    int64_t v101; // 0x414850
    if (v100 == 0) {
        // 0x4148e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x414850
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x414850
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4148d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4148d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4148a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4148ad
        char v107 = *(char *)v106; // 0x4148b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4148e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4148bb
    v104 = v103 + 1;
  lab_0x4148d7:
    // 0x4148e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x414952:;
    char * v108 = (char *)v97;
    g84 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x41488a;
  lab_0x414996:;
    int64_t v109 = v98 + path; // 0x414996
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4149c2
    v24 = (int64_t)&g5;
    if (fd >= 0) {
        // 0x4149f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x414d22
            close(fd);
            v24 = (int64_t)&g5;
        } else {
            // 0x414a15
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x414a30_2:;
                uint64_t v96 = *v32; // 0x414a30
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x414bbc;
                } else {
                    goto lab_0x414a3e;
                }
            }
          lab_0x414bcf:
            // 0x414bcf
            function_405ae0(v27, v19);
            v24 = (int64_t)&g5;
            if (v18 != 0) {
                // 0x414bee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4149d4;
  lab_0x41493b:;
    int64_t * mem4 = malloc(size2); // 0x41493b
    v97 = (int64_t)&g5;
    if (mem4 != NULL) {
        // 0x4149e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x414996;
    } else {
        goto lab_0x414952;
    }
  lab_0x4149d4:
    // 0x4149d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x414952;
}
// Address range: 0x414dc0 - 0x414e1d
int64_t function_414dc0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414dc0
    return function_401778();
}
// Address range: 0x414e20 - 0x414e21
int64_t function_414e20(void) {
    // 0x414e20
    int64_t result; // 0x414e20
    return result;
}
// Address range: 0x414e30 - 0x414e48
int64_t function_414e30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x414e30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g22);
}
// Address range: 0x414e48 - 0x414e68
int64_t function_414e48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g18; // 0x414e52
    while (*(int64_t *)v1 != -1) {
        // 0x414e53
        v1 -= 8;
    }
    // 0x414e64
    return result;
}
