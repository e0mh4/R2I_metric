// Address range: 0x401a20 - 0x401a25
int64_t function_401a20(void) {
    // 0x401a20
    abort();
    // UNREACHABLE
}
// Address range: 0x401a25 - 0x401a2a
int64_t function_401a25(void) {
    // 0x401a25
    abort();
    // UNREACHABLE
}
// Address range: 0x401a2a - 0x401a2f
int64_t function_401a2a(void) {
    // 0x401a2a
    abort();
    // UNREACHABLE
}
// Address range: 0x401a2f - 0x401a34
int64_t function_401a2f(void) {
    // 0x401a2f
    abort();
    // UNREACHABLE
}
// Address range: 0x401a34 - 0x401a39
int64_t function_401a34(void) {
    // 0x401a34
    abort();
    // UNREACHABLE
}
// Address range: 0x401a39 - 0x401a3e
int64_t function_401a39(void) {
    // 0x401a39
    abort();
    // UNREACHABLE
}
// Address range: 0x401a40 - 0x401df4
int64_t function_401a40(int64_t a1, int64_t a2) {
    uint64_t v1 = a1 & 0xffffffff; // 0x401a51
    function_403790(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    int64_t v2; // 0x401a40
    function_4074f0(0x4031d0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v2);
    g43 = 0;
    g44 = 0;
    *(char *)&g41 = 0;
    g37 = 0;
    int64_t v3 = 0; // 0x401aa9
    int64_t v4; // 0x401a40
    int64_t v5; // 0x401a40
    int64_t v6; // 0x401a40
    int64_t v7; // 0x401a40
    int64_t v8; // 0x401a40
    int64_t v9; // 0x401c74
    int64_t v10; // 0x401cc6
    uint32_t v11; // 0x401ce7
    int64_t v12; // 0x401ce7
    int64_t v13; // 0x401a40
    while (true) {
        // 0x401ab0
        int64_t v14; // 0x401a40
        v7 = v14;
        v4 = v3;
        int32_t v15 = function_406ac0(v1, a2, "b:c:d:f:nsz", &g2, 0, v2);
        int64_t v16; // 0x401a40
        int64_t v17; // 0x401a40
        switch (v15) {
            case -1: {
                // 0x401c74
                if (g44 == 0) {
                    // 0x401db1
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify a list of bytes, characters, or fields", 5));
                    // 0x401dc6
                    function_4026b0(1);
                    // UNREACHABLE
                }
                // 0x401c8c
                if (v4 != 0 == (g44 != 2)) {
                    // 0x401db1
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"an input delimiter may be specified only when operating on fields", 5));
                    // 0x401dc6
                    function_4026b0(1);
                    // UNREACHABLE
                }
                // 0x401c9d
                if ((g43 & (char)(g44 != 2)) != 0) {
                    // 0x401db1
                    error(0, 0, dcgettext(NULL, (char *)(int64_t)"suppressing non-delimited lines makes sense\n\tonly when operating on fields", 5));
                    // 0x401dc6
                    function_4026b0(1);
                    // UNREACHABLE
                }
                // 0x401ca9
                v9 = g44;
                v10 = (v9 ^ 3) + v9 + (int64_t)(g42 == 0) & 2 | 4 * (int64_t)(g44 != 2);
                function_402bd0(v7, (int32_t)v10);
                if (v4 == 0) {
                    // 0x401cd2
                    *(char *)&g41 = 9;
                }
                // 0x401cd9
                if (g38 == 0) {
                    // 0x401d66
                    *(char *)&g36 = 0;
                    g38 = &g35;
                    *(char *)&g35 = *(char *)&g41;
                    g39 = 1;
                }
                // 0x401ce7
                v11 = *(int32_t *)0x60b2bc;
                if (v11 == (int32_t)a1) {
                    // 0x401d95
                    v5 = function_401ee0((int64_t)"-") & 0xffffffff;
                } else {
                    // 0x401cf5
                    v12 = v11;
                    v5 = 1;
                    if (v1 > v12) {
                        // 0x401d00
                        v13 = 1;
                        v13 &= function_401ee0(*(int64_t *)((0x100000000 * v12 >> 29) + a2));
                        g26 = &g27;
                        v8 = &g27;
                        v5 = v13;
                        while (v1 > (int64_t)&g27) {
                            // 0x401d00
                            v13 &= function_401ee0(*(int64_t *)((0x100000000 * v8 >> 29) + a2));
                            g26 = &g27;
                            v8 = &g27;
                            v5 = v13;
                        }
                    }
                }
                // 0x401d21
                if (g37 == 0) {
                    // 0x401d2a
                    return v5 % 256 ^ 1;
                }
                // 0x401d3b
                v6 = v5;
                if ((int32_t)function_405c20((int64_t)g30, v10) == -1) {
                    // 0x401d4c
                    error(0, *__errno_location(), "-");
                    v6 = 0;
                }
                // 0x401d2a
                return v6 % 256 ^ 1;
            }
            case 102: {
                // 0x401c40
                v17 = (int64_t)"only one type of list may be specified";
                if (g44 != 0) {
                    goto lab_0x401db1;
                }
                // 0x401c4e
                g44 = 2;
                v3 = v4;
                v16 = (int64_t)g64;
                // break -> 0x401ab0
                break;
            }
            default: {
                if (v15 > 102) {
                    if (v15 == 122) {
                        // 0x401c68
                        *(char *)&g16 = 0;
                        v3 = v4;
                        v16 = v7;
                    } else {
                        if (v15 > 122) {
                            if (v15 != 128) {
                                if (v15 != 129) {
                                    // 0x401dc6
                                    function_4026b0(1);
                                    // UNREACHABLE
                                }
                                // 0x401bbb
                                g42 = 1;
                                v3 = v4;
                                v16 = v7;
                            } else {
                                int64_t v18 = (int64_t)g64; // 0x401b67
                                *(char *)&g40 = 1;
                                int64_t v19 = v18; // 0x401b7d
                                int64_t v20 = 1; // 0x401b7d
                                if (*g64 != 0) {
                                    int64_t v21 = -1; // 0x401b87
                                    int64_t v22 = 0; // 0x401b87
                                    while (v21 != 0) {
                                        int64_t v23 = v19;
                                        v21--;
                                        bool v24; // 0x401a40
                                        v19 = v23 + (v24 ? -1 : 1);
                                        v22 = v21;
                                        if (*(char *)v23 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v22 = 0;
                                    }
                                    v20 = -2 - v22;
                                }
                                // 0x401b93
                                g39 = v20;
                                g38 = function_405ba0(v18);
                                v3 = v4;
                                v16 = v7;
                            }
                        } else {
                            // 0x401ae6
                            v3 = v4;
                            v16 = v7;
                            if (v15 != 110) {
                                if (v15 != 115) {
                                  lab_0x401dc6:
                                    // 0x401dc6
                                    function_4026b0(1);
                                    // UNREACHABLE
                                }
                                // 0x401af4
                                g43 = 1;
                                v3 = v4;
                                v16 = v7;
                            }
                        }
                    }
                } else {
                    if (v15 > 99) {
                        if (v15 != 100) {
                            // 0x401dc6
                            function_4026b0(1);
                            // UNREACHABLE
                        }
                        char v25 = *g64; // 0x401bf0
                        if (v25 != 0) {
                            // 0x401bf7
                            v17 = (int64_t)"the delimiter must be a single character";
                            if (*(char *)((int64_t)g64 + 1) != 0) {
                              lab_0x401db1:
                                // 0x401db1
                                error(0, 0, dcgettext(NULL, (char *)v17, 5));
                                // 0x401dc6
                                function_4026b0(1);
                                // UNREACHABLE
                            }
                        }
                        // 0x401c01
                        *(char *)&g41 = v25;
                        v3 = 1;
                        v16 = v7;
                    } else {
                        if (v15 <= 97) {
                            if (v15 == -131) {
                                // 0x401b1d
                                function_405830((int64_t)g29, "cut", "GNU coreutils", (int64_t)g17, "David M. Ihnat", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v15 == -130) {
                                // 0x401bd2
                                function_4026b0(0);
                                // UNREACHABLE
                            }
                            goto lab_0x401dc6;
                        }
                        // 0x401c18
                        if (g44 != 0) {
                            // 0x401db1
                            error(0, 0, dcgettext(NULL, (char *)(int64_t)"only one type of list may be specified", 5));
                            // 0x401dc6
                            function_4026b0(1);
                            // UNREACHABLE
                        }
                        // 0x401c26
                        g44 = 1;
                        v3 = v4;
                        v16 = (int64_t)g64;
                    }
                }
                // break -> 0x401ab0
                break;
            }
        }
        // 0x401ab0
        v14 = v16;
    }
    // 0x401c74
    if (g44 == 0) {
        // 0x401db1
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"you must specify a list of bytes, characters, or fields", 5));
        // 0x401dc6
        function_4026b0(1);
        // UNREACHABLE
    }
    // 0x401c8c
    if (v4 != 0 == (g44 != 2)) {
        // 0x401db1
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"an input delimiter may be specified only when operating on fields", 5));
        // 0x401dc6
        function_4026b0(1);
        // UNREACHABLE
    }
    // 0x401c9d
    if ((g43 & (char)(g44 != 2)) != 0) {
        // 0x401db1
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"suppressing non-delimited lines makes sense\n\tonly when operating on fields", 5));
        // 0x401dc6
        function_4026b0(1);
        // UNREACHABLE
    }
    // 0x401ca9
    v9 = g44;
    v10 = (v9 ^ 3) + v9 + (int64_t)(g42 == 0) & 2 | 4 * (int64_t)(g44 != 2);
    function_402bd0(v7, (int32_t)v10);
    if (v4 == 0) {
        // 0x401cd2
        *(char *)&g41 = 9;
    }
    // 0x401cd9
    if (g38 == 0) {
        // 0x401d66
        *(char *)&g36 = 0;
        g38 = &g35;
        *(char *)&g35 = *(char *)&g41;
        g39 = 1;
    }
    // 0x401ce7
    v11 = *(int32_t *)0x60b2bc;
    if (v11 == (int32_t)a1) {
        // 0x401d95
        v5 = function_401ee0((int64_t)"-") & 0xffffffff;
    } else {
        // 0x401cf5
        v12 = v11;
        v5 = 1;
        if (v1 > v12) {
            // 0x401d00
            v13 = 1;
            v13 &= function_401ee0(*(int64_t *)((0x100000000 * v12 >> 29) + a2));
            g26 = &g27;
            v8 = &g27;
            v5 = v13;
            while (v1 > (int64_t)&g27) {
                // 0x401d00
                v13 &= function_401ee0(*(int64_t *)((0x100000000 * v8 >> 29) + a2));
                g26 = &g27;
                v8 = &g27;
                v5 = v13;
            }
        }
    }
    // 0x401d21
    if (g37 == 0) {
        // 0x401d2a
        return v5 % 256 ^ 1;
    }
    // 0x401d3b
    v6 = v5;
    if ((int32_t)function_405c20((int64_t)g30, v10) == -1) {
        // 0x401d4c
        error(0, *__errno_location(), "-");
        v6 = 0;
    }
    // 0x401d2a
    return v6 % 256 ^ 1;
}
// Address range: 0x401e00 - 0x401e2b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401e00
    int64_t v1; // 0x401e00
    __libc_start_main(0x401a40, (int32_t)a4, (char **)&v1, (void (*)())0x407480, (void (*)())0x4074e0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401e2b - 0x401e4a
int64_t function_401e2b(void) {
    // 0x401e2b
    return &g28;
}
// Address range: 0x401e4a - 0x401e81
int64_t function_401e4a(void) {
    // 0x401e4a
    return 0;
}
// Address range: 0x401e81 - 0x401ed8
int64_t function_401e81(void) {
    // 0x401e81
    if (g33 != 0) {
        // 0x401ed7
        int64_t result; // 0x401e81
        return result;
    }
    int64_t v1 = g34; // 0x401eb4
    int64_t result2; // 0x401ec6
    if (g34 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401ec6
        result2 = function_401e2b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x401eb6
        v1++;
    }
    // 0x401eaa
    g34 = v1;
    // 0x401ec6
    result2 = function_401e2b();
    g33 = 1;
    return result2;
}
// Address range: 0x401ed8 - 0x401edd
int64_t function_401ed8(void) {
    // 0x401ed8
    return function_401e4a();
}
// Address range: 0x401ee0 - 0x4026b0
int64_t function_401ee0(int64_t file_path) {
    // 0x401ee0
    int64_t v1; // bp-72, 0x401ee0
    int64_t v2 = &v1; // 0x401efa
    bool v3; // 0x401ee0
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = (int64_t)"-"; // 0x401ee0
    int64_t v6 = file_path; // 0x401ee0
    int64_t v7 = 2; // 0x401efe
    unsigned char v8 = *(char *)v6; // 0x401efe
    char v9 = *(char *)v5; // 0x401efe
    char v10 = v9; // 0x401efe
    bool v11 = false; // 0x401efe
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
    struct _IO_FILE * stream2; // 0x401ee0
    if ((v8 >= v12 && !v11) != v8 < v12) {
        struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x402458
        stream2 = file;
        if (file == NULL) {
            // 0x402469
            error(0, *__errno_location(), "%s", (char *)function_405230(0, 3, file_path));
            return (int32_t)&g66 ^ (int32_t)&g66;
        }
    } else {
        // 0x401f0d
        g37 = 1;
        stream2 = g30;
    }
    int64_t v13 = (int64_t)stream2;
    int64_t v14; // 0x401ee0
    function_403280(v13, 2, v14);
    g47 = g62;
    int64_t * v15 = (int64_t *)(v13 + 8);
    int64_t v16; // 0x401ee0
    int64_t v17; // 0x401ee0
    int64_t v18; // 0x401ee0
    int32_t v19; // 0x401ee0
    int64_t v20; // 0x401ee0
    int64_t v21; // 0x401ee0
    int64_t v22; // 0x401ee0
    int64_t v23; // 0x401ee0
    int64_t v24; // 0x401ee0
    int32_t c3; // 0x401ee0
    int64_t * v25; // 0x4024b4
    int64_t * v26; // 0x401f47
    unsigned char v27; // 0x40254f
    int32_t v28; // 0x402558
    if (g44 == 1) {
        // 0x4024b0
        v25 = (int64_t *)(v13 + 16);
        v21 = 0;
        v16 = 0;
        while (true) {
          lab_0x4024b0_2:;
            uint64_t v29 = *v15; // 0x4024b0
            v20 = v29;
            v22 = v21;
            v17 = v16;
            v23 = v21;
            v18 = v16;
            if (v29 >= *v25) {
                goto lab_0x402547;
            } else {
                goto lab_0x4024be;
            }
        }
      lab_0x402565:
        if (v24 == 0) {
            // 0x402230
            v19 = stream2->e0;
            goto lab_0x402234;
        } else {
            int64_t v30 = (int64_t)g29; // 0x40256e
            int64_t * v31 = (int64_t *)(v30 + 40); // 0x402575
            uint64_t v32 = *v31; // 0x402575
            if (v32 >= *(int64_t *)(v30 + 48)) {
                // 0x402688
                __overflow(g29, v28);
                v19 = stream2->e0;
            } else {
                // 0x402583
                *v31 = v32 + 1;
                *(char *)v32 = v27;
                v19 = stream2->e0;
            }
            goto lab_0x402234;
        }
    } else {
        uint64_t v33 = *v15; // 0x401f43
        v26 = (int64_t *)(v13 + 16);
        if (v33 >= *v26) {
            int32_t v34 = __uflow(stream2); // 0x40221b
            c3 = v34;
            if (v34 != -1) {
                goto lab_0x401f5c;
            } else {
                // 0x402230
                v19 = stream2->e0;
                goto lab_0x402234;
            }
        } else {
            // 0x401f51
            *v15 = v33 + 1;
            c3 = (int32_t)*(char *)v33;
            goto lab_0x401f5c;
        }
    }
  lab_0x402547:;
    uint32_t v35 = __uflow(stream2); // 0x40254a
    v27 = *(char *)&g16;
    v28 = v27;
    char v36 = v27; // 0x40255a
    int64_t v37; // 0x401ee0
    int64_t v38; // 0x401ee0
    int64_t v39; // 0x401ee0
    if (v35 == v28) {
        goto lab_0x4025a0;
    } else {
        // 0x40255c
        v24 = v23;
        v39 = v24;
        v38 = v35;
        v37 = v18;
        if (v35 == -1) {
            // break -> 0x402565
            goto lab_0x402565;
        }
        goto lab_0x4024d8;
    }
  lab_0x4024be:;
    char v40 = *(char *)&g16; // 0x4024c2
    *v15 = v20 + 1;
    unsigned char v41 = *(char *)v20; // 0x4024cd
    v39 = v22;
    v38 = v41;
    v37 = v17;
    v36 = v40;
    if (v41 == v40) {
        goto lab_0x4025a0;
    } else {
        goto lab_0x4024d8;
    }
  lab_0x4025a0:;
    unsigned char v42 = v36;
    int64_t v43 = (int64_t)g29; // 0x4025a0
    int64_t * v44 = (int64_t *)(v43 + 40); // 0x4025a7
    uint64_t v45 = *v44; // 0x4025a7
    if (v45 >= *(int64_t *)(v43 + 48)) {
        // 0x402620
        __overflow(g29, (int32_t)v42);
    } else {
        // 0x4025b1
        *v44 = v45 + 1;
        *(char *)v45 = v42;
    }
    // 0x4025bc
    g47 = g62;
    int64_t v46 = 0; // 0x4025cf
    int64_t v47 = 0; // 0x4025cf
    goto lab_0x4024b0;
  lab_0x4024d8:;
    int64_t v204 = v37;
    int64_t v205 = v38;
    int64_t v206 = g47; // 0x4024d8
    int64_t v207 = v39 + 1; // 0x4024df
    int64_t v208 = v206; // 0x4024e7
    if (v207 > *(int64_t *)(v206 + 8)) {
        int64_t v209 = v206 + 16; // 0x4024e9
        g47 = v209;
        v208 = v209;
    }
    uint64_t v210 = *(int64_t *)v208; // 0x4024f4
    v46 = v207;
    v47 = v204;
    if (v207 < v210) {
        goto lab_0x4024b0;
    } else {
        unsigned char v211 = *(char *)&g40; // 0x4024fc
        int64_t v212 = (int64_t)g29; // 0x402503
        int64_t v213 = v212; // 0x40250c
        int64_t v214 = v204; // 0x40250c
        if (v211 != 0) {
            unsigned char v215 = (char)(v207 == v210) & (char)v204; // 0x402514
            v213 = v212;
            v214 = v211;
            if (v215 != 0) {
                // 0x402640
                fwrite_unlocked((int64_t *)g38, 1, g39, g29);
                v213 = (int64_t)g29;
                v214 = v215;
            }
        }
        int64_t v216 = v214;
        int64_t v217 = v213;
        int64_t * v218 = (int64_t *)(v217 + 40); // 0x402520
        uint64_t v219 = *v218; // 0x402520
        if (v219 >= *(int64_t *)(v217 + 48)) {
            // 0x402630
            __overflow((struct _IO_FILE *)v217, (int32_t)v205 % 256);
            v46 = v207;
            v47 = v216;
            goto lab_0x4024b0;
        } else {
            // 0x40252e
            *v218 = v219 + 1;
            *(char *)v219 = (char)v205;
            uint64_t v220 = *v15; // 0x402539
            v20 = v220;
            v22 = v207;
            v17 = v216;
            v23 = v207;
            v18 = v216;
            if (v220 < *v25) {
                goto lab_0x4024be;
            } else {
                goto lab_0x402547;
            }
        }
    }
  lab_0x4024b0:
    // 0x4024b0
    v21 = v46;
    v16 = v47;
    goto lab_0x4024b0_2;
  lab_0x402285_2:;
    // 0x402285
    int64_t v48; // 0x401ee0
    int64_t v49 = v48;
    int64_t v50; // 0x401ee0
    int64_t v51 = v50;
    char v52; // 0x401ee0
    unsigned char v53 = v52; // 0x402288
    char v54; // 0x401ee0
    int64_t v55 = v54;
    int64_t v56 = v53;
    int64_t v57 = v55; // 0x402290
    int64_t v58 = v56; // 0x402290
    int64_t v59 = v51; // 0x402290
    int32_t v60; // 0x401ee0
    int64_t v61; // 0x401ee0
    int64_t v62; // 0x401ee0
    int64_t v63; // 0x401ee0
    int64_t v64; // 0x401ee0
    int64_t v65; // 0x401ee0
    int64_t v66; // 0x401ee0
    if (v53 == v54) {
        // 0x402285
        v60 = v53;
        v62 = v56;
        v64 = v55;
        v65 = v56;
        v63 = v51;
        v61 = v49;
        v66 = 0;
        goto lab_0x4022e0;
    } else {
        goto lab_0x402292;
    }
  lab_0x402156:;
    // 0x402156
    int64_t v67; // 0x401ee0
    int64_t v68 = v67;
    *(int64_t *)(v2 - 16) = v13;
    char v69 = *(char *)&g16; // 0x402168
    char v70 = *(char *)&g41; // 0x402177
    int64_t n = function_4032b0(&g46, &g45, 0, -1, v70, v69, (int64_t)&g66); // 0x40217f
    if (n < 0) {
        // break -> 0x4025d8
        goto lab_0x4025d8;
    }
    if (n == 0) {
        // 0x402696
        __assert_fail("n_bytes != 0", "src/cut.c", 329, "cut_fields");
        return &g66;
    }
    int64_t data = g46; // 0x402198
    int64_t v71 = n - 1;
    char v72; // 0x401ee0
    unsigned char v73; // 0x401ee0
    int64_t v74; // 0x401ee0
    int64_t v75; // 0x401ee0
    int64_t v76; // 0x401ee0
    int64_t v77; // 0x401ee0
    int64_t v78; // 0x401ee0
    int64_t v79; // 0x401ee0
    if (*(char *)(data + v71) == *(char *)&g41) {
        // 0x402318
        v75 = v68;
        if (*(int64_t *)g47 < 2) {
            // 0x402390
            v73 = v72;
            fwrite_unlocked((int64_t *)data, 1, (int32_t)n - 1, g29);
            if (*(char *)&g41 == *(char *)&g16) {
                uint64_t c2 = *v15; // 0x402428
                if (c2 >= *v26) {
                    // 0x402600
                    if (__uflow(stream2) != -1) {
                        // 0x402441
                        int32_t v80; // 0x401ee0
                        int32_t c = v80;
                        struct _IO_FILE * stream; // 0x401ee0
                        ungetc(c, stream);
                        goto lab_0x4023b0;
                    } else {
                        // 0x402611
                        v75 = v68;
                        goto lab_0x402325;
                    }
                } else {
                    // 0x402436
                    *v15 = c2 + 1;
                    // 0x402441
                    ungetc((int32_t)*(char *)c2, stream2);
                    goto lab_0x4023b0;
                }
            } else {
                goto lab_0x4023b0;
            }
        } else {
            goto lab_0x402325;
        }
    } else {
        // 0x4021b4
        v78 = 0;
        v77 = 1;
        v74 = v68;
        if (g43 != 0) {
            goto lab_0x401f90;
        } else {
            // 0x4021c1
            fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g29);
            unsigned char v81 = *(char *)&g16; // 0x4021dc
            int64_t v82 = v81; // 0x4021dc
            v79 = v82;
            v76 = v68;
            if ((int32_t)*(char *)(g46 + v71) != (int32_t)v81) {
                int64_t v83 = (int64_t)g29; // 0x4021f0
                int64_t * v84 = (int64_t *)(v83 + 40); // 0x4021f7
                uint64_t v85 = *v84; // 0x4021f7
                if (v85 >= *(int64_t *)(v83 + 48)) {
                    // 0x402670
                    int32_t v86; // 0x4021e8
                    struct _IO_FILE * v87; // 0x4021f0
                    __overflow(v87, v86);
                    unsigned char v88 = *(char *)&g16; // 0x402677
                    v79 = v88;
                    v76 = v68;
                } else {
                    // 0x402205
                    *v84 = v85 + 1;
                    *(char *)v85 = v81;
                    v79 = v82;
                    v76 = v68;
                }
            }
            goto lab_0x40213e;
        }
    }
  lab_0x401fa3:;
    int64_t v89 = g47; // 0x401faa
    int64_t v90; // 0x401ee0
    int64_t v91 = v90; // 0x401faa
    int64_t v92; // 0x401ee0
    int64_t v93 = v92; // 0x401faa
    int64_t v94; // 0x401ee0
    int64_t v95 = v94 & 0xffffffff; // 0x401faa
    goto lab_0x401fad;
  lab_0x401fad:;
    int64_t v96 = v95;
    int64_t v97 = v93;
    int64_t v98 = v91;
    int64_t v99 = v96; // 0x401fb0
    int64_t v100; // 0x401ee0
    int64_t v101; // 0x401ee0
    int64_t v102; // 0x401ee0
    int64_t v103; // 0x401ee0
    int64_t v104; // 0x401ee0
    int64_t v105; // 0x401ee0
    char v106; // 0x401ee0
    int64_t v107; // 0x401ee0
    int64_t v108; // 0x401ee0
    int64_t v109; // 0x401ee0
    int64_t v110; // 0x401ee0
    int64_t v111; // 0x401ee0
    char v112; // 0x401ee0
    int64_t v113; // 0x401ee0
    int64_t v114; // 0x401ee0
    int64_t v115; // 0x401ee0
    int64_t v116; // 0x401ee0
    int64_t v117; // 0x401ee0
    int64_t v118; // 0x401ee0
    if (*(int64_t *)v89 > v98) {
        int64_t v119 = v99;
        uint64_t v120 = *v15; // 0x402094
        int64_t v121; // 0x401ee0
        if (v120 < *v26) {
            // 0x402058
            *v15 = v120 + 1;
            v121 = (int64_t)*(char *)v120;
        } else {
            // 0x40209e
            v121 = __uflow(stream2);
        }
        int64_t v122 = v121;
        unsigned char v123 = *(char *)&g41; // 0x402064
        unsigned char v124 = *(char *)&g16; // 0x40206b
        int32_t v125 = v122; // 0x402076
        while ((int32_t)v123 != v125) {
            // 0x40207f
            v52 = v124;
            v54 = v123;
            v50 = v97;
            v48 = v119;
            if (v125 == (int32_t)v124) {
                goto lab_0x402285_2;
            }
            // 0x40208b
            v99 = v122;
            if (v125 == -1) {
                // 0x4020d9
                v105 = v124;
                v111 = 0;
                v116 = 0xffffffff;
                v109 = 1;
                v114 = v123;
                v104 = v97;
                v102 = v119;
                goto lab_0x4020d9_2;
            }
            v119 = v99;
            v120 = *v15;
            if (v120 < *v26) {
                // 0x402058
                *v15 = v120 + 1;
                v121 = (int64_t)*(char *)v120;
            } else {
                // 0x40209e
                v121 = __uflow(stream2);
            }
            // 0x402064
            v122 = v121;
            v123 = *(char *)&g41;
            v124 = *(char *)&g16;
            v125 = v122;
        }
        // 0x4022c5
        v106 = v124;
        v112 = v123;
        v117 = v123;
        v107 = v97;
        v100 = v119;
        v103 = v122;
    } else {
        if ((char)v97 != 0) {
            // 0x401fbf
            fwrite_unlocked((int64_t *)g38, 1, g39, g29);
        }
        int64_t v126 = v96;
        uint64_t v127 = *v15; // 0x40203f
        int64_t v128; // 0x401ee0
        if (v127 < *v26) {
            // 0x401fe0
            *v15 = v127 + 1;
            v128 = (int64_t)*(char *)v127;
        } else {
            // 0x402049
            v128 = __uflow(stream2);
        }
        int64_t v129 = v128;
        unsigned char v130 = *(char *)&g41; // 0x401feb
        unsigned char v131 = *(char *)&g16; // 0x401ff2
        uint32_t v132 = (int32_t)v129; // 0x402000
        while (v132 != (int32_t)v130) {
            // 0x402008
            v52 = v131;
            v54 = v130;
            v50 = 1;
            v48 = v126;
            if (v132 == (int32_t)v131) {
                goto lab_0x402285_2;
            }
            if (v132 == -1) {
                // 0x4020ed
                v101 = v126;
                v113 = v130;
                v118 = v131;
                v108 = 1;
                v115 = 0xffffffff;
                v110 = 0;
                goto lab_0x4020ed_2;
            }
            int64_t v133 = (int64_t)g29; // 0x40201c
            int64_t * v134 = (int64_t *)(v133 + 40); // 0x402023
            uint64_t v135 = *v134; // 0x402023
            if (v135 >= *(int64_t *)(v133 + 48)) {
                // 0x4020b0
                __overflow(g29, v132 % 256);
            } else {
                // 0x402031
                *v134 = v135 + 1;
                *(char *)v135 = (char)v129;
            }
            // 0x40203c
            v126 = v129;
            v127 = *v15;
            if (v127 < *v26) {
                // 0x401fe0
                *v15 = v127 + 1;
                v128 = (int64_t)*(char *)v127;
            } else {
                // 0x402049
                v128 = __uflow(stream2);
            }
            // 0x401feb
            v129 = v128;
            v130 = *(char *)&g41;
            v131 = *(char *)&g16;
            v132 = (int32_t)v129;
        }
        int64_t v136 = v130; // 0x401feb
        v106 = v131;
        v112 = v130;
        v117 = v136;
        v107 = 1;
        v100 = v126;
        v103 = v136;
    }
    int64_t v137 = v103;
    int64_t v138 = v100;
    int64_t v139 = v107;
    char v140 = v106;
    int32_t v141; // 0x401ee0
    char v142; // 0x401ee0
    int64_t v143; // 0x401ee0
    int64_t v144; // 0x401ee0
    int64_t v145; // 0x401ee0
    int64_t v146; // 0x401ee0
    int32_t c4; // 0x401ee0
    int64_t v147; // 0x401ee0
    int64_t v148; // 0x401ee0
    if (v140 == v112) {
        uint64_t v149 = *v15; // 0x402348
        if (v149 >= *v26) {
            int32_t v150 = __uflow(stream2); // 0x4023c3
            c4 = v150;
            if (v150 != -1) {
                goto lab_0x40235d;
            } else {
                // 0x4023cf
                v105 = (int64_t)*(char *)&g16;
                v111 = 0;
                v116 = v150;
                v109 = 1;
                v114 = (int64_t)*(char *)&g41;
                v104 = v139;
                v102 = v138;
                goto lab_0x4020d9_2;
            }
        } else {
            // 0x402352
            *v15 = v149 + 1;
            c4 = (int32_t)*(char *)v149;
            goto lab_0x40235d;
        }
    } else {
        int64_t v151 = v137 & 0xffffffff; // 0x4022cb
        int32_t v152 = v137; // 0x4022ce
        v147 = v151;
        v145 = v139;
        v141 = v152;
        v142 = v140;
        v146 = v117;
        v148 = v151;
        v144 = v139;
        v143 = v138;
        if (v152 == (int32_t)v117) {
            goto lab_0x402296;
        } else {
            goto lab_0x4022d2;
        }
    }
  lab_0x402325:;
    int64_t v153 = v75;
    int64_t v154 = g47;
    v89 = v154;
    v91 = 2;
    v93 = v153;
    v95 = 0;
    if (*(int64_t *)(v154 + 8) < 2) {
        int64_t v155 = v154 + 16; // 0x40232c
        g47 = v155;
        v89 = v155;
        v91 = 2;
        v93 = v153;
        v95 = 0;
    }
    goto lab_0x401fad;
  lab_0x401f90:;
    int64_t v156 = v78; // 0x401ee0
    int64_t v157 = v77; // 0x401ee0
    int64_t v158 = v74; // 0x401ee0
    goto lab_0x401f90_2;
  lab_0x4023b0:
    // 0x4023b0
    v75 = v73;
    goto lab_0x402325;
  lab_0x40213e:
    // 0x40213e
    v94 = v79;
    v90 = 1;
    v92 = v76;
    v67 = v76;
    v72 = 1;
    char * v160; // 0x401f98
    if (*v160 % 2 == 0) {
        goto lab_0x401fa3;
    } else {
        goto lab_0x402156;
    }
  lab_0x402296:;
    int64_t v161 = v145;
    int64_t v162 = v147;
    int64_t v163 = g47; // 0x402296
    int64_t v164 = v98 + 1; // 0x40229d
    v78 = v162;
    v77 = v164;
    v74 = v161;
    if (v164 > *(int64_t *)(v163 + 8)) {
        // 0x4022ab
        g47 = v163 + 16;
        v78 = v162;
        v77 = v164;
        v74 = v161;
    }
    goto lab_0x401f90;
  lab_0x4022d2:
    // 0x4022d2
    v60 = v141;
    v62 = v142;
    v64 = v146;
    v65 = v148;
    v63 = v144;
    v61 = v143;
    v66 = v141 == -1;
    goto lab_0x4022e0;
  lab_0x40235d:
    // 0x40235d
    ungetc(c4, stream2);
    v57 = (int64_t)*(char *)&g41;
    v58 = v137 & 0xffffffff;
    v59 = v139;
    goto lab_0x402292;
  lab_0x4022e0:;
    int64_t v165 = v66;
    int64_t v166 = v63;
    int64_t v167 = v65;
    int64_t v168 = v62;
    int32_t v169 = v60;
    v78 = v167;
    v77 = v98;
    v74 = v166;
    if (v169 != (int32_t)v168 == v165 == 0) {
        goto lab_0x401f90;
    } else {
        // 0x4022f5
        v105 = v168;
        v111 = v169 == (int32_t)v168;
        v116 = v167;
        v109 = v165;
        v114 = v64;
        v104 = v166;
        v102 = v61;
        goto lab_0x4020d9_2;
    }
  lab_0x402292:
    // 0x402292
    v147 = v58;
    v145 = v59;
    if ((int32_t)v58 != (int32_t)v57) {
        // 0x402292
        int64_t v170; // 0x401ee0
        int64_t v171 = v170;
        char v172 = *(char *)&g16;
        int32_t v173; // 0x401ee0
        v141 = v173;
        v142 = v172;
        int64_t v174; // 0x401ee0
        v146 = v174;
        int64_t v175; // 0x401ee0
        v148 = v175;
        int64_t v176; // 0x401ee0
        v144 = v176;
        v143 = v171;
        goto lab_0x4022d2;
    } else {
        goto lab_0x402296;
    }
  lab_0x4020d9_2:;
    int64_t v177 = v102;
    int64_t v178 = v114;
    int64_t v179 = v109;
    int64_t v180 = v116;
    int64_t v181 = v111;
    int64_t v182 = v105;
    v101 = v177;
    v113 = v178;
    v118 = v182;
    v108 = v179;
    v115 = v180;
    v110 = v181;
    int64_t v183; // 0x401ee0
    int64_t v184; // 0x401ee0
    if ((char)v104 != 0) {
        goto lab_0x4020ed_2;
    } else {
        // 0x4020de
        v101 = v177;
        v113 = v178;
        v118 = v182;
        v108 = v179;
        v115 = v180;
        v110 = v181;
        v183 = v179;
        v184 = v180;
        if (v98 == 1 == g43 == 1) {
            goto lab_0x402127;
        } else {
            goto lab_0x4020ed_2;
        }
    }
  lab_0x4020ed_2:;
    int32_t v185 = v118; // 0x4020ed
    char v186 = v118; // 0x4020f4
    if ((char)v110 == 0 == ((char)v113 != v186 && v185 == (int32_t)v101)) {
        // 0x402230
        v19 = stream2->e0;
        goto lab_0x402234;
    }
    int64_t v187 = v115;
    int64_t v188 = v108;
    int64_t v189 = (int64_t)g29; // 0x402108
    int64_t * v190 = (int64_t *)(v189 + 40); // 0x40210f
    uint64_t v191 = *v190; // 0x40210f
    int32_t * v192; // 0x401ee0
    if (v191 >= *(int64_t *)(v189 + 48)) {
        // 0x402410
        *v192 = (int32_t)v187;
        __overflow(g29, v185);
        v183 = v188;
        v184 = (int64_t)*v192;
    } else {
        // 0x40211d
        *v190 = v191 + 1;
        *(char *)v191 = v186;
        v183 = v188;
        v184 = v187;
    }
    goto lab_0x402127;
  lab_0x402127:
    // 0x402127
    if ((char)v183 != 0) {
        // 0x402230
        v19 = stream2->e0;
        goto lab_0x402234;
    }
    // 0x402130
    g47 = g62;
    v79 = v184;
    v76 = v183;
    goto lab_0x40213e;
  lab_0x402234:;
    int64_t v193 = (int64_t)"-"; // 0x402236
    int64_t v194 = 2; // 0x402236
    if ((v19 & 32) != 0) {
        // 0x402469
        error(0, *__errno_location(), "%s", (char *)function_405230(0, 3, file_path));
        return (int32_t)&g66 ^ (int32_t)&g66;
    }
    unsigned char v195 = *(char *)file_path; // 0x402249
    char v196 = *(char *)v193; // 0x402249
    int64_t v197 = file_path + v4; // 0x402249
    char v198 = v196; // 0x402249
    bool v199 = false; // 0x402249
    while (v195 == v196) {
        int64_t v200 = v194 - 1; // 0x402249
        v193 += v4;
        v194 = v200;
        v198 = v195;
        v199 = true;
        if (v200 == 0) {
            // break -> 
            break;
        }
        v195 = *(char *)v197;
        v196 = *(char *)v193;
        v197 += v4;
        v198 = v196;
        v199 = false;
    }
    unsigned char v201 = v198;
    if ((v195 >= v201 && !v199) == v195 < v201) {
        // 0x4023f0
        clearerr_unlocked(stream2);
        return 1;
    }
    // 0x40225b
    if ((int32_t)function_405c20(v13, v197) == -1) {
        // 0x402469
        error(0, *__errno_location(), "%s", (char *)function_405230(0, 3, file_path));
        return (int32_t)&g66 ^ (int32_t)&g66;
    }
    // 0x402270
    return 1;
  lab_0x401f5c:
    // 0x401f5c
    ungetc(c3, stream2);
    v160 = (char *)(v2 + 11);
    v192 = (int32_t *)(v2 + 12);
    v156 = 0;
    v157 = 1;
    v158 = 0;
    while (true) {
      lab_0x401f90_2:;
        char v159 = *v160 & (char)(v157 == 1); // 0x401f98
        v94 = v156;
        v90 = v157;
        v92 = v158;
        v67 = v158;
        v72 = v159;
        if (v159 != 0) {
            goto lab_0x402156;
        } else {
            goto lab_0x401fa3;
        }
    }
  lab_0x4025d8:;
    int64_t v202 = g46; // 0x4025d8
    free((int64_t *)v202);
    int32_t v203 = stream2->e0; // 0x4025e4
    g46 = 0;
    v19 = v203;
    if ((v203 & 48) == 0) {
        // 0x4025fb
        function_405bc0(v202);
        // UNREACHABLE
    }
    goto lab_0x402234;
}
// Address range: 0x4026b0 - 0x402add
int64_t function_4026b0(int32_t status) {
    // 0x4026b0
    if (status != 0) {
        // 0x4026ca
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4026ef
        exit(status);
        // UNREACHABLE
    }
    // 0x4026f6
    __printf_chk(1, dcgettext(NULL, "Usage: %s OPTION... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print selected parts of lines from each FILE to standard output.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -b, --bytes=LIST        select only these bytes\n  -c, --characters=LIST   select only these characters\n  -d, --delimiter=DELIM   use DELIM instead of TAB for field delimiter\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -f, --fields=LIST       select only these fields;  also print any line\n                            that contains no delimiter character, unless\n                            the -s option is specified\n  -n                      (ignored)\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --complement        complement the set of selected bytes, characters\n                            or fields\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -s, --only-delimited    do not print lines not containing delimiters\n      --output-delimiter=STRING  use STRING as the output delimiter\n                            the default is to use the input delimiter\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nUse one, and only one of -b, -c or -f.  Each LIST is made up of one\nrange, or many ranges separated by commas.  Selected input is written\nin the same order that it is read, and is written exactly once.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "Each range is one of:\n\n  N     N'th byte, character or field, counted from 1\n  N-    from N'th byte, character or field, to end of line\n  N-M   from N'th to M'th (included) byte, character or field\n  -M    from first to M'th (included) byte, character or field\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x4028b8
    bool v2; // 0x4026b0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402940
    int64_t v6 = *(int64_t *)v5; // 0x402944
    int64_t v7 = 4; // 0x40294a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"cut";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402956
        char v11 = *(char *)v9; // 0x402956
        char v12 = v11; // 0x402956
        bool v13 = false; // 0x402956
        while (v10 == v11) {
            // 0x40294c
            v7--;
            int64_t v14 = v9 + v3; // 0x402956
            int64_t v15 = v8 + v3; // 0x402956
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
            // break -> 0x402962
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x402962
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402a74;
        } else {
            // 0x402a5e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4029c4;
            } else {
                goto lab_0x402a74;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4029c4;
        } else {
            // 0x4029aa
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402ab3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4029c4;
            } else {
                goto lab_0x4029c4;
            }
        }
    }
  lab_0x402a74:
    // 0x402a74
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4026ef
    exit(status);
    // UNREACHABLE
  lab_0x4029c4:
    // 0x4029c4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402a04
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4026ef
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402ae0 - 0x402af2
int64_t function_402ae0(void) {
    int64_t result = 0xffffffff; // 0x402ae9
    int64_t v1; // 0x402ae0
    if (0x100000000 * v1 >> 32 >= (v1 & 0xffffffff)) {
        int32_t v2 = v1;
        int32_t v3 = v2 - (int32_t)v1; // 0x402ae7
        result = v3 < 0 == ((v3 ^ v2) & (int32_t)(v1 ^ v1)) < 0 == (v3 != 0);
    }
    // 0x402af1
    return result;
}
// Address range: 0x402b00 - 0x402bcc
int64_t function_402b00(int64_t a1, int64_t a2) {
    int32_t v1 = g63; // 0x402b0c
    int64_t v2 = v1; // 0x402b0c
    int64_t v3 = g62; // 0x402b24
    int64_t v4 = v2; // 0x402b24
    if (g49 == v2) {
        int64_t v5; // 0x402b00
        int64_t v6; // 0x402b00
        if (g62 == 0) {
            // 0x402b98
            v5 = 8;
            v6 = 128;
            if (v1 != 0) {
                // 0x402b9d
                v5 = v2;
                v6 = 16 * v2;
                if (v1 > -1 != v1 > -1) {
                    // 0x402bb7
                    function_405bc0(a1);
                    // UNREACHABLE
                }
            }
        } else {
            if (v1 <= 0xffffffff) {
                // 0x402bb7
                function_405bc0(a1);
                // UNREACHABLE
            }
            int64_t v7 = v2 + 1 + v2 / 2; // 0x402b6a
            v5 = v7;
            v6 = 16 * v7;
        }
        // 0x402b76
        g49 = v5;
        v3 = function_4059d0(g62, v6);
        g62 = v3;
        v4 = g63;
    }
    int64_t result = 16 * v4 + v3; // 0x402b31
    *(int64_t *)result = a1;
    *(int64_t *)(result + 8) = a2;
    g63 = (int32_t)v4 + 1;
    return result;
}
// Address range: 0x402bd0 - 0x40316e
int64_t function_402bd0(int64_t a1, uint32_t a2) {
    int64_t v1 = a1; // 0x402bee
    int64_t v2 = 0; // 0x402bee
    if (a2 % 2 != 0) {
        // 0x402bf0
        bool v3; // 0x402bd0
        int64_t v4 = v3 ? -1 : 1; // 0x402bfd
        int64_t v5 = (int64_t)"-"; // 0x402bd0
        int64_t v6 = a1; // 0x402bd0
        int64_t v7 = 2; // 0x402bfd
        unsigned char v8 = *(char *)v6; // 0x402bfd
        char v9 = *(char *)v5; // 0x402bfd
        char v10 = v9; // 0x402bfd
        bool v11 = false; // 0x402bfd
        while (v8 == v9) {
            // 0x402bf0
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
    int32_t v13 = 1; // 0x402c21
    int64_t v14 = v2; // 0x402c21
    int64_t v15 = v2; // 0x402c21
    int64_t v16 = v2; // 0x402c21
    int64_t v17 = 0; // 0x402c21
    int64_t v18 = 0; // 0x402c21
    int64_t v19 = v1; // 0x402c21
    char * str; // 0x402ff3
    int64_t v20; // 0x402bd0
    int64_t v21; // 0x402bd0
    int64_t v22; // 0x402bd0
    char * format; // 0x402bd0
    int64_t v23; // 0x402bd0
    int64_t v24; // 0x402bd0
    uint64_t v25; // 0x402bd0
    int32_t v26; // 0x402bd0
    int32_t v27; // 0x402bd0
    char * format2; // 0x402bd0
    char * v28; // 0x402cb2
    while (true) {
      lab_0x402cb2:
        // 0x402cb2
        v22 = v19;
        v21 = v18;
        v25 = v16;
        v23 = v15;
        v24 = v14;
        v28 = (char *)v22;
        char v29 = *v28; // 0x402cb2
        if (v29 != 45) {
            // 0x402c30
            v27 = v13;
            if (v29 == 44) {
                goto lab_0x402c5c;
            } else {
                unsigned char v30 = *(char *)(2 * (int64_t)v29 + (int64_t)*__ctype_b_loc()); // 0x402c4c
                if (v29 != 0 == v30 % 2 == 0) {
                    if ((int32_t)v29 >= 58) {
                        // 0x403118
                        function_4053b0(v22);
                        if ((a2 & 4) == 0) {
                            // 0x403160
                            format2 = dcgettext(NULL, "invalid field value %s", 5);
                            goto lab_0x40313b;
                        } else {
                            // 0x40312f
                            format2 = dcgettext(NULL, "invalid byte/character position %s", 5);
                            goto lab_0x40313b;
                        }
                    }
                    char * v31 = g48; // 0x402e95
                    if ((char)v17 == 0 || g48 == NULL) {
                        // 0x402ef8
                        g48 = v28;
                        v31 = v28;
                    }
                    // 0x402ea1
                    str = v31;
                    if (v25 >= 0x199999999999999a) {
                        goto lab_0x402ff3_2;
                    }
                    int64_t v32 = (0x100000000 * (int64_t)v29 - 0x3000000000 >> 32) + 10 * v25; // 0x402ecc
                    v26 = v27;
                    v14 = (char)v23 == 0 ? 1 : v24 & 0xffffffff;
                    v15 = v23;
                    v16 = v32;
                    v20 = 1;
                    v18 = ((char)v23 != 0 ? v23 : v21) & 0xffffffff;
                    if (v32 < v25 || v32 == -1) {
                        goto lab_0x402ff3_2;
                    }
                    goto lab_0x402cae;
                } else {
                    goto lab_0x402c5c;
                }
            }
        } else {
            if ((char)v23 != 0) {
                // break -> 0x40308b
                break;
            }
            char v33 = v24; // 0x402ccf
            unsigned char v34 = (char)(v25 == 0) & v33; // 0x402ccf
            if (v34 != 0) {
                if ((a2 & 4) == 0) {
                    // 0x4030a8
                    format = dcgettext(NULL, "fields are numbered from 1", 5);
                    goto lab_0x402fdb;
                } else {
                    // 0x40307a
                    format = dcgettext(NULL, "byte/character positions are numbered from 1", 5);
                    goto lab_0x402fdb;
                }
            }
            if (v33 != 0) {
                // 0x402e70
                v26 = v25;
                v14 = v24;
                v15 = v24 & 0xffffffff;
                v16 = 0;
                v20 = v34;
                v18 = v21;
            } else {
                // 0x402ce2
                v26 = 1;
                v14 = v24;
                v15 = 1;
                v16 = 0;
                v20 = v24 & 0xffffffff;
                v18 = v21;
            }
            goto lab_0x402cae;
        }
    }
    if ((a2 & 4) == 0) {
        // 0x4030b9
        format = dcgettext(NULL, "invalid field range", 5);
    } else {
        // 0x403097
        format = dcgettext(NULL, "invalid byte or character range", 5);
    }
  lab_0x402fdb:
    // 0x402fdb
    error(0, 0, format);
    function_4026b0(1);
    // UNREACHABLE
  lab_0x402d17_2:;
    // 0x402d17
    int64_t v35; // 0x402bd0
    int64_t v36; // 0x402bd0
    int64_t v37; // 0x402bd0
    int64_t v38; // 0x402bd0
    int64_t v39; // 0x402bd0
    int64_t v40; // 0x402bd0
    if (g63 == 0) {
        // 0x4030f6
        v40 = (int64_t)"missing list of fields";
        if ((a2 & 4) == 0) {
            goto lab_0x402fd4_2;
        } else {
            // 0x403102
            format = dcgettext(NULL, "missing list of byte/character positions", 5);
            goto lab_0x402fdb;
        }
    } else {
        // 0x402d27
        qsort((int64_t *)g62, g63, 16, (int32_t (*)(int64_t *, int64_t *))0x402ae0);
        int64_t v41 = g63; // 0x402d40
        v37 = 0;
        v35 = g62;
        v38 = v41;
        v39 = v41;
        v36 = g62;
        if (g63 == 0) {
            goto lab_0x402de1;
        } else {
            goto lab_0x402d59;
        }
    }
  lab_0x402fd4_2:
    // 0x402fd4
    format = dcgettext(NULL, (char *)v40, 5);
    goto lab_0x402fdb;
  lab_0x402ff3_2:
    // 0x402ff3
    strspn(str, "0123456789");
    int64_t v42 = function_405c00(); // 0x40300d
    function_4053b0(v42);
    char * format3; // 0x402bd0
    if ((a2 & 4) == 0) {
        // 0x4030e5
        format3 = dcgettext(NULL, "field number %s is too large", 5);
        goto lab_0x40303c;
    } else {
        // 0x403030
        format3 = dcgettext(NULL, "byte/character offset %s is too large", 5);
        goto lab_0x40303c;
    }
  lab_0x402c5c:
    if ((char)v23 == 0) {
        if (v25 == 0) {
            if ((a2 & 4) == 0) {
                // 0x4030a8
                format = dcgettext(NULL, "fields are numbered from 1", 5);
                goto lab_0x402fdb;
            } else {
                // 0x4030d6
                format = dcgettext(NULL, "byte/character positions are numbered from 1", 5);
                goto lab_0x402fdb;
            }
        }
        // 0x402d09
        function_402b00(v25, v25);
        v26 = v27;
        v14 = 0;
        v15 = 0;
        v16 = 0;
        v20 = 0;
        v18 = 0;
        if (*v28 == 0) {
            goto lab_0x402d17_2;
        }
        goto lab_0x402cae;
    } else {
        if ((char)v24 != 0) {
            // 0x402e40
            if ((char)v21 == 0) {
                goto lab_0x402c8b;
            } else {
                goto lab_0x402e49;
            }
        } else {
            if ((char)v21 != 0) {
                goto lab_0x402e49;
            } else {
                // 0x402c76
                v40 = (int64_t)"invalid range with no endpoint: -";
                if (a2 % 2 == 0) {
                    goto lab_0x402fd4_2;
                }
                goto lab_0x402c8b;
            }
        }
    }
  lab_0x402cae:
    // 0x402cae
    v13 = v26;
    v17 = v20;
    v19 = v22 + 1;
    goto lab_0x402cb2;
  lab_0x402c8b:;
    int32_t v43 = 1;
    function_402b00((int64_t)v43, -1);
    int32_t v44 = v43; // 0x402c97
    goto lab_0x402c9c;
  lab_0x402e49:;
    uint64_t v86 = (int64_t)v27; // 0x402e49
    v40 = (int64_t)"invalid decreasing range";
    if (v25 < v86) {
        goto lab_0x402fd4_2;
    }
    // 0x402e54
    function_402b00(v86, v25);
    v44 = v27;
    goto lab_0x402c9c;
  lab_0x402c9c:
    // 0x402c9c
    v26 = v44;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v20 = 0;
    v18 = 0;
    if (*v28 == 0) {
        goto lab_0x402d17_2;
    }
    goto lab_0x402cae;
  lab_0x40313b:
    // 0x40313b
    error(0, 0, format2);
    function_4026b0(1);
    // UNREACHABLE
  lab_0x402de1:;
    int64_t v45 = v39; // 0x402de6
    int64_t v46 = v36; // 0x402de6
    int64_t * v47; // 0x402f1f
    if ((a2 & 2) != 0) {
        // 0x402f14
        g62 = 0;
        v47 = (int64_t *)v36;
        uint64_t v48 = *v47; // 0x402f1f
        g63 = 0;
        g49 = 0;
        if (v48 < 2) {
            goto lab_0x402f3e;
        } else {
            // 0x402fb7
            function_402b00(1, v48 - 1);
            goto lab_0x402f3e;
        }
    } else {
        goto lab_0x402dec;
    }
  lab_0x402d59:;
    int64_t v49 = v37 + 1; // 0x402d59
    int64_t v50 = v49; // 0x402d60
    int64_t v51 = v38; // 0x402d60
    int64_t v52 = v35; // 0x402d60
    int64_t v53 = v49; // 0x402d60
    int64_t v54 = v35; // 0x402d60
    int64_t v55 = v38; // 0x402d60
    if (v49 >= v38) {
        goto lab_0x402d50;
    } else {
        goto lab_0x402d62;
    }
  lab_0x402dec:;
    int64_t v56 = v45 + 1; // 0x402dec
    g63 = v56;
    int64_t v57 = function_4059d0(v46, 16 * v56); // 0x402e01
    g62 = v57;
    int64_t result = v57 - 16 + 16 * (int64_t)g63; // 0x402e18
    *(int64_t *)(result + 8) = -1;
    *(int64_t *)result = -1;
    return result;
  lab_0x402d50:
    // 0x402d50
    v37 = v50;
    v35 = v52;
    v38 = v51;
    v39 = v51;
    v36 = v52;
    if (v50 >= v51) {
        goto lab_0x402de1;
    } else {
        goto lab_0x402d59;
    }
  lab_0x402d62:;
    int64_t v58 = v55;
    int64_t v59 = v54;
    int64_t v60 = v53;
    int64_t v61 = 16 * v60; // 0x402d65
    int64_t v62 = v61 - 16; // 0x402d69
    int64_t v63 = v61 + v59; // 0x402d6d
    int64_t v64 = v62 + v59; // 0x402d71
    uint64_t v65 = *(int64_t *)(v64 + 8); // 0x402d75
    v50 = v60;
    v51 = v58;
    v52 = v59;
    int64_t v66; // 0x402bd0
    int64_t v67; // 0x402bd0
    int64_t v68; // 0x402bd0
    int64_t v69; // 0x402bd0
    int64_t v70; // 0x402bd0
    int64_t v71; // 0x402d7e
    if (v65 < *(int64_t *)v63) {
        goto lab_0x402d50;
    } else {
        // 0x402d7e
        v71 = v61 + 16;
        v67 = v65;
        v70 = v64;
        v68 = v58;
        v69 = v63;
        v66 = v59;
        goto lab_0x402d88;
    }
  lab_0x402f3e:;
    int64_t v72 = 16 * v39 + v36;
    int64_t v73; // 0x402bd0
    if (v39 < 2) {
        goto lab_0x402f7b;
    } else {
        // 0x402f58
        v73 = v36 + 16;
        goto lab_0x402f58_2;
    }
  lab_0x402f7b:;
    int64_t v74 = *(int64_t *)(v72 - 8); // 0x402f7f
    if (v74 != -1) {
        // 0x402fa5
        function_402b00(v74 + 1, -1);
        goto lab_0x402f8a;
    } else {
        goto lab_0x402f8a;
    }
  lab_0x402d88:;
    uint64_t v75 = v67;
    uint64_t v76 = *(int64_t *)(v69 + 8); // 0x402d88
    *(int64_t *)(v70 + 8) = v76 >= v75 ? v76 : v75;
    memmove((int64_t *)v69, (int64_t *)(v71 + v66), 16 * (int32_t)(v68 - v60) - 16);
    int64_t v77 = g62; // 0x402db0
    int64_t v78 = (int64_t)g63 - 1; // 0x402db7
    g63 = v78;
    v50 = v60;
    v51 = v78;
    v52 = v77;
    if (v78 > v60) {
        int64_t v79 = v77 + v62; // 0x402dc7
        int64_t v80 = v77 + v61; // 0x402dcb
        uint64_t v81 = *(int64_t *)(v79 + 8); // 0x402dcf
        v67 = v81;
        v70 = v79;
        v68 = v78;
        v69 = v80;
        v66 = v77;
        if (*(int64_t *)v80 > v81) {
            int64_t v82 = v60 + 1; // 0x402d59
            v50 = v82;
            v51 = v78;
            v52 = v77;
            v53 = v82;
            v54 = v77;
            v55 = v78;
            if (v82 >= v78) {
                goto lab_0x402d50;
            } else {
                goto lab_0x402d62;
            }
        } else {
            goto lab_0x402d88;
        }
    } else {
        goto lab_0x402d50;
    }
  lab_0x402f8a:
    // 0x402f8a
    free(v47);
    v45 = g63;
    v46 = g62;
    goto lab_0x402dec;
  lab_0x402f58_2:;
    int64_t v83 = *(int64_t *)v73; // 0x402f5c
    int64_t v84 = *(int64_t *)(v73 - 8) + 1; // 0x402f60
    if (v84 == v83) {
        goto lab_0x402f72;
    } else {
        // 0x402f69
        function_402b00(v84, v83 - 1);
        goto lab_0x402f72;
    }
  lab_0x402f72:;
    int64_t v85 = v73 + 16; // 0x402f72
    v73 = v85;
    if (v72 != v85) {
        goto lab_0x402f58_2;
    } else {
        goto lab_0x402f7b;
    }
  lab_0x40303c:
    // 0x40303c
    error(0, 0, format3);
    free((int64_t *)v42);
    function_4026b0(1);
    // UNREACHABLE
}
// Address range: 0x403170 - 0x4031a6
int64_t function_403170(void) {
    // 0x403170
    g63 = 0;
    g49 = 0;
    free((int64_t *)g62);
    g62 = 0;
    return &g66;
}
// Address range: 0x4031b0 - 0x4031b8
int64_t function_4031b0(int64_t a1) {
    // 0x4031b0
    g51 = a1;
    int64_t result; // 0x4031b0
    return result;
}
// Address range: 0x4031c0 - 0x4031c8
int64_t function_4031c0(int64_t a1) {
    // 0x4031c0
    g50 = a1;
    int64_t result; // 0x4031c0
    return result;
}
// Address range: 0x4031d0 - 0x40326e
int64_t function_4031d0(void) {
    // 0x4031d0
    int32_t * err_num; // 0x4031e6
    if ((int32_t)function_406cd0((int64_t)g29) == 0) {
        goto lab_0x4031fc;
    } else {
        // 0x4031e6
        err_num = __errno_location();
        if (g50 == 0) {
            goto lab_0x403213;
        } else {
            // 0x4031f7
            if (*err_num != 32) {
                goto lab_0x403213;
            } else {
                goto lab_0x4031fc;
            }
        }
    }
  lab_0x4031fc:;
    int64_t result = function_406cd0((int64_t)g32); // 0x403203
    if ((int32_t)result == 0) {
        // 0x40320c
        return result;
    }
    // 0x40324e
    _exit(g18);
    // UNREACHABLE
  lab_0x403213:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40321f
    if (g51 == 0) {
        // 0x403259
        error(0, *err_num, "%s", v1);
    } else {
        // 0x403233
        error(0, *err_num, "%s: %s", (char *)function_405200((int64_t)g51), v1);
    }
    // 0x40324e
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403270 - 0x403275
int64_t function_403270(void) {
    // 0x403270
    int64_t fd; // 0x403270
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x403280 - 0x4032a1
int64_t function_403280(int64_t stream, int64_t advice, int64_t a3) {
    // 0x403280
    if (stream == 0) {
        // 0x4032a0
        int64_t result; // 0x403280
        return result;
    }
    // 0x403285
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x4032b0 - 0x4035fd
int64_t function_4032b0(int64_t * a1, int64_t * a2, int32_t a3, uint64_t a4, char a5, char a6, int64_t a7) {
    int64_t * mem = a1; // 0x4032f2
    int64_t size = (int64_t)a2; // 0x4032f2
    if (a1 == NULL) {
        // 0x4035c8
        size = a4 < 64 ? a4 : 64;
        mem = malloc((int32_t)size);
        if (mem == NULL) {
            // 0x403474
            return -1;
        }
    }
    int64_t v1 = (int64_t)mem;
    uint64_t v2 = (int64_t)a3; // 0x4032f8
    int64_t v3 = v1; // 0x4032fd
    int64_t v4 = size; // 0x4032fd
    int64_t v5; // 0x4032b0
    uint64_t v6; // 0x4032b0
    int64_t v7; // 0x4032b0
    char v8; // 0x4032b0
    int64_t v9; // 0x4032b0
    int64_t v10; // 0x4032b0
    int64_t v11; // 0x4032b0
    int64_t v12; // 0x4032b0
    int64_t v13; // 0x4032b0
    int32_t v14; // 0x4032b0
    int32_t v15; // 0x4032b0
    int32_t v16; // 0x4032b0
    int64_t v17; // 0x4032b0
    int64_t v18; // 0x4032b0
    int64_t v19; // 0x4032b0
    int32_t v20; // bp-64, 0x4032b0
    int64_t v21; // 0x4032b0
    int64_t v22; // 0x4033e1
    int64_t v23; // 0x403355
    if (size >= v2) {
        int64_t v24 = size - v2; // 0x403306
        v3 = v1;
        v4 = size;
        if (v24 == 0 != size >= a4) {
            char v25 = a5 == -1 ? a6 : a5;
            int64_t * v26 = (int64_t *)(a7 + 8);
            int32_t v27 = v25;
            int32_t v28 = a5 == -1 ? a6 : a6 == -1 ? a5 : a6;
            v21 = v2 ^ -0x8000000000000000;
            v17 = v1;
            v10 = v1 + v2;
            v9 = v24;
            v5 = size;
            while (true) {
              lab_0x4033d9:
                // 0x4033d9
                v6 = v5;
                v11 = v10;
                v18 = v17;
                v22 = function_405ce0(a7, (int64_t *)&v20);
                if (v22 != 0) {
                    // 0x403350
                    v16 = v15;
                    v23 = v20;
                    if (v25 != -1) {
                        int64_t v29 = function_403600(v22, v27, v28, v23); // 0x40353e
                        if (v29 == 0) {
                            goto lab_0x403360;
                        } else {
                            int64_t v30 = v29 - v22; // 0x40354c
                            v20 = (int32_t)v30 + 1;
                            v14 = v16;
                            v13 = v30 + 2;
                            v8 = 1;
                            goto lab_0x403367;
                        }
                    } else {
                        goto lab_0x403360;
                    }
                } else {
                    uint64_t v31 = *v26; // 0x4033f2
                    int32_t v32; // 0x4032b0
                    if (v31 >= *(int64_t *)(a7 + 16)) {
                        int32_t v33 = __uflow((struct _IO_FILE *)a7); // 0x40343b
                        v32 = v33;
                        if (v33 == -1) {
                            // break -> 0x403449
                            break;
                        }
                    } else {
                        // 0x4033fc
                        *v26 = v31 + 1;
                        v32 = (int32_t)*(char *)v31;
                    }
                    int32_t v34 = v32;
                    v20 = 1;
                    v14 = v34;
                    v13 = 2;
                    v8 = v34 == v28 | v34 == v27;
                    goto lab_0x403367;
                }
            }
            if (v11 != v18) {
              lab_0x403580:
                // 0x403580
                *(char *)v12 = 0;
                *a1 = v19;
                int64_t result = v12 - (v19 + v2); // 0x40359d
                *a2 = v7;
                if (result != 0) {
                    // 0x403474
                    return result;
                }
                // 0x403474
                return -1;
            }
        }
    }
  lab_0x403458_3:
    // 0x403458
    *a1 = v3;
    *a2 = v4;
    // 0x403474
    return -1;
  lab_0x403360:
    // 0x403360
    v14 = v16;
    v13 = v23 + 1;
    v8 = 0;
    goto lab_0x403367;
  lab_0x403367:;
    uint64_t v35 = v13;
    int32_t v36 = v14;
    int64_t v37 = v18; // 0x40336f
    int64_t v38 = v11; // 0x40336f
    int64_t v39 = v9; // 0x40336f
    int64_t v40 = v6; // 0x40336f
    if (v6 < a4 == v9 < v35) {
        int64_t v41 = v6 < 64 ? v6 + 64 : 2 * v6; // 0x4034a5
        int64_t v42 = v11 - v18; // 0x4034a9
        uint64_t v43 = v41 - v42 < v35 ? v35 + v42 : v41; // 0x4034bb
        int64_t v44 = v43 > a4 | v6 >= v43 ? a4 : v43;
        int64_t v45 = v44; // 0x4034d9
        if (v44 - v2 < 0) {
            // 0x4034db
            v3 = v18;
            v4 = v21;
            v45 = v21;
            if (v6 == v21) {
                goto lab_0x403458_3;
            }
        }
        int64_t * mem2 = realloc((int64_t *)v18, (int32_t)v45); // 0x403504
        v3 = v18;
        v4 = v6;
        if (mem2 == NULL) {
            goto lab_0x403458_3;
        }
        int64_t v46 = (int64_t)mem2; // 0x403504
        v37 = v46;
        v38 = v42 + v46;
        v39 = v45 - v42;
        v40 = v45;
    }
    int64_t v47 = v40;
    int64_t v48 = v39;
    int64_t v49 = v38;
    int64_t v50 = v37;
    int64_t v51 = v49; // 0x40337e
    int64_t v52 = v48; // 0x40337e
    if (v48 >= 2) {
        uint64_t v53 = v48 - 1; // 0x403380
        uint64_t v54 = (int64_t)v20; // 0x403384
        int64_t v55 = v53 < v54 ? v53 : v54; // 0x403389
        if (v22 == 0) {
            // 0x403488
            *(char *)v49 = (char)v36;
        } else {
            // 0x403398
            memcpy((int64_t *)v49, (int64_t *)v22, (int32_t)v55);
        }
        // 0x4033b0
        v51 = v55 + v49;
        v52 = v48 - v55;
    }
    // 0x4033b6
    if (v22 != 0) {
        // 0x4033bb
        v3 = v50;
        v4 = v47;
        if ((int32_t)function_406d30(a7, (int64_t)v20) != 0) {
            goto lab_0x403458_3;
        }
    }
    // 0x4033d0
    v17 = v50;
    v15 = v36;
    v10 = v51;
    v9 = v52;
    v5 = v47;
    v19 = v50;
    v12 = v51;
    v7 = v47;
    if (v8 != 0) {
        goto lab_0x403580;
    }
    goto lab_0x4033d9;
}
// Address range: 0x403600 - 0x403789
int64_t function_403600(int64_t result, int32_t a2, int32_t a3, int64_t a4) {
    uint64_t v1 = (int64_t)a2;
    char v2 = a2; // 0x403600
    char v3 = a3; // 0x403600
    if (v2 == v3) {
        // 0x403778
        return function_406bc0(result, v1 % 256, a4);
    }
    int64_t v4 = result; // 0x403612
    int64_t v5 = 0; // 0x403612
    int64_t result2; // 0x403600
    if (a4 != 0) {
        // 0x403614
        v4 = result;
        v5 = a4;
        if (result % 8 != 0) {
            char v6 = result;
            int64_t v7 = result; // 0x40361f
            if (v6 != v3 != v6 != v2) {
                // 0x403763
                return result;
            }
            int64_t v8 = a4; // 0x40361f
            v7++;
            v8--;
            v4 = v7;
            v5 = v8;
            while (v8 != 0 && v7 % 8 != 0) {
                char v9 = *(char *)v7; // 0x403636
                result2 = v7;
                if (v9 == v3 || v9 == v2) {
                    // 0x403763
                    return result2;
                }
                v7++;
                v8--;
                v4 = v7;
                v5 = v8;
            }
        }
    }
    int64_t v10 = v4; // 0x4036ab
    int64_t v11 = v5; // 0x4036ab
    int64_t result3; // 0x403600
    int64_t v12; // 0x403600
    if (v5 < 8) {
        goto lab_0x403727;
    } else {
        uint64_t v13 = (int64_t)a3;
        int64_t v14 = 256 * v13 & 0xff00 | v13 % 256; // 0x403675
        int64_t v15 = 256 * v1 & 0xff00 | v1 % 256; // 0x403677
        int64_t v16 = 0x10000 * v14 | v14; // 0x40368d
        int64_t v17 = 0x10000 * v15 | v15; // 0x403690
        int64_t v18 = 0x100000000 * v16 | v16; // 0x4036a1
        int64_t v19 = 0x100000000 * v17 | v17; // 0x4036a4
        int64_t v20 = *(int64_t *)v4; // 0x4036b7
        int64_t v21 = v20 ^ v19; // 0x4036bd
        int64_t v22 = v20 ^ v18; // 0x4036c0
        result3 = v4;
        v12 = v5;
        if (((v22 - 0x101010101010101 & (v22 ^ -0x7f7f7f7f7f7f7f80) | v21 - 0x101010101010101 & (v21 ^ -0x7f7f7f7f7f7f7f80)) & -0x7f7f7f7f7f7f7f80) == 0) {
            int64_t v23 = v5 - 8; // 0x403719
            int64_t v24 = v4 + 8; // 0x40371d
            v10 = v24;
            v11 = v23;
            while (v23 >= 8) {
                int64_t v25 = *(int64_t *)v24; // 0x4036f0
                int64_t v26 = v25 ^ v18; // 0x4036f6
                int64_t v27 = v25 ^ v19; // 0x4036f9
                result3 = v24;
                v12 = v23;
                if (((v26 - 0x101010101010101 & (v26 ^ -0x7f7f7f7f7f7f7f80) | v27 - 0x101010101010101 & (v27 ^ -0x7f7f7f7f7f7f7f80)) & -0x7f7f7f7f7f7f7f80) != 0) {
                    goto lab_0x40372c;
                }
                v23 -= 8;
                v24 += 8;
                v10 = v24;
                v11 = v23;
            }
            goto lab_0x403727;
        } else {
            goto lab_0x40372c;
        }
    }
  lab_0x40372c:;
    char v28 = *(char *)result3; // 0x40372c
    if (v28 == v3 || v28 == v2) {
        // 0x403763
        return result3;
    }
    int64_t v29 = result3 + 1;
    result2 = 0;
    while (v29 != v12 + result3) {
        char v30 = *(char *)v29; // 0x403748
        result2 = v29;
        if (v30 == v2 || v30 == v3) {
            // break -> 0x403763
            break;
        }
        v29++;
        result2 = 0;
    }
    // 0x403763
    return result2;
  lab_0x403727:
    // 0x403727
    result3 = v10;
    v12 = v11;
    if (v11 == 0) {
        // 0x403763
        return 0;
    }
    goto lab_0x40372c;
}
// Address range: 0x403790 - 0x403829
int64_t function_403790(int64_t str) {
    // 0x403790
    if (str == 0) {
        // 0x403809
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40379e
    int64_t result = (int64_t)found_char_pos; // 0x40379e
    if (found_char_pos == NULL) {
        // 0x4037f9
        g52 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4037a8
    if (v1 - str < 7) {
        // 0x4037f9
        g52 = str;
        g31 = str;
        return result;
    }
    // 0x4037b8
    bool v2; // 0x403790
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403790
    int64_t v5 = result - 6; // 0x403790
    int64_t v6 = 7; // 0x4037c6
    unsigned char v7 = *(char *)v5; // 0x4037c6
    char v8 = *(char *)v4; // 0x4037c6
    char v9 = v8; // 0x4037c6
    bool v10 = false; // 0x4037c6
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
    int64_t v12 = (int64_t)"lt-"; // 0x4037d0
    int64_t v13 = v1; // 0x4037d0
    int64_t v14 = 3; // 0x4037d0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4037f9
        g52 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4037e2
    char v16 = *(char *)v12; // 0x4037e2
    char v17 = v16; // 0x4037e2
    bool v18 = false; // 0x4037e2
    while (v15 == v16) {
        // 0x4037d2
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
    int64_t v20 = v1; // 0x4037ec
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4037ee
        v20 = result + 4;
        g28 = v20;
    }
    // 0x4037f9
    g52 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x403830 - 0x403922
int64_t function_403830(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403844
    int64_t result = (int64_t)v1; // 0x403844
    if (result != a1) {
        // 0x403851
        return result;
    }
    int64_t v2 = function_406ee0(); // 0x403860
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x403916
    if (v3 == 85) {
        // 0x403870
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x403908
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x40389e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x4038ab
        // 0x403851
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x403908
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x4038ed
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4038fa
    // 0x403851
    return result4;
}
// Address range: 0x403930 - 0x403987
int64_t function_403930(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403930
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403978
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403987 - 0x404b51
int64_t function_403987(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4039d1
    int64_t v3 = 0; // 0x4039d1
    int64_t v4; // 0x403987
    int64_t v5; // 0x403987
    int64_t v6; // 0x403987
    int64_t v7; // 0x403987
    int64_t v8; // 0x403987
    int64_t v9; // 0x403987
    int64_t v10; // 0x403987
    int64_t v11; // 0x403987
    int64_t v12; // 0x403987
    int64_t v13; // 0x403987
    int64_t v14; // 0x403987
    int64_t v15; // 0x403987
    int64_t v16; // 0x403987
    int64_t v17; // 0x403987
    int64_t v18; // 0x403987
    int64_t result; // 0x403987
    int64_t v19; // 0x403987
    int32_t wc; // bp+132, 0x403987
    int64_t ps; // bp+136, 0x403987
    char v20; // 0x403f40
    int64_t v21; // 0x403f40
    int64_t v22; // 0x4042e8
    int64_t v23; // 0x403987
    int64_t v24; // 0x404307
    int32_t v25; // 0x403987
    while (true) {
      lab_0x4039d8_2:
        // 0x4039d8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403987
        int64_t v27; // 0x403a0c
        while (true) {
          lab_0x4039d8:
            // 0x4039d8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4039e3
            if (v15 == -1) {
                // 0x4039e5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4039f3
            if (v28) {
                // break (via goto) -> 0x404158
                goto lab_0x404158;
            }
            // 0x4039fc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g65 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403feb
                    if (v25 % 2 == 0) {
                        goto lab_0x403b31;
                    }
                    // 0x40440d
                    v26 = v5 + 1;
                    goto lab_0x4039d8;
                }
                case 7: {
                    goto lab_0x403b31;
                }
                case 8: {
                    goto lab_0x403b31;
                }
                case 9: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403b31;
                }
                case 12: {
                    goto lab_0x403b31;
                }
                case 13: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x403afd;
                }
                case 36: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403b31;
                }
                case 38: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403b31;
                }
                case 44: {
                    goto lab_0x403b31;
                }
                case 45: {
                    goto lab_0x403b31;
                }
                case 46: {
                    goto lab_0x403b31;
                }
                case 47: {
                    goto lab_0x403b31;
                }
                case 48: {
                    goto lab_0x403b31;
                }
                case 49: {
                    goto lab_0x403b31;
                }
                case 50: {
                    goto lab_0x403b31;
                }
                case 51: {
                    goto lab_0x403b31;
                }
                case 52: {
                    goto lab_0x403b31;
                }
                case 53: {
                    goto lab_0x403b31;
                }
                case 54: {
                    goto lab_0x403b31;
                }
                case 55: {
                    goto lab_0x403b31;
                }
                case 56: {
                    goto lab_0x403b31;
                }
                case 57: {
                    goto lab_0x403b31;
                }
                case 58: {
                    goto lab_0x403b31;
                }
                case 59: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403b31;
                }
                case 66: {
                    goto lab_0x403b31;
                }
                case 67: {
                    goto lab_0x403b31;
                }
                case 68: {
                    goto lab_0x403b31;
                }
                case 69: {
                    goto lab_0x403b31;
                }
                case 70: {
                    goto lab_0x403b31;
                }
                case 71: {
                    goto lab_0x403b31;
                }
                case 72: {
                    goto lab_0x403b31;
                }
                case 73: {
                    goto lab_0x403b31;
                }
                case 74: {
                    goto lab_0x403b31;
                }
                case 75: {
                    goto lab_0x403b31;
                }
                case 76: {
                    goto lab_0x403b31;
                }
                case 77: {
                    goto lab_0x403b31;
                }
                case 78: {
                    goto lab_0x403b31;
                }
                case 79: {
                    goto lab_0x403b31;
                }
                case 80: {
                    goto lab_0x403b31;
                }
                case 81: {
                    goto lab_0x403b31;
                }
                case 82: {
                    goto lab_0x403b31;
                }
                case 83: {
                    goto lab_0x403b31;
                }
                case 84: {
                    goto lab_0x403b31;
                }
                case 85: {
                    goto lab_0x403b31;
                }
                case 86: {
                    goto lab_0x403b31;
                }
                case 87: {
                    goto lab_0x403b31;
                }
                case 88: {
                    goto lab_0x403b31;
                }
                case 89: {
                    goto lab_0x403b31;
                }
                case 90: {
                    goto lab_0x403b31;
                }
                case 91: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403b31;
                }
                case 94: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403b31;
                }
                case 96: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403b31;
                }
                case 98: {
                    goto lab_0x403b31;
                }
                case 99: {
                    goto lab_0x403b31;
                }
                case 100: {
                    goto lab_0x403b31;
                }
                case 101: {
                    goto lab_0x403b31;
                }
                case 102: {
                    goto lab_0x403b31;
                }
                case 103: {
                    goto lab_0x403b31;
                }
                case 104: {
                    goto lab_0x403b31;
                }
                case 105: {
                    goto lab_0x403b31;
                }
                case 106: {
                    goto lab_0x403b31;
                }
                case 107: {
                    goto lab_0x403b31;
                }
                case 108: {
                    goto lab_0x403b31;
                }
                case 109: {
                    goto lab_0x403b31;
                }
                case 110: {
                    goto lab_0x403b31;
                }
                case 111: {
                    goto lab_0x403b31;
                }
                case 112: {
                    goto lab_0x403b31;
                }
                case 113: {
                    goto lab_0x403b31;
                }
                case 114: {
                    goto lab_0x403b31;
                }
                case 115: {
                    goto lab_0x403b31;
                }
                case 116: {
                    goto lab_0x403b31;
                }
                case 117: {
                    goto lab_0x403b31;
                }
                case 118: {
                    goto lab_0x403b31;
                }
                case 119: {
                    goto lab_0x403b31;
                }
                case 120: {
                    goto lab_0x403b31;
                }
                case 121: {
                    goto lab_0x403b31;
                }
                case 122: {
                    goto lab_0x403b31;
                }
                case 123: {
                    goto lab_0x403ad5;
                }
                case 124: {
                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403ad5;
                }
                case 126: {
                    goto lab_0x403afd;
                }
                default: {
                    goto lab_0x403ed5;
                }
            }
        }
      lab_0x403ed5:
        if (v23 != 1) {
            // 0x404240
            ps = 0;
            int64_t len = v15; // 0x404250
            if (v15 == -1) {
                // 0x404252
                len = strlen((char *)str);
            }
            // 0x40427e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4042df:
                // 0x4042df
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4042e4
                int64_t v30 = v29 + str;
                v24 = function_406b40(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40485a_2;
                    }
                    case -1: {
                        goto lab_0x40485a_2;
                    }
                    case -2: {
                        // 0x40493d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404977
                            v19 = v18;
                            int64_t v31 = v18; // 0x40497a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404987
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404980
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40485a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40485a_2;
                    }
                    case 1: {
                        goto lab_0x4042b0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40435c
                        char v34 = *(char *)v33; // 0x40436d
                        unsigned char v35; // 0x403987
                        if (v34 < 125) {
                            // 0x404378
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40438f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403930(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x404360
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40436d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x404378
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40438f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403930(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x404360
                            v33++;
                        }
                        goto lab_0x4042b0;
                    }
                }
            }
            goto lab_0x40485a_2;
        } else {
            // 0x403f24
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403b31;
        }
    }
  lab_0x404158:
    // 0x404158
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x404a5a
        if (v8 > result) {
            // 0x404a63
            *(char *)(v12 + result) = 0;
        }
        // 0x403d87
        return result;
    }
    return function_403930(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403b31:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403b40
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x403d4a_2;
        }
    }
    int64_t v39 = result; // 0x403c41
    char v40 = v20; // 0x403c41
    int64_t v41 = v38; // 0x403c41
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403c41
    int64_t v43 = v36; // 0x403c41
    goto lab_0x403bbd;
  lab_0x403d4a_2:
    // 0x403d87
    return function_403930(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40485a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403b31;
    } else {
        uint64_t v49 = v46 + v5; // 0x40442e
        int64_t v50 = v5 + 1; // 0x404511
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x404518
        char v52 = v20; // 0x404518
        int64_t v53 = result; // 0x404518
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4044e1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4044e5
            int64_t v56 = v54 + 1; // 0x4044ea
            int64_t v57 = v51 + 1; // 0x404511
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4044dc
                v54 = v56;
                if (v47 > v54) {
                    // 0x4044e1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4044e5
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
        goto lab_0x403bbd;
    }
  lab_0x4042b0:
    // 0x4042b0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4042cf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4042d2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40485a
        goto lab_0x40485a_2;
    }
    goto lab_0x4042df;
  lab_0x403afd:
    // 0x403afd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x403d4a_2;
    }
    goto lab_0x403b31;
  lab_0x403ad5:;
    bool v60 = v15 == 1; // 0x403ae0
    if (v15 == -1) {
        // 0x403ae2
        v60 = *(char *)v1 == 0;
    }
    // 0x403aee
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403b31;
    } else {
        goto lab_0x403afd;
    }
  lab_0x403bbd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403bc2
        *(char *)(v44 + v45) = v40;
    }
    // 0x403bc6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4039d8_2;
}
// Address range: 0x404b60 - 0x404cfe
int64_t function_404b60(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404b62
    int32_t * v3 = __errno_location(); // 0x404b7c
    int64_t v4 = (int64_t)g20; // 0x404b81
    int32_t v5 = *v3; // 0x404b8b
    int64_t v6 = v4; // 0x404ba1
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x404cf9
            function_405bc0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404bb0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404bb7
        int64_t v9; // 0x404b60
        if (g20 == &g21) {
            int64_t v10 = function_4059d0(0, v8); // 0x404cda
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x404cdf
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4059d0(v4, v8); // 0x404bcb
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x404bda
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x404bda
        int32_t v14 = v7; // 0x404be1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404c11
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x404c1b
    int64_t * v17 = (int64_t *)v15; // 0x404c1e
    uint64_t v18 = *v17; // 0x404c1e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404c21
    int64_t result = *v19; // 0x404c21
    int64_t v20; // 0x404b60
    uint64_t v21 = function_403930(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404c44
    if (v18 > v21) {
        // 0x404cbb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404c57
    *v17 = v22;
    if (result != (int64_t)&g53) {
        // 0x404c67
        free((int64_t *)result);
    }
    int64_t result2 = function_405970(v22); // 0x404c81
    *v19 = result2;
    int64_t v23; // 0x404b60
    function_403930(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x404cbb
    *v3 = v5;
    return result2;
}
// Address range: 0x404d00 - 0x404d34
int64_t function_404d00(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404d07
    int64_t result = function_405b70(a1 == 0 ? (int64_t)&g54 : a1, 56); // 0x404d26
    return result;
}
// Address range: 0x404d40 - 0x404d4f
int64_t function_404d40(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g54 : a1); // 0x404d4c
    return result;
}
// Address range: 0x404d50 - 0x404d5f
int64_t function_404d50(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 : a1; // 0x404d58
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g54;
}
// Address range: 0x404d60 - 0x404d93
int64_t function_404d60(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 + 8 : a1 + 8; // 0x404d79
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x404d7e
    uint32_t v3 = *v2; // 0x404d7e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404d82
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404da0 - 0x404db3
int64_t function_404da0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g54 + 4 : a1 + 4); // 0x404dac
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404dc0 - 0x404deb
int64_t function_404dc0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g54 : a1; // 0x404dc8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404de5
        abort();
        // UNREACHABLE
    }
    // 0x404ddc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g54;
}
// Address range: 0x404df0 - 0x404e62
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g54 : a5; // 0x404e12
    int32_t * v2 = __errno_location(); // 0x404e1b
    uint32_t v3 = *(int32_t *)v1; // 0x404e3b
    int64_t result = function_403930(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x404e4a
    return result;
}
// Address range: 0x404e70 - 0x404f51
int64_t function_404e70(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g54 : a4; // 0x404e92
    int32_t * v2 = __errno_location(); // 0x404e98
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404eb7
    int32_t * v4 = (int32_t *)v1; // 0x404eba
    int64_t v5 = function_403930(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404ed5
    int64_t v6 = v5 + 1; // 0x404eda
    int64_t result = function_405970(v6); // 0x404eef
    function_403930(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404f34
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x404f3d
    return result;
}
// Address range: 0x404f60 - 0x404f6a
int64_t function_404f60(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404f60
    return function_404e70(a1, a2, 0, a3);
}
// Address range: 0x404f70 - 0x405005
int64_t function_404f70(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404f70
    int64_t v2 = v1; // 0x404f70
    int64_t v3 = v2; // 0x404f84
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404fa3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g66;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404fa0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g66;
        }
    }
    int64_t v6 = v3; // 0x404fbd
    if (g21 != 0x60b360) {
        // 0x404fbf
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g53;
        v6 = &g66;
    }
    int64_t result = v6; // 0x404fe1
    if (g20 != &g21) {
        // 0x404fe3
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g66;
    }
    // 0x404ff6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x405010 - 0x405021
int64_t function_405010(void) {
    // 0x405010
    int64_t v1; // 0x405010
    return function_404b60(v1, v1, -1, (int64_t *)&g54);
}
// Address range: 0x405030 - 0x40503a
int64_t function_405030(void) {
    // 0x405030
    int64_t v1; // 0x405030
    return function_404b60(v1, v1, v1, (int64_t *)&g54);
}
// Address range: 0x405040 - 0x405056
int64_t function_405040(int64_t a1) {
    // 0x405040
    return function_404b60(0, a1, -1, (int64_t *)&g54);
}
// Address range: 0x405060 - 0x405072
int64_t function_405060(int64_t a1, int64_t a2) {
    // 0x405060
    return function_404b60(0, a1, a2, (int64_t *)&g54);
}
// Address range: 0x405080 - 0x4050e8
int64_t function_405080(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405090
    return function_404b60((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4050f0 - 0x405154
int64_t function_4050f0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x405100
    return function_404b60((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x405160 - 0x40516c
int64_t function_405160(int64_t a1, int64_t a2) {
    // 0x405160
    return function_405080(0, a1 & 0xffffffff, a2);
}
// Address range: 0x405170 - 0x40517f
int64_t function_405170(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405170
    return function_4050f0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x405180 - 0x4051f0
int64_t function_405180(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g54); // 0x40518d
    int128_t v2 = __asm_movdqa(g55); // 0x405195
    int128_t v3 = __asm_movdqa(g56); // 0x40519d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4051b2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4051c8
    uint32_t v6 = *v5; // 0x4051c8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4051cd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404b60(0, a1, a2, &v4);
}
// Address range: 0x4051f0 - 0x4051fd
int64_t function_4051f0(int64_t a1, int64_t a2) {
    // 0x4051f0
    return function_405180(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x405200 - 0x405211
int64_t function_405200(int64_t a1) {
    // 0x405200
    return function_405180(a1, -1, 58);
}
// Address range: 0x405220 - 0x40522a
int64_t function_405220(void) {
    // 0x405220
    int64_t v1; // 0x405220
    return function_405180(v1, v1, 58);
}
// Address range: 0x405230 - 0x40529e
int64_t function_405230(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40524a
    return function_404b60((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4052a0 - 0x40530c
int64_t function_4052a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g54); // 0x4052a7
    int128_t v2 = __asm_movdqa(g55); // 0x4052af
    int128_t v3 = __asm_movdqa(g56); // 0x4052b7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4052d9
    if (a2 == 0 || a3 == 0) {
        // 0x405307
        abort();
        // UNREACHABLE
    }
    // 0x4052ea
    return function_404b60(a1, a4, a5, &v4);
}
// Address range: 0x405310 - 0x405319
int64_t function_405310(void) {
    // 0x405310
    int64_t v1; // 0x405310
    return function_4052a0(v1, v1, v1, v1, -1);
}
// Address range: 0x405320 - 0x405337
int64_t function_405320(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405320
    return function_4052a0(0, a1, a2, a3, -1);
}
// Address range: 0x405340 - 0x405353
int64_t function_405340(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x405340
    return function_4052a0(0, a1, a2, a3, a4);
}
// Address range: 0x405360 - 0x40536a
int64_t function_405360(void) {
    // 0x405360
    int64_t v1; // 0x405360
    return function_404b60(v1, v1, v1, &g19);
}
// Address range: 0x405370 - 0x405382
int64_t function_405370(int64_t a1, int64_t a2) {
    // 0x405370
    return function_404b60(0, a1, a2, &g19);
}
// Address range: 0x405390 - 0x4053a1
int64_t function_405390(void) {
    // 0x405390
    int64_t v1; // 0x405390
    return function_404b60(v1, v1, -1, &g19);
}
// Address range: 0x4053b0 - 0x4053c6
int64_t function_4053b0(int64_t a1) {
    // 0x4053b0
    return function_404b60(0, a1, -1, &g19);
}
// Address range: 0x4053d0 - 0x4057ad
int64_t function_4053d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x405468
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4053ec
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x405406
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40544b
    if (a6 < 10) {
        // 0x40545a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405552
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4057b0 - 0x4057d0
int64_t function_4057b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4057b0
    if (a5 == 0) {
        // 0x4057cb
        return function_4053d0(a1, a2, a3, a4, a5, 0, (int64_t)&g66);
    }
    int64_t v1 = 0; // 0x4057b7
    v1++;
    int64_t v2 = v1; // 0x4057c9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4057c0
        v1++;
        v2 = v1;
    }
    // 0x4057cb
    return function_4053d0(a1, a2, a3, a4, a5, v2, (int64_t)&g66);
}
// Address range: 0x4057d0 - 0x405830
int64_t function_4057d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4057d0
    int64_t v3 = &v2; // 0x4057d0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x405803
    int64_t v6; // 0x4057ed
    int64_t * v7; // 0x40580b
    int64_t v8; // 0x40580b
    int64_t v9; // 0x405817
    if (v5 < 48) {
        // 0x4057e0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405823
            break;
        }
    } else {
        // 0x40580b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405823
            break;
        }
    }
    int64_t v10 = 10; // 0x405801
    while (v4 != 9) {
        // 0x4057f9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4057e0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405823
                break;
            }
        } else {
            // 0x40580b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405823
                break;
            }
        }
        // 0x4057f9
        v10 = 10;
    }
    // 0x405823
    return function_4053d0(a1, a2, a3, a4, v3, v10, (int64_t)&g66);
}
// Address range: 0x405830 - 0x4058ec
int64_t function_405830(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405830
    int64_t v1; // bp-168, 0x405830
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405830
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405830
    int64_t v8; // 0x405830
    int64_t v9; // bp-56, 0x405830
    int64_t v10; // 0x405895
    int64_t v11; // 0x4058b9
    if ((int32_t)v6 < 48) {
        // 0x405880
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4058d0
            break;
        }
    } else {
        // 0x4058b2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4058d0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4058aa
    int64_t v13 = 10; // 0x4058aa
    while (v5 != 9) {
        // 0x4058ac
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405880
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4058d0
                break;
            }
        } else {
            // 0x4058b2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4058d0
                break;
            }
        }
        // 0x4058a2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4058d0
    int64_t v14; // bp-136, 0x405830
    int64_t result = function_4053d0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g66); // 0x4058df
    return result;
}
// Address range: 0x4058f0 - 0x405964
int64_t function_4058f0(int64_t a1) {
    // 0x4058f0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405953
    return fputs_unlocked(v1, g29);
}
// Address range: 0x405970 - 0x40598a
int64_t function_405970(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405974
    if (size != 0 != (mem == NULL)) {
        // 0x405983
        return (int64_t)mem;
    }
    // 0x405985
    function_405bc0(size);
    // UNREACHABLE
}
// Address range: 0x405990 - 0x4059b1
int64_t function_405990(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405993
    int64_t v2 = v1; // 0x405993
    if (v2 < 0) {
        // 0x4059ab
        function_405bc0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4059a9
        return function_405970(v2);
    }
    // 0x4059ab
    function_405bc0(v2);
    // UNREACHABLE
}
// Address range: 0x4059c0 - 0x4059c2
int64_t function_4059c0(void) {
    // 0x4059c0
    int64_t v1; // 0x4059c0
    return function_405970(v1);
}
// Address range: 0x4059d0 - 0x405a06
int64_t function_4059d0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4059f8
        free(v1);
        return (int32_t)&g66 ^ (int32_t)&g66;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4059e1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4059f0
        return (int64_t)mem;
    }
    // 0x405a01
    function_405bc0(a1);
    // UNREACHABLE
}
// Address range: 0x405a10 - 0x405a31
int64_t function_405a10(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405a13
    int64_t v2 = v1; // 0x405a13
    if (v2 < 0) {
        // 0x405a2b
        function_405bc0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405a29
        return function_4059d0(a1, v2);
    }
    // 0x405a2b
    function_405bc0(a1);
    // UNREACHABLE
}
// Address range: 0x405a40 - 0x405ac6
int64_t function_405a40(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x405a9b
            function_405bc0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4059d0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405a83
    if (a2 == 0) {
        // 0x405aa8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405a88
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x405a9b
        function_405bc0(a1);
        // UNREACHABLE
    }
    // 0x405a6a
    *(int64_t *)a2 = v2;
    return function_4059d0(a1, v2 * a3);
}
// Address range: 0x405ad0 - 0x405b20
int64_t function_405ad0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405ad0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x405b1a
            function_405bc0(a1);
            // UNREACHABLE
        }
        // 0x405af2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4059d0(a1, v1);
    }
    if (a2 == 0) {
        // 0x405b05
        *(int64_t *)a2 = 128;
        return function_4059d0(0, 128);
    }
    // 0x405b18
    if (a2 < 0) {
        // 0x405b1a
        function_405bc0(a1);
        // UNREACHABLE
    }
    // 0x405af2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4059d0(a1, v1);
}
// Address range: 0x405b20 - 0x405b37
int64_t function_405b20(int64_t a1, int64_t a2) {
    // 0x405b20
    return (int64_t)memset((int64_t *)function_405970(a1), 0, (int32_t)a1);
}
// Address range: 0x405b40 - 0x405b6e
int64_t function_405b40(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405b47
    if ((int64_t)v1 < 0) {
        // 0x405b69
        function_405bc0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405b69
        function_405bc0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x405b5a
    if (mem != NULL) {
        // 0x405b64
        return (int64_t)mem;
    }
    // 0x405b69
    function_405bc0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405b70 - 0x405b98
int64_t function_405b70(int64_t a1, int64_t a2) {
    int64_t v1 = function_405970(a2); // 0x405b7f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405ba0 - 0x405bb3
int64_t function_405ba0(int64_t str) {
    // 0x405ba0
    return function_405b70(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405bc0 - 0x405bf1
int64_t function_405bc0(int64_t a1) {
    // 0x405bc0
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405c00 - 0x405c18
int64_t function_405c00(void) {
    // 0x405c00
    int64_t str; // 0x405c00
    char * v1 = strndup((char *)str, (int32_t)str); // 0x405c04
    if (v1 != NULL) {
        // 0x405c0e
        return (int64_t)v1;
    }
    // 0x405c13
    function_405bc0(str);
    // UNREACHABLE
}
// Address range: 0x405c20 - 0x405c9b
int64_t function_405c20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405c27
    if (fileno(stream) < 0) {
        // 0x405c87
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405c3a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405c6b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405c87
            return fclose(stream);
        }
    }
    // 0x405c3c
    if ((int32_t)function_405ca0(a1, v1) == 0) {
        // 0x405c87
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405c48
    int32_t v3 = *v2; // 0x405c50
    int64_t result = fclose(stream); // 0x405c5e
    if (v3 != 0) {
        // 0x405c90
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405c60
    return result;
}
// Address range: 0x405ca0 - 0x405ce0
int64_t function_405ca0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405cba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405cba
        return fflush(stream);
    }
    // 0x405cc8
    function_405d10(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405ce0 - 0x405d03
int64_t function_405ce0(int64_t a1, int64_t * a2) {
    // 0x405ce0
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x405d00
        return 0;
    }
    int64_t result = *(int64_t *)(a1 + 8); // 0x405cea
    int64_t v1 = *(int64_t *)(a1 + 16) - result; // 0x405cf2
    if (v1 == 0) {
        // 0x405d00
        return 0;
    }
    // 0x405cf7
    *a2 = v1;
    return result;
}
// Address range: 0x405d10 - 0x405d67
int64_t function_405d10(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405d10
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405d1a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405d4b
    int64_t result = -1; // 0x405d54
    if (v1 != -1) {
        // 0x405d56
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405d62
    return result;
}
// Address range: 0x405d70 - 0x405e4f
int64_t function_405d70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405d7c
    uint32_t v2 = *v1; // 0x405d7c
    int64_t v3 = a2 & 0xffffffff; // 0x405d81
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405d84
    uint64_t v5 = (int64_t)*v4; // 0x405d84
    int64_t v6; // 0x405df2
    if (v3 <= v5) {
      lab_0x405dec_2:
        // 0x405dec
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405d72
    int64_t v8 = v2; // 0x405d70
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x405dec
        goto lab_0x405dec_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405da8
    int64_t v17; // 0x405db6
    int64_t * v18; // 0x405dd0
    int64_t * v19; // 0x405dd3
    int64_t v20; // 0x405dde
    int64_t v21; // 0x405db6
    while ((v16 & 0xffffffff) > v10) {
        // 0x405db3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405dd0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405de7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x405dec
            goto lab_0x405dec_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x405dec
            goto lab_0x405dec_2;
        }
        // 0x405da2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x405e2b
    int64_t * v23 = (int64_t *)v22; // 0x405e30
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405e33
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405e30
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405e47
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x405d9d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x405dec
            goto lab_0x405dec_2;
        }
        // 0x405da2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405db3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405dd0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405de7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x405dec
                goto lab_0x405dec_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x405dec
                goto lab_0x405dec_2;
            }
            // 0x405da2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405e10
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405e30
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405e47
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x405dec
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405e50 - 0x40646c
int64_t function_405e50(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x405e6f
    int64_t v2 = *v1; // 0x405e6f
    char * str2 = (char *)v2; // 0x405e7c
    char c = *str2; // 0x405e7c
    int64_t v3 = v2; // 0x405ea8
    int64_t v4 = 0; // 0x405e50
    int32_t v5; // 0x405e50
    int64_t v6; // 0x405e50
    int64_t v7; // 0x405e50
    int64_t v8; // 0x405e50
    int64_t v9; // 0x405e50
    int64_t v10; // 0x405e50
    int64_t v11; // 0x405e50
    int64_t v12; // 0x405e50
    int64_t v13; // 0x405e50
    int64_t str3; // 0x405e50
    int64_t v14; // 0x405e50
    int64_t v15; // 0x405e50
    int64_t v16; // 0x405e50
    int64_t v17; // 0x405e50
    int32_t v18; // 0x405e50
    int32_t v19; // 0x405e50
    int32_t v20; // 0x405e50
    int32_t v21; // 0x405e50
    int32_t v22; // 0x405e50
    int32_t v23; // 0x405e50
    int32_t v24; // 0x405e50
    int32_t v25; // 0x405e50
    int32_t v26; // 0x405e50
    int32_t v27; // 0x405e50
    int32_t v28; // 0x405e50
    int32_t v29; // 0x405e50
    int64_t nmemb; // 0x405e50
    int64_t v30; // 0x405e50
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x405eac
            while (v31 != 0 == (v31 != 61)) {
                // 0x405ea8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405eb8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x405ebe
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405e88
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x405eec
                int64_t v34; // 0x405e50
                int64_t v35; // 0x405e50
                if (strncmp(str, str2, n) == 0) {
                    // 0x405ef5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406070;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405f06
                int64_t v37 = *(int64_t *)v36; // 0x405f0a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405ee0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405ef5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406070;
                        }
                    }
                    // 0x405f06
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
                  lab_0x405f56:
                    // 0x405f56
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
                        goto lab_0x405fb0;
                    } else {
                        if (v11 == 0) {
                            // 0x406120
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405fb0;
                        } else {
                            if (v39 == 0) {
                                // 0x4060d0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405f7a;
                                } else {
                                    // 0x4060dc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405f7a;
                                    } else {
                                        // 0x4060ea
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405f7a;
                                        } else {
                                            goto lab_0x405fb0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405f7a;
                            }
                        }
                    }
                }
              lab_0x405fc1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406196
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x406342
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x406362
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4063af
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x4063c9
                            int64_t v45; // 0x4063cb
                            if (*(char *)v42 != 0) {
                                // 0x4063cb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4063c3
                            while (v17 + nmemb != v42) {
                                // 0x4063c5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4063cb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x4063b8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x4063f0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x4061a4
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x4062ff
                        free((int64_t *)v17);
                    }
                    // 0x4061f9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x406210
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4060be
                    return 63;
                }
                // 0x405fe0
                v5 = v39;
                if (v13 != 0) {
                    // 0x406064
                    v35 = v13;
                    v34 = v25;
                  lab_0x406070:;
                    int32_t * v49 = (int32_t *)a7; // 0x406080
                    uint32_t v50 = *v49; // 0x406080
                    int64_t v51 = v50; // 0x406080
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40608a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406093
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4062bf
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40626a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4060be
                            return 63;
                        }
                        // 0x406108
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40641f
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40631d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x406330
                                // 0x4060be
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40622e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x406242
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4060ab
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4060ae
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4060b2
                    int64_t result = v59; // 0x4060b8
                    if (v58 != 0) {
                        // 0x4060ba
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4060be
                    return result;
                }
            } else {
                // 0x405ebe
                v5 = v32;
            }
            // break -> 0x405fe5
            break;
        }
    }
    // 0x405fe5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405ffd
        if (*(char *)(v60 + 1) != 45) {
            // 0x406007
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4060be
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x406149
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x406036
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x406046
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405fb0:
    // 0x405fb0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405fb0
    int64_t v63 = *(int64_t *)v62; // 0x405fb4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405fc1
        goto lab_0x405fc1;
    }
    goto lab_0x405f56;
  lab_0x405f7a:
    // 0x405f7a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405e50
    int32_t v65; // 0x405e50
    int32_t v66; // 0x405e50
    if (v27 != 0) {
        goto lab_0x405fb0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x406130
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405fb0;
            } else {
                goto lab_0x405fa1;
            }
        } else {
            // 0x405f95
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40628c
                int64_t v67 = (int64_t)mem; // 0x40628c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405fb0;
                } else {
                    // 0x40629f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405fa1;
                }
            } else {
                goto lab_0x405fa1;
            }
        }
    }
  lab_0x405fa1:
    // 0x405fa1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405fb0;
}
// Address range: 0x406470 - 0x406a36
int64_t function_406470(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406491
    if (v3 < 1) {
        // 0x40664e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40648d
    int32_t v5 = *(int32_t *)a7; // 0x406499
    uint64_t v6 = a1 & 0xffffffff; // 0x40649b
    int64_t v7 = v2; // 0x4064a0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4064a3
    *v8 = 0;
    int64_t v9; // 0x406470
    int64_t v10; // 0x406470
    int64_t v11; // 0x406470
    int64_t v12; // 0x406470
    int64_t str; // 0x406470
    int64_t v13; // 0x406470
    int64_t v14; // 0x406470
    int64_t v15; // 0x406470
    int64_t v16; // 0x406470
    int64_t v17; // 0x406470
    int32_t v18; // 0x406470
    char v19; // 0x406470
    if (v5 == 0) {
        // 0x406688
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4064ba;
    } else {
        // 0x4064b3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x406500
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x406503
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x4065c8;
            } else {
                int64_t v22 = v7 + 1; // 0x406516
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x406526
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4065dc;
                } else {
                    goto lab_0x406538;
                }
            }
        } else {
            goto lab_0x4064ba;
        }
    }
  lab_0x4064ba:
    // 0x4064ba
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4064c0
    *v24 = 0;
    int64_t v25; // 0x406470
    int64_t v26; // 0x406470
    int64_t v27; // 0x406470
    switch (*(char *)&v2) {
        case 45: {
            // 0x4065b0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4065bd;
        }
        case 43: {
            // 0x4068c0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x4065bd;
        }
        default: {
            // 0x4064dc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40683f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406958
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x4065bd;
                } else {
                    // 0x40684d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4064ea;
                }
            } else {
                goto lab_0x4064ea;
            }
        }
    }
  lab_0x4065c8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x4065cf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406538;
    } else {
        goto lab_0x4065dc;
    }
  lab_0x4064ea:
    // 0x4064ea
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x4065bd;
  lab_0x4065bd:
    // 0x4065bd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x4065c8;
  lab_0x406538:;
    uint32_t v30 = *(int32_t *)a7; // 0x406538
    int64_t v31 = v30; // 0x406538
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40653a
    if ((int64_t)*v32 > v31) {
        // 0x40653f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406542
    if (*v33 > v30) {
        // 0x406547
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40654a
    int64_t v35 = v31; // 0x40654e
    int64_t v36 = v15; // 0x40654e
    int64_t v37; // 0x406470
    int64_t v38; // 0x406470
    int64_t v39; // 0x406470
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x4066b8
        int64_t v41 = v40; // 0x4066b8
        v2 = v41;
        int64_t v42; // 0x406470
        if (*v33 == v40) {
            // 0x4068a0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4068a8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x4066c4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4066c8
                function_405d70(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4066d8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4066e1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4066ea
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406701
            int64_t v47 = v45 & 0xffffffff; // 0x406705
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40670e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406714
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406716;
                }
            }
            int64_t v48 = v47 + 1; // 0x4066f0
            int64_t v49 = v48 & 0xffffffff; // 0x4066f0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406701
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40670e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406714
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406716;
                    }
                }
                // 0x4066f0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4068b8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406716;
    } else {
        goto lab_0x406554;
    }
  lab_0x4065dc:
    // 0x4065dc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4065df
    int64_t v51 = v12; // 0x4065df
    int64_t v52 = v14; // 0x4065df
    if (*(char *)v10 == 0) {
        goto lab_0x406538;
    } else {
        goto lab_0x4065e5;
    }
  lab_0x406554:;
    int32_t v53 = v35; // 0x406554
    int64_t v54; // 0x406470
    int64_t v55; // 0x406470
    int64_t v56; // 0x406470
    int64_t v57; // 0x406470
    int64_t v58; // 0x406470
    int64_t v59; // 0x406470
    char * v60; // 0x406470
    int64_t v61; // 0x406470
    int64_t v62; // 0x406569
    int64_t v63; // 0x406470
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x4066a3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x4066a6;
    } else {
        // 0x40655c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406470
        int64_t v66 = v65 ? -1 : 1; // 0x406570
        int64_t v67 = (int64_t)"--"; // 0x406470
        int64_t v68 = v62; // 0x406470
        int64_t v69 = 3; // 0x406570
        unsigned char v70 = *(char *)v68; // 0x406570
        char v71 = *(char *)v67; // 0x406570
        char v72 = v71; // 0x406570
        bool v73 = false; // 0x406570
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
            // 0x406660
            if (*(char *)v62 == 45) {
                // 0x406720
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406720
                if (c == 0) {
                    goto lab_0x40666a;
                } else {
                    // 0x40672d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4067b0;
                    } else {
                        if (c == 45) {
                            // 0x406993
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406805;
                        } else {
                            // 0x40673e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4067b0;
                            } else {
                                // 0x406743
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406764;
                                } else {
                                    // 0x40674a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4067b0;
                                    } else {
                                        goto lab_0x406764;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40666a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406580
            v2 = v75;
            int32_t v76 = *v32; // 0x406583
            int64_t v77 = v35 + 1; // 0x406586
            int32_t v78 = v77; // 0x406589
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4068f0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406597
                    function_405d70(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x4065a5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x4066a6;
        }
    }
  lab_0x4065e5:;
    // 0x4065e5
    int64_t v79; // bp-104, 0x406470
    int64_t v80 = &v79; // 0x40647a
    int64_t v81 = v50 + 1; // 0x4065e5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4065ec
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4065f1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4065f5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4065f9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x406601
    *v86 = v84;
    char * str2 = (char *)v52; // 0x406606
    int32_t c2 = v84; // 0x406606
    char * found_char_pos = strchr(str2, c2); // 0x406606
    int64_t v87 = *v82; // 0x40660b
    v2 = v87;
    int64_t v88 = *v85; // 0x406615
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x406620
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406910
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4068dd
        *(int32_t *)(v1 + 8) = c2;
        // 0x40664e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x406606
    char v91 = *(char *)(v90 + 1); // 0x40663b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4065f5
        if (v91 != 58) {
            // 0x40664e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406864
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406968
                *v8 = 0;
            } else {
                // 0x40694c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40688e
            *v83 = 0;
            // 0x40664e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40686e
        if (v93 != 0) {
            // 0x406900
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40688e
            *v83 = 0;
            // 0x40664e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406881
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40688e
            *v83 = 0;
            // 0x40664e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4069ca
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40697a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406981
        // 0x40688e
        *v83 = 0;
        // 0x40664e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4067d9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4067db
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406a00
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4069b1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4069b8
            // 0x40664e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4067e6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4067ea
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406805;
  lab_0x406716:
    // 0x406716
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406554;
  lab_0x406805:;
    int64_t v99 = function_405e50(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406823
    // 0x40664e
    return v99 & 0xffffffff;
  lab_0x4066a6:;
    int32_t v100 = v55; // 0x4066a6
    if (v100 != (int32_t)v59) {
        // 0x4066aa
        *(int32_t *)a7 = v100;
    }
    // 0x40664e
    return 0xffffffff;
  lab_0x40666a:
    // 0x40666a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406671
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40664e
    return v99 & 0xffffffff;
  lab_0x4067b0:
    // 0x4067b0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4065e5;
  lab_0x406764:
    // 0x406764
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405e50(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40678a
    if ((int32_t)v101 != -1) {
        // 0x40664e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40679f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4067b0;
}
// Address range: 0x406a40 - 0x406a96
int64_t function_406a40(int64_t a1) {
    // 0x406a40
    *(int32_t *)&g57 = g26;
    *(int32_t *)&g58 = g25;
    int64_t v1; // 0x406a40
    int64_t result = function_406470(v1, v1, v1, v1, v1, v1, &g57, a1 & 0xffffffff); // 0x406a66
    g26 = *(int32_t *)&g57;
    g64 = (char *)g60;
    *(int32_t *)&g24 = g59;
    return result;
}
// Address range: 0x406aa0 - 0x406ab8
int64_t function_406aa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406aa0
    return function_406a40(1);
}
// Address range: 0x406ac0 - 0x406ad3
int64_t function_406ac0(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x406ac0
    return function_406a40(0);
}
// Address range: 0x406ae0 - 0x406af5
int64_t function_406ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406ae0
    return function_406470(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406b00 - 0x406b16
int64_t function_406b00(void) {
    // 0x406b00
    return function_406a40(0);
}
// Address range: 0x406b20 - 0x406b38
int64_t function_406b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406b20
    return function_406470(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406b40 - 0x406bba
int64_t function_406b40(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x406b4b
    int64_t v2 = (int64_t)&g9; // 0x406b4b
    int32_t * pwc; // 0x406b40
    int64_t v3; // 0x406b40
    int64_t n; // 0x406b40
    if (a2 == 0) {
        goto lab_0x406b92;
    } else {
        // 0x406b4d
        if (a3 == 0) {
            // 0x406b78
            return -2;
        }
        // 0x406b59
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406b92;
        } else {
            goto lab_0x406b64;
        }
    }
  lab_0x406b92:
    // 0x406b92
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406b40
    pwc = (int32_t *)&v4;
    goto lab_0x406b64;
  lab_0x406b64:;
    char * wstr = (char *)v3; // 0x406b6a
    int64_t ps; // 0x406b40
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x406b6a
    int64_t result = v5; // 0x406b6a
    if (v5 < 0xfffffffe) {
        // 0x406b78
        return result;
    }
    int64_t result2 = result; // 0x406ba9
    if ((char)function_406e80(0, v3) == 0) {
        // 0x406bab
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406b78
    return result2;
}
// Address range: 0x406bc0 - 0x406cc4
int64_t function_406bc0(int64_t result, uint64_t a2, int64_t a3) {
    // 0x406bc0
    if (a3 == 0) {
        // 0x406bf9
        return 0;
    }
    int64_t v1 = result; // 0x406bcc
    int64_t v2 = a3; // 0x406bcc
    int64_t result2; // 0x406bc0
    if (result % 8 != 0) {
        char v3 = a2; // 0x406bce
        int64_t v4 = result; // 0x406bd1
        if ((char)result == v3) {
            // 0x406bf9
            return result;
        }
        int64_t v5 = a3; // 0x406bd1
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x406be0
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x406c00;
            }
            // 0x406be6
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x406bf9
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x406bf9
        return result2;
    }
  lab_0x406c00:;
    int64_t result3 = v1; // 0x406c2d
    int64_t v6 = v2; // 0x406c2d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x406c0f
        int64_t v8 = 0x10000 * v7 | v7; // 0x406c1c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x406c26
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x406c46
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x406c75
            int64_t v12 = v1 + 8; // 0x406c79
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x406c63
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x406c8c;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x406c83
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x406bf9
                return 0;
            }
        }
    }
  lab_0x406c8c:;
    char v14 = a2; // 0x406c8c
    if (*(char *)result3 == v14) {
        // 0x406bf9
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x406ca0
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x406bf9
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x406bf9
    return result2;
}
// Address range: 0x406cd0 - 0x406d2d
int64_t function_406cd0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406cd7
    int64_t v2; // 0x406cd0
    int64_t result = function_405c20(a1, v2); // 0x406ce8
    if ((v2 & 32) != 0) {
        // 0x406d10
        if ((int32_t)result == 0) {
            // 0x406d14
            *__errno_location() = 0;
        }
        // 0x406d0a
        return 0xffffffff;
    }
    // 0x406cf1
    if ((int32_t)result == 0) {
        // 0x406d0a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406cf8
    if (v1 == 0) {
        // 0x406cfa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x406d0a
    return result2;
}
// Address range: 0x406d30 - 0x406e80
int64_t function_406d30(int64_t a1, int64_t a2) {
    // 0x406d30
    if (a2 == 0) {
        // 0x406dce
        return 0;
    }
    int64_t v1 = function_407450(a1); // 0x406d50
    struct _IO_FILE * stream; // 0x406d30
    struct _IO_FILE * stream3; // 0x406d30
    int64_t v2; // 0x406d30
    int64_t v3; // bp-4136, 0x406d30
    if (v1 == 0) {
        // 0x406d3b
        stream = (struct _IO_FILE *)a1;
        v2 = a2;
      lab_0x406e00_2:;
        int32_t fd = fileno(stream); // 0x406e03
        if (fd >= 0) {
            // 0x406e58
            if (lseek(fd, 0, SEEK_CUR) >= 0) {
                // 0x406dce
                return function_405d10(a1, (int32_t)v2, 1);
            }
        }
        uint64_t v4 = v2;
        uint64_t v5 = v4 < 0x1000 ? v4 : 0x1000; // 0x406e35
        int32_t v6 = __fread_chk(&v3, 0x1000, 1, (int32_t)v5, stream); // 0x406e46
        stream3 = stream;
        while (v5 <= (int64_t)v6) {
            int64_t v7 = v4 - v5; // 0x406e20
            if (v7 == 0) {
                // 0x406dce
                return 0;
            }
            v4 = v7;
            v5 = v4 < 0x1000 ? v4 : 0x1000;
            v6 = __fread_chk(&v3, 0x1000, 1, (int32_t)v5, stream);
            stream3 = stream;
        }
    } else {
        int64_t * v8 = (int64_t *)(a1 + 8);
        struct _IO_FILE * stream2 = (struct _IO_FILE *)a1;
        int64_t v9 = a2;
        int64_t v10 = function_405ce0(a1, &v3); // 0x406d86
        int64_t v11 = v9; // 0x406d8e
        int64_t v12 = v1; // 0x406d8e
        int64_t v13; // 0x406d9c
        int64_t v14; // 0x406da5
        int64_t v15; // 0x406daa
        uint64_t v16; // 0x406d90
        if (v10 != 0) {
            // 0x406d90
            v16 = v3;
            v11 = v9;
            v12 = v1;
            if (v16 != 0) {
                // 0x406d99
                v13 = v16 > v9 ? v9 : v16;
                *v8 = *v8 + v13;
                v14 = v9 - v13;
                if (v14 == 0) {
                    // 0x406dce
                    return 0;
                }
                // 0x406daa
                v15 = v1 - v13;
                v11 = v14;
                v12 = v15;
                stream = stream2;
                v2 = v14;
                if (v15 == 0) {
                    goto lab_0x406e00_2;
                }
            }
        }
        int32_t c = fgetc(stream2); // 0x406db2
        stream3 = stream2;
        while (c != -1) {
            int64_t v17 = v11 - 1; // 0x406d70
            if (v17 == 0) {
                // 0x406dce
                return 0;
            }
            int64_t v18 = v12 - 1; // 0x406d76
            stream = stream2;
            v2 = v17;
            if (v18 == 0) {
                goto lab_0x406e00_2;
            }
            int64_t v19 = v18;
            v9 = v17;
            v10 = function_405ce0(a1, &v3);
            v11 = v9;
            v12 = v19;
            if (v10 != 0) {
                // 0x406d90
                v16 = v3;
                v11 = v9;
                v12 = v19;
                if (v16 != 0) {
                    // 0x406d99
                    v13 = v16 > v9 ? v9 : v16;
                    *v8 = *v8 + v13;
                    v14 = v9 - v13;
                    if (v14 == 0) {
                        // 0x406dce
                        return 0;
                    }
                    // 0x406daa
                    v15 = v19 - v13;
                    v11 = v14;
                    v12 = v15;
                    stream = stream2;
                    v2 = v14;
                    if (v15 == 0) {
                        goto lab_0x406e00_2;
                    }
                }
            }
            // 0x406daf
            c = fgetc(stream2);
            stream3 = stream2;
        }
    }
    // 0x406dce
    return ferror(stream3) != 0 ? 0xffffffff : 0;
}
// Address range: 0x406e80 - 0x406ede
int64_t function_406e80(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406e86
    if (locale == NULL) {
        // 0x406eb3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406e86
    bool v2; // 0x406e80
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x406e80
    int64_t v5 = v1; // 0x406e80
    int64_t v6 = 2; // 0x406ea5
    unsigned char v7 = *(char *)v5; // 0x406ea5
    char v8 = *(char *)v4; // 0x406ea5
    char v9 = v8; // 0x406ea5
    bool v10 = false; // 0x406ea5
    while (v7 == v8) {
        // 0x406e98
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406eb1
    int64_t v13 = v1; // 0x406eb1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406eb3
        return 0;
    }
    int64_t v14 = 6; // 0x406eb1
    unsigned char v15 = *(char *)v13; // 0x406ecd
    char v16 = *(char *)v12; // 0x406ecd
    char v17 = v16; // 0x406ecd
    bool v18 = false; // 0x406ecd
    while (v15 == v16) {
        // 0x406ec0
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
// Address range: 0x406ee0 - 0x407442
int64_t function_406ee0(void) {
    char * v1 = nl_langinfo(14); // 0x406ef6
    char * v2 = g61; // 0x406efb
    char * v3; // 0x406ee0
    int64_t v4; // 0x406ee0
    int64_t v5; // 0x406ee0
    int64_t v6; // 0x406ee0
    int64_t v7; // 0x406ee0
    int32_t size; // 0x406ee0
    int32_t size2; // 0x406ee0
    int32_t len; // 0x406fb2
    int64_t v8; // 0x406fb2
    char * env_val; // 0x406f9d
    if (v2 == NULL) {
        // 0x406f98
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x407005;
        } else {
            // 0x406faa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x407005;
            } else {
                // 0x406faf
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x406f9d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407435
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x407005;
                    } else {
                        // 0x4073a9
                        size2 = len + 14;
                        goto lab_0x406fcb;
                    }
                } else {
                    goto lab_0x406fcb;
                }
            }
        }
    } else {
        // 0x406ee0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x406f1a;
    }
  lab_0x40724c:;
    // 0x40724c
    struct _IO_FILE * stream; // 0x40708b
    int32_t v10 = __uflow(stream); // 0x40724f
    int64_t v11; // 0x406ee0
    int64_t v12 = v11; // 0x407259
    int64_t v13; // 0x406ee0
    int64_t v14 = v13; // 0x407259
    int32_t v15 = v10; // 0x407259
    int64_t v16; // 0x406ee0
    int64_t v17 = v16; // 0x407259
    int64_t v18 = v11; // 0x407259
    int64_t v19 = v13; // 0x407259
    int64_t v20 = v16; // 0x407259
    if (v10 == -1) {
        // break -> 0x40725f
        goto lab_0x40725f;
    }
    goto lab_0x4070d9;
  lab_0x4070ce:;
    // 0x4070ce
    int64_t v90; // 0x406ee0
    int64_t * v32; // 0x4070c0
    *v32 = v90 + 1;
    int64_t v89; // 0x406ee0
    v12 = v89;
    int64_t v91; // 0x406ee0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406ee0
    v17 = v92;
    goto lab_0x4070d9;
  lab_0x4070d9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406ee0
    int32_t v25; // bp-120, 0x406ee0
    int32_t v26; // bp-184, 0x406ee0
    int64_t v27; // 0x40708b
    int64_t v28; // 0x4070a8
    int64_t v29; // 0x4070ad
    int64_t * v30; // 0x4070c4
    switch (c) {
        case 32: {
            goto lab_0x4070c0;
        }
        case 10: {
            goto lab_0x4070c0;
        }
        case 9: {
            goto lab_0x4070c0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4072b1
            int32_t v33; // 0x406ee0
            char v34; // 0x406ee0
            int32_t v35; // 0x4072be
            if (v31 < *v30) {
                // 0x407290
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4072bb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4072b1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x407290
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4072bb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4072a0
                v36 = v33;
            }
            // 0x40738f
            if (v36 == -1) {
                // break -> 0x40725f
                break;
            }
            goto lab_0x4070c0;
        }
        default: {
            // 0x4070ef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40725f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x407118
            int64_t v39 = v37 + 4; // 0x40711a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x407126
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x407128
            while (v41 == 0) {
                // 0x407118
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x407146
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x407152
            int64_t v45 = v43 + 4; // 0x407154
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x407160
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x407162
            while (v47 == 0) {
                // 0x407152
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40714f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x407178
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x407188
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40718c
            int64_t v52 = v51 + v48; // 0x407195
            int64_t * mem; // 0x406ee0
            int64_t v53; // 0x406ee0
            int64_t v54; // 0x406ee0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4072cb
                int64_t v56 = v55 + 3; // 0x4072d7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4071b1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4071c0
            if (mem == NULL) {
                // 0x4073ec
                free((int64_t *)v21);
                function_405c20(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x407064;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4071d8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4071e2
            uint32_t v62 = (int32_t)v59; // 0x4071e5
            int64_t v63; // 0x406ee0
            if (v62 >= 8) {
                // 0x4072f4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40730e
                int64_t v66 = v61 - v65; // 0x407312
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40731d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40732e
                    int64_t v70 = v69 & 0xffffffff; // 0x40732e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40732b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4073bf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4071f7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4071fb
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
            int64_t v73 = v51 + 1; // 0x40720b
            int64_t v74 = v60 - 1; // 0x40720f
            uint32_t v75 = (int32_t)v73; // 0x407214
            int64_t v76; // 0x406ee0
            if (v75 >= 8) {
                // 0x407342
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40734c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40735c
                int64_t v80 = v74 - v79; // 0x407360
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40736b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40737b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x407379
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x4073d6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x4073de
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x407226
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40722a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407423
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40723e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4070ce;
            } else {
                goto lab_0x40724c;
            }
        }
    }
  lab_0x4070c0:;
    int64_t v93 = v23; // 0x406ee0
    int64_t v94 = v22; // 0x406ee0
    int64_t v95 = v21; // 0x406ee0
    goto lab_0x4070c0_2;
  lab_0x407005:;
    int64_t * mem3 = malloc(size); // 0x407005
    int64_t v97 = (int64_t)&g9; // 0x407010
    int64_t v98; // 0x406ee0
    int64_t path; // 0x406ee0
    if (mem3 == NULL) {
        goto lab_0x406fe2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x407005
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x407026;
    }
  lab_0x406f1a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x406f0d
    char v100 = *v3; // 0x406f1a
    int64_t v101; // 0x406ee0
    if (v100 == 0) {
        // 0x406f74
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406ee0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406ee0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406f60
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406f67;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406f30
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406f3d
        char v107 = *(char *)v106; // 0x406f42
        v102 = v107;
        if (v107 == 0) {
            // 0x406f74
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x406f4b
    v104 = v103 + 1;
  lab_0x406f67:
    // 0x406f74
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406fe2:;
    char * v108 = (char *)v97;
    g61 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x406f1a;
  lab_0x407026:;
    int64_t v109 = v98 + path; // 0x407026
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x407052
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x407081
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4073b2
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x4070a5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4070c0_2:;
                uint64_t v96 = *v32; // 0x4070c0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40724c;
                } else {
                    goto lab_0x4070ce;
                }
            }
          lab_0x40725f:
            // 0x40725f
            function_405c20(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x40727e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x407064;
  lab_0x406fcb:;
    int64_t * mem4 = malloc(size2); // 0x406fcb
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x407071
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x407026;
    } else {
        goto lab_0x406fe2;
    }
  lab_0x407064:
    // 0x407064
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406fe2;
}
// Address range: 0x407450 - 0x407478
int64_t function_407450(int64_t a1) {
    // 0x407450
    if (*(int64_t *)(a1 + 40) > *(int64_t *)(a1 + 32)) {
        // 0x407477
        return 0;
    }
    int64_t v1 = *(int64_t *)(a1 + 16) - *(int64_t *)(a1 + 8); // 0x407460
    int64_t result = v1; // 0x40746a
    if ((a1 & 256) != 0) {
        // 0x40746c
        result = *(int64_t *)(a1 + 88) + v1 - *(int64_t *)(a1 + 72);
    }
    // 0x407477
    return result;
}
// Address range: 0x407480 - 0x4074dd
int64_t function_407480(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407480
    return function_401600();
}
// Address range: 0x4074e0 - 0x4074e1
int64_t function_4074e0(void) {
    // 0x4074e0
    int64_t result; // 0x4074e0
    return result;
}
// Address range: 0x4074f0 - 0x407508
int64_t function_4074f0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4074f0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x407508 - 0x407528
int64_t function_407508(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x407512
    while (*(int64_t *)v1 != -1) {
        // 0x407513
        v1 -= 8;
    }
    // 0x407524
    return result;
}
