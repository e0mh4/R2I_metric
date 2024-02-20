#include "decompile_retdec.h"
// Address range: 0x401710 - 0x401715
int64_t function_401710(void) {
    // 0x401710
    abort();
    // UNREACHABLE
}
// Address range: 0x401715 - 0x40171a
int64_t function_401715(void) {
    // 0x401715
    abort();
    // UNREACHABLE
}
// Address range: 0x40171a - 0x40171f
int64_t function_40171a(void) {
    // 0x40171a
    abort();
    // UNREACHABLE
}
// Address range: 0x40171f - 0x401724
int64_t function_40171f(void) {
    // 0x40171f
    abort();
    // UNREACHABLE
}
// Address range: 0x401724 - 0x401729
int64_t function_401724(void) {
    // 0x401724
    abort();
    // UNREACHABLE
}
// Address range: 0x401729 - 0x40172e
int64_t function_401729(void) {
    // 0x401729
    abort();
    // UNREACHABLE
}
// Address range: 0x401730 - 0x401a68
int64_t function_401730(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x40173c
    function_402a40(a2);
    setlocale(LC_ALL, (char *)&g3);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g46 = function_402800(3, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    function_406910(0x402680, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g45 = 1;
    g44 = 1;
    g43 = 1;
    g42 = 0;
    *(int16_t *)&g40 = 0;
    g38 = 0;
    g39 = 0;
    int64_t v3; // 0x401730
    while (true) {
      lab_0x4017d0_2:;
        // 0x4017d0
        int64_t v4; // 0x401730
        int32_t v5 = function_405ff0(v2 & 0xffffffff, a2, "123z", &g4, 0, v4);
        switch (v5) {
            case -1: {
                goto lab_0x40196f;
            }
            case 51: {
                // 0x401950
                g43 = 0;
                goto lab_0x4017d0_2;
            }
            default: {
                if (v5 > 51) {
                    if (v5 == 129) {
                        // 0x401960
                        g38 = 2;
                    } else {
                        if (v5 > 129) {
                            if (v5 != 130) {
                                if (v5 != 131) {
                                    // 0x4019fb
                                    function_402220(1);
                                    // UNREACHABLE
                                }
                                // 0x4018db
                                g39 = 1;
                            } else {
                                // 0x40186f
                                if (g37 != 0) {
                                    // 0x401880
                                    if (strcmp((char *)g18, g60) != 0) {
                                        // 0x401a05
                                        error(1, (int32_t)"multiple output delimiters specified" ^ (int32_t)"multiple output delimiters specified", dcgettext(NULL, "multiple output delimiters specified", 5));
                                        v3 = &g62;
                                        goto lab_0x401a27;
                                    }
                                }
                                int64_t v6 = (int64_t)g60; // 0x401877
                                *(int64_t *)&g18 = v6;
                                int64_t v7 = v6; // 0x4018a8
                                int64_t v8 = 1; // 0x4018a8
                                if (*g60 != 0) {
                                    int64_t v9 = -1; // 0x4018b2
                                    int64_t v10 = 0; // 0x4018b2
                                    while (v9 != 0) {
                                        int64_t v11 = v7;
                                        v9--;
                                        bool v12; // 0x401730
                                        v7 = v11 + (v12 ? -1 : 1);
                                        v10 = v9;
                                        if (*(char *)v11 == 0) {
                                            // break -> 
                                            break;
                                        }
                                        v10 = 0;
                                    }
                                    v8 = -2 - v10;
                                }
                                // 0x4018be
                                g37 = v8;
                            }
                        } else {
                            if (v5 != 122) {
                                if (v5 != 128) {
                                    // 0x4019fb
                                    function_402220(1);
                                    // UNREACHABLE
                                }
                                // 0x401853
                                g38 = 1;
                            } else {
                                // 0x40180d
                                g19 = 0;
                            }
                        }
                    }
                } else {
                    if (v5 == -130) {
                        // 0x4019c5
                        function_402220(0);
                        // UNREACHABLE
                    }
                    if (v5 <= 0xffffff7e) {
                        if (v5 == -131) {
                            // 0x401913
                            function_404af0((int64_t)g31, "comm", "GNU coreutils", (int64_t)g20, "Richard M. Stallman", "David MacKenzie");
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x4019fb;
                    }
                    if (v5 != 49) {
                        if (v5 != 50) {
                            // 0x4019fb
                            function_402220(1);
                            // UNREACHABLE
                        }
                        // 0x4018f9
                        g44 = 0;
                    } else {
                        // 0x40183a
                        g45 = 0;
                    }
                }
                goto lab_0x4017d0_2;
            }
        }
    }
  lab_0x40196f:
    // 0x40196f
    if (g37 == 0) {
        // 0x401979
        g37 = 1;
    }
    int32_t v13 = *(int32_t *)0x60a27c; // 0x401984
    int64_t v14 = v13; // 0x401984
    uint32_t v15 = (int32_t)v2 - v13; // 0x40198d
    v3 = v14;
    if (v15 >= 2) {
        int64_t v16 = 8 * v14 + a2;
        if (v15 == 2) {
            // 0x40199d
            function_401ca0(v16);
            return g40 != 0 ? 1 : (int64_t)g41;
        }
        // 0x4019cc
        function_404660(*(int64_t *)(v16 + 16));
        // 0x4019e3
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"extra operand %s", 5));
      lab_0x4019fb:
        // 0x4019fb
        function_402220(1);
        // UNREACHABLE
    }
    goto lab_0x401a27;
  lab_0x401a27:
    // 0x401a27
    if (v3 >= v2) {
        // 0x401a2b
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", dcgettext(NULL, "missing operand", 5));
        // 0x4019fb
        function_402220(1);
        // UNREACHABLE
    }
    // 0x401a4c
    function_404660(*(int64_t *)(a2 - 8 + (v1 >> 29)));
    // 0x4019e3
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"missing operand after %s", 5));
    // 0x4019fb
    function_402220(1);
    // UNREACHABLE
}
// Address range: 0x401a70 - 0x401a9b
// Address range: 0x401a9b - 0x401aba
int64_t function_401a9b(void) {
    // 0x401a9b
    return &g30;
}
// Address range: 0x401aba - 0x401af1
int64_t function_401aba(void) {
    // 0x401aba
    return 0;
}
// Address range: 0x401af1 - 0x401b48
int64_t function_401af1(void) {
    // 0x401af1
    if (g35 != 0) {
        // 0x401b47
        int64_t result; // 0x401af1
        return result;
    }
    int64_t v1 = g36; // 0x401b24
    int64_t result2; // 0x401b36
    if (g36 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401b36
        result2 = function_401a9b();
        g35 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401b26
        v1++;
    }
    // 0x401b1a
    g36 = v1;
    // 0x401b36
    result2 = function_401a9b();
    g35 = 1;
    return result2;
}
// Address range: 0x401b48 - 0x401b4d
int64_t function_401b48(void) {
    // 0x401b48
    return function_401aba();
}
// Address range: 0x401b50 - 0x401c09
int64_t function_401b50(int64_t n, int64_t data, int64_t stream, int64_t a4) {
    // 0x401b50
    int64_t result; // 0x401b50
    int32_t result2; // 0x401b84
    switch ((int32_t)a4) {
        case 2: {
            // 0x401bd0
            if (g44 == 0) {
                // 0x401bd9
                return result;
            }
            // 0x401be0
            if (g45 == 0) {
                // 0x401b70
                result2 = fwrite_unlocked((int64_t *)data, 1, (int32_t)n, (struct _IO_FILE *)stream);
                return result2;
            }
            // break -> 0x401be9
            break;
        }
        case 3: {
            // 0x401b90
            if (g43 == 0) {
                // 0x401bd9
                return result;
            }
            int64_t data2 = data; // 0x401ba0
            int64_t n2 = n; // 0x401ba0
            if (g45 != 0) {
                // 0x401ba2
                fwrite_unlocked(g18, 1, g37, (struct _IO_FILE *)stream);
                data2 = 1;
                n2 = (int64_t)g18;
            }
            // 0x401bbd
            if (g44 == 0) {
                // 0x401b70
                result2 = fwrite_unlocked((int64_t *)data2, 1, (int32_t)n2, (struct _IO_FILE *)stream);
                return result2;
            }
            // break -> 0x401be9
            break;
        }
        default: {
            // 0x401b67
            if (g45 == 0) {
                // 0x401bd9
                return result;
            }
            // 0x401b70
            result2 = fwrite_unlocked((int64_t *)data, 1, (int32_t)n, (struct _IO_FILE *)stream);
            return result2;
        }
    }
    // 0x401be9
    fwrite_unlocked(g18, 1, g37, (struct _IO_FILE *)stream);
    // 0x401b70
    result2 = fwrite_unlocked((int64_t *)1, 1, (int32_t)(int64_t)g18, (struct _IO_FILE *)stream);
    return result2;
}
// Address range: 0x401c10 - 0x401c97
int64_t function_401c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    char * v1 = (char *)((0x100000000 * a5 - 0x100000000 >> 32) + 0x60a2c5); // 0x401c1d
    int64_t result; // 0x401c10
    if (*v1 != 0) {
        // 0x401c88
        return result;
    }
    int64_t v2 = a1 - 1; // 0x401c38
    int64_t v3 = a3 - 1; // 0x401c3f
    int64_t v4; // 0x401c10
    if (g46 != 0) {
        // 0x401c90
        v4 = function_404f80(a1, v2, a3, v3);
    } else {
        // 0x401c4c
        v4 = function_402a00(a1, v2, a3, v3);
    }
    // 0x401c51
    result = v4;
    if ((int32_t)v4 >= 1) {
        // 0x401c55
        error((int32_t)(g38 == 1), (int32_t)"file %d is not in sorted order" ^ (int32_t)"file %d is not in sorted order", dcgettext(NULL, "file %d is not in sorted order", 5));
        *v1 = 1;
        result = &g62;
    }
    // 0x401c88
    return result;
}
// Address range: 0x401ca0 - 0x402220
int64_t function_401ca0(int64_t a1) {
    // 0x401ca0
    char * v1; // bp-520, 0x401ca0
    int64_t v2 = (int64_t)&v1; // 0x401cb0
    bool v3; // 0x401ca0
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5; // bp-152, 0x401ca0
    int64_t v6 = &v5; // 0x401cc4
    int64_t v7 = 0; // 0x401cc4
    int64_t v8; // bp-344, 0x401ca0
    int64_t v9 = &v8; // 0x401cc4
    int64_t v10 = a1; // 0x401cc4
    v1 = (char *)v7;
    int64_t v11 = v6 - 96; // 0x401ce3
    int64_t v12; // bp-312, 0x401ca0
    int64_t v13 = 32 * v7 + (int64_t)&v12; // 0x401ce3
    function_4028b0(v11);
    *(int64_t *)v13 = v11;
    v11 += 24;
    v13 += 8;
    while (v6 != v11) {
        // 0x401ce7
        function_4028b0(v11);
        *(int64_t *)v13 = v11;
        v11 += 24;
        v13 += 8;
    }
    int64_t * v14 = (int64_t *)v10;
    int64_t v15 = *v14; // 0x401d00
    *(int32_t *)v9 = 0;
    *(int32_t *)(v9 + 4) = 0;
    *(int32_t *)(v9 + 8) = 0;
    int64_t v16 = 2; // 0x401d2f
    int64_t v17 = v15;
    int64_t v18 = (int64_t)&g12;
    unsigned char v19 = *(char *)v17; // 0x401d2f
    char v20 = *(char *)v18; // 0x401d2f
    char v21 = v20; // 0x401d2f
    bool v22 = false; // 0x401d2f
    int64_t v23; // 0x401ca0
    int64_t v24; // 0x401ca0
    while (v19 == v20) {
        v16--;
        v23 = v18 + v4;
        v24 = v17 + v4;
        v21 = v19;
        v22 = true;
        if (v16 == 0) {
            // break -> 
            break;
        }
        v17 = v24;
        v18 = v23;
        v19 = *(char *)v17;
        v20 = *(char *)v18;
        v21 = v20;
        v22 = false;
    }
    unsigned char v25 = v21;
    int64_t v26 = (int64_t)g32; // 0x401d38
    if ((v19 >= v25 && !v22) != v19 < v25) {
        // 0x40209f
        v26 = function_402760(v15, (int64_t *)"r");
    }
    int64_t v27 = 8 * v7; // 0x401d3e
    *(int64_t *)(v27 + v2 + 64) = v26;
    int64_t * v28 = v14; // 0x401d46
    int64_t * v29; // 0x401ca0
    while (v26 != 0) {
        // 0x401d4c
        function_402730(v26, 2, v15);
        int64_t v30 = *(int64_t *)((0x100000000 * (int64_t)v1 >> 27) + v2 + 208); // 0x401d6b
        *(int64_t *)(v27 + v2 + 48) = function_4028c0(v30, v26, g19);
        v29 = v14;
        if ((*(int32_t *)v26 & 32) != 0) {
            goto lab_0x4021c3;
        }
        // 0x401d89
        v10 += 8;
        if (v7 == 1) {
            // 0x401dc8
            goto lab_0x401dc8_2;
        }
        // 0x401d9b
        v6 += 96;
        v7 = 1;
        v9 += 12;
        v1 = (char *)v7;
        v11 = v6 - 96;
        v13 = 32 * v7 + (int64_t)&v12;
        function_4028b0(v11);
        *(int64_t *)v13 = v11;
        v11 += 24;
        v13 += 8;
        while (v6 != v11) {
            // 0x401ce7
            function_4028b0(v11);
            *(int64_t *)v13 = v11;
            v11 += 24;
            v13 += 8;
        }
        // 0x401d00
        v14 = (int64_t *)v10;
        v15 = *v14;
        *(int32_t *)v9 = 0;
        *(int32_t *)(v9 + 4) = 0;
        *(int32_t *)(v9 + 8) = 0;
        v16 = 2;
        v17 = v15;
        v18 = (int64_t)&g12;
        v19 = *(char *)v17;
        v20 = *(char *)v18;
        v21 = v20;
        v22 = false;
        while (v19 == v20) {
            v16--;
            v23 = v18 + v4;
            v24 = v17 + v4;
            v21 = v19;
            v22 = true;
            if (v16 == 0) {
                // break -> 
                break;
            }
            v17 = v24;
            v18 = v23;
            v19 = *(char *)v17;
            v20 = *(char *)v18;
            v21 = v20;
            v22 = false;
        }
        v25 = v21;
        v26 = (int64_t)g32;
        if ((v19 >= v25 && !v22) != v19 < v25) {
            // 0x40209f
            v26 = function_402760(v15, (int64_t *)"r");
        }
        // 0x401d3e
        v27 = 8 * v7;
        *(int64_t *)(v27 + v2 + 64) = v26;
        v28 = v14;
    }
    goto lab_0x4021f0;
  lab_0x4021c3:
    // 0x4021c3
    error(1, *__errno_location(), "%s", (char *)function_4044e0(0, 3, *v29));
    v28 = v29;
    goto lab_0x4021f0;
  lab_0x4021f0:
    // 0x4021f0
    error(1, *__errno_location(), "%s", (char *)function_4044e0(0, 3, *v28));
    return &g62;
  lab_0x401dc8_2:;
    // 0x401dc8
    int64_t v31; // 0x401ca0
    int64_t v32 = v31;
    int64_t v33; // 0x401ca0
    int64_t v34 = v33;
    int64_t v35; // 0x401ca0
    int64_t v36 = v35;
    int32_t v37; // 0x401ca0
    int64_t v38; // 0x401ca0
    int64_t v39; // 0x401ca0
    int64_t v40; // 0x401ca0
    int64_t v41; // 0x401ca0
    int64_t v42; // 0x401ca0
    char v43; // 0x401ca0
    char v44; // 0x401ca0
    int16_t v45; // bp-376, 0x401ca0
    int32_t v46; // 0x401ca0
    int64_t v47; // 0x401ca0
    int32_t v48; // 0x401ca0
    int64_t v49; // 0x401ca0
    if (v49 == 0) {
        if (v48 == 0) {
            int64_t v50 = v38;
            int64_t v51 = v42;
            int32_t v52; // 0x401d80
            v46 = v52;
            v39 = v50;
            int64_t v53; // 0x401ca0
            if ((int32_t)function_405040(v53, v51) != 0) {
                goto lab_0x40218b;
            } else {
                // 0x402072
                int32_t v54; // 0x401ca0
                int64_t v55 = function_405040((int64_t)v54, v51); // 0x402077
                v46 = 1;
                v39 = v50;
                if ((int32_t)v55 == 0) {
                    char v56 = g39; // 0x402084
                    int64_t v57 = v55; // 0x40208b
                    int64_t result; // 0x401ca0
                    if (v56 == 0) {
                        // 0x40208d
                        result = v57;
                        return result;
                    }
                    char v58 = g19; // 0x4020c0
                    char * v59 = dcgettext(NULL, "total", 5); // 0x4020c8
                    int64_t * v60 = g18; // 0x4020da
                    int64_t v61 = function_402860(v32, &v45); // 0x4020e4
                    int64_t * v62 = g18; // 0x4020f3
                    v1 = (char *)v62;
                    int64_t v63; // bp-408, 0x401ca0
                    int64_t v64 = function_402860(v34, (int16_t *)&v63); // 0x402101
                    int64_t * v65 = g18; // 0x402110
                    int64_t v66; // bp-440, 0x401ca0
                    int64_t v67 = function_402860(v36, (int16_t *)&v66); // 0x40211a
                    char * v68 = v1; // 0x40213a
                    v57 = __printf_chk(1, "%s%s%s%s%s%s%s%c", (char *)v67, v65, (char *)v64, v68, (char *)v61, v60, v59, v58);
                    // 0x40208d
                    result = v57;
                    return result;
                }
                goto lab_0x40218b;
            }
        } else {
            // 0x401fc1
            v45 = 0;
            struct _IO_FILE * v69 = g31; // 0x401fc9
            g42 = 1;
            v40 = (int64_t)v69;
            goto lab_0x401fd7;
        }
    } else {
        // 0x401ddb
        v44 = v43;
        v45 = 0;
        if (v48 == 0) {
            goto lab_0x402000;
        } else {
            char v70 = g46; // 0x401dee
            int64_t * v71; // 0x401ca0
            uint64_t v72 = *v71; // 0x401df5
            int64_t * v73; // 0x401ca0
            int64_t str2 = *v73; // 0x401df9
            int64_t * v74; // 0x401ca0
            uint64_t v75 = *v74; // 0x401dfd
            int64_t * v76; // 0x401ca0
            int64_t str = *v76; // 0x401e01
            if (v70 != 0) {
                // 0x402048
                v47 = function_404f80(str, v75 - 1, str2, v72 - 1);
                goto lab_0x401e35;
            } else {
                int64_t v77 = v72 > v75 ? v75 : v72; // 0x401e11
                int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)v77 - 1); // 0x401e19
                if (memcmp_rc != 0) {
                    struct _IO_FILE * v78 = g31; // 0x402030
                    v37 = memcmp_rc;
                    v41 = (int64_t)v78;
                    goto lab_0x402037;
                } else {
                    if (v72 > v75) {
                        goto lab_0x402000;
                    } else {
                        // 0x401e2f
                        v47 = v72 != v75;
                        goto lab_0x401e35;
                    }
                }
            }
        }
    }
  lab_0x402000:
    // 0x402000
    g42 = 1;
    struct _IO_FILE * v79 = g31; // 0x402007
    int64_t v80 = (int64_t)v79; // 0x402007
    goto lab_0x40200e;
  lab_0x40218b:;
    int64_t v167 = v39;
    int32_t v168 = v46;
    int64_t v169 = *(int64_t *)((int64_t)(8 * v168) + a1); // 0x40219c
    int64_t v170 = function_4044e0(0, 3, v169); // 0x4021a0
    int32_t * v171 = __errno_location(); // 0x4021a8
    int32_t err_num2 = *v171; // 0x4021ba
    error(1, err_num2, "%s", (char *)v170);
    v29 = (int64_t *)v167;
    goto lab_0x4021c3;
  lab_0x401fd7:;
    int64_t v172 = v40;
    int64_t v151; // 0x401ca0
    int64_t v152; // 0x401ca0
    function_401b50(v151, v152, v172, 2);
    int64_t v140 = v32; // 0x401ca0
    char v141 = 1; // 0x401ca0
    int64_t v142 = v34 + 1; // 0x401ca0
    int64_t v143 = v36; // 0x401ca0
    int64_t v144 = 0; // 0x401ca0
    int64_t v96; // 0x401cc4
    int64_t v145 = v96; // 0x401ca0
    int64_t v146 = v152; // 0x401ca0
    goto lab_0x401e85;
  lab_0x40200e:;
    int64_t v81 = v80;
    int64_t v82; // 0x401ca0
    int64_t v83; // 0x401ca0
    function_401b50(v82, v83, v81, 1);
    int64_t v84 = v36 + 1; // 0x402026
    char v85 = v44; // 0x402026
    int64_t v86 = v32; // 0x402026
    goto lab_0x401e71;
  lab_0x401e85:;
    int64_t v160 = v146;
    int64_t v164 = v145;
    int64_t v165 = v144;
    int64_t v157 = v143;
    int64_t v158 = v142;
    char v166 = v141;
    int64_t v159 = v140;
    char v156 = v166; // 0x401ca0
    int64_t v154 = v165; // 0x401ca0
    int64_t v162 = v164; // 0x401ca0
    goto lab_0x401e85_2;
  lab_0x401e71:;
    int64_t v87 = v86;
    char v88 = v85;
    int64_t v89 = v84;
    v45 = 1;
    int64_t v90 = v87; // 0x401ca0
    char v91 = v88; // 0x401ca0
    int64_t v92 = v34; // 0x401ca0
    int64_t v93 = v89; // 0x401ca0
    int64_t v94 = 0; // 0x401ca0
    int64_t v95 = v96; // 0x401ca0
    int64_t v97 = 1; // 0x401ca0
    goto lab_0x401eaa;
  lab_0x401e35:;
    int64_t v147 = v47;
    struct _IO_FILE * v148 = g31; // 0x401e35
    int64_t v149 = (int64_t)v148; // 0x401e35
    int32_t v150 = v147;
    v37 = v150;
    v41 = v149;
    if (v150 != 0) {
        goto lab_0x402037;
    } else {
        // 0x401e44
        function_401b50(v151, v152, v149, 3);
        v84 = v36;
        v85 = 1;
        v86 = v32 + 1;
        goto lab_0x401e71;
    }
  lab_0x401e85_2:;
    int64_t v153 = v154;
    char v155 = v156;
    v35 = v157;
    v33 = v158;
    v43 = v155;
    v31 = v159;
    v42 = v160;
    v38 = 1;
    if (v153 == 1) {
        goto lab_0x401dc8_2;
    } else {
        int64_t v161 = v162;
        int64_t v163 = v161 + 12; // 0x401e85
        v156 = 0;
        v154 = 1;
        v162 = v163;
        v90 = v159;
        v91 = v155;
        v92 = v158;
        v93 = v157;
        v94 = 1;
        v95 = v163;
        v97 = 2;
        if (v155 == 0) {
            goto lab_0x401e85_2;
        } else {
            goto lab_0x401eaa;
        }
    }
  lab_0x401eaa:;
    int64_t v98 = v97;
    int64_t v99 = v95;
    int64_t v100 = v94;
    int64_t v101 = v93;
    int64_t v102 = v92;
    char v103 = v91;
    int64_t v104 = v90;
    int32_t * v105 = (int32_t *)v99; // 0x401eaa
    int32_t v106 = *v105; // 0x401eaa
    int64_t v107 = v106; // 0x401eaa
    int32_t * v108 = (int32_t *)(v99 + 4); // 0x401eae
    int32_t v109 = *v108; // 0x401eae
    int64_t v110 = 4 * v100; // 0x401eb1
    int64_t v111 = 8 * v100; // 0x401eb9
    int64_t v112; // 0x401ca0
    int64_t v113 = *(int64_t *)(v111 + v112); // 0x401eb9
    char v114 = g19; // 0x401ebe
    v1 = (char *)v110;
    *(int32_t *)(v99 + 8) = v109;
    uint32_t v115 = (v106 + 1) % 4; // 0x401ed1
    *v108 = v106;
    *v105 = v115;
    int64_t v116; // 0x401ca0
    int64_t v117 = *(int64_t *)(8 * (v110 | (int64_t)v115) + v116); // 0x401ee7
    int64_t v118 = function_4028c0(v117, v113, v114); // 0x401eef
    char * v119 = v1; // 0x401ef4
    int64_t v120; // 0x401ca0
    *(int64_t *)(v111 + v120) = v118;
    int64_t v121; // 0x401ca0
    if (v118 == 0) {
        int64_t v122 = *(int64_t *)(8 * ((int64_t)v119 + (int64_t)v109) + v116); // 0x401f63
        int64_t v123 = v122 + 16; // 0x401f6b
        int64_t v124 = *(int64_t *)v123; // 0x401f6b
        v121 = v113;
        if (v124 == 0) {
            goto lab_0x401f48;
        } else {
            int32_t v125 = g38; // 0x401f72
            v121 = v113;
            if (v125 == 2) {
                goto lab_0x401f48;
            } else {
                char v126 = g42; // 0x401f82
                v121 = v113;
                if (v125 != 1 == v126 == 0) {
                    goto lab_0x401f48;
                } else {
                    int64_t v127 = *(int64_t *)(8 * (v110 + v107) + v116); // 0x401f9e
                    function_401c10(v122 + 8, v123, v127 + 8, v127 + 16, v98);
                    v121 = v123;
                    goto lab_0x401f48;
                }
            }
        }
    } else {
        int32_t v128 = g38; // 0x401f07
        v121 = v113;
        if (v128 == 2) {
            goto lab_0x401f48;
        } else {
            char v129 = g42; // 0x401f17
            v121 = v113;
            if (v128 != 1 == v129 == 0) {
                goto lab_0x401f48;
            } else {
                int64_t v130 = *(int64_t *)(8 * (v110 + v107) + v116); // 0x401f2f
                int64_t v131 = v130 + 16; // 0x401f3b
                function_401c10(v130 + 8, v131, v118 + 8, v118 + 16, v98);
                v121 = v131;
                goto lab_0x401f48;
            }
        }
    }
  lab_0x402037:;
    int64_t v132 = v41;
    int32_t v133 = v37;
    g42 = 1;
    v40 = v132;
    v80 = v132;
    if (v133 < 1) {
        goto lab_0x40200e;
    } else {
        goto lab_0x401fd7;
    }
  lab_0x401f48:;
    char v134 = *(char *)v113; // 0x401f48
    if ((v134 & 32) != 0) {
        int64_t v135 = *(int64_t *)(v111 + a1); // 0x40215c
        int64_t v136 = function_4044e0(0, 3, v135); // 0x402160
        int32_t * v137 = __errno_location(); // 0x402168
        int32_t err_num = *v137; // 0x40217a
        error(1, err_num, "%s", (char *)v136);
        v46 = 1;
        v39 = v100;
        goto lab_0x40218b;
    } else {
        int64_t v138 = v121;
        int64_t v139; // 0x401ca0
        *(char *)(v100 | v139) = 0;
        v140 = v104;
        v141 = v103;
        v142 = v102;
        v143 = v101;
        v144 = v100;
        v145 = v99;
        v146 = v138;
        goto lab_0x401e85;
    }
}
// Address range: 0x402220 - 0x402655
int64_t function_402220(int32_t status) {
    // 0x402220
    if (status != 0) {
        // 0x40223a
        __fprintf_chk(g34, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40225f
        exit(status);
        // UNREACHABLE
    }
    // 0x402266
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... FILE1 FILE2\n", 5));
    fputs_unlocked(dcgettext(NULL, "Compare sorted files FILE1 and FILE2 line by line.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nWhen FILE1 or FILE2 (not both) is -, read standard input.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nWith no options, produce three-column output.  Column one contains\nlines unique to FILE1, column two contains lines unique to FILE2,\nand column three contains lines common to both files.\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\n  -1              suppress column 1 (lines unique to FILE1)\n  -2              suppress column 2 (lines unique to FILE2)\n  -3              suppress column 3 (lines that appear in both files)\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\n  --check-order     check that the input is correctly sorted, even\n                      if all input lines are pairable\n  --nocheck-order   do not check that the input is correctly sorted\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  --output-delimiter=STR  separate columns with STR\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  --total           output a summary\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g31);
    fputs_unlocked(dcgettext(NULL, "\nNote, comparisons honor the rules specified by 'LC_COLLATE'.\n", 5), g31);
    __printf_chk(1, dcgettext(NULL, "\nExamples:\n  %s -12 file1 file2  Print only lines present in both file1 and file2.\n  %s -3 file1 file2  Print lines in file1 not in file2, and vice versa.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402432
    bool v2; // 0x402220
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4024b8
    int64_t v6 = *(int64_t *)v5; // 0x4024bc
    int64_t v7 = 5; // 0x4024c2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"comm";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4024ce
        char v11 = *(char *)v9; // 0x4024ce
        char v12 = v11; // 0x4024ce
        bool v13 = false; // 0x4024ce
        while (v10 == v11) {
            // 0x4024c4
            v7--;
            int64_t v14 = v9 + v3; // 0x4024ce
            int64_t v15 = v8 + v3; // 0x4024ce
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
            // break -> 0x4024da
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x4024da
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4025ec;
        } else {
            // 0x4025d6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40262b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40253c;
            } else {
                goto lab_0x4025ec;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40253c;
        } else {
            // 0x402522
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40262b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40253c;
            } else {
                goto lab_0x40253c;
            }
        }
    }
  lab_0x4025ec:
    // 0x4025ec
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40257c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40225f
    exit(status);
    // UNREACHABLE
  lab_0x40253c:
    // 0x40253c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40257c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40225f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402660 - 0x402668
int64_t function_402660(int64_t a1) {
    // 0x402660
    g48 = a1;
    int64_t result; // 0x402660
    return result;
}
// Address range: 0x402670 - 0x402678
int64_t function_402670(int64_t a1) {
    // 0x402670
    g47 = a1;
    int64_t result; // 0x402670
    return result;
}
// Address range: 0x402680 - 0x40271e
int64_t function_402680(void) {
    // 0x402680
    int32_t * err_num; // 0x402696
    if ((int32_t)function_4060f0((int64_t)g31) == 0) {
        goto lab_0x4026ac;
    } else {
        // 0x402696
        err_num = __errno_location();
        if (g47 == 0) {
            goto lab_0x4026c3;
        } else {
            // 0x4026a7
            if (*err_num != 32) {
                goto lab_0x4026c3;
            } else {
                goto lab_0x4026ac;
            }
        }
    }
  lab_0x4026ac:;
    int64_t result = function_4060f0((int64_t)g34); // 0x4026b3
    if ((int32_t)result == 0) {
        // 0x4026bc
        return result;
    }
    // 0x4026fe
    _exit(g21);
    // UNREACHABLE
  lab_0x4026c3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4026cf
    if (g48 == 0) {
        // 0x402709
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4026e3
        error(0, *err_num, "%s: %s", (char *)function_4044b0((int64_t)g48), v1);
    }
    // 0x4026fe
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x402720 - 0x402725
int64_t function_402720(void) {
    // 0x402720
    int64_t fd; // 0x402720
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x402730 - 0x402751
int64_t function_402730(int64_t stream, int64_t advice, int64_t a3) {
    // 0x402730
    if (stream == 0) {
        // 0x402750
        int64_t result; // 0x402730
        return result;
    }
    // 0x402735
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x402760 - 0x4027f3
int64_t function_402760(int64_t file_path, int64_t * mode) {
    struct _IO_FILE * file = fopen((char *)file_path, (char *)mode); // 0x402767
    int64_t result = (int64_t)file; // 0x402767
    if (file == NULL) {
        // 0x402781
        return result;
    }
    uint32_t v1 = fileno(file); // 0x402777
    if (v1 >= 3) {
        // 0x402781
        return result;
    }
    int64_t v2 = (int64_t)mode;
    int32_t fd = function_404680((int64_t)v1, v2); // 0x40279a
    if (fd < 0) {
        int32_t * v3 = __errno_location(); // 0x4027d8
        function_405040(result, v2);
        // 0x402781
        return 0;
    }
    // 0x40279e
    if ((int32_t)function_405040(result, v2) == 0) {
        struct _IO_FILE * v4 = fdopen(fd, (char *)mode); // 0x4027b0
        if (v4 != NULL) {
            // 0x402781
            return (int64_t)v4;
        }
    }
    int32_t * v5 = __errno_location(); // 0x4027bd
    close(fd);
    // 0x402781
    return 0;
}
// Address range: 0x402800 - 0x40285e
int64_t function_402800(int64_t locale_category, int64_t a2) {
    char * locale = setlocale((int32_t)locale_category, NULL); // 0x402806
    if (locale == NULL) {
        // 0x402833
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x402806
    bool v2; // 0x402800
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g5; // 0x402800
    int64_t v5 = v1; // 0x402800
    int64_t v6 = 2; // 0x402825
    unsigned char v7 = *(char *)v5; // 0x402825
    char v8 = *(char *)v4; // 0x402825
    char v9 = v8; // 0x402825
    bool v10 = false; // 0x402825
    while (v7 == v8) {
        // 0x402818
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
    int64_t v12 = (int64_t)"POSIX"; // 0x402831
    int64_t v13 = v1; // 0x402831
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x402833
        return 0;
    }
    int64_t v14 = 6; // 0x402831
    unsigned char v15 = *(char *)v13; // 0x40284d
    char v16 = *(char *)v12; // 0x40284d
    char v17 = v16; // 0x40284d
    bool v18 = false; // 0x40284d
    while (v15 == v16) {
        // 0x402840
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
// Address range: 0x402860 - 0x4028a8
int64_t function_402860(uint64_t a1, int16_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x402860
    *(char *)v1 = 0;
    int64_t result = v1; // 0x402872
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x40287b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x4028a4
    return result;
}
// Address range: 0x4028b0 - 0x4028c0
int64_t function_4028b0(int64_t a1) {
    // 0x4028b0
    int128_t v1; // 0x4028b0
    int128_t v2 = v1;
    int128_t v3 = __asm_pxor(v2, v2); // 0x4028b0
    *(int64_t *)(a1 + 16) = 0;
    int64_t v4; // 0x4028b0
    __asm_movups(*(int128_t *)&v4, v3);
    int64_t result; // 0x4028b0
    return result;
}
// Address range: 0x4028c0 - 0x4029db
int64_t function_4028c0(int64_t result, int64_t a2, char a3) {
    int64_t * v1 = (int64_t *)(result + 16); // 0x4028d8
    int64_t v2 = *v1; // 0x4028d8
    int64_t v3 = v2 + result; // 0x4028e8
    if ((v3 & 16) != 0) {
        // 0x402998
        return 0;
    }
    int64_t * v4 = (int64_t *)(a2 + 8); // 0x402924
    int64_t v5 = v3; // 0x4028c0
    int64_t v6 = v2;
    int64_t v7 = v2; // 0x402915
    int64_t v8; // 0x4028c0
    int64_t v9; // 0x4028c0
    int64_t v10; // 0x4028c0
    int64_t v11; // 0x4028c0
    int64_t v12; // 0x4028c0
    int64_t v13; // 0x4028c0
    int64_t v14; // 0x4028c0
    while (true) {
      lab_0x402924:
        // 0x402924
        v9 = v7;
        v8 = v6;
        int64_t v15 = v5;
        uint64_t v16 = *v4; // 0x402924
        if (v16 < *(int64_t *)(a2 + 16)) {
            // 0x402900
            *v4 = v16 + 1;
            v14 = v15;
            v11 = (int64_t)*(char *)v16;
            goto lab_0x40290b;
        } else {
            uint32_t v17 = __uflow((struct _IO_FILE *)a2); // 0x402935
            int64_t v18 = 0x100000000000000 * v15 >> 56; // 0x40293a
            v14 = v18;
            v11 = v17;
            if (v17 != -1) {
                goto lab_0x40290b;
            } else {
                if (v8 == v9) {
                    // break -> 0x402998
                    break;
                }
                if ((v15 & 32) != 0) {
                    // break -> 0x402998
                    break;
                }
                // 0x40294f
                v10 = v9;
                if (*(char *)(v9 - 1) == a3) {
                  lab_0x4029bc:
                    // 0x4029bc
                    *(int64_t *)(result + 8) = v10 - v8;
                    return result;
                }
                // 0x40295a
                v13 = a3;
                v12 = (int64_t)a3 & 0xffffffff;
                if (v9 != v18) {
                    // 0x4029b0
                    *(char *)v9 = a3;
                    v10 = v9 + 1;
                    goto lab_0x4029bc;
                }
                goto lab_0x402967;
            }
        }
    }
    // 0x402998
    return 0;
  lab_0x40290b:
    // 0x40290b
    v5 = v14;
    int64_t v19 = v9; // 0x402910
    int64_t v20 = v11; // 0x402910
    int64_t v21 = v11; // 0x402910
    int64_t v22 = v8; // 0x402910
    v13 = v11;
    v12 = v11;
    if (v9 == v14) {
        goto lab_0x402967;
    } else {
        goto lab_0x402915;
    }
  lab_0x402967:;
    int64_t v23 = function_404d90(v8, result); // 0x402974
    int64_t v24 = v23 + v8; // 0x402984
    *v1 = v23;
    v5 = v24;
    v19 = v24;
    v20 = v13 % 256;
    v21 = v12;
    v22 = v23;
    goto lab_0x402915;
  lab_0x402915:
    // 0x402915
    v6 = v22;
    v7 = v19 + 1;
    *(char *)v19 = (char)v20;
    v10 = v7;
    int64_t v25 = v6; // 0x40291e
    if ((int32_t)v21 == (int32_t)a3) {
        // 0x4029bc
        *(int64_t *)(result + 8) = v10 - v25;
        return result;
    }
    goto lab_0x402924;
}
// Address range: 0x4029e0 - 0x4029ea
int64_t function_4029e0(void) {
    // 0x4029e0
    int64_t v1; // 0x4029e0
    return function_4028c0(v1, v1, 10);
}
// Address range: 0x4029f0 - 0x4029f9
int64_t function_4029f0(int64_t a1) {
    // 0x4029f0
    free((int64_t *)*(int64_t *)(a1 + 16));
    return &g62;
}
// Address range: 0x402a00 - 0x402a3f
int64_t function_402a00(int64_t str, uint64_t a2, int64_t str2, uint64_t a4) {
    int64_t n = a2 > a4 ? a4 : a2; // 0x402a15
    int32_t memcmp_rc = memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n); // 0x402a19
    if (memcmp_rc != 0) {
        // 0x402a2d
        return memcmp_rc;
    }
    int64_t result = 0xffffffff; // 0x402a25
    if (a2 >= a4) {
        // 0x402a27
        result = a2 > a4;
    }
    // 0x402a2d
    return result;
}
// Address range: 0x402a40 - 0x402ad9
int64_t function_402a40(int64_t str) {
    // 0x402a40
    if (str == 0) {
        // 0x402ab9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g34);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402a4e
    int64_t result = (int64_t)found_char_pos; // 0x402a4e
    if (found_char_pos == NULL) {
        // 0x402aa9
        g49 = str;
        g33 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402a58
    if (v1 - str < 7) {
        // 0x402aa9
        g49 = str;
        g33 = str;
        return result;
    }
    // 0x402a68
    bool v2; // 0x402a40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402a40
    int64_t v5 = result - 6; // 0x402a40
    int64_t v6 = 7; // 0x402a76
    unsigned char v7 = *(char *)v5; // 0x402a76
    char v8 = *(char *)v4; // 0x402a76
    char v9 = v8; // 0x402a76
    bool v10 = false; // 0x402a76
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
    int64_t v12 = (int64_t)"lt-"; // 0x402a80
    int64_t v13 = v1; // 0x402a80
    int64_t v14 = 3; // 0x402a80
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402aa9
        g49 = str;
        g33 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402a92
    char v16 = *(char *)v12; // 0x402a92
    char v17 = v16; // 0x402a92
    bool v18 = false; // 0x402a92
    while (v15 == v16) {
        // 0x402a82
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
    int64_t v20 = v1; // 0x402a9c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402a9e
        v20 = result + 4;
        g30 = v20;
    }
    // 0x402aa9
    g49 = v20;
    g33 = v20;
    return result;
}
// Address range: 0x402ae0 - 0x402bd2
int64_t function_402ae0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402af4
    int64_t result = (int64_t)v1; // 0x402af4
    if (result != a1) {
        // 0x402b01
        return result;
    }
    int64_t v2 = function_406150(); // 0x402b10
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402bc6
    if (v3 == 85) {
        // 0x402b20
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402bb8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x402b4e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x402b5b
        // 0x402b01
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402bb8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x402b9d
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x402baa
    // 0x402b01
    return result4;
}
// Address range: 0x402be0 - 0x402c37
int64_t function_402be0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402be0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402c28
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402c37 - 0x403e01
int64_t function_402c37(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402c81
    int64_t v3 = 0; // 0x402c81
    int64_t v4; // 0x402c37
    int64_t v5; // 0x402c37
    int64_t v6; // 0x402c37
    int64_t v7; // 0x402c37
    int64_t v8; // 0x402c37
    int64_t v9; // 0x402c37
    int64_t v10; // 0x402c37
    int64_t v11; // 0x402c37
    int64_t v12; // 0x402c37
    int64_t v13; // 0x402c37
    int64_t v14; // 0x402c37
    int64_t v15; // 0x402c37
    int64_t v16; // 0x402c37
    int64_t v17; // 0x402c37
    int64_t v18; // 0x402c37
    int64_t result; // 0x402c37
    int64_t v19; // 0x402c37
    int32_t wc; // bp+132, 0x402c37
    int64_t ps; // bp+136, 0x402c37
    char v20; // 0x4031f0
    int64_t v21; // 0x4031f0
    int64_t v22; // 0x403598
    int64_t v23; // 0x402c37
    int64_t v24; // 0x4035b7
    int32_t v25; // 0x402c37
    while (true) {
      lab_0x402c88_2:
        // 0x402c88
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402c37
        int64_t v27; // 0x402cbc
        while (true) {
          lab_0x402c88:
            // 0x402c88
            v5 = v26;
            bool v28 = v15 == v5; // 0x402c93
            if (v15 == -1) {
                // 0x402c95
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402ca3
            if (v28) {
                // break (via goto) -> 0x403408
                goto lab_0x403408;
            }
            // 0x402cac
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
                    // 0x40329b
                    if (v25 % 2 == 0) {
                        goto lab_0x402de1;
                    }
                    // 0x4036bd
                    v26 = v5 + 1;
                    goto lab_0x402c88;
                }
                case 7: {
                    goto lab_0x402de1;
                }
                case 8: {
                    goto lab_0x402de1;
                }
                case 9: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402de1;
                }
                case 12: {
                    goto lab_0x402de1;
                }
                case 13: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402dad;
                }
                case 36: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402de1;
                }
                case 38: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402de1;
                }
                case 44: {
                    goto lab_0x402de1;
                }
                case 45: {
                    goto lab_0x402de1;
                }
                case 46: {
                    goto lab_0x402de1;
                }
                case 47: {
                    goto lab_0x402de1;
                }
                case 48: {
                    goto lab_0x402de1;
                }
                case 49: {
                    goto lab_0x402de1;
                }
                case 50: {
                    goto lab_0x402de1;
                }
                case 51: {
                    goto lab_0x402de1;
                }
                case 52: {
                    goto lab_0x402de1;
                }
                case 53: {
                    goto lab_0x402de1;
                }
                case 54: {
                    goto lab_0x402de1;
                }
                case 55: {
                    goto lab_0x402de1;
                }
                case 56: {
                    goto lab_0x402de1;
                }
                case 57: {
                    goto lab_0x402de1;
                }
                case 58: {
                    goto lab_0x402de1;
                }
                case 59: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402de1;
                }
                case 66: {
                    goto lab_0x402de1;
                }
                case 67: {
                    goto lab_0x402de1;
                }
                case 68: {
                    goto lab_0x402de1;
                }
                case 69: {
                    goto lab_0x402de1;
                }
                case 70: {
                    goto lab_0x402de1;
                }
                case 71: {
                    goto lab_0x402de1;
                }
                case 72: {
                    goto lab_0x402de1;
                }
                case 73: {
                    goto lab_0x402de1;
                }
                case 74: {
                    goto lab_0x402de1;
                }
                case 75: {
                    goto lab_0x402de1;
                }
                case 76: {
                    goto lab_0x402de1;
                }
                case 77: {
                    goto lab_0x402de1;
                }
                case 78: {
                    goto lab_0x402de1;
                }
                case 79: {
                    goto lab_0x402de1;
                }
                case 80: {
                    goto lab_0x402de1;
                }
                case 81: {
                    goto lab_0x402de1;
                }
                case 82: {
                    goto lab_0x402de1;
                }
                case 83: {
                    goto lab_0x402de1;
                }
                case 84: {
                    goto lab_0x402de1;
                }
                case 85: {
                    goto lab_0x402de1;
                }
                case 86: {
                    goto lab_0x402de1;
                }
                case 87: {
                    goto lab_0x402de1;
                }
                case 88: {
                    goto lab_0x402de1;
                }
                case 89: {
                    goto lab_0x402de1;
                }
                case 90: {
                    goto lab_0x402de1;
                }
                case 91: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402de1;
                }
                case 94: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402de1;
                }
                case 96: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402de1;
                }
                case 98: {
                    goto lab_0x402de1;
                }
                case 99: {
                    goto lab_0x402de1;
                }
                case 100: {
                    goto lab_0x402de1;
                }
                case 101: {
                    goto lab_0x402de1;
                }
                case 102: {
                    goto lab_0x402de1;
                }
                case 103: {
                    goto lab_0x402de1;
                }
                case 104: {
                    goto lab_0x402de1;
                }
                case 105: {
                    goto lab_0x402de1;
                }
                case 106: {
                    goto lab_0x402de1;
                }
                case 107: {
                    goto lab_0x402de1;
                }
                case 108: {
                    goto lab_0x402de1;
                }
                case 109: {
                    goto lab_0x402de1;
                }
                case 110: {
                    goto lab_0x402de1;
                }
                case 111: {
                    goto lab_0x402de1;
                }
                case 112: {
                    goto lab_0x402de1;
                }
                case 113: {
                    goto lab_0x402de1;
                }
                case 114: {
                    goto lab_0x402de1;
                }
                case 115: {
                    goto lab_0x402de1;
                }
                case 116: {
                    goto lab_0x402de1;
                }
                case 117: {
                    goto lab_0x402de1;
                }
                case 118: {
                    goto lab_0x402de1;
                }
                case 119: {
                    goto lab_0x402de1;
                }
                case 120: {
                    goto lab_0x402de1;
                }
                case 121: {
                    goto lab_0x402de1;
                }
                case 122: {
                    goto lab_0x402de1;
                }
                case 123: {
                    goto lab_0x402d85;
                }
                case 124: {
                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402d85;
                }
                case 126: {
                    goto lab_0x402dad;
                }
                default: {
                    goto lab_0x403185;
                }
            }
        }
      lab_0x403185:
        if (v23 != 1) {
            // 0x4034f0
            ps = 0;
            int64_t len = v15; // 0x403500
            if (v15 == -1) {
                // 0x403502
                len = strlen((char *)str);
            }
            // 0x40352e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40358f:
                // 0x40358f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403594
                int64_t v30 = v29 + str;
                v24 = function_406070(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403b0a_2;
                    }
                    case -1: {
                        goto lab_0x403b0a_2;
                    }
                    case -2: {
                        // 0x403bed
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403c27
                            v19 = v18;
                            int64_t v31 = v18; // 0x403c2a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403c37
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403c30
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403b0a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403b0a_2;
                    }
                    case 1: {
                        goto lab_0x403560;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40360c
                        char v34 = *(char *)v33; // 0x40361d
                        unsigned char v35; // 0x402c37
                        if (v34 < 125) {
                            // 0x403628
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40363f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403610
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40361d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403628
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40363f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403610
                            v33++;
                        }
                        goto lab_0x403560;
                    }
                }
            }
            goto lab_0x403b0a_2;
        } else {
            // 0x4031d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402de1;
        }
    }
  lab_0x403408:
    // 0x403408
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403d0a
        if (v8 > result) {
            // 0x403d13
            *(char *)(v12 + result) = 0;
        }
        // 0x403037
        return result;
    }
    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402de1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402df0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402ffa_2;
        }
    }
    int64_t v39 = result; // 0x402ef1
    char v40 = v20; // 0x402ef1
    int64_t v41 = v38; // 0x402ef1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402ef1
    int64_t v43 = v36; // 0x402ef1
    goto lab_0x402e6d;
  lab_0x402ffa_2:
    // 0x403037
    return function_402be0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403b0a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402de1;
    } else {
        uint64_t v49 = v46 + v5; // 0x4036de
        int64_t v50 = v5 + 1; // 0x4037c1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x4037c8
        char v52 = v20; // 0x4037c8
        int64_t v53 = result; // 0x4037c8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403791
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403795
            int64_t v56 = v54 + 1; // 0x40379a
            int64_t v57 = v51 + 1; // 0x4037c1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40378c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403791
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403795
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
        goto lab_0x402e6d;
    }
  lab_0x403560:
    // 0x403560
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40357f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403582
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403b0a
        goto lab_0x403b0a_2;
    }
    goto lab_0x40358f;
  lab_0x402dad:
    // 0x402dad
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402ffa_2;
    }
    goto lab_0x402de1;
  lab_0x402d85:;
    bool v60 = v15 == 1; // 0x402d90
    if (v15 == -1) {
        // 0x402d92
        v60 = *(char *)v1 == 0;
    }
    // 0x402d9e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402de1;
    } else {
        goto lab_0x402dad;
    }
  lab_0x402e6d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402e72
        *(char *)(v44 + v45) = v40;
    }
    // 0x402e76
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402c88_2;
}
// Address range: 0x403e10 - 0x403fae
int64_t function_403e10(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403e12
    int32_t * v3 = __errno_location(); // 0x403e2c
    int64_t v4 = (int64_t)g23; // 0x403e31
    int32_t v5 = *v3; // 0x403e3b
    int64_t v6 = v4; // 0x403e51
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403fa9
            function_404e80(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403e60
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403e67
        int64_t v9; // 0x403e10
        if (g23 == &g24) {
            int64_t v10 = function_404c90(0, v8); // 0x403f8a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x403f8f
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404c90(v4, v8); // 0x403e7b
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x403e8a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x403e8a
        int32_t v14 = v7; // 0x403e91
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403ec1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403ecb
    int64_t * v17 = (int64_t *)v15; // 0x403ece
    uint64_t v18 = *v17; // 0x403ece
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403ed1
    int64_t result = *v19; // 0x403ed1
    int64_t v20; // 0x403e10
    uint64_t v21 = function_402be0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403ef4
    if (v18 > v21) {
        // 0x403f6b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403f07
    *v17 = v22;
    if (result != (int64_t)&g50) {
        // 0x403f17
        free((int64_t *)result);
    }
    int64_t result2 = function_404c30(v22); // 0x403f31
    *v19 = result2;
    int64_t v23; // 0x403e10
    function_402be0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403f6b
    *v3 = v5;
    return result2;
}
// Address range: 0x403fb0 - 0x403fe4
int64_t function_403fb0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403fb7
    int64_t result = function_404e30(a1 == 0 ? (int64_t)&g51 : a1, 56); // 0x403fd6
    return result;
}
// Address range: 0x403ff0 - 0x403fff
int64_t function_403ff0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g51 : a1); // 0x403ffc
    return result;
}
// Address range: 0x404000 - 0x40400f
int64_t function_404000(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 : a1; // 0x404008
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g51;
}
// Address range: 0x404010 - 0x404043
int64_t function_404010(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 + 8 : a1 + 8; // 0x404029
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40402e
    uint32_t v3 = *v2; // 0x40402e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404032
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404050 - 0x404063
int64_t function_404050(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g51 + 4 : a1 + 4); // 0x40405c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404070 - 0x40409b
int64_t function_404070(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g51 : a1; // 0x404078
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404095
        abort();
        // UNREACHABLE
    }
    // 0x40408c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g51;
}
// Address range: 0x4040a0 - 0x404112
int64_t function_4040a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g51 : a5; // 0x4040c2
    int32_t * v2 = __errno_location(); // 0x4040cb
    uint32_t v3 = *(int32_t *)v1; // 0x4040eb
    int64_t result = function_402be0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4040fa
    return result;
}
// Address range: 0x404120 - 0x404201
int64_t function_404120(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g51 : a4; // 0x404142
    int32_t * v2 = __errno_location(); // 0x404148
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404167
    int32_t * v4 = (int32_t *)v1; // 0x40416a
    int64_t v5 = function_402be0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404185
    int64_t v6 = v5 + 1; // 0x40418a
    int64_t result = function_404c30(v6); // 0x40419f
    function_402be0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4041e4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4041ed
    return result;
}
// Address range: 0x404210 - 0x40421a
int64_t function_404210(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404210
    return function_404120(a1, a2, 0, a3);
}
// Address range: 0x404220 - 0x4042b5
int64_t function_404220(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x404220
    int64_t v2 = v1; // 0x404220
    int64_t v3 = v2; // 0x404234
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x404253
        free((int64_t *)*(int64_t *)v4);
        v3 = &g62;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404250
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g62;
        }
    }
    int64_t v6 = v3; // 0x40426d
    if (g24 != 0x60a300) {
        // 0x40426f
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g50;
        v6 = &g62;
    }
    int64_t result = v6; // 0x404291
    if (g23 != &g24) {
        // 0x404293
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g62;
    }
    // 0x4042a6
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x4042c0 - 0x4042d1
int64_t function_4042c0(void) {
    // 0x4042c0
    int64_t v1; // 0x4042c0
    return function_403e10(v1, v1, -1, (int64_t *)&g51);
}
// Address range: 0x4042e0 - 0x4042ea
int64_t function_4042e0(void) {
    // 0x4042e0
    int64_t v1; // 0x4042e0
    return function_403e10(v1, v1, v1, (int64_t *)&g51);
}
// Address range: 0x4042f0 - 0x404306
int64_t function_4042f0(int64_t a1) {
    // 0x4042f0
    return function_403e10(0, a1, -1, (int64_t *)&g51);
}
// Address range: 0x404310 - 0x404322
int64_t function_404310(int64_t a1, int64_t a2) {
    // 0x404310
    return function_403e10(0, a1, a2, (int64_t *)&g51);
}
// Address range: 0x404330 - 0x404398
int64_t function_404330(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404340
    return function_403e10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4043a0 - 0x404404
int64_t function_4043a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4043b0
    return function_403e10((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404410 - 0x40441c
int64_t function_404410(int64_t a1, int64_t a2) {
    // 0x404410
    return function_404330(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404420 - 0x40442f
int64_t function_404420(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404420
    return function_4043a0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404430 - 0x4044a0
int64_t function_404430(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g51); // 0x40443d
    int128_t v2 = __asm_movdqa(g52); // 0x404445
    int128_t v3 = __asm_movdqa(g53); // 0x40444d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404462
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404478
    uint32_t v6 = *v5; // 0x404478
    uint32_t v7 = (int32_t)a3 % 32; // 0x40447d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403e10(0, a1, a2, &v4);
}
// Address range: 0x4044a0 - 0x4044ad
int64_t function_4044a0(int64_t a1, int64_t a2) {
    // 0x4044a0
    return function_404430(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4044b0 - 0x4044c1
int64_t function_4044b0(int64_t a1) {
    // 0x4044b0
    return function_404430(a1, -1, 58);
}
// Address range: 0x4044d0 - 0x4044da
int64_t function_4044d0(void) {
    // 0x4044d0
    int64_t v1; // 0x4044d0
    return function_404430(v1, v1, 58);
}
// Address range: 0x4044e0 - 0x40454e
int64_t function_4044e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4044fa
    return function_403e10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404550 - 0x4045bc
int64_t function_404550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g51); // 0x404557
    int128_t v2 = __asm_movdqa(g52); // 0x40455f
    int128_t v3 = __asm_movdqa(g53); // 0x404567
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404589
    if (a2 == 0 || a3 == 0) {
        // 0x4045b7
        abort();
        // UNREACHABLE
    }
    // 0x40459a
    return function_403e10(a1, a4, a5, &v4);
}
// Address range: 0x4045c0 - 0x4045c9
int64_t function_4045c0(void) {
    // 0x4045c0
    int64_t v1; // 0x4045c0
    return function_404550(v1, v1, v1, v1, -1);
}
// Address range: 0x4045d0 - 0x4045e7
int64_t function_4045d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4045d0
    return function_404550(0, a1, a2, a3, -1);
}
// Address range: 0x4045f0 - 0x404603
int64_t function_4045f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4045f0
    return function_404550(0, a1, a2, a3, a4);
}
// Address range: 0x404610 - 0x40461a
int64_t function_404610(void) {
    // 0x404610
    int64_t v1; // 0x404610
    return function_403e10(v1, v1, v1, &g22);
}
// Address range: 0x404620 - 0x404632
int64_t function_404620(int64_t a1, int64_t a2) {
    // 0x404620
    return function_403e10(0, a1, a2, &g22);
}
// Address range: 0x404640 - 0x404651
int64_t function_404640(void) {
    // 0x404640
    int64_t v1; // 0x404640
    return function_403e10(v1, v1, -1, &g22);
}
// Address range: 0x404660 - 0x404676
int64_t function_404660(int64_t a1) {
    // 0x404660
    return function_403e10(0, a1, -1, &g22);
}
// Address range: 0x404680 - 0x40468e
int64_t function_404680(int64_t a1, int64_t a2) {
    // 0x404680
    int64_t v1; // 0x404680
    return function_4050c0(a1, 0, 3, v1);
}
// Address range: 0x404690 - 0x404a6d
int64_t function_404690(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404728
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4046ac
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x4046c6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40470b
    if (a6 < 10) {
        // 0x40471a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404812
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404a70 - 0x404a90
int64_t function_404a70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404a70
    if (a5 == 0) {
        // 0x404a8b
        return function_404690(a1, a2, a3, a4, a5, 0, (int64_t)&g62);
    }
    int64_t v1 = 0; // 0x404a77
    v1++;
    int64_t v2 = v1; // 0x404a89
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404a80
        v1++;
        v2 = v1;
    }
    // 0x404a8b
    return function_404690(a1, a2, a3, a4, a5, v2, (int64_t)&g62);
}
// Address range: 0x404a90 - 0x404af0
int64_t function_404a90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404a90
    int64_t v3 = &v2; // 0x404a90
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404ac3
    int64_t v6; // 0x404aad
    int64_t * v7; // 0x404acb
    int64_t v8; // 0x404acb
    int64_t v9; // 0x404ad7
    if (v5 < 48) {
        // 0x404aa0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404ae3
            break;
        }
    } else {
        // 0x404acb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404ae3
            break;
        }
    }
    int64_t v10 = 10; // 0x404ac1
    while (v4 != 9) {
        // 0x404ab9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404aa0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404ae3
                break;
            }
        } else {
            // 0x404acb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404ae3
                break;
            }
        }
        // 0x404ab9
        v10 = 10;
    }
    // 0x404ae3
    return function_404690(a1, a2, a3, a4, v3, v10, (int64_t)&g62);
}
// Address range: 0x404af0 - 0x404bac
int64_t function_404af0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x404af0
    int64_t v1; // bp-168, 0x404af0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404af0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404af0
    int64_t v8; // 0x404af0
    int64_t v9; // bp-56, 0x404af0
    int64_t v10; // 0x404b55
    int64_t v11; // 0x404b79
    if ((int32_t)v6 < 48) {
        // 0x404b40
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404b90
            break;
        }
    } else {
        // 0x404b72
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404b90
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404b6a
    int64_t v13 = 10; // 0x404b6a
    while (v5 != 9) {
        // 0x404b6c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404b40
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404b90
                break;
            }
        } else {
            // 0x404b72
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404b90
                break;
            }
        }
        // 0x404b62
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404b90
    int64_t v14; // bp-136, 0x404af0
    int64_t result = function_404690(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g62); // 0x404b9f
    return result;
}
// Address range: 0x404bb0 - 0x404c24
int64_t function_404bb0(int64_t a1) {
    // 0x404bb0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404c13
    return fputs_unlocked(v1, g31);
}
// Address range: 0x404c30 - 0x404c4a
int64_t function_404c30(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404c34
    if (size != 0 != (mem == NULL)) {
        // 0x404c43
        return (int64_t)mem;
    }
    // 0x404c45
    function_404e80(size);
    // UNREACHABLE
}
// Address range: 0x404c50 - 0x404c71
int64_t function_404c50(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404c53
    int64_t v2 = v1; // 0x404c53
    if (v2 < 0) {
        // 0x404c6b
        function_404e80(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404c69
        return function_404c30(v2);
    }
    // 0x404c6b
    function_404e80(v2);
    // UNREACHABLE
}
// Address range: 0x404c80 - 0x404c82
int64_t function_404c80(void) {
    // 0x404c80
    int64_t v1; // 0x404c80
    return function_404c30(v1);
}
// Address range: 0x404c90 - 0x404cc6
int64_t function_404c90(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404cb8
        free(v1);
        return (int32_t)&g62 ^ (int32_t)&g62;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404ca1
    if (a2 != 0 != (mem == NULL)) {
        // 0x404cb0
        return (int64_t)mem;
    }
    // 0x404cc1
    function_404e80(a1);
    // UNREACHABLE
}
// Address range: 0x404cd0 - 0x404cf1
int64_t function_404cd0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404cd3
    int64_t v2 = v1; // 0x404cd3
    if (v2 < 0) {
        // 0x404ceb
        function_404e80(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404ce9
        return function_404c90(a1, v2);
    }
    // 0x404ceb
    function_404e80(a1);
    // UNREACHABLE
}
// Address range: 0x404d00 - 0x404d86
int64_t function_404d00(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x404d5b
            function_404e80(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404c90(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x404d43
    if (a2 == 0) {
        // 0x404d68
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x404d48
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x404d5b
        function_404e80(a1);
        // UNREACHABLE
    }
    // 0x404d2a
    *(int64_t *)a2 = v2;
    return function_404c90(a1, v2 * a3);
}
// Address range: 0x404d90 - 0x404de0
int64_t function_404d90(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404d90
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x404dda
            function_404e80(a1);
            // UNREACHABLE
        }
        // 0x404db2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404c90(a1, v1);
    }
    if (a2 == 0) {
        // 0x404dc5
        *(int64_t *)a2 = 128;
        return function_404c90(0, 128);
    }
    // 0x404dd8
    if (a2 < 0) {
        // 0x404dda
        function_404e80(a1);
        // UNREACHABLE
    }
    // 0x404db2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404c90(a1, v1);
}
// Address range: 0x404de0 - 0x404df7
int64_t function_404de0(int64_t a1, int64_t a2) {
    // 0x404de0
    return (int64_t)memset((int64_t *)function_404c30(a1), 0, (int32_t)a1);
}
// Address range: 0x404e00 - 0x404e2e
int64_t function_404e00(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404e07
    if ((int64_t)v1 < 0) {
        // 0x404e29
        function_404e80(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404e29
        function_404e80(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x404e1a
    if (mem != NULL) {
        // 0x404e24
        return (int64_t)mem;
    }
    // 0x404e29
    function_404e80(nmemb);
    // UNREACHABLE
}
// Address range: 0x404e30 - 0x404e58
int64_t function_404e30(int64_t a1, int64_t a2) {
    int64_t v1 = function_404c30(a2); // 0x404e3f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x404e60 - 0x404e73
int64_t function_404e60(int64_t str) {
    // 0x404e60
    return function_404e30(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x404e80 - 0x404eb1
int64_t function_404e80(int64_t a1) {
    // 0x404e80
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404ec0 - 0x404f74
int64_t function_404ec0(int64_t err_num, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x404ec0
    error(0, (int32_t)err_num, dcgettext(NULL, "string comparison failed", 5));
    error(0, (int32_t)"Set LC_ALL='C' to work around the problem." ^ (int32_t)"Set LC_ALL='C' to work around the problem.", dcgettext(NULL, "Set LC_ALL='C' to work around the problem.", 5));
    function_4043a0(1, 8, a4, a5);
    function_4043a0(0, 8, a2, a3);
    error(g21, (int32_t)"The strings compared were %s and %s." ^ (int32_t)"The strings compared were %s and %s.", dcgettext(NULL, "The strings compared were %s and %s.", 5));
    return &g62;
}
// Address range: 0x404f80 - 0x404fd5
int64_t function_404f80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_406780(a1, a2, a3, a4); // 0x404f94
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x404fe0 - 0x405037
int64_t function_404fe0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = function_406830(a1, a2, a3, a4); // 0x404ff4
    __errno_location();
    return v1 & 0xffffffff;
}
// Address range: 0x405040 - 0x4050bb
int64_t function_405040(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405047
    if (fileno(stream) < 0) {
        // 0x4050a7
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40505a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40508b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x4050a7
            return fclose(stream);
        }
    }
    // 0x40505c
    if ((int32_t)function_405200(a1, v1) == 0) {
        // 0x4050a7
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405068
    int32_t v3 = *v2; // 0x405070
    int64_t result = fclose(stream); // 0x40507e
    if (v3 != 0) {
        // 0x4050b0
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405080
    return result;
}
// Address range: 0x4050c0 - 0x4051f5
int64_t function_4050c0(int64_t fd, int32_t cmd, int64_t a3, int64_t a4) {
    if (cmd != 1030) {
        // 0x4051a0
        return (uint32_t)fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x4050fc
    int64_t v2; // 0x4050c0
    if (g54 < 0) {
        int64_t v3 = function_4050c0(fd, 0, v1, a4); // 0x405144
        int64_t v4 = v3 & 0xffffffff; // 0x405149
        if ((int32_t)v3 < 0) {
            // 0x405130
            return v4 & 0xffffffff;
        }
        // 0x40514f
        v2 = v4;
        if (g54 != -1) {
            // 0x405130
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x405117
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x405126
            g54 = 1;
            // 0x405130
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_4050c0(fd & 0xffffffff, 0, v1, a4); // 0x4051d7
        int64_t v7 = v6 & 0xffffffff; // 0x4051dc
        if ((int32_t)v6 < 0) {
            // 0x405130
            return v7 & 0xffffffff;
        }
        // 0x4051e6
        g54 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40515f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40516a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x405130
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x405182
    close(fd2);
    // 0x405130
    return 0xffffffff;
}
// Address range: 0x405200 - 0x405240
int64_t function_405200(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40521a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40521a
        return fflush(stream);
    }
    // 0x405228
    function_405240(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405240 - 0x405297
int64_t function_405240(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405240
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40524a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40527b
    int64_t result = -1; // 0x405284
    if (v1 != -1) {
        // 0x405286
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405292
    return result;
}
// Address range: 0x4052a0 - 0x40537f
int64_t function_4052a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x4052ac
    uint32_t v2 = *v1; // 0x4052ac
    int64_t v3 = a2 & 0xffffffff; // 0x4052b1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x4052b4
    uint64_t v5 = (int64_t)*v4; // 0x4052b4
    int64_t v6; // 0x405322
    if (v3 <= v5) {
      lab_0x40531c_2:
        // 0x40531c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x4052a2
    int64_t v8 = v2; // 0x4052a0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40531c
        goto lab_0x40531c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4052d8
    int64_t v17; // 0x4052e6
    int64_t * v18; // 0x405300
    int64_t * v19; // 0x405303
    int64_t v20; // 0x40530e
    int64_t v21; // 0x4052e6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4052e3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405300
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405317
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40531c
            goto lab_0x40531c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40531c
            goto lab_0x40531c_2;
        }
        // 0x4052d2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40535b
    int64_t * v23 = (int64_t *)v22; // 0x405360
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405363
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405360
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405377
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x4052cd
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40531c
            goto lab_0x40531c_2;
        }
        // 0x4052d2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4052e3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405300
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405317
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40531c
                goto lab_0x40531c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40531c
                goto lab_0x40531c_2;
            }
            // 0x4052d2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405340
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405360
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405377
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40531c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405380 - 0x40599c
int64_t function_405380(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40539f
    int64_t v2 = *v1; // 0x40539f
    char * str2 = (char *)v2; // 0x4053ac
    char c = *str2; // 0x4053ac
    int64_t v3 = v2; // 0x4053d8
    int64_t v4 = 0; // 0x405380
    int32_t v5; // 0x405380
    int64_t v6; // 0x405380
    int64_t v7; // 0x405380
    int64_t v8; // 0x405380
    int64_t v9; // 0x405380
    int64_t v10; // 0x405380
    int64_t v11; // 0x405380
    int64_t v12; // 0x405380
    int64_t v13; // 0x405380
    int64_t str3; // 0x405380
    int64_t v14; // 0x405380
    int64_t v15; // 0x405380
    int64_t v16; // 0x405380
    int64_t v17; // 0x405380
    int32_t v18; // 0x405380
    int32_t v19; // 0x405380
    int32_t v20; // 0x405380
    int32_t v21; // 0x405380
    int32_t v22; // 0x405380
    int32_t v23; // 0x405380
    int32_t v24; // 0x405380
    int32_t v25; // 0x405380
    int32_t v26; // 0x405380
    int32_t v27; // 0x405380
    int32_t v28; // 0x405380
    int32_t v29; // 0x405380
    int64_t nmemb; // 0x405380
    int64_t v30; // 0x405380
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4053dc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4053d8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4053e8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4053ee
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x4053b8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40541c
                int64_t v34; // 0x405380
                int64_t v35; // 0x405380
                if (strncmp(str, str2, n) == 0) {
                    // 0x405425
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x4055a0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405436
                int64_t v37 = *(int64_t *)v36; // 0x40543a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405410
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405425
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x4055a0;
                        }
                    }
                    // 0x405436
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
                  lab_0x405486:
                    // 0x405486
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
                        goto lab_0x4054e0;
                    } else {
                        if (v11 == 0) {
                            // 0x405650
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4054e0;
                        } else {
                            if (v39 == 0) {
                                // 0x405600
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x4054aa;
                                } else {
                                    // 0x40560c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x4054aa;
                                    } else {
                                        // 0x40561a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x4054aa;
                                        } else {
                                            goto lab_0x4054e0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x4054aa;
                            }
                        }
                    }
                }
              lab_0x4054f1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x4056c6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405872
                            flockfile(g34);
                            int64_t v41 = *v1; // 0x405892
                            __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x4058df
                            int64_t v43 = (int64_t)g34;
                            int64_t v44 = v43; // 0x4058f9
                            int64_t v45; // 0x4058fb
                            if (*(char *)v42 != 0) {
                                // 0x4058fb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g34;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x4058f3
                            while (v17 + nmemb != v42) {
                                // 0x4058f5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x4058fb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g34;
                                }
                                // 0x4058e8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405920
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g34);
                            v40 = *v1;
                        } else {
                            // 0x4056d4
                            __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40582f
                        free((int64_t *)v17);
                    }
                    // 0x405729
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405740
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4055ee
                    return 63;
                }
                // 0x405510
                v5 = v39;
                if (v13 != 0) {
                    // 0x405594
                    v35 = v13;
                    v34 = v25;
                  lab_0x4055a0:;
                    int32_t * v49 = (int32_t *)a7; // 0x4055b0
                    uint32_t v50 = *v49; // 0x4055b0
                    int64_t v51 = v50; // 0x4055b0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x4055ba
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4055c3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x4057ef
                                __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40579a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4055ee
                            return 63;
                        }
                        // 0x405638
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40594f
                                    __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40584d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405860
                                // 0x4055ee
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40575e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405772
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4055db
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4055de
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4055e2
                    int64_t result = v59; // 0x4055e8
                    if (v58 != 0) {
                        // 0x4055ea
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4055ee
                    return result;
                }
            } else {
                // 0x4053ee
                v5 = v32;
            }
            // break -> 0x405515
            break;
        }
    }
    // 0x405515
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40552d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405537
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4055ee
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405679
        __fprintf_chk(g34, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405566
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405576
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4054e0:
    // 0x4054e0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4054e0
    int64_t v63 = *(int64_t *)v62; // 0x4054e4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4054f1
        goto lab_0x4054f1;
    }
    goto lab_0x405486;
  lab_0x4054aa:
    // 0x4054aa
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405380
    int32_t v65; // 0x405380
    int32_t v66; // 0x405380
    if (v27 != 0) {
        goto lab_0x4054e0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405660
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4054e0;
            } else {
                goto lab_0x4054d1;
            }
        } else {
            // 0x4054c5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x4057bc
                int64_t v67 = (int64_t)mem; // 0x4057bc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4054e0;
                } else {
                    // 0x4057cf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4054d1;
                }
            } else {
                goto lab_0x4054d1;
            }
        }
    }
  lab_0x4054d1:
    // 0x4054d1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4054e0;
}
// Address range: 0x4059a0 - 0x405f66
int64_t function_4059a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x4059c1
    if (v3 < 1) {
        // 0x405b7e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x4059bd
    int32_t v5 = *(int32_t *)a7; // 0x4059c9
    uint64_t v6 = a1 & 0xffffffff; // 0x4059cb
    int64_t v7 = v2; // 0x4059d0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x4059d3
    *v8 = 0;
    int64_t v9; // 0x4059a0
    int64_t v10; // 0x4059a0
    int64_t v11; // 0x4059a0
    int64_t v12; // 0x4059a0
    int64_t str; // 0x4059a0
    int64_t v13; // 0x4059a0
    int64_t v14; // 0x4059a0
    int64_t v15; // 0x4059a0
    int64_t v16; // 0x4059a0
    int64_t v17; // 0x4059a0
    int32_t v18; // 0x4059a0
    char v19; // 0x4059a0
    if (v5 == 0) {
        // 0x405bb8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x4059ea;
    } else {
        // 0x4059e3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405a30
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405a33
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405af8;
            } else {
                int64_t v22 = v7 + 1; // 0x405a46
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405a56
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405b0c;
                } else {
                    goto lab_0x405a68;
                }
            }
        } else {
            goto lab_0x4059ea;
        }
    }
  lab_0x4059ea:
    // 0x4059ea
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x4059f0
    *v24 = 0;
    int64_t v25; // 0x4059a0
    int64_t v26; // 0x4059a0
    int64_t v27; // 0x4059a0
    switch (*(char *)&v2) {
        case 45: {
            // 0x405ae0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405aed;
        }
        case 43: {
            // 0x405df0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405aed;
        }
        default: {
            // 0x405a0c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x405d6f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405e88
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405aed;
                } else {
                    // 0x405d7d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405a1a;
                }
            } else {
                goto lab_0x405a1a;
            }
        }
    }
  lab_0x405af8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405aff
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405a68;
    } else {
        goto lab_0x405b0c;
    }
  lab_0x405a1a:
    // 0x405a1a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405aed;
  lab_0x405aed:
    // 0x405aed
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405af8;
  lab_0x405a68:;
    uint32_t v30 = *(int32_t *)a7; // 0x405a68
    int64_t v31 = v30; // 0x405a68
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405a6a
    if ((int64_t)*v32 > v31) {
        // 0x405a6f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405a72
    if (*v33 > v30) {
        // 0x405a77
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405a7a
    int64_t v35 = v31; // 0x405a7e
    int64_t v36 = v15; // 0x405a7e
    int64_t v37; // 0x4059a0
    int64_t v38; // 0x4059a0
    int64_t v39; // 0x4059a0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405be8
        int64_t v41 = v40; // 0x405be8
        v2 = v41;
        int64_t v42; // 0x4059a0
        if (*v33 == v40) {
            // 0x405dd0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405dd8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405bf4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405bf8
                function_4052a0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405c08
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405c11
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405c1a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405c31
            int64_t v47 = v45 & 0xffffffff; // 0x405c35
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405c3e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405c44
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405c46;
                }
            }
            int64_t v48 = v47 + 1; // 0x405c20
            int64_t v49 = v48 & 0xffffffff; // 0x405c20
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405c31
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405c3e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405c44
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405c46;
                    }
                }
                // 0x405c20
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405de8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405c46;
    } else {
        goto lab_0x405a84;
    }
  lab_0x405b0c:
    // 0x405b0c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405b0f
    int64_t v51 = v12; // 0x405b0f
    int64_t v52 = v14; // 0x405b0f
    if (*(char *)v10 == 0) {
        goto lab_0x405a68;
    } else {
        goto lab_0x405b15;
    }
  lab_0x405a84:;
    int32_t v53 = v35; // 0x405a84
    int64_t v54; // 0x4059a0
    int64_t v55; // 0x4059a0
    int64_t v56; // 0x4059a0
    int64_t v57; // 0x4059a0
    int64_t v58; // 0x4059a0
    int64_t v59; // 0x4059a0
    char * v60; // 0x4059a0
    int64_t v61; // 0x4059a0
    int64_t v62; // 0x405a99
    int64_t v63; // 0x4059a0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405bd3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405bd6;
    } else {
        // 0x405a8c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x4059a0
        int64_t v66 = v65 ? -1 : 1; // 0x405aa0
        int64_t v67 = (int64_t)"--"; // 0x4059a0
        int64_t v68 = v62; // 0x4059a0
        int64_t v69 = 3; // 0x405aa0
        unsigned char v70 = *(char *)v68; // 0x405aa0
        char v71 = *(char *)v67; // 0x405aa0
        char v72 = v71; // 0x405aa0
        bool v73 = false; // 0x405aa0
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
            // 0x405b90
            if (*(char *)v62 == 45) {
                // 0x405c50
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405c50
                if (c == 0) {
                    goto lab_0x405b9a;
                } else {
                    // 0x405c5d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405ce0;
                    } else {
                        if (c == 45) {
                            // 0x405ec3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x405d35;
                        } else {
                            // 0x405c6e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405ce0;
                            } else {
                                // 0x405c73
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405c94;
                                } else {
                                    // 0x405c7a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405ce0;
                                    } else {
                                        goto lab_0x405c94;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405b9a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405ab0
            v2 = v75;
            int32_t v76 = *v32; // 0x405ab3
            int64_t v77 = v35 + 1; // 0x405ab6
            int32_t v78 = v77; // 0x405ab9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x405e20
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405ac7
                    function_4052a0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405ad5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405bd6;
        }
    }
  lab_0x405b15:;
    // 0x405b15
    int64_t v79; // bp-104, 0x4059a0
    int64_t v80 = &v79; // 0x4059aa
    int64_t v81 = v50 + 1; // 0x405b15
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405b1c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405b21
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405b25
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405b29
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405b31
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405b36
    int32_t c2 = v84; // 0x405b36
    char * found_char_pos = strchr(str2, c2); // 0x405b36
    int64_t v87 = *v82; // 0x405b3b
    v2 = v87;
    int64_t v88 = *v85; // 0x405b45
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405b50
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x405e40
            __fprintf_chk(g34, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x405e0d
        *(int32_t *)(v1 + 8) = c2;
        // 0x405b7e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405b36
    char v91 = *(char *)(v90 + 1); // 0x405b6b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405b25
        if (v91 != 58) {
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405d94
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405e98
                *v8 = 0;
            } else {
                // 0x405e7c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x405d9e
        if (v93 != 0) {
            // 0x405e30
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405db1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x405dbe
            *v83 = 0;
            // 0x405b7e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x405efa
            __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x405eaa
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405eb1
        // 0x405dbe
        *v83 = 0;
        // 0x405b7e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405d09
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405d0b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x405f30
                __fprintf_chk(g34, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405ee1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405ee8
            // 0x405b7e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405d16
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405d1a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x405d35;
  lab_0x405c46:
    // 0x405c46
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405a84;
  lab_0x405d35:;
    int64_t v99 = function_405380(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x405d53
    // 0x405b7e
    return v99 & 0xffffffff;
  lab_0x405bd6:;
    int32_t v100 = v55; // 0x405bd6
    if (v100 != (int32_t)v59) {
        // 0x405bda
        *(int32_t *)a7 = v100;
    }
    // 0x405b7e
    return 0xffffffff;
  lab_0x405b9a:
    // 0x405b9a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405ba1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405b7e
    return v99 & 0xffffffff;
  lab_0x405ce0:
    // 0x405ce0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405b15;
  lab_0x405c94:
    // 0x405c94
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405380(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g12); // 0x405cba
    if ((int32_t)v101 != -1) {
        // 0x405b7e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405ccf
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405ce0;
}
// Address range: 0x405f70 - 0x405fc6
int64_t function_405f70(int64_t a1) {
    // 0x405f70
    *(int32_t *)&g55 = g29;
    *(int32_t *)&g56 = g28;
    int64_t v1; // 0x405f70
    int64_t result = function_4059a0(v1, v1, v1, v1, v1, v1, &g55, a1 & 0xffffffff); // 0x405f96
    g29 = *(int32_t *)&g55;
    g60 = (char *)g58;
    *(int32_t *)&g27 = g57;
    return result;
}
// Address range: 0x405fd0 - 0x405fe8
int64_t function_405fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405fd0
    return function_405f70(1);
}
// Address range: 0x405ff0 - 0x406003
int64_t function_405ff0(int64_t a1, int64_t a2, char * a3, char (**a4)[12], int32_t a5, int64_t a6) {
    // 0x405ff0
    return function_405f70(0);
}
// Address range: 0x406010 - 0x406025
int64_t function_406010(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406010
    return function_4059a0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406030 - 0x406046
int64_t function_406030(void) {
    // 0x406030
    return function_405f70(0);
}
// Address range: 0x406050 - 0x406068
int64_t function_406050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406050
    return function_4059a0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406070 - 0x4060ea
int64_t function_406070(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40607b
    int64_t v2 = (int64_t)&g3; // 0x40607b
    int32_t * pwc; // 0x406070
    int64_t v3; // 0x406070
    int64_t n; // 0x406070
    if (a2 == 0) {
        goto lab_0x4060c2;
    } else {
        // 0x40607d
        if (a3 == 0) {
            // 0x4060a8
            return -2;
        }
        // 0x406089
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4060c2;
        } else {
            goto lab_0x406094;
        }
    }
  lab_0x4060c2:
    // 0x4060c2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406070
    pwc = (int32_t *)&v4;
    goto lab_0x406094;
  lab_0x406094:;
    char * wstr = (char *)v3; // 0x40609a
    int64_t ps; // 0x406070
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40609a
    int64_t result = v5; // 0x40609a
    if (v5 < 0xfffffffe) {
        // 0x4060a8
        return result;
    }
    int64_t result2 = result; // 0x4060d9
    if ((char)function_402800(0, v3) == 0) {
        // 0x4060db
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x4060a8
    return result2;
}
// Address range: 0x4060f0 - 0x40614d
int64_t function_4060f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4060f7
    int64_t v2; // 0x4060f0
    int64_t result = function_405040(a1, v2); // 0x406108
    if ((v2 & 32) != 0) {
        // 0x406130
        if ((int32_t)result == 0) {
            // 0x406134
            *__errno_location() = 0;
        }
        // 0x40612a
        return 0xffffffff;
    }
    // 0x406111
    if ((int32_t)result == 0) {
        // 0x40612a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406118
    if (v1 == 0) {
        // 0x40611a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40612a
    return result2;
}
// Address range: 0x406150 - 0x4066b2
int64_t function_406150(void) {
    char * v1 = nl_langinfo(14); // 0x406166
    char * v2 = g59; // 0x40616b
    char * v3; // 0x406150
    int64_t v4; // 0x406150
    int64_t v5; // 0x406150
    int64_t v6; // 0x406150
    int64_t v7; // 0x406150
    int32_t size; // 0x406150
    int32_t size2; // 0x406150
    int32_t len; // 0x406222
    int64_t v8; // 0x406222
    char * env_val; // 0x40620d
    if (v2 == NULL) {
        // 0x406208
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406275;
        } else {
            // 0x40621a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406275;
            } else {
                // 0x40621f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40620d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x4066a5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406275;
                    } else {
                        // 0x406619
                        size2 = len + 14;
                        goto lab_0x40623b;
                    }
                } else {
                    goto lab_0x40623b;
                }
            }
        }
    } else {
        // 0x406150
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40618a;
    }
  lab_0x4064bc:;
    // 0x4064bc
    struct _IO_FILE * stream; // 0x4062fb
    int32_t v10 = __uflow(stream); // 0x4064bf
    int64_t v11; // 0x406150
    int64_t v12 = v11; // 0x4064c9
    int64_t v13; // 0x406150
    int64_t v14 = v13; // 0x4064c9
    int32_t v15 = v10; // 0x4064c9
    int64_t v16; // 0x406150
    int64_t v17 = v16; // 0x4064c9
    int64_t v18 = v11; // 0x4064c9
    int64_t v19 = v13; // 0x4064c9
    int64_t v20 = v16; // 0x4064c9
    if (v10 == -1) {
        // break -> 0x4064cf
        goto lab_0x4064cf;
    }
    goto lab_0x406349;
  lab_0x40633e:;
    // 0x40633e
    int64_t v90; // 0x406150
    int64_t * v32; // 0x406330
    *v32 = v90 + 1;
    int64_t v89; // 0x406150
    v12 = v89;
    int64_t v91; // 0x406150
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406150
    v17 = v92;
    goto lab_0x406349;
  lab_0x406349:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406150
    int32_t v25; // bp-120, 0x406150
    int32_t v26; // bp-184, 0x406150
    int64_t v27; // 0x4062fb
    int64_t v28; // 0x406318
    int64_t v29; // 0x40631d
    int64_t * v30; // 0x406334
    switch (c) {
        case 32: {
            goto lab_0x406330;
        }
        case 10: {
            goto lab_0x406330;
        }
        case 9: {
            goto lab_0x406330;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406521
            int32_t v33; // 0x406150
            char v34; // 0x406150
            int32_t v35; // 0x40652e
            if (v31 < *v30) {
                // 0x406500
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40652b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406521
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406500
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40652b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406510
                v36 = v33;
            }
            // 0x4065ff
            if (v36 == -1) {
                // break -> 0x4064cf
                break;
            }
            goto lab_0x406330;
        }
        default: {
            // 0x40635f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x4064cf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406388
            int64_t v39 = v37 + 4; // 0x40638a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406396
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406398
            while (v41 == 0) {
                // 0x406388
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4063b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4063c2
            int64_t v45 = v43 + 4; // 0x4063c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4063d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4063d2
            while (v47 == 0) {
                // 0x4063c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4063bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4063e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4063f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4063fc
            int64_t v52 = v51 + v48; // 0x406405
            int64_t * mem; // 0x406150
            int64_t v53; // 0x406150
            int64_t v54; // 0x406150
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40653b
                int64_t v56 = v55 + 3; // 0x406547
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406421
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406430
            if (mem == NULL) {
                // 0x40665c
                free((int64_t *)v21);
                function_405040(v27, v53);
                v24 = (int64_t)&g3;
                goto lab_0x4062d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406448
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406452
            uint32_t v62 = (int32_t)v59; // 0x406455
            int64_t v63; // 0x406150
            if (v62 >= 8) {
                // 0x406564
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40657e
                int64_t v66 = v61 - v65; // 0x406582
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40658d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40659e
                    int64_t v70 = v69 & 0xffffffff; // 0x40659e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40659b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40662f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406467
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40646b
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
            int64_t v73 = v51 + 1; // 0x40647b
            int64_t v74 = v60 - 1; // 0x40647f
            uint32_t v75 = (int32_t)v73; // 0x406484
            int64_t v76; // 0x406150
            if (v75 >= 8) {
                // 0x4065b2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x4065bc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x4065cc
                int64_t v80 = v74 - v79; // 0x4065d0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4065db
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4065eb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4065e9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406646
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40664e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406496
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40649a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406693
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x4064ae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40633e;
            } else {
                goto lab_0x4064bc;
            }
        }
    }
  lab_0x406330:;
    int64_t v93 = v23; // 0x406150
    int64_t v94 = v22; // 0x406150
    int64_t v95 = v21; // 0x406150
    goto lab_0x406330_2;
  lab_0x406275:;
    int64_t * mem3 = malloc(size); // 0x406275
    int64_t v97 = (int64_t)&g3; // 0x406280
    int64_t v98; // 0x406150
    int64_t path; // 0x406150
    if (mem3 == NULL) {
        goto lab_0x406252;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406275
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406296;
    }
  lab_0x40618a:;
    int64_t str = v1 == NULL ? (int64_t)&g3 : (int64_t)v1; // 0x40617d
    char v100 = *v3; // 0x40618a
    int64_t v101; // 0x406150
    if (v100 == 0) {
        // 0x4061e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406150
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406150
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4061d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4061d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4061a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4061ad
        char v107 = *(char *)v106; // 0x4061b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4061e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4061bb
    v104 = v103 + 1;
  lab_0x4061d7:
    // 0x4061e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406252:;
    char * v108 = (char *)v97;
    g59 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40618a;
  lab_0x406296:;
    int64_t v109 = v98 + path; // 0x406296
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4062c2
    v24 = (int64_t)&g3;
    if (fd >= 0) {
        // 0x4062f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406622
            close(fd);
            v24 = (int64_t)&g3;
        } else {
            // 0x406315
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406330_2:;
                uint64_t v96 = *v32; // 0x406330
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x4064bc;
                } else {
                    goto lab_0x40633e;
                }
            }
          lab_0x4064cf:
            // 0x4064cf
            function_405040(v27, v19);
            v24 = (int64_t)&g3;
            if (v18 != 0) {
                // 0x4064ee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4062d4;
  lab_0x40623b:;
    int64_t * mem4 = malloc(size2); // 0x40623b
    v97 = (int64_t)&g3;
    if (mem4 != NULL) {
        // 0x4062e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406296;
    } else {
        goto lab_0x406252;
    }
  lab_0x4062d4:
    // 0x4062d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406252;
}
// Address range: 0x4066c0 - 0x406774
int64_t function_4066c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x4066da
    int64_t v2 = a3; // 0x4066e2
    int64_t v3 = a1; // 0x4066e2
    int64_t v4 = a4; // 0x4066e2
    int64_t v5 = a2; // 0x4066e2
    *v1 = 0;
    char * str = (char *)v3; // 0x406720
    char * str2 = (char *)v2; // 0x406720
    int32_t strcoll_rc = strcoll(str, str2); // 0x406720
    while (strcoll_rc == 0) {
        int64_t v6 = (int64_t)strlen(str) + 1; // 0x4066f3
        int64_t v7 = (int64_t)strlen(str2) + 1; // 0x4066ff
        v4 -= v7;
        v5 -= v6;
        if (v5 == 0) {
            // 0x406740
            return v4 != 0 ? 0xffffffff : 0;
        }
        // 0x40670e
        v2 += v7;
        v3 += v6;
        if (v4 == 0) {
            // 0x406760
            return 1;
        }
        *v1 = 0;
        str = (char *)v3;
        str2 = (char *)v2;
        strcoll_rc = strcoll(str, str2);
    }
    // 0x406729
    return strcoll_rc;
}
// Address range: 0x406780 - 0x406821
int64_t function_406780(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n == a4) {
        // 0x40679f
        if (memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) == 0) {
            // 0x406810
            *__errno_location() = 0;
            // 0x4067fc
            return 0;
        }
    }
    char * v1 = (char *)(n + str); // 0x4067c1
    char * v2 = (char *)(a4 + str2); // 0x4067c5
    *v1 = 0;
    *v2 = 0;
    int64_t v3 = function_4066c0(str, n + 1, str2, a4 + 1); // 0x4067e3
    // 0x4067fc
    return v3 & 0xffffffff;
}
// Address range: 0x406830 - 0x406893
int64_t function_406830(int64_t str, int64_t n, int64_t str2, int64_t a4) {
    if (n != a4 || memcmp((int64_t *)str, (int64_t *)str2, (int32_t)n) != 0) {
        // 0x406878
        return function_4066c0(str, n, str2, a4);
    }
    // 0x40685a
    *__errno_location() = 0;
    return 0;
}
// Address range: 0x4068a0 - 0x4068fd
int64_t function_4068a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4068a0
    return function_401370();
}
// Address range: 0x406900 - 0x406901
int64_t function_406900(void) {
    // 0x406900
    int64_t result; // 0x406900
    return result;
}
// Address range: 0x406910 - 0x406928
int64_t function_406910(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406910
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x406928 - 0x406948
int64_t function_406928(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x406932
    while (*(int64_t *)v1 != -1) {
        // 0x406933
        v1 -= 8;
    }
    // 0x406944
    return result;
}
