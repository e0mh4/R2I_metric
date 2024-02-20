#include "decompile_retdec.h"
// Address range: 0x4017c0 - 0x4017c5
int64_t function_4017c0(void) {
    // 0x4017c0
    abort();
    // UNREACHABLE
}
// Address range: 0x4017c5 - 0x4017ca
int64_t function_4017c5(void) {
    // 0x4017c5
    abort();
    // UNREACHABLE
}
// Address range: 0x4017ca - 0x4017cf
int64_t function_4017ca(void) {
    // 0x4017ca
    abort();
    // UNREACHABLE
}
// Address range: 0x4017cf - 0x4017d4
int64_t function_4017cf(void) {
    // 0x4017cf
    abort();
    // UNREACHABLE
}
// Address range: 0x4017d4 - 0x4017d9
int64_t function_4017d4(void) {
    // 0x4017d4
    abort();
    // UNREACHABLE
}
// Address range: 0x4017d9 - 0x4017de
int64_t function_4017d9(void) {
    // 0x4017d9
    abort();
    // UNREACHABLE
}
// Address range: 0x4017e0 - 0x401c89
int64_t function_4017e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x4017ec
    function_403240(a2);
    setlocale(LC_ALL, (char *)&g10);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_407200(0x403160, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    g60 = 0;
    g61 = 0;
    g62 = 0;
    g63 = 0;
    g58 = 75;
    g59 = (char *)&g10;
    g57 = 0;
    g56 = 0;
    g55 = 0;
    int64_t v2 = a2; // 0x401882
    int64_t v3 = v1; // 0x401882
    int64_t v4 = 0; // 0x401882
    if ((int32_t)a1 >= 2) {
        int64_t v5 = a2 + 8; // 0x401884
        int64_t * v6 = (int64_t *)v5; // 0x401884
        int64_t v7 = *v6; // 0x401884
        v2 = a2;
        v3 = v1;
        v4 = 0;
        if (*(char *)v7 == 45) {
            int64_t v8 = v7 + 1; // 0x401a3c
            char v9 = *(char *)v8; // 0x401a3c
            v2 = a2;
            v3 = v1;
            v4 = 0;
            if (v9 == 57 || (int32_t)v9 < 57) {
                // 0x401a4c
                *v6 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale";
                v2 = v5;
                v3 = a1 + 0xffffffff & 0xffffffff;
                v4 = v8;
            }
        }
    }
    int64_t v10 = v4; // 0x40189a
    int64_t v11 = 0; // 0x40189a
    int64_t v12; // 0x4017e0
    while (true) {
        // 0x4018a0
        v12 = v10;
        int32_t v13; // 0x4017e0
        while (true) {
            // 0x4018a0
            while (true) {
              lab_0x4018a0_2:;
                int64_t v14 = function_406a60(v3, v2, "0123456789cstuw:p:g:", &g3, 0, a6); // 0x4018b2
                v13 = v14;
                switch (v13) {
                    case -1: {
                        goto lab_0x401a62;
                    }
                    case 112: {
                        int64_t v15 = (int64_t)g76; // 0x4019b0
                        g56 = 0;
                        int64_t v16 = v15; // 0x4019c5
                        char * str = g76; // 0x4019c5
                        int64_t v17 = v15; // 0x4019c5
                        if (*g76 == 32) {
                            int64_t v18 = v16;
                            int64_t v19 = v18 + 1; // 0x4019d4
                            char * v20 = (char *)v19;
                            while (*v20 == 32) {
                                // 0x4019d0
                                v18 = v19;
                                v19 = v18 + 1;
                                v20 = (char *)v19;
                            }
                            // 0x4019de
                            g56 = 1 - v15 + v18;
                            str = v20;
                            v17 = v19;
                        }
                        int64_t v21 = v17;
                        g59 = str;
                        int32_t len = strlen(str); // 0x4019ee
                        g57 = len;
                        int64_t v22 = v21 + (int64_t)len; // 0x4019fb
                        int64_t v23 = v22; // 0x401a01
                        int64_t v24 = v22; // 0x401a01
                        if (v21 < v22) {
                            int64_t v25 = v23 - 1; // 0x401a11
                            v24 = v23;
                            while (*(char *)v25 == 32) {
                                // 0x401a08
                                v23 = v25;
                                v24 = v21;
                                if (v21 == v25) {
                                    // break -> 0x401a17
                                    break;
                                }
                                v25 = v23 - 1;
                                v24 = v23;
                            }
                        }
                        // 0x401a17
                        *(char *)v24 = 0;
                        g55 = v24 - v21;
                        goto lab_0x4018a0_2;
                    }
                    default: {
                        if (v13 > 112) {
                            if (v13 == 116) {
                                // 0x401a30
                                g62 = 1;
                            } else {
                                if (v13 > 116) {
                                    if (v13 != 117) {
                                        // break (via goto) -> 0x401910
                                        goto lab_0x401910;
                                    }
                                    // 0x4018e1
                                    g60 = 1;
                                } else {
                                    if (v13 != 115) {
                                        // 0x401c54
                                        function_402dc0(1);
                                        // UNREACHABLE
                                    }
                                    // 0x40193a
                                    g61 = 1;
                                }
                            }
                        } else {
                            if (v13 == -130) {
                                // 0x401c5e
                                function_402dc0(0);
                                // UNREACHABLE
                            }
                            if (v13 <= 0xffffff7e) {
                                if (v13 == -131) {
                                    // 0x40197d
                                    function_4052e0((int64_t)g29, "fmt", "GNU coreutils", (int64_t)g17, "Ross Paterson", 0);
                                    exit(0);
                                    // UNREACHABLE
                                }
                                goto lab_0x401c54;
                            }
                            if (v13 != 99) {
                                // break -> 0x401950
                                break;
                            }
                            // 0x401905
                            g63 = 1;
                        }
                        goto lab_0x4018a0_2;
                    }
                }
            }
        }
      lab_0x401910:
        if (v13 != 119) {
          lab_0x401c54:
            // 0x401c54
            function_402dc0(1);
            // UNREACHABLE
        }
        // 0x40191a
        v10 = (int64_t)g76;
    }
  lab_0x401a62:;
    int32_t v26; // 0x4017e0
    if (v12 == 0) {
        if (v11 != 0) {
            char * v27 = dcgettext(NULL, "invalid width", 5); // 0x401c18
            int64_t v28 = function_405780(v11, (int32_t)"invalid width" ^ (int32_t)"invalid width", 75, (int64_t *)&g10, (int64_t)v27, 0); // 0x401c32
            int32_t v29 = v28; // 0x401c37
            g53 = v29;
            g58 = v29 + 10;
            goto lab_0x401ad7;
        } else {
            // 0x401bea
            v26 = g58;
            goto lab_0x401bef;
        }
    } else {
        char * v30 = dcgettext(NULL, "invalid width", 5); // 0x401a77
        int64_t v31 = function_405780(v12, (int32_t)"invalid width" ^ (int32_t)"invalid width", 2500, (int64_t *)&g10, (int64_t)v30, 0); // 0x401a91
        int32_t v32 = v31; // 0x401a99
        g58 = v32;
        v26 = v32;
        if (v11 == 0) {
            goto lab_0x401bef;
        } else {
            char * v33 = dcgettext(NULL, "invalid width", 5); // 0x401ab4
            int64_t v34 = function_405780(v11, (int32_t)"invalid width" ^ (int32_t)"invalid width", 0x100000000 * v31 >> 32, (int64_t *)&g10, (int64_t)v33, 0); // 0x401acc
            g53 = v34;
            goto lab_0x401ad7;
        }
    }
  lab_0x401b04:;
    // 0x401b04
    int64_t v35; // 0x4017e0
    int64_t v36 = v35;
    g26 = &g27;
    int64_t v37 = v36; // 0x401b15
    uint64_t v38; // 0x4017e0
    if (v38 <= (int64_t)&g27) {
        // break -> 0x401ba5
        goto lab_0x401ba5;
    }
    goto lab_0x401b1b;
  lab_0x401b80:;
    // 0x401b80
    int64_t v57; // 0x4017e0
    int64_t format = v57;
    int32_t * v56; // 0x4017e0
    int32_t * v59 = v56;
    int32_t err_num = *v59; // 0x401b80
    error(0, err_num, (char *)format);
    v35 = 0;
    goto lab_0x401b04;
  lab_0x401bef:;
    int32_t v60 = 187 * v26; // 0x401bef
    g53 = (0x100000000 * (int64_t)(v60 >> 31) | (int64_t)v60) / 200;
    goto lab_0x401ad7;
  lab_0x401ad7:;
    uint32_t v61 = *(int32_t *)0x60b25c; // 0x401ad7
    if (v61 == (int32_t)v3) {
        // 0x401b93
        function_402850(g30);
        // 0x401ba5
        return 0;
    }
    // 0x401ae5
    if (v3 <= (int64_t)v61) {
        // 0x401ba5
        return 0;
    }
    // 0x401b1b
    while (true) {
      lab_0x401b1b:;
        // 0x401b1b
        char v39; // 0x4017e0
        unsigned char v40; // 0x401b2c
        bool v41; // 0x4017e0
        while (true) {
            int64_t v42; // 0x4017e0
            int64_t v43 = v42;
            int64_t v44; // 0x4017e0
            int64_t v45 = v44;
            v40 = *(char *)v43;
            char v46 = *(char *)v45; // 0x401b2c
            v39 = v46;
            v41 = false;
            if (v40 != v46) {
                // break -> 
                break;
            }
            int64_t v47; // 0x4017e0
            int64_t v48 = v47;
            int64_t v49 = v48 - 1; // 0x401b2c
            int64_t v50; // 0x401b2c
            v44 = v45 + v50;
            v42 = v43 + v50;
            v47 = v49;
            v39 = v40;
            v41 = true;
            if (v49 == 0) {
                // break -> 
                break;
            }
        }
        bool v51 = v41;
        unsigned char v52 = v39;
        int64_t v53; // 0x4017e0
        if ((v40 >= v52 && !v51) == v40 < v52) {
            int64_t v54 = g30; // 0x401af8
            function_402850(v54);
            v35 = v53;
            goto lab_0x401b04;
        } else {
            // 0x401b37
            int64_t file_path; // 0x401b25
            struct _IO_FILE * file = fopen((char *)file_path, "r"); // 0x401b3f
            if (file == NULL) {
                // 0x401bb9
                function_404c10(4, file_path);
                char * v55 = dcgettext(NULL, "cannot open %s for reading", 5); // 0x401bd5
                v56 = __errno_location();
                v57 = (int64_t)v55;
                goto lab_0x401b80;
            } else {
                int64_t v58 = (int64_t)file; // 0x401b3f
                function_402850(v58);
                v35 = v53;
                if ((int32_t)function_405bf0(v58, (int64_t)"r") != -1) {
                    goto lab_0x401b04;
                } else {
                    // 0x401b61
                    function_404ce0(0, 3, file_path);
                    v56 = __errno_location();
                    v57 = (int64_t)"%s";
                    goto lab_0x401b80;
                }
            }
        }
    }
  lab_0x401ba5:;
    uint64_t v62 = v37;
    return v62 % 256 ^ 1;
}
// Address range: 0x401c90 - 0x401cbb
// Address range: 0x401cbb - 0x401cda
int64_t function_401cbb(void) {
    // 0x401cbb
    return &g28;
}
// Address range: 0x401cda - 0x401d11
int64_t function_401cda(void) {
    // 0x401cda
    return 0;
}
// Address range: 0x401d11 - 0x401d68
int64_t function_401d11(void) {
    // 0x401d11
    if (g33 != 0) {
        // 0x401d67
        int64_t result; // 0x401d11
        return result;
    }
    int64_t v1 = g34; // 0x401d44
    int64_t result2; // 0x401d56
    if (g34 >= ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401d56
        result2 = function_401cbb();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g14 - (int64_t)&g13 >> 3) - 1) {
        // 0x401d46
        v1++;
    }
    // 0x401d3a
    g34 = v1;
    // 0x401d56
    result2 = function_401cbb();
    g33 = 1;
    return result2;
}
// Address range: 0x401d68 - 0x401d6d
int64_t function_401d68(void) {
    // 0x401d68
    return function_401cda();
}
// Address range: 0x401d70 - 0x401f73
int64_t function_401d70(void) {
    int64_t v1 = g42 - 40; // 0x401d84
    int32_t * v2 = (int32_t *)(g42 + 8); // 0x401d8c
    uint32_t result = *v2; // 0x401d8c
    *(int64_t *)(g42 + 24) = 0;
    *v2 = g58;
    if (v1 < (int64_t)&g43) {
        // 0x401ef4
        *v2 = result;
        return result;
    }
    uint32_t v3 = *(int32_t *)(v1 + 8); // 0x401df4
    int64_t v4 = v3; // 0x401df4
    int64_t * v5 = (int64_t *)(v1 + 32);
    int32_t * v6 = (int32_t *)(v1 + 20);
    int64_t v7 = 0x7fffffffffffffff; // 0x401dfb
    int32_t v8 = (v1 == (int64_t)&g43 ? g39 : g38) + v3; // 0x401dfb
    uint32_t v9 = v8;
    int64_t v10 = v1;
    int64_t v11 = v10 + 40; // 0x401e27
    if (g42 != v11) {
        // 0x401e30
        if (g42 != *(int64_t *)(v10 + 72)) {
            // branch -> 0x401e62
        }
    }
    // 0x401e62
    if (g35 >= 1 && v1 == (int64_t)&g43) {
        // branch -> 0x401e00
    }
    // 0x401e00
    if (v7 < v7) {
        // 0x401e05
        *v5 = v11;
        *v6 = v9;
    }
    int64_t v12 = v7;
    int64_t v13; // 0x401d70
    int64_t v14; // 0x401d70
    int64_t v15; // 0x401d70
    int64_t v16; // 0x401d70
    int64_t v17; // 0x401d70
    int64_t v18; // 0x401d70
    int64_t v19; // 0x401d70
    int64_t v20; // 0x401e62
    int64_t v21; // 0x401e3b
    int64_t v22; // 0x401e81
    int64_t v23; // 0x401e58
    int32_t v24; // 0x401e1c
    while (g42 != v11) {
        // 0x401e19
        v24 = *(int32_t *)(v10 + 12);
        v8 = *(int32_t *)(v10 + 48) + v9 + v24;
        v19 = v11;
        v7 = v12;
        if (g58 <= v8) {
            // break -> 0x401ea0
            break;
        }
        v9 = v8;
        v10 = v19;
        v14 = v9;
        v11 = v10 + 40;
        v17 = 0;
        if (g42 != v11) {
            // 0x401e30
            v21 = 0xa00000000 * ((int64_t)g53 - v14) >> 32;
            v13 = v21 * v21;
            v17 = v13;
            if (g42 != *(int64_t *)(v10 + 72)) {
                // 0x401e47
                v23 = (int64_t)(10 * (v9 - *(int32_t *)(v10 + 60)));
                v17 = v23 * v23 / 2 + v13;
            }
        }
        // 0x401e62
        v20 = *(int64_t *)(v10 + 64) + v17;
        v15 = v20;
        if (g35 >= 1 && v1 == (int64_t)&g43) {
            // 0x401e74
            v22 = 0xa00000000 * (v14 - (int64_t)g35) >> 32;
            v15 = v20 + v22 * v22 / 2;
        }
        // 0x401e00
        v16 = v15;
        v18 = v7;
        if (v16 < v7) {
            // 0x401e05
            *v5 = v11;
            *v6 = v9;
            v18 = v16;
        }
        // 0x401e10
        v12 = v18;
    }
    int64_t v25 = 0x1324; // 0x401ead
    unsigned char v26; // 0x401eaf
    int64_t v27; // 0x401eaf
    if (v1 > (int64_t)&g43) {
        // 0x401eaf
        v26 = *(char *)(v1 - 24);
        v27 = v26;
        if ((v26 & 2) == 0) {
            // 0x401f30
            v25 = 3300;
            if ((v27 & 4) == 0) {
                // 0x401f3a
                v25 = 0x1324;
                if (v1 > (int64_t)&g45) {
                    // 0x401f49
                    v25 = 0x1324;
                    if ((*(char *)(v1 - 64) & 8) != 0) {
                        // 0x401f53
                        v25 = 0x9c40 / (int64_t)(*(int32_t *)(v1 - 32) + 2) + 0x1324;
                    }
                }
            }
        } else {
            // 0x401eb7
            v25 = (v27 & 8) == 0 ? 0x59164 : 2400;
        }
    }
    int64_t v28 = v25;
    unsigned char v29 = *(char *)(v1 + 16); // 0x401ecd
    int64_t v30; // 0x401d70
    if (v29 % 2 == 0) {
        // 0x401f10
        v30 = v28;
        if ((v29 & 8) != 0) {
            // 0x401f14
            v30 = 0x57e4 / (0x100000000 * v4 + 0x200000000 >> 32) + v28;
        }
    } else {
        // 0x401ed5
        v30 = v28 - 1600;
    }
    int64_t v31 = v1 - 40; // 0x401edf
    *(int64_t *)(v1 + 24) = v30 + v12;
    while (v31 >= (int64_t)&g43) {
        uint64_t v32 = v31;
        v3 = *(int32_t *)(v32 + 8);
        v4 = v3;
        v5 = (int64_t *)(v32 + 32);
        v6 = (int32_t *)(v32 + 20);
        v7 = 0x7fffffffffffffff;
        v8 = (v32 == (int64_t)&g43 ? g39 : g38) + v3;
        v9 = v8;
        v10 = v32;
        v14 = v9;
        v11 = v10 + 40;
        v17 = 0;
        if (g42 != v11) {
            // 0x401e30
            v21 = 0xa00000000 * ((int64_t)g53 - v14) >> 32;
            v13 = v21 * v21;
            v17 = v13;
            if (g42 != *(int64_t *)(v10 + 72)) {
                // 0x401e47
                v23 = (int64_t)(10 * (v9 - *(int32_t *)(v10 + 60)));
                v17 = v23 * v23 / 2 + v13;
            }
        }
        // 0x401e62
        v20 = *(int64_t *)(v10 + 64) + v17;
        v15 = v20;
        if (g35 >= 1 && v32 == (int64_t)&g43) {
            // 0x401e74
            v22 = 0xa00000000 * (v14 - (int64_t)g35) >> 32;
            v15 = v20 + v22 * v22 / 2;
        }
        // 0x401e00
        v16 = v15;
        v18 = v7;
        if (v16 < v7) {
            // 0x401e05
            *v5 = v11;
            *v6 = v9;
            v18 = v16;
        }
        // 0x401e10
        v12 = v18;
        while (g42 != v11) {
            // 0x401e19
            v24 = *(int32_t *)(v10 + 12);
            v8 = *(int32_t *)(v10 + 48) + v9 + v24;
            v19 = v11;
            v7 = v12;
            if (g58 <= v8) {
                // break -> 0x401ea0
                break;
            }
            v9 = v8;
            v10 = v19;
            v14 = v9;
            v11 = v10 + 40;
            v17 = 0;
            if (g42 != v11) {
                // 0x401e30
                v21 = 0xa00000000 * ((int64_t)g53 - v14) >> 32;
                v13 = v21 * v21;
                v17 = v13;
                if (g42 != *(int64_t *)(v10 + 72)) {
                    // 0x401e47
                    v23 = (int64_t)(10 * (v9 - *(int32_t *)(v10 + 60)));
                    v17 = v23 * v23 / 2 + v13;
                }
            }
            // 0x401e62
            v20 = *(int64_t *)(v10 + 64) + v17;
            v15 = v20;
            if (g35 >= 1 && v32 == (int64_t)&g43) {
                // 0x401e74
                v22 = 0xa00000000 * (v14 - (int64_t)g35) >> 32;
                v15 = v20 + v22 * v22 / 2;
            }
            // 0x401e00
            v16 = v15;
            v18 = v7;
            if (v16 < v7) {
                // 0x401e05
                *v5 = v11;
                *v6 = v9;
                v18 = v16;
            }
            // 0x401e10
            v12 = v18;
        }
        // 0x401ea0
        v25 = 0x1324;
        if (v32 > (int64_t)&g43) {
            // 0x401eaf
            v26 = *(char *)(v32 - 24);
            v27 = v26;
            if ((v26 & 2) == 0) {
                // 0x401f30
                v25 = 3300;
                if ((v27 & 4) == 0) {
                    // 0x401f3a
                    v25 = 0x1324;
                    if (v32 > (int64_t)&g45) {
                        // 0x401f49
                        v25 = 0x1324;
                        if ((*(char *)(v32 - 64) & 8) != 0) {
                            // 0x401f53
                            v25 = 0x9c40 / (int64_t)(*(int32_t *)(v32 - 32) + 2) + 0x1324;
                        }
                    }
                }
            } else {
                // 0x401eb7
                v25 = (v27 & 8) == 0 ? 0x59164 : 2400;
            }
        }
        // 0x401ecd
        v28 = v25;
        v29 = *(char *)(v32 + 16);
        if (v29 % 2 == 0) {
            // 0x401f10
            v30 = v28;
            if ((v29 & 8) != 0) {
                // 0x401f14
                v30 = 0x57e4 / (0x100000000 * v4 + 0x200000000 >> 32) + v28;
            }
        } else {
            // 0x401ed5
            v30 = v28 - 1600;
        }
        // 0x401edc
        v31 = v32 - 40;
        *(int64_t *)(v32 + 24) = v30 + v12;
    }
    // 0x401ef4
    *v2 = result;
    return result;
}
// Address range: 0x401f80 - 0x401ff2
int64_t function_401f80(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 8);
    int64_t * v2 = (int64_t *)(a1 + 16);
    struct _IO_FILE * v3 = (struct _IO_FILE *)a1;
    int64_t v4 = a2 & 0xffffffff; // 0x401f86
    int64_t v5; // 0x401f80
    int64_t result; // 0x401f80
    while (true) {
      lab_0x401fcf_2:
        // 0x401fcf
        result = v4;
        int32_t v6 = result; // 0x401fcf
        if (v6 != 32) {
            if (v6 != 9) {
                // break -> 0x401ff0
                break;
            }
            int32_t v7 = g50; // 0x401f95
            g41 = 1;
            int32_t v8 = v7 >= 0 ? v7 + 8 & -8 : (int32_t)(8 * (int64_t)((int32_t)&g54 >> 3) + 8); // 0x401fad
            g50 = v8;
            uint64_t v9 = *v1; // 0x401fba
            v5 = v9;
            if (v9 >= *v2) {
                // 0x401fcf
                v4 = __uflow(v3);
                goto lab_0x401fcf_2;
            } else {
                goto lab_0x401fc4;
            }
        } else {
            // 0x401fd4
            g50 = &g51;
            uint64_t v10 = *v1; // 0x401fdb
            v5 = v10;
            if (v10 < *v2) {
                goto lab_0x401fc4;
            } else {
                // 0x401fcf
                v4 = __uflow(v3);
                goto lab_0x401fcf_2;
            }
        }
    }
    // 0x401ff0
    return result;
  lab_0x401fc4:
    // 0x401fc4
    *v1 = v5 + 1;
    // 0x401fcf
    v4 = (int64_t)*(char *)v5;
    goto lab_0x401fcf_2;
}
// Address range: 0x402000 - 0x4020ec
int64_t function_402000(int64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x402009
    uint64_t v2 = *v1; // 0x402009
    g50 = 0;
    int64_t * v3 = (int64_t *)(a1 + 16); // 0x402017
    int64_t v4; // 0x402000
    if (v2 >= *v3) {
        // 0x4020e0
        v4 = __uflow((struct _IO_FILE *)a1);
    } else {
        // 0x402021
        *v1 = v2 + 1;
        v4 = (int64_t)*(char *)v2;
    }
    int64_t result = function_401f80(a1, v4); // 0x40202f
    if (g55 == 0) {
        int32_t v5 = g56; // 0x40203e
        int32_t v6 = g50; // 0x402044
        int32_t v7 = v6 - v5; // 0x402044
        g36 = v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0 ? v6 : v5;
        // 0x402057
        return result;
    }
    unsigned char v8 = *g59; // 0x40206d
    g36 = g50;
    if (v8 == 0) {
        // 0x4020d0
        return function_401f80(a1, result & 0xffffffff);
    }
    // 0x40207b
    if ((int32_t)result != (int32_t)v8) {
        // 0x402057
        return result;
    }
    int64_t v9 = (int64_t)g59;
    uint64_t v10 = *v1; // 0x4020ac
    g50 = &g51;
    int64_t v11; // 0x402000
    int64_t v12; // 0x402000
    char v13; // 0x402000
    int64_t v14; // 0x40208c
    char v15; // 0x402094
    int64_t v16; // 0x4020bf
    int64_t v17; // 0x4020c3
    char v18; // 0x4020c8
    if (v10 < *v3) {
        // 0x402088
        v14 = v9 + 1;
        *v1 = v10 + 1;
        v15 = *(char *)v14;
        v11 = (int64_t)*(char *)v10;
        v13 = v15;
        v12 = v14;
        if (v15 == 0) {
            // break -> 0x4020d0
            break;
        }
    } else {
        // 0x4020bc
        v16 = v9 + 1;
        v17 = __uflow((struct _IO_FILE *)a1);
        v18 = *(char *)v16;
        v11 = v17;
        v13 = v18;
        v12 = v16;
        if (v18 == 0) {
            // break -> 0x4020d0
            break;
        }
    }
    int64_t result2 = v11; // 0x4020a1
    while ((int32_t)v13 == (int32_t)v11) {
        // 0x4020a9
        v9 = v12;
        v10 = *v1;
        g50 = &g51;
        if (v10 < *v3) {
            // 0x402088
            v14 = v9 + 1;
            *v1 = v10 + 1;
            v15 = *(char *)v14;
            v11 = (int64_t)*(char *)v10;
            v13 = v15;
            v12 = v14;
            if (v15 == 0) {
                // break -> 0x4020d0
                break;
            }
        } else {
            // 0x4020bc
            v16 = v9 + 1;
            v17 = __uflow((struct _IO_FILE *)a1);
            v18 = *(char *)v16;
            v11 = v17;
            v13 = v18;
            v12 = v16;
            if (v18 == 0) {
                // break -> 0x4020d0
                break;
            }
        }
        // 0x40209f
        result2 = v11;
    }
    // 0x402057
    return result2;
}
// Address range: 0x4020f0 - 0x4021cf
int64_t function_4020f0(int32_t a1) {
    uint32_t v1 = g48; // 0x4020f6
    int64_t v2 = v1; // 0x4020f6
    int32_t v3 = v1 + a1; // 0x402103
    int64_t v4 = v2; // 0x402106
    int64_t result; // 0x4020f0
    if (g41 != 0) {
        int32_t v5 = v3 >= 0 ? v3 : v3 + 7; // 0x402110
        uint32_t v6 = v5 & -8; // 0x402116
        int64_t v7 = v6; // 0x402116
        result = v7;
        v4 = v2;
        if (v1 < v6 == v7 > (int64_t)&g49) {
            int64_t v8 = (int64_t)g29; // 0x402128
            int64_t * v9 = (int64_t *)(v8 + 40); // 0x40212f
            uint64_t v10 = *v9; // 0x40212f
            if (v10 >= *(int64_t *)(v8 + 48)) {
                // 0x4021c0
                __overflow(g29, 9);
            } else {
                // 0x40213d
                *v9 = v10 + 1;
                *(char *)v10 = 9;
            }
            int32_t v11 = g48; // 0x402148
            int64_t v12 = v11 >= 0 ? (int64_t)((v11 >> 3) + 1) : (int64_t)(((int32_t)&g52 >> 3) + 1); // 0x402159
            int64_t v13 = 8 * v12; // 0x40215c
            g48 = v13;
            while (v12 < (int64_t)(v5 >> 3)) {
                // 0x402128
                v8 = (int64_t)g29;
                v9 = (int64_t *)(v8 + 40);
                v10 = *v9;
                if (v10 >= *(int64_t *)(v8 + 48)) {
                    // 0x4021c0
                    __overflow(g29, 9);
                } else {
                    // 0x40213d
                    *v9 = v10 + 1;
                    *(char *)v10 = 9;
                }
                // 0x402148
                v11 = g48;
                v12 = v11 >= 0 ? (int64_t)((v11 >> 3) + 1) : (int64_t)(((int32_t)&g52 >> 3) + 1);
                v13 = 8 * v12;
                g48 = v13;
            }
            // 0x40216d
            result = v12;
            v4 = v13 & 0xfffffff8;
        }
    }
    uint64_t v14 = (int64_t)v3; // 0x402103
    if (v4 >= v14) {
        // 0x4021a7
        return result;
    }
    int64_t v15 = (int64_t)g29; // 0x402178
    int64_t * v16 = (int64_t *)(v15 + 40); // 0x40217f
    uint64_t v17 = *v16; // 0x40217f
    if (v17 >= *(int64_t *)(v15 + 48)) {
        // 0x4021b0
        __overflow(g29, 32);
    } else {
        // 0x402189
        *v16 = v17 + 1;
        *(char *)v17 = 32;
    }
    // 0x402194
    g48 = &g49;
    while (v14 > (int64_t)&g49) {
        // 0x402178
        v15 = (int64_t)g29;
        v16 = (int64_t *)(v15 + 40);
        v17 = *v16;
        if (v17 >= *(int64_t *)(v15 + 48)) {
            // 0x4021b0
            __overflow(g29, 32);
        } else {
            // 0x402189
            *v16 = v17 + 1;
            *(char *)v17 = 32;
        }
        // 0x402194
        g48 = &g49;
    }
    // 0x4021a7
    return &g49;
}
// Address range: 0x4021d0 - 0x402257
int64_t function_4021d0(int64_t a1) {
    // 0x4021d0
    if (g61 != 0) {
        // 0x4021d9
        g38 = g39;
        return g39;
    }
    // 0x4021f0
    if (g63 != 0) {
        int32_t result = (char)a1 == 0 ? g39 : g50; // 0x402202
        g38 = result;
        return result;
    }
    int64_t result2 = g39; // 0x402217
    if (g62 == 0) {
        // 0x402238
        g38 = g39;
        // 0x40223e
        return result2;
    }
    if ((char)a1 != 0) {
        // 0x402224
        if (g50 != g39) {
            // 0x40222e
            g38 = g50;
            return result2;
        }
    }
    // 0x402240
    if (g38 != g39) {
        // 0x40223e
        return result2;
    }
    int64_t result3 = g39 == 0 ? 3 : 0; // 0x40224d
    g38 = result3;
    return result3;
}
// Address range: 0x402260 - 0x4022d7
int64_t function_402260(int64_t a1, int64_t a2) {
    int64_t v1 = a2;
    if ((int32_t)a2 == 0) {
        // 0x4022d0
        return 0;
    }
    int64_t v2 = a1; // 0x402278
    int64_t v3 = (int64_t)g29; // 0x402280
    unsigned char v4 = *(char *)v2; // 0x40228b
    v1 = v4;
    int64_t * v5 = (int64_t *)(v3 + 40); // 0x40228f
    uint64_t v6 = *v5; // 0x40228f
    if (v6 >= *(int64_t *)(v3 + 48)) {
        // 0x4022c0
        __overflow(g29, (int32_t)v4);
    } else {
        // 0x402299
        *v5 = v6 + 1;
        *(char *)v6 = (char)v1;
    }
    // 0x4022a4
    v2++;
    while (v2 != a1 + 1 + (a2 + 0xffffffff & 0xffffffff)) {
        // 0x402280
        v3 = (int64_t)g29;
        v4 = *(char *)v2;
        v1 = v4;
        v5 = (int64_t *)(v3 + 40);
        v6 = *v5;
        if (v6 >= *(int64_t *)(v3 + 48)) {
            // 0x4022c0
            __overflow(g29, (int32_t)v4);
        } else {
            // 0x402299
            *v5 = v6 + 1;
            *(char *)v6 = (char)v1;
        }
        // 0x4022a4
        v2++;
    }
    uint32_t result = *(int32_t *)&v1; // 0x4022a9
    g48 += result;
    return result;
}
// Address range: 0x4022e0 - 0x4023cc
int64_t function_4022e0(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    g48 = 0;
    function_4020f0(g40);
    fputs_unlocked(g59, g29);
    int32_t v2 = g48 + g55; // 0x40231d
    g48 = v2;
    function_4020f0(a2 - v2);
    int64_t v3 = *(int64_t *)(v1 + 32); // 0x402332
    int64_t v4 = v3 - 40; // 0x402336
    int64_t v5 = v1; // 0x40233e
    if (v4 != v1) {
        int64_t v6 = v1;
        int64_t v7 = v6 + 40; // 0x40234f
        function_402260(*(int64_t *)v6, v6 + 8);
        function_4020f0(*(int32_t *)(v6 + 12));
        while (v4 != v7) {
            // 0x402348
            v6 = v7;
            v7 = v6 + 40;
            function_402260(*(int64_t *)v6, v6 + 8);
            function_4020f0(*(int32_t *)(v6 + 12));
        }
        // 0x402365
        v5 = v1 + 40 + (-80 - v1 + v3 & -8);
    }
    int64_t v8 = v5;
    function_402260(*(int64_t *)v8, v8 + 8);
    int64_t v9 = (int64_t)g29; // 0x402388
    g35 = g48;
    int64_t * v10 = (int64_t *)(v9 + 40); // 0x402395
    uint64_t result = *v10; // 0x402395
    if (result >= *(int64_t *)(v9 + 48)) {
        // 0x4023b8
        return __overflow(g29, 10);
    }
    // 0x40239f
    *v10 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x4023d0 - 0x402416
int64_t function_4023d0(int64_t a1) {
    int64_t result = function_4022e0(&g43, g39); // 0x4023e4
    if (g44 == a1) {
        // 0x40240f
        return result;
    }
    int64_t v1 = g44; // 0x4023f3
    int64_t result2 = function_4022e0((int64_t *)v1, g38); // 0x402401
    v1 += 32;
    while (v1 != a1) {
        // 0x4023f8
        result2 = function_4022e0((int64_t *)v1, g38);
        v1 += 32;
    }
    // 0x40240f
    return result2;
}
// Address range: 0x402420 - 0x402598
int64_t function_402420(void) {
    int64_t v1 = g42; // 0x402426
    if (v1 == 0x60b2e0) {
        int32_t result = fwrite_unlocked(&g47, 1, (int32_t)(int64_t)g46 - 0x614f40, g29); // 0x40256f
        g46 = (char *)&g47;
        return result;
    }
    // 0x40243a
    function_401d70();
    int64_t v2 = v1; // 0x402449
    if (v1 != g44) {
        int64_t v3 = v1; // 0x40246a
        int64_t v4 = 0x7fffffffffffffff;
        int64_t v5 = *(int64_t *)(g44 + 32); // 0x402470
        int64_t v6 = *(int64_t *)(v5 + 24); // 0x402474
        int64_t v7 = *(int64_t *)(g44 + 24) - v6; // 0x402478
        int64_t v8 = v7 < v4 ? v7 : v4;
        v3 = v7 < v4 ? g44 : v3;
        int64_t v9 = v8 - 0x7ffffffffffffff6; // 0x40248a
        int64_t v10 = v9 == 0 | v9 < 0 != (0x7ffffffffffffff5 - v8 & v8) < 0 ? v8 + 9 : v8; // 0x402490
        v2 = v3;
        while (v1 != v5) {
            int64_t v11 = v6;
            int64_t v12 = v5;
            v4 = v10;
            v5 = *(int64_t *)(v12 + 32);
            v6 = *(int64_t *)(v5 + 24);
            v7 = v11 - v6;
            v8 = v7 < v4 ? v7 : v4;
            v3 = v7 < v4 ? v12 : v3;
            v9 = v8 - 0x7ffffffffffffff6;
            v10 = v9 == 0 | v9 < 0 != (0x7ffffffffffffff5 - v8 & v8) < 0 ? v8 + 9 : v8;
            v2 = v3;
        }
    }
    // 0x40249c
    function_4023d0(v2);
    int64_t v13 = (int64_t)g46; // 0x4024a4
    int64_t * v14 = (int64_t *)v2;
    int64_t v15 = *v14; // 0x4024ab
    __memmove_chk(&g47, (int64_t *)v15, (int32_t)(v13 - v15), 0x1388);
    int64_t v16 = *v14; // 0x4024c3
    int64_t v17 = 0x100000000 * (v16 - (int64_t)(int32_t)&g47) >> 32; // 0x4024d0
    g46 = (char *)(v13 - v17);
    uint64_t v18 = g42; // 0x4024e0
    int64_t * v19; // 0x402534
    if (v18 < v2) {
        // 0x40250b
        v19 = __memmove_chk(&g43, v14, (int32_t)(v18 - v2) + 40 & -8, 0x9c40);
        g42 = (int64_t)&g43 - v2 + v18;
        return (int64_t)v19;
    }
    int64_t v20 = v2 + 40; // 0x4024fe
    *v14 = v16 - v17;
    int64_t v21 = v20; // 0x402509
    if (v20 > v18) {
        // 0x40250b
        v19 = __memmove_chk(&g43, v14, (int32_t)(v18 - v2) + 40 & -8, 0x9c40);
        g42 = (int64_t)&g43 - v2 + v18;
        return (int64_t)v19;
    }
    int64_t * v22 = (int64_t *)v21;
    v21 += 40;
    *v22 = *v22 - v17;
    while (v21 <= v18) {
        // 0x4024f8
        v22 = (int64_t *)v21;
        v21 += 40;
        *v22 = *v22 - v17;
    }
    // 0x40250b
    v19 = __memmove_chk(&g43, v14, (int32_t)(v18 - v2) + 40 & -8, 0x9c40);
    g42 = (int64_t)&g43 - v2 + v18;
    return (int64_t)v19;
}
// Address range: 0x4025a0 - 0x40284e
int64_t function_4025a0(int64_t a1, int64_t a2) {
    int16_t ** v1 = __ctype_b_loc(); // 0x4025b4
    int64_t * v2 = (int64_t *)(a1 + 8);
    int64_t v3 = g42; // 0x4025c3
    int64_t v4 = a2; // 0x4025c3
    int64_t v5; // 0x4025a0
    char c3; // 0x4025a0
    int32_t v6; // 0x40266c
    char * v7; // 0x4026a4
    while (true) {
      lab_0x4025c8_2:;
        int64_t v8 = (int64_t)g46; // 0x4025c8
        *(int64_t *)v3 = v8;
        int64_t v9 = v8; // 0x4025d2
        int64_t v10 = v4 & 0xffffffff; // 0x4025d2
        int64_t v11; // 0x4025a0
        int64_t v12; // 0x4025a0
        int64_t v13; // 0x402638
        int64_t v14; // 0x4025a0
        while (true) {
            int64_t v15 = v9; // 0x402614
            if (v9 == (int64_t)&g48) {
                // 0x402616
                function_4021d0(1);
                function_402420();
                v15 = (int64_t)g46;
            }
            int64_t v16 = v15 + 1; // 0x4025d8
            *(char *)v15 = (char)v10;
            uint64_t v17 = *v2; // 0x4025df
            g46 = (char *)v16;
            int64_t v18; // 0x4025a0
            int64_t v19; // 0x4025a0
            if (v17 >= *(int64_t *)(a1 + 16)) {
                uint32_t v20 = __uflow((struct _IO_FILE *)a1); // 0x402633
                v13 = v20;
                v14 = (int64_t)g46;
                v19 = v14;
                v18 = v13;
                if (v20 == -1) {
                    // break -> 0x402648
                    break;
                }
            } else {
                // 0x4025f0
                *v2 = v17 + 1;
                v19 = v16;
                v18 = (int64_t)*(char *)v17;
            }
            // 0x4025ff
            v10 = v18;
            v9 = v19;
            int64_t v21 = (int64_t)*v1;
            v12 = v9;
            v11 = v21;
            v5 = v10;
            if ((*(char *)(v21 + 1 + (0x100000000 * v10 >> 31)) & 32) != 0) {
                goto lab_0x40264c;
            }
        }
        // 0x402648
        v12 = v14;
        v11 = (int64_t)*v1;
        v5 = v13;
      lab_0x40264c:;
        uint64_t v22 = *(int64_t *)g42; // 0x40265e
        int64_t v23 = v12 - v22; // 0x402666
        int32_t v24 = v23; // 0x402669
        *(int32_t *)(g42 + 8) = v24;
        v6 = g50 + v24;
        char * c = (char *)v22;
        int64_t v25 = v22 - 1 + (0x100000000 * v23 >> 32); // 0x402678
        g50 = v6;
        char * v26 = (char *)v25; // 0x402688
        char * found_char_pos = strchr("(['`\"", (int32_t)*c); // 0x40268d
        v7 = (char *)(g42 + 16);
        char v27 = *(char *)(2 * (int64_t)*v26 + v11); // 0x4026ac
        *v7 = *v7 & -6 | (char)(found_char_pos != NULL) | v27 & 4;
        int64_t v28 = v25; // 0x4026c1
        if (v22 < v25) {
            int64_t v29 = v28;
            char c2 = *(char *)v29; // 0x4026e0
            char * found_char_pos2 = strchr(")]'\"", (int32_t)c2); // 0x4026ed
            c3 = c2;
            while (found_char_pos2 != NULL) {
                int64_t v30 = v29 - 1; // 0x4026d0
                v28 = v30;
                if (v22 == v30) {
                    // 0x402800
                    c3 = *c;
                    goto lab_0x4026f7;
                }
                v29 = v28;
                c2 = *(char *)v29;
                found_char_pos2 = strchr(")]'\"", (int32_t)c2);
                c3 = c2;
            }
        } else {
            // 0x402844
            c3 = *v26;
        }
        goto lab_0x4026f7;
    }
  lab_0x4027e6:
    // 0x4027e6
    return function_402000(a1);
  lab_0x4026f7:
    // 0x4026f7
    *v7 = 2 * (char)(strchr(".?!", (int32_t)c3) != NULL) | *v7 & -3;
    v4 = function_401f80(a1, v5 & 0xffffffff);
    int32_t v31 = g50 - v6; // 0x402733
    int64_t v32 = g42; // 0x40273a
    int32_t * v33 = (int32_t *)(v32 + 12); // 0x402741
    *v33 = v31;
    int32_t v34 = v4; // 0x402744
    char * v35 = (char *)(v32 + 16);
    char v36 = *v35;
    char v37; // 0x4025a0
    char v38; // 0x4025a0
    char v39; // 0x4025a0
    if (v34 == -1) {
        char v40 = v36 | 8; // 0x4027b0
        *v35 = v40;
        v38 = v40;
        goto lab_0x4027b4;
    } else {
        // 0x40274a
        v39 = 0;
        if ((v36 & 2) == 0) {
            goto lab_0x40276c;
        } else {
            // 0x402758
            v39 = 8;
            if (v31 < 2 == (v34 != 10)) {
                char v41 = v36 & -9; // 0x402838
                *v35 = v41;
                v37 = v41;
                goto lab_0x402785;
            } else {
                goto lab_0x40276c;
            }
        }
    }
  lab_0x4027b4:
    // 0x4027b4
    *v33 = (v38 & 8) != 0 ? 2 : 1;
    int64_t v42 = v32; // 0x4027c9
    if (v32 == 0x614ed0) {
        goto lab_0x402820;
    } else {
        goto lab_0x4027cb;
    }
  lab_0x40276c:;
    char v43 = v39 | v36 & -9; // 0x40277a
    *v35 = v43;
    v37 = v43;
    v38 = v43;
    if (v34 == 10) {
        goto lab_0x4027b4;
    } else {
        goto lab_0x402785;
    }
  lab_0x402820:
    // 0x402820
    function_4021d0(1);
    function_402420();
    v42 = g42;
    goto lab_0x4027cb;
  lab_0x4027cb:;
    int64_t v44 = v42 + 40; // 0x4027cb
    g42 = v44;
    v3 = v44;
    if (v34 != 10 != v34 != -1) {
        // break -> 0x4027e6
        goto lab_0x4027e6;
    }
    goto lab_0x4025c8;
  lab_0x402785:
    // 0x402785
    v38 = v37;
    if (g60 != 0) {
        goto lab_0x4027b4;
    } else {
        if (v32 == 0x614ed0) {
            goto lab_0x402820;
        } else {
            int64_t v45 = v32 + 40; // 0x40279a
            g42 = v45;
            v3 = v45;
            goto lab_0x4025c8;
        }
    }
  lab_0x4025c8:
    // 0x4025c8
    goto lab_0x4025c8_2;
}
// Address range: 0x402850 - 0x402dc0
int64_t function_402850(int64_t a1) {
    // 0x402850
    int64_t v1; // 0x402850
    function_403210(a1, 2, v1);
    g41 = 0;
    g38 = 0;
    int64_t v2 = function_402000(a1); // 0x40287b
    g37 = v2;
    int64_t * v3 = (int64_t *)(a1 + 8);
    int64_t * v4 = (int64_t *)(a1 + 16);
    int64_t v5 = v2 & 0xffffffff; // 0x402888
    int64_t v6; // 0x402850
    int64_t v7; // 0x402850
    int64_t v8; // 0x402850
    int64_t v9; // 0x402850
    int32_t v10; // 0x402850
    while (true) {
      lab_0x402890:
        // 0x402890
        g35 = 0;
        v7 = v5;
        while (true) {
          lab_0x4028a0:
            // 0x4028a0
            v8 = v7;
            v10 = v8;
            switch (v10) {
                case 10: {
                    goto lab_0x402a78;
                }
                case -1: {
                    goto lab_0x402a78;
                }
                default: {
                    // 0x4028be
                    if ((int64_t)g36 >= (int64_t)g56) {
                        // 0x4028c6
                        if (g50 >= g57 + g36) {
                            // break -> 0x402af0
                            break;
                        }
                    }
                    // 0x4028d6
                    g48 = 0;
                    v6 = 1;
                    if (g50 > g36) {
                        goto lab_0x4028ee;
                    } else {
                        goto lab_0x402aa8;
                    }
                }
            }
        }
        // 0x402af0
        uint32_t v11; // 0x4028a0
        g40 = v11;
        uint32_t v12; // 0x4028a6
        g39 = v12;
        g46 = (char *)&g47;
        g42 = &g43;
        int64_t v13 = function_4025a0(a1, v8 & 0xffffffff); // 0x402b17
        int32_t v14 = g36; // 0x402b1c
        int32_t v15 = g40; // 0x402b22
        int64_t v16 = 0; // 0x402b30
        if (v14 == v15) {
            int32_t v17 = g57; // 0x402bc0
            uint32_t v18 = g50; // 0x402bc8
            v16 = 0;
            if (v17 + v14 <= v18) {
                int32_t v19 = v13; // 0x402bd4
                v16 = !((v19 == 10 | v19 == -1));
            }
        }
        int64_t v20 = v13 & 0xffffffff; // 0x402b2b
        int64_t v21 = v16;
        function_4021d0(v21);
        char v22 = g61; // 0x402b3b
        v9 = v20;
        if (v22 != 0) {
            goto lab_0x402b60;
        } else {
            char v23 = g63; // 0x402b44
            if (v23 == 0) {
                char v24 = g62; // 0x402bf0
                if (v24 == 0) {
                    // 0x402c90
                    v9 = v20;
                    if (v14 != v15) {
                        goto lab_0x402b60;
                    } else {
                        uint32_t v25 = g50; // 0x402c99
                        int32_t v26 = g57; // 0x402c9f
                        v9 = v20;
                        if (v26 + v14 > v25) {
                            goto lab_0x402b60;
                        } else {
                            // 0x402cad
                            v9 = v20;
                            v9 = v20;
                            switch ((int32_t)v13) {
                                case -1: {
                                    goto lab_0x402b60;
                                }
                                case 10: {
                                    goto lab_0x402b60;
                                }
                                default: {
                                    int32_t v27 = g38; // 0x402cbf
                                    v9 = v20;
                                    if (v27 == v25) {
                                        int64_t v28 = function_4025a0(a1, v20); // 0x402d05
                                        int64_t v29 = v28 & 0xffffffff; // 0x402d0a
                                        int32_t v30 = g36; // 0x402d0c
                                        int32_t v31 = g40; // 0x402d12
                                        v9 = v29;
                                        int32_t v32 = v30; // 0x402d18
                                        int64_t v33 = v29; // 0x402d18
                                        int64_t v34 = v28; // 0x402d18
                                        if (v30 == v31) {
                                            while (true) {
                                              lab_0x402d1e:;
                                                int64_t v35 = v33;
                                                int32_t v36 = v32;
                                                uint32_t v37 = g50; // 0x402cd0
                                                int32_t v38 = g57; // 0x402cd6
                                                v9 = v35;
                                                if (v38 + v36 > v37) {
                                                    // break -> 0x402b60
                                                    break;
                                                }
                                                int64_t v39 = v34;
                                                v9 = v35;
                                                v9 = v35;
                                                switch ((int32_t)v39) {
                                                    case 10: {
                                                        goto lab_0x402b60;
                                                    }
                                                    case -1: {
                                                        goto lab_0x402b60;
                                                    }
                                                    default: {
                                                        int32_t v40 = g38; // 0x402cf6
                                                        v9 = v35;
                                                        if (v40 != v37) {
                                                            // break -> 0x402b60
                                                            break;
                                                        }
                                                        int64_t v41 = function_4025a0(a1, v35); // 0x402d05
                                                        int64_t v42 = v41 & 0xffffffff; // 0x402d0a
                                                        int32_t v43 = g36; // 0x402d0c
                                                        int32_t v44 = g40; // 0x402d12
                                                        v9 = v42;
                                                        v32 = v43;
                                                        v33 = v42;
                                                        v34 = v41;
                                                        if (v43 != v44) {
                                                            // break -> 0x402b60
                                                            break;
                                                        }
                                                        goto lab_0x402d1e;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    goto lab_0x402b60;
                                }
                            }
                        }
                    }
                } else {
                    // 0x402bfd
                    v9 = v20;
                    if (v14 != v15) {
                        goto lab_0x402b60;
                    } else {
                        uint32_t v45 = g50; // 0x402c06
                        int32_t v46 = g57; // 0x402c0c
                        v9 = v20;
                        if (v46 + v14 > v45) {
                            goto lab_0x402b60;
                        } else {
                            // 0x402c1a
                            v9 = v20;
                            v9 = v20;
                            switch ((int32_t)v13) {
                                case 10: {
                                    goto lab_0x402b60;
                                }
                                case -1: {
                                    goto lab_0x402b60;
                                }
                                default: {
                                    int32_t v47 = g39; // 0x402c2c
                                    v9 = v20;
                                    if (v47 != v45) {
                                        int64_t v48 = function_4025a0(a1, v20); // 0x402c75
                                        int64_t v49 = v48 & 0xffffffff; // 0x402c7a
                                        int32_t v50 = g36; // 0x402c7c
                                        int32_t v51 = g40; // 0x402c82
                                        v9 = v49;
                                        int32_t v52 = v50; // 0x402c88
                                        int64_t v53 = v49; // 0x402c88
                                        int64_t v54 = v48; // 0x402c88
                                        if (v50 == v51) {
                                            while (true) {
                                              lab_0x402c8e:;
                                                int64_t v55 = v53;
                                                int32_t v56 = v52;
                                                uint32_t v57 = g50; // 0x402c40
                                                int32_t v58 = g57; // 0x402c46
                                                v9 = v55;
                                                if (v58 + v56 > v57) {
                                                    // break -> 0x402b60
                                                    break;
                                                }
                                                int64_t v59 = v54;
                                                v9 = v55;
                                                v9 = v55;
                                                switch ((int32_t)v59) {
                                                    case 10: {
                                                        goto lab_0x402b60;
                                                    }
                                                    case -1: {
                                                        goto lab_0x402b60;
                                                    }
                                                    default: {
                                                        int32_t v60 = g38; // 0x402c66
                                                        v9 = v55;
                                                        if (v60 != v57) {
                                                            // break -> 0x402b60
                                                            break;
                                                        }
                                                        int64_t v61 = function_4025a0(a1, v55); // 0x402c75
                                                        int64_t v62 = v61 & 0xffffffff; // 0x402c7a
                                                        int32_t v63 = g36; // 0x402c7c
                                                        int32_t v64 = g40; // 0x402c82
                                                        v9 = v62;
                                                        v52 = v63;
                                                        v53 = v62;
                                                        v54 = v61;
                                                        if (v63 != v64) {
                                                            // break -> 0x402b60
                                                            break;
                                                        }
                                                        goto lab_0x402c8e;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    goto lab_0x402b60;
                                }
                            }
                        }
                    }
                }
            } else {
                // 0x402b51
                v9 = v20;
                if (v14 == v15) {
                    int32_t v65 = g57; // 0x402d20
                    uint32_t v66 = g50; // 0x402d26
                    v9 = v20;
                    if (v65 + v14 <= v66) {
                        int32_t v67 = v13; // 0x402d32
                        v9 = v20;
                        if (v67 != 10 == (v67 != -1)) {
                            int64_t v68 = function_4025a0(a1, v20); // 0x402d7d
                            int64_t v69 = v68 & 0xffffffff; // 0x402d82
                            int32_t v70 = g36; // 0x402d84
                            int32_t v71 = g40; // 0x402d8a
                            v9 = v69;
                            int32_t v72 = v70; // 0x402d90
                            int64_t v73 = v69; // 0x402d90
                            int64_t v74 = v68; // 0x402d90
                            if (v70 == v71) {
                                while (true) {
                                  lab_0x402d96:;
                                    int64_t v75 = v73;
                                    int32_t v76 = v72;
                                    uint32_t v77 = g50; // 0x402d48
                                    int32_t v78 = g57; // 0x402d4e
                                    v9 = v75;
                                    if (v78 + v76 > v77) {
                                        // break -> 0x402b60
                                        break;
                                    }
                                    int64_t v79 = v74;
                                    v9 = v75;
                                    v9 = v75;
                                    switch ((int32_t)v79) {
                                        case 10: {
                                            goto lab_0x402b60;
                                        }
                                        case -1: {
                                            goto lab_0x402b60;
                                        }
                                        default: {
                                            int32_t v80 = g38; // 0x402d6e
                                            v9 = v75;
                                            if (v80 != v77) {
                                                // break -> 0x402b60
                                                break;
                                            }
                                            int64_t v81 = function_4025a0(a1, v75); // 0x402d7d
                                            int64_t v82 = v81 & 0xffffffff; // 0x402d82
                                            int32_t v83 = g36; // 0x402d84
                                            int32_t v84 = g40; // 0x402d8a
                                            v9 = v82;
                                            v72 = v83;
                                            v73 = v82;
                                            v74 = v81;
                                            if (v83 != v84) {
                                                // break -> 0x402b60
                                                break;
                                            }
                                            goto lab_0x402d96;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                goto lab_0x402b60;
            }
        }
    }
  lab_0x402a24_2:
    // 0x402a24
    g37 = -1;
    int64_t result; // 0x402850
    return result;
  lab_0x4029e5:;
    int64_t v85 = (int64_t)g29; // 0x4029e5
    int64_t * v86 = (int64_t *)(v85 + 40); // 0x4029ec
    uint64_t v87 = *v86; // 0x4029ec
    if (v87 >= *(int64_t *)(v85 + 48)) {
        // 0x402a68
        __overflow(g29, 10);
    } else {
        // 0x4029f6
        *v86 = v87 + 1;
        *(char *)v87 = 10;
    }
    // 0x402a01
    v7 = function_402000(a1) & 0xffffffff;
    goto lab_0x4028a0;
  lab_0x402b60:;
    uint64_t v88 = g42; // 0x402b60
    if (v88 < (int64_t)&g43 || v88 == 0x60b2e0) {
        // 0x402d98
        __assert_fail("word < word_limit", "src/fmt.c", 606, "get_paragraph");
        return &g80;
    }
    char * v89 = (char *)(v88 - 24); // 0x402b74
    *v89 = *v89 | 10;
    g37 = v9;
    function_401d70();
    function_4023d0(v88);
    v5 = g37;
    goto lab_0x402890;
  lab_0x402a78:
    // 0x402a78
    g48 = 0;
    v6 = !((v10 == -1 | v10 == 10));
    int64_t v90; // 0x402850
    int64_t v91; // 0x402850
    if (g50 > g36) {
        goto lab_0x4028ee;
    } else {
        // 0x402a9a
        v90 = g50;
        v91 = v8;
        if (v10 == -1 || v10 == 10) {
            goto lab_0x4029e0_2;
        } else {
            goto lab_0x402aa8;
        }
    }
  lab_0x4028ee:
    // 0x4028ee
    function_4020f0(g36);
    int64_t v92 = g48; // 0x4028f3
    int64_t v93 = g50; // 0x4028f9
    int64_t v94 = v92; // 0x402908
    int64_t v95 = v93; // 0x402908
    int64_t v96 = v6; // 0x402908
    int64_t v97 = (int64_t)g59; // 0x402908
    int64_t v98 = v92; // 0x402908
    int64_t v99 = v93; // 0x402908
    int64_t v100 = v6; // 0x402908
    if (g50 != g48) {
        goto lab_0x40292e;
    } else {
        goto lab_0x402960;
    }
  lab_0x402aa8:
    // 0x402aa8
    function_4020f0(g36);
    uint32_t v101 = g48; // 0x402aad
    int64_t v102; // 0x402850
    int64_t v103; // 0x402850
    int64_t v104; // 0x402850
    int64_t v105; // 0x402850
    int64_t v106; // 0x402850
    char v107; // 0x402850
    if (v101 == g50) {
        // 0x402ae4
        function_4020f0((int32_t)0);
        goto lab_0x402969;
    } else {
        int64_t v108 = g50; // 0x402ab3
        char v109 = *g59; // 0x402ac8
        v106 = v108;
        v107 = v109;
        v102 = 1;
        v103 = (int64_t)g59;
        v104 = v101;
        v105 = v108;
        if (v109 != 0) {
            goto lab_0x402938;
        } else {
            goto lab_0x402ae0;
        }
    }
  lab_0x40292e:;
    char v110 = *(char *)v97; // 0x40292e
    v106 = v95;
    v107 = v110;
    v102 = v96;
    v103 = v97;
    v98 = v94;
    v99 = v95;
    v100 = v96;
    if (v110 == 0) {
        goto lab_0x402960;
    } else {
        goto lab_0x402938;
    }
  lab_0x402960:
    // 0x402960
    v104 = v98;
    v105 = v99;
    if ((char)v100 != 0) {
        goto lab_0x402ae0;
    } else {
        goto lab_0x402969;
    }
  lab_0x4029e0_2:
    // 0x4029e0
    result = v90;
    if ((int32_t)v91 == -1) {
        // break (via goto) -> 0x402a24
        goto lab_0x402a24_2;
    }
    goto lab_0x4029e5;
  lab_0x402938:;
    unsigned char v111 = v107;
    int64_t v112 = (int64_t)g29; // 0x402938
    int64_t * v113 = (int64_t *)(v112 + 40); // 0x402943
    uint64_t v114 = *v113; // 0x402943
    int64_t v115; // 0x402850
    if (v114 < *(int64_t *)(v112 + 48)) {
        // 0x402910
        *v113 = v114 + 1;
        *(char *)v114 = v111;
        v115 = v106;
    } else {
        // 0x40294d
        __overflow(g29, (int32_t)v111);
        v115 = g50;
    }
    // 0x40291b
    g48 = &g49;
    v94 = &g49;
    v95 = v115;
    v96 = v102;
    v97 = v103 + 1;
    v98 = &g49;
    v99 = v115;
    v100 = v102;
    if ((int32_t)v115 == (int32_t)&g49) {
        goto lab_0x402960;
    } else {
        goto lab_0x40292e;
    }
  lab_0x402ae0:
    // 0x402ae4
    function_4020f0((int32_t)(v105 - v104 & 0xffffffff));
    goto lab_0x402969;
  lab_0x402969:
    if (v10 == -1) {
        int32_t v116 = g36 + g55; // 0x402a16
        result = v116;
        if (v116 > g50) {
            goto lab_0x402a24_2;
        } else {
            int64_t v117 = (int64_t)g29; // 0x402a40
            int64_t * v118 = (int64_t *)(v117 + 40); // 0x402a47
            uint64_t v119 = *v118; // 0x402a47
            if (v119 >= *(int64_t *)(v117 + 48)) {
                // 0x402bb0
                result = __overflow(g29, 10);
                goto lab_0x402a24_2;
            } else {
                // 0x402a55
                *v118 = v119 + 1;
                *(char *)v119 = 10;
                result = v119;
                goto lab_0x402a24_2;
            }
        }
    }
    int32_t v120 = v10; // 0x40299a
    int64_t v121 = v8; // 0x40299a
    if (v8 == 10) {
        goto lab_0x4029e5;
    } else {
        int32_t v122; // 0x4029cb
        int64_t v123; // 0x4029d0
        while (true) {
            int32_t v124 = v120; // 0x402850
            int64_t v125 = v121; // 0x402850
            int64_t v126; // 0x402850
            while (true) {
                int64_t v127 = (int64_t)g29; // 0x4029a1
                int64_t * v128 = (int64_t *)(v127 + 40); // 0x4029a8
                uint64_t v129 = *v128; // 0x4029a8
                if (v129 < *(int64_t *)(v127 + 48)) {
                    // 0x402978
                    *v128 = v129 + 1;
                    *(char *)v129 = (char)v125;
                    uint64_t v130 = *v3; // 0x402982
                    v126 = v130;
                    if (v130 < *v4) {
                        // break -> 0x40298c
                        break;
                    }
                } else {
                    // 0x4029b2
                    __overflow(g29, v124 % 256);
                    uint64_t v131 = *v3; // 0x4029ba
                    v126 = v131;
                    if (v131 < *v4) {
                        // break -> 0x40298c
                        break;
                    }
                }
                // 0x4029c8
                v122 = __uflow((struct _IO_FILE *)a1);
                v123 = v122;
                if (v122 == 10) {
                    // break (via goto) -> 0x4029e0
                    goto lab_0x4029e0;
                }
                // 0x40299c
                v124 = v122;
                v125 = v123;
                result = -1;
                if (v122 == -1) {
                    // break (via goto) -> 0x402a24
                    goto lab_0x402a24_2;
                }
            }
            // 0x40298c
            *v3 = v126 + 1;
            unsigned char v132 = *(char *)v126; // 0x402994
            if (v132 == 10) {
                goto lab_0x4029e5;
            }
            // 0x40299c
            v120 = v132;
            v121 = v132;
        }
      lab_0x4029e0:
        // 0x4029e0
        v90 = v122;
        v91 = v123;
        goto lab_0x4029e0_2;
    }
}
// Address range: 0x402dc0 - 0x40313d
int64_t function_402dc0(int64_t a1) {
    int32_t status = a1; // 0x402dd6
    if (status != 0) {
        // 0x402dda
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x402dff
        exit(status);
        // UNREACHABLE
    }
    // 0x402e06
    __printf_chk(1, dcgettext(NULL, "Usage: %s [-WIDTH] [OPTION]... [FILE]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Reformat each paragraph in the FILE(s), writing to standard output.\nThe option -WIDTH is an abbreviated form of --width=DIGITS.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -c, --crown-margin        preserve indentation of first two lines\n  -p, --prefix=STRING       reformat only lines beginning with STRING,\n                              reattaching the prefix to reformatted lines\n  -s, --split-only          split long lines, but do not refill\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  -t, --tagged-paragraph    indentation of first line different from second\n  -u, --uniform-spacing     one space between words, two after sentences\n  -w, --width=WIDTH         maximum line width (default of 75 columns)\n  -g, --goal=WIDTH          goal width (default of 93% of width)\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    int64_t v1 = &g2; // bp-136, 0x402f19
    bool v2; // 0x402dc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402fa0
    int64_t v6 = *(int64_t *)v5; // 0x402fa4
    int64_t v7 = 4; // 0x402faa
    while (v6 != 0) {
        int64_t v8 = (int64_t)"fmt";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402fb6
        char v11 = *(char *)v9; // 0x402fb6
        char v12 = v11; // 0x402fb6
        bool v13 = false; // 0x402fb6
        while (v10 == v11) {
            // 0x402fac
            v7--;
            int64_t v14 = v9 + v3; // 0x402fb6
            int64_t v15 = v8 + v3; // 0x402fb6
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
            // break -> 0x402fc2
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 4;
    }
    // 0x402fc2
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4030d4;
        } else {
            // 0x4030be
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403113
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403024;
            } else {
                goto lab_0x4030d4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x403024;
        } else {
            // 0x40300a
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x403113
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x403024;
            } else {
                goto lab_0x403024;
            }
        }
    }
  lab_0x4030d4:
    // 0x4030d4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403064
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402dff
    exit(status);
    // UNREACHABLE
  lab_0x403024:
    // 0x403024
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x403064
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x402dff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x403140 - 0x403148
int64_t function_403140(int64_t a1) {
    // 0x403140
    g65 = a1;
    int64_t result; // 0x403140
    return result;
}
// Address range: 0x403150 - 0x403158
int64_t function_403150(int64_t a1) {
    // 0x403150
    g64 = a1;
    int64_t result; // 0x403150
    return result;
}
// Address range: 0x403160 - 0x4031fe
int64_t function_403160(void) {
    // 0x403160
    int32_t * err_num; // 0x403176
    if ((int32_t)function_406b60((int64_t)g29) == 0) {
        goto lab_0x40318c;
    } else {
        // 0x403176
        err_num = __errno_location();
        if (g64 == 0) {
            goto lab_0x4031a3;
        } else {
            // 0x403187
            if (*err_num != 32) {
                goto lab_0x4031a3;
            } else {
                goto lab_0x40318c;
            }
        }
    }
  lab_0x40318c:;
    int64_t result = function_406b60((int64_t)g32); // 0x403193
    if ((int32_t)result == 0) {
        // 0x40319c
        return result;
    }
    // 0x4031de
    _exit(g18);
    // UNREACHABLE
  lab_0x4031a3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4031af
    if (g65 == 0) {
        // 0x4031e9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4031c3
        error(0, *err_num, "%s: %s", (char *)function_404cb0((int64_t)g65), v1);
    }
    // 0x4031de
    _exit(g18);
    // UNREACHABLE
}
// Address range: 0x403200 - 0x403205
int64_t function_403200(void) {
    // 0x403200
    int64_t fd; // 0x403200
    return posix_fadvise((int32_t)fd, (int32_t)fd, (int32_t)fd, (int32_t)fd);
}
// Address range: 0x403210 - 0x403231
int64_t function_403210(int64_t stream, int64_t advice, int64_t a3) {
    // 0x403210
    if (stream == 0) {
        // 0x403230
        int64_t result; // 0x403210
        return result;
    }
    // 0x403215
    return posix_fadvise(fileno((struct _IO_FILE *)stream), 0, 0, (int32_t)advice);
}
// Address range: 0x403240 - 0x4032d9
int64_t function_403240(int64_t str) {
    // 0x403240
    if (str == 0) {
        // 0x4032b9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40324e
    int64_t result = (int64_t)found_char_pos; // 0x40324e
    if (found_char_pos == NULL) {
        // 0x4032a9
        g66 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403258
    if (v1 - str < 7) {
        // 0x4032a9
        g66 = str;
        g31 = str;
        return result;
    }
    // 0x403268
    bool v2; // 0x403240
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403240
    int64_t v5 = result - 6; // 0x403240
    int64_t v6 = 7; // 0x403276
    unsigned char v7 = *(char *)v5; // 0x403276
    char v8 = *(char *)v4; // 0x403276
    char v9 = v8; // 0x403276
    bool v10 = false; // 0x403276
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
    int64_t v12 = (int64_t)"lt-"; // 0x403280
    int64_t v13 = v1; // 0x403280
    int64_t v14 = 3; // 0x403280
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4032a9
        g66 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x403292
    char v16 = *(char *)v12; // 0x403292
    char v17 = v16; // 0x403292
    bool v18 = false; // 0x403292
    while (v15 == v16) {
        // 0x403282
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
    int64_t v20 = v1; // 0x40329c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40329e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x4032a9
    g66 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x4032e0 - 0x4033d2
int64_t function_4032e0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x4032f4
    int64_t result = (int64_t)v1; // 0x4032f4
    if (result != a1) {
        // 0x403301
        return result;
    }
    int64_t v2 = function_406c20(); // 0x403310
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4033c6
    if (v3 == 85) {
        // 0x403320
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4033b8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g1;
            return result2;
        }
        char v4 = *v1; // 0x40334e
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x40335b
        // 0x403301
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4033b8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g1;
        return result2;
    }
    char v5 = *v1; // 0x40339d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x4033aa
    // 0x403301
    return result4;
}
// Address range: 0x4033e0 - 0x403437
int64_t function_4033e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x4033e0
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403428
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403437 - 0x404601
int64_t function_403437(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x403481
    int64_t v3 = 0; // 0x403481
    int64_t v4; // 0x403437
    int64_t v5; // 0x403437
    int64_t v6; // 0x403437
    int64_t v7; // 0x403437
    int64_t v8; // 0x403437
    int64_t v9; // 0x403437
    int64_t v10; // 0x403437
    int64_t v11; // 0x403437
    int64_t v12; // 0x403437
    int64_t v13; // 0x403437
    int64_t v14; // 0x403437
    int64_t v15; // 0x403437
    int64_t v16; // 0x403437
    int64_t v17; // 0x403437
    int64_t v18; // 0x403437
    int64_t result; // 0x403437
    int64_t v19; // 0x403437
    int32_t wc; // bp+132, 0x403437
    int64_t ps; // bp+136, 0x403437
    char v20; // 0x4039f0
    int64_t v21; // 0x4039f0
    int64_t v22; // 0x403d98
    int64_t v23; // 0x403437
    int64_t v24; // 0x403db7
    int32_t v25; // 0x403437
    while (true) {
      lab_0x403488_2:
        // 0x403488
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403437
        int64_t v27; // 0x4034bc
        while (true) {
          lab_0x403488:
            // 0x403488
            v5 = v26;
            bool v28 = v15 == v5; // 0x403493
            if (v15 == -1) {
                // 0x403495
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4034a3
            if (v28) {
                // break (via goto) -> 0x403c08
                goto lab_0x403c08;
            }
            // 0x4034ac
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g79 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x403a9b
                    if (v25 % 2 == 0) {
                        goto lab_0x4035e1;
                    }
                    // 0x403ebd
                    v26 = v5 + 1;
                    goto lab_0x403488;
                }
                case 7: {
                    goto lab_0x4035e1;
                }
                case 8: {
                    goto lab_0x4035e1;
                }
                case 9: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x4035e1;
                }
                case 12: {
                    goto lab_0x4035e1;
                }
                case 13: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4035ad;
                }
                case 36: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x4035e1;
                }
                case 38: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x4035e1;
                }
                case 44: {
                    goto lab_0x4035e1;
                }
                case 45: {
                    goto lab_0x4035e1;
                }
                case 46: {
                    goto lab_0x4035e1;
                }
                case 47: {
                    goto lab_0x4035e1;
                }
                case 48: {
                    goto lab_0x4035e1;
                }
                case 49: {
                    goto lab_0x4035e1;
                }
                case 50: {
                    goto lab_0x4035e1;
                }
                case 51: {
                    goto lab_0x4035e1;
                }
                case 52: {
                    goto lab_0x4035e1;
                }
                case 53: {
                    goto lab_0x4035e1;
                }
                case 54: {
                    goto lab_0x4035e1;
                }
                case 55: {
                    goto lab_0x4035e1;
                }
                case 56: {
                    goto lab_0x4035e1;
                }
                case 57: {
                    goto lab_0x4035e1;
                }
                case 58: {
                    goto lab_0x4035e1;
                }
                case 59: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x4035e1;
                }
                case 66: {
                    goto lab_0x4035e1;
                }
                case 67: {
                    goto lab_0x4035e1;
                }
                case 68: {
                    goto lab_0x4035e1;
                }
                case 69: {
                    goto lab_0x4035e1;
                }
                case 70: {
                    goto lab_0x4035e1;
                }
                case 71: {
                    goto lab_0x4035e1;
                }
                case 72: {
                    goto lab_0x4035e1;
                }
                case 73: {
                    goto lab_0x4035e1;
                }
                case 74: {
                    goto lab_0x4035e1;
                }
                case 75: {
                    goto lab_0x4035e1;
                }
                case 76: {
                    goto lab_0x4035e1;
                }
                case 77: {
                    goto lab_0x4035e1;
                }
                case 78: {
                    goto lab_0x4035e1;
                }
                case 79: {
                    goto lab_0x4035e1;
                }
                case 80: {
                    goto lab_0x4035e1;
                }
                case 81: {
                    goto lab_0x4035e1;
                }
                case 82: {
                    goto lab_0x4035e1;
                }
                case 83: {
                    goto lab_0x4035e1;
                }
                case 84: {
                    goto lab_0x4035e1;
                }
                case 85: {
                    goto lab_0x4035e1;
                }
                case 86: {
                    goto lab_0x4035e1;
                }
                case 87: {
                    goto lab_0x4035e1;
                }
                case 88: {
                    goto lab_0x4035e1;
                }
                case 89: {
                    goto lab_0x4035e1;
                }
                case 90: {
                    goto lab_0x4035e1;
                }
                case 91: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x4035e1;
                }
                case 94: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x4035e1;
                }
                case 96: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x4035e1;
                }
                case 98: {
                    goto lab_0x4035e1;
                }
                case 99: {
                    goto lab_0x4035e1;
                }
                case 100: {
                    goto lab_0x4035e1;
                }
                case 101: {
                    goto lab_0x4035e1;
                }
                case 102: {
                    goto lab_0x4035e1;
                }
                case 103: {
                    goto lab_0x4035e1;
                }
                case 104: {
                    goto lab_0x4035e1;
                }
                case 105: {
                    goto lab_0x4035e1;
                }
                case 106: {
                    goto lab_0x4035e1;
                }
                case 107: {
                    goto lab_0x4035e1;
                }
                case 108: {
                    goto lab_0x4035e1;
                }
                case 109: {
                    goto lab_0x4035e1;
                }
                case 110: {
                    goto lab_0x4035e1;
                }
                case 111: {
                    goto lab_0x4035e1;
                }
                case 112: {
                    goto lab_0x4035e1;
                }
                case 113: {
                    goto lab_0x4035e1;
                }
                case 114: {
                    goto lab_0x4035e1;
                }
                case 115: {
                    goto lab_0x4035e1;
                }
                case 116: {
                    goto lab_0x4035e1;
                }
                case 117: {
                    goto lab_0x4035e1;
                }
                case 118: {
                    goto lab_0x4035e1;
                }
                case 119: {
                    goto lab_0x4035e1;
                }
                case 120: {
                    goto lab_0x4035e1;
                }
                case 121: {
                    goto lab_0x4035e1;
                }
                case 122: {
                    goto lab_0x4035e1;
                }
                case 123: {
                    goto lab_0x403585;
                }
                case 124: {
                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x403585;
                }
                case 126: {
                    goto lab_0x4035ad;
                }
                default: {
                    goto lab_0x403985;
                }
            }
        }
      lab_0x403985:
        if (v23 != 1) {
            // 0x403cf0
            ps = 0;
            int64_t len = v15; // 0x403d00
            if (v15 == -1) {
                // 0x403d02
                len = strlen((char *)str);
            }
            // 0x403d2e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403d8f:
                // 0x403d8f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403d94
                int64_t v30 = v29 + str;
                v24 = function_406ae0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40430a_2;
                    }
                    case -1: {
                        goto lab_0x40430a_2;
                    }
                    case -2: {
                        // 0x4043ed
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404427
                            v19 = v18;
                            int64_t v31 = v18; // 0x40442a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404437
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404430
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40430a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40430a_2;
                    }
                    case 1: {
                        goto lab_0x403d60;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403e0c
                        char v34 = *(char *)v33; // 0x403e1d
                        unsigned char v35; // 0x403437
                        if (v34 < 125) {
                            // 0x403e28
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403e3f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403e10
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403e1d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403e28
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403e3f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403e10
                            v33++;
                        }
                        goto lab_0x403d60;
                    }
                }
            }
            goto lab_0x40430a_2;
        } else {
            // 0x4039d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x4035e1;
        }
    }
  lab_0x403c08:
    // 0x403c08
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40450a
        if (v8 > result) {
            // 0x404513
            *(char *)(v12 + result) = 0;
        }
        // 0x403837
        return result;
    }
    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x4035e1:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x4035f0
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4037fa_2;
        }
    }
    int64_t v39 = result; // 0x4036f1
    char v40 = v20; // 0x4036f1
    int64_t v41 = v38; // 0x4036f1
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x4036f1
    int64_t v43 = v36; // 0x4036f1
    goto lab_0x40366d;
  lab_0x4037fa_2:
    // 0x403837
    return function_4033e0(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40430a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x4035e1;
    } else {
        uint64_t v49 = v46 + v5; // 0x403ede
        int64_t v50 = v5 + 1; // 0x403fc1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403fc8
        char v52 = v20; // 0x403fc8
        int64_t v53 = result; // 0x403fc8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403f91
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403f95
            int64_t v56 = v54 + 1; // 0x403f9a
            int64_t v57 = v51 + 1; // 0x403fc1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403f8c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403f91
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403f95
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
        goto lab_0x40366d;
    }
  lab_0x403d60:
    // 0x403d60
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403d7f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403d82
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40430a
        goto lab_0x40430a_2;
    }
    goto lab_0x403d8f;
  lab_0x4035ad:
    // 0x4035ad
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4037fa_2;
    }
    goto lab_0x4035e1;
  lab_0x403585:;
    bool v60 = v15 == 1; // 0x403590
    if (v15 == -1) {
        // 0x403592
        v60 = *(char *)v1 == 0;
    }
    // 0x40359e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x4035e1;
    } else {
        goto lab_0x4035ad;
    }
  lab_0x40366d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403672
        *(char *)(v44 + v45) = v40;
    }
    // 0x403676
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x403488_2;
}
// Address range: 0x404610 - 0x4047ae
int64_t function_404610(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404612
    int32_t * v3 = __errno_location(); // 0x40462c
    int64_t v4 = (int64_t)g20; // 0x404631
    int32_t v5 = *v3; // 0x40463b
    int64_t v6 = v4; // 0x404651
    if (v2 >= (int64_t)*(int32_t *)&g23) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4047a9
            function_405670(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404660
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404667
        int64_t v9; // 0x404610
        if (g20 == &g21) {
            int64_t v10 = function_405480(0, v8); // 0x40478a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g21); // 0x40478f
            *(int64_t *)&g20 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_405480(v4, v8); // 0x40467b
            *(int64_t *)&g20 = v12;
            v9 = v12;
        }
        // 0x40468a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g23; // 0x40468a
        int32_t v14 = v7; // 0x404691
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g23 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4046c1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4046cb
    int64_t * v17 = (int64_t *)v15; // 0x4046ce
    uint64_t v18 = *v17; // 0x4046ce
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4046d1
    int64_t result = *v19; // 0x4046d1
    int64_t v20; // 0x404610
    uint64_t v21 = function_4033e0(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x4046f4
    if (v18 > v21) {
        // 0x40476b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404707
    *v17 = v22;
    if (result != (int64_t)&g67) {
        // 0x404717
        free((int64_t *)result);
    }
    int64_t result2 = function_405420(v22); // 0x404731
    *v19 = result2;
    int64_t v23; // 0x404610
    function_4033e0(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40476b
    *v3 = v5;
    return result2;
}
// Address range: 0x4047b0 - 0x4047e4
int64_t function_4047b0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4047b7
    int64_t result = function_405620(a1 == 0 ? (int64_t)&g68 : a1, 56); // 0x4047d6
    return result;
}
// Address range: 0x4047f0 - 0x4047ff
int64_t function_4047f0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g68 : a1); // 0x4047fc
    return result;
}
// Address range: 0x404800 - 0x40480f
int64_t function_404800(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g68 : a1; // 0x404808
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g68;
}
// Address range: 0x404810 - 0x404843
int64_t function_404810(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g68 + 8 : a1 + 8; // 0x404829
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40482e
    uint32_t v3 = *v2; // 0x40482e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404832
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404850 - 0x404863
int64_t function_404850(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g68 + 4 : a1 + 4); // 0x40485c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404870 - 0x40489b
int64_t function_404870(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g68 : a1; // 0x404878
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404895
        abort();
        // UNREACHABLE
    }
    // 0x40488c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g68;
}
// Address range: 0x4048a0 - 0x404912
int64_t function_4048a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g68 : a5; // 0x4048c2
    int32_t * v2 = __errno_location(); // 0x4048cb
    uint32_t v3 = *(int32_t *)v1; // 0x4048eb
    int64_t result = function_4033e0(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x4048fa
    return result;
}
// Address range: 0x404920 - 0x404a01
int64_t function_404920(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g68 : a4; // 0x404942
    int32_t * v2 = __errno_location(); // 0x404948
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404967
    int32_t * v4 = (int32_t *)v1; // 0x40496a
    int64_t v5 = function_4033e0(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404985
    int64_t v6 = v5 + 1; // 0x40498a
    int64_t result = function_405420(v6); // 0x40499f
    function_4033e0(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x4049e4
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x4049ed
    return result;
}
// Address range: 0x404a10 - 0x404a1a
int64_t function_404a10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a10
    return function_404920(a1, a2, 0, a3);
}
// Address range: 0x404a20 - 0x404ab5
int64_t function_404a20(void) {
    uint32_t v1 = *(int32_t *)&g23; // 0x404a20
    int64_t v2 = v1; // 0x404a20
    int64_t v3 = v2; // 0x404a34
    if (v1 >= 2) {
        int64_t v4 = &g23;
        int64_t v5 = v4 + 16; // 0x404a53
        free((int64_t *)*(int64_t *)v4);
        v3 = &g80;
        while (v5 != (int64_t)g20 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404a50
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g80;
        }
    }
    int64_t v6 = v3; // 0x404a6d
    if (g21 != 0x616320) {
        // 0x404a6f
        free((int64_t *)g21);
        g21 = 256;
        *(int64_t *)&g22 = (int64_t)&g67;
        v6 = &g80;
    }
    int64_t result = v6; // 0x404a91
    if (g20 != &g21) {
        // 0x404a93
        free(g20);
        *(int64_t *)&g20 = (int64_t)&g21;
        result = &g80;
    }
    // 0x404aa6
    *(int32_t *)&g23 = 1;
    return result;
}
// Address range: 0x404ac0 - 0x404ad1
int64_t function_404ac0(void) {
    // 0x404ac0
    int64_t v1; // 0x404ac0
    return function_404610(v1, v1, -1, (int64_t *)&g68);
}
// Address range: 0x404ae0 - 0x404aea
int64_t function_404ae0(void) {
    // 0x404ae0
    int64_t v1; // 0x404ae0
    return function_404610(v1, v1, v1, (int64_t *)&g68);
}
// Address range: 0x404af0 - 0x404b06
int64_t function_404af0(int64_t a1) {
    // 0x404af0
    return function_404610(0, a1, -1, (int64_t *)&g68);
}
// Address range: 0x404b10 - 0x404b22
int64_t function_404b10(int64_t a1, int64_t a2) {
    // 0x404b10
    return function_404610(0, a1, a2, (int64_t *)&g68);
}
// Address range: 0x404b30 - 0x404b98
int64_t function_404b30(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b40
    return function_404610((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404ba0 - 0x404c04
int64_t function_404ba0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404bb0
    return function_404610((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404c10 - 0x404c1c
int64_t function_404c10(int64_t a1, int64_t a2) {
    // 0x404c10
    return function_404b30(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404c20 - 0x404c2f
int64_t function_404c20(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404c20
    return function_404ba0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404c30 - 0x404ca0
int64_t function_404c30(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g68); // 0x404c3d
    int128_t v2 = __asm_movdqa(g69); // 0x404c45
    int128_t v3 = __asm_movdqa(g70); // 0x404c4d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404c62
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404c78
    uint32_t v6 = *v5; // 0x404c78
    uint32_t v7 = (int32_t)a3 % 32; // 0x404c7d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404610(0, a1, a2, &v4);
}
// Address range: 0x404ca0 - 0x404cad
int64_t function_404ca0(int64_t a1, int64_t a2) {
    // 0x404ca0
    return function_404c30(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404cb0 - 0x404cc1
int64_t function_404cb0(int64_t a1) {
    // 0x404cb0
    return function_404c30(a1, -1, 58);
}
// Address range: 0x404cd0 - 0x404cda
int64_t function_404cd0(void) {
    // 0x404cd0
    int64_t v1; // 0x404cd0
    return function_404c30(v1, v1, 58);
}
// Address range: 0x404ce0 - 0x404d4e
int64_t function_404ce0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404cfa
    return function_404610((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404d50 - 0x404dbc
int64_t function_404d50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g68); // 0x404d57
    int128_t v2 = __asm_movdqa(g69); // 0x404d5f
    int128_t v3 = __asm_movdqa(g70); // 0x404d67
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404d89
    if (a2 == 0 || a3 == 0) {
        // 0x404db7
        abort();
        // UNREACHABLE
    }
    // 0x404d9a
    return function_404610(a1, a4, a5, &v4);
}
// Address range: 0x404dc0 - 0x404dc9
int64_t function_404dc0(void) {
    // 0x404dc0
    int64_t v1; // 0x404dc0
    return function_404d50(v1, v1, v1, v1, -1);
}
// Address range: 0x404dd0 - 0x404de7
int64_t function_404dd0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404dd0
    return function_404d50(0, a1, a2, a3, -1);
}
// Address range: 0x404df0 - 0x404e03
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404df0
    return function_404d50(0, a1, a2, a3, a4);
}
// Address range: 0x404e10 - 0x404e1a
int64_t function_404e10(void) {
    // 0x404e10
    int64_t v1; // 0x404e10
    return function_404610(v1, v1, v1, &g19);
}
// Address range: 0x404e20 - 0x404e32
int64_t function_404e20(int64_t a1, int64_t a2) {
    // 0x404e20
    return function_404610(0, a1, a2, &g19);
}
// Address range: 0x404e40 - 0x404e51
int64_t function_404e40(void) {
    // 0x404e40
    int64_t v1; // 0x404e40
    return function_404610(v1, v1, -1, &g19);
}
// Address range: 0x404e60 - 0x404e76
int64_t function_404e60(int64_t a1) {
    // 0x404e60
    return function_404610(0, a1, -1, &g19);
}
// Address range: 0x404e80 - 0x40525d
int64_t function_404e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404f18
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404e9c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404eb6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404efb
    if (a6 < 10) {
        // 0x404f0a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x405002
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405260 - 0x405280
int64_t function_405260(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405260
    if (a5 == 0) {
        // 0x40527b
        return function_404e80(a1, a2, a3, a4, a5, 0, (int64_t)&g80);
    }
    int64_t v1 = 0; // 0x405267
    v1++;
    int64_t v2 = v1; // 0x405279
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405270
        v1++;
        v2 = v1;
    }
    // 0x40527b
    return function_404e80(a1, a2, a3, a4, a5, v2, (int64_t)&g80);
}
// Address range: 0x405280 - 0x4052e0
int64_t function_405280(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x405280
    int64_t v3 = &v2; // 0x405280
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4052b3
    int64_t v6; // 0x40529d
    int64_t * v7; // 0x4052bb
    int64_t v8; // 0x4052bb
    int64_t v9; // 0x4052c7
    if (v5 < 48) {
        // 0x405290
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4052d3
            break;
        }
    } else {
        // 0x4052bb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4052d3
            break;
        }
    }
    int64_t v10 = 10; // 0x4052b1
    while (v4 != 9) {
        // 0x4052a9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x405290
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4052d3
                break;
            }
        } else {
            // 0x4052bb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4052d3
                break;
            }
        }
        // 0x4052a9
        v10 = 10;
    }
    // 0x4052d3
    return function_404e80(a1, a2, a3, a4, v3, v10, (int64_t)&g80);
}
// Address range: 0x4052e0 - 0x40539c
int64_t function_4052e0(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x4052e0
    int64_t v1; // bp-168, 0x4052e0
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x4052e0
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x4052e0
    int64_t v8; // 0x4052e0
    int64_t v9; // bp-56, 0x4052e0
    int64_t v10; // 0x405345
    int64_t v11; // 0x405369
    if ((int32_t)v6 < 48) {
        // 0x405330
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x405380
            break;
        }
    } else {
        // 0x405362
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x405380
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40535a
    int64_t v13 = 10; // 0x40535a
    while (v5 != 9) {
        // 0x40535c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405330
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x405380
                break;
            }
        } else {
            // 0x405362
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x405380
                break;
            }
        }
        // 0x405352
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x405380
    int64_t v14; // bp-136, 0x4052e0
    int64_t result = function_404e80(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g80); // 0x40538f
    return result;
}
// Address range: 0x4053a0 - 0x405414
int64_t function_4053a0(int64_t a1) {
    // 0x4053a0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405403
    return fputs_unlocked(v1, g29);
}
// Address range: 0x405420 - 0x40543a
int64_t function_405420(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405424
    if (size != 0 != (mem == NULL)) {
        // 0x405433
        return (int64_t)mem;
    }
    // 0x405435
    function_405670(size);
    // UNREACHABLE
}
// Address range: 0x405440 - 0x405461
int64_t function_405440(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405443
    int64_t v2 = v1; // 0x405443
    if (v2 < 0) {
        // 0x40545b
        function_405670(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405459
        return function_405420(v2);
    }
    // 0x40545b
    function_405670(v2);
    // UNREACHABLE
}
// Address range: 0x405470 - 0x405472
int64_t function_405470(void) {
    // 0x405470
    int64_t v1; // 0x405470
    return function_405420(v1);
}
// Address range: 0x405480 - 0x4054b6
int64_t function_405480(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4054a8
        free(v1);
        return (int32_t)&g80 ^ (int32_t)&g80;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405491
    if (a2 != 0 != (mem == NULL)) {
        // 0x4054a0
        return (int64_t)mem;
    }
    // 0x4054b1
    function_405670(a1);
    // UNREACHABLE
}
// Address range: 0x4054c0 - 0x4054e1
int64_t function_4054c0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4054c3
    int64_t v2 = v1; // 0x4054c3
    if (v2 < 0) {
        // 0x4054db
        function_405670(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4054d9
        return function_405480(a1, v2);
    }
    // 0x4054db
    function_405670(a1);
    // UNREACHABLE
}
// Address range: 0x4054f0 - 0x405576
int64_t function_4054f0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40554b
            function_405670(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405480(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405533
    if (a2 == 0) {
        // 0x405558
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405538
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40554b
        function_405670(a1);
        // UNREACHABLE
    }
    // 0x40551a
    *(int64_t *)a2 = v2;
    return function_405480(a1, v2 * a3);
}
// Address range: 0x405580 - 0x4055d0
int64_t function_405580(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x405580
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4055ca
            function_405670(a1);
            // UNREACHABLE
        }
        // 0x4055a2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_405480(a1, v1);
    }
    if (a2 == 0) {
        // 0x4055b5
        *(int64_t *)a2 = 128;
        return function_405480(0, 128);
    }
    // 0x4055c8
    if (a2 < 0) {
        // 0x4055ca
        function_405670(a1);
        // UNREACHABLE
    }
    // 0x4055a2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_405480(a1, v1);
}
// Address range: 0x4055d0 - 0x4055e7
int64_t function_4055d0(int64_t a1, int64_t a2) {
    // 0x4055d0
    return (int64_t)memset((int64_t *)function_405420(a1), 0, (int32_t)a1);
}
// Address range: 0x4055f0 - 0x40561e
int64_t function_4055f0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x4055f7
    if ((int64_t)v1 < 0) {
        // 0x405619
        function_405670(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405619
        function_405670(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40560a
    if (mem != NULL) {
        // 0x405614
        return (int64_t)mem;
    }
    // 0x405619
    function_405670(nmemb);
    // UNREACHABLE
}
// Address range: 0x405620 - 0x405648
int64_t function_405620(int64_t a1, int64_t a2) {
    int64_t v1 = function_405420(a2); // 0x40562f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405650 - 0x405663
int64_t function_405650(int64_t str) {
    // 0x405650
    return function_405620(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405670 - 0x4056a1
int64_t function_405670(int64_t a1) {
    // 0x405670
    error(g18, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4056b0 - 0x405780
int64_t function_4056b0(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x4056b0
    int64_t result2; // bp-64, 0x4056b0
    int32_t v1 = function_4057b0(a1, 0, a2 & 0xffffffff, &result2, a5, a6); // 0x4056dc
    int32_t * v2; // 0x4056b0
    if (v1 != 0) {
        int32_t * v3 = __errno_location(); // 0x40575a
        if (v1 == 1) {
            // 0x405778
            *v3 = 75;
            v2 = v3;
        } else {
            // 0x405767
            v2 = v3;
            if (v1 == 3) {
                // 0x40576c
                *v3 = 0;
                v2 = v3;
            }
        }
    } else {
        uint64_t result = result2; // 0x4056e0
        if (result >= a3 && result <= a4) {
            // 0x405742
            return result;
        }
        int32_t * v4 = __errno_location(); // 0x4056ef
        *v4 = result < 0x40000000 ? 34 : 75;
        v2 = v4;
    }
    int64_t v5 = function_404e60(a1); // 0x40570c
    int32_t v6 = *v2; // 0x405711
    int32_t err_num = v6 == 22 ? 0 : v6; // 0x405727
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v5);
    // 0x405742
    return result2;
}
// Address range: 0x405780 - 0x4057a1
int64_t function_405780(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t a5, int32_t a6) {
    // 0x405780
    int64_t result; // 0x405780
    return result;
}
// Address range: 0x4057b0 - 0x405bf0
int64_t function_4057b0(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x4057be
    if (v1 >= 37) {
        // 0x405bcb
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g80;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x4057e2
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x405812
    int64_t v4 = a1; // 0x405817
    char v5 = c; // 0x405817
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x40580c
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x405808
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x405819
    if (v5 == 45) {
        // 0x405855
        return 4;
    }
    // 0x40581e
    int64_t v7; // bp-64, 0x4057b0
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x4057de
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x405826
    int64_t * v10 = (int64_t *)v8; // 0x40582b
    int64_t v11 = *v10; // 0x40582b
    char v12; // 0x4057b0
    int64_t v13; // 0x4057b0
    int64_t v14; // 0x4057b0
    int64_t v15; // 0x4057b0
    int64_t v16; // 0x4057b0
    int64_t v17; // 0x4057b0
    int64_t v18; // 0x4057b0
    if (v11 == a1) {
        // 0x405888
        if (c == 0 || str == 0) {
            // 0x405855
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x4058a9
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x405855
            return 4;
        }
        goto lab_0x4058b7;
    } else {
        int32_t v19 = *v2; // 0x405836
        int64_t v20 = 0; // 0x40583c
        if (v19 != 0) {
            // 0x405870
            v20 = 1;
            if (v19 != 34) {
                // 0x405855
                return 4;
            }
        }
        int64_t v21 = v9; // 0x405826
        v16 = v21;
        v13 = v20;
        if (str == 0) {
            goto lab_0x405852;
        } else {
            char c2 = *(char *)v11; // 0x405845
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x4059b3
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x4058b7;
                } else {
                    goto lab_0x4059c5;
                }
            } else {
                goto lab_0x405852;
            }
        }
    }
  lab_0x4058b7:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x4058bf
    int64_t v24 = 1; // 0x4058bf
    int64_t v25; // 0x4057b0
    int64_t v26; // 0x4057b0
    int64_t v27; // 0x4057b0
    int64_t v28; // 0x4057b0
    int64_t v29; // 0x4057b0
    int64_t v30; // 0x4057b0
    int64_t v31; // 0x4057b0
    int64_t v32; // 0x4057b0
    int64_t v33; // 0x4057b0
    int64_t v34; // 0x4057b0
    int64_t v35; // 0x4057b0
    int64_t v36; // 0x4057b0
    int64_t v37; // 0x4057b0
    int64_t v38; // 0x4057b0
    int64_t v39; // 0x4057b0
    int64_t v40; // 0x4057b0
    int64_t v41; // 0x4057b0
    int64_t v42; // 0x4057b0
    int64_t v43; // 0x4057b0
    int64_t v44; // 0x4057b0
    if (v22 < 48) {
        // 0x4058c1
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40592a;
        } else {
            // 0x4058d4
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40592a;
            } else {
                // 0x4058f0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x40592a;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x405b59
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x40592a;
                    }
                    default: {
                        // 0x405905
                        g77 = v22;
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
                                goto lab_0x405acb;
                            }
                            case 70: {
                                goto lab_0x4059c5;
                            }
                            case 71: {
                                goto lab_0x405b03;
                            }
                            case 72: {
                                goto lab_0x4059c5;
                            }
                            case 73: {
                                goto lab_0x4059c5;
                            }
                            case 74: {
                                goto lab_0x4059c5;
                            }
                            case 75: {
                                goto lab_0x40598c;
                            }
                            case 76: {
                                goto lab_0x4059c5;
                            }
                            case 77: {
                                goto lab_0x40594e;
                            }
                            case 78: {
                                goto lab_0x4059c5;
                            }
                            case 79: {
                                goto lab_0x4059c5;
                            }
                            case 80: {
                                goto lab_0x405a98;
                            }
                            case 81: {
                                goto lab_0x4059c5;
                            }
                            case 82: {
                                goto lab_0x4059c5;
                            }
                            case 83: {
                                goto lab_0x4059c5;
                            }
                            case 84: {
                                goto lab_0x405a68;
                            }
                            case 85: {
                                goto lab_0x4059c5;
                            }
                            case 86: {
                                goto lab_0x4059c5;
                            }
                            case 87: {
                                goto lab_0x4059c5;
                            }
                            case 88: {
                                goto lab_0x4059c5;
                            }
                            case 89: {
                                goto lab_0x405a36;
                            }
                            case 90: {
                                goto lab_0x4059fb;
                            }
                            case 91: {
                                goto lab_0x4059c5;
                            }
                            case 92: {
                                goto lab_0x4059c5;
                            }
                            case 93: {
                                goto lab_0x4059c5;
                            }
                            case 94: {
                                goto lab_0x4059c5;
                            }
                            case 95: {
                                goto lab_0x4059c5;
                            }
                            case 96: {
                                goto lab_0x4059c5;
                            }
                            case 97: {
                                goto lab_0x4059c5;
                            }
                            case 98: {
                                goto lab_0x4059df;
                            }
                            case 99: {
                                goto lab_0x405968;
                            }
                            case 100: {
                                goto lab_0x4059c5;
                            }
                            case 101: {
                                goto lab_0x4059c5;
                            }
                            case 102: {
                                goto lab_0x4059c5;
                            }
                            case 103: {
                                goto lab_0x405b03;
                            }
                            case 104: {
                                goto lab_0x4059c5;
                            }
                            case 105: {
                                goto lab_0x4059c5;
                            }
                            case 106: {
                                goto lab_0x4059c5;
                            }
                            case 107: {
                                goto lab_0x40598c;
                            }
                            case 108: {
                                goto lab_0x4059c5;
                            }
                            case 109: {
                                goto lab_0x40594e;
                            }
                            case 110: {
                                goto lab_0x4059c5;
                            }
                            case 111: {
                                goto lab_0x4059c5;
                            }
                            case 112: {
                                goto lab_0x4059c5;
                            }
                            case 113: {
                                goto lab_0x4059c5;
                            }
                            case 114: {
                                goto lab_0x4059c5;
                            }
                            case 115: {
                                goto lab_0x4059c5;
                            }
                            case 116: {
                                goto lab_0x405a68;
                            }
                            default: {
                                goto lab_0x40592a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40592a;
    }
  lab_0x405852:
    // 0x405852
    *a4 = v16;
    // 0x405855
    return v13 & 0xffffffff;
  lab_0x40592a:
    // 0x40592a
    g78 = v12 - 66;
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
    int64_t v46; // 0x4057b0
    switch (v12) {
        case 66: {
            // 0x405b24
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x405997;
            } else {
                // 0x405b31
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405968;
            }
        }
        case 69: {
            goto lab_0x405acb;
        }
        case 71: {
            goto lab_0x405b03;
        }
        case 75: {
            goto lab_0x40598c;
        }
        case 77: {
            goto lab_0x40594e;
        }
        case 80: {
            goto lab_0x405a98;
        }
        case 84: {
            goto lab_0x405a68;
        }
        case 89: {
            goto lab_0x405a36;
        }
        case 90: {
            goto lab_0x4059fb;
        }
        case 98: {
            goto lab_0x4059df;
        }
        case 99: {
            goto lab_0x405968;
        }
        case 103: {
            goto lab_0x405b03;
        }
        case 107: {
            goto lab_0x40598c;
        }
        case 109: {
            goto lab_0x40594e;
        }
        case 116: {
            goto lab_0x405a68;
        }
        case 119: {
            // 0x4059d0
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x405997;
            } else {
                // 0x4059d5
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x405968;
            }
        }
        default: {
            goto lab_0x4059c5;
        }
    }
  lab_0x405acb:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x405ae3
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x405aef
    int64_t v51 = v48; // 0x405af2
    int64_t v52 = v37; // 0x405af2
    int64_t v53 = v49; // 0x405af2
    int32_t v54 = v50; // 0x405af2
    int64_t v55 = v49; // 0x405af2
    while (v50 != 0) {
        // 0x405ae0
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
    goto lab_0x405a24;
  lab_0x405b03:
    // 0x405b03
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x405b0e
        int128_t v56; // 0x405b09
        uint128_t v57; // 0x405b09
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x405b0e
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x4057b0
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x405b13
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x405b18
                v26 = v60;
                int64_t v61; // 0x4057b0
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x405968;
  lab_0x40598c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40598f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x405968;
    } else {
        goto lab_0x405997;
    }
  lab_0x40594e:;
    int128_t v65 = v27; // 0x405954
    uint128_t v66 = v65 * (int128_t)v17; // 0x405954
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x405997;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x405959
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x405997;
        } else {
            // 0x40595e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x405968;
        }
    }
  lab_0x405a98:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x405aab
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x405ab7
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x405aba
    int64_t v73 = v70; // 0x405aba
    while (v71 != 0) {
        // 0x405aa8
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
    goto lab_0x405a24;
  lab_0x405a68:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x405a7b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x405a87
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x405a8a
    int64_t v79 = v76; // 0x405a8a
    while (v77 != 0) {
        // 0x405a78
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
    goto lab_0x405a24;
  lab_0x405a36:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x405a4b
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x405a57
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x405a5a
    int64_t v85 = v82; // 0x405a5a
    while (v83 != 0) {
        // 0x405a48
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
    goto lab_0x405a24;
  lab_0x4059fb:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x405a13
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x405a1f
    int32_t v90 = v89; // 0x405a22
    int64_t v91 = v88; // 0x405a22
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x405a10
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
    goto lab_0x405a24;
  lab_0x4059df:
    // 0x4059df
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x405997;
    } else {
        // 0x4059e8
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x405968;
    }
  lab_0x405968:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40596d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x405852;
  lab_0x4059c5:
    // 0x4059c5
    *a4 = v18;
    // 0x405855
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405997:
    // 0x405997
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x405968;
  lab_0x405a24:
    // 0x405a24
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x405968;
}
// Address range: 0x405bf0 - 0x405c6b
int64_t function_405bf0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405bf7
    if (fileno(stream) < 0) {
        // 0x405c57
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405c0a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x405c3b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x405c57
            return fclose(stream);
        }
    }
    // 0x405c0c
    if ((int32_t)function_405c70(a1, v1) == 0) {
        // 0x405c57
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x405c18
    int32_t v3 = *v2; // 0x405c20
    int64_t result = fclose(stream); // 0x405c2e
    if (v3 != 0) {
        // 0x405c60
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x405c30
    return result;
}
// Address range: 0x405c70 - 0x405cb0
int64_t function_405c70(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x405c8a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x405c8a
        return fflush(stream);
    }
    // 0x405c98
    function_405cb0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x405cb0 - 0x405d07
int64_t function_405cb0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x405cb0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x405cba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x405ceb
    int64_t result = -1; // 0x405cf4
    if (v1 != -1) {
        // 0x405cf6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x405d02
    return result;
}
// Address range: 0x405d10 - 0x405def
int64_t function_405d10(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x405d1c
    uint32_t v2 = *v1; // 0x405d1c
    int64_t v3 = a2 & 0xffffffff; // 0x405d21
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405d24
    uint64_t v5 = (int64_t)*v4; // 0x405d24
    int64_t v6; // 0x405d92
    if (v3 <= v5) {
      lab_0x405d8c_2:
        // 0x405d8c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405d12
    int64_t v8 = v2; // 0x405d10
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x405d8c
        goto lab_0x405d8c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x405d48
    int64_t v17; // 0x405d56
    int64_t * v18; // 0x405d70
    int64_t * v19; // 0x405d73
    int64_t v20; // 0x405d7e
    int64_t v21; // 0x405d56
    while ((v16 & 0xffffffff) > v10) {
        // 0x405d53
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x405d70
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x405d87
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x405d8c
            goto lab_0x405d8c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x405d8c
            goto lab_0x405d8c_2;
        }
        // 0x405d42
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x405dcb
    int64_t * v23 = (int64_t *)v22; // 0x405dd0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405dd3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405dd0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405de7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x405d3d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x405d8c
            goto lab_0x405d8c_2;
        }
        // 0x405d42
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x405d53
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x405d70
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x405d87
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x405d8c
                goto lab_0x405d8c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x405d8c
                goto lab_0x405d8c_2;
            }
            // 0x405d42
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405db0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405dd0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405de7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x405d8c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405df0 - 0x40640c
int64_t function_405df0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x405e0f
    int64_t v2 = *v1; // 0x405e0f
    char * str2 = (char *)v2; // 0x405e1c
    char c = *str2; // 0x405e1c
    int64_t v3 = v2; // 0x405e48
    int64_t v4 = 0; // 0x405df0
    int32_t v5; // 0x405df0
    int64_t v6; // 0x405df0
    int64_t v7; // 0x405df0
    int64_t v8; // 0x405df0
    int64_t v9; // 0x405df0
    int64_t v10; // 0x405df0
    int64_t v11; // 0x405df0
    int64_t v12; // 0x405df0
    int64_t v13; // 0x405df0
    int64_t str3; // 0x405df0
    int64_t v14; // 0x405df0
    int64_t v15; // 0x405df0
    int64_t v16; // 0x405df0
    int64_t v17; // 0x405df0
    int32_t v18; // 0x405df0
    int32_t v19; // 0x405df0
    int32_t v20; // 0x405df0
    int32_t v21; // 0x405df0
    int32_t v22; // 0x405df0
    int32_t v23; // 0x405df0
    int32_t v24; // 0x405df0
    int32_t v25; // 0x405df0
    int32_t v26; // 0x405df0
    int32_t v27; // 0x405df0
    int32_t v28; // 0x405df0
    int32_t v29; // 0x405df0
    int64_t nmemb; // 0x405df0
    int64_t v30; // 0x405df0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x405e4c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405e48
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405e58
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x405e5e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405e28
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x405e8c
                int64_t v34; // 0x405df0
                int64_t v35; // 0x405df0
                if (strncmp(str, str2, n) == 0) {
                    // 0x405e95
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x406010;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405ea6
                int64_t v37 = *(int64_t *)v36; // 0x405eaa
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x405e80
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405e95
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x406010;
                        }
                    }
                    // 0x405ea6
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
                  lab_0x405ef6:
                    // 0x405ef6
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
                        goto lab_0x405f50;
                    } else {
                        if (v11 == 0) {
                            // 0x4060c0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405f50;
                        } else {
                            if (v39 == 0) {
                                // 0x406070
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405f1a;
                                } else {
                                    // 0x40607c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405f1a;
                                    } else {
                                        // 0x40608a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405f1a;
                                        } else {
                                            goto lab_0x405f50;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405f1a;
                            }
                        }
                    }
                }
              lab_0x405f61:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x406136
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x4062e2
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x406302
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40634f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x406369
                            int64_t v45; // 0x40636b
                            if (*(char *)v42 != 0) {
                                // 0x40636b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x406363
                            while (v17 + nmemb != v42) {
                                // 0x406365
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40636b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x406358
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x406390
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x406144
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40629f
                        free((int64_t *)v17);
                    }
                    // 0x406199
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x4061b0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40605e
                    return 63;
                }
                // 0x405f80
                v5 = v39;
                if (v13 != 0) {
                    // 0x406004
                    v35 = v13;
                    v34 = v25;
                  lab_0x406010:;
                    int32_t * v49 = (int32_t *)a7; // 0x406020
                    uint32_t v50 = *v49; // 0x406020
                    int64_t v51 = v50; // 0x406020
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40602a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x406033
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40625f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40620a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40605e
                            return 63;
                        }
                        // 0x4060a8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x4063bf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x4062bd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x4062d0
                                // 0x40605e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x4061ce
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x4061e2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40604b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40604e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x406052
                    int64_t result = v59; // 0x406058
                    if (v58 != 0) {
                        // 0x40605a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40605e
                    return result;
                }
            } else {
                // 0x405e5e
                v5 = v32;
            }
            // break -> 0x405f85
            break;
        }
    }
    // 0x405f85
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405f9d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405fa7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40605e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x4060e9
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405fd6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405fe6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405f50:
    // 0x405f50
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405f50
    int64_t v63 = *(int64_t *)v62; // 0x405f54
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405f61
        goto lab_0x405f61;
    }
    goto lab_0x405ef6;
  lab_0x405f1a:
    // 0x405f1a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405df0
    int32_t v65; // 0x405df0
    int32_t v66; // 0x405df0
    if (v27 != 0) {
        goto lab_0x405f50;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x4060d0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405f50;
            } else {
                goto lab_0x405f41;
            }
        } else {
            // 0x405f35
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40622c
                int64_t v67 = (int64_t)mem; // 0x40622c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405f50;
                } else {
                    // 0x40623f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405f41;
                }
            } else {
                goto lab_0x405f41;
            }
        }
    }
  lab_0x405f41:
    // 0x405f41
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405f50;
}
// Address range: 0x406410 - 0x4069d6
int64_t function_406410(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x406431
    if (v3 < 1) {
        // 0x4065ee
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40642d
    int32_t v5 = *(int32_t *)a7; // 0x406439
    uint64_t v6 = a1 & 0xffffffff; // 0x40643b
    int64_t v7 = v2; // 0x406440
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x406443
    *v8 = 0;
    int64_t v9; // 0x406410
    int64_t v10; // 0x406410
    int64_t v11; // 0x406410
    int64_t v12; // 0x406410
    int64_t str; // 0x406410
    int64_t v13; // 0x406410
    int64_t v14; // 0x406410
    int64_t v15; // 0x406410
    int64_t v16; // 0x406410
    int64_t v17; // 0x406410
    int32_t v18; // 0x406410
    char v19; // 0x406410
    if (v5 == 0) {
        // 0x406628
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40645a;
    } else {
        // 0x406453
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4064a0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4064a3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406568;
            } else {
                int64_t v22 = v7 + 1; // 0x4064b6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4064c6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40657c;
                } else {
                    goto lab_0x4064d8;
                }
            }
        } else {
            goto lab_0x40645a;
        }
    }
  lab_0x40645a:
    // 0x40645a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x406460
    *v24 = 0;
    int64_t v25; // 0x406410
    int64_t v26; // 0x406410
    int64_t v27; // 0x406410
    switch (*(char *)&v2) {
        case 45: {
            // 0x406550
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40655d;
        }
        case 43: {
            // 0x406860
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40655d;
        }
        default: {
            // 0x40647c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4067df
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x4068f8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40655d;
                } else {
                    // 0x4067ed
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40648a;
                }
            } else {
                goto lab_0x40648a;
            }
        }
    }
  lab_0x406568:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40656f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4064d8;
    } else {
        goto lab_0x40657c;
    }
  lab_0x40648a:
    // 0x40648a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40655d;
  lab_0x40655d:
    // 0x40655d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406568;
  lab_0x4064d8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4064d8
    int64_t v31 = v30; // 0x4064d8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4064da
    if ((int64_t)*v32 > v31) {
        // 0x4064df
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x4064e2
    if (*v33 > v30) {
        // 0x4064e7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x4064ea
    int64_t v35 = v31; // 0x4064ee
    int64_t v36 = v15; // 0x4064ee
    int64_t v37; // 0x406410
    int64_t v38; // 0x406410
    int64_t v39; // 0x406410
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406658
        int64_t v41 = v40; // 0x406658
        v2 = v41;
        int64_t v42; // 0x406410
        if (*v33 == v40) {
            // 0x406840
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406848
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406664
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406668
                function_405d10(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x406678
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x406681
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40668a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4066a1
            int64_t v47 = v45 & 0xffffffff; // 0x4066a5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4066ae
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4066b4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4066b6;
                }
            }
            int64_t v48 = v47 + 1; // 0x406690
            int64_t v49 = v48 & 0xffffffff; // 0x406690
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4066a1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4066ae
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4066b4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4066b6;
                    }
                }
                // 0x406690
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406858
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4066b6;
    } else {
        goto lab_0x4064f4;
    }
  lab_0x40657c:
    // 0x40657c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40657f
    int64_t v51 = v12; // 0x40657f
    int64_t v52 = v14; // 0x40657f
    if (*(char *)v10 == 0) {
        goto lab_0x4064d8;
    } else {
        goto lab_0x406585;
    }
  lab_0x4064f4:;
    int32_t v53 = v35; // 0x4064f4
    int64_t v54; // 0x406410
    int64_t v55; // 0x406410
    int64_t v56; // 0x406410
    int64_t v57; // 0x406410
    int64_t v58; // 0x406410
    int64_t v59; // 0x406410
    char * v60; // 0x406410
    int64_t v61; // 0x406410
    int64_t v62; // 0x406509
    int64_t v63; // 0x406410
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406643
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406646;
    } else {
        // 0x4064fc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x406410
        int64_t v66 = v65 ? -1 : 1; // 0x406510
        int64_t v67 = (int64_t)"--"; // 0x406410
        int64_t v68 = v62; // 0x406410
        int64_t v69 = 3; // 0x406510
        unsigned char v70 = *(char *)v68; // 0x406510
        char v71 = *(char *)v67; // 0x406510
        char v72 = v71; // 0x406510
        bool v73 = false; // 0x406510
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
            // 0x406600
            if (*(char *)v62 == 45) {
                // 0x4066c0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4066c0
                if (c == 0) {
                    goto lab_0x40660a;
                } else {
                    // 0x4066cd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406750;
                    } else {
                        if (c == 45) {
                            // 0x406933
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4067a5;
                        } else {
                            // 0x4066de
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406750;
                            } else {
                                // 0x4066e3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406704;
                                } else {
                                    // 0x4066ea
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406750;
                                    } else {
                                        goto lab_0x406704;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40660a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406520
            v2 = v75;
            int32_t v76 = *v32; // 0x406523
            int64_t v77 = v35 + 1; // 0x406526
            int32_t v78 = v77; // 0x406529
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406890
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406537
                    function_405d10(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406545
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406646;
        }
    }
  lab_0x406585:;
    // 0x406585
    int64_t v79; // bp-104, 0x406410
    int64_t v80 = &v79; // 0x40641a
    int64_t v81 = v50 + 1; // 0x406585
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40658c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x406591
    *v83 = v81;
    char v84 = *(char *)v2; // 0x406595
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x406599
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4065a1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4065a6
    int32_t c2 = v84; // 0x4065a6
    char * found_char_pos = strchr(str2, c2); // 0x4065a6
    int64_t v87 = *v82; // 0x4065ab
    v2 = v87;
    int64_t v88 = *v85; // 0x4065b5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4065c0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4068b0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40687d
        *(int32_t *)(v1 + 8) = c2;
        // 0x4065ee
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4065a6
    char v91 = *(char *)(v90 + 1); // 0x4065db
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x406595
        if (v91 != 58) {
            // 0x4065ee
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406804
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406908
                *v8 = 0;
            } else {
                // 0x4068ec
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40682e
            *v83 = 0;
            // 0x4065ee
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40680e
        if (v93 != 0) {
            // 0x4068a0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40682e
            *v83 = 0;
            // 0x4065ee
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406821
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40682e
            *v83 = 0;
            // 0x4065ee
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40696a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40691a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406921
        // 0x40682e
        *v83 = 0;
        // 0x4065ee
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x406779
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40677b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4069a0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406951
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406958
            // 0x4065ee
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x406786
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40678a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4067a5;
  lab_0x4066b6:
    // 0x4066b6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x4064f4;
  lab_0x4067a5:;
    int64_t v99 = function_405df0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4067c3
    // 0x4065ee
    return v99 & 0xffffffff;
  lab_0x406646:;
    int32_t v100 = v55; // 0x406646
    if (v100 != (int32_t)v59) {
        // 0x40664a
        *(int32_t *)a7 = v100;
    }
    // 0x4065ee
    return 0xffffffff;
  lab_0x40660a:
    // 0x40660a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406611
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x4065ee
    return v99 & 0xffffffff;
  lab_0x406750:
    // 0x406750
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x406585;
  lab_0x406704:
    // 0x406704
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405df0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)&g9); // 0x40672a
    if ((int32_t)v101 != -1) {
        // 0x4065ee
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40673f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406750;
}
// Address range: 0x4069e0 - 0x406a36
int64_t function_4069e0(int64_t a1) {
    // 0x4069e0
    *(int32_t *)&g71 = g26;
    *(int32_t *)&g72 = g25;
    int64_t v1; // 0x4069e0
    int64_t result = function_406410(v1, v1, v1, v1, v1, v1, &g71, a1 & 0xffffffff); // 0x406a06
    g26 = *(int32_t *)&g71;
    g76 = (char *)g74;
    *(int32_t *)&g24 = g73;
    return result;
}
// Address range: 0x406a40 - 0x406a58
int64_t function_406a40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406a40
    return function_4069e0(1);
}
// Address range: 0x406a60 - 0x406a73
int64_t function_406a60(int64_t a1, int64_t a2, char * a3, char (**a4)[13], int32_t a5, int64_t a6) {
    // 0x406a60
    return function_4069e0(0);
}
// Address range: 0x406a80 - 0x406a95
int64_t function_406a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406a80
    return function_406410(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406aa0 - 0x406ab6
int64_t function_406aa0(void) {
    // 0x406aa0
    return function_4069e0(0);
}
// Address range: 0x406ac0 - 0x406ad8
int64_t function_406ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406ac0
    return function_406410(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406ae0 - 0x406b5a
int64_t function_406ae0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x406aeb
    int64_t v2 = (int64_t)&g10; // 0x406aeb
    int32_t * pwc; // 0x406ae0
    int64_t v3; // 0x406ae0
    int64_t n; // 0x406ae0
    if (a2 == 0) {
        goto lab_0x406b32;
    } else {
        // 0x406aed
        if (a3 == 0) {
            // 0x406b18
            return -2;
        }
        // 0x406af9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406b32;
        } else {
            goto lab_0x406b04;
        }
    }
  lab_0x406b32:
    // 0x406b32
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406ae0
    pwc = (int32_t *)&v4;
    goto lab_0x406b04;
  lab_0x406b04:;
    char * wstr = (char *)v3; // 0x406b0a
    int64_t ps; // 0x406ae0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x406b0a
    int64_t result = v5; // 0x406b0a
    if (v5 < 0xfffffffe) {
        // 0x406b18
        return result;
    }
    int64_t result2 = result; // 0x406b49
    if ((char)function_406bc0(0, v3) == 0) {
        // 0x406b4b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406b18
    return result2;
}
// Address range: 0x406b60 - 0x406bbd
int64_t function_406b60(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406b67
    int64_t v2; // 0x406b60
    int64_t result = function_405bf0(a1, v2); // 0x406b78
    if ((v2 & 32) != 0) {
        // 0x406ba0
        if ((int32_t)result == 0) {
            // 0x406ba4
            *__errno_location() = 0;
        }
        // 0x406b9a
        return 0xffffffff;
    }
    // 0x406b81
    if ((int32_t)result == 0) {
        // 0x406b9a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406b88
    if (v1 == 0) {
        // 0x406b8a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x406b9a
    return result2;
}
// Address range: 0x406bc0 - 0x406c1e
int64_t function_406bc0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406bc6
    if (locale == NULL) {
        // 0x406bf3
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406bc6
    bool v2; // 0x406bc0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g11; // 0x406bc0
    int64_t v5 = v1; // 0x406bc0
    int64_t v6 = 2; // 0x406be5
    unsigned char v7 = *(char *)v5; // 0x406be5
    char v8 = *(char *)v4; // 0x406be5
    char v9 = v8; // 0x406be5
    bool v10 = false; // 0x406be5
    while (v7 == v8) {
        // 0x406bd8
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406bf1
    int64_t v13 = v1; // 0x406bf1
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406bf3
        return 0;
    }
    int64_t v14 = 6; // 0x406bf1
    unsigned char v15 = *(char *)v13; // 0x406c0d
    char v16 = *(char *)v12; // 0x406c0d
    char v17 = v16; // 0x406c0d
    bool v18 = false; // 0x406c0d
    while (v15 == v16) {
        // 0x406c00
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
// Address range: 0x406c20 - 0x407182
int64_t function_406c20(void) {
    char * v1 = nl_langinfo(14); // 0x406c36
    char * v2 = g75; // 0x406c3b
    char * v3; // 0x406c20
    int64_t v4; // 0x406c20
    int64_t v5; // 0x406c20
    int64_t v6; // 0x406c20
    int64_t v7; // 0x406c20
    int32_t size; // 0x406c20
    int32_t size2; // 0x406c20
    int32_t len; // 0x406cf2
    int64_t v8; // 0x406cf2
    char * env_val; // 0x406cdd
    if (v2 == NULL) {
        // 0x406cd8
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406d45;
        } else {
            // 0x406cea
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406d45;
            } else {
                // 0x406cef
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x406cdd
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x407175
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406d45;
                    } else {
                        // 0x4070e9
                        size2 = len + 14;
                        goto lab_0x406d0b;
                    }
                } else {
                    goto lab_0x406d0b;
                }
            }
        }
    } else {
        // 0x406c20
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x406c5a;
    }
  lab_0x406f8c:;
    // 0x406f8c
    struct _IO_FILE * stream; // 0x406dcb
    int32_t v10 = __uflow(stream); // 0x406f8f
    int64_t v11; // 0x406c20
    int64_t v12 = v11; // 0x406f99
    int64_t v13; // 0x406c20
    int64_t v14 = v13; // 0x406f99
    int32_t v15 = v10; // 0x406f99
    int64_t v16; // 0x406c20
    int64_t v17 = v16; // 0x406f99
    int64_t v18 = v11; // 0x406f99
    int64_t v19 = v13; // 0x406f99
    int64_t v20 = v16; // 0x406f99
    if (v10 == -1) {
        // break -> 0x406f9f
        goto lab_0x406f9f;
    }
    goto lab_0x406e19;
  lab_0x406e0e:;
    // 0x406e0e
    int64_t v90; // 0x406c20
    int64_t * v32; // 0x406e00
    *v32 = v90 + 1;
    int64_t v89; // 0x406c20
    v12 = v89;
    int64_t v91; // 0x406c20
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406c20
    v17 = v92;
    goto lab_0x406e19;
  lab_0x406e19:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406c20
    int32_t v25; // bp-120, 0x406c20
    int32_t v26; // bp-184, 0x406c20
    int64_t v27; // 0x406dcb
    int64_t v28; // 0x406de8
    int64_t v29; // 0x406ded
    int64_t * v30; // 0x406e04
    switch (c) {
        case 32: {
            goto lab_0x406e00;
        }
        case 10: {
            goto lab_0x406e00;
        }
        case 9: {
            goto lab_0x406e00;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406ff1
            int32_t v33; // 0x406c20
            char v34; // 0x406c20
            int32_t v35; // 0x406ffe
            if (v31 < *v30) {
                // 0x406fd0
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406ffb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406ff1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406fd0
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406ffb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406fe0
                v36 = v33;
            }
            // 0x4070cf
            if (v36 == -1) {
                // break -> 0x406f9f
                break;
            }
            goto lab_0x406e00;
        }
        default: {
            // 0x406e2f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406f9f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406e58
            int64_t v39 = v37 + 4; // 0x406e5a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406e66
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406e68
            while (v41 == 0) {
                // 0x406e58
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406e86
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406e92
            int64_t v45 = v43 + 4; // 0x406e94
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406ea0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406ea2
            while (v47 == 0) {
                // 0x406e92
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x406e8f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406eb8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406ec8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x406ecc
            int64_t v52 = v51 + v48; // 0x406ed5
            int64_t * mem; // 0x406c20
            int64_t v53; // 0x406c20
            int64_t v54; // 0x406c20
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40700b
                int64_t v56 = v55 + 3; // 0x407017
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406ef1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406f00
            if (mem == NULL) {
                // 0x40712c
                free((int64_t *)v21);
                function_405bf0(v27, v53);
                v24 = (int64_t)&g10;
                goto lab_0x406da4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406f18
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406f22
            uint32_t v62 = (int32_t)v59; // 0x406f25
            int64_t v63; // 0x406c20
            if (v62 >= 8) {
                // 0x407034
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40704e
                int64_t v66 = v61 - v65; // 0x407052
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40705d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40706e
                    int64_t v70 = v69 & 0xffffffff; // 0x40706e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40706b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x4070ff
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406f37
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406f3b
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
            int64_t v73 = v51 + 1; // 0x406f4b
            int64_t v74 = v60 - 1; // 0x406f4f
            uint32_t v75 = (int32_t)v73; // 0x406f54
            int64_t v76; // 0x406c20
            if (v75 >= 8) {
                // 0x407082
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40708c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40709c
                int64_t v80 = v74 - v79; // 0x4070a0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x4070ab
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x4070bb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x4070b9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x407116
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40711e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406f66
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406f6a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x407163
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406f7e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x406e0e;
            } else {
                goto lab_0x406f8c;
            }
        }
    }
  lab_0x406e00:;
    int64_t v93 = v23; // 0x406c20
    int64_t v94 = v22; // 0x406c20
    int64_t v95 = v21; // 0x406c20
    goto lab_0x406e00_2;
  lab_0x406d45:;
    int64_t * mem3 = malloc(size); // 0x406d45
    int64_t v97 = (int64_t)&g10; // 0x406d50
    int64_t v98; // 0x406c20
    int64_t path; // 0x406c20
    if (mem3 == NULL) {
        goto lab_0x406d22;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406d45
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406d66;
    }
  lab_0x406c5a:;
    int64_t str = v1 == NULL ? (int64_t)&g10 : (int64_t)v1; // 0x406c4d
    char v100 = *v3; // 0x406c5a
    int64_t v101; // 0x406c20
    if (v100 == 0) {
        // 0x406cb4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406c20
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406c20
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406ca0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406ca7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406c70
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x406c7d
        char v107 = *(char *)v106; // 0x406c82
        v102 = v107;
        if (v107 == 0) {
            // 0x406cb4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x406c8b
    v104 = v103 + 1;
  lab_0x406ca7:
    // 0x406cb4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406d22:;
    char * v108 = (char *)v97;
    g75 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x406c5a;
  lab_0x406d66:;
    int64_t v109 = v98 + path; // 0x406d66
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406d92
    v24 = (int64_t)&g10;
    if (fd >= 0) {
        // 0x406dc1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x4070f2
            close(fd);
            v24 = (int64_t)&g10;
        } else {
            // 0x406de5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406e00_2:;
                uint64_t v96 = *v32; // 0x406e00
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406f8c;
                } else {
                    goto lab_0x406e0e;
                }
            }
          lab_0x406f9f:
            // 0x406f9f
            function_405bf0(v27, v19);
            v24 = (int64_t)&g10;
            if (v18 != 0) {
                // 0x406fbe
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406da4;
  lab_0x406d0b:;
    int64_t * mem4 = malloc(size2); // 0x406d0b
    v97 = (int64_t)&g10;
    if (mem4 != NULL) {
        // 0x406db1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406d66;
    } else {
        goto lab_0x406d22;
    }
  lab_0x406da4:
    // 0x406da4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406d22;
}
// Address range: 0x407190 - 0x4071ed
int64_t function_407190(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407190
    return function_401408();
}
// Address range: 0x4071f0 - 0x4071f1
int64_t function_4071f0(void) {
    // 0x4071f0
    int64_t result; // 0x4071f0
    return result;
}
// Address range: 0x407200 - 0x407218
int64_t function_407200(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407200
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g16);
}
// Address range: 0x407218 - 0x407238
int64_t function_407218(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g12; // 0x407222
    while (*(int64_t *)v1 != -1) {
        // 0x407223
        v1 -= 8;
    }
    // 0x407234
    return result;
}
